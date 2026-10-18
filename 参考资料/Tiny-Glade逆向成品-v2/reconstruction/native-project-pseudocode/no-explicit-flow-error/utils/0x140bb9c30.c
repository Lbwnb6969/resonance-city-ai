// VA 0x140bb9c30, PDB extent 427 bytes
// utils::calculate_hash<country_core::resources::stairs::stairs_state::StairsSnapshot>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::calculate_hash<country_core::resources::stairs::stairs_state::StairsSnapshot>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 427 */

ulonglong pdb_140bb9c30(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  
  lStack_68 = 0x736f6d6570736575;
  lStack_60 = 0x6c7967656e657261;
  uStack_58 = 0x646f72616e646f6d;
  uStack_50 = 0x7465646279746573;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x20);
  lStack_70 = lVar4;
  pdb_1400b0640(&lStack_68,&lStack_70,8);
  if (lVar4 != 0) {
    puVar8 = puVar3;
    do {
      puVar1 = puVar8 + 2;
      uVar2 = puVar8[1];
      pdb_1417c3140(*puVar8,&lStack_68);
      pdb_1417c3140(uVar2,&lStack_68);
      puVar8 = puVar1;
    } while (puVar1 != puVar3 + lVar4 * 2);
  }
  uStack_30 = lStack_38 << 0x38 | uStack_30;
  uStack_50 = uStack_50 ^ uStack_30;
  uVar5 = lStack_68 + uStack_58;
  uVar7 = (uStack_58 << 0xd | uStack_58 >> 0x33) ^ uVar5;
  uVar6 = (uStack_50 << 0x10 | uStack_50 >> 0x30) ^ lStack_60 + uStack_50;
  uVar9 = lStack_60 + uStack_50 + uVar7;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar6;
  uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar9;
  uVar6 = (uVar6 << 0x15 | uVar6 >> 0x2b) ^ uVar5;
  uVar5 = (uVar5 ^ uStack_30) + uVar7;
  uVar9 = ((uVar9 << 0x20 | uVar9 >> 0x20) ^ 0xff) + uVar6;
  uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar5;
  uVar6 = (uVar6 << 0x10 | uVar6 >> 0x30) ^ uVar9;
  uVar9 = uVar9 + uVar7;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar6;
  uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar9;
  uVar6 = (uVar6 << 0x15 | uVar6 >> 0x2b) ^ uVar5;
  uVar5 = uVar5 + uVar7;
  uVar9 = (uVar9 << 0x20 | uVar9 >> 0x20) + uVar6;
  uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar5;
  uVar6 = (uVar6 << 0x10 | uVar6 >> 0x30) ^ uVar9;
  uVar9 = uVar9 + uVar7;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar6;
  uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar9;
  uVar6 = (uVar6 << 0x15 | uVar6 >> 0x2b) ^ uVar5;
  uVar9 = (uVar9 << 0x20 | uVar9 >> 0x20) + uVar6;
  uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar5 + uVar7;
  uVar5 = (uVar6 << 0x10 | uVar6 >> 0x30) ^ uVar9;
  uVar9 = uVar9 + uVar7;
  return (uVar9 << 0x20 | uVar9 >> 0x20) ^ (uVar7 << 0x11 | uVar7 >> 0x2f) ^
         (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar9;
}

