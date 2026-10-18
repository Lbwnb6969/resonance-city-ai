// VA 0x140559280, PDB extent 507 bytes
// country_core::systems::steam::SteamOverlayOpenResources::open_browser_to_webpage<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::SteamOverlayOpenResources::open_browser_to_webpage<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 507 */

void pdb_140559280(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 **ppuStack_58;
  longlong *plStack_50;
  code *pcStack_48;
  longlong lStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  puVar4 = _DAT_143ca8e90;
  uStack_30 = 0xfffffffffffffffe;
  lStack_c0 = param_2;
  uStack_b8 = param_3;
  if (2 < *_DAT_143ca8e90) {
    plStack_50 = &lStack_c0;
    pcStack_48 = pdb_1402ed420;
    uStack_b0 = 0;
    puStack_a8 = &UNK_142f66eaa;
    uStack_a0 = 0x1c;
    uStack_98 = 0;
    puStack_90 = &UNK_142f66e7d;
    uStack_88 = 0x2c;
    uStack_80 = 3;
    puStack_78 = &UNK_142f66eaa;
    uStack_70 = 0x1c;
    uStack_68 = 0x23500000001;
    puStack_60 = &UNK_142f66e54;
    ppuStack_58 = &plStack_50;
    pdb_140f332f0(&uStack_31,&uStack_b0);
  }
  lStack_40 = pdb_140cad450(param_2,param_3);
  if (lStack_40 == 0) {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar1 = *param_1;
    lVar2 = *(longlong *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    if (lVar2 == *(longlong *)(lVar1 + 0x20)) {
      pdb_142d7e8a0(lVar1 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + lVar2 * 8) = uVar3;
    *(longlong *)(lVar1 + 0x30) = lVar2 + 1;
    *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
  }
  else {
    if (1 < *puVar4) {
      plStack_50 = &lStack_40;
      pcStack_48 = pdb_140f56800;
      uStack_b0 = 0;
      puStack_a8 = &UNK_142f66eaa;
      uStack_a0 = 0x1c;
      uStack_98 = 0;
      puStack_90 = &UNK_142f66e7d;
      uStack_88 = 0x2c;
      uStack_80 = 2;
      puStack_78 = &UNK_142f66eaa;
      uStack_70 = 0x1c;
      uStack_68 = 0x23d00000001;
      puStack_60 = &UNK_142f66ec6;
      ppuStack_58 = &plStack_50;
      pdb_140f332f0(&uStack_31,&uStack_b0);
    }
    pdb_1404b38e0(&lStack_40);
  }
  return;
}

