// VA 0x140d8f670, PDB extent 334 bytes
// tg_mods::overlay::active_mod_names
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d8f6bb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::active_mod_names
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 334 */

undefined8 * pdb_140d8f670(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
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
  if (SBORROW8(0,_DAT_143ca48d8)) {
    uStack_38 = -0x8000000000000000;
  }
  else {
    pdb_141da4630(&uStack_38,_DAT_143ca48e0,_DAT_143ca48e8 * 0xb0 + _DAT_143ca48e0);
    if (!SBORROW8(0,uStack_38)) {
      param_1[2] = uStack_28;
      *(undefined4 *)param_1 = (undefined4)uStack_38;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_38._4_4_;
      *(undefined4 *)(param_1 + 1) = uStack_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
      goto LAB_140d8f74b;
    }
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
LAB_140d8f74b:
  pdb_140e9a350(&DAT_143ca48d0);
  pdb_140e9a350(0x143ca48d1);
  LOCK();
  lVar1 = _DAT_143ca48d0 - 0x10;
  UNLOCK();
  uVar2 = _DAT_143ca48d0 & 0xfffffffffffffff2;
  _DAT_143ca48d0 = lVar1;
  if (uVar2 == 0x12) {
    pdb_142dbbf50(&DAT_143ca48d0);
  }
  return param_1;
}

