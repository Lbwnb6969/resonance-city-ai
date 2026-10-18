// VA 0x140d92570, PDB extent 280 bytes
// tg_mods::overlay::canonical_mod_entries
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d925c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::canonical_mod_entries
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 280 */

undefined8 pdb_140d92570(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lStack_50;
  longlong lStack_48;
  ulonglong **ppuStack_40;
  ulonglong *puStack_38;
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
  puStack_38 = (ulonglong *)&DAT_143ca48a0;
  lStack_48 = param_2 + param_3 * 0x18;
  ppuStack_40 = &puStack_38;
  lStack_50 = param_2;
  pdb_141da4510(param_1,&lStack_50);
  puVar2 = puStack_38;
  pdb_140e9a350(puStack_38);
  pdb_140e9a350((ulonglong)puVar2 | 1);
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = *puVar2 - 0x10;
  UNLOCK();
  if ((uVar1 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar2);
  }
  return param_1;
}

