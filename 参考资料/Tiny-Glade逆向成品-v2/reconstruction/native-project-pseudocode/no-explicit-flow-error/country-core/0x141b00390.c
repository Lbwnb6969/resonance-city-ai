// VA 0x141b00390, PDB extent 9529 bytes
// country_core::startup::load_mod_textures::reload_mod_textures
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mod_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_mod_textures::reload_mod_textures
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mod_textures.rs
   Extent: 9529 */

void pdb_141b00390(longlong *param_1,undefined8 param_2,undefined8 param_3,
                  undefined1 (*param_4) [16])

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
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
  char cVar23;
  char cVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  char cVar30;
  ushort uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined1 (*pauVar37) [16];
  longlong *plVar38;
  code *pcVar39;
  undefined1 (*pauVar40) [16];
  ulonglong uVar41;
  undefined8 uVar42;
  undefined1 (*pauVar43) [16];
  longlong lVar44;
  undefined *puVar45;
  undefined *puVar46;
  uint uVar47;
  undefined1 (*pauVar48) [16];
  undefined *puVar49;
  undefined8 *puVar50;
  undefined1 (*pauVar51) [16];
  undefined1 (*pauVar52) [16];
  ulonglong uVar53;
  byte bVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  undefined1 auVar57 [16];
  undefined1 (*pauStack_308) [16];
  undefined1 (*pauStack_300) [16];
  undefined1 (*pauStack_2f0) [16];
  undefined1 (*pauStack_2d8) [16];
  undefined1 (*pauStack_2d0) [16];
  undefined1 (*pauStack_2c8) [16];
  undefined1 (*pauStack_2c0) [16];
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined1 (*pauStack_288) [16];
  undefined1 (*pauStack_280) [16];
  undefined8 uStack_278;
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  undefined1 (*pauStack_258) [16];
  longlong lStack_250;
  undefined8 uStack_248;
  undefined1 (*pauStack_240) [16];
  longlong lStack_238;
  undefined1 (*pauStack_230) [16];
  longlong *plStack_220;
  undefined8 uStack_218;
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  undefined1 (*pauStack_1f0) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  ulonglong uStack_1d8;
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 (*pauStack_1a8) [16];
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined8 uStack_170;
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  code *pcStack_130;
  undefined1 (*pauStack_128) [16];
  undefined1 (*pauStack_120) [16];
  undefined1 auStack_118 [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined8 uStack_f8;
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 (**ppauStack_c0) [16];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 uStack_8c;
  char cStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pauVar51 = param_4;
  pauStack_298 = param_4;
  plStack_220 = param_1;
  uStack_218 = param_3;
  uStack_170 = param_2;
  pdb_140d8b250(&pauStack_308);
  if (pauStack_2f0 == (undefined1 (*) [16])0x0) {
    if (pauStack_300 != (undefined1 (*) [16])0x0) {
      uVar36 = (longlong)pauStack_300 * 0x18 + 0x27U & 0xfffffffffffffff0;
      if (pauStack_300[1] + uVar36 + 1 != (undefined1 *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_308 - uVar36),
                      (ulonglong)(pauStack_300[1] + uVar36 + 1),0x10);
      }
    }
    goto LAB_141b01c5b;
  }
  uStack_81 = 1;
  cStack_8b = pdb_140e94b40();
  if (cStack_8b == '\0') {
    uStack_2a8 = 0;
  }
  else {
    uStack_81 = 1;
    lVar44 = 0x42;
    lVar35 = pdb_141b03930(0x42);
    pauVar51 = (undefined1 (*) [16])&UNK_14338cd50;
    if (lVar35 == 1) {
      if ((undefined1 (*) [16])0x42 < param_4) {
        uStack_81 = 1;
        pdb_142dc8070(&UNK_14338cd50,0x42,0,param_4,&UNK_14338ce18);
        goto LAB_141b01df3;
      }
      uStack_81 = 1;
      uVar36 = pdb_141b03930(param_4);
      if ((uVar36 & 1) != 0) {
        if ((undefined *)0x42 < *param_4 + 2) {
          uStack_81 = 1;
          pdb_142dc8070(&UNK_14338cd50,0x42,*param_4 + 2,0x42,&UNK_14338ce30);
          goto LAB_141b01df3;
        }
        lVar44 = 0x40 - (longlong)param_4;
        pauVar51 = (undefined1 (*) [16])(param_4[0x14338cd5] + 2);
      }
    }
    param_4 = pauVar51;
    puVar45 = &UNK_14338cad0;
    pauVar51 = (undefined1 (*) [16])&UNK_14338ca9c;
    do {
      bVar54 = puVar45[-1];
      uVar32 = (uint)(char)bVar54;
      if ((char)bVar54 < '\0') {
        bVar3 = puVar45[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar45[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar45 + -4;
            puVar45 = puVar45 + -4;
            uVar32 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar45 = puVar45 + -3;
            uVar32 = bVar4 & 0xf;
          }
          uVar32 = bVar3 & 0x3f | uVar32 << 6;
        }
        else {
          puVar45 = puVar45 + -2;
          uVar32 = bVar3 & 0x1f;
        }
        uVar32 = (uint)(bVar54 & 0x3f) | uVar32 << 6;
        if (uVar32 != 0x5c) goto LAB_141b00514;
LAB_141b0056d:
        puVar46 = puVar45 + -0x14338ca9b;
        if ((undefined *)0x34 < puVar46) {
          uStack_81 = 1;
          pdb_142dc8070(&UNK_14338ca9c,0x34,puVar46,0x34,&UNK_14338cdf8);
          goto LAB_141b01df3;
        }
        lVar35 = 0x34 - (longlong)puVar46;
        pauVar51 = (undefined1 (*) [16])(puVar45 + 1);
        goto LAB_141b0058f;
      }
      puVar45 = puVar45 + -1;
      if (uVar32 == 0x5c) goto LAB_141b0056d;
LAB_141b00514:
      if (uVar32 == 0x2f) goto LAB_141b0056d;
    } while (puVar45 != &UNK_14338ca9c);
    lVar35 = 0x34;
LAB_141b0058f:
    uStack_81 = 1;
    pauVar37 = (undefined1 (*) [16])pdb_140e97000();
    if (pauVar37[6][8] != '\x01') {
      uStack_81 = 1;
      pauVar37 = (undefined1 (*) [16])pdb_142d8ec20(pauVar37,0);
      if (pauVar37 == (undefined1 (*) [16])0x0) {
        uStack_81 = 1;
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141b01df3;
      }
    }
    if (*(longlong *)*pauVar37 != 0) {
      uStack_81 = 1;
      pdb_142dc8090(&UNK_143326a50);
      goto LAB_141b01df3;
    }
    *(undefined8 *)*pauVar37 = 0xffffffffffffffff;
    pauStack_98 = pauVar37;
    uStack_2a0 = pdb_140e94f10(*pauVar37 + 8,param_4,lVar44,pauVar51,lVar35,1,0);
    *(longlong *)*pauStack_98 = *(longlong *)*pauStack_98 + 1;
    uStack_2a8 = 1;
    uStack_278 = uStack_2a0;
  }
  uStack_87 = 1;
  pdb_140d92400(&pauStack_270);
  pauStack_1f0 = (undefined1 (*) [16])0x0;
  pauStack_1e8 = (undefined1 (*) [16])0x8;
  pauStack_1e0 = (undefined1 (*) [16])0x0;
  pauStack_210 = (undefined1 (*) [16])0x0;
  pauStack_208 = (undefined1 (*) [16])0x8;
  pauStack_200 = (undefined1 (*) [16])0x0;
  uStack_88 = 1;
  uStack_89 = 1;
  uStack_8a = 1;
  plVar38 = (longlong *)pdb_140f3bda0();
  if ((char)plVar38[2] == '\x01') {
    lStack_238 = *plVar38;
    param_4 = (undefined1 (*) [16])plVar38[1];
  }
  else {
    uStack_88 = 1;
    uStack_89 = 1;
    uStack_8a = 1;
    lStack_238 = pdb_140f4fd10();
    *plVar38 = lStack_238;
    plVar38[1] = (longlong)param_4;
    *(undefined1 *)(plVar38 + 2) = 1;
  }
  *plVar38 = lStack_238 + 1;
  uStack_248 = _DAT_14338cce0;
  pauStack_240 = _UNK_14338cce8;
  pauStack_258 = _DAT_14338ccd0;
  lStack_250 = _UNK_14338ccd8;
  auVar56 = *pauStack_308;
  if (pauStack_300 == (undefined1 (*) [16])0x0) {
    pauStack_288 = (undefined1 (*) [16])0x0;
    pauStack_290 = param_4;
  }
  else {
    uVar36 = (longlong)pauStack_300 * 0x18 + 0x27U & 0xfffffffffffffff0;
    pauVar51 = (undefined1 (*) [16])((longlong)pauStack_308 - uVar36);
    pauStack_288 = (undefined1 (*) [16])0x10;
    pauStack_290 = (undefined1 (*) [16])(pauStack_300[1] + uVar36 + 1);
  }
  pauVar37 = pauStack_308 + 1;
  pauStack_1d0 = pauStack_300;
  uStack_1a0 = *pauStack_300 + (longlong)(*pauStack_308 + 1);
  pauStack_1b0 = pauStack_308;
  uVar32 = ~(uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar56[0xf] >> 7) << 0xf);
  uStack_198 = (undefined2)uVar32;
  pauStack_190 = pauStack_2f0;
  pauVar52 = pauStack_308;
  pauVar40 = pauStack_2f0;
  pauStack_280 = pauVar51;
  pauStack_230 = param_4;
  pauStack_1c8 = pauStack_288;
  pauStack_1c0 = pauStack_290;
  pauStack_1b8 = pauVar51;
  pauStack_1a8 = pauVar37;
