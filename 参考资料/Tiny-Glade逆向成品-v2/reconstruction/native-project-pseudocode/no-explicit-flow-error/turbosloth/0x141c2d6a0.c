// VA 0x141c2d6a0, PDB extent 208 bytes
// turbosloth::store::open_cache_db
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::open_cache_db
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 208 */

void pdb_141c2d6a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_142624890(&uStack_30);
  if (CONCAT44(uStack_2c,uStack_30) == -0x7ffffffffffffff7) {
    uVar2 = CONCAT44(uStack_24,uStack_28);
  }
  else {
    uVar3 = uStack_30;
    uVar4 = uStack_28;
    uVar2 = uStack_20;
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(0x18,8);
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    }
    *(undefined8 *)(pbVar1 + 0x10) = uStack_20;
    *(undefined4 *)pbVar1 = uStack_30;
    *(undefined4 *)(pbVar1 + 4) = uStack_2c;
    *(undefined4 *)(pbVar1 + 8) = uStack_28;
    *(undefined4 *)(pbVar1 + 0xc) = uStack_24;
    uStack_20 = pdb_140f3fdf0(0x28,pbVar1,&UNK_143557af0,param_4,uVar3,uVar4,uVar2);
    uVar2 = 0;
  }
  *param_1 = uVar2;
  param_1[1] = uStack_20;
  return;
}

