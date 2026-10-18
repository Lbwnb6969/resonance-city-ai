// VA 0x140df4600, PDB extent 162 bytes
// utils::components::transform::Transform::abs_diff_eq
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::components::transform::Transform::abs_diff_eq
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/components/transform.rs
   Extent: 162 */

undefined4 pdb_140df4600(float *param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = -(uint)((float)((uint)((float)*(undefined8 *)(param_1 + 5) -
                                (float)*(undefined8 *)(param_2 + 5)) & _DAT_142e377e0) <= param_3);
  iVar6 = -(uint)((float)((uint)((float)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x20) -
                                (float)((ulonglong)*(undefined8 *)(param_2 + 5) >> 0x20)) &
                         _UNK_142e377e4) <= param_3);
  auVar3._4_4_ = iVar5;
  auVar3._0_4_ = iVar5;
  auVar3._8_4_ = iVar6;
  auVar3._12_4_ = iVar6;
  iVar5 = movmskpd(in_EAX,auVar3);
  uVar4 = 0;
  if (((float)((uint)(param_1[4] - param_2[4]) & _DAT_142e377e0) <= param_3) && (iVar5 == 3)) {
    auVar2._4_4_ = -(uint)((float)((uint)(param_1[1] - param_2[1]) & _UNK_142e377e4) <= param_3);
    auVar2._0_4_ = -(uint)((float)((uint)(*param_1 - *param_2) & _DAT_142e377e0) <= param_3);
    auVar2._8_4_ = -(uint)((float)((uint)(param_1[2] - param_2[2]) & _UNK_142e377e8) <= param_3);
    auVar2._12_4_ = -(uint)((float)((uint)(param_1[3] - param_2[3]) & _UNK_142e377ec) <= param_3);
    iVar5 = movmskps(0,auVar2);
    if (iVar5 != 0xf) {
      return 0;
    }
    iVar5 = -(uint)((float)((uint)((float)*(undefined8 *)(param_1 + 8) -
                                  (float)*(undefined8 *)(param_2 + 8)) & _DAT_142e377e0) <= param_3)
    ;
    iVar6 = -(uint)((float)((uint)((float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) -
                                  (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20)) &
                           _UNK_142e377e4) <= param_3);
    auVar1._4_4_ = iVar5;
    auVar1._0_4_ = iVar5;
    auVar1._8_4_ = iVar6;
    auVar1._12_4_ = iVar6;
    iVar5 = movmskpd(0xf,auVar1);
    uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),
                     iVar5 == 3 &&
                     (float)((uint)(param_1[7] - param_2[7]) & _DAT_142e377e0) <= param_3);
  }
  return uVar4;
}

