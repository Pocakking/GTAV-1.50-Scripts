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
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_72 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	var uLocal_76 = 0;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	vector3 vLocal_80 = { 0f, 0f, 0f };
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	int iLocal_90 = 0;
	vector3 vLocal_91 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	vector3 vLocal_97 = { 0f, 0f, 0f };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	char[] cLocal_103[8] = 0;
	char* sLocal_104 = NULL;
	char* sLocal_105 = NULL;
	char* sLocal_106 = NULL;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	int iLocal_121 = 0;
	vector3 vLocal_122 = { 0f, 0f, 0f };
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_128 = { 0f, 0f, 0f };
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	bool bLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	vector3 vLocal_145 = { 0f, 0f, 0f };
	int iLocal_148 = 0;
	bool bLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	bool bLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	bool bLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	float fLocal_165 = 0f;
	vector3 vLocal_166 = { 0f, 0f, 0f };
	vector3 vLocal_169 = { 0f, 0f, 0f };
	vector3 vLocal_172 = { 0f, 0f, 0f };
	vector3 vLocal_175 = { 0f, 0f, 0f };
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_184 = { 0f, 0f, 0f };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 16;
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
	char[] cLocal_359[8] = 0;
	char[] cLocal_360[8] = 0;
	char[] cLocal_361[8] = 0;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	char* sLocal_367 = NULL;
	char* sLocal_368 = NULL;
	char* sLocal_369 = NULL;
	char* sLocal_370 = NULL;
	vector3 vLocal_371 = { 0f, 0f, 0f };
	vector3 vLocal_374 = { 0f, 0f, 0f };
	char[] cLocal_377[8] = 0;
	char[] cLocal_378[8] = 0;
	int iLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = -1;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 1000;
	var uLocal_390 = 1000;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 15;
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
	var uLocal_666 = 1;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	vector3 vLocal_670 = { 0f, 0f, 0f };
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
	bool bVar0;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_91 = { -131.052f, -1627f, 31.1755f };
	vLocal_94 = { 287.888f, -284.603f, 52.967f };
	vLocal_97 = { -319.66f, -832.28f, 31.61f };
	vLocal_100 = { 31f, -1019f, 28.5f };
	sLocal_120 = "";
	cLocal_359 = "RANDOM@MUGGING3";
	cLocal_360 = "pickup_object";
	cLocal_377 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_379 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (iLocal_48 == 5 || iLocal_48 == 12)
		{
			func_298(25, iLocal_90);
			func_280();
		}
		else
		{
			func_280();
		}
	}
	vLocal_122 = { ScriptParam_0.f_1[0 /*3*/] };
	func_279(&uLocal_393, 3);
	func_278();
	if ((iLocal_90 == 1 && func_277(55)) && !func_276(55))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_235(vLocal_122, 25, iLocal_90, 0, 0))
	{
		func_232(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_229(&uLocal_393);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		func_228(iLocal_65, &uLocal_392);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_149)
		{
			switch (iLocal_46)
			{
				case 0:
					if (func_214())
					{
						PED::SET_CREATE_RANDOM_COPS(0);
						MISC::CLEAR_AREA_OF_VEHICLES(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, false, 0);
						iLocal_156 = 1;
						iLocal_46 = 1;
					}
					else if (func_213())
					{
						func_280();
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (iLocal_141 == 0)
						{
							iLocal_141 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101, vLocal_122, 0f);
						}
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						switch (iLocal_48)
						{
							case 1:
								func_205();
								break;
							
							case 2:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_49)
								{
									case 0:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (PED::IS_PED_INJURED(iLocal_63) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), 0))
										{
											bVar0 = PED::IS_PED_INJURED(iLocal_62);
											if (!OBJECT::DOES_PICKUP_EXIST(iLocal_191))
											{
											}
											if (bVar0 == 0 && iLocal_90 == 1)
											{
												PED::SET_PED_TO_RAGDOLL(iLocal_62, 500, 1000, 0, 0, 0, 0);
												TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_62, true);
												func_204(1);
												func_199();
											}
										}
										else
										{
											func_169();
										}
										if (iLocal_669 == 1 && bLocal_149 == 1)
										{
											iLocal_48 = 4;
										}
										else if (bLocal_149)
										{
											iLocal_49 = 2;
										}
										break;
									
									case 2:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_168();
										if (iLocal_54 && !func_167())
										{
											iLocal_49 = 4;
										}
										break;
									
									case 4:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_166())
										{
											func_165();
										}
										if (bLocal_155)
										{
											iLocal_49 = 5;
										}
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 242628503) == 7)
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
											TASK::TASK_LOOK_AT_ENTITY(0, iLocal_63, 5000, 0, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
											TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
										}
										break;
									
									case 5:
										func_162();
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_62, 0))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 242628503) == 7)
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_63, 0);
												TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
											}
										}
										break;
								}
								if (func_161())
								{
									iLocal_48 = 11;
								}
								if (bLocal_149)
								{
								}
								func_160();
								if (iLocal_49 == 0)
								{
									if (func_158())
									{
										if (iLocal_143 == 4)
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_66))
											{
												HUD::REMOVE_BLIP(&iLocal_66);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_65))
											{
												HUD::REMOVE_BLIP(&iLocal_65);
											}
											if (!HUD::DOES_BLIP_EXIST(iLocal_67))
											{
												iLocal_67 = func_156(iLocal_191);
											}
											iLocal_48 = 4;
										}
										else
										{
											iLocal_48 = 3;
										}
									}
									if (func_155())
									{
										func_154();
									}
								}
								if (func_153())
								{
									func_152();
									func_151();
									if (ENTITY::IS_ENTITY_AT_COORD(iLocal_62, vLocal_184, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_143 = 2;
										iLocal_48 = 3;
									}
									else
									{
										iLocal_48 = 4;
									}
								}
								if (bLocal_149)
								{
									if (!PED::IS_PED_IN_COMBAT(iLocal_63, 0))
									{
										func_149(iLocal_66, &uLocal_142);
									}
									else if (HUD::DOES_BLIP_EXIST(iLocal_66))
									{
										if (HUD::GET_BLIP_COLOUR(iLocal_66) == 1)
										{
										}
										else
										{
											HUD::SET_BLIP_AS_FRIENDLY(iLocal_66, false);
											HUD::SET_BLIP_COLOUR(iLocal_66, 1);
										}
									}
								}
								if (func_148())
								{
									iLocal_48 = 10;
								}
								break;
							
							case 4:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(1);
								if (func_166())
								{
									func_165();
									func_162();
								}
								if (func_161())
								{
									iLocal_48 = 11;
								}
								func_139();
								break;
							
							case 5:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(1);
								if (!bLocal_152)
								{
									func_138(iLocal_62, &uLocal_193);
									uLocal_193 = uLocal_193;
									func_137();
									func_136();
									func_135();
									if (func_134())
									{
										func_133();
										func_199();
									}
									if (func_126(func_127()) < iLocal_192)
									{
										iLocal_48 = 12;
									}
								}
								func_61();
								break;
							
							case 10:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_60();
								break;
							
							case 3:
								func_59();
								break;
							
							case 11:
								func_58();
								break;
							
							case 6:
								if (func_161())
								{
									iLocal_48 = 11;
								}
								func_41();
								break;
							
							case 8:
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_48 = 6;
									}
									else
									{
										func_280();
									}
								}
								break;
							
							case 9:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
								{
									if (PED::IS_PED_INJURED(iLocal_63))
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_66))
										{
											HUD::REMOVE_BLIP(&iLocal_66);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_62))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
											{
												OBJECT::DELETE_OBJECT(&iLocal_64);
											}
											func_40();
											iLocal_56 = 1;
											func_139();
										}
									}
								}
								break;
							
							case 12:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
								{
									OBJECT::DELETE_OBJECT(&iLocal_64);
								}
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_199();
								break;
							
							case 13:
								func_39();
								break;
							}
					}
					if (bLocal_60)
					{
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_191))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
							{
								if (SYSTEM::VDIST(vLocal_184, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 150f)
								{
									func_280();
								}
							}
						}
					}
					else if (bLocal_149)
					{
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							if (iLocal_48 != 6)
							{
								if (func_38(PLAYER::PLAYER_PED_ID(), iLocal_63, 1) > 150f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_63) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_63)))
								{
									func_37(&uLocal_380, 0, 0);
									iLocal_48 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_66, iLocal_63, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_37(&uLocal_380, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
								{
									if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_64, iLocal_62))
									{
										ENTITY::DETACH_ENTITY(iLocal_64, 1, true);
									}
								}
							}
						}
					}
					if (iLocal_150)
					{
						if (!iLocal_163)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_62, 0))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_63, true), ENTITY::GET_ENTITY_COORDS(iLocal_62, true), true) > 100f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_63, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									iLocal_163 = 1;
								}
							}
						}
					}
					if (bLocal_149 && !iLocal_150)
					{
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							if (iLocal_90 == 3)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_63, 1805844857) != 1)
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_63);
									TASK::TASK_SMART_FLEE_PED(iLocal_63, iLocal_62, 200f, -1, 0, 0);
									PED::FORCE_PED_MOTION_STATE(iLocal_63, -530524, true, 0, 0);
									iLocal_150 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_63, 1805844857) != 1)
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_63);
								TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								PED::FORCE_PED_MOTION_STATE(iLocal_63, -530524, true, 0, 0);
								iLocal_150 = 1;
							}
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_63, -2134635134))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_63, iLocal_62, 200f, -1, 0, 0);
								PED::FORCE_PED_MOTION_STATE(iLocal_63, -530524, true, 0, 0);
								iLocal_150 = 1;
							}
							if (iLocal_90 == 1 || iLocal_90 == 4)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_63, cLocal_359, sLocal_369, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_63, cLocal_359, sLocal_369) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										PED::FORCE_PED_MOTION_STATE(iLocal_63, -530524, true, 0, 0);
										iLocal_150 = 1;
									}
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_63, cLocal_359, sLocal_367, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_63, cLocal_359, sLocal_367) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										PED::FORCE_PED_MOTION_STATE(iLocal_63, -530524, true, 0, 0);
										iLocal_150 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_1()//Position - 0xA1E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (PED::IS_PED_INJURED(iLocal_62))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (PED::IS_PED_INJURED(iLocal_63))
				{
					func_280();
				}
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_62))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_63))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_66))
		{
			HUD::REMOVE_BLIP(&iLocal_66);
		}
	}
	if (!iLocal_161)
	{
		if (PED::IS_PED_INJURED(iLocal_63))
		{
			func_2(&uLocal_194, 1);
			iLocal_161 = 1;
		}
	}
	if (!iLocal_162)
	{
		if (PED::IS_PED_INJURED(iLocal_62))
		{
			func_2(&uLocal_194, 2);
			iLocal_162 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)//Position - 0xAB0
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0xACD
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()//Position - 0xC26
{
	if (!PED::IS_PED_INJURED(iLocal_63) || !bLocal_133)
	{
		func_5(&uLocal_380, iLocal_63, 0, 0, 1, 1, 1);
	}
	else
	{
		func_37(&uLocal_380, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xC5B
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0xC75
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0xC92
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_37(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_8(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0xCCA
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_36(iVar0))
	{
		func_35();
	}
	if (func_34(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_29(uParam0, bParam7, bParam9, 0))
			{
				func_25(uParam0, iParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_36(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_36(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_11(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_36(sParam5))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_37(uParam0, iVar0, 1);
				}
			}
			if (!func_29(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_37(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)//Position - 0x1033
{
	if (func_34(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_10(var uParam0)//Position - 0x109C
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_11(bool bParam0)//Position - 0x10C7
{
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111560.f_10044.f_100++;
			}
			return Global_111560.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111560.f_10044.f_101++;
			}
			return Global_111560.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111560.f_10044.f_102++;
			}
			return Global_111560.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_12(char[4] cParam0, int iParam1)//Position - 0x1171
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_13(char* sParam0)//Position - 0x1188
{
	if (!func_14(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_36(sParam0)) || func_36("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1220
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_24(0))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58652)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_22() || func_21(Global_4456448.f_190930)) || func_20())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_19(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_18(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686915)
	{
		return 0;
	}
	if (func_15(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)//Position - 0x1479
{
	if (iParam0 != func_17())
	{
		if (func_16(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == PLAYER::PLAYER_ID()) && func_16(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_16(int iParam0, bool bParam1, bool bParam2)//Position - 0x14DF
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

int func_17()//Position - 0x1529
{
	return -1;
}

int func_18(int iParam0, int iParam1)//Position - 0x1532
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_19(int iParam0, int iParam1)//Position - 0x1594
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_20()//Position - 0x1619
{
	return Global_2448961.f_17;
}

bool func_21(int iParam0)//Position - 0x1627
{
	return iParam0 == 51;
}

var func_22()//Position - 0x1634
{
	return Global_2448961.f_16;
}

bool func_23()//Position - 0x1642
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_24(int iParam0)//Position - 0x1657
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

void func_25(var uParam0, int iParam1, vector3 vParam2, int iParam5)//Position - 0x16B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319113 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		func_37(uParam0, 0, 0);
	}
	if (func_28(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_26())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_26()//Position - 0x17C1
{
	return func_27(PLAYER::PLAYER_ID());
}

int func_27(int iParam0)//Position - 0x17D1
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_28(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x17F0
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1837
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_32(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_31(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_35();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1BA3
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_31(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1BF5
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_32(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C3E
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_33(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C9D
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x1CF3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()//Position - 0x1D4E
{
	MISC::SET_BIT(&Global_7357, 4);
}

int func_36(char* sParam0)//Position - 0x1D5E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_37(var uParam0, int iParam1, int iParam2)//Position - 0x1D71
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2531497.f_4591, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_36(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_36(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

float func_38(int iParam0, int iParam1, bool bParam2)//Position - 0x1E4C
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, bParam2);
}

void func_39()//Position - 0x1EAA
{
	func_280();
}

void func_40()//Position - 0x1EB6
{
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_191))
	{
		if (PED::IS_PED_INJURED(iLocal_63))
		{
			vLocal_184 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_63, 1067030938, 1069547520) };
		}
		else
		{
			vLocal_184 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_63, true), 1.2f, 1.5f) };
		}
		iLocal_191 = OBJECT::CREATE_PICKUP(joaat("pickup_money_wallet"), vLocal_184, iLocal_144, iLocal_192, 1, iLocal_85);
		iLocal_67 = func_156(iLocal_191);
		func_37(&uLocal_380, 0, 0);
		bLocal_60 = true;
	}
}

void func_41()//Position - 0x1F2B
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "flee_backward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		}
		func_42(&uLocal_194, cLocal_103, sLocal_110, 4, 0, 0, 0);
		iLocal_154 = 1;
		PED::SET_PED_KEEP_TASK(iLocal_62, true);
		SYSTEM::WAIT(0);
		func_280();
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2008
{
	func_57(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)//Position - 0x2056
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
					func_56();
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
		if (func_55(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_54();
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
				func_52();
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
				if (func_51())
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
			if (func_50())
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
			func_49();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_48();
		func_44();
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
		func_56();
	}
	return 0;
}

void func_44()//Position - 0x2326
{
	if (!func_45())
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

int func_45()//Position - 0x235D
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_17())
	{
		return 0;
	}
	if (func_46(PLAYER::PLAYER_ID()))
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

bool func_46(int iParam0)//Position - 0x23C3
{
	return func_47(iParam0, 20);
}

bool func_47(int iParam0, int iParam1)//Position - 0x23D3
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_48()//Position - 0x23EE
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

void func_49()//Position - 0x241E
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

int func_50()//Position - 0x24B3
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_51()//Position - 0x24DA
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

void func_52()//Position - 0x2573
{
	if (func_53(14))
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
		Global_19486 = func_127();
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

bool func_53(int iParam0)//Position - 0x2615
{
	return Global_41396 == iParam0;
}

void func_54()//Position - 0x2623
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

bool func_55(int iParam0, int iParam1)//Position - 0x2679
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

void func_56()//Position - 0x26B4
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

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x270B
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

void func_58()//Position - 0x2761
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		TASK::CLEAR_PED_TASKS(iLocal_62);
		TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_62, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			OBJECT::DELETE_OBJECT(&iLocal_64);
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
	}
	if (PED::IS_PED_INJURED(iLocal_63) || PED::IS_PED_INJURED(iLocal_62))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_66))
		{
			HUD::REMOVE_BLIP(&iLocal_66);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_191))
		{
			if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
			{
				iLocal_56 = 1;
				func_139();
			}
			else
			{
				func_147(0);
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_59()//Position - 0x281A
{
	bool bVar0;
	
	func_139();
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_191))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
		{
		}
	}
	if (iLocal_143 == 1)
	{
		if (!iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				TASK::CLEAR_PED_TASKS(iLocal_63);
				TASK::TASK_COMBAT_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_63, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_191))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
					{
						TASK::CLEAR_PED_TASKS(iLocal_62);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
					}
				}
			}
			iLocal_51 = 1;
		}
	}
	if (iLocal_143 == 2)
	{
		if (!iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				TASK::CLEAR_PED_TASKS(iLocal_63);
				TASK::TASK_COMBAT_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_63, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_63, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_63);
			}
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_191))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_62, OBJECT::GET_PICKUP_COORDS(iLocal_191), 10f, 10f, 10f, false, true, 0))
						{
							if (iLocal_90 == 3)
							{
								if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "handsup_standing_exit", 3))
								{
									TASK::CLEAR_PED_TASKS(iLocal_62);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
									iLocal_51 = 1;
								}
							}
							else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, sLocal_370, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, sLocal_366, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, sLocal_368, 3))
							{
								TASK::CLEAR_PED_TASKS(iLocal_62);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
								iLocal_51 = 1;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
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
					if (iLocal_90 == 3)
					{
						if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "handsup_standing_exit", 3))
						{
							TASK::CLEAR_PED_TASKS(iLocal_62);
							TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_62, true);
							if (HUD::DOES_BLIP_EXIST(iLocal_65))
							{
								HUD::REMOVE_BLIP(&iLocal_65);
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
							iLocal_51 = 1;
							iLocal_48 = 9;
						}
					}
					else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, sLocal_370, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, sLocal_366, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, sLocal_368, 3))
					{
						TASK::CLEAR_PED_TASKS(iLocal_62);
						TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_62, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_65))
						{
							HUD::REMOVE_BLIP(&iLocal_65);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
						iLocal_51 = 1;
						iLocal_48 = 9;
					}
				}
			}
		}
	}
	if (iLocal_143 == 3)
	{
		if (!iLocal_51)
		{
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				TASK::CLEAR_PED_TASKS(iLocal_63);
				TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_63, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_63, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_63);
			}
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				TASK::CLEAR_PED_TASKS(iLocal_62);
				TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_62, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
			}
			iLocal_56 = 1;
			iLocal_51 = 1;
		}
	}
	if (iLocal_143 == 1 || iLocal_143 == 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_62))
		{
			if (iLocal_51)
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_191))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_360, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_62, cLocal_360, "pickup_low") > 0.5f)
							{
								if (OBJECT::DOES_PICKUP_EXIST(iLocal_191))
								{
									if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
									{
										func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
										OBJECT::REMOVE_PICKUP(iLocal_191);
										bLocal_52 = true;
									}
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 242628503) == 7)
						{
							TASK::CLEAR_PED_TASKS(iLocal_62);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
							TASK::TASK_PLAY_ANIM(0, cLocal_360, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
							PED::SET_PED_KEEP_TASK(iLocal_62, true);
						}
					}
					else if (bLocal_52)
					{
						PED::SET_PED_MONEY(iLocal_62, iLocal_192);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
						func_204(3);
						func_199();
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_62, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_65))
						{
							HUD::REMOVE_BLIP(&iLocal_65);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
						iLocal_51 = 1;
						iLocal_48 = 12;
					}
				}
				else if (bLocal_52)
				{
					PED::SET_PED_MONEY(iLocal_62, iLocal_192);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
					func_204(3);
					func_199();
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_62, true);
					if (HUD::DOES_BLIP_EXIST(iLocal_65))
					{
						HUD::REMOVE_BLIP(&iLocal_65);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
					iLocal_51 = 1;
					iLocal_48 = 12;
				}
			}
		}
		else
		{
			iLocal_48 = 9;
		}
	}
}

