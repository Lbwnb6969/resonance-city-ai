// VA 0x1417107c0, PDB extent 448 bytes
// turbosloth::asset::BuildContext::load<asset::texture::SourceImageAsset>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::load<asset::texture::SourceImageAsset>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 448 */

undefined8 pdb_1417107c0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  ushort uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  bool bVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong *plStack_c8;
  longlong lStack_c0;
  byte *pbStack_a0;
  longlong *plStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  undefined *puStack_68;
  char *pcStack_60;
  longlong *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar15 = param_1[1];
  if (lVar15 != 0) {
    pcVar1 = (char *)(lVar15 + 0x10);
    LOCK();
    bVar20 = *(char *)(lVar15 + 0x10) == '\0';
    if (bVar20) {
      *(char *)(lVar15 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      lStack_90 = 0x141710888;
      pdb_142dc6be0(pcVar1);
    }
    puVar7 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uVar9 = 0;
      cVar8 = *(char *)(lVar15 + 0x11);
    }
    else {
      lStack_90 = 0x14171089e;
      uVar9 = pdb_142dc79e0();
      uVar9 = uVar9 ^ 1;
      cVar8 = *(char *)(lVar15 + 0x11);
    }
    if (cVar8 != '\0') {
      uVar13 = (ulonglong)plStack_58 >> 8;
      plStack_58 = (longlong *)CONCAT71((int7)uVar13,(char)uVar9);
      puStack_68 = &UNK_14332a7c8;
                    /* WARNING: Subroutine does not return */
      lStack_90 = 0x1417108e1;
      pcStack_60 = pcVar1;
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&pcStack_60,&UNK_14332b920);
    }
    uStack_48 = CONCAT44(uVar9,(undefined4)uStack_48);
    lStack_90 = 0x141710834;
    uStack_50 = pcVar1;
    pdb_1417b5cd0(lVar15 + 0x18);
    if ((uStack_48._4_1_ == '\0') && ((*puVar7 & 0x7fffffffffffffff) != 0)) {
      lStack_90 = 0x1417108f9;
      cVar8 = pdb_142dc79e0();
      if (cVar8 == '\0') {
        *(undefined1 *)(lVar15 + 0x11) = 1;
      }
    }
    LOCK();
    cVar8 = *uStack_50;
    *uStack_50 = '\0';
    UNLOCK();
    if (cVar8 == '\x02') {
      lStack_90 = 0x1417108e9;
      pdb_142dc6ca0();
    }
  }
  lVar15 = *param_1;
  lVar12 = lVar15 + 0x10;
  uStack_48 = 0xfffffffffffffffe;
  pdb_1417c9b60(&uStack_88);
  pdb_141c301a0(&plStack_c8,lVar12,param_2,param_3,&uStack_88);
  lVar4 = lStack_c0;
  plVar11 = plStack_c8;
  if (uStack_80 != (uint *)0x0) {
    lVar10 = (longlong)uStack_80 * 0x10 + 0x10;
    uVar13 = (longlong)uStack_80 + lVar10 + 0x11;
    if (uVar13 != 0) {
      pub_1406abac0((byte *)((longlong)uStack_88 - lVar10),uVar13,0x10);
    }
  }
  if (plVar11 != (longlong *)0x0 || lVar4 != 0) {
    puVar14 = &UNK_14333e0e8;
    uVar16 = 0x2b;
    goto LAB_1417fb12e;
  }
  puVar2 = (uint *)(lVar15 + 0xe0);
  uVar9 = *(uint *)(lVar15 + 0xe0);
  if (uVar9 < 0x3ffffffe) {
    LOCK();
    uVar3 = *puVar2;
    if (uVar9 == uVar3) {
      *puVar2 = uVar9 + 1;
    }
    UNLOCK();
    if (uVar9 != uVar3) goto LAB_1417fb446;
    cVar8 = *(char *)(lVar15 + 0xe8);
  }
  else {
LAB_1417fb446:
    pdb_142dc6cb0(puVar2);
    cVar8 = *(char *)(lVar15 + 0xe8);
  }
  if (cVar8 != '\0') {
    uStack_88 = (longlong *)(lVar15 + 0xf0);
    uStack_80 = puVar2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14333e4d0,0x2b,&uStack_88,&UNK_14333e540,&UNK_14333ddf8);
  }
  if (*(longlong *)(lVar15 + 0x108) != 0) {
    uVar13 = pdb_1417c4de0(lVar15 + 0x110,&DAT_14333e300);
    lVar4 = *(longlong *)(lVar15 + 0xf0);
    bVar21 = (byte)(uVar13 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar22 = pshuflw(auVar22,auVar22,0);
    lVar10 = 0;
    while( true ) {
      uVar13 = uVar13 & *(ulonglong *)(lVar15 + 0xf8);
      auVar23 = *(undefined1 (*) [16])(lVar4 + uVar13);
      auVar25[0] = -(auVar23[0] == auVar22[0]);
      auVar25[1] = -(auVar23[1] == auVar22[1]);
      auVar25[2] = -(auVar23[2] == auVar22[2]);
      auVar25[3] = -(auVar23[3] == auVar22[3]);
      auVar25[4] = -(auVar23[4] == auVar22[4]);
      auVar25[5] = -(auVar23[5] == auVar22[5]);
      auVar25[6] = -(auVar23[6] == auVar22[6]);
      auVar25[7] = -(auVar23[7] == auVar22[7]);
      auVar25[8] = -(auVar23[8] == auVar22[0]);
      auVar25[9] = -(auVar23[9] == auVar22[1]);
      auVar25[10] = -(auVar23[10] == auVar22[2]);
      auVar25[0xb] = -(auVar23[0xb] == auVar22[3]);
      auVar25[0xc] = -(auVar23[0xc] == auVar22[4]);
      auVar25[0xd] = -(auVar23[0xd] == auVar22[5]);
      auVar25[0xe] = -(auVar23[0xe] == auVar22[6]);
      auVar25[0xf] = -(auVar23[0xf] == auVar22[7]);
      uVar17 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar3 = 0;
        for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar18 = uVar3 + uVar13 & *(ulonglong *)(lVar15 + 0xf8);
        pcVar1 = (char *)(lVar4 + -0x18 + uVar18 * -0x18);
        auVar26[0] = -(*pcVar1 == DAT_14332a650);
        auVar26[1] = -(pcVar1[1] == UNK_14332a651);
        auVar26[2] = -(pcVar1[2] == UNK_14332a652);
        auVar26[3] = -(pcVar1[3] == UNK_14332a653);
        auVar26[4] = -(pcVar1[4] == UNK_14332a654);
        auVar26[5] = -(pcVar1[5] == UNK_14332a655);
        auVar26[6] = -(pcVar1[6] == UNK_14332a656);
        auVar26[7] = -(pcVar1[7] == UNK_14332a657);
        auVar26[8] = -(pcVar1[8] == UNK_14332a658);
        auVar26[9] = -(pcVar1[9] == UNK_14332a659);
        auVar26[10] = -(pcVar1[10] == UNK_14332a65a);
        auVar26[0xb] = -(pcVar1[0xb] == UNK_14332a65b);
        auVar26[0xc] = -(pcVar1[0xc] == UNK_14332a65c);
        auVar26[0xd] = -(pcVar1[0xd] == UNK_14332a65d);
        auVar26[0xe] = -(pcVar1[0xe] == UNK_14332a65e);
        auVar26[0xf] = -(pcVar1[0xf] == UNK_14332a65f);
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
          plVar11 = *(longlong **)(lVar4 + uVar18 * -0x18 + -8);
          LOCK();
          lVar15 = *plVar11;
          *plVar11 = *plVar11 + 1;
          UNLOCK();
          if (*plVar11 == 0 || SCARRY8(lVar15,1) != *plVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          LOCK();
          uVar9 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          plStack_98 = plVar11;
          if (SBORROW4(0,uVar9 - 1 & 0xbfffffff)) {
            pdb_142dc6fa0(puVar2);
          }
          lVar15 = param_2;
          plVar11 = (longlong *)pdb_141c2de30(plVar11 + 2,param_2,param_3);
          if (plVar11 != (longlong *)0x0) {
            plStack_c8 = plVar11;
            lStack_c0 = lVar15;
            plStack_58 = plVar11;
            (**(code **)(lVar15 + 0x18))
                      (&uStack_88,
                       (longlong)plVar11 +
                       (*(longlong *)(lVar15 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
            auVar22[0] = -((char)uStack_88 == DAT_14332a650);
            auVar22[1] = -(uStack_88._1_1_ == UNK_14332a651);
            auVar22[2] = -(uStack_88._2_1_ == UNK_14332a652);
            auVar22[3] = -(uStack_88._3_1_ == UNK_14332a653);
            auVar22[4] = -(uStack_88._4_1_ == UNK_14332a654);
            auVar22[5] = -(uStack_88._5_1_ == UNK_14332a655);
            auVar22[6] = -(uStack_88._6_1_ == UNK_14332a656);
            auVar22[7] = -(uStack_88._7_1_ == UNK_14332a657);
            auVar22[8] = -((char)uStack_80 == UNK_14332a658);
            auVar22[9] = -(uStack_80._1_1_ == UNK_14332a659);
            auVar22[10] = -(uStack_80._2_1_ == UNK_14332a65a);
            auVar22[0xb] = -(uStack_80._3_1_ == UNK_14332a65b);
            auVar22[0xc] = -(uStack_80._4_1_ == UNK_14332a65c);
            auVar22[0xd] = -(uStack_80._5_1_ == UNK_14332a65d);
            auVar22[0xe] = -(uStack_80._6_1_ == UNK_14332a65e);
            auVar22[0xf] = -(uStack_80._7_1_ == UNK_14332a65f);
            plVar11 = plStack_58;
            if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                        (ushort)(auVar22[0xf] >> 7) << 0xf) != 0xffff) {
              uStack_88 = plStack_58;
              uStack_80 = (uint *)lVar15;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14333de10,0x13,&uStack_88,&UNK_14333e490,&UNK_14333de28);
            }
          }
          LOCK();
          *plStack_98 = *plStack_98 + -1;
          UNLOCK();
          if (*plStack_98 == 0) {
            pdb_140dd7970(&plStack_98);
          }
          if (plVar11 != (longlong *)0x0) {
            return 0;
          }
          goto LAB_1417fb266;
        }
        uVar17 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar17);
      }
      auVar24[0] = -(auVar23[0] == -1);
      auVar24[1] = -(auVar23[1] == -1);
      auVar24[2] = -(auVar23[2] == -1);
      auVar24[3] = -(auVar23[3] == -1);
      auVar24[4] = -(auVar23[4] == -1);
      auVar24[5] = -(auVar23[5] == -1);
      auVar24[6] = -(auVar23[6] == -1);
      auVar24[7] = -(auVar23[7] == -1);
      auVar24[8] = -(auVar23[8] == -1);
      auVar24[9] = -(auVar23[9] == -1);
      auVar24[10] = -(auVar23[10] == -1);
      auVar24[0xb] = -(auVar23[0xb] == -1);
      auVar24[0xc] = -(auVar23[0xc] == -1);
      auVar24[0xd] = -(auVar23[0xd] == -1);
      auVar24[0xe] = -(auVar23[0xe] == -1);
      auVar24[0xf] = -(auVar23[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar13 = uVar13 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  LOCK();
  uVar9 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if (SBORROW4(0,uVar9 - 1 & 0xbfffffff)) {
    pdb_142dc6fa0(puVar2);
  }
LAB_1417fb266:
  pdb_141806d20(&uStack_88,lVar12,param_2,param_3);
  lVar15 = (longlong)uStack_80;
  if (!SBORROW8(0,lStack_78)) {
    pbStack_a0 = pbStack_70;
    plStack_58 = uStack_88;
    plStack_98 = uStack_88;
    lStack_90 = (longlong)uStack_80;
    if (puStack_68 != (undefined *)0x0) {
      pbVar19 = pbStack_70 + 0x48;
      puVar14 = puStack_68;
      do {
        if (*(ulonglong *)(pbVar19 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar19,*(ulonglong *)(pbVar19 + -8),1);
        }
        pbVar19 = pbVar19 + 0x60;
        puVar14 = (undefined *)((longlong)puVar14 + -1);
      } while (puVar14 != (undefined *)0x0);
    }
    if (lStack_78 != 0) {
      pub_1406abac0(pbStack_a0,lStack_78 * 0x60,0x10);
    }
    uStack_88 = (longlong *)_DAT_14333e300;
    uStack_80 = (uint *)_UNK_14333e308;
    uStack_50 = (char *)CONCAT17(1,(undefined7)uStack_50);
    pdb_141c2b710(lVar12,&uStack_88,param_2,param_3,&plStack_98);
    plStack_c8 = plStack_58;
    lStack_c0 = lVar15;
    (**(code **)(lVar15 + 0x18))
              (&uStack_88,
               (longlong)plStack_58 +
               (*(longlong *)(lVar15 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    auVar23[0] = -((char)uStack_88 == DAT_14332a650);
    auVar23[1] = -(uStack_88._1_1_ == UNK_14332a651);
    auVar23[2] = -(uStack_88._2_1_ == UNK_14332a652);
    auVar23[3] = -(uStack_88._3_1_ == UNK_14332a653);
    auVar23[4] = -(uStack_88._4_1_ == UNK_14332a654);
    auVar23[5] = -(uStack_88._5_1_ == UNK_14332a655);
    auVar23[6] = -(uStack_88._6_1_ == UNK_14332a656);
    auVar23[7] = -(uStack_88._7_1_ == UNK_14332a657);
    auVar23[8] = -((char)uStack_80 == UNK_14332a658);
    auVar23[9] = -(uStack_80._1_1_ == UNK_14332a659);
    auVar23[10] = -(uStack_80._2_1_ == UNK_14332a65a);
    auVar23[0xb] = -(uStack_80._3_1_ == UNK_14332a65b);
    auVar23[0xc] = -(uStack_80._4_1_ == UNK_14332a65c);
    auVar23[0xd] = -(uStack_80._5_1_ == UNK_14332a65d);
    auVar23[0xe] = -(uStack_80._6_1_ == UNK_14332a65e);
    auVar23[0xf] = -(uStack_80._7_1_ == UNK_14332a65f);
    if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return 0;
    }
    uStack_88 = plStack_58;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14333de10,0x13,&uStack_88,&UNK_14333e490,&UNK_14333e0d0);
  }
  puVar14 = &UNK_14333e113;
  uVar16 = 0x19;
LAB_1417fb12e:
  pdb_140f370c0(0,puVar14,uVar16);
  return 1;
}

