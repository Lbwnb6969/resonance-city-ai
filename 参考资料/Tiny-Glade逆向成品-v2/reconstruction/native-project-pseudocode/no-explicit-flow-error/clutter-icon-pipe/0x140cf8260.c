// VA 0x140cf8260, PDB extent 6138 bytes
// clutter_icon_pipe::create_gpu_bake_resources_for_device
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_icon_pipe::create_gpu_bake_resources_for_device
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 6138 */

void pdb_140cf8260(undefined8 *param_1,longlong *param_2,int *param_3,undefined1 param_4)

{
  byte ******ppppppbVar1;
  code *pcVar2;
  undefined4 uVar3;
  byte *******pppppppbVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte *******pppppppbVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte *******pppppppbVar11;
  int aiStack_718 [60];
  undefined8 auStack_628 [2];
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  longlong *plStack_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  char cStack_540;
  undefined2 uStack_53c;
  char cStack_530;
  int iStack_52c;
  int iStack_4f0;
  ushort uStack_4ec;
  int iStack_4a8;
  byte *******pppppppbStack_498;
  byte *******pppppppbStack_490;
  undefined8 uStack_488;
  undefined4 auStack_480 [2];
  undefined1 uStack_478;
  undefined1 auStack_477 [3];
  undefined4 auStack_474 [5];
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  int iStack_3d8;
  int iStack_3d4;
  int iStack_3d0;
  int iStack_3cc;
  int iStack_3c8;
  int iStack_3c4;
  int iStack_3c0;
  int iStack_3bc;
  int iStack_3b8;
  int iStack_3b4;
  int iStack_3b0;
  int iStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 auStack_358 [240];
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  byte *******pppppppbStack_258;
  byte *******pppppppbStack_250;
  byte *******pppppppbStack_248;
  byte *******pppppppbStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  byte *******pppppppbStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  byte ******ppppppbStack_120;
  undefined8 uStack_118;
  byte *******pppppppbStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  int iStack_d4;
  uint uStack_d0;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  byte *******pppppppbStack_c0;
  undefined8 uStack_b8;
  byte *******pppppppbStack_b0;
  undefined8 uStack_a8;
  int *piStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  byte *******pppppppbStack_68;
  longlong *plStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pppppppbStack_498 = (byte *******)CONCAT44(pppppppbStack_498._4_4_,0xb);
  pppppppbStack_490 = (byte *******)0x0;
  uStack_488._0_4_ = _DAT_142f41490;
  uStack_488._4_4_ = _UNK_142f41494;
  auStack_480[0] = _UNK_142f41498;
  auStack_480[1] = _UNK_142f4149c;
  piStack_a0 = param_3;
  plStack_60 = param_2;
  aiStack_718[0] = (*(code *)param_2[0x32])(param_2[0xcd],&pppppppbStack_498,0,aiStack_718);
  if (aiStack_718[0] != 0) {
    uStack_4b = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433d35f8,0x1b,aiStack_718,&UNK_1433d3348,&UNK_1433d3618);
  }
  LOCK();
  lVar7 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY8(lVar7,1) != *param_2 < 0) {
LAB_140cf92cd:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_5f8 = 8;
  uStack_578 = 0;
  uStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5d8 = _DAT_1433d3640;
  uStack_5d4 = _UNK_1433d3644;
  uStack_5d0 = _UNK_1433d3648;
  uStack_5cc = _UNK_1433d364c;
  uStack_5c8 = _DAT_1433d3650;
  uStack_5c4 = _UNK_1433d3654;
  uStack_5c0 = _UNK_1433d3658;
  uStack_5bc = _UNK_1433d365c;
  uStack_5b8 = 0;
  uStack_5b0 = 0;
  uStack_5a8 = _DAT_1433d3640;
  uStack_5a4 = _UNK_1433d3644;
  uStack_5a0 = _UNK_1433d3648;
  uStack_59c = _UNK_1433d364c;
  uStack_598 = _DAT_1433d3650;
  uStack_594 = _UNK_1433d3654;
  uStack_590 = _UNK_1433d3658;
  uStack_58c = _UNK_1433d365c;
  uStack_588 = 0;
  uStack_580 = 0;
  auStack_628[0] = 0;
  uStack_618 = 0;
  uStack_610 = 8;
  uStack_608 = 0;
  uStack_600 = 0;
  uStack_49 = 1;
  plStack_5e0 = param_2;
  pdb_140e45350(&uStack_168,&plStack_60);
  uStack_4c = 1;
  pdb_140e38350(aiStack_718,plStack_60 + 2);
  uStack_4d = 1;
  uStack_98 = pdb_141af5240(plStack_60 + 2,&UNK_143088782,6,&UNK_143088788,0x26);
  uStack_4e = 1;
  uStack_a8 = pdb_141af64b0(plStack_60 + 2,&UNK_1430887ae,4,&UNK_1430887b2,0x1f);
  pppppppbVar4 = (byte *******)pdb_140e72a40(&uStack_98);
  uStack_560 = (code *)pdb_140e72a40(&uStack_a8);
  uStack_568 = pppppppbVar4;
  pdb_140e444a0(&pppppppbStack_240,&uStack_168,&UNK_1430885a0,0x22,&uStack_568,2);
  if (pppppppbStack_240 != (byte *******)0x8000000000000001) {
    uStack_450 = CONCAT44(uStack_1f4,uStack_1f8);
    uStack_448 = (undefined4)uStack_1f0;
    uStack_444 = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
    uStack_460 = (undefined *)CONCAT44(uStack_204,uStack_208);
    uStack_458 = (undefined *)CONCAT44(uStack_1fc,uStack_200);
    auStack_474[1] = uStack_218;
    auStack_474[2] = uStack_214;
    auStack_474[3] = uStack_210;
    auStack_474[4] = uStack_20c;
    auStack_480[0] = uStack_228;
    auStack_480[1] = uStack_224;
    _uStack_478 = uStack_220;
    auStack_474[0] = uStack_21c;
    pppppppbStack_490 = (byte *******)uStack_238;
    uStack_488._0_4_ = uStack_230;
    uStack_488._4_4_ = uStack_22c;
    pppppppbStack_498 = pppppppbStack_240;
    uVar5 = pdb_142df7e80(&pppppppbStack_498);
    param_1[1] = uVar5;
    *param_1 = 2;
    goto LAB_140cf91a6;
  }
  uStack_b8 = pdb_140e51270(plStack_60 + 2,&uStack_98);
  pppppppbStack_70 = (byte *******)CONCAT71(pppppppbStack_70._1_7_,param_4);
  pppppppbStack_88 = (byte *******)0x0;
  pppppppbStack_80 = (byte *******)0x8;
  pppppppbStack_78 = (byte *******)0x0;
  uStack_488._0_4_ = 0x43087b70;
  uStack_488._4_4_ = 1;
  auStack_480[0] = 0xf;
  auStack_480[1] = 0;
  _uStack_478 = CONCAT31(auStack_477,7);
  auStack_474[1] = 0x43087b7f;
  auStack_474[2] = 1;
  auStack_474[3] = 0xc;
  auStack_474[4] = 0;
  uStack_460 = (undefined *)CONCAT71(uStack_460._1_7_,7);
  uStack_458 = &UNK_143087b8b;
  uStack_450 = 0xd;
  uStack_448 = CONCAT31(uStack_448._1_3_,7);
  uStack_440._0_4_ = 0x43087b98;
  uStack_440._4_4_ = 1;
  uStack_438 = 9;
  uStack_430 = 6;
  puStack_428 = &UNK_143087ba1;
  uStack_420 = 5;
  uStack_418 = 3;
  puStack_90 = param_1;
  for (lVar7 = 0; (lVar7 != 5 && ((&uStack_478)[lVar7 * 0x18] != '\x0e')); lVar7 = lVar7 + 1) {
    uStack_568 = (byte *******)
                 CONCAT44(*(undefined4 *)((longlong)&uStack_488 + lVar7 * 0x18 + 4),
                          *(undefined4 *)(&uStack_488 + lVar7 * 3));
    uStack_560 = (code *)CONCAT44(auStack_480[lVar7 * 6 + 1],auStack_480[lVar7 * 6]);
    uStack_558 = CONCAT31((int3)*(undefined4 *)(auStack_477 + lVar7 * 0x18),
                          (&uStack_478)[lVar7 * 0x18]);
    uStack_554._1_3_ = (undefined3)((uint)auStack_474[lVar7 * 6] >> 8);
    uStack_554._0_1_ = (undefined1)((uint)*(undefined4 *)(auStack_477 + lVar7 * 0x18) >> 0x18);
    pdb_140e46860(&pppppppbStack_240,&uStack_568);
    pppppppbVar4 = pppppppbStack_78;
    if (pppppppbStack_78 == pppppppbStack_88) {
      pdb_142d7e6e0(&pppppppbStack_88);
    }
    pppppppbStack_80[(longlong)pppppppbVar4 * 4 + 2] = (byte ******)CONCAT44(uStack_22c,uStack_230);
    (pppppppbStack_80 + (longlong)pppppppbVar4 * 4 + 2)[1] =
         (byte ******)CONCAT44(uStack_224,uStack_228);
    pppppppbStack_80[(longlong)pppppppbVar4 * 4] = (byte ******)pppppppbStack_240;
    (pppppppbStack_80 + (longlong)pppppppbVar4 * 4)[1] = (byte ******)uStack_238;
    pppppppbStack_78 = (byte *******)((longlong)pppppppbVar4 + 1);
  }
  uStack_108 = pppppppbStack_88;
  uStack_100 = pppppppbStack_80;
  pppppppbStack_f8 = pppppppbStack_78;
  uStack_488._0_4_ = 4;
  uStack_488._4_4_ = 0;
  auStack_480[0] = 0x125;
  auStack_480[1] = 0;
  _uStack_478 = 0x125;
  auStack_474[0] = 0;
  auStack_474[1] = 0x164;
  auStack_474[2] = 0;
  auStack_474[3] = 0x161;
  uStack_444 = 0;
  uStack_440._0_4_ = 0x17e;
  uStack_440._4_4_ = CONCAT31(uStack_440._5_3_,2);
  pppppppbStack_498 = (byte *******)0x0;
  uStack_438 = _DAT_142e378e0;
  uStack_430 = 0;
  pppppppbVar4 = (byte *******)pdb_140e517a0(plStack_60 + 2,&pppppppbStack_498);
  plVar9 = plStack_60;
  uStack_4a = 1;
  pppppppbStack_170 = pppppppbVar4;
  puVar6 = (undefined8 *)pdb_142df83b0(&uStack_168);
  pppppppbStack_68 = (byte *******)*puVar6;
  LOCK();
  ppppppbVar1 = *pppppppbStack_68;
  *pppppppbStack_68 = (byte ******)((longlong)*pppppppbStack_68 + 1);
  UNLOCK();
  if (*pppppppbStack_68 == (byte ******)0x0 ||
      SCARRY8((longlong)ppppppbVar1,1) != (longlong)*pppppppbStack_68 < 0) goto LAB_140cf92cd;
  uStack_568 = pppppppbStack_68;
  pppppppbStack_498 = pppppppbVar4;
  uVar3 = pdb_140e396e0();
  uStack_238 = (code *)(CONCAT44(uStack_238._4_4_,uVar3) & 0xfffffffffffffff3);
  uStack_51 = 1;
  pppppppbStack_240 = pppppppbVar4;
  pdb_1415e6f90(&pppppppbStack_498,&uStack_108);
  uStack_51 = 0;
  pppppppbVar4 = pppppppbStack_68;
  lVar7 = pdb_141af7c40(plVar9 + 2,pppppppbStack_68,&pppppppbStack_240,&pppppppbStack_498);
  if (lVar7 == 1) {
    puStack_90[1] = pppppppbVar4;
    *puStack_90 = 2;
  }
  else {
    plVar9 = plStack_60 + 2;
    pppppppbStack_c0 = pppppppbVar4;
    if ((char)pppppppbStack_70 == '\0') {
      ppppppbStack_120 = (byte ******)&UNK_1430886d7;
      uStack_118 = 0x27;
      if (2 < *_DAT_143ca8e90) {
        pppppppbStack_240 = &ppppppbStack_120;
        uStack_238 = pdb_1402ed400;
        pppppppbStack_498 = (byte *******)0x0;
        pppppppbStack_490 = (byte *******)&UNK_143087c7d;
        uStack_488._0_4_ = 0x11;
        uStack_488._4_4_ = 0;
        auStack_480[0] = 0;
        auStack_480[1] = 0;
        _uStack_478 = 0x43087b18;
        auStack_474[0] = 1;
        auStack_474[1] = 0x23;
        auStack_474[2] = 0;
        auStack_474[3] = 3;
        auStack_474[4] = 0;
        uStack_460 = &UNK_143087c7d;
        uStack_458 = (undefined *)0x11;
        uStack_450 = 0x28000000001;
        uStack_448 = 0x430886fe;
        uStack_444 = 1;
        uStack_440 = (byte *******)&pppppppbStack_240;
        pdb_140f332f0(&uStack_52,&pppppppbStack_498);
      }
      pdb_140f55fb0(&pppppppbStack_498,&UNK_1430886d7,0x27);
      pdb_141d624e0(&pppppppbStack_240,&pppppppbStack_498,&ppppppbStack_120);
      puVar6 = puStack_90;
      pppppppbVar4 = (byte *******)uStack_238;
      if (!SBORROW8(0,(longlong)pppppppbStack_240)) {
        pppppppbStack_f0 = pppppppbStack_240;
        pppppppbStack_e8 = (byte *******)uStack_238;
        pppppppbStack_88 = (byte *******)&pppppppbStack_f0;
        pppppppbStack_80 = (byte *******)0x0;
        pdb_141d64a00(&pppppppbStack_498,&pppppppbStack_88);
        puVar6 = puStack_90;
        pdb_141d62200(&pppppppbStack_240,&pppppppbStack_498,&ppppppbStack_120);
        pppppppbVar4 = (byte *******)uStack_238;
        pppppppbVar8 = pppppppbStack_240;
        if (!SBORROW8(0,(longlong)pppppppbStack_240)) {
          pub_142e32760(&uStack_558,&uStack_230,0xc0);
          uStack_568 = pppppppbVar8;
          uStack_560 = (code *)pppppppbVar4;
          pppppppbStack_68 = pppppppbVar8;
          pppppppbStack_70 = pppppppbVar4;
          if (iStack_4a8 == 0x43) {
            uStack_d0 = iStack_4f0 << 0x10 | (uint)uStack_4ec;
            uStack_cc = 1;
            if (cStack_540 != '\0') {
              uStack_cc = uStack_53c;
            }
            iStack_d4 = 0;
            uStack_ca = 1;
            uStack_c8 = 0x17b0108;
            uStack_c4 = 4;
            pdb_141d65530(&pppppppbStack_498,&uStack_568,0);
            pdb_141d62970(&pppppppbStack_250,&pppppppbStack_498,&UNK_14308872d,0x1f);
            pppppppbVar4 = pppppppbStack_248;
            if (pppppppbStack_250 != (byte *******)0x0) {
              pppppppbStack_80 = pppppppbStack_250;
              pppppppbStack_78 = pppppppbStack_248;
              pppppppbStack_88 = (byte *******)0x3;
              pdb_141afce80(&pppppppbStack_240,plVar9,&UNK_14308874c,0xf,&iStack_d4,
                            &pppppppbStack_88);
              pppppppbVar4 = (byte *******)uStack_238;
              if (pppppppbStack_240 == (byte *******)0xb) {
                if (pppppppbStack_68 != (byte *******)0x0) {
                  pub_1406abac0((byte *)pppppppbStack_70,(ulonglong)pppppppbStack_68,1);
                }
                if (pppppppbStack_f0 != (byte *******)0x0) {
                  pub_1406abac0((byte *)pppppppbStack_e8,(ulonglong)pppppppbStack_f0,1);
                }
                goto LAB_140cf8b63;
              }
              uStack_458 = (undefined *)CONCAT44(uStack_1fc,uStack_200);
              uStack_450 = CONCAT44(uStack_1f4,uStack_1f8);
              auStack_474[3] = uStack_210;
              auStack_474[4] = uStack_20c;
              uStack_460 = (undefined *)CONCAT44(uStack_204,uStack_208);
              _uStack_478 = uStack_220;
              auStack_474[0] = uStack_21c;
              auStack_474[1] = uStack_218;
              auStack_474[2] = uStack_214;
              uStack_488._0_4_ = uStack_230;
              uStack_488._4_4_ = uStack_22c;
              auStack_480[0] = uStack_228;
              auStack_480[1] = uStack_224;
              pppppppbStack_498 = pppppppbStack_240;
              pppppppbStack_490 = (byte *******)uStack_238;
              pppppppbVar4 = (byte *******)pdb_142df7fb0(&pppppppbStack_498);
            }
          }
          else {
            if ((iStack_4a8 == 0x85) && (iStack_4a8 = 0x85, cStack_530 != '\0')) {
              if (iStack_52c < 0x32495441) {
                if (iStack_52c == 0x31495441) {
                  iStack_4a8 = 0x50;
                }
                else if (iStack_52c == 0x31545844) {
                  iStack_4a8 = 0x48;
                }
              }
              else if (iStack_52c == 0x32495441) {
                iStack_4a8 = 0x53;
              }
              else if (iStack_52c == 0x33545844) {
                iStack_4a8 = 0x4b;
              }
              else if (iStack_52c == 0x35545844) {
                iStack_4a8 = 0x4e;
              }
            }
            pppppppbStack_490 = (byte *******)pdb_1402ed400;
            uStack_488 = &iStack_d4;
            auStack_480[0] = 0x40cf9f50;
            auStack_480[1] = 1;
            pppppppbStack_498 = &ppppppbStack_120;
            iStack_d4 = iStack_4a8;
            pdb_140f60760(&pppppppbStack_240,&UNK_14308875b,&pppppppbStack_498);
            pppppppbStack_88 = pppppppbStack_240;
            pppppppbStack_80 = (byte *******)uStack_238;
            pppppppbStack_78 = (byte *******)CONCAT44(uStack_22c,uStack_230);
            pppppppbVar4 = (byte *******)pdb_142df6ed0(&pppppppbStack_88);
          }
          if (pppppppbStack_68 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_70,(ulonglong)pppppppbStack_68,1);
          }
        }
        if (pppppppbStack_f0 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_e8,(ulonglong)pppppppbStack_f0,1);
        }
      }
    }
    else {
      pdb_140cf7a90(&pppppppbStack_498,&UNK_14308874c,0xf);
      puVar6 = puStack_90;
      pppppppbVar4 = pppppppbStack_490;
      if (SBORROW8(0,(longlong)pppppppbStack_498)) {
LAB_140cf8b54:
        uVar10 = 1;
      }
      else {
        uStack_230 = (undefined4)uStack_488;
        uStack_22c = uStack_488._4_4_;
        uStack_228 = auStack_480[0];
        uStack_224 = auStack_480[1];
        pppppppbStack_70 = pppppppbStack_498;
        pppppppbStack_240 = pppppppbStack_498;
        uStack_238 = (code *)pppppppbStack_490;
        pppppppbVar4 = (byte *******)CONCAT44(uStack_488._4_4_,(undefined4)uStack_488);
        pppppppbStack_68 = pppppppbStack_490;
        if (2 < *_DAT_143ca8e90) {
          pppppppbStack_88 = pppppppbStack_490;
          uStack_560 = pdb_140f58310;
          pppppppbStack_498 = (byte *******)0x0;
          pppppppbStack_490 = (byte *******)&UNK_143087c7d;
          uStack_488._0_4_ = 0x11;
          uStack_488._4_4_ = 0;
          auStack_480[0] = 0;
          auStack_480[1] = 0;
          _uStack_478 = 0x43087b18;
          auStack_474[0] = 1;
          auStack_474[1] = 0x23;
          auStack_474[2] = 0;
          auStack_474[3] = 3;
          auStack_474[4] = 0;
          uStack_460 = &UNK_143087c7d;
          uStack_458 = (undefined *)0x11;
          uStack_450 = 0x29d00000001;
          uStack_448 = 0x430887d1;
          uStack_444 = 1;
          uStack_568 = (byte *******)&pppppppbStack_88;
          pppppppbStack_80 = pppppppbVar4;
          uStack_440 = (byte *******)&uStack_568;
          pdb_140f332f0(&uStack_52,&pppppppbStack_498);
        }
        pdb_140f55fb0(&pppppppbStack_498,pppppppbStack_68,pppppppbVar4);
        pdb_141d62800(&uStack_568,&pppppppbStack_498,&pppppppbStack_240);
        pppppppbVar4 = (byte *******)uStack_560;
        if (SBORROW8(0,(longlong)uStack_568)) {
          if (pppppppbStack_70 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_68,(ulonglong)pppppppbStack_70,1);
          }
          goto LAB_140cf8b54;
        }
        pppppppbStack_b0 = uStack_568;
        pppppppbVar4 = (byte *******)&UNK_14308874c;
        pppppppbStack_110 = (byte *******)uStack_560;
        uVar10 = pdb_140cf80e0(plVar9,&UNK_14308874c,0xf,uStack_560,CONCAT44(uStack_554,uStack_558))
        ;
        pppppppbVar8 = pppppppbStack_68;
        if (pppppppbStack_b0 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_110,(ulonglong)pppppppbStack_b0,1);
        }
        if (pppppppbStack_70 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbVar8,(ulonglong)pppppppbStack_70,1);
        }
      }
      if ((uVar10 & 1) == 0) {
LAB_140cf8b63:
        plVar9 = plStack_60;
        uStack_368 = *(undefined8 *)(piStack_a0 + 0x1c);
        uStack_360 = *(undefined8 *)(piStack_a0 + 0x1e);
        uStack_378 = *(undefined8 *)(piStack_a0 + 0x18);
        uStack_370 = *(undefined8 *)(piStack_a0 + 0x1a);
        uStack_388 = *(undefined8 *)(piStack_a0 + 0x14);
        uStack_380 = *(undefined8 *)(piStack_a0 + 0x16);
        uStack_398 = *(undefined8 *)(piStack_a0 + 0x10);
        uStack_390 = *(undefined8 *)(piStack_a0 + 0x12);
        iStack_3d8 = *piStack_a0;
        iStack_3d4 = piStack_a0[1];
        iStack_3d0 = piStack_a0[2];
        iStack_3cc = piStack_a0[3];
        iStack_3c8 = piStack_a0[4];
        iStack_3c4 = piStack_a0[5];
        iStack_3c0 = piStack_a0[6];
        iStack_3bc = piStack_a0[7];
        iStack_3b8 = piStack_a0[8];
        iStack_3b4 = piStack_a0[9];
        iStack_3b0 = piStack_a0[10];
        iStack_3ac = piStack_a0[0xb];
        iStack_3a8 = piStack_a0[0xc];
        iStack_3a4 = piStack_a0[0xd];
        iStack_3a0 = piStack_a0[0xe];
        iStack_39c = piStack_a0[0xf];
        pub_142e32760(&pppppppbStack_498,auStack_628,0xc0);
        *(undefined4 *)(puVar6 + 0x4a) = uStack_168;
        *(undefined4 *)((longlong)puVar6 + 0x254) = uStack_164;
        *(undefined4 *)(puVar6 + 0x4b) = uStack_160;
        *(undefined4 *)((longlong)puVar6 + 0x25c) = uStack_15c;
        *(undefined4 *)(puVar6 + 0x4c) = uStack_158;
        *(undefined4 *)((longlong)puVar6 + 0x264) = uStack_154;
        *(undefined4 *)(puVar6 + 0x4d) = uStack_150;
        *(undefined4 *)((longlong)puVar6 + 0x26c) = uStack_14c;
        *(undefined4 *)(puVar6 + 0x4e) = uStack_148;
        *(undefined4 *)((longlong)puVar6 + 0x274) = uStack_144;
        *(undefined4 *)(puVar6 + 0x4f) = uStack_140;
        *(undefined4 *)((longlong)puVar6 + 0x27c) = uStack_13c;
        *(undefined4 *)(puVar6 + 0x50) = uStack_138;
        *(undefined4 *)((longlong)puVar6 + 0x284) = uStack_134;
        *(undefined4 *)(puVar6 + 0x51) = uStack_130;
        *(undefined4 *)((longlong)puVar6 + 0x28c) = uStack_12c;
        puVar6[0x52] = uStack_128;
        pub_142e32760(auStack_358,aiStack_718,0xf0);
        uVar5 = uStack_b8;
        pppppppbVar8 = pppppppbStack_c0;
        uStack_268 = (undefined4)uStack_108;
        uStack_264 = uStack_108._4_4_;
        uStack_260 = (undefined4)uStack_100;
        uStack_25c = uStack_100._4_4_;
        pppppppbStack_258 = pppppppbStack_f8;
        pub_142e32760(puVar6,&pppppppbStack_498,0x248);
        puVar6[0x49] = plVar9;
        puVar6[0x53] = uVar5;
        puVar6[0x54] = pppppppbVar8;
        puVar6[0x55] = pppppppbVar4;
        uStack_4e = 0;
        pdb_141d550f0(&uStack_a8);
        uStack_4d = 0;
        pdb_141d550f0(&uStack_98);
        return;
      }
    }
    puVar6[1] = pppppppbVar4;
    *puVar6 = 2;
    uStack_4a = 0;
    pdb_141d531c0(&pppppppbStack_c0);
  }
  pppppppbVar4 = uStack_100;
  if (pppppppbStack_f8 != (byte *******)0x0) {
    pppppppbVar8 = uStack_100 + 1;
    pppppppbVar11 = pppppppbStack_f8;
    do {
      if (pppppppbVar8[-1] != (byte ******)0x0) {
        pub_1406abac0((byte *)*pppppppbVar8,(longlong)pppppppbVar8[-1] * 0x18,8);
      }
      pppppppbVar8 = pppppppbVar8 + 4;
      pppppppbVar11 = (byte *******)((longlong)pppppppbVar11 + -1);
    } while (pppppppbVar11 != (byte *******)0x0);
  }
  if (uStack_108 != (byte *******)0x0) {
    pub_1406abac0((byte *)pppppppbVar4,(longlong)uStack_108 << 5,8);
  }
  pdb_141d537b0(&uStack_b8);
LAB_140cf91a6:
  uStack_4e = 1;
  pdb_141d550f0(&uStack_a8);
  uStack_4d = 1;
  pdb_141d550f0(&uStack_98);
  uStack_4c = 1;
  pdb_141d545e0(aiStack_718);
  plVar9 = (longlong *)CONCAT44(uStack_164,uStack_168);
  LOCK();
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (*plVar9 == 0) {
    pdb_140e3f860(&uStack_168);
  }
  pdb_140cfa780(&uStack_160,&uStack_140,0x48,0x10);
  uStack_49 = 1;
  pdb_140cfa680(&uStack_140,&ppppppbStack_120,0x48,0x10);
  uStack_4b = 1;
  pdb_141d4ef00(auStack_628);
  if (*piStack_a0 != 0x19) {
    uStack_50 = 1;
    pdb_141d535d0();
  }
  LOCK();
  *plStack_60 = *plStack_60 + -1;
  UNLOCK();
  if (*plStack_60 == 0) {
    pdb_140e3f860(&plStack_60);
  }
  return;
}

