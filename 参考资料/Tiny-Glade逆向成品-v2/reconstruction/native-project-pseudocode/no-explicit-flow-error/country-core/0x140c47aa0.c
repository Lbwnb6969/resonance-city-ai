// VA 0x140c47aa0, PDB extent 7692 bytes
// country_core::systems::ui_elevate_wall_group::ui_elevate_wall_group
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_elevate_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_elevate_wall_group::ui_elevate_wall_group
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_elevate_wall_group.rs
   Extent: 7692 */

void pdb_140c47aa0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong param_8,
                  longlong param_9,undefined8 *param_10)

{
  char *pcVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  char cVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte *pbVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined *puVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  ushort uVar32;
  longlong lVar33;
  byte bVar34;
  undefined8 uVar35;
  bool bVar36;
  byte bVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 uVar49;
  undefined1 unaff_XMM6_Bb;
  undefined1 uVar50;
  undefined1 unaff_XMM6_Bc;
  undefined1 uVar51;
  undefined1 unaff_XMM6_Bd;
  undefined1 uVar52;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  float fVar53;
  undefined1 unaff_XMM11_Ba;
  undefined1 unaff_XMM11_Bb;
  undefined1 unaff_XMM11_Bc;
  undefined1 unaff_XMM11_Bd;
  undefined1 unaff_XMM11_Be;
  undefined1 unaff_XMM11_Bf;
  undefined1 unaff_XMM11_Bg;
  undefined1 unaff_XMM11_Bh;
  undefined1 unaff_XMM11_Bi;
  undefined1 unaff_XMM11_Bj;
  undefined1 unaff_XMM11_Bk;
  undefined1 unaff_XMM11_Bl;
  undefined1 unaff_XMM11_Bm;
  undefined1 unaff_XMM11_Bn;
  undefined1 unaff_XMM11_Bo;
  undefined1 unaff_XMM11_Bp;
  longlong lStack_4e8;
  longlong lStack_4e0;
  longlong lStack_4d8;
  longlong lStack_4d0;
  longlong lStack_4c8;
  longlong lStack_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  longlong lStack_4a8;
  longlong lStack_4a0;
  longlong lStack_498;
  longlong lStack_490;
  longlong lStack_488;
  longlong lStack_478;
  longlong lStack_470;
  longlong lStack_468;
  longlong lStack_460;
  longlong lStack_458;
  longlong lStack_450;
  longlong lStack_448;
  longlong lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f0 [24];
  longlong *plStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  byte *pbStack_3b0;
  undefined *puStack_3a8;
  undefined1 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  longlong lStack_358;
  undefined *puStack_350;
  longlong *plStack_348;
  undefined4 *puStack_340;
  longlong lStack_338;
  longlong lStack_330;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  longlong *plStack_318;
  undefined8 uStack_310;
  undefined4 *puStack_308;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [16];
  undefined8 uStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  byte *pbStack_2d0;
  undefined *puStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined4 *puStack_278;
  code *pcStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_248;
  undefined1 uStack_230;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined2 uStack_200;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong lStack_198;
  byte *pbStack_190;
  undefined4 uStack_188;
  undefined3 uStack_184;
  longlong lStack_180;
  ulonglong uStack_178;
  longlong *plStack_170;
  uint uStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  byte bStack_158;
  undefined6 uStack_157;
  undefined1 uStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  ulonglong uStack_128;
  byte *pbStack_120;
  ulonglong uStack_118;
  longlong lStack_110;
  float fStack_108;
  byte *pbStack_100;
  longlong lStack_f8;
  undefined4 *puStack_f0;
  longlong *plStack_e8;
  longlong *plStack_e0;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  plStack_3d8 = (longlong *)*param_4;
  uStack_3d0 = param_4[1];
  uStack_3c8 = param_4[2];
  uStack_3c0 = param_4[3];
  plStack_318 = (longlong *)param_4[4];
  uStack_310 = param_4[5];
  puStack_308 = (undefined4 *)param_4[6];
  uStack_300 = param_4[7];
  lStack_f8 = *param_5;
  lStack_180 = param_5[4];
  puStack_f0 = (undefined4 *)param_5[6];
  plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,*(undefined4 *)((longlong)param_5 + 0x3c));
  lStack_478 = param_5[8];
  lStack_470 = param_5[9];
  lStack_468 = param_5[10];
  lStack_460 = param_5[0xb];
  lStack_458 = param_5[0xc];
  lStack_450 = param_5[0xd];
  lStack_448 = param_5[0xe];
  lStack_440 = param_5[0xf];
  lVar26 = *param_6;
  pbStack_100 = (byte *)param_6[4];
  lStack_488 = param_6[0x14];
  lStack_498 = param_6[0x12];
  lStack_490 = param_6[0x13];
  lStack_4a8 = param_6[0x10];
  lStack_4a0 = param_6[0x11];
  lStack_4e8 = param_6[8];
  lStack_4e0 = param_6[9];
  lStack_4d8 = param_6[10];
  lStack_4d0 = param_6[0xb];
  lStack_4c8 = param_6[0xc];
  lStack_4c0 = param_6[0xd];
  uStack_4b8 = (undefined4)param_6[0xe];
  uStack_4b4 = *(undefined4 *)((longlong)param_6 + 0x74);
  uStack_4b0 = (undefined4)param_6[0xf];
  uStack_4ac = *(undefined4 *)((longlong)param_6 + 0x7c);
  uVar35 = *param_7;
  uVar21 = param_7[4];
  lStack_338 = param_7[8];
  uStack_418 = *(undefined8 *)(param_8 + 0x20);
  uStack_410 = *(undefined8 *)(param_8 + 0x28);
  uStack_408 = *(undefined8 *)(param_8 + 0x30);
  uStack_400 = *(undefined8 *)(param_8 + 0x38);
  uStack_438 = *(undefined8 *)(param_8 + 0x40);
  uStack_430 = *(undefined8 *)(param_8 + 0x48);
  uStack_428 = *(undefined8 *)(param_8 + 0x50);
  uStack_420 = *(undefined8 *)(param_8 + 0x58);
  if ((*(char *)*param_2 != '\0') || (*(int *)((char *)*param_2 + 8) != 3)) {
    param_1[2] = 0;
    return;
  }
  lStack_330 = *(longlong *)(param_9 + 0x20);
  puStack_340 = *(undefined4 **)(param_9 + 0x30);
  uStack_19c = *(undefined4 *)(param_9 + 0x3c);
  uStack_2a8._0_4_ = 134.87656;
  uStack_2a8._4_4_ = 1.4013e-45;
  uStack_2a0._0_4_ = 2.52234e-44;
  uStack_2a0._4_4_ = 0.0;
  plStack_348 = param_1;
  plStack_e8 = param_1;
  lVar17 = pdb_140bbbcb0(&uStack_2a8);
  plVar28 = plStack_3d8;
  plStack_170 = (longlong *)CONCAT71(plStack_170._1_7_,2);
  uStack_178 = CONCAT71(uStack_178._1_7_,*(char *)(lVar26 + 0x18));
  if (*(char *)(lVar26 + 0x18) == '\x02') {
    if (*(longlong *)(lVar26 + 0x38) != lVar17) {
      return;
    }
    plStack_170 = (longlong *)CONCAT71(plStack_170._1_7_,*(char *)(lVar26 + 0x19));
    if (*(char *)(lVar26 + 0x19) == '\x02') {
      return;
    }
  }
  lStack_198 = *param_3;
  if (*(longlong *)(lStack_198 + 0x10) == 0) {
    return;
  }
  if (plStack_3d8[3] == 0) {
    return;
  }
  plVar24 = *(longlong **)(lStack_198 + 8);
  plVar27 = plVar24 + *(longlong *)(lStack_198 + 0x10);
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  lVar17 = *plVar24;
  uStack_2a8._0_4_ = (float)lVar17;
  uStack_2a8._4_4_ = (float)((ulonglong)lVar17 >> 0x20);
