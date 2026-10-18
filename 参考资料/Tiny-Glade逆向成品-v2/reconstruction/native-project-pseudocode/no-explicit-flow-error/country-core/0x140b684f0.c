// VA 0x140b684f0, PDB extent 266 bytes
// country_core::systems::history::replay_terrain::TerrainReplayCmd::backward
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_terrain::TerrainReplayCmd::backward
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_terrain.rs
   Extent: 266 */

longlong * pdb_140b684f0(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  fVar1 = _DAT_142e37988;
  if (SBORROW8(0,*(longlong *)(param_2 + 0x10))) {
    lStack_30 = param_2 + 0x18;
    lStack_48 = *(longlong *)(param_2 + 0x20);
    lStack_40 = lStack_48 + *(longlong *)(param_2 + 0x28) * 0xc;
    uStack_38 = 0;
    lStack_28 = param_2;
    lStack_20 = param_2;
    fVar1 = (float)pdb_1419b5c40(&lStack_48,_DAT_142e377f0);
    if (0x7f7fffff < (uint)ABS(fVar1)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143021520,0x2b,&UNK_143021550);
    }
    fVar2 = _DAT_142e3798c;
    if (_DAT_142e3798c <= fVar1 * _DAT_142e37848) {
      fVar2 = fVar1 * _DAT_142e37848;
    }
    param_2 = lStack_20;
    fVar1 = _DAT_142e3788c;
    if (fVar2 <= _DAT_142e3788c) {
      fVar1 = fVar2;
    }
  }
  *param_1 = param_2;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 1) = 0;
  *(float *)((longlong)param_1 + 0xc) = fVar1;
  *(undefined4 *)(param_1 + 2) = 2;
  return param_1;
}

