// VA 0x140a2e6e0, PDB extent 412 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::get_rg_preset_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::get_rg_preset_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 412 */

ulonglong pdb_140a2e6e0(longlong param_1,char param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  longlong lVar9;
  bool bVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char *pcStack_58;
  code *pcStack_50;
  ulonglong uStack_48;
  char acStack_39 [9];
  
  acStack_39[1] = -2;
  acStack_39[2] = -1;
  acStack_39[3] = -1;
  acStack_39[4] = -1;
  acStack_39[5] = -1;
  acStack_39[6] = -1;
  acStack_39[7] = -1;
  acStack_39[8] = -1;
  acStack_39[0] = param_2;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar4 = pdb_1400aef40(param_1 + 0x88,acStack_39);
    lVar6 = *(longlong *)(param_1 + 0x68);
    bVar11 = (byte)(uVar4 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar5 = 0;
    while( true ) {
      uVar4 = uVar4 & *(ulonglong *)(param_1 + 0x70);
      auVar1 = *(undefined1 (*) [16])(lVar6 + uVar4);
      auVar14[0] = -(auVar1[0] == auVar12[0]);
      auVar14[1] = -(auVar1[1] == auVar12[1]);
      auVar14[2] = -(auVar1[2] == auVar12[2]);
      auVar14[3] = -(auVar1[3] == auVar12[3]);
      auVar14[4] = -(auVar1[4] == auVar12[4]);
      auVar14[5] = -(auVar1[5] == auVar12[5]);
      auVar14[6] = -(auVar1[6] == auVar12[6]);
      auVar14[7] = -(auVar1[7] == auVar12[7]);
      auVar14[8] = -(auVar1[8] == auVar12[0]);
      auVar14[9] = -(auVar1[9] == auVar12[1]);
      auVar14[10] = -(auVar1[10] == auVar12[2]);
      auVar14[0xb] = -(auVar1[0xb] == auVar12[3]);
      auVar14[0xc] = -(auVar1[0xc] == auVar12[4]);
      auVar14[0xd] = -(auVar1[0xd] == auVar12[5]);
      auVar14[0xe] = -(auVar1[0xe] == auVar12[6]);
      auVar14[0xf] = -(auVar1[0xf] == auVar12[7]);
      uVar8 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
      uVar7 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (uVar2 + uVar4 & *(ulonglong *)(param_1 + 0x70)) * -0x30;
        if (param_2 == *(char *)(lVar6 + -0x30 + lVar9)) {
          lVar6 = lVar6 + lVar9;
          LOCK();
          bVar10 = *(longlong *)(lVar6 + -0x28) == 0;
          if (bVar10) {
            *(longlong *)(lVar6 + -0x28) = 8;
          }
          UNLOCK();
          if (!bVar10) {
            pcStack_50 = pdb_140a31a40;
            pcStack_58 = acStack_39;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f18,&pcStack_58,param_3);
          }
          param_3 = lVar6 - 0x28;
          pdb_140e9a150(param_3);
          pdb_140e9a150(param_3 | 1);
          if (*(char *)(lVar6 + -4) != '\x02') {
            return param_3;
          }
          goto LAB_140a2e817;
        }
        uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
      }
      auVar13[0] = -(auVar1[0] == -1);
      auVar13[1] = -(auVar1[1] == -1);
      auVar13[2] = -(auVar1[2] == -1);
      auVar13[3] = -(auVar1[3] == -1);
      auVar13[4] = -(auVar1[4] == -1);
      auVar13[5] = -(auVar1[5] == -1);
      auVar13[6] = -(auVar1[6] == -1);
      auVar13[7] = -(auVar1[7] == -1);
      auVar13[8] = -(auVar1[8] == -1);
      auVar13[9] = -(auVar1[9] == -1);
      auVar13[10] = -(auVar1[10] == -1);
      auVar13[0xb] = -(auVar1[0xb] == -1);
      auVar13[0xc] = -(auVar1[0xc] == -1);
      auVar13[0xd] = -(auVar1[0xd] == -1);
      auVar13[0xe] = -(auVar1[0xe] == -1);
      auVar13[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar4 = uVar4 + lVar5 + 0x10;
      lVar5 = lVar5 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_1430396f0,0x16,param_3);
LAB_140a2e817:
  uStack_48 = param_3;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143039f58);
}

