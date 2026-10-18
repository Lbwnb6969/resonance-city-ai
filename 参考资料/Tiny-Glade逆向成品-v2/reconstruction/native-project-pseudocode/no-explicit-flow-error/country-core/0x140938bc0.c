// VA 0x140938bc0, PDB extent 4248 bytes
// country_core::input::action_set::MainActionSet::deconstruct
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure: country_core::input::action_set::MainActionSet::deconstruct
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 4248 */

longlong * pdb_140938bc0(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  longlong lStack_58;
  undefined2 *puStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lStack_58 = 0;
  puStack_50 = (undefined2 *)0x4;
  lStack_48 = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x54);
  fVar5 = (float)((ulonglong)uVar2 >> 0x20);
  if (((((float)uVar2 != 0.0) || (NAN((float)uVar2))) || (fVar5 != 0.0)) || (NAN(fVar5))) {
    pdb_142d7f010(&lStack_58);
    *puStack_50 = 0;
    *(undefined8 *)(puStack_50 + 2) = uVar2;
    lStack_48 = 1;
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x56);
  fVar5 = (float)((ulonglong)uVar2 >> 0x20);
  if ((((float)uVar2 != 0.0) || (NAN((float)uVar2))) || ((fVar5 != 0.0 || (NAN(fVar5))))) {
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x100;
    *(undefined8 *)(puStack_50 + lVar4 * 6 + 2) = uVar2;
    lVar4 = lVar4 + 1;
    lStack_48 = lVar4;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  fVar5 = (float)((ulonglong)uVar2 >> 0x20);
  if ((((float)uVar2 != 0.0) || (NAN((float)uVar2))) || ((fVar5 != 0.0 || (NAN(fVar5))))) {
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x200;
    *(undefined8 *)(puStack_50 + lVar4 * 6 + 2) = uVar2;
    lVar4 = lVar4 + 1;
    lStack_48 = lVar4;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x5a);
  fVar5 = (float)((ulonglong)uVar2 >> 0x20);
  if (((((float)uVar2 != 0.0) || (NAN((float)uVar2))) || (fVar5 != 0.0)) || (NAN(fVar5))) {
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x300;
    *(undefined8 *)(puStack_50 + lVar4 * 6 + 2) = uVar2;
    lVar4 = lVar4 + 1;
    lStack_48 = lVar4;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x5c);
  fVar5 = (float)((ulonglong)uVar2 >> 0x20);
  if ((((float)uVar2 != 0.0) || (NAN((float)uVar2))) || ((fVar5 != 0.0 || (NAN(fVar5))))) {
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x400;
    *(undefined8 *)(puStack_50 + lVar4 * 6 + 2) = uVar2;
    lVar4 = lVar4 + 1;
    lStack_48 = lVar4;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x5e);
  fVar5 = (float)((ulonglong)uVar2 >> 0x20);
  if ((((float)uVar2 != 0.0) || (NAN((float)uVar2))) || ((fVar5 != 0.0 || (NAN(fVar5))))) {
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x500;
    *(undefined8 *)(puStack_50 + lVar4 * 6 + 2) = uVar2;
    lVar4 = lVar4 + 1;
    iVar3 = *param_2;
    lStack_48 = lVar4;
  }
  else {
    iVar3 = *param_2;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[2];
  }
  else {
    iVar1 = param_2[1];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 1;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[2];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[4];
  }
  else {
    iVar1 = param_2[3];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x101;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[4];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[6];
  }
  else {
    iVar1 = param_2[5];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x201;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[6];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[8];
  }
  else {
    iVar1 = param_2[7];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x301;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[8];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[10];
  }
  else {
    iVar1 = param_2[9];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x401;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[10];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0xc];
  }
  else {
    iVar1 = param_2[0xb];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x501;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0xc];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0xe];
  }
  else {
    iVar1 = param_2[0xd];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x601;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0xe];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x10];
  }
  else {
    iVar1 = param_2[0xf];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x701;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x10];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x12];
  }
  else {
    iVar1 = param_2[0x11];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x801;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x12];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x14];
  }
  else {
    iVar1 = param_2[0x13];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x901;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x14];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x16];
  }
  else {
    iVar1 = param_2[0x15];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0xa01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x16];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x18];
  }
  else {
    iVar1 = param_2[0x17];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0xb01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x18];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x1a];
  }
  else {
    iVar1 = param_2[0x19];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0xc01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x1a];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x1c];
  }
  else {
    iVar1 = param_2[0x1b];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0xd01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x1c];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x1e];
  }
  else {
    iVar1 = param_2[0x1d];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0xe01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x1e];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x20];
  }
  else {
    iVar1 = param_2[0x1f];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0xf01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x20];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x22];
  }
  else {
    iVar1 = param_2[0x21];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1001;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x22];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x24];
  }
  else {
    iVar1 = param_2[0x23];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1101;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x24];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x26];
  }
  else {
    iVar1 = param_2[0x25];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1201;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x26];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x28];
  }
  else {
    iVar1 = param_2[0x27];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1301;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x28];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x2a];
  }
  else {
    iVar1 = param_2[0x29];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1401;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x2a];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x2c];
  }
  else {
    iVar1 = param_2[0x2b];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1501;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x2c];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x2e];
  }
  else {
    iVar1 = param_2[0x2d];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1601;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x2e];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x30];
  }
  else {
    iVar1 = param_2[0x2f];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1701;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x30];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x32];
  }
  else {
    iVar1 = param_2[0x31];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1801;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x32];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x34];
  }
  else {
    iVar1 = param_2[0x33];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1901;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x34];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x36];
  }
  else {
    iVar1 = param_2[0x35];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1a01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x36];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x38];
  }
  else {
    iVar1 = param_2[0x37];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1b01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x38];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x3a];
  }
  else {
    iVar1 = param_2[0x39];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1c01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x3a];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x3c];
  }
  else {
    iVar1 = param_2[0x3b];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1d01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x3c];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x3e];
  }
  else {
    iVar1 = param_2[0x3d];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1e01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x3e];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x40];
  }
  else {
    iVar1 = param_2[0x3f];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x1f01;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x40];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x42];
  }
  else {
    iVar1 = param_2[0x41];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2001;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x42];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x44];
  }
  else {
    iVar1 = param_2[0x43];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2101;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x44];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x46];
  }
  else {
    iVar1 = param_2[0x45];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2201;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x46];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x48];
  }
  else {
    iVar1 = param_2[0x47];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2301;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x48];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x4a];
  }
  else {
    iVar1 = param_2[0x49];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2401;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x4a];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x4c];
  }
  else {
    iVar1 = param_2[0x4b];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2501;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x4c];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x4e];
  }
  else {
    iVar1 = param_2[0x4d];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2601;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x4e];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x50];
  }
  else {
    iVar1 = param_2[0x4f];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2701;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x50];
    lStack_48 = lVar4;
  }
  if (iVar3 == 4) {
    iVar3 = param_2[0x52];
  }
  else {
    iVar1 = param_2[0x51];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2801;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lVar4 = lVar4 + 1;
    iVar3 = param_2[0x52];
    lStack_48 = lVar4;
  }
  if (iVar3 != 4) {
    iVar1 = param_2[0x53];
    if (lVar4 == lStack_58) {
      pdb_142d7f010(&lStack_58);
    }
    puStack_50[lVar4 * 6] = 0x2901;
    *(int *)(puStack_50 + lVar4 * 6 + 2) = iVar3;
    *(int *)(puStack_50 + lVar4 * 6 + 4) = iVar1;
    lStack_48 = lVar4 + 1;
  }
  param_1[2] = lStack_48;
  *param_1 = lStack_58;
  param_1[1] = (longlong)puStack_50;
  return param_1;
}

