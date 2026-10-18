// VA 0x142db1df0, PDB extent 180 bytes
// clutter_icon_pipe::use_graphics_device::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_icon_pipe::use_graphics_device::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 180 */

undefined8 pdb_142db1df0(char *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = pdb_142df6f80(&UNK_14308860e,0x32,param_3,param_4,param_1,param_2,0xfffffffffffffffe);
  if ((param_2 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
    cVar1 = pdb_142dc79e0();
    if (cVar1 == '\0') {
      param_1[1] = '\x01';
    }
  }
  LOCK();
  cVar1 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar1 == '\x02') {
    pdb_142dc6ca0(param_1);
  }
  return uVar2;
}

