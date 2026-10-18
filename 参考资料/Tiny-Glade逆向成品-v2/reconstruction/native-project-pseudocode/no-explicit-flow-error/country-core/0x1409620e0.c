// VA 0x1409620e0, PDB extent 1163 bytes
// country_core::render::nani::maintenance::nani_upload_derived_buffers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/maintenance.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::maintenance::nani_upload_derived_buffers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/maintenance.rs
   Extent: 1163 */

void pdb_1409620e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_490 [544];
  undefined1 auStack_270 [544];
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar7 = *(uint *)(param_3 + 100);
  uVar6 = (ulonglong)uVar7;
  if (uVar6 == 0) {
    uStack_48 = 0;
    pbStack_50 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    pbStack_50 = pub_1406abab0(uVar6 * 0x14,4);
    if (pbStack_50 == (byte *)0x0) {
      pdb_142dc7e2a(4,uVar6 * 0x14);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pbVar2 = pbStack_50;
    uStack_48 = 1;
    if (uVar7 != 1) {
      uVar4 = (ulonglong)((uint)(uVar6 - 1) & 7);
      uStack_48 = uVar6;
      if (6 < uVar7 - 2) {
        uVar5 = uVar6 - 1 & 0xfffffffffffffff8;
        do {
          pbVar2[0] = 0;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          pbVar2[8] = 0;
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          pbVar2[0x10] = 0;
          pbVar2[0x11] = 0;
          pbVar2[0x12] = 0;
          pbVar2[0x13] = 0;
          pbVar2[0x14] = 0;
          pbVar2[0x15] = 0;
          pbVar2[0x16] = 0;
          pbVar2[0x17] = 0;
          pbVar2[0x18] = 0;
          pbVar2[0x19] = 0;
          pbVar2[0x1a] = 0;
          pbVar2[0x1b] = 0;
          pbVar2[0x1c] = 0;
          pbVar2[0x1d] = 0;
          pbVar2[0x1e] = 0;
          pbVar2[0x1f] = 0;
          pbVar2[0x20] = 0;
          pbVar2[0x21] = 0;
          pbVar2[0x22] = 0;
          pbVar2[0x23] = 0;
          pbVar2[0x24] = 0;
          pbVar2[0x25] = 0;
          pbVar2[0x26] = 0;
          pbVar2[0x27] = 0;
          pbVar2[0x28] = 0;
          pbVar2[0x29] = 0;
          pbVar2[0x2a] = 0;
          pbVar2[0x2b] = 0;
          pbVar2[0x2c] = 0;
          pbVar2[0x2d] = 0;
          pbVar2[0x2e] = 0;
          pbVar2[0x2f] = 0;
          pbVar2[0x30] = 0;
          pbVar2[0x31] = 0;
          pbVar2[0x32] = 0;
          pbVar2[0x33] = 0;
          pbVar2[0x34] = 0;
          pbVar2[0x35] = 0;
          pbVar2[0x36] = 0;
          pbVar2[0x37] = 0;
          pbVar2[0x38] = 0;
          pbVar2[0x39] = 0;
          pbVar2[0x3a] = 0;
          pbVar2[0x3b] = 0;
          pbVar2[0x3c] = 0;
          pbVar2[0x3d] = 0;
          pbVar2[0x3e] = 0;
          pbVar2[0x3f] = 0;
          pbVar2[0x40] = 0;
          pbVar2[0x41] = 0;
          pbVar2[0x42] = 0;
          pbVar2[0x43] = 0;
          pbVar2[0x44] = 0;
          pbVar2[0x45] = 0;
          pbVar2[0x46] = 0;
          pbVar2[0x47] = 0;
          pbVar2[0x48] = 0;
          pbVar2[0x49] = 0;
          pbVar2[0x4a] = 0;
          pbVar2[0x4b] = 0;
          pbVar2[0x4c] = 0;
          pbVar2[0x4d] = 0;
          pbVar2[0x4e] = 0;
          pbVar2[0x4f] = 0;
          pbVar2[0x50] = 0;
          pbVar2[0x51] = 0;
          pbVar2[0x52] = 0;
          pbVar2[0x53] = 0;
          pbVar2[0x54] = 0;
          pbVar2[0x55] = 0;
          pbVar2[0x56] = 0;
          pbVar2[0x57] = 0;
          pbVar2[0x58] = 0;
          pbVar2[0x59] = 0;
          pbVar2[0x5a] = 0;
          pbVar2[0x5b] = 0;
          pbVar2[0x5c] = 0;
          pbVar2[0x5d] = 0;
          pbVar2[0x5e] = 0;
          pbVar2[0x5f] = 0;
          pbVar2[0x60] = 0;
          pbVar2[0x61] = 0;
          pbVar2[0x62] = 0;
          pbVar2[99] = 0;
          pbVar2[100] = 0;
          pbVar2[0x65] = 0;
          pbVar2[0x66] = 0;
          pbVar2[0x67] = 0;
          pbVar2[0x68] = 0;
          pbVar2[0x69] = 0;
          pbVar2[0x6a] = 0;
          pbVar2[0x6b] = 0;
          pbVar2[0x6c] = 0;
          pbVar2[0x6d] = 0;
          pbVar2[0x6e] = 0;
          pbVar2[0x6f] = 0;
          pbVar2[0x70] = 0;
          pbVar2[0x71] = 0;
          pbVar2[0x72] = 0;
          pbVar2[0x73] = 0;
          pbVar2[0x74] = 0;
          pbVar2[0x75] = 0;
          pbVar2[0x76] = 0;
          pbVar2[0x77] = 0;
          pbVar2[0x78] = 0;
          pbVar2[0x79] = 0;
          pbVar2[0x7a] = 0;
          pbVar2[0x7b] = 0;
          pbVar2[0x7c] = 0;
          pbVar2[0x7d] = 0;
          pbVar2[0x7e] = 0;
          pbVar2[0x7f] = 0;
          pbVar2[0x80] = 0;
          pbVar2[0x81] = 0;
          pbVar2[0x82] = 0;
          pbVar2[0x83] = 0;
          pbVar2[0x84] = 0;
          pbVar2[0x85] = 0;
          pbVar2[0x86] = 0;
          pbVar2[0x87] = 0;
          pbVar2[0x88] = 0;
          pbVar2[0x89] = 0;
          pbVar2[0x8a] = 0;
          pbVar2[0x8b] = 0;
          pbVar2[0x8c] = 0;
          pbVar2[0x8d] = 0;
          pbVar2[0x8e] = 0;
          pbVar2[0x8f] = 0;
          pbVar2[0x90] = 0;
          pbVar2[0x91] = 0;
          pbVar2[0x92] = 0;
          pbVar2[0x93] = 0;
          pbVar2[0x94] = 0;
          pbVar2[0x95] = 0;
          pbVar2[0x96] = 0;
          pbVar2[0x97] = 0;
          pbVar2[0x98] = 0;
          pbVar2[0x99] = 0;
          pbVar2[0x9a] = 0;
          pbVar2[0x9b] = 0;
          pbVar2[0x9c] = 0;
          pbVar2[0x9d] = 0;
          pbVar2[0x9e] = 0;
          pbVar2[0x9f] = 0;
          pbVar2 = pbVar2 + 0xa0;
          uVar5 = uVar5 - 8;
        } while (uVar5 != 0);
        if (uVar4 == 0) goto LAB_140962216;
      }
      do {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
        pbVar2[0x11] = 0;
        pbVar2[0x12] = 0;
        pbVar2[0x13] = 0;
        pbVar2 = pbVar2 + 0x14;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
LAB_140962216:
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    pbVar2[0x10] = 0;
    pbVar2[0x11] = 0;
    pbVar2[0x12] = 0;
    pbVar2[0x13] = 0;
  }
  pdb_141533320(param_2,param_1,pbStack_50,uVar6);
  if (uStack_48 != 0) {
    pub_1406abac0(pbStack_50,uStack_48 * 0x14,4);
  }
  uVar7 = *(uint *)(param_3 + 0x60);
  uVar6 = (ulonglong)uVar7;
  if (uVar6 == 0) {
    uStack_48 = 0;
    pbVar2 = (byte *)0x4;
LAB_1409622ec:
    pbStack_50 = pbVar2;
    pdb_1415326e0(param_2,param_1,pbVar2,uVar6);
    if (uStack_48 != 0) {
      pub_1406abac0(pbStack_50,uStack_48 << 2,4);
    }
    uVar7 = uVar7 >> 5;
    uVar6 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      uVar4 = (ulonglong)(uVar7 * 4);
      pdb_14007ee60();
      pbVar2 = pub_1406abae0(uVar4,4);
      if (pbVar2 != (byte *)0x0) goto LAB_14096235e;
      goto LAB_14096234c;
    }
  }
  else {
    uVar4 = uVar6 * 4;
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(uVar4,4);
    if (pbVar2 != (byte *)0x0) {
      pbVar3 = pbVar2;
      uVar5 = 1;
      if (uVar7 != 1) {
        pub_142e32780(pbVar2,0,uVar4 - 4);
        pbVar3 = pbVar2 + (uVar4 - 4);
        uVar5 = uVar6;
      }
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      uStack_48 = uVar5;
      goto LAB_1409622ec;
    }
LAB_14096234c:
    pdb_142dc7e2a(4,uVar4);
  }
  pbVar2 = (byte *)0x4;
LAB_14096235e:
  pbStack_50 = pbVar2;
  uStack_48 = uVar6;
  pdb_141533940(param_2,param_1,pbVar2,uVar6);
  pdb_141530a40(param_2,param_1,pbStack_50,uStack_48);
  pub_142e32780(auStack_270,0,0x220);
  uVar6 = *(ulonglong *)(param_3 + 0x10);
  if (0x88 < uVar6) {
    pdb_142dc8420(0,uVar6,0x88,&UNK_143024300);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pub_142e32760(auStack_270,*(undefined8 *)(param_3 + 8),uVar6 << 2);
  pub_142e32760(auStack_490,auStack_270,0x220);
  pdb_141531680(param_2,param_1,auStack_490,1);
  if (uStack_48 != 0) {
    pub_1406abac0(pbStack_50,(ulonglong)(uint)((int)uStack_48 << 2),4);
  }
  return;
}

