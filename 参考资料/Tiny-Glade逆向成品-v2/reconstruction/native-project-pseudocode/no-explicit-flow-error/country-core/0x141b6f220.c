// VA 0x141b6f220, PDB extent 257 bytes
// country_core::systems::save::save_game::impl$2::to_json_string<country_core::systems::mode_manager::WallSelectionGroups>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$2::to_json_string<country_core::systems::mode_manager::WallSelectionGroups>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 257 */

ulonglong * pdb_141b6f220(ulonglong *param_1,undefined8 param_2)

{
  code *pcVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  ulonglong *puStack_40;
  ulonglong uStack_38;
  byte *pbStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_30 = pub_1406abab0(0x80,1);
  if (pbStack_30 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
    pcVar1 = (code *)swi(3);
    puVar3 = (ulonglong *)(*pcVar1)();
    return puVar3;
  }
  uStack_38 = 0x80;
  uStack_28 = 0;
  puStack_40 = &uStack_38;
  pbVar2 = (byte *)pdb_141b78870(&puStack_40,param_2);
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = pbStack_30;
    if (!SBORROW8(0,uStack_38)) {
      *param_1 = uStack_38;
      param_1[1] = (ulonglong)pbStack_30;
      param_1[2] = uStack_28;
      return param_1;
    }
  }
  else if (uStack_38 != 0) {
    pub_1406abac0(pbStack_30,uStack_38,1);
  }
  param_1[1] = (ulonglong)pbVar2;
  *param_1 = 0x8000000000000000;
  return param_1;
}

