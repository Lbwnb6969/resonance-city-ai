// VA 0x140c4bf50, PDB extent 719 bytes
// country_core::systems::ui_wall_transform_gizmos::project_occluding_triangle_onto_plane
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::project_occluding_triangle_onto_plane
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 719 */

undefined4 * pdb_140c4bf50(undefined4 *param_1,undefined8 param_2,longlong param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fStack_d4 = *(float *)(param_3 + 4) - param_4;
  if (_DAT_142e37934 < (float)((uint)fStack_d4 & _DAT_142e377e0)) {
    fStack_d8 = param_4;
    puVar2 = (undefined8 *)pdb_1406d0830(param_2);
    uStack_90._0_4_ = 3;
    uStack_84 = *(undefined4 *)(puVar2 + 1);
    uStack_90._4_4_ = (undefined4)*puVar2;
    uStack_88 = (undefined4)((ulonglong)*puVar2 >> 0x20);
    uStack_80 = (uint)*(undefined8 *)((longlong)puVar2 + 0xc);
    uStack_7c = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0xc) >> 0x20);
    uStack_78 = *(undefined4 *)((longlong)puVar2 + 0x14);
    uStack_74 = (undefined4)puVar2[3];
    uStack_70 = (undefined4)((ulonglong)puVar2[3] >> 0x20);
    uStack_6c = *(undefined4 *)(puVar2 + 4);
    pdb_140b4ad10(&uStack_d0,&uStack_90,&fStack_d8,&fStack_d4);
    uStack_30 = uStack_a0;
    uVar1 = uStack_30;
    uStack_28 = uStack_98;
    uStack_90._0_4_ = uStack_d0;
    uStack_84 = uStack_c4;
    uStack_80 = (uint)uStack_c0;
    uStack_7c = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    uStack_78 = uStack_b8;
    uStack_6c = uStack_ac;
    uStack_30._0_4_ = (undefined4)uStack_a0;
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    uStack_68 = uStack_a8;
    _uStack_64 = CONCAT44((undefined4)uStack_30,uStack_a4);
    uStack_5c = uStack_30._4_4_;
    uStack_58 = uStack_98;
    uStack_30 = uVar1;
    pdb_140b4a9f0(&uStack_d0,&uStack_90,&fStack_d8,&fStack_d4,CONCAT44(uStack_b0,uStack_b4),
                  uStack_ac,uStack_c0,uStack_b8,CONCAT44(uStack_c8,uStack_cc),uStack_c4);
    uStack_30 = uStack_a0;
    uVar1 = uStack_30;
    uStack_28 = uStack_98;
    if (1 < uStack_d0) {
      uStack_80 = uStack_d0;
      uStack_74 = uStack_c4;
      uStack_70 = (undefined4)uStack_c0;
      uStack_6c = (undefined4)((ulonglong)uStack_c0 >> 0x20);
      uStack_68 = uStack_b8;
      uStack_5c = uStack_ac;
      uStack_30._0_4_ = (undefined4)uStack_a0;
      uStack_30._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
      uStack_50 = (undefined4)uStack_30;
      uStack_4c = uStack_30._4_4_;
      uStack_48 = uStack_98;
      uStack_40 = 0;
      uStack_88 = (undefined4)param_3;
      uStack_84 = (undefined4)((ulonglong)param_3 >> 0x20);
      uStack_30 = uVar1;
      uStack_90 = &fStack_d8;
      pdb_141a92270(&uStack_d0,&uStack_90);
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_b0,uStack_b4);
      *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_a8,uStack_ac);
      *(undefined8 *)(param_1 + 5) = uStack_c0;
      *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_b4,uStack_b8);
      *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_cc,uStack_d0);
      *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_c4,uStack_c8);
      *param_1 = 1;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}

