// VA 0x1428d2a30, PDB extent 190 bytes
// system_color::radial_menu::IconInfo::new_flat_roof_rim_ty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::radial_menu::IconInfo::new_flat_roof_rim_ty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
   Extent: 190 */

undefined8 * pdb_1428d2a30(undefined8 *param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uStack_19;
  
  uStack_19 = param_2;
  cVar3 = pdb_140901380(&uStack_19);
  pdb_14007ee60();
  if (cVar3 == '\0') {
    uVar6 = 0x1f;
    pbVar4 = pub_1406abab0(0x1f,1);
    uVar2 = _UNK_1435afc07;
    if (pbVar4 == (byte *)0x0) goto LAB_1428d2ade;
    *(ulonglong *)(pbVar4 + 0xf) = CONCAT71(_UNK_1435afc00,DAT_1435afbff);
    *(undefined8 *)(pbVar4 + 0x17) = uVar2;
    uVar7 = _DAT_1435afbf0;
    uVar8 = _UNK_1435afbf4;
    uVar9 = _UNK_1435afbf8;
    uVar10 = _UNK_1435afbfc;
  }
  else {
    uVar6 = 0x1e;
    pbVar4 = pub_1406abab0(0x1e,1);
    uVar2 = _UNK_1435afc25;
    if (pbVar4 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x1e);
LAB_1428d2ade:
      pdb_142dc7e2a(1,0x1f);
      pcVar1 = (code *)swi(3);
      puVar5 = (undefined8 *)(*pcVar1)();
      return puVar5;
    }
    *(ulonglong *)(pbVar4 + 0xe) = CONCAT62(_UNK_1435afc1f,_DAT_1435afc1d);
    *(undefined8 *)(pbVar4 + 0x16) = uVar2;
    uVar7 = _DAT_1435afc0f;
    uVar8 = _UNK_1435afc13;
    uVar9 = _UNK_1435afc17;
    uVar10 = CONCAT22(_DAT_1435afc1d,_UNK_1435afc1b);
  }
  *(undefined4 *)pbVar4 = uVar7;
  *(undefined4 *)(pbVar4 + 4) = uVar8;
  *(undefined4 *)(pbVar4 + 8) = uVar9;
  *(undefined4 *)(pbVar4 + 0xc) = uVar10;
  *param_1 = uVar6;
  param_1[1] = pbVar4;
  param_1[2] = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 3) = 10;
  return param_1;
}