void func_60()//Position - 0x2D4D
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		TASK::CLEAR_PED_TASKS(iLocal_62);
		TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_62, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
	}
}

void func_61()//Position - 0x2D84
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	struct<2> Var7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	int iVar18;
	int iVar19;
	
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (!bLocal_152)
		{
			if (iLocal_153)
			{
				vVar15 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				iVar18 = 1;
				if (iLocal_90 == 1)
				{
					if (vVar15.z > 33.5f)
					{
						iVar18 = 0;
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 5f, 5f, 5f, 0, 1, 0) && iVar18 == 1)
				{
					if (func_124(2))
					{
						HUD::CLEAR_HELP(1);
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (func_123(1, 0, 1))
						{
							if (!func_122())
							{
								if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
								{
									func_114(1, 1, 1, 0, 0, 0);
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										while (!func_112(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fLocal_77, 1, 1056964608, 0, 1, 0) || func_167())
										{
											HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
											SYSTEM::WAIT(0);
										}
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									if (!PED::IS_PED_INJURED(iLocal_62))
									{
										PED::SET_PED_CAN_RAGDOLL(iLocal_62, 0);
									}
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
									EVENT::REMOVE_SHOCKING_EVENT(iLocal_141);
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										func_110();
									}
									bLocal_152 = true;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_108(ENTITY::GET_ENTITY_COORDS(iLocal_62, true), &uLocal_76, &fLocal_77);
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 15f, 15f, 15f, 0, 1, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				if (iLocal_47 == 2)
				{
					TASK::TASK_PLAY_ANIM(0, cLocal_377, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
				PED::FORCE_PED_MOTION_STATE(iLocal_62, -668482597, false, 0, 0);
				iLocal_153 = 1;
			}
		}
		if (bLocal_152)
		{
			switch (iLocal_151)
			{
				case 0:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							func_105(iLocal_62, &vLocal_125, &vLocal_128, cLocal_361, sLocal_363);
							if (iLocal_90 == 1)
							{
								if (vLocal_128.z > 225f && vLocal_128.z < 265f)
								{
									if (vLocal_128.z < 245f)
									{
										vLocal_128.z = 225f;
									}
									else
									{
										vLocal_128.z = 265f;
									}
								}
								else if (vLocal_128.z > 45f && vLocal_128.z < 85f)
								{
									if (vLocal_128.z < 65f)
									{
										vLocal_128.z = 45f;
									}
									else
									{
										vLocal_128.z = 85f;
									}
								}
							}
							vLocal_125.z = (vLocal_125.z + 2f);
							MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_125, &(vLocal_125.f_2), 0, 0);
							vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, vLocal_125, vLocal_128, 0f, 2) };
							vVar10 = { vVar1 - vLocal_125 };
							vVar10.z = 0f;
							fVar13 = SYSTEM::VMAG(vVar10);
							MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &(vVar1.f_2), 0, 0);
							fVar14 = (vLocal_125.z - vVar1.z);
							vLocal_128.x = MISC::ATAN2(fVar14, fVar13);
							if (vLocal_128.x > 30f || vLocal_128.x < -30f)
							{
								vLocal_128.x = 0f;
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
							{
								iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &uVar4, &Var7);
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, vLocal_125, (Var7.f_1 + 1.5f), (Var7.f_1 + 1.5f), 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, vLocal_125, vLocal_128, 0, 2), (Var7.f_1 + 1f), (Var7.f_1 + 1f), 3f, false, true, 0))
								{
									if (iLocal_90 == 1)
									{
										if (vLocal_128.z > 40f && vLocal_128.z < 220f)
										{
											vLocal_80 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_79 = 331.9427f;
										}
										else
										{
											vLocal_80 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_79 = 148.9075f;
										}
									}
									else if (iLocal_90 == 3)
									{
										if (vLocal_128.z > 160f && vLocal_128.z < 340f)
										{
											vLocal_80 = { -319.709f, -837.0066f, 30.449f };
											fLocal_79 = 61.7986f;
										}
										else
										{
											vLocal_80 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_79 = 269.6216f;
										}
									}
									else if (iLocal_90 == 4)
									{
										if (vLocal_128.z > 240f || vLocal_128.z < 60f)
										{
											vLocal_80 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_79 = 156.7986f;
										}
										else
										{
											vLocal_80 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_79 = 344.6216f;
										}
									}
									else
									{
										fLocal_79 = ENTITY::GET_ENTITY_HEADING(iVar0);
										vLocal_80 = { func_103(vLocal_125, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, vLocal_125, vLocal_128, 0, 2)) };
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
									{
										ENTITY::SET_ENTITY_COORDS(iVar0, vLocal_80, 1, false, 0, 1);
										ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_79);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
									}
								}
							}
						}
						MISC::CLEAR_AREA_OF_OBJECTS(vLocal_125, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(vLocal_125, 20f, 0);
						MISC::CLEAR_AREA(vLocal_125, 2f, 1, 1, 0, false);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
						iLocal_64 = OBJECT::CREATE_OBJECT(iLocal_85, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_64, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						iLocal_131 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_125, vLocal_128, 2);
						PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iLocal_131, false);
						iLocal_132 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_132, iLocal_131, sLocal_364, cLocal_361);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_131, cLocal_361, sLocal_362, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_62);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_62, iLocal_131, cLocal_361, sLocal_363, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						CAM::SET_CAM_ACTIVE(iLocal_132, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
						func_42(&uLocal_194, cLocal_103, sLocal_115, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_151++;
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				
				case 1:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_131) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) > 0.9f) || func_101(1000))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(iLocal_132, false);
						CAM::DESTROY_CAM(iLocal_132, 0);
						func_100();
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_62);
							PED::SET_PED_MONEY(iLocal_62, (iLocal_192 - (iLocal_192 / 10)));
							vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, vLocal_125, vLocal_128, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &(vVar1.f_2), 0, 0);
							ENTITY::SET_ENTITY_COORDS(iLocal_62, vVar1, 1, false, 0, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_62, false);
							vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_361, sLocal_363, vLocal_125, vLocal_128, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(iLocal_62, vVar1.z);
							if (iLocal_90 == 4)
							{
								if (func_99(vVar1.z, 0f, 90f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_62), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_62), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
								TASK::TASK_WANDER_STANDARD(0, vVar1.z, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
							}
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_62, cLocal_378, 1048576000);
							PED::FORCE_PED_MOTION_STATE(iLocal_62, -668482597, true, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_62, true);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
						{
							OBJECT::DELETE_OBJECT(&iLocal_64);
						}
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							PED::SET_PED_MONEY(iLocal_62, (iLocal_192 - (iLocal_192 / 10)));
							PED::SET_PED_CAN_RAGDOLL(iLocal_62, 1);
						}
						iVar19 = (iLocal_192 / 100);
						iVar19 *= 90;
						SYSTEM::WAIT(0);
						CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
						func_64(func_127(), 1, iVar19);
						func_63(joaat("rc_wallets_returned"), 1);
						func_204(3);
						func_199();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -3856156))
					{
						if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_64, PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(iLocal_64, 0, true);
								if (PED::IS_PED_MALE(iLocal_62))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_64, iLocal_62, PED::GET_PED_BONE_INDEX(iLocal_62, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_64, iLocal_62, PED::GET_PED_BONE_INDEX(iLocal_62, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_61)
								{
									if (func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0) || func_62())
									{
										iLocal_61 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_61)
					{
						if (func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0) || func_62())
						{
							iLocal_61 = 1;
						}
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				}
		}
	}
	else
	{
		func_280();
	}
}

