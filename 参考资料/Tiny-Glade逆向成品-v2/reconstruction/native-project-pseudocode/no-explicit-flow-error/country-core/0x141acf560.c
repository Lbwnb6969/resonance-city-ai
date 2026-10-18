// VA 0x141acf560, PDB extent 1382 bytes
// country_core::systems::audio::terrain_stairs_audio::terrain_stairs_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/terrain_stairs_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::terrain_stairs_audio::terrain_stairs_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/terrain_stairs_audio.rs
   Extent: 1382 */

void pdb_141acf560(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pcVar4 = (char *)*param_1;
  if ((*pcVar4 == '\0') && (*(int *)(pcVar4 + 8) == 6)) {
    return;
  }
  lVar5 = param_7[1];
  uVar19 = *(ulonglong *)*param_7;
  uVar20 = 0;
  uVar17 = uVar19 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar17 = uVar20;
  }
  uVar21 = uVar19 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar21 = uVar20;
  }
  bVar22 = *(ulonglong *)(lVar5 + 0x30) < uVar21;
  uVar21 = *(ulonglong *)(lVar5 + 0x30) - uVar21;
  uVar19 = uVar21;
  if (bVar22) {
    uVar19 = uVar20;
  }
  bVar23 = *(ulonglong *)(lVar5 + 0x10) < uVar17;
  uVar17 = *(ulonglong *)(lVar5 + 0x10) - uVar17;
  uVar18 = uVar17;
  if (bVar23) {
    uVar18 = uVar20;
  }
  uVar19 = uVar18 + uVar19;
  if (!bVar23 && uVar17 != 0 || !bVar22 && uVar21 != 0) {
    uVar19 = uVar20;
  }
  *(ulonglong *)*param_7 = *(longlong *)(lVar5 + 0x40) - uVar19;
  fVar25 = _DAT_142e36f28;
  if (!bVar23 && uVar17 != 0 || !bVar22 && uVar21 != 0) {
    return;
  }
  fVar24 = _DAT_142e36f28;
  if (*pcVar4 != '\t') {
    fVar24 = *(float *)(*param_8 + 0x1c);
  }
  fVar24 = (float)pdb_140de8220(0,_DAT_142f3e554,fVar24);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar6 = (undefined4 *)param_2[2];
  *puVar6 = uVar2;
  lVar5 = *param_2;
  pdb_1415e1530(lVar5 + 0x38);
  if (*(longlong *)(lVar5 + 0x48) == 0) {
    uVar19 = *(ulonglong *)(lVar5 + 0x28);
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar19,*(ulonglong *)(lVar5 + 0x10),&UNK_143043a08);
    }
    if (*(int *)(*(longlong *)(lVar5 + 8) + uVar19 * 0x30) != 1) goto LAB_141acf711;
    pdb_141808580(&uStack_c8,*(longlong *)(lVar5 + 8) + uVar19 * 0x30 + 8);
    if (uStack_c8 != -0x7ffffffffffffffc) {
      pdb_140a8f580(&uStack_c8);
      goto LAB_141acf711;
    }
    if ((char)uStack_c0 != '\0') goto LAB_141acf711;
  }
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar15 = *param_6;
  lVar7 = *(longlong *)(lVar15 + 0x30);
  uVar8 = *(undefined8 *)(lVar15 + 0x40);
  if (lVar7 == *(longlong *)(lVar15 + 0x20)) {
    pdb_142d7e8a0(lVar15 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar15 + 0x28) + lVar7 * 8) = uVar8;
  *(longlong *)(lVar15 + 0x30) = lVar7 + 1;
  *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
