// VA 0x140a2ef10, PDB extent 247 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::import_texture_presets_to_rg
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::import_texture_presets_to_rg
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 247 */

void pdb_140a2ef10(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (lVar6 != 0) {
    pauVar7 = *(undefined1 (**) [16])(param_1 + 0x68);
    auVar1 = *pauVar7;
    uVar4 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    pauVar8 = pauVar7 + 1;
    do {
      if ((short)uVar4 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar7 = pauVar7 + -0x30;
          pauVar8 = pauVar8 + 1;
          uVar4 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar4 == 0);
      }
      uVar2 = 0;
      for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      uVar5 = (ulonglong)uVar2;
      if (pauVar7[uVar5 * -3 + -1][0xc] != '\x02') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14303a160,0x6b,&UNK_14303a198);
      }
      uVar4 = uVar4 - 1 & uVar4;
      pdb_140e1e6e0(auStack_58,*(undefined8 *)pauVar7[uVar5 * -3 + -2],param_2,0x23,&UNK_143330058);
      *(undefined8 *)(pauVar7[uVar5 * -3 + -1] + 8) = uStack_48;
      *(undefined1 (*) [16])(pauVar7[uVar5 * -3 + -2] + 8) = auStack_58;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

