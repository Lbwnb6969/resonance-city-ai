// VA 0x140b772d0, PDB extent 842 bytes
// country_core::resources::roofs::roof_shape::Roof::profile_curve_normalized
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::Roof::profile_curve_normalized
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 842 */

longlong * pdb_140b772d0(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  
  fVar5 = *(float *)(param_2 + 0x2c);
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0xa0,4);
  if (pbVar2 == (byte *)0x0) {
    pdb_142dc7e2a(4,0xa0);
    pcVar1 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar1)();
    return plVar3;
  }
  fVar5 = (_DAT_142e36f28 - fVar5) * _DAT_142e36f50 + _DAT_142e37838 * fVar5;
  uVar4 = pub_142e32ad0(0,fVar5);
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  *(undefined4 *)(pbVar2 + 4) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bee8,fVar5);
  pbVar2[8] = 0x36;
  pbVar2[9] = 0x94;
  pbVar2[10] = 0x57;
  pbVar2[0xb] = 0x3d;
  *(undefined4 *)(pbVar2 + 0xc) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305beec,fVar5);
  pbVar2[0x10] = 0x36;
  pbVar2[0x11] = 0x94;
  pbVar2[0x12] = 0xd7;
  pbVar2[0x13] = 0x3d;
  *(undefined4 *)(pbVar2 + 0x14) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bef0,fVar5);
  pbVar2[0x18] = 0x28;
  pbVar2[0x19] = 0xaf;
  pbVar2[0x1a] = 0x21;
  pbVar2[0x1b] = 0x3e;
  *(undefined4 *)(pbVar2 + 0x1c) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bef4,fVar5);
  pbVar2[0x20] = 0x36;
  pbVar2[0x21] = 0x94;
  pbVar2[0x22] = 0x57;
  pbVar2[0x23] = 0x3e;
  *(undefined4 *)(pbVar2 + 0x24) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bef8,fVar5);
  pbVar2[0x28] = 0xa2;
  pbVar2[0x29] = 0xbc;
  pbVar2[0x2a] = 0x86;
  pbVar2[0x2b] = 0x3e;
  *(undefined4 *)(pbVar2 + 0x2c) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305befc,fVar5);
  pbVar2[0x30] = 0x28;
  pbVar2[0x31] = 0xaf;
  pbVar2[0x32] = 0xa1;
  pbVar2[0x33] = 0x3e;
  *(undefined4 *)(pbVar2 + 0x34) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf00,fVar5);
  pbVar2[0x38] = 0xaf;
  pbVar2[0x39] = 0xa1;
  pbVar2[0x3a] = 0xbc;
  pbVar2[0x3b] = 0x3e;
  *(undefined4 *)(pbVar2 + 0x3c) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf04,fVar5);
  pbVar2[0x40] = 0x36;
  pbVar2[0x41] = 0x94;
  pbVar2[0x42] = 0xd7;
  pbVar2[0x43] = 0x3e;
  *(undefined4 *)(pbVar2 + 0x44) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf08,fVar5);
  pbVar2[0x48] = 0xbd;
  pbVar2[0x49] = 0x86;
  pbVar2[0x4a] = 0xf2;
  pbVar2[0x4b] = 0x3e;
  *(undefined4 *)(pbVar2 + 0x4c) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf0c,fVar5);
  pbVar2[0x50] = 0xa2;
  pbVar2[0x51] = 0xbc;
  pbVar2[0x52] = 6;
  pbVar2[0x53] = 0x3f;
  *(undefined4 *)(pbVar2 + 0x54) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf10,fVar5);
  pbVar2[0x58] = 0xe5;
  pbVar2[0x59] = 0x35;
  pbVar2[0x5a] = 0x14;
  pbVar2[0x5b] = 0x3f;
  *(undefined4 *)(pbVar2 + 0x5c) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf14,fVar5);
  pbVar2[0x60] = 0x28;
  pbVar2[0x61] = 0xaf;
  pbVar2[0x62] = 0x21;
  pbVar2[99] = 0x3f;
  *(undefined4 *)(pbVar2 + 100) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf18,fVar5);
  pbVar2[0x68] = 0x6c;
  pbVar2[0x69] = 0x28;
  pbVar2[0x6a] = 0x2f;
  pbVar2[0x6b] = 0x3f;
  *(undefined4 *)(pbVar2 + 0x6c) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf1c,fVar5);
  pbVar2[0x70] = 0xaf;
  pbVar2[0x71] = 0xa1;
  pbVar2[0x72] = 0x3c;
  pbVar2[0x73] = 0x3f;
  *(undefined4 *)(pbVar2 + 0x74) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf20,fVar5);
  pbVar2[0x78] = 0xf3;
  pbVar2[0x79] = 0x1a;
  pbVar2[0x7a] = 0x4a;
  pbVar2[0x7b] = 0x3f;
  *(undefined4 *)(pbVar2 + 0x7c) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf24,fVar5);
  pbVar2[0x80] = 0x36;
  pbVar2[0x81] = 0x94;
  pbVar2[0x82] = 0x57;
  pbVar2[0x83] = 0x3f;
  *(undefined4 *)(pbVar2 + 0x84) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf28,fVar5);
  pbVar2[0x88] = 0x79;
  pbVar2[0x89] = 0xd;
  pbVar2[0x8a] = 0x65;
  pbVar2[0x8b] = 0x3f;
  *(undefined4 *)(pbVar2 + 0x8c) = uVar4;
  uVar4 = pub_142e32ad0(_DAT_14305bf2c,fVar5);
  pbVar2[0x90] = 0xbd;
  pbVar2[0x91] = 0x86;
  pbVar2[0x92] = 0x72;
  pbVar2[0x93] = 0x3f;
  *(undefined4 *)(pbVar2 + 0x94) = uVar4;
  *(undefined8 *)(pbVar2 + 0x98) = _DAT_142e37950;
  uStack_88 = 0x14;
  uStack_78 = 0x14;
  pbStack_80 = pbVar2;
  pdb_140080c90(&lStack_70,&uStack_88,0);
  if (!SBORROW8(0,lStack_70)) {
    param_1[6] = lStack_40;
    param_1[4] = lStack_50;
    param_1[5] = lStack_48;
    param_1[2] = CONCAT44(uStack_5c,uStack_60);
    param_1[3] = lStack_58;
    *param_1 = lStack_70;
    param_1[1] = CONCAT44(uStack_64,uStack_68);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_88,&UNK_14335e258,&UNK_14305c388);
}