LAB_141acf711:
  puVar14 = (undefined8 *)pdb_140bf45b0(*param_3,&UNK_14331c990);
  if ((puVar14 != (undefined8 *)0x0) &&
     (lVar15 = (**(code **)(puVar14[1] + 0x18))(*puVar14), lVar15 != 0)) {
    if (*(longlong *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143387a10);
    }
    iVar3 = **(int **)(lVar15 + 8);
    piVar9 = (int *)*param_4;
    if (*piVar9 == iVar3) {
      *puVar6 = uVar2;
      pdb_140a87f70(lVar5);
    }
    else {
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      *piVar9 = iVar3;
      if (*(longlong *)*param_5 == 0) {
        pdb_14007ee60();
        uStack_b0 = pub_1406abab0(0x1c,1);
        uVar8 = _UNK_143387a3c;
        if (uStack_b0 == (byte *)0x0) {
          pdb_142dc7e2a(1,0x1c);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(ulonglong *)(uStack_b0 + 0xc) = CONCAT44(_UNK_143387a38,_DAT_143387a34);
        *(undefined8 *)(uStack_b0 + 0x14) = uVar8;
        uVar13 = _DAT_143387a34;
        uVar12 = _UNK_143387a30;
        uVar11 = _UNK_143387a2c;
        *(undefined4 *)uStack_b0 = _DAT_143387a28;
        *(undefined4 *)(uStack_b0 + 4) = uVar11;
        *(undefined4 *)(uStack_b0 + 8) = uVar12;
        *(undefined4 *)(uStack_b0 + 0xc) = uVar13;
        uStack_c8 = 0;
        uStack_b8 = 0x1c;
        uStack_a8 = 0x1c;
        uStack_a0 = CONCAT31(uStack_a0._1_3_,2);
      }
      else {
        pdb_140a8b180(&uStack_c8,*(longlong *)*param_5 + 0x10,&DAT_143387a28,0x1c);
        if ((int)uStack_c8 == 2) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143388100,0x2b,&uStack_f8,&UNK_1433880e0,&UNK_143387a48);
        }
      }
      uStack_f0 = uStack_c0;
      uStack_ec = uStack_bc;
      uStack_d8 = uStack_a8;
      uStack_d0 = uStack_a0;
      uStack_cc = uStack_9c;
      uStack_cb = uStack_9b;
      uStack_c9 = uStack_99;
      uStack_e8 = uStack_b8;
      uStack_e0 = uStack_b0;
      uStack_f8 = uStack_c8;
      uStack_81 = 1;
      pdb_140a8a6f0(&uStack_f8);
      fVar26 = 0.0;
      if (0.0 <= fVar24) {
        fVar26 = fVar24;
      }
      if (fVar26 <= fVar25) {
        fVar25 = fVar26;
      }
      uStack_81 = 1;
      pdb_140a8e730(&uStack_f8,&UNK_143387a60,0xd,fVar25);
      *puVar6 = uVar2;
      uStack_a8._0_4_ = (undefined4)uStack_d8;
      uStack_a8._4_4_ = uStack_d8._4_4_;
      uStack_a0 = uStack_d0;
      uStack_9c = uStack_cc;
      uStack_9b = uStack_cb;
      uStack_99 = uStack_c9;
      uStack_b8._0_4_ = (undefined4)uStack_e8;
      uStack_b8._4_4_ = uStack_e8._4_4_;
      uStack_b0._0_4_ = SUB84(uStack_e0,0);
      uStack_b0._4_4_ = uStack_e0._4_4_;
      uStack_c8._0_4_ = (int)uStack_f8;
      uStack_c8._4_4_ = uStack_f8._4_4_;
      uStack_c0 = uStack_f0;
      uStack_bc = uStack_ec;
      lVar15 = *(longlong *)(lVar5 + 0x48);
      if (lVar15 == *(longlong *)(lVar5 + 0x38)) {
        pdb_142d7e7c0(lVar5 + 0x38);
      }
      lVar7 = *(longlong *)(lVar5 + 0x40);
      lVar16 = lVar15 * 0x30;
      puVar1 = (undefined4 *)(lVar7 + 0x20 + lVar16);
      *puVar1 = (undefined4)uStack_a8;
      puVar1[1] = uStack_a8._4_4_;
      puVar1[2] = uStack_a0;
      puVar1[3] = CONCAT13(uStack_99,CONCAT21(uStack_9b,uStack_9c));
      puVar1 = (undefined4 *)(lVar7 + 0x10 + lVar16);
      *puVar1 = (undefined4)uStack_b8;
      puVar1[1] = uStack_b8._4_4_;
      puVar1[2] = (undefined4)uStack_b0;
      puVar1[3] = uStack_b0._4_4_;
      puVar1 = (undefined4 *)(lVar7 + lVar16);
      *puVar1 = (int)uStack_c8;
      puVar1[1] = uStack_c8._4_4_;
      puVar1[2] = uStack_c0;
      puVar1[3] = uStack_bc;
      *(longlong *)(lVar5 + 0x48) = lVar15 + 1;
      *puVar6 = uVar2;
      uStack_81 = 0;
      pdb_140a87e10(lVar5);
      uVar19 = *(ulonglong *)(lVar5 + 0x28);
      if (*(ulonglong *)(lVar5 + 0x10) <= uVar19) {
        uStack_81 = 0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar19,*(ulonglong *)(lVar5 + 0x10),&UNK_143043a80);
      }
      uStack_81 = 0;
      pdb_140a8e730(uVar19 * 0x30 + *(longlong *)(lVar5 + 8),&UNK_143387a60,0xd,fVar25);
    }
  }
  return;
}

