// VA 0x14198fa90, PDB extent 387 bytes
// country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::history::HistoryChainSnapshots>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::history::HistoryChainSnapshots>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 387 */

ulonglong * pdb_14198fa90(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  byte *pbVar4;
  ulonglong *puVar5;
  longlong lStack_60;
  byte *pbStack_58;
  ulonglong *puStack_48;
  ulonglong uStack_40;
  byte *pbStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(0x80,1);
  if (pbStack_38 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
    pcVar3 = (code *)swi(3);
    puVar5 = (ulonglong *)(*pcVar3)();
    return puVar5;
  }
  uStack_40 = 0x80;
  uStack_30 = 0;
  puStack_48 = &uStack_40;
  pdb_1415ed4a0(&lStack_60,lVar1,lVar2 * 0x10 + lVar1);
  pbVar4 = (byte *)pdb_141b78600(&puStack_48,&lStack_60);
  if (lStack_60 != 0) {
    pub_1406abac0(pbStack_58,lStack_60 << 4,8);
  }
  if (pbVar4 == (byte *)0x0) {
    pbVar4 = pbStack_38;
    if (!SBORROW8(0,uStack_40)) {
      *param_1 = uStack_40;
      param_1[1] = (ulonglong)pbStack_38;
      param_1[2] = uStack_30;
      return param_1;
    }
  }
  else if (uStack_40 != 0) {
    pub_1406abac0(pbStack_38,uStack_40,1);
  }
  param_1[1] = (ulonglong)pbVar4;
  *param_1 = 0x8000000000000000;
  return param_1;
}

