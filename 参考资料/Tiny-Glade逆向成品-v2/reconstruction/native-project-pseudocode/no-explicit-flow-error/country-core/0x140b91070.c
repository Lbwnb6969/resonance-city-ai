// VA 0x140b91070, PDB extent 8938 bytes
// country_core::startup::load_mod_clutter_icons::rebake_modded_clutter_icons
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mod_clutter_icons.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_mod_clutter_icons::rebake_modded_clutter_icons
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mod_clutter_icons.rs
   Extent: 8938 */

void pdb_140b91070(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined8 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
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
  undefined1 (*pauVar40) [16];
  char cVar41;
  int iVar42;
  longlong *plVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  longlong lVar46;
  ulonglong uVar47;
  undefined *puVar48;
  undefined8 *puVar49;
  undefined1 (*pauVar50) [16];
  undefined1 (*pauVar51) [16];
  undefined1 (*pauVar52) [16];
  char *pcVar53;
  undefined1 (*pauVar54) [16];
  undefined8 uVar55;
  undefined4 uVar56;
  undefined1 (**ppauVar57) [16];
  undefined *puVar58;
  undefined1 (*pauVar59) [16];
  longlong lVar60;
  undefined1 (*pauVar61) [16];
  undefined1 (*pauVar62) [16];
  ulonglong uVar63;
  uint uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 (*pauStack_3e8) [16];
  undefined1 (*pauStack_3d0) [16];
  undefined1 (*pauStack_3c8) [16];
  undefined1 (*pauStack_3c0) [16];
  undefined1 (*pauStack_3b8) [16];
  undefined1 (*pauStack_3b0) [16];
  undefined1 (*pauStack_3a8) [16];
  undefined1 (*pauStack_3a0) [16];
  undefined8 uStack_398;
  undefined1 (*pauStack_390) [16];
  undefined1 (*pauStack_388) [16];
  undefined1 (*pauStack_380) [16];
  undefined *puStack_378;
  undefined1 (**ppauStack_370) [16];
  undefined1 uStack_330;
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  undefined1 (*pauStack_1f0) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  longlong lStack_1a8;
  undefined1 (*pauStack_1a0) [16];
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 (*pauStack_150) [16];
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
  undefined8 uStack_f0;
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined8 uStack_a0;
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 (*pauStack_80) [16];
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  pauStack_140 = (undefined1 (*) [16])0x0;
  pauStack_138 = (undefined1 (*) [16])0x8;
  pauStack_130 = (undefined1 (*) [16])0x0;
  uStack_75 = 1;
  pauStack_128 = param_2;
  pauStack_80 = param_1;
  plVar43 = (longlong *)pdb_140f3bda0();
  pauStack_120 = param_3;
  if ((char)plVar43[2] == '\x01') {
    lStack_1a8 = *plVar43;
    param_2 = (undefined1 (*) [16])plVar43[1];
  }
  else {
    uStack_75 = 1;
    lStack_1a8 = pdb_140f4fd10();
    *plVar43 = lStack_1a8;
    plVar43[1] = (longlong)param_2;
    *(undefined1 *)(plVar43 + 2) = 1;
  }
  *plVar43 = lStack_1a8 + 1;
  pauVar61 = _UNK_14305e2b8;
  pauVar52 = _DAT_14305e2b0;
  pauVar62 = _UNK_14305e2a8;
  pauVar59 = _DAT_14305e2a0;
  pauStack_1b8 = _DAT_14305e2b0;
  pauStack_1b0 = _UNK_14305e2b8;
  pauStack_1c8 = _DAT_14305e2a0;
  pauStack_1c0 = _UNK_14305e2a8;
  uStack_71 = 1;
  pauStack_1a0 = param_2;
  pdb_140cf57d0(&pauStack_3c8);
  pauVar54 = pauStack_3c0;
  pauVar50 = pauStack_3c0 + (longlong)pauStack_3b8 * 4;
  pauStack_208 = pauStack_3c0;
  pauStack_c8 = pauStack_3c8;
  pauStack_1f8 = pauStack_3c8;
  pauStack_c0 = pauStack_3c0 + (longlong)pauStack_3b8 * 4 + -4;
  pauVar51 = pauStack_3c0;
  pauStack_1f0 = pauVar50;
LAB_140b9118a:
  uVar63 = (longlong)pauStack_c0 - (longlong)pauVar51;
  puVar49 = (undefined8 *)(pauVar51[4] + 8);
  pauVar45 = pauVar51;
  while( true ) {
    pauVar44 = pauStack_c8;
    if (pauVar45 == pauVar50) goto LAB_140b915a3;
    pauVar51 = pauVar45 + 4;
    param_2 = *(undefined1 (**) [16])(pauVar45[3] + 8);
    pauStack_f8 = *(undefined1 (**) [16])(pauVar45[2] + 8);
    uStack_f0 = *(undefined8 *)pauVar45[3];
    pauStack_108 = *(undefined1 (**) [16])(pauVar45[1] + 8);
    pauStack_100 = *(undefined1 (**) [16])pauVar45[2];
    pauStack_118 = *(undefined1 (**) [16])(*pauVar45 + 8);
    pauStack_110 = *(undefined1 (**) [16])pauVar45[1];
    pauStack_200 = pauVar51;
    pauStack_e8 = param_2;
    if (SBORROW8(0,(longlong)*(undefined1 (**) [16])*pauVar45)) {
      if (pauVar50 != pauVar51) {
        uVar63 = uVar63 >> 6;
        do {
          param_2 = (undefined1 (*) [16])puVar49[-1];
          if (param_2 != (undefined1 (*) [16])0x0) {
            pub_1406abac0((byte *)*puVar49,(ulonglong)param_2,1);
          }
          puVar49 = puVar49 + 8;
          uVar63 = uVar63 - 1;
        } while (uVar63 != 0);
      }
      goto LAB_140b915a3;
    }
    uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
    uStack_158 = (undefined4)uStack_f0;
    uStack_154 = uStack_f0._4_4_;
    pauStack_188 = *(undefined1 (**) [16])*pauVar45;
    pauStack_180 = pauStack_118;
    pauStack_178 = pauStack_110;
    pauStack_170 = pauStack_108;
    pauStack_168 = pauStack_100;
    pauStack_160 = pauStack_f8;
    pauStack_150 = param_2;
    cVar41 = pdb_140d8b400(param_4,pauStack_118);
    if (cVar41 != '\0') break;
    param_2 = pauStack_188;
    if (pauStack_188 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_180,(ulonglong)pauStack_188,1);
    }
    uVar63 = uVar63 - 0x40;
    puVar49 = puVar49 + 8;
    pauVar45 = pauVar51;
  }
  pdb_140d929f0(&pauStack_b8,pauStack_180);
  uStack_72 = 1;
  pauStack_d0 = pauStack_b0;
  cVar41 = pdb_140d8af50();
  pauVar44 = pauStack_88;
  pauVar45 = pauStack_98;
  if (cVar41 == '\0') {
    pauStack_1e8 = (undefined1 (*) [16])&pauStack_168;
    pauStack_1e0 = (undefined1 (*) [16])pdb_1402ed400;
    uStack_72 = 1;
    pdb_140f60760(&pauStack_3c8,&UNK_14305e6b3);
    pauStack_1e8 = pauStack_3c8;
    pauStack_1e0 = pauStack_3c0;
    pauStack_1d8 = pauStack_3b8;
    uStack_72 = 1;
    pdb_1403b0b40(&pauStack_1c8,&pauStack_1e8);
    if (pauStack_b8 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_d0,(ulonglong)pauStack_b8,1);
    }
  }
  else {
    if ((longlong)pauStack_160 < 0) {
      uVar55 = 0;
      pauVar51 = pauStack_88;
LAB_140b921ab:
      uStack_72 = 1;
      pdb_142dc7e2a(uVar55,pauVar51);
      goto LAB_140b92b7c;
    }
    pauStack_90 = pauStack_160;
    if (pauStack_160 == (undefined1 (*) [16])0x0) {
      pauVar44 = (undefined1 (*) [16])0x1;
    }
    else {
      pauStack_88 = pauStack_168;
      pdb_14007ee60();
      pauVar44 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauStack_90,1);
      if (pauVar44 == (undefined1 (*) [16])0x0) {
        uVar55 = 1;
        pauVar51 = pauStack_90;
        goto LAB_140b921ab;
      }
      pub_142e32760(pauVar44);
    }
    pauVar40 = pauStack_150;
    pauStack_d8 = pauStack_b8;
    if ((undefined1 (*) [16])CONCAT44(uStack_154,uStack_158) == (undefined1 (*) [16])0x0) {
      pauStack_390 = (undefined1 (*) [16])0x8000000000000000;
      pauStack_98 = pauStack_190;
    }
    else {
      if ((longlong)pauStack_150 < 0) {
        uVar55 = 0;
        goto LAB_140b925a5;
      }
      if (pauStack_150 == (undefined1 (*) [16])0x0) {
        pauVar45 = (undefined1 (*) [16])0x1;
        pauStack_390 = (undefined1 (*) [16])0x0;
        pauStack_98 = (undefined1 (*) [16])0x0;
      }
      else {
        pauStack_88 = (undefined1 (*) [16])CONCAT44(uStack_154,uStack_158);
        pdb_14007ee60();
        pauStack_98 = pauVar40;
        pauVar45 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar40,1);
        if (pauVar45 == (undefined1 (*) [16])0x0) goto LAB_140b92b8f;
        pub_142e32760(pauVar45,pauStack_88);
        pauStack_390 = pauStack_98;
      }
    }
    pauVar40 = pauStack_130;
    pauStack_3c8 = pauStack_90;
    pauStack_3b8 = pauStack_90;
    pauStack_3b0 = pauStack_d8;
    pauStack_3a8 = pauStack_d0;
    pauStack_3a0 = pauStack_a8;
    uStack_398 = uStack_a0;
    pauStack_3c0 = pauVar44;
    pauStack_388 = pauVar45;
    pauStack_380 = pauStack_98;
    pauStack_190 = pauStack_98;
    if (pauStack_130 == pauStack_140) {
      pauStack_98 = pauVar45;
      pdb_142d8d780(&pauStack_140);
      pauVar45 = pauStack_98;
    }
    pauStack_98 = pauVar45;
    *(undefined1 (**) [16])pauStack_138[(longlong)pauVar40 * 5 + 4] = pauStack_388;
    *(undefined1 (**) [16])(pauStack_138[(longlong)pauVar40 * 5 + 4] + 8) = pauStack_380;
    *(undefined8 *)pauStack_138[(longlong)pauVar40 * 5 + 3] = uStack_398;
    *(undefined1 (**) [16])(pauStack_138[(longlong)pauVar40 * 5 + 3] + 8) = pauStack_390;
    *(undefined1 (**) [16])pauStack_138[(longlong)pauVar40 * 5 + 2] = pauStack_3a8;
    *(undefined1 (**) [16])(pauStack_138[(longlong)pauVar40 * 5 + 2] + 8) = pauStack_3a0;
    *(undefined1 (**) [16])pauStack_138[(longlong)pauVar40 * 5 + 1] = pauStack_3b8;
    *(undefined1 (**) [16])(pauStack_138[(longlong)pauVar40 * 5 + 1] + 8) = pauStack_3b0;
    *(undefined1 (**) [16])pauStack_138[(longlong)pauVar40 * 5] = pauStack_3c8;
    *(undefined1 (**) [16])(pauStack_138[(longlong)pauVar40 * 5] + 8) = pauStack_3c0;
    pauStack_130 = (undefined1 (*) [16])(*pauVar40 + 1);
    pauVar45 = pauStack_98;
  }
  param_2 = pauStack_188;
  pauStack_98 = pauVar45;
  pauStack_88 = pauVar44;
  if (pauStack_188 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_180,(ulonglong)pauStack_188,1);
  }
  goto LAB_140b9118a;
