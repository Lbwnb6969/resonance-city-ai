// VA 0x141456830, PDB extent 1105 bytes
// country_core::resources::rt::RtWorld::get_mut<country_core::resources::walls::WallId>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::rt::RtWorld::get_mut<country_core::resources::walls::WallId>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
   Extent: 1105 */

byte * pdb_141456830(longlong *param_1,undefined1 (*param_2) [16])

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte *arg1;
  byte *pbVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ushort uVar18;
  undefined1 (*pauVar19) [16];
  byte bVar20;
  bool bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong lStack_60;
  undefined1 (*pauStack_58) [16];
  byte *pbStack_50;
  undefined1 (*pauStack_48) [16];
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar11 = pdb_140947f90(param_2);
  lStack_60 = lVar11;
  pauStack_58 = param_2;
  uVar12 = pdb_1413f04b0(param_1 + 4,&lStack_60);
  bVar20 = (byte)(uVar12 >> 0x38);
  bVar22 = bVar20 >> 1;
  auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar23 = pshuflw(auVar23,auVar23,0);
  lVar15 = 0;
  uVar17 = uVar12;
  while( true ) {
    uVar17 = uVar17 & param_1[1];
    pcVar1 = (char *)(*param_1 + uVar17);
    auVar25[0] = -(*pcVar1 == auVar23[0]);
    auVar25[1] = -(pcVar1[1] == auVar23[1]);
    auVar25[2] = -(pcVar1[2] == auVar23[2]);
    auVar25[3] = -(pcVar1[3] == auVar23[3]);
    auVar25[4] = -(pcVar1[4] == auVar23[4]);
    auVar25[5] = -(pcVar1[5] == auVar23[5]);
    auVar25[6] = -(pcVar1[6] == auVar23[6]);
    auVar25[7] = -(pcVar1[7] == auVar23[7]);
    auVar25[8] = -(pcVar1[8] == auVar23[0]);
    auVar25[9] = -(pcVar1[9] == auVar23[1]);
    auVar25[10] = -(pcVar1[10] == auVar23[2]);
    auVar25[0xb] = -(pcVar1[0xb] == auVar23[3]);
    auVar25[0xc] = -(pcVar1[0xc] == auVar23[4]);
    auVar25[0xd] = -(pcVar1[0xd] == auVar23[5]);
    auVar25[0xe] = -(pcVar1[0xe] == auVar23[6]);
    auVar25[0xf] = -(pcVar1[0xf] == auVar23[7]);
    uVar18 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
    uVar16 = (uint)uVar18;
    while (uVar18 != 0) {
      uVar14 = 0;
      for (uVar3 = uVar16; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar14 = uVar14 + 1;
      }
      pauVar19 = (undefined1 (*) [16])(*param_1 + (uVar14 + uVar17 & param_1[1]) * -0x20);
      if ((*(longlong *)pauVar19[-2] == lVar11) &&
         (*(undefined1 (**) [16])(pauVar19[-2] + 8) == param_2)) goto LAB_141456928;
      uVar18 = (ushort)(uVar16 - 1) & (ushort)uVar16;
      uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar18);
    }
    auVar24[0] = -(*pcVar1 == -1);
    auVar24[1] = -(pcVar1[1] == -1);
    auVar24[2] = -(pcVar1[2] == -1);
    auVar24[3] = -(pcVar1[3] == -1);
    auVar24[4] = -(pcVar1[4] == -1);
    auVar24[5] = -(pcVar1[5] == -1);
    auVar24[6] = -(pcVar1[6] == -1);
    auVar24[7] = -(pcVar1[7] == -1);
    auVar24[8] = -(pcVar1[8] == -1);
    auVar24[9] = -(pcVar1[9] == -1);
    auVar24[10] = -(pcVar1[10] == -1);
    auVar24[0xb] = -(pcVar1[0xb] == -1);
    auVar24[0xc] = -(pcVar1[0xc] == -1);
    auVar24[0xd] = -(pcVar1[0xd] == -1);
    auVar24[0xe] = -(pcVar1[0xe] == -1);
    auVar24[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
    uVar17 = uVar17 + lVar15 + 0x10;
    lVar15 = lVar15 + 0x10;
  }
  if (param_1[2] == 0) {
    pdb_142d94cf0(param_1,1,param_1 + 4,CONCAT71((int7)(uVar17 >> 8),1));
  }
  pauVar19 = param_2;
  if (lVar11 != 4) {
    *(undefined1 *)(param_1 + 7) = 1;
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x70,0x10);
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x70);
    }
    pbVar13[0] = 1;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar13[4] = 0;
    pbVar13[5] = 0;
    pbVar13[6] = 0;
    pbVar13[7] = 0;
    pbVar13[8] = 1;
    uVar10 = _UNK_143308428;
    pbVar13[9] = 0;
    pbVar13[10] = 0;
    pbVar13[0xb] = 0;
    pbVar13[0xc] = 0;
    pbVar13[0xd] = 0;
    pbVar13[0xe] = 0;
    pbVar13[0xf] = 0;
    *(undefined8 *)(pbVar13 + 0x40) = _DAT_143308420;
    *(undefined8 *)(pbVar13 + 0x48) = uVar10;
    uVar10 = _UNK_143308418;
    *(undefined8 *)(pbVar13 + 0x30) = _DAT_143308410;
    *(undefined8 *)(pbVar13 + 0x38) = uVar10;
    uVar10 = _UNK_143308408;
    *(undefined8 *)(pbVar13 + 0x20) = _DAT_143308400;
    *(undefined8 *)(pbVar13 + 0x28) = uVar10;
    uVar10 = _UNK_1433083f8;
    *(undefined8 *)(pbVar13 + 0x10) = _DAT_1433083f0;
    *(undefined8 *)(pbVar13 + 0x18) = uVar10;
    pbVar13[0x50] = 0;
    pbVar13[0x51] = 0;
    pbVar13[0x52] = 0;
    pbVar13[0x53] = 0;
    pbVar13[0x54] = 0;
    pbVar13[0x55] = 0;
    pbVar13[0x56] = 0;
    pbVar13[0x57] = 0;
    pbVar13[0x58] = 4;
    pbVar13[0x59] = 0;
    pbVar13[0x5a] = 0;
    pbVar13[0x5b] = 0;
    pbVar13[0x5c] = 0;
    pbVar13[0x5d] = 0;
    pbVar13[0x5e] = 0;
    pbVar13[0x5f] = 0;
    pbVar13[0x60] = 0;
    pbVar13[0x61] = 0;
    pbVar13[0x62] = 0;
    pbVar13[99] = 0;
    pbVar13[100] = 0;
    pbVar13[0x65] = 0;
    pbVar13[0x66] = 0;
    pbVar13[0x67] = 0;
    pbVar13[0x68] = 0;
    pbVar13[0x69] = 0;
    pbVar13[0x6a] = 0;
    pbVar13[0x6b] = 0;
    pauVar2 = (undefined1 (*) [16])*param_1;
    uVar17 = param_1[1];
    uVar12 = uVar12 & uVar17;
    auVar23 = *(undefined1 (*) [16])(*pauVar2 + uVar12);
    uVar18 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
             (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
    uVar16 = (uint)uVar18;
    if (uVar18 == 0) {
      lVar15 = 0x10;
      do {
        uVar12 = uVar12 + lVar15 & uVar17;
        auVar23 = *(undefined1 (*) [16])(*pauVar2 + uVar12);
        lVar15 = lVar15 + 0x10;
        uVar16 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
                                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
      } while (uVar16 == 0);
    }
    uVar14 = 0;
    for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    uVar12 = uVar14 + uVar12 & uVar17;
    bVar22 = (*pauVar2)[uVar12];
    if (-1 < (char)bVar22) {
      auVar23 = *pauVar2;
      uVar16 = 0;
      for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
          uVar14 = uVar14 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      uVar12 = (ulonglong)uVar16;
      bVar22 = (*pauVar2)[uVar12];
    }
    bVar20 = bVar20 >> 1;
    (*pauVar2)[uVar12] = bVar20;
    pauVar2[1][uVar12 - 0x10 & uVar17] = bVar20;
    pauVar19 = pauVar2 + uVar12 * -2;
    *(longlong *)pauVar2[uVar12 * -2 + -2] = lVar11;
    *(undefined1 (**) [16])(pauVar19[-2] + 8) = param_2;
    *(byte **)pauVar19[-1] = pbVar13;
    pauVar19[-1][8] = 0;
    lVar11 = param_1[3] - _UNK_142e47bf8;
    param_1[2] = param_1[2] - ((ulonglong)bVar22 & 0xffffffffffffff01);
    param_1[3] = lVar11;
  }
