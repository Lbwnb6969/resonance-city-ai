// VA 0x140a32020, PDB extent 3799 bytes
// country_core::startup::load_glade_audio::load_glade_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_glade_audio::load_glade_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_audio.rs
   Extent: 3799 */

void pdb_140a32020(byte *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  byte *pbVar14;
  ulonglong *puVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined4 uVar19;
  longlong lStack_1d0;
  ulonglong *puStack_1c8;
  longlong lStack_1c0;
  ulonglong uStack_1b8;
  byte *pbStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  ulonglong uStack_170;
  byte *pbStack_168;
  undefined8 uStack_160;
  ulonglong uStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  ulonglong uStack_140;
  byte *pbStack_138;
  undefined8 uStack_130;
  ulonglong uStack_128;
  longlong lStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  ulonglong *puStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined1 uStack_ac;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  byte *pbStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  int iStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined8 uStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar19 = *(undefined4 *)((longlong)param_3 + 0x1c);
  pbVar11 = (byte *)param_3[2];
  *(undefined4 *)pbVar11 = uVar19;
  pbVar7 = (byte *)*param_3;
  pdb_140ad7ee0(pbVar7);
  *(undefined4 *)pbVar11 = uVar19;
  pbVar7[0x1c8] = 0;
  pbVar7[0x1c9] = 0;
  pbVar7[0x1ca] = 0;
  pbVar7[0x1cb] = 0;
  lVar17 = *param_2;
  lVar6 = (ulonglong)*(byte *)(lVar17 + 0x98) * 8;
  pbStack_58 = pbVar7;
  pdb_140f3e9e0(&uStack_188,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_14303b4a8 + lVar6),
                *(undefined8 *)(&UNK_14303b480 + lVar6));
  pdb_140a31bf0(&lStack_1d0,&uStack_188);
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x22,1);
  uVar12 = _UNK_14303acc8;
  if (pbVar7 == (byte *)0x0) {
    uStack_4a = 1;
    pdb_142dc7e2a(1,0x22);
    goto LAB_140a32a51;
  }
  *(undefined8 *)(pbVar7 + 0x10) = _DAT_14303acc0;
  *(undefined8 *)(pbVar7 + 0x18) = uVar12;
  uVar5 = _UNK_14303acbc;
  uVar4 = _UNK_14303acb8;
  uVar3 = _UNK_14303acb4;
  *(undefined4 *)pbVar7 = _DAT_14303acb0;
  *(undefined4 *)(pbVar7 + 4) = uVar3;
  *(undefined4 *)(pbVar7 + 8) = uVar4;
  *(undefined4 *)(pbVar7 + 0xc) = uVar5;
  pbVar7[0x20] = 0x61;
  pbVar7[0x21] = 0x66;
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x27,1);
  uVar12 = _UNK_14303acea;
  if (pbVar8 == (byte *)0x0) {
    pbStack_58 = pbVar7;
    pdb_142dc7e2a(1,0x27);
    goto LAB_140a32a51;
  }
  *(undefined8 *)(pbVar8 + 0x10) = _DAT_14303ace2;
  *(undefined8 *)(pbVar8 + 0x18) = uVar12;
  uVar5 = _UNK_14303acde;
  uVar4 = _UNK_14303acda;
  uVar3 = _UNK_14303acd6;
  *(undefined4 *)pbVar8 = _DAT_14303acd2;
  *(undefined4 *)(pbVar8 + 4) = uVar3;
  *(undefined4 *)(pbVar8 + 8) = uVar4;
  *(undefined4 *)(pbVar8 + 0xc) = uVar5;
  pbVar8[0x1f] = 0x65;
  pbVar8[0x20] = 0x6e;
  pbVar8[0x21] = 0x20;
  pbVar8[0x22] = 0x47;
  pbVar8[0x23] = 0x6c;
  pbVar8[0x24] = 0x61;
  pbVar8[0x25] = 100;
  pbVar8[0x26] = 0x65;
  pbStack_60 = param_1;
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0x26,1);
  uVar12 = _UNK_14303ad11;
  pbStack_a0 = pbVar8;
  if (pbVar9 == (byte *)0x0) {
    pbStack_58 = pbVar7;
    pdb_142dc7e2a(1,0x26);
    goto LAB_140a32a51;
  }
  *(undefined8 *)(pbVar9 + 0x10) = _DAT_14303ad09;
  *(undefined8 *)(pbVar9 + 0x18) = uVar12;
  uVar5 = _UNK_14303ad05;
  uVar4 = _UNK_14303ad01;
  uVar3 = _UNK_14303acfd;
  *(undefined4 *)pbVar9 = _DAT_14303acf9;
  *(undefined4 *)(pbVar9 + 4) = uVar3;
  *(undefined4 *)(pbVar9 + 8) = uVar4;
  *(undefined4 *)(pbVar9 + 0xc) = uVar5;
  pbVar9[0x1e] = 0x65;
  pbVar9[0x1f] = 0x6e;
  pbVar9[0x20] = 0x20;
  pbVar9[0x21] = 0x52;
  pbVar9[0x22] = 0x75;
  pbVar9[0x23] = 0x69;
  pbVar9[0x24] = 0x6e;
  pbVar9[0x25] = 0x73;
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x27,1);
  pbVar14 = pbStack_58;
  uVar12 = _UNK_14303ad37;
  if (pbVar10 == (byte *)0x0) {
    pbStack_e0 = pbVar9;
    pbStack_58 = pbVar7;
    pdb_142dc7e2a(1,0x27);
    goto LAB_140a32a51;
  }
  *(undefined8 *)(pbVar10 + 0x10) = _DAT_14303ad2f;
  *(undefined8 *)(pbVar10 + 0x18) = uVar12;
  uVar5 = _UNK_14303ad2b;
  uVar4 = _UNK_14303ad27;
  uVar3 = _UNK_14303ad23;
  *(undefined4 *)pbVar10 = _DAT_14303ad1f;
  *(undefined4 *)(pbVar10 + 4) = uVar3;
  *(undefined4 *)(pbVar10 + 8) = uVar4;
  *(undefined4 *)(pbVar10 + 0xc) = uVar5;
  pbVar10[0x1f] = 100;
  pbVar10[0x20] = 0x20;
  pbVar10[0x21] = 0x46;
  pbVar10[0x22] = 0x6f;
  pbVar10[0x23] = 0x72;
  pbVar10[0x24] = 0x65;
  pbVar10[0x25] = 0x73;
  pbVar10[0x26] = 0x74;
  uStack_188 = 0x22;
  uStack_178 = 0x22;
  uStack_170 = 0x27;
  uStack_160 = 0x27;
  uStack_158 = 0x26;
  uStack_148 = 0x26;
  uStack_140 = 0x27;
  uStack_130 = 0x27;
  pbStack_a0 = (byte *)CONCAT44(pbStack_a0._4_4_,uVar19);
  *(undefined4 *)pbVar11 = uVar19;
  plVar1 = *(longlong **)pbStack_60;
  lVar6 = 0;
  do {
    lVar16 = lVar6;
    if (*(longlong *)(lVar17 + 0x10) == lVar16) break;
    lVar6 = lVar16 + 1;
  } while (*(char *)(*(longlong *)(lVar17 + 8) + lVar16) == '\x02');
  puVar13 = &uStack_188;
  lVar6 = 4;
  if (*(longlong *)(lVar17 + 0x10) == lVar16) {
    puVar13 = puStack_1c8;
    lVar6 = lStack_1c0;
  }
  uStack_49 = 1;
  pbStack_180 = pbVar7;
  pbStack_168 = pbVar8;
  pbStack_150 = pbVar9;
  pbStack_138 = pbVar10;
  pbStack_e0 = pbVar11;
  pdb_140ad7740(pbStack_58,plVar1,puVar13,lVar6);
  *(undefined4 *)pbStack_e0 = pbStack_a0._0_4_;
  if (*(int *)(pbVar14 + 0x130) == 1) {
    uStack_49 = 1;
    pdb_141808d70(&lStack_120,pbVar14 + 0x138,1);
    if (lStack_120 != -0x7ffffffffffffffc) {
      uStack_68 = uStack_f0;
      iStack_70 = uStack_f8;
      uStack_6c = (undefined1)uStack_f4;
      uStack_6b = (undefined2)((uint)uStack_f4 >> 8);
      uStack_69 = (undefined1)((uint)uStack_f4 >> 0x18);
      uStack_90 = uStack_118;
      uStack_8c = uStack_114;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&lStack_98,&UNK_143044530,&UNK_143043d48);
    }
  }
  if (*plVar1 == 0) {
    if ((longlong)uStack_1a8 < 0) {
      uVar12 = 0;
LAB_140a3235a:
      uStack_49 = 1;
      pdb_142dc7e2a(uVar12,uStack_1a8);
      goto LAB_140a32a51;
    }
    puStack_e8 = puStack_1c8;
    if (uStack_1a8 == 0) {
      pbVar11 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar12 = 1;
      pbVar11 = pub_1406abab0(uStack_1a8,1);
      if (pbVar11 == (byte *)0x0) goto LAB_140a3235a;
      pub_142e32760(pbVar11,pbStack_1b0,uStack_1a8);
      pbVar14 = pbStack_58;
    }
    lStack_98 = 0;
    uStack_88 = uStack_1a8;
    uStack_78 = uStack_1a8;
    iStack_70 = CONCAT31(iStack_70._1_3_,2);
    puVar13 = puStack_e8;
    pbStack_80 = pbVar11;
  }
  else {
    uStack_49 = 1;
    pdb_140a8b180(&lStack_98,*plVar1 + 0x10,pbStack_1b0,uStack_1a8);
    puVar13 = puStack_1c8;
    if ((int)lStack_98 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303b290,0x2b,&lStack_120,&UNK_14303b250,&UNK_14303ad78);
    }
  }
  pbStack_60 = pbVar14 + 0x130;
  uStack_d0 = CONCAT44(uStack_8c,uStack_90);
  uStack_b8 = uStack_78;
  iStack_b0 = iStack_70;
  uStack_ac = uStack_6c;
  uStack_ab = uStack_6b;
  uStack_a9 = uStack_69;
  uStack_c8 = uStack_88;
  uStack_c0 = pbStack_80;
  uStack_d8 = lStack_98;
  pdb_1409a5ed0();
  pbVar11 = pbStack_58;
  if (*(ulonglong *)(pbStack_58 + 0x140) != 0) {
    pub_1406abac0(*(byte **)(pbStack_58 + 0x148),*(ulonglong *)(pbStack_58 + 0x140),1);
  }
  *(int *)pbStack_60 = (int)uStack_d8;
  *(int *)(pbStack_60 + 4) = uStack_d8._4_4_;
  *(int *)(pbStack_60 + 8) = (int)uStack_d0;
  *(int *)(pbStack_60 + 0xc) = uStack_d0._4_4_;
  *(int *)(pbStack_60 + 0x20) = (int)uStack_b8;
  *(int *)(pbStack_60 + 0x24) = uStack_b8._4_4_;
  *(int *)(pbStack_60 + 0x28) = iStack_b0;
  *(int *)(pbStack_60 + 0x2c) = CONCAT13(uStack_a9,CONCAT21(uStack_ab,uStack_ac));
  *(int *)(pbStack_60 + 0x10) = (int)uStack_c8;
  *(int *)(pbStack_60 + 0x14) = uStack_c8._4_4_;
  *(int *)(pbStack_60 + 0x18) = (int)uStack_c0;
  *(int *)(pbStack_60 + 0x1c) = uStack_c0._4_4_;
  if (*(int *)pbStack_60 == 1) {
    uStack_49 = 1;
    pdb_141808ec0(&lStack_120,pbVar11 + 0x138);
    if (lStack_120 != -0x7ffffffffffffffc) {
      uStack_68 = uStack_f0;
      iStack_70 = uStack_f8;
      uStack_6c = (undefined1)uStack_f4;
      uStack_6b = (undefined2)((uint)uStack_f4 >> 8);
      uStack_69 = (undefined1)((uint)uStack_f4 >> 0x18);
      uStack_90 = uStack_118;
      uStack_8c = uStack_114;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&lStack_98,&UNK_143044530,&UNK_143043dc0);
    }
  }
  bVar18 = SBORROW8(0,uStack_1a0);
  if (bVar18) goto LAB_140a32709;
  uStack_128 = uStack_1a0;
  pbStack_60 = pbStack_198;
  if (*plVar1 == 0) {
    if ((longlong)uStack_190 < 0) {
      uVar12 = 0;
LAB_140a3258e:
      pdb_142dc7e2a(uVar12,uStack_190);
LAB_140a32a51:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    puStack_e8 = puVar13;
    if (uStack_190 == 0) {
      pbVar11 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(uStack_190,1);
      uVar12 = 1;
      if (pbVar11 == (byte *)0x0) goto LAB_140a3258e;
      pub_142e32760(pbVar11,pbStack_60,uStack_190);
    }
    lStack_98 = 0;
    uStack_88 = uStack_190;
    uStack_78 = uStack_190;
    iStack_70 = CONCAT31(iStack_70._1_3_,2);
    puVar13 = puStack_e8;
    pbStack_80 = pbVar11;
  }
  else {
    pdb_140a8b180(&lStack_98,*plVar1 + 0x10,pbStack_198,uStack_190);
    if ((int)lStack_98 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303b290,0x2b,&lStack_120,&UNK_14303b250,&UNK_14303ad48);
    }
  }
  uStack_b8 = uStack_78;
  iStack_b0 = iStack_70;
  uStack_ab = uStack_6b;
  uStack_a9 = uStack_69;
  uStack_c8 = uStack_88;
  uStack_c0 = pbStack_80;
  uStack_d8 = lStack_98;
  if ((lStack_98 == 1) && (pdb_141808ec0(&lStack_120,&uStack_d0), lStack_120 != -0x7ffffffffffffffc)
     ) {
    uStack_68 = uStack_f0;
    iStack_70 = uStack_f8;
    uStack_6c = (undefined1)uStack_f4;
    uStack_6b = (undefined2)((uint)uStack_f4 >> 8);
    uStack_69 = (undefined1)((uint)uStack_f4 >> 0x18);
    uStack_90 = uStack_118;
    uStack_8c = uStack_114;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143044570,0x2b,&lStack_98,&UNK_143044530,&UNK_143043dc0);
  }
  pdb_1409a5ed0(&uStack_d8);
  if (uStack_c8 != 0) {
    pub_1406abac0(uStack_c0,uStack_c8,1);
  }
  if (uStack_128 != 0) {
    pub_1406abac0(pbStack_60,uStack_128,1);
  }