LAB_141b00790:
  if (pauVar40 != (undefined1 (*) [16])0x0) {
    if ((short)uVar32 == 0) {
      do {
        auVar56 = *pauVar37;
        pauVar52 = pauVar52 + -0x18;
        pauVar37 = pauVar37 + 1;
        uVar32 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff;
        pauStack_1b0 = pauVar52;
        pauStack_1a8 = pauVar37;
      } while (uVar32 == 0);
    }
    uVar6 = 0;
    for (uVar47 = uVar32; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar32 = uVar32 - 1 & uVar32;
    uStack_198 = (undefined2)uVar32;
    pauVar40 = (undefined1 (*) [16])(pauVar40[-1] + 0xf);
    pauVar51 = *(undefined1 (**) [16])((longlong)pauVar52 + (ulonglong)uVar6 * -0x18 + -0x18);
    auStack_118 = *(undefined1 (*) [16])((longlong)pauVar52 + (ulonglong)uVar6 * -0x18 + -0x10);
    pauStack_190 = pauVar40;
    if (SBORROW8(0,(longlong)pauVar51)) goto joined_r0x000141b00eb5;
    pauStack_160 = (undefined1 (*) [16])auStack_118._0_8_;
    pauStack_158 = (undefined1 (*) [16])auStack_118._8_8_;
    uStack_82 = 1;
    pauStack_168 = pauVar51;
    cVar30 = pdb_141b028d0(auStack_118._0_8_,auStack_118._8_8_);
    pauVar51 = pauStack_158;
    pauStack_b8 = pauVar52;
    if (cVar30 == '\0') {
      if (pauStack_270 != (undefined1 (*) [16])0x0) {
        pauStack_a0 = pauStack_268;
        pauStack_98 = pauStack_160;
        pauStack_a8 = pauStack_270;
        pauStack_b0 = pauVar40;
        while( true ) {
          pauStack_140 = (undefined1 (*) [16])(ulonglong)*(ushort *)(pauStack_a8[0x2c] + 10);
          lVar35 = (ulonglong)((uint)*(ushort *)(pauStack_a8[0x2c] + 10) * 8) * 3;
          pauVar52 = (undefined1 (*) [16])0xffffffffffffffff;
          puVar45 = *pauStack_a8 + 8;
          do {
            pauVar5 = pauStack_140;
            pauVar40 = pauStack_b0;
            if (lVar35 == 0) goto joined_r0x000141b00a70;
            pauVar5 = *(undefined1 (**) [16])(puVar45 + 0x10);
            pauVar40 = pauVar5;
            if (pauVar51 < pauVar5) {
              pauVar40 = pauVar51;
            }
            iVar33 = pub_142e32750(pauStack_98,*(undefined8 *)(puVar45 + 8),pauVar40);
            pauVar40 = pauStack_b0;
            lVar44 = (longlong)pauVar51 - (longlong)pauVar5;
            if (iVar33 != 0) {
              lVar44 = (longlong)iVar33;
            }
            pauVar52 = (undefined1 (*) [16])(*pauVar52 + 1);
            lVar35 = lVar35 + -0x18;
            puVar45 = puVar45 + 0x18;
          } while ((char)((0 < lVar44) - (lVar44 < 0)) == '\x01');
          pauVar5 = pauVar52;
          if (0 < lVar44 == lVar44 < 0) break;
joined_r0x000141b00a70:
          pauStack_b0 = pauVar40;
          if (pauStack_a0 == (undefined1 (*) [16])0x0) goto LAB_141b00bed;
          pauStack_a0 = (undefined1 (*) [16])(pauStack_a0[-1] + 0xf);
          pauStack_a8 = *(undefined1 (**) [16])(pauStack_a8[0x2d] + (longlong)pauVar5 * 8);
        }
        if (1 < *_DAT_143ca8e90) {
          pauStack_138 = (undefined1 (*) [16])&pauStack_168;
          pcStack_130 = pdb_140094770;
          auStack_118 = ZEXT816(0x14338ca74) << 0x40;
          pauStack_108 = (undefined1 (*) [16])0x28;
          pauStack_100 = (undefined1 (*) [16])0x0;
          uStack_f8 = (code *)&UNK_14338ca3f;
          pauStack_f0 = (undefined1 (*) [16])0x34;
          pauStack_e8 = (undefined1 (*) [16])0x2;
          puStack_e0 = &UNK_14338ca74;
          uStack_d8 = 0x28;
          uStack_d0 = 0x4600000001;
          puStack_c8 = &UNK_14338cb9f;
          ppauStack_c0 = &pauStack_138;
          uStack_82 = 1;
          pdb_140f332f0(&uStack_86,auStack_118);
        }
      }
LAB_141b00bed:
      pauVar52 = pauStack_b8;
      if (pauStack_168 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_160,(ulonglong)pauStack_168,1);
      }
    }
    else {
      pauStack_b0 = pauVar40;
      if (pauStack_270 != (undefined1 (*) [16])0x0) {
        pauStack_140 = pauStack_268;
        pauStack_98 = pauStack_160;
        pauStack_a8 = pauStack_158;
        pauStack_a0 = pauStack_270;
        do {
          uStack_1d8 = (ulonglong)*(ushort *)(pauStack_a0[0x2c] + 10);
          lVar35 = (ulonglong)((uint)*(ushort *)(pauStack_a0[0x2c] + 10) * 8) * 3;
          uVar36 = 0xffffffffffffffff;
          puVar45 = *pauStack_a0 + 8;
          puVar46 = pauStack_a0[0x10] + 8;
          do {
            puVar49 = puVar46;
            uVar53 = uStack_1d8;
            if (lVar35 == 0) goto LAB_141b00937;
            pauVar51 = *(undefined1 (**) [16])(puVar45 + 0x10);
            lVar44 = (longlong)pauStack_a8 - (longlong)pauVar51;
            if (pauStack_a8 < pauVar51) {
              pauVar51 = pauStack_a8;
            }
            iVar33 = pub_142e32750(pauStack_98,*(undefined8 *)(puVar45 + 8),pauVar51);
            pauVar40 = pauStack_b0;
            pauVar51 = pauStack_168;
            if (iVar33 != 0) {
              lVar44 = (longlong)iVar33;
            }
            puVar46 = puVar49 + 0x28;
            uVar36 = uVar36 + 1;
            lVar35 = lVar35 + -0x18;
            puVar45 = puVar45 + 0x18;
          } while ((char)((0 < lVar44) - (lVar44 < 0)) == '\x01');
          uVar53 = uVar36;
          if (0 < lVar44 == lVar44 < 0) {
            if (puVar49[8] == '\0') {
              if (SBORROW8(0,*(longlong *)(puVar49 + 0x10))) {
                pauStack_a0 = pauStack_168;
                pdb_1415e78c0(&pcStack_130,puVar49 + 0x18);
                pauStack_138 = (undefined1 (*) [16])0x8000000000000000;
                pauVar51 = pauStack_a0;
              }
              else {
                pauVar52 = *(undefined1 (**) [16])(puVar49 + 0x20);
                if ((longlong)pauVar52 < 0) {
                  uVar42 = 0;
LAB_141b00e9d:
                  pauStack_a0 = pauVar51;
                  pdb_142dc7e2a(uVar42,pauVar52);
                  goto LAB_141b01df3;
                }
                if (pauVar52 == (undefined1 (*) [16])0x0) {
                  pcVar39 = (code *)0x1;
                }
                else {
                  pauStack_a0 = *(undefined1 (**) [16])(puVar49 + 0x18);
                  pdb_14007ee60();
                  pcVar39 = (code *)pub_1406abab0((ulonglong)pauVar52,1);
                  uVar42 = 1;
                  if (pcVar39 == (code *)0x0) goto LAB_141b00e9d;
                  pub_142e32760(pcVar39,pauStack_a0,pauVar52);
                }
                pauStack_120 = (undefined1 (*) [16])CONCAT71(pauStack_120._1_7_,*puVar46);
                pauStack_138 = pauVar52;
                pcStack_130 = pcVar39;
                pauStack_128 = pauVar52;
              }
              pauVar52 = pauStack_200;
              auStack_118._8_8_ = pauStack_98;
              auStack_118._0_8_ = pauVar51;
              pauStack_108 = pauStack_a8;
              pauStack_f0 = pauStack_128;
              pauStack_e8 = pauStack_120;
              pauStack_100 = pauStack_138;
              uStack_f8 = pcStack_130;
              if (pauStack_200 == pauStack_210) {
                pdb_142d7f080(&pauStack_210);
              }
              lVar35 = (longlong)pauVar52 * 0x38;
              *(undefined1 (**) [16])((longlong)pauStack_208 + lVar35 + 0x30) = pauStack_e8;
              puVar50 = (undefined8 *)((longlong)pauStack_208 + lVar35 + 0x20);
              *puVar50 = uStack_f8;
              puVar50[1] = pauStack_f0;
              puVar50 = (undefined8 *)((longlong)pauStack_208 + lVar35 + 0x10);
              *puVar50 = pauStack_108;
              puVar50[1] = pauStack_100;
              *(undefined8 *)((longlong)pauStack_208 + lVar35) = auStack_118._0_8_;
              ((undefined8 *)((longlong)pauStack_208 + lVar35))[1] = auStack_118._8_8_;
              pauStack_200 = (undefined1 (*) [16])(*pauVar52 + 1);
              pauVar52 = pauStack_b8;
            }
            else {
              pauVar52 = *(undefined1 (**) [16])(puVar49 + 0x20);
              if ((longlong)pauVar52 < 0) {
                uVar42 = 0;
LAB_141b00e86:
                pauStack_a8 = pauVar51;
                pdb_142dc7e2a(uVar42,pauVar52);
                goto LAB_141b01df3;
              }
              if (pauVar52 == (undefined1 (*) [16])0x0) {
                pcVar39 = (code *)0x1;
              }
              else {
                pauStack_a0 = *(undefined1 (**) [16])(puVar49 + 0x18);
                pdb_14007ee60();
                pcVar39 = (code *)pub_1406abab0((ulonglong)pauVar52,1);
                uVar42 = 1;
                if (pcVar39 == (code *)0x0) goto LAB_141b00e86;
                pub_142e32760(pcVar39,pauStack_a0,pauVar52);
              }
              pauVar5 = pauStack_1e0;
              auStack_118._8_8_ = pauStack_98;
              auStack_118._0_8_ = pauVar51;
              pauStack_108 = pauStack_a8;
              pauStack_e8 = (undefined1 (*) [16])CONCAT71(pauStack_e8._1_7_,*puVar46);
              pauStack_100 = pauVar52;
              uStack_f8 = pcVar39;
              pauStack_f0 = pauVar52;
              if (pauStack_1e0 == pauStack_1f0) {
                pdb_142d7f080(&pauStack_1f0);
              }
              lVar35 = (longlong)pauVar5 * 0x38;
              *(undefined1 (**) [16])((longlong)pauStack_1e8 + lVar35 + 0x30) = pauStack_e8;
              puVar50 = (undefined8 *)((longlong)pauStack_1e8 + lVar35 + 0x20);
              *puVar50 = uStack_f8;
              puVar50[1] = pauStack_f0;
              puVar50 = (undefined8 *)((longlong)pauStack_1e8 + lVar35 + 0x10);
              *puVar50 = pauStack_108;
              puVar50[1] = pauStack_100;
              *(undefined8 *)((longlong)pauStack_1e8 + lVar35) = auStack_118._0_8_;
              ((undefined8 *)((longlong)pauStack_1e8 + lVar35))[1] = auStack_118._8_8_;
              pauStack_1e0 = (undefined1 (*) [16])(*pauVar5 + 1);
              pauVar52 = pauStack_b8;
            }
            goto LAB_141b00790;
          }
LAB_141b00937:
          if (pauStack_140 == (undefined1 (*) [16])0x0) break;
          pauStack_a0 = *(undefined1 (**) [16])(pauStack_a0[0x2d] + uVar53 * 8);
          pauStack_140 = (undefined1 (*) [16])(pauStack_140[-1] + 0xf);
        } while( true );
      }
      pauVar52 = pauStack_b8;
      pauStack_108 = pauStack_158;
      auStack_118._8_8_ = pauStack_160;
      auStack_118._0_8_ = pauStack_168;
      uStack_82 = 0;
      pdb_1403b0b40(&pauStack_258,auStack_118);
      pauVar40 = pauStack_b0;
    }
    goto LAB_141b00790;
  }
  goto LAB_141b00ebb;
