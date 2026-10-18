// VA 0x14093c3d0, PDB extent 1703 bytes
// country_core::systems::backend::input::input_record_replay::control_input_replay
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_record_replay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::input::input_record_replay::control_input_replay
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_record_replay.rs
   Extent: 1703 */

void pdb_14093c3d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte *arg0;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte *pbVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  longlong lVar22;
  ulonglong *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
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
  ulonglong uStack_138;
  ulonglong uStack_130;
  undefined *puStack_128;
  ulonglong uStack_120;
  longlong *plStack_110;
  undefined4 *puStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  ulonglong *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *plStack_68;
  ulonglong *puStack_60;
  ulonglong *puStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  puStack_58 = (ulonglong *)*param_4;
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puStack_f0 = (undefined8 *)*param_1;
  puStack_108 = (undefined4 *)param_1[2];
  uStack_70 = *(undefined4 *)((longlong)param_2 + 0x1c);
  plStack_68 = (longlong *)*param_2;
  puStack_100 = (undefined4 *)param_2[2];
  uStack_6c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_e8 = *param_3;
  puStack_f8 = (undefined4 *)param_3[2];
  puStack_60 = puStack_58 + 8;
  puVar3 = (ulonglong *)*param_5;
  lVar4 = param_5[1];
  puStack_e0 = puStack_58 + 4;
  uVar20 = 0;
  puVar21 = puStack_58;
  do {
    while( true ) {
      plVar2 = plStack_68;
      uVar15 = *puVar3;
      uVar13 = uVar15 - *(ulonglong *)(lVar4 + 0x18);
      if (uVar15 < *(ulonglong *)(lVar4 + 0x18)) {
        uVar13 = uVar20;
      }
      uVar12 = uVar15 - *(ulonglong *)(lVar4 + 0x38);
      if (uVar15 < *(ulonglong *)(lVar4 + 0x38)) {
        uVar12 = uVar20;
      }
      plVar16 = (longlong *)(uVar13 * 0x30 + *(longlong *)(lVar4 + 8));
      uVar15 = *(ulonglong *)(lVar4 + 0x10);
      uVar14 = uVar15 - uVar13;
      if (uVar15 < uVar13) {
        uVar14 = uVar20;
      }
      uVar5 = *(ulonglong *)(lVar4 + 0x30);
      uVar18 = uVar5 - uVar12;
      if (uVar5 < uVar12) {
        uVar18 = uVar20;
      }
      lVar22 = *(longlong *)(lVar4 + 0x28);
      uVar14 = *(longlong *)(lVar4 + 0x40) - (uVar18 + uVar14);
      *puVar3 = uVar14;
      if (uVar15 < uVar13) {
        plVar16 = (longlong *)0x8;
      }
      if (uVar15 <= uVar13) {
        plVar16 = (longlong *)(lVar22 + uVar12 * 0x30);
        if (uVar5 < uVar12) {
          plVar16 = (longlong *)0x8;
        }
        if (uVar5 <= uVar12) {
          return;
        }
      }
      *puVar3 = uVar14 + 1;
      if (!SBORROW8(0,*plVar16)) break;
      if (SBORROW8(0,*puStack_60)) {
        uVar6 = puStack_f0[2];
        puVar8 = (undefined *)*puStack_f0;
        uVar9 = puStack_f0[1];
        pdb_1415e74f0(&puStack_198,plStack_68);
        uStack_180 = (undefined1)plVar2[3];
        pdb_140a34930(&uStack_178,uStack_e8);
        uStack_c0 = CONCAT71(uStack_17f,uStack_180);
        uStack_d8 = puStack_198;
        uStack_d0 = (code *)puStack_190;
        uStack_c8 = uStack_188;
        uStack_80 = CONCAT44(uStack_80._4_4_,uStack_158);
        uStack_90 = CONCAT44(uStack_164,uStack_168);
        uStack_88 = (undefined *)CONCAT44(uStack_15c,uStack_160);
        uStack_a0 = (undefined *)CONCAT44(uStack_174,uStack_178);
        uStack_98 = CONCAT44(uStack_16c,uStack_170);
        uStack_b8 = puVar8;
        uStack_b0 = uVar9;
        uStack_a8 = uVar6;
        pdb_140a6d7c0(puVar21,&uStack_d8,(char)plVar16[1]);
      }
    }
    puVar1 = (ulonglong *)(plVar16 + 4);
    puStack_198 = puVar1;
    plStack_110 = plVar16;
    if (2 < *_DAT_143ca8e90) {
      uStack_d8 = (ulonglong *)0x0;
      uStack_d0 = (code *)&UNK_14302336d;
      uStack_c8 = 0x3a;
      uStack_c0 = 0;
      uStack_b8 = &UNK_1430232f8;
      uStack_b0 = 0x44;
      uStack_a8 = 3;
      uStack_a0 = &UNK_14302336d;
      uStack_98 = 0x3a;
      uStack_90 = 0x3d00000001;
      uStack_88 = &UNK_143023358;
      uStack_80 = 0x2b;
      pdb_140f332f0(&uStack_49,&uStack_d8);
    }
    pdb_140a6df40(&uStack_d8,plVar16[1],plVar16[2]);
    if (SBORROW8(0,(longlong)uStack_d8)) {
LAB_14093c94d:
      pdb_142d8e0d0(&plStack_110,uStack_d0);
LAB_14093c95d:
      pdb_142d8e0b0();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puStack_128 = uStack_88;
    uStack_120 = uStack_80;
    uStack_138 = uStack_98;
    uStack_130 = uStack_90;
    uStack_148 = (undefined4)uStack_a8;
    uStack_144 = uStack_a8._4_4_;
    uStack_140 = (undefined4)uStack_a0;
    uStack_13c = uStack_a0._4_4_;
    uStack_158 = (undefined4)uStack_b8;
    uStack_154 = uStack_b8._4_4_;
    uStack_150 = (undefined4)uStack_b0;
    uStack_14c = uStack_b0._4_4_;
    uStack_168 = (undefined4)uStack_c8;
    uStack_164 = uStack_c8._4_4_;
    uStack_160 = (undefined4)uStack_c0;
    uStack_15c = uStack_c0._4_4_;
    uStack_178 = (undefined4)uStack_d8;
    uStack_174 = uStack_d8._4_4_;
    uStack_170 = (undefined4)uStack_d0;
    uStack_16c = uStack_d0._4_4_;
    pdb_1404a1990(puVar21);
    pdb_14049f1b0(puStack_e0);
    puVar21 = puStack_58;
    uVar15 = *puStack_60;
    if ((-1 < (longlong)uVar15) && (uVar15 != 0)) {
      pub_1406abac0((byte *)puStack_58[9],uVar15,1);
    }
    puVar21[10] = (ulonglong)puStack_128;
    puVar21[0xb] = uStack_120;
    puVar21[8] = uStack_138;
    puVar21[9] = uStack_130;
    *(undefined4 *)(puVar21 + 6) = uStack_148;
    *(undefined4 *)((longlong)puVar21 + 0x34) = uStack_144;
    *(undefined4 *)(puVar21 + 7) = uStack_140;
    *(undefined4 *)((longlong)puVar21 + 0x3c) = uStack_13c;
    *(undefined4 *)(puVar21 + 4) = uStack_158;
    *(undefined4 *)((longlong)puVar21 + 0x24) = uStack_154;
    *(undefined4 *)(puVar21 + 5) = uStack_150;
    *(undefined4 *)((longlong)puVar21 + 0x2c) = uStack_14c;
    *(undefined4 *)(puVar21 + 2) = uStack_168;
    *(undefined4 *)((longlong)puVar21 + 0x14) = uStack_164;
    *(undefined4 *)(puVar21 + 3) = uStack_160;
    *(undefined4 *)((longlong)puVar21 + 0x1c) = uStack_15c;
    *(undefined4 *)puVar21 = uStack_178;
    *(undefined4 *)((longlong)puVar21 + 4) = uStack_174;
    *(undefined4 *)(puVar21 + 1) = uStack_170;
    *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_16c;
    if (puVar21[3] == 0) goto LAB_14093c95d;
    uVar15 = puVar21[3] - 1;
    if (uVar15 < *puVar1) {
      pdb_142d8e060(&puStack_198);
      goto LAB_14093c94d;
    }
    if (puVar21[8] != 0x8000000000000002) {
      uStack_d8 = puStack_60;
      uStack_d0 = pdb_140a77200;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14304115e,&uStack_d8,&UNK_143041198);
    }
    uVar13 = (uVar15 - *puVar1) + puVar21[2];
    uVar15 = 0;
    if (*puVar21 <= uVar13) {
      uVar15 = *puVar21;
    }
    uVar12 = puVar21[1];
    lVar17 = (uVar13 - uVar15) * 0x68;
    puVar21[9] = *(longlong *)(uVar12 + 0x60 + lVar17) - 1;
    uStack_c8 = *(undefined8 *)(uVar12 + 0x30 + lVar17);
    plVar2 = (longlong *)(uVar12 + 0x20 + lVar17);
    puVar21 = (ulonglong *)*plVar2;
    puVar8 = (undefined *)plVar2[1];
    *puStack_108 = uStack_74;
    puStack_f0[2] = uStack_c8;
    uStack_d8._0_4_ = SUB84(puVar21,0);
    uStack_d8._4_4_ = (undefined4)((ulonglong)puVar21 >> 0x20);
    uStack_d0._0_4_ = SUB84(puVar8,0);
    uStack_d0._4_4_ = (undefined4)((ulonglong)puVar8 >> 0x20);
    *(undefined4 *)puStack_f0 = (undefined4)uStack_d8;
    *(undefined4 *)((longlong)puStack_f0 + 4) = uStack_d8._4_4_;
    *(undefined4 *)(puStack_f0 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puStack_f0 + 0xc) = uStack_d0._4_4_;
    uStack_d8 = puVar21;
    uStack_d0 = (code *)puVar8;
    pdb_1415e74f0(&uStack_d8,uVar12 + lVar17);
    uStack_c0 = CONCAT71(uStack_c0._1_7_,*(undefined1 *)(uVar12 + 0x18 + lVar17));
    *puStack_100 = uStack_70;
    arg0 = (byte *)plStack_68[1];
    lVar22 = plStack_68[2];
    if (lVar22 != 0) {
      pbVar19 = arg0 + 8;
      do {
        if (*(longlong *)(pbVar19 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar19,*(longlong *)(pbVar19 + -8) * 0x18,8);
        }
        pbVar19 = pbVar19 + 0x20;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (*plStack_68 != 0) {
      pub_1406abac0(arg0,*plStack_68 << 5,8);
    }
    uVar11 = uStack_6c;
    uVar6 = uStack_e8;
    puVar10 = puStack_f8;
    *(undefined4 *)(plStack_68 + 2) = (undefined4)uStack_c8;
    *(undefined4 *)((longlong)plStack_68 + 0x14) = uStack_c8._4_4_;
    *(undefined4 *)(plStack_68 + 3) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)plStack_68 + 0x1c) = uStack_c0._4_4_;
    *(undefined4 *)plStack_68 = (undefined4)uStack_d8;
    *(undefined4 *)((longlong)plStack_68 + 4) = uStack_d8._4_4_;
    *(undefined4 *)(plStack_68 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)plStack_68 + 0xc) = uStack_d0._4_4_;
    *puStack_f8 = uStack_6c;
    pdb_140a34510(uStack_e8,uVar12 + lVar17 + 0x38,0);
    *puVar10 = uVar11;
    pdb_140a34f80(uVar6);
    puVar21 = puStack_58;
  } while( true );
}

