// VA 0x140c269b0, PDB extent 247 bytes
// country_core::resources::clutter_registry::ClutterId::builtin_ty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::clutter_registry::ClutterId::builtin_ty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 247 */

ulonglong pdb_140c269b0(longlong param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lStack_18;
  
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  lStack_18 = param_1;
  if (_DAT_143ca44f8 != 0) {
    pdb_142deb292(&DAT_143ca44c8);
  }
  uVar5 = CONCAT71(uVar6,0x38);
  if (_DAT_143ca44e0 != 0) {
    uVar5 = CONCAT71(uVar6,0x38);
    uVar4 = pdb_1417c5550(0x143ca44e8,&lStack_18);
    bVar11 = (byte)(uVar4 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar7 = 0;
    while( true ) {
      uVar4 = uVar4 & _DAT_143ca44d0;
      pcVar1 = (char *)(_DAT_143ca44c8 + uVar4);
      auVar14[0] = -(*pcVar1 == auVar12[0]);
      auVar14[1] = -(pcVar1[1] == auVar12[1]);
      auVar14[2] = -(pcVar1[2] == auVar12[2]);
      auVar14[3] = -(pcVar1[3] == auVar12[3]);
      auVar14[4] = -(pcVar1[4] == auVar12[4]);
      auVar14[5] = -(pcVar1[5] == auVar12[5]);
      auVar14[6] = -(pcVar1[6] == auVar12[6]);
      auVar14[7] = -(pcVar1[7] == auVar12[7]);
      auVar14[8] = -(pcVar1[8] == auVar12[0]);
      auVar14[9] = -(pcVar1[9] == auVar12[1]);
      auVar14[10] = -(pcVar1[10] == auVar12[2]);
      auVar14[0xb] = -(pcVar1[0xb] == auVar12[3]);
      auVar14[0xc] = -(pcVar1[0xc] == auVar12[4]);
      auVar14[0xd] = -(pcVar1[0xd] == auVar12[5]);
      auVar14[0xe] = -(pcVar1[0xe] == auVar12[6]);
      auVar14[0xf] = -(pcVar1[0xf] == auVar12[7]);
      uVar9 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar10 = _DAT_143ca44c8 + (uVar2 + uVar4 & _DAT_143ca44d0) * -0x10;
        if (param_1 == *(longlong *)(lVar10 + -0x10)) {
          uVar5 = (ulonglong)*(byte *)(lVar10 + -8);
          goto LAB_140c26a80;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar13[0] = -(*pcVar1 == -1);
      auVar13[1] = -(pcVar1[1] == -1);
      auVar13[2] = -(pcVar1[2] == -1);
      auVar13[3] = -(pcVar1[3] == -1);
      auVar13[4] = -(pcVar1[4] == -1);
      auVar13[5] = -(pcVar1[5] == -1);
      auVar13[6] = -(pcVar1[6] == -1);
      auVar13[7] = -(pcVar1[7] == -1);
      auVar13[8] = -(pcVar1[8] == -1);
      auVar13[9] = -(pcVar1[9] == -1);
      auVar13[10] = -(pcVar1[10] == -1);
      auVar13[0xb] = -(pcVar1[0xb] == -1);
      auVar13[0xc] = -(pcVar1[0xc] == -1);
      auVar13[0xd] = -(pcVar1[0xd] == -1);
      auVar13[0xe] = -(pcVar1[0xe] == -1);
      auVar13[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar4 = uVar4 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
LAB_140c26a80:
  return uVar5 & 0xffffffff;
}