int func_62()//Position - 0x36E5
{
	if (Global_20805 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
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

void func_63(int iParam0, int iParam1)//Position - 0x370A
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

int func_64(int iParam0, int iParam1, int iParam2)//Position - 0x372D
{
	if (func_98(iParam0) == 3)
	{
		return 0;
	}
	if (func_98(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_98(iParam0), 0, iParam1, iParam2, 0);
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3761
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
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
					func_96(99, 1);
					func_63(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
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
							func_63(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_63(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_property"), iParam3);
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
									func_63(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(iVar1);
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
					func_63(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_total_cash_earned"), iParam3);
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
	func_67(iParam0);
	if (Global_41396 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)//Position - 0x3D60
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

void func_67(int iParam0)//Position - 0x3FE2
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

void func_68(int iParam0)//Position - 0x404A
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_74(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_74(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_74(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_74(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_71(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_71(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_71(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_71(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_71(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_71(8274, 0, -1, 1, 0);
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
	else if (MISC::IS_BIT_SET(Global_111560.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_70() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111560.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_70() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_69(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_69(int iParam0)//Position - 0x41D9
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

int func_70()//Position - 0x42D4
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x42E1
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)//Position - 0x4311
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
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

int func_73()//Position - 0x4345
{
	return Global_1312745;
}

int func_74(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x4351
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
		iParam2 = func_73();
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

void func_75(int iParam0)//Position - 0x49A3
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_76(int iParam0)//Position - 0x49C3
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
		return func_78(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_78(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_78(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_78(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_77(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_77(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_77(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_77(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_77(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_77(8274, -1, 0);
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
	return MISC::IS_BIT_SET(Global_2097152[func_70() /*10828*/].f_6168.f_10, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)//Position - 0x4B73
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_72(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_78(int iParam0, int iParam1, int iParam2)//Position - 0x4BA5
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	iVar1 = func_80(iParam0, iParam1);
	uVar2 = func_79(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_79(int iParam0)//Position - 0x4BE2
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

int func_80(int iParam0, int iParam1)//Position - 0x4F7E
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_73();
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

int func_81(bool bParam0)//Position - 0x52F7
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
		func_95(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)//Position - 0x53AE
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)//Position - 0x53C9
{
	if (func_53(14) && !func_94(iParam0))
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
	if (func_93(&Global_4269915))
	{
		if (func_91(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_4269915, iParam0))
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

int func_84(var uParam0, int iParam1)//Position - 0x5466
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)//Position - 0x5517
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)//Position - 0x5592
{
	return (*uParam0)[iParam1] == 78;
}

void func_87(var uParam0)//Position - 0x55A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_4269914 - 0.5f));
}

void func_88(var uParam0, int iParam1)//Position - 0x55D7
{
	(*uParam0)[iParam1] = 78;
}

void func_89(var uParam0, float fParam1)//Position - 0x55E7
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

float func_90(var uParam0)//Position - 0x5604
{
	return uParam0->f_80;
}

bool func_91(var uParam0, int iParam1)//Position - 0x5610
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)//Position - 0x5622
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

bool func_93(var uParam0)//Position - 0x564F
{
	return uParam0->f_79 == 1;
}

int func_94(int iParam0)//Position - 0x565D
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

int func_95(int iParam0, int iParam1)//Position - 0x56AD
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

void func_96(int iParam0, int iParam1)//Position - 0x56FE
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

void func_97()//Position - 0x575B
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

int func_98(int iParam0)//Position - 0x57D0
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_99(float fParam0, float fParam1, float fParam2)//Position - 0x57E1
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

void func_100()//Position - 0x5856
{
	int iVar0;
	
	iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 65f, 1, 2);
	CAM::SET_CAM_ACTIVE(iVar0, true);
}

int func_101(int iParam0)//Position - 0x5894
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_102())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_102()//Position - 0x58DE
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

Vector3 func_103(vector3 vParam0, vector3 vParam3)//Position - 0x5910
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	vector3 vVar22;
	vector3 vVar25;
	var uVar28;
	int iVar29;
	
	iVar13 = 0;
	iVar14 = 1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &vVar7, &vVar10);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, 3, &vVar4, 1, 1077936128, 0);
	if (SYSTEM::VDIST(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar13 = 8;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (SYSTEM::VDIST(vVar4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (vVar10.y + IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(vVar4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(vVar10.y + IntToFloat(iVar14)), 0f)))
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (vVar10.y + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(vVar10.y + IntToFloat(iVar14)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar22 = { func_104(vVar1, 0f, vVar10) };
						vVar25 = { func_104(vVar1, 0f, vVar7) };
						iVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam3, true) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(vVar4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (vVar10.y - IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(vVar4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(vVar10.y - IntToFloat(iVar14)), 0f)))
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (vVar10.y - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(vVar10.y - IntToFloat(iVar14)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar22 = { func_104(vVar1, 0f, vVar10) };
						vVar25 = { func_104(vVar1, 0f, vVar7) };
						iVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam3, true) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST(vVar4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (vVar10.x + IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(vVar4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(vVar10.x + IntToFloat(iVar14)), 0f, 0f)))
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (vVar10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(vVar10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar22 = { func_104(vVar1, 0f, vVar10) };
						vVar25 = { func_104(vVar1, 0f, vVar7) };
						iVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam3, true) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 6:
				if (SYSTEM::VDIST(vVar4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (vVar10.x - IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(vVar4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(vVar10.x - IntToFloat(iVar14)), 0f, 0f)))
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (vVar10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(vVar10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						vVar22 = { func_104(vVar1, 0f, vVar10) };
						vVar25 = { func_104(vVar1, 0f, vVar7) };
						iVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar22, vVar25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam3, true) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return vVar1;
}

Vector3 func_104(vector3 vParam0, float fParam3, struct<2> Param4, var uParam6)//Position - 0x5F11
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.y = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

void func_105(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x5F5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	var uVar19;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	uParam2->f_2 = func_107(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = func_107(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = func_107(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	vVar16 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
	{
		vVar13 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		vVar13 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_106(ENTITY::GET_ENTITY_COORDS(iParam0, false), *uParam1, 1);
					*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false), uParam2->f_2, vVar16) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, vVar13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar5, &iVar6, &vVar10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar10.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar4, vVar16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_106(vVar13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

float func_106(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)//Position - 0x6116
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_107(int iParam0, int iParam1, int iParam2)//Position - 0x617B
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	return func_106(vVar0, vVar3, iParam2);
}

void func_108(vector3 vParam0, var uParam3, float fParam4)//Position - 0x61A7
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - vParam0 };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		if (func_109(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		if (func_109(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*uParam3 = (6f * 4f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*uParam3 = (6f * 3f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*uParam3 = (6f * 2f);
		}
		else
		{
			*uParam3 = 6f;
		}
		*fParam4 = ((*uParam3 / 1.33f) - 1f);
	}
	else
	{
		*uParam3 = 6f;
		*fParam4 = ((*uParam3 / 1.33f) - 1f);
	}
}

int func_109(int iParam0, float fParam1, float fParam2)//Position - 0x62A8
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_110()//Position - 0x632F
{
	Global_19671 = 0;
	func_111();
}

void func_111()//Position - 0x633F
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

int func_112(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x6360
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_113(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_113(int iParam0)//Position - 0x64EF
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, 0);
			}
		}
	}
}

void func_114(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x651B
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_121(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_50())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_120(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_121(0);
		HUD::THEFEED_RESUME();
		Global_61477 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_120(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_118(PLAYER::PLAYER_ID())) && !func_116(PLAYER::PLAYER_ID(), 0)) && !func_115()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_118(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_76575 = 0;
	}
}

bool func_115()//Position - 0x6654
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

bool func_116(int iParam0, int iParam1)//Position - 0x6671
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_117(-1, 0) == 8;
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

int func_117(int iParam0, bool bParam1)//Position - 0x66BC
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_73();
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

int func_118(int iParam0)//Position - 0x66FD
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_119())
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

bool func_119()//Position - 0x673F
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_120(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x6750
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_121(int iParam0)//Position - 0x6783
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

int func_122()//Position - 0x67A6
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (func_167())
		{
			return 1;
		}
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)//Position - 0x67C7
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_124(int iParam0)//Position - 0x68AC
{
	return func_36(func_125(iParam0));
}

char* func_125(int iParam0)//Position - 0x68BE
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

int func_126(int iParam0)//Position - 0x6900
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

int func_127()//Position - 0x6958
{
	func_128();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_128()//Position - 0x6971
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_131(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_130(PLAYER::PLAYER_PED_ID());
			if (func_129(iVar0) && (!func_53(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_129(Global_111560.f_2358.f_539.f_4321))
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

bool func_129(int iParam0)//Position - 0x6A6E
{
	return iParam0 < 3;
}

int func_130(int iParam0)//Position - 0x6A7A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_131(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_131(int iParam0)//Position - 0x6AB7
{
	if (func_129(iParam0))
	{
		return func_132(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_132(int iParam0)//Position - 0x6ADC
{
	return Global_1798[iParam0 /*29*/];
}

void func_133()//Position - 0x6AEB
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_62, true);
		SYSTEM::WAIT(0);
	}
}

int func_134()//Position - 0x6B1B
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 3f, 3f, 3f };
	vVar3 = { -3f, -3f, -3f };
	if (PED::IS_PED_INJURED(iLocal_62))
	{
		return 1;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		vVar0 = { vVar0 + PED::GET_PED_BONE_COORDS(iLocal_62, 31086, 0f, 0f, 0f) };
		vVar3 = { vVar3 + PED::GET_PED_BONE_COORDS(iLocal_62, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_62, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_135()//Position - 0x6C04
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_62, 0))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_62, true)) > (fLocal_165 + 50f))
		{
			func_199();
		}
		else if (func_126(func_127()) < iLocal_192)
		{
			func_199();
		}
	}
}

void func_136()//Position - 0x6C4F
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, Global_19, 0, 1, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 3000, 0, 2);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		}
	}
}

void func_137()//Position - 0x6C94
{
	float fVar0;
	
	if (iLocal_90 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_90 == 4)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_90 == 1 || iLocal_90 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_166, vLocal_169, fVar0, 0, true, 0))
		{
			if (!iLocal_157)
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_157 = 1;
					iLocal_158 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_172, vLocal_175, fVar0, 0, true, 0))
		{
			if (!iLocal_158)
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_158 = 1;
					iLocal_157 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_178, vLocal_181, fVar0, 0, true, 0))
		{
			if (!iLocal_159)
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					iLocal_159 = 1;
				}
			}
		}
	}
	if (!iLocal_160)
	{
		if (!PED::IS_PED_INJURED(iLocal_62))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 25f, 25f, 5f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (func_42(&uLocal_194, cLocal_103, sLocal_108, 4, 0, 0, 0) || func_62())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "flee_forward_outro_shopkeeper", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						if (iLocal_47 == 2)
						{
							TASK::TASK_PLAY_ANIM(0, cLocal_377, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
						iLocal_160 = 1;
					}
				}
			}
		}
	}
}

void func_138(int iParam0, var uParam1)//Position - 0x6E16
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_121);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
				SYSTEM::SETTIMERA(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_139()//Position - 0x6ECE
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_191))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_62, 0))
		{
			fLocal_165 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_62, true));
		}
		func_63(joaat("rc_wallets_recovered"), 1);
		PAD::SET_PAD_SHAKE(0, 200, 250);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			OBJECT::DELETE_OBJECT(&iLocal_64);
		}
		func_142();
		func_141(&uLocal_392);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_62, 0);
			}
		}
		func_147(0);
		OBJECT::REMOVE_PICKUP(iLocal_191);
		if (!iLocal_56)
		{
			iLocal_48 = 5;
			func_140(2);
		}
		else
		{
			iLocal_48 = 12;
		}
	}
}

void func_140(int iParam0)//Position - 0x6F66
{
	switch (iParam0)
	{
		case 0:
			if (Global_111560.f_24990.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_12(func_125(iParam0), -1);
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
					func_12(func_125(iParam0), -1);
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
					func_12(func_125(iParam0), -1);
					Global_111560.f_24990.f_4++;
					MISC::SET_BIT(&Global_111556, 2);
				}
			}
			break;
	}
}

void func_141(var uParam0)//Position - 0x7047
{
	*uParam0 = -99;
}

void func_142()//Position - 0x7055
{
	iLocal_67 = 0;
	if (!HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_62, 0))
		{
			iLocal_65 = func_143(iLocal_62, 0, 0);
		}
	}
}

int func_143(int iParam0, bool bParam1, int iParam2)//Position - 0x707F
{
	iParam2 = iParam2;
	return func_144(iParam0, bParam1, 145);
}

int func_144(int iParam0, bool bParam1, int iParam2)//Position - 0x7095
{
	int iVar0;
	
	iVar0 = func_145(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_145(int iParam0, bool bParam1, bool bParam2)//Position - 0x70DF
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_146(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_146(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_146(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_146(bool bParam0, float fParam1, float fParam2)//Position - 0x7183
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_147(bool bParam0)//Position - 0x719A
{
	if (!PED::IS_PED_INJURED(iLocal_62) && iLocal_90 == 4)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (bParam0)
			{
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
			TASK::CLEAR_PED_TASKS(iLocal_62);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		}
	}
}

int func_148()//Position - 0x7280
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_64))
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_64, iLocal_62))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 18f, 18f, 18f, 0, 1, 0))
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
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

void func_149(int iParam0, var uParam1)//Position - 0x72DE
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(iParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, false);
				HUD::SET_BLIP_COLOUR(iParam0, 1);
			}
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_150(0))
		{
			func_140(1);
		}
	}
}

