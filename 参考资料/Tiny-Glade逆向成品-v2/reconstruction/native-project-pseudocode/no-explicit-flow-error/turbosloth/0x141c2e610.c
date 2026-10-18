// VA 0x141c2e610, PDB extent 526 bytes
// turbosloth::store::write_package_manifest
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::write_package_manifest
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 526 */

byte * pdb_141c2e610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  ulonglong uStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined *puStack_60;
  byte *pbStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined *puStack_38;
  
  puStack_38 = (undefined *)0xfffffffffffffffe;
  pdb_1426245c0(&uStack_70,param_3);
  puVar1 = puStack_60;
  if (!SBORROW8(0,uStack_70)) {
    pbStack_40 = pbStack_68;
    uStack_48 = uStack_70;
    pdb_140f3e9e0(&uStack_70,param_1,param_2,&UNK_14339ef18,0xc);
    pbStack_50 = pbStack_68;
    pdb_140f55fb0(&uStack_88,pbStack_68,puStack_60);
    if (SBORROW8(0,uStack_88)) {
      pdb_1404b38e0(&pbStack_80);
    }
    else {
      if ((undefined *)lStack_78 == puVar1) {
        iVar2 = pub_142e32750(pbStack_80,pbStack_40,puVar1);
        bVar5 = iVar2 == 0;
      }
      else {
        bVar5 = false;
      }
      if (uStack_88 != 0) {
        pub_1406abac0(pbStack_80,uStack_88,1);
      }
      if (bVar5) {
        if (uStack_70 != 0) {
          pub_1406abac0(pbStack_50,uStack_70,1);
        }
        if (uStack_48 != 0) {
          pub_1406abac0(pbStack_40,uStack_48,1);
          return (byte *)0x0;
        }
        return (byte *)0x0;
      }
    }
    pbVar4 = (byte *)pdb_142571e80(pbStack_50,puStack_60,pbStack_40,puVar1);
    if (uStack_70 != 0) {
      pub_1406abac0(pbStack_50,uStack_70,1);
    }
    if (uStack_48 != 0) {
      pub_1406abac0(pbStack_40,uStack_48,1);
    }
    return pbVar4;
  }
  pbStack_50 = &UNK_14256b2f2;
  pdb_14007ee60();
  pbStack_50 = &UNK_14256b301;
  pbVar4 = pub_1406abab0(8,8);
  if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pbStack_50 = &UNK_14256b330;
    pdb_142dc7e11(8,8);
  }
  *(byte **)pbVar4 = pbStack_68;
  puStack_60 = &UNK_140f3fe12;
  pdb_14007ee60();
  puStack_60 = &UNK_140f3fe21;
  pbVar3 = pub_1406abab0(0x18,8);
  if (pbVar3 == (byte *)0x0) {
    puStack_38 = &UNK_143557898;
                    /* WARNING: Subroutine does not return */
    puStack_60 = &UNK_140f3fe53;
    pdb_142dc7e11(8,0x18);
  }
  *(byte **)pbVar3 = pbVar4;
  *(undefined **)(pbVar3 + 8) = &UNK_143557898;
  pbVar3[0x10] = 0x15;
  return pbVar3 + 1;
}

