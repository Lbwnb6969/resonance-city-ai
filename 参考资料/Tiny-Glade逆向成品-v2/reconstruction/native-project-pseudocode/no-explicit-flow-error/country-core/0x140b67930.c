// VA 0x140b67930, PDB extent 324 bytes
// country_core::systems::timelapse_replay::start_timelapse
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/timelapse_replay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::timelapse_replay::start_timelapse
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/timelapse_replay.rs
   Extent: 324 */

void pdb_140b67930(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  puVar1 = (ulonglong *)*param_1;
  lVar10 = param_1[1];
  uVar2 = *puVar1;
  uVar5 = 0;
  uVar6 = uVar2 - *(ulonglong *)(lVar10 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar10 + 0x18)) {
    uVar6 = uVar5;
  }
  uVar4 = uVar2 - *(ulonglong *)(lVar10 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar10 + 0x38)) {
    uVar4 = uVar5;
  }
  uVar2 = *(ulonglong *)(lVar10 + 0x10);
  uVar3 = *(ulonglong *)(lVar10 + 0x30);
  uVar7 = uVar3 - uVar4;
  if (uVar3 < uVar4) {
    uVar7 = uVar5;
  }
  uVar9 = uVar2 - uVar6;
  if (uVar2 < uVar6) {
    uVar9 = uVar5;
  }
  uVar5 = *(ulonglong *)(lVar10 + 0x40);
  lVar8 = *(longlong *)(lVar10 + 8);
  lVar10 = *(longlong *)(lVar10 + 0x28);
  *puVar1 = (uVar5 - uVar7) - uVar9;
  if (uVar2 >= uVar6 && uVar2 - uVar6 != 0 || uVar3 >= uVar4 && uVar3 - uVar4 != 0) {
    lVar10 = lVar10 + uVar4 * 0x10;
    lVar8 = lVar8 + uVar6 * 0x10;
    if (uVar2 < uVar6) {
      lVar8 = 8;
    }
    lVar8 = lVar8 + -0x10 + uVar9 * 0x10;
    if (uVar2 <= uVar6) {
      lVar8 = 0;
    }
    if (uVar3 < uVar4) {
      lVar10 = 8;
    }
    lStack_80 = lVar10 + -0x10 + uVar7 * 0x10;
    if (uVar3 <= uVar4) {
      lStack_80 = lVar8;
    }
    *puVar1 = uVar5;
    lStack_80 = lStack_80 + 8;
    uStack_78 = param_6;
    uStack_70 = param_5;
    uStack_58 = param_8;
    plStack_50 = &lStack_80;
    uStack_48 = param_9;
    uStack_68 = param_3;
    uStack_60 = param_4;
    pdb_141b6b430(CONCAT71((int7)((ulonglong)lStack_80 >> 8),
                           !SBORROW8(0,*(longlong *)(*param_2 + 0x30))),param_7,&uStack_78);
  }
  return;
}

