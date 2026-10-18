// VA 0x142620160, PDB extent 176 bytes
// turbosloth::store::redb_io_error<enum2$<redb::error::TableError> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::redb_io_error<enum2$<redb::error::TableError> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 176 */

byte * pdb_142620160(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  
  pdb_14007ee60();
  pbVar18 = pub_1406abab0(0x58,8);
  if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x58);
  }
  *(undefined8 *)(pbVar18 + 0x50) = *(undefined8 *)(param_1 + 0x14);
  uVar16 = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(pbVar18 + 0x40) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(pbVar18 + 0x48) = uVar16;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  uVar9 = param_1[8];
  uVar10 = param_1[9];
  uVar11 = param_1[10];
  uVar12 = param_1[0xb];
  uVar13 = param_1[0xd];
  uVar14 = param_1[0xe];
  uVar15 = param_1[0xf];
  *(undefined4 *)(pbVar18 + 0x30) = param_1[0xc];
  *(undefined4 *)(pbVar18 + 0x34) = uVar13;
  *(undefined4 *)(pbVar18 + 0x38) = uVar14;
  *(undefined4 *)(pbVar18 + 0x3c) = uVar15;
  *(undefined4 *)(pbVar18 + 0x20) = uVar9;
  *(undefined4 *)(pbVar18 + 0x24) = uVar10;
  *(undefined4 *)(pbVar18 + 0x28) = uVar11;
  *(undefined4 *)(pbVar18 + 0x2c) = uVar12;
  *(undefined4 *)(pbVar18 + 0x10) = uVar5;
  *(undefined4 *)(pbVar18 + 0x14) = uVar6;
  *(undefined4 *)(pbVar18 + 0x18) = uVar7;
  *(undefined4 *)(pbVar18 + 0x1c) = uVar8;
  *(undefined4 *)pbVar18 = uVar1;
  *(undefined4 *)(pbVar18 + 4) = uVar2;
  *(undefined4 *)(pbVar18 + 8) = uVar3;
  *(undefined4 *)(pbVar18 + 0xc) = uVar4;
  pdb_14007ee60();
  pbVar17 = pub_1406abab0(0x18,8);
  if (pbVar17 != (byte *)0x0) {
    *(byte **)pbVar17 = pbVar18;
    *(undefined **)(pbVar17 + 8) = &UNK_143557988;
    pbVar17[0x10] = 0x28;
    return pbVar17 + 1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x18);
}