bool func_150(int iParam0)//Position - 0x733C
{
	return MISC::IS_BIT_SET(Global_111556, iParam0);
}

void func_151()//Position - 0x734E
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 8f, 8f, 18f, 0, 1, 0) || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_62))
		{
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_152()//Position - 0x738F
{
	if (HUD::DOES_BLIP_EXIST(iLocal_66))
	{
		HUD::REMOVE_BLIP(&iLocal_66);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_64))
		{
			ENTITY::DETACH_ENTITY(iLocal_64, 1, true);
			OBJECT::DELETE_OBJECT(&iLocal_64);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!PED::IS_PED_INJURED(iLocal_63))
	{
		if (func_42(&uLocal_194, cLocal_103, sLocal_107, 4, 0, 0, 0) || func_62())
		{
			if (iLocal_47 == 2)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_63, 128, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_63, 2, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_63, 1, false);
				TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_63, true);
		}
	}
}

int func_153()//Position - 0x742E
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (bLocal_149)
			{
				return 1;
			}
		}
	}
	else if (bLocal_149)
	{
		return 1;
	}
	return 0;
}

void func_154()//Position - 0x7465
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		TASK::CLEAR_PED_TASKS(iLocal_62);
		TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_62, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
	}
	if (!PED::IS_PED_INJURED(iLocal_63))
	{
		func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_63, iLocal_121);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		PED::SET_PED_KEEP_TASK(iLocal_63, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_63, false, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_63);
	}
}

int func_155()//Position - 0x74FF
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_62))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x751F
{
	return func_157(iParam0);
}

int func_157(int iParam0)//Position - 0x752D
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_146(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

int func_158()//Position - 0x7565
{
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_191))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, 0))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 18f, 18f, 18f, 0, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), 1))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_143 = 1;
							return 1;
						}
					}
				}
				if (func_159())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_143 = 2;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_63))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
						{
							if (!PED::IS_PED_INJURED(iLocal_62))
							{
								TASK::CLEAR_PED_TASKS(iLocal_62);
								PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_62, 0);
							}
						}
						SYSTEM::SETTIMERB(0);
						iLocal_143 = 2;
						return 1;
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), 1))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_143 = 2;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							TASK::CLEAR_PED_TASKS(iLocal_62);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_62, 0);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_63))
					{
						TASK::CLEAR_PED_TASKS(iLocal_63);
						TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_63, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_63, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_63);
					}
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_62, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_62) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_62))
							{
								SYSTEM::SETTIMERB(0);
								iLocal_143 = 3;
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_159()//Position - 0x7709
{
	if (!PED::IS_PED_INJURED(iLocal_63))
	{
		if (PED::CAN_PED_SEE_HATED_PED(iLocal_63, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 20f, 20f, 20f, 0, 1, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_63) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_63))
				{
					return 1;
				}
			}
		}
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_63))
		{
			return 1;
		}
	}
	return 0;
}

void func_160()//Position - 0x7793
{
	if (iLocal_58)
	{
		if (!iLocal_59)
		{
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				if (WEAPON::IS_PED_ARMED(iLocal_63, 4))
				{
					if ((func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0) || func_62()) || func_62())
					{
						iLocal_59 = 1;
					}
				}
				else if ((func_42(&uLocal_194, cLocal_103, sLocal_107, 4, 0, 0, 0) || func_62()) || func_62())
				{
					iLocal_59 = 1;
				}
			}
		}
	}
	else if (func_159())
	{
		if ((func_42(&uLocal_194, cLocal_103, sLocal_116, 4, 0, 0, 0) || func_62()) || func_62())
		{
			if (WEAPON::IS_PED_ARMED(iLocal_63, 4))
			{
				TASK::TASK_COMBAT_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			else
			{
				func_152();
			}
			iLocal_58 = 1;
		}
	}
}

int func_161()//Position - 0x785D
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_62) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_62))
				{
					return 1;
				}
			}
		}
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_62, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_62, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_162()//Position - 0x7919
{
	if (iLocal_47 == 2)
	{
	}
	if (!func_167())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_62))
				{
					func_163(iLocal_62, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
	if (!bLocal_60)
	{
		if (func_38(PLAYER::PLAYER_PED_ID(), iLocal_63, 1) > 200f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_63) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_63))
			{
				iLocal_48 = 8;
			}
		}
	}
}

void func_163(int iParam0, char* sParam1, int iParam2)//Position - 0x7992
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_164(iParam2), 1);
}

