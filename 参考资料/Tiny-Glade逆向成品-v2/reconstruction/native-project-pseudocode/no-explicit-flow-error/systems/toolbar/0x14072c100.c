// VA 0x14072c100, PDB extent 245 bytes
// toolbar::mei::core::MeiContext::on_key_event
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::MeiContext::on_key_event
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 245 */

void pdb_14072c100(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined7 uStack_2f;
  
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar14 = param_2[2];
  uVar15 = param_2[3];
  uVar16 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar9 = param_2[7];
  uVar2 = param_4[2];
  uVar12 = *param_4;
  uVar13 = param_4[1];
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == *(longlong *)(param_1 + 0x18)) {
    pdb_142d8a810(param_1 + 0x18);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar17 = lVar3 * 0x70;
  puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar17);
  *puVar1 = uVar6;
  puVar1[1] = CONCAT71(uStack_2f,param_3);
  puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar17);
  *puVar1 = uVar9;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar17);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar17);
  *puVar1 = uVar15;
  puVar1[1] = uVar16;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar17);
  *puVar1 = uVar8;
  puVar1[1] = uVar14;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar17);
  *puVar1 = uVar2;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar4 + lVar17) = uVar12;
  ((undefined8 *)(lVar4 + lVar17))[1] = uVar13;
  *(longlong *)(param_1 + 0x28) = lVar3 + 1;
  return;
}