LAB_140c47d40:
  uVar18 = pdb_1400af0a0(plVar28 + 4,&uStack_2a8);
  lVar22 = *plVar28;
  bVar37 = (byte)(uVar18 >> 0x39);
  auVar38 = ZEXT216(CONCAT11(bVar37,bVar37));
  auVar38 = pshuflw(auVar38,auVar38,0);
  lVar29 = 0;
  do {
    uVar18 = uVar18 & plVar28[1];
    auVar47 = *(undefined1 (*) [16])(lVar22 + uVar18);
    auVar46[0] = -(auVar47[0] == auVar38[0]);
    auVar46[1] = -(auVar47[1] == auVar38[1]);
    auVar46[2] = -(auVar47[2] == auVar38[2]);
    auVar46[3] = -(auVar47[3] == auVar38[3]);
    auVar46[4] = -(auVar47[4] == auVar38[4]);
    auVar46[5] = -(auVar47[5] == auVar38[5]);
    auVar46[6] = -(auVar47[6] == auVar38[6]);
    auVar46[7] = -(auVar47[7] == auVar38[7]);
    auVar46[8] = -(auVar47[8] == auVar38[0]);
    auVar46[9] = -(auVar47[9] == auVar38[1]);
    auVar46[10] = -(auVar47[10] == auVar38[2]);
    auVar46[0xb] = -(auVar47[0xb] == auVar38[3]);
    auVar46[0xc] = -(auVar47[0xc] == auVar38[4]);
    auVar46[0xd] = -(auVar47[0xd] == auVar38[5]);
    auVar46[0xe] = -(auVar47[0xe] == auVar38[6]);
    auVar46[0xf] = -(auVar47[0xf] == auVar38[7]);
    uVar32 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
    uVar30 = (uint)uVar32;
    while (uVar32 != 0) {
      uVar31 = 0;
      for (uVar7 = uVar30; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar31 = uVar31 + 1;
      }
      lVar33 = (uVar31 + uVar18 & plVar28[1]) * -0x2b0;
      if (lVar17 == *(longlong *)(lVar22 + -0x2b0 + lVar33)) {
        lVar22 = lVar22 + lVar33;
        if ((*(ulonglong *)(lVar22 + -0x298) < 2) || (*(float *)(lVar22 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14306e1a0);
        }
        if (1 < *(uint *)(lVar22 + -0x50)) goto LAB_140c47e08;
        pdb_140b46fd0(&uStack_2a8,*(undefined8 *)(lStack_198 + 8),*(undefined8 *)(lStack_198 + 0x10)
                      ,plStack_3d8,uVar35);
        lVar17 = lStack_180;
        uVar30 = (uint)(float)uStack_288;
        if ((float)uStack_2a8 != 1.4013e-45) {
          return;
        }
        cVar16 = (char)uStack_178;
        if (((char)uStack_178 == '\x02') && (plStack_e8[2] != 0)) {
          fStack_108 = *(float *)(plStack_e8 + 8) * _DAT_142e378e0;
          lStack_110 = CONCAT44((float)((ulonglong)plStack_e8[6] >> 0x20) +
                                *(float *)(plStack_e8 + 8) * _UNK_142e378e4,
                                (float)plStack_e8[6] + fStack_108);
          fStack_108 = fStack_108 + *(float *)(plStack_e8 + 7);
        }
        else {
          lStack_110 = CONCAT44((float)uStack_290 + _UNK_14306deb4,uStack_298._4_4_ + _DAT_14306deb0
                               );
          fStack_108 = uStack_290._4_4_ + 0.0;
        }
        pdb_140e09030(&uStack_2a8,uVar21);
        fVar53 = _DAT_142e36f28;
        fVar45 = _DAT_142e36f28 /
                 SQRT((float)uStack_2a0 * (float)uStack_2a0 + (float)uStack_2a8 * (float)uStack_2a8)
        ;
        pdb_140de88f0(&uStack_2a8,(float)uStack_2a8 * fVar45,fVar45 * (float)uStack_2a0);
        fVar45 = (float)uStack_2a0 * _DAT_14300cc30 * _DAT_142e377d0 +
                 uStack_2a8._4_4_ * _DAT_14300cc20 * _DAT_142e377c0 +
                 (float)uStack_2a8 * _DAT_14300cc30 * _DAT_142e377b0 +
                 uStack_2a0._4_4_ * _DAT_14300cc20;
        fVar39 = (float)uStack_2a0 * _UNK_14300cc34 * _UNK_142e377d4 +
                 uStack_2a8._4_4_ * _UNK_14300cc24 * _UNK_142e377c4 +
                 (float)uStack_2a8 * _UNK_14300cc34 * _UNK_142e377b4 +
                 uStack_2a0._4_4_ * _UNK_14300cc24;
        fVar40 = (float)uStack_2a0 * _UNK_14300cc38 * _UNK_142e377d8 +
                 uStack_2a8._4_4_ * _UNK_14300cc28 * _UNK_142e377c8 +
                 (float)uStack_2a8 * _UNK_14300cc38 * _UNK_142e377b8 +
                 uStack_2a0._4_4_ * _UNK_14300cc28;
        fVar41 = (float)uStack_2a0 * _UNK_14300cc3c * _UNK_142e377dc +
                 uStack_2a8._4_4_ * _UNK_14300cc2c * _UNK_142e377cc +
                 (float)uStack_2a8 * _UNK_14300cc3c * _UNK_142e377bc +
                 uStack_2a0._4_4_ * _UNK_14300cc2c;
        fStack_328 = fVar40 * _DAT_14300cc70 * _DAT_142e377d0 +
                     fVar39 * _DAT_14300cc60 * _DAT_142e377c0 +
                     fVar45 * _DAT_14300cc50 * _DAT_142e377b0 + fVar41 * _DAT_14300cc40;
        fStack_324 = fVar40 * _UNK_14300cc74 * _UNK_142e377d4 +
                     fVar39 * _UNK_14300cc64 * _UNK_142e377c4 +
                     fVar45 * _UNK_14300cc54 * _UNK_142e377b4 + fVar41 * _UNK_14300cc44;
        fStack_320 = fVar40 * _UNK_14300cc78 * _UNK_142e377d8 +
                     fVar39 * _UNK_14300cc68 * _UNK_142e377c8 +
                     fVar45 * _UNK_14300cc58 * _UNK_142e377b8 + fVar41 * _UNK_14300cc48;
        fStack_31c = fVar40 * _UNK_14300cc7c * _UNK_142e377dc +
                     fVar39 * _UNK_14300cc6c * _UNK_142e377cc +
                     fVar45 * _UNK_14300cc5c * _UNK_142e377bc + fVar41 * _UNK_14300cc4c;
        uStack_290._0_4_ = fStack_108 + 0.0;
        uStack_298._0_4_ = (float)lStack_110 + _DAT_14300cc80;
        uStack_298._4_4_ = (float)((ulonglong)lStack_110 >> 0x20) + _UNK_14300cc84;
        uStack_290._4_4_ = 1.0;
        uStack_288._0_4_ = 1.0;
        uStack_288._4_4_ = 0x3f800000;
        uVar49 = (undefined1)_DAT_14300cc00;
        uVar50 = (undefined1)((uint)_DAT_14300cc00 >> 8);
        uVar51 = (undefined1)((uint)_DAT_14300cc00 >> 0x10);
        uVar52 = (undefined1)((uint)_DAT_14300cc00 >> 0x18);
        uStack_2a8._0_4_ = fStack_328;
        uStack_2a8._4_4_ = fStack_324;
        uStack_2a0._0_4_ = fStack_320;
        uStack_2a0._4_4_ = fStack_31c;
        pdb_140b3d590(auStack_3f0,_DAT_142f95160,_DAT_142f95160,_DAT_14300cc00,&uStack_2a8);
        uStack_164._3_1_ = (undefined1)auStack_3f0._0_8_;
        uStack_160 = SUB84(auStack_3f0._0_8_,1);
        uStack_15c._0_3_ = SUB83(auStack_3f0._0_8_,5);
        uStack_15c._3_1_ = (undefined1)auStack_3f0._8_8_;
        bStack_158 = SUB81(auStack_3f0._8_8_,1);
        uStack_157 = SUB86(auStack_3f0._8_8_,2);
        uStack_151 = (undefined1)auStack_3f0._16_8_;
        uStack_150._0_7_ = SUB87(auStack_3f0._16_8_,1);
        uStack_21f = CONCAT44(uStack_164,uStack_168);
        uStack_217 = (undefined7)CONCAT44(uStack_15c,uStack_160);
        uStack_20f = SUB87(auStack_3f0._8_8_,1);
        uStack_2a8._0_4_ = 0.0;
        uStack_2a8._4_4_ = 0.0;
        uStack_2a0._0_4_ = 1.12104e-44;
        uStack_2a0._4_4_ = 0.0;
        uStack_298._0_4_ = 0.0;
        uStack_298._4_4_ = 0.0;
        uStack_290._0_4_ = 1.4013e-45;
        uStack_288._0_4_ = 0.0;
        uStack_288._4_4_ = 0;
        puStack_278 = (undefined4 *)CONCAT44(puStack_278._4_4_,2);
        uStack_260 = 3;
        uStack_248 = 3;
        uStack_230 = 0;
        uStack_220 = 2;
        uStack_200 = 0x100;
        puVar23 = &UNK_14306e066;
        uStack_210 = uStack_15c._3_1_;
        lStack_358 = pdb_140900b80(lVar26,&UNK_14306e066,0x12,&uStack_2a8);
        pbStack_3b0 = pbStack_100;
        uStack_3a0 = 0;
        if ((*(char *)(lStack_358 + 0x18) == '\x01') &&
           (*(undefined **)(lStack_358 + 0x38) == puVar23)) {
          if ((cVar16 != '\x02') && (*(char *)(lStack_358 + 0x19) == '\0')) {
LAB_140c481d4:
            uVar49 = (undefined1)_DAT_142e37838;
            uVar50 = (undefined1)((uint)_DAT_142e37838 >> 8);
            uVar51 = (undefined1)((uint)_DAT_142e37838 >> 0x10);
            uVar52 = (undefined1)((uint)_DAT_142e37838 >> 0x18);
          }
        }
        else if (cVar16 != '\x02') goto LAB_140c481d4;
        uStack_1a0 = CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
        uStack_168 = 0;
        uStack_164 = 0;
        uStack_160 = 2;
        uStack_15c = 0;
        bStack_158 = 0;
        uStack_150._0_7_ = 0x14306e084;
        uStack_150._7_1_ = 0;
        uStack_148 = 10;
        uStack_140 = 1;
        puStack_138 = &UNK_14306e08e;
        uStack_130 = 0x12;
        lVar26 = 0;
        puStack_3a8 = puVar23;
        puStack_350 = puVar23;
        puStack_2c8 = puVar23;
        goto LAB_140c4827e;
      }
      uVar32 = (ushort)(uVar30 - 1) & (ushort)uVar30;
      uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar32);
    }
    auVar42[0] = -(auVar47[0] == (char)iVar9);
    auVar42[1] = -(auVar47[1] == (char)((uint)iVar9 >> 8));
    auVar42[2] = -(auVar47[2] == (char)((uint)iVar9 >> 0x10));
    auVar42[3] = -(auVar47[3] == (char)((uint)iVar9 >> 0x18));
    auVar42[4] = -(auVar47[4] == (char)iVar10);
    auVar42[5] = -(auVar47[5] == (char)((uint)iVar10 >> 8));
    auVar42[6] = -(auVar47[6] == (char)((uint)iVar10 >> 0x10));
    auVar42[7] = -(auVar47[7] == (char)((uint)iVar10 >> 0x18));
    auVar42[8] = -(auVar47[8] == (char)iVar11);
    auVar42[9] = -(auVar47[9] == (char)((uint)iVar11 >> 8));
    auVar42[10] = -(auVar47[10] == (char)((uint)iVar11 >> 0x10));
    auVar42[0xb] = -(auVar47[0xb] == (char)((uint)iVar11 >> 0x18));
    auVar42[0xc] = -(auVar47[0xc] == (char)iVar12);
    auVar42[0xd] = -(auVar47[0xd] == (char)((uint)iVar12 >> 8));
    auVar42[0xe] = -(auVar47[0xe] == (char)((uint)iVar12 >> 0x10));
    auVar42[0xf] = -(auVar47[0xf] == (char)((uint)iVar12 >> 0x18));
    if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') goto LAB_140c47e08;
    uVar18 = uVar18 + lVar29 + 0x10;
    lVar29 = lVar29 + 0x10;
  } while( true );
  while (lVar17 = lVar17 + 0x20, uStack_118 << 5 != lVar17) {
LAB_140c48b9f:
    if ((pbStack_120[lVar17 + 0x18] == bVar34) && (pbStack_120[lVar17 + 0x19] == bVar37))
    goto LAB_140c48c78;
  }
