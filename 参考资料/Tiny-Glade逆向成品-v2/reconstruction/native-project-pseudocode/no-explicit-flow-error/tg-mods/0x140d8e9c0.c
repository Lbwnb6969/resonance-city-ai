// VA 0x140d8e9c0, PDB extent 261 bytes
// tg_mods::overlay::available_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d8ea0b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::available_mods
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 261 */

undefined8 pdb_140d8e9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (_DAT_143ca48a0 < 0xfffffffffffffff0 && (char)(((uint)_DAT_143ca48a0 & 8) >> 3) == '\0') {
    _DAT_143ca48a0 = _DAT_143ca48a0 + 0x10;
    LOCK();
    UNLOCK();
  }
  else {
    pdb_142dbb5f0(&DAT_143ca48a0,0,param_3,1000000000);
  }
  pdb_140e9a150(&DAT_143ca48a0);
  pdb_140e9a150(0x143ca48a1);
  pdb_141da3de0(param_1,_DAT_143ca48c0,_DAT_143ca48c8 * 0xb0 + _DAT_143ca48c0);
  pdb_140e9a350(&DAT_143ca48a0);
  pdb_140e9a350(0x143ca48a1);
  LOCK();
  lVar1 = _DAT_143ca48a0 - 0x10;
  UNLOCK();
  uVar2 = _DAT_143ca48a0 & 0xfffffffffffffff2;
  _DAT_143ca48a0 = lVar1;
  if (uVar2 == 0x12) {
    pdb_142dbbf50(&DAT_143ca48a0);
  }
  return param_1;
}

