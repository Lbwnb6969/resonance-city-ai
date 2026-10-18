// VA 0x1414887e0, PDB extent 1015 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::subdivide_region_into_planks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::subdivide_region_into_planks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 1015 */

ulonglong * pdb_1414887e0(ulonglong *param_1,float *param_2,char param_3,float param_4)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  uStack_d0 = 0xfffffffffffffffe;
  auVar8._0_8_ = pdb_140deec10(param_2);
  auVar8._8_4_ = (float)extraout_XMM0_Qb;
  auVar8._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar7._0_8_ = pdb_140deec50(param_2);
  auVar7._8_8_ = extraout_XMM0_Qb_00;
  auVar12 = auVar7;
  if (param_3 == '\0') {
    auVar12 = auVar8;
  }
  auVar12._0_4_ = auVar12._0_4_ / param_4;
  auVar9._0_8_ = pub_142e32b00(auVar12._0_8_);
  auVar9._8_8_ = extraout_XMM0_Qb_01;
  if ((float)auVar9._0_8_ <= _DAT_142e36f28) {
    auVar10._4_12_ = auVar9._4_12_;
    auVar10._0_4_ = _DAT_142e36f28;
    auVar9._0_8_ = auVar10._0_8_;
  }
  fVar13 = (float)auVar9._0_8_;
  uVar3 = 0;
  uVar4 = (longlong)(fVar13 - _DAT_142e36f2c) & (longlong)fVar13 >> 0x3f | (longlong)fVar13;
  if (fVar13 < 0.0) {
    uVar4 = uVar3;
  }
  uVar2 = 0xffffffffffffffff;
  if (fVar13 <= _DAT_142e36f30) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 << 4;
  if (uVar4 < 0x7ffffffffffffffd && uVar2 >> 0x3c == 0) goto LAB_1414888d6;
  do {
    pdb_142dc7e2a(uVar3,uVar4);
LAB_1414888d6:
    if (uVar4 == 0) {
      pbStack_e0 = (byte *)0x4;
      uStack_e8 = 0;
      break;
    }
    pdb_14007ee60();
    uVar3 = 4;
    pbStack_e0 = pub_1406abab0(uVar4,4);
    uStack_e8 = uVar2;
  } while (pbStack_e0 == (byte *)0x0);
  uStack_d8 = 0;
  if (uVar2 != 0) {
    fVar13 = (float)(longlong)uVar2;
    lVar5 = 0xc;
    do {
      uVar4 = uStack_d8;
      if ((longlong)uStack_d8 < 0) {
        fVar6 = (float)uStack_d8;
        if (param_3 != '\0') goto LAB_1414889d2;
LAB_14148899d:
        fVar14 = param_2[1];
        auVar11._0_4_ = fVar6 * (float)auVar8._0_8_;
        auVar11._4_4_ = (float)(uStack_d8 + 1) * (float)auVar8._0_8_;
        auVar11._8_4_ = auVar8._8_4_ * 0.0;
        auVar11._12_4_ = auVar8._8_4_ * 0.0;
        auVar1._4_4_ = fVar13;
        auVar1._0_4_ = fVar13;
        auVar1._8_8_ = 0;
        auVar12 = divps(auVar11,auVar1);
        fVar15 = *param_2 + auVar12._0_4_;
        fVar16 = *param_2 + auVar12._4_4_;
        fVar6 = param_2[3];
        if (uStack_d8 == uStack_e8) {
          pdb_142d7ef30(&uStack_e8);
        }
      }
      else {
        fVar6 = (float)(longlong)uStack_d8;
        if (param_3 == '\0') goto LAB_14148899d;
LAB_1414889d2:
        fVar14 = (fVar6 * (float)auVar7._0_8_) / fVar13 + param_2[1] + 0.0;
        fVar15 = *param_2;
        fVar6 = ((float)(uStack_d8 + 1) * (float)auVar7._0_8_) / fVar13 + param_2[1];
        fVar16 = param_2[2];
        if (uStack_d8 == uStack_e8) {
          pdb_142d7ef30(&uStack_e8);
        }
      }
      uStack_d8 = uVar4 + 1;
      *(float *)(pbStack_e0 + lVar5 + -0xc) = fVar15;
      *(float *)(pbStack_e0 + lVar5 + -8) = fVar14;
      *(float *)(pbStack_e0 + lVar5 + -4) = fVar16;
      *(float *)(pbStack_e0 + lVar5) = fVar6;
      lVar5 = lVar5 + 0x10;
    } while (uVar2 != uStack_d8);
  }
  param_1[2] = uStack_d8;
  *param_1 = uStack_e8;
  param_1[1] = (ulonglong)pbStack_e0;
  return param_1;
}