joined_r0x000141b00eb5:
  for (; pauVar40 != (undefined1 (*) [16])0x0; pauVar40 = (undefined1 (*) [16])(pauVar40[-1] + 0xf))
  {
    if ((short)uVar32 == 0) {
      do {
        auVar56 = *pauVar37;
        pauVar52 = pauVar52 + -0x18;
        pauVar37 = pauVar37 + 1;
        uVar32 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar32 == 0);
    }
    uVar6 = 0;
    for (uVar47 = uVar32; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar36 = *(ulonglong *)((longlong)pauVar52 + (ulonglong)uVar6 * -0x18 + -0x18);
    if (uVar36 != 0) {
      pub_1406abac0(*(byte **)((longlong)pauVar52 + (ulonglong)uVar6 * -0x18 + -0x10),uVar36,1);
    }
    uVar32 = uVar32 - 1 & uVar32;
  }
LAB_141b00ebb:
  if ((pauStack_1d0 != (undefined1 (*) [16])0x0) && (pauStack_290 != (undefined1 (*) [16])0x0)) {
    pub_1406abac0((byte *)pauStack_280,(ulonglong)pauStack_290,(ulonglong)pauStack_288);
  }
  uVar53 = (longlong)pauStack_1e0 * 0x38;
  pauStack_2c0 = (undefined1 (*) [16])((longlong)pauStack_1e8 + uVar53);
  pauStack_2d8 = pauStack_1e8;
  pauStack_2c8 = pauStack_1f0;
  uVar36 = *plStack_220 + 0x10;
  puVar50 = (undefined8 *)(pauStack_1e8[5] + 8);
  pauVar40 = pauStack_1e8;
  pauVar51 = pauStack_1f0;
  pauVar37 = pauStack_1e8;
  pauStack_98 = pauStack_2c0;
  while (uVar53 = uVar53 - 0x38, pauVar40 != pauStack_98) {
    pauVar52 = (undefined1 (*) [16])(pauVar40[3] + 8);
    pauStack_1a8 = *(undefined1 (**) [16])(pauVar40[2] + 8);
    uStack_1a0 = *(undefined1 **)pauVar40[3];
    pauStack_1b8 = *(undefined1 (**) [16])(pauVar40[1] + 8);
    pauStack_1b0 = *(undefined1 (**) [16])pauVar40[2];
    pauStack_1c8 = *(undefined1 (**) [16])(*pauVar40 + 8);
    pauStack_1c0 = *(undefined1 (**) [16])pauVar40[1];
    pauStack_2d0 = pauVar52;
    if (SBORROW8(0,(longlong)*(undefined1 (**) [16])*pauVar40)) {
      if (pauStack_98 != pauVar52) {
        uVar53 = uVar53 / 0x38;
        do {
          if (puVar50[-4] != 0) {
            pub_1406abac0((byte *)puVar50[-3],puVar50[-4],1);
          }
          if (puVar50[-1] != 0) {
            pub_1406abac0((byte *)*puVar50,puVar50[-1],1);
          }
          puVar50 = puVar50 + 7;
          uVar53 = uVar53 - 1;
        } while (uVar53 != 0);
      }
      break;
    }
    uStack_1a0._4_4_ = (undefined4)((ulonglong)uStack_1a0 >> 0x20);
    uStack_150 = (undefined4)uStack_1a0;
    uStack_14c = uStack_1a0._4_4_;
    uStack_85 = 1;
    pauStack_188 = *(undefined1 (**) [16])*pauVar40;
    pauStack_180 = pauStack_1c8;
    pauStack_178 = pauStack_1c0;
    pauStack_168 = pauStack_1b8;
    pauStack_160 = pauStack_1b0;
    pauStack_158 = pauStack_1a8;
    pdb_140f55fb0(auStack_118,pauStack_1b0,pauStack_1a8);
    if (SBORROW8(0,auStack_118._0_8_)) {
      uStack_85 = 1;
      pauVar40 = (undefined1 (*) [16])pdb_142deaf00(auStack_118._8_8_);
LAB_141b011a7:
      pauStack_1f8 = pauVar40;
      if (*_DAT_143ca8e90 != 0) {
        pauStack_138 = (undefined1 (*) [16])&pauStack_168;
        pcStack_130 = pdb_140f58250;
        pauStack_128 = (undefined1 (*) [16])&pauStack_1f8;
        pauStack_120 = (undefined1 (*) [16])pdb_140f36c30;
        auStack_118 = ZEXT816(0x14338ca74) << 0x40;
        pauStack_108 = (undefined1 (*) [16])0x28;
        pauStack_100 = (undefined1 (*) [16])0x0;
        uStack_f8 = (code *)&UNK_14338ca3f;
        pauStack_f0 = (undefined1 (*) [16])0x34;
        pauStack_e8 = (undefined1 (*) [16])0x1;
        puStack_e0 = &UNK_14338ca74;
        uStack_d8 = 0x28;
        uStack_d0 = 0x6f00000001;
        puStack_c8 = &UNK_14338cb6f;
        ppauStack_c0 = &pauStack_138;
        uStack_8c = 1;
        pdb_140f332f0(&uStack_86,auStack_118);
      }
      pauStack_108 = pauStack_178;
      auStack_118._8_8_ = pauStack_180;
      auStack_118._0_8_ = pauStack_188;
      uStack_8c = 0;
      pdb_1403b0b40(&pauStack_258,auStack_118);
      uStack_85 = 0;
      pdb_140f36c40(&pauStack_1f8);
      pauVar40 = pauStack_168;
      pauVar5 = pauStack_160;
    }
    else {
      pauStack_a8 = (undefined1 (*) [16])auStack_118._0_8_;
      pauStack_b8 = (undefined1 (*) [16])auStack_118._8_8_;
      pdb_142616010(auStack_118,auStack_118._8_8_,pauStack_108);
      pauVar40 = (undefined1 (*) [16])auStack_118._8_8_;
      if (SBORROW8(0,auStack_118._0_8_)) {
LAB_141b01180:
        if (pauStack_a8 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_b8,(ulonglong)pauStack_a8,1);
        }
        if (pauVar40 != (undefined1 (*) [16])0x0) goto LAB_141b011a7;
      }
      else {
        pauStack_b0 = (undefined1 (*) [16])auStack_118._0_8_;
        pcStack_130 = (code *)CONCAT44(pcStack_130._4_4_,(undefined4)uStack_f8);
        pauStack_138 = pauStack_100;
        pauStack_a0 = (undefined1 (*) [16])auStack_118._8_8_;
        pauVar40 = pauStack_180;
        uVar41 = pdb_140b8f460(uVar36,pauStack_180,pauStack_178,&pauStack_138,
                               (ulonglong)pauStack_f0 & 0xff,(ulonglong)pauStack_f0 >> 8 & 0xff,
                               (ulonglong)uStack_f8 >> 0x20 & 0xffff,uStack_f8._6_2_,
                               auStack_118._8_8_,pauStack_108);
        pauVar27 = pauStack_178;
        pauVar5 = pauStack_180;
        if ((uVar41 & 1) != 0) {
          if (pauStack_b0 != (undefined1 (*) [16])0x0) {
            pub_1406abac0((byte *)pauStack_a0,(ulonglong)pauStack_b0,1);
          }
          goto LAB_141b01180;
        }
        auStack_118._0_8_ = 0x8000000000000000;
        pauStack_100 = pauVar40;
        if ((longlong)pauStack_178 < 0) {
          uVar42 = 0;
LAB_141b0155b:
          pdb_142dc7e2a(uVar42,pauVar27);
          goto LAB_141b01df3;
        }
        pauStack_140 = pauVar51;
        if (pauStack_178 == (undefined1 (*) [16])0x0) {
          pcVar39 = (code *)0x1;
        }
        else {
          uStack_1d8 = uVar36;
          pauStack_1d0 = pauVar37;
          pdb_14007ee60();
          uVar42 = 1;
          pcVar39 = (code *)pub_1406abab0((ulonglong)pauVar27,1);
          if (pcVar39 == (code *)0x0) goto LAB_141b0155b;
          pub_142e32760(pcVar39,pauVar5,pauVar27);
          uVar36 = uStack_1d8;
          pauVar37 = pauStack_1d0;
        }
        auStack_118._8_8_ = pcVar39;
        auStack_118._0_8_ = pauVar27;
        pauStack_108 = pauVar27;
        pauStack_138 = pauVar27;
        pauStack_128 = pauVar27;
        pauStack_120 = pauStack_100;
        pcStack_130 = pcVar39;
        pdb_140a2dcf0(uStack_170,&pauStack_138);
        pauVar40 = pauStack_b8;
        pauVar51 = pauStack_140;
        if (pauStack_b0 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_a0,(ulonglong)pauStack_b0,1);
        }
        if (pauStack_a8 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauVar40,(ulonglong)pauStack_a8,1);
        }
      }
      if (2 < *_DAT_143ca8e90) {
        pauStack_138 = (undefined1 (*) [16])&pauStack_188;
        pcStack_130 = pdb_140094770;
        auStack_118 = ZEXT816(0x14338ca74) << 0x40;
        pauStack_108 = (undefined1 (*) [16])0x28;
        pauStack_100 = (undefined1 (*) [16])0x0;
        uStack_f8 = (code *)&UNK_14338ca3f;
        pauStack_f0 = (undefined1 (*) [16])0x34;
        pauStack_e8 = (undefined1 (*) [16])0x3;
        puStack_e0 = &UNK_14338ca74;
        uStack_d8 = 0x28;
        uStack_d0 = 0x6d00000001;
        puStack_c8 = &UNK_14338cb4e;
        ppauStack_c0 = &pauStack_138;
        uStack_85 = 1;
        pdb_140f332f0(&uStack_86,auStack_118);
      }
      pauVar40 = pauStack_188;
      pauVar5 = pauStack_180;
      if (pauStack_168 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_160,(ulonglong)pauStack_168,1);
        pauVar40 = pauStack_188;
        pauVar5 = pauStack_180;
      }
    }
    if (pauVar40 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauVar5,(ulonglong)pauVar40,1);
    }
    puVar50 = puVar50 + 7;
    pauVar40 = pauVar52;
  }
  if (pauVar51 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauVar37,(longlong)pauVar51 * 0x38,8);
  }
  pauStack_1b8 = pauStack_200;
  pauStack_1c8 = pauStack_210;
  pauStack_1c0 = pauStack_208;
  uStack_83 = 0;
  uStack_84 = 0;
  pdb_14163c930(auStack_118,uVar36,uStack_170,uStack_218,&pauStack_1c8);
  uStack_83 = 0;
  uStack_84 = 0;
  pdb_14177b550(&pauStack_258,auStack_118);
  uStack_83 = 0;
  uStack_84 = 0;
  pdb_140aa0880(&pauStack_1c8,uVar36,uStack_170,&pauStack_258);
  if ((pauStack_1b0 != (undefined1 (*) [16])0x0) && (2 < *_DAT_143ca8e90)) {
    pauStack_168 = pauStack_1b0;
    pauStack_138 = (undefined1 (*) [16])&pauStack_168;
    pcStack_130 = pdb_140f72a40;
    auStack_118 = ZEXT816(0x14338ca74) << 0x40;
    pauStack_108 = (undefined1 (*) [16])0x28;
    pauStack_100 = (undefined1 (*) [16])0x0;
    uStack_f8 = (code *)&UNK_14338ca3f;
    pauStack_f0 = (undefined1 (*) [16])0x34;
    pauStack_e8 = (undefined1 (*) [16])0x3;
    puStack_e0 = &UNK_14338ca74;
    uStack_d8 = 0x28;
    uStack_d0 = 0x8200000001;
    puStack_c8 = &UNK_14338cad0;
    ppauStack_c0 = &pauStack_138;
    pdb_140f332f0(&uStack_86,auStack_118);
  }
  auVar56 = *pauStack_258;
  pauVar51 = pauStack_258 + 1;
  uVar32 = ~(uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar56[0xf] >> 7) << 0xf);
  iVar33 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  pauVar40 = pauStack_258;
  pauVar37 = pauStack_240;
