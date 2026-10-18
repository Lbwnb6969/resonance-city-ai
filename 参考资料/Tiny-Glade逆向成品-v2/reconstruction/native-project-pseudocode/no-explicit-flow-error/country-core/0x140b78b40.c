// VA 0x140b78b40, PDB extent 17581 bytes
// country_core::startup::mod_hot_reload::mod_hot_reload_apply
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140b79039) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::mod_hot_reload::mod_hot_reload_apply
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
   Extent: 17581 */

void pdb_140b78b40(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined8 *param_5,undefined8 *param_6,
                  undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,undefined8 *param_10,
                  longlong *param_11,undefined8 *param_12,undefined8 *param_13)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong *puVar16;
  code *pcVar17;
  uint uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [16];
  undefined1 *puVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  longlong lVar44;
  byte bVar45;
  char cVar46;
  char cVar47;
  int iVar48;
  longlong *plVar49;
  ulonglong uVar50;
  undefined1 (*pauVar51) [16];
  undefined8 *puVar52;
  ulonglong uVar53;
  undefined8 uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  longlong lVar57;
  longlong lVar58;
  undefined4 uVar59;
  undefined1 (*pauVar60) [16];
  undefined1 (*pauVar61) [16];
  undefined1 (*pauVar62) [16];
  undefined1 (*pauVar63) [16];
  byte *pbVar64;
  undefined1 uVar65;
  undefined *puVar66;
  undefined *puVar67;
  uint uVar68;
  longlong lVar69;
  undefined1 (*pauVar70) [16];
  bool bVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uStack_6a8;
  undefined4 uStack_6a0;
  undefined1 (*pauStack_698) [16];
  undefined4 *puStack_690;
  undefined8 uStack_688;
  undefined1 (*pauStack_680) [16];
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 uStack_650;
  undefined1 (*pauStack_648) [16];
  undefined1 (*pauStack_640) [16];
  undefined1 (*pauStack_638) [16];
  undefined1 (*pauStack_630) [16];
  undefined1 (*pauStack_628) [16];
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined *puStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined *puStack_5f8;
  undefined1 (**ppauStack_5f0) [16];
  undefined1 (**ppauStack_528) [16];
  longlong *plStack_520;
  undefined1 (*pauStack_518) [16];
  undefined1 (*pauStack_510) [16];
  undefined1 (*pauStack_508) [16];
  undefined1 uStack_4fb;
  byte *pbStack_3c0;
  undefined1 (*pauStack_3b8) [16];
  undefined1 (*pauStack_3b0) [16];
  undefined1 (*pauStack_3a8) [16];
  undefined1 (*pauStack_3a0) [16];
  undefined1 (*pauStack_398) [16];
  undefined1 (*pauStack_390) [16];
  undefined8 uStack_388;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 (*pauStack_308) [16];
  undefined1 (*pauStack_300) [16];
  undefined1 (*pauStack_2f8) [16];
  undefined1 (*pauStack_2f0) [16];
  undefined1 (*pauStack_2e8) [16];
  undefined1 (*pauStack_2e0) [16];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 (*pauStack_2b8) [16];
  undefined1 (*pauStack_2b0) [16];
  undefined1 (*pauStack_2a8) [16];
  undefined1 (*pauStack_2a0) [16];
  undefined1 (*pauStack_298) [16];
  undefined *puStack_290;
  undefined2 uStack_288;
  undefined1 (*pauStack_280) [16];
  undefined1 (*pauStack_270) [16];
  longlong lStack_268;
  undefined8 uStack_260;
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  undefined *puStack_248;
  ulonglong uStack_240;
  undefined1 (*pauStack_238) [16];
  undefined1 (*pauStack_230) [16];
  undefined1 (*pauStack_228) [16];
  undefined1 (*pauStack_220) [16];
  undefined1 (*pauStack_218) [16];
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined *puStack_200;
  longlong lStack_1f0;
  byte *pbStack_1e8;
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*apauStack_1b8 [2]) [16];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 (*pauStack_198) [16];
  undefined1 (*pauStack_190) [16];
  undefined8 uStack_180;
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined1 (*pauStack_128) [16];
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined8 uStack_e8;
  char cStack_e0;
  char cStack_df;
  undefined1 (*pauStack_d8) [16];
  undefined4 *puStack_d0;
  undefined1 (*pauStack_c8) [16];
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 (*pauStack_b8) [16];
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  char cStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  pauStack_c8 = (undefined1 (*) [16])*param_1;
  lVar57 = *(longlong *)(pauStack_c8[4] + 8);
  pauVar56 = (undefined1 (*) [16])(lVar57 + 0x10);
  LOCK();
  bVar71 = *(char *)(lVar57 + 0x10) == '\0';
  if (bVar71) {
    *(char *)(lVar57 + 0x10) = '\x01';
  }
  UNLOCK();
  pauStack_168 = param_2;
  pauStack_160 = param_3;
  pauStack_d8 = param_4;
  if (!bVar71) {
    pdb_142dc6be0(pauVar56);
  }
  puVar16 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uVar68 = 0;
    cVar46 = *(char *)(lVar57 + 0x11);
  }
  else {
    uVar68 = pdb_142dc79e0();
    uVar68 = uVar68 ^ 1;
    cVar46 = *(char *)(lVar57 + 0x11);
  }
  if (cVar46 != '\0') {
    pauStack_640._1_7_ = (undefined7)((ulonglong)pauStack_640 >> 8);
    pauStack_640 = (undefined1 (*) [16])CONCAT71(pauStack_640._1_7_,(char)uVar68);
    pauStack_648 = pauVar56;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14305cbe0,0x2b,&pauStack_648,&UNK_14305cc10,&UNK_14305c618);
  }
  uStack_a8 = (undefined1 (*) [16])CONCAT44(uStack_a8._4_4_,uVar68);
  pauStack_b8 = pauVar56;
  plVar49 = (longlong *)pdb_140f3bda0();
  if ((char)plVar49[2] == '\x01') {
    lVar69 = *plVar49;
    param_2 = (undefined1 (*) [16])plVar49[1];
  }
  else {
    lVar69 = pdb_140f4fd10();
    *plVar49 = lVar69;
    plVar49[1] = (longlong)param_2;
    *(undefined1 *)(plVar49 + 2) = 1;
  }
  *plVar49 = lVar69 + 1;
  pauVar63 = _UNK_14305c5c8;
  pauVar56 = _DAT_14305c5c0;
  pauStack_698 = *(undefined1 (**) [16])(lVar57 + 0x18);
  puStack_690 = *(undefined4 **)(lVar57 + 0x20);
  uStack_688 = *(undefined8 *)(lVar57 + 0x28);
  pauStack_680 = *(undefined1 (**) [16])(lVar57 + 0x30);
  uStack_678 = *(undefined4 *)(lVar57 + 0x38);
  uStack_674 = *(undefined4 *)(lVar57 + 0x3c);
  uStack_670 = *(undefined4 *)(lVar57 + 0x40);
  uStack_66c = *(undefined4 *)(lVar57 + 0x44);
  *(undefined1 (**) [16])(lVar57 + 0x18) = _DAT_14305c5c0;
  *(undefined1 (**) [16])(lVar57 + 0x20) = pauVar63;
  pauVar42 = _UNK_14305c5d8;
  pauVar41 = _DAT_14305c5d0;
  *(undefined1 (**) [16])(lVar57 + 0x28) = _DAT_14305c5d0;
  *(undefined1 (**) [16])(lVar57 + 0x30) = pauVar42;
  *(longlong *)(lVar57 + 0x38) = lVar69;
  *(undefined1 (**) [16])(lVar57 + 0x40) = param_2;
  pcVar1 = (char *)(lVar57 + 0x10);
  if (((char)uStack_a8 == '\0') && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
    uStack_9e = 1;
    cVar46 = pdb_142dc79e0();
    if (cVar46 == '\0') {
      *(undefined1 *)(lVar57 + 0x11) = 1;
    }
  }
  LOCK();
  cVar46 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar46 == '\x02') {
    uStack_9e = 1;
    pdb_142dc6ca0(pcVar1);
  }
  if (pauStack_680 == (undefined1 (*) [16])0x0) {
    pdb_140ca5d90(&pauStack_698,&uStack_678,0x38,0x10);
    return;
  }
  pauStack_158 = (undefined1 (*) [16])0x0;
  pauStack_150 = (undefined1 (*) [16])0x8;
  pauStack_148 = (undefined1 (*) [16])0x0;
  pauStack_138 = (undefined1 (*) [16])0x0;
  pauStack_130 = (undefined1 (*) [16])0x8;
  pauStack_128 = (undefined1 (*) [16])0x0;
  auVar72 = *pauStack_698;
  if (puStack_690 == (undefined4 *)0x0) {
    pauStack_2b8 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar50 = (longlong)puStack_690 * 0x38 + 0x47U & 0xfffffffffffffff0;
    param_2 = (undefined1 (*) [16])((longlong)puStack_690 + uVar50 + 0x11);
    param_4 = (undefined1 (*) [16])((longlong)pauStack_698 - uVar50);
    pauStack_2b8 = (undefined1 (*) [16])0x10;
  }
  pauVar62 = pauStack_698 + 1;
  puStack_d0 = puStack_690;
  puStack_290 = (undefined *)((longlong)puStack_690 + (longlong)(*pauStack_698 + 1));
  pauStack_2a0 = pauStack_698;
  uVar68 = ~(uint)(ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar72[0xf] >> 7) << 0xf);
  uStack_288 = (undefined2)uVar68;
  pauStack_280 = pauStack_680;
  pauVar60 = pauStack_698;
  pauVar51 = pauStack_680;
  pauStack_2b0 = param_2;
  pauStack_2a8 = param_4;
  pauStack_298 = pauVar62;
  pauStack_258 = pauStack_2b8;
  pauStack_250 = param_4;
  pauStack_120 = param_2;
  while (pauVar51 != (undefined1 (*) [16])0x0) {
    if ((short)uVar68 == 0) {
      do {
        auVar72 = *pauVar62;
        pauVar60 = pauVar60 + -0x38;
        pauVar62 = pauVar62 + 1;
        uVar68 = (ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar72[0xf] >> 7) << 0xf) ^ 0xffff;
        pauStack_2a0 = pauVar60;
        pauStack_298 = pauVar62;
      } while (uVar68 == 0);
    }
    uVar18 = 0;
    for (uVar19 = uVar68; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    uVar68 = uVar68 - 1 & uVar68;
    uStack_288 = (undefined2)uVar68;
    lVar57 = (ulonglong)uVar18 * -0x38;
    pauStack_280 = (undefined1 (*) [16])(pauVar51[-1] + 0xf);
    pauVar51 = *(undefined1 (**) [16])((longlong)pauVar60 + lVar57 + -0x38);
    puVar52 = (undefined8 *)((longlong)pauVar60 + lVar57 + -0x10);
    pauVar61 = (undefined1 (*) [16])*puVar52;
    pauVar55 = (undefined1 (*) [16])puVar52[1];
    puVar52 = (undefined8 *)((longlong)pauVar60 + lVar57 + -0x20);
    pauStack_638 = (undefined1 (*) [16])*puVar52;
    pauStack_630 = (undefined1 (*) [16])puVar52[1];
    puVar52 = (undefined8 *)((longlong)pauVar60 + lVar57 + -0x30);
    pauStack_648 = (undefined1 (*) [16])*puVar52;
    pauStack_640 = (undefined1 (*) [16])puVar52[1];
    pauVar20 = pauStack_280;
    pauStack_628 = pauVar61;
    uStack_620 = pauVar55;
    if (SBORROW8(0,(longlong)pauVar51)) goto joined_r0x000140b7929e;
    pauStack_628._0_4_ = SUB84(pauVar61,0);
    pauStack_628._4_4_ = (undefined4)((ulonglong)pauVar61 >> 0x20);
    uStack_620._0_4_ = SUB84(pauVar55,0);
    uStack_620._4_4_ = (undefined4)((ulonglong)pauVar55 >> 0x20);
    apauStack_1b8[1]._0_4_ = pauStack_628._0_4_;
    apauStack_1b8[1]._4_4_ = pauStack_628._4_4_;
    uStack_1a8 = (undefined4)uStack_620;
    uStack_1a4 = uStack_620._4_4_;
    uStack_99 = 1;
    pauStack_1d8 = pauVar51;
    pauStack_1d0 = pauStack_648;
    pauStack_1c8 = pauStack_640;
    pauStack_1c0 = pauStack_638;
    apauStack_1b8[0] = pauStack_630;
    pauStack_b8 = pauStack_280;
    bVar45 = pdb_140b7e2f0(pauVar61,pauVar55);
    pauVar51 = pauStack_b8;
    pauVar55 = pauStack_1c8;
    pauVar61 = pauStack_1d0;
    uStack_a8 = (undefined1 (*) [16])CONCAT71(uStack_a8._1_7_,bVar45);
    if (bVar45 < 2) {
      lVar57 = *(longlong *)(pauStack_c8[3] + 8);
      lVar69 = *(longlong *)pauStack_c8[4];
      lVar44 = lVar57;
LAB_140b78ee0:
      do {
        lVar58 = lVar44;
        if (lVar58 == lVar57 + lVar69 * 0x28) {
          if (2 < *_DAT_143ca8e90) {
            pauStack_3b8 = (undefined1 (*) [16])apauStack_1b8;
            pauStack_3b0 = (undefined1 (*) [16])pdb_140094770;
            pauStack_648 = (undefined1 (*) [16])0x0;
            pauStack_640 = (undefined1 (*) [16])&UNK_14305c685;
            pauStack_638 = (undefined1 (*) [16])0x25;
            pauStack_630 = (undefined1 (*) [16])0x0;
            pauStack_628 = (undefined1 (*) [16])&UNK_14305c5e0;
            uStack_620 = (undefined1 (*) [16])0x31;
            uStack_618 = 3;
            puStack_610 = &UNK_14305c685;
            uStack_608 = 0x25;
            uStack_600 = 0x12f00000001;
            puStack_5f8 = &UNK_14305c71d;
            ppauStack_5f0 = &pauStack_3b8;
            uStack_99 = 1;
            pdb_140f332f0(&uStack_9d,&pauStack_648);
          }
          pauVar51 = pauStack_b8;
          if (pauStack_1d8 != (undefined1 (*) [16])0x0) {
            pub_1406abac0((byte *)pauStack_1d0,(ulonglong)pauStack_1d8,1);
            pauVar51 = pauStack_b8;
          }
          goto joined_r0x000140b7907b;
        }
        uStack_99 = 1;
        pdb_140f3ddd0(&pauStack_118,*(undefined8 *)(lVar58 + 8),*(undefined8 *)(lVar58 + 0x10));
        uStack_99 = 1;
        pdb_140f3ddd0(&pauStack_308,pauVar61,pauVar55);
        if ((((pauStack_110 == pauStack_300) && (cStack_e0 == (char)uStack_2d0)) &&
            (cStack_df == '\x02')) && (uStack_2d0._1_1_ == '\x02')) {
          if (((byte)pauStack_2f8 < 3 != (byte)pauStack_108 < 3) ||
             (iVar48 = pub_142e32750(pauStack_118,pauStack_308), iVar48 != 0)) goto LAB_140b78f90;
        }
        else {
LAB_140b78f90:
          uStack_388 = uStack_e8;
          pauStack_398 = pauStack_f8;
          pauStack_390 = pauStack_f0;
          pauStack_3a8 = pauStack_108;
          pauStack_3a0 = pauStack_100;
          pauStack_3b8 = pauStack_118;
          pauStack_3b0 = pauStack_110;
          uStack_618 = uStack_2d8;
          puStack_610 = uStack_2d0;
          pauStack_628 = pauStack_2e8;
          uStack_620 = pauStack_2e0;
          pauStack_638 = pauStack_2f8;
          pauStack_630 = pauStack_2f0;
          pauStack_648 = pauStack_308;
          pauStack_640 = pauStack_300;
          uStack_99 = 1;
          cVar46 = pdb_141b03d50(&pauStack_3b8,&pauStack_648);
          lVar44 = lVar58 + 0x28;
          if (cVar46 == '\0') goto LAB_140b78ee0;
        }
        pauVar51 = pauStack_b8;
        pauVar20 = pauStack_148;
        lVar44 = lVar58 + 0x28;
      } while (*(char *)(lVar58 + 0x20) == '\0');
      if ((char)uStack_a8 == '\x02') {
LAB_140b791a9:
        pauVar51 = pauStack_b8;
        pauVar61 = pauStack_128;
        uStack_618 = CONCAT44(uStack_1a4,uStack_1a8);
        pauStack_648 = pauStack_1d8;
        pauStack_640 = pauStack_1d0;
        pauStack_638 = pauStack_1c8;
        pauStack_630 = pauStack_1c0;
        pauStack_628 = apauStack_1b8[0];
        uStack_620 = (undefined1 (*) [16])CONCAT44(apauStack_1b8[1]._4_4_,apauStack_1b8[1]._0_4_);
        if (pauStack_128 == pauStack_138) {
          pdb_142d7f080(&pauStack_138);
        }
        lVar57 = (longlong)pauVar61 * 0x38;
        *(undefined8 *)((longlong)pauStack_130 + lVar57 + 0x30) = uStack_618;
        puVar52 = (undefined8 *)((longlong)pauStack_130 + lVar57 + 0x20);
        *puVar52 = pauStack_628;
        puVar52[1] = uStack_620;
        puVar52 = (undefined8 *)((longlong)pauStack_130 + lVar57 + 0x10);
        *puVar52 = pauStack_638;
        puVar52[1] = pauStack_630;
        *(undefined8 *)((longlong)pauStack_130 + lVar57) = pauStack_648;
        ((undefined8 *)((longlong)pauStack_130 + lVar57))[1] = pauStack_640;
        pauStack_128 = (undefined1 (*) [16])(*pauVar61 + 1);
      }
      else {
        uStack_618 = CONCAT44(uStack_1a4,uStack_1a8);
        pauStack_628 = apauStack_1b8[0];
        uStack_620 = (undefined1 (*) [16])CONCAT44(apauStack_1b8[1]._4_4_,apauStack_1b8[1]._0_4_);
        pauStack_638 = pauStack_1c8;
        pauStack_630 = pauStack_1c0;
        pauStack_648 = pauStack_1d8;
        pauStack_640 = pauStack_1d0;
        if (pauStack_148 == pauStack_158) {
          pdb_142d7f080(&pauStack_158);
        }
        lVar57 = (longlong)pauVar20 * 0x38;
        *(undefined8 *)((longlong)pauStack_150 + lVar57 + 0x30) = uStack_618;
        pbVar64 = (byte *)((longlong)pauStack_150 + lVar57 + 0x20);
        *(undefined1 (**) [16])pbVar64 = pauStack_628;
        *(undefined1 (**) [16])(pbVar64 + 8) = uStack_620;
        pbVar64 = (byte *)((longlong)pauStack_150 + lVar57 + 0x10);
        *(undefined1 (**) [16])pbVar64 = pauStack_638;
        *(undefined1 (**) [16])(pbVar64 + 8) = pauStack_630;
        *(undefined1 (**) [16])((longlong)pauStack_150 + lVar57) = pauStack_648;
        *(undefined1 (**) [16])((byte *)((longlong)pauStack_150 + lVar57) + 8) = pauStack_640;
        pauStack_148 = (undefined1 (*) [16])(*pauVar20 + 1);
      }
    }
    else {
      if (bVar45 == 2) goto LAB_140b791a9;
      if (pauStack_1d8 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_1d0,(ulonglong)pauStack_1d8,1);
      }
joined_r0x000140b7907b:
      if (apauStack_1b8[0] != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)CONCAT44(apauStack_1b8[1]._4_4_,apauStack_1b8[1]._0_4_),
                      (ulonglong)apauStack_1b8[0],1);
      }
    }
  }