LAB_140b915a3:
  if (pauVar44 != (undefined1 (*) [16])0x0) {
    param_2 = (undefined1 (*) [16])((longlong)pauVar44 << 6);
    pub_1406abac0((byte *)pauVar54,(ulonglong)param_2,8);
  }
  if (pauStack_1b0 != (undefined1 (*) [16])0x0) {
    if (2 < *_DAT_143ca8e90) {
      pauStack_118 = pauStack_1b0;
      pauStack_188 = (undefined1 (*) [16])&pauStack_118;
      pauStack_180 = (undefined1 (*) [16])pdb_140f72a40;
      pauStack_3c8 = (undefined1 (*) [16])0x0;
      pauStack_3c0 = (undefined1 (*) [16])&UNK_14305e569;
      pauStack_3b8 = (undefined1 (*) [16])0x2d;
      pauStack_3b0 = (undefined1 (*) [16])0x0;
      pauStack_3a8 = (undefined1 (*) [16])&UNK_14305e52f;
      pauStack_3a0 = (undefined1 (*) [16])0x39;
      uStack_398 = 3;
      pauStack_390 = (undefined1 (*) [16])&UNK_14305e569;
      pauStack_388 = (undefined1 (*) [16])0x2d;
      pauStack_380 = (undefined1 (*) [16])0x3200000001;
      puStack_378 = &UNK_14305e508;
      ppauStack_370 = &pauStack_188;
      uStack_71 = 1;
      pdb_140f332f0(&uStack_74,&pauStack_3c8);
    }
    param_2 = (undefined1 (*) [16])(*(longlong *)*pauStack_80 + 0x10);
    uStack_71 = 1;
    pdb_140aa0880(&pauStack_3c8,param_2,pauStack_128,&pauStack_1c8);
    pauVar51 = pauStack_3c0;
    if (pauStack_3c0 != (undefined1 (*) [16])0x0) {
      if (pauStack_3b0 != (undefined1 (*) [16])0x0) {
        auVar65 = *pauStack_3c8;
        pauVar50 = pauStack_3c8 + 1;
        uVar64 = ~(uint)(ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar65[0xf] >> 7) << 0xf);
        pauVar54 = pauStack_3c8;
        pauVar45 = pauStack_3b0;
        do {
          if ((short)uVar64 == 0) {
            do {
              auVar65 = *pauVar50;
              pauVar54 = pauVar54 + -0x18;
              pauVar50 = pauVar50 + 1;
              uVar64 = (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar64 == 0);
          }
          uVar7 = 0;
          for (uVar8 = uVar64; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          param_2 = *(undefined1 (**) [16])((longlong)pauVar54 + (ulonglong)uVar7 * -0x18 + -0x18);
          if (param_2 != (undefined1 (*) [16])0x0) {
            pub_1406abac0(*(byte **)((longlong)pauVar54 + (ulonglong)uVar7 * -0x18 + -0x10),
                          (ulonglong)param_2,1);
          }
          uVar64 = uVar64 - 1 & uVar64;
          pauVar45 = (undefined1 (*) [16])(pauVar45[-1] + 0xf);
        } while (pauVar45 != (undefined1 (*) [16])0x0);
      }
      uVar63 = (longlong)pauVar51 * 0x18 + 0x27U & 0xfffffffffffffff0;
      pauVar51 = (undefined1 (*) [16])(pauVar51[1] + uVar63 + 1);
      if (pauVar51 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_3c8 - uVar63),(ulonglong)pauVar51,0x10);
        param_2 = pauVar51;
      }
    }
  }
  pauVar51 = pauStack_1c0;
  if (pauStack_130 == (undefined1 (*) [16])0x0) {
    if (pauStack_1c0 != (undefined1 (*) [16])0x0) {
      if (pauStack_1b0 != (undefined1 (*) [16])0x0) {
        auVar65 = *pauStack_1c8;
        pauVar50 = pauStack_1c8 + 1;
        uVar64 = ~(uint)(ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar65[0xf] >> 7) << 0xf);
        pauVar59 = pauStack_1c8;
        pauVar62 = pauStack_1b0;
        do {
          if ((short)uVar64 == 0) {
            do {
              auVar65 = *pauVar50;
              pauVar59 = pauVar59 + -0x18;
              pauVar50 = pauVar50 + 1;
              uVar64 = (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar64 == 0);
          }
          uVar7 = 0;
          for (uVar8 = uVar64; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar63 = *(ulonglong *)((longlong)pauVar59 + (ulonglong)uVar7 * -0x18 + -0x18);
          if (uVar63 != 0) {
            pub_1406abac0(*(byte **)((longlong)pauVar59 + (ulonglong)uVar7 * -0x18 + -0x10),uVar63,1
                         );
          }
          uVar64 = uVar64 - 1 & uVar64;
          pauVar62 = (undefined1 (*) [16])(pauVar62[-1] + 0xf);
        } while (pauVar62 != (undefined1 (*) [16])0x0);
      }
      uVar63 = (longlong)pauVar51 * 0x18 + 0x27U & 0xfffffffffffffff0;
      puVar48 = pauVar51[1] + uVar63 + 1;
      if (puVar48 != (undefined *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_1c8 - uVar63),(ulonglong)puVar48,0x10);
      }
    }
    pdb_140967070(&pauStack_140);
    return;
  }
  uStack_71 = 1;
  cVar41 = pdb_140e94b40();
  pauStack_c8 = (undefined1 (*) [16])CONCAT71(pauStack_c8._1_7_,cVar41);
  if (cVar41 == '\0') {
    uStack_3f0 = 0;
  }
  else {
    uStack_71 = 1;
    param_2 = (undefined1 (*) [16])&UNK_14305ed49;
    lVar60 = 0x4a;
    uVar63 = 0x4a;
    lVar46 = pdb_140b95f50(&UNK_14305ed49);
    if (lVar46 == 1) {
      if (0x4a < uVar63) {
        uStack_71 = 1;
        pdb_142dc8070(&UNK_14305ed49,0x4a,0,uVar63,&UNK_14305ee58);
        goto LAB_140b92b7c;
      }
      uStack_71 = 1;
      param_2 = (undefined1 (*) [16])&UNK_14305ed49;
      uVar47 = pdb_140b95f50(&UNK_14305ed49);
      if ((uVar47 & 1) != 0) {
        if (0x4a < uVar63 + 2) {
          uStack_71 = 1;
          pdb_142dc8070(&UNK_14305ed49,0x4a,uVar63 + 2,0x4a,&UNK_14305ee70);
          goto LAB_140b92b7c;
        }
        lVar60 = 0x48 - uVar63;
        param_2 = (undefined1 (*) [16])(&UNK_14305ed4b + uVar63);
      }
    }
    puVar48 = &UNK_14305e5cf;
    puVar58 = &UNK_14305e596;
    do {
      pbVar1 = puVar48 + -1;
      uVar64 = (uint)(char)*pbVar1;
      if ((int)uVar64 < 0) {
        bVar3 = puVar48[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar48[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar48 + -4;
            puVar48 = puVar48 + -4;
            uVar64 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar48 = puVar48 + -3;
            uVar64 = bVar4 & 0xf;
          }
          uVar64 = bVar3 & 0x3f | uVar64 << 6;
        }
        else {
          puVar48 = puVar48 + -2;
          uVar64 = bVar3 & 0x1f;
        }
        uVar64 = (uint)(*pbVar1 & 0x3f) | uVar64 << 6;
        if (uVar64 != 0x5c) goto LAB_140b918ad;
LAB_140b919c2:
        if ((undefined *)0x39 < puVar48 + -0x14305e595) {
          uStack_71 = 1;
          pdb_142dc8070(&UNK_14305e596,0x39,puVar48 + -0x14305e595,0x39,&UNK_14305ee38);
          goto LAB_140b92b7c;
        }
        lVar46 = 0x38 - (longlong)(puVar48 + -0x14305e596);
        puVar58 = puVar48 + 1;
        goto LAB_140b919e6;
      }
      puVar48 = puVar48 + -1;
      if (uVar64 == 0x5c) goto LAB_140b919c2;
LAB_140b918ad:
      if (uVar64 == 0x2f) goto LAB_140b919c2;
    } while (puVar48 != &UNK_14305e596);
    lVar46 = 0x39;
LAB_140b919e6:
    uStack_71 = 1;
    plVar43 = (longlong *)pdb_140e97000();
    if ((char)plVar43[0xd] != '\x01') {
      uStack_71 = 1;
      plVar43 = (longlong *)pdb_142d8ec20(plVar43,0);
      if (plVar43 == (longlong *)0x0) {
        uStack_71 = 1;
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140b92b7c;
      }
    }
    if (*plVar43 != 0) {
      uStack_71 = 1;
      pdb_142dc8090(&UNK_143326a50);
      goto LAB_140b92b7c;
    }
    *plVar43 = -1;
    pauStack_c0 = (undefined1 (*) [16])plVar43;
    pauStack_3e8 = (undefined1 (*) [16])pdb_140e94f10(plVar43 + 1,param_2,lVar60,puVar58,lVar46,1,0)
    ;
    *(longlong *)pauStack_c0 = *(longlong *)pauStack_c0 + 1;
    uStack_3f0 = 1;
    pauStack_c0 = pauStack_3e8;
  }
  uStack_73 = 1;
  uStack_400 = pdb_140f3c9d0();
  pauVar50 = pauStack_130;
  pauVar51 = pauStack_138;
  uStack_3f8 = SUB84(param_2,0);
  pauStack_3d0 = pauStack_130;
  uStack_73 = 1;
  puVar49 = (undefined8 *)pdb_140f3bda0();
  if (*(char *)(puVar49 + 2) == '\x01') {
    pauStack_3a8 = (undefined1 (*) [16])*puVar49;
    param_2 = (undefined1 (*) [16])puVar49[1];
  }
  else {
    uStack_73 = 1;
    pauStack_3a8 = (undefined1 (*) [16])pdb_140f4fd10();
    *puVar49 = pauStack_3a8;
    puVar49[1] = param_2;
    *(undefined1 *)(puVar49 + 2) = 1;
  }
  *puVar49 = *pauStack_3a8 + 1;
  pauStack_3b8 = pauVar52;
  pauStack_3b0 = pauVar61;
  pauStack_3c8 = pauVar59;
  pauStack_3c0 = pauVar62;
  pauStack_3a0 = param_2;
  if (pauVar50 != (undefined1 (*) [16])0x0) {
    pdb_142db6610(&pauStack_3c8,pauVar50,&pauStack_3a8,1);
    pauVar59 = (undefined1 (*) [16])0x0;
    do {
      pauStack_b8 = pauVar51 + (longlong)pauVar59 * 5;
      pauStack_b0 = (undefined1 (*) [16])pdb_140001020;
      pdb_140f60760(&pauStack_118,&UNK_14335f1b0,&pauStack_b8);
      pdb_1403b0b40(&pauStack_3c8,&pauStack_118);
      pauVar59 = (undefined1 (*) [16])(*pauVar59 + 1);
    } while (pauVar59 != pauVar50);
  }
  pauStack_168 = pauStack_3a8;
  pauStack_160 = pauStack_3a0;
  pauStack_178 = pauStack_3b8;
  pauStack_170 = pauStack_3b0;
  pauStack_188 = pauStack_3c8;
  pauStack_180 = pauStack_3c0;
  pauStack_108 = pauStack_130;
  pauStack_118 = pauStack_140;
  pauStack_110 = pauStack_138;
  pauVar51 = *(undefined1 (**) [16])*pauStack_80;
  LOCK();
  lVar46 = *(longlong *)*pauVar51;
  *(longlong *)*pauVar51 = *(longlong *)*pauVar51 + 1;
  UNLOCK();
  if (*(longlong *)*pauVar51 == 0 || SCARRY8(lVar46,1) != *(longlong *)*pauVar51 < 0)
  goto LAB_140b92b7c;
  pauStack_3b8 = pauStack_130;
  pauStack_3c8 = pauStack_140;
  pauStack_3c0 = pauStack_138;
  pauStack_3b0 = pauStack_120;
  uStack_330 = 0;
  pauStack_118 = (undefined1 (*) [16])&pauStack_3c8;
  pauStack_3a8 = pauVar51;
  pauVar50 = (undefined1 (*) [16])pdb_1416f4230(&UNK_143386450,&pauStack_118);
  pdb_141ab0010(&pauStack_3c8);
  if (pauVar50 != (undefined1 (*) [16])0x0) {
    pauStack_b8 = pauVar50;
    if (*_DAT_143ca8e90 != 0) {
      pauStack_118 = (undefined1 (*) [16])&pauStack_b8;
      pauStack_110 = (undefined1 (*) [16])pdb_140f36c30;
      pauStack_3c8 = (undefined1 (*) [16])0x0;
      pauStack_3c0 = (undefined1 (*) [16])&UNK_14305e569;
      pauStack_3b8 = (undefined1 (*) [16])0x2d;
      pauStack_3b0 = (undefined1 (*) [16])0x0;
      pauStack_3a8 = (undefined1 (*) [16])&UNK_14305e52f;
      pauStack_3a0 = (undefined1 (*) [16])0x39;
      uStack_398 = 1;
      pauStack_390 = (undefined1 (*) [16])&UNK_14305e569;
      pauStack_388 = (undefined1 (*) [16])0x2d;
      pauStack_380 = (undefined1 (*) [16])0x4b00000001;
      puStack_378 = &UNK_14305e5cf;
      ppauStack_370 = &pauStack_118;
      pdb_140f332f0(&uStack_74,&pauStack_3c8);
    }
    pdb_140aa0880(&pauStack_3c8,pauVar51 + 1,pauStack_128,&pauStack_188);
    pauVar51 = pauStack_3c0;
    if (pauStack_3c0 != (undefined1 (*) [16])0x0) {
      if (pauStack_3b0 != (undefined1 (*) [16])0x0) {
        auVar65 = *pauStack_3c8;
        pauVar50 = pauStack_3c8 + 1;
        uVar64 = ~(uint)(ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar65[0xf] >> 7) << 0xf);
        pauVar59 = pauStack_3b0;
        pauVar62 = pauStack_3c8;
        do {
          if ((short)uVar64 == 0) {
            do {
              auVar65 = *pauVar50;
              pauVar62 = pauVar62 + -0x18;
              pauVar50 = pauVar50 + 1;
              uVar64 = (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar64 == 0);
          }
          uVar7 = 0;
          for (uVar8 = uVar64; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar63 = *(ulonglong *)((longlong)pauVar62 + (ulonglong)uVar7 * -0x18 + -0x18);
          if (uVar63 != 0) {
            pub_1406abac0(*(byte **)((longlong)pauVar62 + (ulonglong)uVar7 * -0x18 + -0x10),uVar63,1
                         );
          }
          uVar64 = uVar64 - 1 & uVar64;
          pauVar59 = (undefined1 (*) [16])(pauVar59[-1] + 0xf);
        } while (pauVar59 != (undefined1 (*) [16])0x0);
      }
      uVar63 = (longlong)pauVar51 * 0x18 + 0x27U & 0xfffffffffffffff0;
      puVar48 = pauVar51[1] + uVar63 + 1;
      if (puVar48 != (undefined *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_3c8 - uVar63),(ulonglong)puVar48,0x10);
      }
    }
    pdb_140f36c40(&pauStack_b8);
    pauVar51 = pauStack_180;
    cVar41 = (char)pauStack_c8;
    if (pauStack_180 != (undefined1 (*) [16])0x0) {
      if (pauStack_170 != (undefined1 (*) [16])0x0) {
        auVar65 = *pauStack_188;
        pauVar50 = pauStack_188 + 1;
        uVar64 = ~(uint)(ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar65[0xf] >> 7) << 0xf);
        pauVar59 = pauStack_170;
        pauVar62 = pauStack_188;
        do {
          if ((short)uVar64 == 0) {
            do {
              auVar65 = *pauVar50;
              pauVar62 = pauVar62 + -0x18;
              pauVar50 = pauVar50 + 1;
              uVar64 = (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar64 == 0);
          }
          uVar7 = 0;
          for (uVar8 = uVar64; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar63 = *(ulonglong *)((longlong)pauVar62 + (ulonglong)uVar7 * -0x18 + -0x18);
          if (uVar63 != 0) {
            pub_1406abac0(*(byte **)((longlong)pauVar62 + (ulonglong)uVar7 * -0x18 + -0x10),uVar63,1
                         );
          }
          uVar64 = uVar64 - 1 & uVar64;
          pauVar59 = (undefined1 (*) [16])(pauVar59[-1] + 0xf);
        } while (pauVar59 != (undefined1 (*) [16])0x0);
      }
      uVar63 = (longlong)pauVar51 * 0x18 + 0x27U & 0xfffffffffffffff0;
      puVar48 = pauVar51[1] + uVar63 + 1;
      if (puVar48 != (undefined *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_188 - uVar63),(ulonglong)puVar48,0x10);
      }
    }
    if (cVar41 != '\0') {
      uStack_71 = 0;
      pauVar51 = (undefined1 (*) [16])pdb_140e97000();
      if (pauVar51[6][8] != '\x01') {
        uStack_71 = 0;
        pauVar51 = (undefined1 (*) [16])pdb_142d8ec20(pauVar51,0);
        if (pauVar51 == (undefined1 (*) [16])0x0) {
          uStack_71 = 0;
          pdb_142dc7890(&UNK_143326860);
          goto LAB_140b92b7c;
        }
      }
      if (*(longlong *)*pauVar51 != 0) {
        uStack_71 = 0;
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_140b92b7c;
      }
      *(undefined8 *)*pauVar51 = 0xffffffffffffffff;
      pauStack_80 = pauVar51;
      pdb_140e95370(*pauVar51 + 8,pauStack_c0);
      *(longlong *)*pauStack_80 = *(longlong *)*pauStack_80 + 1;
    }
    pauVar51 = pauStack_1c0;
    if (pauStack_1c0 == (undefined1 (*) [16])0x0) {
      return;
    }
    if (pauStack_1b0 != (undefined1 (*) [16])0x0) {
      auVar65 = *pauStack_1c8;
      pauVar50 = pauStack_1c8 + 1;
      uVar64 = ~(uint)(ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar65[0xf] >> 7) << 0xf);
      pauVar59 = pauStack_1c8;
      pauVar62 = pauStack_1b0;
      do {
        if ((short)uVar64 == 0) {
          do {
            auVar65 = *pauVar50;
            pauVar59 = pauVar59 + -0x18;
            pauVar50 = pauVar50 + 1;
            uVar64 = (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar64 == 0);
        }
        uVar7 = 0;
        for (uVar8 = uVar64; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar63 = *(ulonglong *)((longlong)pauVar59 + (ulonglong)uVar7 * -0x18 + -0x18);
        if (uVar63 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar59 + (ulonglong)uVar7 * -0x18 + -0x10),uVar63,1);
        }
        uVar64 = uVar64 - 1 & uVar64;
        pauVar62 = (undefined1 (*) [16])(pauVar62[-1] + 0xf);
      } while (pauVar62 != (undefined1 (*) [16])0x0);
    }
    goto LAB_140b92549;
  }
  pdb_140cef170(&pauStack_b8);
  ppauVar57 = &pauStack_b8;
  pdb_1417fbe90(&pauStack_3c8);
  pauVar62 = pauStack_3b8;
  pauVar59 = pauStack_3c0;
  pauVar50 = pauStack_3c8;
  cVar39 = UNK_14305e1ff;
  cVar38 = UNK_14305e1fe;
  cVar37 = UNK_14305e1fd;
  cVar36 = UNK_14305e1fc;
  cVar35 = UNK_14305e1fb;
  cVar34 = UNK_14305e1fa;
  cVar33 = UNK_14305e1f9;
  cVar32 = UNK_14305e1f8;
  cVar31 = UNK_14305e1f7;
  cVar30 = UNK_14305e1f6;
  cVar29 = UNK_14305e1f5;
  cVar28 = UNK_14305e1f4;
  cVar27 = UNK_14305e1f3;
  cVar26 = UNK_14305e1f2;
  cVar25 = UNK_14305e1f1;
  cVar24 = DAT_14305e1f0;
  cVar23 = UNK_14305e1ef;
  cVar22 = UNK_14305e1ee;
  cVar21 = UNK_14305e1ed;
  cVar20 = UNK_14305e1ec;
  cVar19 = UNK_14305e1eb;
  cVar18 = UNK_14305e1ea;
  cVar17 = UNK_14305e1e9;
  cVar16 = UNK_14305e1e8;
  cVar15 = UNK_14305e1e7;
  cVar14 = UNK_14305e1e6;
  cVar13 = UNK_14305e1e5;
  cVar12 = UNK_14305e1e4;
  cVar11 = UNK_14305e1e3;
  cVar10 = UNK_14305e1e2;
  cVar9 = UNK_14305e1e1;
  cVar41 = DAT_14305e1e0;
  if (SBORROW8(0,(longlong)pauStack_3c8)) {
    pauVar52 = (undefined1 (*) [16])pdb_142deaf00(pauStack_3c0);
  }
  else {
    pauStack_1e8 = pauStack_3c8;
    pauStack_1e0 = pauStack_3c0;
    pauStack_1d8 = pauStack_3b8;
    if (pauStack_3b8 != (undefined1 (*) [16])0x0) {
      pauVar61 = pauStack_3c0 + (longlong)pauStack_3b8 * 4;
      pauVar52 = pauStack_3c0;
      do {
        pcVar53 = (char *)pdb_14043b7e0(pauVar52 + 1);
        if (((ppauVar57 == (undefined1 (**) [16])0x15) &&
            (auVar65[0] = -(*pcVar53 == cVar24), auVar65[1] = -(pcVar53[1] == cVar25),
            auVar65[2] = -(pcVar53[2] == cVar26), auVar65[3] = -(pcVar53[3] == cVar27),
            auVar65[4] = -(pcVar53[4] == cVar28), auVar65[5] = -(pcVar53[5] == cVar29),
            auVar65[6] = -(pcVar53[6] == cVar30), auVar65[7] = -(pcVar53[7] == cVar31),
            auVar65[8] = -(pcVar53[8] == cVar32), auVar65[9] = -(pcVar53[9] == cVar33),
            auVar65[10] = -(pcVar53[10] == cVar34), auVar65[0xb] = -(pcVar53[0xb] == cVar35),
            auVar65[0xc] = -(pcVar53[0xc] == cVar36), auVar65[0xd] = -(pcVar53[0xd] == cVar37),
            auVar65[0xe] = -(pcVar53[0xe] == cVar38), auVar65[0xf] = -(pcVar53[0xf] == cVar39),
            auVar66[0] = -(pcVar53[5] == cVar41), auVar66[1] = -(pcVar53[6] == cVar9),
            auVar66[2] = -(pcVar53[7] == cVar10), auVar66[3] = -(pcVar53[8] == cVar11),
            auVar66[4] = -(pcVar53[9] == cVar12), auVar66[5] = -(pcVar53[10] == cVar13),
            auVar66[6] = -(pcVar53[0xb] == cVar14), auVar66[7] = -(pcVar53[0xc] == cVar15),
            auVar66[8] = -(pcVar53[0xd] == cVar16), auVar66[9] = -(pcVar53[0xe] == cVar17),
            auVar66[10] = -(pcVar53[0xf] == cVar18), auVar66[0xb] = -(pcVar53[0x10] == cVar19),
            auVar66[0xc] = -(pcVar53[0x11] == cVar20), auVar66[0xd] = -(pcVar53[0x12] == cVar21),
            auVar66[0xe] = -(pcVar53[0x13] == cVar22), auVar66[0xf] = -(pcVar53[0x14] == cVar23),
            auVar66 = auVar66 & auVar65,
            (ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) == 0xffff)) &&
           (*(longlong *)(pauVar52[3] + 8) == 0x25)) {
          ppauVar57 = (undefined1 (**) [16])&DAT_14333e441;
          iVar42 = pub_142e32750(*(undefined8 *)pauVar52[3],&DAT_14333e441,0x25);
          if (iVar42 == 0) {
            pdb_1417fc230(&pauStack_3c8,&pauStack_b8,*(undefined8 *)*pauVar52,
                          *(undefined8 *)(*pauVar52 + 8));
            if (SBORROW8(0,(longlong)pauStack_3c8)) {
              pauVar52 = (undefined1 (*) [16])pdb_142deaf00();
              goto LAB_140b922b5;
            }
            pauStack_190 = pauStack_3c8;
            pauStack_208 = pauStack_3c8;
            pauStack_200 = pauStack_3c0;
            pauStack_1f8 = pauStack_3b8;
            pauStack_90 = pauStack_3b8;
            pauStack_98 = pauStack_3c0 + (longlong)pauStack_3b8 * 5;
            pauStack_d8 = pauStack_3c0;
            pauStack_120 = pauStack_b0;
            pauStack_88 = pauStack_a8;
            pauVar52 = pauStack_3c0;
            if (pauStack_3c0 != pauStack_98) goto LAB_140b92630;
            goto LAB_140b92786;
          }
        }
        pauVar52 = pauVar52 + 4;
      } while (pauVar52 != pauVar61);
    }
    pauVar52 = (undefined1 (*) [16])pdb_142de9270(&UNK_14305e6c4,0x2c);
LAB_140b922b5:
    if (pauVar62 != (undefined1 (*) [16])0x0) {
      pauVar61 = pauVar59 + 3;
      do {
        if (*(ulonglong *)pauVar61[-2] != 0) {
          pub_1406abac0(*(byte **)(pauVar61[-2] + 8),*(ulonglong *)pauVar61[-2],1);
        }
        if (*(ulonglong *)(pauVar61[-1] + 8) != 0) {
          pub_1406abac0(*(byte **)*pauVar61,*(ulonglong *)(pauVar61[-1] + 8),1);
        }
        pauVar61 = pauVar61 + 4;
        pauVar62 = (undefined1 (*) [16])(pauVar62[-1] + 0xf);
      } while (pauVar62 != (undefined1 (*) [16])0x0);
    }
    if (pauVar50 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauVar59,(longlong)pauVar50 << 6,0x10);
    }
  }
  if (pauStack_b8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_b0,(ulonglong)pauStack_b8,1);
  }
  pauStack_b8 = pauVar52;
  if (*_DAT_143ca8e90 != 0) {
    pauStack_110 = (undefined1 (*) [16])pdb_140f36c30;
    pauStack_3c8 = (undefined1 (*) [16])0x0;
    pauStack_3c0 = (undefined1 (*) [16])&UNK_14305e569;
    pauStack_3b8 = (undefined1 (*) [16])0x2d;
    pauStack_3b0 = (undefined1 (*) [16])0x0;
    pauStack_3a8 = (undefined1 (*) [16])&UNK_14305e52f;
    pauStack_3a0 = (undefined1 (*) [16])0x39;
    uStack_398 = 1;
    pauStack_390 = (undefined1 (*) [16])&UNK_14305e569;
    pauStack_388 = (undefined1 (*) [16])0x2d;
    pauStack_380 = (undefined1 (*) [16])0x6600000001;
    puStack_378 = &UNK_14305e648;
    ppauStack_370 = &pauStack_118;
    pauStack_118 = (undefined1 (*) [16])&pauStack_b8;
    pdb_140f332f0(&uStack_74,&pauStack_3c8);
  }
  pdb_140f36c40(&pauStack_b8);
  goto LAB_140b9202c;
