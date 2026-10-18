// VA 0x141167d60, PDB extent 833 bytes
// system_critters::spawn_ducks::DuckSpawnLocations::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/spawn_ducks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::spawn_ducks::DuckSpawnLocations::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/spawn_ducks.rs
   Extent: 833 */

longlong * pdb_141167d60(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  
  fVar3 = _DAT_142f895fc;
  fVar2 = _DAT_142f895e0;
  fVar1 = _DAT_142e36f28;
  uStack_80 = 0xfffffffffffffffe;
  lStack_98 = 0;
  lStack_90 = 4;
  lStack_88 = 0;
  lVar5 = 0;
  lVar6 = 0;
  do {
    lVar4 = lStack_88;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    fVar7 = ((float)lVar6 / fVar3) * fVar2 - (fVar1 - (float)lVar6 / fVar3) * fVar2;
    *(float *)(lStack_90 + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 4 + lVar5) = 0xc2500000;
    *(undefined1 *)(lStack_90 + 8 + lVar5) = 0;
    lStack_88 = lVar4 + 1;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    *(float *)(lStack_90 + 0xc + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 0x10 + lVar5) = 0xc221c71c;
    *(undefined1 *)(lStack_90 + 0x14 + lVar5) = 0;
    lStack_88 = lVar4 + 2;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    *(float *)(lStack_90 + 0x18 + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 0x1c + lVar5) = 0xc1e71c73;
    *(undefined1 *)(lStack_90 + 0x20 + lVar5) = 0;
    lStack_88 = lVar4 + 3;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    *(float *)(lStack_90 + 0x24 + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 0x28 + lVar5) = 0xc18aaaa9;
    *(undefined1 *)(lStack_90 + 0x2c + lVar5) = 0;
    lStack_88 = lVar4 + 4;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    *(float *)(lStack_90 + 0x30 + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 0x34 + lVar5) = 0xc0b8e390;
    *(undefined1 *)(lStack_90 + 0x38 + lVar5) = 0;
    lStack_88 = lVar4 + 5;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    *(float *)(lStack_90 + 0x3c + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 0x40 + lVar5) = 0x40b8e390;
    *(undefined1 *)(lStack_90 + 0x44 + lVar5) = 0;
    lStack_88 = lVar4 + 6;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    *(float *)(lStack_90 + 0x48 + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 0x4c + lVar5) = 0x418aaaac;
    *(undefined1 *)(lStack_90 + 0x50 + lVar5) = 0;
    lStack_88 = lVar4 + 7;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    *(float *)(lStack_90 + 0x54 + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 0x58 + lVar5) = 0x41e71c73;
    *(undefined1 *)(lStack_90 + 0x5c + lVar5) = 0;
    lStack_88 = lVar4 + 8;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    *(float *)(lStack_90 + 0x60 + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 100 + lVar5) = 0x4221c71c;
    *(undefined1 *)(lStack_90 + 0x68 + lVar5) = 0;
    lStack_88 = lVar4 + 9;
    if (lStack_88 == lStack_98) {
      pdb_142d7f010(&lStack_98);
    }
    *(float *)(lStack_90 + 0x6c + lVar5) = fVar7;
    *(undefined4 *)(lStack_90 + 0x70 + lVar5) = 0x42500000;
    *(undefined1 *)(lStack_90 + 0x74 + lVar5) = 0;
    lStack_88 = lVar4 + 10;
    lVar5 = lVar5 + 0x78;
    lVar6 = lVar6 + 1;
  } while (lVar5 != 0x4b0);
  param_1[2] = lStack_88;
  *param_1 = lStack_98;
  param_1[1] = lStack_90;
  *(undefined4 *)(param_1 + 3) = 0x41c80000;
  return param_1;
}

