// VA 0x140bf1c70, PDB extent 177 bytes
// country_core::systems::wall::snapping::snapping_maintain::snapping_maintain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_maintain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::snapping::snapping_maintain::snapping_maintain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_maintain.rs
   Extent: 177 */

void pdb_140bf1c70(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  undefined *puVar4;
  byte bVar5;
  byte in_R10B;
  undefined2 in_R11W;
  undefined4 in_XMM0_Da;
  undefined8 uStack_10;
  
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  bVar5 = 0x68;
  puVar4 = &UNK_143066668 + *(int *)(&UNK_143066668 + (ulonglong)bVar1 * 4);
  uStack_10 = in_RAX;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    break;
  case 1:
    in_R10B = pbVar2[1];
    in_R11W = *(undefined2 *)(pbVar2 + 2);
    param_2 = *(undefined8 *)(pbVar2 + 4);
    in_XMM0_Da = *(undefined4 *)(pbVar2 + 0xc);
    puVar4 = *(undefined **)(pbVar2 + 0x10);
    bVar5 = pbVar2[0x18];
    uStack_10 = CONCAT44(*(uint *)(pbVar2 + 0x1c) >> 8,*(undefined4 *)(pbVar2 + 0x19));
    break;
  case 2:
    param_2 = *(undefined8 *)(pbVar2 + 4);
    in_XMM0_Da = *(undefined4 *)(pbVar2 + 0xc);
    puVar4 = *(undefined **)(pbVar2 + 0x10);
    bVar5 = pbVar2[0x18];
    in_R10B = pbVar2[1];
    break;
  case 3:
    param_2 = *(undefined8 *)(pbVar2 + 4);
    in_XMM0_Da = *(undefined4 *)(pbVar2 + 0xc);
    in_R10B = pbVar2[1];
    puVar4 = *(undefined **)(pbVar2 + 0x10);
  }
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  pbVar2[0x20] = bVar1;
  pbVar2[0x21] = in_R10B;
  *(undefined2 *)(pbVar2 + 0x22) = in_R11W;
  *(undefined8 *)(pbVar2 + 0x24) = param_2;
  *(undefined4 *)(pbVar2 + 0x2c) = in_XMM0_Da;
  *(undefined **)(pbVar2 + 0x30) = puVar4;
  pbVar2[0x38] = bVar5;
  uVar3 = (undefined4)uStack_10;
  *(undefined4 *)(pbVar2 + 0x39) = uVar3;
  *(undefined4 *)(pbVar2 + 0x3c) = uStack_10._3_4_;
  return;
}

