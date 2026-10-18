// VA 0x140ae2910, PDB extent 661 bytes
// country_core::systems::history::history_recording::history_finish_recording
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/history_recording.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::history::history_recording::history_finish_recording
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/history_recording.rs
   Extent: 661 */

void pdb_140ae2910(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 param_10,undefined8 *param_11)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [55];
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar2 = *param_3;
  if (SBORROW8(0,*(longlong *)(lVar2 + 0x30))) {
    return;
  }
  lVar8 = param_7[1];
  uVar10 = *(ulonglong *)*param_7;
  uVar7 = 0;
  uVar12 = uVar10 - *(ulonglong *)(lVar8 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar8 + 0x18)) {
    uVar12 = uVar7;
  }
  uVar9 = uVar10 - *(ulonglong *)(lVar8 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar8 + 0x38)) {
    uVar9 = uVar7;
  }
  bVar14 = *(ulonglong *)(lVar8 + 0x30) < uVar9;
  uVar9 = *(ulonglong *)(lVar8 + 0x30) - uVar9;
  uVar10 = uVar9;
  if (bVar14) {
    uVar10 = uVar7;
  }
  bVar15 = *(ulonglong *)(lVar8 + 0x10) < uVar12;
  uVar12 = *(ulonglong *)(lVar8 + 0x10) - uVar12;
  uVar11 = uVar12;
  if (bVar15) {
    uVar11 = uVar7;
  }
  uVar10 = uVar11 + uVar10;
  if (!bVar15 && uVar12 != 0 || !bVar14 && uVar9 != 0) {
    uVar10 = uVar7;
  }
  *(ulonglong *)*param_7 = *(longlong *)(lVar8 + 0x40) - uVar10;
  bVar6 = true;
  if ((bVar15 || uVar12 == 0) && (bVar14 || uVar9 == 0)) {
    lVar8 = param_8[1];
    uVar10 = *(ulonglong *)*param_8;
    uVar7 = 0;
    uVar12 = uVar10 - *(ulonglong *)(lVar8 + 0x18);
    if (uVar10 < *(ulonglong *)(lVar8 + 0x18)) {
      uVar12 = uVar7;
    }
    uVar9 = uVar10 - *(ulonglong *)(lVar8 + 0x38);
    if (uVar10 < *(ulonglong *)(lVar8 + 0x38)) {
      uVar9 = uVar7;
    }
    bVar14 = uVar9 <= *(ulonglong *)(lVar8 + 0x30);
    uVar9 = *(ulonglong *)(lVar8 + 0x30) - uVar9;
    uVar10 = uVar9;
    if (!bVar14) {
      uVar10 = uVar7;
    }
    bVar15 = uVar12 <= *(ulonglong *)(lVar8 + 0x10);
    uVar12 = *(ulonglong *)(lVar8 + 0x10) - uVar12;
    uVar11 = uVar12;
    if (!bVar15) {
      uVar11 = uVar7;
    }
    bVar6 = bVar15 && uVar12 != 0 || bVar14 && uVar9 != 0;
    uVar10 = uVar11 + uVar10;
    if (bVar15 && uVar12 != 0 || bVar14 && uVar9 != 0) {
      uVar10 = uVar7;
    }
    *(ulonglong *)*param_8 = *(longlong *)(lVar8 + 0x40) - uVar10;
  }
  lVar8 = *param_1;
  if ((*(char *)(lVar8 + 0x18) == '\x02') &&
     ((*(byte *)(*(longlong *)(lVar8 + 0x20) + 0xb9) & 1) != 0)) {
    bVar6 = (bool)(bVar6 | *(byte *)(lVar8 + 0x19) < 2);
  }
  puVar3 = (ulonglong *)*param_9;
  lVar8 = param_9[1];
  uVar10 = *puVar3;
  uVar7 = 0;
  uVar12 = uVar10 - *(ulonglong *)(lVar8 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar8 + 0x18)) {
    uVar12 = uVar7;
  }
  uVar9 = uVar10 - *(ulonglong *)(lVar8 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar8 + 0x38)) {
    uVar9 = uVar7;
  }
  uVar10 = *(ulonglong *)(lVar8 + 0x30);
  uVar11 = uVar10 - uVar9;
  if (uVar9 > uVar10) {
    uVar11 = uVar7;
  }
  uVar4 = *(ulonglong *)(lVar8 + 0x10);
  uVar13 = uVar4 - uVar12;
  if (uVar12 > uVar4) {
    uVar13 = uVar7;
  }
  uVar7 = *(ulonglong *)(lVar8 + 0x40);
  *puVar3 = uVar7 - (uVar13 + uVar11);
  if (uVar12 <= uVar4 && uVar4 - uVar12 != 0 || uVar9 <= uVar10 && uVar10 - uVar9 != 0) {
    *puVar3 = uVar7;
    lVar8 = *param_2;
  }
  else {
    lVar8 = *param_2;
    if (!bVar6) goto LAB_140ae2b3c;
  }
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  pdb_140c41490(auStack_70,*param_4,lVar8,0);
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_39 = 1;
  pdb_140a60a40(&uStack_118,*param_5);
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
  puVar5 = (undefined4 *)param_3[2];
  *puVar5 = uVar1;
  uStack_88 = uStack_d8;
  uStack_80 = uStack_d0;
  uStack_98 = uStack_e8;
  uStack_94 = uStack_e4;
  uStack_90 = uStack_e0;
  uStack_8c = uStack_dc;
  uStack_a8 = uStack_f8;
  uStack_a4 = uStack_f4;
  uStack_a0 = uStack_f0;
  uStack_9c = uStack_ec;
  uStack_b8 = uStack_108;
  uStack_b4 = uStack_104;
  uStack_b0 = uStack_100;
  uStack_ac = uStack_fc;
  uStack_c8 = uStack_118;
  uStack_c4 = uStack_114;
  uStack_c0 = uStack_110;
  uStack_bc = uStack_10c;
  *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
  uStack_39 = 0;
  pdb_140ae3200(lVar2,auStack_70,&uStack_c8,*param_11);
  *puVar5 = uVar1;
  uStack_39 = 0;
  pdb_140ae4b50(lVar2,param_6);
LAB_140ae2b3c:
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)(lVar8 + 0x1b0) = 1;
  return;
}

