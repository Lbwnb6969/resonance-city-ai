// VA 0x140c8a840, PDB extent 480 bytes
// country_core::resources::clutter_packs::WorkshopSidecar::read
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_packs::WorkshopSidecar::read
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 480 */

ulonglong pdb_140c8a840(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  ulonglong uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  byte *pbStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_70,param_1,param_2,&UNK_143076086,0xd);
  pbStack_28 = pbStack_68;
  pdb_140f55fb0(&uStack_50,pbStack_68,uStack_60);
  if (uStack_70 != 0) {
    pub_1406abac0(pbStack_28,uStack_70,1);
  }
  if (SBORROW8(0,uStack_50)) {
    pdb_1404b38e0(&pbStack_48);
    uVar1 = 0;
  }
  else {
    pbStack_28 = (byte *)uStack_50;
    pbStack_38 = pbStack_48;
    uVar1 = pdb_14164bfc0();
    if (uVar1 == 1) {
      pbStack_30 = pbStack_40;
      if (*(longlong *)pbStack_40 == 1) {
        pdb_1404b38e0(pbStack_40 + 8);
      }
      else if ((*(longlong *)pbStack_40 == 0) && (*(ulonglong *)(pbStack_40 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(pbStack_40 + 8),*(ulonglong *)(pbStack_40 + 0x10),1);
      }
      pub_1406abac0(pbStack_30,0x28,8);
    }
    uVar1 = uVar1 ^ 1;
    if (pbStack_28 != (byte *)0x0) {
      pub_1406abac0(pbStack_38,(ulonglong)pbStack_28,1);
    }
  }
  return uVar1;
}

