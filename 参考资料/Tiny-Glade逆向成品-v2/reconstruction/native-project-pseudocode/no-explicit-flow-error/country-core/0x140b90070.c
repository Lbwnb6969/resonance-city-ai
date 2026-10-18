// VA 0x140b90070, PDB extent 2890 bytes
// country_core::render::vao::encode_vertex_data
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::vao::encode_vertex_data
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
   Extent: 2890 */

void pdb_140b90070(undefined8 *param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  ulonglong arg0;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined1 (**ppauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined8 *puVar25;
  ulonglong uVar26;
  char cVar27;
  ushort uVar28;
  int iVar29;
  undefined1 (*pauVar30) [16];
  byte *pbVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  longlong lVar36;
  longlong lVar37;
  uint uVar38;
  undefined1 (*pauVar39) [16];
  undefined8 uVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined1 (*pauStack_288) [16];
  ulonglong uStack_280;
  byte *pbStack_278;
  ulonglong uStack_270;
  undefined8 uStack_268;
  undefined1 (*pauStack_260) [16];
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  ulonglong uStack_248;
  undefined1 (*pauStack_240) [16];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  undefined1 (*pauStack_1d0) [16];
  undefined8 *puStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined1 (*pauStack_1b8) [16];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  ulonglong uStack_170;
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 (**ppauStack_140) [16];
  undefined1 (**ppauStack_138) [16];
  undefined8 uStack_130;
  undefined1 (*pauStack_128) [16];
  undefined1 (*pauStack_120) [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (**ppauStack_d8) [16];
  undefined1 (**ppauStack_d0) [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 uStack_b0;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 uStack_91;
  ulonglong uStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  puVar2 = (undefined8 *)&uStack_238;
  uStack_80 = 0xfffffffffffffffe;
  uStack_1e0 = param_5;
  if (*(longlong *)(param_2 + 0x50) == 0) {
    uStack_248 = 0;
  }
  else {
    pauVar34 = *(undefined1 (**) [16])(param_2 + 0x38);
    auVar43 = *pauVar34;
    uVar28 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
    pauVar30 = pauVar34;
    while (uVar38 = uVar28 ^ 0xffff, uVar38 == 0) {
      pauVar30 = pauVar30 + 1;
      auVar43 = *pauVar30;
      pauVar34 = pauVar34 + -0x38;
      uVar28 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
    }
    uVar6 = 0;
    for (; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uStack_248 = *(ulonglong *)((longlong)pauVar34 + (ulonglong)uVar6 * -0x38 + -8);
  }
  pauStack_160 = *(undefined1 (**) [16])(param_3 + 8);
  pauStack_168 = pauStack_160 + *(longlong *)(param_3 + 0x10) * 2;
  uStack_1e8 = param_4;
  pauStack_128 = pauStack_160;
  pauStack_120 = pauStack_168;
  uStack_118 = (undefined1 (*) [16])&uStack_248;
  uStack_110 = param_2;
  uStack_90 = param_2;
  pdb_140af36f0(&iStack_1c0,&pauStack_128);
  if ((iStack_1c0 != 0xc) && (!SBORROW8(0,*(longlong *)(uStack_90 + 0x18)))) {
    uVar3 = *(undefined8 *)(uStack_90 + 0x20);
    uVar33 = *(ulonglong *)(uStack_90 + 0x28);
    uStack_81 = 1;
    uStack_82 = 1;
    cVar27 = pdb_140d8af50(uVar3,uVar33);
    if (cVar27 != '\0') {
      pauStack_208 = pauStack_180;
      pauStack_200 = pauStack_178;
      uStack_248 = CONCAT44(uStack_1bc,iStack_1c0);
      uStack_218 = uStack_190;
      uStack_214 = uStack_18c;
      uStack_210 = uStack_188;
      uStack_20c = uStack_184;
      uStack_228 = uStack_1a0;
      uStack_224 = uStack_19c;
      uStack_220 = uStack_198;
      uStack_21c = uStack_194;
      uStack_238 = uStack_1b0;
      uStack_234 = uStack_1ac;
      uStack_230 = uStack_1a8;
      uStack_22c = uStack_1a4;
      pauStack_240 = pauStack_1b8;
      puStack_1c8 = param_1;
      if (1 < *_DAT_143ca8e90) {
        pauStack_158 = (undefined1 (*) [16])(uStack_90 + 0x68);
        pauStack_150 = (undefined1 (*) [16])pdb_1402ed420;
        ppauStack_140 = (undefined1 (**) [16])pdb_140b966f0;
        pauStack_128 = (undefined1 (*) [16])0x0;
        pauStack_120 = (undefined1 (*) [16])&UNK_14305e47b;
        uStack_118 = (undefined1 (*) [16])0x19;
        uStack_110 = 0;
        uStack_108 = &UNK_14305e3f4;
        uStack_100 = 0x25;
        uStack_f8 = 2;
        uStack_f0 = (undefined1 (*) [16])&UNK_14305e47b;
        pauStack_e8 = (undefined1 (*) [16])0x19;
        pauStack_e0 = (undefined1 (*) [16])0x6600000001;
        ppauStack_d8 = (undefined1 (**) [16])&UNK_14305e438;
        ppauStack_d0 = &pauStack_158;
        pauStack_148 = (undefined1 (*) [16])&uStack_248;
        pdb_140f332f0(&uStack_91,&pauStack_128);
      }
      uVar26 = uStack_90;
      ppauVar23 = *(undefined1 (***) [16])(uStack_90 + 0x58);
      uVar40 = *(undefined8 *)(uStack_90 + 0x60);
      pdb_140ca3e60(&pauStack_158,uStack_90 + 0x38);
      pauVar34 = *(undefined1 (**) [16])(uVar26 + 0x10);
      arg0 = (longlong)pauVar34 * 4;
      ppauStack_138 = ppauVar23;
      uStack_130 = uVar40;
      if (0x7ffffffffffffffc < arg0 || (ulonglong)pauVar34 >> 0x3e != 0) {
        uVar40 = 0;
LAB_140b90337:
        pdb_142dc7e2a(uVar40,arg0);
        goto LAB_140b9098e;
      }
      uVar4 = *(undefined8 *)(uVar26 + 8);
      if (arg0 == 0) {
        pauVar30 = (undefined1 (*) [16])0x4;
        pauVar24 = (undefined1 (*) [16])0x0;
      }
      else {
        pdb_14007ee60();
        uVar40 = 4;
        pauVar30 = (undefined1 (*) [16])pub_1406abab0(arg0,4);
        pauVar24 = pauVar34;
        if (pauVar30 == (undefined1 (*) [16])0x0) goto LAB_140b90337;
      }
      if (pauVar34 != (undefined1 (*) [16])0x0) {
        pub_142e32760(pauVar30,uVar4,arg0);
      }
      if ((longlong)uVar33 < 0) {
        uVar40 = 0;
LAB_140b90414:
        pauStack_a8 = pauVar24;
        pauStack_a0 = pauVar30;
        pdb_142dc7e2a(uVar40,uVar33);
        goto LAB_140b9098e;
      }
      if (uVar33 == 0) {
        pbVar31 = (byte *)0x1;
      }
      else {
        pdb_14007ee60();
        uVar40 = 1;
        pbVar31 = pub_1406abab0(uVar33,1);
        if (pbVar31 == (byte *)0x0) goto LAB_140b90414;
        pub_142e32760(pbVar31,uVar3,uVar33);
      }
      uStack_f8 = CONCAT71(uStack_f8._1_7_,*(undefined1 *)(uStack_90 + 0x30));
      auStack_c0 = *(undefined1 (*) [16])(uStack_90 + 0x68);
      uStack_b0 = *(undefined1 *)(uStack_90 + 0x78);
      uStack_f0 = pauStack_158;
      pauStack_e8 = pauStack_150;
      pauStack_e0 = pauStack_148;
      ppauStack_d8 = ppauStack_140;
      ppauStack_d0 = ppauStack_138;
      uStack_c8 = uStack_130;
      if (ppauStack_140 == (undefined1 (**) [16])0x0) {
        pauVar39 = (undefined1 (*) [16])0x0;
      }
      else {
        auVar43 = *pauStack_158;
        uVar28 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
        pauVar39 = pauStack_158;
        pauVar35 = pauStack_158;
        while (uVar38 = uVar28 ^ 0xffff, uVar38 == 0) {
          pauVar35 = pauVar35 + 1;
          auVar43 = *pauVar35;
          pauVar39 = pauVar39 + -0x38;
          uVar28 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
        }
        uVar6 = 0;
        for (; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        pauVar39 = *(undefined1 (**) [16])((longlong)pauVar39 + (ulonglong)uVar6 * -0x38 + -8);
      }
      uStack_170 = (longlong)pauVar39 * 4;
      pauVar35 = pauStack_160;
      pauStack_128 = pauVar24;
      pauStack_120 = pauVar30;
      uStack_118 = pauVar34;
      uStack_110 = uVar33;
      uStack_108 = pbVar31;
      uStack_100 = uVar33;
      pauStack_a0 = pauVar39;
      while (pauVar35 != pauStack_168) {
        pauStack_1d0 = pauVar35 + 2;
        pauVar34 = *(undefined1 (**) [16])(*pauVar35 + 8);
        pauStack_a8 = (undefined1 (*) [16])((longlong)pauVar34 + *(longlong *)pauVar35[1] * 0x18);
        pauVar35 = pauStack_1d0;
        if (pauVar34 != pauStack_a8) {
          do {
            pauVar30 = pauVar34 + 1;
            uVar3 = *(undefined8 *)*pauVar34;
            lVar37 = *(longlong *)(*pauVar34 + 8);
            lVar32 = lStack_1d8;
            if (ppauStack_d8 != (undefined1 (**) [16])0x0) {
              uVar33 = pdb_1400af950(&ppauStack_d0,uVar3,lVar37);
              pauVar24 = pauStack_e8;
              pauVar34 = uStack_f0;
              bVar41 = (byte)(uVar33 >> 0x39);
              auVar43 = ZEXT216(CONCAT11(bVar41,bVar41));
              auVar43 = pshuflw(auVar43,auVar43,0);
              lVar36 = 0;
              while( true ) {
                uVar33 = uVar33 & (ulonglong)pauVar24;
                pcVar1 = *pauVar34 + uVar33;
                cVar27 = *pcVar1;
                cVar8 = pcVar1[1];
                cVar9 = pcVar1[2];
                cVar10 = pcVar1[3];
                cVar11 = pcVar1[4];
                cVar12 = pcVar1[5];
                cVar13 = pcVar1[6];
                cVar14 = pcVar1[7];
                cVar15 = pcVar1[8];
                cVar16 = pcVar1[9];
                cVar17 = pcVar1[10];
                cVar18 = pcVar1[0xb];
                cVar19 = pcVar1[0xc];
                cVar20 = pcVar1[0xd];
                cVar21 = pcVar1[0xe];
                cVar22 = pcVar1[0xf];
                auVar42[0] = -(cVar27 == auVar43[0]);
                auVar42[1] = -(cVar8 == auVar43[1]);
                auVar42[2] = -(cVar9 == auVar43[2]);
                auVar42[3] = -(cVar10 == auVar43[3]);
                auVar42[4] = -(cVar11 == auVar43[4]);
                auVar42[5] = -(cVar12 == auVar43[5]);
                auVar42[6] = -(cVar13 == auVar43[6]);
                auVar42[7] = -(cVar14 == auVar43[7]);
                auVar42[8] = -(cVar15 == auVar43[0]);
                auVar42[9] = -(cVar16 == auVar43[1]);
                auVar42[10] = -(cVar17 == auVar43[2]);
                auVar42[0xb] = -(cVar18 == auVar43[3]);
                auVar42[0xc] = -(cVar19 == auVar43[4]);
                auVar42[0xd] = -(cVar20 == auVar43[5]);
                auVar42[0xe] = -(cVar21 == auVar43[6]);
                auVar42[0xf] = -(cVar22 == auVar43[7]);
                uVar28 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar42[0xf] >> 7) << 0xf;
                uVar38 = (uint)uVar28;
                lVar32 = lStack_1d8;
                pauVar39 = pauStack_a0;
                while (lStack_1d8 = lVar36, pauStack_a0 = pauVar39, uVar28 != 0) {
                  uVar6 = 0;
                  for (uVar7 = uVar38; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                    uVar6 = uVar6 + 1;
                  }
                  lVar32 = (uVar6 + uVar33 & (ulonglong)pauVar24) * -0x38;
                  if ((lVar37 == *(longlong *)((longlong)pauVar34 + lVar32 + -0x28)) &&
                     (iVar29 = pub_142e32750(uVar3,*(undefined8 *)
                                                    ((longlong)pauVar34 + lVar32 + -0x30),lVar37),
                     pauVar39 = pauStack_a0, iVar29 == 0)) goto joined_r0x000140b90661;
                  uVar28 = (ushort)(uVar38 - 1) & (ushort)uVar38;
                  uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar28);
                  lVar36 = lStack_1d8;
                  lVar32 = lStack_1d8;
                  pauVar39 = pauStack_a0;
                }
                auVar44[0] = -(cVar27 == -1);
                auVar44[1] = -(cVar8 == -1);
                auVar44[2] = -(cVar9 == -1);
                auVar44[3] = -(cVar10 == -1);
                auVar44[4] = -(cVar11 == -1);
                auVar44[5] = -(cVar12 == -1);
                auVar44[6] = -(cVar13 == -1);
                auVar44[7] = -(cVar14 == -1);
                auVar44[8] = -(cVar15 == -1);
                auVar44[9] = -(cVar16 == -1);
                auVar44[10] = -(cVar17 == -1);
                auVar44[0xb] = -(cVar18 == -1);
                auVar44[0xc] = -(cVar19 == -1);
                auVar44[0xd] = -(cVar20 == -1);
                auVar44[0xe] = -(cVar21 == -1);
                auVar44[0xf] = -(cVar22 == -1);
                if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar44 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar44 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar44 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar44 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar44 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar44 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x5f,0) & 1) != 0) || (SUB161(auVar44 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') break;
                uVar33 = uVar33 + lStack_1d8 + 0x10;
                lVar36 = lStack_1d8 + 0x10;
                lStack_1d8 = lVar32;
              }
            }
            lStack_1d8 = lVar32;
            if (pauVar39 == (undefined1 (*) [16])0x0) {
              pauVar34 = (undefined1 (*) [16])0x4;
            }
            else {
              pdb_14007ee60();
              pauVar34 = (undefined1 (*) [16])pub_1406abae0(uStack_170,4);
              if (pauVar34 == (undefined1 (*) [16])0x0) {
                pdb_142dc7e2a(4,uStack_170);
                goto LAB_140b9098e;
              }
            }
            pauStack_158 = pauVar39;
            pauStack_150 = pauVar34;
            pauStack_148 = pauVar39;
            pdb_140c93680(&pauStack_128,uVar3,lVar37,&pauStack_158);
joined_r0x000140b90661:
            pauVar34 = (undefined1 (*) [16])(*pauVar30 + 8);
            pauVar35 = pauStack_1d0;
          } while ((undefined1 (*) [16])(*pauVar30 + 8) != pauStack_a8);
        }
      }
      if (ppauStack_d8 == (undefined1 (**) [16])0x0) {
        auStack_1f0 = (undefined1  [8])0x0;
      }
      else {
        auVar43 = *uStack_f0;
        uVar28 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
        pauVar34 = uStack_f0;
        pauVar30 = uStack_f0;
        while (uVar38 = uVar28 ^ 0xffff, uVar38 == 0) {
          pauVar30 = pauVar30 + 1;
          auVar43 = *pauVar30;
          pauVar34 = pauVar34 + -0x38;
          uVar28 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
        }
        uVar6 = 0;
        for (; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        auStack_1f0 = *(undefined1 (*) [8])((longlong)pauVar34 + (ulonglong)uVar6 * -0x38 + -8);
      }
      pauStack_158 = pauStack_160;
      pauStack_150 = pauStack_168;
      pauStack_148 = (undefined1 (*) [16])auStack_1f0;
      ppauStack_140 = &pauStack_128;
      pdb_140af36f0(&pauStack_298,&pauStack_158);
      pdb_14098a960();
      puVar25 = puStack_1c8;
      pauVar34 = pauStack_240;
      if (uStack_248 == 0xb) {
joined_r0x000140b908a7:
        if (pauVar34 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)*puVar2,(ulonglong)pauVar34,1);
        }
      }
      else {
        lVar37 = 0;
        if (7 < uStack_248) {
          lVar37 = uStack_248 - 8;
        }
        if (lVar37 == 0) {
          if (((uStack_248 < 6) && ((0x32UL >> (uStack_248 & 0x3f) & 1) != 0)) &&
             (pauStack_240 != (undefined1 (*) [16])0x0)) {
            pub_1406abac0((byte *)CONCAT44(uStack_234,uStack_238),(ulonglong)pauStack_240,1);
          }
          puVar2 = (undefined8 *)&uStack_220;
          pauVar34 = (undefined1 (*) [16])CONCAT44(uStack_224,uStack_228);
          goto joined_r0x000140b908a7;
        }
        if (lVar37 != 1) goto joined_r0x000140b908a7;
        uStack_81 = 1;
        uStack_82 = 0;
        pdb_1404b83f0(&pauStack_240);
      }
      if ((int)pauStack_298 == 0xc) {
        puVar25[2] = uStack_280;
        *puVar25 = pauStack_290;
        puVar25[1] = pauStack_288;
        if (iStack_1c0 != 0xc) {
          return;
        }
        pdb_140b95b70(&iStack_1c0);
        return;
      }
      pauStack_e8 = pauStack_258;
      pauStack_e0 = pauStack_250;
      uStack_f8 = uStack_268;
      uStack_f0 = pauStack_260;
      uStack_108 = pbStack_278;
      uStack_100 = uStack_270;
      uStack_118 = pauStack_288;
      uStack_110 = uStack_280;
      pauStack_128 = pauStack_298;
      pauStack_120 = pauStack_290;
      uStack_81 = 1;
      uStack_82 = 0;
      pdb_142d902b0(uStack_90,&uStack_1e8,&pauStack_128);
      goto LAB_140b9098e;
    }
  }
  pauStack_290 = pauStack_1b8;
  pauStack_258 = pauStack_180;
  pauStack_250 = pauStack_178;
  if (CONCAT44(uStack_1bc,iStack_1c0) == 0xc) {
    param_1[2] = CONCAT44(uStack_1a4,uStack_1a8);
    *param_1 = pauStack_1b8;
    param_1[1] = CONCAT44(uStack_1ac,uStack_1b0);
    return;
  }
  pauStack_e8 = pauStack_180;
  pauStack_e0 = pauStack_178;
  pauStack_128 = (undefined1 (*) [16])CONCAT44(uStack_1bc,iStack_1c0);
  uStack_f8 = CONCAT44(uStack_18c,uStack_190);
  uStack_f0 = (undefined1 (*) [16])CONCAT44(uStack_184,uStack_188);
  uStack_108 = (byte *)CONCAT44(uStack_19c,uStack_1a0);
  uStack_100 = CONCAT44(uStack_194,uStack_198);
  uStack_118 = (undefined1 (*) [16])CONCAT44(uStack_1ac,uStack_1b0);
  uStack_110 = CONCAT44(uStack_1a4,uStack_1a8);
  pauStack_120 = pauStack_1b8;
  uStack_81 = 0;
  uStack_82 = 0;
  pdb_142d902b0(uStack_90,&uStack_1e8,&pauStack_128);
LAB_140b9098e:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

