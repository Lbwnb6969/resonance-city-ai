// VA 0x140b68610, PDB extent 5061 bytes
// country_core::systems::history::history_process::replay_edit
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/history_process.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::history::history_process::replay_edit
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/history_process.rs
   Extent: 5061 */

void pdb_140b68610(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [16];
  char cVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  char cVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_220 [24];
  longlong lStack_208;
  longlong lStack_200;
  byte *pbStack_1f8;
  ulonglong uStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  longlong *plStack_1d8;
  char *pcStack_1d0;
  longlong **pplStack_1c8;
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  undefined8 uStack_1b0;
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 *puStack_178;
  ushort uStack_170;
  longlong lStack_168;
  char cStack_160;
  char *pcStack_150;
  longlong **pplStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  undefined1 (*pauStack_130) [16];
  byte *pbStack_128;
  byte *pbStack_120;
  undefined1 *puStack_118;
  byte *pbStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  byte *pbStack_f8;
  longlong lStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  byte *pbStack_d0;
  longlong lStack_c8;
  byte *pbStack_c0;
  longlong lStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_98;
  ulonglong *puStack_90;
  ulonglong uStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  undefined1 uStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_200 = 0;
  pbStack_1f8 = (byte *)0x8;
  uStack_1f0 = 0;
  lVar20 = *(longlong *)(param_1 + 8);
  lStack_140 = lVar20 + *(longlong *)(param_1 + 0x10) * 0x18;
  pbStack_f8 = (byte *)param_4;
  for (; lStack_208 = lVar20, lVar20 != lStack_140; lVar20 = lVar20 + 0x18) {
    pdb_1417ecda0(lVar20,param_2,param_3,&lStack_200);
  }
  uStack_a8 = uStack_1f0;
  lStack_b8 = lStack_200;
  pbStack_b0 = pbStack_1f8;
  plVar13 = *(longlong **)(param_1 + 0x18);
  LOCK();
  lVar20 = *plVar13;
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  if (*plVar13 == 0 || SCARRY8(lVar20,1) != *plVar13 < 0) {
LAB_140b6930d:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  LOCK();
  lVar20 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  if (*plVar5 == 0 || SCARRY8(lVar20,1) != *plVar5 < 0) goto LAB_140b6930d;
  cStack_4d = (char)param_2;
  if ((cStack_4d != '\0') && (uVar11 = uStack_1f0 >> 1, uVar11 != 0)) {
    pbVar16 = pbStack_1f8 + uStack_1f0 * 0x30 + -0x10;
    pbVar14 = pbStack_1f8 + 0x20;
    do {
      uVar23 = *(undefined8 *)(pbVar14 + -0x20);
      uVar9 = *(undefined8 *)(pbVar14 + -0x18);
      uVar10 = *(undefined8 *)(pbVar16 + -0x18);
      *(undefined8 *)(pbVar14 + -0x20) = *(undefined8 *)(pbVar16 + -0x20);
      *(undefined8 *)(pbVar14 + -0x18) = uVar10;
      *(undefined8 *)(pbVar16 + -0x20) = uVar23;
      *(undefined8 *)(pbVar16 + -0x18) = uVar9;
      uVar23 = *(undefined8 *)(pbVar14 + -0x10);
      uVar9 = *(undefined8 *)(pbVar14 + -8);
      uVar10 = *(undefined8 *)(pbVar16 + -8);
      *(undefined8 *)(pbVar14 + -0x10) = *(undefined8 *)(pbVar16 + -0x10);
      *(undefined8 *)(pbVar14 + -8) = uVar10;
      *(undefined8 *)(pbVar16 + -0x10) = uVar23;
      *(undefined8 *)(pbVar16 + -8) = uVar9;
      uVar23 = *(undefined8 *)pbVar14;
      uVar9 = *(undefined8 *)(pbVar14 + 8);
      uVar10 = *(undefined8 *)(pbVar16 + 8);
      *(undefined8 *)pbVar14 = *(undefined8 *)pbVar16;
      *(undefined8 *)(pbVar14 + 8) = uVar10;
      *(undefined8 *)pbVar16 = uVar23;
      *(undefined8 *)(pbVar16 + 8) = uVar9;
      pbVar14 = pbVar14 + 0x30;
      pbVar16 = pbVar16 + -0x30;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  lStack_d8 = 0;
  pbStack_d0 = (byte *)0x8;
  lStack_c8 = 0;
  plStack_80 = plVar13;
  plStack_78 = plVar5;
  pdb_14007ee60();
  puVar12 = (ulonglong *)pub_1406abab0(0x40,8);
  if (puVar12 == (ulonglong *)0x0) {
    uStack_51 = 1;
    uStack_52 = 1;
    pdb_142dc7e2a(8,0x40);
    goto LAB_140b6930d;
  }
  uStack_98 = 8;
  uStack_88 = 0;
  uVar11 = 0;
  pcStack_1d0 = (char *)uStack_a8;
  puStack_90 = puVar12;
  if (uStack_a8 != 0) {
    do {
      uStack_88 = 0;
      if (uStack_98 == 0) {
        cStack_49 = 1;
        cStack_4a = 1;
        pdb_142d896b0(&uStack_98);
      }
      *puStack_90 = uVar11;
      uStack_88 = 1;
      pbVar16 = pbStack_b0 + uStack_a8 * 0x30;
      uVar11 = uVar11 + 1;
      lVar20 = 8;
      uVar17 = 0;
      lVar25 = 8;
      pbVar14 = pbStack_b0;
      while (uVar7 = uStack_88, puVar12 = puStack_90, bVar26 = lVar25 != 0, lVar25 = lVar25 + -1,
            bVar26) {
        if (uVar11 == 0) {
          if (pbVar14 == pbVar16) break;
        }
        else {
          if (((ulonglong)((longlong)pbVar16 - (longlong)pbVar14) >> 4) * -0x5555555555555555 <=
              uVar11) break;
          pbVar14 = pbVar14 + uVar11 * 0x30;
          uVar17 = uVar17 + uVar11;
        }
        uStack_60 = uVar17;
        if (uStack_88 != 0) {
          lVar21 = 0;
          do {
            uVar11 = *(ulonglong *)((longlong)puStack_90 + lVar21);
            if (uStack_a8 <= uVar11) {
              cStack_49 = 1;
              cStack_4a = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar11,uStack_a8,&UNK_14305abf8);
            }
            if (10 < pbStack_b0[uVar11 * 0x30]) goto LAB_140b68aa0;
            pbVar15 = pbStack_b0 + uVar11 * 0x30;
            switch(pbStack_b0[uVar11 * 0x30]) {
            case 0:
              bVar3 = *pbVar14;
              if (bVar3 == 0) {
                if ((pbVar15[1] == pbVar14[1]) && ((pbVar15[1] == 0 || (pbVar15[2] == pbVar14[2]))))
                goto LAB_140b68aa0;
              }
              else if ((bVar3 != 4) && (bVar3 != 8)) goto LAB_140b68aa0;
              break;
            default:
              goto LAB_140b68aa0;
            case 4:
              if (*pbVar14 != 0) {
                if (*pbVar14 == 5) goto code_r0x000140b6896c;
                goto LAB_140b68aa0;
              }
              break;
            case 5:
              pbVar15 = pbVar14;
              if (*pbVar14 != 4) goto LAB_140b68aa0;
code_r0x000140b6896c:
              if (*(longlong *)(pbVar15 + 0x20) != 1) goto LAB_140b68aa0;
              uVar11 = 0;
              if (*(ulonglong *)(pbVar15 + 8) <= *(ulonglong *)(pbVar15 + 0x18)) {
                uVar11 = *(ulonglong *)(pbVar15 + 8);
              }
              lVar22 = *(ulonglong *)(pbVar15 + 0x18) - uVar11;
              if ((*(longlong *)(*(longlong *)(pbVar15 + 0x10) + 0x10 + lVar22 * 0x18) != 1) ||
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(pbVar15 + 0x10) + lVar22 * 0x18 + 8) + 8) + 0x10)
                  != -0x7ffffffffffffffe)) goto LAB_140b68aa0;
              break;
            case 6:
              if (*pbVar14 != 6) goto LAB_140b68aa0;
              break;
            case 7:
              if ((*pbVar14 != 7) && (*pbVar14 != 10)) goto LAB_140b68aa0;
              break;
            case 8:
              if ((*pbVar14 & 7) != 0) goto LAB_140b68aa0;
              break;
            case 10:
              if (*pbVar14 != 7) goto LAB_140b68aa0;
            }
            lVar21 = lVar21 + 8;
          } while (lVar20 != lVar21);
        }
        if (uStack_88 == uStack_98) {
          cStack_49 = 1;
          cStack_4a = 1;
          pdb_142d896b0(&uStack_98);
        }
        pbVar14 = pbVar14 + 0x30;
        puStack_90[uVar7] = uStack_60;
        uVar17 = uStack_60 + 1;
        uStack_88 = uVar7 + 1;
        lVar20 = lVar20 + 8;
        uVar11 = 0;
      }
LAB_140b68aa0:
      uVar11 = uStack_88 * 8;
      if (0x7ffffffffffffff8 < uVar11 || uStack_88 >> 0x3d != 0) {
        uVar23 = 0;
LAB_140b68baf:
        cStack_49 = 1;
        cStack_4a = 1;
        pdb_142dc7e2a(uVar23,uVar11);
        goto LAB_140b6930d;
      }
      if (uVar11 == 0) {
        pbVar14 = (byte *)0x8;
        uStack_60 = 0;
        uVar17 = uStack_60;
      }
      else {
        pdb_14007ee60();
        uVar23 = 8;
        pbVar14 = pub_1406abab0(uVar11,8);
        uVar17 = uVar7;
        if (pbVar14 == (byte *)0x0) goto LAB_140b68baf;
      }
      uStack_60 = uVar17;
      if (uVar7 != 0) {
        pub_142e32760(pbVar14,puVar12);
      }
      lVar20 = lStack_c8;
      pbStack_68 = pbVar14;
      if (lStack_c8 == lStack_d8) {
        pdb_142db08b0(&lStack_d8);
      }
      *(ulonglong *)(pbStack_d0 + lVar20 * 0x18) = uStack_60;
      *(byte **)(pbStack_d0 + lVar20 * 0x18 + 8) = pbStack_68;
      *(ulonglong *)(pbStack_d0 + lVar20 * 0x18 + 0x10) = uVar7;
      lStack_c8 = lVar20 + 1;
      uVar11 = puStack_90[uStack_88 - 1] + 1;
      pcStack_1d0 = (char *)uStack_a8;
    } while (uVar11 < uStack_a8);
  }
  uStack_a8 = 0;
  pbStack_1e0 = pbStack_b0 + (longlong)pcStack_1d0 * 0x30;
  pbStack_1e8 = pbStack_b0;
  plStack_1d8 = &lStack_b8;
  pplStack_1c8 = (longlong **)0x0;
  cStack_49 = 1;
  cStack_4a = 1;
  pdb_1415fc0a0(auStack_220,&pbStack_1e8);
  pauStack_188 = (undefined1 (*) [16])plStack_80[2];
  puStack_178 = *pauStack_188 + plStack_80[3] + 1;
  auVar2 = *pauStack_188;
  uStack_170 = ~((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
  lStack_168 = plStack_80[5];
  pauVar18 = pauStack_188 + 1;
  pbStack_1e8 = (byte *)0x0;
  plStack_1b8 = (longlong *)0x0;
  cStack_160 = cStack_4d;
  cStack_4e = '\x01';
  cStack_4f = '\x01';
  pauStack_180 = pauVar18;
  plStack_138 = (longlong *)pdb_1417d0ba0(&pbStack_1e8);
  pbStack_1e0 = pbStack_d0 + lStack_c8 * 0x18;
  pbStack_1e8 = pbStack_d0;
  pcStack_1d0 = &cStack_4d;
  pplStack_1c8 = &plStack_138;
  uStack_53 = 1;
  uStack_54 = 1;
  plStack_1d8 = (longlong *)auStack_220;
  pauStack_130 = pauVar18;
  pdb_1415ecd80(&lStack_f0,&pbStack_1e8);
  if (plStack_80[5] == 0) {
    lVar20 = plStack_78[8];
    if ((lVar20 == 0) && (plStack_78[0xb] == 0)) {
      cVar24 = '\x01';
      cVar19 = '\x01';
      goto LAB_140b68f4e;
    }
    if ((lStack_e0 != 0) && (pbStack_e8 + lStack_e0 * 0x40 != (byte *)0x40)) {
      pbVar14 = pbStack_e8 + lStack_e0 * 0x40;
      cVar19 = '\x01';
      goto LAB_140b68dc1;
    }
    pbStack_128 = (byte *)0x0;
    pbStack_120 = (byte *)0x8;
    puStack_118 = (undefined1 *)0x0;
    pcStack_150 = (char *)0x0;
    plStack_108 = plStack_80;
    LOCK();
    *plStack_80 = *plStack_80 + -1;
    UNLOCK();
    if (*plStack_80 == 0) {
      uStack_55 = 1;
      pdb_140c7bbc0(&plStack_108);
    }
    plStack_100 = (longlong *)0x0;
  }
  else {
    if ((lStack_e0 != 0) && (pbStack_e8 + lStack_e0 * 0x40 != (byte *)0x40)) {
      pbVar14 = pbStack_e8 + lStack_e0 * 0x40;
      pbStack_1e8 = *(byte **)(pbVar14 + -0x18);
      *(longlong **)(pbVar14 + -0x18) = plStack_80;
      if (pbStack_1e8 != (byte *)0x0) {
        LOCK();
        *(longlong *)pbStack_1e8 = *(longlong *)pbStack_1e8 + -1;
        UNLOCK();
        if (*(longlong *)pbStack_1e8 == 0) {
          uStack_4b = 1;
          cStack_4c = '\0';
          pdb_140c7bbc0(&pbStack_1e8);
        }
      }
      lVar20 = plStack_78[8];
      cVar19 = '\0';
LAB_140b68dc1:
      if ((lVar20 == 0) && (plStack_78[0xb] == 0)) {
        cVar24 = '\x01';
      }
      else {
        pbStack_1e8 = *(byte **)(pbVar14 + -0x10);
        *(longlong **)(pbVar14 + -0x10) = plStack_78;
        if (pbStack_1e8 != (byte *)0x0) {
          LOCK();
          *(longlong *)pbStack_1e8 = *(longlong *)pbStack_1e8 + -1;
          UNLOCK();
          if (*(longlong *)pbStack_1e8 == 0) {
            uStack_4b = 0;
            cStack_4c = cVar19;
            pdb_140c7a400(&pbStack_1e8);
          }
        }
        cVar24 = '\0';
      }
      goto LAB_140b68f4e;
    }
    pbStack_128 = (byte *)0x0;
    pbStack_120 = (byte *)0x8;
    puStack_118 = (undefined1 *)0x0;
    pcStack_150 = (char *)0x0;
    plStack_100 = plStack_80;
  }
  plVar13 = plStack_78;
  if ((plStack_78[8] == 0) && (plStack_108 = plStack_78, plStack_78[0xb] == 0)) {
    LOCK();
    *plStack_78 = *plStack_78 + -1;
    UNLOCK();
    if (*plStack_78 == 0) {
      pdb_140c7a400(&plStack_108);
    }
    plVar13 = (longlong *)0x0;
  }
  pbStack_1e8 = pbStack_128;
  pbStack_1e0 = pbStack_120;
  plStack_1d8 = (longlong *)puStack_118;
  uStack_1b0 = CONCAT71(uStack_1b0._1_7_,cStack_4d);
  pcStack_1d0 = pcStack_150;
  pplStack_1c8 = pplStack_148;
  plStack_1c0 = plStack_100;
  plStack_1b8 = plVar13;
  if (lStack_e0 == lStack_f0) {
    pdb_142d7ee50(&lStack_f0);
  }
  lVar20 = lStack_e0 * 0x40;
  *(longlong **)(pbStack_e8 + lVar20 + 0x30) = plStack_1b8;
  *(undefined8 *)(pbStack_e8 + lVar20 + 0x30 + 8) = uStack_1b0;
  *(longlong ***)(pbStack_e8 + lVar20 + 0x20) = pplStack_1c8;
  *(longlong **)(pbStack_e8 + lVar20 + 0x20 + 8) = plStack_1c0;
  *(longlong **)(pbStack_e8 + lVar20 + 0x10) = plStack_1d8;
  *(char **)(pbStack_e8 + lVar20 + 0x10 + 8) = pcStack_1d0;
  *(byte **)(pbStack_e8 + lVar20) = pbStack_1e8;
  *(byte **)(pbStack_e8 + lVar20 + 8) = pbStack_1e0;
  lStack_e0 = lStack_e0 + 1;
  cVar24 = '\0';
  cVar19 = '\0';
LAB_140b68f4e:
  lVar20 = lStack_e0;
  pbStack_c0 = pbStack_e8;
  LOCK();
  *plStack_138 = *plStack_138 + -1;
  UNLOCK();
  if (*plStack_138 == 0) {
    cStack_4f = cVar19;
    cStack_4e = cVar24;
    pdb_140c7b0f0(&plStack_138);
  }
  cStack_4a = cVar19;
  cStack_49 = cVar24;
  pdb_140974cc0(auStack_220);
  if (uStack_98 != 0) {
    pub_1406abac0((byte *)puStack_90,uStack_98 << 3,8);
  }
  pbVar14 = pbStack_d0;
  if (lStack_c8 != 0) {
    pbVar16 = pbStack_d0 + 8;
    lVar25 = lStack_c8;
    do {
      if (*(longlong *)(pbVar16 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar16,*(longlong *)(pbVar16 + -8) << 3,8);
      }
      pbVar16 = pbVar16 + 0x18;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  if (lStack_d8 != 0) {
    pub_1406abac0(pbVar14,lStack_d8 * 0x18,8);
  }
  if (cVar24 != '\0') {
    LOCK();
    *plStack_78 = *plStack_78 + -1;
    UNLOCK();
    if (*plStack_78 == 0) {
      cStack_50 = cVar19;
      pdb_140c7a400(&plStack_78);
    }
  }
  if (cVar19 != '\0') {
    LOCK();
    *plStack_80 = *plStack_80 + -1;
    UNLOCK();
    if (*plStack_80 == 0) {
      pdb_140c7bbc0(&plStack_80);
    }
  }
  pbStack_68 = (byte *)uStack_a8;
  uStack_60 = 0;
  pbStack_70 = pbStack_b0;
  pbVar14 = pbStack_b0;
  while (pbStack_68 != (byte *)uStack_60) {
    uStack_60 = uStack_60 + 1;
    pdb_14099c550(pbVar14);
    pbVar14 = pbVar14 + 0x30;
  }
  if (lStack_b8 != 0) {
    pub_1406abac0(pbStack_70,lStack_b8 * 0x30,8);
  }
  lVar25 = lVar20 * 0x40;
  pbStack_110 = pbStack_c0 + lVar25;
  pbStack_128 = pbStack_c0;
  pbStack_120 = pbStack_c0;
  pbStack_70 = (byte *)lStack_f0;
  puStack_118 = (undefined1 *)lStack_f0;
  pbVar14 = pbStack_c0;
  pbStack_68 = pbStack_110;
  if (lVar20 != 0) {
    uVar4 = *(undefined4 *)((longlong)pbStack_f8 + 0x1c);
    puVar12 = *(ulonglong **)pbStack_f8;
    puVar6 = *(undefined4 **)((longlong)pbStack_f8 + 0x10);
    pbVar16 = pbStack_c0;
    do {
      pbVar14 = pbVar16 + 0x40;
      pbVar15 = *(byte **)pbVar16;
      pbStack_120 = pbVar14;
      if (SBORROW8(0,(longlong)pbVar15)) break;
      uStack_1b0 = *(undefined8 *)(pbVar16 + 0x38);
      pbStack_1e0 = *(byte **)(pbVar16 + 8);
      plStack_1d8 = *(longlong **)(pbVar16 + 0x10);
      pcStack_1d0 = *(char **)(pbVar16 + 0x18);
      pplStack_1c8 = *(longlong ***)(pbVar16 + 0x20);
      plStack_1c0 = *(longlong **)(pbVar16 + 0x28);
      plStack_1b8 = *(longlong **)(pbVar16 + 0x30);
      *puVar6 = uVar4;
      puVar12[4] = puVar12[4] + 1;
      uVar11 = *puVar12;
      uVar17 = puVar12[3];
      pbStack_1e8 = pbVar15;
      if (uVar17 == uVar11) {
        pdb_140929340(puVar12);
        uVar11 = *puVar12;
        uVar17 = puVar12[3];
      }
      puVar12[3] = uVar17 + 1;
      if (uVar17 + puVar12[2] < uVar11) {
        uVar11 = 0;
      }
      uVar7 = puVar12[1];
      lVar20 = ((uVar17 + puVar12[2]) - uVar11) * 0x40;
      puVar1 = (undefined8 *)(uVar7 + 0x30 + lVar20);
      *puVar1 = plStack_1b8;
      puVar1[1] = uStack_1b0;
      plVar13 = (longlong *)(uVar7 + 0x20 + lVar20);
      *plVar13 = (longlong)pplStack_1c8;
      plVar13[1] = (longlong)plStack_1c0;
      plVar13 = (longlong *)(uVar7 + 0x10 + lVar20);
      *plVar13 = (longlong)plStack_1d8;
      plVar13[1] = (longlong)pcStack_1d0;
      *(undefined8 *)(uVar7 + lVar20) = pbStack_1e8;
      ((undefined8 *)(uVar7 + lVar20))[1] = pbStack_1e0;
      lVar25 = lVar25 + -0x40;
      pbVar16 = pbVar14;
    } while (lVar25 != 0);
  }
  pbStack_68 = (byte *)((ulonglong)((longlong)pbStack_68 - (longlong)pbVar14) >> 6);
  uStack_60 = 0;
  pbStack_f8 = pbVar14;
  while (pbStack_68 != (byte *)uStack_60) {
    uStack_60 = uStack_60 + 1;
    pdb_14099e540(pbVar14);
    pbVar14 = pbVar14 + 0x40;
  }
  if (pbStack_70 != (byte *)0x0) {
    pub_1406abac0(pbStack_c0,(longlong)pbStack_70 << 6,8);
  }
  return;
}