int func_164(int iParam0)//Position - 0x79A9
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

void func_165()//Position - 0x7B9E
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (!bLocal_53)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "flee_backward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
				iLocal_164 = 3;
				bLocal_53 = true;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
				iLocal_164 = 3;
				bLocal_53 = true;
			}
			else
			{
				bLocal_53 = true;
			}
		}
		if (bLocal_53)
		{
			if (!iLocal_136)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 7f, 7f, 7f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 242628503) == 1)
					{
						if (TASK::GET_SEQUENCE_PROGRESS(iLocal_62) == iLocal_164)
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
							func_42(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
							bLocal_155 = true;
							iLocal_136 = 1;
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_62, true);
						func_42(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
						SYSTEM::SETTIMERA(0);
						bLocal_155 = true;
						iLocal_136 = 1;
					}
				}
			}
		}
	}
}

int func_166()//Position - 0x7DFF
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_167()//Position - 0x7E31
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_168()//Position - 0x7E53
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (!bLocal_134)
		{
			iLocal_138 = MISC::GET_GAME_TIMER();
			bLocal_134 = true;
		}
		if (bLocal_134)
		{
			iLocal_139 = MISC::GET_GAME_TIMER();
			if (!iLocal_54)
			{
				if ((iLocal_139 - iLocal_138) > 500)
				{
					if (!func_167())
					{
						if (func_42(&uLocal_194, cLocal_103, sLocal_105, 4, 0, 0, 0) || func_62())
						{
							if (iLocal_47 == 2)
							{
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
									if (!PED::IS_PED_INJURED(iLocal_63))
									{
									}
								}
							}
							if (iLocal_47 == 1)
							{
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
								}
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_65))
							{
								HUD::REMOVE_BLIP(&iLocal_65);
							}
							iLocal_54 = 1;
						}
					}
				}
			}
		}
	}
}

void func_169()//Position - 0x7EEF
{
	float fVar0;
	
	if (!bLocal_55)
	{
		if (iLocal_90 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_90 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_90 != 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(iLocal_63))
			{
				if (!func_196())
				{
					if (func_183())
					{
						func_280();
					}
				}
				if (func_182())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_68))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, 0))
						{
							iLocal_68 = func_143(iLocal_63, 1, 0);
						}
						func_174(1);
					}
				}
				if (func_173())
				{
					func_172();
					if (iLocal_90 == 3)
					{
						if (!iLocal_57)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_63, 16000, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_87, 1f, 20000, fVar0, 4, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
							iLocal_57 = 1;
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_62, -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vLocal_87, iLocal_62, 1f, false, 1.5f, 1082130432, true, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_62, -1, 1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_63, iLocal_121);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
						SYSTEM::SETTIMERA(0);
						bLocal_55 = true;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					}
					else
					{
						if (iLocal_90 == 1)
						{
							sLocal_111 = sLocal_111;
						}
						func_171();
						bLocal_55 = true;
						bLocal_149 = true;
						SYSTEM::SETTIMERA(0);
					}
				}
			}
		}
	}
	if (bLocal_55)
	{
		if (!iLocal_135)
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_62, 0))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_62, iLocal_63, 0);
					}
					iLocal_135 = 1;
				}
				else
				{
					iLocal_135 = 1;
				}
			}
		}
		if (iLocal_135 && !bLocal_133)
		{
			if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(iLocal_63))
			{
				if (func_42(&uLocal_194, cLocal_103, sLocal_104, 4, 0, 0, 0) || func_62())
				{
					TASK::CLEAR_PED_TASKS(iLocal_62);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
					TASK::TASK_PLAY_ANIM(0, cLocal_359, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, cLocal_359, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, cLocal_359, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
					func_172();
					iLocal_191 = OBJECT::CREATE_PICKUP(joaat("pickup_money_purse"), OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_62, 0f, 2.5f, 0f), 1.2f, 1.5f), iLocal_144, iLocal_192, 1, iLocal_85);
					bLocal_133 = true;
				}
			}
		}
		if (bLocal_133)
		{
			if (PED::IS_PED_INJURED(iLocal_63))
			{
				func_170();
			}
			else
			{
				switch (iLocal_667)
				{
					case 0:
						vLocal_670 = { OBJECT::GET_PICKUP_COORDS(iLocal_191) - Vector(0f, 0f, 0.75f) };
						if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
						{
							TASK::CLEAR_PED_TASKS(iLocal_63);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vLocal_670, iLocal_62, 2f, false, 0.1f, 1082130432, true, 0, 0, -957453492, 20000);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_63, iLocal_121);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
							iLocal_668 = MISC::GET_GAME_TIMER();
						}
						iLocal_667 = 1;
						break;
					
					case 1:
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_63, 242628503) == 7)
						{
							vLocal_670 = { OBJECT::GET_PICKUP_COORDS(iLocal_191) - Vector(0f, 0f, 0.75f) };
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_63, true), vLocal_670, true) > 1f)
								{
									iLocal_669 = 1;
									iLocal_667 = 4;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_63);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
									TASK::TASK_PLAY_ANIM(0, cLocal_360, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_63, iLocal_121);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
									iLocal_667 = 2;
								}
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_668) > 15000)
						{
							iLocal_669 = 1;
							iLocal_667 = 4;
						}
						break;
					
					case 2:
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_63, cLocal_360, "pickup_low") > 0.5f)
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_191))
							{
								OBJECT::REMOVE_PICKUP(iLocal_191);
								iLocal_667 = 3;
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						break;
					
					case 3:
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_63, cLocal_360, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_63, cLocal_360, "pickup_low") > 0.58f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_63, cLocal_360, "pickup_low", 3))
						{
							iLocal_667 = 4;
						}
						break;
					
					case 4:
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_63, true, 1);
						TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
						PED::_0x2208438012482A1A(iLocal_63, 0, 0);
						bLocal_149 = true;
						break;
					}
				}
			}
	}
}

void func_170()//Position - 0x8386
{
	if (HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		HUD::REMOVE_BLIP(&iLocal_65);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_67))
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_191))
		{
			iLocal_67 = func_156(iLocal_191);
		}
	}
	iLocal_48 = 4;
}

void func_171()//Position - 0x83BB
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (PED::IS_PED_FACING_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 90f))
	{
		TASK::TASK_PLAY_ANIM(iLocal_63, cLocal_359, sLocal_367, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		}
		else if (iLocal_90 == 4)
		{
			iLocal_379 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		}
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iLocal_63, cLocal_359, sLocal_369, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, sLocal_370, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		}
		else if (iLocal_90 == 4)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, sLocal_370, 8f, -4f, -1, 8, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
		}
	}
}

void func_172()//Position - 0x8829
{
	if (HUD::DOES_BLIP_EXIST(iLocal_68))
	{
		HUD::REMOVE_BLIP(&iLocal_68);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_66))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, 0))
		{
			iLocal_66 = func_143(iLocal_63, 1, 0);
		}
	}
}

