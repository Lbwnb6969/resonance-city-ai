// VA 0x14140d450, PDB extent 1075 bytes
// utils::threshold_range::threshold_range<system_wall_constructor::construct_platform_stairs::process_loop_range_into_wallpath_segments::closure_env$1,system_wall_constructor::construct_platform_stairs::process_loop_range_into_wallpath_segments::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/threshold_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::threshold_range::threshold_range<system_wall_constructor::construct_platform_stairs::process_loop_range_into_wallpath_segments::closure_env$1,system_wall_constructor::construct_platform_stairs::process_loop_range_into_wallpath_segments::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/threshold_range.rs
   Extent: 1075 */

void pdb_14140d450(longlong param_1,ulonglong param_2,float param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 extraout_XMM0_Da;
  undefined8 in_stack_fffffffffffffe28;
  undefined8 uStack_188;
  undefined4 uStack_180;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  undefined4 uStack_a8;
  longlong *plStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  ulonglong uStack_74;
  undefined4 uStack_6c;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    puStack_d0 = (undefined8 *)*param_4;
    plStack_c8 = (longlong *)param_4[1];
    lStack_100 = param_4[2];
    plStack_a0 = (longlong *)param_4[3];
    uVar9 = 0;
    do {
      uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
      if (*(float *)(param_1 + uVar9 * 4) <= param_3) {
        do {
          uVar10 = uVar9 + 1;
          if (param_2 <= uVar10) {
            return;
          }
          lVar11 = uVar9 * 4;
          uVar9 = uVar10;
        } while (*(float *)(param_1 + 4 + lVar11) <= param_3);
      }
      else {
        uVar7 = uVar9 + 1;
        if (uVar9 + 1 < param_2) {
          uVar7 = param_2;
        }
        uVar10 = uVar9;
        do {
          if (uVar7 - 1 == uVar10) {
            uVar8 = uVar7 - uVar9;
            uVar10 = uVar7;
            goto joined_r0x00014140d54d;
          }
          lVar11 = uVar10 * 4;
          uVar10 = uVar10 + 1;
        } while (param_3 < *(float *)(param_1 + 4 + lVar11));
        uVar8 = uVar10 - uVar9;
joined_r0x00014140d54d:
        if (1 < uVar8) {
          uStack_180 = *(undefined4 *)(puStack_d0 + 1);
          uStack_188 = *puStack_d0;
          pdb_1413f8660(&uStack_74,&uStack_188,uVar9 + *plStack_c8,*plStack_c8 + uVar10);
          lVar11 = lStack_100;
          uStack_c0 = *(undefined8 *)(lStack_100 + 0x90);
          lStack_b8 = *(longlong *)(lStack_100 + 0x98);
          uStack_a8 = uStack_6c;
          uStack_b0 = uStack_74;
          lStack_80 = CONCAT44(lStack_80._4_4_,uStack_6c);
          uStack_88 = uStack_74;
          uStack_98 = uStack_c0;
          lStack_90 = lStack_b8;
          pdb_1407fff70(&uStack_188,&uStack_74,&uStack_c0,&uStack_98,CONCAT44(uVar6,0x461c4000));
          lStack_68 = *(undefined8 *)(lVar11 + 200);
          uStack_f8 = *(undefined8 *)(lVar11 + 0xd0);
          uStack_f0 = *(undefined8 *)(lVar11 + 0xe0);
          uStack_e8 = *(undefined8 *)(lVar11 + 0xe8);
          uStack_e0 = *(undefined8 *)(lVar11 + 0x90);
          uStack_d8 = *(undefined8 *)(lVar11 + 0x98);
          uVar2 = *(undefined8 *)(lVar11 + 0xa8);
          uVar3 = *(undefined8 *)(lVar11 + 0xb0);
          uVar1 = *(uint *)(lVar11 + 600);
          uVar6 = pdb_1409303b0(lVar11);
          uStack_98 = CONCAT44(extraout_XMM0_Da,uVar6);
          in_stack_fffffffffffffe28 = uStack_f0;
          pdb_1413fb850(&uStack_c0,&uStack_188,lStack_68,uStack_f8,uStack_f0,uStack_e8,uStack_e0,
                        uStack_d8,uVar2,uVar3,uVar1 < 2,&uStack_98);
          plVar5 = plStack_a0;
          uVar9 = uStack_b0;
          lVar4 = lStack_b8;
          lStack_68 = uStack_b0 * 0x68;
          lStack_80 = lStack_68 + lStack_b8;
          uStack_98 = lStack_b8;
          uStack_88 = uStack_c0;
          lStack_90 = lStack_b8;
          lVar11 = plStack_a0[2];
          if ((ulonglong)(*plStack_a0 - lVar11) < uStack_b0) {
            in_stack_fffffffffffffe28 = 0;
            pdb_142d7f1b0(plStack_a0,lVar11,uStack_b0,8,0x68);
            lVar11 = plVar5[2];
LAB_14140d749:
            pub_142e32760(lVar11 * 0x68 + plVar5[1],lVar4,lStack_68);
          }
          else if (uStack_b0 != 0) goto LAB_14140d749;
          plVar5[2] = lVar11 + uVar9;
          lStack_80 = lVar4;
          pdb_1413fe8d0(&uStack_98);
          pdb_1413fe530(&uStack_188);
        }
      }
      uVar9 = uVar10;
    } while (uVar9 < param_2);
  }
  return;
}

