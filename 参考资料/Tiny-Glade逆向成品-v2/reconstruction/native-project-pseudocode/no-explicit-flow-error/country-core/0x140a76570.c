// VA 0x140a76570, PDB extent 1005 bytes
// country_core::systems::camera_rig::free::impl$1::translate_screen_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::camera_rig::free::impl$1::translate_screen_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
   Extent: 1005 */

void pdb_140a76570(longlong param_1,float *param_2,float param_3,longlong param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  uint uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar13;
  undefined4 extraout_XMM0_Db;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined **ppuStack_b8;
  code *pcStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  
  fVar25 = *(float *)(param_1 + 0x18);
  fVar13 = *(float *)(param_1 + 0x1c);
  fVar27 = *(float *)(param_1 + 0x20);
  fVar15 = *(float *)(param_1 + 0x24);
  fVar22 = *param_2;
  fVar19 = (float)*(undefined8 *)(param_2 + 1);
  fVar20 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar16 = fVar27 * fVar27;
  fVar17 = fVar15 * fVar15;
  fVar21 = fVar13 * fVar13 + fVar25 * fVar25;
  fVar14 = fVar27 * fVar20 + fVar13 * fVar19 + fVar25 * fVar22;
  fVar14 = fVar14 + fVar14;
  fVar24 = fVar15 + fVar15;
  fVar23 = fVar24 * (fVar25 * fVar19 - fVar22 * fVar13) +
           fVar14 * fVar27 + (fVar17 - (fVar21 + fVar16)) * fVar20;
  puVar10 = *(undefined8 **)(param_1 + 8);
  lVar11 = *(longlong *)(param_1 + 0x10);
  lVar9 = lVar11 << 4;
  puVar8 = puVar10;
  lStack_90 = param_4;
  do {
    if (lVar9 == 0) goto LAB_140a768d6;
    puVar1 = puVar8 + 2;
    pfVar7 = (float *)(**(code **)(puVar8[1] + 0x38))(*puVar8);
    pfVar2 = param_2 + 6;
    param_2 = pfVar7;
    (**(code **)pfVar2)(&ppuStack_b8);
    lVar9 = lVar9 + -0x10;
    puVar8 = puVar1;
  } while ((pfVar7 == (float *)0x0) ||
          (pcStack_b0 != (code *)0x2e441b8be050d85b ||
           ppuStack_b8 != (undefined **)0x1d5a207d10288a54));
  auVar26._0_4_ =
       (float)*(undefined8 *)pfVar7 +
       fVar24 * (fVar13 * fVar20 - fVar19 * fVar27) +
       fVar14 * fVar25 + (fVar17 - (fVar21 + fVar16)) * fVar22;
  auVar26._4_4_ =
       (float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20) +
       fVar24 * (fVar27 * fVar22 - fVar20 * fVar25) +
       fVar14 * fVar13 + (fVar17 - (fVar21 + fVar16)) * fVar19;
  auVar26._8_4_ = fVar23 + 0.0;
  auVar26._12_4_ =
       fVar24 * (fVar15 * 0.0 - fVar15 * 0.0) +
       fVar14 * fVar15 + (fVar17 - (fVar21 + fVar16)) * fVar20 + 0.0;
  fVar23 = fVar23 + pfVar7[2];
  if (DAT_143ca42c4 != '\0') {
    uVar5 = pub_142e32a20(param_3 * _DAT_142e37888);
    auVar18 = maxps(ZEXT416((uint)_DAT_143040f50),auVar26);
    fVar13 = auVar18._4_4_;
    iVar12 = -(uint)(_DAT_143040f60 < auVar18._0_4_);
    auVar4._4_4_ = iVar12;
    auVar4._0_4_ = iVar12;
    auVar4._8_4_ = -(uint)(_UNK_143040f64 < fVar13);
    auVar4._12_4_ = -(uint)(_UNK_143040f64 < fVar13);
    uVar6 = movmskpd(uVar5,auVar4);
    fVar22 = _DAT_143040f70;
    fVar25 = 0.0;
    if ((uVar6 & 1) == 0) {
      fVar22 = auVar18._0_4_;
      fVar25 = fVar13;
    }
    fVar15 = _DAT_142e36f28 - extraout_XMM0_Da;
    fVar27 = _DAT_143040f70;
    if ((uVar6 & 2) == 0) {
      fVar27 = fVar13;
    }
    fVar13 = _DAT_143040f50;
    if (_DAT_143040f50 <= fVar23) {
      fVar13 = fVar23;
    }
    fVar14 = _DAT_143040f70;
    if (fVar13 <= _DAT_143040f70) {
      fVar14 = fVar13;
    }
    fVar27 = (fVar27 - auVar26._4_4_) * fVar15 + auVar26._4_4_;
    fVar23 = fVar23 + (fVar14 - fVar23) * fVar15;
    pdb_1419c1ac0(*(undefined8 *)(lStack_90 + 0x20));
    fVar13 = extraout_XMM0_Da_00;
    if (extraout_XMM0_Da_00 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar13 = fVar13 + _DAT_142f95160;
    fVar14 = fVar13;
    if (fVar13 <= fVar27) {
      fVar14 = fVar27;
    }
    auVar26._4_4_ = (float)(~-(uint)NAN(fVar27) & (uint)fVar14 | -(uint)NAN(fVar27) & (uint)fVar13);
    auVar26._0_4_ = (fVar22 - auVar26._0_4_) * fVar15 + auVar26._0_4_;
    auVar26._8_4_ = fVar25;
    auVar26._12_4_ = (float)extraout_XMM0_Db;
  }
  lVar9 = lVar11 << 4;
  puVar8 = puVar10;
  while (lVar9 != 0) {
    puVar1 = puVar8 + 2;
    pfVar7 = (float *)(**(code **)(puVar8[1] + 0x38))(*puVar8);
    pfVar2 = param_2 + 6;
    param_2 = pfVar7;
    (**(code **)pfVar2)(&ppuStack_b8);
    lVar9 = lVar9 + -0x10;
    puVar8 = puVar1;
    if ((pfVar7 != (float *)0x0) &&
       (pcStack_b0 == (code *)0x2e441b8be050d85b && ppuStack_b8 == (undefined **)0x1d5a207d10288a54)
       ) {
      uVar3 = *(undefined8 *)pfVar7;
      fVar22 = pfVar7[2];
      lVar11 = lVar11 << 4;
      do {
        if (lVar11 == 0) {
          puStack_a0 = &UNK_14337fa53;
          uStack_98 = 0x22;
          ppuStack_b8 = &puStack_a0;
          pcStack_b0 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14337f99a,&ppuStack_b8,&UNK_14337fa18);
        }
        puVar8 = puVar10 + 2;
        pfVar7 = (float *)(**(code **)(puVar10[1] + 0x40))(*puVar10);
        pfVar2 = param_2 + 6;
        param_2 = pfVar7;
        (**(code **)pfVar2)(&ppuStack_b8);
        lVar11 = lVar11 + -0x10;
        puVar10 = puVar8;
      } while ((pfVar7 == (float *)0x0) ||
              (pcStack_b0 != (code *)0x2e441b8be050d85b ||
               ppuStack_b8 != (undefined **)0x1d5a207d10288a54));
      fVar22 = ((fVar23 - fVar22) * _DAT_142e382c8) / _DAT_142f3e554;
      auVar18._0_4_ = (auVar26._0_4_ - (float)uVar3) * _DAT_143040f80;
      auVar18._4_4_ = (auVar26._4_4_ - (float)((ulonglong)uVar3 >> 0x20)) * _UNK_143040f84;
      auVar18._8_4_ = (auVar26._8_4_ - 0.0) * _UNK_143040f88;
      auVar18._12_4_ = (auVar26._12_4_ - 0.0) * _UNK_143040f8c;
      auVar26 = divps(auVar18,_DAT_143040f90);
      *(ulonglong *)pfVar7 =
           CONCAT44((float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20) + auVar26._4_4_,
                    (float)*(undefined8 *)pfVar7 + auVar26._0_4_);
      pfVar7[2] = fVar22 + pfVar7[2];
      return;
    }
  }
LAB_140a768d6:
  puStack_a0 = &UNK_14337fa53;
  uStack_98 = 0x22;
  ppuStack_b8 = &puStack_a0;
  pcStack_b0 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14337f99a,&ppuStack_b8,&UNK_14337fa98);
}

