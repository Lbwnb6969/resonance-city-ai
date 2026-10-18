// VA 0x1426200d0, PDB extent 144 bytes
// turbosloth::store::redb_io_error<enum2$<redb::error::StorageError> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::redb_io_error<enum2$<redb::error::StorageError>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 144 */

byte * pdb_1426200d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x18,8);
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  *(undefined8 *)(pbVar5 + 0x10) = *(undefined8 *)(param_1 + 4);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)pbVar5 = *param_1;
  *(undefined4 *)(pbVar5 + 4) = uVar1;
  *(undefined4 *)(pbVar5 + 8) = uVar2;
  *(undefined4 *)(pbVar5 + 0xc) = uVar3;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x18,8);
  if (pbVar4 != (byte *)0x0) {
    *(byte **)pbVar4 = pbVar5;
    *(undefined **)(pbVar4 + 8) = &UNK_143557a00;
    pbVar4[0x10] = 0x28;
    return pbVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x18);
}

