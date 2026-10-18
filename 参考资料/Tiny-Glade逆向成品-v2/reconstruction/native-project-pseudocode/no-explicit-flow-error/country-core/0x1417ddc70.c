// VA 0x1417ddc70, PDB extent 578 bytes
// country_core::resources::roofs::roof_noise::gpunoise::noise
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_noise.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::roofs::roof_noise::gpunoise::noise
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_noise.rs
   Extent: 578 */

float pdb_1417ddc70(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  fVar5 = (float)pub_142e32a40();
  fVar7 = _DAT_142e382cc;
  iVar4 = (int)fVar5;
  if (_DAT_142e382cc < fVar5) {
    iVar4 = 0x7fffffff;
  }
  if (NAN(fVar5)) {
    iVar4 = 0;
  }
  fVar6 = (float)pub_142e32a40(param_2);
  iVar2 = (int)fVar6;
  if (fVar7 < fVar6) {
    iVar2 = 0x7fffffff;
  }
  if (NAN(fVar6)) {
    iVar2 = 0;
  }
  param_1 = param_1 - fVar5;
  param_2 = param_2 - fVar6;
  iVar4 = iVar4 * 0x19660d;
  uVar3 = iVar2 * 0x401 + 0x401;
  fVar7 = (_DAT_142e3788c - (param_1 + param_1)) * param_1 * param_1;
  uVar8 = ((uint)(iVar2 * 0x401) >> 6 ^ iVar2 * 0x401) * 9;
  uVar3 = (uVar3 >> 6 ^ uVar3) * 9;
  iVar2 = (uVar8 >> 0xb ^ uVar8) * 0x8001;
  iVar1 = (uVar3 >> 0xb ^ uVar3) * 0x8001;
  uVar8 = (iVar4 + iVar1 + 0x19660d) * 0x19660d + _DAT_14333baa0;
  uVar3 = (iVar2 + iVar4 + 0x19660d) * 0x19660d + _UNK_14333baa4;
  uVar8 = uVar8 >> 0xb ^ uVar8;
  uVar3 = uVar3 >> 0xb ^ uVar3;
  uVar9 = (iVar1 + iVar4) * 0x19660d + _DAT_14333baa0;
  uVar10 = (iVar2 + iVar4) * 0x19660d + _UNK_14333baa4;
  uVar9 = uVar9 >> 0xb ^ uVar9;
  uVar10 = uVar10 >> 0xb ^ uVar10;
  uVar9 = uVar9 << 7 & _DAT_14333bab0 ^ uVar9;
  uVar10 = uVar10 << 7 & _UNK_14333bab4 ^ uVar10;
  uVar9 = uVar9 << 0xf & _DAT_14333bac0 ^ uVar9;
  uVar10 = uVar10 << 0xf & _UNK_14333bac4 ^ uVar10;
  fVar6 = (float)(uVar9 & _DAT_14333bad0 ^ uVar9 >> 0x12 | _DAT_142e37950) + _DAT_142e37960;
  fVar5 = (float)(uVar10 & _UNK_14333bad4 ^ uVar10 >> 0x12 | _UNK_142e37954) + _UNK_142e37964;
  uVar8 = uVar8 << 7 & _DAT_14333bab0 ^ uVar8;
  uVar3 = uVar3 << 7 & _UNK_14333bab4 ^ uVar3;
  uVar8 = uVar8 << 0xf & _DAT_14333bac0 ^ uVar8;
  uVar3 = uVar3 << 0xf & _UNK_14333bac4 ^ uVar3;
  fVar5 = fVar7 * (((float)(uVar3 & _UNK_14333bad4 ^ uVar3 >> 0x12 | _UNK_142e37954) +
                   _UNK_142e37964) - fVar5) + fVar5;
  return ((fVar7 * (((float)(uVar8 & _DAT_14333bad0 ^ uVar8 >> 0x12 | _DAT_142e37950) +
                    _DAT_142e37960) - fVar6) + fVar6) - fVar5) *
         (_DAT_142e3788c - (param_2 + param_2)) * param_2 * param_2 + fVar5;
}

