// VA 0x140a2d9d0, PDB extent 347 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::get_preset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::get_preset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 347 */

ulonglong * pdb_140a2d9d0(longlong param_1,uint param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *unaff_RBX;
  longlong lVar8;
  char *unaff_RDI;
  uint uVar9;
  ushort uVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cStack_31;
  char *pcStack_30;
  code *pcStack_28;
  
  cVar5 = (char)param_2;
  cStack_31 = cVar5;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    unaff_RBX = (ulonglong *)(ulonglong)param_2;
    unaff_RDI = &cStack_31;
    uVar6 = pdb_1400aef40(param_1 + 0x88,unaff_RDI);
    lVar8 = *(longlong *)(param_1 + 0x68);
    bVar12 = (byte)(uVar6 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x70);
      pcVar1 = (char *)(lVar8 + uVar6);
      auVar15[0] = -(*pcVar1 == auVar13[0]);
      auVar15[1] = -(pcVar1[1] == auVar13[1]);
      auVar15[2] = -(pcVar1[2] == auVar13[2]);
      auVar15[3] = -(pcVar1[3] == auVar13[3]);
      auVar15[4] = -(pcVar1[4] == auVar13[4]);
      auVar15[5] = -(pcVar1[5] == auVar13[5]);
      auVar15[6] = -(pcVar1[6] == auVar13[6]);
      auVar15[7] = -(pcVar1[7] == auVar13[7]);
      auVar15[8] = -(pcVar1[8] == auVar13[0]);
      auVar15[9] = -(pcVar1[9] == auVar13[1]);
      auVar15[10] = -(pcVar1[10] == auVar13[2]);
      auVar15[0xb] = -(pcVar1[0xb] == auVar13[3]);
      auVar15[0xc] = -(pcVar1[0xc] == auVar13[4]);
      auVar15[0xd] = -(pcVar1[0xd] == auVar13[5]);
      auVar15[0xe] = -(pcVar1[0xe] == auVar13[6]);
      auVar15[0xf] = -(pcVar1[0xf] == auVar13[7]);
      uVar10 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar11 = (uVar3 + uVar6 & *(ulonglong *)(param_1 + 0x70)) * -0x30;
        if (cVar5 == *(char *)(lVar8 + -0x30 + lVar11)) {
          lVar8 = lVar8 + lVar11;
          unaff_RBX = (ulonglong *)(lVar8 + -0x28);
          uVar6 = *(ulonglong *)(lVar8 + -0x28);
          if (0xffffffffffffffef < uVar6 || (char)(((uint)uVar6 & 8) >> 3) != '\0')
          goto LAB_140a2daa9;
          goto LAB_140a2daf8;
        }
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
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
  uVar6 = pdb_142dc8110(&UNK_1430396f0,0x16,&UNK_143039ce0);
LAB_140a2daf8:
  LOCK();
  uVar2 = *unaff_RBX;
  if (uVar6 == uVar2) {
    *unaff_RBX = uVar6 + 0x10;
  }
  UNLOCK();
  if (uVar6 != uVar2) {
LAB_140a2daa9:
    cVar5 = pdb_142dbc9e0(unaff_RBX,0);
    if (cVar5 == '\0') {
      pcStack_28 = pdb_140a31a40;
      pcStack_30 = unaff_RDI;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039cf8,&pcStack_30,&UNK_143039d38);
    }
  }
  pdb_140e9a150(unaff_RBX);
  pdb_140e9a150((ulonglong)unaff_RBX | 1);
  return unaff_RBX;
}

