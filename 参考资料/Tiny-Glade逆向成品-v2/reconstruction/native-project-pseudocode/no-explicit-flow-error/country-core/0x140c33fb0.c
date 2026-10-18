// VA 0x140c33fb0, PDB extent 3004 bytes
// country_core::resources::walls::decorator_storage::impl$12::clone_from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::impl$12::clone_from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 3004 */

void pdb_140c33fb0(longlong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  ushort uVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  byte bVar31;
  bool bVar32;
  byte bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  if ((char)param_1[0x36] != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306c428);
  }
  puVar15 = param_2;
  pdb_1417bd260();
  pauVar22 = (undefined1 (*) [16])*param_2;
  lVar20 = param_2[3];
  auVar34 = *pauVar22;
  pauVar30 = pauVar22 + 1;
  uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar34[0xf] >> 7) << 0xf);
  do {
    bVar32 = lVar20 == 0;
    lVar20 = lVar20 + -1;
    if (bVar32) {
      plVar9 = param_1 + 0x12;
      if (param_2[0x12] == 0) {
        if (*plVar9 != 0) {
          pdb_1404d6920(param_1 + 0x12);
        }
        param_1[0x12] = 0;
        lVar20 = param_2[0x24];
      }
      else {
        if (*plVar9 == 0) {
          plVar12 = (longlong *)pdb_140f3bda0();
          if ((char)plVar12[2] == '\x01') {
            lVar20 = *plVar12;
            puVar15 = (undefined8 *)plVar12[1];
          }
          else {
            lVar20 = pdb_140f4fd10();
            *plVar12 = lVar20;
            plVar12[1] = (longlong)puVar15;
            *(undefined1 *)(plVar12 + 2) = 1;
          }
          *plVar12 = lVar20 + 1;
          lVar28 = _UNK_14306c4f8;
          lVar16 = _DAT_14306c4f0;
          lVar2 = _UNK_14306c4e8;
          lVar29 = _DAT_14306c4e0;
          puVar18 = puVar15;
          plVar12 = (longlong *)pdb_140f3bda0();
          if ((char)plVar12[2] == '\x01') {
            lVar13 = *plVar12;
            puVar18 = (undefined8 *)plVar12[1];
          }
          else {
            lVar13 = pdb_140f4fd10();
            *plVar12 = lVar13;
            plVar12[1] = (longlong)puVar18;
            *(undefined1 *)(plVar12 + 2) = 1;
          }
          *plVar12 = lVar13 + 1;
          puVar19 = puVar18;
          plVar12 = (longlong *)pdb_140f3bda0();
          if ((char)plVar12[2] == '\x01') {
            lVar14 = *plVar12;
            puVar19 = (undefined8 *)plVar12[1];
          }
          else {
            lVar14 = pdb_140f4fd10();
            *plVar12 = lVar14;
            plVar12[1] = (longlong)puVar19;
            *(undefined1 *)(plVar12 + 2) = 1;
          }
          *plVar12 = lVar14 + 1;
          param_1[0x20] = lVar16;
          param_1[0x21] = lVar28;
          param_1[0x1e] = lVar29;
          param_1[0x1f] = lVar2;
          param_1[0x1a] = lVar16;
          param_1[0x1b] = lVar28;
          param_1[0x18] = lVar29;
          param_1[0x19] = lVar2;
          param_1[0x16] = lVar13;
          param_1[0x17] = (longlong)puVar18;
          param_1[0x14] = lVar16;
          param_1[0x15] = lVar28;
          *plVar9 = lVar29;
          param_1[0x13] = lVar2;
          param_1[0x1c] = lVar20;
          param_1[0x1d] = (longlong)puVar15;
          param_1[0x22] = lVar14;
          param_1[0x23] = (longlong)puVar19;
        }
        puVar15 = param_2 + 0x12;
        pdb_140c8eed0(plVar9);
        lVar20 = param_2[0x24];
      }
      if (lVar20 == 0) {
        if (param_1[0x24] != 0) {
          pdb_1404d6920(param_1 + 0x24);
        }
        param_1[0x24] = 0;
      }
      else {
        plVar9 = param_1 + 0x24;
        if (*plVar9 == 0) {
          plVar12 = (longlong *)pdb_140f3bda0();
          if ((char)plVar12[2] == '\x01') {
            lVar20 = *plVar12;
            puVar15 = (undefined8 *)plVar12[1];
          }
          else {
            lVar20 = pdb_140f4fd10();
            *plVar12 = lVar20;
            plVar12[1] = (longlong)puVar15;
            *(undefined1 *)(plVar12 + 2) = 1;
          }
          *plVar12 = lVar20 + 1;
          lVar28 = _UNK_14306c4f8;
          lVar16 = _DAT_14306c4f0;
          lVar2 = _UNK_14306c4e8;
          lVar29 = _DAT_14306c4e0;
          puVar18 = puVar15;
          plVar12 = (longlong *)pdb_140f3bda0();
          if ((char)plVar12[2] == '\x01') {
            lVar13 = *plVar12;
            puVar18 = (undefined8 *)plVar12[1];
          }
          else {
            lVar13 = pdb_140f4fd10();
            *plVar12 = lVar13;
            plVar12[1] = (longlong)puVar18;
            *(undefined1 *)(plVar12 + 2) = 1;
          }
          *plVar12 = lVar13 + 1;
          puVar19 = puVar18;
          plVar12 = (longlong *)pdb_140f3bda0();
          if ((char)plVar12[2] == '\x01') {
            lVar14 = *plVar12;
            puVar19 = (undefined8 *)plVar12[1];
          }
          else {
            lVar14 = pdb_140f4fd10();
            *plVar12 = lVar14;
            plVar12[1] = (longlong)puVar19;
            *(undefined1 *)(plVar12 + 2) = 1;
          }
          *plVar12 = lVar14 + 1;
          param_1[0x32] = lVar16;
          param_1[0x33] = lVar28;
          param_1[0x30] = lVar29;
          param_1[0x31] = lVar2;
          param_1[0x2c] = lVar16;
          param_1[0x2d] = lVar28;
          param_1[0x2a] = lVar29;
          param_1[0x2b] = lVar2;
          param_1[0x28] = lVar13;
          param_1[0x29] = (longlong)puVar18;
          param_1[0x26] = lVar16;
          param_1[0x27] = lVar28;
          *plVar9 = lVar29;
          param_1[0x25] = lVar2;
          param_1[0x2e] = lVar20;
          param_1[0x2f] = (longlong)puVar15;
          param_1[0x34] = lVar14;
          param_1[0x35] = (longlong)puVar19;
        }
        pdb_140c8eed0(plVar9,param_2 + 0x24);
      }
      pdb_140ca3840(param_1 + 6,param_2 + 6);
      lVar20 = param_2[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = lVar20;
      pdb_140ca2990(param_1 + 0xc,param_2 + 0xc);
      lVar20 = param_2[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = lVar20;
      return;
    }
    if ((short)uVar21 == 0) {
      do {
        auVar34 = *pauVar30;
        pauVar22 = pauVar22 + -0x98;
        pauVar30 = pauVar30 + 1;
        uVar21 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar21 == 0);
    }
    uVar24 = 0;
    for (uVar25 = uVar21; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    uVar21 = uVar21 - 1 & uVar21;
    puVar15 = (undefined8 *)((longlong)pauVar22 + (ulonglong)uVar24 * -0x98 + -0x90);
    lVar2 = *(longlong *)((longlong)pauVar22 + (ulonglong)uVar24 * -0x98 + -0x98);
    uVar8 = pdb_1400af0a0(param_1 + 4);
    lVar29 = *param_1;
    bVar31 = (byte)(uVar8 >> 0x38);
    bVar33 = bVar31 >> 1;
    auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lVar16 = 0;
    uVar23 = uVar8;
    while( true ) {
      uVar23 = uVar23 & param_1[1];
      auVar1 = *(undefined1 (*) [16])(lVar29 + uVar23);
      auVar36[0] = -(auVar1[0] == auVar34[0]);
      auVar36[1] = -(auVar1[1] == auVar34[1]);
      auVar36[2] = -(auVar1[2] == auVar34[2]);
      auVar36[3] = -(auVar1[3] == auVar34[3]);
      auVar36[4] = -(auVar1[4] == auVar34[4]);
      auVar36[5] = -(auVar1[5] == auVar34[5]);
      auVar36[6] = -(auVar1[6] == auVar34[6]);
      auVar36[7] = -(auVar1[7] == auVar34[7]);
      auVar36[8] = -(auVar1[8] == auVar34[0]);
      auVar36[9] = -(auVar1[9] == auVar34[1]);
      auVar36[10] = -(auVar1[10] == auVar34[2]);
      auVar36[0xb] = -(auVar1[0xb] == auVar34[3]);
      auVar36[0xc] = -(auVar1[0xc] == auVar34[4]);
      auVar36[0xd] = -(auVar1[0xd] == auVar34[5]);
      auVar36[0xe] = -(auVar1[0xe] == auVar34[6]);
      auVar36[0xf] = -(auVar1[0xf] == auVar34[7]);
      uVar27 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar24 = (uint)uVar27;
      while (uVar27 != 0) {
        uVar25 = 0;
        for (uVar4 = uVar24; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        lVar28 = (uVar25 + uVar23 & param_1[1]) * -0x98;
        if (*(longlong *)(lVar29 + -0x98 + lVar28) == lVar2) {
          lVar29 = lVar29 + lVar28;
          goto LAB_140c340b3;
        }
        uVar27 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar27);
      }
      auVar35[0] = -(auVar1[0] == -1);
      auVar35[1] = -(auVar1[1] == -1);
      auVar35[2] = -(auVar1[2] == -1);
      auVar35[3] = -(auVar1[3] == -1);
      auVar35[4] = -(auVar1[4] == -1);
      auVar35[5] = -(auVar1[5] == -1);
      auVar35[6] = -(auVar1[6] == -1);
      auVar35[7] = -(auVar1[7] == -1);
      auVar35[8] = -(auVar1[8] == -1);
      auVar35[9] = -(auVar1[9] == -1);
      auVar35[10] = -(auVar1[10] == -1);
      auVar35[0xb] = -(auVar1[0xb] == -1);
      auVar35[0xc] = -(auVar1[0xc] == -1);
      auVar35[0xd] = -(auVar1[0xd] == -1);
      auVar35[0xe] = -(auVar1[0xe] == -1);
      auVar35[0xf] = -(auVar1[0xf] == -1);
      uVar27 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      if (uVar27 != 0) break;
      uVar23 = uVar23 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
    if (param_1[2] == 0) {
      lVar16 = 1;
      pdb_142dadf10(param_1,1,param_1 + 4,CONCAT71((uint7)(byte)(uVar27 >> 8),1));
      plVar9 = (longlong *)pdb_140f3bda0();
      if ((char)plVar9[2] == '\x01') goto LAB_140c341a1;
LAB_140c343ab:
      lVar28 = pdb_140f4fd10();
      *plVar9 = lVar28;
      plVar9[1] = lVar16;
      *(undefined1 *)(plVar9 + 2) = 1;
    }
    else {
      plVar9 = (longlong *)pdb_140f3bda0();
      if ((char)plVar9[2] != '\x01') goto LAB_140c343ab;
LAB_140c341a1:
      lVar28 = *plVar9;
      lVar16 = plVar9[1];
    }
    *plVar9 = lVar28 + 1;
    lVar7 = _UNK_14306c4f8;
    lVar6 = _DAT_14306c4f0;
    lVar5 = _UNK_14306c4e8;
    lVar14 = _DAT_14306c4e0;
    lVar13 = lVar16;
    plVar9 = (longlong *)pdb_140f3bda0();
    if ((char)plVar9[2] == '\x01') {
      lVar10 = *plVar9;
      lVar13 = plVar9[1];
    }
    else {
      lVar10 = pdb_140f4fd10();
      *plVar9 = lVar10;
      plVar9[1] = lVar13;
      *(undefined1 *)(plVar9 + 2) = 1;
    }
    *plVar9 = lVar10 + 1;
    lVar17 = lVar13;
    plVar9 = (longlong *)pdb_140f3bda0();
    if ((char)plVar9[2] == '\x01') {
      lVar11 = *plVar9;
      lVar17 = plVar9[1];
    }
    else {
      lVar11 = pdb_140f4fd10();
      *plVar9 = lVar11;
      plVar9[1] = lVar17;
      *(undefined1 *)(plVar9 + 2) = 1;
    }
    *plVar9 = lVar11 + 1;
    pauVar3 = (undefined1 (*) [16])*param_1;
    uVar23 = param_1[1];
    uVar8 = uVar8 & uVar23;
    auVar34 = *(undefined1 (*) [16])(*pauVar3 + uVar8);
    uVar27 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar34[0xf] >> 7) << 0xf;
    uVar24 = (uint)uVar27;
    if (uVar27 == 0) {
      lVar29 = 0x10;
      do {
        uVar8 = uVar8 + lVar29 & uVar23;
        auVar34 = *(undefined1 (*) [16])(*pauVar3 + uVar8);
        lVar29 = lVar29 + 0x10;
        uVar24 = (uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar34[0xf] >> 7) << 0xf);
      } while (uVar24 == 0);
    }
    uVar25 = 0;
    for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
      uVar25 = uVar25 + 1;
    }
    uVar8 = uVar25 + uVar8 & uVar23;
    bVar33 = (*pauVar3)[uVar8];
    if (-1 < (char)bVar33) {
      auVar34 = *pauVar3;
      uVar24 = 0;
      for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar34[0xf] >> 7) << 0xf); (uVar25 & 1) == 0;
          uVar25 = uVar25 >> 1 | 0x80000000) {
        uVar24 = uVar24 + 1;
      }
      uVar8 = (ulonglong)uVar24;
      bVar33 = (*pauVar3)[uVar8];
    }
    bVar31 = bVar31 >> 1;
    (*pauVar3)[uVar8] = bVar31;
    pauVar3[1][uVar8 - 0x10 & uVar23] = bVar31;
    param_1[2] = param_1[2] - (ulonglong)(bVar33 & 1);
    lVar26 = uVar8 * -0x98;
    lVar29 = (longlong)pauVar3 + lVar26;
    *(longlong *)((longlong)pauVar3 + lVar26 + -0x98) = lVar2;
    plVar9 = (longlong *)((longlong)pauVar3 + lVar26 + -0x90);
    *plVar9 = lVar14;
    plVar9[1] = lVar5;
    plVar9 = (longlong *)((longlong)pauVar3 + lVar26 + -0x80);
    *plVar9 = lVar6;
    plVar9[1] = lVar7;
    plVar9 = (longlong *)((longlong)pauVar3 + lVar26 + -0x70);
    *plVar9 = lVar10;
    plVar9[1] = lVar13;
    plVar9 = (longlong *)((longlong)pauVar3 + lVar26 + -0x60);
    *plVar9 = lVar14;
    plVar9[1] = lVar5;
    plVar9 = (longlong *)((longlong)pauVar3 + lVar26 + -0x50);
    *plVar9 = lVar6;
    plVar9[1] = lVar7;
    plVar9 = (longlong *)((longlong)pauVar3 + lVar26 + -0x40);
    *plVar9 = lVar28;
    plVar9[1] = lVar16;
    plVar9 = (longlong *)((longlong)pauVar3 + lVar26 + -0x30);
    *plVar9 = lVar14;
    plVar9[1] = lVar5;
    plVar9 = (longlong *)((longlong)pauVar3 + lVar26 + -0x20);
    *plVar9 = lVar6;
    plVar9[1] = lVar7;
    *(longlong *)((longlong)pauVar3 + lVar26 + -0x10) = lVar11;
    *(longlong *)((longlong)pauVar3 + lVar26 + -8) = lVar17;
    param_1[3] = param_1[3] + 1;
LAB_140c340b3:
    pdb_140c8eed0(lVar29 + -0x90);
  } while( true );
}