LAB_140c48bb2:
  uVar18 = (ulonglong)(uint)((int)plStack_e0[1] << 3);
  uStack_2d8 = *(undefined4 *)((longlong)plStack_e0 + uVar18 + 0xc);
  uStack_2d4 = *(undefined4 *)((longlong)plStack_e0 + uVar18 + 0x10);
  uStack_d1 = 1;
  pdb_140df4540(&uStack_2a8,&uStack_2d8);
  uVar18 = uStack_118;
  uStack_160 = (uint)(float)uStack_2a0;
  uStack_168 = (uint)(float)uStack_2a8;
  uStack_164 = uStack_2a8._4_4_;
  if (uStack_118 == uStack_128) {
    uStack_d1 = 1;
    pdb_142d7e6e0(&uStack_128);
  }
  lVar17 = uVar18 * 0x20;
  *(longlong *)(pbStack_120 + lVar17) = lVar26;
  *(ulonglong *)(pbStack_120 + lVar17 + 8) = CONCAT44(uStack_164,uStack_168);
  *(uint *)(pbStack_120 + lVar17 + 0x10) = uStack_160;
  *(float *)(pbStack_120 + lVar17 + 0x14) = fVar53;
  pbStack_120[lVar17 + 0x18] = bVar34;
  pbStack_120[lVar17 + 0x19] = bVar37;
  uStack_118 = uVar18 + 1;
  goto LAB_140c48c78;