LAB_140a32709:
  uVar19 = _DAT_142e37ae4;
  if (*(char *)(lVar17 + 0x98) != '\x04') {
    uVar19 = 0;
  }
  *(undefined4 *)(pbStack_58 + 0x1c4) = uVar19;
  *(undefined4 *)pbStack_e0 = pbStack_a0._0_4_;
  *(undefined4 *)(pbStack_58 + 0x1c0) = uVar19;
  if (*plVar1 != 0) {
    uStack_49 = bVar18;
    pdb_140a8aa00(*plVar1 + 0x10,&UNK_14303ad60,9,
                  *(undefined4 *)(&UNK_14303b468 + (ulonglong)*(byte *)(lVar17 + 0x98) * 4));
  }
  lVar6 = 0;
  do {
    lVar16 = lVar6;
    if (*(longlong *)(lVar17 + 0x10) == lVar16) break;
    lVar6 = lVar16 + 1;
  } while (*(char *)(*(longlong *)(lVar17 + 8) + lVar16) == '\x02');
  if (*plVar1 != 0) {
    uVar19 = 0;
    if (*(longlong *)(lVar17 + 0x10) != lVar16) {
      uVar19 = _DAT_142e36f28;
    }
    uStack_49 = bVar18;
    pdb_140a8aa00(*plVar1 + 0x10,&UNK_14303ad69,0xb,uVar19);
  }
  if (uStack_188 != 0) {
    pub_1406abac0(pbStack_180,uStack_188,1);
  }
  if (uStack_170 != 0) {
    pub_1406abac0(pbStack_168,uStack_170,1);
  }
  if (uStack_158 != 0) {
    pub_1406abac0(pbStack_150,uStack_158,1);
  }
  if (uStack_140 != 0) {
    pub_1406abac0(pbStack_138,uStack_140,1);
  }
  if (lStack_1c0 != 0) {
    puVar15 = puVar13 + 1;
    lVar17 = lStack_1c0;
    do {
      if (puVar15[-1] != 0) {
        pub_1406abac0((byte *)*puVar15,puVar15[-1],1);
      }
      puVar15 = puVar15 + 3;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (lStack_1d0 != 0) {
    pub_1406abac0((byte *)puVar13,lStack_1d0 * 0x18,8);
  }
  if (uStack_1b8 != 0) {
    pub_1406abac0(pbStack_1b0,uStack_1b8,1);
  }
  return;
}