LAB_140b792a4:
  pauVar62 = pauStack_120;
  if ((puStack_d0 != (undefined4 *)0x0) && (pauStack_120 != (undefined1 (*) [16])0x0)) {
    pub_1406abac0((byte *)pauStack_250,(ulonglong)pauStack_120,(ulonglong)pauStack_258);
  }
  if ((pauStack_148 != (undefined1 (*) [16])0x0) ||
     (pauVar51 = pauStack_130, pauStack_128 != (undefined1 (*) [16])0x0)) {
    uStack_91 = 1;
    uStack_92 = 1;
    cVar46 = pdb_140e94b40();
    if (cVar46 == '\0') {
      lStack_268 = 0;
    }
    else {
      uStack_91 = 1;
      uStack_92 = 1;
      lVar69 = 0x3b;
      lVar57 = pdb_140b80430(0x3b);
      pauVar51 = (undefined1 (*) [16])&UNK_14305cc30;
      if (lVar57 == 1) {
        if ((undefined1 (*) [16])0x3b < pauVar62) {
          uStack_91 = 1;
          uStack_92 = 1;
          pdb_142dc8070(&UNK_14305cc30,0x3b,0,pauVar62,&UNK_14305ccf0);
          goto LAB_140b7b606;
        }
        uStack_91 = 1;
        uStack_92 = 1;
        uVar50 = pdb_140b80430(pauVar62);
        if ((uVar50 & 1) != 0) {
          if ((undefined *)0x3b < *pauVar62 + 2) {
            uStack_91 = 1;
            uStack_92 = 1;
            pdb_142dc8070(&UNK_14305cc30,0x3b,*pauVar62 + 2,0x3b,&UNK_14305cd08);
            goto LAB_140b7b606;
          }
          lVar69 = 0x39 - (longlong)pauVar62;
          pauVar51 = (undefined1 (*) [16])(pauVar62[0x14305cc3] + 2);
        }
      }
      pauVar62 = pauVar51;
      puVar66 = &UNK_14305c661;
      puVar67 = &UNK_14305c630;
      do {
        bVar45 = puVar66[-1];
        uVar68 = (uint)(char)bVar45;
        if ((char)bVar45 < '\0') {
          bVar2 = puVar66[-2];
          if ((char)bVar2 < -0x40) {
            bVar3 = puVar66[-3];
            if ((char)bVar3 < -0x40) {
              pbVar64 = puVar66 + -4;
              puVar66 = puVar66 + -4;
              uVar68 = bVar3 & 0x3f | (*pbVar64 & 7) << 6;
            }
            else {
              puVar66 = puVar66 + -3;
              uVar68 = bVar3 & 0xf;
            }
            uVar68 = bVar2 & 0x3f | uVar68 << 6;
          }
          else {
            puVar66 = puVar66 + -2;
            uVar68 = bVar2 & 0x1f;
          }
          uVar68 = (uint)(bVar45 & 0x3f) | uVar68 << 6;
          if (uVar68 != 0x5c) goto LAB_140b79408;
LAB_140b794b7:
          puVar67 = puVar66 + -0x14305c62f;
          if (puVar67 < (undefined *)0x32) {
            lVar57 = 0x31 - (longlong)puVar67;
            puVar67 = puVar66 + 1;
            goto LAB_140b794d9;
          }
          uStack_91 = 1;
          uStack_92 = 1;
          pdb_142dc8070(&UNK_14305c630,0x31,puVar67,0x31,&UNK_14305ccd0);
          goto LAB_140b7b606;
        }
        puVar66 = puVar66 + -1;
        if (uVar68 == 0x5c) goto LAB_140b794b7;
LAB_140b79408:
        if (uVar68 == 0x2f) goto LAB_140b794b7;
      } while (puVar66 != &UNK_14305c630);
      lVar57 = 0x31;
LAB_140b794d9:
      uStack_91 = 1;
      uStack_92 = 1;
      pauVar51 = (undefined1 (*) [16])pdb_140e97000();
      if (pauVar51[6][8] != '\x01') {
        uStack_91 = 1;
        uStack_92 = 1;
        pauVar51 = (undefined1 (*) [16])pdb_142d8ec20(pauVar51,0);
        if (pauVar51 == (undefined1 (*) [16])0x0) {
          uStack_91 = 1;
          uStack_92 = 1;
          pdb_142dc7890(&UNK_143326860);
          goto LAB_140b7b606;
        }
      }
      if (*(longlong *)*pauVar51 != 0) {
        uStack_91 = 1;
        uStack_92 = 1;
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_140b7b606;
      }
      *(undefined8 *)*pauVar51 = 0xffffffffffffffff;
      uStack_a8 = pauVar51;
      uStack_260 = pdb_140e94f10(*pauVar51 + 8,pauVar62,lVar69,puVar67,lVar57,1,0);
      *(longlong *)*uStack_a8 = *(longlong *)*uStack_a8 + 1;
      lStack_268 = 1;
    }
    puVar16 = _DAT_143ca8f38;
    uVar59 = SUB84(pauVar62,0);
    uStack_95 = 1;
    uStack_96 = 1;
    uStack_6a8 = pdb_140f3c9d0();
    uStack_6a0 = uVar59;
    if (2 < *_DAT_143ca8e90) {
      pauStack_308 = (undefined1 (*) [16])(*pauStack_148 + (longlong)*pauStack_128);
      pauStack_3b8 = (undefined1 (*) [16])&pauStack_308;
      pauStack_3b0 = (undefined1 (*) [16])pdb_140f72a40;
      pauStack_648 = (undefined1 (*) [16])0x0;
      pauStack_640 = (undefined1 (*) [16])&UNK_14305c685;
      pauStack_638 = (undefined1 (*) [16])0x25;
      pauStack_630 = (undefined1 (*) [16])0x0;
      pauStack_628 = (undefined1 (*) [16])&UNK_14305c5e0;
      uStack_620 = (undefined1 (*) [16])0x31;
      uStack_618 = 3;
      puStack_610 = &UNK_14305c685;
      uStack_608 = 0x25;
      uStack_600 = 0x14200000001;
      puStack_5f8 = &UNK_14305c661;
      ppauStack_5f0 = &pauStack_3b8;
      uStack_95 = 1;
      uStack_96 = 1;
      uVar59 = (int)&pauStack_648;
      pdb_140f332f0(&uStack_9d);
    }
    uStack_95 = 1;
    uStack_96 = 1;
    pdb_141c36f40(&pauStack_3b8);
    pauVar51 = pauStack_148;
    pauVar62 = pauStack_150;
    if ((int)pauStack_3b8 == 1) {
      if (pauStack_3b0 != (undefined1 (*) [16])0x0) {
        pauStack_198 = pauStack_3b0;
        pauStack_190 = pauStack_3a8;
        if (pauStack_148 != (undefined1 (*) [16])0x0) {
          plVar49 = *(longlong **)*pauStack_168;
          **(undefined4 **)pauStack_d8[1] = *(undefined4 *)(pauStack_d8[1] + 0xc);
          uVar54 = *(undefined8 *)*pauStack_d8;
          *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
          uStack_a8 = (undefined1 (*) [16])*param_5;
          *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
          pauStack_b8 = (undefined1 (*) [16])*param_6;
          *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
          pauStack_c8 = (undefined1 (*) [16])*param_7;
          *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
          puStack_d0 = (undefined4 *)*param_10;
          cStack_97 = '\x01';
          pdb_140d92690(&pauStack_3b8);
          pauVar60 = (undefined1 (*) [16])((ulonglong)(*pauVar51 + 1) >> 1);
          if (pauStack_3a0 == (undefined1 (*) [16])0x0) {
            pauVar60 = pauVar51;
          }
          if (pauStack_3a8 < pauVar60) {
            pdb_142db6610(&pauStack_3b8,pauVar60,&pauStack_398,1);
          }
          if (pauVar51 != (undefined1 (*) [16])0x0) {
            pauVar60 = (undefined1 (*) [16])0x0;
            do {
              pdb_140d8b0a0(&pauStack_648,
                            *(undefined8 *)((longlong)pauVar62 + (longlong)pauVar60 * 0x38 + 0x28),
                            *(undefined8 *)((longlong)pauVar62 + (longlong)pauVar60 * 0x38 + 0x30));
              pdb_1403b0b40(&pauStack_3b8,&pauStack_648);
              pauVar60 = (undefined1 (*) [16])(*pauVar60 + 1);
            } while (pauVar60 != pauVar51);
          }
          lVar57 = *plVar49 + 0x10;
          pdb_140e57ef0(lVar57);
          pdb_141b00390(plVar49,uVar54,&pauStack_198,&pauStack_3b8);
          pdb_141602d50((undefined1 (*) [16])&pauStack_308,pauVar62,
                        (byte *)((longlong)pauVar62 + (longlong)pauVar51 * 0x38));
          if ((pauStack_2f8 != (undefined1 (*) [16])0x0) && (2 < *_DAT_143ca8e90)) {
            pauStack_110 = (undefined1 (*) [16])pdb_1415e4d30;
            pauStack_648 = (undefined1 (*) [16])0x0;
            pauStack_640 = (undefined1 (*) [16])&UNK_14305c685;
            pauStack_638 = (undefined1 (*) [16])0x25;
            pauStack_630 = (undefined1 (*) [16])0x0;
            pauStack_628 = (undefined1 (*) [16])&UNK_14305c5e0;
            uStack_620 = (undefined1 (*) [16])0x31;
            uStack_618 = 3;
            puStack_610 = &UNK_14305c685;
            uStack_608 = 0x25;
            uStack_600 = 0x1b500000001;
            puStack_5f8 = &UNK_14305c8d8;
            ppauStack_5f0 = &pauStack_118;
            pauStack_118 = (undefined1 (*) [16])&pauStack_308;
            pdb_140f332f0(&uStack_9d,&pauStack_648);
          }
          pdb_140ab5050(lVar57,&pauStack_3b8,uStack_a8,pauStack_b8,pauStack_c8,puStack_d0);
          uVar59 = 0;
          if (pauStack_308 != (undefined1 (*) [16])0x0) {
            uVar50 = (longlong)pauStack_308 << 4;
            pub_1406abac0((byte *)pauStack_300,uVar50,8);
            uVar59 = (undefined4)uVar50;
          }
          pauVar62 = pauStack_3b0;
          if (pauStack_3b0 != (undefined1 (*) [16])0x0) {
            if (pauStack_3a0 != (undefined1 (*) [16])0x0) {
              auVar72 = *pauStack_3b8;
              pauVar60 = pauStack_3b8 + 1;
              uVar68 = ~(uint)(ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar72[0xf] >> 7) << 0xf);
              pauVar51 = pauStack_3a0;
              pauVar61 = pauStack_3b8;
              do {
                if ((short)uVar68 == 0) {
                  do {
                    auVar72 = *pauVar60;
                    pauVar61 = pauVar61 + -0x18;
                    pauVar60 = pauVar60 + 1;
                    uVar68 = (ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar72[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar68 == 0);
                }
                uVar18 = 0;
                for (uVar19 = uVar68; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
                  uVar18 = uVar18 + 1;
                }
                uVar50 = *(ulonglong *)((longlong)pauVar61 + (ulonglong)uVar18 * -0x18 + -0x18);
                if (uVar50 != 0) {
                  pub_1406abac0(*(byte **)((longlong)pauVar61 + (ulonglong)uVar18 * -0x18 + -0x10),
                                uVar50,1);
                }
                uVar59 = (undefined4)uVar50;
                uVar68 = uVar68 - 1 & uVar68;
                pauVar51 = (undefined1 (*) [16])(pauVar51[-1] + 0xf);
              } while (pauVar51 != (undefined1 (*) [16])0x0);
            }
            uVar50 = (longlong)pauVar62 * 0x18 + 0x27U & 0xfffffffffffffff0;
            puVar66 = pauVar62[1] + uVar50 + 1;
            if (puVar66 != (undefined *)0x0) {
              pub_1406abac0((byte *)((longlong)pauStack_3b8 - uVar50),(ulonglong)puVar66,0x10);
              uVar59 = SUB84(puVar66,0);
            }
          }
        }
        pauVar62 = pauStack_128;
        if (pauStack_128 == (undefined1 (*) [16])0x0) {
          cVar46 = '\x01';
          uVar50 = *_DAT_143ca8e90;
        }
        else {
          pauStack_308 = *(undefined1 (**) [16])*pauStack_168;
          pauStack_300 = *(undefined1 (**) [16])*pauStack_160;
          pauStack_2f8 = *(undefined1 (**) [16])*pauStack_d8;
          pauStack_2f0 = (undefined1 (*) [16])*param_5;
          pauStack_2e8 = (undefined1 (*) [16])*param_6;
          pauStack_2e0 = (undefined1 (*) [16])*param_8;
          uStack_2d8 = *param_9;
          uStack_2d0 = (undefined *)*param_10;
          uStack_2c8 = *param_12;
          pauVar51 = pauStack_160 + 1;
          uStack_a8 = (undefined1 (*) [16])
                      CONCAT44(uStack_a8._4_4_,*(undefined4 *)(*pauVar51 + 0xc));
          pauStack_b8 = *(undefined1 (**) [16])pauStack_160[1];
          uVar59 = *(undefined4 *)(pauStack_d8[1] + 0xc);
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,uVar59);
          puStack_d0 = *(undefined4 **)pauStack_d8[1];
          uVar4 = *(undefined4 *)((longlong)param_5 + 0x1c);
          pauStack_d8 = (undefined1 (*) [16])param_5[2];
          uVar5 = *(undefined4 *)((longlong)param_6 + 0x1c);
          puVar11 = (undefined4 *)param_6[2];
          uVar6 = *(undefined4 *)((longlong)param_8 + 0x1c);
          puVar12 = (undefined4 *)param_8[2];
          uVar7 = *(undefined4 *)((longlong)param_9 + 0x1c);
          puVar13 = (undefined4 *)param_9[2];
          uVar8 = *(undefined4 *)((longlong)param_10 + 0x1c);
          puVar14 = (undefined4 *)param_10[2];
          uVar9 = *(undefined4 *)((longlong)param_12 + 0x1c);
          pauVar60 = (undefined1 (*) [16])param_12[2];
          uVar10 = *(undefined4 *)((longlong)param_13 + 0x1c);
          uStack_650 = *param_13;
          puVar15 = (undefined4 *)param_13[2];
          pauStack_160 = pauStack_198;
          *(undefined4 *)*pauStack_b8 = *(undefined4 *)(*pauVar51 + 0xc);
          *puStack_d0 = uVar59;
          *(undefined4 *)*pauStack_d8 = uVar4;
          *puVar11 = uVar5;
          *puVar12 = uVar6;
          *puVar13 = uVar7;
          *puVar14 = uVar8;
          *(undefined4 *)*pauVar60 = uVar9;
          *puVar15 = uVar10;
          pauStack_120 = pauStack_130;
          pauStack_238 = pauStack_198;
          pauStack_230 = pauStack_190;
          uStack_2c0 = uStack_650;
          pauStack_258 = pauStack_308;
          pauStack_250 = pauStack_2e8;
          pauStack_168 = pauStack_2e0;
          if (DAT_143cb2d0c == '\x01') {
            LOCK();
            *(longlong *)*pauStack_198 = *(longlong *)*pauStack_198 + -1;
            UNLOCK();
            if (*(longlong *)*pauStack_198 == 0) {
              pdb_140dd78e0(&pauStack_238);
            }
            uVar59 = SUB84(pauVar60,0);
            LOCK();
            *(longlong *)*pauStack_230 = *(longlong *)*pauStack_230 + -1;
            UNLOCK();
            cStack_97 = '\0';
            pdb_142d8feb0(*pauStack_230 + 8);
          }
          else {
            uStack_180 = 0;
            pauStack_178 = (undefined1 (*) [16])0x8;
            pauStack_170 = (undefined1 (*) [16])0x0;
            lStack_1f0 = 0;
            pbStack_1e8 = (byte *)0x8;
            pauStack_1e0 = (undefined1 (*) [16])0x0;
            uStack_98 = 1;
            puVar52 = (undefined8 *)pdb_140f3bda0();
            if (*(char *)(puVar52 + 2) == '\x01') {
              pauStack_628 = (undefined1 (*) [16])*puVar52;
              pauVar60 = (undefined1 (*) [16])puVar52[1];
            }
            else {
              uStack_98 = 1;
              pauStack_628 = (undefined1 (*) [16])pdb_140f4fd10();
              *puVar52 = pauStack_628;
              puVar52[1] = pauVar60;
              *(undefined1 *)(puVar52 + 2) = 1;
            }
            *puVar52 = *pauStack_628 + 1;
            pauStack_638 = pauVar41;
            pauStack_630 = pauVar42;
            pauStack_648 = pauVar56;
            pauStack_640 = pauVar63;
            uStack_620 = pauVar60;
            if (pauVar62 != (undefined1 (*) [16])0x0) {
              pdb_142daeb30(&pauStack_648,pauVar62,&pauStack_628,1);
              pauVar60 = (undefined1 (*) [16])0x0;
              do {
                pdb_1417ba3d0(&pauStack_648,
                              (undefined *)((longlong)pauVar60 * 0x38 + (longlong)pauStack_120));
                pauVar60 = (undefined1 (*) [16])(*pauVar60 + 1);
              } while (pauVar60 != pauVar62);
            }
            cVar40 = UNK_14305c4ff;
            cVar39 = UNK_14305c4fe;
            cVar38 = UNK_14305c4fd;
            cVar37 = UNK_14305c4fc;
            cVar36 = UNK_14305c4fb;
            cVar35 = UNK_14305c4fa;
            cVar34 = UNK_14305c4f9;
            cVar33 = UNK_14305c4f8;
            cVar32 = UNK_14305c4f7;
            cVar31 = UNK_14305c4f6;
            cVar30 = UNK_14305c4f5;
            cVar29 = UNK_14305c4f4;
            cVar28 = UNK_14305c4f3;
            cVar27 = UNK_14305c4f2;
            cVar26 = UNK_14305c4f1;
            cVar25 = DAT_14305c4f0;
            cVar24 = UNK_14305c4e3;
            cVar23 = UNK_14305c4e2;
            cVar22 = UNK_14305c4e1;
            cVar46 = DAT_14305c4e0;
            auVar72 = *pauStack_648;
            pauStack_160 = pauStack_640;
            if (pauStack_640 == (undefined1 (*) [16])0x0) {
              uStack_240 = 0;
            }
            else {
              uVar50 = (longlong)pauStack_640 * 8 + 0x17U & 0xfffffffffffffff0;
              puStack_248 = pauStack_640[1] + uVar50 + 1;
              pbStack_3c0 = (byte *)((longlong)pauStack_648 - uVar50);
              uStack_240 = 0x10;
            }
            pauStack_d8 = (undefined1 (*) [16])((longlong)pauVar62 * 0x38 + (longlong)pauStack_120);
            pauVar62 = pauStack_648 + 1;
            uVar68 = ~(uint)(ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar72[0xf] >> 7) << 0xf);
            pauVar60 = pauStack_630;
            pauVar51 = pauStack_648;
            while( true ) {
              bVar71 = pauVar60 == (undefined1 (*) [16])0x0;
              pauVar60 = (undefined1 (*) [16])(pauVar60[-1] + 0xf);
              if (bVar71) break;
              if ((short)uVar68 == 0) {
                do {
                  auVar72 = *pauVar62;
                  pauVar51 = pauVar51 + -8;
                  pauVar62 = pauVar62 + 1;
                  uVar68 = (ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar72[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar68 == 0);
              }
              iVar48 = 0;
              for (uVar18 = uVar68; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
                iVar48 = iVar48 + 1;
              }
              pauStack_270 = *(undefined1 (**) [16])
                              ((longlong)pauVar51 + (-8 - (ulonglong)(uint)(iVar48 << 3)));
              pdb_140d8ead0(&pauStack_648);
              pauStack_100 = pauStack_640 + (longlong)pauStack_638 * 0xb;
              pauStack_118 = pauStack_640;
              pauStack_108 = pauStack_648;
              pauStack_110 = pauStack_640;
              pdb_141b77a90(&pauStack_648,&pauStack_118,(undefined1 (*) [16])&pauStack_270);
              pauVar61 = pauStack_648;
              uVar68 = uVar68 - 1 & uVar68;
              if (pauStack_648 == (undefined1 (*) [16])0x2) {
                puStack_d0 = (undefined4 *)((longlong)pauStack_100 - (longlong)pauStack_110);
                pauStack_b8 = (undefined1 (*) [16])
                              (((ulonglong)puStack_d0 >> 4) * 0x2e8ba2e8ba2e8ba3);
                pauStack_c8 = pauStack_110;
                uStack_a8 = (undefined1 (*) [16])0x0;
                while (pauStack_b8 != uStack_a8) {
                  uStack_a8 = (undefined1 (*) [16])(*uStack_a8 + 1);
                  pdb_1404b3c90();
                }
                if (pauStack_108 != (undefined1 (*) [16])0x0) {
                  pub_1406abac0((byte *)pauStack_118,(longlong)pauStack_108 * 0xb0,8);
                }
              }
              else {
                pub_142e32760(&pauStack_3b0,&pauStack_640,0xa8);
                pauStack_3b8 = pauVar61;
                puStack_d0 = (undefined4 *)((longlong)pauStack_100 - (longlong)pauStack_110);
                pauStack_b8 = (undefined1 (*) [16])
                              (((ulonglong)puStack_d0 >> 4) * 0x2e8ba2e8ba2e8ba3);
                pauStack_c8 = pauStack_110;
                uStack_a8 = (undefined1 (*) [16])0x0;
                while (pauStack_b8 != uStack_a8) {
                  uStack_a8 = (undefined1 (*) [16])(*uStack_a8 + 1);
                  pdb_1404b3c90();
                }
                if (pauStack_108 != (undefined1 (*) [16])0x0) {
                  pub_1406abac0((byte *)pauStack_118,(longlong)pauStack_108 * 0xb0,8);
                }
                pdb_140d9aa70(&pauStack_648,uStack_370,uStack_368);
                if (SBORROW8(0,(longlong)pauStack_648)) {
                  pauStack_228 = (undefined1 (*) [16])0x0;
                  pauStack_220 = (undefined1 (*) [16])0x8;
                  pauStack_218 = (undefined1 (*) [16])0x0;
                  pauVar61 = pauStack_648;
LAB_140b7a2f4:
                  uStack_b9 = 0;
                  pauStack_2b8 = (undefined1 (*) [16])0x0;
                  pauStack_2b0 = (undefined1 (*) [16])0x8;
                  pauStack_2a8 = (undefined1 (*) [16])0x0;
                  pauStack_640 = pauStack_d8;
                  pauVar55 = pauStack_120;
                  pauStack_638 = (undefined1 (*) [16])&pauStack_270;
LAB_140b7a332:
                  while( true ) {
                    pauVar20 = pauStack_640;
                    pauStack_140 = (undefined1 (*) [16])&pauStack_638;
                    do {
                      pauVar70 = pauVar55;
                      if (pauVar70 == pauVar20) goto LAB_140b7a440;
                      uStack_9a = 1;
                      pauVar61 = (undefined1 (*) [16])&pauStack_118;
                      pauStack_648 = (undefined1 (*) [16])(pauVar70[3] + 8);
                      pauStack_118 = pauVar70;
                      cVar47 = pdb_140afdfe0(&pauStack_140);
                      pauVar43 = pauStack_2a8;
                      pauVar55 = (undefined1 (*) [16])(pauVar70[3] + 8);
                    } while (cVar47 == '\0');
                    if (pauVar70 == (undefined1 (*) [16])0x0) break;
                    puVar16 = *(ulonglong **)(pauVar70[2] + 8);
                    uVar50 = *(ulonglong *)pauVar70[3];
                    pauVar55 = pauStack_648;
                    if (uVar50 != 0x14) goto LAB_140b7a3c0;
                    auVar72[0] = -((char)*puVar16 == cVar25);
                    auVar72[1] = -(*(char *)((longlong)puVar16 + 1) == cVar26);
                    auVar72[2] = -(*(char *)((longlong)puVar16 + 2) == cVar27);
                    auVar72[3] = -(*(char *)((longlong)puVar16 + 3) == cVar28);
                    auVar72[4] = -(*(char *)((longlong)puVar16 + 4) == cVar29);
                    auVar72[5] = -(*(char *)((longlong)puVar16 + 5) == cVar30);
                    auVar72[6] = -(*(char *)((longlong)puVar16 + 6) == cVar31);
                    auVar72[7] = -(*(char *)((longlong)puVar16 + 7) == cVar32);
                    auVar72[8] = -((char)puVar16[1] == cVar33);
                    auVar72[9] = -(*(char *)((longlong)puVar16 + 9) == cVar34);
                    auVar72[10] = -(*(char *)((longlong)puVar16 + 10) == cVar35);
                    auVar72[0xb] = -(*(char *)((longlong)puVar16 + 0xb) == cVar36);
                    auVar72[0xc] = -(*(char *)((longlong)puVar16 + 0xc) == cVar37);
                    auVar72[0xd] = -(*(char *)((longlong)puVar16 + 0xd) == cVar38);
                    auVar72[0xe] = -(*(char *)((longlong)puVar16 + 0xe) == cVar39);
                    auVar72[0xf] = -(*(char *)((longlong)puVar16 + 0xf) == cVar40);
                    uVar59 = (undefined4)puVar16[2];
                    auVar73[0] = -((char)uVar59 == cVar46);
                    auVar73[1] = -((char)((uint)uVar59 >> 8) == cVar22);
                    auVar73[2] = -((char)((uint)uVar59 >> 0x10) == cVar23);
                    auVar73[3] = -((char)((uint)uVar59 >> 0x18) == cVar24);
                    auVar73[4] = 0xff;
                    auVar73[5] = 0xff;
                    auVar73[6] = 0xff;
                    auVar73[7] = 0xff;
                    auVar73[8] = 0xff;
                    auVar73[9] = 0xff;
                    auVar73[10] = 0xff;
                    auVar73[0xb] = 0xff;
                    auVar73[0xc] = 0xff;
                    auVar73[0xd] = 0xff;
                    auVar73[0xe] = 0xff;
                    auVar73[0xf] = 0xff;
                    auVar73 = auVar73 & auVar72;
                    if ((ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar73[0xf] >> 7) << 0xf) != 0xffff)
                    goto LAB_140b7a3c6;
                    uStack_b9 = 1;
                  }
LAB_140b7a440:
                  pauVar20 = pauStack_218;
                  pauVar55 = pauStack_220;
                  uStack_9a = 1;
                  plVar49 = (longlong *)pdb_140f3bda0();
                  if ((char)plVar49[2] == '\x01') {
                    pauStack_628 = (undefined1 (*) [16])*plVar49;
                    pauVar61 = (undefined1 (*) [16])plVar49[1];
                  }
                  else {
                    uStack_9a = 1;
                    pauStack_628 = (undefined1 (*) [16])pdb_140f4fd10();
                    *plVar49 = (longlong)pauStack_628;
                    plVar49[1] = (longlong)pauVar61;
                    *(undefined1 *)(plVar49 + 2) = 1;
                  }
                  *plVar49 = (longlong)(*pauStack_628 + 1);
                  pauStack_638 = pauVar41;
                  pauStack_630 = pauVar42;
                  pauStack_648 = pauVar56;
                  pauStack_640 = pauVar63;
                  uStack_620 = pauVar61;
                  if (pauVar20 != (undefined1 (*) [16])0x0) {
                    pdb_142d9b130(&pauStack_648,pauVar20,&pauStack_628,1);
                    pauVar61 = (undefined1 (*) [16])0x0;
                    do {
                      uVar54 = pdb_140c8aa20(pauVar55 + (longlong)pauVar61 * 9);
                      pdb_1417bba20(&pauStack_648,uVar54);
                      pauVar61 = (undefined1 (*) [16])(*pauVar61 + 1);
                    } while (pauVar61 != pauVar20);
                  }
                  pauStack_f8 = pauStack_628;
                  pauStack_f0 = uStack_620;
                  pauStack_108 = pauStack_638;
                  pauStack_100 = pauStack_630;
                  pauStack_118 = pauStack_648;
                  pauStack_110 = pauStack_640;
                  uStack_ab = 1;
                  pdb_140c264a0(&pauStack_648,pauStack_168,&pauStack_3a8);
                  pauVar61 = pauStack_648;
                  pauStack_630 = (undefined1 (*) [16])(*pauStack_640 + (longlong)pauStack_638 * 8);
                  pauStack_648 = pauStack_640;
                  pauStack_638 = pauVar61;
                  pauStack_628 = (undefined1 (*) [16])&pauStack_118;
                  uStack_ab = 1;
                  pdb_1415e8d70(&lStack_1f0,&pauStack_648);
                  pauStack_630 = pauVar55 + (longlong)pauVar20 * 9;
                  pauStack_648 = pauVar55;
                  pauStack_640 = pauVar55;
                  pauStack_638 = pauStack_228;
                  pauStack_628 = (undefined1 (*) [16])&uStack_b9;
                  uStack_620 = (undefined1 (*) [16])&pauStack_2b8;
                  uStack_ab = 0;
                  pdb_1415e88a0(&uStack_180,&pauStack_648);
                  if (pauStack_110 != (undefined1 (*) [16])0x0) {
                    uVar50 = (longlong)pauStack_110 * 8 + 0x17U & 0xfffffffffffffff0;
                    if (pauStack_110[1] + uVar50 + 1 != (undefined *)0x0) {
                      pub_1406abac0((byte *)((longlong)pauStack_118 - uVar50),
                                    (ulonglong)(pauStack_110[1] + uVar50 + 1),0x10);
                    }
                  }
                  if (pauStack_2b8 != (undefined1 (*) [16])0x0) {
                    pub_1406abac0((byte *)pauStack_2b0,(longlong)pauStack_2b8 << 4,8);
                  }
                  pdb_1404b3c90(&pauStack_3b8);
                }
                else {
                  if (pauStack_648 != (undefined1 (*) [16])0x0) {
                    pub_1406abac0((byte *)pauStack_640,(ulonglong)pauStack_648,1);
                  }
                  pauVar61 = (undefined1 (*) [16])&pauStack_3b8;
                  pdb_141b065b0(&pauStack_648);
                  if (!SBORROW8(0,(longlong)pauStack_648)) {
                    pauStack_218 = pauStack_638;
                    pauStack_228 = pauStack_648;
                    pauStack_220 = pauStack_640;
                    goto LAB_140b7a2f4;
                  }
                  pdb_1404b3c90(&pauStack_3b8);
                }
              }
            }
            if ((pauStack_160 != (undefined1 (*) [16])0x0) && (puStack_248 != (undefined *)0x0)) {
              pub_1406abac0(pbStack_3c0,(ulonglong)puStack_248,uStack_240);
            }
            pauVar61 = pauStack_168;
            pauVar51 = pauStack_170;
            pauVar60 = pauStack_178;
            pauVar62 = pauStack_258;
            pauStack_218 = (undefined1 (*) [16])0x8000000000000000;
            if (pauStack_170 != (undefined1 (*) [16])0x0) {
              uVar50 = (longlong)pauStack_170 * 0x38;
              pdb_14007ee60();
              pauVar55 = (undefined1 (*) [16])pub_1406abab0(uVar50,8);
              if (pauVar55 == (undefined1 (*) [16])0x0) {
                uStack_93 = 1;
                uStack_94 = 1;
                pdb_142dc7e2a(8,uVar50);
                goto LAB_140b7b606;
              }
              pauStack_3b8 = pauVar51;
              pauStack_3a8 = (undefined1 (*) [16])0x0;
              pauStack_648 = (undefined1 (*) [16])&pauStack_3a8;
              pauStack_640 = (undefined1 (*) [16])0x0;
              pauStack_638 = pauVar55;
              pauStack_3b0 = pauVar55;
              pdb_1419b50a0(pauVar60,pauVar60 + (longlong)pauVar51 * 9,
                            (undefined1 (*) [16])&pauStack_648);
              pauStack_118 = pauStack_3b8;
              pauStack_110 = pauStack_3b0;
              pauStack_108 = pauStack_3a8;
              plVar49 = *(longlong **)*pauVar62;
              LOCK();
              lVar57 = *plVar49;
              *plVar49 = *plVar49 + 1;
              UNLOCK();
              if (*plVar49 == 0 || SCARRY8(lVar57,1) != *plVar49 < 0) goto LAB_140b7b606;
              pauStack_508 = pauStack_3a8;
              pauStack_518 = pauStack_3b8;
              pauStack_510 = pauStack_3b0;
              ppauStack_528 = &pauStack_238;
              uStack_4fb = 0;
              plStack_520 = plVar49;
              pauStack_3b8 = (undefined1 (*) [16])&pauStack_648;
              pdb_1416feac0(&pauStack_1d8,&UNK_143386450,&pauStack_3b8);
              uStack_93 = 1;
              uStack_94 = 1;
              pdb_141aaf5e0(&pauStack_648);
              if (SBORROW8(0,(longlong)pauStack_1c8)) {
                pauStack_118 = pauStack_1d8;
                if (*_DAT_143ca8e90 != 0) {
                  pauStack_3b8 = (undefined1 (*) [16])&pauStack_118;
                  pauStack_3b0 = (undefined1 (*) [16])pdb_140f36c30;
                  pauStack_648 = (undefined1 (*) [16])&UNK_14305c685;
                  pauStack_640 = (undefined1 (*) [16])0x25;
                  pauStack_638 = (undefined1 (*) [16])&UNK_14305c685;
                  pauStack_630 = (undefined1 (*) [16])0x25;
                  pauStack_628 = (undefined1 (*) [16])&UNK_14305c7b8;
                  pdb_1400c9be0(&UNK_14305c77d,&pauStack_3b8,1,&pauStack_648);
                }
                pauVar60 = pauStack_170;
                pauStack_170 = (undefined1 (*) [16])0x0;
                if (pauVar60 != (undefined1 (*) [16])0x0) {
                  puVar52 = (undefined8 *)(pauStack_178[7] + 8);
                  do {
                    if (puVar52[-0xb] != 0) {
                      pub_1406abac0((byte *)puVar52[-10],puVar52[-0xb],1);
                    }
                    if (puVar52[-8] != 0) {
                      pub_1406abac0((byte *)puVar52[-7],puVar52[-8],1);
                    }
                    if (puVar52[-4] != 0) {
                      pub_1406abac0((byte *)puVar52[-3],puVar52[-4],1);
                    }
                    if (puVar52[-1] != 0) {
                      pub_1406abac0((byte *)*puVar52,puVar52[-1],1);
                    }
                    puVar52 = puVar52 + 0x12;
                    pauVar60 = (undefined1 (*) [16])(pauVar60[-1] + 0xf);
                  } while (pauVar60 != (undefined1 (*) [16])0x0);
                }
                uStack_93 = 1;
                uStack_94 = 1;
                pdb_140f36c40(&pauStack_118);
              }
              else {
                if (!SBORROW8(0,(longlong)pauStack_218)) {
                  pdb_14098ba00(&pauStack_228);
                }
                puStack_200 = (undefined *)CONCAT44(apauStack_1b8[1]._4_4_,apauStack_1b8[1]._0_4_);
                pauStack_208 = apauStack_1b8[0];
                pauStack_218 = pauStack_1c8;
                pauStack_210 = pauStack_1c0;
                pauStack_228 = pauStack_1d8;
                pauStack_220 = pauStack_1d0;
              }
            }
            pauStack_648 = pauStack_238;
            pauStack_640 = pauStack_230;
            LOCK();
            *(longlong *)*pauStack_238 = *(longlong *)*pauStack_238 + -1;
            UNLOCK();
            if (*(longlong *)*pauStack_238 == 0) {
              pdb_140dd78e0(&pauStack_648);
            }
            LOCK();
            *(longlong *)*pauStack_640 = *(longlong *)*pauStack_640 + -1;
            UNLOCK();
            uStack_93 = 0;
            uStack_94 = 1;
            pdb_142d8feb0(*pauStack_640 + 8);
            if ((pauStack_170 == (undefined1 (*) [16])0x0) &&
               (pauStack_1e0 == (undefined1 (*) [16])0x0)) {
              if (!SBORROW8(0,(longlong)pauStack_218)) {
                uStack_98 = 0;
                pdb_14098ba00(&pauStack_228);
              }
              uVar59 = 0;
              if (lStack_1f0 != 0) {
                uVar50 = lStack_1f0 << 3;
                pub_1406abac0(pbStack_1e8,uVar50,8);
                uVar59 = (undefined4)uVar50;
              }
              uStack_a9 = 0;
              pdb_140967580(&uStack_180);
            }
            else {
              uStack_93 = 0;
              uStack_94 = 1;
              pdb_140e57ef0(*(longlong *)*pauVar62 + 0x10);
              pauVar62 = pauStack_1e0;
              if (pauStack_1e0 != (undefined1 (*) [16])0x0) {
                if (2 < *_DAT_143ca8e90) {
                  pauStack_118 = pauStack_1e0;
                  pauStack_3b8 = (undefined1 (*) [16])&pauStack_118;
                  pauStack_3b0 = (undefined1 (*) [16])pdb_140f72a40;
                  pauStack_648 = (undefined1 (*) [16])&UNK_14305c685;
                  pauStack_640 = (undefined1 (*) [16])0x25;
                  pauStack_638 = (undefined1 (*) [16])&UNK_14305c685;
                  pauStack_630 = (undefined1 (*) [16])0x25;
                  pauStack_628 = (undefined1 (*) [16])&UNK_14305c820;
                  uStack_93 = 0;
                  uStack_94 = 1;
                  pdb_1400c9be0(&UNK_14305c7d0,&pauStack_3b8,3,&pauStack_648);
                }
                uStack_93 = 0;
                uStack_94 = 1;
                pauVar62 = pauStack_1e0;
                pdb_141b05a50(pbStack_1e8,pauStack_1e0,pauVar61,pauStack_250,uStack_650);
              }
              pauVar60 = pauStack_178;
              bVar71 = SBORROW8(0,(longlong)pauStack_218);
              if (bVar71) {
LAB_140b7aea1:
                uStack_93 = 0;
                uStack_94 = bVar71;
                pdb_141b054e0(&pauStack_308,1);
              }
              else {
                pauStack_298 = pauStack_208;
                puStack_290 = puStack_200;
                pauStack_2a8 = pauStack_218;
                pauStack_2a0 = pauStack_210;
                pauStack_2b8 = pauStack_228;
                pauStack_2b0 = pauStack_220;
                pauVar51 = (undefined1 (*) [16])((longlong)pauStack_170 * 8);
                uStack_a8 = pauStack_170;
                pauStack_c8 = pauVar51;
                if (pauStack_170 == (undefined1 (*) [16])0x0) {
                  pauStack_b8 = (undefined1 (*) [16])0x8;
                }
                else {
                  pdb_14007ee60();
                  pauVar62 = (undefined1 (*) [16])0x8;
                  pauStack_b8 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar51,8);
                  if (pauStack_b8 == (undefined1 (*) [16])0x0) {
                    uStack_aa = 1;
                    pdb_142dc7e2a(8,pauStack_c8);
                    goto LAB_140b7b606;
                  }
                  pauVar51 = (undefined1 (*) [16])0x0;
                  do {
                    uVar54 = pdb_140c8aa20(pauVar60);
                    *(undefined8 *)(*pauStack_b8 + (longlong)pauVar51 * 8) = uVar54;
                    pauVar51 = (undefined1 (*) [16])(*pauVar51 + 1);
                    pauVar60 = pauVar60 + 9;
                  } while (uStack_a8 != pauVar51);
                }
                uStack_9c = 1;
                plVar49 = (longlong *)pdb_140f3bda0();
                if ((char)plVar49[2] == '\x01') {
                  pauStack_398 = (undefined1 (*) [16])*plVar49;
                  pauVar62 = (undefined1 (*) [16])plVar49[1];
                }
                else {
                  uStack_9c = 1;
                  pauStack_398 = (undefined1 (*) [16])pdb_140f4fd10();
                  *plVar49 = (longlong)pauStack_398;
                  plVar49[1] = (longlong)pauVar62;
                  *(undefined1 *)(plVar49 + 2) = 1;
                }
                *plVar49 = (longlong)(*pauStack_398 + 1);
                pauStack_3a8 = pauVar41;
                pauStack_3a0 = pauVar42;
                pauStack_3b8 = pauVar56;
                pauStack_3b0 = pauVar63;
                pauStack_390 = pauVar62;
                if (uStack_a8 == (undefined1 (*) [16])0x0) {
                  pauStack_108 = pauVar41;
                  pauStack_100 = pauVar42;
                  pauStack_118 = pauVar56;
                  pauStack_110 = pauVar63;
                  pauVar56 = (undefined1 (*) [16])0x0;
                  pauStack_f8 = pauStack_398;
                  pauStack_f0 = pauVar62;
                }
                else {
                  pauVar56 = (undefined1 (*) [16])0x0;
                  do {
                    uVar54 = *(undefined8 *)(*pauStack_b8 + (longlong)pauVar56 * 8);
                    pdb_140c26890(&pauStack_648,pauVar61,uVar54);
                    if ((int)pauStack_648 == 3) {
                      pdb_1417bba20(&pauStack_3b8,uVar54);
                    }
                    pauVar56 = (undefined1 (*) [16])(*pauVar56 + 1);
                  } while (uStack_a8 != pauVar56);
                  pauStack_f8 = pauStack_398;
                  pauStack_f0 = pauStack_390;
                  pauStack_108 = pauStack_3a8;
                  pauStack_100 = pauStack_3a0;
                  pauStack_118 = pauStack_3b8;
                  pauStack_110 = pauStack_3b0;
                  lVar57 = (longlong)uStack_a8 * 8;
                  puVar21 = *pauStack_b8;
                  pauVar63 = pauStack_b8;
                  do {
                    uStack_9b = 1;
                    uVar54 = pdb_1417c5550(pauVar61 + 10,pauVar63);
                    uStack_9b = 1;
                    pdb_140cabe00(&pauStack_648,pauVar61 + 8,uVar54,pauVar63);
                    pauVar63 = (undefined1 (*) [16])(*pauVar63 + 8);
                    pauVar56 = pauStack_c8;
                  } while (pauVar63 != (undefined1 (*) [16])(puVar21 + lVar57));
                }
                uStack_9b = 0;
                pauVar63 = pauStack_178;
                uVar50 = pdb_141b0b950(&pauStack_2b8,pauStack_178,pauStack_170,&pauStack_118,1,
                                       &pauStack_308);
                if ((uVar50 & 1) == 0) {
                  pauStack_270 = pauVar63;
                  if (2 < *_DAT_143ca8e90) {
                    pauStack_140 = pauStack_170;
                    pauStack_3b0 = (undefined1 (*) [16])pdb_140f72a40;
                    pauStack_3a8 = (undefined1 (*) [16])&pauStack_140;
                    pauStack_3a0 = (undefined1 (*) [16])pdb_140f72a40;
                    pauStack_648 = (undefined1 (*) [16])&UNK_14305c685;
                    pauStack_640 = (undefined1 (*) [16])0x25;
                    pauStack_638 = (undefined1 (*) [16])&UNK_14305c685;
                    pauStack_630 = (undefined1 (*) [16])0x25;
                    pauStack_628 = (undefined1 (*) [16])&UNK_14305c870;
                    uStack_9b = 0;
                    pauStack_3b8 = (undefined1 (*) [16])&pauStack_270;
                    pdb_1400c9be0(&UNK_14305c838,&pauStack_3b8,3,&pauStack_648);
                  }
                }
                else {
                  pauStack_140 = pauVar63;
                  if (*_DAT_143ca8e90 != 0) {
                    pauStack_3b8 = (undefined1 (*) [16])&pauStack_140;
                    pauStack_3b0 = (undefined1 (*) [16])pdb_140f36c30;
                    pauStack_648 = (undefined1 (*) [16])&UNK_14305c685;
                    pauStack_640 = (undefined1 (*) [16])0x25;
                    pauStack_638 = (undefined1 (*) [16])&UNK_14305c685;
                    pauStack_630 = (undefined1 (*) [16])0x25;
                    pauStack_628 = (undefined1 (*) [16])&UNK_14305c8c0;
                    pdb_1400c9be0(&UNK_14305c888,&pauStack_3b8,1,&pauStack_648);
                  }
                  uStack_9b = 0;
                  pdb_140f36c40(&pauStack_140);
                }
                if (pauStack_110 != (undefined1 (*) [16])0x0) {
                  uVar53 = (longlong)pauStack_110 * 8 + 0x17U & 0xfffffffffffffff0;
                  if (pauStack_110[1] + uVar53 + 1 != (undefined *)0x0) {
                    pub_1406abac0((byte *)((longlong)pauStack_118 - uVar53),
                                  (ulonglong)(pauStack_110[1] + uVar53 + 1),0x10);
                  }
                }
                if (uStack_a8 != (undefined1 (*) [16])0x0) {
                  pub_1406abac0((byte *)pauStack_b8,(ulonglong)pauVar56,8);
                }
                if ((uVar50 & 1) != 0) goto LAB_140b7aea1;
              }
              if (lStack_1f0 != 0) {
                pub_1406abac0(pbStack_1e8,lStack_1f0 << 3,8);
              }
              uStack_a9 = 0;
              pdb_140967580(&uStack_180);
              *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
              lVar57 = *param_11;
              lVar69 = *(longlong *)(lVar57 + 0x30);
              uVar54 = *(undefined8 *)(lVar57 + 0x40);
              if (lVar69 == *(longlong *)(lVar57 + 0x20)) {
                cStack_97 = '\0';
                pdb_142d7e8a0(lVar57 + 0x20);
              }
              uVar59 = SUB84(param_11,0);
              *(undefined8 *)(*(longlong *)(lVar57 + 0x28) + lVar69 * 8) = uVar54;
              *(longlong *)(lVar57 + 0x30) = lVar69 + 1;
              *(longlong *)(lVar57 + 0x40) = *(longlong *)(lVar57 + 0x40) + 1;
            }
          }
          cVar46 = '\0';
          uVar50 = *_DAT_143ca8e90;
        }
        if (2 < uVar50) {
          cStack_97 = cVar46;
          pauStack_308 = (undefined1 (*) [16])pdb_140f3cb70(&uStack_6a8);
          pauStack_300 = (undefined1 (*) [16])CONCAT44(pauStack_300._4_4_,uVar59);
          pauStack_3b8 = (undefined1 (*) [16])&pauStack_308;
          pauStack_3b0 = (undefined1 (*) [16])pdb_140f72840;
          pauStack_648 = (undefined1 (*) [16])0x0;
          pauStack_640 = (undefined1 (*) [16])&UNK_14305c685;
          pauStack_638 = (undefined1 (*) [16])0x25;
          pauStack_630 = (undefined1 (*) [16])0x0;
          pauStack_628 = (undefined1 (*) [16])&UNK_14305c5e0;
          uStack_620 = (undefined1 (*) [16])0x31;
          uStack_618 = 3;
          puStack_610 = &UNK_14305c685;
          uStack_608 = 0x25;
          uStack_600 = 0x18000000001;
          puStack_5f8 = &UNK_14305c6c8;
          ppauStack_5f0 = &pauStack_3b8;
          cStack_97 = cVar46;
          pdb_140f332f0(&uStack_9d,&pauStack_648);
        }
        if (cVar46 != '\0') {
          LOCK();
          *(longlong *)*pauStack_198 = *(longlong *)*pauStack_198 + -1;
          UNLOCK();
          if (*(longlong *)*pauStack_198 == 0) {
            pdb_140dd78e0(&pauStack_198);
          }
          LOCK();
          *(longlong *)*pauStack_190 = *(longlong *)*pauStack_190 + -1;
          UNLOCK();
          uStack_95 = 1;
          uStack_96 = 1;
          pdb_142d8feb0(*pauStack_190 + 8);
        }
        if (lStack_268 != 0) {
          uStack_91 = 1;
          uStack_92 = 1;
          pauVar56 = (undefined1 (*) [16])pdb_140e97000();
          if (pauVar56[6][8] != '\x01') {
            uStack_91 = 1;
            uStack_92 = 1;
            pauVar56 = (undefined1 (*) [16])pdb_142d8ec20(pauVar56,0);
            if (pauVar56 == (undefined1 (*) [16])0x0) {
              uStack_91 = 1;
              uStack_92 = 1;
              pdb_142dc7890(&UNK_143326860);
              goto LAB_140b7b606;
            }
          }
          if (*(longlong *)*pauVar56 != 0) {
            uStack_91 = 1;
            uStack_92 = 1;
            pdb_142dc8090(&UNK_143326a50);
            goto LAB_140b7b606;
          }
          *(undefined8 *)*pauVar56 = 0xffffffffffffffff;
          uStack_a8 = pauVar56;
          pdb_140e95370(*pauVar56 + 8,uStack_260);
          *(longlong *)*uStack_a8 = *(longlong *)*uStack_a8 + 1;
        }
        pauVar56 = pauStack_130;
        if (pauStack_128 != (undefined1 (*) [16])0x0) {
          puVar52 = (undefined8 *)(pauStack_130[2] + 8);
          pauVar63 = pauStack_128;
          do {
            if (puVar52[-5] != 0) {
              pub_1406abac0((byte *)puVar52[-4],puVar52[-5],1);
            }
            if (*(ulonglong *)*(undefined1 (*) [16])(puVar52 + -1) != 0) {
              pub_1406abac0((byte *)*puVar52,*(ulonglong *)*(undefined1 (*) [16])(puVar52 + -1),1);
            }
            puVar52 = puVar52 + 7;
            pauVar63 = (undefined1 (*) [16])(pauVar63[-1] + 0xf);
          } while (pauVar63 != (undefined1 (*) [16])0x0);
        }
        if (pauStack_138 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauVar56,(longlong)pauStack_138 * 0x38,8);
        }
        pauVar56 = pauStack_150;
        if (pauStack_148 != (undefined1 (*) [16])0x0) {
          pbVar64 = pauStack_150[2] + 8;
          pauVar63 = pauStack_148;
          do {
            if (*(ulonglong *)(pbVar64 + -0x28) != 0) {
              pub_1406abac0(*(byte **)(pbVar64 + -0x20),*(ulonglong *)(pbVar64 + -0x28),1);
            }
            if (*(ulonglong *)(pbVar64 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar64,*(ulonglong *)(pbVar64 + -8),1);
            }
            pbVar64 = pbVar64 + 0x38;
            pauVar63 = (undefined1 (*) [16])(pauVar63[-1] + 0xf);
          } while (pauVar63 != (undefined1 (*) [16])0x0);
        }
        goto LAB_140b7b18a;
      }
      pauStack_118 = pauStack_3a8;
      if (*_DAT_143ca8e90 != 0) {
        pauStack_308 = (undefined1 (*) [16])&pauStack_118;
        pauStack_300 = (undefined1 (*) [16])pdb_140f36c30;
        pauStack_648 = (undefined1 (*) [16])0x0;
        pauStack_640 = (undefined1 (*) [16])&UNK_14305c685;
        pauStack_638 = (undefined1 (*) [16])0x25;
        pauStack_630 = (undefined1 (*) [16])0x0;
        pauStack_628 = (undefined1 (*) [16])&UNK_14305c5e0;
        uStack_620 = (undefined1 (*) [16])0x31;
        uStack_618 = 1;
        puStack_610 = &UNK_14305c685;
        uStack_608 = 0x25;
        uStack_600 = 0x15100000001;
        puStack_5f8 = &UNK_14305c6e6;
        ppauStack_5f0 = &pauStack_308;
        pdb_140f332f0(&uStack_9d,&pauStack_648);
      }
      uStack_95 = 1;
      uStack_96 = 1;
      pdb_140f36c40(&pauStack_118);
      uVar50 = CONCAT71((int7)((ulonglong)pauVar60 >> 8),1);
    }
    else {
      lVar57 = *(longlong *)(pauStack_c8[4] + 8);
      pauVar56 = (undefined1 (*) [16])(lVar57 + 0x10);
      LOCK();
      bVar71 = *(char *)(lVar57 + 0x10) == '\0';
      if (bVar71) {
        *(char *)(lVar57 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar71) {
        uStack_95 = 1;
        uStack_96 = 1;
        pdb_142dc6be0(pauVar56);
      }
      if ((*puVar16 & 0x7fffffffffffffff) == 0) {
        uVar68 = 0;
        cVar46 = *(char *)(lVar57 + 0x11);
      }
      else {
        uStack_95 = 1;
        uStack_96 = 1;
        uVar68 = pdb_142dc79e0();
        uVar68 = uVar68 ^ 1;
        cVar46 = *(char *)(lVar57 + 0x11);
      }
      if (cVar46 != '\0') {
        pauStack_640._1_7_ = (undefined7)((ulonglong)pauStack_640 >> 8);
        pauStack_640 = (undefined1 (*) [16])CONCAT71(pauStack_640._1_7_,(char)uVar68);
        pauStack_648 = pauVar56;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305cbe0,0x2b,&pauStack_648,&UNK_14305cc10,&UNK_14305c6b0);
      }
      uStack_a8._4_4_ = (undefined4)((ulonglong)uStack_a8 >> 0x20);
      uStack_a8 = (undefined1 (*) [16])CONCAT44(uStack_a8._4_4_,uVar68);
      pauStack_630 = (undefined1 (*) [16])((longlong)pauStack_150 + (longlong)pauStack_148 * 0x38);
      uStack_ba = 1;
      pauStack_648 = pauStack_150;
      pauStack_640 = pauStack_150;
      pauStack_638 = pauStack_158;
      pauStack_b8 = pauVar56;
      pdb_1417a7a20(lVar57 + 0x18,&pauStack_648);
      pauStack_630 = (undefined1 (*) [16])((longlong)pauStack_128 * 0x38 + (longlong)pauStack_130);
      pauStack_648 = pauStack_130;
      pauStack_640 = pauStack_130;
      pauStack_638 = pauStack_138;
      uStack_ba = 0;
      pdb_1417a7a20(lVar57 + 0x18,&pauStack_648);
      pcVar1 = (char *)(lVar57 + 0x10);
      if (((char)uStack_a8 == '\0') && ((*puVar16 & 0x7fffffffffffffff) != 0)) {
        uStack_95 = 0;
        uStack_96 = 0;
        cVar46 = pdb_142dc79e0();
        if (cVar46 == '\0') {
          *(undefined1 *)(lVar57 + 0x11) = 1;
        }
      }
      uVar50 = 0;
      LOCK();
      cVar46 = *pcVar1;
      *pcVar1 = '\0';
      UNLOCK();
      if (cVar46 == '\x02') {
        uStack_95 = 0;
        uStack_96 = 0;
        pdb_142dc6ca0(pcVar1);
        uVar50 = 0;
      }
    }
    if (lStack_268 != 0) {
      uVar65 = (undefined1)uVar50;
      uStack_92 = uVar65;
      uStack_91 = uVar65;
      pauVar56 = (undefined1 (*) [16])pdb_140e97000();
      if ((pauVar56[6][8] != '\x01') &&
         (uStack_92 = uVar65, uStack_91 = uVar65,
         pauVar56 = (undefined1 (*) [16])pdb_142d8ec20(pauVar56,0),
         pauVar56 == (undefined1 (*) [16])0x0)) {
        uStack_92 = uVar65;
        uStack_91 = uVar65;
        pdb_142dc7890(&UNK_143326860);
LAB_140b7b606:
                    /* WARNING: Does not return */
        pcVar17 = (code *)invalidInstructionException();
        (*pcVar17)();
      }
      if (*(longlong *)*pauVar56 != 0) {
        uStack_92 = uVar65;
        uStack_91 = uVar65;
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_140b7b606;
      }
      uStack_a8 = (undefined1 (*) [16])CONCAT44(uStack_a8._4_4_,(int)uVar50);
      *(undefined8 *)*pauVar56 = 0xffffffffffffffff;
      pauStack_b8 = pauVar56;
      pdb_140e95370(*pauVar56 + 8,uStack_260);
      *(longlong *)*pauStack_b8 = *(longlong *)*pauStack_b8 + 1;
      uVar50 = (ulonglong)uStack_a8 & 0xffffffff;
    }
    pauVar51 = pauStack_130;
    if ((char)uVar50 == '\0') {
      return;
    }
    if (pauStack_128 != (undefined1 (*) [16])0x0) {
      puVar52 = (undefined8 *)(pauStack_130[2] + 8);
      pauVar56 = pauStack_128;
      do {
        if (puVar52[-5] != 0) {
          pub_1406abac0((byte *)puVar52[-4],puVar52[-5],1);
        }
        if (puVar52[-1] != 0) {
          pub_1406abac0((byte *)*puVar52,puVar52[-1],1);
        }
        puVar52 = puVar52 + 7;
        pauVar56 = (undefined1 (*) [16])(pauVar56[-1] + 0xf);
      } while (pauVar56 != (undefined1 (*) [16])0x0);
    }
  }
  if (pauStack_138 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauVar51,(longlong)pauStack_138 * 0x38,8);
  }
  pauVar56 = pauStack_150;
  if (pauStack_148 != (undefined1 (*) [16])0x0) {
    pbVar64 = pauStack_150[2] + 8;
    pauVar63 = pauStack_148;
    do {
      if (*(ulonglong *)(pbVar64 + -0x28) != 0) {
        pub_1406abac0(*(byte **)(pbVar64 + -0x20),*(ulonglong *)(pbVar64 + -0x28),1);
      }
      if (*(ulonglong *)(pbVar64 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar64,*(ulonglong *)(pbVar64 + -8),1);
      }
      pbVar64 = pbVar64 + 0x38;
      pauVar63 = (undefined1 (*) [16])(pauVar63[-1] + 0xf);
    } while (pauVar63 != (undefined1 (*) [16])0x0);
  }