LAB_140c47e08:
  do {
    plVar24 = plVar24 + 1;
    if (plVar24 == plVar27) {
      return;
    }
    lVar17 = *plVar24;
    uStack_2a8._0_4_ = (float)lVar17;
    uStack_2a8._4_4_ = (float)((ulonglong)lVar17 >> 0x20);
  } while (plVar28[3] == 0);
  goto LAB_140c47d40;
LAB_140c4827e:
  do {
    bVar37 = (&bStack_158)[lVar26 * 0x18];
    if (bVar37 == 2) break;
    uVar35 = (&uStack_150)[lVar26 * 3];
    uVar21 = (&uStack_148)[lVar26 * 3];
    auStack_2f8._8_8_ = uVar21;
    auStack_2f8._0_8_ = uVar35;
    uStack_2a0._0_4_ = 7.6012573;
    uStack_2a0._4_4_ = 1.4013e-45;
    uStack_290._0_4_ = 2.7316895;
    uStack_290._4_4_ = 1.4013e-45;
    pcStack_280 = pdb_140f33730;
    pcStack_270 = pdb_140f70fc0;
    puStack_278 = &uStack_1a0;
    uStack_2a8 = &lStack_110;
    uStack_298 = (longlong **)auStack_2f8;
    uStack_288 = &fStack_328;
    pdb_140f60760(&uStack_128,&UNK_14306e158,&uStack_2a8);
    uVar18 = uStack_118;
    uStack_178 = uStack_128;
    pbStack_190 = pbStack_120;
    uStack_2a0._0_4_ = fStack_108;
    uStack_2a8._0_4_ = (float)lStack_110;
    uStack_2a8._4_4_ = (float)((ulonglong)lStack_110 >> 0x20);
    uVar13 = CONCAT44(fStack_324,fStack_328);
    uVar14 = CONCAT44(fStack_31c,fStack_320);
    pdb_14007ee60();
    pbVar19 = pub_1406abab0(0x50,0x10);
    if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x50);
    }
    lVar26 = lVar26 + 1;
    pbVar19[0] = 1;
    pbVar19[1] = 0;
    pbVar19[2] = 0;
    pbVar19[3] = 0;
    pbVar19[4] = 0;
    pbVar19[5] = 0;
    pbVar19[6] = 0;
    pbVar19[7] = 0;
    pbVar19[8] = 1;
    pbVar19[9] = 0;
    pbVar19[10] = 0;
    pbVar19[0xb] = 0;
    pbVar19[0xc] = 0;
    pbVar19[0xd] = 0;
    pbVar19[0xe] = 0;
    pbVar19[0xf] = 0;
    *(undefined8 *)(pbVar19 + 0x10) = uVar35;
    *(undefined8 *)(pbVar19 + 0x18) = uVar21;
    *(undefined8 *)(pbVar19 + 0x20) = uVar13;
    *(undefined8 *)(pbVar19 + 0x28) = uVar14;
    *(uint *)(pbVar19 + 0x30) = CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
    *(ulonglong *)(pbVar19 + 0x34) = CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
    *(float *)(pbVar19 + 0x3c) = (float)uStack_2a0;
    pbVar19[0x40] = bVar37 & 1;
    uStack_2a8._0_4_ = SUB84(pbVar19,0);
    uStack_2a8._4_4_ = (float)((ulonglong)pbVar19 >> 0x20);
    uStack_2a0._0_4_ = 134.88062;
    uStack_2a0._4_4_ = 1.4013e-45;
    pbStack_2d0 = pbVar19;
    if ((longlong)uVar18 < 0) {
      uVar35 = 0;
LAB_140c486e4:
      pdb_142dc7e2a(uVar35,uVar18);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (uVar18 == 0) {
      pbVar19 = (byte *)0x1;
      lVar17 = lStack_180;
    }
    else {
      pdb_14007ee60(pbStack_100);
      uVar35 = 1;
      pbVar19 = pub_1406abab0(uVar18,1);
      lVar17 = lStack_180;
      if (pbVar19 == (byte *)0x0) goto LAB_140c486e4;
      pub_142e32760(pbVar19,pbStack_190,uVar18);
    }
    uStack_2a8._0_4_ = SUB84(puStack_2c8,0);
    uStack_2a8._4_4_ = (float)((ulonglong)puStack_2c8 >> 0x20);
    uStack_2a0._0_4_ = (float)((uint)(float)uStack_2a0 & 0xffffff00);
    uStack_298._0_4_ = (float)uVar18;
    uStack_298._4_4_ = (float)(uVar18 >> 0x20);
    uStack_290._0_4_ = SUB84(pbVar19,0);
    uStack_290._4_4_ = (float)((ulonglong)pbVar19 >> 0x20);
    pcStack_280 = (code *)pbStack_2d0;
    puStack_278 = (undefined4 *)&UNK_14306e170;
    uStack_288._0_4_ = (float)uStack_298;
    uStack_288._4_4_ = uStack_298._4_4_;
    pdb_141a88350(pbStack_100,&uStack_2a8);
    if (uStack_178 != 0) {
      pub_1406abac0(pbStack_190,uStack_178,1);
    }
  } while (lVar26 != 2);
  plVar28 = plStack_e8;
  uVar31 = 3;
  if (1 < (byte)plStack_170) {
    uVar31 = (uint)(byte)((byte)plStack_170 - 2);
  }
  if ((char)uVar31 == '\x01') {
    lVar26 = *(longlong *)(lStack_198 + 8);
    uStack_2a0 = lVar26 + *(longlong *)(lStack_198 + 0x10) * 8;
    uStack_2a8._0_4_ = (float)lVar26;
    uStack_2a8._4_4_ = (float)((ulonglong)lVar26 >> 0x20);
    uStack_298 = &plStack_318;
    uStack_290 = &plStack_3d8;
    pdb_1415f36d0(&uStack_168,&uStack_2a8);
    if (*plVar28 != 0) {
      pub_1406abac0((byte *)plVar28[1],*plVar28 * 0x30,8);
    }
    plVar28[2] = CONCAT17(uStack_151,CONCAT61(uStack_157,bStack_158));
    *plVar28 = CONCAT44(uStack_164,uStack_168);
    plVar28[1] = CONCAT44(uStack_15c,uStack_160);
    pdb_1415f12a0(&uStack_2a8,plVar28[1],plVar28[2] * 0x30 + plVar28[1]);
    if (plVar28[3] != 0) {
      pub_1406abac0((byte *)plVar28[4],plVar28[3] << 3,8);
    }
    plVar28[5] = (longlong)uStack_298;
    plVar28[3] = CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
    plVar28[4] = uStack_2a0;
    pdb_140c51940(plVar28[4],plVar28[5]);
    *(float *)(plVar28 + 7) = fStack_108;
    plVar28[6] = lStack_110;
    *(ulonglong *)((longlong)plVar28 + 0x3c) = (ulonglong)uVar30;
    pdb_1415f22b0(&uStack_168,plVar28[4],plVar28[4] + plVar28[5] * 8);
    lVar26 = CONCAT17(uStack_151,CONCAT61(uStack_157,bStack_158));
    if (lVar26 == CONCAT44(uStack_164,uStack_168)) {
      pdb_142d7e980(&uStack_168);
    }
    *(undefined8 *)(CONCAT44(uStack_15c,uStack_160) + lVar26 * 0x10) = 1;
    lVar26 = lVar26 + 1;
    bStack_158 = (byte)lVar26;
    uStack_157 = (undefined6)((ulonglong)lVar26 >> 8);
    uStack_151 = (undefined1)((ulonglong)lVar26 >> 0x38);
    *puStack_f0 = plStack_e0._0_4_;
    pdb_140aa3450(lVar17,CONCAT44(uStack_15c,uStack_160),lVar26,lStack_f8,&lStack_478,&UNK_14306e066
                  ,0x12);
    puVar25 = (undefined8 *)plStack_e8[4];
    puVar2 = puVar25 + plStack_e8[5];
    for (; puVar25 != puVar2; puVar25 = puVar25 + 1) {
      uVar35 = *puVar25;
      *puStack_f0 = plStack_e0._0_4_;
      pdb_140c419b0(lVar17,uVar35,lStack_f8);
    }
    *puStack_f0 = plStack_e0._0_4_;
    lVar26 = lStack_f8 + 0x90;
    if (*(longlong *)(lStack_f8 + 0x90) == 0) {
      lVar26 = 0;
    }
    uStack_2a8._0_4_ = 1.4013e-45;
    uStack_2a8._4_4_ = 0.0;
    uStack_2a0._0_4_ = (float)lVar26;
    uStack_2a0._4_4_ = (float)((ulonglong)lVar26 >> 0x20);
    uStack_298._0_4_ = 0.0;
    uStack_298._4_4_ = 0.0;
    pcStack_270 = (code *)0x0;
    pdb_1414e0e70(&uStack_2a8,lVar17 + 0x30);
    if (CONCAT44(uStack_164,uStack_168) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_15c,uStack_160),CONCAT44(uStack_164,uStack_168) << 4,8);
    }
  }
  plVar28 = plStack_e8;
  uStack_168 = (uint)_DAT_14306dec0;
  uStack_164 = (undefined4)((ulonglong)_DAT_14306dec0 >> 0x20);
  uStack_160 = uStack_160 & 0xffffff00;
  pdb_1419bd930(&uStack_2a8,&lStack_4e8,&lStack_358,&plStack_348,&uStack_168);
  fVar45 = (float)uStack_298;
  if (((char)uStack_2a8 != '\0') && (plVar28[2] != 0)) {
    plStack_e0 = (longlong *)pdb_140b4b7e0();
    uStack_168 = *(uint *)(plVar28 + 6);
    uStack_164 = (undefined4)plVar28[7];
    pdb_140df4540(&uStack_2a8,&uStack_168);
    lStack_f8 = CONCAT44(lStack_f8._4_4_,uVar31);
    fVar40 = fVar45 * _DAT_142e378e0;
    fVar41 = fVar45 * _UNK_142e378e4;
    fVar39 = *(float *)(plVar28 + 7);
    *(float *)(plStack_e0 + 1) = (float)uStack_2a0;
    *plStack_e0 = CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
    *(ulonglong *)((longlong)plStack_e0 + 0xc) =
         CONCAT44((float)((ulonglong)plVar28[6] >> 0x20) + fVar41,(float)plVar28[6] + fVar40);
    *(float *)((longlong)plStack_e0 + 0x14) = fVar39 + fVar40;
    uStack_2a8._0_4_ = 2.8026e-45;
    uStack_2a8._4_4_ = 0.0;
    uStack_2a0._0_4_ = SUB84(plStack_e0,0);
    uStack_2a0._4_4_ = (float)((ulonglong)plStack_e0 >> 0x20);
    uStack_298._0_4_ = 2.8026e-45;
    uStack_298._4_4_ = 0.0;
    uStack_290._0_4_ = 0.0;
    uStack_290._4_4_ = -0.0;
    puStack_278 = (undefined4 *)((ulonglong)puStack_278 & 0xffffffff00000000);
    uStack_268 = 0x1013f800000;
    pdb_140ab32d0(&uStack_2a8,&pbStack_3b0);
    uVar30 = CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) ^
             CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
    uVar49 = (undefined1)uVar30;
    uVar50 = (undefined1)(uVar30 >> 8);
    uVar51 = (undefined1)(uVar30 >> 0x10);
    uVar52 = (undefined1)(uVar30 >> 0x18);
    if (0.0 < *(float *)(lStack_338 + 0x28)) {
      fVar39 = (float)((uint)(fVar45 - *(float *)(plVar28 + 8)) & _DAT_142e377e0) /
               *(float *)(lStack_338 + 0x28);
      uVar49 = SUB41(fVar39,0);
      uVar50 = (undefined1)((uint)fVar39 >> 8);
      uVar51 = (undefined1)((uint)fVar39 >> 0x10);
      uVar52 = (undefined1)((uint)fVar39 >> 0x18);
    }
    fVar40 = (float)pdb_140de8220();
    fVar39 = 0.0;
    if (0.0 <= fVar40) {
      fVar39 = fVar40;
    }
    if (fVar39 <= fVar53) {
      fVar53 = fVar39;
    }
    pdb_140b4b530(&lStack_2c0,plVar28[2]);
    fVar39 = _DAT_142f3e554;
    uStack_128 = 0;
    pbStack_120 = (byte *)0x8;
    uStack_118 = 0;
    plVar27 = (longlong *)plVar28[1];
    plStack_170 = plVar27 + plVar28[2] * 6;
    uVar30 = 2;
    iVar9 = -(uint)(CONCAT13(unaff_XMM11_Bd,
                             CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))) ==
                   CONCAT13(unaff_XMM11_Bd,
                            CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM11_Bh,
                              CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))) ==
                    CONCAT13(unaff_XMM11_Bh,
                             CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM11_Bl,
                              CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))) ==
                    CONCAT13(unaff_XMM11_Bl,
                             CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))));
    iVar12 = -(uint)(CONCAT13(unaff_XMM11_Bp,
                              CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))) ==
                    CONCAT13(unaff_XMM11_Bp,
                             CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))));
