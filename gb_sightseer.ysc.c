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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	int iLocal_68[5] = { 0, 0, 0, 0, 0 };
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 0 } ;
	struct<2> Local_86[8];
	struct<2> Local_103 = { 0, 0 } ;
	struct<4> Local_105[8];
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	int iLocal_143 = 0;
	int iLocal_144[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 10;
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
	var uLocal_168 = 2;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 8;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 8;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	float fLocal_190 = 0f;
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
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	struct<60> Local_208 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_268[32];
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	var uLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	vector3 vLocal_470 = { 0f, 0f, 0f };
	var uLocal_473 = 0;
	struct<23> Local_474 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 1015222895;
	var uLocal_503 = 1021665346;
	var uLocal_504 = 0;
	var uLocal_505 = 255;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = -1;
	var uLocal_515 = 996499522;
	var uLocal_516 = 1002740646;
	var uLocal_517 = 0;
	var uLocal_518 = 60;
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
	var uLocal_579 = 1016296636;
	var uLocal_580 = 220;
	var uLocal_581 = 255;
	var uLocal_582 = 255;
	var uLocal_583 = 255;
	var uLocal_584 = 255;
	var uLocal_585 = 255;
	var uLocal_586 = 255;
	var uLocal_587 = 4096;
	var uLocal_588 = 40;
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
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 4;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 1065353216;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 1056964608;
	var uLocal_767 = 1056964608;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	vector3 vLocal_774[20] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
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
	fLocal_67 = 0f;
	fLocal_74 = 0f;
	fLocal_75 = 0f;
	fLocal_76 = 0f;
	fLocal_139 = 0.62f;
	fLocal_140 = 0.51f;
	fLocal_141 = 0.55f;
	fLocal_142 = 25f;
	fLocal_190 = ((0.05f + 0.275f) - 0.01f);
	iLocal_206 = -1;
	iLocal_207 = -1;
	iLocal_768 = -1;
	iLocal_769 = -1;
	iLocal_771 = -1;
	iLocal_772 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1119(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1070(ScriptParam_0);
	}
	else
	{
		func_1022();
	}
	while (true)
	{
		func_1021();
		if (func_1013())
		{
			func_1022();
		}
		Global_1674861.f_2 = Local_208.f_58;
		Global_1674861.f_3 = Local_208.f_59;
		switch (func_1012(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1011() == 1)
				{
					func_1010();
					if (func_1009())
					{
						func_994(142, 1, -1, 0);
						PLAYER::SET_MAX_WANTED_LEVEL(3);
						if (!func_993())
						{
							OBJECT::_0x616093EC6B139DD9(PLAYER::PLAYER_ID(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_994(142, 0, -1, 0);
					}
					Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 1;
				}
				else if (func_1011() == 4)
				{
					Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_989(1))
				{
					Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 2;
				}
				if (func_1011() == 1)
				{
					func_421();
					func_411();
					if (func_1009() || func_410())
					{
						func_256(&(Global_1363235.f_534), &Global_1363235, 27, &(Global_1363235.f_1), &(Global_1363235.f_117), -1, 0, 0);
					}
					func_201();
				}
				else if (func_1011() == 4)
				{
					Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				func_198();
				break;
			
			case 3:
				func_197(&(Local_208.f_49));
				if (func_196(&(Local_208.f_49)))
				{
					Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
			
			case 4:
				func_1022();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1011())
			{
				case 0:
					if (func_189())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_208.f_58), &(Local_208.f_59));
						Local_208 = 1;
						Local_208.f_33 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_208.f_34 = PLAYER::PLAYER_ID();
						func_994(142, 1, -1, 0);
					}
					break;
				
				case 1:
					func_187();
					func_4();
					if (func_2())
					{
						Local_208 = 4;
					}
					else if (func_1())
					{
						Local_208 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x2C5
{
	if (Global_2531497.f_4898.f_38)
	{
		Global_2531497.f_4898.f_38 = 0;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x2E8
{
	if (func_3())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_208.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x30C
{
	return 0;
}

void func_4()//Position - 0x315
{
	switch (Local_208.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (MISC::IS_BIT_SET(Local_208.f_1, 1))
			{
				Local_208.f_32 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_208.f_1, 3))
			{
				Local_208.f_32 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_208.f_1, 4))
			{
				Local_208.f_32 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()//Position - 0x386
{
	if (Local_208.f_5 == 0)
	{
		if (!MISC::IS_BIT_SET(Local_208.f_1, 6))
		{
			if (!func_9(&(Local_208.f_53)))
			{
				func_8(&(Local_208.f_53), 0, 0);
			}
			else if (func_6(&(Local_208.f_53), func_7(), 0))
			{
				MISC::SET_BIT(&(Local_208.f_1), 6);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x3D5
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

int func_7()//Position - 0x433
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x43F
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

bool func_9(var uParam0)//Position - 0x484
{
	return uParam0->f_1;
}

void func_10()//Position - 0x490
{
	if (!func_9(&(Local_208.f_51)))
	{
		func_8(&(Local_208.f_51), 0, 0);
	}
	else if (func_6(&(Local_208.f_51), func_11(), 0))
	{
		MISC::SET_BIT(&(Local_208.f_1), 3);
	}
}

int func_11()//Position - 0x4CA
{
	return Global_262145.f_12502;
}

void func_12()//Position - 0x4D9
{
	int iVar0;
	
	if (Local_208.f_33 < 0)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_208.f_33)))
	{
		if (Local_268[Local_208.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_268[Local_208.f_33 /*6*/].f_4 - 1);
			if (!MISC::IS_BIT_SET(Local_208.f_4, iVar0))
			{
				Local_208.f_36 = iVar0;
				if (func_13())
				{
					MISC::SET_BIT(&(Local_208.f_4), iVar0);
				}
			}
		}
	}
}

int func_13()//Position - 0x53E
{
	int iVar0;
	struct<35> Var1;
	vector3 vVar36;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_3))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				vVar36 = { func_186() };
				if (func_14(vVar36, 5f, &vLocal_470, &uLocal_473, &Var1))
				{
					Local_208.f_3 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), vLocal_470, true, iVar0));
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_208.f_3), vLocal_470 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_208.f_3), true);
					OBJECT::_SET_OBJECT_SOMETHING(NETWORK::NET_TO_OBJ(Local_208.f_3), 1);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_208.f_3), 1);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_208.f_3), false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_208.f_3));
					func_8(&(Local_208.f_55), 0, 0);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(vector3 vParam0, float fParam3, var uParam4, var uParam5, var uParam6)//Position - 0x661
{
	struct<17> Var0;
	struct<18> Var34;
	vector3 vVar62;
	
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { vParam0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_15(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			vVar62 = { vParam0 - Var0[0 /*3*/] };
			if (vVar62.z > uParam6->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_15(var uParam0, var uParam1, var uParam2)//Position - 0x761
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar85;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405071.f_2456 == *uParam0 || !Global_2405071.f_2456.f_1 == uParam0->f_1) || !Global_2405071.f_2456.f_2 == uParam0->f_2) || !Global_2405071.f_2459 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405071.f_2470 == uParam0->f_8 || !Global_2405071.f_2470.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2470.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2473 == uParam0->f_11) || !Global_2405071.f_2473.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2473.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405071.f_2470 == uParam0->f_8 || !Global_2405071.f_2470.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2470.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2473 == uParam0->f_11) || !Global_2405071.f_2473.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2473.f_2 == uParam0->f_11.f_2) || !Global_2405071.f_2476 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405071.f_2454 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_2463))
			{
				if (Global_2405071.f_2463 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2460) < func_185(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2460) < func_185(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_184();
		}
		Global_2405071.f_2454 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2460) > func_185(0))
	{
		Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
		func_178();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar11 = { vVar8 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar14 = { vVar8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405071.f_2454)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::_0xFEE4A5459472A9F8();
		func_184();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_177(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_2405071.f_2477 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405071.f_2456 = { *uParam0 };
					Global_2405071.f_2459 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405071.f_2470 = { uParam0->f_8 };
					Global_2405071.f_2473 = { uParam0->f_11 };
					Global_2405071.f_2476 = 0f;
					Global_2405071.f_2456 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405071.f_2470 = { uParam0->f_8 };
					Global_2405071.f_2473 = { uParam0->f_11 };
					Global_2405071.f_2476 = uParam0->f_14;
					Global_2405071.f_2456 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_176(vVar8.x, vVar8.y);
			}
			Global_2405071.f_2455 = 1;
			Global_2405071.f_2454 = 1;
			Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2460 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2463 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405071.f_2454)
	{
		if (Global_2405071.f_2455 == 1)
		{
			if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 5000)
			{
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_175(Global_4456448.f_190930))
					{
						Var26.f_9 = 1;
					}
					func_150(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_149(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405071.f_2455 = 9;
				}
				else
				{
					Global_2405071.f_2455 = 2;
				}
			}
		}
		if (Global_2405071.f_2455 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar11, vVar14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar11, vVar14) == 0)
			{
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_146(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405071.f_2455 = 3;
				}
				else
				{
					Global_2405071.f_2455 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2465) > 7000)
			{
				func_145(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405071.f_2455 == 3)
		{
			if (func_144() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 10000)
			{
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2455 = 4;
			}
		}
		if (Global_2405071.f_2455 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_178();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2455 = 5;
							}
							break;
						
						case 1:
							func_143(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2455 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2455 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
					Global_2405071.f_2455 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_143(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405071.f_2455 == 5)
		{
			if (func_68(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405071.f_2481.f_5)
				{
					Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
					Global_2405071.f_2455 = 6;
				}
				else
				{
					Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405071.f_2455 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::_0xFEE4A5459472A9F8();
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2455 = 8;
			}
		}
		if (Global_2405071.f_2455 == 6)
		{
			iVar0 = 0;
			Global_2405071.f_2481.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_67(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_66(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2455 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_143(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405071.f_2455 == 7)
		{
			if (func_68(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405071.f_2615[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_149(Global_2405071.f_2615[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_64(Global_2405071.f_2615[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2405071.f_2615[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_18(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405071.f_2455 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 20000)
			{
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2455 = 8;
			}
		}
		if (Global_2405071.f_2455 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2405071.f_484))
				{
				}
			}
			else if (Global_2405071.f_2481.f_2)
			{
				func_16(uParam2, &(Global_2405071.f_2481.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405071.f_2456 };
				func_18(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2455 = 9;
		}
		if (Global_2405071.f_2455 == 9)
		{
			Global_2405071.f_2454 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_184();
			return 1;
		}
		Global_2405071.f_2460 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_16(var uParam0, var uParam1)//Position - 0x171A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_17(int iParam0)//Position - 0x1764
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x1783
{
	vector3 vVar0;
	var uVar3;
	struct<56> Var4;
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	vector3 vVar67;
	vector3 vVar70;
	vector3 vVar73;
	float fVar76;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar67 = { *uParam5 };
						if (func_67(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_66(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_66(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_33(*uParam0, &vVar0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		vVar0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_30(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		func_150(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_29(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_33(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_29(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar70 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar63, 0, 0))
					{
						vVar0.z = uVar63;
					}
				}
			}
			else if (func_19(uParam0, 1, 1, 1, 1))
			{
				func_18(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar70 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar63, 0, 0))
				{
					vVar0.z = uVar63;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405071.f_659 = 1;
}

int func_19(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1BEE
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409979[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409979[iVar0 /*17*/].f_16))
			{
				if (func_28(*uParam0, &(Global_2409979[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409979[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409979[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_20(&vVar1, &(Global_2409979[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_19(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_20(&vVar1, &(Global_2409979[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_20(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x1CC9
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_27(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_27(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_27(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_25(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_24(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_21(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_21(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)//Position - 0x1DD3
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	
	vVar0 = { vParam4 - vParam1 };
	vVar0.z = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.z = 0f;
	vVar6 = { func_23(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_22(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_22(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *uParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.z = 0f;
		vVar6 = { func_23(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.z = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.z = 0f;
		vVar6 = { func_23(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_22(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_22(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *uParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar10 };
		}
		else
		{
			*uParam0 = { vVar13 };
		}
	}
}

float func_22(vector3 vParam0, vector3 vParam3)//Position - 0x20A2
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_23(vector3 vParam0, vector3 vParam3)//Position - 0x20C3
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_24(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)//Position - 0x20FC
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.y = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.y = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.y = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam7);
	}
	*uParam0 = { vVar0 };
}

void func_25(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)//Position - 0x21FB
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_26(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_26(&vVar0, 0f, 0f, fParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar3.x;
	uParam0->f_1 = vVar3.y;
}

void func_26(var uParam0, vector3 vParam1)//Position - 0x22A3
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_27(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, bool bParam12)//Position - 0x237A
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam10)
	{
		case 0:
			func_25(&vParam0, vParam3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_24(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		
		case 2:
			func_21(&vParam0, vParam3, vParam6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_149(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_64(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam3, vParam6, fParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_28(vector3 vParam0, var uParam3, float fParam4, bool bParam5, bool bParam6)//Position - 0x247D
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_149(vParam0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405071.f_2724) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_64(vParam0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false) && !(vParam0.z < uParam3->f_2 && vParam0.z < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false) && !(vParam0.z > uParam3->f_2 && vParam0.z > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_29(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)//Position - 0x25DE
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_64(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam4, vParam7, fParam10, 0, true);
			break;
	}
	return 0;
}

int func_30(int iParam0, bool bParam1)//Position - 0x264B
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
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_32())
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x26D9
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

int func_32()//Position - 0x2AA1
{
	return -1;
}

int func_33(vector3 vParam0, var uParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x2AAA
{
	if (func_63(vParam0, uParam3))
	{
		if (func_34(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam3, iParam4))
	{
		if (func_34(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(vector3 vParam0, var uParam3, int iParam4, bool bParam5)//Position - 0x2B06
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_50(Global_2405071.f_507, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_38(*uParam3, 1056964608))
			{
				if (!func_35(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_35(var uParam0, bool bParam1)//Position - 0x2B8B
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { *uParam0 };
	iVar4 = func_37(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411454[iVar4])
	{
		if (func_36(vVar1, &(Global_2410184[iVar4 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_21(&vVar1, Global_2410184[iVar4 /*141*/][iVar0 /*7*/], Global_2410184[iVar4 /*141*/][iVar0 /*7*/].f_3, Global_2410184[iVar4 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411454[8])
	{
		if (func_36(vVar1, &(Global_2410184[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_21(&vVar1, Global_2410184[8 /*141*/][iVar0 /*7*/], Global_2410184[8 /*141*/][iVar0 /*7*/].f_3, Global_2410184[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_36(vector3 vParam0, var uParam3)//Position - 0x2C98
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_37(struct<2> Param0, var uParam2)//Position - 0x2CB8
{
	if (Param0.f_1 > Global_2411464[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411464[1])
	{
		if (Param0 < Global_2411468[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411464[2])
	{
		if (Param0 < Global_2411468[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411468[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411468[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_38(vector3 vParam0, float fParam3)//Position - 0x2D53
{
	int iVar0;
	
	if (func_47(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4456448.f_69120 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_69120)
			{
				if (Global_4456448.f_69121[iVar0 /*84*/].f_7 != 0)
				{
					if (func_39(vParam0, Global_4456448.f_69121[iVar0 /*84*/], Global_4456448.f_69121[iVar0 /*84*/].f_6, Global_4456448.f_69121[iVar0 /*84*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_60688 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_60688)
			{
				if (Global_4456448.f_60691[iVar0 /*219*/].f_18 != 0)
				{
					if (func_39(vParam0, Global_4456448.f_60691[iVar0 /*219*/], Global_4456448.f_60691[iVar0 /*219*/].f_3, Global_4456448.f_60691[iVar0 /*219*/].f_18, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_92411 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_92411)
			{
				if (Global_4456448.f_92415[iVar0 /*282*/].f_12 != 0)
				{
					if (func_39(vParam0, Global_4456448.f_92415[iVar0 /*282*/], Global_4456448.f_92415[iVar0 /*282*/].f_3, Global_4456448.f_92415[iVar0 /*282*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969029.f_267 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969029.f_267)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969029.f_232[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969029.f_232[iVar0], 0))
				{
					if (func_39(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969029.f_232[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969029.f_232[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969029.f_232[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969029.f_265 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969029.f_265)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969029.f_118[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969029.f_118[iVar0], 0))
				{
					if (func_39(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969029.f_118[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969029.f_118[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969029.f_118[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_39(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, float fParam8)//Position - 0x2FF1
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (SYSTEM::VDIST(vParam0, vParam3) < func_46(iParam7, 1008981770))
	{
		func_40(vParam3, fParam6, iParam7, &vVar0, &vVar3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, fVar6, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_40(vector3 vParam0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)//Position - 0x3044
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	vVar0 = { 0f, 1f, 0f };
	func_26(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_41(iParam4, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.z = (vVar9.z - ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.z = (vVar12.z + ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*uParam6 = { vVar12 };
	*uParam7 = MISC::ABSF((vVar6.x - vVar3.x));
}

void func_41(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x3110
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_44(iParam0);
		if (iVar0 != 0)
		{
			func_42(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_42(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x31CF
{
	int iVar0;
	
	func_43(iParam0, &Global_1315808);
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

void func_43(int iParam0, var uParam1)//Position - 0x33DB
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

int func_44(int iParam0)//Position - 0x345C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_45(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x348B
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_46(int iParam0, float fParam1)//Position - 0x349D
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_41(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

int func_47(int iParam0, bool bParam1, bool bParam2)//Position - 0x351D
{
	if (bParam1)
	{
		if (func_48(iParam0))
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

bool func_48(int iParam0)//Position - 0x354F
{
	return func_49(iParam0);
}

bool func_49(int iParam0)//Position - 0x355D
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

int func_50(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)//Position - 0x3577
{
	int iVar0;
	bool bVar1;
	
	if (func_57(vParam0))
	{
		if (func_19(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_52(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_51(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_25(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_51(vector3 vParam0, float fParam3)//Position - 0x3633
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405071.f_2726[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_52(var uParam0, bool bParam1, bool bParam2)//Position - 0x366E
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_54(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_20(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_54(vVar2, &uVar1) || func_53(vVar2))
			{
				vVar2 = { *uParam0 };
				func_20(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_53(vector3 vParam0)//Position - 0x36F2
{
	float fVar0;
	
	if (Global_2405071.f_588 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405071.f_585);
		if (fVar0 < Global_2405071.f_588)
		{
			return 1;
		}
	}
	return 0;
}

int func_54(vector3 vParam0, var uParam3)//Position - 0x372B
{
	int iVar0;
	int iVar1;
	
	if (func_56())
	{
		return 0;
	}
	iVar1 = func_55();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9 == 1)
		{
			if (func_28(vParam0, &(Global_2405071.f_363[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55()//Position - 0x378F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_56()//Position - 0x37C2
{
	return Global_1676879.f_443;
}

int func_57(vector3 vParam0)//Position - 0x37D1
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405071.f_510 && !Global_2405071.f_511)
	{
		if (!Global_2405071.f_45.f_314)
		{
			if (!func_61(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_60(vParam0, 1008981770))
			{
				if (!func_19(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_19(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_59(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_58(&(Global_2405071.f_45[iVar0 /*12*/])) };
					if (!func_19(&vVar1, 0, 0, 0, 1))
					{
						if (!func_19(&vParam0, 0, 0, 0, 1))
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

Vector3 func_58(var uParam0)//Position - 0x3891
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_59(vector3 vParam0, float fParam3)//Position - 0x38DA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_28(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_60(vector3 vParam0, float fParam3)//Position - 0x3922
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_28(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_61(int iParam0, bool bParam1)//Position - 0x3969
{
	if (Global_1312448 != 0)
	{
		return func_62(iParam0) != 0;
	}
	return func_47(iParam0, bParam1, 0);
}

int func_62(int iParam0)//Position - 0x3990
{
	if (func_1119(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_63(vector3 vParam0, var uParam3)//Position - 0x39B2
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405071.f_2252 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2252)
		{
			fVar3 = SYSTEM::VDIST(Global_2405071.f_2253[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405071.f_2253[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_64(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)//Position - 0x3A2C
{
	func_65(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return 1;
	}
	return 0;
}

void func_65(var uParam0, var uParam1)//Position - 0x3AD7
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_66(vector3 vParam0, vector3 vParam3, float fParam6)//Position - 0x3B39
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.y = vParam0.y;
		vVar0.y = vParam3.y;
	}
	else
	{
		vVar3.y = vParam3.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.z = vParam0.z;
		vVar0.z = vParam3.z;
	}
	else
	{
		vVar3.z = vParam3.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar3 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_67(float fParam0)//Position - 0x3BE4
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x3BFC
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2405071.f_2481.f_1 == 0 && Global_2405071.f_2481 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2405071.f_2481.f_1)))
			{
				case 0:
					func_141(uParam1, uParam2);
					if (!Global_2405071.f_2481.f_2)
					{
						if (uParam2->f_7 && Global_2405071.f_550.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
							}
							if (uParam1->f_5 && func_17(Global_2405071.f_484))
							{
								if (!Global_2405071.f_2481.f_5)
								{
									Global_2405071.f_2481.f_5 = 1;
								}
								else
								{
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_141(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_141(uParam1, uParam2);
					Global_2405071.f_2481.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_141(uParam1, uParam2);
				if (!Global_2405071.f_2481.f_2)
				{
					Global_2405071.f_2481.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_138(Global_2405071.f_550, &(Global_2405071.f_2481.f_57), &(Global_2405071.f_2481.f_90));
	}
	if (uParam2->f_7 && !Global_2405071.f_2481.f_4)
	{
		Global_2405071.f_2481.f_4 = 1;
		func_76(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405071.f_2481.f_1 > 0 || Global_2405071.f_2481 > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405071.f_2481.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405071.f_2481.f_3)
					{
						iVar4 = Global_2405071.f_2481.f_3 + 1;
					}
					if (iVar4 > (Global_2405071.f_2481.f_1 - 1))
					{
						iVar4 = (Global_2405071.f_2481.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar4);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar4, &iVar5);
					}
					func_76(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405071.f_2481.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405071.f_2481.f_1;
		}
		if (Global_2405071.f_2481.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405071.f_2878)
			{
				func_70(&(Global_2405071.f_2481.f_6[0 /*10*/]), &(Global_2405071.f_2481.f_6[1 /*10*/]), &(Global_2405071.f_2481.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_17(Global_2405071.f_484))
			{
				if (Global_2405071.f_2481.f_2)
				{
					func_16(uParam0, &(Global_2405071.f_2481.f_6));
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405071.f_2481.f_2)
			{
				func_16(uParam0, &(Global_2405071.f_2481.f_6));
				func_69(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405071.f_2481.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_35(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_69(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
		if (uParam1->f_5 && func_17(Global_2405071.f_484))
		{
			if (!Global_2405071.f_2481.f_5)
			{
				Global_2405071.f_2481.f_5 = 1;
			}
			else
			{
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_18(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_69(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_69(vector3 vParam0)//Position - 0x41C5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405071.f_2615[(3 - iVar0) /*3*/] = { Global_2405071.f_2615[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405071.f_2615[0 /*3*/] = { vParam0 };
}

void func_70(var uParam0, var uParam1, var uParam2)//Position - 0x4215
{
	if (func_17(Global_2405071.f_484) && func_75() < 4096)
	{
		func_74(uParam0, 0f);
		func_74(uParam1, uParam0->f_2);
		func_74(uParam2, uParam1->f_2);
	}
	else
	{
		func_73(uParam0);
		func_72(uParam2, uParam0->f_4);
		func_71(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_71(var uParam0, vector3 vParam1, vector3 vParam4)//Position - 0x427A
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408003[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2408003[iVar0 /*10*/].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408003[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_72(var uParam0, vector3 vParam1)//Position - 0x4319
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408003[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408003[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_73(var uParam0)//Position - 0x439B
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408003[iVar0 /*10*/].f_1;
				Var2 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_74(var uParam0, float fParam1)//Position - 0x4408
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_2 < fVar1 && Global_2408003[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408003[iVar0 /*10*/].f_2;
				Var2 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_75()//Position - 0x448B
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408003[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_76(vector3 vParam0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)//Position - 0x44C2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;
	float fVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2405071.f_484 == 1)
		{
			if (MISC::ABSF((Global_2405071.f_507.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_134(PLAYER::PLAYER_ID()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_133(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_132(vParam0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(uParam5->f_23) > 0f && SYSTEM::VMAG(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, true))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_126(vParam0, fParam3, uParam4->f_15, func_131(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405071.f_3;
		}
	}
	else if (!func_123(vParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_119(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_119(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405071.f_691)
		{
			vVar12 = { Global_2405071.f_507 };
			if (Global_2405071.f_484 == 26)
			{
				vVar12 = { Global_2405071.f_550.f_18 };
			}
			if (!func_51(vParam0, 0.5f))
			{
				if (func_57(vVar12))
				{
					if (!func_19(&vParam0, 0, 0, 0, 1) && !func_118(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_118(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_117(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_116(PLAYER::PLAYER_ID()) && func_114(PLAYER::PLAYER_ID())))
		{
			if (!func_113(&vParam0, &(Global_2405071.f_2481.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_114(PLAYER::PLAYER_ID()))
		{
			if (!func_112(vParam0, &(Global_2405071.f_2481.f_57), &(Global_2405071.f_2481.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_111(vParam0))
	{
		if (uParam4->f_5)
		{
			if (func_17(Global_2405071.f_484))
			{
				if (func_60(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_110(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405071.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405071.f_691)
		{
			if (!func_52(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_35(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_59(vParam0, 1008981770);
		if (iVar16 > -1)
		{
			func_109(vParam0, &vVar17, &vVar20, &fVar23);
			if (!func_104(&(Global_2405071.f_45[iVar16 /*12*/]), vVar17, vVar20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_38(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_103(vParam0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405071.f_2878 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_95(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_95(vParam0, Global_2405071.f_2456, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_2405071.f_484) && iVar8 < 4096)
			{
				Var25.f_2 = func_93(vParam0);
			}
			uVar7 = func_82(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_81(Var25);
			Global_2405071.f_2481.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405071.f_2481.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_95(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_95(vParam0, Global_2405071.f_2456, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_17(Global_2405071.f_484) && iVar8 == Global_2405071.f_2481.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_93(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405071.f_2481.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_80(Var25, iVar24);
							Global_2405071.f_2481.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405071.f_2481.f_6[iVar24 /*10*/] || (iVar8 == Global_2405071.f_2481.f_6[iVar24 /*10*/] && fVar0 > Global_2405071.f_2481.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_80(Var25, iVar24);
						Global_2405071.f_2481.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_78(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_82(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_77(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_77(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405071.f_2481.f_6[iVar24 /*10*/] || (iVar8 == Global_2405071.f_2481.f_6[iVar24 /*10*/] && fVar3 > Global_2405071.f_2481.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_80(Var25, iVar24);
						Global_2405071.f_2481.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_77(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4E7F
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_78(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x4F1D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_1119(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1119(iVar1, 1, 1))
		{
			if (!func_146(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_79(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_79(int iParam0)//Position - 0x50B4
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

void func_80(struct<10> Param0, int iParam10)//Position - 0x50DF
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405071.f_2481.f_6[iParam10 /*10*/] };
	Global_2405071.f_2481.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_80(Var0, iParam10 + 1);
	}
}

void func_81(struct<10> Param0)//Position - 0x5131
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_75();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] < iVar11)
		{
			Global_2408003[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] == 0)
		{
			Global_2408003[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2408003[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408003[iVar13 /*10*/] = { Param0 };
	}
}

float func_82(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x5225
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_1119(iVar11, 1, 1) || (iParam7 == 1 && func_1119(iVar11, 0, 0)))
		{
			if (!iVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_84(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar11) == -1 || !func_61(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar11) || !bParam6)
					{
						if (func_79(iVar11))
						{
							vVar5 = { func_83(iVar11) };
							if (!iVar11 == PLAYER::PLAYER_ID())
							{
								vVar8 = { NETWORK::_0x64D779659BC37B19(PLAYER::GET_PLAYER_PED(iVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.z = vParam0.z;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar8, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_83(int iParam0)//Position - 0x5388
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_84(int iParam0)//Position - 0x539B
{
	if (func_1119(iParam0, 0, 1))
	{
		if (!func_91(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_47(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_90(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_47(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_85(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x5448
{
	if (func_89(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_88(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2507671))
	{
		return 1;
	}
	if (func_86(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_86(int iParam0, int iParam1)//Position - 0x548F
{
	int iVar0;
	
	iVar0 = func_87(iParam0);
	if (!iVar0 == func_32())
	{
		if (iVar0 == func_87(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x54BA
{
	if (iParam0 != func_32())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_32();
}

struct<13> func_88(int iParam0)//Position - 0x54DD
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_89(int iParam0, int iParam1)//Position - 0x54F4
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2507671 = { func_88(iParam0) };
		Global_2507684 = { func_88(iParam1) };
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

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x5561
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

int func_91(int iParam0)//Position - 0x572C
{
	if (func_146(iParam0, 0))
	{
		return 1;
	}
	if (func_92())
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

bool func_92()//Position - 0x576E
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

float func_93(vector3 vParam0)//Position - 0x577F
{
	var uVar0;
	
	return func_94(vParam0, &(Global_2405071.f_45), &uVar0);
}

float func_94(vector3 vParam0, var uParam3, var uParam4)//Position - 0x5797
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405071.f_2724) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_95(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)//Position - 0x5913
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_77(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_82(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_77(fVar4, 0f, func_102(), func_100(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_98(vParam0);
	fVar0 = func_77(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_61(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_97(vParam0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_77(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_96(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_77(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_77(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_77(SYSTEM::VDIST(Global_2405071.f_507, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_96(vector3 vParam0, var uParam3, var uParam4)//Position - 0x5AFA
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	
	iVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar3, &vVar0);
		*uParam3 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam4 = MISC::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_97(vector3 vParam0, int iParam3, int iParam4)//Position - 0x5B53
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_1119(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_1119(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
					{
						if (Global_2417783.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417783.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_98(vector3 vParam0)//Position - 0x5BFF
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], 0))
			{
				if (func_99(uVar6[iVar2]))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], true) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405071.f_2923)
	{
		if (Global_969029.f_266 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969029.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969029.f_151[iVar2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_969029.f_151[iVar2], 0))
					{
						if (func_99(Global_969029.f_151[iVar2]))
						{
							vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_969029.f_151[iVar2], true) };
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_99(int iParam0)//Position - 0x5D1F
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574964[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574964[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574674[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574674[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_100()//Position - 0x5DEA
{
	if (func_101())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_101()//Position - 0x5E46
{
	if (Global_2405071.f_45.f_65 && !Global_2405071.f_45.f_301)
	{
		if (!func_91(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_102()//Position - 0x5E7C
{
	if (func_101())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_103(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)//Position - 0x5ED8
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_104(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)//Position - 0x5F67
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_108(*uParam0, uParam0->f_6, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_107(*uParam0, uParam0->f_3, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_105(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_105(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, vector3 vParam10, float fParam13)//Position - 0x5FF3
{
	vector3 vVar0[8];
	int iVar25;
	
	func_106(vParam0, vParam3, fParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam7, vParam10, fParam13, 0, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_106(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)//Position - 0x6045
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	
	if (vParam0.z == vParam3.z)
	{
		vParam3.z = (vParam3.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_23(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(SYSTEM::VMAG(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0.5f)) };
	if (vParam0.z > vParam3.z)
	{
		uVar6 = vParam3.z;
		uVar7 = vParam0.z;
	}
	else
	{
		uVar6 = vParam0.z;
		uVar7 = vParam3.z;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, vParam3.y, vParam3.x) + vVar3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, vParam3.y, vParam3.x) + vVar3 };
}

int func_107(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12)//Position - 0x6172
{
	vector3 vVar0[8];
	int iVar25;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6 /*3*/] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7 /*3*/] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam6, vParam9, fParam12, 0, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_108(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, float fParam10)//Position - 0x623C
{
	vector3 vVar0[4];
	int iVar13;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar13 /*3*/], vParam4, vParam7, fParam10, 0, true))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_109(vector3 vParam0, var uParam3, var uParam4, var uParam5)//Position - 0x62C0
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { vParam0 };
	iVar4 = func_37(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411454[iVar4])
	{
		if (func_36(vVar1, &(Global_2410184[iVar4 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410184[iVar4 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410184[iVar4 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410184[iVar4 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411454[8])
	{
		if (func_36(vVar1, &(Global_2410184[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410184[8 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410184[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410184[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_110(vector3 vParam0)//Position - 0x63AE
{
	int iVar0;
	int iVar1;
	
	if (Global_2405071.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2405071.f_45.f_56))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2405071.f_45.f_57)
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
		}
	}
	return 1;
}

int func_111(vector3 vParam0)//Position - 0x6419
{
	switch (Global_2405071.f_2477)
	{
		case 0:
			return func_149(vParam0, Global_2405071.f_2456, Global_2405071.f_2459, 0, 0);
			break;
		
		case 1:
			return func_64(vParam0, Global_2405071.f_2470, Global_2405071.f_2473, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405071.f_2470, Global_2405071.f_2473, Global_2405071.f_2476, 0, true);
			break;
	}
	return 0;
}

int func_112(vector3 vParam0, var uParam3, var uParam4, float fParam5)//Position - 0x64AB
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(uParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *(uParam4[iVar1 /*10*/]) };
		vVar5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar5, fVar8, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_113(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x6559
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_25(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x65CC
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_115(iParam0))
			{
				if (Global_1590446[iParam0 /*871*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_115(int iParam0)//Position - 0x6602
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_116(int iParam0)//Position - 0x6617
{
	if (func_47(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(vector3 vParam0, float fParam3, int iParam4)//Position - 0x663C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405071.f_2615[iVar0 /*3*/], vParam0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_118(var uParam0, bool bParam1)//Position - 0x667A
{
	var uVar0;
	vector3 vVar1;
	float fVar4;
	
	if (func_53(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_25(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 0, fVar4);
			if (func_54(vVar1, &uVar0) || func_53(vVar1))
			{
				vVar1 = { *uParam0 };
				func_25(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_119(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x6712
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1119(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_120(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1119(iVar1, 1, 1))
		{
			if (!func_146(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_79(iVar1) || !bParam10) && !Global_2424073[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_120(iVar1), vParam0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_120(iVar1), vParam0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_120(int iParam0)//Position - 0x68CA
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_122() && Global_1590446[iVar0 /*871*/].f_842) && !func_121(Global_1590446[iVar0 /*871*/].f_843))
	{
		return Global_1590446[iVar0 /*871*/].f_843;
	}
	return func_83(iParam0);
}

int func_121(vector3 vParam0)//Position - 0x691D
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_122()//Position - 0x6947
{
	return Global_2448961.f_17;
}

int func_123(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6955
{
	if (func_125(vParam0, fParam3, iParam4, iParam5, 0) || func_124(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_124(vector3 vParam0, int iParam3, int iParam4)//Position - 0x6986
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_39(vParam0, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1119(iVar2, 0, 1) && func_1119(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x6A48
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_1119(iVar1, 0, 1) && func_1119(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1119(iVar1, 0, 1) && func_1119(iParam4, 0, 1))
				{
					if (Global_2417783.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417783.f_131[iVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_83(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417783.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417783.f_131[iVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1119(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_83(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)//Position - 0x6B65
{
	Global_2405071.f_3 = 0;
	if (!func_123(vParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405071.f_3++;
		if (bParam5)
		{
			if (func_177(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_130(vParam0, fParam12))
				{
					Global_2405071.f_3++;
					if (!func_38(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_177(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_130(vParam0, fParam12))
				{
					Global_2405071.f_3++;
					if (!func_127(vParam0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2405071.f_3++;
						if (!func_38(vParam0, 1056964608))
						{
							Global_2405071.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (func_177(vParam0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			if (!func_130(vParam0, fParam12))
			{
				Global_2405071.f_3++;
				if (!func_127(vParam0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2405071.f_3++;
					if (!func_38(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
		}
	}
	return 0;
}

int func_127(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x6DA5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_1119(iVar1, 1, 1) && func_79(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_129(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_128(func_83(iVar1), vParam0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_128(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)//Position - 0x6E24
{
	vector3 vVar0;
	vector3 vVar3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	vVar0.x = SYSTEM::SIN(fParam6);
	vVar0.y = SYSTEM::COS(fParam6);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.z = vParam3.z;
	vVar3.z = (vVar3.z + fParam9);
	vParam3.z = (vParam3.z + fParam9);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam3, vVar3, fParam8, 0, true);
}

bool func_129(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6EB0
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

int func_130(vector3 vParam0, float fParam3)//Position - 0x6F28
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1119(iVar1, 1, 1) && func_79(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_61(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_129(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_83(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x6FE4
{
	if ((Global_2405071.f_484 == 9 || Global_2405071.f_484 == 9) || (Global_2405071.f_484 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_132(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x7027
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_1119(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_79(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_85(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_83(iVar1), vParam0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(vector3 vParam0, float fParam3, int iParam4, float fParam5)//Position - 0x7123
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_1119(iVar1, 1, 1))
			{
				if ((!func_146(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_83(iVar1), vParam0, true) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_134(int iParam0)//Position - 0x71E8
{
	if (((func_61(iParam0, 1) || func_137(iParam0)) || func_136(iParam0, 0)) || func_135(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x7224
{
	if (!func_1119(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

int func_136(int iParam0, int iParam1)//Position - 0x7247
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)//Position - 0x7282
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

void func_138(vector3 vParam0, var uParam3, var uParam4)//Position - 0x72A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	vector3 vVar17;
	vector3 vVar20;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_140(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5999[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_140(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_140(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar17 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar17, vParam0) < SYSTEM::VDIST(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_139(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_139(var uParam0, var uParam1, int iParam2)//Position - 0x75C6
{
	Global_2412459 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_139(&Global_2412459, uParam1, iParam2 + 1);
	}
}

void func_140(var uParam0, var uParam1, int iParam2)//Position - 0x7604
{
	Global_2412455 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_140(&Global_2412455, uParam1, iParam2 + 1);
	}
}

void func_141(var uParam0, var uParam1)//Position - 0x763E
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	if (Global_2405071.f_2252 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2252)
		{
			if (func_142(Global_2405071.f_2253[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405071.f_2253[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405071.f_2253[iVar0 /*4*/] };
					fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_76(Global_2405071.f_2253[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2405071.f_2481++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405071.f_2878)
	{
		func_70(&(Global_2405071.f_2481.f_6[0 /*10*/]), &(Global_2405071.f_2481.f_6[1 /*10*/]), &(Global_2405071.f_2481.f_6[2 /*10*/]));
	}
}

int func_142(vector3 vParam0, var uParam3)//Position - 0x772B
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_29(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_29(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_143(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)//Position - 0x7788
{
	float fVar0;
	
	func_65(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0.5f);
}

var func_144()//Position - 0x77DE
{
	return Global_1310987.f_4;
}

void func_145(float fParam0, float fParam1)//Position - 0x77EC
{
	func_184();
	func_176(fParam0, fParam1);
}

bool func_146(int iParam0, int iParam1)//Position - 0x7800
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_147(-1, 0) == 8;
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

int func_147(int iParam0, bool bParam1)//Position - 0x784B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_148();
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

int func_148()//Position - 0x788C
{
	return Global_1312745;
}

bool func_149(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)//Position - 0x7898
{
	if (bParam7 && bParam8)
	{
		vParam0.z = 0f;
		vParam3.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
}

void func_150(var uParam0, var uParam1, var uParam2)//Position - 0x794B
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405071.f_1744 > 0)
	{
		iVar0 = 0;
		while (func_172(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_151(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_151(var uParam0, var uParam1, var uParam2)//Position - 0x79BA
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_50(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_171(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412469.f_162 = 0;
	Global_2412469.f_163 = 0;
	Global_2412469.f_164 = -99;
	Global_2412469.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412469[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412469.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_44(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412469.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412469.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_118(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_170(vVar1))
									{
										vVar1 = { func_166(vVar1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_38(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_165(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_171(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_161(vVar1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_50(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_160(vVar1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_177(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_177(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_158(vVar1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_157(vVar1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412469.f_162)
																										{
																											Global_2412469[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412469.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412469.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412469.f_162 == 0)
																									{
																										Global_2412469[0 /*3*/] = { vVar1 };
																										Global_2412469.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412469.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412469[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_156(vVar1, fVar4, iVar16);
																													iVar16 = Global_2412469.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412469.f_162++;
																									if (Global_2412469.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412469.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412469[Global_2412469.f_162 /*3*/] = { vVar1 };
																									Global_2412469.f_121[Global_2412469.f_162] = fVar4;
																									Global_2412469.f_162++;
																									if (func_165(vVar1, uParam2))
																									{
																										Global_2412469.f_163++;
																									}
																									if (Global_2412469.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412469.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412469.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412469[0 /*3*/] };
						*uParam1 = Global_2412469.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412469.f_163 > 0 && !Global_2412469.f_163 == Global_2412469.f_162)
						{
							func_154(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412469.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412469[0 /*3*/] };
						uVar30 = Global_2412469.f_121[0];
						Global_2412469[0 /*3*/] = { Global_2412469[iVar26 /*3*/] };
						Global_2412469.f_121[0] = Global_2412469.f_121[iVar26];
						Global_2412469[iVar26 /*3*/] = { vVar27 };
						Global_2412469.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412469[0 /*3*/] };
						*uParam1 = Global_2412469.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_153(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						vVar31 = { vVar1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_50(uParam2->f_35, &vVar31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_171(&vVar31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_152(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412469.f_164 = iVar8;
	}
	return 0;
}

void func_152(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x83E5
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_123(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_153(int iParam0, vector3 vParam1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)//Position - 0x8469
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_166(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_170(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_154(int iParam0, var uParam1)//Position - 0x84ED
{
	if (!func_165(Global_2412469[iParam0 /*3*/], uParam1))
	{
		Global_2412469.f_162 = (Global_2412469.f_162 - 1);
		func_155(iParam0);
		if (Global_2412469.f_162 > Global_2412469.f_163)
		{
			func_154(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_154(iParam0 + 1, uParam1);
	}
}

void func_155(int iParam0)//Position - 0x8548
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412469[iParam0 /*3*/] = { Global_2412469[iParam0 + 1 /*3*/] };
			Global_2412469.f_121[iParam0] = Global_2412469.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_156(vector3 vParam0, float fParam3, int iParam4)//Position - 0x8593
{
	vector3 vVar0;
	var uVar3;
	
	vVar0 = { Global_2412469[iParam4 /*3*/] };
	uVar3 = Global_2412469.f_121[iParam4];
	Global_2412469[iParam4 /*3*/] = { vParam0 };
	Global_2412469.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412469.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_156(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_157(vector3 vParam0, float fParam3, float fParam4)//Position - 0x8600
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_84(iVar5))
		{
			vVar1 = { func_83(iVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_158(vector3 vParam0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x8668
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_1119(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_79(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_85(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_159(vParam0, fParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_39(func_83(iVar1), vParam0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_159(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)//Position - 0x87DB
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	
	if (func_39(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_41(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	vVar20 = { 0f, vVar17.y, 0f };
	func_26(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_26(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (MISC::ABSF((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_26(&vVar26, 0f, 0f, fParam3);
	vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_39(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_159(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_160(vector3 vParam0, float fParam3, int iParam4)//Position - 0x8995
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_159(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_159(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x8AA1
{
	if (func_164(vParam0, fParam3, iParam4, iParam5, iParam6) || func_162(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_162(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8AD7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_163(vParam0, iParam4, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_159(vParam0, fParam3, iParam4, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1119(iVar2, 0, 1) && func_1119(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_163(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)//Position - 0x8BB1
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_46(iParam3, 1008981770);
	fVar1 = func_46(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_164(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8BF1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1119(iVar1, 0, 1) && func_1119(iParam5, 0, 1))
			{
				if (Global_2417783.f_261[iVar0])
				{
					if (func_39(Global_2417783.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_39(func_83(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417783.f_261[iVar0])
			{
				if (func_39(Global_2417783.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1119(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_39(func_83(iVar1), vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_165(vector3 vParam0, var uParam3)//Position - 0x8D00
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_149(vParam0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_64(vParam0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_166(vector3 vParam0, float fParam3, int iParam4, bool bParam5, vector3 vParam6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)//Position - 0x8D91
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_169(vParam0, *fParam3, vParam6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_168(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_167(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_167(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_169(vParam0, *fParam3, vParam6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::_GET_ROAD_SIDE_POINT_WITH_HEADING(vParam0, *fParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!iParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_167(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_167(iParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_167(int iParam0, float fParam1)//Position - 0x91D8
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_41(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_168(vector3 vParam0)//Position - 0x920F
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_169(vector3 vParam0, float fParam3, vector3 vParam4)//Position - 0x9247
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0f, 1f, 0f };
	func_26(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_22(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_170(vector3 vParam0)//Position - 0x9283
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_37(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412176[iVar1])
	{
		if (func_36(vParam0, &(Global_2411473[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412176[8])
	{
		if (func_36(vParam0, &(Global_2411473[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_171(var uParam0, bool bParam1)//Position - 0x92FE
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405071.f_26.f_18)
	{
		switch (Global_2405071.f_26.f_17)
		{
			case 0:
				if (func_149(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_64(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_27(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, Global_2405071.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_172(var uParam0, var uParam1, var uParam2)//Position - 0x93F0
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	vector3 vVar15;
	var uVar18;
	
	if (Global_2405071.f_1744 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_50(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_171(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412469.f_162 = 0;
		Global_2412469.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412469[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412469.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_173(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_1744)
		{
			iVar1 = Global_2405071.f_2150[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405071.f_1745[iVar1 /*4*/] };
				fVar5 = Global_2405071.f_1745[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_161(vVar2, fVar5, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_50(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_160(vVar2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_177(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_177(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_158(vVar2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_157(vVar2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412469.f_162)
															{
																Global_2412469[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412469.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412469.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412469.f_162 == 0)
														{
															Global_2412469[0 /*3*/] = { vVar2 };
															Global_2412469.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412469.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412469[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_156(vVar2, fVar5, iVar6);
																		iVar6 = Global_2412469.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412469.f_162++;
														if (Global_2412469.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1744;
															}
															else if (Global_2412469.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1744;
															}
														}
													}
													else
													{
														Global_2412469[Global_2412469.f_162 /*3*/] = { vVar2 };
														Global_2412469.f_121[Global_2412469.f_162] = fVar5;
														Global_2412469.f_162++;
														if (Global_2412469.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1744;
															}
															else if (Global_2412469.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1744;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412469.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412469[0 /*3*/] };
				*uParam1 = Global_2412469.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412469.f_163 > 0 && !Global_2412469.f_163 == Global_2412469.f_162)
				{
					func_154(0, uParam2);
				}
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412469.f_162);
				vVar15 = { Global_2412469[0 /*3*/] };
				uVar18 = Global_2412469.f_121[0];
				Global_2412469[0 /*3*/] = { Global_2412469[iVar14 /*3*/] };
				Global_2412469.f_121[0] = Global_2412469.f_121[iVar14];
				Global_2412469[iVar14 /*3*/] = { vVar15 };
				Global_2412469.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412469[0 /*3*/] };
				*uParam1 = Global_2412469.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_173(vector3 vParam0)//Position - 0x9A28
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405071.f_1744)
	{
		uVar1 = func_174(vParam0, fVar0, &fVar0);
		Global_2405071.f_2150[iVar2] = uVar1;
		iVar2++;
	}
}

int func_174(vector3 vParam0, float fParam3, float fParam4)//Position - 0x9A63
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405071.f_1744)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405071.f_1745[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_175(int iParam0)//Position - 0x9AC5
{
	return iParam0 == 50;
}

void func_176(float fParam0, float fParam1)//Position - 0x9AD2
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2405071.f_2464 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405071.f_2462 = 1;
	Global_2405071.f_2465 = NETWORK::GET_NETWORK_TIME();
}

int func_177(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)//Position - 0x9B05
{
	Global_2405071.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_132(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_119(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

void func_178()//Position - 0x9C16
{
	func_183();
	func_182();
	func_181();
	func_180();
	func_179();
}

void func_179()//Position - 0x9C32
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408003[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_180()//Position - 0x9C6A
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405071.f_2481.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_181()//Position - 0x9C99
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405071.f_2481.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_182()//Position - 0x9CC7
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405071.f_2481.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_183()//Position - 0x9D03
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405071.f_2481 = { Var0 };
}

void func_184()//Position - 0x9D21
{
	if (Global_2405071.f_2462)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_2464)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405071.f_2462 = 0;
	}
}

int func_185(bool bParam0)//Position - 0x9D54
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_186()//Position - 0x9D77
{
	return Local_208.f_38[Local_208.f_36 /*3*/];
}

void func_187()//Position - 0x9D8B
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_208 != 4)
	{
		iLocal_463 = 0;
		while (iLocal_463 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_463)))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_463));
				if (func_1119(iVar2, 1, 1))
				{
				}
				if (!MISC::IS_BIT_SET(Local_208.f_1, 1))
				{
					if (MISC::IS_BIT_SET(Local_268[iLocal_463 /*6*/].f_1, 2))
					{
						if (Local_208.f_37 != iVar2)
						{
							Local_208.f_37 = iVar2;
						}
					}
				}
				if (!MISC::IS_BIT_SET(Local_208.f_1, 1))
				{
					if (Local_268[iLocal_463 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_268[iLocal_463 /*6*/].f_5);
					}
				}
				if (!MISC::IS_BIT_SET(Local_208.f_1, 4))
				{
					if (MISC::IS_BIT_SET(Local_268[iLocal_463 /*6*/].f_1, 5))
					{
						MISC::SET_BIT(&(Local_208.f_1), 4);
						Local_208.f_35 = iVar2;
					}
				}
				if (!MISC::IS_BIT_SET(Local_208.f_1, 2))
				{
					if (!bVar1)
					{
						if (((MISC::IS_BIT_SET(Local_208.f_1, 1) || MISC::IS_BIT_SET(Local_208.f_1, 3)) || MISC::IS_BIT_SET(Local_208.f_1, 4)) || MISC::IS_BIT_SET(Local_208.f_1, 5))
						{
							if (!MISC::IS_BIT_SET(Local_268[iLocal_463 /*6*/].f_1, 4))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (!MISC::IS_BIT_SET(Local_208.f_1, 5))
			{
				if (Local_208.f_33 > -1)
				{
					if (iLocal_463 == Local_208.f_33)
					{
						MISC::SET_BIT(&(Local_208.f_1), 5);
					}
				}
			}
			iLocal_463++;
		}
		if (!MISC::IS_BIT_SET(Local_208.f_1, 1))
		{
			iVar0 = (iVar0 + Local_208.f_6);
			if (iVar0 >= func_188())
			{
				MISC::SET_BIT(&(Local_208.f_1), 1);
			}
			if (Local_208.f_5 != iVar0)
			{
				if (Local_208.f_5 < iVar0)
				{
					Local_208.f_5 = iVar0;
				}
				else if (Local_208.f_6 != (Local_208.f_5 - iVar0))
				{
					Local_208.f_6 = (Local_208.f_5 - iVar0);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_208.f_1, 2))
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(Local_208.f_1), 2);
			}
		}
	}
}

int func_188()//Position - 0x9F6F
{
	return Global_262145.f_12504;
}

int func_189()//Position - 0x9F7E
{
	int iVar0;
	int iVar1;
	
	if (func_193() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_192(Local_208.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
				if (func_190(iVar1))
				{
					Local_208.f_38[iVar0 /*3*/] = { vLocal_774[iVar1 /*3*/] };
					vLocal_774[iVar1 /*3*/] = { 0f, 0f, 0f };
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_192(Local_208.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_190(int iParam0)//Position - 0xA01C
{
	int iVar0;
	float fVar1;
	
	if (func_192(vLocal_774[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_192(Local_208.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_208.f_38[iVar0 /*3*/], vLocal_774[iParam0 /*3*/], true);
				if (fVar1 < func_191())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_191()//Position - 0xA097
{
	return SYSTEM::TO_FLOAT(Global_262145.f_12505);
}

bool func_192(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0xA0AA
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_193()//Position - 0xA0F1
{
	int iVar0;
	
	if (Local_208.f_48 != -1)
	{
		return Local_208.f_48;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (!func_195(iVar0))
	{
		Local_208.f_48 = iVar0;
		func_194();
	}
	return Local_208.f_48;
}

void func_194()//Position - 0xA12B
{
	switch (Local_208.f_48)
	{
		case 0:
			vLocal_774[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			vLocal_774[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			vLocal_774[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			vLocal_774[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			vLocal_774[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_774[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_774[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			vLocal_774[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			vLocal_774[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			vLocal_774[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			vLocal_774[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			vLocal_774[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			vLocal_774[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			vLocal_774[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			vLocal_774[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			vLocal_774[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			vLocal_774[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			vLocal_774[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			vLocal_774[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			vLocal_774[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		
		case 1:
			vLocal_774[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			vLocal_774[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			vLocal_774[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			vLocal_774[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			vLocal_774[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			vLocal_774[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			vLocal_774[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			vLocal_774[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			vLocal_774[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			vLocal_774[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_774[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_774[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			vLocal_774[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			vLocal_774[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			vLocal_774[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			vLocal_774[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			vLocal_774[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			vLocal_774[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			vLocal_774[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			vLocal_774[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		
		case 2:
			vLocal_774[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			vLocal_774[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			vLocal_774[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			vLocal_774[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			vLocal_774[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			vLocal_774[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			vLocal_774[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			vLocal_774[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			vLocal_774[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			vLocal_774[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			vLocal_774[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			vLocal_774[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			vLocal_774[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			vLocal_774[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			vLocal_774[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			vLocal_774[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			vLocal_774[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			vLocal_774[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			vLocal_774[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			vLocal_774[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		
		case 3:
			vLocal_774[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			vLocal_774[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			vLocal_774[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			vLocal_774[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			vLocal_774[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			vLocal_774[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			vLocal_774[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			vLocal_774[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			vLocal_774[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			vLocal_774[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			vLocal_774[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			vLocal_774[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			vLocal_774[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			vLocal_774[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			vLocal_774[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			vLocal_774[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			vLocal_774[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			vLocal_774[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			vLocal_774[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			vLocal_774[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_195(int iParam0)//Position - 0xA8C0
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_12447;
		
		case 1:
			return Global_262145.f_12448;
		
		case 2:
			return Global_262145.f_12446;
		
		case 3:
			return Global_262145.f_12445;
		
		default:
	}
	return 0;
}

int func_196(var uParam0)//Position - 0xA910
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

void func_197(var uParam0)//Position - 0xA939
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_198()//Position - 0xA958
{
	func_200();
	if (MISC::IS_BIT_SET(iLocal_462, 9))
	{
		return;
	}
	if (func_1009())
	{
		if (!MISC::IS_BIT_SET(iLocal_462, 0))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			MISC::SET_BIT(&iLocal_462, 0);
		}
		if (!MISC::IS_BIT_SET(iLocal_462, 1))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START"))
			{
				MISC::SET_BIT(&iLocal_462, 1);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_462, 1))
		{
			if (!MISC::IS_BIT_SET(iLocal_462, 3))
			{
				if (Local_208.f_5 == 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_MID"))
					{
						MISC::SET_BIT(&iLocal_462, 3);
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(iLocal_462, 3))
		{
			if (!MISC::IS_BIT_SET(iLocal_462, 4))
			{
				if (Local_208.f_5 == 2)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_FINAL"))
					{
						MISC::SET_BIT(&iLocal_462, 4);
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(Local_208.f_1, 1) || MISC::IS_BIT_SET(Local_208.f_1, 4))
		{
			if (MISC::IS_BIT_SET(iLocal_462, 4))
			{
				if (!MISC::IS_BIT_SET(iLocal_462, 6))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
					{
						MISC::SET_BIT(&iLocal_462, 6);
						MISC::SET_BIT(&iLocal_462, 2);
						AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_410())
	{
		if (func_199(PLAYER::PLAYER_ID(), 20))
		{
			if (!MISC::IS_BIT_SET(iLocal_462, 0))
			{
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				MISC::SET_BIT(&iLocal_462, 0);
			}
			if (!MISC::IS_BIT_SET(iLocal_462, 7))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START_ATTACK"))
				{
					MISC::SET_BIT(&iLocal_462, 7);
				}
			}
			if (MISC::IS_BIT_SET(Local_208.f_1, 1) || MISC::IS_BIT_SET(Local_208.f_1, 4))
			{
				if (MISC::IS_BIT_SET(iLocal_462, 7))
				{
					if (!MISC::IS_BIT_SET(iLocal_462, 6))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
						{
							MISC::SET_BIT(&iLocal_462, 6);
							MISC::SET_BIT(&iLocal_462, 2);
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_199(int iParam0, int iParam1)//Position - 0xAB3A
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_200()//Position - 0xAB55
{
	if (MISC::IS_BIT_SET(iLocal_462, 8))
	{
		if (MISC::IS_BIT_SET(iLocal_462, 9))
		{
			if (!MISC::IS_BIT_SET(iLocal_462, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_462, 11))
				{
					if (!MISC::IS_BIT_SET(iLocal_462, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_462, 15))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_462, 15);
					}
				}
				if (MISC::IS_BIT_SET(iLocal_462, 15))
				{
					if (!MISC::IS_BIT_SET(iLocal_462, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_462, 13);
						}
					}
					if (MISC::IS_BIT_SET(iLocal_462, 13))
					{
						MISC::SET_BIT(&iLocal_462, 10);
					}
				}
			}
		}
	}
}

void func_201()//Position - 0xAC09
{
	vector3 vVar0;
	int iVar3;
	
	if (!func_1009() && !func_410())
	{
		return;
	}
	if (Local_208.f_34 > -1)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar3), false) };
		}
	}
	if (!func_192(vVar0, 0f, 0f, 0f, 0))
	{
		func_202(142, vVar0, &uLocal_842, 1140457472, 1144750080, 0);
	}
}

void func_202(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7)//Position - 0xAC78
{
	float fVar0;
	float fVar1;
	
	if ((((func_137(PLAYER::PLAYER_ID()) && !func_255(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 8)) && (func_254(PLAYER::PLAYER_ID()) || func_253(PLAYER::PLAYER_ID()))) || func_121(vParam1))
	{
		return;
	}
	Global_1674852 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam1);
	func_249(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_248(PLAYER::PLAYER_ID()) || func_246(PLAYER::PLAYER_ID()))
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
	if (fVar0 < fParam5)
	{
		if (!(func_245(PLAYER::PLAYER_ID(), 21) || func_245(PLAYER::PLAYER_ID(), 25)))
		{
			func_244(vParam1, 1, 0);
		}
		if (!*uParam4 && func_1119(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_243(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_242(iParam0));
				if (func_241(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
					}
					MISC::SET_BIT(&(Global_1674852.f_3), 0);
				}
			}
			if (func_240(iParam0))
			{
				fVar1 = func_239(iParam0);
				if (fVar1 != 1f)
				{
					func_235(fVar1);
					MISC::SET_BIT(&(Global_1674852.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_234(iParam0) && func_248(PLAYER::PLAYER_ID()))
				{
					func_232(1);
					func_231(2);
				}
			}
			func_230(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_199(PLAYER::PLAYER_ID(), 19))
			{
				func_229(19);
			}
		}
		if (*uParam4 && func_1119(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_243(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1674852.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1674852.f_3), 0);
				}
			}
			if (func_240(iParam0))
			{
				func_228();
				MISC::CLEAR_BIT(&(Global_1674852.f_3), 1);
			}
			if (iParam7 && !func_137(PLAYER::PLAYER_ID()))
			{
				if (func_227(PLAYER::PLAYER_ID()) != 152)
				{
					func_205();
				}
			}
			if (func_204(2))
			{
				func_232(0);
				func_203(2);
			}
		}
	}
}

void func_203(int iParam0)//Position - 0xAEFB
{
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

bool func_204(int iParam0)//Position - 0xAF12
{
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_43, iParam0);
}

void func_205()//Position - 0xAF29
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_24), &Global_2409324, 2);
	MISC::_COPY_MEMORY(&(Global_2405071.f_26), &Global_2409326, 19);
	func_225();
	func_208(1, 1, 0);
	func_206();
}

void func_206()//Position - 0xAF5F
{
	func_207(0, 0);
}

void func_207(int iParam0, int iParam1)//Position - 0xAF6D
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_208(bool bParam0, bool bParam1, bool bParam2)//Position - 0xAF85
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
		func_224();
	}
	if (!bParam2)
	{
		func_211(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_210(0);
	func_209();
}

void func_209()//Position - 0xB02B
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_210(bool bParam0)//Position - 0xB050
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

void func_211(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0xB070
{
	if (bParam0)
	{
		if (func_223())
		{
			func_222();
		}
		Global_2405071.f_704.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_220();
		func_215(8, 0, 0, 0, 0);
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
		func_212();
	}
}

void func_212()//Position - 0xB15B
{
	if (func_223() && !func_214())
	{
		func_222();
	}
	if (func_214())
	{
		func_213();
	}
	else
	{
		func_220();
		func_215(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_213()//Position - 0xB1A3
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_214()//Position - 0xB1EB
{
	if ((Global_2405071.f_1742 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB22A
{
	if (Global_2437549.f_1893.f_690.f_16 != func_32())
	{
		if (MISC::IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_216())
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

int func_216()//Position - 0xB2C9
{
	if (((((func_227(PLAYER::PLAYER_ID()) == 229 || func_227(PLAYER::PLAYER_ID()) == 191) || func_219()) || func_218()) || func_217(PLAYER::PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

int func_217(int iParam0)//Position - 0xB325
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

var func_218()//Position - 0xB391
{
	return Global_1574402;
}

int func_219()//Position - 0xB39D
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_220()//Position - 0xB3B2
{
	if (func_223() && !func_214())
	{
		func_222();
	}
	func_221();
	Global_2405071.f_704 = 0;
}

void func_221()//Position - 0xB3DB
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

void func_222()//Position - 0xB416
{
	if (func_214())
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

int func_223()//Position - 0xB484
{
	if ((Global_2405071.f_1743 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_224()//Position - 0xB4C3
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_225()//Position - 0xB4DC
{
	func_226();
	Global_2405071.f_2252 = 0;
}

void func_226()//Position - 0xB4F0
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

int func_227(int iParam0)//Position - 0xB51C
{
	if (func_136(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

void func_228()//Position - 0xB53F
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

void func_229(int iParam0)//Position - 0xB586
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

void func_230(int iParam0)//Position - 0xB5A3
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

void func_231(int iParam0)//Position - 0xB5C0
{
	MISC::SET_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_232(int iParam0)//Position - 0xB5D7
{
	if (func_233() && iParam0)
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

int func_233()//Position - 0xB60C
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)//Position - 0xB652
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_235(float fParam0)//Position - 0xB6A2
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_236())
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

int func_236()//Position - 0xB70E
{
	switch (func_238())
	{
		case 0:
			return func_237();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_237()//Position - 0xB741
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_238()//Position - 0xB765
{
	return Global_30736;
}

float func_239(int iParam0)//Position - 0xB770
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 243:
		case 158:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_240(int iParam0)//Position - 0xB910
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_241(int iParam0, int iParam1)//Position - 0xB9D8
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
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
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_242(int iParam0)//Position - 0xBB59
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

int func_243(int iParam0)//Position - 0xBC11
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_244(vector3 vParam0, int iParam3, int iParam4)//Position - 0xBD0F
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam3;
	Global_2405071.f_45.f_53 = iParam4;
}

bool func_245(int iParam0, int iParam1)//Position - 0xBD39
{
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

int func_246(int iParam0)//Position - 0xBD52
{
	if (func_247(iParam0))
	{
		if (func_248(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_247(int iParam0)//Position - 0xBD71
{
	if (iParam0 != func_32())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_32())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_248(int iParam0)//Position - 0xBDA6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_199(iParam0, 9);
	}
	return 0;
}

void func_249(int iParam0, float fParam1)//Position - 0xBDC4
{
	int iVar0;
	
	iVar0 = func_252(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_250();
	}
}

void func_250()//Position - 0xBDEA
{
	if (!func_251(PLAYER::PLAYER_ID()))
	{
		func_230(25);
	}
}

bool func_251(int iParam0)//Position - 0xBE04
{
	return func_199(iParam0, 25);
}

int func_252(int iParam0)//Position - 0xBE14
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_253(int iParam0)//Position - 0xBE8A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_254(int iParam0)//Position - 0xBEB0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

bool func_255(int iParam0)//Position - 0xBED6
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 2);
}

void func_256(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)//Position - 0xBEEE
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_400(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_398() || iParam2 == 27)
	{
		if (func_344(iParam1, iParam2, uParam3, Global_1574182, 0, func_396(), iParam7))
		{
			func_343(1);
			if ((!func_341() && !func_339()) || MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
			{
				if (func_338())
				{
					func_333();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_332(1);
						Global_1574182 = 0;
						iVar54 = -1;
						if (Global_1574403 != 1)
						{
							func_331(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_1119(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_146(iVar35, 0))
									{
										if ((func_330(iVar35) || Global_2424073[iVar35 /*421*/].f_236 != -1) || func_115(iVar35))
										{
											iVar44 = iVar35;
											if (func_247(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_327(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_324(PLAYER::PLAYER_ID(), 0) && func_227(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_323())
							{
								if (func_1119(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_32();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_322(iVar35) && func_318(iVar35, iParam2)) && func_1119(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
								Var38 = { func_313(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_88(iVar35) };
								iVar37 = func_307(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574182++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_323())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_302(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_301(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_295(iVar35, 0);
								if (bVar34)
								{
									if (func_294(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_293(iParam5))
								{
									func_292(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_292(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_1119(iVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_32();
							}
							if (func_322(iVar35))
							{
								if (func_1119(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
									Var38 = { func_313(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_88(iVar35) };
									iVar37 = func_307(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574182++;
									iVar51 = func_295(iVar35, 1);
									if (bVar34)
									{
										if (func_294(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_270(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_267(uParam3, iParam1);
						}
						func_266(&(uParam3->f_21));
						func_265();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_264(uParam3, iParam1);
							func_263(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_264(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_259(uParam3))
						{
							Global_1574403 = 1;
						}
						func_257(uParam3);
						if (Global_1574403 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574403 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_265();
			func_332(0);
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

void func_257(var uParam0)//Position - 0xC53F
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_266(&(uParam0->f_21));
		func_258(0);
	}
}

void func_258(bool bParam0)//Position - 0xC57B
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

int func_259(var uParam0)//Position - 0xC5C1
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_32() && func_1119(iVar15, 0, 1))
	{
		Var2 = { func_88(iVar15) };
		iVar1 = func_262(uParam0, uParam0->f_37);
		if (func_261(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_260(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_260(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_260(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_260(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_260(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_260(uParam0, iVar0, 0);
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
	return iVar16;
}

void func_260(var uParam0, int iParam1, int iParam2)//Position - 0xC6EE
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_261(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xC700
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_262(var uParam0, int iParam1)//Position - 0xC710
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_263(int iParam0, bool bParam1, int iParam2)//Position - 0xC720
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_264(var uParam0, int iParam1)//Position - 0xC756
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_265()//Position - 0xC78D
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_266(var uParam0)//Position - 0xC7A2
{
	uParam0->f_1 = 0;
}

void func_267(var uParam0, int iParam1)//Position - 0xC7AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_32())
		{
			if (func_1119(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_269(uParam0->f_38[iVar0 /*2*/], 0);
					func_268(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_268(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC822
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

int func_269(int iParam0, bool bParam1)//Position - 0xC85E
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

void func_270(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0xC892
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_291() && iParam4 < func_290())
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
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_289("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_289(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_289("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_289("");
			if (uParam3->f_108 == 6)
			{
				func_289("");
			}
			else
			{
				func_289(&sParam5);
			}
			func_275(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_274(uParam3))
			{
				func_273("DPAD_FRIEND");
			}
			else if (func_272(uParam3))
			{
				func_273("DPAD_FRIEND");
			}
			else if (func_271(uParam3))
			{
				func_273("DPAD_CREW");
			}
			else
			{
				func_273("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_271(var uParam0)//Position - 0xC9BB
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_272(var uParam0)//Position - 0xC9CC
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_273(char* sParam0)//Position - 0xC9DD
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_274(var uParam0)//Position - 0xC9EF
{
	if (func_272(uParam0) && func_271(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_275(var uParam0, int iParam1)//Position - 0xCA10
{
	if (func_288(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_280(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_276())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_276()//Position - 0xCA91
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_278() || func_277())
		{
			return 1;
		}
	}
	return 0;
}

var func_277()//Position - 0xCAB6
{
	return Global_2448961.f_15;
}

int func_278()//Position - 0xCAC4
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_277();
	}
	return func_279(Global_4456448.f_154360);
}

int func_279(int iParam0)//Position - 0xCAE8
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

int func_280(int iParam0)//Position - 0xCB22
{
	if ((func_1119(iParam0, 0, 1) && func_284()) && func_281(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_281(int iParam0, bool bParam1)//Position - 0xCB4F
{
	return func_282(iParam0, bParam1, 1);
}

int func_282(int iParam0, bool bParam1, int iParam2)//Position - 0xCB60
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_283(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_32() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_283(int iParam0, int iParam1)//Position - 0xCBBC
{
	if (iParam0 != func_32())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_32())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_284()//Position - 0xCC0B
{
	if (func_137(PLAYER::PLAYER_ID()) || func_287())
	{
		if (!func_285(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_285(int iParam0, int iParam1)//Position - 0xCC3B
{
	if (func_286(iParam0) == iParam1)
	{
		return func_254(iParam0);
	}
	return 0;
}

int func_286(int iParam0)//Position - 0xCC58
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_287()//Position - 0xCC77
{
	switch (func_227(PLAYER::PLAYER_ID()))
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

int func_288(int iParam0)//Position - 0xCCB5
{
	if (func_276())
	{
		if (func_1119(iParam0, 0, 1))
		{
			return func_247(iParam0);
		}
	}
	if ((func_1119(iParam0, 0, 1) && func_284()) && func_283(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_289(char* sParam0)//Position - 0xCCFD
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_290()//Position - 0xCD0B
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

int func_291()//Position - 0xCD27
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_292(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xCD3F
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_291() && iParam3 < func_290())
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
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_289("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_273(sParam16);
				}
				else
				{
					func_289(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_289("");
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
				if (func_323())
				{
					func_289("");
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
						func_273(&(uParam2->f_104));
					}
					else
					{
						func_289("");
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
					func_289("");
				}
				if (uParam2->f_108 == 6)
				{
					func_289("");
				}
				else
				{
					func_289(&sParam4);
				}
				func_275(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					func_289("");
					func_289("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
				}
				if (func_274(uParam2))
				{
					func_273("DPAD_FRIEND");
				}
				else if (func_272(uParam2))
				{
					func_273("DPAD_FRIEND");
				}
				else if (func_271(uParam2))
				{
					func_273("DPAD_CREW");
				}
				else
				{
					func_273("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_293(int iParam0)//Position - 0xD098
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

bool func_294(int iParam0, bool bParam1)//Position - 0xD0BC
{
	if (!bParam1)
	{
		if (func_247(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_32();
}

int func_295(int iParam0, bool bParam1)//Position - 0xD0E7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_137(iParam0)) && !func_300(iParam0))
	{
		iVar0 = func_299();
	}
	iVar1 = func_298(iParam0);
	if (!iVar1 == -1)
	{
		return func_296(iVar1);
	}
	return iVar0;
}

int func_296(int iParam0)//Position - 0xD131
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_297(iParam0);
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

var func_297(int iParam0)//Position - 0xD1F4
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_298(int iParam0)//Position - 0xD20B
{
	if (!iParam0 == func_32())
	{
		if (func_294(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_87(iParam0)];
		}
	}
	return -1;
}

int func_299()//Position - 0xD23D
{
	return 21;
}

bool func_300(int iParam0)//Position - 0xD247
{
	return func_199(iParam0, 20);
}

char* func_301(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xD257
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

int func_302(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0xD3E4
{
	if (func_306(iParam3))
	{
		*fParam1 = (func_303(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_293(iParam3))
	{
		*fParam1 = (func_303(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_303(int iParam0, int iParam1)//Position - 0xD434
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
				return func_305(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_304(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_304(float fParam0)//Position - 0xD4D7
{
	return (fParam0 / 1.609344f);
}

float func_305(float fParam0)//Position - 0xD4E7
{
	return (fParam0 / 0.3048f);
}

int func_306(int iParam0)//Position - 0xD4F7
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

int func_307(int iParam0)//Position - 0xD553
{
	int iVar0;
	
	iVar0 = func_310(iParam0);
	if (iVar0 == -1)
	{
		func_308(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_308(int iParam0, bool bParam1)//Position - 0xD589
{
	if (!func_1119(iParam0, 0, 1))
	{
		return;
	}
	if (func_310(iParam0) != -1)
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
	if (func_309(iParam0))
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

int func_309(int iParam0)//Position - 0xD5F5
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

int func_310(int iParam0)//Position - 0xD627
{
	int iVar0;
	
	if (!func_1119(iParam0, 0, 1))
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
			func_311(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_311(int iParam0)//Position - 0xD6A6
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
	func_312(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_312(var uParam0)//Position - 0xD75C
{
	*uParam0 = 0;
	uParam0->f_1 = func_32();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_313(int iParam0)//Position - 0xD789
{
	char cVar0[32];
	
	if (func_1119(iParam0, 0, 1))
	{
		Global_2507671 = { func_88(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_261(Global_2507671))
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
		if (func_317(&Global_2507671))
		{
			Global_2507601 = { func_315(iParam0) };
			func_314(&Global_2507601, &cVar0);
		}
	}
	return cVar0;
}

void func_314(var uParam0, char* sParam1)//Position - 0xD80A
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_315(int iParam0)//Position - 0xD81C
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_316(iParam0))
	{
		return Global_1312905[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_88(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_316(int iParam0)//Position - 0xD858
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_317(var uParam0)//Position - 0xD86E
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

int func_318(int iParam0, int iParam1)//Position - 0xD894
{
	if (iParam1 == 26)
	{
		if ((func_255(iParam0) || func_321(iParam0)) || func_320(iParam0))
		{
			return 0;
		}
	}
	if (!func_319(iParam0))
	{
		return 0;
	}
	if ((!func_330(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_115(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_319(int iParam0)//Position - 0xD903
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 22);
}

bool func_320(int iParam0)//Position - 0xD91C
{
	if (func_255(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8);
}

int func_321(int iParam0)//Position - 0xD942
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_322(int iParam0)//Position - 0xD980
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (func_146(iParam0, 0))
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

int func_323()//Position - 0xD9C5
{
	switch (func_227(PLAYER::PLAYER_ID()))
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
	switch (func_286(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_300(PLAYER::PLAYER_ID()))
	{
		switch (func_227(PLAYER::PLAYER_ID()))
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
	if (func_285(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_324(int iParam0, int iParam1)//Position - 0xDB01
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_325(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_325(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_325(int iParam0)//Position - 0xDB67
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
	return func_326(iParam0, 0);
	return 0;
}

int func_326(int iParam0, int iParam1)//Position - 0xDBC1
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

void func_327(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDC16
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1119(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_146(iVar1, 0))
			{
				if ((func_330(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_115(iVar1))
				{
					if (func_328(iVar1, iParam1, 0))
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

int func_328(int iParam0, int iParam1, bool bParam2)//Position - 0xDCA0
{
	if (iParam1 != func_32())
	{
		if (!bParam2)
		{
			if (func_329(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_32())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_329(int iParam0, int iParam1)//Position - 0xDCEA
{
	if (iParam1 != func_32())
	{
		if (iParam0 != func_32())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_32())
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

int func_330(int iParam0)//Position - 0xDD2F
{
	if (func_1119(iParam0, 0, 1))
	{
		if (func_1119(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_227(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_331(int iParam0, int iParam1, int iParam2)//Position - 0xDD70
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_332(bool bParam0)//Position - 0xDD9E
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

void func_333()//Position - 0xDDD0
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
	{
		if (func_337())
		{
			func_334();
		}
	}
}

void func_334()//Position - 0xDDF2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_335(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_335(var uParam0, int iParam1)//Position - 0xDE3D
{
	func_336(uParam0, iParam1);
}

void func_336(var uParam0, var uParam1)//Position - 0xDE4D
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_337()//Position - 0xDE5E
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

int func_338()//Position - 0xDE74
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0) && func_337())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1) && func_337())
	{
		return 1;
	}
	return 0;
}

int func_339()//Position - 0xDEB5
{
	if (func_337())
	{
		if (func_340(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_340(int iParam0)//Position - 0xDEDC
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

int func_341()//Position - 0xDF62
{
	if (func_337())
	{
		if (func_342(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_342(int iParam0)//Position - 0xDF89
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

void func_343(int iParam0)//Position - 0xE01B
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

int func_344(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0xE049
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_395(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_394();
	iVar8 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_393())
		{
			if (func_392() > 0 && Global_1574184)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
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
		if (!func_378())
		{
			func_377(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4591, 26))
	{
		func_377(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_392() == 1)
		{
			func_376(bVar6, iParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_377(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_392() == 0 && !bParam5))
		{
			func_377(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_375();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_375();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_376(bVar6, iParam0, 0))
				{
					func_331(iParam0, 0, 0);
					sVar4 = func_373(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_371(iParam1) };
					if (bParam4)
					{
						func_368(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_361(iParam0, func_365(uParam2), func_362(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar9 = func_354(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
						{
							sVar9 = iParam6;
						}
						func_352(iParam0, sVar9, func_353(), -1);
					}
					else if (func_276())
					{
						uParam2->f_34 = Global_1574183;
						func_368(iParam0, sVar4, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_345(iParam1);
						uParam2->f_34 = Global_1574183;
						func_368(iParam0, sVar4, "", 0, iVar8, Global_1574183, 1);
					}
					else
					{
						iVar8 = func_345(iParam1);
						func_368(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574182 = uParam3;
				Global_1574181 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
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

int func_345(int iParam0)//Position - 0xE328
{
	int iVar0;
	
	iVar0 = -1;
	if (func_351())
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
			if (func_350(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_349(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_348(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_346())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_346()//Position - 0xE481
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_122();
	}
	return func_347(Global_4456448.f_154360);
}

int func_347(int iParam0)//Position - 0xE4A5
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

bool func_348(int iParam0)//Position - 0xE4DF
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_349(int iParam0)//Position - 0xE4F4
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_350(int iParam0)//Position - 0xE509
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_351()//Position - 0xE51E
{
	return Global_4456448.f_1 == 0;
}

void func_352(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xE52E
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_273(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_273("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_353()//Position - 0xE58D
{
	switch (func_227(PLAYER::PLAYER_ID()))
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

char* func_354(var uParam0)//Position - 0xE5E5
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
	switch (func_227(PLAYER::PLAYER_ID()))
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
			if (func_357())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_356(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_356(1))
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
			if (func_355(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_355(int iParam0)//Position - 0xEA11
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

bool func_356(bool bParam0)//Position - 0xEA43
{
	return func_281(PLAYER::PLAYER_ID(), bParam0);
}

bool func_357()//Position - 0xEA55
{
	return (func_360() && func_358(func_359()));
}

bool func_358(int iParam0)//Position - 0xEA6E
{
	return func_283(iParam0, 1);
}

int func_359()//Position - 0xEA7D
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35;
}

bool func_360()//Position - 0xEA94
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148;
}

void func_361(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xEAAA
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_273(sParam1);
		}
		else if (func_286(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_273("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_362(var uParam0)//Position - 0xEB31
{
	int iVar0;
	
	iVar0 = func_286(PLAYER::PLAYER_ID());
	if (func_364())
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
			switch (func_363())
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

int func_363()//Position - 0xECDC
{
	if (func_286(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

bool func_364()//Position - 0xECFF
{
	return Global_1590319;
}

char* func_365(var uParam0)//Position - 0xED0B
{
	int iVar0;
	
	iVar0 = func_286(PLAYER::PLAYER_ID());
	if (func_364())
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
			if (func_367() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_367() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_363())
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
			if (func_366() == 1)
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

int func_366()//Position - 0xEF00
{
	return Global_2531497.f_4822;
}

int func_367()//Position - 0xEF0F
{
	if (func_286(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_368(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0xEF32
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_289(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_273(sParam1);
		}
		if (func_393() && iParam6)
		{
			if (func_370())
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
			func_273(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_369(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_122())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_369(int iParam0)//Position - 0xEFF3
{
	if (func_350(iParam0) || func_349(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_370()//Position - 0xF015
{
	return Global_1574184;
}

struct<4> func_371(int iParam0)//Position - 0xF021
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_372(PLAYER::PLAYER_ID()) || func_348(PLAYER::PLAYER_ID()))
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
	if (func_276() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_372(int iParam0)//Position - 0xF0BC
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

int func_373(int iParam0, int iParam1, bool bParam2)//Position - 0xF0D1
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_276() || MISC::IS_STRING_NULL_OR_EMPTY(iParam1)))
	{
		uVar0 = func_374();
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
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1))
	{
		if (Global_1574422 == 1)
		{
			Global_1574422 = 0;
		}
		return iParam1;
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
	return iParam1;
}

char* func_374()//Position - 0xF235
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

void func_375()//Position - 0xF279
{
	Global_42316 = 1;
}

bool func_376(bool bParam0, int iParam1, bool bParam2)//Position - 0xF285
{
	if (bParam0)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_377(int iParam0, var uParam1, bool bParam2)//Position - 0xF2C5
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_265();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_266(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_378()//Position - 0xF337
{
	if (func_391())
	{
		return 0;
	}
	if (func_390())
	{
		return 0;
	}
	if (!func_388())
	{
		return 0;
	}
	if (!func_386())
	{
		return 0;
	}
	if (func_385(8, -1))
	{
		return 0;
	}
	if (func_392() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_384())
	{
		return 0;
	}
	else if (!func_47(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_383(1) || func_381(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_380() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_91(PLAYER::PLAYER_ID()) && !func_380())
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
	if (func_204(0))
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
	if (func_379(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_379(int iParam0)//Position - 0xF502
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_380()//Position - 0xF52A
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695602, 0));
}

int func_381(bool bParam0)//Position - 0xF54C
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_382(PLAYER::PLAYER_PED_ID()))
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

int func_382(int iParam0)//Position - 0xF637
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

bool func_383(bool bParam0)//Position - 0xF694
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_384()//Position - 0xF6BD
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_196 != 0;
}

bool func_385(int iParam0, int iParam1)//Position - 0xF6D4
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

int func_386()//Position - 0xF70F
{
	if (func_387() == 0)
	{
		return 1;
	}
	return 0;
}

int func_387()//Position - 0xF724
{
	return Global_1312467.f_18;
}

int func_388()//Position - 0xF732
{
	if (func_389())
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

bool func_389()//Position - 0xF771
{
	return Global_1312439;
}

bool func_390()//Position - 0xF77D
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 5;
}

bool func_391()//Position - 0xF792
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_392()//Position - 0xF7A7
{
	return Global_1373500.f_68;
}

int func_393()//Position - 0xF7B5
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_394()//Position - 0xF7CB
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_395(int iParam0)//Position - 0xF7EF
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

int func_396()//Position - 0xF81B
{
	if (func_397(PLAYER::PLAYER_ID()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_397(int iParam0)//Position - 0xF836
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_146(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_398()//Position - 0xF859
{
	if (func_396())
	{
		return 1;
	}
	if (func_320(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_364())
	{
		return 1;
	}
	if (func_137(PLAYER::PLAYER_ID()))
	{
		switch (func_286(PLAYER::PLAYER_ID()))
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
				if (!func_399(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_399(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_399(PLAYER::PLAYER_ID()))
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

bool func_399(int iParam0)//Position - 0xF934
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_400(int iParam0)//Position - 0xF94C
{
	if (iParam0 == 27)
	{
		if ((func_137(PLAYER::PLAYER_ID()) && !func_300(PLAYER::PLAYER_ID())) && !func_285(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_136(PLAYER::PLAYER_ID(), 0) && func_300(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_401(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_401(int iParam0)//Position - 0xF9BD
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_137(iParam0) && !func_255(iParam0)) && !MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_300(iParam0);
	uVar3 = func_409();
	uVar4 = func_403();
	if ((bVar1 && (func_254(iParam0) || func_253(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_248(iParam0)) && !func_402(iParam0)))
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

bool func_402(int iParam0)//Position - 0xFA7B
{
	return func_199(iParam0, 19);
}

int func_403()//Position - 0xFA8B
{
	if ((func_199(PLAYER::PLAYER_ID(), 21) || func_199(PLAYER::PLAYER_ID(), 22)) || func_406())
	{
		return 1;
	}
	if (func_404())
	{
		func_230(22);
		return 1;
	}
	return 0;
}

int func_404()//Position - 0xFAD0
{
	if (func_136(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_409() && !func_405()) || func_245(PLAYER::PLAYER_ID(), 21)) || func_245(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_229(27);
		}
	}
	return 0;
}

bool func_405()//Position - 0xFB23
{
	return Global_1312417.f_1;
}

bool func_406()//Position - 0xFB31
{
	return func_407(356, -1);
}

int func_407(int iParam0, int iParam1)//Position - 0xFB41
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_408(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_408(int iParam0)//Position - 0xFB6D
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_148();
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

bool func_409()//Position - 0xFBA1
{
	return Global_1312417;
}

bool func_410()//Position - 0xFBAD
{
	return MISC::IS_BIT_SET(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1);
}

void func_411()//Position - 0xFBC5
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
				func_412(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_412(int iParam0)//Position - 0xFC02
{
	struct<4> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if (Local_208.f_34 > -1)
		{
			if (func_410())
			{
				if (!func_403())
				{
					if (!MISC::IS_BIT_SET(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 5))
					{
						if (!MISC::IS_BIT_SET(Local_208.f_1, 4))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0))
							{
								if (Var0.f_3)
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0))
									{
										iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
										if (PED::IS_PED_A_PLAYER(iVar12))
										{
											iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
											if (iVar13 == PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar11))
														{
															iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
															if (iVar14 == PLAYER::PLAYER_ID())
															{
																MISC::SET_BIT(&(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 5);
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
			}
		}
	}
	if (func_410())
	{
		if (!func_199(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(iVar12))
					{
						iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar11))
								{
									iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
									if (iVar14 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar13))
										{
											if (func_294(iVar13, 1))
											{
												if (Local_208.f_33 > -1)
												{
													iVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_208.f_33));
													if (func_328(iVar13, iVar15, 1))
													{
														func_413(0);
														func_250();
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
	}
}

void func_413(int iParam0)//Position - 0xFD91
{
	if (!func_300(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_401(PLAYER::PLAYER_ID()) != 0)
		{
			func_230(20);
			func_414(func_416());
			if (func_137(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 8);
				}
			}
		}
	}
}

void func_414(int iParam0)//Position - 0xFE00
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_415() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
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

int func_415()//Position - 0xFE63
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_416()//Position - 0xFE70
{
	int iVar0;
	
	iVar0 = func_227(PLAYER::PLAYER_ID());
	if (func_420(iVar0) == 0)
	{
		return -1;
	}
	if (func_419(iVar0))
	{
		return 65;
	}
	if (func_418(iVar0))
	{
		return 66;
	}
	if (func_417(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_417(int iParam0)//Position - 0xFEBC
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_418(int iParam0)//Position - 0xFEF4
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_419(int iParam0)//Position - 0xFF4A
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_420(int iParam0)//Position - 0xFF76
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_421()//Position - 0x101B9
{
	switch (Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2)
	{
		case 0:
			func_847();
			func_422();
			if (Local_208.f_32 == 2)
			{
				Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 2;
			}
			else if (Local_208.f_32 == 3)
			{
				Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_422();
			if (Local_208.f_32 == 3)
			{
				Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_1022();
			break;
	}
}

void func_422()//Position - 0x1023B
{
	struct<20> Var0;
	int iVar22;
	int iVar23;
	int iVar24;
	char* sVar25;
	int iVar26;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar22 = func_32();
	iVar23 = func_32();
	iVar24 = func_32();
	if (!MISC::IS_BIT_SET(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_461, 9))
		{
			if (MISC::IS_BIT_SET(Local_208.f_1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_208.f_33 || func_1010() == Local_208.f_33)
				{
					if (func_401(PLAYER::PLAYER_ID()) >= 2)
					{
						sVar25 = func_846();
						iVar26 = func_845(PLAYER::PLAYER_ID());
						func_843(87, "GB_WINNER", "BIGM_SGHTYD", sVar25, iVar26, 0, -1, -1, -1, 2, -1);
					}
					if (!MISC::IS_BIT_SET(iLocal_461, 6))
					{
						func_733(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_461, 6);
					}
					func_544(142, 1, &Var0, 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				}
				else if (func_410())
				{
					if (func_294(PLAYER::PLAYER_ID(), 1))
					{
						if (func_401(PLAYER::PLAYER_ID()) >= 2)
						{
							sVar25 = func_538(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
							iVar26 = func_845(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
							func_843(88, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar25, iVar26, 0, -1, -1, -1, 2, -1);
						}
						if (!MISC::IS_BIT_SET(iLocal_461, 6))
						{
							func_733(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_461, 6);
						}
						func_544(142, 0, &Var0, 0);
					}
					else
					{
						if (func_401(PLAYER::PLAYER_ID()) >= 2)
						{
							sVar25 = func_538(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
							iVar26 = func_845(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
							func_843(88, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar25, iVar26, 0, -1, -1, -1, 2, -1);
						}
						if (!MISC::IS_BIT_SET(iLocal_461, 6))
						{
							func_733(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_461, 6);
						}
						func_544(142, 0, &Var0, 0);
					}
				}
				MISC::SET_BIT(&iLocal_461, 9);
			}
			else if (MISC::IS_BIT_SET(Local_208.f_1, 3))
			{
				func_537(88, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2, 1, 0);
				if (!MISC::IS_BIT_SET(iLocal_461, 6))
				{
					func_733(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
					MISC::SET_BIT(&iLocal_461, 6);
				}
				func_544(142, 0, &Var0, 0);
				MISC::SET_BIT(&iLocal_461, 9);
			}
			else if (MISC::IS_BIT_SET(Local_208.f_1, 4))
			{
				if (Local_208.f_35 > -1)
				{
					iVar23 = PLAYER::INT_TO_PLAYERINDEX(Local_208.f_35);
				}
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_208.f_33)
				{
					if (func_401(PLAYER::PLAYER_ID()) >= 2)
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar23))
						{
							if (func_294(iVar23, 1))
							{
								sVar25 = func_538(iVar23);
								iVar26 = func_845(iVar23);
							}
							else
							{
								sVar25 = PLAYER::GET_PLAYER_NAME(iVar23);
								iVar26 = 1;
							}
							func_843(88, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar25, iVar26, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_843(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar25, iVar26, 0, -1, -1, -1, 2, -1);
						}
					}
					func_544(142, 0, &Var0, 0);
					if (!MISC::IS_BIT_SET(iLocal_461, 6))
					{
						func_733(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_461, 6);
					}
				}
				else if (func_1010() == Local_208.f_33)
				{
					iVar22 = PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34);
					if (iVar22 != func_32())
					{
						if (func_401(PLAYER::PLAYER_ID()) >= 2)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar23))
							{
								if (func_294(iVar23, 1))
								{
									sVar25 = func_538(iVar23);
									iVar26 = func_845(iVar23);
								}
								else
								{
									sVar25 = PLAYER::GET_PLAYER_NAME(iVar23);
									iVar26 = 1;
								}
								func_843(88, "GB_WORK_OVER", "BIGM_SGHTGK", sVar25, iVar26, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_843(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar25, iVar26, 0, -1, -1, -1, 2, -1);
							}
						}
						func_544(142, 0, &Var0, 0);
						if (!MISC::IS_BIT_SET(iLocal_461, 6))
						{
							func_733(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_461, 6);
						}
					}
				}
				else if (func_410())
				{
					iVar23 = PLAYER::INT_TO_PLAYERINDEX(Local_208.f_35);
					if (iVar23 != func_32())
					{
						if (iVar23 == PLAYER::PLAYER_ID())
						{
							if (func_401(PLAYER::PLAYER_ID()) >= 2)
							{
								if (func_536(1))
								{
									func_537(87, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2, 1, 0);
								}
								else
								{
									func_537(87, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2, 1, 0);
								}
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							if (!MISC::IS_BIT_SET(iLocal_461, 6))
							{
								func_733(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_461, 6);
							}
							func_544(142, 1, &Var0, 0);
						}
						else if (func_536(1))
						{
							iVar24 = func_535();
							if (func_328(iVar23, iVar24, 1))
							{
								if (func_401(PLAYER::PLAYER_ID()) >= 2)
								{
									func_499(87, iVar23, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2, 0);
								}
								if (!MISC::IS_BIT_SET(iLocal_461, 6))
								{
									func_733(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
									MISC::SET_BIT(&iLocal_461, 6);
								}
								func_544(142, 0, &Var0, 0);
							}
							else
							{
								if (func_401(PLAYER::PLAYER_ID()) >= 2)
								{
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar23))
									{
										if (func_294(iVar23, 1))
										{
											sVar25 = func_538(iVar23);
											iVar26 = func_845(iVar23);
										}
										else
										{
											sVar25 = PLAYER::GET_PLAYER_NAME(iVar23);
											iVar26 = 1;
										}
										func_843(88, "GB_WORK_OVER", "BIGM_SGHTWK", sVar25, iVar26, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_537(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2, 1, 0);
									}
								}
								if (!MISC::IS_BIT_SET(iLocal_461, 6))
								{
									func_733(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
									MISC::SET_BIT(&iLocal_461, 6);
								}
								func_544(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_401(PLAYER::PLAYER_ID()) >= 2)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar23))
								{
									if (func_294(iVar23, 1))
									{
										sVar25 = func_538(iVar23);
										iVar26 = func_845(iVar23);
									}
									else
									{
										sVar25 = PLAYER::GET_PLAYER_NAME(iVar23);
										iVar26 = 1;
									}
									func_843(88, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar25, iVar26, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_537(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2, 1, 0);
								}
							}
							if (!MISC::IS_BIT_SET(iLocal_461, 6))
							{
								func_733(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_461, 6);
							}
							func_544(142, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&iLocal_461, 9);
			}
			else if (MISC::IS_BIT_SET(Local_208.f_1, 5))
			{
				if (func_456())
				{
					if (func_1009())
					{
						if (func_401(PLAYER::PLAYER_ID()) >= 2)
						{
						}
					}
					else if (func_401(PLAYER::PLAYER_ID()) >= 2)
					{
						func_537(88, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_461, 6))
				{
					func_733(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
					MISC::SET_BIT(&iLocal_461, 6);
				}
				func_544(159, 0, &Var0, 0);
				MISC::SET_BIT(&iLocal_461, 9);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_461, 9))
		{
			func_449();
			if (!MISC::IS_BIT_SET(iLocal_462, 8))
			{
				MISC::SET_BIT(&iLocal_462, 8);
			}
			if (!MISC::IS_BIT_SET(iLocal_461, 10))
			{
				if (Local_208.f_34 != -1)
				{
					if (MISC::IS_BIT_SET(iLocal_461, 5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34)))
						{
							func_447(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 432, 0, 0);
							func_446(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 1, 0, 0);
							func_445(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 0, 0, 0);
							func_444(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 0);
							func_441(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), Global_262145.f_12355, 0, 0);
							MISC::SET_BIT(&iLocal_461, 10);
						}
					}
				}
			}
			if (func_423(&uLocal_835, 1, 0))
			{
				MISC::SET_BIT(&(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 4);
			}
		}
	}
}

int func_423(var uParam0, bool bParam1, int iParam2)//Position - 0x109B0
{
	bool bVar0;
	
	func_230(29);
	if ((*uParam0 > 0 && !func_337()) && func_401(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_439())
		{
			func_438();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1674852.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2531497.f_4588), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_437(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
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
				func_430(iParam2);
				func_437(uParam0, 2);
			}
			break;
		
		case 2:
			func_430(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_424(func_425(0)))
				{
					HUD::CLEAR_HELP(1);
				}
				func_437(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2531497.f_4588), 1);
				MISC::CLEAR_BIT(&(Global_1674852.f_3), 2);
				func_437(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2531497.f_4588), 1);
			MISC::CLEAR_BIT(&(Global_1674852.f_3), 2);
			return 1;
	}
	return 0;
}

int func_424(char* sParam0)//Position - 0x10B2A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_425(int iParam0)//Position - 0x10B3D
{
	if (((func_428(PLAYER::PLAYER_ID()) || func_427(PLAYER::PLAYER_ID())) || func_357()) || iParam0)
	{
		if (func_427(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_325(func_426()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_426()//Position - 0x10B9F
{
	return Global_1651198;
}

bool func_427(int iParam0)//Position - 0x10BAB
{
	return func_326(func_227(iParam0), 0);
}

bool func_428(int iParam0)//Position - 0x10BBE
{
	return func_429(func_227(iParam0));
}

int func_429(int iParam0)//Position - 0x10BD0
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148 && func_283(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_430(int iParam0)//Position - 0x10CB2
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2531497.f_795, 2)) && func_1119(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73784) && !Global_58652) && !CAM::IS_SCREEN_FADED_OUT()) && !func_199(PLAYER::PLAYER_ID(), 22)) && func_401(PLAYER::PLAYER_ID()) != 0) && !func_435(func_436())) && !func_428(PLAYER::PLAYER_ID())) && !func_434(func_227(PLAYER::PLAYER_ID()))) && !func_433(func_227(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2531497.f_4588), 1);
			func_432(func_425(iParam0), -1);
			func_431(1);
			MISC::CLEAR_BIT(&(Global_2531497.f_4588), 0);
		}
	}
}

void func_431(int iParam0)//Position - 0x10D96
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_356(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_337())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_432(char[4] cParam0, int iParam1)//Position - 0x10DCD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_433(int iParam0)//Position - 0x10DE4
{
	switch (iParam0)
	{
		case 236:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_434(int iParam0)//Position - 0x10E3A
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_435(int iParam0)//Position - 0x10E8A
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_436()//Position - 0x10EB0
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO_HEIST"))
	{
		return 158;
	}
	return 0;
}

void func_437(var uParam0, int iParam1)//Position - 0x11465
{
	*uParam0 = iParam1;
}

void func_438()//Position - 0x11472
{
	Global_2460541 = 1;
}

int func_439()//Position - 0x1147F
{
	if (((((((func_227(PLAYER::PLAYER_ID()) == 170 || func_227(PLAYER::PLAYER_ID()) == 219) || func_227(PLAYER::PLAYER_ID()) == 221) || func_227(PLAYER::PLAYER_ID()) == 220) || func_227(PLAYER::PLAYER_ID()) == 216) || func_227(PLAYER::PLAYER_ID()) == 215) || func_227(PLAYER::PLAYER_ID()) == 214) || func_227(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_440(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_440(int iParam0)//Position - 0x11520
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

void func_441(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x11566
{
	var uVar0;
	
	if (func_443(iParam0))
	{
		return;
	}
	if (func_442(&(Global_2416074.f_751[iParam0]), &(Global_2416074.f_1114[iParam0]), &(Global_2416074.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_553[iParam0] = uParam1;
		}
	}
}

int func_442(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x115B8
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

int func_443(int iParam0)//Position - 0x1167D
{
	if (iParam0 == func_32())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_236())
	{
		return 1;
	}
	return 0;
}

void func_444(int iParam0, bool bParam1)//Position - 0x116A6
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
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416074[iParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416074[iParam0], true);
		}
	}
}

void func_445(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x11701
{
	var uVar0;
	
	if (func_443(iParam0))
	{
		return;
	}
	if (func_442(&(Global_2416074.f_817[iParam0]), &(Global_2416074.f_1180[iParam0]), &(Global_2416074.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_444(iParam0, bParam2);
	}
}

void func_446(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x11749
{
	var uVar0;
	
	if (func_443(iParam0))
	{
		return;
	}
	if (func_442(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = iParam1;
		}
	}
}

void func_447(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1179B
{
	bool bVar0;
	
	if (func_443(iParam0))
	{
		return;
	}
	if (func_442(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_448();
		}
	}
}

void func_448()//Position - 0x117F6
{
	Global_2416074.f_1515 = 1;
}

void func_449()//Position - 0x11806
{
	if (!func_455())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_450();
}

void func_450()//Position - 0x11833
{
	func_452();
	func_451(0);
}

void func_451(bool bParam0)//Position - 0x11844
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

void func_452()//Position - 0x118D6
{
	if (!func_454())
	{
	}
	if (func_455())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_453();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_453()//Position - 0x118FF
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

int func_454()//Position - 0x11B71
{
	if (!func_455())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_453();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_455()//Position - 0x11B97
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_456()//Position - 0x11BAD
{
	if (!func_457(1, 1, 1, 0))
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	return 1;
}

int func_457(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x11BD1
{
	if (func_498(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_245(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_245(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_319(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_116(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_497())
	{
		return 0;
	}
	if (func_390())
	{
		return 0;
	}
	if (func_496())
	{
		return 0;
	}
	if (func_384())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_48(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_386())
	{
		return 0;
	}
	if (func_245(PLAYER::PLAYER_ID(), 0) || func_245(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_245(PLAYER::PLAYER_ID(), 12) || func_245(PLAYER::PLAYER_ID(), 14)) || func_245(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_489(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_465())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_464())
		{
			return 0;
		}
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_135(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_463())
	{
		return 0;
	}
	if (func_462(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_461(PLAYER::PLAYER_ID()) && func_460(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_459())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (func_458(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_217(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_458(int iParam0)//Position - 0x11DC5
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_459()//Position - 0x11DF9
{
	return Global_1676879.f_4090 != -1;
}

int func_460(int iParam0)//Position - 0x11E0A
{
	if (iParam0 != func_32() && func_1119(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_461(int iParam0)//Position - 0x11E3B
{
	if (iParam0 != func_32() && func_1119(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_462(int iParam0)//Position - 0x11E6F
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

int func_463()//Position - 0x11EAE
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_464()//Position - 0x11EC6
{
	return Global_98721.f_346 > 0;
}

int func_465()//Position - 0x11ED7
{
	int iVar0;
	
	iVar0 = func_227(PLAYER::PLAYER_ID());
	if (((func_488(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_26) || func_487(PLAYER::PLAYER_ID())) || func_486(PLAYER::PLAYER_ID())) || func_481(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_479(PLAYER::PLAYER_ID()))
	{
		if (func_418(iVar0) || func_478(iVar0))
		{
			return 1;
		}
	}
	if (func_440(PLAYER::PLAYER_ID()))
	{
		if (func_478(iVar0))
		{
			return 1;
		}
	}
	if (func_477(PLAYER::PLAYER_ID()))
	{
		if (func_476(iVar0))
		{
			return 1;
		}
	}
	if (func_475(PLAYER::PLAYER_ID()))
	{
		if (func_474(iVar0))
		{
			return 1;
		}
	}
	if (func_473(PLAYER::PLAYER_ID()))
	{
		if (func_472(iVar0))
		{
			return 1;
		}
	}
	if (func_471(PLAYER::PLAYER_ID()))
	{
		if (func_470(iVar0))
		{
			return 1;
		}
	}
	if (func_30(PLAYER::PLAYER_ID(), 0))
	{
		if (func_417(iVar0))
		{
			if (func_468(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_467(PLAYER::PLAYER_ID()))
	{
		if (func_466(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_466(int iParam0)//Position - 0x12030
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_467(int iParam0)//Position - 0x1204A
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)//Position - 0x12091
{
	if (func_469(iParam0) != func_32())
	{
		return func_469(iParam0) == func_87(iParam0);
	}
	return 0;
}

int func_469(int iParam0)//Position - 0x120B7
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_470(int iParam0)//Position - 0x120CC
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x120F8
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_472(int iParam0)//Position - 0x1213F
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x12159
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_474(int iParam0)//Position - 0x121A0
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_475(int iParam0)//Position - 0x121C0
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_476(int iParam0)//Position - 0x12206
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_477(int iParam0)//Position - 0x1222C
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_478(int iParam0)//Position - 0x12272
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_479(int iParam0)//Position - 0x12298
{
	if (func_480(Global_1590446[iParam0 /*871*/].f_273.f_26, -1))
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0, int iParam1)//Position - 0x122BB
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

int func_481(int iParam0)//Position - 0x12398
{
	if (func_482(Global_1590446[iParam0 /*871*/].f_273.f_26, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_482(int iParam0, bool bParam1, bool bParam2)//Position - 0x123BC
{
	if (bParam2)
	{
		return func_483(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_483(PLAYER::PLAYER_ID(), 0))
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

bool func_483(int iParam0, bool bParam1)//Position - 0x12497
{
	if (Global_1590284 != func_32())
	{
		if (!func_485(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590284)
			{
				if (MISC::IS_BIT_SET(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_484(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_484(int iParam0)//Position - 0x12503
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_485(int iParam0)//Position - 0x12529
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_486(int iParam0)//Position - 0x12555
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_487(int iParam0)//Position - 0x1259B
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_488(int iParam0)//Position - 0x125E1
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

int func_489(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)//Position - 0x12610
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
		if (func_487(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_440(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_486(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_477(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_475(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_473(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_495(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_471(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_494(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_30(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_493(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_467(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_492(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_491(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_490(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_490(int iParam0)//Position - 0x1276F
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_491(int iParam0)//Position - 0x127B6
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_492(int iParam0)//Position - 0x127FD
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x12844
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x1288B
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_495(int iParam0)//Position - 0x128D2
{
	if (iParam0 != func_32())
	{
		if (func_1119(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_32())
			{
				return func_31(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_496()//Position - 0x12932
{
	return Global_1312873;
}

bool func_497()//Position - 0x1293E
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 0);
}

bool func_498(int iParam0, int iParam1)//Position - 0x1295A
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

int func_499(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x12975
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
	func_534(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_335(&(Var0.f_69), iParam8);
	}
	return func_500(&Var0);
}

int func_500(var uParam0)//Position - 0x129F6
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_511(uParam0, uParam0->f_17);
	func_510(uParam0);
	if (func_122())
	{
		func_510(uParam0);
	}
	if (func_509(uParam0->f_1))
	{
		func_502();
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
				func_502();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_335(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_501(uParam0->f_69, 128))
			{
				if (func_340(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_335(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_501(var uParam0, int iParam1)//Position - 0x12BC8
{
	return (uParam0 && iParam1) != 0;
}

void func_502()//Position - 0x12BD7
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
	func_503();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_503()//Position - 0x12C0A
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_507(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_504(&(Global_2437549.f_3032.f_1));
}

void func_504(var uParam0)//Position - 0x12C4B
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_506(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_505(0);
}

void func_505(int iParam0)//Position - 0x12CF2
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_506(bool bParam0)//Position - 0x12D06
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_507(var uParam0)//Position - 0x12D31
{
	func_508(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_508(var uParam0)//Position - 0x12D5B
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

int func_509(int iParam0)//Position - 0x12DDA
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_510(var uParam0)//Position - 0x12EE7
{
	if (func_342(uParam0->f_1))
	{
		uParam0->f_72 = func_299();
	}
}

void func_511(var uParam0, int iParam1)//Position - 0x12F02
{
	if (func_342(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_32() || !func_1119(iParam1, 0, 1))
	{
		return;
	}
	if (func_340(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_512(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_512(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x12F59
{
	int iVar0;
	int iVar1;
	
	if (func_91(iParam0) && !bParam4)
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
	if (((func_91(PLAYER::PLAYER_ID()) || (func_533() && func_532())) && !MISC::IS_BIT_SET(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_531();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1119(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_529(iParam1, iParam0, 0);
							}
							else
							{
								return func_524(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_524(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_529(iParam1, iParam0, 0);
				}
				else
				{
					return func_513(0, -1, 0);
				}
			}
			else
			{
				return func_513(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_529(iParam1, iParam0, 0);
		}
		else
		{
			return func_524(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_524(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_513(bool bParam0, int iParam1, bool bParam2)//Position - 0x13139
{
	return func_514(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_514(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1314F
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_523() || (func_522() && func_520())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_519(iParam2, iVar0);
		}
		else
		{
			return func_519(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_90(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_518(1);
				}
				else
				{
					return func_518(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_515(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_515(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_518(1);
	}
	return func_518(0);
}

int func_515(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x13256
{
	int iVar0;
	
	iVar0 = func_517(iParam0, iParam1, iParam3);
	if (func_516(Global_4456448.f_154360, 1))
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

int func_516(int iParam0, bool bParam1)//Position - 0x1336E
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

int func_517(int iParam0, int iParam1, int iParam2)//Position - 0x133BF
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
			if (!func_90(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_518(bool bParam0)//Position - 0x13406
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_519(int iParam0, int iParam1)//Position - 0x1341D
{
	if (iParam0 == -1)
	{
		iParam0 = func_517(iParam1, iParam0, 4);
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

bool func_520()//Position - 0x1346B
{
	if (func_521())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_521()//Position - 0x1348D
{
	return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_522()//Position - 0x134A5
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_523()//Position - 0x134F2
{
	if (func_521() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_524(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1350F
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
			if (func_526())
			{
				iVar3 = func_298(iParam0);
				if (!iVar3 == -1)
				{
					return func_296(iVar3);
				}
			}
			if ((func_129(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_90(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_518(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_525(1);
			}
			else
			{
				return func_514(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_518(1);
			}
			else
			{
				return func_514(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_298(iParam0);
	if (!iVar4 == -1)
	{
		return func_296(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_525(bool bParam0)//Position - 0x136B2
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_526()//Position - 0x136C9
{
	if (((func_277() || func_528()) || func_122()) || func_527())
	{
		return 1;
	}
	return 0;
}

bool func_527()//Position - 0x136FB
{
	return Global_2448961.f_19;
}

var func_528()//Position - 0x13709
{
	return Global_2448961.f_16;
}

int func_529(int iParam0, int iParam1, bool bParam2)//Position - 0x13717
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_526())
	{
		iVar2 = func_298(iParam1);
		if (!iVar2 == -1)
		{
			return func_296(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_32())
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
			iVar0 = func_514(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_530(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_90(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_525(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_530(int iParam0)//Position - 0x138A4
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

var func_531()//Position - 0x13979
{
	return Global_2359302.f_2;
}

bool func_532()//Position - 0x13987
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_533()//Position - 0x13998
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

void func_534(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x139B5
{
	uParam1->f_17 = func_32();
	uParam1->f_18 = func_32();
	uParam1->f_19 = func_32();
	uParam1->f_20 = func_32();
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

int func_535()//Position - 0x13A33
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11;
}

bool func_536(bool bParam0)//Position - 0x13A48
{
	return func_294(PLAYER::PLAYER_ID(), bParam0);
}

int func_537(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x13A5A
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
	func_534(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_335(&(Var0.f_69), iParam7);
	}
	return func_500(&Var0);
}

char* func_538(int iParam0)//Position - 0x13ADA
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = func_543(&(Global_1628955[iParam0 /*614*/].f_11.f_104));
		return iVar0;
	}
	if (Global_1628955[iParam0 /*614*/].f_11.f_120 != Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_120)
	{
		iVar0 = func_541(iParam0, 0);
		return iVar0;
	}
	if (((func_199(iParam0, 28) || func_199(PLAYER::PLAYER_ID(), 28)) || func_540(iParam0)) && !func_539(iParam0))
	{
		return func_541(iParam0, 0);
	}
	iVar1 = func_87(iParam0);
	if (iVar1 != func_32())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_541(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_32())
	{
		iVar0 = func_543(&(Global_1628955[iVar1 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar0))
		{
			return func_541(iVar1, 0);
		}
		else
		{
			return iVar0;
		}
	}
	return "";
}

int func_539(int iParam0)//Position - 0x13BE0
{
	struct<13> Var0;
	
	Var0 = { func_88(iParam0) };
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

int func_540(int iParam0)//Position - 0x13C10
{
	struct<13> Var0;
	
	if (iParam0 != func_32())
	{
		Var0 = { func_88(iParam0) };
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

char* func_541(int iParam0, bool bParam1)//Position - 0x13C69
{
	if (!bParam1)
	{
		if (func_281(iParam0, 1))
		{
			return func_542();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_542()//Position - 0x13C90
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_543(var uParam0)//Position - 0x13CA0
{
	return uParam0;
}

void func_544(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x13CAA
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_731(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_730(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_729(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_727(iParam0))
	{
		if (bParam1)
		{
			if (func_726(PLAYER::PLAYER_ID()) > 0)
			{
				func_725();
			}
			else
			{
				func_724();
			}
		}
		else
		{
			func_723();
		}
	}
	func_707(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_705(iParam0, uParam2, &iVar0, &iVar5);
	func_683(iParam0, uParam2, &iVar0, &iVar5);
	func_669(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_652(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2531497.f_4898.f_380 = iVar4;
	}
	else
	{
		Global_2531497.f_4898.f_380 = iVar5;
	}
	iVar8 = func_359();
	if (iVar8 != func_32() && iParam0 != 148)
	{
		if (func_294(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_328(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_637(&iVar0, 1);
			}
		}
	}
	func_633(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674861.f_10 = iVar1;
		func_632();
		func_588(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674861.f_9 = iVar0;
		func_565(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_564(iParam0, iVar0);
		if (func_563(iParam0))
		{
			if (func_562(iParam0) > -1)
			{
				func_561(func_562(iParam0), iVar0);
			}
		}
		Global_2461199 = iVar0;
		func_560(&Global_2459463, 0, 0);
	}
	if (func_248(PLAYER::PLAYER_ID()) || func_300(PLAYER::PLAYER_ID()))
	{
		func_551(iParam0);
	}
	if (func_429(iParam0))
	{
		Global_1674879.f_13 = iVar0;
		Global_1674879.f_14 = iVar1;
	}
	if (func_434(iParam0))
	{
		Global_1674933.f_13 = iVar0;
		Global_1674933.f_14 = iVar1;
	}
	if (func_476(iParam0))
	{
		Global_1674996.f_12 = iVar0;
		Global_1674996.f_13 = iVar1;
	}
	if (func_474(iParam0))
	{
		Global_1675040.f_12 = iVar0;
		Global_1675040.f_13 = iVar1;
	}
	if (func_472(iParam0))
	{
		Global_1675094.f_12 = iVar0;
		Global_1675094.f_13 = iVar1;
	}
	if (func_433(iParam0))
	{
		if (func_550(iParam0))
		{
			Global_1675175.f_12 = iVar0;
			Global_1675175.f_13 = iVar1;
		}
		else if (func_546(iParam0))
		{
			Global_1675228.f_12 = iVar0;
			Global_1675228.f_13 = iVar1;
		}
	}
	if (func_545(iParam0))
	{
		Global_1675312.f_12 = iVar0;
		Global_1675312.f_13 = iVar1;
	}
	if (func_466(iParam0))
	{
		Global_1675387.f_16 = iVar0;
		Global_1675387.f_17 = iVar1;
	}
}

int func_545(int iParam0)//Position - 0x1408A
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_546(int iParam0)//Position - 0x140A4
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_547(func_548(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_547(int iParam0)//Position - 0x1412D
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_548(int iParam0)//Position - 0x14165
{
	if (func_227(iParam0) == 237 || func_227(iParam0) == 250)
	{
		return func_549(iParam0);
	}
	return -1;
}

int func_549(int iParam0)//Position - 0x14192
{
	if (func_136(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_550(int iParam0)//Position - 0x141B5
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_551(int iParam0)//Position - 0x141C9
{
	if (func_559(PLAYER::PLAYER_ID()) && func_558())
	{
		if (func_418(iParam0))
		{
			func_553(9639, -1);
		}
		else if (func_419(iParam0))
		{
			func_553(9641, -1);
		}
		else if (func_326(iParam0, 1))
		{
			func_553(9642, -1);
		}
		else if (func_552(iParam0))
		{
			func_553(9643, -1);
		}
	}
}

int func_552(int iParam0)//Position - 0x14233
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

void func_553(int iParam0, int iParam1)//Position - 0x1425F
{
	int iVar0;
	
	iVar0 = func_557(iParam0, func_408(iParam1), 0);
	iVar0++;
	if (!func_556(iParam0))
	{
		func_555(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_554(iParam0, iVar0, iParam1, 1);
	}
}

void func_554(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x142A0
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_408(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_408(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_408(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_408(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_408(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_408(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_408(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_408(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_408(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_408(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_408(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_408(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_408(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_408(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_408(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_408(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_408(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_408(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_408(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_408(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_408(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_408(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_408(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_408(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_408(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_408(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_408(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_408(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_408(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_408(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_408(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_408(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_408(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_408(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_408(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_408(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_408(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_408(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_408(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_408(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_408(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_408(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_408(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_408(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_408(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_408(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_408(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_408(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_555(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x14C23
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_408(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_556(int iParam0)//Position - 0x14C53
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

int func_557(int iParam0, int iParam1, int iParam2)//Position - 0x14EB7
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_408(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_558()//Position - 0x14EE9
{
	return func_358(PLAYER::PLAYER_ID());
}

bool func_559(int iParam0)//Position - 0x14EF9
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_119, 14);
}

void func_560(var uParam0, bool bParam1, bool bParam2)//Position - 0x14F1F
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

void func_561(int iParam0, int iParam1)//Position - 0x14F5C
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

int func_562(int iParam0)//Position - 0x14FCE
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_563(int iParam0)//Position - 0x150AF
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_564(int iParam0, int iParam1)//Position - 0x15117
{
	if (func_559(PLAYER::PLAYER_ID()) && func_558())
	{
		if (func_418(iParam0) && iParam1 > 0)
		{
			func_555(9640, (func_557(9640, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_565(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1515B
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_535();
	if (iVar5 != func_32())
	{
		func_587(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_536(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_586())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_558())
			{
				if (!func_586())
				{
					Var7 = { func_585() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_584(Var7)), func_583(Var7), iParam4);
				}
			}
			else if (func_586())
			{
				func_571(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_993())
			{
				if (!func_586())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_584(func_570(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_586())
			{
				func_571(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_993())
			{
				if (!func_586())
				{
					iVar2 = func_566(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_586())
			{
				func_571(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_586())
			{
				func_571(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(iParam1);
			}
			break;
		
		case 237:
			if (func_993())
			{
				if (!func_586())
				{
					MONEY::_0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_586())
			{
				func_571(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_586())
			{
				func_571(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xA75EAC69F59E96E7(iParam1);
			}
			break;
		
		case 249:
			if (func_586())
			{
				func_571(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xC5156361F26E2212(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_586())
			{
				func_571(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x1FDA0AA679C9919B(iParam1);
			}
			break;
		
		case 243:
			if (func_586())
			{
				func_571(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_21)
			{
				if (func_586())
				{
					func_571(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_586())
			{
				func_571(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_586())
			{
				func_571(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x0CB1BE0633C024A8(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_566(int iParam0, int iParam1)//Position - 0x15601
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_569(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_567(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_567(int iParam0, int iParam1)//Position - 0x1562A
{
	return (func_568(iParam0) * iParam1);
}

int func_568(int iParam0)//Position - 0x1563B
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22294;
		
		case 0:
			return Global_262145.f_22295;
		
		case 1:
			return Global_262145.f_22296;
		
		case 2:
			return Global_262145.f_22297;
		
		case 3:
			return Global_262145.f_22298;
		
		case 4:
			return Global_262145.f_22299;
		
		case 5:
			return Global_262145.f_22300;
		
		case 6:
			return Global_262145.f_22301;
		
		case 7:
			return Global_262145.f_22302;
		
		default:
	}
	return 0;
}

float func_569(int iParam0, int iParam1)//Position - 0x156DB
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22304);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22306;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22303);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22306;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22303);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22308;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22305);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22308;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22305);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22308;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22305);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_570(int iParam0)//Position - 0x157F3
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

void func_571(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x15819
{
	int iVar0;
	
	if (!func_586())
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
				func_572(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_572(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_572(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_572(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_572(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x15E86
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_586())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_148()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_579(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_578(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_573(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_573(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16031
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_574(iParam0);
	}
}

void func_574(int iParam0)//Position - 0x16069
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_586())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_577(iParam0))
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
		func_575(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_575(var uParam0)//Position - 0x160BD
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
	func_576(&(uParam0->f_13));
	func_576(&(uParam0->f_13.f_13));
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

void func_576(var uParam0)//Position - 0x161C4
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

int func_577(int iParam0)//Position - 0x1620C
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_578(int iParam0, int iParam1)//Position - 0x16236
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x1624A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_586())
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
				func_580(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_580(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)//Position - 0x16386
{
	vector3 vVar0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -1969967074;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam84;
	iVar35 = func_582(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_581();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar35);
	}
}

void func_581()//Position - 0x16418
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_582(int iParam0)//Position - 0x16428
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_583(int iParam0)//Position - 0x16440
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_584(int iParam0)//Position - 0x16586
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_585()//Position - 0x16768
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_193;
}

int func_586()//Position - 0x16781
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_587(int iParam0, var uParam1, var uParam2)//Position - 0x16798
{
	*uParam1 = Global_1628955[iParam0 /*614*/].f_11.f_8[0];
	*uParam2 = Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_588(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x167C6
{
	return func_589(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_589(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x167E8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_599(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_595(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_590(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_590(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x16861
{
	vector3 vVar0;
	
	vVar0 = { func_593(iParam0, 1) };
	if (iParam0 == func_592(PLAYER::PLAYER_PED_ID()))
	{
		func_591(1);
	}
	func_595(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_591(int iParam0)//Position - 0x16895
{
	Global_2437549.f_1890 = iParam0;
}

int func_592(int iParam0)//Position - 0x168A6
{
	return iParam0;
}

Vector3 func_593(int iParam0, bool bParam1)//Position - 0x168B0
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_594(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_594(int iParam0)//Position - 0x16974
{
	return iParam0;
}

void func_595(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x1697E
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
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
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_598(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_597();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_596();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_596()//Position - 0x16A95
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_597()//Position - 0x16ABF
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_598(vector3 vParam0, var uParam3, var uParam4)//Position - 0x16ADA
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_599(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x16B73
{
	var uVar0;
	
	uVar0 = func_600(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_600(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x16B96
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_631(PLAYER::PLAYER_ID()) || func_630(PLAYER::PLAYER_ID()))
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
		else if (func_346() || func_629(PLAYER::PLAYER_ID()))
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
		else if (func_527())
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
	if (func_628(sParam2))
	{
	}
	if (func_627())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_625(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_624(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_622(0, &iVar1);
					break;
				
				case 3:
					func_622(1, &iVar1);
					break;
				
				case 1:
					func_620(&iVar1);
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
			func_619(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_610((func_617(PLAYER::PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_619(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_605(iVar1);
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
				func_601((func_603(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_601((func_603(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_601(int iParam0)//Position - 0x16DC3
{
	if (func_627())
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_602(joaat("mpply_globalxp"), iParam0);
	}
}

void func_602(int iParam0, int iParam1)//Position - 0x16DEE
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_603(int iParam0)//Position - 0x16E0A
{
	if (iParam0 > -1)
	{
		if (func_1119(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_604(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_604(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_604(int iParam0)//Position - 0x16E5B
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

void func_605(int iParam0)//Position - 0x16E79
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_88(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_608(func_609(&Var0));
			if (iVar13 == 0)
			{
				func_607(&Global_1384134, iParam0);
				func_606(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar13 == 1)
			{
				func_607(&Global_1384135, iParam0);
				func_606(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar13 == 2)
			{
				func_607(&Global_1384136, iParam0);
				func_606(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar13 == 3)
			{
				func_607(&Global_1384137, iParam0);
				func_606(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar13 == 4)
			{
				func_607(&Global_1384138, iParam0);
				func_606(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_606(int iParam0, int iParam1)//Position - 0x16F4D
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

void func_607(var uParam0, int iParam1)//Position - 0x17072
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_608(int iParam0)//Position - 0x17083
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

int func_609(var uParam0)//Position - 0x170E0
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

void func_610(int iParam0, int iParam1, int iParam2)//Position - 0x17103
{
	if (func_627())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_408(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_408(-1)])
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
		if (func_616(PLAYER::PLAYER_ID()))
		{
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_6 = func_614(iParam0, 1);
		}
		func_554(639, iParam0, -1, 1);
		func_555(640, func_614(iParam0, 1), -1, 1, 0);
		Global_1384279[func_408(-1)] = iParam0;
		func_611(-1109644434, 7, 0);
	}
}

void func_611(int iParam0, int iParam1, int iParam2)//Position - 0x17229
{
	int iVar0;
	
	if (func_613(iParam1, iParam2))
	{
		iVar0 = func_612();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_612()//Position - 0x17256
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

int func_613(int iParam0, var uParam1)//Position - 0x1728B
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

int func_614(int iParam0, bool bParam1)//Position - 0x17311
{
	if (bParam1)
	{
	}
	return func_615(iParam0, 0);
}

int func_615(int iParam0, int iParam1)//Position - 0x17325
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

int func_616(int iParam0)//Position - 0x173E4
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

int func_617(int iParam0, bool bParam1)//Position - 0x17409
{
	if (bParam1)
	{
	}
	return func_618(iParam0);
}

int func_618(int iParam0)//Position - 0x1741C
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1384279[func_408(-1)];
			}
			else if (func_616(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_408(-1)];
	}
	return 0;
}

void func_619(int iParam0, int iParam1, int iParam2)//Position - 0x17479
{
	int iVar0;
	
	iVar0 = func_557(iParam0, func_408(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_556(iParam0))
	{
		func_555(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_554(iParam0, iVar0, iParam2, 1);
	}
}

void func_620(int iParam0)//Position - 0x174BB
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_90(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_89(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_621(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_621(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_621(int iParam0, int iParam1)//Position - 0x175A6
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_622(bool bParam0, int iParam1)//Position - 0x175C7
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
				if (func_1119(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_89(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_1119(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_623(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_89(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_621(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_621(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_623(int iParam0, int iParam1)//Position - 0x176DF
{
	return SYSTEM::VDIST(func_83(iParam0), func_83(iParam1));
	return 0f;
}

int func_624(int iParam0)//Position - 0x176FB
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_621(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_625(int iParam0)//Position - 0x17732
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_617(PLAYER::PLAYER_ID(), 1))
		{
			iParam0 = -func_617(PLAYER::PLAYER_ID(), 1);
		}
	}
	if (func_626(8000, 0, 0) > 0)
	{
		if (func_626(8000, 0, 0) < (iParam0 + func_617(PLAYER::PLAYER_ID(), 1)))
		{
			iParam0 = (func_626(8000, 0, 0) - func_617(PLAYER::PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_626(int iParam0, bool bParam1, int iParam2)//Position - 0x1779A
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

int func_627()//Position - 0x177C2
{
	return 1;
}

int func_628(char* sParam0)//Position - 0x177CB
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

int func_629(int iParam0)//Position - 0x17804
{
	return func_472(func_227(iParam0));
}

bool func_630(int iParam0)//Position - 0x17816
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_631(int iParam0)//Position - 0x1782B
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_632()//Position - 0x17840
{
	Global_2460540 = 1;
}

void func_633(int iParam0, var uParam1, var uParam2)//Position - 0x1784D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_204(7))
	{
		return;
	}
	iVar0 = func_636(iParam0);
	iVar1 = func_635(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2531497.f_4898.f_263, NETWORK::GET_NETWORK_TIME()));
	if (func_634(iParam0) != -1)
	{
		if (iVar2 > func_634(iParam0))
		{
			iVar2 = func_634(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_634(int iParam0)//Position - 0x178F7
{
	if (func_326(iParam0, 0) || func_419(iParam0))
	{
		return Global_262145.f_18475;
	}
	if (func_418(iParam0))
	{
		return Global_262145.f_18474;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18471;
		
		case 191:
			return Global_262145.f_18473;
		
		case 190:
			return Global_262145.f_18472;
		
		case 227:
			return Global_262145.f_21031;
		
		case 226:
			return Global_262145.f_21019;
		
		case 225:
			return Global_262145.f_21039;
		
		case 230:
			return Global_262145.f_22291;
		
		case 229:
			return Global_262145.f_22195;
		
		case 233:
			return Global_262145.f_22767;
		
		case 237:
			return Global_262145.f_23930;
		
		case 238:
			return Global_262145.f_24041;
		
		case 249:
			return Global_262145.f_24057;
		
		case 243:
			return Global_262145.f_26237;
		
		default:
	}
	return -1;
}

int func_635(int iParam0)//Position - 0x17A0A
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14983;
		
		case 171:
			return Global_262145.f_15042;
		
		case 172:
			return Global_262145.f_15060;
		
		case 173:
			return Global_262145.f_15001;
		
		case 166:
			return Global_262145.f_15016;
		
		case 167:
			return Global_262145.f_15107;
		
		case 169:
			return Global_262145.f_15079;
		
		case 168:
			return Global_262145.f_15072;
		
		case 179:
			return Global_262145.f_18354;
		
		case 180:
			return Global_262145.f_18132;
		
		case 182:
			return Global_262145.f_18132;
		
		case 183:
			return Global_262145.f_18132;
		
		case 185:
			return Global_262145.f_18132;
		
		case 186:
			return Global_262145.f_18132;
		
		case 189:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18008;
		
		case 191:
			return Global_262145.f_18099;
		
		case 192:
			return Global_262145.f_17893;
		
		case 193:
			return Global_262145.f_18354;
		
		case 194:
			return Global_262145.f_18354;
		
		case 195:
			return Global_262145.f_18132;
		
		case 197:
			return Global_262145.f_18132;
		
		case 198:
			return Global_262145.f_18132;
		
		case 199:
			return Global_262145.f_18354;
		
		case 200:
			return Global_262145.f_18354;
		
		case 201:
			return Global_262145.f_18354;
		
		case 205:
			return Global_262145.f_18354;
		
		case 207:
			return Global_262145.f_18132;
		
		case 208:
			return Global_262145.f_18132;
		
		case 209:
			return Global_262145.f_18132;
		
		case 210:
			return Global_262145.f_18354;
		
		case 211:
			return Global_262145.f_18354;
		
		case 214:
			return Global_262145.f_19204;
		
		case 215:
			return Global_262145.f_19206;
		
		case 216:
			return Global_262145.f_19208;
		
		case 217:
			return Global_262145.f_19210;
		
		case 218:
			return Global_262145.f_19212;
		
		case 219:
			return Global_262145.f_19214;
		
		case 220:
			return Global_262145.f_19216;
		
		case 221:
			return Global_262145.f_19218;
		
		case 225:
			if (!func_993())
			{
				return Global_262145.f_21041;
			}
			break;
		
		case 226:
			if (!func_993())
			{
				return Global_262145.f_21021;
			}
			break;
		
		case 227:
			if (!func_993())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 229:
			if (!func_993())
			{
				return Global_262145.f_22197;
			}
			break;
		
		case 230:
			if (!func_993())
			{
				return Global_262145.f_22293;
			}
			break;
		
		case 233:
			if (!func_993())
			{
				return Global_262145.f_22766;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_993())
			{
				return Global_262145.f_23932;
			}
			break;
		
		case 238:
			if (!func_993())
			{
				return Global_262145.f_24043;
			}
			break;
		
		case 249:
			if (!func_993())
			{
				return Global_262145.f_24059;
			}
			break;
		
		case 243:
			if (!func_993())
			{
				return Global_262145.f_26240;
			}
			break;
		
		case 158:
			if (!func_993())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_636(int iParam0)//Position - 0x17ED5
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14982;
		
		case 171:
			return Global_262145.f_15041;
		
		case 172:
			return Global_262145.f_15059;
		
		case 173:
			return Global_262145.f_15000;
		
		case 166:
			return Global_262145.f_15015;
		
		case 179:
			return Global_262145.f_18353;
		
		case 180:
			return Global_262145.f_18131;
		
		case 182:
			return Global_262145.f_18131;
		
		case 183:
			return Global_262145.f_18131;
		
		case 185:
			return Global_262145.f_18131;
		
		case 186:
			return Global_262145.f_18131;
		
		case 189:
			return Global_262145.f_18353;
		
		case 193:
			return Global_262145.f_18353;
		
		case 194:
			return Global_262145.f_18353;
		
		case 195:
			return Global_262145.f_18131;
		
		case 197:
			return Global_262145.f_18131;
		
		case 198:
			return Global_262145.f_18131;
		
		case 199:
			return Global_262145.f_18353;
		
		case 200:
			return Global_262145.f_18353;
		
		case 201:
			return Global_262145.f_18353;
		
		case 205:
			return Global_262145.f_18353;
		
		case 207:
			return Global_262145.f_18131;
		
		case 208:
			return Global_262145.f_18131;
		
		case 209:
			return Global_262145.f_18131;
		
		case 210:
			return Global_262145.f_18353;
		
		case 211:
			return Global_262145.f_18353;
		
		case 190:
			if (func_356(0))
			{
				return Global_262145.f_18007;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_356(0))
			{
				return Global_262145.f_18098;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_356(0))
			{
				return Global_262145.f_17892;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19203;
		
		case 215:
			return Global_262145.f_19205;
		
		case 216:
			return Global_262145.f_19207;
		
		case 217:
			return Global_262145.f_19209;
		
		case 218:
			return Global_262145.f_19211;
		
		case 219:
			return Global_262145.f_19213;
		
		case 220:
			return Global_262145.f_19215;
		
		case 221:
			return Global_262145.f_19217;
		
		case 225:
			if (func_356(0))
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 226:
			if (func_356(0))
			{
				return Global_262145.f_21020;
			}
			break;
		
		case 227:
			if (func_356(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 229:
			if (func_356(0))
			{
				return Global_262145.f_22196;
			}
			break;
		
		case 230:
			if (func_356(0))
			{
				return Global_262145.f_22292;
			}
			break;
		
		case 233:
			if (func_356(0))
			{
				return Global_262145.f_22768;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_356(0))
			{
				return Global_262145.f_23931;
			}
			break;
		
		case 238:
			if (func_356(0))
			{
				return Global_262145.f_24042;
			}
			break;
		
		case 249:
			if (func_356(0))
			{
				return Global_262145.f_24058;
			}
			break;
		
		case 243:
			return Global_262145.f_26236;
		
		case 158:
			if (func_356(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_637(int iParam0, int iParam1)//Position - 0x184C7
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_993())
		{
			if (func_536(0))
			{
				if (!func_356(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_535()))
					{
						if (func_651() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_651());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_649(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_642("GB_BCUT_TICK1", func_535(), iVar0, 0, 0, 1, 1);
						}
						func_641(20);
						func_638(func_535(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_638(int iParam0, int iParam1, int iParam2)//Position - 0x18568
{
	struct<8> Var0;
	
	if (func_1119(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_640(iParam0);
		func_639(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_582(iParam0));
	}
}

void func_639(var uParam0, var uParam1)//Position - 0x185BE
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_640(int iParam0)//Position - 0x185D8
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_641(int iParam0)//Position - 0x185EC
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_642(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x18615
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_512(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_647(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_643(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_643(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x186AD
{
	int iVar0;
	
	if ((!func_646() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_146(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_644(iParam2);
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

int func_644(int iParam0)//Position - 0x187B5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_645(iVar0);
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

void func_645(int iParam0)//Position - 0x18817
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_646()//Position - 0x18850
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_647(char* sParam0)//Position - 0x18861
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_648(&cVar0);
}

var func_648(char[4] cParam0)//Position - 0x18885
{
	return cParam0;
}

void func_649(int iParam0, bool bParam1)//Position - 0x1888F
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_650(1);
	}
	else
	{
		iVar1 = func_650(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_650(bool bParam0)//Position - 0x188C1
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_651()//Position - 0x188E7
{
	return Global_262145.f_12389;
}

void func_652(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x188F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_356(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_993())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_535();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590446[iVar11 /*871*/].f_849.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590446[iVar11 /*871*/].f_849.f_2;
			}
			else
			{
				iVar2 = func_668(Global_1590446[iVar11 /*871*/].f_849, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_667(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_666("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1675175.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_665(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_663(*uParam3);
				}
				iVar6 = func_662(&uVar5);
				iVar7 = Global_262145.f_23961;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23960));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_641(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_661(iVar23))
								{
									func_653(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23933;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23934;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_641(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_653(int iParam0, int iParam1, int iParam2)//Position - 0x18B5D
{
	var uVar0;
	
	uVar0 = func_655(iParam0);
	func_654(iParam0, uVar0, iParam1, iParam2);
}

void func_654(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x18B79
{
	struct<8> Var0;
	
	Var0 = -1548391120;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_640(iParam0);
	func_639(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_32())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_582(iParam0));
		}
	}
}

int func_655(int iParam0)//Position - 0x18BDF
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_660();
	iVar0 = func_658(iParam0, iVar0);
	iVar1 = Global_1628955[func_535() /*614*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14943));
	if (iVar0 < func_657())
	{
		iVar0 = func_657();
	}
	if (iVar0 > func_656())
	{
		iVar0 = func_656();
	}
	return iVar0;
}

int func_656()//Position - 0x18C38
{
	return Global_262145.f_14944;
}

int func_657()//Position - 0x18C47
{
	return Global_262145.f_16119;
}

int func_658(int iParam0, int iParam1)//Position - 0x18C56
{
	int iVar0;
	
	iVar0 = (func_726(iParam0) * func_659());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_659()//Position - 0x18C74
{
	return Global_262145.f_16118;
}

var func_660()//Position - 0x18C83
{
	return Global_262145.f_12381;
}

int func_661(int iParam0)//Position - 0x18C92
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_328(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_199(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_662(var uParam0)//Position - 0x18CCB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_146(iVar2, 0) && !func_328(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_146(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_663(int iParam0)//Position - 0x18D37
{
	func_664(iParam0, 7236);
}

void func_664(int iParam0, int iParam1)//Position - 0x18D48
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_557(iParam1, -1, 0);
	func_555(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_665(int iParam0)//Position - 0x18D71
{
	func_664(iParam0, 7231);
}

int func_666(char* sParam0, int iParam1, int iParam2)//Position - 0x18D82
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_643(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_667(int iParam0)//Position - 0x18DB7
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23962);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_668(struct<5> Param0, int iParam5)//Position - 0x18DEB
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_669(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x18E55
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_356(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_993())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_535();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_681(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_672(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_567(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_566(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_671(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_666("SMTICK_RONCUT", func_671(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_671(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_670(iVar2, iVar9);
				iVar6 = func_662(&uVar5);
				iVar7 = Global_262145.f_22310;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22309));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_641(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_661(iVar20))
								{
									func_653(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22243;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22244;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_641(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_670(int iParam0, int iParam1)//Position - 0x1909B
{
	if (iParam0 > 0)
	{
		func_664(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_664(iParam1, 6117);
	}
}

int func_671(int iParam0)//Position - 0x190C1
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22277);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22278))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22278);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_672(int iParam0)//Position - 0x19101
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_679())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_681(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_674(func_675(func_678(iVar0), -1, -1));
		if (func_673(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_673(int iParam0)//Position - 0x1915F
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_674(int iParam0)//Position - 0x1920F
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_675(int iParam0, int iParam1, int iParam2)//Position - 0x192FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_148();
	}
	iVar0 = 0;
	iVar1 = func_677(iParam0, iParam1);
	iVar2 = func_676(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_676(int iParam0)//Position - 0x19345
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

int func_677(int iParam0, int iParam1)//Position - 0x19746
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_148();
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

int func_678(int iParam0)//Position - 0x19AF4
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_679()//Position - 0x19D5E
{
	return func_680() != 0;
}

int func_680()//Position - 0x19D6C
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_260;
}

int func_681(int iParam0)//Position - 0x19D85
{
	if (iParam0 != func_32() && func_682(iParam0))
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260.f_3;
	}
	return 0;
}

int func_682(int iParam0)//Position - 0x19DB7
{
	if (iParam0 != func_32())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

void func_683(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x19DDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_356(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_993())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_535();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_570(iVar15);
			iVar0 = (func_704(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_700(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21023));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21022));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_697(iVar16, iVar2);
				if (func_693(iVar16) >= Global_262145.f_20571 || iVar2 >= Global_262145.f_20571)
				{
					func_684(5);
				}
				iVar6 = func_662(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21025);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21024));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_641(108);
					}
					else
					{
						func_641(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_661(iVar20))
								{
									func_653(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21026;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21027;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_641(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_684(int iParam0)//Position - 0x1A018
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20559)
			{
				if (func_686(Global_262145.f_20560))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20561)
			{
				if (func_686(Global_262145.f_20562))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20563)
			{
				if (func_686(Global_262145.f_20564))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20565)
			{
				if (func_686(Global_262145.f_20566))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20567)
			{
				if (func_686(Global_262145.f_20568))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20569)
			{
				if (func_686(Global_262145.f_20570))
				{
					func_666("CLOTHAWDSTRAP3", Global_262145.f_20571, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20572)
			{
				if (func_686(Global_262145.f_20573))
				{
					func_666("CLOTHAWDSTRAP5", Global_262145.f_20705, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20575)
			{
				if (func_686(Global_262145.f_20576))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20577)
			{
				if (func_686(Global_262145.f_20578))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20579)
			{
				if (func_686(Global_262145.f_20580))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20581)
			{
				if (func_686(Global_262145.f_20582))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20583)
			{
				if (func_686(Global_262145.f_20584))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20585)
			{
				if (func_686(Global_262145.f_20586))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20587)
			{
				if (func_686(Global_262145.f_20588))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20589)
			{
				if (func_686(Global_262145.f_20590))
				{
					func_685("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_685(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x1A315
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	else
	{
		Global_2507671 = { func_88(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
		{
			iVar1 = 0;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2507601.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar1, 0, Global_2507601, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314030, Global_1314031, Global_1314032);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
	}
	func_643(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_686(int iParam0)//Position - 0x1A409
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_690(15417, -1, -1))
			{
				func_689(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_690(15418, -1, -1))
			{
				func_689(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_690(15425, -1, -1))
			{
				func_689(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_690(15405, -1, -1))
			{
				func_689(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_690(15393, -1, -1))
			{
				func_689(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_690(15409, -1, -1))
			{
				func_689(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_690(15396, -1, -1))
			{
				func_689(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_690(15412, -1, -1))
			{
				func_689(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_690(15403, -1, -1))
			{
				func_689(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_690(15389, -1, -1))
			{
				func_689(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_690(15398, -1, -1))
			{
				func_689(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_690(15400, -1, -1))
			{
				func_689(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_690(15408, -1, -1))
			{
				func_689(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_690(15411, -1, -1))
			{
				func_689(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_690(15397, -1, -1))
			{
				func_689(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_690(15413, -1, -1))
			{
				func_689(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_690(15391, -1, -1))
			{
				func_689(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_690(15388, -1, -1))
			{
				func_689(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_690(15401, -1, -1))
			{
				func_689(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_690(15394, -1, -1))
			{
				func_689(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_690(15406, -1, -1))
			{
				func_689(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_690(15395, -1, -1))
			{
				func_689(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_690(15410, -1, -1))
			{
				func_689(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_690(15407, -1, -1))
			{
				func_689(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_690(15414, -1, -1))
			{
				func_689(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_690(15415, -1, -1))
			{
				func_689(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_690(15399, -1, -1))
			{
				func_689(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_690(15404, -1, -1))
			{
				func_689(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_690(15392, -1, -1))
			{
				func_689(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_690(15390, -1, -1))
			{
				func_689(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_690(15402, -1, -1))
			{
				func_689(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_690(15416, -1, -1))
			{
				func_689(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_407(209, -1))
			{
				func_687(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_690(15426, -1, -1))
			{
				func_689(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_690(15422, -1, -1))
			{
				func_689(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_690(15423, -1, -1))
			{
				func_689(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_690(15421, -1, -1))
			{
				func_689(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_690(15427, -1, -1))
			{
				func_689(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_690(15419, -1, -1))
			{
				func_689(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_690(15420, -1, -1))
			{
				func_689(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_687(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1AF7E
{
	int iVar0;
	
	if (func_688())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_408(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_688()//Position - 0x1AFB0
{
	return 1;
	return 0;
}

int func_689(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1AFBD
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
		iParam2 = func_148();
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

int func_690(int iParam0, int iParam1, int iParam2)//Position - 0x1B60F
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_148();
	}
	iVar1 = func_692(iParam0, iParam1);
	uVar2 = func_691(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_691(int iParam0)//Position - 0x1B64C
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

int func_692(int iParam0, int iParam1)//Position - 0x1B9E8
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_148();
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

int func_693(int iParam0)//Position - 0x1BD61
{
	int iVar0;
	
	iVar0 = func_695(iParam0);
	return func_557(func_694(iVar0), -1, 0);
}

int func_694(int iParam0)//Position - 0x1BD7D
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_695(int iParam0)//Position - 0x1BDD7
{
	int iVar0;
	
	if (func_696(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_696(int iParam0)//Position - 0x1BE19
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_697(int iParam0, int iParam1)//Position - 0x1BE38
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_695(iParam0);
	iVar1 = func_694(iVar0);
	iVar2 = (func_557(iVar1, -1, 0) + iParam1);
	func_555(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_675(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
			{
				iVar1 = func_694(iVar0);
				iVar3 = (iVar3 + func_557(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_699(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_698(9357, iVar5, -1, 1);
	}
}

var func_698(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1BEED
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_148();
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

int func_699(int iParam0)//Position - 0x1C4B0
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_700(int iParam0, int iParam1, int iParam2)//Position - 0x1C4F0
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_583(iParam1);
	if (func_696(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16948;
				if (func_701(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16953);
				}
				if (func_701(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16958);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16947;
				if (func_701(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16952);
				}
				if (func_701(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16957);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16946;
				if (func_701(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16951);
				}
				if (func_701(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16956);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16944;
				if (func_701(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16949);
				}
				if (func_701(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16954);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16945;
				if (func_701(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16950);
				}
				if (func_701(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16955);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21048;
				if (func_701(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21050);
				}
				if (func_701(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21049);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_701(int iParam0, int iParam1, int iParam2)//Position - 0x1C6C8
{
	int iVar0;
	
	if (func_703(iParam0, iParam1))
	{
		iVar0 = func_702(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_702(int iParam0, int iParam1)//Position - 0x1C703
{
	int iVar0;
	
	if (func_696(iParam1) && iParam0 != func_32())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_703(int iParam0, int iParam1)//Position - 0x1C74F
{
	int iVar0;
	
	if (func_696(iParam1) && iParam0 != func_32())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_704(int iParam0, int iParam1)//Position - 0x1C79A
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (func_696(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_705(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x1C7F9
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_558())
			{
				Var0 = { func_585() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_700(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18583);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18582);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_662(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18573);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18572));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_641(86);
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (func_356(0))
			{
				Var15 = { func_706(func_535()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_700(func_535(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18583));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18582));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18622;
				iVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18623;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_706(int iParam0)//Position - 0x1CA9C
{
	return Global_1628955[iParam0 /*614*/].f_11.f_193;
}

void func_707(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x1CAB3
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_247(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_722();
			}
			func_721();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_247(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_713(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_712(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_662(&uVar2);
					iVar4 = Global_262145.f_16129;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15338));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_641(44);
					}
				}
				func_710(*iParam3);
				func_709();
				Global_2531497.f_4898.f_379 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_661(iVar9))
						{
							func_653(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_247(PLAYER::PLAYER_ID()))
		{
			func_708();
		}
	}
}

void func_708()//Position - 0x1CC1F
{
	int iVar0;
	
	iVar0 = Global_2578770[func_148()];
	iVar0++;
	func_554(3667, iVar0, -1, 1);
}

void func_709()//Position - 0x1CC44
{
	int iVar0;
	
	iVar0 = Global_2578776[func_148()];
	iVar0++;
	func_554(3666, iVar0, -1, 1);
}

void func_710(int iParam0)//Position - 0x1CC69
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2578779[func_148()];
	iVar0 = (iVar0 + iParam0);
	func_554(3668, iVar0, -1, 1);
	if (func_675(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_711(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_698(7666, iVar2, -1, 1);
	}
}

int func_711(int iParam0)//Position - 0x1CCCB
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16262;
			break;
		
		case 2:
			return Global_262145.f_16263;
			break;
		
		case 3:
			return Global_262145.f_16264;
			break;
		
		case 4:
			return Global_262145.f_16265;
			break;
		
		case 5:
			return Global_262145.f_16266;
			break;
		
		case 6:
			return Global_262145.f_16267;
			break;
		
		case 7:
			return Global_262145.f_16268;
			break;
		
		case 8:
			return Global_262145.f_16269;
			break;
		
		case 9:
			return Global_262145.f_16270;
			break;
		
		case 10:
			return Global_262145.f_16271;
			break;
		
		case 11:
			return Global_262145.f_16272;
			break;
		
		case 12:
			return Global_262145.f_16273;
			break;
		
		case 13:
			return Global_262145.f_16274;
			break;
		
		case 14:
			return Global_262145.f_16275;
			break;
		
		case 15:
			return Global_262145.f_16276;
			break;
		
		case 16:
			return Global_262145.f_16277;
			break;
		
		case 17:
			return Global_262145.f_16278;
			break;
		
		case 18:
			return Global_262145.f_16279;
			break;
		
		case 19:
			return Global_262145.f_16280;
			break;
		
		case 20:
			return Global_262145.f_16281;
			break;
		
		case 21:
			return Global_262145.f_16282;
			break;
		
		case 22:
			return Global_262145.f_16283;
			break;
		
		case 23:
			return Global_262145.f_16284;
			break;
		
		case 24:
			return Global_262145.f_16285;
			break;
	}
	return 0;
}

var func_712(int iParam0)//Position - 0x1CEA3
{
	if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	else if (iParam0 >= Global_262145.f_15308)
	{
		return Global_262145.f_15329;
	}
	else if (iParam0 >= Global_262145.f_15307)
	{
		return Global_262145.f_15328;
	}
	else if (iParam0 >= Global_262145.f_15306)
	{
		return Global_262145.f_15327;
	}
	else if (iParam0 >= Global_262145.f_15305)
	{
		return Global_262145.f_15326;
	}
	else if (iParam0 >= Global_262145.f_15304)
	{
		return Global_262145.f_15325;
	}
	else if (iParam0 >= Global_262145.f_15303)
	{
		return Global_262145.f_15324;
	}
	else if (iParam0 >= Global_262145.f_15302)
	{
		return Global_262145.f_15323;
	}
	else if (iParam0 >= Global_262145.f_15301)
	{
		return Global_262145.f_15322;
	}
	else if (iParam0 >= Global_262145.f_15300)
	{
		return Global_262145.f_15321;
	}
	else if (iParam0 >= Global_262145.f_15299)
	{
		return Global_262145.f_15320;
	}
	else if (iParam0 >= Global_262145.f_15298)
	{
		return Global_262145.f_15319;
	}
	else if (iParam0 >= Global_262145.f_15297)
	{
		return Global_262145.f_15318;
	}
	return Global_262145.f_15317;
}

int func_713(int iParam0)//Position - 0x1D0A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_720(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_719(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_718(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_714(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_714(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_718(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_714(int iParam0)//Position - 0x1D11F
{
	int iVar0;
	
	if (func_717(iParam0))
	{
		iVar0 = func_715(func_716(iParam0));
		return func_557(iVar0, -1, 0);
	}
	return 0;
}

int func_715(int iParam0)//Position - 0x1D148
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_716(int iParam0)//Position - 0x1D19B
{
	int iVar0;
	
	if (func_717(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_717(int iParam0)//Position - 0x1D1DD
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_718(int iParam0)//Position - 0x1D1FC
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15520;
	}
	return 0;
}

int func_719(int iParam0, int iParam1)//Position - 0x1D274
{
	int iVar0;
	
	if (func_717(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676590[iVar0] == iParam1 && Global_1676597[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_720(int iParam0)//Position - 0x1D2BA
{
	int iVar0;
	
	if (func_717(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_721()//Position - 0x1D2FB
{
	int iVar0;
	
	iVar0 = Global_2578767[func_148()];
	iVar0++;
	Global_2578767[func_148()] = iVar0;
	func_554(3665, iVar0, -1, 1);
}

void func_722()//Position - 0x1D32C
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2578764[func_148()];
	iVar1 = Global_2578773[func_148()];
	iVar0++;
	iVar1++;
	Global_2578764[func_148()] = iVar0;
	Global_2578773[func_148()] = iVar1;
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_124 = iVar1;
	func_554(3663, iVar0, -1, 1);
	func_554(3664, iVar1, -1, 1);
}

void func_723()//Position - 0x1D398
{
	if (func_993())
	{
		Global_2449755.f_3072.f_134 = 0;
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
	}
}

void func_724()//Position - 0x1D3CA
{
	if (func_993())
	{
		if (Global_2449755.f_3072.f_134 < 10)
		{
			Global_2449755.f_3072.f_134++;
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

void func_725()//Position - 0x1D414
{
	if (func_993())
	{
		if (Global_2449755.f_3072.f_134 > 0)
		{
			Global_2449755.f_3072.f_134 = (Global_2449755.f_3072.f_134 - 1);
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

int func_726(int iParam0)//Position - 0x1D45D
{
	return Global_1628955[iParam0 /*614*/].f_11.f_28;
}

int func_727(int iParam0)//Position - 0x1D472
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_536(1) && !func_356(1))
			{
				if (func_728(func_535()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_728(int iParam0)//Position - 0x1D4ED
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 26);
}

int func_729(int iParam0, bool bParam1)//Position - 0x1D513
{
	if (bParam1)
	{
		return Global_262145.f_18269;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15039;
		
		case 172:
			return Global_262145.f_15055;
		
		case 173:
			return Global_262145.f_14998;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18277;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18160;
		
		case 185:
			return Global_262145.f_18169;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18365;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18382;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18229;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18413;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18291;
		
		case 205:
			return Global_262145.f_18400;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18258;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18395;
		
		case 211:
			return Global_262145.f_18359;
		
		case 214:
			return Global_262145.f_18953;
		
		case 215:
			return Global_262145.f_18963;
		
		case 216:
			return Global_262145.f_18973;
		
		case 217:
			return Global_262145.f_18982;
		
		case 218:
			return Global_262145.f_18991;
		
		case 219:
			return Global_262145.f_19007;
		
		case 241:
			return Global_262145.f_24078;
		
		case 242:
			return Global_262145.f_24074;
		
		case 248:
			return Global_262145.f_24077;
		
		case 244:
			return Global_262145.f_24075;
		
		case 239:
			return Global_262145.f_24079;
		
		case 240:
			return Global_262145.f_24080;
		
		case 243:
			return Global_262145.f_26235;
		
		default:
	}
	return 0;
}

int func_730(int iParam0, bool bParam1, bool bParam2)//Position - 0x1D8D7
{
	if (bParam2)
	{
		return Global_262145.f_18270;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14981;
		
		case 171:
			return Global_262145.f_15040;
		
		case 172:
			return Global_262145.f_15056;
		
		case 173:
			return Global_262145.f_14999;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17078;
		
		case 168:
			return Global_262145.f_17077;
		
		case 179:
			return Global_262145.f_18278;
		
		case 180:
			return Global_262145.f_18153;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18161;
		
		case 185:
			return Global_262145.f_18170;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18383;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18230;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18414;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18292;
		
		case 205:
			return Global_262145.f_18401;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18259;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18396;
		
		case 211:
			return Global_262145.f_18360;
		
		case 214:
			return Global_262145.f_18954;
		
		case 215:
			return Global_262145.f_18964;
		
		case 216:
			return Global_262145.f_18974;
		
		case 217:
			return Global_262145.f_18983;
		
		case 218:
			return Global_262145.f_18992;
		
		case 219:
			return Global_262145.f_19008;
		
		case 178:
			if (func_993())
			{
				return Global_262145.f_18831;
			}
			else if (bParam1)
			{
				return Global_262145.f_18832;
			}
			break;
		
		case 188:
			if (func_993())
			{
				return Global_262145.f_18915;
			}
			else if (bParam1)
			{
				return Global_262145.f_18916;
			}
			break;
		
		case 225:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21036;
				}
				else
				{
					return Global_262145.f_21037;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_21038;
			}
			break;
		
		case 226:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21016;
				}
				else
				{
					return Global_262145.f_21017;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_21018;
			}
			break;
		
		case 227:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 229:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22192;
				}
				else
				{
					return Global_262145.f_22193;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_22194;
			}
			break;
		
		case 230:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22288;
				}
				else
				{
					return Global_262145.f_22289;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_22290;
			}
			break;
		
		case 233:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22764;
				}
				else
				{
					return Global_262145.f_22765;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_22763;
			}
			break;
		
		case 241:
			return Global_262145.f_24085;
		
		case 242:
			return Global_262145.f_24081;
		
		case 244:
			return Global_262145.f_24082;
		
		case 248:
			return Global_262145.f_24084;
		
		case 239:
			return Global_262145.f_24086;
		
		case 240:
			return Global_262145.f_24087;
		
		case 237:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23927;
				}
				else
				{
					return Global_262145.f_23928;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_23929;
			}
			break;
		
		case 238:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24038;
				}
				else
				{
					return Global_262145.f_24039;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_24040;
			}
			break;
		
		case 249:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24054;
				}
				else
				{
					return Global_262145.f_24055;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_24056;
			}
			break;
		
		case 243:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26238;
				}
				else
				{
					return Global_262145.f_26239;
				}
			}
			else if (func_558())
			{
				return Global_262145.f_26238;
			}
			break;
		
		case 158:
			if (func_993() && !func_558())
			{
				if (func_728(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_558())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_731(int iParam0, var uParam1, var uParam2)//Position - 0x1E06D
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_732(iParam0))
	{
		if (!func_993())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_294(PLAYER::PLAYER_ID(), 1))
	{
		if (func_429(iParam0))
		{
			*uParam1 = (Global_262145.f_18129 / 100f);
			*uParam2 = (Global_262145.f_18129 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24088;
			*uParam2 = Global_262145.f_24088;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24089;
			*uParam2 = Global_262145.f_24089;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24091;
			*uParam2 = Global_262145.f_24091;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24092;
			*uParam2 = Global_262145.f_24092;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24093;
			*uParam2 = Global_262145.f_24093;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24094;
			*uParam2 = Global_262145.f_24094;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_429(iParam0))
	{
		*uParam1 = (Global_262145.f_18130 / 100f);
		*uParam2 = (Global_262145.f_18130 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24095;
		*uParam2 = Global_262145.f_24095;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24096;
		*uParam2 = Global_262145.f_24096;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24098;
		*uParam2 = Global_262145.f_24098;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24099;
		*uParam2 = Global_262145.f_24099;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24100;
		*uParam2 = Global_262145.f_24100;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24101;
		*uParam2 = Global_262145.f_24101;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_359();
	if (iVar0 != func_32())
	{
		if (func_328(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_732(int iParam0)//Position - 0x1E2D0
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_733(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x1E314
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_286(PLAYER::PLAYER_ID());
		Global_1675140.f_4 = func_842();
		Global_1675140.f_5 = func_841();
		if (func_253(PLAYER::PLAYER_ID()) || func_254(PLAYER::PLAYER_ID()))
		{
			Global_1675140.f_6 = 1;
		}
		else
		{
			Global_1675140.f_6 = 0;
		}
		Global_1675140.f_1 = func_837(bParam9);
		Global_1675140.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_9 = func_836(bParam0);
		Global_1675140.f_10 = iParam1;
		Global_1675140.f_17 = Global_1675140.f_2;
		Global_1675140.f_18 = Global_1675140.f_2;
		Global_1675140.f_19 = func_835();
		Global_1675140.f_21 = (Global_1675140.f_8 - Global_1675140.f_7);
		if (func_294(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_836(func_356(1));
		}
		Global_1675140.f_24 = func_834(PLAYER::PLAYER_ID());
		Global_1675140.f_28 = func_833(PLAYER::PLAYER_ID());
		if (Global_1675140.f_24 > 2)
		{
			Global_1675140.f_24 = 2;
		}
		func_831(iVar0);
	}
	else
	{
		iVar0 = func_227(PLAYER::PLAYER_ID());
	}
	if (func_429(iVar0))
	{
		Global_1674879.f_2 = func_842();
		Global_1674879.f_3 = func_841();
		Global_1674879.f_50 = iParam4;
		Global_1674879.f_51 = iParam5;
		Global_1674879.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674879.f_20 = (Global_1674879.f_10 - Global_1674879.f_9);
		Global_1674879.f_12 = iParam1;
		Global_1674879.f_19 = func_827(iVar0, bParam0, func_830(bParam3));
		if (bParam0)
		{
			Global_1674879.f_11 = 1;
		}
		else
		{
			Global_1674879.f_11 = 0;
		}
		if ((func_248(PLAYER::PLAYER_ID()) || func_402(PLAYER::PLAYER_ID())) || func_300(PLAYER::PLAYER_ID()))
		{
			Global_1674879.f_8 = 1;
		}
		else
		{
			Global_1674879.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674879.f_43 = 0;
			Global_1674879.f_45 = func_826(func_535(), iParam2);
			Global_1674879.f_47 = iParam7;
			Global_1674879.f_46 = iParam6;
			Global_1674879.f_52 = func_825(func_535(), iParam2);
		}
		func_823(iVar0);
	}
	else if (func_434(iVar0))
	{
		Global_1674933.f_2 = func_842();
		Global_1674933.f_3 = func_841();
		Global_1674933.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674933.f_19 = (Global_1674933.f_10 - Global_1674933.f_9);
		Global_1674933.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674933.f_11 = 1;
		}
		else
		{
			Global_1674933.f_11 = 0;
		}
		if ((func_248(PLAYER::PLAYER_ID()) || func_402(PLAYER::PLAYER_ID())) || func_300(PLAYER::PLAYER_ID()))
		{
			Global_1674933.f_8 = 1;
		}
		else
		{
			Global_1674933.f_8 = 0;
		}
		func_821(iVar0);
	}
	else if (func_476(iVar0))
	{
		Global_1674996.f_2 = func_842();
		Global_1674996.f_3 = func_841();
		Global_1674996.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674996.f_18 = (Global_1674996.f_9 - Global_1674996.f_8);
		Global_1674996.f_11 = iParam1;
		Global_1674996.f_7 = func_835();
		Global_1674996.f_42 = func_819(func_148(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_570(iVar1);
		Global_1674996.f_28 = iVar2;
		Global_1674996.f_29 = func_836((func_818(iVar1) || func_817(iVar1)));
		Global_1674996.f_30 = func_836(func_816(iVar1));
		Global_1674996.f_32 = func_836(func_815(iVar1));
		Global_1674996.f_33 = func_836(func_814(iVar1));
		Global_1674996.f_34 = func_836(func_813(iVar1));
		Global_1674996.f_35 = func_836(func_812(0, iVar1) == 1);
		Global_1674996.f_36 = func_836(func_811(iVar1));
		Global_1674996.f_37 = func_836(func_810(iVar1));
		Global_1674996.f_38 = func_836(func_809(iVar1));
		Global_1674996.f_39 = func_836(func_701(iVar1, iVar2, 0));
		Global_1674996.f_40 = func_836(func_701(iVar1, iVar2, 2));
		Global_1674996.f_41 = func_836(func_701(iVar1, iVar2, 1));
		if (func_808(iVar1))
		{
			Global_1674996.f_31 = 2;
		}
		else if (func_807(iVar1))
		{
			Global_1674996.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674996.f_10 = 1;
		}
		else
		{
			Global_1674996.f_10 = 0;
		}
		if ((func_248(PLAYER::PLAYER_ID()) || func_402(PLAYER::PLAYER_ID())) || func_300(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_6 = 1;
		}
		else
		{
			Global_1674996.f_6 = 0;
		}
		Global_1674996.f_21 = -2;
		Global_1674996.f_22 = -2;
		func_805(iVar0);
	}
	else if (func_474(iVar0))
	{
		Global_1675040.f_2 = func_842();
		Global_1675040.f_3 = func_841();
		if ((func_248(PLAYER::PLAYER_ID()) || func_402(PLAYER::PLAYER_ID())) || func_300(PLAYER::PLAYER_ID()))
		{
			Global_1675040.f_6 = 1;
		}
		else
		{
			Global_1675040.f_6 = 0;
		}
		Global_1675040.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675040.f_10 = func_836(bParam0);
		Global_1675040.f_11 = iParam1;
		Global_1675040.f_17 = func_804(func_359());
		Global_1675040.f_18 = (Global_1675040.f_9 - Global_1675040.f_8);
		Global_1675040.f_20 = iParam8;
		Global_1675040.f_21 = -2;
		Global_1675040.f_22 = -2;
		Global_1675040.f_27 = func_803();
		Global_1675040.f_29 = func_557(6107, -1, 0);
		Global_1675040.f_30 = func_557(6103, -1, 0);
		Global_1675040.f_31 = func_557(6104, -1, 0);
		Global_1675040.f_32 = func_557(6106, -1, 0);
		Global_1675040.f_33 = func_557(6105, -1, 0);
		Global_1675040.f_34 = func_557(6108, -1, 0);
		Global_1675040.f_36 = func_836(func_356(1));
		Global_1675040.f_37 = func_801();
		func_787();
		func_785(iVar0);
	}
	else if (func_472(iVar0))
	{
		Global_1675094.f_2 = func_842();
		Global_1675094.f_3 = func_841();
		if ((func_248(PLAYER::PLAYER_ID()) || func_402(PLAYER::PLAYER_ID())) || func_300(PLAYER::PLAYER_ID()))
		{
			Global_1675094.f_6 = 1;
		}
		else
		{
			Global_1675094.f_6 = 0;
		}
		Global_1675094.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675094.f_10 = func_836(bParam0);
		Global_1675094.f_11 = iParam1;
		Global_1675094.f_18 = (Global_1675094.f_9 - Global_1675094.f_8);
		Global_1675094.f_20 = iParam8;
		Global_1675094.f_23 = Global_786547;
		Global_1675094.f_36 = Global_786547.f_1;
		Global_1675094.f_24 = func_557(6157, -1, 0);
		Global_1675094.f_25 = func_557(6162, -1, 0);
		Global_1675094.f_26 = func_557(6163, -1, 0);
		Global_1675094.f_27 = func_836((((func_784() || func_783()) || func_782()) || func_781(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_557(6164, -1, 0);
		Global_1675094.f_29 = func_836(func_780());
		Global_1675094.f_35 = -1;
		Global_1675094.f_38 = -1;
		Global_1675094.f_39 = Global_1675094.f_4;
		Global_1675094.f_40 = Global_1675094.f_5;
		Global_1675094.f_41 = func_842();
		Global_1675094.f_42 = func_836(func_356(1));
		Global_1675094.f_44 = Global_1675094.f_18;
		func_778(iVar0);
	}
	else if (func_546(iVar0))
	{
		if (Global_1675228.f_2 == -1)
		{
			Global_1675228.f_2 = func_842();
		}
		if (Global_1675228.f_3 == -1)
		{
			Global_1675228.f_3 = func_841();
		}
		if ((func_248(PLAYER::PLAYER_ID()) || func_402(PLAYER::PLAYER_ID())) || func_300(PLAYER::PLAYER_ID()))
		{
			Global_1675228.f_6 = 1;
		}
		else
		{
			Global_1675228.f_6 = 0;
		}
		Global_1675228.f_1 = func_837(0);
		Global_1675228.f_7 = func_835();
		Global_1675228.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_10 = func_836(bParam0);
		Global_1675228.f_11 = iParam1;
		if (func_535() != -1)
		{
			Global_1675228.f_17 = func_777(func_535());
		}
		Global_1675228.f_18 = (Global_1675228.f_9 - Global_1675228.f_8);
		Global_1675228.f_19 = Global_2531497.f_6307;
		Global_1675228.f_28 = func_833(PLAYER::PLAYER_ID());
		Global_1675228.f_29 = func_836(func_776(PLAYER::PLAYER_ID()));
		Global_1675228.f_30 = func_836(func_775(PLAYER::PLAYER_ID()));
		Global_1675228.f_31 = func_774(PLAYER::PLAYER_ID());
		if (func_294(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_836(func_356(1));
		}
		if (Global_1675228.f_34 > 2)
		{
			Global_1675228.f_34 = 2;
		}
		func_772(iVar0);
	}
	else if (func_550(iVar0))
	{
		Global_1675175.f_2 = func_842();
		Global_1675175.f_3 = func_841();
		if ((func_248(PLAYER::PLAYER_ID()) || func_402(PLAYER::PLAYER_ID())) || func_300(PLAYER::PLAYER_ID()))
		{
			Global_1675175.f_6 = 1;
		}
		else
		{
			Global_1675175.f_6 = 0;
		}
		Global_1675175.f_1 = func_837(0);
		Global_1675175.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_10 = func_836(bParam0);
		Global_1675175.f_11 = iParam1;
		Global_1675175.f_18 = (Global_1675175.f_9 - Global_1675175.f_8);
		Global_1675175.f_28 = func_833(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_771(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_755(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_774(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_836(func_754(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_836(func_753(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_836(func_752(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_836(func_751(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_750(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_749(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_748(PLAYER::PLAYER_ID());
		if (func_294(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_836(func_356(1));
		}
		if (Global_1675175.f_42 > 2)
		{
			Global_1675175.f_42 = 2;
		}
		func_746(iVar0);
	}
	else if (func_545(iVar0))
	{
		Global_1675312.f_2 = func_842();
		Global_1675312.f_3 = func_841();
		Global_1675312.f_4 = func_745(func_535());
		Global_1675312.f_5 = func_744(func_535());
		if ((func_248(PLAYER::PLAYER_ID()) || func_402(PLAYER::PLAYER_ID())) || func_300(PLAYER::PLAYER_ID()))
		{
			Global_1675312.f_6 = 1;
		}
		else
		{
			Global_1675312.f_6 = 0;
		}
		Global_1675312.f_7 = func_835();
		Global_1675312.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675312.f_10 = func_836(bParam0);
		Global_1675312.f_11 = iParam1;
		if (func_359() != -1)
		{
			Global_1675312.f_17 = func_777(func_359());
		}
		Global_1675312.f_18 = (Global_1675312.f_9 - Global_1675312.f_8);
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = func_743(PLAYER::PLAYER_ID());
		Global_1675312.f_27 = func_836(func_742(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_739(21, -1);
		Global_1675312.f_29 = func_836(func_738(PLAYER::PLAYER_ID()));
		func_736(iVar0);
	}
	else if (func_466(iVar0))
	{
		Global_1675387.f_6 = func_745(func_535());
		Global_1675387.f_7 = func_744(func_535());
		if (func_294(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_836(func_356(1));
		}
		Global_1675387.f_10 = func_835();
		Global_1675387.f_11 = 1;
		Global_1675387.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1703065);
		Global_1675387.f_14 = iParam1;
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		func_734(iVar0);
	}
	else
	{
		Global_1674861.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1674861.f_7 = 1;
		}
		else
		{
			Global_1674861.f_7 = 0;
		}
		Global_1674861.f_8 = iParam1;
		if (Global_1674861.f_4 == 0)
		{
			if ((func_248(PLAYER::PLAYER_ID()) || func_402(PLAYER::PLAYER_ID())) || func_300(PLAYER::PLAYER_ID()))
			{
				Global_1674861.f_4 = 1;
			}
		}
	}
}

void func_734(int iParam0)//Position - 0x1EF03
{
	if (iParam0 == 0)
	{
	}
	unk_0x53C31853EC9531FF(&Global_1675387);
	func_735();
}

void func_735()//Position - 0x1EF1D
{
	struct<36> Var0;
	
	Global_1675387 = { Var0 };
	Global_1675387.f_23 = 0;
	Global_1675387.f_22 = 0;
	Global_1675387.f_21 = 0;
}

void func_736(int iParam0)//Position - 0x1EF46
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1675312);
	func_737();
}

void func_737()//Position - 0x1EF60
{
	struct<31> Var0;
	
	Global_1675312 = { Var0 };
}

int func_738(int iParam0)//Position - 0x1EF74
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_365.f_2, 6);
	}
	return 0;
}

int func_739(int iParam0, int iParam1)//Position - 0x1EF9F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_148();
	}
	if (iParam0 == 7 && !Global_262145.f_16972)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_741(iParam0);
		if (iVar1 == 0 && func_557(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_740(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_833(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1384285[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2578729[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 23)
		{
			return 0;
		}
		return Global_2578592[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_740(int iParam0)//Position - 0x1F07A
{
	if (!Global_262145.f_23651)
	{
		return 0;
	}
	return func_557(7207, iParam0, 0) != 0;
}

int func_741(int iParam0)//Position - 0x1F09D
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_742(int iParam0)//Position - 0x1F0C3
{
	if (iParam0 != func_32())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_365 != 0;
	}
	return 0;
}

int func_743(int iParam0)//Position - 0x1F0E9
{
	if (func_227(iParam0) == 243)
	{
		return func_549(iParam0);
	}
	return -1;
}

int func_744(int iParam0)//Position - 0x1F106
{
	if (iParam0 == func_32())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_745(int iParam0)//Position - 0x1F12B
{
	if (iParam0 == func_32())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

void func_746(int iParam0)//Position - 0x1F150
{
	STATS::_0x2D7A9B577E72385E(&Global_1675175);
	func_747();
}

void func_747()//Position - 0x1F164
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1675175 = { Var0 };
}

int func_748(int iParam0)//Position - 0x1F28D
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 12);
	}
	return 0;
}

int func_749(int iParam0)//Position - 0x1F2B7
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 10);
	}
	return 0;
}

int func_750(int iParam0)//Position - 0x1F2E1
{
	if (iParam0 != func_32())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 11);
	}
	return 0;
}

bool func_751(int iParam0)//Position - 0x1F30B
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 4);
}

bool func_752(int iParam0)//Position - 0x1F336
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 3);
}

bool func_753(int iParam0)//Position - 0x1F361
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 2);
}

bool func_754(int iParam0)//Position - 0x1F38C
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 1);
}

int func_755(int iParam0, int iParam1, int iParam2)//Position - 0x1F3B7
{
	if (iParam0 == func_32() || !func_770(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_765(iParam0, iParam2);
		
		case 1:
			return func_763(iParam0, iParam2);
		
		case 3:
			return func_762(iParam0);
		
		case 2:
			return func_757(iParam0, iParam2);
		
		case 4:
			return func_756(iParam0);
		
		default:
	}
	return 0;
}

bool func_756(int iParam0)//Position - 0x1F433
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 6);
}

int func_757(int iParam0, int iParam1)//Position - 0x1F45E
{
	switch (iParam1)
	{
		case 10:
			return func_761(iParam0);
		
		case 11:
			return func_760(iParam0);
		
		case 12:
			return func_759(iParam0);
		
		case 13:
			return func_758(iParam0);
		
		default:
	}
	return 0;
}

bool func_758(int iParam0)//Position - 0x1F4AA
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 15);
}

bool func_759(int iParam0)//Position - 0x1F4D6
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 14);
}

bool func_760(int iParam0)//Position - 0x1F502
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 13);
}

bool func_761(int iParam0)//Position - 0x1F52E
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 12);
}

bool func_762(int iParam0)//Position - 0x1F55A
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 5);
}

int func_763(int iParam0, int iParam1)//Position - 0x1F585
{
	switch (iParam1)
	{
		case 5:
			return func_764(iParam0);
		
		case 6:
			return func_754(iParam0);
		
		case 7:
			return func_753(iParam0);
		
		case 8:
			return func_752(iParam0);
		
		case 9:
			return func_751(iParam0);
		
		default:
	}
	return 0;
}

bool func_764(int iParam0)//Position - 0x1F5E0
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 0);
}

int func_765(int iParam0, int iParam1)//Position - 0x1F60B
{
	switch (iParam1)
	{
		case 0:
			return func_769(iParam0);
		
		case 1:
			return func_768(iParam0);
		
		case 2:
			return func_767(iParam0);
		
		case 3:
			return func_766(iParam0);
		
		case 4:
			return func_774(iParam0);
		
		default:
	}
	return 0;
}

bool func_766(int iParam0)//Position - 0x1F666
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 10);
}

bool func_767(int iParam0)//Position - 0x1F692
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 9);
}

bool func_768(int iParam0)//Position - 0x1F6BE
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 8);
}

bool func_769(int iParam0)//Position - 0x1F6EA
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 7);
}

bool func_770(int iParam0)//Position - 0x1F715
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_771(int iParam0)//Position - 0x1F72A
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_755(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_755(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_755(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_755(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_772(int iParam0)//Position - 0x1F789
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1675228);
	func_773();
}

void func_773()//Position - 0x1F79D
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1675228 = { Var0 };
}

bool func_774(int iParam0)//Position - 0x1F890
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 31);
}

bool func_775(int iParam0)//Position - 0x1F8AD
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 0);
}

bool func_776(int iParam0)//Position - 0x1F8D8
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 19);
}

var func_777(int iParam0)//Position - 0x1F904
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

void func_778(int iParam0)//Position - 0x1F919
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1675094);
	func_779();
}

void func_779()//Position - 0x1F92D
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1675094 = { Var0 };
	Global_1675094.f_16 = 0;
}

bool func_780()//Position - 0x1FA3B
{
	return func_557(6156, -1, 0) != 0;
}

int func_781(int iParam0)//Position - 0x1FA4E
{
	if (iParam0 != func_32())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

bool func_782()//Position - 0x1FA74
{
	return func_557(6164, -1, 0) == 3;
}

bool func_783()//Position - 0x1FA87
{
	return func_557(6164, -1, 0) == 2;
}

bool func_784()//Position - 0x1FA9A
{
	return func_557(6164, -1, 0) == 1;
}

void func_785(int iParam0)//Position - 0x1FAAD
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1675040);
	func_786();
}

void func_786()//Position - 0x1FAC1
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1675040 = { Var0 };
	Global_1675040.f_23 = 0;
	Global_1675040.f_24 = 0;
	Global_1675040.f_16 = 0;
}

void func_787()//Position - 0x1FC0D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_798(12));
		func_797(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323611[iVar1 /*141*/].f_66 != 0 && func_789(Global_1323611[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2531497.f_896 != iVar1)
				{
					if (func_788(Global_1323611[iVar1 /*141*/].f_66))
					{
						if (Global_1323611[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323611[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1675040.f_38 = iVar3;
								break;
							
							case 1:
								Global_1675040.f_39 = iVar3;
								break;
							
							case 2:
								Global_1675040.f_40 = iVar3;
								break;
							
							case 3:
								Global_1675040.f_41 = iVar3;
								break;
							
							case 4:
								Global_1675040.f_42 = iVar3;
								break;
							
							case 5:
								Global_1675040.f_43 = iVar3;
								break;
							
							case 6:
								Global_1675040.f_44 = iVar3;
								break;
							
							case 7:
								Global_1675040.f_45 = iVar3;
								break;
							
							case 8:
								Global_1675040.f_46 = iVar3;
								break;
							
							case 9:
								Global_1675040.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_788(int iParam0)//Position - 0x1FD53
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_789(int iParam0, bool bParam1)//Position - 0x1FE8F
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
		if (!func_796())
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
		if ((((!func_795() && !func_794()) && !func_793()) && !func_792()) && !func_796())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_793())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_791(iParam0))
		{
			return 0;
		}
	}
	if (!func_790(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_790(int iParam0)//Position - 0x20010
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_586())
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

int func_791(int iParam0)//Position - 0x200DC
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

int func_792()//Position - 0x225A7
{
	return 0;
}

int func_793()//Position - 0x225B0
{
	return 1;
}

int func_794()//Position - 0x225B9
{
	return 1;
}

int func_795()//Position - 0x225C2
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_796()//Position - 0x225DB
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

void func_797(int iParam0, int iParam1, bool bParam2)//Position - 0x22696
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671745[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_798(int iParam0)//Position - 0x226D6
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_741(iParam0);
		return func_800(iVar0);
	}
	return (func_799(iParam0, -1) * iParam0);
}

int func_799(int iParam0, int iParam1)//Position - 0x22805
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_482(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_488(iParam1))
			{
				return 0;
			}
			else if (func_480(iParam1, -1))
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

int func_800(int iParam0)//Position - 0x22A38
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

var func_801()//Position - 0x22A69
{
	var uVar0;
	
	uVar0 = func_802();
	if (!func_993())
	{
		if (func_535() != func_32())
		{
			uVar0 = func_834(func_535()) + 1;
		}
	}
	return uVar0;
}

int func_802()//Position - 0x22A98
{
	return func_834(PLAYER::PLAYER_ID()) + 1;
}

int func_803()//Position - 0x22AAA
{
	return func_557(6113, -1, 0);
}

int func_804(int iParam0)//Position - 0x22ABB
{
	if (func_294(iParam0, 1))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_451;
	}
	return -1;
}

void func_805(int iParam0)//Position - 0x22ADF
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1674996);
	func_806();
}

void func_806()//Position - 0x22AF9
{
	struct<44> Var0;
	
	Global_1674996 = { Var0 };
	Global_1674996.f_23 = 0;
	Global_1674996.f_24 = 0;
	Global_1674996.f_16 = 0;
}

bool func_807(int iParam0)//Position - 0x22B22
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 12);
}

bool func_808(int iParam0)//Position - 0x22B3F
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 13);
}

int func_809(int iParam0)//Position - 0x22B5C
{
	if (iParam0 != func_32())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 12) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 13)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_810(int iParam0)//Position - 0x22BBD
{
	if (iParam0 != func_32())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_811(int iParam0)//Position - 0x22C1B
{
	if (iParam0 != func_32())
	{
		if (((((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 5)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_812(int iParam0, int iParam1)//Position - 0x22CC4
{
	if (iParam1 == func_32())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_813(int iParam0)//Position - 0x23018
{
	if (iParam0 != func_32())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 6) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 7)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_814(int iParam0)//Position - 0x23077
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 8);
}

bool func_815(int iParam0)//Position - 0x23094
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 7);
}

bool func_816(int iParam0)//Position - 0x230B0
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 9);
}

bool func_817(int iParam0)//Position - 0x230DA
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 11);
}

bool func_818(int iParam0)//Position - 0x23104
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 10);
}

int func_819(int iParam0, int iParam1)//Position - 0x2312E
{
	return func_557(func_820(iParam1), iParam0, 0);
}

int func_820(int iParam0)//Position - 0x23143
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_821(int iParam0)//Position - 0x2319D
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1674933);
	func_822();
}

void func_822()//Position - 0x231B7
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674933 = { Var0 };
	Global_1674933.f_24 = 0;
	Global_1674933.f_25 = 0;
	Global_1674933.f_17 = 0;
}

void func_823(int iParam0)//Position - 0x23321
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1674879);
	func_824();
}

void func_824()//Position - 0x2333B
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674879 = { Var0 };
	Global_1674879.f_29 = 0;
	Global_1674879.f_30 = 0;
	Global_1674879.f_17 = 0;
}

int func_825(int iParam0, int iParam1)//Position - 0x2346F
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_701(iParam0, iParam1, 2);
	bVar1 = func_701(iParam0, iParam1, 1);
	bVar2 = func_701(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_826(int iParam0, int iParam1)//Position - 0x23525
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (func_696(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_827(int iParam0, bool bParam1, bool bParam2)//Position - 0x23584
{
	int iVar0;
	int iVar1;
	
	if (func_418(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 19;
	}
	else if (func_478(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_326(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17667;
			iVar1 = 20;
		}
	}
	else if (func_429(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_745(func_535()), func_744(func_535()), func_842(), func_841(), iVar1, iVar0);
	}
	func_829(iVar0);
	func_828(iVar0);
	return iVar0;
}

void func_828(int iParam0)//Position - 0x23677
{
	int iVar0;
	
	iVar0 = func_557(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_490 = iVar0;
	func_555(3968, iVar0, -1, 1, 0);
}

void func_829(int iParam0)//Position - 0x236C5
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1628955[iVar0 /*614*/].f_11.f_489 = (Global_1628955[iVar0 /*614*/].f_11.f_489 + iParam0);
	if (Global_1628955[iVar0 /*614*/].f_11.f_489 < -9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
	else if (Global_1628955[iVar0 /*614*/].f_11.f_489 > 9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
}

int func_830(bool bParam0)//Position - 0x2373F
{
	if (bParam0)
	{
		return 0;
	}
	if (func_248(PLAYER::PLAYER_ID()) || func_300(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_831(var uParam0)//Position - 0x2376E
{
	STATS::_0x316DB59CD14C1774(&Global_1675140);
	func_832();
}

void func_832()//Position - 0x23782
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1675140 = { Var0 };
}

int func_833(int iParam0)//Position - 0x23863
{
	if (iParam0 != func_32())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_834(int iParam0)//Position - 0x23889
{
	if (func_87(iParam0) == func_32())
	{
		return 0;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_19;
}

int func_835()//Position - 0x238AF
{
	int iVar0;
	
	if (func_558())
	{
		return 4;
	}
	else if (func_993())
	{
		if (func_728(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_356(1))
	{
		iVar0 = func_804(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_536(1))
	{
		if (func_728(func_535()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_836(bool bParam0)//Position - 0x23922
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_837(bool bParam0)//Position - 0x23934
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_286(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_227(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_840(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_839(PLAYER::PLAYER_ID());
			if (func_547(func_548(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_839(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_838(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_838(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_838(int iParam0)//Position - 0x23A6C
{
	if (func_227(PLAYER::PLAYER_ID()) == 238 || func_227(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_498;
	}
	return -1;
}

int func_839(int iParam0)//Position - 0x23AA5
{
	if (func_227(PLAYER::PLAYER_ID()) == 237 || func_227(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_497;
	}
	return -1;
}

int func_840(int iParam0)//Position - 0x23ADE
{
	if (func_286(iParam0) == 236)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_496;
	}
	return -1;
}

int func_841()//Position - 0x23B03
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_842()//Position - 0x23B1F
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_843(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x23B3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_32();
	iVar1 = func_32();
	iVar2 = func_32();
	return func_844(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_844(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x23B76
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
	func_534(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_335(&(Var0.f_69), 4);
	return func_500(&Var0);
}

int func_845(int iParam0)//Position - 0x23C2A
{
	int iVar0;
	
	iVar0 = func_298(iParam0);
	if (iVar0 != -1)
	{
		return func_296(iVar0);
	}
	return 1;
}

char* func_846()//Position - 0x23C4A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_87(PLAYER::PLAYER_ID());
	if (iVar0 != func_32())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_199(iVar0, 28) || func_199(PLAYER::PLAYER_ID(), 28)) || func_540(iVar0)) && !func_539(iVar0))
			{
				return func_541(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_541(iVar0, 0);
			}
		}
		iVar1 = func_543(&(Global_1628955[iVar0 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
		{
			return func_541(iVar0, 0);
		}
		else
		{
			return iVar1;
		}
	}
	return "";
}

void func_847()//Position - 0x23CFB
{
	func_988();
	func_943();
	func_932();
	func_922();
	func_869();
	func_864();
	func_851();
	func_848();
}

void func_848()//Position - 0x23D23
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_773 != Local_208.f_5)
	{
		if (Local_208.f_34 != -1)
		{
			if (func_456())
			{
				if (func_401(PLAYER::PLAYER_ID()) >= 1)
				{
					if (Local_208.f_5 > 0)
					{
						if (Local_208.f_37 > -1)
						{
							iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_208.f_37);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
							{
								if (iVar0 != PLAYER::PLAYER_ID())
								{
									if (func_294(iVar0, 1))
									{
										iVar1 = func_298(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_296(iVar1);
											func_849("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_849("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_773 = Local_208.f_5;
		}
	}
}

int func_849(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x23DCB
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
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
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_647(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		else
		{
			Global_2507671 = { func_88(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
			{
				iVar17 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2507601.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_850(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar17, 0, Global_2507601, &Var1, Global_1314030, Global_1314031, Global_1314032);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar17, 0, Global_2507601, Global_1314030, Global_1314031, Global_1314032);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
		func_643(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_850(char* sParam0)//Position - 0x23F2C
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_851()//Position - 0x23F57
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_1009() && !func_410())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_474, 0))
	{
		return;
	}
	if (!func_456())
	{
		return;
	}
	iVar0 = func_401(PLAYER::PLAYER_ID());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_208.f_51)))
	{
		iVar1 = (func_11() - func_863(&(Local_208.f_51), 0, 0));
		iVar2 = (func_188() - Local_208.f_5);
		func_862(iVar1);
		if (iVar1 > 30000)
		{
			func_852(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_852(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_852(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_852(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x24013
{
	char* sVar0;
	
	if (func_860(0) == 0)
	{
		return;
	}
	func_859();
	func_856(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_628(sParam4))
	{
		sVar0 = sParam4;
	}
	func_853(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_853(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x2407A
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_855(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_854(7, iVar0);
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

void func_854(int iParam0, int iParam1)//Position - 0x241D7
{
	MISC::SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_855(int iParam0, int iParam1)//Position - 0x241F0
{
	return MISC::IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

void func_856(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x24209
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
			if (func_855(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_854(6, iVar0);
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
		if (iParam15 == 5 && func_858())
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
			if (func_857())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_857()//Position - 0x2447A
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

int func_858()//Position - 0x2449E
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_859()//Position - 0x244DC
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2460544 = 1;
}

int func_860(bool bParam0)//Position - 0x244FF
{
	if (func_861())
	{
		return 0;
	}
	if (func_384())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1119(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_861()//Position - 0x24536
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_862(int iParam0)//Position - 0x24548
{
	if (MISC::IS_BIT_SET(iLocal_462, 8))
	{
		func_200();
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_462, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_462, 15);
				MISC::SET_BIT(&iLocal_462, 9);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_462, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!MISC::IS_BIT_SET(iLocal_462, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
					MISC::SET_BIT(&iLocal_462, 11);
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_462, 14))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
				{
					MISC::SET_BIT(&iLocal_462, 14);
				}
			}
			if (MISC::IS_BIT_SET(iLocal_462, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!MISC::IS_BIT_SET(iLocal_462, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						MISC::SET_BIT(&iLocal_462, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							MISC::CLEAR_BIT(&iLocal_462, 9);
						}
					}
				}
			}
		}
	}
}

int func_863(var uParam0, bool bParam1, bool bParam2)//Position - 0x2465E
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

void func_864()//Position - 0x246A5
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_3))
		{
			if (!MISC::IS_BIT_SET(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_208.f_3), PLAYER::PLAYER_PED_ID()))
				{
					MISC::SET_BIT(&(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
					iLocal_771 = AUDIO::GET_SOUND_ID();
					if (func_356(1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_771, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", false);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_771, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", false);
					}
					Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_464 != Local_208.f_5)
	{
		if (MISC::IS_BIT_SET(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
		{
			MISC::CLEAR_BIT(&(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
		}
		if (MISC::IS_BIT_SET(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_208.f_3))
			{
				iVar0 = NETWORK::NET_TO_ENT(Local_208.f_3);
				ENTITY::DELETE_ENTITY(&iVar0);
				MISC::CLEAR_BIT(&(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_208.f_3);
			}
		}
		else
		{
			iLocal_464 = Local_208.f_5;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_3))
	{
		if (func_993())
		{
			if (func_1009())
			{
				func_866();
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_461, 13))
		{
			if (!func_1009() || !func_993())
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_208.f_3), true, 1);
				MISC::SET_BIT(&iLocal_461, 13);
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_461, 3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_208.f_3), 1200);
			MISC::SET_BIT(&iLocal_461, 3);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_461, 13))
		{
			MISC::CLEAR_BIT(&iLocal_461, 13);
		}
		if (MISC::IS_BIT_SET(iLocal_461, 3))
		{
			MISC::CLEAR_BIT(&iLocal_461, 3);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_466))
		{
			HUD::REMOVE_BLIP(&iLocal_466);
		}
	}
	func_865();
}

void func_865()//Position - 0x2487D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!func_456())
	{
		return;
	}
	if (func_401(PLAYER::PLAYER_ID()) >= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_208.f_3) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_208.f_3), 0))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_208.f_3)))
			{
				HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
				GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_208.f_3), true) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
		}
	}
}

void func_866()//Position - 0x24916
{
	int iVar0;
	
	iVar0 = func_401(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_466))
		{
			HUD::REMOVE_BLIP(&iLocal_466);
		}
		return;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_466))
	{
		return;
	}
	MISC::CLEAR_BIT(&iLocal_461, 11);
	iLocal_466 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_208.f_3));
	HUD::SET_BLIP_PRIORITY(iLocal_466, 12);
	HUD::SET_BLIP_SPRITE(iLocal_466, 459);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_466, "GB_SGHT_BLP");
	HUD::SET_BLIP_ROUTE(iLocal_466, true);
	HUD::SET_BLIP_SCALE(iLocal_466, Global_262145.f_12355);
	if (func_1009())
	{
		func_867(&iLocal_466, 18);
	}
	HUD::SHOW_HEIGHT_ON_BLIP(iLocal_466, true);
	iLocal_772 = AUDIO::GET_SOUND_ID();
	if (func_356(1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_772, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", false);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_772, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", false);
	}
}

void func_867(int iParam0, int iParam1)//Position - 0x249E5
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_868(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_868(int iParam0)//Position - 0x24A0B
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

void func_869()//Position - 0x24C73
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() != Local_208.f_33)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_3))
	{
		if (iLocal_768 != -1)
		{
			iLocal_768 = -1;
		}
		if (MISC::IS_BIT_SET(Global_4269615, 20))
		{
			MISC::CLEAR_BIT(&Global_4269615, 20);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(Global_4269615, 20))
	{
		if (!MISC::IS_BIT_SET(Global_4269615, 21))
		{
			if (iLocal_768 < 0)
			{
				MISC::SET_BIT(&Global_4269615, 20);
			}
		}
	}
	if (iLocal_769 == -1)
	{
		iLocal_769 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	if (iLocal_768 < 0)
	{
		if (MISC::IS_BIT_SET(Global_4269615, 21))
		{
			MISC::CLEAR_BIT(&Global_4269615, 21);
			iLocal_768 = 0;
		}
	}
	func_870();
}

void func_870()//Position - 0x24D1C
{
	bool bVar0;
	
	if (!MISC::IS_BIT_SET(iLocal_461, 4))
	{
		if (iLocal_768 >= 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				MISC::CLEAR_BIT(&Local_474, 0);
				iLocal_768 = -1;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					func_921(1);
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_920(&Local_474);
		func_919(&Local_474);
		MISC::CLEAR_BIT(&iLocal_461, 4);
	}
	switch (iLocal_768)
	{
		case 0:
			func_918(1);
			HUD::REQUEST_ADDITIONAL_TEXT("HACK", 3);
			iLocal_768++;
			break;
		
		case 1:
			if (func_917(1) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				MISC::SET_BIT(&Local_474, 0);
				MISC::SET_BIT(&(Local_474.f_1), 0);
				func_449();
				iLocal_770 = 10;
				if (iLocal_769 == 2)
				{
					Local_474.f_22 = 1;
				}
				else if (iLocal_769 == 1)
				{
					Local_474.f_22 = 0;
					iLocal_770 = 77;
				}
				else if (iLocal_769 == 0)
				{
					iLocal_770 = 50;
					Local_474.f_22 = 0;
				}
				func_908(PLAYER::PLAYER_ID(), 0, 66048, 0);
				iLocal_768++;
			}
			else
			{
				if (!func_917(1))
				{
				}
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
				{
				}
			}
			break;
		
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			if (!func_204(0))
			{
				func_231(0);
			}
			if (iLocal_769 == 0)
			{
				func_886(&Local_474, 5, 5, iLocal_770, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_885(&Local_474, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_769 == 1)
			{
				func_886(&Local_474, 5, 5, iLocal_770, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_884(&Local_474, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_769 == 2)
			{
				func_886(&Local_474, 5, 5, iLocal_770, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_871(&Local_474, 1))
				{
					bVar0 = true;
				}
			}
			if (MISC::IS_BIT_SET(Local_474.f_1, 1))
			{
				MISC::CLEAR_BIT(&Local_474, 0);
				func_920(&Local_474);
				func_908(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (func_204(0))
				{
					func_203(0);
				}
				iLocal_768 = -1;
			}
			else if (bVar0)
			{
				MISC::CLEAR_BIT(&Local_474, 0);
				func_920(&Local_474);
				Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
				MISC::SET_BIT(&(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
				iLocal_769++;
				if (iLocal_769 >= 3)
				{
					iLocal_769 = 0;
				}
				if (func_204(0))
				{
					func_203(0);
				}
				func_908(PLAYER::PLAYER_ID(), 1, 0, 0);
				iLocal_768++;
			}
			break;
	}
}

int func_871(int iParam0, bool bParam1)//Position - 0x24FBB
{
	if (MISC::IS_BIT_SET(*iParam0, 26))
	{
		if (bParam1)
		{
			func_872(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_872(int iParam0, bool bParam1, bool bParam2)//Position - 0x24FE8
{
	MISC::CLEAR_BIT(iParam0, 0);
	MISC::SET_BIT(iParam0, 12);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	if (bParam2)
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		}
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	HUD::CLEAR_HELP(1);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CAM::DESTROY_CAM(iLocal_77, 0);
	func_876(0);
	func_875();
	GRAPHICS::_0x9B079E5221D984D3(0);
	func_874(iParam0, 1, 1, 0);
	func_873(0, 1, 1, 0);
}

int func_873(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x25068
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_874(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2509B
{
	int iVar0;
	
	iVar0 = 0;
	if (!bParam3)
	{
		iVar0 = 4;
		while (iVar0 <= 0)
		{
			if (iLocal_68[iVar0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[iVar0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_68[iVar0]);
					iLocal_68[iVar0] = -1;
				}
			}
			iVar0++;
		}
		if (iParam0->f_20 > -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_20))
			{
				AUDIO::STOP_SOUND(iParam0->f_20);
				AUDIO::RELEASE_SOUND_ID(iParam0->f_20);
				iParam0->f_20 = -1;
			}
		}
	}
	MISC::CLEAR_BIT(iParam0, 25);
	MISC::CLEAR_BIT(iParam0, 5);
	if (iParam2 == 1)
	{
		MISC::CLEAR_BIT(iParam0, 12);
		MISC::CLEAR_BIT(iParam0, 9);
		MISC::CLEAR_BIT(iParam0, 18);
		MISC::CLEAR_BIT(iParam0, 27);
		MISC::CLEAR_BIT(iParam0, 28);
	}
	iParam0->f_1 = 0;
	iParam0->f_7 = iParam0->f_6;
	iLocal_80 = 0;
	if (bParam1)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_79);
	}
	MISC::CLEAR_BIT(iParam0, 29);
	func_873(0, 1, 1, 0);
}

void func_875()//Position - 0x25183
{
	int iVar0;
	
	Global_1373500.f_1047 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1373500.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2531497.f_4532 = 1;
}

void func_876(bool bParam0)//Position - 0x251B9
{
	if (bParam0)
	{
		func_883();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_882(0))
		{
			func_877(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_877(int iParam0)//Position - 0x2521C
{
	if (func_881())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_880())
		{
			func_879(1, 1);
		}
		else
		{
			func_879(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
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
	if (!func_878())
	{
		Global_19486.f_1 = 3;
	}
}

int func_878()//Position - 0x252A6
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_879(bool bParam0, bool bParam1)//Position - 0x252CD
{
	if (bParam0)
	{
		if (func_882(0))
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

bool func_880()//Position - 0x25341
{
	return MISC::IS_BIT_SET(Global_1687880, 5);
}

bool func_881()//Position - 0x25352
{
	return MISC::IS_BIT_SET(Global_1687880, 19);
}

int func_882(int iParam0)//Position - 0x25364
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

void func_883()//Position - 0x253BE
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

int func_884(int iParam0, bool bParam1)//Position - 0x253E7
{
	if (MISC::IS_BIT_SET(*iParam0, 9))
	{
		if (bParam1)
		{
			func_872(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_885(int iParam0, bool bParam1)//Position - 0x25414
{
	if (MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (bParam1)
		{
			func_872(iParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_886(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x25441
{
	if (MISC::IS_BIT_SET(*iParam0, 0))
	{
		func_887(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16, bParam17, bParam18);
	}
}

void func_887(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)//Position - 0x2547F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar16;
	int iVar17;
	
	PAD::_0x7F4724035FDCA1DD(0);
	PAD::_0x7F4724035FDCA1DD(2);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	if (bParam17)
	{
		func_907(1);
	}
	func_906(4, -1);
	func_905(0);
	if (func_917(bParam16))
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (HUD::GET_PAUSE_MENU_STATE() == 0 && !HUD::IS_PAUSE_MENU_ACTIVE())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_79, 255, 255, 255, 0, 0);
			}
		}
		if (PAD::_IS_INPUT_JUST_DISABLED(2))
		{
			iParam0->f_290 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
			iParam0->f_291 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
			if (iParam0->f_292 != iParam0->f_290 || iParam0->f_293 != iParam0->f_291)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_CURSOR");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam0->f_290);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam0->f_291);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iParam0->f_292 = iParam0->f_290;
			iParam0->f_293 = iParam0->f_291;
		}
		else
		{
			func_904(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((SYSTEM::TO_FLOAT(iVar2) * 8f) * SYSTEM::TIMESTEP());
			fVar7 = ((SYSTEM::TO_FLOAT(iVar3) * 8f) * SYSTEM::TIMESTEP());
			if (iLocal_80 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "MOVE_CURSOR");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar7);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
		if (iLocal_80 > 4)
		{
			if (PAD::_IS_INPUT_JUST_DISABLED(2))
			{
				iParam0->f_290 = PAD::GET_CONTROL_NORMAL(2, 239);
				iParam0->f_291 = PAD::GET_CONTROL_NORMAL(2, 240);
				if (MISC::IS_ORBIS_VERSION())
				{
					if (iParam0->f_292 != iParam0->f_290)
					{
						if (iParam0->f_290 < 0.49f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (iParam0->f_290 > 0.51f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
				}
				iParam0->f_292 = iParam0->f_290;
				iParam0->f_293 = iParam0->f_291;
			}
			if (PAD::_IS_INPUT_DISABLED(2))
			{
				fVar8 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 1);
				fVar9 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 2);
				bVar10 = false;
				fLocal_67 = (fLocal_67 + SYSTEM::TIMESTEP());
				fLocal_74 = (fLocal_74 + fVar8);
				fLocal_75 = (fLocal_75 + fVar9);
				fLocal_76 = (fLocal_76 + 1f);
				if (fLocal_67 > 0.15f)
				{
					fLocal_67 = 0f;
					fLocal_74 = (fLocal_74 / fLocal_76);
					fLocal_75 = (fLocal_75 / fLocal_76);
					if (MISC::ABSF(fLocal_75) < 0.2f)
					{
						if (fLocal_74 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_74 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (MISC::ABSF(fLocal_74) < 0.2f)
					{
						if (fLocal_75 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_75 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (bVar10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					}
					fLocal_74 = 0f;
					fLocal_75 = 0f;
					fLocal_76 = 0f;
				}
			}
			func_903(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (MISC::ABSI(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_20))
						{
							if (iLocal_80 != 8)
							{
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_20, "HACKING_MOVE_CURSOR", 0, true);
							}
						}
					}
				}
				iVar16++;
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 195) || PAD::IS_CONTROL_JUST_PRESSED(2, 196)) || PAD::IS_CONTROL_PRESSED(2, 195)) || PAD::IS_CONTROL_PRESSED(2, 196))
			{
			}
			if (PAD::_IS_INPUT_DISABLED(2))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 32) || PAD::IS_CONTROL_JUST_PRESSED(2, 172))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 33) || PAD::IS_CONTROL_JUST_PRESSED(2, 173))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 34) || PAD::IS_CONTROL_JUST_PRESSED(2, 174))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 35) || PAD::IS_CONTROL_JUST_PRESSED(2, 175))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, true);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (bParam12)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
				iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				if (iVar0 == 6)
				{
					func_902(iParam0);
				}
			}
		}
		func_901();
	}
	if (iLocal_80 == 5 || iLocal_80 == 6)
	{
		if (iLocal_64)
		{
			func_900((iParam15 - (MISC::GET_GAME_TIMER() - iLocal_63)), &iLocal_60, &iLocal_61, &iLocal_62);
			if ((iLocal_60 >= 0 && iLocal_61 >= 0) && iLocal_62 >= 0)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432, -1082130432);
			}
			else
			{
				iLocal_60 = 0;
				iLocal_61 = 0;
				iLocal_62 = 0;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_80 == 5)
	{
		if (func_899(&iLocal_81, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", iParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_81 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (iLocal_80 == 6)
	{
		if (func_899(&iLocal_81, (10000 / iParam4)))
		{
			if (iParam0->f_9 > 20f)
			{
				iParam0->f_9 = (iParam0->f_9 - 1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
				iLocal_81 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_1, 0))
	{
		if (iLocal_80 == 2)
		{
			iLocal_80 = 3;
		}
		else if (iLocal_80 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_80 == 4)
		{
			if (bParam8)
			{
				iVar0 = 82;
			}
			else if (bParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_80)
	{
		case 0:
			if (!MISC::IS_BIT_SET(*iParam0, 29))
			{
				func_898(iParam0, iParam14);
			}
			func_918(1);
			GRAPHICS::_0x9B079E5221D984D3(1);
			iParam0->f_20 = AUDIO::GET_SOUND_ID();
			iLocal_154 = 0;
			iLocal_155 = 0;
			iParam0->f_23 = 0;
			iLocal_80++;
			break;
		
		case 1:
			iVar17 = 0;
			while (iVar17 < 5)
			{
				iLocal_68[iVar17] = -1;
				iVar17++;
			}
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), SYSTEM::TO_FLOAT(iParam2), -1082130432, -1082130432, -1082130432);
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			iParam0->f_7 = iParam1;
			iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
			MISC::CLEAR_BIT(iParam0, 1);
			fLocal_74 = 0f;
			fLocal_75 = 0f;
			fLocal_76 = 0f;
			iLocal_68[0] = AUDIO::GET_SOUND_ID();
			iLocal_68[1] = AUDIO::GET_SOUND_ID();
			func_873(1, 0, 1, 0);
			if (iParam0->f_22)
			{
				iLocal_80 = 8;
			}
			else
			{
				iLocal_80++;
			}
			break;
		
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					if (!func_424("H_EXIT_PROMPT"))
					{
						if (!func_424("HACKOBJ1"))
						{
							func_897("HACKOBJ1");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (PAD::_IS_INPUT_JUST_DISABLED(2))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
					iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				}
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_424("H_EXIT_PROMPT"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					iLocal_65 = 0;
					iLocal_80++;
				}
			}
			if (iLocal_83 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_896(0, "");
					}
				}
			}
			if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
			{
				iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				if (iVar0 == 80)
				{
					if (iLocal_83 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
						func_896(1, "ACCESSD");
					}
				}
			}
			break;
		
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_80 == 3)
				{
					if (iLocal_65 == 0)
					{
						if (!func_424("HACKOBJ2"))
						{
							func_897("HACKOBJ2");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_83 == 0)
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_BACK");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
							if (iParam7 == 1)
							{
								if (func_424("HACKOBJ2"))
								{
									HUD::CLEAR_HELP(1);
								}
								func_897("H_EXIT_PROMPT");
								iLocal_65 = 0;
								iLocal_80 = (iLocal_80 - 1);
							}
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_896(0, "");
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
					func_896(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_65 = 0;
				iLocal_80++;
			}
			break;
		
		case 4:
			if (iLocal_68[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iLocal_68[0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[0]);
					iLocal_68[0] = -1;
				}
			}
			if (iLocal_68[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_80 == 4)
				{
					if (bParam9 == 1)
					{
						if (!MISC::IS_BIT_SET(*iParam0, 5))
						{
							if (iLocal_65 == 0)
							{
								if (!func_424("HACKOBJ5"))
								{
									func_897("HACKOBJ5");
									iLocal_65 = 1;
								}
							}
						}
					}
					else if (!MISC::IS_BIT_SET(*iParam0, 18))
					{
						if (iLocal_65 == 0)
						{
							if (!func_424("HACKOBJ3"))
							{
								func_897("HACKOBJ3");
								iLocal_65 = 1;
							}
						}
					}
					else if (!MISC::IS_BIT_SET(*iParam0, 5))
					{
						if (iLocal_65 == 0)
						{
							if (!func_424("HACKOBJ5"))
							{
								func_897("HACKOBJ5");
								iLocal_65 = 1;
							}
						}
					}
					else if (iLocal_65 == 1)
					{
						if (func_424("HACKOBJ5"))
						{
							HUD::CLEAR_HELP(1);
							iLocal_65 = 0;
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_83 == 0)
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
					{
						if (PAD::_IS_INPUT_JUST_DISABLED(2))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
								iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
							}
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_BACK");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						if (iParam7 == 1)
						{
							if (func_424("HACKOBJ5") || func_424("HACKOBJ3"))
							{
								HUD::CLEAR_HELP(1);
							}
							iLocal_65 = 0;
							iLocal_80 = (iLocal_80 - 1);
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_896(0, "");
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
					func_896(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_81 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						if (!MISC::IS_BIT_SET(iParam0->f_1, 0))
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", iParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", iParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_80++;
					}
					else if (!MISC::IS_BIT_SET(*iParam0, 18))
					{
						iLocal_81 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", iParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
						iLocal_80++;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_896(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && MISC::IS_BIT_SET(*iParam0, 9))
							{
								func_896(1, "TRYDL");
							}
							else
							{
								func_896(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_896(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && MISC::IS_BIT_SET(*iParam0, 9))
						{
							func_896(1, "TRYDL");
						}
						else
						{
							func_896(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (bParam8 == 0)
				{
					if (bParam9 == 1)
					{
						iLocal_81 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						if (!MISC::IS_BIT_SET(iParam0->f_1, 0))
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_895(iParam0, bParam18);
						}
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iLocal_79, "SET_ROULETTE_WORD", &(iParam0->f_14), 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_80 = 6;
					}
					else if ((!bParam11 || MISC::IS_BIT_SET(*iParam0, 18)) && !MISC::IS_BIT_SET(*iParam0, 9))
					{
						iLocal_81 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 0f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 1f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 2f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 3f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 4f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 5f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 6f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_COLUMN_SPEED", 7f, iParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_63 = MISC::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_895(iParam0, bParam18);
						}
						if (func_424("HACKOBJ5"))
						{
							HUD::CLEAR_HELP(1);
						}
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iLocal_79, "SET_ROULETTE_WORD", &(iParam0->f_14), 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
						iLocal_80 = 6;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
							{
								if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_896(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
							if (bParam13 && MISC::IS_BIT_SET(*iParam0, 18))
							{
								func_896(1, "TRYDL");
							}
							else
							{
								func_896(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_896(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
						if (bParam13 && MISC::IS_BIT_SET(*iParam0, 18))
						{
							func_896(1, "TRYDL");
						}
						else
						{
							func_896(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (MISC::IS_BIT_SET(*iParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (MISC::IS_BIT_SET(*iParam0, 18) && MISC::IS_BIT_SET(*iParam0, 9))
						{
							if (!MISC::IS_BIT_SET(*iParam0, 28))
							{
								MISC::SET_BIT(iParam0, 28);
								iLocal_80 = 8;
							}
						}
						else
						{
							if (iLocal_83 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_82) > 500)
								{
									if (((MISC::GET_GAME_TIMER() - iLocal_82) > 2500 || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
									{
										func_896(0, "");
									}
								}
							}
							if (iLocal_83 == 0)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
								if (MISC::IS_BIT_SET(*iParam0, 18))
								{
									func_896(1, "TRYBRUTE");
								}
								else
								{
									func_896(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_894("H_USE_PC6", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_894("H_USE_PC7", -1);
					iLocal_66 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!MISC::IS_BIT_SET(iParam0->f_1, 1))
				{
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							iParam0->f_7 = iParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
							if (iLocal_68[1] != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
								{
									AUDIO::STOP_SOUND(iLocal_68[1]);
									iLocal_68[1] = -1;
								}
							}
							if (iLocal_68[0] != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
								{
									AUDIO::STOP_SOUND(iLocal_68[0]);
									iLocal_68[0] = -1;
								}
							}
							if (!MISC::IS_BIT_SET(iParam0->f_1, 0))
							{
								iLocal_80 = 4;
							}
							else
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				}
			}
			if (iVar0 == 85)
			{
				if (iParam0->f_7 > 1)
				{
					iParam0->f_7 = (iParam0->f_7 - 1);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_7), -1082130432, -1082130432, -1082130432, -1082130432);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
				}
				else
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
					}
					MISC::SET_BIT(iParam0, 25);
					iLocal_64 = 0;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				iParam0->f_7 = iParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_68[0] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, true);
				MISC::SET_BIT(iParam0, 25);
				iLocal_64 = 1;
			}
			if (iVar0 == 91)
			{
				iParam0->f_7 = iParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
				if (iLocal_68[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				MISC::SET_BIT(iParam0, 25);
				iLocal_80 = 4;
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					MISC::SET_BIT(iParam0, 25);
					iParam0->f_7 = iParam1;
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = 0;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					if (iLocal_68[0] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
						{
							AUDIO::STOP_SOUND(iLocal_68[0]);
							iLocal_68[0] = -1;
						}
					}
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_81 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 18);
				iLocal_64 = 0;
				iLocal_65 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, true);
				if (iLocal_68[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_894("H_USE_PC8", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_894("H_USE_PC9", -1);
					iLocal_66 = 0;
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (!MISC::IS_BIT_SET(iParam0->f_1, 1))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							iParam0->f_7 = iParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
							{
								AUDIO::STOP_SOUND(iLocal_68[0]);
							}
							if (!MISC::IS_BIT_SET(iParam0->f_1, 0))
							{
								iLocal_80 = 4;
							}
							else
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
				if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
							iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_INPUT_EVENT_SELECT");
						iLocal_78 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
				}
				if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_78))
				{
					iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_78);
				}
			}
			if (iVar0 == 86)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, true);
			}
			if (iVar0 == 92)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, true);
			}
			if (MISC::IS_BIT_SET(*iParam0, 23))
			{
				if (func_899(&(iParam0->f_10), 500))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "RESET_ROULETTE");
					MISC::CLEAR_BIT(iParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (iParam0->f_7 > 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, true);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "STOP_ROULETTE");
					iParam0->f_10 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(iParam0, 23);
					MISC::SET_BIT(iParam0, 31);
					if (func_238() == 0)
					{
						iParam0->f_7 = (iParam0->f_7 - 1);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam0->f_7), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					MISC::SET_BIT(iParam0, 25);
					MISC::SET_BIT(iParam0, 31);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					iParam0->f_7 = iParam1;
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					if (iLocal_68[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					if (func_238() == 0)
					{
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (MISC::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					iParam0->f_7 = iParam1;
					MISC::SET_BIT(iParam0, 25);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = 0;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, true);
					HUD::CLEAR_HELP(1);
					if (iLocal_68[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				iParam0->f_7 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				iParam0->f_9 = SYSTEM::TO_FLOAT(iParam3);
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_68[1] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, true);
				iLocal_64 = 1;
			}
			if (iVar0 == 89)
			{
				iParam0->f_7 = iParam1;
				MISC::SET_BIT(iParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
				if (iLocal_68[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 4;
			}
			if (iVar0 == 86)
			{
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_81 = MISC::GET_GAME_TIMER();
				MISC::SET_BIT(iParam0, 9);
				if (bParam19)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", "DLC_GR_Steal_Railguns_Sounds", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_SUCCESS", 0, true);
				}
				if (iLocal_68[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (MISC::IS_BIT_SET(*iParam0, 9) && MISC::IS_BIT_SET(*iParam0, 18))
				{
					if (iLocal_154 == 0)
					{
						if (!func_424("HACKOBJ7"))
						{
							func_897("HACKOBJ7");
							iLocal_154 = 1;
						}
					}
				}
				if (((func_424("H_USE_PC6") || func_424("H_USE_PC7")) || func_424("H_USE_PC8")) || func_424("H_USE_PC9"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if ((MISC::IS_BIT_SET(*iParam0, 9) && MISC::IS_BIT_SET(*iParam0, 18)) && (!bParam13 || (bParam13 && MISC::IS_BIT_SET(*iParam0, 28))))
			{
				if (func_424("HACKOBJ7"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (!iLocal_155)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "unlocked_bleep", PLAYER::PLAYER_PED_ID(), "HACKING_DOOR_UNLOCK_SOUNDS", false, 0);
					iLocal_155 = 1;
				}
				if (func_899(&iLocal_81, 3000))
				{
					MISC::CLEAR_BIT(iParam0, 0);
					MISC::SET_BIT(iParam0, 12);
					GRAPHICS::_0x9B079E5221D984D3(0);
				}
			}
			else
			{
				if (((bParam13 && !MISC::IS_BIT_SET(*iParam0, 27)) && MISC::IS_BIT_SET(*iParam0, 9)) && MISC::IS_BIT_SET(*iParam0, 18))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "OPEN_DOWNLOAD");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::SET_BIT(iParam0, 27);
				}
				if (func_899(&iLocal_81, 2000))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_79, "CLOSE_APP");
					iLocal_80 = 4;
				}
			}
			break;
		
		case 8:
			func_888(iParam0);
			break;
	}
}

void func_888(int iParam0)//Position - 0x27511
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0->f_23 > 0)
	{
		if (MISC::IS_BIT_SET(*iParam0, 22))
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_84, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_105[0 /*4*/] == 1 && Local_105[1 /*4*/] == 1) && Local_105[2 /*4*/] == 1) && Local_105[3 /*4*/] == 1) && Local_105[4 /*4*/] == 1) && Local_105[5 /*4*/] == 1) && Local_105[6 /*4*/] == 1) && Local_105[7 /*4*/] == 1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
		if (func_424("H1_HNG"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (func_424("H1_HNG_KM"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		MISC::SET_BIT(iParam0, 26);
	}
	else if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (!func_424("H1_HNG_KM"))
		{
			func_897("H1_HNG_KM");
		}
	}
	else if (!func_424("H1_HNG"))
	{
		func_897("H1_HNG");
	}
	switch (iParam0->f_23)
	{
		case 0:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("hackingNG", false);
			MISC::CLEAR_BIT(iParam0, 22);
			func_893();
			iLocal_143 = MISC::GET_GAME_TIMER();
			Local_103 = 0;
			MISC::CLEAR_BIT(&iLocal_153, 0);
			MISC::CLEAR_BIT(&iLocal_153, 1);
			MISC::CLEAR_BIT(&iLocal_153, 2);
			MISC::CLEAR_BIT(&iLocal_153, 3);
			MISC::CLEAR_BIT(&iLocal_153, 4);
			MISC::CLEAR_BIT(&iLocal_153, 5);
			MISC::CLEAR_BIT(&iLocal_153, 6);
			MISC::CLEAR_BIT(&iLocal_153, 7);
			iParam0->f_23++;
			break;
		
		case 1:
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				MISC::SET_BIT(iParam0, 22);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_CURSOR_VISIBILITY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iParam0->f_23++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_105[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_105[iVar0 /*4*/].f_2 < 1f)
					{
						Local_105[iVar0 /*4*/].f_2 = (Local_105[iVar0 /*4*/].f_2 + ((Local_105[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_142));
					}
					else
					{
						Local_105[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_105[iVar0 /*4*/].f_2 > 0f)
				{
					Local_105[iVar0 /*4*/].f_2 = (Local_105[iVar0 /*4*/].f_2 - ((Local_105[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_142));
				}
				else
				{
					Local_105[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_105[iVar0 /*4*/] == 0)
				{
					Local_86[iVar0 /*2*/].f_1 = func_891(0.744f, 0.4f, Local_105[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_105[iVar0 /*4*/] == 0)
				{
					if (Local_103 == iVar0)
					{
						if (!MISC::IS_BIT_SET(iLocal_153, iVar0))
						{
							iLocal_144[iVar0] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_144[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
							MISC::SET_BIT(&iLocal_153, iVar0);
						}
						else
						{
							if (Local_105[iVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_138 = (2f * (1f - Local_105[iVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_138 = (2f * Local_105[iVar0 /*4*/].f_2);
							}
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_144[iVar0], "PinMovementY", fLocal_138);
						}
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_153, iVar0))
				{
					AUDIO::STOP_SOUND(iLocal_144[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_144[iVar0]);
					MISC::CLEAR_BIT(&iLocal_153, iVar0);
					iLocal_144[iVar0] = -1;
				}
				iVar0++;
			}
			if (func_890(Local_103))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				if (func_899(&iLocal_143, 300))
				{
					if (func_889(Local_103))
					{
						Local_105[Local_103 /*4*/] = 1;
						Local_86[Local_103 /*2*/].f_1 = 0.572f;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						if (Local_103 != 7)
						{
							Local_103++;
						}
					}
					else
					{
						if (Local_103 != 0)
						{
							if (MISC::IS_BIT_SET(iLocal_153, Local_103))
							{
								AUDIO::STOP_SOUND(iLocal_144[Local_103]);
								AUDIO::RELEASE_SOUND_ID(iLocal_144[Local_103]);
								MISC::CLEAR_BIT(&iLocal_153, Local_103);
								iLocal_144[Local_103] = -1;
							}
							Local_105[(Local_103 - 1) /*4*/] = 0;
							Local_103 = (Local_103 - 1);
						}
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							GRAPHICS::DRAW_RECT(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_143 = MISC::GET_GAME_TIMER();
						PAD::SET_PAD_SHAKE(0, 100, 100);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", true);
						Local_103.f_1 = 1;
					}
				}
				else
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_84, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_143 = MISC::GET_GAME_TIMER();
					PAD::SET_PAD_SHAKE(0, 100, 100);
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (Local_103 == 0)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 1)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 2)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 3)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 4)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 5)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 6)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 7)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (MISC::IS_BIT_SET(iParam0->f_1, 0))
				{
					if (!MISC::IS_BIT_SET(iParam0->f_1, 1))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							MISC::SET_BIT(&(iParam0->f_1), 1);
							HUD::CLEAR_HELP(1);
						}
					}
				}
			}
			break;
	}
}

int func_889(int iParam0)//Position - 0x27CC5
{
	if (Local_86[iParam0 /*2*/].f_1 >= fLocal_140 && Local_86[iParam0 /*2*/].f_1 <= fLocal_139)
	{
		return 1;
	}
	return 0;
}

int func_890(int iParam0)//Position - 0x27CF0
{
	if (Local_86[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_891(float fParam0, float fParam1, float fParam2)//Position - 0x27D0E
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_892((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_892(float fParam0)//Position - 0x27D3D
{
	return (fParam0 * 57.29578f);
}

void func_893()//Position - 0x27D4D
{
	fLocal_139 = 0.6f;
	fLocal_140 = 0.53f;
	Local_105[0 /*4*/].f_1 = (0.02f * fLocal_141);
	Local_105[1 /*4*/].f_1 = (0.025f * fLocal_141);
	Local_105[2 /*4*/].f_1 = (0.03f * fLocal_141);
	Local_105[3 /*4*/].f_1 = (0.035f * fLocal_141);
	Local_105[4 /*4*/].f_1 = (0.04f * fLocal_141);
	Local_105[5 /*4*/].f_1 = (0.045f * fLocal_141);
	Local_105[6 /*4*/].f_1 = (0.048f * fLocal_141);
	Local_105[7 /*4*/].f_1 = (0.05f * fLocal_141);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
	Local_84 = 0.5f;
	Local_84.f_1 = 0.5f;
	Local_86[0 /*2*/] = 0.35f;
	Local_86[0 /*2*/].f_1 = 0.4f;
	Local_86[1 /*2*/] = 0.39f;
	Local_86[1 /*2*/].f_1 = 0.4f;
	Local_86[2 /*2*/] = 0.43f;
	Local_86[2 /*2*/].f_1 = 0.4f;
	Local_86[3 /*2*/] = 0.47f;
	Local_86[3 /*2*/].f_1 = 0.4f;
	Local_86[4 /*2*/] = 0.51f;
	Local_86[4 /*2*/].f_1 = 0.74f;
	Local_86[5 /*2*/] = 0.55f;
	Local_86[5 /*2*/].f_1 = 0.74f;
	Local_86[6 /*2*/] = 0.59f;
	Local_86[6 /*2*/].f_1 = 0.74f;
	Local_86[7 /*2*/] = 0.63f;
	Local_86[7 /*2*/].f_1 = 0.74f;
}

void func_894(char[4] cParam0, int iParam1)//Position - 0x27ECB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_895(int iParam0, bool bParam1)//Position - 0x27EE2
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 15);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_RA", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PA", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_GE", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_CH", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_FI", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PR", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_UN", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_DE", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_FO", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_AR", 24);
		}
		else if (iVar0 == 11)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_TO", 24);
		}
		else if (iVar0 == 12)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_IN", 24);
		}
		else if (iVar0 == 13)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PRI", 24);
		}
		else if (iVar0 == 14)
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_LA", 24);
		}
		else
		{
			StringCopy(&(iParam0->f_14), "GR_PWD_PA", 24);
		}
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (iVar0 == 0)
		{
			StringCopy(&(iParam0->f_14), "PASSWORD", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(iParam0->f_14), "PETSNAME", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(iParam0->f_14), "DYNAMITE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(iParam0->f_14), "BACKDOOR", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(iParam0->f_14), "MORPHEUS", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(iParam0->f_14), "CREAMPIE", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(iParam0->f_14), "WORMSIGN", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(iParam0->f_14), "UNLOCKED", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(iParam0->f_14), "BLUEBOOK", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(iParam0->f_14), "DECIPHER", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(iParam0->f_14), "JUNKYARD", 24);
		}
		else
		{
			StringCopy(&(iParam0->f_14), "PASSWORD", 24);
		}
	}
}

void func_896(bool bParam0, char* sParam1)//Position - 0x28112
{
	if (bParam0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_82 = MISC::GET_GAME_TIMER();
		iLocal_83 = 1;
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_83 = 0;
	}
}

void func_897(char[4] cParam0)//Position - 0x28160
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

void func_898(int iParam0, int iParam1)//Position - 0x28176
{
	if (!MISC::IS_BIT_SET(*iParam0, 29))
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_79, "SET_BACKGROUND", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
		if (GRAPHICS::GET_IS_WIDESCREEN())
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(8), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_79, "SET_LABELS");
		func_273("H_ICON_1");
		if (iParam1 == 0)
		{
			func_273("H_ICON_2a");
		}
		else
		{
			func_273("H_ICON_2");
		}
		func_273("H_ICON_3");
		func_273("H_ICON_4");
		func_273("H_ICON_5");
		func_273("H_ICON_6");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(iParam0, 29);
	}
}

int func_899(int iParam0, int iParam1)//Position - 0x28250
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_900(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2826E
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_901()//Position - 0x282AB
{
	if (iLocal_80 < 5)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, true);
		}
	}
}

void func_902(int iParam0)//Position - 0x282DB
{
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	HUD::CLEAR_HELP(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::DESTROY_CAM(iLocal_77, 0);
	func_876(0);
	func_875();
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x9B079E5221D984D3(0);
	func_874(iParam0, 1, 0, 0);
	func_873(0, 1, 1, 0);
}

void func_903(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x28338
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

void func_904(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x2843C
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_905(int iParam0)//Position - 0x28511
{
	if (func_881())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_882(0))
		{
			func_877(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_906(int iParam0, int iParam1)//Position - 0x28544
{
	MISC::SET_BIT(&(Global_1373500.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1373500.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_907(int iParam0)//Position - 0x2857A
{
	Global_1375006.f_1100 = iParam0;
}

void func_908(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2858B
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
	if (func_916())
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
		if (!func_386())
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
				else if (bVar13 || (!func_146(PLAYER::PLAYER_ID(), 0) && !func_92()))
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
				func_913(0, 0, 0);
				if (bVar24)
				{
					STREAMING::CLEAR_FOCUS();
				}
				if (!func_912(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
					ENTITY::_SET_ENTITY_SOMETHING(iVar26, true);
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
					func_911();
					func_910();
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
				if (!func_912(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
							ENTITY::_SET_ENTITY_SOMETHING(iVar26, true);
						}
					}
					if (func_909(Global_4456448.f_190930))
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

bool func_909(int iParam0)//Position - 0x289F7
{
	return iParam0 == 17;
}

void func_910()//Position - 0x28A04
{
	vector3 vVar0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { vVar0 };
}

void func_911()//Position - 0x28A51
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_912(int iParam0)//Position - 0x28A8F
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

void func_913(int iParam0, int iParam1, int iParam2)//Position - 0x28AC0
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
				func_915();
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
		if (func_146(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_914(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_914(int iParam0, int iParam1)//Position - 0x28B96
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_915()//Position - 0x28BB2
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

int func_916()//Position - 0x28C0D
{
	if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_917(bool bParam0)//Position - 0x28C3B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_79) && (!bParam0 || (((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_0") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_1")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_918(bool bParam0)//Position - 0x28CA8
{
	if (bParam0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_0", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_1", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_2", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_3", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_4", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_5", false);
	}
	iLocal_79 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_INTERACTIVE("Hacking_PC");
}

void func_919(int iParam0)//Position - 0x28CF5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	HUD::CLEAR_HELP(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::DESTROY_CAM(iLocal_77, 0);
	MISC::CLEAR_BIT(iParam0, 0);
	MISC::CLEAR_BIT(iParam0, 12);
	func_876(0);
	func_875();
	GRAPHICS::_0x9B079E5221D984D3(0);
}

void func_920(int iParam0)//Position - 0x28D59
{
	func_874(iParam0, 1, 1, 0);
	*iParam0 = 0;
	iParam0->f_23 = 0;
	Local_103 = 0;
	Local_103.f_1 = 0;
	MISC::CLEAR_BIT(iParam0, 26);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
}

void func_921(bool bParam0)//Position - 0x28DB3
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
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
}

void func_922()//Position - 0x28E98
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_BIT_SET(Local_474, 0))
	{
		return;
	}
	if (!func_456())
	{
		if (func_424("GB_SGHT_HLP1"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_424("GB_SGHT_HLP2"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_410())
		{
			sVar0 = func_538(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
			iVar1 = func_845(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
			if (func_294(PLAYER::PLAYER_ID(), 1))
			{
				if (func_931("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else if (func_931("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (func_424("GB_SGHT_RVL"))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	iVar2 = func_401(PLAYER::PLAYER_ID());
	if (iVar2 < 2)
	{
		if (func_424("GB_SGHT_HLP1"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_424("GB_SGHT_HLP2"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_410())
		{
			sVar0 = func_538(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
			iVar1 = func_845(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
			if (func_294(PLAYER::PLAYER_ID(), 1))
			{
				if (func_931("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else if (func_931("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (func_424("GB_SGHT_RVL"))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_461, 2))
	{
		if (!func_930(86))
		{
			if (iLocal_768 == -1)
			{
				if (func_924(0, 1, 1, 1))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_208.f_33)
					{
						func_432("GB_SGHT_HLP1", -1);
						func_431(1);
						MISC::SET_BIT(&iLocal_461, 2);
					}
					else if (func_1010() == Local_208.f_33)
					{
						func_432("GB_SGHT_HLP2", -1);
						func_431(1);
						MISC::SET_BIT(&iLocal_461, 2);
					}
					else if (func_410())
					{
						sVar0 = func_538(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
						iVar1 = func_845(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
						if (func_294(PLAYER::PLAYER_ID(), 1))
						{
							func_923("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_431(1);
						}
						else
						{
							func_923("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_431(1);
						}
						MISC::SET_BIT(&iLocal_461, 2);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_461, 2);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_461, 2))
	{
		if (!MISC::IS_BIT_SET(iLocal_461, 7))
		{
			if (iLocal_768 == -1)
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_208.f_33)
				{
					if (func_924(0, 1, 1, 1))
					{
						func_432("GB_SGHT_APPH", -1);
						func_431(1);
						MISC::SET_BIT(&iLocal_461, 7);
					}
				}
				else
				{
					MISC::SET_BIT(&iLocal_461, 7);
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_461, 7);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_461, 8))
	{
		if (func_1009())
		{
			if (func_993())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_3))
				{
					if (func_924(0, 1, 1, 1))
					{
						func_432("GB_SGHT_PKGH", -1);
						func_431(1);
						MISC::SET_BIT(&iLocal_461, 8);
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_461, 12))
	{
		if (func_1009())
		{
			if (Local_208.f_5 > 0 || MISC::IS_BIT_SET(Local_208.f_1, 6))
			{
				if (func_924(0, 1, 1, 1))
				{
					func_432("GB_SGHT_RVL", -1);
					func_431(1);
					MISC::SET_BIT(&iLocal_461, 12);
				}
			}
		}
	}
}

void func_923(char[4] cParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x291DF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam5);
}

int func_924(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2921E
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_929())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_391())
	{
		return 0;
	}
	if (func_497())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_47(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_928(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_927())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574181)
	{
		return 0;
	}
	if (func_926())
	{
		return 0;
	}
	if (func_925())
	{
		return 0;
	}
	if (func_384())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (Global_2541150)
	{
		return 0;
	}
	if (func_217(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_925()//Position - 0x2931B
{
	return Global_2448961.f_591;
}

bool func_926()//Position - 0x2932A
{
	return Global_2448961.f_744;
}

bool func_927()//Position - 0x29339
{
	return Global_2437549.f_3032.f_578;
}

int func_928(int iParam0)//Position - 0x2934B
{
	if (Global_2424073[iParam0 /*421*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_929()//Position - 0x29367
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_930(int iParam0)//Position - 0x29389
{
	return Global_2437549.f_2708[0 /*80*/].f_1 == iParam0;
}

int func_931(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x293A0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_932()//Position - 0x293DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_BIT_SET(Local_474, 0))
	{
		return;
	}
	if (!func_456())
	{
		if (MISC::IS_BIT_SET(iLocal_461, 5))
		{
			if (Local_208.f_34 != -1)
			{
				iVar0 = func_298(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
				if (iVar0 > -1)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34)))
					{
						iVar1 = func_296(iVar0);
						iVar2 = func_868(iVar1);
						func_447(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 432, 0, 0);
						func_446(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), iVar2, 0, 0);
						func_445(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 0, 0, 0);
						func_444(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 0);
						func_441(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), Global_262145.f_12355, 0, 0);
						MISC::CLEAR_BIT(&iLocal_461, 5);
					}
					else
					{
						MISC::CLEAR_BIT(&iLocal_461, 5);
					}
				}
			}
			func_449();
		}
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_208.f_3))
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_208.f_33)
		{
			if (!MISC::IS_BIT_SET(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
			{
				if (!MISC::IS_BIT_SET(Local_474, 0))
				{
					if (Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 < 3)
					{
						if (func_401(PLAYER::PLAYER_ID()) == 3)
						{
							if (!func_942("GB_SGHT_HCK"))
							{
								func_939("GB_SGHT_HCK", 0);
							}
						}
						else if (func_942("GB_SGHT_HCK"))
						{
							func_449();
						}
					}
					else
					{
						func_449();
					}
				}
			}
		}
		else if (func_1010() == Local_208.f_33)
		{
			if (Local_208.f_34 != -1)
			{
				if (func_401(PLAYER::PLAYER_ID()) == 3)
				{
					if (!func_942("GB_SGHT_PROT"))
					{
						iVar0 = func_298(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_296(iVar0);
							func_933("GB_SGHT_PROT", PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_942("GB_SGHT_PROT"))
				{
					func_449();
				}
			}
		}
		else if (func_410())
		{
			if (Local_208.f_34 != -1)
			{
				if (func_401(PLAYER::PLAYER_ID()) == 3)
				{
					if (Local_208.f_34 != -1)
					{
						iVar0 = func_298(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_296(iVar0);
							if (func_294(PLAYER::PLAYER_ID(), 1))
							{
								if (!func_942("GB_SGHT_STOP"))
								{
									func_933("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_942("GB_SGHT_STOP"))
							{
								func_933("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_942("GB_SGHT_STOP"))
					{
						func_449();
					}
					if (func_942("GB_SGHT_STOP2"))
					{
						func_449();
					}
				}
				if (func_401(PLAYER::PLAYER_ID()) >= 2)
				{
					if (!MISC::IS_BIT_SET(iLocal_461, 5))
					{
						if (Local_208.f_34 != -1)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34)))
							{
								if (func_1119(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 1, 1))
								{
									iVar0 = func_298(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_296(iVar0);
										iVar2 = func_868(iVar1);
										func_447(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 432, 1, 0);
										func_446(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), iVar2, 1, 0);
										func_445(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 1, 1, 0);
										func_444(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 1);
										func_441(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), Global_262145.f_12355, 1, 0);
										MISC::SET_BIT(&iLocal_461, 5);
									}
								}
							}
						}
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_461, 5))
				{
					if (Local_208.f_34 != -1)
					{
						iVar0 = func_298(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_296(iVar0);
							iVar2 = func_868(iVar1);
							func_447(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 432, 0, 0);
							func_446(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), iVar2, 0, 0);
							func_445(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 0, 0, 0);
							func_444(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 0);
							func_441(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), Global_262145.f_12355, 0, 0);
							MISC::CLEAR_BIT(&iLocal_461, 5);
						}
					}
				}
			}
		}
	}
	else if (func_401(PLAYER::PLAYER_ID()) == 3)
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_208.f_33)
		{
			if (!MISC::IS_BIT_SET(Local_474, 0))
			{
				if (!func_942("GB_SGHT_RETP"))
				{
					func_939("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_1010() == Local_208.f_33)
		{
			if (Local_208.f_34 != -1)
			{
				if (!func_942("GB_SGHT_PROT"))
				{
					iVar0 = func_298(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_296(iVar0);
						func_933("GB_SGHT_PROT", PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_410())
		{
			if (Local_208.f_34 != -1)
			{
				iVar0 = func_298(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_296(iVar0);
					if (func_294(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_942("GB_SGHT_STOP"))
						{
							func_933("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_942("GB_SGHT_STOP"))
					{
						func_933("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_942("GB_SGHT_PROT"))
		{
			func_449();
		}
		if (func_942("GB_SGHT_RETP"))
		{
			func_449();
		}
		if (func_942("GB_SGHT_STOP"))
		{
			func_449();
		}
		if (func_942("GB_SGHT_STOP2"))
		{
			func_449();
		}
	}
}

void func_933(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x29900
{
	if (func_934(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312585 = 15;
		Global_1312585.f_56 = iParam3;
		Global_1312585.f_57 = iParam4;
		Global_1312585.f_54 = iParam1;
	}
}

int func_934(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0x2993B
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
	if (func_938(sParam0, sParam1, sParam2) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_450();
	Global_1312585 = 10;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	StringCopy(&(Global_1312585.f_32), sParam2, 64);
	Global_1312585.f_58 = uParam4;
	Global_1312585.f_56 = uParam4;
	func_937();
	func_936(bParam3);
	func_935();
	return 1;
}

void func_935()//Position - 0x29A1D
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_936(bool bParam0)//Position - 0x29A30
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_937()//Position - 0x29A56
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_938(int iParam0, int iParam1, int iParam2)//Position - 0x29A7B
{
	if (!func_455())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(iParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam2) == MISC::GET_HASH_KEY(&(Global_1312585.f_32));
}

void func_939(char* sParam0, bool bParam1)//Position - 0x29AF9
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_940(sParam0))
	{
		return;
	}
	func_450();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_937();
	func_936(bParam1);
	func_935();
}

bool func_940(int iParam0)//Position - 0x29B64
{
	if (!func_455())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_941(iParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_941(int iParam0)//Position - 0x29BA8
{
	if (!func_455())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

int func_942(int iParam0)//Position - 0x29BDA
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!func_455())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(iParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(iParam0) > 23)
	{
		return 0;
	}
	return func_940(iParam0);
}

void func_943()//Position - 0x29C2B
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_1009() && !func_410())
	{
		return;
	}
	if (!func_456())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_461, 1))
	{
		iVar0 = func_401(PLAYER::PLAYER_ID());
		if (iVar0 >= 2)
		{
			if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_208.f_33 || func_1010() == Local_208.f_33)
			{
				if (func_967(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_537(86, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2, 1, 0);
					OBJECT::_0x78857FC65CADB909(1);
					OBJECT::_0x616093EC6B139DD9(PLAYER::PLAYER_ID(), joaat("pickup_portable_package"), 1);
					func_966(1);
					func_944(-1, 0, 0, -1, 0, 0);
				}
			}
			else if (func_294(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = func_538(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
				uVar2 = func_845(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
				func_843(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				func_944(-1, 0, 0, -1, 0, 0);
			}
			else
			{
				sVar1 = func_538(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
				uVar2 = func_845(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34));
				func_843(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				func_944(-1, 0, 0, -1, 0, 0);
			}
		}
		MISC::SET_BIT(&iLocal_461, 1);
	}
}

void func_944(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x29D70
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_286(PLAYER::PLAYER_ID());
		Global_1675140 = iVar0;
		Global_1675140.f_1 = iParam0;
		if (func_535() != func_32())
		{
			Global_1675140.f_2 = func_745(func_535());
			Global_1675140.f_3 = func_744(func_535());
		}
		if (func_359() != func_32())
		{
			func_587(func_359(), &(Global_1675140.f_2), &(Global_1675140.f_3));
		}
		Global_1675140.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_28 = func_833(PLAYER::PLAYER_ID());
		Global_1675140.f_13 = 0;
		Global_1675140.f_14 = 0;
		if (func_294(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_836(func_356(1));
		}
	}
	else
	{
		iVar0 = func_227(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_429(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674879 = iVar0;
		if (func_418(iVar0))
		{
			Global_1674879.f_1 = 4;
		}
		else if (func_478(iVar0))
		{
			Global_1674879.f_1 = 5;
		}
		else if (func_326(iVar0, 0))
		{
			Global_1674879.f_1 = 2;
			if (func_552(iVar0))
			{
				Global_1674879.f_1 = 3;
			}
		}
		else
		{
			Global_1674879.f_1 = 1;
		}
		if (func_535() != func_32())
		{
			Global_1674879.f_4 = func_745(func_535());
			Global_1674879.f_5 = func_744(func_535());
		}
		if (func_359() != func_32())
		{
			func_587(func_359(), &(Global_1674879.f_6), &(Global_1674879.f_7));
		}
		Global_1674879.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674879.f_27 = 1;
			Global_1674879.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674879.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674879.f_40 = func_583(iParam1);
			Global_1674879.f_41 = func_965();
			Global_1674879.f_42 = func_704(PLAYER::PLAYER_ID(), iParam1);
			Global_1674879.f_44 = func_826(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_993() || iVar0 != 192)
		{
			Global_1674879.f_53 = 0;
		}
	}
	else if (func_476(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674996 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674996 = iParam0 + 1;
		}
		else
		{
			Global_1674996 = func_964(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_549(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1674996.f_1 = 0;
				}
				else
				{
					Global_1674996.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674996.f_1 = 2;
				break;
			
			case 227:
				Global_1674996.f_1 = 3;
				break;
		}
		Global_1674996.f_21 = 1;
		Global_1674996.f_22 = 1;
		if (func_535() != func_32())
		{
			Global_1674996.f_4 = func_745(func_535());
			Global_1674996.f_5 = func_744(func_535());
		}
		if (func_359() != func_32())
		{
			func_587(func_359(), &(Global_1674996.f_4), &(Global_1674996.f_5));
		}
		Global_1674996.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674996.f_20 = iParam0;
		}
	}
	else if (func_434(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674933 = iVar0;
		Global_1674879.f_1 = 1;
		if (func_535() != func_32())
		{
			Global_1674933.f_4 = func_745(func_535());
			Global_1674933.f_5 = func_744(func_535());
		}
		if (func_359() != func_32())
		{
			func_587(func_359(), &(Global_1674933.f_6), &(Global_1674933.f_7));
		}
		Global_1674933.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674933.f_21 = iParam0;
		}
	}
	else if (func_474(iVar0))
	{
		Global_1675040 = iVar0;
		Global_1675040.f_1 = iParam0;
		Global_1675040.f_21 = 1;
		Global_1675040.f_22 = 1;
		if (func_535() != func_32())
		{
			Global_1675040.f_4 = func_745(func_535());
			Global_1675040.f_5 = func_744(func_535());
		}
		if (func_359() != func_32())
		{
			func_587(func_359(), &(Global_1675040.f_4), &(Global_1675040.f_5));
		}
		Global_1675040.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675040.f_20 = iParam0;
		}
		Global_1675040.f_27 = func_819(func_148(), 5);
		Global_1675040.f_28 = func_836(func_682(PLAYER::PLAYER_ID()));
		Global_1675040.f_29 = func_557(6107, -1, 0);
		Global_1675040.f_30 = func_557(6103, -1, 0);
		Global_1675040.f_31 = func_557(6104, -1, 0);
		Global_1675040.f_32 = func_557(6106, -1, 0);
		Global_1675040.f_33 = func_557(6105, -1, 0);
		Global_1675040.f_34 = func_557(6108, -1, 0);
		Global_1675040.f_7 = func_835();
		Global_1675040.f_51 = func_836(bParam4);
	}
	else if (func_472(iVar0))
	{
		Global_1675094 = iVar0;
		Global_1675094.f_1 = iParam0;
		Global_1675094.f_21 = 1;
		Global_1675094.f_22 = 1;
		if (func_535() != func_32())
		{
			Global_1675094.f_4 = func_745(func_535());
			Global_1675094.f_5 = func_744(func_535());
		}
		if (func_359() != func_32())
		{
			func_587(func_359(), &(Global_1675094.f_4), &(Global_1675094.f_5));
		}
		Global_1675094.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675094.f_20 = iParam0;
		}
		Global_1675094.f_24 = func_557(6157, -1, 0);
		Global_1675094.f_25 = func_557(6162, -1, 0);
		Global_1675094.f_26 = func_557(6163, -1, 0);
		Global_1675094.f_27 = func_836((((func_784() || func_783()) || func_782()) || func_781(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_557(6164, -1, 0);
		Global_1675094.f_29 = func_836(func_780());
		Global_1675094.f_31 = 0;
		Global_1675094.f_30 = 0;
		Global_1675094.f_32 = 0;
		Global_1675094.f_33 = 0;
		Global_1675094.f_34 = 0;
		Global_1675094.f_16 = 0;
		Global_1675094.f_7 = func_835();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_547(func_548(PLAYER::PLAYER_ID()))))
	{
		Global_1675228 = iVar0;
		Global_1675228.f_1 = iParam0;
		Global_1675228.f_21 = 1;
		Global_1675228.f_22 = 1;
		Global_1675228.f_7 = func_835();
		if (func_535() != func_32())
		{
			Global_1675228.f_4 = func_745(func_535());
			Global_1675228.f_5 = func_744(func_535());
		}
		if (func_359() != func_32())
		{
			func_587(func_359(), &(Global_1675228.f_4), &(Global_1675228.f_5));
		}
		if (func_535() != -1)
		{
			Global_1675228.f_17 = func_777(func_535());
		}
		Global_1675228.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_28 = func_833(PLAYER::PLAYER_ID());
		Global_1675228.f_16 = 0;
		Global_1675228.f_24 = 0;
		Global_1675228.f_23 = 0;
		if (func_294(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_836(func_356(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1675175 = iVar0;
		Global_1675175.f_1 = iParam0;
		Global_1675175.f_21 = 1;
		Global_1675175.f_22 = 1;
		Global_1675175.f_7 = func_835();
		Global_1675175.f_24 = 0;
		Global_1675175.f_23 = 0;
		Global_1675175.f_16 = 0;
		if (func_535() != func_32())
		{
			Global_1675175.f_4 = func_745(func_535());
			Global_1675175.f_5 = func_744(func_535());
		}
		Global_1675175.f_28 = func_833(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_771(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_755(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_774(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_836(func_754(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_836(func_753(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_836(func_752(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_836(func_751(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_750(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_749(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_748(PLAYER::PLAYER_ID());
		if (func_294(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_836(func_356(1));
		}
		if (func_359() != func_32())
		{
			func_587(func_359(), &(Global_1675175.f_4), &(Global_1675175.f_5));
		}
		Global_1675175.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_28 = func_833(PLAYER::PLAYER_ID());
	}
	else if (func_545(iVar0))
	{
		Global_1675312 = iVar0;
		Global_1675312.f_1 = func_549(PLAYER::PLAYER_ID());
		Global_1675312.f_2 = func_842();
		Global_1675312.f_3 = func_841();
		Global_1675312.f_4 = func_745(func_535());
		Global_1675312.f_5 = func_744(func_535());
		Global_1675312.f_7 = func_835();
		Global_1675312.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (func_535() != -1)
		{
			Global_1675312.f_17 = func_777(func_535());
		}
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = iParam0;
		Global_1675312.f_27 = func_836(func_742(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_739(21, -1);
	}
	else if (func_466(iVar0))
	{
		Global_1675387 = Global_786547.f_1;
		Global_1675387.f_2 = Global_786547;
		Global_1675387.f_6 = func_745(func_535());
		Global_1675387.f_7 = func_744(func_535());
		if (func_294(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_836(func_356(1));
		}
		if (func_535() != -1)
		{
			Global_1675387.f_9 = func_777(func_535());
		}
		Global_1675387.f_10 = func_835();
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		Global_1675387.f_21 = 0;
		Global_1675387.f_22 = 0;
		Global_1675387.f_23 = 0;
		Global_1703065 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else
	{
		if (func_535() != func_32())
		{
			Global_1674861 = func_745(func_535());
			Global_1674861.f_1 = func_744(func_535());
		}
		Global_1674861.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674861.f_13 = func_963();
		Global_1674861.f_15 = 0;
		if (func_536(1))
		{
			if (func_359() == func_535())
			{
				Global_1674861.f_15 = 1;
			}
		}
		if (func_962())
		{
			Global_1674996.f_28 = 1;
		}
		if (((((func_961() || func_960()) || func_959()) || func_958()) || func_957()) || func_956(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_30 = 1;
		}
		if (func_954(func_955(-1881846085)))
		{
			Global_1674996.f_32 = 1;
		}
		if (func_948(func_953(joaat("caddy"))))
		{
			Global_1674996.f_31 = 1;
		}
		if (func_818(PLAYER::PLAYER_ID()) || func_817(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_29 = 1;
		}
		if (func_814(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_33 = 1;
			Global_1674996.f_34 = 1;
		}
		if (func_815(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_36 = 1;
		}
		if (func_812(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1674996.f_35 = 1;
		}
		if (func_947(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1674996.f_37 = 1;
		}
		if (func_947(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1674996.f_38 = 1;
		}
		if (func_946(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_945(PLAYER::PLAYER_ID(), iVar2);
				if (func_701(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1674996.f_39 = 1;
				}
				if (func_701(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1674996.f_40 = 1;
				}
				if (func_701(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1674996.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_945(int iParam0, int iParam1)//Position - 0x2A92E
{
	var uVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_696(Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/]))
	{
		uVar0 = Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/];
	}
	return uVar0;
}

int func_946(int iParam0)//Position - 0x2A987
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_947(int iParam0, int iParam1, var uParam2)//Position - 0x2A9C9
{
	int iVar0;
	
	if (iParam0 != func_32())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_812(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_948(int iParam0)//Position - 0x2AA03
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_739(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_798(11));
		func_797(iVar1, &iVar0, 1);
		iVar2 = func_739(func_950(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_557(func_949(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_949(int iParam0, int iParam1)//Position - 0x2AA7F
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

int func_950(int iParam0)//Position - 0x3093D
{
	int iVar0;
	
	if (iParam0 < 281)
	{
		iVar0 = 0;
		while (iVar0 < 23)
		{
			if (iParam0 >= func_798(iVar0) && iParam0 < func_951(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_951(int iParam0)//Position - 0x30980
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
		iVar0 = func_741(iParam0);
		return func_952(iVar0);
	}
	return (func_799(iParam0, -1) * iParam0 + 1);
}

int func_952(int iParam0)//Position - 0x30AB2
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

int func_953(int iParam0)//Position - 0x30AE3
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_954(int iParam0)//Position - 0x30B6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_797(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_557(func_949(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_955(int iParam0)//Position - 0x30BB2
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_956(int iParam0)//Position - 0x30BCF
{
	if (iParam0 != func_32())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_335 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_957()//Position - 0x30BF8
{
	return func_557(6542, -1, 0) != 0;
}

bool func_958()//Position - 0x30C0B
{
	return func_557(6163, -1, 0) != 0;
}

bool func_959()//Position - 0x30C1E
{
	return func_557(5380, -1, 0) != 0;
}

bool func_960()//Position - 0x30C31
{
	return func_557(3828, -1, 0) != 0;
}

bool func_961()//Position - 0x30C44
{
	return func_557(3223, -1, 0) != 0;
}

bool func_962()//Position - 0x30C57
{
	return func_557(5379, -1, 0) != 0;
}

int func_963()//Position - 0x30C6A
{
	int iVar0;
	
	iVar0 = func_535();
	if (iVar0 != func_32())
	{
		return Global_1628955[iVar0 /*614*/].f_11.f_98;
	}
	return 0;
}

int func_964(int iParam0)//Position - 0x30C92
{
	if (func_227(iParam0) == 225 || func_227(iParam0) == 226)
	{
		return func_549(iParam0);
	}
	return -1;
}

var func_965()//Position - 0x30CBF
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_703(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_966(bool bParam0)//Position - 0x30CF1
{
	if (bParam0)
	{
		if (!func_199(PLAYER::PLAYER_ID(), 9))
		{
			if (func_401(PLAYER::PLAYER_ID()) != 0)
			{
				func_230(9);
			}
		}
	}
	else if (func_199(PLAYER::PLAYER_ID(), 9))
	{
		func_229(9);
	}
}

int func_967(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x30D37
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
	if (func_969(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_968(iParam0) };
			Global_8043 = iParam0;
			MISC::SET_BIT(&Global_7356, 1);
			MISC::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_968(int iParam0)//Position - 0x30DC6
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_969(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x30DD9
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_981();
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
	if (func_980() == 0)
	{
		func_978();
		return 0;
	}
	func_977(Global_21872);
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
		func_976(0);
		func_976(2);
		func_976(1);
	}
	else
	{
		func_981();
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
					func_976(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_976(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_976(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_976(3);
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
		func_981();
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
			if (!func_496())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_975(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_972(1);
			func_975(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_970(iParam0, sParam1);
	return 1;
}

void func_970(int iParam0, char* sParam1)//Position - 0x31297
{
	if (!func_971())
	{
		return;
	}
	unk_0x0077F15613D36993(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_971()//Position - 0x312BC
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_32())
	{
		return 0;
	}
	if (func_300(PLAYER::PLAYER_ID()))
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

void func_972(int iParam0)//Position - 0x31322
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
		if (func_974(14))
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
								func_273(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_973(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_973(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_973(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_973(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_973(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_273(&(Global_7363[iVar1 /*15*/]));
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
								func_273(&(Global_7363[iVar1 /*15*/]));
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
								func_273(&(Global_7363[iVar1 /*15*/]));
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
								func_273(&(Global_7363[iVar1 /*15*/]));
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
								func_273(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_973(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_973(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_973(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x318BB
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
		func_273(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_273(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_273(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_273(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_273(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_974(int iParam0)//Position - 0x3196E
{
	return Global_41396 == iParam0;
}

void func_975(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3197C
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

void func_976(int iParam0)//Position - 0x319DF
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111560.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_977(int iParam0)//Position - 0x319FE
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

void func_978()//Position - 0x31A90
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
		if (!func_979(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_979(struct<6> Param0, struct<6> Param6)//Position - 0x31B5B
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

int func_980()//Position - 0x31C46
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
			if (!func_979(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
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

void func_981()//Position - 0x31DAE
{
	if (func_974(14))
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
		Global_19486 = func_982();
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

var func_982()//Position - 0x31E50
{
	func_983();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_983()//Position - 0x31E69
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_986(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_985(PLAYER::PLAYER_PED_ID());
			if (func_984(iVar0) && (!func_974(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_984(Global_111560.f_2358.f_539.f_4321))
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

bool func_984(int iParam0)//Position - 0x31F66
{
	return iParam0 < 3;
}

int func_985(int iParam0)//Position - 0x31F72
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_986(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_986(int iParam0)//Position - 0x31FAF
{
	if (func_984(iParam0))
	{
		return func_987(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_987(int iParam0)//Position - 0x31FD4
{
	return Global_1798[iParam0 /*29*/];
}

void func_988()//Position - 0x31FE3
{
	if (!MISC::IS_BIT_SET(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
	{
		if (!func_1009())
		{
			if (Local_208.f_5 > 0 || MISC::IS_BIT_SET(Local_208.f_1, 6))
			{
				func_232(1);
				MISC::SET_BIT(&(Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 1);
			}
		}
	}
}

int func_989(bool bParam0)//Position - 0x32034
{
	if (func_992(1))
	{
		return 1;
	}
	if (Global_2531497.f_4898.f_39)
	{
		Global_2531497.f_4898.f_39 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_359() == func_32() || !func_1119(func_359(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_468(PLAYER::PLAYER_ID()))
	{
		if (func_991(PLAYER::PLAYER_ID()) && func_990())
		{
			return 1;
		}
	}
	return 0;
}

int func_990()//Position - 0x320AD
{
	switch (func_31(func_460(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_991(int iParam0)//Position - 0x320D7
{
	if (iParam0 != func_32() && func_1119(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_992(bool bParam0)//Position - 0x3210B
{
	bool bVar0;
	
	if (!func_536(1))
	{
		bVar0 = false;
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_32())
		{
			if (func_1119(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 4 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 8) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_420(func_227(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_641(31);
				if (func_429(func_227(PLAYER::PLAYER_ID())))
				{
					func_641(81);
				}
				if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_32() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
				{
					Global_1627443 = func_512(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_358(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
					{
						func_641(88);
					}
				}
				else
				{
					Global_1627443 = 1;
				}
				Global_1627427 = { Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_993()//Position - 0x3225D
{
	return func_247(PLAYER::PLAYER_ID());
}

void func_994(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x3226D
{
	float fVar0;
	
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 != iParam0)
	{
		func_1008(-1);
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 = iParam0;
		if (func_1007() != -1)
		{
			func_1006(-1);
		}
		if (func_1005() != -1)
		{
			func_1004(-1);
		}
		func_1003(iParam2);
		func_1001(iParam0);
		if (!func_240(iParam0))
		{
			fVar0 = func_239(iParam0);
			if (fVar0 != 1f)
			{
				func_235(fVar0);
				MISC::SET_BIT(&(Global_1674852.f_3), 1);
			}
		}
		if (!func_243(iParam0) || iParam3)
		{
			if (func_241(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				MISC::SET_BIT(&(Global_1674852.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_409())
		{
			func_230(27);
		}
		if (bParam1)
		{
			if (!func_403())
			{
				func_232(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2531497.f_4555, 1) || MISC::IS_BIT_SET(Global_2531497.f_4555, 4)) || MISC::IS_BIT_SET(Global_2531497.f_4555, 0))
			{
				func_641(6);
			}
			func_1000();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_137(PLAYER::PLAYER_ID()) && func_248(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 8);
		}
		func_996();
		if (func_995(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1674852.f_3), 6);
		}
		Global_2531497.f_6307 = 0;
	}
}

int func_995(int iParam0)//Position - 0x3248A
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_996()//Position - 0x324D4
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_999();
	iVar2 = func_87(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_328(iVar1, iVar2, 1) || func_997(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_997(int iParam0, int iParam1)//Position - 0x32544
{
	if (func_294(iParam0, 1) && func_294(iParam1, 1))
	{
		return (func_998(iParam0) == func_87(iParam1) || func_998(iParam1) == func_87(iParam0));
	}
	return 0;
}

int func_998(int iParam0)//Position - 0x32586
{
	if (func_294(iParam0, 1))
	{
		return Global_1628955[func_87(iParam0) /*614*/].f_11.f_484;
	}
	return func_32();
}

int func_999()//Position - 0x325B1
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_535();
	if (iVar0 != func_32())
	{
		if (func_1119(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1628955[iVar1 /*614*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1000()//Position - 0x325F2
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4555, 1))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4555), 1);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4555, 4))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4555), 4);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4555, 6))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4555), 6);
	}
	MISC::CLEAR_BIT(&(Global_2531497.f_4555), 0);
	MISC::CLEAR_BIT(&(Global_2531497.f_4555), 2);
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_746 = 0;
	if (Global_2531497.f_4557 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2531497.f_4557);
	}
	Global_2531497.f_4556 = 0;
}

void func_1001(int iParam0)//Position - 0x32690
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_557(3791, -1, 0);
	iVar1 = func_1002(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_555(3791, iVar0, -1, 1, 0);
	}
}

int func_1002(int iParam0)//Position - 0x326C5
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_1003(int iParam0)//Position - 0x3275C
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1628955[iVar0 /*614*/].f_11.f_181 != iParam0)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_181 = iParam0;
	}
}

void func_1004(int iParam0)//Position - 0x3278B
{
	if (Global_2531497.f_4898.f_338 != iParam0)
	{
		Global_2531497.f_4898.f_338 = iParam0;
	}
}

int func_1005()//Position - 0x327AE
{
	return Global_2531497.f_4898.f_338;
}

void func_1006(int iParam0)//Position - 0x327C0
{
	if (Global_2531497.f_4898.f_337 != iParam0)
	{
		Global_2531497.f_4898.f_337 = iParam0;
	}
}

int func_1007()//Position - 0x327E3
{
	return Global_2531497.f_4898.f_337;
}

void func_1008(int iParam0)//Position - 0x327F5
{
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_32 = iParam0;
}

int func_1009()//Position - 0x3280E
{
	int iVar0;
	
	iVar0 = func_1010();
	if (iVar0 > -1)
	{
		if (Local_208.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1010()//Position - 0x32830
{
	int iVar0;
	
	if (Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 != -1)
	{
		return Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3;
	}
	if (func_247(PLAYER::PLAYER_ID()))
	{
		Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_208.f_33)
		{
			func_966(1);
		}
	}
	else if (func_294(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_535();
		if (iVar0 != func_32())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3;
}

int func_1011()//Position - 0x328C2
{
	return Local_208;
}

int func_1012(int iParam0)//Position - 0x328CC
{
	return Local_268[iParam0 /*6*/];
}

int func_1013()//Position - 0x328DB
{
	var uVar0;
	
	func_1018(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1017())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_1016())
	{
		return 1;
	}
	if (func_1015(159))
	{
		if (!func_1014())
		{
			return 1;
		}
	}
	if (func_1015(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_236() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_236()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1014()//Position - 0x32965
{
	return Global_2448961.f_598;
}

int func_1015(int iParam0)//Position - 0x32974
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1016()//Position - 0x3298B
{
	return Global_2458999;
}

bool func_1017()//Position - 0x32997
{
	return Global_2448961.f_593;
}

void func_1018(var uParam0)//Position - 0x329A6
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
					func_1019(iVar0);
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

void func_1019(int iParam0)//Position - 0x32A19
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1119(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1020(iVar4, &bVar5))
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

int func_1020(int iParam0, var uParam1)//Position - 0x32A9A
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

void func_1021()//Position - 0x32AF9
{
	SYSTEM::WAIT(0);
}

void func_1022()//Position - 0x32B06
{
	if (!MISC::IS_BIT_SET(iLocal_461, 6))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_1009() || func_410())
			{
				func_733(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
				MISC::SET_BIT(&iLocal_461, 6);
			}
		}
	}
	func_1068(3, 3, -1, -1082130432);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_208.f_33)
		{
			if (iLocal_768 >= 0)
			{
				func_920(&Local_474);
				func_919(&Local_474);
			}
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_467)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_469);
	}
	if (iLocal_768 > 0)
	{
		if (MISC::IS_BIT_SET(Local_208.f_1, 3))
		{
			func_908(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	func_1067();
	if (Local_208.f_34 != -1)
	{
		if (MISC::IS_BIT_SET(iLocal_461, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34)))
			{
				func_447(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 432, 0, 0);
				func_446(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 1, 0, 0);
				func_445(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 0, 0, 0);
				func_444(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), 0);
				func_441(PLAYER::INT_TO_PLAYERINDEX(Local_208.f_34), Global_262145.f_12355, 0, 0);
			}
		}
	}
	if (func_204(0))
	{
		func_203(0);
	}
	if (MISC::IS_BIT_SET(iLocal_462, 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_462, 2))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP");
		}
	}
	MISC::SET_BIT(&iLocal_462, 8);
	func_200();
	OBJECT::_0x78857FC65CADB909(1);
	func_966(0);
	func_1024(1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::CLEAR_BIT(&Global_4269615, 21);
	MISC::CLEAR_BIT(&Global_4269615, 20);
	func_1023();
}

void func_1023()//Position - 0x32CA4
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1024(bool bParam0, int iParam1)//Position - 0x32CB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1363235.f_1.f_108 != 0)
	{
		Global_1363235.f_1.f_108 = 0;
	}
	Global_1363235.f_1.f_109 = -1;
	Global_1363235.f_1.f_110 = -1;
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 167 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 168)
	{
		func_1065();
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 4);
	}
	if ((func_558() && iParam1 != 0) && Global_262145.f_16969)
	{
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 190 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 192)
		{
			func_1047(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 164 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 208) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 250) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 != -1)
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 14) && !func_137(PLAYER::PLAYER_ID()))
		{
			func_232(0);
		}
	}
	else if (func_1045(PLAYER::PLAYER_ID()) != -1)
	{
		func_1008(-1);
	}
	func_1044(func_32());
	if (func_204(16))
	{
		func_203(16);
	}
	func_1041(0);
	func_1003(-1);
	func_1040();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1039(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1037(iVar1);
		iVar1++;
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 5);
	}
	iVar2 = func_436();
	if ((func_325(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1036(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_418(iVar2))
	{
		func_1033(-1, 1);
	}
	else if (((((func_435(iVar2) || func_1032(iVar2)) || func_1031(iVar2)) || func_476(iVar2)) || func_474(iVar2)) || func_472(iVar2))
	{
	}
	else
	{
		func_1033(-1, 1);
	}
	func_229(19);
	func_229(20);
	func_229(21);
	func_229(22);
	func_229(27);
	func_203(3);
	func_203(4);
	func_203(7);
	func_1030();
	if (func_248(PLAYER::PLAYER_ID()))
	{
		func_966(0);
	}
	func_229(29);
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_32();
	if (Global_2531497.f_4898.f_39 != 0)
	{
		Global_2531497.f_4898.f_39 = 0;
	}
	if (bParam0)
	{
		func_205();
	}
	if (!func_137(PLAYER::PLAYER_ID()))
	{
		func_228();
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 8))
	{
		func_1029("IMPEXP_SELFDES", 0);
		func_1027("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 8);
	}
	func_1025(iVar2, 0);
}

void func_1025(int iParam0, bool bParam1)//Position - 0x33079
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1674852.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_1026(iParam0));
			MISC::SET_BIT(&(Global_1674852.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1674852.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_1026(iParam0));
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 9);
	}
}

char* func_1026(int iParam0)//Position - 0x330D5
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_1027(char* sParam0)//Position - 0x3314F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_981();
					Global_111560.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_1028(iVar0))
					{
					}
					else
					{
						Global_111560.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_111560.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1028(int iParam0)//Position - 0x33203
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1029(char* sParam0, int iParam1)//Position - 0x33258
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111560.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111560.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111560.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111560.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111560.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111560.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111560.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111560.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1030()//Position - 0x33370
{
	if (func_251(PLAYER::PLAYER_ID()))
	{
		func_229(25);
	}
}

int func_1031(int iParam0)//Position - 0x33389
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1032(int iParam0)//Position - 0x333A9
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1033(int iParam0, bool bParam1)//Position - 0x333D4
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_436();
	}
	if (iParam0 > 0)
	{
		if (func_535() != func_32())
		{
			if (func_469(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2509053.f_93[func_1035(iParam0)] = 1;
			}
		}
		iVar0 = func_1035(159);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(157);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(148);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(164);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(142);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(152);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(166);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(170);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(173);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(179);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(200);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(201);
		if (func_1034(iVar0, Global_262145.f_12606, bParam1))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(182);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(183);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(185);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(186);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(180);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(195);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(197);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(198);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(207);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(208);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(209);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(214);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(215);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(216);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(217);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(218);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(219);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(220);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(221);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1034(int iParam0, int iParam1, bool bParam2)//Position - 0x33A50
{
	if (bParam2)
	{
		if ((!func_199(PLAYER::PLAYER_ID(), 19) && !func_199(PLAYER::PLAYER_ID(), 20)) && !func_199(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2509053.f_93[iParam0] == 1 && func_9(&(Global_2509053[iParam0 /*2*/])))
	{
		if (func_863(&(Global_2509053[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2509053.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1035(int iParam0)//Position - 0x33AD6
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_1036(int iParam0)//Position - 0x33CD8
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_436();
	}
	if (iParam0 > 0)
	{
		if (func_535() != func_32())
		{
			Global_2509053.f_93[func_1035(iParam0)] = 1;
		}
		iVar0 = func_1035(155);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(163);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(160);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(153);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(162);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(154);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(171);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(172);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(199);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(194);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(193);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(210);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(205);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(189);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1035(211);
		if (func_1034(iVar0, Global_262145.f_12607, 0))
		{
			func_266(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1037(int iParam0)//Position - 0x3400B
{
	if (!func_192(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/], func_1038(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/] = { func_1038() };
	}
	if (!func_192(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/], func_1038(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/] = { func_1038() };
	}
}

Vector3 func_1038()//Position - 0x3408D
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1039(int iParam0)//Position - 0x34099
{
	if (!func_192(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/], func_1038(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/] = { func_1038() };
	}
	if (!func_192(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/], func_1038(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/] = { func_1038() };
	}
}

void func_1040()//Position - 0x34117
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573899 = { Var0 };
	Global_1573899.f_13 = func_32();
	if (MISC::IS_BIT_SET(Global_1573343, 3))
	{
		MISC::CLEAR_BIT(&Global_1573343, 3);
	}
}

void func_1041(bool bParam0)//Position - 0x34171
{
	if (bParam0)
	{
		if (!func_498(PLAYER::PLAYER_ID(), 14))
		{
			func_1043(14);
		}
	}
	else if (func_498(PLAYER::PLAYER_ID(), 14))
	{
		func_1042(14);
	}
}

void func_1042(int iParam0)//Position - 0x341A8
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_1043(int iParam0)//Position - 0x341C5
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_1044(int iParam0)//Position - 0x341E2
{
	if (func_247(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 != iParam0)
			{
				Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 = iParam0;
				if (iParam0 != func_32())
				{
				}
			}
		}
	}
}

int func_1045(int iParam0)//Position - 0x34231
{
	if (func_1046(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_32;
	}
	return -1;
}

int func_1046(int iParam0, int iParam1)//Position - 0x34254
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_32 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1047(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3428F
{
	int iVar0;
	
	if (func_703(iParam0, iParam1) && func_1064(iParam0, iParam1))
	{
		iVar0 = func_702(iParam0, iParam1);
		func_1051(iVar0, bParam2, bParam3);
		func_1048(iVar0, 1);
	}
}

void func_1048(int iParam0, bool bParam1)//Position - 0x342CA
{
	if (!func_1050(iParam0))
	{
		return;
	}
	func_689(func_1049(iParam0), bParam1, -1, 1);
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_6 = bParam1;
}

int func_1049(int iParam0)//Position - 0x34306
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1050(int iParam0)//Position - 0x34360
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1051(int iParam0, bool bParam1, bool bParam2)//Position - 0x34375
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_945(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1063(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2507929[iParam0];
		iVar0 = func_1062(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676736 = -1;
		}
		func_1061(iParam0, 0, bParam2);
	}
	else if (func_1059(iParam0, bParam2))
	{
		iVar0 = func_1058(iVar2, 0);
		iVar3 = func_826(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_1057(iVar2, bParam2);
		iVar5 = func_1058(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1056(iVar2) && func_1055(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1063(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1054(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_1053(iParam0, (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 - (func_1057(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1058(iVar2, bParam2) / func_1054(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1056(iVar2) && func_1055(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1052(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1052(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x344E6
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return;
	}
	if (func_696(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590446[iParam0 /*871*/].f_273.f_253 = iParam2;
				}
				else
				{
					Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1053(int iParam0, int iParam1)//Position - 0x3455A
{
	if (iParam0 != -1 && iParam1 != Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2)
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1054(int iParam0, int iParam1)//Position - 0x3459F
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (func_696(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1055(int iParam0, int iParam1)//Position - 0x345FE
{
	int iVar0;
	
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (func_696(iParam1) && func_1056(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1056(int iParam0)//Position - 0x34668
{
	return func_583(iParam0) == 5;
}

int func_1057(int iParam0, bool bParam1)//Position - 0x34678
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_583(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16938;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16943;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16937;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16942;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16936;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16941;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16934;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16939;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16935;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16940;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21062;
				if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21063;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21046;
				if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21047;
				}
			}
			break;
	}
	return uVar0;
}

int func_1058(int iParam0, bool bParam1)//Position - 0x347AF
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_583(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16919;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16928);
			}
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16933);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16920;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16927);
			}
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16932);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16921;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16926);
			}
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16931);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16922;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16924);
			}
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16929);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16923;
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16925);
			}
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16930);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21059;
			}
			else
			{
				iVar0 = Global_262145.f_21043;
			}
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21060);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21044);
				}
			}
			if (func_701(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21061);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21045);
				}
			}
			if (func_1055(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1059(int iParam0, bool bParam1)//Position - 0x349B9
{
	if (bParam1)
	{
		return func_690(15384, -1, -1);
	}
	return func_690(func_1060(iParam0), -1, -1);
}

int func_1060(int iParam0)//Position - 0x349DE
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1061(int iParam0, bool bParam1, bool bParam2)//Position - 0x34A38
{
	if (bParam2)
	{
		func_689(15384, bParam1, -1, 1);
		return;
	}
	func_689(func_1060(iParam0), bParam1, -1, 1);
}

int func_1062(int iParam0, bool bParam1)//Position - 0x34A63
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507929[iParam0];
	iVar1 = func_945(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2507936;
	}
	if (func_1056(iVar1))
	{
		if (func_1055(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1063(int iParam0, int iParam1, bool bParam2)//Position - 0x34AAB
{
	if (bParam2)
	{
		Global_2507936 = iParam1;
		return;
	}
	Global_2507929[iParam0] = iParam1;
}

int func_1064(int iParam0, int iParam1)//Position - 0x34ACB
{
	int iVar0;
	
	if (func_703(iParam0, iParam1))
	{
		iVar0 = func_702(iParam0, iParam1);
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_4 > 0 && Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1065()//Position - 0x34B1F
{
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 28);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 29);
	func_1066(24);
}

void func_1066(int iParam0)//Position - 0x34B47
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

void func_1067()//Position - 0x34B70
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_468);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_467);
}

void func_1068(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34B86
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_1674861;
	Var1.f_1 = Global_1674861.f_1;
	Var1.f_2 = Global_1674861.f_2;
	Var1.f_3 = Global_1674861.f_3;
	Var1.f_4 = Global_1674861.f_4;
	Var1.f_5 = Global_1674861.f_5;
	Var1.f_6 = Global_1674861.f_6;
	Var1.f_7 = Global_1674861.f_7;
	Var1.f_8 = Global_1674861.f_8;
	Var1.f_9 = Global_1674861.f_9;
	Var1.f_10 = Global_1674861.f_10;
	Var1.f_11 = Global_1674861.f_11;
	Var1.f_12 = Global_1674861.f_12;
	Var1.f_13 = Global_1674861.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1674861.f_15;
			Var15.f_15 = Global_1674861.f_16;
			Var15.f_16 = Global_1674861.f_17;
			STATS::_0x8D8ADB562F09A245(&Var15);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1674861.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			STATS::_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1674861.f_15;
			Var49.f_15 = iParam0;
			STATS::_0x88087EE1F28024AE(&Var49);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1674861.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			STATS::_0xFCC228E07217FCAC(&Var65);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1674861.f_15;
			Var82.f_15 = iParam0;
			STATS::_0x678F86D8FC040BDB(&Var82);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1674861.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			STATS::_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1674861.f_15;
			STATS::_0x5FF2C33B13A02A11(&Var116);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1674861.f_15;
			STATS::_0x282B6739644F4347(&Var134);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1674861.f_15;
			STATS::_0xF06A6F41CB445443(&Var153);
		}
	}
	func_1069();
}

void func_1069()//Position - 0x34E24
{
	struct<18> Var0;
	
	Global_1674861 = { Var0 };
}

void func_1070(struct<21> Param0)//Position - 0x34E38
{
	func_1117(func_1118(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(3);
	func_1115(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_208, 60);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_268, 193);
	if (!func_1114())
	{
		func_1022();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_1113();
		func_1071(0, 0, 0);
		Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 0;
	}
	else
	{
		func_1022();
	}
}

void func_1071(int iParam0, int iParam1, bool bParam2)//Position - 0x34EA8
{
	func_1112();
	if (func_468(PLAYER::PLAYER_ID()))
	{
		func_1074(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1073(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1674847, 0);
				break;
			}
	}
	if (!func_993() && !func_294(PLAYER::PLAYER_ID(), 1))
	{
		if (func_406())
		{
			func_231(3);
		}
	}
	func_231(4);
	if (func_536(0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_535();
	}
	if (func_429(iParam0))
	{
		func_824();
		Global_1674879.f_18 = func_804(func_359());
	}
	else if (func_434(func_1045(PLAYER::PLAYER_ID())))
	{
		func_822();
		Global_1674933.f_18 = func_804(func_359());
	}
	if (bParam2)
	{
		if (!func_403())
		{
			func_232(1);
		}
	}
	func_1072();
}

void func_1072()//Position - 0x34F96
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1363235.f_534[iVar0 /*42*/].f_1 = func_32();
		Global_1363235.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1073(int iParam0, bool bParam1)//Position - 0x34FD0
{
	return func_328(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_1074(bool bParam0)//Position - 0x34FE4
{
	int iVar0;
	
	func_1066(33);
	func_1066(34);
	func_1066(35);
	func_1066(36);
	func_1066(37);
	func_1066(38);
	func_1066(39);
	func_1066(40);
	func_1066(43);
	func_1066(41);
	func_1066(54);
	func_1066(42);
	func_1066(47);
	func_1111(23);
	func_1111(24);
	func_1066(92);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 2);
	func_1110();
	func_1105();
	func_1100();
	func_1095();
	func_1084();
	func_1080();
	func_1076();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1075(3))
	{
		func_1111(3);
	}
	else if (func_1075(4))
	{
		func_1111(4);
	}
	else if (func_1075(5))
	{
		func_1111(5);
	}
	else if (func_1075(6))
	{
		func_1111(6);
	}
	else if (func_1075(7))
	{
		func_1111(7);
	}
	else if (((((((((((((((((func_1075(0) || func_1075(1)) || func_1075(2)) || func_1075(8)) || func_1075(9)) || func_1075(10)) || func_1075(11)) || func_1075(12)) || func_1075(13)) || func_1075(14)) || func_1075(15)) || func_1075(16)) || func_1075(17)) || func_1075(18)) || func_1075(19)) || func_1075(20)) || func_1075(21)) || func_1075(22))
	{
		func_1111(8);
		func_1111(0);
		func_1111(1);
		func_1111(2);
		func_1111(9);
		func_1111(10);
		func_1111(11);
		func_1111(12);
		func_1111(13);
		func_1111(14);
		func_1111(15);
		func_1111(16);
		func_1111(17);
		func_1111(18);
		func_1111(19);
		func_1111(20);
		func_1111(21);
		func_1111(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1075(int iParam0)//Position - 0x3524A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_14[iVar0], iVar1);
}

void func_1076()//Position - 0x35273
{
	if (func_1078())
	{
		func_1077(0);
		func_1077(1);
		func_1077(2);
		func_1077(3);
	}
}

void func_1077(int iParam0)//Position - 0x35296
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_33[iVar0]), iVar1);
}

int func_1078()//Position - 0x352BF
{
	if (((func_1079(0) || func_1079(1)) || func_1079(2)) || func_1079(3))
	{
		return 1;
	}
	return 0;
}

bool func_1079(int iParam0)//Position - 0x352F5
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_33[iVar0], iVar1);
}

void func_1080()//Position - 0x3531E
{
	if (func_1082())
	{
		func_1081(4);
		func_1081(5);
		func_1081(6);
		func_1081(7);
	}
}

void func_1081(int iParam0)//Position - 0x35341
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_31[iVar0]), iVar1);
}

int func_1082()//Position - 0x3536A
{
	if (((func_1083(4) || func_1083(5)) || func_1083(6)) || func_1083(7))
	{
		return 1;
	}
	return 0;
}

bool func_1083(int iParam0)//Position - 0x353A0
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_31[iVar0], iVar1);
}

void func_1084()//Position - 0x353C9
{
	int iVar0;
	
	if (func_1094())
	{
		func_1093(8);
		func_1093(9);
		func_1093(10);
		func_1093(12);
		func_1093(13);
		func_1093(14);
		func_1093(19);
		func_1093(20);
		func_1093(21);
		func_1093(22);
		func_1093(23);
		func_1093(24);
		func_1093(25);
		func_1093(26);
		func_1093(15);
		func_1093(16);
		func_1093(17);
		func_1093(18);
		func_1093(35);
		func_1093(45);
		func_1093(46);
		if (func_1092(11))
		{
			func_1093(11);
			iVar0 = func_557(7226, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_555(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1092(48))
	{
		if (func_1090(151, 3))
		{
			func_1088(151, 3);
		}
		func_1093(48);
	}
	if (func_1092(49))
	{
		if (func_1090(152, 3))
		{
			func_1088(152, 3);
		}
		func_1093(49);
	}
	if (func_1092(50))
	{
		if (func_1090(153, 3))
		{
			func_1088(153, 3);
		}
		func_1093(50);
	}
	if (func_1092(51))
	{
		if (func_1090(func_1085(), 3))
		{
			func_1088(func_1085(), 3);
		}
		func_1093(51);
	}
}

int func_1085()//Position - 0x35513
{
	if (func_1087())
	{
		func_1086(154, Global_19486, 1);
	}
	return 154;
}

void func_1086(int iParam0, int iParam1, int iParam2)//Position - 0x3552E
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_1087()//Position - 0x35573
{
	int iVar0;
	
	iVar0 = func_87(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_32()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1088(int iParam0, int iParam1)//Position - 0x355B4
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1089(iParam0, iVar0, 0);
			func_1086(iParam0, iVar0, 0);
		}
	}
}

void func_1089(int iParam0, int iParam1, int iParam2)//Position - 0x355E9
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_1090(int iParam0, int iParam1)//Position - 0x3562E
{
	if (func_1091(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1091(int iParam0, int iParam1)//Position - 0x3564A
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_1092(int iParam0)//Position - 0x35674
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_26[iVar0], iVar1);
}

void func_1093(int iParam0)//Position - 0x3569D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_26[iVar0]), iVar1);
}

int func_1094()//Position - 0x356C6
{
	if (((((((((((((((((((((func_1092(8) || func_1092(9)) || func_1092(10)) || func_1092(12)) || func_1092(11)) || func_1092(13)) || func_1092(14)) || func_1092(19)) || func_1092(20)) || func_1092(21)) || func_1092(22)) || func_1092(23)) || func_1092(24)) || func_1092(25)) || func_1092(26)) || func_1092(15)) || func_1092(16)) || func_1092(17)) || func_1092(18)) || func_1092(35)) || func_1092(45)) || func_1092(46))
	{
		return 1;
	}
	return 0;
}

void func_1095()//Position - 0x357D8
{
	if (func_1099())
	{
		func_1098(0);
		func_1098(1);
		func_1098(2);
		func_1098(3);
		func_1098(4);
		func_1098(5);
		if (func_1097(32))
		{
			if (func_1090(func_1096(), 3))
			{
				func_1088(func_1096(), 3);
			}
			func_1098(32);
		}
	}
}

int func_1096()//Position - 0x3582C
{
	if (func_1087())
	{
		func_1086(12, Global_19486, 1);
	}
	return 12;
}

bool func_1097(int iParam0)//Position - 0x35847
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_23[iVar0], iVar1);
}

void func_1098(int iParam0)//Position - 0x35870
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_23[iVar0]), iVar1);
}

int func_1099()//Position - 0x35899
{
	if ((((func_1097(1) || func_1097(0)) || func_1097(2)) || func_1097(4)) || func_1097(5))
	{
		return 1;
	}
	return 0;
}

void func_1100()//Position - 0x358DA
{
	if (func_1104())
	{
		func_1103(0);
		func_1103(1);
		func_1103(2);
		func_1103(3);
		func_1103(4);
		func_1103(5);
		func_1103(6);
		func_1103(7);
		if (func_1102(8))
		{
			func_1103(8);
		}
		if (func_1102(15))
		{
			if (func_1090(func_1101(), 3))
			{
				func_1088(func_1101(), 3);
			}
			func_1103(15);
		}
	}
}

int func_1101()//Position - 0x35947
{
	if (func_1087())
	{
		func_1086(20, Global_19486, 1);
	}
	return 20;
}

bool func_1102(int iParam0)//Position - 0x35962
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_21[iVar0], iVar1);
}

void func_1103(int iParam0)//Position - 0x3598B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_21[iVar0]), iVar1);
}

int func_1104()//Position - 0x359B4
{
	if ((((((((func_1102(0) || func_1102(1)) || func_1102(2)) || func_1102(3)) || func_1102(4)) || func_1102(5)) || func_1102(6)) || func_1102(7)) || func_1102(8))
	{
		return 1;
	}
	return 0;
}

void func_1105()//Position - 0x35A22
{
	if (func_1109())
	{
		func_1108(0);
		func_1108(1);
		func_1108(2);
		func_1108(3);
		func_1108(4);
		func_1108(5);
		func_1108(6);
		func_1108(7);
		func_1108(8);
		func_1108(9);
		func_1108(10);
		func_1108(11);
		func_1108(12);
		if (func_1107(13))
		{
			if (func_1090(func_1106(), 3))
			{
				func_1088(func_1106(), 3);
			}
			func_1108(13);
		}
	}
}

int func_1106()//Position - 0x35A9E
{
	if (func_1087())
	{
		func_1086(76, Global_19486, 1);
	}
	return 76;
}

bool func_1107(int iParam0)//Position - 0x35AB9
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_19[iVar0], iVar1);
}

void func_1108(int iParam0)//Position - 0x35AE2
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_19[iVar0]), iVar1);
}

int func_1109()//Position - 0x35B0B
{
	if ((((((((((((func_1107(0) || func_1107(1)) || func_1107(2)) || func_1107(3)) || func_1107(4)) || func_1107(5)) || func_1107(6)) || func_1107(7)) || func_1107(8)) || func_1107(9)) || func_1107(10)) || func_1107(11)) || func_1107(12))
	{
		return 1;
	}
	return 0;
}

void func_1110()//Position - 0x35BA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2531497.f_4898.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1111(int iParam0)//Position - 0x35BD1
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_14[iVar0]), iVar1);
}

void func_1112()//Position - 0x35BFA
{
	struct<14> Var0;
	
	Global_1674861 = { Var0 };
	Global_1674861.f_14 = 0;
	Global_1674861.f_15 = 0;
}

void func_1113()//Position - 0x35C1C
{
}

int func_1114()//Position - 0x35C24
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
		if (func_1017())
		{
			return 0;
		}
		if (func_1015(157))
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

int func_1115(int iParam0, int iParam1, bool bParam2)//Position - 0x35C7D
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1023();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1116())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1023();
					}
					else
					{
						return 0;
					}
				}
				if (func_1017())
				{
					if (!bParam2)
					{
						func_1023();
					}
					else
					{
						return 0;
					}
				}
				if (func_1015(157))
				{
					if (!bParam2)
					{
						func_1023();
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
					func_1023();
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
				func_1023();
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
			func_1023();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1116()//Position - 0x35D92
{
	return Global_1312850;
}

void func_1117(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x35D9E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1023();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_1118(int iParam0)//Position - 0x35DBD
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

int func_1119(int iParam0, bool bParam1, bool bParam2)//Position - 0x364CF
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

