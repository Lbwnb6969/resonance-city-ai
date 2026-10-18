// VA 0x1406d0670, PDB extent 213 bytes
// usdl::sdl::Sdl::video
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::sdl::Sdl::video
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
   Extent: 213 */

undefined8 * pdb_1406d0670(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  LOCK();
  iVar2 = _DAT_143cb2bdc + 1;
  UNLOCK();
  if (_DAT_143cb2bdc == 0) {
    _DAT_143cb2bdc = iVar2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142f99db7,0x53,&UNK_142f99df8);
  }
  LOCK();
  iVar1 = _DAT_143cb2be4 + 1;
  UNLOCK();
  bVar3 = _DAT_143cb2be4 == 0;
  _DAT_143cb2bdc = iVar2;
  _DAT_143cb2be4 = iVar1;
  if ((bVar3) && (iVar2 = pdb_14100a690(0x20), iVar2 != 0)) {
    _DAT_143cb2be4 = 0;
    pdb_1406d0840(&uStack_30);
    param_1[2] = uStack_20;
    *(undefined4 *)param_1 = uStack_30;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_2c;
    *(undefined4 *)(param_1 + 1) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_24;
    LOCK();
    _DAT_143cb2bdc = _DAT_143cb2bdc + -1;
    UNLOCK();
    if (_DAT_143cb2bdc != 0) {
      return param_1;
    }
    pdb_14100a780();
    return param_1;
  }
  *param_1 = 0x8000000000000000;
  return param_1;
}