LAB_140c48c78:
    plVar28 = plStack_318;
    plStack_e0 = plVar27;
    if (plVar27 != plStack_170) {
      lVar26 = *plVar27;
      uStack_2a8._0_4_ = (float)lVar26;
      uStack_2a8._4_4_ = (float)((ulonglong)lVar26 >> 0x20);
      if (plStack_318[3] != 0) {
        uStack_d1 = 1;
        uVar20 = pdb_1400af0a0(plStack_318 + 4,&uStack_2a8);
        lVar17 = *plVar28;
        uVar18 = plVar28[1];
        bVar37 = (byte)(uVar20 >> 0x39);
        auVar38 = ZEXT216(CONCAT11(bVar37,bVar37));
        auVar38 = pshuflw(auVar38,auVar38,0);
        lVar22 = 0;
        do {
          uVar20 = uVar20 & uVar18;
          pcVar1 = (char *)(lVar17 + uVar20);
          auVar47[0] = -(*pcVar1 == auVar38[0]);
          auVar47[1] = -(pcVar1[1] == auVar38[1]);
          auVar47[2] = -(pcVar1[2] == auVar38[2]);
          auVar47[3] = -(pcVar1[3] == auVar38[3]);
          auVar47[4] = -(pcVar1[4] == auVar38[4]);
          auVar47[5] = -(pcVar1[5] == auVar38[5]);
          auVar47[6] = -(pcVar1[6] == auVar38[6]);
          auVar47[7] = -(pcVar1[7] == auVar38[7]);
          auVar47[8] = -(pcVar1[8] == auVar38[0]);
          auVar47[9] = -(pcVar1[9] == auVar38[1]);
          auVar47[10] = -(pcVar1[10] == auVar38[2]);
          auVar47[0xb] = -(pcVar1[0xb] == auVar38[3]);
          auVar47[0xc] = -(pcVar1[0xc] == auVar38[4]);
          auVar47[0xd] = -(pcVar1[0xd] == auVar38[5]);
          auVar47[0xe] = -(pcVar1[0xe] == auVar38[6]);
          auVar47[0xf] = -(pcVar1[0xf] == auVar38[7]);
          uVar32 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar47[0xf] >> 7) << 0xf;
          uVar31 = (uint)uVar32;
          while (uVar32 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar31; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar29 = (uVar7 + uVar20 & uVar18) * -0x78;
            if (lVar26 == *(longlong *)(lVar17 + -0x78 + lVar29)) {
              fVar40 = *(float *)(lVar17 + lVar29 + -0x18);
              fVar41 = *(float *)((longlong)plStack_e0 + 0x24);
              fVar3 = *(float *)(plStack_e0 + 5);
              fVar4 = fVar3;
              if (fVar3 <= fVar41) {
                fVar4 = fVar41;
              }
              fVar41 = (float)(~-(uint)NAN(fVar41) & (uint)fVar4 | -(uint)NAN(fVar41) & (uint)fVar3)
              ;
              if (fVar41 <= 0.0) {
                fVar41 = 0.0;
              }
              fVar3 = 0.0;
              if (0.0 <= fVar41 + fVar45) {
                fVar3 = fVar41 + fVar45;
              }
              fVar41 = fVar39;
              if (fVar3 <= fVar39) {
                fVar41 = fVar3;
              }
              *puStack_308 = uStack_300._4_4_;
              uStack_d1 = 1;
              pdb_140b0e3b0(plStack_318,lVar26);
              lVar17 = lStack_2b0;
              uVar31 = *(uint *)(plStack_e0 + 1);
              uStack_368 = *(undefined8 *)((longlong)plStack_e0 + 0x1c);
              uStack_378 = *(undefined8 *)((longlong)plStack_e0 + 0xc);
              uStack_370 = *(undefined8 *)((longlong)plStack_e0 + 0x14);
              uStack_298._0_4_ = (float)*(undefined8 *)((longlong)plStack_e0 + 0x1c);
              uStack_298._4_4_ =
                   (float)((ulonglong)*(undefined8 *)((longlong)plStack_e0 + 0x1c) >> 0x20);
              uStack_2a8._0_4_ = (float)*(undefined8 *)((longlong)plStack_e0 + 0xc);
              uStack_2a8._4_4_ =
                   (float)((ulonglong)*(undefined8 *)((longlong)plStack_e0 + 0xc) >> 0x20);
              uStack_2a0._0_4_ = (float)*(undefined8 *)((longlong)plStack_e0 + 0x14);
              uStack_2a0._4_4_ =
                   (float)((ulonglong)*(undefined8 *)((longlong)plStack_e0 + 0x14) >> 0x20);
              if (lStack_2b0 == lStack_2c0) {
                uStack_d1 = 1;
                pdb_142d7ede0(&lStack_2c0);
              }
              *(undefined4 *)(lStack_2b8 + lVar17 * 0x28) = 1;
              *(float *)(lStack_2b8 + 4 + lVar17 * 0x28) = fVar41;
              *(undefined4 *)(lStack_2b8 + 8 + lVar17 * 0x28) = 0x3fc00000;
              *(uint *)(lStack_2b8 + 0xc + lVar17 * 0x28) = uVar31;
              auVar38._4_4_ = uStack_2a8._4_4_;
              auVar38._0_4_ = (float)uStack_2a8;
              auVar38._8_4_ = (float)uStack_2a0;
              auVar38._12_4_ = uStack_2a0._4_4_;
              *(undefined1 (*) [16])(lStack_2b8 + 0x10 + lVar17 * 0x28) = auVar38;
              *(ulonglong *)(lStack_2b8 + 0x20 + lVar17 * 0x28) =
                   CONCAT44(uStack_298._4_4_,(float)uStack_298);
              lStack_2b0 = lVar17 + 1;
              if ((fVar39 <= fVar41) && (uVar30 == 2)) {
                uStack_2e8 = uStack_368;
                auStack_2f8._8_8_ = uStack_370;
                auStack_2f8._0_8_ = uStack_378;
                uVar30 = uVar31;
              }
              plVar27 = plStack_e0 + 6;
              bVar37 = *(byte *)((longlong)plStack_e0 + 0x2c);
              if (((fVar40 != 0.0) || (NAN(fVar40))) || (bVar34 = 6, fVar41 <= 0.0)) {
                if (0.0 < fVar40) {
                  bVar34 = 7;
                  if ((fVar41 == 0.0) && (!NAN(fVar41))) goto LAB_140c48b7b;
                }
                if (fVar39 <= fVar40) goto LAB_140c48c78;
                bVar34 = 8;
                if ((fVar41 != fVar39) || (NAN(fVar41) || NAN(fVar39))) goto LAB_140c48c78;
              }
LAB_140c48b7b:
              if (uStack_118 == 0) goto LAB_140c48bb2;
              lVar17 = 0;
              goto LAB_140c48b9f;
            }
            uVar32 = (ushort)(uVar31 - 1) & (ushort)uVar31;
            uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar32);
          }
          auVar43[0] = -(*pcVar1 == (char)iVar9);
          auVar43[1] = -(pcVar1[1] == (char)((uint)iVar9 >> 8));
          auVar43[2] = -(pcVar1[2] == (char)((uint)iVar9 >> 0x10));
          auVar43[3] = -(pcVar1[3] == (char)((uint)iVar9 >> 0x18));
          auVar43[4] = -(pcVar1[4] == (char)iVar10);
          auVar43[5] = -(pcVar1[5] == (char)((uint)iVar10 >> 8));
          auVar43[6] = -(pcVar1[6] == (char)((uint)iVar10 >> 0x10));
          auVar43[7] = -(pcVar1[7] == (char)((uint)iVar10 >> 0x18));
          auVar43[8] = -(pcVar1[8] == (char)iVar11);
          auVar43[9] = -(pcVar1[9] == (char)((uint)iVar11 >> 8));
          auVar43[10] = -(pcVar1[10] == (char)((uint)iVar11 >> 0x10));
          auVar43[0xb] = -(pcVar1[0xb] == (char)((uint)iVar11 >> 0x18));
          auVar43[0xc] = -(pcVar1[0xc] == (char)iVar12);
          auVar43[0xd] = -(pcVar1[0xd] == (char)((uint)iVar12 >> 8));
          auVar43[0xe] = -(pcVar1[0xe] == (char)((uint)iVar12 >> 0x10));
          auVar43[0xf] = -(pcVar1[0xf] == (char)((uint)iVar12 >> 0x18));
          if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar43 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar43 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar43 >> 0x2f,0) & 1) != 0) || (SUB161(auVar43 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') break;
          uVar20 = uVar20 + lVar22 + 0x10;
          lVar22 = lVar22 + 0x10;
        } while( true );
      }
      plVar27 = plStack_e0 + 6;
      goto LAB_140c48c78;
    }
    uStack_298._0_4_ = (float)lStack_2b0;
    uStack_298._4_4_ = (float)((ulonglong)lStack_2b0 >> 0x20);
    uStack_2a8._0_4_ = (float)lStack_2c0;
    uStack_2a8._4_4_ = (float)((ulonglong)lStack_2c0 >> 0x20);
    uStack_2a0._0_4_ = (float)lStack_2b8;
    uStack_2a0._4_4_ = (float)((ulonglong)lStack_2b8 >> 0x20);
    uStack_290._0_4_ = (float)CONCAT31(uStack_290._1_3_,(char)lStack_f8 == '\x03');
    uStack_d1 = 1;
    pdb_141b74f20(&uStack_418,&uStack_2a8,&UNK_14306e0e0);
    if (uVar30 != 2) {
      uStack_298._4_4_ = (float)uStack_2e8;
      uStack_290._0_4_ = (float)((ulonglong)uStack_2e8 >> 0x20);
      uStack_2a8._4_4_ = auStack_2f8._0_4_;
      uStack_2a0._0_4_ = auStack_2f8._4_4_;
      uStack_2a0._4_4_ = auStack_2f8._8_4_;
      uStack_298._0_4_ = auStack_2f8._12_4_;
      uStack_d1 = 1;
      uStack_2a8._0_4_ = (float)uVar30;
      pdb_14146bf80(&uStack_438,&uStack_2a8,&UNK_14306e0f8);
    }
    if (0.0 <= (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) &&
        (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) != 0.0) {
      uStack_d1 = 1;
      pdb_1415e7440(&uStack_168,plStack_e8 + 3);
      uStack_298._0_4_ = (float)CONCAT61(uStack_157,bStack_158);
      uStack_298._4_4_ = (float)(CONCAT17(uStack_151,CONCAT61(uStack_157,bStack_158)) >> 0x20);
      uStack_2a8._0_4_ = (float)uStack_168;
      uStack_2a8._4_4_ = (float)uStack_164;
      uStack_2a0._0_4_ = (float)uStack_160;
      uStack_2a0._4_4_ = (float)uStack_15c;
      uStack_290._0_4_ = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
      uStack_290._4_4_ = (float)CONCAT31(uStack_290._5_3_,1);
      uStack_d1 = 1;
      pdb_141b750e0(param_9,&uStack_2a8,&UNK_14306e110);
    }
    lVar26 = lStack_330;
    puStack_f0 = (undefined4 *)uStack_128;
    pbVar19 = pbStack_120;
    if (uStack_118 != 0) {
      lVar22 = uStack_118 << 5;
      lVar17 = lStack_330 + 0x20;
      lVar29 = 0;
      pbStack_100 = pbStack_120;
      do {
        bVar37 = pbStack_100[lVar29 + 0x18];
        pbVar19 = pbStack_100;
        if (bVar37 == 10) break;
        pbVar19 = pbStack_100 + lVar29;
        uStack_388 = *(undefined8 *)(pbVar19 + 0x10);
        uStack_398 = *(undefined8 *)pbVar19;
        uStack_390 = *(undefined8 *)(pbVar19 + 8);
        uStack_188._0_3_ = (undefined3)*(undefined4 *)(pbStack_100 + lVar29 + 0x19);
        uStack_188._3_1_ = (undefined1)*(undefined4 *)(pbStack_100 + lVar29 + 0x1c);
        uStack_184 = (undefined3)((uint)*(undefined4 *)(pbStack_100 + lVar29 + 0x1c) >> 8);
        *puStack_340 = uStack_19c;
        lVar33 = *(longlong *)(lVar26 + 0x30);
        uVar35 = *(undefined8 *)(lVar26 + 0x40);
        if (lVar33 == *(longlong *)(lVar26 + 0x20)) {
          pdb_142d7ede0(lVar17);
        }
        lVar5 = *(longlong *)(lVar26 + 0x28);
        *(undefined8 *)(lVar5 + lVar33 * 0x28) = uVar35;
        puVar2 = (undefined8 *)(lVar5 + 8 + lVar33 * 0x28);
        *puVar2 = uStack_398;
        puVar2[1] = uStack_390;
        *(undefined8 *)(lVar5 + 0x18 + lVar33 * 0x28) = uStack_388;
        *(byte *)(lVar5 + 0x20 + lVar33 * 0x28) = bVar37;
        *(uint *)(lVar5 + 0x24 + lVar33 * 0x28) = CONCAT31(uStack_184,uStack_188._3_1_);
        *(undefined4 *)(lVar5 + 0x21 + lVar33 * 0x28) = uStack_188;
        *(longlong *)(lVar26 + 0x30) = lVar33 + 1;
        *(longlong *)(lVar26 + 0x40) = *(longlong *)(lVar26 + 0x40) + 1;
        lVar29 = lVar29 + 0x20;
        pbVar19 = pbStack_100;
      } while (lVar22 != lVar29);
    }
    if (puStack_f0 != (undefined4 *)0x0) {
      pub_1406abac0(pbVar19,(longlong)puStack_f0 << 5,8);
    }
    *(float *)(plStack_e8 + 8) = fVar45;
    if ((char)lStack_f8 == '\x03') {
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_160 = 8;
      uStack_15c = 0;
      bStack_158 = 0;
      uStack_157 = 0;
      uStack_151 = 0;
      uStack_d2 = 1;
      pdb_140a1a7f0(&uStack_168);
      plVar28 = (longlong *)plStack_e8[1];
      plVar27 = plVar28 + plStack_e8[2] * 6;
      bVar36 = false;
      iVar9 = -(uint)(CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) ==
                     CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))));
