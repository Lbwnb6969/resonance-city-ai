// VA 0x140b27700, PDB extent 463 bytes
// country_core::systems::steam::workshop_publish::workshop_tags
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::steam::workshop_publish::workshop_tags
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 463 */

longlong * pdb_140b27700(longlong *param_1,char param_2,char param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lStack_48;
  undefined8 *puStack_40;
  longlong lStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lStack_48 = 0;
  puStack_40 = (undefined8 *)0x8;
  lStack_38 = 0;
  if (param_2 != '\0') {
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(7,1);
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,7);
      goto LAB_140b2783b;
    }
    pbVar6[3] = 0x74;
    pbVar6[4] = 0x74;
    pbVar6[5] = 0x65;
    pbVar6[6] = 0x72;
    pbVar6[0] = 0x43;
    pbVar6[1] = 0x6c;
    pbVar6[2] = 0x75;
    pbVar6[3] = 0x74;
    pbStack_30 = pbVar6;
    pdb_142d895b0(&lStack_48);
    *puStack_40 = 7;
    puStack_40[1] = pbStack_30;
    puStack_40[2] = 7;
    lStack_38 = 1;
  }
  if (param_3 != '\0') {
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x11,1);
    lVar5 = lStack_38;
    uVar4 = _UNK_143056cf2;
    uVar3 = _UNK_143056cee;
    uVar2 = _UNK_143056cea;
    if (pbVar6 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x11);
LAB_140b2783b:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(undefined4 *)pbVar6 = _DAT_143056ce6;
    *(undefined4 *)(pbVar6 + 4) = uVar2;
    *(undefined4 *)(pbVar6 + 8) = uVar3;
    *(undefined4 *)(pbVar6 + 0xc) = uVar4;
    pbVar6[0x10] = 0x74;
    pbStack_30 = pbVar6;
    if (lStack_38 == lStack_48) {
      pdb_142d895b0(&lStack_48);
    }
    puStack_40[lVar5 * 3] = 0x11;
    puStack_40[lVar5 * 3 + 1] = pbStack_30;
    puStack_40[lVar5 * 3 + 2] = 0x11;
    lStack_38 = lVar5 + 1;
  }
  param_1[2] = lStack_38;
  *param_1 = lStack_48;
  param_1[1] = (longlong)puStack_40;
  return param_1;
}

