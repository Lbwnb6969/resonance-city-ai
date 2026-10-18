// VA 0x142571e80, PDB extent 305 bytes
// turbosloth::util::write_atomic
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::util::write_atomic
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
   Extent: 305 */

longlong pdb_142571e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  ulonglong uStack_50;
  byte *pbStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140f3e750(&uStack_70,param_1,param_2,&UNK_14351995c,3);
  uStack_39 = 1;
  pbStack_48 = pbStack_68;
  lVar1 = pdb_140f561c0(pbStack_68,uStack_60,param_3,param_4);
  if (lVar1 == 0) {
    uStack_50 = uStack_70;
    lVar1 = pdb_140f4f450(pbStack_48,uStack_60,param_1,param_2);
    uStack_70 = uStack_50;
  }
  if (uStack_70 != 0) {
    pub_1406abac0(pbStack_48,uStack_70,1);
  }
  return lVar1;
}

