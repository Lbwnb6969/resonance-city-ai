// VA 0x140d920f0, PDB extent 283 bytes
// tg_mods::overlay::missing_mod_entries
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d92144) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::missing_mod_entries
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 283 */

undefined8 pdb_140d920f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
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
  lStack_48 = param_2 + param_3 * 0x18;
  uStack_40 = _DAT_143ca48c0;
  uStack_3c = uRam0000000143ca48c4;
  uStack_38 = _DAT_143ca48c8;
  uStack_34 = uRam0000000143ca48cc;
  lStack_50 = param_2;
  pdb_141da5000(param_1,&lStack_50);
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