LAB_140b92b8f:
  uVar55 = 1;
  pauVar45 = pauStack_98;
LAB_140b925a5:
  pauStack_88 = pauVar44;
  pdb_142dc7e2a(uVar55,pauVar45);
  goto LAB_140b92b7c;
  while( true ) {
    pauStack_d0 = pauVar52 + 5;
    if (pauVar61 == (undefined1 (*) [16])0x0) {
      pauVar54 = (undefined1 (*) [16])0x1;
    }
    else {
      uVar5 = *(undefined8 *)(pauVar52[1] + 8);
      pdb_14007ee60();
      pauVar54 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar61,1);
      uVar55 = 1;
      if (pauVar54 == (undefined1 (*) [16])0x0) goto LAB_140b927d0;
      pub_142e32760(pauVar54,uVar5,pauVar61);
    }
    pauVar52 = pauStack_80;
    pauStack_100 = pauStack_3b0;
    pauStack_3c8 = pauVar61;
    pauStack_3c0 = pauVar54;
    pauStack_3b8 = pauVar61;
    pauStack_118 = pauVar61;
    pauStack_110 = pauVar54;
    pauStack_108 = pauVar61;
    pdb_140a2dcf0(pauStack_128,&pauStack_118);
    uVar55 = pdb_1400afac0(&pauStack_168,pauVar52);
    pdb_140269400(&pauStack_3c8,&pauStack_188,uVar55,pauVar52);
    if ((!SBORROW8(0,(longlong)pauStack_3c8)) && (pauStack_3c8 != (undefined1 (*) [16])0x0)) {
      pub_1406abac0((byte *)pauStack_3c0,(ulonglong)pauStack_3c8,1);
    }
    pauVar52 = pauStack_d0;
    if (pauStack_d0 == pauStack_98) break;