LAB_140c49055:
      plVar24 = plStack_318;
      if (plVar28 != plVar27) {
        lVar26 = *plVar28;
        uStack_2a8._0_4_ = (float)lVar26;
        uVar30 = (uint)(float)uStack_2a8;
        uStack_2a8._4_4_ = (float)((ulonglong)lVar26 >> 0x20);
        uVar15 = uStack_2a8._4_4_;
        if (plStack_318[3] != 0) {
          uStack_d2 = 1;
          uVar20 = pdb_1400af0a0(plStack_318 + 4,&uStack_2a8);
          lVar17 = *plVar24;
          uVar18 = plVar24[1];
          bVar37 = (byte)(uVar20 >> 0x39);
          auVar38 = ZEXT216(CONCAT11(bVar37,bVar37));
          auVar38 = pshuflw(auVar38,auVar38,0);
          lVar22 = 0;
          while( true ) {
            uVar20 = uVar20 & uVar18;
            auVar47 = *(undefined1 (*) [16])(lVar17 + uVar20);
            auVar48[0] = -(auVar47[0] == auVar38[0]);
            auVar48[1] = -(auVar47[1] == auVar38[1]);
            auVar48[2] = -(auVar47[2] == auVar38[2]);
            auVar48[3] = -(auVar47[3] == auVar38[3]);
            auVar48[4] = -(auVar47[4] == auVar38[4]);
            auVar48[5] = -(auVar47[5] == auVar38[5]);
            auVar48[6] = -(auVar47[6] == auVar38[6]);
            auVar48[7] = -(auVar47[7] == auVar38[7]);
            auVar48[8] = -(auVar47[8] == auVar38[0]);
            auVar48[9] = -(auVar47[9] == auVar38[1]);
            auVar48[10] = -(auVar47[10] == auVar38[2]);
            auVar48[0xb] = -(auVar47[0xb] == auVar38[3]);
            auVar48[0xc] = -(auVar47[0xc] == auVar38[4]);
            auVar48[0xd] = -(auVar47[0xd] == auVar38[5]);
            auVar48[0xe] = -(auVar47[0xe] == auVar38[6]);
            auVar48[0xf] = -(auVar47[0xf] == auVar38[7]);
            uVar32 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar48[0xf] >> 7) << 0xf;
            uVar31 = (uint)uVar32;
            while (uVar32 != 0) {
              uVar7 = 0;
              for (uVar8 = uVar31; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              lVar29 = (uVar7 + uVar20 & uVar18) * -0x78;
              if (lVar26 == *(longlong *)(lVar17 + -0x78 + lVar29)) {
                fVar53 = *(float *)(lVar17 + lVar29 + -0x18);
                uStack_d2 = 1;
                pdb_141b74dc0(param_8,lVar26,&UNK_14306e140);
                fVar45 = *(float *)((longlong)plVar28 + 0x24);
                plVar28 = plVar28 + 6;
                if ((fVar53 != fVar45) || (NAN(fVar53) || NAN(fVar45))) {
                  uStack_2a8._0_4_ = 7.00649e-45;
                  uStack_2a8._4_4_ = -0.0;
                  uStack_d2 = 1;
                  uStack_2a0._0_4_ = (float)uVar30;
                  uStack_2a0._4_4_ = (float)uVar15;
                  uStack_298._0_4_ = fVar45;
                  uStack_298._4_4_ = fVar53;
                  pdb_140a1a8a0(&uStack_168,&uStack_2a8);
                  bVar36 = true;
                }
                goto LAB_140c49055;
              }
              uVar32 = (ushort)(uVar31 - 1) & (ushort)uVar31;
              uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar32);
            }
            auVar44[0] = -(auVar47[0] == (char)iVar9);
            auVar44[1] = -(auVar47[1] == (char)((uint)iVar9 >> 8));
            auVar44[2] = -(auVar47[2] == (char)((uint)iVar9 >> 0x10));
            auVar44[3] = -(auVar47[3] == (char)((uint)iVar9 >> 0x18));
            auVar44[4] = -(auVar47[4] == -1);
            auVar44[5] = -(auVar47[5] == -1);
            auVar44[6] = -(auVar47[6] == -1);
            auVar44[7] = -(auVar47[7] == -1);
            auVar44[8] = -(auVar47[8] == -1);
            auVar44[9] = -(auVar47[9] == -1);
            auVar44[10] = -(auVar47[10] == -1);
            auVar44[0xb] = -(auVar47[0xb] == -1);
            auVar44[0xc] = -(auVar47[0xc] == -1);
            auVar44[0xd] = -(auVar47[0xd] == -1);
            auVar44[0xe] = -(auVar47[0xe] == -1);
            auVar44[0xf] = -(auVar47[0xf] == -1);
            if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar44 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar44 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x3f,0) & 1) != 0) || (SUB161(auVar44 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') break;
            uVar20 = uVar20 + lVar22 + 0x10;
            lVar22 = lVar22 + 0x10;
          }
        }
        plVar28 = plVar28 + 6;
        goto LAB_140c49055;
      }
      if (bVar36) {
        *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
        uVar35 = *param_10;
        uStack_298._0_4_ = (float)CONCAT61(uStack_157,bStack_158);
        uStack_298._4_4_ = (float)(CONCAT17(uStack_151,CONCAT61(uStack_157,bStack_158)) >> 0x20);
        uStack_2a8._0_4_ = (float)uStack_168;
        uStack_2a8._4_4_ = (float)uStack_164;
        uStack_2a0._0_4_ = (float)uStack_160;
        uStack_2a0._4_4_ = (float)uStack_15c;
        uStack_d2 = 0;
        uVar21 = pdb_140a1ac80(&uStack_2a8);
        uStack_2a0._0_4_ = (float)uVar21;
        uStack_2a0._4_4_ = (float)((ulonglong)uVar21 >> 0x20);
        uStack_298._0_4_ = SUB84(param_10,0);
        uStack_298._4_4_ = (float)((ulonglong)param_10 >> 0x20);
        uStack_2a8._0_4_ = 9.80909e-45;
        uStack_2a8._4_4_ = 0.0;
        uStack_d2 = 0;
        pdb_140ae5180(uVar35,&uStack_2a8,&UNK_14306e128);
        plStack_e8[2] = 0;
      }
      else {
        plStack_e8[2] = 0;
        uStack_d1 = 0;
        pdb_1409a2a70(&uStack_168);
      }
    }
  }
  return;
}

