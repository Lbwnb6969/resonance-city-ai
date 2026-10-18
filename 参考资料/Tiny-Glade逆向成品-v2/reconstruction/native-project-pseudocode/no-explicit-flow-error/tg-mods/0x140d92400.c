// VA 0x140d92400, PDB extent 368 bytes
// tg_mods::overlay::mod_texture_bindings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d9244c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::mod_texture_bindings
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 368 */

undefined8 * pdb_140d92400(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
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
    *param_1 = 0;
    param_1[2] = 0;
  }
  else {
    if (_DAT_143ca4930 == 0) {
      uStack_40 = 0;
      uStack_30 = 0;
    }
    else {
      if (_DAT_143ca4920 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433d9668);
      }
      pdb_141da62c0(&uStack_40,_DAT_143ca4920,_DAT_143ca4928);
    }
    param_1[2] = uStack_30;
    *(undefined4 *)param_1 = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_40._4_4_;
    *(undefined4 *)(param_1 + 1) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
  }
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

