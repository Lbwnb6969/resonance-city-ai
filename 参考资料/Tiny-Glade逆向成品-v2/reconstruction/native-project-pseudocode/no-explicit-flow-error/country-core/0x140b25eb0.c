// VA 0x140b25eb0, PDB extent 512 bytes
// country_core::utils::legacy_mod_mesh::upgrade_legacy_textured_clutter_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/legacy_mod_mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::legacy_mod_mesh::upgrade_legacy_textured_clutter_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/legacy_mod_mesh.rs
   Extent: 512 */

undefined8 pdb_140b25eb0(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong unaff_RDI;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_40 [24];
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar7 = pdb_1400af950(param_1 + 0x58,&UNK_143056b1c,5);
    lVar2 = *(longlong *)(param_1 + 0x38);
    bVar12 = (byte)(uVar7 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar8 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_1 + 0x40);
      pcVar1 = (char *)(lVar2 + uVar7);
      auVar16[0] = -(*pcVar1 == auVar13[0]);
      auVar16[1] = -(pcVar1[1] == auVar13[1]);
      auVar16[2] = -(pcVar1[2] == auVar13[2]);
      auVar16[3] = -(pcVar1[3] == auVar13[3]);
      auVar16[4] = -(pcVar1[4] == auVar13[4]);
      auVar16[5] = -(pcVar1[5] == auVar13[5]);
      auVar16[6] = -(pcVar1[6] == auVar13[6]);
      auVar16[7] = -(pcVar1[7] == auVar13[7]);
      auVar16[8] = -(pcVar1[8] == auVar13[0]);
      auVar16[9] = -(pcVar1[9] == auVar13[1]);
      auVar16[10] = -(pcVar1[10] == auVar13[2]);
      auVar16[0xb] = -(pcVar1[0xb] == auVar13[3]);
      auVar16[0xc] = -(pcVar1[0xc] == auVar13[4]);
      auVar16[0xd] = -(pcVar1[0xd] == auVar13[5]);
      auVar16[0xe] = -(pcVar1[0xe] == auVar13[6]);
      auVar16[0xf] = -(pcVar1[0xf] == auVar13[7]);
      uVar10 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar11 = (uVar4 + uVar7 & *(ulonglong *)(param_1 + 0x40)) * -0x38;
        if ((*(longlong *)(lVar2 + -0x28 + lVar11) == 5) &&
           (piVar3 = *(int **)(lVar11 + lVar2 + -0x30),
           unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1),
           (char)piVar3[1] == 's' && *piVar3 == 0x67616c66)) goto LAB_140b25f8d;
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar14[0] = -(*pcVar1 == -1);
      auVar14[1] = -(pcVar1[1] == -1);
      auVar14[2] = -(pcVar1[2] == -1);
      auVar14[3] = -(pcVar1[3] == -1);
      auVar14[4] = -(pcVar1[4] == -1);
      auVar14[5] = -(pcVar1[5] == -1);
      auVar14[6] = -(pcVar1[6] == -1);
      auVar14[7] = -(pcVar1[7] == -1);
      auVar14[8] = -(pcVar1[8] == -1);
      auVar14[9] = -(pcVar1[9] == -1);
      auVar14[10] = -(pcVar1[10] == -1);
      auVar14[0xb] = -(pcVar1[0xb] == -1);
      auVar14[0xc] = -(pcVar1[0xc] == -1);
      auVar14[0xd] = -(pcVar1[0xd] == -1);
      auVar14[0xe] = -(pcVar1[0xe] == -1);
      auVar14[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar7 = uVar7 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
    unaff_RDI = 0;
LAB_140b25f8d:
    if (*(longlong *)(param_1 + 0x50) != 0) {
      uVar7 = pdb_1400af950(param_1 + 0x58,&UNK_143056b21,0xc);
      lVar2 = *(longlong *)(param_1 + 0x38);
      bVar12 = (byte)(uVar7 >> 0x39);
      auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
      auVar13 = pshuflw(auVar13,auVar13,0);
      lVar8 = 0;
      while( true ) {
        uVar7 = uVar7 & *(ulonglong *)(param_1 + 0x40);
        auVar16 = *(undefined1 (*) [16])(lVar2 + uVar7);
        auVar17[0] = -(auVar16[0] == auVar13[0]);
        auVar17[1] = -(auVar16[1] == auVar13[1]);
        auVar17[2] = -(auVar16[2] == auVar13[2]);
        auVar17[3] = -(auVar16[3] == auVar13[3]);
        auVar17[4] = -(auVar16[4] == auVar13[4]);
        auVar17[5] = -(auVar16[5] == auVar13[5]);
        auVar17[6] = -(auVar16[6] == auVar13[6]);
        auVar17[7] = -(auVar16[7] == auVar13[7]);
        auVar17[8] = -(auVar16[8] == auVar13[0]);
        auVar17[9] = -(auVar16[9] == auVar13[1]);
        auVar17[10] = -(auVar16[10] == auVar13[2]);
        auVar17[0xb] = -(auVar16[0xb] == auVar13[3]);
        auVar17[0xc] = -(auVar16[0xc] == auVar13[4]);
        auVar17[0xd] = -(auVar16[0xd] == auVar13[5]);
        auVar17[0xe] = -(auVar16[0xe] == auVar13[6]);
        auVar17[0xf] = -(auVar16[0xf] == auVar13[7]);
        uVar10 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf
        ;
        uVar9 = (uint)uVar10;
        while (uVar10 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar11 = (uVar4 + uVar7 & *(ulonglong *)(param_1 + 0x40)) * -0x38;
          if ((*(longlong *)(lVar2 + -0x28 + lVar11) == 0xc) &&
             (lVar11 = lVar11 + lVar2,
             (int)(*(longlong **)(lVar11 + -0x30))[1] == 0x726f6c6f &&
             **(longlong **)(lVar11 + -0x30) == 0x435f786574726556)) {
            if (*(int *)(lVar11 + -0x20) != 4) {
              return 0;
            }
            cVar6 = pdb_141c0ce50(unaff_RDI & 0xffffffff,*(undefined8 *)(lVar11 + -0x10),
                                  *(undefined8 *)(lVar11 + -8));
            if (cVar6 == '\0') {
              return 0;
            }
            pdb_141c0cd70(auStack_40,*(undefined8 *)(lVar11 + -0x10),*(undefined8 *)(lVar11 + -8));
            pdb_140c92580(param_1,&UNK_143056b1c,5,auStack_40);
            return 1;
          }
          uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
        }
        auVar15[0] = -(auVar16[0] == -1);
        auVar15[1] = -(auVar16[1] == -1);
        auVar15[2] = -(auVar16[2] == -1);
        auVar15[3] = -(auVar16[3] == -1);
        auVar15[4] = -(auVar16[4] == -1);
        auVar15[5] = -(auVar16[5] == -1);
        auVar15[6] = -(auVar16[6] == -1);
        auVar15[7] = -(auVar16[7] == -1);
        auVar15[8] = -(auVar16[8] == -1);
        auVar15[9] = -(auVar16[9] == -1);
        auVar15[10] = -(auVar16[10] == -1);
        auVar15[0xb] = -(auVar16[0xb] == -1);
        auVar15[0xc] = -(auVar16[0xc] == -1);
        auVar15[0xd] = -(auVar16[0xd] == -1);
        auVar15[0xe] = -(auVar16[0xe] == -1);
        auVar15[0xf] = -(auVar16[0xf] == -1);
        if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar15 >> 0x1f,0) & 1) != 0) || (SUB161(auVar15 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar15 >> 0x37,0) & 1) != 0) || (SUB161(auVar15 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar15 >> 0x77,0) & 1) != 0) || auVar15[0xf] < '\0') break;
        uVar7 = uVar7 + lVar8 + 0x10;
        lVar8 = lVar8 + 0x10;
      }
    }
  }
  return 0;
}

