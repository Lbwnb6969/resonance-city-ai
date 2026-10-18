// VA 0x140a2e8d0, PDB extent 512 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::create_preset_textures
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::create_preset_textures
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 512 */

void pdb_140a2e8d0(longlong *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 (*pauVar7) [16];
  ulonglong arg1;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong *plStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  plVar6 = (longlong *)pdb_14008d710(0);
  if (plVar6 == (longlong *)0x0) {
    pdb_142dc7890(&UNK_143326860);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lStack_88 = *plVar6;
  lStack_80 = plVar6[1];
  *plVar6 = *plVar6 + 1;
  lStack_98 = _DAT_143366cc0;
  lStack_90 = _UNK_143366cc8;
  uStack_a8 = _DAT_143366cb0;
  uStack_a4 = _UNK_143366cb4;
  uStack_a0 = _UNK_143366cb8;
  uStack_9c = _UNK_143366cbc;
  pdb_1419b32d0(param_2,0,&uStack_a8);
  lStack_78 = CONCAT44(uStack_a4,uStack_a8);
  lStack_70 = CONCAT44(uStack_9c,uStack_a0);
  lStack_58 = lStack_88;
  lStack_50 = lStack_80;
  lStack_68 = lStack_98;
  lStack_60 = lStack_90;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar8 = *param_1;
  plVar6 = (longlong *)(lVar8 + 0x68);
  lVar2 = *(longlong *)(lVar8 + 0x70);
  if (lVar2 != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x80);
    plStack_40 = plVar6;
    if (lVar8 != 0) {
      pauVar7 = (undefined1 (*) [16])*plVar6;
      auVar1 = *pauVar7;
      pauVar9 = pauVar7 + 1;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar7 = pauVar7 + -0x30;
            pauVar9 = pauVar9 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar10 == 0);
        }
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        pdb_14098a200(pauVar7 + (ulonglong)uVar4 * -3 + -2);
        uVar10 = uVar10 - 1 & uVar10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    plVar6 = plStack_40;
    lVar8 = lVar2 * 0x30 + 0x30;
    arg1 = lVar2 + lVar8 + 0x11;
    if (arg1 != 0) {
      pub_1406abac0((byte *)(*plStack_40 - lVar8),arg1,0x10);
    }
  }
  plVar6[4] = lStack_58;
  plVar6[5] = lStack_50;
  plVar6[2] = lStack_68;
  plVar6[3] = lStack_60;
  *plVar6 = lStack_78;
  plVar6[1] = lStack_70;
  return;
}

