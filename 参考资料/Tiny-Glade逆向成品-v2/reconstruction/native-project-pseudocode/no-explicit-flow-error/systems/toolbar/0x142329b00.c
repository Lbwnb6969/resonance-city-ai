// VA 0x142329b00, PDB extent 2084 bytes
// toolbar::menu::mods_workshop_tab::list_slot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_workshop_tab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::mods_workshop_tab::list_slot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_workshop_tab.rs
   Extent: 2084 */

void pdb_142329b00(longlong param_1,longlong param_2,undefined8 param_3,undefined1 (*param_4) [16],
                  undefined1 (*param_5) [16],longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  ushort uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  longlong lStack_128;
  byte *pbStack_120;
  ulonglong uStack_118;
  undefined1 auStack_110 [8];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  longlong lStack_f8;
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 auStack_ac [4];
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 (*pauStack_80) [16];
  undefined1 (*pauStack_78) [16];
  undefined1 (*pauStack_70) [16];
  undefined1 (*pauStack_68) [16];
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pauStack_68 = *(undefined1 (**) [16])(param_2 + 8);
  lStack_60 = *(longlong *)(param_2 + 0x10) * 0x20 + (longlong)pauStack_68;
  lStack_50 = param_7 * 0x20 + param_6;
  pauStack_70 = param_5;
  lStack_58 = param_6;
  auStack_110 = (undefined1  [8])param_3;
  pauStack_78 = param_4;
  pdb_1411b3e20((undefined1 (*) [16])&lStack_128,&pauStack_78);
  pdb_140d8ead0(&pauStack_78);
  pauStack_80 = pauStack_70 + (longlong)pauStack_68 * 0xb;
  pauStack_98 = pauStack_70;
  pauStack_90 = pauStack_70;
  pauStack_88 = pauStack_78;
  uStack_3a = 1;
  plVar7 = (longlong *)pdb_14008d710(0);
  if (plVar7 != (longlong *)0x0) {
    lStack_58 = *plVar7;
    lStack_50 = plVar7[1];
    *plVar7 = *plVar7 + 1;
    pauStack_68 = (undefined1 (*) [16])_DAT_14360ce90;
    lStack_60 = _UNK_14360ce98;
    pauStack_78 = _DAT_14360ce80;
    pauStack_70 = _UNK_14360ce88;
    pauStack_d8 = pauStack_88;
    pauStack_d0 = pauStack_80;
    pauStack_e8 = pauStack_98;
    pauStack_e0 = pauStack_90;
    pdb_142346760((undefined1 (*) [16])&pauStack_e8,&pauStack_78);
    pauStack_e8 = pauStack_78;
    pauStack_e0 = pauStack_70;
    pauStack_d8 = pauStack_68;
    pauStack_d0 = (undefined1 (*) [16])lStack_60;
    lStack_c8 = lStack_58;
    lStack_c0 = lStack_50;
    if (*(longlong *)(param_9 + 0x20) == 0) {
      pauStack_108 = (undefined1 (*) [16])0x8000000000000000;
    }
    else {
      puVar8 = (undefined8 *)pdb_1406d0830();
      uStack_a0 = pub_142e31f10();
      plStack_a8 = (longlong *)*puVar8;
      LOCK();
      lVar10 = *plStack_a8;
      *plStack_a8 = *plStack_a8 + 1;
      UNLOCK();
      if (*plStack_a8 == 0 || SCARRY8(lVar10,1) != *plStack_a8 < 0) goto LAB_14232a186;
      auStack_ac = (undefined1  [4])pub_142e32000(uStack_a0);
      pauStack_98 = (undefined1 (*) [16])auStack_ac;
      pauStack_90 = (undefined1 (*) [16])pdb_140f71a50;
      pdb_140f60760(&pauStack_78,&UNK_1434da5a0,&pauStack_98);
      LOCK();
      *plStack_a8 = *plStack_a8 + -1;
      UNLOCK();
      pauStack_108 = pauStack_78;
      pauStack_100 = pauStack_70;
      lStack_f8 = (longlong)pauStack_68;
      if (*plStack_a8 == 0) {
        pdb_140cb1c10(&plStack_a8);
        pauStack_108 = pauStack_78;
        pauStack_100 = pauStack_70;
        lStack_f8 = (longlong)pauStack_68;
      }
    }
    if (uStack_118 != 0) {
      uVar12 = 7;
      if (uStack_118 < 7) {
        uVar12 = uStack_118;
      }
      uStack_39 = 1;
      pdb_1411739b0(&pauStack_98,param_1,&UNK_1434da583,4,uVar12,uStack_118,0x42640000);
      pauStack_70 = (undefined1 (*) [16])auStack_110;
      lStack_60 = param_9;
      lStack_58 = param_8;
      uStack_39 = 1;
      pauStack_78 = (undefined1 (*) [16])&lStack_128;
      pauStack_68 = (undefined1 (*) [16])&pauStack_e8;
      pdb_1422f7dd0(&pauStack_98,&pauStack_78);
      uStack_39 = 0;
      pdb_1423296b0(param_1,&pauStack_108,param_9);
      pauVar15 = pauStack_e0;
      if (pauStack_e0 != (undefined1 (*) [16])0x0) {
        if (pauStack_d0 != (undefined1 (*) [16])0x0) {
          auVar22 = *pauStack_e8;
          pauVar20 = pauStack_e8 + 1;
          uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
          pauVar14 = pauStack_e8;
          pauVar16 = pauStack_d0;
          do {
            if ((short)uVar6 == 0) {
              do {
                auVar22 = *pauVar20;
                pauVar14 = pauVar14 + -0x30;
                pauVar20 = pauVar20 + 1;
                uVar6 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar6 == 0);
            }
            uVar4 = 0;
            for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar12 = *(ulonglong *)(pauVar14[(ulonglong)uVar4 * -3 + -3] + 8);
            if ((!SBORROW8(0,uVar12)) && (uVar12 != 0)) {
              pub_1406abac0(*(byte **)pauVar14[(ulonglong)uVar4 * -3 + -2],uVar12,1);
            }
            uVar6 = uVar6 - 1 & uVar6;
            pauVar16 = (undefined1 (*) [16])((longlong)pauVar16 + -1);
          } while (pauVar16 != (undefined1 (*) [16])0x0);
        }
LAB_14232a101:
        uVar12 = (longlong)pauVar15 * 0x31 + 0x41;
        if (uVar12 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_e8 - ((longlong)pauVar15 * 0x30 + 0x30)),uVar12,
                        0x10);
        }
      }
LAB_14232a12f:
      if (lStack_128 != 0) {
        pub_1406abac0(pbStack_120,lStack_128 << 3,8);
      }
      return;
    }
    uStack_39 = 1;
    uVar13 = 0x19;
    plVar7 = (longlong *)pdb_140dc6290(&UNK_1434da587);
    uStack_39 = 1;
    plStack_a8 = plVar7;
    uStack_a0 = uVar13;
    pauStack_78 = (undefined1 (*) [16])pdb_140bbbcb0(&plStack_a8);
    pauStack_70 = (undefined1 (*) [16])_DAT_14329c260;
    pauStack_68 = _UNK_14329c268;
    uStack_39 = 1;
    pauStack_70 = (undefined1 (*) [16])pdb_1400affa0(&pauStack_78);
    pauStack_78 = *(undefined1 (**) [16])(param_1 + 8);
    uStack_39 = 1;
    uVar9 = pdb_1400b0130(&pauStack_78);
    uStack_39 = 1;
    pdb_14072caa0(&pauStack_78,param_1,uVar9);
    uStack_39 = 1;
    uVar9 = pdb_14116ee90(&pauStack_78,0);
    uStack_39 = 1;
    pdb_14119b6b0(uVar9,plVar7,uVar13);
    pauStack_88 = pauStack_68;
    pauStack_98 = pauStack_78;
    pauStack_90 = pauStack_70;
    uStack_39 = 1;
    uVar9 = pdb_14116e180(&pauStack_98);
    uStack_39 = 1;
    pdb_14119b2b0(uVar9);
    pauStack_68 = pauStack_88;
    pauStack_78 = pauStack_98;
    pauStack_70 = pauStack_90;
    uStack_39 = 1;
    lVar10 = pdb_14116e180(&pauStack_78);
    pauVar15 = pauStack_78;
    *(undefined4 *)(lVar10 + 600) = 0xffffffa0;
    pauStack_98 = pauStack_78;
    pauStack_90 = pauStack_70;
    pauStack_88 = pauStack_68;
    if (*(longlong *)(pauStack_78[0x1c] + 8) != 0) {
      uStack_39 = 1;
      uVar11 = pdb_1400af0a0(pauStack_78 + 0x1d,&pauStack_90);
      lVar10 = *(longlong *)pauVar15[0x1b];
      uVar12 = *(ulonglong *)(pauVar15[0x1b] + 8);
      bVar21 = (byte)(uVar11 >> 0x39);
      auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar22 = pshuflw(auVar22,auVar22,0);
      lVar17 = 0;
      while( true ) {
        uVar11 = uVar11 & uVar12;
        auVar2 = *(undefined1 (*) [16])(lVar10 + uVar11);
        auVar24[0] = -(auVar2[0] == auVar22[0]);
        auVar24[1] = -(auVar2[1] == auVar22[1]);
        auVar24[2] = -(auVar2[2] == auVar22[2]);
        auVar24[3] = -(auVar2[3] == auVar22[3]);
        auVar24[4] = -(auVar2[4] == auVar22[4]);
        auVar24[5] = -(auVar2[5] == auVar22[5]);
        auVar24[6] = -(auVar2[6] == auVar22[6]);
        auVar24[7] = -(auVar2[7] == auVar22[7]);
        auVar24[8] = -(auVar2[8] == auVar22[0]);
        auVar24[9] = -(auVar2[9] == auVar22[1]);
        auVar24[10] = -(auVar2[10] == auVar22[2]);
        auVar24[0xb] = -(auVar2[0xb] == auVar22[3]);
        auVar24[0xc] = -(auVar2[0xc] == auVar22[4]);
        auVar24[0xd] = -(auVar2[0xd] == auVar22[5]);
        auVar24[0xe] = -(auVar2[0xe] == auVar22[6]);
        auVar24[0xf] = -(auVar2[0xf] == auVar22[7]);
        uVar18 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf
        ;
        uVar6 = (uint)uVar18;
        while (uVar18 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar19 = (uVar4 + uVar11 & uVar12) * -0xd8;
          if (pauStack_90 == *(undefined1 (**) [16])(lVar10 + -0xd8 + lVar19)) {
            pbVar1 = (byte *)(lVar10 + lVar19 + -5);
            *pbVar1 = *pbVar1 | 2;
            uStack_39 = 0;
            pdb_1423296b0(param_1,&pauStack_108,param_9);
            pauVar15 = pauStack_e0;
            if (pauStack_e0 == (undefined1 (*) [16])0x0) goto LAB_14232a12f;
            if (pauStack_d0 != (undefined1 (*) [16])0x0) {
              auVar22 = *pauStack_e8;
              pauVar20 = pauStack_e8 + 1;
              uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
              pauVar14 = pauStack_e8;
              pauVar16 = pauStack_d0;
              do {
                if ((short)uVar6 == 0) {
                  do {
                    auVar22 = *pauVar20;
                    pauVar14 = pauVar14 + -0x30;
                    pauVar20 = pauVar20 + 1;
                    uVar6 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar6 == 0);
                }
                uVar4 = 0;
                for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                uVar12 = *(ulonglong *)(pauVar14[(ulonglong)uVar4 * -3 + -3] + 8);
                if ((!SBORROW8(0,uVar12)) && (uVar12 != 0)) {
                  pub_1406abac0(*(byte **)pauVar14[(ulonglong)uVar4 * -3 + -2],uVar12,1);
                }
                uVar6 = uVar6 - 1 & uVar6;
                pauVar16 = (undefined1 (*) [16])((longlong)pauVar16 + -1);
              } while (pauVar16 != (undefined1 (*) [16])0x0);
            }
            goto LAB_14232a101;
          }
          uVar18 = (ushort)(uVar6 - 1) & (ushort)uVar6;
          uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar18);
        }
        auVar23[0] = -(auVar2[0] == -1);
        auVar23[1] = -(auVar2[1] == -1);
        auVar23[2] = -(auVar2[2] == -1);
        auVar23[3] = -(auVar2[3] == -1);
        auVar23[4] = -(auVar2[4] == -1);
        auVar23[5] = -(auVar2[5] == -1);
        auVar23[6] = -(auVar2[6] == -1);
        auVar23[7] = -(auVar2[7] == -1);
        auVar23[8] = -(auVar2[8] == -1);
        auVar23[9] = -(auVar2[9] == -1);
        auVar23[10] = -(auVar2[10] == -1);
        auVar23[0xb] = -(auVar2[0xb] == -1);
        auVar23[0xc] = -(auVar2[0xc] == -1);
        auVar23[0xd] = -(auVar2[0xd] == -1);
        auVar23[0xe] = -(auVar2[0xe] == -1);
        auVar23[0xf] = -(auVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x1f,0) & 1) != 0) || (SUB161(auVar23 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
        uVar11 = uVar11 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      }
    }
    uStack_39 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uStack_3a = 1;
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_14232a186:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

