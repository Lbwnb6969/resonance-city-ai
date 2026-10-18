// VA 0x140b67a80, PDB extent 335 bytes
// country_core::systems::timelapse_replay::finish_timelapse
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/timelapse_replay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::timelapse_replay::finish_timelapse
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/timelapse_replay.rs
   Extent: 335 */

void pdb_140b67a80(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar2 = param_1[1];
  uVar9 = *(ulonglong *)*param_1;
  uVar11 = 0;
  uVar7 = uVar9 - *(ulonglong *)(lVar2 + 0x18);
  if (uVar9 < *(ulonglong *)(lVar2 + 0x18)) {
    uVar7 = uVar11;
  }
  uVar10 = uVar9 - *(ulonglong *)(lVar2 + 0x38);
  if (uVar9 < *(ulonglong *)(lVar2 + 0x38)) {
    uVar10 = uVar11;
  }
  bVar12 = *(ulonglong *)(lVar2 + 0x30) < uVar10;
  uVar10 = *(ulonglong *)(lVar2 + 0x30) - uVar10;
  uVar9 = uVar10;
  if (bVar12) {
    uVar9 = uVar11;
  }
  bVar13 = *(ulonglong *)(lVar2 + 0x10) < uVar7;
  uVar7 = *(ulonglong *)(lVar2 + 0x10) - uVar7;
  uVar8 = uVar7;
  if (bVar13) {
    uVar8 = uVar11;
  }
  uVar9 = uVar8 + uVar9;
  if (!bVar13 && uVar7 != 0 || !bVar12 && uVar10 != 0) {
    uVar9 = uVar11;
  }
  *(ulonglong *)*param_1 = *(longlong *)(lVar2 + 0x40) - uVar9;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  pbVar3 = (byte *)*param_4;
  if (*pbVar3 != 2) {
    lVar2 = *param_5;
    if ((!bVar13 && uVar7 != 0 || !bVar12 && uVar10 != 0) && (*pbVar3 & 1) == 0) {
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      lVar4 = *param_6;
      uStack_50 = *(undefined4 *)(lVar4 + 0xa0);
      uStack_4c = *(undefined4 *)(lVar4 + 0xa4);
      uStack_48 = *(undefined4 *)(lVar4 + 0xa8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xac);
      uStack_58 = 0x8000000000000000;
      uStack_40 = 0;
      uStack_38 = 0;
      pdb_140927f00(lVar2,&uStack_58);
      *pbVar3 = 1;
    }
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined4 *)*param_3 = 0;
      bVar1 = *pbVar3;
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      lVar2 = *param_2;
      lVar4 = *(longlong *)(lVar2 + 0x30);
      uVar5 = *(undefined8 *)(lVar2 + 0x40);
      if (lVar4 == *(longlong *)(lVar2 + 0x20)) {
        pdb_142d7e980(lVar2 + 0x20);
      }
      lVar6 = *(longlong *)(lVar2 + 0x28);
      *(undefined8 *)(lVar6 + lVar4 * 0x10) = uVar5;
      *(byte *)(lVar6 + 8 + lVar4 * 0x10) = bVar1;
      *(longlong *)(lVar2 + 0x30) = lVar4 + 1;
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
    }
  }
  return;
}

