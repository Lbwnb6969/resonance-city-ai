// VA 0x14140d890, PDB extent 838 bytes
// utils::threshold_range::threshold_range<system_wall_constructor::segmentation::split_wall_path_segment_into_platform_stairs::split_wall_path_segment_into_platform_stairs::closure_env$7,system_wall_constructor::segmentation::split_wall_path_segment_into_platform_stairs::split_wall_path_segment_into_platform_stairs::closure_env$8>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/threshold_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::threshold_range::threshold_range<system_wall_constructor::segmentation::split_wall_path_segment_into_platform_stairs::split_wall_path_segment_into_platform_stairs::closure_env$7,system_wall_constructor::segmentation::split_wall_path_segment_into_platform_stairs::split_wall_path_segment_into_platform_stairs::closure_env$8>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/threshold_range.rs
   Extent: 838 */

void pdb_14140d890(longlong param_1,ulonglong param_2,float param_3,longlong *param_4,
                  longlong *param_5,longlong param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 *puStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 *puStack_a0;
  longlong *plStack_98;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  
  uVar5 = _DAT_142e37adc;
  uVar4 = _DAT_142e3788c;
  uStack_80 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    puStack_b8 = (undefined8 *)(param_6 + 0x78);
    plVar10 = (longlong *)param_4[1];
    puStack_a0 = (undefined8 *)(*param_4 + 0x78);
    lStack_b0 = param_4[2];
    lStack_a8 = param_4[3];
    uVar8 = 0;
    plStack_98 = plVar10;
    do {
      uVar6 = uVar8 + 1;
      if (uVar8 + 1 < param_2) {
        uVar6 = param_2;
      }
      uVar9 = uVar8;
      if (*(float *)(param_1 + uVar8 * 4) <= param_3) {
        do {
          if (uVar6 - 1 == uVar9) {
            if (uVar6 - uVar8 < 2) goto LAB_14140d98d;
            goto LAB_14140db23;
          }
          uVar1 = uVar9 + 1;
          lVar2 = uVar9 * 4;
          uVar9 = uVar1;
        } while (*(float *)(param_1 + 4 + lVar2) <= param_3);
        uVar6 = uVar1;
        if (1 < uVar1 - uVar8) {
LAB_14140db23:
          lVar2 = param_5[2];
          if (lVar2 == *param_5) {
            pdb_142d7e6e0();
          }
          lVar3 = param_5[1];
          lVar7 = lVar2 * 0x20;
          *(ulonglong *)(lVar3 + lVar7) = uVar8;
          *(ulonglong *)(lVar3 + 8 + lVar7) = uVar6;
          *(undefined8 *)(lVar3 + 0x10 + lVar7) = *puStack_b8;
          *(undefined4 *)(lVar3 + 0x18 + lVar7) = *(undefined4 *)(puStack_b8 + 1);
          param_5[2] = lVar2 + 1;
          plVar10 = plStack_98;
        }
      }
      else {
        do {
          if (uVar6 - 1 == uVar9) {
            uVar9 = uVar6;
            if (uVar6 - uVar8 < 2) goto LAB_14140d98d;
            goto LAB_14140da33;
          }
          lVar2 = uVar9 * 4;
          uVar9 = uVar9 + 1;
        } while (param_3 < *(float *)(param_1 + 4 + lVar2));
        uVar6 = uVar9;
        if (1 < uVar9 - uVar8) {
LAB_14140da33:
          uStack_178 = *(undefined4 *)(puStack_a0 + 1);
          uStack_180 = *puStack_a0;
          pdb_1413f8660(&uStack_8c,&uStack_180,uVar8,uVar9);
          uStack_d8 = *(undefined8 *)(lStack_b0 + 0x90);
          uStack_d0 = *(undefined8 *)(lStack_b0 + 0x98);
          uStack_c0 = uStack_84;
          uStack_c8 = uStack_8c;
          uStack_f8 = *(undefined8 *)(lStack_a8 + 8);
          uStack_f0 = *(undefined8 *)(lStack_a8 + 0x10);
          uStack_e8 = uStack_8c;
          uStack_e0 = uStack_84;
          uVar11 = uVar4;
          if (*(char *)(lStack_b0 + 0x2a0) == '\0') {
            uVar11 = uVar5;
          }
          pdb_1407fff70(&uStack_180,&uStack_8c,&uStack_d8,&uStack_f8,uVar11);
          lVar2 = plVar10[2];
          if (lVar2 == *plVar10) {
            pdb_142d8d9b0(plVar10);
          }
          pub_142e32760(lVar2 * 0x88 + plVar10[1],&uStack_180,0x88);
          plVar10[2] = lVar2 + 1;
          uVar6 = uVar9;
        }
      }
LAB_14140d98d:
      uVar8 = uVar6;
    } while (uVar6 < param_2);
  }
  return;
}

