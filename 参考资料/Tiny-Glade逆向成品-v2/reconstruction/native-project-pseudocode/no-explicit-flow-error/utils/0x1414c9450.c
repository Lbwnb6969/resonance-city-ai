// VA 0x1414c9450, PDB extent 568 bytes
// utils::geometry::ray::Ray::from_mouse_ss
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/ray.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::ray::Ray::from_mouse_ss
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/ray.rs
   Extent: 568 */

undefined8 *
pdb_1414c9450(undefined8 *param_1,float param_2,float param_3,longlong param_4,float param_5,
             float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  fVar24 = _DAT_142e36f28;
  param_6 = (_DAT_142e36f28 - param_3) / param_6;
  fVar25 = param_2 / param_5 + param_2 / param_5 + _DAT_142e36f34;
  fVar34 = param_6 + param_6 + _DAT_142e36f28;
  fVar35 = *(float *)(param_4 + 0xc0);
  fVar36 = *(float *)(param_4 + 0xc4);
  fVar37 = *(float *)(param_4 + 200);
  fVar38 = *(float *)(param_4 + 0xcc);
  fVar1 = *(float *)(param_4 + 0xd0);
  fVar2 = *(float *)(param_4 + 0xd4);
  fVar3 = *(float *)(param_4 + 0xd8);
  fVar4 = *(float *)(param_4 + 0xdc);
  fVar5 = *(float *)(param_4 + 0xe0);
  fVar6 = *(float *)(param_4 + 0xe4);
  fVar7 = *(float *)(param_4 + 0xe8);
  fVar8 = *(float *)(param_4 + 0xec);
  fVar9 = *(float *)(param_4 + 0xf0);
  fVar10 = *(float *)(param_4 + 0xf4);
  fVar11 = *(float *)(param_4 + 0xf8);
  fVar12 = *(float *)(param_4 + 0xfc);
  fVar13 = *(float *)(param_4 + 0x40);
  fVar14 = *(float *)(param_4 + 0x44);
  fVar15 = *(float *)(param_4 + 0x48);
  fVar16 = *(float *)(param_4 + 0x4c);
  fVar17 = *(float *)(param_4 + 0x50);
  fVar18 = *(float *)(param_4 + 0x54);
  fVar19 = *(float *)(param_4 + 0x58);
  fVar20 = *(float *)(param_4 + 0x5c);
  fVar33 = *(float *)(param_4 + 0x60);
  fVar39 = *(float *)(param_4 + 100);
  fVar40 = *(float *)(param_4 + 0x68);
  fVar41 = *(float *)(param_4 + 0x6c);
  fVar42 = *(float *)(param_4 + 0x70);
  fVar21 = *(float *)(param_4 + 0x74);
  fVar22 = *(float *)(param_4 + 0x78);
  fVar23 = *(float *)(param_4 + 0x7c);
  fVar28 = fVar41 * fVar9 + fVar40 * fVar5 + fVar39 * fVar1 + fVar33 * fVar35;
  fVar31 = fVar41 * fVar10 + fVar40 * fVar6 + fVar39 * fVar2 + fVar33 * fVar36;
  fVar32 = fVar41 * fVar11 + fVar40 * fVar7 + fVar39 * fVar3 + fVar33 * fVar37;
  fVar33 = fVar41 * fVar12 + fVar40 * fVar8 + fVar39 * fVar4 + fVar33 * fVar38;
  fVar39 = fVar23 * fVar9 + fVar22 * fVar5 + fVar21 * fVar1 + fVar42 * fVar35;
  fVar40 = fVar23 * fVar10 + fVar22 * fVar6 + fVar21 * fVar2 + fVar42 * fVar36;
  fVar41 = fVar23 * fVar11 + fVar22 * fVar7 + fVar21 * fVar3 + fVar42 * fVar37;
  fVar42 = fVar23 * fVar12 + fVar22 * fVar8 + fVar21 * fVar4 + fVar42 * fVar38;
  fVar35 = fVar34 * (fVar20 * fVar9 + fVar19 * fVar5 + fVar18 * fVar1 + fVar17 * fVar35) +
           fVar25 * (fVar16 * fVar9 + fVar15 * fVar5 + fVar14 * fVar1 + fVar13 * fVar35);
  fVar36 = fVar34 * (fVar20 * fVar10 + fVar19 * fVar6 + fVar18 * fVar2 + fVar17 * fVar36) +
           fVar25 * (fVar16 * fVar10 + fVar15 * fVar6 + fVar14 * fVar2 + fVar13 * fVar36);
  fVar37 = fVar34 * (fVar20 * fVar11 + fVar19 * fVar7 + fVar18 * fVar3 + fVar17 * fVar37) +
           fVar25 * (fVar16 * fVar11 + fVar15 * fVar7 + fVar14 * fVar3 + fVar13 * fVar37);
  fVar38 = fVar34 * (fVar20 * fVar12 + fVar19 * fVar8 + fVar18 * fVar4 + fVar17 * fVar38) +
           fVar25 * (fVar16 * fVar12 + fVar15 * fVar8 + fVar14 * fVar4 + fVar13 * fVar38);
  auVar26._0_4_ = fVar28 + fVar35 + fVar39;
  auVar26._4_4_ = fVar31 + fVar36 + fVar40;
  auVar26._8_4_ = fVar32 + fVar37 + fVar41;
  auVar26._12_4_ = fVar33 + fVar38 + fVar42;
  auVar27._4_4_ = auVar26._12_4_;
  auVar27._0_4_ = auVar26._12_4_;
  auVar27._8_4_ = auVar26._12_4_;
  auVar27._12_4_ = auVar26._12_4_;
  auVar27 = divps(auVar26,auVar27);
  auVar29._0_4_ = fVar28 * _DAT_14303aa10 + fVar35 + fVar39;
  auVar29._4_4_ = fVar31 * _UNK_14303aa14 + fVar36 + fVar40;
  auVar29._8_4_ = fVar32 * _UNK_14303aa18 + fVar37 + fVar41;
  auVar29._12_4_ = fVar33 * _UNK_14303aa1c + fVar38 + fVar42;
  auVar30._4_4_ = auVar29._12_4_;
  auVar30._0_4_ = auVar29._12_4_;
  auVar30._8_4_ = auVar29._12_4_;
  auVar30._12_4_ = auVar29._12_4_;
  auVar30 = divps(auVar29,auVar30);
  *param_1 = auVar27._0_8_;
  fVar35 = auVar30._0_4_ - auVar27._0_4_;
  fVar36 = auVar30._4_4_ - auVar27._4_4_;
  fVar37 = auVar30._8_4_ - auVar27._8_4_;
  fVar24 = fVar24 / SQRT(fVar37 * fVar37 + fVar36 * fVar36 + fVar35 * fVar35);
  *(float *)(param_1 + 1) = _DAT_14300c770 * (auVar27._8_4_ - 0.0);
  *(float *)((longlong)param_1 + 0xc) = fVar24 * fVar35;
  *(float *)(param_1 + 2) = fVar24 * fVar36;
  *(float *)((longlong)param_1 + 0x14) = fVar24 * fVar37;
  return param_1;
}

