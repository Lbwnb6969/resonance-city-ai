// VA 0x140a00450, PDB extent 367 bytes
// country_core::resources::gui::DebugTriggerProxyVis::as_string
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::gui::DebugTriggerProxyVis::as_string
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 367 */

undefined8 * pdb_140a00450(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  pdb_14007ee60();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    uVar6 = 8;
    pbVar4 = pub_1406abab0(8,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[0] = 0x53;
      pbVar4[1] = 0x68;
      pbVar4[2] = 0x6f;
      pbVar4[3] = 0x77;
      pbVar4[4] = 0x20;
      pbVar4[5] = 0x41;
      pbVar4[6] = 0x6c;
      pbVar4[7] = 0x6c;
code_r0x000140a0055e:
      *param_1 = uVar6;
      param_1[1] = pbVar4;
      param_1[2] = uVar6;
      return param_1;
    }
    goto code_r0x000140a005a0;
  case 1:
    uVar6 = 0xb;
    pbVar4 = pub_1406abab0(0xb,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[0] = 0x4f;
      pbVar4[1] = 0x6e;
      pbVar4[2] = 0x6c;
      pbVar4[3] = 0x79;
      pbVar4[4] = 0x20;
      pbVar4[5] = 0x4d;
      pbVar4[6] = 0x65;
      pbVar4[7] = 0x73;
      pbVar4[7] = 0x73;
      pbVar4[8] = 0x68;
      pbVar4[9] = 0x65;
      pbVar4[10] = 0x73;
      goto code_r0x000140a0055e;
    }
    goto code_r0x000140a005af;
  case 2:
    uVar6 = 0xe;
    pbVar4 = pub_1406abab0(0xe,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[6] = 0x77;
      pbVar4[7] = 0x69;
      pbVar4[8] = 0x74;
      pbVar4[9] = 0x68;
      pbVar4[10] = 0x20;
      pbVar4[0xb] = 0x55;
      pbVar4[0xc] = 0x56;
      pbVar4[0xd] = 0x73;
      pbVar4[0] = 0x52;
      pbVar4[1] = 0x6f;
      pbVar4[2] = 0x6f;
      pbVar4[3] = 0x66;
      pbVar4[4] = 0x73;
      pbVar4[5] = 0x20;
      pbVar4[6] = 0x77;
      pbVar4[7] = 0x69;
      goto code_r0x000140a0055e;
    }
    break;
  case 3:
    uVar6 = 0x10;
    pbVar4 = pub_1406abab0(0x10,1);
    uVar3 = _UNK_14303475e;
    if (pbVar4 != (byte *)0x0) {
      *(undefined8 *)pbVar4 = _UNK_143034756;
      *(undefined8 *)(pbVar4 + 8) = uVar3;
      goto code_r0x000140a0055e;
    }
    goto code_r0x000140a00591;
  case 4:
    uVar6 = 0x12;
    pbVar4 = pub_1406abab0(0x12,1);
    uVar3 = _UNK_14303476e;
    if (pbVar4 != (byte *)0x0) {
      *(undefined8 *)pbVar4 = _UNK_143034766;
      *(undefined8 *)(pbVar4 + 8) = uVar3;
      pbVar4[0x10] = 0x6e;
      pbVar4[0x11] = 0x73;
      goto code_r0x000140a0055e;
    }
    pdb_142dc7e2a(1,0x12);
  }
  pdb_142dc7e2a(1,0xe);
code_r0x000140a00591:
  pdb_142dc7e2a(1,0x10);
code_r0x000140a005a0:
  pdb_142dc7e2a(1,8);
code_r0x000140a005af:
  pdb_142dc7e2a(1,0xb);
  pcVar2 = (code *)swi(3);
  puVar5 = (undefined8 *)(*pcVar2)();
  return puVar5;
}

