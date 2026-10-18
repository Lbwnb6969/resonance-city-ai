// VA 0x140d8af50, PDB extent 332 bytes
// tg_mods::overlay::is_mod_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d8afa5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::is_mod_file
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 332 */

bool pdb_140d8af50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (_DAT_143ca48d0 < 0xfffffffffffffff0 && (char)(((uint)_DAT_143ca48d0 & 8) >> 3) == '\0') {
    _DAT_143ca48d0 = _DAT_143ca48d0 + 0x10;
    LOCK();
    UNLOCK();
  }
  else {
    pdb_142dbb5f0(&DAT_143ca48d0,0,param_3,1000000000);
  }
  pdb_140e9a150(&DAT_143ca48d0);
  pdb_140e9a150(0x143ca48d1);
  bVar3 = false;
  if (!SBORROW8(0,_DAT_143ca48d8)) {
    lVar4 = _DAT_143ca48e8 * 0xb0;
    lVar5 = _DAT_143ca48e0;
    do {
      bVar3 = lVar4 != 0;
      if (lVar4 == 0) break;
      cVar1 = pdb_140f3e020(param_1,param_2,*(undefined8 *)(lVar5 + 0x48),
                            *(undefined8 *)(lVar5 + 0x50));
      lVar5 = lVar5 + 0xb0;
      lVar4 = lVar4 + -0xb0;
    } while (cVar1 == '\0');
  }
  pdb_140e9a350(&DAT_143ca48d0);
  pdb_140e9a350(0x143ca48d1);
  LOCK();
  lVar5 = _DAT_143ca48d0 - 0x10;
  UNLOCK();
  uVar2 = _DAT_143ca48d0 & 0xfffffffffffffff2;
  _DAT_143ca48d0 = lVar5;
  if (uVar2 == 0x12) {
    pdb_142dbbf50(&DAT_143ca48d0);
  }
  return bVar3;
}

