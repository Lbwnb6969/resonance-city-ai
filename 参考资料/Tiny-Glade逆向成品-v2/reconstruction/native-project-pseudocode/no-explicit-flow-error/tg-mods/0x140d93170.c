// VA 0x140d93170, PDB extent 5578 bytes
// tg_mods::overlay::add_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::add_mods
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 5578 */

undefined4 * pdb_140d93170(undefined4 *param_1,longlong *param_2)

{
  code **ppcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  char cVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  ulonglong uStack_390;
  byte *pbStack_388;
  code **ppcStack_2e8;
  code *pcStack_2e0;
  code *pcStack_2d8;
  code *pcStack_2d0;
  ulonglong *puStack_2c8;
  code *pcStack_2c0;
  code ***pppcStack_2b8;
  code *pcStack_2b0;
  longlong lStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_288 [80];
  undefined4 *puStack_238;
  longlong lStack_230;
  longlong *plStack_228;
  ulonglong *puStack_220;
  ulonglong *puStack_218;
  longlong lStack_210;
  ulonglong *puStack_208;
  code **ppcStack_200;
  longlong lStack_1f8;
  code **ppcStack_1f0;
  code **ppcStack_1e8;
  code *pcStack_1e0;
  code ***pppcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  code ***pppcStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  code ***pppcStack_190;
  code **ppcStack_138;
  code *pcStack_130;
  byte bStack_128;
  undefined7 uStack_127;
  code *pcStack_120;
  code **ppcStack_118;
  code *pcStack_110;
  code ***pppcStack_108;
  char cStack_100;
  char cStack_ff;
  undefined6 uStack_fe;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code ***pppcStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code **ppcStack_b8;
  code *pcStack_b0;
  code ***pppcStack_a8;
  code *pcStack_a0;
  code **ppcStack_98;
  code *pcStack_90;
  code ***pppcStack_88;
  code *pcStack_80;
  code ***pppcStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulonglong *puStack_60;
  longlong lStack_58;
  undefined1 auStack_4b [11];
  
  auStack_4b._3_8_ = 0xfffffffffffffffe;
  LOCK();
  bVar16 = _DAT_143ca48a0 == 0;
  if (bVar16) {
    _DAT_143ca48a0 = 8;
  }
  UNLOCK();
  plStack_228 = param_2;
  if (!bVar16) {
    auStack_4b[1] = 1;
    pdb_142dbc1f0(&DAT_143ca48a0,param_2,1000000000);
  }
  auStack_4b[1] = 1;
  pdb_140e9a150(&DAT_143ca48a0);
  auStack_4b[1] = 1;
  pdb_140e9a150(0x143ca48a1);
  lStack_210 = *plStack_228;
  puStack_220 = (ulonglong *)plStack_228[1];
  ppcStack_200 = (code **)0x0;
  lStack_1f8 = 8;
  ppcStack_1f0 = (code **)0x0;
  puStack_208 = puStack_220 + plStack_228[2] * 0x16;
  puVar12 = puStack_220;
  puStack_238 = param_1;
  puStack_218 = puStack_220;
LAB_140d9328b:
  do {
    puVar11 = puStack_218;
    if (puVar12 == puStack_208) {
LAB_140d93dc4:
      lStack_230 = ((ulonglong)((longlong)puStack_208 - (longlong)puVar11) >> 4) *
                   0x2e8ba2e8ba2e8ba3;
      lStack_58 = 0;
      puStack_60 = puVar11;
      while (lStack_230 != lStack_58) {
        lStack_58 = lStack_58 + 1;
        pdb_1404b3c90(puVar11);
        puVar11 = puVar11 + 0x16;
      }
      if (lStack_210 != 0) {
        pub_1406abac0((byte *)puStack_220,lStack_210 * 0xb0,8);
      }
      ppcStack_1e8 = (code **)auStack_4b;
      if (1 < _DAT_143ca48c8) {
        if (_DAT_143ca48c8 < 0x15) {
          pdb_141dabf70(_DAT_143ca48c0,_DAT_143ca48c8,1,&ppcStack_1e8);
        }
        else {
          pdb_141920290(_DAT_143ca48c0,_DAT_143ca48c8,&ppcStack_1e8);
        }
      }
      uStack_f8 = ppcStack_200;
      uStack_f0 = (code *)lStack_1f8;
      pppcStack_e8 = (code ***)ppcStack_1f0;
      lVar14 = (longlong)ppcStack_1f0 * 0xb0 + lStack_1f8;
      lVar13 = lStack_1f8;
      while (lVar15 = lVar13, puVar8 = puStack_238, lVar15 != lVar14) {
        lVar13 = lVar15 + 0xb0;
        if (2 < *_DAT_143ca8e90) {
          pdb_141b1e240(&uStack_390,*(undefined8 *)(lVar15 + 0x48),*(undefined8 *)(lVar15 + 0x50),2)
          ;
          pdb_140d93010(&ppcStack_b8,lVar15 + 0x60);
          ppcStack_2e8 = (code **)(lVar15 + 0x28);
          pcStack_2d8 = (code *)(lVar15 + 0x10);
          pcStack_2e0 = pdb_140094770;
          pcStack_2d0 = pdb_141351190;
          pcStack_2c0 = pdb_140f58250;
          pcStack_2b0 = pdb_140001020;
          pcStack_2a0 = pdb_140d8a970;
          ppcStack_1e8 = (code **)0x0;
          pcStack_1e0 = (code *)&UNK_1431e5105;
          pppcStack_1d8 = (code ***)0x10;
          uStack_1d0 = (code *)0x0;
          uStack_1c8 = (code **)&UNK_1431e50e7;
          uStack_1c0 = (code *)0x1d;
          uStack_1b8 = (code ***)0x3;
          uStack_1b0 = (code *)&UNK_1431e5105;
          pppcStack_1a8 = (code ***)0x10;
          pcStack_1a0 = (code *)0xe500000001;
          puStack_198 = &UNK_1431e54ed;
          pppcStack_190 = &ppcStack_2e8;
          puStack_2c8 = &uStack_390;
          pppcStack_2b8 = &ppcStack_b8;
          lStack_2a8 = lVar15;
          pdb_140f332f0(auStack_4b,&ppcStack_1e8);
          if (ppcStack_b8 != (code **)0x0) {
            pub_1406abac0((byte *)pcStack_b0,(ulonglong)ppcStack_b8,1);
          }
          if (uStack_390 != 0) {
            pub_1406abac0(pbStack_388,uStack_390,1);
          }
        }
      }
      *(code ****)(puStack_238 + 4) = pppcStack_e8;
      *puStack_238 = (undefined4)uStack_f8;
      puStack_238[1] = uStack_f8._4_4_;
      puStack_238[2] = (undefined4)uStack_f0;
      puStack_238[3] = uStack_f0._4_4_;
      auStack_4b[1] = 0;
      pdb_140e9a350(&DAT_143ca48a0);
      auStack_4b[1] = 0;
      pdb_140e9a350();
      LOCK();
      bVar16 = _DAT_143ca48a0 == 8;
      if (bVar16) {
        _DAT_143ca48a0 = 0;
      }
      UNLOCK();
      if (!bVar16) {
        auStack_4b[1] = 0;
        pdb_142dbca40(&DAT_143ca48a0,0);
      }
      return puVar8;
    }
    puVar11 = puVar12 + 0x16;
    ppcVar1 = (code **)*puVar12;
    puStack_218 = puVar11;
    pub_142e32760(&uStack_390,puVar12 + 1,0xa8);
    if (ppcVar1 == (code **)0x2) goto LAB_140d93dc4;
    ppcStack_2e8 = ppcVar1;
    puStack_60 = puVar11;
    pub_142e32760(&pcStack_2e0,&uStack_390,0xa8);
    puVar12 = puStack_2c8;
    pcVar5 = pcStack_2d0;
    lVar13 = _DAT_143ca48c0;
    if (_DAT_143ca48c8 != 0) {
      lVar15 = _DAT_143ca48c8 * 0xb0;
      lVar14 = 0;
      do {
        if ((*(ulonglong **)(lVar13 + 0x20 + lVar14) == puVar12) &&
           (iVar10 = pub_142e32750(*(undefined8 *)(lVar13 + 0x18 + lVar14),pcVar5,puVar12),
           uVar7 = uStack_298, pcVar6 = pcStack_2a0, iVar10 == 0)) {
          if (*(int *)(lVar13 + lVar14) == 1) {
            if (((ulonglong)ppcVar1 & 1) != 0) {
              ppcStack_138 = (code **)(lVar13 + lVar14 + 8);
              uStack_f8 = &pcStack_2e0;
              if (*ppcStack_138 != pcStack_2e0) {
                if (*_DAT_143ca8e90 != 0) {
                  ppcStack_b8 = &pcStack_2c0;
                  pcStack_b0 = pdb_140094770;
                  pppcStack_a8 = (code ***)&uStack_f8;
                  pcStack_a0 = pdb_1403d7700;
                  ppcStack_98 = &pcStack_2d8;
                  pcStack_90 = pdb_140d8a930;
                  pppcStack_88 = &ppcStack_138;
                  pcStack_80 = pdb_1403d7700;
                  ppcStack_1e8 = (code **)0x0;
                  pcStack_1e0 = (code *)&UNK_1431e5105;
                  pppcStack_1d8 = (code ***)0x10;
                  uStack_1d0 = (code *)0x0;
                  uStack_1c8 = (code **)&UNK_1431e50e7;
                  uStack_1c0 = (code *)0x1d;
                  uStack_1b8 = (code ***)0x1;
                  uStack_1b0 = (code *)&UNK_1431e5105;
                  pppcStack_1a8 = (code ***)0x10;
                  pcStack_1a0 = (code *)0x14e00000001;
                  puStack_198 = &UNK_1431e51c8;
                  pppcStack_190 = &ppcStack_b8;
                  auStack_4b[2] = 1;
                  pdb_140f332f0(auStack_4b,&ppcStack_1e8);
                }
                goto LAB_140d936ee;
              }
            }
          }
          else {
            if (((ulonglong)ppcVar1 & 1) != 0) {
              if (2 < *_DAT_143ca8e90) {
                auStack_4b[2] = 1;
                pdb_141b1e240(&ppcStack_138,pcStack_2a0,uStack_298,2);
                pdb_141b1e240(&uStack_f8,*(undefined8 *)(lVar13 + 0x48 + lVar14),
                              *(undefined8 *)(lVar13 + 0x50 + lVar14),2);
                ppcStack_b8 = &pcStack_2c0;
                pcStack_b0 = pdb_140094770;
                pppcStack_a8 = &ppcStack_138;
                pcStack_a0 = pdb_140f58250;
                ppcStack_98 = &pcStack_2d8;
                pcStack_90 = pdb_140d8a930;
                pcStack_80 = pdb_140f58250;
                ppcStack_1e8 = (code **)0x0;
                pcStack_1e0 = (code *)&UNK_1431e5105;
                pppcStack_1d8 = (code ***)0x10;
                uStack_1d0 = (code *)0x0;
                uStack_1c8 = (code **)&UNK_1431e50e7;
                uStack_1c0 = (code *)0x1d;
                uStack_1b8 = (code ***)0x3;
                uStack_1b0 = (code *)&UNK_1431e5105;
                pppcStack_1a8 = (code ***)0x10;
                pcStack_1a0 = (code *)0x13400000001;
                puStack_198 = &UNK_1431e5173;
                pppcStack_190 = &ppcStack_b8;
                pppcStack_88 = (code ***)&uStack_f8;
                pdb_140f332f0(auStack_4b,&ppcStack_1e8);
LAB_140d936b1:
                if (uStack_f8 != (code **)0x0) {
                  pub_1406abac0((byte *)uStack_f0,(ulonglong)uStack_f8,1);
                }
                if (ppcStack_138 != (code **)0x0) {
                  pub_1406abac0((byte *)pcStack_130,(ulonglong)ppcStack_138,1);
                }
              }
LAB_140d936ee:
              pdb_1404b3c90(&ppcStack_2e8);
              puVar12 = puStack_60;
              goto LAB_140d9328b;
            }
            uVar2 = *(undefined8 *)(lVar13 + 0x48 + lVar14);
            uVar3 = *(undefined8 *)(lVar13 + 0x50 + lVar14);
            auStack_4b[2] = 1;
            pdb_140f3ddd0(&ppcStack_138,uVar2,uVar3);
            auStack_4b[2] = 1;
            pdb_140f3ddd0(&uStack_f8,pcVar6,uVar7);
            if ((((pcStack_130 != uStack_f0) || (cStack_100 != (char)uStack_c0)) ||
                (cStack_ff != '\x02')) ||
               (((uStack_c0._1_1_ != '\x02' || ((byte)pppcStack_e8 < 3 != bStack_128 < 3)) ||
                (iVar10 = pub_142e32750(ppcStack_138,uStack_f8), iVar10 != 0)))) {
              pppcStack_a8 = (code ***)CONCAT71(uStack_127,bStack_128);
              pcStack_80 = (code *)CONCAT62(uStack_fe,CONCAT11(cStack_ff,cStack_100));
              pppcStack_88 = pppcStack_108;
              ppcStack_98 = ppcStack_118;
              pcStack_90 = pcStack_110;
              pcStack_a0 = pcStack_120;
              ppcStack_b8 = ppcStack_138;
              pcStack_b0 = pcStack_130;
              uStack_1b8 = (code ***)CONCAT44(uStack_c4,uStack_c8);
              uStack_1b0 = (code *)CONCAT44(uStack_bc,uStack_c0);
              uStack_1c8 = (code **)CONCAT44(uStack_d4,uStack_d8);
              uStack_1c0 = (code *)CONCAT44(uStack_cc,uStack_d0);
              pppcStack_1d8 = pppcStack_e8;
              uStack_1d0 = (code *)CONCAT44(uStack_dc,uStack_e0);
              ppcStack_1e8 = uStack_f8;
              pcStack_1e0 = uStack_f0;
              auStack_4b[2] = 1;
              cVar9 = pdb_141daa020(&ppcStack_b8,&ppcStack_1e8);
              if (cVar9 == '\0') {
                auStack_4b[2] = 1;
                pdb_140f4f620(&ppcStack_1e8,uVar2,uVar3);
                if ((int)ppcStack_1e8 == 2) {
                  ppcStack_b8 = (code **)0x2;
                }
                else {
                  ppcStack_b8 = ppcStack_1e8;
                  pcStack_b0 = pcStack_1e0;
                  puStack_68 = puStack_198;
                  pppcStack_78 = pppcStack_1a8;
                  pcStack_70 = pcStack_1a0;
                  pppcStack_88 = uStack_1b8;
                  pcStack_80 = uStack_1b0;
                  ppcStack_98 = uStack_1c8;
                  pcStack_90 = uStack_1c0;
                  pppcStack_a8 = pppcStack_1d8;
                  pcStack_a0 = uStack_1d0;
                  if (ppcStack_1e8 != (code **)0x2) {
                    if (*_DAT_143ca8e90 != 0) {
                      auStack_4b[2] = 1;
                      pdb_141b1e240(&ppcStack_138,pcVar6,uVar7,2);
                      pdb_141b1e240(&uStack_f8,uVar2,uVar3,2);
                      ppcStack_b8 = &pcStack_2c0;
                      pcStack_b0 = pdb_140094770;
                      pppcStack_a8 = &ppcStack_138;
                      pcStack_a0 = pdb_140f58250;
                      ppcStack_98 = &pcStack_2d8;
                      pcStack_90 = pdb_140d8a930;
                      pcStack_80 = pdb_140f58250;
                      ppcStack_1e8 = (code **)0x0;
                      pcStack_1e0 = (code *)&UNK_1431e5105;
                      pppcStack_1d8 = (code ***)0x10;
                      uStack_1d0 = (code *)0x0;
                      uStack_1c8 = (code **)&UNK_1431e50e7;
                      uStack_1c0 = (code *)0x1d;
                      uStack_1b8 = (code ***)0x1;
                      uStack_1b0 = (code *)&UNK_1431e5105;
                      pppcStack_1a8 = (code ***)0x10;
                      pcStack_1a0 = (code *)0x14100000001;
                      puStack_198 = &UNK_1431e5115;
                      pppcStack_190 = &ppcStack_b8;
                      pppcStack_88 = (code ***)&uStack_f8;
                      pdb_140f332f0(auStack_4b,&ppcStack_1e8);
                      goto LAB_140d936b1;
                    }
                    goto LAB_140d936ee;
                  }
                }
                pcStack_b0 = pcStack_1e0;
                auStack_4b[2] = 1;
                pdb_1404b38e0(&pcStack_b0);
              }
            }
          }
          if ((*(code **)(lVar13 + 0x38 + lVar14) == pcStack_2b0) &&
             (iVar10 = pub_142e32750(*(undefined8 *)(lVar13 + 0x30 + lVar14),pppcStack_2b8),
             uVar7 = uStack_298, pcVar5 = pcStack_2a0, iVar10 == 0)) {
            auStack_4b[2] = 1;
            pdb_140f3ddd0(&ppcStack_138,*(undefined8 *)(lVar13 + 0x48 + lVar14),
                          *(undefined8 *)(lVar13 + 0x50 + lVar14));
            auStack_4b[2] = 1;
            pdb_140f3ddd0(&uStack_f8,pcVar5,uVar7);
            if ((pcStack_130 != uStack_f0) ||
               ((((cStack_100 != (char)uStack_c0 || (cStack_ff != '\x02')) ||
                 (uStack_c0._1_1_ != '\x02')) ||
                (((byte)pppcStack_e8 < 3 != bStack_128 < 3 ||
                 (iVar10 = pub_142e32750(ppcStack_138,uStack_f8), iVar10 != 0)))))) {
              pppcStack_a8 = (code ***)CONCAT71(uStack_127,bStack_128);
              pcStack_80 = (code *)CONCAT62(uStack_fe,CONCAT11(cStack_ff,cStack_100));
              pppcStack_88 = pppcStack_108;
              ppcStack_98 = ppcStack_118;
              pcStack_90 = pcStack_110;
              pcStack_a0 = pcStack_120;
              ppcStack_b8 = ppcStack_138;
              pcStack_b0 = pcStack_130;
              uStack_1b8 = (code ***)CONCAT44(uStack_c4,uStack_c8);
              uStack_1b0 = (code *)CONCAT44(uStack_bc,uStack_c0);
              uStack_1c8 = (code **)CONCAT44(uStack_d4,uStack_d8);
              uStack_1c0 = (code *)CONCAT44(uStack_cc,uStack_d0);
              pppcStack_1d8 = pppcStack_e8;
              uStack_1d0 = (code *)CONCAT44(uStack_dc,uStack_e0);
              ppcStack_1e8 = uStack_f8;
              pcStack_1e0 = uStack_f0;
              auStack_4b[2] = 1;
              cVar9 = pdb_141daa020(&ppcStack_b8,&ppcStack_1e8);
              if (cVar9 == '\0') goto LAB_140d93a75;
            }
          }
          else {
LAB_140d93a75:
            if (2 < *_DAT_143ca8e90) {
              auStack_4b[2] = 1;
              pdb_141b1e240(&uStack_f8,pcStack_2a0,uStack_298,2);
              pdb_140d93010(&ppcStack_138,auStack_288);
              ppcStack_b8 = (code **)(lVar13 + lVar14 + 0x28);
              pppcStack_a8 = (code ***)(lVar13 + 0x10 + lVar14);
              pcStack_b0 = pdb_140094770;
              pcStack_a0 = pdb_141351190;
              ppcStack_98 = &pcStack_2c0;
              pcStack_90 = pdb_140094770;
              pppcStack_88 = (code ***)&uStack_f8;
              pcStack_80 = pdb_140f58250;
              pcStack_70 = pdb_140001020;
              ppcStack_1e8 = (code **)0x0;
              pcStack_1e0 = (code *)&UNK_1431e5105;
              pppcStack_1d8 = (code ***)0x10;
              uStack_1d0 = (code *)0x0;
              uStack_1c8 = (code **)&UNK_1431e50e7;
              uStack_1c0 = (code *)0x1d;
              uStack_1b8 = (code ***)0x3;
              uStack_1b0 = (code *)&UNK_1431e5105;
              pppcStack_1a8 = (code ***)0x10;
              pcStack_1a0 = (code *)0x10c00000001;
              puStack_198 = &UNK_1431e54b8;
              pppcStack_190 = &ppcStack_b8;
              pppcStack_78 = &ppcStack_138;
              pdb_140f332f0(auStack_4b,&ppcStack_1e8);
              if (ppcStack_138 != (code **)0x0) {
                pub_1406abac0((byte *)pcStack_130,(ulonglong)ppcStack_138,1);
              }
              if (uStack_f8 != (code **)0x0) {
                pub_1406abac0((byte *)uStack_f0,(ulonglong)uStack_f8,1);
              }
            }
          }
          lStack_58 = lVar13 + lVar14;
          pub_142e32760(&ppcStack_1e8,&ppcStack_2e8,0xb0);
          pdb_1404b3c90(lVar13 + lVar14);
          pub_142e32760(lStack_58,&ppcStack_1e8,0xb0);
          puVar12 = puStack_60;
          goto LAB_140d9328b;
        }
        lVar14 = lVar14 + 0xb0;
      } while (lVar15 - lVar14 != 0);
    }
    auStack_4b[2] = 1;
    pdb_140d8a580(&ppcStack_1e8,&ppcStack_2e8);
    uVar4 = _DAT_143ca48c8;
    if (_DAT_143ca48c8 == _DAT_143ca48b8) {
      pdb_142d91cc0(&DAT_143ca48b8);
    }
    pub_142e32760(uVar4 * 0xb0 + _DAT_143ca48c0,&ppcStack_1e8,0xb0);
    _DAT_143ca48c8 = uVar4 + 1;
    pub_142e32760(&ppcStack_1e8,&ppcStack_2e8,0xb0);
    ppcVar1 = ppcStack_1f0;
    if (ppcStack_1f0 == ppcStack_200) {
      pdb_142d91cc0(&ppcStack_200);
    }
    pub_142e32760((longlong)ppcVar1 * 0xb0 + lStack_1f8,&ppcStack_1e8,0xb0);
    ppcStack_1f0 = (code **)((longlong)ppcVar1 + 1);
    puVar12 = puStack_60;
  } while( true );
}

