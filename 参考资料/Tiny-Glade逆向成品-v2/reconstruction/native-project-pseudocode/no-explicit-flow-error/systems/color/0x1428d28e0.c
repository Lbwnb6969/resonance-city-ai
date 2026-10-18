// VA 0x1428d28e0, PDB extent 330 bytes
// system_color::radial_menu::IconInfo::wood_stair_railing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::radial_menu::IconInfo::wood_stair_railing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
   Extent: 330 */

undefined8 * pdb_1428d28e0(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = pdb_1409012c0(param_2);
  pdb_14007ee60();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    uVar6 = 0x14;
    pbVar3 = pub_1406abab0(0x14,1);
    uVar5 = _UNK_1435afb77;
    if (pbVar3 == (byte *)0x0) goto code_r0x0001428d2a1a;
    *(undefined8 *)pbVar3 = _UNK_1435afb6f;
    *(undefined8 *)(pbVar3 + 8) = uVar5;
    pbVar3[0x10] = 0x6e;
    pbVar3[0x11] = 0x67;
    pbVar3[0x12] = 0x5f;
    pbVar3[0x13] = 0x31;
    goto code_r0x0001428d29d8;
  case 1:
    pbVar3 = pub_1406abab0(0x17,1);
    uVar5 = _UNK_1435afc35;
    if (pbVar3 == (byte *)0x0) {
code_r0x0001428d29fc:
      pdb_142dc7e2a(1,0x17);
      goto code_r0x0001428d2a0b;
    }
    *(undefined8 *)pbVar3 = _UNK_1435afc2d;
    *(undefined8 *)(pbVar3 + 8) = uVar5;
    uVar5 = 0x726569705f676e69;
    break;
  case 2:
    uVar6 = 0x16;
    pbVar3 = pub_1406abab0(0x16,1);
    uVar5 = _UNK_1435afc4c;
    if (pbVar3 != (byte *)0x0) {
      *(undefined8 *)pbVar3 = _UNK_1435afc44;
      *(undefined8 *)(pbVar3 + 8) = uVar5;
      pbVar3[0xe] = 0x6c;
      pbVar3[0xf] = 0x69;
      pbVar3[0x10] = 0x6e;
      pbVar3[0x11] = 0x67;
      pbVar3[0x12] = 0x5f;
      pbVar3[0x13] = 0x6c;
      pbVar3[0x14] = 0x6f;
      pbVar3[0x15] = 0x77;
      goto code_r0x0001428d29d8;
    }
code_r0x0001428d2a0b:
    pdb_142dc7e2a(1,0x16);
code_r0x0001428d2a1a:
    pdb_142dc7e2a(1,0x14);
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar1)();
    return puVar4;
  case 3:
    pbVar3 = pub_1406abab0(0x17,1);
    uVar5 = _UNK_1435afc62;
    if (pbVar3 == (byte *)0x0) goto code_r0x0001428d29fc;
    *(undefined8 *)pbVar3 = _UNK_1435afc5a;
    *(undefined8 *)(pbVar3 + 8) = uVar5;
    uVar5 = 0x686769685f676e69;
  }
  uVar6 = 0x17;
  *(undefined8 *)(pbVar3 + 0xf) = uVar5;
code_r0x0001428d29d8:
  *param_1 = uVar6;
  param_1[1] = pbVar3;
  param_1[2] = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 3) = 0xf;
  *(char *)((longlong)param_1 + 0x19) = (char)param_2;
  return param_1;
}