LAB_141b01887:
  pauVar52 = pauStack_1c0;
  if (pauVar37 != (undefined1 (*) [16])0x0) {
    if ((short)uVar32 == 0) {
      do {
        auVar56 = *pauVar51;
        pauVar40 = pauVar40 + -0x18;
        pauVar51 = pauVar51 + 1;
        uVar32 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar32 == 0);
    }
    uVar6 = 0;
    for (uVar47 = uVar32; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar36 = (ulonglong)uVar6;
    uVar32 = uVar32 - 1 & uVar32;
    pauVar37 = (undefined1 (*) [16])(pauVar37[-1] + 0xf);
    pauVar52 = (undefined1 (*) [16])((longlong)pauVar40 + uVar36 * -0x18 + -0x18);
    pauVar5 = pauStack_140;
    pauVar27 = pauStack_b8;
    if (pauStack_1b0 != (undefined1 (*) [16])0x0) {
      puVar45 = (undefined *)pdb_1400afac0(&pauStack_1a8,pauVar52);
      pauVar26 = pauStack_1c8;
      bVar54 = (byte)((ulonglong)puVar45 >> 0x39);
      auVar56 = ZEXT216(CONCAT11(bVar54,bVar54));
      auVar56 = pshuflw(auVar56,auVar56,0);
      uVar42 = *(undefined8 *)((longlong)pauVar40 + uVar36 * -0x18 + -0x10);
      lVar35 = *(longlong *)((longlong)pauVar40 + uVar36 * -0x18 + -8);
      pauVar48 = (undefined1 (*) [16])0x0;
      pauVar43 = pauStack_1c0;
      pauStack_98 = pauVar37;
      while( true ) {
        pcVar2 = *(undefined1 (*) [16])((ulonglong)puVar45 & (ulonglong)pauVar43) +
                 (longlong)*pauVar26;
        cVar30 = *pcVar2;
        cVar10 = pcVar2[1];
        cVar11 = pcVar2[2];
        cVar12 = pcVar2[3];
        cVar13 = pcVar2[4];
        cVar14 = pcVar2[5];
        cVar15 = pcVar2[6];
        cVar16 = pcVar2[7];
        cVar17 = pcVar2[8];
        cVar18 = pcVar2[9];
        cVar19 = pcVar2[10];
        cVar20 = pcVar2[0xb];
        cVar21 = pcVar2[0xc];
        cVar22 = pcVar2[0xd];
        cVar23 = pcVar2[0xe];
        cVar24 = pcVar2[0xf];
        auVar55[0] = -(cVar30 == auVar56[0]);
        auVar55[1] = -(cVar10 == auVar56[1]);
        auVar55[2] = -(cVar11 == auVar56[2]);
        auVar55[3] = -(cVar12 == auVar56[3]);
        auVar55[4] = -(cVar13 == auVar56[4]);
        auVar55[5] = -(cVar14 == auVar56[5]);
        auVar55[6] = -(cVar15 == auVar56[6]);
        auVar55[7] = -(cVar16 == auVar56[7]);
        auVar55[8] = -(cVar17 == auVar56[0]);
        auVar55[9] = -(cVar18 == auVar56[1]);
        auVar55[10] = -(cVar19 == auVar56[2]);
        auVar55[0xb] = -(cVar20 == auVar56[3]);
        auVar55[0xc] = -(cVar21 == auVar56[4]);
        auVar55[0xd] = -(cVar22 == auVar56[5]);
        auVar55[0xe] = -(cVar23 == auVar56[6]);
        auVar55[0xf] = -(cVar24 == auVar56[7]);
        uVar31 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf
        ;
        pauVar28 = (undefined1 (*) [16])((ulonglong)puVar45 & (ulonglong)pauVar43);
        pauVar29 = (undefined1 (*) [16])(ulonglong)uVar31;
        pauVar5 = pauStack_140;
        pauVar27 = pauStack_b8;
        pauVar25 = pauStack_a8;
        pauVar37 = pauStack_98;
        while (pauStack_140 = pauVar48, pauStack_a8 = pauVar29, pauStack_b8 = pauVar28,
              pauStack_98 = pauVar37, uVar31 != 0) {
          uVar6 = 0;
          for (uVar47 = (uint)pauStack_a8; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar53 = (ulonglong)(*pauStack_b8 + uVar6) & (ulonglong)pauVar43;
          pauStack_b0 = pauVar43;
          pauStack_a0 = pauVar52;
          if ((lVar35 == *(longlong *)((longlong)pauVar26 + uVar53 * -0x18 + -8)) &&
             (iVar34 = pub_142e32750(uVar42,*(undefined8 *)
                                             ((longlong)pauVar26 + uVar53 * -0x18 + -0x10),lVar35),
             pauVar37 = pauStack_98, iVar34 == 0)) goto LAB_141b01887;
          iVar34 = (int)pauStack_a8 + -1;
          uVar31 = (ushort)iVar34 & (ushort)pauStack_a8;
          pauVar28 = pauStack_b8;
          pauVar43 = pauStack_b0;
          pauVar29 = (undefined1 (*) [16])(ulonglong)CONCAT22((short)((uint)iVar34 >> 0x10),uVar31);
          pauVar48 = pauStack_140;
          pauVar52 = pauStack_a0;
          pauVar5 = pauStack_140;
          pauVar27 = pauStack_b8;
          pauVar25 = pauStack_a8;
          pauVar37 = pauStack_98;
        }
        auVar57[0] = -(cVar30 == (char)iVar33);
        auVar57[1] = -(cVar10 == (char)((uint)iVar33 >> 8));
        auVar57[2] = -(cVar11 == (char)((uint)iVar33 >> 0x10));
        auVar57[3] = -(cVar12 == (char)((uint)iVar33 >> 0x18));
        auVar57[4] = -(cVar13 == (char)iVar7);
        auVar57[5] = -(cVar14 == (char)((uint)iVar7 >> 8));
        auVar57[6] = -(cVar15 == (char)((uint)iVar7 >> 0x10));
        auVar57[7] = -(cVar16 == (char)((uint)iVar7 >> 0x18));
        auVar57[8] = -(cVar17 == (char)iVar8);
        auVar57[9] = -(cVar18 == (char)((uint)iVar8 >> 8));
        auVar57[10] = -(cVar19 == (char)((uint)iVar8 >> 0x10));
        auVar57[0xb] = -(cVar20 == (char)((uint)iVar8 >> 0x18));
        auVar57[0xc] = -(cVar21 == (char)iVar9);
        auVar57[0xd] = -(cVar22 == (char)((uint)iVar9 >> 8));
        auVar57[0xe] = -(cVar23 == (char)((uint)iVar9 >> 0x10));
        auVar57[0xf] = -(cVar24 == (char)((uint)iVar9 >> 0x18));
        pauStack_a8 = pauVar25;
        if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x1f,0) & 1) != 0) || (SUB161(auVar57 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
        puVar45 = pauStack_140[1] + (longlong)*pauStack_b8;
        pauVar48 = pauStack_140 + 1;
        pauStack_140 = pauVar5;
        pauStack_b8 = pauVar27;
      }
    }
    pauStack_b8 = pauVar27;
    pauStack_140 = pauVar5;
    pauStack_168 = pauVar52;
    cVar30 = pdb_140a2e350(uStack_170,*(undefined8 *)((longlong)pauVar40 + uVar36 * -0x18 + -0x10),
                           *(undefined8 *)((longlong)pauVar40 + uVar36 * -0x18 + -8));
    if ((cVar30 != '\0') && (2 < *_DAT_143ca8e90)) {
      pauStack_138 = (undefined1 (*) [16])&pauStack_168;
      pcStack_130 = pdb_140493e10;
      auStack_118 = ZEXT816(0x14338ca74) << 0x40;
      pauStack_108 = (undefined1 (*) [16])0x28;
      pauStack_100 = (undefined1 (*) [16])0x0;
      uStack_f8 = (code *)&UNK_14338ca3f;
      pauStack_f0 = (undefined1 (*) [16])0x34;
      pauStack_e8 = (undefined1 (*) [16])0x3;
      puStack_e0 = &UNK_14338ca74;
      uStack_d8 = 0x28;
      uStack_d0 = 0x8900000001;
      puStack_c8 = &UNK_14338caf1;
      ppauStack_c0 = &pauStack_138;
      pdb_140f332f0(&uStack_86);
    }
    goto LAB_141b01887;
  }
  if (pauStack_1c0 != (undefined1 (*) [16])0x0) {
    if (pauStack_1b0 != (undefined1 (*) [16])0x0) {
      auVar56 = *pauStack_1c8;
      pauVar51 = pauStack_1c8 + 1;
      uVar32 = ~(uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar56[0xf] >> 7) << 0xf);
      pauVar37 = pauStack_1c8;
      pauVar40 = pauStack_1b0;
      do {
        if ((short)uVar32 == 0) {
          do {
            auVar56 = *pauVar51;
            pauVar37 = pauVar37 + -0x18;
            pauVar51 = pauVar51 + 1;
            uVar32 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar32 == 0);
        }
        uVar6 = 0;
        for (uVar47 = uVar32; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar36 = *(ulonglong *)((longlong)pauVar37 + (ulonglong)uVar6 * -0x18 + -0x18);
        if (uVar36 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar37 + (ulonglong)uVar6 * -0x18 + -0x10),uVar36,1);
        }
        uVar32 = uVar32 - 1 & uVar32;
        pauVar40 = (undefined1 (*) [16])(pauVar40[-1] + 0xf);
      } while (pauVar40 != (undefined1 (*) [16])0x0);
    }
    uVar36 = (longlong)pauVar52 * 0x18 + 0x27U & 0xfffffffffffffff0;
    puVar45 = pauVar52[1] + uVar36 + 1;
    if (puVar45 != (undefined *)0x0) {
      pub_1406abac0((byte *)((longlong)pauStack_1c8 - uVar36),(ulonglong)puVar45,0x10);
    }
  }
  lVar35 = lStack_250;
  if (lStack_250 != 0) {
    if (pauStack_240 != (undefined1 (*) [16])0x0) {
      auVar56 = *pauStack_258;
      pauVar51 = pauStack_258 + 1;
      uVar32 = ~(uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar56[0xf] >> 7) << 0xf);
      pauVar37 = pauStack_258;
      pauVar40 = pauStack_240;
      do {
        if ((short)uVar32 == 0) {
          do {
            auVar56 = *pauVar51;
            pauVar37 = pauVar37 + -0x18;
            pauVar51 = pauVar51 + 1;
            uVar32 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar32 == 0);
        }
        uVar6 = 0;
        for (uVar47 = uVar32; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar36 = *(ulonglong *)((longlong)pauVar37 + (ulonglong)uVar6 * -0x18 + -0x18);
        if (uVar36 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar37 + (ulonglong)uVar6 * -0x18 + -0x10),uVar36,1);
        }
        uVar32 = uVar32 - 1 & uVar32;
        pauVar40 = (undefined1 (*) [16])(pauVar40[-1] + 0xf);
      } while (pauVar40 != (undefined1 (*) [16])0x0);
    }
    uVar36 = lVar35 * 0x18 + 0x27U & 0xfffffffffffffff0;
    uVar53 = lVar35 + uVar36 + 0x11;
    if (uVar53 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_258 - uVar36),uVar53,0x10);
    }
  }
  uStack_87 = 0;
  pdb_140973480(&pauStack_270);
  if (cStack_8b != '\0') {
    uStack_81 = 0;
    pauVar51 = (undefined1 (*) [16])pdb_140e97000();
    if (pauVar51[6][8] != '\x01') {
      uStack_81 = 0;
      pauVar51 = (undefined1 (*) [16])pdb_142d8ec20(pauVar51,0);
      if (pauVar51 == (undefined1 (*) [16])0x0) {
        uStack_81 = 0;
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141b01df3;
      }
    }
    if (*(longlong *)*pauVar51 != 0) {
      uStack_81 = 0;
      pdb_142dc8090(&UNK_143326a50);
LAB_141b01df3:
                    /* WARNING: Does not return */
      pcVar39 = (code *)invalidInstructionException();
      (*pcVar39)();
    }
    *(undefined8 *)*pauVar51 = 0xffffffffffffffff;
    pauStack_98 = pauVar51;
    pdb_140e95370(*pauVar51 + 8,uStack_278);
    *(longlong *)*pauStack_98 = *(longlong *)*pauStack_98 + 1;
  }
LAB_141b01c5b:
  pdb_140b91070(plStack_220,uStack_170,uStack_218,pauStack_298);
  return;
}