int func_173()//Position - 0x885F
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_90 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 2)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_63, true), true) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_174(int iParam0)//Position - 0x8939
{
	if (func_176())
	{
		Global_111550 = 1;
		Global_111547 = MISC::GET_GAME_TIMER();
		if (func_175(Global_111549))
		{
			func_140(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_175(Global_111549))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

int func_175(int iParam0)//Position - 0x898C
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

int func_176()//Position - 0x89BB
{
	switch (func_177(&Global_30795, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_177(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x89F1
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
		if (func_181(0))
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
		if (!func_179(iParam2))
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
			func_178(uParam0, iParam4);
		}
	}
	return 2;
}

void func_178(var uParam0, int iParam1)//Position - 0x8B28
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

bool func_179(int iParam0)//Position - 0x8B77
{
	return func_180(iParam0, Global_41396);
}

int func_180(int iParam0, int iParam1)//Position - 0x8B88
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

int func_181(int iParam0)//Position - 0x8D69
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_179(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_182()//Position - 0x8D8B
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_90 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_90 == 3)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_183()//Position - 0x8E41
{
	if (!func_179(5))
	{
		return 1;
	}
	if (func_192())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_191())
		{
			return 0;
		}
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_184(float fParam0, bool bParam1)//Position - 0x8EA3
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
		if (func_129(func_127()))
		{
			iVar36 = func_190();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_111560.f_18569[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_111560.f_18569[iVar32 /*6*/], 3))
				{
					func_185(iVar32, &Var0);
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

void func_185(int iParam0, var uParam1)//Position - 0x8F5A
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xA0CF
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

int func_187(int iParam0)//Position - 0xA160
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

struct<2> func_188(int iParam0)//Position - 0xA4A6
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_189(iParam0) };
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

struct<2> func_189(int iParam0)//Position - 0xA4DC
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

int func_190()//Position - 0xA927
{
	func_128();
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

int func_191()//Position - 0xA96D
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

int func_192()//Position - 0xA98A
{
	if (func_195() && !func_191())
	{
		return 1;
	}
	if (func_194() && func_193())
	{
		return 1;
	}
	return 0;
}

bool func_193()//Position - 0xA9BC
{
	return Global_111278 > 0;
}

int func_194()//Position - 0xA9CA
{
	if (Global_95621 != -1)
	{
		return 1;
	}
	return 0;
}

int func_195()//Position - 0xA9DF
{
	if (Global_95621 != -1)
	{
		return MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

int func_196()//Position - 0xAA05
{
	if ((Global_111549 == func_197() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111550)
	{
		return 1;
	}
	return 0;
}

int func_197()//Position - 0xAA30
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_198(Var0);
	return uVar16;
}

int func_198(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xAA4D
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

void func_199()//Position - 0xAC27
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
	}
	func_298(25, iLocal_90);
	func_203();
	func_200();
	func_280();
}

void func_200()//Position - 0xAC58
{
	func_201();
}

int func_201()//Position - 0xAC65
{
	if (func_202(0))
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

bool func_202(bool bParam0)//Position - 0xACB0
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

int func_203()//Position - 0xACDB
{
	return 1;
}

void func_204(int iParam0)//Position - 0xACE4
{
	Global_111546 = iParam0;
}

void func_205()//Position - 0xACF2
{
	switch (iLocal_140)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_63))
			{
				TASK::TASK_PLAY_ANIM(iLocal_63, cLocal_359, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				TASK::TASK_PLAY_ANIM(iLocal_62, cLocal_361, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_140++;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					if (func_182())
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_68))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, 0))
							{
								iLocal_68 = func_143(iLocal_63, 1, 0);
							}
							if (!func_196())
							{
								func_174(1);
							}
						}
					}
					if (func_173())
					{
						func_42(&uLocal_194, cLocal_103, "REMG2_ARG", 4, 0, 0, 0);
						func_172();
						iLocal_187 = MISC::GET_GAME_TIMER();
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						iLocal_190 = 1;
						iLocal_140++;
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_62))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_62, vLocal_145, 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_62, true);
					SYSTEM::WAIT(0);
					func_211();
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_210())
				{
					iLocal_140 = 4;
				}
				if (func_159())
				{
					iLocal_140 = 9;
				}
				if (func_209())
				{
					iLocal_140 = 6;
				}
				if (func_208())
				{
					iLocal_140 = 4;
				}
			}
			if (!func_196())
			{
				if (func_183())
				{
					func_280();
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 6f, 6f, 15f, 0, 1, 0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_63, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 3f, 3f, 15f, 0, 1, 0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_63, 65f))
							{
								iLocal_189 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_140++;
							}
							else
							{
								iLocal_189 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_140++;
							}
						}
					}
				}
			}
			if (func_210() || func_208())
			{
				iLocal_140 = 4;
			}
			if (func_159())
			{
				iLocal_140 = 9;
			}
			if (func_209())
			{
				iLocal_140 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_188 - iLocal_189) > 12500)
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_140 = 4;
				}
			}
			if ((iLocal_188 - iLocal_189) > 5500)
			{
				if (!bLocal_137)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
					{
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							func_42(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							TASK::TASK_COMBAT_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 0, 16);
							bLocal_137 = true;
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
							{
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
									TASK::TASK_SMART_FLEE_COORD(iLocal_62, vLocal_145, 250f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_62, true);
									SYSTEM::WAIT(0);
								}
								if (!PED::IS_PED_INJURED(iLocal_62))
								{
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_65))
								{
									HUD::REMOVE_BLIP(&iLocal_65);
								}
							}
						}
					}
				}
			}
			if (bLocal_137)
			{
				iLocal_140 = 10;
			}
			else
			{
				if (func_210())
				{
					iLocal_140 = 4;
				}
				if (func_159())
				{
					iLocal_140 = 9;
				}
				if (func_209())
				{
					iLocal_140 = 6;
				}
				if (func_207())
				{
					iLocal_140 = 9;
				}
				if (func_208())
				{
					iLocal_140 = 4;
				}
			}
			break;
		
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (PED::IS_PED_INJURED(iLocal_63) || func_38(PLAYER::PLAYER_PED_ID(), iLocal_63, 1) > 100f)
				{
					func_206();
					func_211();
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
					{
						TASK::CLEAR_PED_TASKS(iLocal_62);
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
							TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_63, false), 150f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
							PED::SET_PED_KEEP_TASK(iLocal_62, true);
						}
						iLocal_148 = 1;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_62);
						TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_62, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_65))
						{
							HUD::REMOVE_BLIP(&iLocal_65);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					TASK::CLEAR_PED_TASKS(iLocal_63);
					TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_63, true);
					if (HUD::DOES_BLIP_EXIST(iLocal_66))
					{
						HUD::REMOVE_BLIP(&iLocal_66);
					}
				}
			}
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				func_110();
			}
			SYSTEM::WAIT(0);
			if (!iLocal_148)
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					func_42(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_280();
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERB() > 250)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
				{
					if (!PED::IS_PED_INJURED(iLocal_63))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63, 17, true);
						PED::SET_PED_RESET_FLAG(iLocal_63, 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_63, iLocal_121);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
						PED::SET_PED_KEEP_TASK(iLocal_63, true);
						SYSTEM::WAIT(0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_63, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_63);
						func_42(&uLocal_194, cLocal_103, sLocal_113, 4, 0, 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
				{
					if (!PED::IS_PED_INJURED(iLocal_62))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
						{
							TASK::CLEAR_PED_TASKS(iLocal_62);
							iLocal_148 = 1;
						}
					}
				}
				if (!iLocal_148)
				{
					SYSTEM::WAIT(0);
					func_280();
				}
			}
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > 500)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							TASK::CLEAR_PED_TASKS(iLocal_62);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
							PED::SET_PED_KEEP_TASK(iLocal_62, true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
					{
						if (!PED::IS_PED_INJURED(iLocal_63))
						{
							func_42(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							TASK::CLEAR_PED_TASKS(iLocal_63);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_63, iLocal_121);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
							PED::SET_PED_KEEP_TASK(iLocal_63, true);
						}
					}
				}
				SYSTEM::WAIT(0);
				func_280();
			}
			break;
		
		case 7:
			SYSTEM::SETTIMERA(0);
			iLocal_140++;
			break;
		
		case 8:
			if (SYSTEM::TIMERA() > 200)
			{
				func_211();
			}
			break;
		
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				if (!PED::IS_PED_INJURED(iLocal_63))
				{
					PED::SET_PED_RESET_FLAG(iLocal_63, 156, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_63, 50f, 0);
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						func_110();
					}
					SYSTEM::WAIT(0);
					func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					TASK::CLEAR_PED_TASKS(iLocal_62);
					TASK::TASK_COWER(iLocal_62, 2000);
					iLocal_148 = 1;
				}
			}
			break;
	}
	if (iLocal_140 != 8 && iLocal_148)
	{
		iLocal_140 = 7;
	}
	iLocal_188 = MISC::GET_GAME_TIMER();
	if (iLocal_190 && !bLocal_137)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63) && ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(iLocal_63))
			{
				if ((((iLocal_188 - iLocal_187) > 12000 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 3f, 3f, 35f, 0, 1, 0)) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_63)) && !func_167())
				{
					if ((func_42(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0) || func_62()) || func_62())
					{
						PED::SET_PED_RESET_FLAG(iLocal_63, 156, true);
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_63, PED::GET_PED_BONE_COORDS(iLocal_62, 31086, 0f, 0f, 0f), 0);
						TASK::CLEAR_PED_TASKS(iLocal_62);
						ENTITY::SET_ENTITY_HEALTH(iLocal_62, 99, 0);
						TASK::TASK_SMART_FLEE_COORD(iLocal_63, vLocal_145, 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_63, true);
						func_280();
					}
				}
			}
		}
	}
}

void func_206()//Position - 0xB4E5
{
	Global_19671 = 0;
	func_56();
}

int func_207()//Position - 0xB4F5
{
	if (!PED::IS_PED_INJURED(iLocal_62) && !PED::IS_PED_INJURED(iLocal_63))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_208()//Position - 0xB548
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_62, 0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_62) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_62))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, 0))
	{
		if (func_159())
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_209()//Position - 0xB5D6
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_63))
					{
						if (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_63))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_62) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_62))
							{
								SYSTEM::SETTIMERB(0);
								return 1;
							}
						}
					}
					else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_62) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_62))
					{
						SYSTEM::SETTIMERB(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_210()//Position - 0xB694
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_62, 0))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_211()//Position - 0xB6CC
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_62))
		{
			if (func_196())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 242628503) == 7 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 474215631) == 7)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						func_110();
					}
					if (!PED::IS_PED_INJURED(iLocal_63))
					{
						if (!PED::IS_PED_FLEEING(iLocal_62))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_62, iLocal_63, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_47 == 3)
					{
						if (!PED::IS_PED_FLEEING(iLocal_62))
						{
							TASK::TASK_SMART_FLEE_COORD(iLocal_62, vLocal_122, 150f, -1, 0, 0);
						}
					}
					PED::SET_PED_KEEP_TASK(iLocal_62, true);
					SYSTEM::WAIT(0);
					func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
					if (iLocal_192 > 0)
					{
						PED::SET_PED_MONEY(PLAYER::PLAYER_PED_ID(), (iLocal_192 / 100) * 90);
						func_64(func_127(), 1, iLocal_192);
						SYSTEM::WAIT(0);
						func_212(func_127(), 1, (iLocal_192 / 10), 0, 1);
					}
					func_204(3);
					func_199();
				}
			}
			else
			{
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
	else
	{
		func_280();
	}
}

