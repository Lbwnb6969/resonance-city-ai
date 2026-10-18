// VA 0x1417c9b80, PDB extent 1887 bytes
// turbosloth::id::Hash128::finish_128
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::id::Hash128::finish_128
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/id.rs
   Extent: 1887 */

ulonglong pdb_1417c9b80(longlong *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [32];
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  short sVar59;
  ulonglong uVar60;
  longlong lVar61;
  ulonglong uVar62;
  longlong lVar63;
  ulonglong *puVar64;
  undefined1 (*pauVar65) [16];
  undefined1 (*pauVar66) [32];
  undefined1 (*pauVar67) [16];
  undefined1 (*pauVar68) [32];
  ulonglong uVar69;
  uint uVar70;
  ulonglong uVar71;
  ulonglong uVar72;
  longlong lVar73;
  uint uVar74;
  ulonglong uVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [32];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [32];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [32];
  undefined8 unaff_XMM6_Qa;
  ulonglong uVar90;
  undefined8 unaff_XMM6_Qb;
  ulonglong uVar92;
  undefined1 auVar91 [64];
  undefined8 unaff_XMM7_Qa;
  ulonglong uVar93;
  undefined8 unaff_XMM7_Qb;
  ulonglong uVar95;
  undefined1 auVar94 [64];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  longlong lVar98;
  ulonglong uVar99;
  ulonglong uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  auStack_c8._16_8_ = unaff_XMM6_Qa;
  uStack_b0 = unaff_XMM6_Qb;
  uStack_a8 = unaff_XMM7_Qa;
  puStack_a0 = (undefined *)unaff_XMM7_Qb;
  if (*_DAT_143cad8c0 == 0) {
    sVar59 = pdb_142dec140();
  }
  else {
    sVar59 = (short)*_DAT_143cad8c0;
  }
  if (sVar59 < 0) {
    uStack_58 = uStack_a8;
    uStack_50 = (ulonglong)puStack_a0;
    uStack_68 = auStack_c8._16_8_;
    uStack_60 = uStack_b0;
    uVar71 = param_1[0x2d];
    pauVar2 = (undefined1 (*) [32])(param_1 + 3);
    if (0xf0 < uVar71) {
      uVar62 = param_1[0x23];
      auVar94 = ZEXT3264(*(undefined1 (*) [32])(param_1 + 0x24));
      auVar91 = ZEXT3264(*(undefined1 (*) [32])(param_1 + 0x28));
      lVar73 = *param_1;
      lVar63 = param_1[1];
      uVar90 = uVar62 >> 6;
      pauVar68 = (undefined1 (*) [32])(*pauVar2 + ((uint)uVar62 & 0x1c0));
      uVar92 = (ulonglong)((uint)uVar62 & 0x3f);
      if (uVar90 != 0) {
        uVar93 = param_1[0x2c];
        if (uVar92 == 0) {
          uVar90 = uVar90 - 1;
          pauVar68 = pauVar2 + uVar90 * 2;
          uVar92 = 0x40;
          if (uVar90 == 0) goto code_r0x0001417cb8dd;
        }
        auVar79._8_8_ = _UNK_14332ef20;
        auVar79._0_8_ = _UNK_14332ef20;
        auVar79._16_8_ = _UNK_14332ef20;
        auVar79._24_8_ = _UNK_14332ef20;
        pauVar66 = pauVar2;
        do {
          auVar77 = *pauVar66 ^ *(undefined1 (*) [32])(lVar73 + uVar93 * 8);
          auVar76 = vpshufd_avx2(*pauVar66,0x4e);
          auVar86 = vpsrlq_avx2(auVar77,0x20);
          auVar86 = vpmuludq_avx2(auVar77,auVar86);
          auVar83 = pauVar66[1] ^ *(undefined1 (*) [32])(lVar73 + 0x20 + uVar93 * 8);
          auVar77._0_8_ = auVar94._0_8_ + auVar76._0_8_ + auVar86._0_8_;
          auVar77._8_8_ = auVar94._8_8_ + auVar76._8_8_ + auVar86._8_8_;
          auVar77._16_8_ = auVar94._16_8_ + auVar76._16_8_ + auVar86._16_8_;
          auVar77._24_8_ = auVar94._24_8_ + auVar76._24_8_ + auVar86._24_8_;
          auVar78 = vpshufd_avx2(pauVar66[1],0x4e);
          auVar86 = vpsrlq_avx2(auVar83,0x20);
          auVar76 = vpmuludq_avx2(auVar83,auVar86);
          auVar86._0_8_ = auVar91._0_8_ + auVar78._0_8_ + auVar76._0_8_;
          auVar86._8_8_ = auVar91._8_8_ + auVar78._8_8_ + auVar76._8_8_;
          auVar86._16_8_ = auVar91._16_8_ + auVar78._16_8_ + auVar76._16_8_;
          auVar86._24_8_ = auVar91._24_8_ + auVar78._24_8_ + auVar76._24_8_;
          uVar93 = uVar93 + 1;
          if (uVar93 == lVar63 - 0x40U >> 3) {
            auVar76 = vpsrlq_avx2(auVar77,0x2f);
            auVar77 = auVar76 ^ *(undefined1 (*) [32])(lVar73 + -0x40 + lVar63) ^ auVar77;
            auVar76 = vpmuludq_avx2(auVar77,auVar79);
            auVar77 = vpsrlq_avx2(auVar77,0x20);
            auVar77 = vpmuludq_avx2(auVar77,auVar79);
            auVar78 = vpsllq_avx2(auVar77,0x20);
            auVar83 = vpsrlq_avx2(auVar86,0x2f);
            auVar77._0_8_ = auVar76._0_8_ + auVar78._0_8_;
            auVar77._8_8_ = auVar76._8_8_ + auVar78._8_8_;
            auVar77._16_8_ = auVar76._16_8_ + auVar78._16_8_;
            auVar77._24_8_ = auVar76._24_8_ + auVar78._24_8_;
            auVar86 = auVar83 ^ *(undefined1 (*) [32])(lVar73 + -0x20 + lVar63) ^ auVar86;
            auVar76 = vpmuludq_avx2(auVar86,auVar79);
            auVar86 = vpsrlq_avx2(auVar86,0x20);
            auVar86 = vpmuludq_avx2(auVar86,auVar79);
            auVar78 = vpsllq_avx2(auVar86,0x20);
            auVar86._0_8_ = auVar76._0_8_ + auVar78._0_8_;
            auVar86._8_8_ = auVar76._8_8_ + auVar78._8_8_;
            auVar86._16_8_ = auVar76._16_8_ + auVar78._16_8_;
            auVar86._24_8_ = auVar76._24_8_ + auVar78._24_8_;
            uVar93 = 0;
          }
          auVar94 = ZEXT3264(auVar77);
          auVar91 = ZEXT3264(auVar86);
          pauVar66 = pauVar66 + 2;
        } while (pauVar66 != pauVar2 + uVar90 * 2);
      }
code_r0x0001417cb8dd:
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_a8 = 0;
      puStack_a0 = (undefined *)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      if (uVar62 < 0x40) {
        auStack_f8._8_8_ = (longlong)&uStack_68 - uVar62;
        pauVar66 = (undefined1 (*) [32])&uStack_a8;
        _auStack_c8 = auVar91._0_32_;
        auStack_e8 = auVar94._0_32_;
        pub_142e32760(pauVar66,(longlong)param_1 + uVar62 + 0xd8);
        pub_142e32760(auStack_f8._8_8_,pauVar2,uVar62);
        auVar94 = ZEXT3264(auStack_e8);
        auVar91 = ZEXT3264(_auStack_c8);
      }
      else {
        pauVar66 = (undefined1 (*) [32])(pauVar2[-2] + uVar62);
      }
      auVar78 = auVar91._0_32_;
      auVar76 = auVar94._0_32_;
      uVar90 = uVar92 >> 6;
      uVar62 = (ulonglong)((uVar92 & 0x3f) == 0);
      if (((int)uVar90 != 0) && (uVar90 != uVar62)) {
        pauVar68 = pauVar68 + 1;
        lVar61 = 0;
        do {
          auVar79 = pauVar68[-1] ^ *(undefined1 (*) [32])(lVar73 + lVar61 * 8);
          auVar77 = vpshufd_avx2(pauVar68[-1],0x4e);
          auVar86 = vpsrlq_avx2(auVar79,0x20);
          auVar79 = vpmuludq_avx2(auVar79,auVar86);
          auVar86 = *pauVar68 ^ *(undefined1 (*) [32])(lVar73 + 0x20 + lVar61 * 8);
          lVar61 = lVar61 + 1;
          auVar76._0_8_ = auVar94._0_8_ + auVar77._0_8_ + auVar79._0_8_;
          auVar76._8_8_ = auVar94._8_8_ + auVar77._8_8_ + auVar79._8_8_;
          auVar76._16_8_ = auVar94._16_8_ + auVar77._16_8_ + auVar79._16_8_;
          auVar76._24_8_ = auVar94._24_8_ + auVar77._24_8_ + auVar79._24_8_;
          auVar94 = ZEXT3264(auVar76);
          auVar77 = vpshufd_avx2(*pauVar68,0x4e);
          auVar79 = vpsrlq_avx2(auVar86,0x20);
          auVar79 = vpmuludq_avx2(auVar86,auVar79);
          auVar78._0_8_ = auVar91._0_8_ + auVar77._0_8_ + auVar79._0_8_;
          auVar78._8_8_ = auVar91._8_8_ + auVar77._8_8_ + auVar79._8_8_;
          auVar78._16_8_ = auVar91._16_8_ + auVar77._16_8_ + auVar79._16_8_;
          auVar78._24_8_ = auVar91._24_8_ + auVar77._24_8_ + auVar79._24_8_;
          auVar91 = ZEXT3264(auVar78);
          pauVar68 = pauVar68 + 2;
        } while (uVar90 - uVar62 != lVar61);
      }
      auVar79 = *(undefined1 (*) [32])(lVar73 + -0x47 + lVar63) ^ *pauVar66;
      auVar86 = vpshufd_avx2(*pauVar66,0x4e);
      auVar77 = vpsrlq_avx2(auVar79,0x20);
      auVar79 = vpmuludq_avx2(auVar79,auVar77);
      auVar77 = *(undefined1 (*) [32])(lVar73 + -0x27 + lVar63) ^ pauVar66[1];
      auVar83 = vpshufd_avx2(pauVar66[1],0x4e);
      auVar89 = vpsrlq_avx2(auVar77,0x20);
      auVar77 = vpmuludq_avx2(auVar77,auVar89);
      auVar30._8_8_ = 0;
      auVar30._0_8_ = *(ulonglong *)(lVar73 + 0x13) ^ auVar76._8_8_ + auVar86._8_8_ + auVar79._8_8_;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = *(ulonglong *)(lVar73 + 0xb) ^ auVar76._0_8_ + auVar86._0_8_ + auVar79._0_8_;
      auVar31._8_8_ = 0;
      auVar31._0_8_ =
           *(ulonglong *)(lVar73 + 0x23) ^ auVar76._24_8_ + auVar86._24_8_ + auVar79._24_8_;
      auVar56._8_8_ = 0;
      auVar56._0_8_ =
           *(ulonglong *)(lVar73 + 0x1b) ^ auVar76._16_8_ + auVar86._16_8_ + auVar79._16_8_;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = *(ulonglong *)(lVar73 + 0x33) ^ auVar78._8_8_ + auVar83._8_8_ + auVar77._8_8_;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = *(ulonglong *)(lVar73 + 0x2b) ^ auVar78._0_8_ + auVar83._0_8_ + auVar77._0_8_;
      auVar33._8_8_ = 0;
      auVar33._0_8_ =
           *(ulonglong *)(lVar73 + 0x43) ^ auVar78._24_8_ + auVar83._24_8_ + auVar77._24_8_;
      auVar58._8_8_ = 0;
      auVar58._0_8_ =
           *(ulonglong *)(lVar73 + 0x3b) ^ auVar78._16_8_ + auVar83._16_8_ + auVar77._16_8_;
      uVar71 = (SUB168(auVar33 * auVar58,0) ^ SUB168(auVar33 * auVar58,8)) +
               (SUB168(auVar32 * auVar57,0) ^ SUB168(auVar32 * auVar57,8)) +
               (SUB168(auVar31 * auVar56,0) ^ SUB168(auVar31 * auVar56,8)) +
               (SUB168(auVar30 * auVar55,0) ^ SUB168(auVar30 * auVar55,8)) +
               uVar71 * -0x61c8864e7a143579;
      uVar71 = (uVar71 ^ uVar71 >> 0x25) * 0x165667919e3779f9;
      return uVar71 ^ uVar71 >> 0x20;
    }
    uVar62 = param_1[2];
  }
  else {
    uVar71 = param_1[0x2d];
    pauVar1 = (undefined1 (*) [16])(param_1 + 3);
    if (0xf0 < uVar71) {
      uVar62 = param_1[0x23];
      uVar99 = param_1[0x24];
      uVar100 = param_1[0x25];
      auVar96 = *(undefined1 (*) [16])(param_1 + 0x26);
      uVar93 = param_1[0x28];
      uVar95 = param_1[0x29];
      uVar90 = param_1[0x2a];
      uVar92 = param_1[0x2b];
      lVar73 = *param_1;
      lVar63 = param_1[1];
      uVar60 = uVar62 >> 6;
      pauVar67 = (undefined1 (*) [16])(*pauVar1 + ((uint)uVar62 & 0x1c0));
      uVar72 = (ulonglong)((uint)uVar62 & 0x3f);
      if (uVar60 != 0) {
        uVar69 = param_1[0x2c];
        if (uVar72 == 0) {
          uVar60 = uVar60 - 1;
          pauVar67 = pauVar1 + uVar60 * 4;
          uVar72 = 0x40;
          if (uVar60 == 0) goto LAB_1417c9e9b;
        }
        pauVar65 = pauVar1;
        do {
          auVar104 = *pauVar65;
          auVar103 = pauVar65[1];
          auVar97 = pauVar65[2];
          auVar8 = pauVar65[3];
          auVar101 = *(undefined1 (*) [16])(lVar73 + uVar69 * 8) ^ auVar104;
          auVar102._0_8_ = auVar104._8_8_;
          auVar102._8_4_ = auVar104._0_4_;
          auVar102._12_4_ = auVar104._4_4_;
          uVar99 = (auVar101._0_8_ >> 0x20) * (ulonglong)auVar101._0_4_ + auVar102._0_8_ + uVar99;
          uVar100 = (auVar101._8_8_ >> 0x20) * (ulonglong)auVar101._8_4_ + auVar102._8_8_ + uVar100;
          auVar102 = *(undefined1 (*) [16])(lVar73 + 0x10 + uVar69 * 8) ^ auVar103;
          auVar104._0_8_ = auVar103._8_8_;
          auVar104._8_4_ = auVar103._0_4_;
          auVar104._12_4_ = auVar103._4_4_;
          lVar61 = auVar96._8_8_;
          auVar96._0_8_ =
               (auVar102._0_8_ >> 0x20) * (ulonglong)auVar102._0_4_ + auVar104._0_8_ + auVar96._0_8_
          ;
          auVar96._8_8_ =
               (auVar102._8_8_ >> 0x20) * (ulonglong)auVar102._8_4_ + auVar104._8_8_ + lVar61;
          auVar104 = *(undefined1 (*) [16])(lVar73 + 0x20 + uVar69 * 8) ^ auVar97;
          auVar101._0_8_ = auVar97._8_8_;
          auVar101._8_4_ = auVar97._0_4_;
          auVar101._12_4_ = auVar97._4_4_;
          uVar93 = (auVar104._0_8_ >> 0x20) * (ulonglong)auVar104._0_4_ + auVar101._0_8_ + uVar93;
          uVar95 = (auVar104._8_8_ >> 0x20) * (ulonglong)auVar104._8_4_ + auVar101._8_8_ + uVar95;
          auVar104 = *(undefined1 (*) [16])(lVar73 + 0x30 + uVar69 * 8) ^ auVar8;
          auVar103._0_8_ = auVar8._8_8_;
          auVar103._8_4_ = auVar8._0_4_;
          auVar103._12_4_ = auVar8._4_4_;
          uVar90 = (auVar104._0_8_ >> 0x20) * (ulonglong)auVar104._0_4_ + auVar103._0_8_ + uVar90;
          uVar92 = (auVar104._8_8_ >> 0x20) * (ulonglong)auVar104._8_4_ + auVar103._8_8_ + uVar92;
          uVar69 = uVar69 + 1;
          if (uVar69 == lVar63 - 0x40U >> 3) {
            puVar64 = (ulonglong *)(lVar73 + -0x40 + lVar63);
            puVar6 = (ulonglong *)(lVar73 + -0x20 + lVar63);
            puVar7 = (ulonglong *)(lVar73 + -0x10 + lVar63);
            uVar69 = *puVar64 ^ uVar99;
            uVar80 = puVar64[1] ^ uVar100;
            uVar70 = (uint)DAT_14327a310;
            uVar74 = DAT_14327a310._8_4_;
            uVar99 = ((uVar69 >> 0x20) * (ulonglong)uVar70 << 0x20) +
                     ((uVar99 >> 0x2f ^ uVar69) & 0xffffffff) * (ulonglong)uVar70;
            uVar100 = ((uVar80 >> 0x20) * (ulonglong)uVar74 << 0x20) +
                      ((uVar100 >> 0x2f ^ uVar80) & 0xffffffff) * (ulonglong)uVar74;
            auVar97._0_8_ = auVar96._0_8_ >> 0x2f;
            auVar97._8_8_ = auVar96._8_8_ >> 0x2f;
            auVar97 = auVar97 ^ *(undefined1 (*) [16])(lVar73 + -0x30 + lVar63) ^ auVar96;
            auVar96._0_8_ =
                 ((auVar97._0_8_ >> 0x20) * (ulonglong)uVar70 << 0x20) +
                 (ulonglong)auVar97._0_4_ * (ulonglong)uVar70;
            auVar96._8_8_ =
                 ((auVar97._8_8_ >> 0x20) * (ulonglong)uVar74 << 0x20) +
                 (ulonglong)auVar97._8_4_ * (ulonglong)uVar74;
            uVar69 = *puVar6 ^ uVar93;
            uVar80 = puVar6[1] ^ uVar95;
            uVar93 = ((uVar69 >> 0x20) * (ulonglong)uVar70 << 0x20) +
                     ((uVar93 >> 0x2f ^ uVar69) & 0xffffffff) * (ulonglong)uVar70;
            uVar95 = ((uVar80 >> 0x20) * (ulonglong)uVar74 << 0x20) +
                     ((uVar95 >> 0x2f ^ uVar80) & 0xffffffff) * (ulonglong)uVar74;
            uVar69 = *puVar7 ^ uVar90;
            uVar80 = puVar7[1] ^ uVar92;
            uVar90 = ((uVar69 >> 0x20) * (ulonglong)uVar70 << 0x20) +
                     ((uVar90 >> 0x2f ^ uVar69) & 0xffffffff) * (ulonglong)uVar70;
            uVar92 = ((uVar80 >> 0x20) * (ulonglong)uVar74 << 0x20) +
                     ((uVar92 >> 0x2f ^ uVar80) & 0xffffffff) * (ulonglong)uVar74;
            uVar69 = 0;
          }
          pauVar65 = pauVar65 + 4;
        } while (pauVar65 != pauVar1 + uVar60 * 4);
      }
LAB_1417c9e9b:
      _auStack_c8 = ZEXT1632(stack0xffffffffffffff48) << 0x80;
      auStack_e8 = ZEXT1632((undefined1  [16])0x0);
      auStack_f8 = (undefined1  [16])0x0;
      if (uVar62 < 0x40) {
        pauVar65 = &auStack_f8;
        pub_142e32760(pauVar65,(longlong)param_1 + uVar62 + 0xd8);
        pub_142e32760(auStack_c8 + (0x10 - uVar62),pauVar1,uVar62);
      }
      else {
        pauVar65 = (undefined1 (*) [16])(pauVar1[-4] + uVar62);
      }
      uVar60 = uVar72 >> 6;
      uVar62 = (ulonglong)((uVar72 & 0x3f) == 0);
      if (((int)uVar60 != 0) && (uVar60 != uVar62)) {
        pauVar67 = pauVar67 + 3;
        lVar61 = 0;
        do {
          lVar98 = lVar61 * 8;
          lVar3 = lVar61 * 8;
          lVar4 = lVar61 * 8;
          lVar5 = lVar61 * 8;
          lVar61 = lVar61 + 1;
          auVar104 = pauVar67[-3];
          auVar103 = pauVar67[-2];
          auVar97 = pauVar67[-1];
          auVar8 = *pauVar67;
          auVar102 = *(undefined1 (*) [16])(lVar73 + lVar98) ^ auVar104;
          auVar87._0_8_ = auVar104._8_8_;
          auVar87._8_4_ = auVar104._0_4_;
          auVar87._12_4_ = auVar104._4_4_;
          uVar99 = (auVar102._0_8_ >> 0x20) * (ulonglong)auVar102._0_4_ + auVar87._0_8_ + uVar99;
          uVar100 = (auVar102._8_8_ >> 0x20) * (ulonglong)auVar102._8_4_ + auVar87._8_8_ + uVar100;
          auVar104 = *(undefined1 (*) [16])(lVar73 + 0x10 + lVar3) ^ auVar103;
          auVar81._0_8_ = auVar103._8_8_;
          auVar81._8_4_ = auVar103._0_4_;
          auVar81._12_4_ = auVar103._4_4_;
          lVar98 = auVar96._8_8_;
          auVar96._0_8_ =
               (auVar104._0_8_ >> 0x20) * (ulonglong)auVar104._0_4_ + auVar81._0_8_ + auVar96._0_8_;
          auVar96._8_8_ =
               (auVar104._8_8_ >> 0x20) * (ulonglong)auVar104._8_4_ + auVar81._8_8_ + lVar98;
          auVar104 = *(undefined1 (*) [16])(lVar73 + 0x20 + lVar4) ^ auVar97;
          auVar82._0_8_ = auVar97._8_8_;
          auVar82._8_4_ = auVar97._0_4_;
          auVar82._12_4_ = auVar97._4_4_;
          uVar93 = (auVar104._0_8_ >> 0x20) * (ulonglong)auVar104._0_4_ + auVar82._0_8_ + uVar93;
          uVar95 = (auVar104._8_8_ >> 0x20) * (ulonglong)auVar104._8_4_ + auVar82._8_8_ + uVar95;
          auVar104 = *(undefined1 (*) [16])(lVar73 + 0x30 + lVar5) ^ auVar8;
          auVar75._0_8_ = auVar8._8_8_;
          auVar75._8_4_ = auVar8._0_4_;
          auVar75._12_4_ = auVar8._4_4_;
          uVar90 = (auVar104._0_8_ >> 0x20) * (ulonglong)auVar104._0_4_ + auVar75._0_8_ + uVar90;
          uVar92 = (auVar104._8_8_ >> 0x20) * (ulonglong)auVar104._8_4_ + auVar75._8_8_ + uVar92;
          pauVar67 = pauVar67 + 4;
        } while (uVar60 - uVar62 != lVar61);
      }
      auVar104 = *pauVar65;
      auVar103 = pauVar65[1];
      auVar97 = pauVar65[2];
      auVar8 = pauVar65[3];
      auVar102 = *(undefined1 (*) [16])(lVar73 + -0x47 + lVar63) ^ auVar104;
      auVar105._0_8_ = auVar104._8_8_;
      auVar105._8_4_ = auVar104._0_4_;
      auVar105._12_4_ = auVar104._4_4_;
      auVar101 = *(undefined1 (*) [16])(lVar73 + -0x37 + lVar63) ^ auVar103;
      auVar88._0_8_ = auVar103._8_8_;
      auVar88._8_4_ = auVar103._0_4_;
      auVar88._12_4_ = auVar103._4_4_;
      auVar103 = *(undefined1 (*) [16])(lVar73 + -0x27 + lVar63) ^ auVar97;
      auVar84._0_8_ = auVar97._8_8_;
      auVar84._8_4_ = auVar97._0_4_;
      auVar84._12_4_ = auVar97._4_4_;
      auVar104 = *(undefined1 (*) [16])(lVar73 + -0x17 + lVar63) ^ auVar8;
      auVar85._0_8_ = auVar8._8_8_;
      auVar85._8_4_ = auVar8._0_4_;
      auVar85._12_4_ = auVar8._4_4_;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(lVar73 + 0x13) ^
                     (auVar102._8_8_ >> 0x20) * (ulonglong)auVar102._8_4_ + auVar105._8_8_ + uVar100
      ;
      auVar34._8_8_ = 0;
      auVar34._0_8_ =
           *(ulonglong *)(lVar73 + 0xb) ^
           (auVar102._0_8_ >> 0x20) * (ulonglong)auVar102._0_4_ + auVar105._0_8_ + uVar99;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)(lVar73 + 0x23) ^
                     (auVar101._8_8_ >> 0x20) * (ulonglong)auVar101._8_4_ + auVar88._8_8_ +
                     auVar96._8_8_;
      auVar35._8_8_ = 0;
      auVar35._0_8_ =
           *(ulonglong *)(lVar73 + 0x1b) ^
           (auVar101._0_8_ >> 0x20) * (ulonglong)auVar101._0_4_ + auVar88._0_8_ + auVar96._0_8_;
      auVar10._8_8_ = 0;
      auVar10._0_8_ =
           *(ulonglong *)(lVar73 + 0x33) ^
           (auVar103._8_8_ >> 0x20) * (ulonglong)auVar103._8_4_ + auVar84._8_8_ + uVar95;
      auVar36._8_8_ = 0;
      auVar36._0_8_ =
           *(ulonglong *)(lVar73 + 0x2b) ^
           (auVar103._0_8_ >> 0x20) * (ulonglong)auVar103._0_4_ + auVar84._0_8_ + uVar93;
      auVar11._8_8_ = 0;
      auVar11._0_8_ =
           *(ulonglong *)(lVar73 + 0x43) ^
           (auVar104._8_8_ >> 0x20) * (ulonglong)auVar104._8_4_ + auVar85._8_8_ + uVar92;
      auVar37._8_8_ = 0;
      auVar37._0_8_ =
           *(ulonglong *)(lVar73 + 0x3b) ^
           (auVar104._0_8_ >> 0x20) * (ulonglong)auVar104._0_4_ + auVar85._0_8_ + uVar90;
      uVar71 = (SUB168(auVar11 * auVar37,0) ^ SUB168(auVar11 * auVar37,8)) +
               (SUB168(auVar10 * auVar36,0) ^ SUB168(auVar10 * auVar36,8)) +
               (SUB168(auVar9 * auVar35,0) ^ SUB168(auVar9 * auVar35,8)) +
               (SUB168(auVar8 * auVar34,0) ^ SUB168(auVar8 * auVar34,8)) +
               uVar71 * -0x61c8864e7a143579;
      uVar71 = (uVar71 ^ uVar71 >> 0x25) * 0x165667919e3779f9;
      return uVar71 ^ uVar71 >> 0x20;
    }
    uVar62 = param_1[2];
  }
  puVar64 = (ulonglong *)(param_1 + 3);
  uVar70 = (uint)uVar71;
  if (uVar71 < 0x81) {
    if (uVar71 < 0x11) {
      if (8 < uVar71) {
        uVar90 = *(ulonglong *)((longlong)param_1 + uVar71 + 0x10);
        uVar92 = uVar62 + 0xc202797692d63d58 ^ uVar90;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = 0x59973f0033362349 - uVar62 ^ *puVar64 ^ uVar90;
        uVar62 = (uVar92 & 0xffffffff00000000) + SUB168(auVar20 * ZEXT816(0x9e3779b185ebca87),8) +
                 (uVar92 & 0xffffffff) * 0x85ebca77;
        uVar71 = (SUB168(auVar20 * ZEXT816(0x9e3779b185ebca87),0) +
                  (uVar71 << 0x36) + -0x40000000000000 ^
                 (uVar62 >> 0x38 | (uVar62 & 0xff000000000000) >> 0x28 |
                  (uVar62 & 0xff0000000000) >> 0x18 | (uVar62 & 0xff00000000) >> 8 |
                  (uVar62 & 0xff000000) << 8 | (uVar62 & 0xff0000) << 0x18 |
                  (uVar62 & 0xff00) << 0x28 | uVar62 << 0x38)) * -0x3d4d51c2d82b14b1;
        uVar71 = (uVar71 >> 0x25 ^ uVar71) * 0x165667919e3779f9;
        return uVar71 >> 0x20 ^ uVar71;
      }
      if (uVar71 < 4) {
        if (uVar71 == 0) {
          uVar71 = ((uVar62 ^ 0x682e908a3037f8b4) >> 0x21 ^ uVar62 ^ 0x682e908a3037f8b4) *
                   -0x3d4d51c2d82b14b1;
          uVar71 = (uVar71 >> 0x1d ^ uVar71) * 0x165667b19e3779f9;
          return uVar71 >> 0x20 ^ uVar71;
        }
        uVar71 = (uVar62 + 0x87275a9b >> 0x21 ^ uVar62 + 0x87275a9b ^
                 (ulonglong)
                 ((uint)*(byte *)((longlong)puVar64 + (uVar71 >> 1)) << 0x18 |
                 (uint)(byte)*puVar64 << 0x10 |
                 (uint)*(byte *)((longlong)param_1 + uVar71 + 0x17) | uVar70 << 8)) *
                 -0x3d4d51c2d82b14b1;
        uVar71 = (uVar71 >> 0x1d ^ uVar71) * 0x165667b19e3779f9;
        return uVar71 >> 0x20 ^ uVar71;
      }
      uVar70 = (uint)uVar62;
      auVar23._8_8_ = 0;
      auVar23._0_8_ =
           ((ulonglong)
            (uVar70 >> 0x18 | (uVar70 & 0xff0000) >> 8 | (uVar70 & 0xff00) << 8 | uVar70 << 0x18) <<
            0x20 ^ uVar62) + 0xc4f023344dc994ac ^
           CONCAT44(*(undefined4 *)((longlong)param_1 + uVar71 + 0x14),(int)*puVar64);
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar71 * 4 + 0x9e3779b185ebca87;
      uVar71 = SUB168(auVar23 * auVar48,0);
      uVar71 = SUB168(auVar23 * auVar48,8) + uVar71 * 2 >> 3 ^ uVar71;
      uVar71 = (uVar71 >> 0x23 ^ uVar71) * -0x604de39ae16720db;
      return uVar71 >> 0x1c ^ uVar71;
    }
    uVar92 = uVar71 * -0x61c8864e7a143579;
    uVar90 = uVar71 >> 4;
    uVar70 = uVar70 & 0xf;
    if (uVar71 < 0x21) {
      uVar71 = 0;
    }
    else {
      if (uVar71 < 0x41) {
        uVar71 = 0;
      }
      else {
        if (uVar71 < 0x61) {
          uVar71 = 0;
        }
        else {
          uVar71 = *(ulonglong *)((longlong)puVar64 + uVar90 * 0x10 + ((ulonglong)uVar70 - 0x40));
          uVar93 = *(ulonglong *)((longlong)puVar64 + uVar90 * 0x10 + ((ulonglong)uVar70 - 0x38));
          auVar18._8_8_ = 0;
          auVar18._0_8_ = 0x1d4f0bc7c7bbdcf9 - uVar62 ^ param_1[10];
          auVar44._8_8_ = 0;
          auVar44._0_8_ = uVar62 + 0x3f349ce33f76faa8 ^ param_1[9];
          auVar19._8_8_ = 0;
          auVar19._0_8_ = 0x647378d9c97e9fc8 - uVar62 ^ uVar93;
          auVar45._8_8_ = 0;
          auVar45._0_8_ = uVar62 + 0x3159b4cd4be0518a ^ uVar71;
          uVar92 = uVar92 + (SUB168(auVar18 * auVar44,8) ^ SUB168(auVar18 * auVar44,0)) ^
                   uVar93 + uVar71;
          uVar71 = param_1[10] + param_1[9] ^ SUB168(auVar19 * auVar45,8) ^
                   SUB168(auVar19 * auVar45,0);
        }
        auVar24._8_8_ = 0;
        auVar24._0_8_ = 0xa32e531b8b65d088 - uVar62 ^ param_1[8];
        auVar49._8_8_ = 0;
        auVar49._0_8_ = uVar62 + 0xcb00c391bb52283c ^ param_1[7];
        uVar93 = *(ulonglong *)((longlong)puVar64 + uVar90 * 0x10 + ((ulonglong)uVar70 - 0x30));
        uVar95 = *(ulonglong *)((longlong)puVar64 + uVar90 * 0x10 + ((ulonglong)uVar70 - 0x28));
        auVar25._8_8_ = 0;
        auVar25._0_8_ = 0xd8acdea946ef1938 - uVar62 ^ uVar95;
        auVar50._8_8_ = 0;
        auVar50._0_8_ = uVar62 + 0x4ef90da297486471 ^ uVar93;
        uVar92 = uVar95 + uVar93 ^
                 (SUB168(auVar24 * auVar49,8) ^ SUB168(auVar24 * auVar49,0)) + uVar92;
        uVar71 = param_1[8] + param_1[7] ^
                 (SUB168(auVar25 * auVar50,8) ^ SUB168(auVar25 * auVar50,0)) + uVar71;
      }
      auVar26._8_8_ = 0;
      auVar26._0_8_ = 0x2172ffcc7dd05a82 - uVar62 ^ param_1[6];
      auVar51._8_8_ = 0;
      auVar51._0_8_ = uVar62 + 0x78e5c0cc4ee679cb ^ param_1[5];
      uVar93 = *(ulonglong *)((longlong)puVar64 + uVar90 * 0x10 + ((ulonglong)uVar70 - 0x20));
      uVar95 = *(ulonglong *)((longlong)puVar64 + uVar90 * 0x10 + ((ulonglong)uVar70 - 0x18));
      auVar27._8_8_ = 0;
      auVar27._0_8_ = 0x4c263a81e69035e0 - uVar62 ^ uVar95;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = uVar62 + 0x8e2443f7744608b8 ^ uVar93;
      uVar92 = uVar95 + uVar93 ^
               (SUB168(auVar26 * auVar51,8) ^ SUB168(auVar26 * auVar51,0)) + uVar92;
      uVar71 = param_1[6] + param_1[5] ^
               (SUB168(auVar27 * auVar52,8) ^ SUB168(auVar27 * auVar52,0)) + uVar71;
    }
    uVar93 = *(ulonglong *)((longlong)puVar64 + uVar90 * 0x10 + ((ulonglong)uVar70 - 0x10));
    uVar90 = *(ulonglong *)((longlong)puVar64 + uVar90 * 0x10 + ((ulonglong)uVar70 - 8));
    auVar28._8_8_ = 0;
    auVar28._0_8_ = 0x1cad21f72c81017c - uVar62 ^ param_1[4];
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar62 + 0xbe4ba423396cfeb8 ^ *puVar64;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = 0x1f67b3b7a4a44072 - uVar62 ^ uVar90;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar62 + 0xdb979083e96dd4de ^ uVar93;
    uVar71 = (param_1[4] + *puVar64 ^
             (SUB168(auVar29 * auVar54,8) ^ SUB168(auVar29 * auVar54,0)) + uVar71) +
             (uVar90 + uVar93 ^ (SUB168(auVar28 * auVar53,8) ^ SUB168(auVar28 * auVar53,0)) + uVar92
             );
  }
  else {
    uStack_50 = uVar71 >> 4;
    uStack_58 = uVar71 >> 5;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = 0x1cad21f72c81017c - uVar62 ^ param_1[4];
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar62 + 0xbe4ba423396cfeb8 ^ *puVar64;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = 0x1f67b3b7a4a44072 - uVar62 ^ param_1[6];
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar62 + 0xdb979083e96dd4de ^ param_1[5];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = 0x2172ffcc7dd05a82 - uVar62 ^ param_1[8];
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar62 + 0x78e5c0cc4ee679cb ^ param_1[7];
    auVar15._8_8_ = 0;
    auVar15._0_8_ = 0x4c263a81e69035e0 - uVar62 ^ param_1[10];
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar62 + 0x8e2443f7744608b8 ^ param_1[9];
    uStack_68 = param_1[10] + param_1[9] ^
                (SUB168(auVar14 * auVar40,8) ^ SUB168(auVar14 * auVar40,0)) +
                (param_1[6] + param_1[5] ^
                (SUB168(auVar12 * auVar38,8) ^ SUB168(auVar12 * auVar38,0)) +
                uVar71 * -0x61c8864e7a143579);
    uStack_60 = param_1[8] + param_1[7] ^
                (SUB168(auVar15 * auVar41,8) ^ SUB168(auVar15 * auVar41,0)) +
                (param_1[4] + *puVar64 ^ SUB168(auVar13 * auVar39,8) ^ SUB168(auVar13 * auVar39,0));
    puStack_a0 = &UNK_1417ca9ff;
    uStack_78 = uVar62;
    pdb_1417cb120(&uStack_68,param_1 + 0xb,param_1 + 0xd,&UNK_143337bd0);
    puStack_a0 = &UNK_1417caa1a;
    uStack_78 = uVar62;
    pdb_1417cb120(&uStack_68,param_1 + 0xf,param_1 + 0x11,&UNK_143337bf0);
    uVar92 = (uStack_68 >> 0x25 ^ uStack_68) * 0x165667919e3779f9;
    uVar92 = uVar92 >> 0x20 ^ uVar92;
    uVar90 = (uStack_60 >> 0x25 ^ uStack_60) * 0x165667919e3779f9;
    uVar90 = uVar90 >> 0x20 ^ uVar90;
    uVar71 = uVar71 - 0x80 >> 5;
    if (uVar71 != 0) {
      lVar73 = 0;
      do {
        uVar93 = *(ulonglong *)((longlong)param_1 + lVar73 + 0x98);
        uVar95 = *(ulonglong *)((longlong)param_1 + lVar73 + 0xa0);
        uVar99 = *(ulonglong *)((longlong)param_1 + lVar73 + 0xa8);
        uVar100 = *(ulonglong *)((longlong)param_1 + lVar73 + 0xb0);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(longlong *)(&UNK_143337b9b + lVar73) - uVar62 ^ uVar95;
        auVar42._8_8_ = 0;
        auVar42._0_8_ = *(longlong *)(&UNK_143337b93 + lVar73) + uVar62 ^ uVar93;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *(longlong *)(&UNK_143337bab + lVar73) - uVar62 ^ uVar100;
        auVar43._8_8_ = 0;
        auVar43._0_8_ = *(longlong *)(&UNK_143337ba3 + lVar73) + uVar62 ^ uVar99;
        uVar92 = uVar100 + uVar99 ^
                 (SUB168(auVar16 * auVar42,8) ^ SUB168(auVar16 * auVar42,0)) + uVar92;
        uVar90 = uVar95 + uVar93 ^
                 (SUB168(auVar17 * auVar43,8) ^ SUB168(auVar17 * auVar43,0)) + uVar90;
        lVar73 = lVar73 + 0x20;
        uVar71 = uVar71 - 1;
      } while (uVar71 != 0);
    }
    lVar73 = (ulonglong)(((uint)uStack_50 & 1) << 4) + (ulonglong)(uVar70 & 0xf);
    lVar63 = uStack_58 * 0x20;
    uVar71 = *(ulonglong *)((longlong)puVar64 + lVar63 + -0x10 + lVar73);
    uVar93 = *(ulonglong *)((longlong)puVar64 + lVar63 + -8 + lVar73);
    uVar95 = *(ulonglong *)((longlong)puVar64 + lVar63 + -0x20 + lVar73);
    uVar99 = *(ulonglong *)((longlong)puVar64 + lVar63 + -0x18 + lVar73);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar62 + 0x59b4cd4be0518a1d ^ uVar93;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = 0x4f0bc7c7bbdcf93f - uVar62 ^ uVar71;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar62 + 0xebd33483acc5ea64 ^ uVar99;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = 0x7378d9c97e9fc831 - uVar62 ^ uVar95;
    uVar71 = (uVar93 + uVar71 ^ (SUB168(auVar22 * auVar47,8) ^ SUB168(auVar22 * auVar47,0)) + uVar90
             ) + (uVar99 + uVar95 ^
                 (SUB168(auVar21 * auVar46,8) ^ SUB168(auVar21 * auVar46,0)) + uVar92);
  }
  uVar71 = (uVar71 >> 0x25 ^ uVar71) * 0x165667919e3779f9;
  return uVar71 >> 0x20 ^ uVar71;
}

