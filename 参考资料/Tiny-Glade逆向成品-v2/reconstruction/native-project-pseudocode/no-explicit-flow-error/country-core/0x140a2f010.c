// VA 0x140a2f010, PDB extent 273 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::export_preset_textures_from_rg
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::export_preset_textures_from_rg
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 273 */

void pdb_140a2f010(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  char cStack_64;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (lVar5 != 0) {
    pauVar7 = *(undefined1 (**) [16])(param_1 + 0x68);
    auVar1 = *pauVar7;
    uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      if ((short)uVar6 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar7 = pauVar7 + -0x30;
          pauVar8 = pauVar8 + 1;
          uVar6 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar6 == 0);
      }
      uVar2 = 0;
      for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      uVar4 = (ulonglong)uVar2;
      cStack_64 = pauVar7[uVar4 * -3 + -1][0xc];
      pauVar7[uVar4 * -3 + -1][0xc] = 2;
      if (cStack_64 != '\x02') {
        uStack_68 = *(undefined4 *)(pauVar7[uVar4 * -3 + -1] + 8);
        uStack_78 = *(undefined8 *)(pauVar7[uVar4 * -3 + -2] + 8);
        uStack_70 = *(undefined8 *)pauVar7[uVar4 * -3 + -1];
        uStack_63 = *(undefined2 *)(pauVar7[uVar4 * -3 + -1] + 0xd);
        uStack_61 = pauVar7[uVar4 * -3 + -1][0xf];
        uStack_58 = uStack_78;
        uStack_50 = uStack_70;
        uStack_48 = uStack_68;
        pdb_140e1e810(&uStack_78,param_2,CONCAT71((uint7)(byte)((ushort)uStack_63 >> 8),0x23));
      }
      uVar6 = uVar6 - 1 & uVar6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