LAB_140b92630:
    pauStack_3b0 = (undefined1 (*) [16])
                   pdb_140b8f650(pauVar51 + 1,pauStack_120,pauStack_88,
                                 *(undefined8 *)(pauVar52[1] + 8),*(undefined8 *)pauVar52[2],
                                 *(undefined8 *)*pauVar52,*(undefined8 *)(*pauVar52 + 8));
    pauStack_80 = pauVar52 + 1;
    pauStack_3c8 = (undefined1 (*) [16])0x8000000000000000;
    pauVar61 = *(undefined1 (**) [16])pauVar52[2];
    if ((longlong)pauVar61 < 0) {
      uVar55 = 0;
LAB_140b927d0:
      pdb_142dc7e2a(uVar55,pauVar61);
      goto LAB_140b92b7c;
    }
  }
LAB_140b92786:
  if (pauStack_90 != (undefined1 (*) [16])0x0) {
    puVar49 = (undefined8 *)(pauStack_d8[1] + 8);
    pauVar52 = pauStack_90;
    do {
      if (puVar49[-1] != 0) {
        pub_1406abac0((byte *)*puVar49,puVar49[-1],1);
      }
      puVar49 = puVar49 + 10;
      pauVar52 = (undefined1 (*) [16])(pauVar52[-1] + 0xf);
    } while (pauVar52 != (undefined1 (*) [16])0x0);
  }
  if (pauStack_190 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_d8,(longlong)pauStack_190 * 0x50,0x10);
  }
  pauVar52 = pauVar59 + 3;
  do {
    if (*(ulonglong *)pauVar52[-2] != 0) {
      pub_1406abac0(*(byte **)(pauVar52[-2] + 8),*(ulonglong *)pauVar52[-2],1);
    }
    if (*(ulonglong *)(pauVar52[-1] + 8) != 0) {
      pub_1406abac0(*(byte **)*pauVar52,*(ulonglong *)(pauVar52[-1] + 8),1);
    }
    pauVar52 = pauVar52 + 4;
    pauVar62 = (undefined1 (*) [16])(pauVar62[-1] + 0xf);
  } while (pauVar62 != (undefined1 (*) [16])0x0);
  if (pauVar50 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauVar59,(longlong)pauVar50 << 6,0x10);
  }
  pauVar50 = pauStack_b8;
  if (pauStack_b8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_120,(ulonglong)pauStack_b8,1);
  }
  uVar56 = SUB84(pauVar50,0);
  pauStack_208 = pauStack_90;
  if (2 < *_DAT_143ca8e90) {
    pauStack_b8 = (undefined1 (*) [16])pdb_140f3cb70(&uStack_400);
    pauStack_b0 = (undefined1 (*) [16])CONCAT44(pauStack_b0._4_4_,uVar56);
    pauStack_3c8 = (undefined1 (*) [16])&pauStack_208;
    pauStack_3c0 = (undefined1 (*) [16])pdb_140f72a40;
    pauStack_3b8 = (undefined1 (*) [16])&pauStack_3d0;
    pauStack_3b0 = (undefined1 (*) [16])pdb_140f72a40;
    pauStack_3a8 = (undefined1 (*) [16])&pauStack_b8;
    pauStack_3a0 = (undefined1 (*) [16])pdb_140f72840;
    pauStack_118 = (undefined1 (*) [16])&UNK_14305e569;
    pauStack_110 = (undefined1 (*) [16])0x2d;
    pauStack_108 = (undefined1 (*) [16])&UNK_14305e569;
    pauStack_100 = (undefined1 (*) [16])0x2d;
    pauStack_f8 = (undefined1 (*) [16])&UNK_14305e630;
    pdb_1400c9be0(&UNK_14305e5f9,&pauStack_3c8,3,&pauStack_118);
  }
