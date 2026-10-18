// VA 0x140c41490, PDB extent 1122 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::extract_diff
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::extract_diff
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 1122 */

undefined8 *
pdb_140c41490(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uStack_278;
  longlong lStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [144];
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 *puStack_138;
  ushort uStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined1 (*pauStack_e8) [16];
  longlong lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_88 = CONCAT71(uStack_88._1_7_,(char)param_4);
  pdb_140cacab0(param_2 + 0xc);
  pdb_140cacab0(param_2 + 0x12);
  pub_142e32760(auStack_1d8,param_2 + 0x18,0x90);
  param_2[0x18] = 0;
  pub_142e32760(&lStack_270,param_2 + 0x2a,0x90);
  param_2[0x2a] = 0;
  uVar4 = _UNK_143077fd8;
  pauStack_148 = (undefined1 (*) [16])*param_2;
  puStack_138 = *pauStack_148 + param_2[1] + 1;
  auVar1 = *pauStack_148;
  uStack_130 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  lVar7 = param_2[3];
  uStack_110 = param_2[2];
  uStack_108 = param_2[3];
  uStack_120 = *param_2;
  uStack_118 = param_2[1];
  param_2[2] = _DAT_143077fd0;
  param_2[3] = uVar4;
  uVar4 = _UNK_143077fc8;
  *param_2 = _DAT_143077fc0;
  param_2[1] = uVar4;
  pauStack_140 = pauStack_148 + 1;
  uStack_278 = 1;
  uStack_1e0 = 1;
  puStack_f0 = &uStack_88;
  lStack_128 = lVar7;
  puStack_100 = param_2;
  uStack_f8 = param_3;
  pdb_141a32920(&pauStack_e8,&uStack_278);
  if (param_2[3] != 0) {
    uStack_41 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306d0c0,0x2c,&UNK_14306d130);
  }
  if (param_2[0x18] != 0) {
    uStack_41 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306d148,0x2e,&UNK_14306d178);
  }
  if (param_2[0x2a] != 0) {
    uStack_41 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306d190,0x2c,&UNK_14306d1c0);
  }
  if (param_2[9] != 0) {
    uVar2 = param_2[7];
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      lVar7 = uVar2 + 0x11;
      pub_142e32780(param_2[6],0xff);
      uVar5 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
      if (uVar2 < 8) {
        uVar5 = uVar2;
      }
    }
    param_2[9] = 0;
    param_2[8] = uVar5;
  }
  *(undefined1 *)(param_2 + 0x3c) = 0;
  auVar1 = *pauStack_e8;
  if (lStack_e0 == 0) {
    uStack_88 = 0;
  }
  else {
    lVar7 = lStack_e0 * 0x71 + 0x81;
    param_4 = pauStack_e8 + lStack_e0 * -7 + -7;
    uStack_88 = 0x10;
  }
  uStack_68 = pauStack_e8 + 1;
  uStack_60 = *pauStack_e8 + lStack_e0 + 1;
  uStack_70 = pauStack_e8;
  uStack_58 = CONCAT22(uStack_58._2_2_,
                       ~((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf));
  uStack_50 = uStack_d0;
  uStack_42 = 1;
  lStack_80 = lVar7;
  uStack_78 = param_4;
  plVar6 = (longlong *)pdb_14008d710(0);
  if (plVar6 == (longlong *)0x0) {
    uStack_42 = 1;
    pdb_142dc7890(&UNK_143326860);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lStack_98 = *plVar6;
  lStack_90 = plVar6[1];
  *plVar6 = *plVar6 + 1;
  uStack_a8 = _DAT_143366cc0;
  uStack_a0 = _UNK_143366cc8;
  uStack_b8 = _DAT_143366cb0;
  uStack_b0 = _UNK_143366cb8;
  uStack_248 = uStack_58;
  uStack_244 = uStack_54;
  uStack_240 = (undefined4)uStack_50;
  uStack_23c = uStack_50._4_4_;
  uStack_258 = (undefined4)uStack_68;
  uStack_254 = uStack_68._4_4_;
  uStack_250 = (undefined4)uStack_60;
  uStack_24c = uStack_60._4_4_;
  uStack_268 = (undefined4)uStack_78;
  uStack_264 = uStack_78._4_4_;
  uStack_260 = (undefined4)uStack_70;
  uStack_25c = uStack_70._4_4_;
  uStack_278 = uStack_88;
  lStack_270 = lStack_80;
  pdb_1417a63d0(&uStack_b8,&uStack_278);
  param_1[4] = lStack_98;
  param_1[5] = lStack_90;
  param_1[2] = uStack_a8;
  param_1[3] = uStack_a0;
  *param_1 = uStack_b8;
  param_1[1] = uStack_b0;
  return param_1;
}

