// VA 0x1417ca2e0, PDB extent 1435 bytes
// turbosloth::id::impl$3::write
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::id::impl$3::write
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/id.rs
   Extent: 1435 */

void pdb_1417ca2e0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  uint uVar15;
  uint uVar16;
  short sVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [32];
  undefined1 (*pauVar22) [32];
  undefined1 (*pauVar23) [16];
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auVar27 [32];
  ulonglong uVar29;
  longlong lVar30;
  undefined1 auVar28 [32];
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar36;
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  ulonglong uVar37;
  ulonglong uVar41;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  if (*_DAT_143cad8c0 == 0) {
    sVar17 = pdb_142dec140();
  }
  else {
    sVar17 = (short)*_DAT_143cad8c0;
  }
  if (sVar17 < 0) {
    if (param_3 != 0) {
      lVar8 = *param_1;
      lVar9 = param_1[1];
      param_1[0x2d] = param_1[0x2d] + param_3;
      uVar26 = 0x100 - param_1[0x23];
      uVar25 = uVar26;
      if (param_3 < uVar26) {
        uVar25 = param_3;
      }
      pub_142e32760((longlong)param_1 + param_1[0x23] + 0x18,param_2,uVar25);
      param_1[0x23] = param_1[0x23] + uVar25;
      uVar18 = param_3 - uVar25;
      if (uVar18 != 0 && uVar26 <= param_3) {
        lVar19 = param_1[0x2c];
        auVar28 = *(undefined1 (*) [32])(param_1 + 3) ^ *(undefined1 (*) [32])(lVar8 + lVar19 * 8);
        auVar39 = vpshufd_avx2(*(undefined1 (*) [32])(param_1 + 3),0x4e);
        auVar38 = vpsrlq_avx2(auVar28,0x20);
        auVar38 = vpmuludq_avx2(auVar28,auVar38);
        auVar28._0_8_ =
             auVar39._0_8_ + *(longlong *)*(undefined1 (*) [24])(param_1 + 0x24) + auVar38._0_8_;
        auVar28._8_8_ = auVar39._8_8_ + param_1[0x25] + auVar38._8_8_;
        auVar28._16_8_ =
             auVar39._16_8_ + SUB248(*(undefined1 (*) [24])(param_1 + 0x24),0x10) + auVar38._16_8_;
        auVar28._24_8_ = auVar39._24_8_ + param_1[0x27] + auVar38._24_8_;
        *(undefined1 (*) [32])(param_1 + 0x24) = auVar28;
        auVar38 = *(undefined1 (*) [32])(param_1 + 7) ^
                  *(undefined1 (*) [32])(lVar8 + 0x20 + lVar19 * 8);
        auVar40 = vpshufd_avx2(*(undefined1 (*) [32])(param_1 + 7),0x4e);
        uVar26 = lVar9 - 0x40U >> 3;
        auVar39 = vpsrlq_avx2(auVar38,0x20);
        auVar39 = vpmuludq_avx2(auVar38,auVar39);
        auVar38._0_8_ =
             auVar40._0_8_ + *(longlong *)*(undefined1 (*) [24])(param_1 + 0x28) + auVar39._0_8_;
        auVar38._8_8_ = auVar40._8_8_ + param_1[0x29] + auVar39._8_8_;
        auVar38._16_8_ =
             auVar40._16_8_ + SUB248(*(undefined1 (*) [24])(param_1 + 0x28),0x10) + auVar39._16_8_;
        auVar38._24_8_ = auVar40._24_8_ + param_1[0x2b] + auVar39._24_8_;
        *(undefined1 (*) [32])(param_1 + 0x28) = auVar38;
        uVar29 = lVar19 + 1;
        param_1[0x2c] = uVar29;
        if (uVar29 == uVar26) {
          auVar39 = vpsrlq_avx2(auVar28,0x2f);
          auVar28 = auVar39 ^ *(undefined1 (*) [32])(lVar8 + -0x40 + lVar9) ^ auVar28;
          auVar40._8_8_ = _UNK_14332ef20;
          auVar40._0_8_ = _UNK_14332ef20;
          auVar40._16_8_ = _UNK_14332ef20;
          auVar40._24_8_ = _UNK_14332ef20;
          auVar39 = vpmuludq_avx2(auVar28,auVar40);
          auVar28 = vpsrlq_avx2(auVar28,0x20);
          auVar28 = vpmuludq_avx2(auVar28,auVar40);
          auVar28 = vpsllq_avx2(auVar28,0x20);
          param_1[0x24] = auVar39._0_8_ + auVar28._0_8_;
          param_1[0x25] = auVar39._8_8_ + auVar28._8_8_;
          param_1[0x26] = auVar39._16_8_ + auVar28._16_8_;
          param_1[0x27] = auVar39._24_8_ + auVar28._24_8_;
          auVar28 = vpsrlq_avx2(auVar38,0x2f);
          auVar38 = auVar28 ^ *(undefined1 (*) [32])(lVar8 + -0x20 + lVar9) ^ auVar38;
          auVar28 = vpmuludq_avx2(auVar38,auVar40);
          auVar38 = vpsrlq_avx2(auVar38,0x20);
          auVar38 = vpmuludq_avx2(auVar38,auVar40);
          auVar38 = vpsllq_avx2(auVar38,0x20);
          param_1[0x28] = auVar28._0_8_ + auVar38._0_8_;
          param_1[0x29] = auVar28._8_8_ + auVar38._8_8_;
          param_1[0x2a] = auVar28._16_8_ + auVar38._16_8_;
          param_1[0x2b] = auVar28._24_8_ + auVar38._24_8_;
          param_1[0x2c] = 0;
          uVar29 = 0;
        }
        auVar28 = *(undefined1 (*) [32])(param_1 + 0xb) ^ *(undefined1 (*) [32])(lVar8 + uVar29 * 8)
        ;
        auVar38 = vpshufd_avx2(*(undefined1 (*) [32])(param_1 + 0xb),0x4e);
        auVar39 = vpsrlq_avx2(auVar28,0x20);
        auVar28 = vpmuludq_avx2(auVar28,auVar39);
        auVar39._0_8_ =
             auVar38._0_8_ + *(longlong *)*(undefined1 (*) [24])(param_1 + 0x24) + auVar28._0_8_;
        auVar39._8_8_ = auVar38._8_8_ + param_1[0x25] + auVar28._8_8_;
        auVar39._16_8_ =
             auVar38._16_8_ + SUB248(*(undefined1 (*) [24])(param_1 + 0x24),0x10) + auVar28._16_8_;
        auVar39._24_8_ = auVar38._24_8_ + param_1[0x27] + auVar28._24_8_;
        *(undefined1 (*) [32])(param_1 + 0x24) = auVar39;
        auVar28 = *(undefined1 (*) [32])(param_1 + 0xf) ^
                  *(undefined1 (*) [32])(lVar8 + 0x20 + uVar29 * 8);
        auVar38 = vpshufd_avx2(*(undefined1 (*) [32])(param_1 + 0xf),0x4e);
        auVar40 = vpsrlq_avx2(auVar28,0x20);
        auVar28 = vpmuludq_avx2(auVar28,auVar40);
        auVar10._0_8_ =
             auVar38._0_8_ + *(longlong *)*(undefined1 (*) [24])(param_1 + 0x28) + auVar28._0_8_;
        auVar10._8_8_ = auVar38._8_8_ + param_1[0x29] + auVar28._8_8_;
        auVar10._16_8_ =
             auVar38._16_8_ + SUB248(*(undefined1 (*) [24])(param_1 + 0x28),0x10) + auVar28._16_8_;
        auVar10._24_8_ = auVar38._24_8_ + param_1[0x2b] + auVar28._24_8_;
        *(undefined1 (*) [32])(param_1 + 0x28) = auVar10;
        uVar29 = uVar29 + 1;
        param_1[0x2c] = uVar29;
        if (uVar29 == uVar26) {
          auVar28 = vpsrlq_avx2(auVar39,0x2f);
          auVar39 = auVar28 ^ *(undefined1 (*) [32])(lVar8 + -0x40 + lVar9) ^ auVar39;
          auVar33._8_8_ = _UNK_14332ef20;
          auVar33._0_8_ = _UNK_14332ef20;
          auVar33._16_8_ = _UNK_14332ef20;
          auVar33._24_8_ = _UNK_14332ef20;
          auVar28 = vpmuludq_avx2(auVar39,auVar33);
          auVar38 = vpsrlq_avx2(auVar39,0x20);
          auVar38 = vpmuludq_avx2(auVar38,auVar33);
          auVar38 = vpsllq_avx2(auVar38,0x20);
          param_1[0x24] = auVar28._0_8_ + auVar38._0_8_;
          param_1[0x25] = auVar28._8_8_ + auVar38._8_8_;
          param_1[0x26] = auVar28._16_8_ + auVar38._16_8_;
          param_1[0x27] = auVar28._24_8_ + auVar38._24_8_;
          auVar28 = vpsrlq_avx2(auVar10,0x2f);
          auVar10 = auVar28 ^ *(undefined1 (*) [32])(lVar8 + -0x20 + lVar9) ^ auVar10;
          auVar28 = vpmuludq_avx2(auVar10,auVar33);
          auVar38 = vpsrlq_avx2(auVar10,0x20);
          auVar38 = vpmuludq_avx2(auVar38,auVar33);
          auVar38 = vpsllq_avx2(auVar38,0x20);
          param_1[0x28] = auVar28._0_8_ + auVar38._0_8_;
          param_1[0x29] = auVar28._8_8_ + auVar38._8_8_;
          param_1[0x2a] = auVar28._16_8_ + auVar38._16_8_;
          param_1[0x2b] = auVar28._24_8_ + auVar38._24_8_;
          param_1[0x2c] = 0;
          uVar29 = 0;
        }
        auVar28 = *(undefined1 (*) [32])(param_1 + 0x13) ^
                  *(undefined1 (*) [32])(lVar8 + uVar29 * 8);
        auVar38 = vpshufd_avx2(*(undefined1 (*) [32])(param_1 + 0x13),0x4e);
        auVar39 = vpsrlq_avx2(auVar28,0x20);
        auVar28 = vpmuludq_avx2(auVar28,auVar39);
        auVar11._0_8_ =
             auVar38._0_8_ + *(longlong *)*(undefined1 (*) [24])(param_1 + 0x24) + auVar28._0_8_;
        auVar11._8_8_ = auVar38._8_8_ + param_1[0x25] + auVar28._8_8_;
        auVar11._16_8_ =
             auVar38._16_8_ + SUB248(*(undefined1 (*) [24])(param_1 + 0x24),0x10) + auVar28._16_8_;
        auVar11._24_8_ = auVar38._24_8_ + param_1[0x27] + auVar28._24_8_;
        *(undefined1 (*) [32])(param_1 + 0x24) = auVar11;
        auVar28 = *(undefined1 (*) [32])(param_1 + 0x17) ^
                  *(undefined1 (*) [32])(lVar8 + 0x20 + uVar29 * 8);
        auVar38 = vpshufd_avx2(*(undefined1 (*) [32])(param_1 + 0x17),0x4e);
        auVar39 = vpsrlq_avx2(auVar28,0x20);
        auVar28 = vpmuludq_avx2(auVar28,auVar39);
        auVar12._0_8_ =
             auVar38._0_8_ + *(longlong *)*(undefined1 (*) [24])(param_1 + 0x28) + auVar28._0_8_;
        auVar12._8_8_ = auVar38._8_8_ + param_1[0x29] + auVar28._8_8_;
        auVar12._16_8_ =
             auVar38._16_8_ + SUB248(*(undefined1 (*) [24])(param_1 + 0x28),0x10) + auVar28._16_8_;
        auVar12._24_8_ = auVar38._24_8_ + param_1[0x2b] + auVar28._24_8_;
        *(undefined1 (*) [32])(param_1 + 0x28) = auVar12;
        uVar29 = uVar29 + 1;
        param_1[0x2c] = uVar29;
        if (uVar29 == uVar26) {
          auVar28 = vpsrlq_avx2(auVar11,0x2f);
          auVar11 = auVar28 ^ *(undefined1 (*) [32])(lVar8 + -0x40 + lVar9) ^ auVar11;
          auVar34._8_8_ = _UNK_14332ef20;
          auVar34._0_8_ = _UNK_14332ef20;
          auVar34._16_8_ = _UNK_14332ef20;
          auVar34._24_8_ = _UNK_14332ef20;
          auVar28 = vpmuludq_avx2(auVar11,auVar34);
          auVar38 = vpsrlq_avx2(auVar11,0x20);
          auVar38 = vpmuludq_avx2(auVar38,auVar34);
          auVar38 = vpsllq_avx2(auVar38,0x20);
          param_1[0x24] = auVar28._0_8_ + auVar38._0_8_;
          param_1[0x25] = auVar28._8_8_ + auVar38._8_8_;
          param_1[0x26] = auVar28._16_8_ + auVar38._16_8_;
          param_1[0x27] = auVar28._24_8_ + auVar38._24_8_;
          auVar28 = vpsrlq_avx2(auVar12,0x2f);
          auVar12 = auVar28 ^ *(undefined1 (*) [32])(lVar8 + -0x20 + lVar9) ^ auVar12;
          auVar28 = vpmuludq_avx2(auVar12,auVar34);
          auVar38 = vpsrlq_avx2(auVar12,0x20);
          auVar38 = vpmuludq_avx2(auVar38,auVar34);
          auVar38 = vpsllq_avx2(auVar38,0x20);
          param_1[0x28] = auVar28._0_8_ + auVar38._0_8_;
          param_1[0x29] = auVar28._8_8_ + auVar38._8_8_;
          param_1[0x2a] = auVar28._16_8_ + auVar38._16_8_;
          param_1[0x2b] = auVar28._24_8_ + auVar38._24_8_;
          param_1[0x2c] = 0;
          uVar29 = 0;
        }
        auVar28 = *(undefined1 (*) [32])(param_1 + 0x1b) ^
                  *(undefined1 (*) [32])(lVar8 + uVar29 * 8);
        auVar38 = vpshufd_avx2(*(undefined1 (*) [32])(param_1 + 0x1b),0x4e);
        auVar39 = vpsrlq_avx2(auVar28,0x20);
        auVar28 = vpmuludq_avx2(auVar28,auVar39);
        auVar13._0_8_ =
             auVar38._0_8_ + *(longlong *)*(undefined1 (*) [24])(param_1 + 0x24) + auVar28._0_8_;
        auVar13._8_8_ = auVar38._8_8_ + param_1[0x25] + auVar28._8_8_;
        auVar13._16_8_ =
             auVar38._16_8_ + SUB248(*(undefined1 (*) [24])(param_1 + 0x24),0x10) + auVar28._16_8_;
        auVar13._24_8_ = auVar38._24_8_ + param_1[0x27] + auVar28._24_8_;
        *(undefined1 (*) [32])(param_1 + 0x24) = auVar13;
        auVar28 = *(undefined1 (*) [32])(param_1 + 0x1f) ^
                  *(undefined1 (*) [32])(lVar8 + 0x20 + uVar29 * 8);
        auVar38 = vpshufd_avx2(*(undefined1 (*) [32])(param_1 + 0x1f),0x4e);
        auVar39 = vpsrlq_avx2(auVar28,0x20);
        auVar28 = vpmuludq_avx2(auVar28,auVar39);
        auVar14._0_8_ =
             auVar38._0_8_ + *(longlong *)*(undefined1 (*) [24])(param_1 + 0x28) + auVar28._0_8_;
        auVar14._8_8_ = auVar38._8_8_ + param_1[0x29] + auVar28._8_8_;
        auVar14._16_8_ =
             auVar38._16_8_ + SUB248(*(undefined1 (*) [24])(param_1 + 0x28),0x10) + auVar28._16_8_;
        auVar14._24_8_ = auVar38._24_8_ + param_1[0x2b] + auVar28._24_8_;
        *(undefined1 (*) [32])(param_1 + 0x28) = auVar14;
        uVar29 = uVar29 + 1;
        param_1[0x2c] = uVar29;
        if (uVar29 == uVar26) {
          auVar28 = vpsrlq_avx2(auVar13,0x2f);
          auVar13 = auVar28 ^ *(undefined1 (*) [32])(lVar8 + -0x40 + lVar9) ^ auVar13;
          auVar35._8_8_ = _UNK_14332ef20;
          auVar35._0_8_ = _UNK_14332ef20;
          auVar35._16_8_ = _UNK_14332ef20;
          auVar35._24_8_ = _UNK_14332ef20;
          auVar28 = vpmuludq_avx2(auVar13,auVar35);
          auVar38 = vpsrlq_avx2(auVar13,0x20);
          auVar38 = vpmuludq_avx2(auVar38,auVar35);
          auVar38 = vpsllq_avx2(auVar38,0x20);
          param_1[0x24] = auVar28._0_8_ + auVar38._0_8_;
          param_1[0x25] = auVar28._8_8_ + auVar38._8_8_;
          param_1[0x26] = auVar28._16_8_ + auVar38._16_8_;
          param_1[0x27] = auVar28._24_8_ + auVar38._24_8_;
          auVar28 = vpsrlq_avx2(auVar14,0x2f);
          auVar14 = auVar28 ^ *(undefined1 (*) [32])(lVar8 + -0x20 + lVar9) ^ auVar14;
          auVar28 = vpmuludq_avx2(auVar14,auVar35);
          auVar38 = vpsrlq_avx2(auVar14,0x20);
          auVar38 = vpmuludq_avx2(auVar38,auVar35);
          auVar38 = vpsllq_avx2(auVar38,0x20);
          param_1[0x28] = auVar28._0_8_ + auVar38._0_8_;
          param_1[0x29] = auVar28._8_8_ + auVar38._8_8_;
          param_1[0x2a] = auVar28._16_8_ + auVar38._16_8_;
          param_1[0x2b] = auVar28._24_8_ + auVar38._24_8_;
          param_1[0x2c] = 0;
          uVar29 = 0;
        }
        pauVar22 = (undefined1 (*) [32])(param_2 + uVar25);
        pauVar21 = pauVar22;
        if (0x3f < uVar18) {
          pauVar21 = (undefined1 (*) [32])(pauVar22[-2] + (uVar18 & 0x7fffffffffffffc0));
          lVar19 = (uVar18 & 0x7fffffffffffffc0) - 0x40;
          uVar18 = uVar18 - lVar19;
          if (lVar19 != 0) {
            auVar6 = *(undefined1 (*) [32])(param_1 + 0x24);
            auVar7 = *(undefined1 (*) [32])(param_1 + 0x28);
            auVar27._8_8_ = _UNK_14332ef20;
            auVar27._0_8_ = _UNK_14332ef20;
            auVar27._16_8_ = _UNK_14332ef20;
            auVar27._24_8_ = _UNK_14332ef20;
            do {
              auVar28 = *pauVar22 ^ *(undefined1 (*) [32])(lVar8 + uVar29 * 8);
              auVar38 = vpshufd_avx2(*pauVar22,0x4e);
              lVar19 = auVar6._8_8_;
              lVar30 = auVar6._16_8_;
              lVar31 = auVar6._24_8_;
              auVar39 = vpsrlq_avx2(auVar28,0x20);
              auVar28 = vpmuludq_avx2(auVar28,auVar39);
              auVar39 = pauVar22[1] ^ *(undefined1 (*) [32])(lVar8 + 0x20 + uVar29 * 8);
              auVar6._0_8_ = auVar6._0_8_ + auVar38._0_8_ + auVar28._0_8_;
              auVar6._8_8_ = lVar19 + auVar38._8_8_ + auVar28._8_8_;
              auVar6._16_8_ = lVar30 + auVar38._16_8_ + auVar28._16_8_;
              auVar6._24_8_ = lVar31 + auVar38._24_8_ + auVar28._24_8_;
              auVar38 = vpshufd_avx2(pauVar22[1],0x4e);
              lVar19 = auVar7._8_8_;
              lVar30 = auVar7._16_8_;
              lVar31 = auVar7._24_8_;
              auVar28 = vpsrlq_avx2(auVar39,0x20);
              auVar28 = vpmuludq_avx2(auVar39,auVar28);
              auVar7._0_8_ = auVar7._0_8_ + auVar38._0_8_ + auVar28._0_8_;
              auVar7._8_8_ = lVar19 + auVar38._8_8_ + auVar28._8_8_;
              auVar7._16_8_ = lVar30 + auVar38._16_8_ + auVar28._16_8_;
              auVar7._24_8_ = lVar31 + auVar38._24_8_ + auVar28._24_8_;
              uVar29 = uVar29 + 1;
              if (uVar29 == uVar26) {
                auVar28 = vpsrlq_avx2(auVar6,0x2f);
                auVar6 = auVar28 ^ *(undefined1 (*) [32])(lVar8 + -0x40 + lVar9) ^ auVar6;
                auVar28 = vpmuludq_avx2(auVar6,auVar27);
                auVar38 = vpsrlq_avx2(auVar6,0x20);
                auVar38 = vpmuludq_avx2(auVar38,auVar27);
                auVar38 = vpsllq_avx2(auVar38,0x20);
                auVar39 = vpsrlq_avx2(auVar7,0x2f);
                auVar6._0_8_ = auVar28._0_8_ + auVar38._0_8_;
                auVar6._8_8_ = auVar28._8_8_ + auVar38._8_8_;
                auVar6._16_8_ = auVar28._16_8_ + auVar38._16_8_;
                auVar6._24_8_ = auVar28._24_8_ + auVar38._24_8_;
                auVar7 = auVar39 ^ *(undefined1 (*) [32])(lVar8 + -0x20 + lVar9) ^ auVar7;
                auVar28 = vpmuludq_avx2(auVar7,auVar27);
                auVar38 = vpsrlq_avx2(auVar7,0x20);
                auVar38 = vpmuludq_avx2(auVar38,auVar27);
                auVar38 = vpsllq_avx2(auVar38,0x20);
                auVar7._0_8_ = auVar28._0_8_ + auVar38._0_8_;
                auVar7._8_8_ = auVar28._8_8_ + auVar38._8_8_;
                auVar7._16_8_ = auVar28._16_8_ + auVar38._16_8_;
                auVar7._24_8_ = auVar28._24_8_ + auVar38._24_8_;
                uVar29 = 0;
              }
              pauVar22 = pauVar22 + 2;
            } while (pauVar22 != pauVar21);
            *(undefined1 (*) [32])(param_1 + 0x24) = auVar6;
            *(undefined1 (*) [32])(param_1 + 0x28) = auVar7;
            param_1[0x2c] = uVar29;
          }
        }
        pub_142e32760(param_1 + 3,pauVar21,uVar18);
        param_1[0x23] = uVar18;
      }
    }
    return;
  }
  if (param_3 != 0) {
    lVar8 = *param_1;
    lVar9 = param_1[1];
    param_1[0x2d] = param_1[0x2d] + param_3;
    uVar26 = 0x100 - param_1[0x23];
    uVar25 = uVar26;
    if (param_3 < uVar26) {
      uVar25 = param_3;
    }
    pub_142e32760((longlong)param_1 + param_1[0x23] + 0x18,param_2,uVar25);
    param_1[0x23] = param_1[0x23] + uVar25;
    uVar16 = _UNK_14327a318;
    uVar15 = _DAT_14327a310;
    uVar18 = param_3 - uVar25;
    if (uVar18 != 0 && uVar26 <= param_3) {
      uVar24 = lVar9 - 0x40U >> 3;
      pauVar23 = (undefined1 (*) [16])(param_2 + uVar25);
      uVar25 = param_1[0x2c];
      uVar42 = param_1[0x24];
      uVar43 = param_1[0x25];
      uVar37 = param_1[0x26];
      uVar41 = param_1[0x27];
      uVar32 = param_1[0x28];
      uVar36 = param_1[0x29];
      uVar26 = param_1[0x2a];
      uVar29 = param_1[0x2b];
      lVar19 = 0;
      do {
        auVar52 = *(undefined1 (*) [16])((longlong)param_1 + lVar19 + 0x18);
        auVar45 = *(undefined1 (*) [16])((longlong)param_1 + lVar19 + 0x28);
        auVar46 = *(undefined1 (*) [16])((longlong)param_1 + lVar19 + 0x38);
        auVar5 = *(undefined1 (*) [16])((longlong)param_1 + lVar19 + 0x48);
        auVar50 = *(undefined1 (*) [16])(lVar8 + uVar25 * 8) ^ auVar52;
        auVar51._0_8_ = auVar52._8_8_;
        auVar51._8_4_ = auVar52._0_4_;
        auVar51._12_4_ = auVar52._4_4_;
        uVar42 = (auVar50._0_8_ >> 0x20) * (ulonglong)auVar50._0_4_ + auVar51._0_8_ + uVar42;
        uVar43 = (auVar50._8_8_ >> 0x20) * (ulonglong)auVar50._8_4_ + auVar51._8_8_ + uVar43;
        auVar51 = *(undefined1 (*) [16])(lVar8 + 0x10 + uVar25 * 8) ^ auVar45;
        auVar52._0_8_ = auVar45._8_8_;
        auVar52._8_4_ = auVar45._0_4_;
        auVar52._12_4_ = auVar45._4_4_;
        uVar37 = (auVar51._0_8_ >> 0x20) * (ulonglong)auVar51._0_4_ + auVar52._0_8_ + uVar37;
        uVar41 = (auVar51._8_8_ >> 0x20) * (ulonglong)auVar51._8_4_ + auVar52._8_8_ + uVar41;
        auVar52 = *(undefined1 (*) [16])(lVar8 + 0x20 + uVar25 * 8) ^ auVar46;
        auVar50._0_8_ = auVar46._8_8_;
        auVar50._8_4_ = auVar46._0_4_;
        auVar50._12_4_ = auVar46._4_4_;
        uVar32 = (auVar52._0_8_ >> 0x20) * (ulonglong)auVar52._0_4_ + auVar50._0_8_ + uVar32;
        uVar36 = (auVar52._8_8_ >> 0x20) * (ulonglong)auVar52._8_4_ + auVar50._8_8_ + uVar36;
        auVar52 = *(undefined1 (*) [16])(lVar8 + 0x30 + uVar25 * 8) ^ auVar5;
        auVar45._0_8_ = auVar5._8_8_;
        auVar45._8_4_ = auVar5._0_4_;
        auVar45._12_4_ = auVar5._4_4_;
        uVar26 = (auVar52._0_8_ >> 0x20) * (ulonglong)auVar52._0_4_ + auVar45._0_8_ + uVar26;
        uVar29 = (auVar52._8_8_ >> 0x20) * (ulonglong)auVar52._8_4_ + auVar45._8_8_ + uVar29;
        uVar25 = uVar25 + 1;
        if (uVar25 == uVar24) {
          puVar1 = (ulonglong *)(lVar8 + -0x40 + lVar9);
          puVar2 = (ulonglong *)(lVar8 + -0x30 + lVar9);
          puVar3 = (ulonglong *)(lVar8 + -0x20 + lVar9);
          puVar4 = (ulonglong *)(lVar8 + -0x10 + lVar9);
          uVar25 = *puVar1 ^ uVar42;
          uVar44 = puVar1[1] ^ uVar43;
          uVar42 = ((uVar25 >> 0x20) * (ulonglong)_DAT_14327a310 << 0x20) +
                   ((uVar42 >> 0x2f ^ uVar25) & 0xffffffff) * (ulonglong)_DAT_14327a310;
          uVar43 = ((uVar44 >> 0x20) * (ulonglong)_UNK_14327a318 << 0x20) +
                   ((uVar43 >> 0x2f ^ uVar44) & 0xffffffff) * (ulonglong)_UNK_14327a318;
          uVar25 = *puVar2 ^ uVar37;
          uVar44 = puVar2[1] ^ uVar41;
          uVar37 = ((uVar25 >> 0x20) * (ulonglong)_DAT_14327a310 << 0x20) +
                   ((uVar37 >> 0x2f ^ uVar25) & 0xffffffff) * (ulonglong)_DAT_14327a310;
          uVar41 = ((uVar44 >> 0x20) * (ulonglong)_UNK_14327a318 << 0x20) +
                   ((uVar41 >> 0x2f ^ uVar44) & 0xffffffff) * (ulonglong)_UNK_14327a318;
          uVar25 = *puVar3 ^ uVar32;
          uVar44 = puVar3[1] ^ uVar36;
          uVar32 = ((uVar25 >> 0x20) * (ulonglong)_DAT_14327a310 << 0x20) +
                   ((uVar32 >> 0x2f ^ uVar25) & 0xffffffff) * (ulonglong)_DAT_14327a310;
          uVar36 = ((uVar44 >> 0x20) * (ulonglong)_UNK_14327a318 << 0x20) +
                   ((uVar36 >> 0x2f ^ uVar44) & 0xffffffff) * (ulonglong)_UNK_14327a318;
          uVar25 = *puVar4 ^ uVar26;
          uVar44 = puVar4[1] ^ uVar29;
          uVar26 = ((uVar25 >> 0x20) * (ulonglong)_DAT_14327a310 << 0x20) +
                   ((uVar26 >> 0x2f ^ uVar25) & 0xffffffff) * (ulonglong)_DAT_14327a310;
          uVar29 = ((uVar44 >> 0x20) * (ulonglong)_UNK_14327a318 << 0x20) +
                   ((uVar29 >> 0x2f ^ uVar44) & 0xffffffff) * (ulonglong)_UNK_14327a318;
          uVar25 = 0;
        }
        lVar19 = lVar19 + 0x40;
      } while (lVar19 != 0x100);
      param_1[0x24] = uVar42;
      param_1[0x25] = uVar43;
      param_1[0x26] = uVar37;
      param_1[0x27] = uVar41;
      param_1[0x28] = uVar32;
      param_1[0x29] = uVar36;
      param_1[0x2a] = uVar26;
      param_1[0x2b] = uVar29;
      param_1[0x2c] = uVar25;
      pauVar20 = pauVar23;
      if (0x3f < uVar18) {
        pauVar20 = (undefined1 (*) [16])(pauVar23[-4] + (uVar18 & 0x7fffffffffffffc0));
        lVar19 = (uVar18 & 0x7fffffffffffffc0) - 0x40;
        uVar18 = uVar18 - lVar19;
        if (lVar19 != 0) {
          uVar42 = param_1[0x24];
          uVar43 = param_1[0x25];
          uVar37 = param_1[0x26];
          uVar41 = param_1[0x27];
          uVar32 = param_1[0x28];
          uVar36 = param_1[0x29];
          uVar26 = param_1[0x2a];
          uVar29 = param_1[0x2b];
          do {
            auVar52 = *pauVar23;
            auVar45 = pauVar23[1];
            auVar46 = pauVar23[2];
            auVar5 = pauVar23[3];
            auVar51 = *(undefined1 (*) [16])(lVar8 + uVar25 * 8) ^ auVar52;
            auVar47._0_8_ = auVar52._8_8_;
            auVar47._8_4_ = auVar52._0_4_;
            auVar47._12_4_ = auVar52._4_4_;
            uVar42 = (auVar51._0_8_ >> 0x20) * (ulonglong)auVar51._0_4_ + auVar47._0_8_ + uVar42;
            uVar43 = (auVar51._8_8_ >> 0x20) * (ulonglong)auVar51._8_4_ + auVar47._8_8_ + uVar43;
            auVar52 = *(undefined1 (*) [16])(lVar8 + 0x10 + uVar25 * 8) ^ auVar45;
            auVar48._0_8_ = auVar45._8_8_;
            auVar48._8_4_ = auVar45._0_4_;
            auVar48._12_4_ = auVar45._4_4_;
            uVar37 = (auVar52._0_8_ >> 0x20) * (ulonglong)auVar52._0_4_ + auVar48._0_8_ + uVar37;
            uVar41 = (auVar52._8_8_ >> 0x20) * (ulonglong)auVar52._8_4_ + auVar48._8_8_ + uVar41;
            auVar52 = *(undefined1 (*) [16])(lVar8 + 0x20 + uVar25 * 8) ^ auVar46;
            auVar49._0_8_ = auVar46._8_8_;
            auVar49._8_4_ = auVar46._0_4_;
            auVar49._12_4_ = auVar46._4_4_;
            uVar32 = (auVar52._0_8_ >> 0x20) * (ulonglong)auVar52._0_4_ + auVar49._0_8_ + uVar32;
            uVar36 = (auVar52._8_8_ >> 0x20) * (ulonglong)auVar52._8_4_ + auVar49._8_8_ + uVar36;
            auVar52 = *(undefined1 (*) [16])(lVar8 + 0x30 + uVar25 * 8) ^ auVar5;
            auVar46._0_8_ = auVar5._8_8_;
            auVar46._8_4_ = auVar5._0_4_;
            auVar46._12_4_ = auVar5._4_4_;
            uVar26 = (auVar52._0_8_ >> 0x20) * (ulonglong)auVar52._0_4_ + auVar46._0_8_ + uVar26;
            uVar29 = (auVar52._8_8_ >> 0x20) * (ulonglong)auVar52._8_4_ + auVar46._8_8_ + uVar29;
            uVar25 = uVar25 + 1;
            if (uVar25 == uVar24) {
              puVar1 = (ulonglong *)(lVar8 + -0x40 + lVar9);
              puVar2 = (ulonglong *)(lVar8 + -0x30 + lVar9);
              puVar3 = (ulonglong *)(lVar8 + -0x20 + lVar9);
              puVar4 = (ulonglong *)(lVar8 + -0x10 + lVar9);
              uVar25 = *puVar1 ^ uVar42;
              uVar44 = puVar1[1] ^ uVar43;
              uVar42 = ((uVar25 >> 0x20) * (ulonglong)uVar15 << 0x20) +
                       ((uVar42 >> 0x2f ^ uVar25) & 0xffffffff) * (ulonglong)uVar15;
              uVar43 = ((uVar44 >> 0x20) * (ulonglong)uVar16 << 0x20) +
                       ((uVar43 >> 0x2f ^ uVar44) & 0xffffffff) * (ulonglong)uVar16;
              uVar25 = *puVar2 ^ uVar37;
              uVar44 = puVar2[1] ^ uVar41;
              uVar37 = ((uVar25 >> 0x20) * (ulonglong)uVar15 << 0x20) +
                       ((uVar37 >> 0x2f ^ uVar25) & 0xffffffff) * (ulonglong)uVar15;
              uVar41 = ((uVar44 >> 0x20) * (ulonglong)uVar16 << 0x20) +
                       ((uVar41 >> 0x2f ^ uVar44) & 0xffffffff) * (ulonglong)uVar16;
              uVar25 = *puVar3 ^ uVar32;
              uVar44 = puVar3[1] ^ uVar36;
              uVar32 = ((uVar25 >> 0x20) * (ulonglong)uVar15 << 0x20) +
                       ((uVar32 >> 0x2f ^ uVar25) & 0xffffffff) * (ulonglong)uVar15;
              uVar36 = ((uVar44 >> 0x20) * (ulonglong)uVar16 << 0x20) +
                       ((uVar36 >> 0x2f ^ uVar44) & 0xffffffff) * (ulonglong)uVar16;
              uVar25 = *puVar4 ^ uVar26;
              uVar44 = puVar4[1] ^ uVar29;
              uVar26 = ((uVar25 >> 0x20) * (ulonglong)uVar15 << 0x20) +
                       ((uVar26 >> 0x2f ^ uVar25) & 0xffffffff) * (ulonglong)uVar15;
              uVar29 = ((uVar44 >> 0x20) * (ulonglong)uVar16 << 0x20) +
                       ((uVar29 >> 0x2f ^ uVar44) & 0xffffffff) * (ulonglong)uVar16;
              uVar25 = 0;
            }
            pauVar23 = pauVar23 + 4;
          } while (pauVar23 != pauVar20);
          param_1[0x24] = uVar42;
          param_1[0x25] = uVar43;
          param_1[0x26] = uVar37;
          param_1[0x27] = uVar41;
          param_1[0x28] = uVar32;
          param_1[0x29] = uVar36;
          param_1[0x2a] = uVar26;
          param_1[0x2b] = uVar29;
          param_1[0x2c] = uVar25;
        }
      }
      pub_142e32760(param_1 + 3,pauVar20,uVar18);
      param_1[0x23] = uVar18;
    }
  }
  return;
}

