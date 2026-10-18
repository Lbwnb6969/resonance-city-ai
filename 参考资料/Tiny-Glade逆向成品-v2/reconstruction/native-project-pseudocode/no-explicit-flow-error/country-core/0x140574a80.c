// VA 0x140574a80, PDB extent 1073 bytes
// country_core::resources::rt::RtWorld::get_mut<enum2$<country_core::resources::rt::RtMeshHandle> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::rt::RtWorld::get_mut<enum2$<country_core::resources::rt::RtMeshHandle> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
   Extent: 1073 */

byte * pdb_140574a80(longlong *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  byte *arg1;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
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
  longlong lStack_58;
  byte *pbStack_50;
  undefined1 (*pauStack_48) [16];
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lStack_60 = param_2;
  lStack_58 = param_3;
  uVar12 = pdb_1400aead0(param_1 + 4,&lStack_60);
  bVar20 = (byte)(uVar12 >> 0x38);
  bVar22 = bVar20 >> 1;
  auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar23 = pshuflw(auVar23,auVar23,0);
  lVar16 = 0;
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
    uVar14 = (uint)uVar18;
    while (uVar18 != 0) {
      uVar15 = 0;
      for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      pauVar19 = (undefined1 (*) [16])(*param_1 + (uVar15 + uVar17 & param_1[1]) * -0x20);
      if ((*(longlong *)pauVar19[-2] == param_2) && (*(longlong *)(pauVar19[-2] + 8) == param_3))
      goto LAB_140574c6d;
      uVar18 = (ushort)(uVar14 - 1) & (ushort)uVar14;
      uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar18);
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
    uVar17 = uVar17 + lVar16 + 0x10;
    lVar16 = lVar16 + 0x10;
  }
  if (param_1[2] == 0) {
    pdb_142d94cf0(param_1,1,param_1 + 4,CONCAT71((int7)(uVar17 >> 8),1));
  }
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
  uVar11 = _UNK_142f3c648;
  pbVar13[9] = 0;
  pbVar13[10] = 0;
  pbVar13[0xb] = 0;
  pbVar13[0xc] = 0;
  pbVar13[0xd] = 0;
  pbVar13[0xe] = 0;
  pbVar13[0xf] = 0;
  *(undefined8 *)(pbVar13 + 0x40) = _DAT_142f3c640;
  *(undefined8 *)(pbVar13 + 0x48) = uVar11;
  uVar11 = _UNK_142f3c638;
  *(undefined8 *)(pbVar13 + 0x30) = _DAT_142f3c630;
  *(undefined8 *)(pbVar13 + 0x38) = uVar11;
  uVar11 = _UNK_142f3c628;
  *(undefined8 *)(pbVar13 + 0x20) = _DAT_142f3c620;
  *(undefined8 *)(pbVar13 + 0x28) = uVar11;
  uVar11 = _UNK_142f3c618;
  *(undefined8 *)(pbVar13 + 0x10) = _DAT_142f3c610;
  *(undefined8 *)(pbVar13 + 0x18) = uVar11;
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
           (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar23[0xf] >> 7) << 0xf
  ;
  uVar14 = (uint)uVar18;
  if (uVar18 == 0) {
    lVar16 = 0x10;
    do {
      uVar12 = uVar12 + lVar16 & uVar17;
      auVar23 = *(undefined1 (*) [16])(*pauVar2 + uVar12);
      lVar16 = lVar16 + 0x10;
      uVar14 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
    } while (uVar14 == 0);
  }
  uVar15 = 0;
  for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
    uVar15 = uVar15 + 1;
  }
  uVar12 = uVar15 + uVar12 & uVar17;
  bVar22 = (*pauVar2)[uVar12];
  if (-1 < (char)bVar22) {
    auVar23 = *pauVar2;
    uVar14 = 0;
    for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
        uVar15 = uVar15 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    uVar12 = (ulonglong)uVar14;
    bVar22 = (*pauVar2)[uVar12];
  }
  bVar20 = bVar20 >> 1;
  (*pauVar2)[uVar12] = bVar20;
  pauVar2[1][uVar12 - 0x10 & uVar17] = bVar20;
  pauVar19 = pauVar2 + uVar12 * -2;
  *(longlong *)pauVar2[uVar12 * -2 + -2] = param_2;
  *(longlong *)(pauVar19[-2] + 8) = param_3;
  *(byte **)pauVar19[-1] = pbVar13;
  pauVar19[-1][8] = 0;
  lVar16 = param_1[3] - _UNK_142e47bf8;
  param_1[2] = param_1[2] - ((ulonglong)bVar22 & 0xffffffffffffff01);
  param_1[3] = lVar16;
LAB_140574c6d:
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
      pbVar10 = pbStack_50;
      if (uVar17 != 0) {
        pdb_14007ee60();
        pbVar13 = pub_1406abab0(uVar17,(ulonglong)arg1);
        pbVar10 = pbStack_50;
      }
      if (pbVar13 == (byte *)0x0) {
        pbStack_50 = pbVar10;
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
      lVar16 = *(longlong *)((longlong)pauStack_48 + 0x18);
      lVar4 = *(longlong *)((longlong)pauStack_48 + 0x20);
      lVar5 = *(longlong *)((longlong)pauStack_48 + 0x28);
      lVar6 = *(longlong *)((longlong)pauStack_48 + 0x30);
      lVar7 = *(longlong *)((longlong)pauStack_48 + 0x38);
      lVar8 = *(longlong *)((longlong)pauStack_48 + 0x40);
      lVar9 = *(longlong *)((longlong)pauStack_48 + 0x48);
      *(longlong *)(pbVar13 + 0x10) = *(longlong *)((longlong)pauStack_48 + 0x10);
      *(longlong *)(pbVar13 + 0x18) = lVar16;
      *(longlong *)(pbVar13 + 0x20) = lVar4;
      *(longlong *)(pbVar13 + 0x28) = lVar5;
      *(longlong *)(pbVar13 + 0x30) = lVar6;
      *(longlong *)(pbVar13 + 0x38) = lVar7;
      *(longlong *)(pbVar13 + 0x40) = lVar8;
      *(longlong *)(pbVar13 + 0x48) = lVar9;
      lVar16 = *(longlong *)((longlong)pauStack_48 + 0x58);
      *(longlong *)(pbVar13 + 0x50) = *(longlong *)((longlong)pauStack_48 + 0x50);
      *(longlong *)(pbVar13 + 0x58) = lVar16;
      lVar16 = *(longlong *)((longlong)pauStack_48 + 0x68);
      *(longlong *)(pbVar13 + 0x60) = *(longlong *)((longlong)pauStack_48 + 0x60);
      *(longlong *)(pbVar13 + 0x68) = lVar16;
      *(byte **)pauVar19[-1] = pbVar13;
      pbStack_50 = pbVar13;
      if (pauStack_48 != (undefined1 (*) [16])0xffffffffffffffff) {
        LOCK();
        *(longlong *)pbVar10 = *(longlong *)pbVar10 + -1;
        UNLOCK();
        if (*(longlong *)pbVar10 == 0) {
          pbStack_50 = pbVar10;
          pub_1406abac0((byte *)pauStack_48,0x70,0x10);
          pbStack_50 = pbVar13;
        }
      }
    }
  }
  else {
    pauStack_48 = pauVar19 + -1;
    pbStack_50 = (byte *)pdb_140315040(pbVar13 + 0x10);
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