LAB_141456928:
  pauVar19[-1][8] = 1;
  LOCK();
  bVar21 = **(longlong **)pauVar19[-1] == 1;
  if (bVar21) {
    **(longlong **)pauVar19[-1] = 0;
  }
  UNLOCK();
  pbVar13 = *(byte **)pauVar19[-1];
  if (bVar21) {
    if (*(longlong *)(pbVar13 + 8) == 1) {
      pbVar13[0] = 1;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      pbVar13[4] = 0;
      pbVar13[5] = 0;
      pbVar13[6] = 0;
      pbVar13[7] = 0;
      pbStack_50 = pbVar13;
    }
    else {
      pbStack_50 = pbVar13 + 8;
      uVar17 = 0x60;
      pauStack_48 = (undefined1 (*) [16])pbVar13;
      arg1 = (byte *)pdb_140f606e0(0x10);
      pbVar13 = arg1;
      pbVar9 = pbStack_50;
      if (uVar17 != 0) {
        pdb_14007ee60();
        pbVar13 = pub_1406abab0(uVar17,(ulonglong)arg1);
        pbVar9 = pbStack_50;
      }
      if (pbVar13 == (byte *)0x0) {
        pbStack_50 = pbVar9;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(arg1,uVar17);
      }
      pbVar13[0] = 1;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      pbVar13[4] = 0;
      pbVar13[5] = 0;
      pbVar13[6] = 0;
      pbVar13[7] = 0;
      pbVar13[8] = 1;
      pbVar13[9] = 0;
      pbVar13[10] = 0;
      pbVar13[0xb] = 0;
      pbVar13[0xc] = 0;
      pbVar13[0xd] = 0;
      pbVar13[0xe] = 0;
      pbVar13[0xf] = 0;
      lVar11 = *(longlong *)((longlong)pauStack_48 + 0x18);
      lVar15 = *(longlong *)((longlong)pauStack_48 + 0x20);
      lVar4 = *(longlong *)((longlong)pauStack_48 + 0x28);
      lVar5 = *(longlong *)((longlong)pauStack_48 + 0x30);
      lVar6 = *(longlong *)((longlong)pauStack_48 + 0x38);
      lVar7 = *(longlong *)((longlong)pauStack_48 + 0x40);
      lVar8 = *(longlong *)((longlong)pauStack_48 + 0x48);
      *(longlong *)(pbVar13 + 0x10) = *(longlong *)((longlong)pauStack_48 + 0x10);
      *(longlong *)(pbVar13 + 0x18) = lVar11;
      *(longlong *)(pbVar13 + 0x20) = lVar15;
      *(longlong *)(pbVar13 + 0x28) = lVar4;
      *(longlong *)(pbVar13 + 0x30) = lVar5;
      *(longlong *)(pbVar13 + 0x38) = lVar6;
      *(longlong *)(pbVar13 + 0x40) = lVar7;
      *(longlong *)(pbVar13 + 0x48) = lVar8;
      lVar11 = *(longlong *)((longlong)pauStack_48 + 0x58);
      *(longlong *)(pbVar13 + 0x50) = *(longlong *)((longlong)pauStack_48 + 0x50);
      *(longlong *)(pbVar13 + 0x58) = lVar11;
      lVar11 = *(longlong *)((longlong)pauStack_48 + 0x68);
      *(longlong *)(pbVar13 + 0x60) = *(longlong *)((longlong)pauStack_48 + 0x60);
      *(longlong *)(pbVar13 + 0x68) = lVar11;
      *(byte **)pauVar19[-1] = pbVar13;
      pbStack_50 = pbVar13;
      if (pauStack_48 != (undefined1 (*) [16])0xffffffffffffffff) {
        LOCK();
        *(longlong *)pbVar9 = *(longlong *)pbVar9 + -1;
        UNLOCK();
        if (*(longlong *)pbVar9 == 0) {
          pbStack_50 = pbVar9;
          pub_1406abac0((byte *)pauStack_48,0x70,0x10);
          pbStack_50 = pbVar13;
        }
      }
    }
  }
  else {
    pauStack_48 = pauVar19 + -1;
    pbStack_50 = (byte *)pdb_14141d5b0(pbVar13 + 0x10);
    LOCK();
    *(longlong *)pbVar13 = *(longlong *)pbVar13 + -1;
    UNLOCK();
    if (*(longlong *)pbVar13 == 0) {
      pdb_140c7b740(pauStack_48);
    }
    *(byte **)*pauStack_48 = pbStack_50;
  }
  return pbStack_50 + 0x10;
}

