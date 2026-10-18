// VA 0x140a2db30, PDB extent 440 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::get_rg_preset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::get_rg_preset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 440 */

ulonglong * pdb_140a2db30(longlong param_1,uint param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *unaff_RBX;
  longlong unaff_RSI;
  char *unaff_RDI;
  uint uVar8;
  ushort uVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char *pcStack_50;
  code *pcStack_48;
  ulonglong *puStack_40;
  char acStack_31 [9];
  
  acStack_31[1] = -2;
  acStack_31[2] = -1;
  acStack_31[3] = -1;
  acStack_31[4] = -1;
  acStack_31[5] = -1;
  acStack_31[6] = -1;
  acStack_31[7] = -1;
  acStack_31[8] = -1;
  cVar5 = (char)param_2;
  acStack_31[0] = cVar5;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    unaff_RBX = (ulonglong *)(ulonglong)param_2;
    unaff_RDI = acStack_31;
    uVar6 = pdb_1400aef40(param_1 + 0x88,unaff_RDI);
    unaff_RSI = *(longlong *)(param_1 + 0x68);
    bVar11 = (byte)(uVar6 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x70);
      pcVar1 = (char *)(unaff_RSI + uVar6);
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
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar10 = (uVar3 + uVar6 & *(ulonglong *)(param_1 + 0x70)) * -0x30;
        if (cVar5 == *(char *)(unaff_RSI + -0x30 + lVar10)) {
          unaff_RSI = unaff_RSI + lVar10;
          unaff_RBX = (ulonglong *)(unaff_RSI + -0x28);
          uVar6 = *(ulonglong *)(unaff_RSI + -0x28);
          if (0xffffffffffffffef < uVar6 || (char)(((uint)uVar6 & 8) >> 3) != '\0')
          goto LAB_140a2dc19;
          goto LAB_140a2dc65;
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
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
  uVar6 = pdb_142dc8110(&UNK_1430396f0,0x16,&UNK_143039d50);
LAB_140a2dc65:
  LOCK();
  uVar2 = *unaff_RBX;
  if (uVar6 == uVar2) {
    *unaff_RBX = uVar6 + 0x10;
  }
  UNLOCK();
  if (uVar6 != uVar2) {
LAB_140a2dc19:
    cVar5 = pdb_142dbc9e0(unaff_RBX,0);
    if (cVar5 == '\0') {
      pcStack_48 = pdb_140a31a40;
      pcStack_50 = unaff_RDI;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039cf8,&pcStack_50,&UNK_143039d68);
    }
  }
  pdb_140e9a150(unaff_RBX);
  pdb_140e9a150((ulonglong)unaff_RBX | 1);
  if (*(char *)(unaff_RSI + -4) != '\x02') {
    return unaff_RBX;
  }
  puStack_40 = unaff_RBX;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143039d80);
}