void func_212(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xB7DA
{
	int iVar0;
	int iVar1;
	
	if (func_98(iParam0) == 3)
	{
		return;
	}
	if (func_98(iParam0) == 4)
	{
		return;
	}
	func_65(func_98(iParam0), 1, iParam1, iParam2, 0);
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

int func_213()//Position - 0xB8AC
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_191())
		{
			return 0;
		}
	}
	if (func_192())
	{
		return 1;
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_214()//Position - 0xB932
{
	func_225();
	func_224(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_224(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_224(&uLocal_393, cLocal_377);
	func_224(&uLocal_393, cLocal_361);
	func_222(&uLocal_393, iLocal_83);
	func_222(&uLocal_393, iLocal_84);
	func_222(&uLocal_393, iLocal_85);
	func_224(&uLocal_393, cLocal_360);
	func_224(&uLocal_393, cLocal_359);
	func_224(&uLocal_393, cLocal_378);
	func_224(&uLocal_393, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_218(&uLocal_393))
	{
		func_215();
		return 1;
	}
	return 0;
}

void func_215()//Position - 0xB9BF
{
	iLocal_62 = PED::CREATE_PED(26, iLocal_83, vLocal_69, fLocal_75, 1, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_62, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_62, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_62, 8, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_62, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_62, 512, true);
	AUDIO::STOP_PED_SPEAKING(iLocal_62, true);
	PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_62);
	PED::SET_PED_MONEY(iLocal_62, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_62, true);
	if (iLocal_83 == joaat("a_m_y_genstreet_01"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_62, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_62, 3, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_62, 4, 0, 2, 0);
	}
	if (iLocal_83 == joaat("a_m_y_business_02"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_62, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_62, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_62, 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_62, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_62, 8, 0, 0, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("theAssailant", &iLocal_86);
	iLocal_63 = PED::CREATE_PED(26, iLocal_84, vLocal_72, fLocal_78, 1, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_63, true, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_63, 1, 0f);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_63, joaat("weapon_pistol"), -1, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63, 13, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63, 17, false);
	PED::SET_PED_DIES_WHEN_INJURED(iLocal_63, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_63, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_63, 137, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_63, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_63, 2, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_63, iLocal_86);
	AUDIO::STOP_PED_SPEAKING(iLocal_63, true);
	if (!MISC::IS_STRING_NULL(sLocal_120))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_62, sLocal_120);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_63, sLocal_119);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, iLocal_86);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1191392768, iLocal_86);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_86, 45677184);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_86, 1191392768);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_86, 1862763509);
	switch (func_127())
	{
		case 0:
			func_217(&uLocal_194, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_217(&uLocal_194, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_217(&uLocal_194, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	func_217(&uLocal_194, 1, iLocal_63, sLocal_118, 0, 1);
	func_217(&uLocal_194, 2, iLocal_62, sLocal_117, 0, 1);
	if (iLocal_47 == 2)
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_63, 1, false);
	}
	if (iLocal_90 == 1 || iLocal_90 == 4)
	{
		func_216();
	}
	if (iLocal_90 == 3)
	{
		vLocal_125 = { -325.4189f, -828.8596f, 31.1f };
		vLocal_128 = { 0f, 0f, 180f };
		iLocal_131 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_125, vLocal_128, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_63, iLocal_131, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_90 == 4)
	{
		PATHFIND::DISABLE_NAVMESH_IN_AREA(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_216()//Position - 0xBC80
{
	vector3 vVar0;
	
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_63, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_359, sLocal_365, vLocal_371, vLocal_374, 0, 2), 0, 0, 1);
	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_359, sLocal_365, vLocal_371, vLocal_374, 0, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_63, vVar0.z);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_62, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_359, sLocal_366, vLocal_371, vLocal_374, 0, 2), 0, 0, 1);
	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_359, sLocal_366, vLocal_371, vLocal_374, 0, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_62, vVar0.z);
	TASK::TASK_PLAY_ANIM(iLocal_63, cLocal_359, sLocal_365, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(iLocal_62, cLocal_359, sLocal_366, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_217(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xBD76
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

int func_218(var uParam0)//Position - 0xBE11
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_219(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_219(var uParam0)//Position - 0xBE75
{
	return func_220(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_220(int iParam0, char* sParam1, int iParam2)//Position - 0xBE8C
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_221(iParam0))
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

int func_221(int iParam0)//Position - 0xBF80
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

void func_222(var uParam0, int iParam1)//Position - 0xBFAC
{
	func_223(uParam0, 0, iParam1, "NULL", 0);
}

void func_223(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xBFC0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
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
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
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

void func_224(var uParam0, char* sParam1)//Position - 0xC0AD
{
	func_223(uParam0, 1, -1, sParam1, 0);
}

void func_225()//Position - 0xC0C0
{
	func_278();
	MISC::SET_BIT(&iLocal_144, 3);
	MISC::SET_BIT(&iLocal_144, 4);
	MISC::SET_BIT(&iLocal_144, 1);
	if (iLocal_90 == 1)
	{
		cLocal_359 = "RANDOM@MUGGING1";
		sLocal_365 = "STRUGGLE_Loop_A_Thief";
		sLocal_366 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_368 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_367 = "FLEE_BACKWARD_Thief";
		sLocal_370 = "FLEE_FORWARD_Shopkeeper";
		sLocal_369 = "FLEE_FORWARD_Thief";
		func_227();
		iLocal_192 = 200;
		iLocal_48 = 2;
		vLocal_145 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_83 = joaat("a_m_y_business_02");
		iLocal_84 = joaat("g_m_y_strpunk_01");
		vLocal_69 = { -138.814f, -1635.975f, 31.357f };
		fLocal_75 = 318.519f;
		vLocal_72 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_78 = 98f;
		vLocal_371 = { vLocal_69 };
		vLocal_374 = { 0f, 0f, fLocal_75 };
		vLocal_166 = { -103.8951f, -1593.239f, 30.49198f };
		vLocal_169 = { -89.29615f, -1575.444f, 32.30938f };
		vLocal_172 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_175 = { -169.8183f, -1669.556f, 33.94173f };
		vLocal_178 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_181 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_79 = 340.0645f;
		vLocal_80 = { -151.0793f, -1650.322f, 31.6504f };
		vLocal_87 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_85 = joaat("prop_ld_wallet_pickup");
		cLocal_103 = "REMG1AU";
		sLocal_104 = "REMG1_VIC";
		sLocal_105 = "REMG1_SHT";
		sLocal_106 = "REMG1_ASK";
		sLocal_107 = "REMG1_DRP";
		sLocal_108 = "REMG1_OHY";
		sLocal_109 = "REMG1_THK";
		sLocal_110 = "REMG1_GIV";
		sLocal_111 = "REMG1_MUGA";
		sLocal_112 = "REMG1_WHO";
		switch (func_127())
		{
			case 0:
				sLocal_115 = "REMG1_HOM";
				sLocal_116 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_115 = "REMG1_HOF";
				sLocal_116 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_115 = "REMG1_HOT";
				sLocal_116 = "REMG1_WAT";
				break;
		}
		sLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_120 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_117 = "MuggedMan";
		sLocal_118 = "MuggerGang";
		iLocal_50 = 1;
		cLocal_378 = "move_m@hurry@b";
	}
	if (iLocal_90 == 2)
	{
		cLocal_359 = "random@mugging2";
		cLocal_361 = "random@mugging2";
		iLocal_48 = 1;
		vLocal_145 = { 287.888f, -284.603f, 52.967f };
		iLocal_83 = joaat("a_f_y_genhot_01");
		iLocal_84 = joaat("g_m_y_strpunk_01");
		vLocal_69 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_75 = 260.7569f;
		vLocal_72 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_78 = 45f;
		fLocal_79 = 251f;
		vLocal_80 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_85 = joaat("prop_ld_handbag");
		cLocal_103 = "REMG2AU";
		sLocal_104 = "REMG2_VIC";
		sLocal_105 = "REMG2_SHT";
		sLocal_106 = "REMG2_ASK";
		sLocal_107 = "REMG2_DRP";
		sLocal_108 = "REMG2_OHY";
		sLocal_109 = "REMG2_THK";
		sLocal_110 = "REMG2_GIV";
		sLocal_112 = "REMG2_WHO";
		sLocal_113 = "REMG2_GUN";
		sLocal_114 = "REMG2_FUT";
		switch (func_127())
		{
			case 0:
				sLocal_115 = "REMG2_HOM";
				sLocal_116 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_115 = "REMG2_HOF";
				sLocal_116 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_115 = "REMG2_HOT";
				sLocal_116 = "REMG2_WAT";
				break;
		}
		sLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_117 = "MuggedYMan";
		sLocal_118 = "MuggerGang";
		iLocal_50 = 1;
		cLocal_378 = "move_m@hurry@b";
	}
	if (iLocal_47 == 1)
	{
		func_226();
		iLocal_192 = 2000;
		iLocal_48 = 2;
		if (iLocal_90 == 3)
		{
			cLocal_359 = "RANDOM@MUGGING3";
			vLocal_145 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_83 = joaat("a_f_y_hipster_01");
			iLocal_84 = joaat("a_m_o_tramp_01");
			vLocal_69 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_75 = 80.7161f;
			vLocal_72 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_78 = 336.5502f;
			fLocal_79 = 81.8694f;
			vLocal_80 = { -322.3941f, -835.7213f, 30.6001f };
			vLocal_87 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_85 = joaat("prop_ld_purse_01");
			cLocal_103 = "REMG3AU";
			sLocal_104 = "REMG3_VIC";
			sLocal_105 = "REMG3_SHT";
			sLocal_106 = "REMG3_ASK";
			sLocal_107 = "REMG3_DRP";
			sLocal_108 = "REMG3_OHY";
			sLocal_109 = "REMG3_THK";
			sLocal_110 = "REMG3_GIV";
			sLocal_111 = "REMG3_MUGB";
			sLocal_112 = "REMG3_WHO";
			sLocal_113 = "REMG3_GUN";
			sLocal_114 = "REMG3_FUT";
			switch (func_127())
			{
				case 0:
					sLocal_115 = "REMG3_HOM";
					sLocal_116 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_115 = "REMG3_HOF";
					sLocal_116 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_115 = "REMG3_HOT";
					sLocal_116 = "REMG3_WAT";
					break;
			}
			sLocal_119 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_117 = "MUGGEDHIPSTER";
			sLocal_118 = "MuggerTramp";
			iLocal_50 = 1;
			cLocal_378 = "move_f@hurry@a";
		}
		if (iLocal_90 == 4)
		{
			func_226();
			cLocal_359 = "RANDOM@MUGGING4";
			sLocal_365 = "STRUGGLE_Loop_B_Thief";
			sLocal_366 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_368 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_367 = "FLEE_BACKWARD_Thief";
			sLocal_370 = "FLEE_FORWARD_Shopkeeper";
			sLocal_369 = "FLEE_FORWARD_Thief";
			vLocal_145 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_83 = joaat("a_f_m_tourist_01");
			iLocal_84 = joaat("g_m_y_armgoon_02");
			vLocal_69 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_75 = 159.1445f;
			vLocal_371 = { vLocal_69 };
			vLocal_374 = { 0f, 0f, fLocal_75 };
			vLocal_72 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_78 = 60.1372f;
			fLocal_79 = 248f;
			vLocal_80 = { 42.5323f, -990.353f, 28.248f };
			vLocal_166 = { 38.15186f, -1001.485f, 28.42276f };
			vLocal_169 = { 40.13669f, -995.2711f, 30.37197f };
			vLocal_172 = { 37.21758f, -1040.354f, 28.41506f };
			vLocal_175 = { 19.91492f, -1036.814f, 30.28045f };
			vLocal_178 = { 28.4511f, -1035.718f, 28.3329f };
			vLocal_181 = { 38.6536f, -1001.073f, 28.407f };
			vLocal_87 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_85 = joaat("prop_ld_wallet_pickup");
			cLocal_103 = "REMG4AU";
			sLocal_104 = "REMG4_VIC";
			sLocal_105 = "REMG4_SHT";
			sLocal_106 = "REMG4_ASK";
			sLocal_107 = "REMG4_DRP";
			sLocal_108 = "REMG4_OHY";
			sLocal_109 = "REMG4_THK";
			sLocal_110 = "REMG4_GIV";
			sLocal_111 = "REMG4_MUGB";
			sLocal_112 = "REMG4_WHO";
			sLocal_113 = "REMG4_GUN";
			sLocal_114 = "REMG4_FUT";
			switch (func_127())
			{
				case 0:
					sLocal_115 = "REMG4_HOM";
					sLocal_116 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_115 = "REMG4_HOF";
					sLocal_116 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_115 = "REMG4_HOT";
					sLocal_116 = "REMG4_WAT";
					break;
			}
			sLocal_119 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_117 = "MuggedWoman";
			sLocal_118 = "MuggerGang";
			iLocal_50 = 1;
			cLocal_378 = "move_f@hurry@a";
		}
	}
}

void func_226()//Position - 0xC74F
{
	cLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Female";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Female";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Female";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_227()//Position - 0xC7C3
{
	cLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Male";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Male";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Male";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_228(int iParam0, var uParam1)//Position - 0xC837
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}

void func_229(var uParam0)//Position - 0xC8D6
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || MISC::IS_BIT_SET(Global_98669.f_20, 2)) || MISC::IS_BIT_SET(Global_98669.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_230(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_230(int iParam0)//Position - 0xC964
{
	func_231(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_231(int iParam0, char* sParam1, int iParam2)//Position - 0xC97A
{
	if (MISC::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_221(*iParam0))
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

void func_232(int iParam0)//Position - 0xCA54
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_234(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_111546 = 0;
	func_233();
}

void func_233()//Position - 0xCA8A
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

void func_234(int iParam0)//Position - 0xCAC7
{
	Global_111549 = iParam0;
}

int func_235(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xCAD5
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
		if (!func_275())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_191())
			{
				return 0;
			}
		}
		if (!Global_111560.f_9080)
		{
			return 0;
		}
		if (func_202(0))
		{
			return 0;
		}
		if (func_192())
		{
			return 0;
		}
		if (func_274())
		{
			return 0;
		}
		if (Global_111549 != -1)
		{
			return 0;
		}
		if (func_129(func_127()))
		{
			if (func_184(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_273(iParam3))
		{
			return 0;
		}
		if (func_129(func_127()))
		{
			if (func_272(func_127()) == 4 || func_272(func_127()) == 5)
			{
				return 0;
			}
		}
		if (func_129(func_127()))
		{
			if (!func_271(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_270(Global_111560.f_24990.f_43[iParam3]))
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
		if (func_269())
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
		if (!func_260(4))
		{
			return 0;
		}
		if (!func_179(5))
		{
			return 0;
		}
		if (func_259(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_259(0, 0))
		{
			return 0;
		}
		if (Global_30882)
		{
			return 0;
		}
		if (func_273(30) && !func_259(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_129(func_127()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111560.f_2358.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111560.f_2358.f_539.f_2296[iVar4];
				if (func_258(iVar8))
				{
					if (func_236(iVar4))
					{
						if (!func_28(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_127() != iVar4)
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

bool func_236(int iParam0)//Position - 0xCE6F
{
	int iVar0;
	
	iVar0 = Global_111560.f_2358.f_539.f_2296[iParam0];
	return func_237(iVar0);
}

int func_237(int iParam0)//Position - 0xCE90
{
	return func_238(iParam0, 1);
}

int func_238(int iParam0, int iParam1)//Position - 0xCE9F
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_258(iParam0))
	{
		return 0;
	}
	func_239(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_239(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xCEF2
{
	func_240(func_251(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_240(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xCF10
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_250(iParam0, iParam1))
	{
		iVar0 = func_249(iParam1);
		iVar1 = func_247(iParam0);
		iVar2 = (func_247(iParam0) - func_247(iParam1));
		iVar3 = (func_249(iParam0) - func_249(iParam1));
		iVar4 = (func_246(iParam0) - func_246(iParam1));
		iVar5 = (func_245(iParam0) - func_245(iParam1));
		iVar6 = (func_244(iParam0) - func_244(iParam1));
		iVar7 = (func_243(iParam0) - func_243(iParam1));
	}
	else
	{
		iVar0 = func_249(iParam0);
		iVar1 = func_247(iParam1);
		iVar2 = (func_247(iParam1) - func_247(iParam0));
		iVar3 = (func_249(iParam1) - func_249(iParam0));
		iVar4 = (func_246(iParam1) - func_246(iParam0));
		iVar5 = (func_245(iParam1) - func_245(iParam0));
		iVar6 = (func_244(iParam1) - func_244(iParam0));
		iVar7 = (func_243(iParam1) - func_243(iParam0));
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
		iVar4 = (iVar4 + func_242(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_241(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_241(float fParam0, float fParam1, float fParam2)//Position - 0xD111
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

int func_242(int iParam0, int iParam1)//Position - 0xD153
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

int func_243(int iParam0)//Position - 0xD1F5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_244(int iParam0)//Position - 0xD208
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_245(int iParam0)//Position - 0xD21B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_246(int iParam0)//Position - 0xD22E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_247(int iParam0)//Position - 0xD240
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_248(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_248(bool bParam0, int iParam1, int iParam2)//Position - 0xD265
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_249(int iParam0)//Position - 0xD27C
{
	return iParam0 & 15;
}

int func_250(int iParam0, int iParam1)//Position - 0xD289
{
	int iVar0;
	int iVar1;
	
	if (!func_258(iParam1) || !func_258(iParam0))
	{
		return 1;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	iVar1 = func_245(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_251()//Position - 0xD395
{
	var uVar0;
	
	func_257(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_256(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_255(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_254(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_253(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_252(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_252(var uParam0, int iParam1)//Position - 0xD3DB
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

void func_253(var uParam0, int iParam1)//Position - 0xD461
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_254(var uParam0, int iParam1)//Position - 0xD494
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_249(*uParam0);
	iVar1 = func_247(*uParam0);
	if (iParam1 < 1 || iParam1 > func_242(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_255(var uParam0, int iParam1)//Position - 0xD4E5
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_256(var uParam0, int iParam1)//Position - 0xD51F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_257(var uParam0, int iParam1)//Position - 0xD55A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_258(int iParam0)//Position - 0xD596
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
	iVar0 = func_243(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_244(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_245(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_247(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_249(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_246(iParam0);
	if (iVar5 < 1 || iVar5 > func_242(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0, int iParam1)//Position - 0xD672
{
	if (MISC::IS_BIT_SET(Global_111560.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)//Position - 0xD695
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_127();
				if (!func_129(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_268()) || Global_110607) || Global_30738) || func_267()) || func_55(8, -1)) || func_266()) || func_265()) || func_264()) || func_263()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_268()) || Global_30738) || func_267()) || func_55(8, -1)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_268()) || Global_110607) || Global_30738) || func_267()) || func_55(8, -1)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_268()) || Global_110607) || Global_30738) || func_267()) || func_55(8, -1)) || func_266()) || func_265()) || func_263()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_268() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_55(8, -1)) || func_263()) || func_262()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_266()) || func_265()) || func_262()) || func_261())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_268()) || Global_30738) || func_267()) || func_55(8, -1)) || func_265()) || func_264()) || func_263()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_268()) || func_265()) || Global_110607) || Global_30738) || func_267()) || Global_42561) || func_55(8, -1)) || func_264()) || func_262()) || func_263()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_268()) || Global_110607) || Global_30738) || func_267()) || func_55(8, -1)) || func_264()) || func_262()) || func_266()) || func_265()) || func_263())
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

