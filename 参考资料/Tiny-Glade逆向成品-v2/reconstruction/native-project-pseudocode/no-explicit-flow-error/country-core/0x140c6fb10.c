// VA 0x140c6fb10, PDB extent 502 bytes
// country_core::systems::save::shadow_file::ShadowFile::sync_all
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/shadow_file.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::shadow_file::ShadowFile::sync_all
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/shadow_file.rs
   Extent: 502 */

bool pdb_140c6fb10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  longlong *plStack_38;
  longlong lStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (4 < *_DAT_143ca8e90) {
    uStack_a0 = (undefined *)0x0;
    uStack_98 = &UNK_14307265f;
    uStack_90 = 0x28;
    uStack_88 = 0;
    uStack_80 = &UNK_14307262b;
    uStack_78 = 0x33;
    uStack_70 = 5;
    puStack_68 = &UNK_14307265f;
    uStack_60 = 0x28;
    uStack_58 = 0xd400000001;
    puStack_50 = &UNK_1430727fc;
    uStack_48 = 0x11;
    pdb_140f332f0(&uStack_22,&uStack_a0);
  }
  cVar1 = pdb_140c6de50(param_1);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    if (!SBORROW8(0,*(longlong *)(param_1 + 0x40))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143072888,0x3b,&UNK_1430728a8);
    }
    lVar2 = pdb_140f3f0a0(param_1 + 0x48);
    if (lVar2 == 0) {
      lStack_30 = 0;
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    else {
      uStack_21 = 1;
      lStack_40 = lVar2;
      pdb_140f3f5b0(&uStack_a0);
      uStack_b8 = (undefined4)uStack_80;
      uStack_b4 = uStack_80._4_4_;
      uStack_b0 = (undefined4)uStack_78;
      uStack_ac = uStack_78._4_4_;
      uStack_c8 = (undefined4)uStack_90;
      uStack_c4 = uStack_90._4_4_;
      uStack_c0 = (undefined4)uStack_88;
      uStack_bc = uStack_88._4_4_;
      uStack_d8 = (undefined4)uStack_a0;
      uStack_d4 = uStack_a0._4_4_;
      uStack_d0 = (undefined4)uStack_98;
      uStack_cc = uStack_98._4_4_;
      uStack_a0 = &UNK_143072804;
      uStack_98 = (undefined *)0x24;
      uStack_21 = 0;
      uStack_90 = lVar2;
      lStack_30 = pdb_142dea990(&uStack_a0,&uStack_d8);
      lVar2 = *(longlong *)(param_1 + 0x78);
    }
    plStack_38 = (longlong *)(param_1 + 0x78);
    if (lVar2 != 0) {
      plStack_38 = (longlong *)(param_1 + 0x78);
      pdb_140f36c40(plStack_38);
    }
    *plStack_38 = lStack_30;
    bVar3 = lStack_30 == 0;
  }
  return bVar3;
}

