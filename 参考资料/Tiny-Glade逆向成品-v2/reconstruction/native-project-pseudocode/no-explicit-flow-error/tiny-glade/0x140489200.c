// VA 0x140489200, PDB extent 464 bytes
// tiny_glade::sdl_setup::init_sdl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::sdl_setup::init_sdl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
   Extent: 464 */

undefined8 pdb_140489200(void)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_1406d0750(&puStack_38);
  if (SBORROW8(0,(longlong)puStack_38)) {
    pdb_1406d09c0(0x1000,1);
    pdb_1406d0580(&puStack_38,&uStack_19);
    if (SBORROW8(0,(longlong)puStack_38)) {
      pdb_1406d0670(&puStack_38,&uStack_19);
      if (SBORROW8(0,(longlong)puStack_38)) {
        return 0;
      }
      uStack_58 = uStack_28;
      uStack_60 = (undefined4)uStack_30;
      uStack_5c = uStack_30._4_4_;
      uStack_28 = pdb_142d859b0(&uStack_68);
      puStack_38 = &UNK_142f5df18;
      uStack_30 = 9;
      uStack_68 = 3;
      uVar1 = pdb_142d88150(&puStack_38,&uStack_68);
      pdb_1406d1b90(&uStack_19);
      pdb_1406d1b60(&uStack_19);
    }
    else {
      uStack_58 = uStack_28;
      uStack_60 = (undefined4)uStack_30;
      uStack_5c = uStack_30._4_4_;
      uStack_28 = pdb_142d859b0(&uStack_68);
      puStack_38 = &UNK_142f5df0a;
      uStack_30 = 0xe;
      uStack_68 = 3;
      uVar1 = pdb_142d88150(&puStack_38,&uStack_68);
    }
    pdb_1406d1b60(&uStack_19);
  }
  else {
    uStack_58 = uStack_28;
    uStack_60 = (undefined4)uStack_30;
    uStack_5c = uStack_30._4_4_;
    uStack_28 = pdb_142d859b0(&uStack_68);
    puStack_38 = &UNK_142f5df02;
    uStack_30 = 8;
    uStack_68 = 3;
    uVar1 = pdb_142d88150(&puStack_38,&uStack_68);
  }
  return uVar1;
}