LAB_140b7b18a:
  if (pauStack_158 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauVar56,(longlong)pauStack_158 * 0x38,8);
  }
  return;
joined_r0x000140b7929e:
  for (; pauVar20 != (undefined1 (*) [16])0x0; pauVar20 = (undefined1 (*) [16])(pauVar20[-1] + 0xf))
  {
    if ((short)uVar68 == 0) {
      do {
        auVar72 = *pauVar62;
        pauVar60 = pauVar60 + -0x38;
        pauVar62 = pauVar62 + 1;
        uVar68 = (ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar72[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar68 == 0);
    }
    uVar18 = 0;
    for (uVar19 = uVar68; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    lVar57 = (ulonglong)uVar18 * -0x38;
    uVar50 = *(ulonglong *)((longlong)pauVar60 + lVar57 + -0x38);
    if (uVar50 != 0) {
      pub_1406abac0(*(byte **)((longlong)pauVar60 + lVar57 + -0x30),uVar50,1);
    }
    uVar50 = *(ulonglong *)((longlong)pauVar60 + lVar57 + -0x18);
    if (uVar50 != 0) {
      pub_1406abac0(*(byte **)((longlong)pauVar60 + lVar57 + -0x10),uVar50,1);
    }
    uVar68 = uVar68 - 1 & uVar68;
  }
  goto LAB_140b792a4;
LAB_140b7a3c0:
  if (7 < uVar50) {
LAB_140b7a3c6:
    uVar53 = *puVar16;
    uVar53 = uVar53 >> 0x38 | (uVar53 & 0xff000000000000) >> 0x28 |
             (uVar53 & 0xff0000000000) >> 0x18 | (uVar53 & 0xff00000000) >> 8 |
             (uVar53 & 0xff000000) << 8 | (uVar53 & 0xff0000) << 0x18 | (uVar53 & 0xff00) << 0x28 |
             uVar53 << 0x38;
    if (uVar53 < 0x636c75747465722f == 0x636c75747465722f < uVar53) {
      if (pauStack_2a8 == pauStack_2b8) {
        uStack_9a = 1;
        pdb_142d8afd0(&pauStack_2b8);
      }
      *(ulonglong **)pauStack_2b0[(longlong)pauVar43] = puVar16 + 1;
      *(ulonglong *)(pauStack_2b0[(longlong)pauVar43] + 8) = uVar50 - 8;
      pauStack_2a8 = (undefined1 (*) [16])(*pauVar43 + 1);
      pauVar55 = pauStack_648;
    }
  }
  goto LAB_140b7a332;
}

