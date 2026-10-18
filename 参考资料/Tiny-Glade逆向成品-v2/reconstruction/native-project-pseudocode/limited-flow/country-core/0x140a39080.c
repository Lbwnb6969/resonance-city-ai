// VA 0x140a39080, PDB extent 1283 bytes
// country_core::resources::read_mouse_depth_value::read_mouse_depth_value_from_gpu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/read_mouse_depth_value.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::read_mouse_depth_value::read_mouse_depth_value_from_gpu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/read_mouse_depth_value.rs
   Extent: 1283 */

void pdb_140a39080(void)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *in_R9;
  longlong *in_stack_00000028;
  longlong *in_stack_00000030;
  
  lVar2 = *in_stack_00000030;
  if (*(longlong *)(lVar2 + 0x40) == -0x7ffffffffffffffd) {
    return;
  }
  puVar4 = (undefined8 *)pdb_140bf45b0(*in_R9,&UNK_14331c8e8);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = (**(code **)(puVar4[1] + 0x18))(*puVar4);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_14303b150);
      }
      auVar1 = **(undefined1 (**) [16])(lVar5 + 8);
      if ((auVar1._12_4_ & 0x7fffffff) < 0x7f800000) {
        *(undefined4 *)in_stack_00000028[2] = *(undefined4 *)((longlong)in_stack_00000028 + 0x1c);
        *(uint *)*in_stack_00000028 = auVar1._12_4_;
      }
      if ((auVar1._8_4_ & 0x7fffffff) < 0x7f800000 &&
          ((auVar1._4_4_ & 0x7fffffff) < 0x7f800000 && (auVar1._0_4_ & 0x7fffffff) < 0x7f800000)) {
        *(undefined4 *)in_stack_00000028[2] = *(undefined4 *)((longlong)in_stack_00000028 + 0x1c);
        lVar3 = *in_stack_00000028;
        *(longlong *)(lVar3 + 8) = auVar1._0_8_;
        *(uint *)(lVar3 + 0x10) = auVar1._8_4_;
      }
      uVar6 = *(ulonglong *)(lVar5 + 0x10);
      if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(1,uVar6,&UNK_14303b168);
      }
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar5 + 8) + 0x10);
      if (((auVar1._4_4_ & 0x7fffffff) < 0x7f800000 && (auVar1._0_4_ & 0x7fffffff) < 0x7f800000) &&
          (auVar1._8_4_ & 0x7fffffff) < 0x7f800000) {
        *(undefined4 *)in_stack_00000028[2] = *(undefined4 *)((longlong)in_stack_00000028 + 0x1c);
        lVar3 = *in_stack_00000028;
        *(longlong *)(lVar3 + 0x14) = auVar1._0_8_;
        *(uint *)(lVar3 + 0x1c) = auVar1._8_4_;
        uVar6 = *(ulonglong *)(lVar5 + 0x10);
      }
      if (uVar6 < 3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(2,auVar1._0_8_,&UNK_14303b180);
      }
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar5 + 8) + 0x20);
      if (((auVar1._4_4_ & 0x7fffffff) < 0x7f800000 && (auVar1._0_4_ & 0x7fffffff) < 0x7f800000) &&
          (auVar1._8_4_ & 0x7fffffff) < 0x7f800000) {
        *(undefined4 *)in_stack_00000028[2] = *(undefined4 *)((longlong)in_stack_00000028 + 0x1c);
        lVar3 = *in_stack_00000028;
        *(longlong *)(lVar3 + 0x20) = auVar1._0_8_;
        *(uint *)(lVar3 + 0x28) = auVar1._8_4_;
        uVar6 = *(ulonglong *)(lVar5 + 0x10);
      }
      if (3 < uVar6) {
        auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar5 + 8) + 0x30);
        if (((auVar1._4_4_ & 0x7fffffff) < 0x7f800000 && (auVar1._0_4_ & 0x7fffffff) < 0x7f800000)
            && (auVar1._8_4_ & 0x7fffffff) < 0x7f800000) {
          *(undefined4 *)in_stack_00000028[2] = *(undefined4 *)((longlong)in_stack_00000028 + 0x1c);
          lVar5 = *in_stack_00000028;
          *(longlong *)(lVar5 + 0x2c) = auVar1._0_8_;
          *(uint *)(lVar5 + 0x34) = auVar1._8_4_;
        }
        lVar2 = *(longlong *)(lVar2 + 0x40);
        lVar5 = 1;
        if (lVar2 < 0) {
          lVar5 = lVar2;
        }
                    /* WARNING: Could not recover jumptable at 0x000140a39344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_14303b6d8 + *(int *)(&UNK_14303b6d8 + lVar5 * 4)))();
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(3,auVar1._0_8_,&UNK_14303b198);
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14303b138);
}