LAB_140b9202c:
  cVar41 = (char)pauStack_c8;
  if (pauStack_170 != (undefined1 (*) [16])0x0) {
    if (2 < *_DAT_143ca8e90) {
      pauStack_b8 = pauStack_170;
      pauStack_110 = (undefined1 (*) [16])pdb_140f72a40;
      pauStack_3c8 = (undefined1 (*) [16])0x0;
      pauStack_3c0 = (undefined1 (*) [16])&UNK_14305e569;
      pauStack_3b8 = (undefined1 (*) [16])0x2d;
      pauStack_3b0 = (undefined1 (*) [16])0x0;
      pauStack_3a8 = (undefined1 (*) [16])&UNK_14305e52f;
      pauStack_3a0 = (undefined1 (*) [16])0x39;
      uStack_398 = 3;
      pauStack_390 = (undefined1 (*) [16])&UNK_14305e569;
      pauStack_388 = (undefined1 (*) [16])0x2d;
      pauStack_380 = (undefined1 (*) [16])0x6900000001;
      puStack_378 = &UNK_14305e671;
      ppauStack_370 = &pauStack_118;
      pauStack_118 = (undefined1 (*) [16])&pauStack_b8;
      pdb_140f332f0(&uStack_74,&pauStack_3c8);
    }
    pdb_140aa0880(&pauStack_3c8,pauVar51 + 1,pauStack_128,&pauStack_188);
    pauVar51 = pauStack_3c0;
    if (pauStack_3c0 != (undefined1 (*) [16])0x0) {
      if (pauStack_3b0 != (undefined1 (*) [16])0x0) {
        auVar65 = *pauStack_3c8;
        pauVar50 = pauStack_3c8 + 1;
        uVar64 = ~(uint)(ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar65[0xf] >> 7) << 0xf);
        pauVar59 = pauStack_3b0;
        pauVar62 = pauStack_3c8;
        do {
          if ((short)uVar64 == 0) {
            do {
              auVar65 = *pauVar50;
              pauVar62 = pauVar62 + -0x18;
              pauVar50 = pauVar50 + 1;
              uVar64 = (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar64 == 0);
          }
          uVar7 = 0;
          for (uVar8 = uVar64; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar63 = *(ulonglong *)((longlong)pauVar62 + (ulonglong)uVar7 * -0x18 + -0x18);
          if (uVar63 != 0) {
            pub_1406abac0(*(byte **)((longlong)pauVar62 + (ulonglong)uVar7 * -0x18 + -0x10),uVar63,1
                         );
          }
          uVar64 = uVar64 - 1 & uVar64;
          pauVar59 = (undefined1 (*) [16])(pauVar59[-1] + 0xf);
        } while (pauVar59 != (undefined1 (*) [16])0x0);
      }
      uVar63 = (longlong)pauVar51 * 0x18 + 0x27U & 0xfffffffffffffff0;
      puVar48 = pauVar51[1] + uVar63 + 1;
      if (puVar48 != (undefined *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_3c8 - uVar63),(ulonglong)puVar48,0x10);
      }
    }
    cVar41 = (char)pauStack_c8;
  }
  pauVar51 = pauStack_180;
  if (pauStack_180 != (undefined1 (*) [16])0x0) {
    if (pauStack_170 != (undefined1 (*) [16])0x0) {
      auVar65 = *pauStack_188;
      pauVar50 = pauStack_188 + 1;
      uVar64 = ~(uint)(ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar65[0xf] >> 7) << 0xf);
      pauVar59 = pauStack_170;
      pauVar62 = pauStack_188;
      do {
        if ((short)uVar64 == 0) {
          do {
            auVar65 = *pauVar50;
            pauVar62 = pauVar62 + -0x18;
            pauVar50 = pauVar50 + 1;
            uVar64 = (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar64 == 0);
        }
        uVar7 = 0;
        for (uVar8 = uVar64; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar63 = *(ulonglong *)((longlong)pauVar62 + (ulonglong)uVar7 * -0x18 + -0x18);
        if (uVar63 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar62 + (ulonglong)uVar7 * -0x18 + -0x10),uVar63,1);
        }
        uVar64 = uVar64 - 1 & uVar64;
        pauVar59 = (undefined1 (*) [16])(pauVar59[-1] + 0xf);
      } while (pauVar59 != (undefined1 (*) [16])0x0);
    }
    uVar63 = (longlong)pauVar51 * 0x18 + 0x27U & 0xfffffffffffffff0;
    puVar48 = pauVar51[1] + uVar63 + 1;
    if (puVar48 != (undefined *)0x0) {
      pub_1406abac0((byte *)((longlong)pauStack_188 - uVar63),(ulonglong)puVar48,0x10);
    }
  }
  if (cVar41 != '\0') {
    uStack_71 = 0;
    pauVar51 = (undefined1 (*) [16])pdb_140e97000();
    if (pauVar51[6][8] != '\x01') {
      uStack_71 = 0;
      pauVar51 = (undefined1 (*) [16])pdb_142d8ec20(pauVar51,0);
      if (pauVar51 == (undefined1 (*) [16])0x0) {
        uStack_71 = 0;
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140b92b7c;
      }
    }
    if (*(longlong *)*pauVar51 != 0) {
      uStack_71 = 0;
      pdb_142dc8090(&UNK_143326a50);
LAB_140b92b7c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(undefined8 *)*pauVar51 = 0xffffffffffffffff;
    pauStack_80 = pauVar51;
    pdb_140e95370(*pauVar51 + 8,pauStack_c0);
    *(longlong *)*pauStack_80 = *(longlong *)*pauStack_80 + 1;
  }
  pauVar51 = pauStack_1c0;
  if (pauStack_1c0 == (undefined1 (*) [16])0x0) {
    return;
  }
  if (pauStack_1b0 != (undefined1 (*) [16])0x0) {
    auVar65 = *pauStack_1c8;
    pauVar50 = pauStack_1c8 + 1;
    uVar64 = ~(uint)(ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar65[0xf] >> 7) << 0xf);
    pauVar59 = pauStack_1c8;
    pauVar62 = pauStack_1b0;
    do {
      if ((short)uVar64 == 0) {
        do {
          auVar65 = *pauVar50;
          pauVar59 = pauVar59 + -0x18;
          pauVar50 = pauVar50 + 1;
          uVar64 = (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar64 == 0);
      }
      uVar7 = 0;
      for (uVar8 = uVar64; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar63 = *(ulonglong *)((longlong)pauVar59 + (ulonglong)uVar7 * -0x18 + -0x18);
      if (uVar63 != 0) {
        pub_1406abac0(*(byte **)((longlong)pauVar59 + (ulonglong)uVar7 * -0x18 + -0x10),uVar63,1);
      }
      uVar64 = uVar64 - 1 & uVar64;
      pauVar62 = (undefined1 (*) [16])(pauVar62[-1] + 0xf);
    } while (pauVar62 != (undefined1 (*) [16])0x0);
  }
LAB_140b92549:
  uVar63 = (longlong)pauVar51 * 0x18 + 0x27U & 0xfffffffffffffff0;
  if (pauVar51[1] + uVar63 + 1 != (undefined *)0x0) {
    pub_1406abac0((byte *)((longlong)pauStack_1c8 - uVar63),(ulonglong)(pauVar51[1] + uVar63 + 1),
                  0x10);
  }
  return;
}

