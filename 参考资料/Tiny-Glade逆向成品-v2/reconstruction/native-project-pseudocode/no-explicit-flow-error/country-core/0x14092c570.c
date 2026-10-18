// VA 0x14092c570, PDB extent 1959 bytes
// country_core::systems::save::required_clutter::warn_missing_mods_on_load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/required_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::required_clutter::warn_missing_mods_on_load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/required_clutter.rs
   Extent: 1959 */

void pdb_14092c570(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  code *pcVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  char *pcVar18;
  undefined1 *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined8 *puStack_138;
  longlong lStack_130;
  longlong lStack_128;
  undefined1 (*pauStack_120) [16];
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  undefined8 *puStack_108;
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 ***pppuStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong *plStack_78;
  byte *pbStack_70;
  undefined1 **ppuStack_68;
  code *pcStack_60;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  param_1 = (undefined8 *)*param_1;
  uStack_88 = *param_2;
  pauStack_100 = (undefined1 (*) [16])*param_1;
  puStack_f0 = *pauStack_100 + param_1[1] + 1;
  auVar2 = *pauStack_100;
  pauStack_f8 = pauStack_100 + 1;
  lStack_e0 = param_1[3];
  puStack_108 = param_1 + 0x12;
  if (param_1[0x12] == 0) {
    puStack_108 = (undefined8 *)0x0;
  }
  puStack_118 = param_1 + 0x24;
  if (param_1[0x24] == 0) {
    puStack_118 = (undefined8 *)0x0;
  }
  pauStack_120 = (undefined1 (*) [16])0x1;
  puStack_110 = (undefined1 *)0x1;
  puStack_e8 = (undefined8 *)
               CONCAT62(puStack_e8._2_6_,
                        ~((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar2[0xf] >> 7) << 0xf));
  uStack_d8 = 0;
  uStack_b0 = 0;
  pdb_14091be00(&puStack_140,&pauStack_120);
  if (lStack_130 != 0) {
    pauStack_120 = (undefined1 (*) [16])(ulonglong)(puStack_140 != (undefined1 *)0x0);
    lStack_e0 = lStack_130;
    if (puStack_140 == (undefined1 *)0x0) {
      lStack_e0 = 0;
    }
    puStack_118 = (undefined8 *)0x0;
    puStack_110 = puStack_140;
    puStack_108 = puStack_138;
    pauStack_f8 = (undefined1 (*) [16])0x0;
    puStack_f0 = puStack_140;
    puStack_e8 = puStack_138;
    pauStack_100 = pauStack_120;
    pdb_14091bf40(&puStack_158,&pauStack_120);
    if (1 < *_DAT_143ca8e90) {
      pcStack_60 = pdb_1409209a0;
      pauStack_120 = (undefined1 (*) [16])0x0;
      puStack_118 = (undefined8 *)&UNK_143021cab;
      puStack_110 = (undefined1 *)0x2d;
      puStack_108 = (undefined8 *)0x0;
      pauStack_100 = (undefined1 (*) [16])&UNK_143021c72;
      pauStack_f8 = (undefined1 (*) [16])0x38;
      puStack_f0 = (undefined1 *)0x2;
      puStack_e8 = (undefined8 *)&UNK_143021cab;
      lStack_e0 = 0x2d;
      uStack_d8 = 0x5800000001;
      puStack_d0 = &UNK_143021c29;
      pppuStack_c8 = &ppuStack_68;
      ppuStack_68 = &puStack_158;
      pdb_140f332f0(&uStack_49,&pauStack_120);
    }
    if (puStack_158 == (undefined1 *)0x0) {
      uStack_148 = 0;
    }
    else {
      puStack_118 = (undefined8 *)0x0;
      puStack_110 = puStack_158;
      puStack_108 = puStack_150;
      pauStack_f8 = (undefined1 (*) [16])0x0;
      puStack_f0 = puStack_158;
      puStack_e8 = puStack_150;
    }
    pauStack_120 = (undefined1 (*) [16])(ulonglong)(puStack_158 != (undefined1 *)0x0);
    pauStack_100 = pauStack_120;
    lStack_e0 = uStack_148;
    do {
      pdb_14192c890(&ppuStack_68,&pauStack_120);
    } while (ppuStack_68 != (undefined1 **)0x0);
  }
  pdb_140a27d90(&pauStack_120,&puStack_140,*(undefined8 *)(*param_3 + 0x20),
                *(undefined8 *)(*param_3 + 0x28));
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x1c);
  puVar4 = (undefined4 *)param_5[2];
  *puVar4 = uVar3;
  plStack_78 = (longlong *)*param_5;
  pbStack_70 = (byte *)plStack_78[1];
  lStack_128 = plStack_78[2];
  lStack_80 = 0;
  pbVar11 = pbStack_70;
  while (plVar9 = plStack_78, lStack_128 != lStack_80) {
    lStack_80 = lStack_80 + 1;
    pdb_1404d1e90(pbVar11);
    pbVar11 = pbVar11 + 0x58;
  }
  if (*plStack_78 != 0) {
    pub_1406abac0(pbStack_70,*plStack_78 * 0x58,8);
  }
  plVar9[2] = (longlong)puStack_110;
  *plVar9 = (longlong)pauStack_120;
  plVar9[1] = (longlong)puStack_118;
  *puVar4 = uVar3;
  if (plVar9[0xc] != 0) {
    uVar5 = plVar9[10];
    if (uVar5 == 0) {
      uVar10 = 0;
    }
    else {
      pub_142e32780(plVar9[9],0xff,uVar5 + 0x11);
      uVar10 = (uVar5 + 1 & 0xfffffffffffffff8) - (uVar5 + 1 >> 3);
      if (uVar5 < 8) {
        uVar10 = uVar5;
      }
    }
    plVar9[0xc] = 0;
    plVar9[0xb] = uVar10;
  }
  if (plVar9[6] != 0 || plVar9[2] != 0) {
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    lVar14 = *param_6;
    lVar12 = *(longlong *)(lVar14 + 0x30);
    uVar6 = *(undefined8 *)(lVar14 + 0x40);
    if (lVar12 == *(longlong *)(lVar14 + 0x20)) {
      pdb_142d7e980(lVar14 + 0x20);
    }
    lVar15 = *(longlong *)(lVar14 + 0x28);
    *(undefined8 *)(lVar15 + lVar12 * 0x10) = uVar6;
    *(undefined1 *)(lVar15 + 8 + lVar12 * 0x10) = 0;
    *(longlong *)(lVar14 + 0x30) = lVar12 + 1;
    *(longlong *)(lVar14 + 0x40) = *(longlong *)(lVar14 + 0x40) + 1;
    lVar14 = *param_4;
    if (lVar14 == 0) {
      *puVar4 = uVar3;
      if (plVar9[2] != 0) {
        lVar14 = plVar9[1];
        lVar12 = plVar9[2] * 0x58 + lVar14;
        do {
          lVar15 = *(longlong *)(lVar14 + 0x38);
          if (-1 < lVar15) {
            pbVar11 = *(byte **)(lVar14 + 0x40);
            lVar16 = *(longlong *)(lVar14 + 0x48);
            if (lVar16 != 0) {
              pbVar13 = pbVar11 + 8;
              do {
                if (*(ulonglong *)(pbVar13 + -8) != 0) {
                  pub_1406abac0(*(byte **)pbVar13,*(ulonglong *)(pbVar13 + -8),1);
                }
                pbVar13 = pbVar13 + 0x28;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            if (lVar15 != 0) {
              pub_1406abac0(pbVar11,lVar15 * 0x28,8);
            }
          }
          *(undefined8 *)(lVar14 + 0x38) = 0x8000000000000003;
          lVar14 = lVar14 + 0x58;
        } while (lVar14 != lVar12);
      }
    }
    else {
      ppuVar7 = (undefined1 **)plVar9[0xf];
      LOCK();
      puVar1 = *ppuVar7;
      *ppuVar7 = *ppuVar7 + 1;
      UNLOCK();
      if (*ppuVar7 == (undefined1 *)0x0 || SCARRY8((longlong)puVar1,1) != (longlong)*ppuVar7 < 0) {
LAB_14092cb79:
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      *puVar4 = uVar3;
      ppuStack_68 = ppuVar7;
      if (plVar9[2] != 0) {
        pcVar17 = (char *)plVar9[1];
        pcVar18 = pcVar17 + plVar9[2] * 0x58;
        do {
          lVar12 = *(longlong *)(pcVar17 + 0x38);
          if (*pcVar17 == '\0') {
            if (SBORROW8(0,lVar12)) {
              pdb_140f60be0(&pauStack_120,pcVar17 + 8);
              LOCK();
              puVar1 = *ppuStack_68;
              *ppuStack_68 = *ppuStack_68 + 1;
              UNLOCK();
              if (*ppuStack_68 == (undefined1 *)0x0 ||
                  SCARRY8((longlong)puVar1,1) != (longlong)*ppuStack_68 < 0) goto LAB_14092cb79;
              pdb_140a662e0(lVar14,&pauStack_120);
            }
          }
          else {
            if (-1 < lVar12) {
              pbVar11 = *(byte **)(pcVar17 + 0x40);
              lVar15 = *(longlong *)(pcVar17 + 0x48);
              if (lVar15 != 0) {
                pbVar13 = pbVar11 + 8;
                do {
                  if (*(ulonglong *)(pbVar13 + -8) != 0) {
                    pub_1406abac0(*(byte **)pbVar13,*(ulonglong *)(pbVar13 + -8),1);
                  }
                  pbVar13 = pbVar13 + 0x28;
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
              }
              if (lVar12 != 0) {
                pub_1406abac0(pbVar11,lVar12 * 0x28,8);
              }
            }
            pcVar17[0x38] = '\x02';
            pcVar17[0x39] = '\0';
            pcVar17[0x3a] = '\0';
            pcVar17[0x3b] = '\0';
            pcVar17[0x3c] = '\0';
            pcVar17[0x3d] = '\0';
            pcVar17[0x3e] = '\0';
            pcVar17[0x3f] = -0x80;
          }
          pcVar17 = pcVar17 + 0x58;
        } while (pcVar17 != pcVar18);
      }
      LOCK();
      *ppuStack_68 = *ppuStack_68 + -1;
      UNLOCK();
      if (*ppuStack_68 == (undefined1 *)0x0) {
        pdb_140c7a8f0(&ppuStack_68);
      }
    }
  }
  if (puStack_140 == (undefined1 *)0x0) {
    lStack_130 = 0;
  }
  else {
    puStack_118 = (undefined8 *)0x0;
    puStack_110 = puStack_140;
    puStack_108 = puStack_138;
    pauStack_f8 = (undefined1 (*) [16])0x0;
    puStack_f0 = puStack_140;
    puStack_e8 = puStack_138;
  }
  pauStack_120 = (undefined1 (*) [16])(ulonglong)(puStack_140 != (undefined1 *)0x0);
  pauStack_100 = pauStack_120;
  lStack_e0 = lStack_130;
  do {
    pdb_14192c130(&ppuStack_68,&pauStack_120);
  } while (ppuStack_68 != (undefined1 **)0x0);
  return;
}

