// VA 0x1409109b0, PDB extent 1296 bytes
// country_core::systems::prefab::create_prefab_rt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::prefab::create_prefab_rt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
   Extent: 1296 */

void pdb_1409109b0(longlong param_1,uint param_2,longlong *param_3,float *param_4,longlong *param_5,
                  undefined8 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1a0 [128];
  float *pfStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  cVar1 = *(char *)(param_1 + 0x84);
  if (cVar1 != '\x02') {
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
    puVar3 = (undefined4 *)param_3[2];
    *puVar3 = uVar2;
    lVar14 = *param_3;
    lStack_100 = *(longlong *)(lVar14 + 0x30);
    *(longlong *)(lVar14 + 0x30) = lStack_100 + 1;
    *puVar3 = uVar2;
    pfVar12 = (float *)pdb_1418c4490(lVar14,3);
    fVar27 = _DAT_142e36f50;
    lVar14 = *(longlong *)(&UNK_14301f840 + ((ulonglong)param_2 & 0xff) * 8);
    fVar21 = SQRT(*(float *)(param_1 + 4 + lVar14)) * _DAT_142e4fba0 + _DAT_142e36f50;
    iVar17 = (int)(longlong)fVar21;
    if (fVar21 < 0.0) {
      iVar17 = 0;
    }
    if (_DAT_142e46a48 < fVar21) {
      iVar17 = -1;
    }
    fVar21 = SQRT(*(float *)(param_1 + lVar14)) * _DAT_142e4fba0 + _DAT_142e36f50;
    uVar18 = (uint)(longlong)fVar21;
    if (fVar21 < 0.0) {
      uVar18 = 0;
    }
    if (_DAT_142e46a48 < fVar21) {
      uVar18 = 0xffffffff;
    }
    fVar21 = SQRT(*(float *)(param_1 + 8 + lVar14)) * _DAT_142e4fba0 + _DAT_142e36f50;
    iVar13 = (int)(longlong)fVar21;
    if (fVar21 < 0.0) {
      iVar13 = 0;
    }
    if (_DAT_142e46a48 < fVar21) {
      iVar13 = -1;
    }
    pfVar12[0x16] = (float)(iVar13 << 0x10 | uVar18 | iVar17 << 8);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    uStack_f8._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_f0._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_e8._0_4_ = (undefined4)uVar4;
    uStack_d8 = (float *)CONCAT44(uStack_f0._4_4_,(int)uVar9);
    uStack_d0 = CONCAT44((undefined4)uStack_e8,uStack_f8._4_4_);
    uStack_f0._0_4_ = (undefined4)uVar10;
    uStack_e8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_c8 = CONCAT44(uStack_e8._4_4_,(undefined4)uStack_f0);
    uStack_f8 = uVar9;
    uStack_f0 = uVar10;
    uStack_e8 = uVar4;
    pdb_140a9a270(auStack_1a0,&uStack_d8);
    fVar21 = param_4[4];
    fVar19 = (float)pub_142e32b30(fVar27 * fVar21);
    fVar20 = (float)pub_142e329e0(fVar27 * fVar21);
    fVar30 = fVar19 * 0.0;
    fVar21 = *param_4;
    fVar6 = param_4[1];
    fVar7 = param_4[2];
    fVar8 = param_4[3];
    fVar24 = fVar30 + fVar30;
    fVar22 = fVar19 + fVar19;
    fVar26 = fVar30 * fVar24;
    fVar31 = fVar26 - fVar22 * fVar20;
    fVar25 = fVar24 * fVar20;
    fVar28 = _UNK_142e378e4 - (fVar19 * fVar22 + fVar26);
    fVar29 = fVar19 * fVar24 + fVar25;
    fVar23 = _UNK_142e378e4 - (fVar26 + fVar26);
    fVar27 = param_4[3];
    *pfVar12 = fVar8 * fVar28;
    pfVar12[1] = fVar8 * (fVar30 * fVar22 + fVar25);
    pfVar12[2] = fVar8 * fVar31;
    pfVar12[3] = fVar8 * fVar31;
    pfVar12[4] = (fVar30 * fVar22 - fVar25) * fVar27;
    pfVar12[5] = fVar23 * fVar27;
    pfVar12[6] = fVar29 * fVar27;
    pfVar12[7] = fVar29 * fVar27;
    pfVar12[8] = fVar27 * (fVar22 * fVar20 + fVar26);
    pfVar12[9] = fVar27 * (fVar19 * fVar24 - fVar25);
    pfVar12[10] = fVar27 * fVar28;
    pfVar12[0xb] = fVar27 * fVar28;
    pfVar12[0xc] = fVar21;
    pfVar12[0xd] = fVar6;
    pfVar12[0xe] = fVar7;
    pfVar12[0xf] = fVar7;
    pdb_140a97aa0(&pfStack_120,auStack_1a0);
    pfVar11 = pfStack_120;
    lVar5 = CONCAT44(uStack_114,uStack_118);
    uVar16 = (ulonglong)(lVar5 - (longlong)pfStack_120) >> 2;
    lVar14 = *(longlong *)(pfVar12 + 0x14);
    if ((ulonglong)(*(longlong *)(pfVar12 + 0x10) - lVar14) < uVar16) {
      pdb_142d7f1b0(pfVar12 + 0x10,lVar14,uVar16,4,0xc);
      lVar14 = *(longlong *)(pfVar12 + 0x14);
    }
    uStack_c8 = *(undefined8 *)(pfVar12 + 0x12);
    uStack_c0 = uStack_110;
    uStack_b8 = uStack_108;
    uStack_d8 = pfVar12 + 0x14;
    uStack_d0 = lVar14;
    pdb_1418cbe70(pfVar11,lVar5,&uStack_d8);
    if (cVar1 == '\x01') {
      pdb_140def030(&pfStack_120,&uStack_f8);
      pdb_140def0d0(&uStack_d8,&uStack_f8);
      fVar27 = (float)uStack_d8;
      fVar21 = uStack_d8._4_4_;
      if ((float)uStack_d0 <= uStack_d8._4_4_) {
        fVar21 = (float)uStack_d0;
      }
      uStack_d8 = pfStack_120;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uStack_118);
      plVar15 = (longlong *)param_6[2];
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)param_6[3];
      }
      uVar4 = *param_6;
      lVar14 = plVar15[2];
      if ((ulonglong)(*plVar15 - lVar14) < 0x40) {
        pdb_142d7f1b0(plVar15,lVar14,0x40,1,1);
      }
      if (fVar21 <= fVar27) {
        fVar27 = fVar21;
      }
      fVar27 = fVar27 * _DAT_142e36f50;
      lVar5 = plVar15[1];
      *(code **)(lVar5 + lVar14) = pdb_14160cfa0;
      *(undefined8 *)(lVar5 + 8 + lVar14) = uVar4;
      *(undefined4 *)(lVar5 + 0x10 + lVar14) = 0;
      *(undefined4 *)(lVar5 + 0x20 + lVar14) = 0;
      *(float **)(lVar5 + 0x24 + lVar14) = uStack_d8;
      *(float *)(lVar5 + 0x2c + lVar14) = (float)uStack_d0;
      *(float *)(lVar5 + 0x30 + lVar14) = fVar27;
      *(undefined4 *)(lVar5 + 0x34 + lVar14) = 0x41200000;
      *(undefined1 *)(lVar5 + 0x38 + lVar14) = 0;
      plVar15[2] = lVar14 + 0x40;
    }
    pdb_14098a960(auStack_1a0);
    lVar14 = param_5[2];
    if (lVar14 == *param_5) {
      pdb_142d7e980(param_5);
    }
    lVar5 = param_5[1];
    *(undefined8 *)(lVar5 + lVar14 * 0x10) = 3;
    *(longlong *)(lVar5 + 8 + lVar14 * 0x10) = lStack_100;
    param_5[2] = lVar14 + 1;
  }
  return;
}

