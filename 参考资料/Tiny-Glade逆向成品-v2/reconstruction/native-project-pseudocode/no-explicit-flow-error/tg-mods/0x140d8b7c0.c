// VA 0x140d8b7c0, PDB extent 188 bytes
// tg_mods::overlay::minting_user
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d8b7fd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::minting_user
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 188 */

undefined8 pdb_140d8b7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
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
  uVar2 = _DAT_143ca48a8;
  pdb_140e9a350(&DAT_143ca48a0);
  pdb_140e9a350(0x143ca48a1);
  LOCK();
  lVar1 = _DAT_143ca48a0 - 0x10;
  UNLOCK();
  uVar3 = _DAT_143ca48a0 & 0xfffffffffffffff2;
  _DAT_143ca48a0 = lVar1;
  if (uVar3 == 0x12) {
    pdb_142dbbf50(&DAT_143ca48a0);
  }
  return uVar2;
}

