// VA 0x140a76040, PDB extent 1051 bytes
// country_core::resources::ivy::ivy_direction_proposer::IvyDirectionProposer::get_direction
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_direction_proposer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::ivy::ivy_direction_proposer::IvyDirectionProposer::get_direction
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_direction_proposer.rs
   Extent: 1051 */

undefined8 pdb_140a76040(longlong param_1,float *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar16 [16];
  
  fVar27 = *param_2 / _DAT_14301920c;
  fVar29 = param_2[1] / _DAT_14301920c;
  fVar28 = param_2[2] / _DAT_14301920c;
  fVar13 = (float)pdb_1414a2190(param_1,_DAT_143040f08 + fVar27,_DAT_143040f0c + fVar29,
                                _DAT_143040f10 + fVar28);
  fVar14 = (float)pdb_1414a2190(param_1,_DAT_143040f14 + fVar27,_DAT_143040f18 + fVar29,
                                _DAT_143040f1c + fVar28);
  fVar28 = (float)pdb_1414a2190(param_1,_DAT_143040f20 + fVar27,_DAT_143040f24 + fVar29,
                                _DAT_143040f28 + fVar28);
  fVar27 = _DAT_142e36f28;
  fVar14 = fVar28 * _DAT_142e382c0 + (_DAT_142e36f28 - fVar28) * _DAT_142e3c658 + fVar14;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_3;
  uVar5 = SUB168(auVar22 * ZEXT816(0x870bbec93f99ec8a),0);
  uVar10 = uVar5 + 0x4385df649fccf645;
  lVar9 = SUB168(auVar22 * ZEXT816(0x870bbec93f99ec8a),8) + param_3 * 0x46c1da0a3f8cbb48 +
          0x2360ed051fc65da4 + (ulonglong)(0xbc7a209b603309ba < uVar5);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar10;
  uVar5 = SUB168(auVar1 * ZEXT816(0x4385df649fccf645),8) + uVar10 * 0x2360ed051fc65da4 +
          lVar9 * 0x4385df649fccf645;
  uVar8 = uVar5 ^ SUB168(auVar1 * ZEXT816(0x4385df649fccf645),0);
  bVar6 = (byte)(uVar5 >> 0x3a);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar10;
  uVar5 = SUB168(auVar2 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar10 * 0x17bce35bdf69743c +
          lVar9 * 0x529ed9eb20e0ae99;
  uVar10 = uVar5 ^ SUB168(auVar2 * ZEXT816(0x529ed9eb20e0ae99),0);
  bVar7 = (byte)(uVar5 >> 0x3a);
  uVar3 = pdb_1414a2190(param_1 + 0x78,
                        ((uint)(uVar10 >> bVar7) | (uint)(uVar10 << 0x40 - bVar7)) >> 9 | 0x3f800000
                        ,((float)(((uint)(uVar8 >> bVar6) | (uint)(uVar8 << 0x40 - bVar6)) >> 9 |
                                 0x3f800000) + _DAT_142e36f34) * _DAT_142e3a74c +
                         _DAT_142f3e570 + fVar29);
  auVar15._0_4_ = ((float)extraout_XMM0_Qa + (float)extraout_XMM0_Qa + fVar27) * _DAT_143040f30;
  auVar15._4_4_ = fVar29 * _UNK_143040f34;
  auVar15._8_4_ = (float)((ulonglong)extraout_XMM0_Qa >> 0x20) * _UNK_143040f38;
  auVar15._12_4_ = _UNK_143040f3c * 0.0;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = _DAT_142e378e0;
  auVar22 = maxps(auVar21,auVar15);
  iVar11 = -(uint)((float)_DAT_143040f40 < auVar22._0_4_);
  iVar12 = -(uint)((float)((ulonglong)_DAT_143040f40 >> 0x20) < auVar22._4_4_);
  auVar17._4_4_ = iVar12;
  auVar17._0_4_ = iVar11;
  auVar17._8_4_ = iVar12;
  auVar17._12_4_ = iVar12;
  auVar16._8_8_ = auVar17._8_8_;
  auVar16._4_4_ = iVar11;
  auVar16._0_4_ = iVar11;
  uVar4 = movmskpd(uVar3,auVar16);
  fVar28 = _DAT_142f57bc8;
  if ((uVar4 & 2) == 0) {
    fVar28 = auVar22._4_4_;
  }
  fVar13 = fVar13 * fVar28;
  fVar28 = fVar27 / SQRT(fVar13 * fVar13 + fVar14 * fVar14);
  fVar13 = fVar13 * fVar28;
  fVar14 = fVar14 * fVar28;
  fVar28 = (float)pub_142e32b30();
  fVar29 = (float)pub_142e329e0();
  fVar25 = fVar28 * fVar28;
  fVar26 = fVar29 * fVar29;
  fVar24 = fVar28 * 0.0 + fVar14 * 0.0 + fVar13 * 0.0;
  fVar24 = fVar24 + fVar24;
  fVar23 = 0.0 - fVar14 * fVar28;
  fVar20 = fVar29 + fVar29;
  auVar18._0_4_ = fVar20 * fVar23 + fVar24 * 0.0 + (fVar26 - (fVar25 + 0.0)) * fVar13;
  auVar18._4_4_ =
       fVar20 * (fVar28 * fVar13 - 0.0) + fVar24 * 0.0 + (fVar26 - (fVar25 + 0.0)) * fVar14;
  auVar18._8_4_ = fVar20 * fVar23 + fVar24 * fVar28 + (fVar26 - (fVar25 + 0.0)) * 0.0;
  auVar18._12_4_ = fVar20 * 0.0 + fVar24 * fVar29 + (fVar26 - (fVar25 + 0.0)) * 0.0;
  auVar19._4_12_ = auVar18._4_12_;
  auVar19._0_4_ =
       auVar18._0_4_ *
       (fVar27 / SQRT(auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_));
  return auVar19._0_8_;
}