var func_261()//Position - 0xDDB2
{
	return Global_98708.f_1;
}

int func_262()//Position - 0xDDC0
{
	if (Global_95621 != -1)
	{
		return MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_263()//Position - 0xDDE6
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_264()//Position - 0xDE00
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

bool func_265()//Position - 0xDE2A
{
	return Global_98721.f_346 > 0;
}

bool func_266()//Position - 0xDE3B
{
	return Global_98721.f_345 > 0;
}

var func_267()//Position - 0xDE4C
{
	return Global_1312873;
}

int func_268()//Position - 0xDE58
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_269()//Position - 0xDE74
{
	func_52();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_270(int iParam0)//Position - 0xDE9C
{
	return func_250(func_251(), iParam0);
}

int func_271(int iParam0, int iParam1, int iParam2)//Position - 0xDEAE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_127();
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

int func_272(int iParam0)//Position - 0xDF92
{
	if (!func_129(iParam0))
	{
		return 7;
	}
	return Global_111560.f_7683.f_919[iParam0];
}

bool func_273(int iParam0)//Position - 0xDFB6
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_275())
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

int func_274()//Position - 0xE014
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

int func_275()//Position - 0xE058
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

bool func_276(int iParam0)//Position - 0xE113
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_111560.f_18569[iParam0 /*6*/], 3);
}

bool func_277(int iParam0)//Position - 0xE141
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_111560.f_18569[iParam0 /*6*/], 0);
}

void func_278()//Position - 0xE16F
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (SYSTEM::VDIST(vLocal_122, vLocal_91) < 20f)
		{
			iLocal_90 = 1;
			iLocal_47 = 2;
		}
		if (SYSTEM::VDIST(vLocal_122, vLocal_94) < 20f)
		{
			iLocal_90 = 2;
			iLocal_47 = 3;
		}
		if (SYSTEM::VDIST(vLocal_122, vLocal_97) < 20f)
		{
			iLocal_90 = 3;
			iLocal_47 = 1;
		}
		if (SYSTEM::VDIST(vLocal_122, vLocal_100) < 20f)
		{
			iLocal_90 = 4;
			iLocal_47 = 1;
		}
	}
}

void func_279(var uParam0, int iParam1)//Position - 0xE1EE
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_280()//Position - 0xE206
{
	if (iLocal_156)
	{
		if (iLocal_50)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_84);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_85);
		}
		if (!PED::IS_PED_INJURED(iLocal_63))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_63, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_63, true);
			if (!bLocal_60)
			{
				PED::SET_PED_MONEY(iLocal_63, iLocal_192);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_62, true);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, -1146898486) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 242628503) == 7)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
					if (PED::IS_PED_DUCKING(iLocal_62))
					{
						TASK::TASK_TOGGLE_DUCK(0, 0);
					}
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
					TASK::TASK_SMART_FLEE_COORD(0, vLocal_122, 250f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_62, iLocal_121);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_121);
					PED::SET_PED_KEEP_TASK(iLocal_62, true);
					if (!iLocal_154 && !iLocal_148)
					{
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							func_110();
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_66))
		{
			HUD::REMOVE_BLIP(&iLocal_66);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_64);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_67))
		{
			HUD::REMOVE_BLIP(&iLocal_67);
		}
	}
	if (iLocal_379 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_379))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_379);
		}
		iLocal_379 = -1;
	}
	if (func_196())
	{
		PED::SET_CREATE_RANDOM_COPS(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	func_37(&uLocal_380, 0, 0);
	func_114(0, 1, 1, 0, 0, 0);
	func_286(-1);
	func_281(&uLocal_393, 0);
	if (iLocal_141 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_141);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_281(var uParam0, bool bParam1)//Position - 0xE3AA
{
	int iVar0;
	
	if (!bParam1)
	{
		func_283(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_282(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_282(var uParam0)//Position - 0xE3ED
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_283(var uParam0)//Position - 0xE406
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_284(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_284(var uParam0)//Position - 0xE440
{
	func_285(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_285(int iParam0, char* sParam1, int iParam2)//Position - 0xE457
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		switch (func_221(iParam0))
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

void func_286(int iParam0)//Position - 0xE517
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
	if (func_196())
	{
		func_291(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_111551 = MISC::GET_GAME_TIMER();
		func_290(30000);
		StringCopy(&cVar0, func_289(Global_111549, 1), 64);
		if (func_288(Global_111549) > 0)
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
	func_287(&Global_30795);
	Global_111550 = 0;
	func_234(-1);
}

void func_287(var uParam0)//Position - 0xE5CC
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

int func_288(int iParam0)//Position - 0xE609
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

char* func_289(int iParam0, bool bParam1)//Position - 0xE6BA
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

void func_290(int iParam0)//Position - 0xE903
{
	Global_41947 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_291(int iParam0)//Position - 0xE915
{
	func_292(iParam0, 0, func_297(iParam0));
}

void func_292(int iParam0, int iParam1, int iParam2)//Position - 0xE92A
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_251();
	func_295(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_294(iParam0, &uVar0);
	Var1 = { func_293(&uVar0) };
}

struct<16> func_293(var uParam0)//Position - 0xE959
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_245(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_244(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_243(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_246(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_249(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_247(*uParam0), 64);
	return Var0;
}

void func_294(int iParam0, var uParam1)//Position - 0xEA28
{
	Global_111560.f_24990.f_43[iParam0] = *uParam1;
}

void func_295(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xEA40
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_247(*uParam0);
	iVar1 = func_249(*uParam0);
	iVar2 = func_246(*uParam0);
	iVar3 = func_245(*uParam0);
	iVar4 = func_244(*uParam0);
	iVar5 = func_243(*uParam0);
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
	iVar6 = func_242(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_242(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_296(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_296(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xEBC2
{
	func_257(uParam0, iParam1);
	func_256(uParam0, iParam2);
	func_255(uParam0, iParam3);
	func_253(uParam0, iParam5);
	func_254(uParam0, iParam4);
	func_252(uParam0, iParam6);
}

int func_297(int iParam0)//Position - 0xEBFA
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

void func_298(int iParam0, int iParam1)//Position - 0xED9D
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_288(iParam0))
	{
		func_308(iParam0, iParam1);
		if (!func_307(51))
		{
			func_304("RE_REWARD", 1, 0, 4000, 10000, func_190(), 0, 138, 0);
			func_303(51);
		}
		if (func_175(iParam0))
		{
			Global_111560.f_24990.f_2 = 3;
		}
		if (func_302(iParam0, iParam1) != 322)
		{
			func_299(func_302(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111548 = iParam1;
		if (Global_111546 == 0)
		{
			if (((Global_111549 == 1 || Global_111549 == 5) || Global_111549 == 11) || Global_111549 == 25)
			{
				func_204(2);
			}
			else if ((Global_111549 == 26 || Global_111549 == 8) || Global_111549 == 17)
			{
				func_204(7);
			}
			else
			{
				func_204(1);
			}
		}
	}
}

void func_299(int iParam0, var uParam1, var uParam2)//Position - 0xEEA1
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
		func_74((891 + iParam0), 1, -1, 1);
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
		func_300();
	}
}

void func_300()//Position - 0xEF89
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
		func_95(13, SYSTEM::FLOOR(Global_111560.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76577)
		{
			if (func_301() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
				{
					func_201();
				}
			}
		}
	}
}

int func_301()//Position - 0xF44A
{
	return Global_30736;
}

int func_302(int iParam0, int iParam1)//Position - 0xF455
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

void func_303(int iParam0)//Position - 0xF7C9
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

void func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xF80B
{
	func_305(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_305(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xF82B
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
		func_306();
	}
}

void func_306()//Position - 0xF9FD
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

int func_307(int iParam0)//Position - 0xFB1D
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

void func_308(int iParam0, int iParam1)//Position - 0xFB60
{
	MISC::SET_BIT(&(Global_111560.f_24990.f_8[iParam0]), iParam1);
}

