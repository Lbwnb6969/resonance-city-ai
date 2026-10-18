// VA 0x140a27b90, PDB extent 185 bytes
// country_core::systems::steam::missing_mods::MissingModRef::from_recorded_entry
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::missing_mods::MissingModRef::from_recorded_entry
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
   Extent: 185 */

undefined8 * pdb_140a27b90(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong arg0;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  arg0 = param_2;
  pdb_141b4a8e0(&lStack_48);
  if (SBORROW8(0,lStack_48)) {
    uVar1 = pdb_14043b7e0(param_2);
    if (-1 < (longlong)arg0) {
      uVar3 = 1;
      pbVar2 = (byte *)0x1;
      if (arg0 != 0) {
        pdb_14007ee60();
        uVar4 = 1;
        pbVar2 = pub_1406abab0(arg0,1);
        if (pbVar2 == (byte *)0x0) goto LAB_140a27bc9;
        pub_142e32760(pbVar2,uVar1,arg0);
      }
      param_1[1] = arg0;
      param_1[2] = pbVar2;
      param_1[3] = arg0;
      goto LAB_140a27c35;
    }
    uVar4 = 0;
LAB_140a27bc9:
    pdb_142dc7e2a(uVar4,arg0);
  }
  param_1[3] = uStack_38;
  param_1[1] = lStack_48;
  param_1[2] = uStack_40;
  uVar3 = 0;
LAB_140a27c35:
  *param_1 = uVar3;
  return param_1;
}

