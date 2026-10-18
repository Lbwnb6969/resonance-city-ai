// VA 0x141c2de30, PDB extent 643 bytes
// turbosloth::store::SingleTypeValueCache::get
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::SingleTypeValueCache::get
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 643 */

longlong * pdb_141c2de30(uint *param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar10 = *param_1;
  if (uVar10 < 0x3ffffffe) {
    LOCK();
    uVar1 = *param_1;
    if (uVar10 == uVar1) {
      *param_1 = uVar10 + 1;
    }
    UNLOCK();
    if (uVar10 != uVar1) goto LAB_141c2df7c;
    cVar3 = (char)param_1[2];
  }
  else {
LAB_141c2df7c:
    pdb_142dc6cb0(param_1);
    cVar3 = (char)param_1[2];
  }
  if (cVar3 != '\0') {
    puStack_48 = param_1 + 4;
    pcStack_40 = (code *)param_1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339fb38,0x2b,&puStack_48,&UNK_14339fbc8,&UNK_14339eee8);
  }
  if (*(longlong *)(param_1 + 10) == 0) {
LAB_141c2df4c:
    plVar5 = (longlong *)0x0;
  }
  else {
    bVar12 = (byte)(param_2 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    plVar5 = (longlong *)0x0;
    lVar8 = 0;
    uVar9 = param_2;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(param_1 + 6);
      auVar2 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 4) + uVar9);
      auVar15[0] = -(auVar2[0] == auVar13[0]);
      auVar15[1] = -(auVar2[1] == auVar13[1]);
      auVar15[2] = -(auVar2[2] == auVar13[2]);
      auVar15[3] = -(auVar2[3] == auVar13[3]);
      auVar15[4] = -(auVar2[4] == auVar13[4]);
      auVar15[5] = -(auVar2[5] == auVar13[5]);
      auVar15[6] = -(auVar2[6] == auVar13[6]);
      auVar15[7] = -(auVar2[7] == auVar13[7]);
      auVar15[8] = -(auVar2[8] == auVar13[0]);
      auVar15[9] = -(auVar2[9] == auVar13[1]);
      auVar15[10] = -(auVar2[10] == auVar13[2]);
      auVar15[0xb] = -(auVar2[0xb] == auVar13[3]);
      auVar15[0xc] = -(auVar2[0xc] == auVar13[4]);
      auVar15[0xd] = -(auVar2[0xd] == auVar13[5]);
      auVar15[0xe] = -(auVar2[0xe] == auVar13[6]);
      auVar15[0xf] = -(auVar2[0xf] == auVar13[7]);
      uVar6 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar6;
      while (uVar6 != 0) {
        uVar1 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar1 = uVar1 + 1;
        }
        lVar7 = *(longlong *)(param_1 + 4) + (uVar1 + uVar9 & *(ulonglong *)(param_1 + 6)) * -0x20;
        if (*(ulonglong *)(lVar7 + -0x20) == param_2 && *(longlong *)(lVar7 + -0x18) == param_3) {
          plVar5 = *(longlong **)(lVar7 + -0x10);
          if (plVar5 == (longlong *)0xffffffffffffffff) goto LAB_141c2df4c;
          lVar8 = *plVar5;
          goto LAB_141c2df30;
        }
        uVar6 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar6);
      }
      auVar14[0] = -(auVar2[0] == -1);
      auVar14[1] = -(auVar2[1] == -1);
      auVar14[2] = -(auVar2[2] == -1);
      auVar14[3] = -(auVar2[3] == -1);
      auVar14[4] = -(auVar2[4] == -1);
      auVar14[5] = -(auVar2[5] == -1);
      auVar14[6] = -(auVar2[6] == -1);
      auVar14[7] = -(auVar2[7] == -1);
      auVar14[8] = -(auVar2[8] == -1);
      auVar14[9] = -(auVar2[9] == -1);
      auVar14[10] = -(auVar2[10] == -1);
      auVar14[0xb] = -(auVar2[0xb] == -1);
      auVar14[0xc] = -(auVar2[0xc] == -1);
      auVar14[0xd] = -(auVar2[0xd] == -1);
      auVar14[0xe] = -(auVar2[0xe] == -1);
      auVar14[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar9 = uVar9 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
LAB_141c2df4e:
  LOCK();
  uVar10 = *param_1;
  *param_1 = *param_1 - 1;
  UNLOCK();
  if (SBORROW4(0,uVar10 - 1 & 0xbfffffff)) {
    pdb_142dc6fa0(param_1);
  }
  return plVar5;
  while( true ) {
    if (lVar8 < 0) {
      puStack_48 = (uint *)&UNK_1431f7898;
      pcStack_40 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1431f78a8,&puStack_48,&UNK_1431f7918);
    }
    LOCK();
    lVar7 = *plVar5;
    bVar11 = lVar8 == lVar7;
    if (bVar11) {
      *plVar5 = lVar8 + 1;
      lVar7 = lVar8;
    }
    UNLOCK();
    lVar8 = lVar7;
    if (bVar11) break;
LAB_141c2df30:
    if (lVar8 == 0) goto LAB_141c2df4c;
  }
  goto LAB_141c2df4e;
}

