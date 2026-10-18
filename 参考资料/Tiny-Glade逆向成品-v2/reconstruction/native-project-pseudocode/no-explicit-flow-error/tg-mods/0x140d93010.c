// VA 0x140d93010, PDB extent 311 bytes
// tg_mods::overlay::ModParts::describe
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::ModParts::describe
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 311 */

undefined8 pdb_140d93010(undefined8 param_1,longlong *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uStack_40;
  byte *pbStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_40 = 0;
  pbStack_38 = (byte *)0x8;
  uStack_30 = 0;
  bVar4 = (char)param_2[4] != '\x01';
  if (bVar4) {
    lVar3 = *param_2;
  }
  else {
    pdb_142d7e980(&uStack_40);
    *(undefined **)pbStack_38 = &UNK_1431e54d8;
    pbStack_38[8] = 0xb;
    pbStack_38[9] = 0;
    pbStack_38[10] = 0;
    pbStack_38[0xb] = 0;
    pbStack_38[0xc] = 0;
    pbStack_38[0xd] = 0;
    pbStack_38[0xe] = 0;
    pbStack_38[0xf] = 0;
    lVar3 = *param_2;
  }
  uStack_30 = (ulonglong)!bVar4;
  uVar2 = (ulonglong)!bVar4;
  if (!SBORROW8(0,lVar3)) {
    if (uVar2 == uStack_40) {
      pdb_142d7e980(&uStack_40);
    }
    lVar3 = (ulonglong)!bVar4 * 0x10;
    *(undefined **)(pbStack_38 + lVar3) = &UNK_1431e54e3;
    pbVar1 = pbStack_38 + lVar3 + 8;
    pbVar1[0] = 7;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    uStack_30 = uVar2 + 1;
  }
  pdb_141dadf20(param_1,pbStack_38,uStack_30,&UNK_1431e54ea,3);
  if (uStack_40 != 0) {
    pub_1406abac0(pbStack_38,uStack_40 << 4,8);
  }
  return param_1;
}

