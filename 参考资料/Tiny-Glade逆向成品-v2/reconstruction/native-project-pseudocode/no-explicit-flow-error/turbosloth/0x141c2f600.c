// VA 0x141c2f600, PDB extent 903 bytes
// turbosloth::store::DiskStore::source_file_slot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::DiskStore::source_file_slot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 903 */

longlong * pdb_141c2f600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong *plVar5;
  code *pcVar6;
  ushort uVar7;
  ulonglong *puVar8;
  char cVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  byte bVar15;
  longlong lVar16;
  bool bVar17;
  longlong lVar18;
  undefined1 auStack_b8 [32];
  longlong lStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  longlong lStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar16 = param_1 + 0x30;
  LOCK();
  bVar17 = *(char *)(param_1 + 0x30) == '\0';
  if (bVar17) {
    *(char *)(param_1 + 0x30) = '\x01';
  }
  UNLOCK();
  if (!bVar17) {
    pdb_142dc6be0(lVar16);
  }
  puVar8 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_4c = 0;
    cVar9 = *(char *)(param_1 + 0x31);
  }
  else {
    uStack_4c = pdb_142dc79e0();
    uStack_4c = uStack_4c ^ 1;
    cVar9 = *(char *)(param_1 + 0x31);
  }
  if (cVar9 != '\0') {
    uStack_90 = (undefined1)uStack_4c;
    lStack_98 = lVar16;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339fb38,0x2b,&lStack_98,&UNK_14339fc28,&UNK_14339f150);
  }
  lStack_68 = lVar16;
  pdb_140f3e010(auStack_b8,param_2,param_3);
  pdb_142566150(&lStack_98,param_1 + 0x38,auStack_b8);
  lVar16 = CONCAT71(uStack_8f,uStack_90);
  if (!SBORROW8(0,lStack_98)) {
    lStack_58 = lStack_98;
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0x90,0x10);
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x90);
    }
    pbVar10[0x10] = 0;
    pbVar10[0x11] = 0;
    pbVar10[0x28] = 0;
    pbVar10[0x29] = 0;
    pbVar10[0x2a] = 0;
    pbVar10[0x2b] = 0;
    pbVar10[0x2c] = 0;
    pbVar10[0x2d] = 0;
    pbVar10[0x2e] = 0;
    pbVar10[0x2f] = 0;
    pbVar10[0x20] = 3;
    pbVar10[0x21] = 0;
    pbVar10[0x22] = 0;
    pbVar10[0x23] = 0;
    pbVar10[0x24] = 0;
    pbVar10[0x25] = 0;
    pbVar10[0x26] = 0;
    pbVar10[0x27] = 0;
    pbVar10[0] = 1;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    pbVar10[8] = 1;
    pbVar10[9] = 0;
    pbVar10[10] = 0;
    pbVar10[0xb] = 0;
    pbVar10[0xc] = 0;
    pbVar10[0xd] = 0;
    pbVar10[0xe] = 0;
    pbVar10[0xf] = 0;
    pauVar3 = (undefined1 (*) [16])*puStack_78;
    uVar4 = puStack_78[1];
    uVar13 = uVar4 & uStack_70;
    auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar13);
    uVar7 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
    uVar14 = (uint)uVar7;
    if (uVar7 == 0) {
      lVar18 = 0x10;
      do {
        uVar13 = uVar13 + lVar18 & uVar4;
        auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar13);
        lVar18 = lVar18 + 0x10;
        uVar14 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      } while (uVar14 == 0);
    }
    uVar12 = 0;
    for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
      uVar12 = uVar12 + 1;
    }
    uVar13 = uVar12 + uVar13 & uVar4;
    bVar11 = (*pauVar3)[uVar13];
    if (-1 < (char)bVar11) {
      auVar2 = *pauVar3;
      uVar14 = 0;
      for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar2[0xf] >> 7) << 0xf); (uVar12 & 1) == 0;
          uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar14 = uVar14 + 1;
      }
      uVar13 = (ulonglong)uVar14;
      bVar11 = (*pauVar3)[uVar13];
    }
    bVar15 = (byte)(uStack_70 >> 0x39);
    (*pauVar3)[uVar13] = bVar15;
    pauVar3[1][uVar13 - 0x10 & uVar4] = bVar15;
    *(longlong *)((longlong)pauVar3 + uVar13 * -0x28 + -0x28) = lStack_58;
    *(longlong *)((longlong)pauVar3 + uVar13 * -0x28 + -0x20) = lVar16;
    lVar16 = (longlong)pauVar3 + uVar13 * -0x28;
    *(undefined8 *)((longlong)pauVar3 + uVar13 * -0x28 + -0x18) = uStack_88;
    *(undefined8 *)((longlong)pauVar3 + uVar13 * -0x28 + -0x10) = uStack_80;
    *(byte **)((longlong)pauVar3 + uVar13 * -0x28 + -8) = pbVar10;
    lVar18 = puStack_78[3] - _UNK_142e47bf8;
    puStack_78[2] = puStack_78[2] - (ulonglong)(bVar11 & 1);
    puStack_78[3] = lVar18;
  }
  plVar5 = *(longlong **)(lVar16 + -8);
  LOCK();
  lVar16 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  pcVar1 = (char *)(param_1 + 0x30);
  if (*plVar5 != 0 && SCARRY8(lVar16,1) == *plVar5 < 0) {
    if ((((char)uStack_4c == '\0') && ((*puVar8 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    LOCK();
    cVar9 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar9 == '\x02') {
      pdb_142dc6ca0(pcVar1);
    }
    return plVar5;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

