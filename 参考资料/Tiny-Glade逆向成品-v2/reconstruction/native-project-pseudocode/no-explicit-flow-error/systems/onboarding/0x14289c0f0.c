// VA 0x14289c0f0, PDB extent 573 bytes
// system_onboarding::hint_content::camera_rotate_hint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_content::camera_rotate_hint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_content.rs
   Extent: 573 */

undefined8 pdb_14289c0f0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ushort uStack_58;
  ushort uStack_56;
  int iStack_54;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar4 = pdb_140a44d70(1);
  uStack_94 = CONCAT22(uStack_94._2_2_,uVar4);
  uStack_98 = 0xca;
  uStack_29 = 1;
  uVar4 = pdb_140a44d60(1);
  uStack_5c = CONCAT22(uStack_5c._2_2_,uVar4);
  uStack_60 = 0xca;
  uStack_29 = 0;
  pdb_1420c0160(&uStack_c8,&uStack_98,&uStack_60);
  uStack_78 = uStack_a8;
  uStack_74 = uStack_a4;
  uStack_70 = uStack_a0;
  uStack_6c = uStack_9c;
  uStack_88 = uStack_b8;
  uStack_84 = uStack_b4;
  uStack_80 = uStack_b0;
  uStack_7c = uStack_ac;
  uStack_98 = uStack_c8;
  uStack_94 = uStack_c4;
  uStack_90 = uStack_c0;
  uStack_8c = uStack_bc;
  uVar5 = 0xc5;
  uStack_60 = 0xc5;
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    piVar3 = *(int **)(param_2 + 200);
    iVar2 = *piVar3;
    if (iVar2 != 0xc4) {
      uStack_58 = *(ushort *)(piVar3 + 1);
      if (iVar2 == 0xc3) {
        if ((ushort)(uStack_58 - 1) < 2) {
          uStack_5c._0_2_ = 1;
        }
        else {
          if (2 < uStack_58) goto LAB_14289c1d1;
          uStack_5c._0_2_ = 0;
        }
        uStack_5c = CONCAT22(uStack_58,(undefined2)uStack_5c);
        uStack_60 = 199;
        uStack_58 = *(ushort *)((longlong)piVar3 + 6);
      }
      else {
LAB_14289c1d1:
        uStack_60 = 200;
        uStack_5c = iVar2;
        uStack_56 = *(ushort *)((longlong)piVar3 + 6);
        iStack_54 = piVar3[2];
      }
    }
  }
  pdb_1420c0330(&uStack_c8,&uStack_98,&uStack_60);
  uStack_d8 = uStack_a8;
  uStack_d4 = uStack_a4;
  uStack_d0 = uStack_a0;
  uStack_cc = uStack_9c;
  uStack_e8 = uStack_b8;
  uStack_e4 = uStack_b4;
  uStack_e0 = uStack_b0;
  uStack_dc = uStack_ac;
  uStack_f8 = uStack_c8;
  uStack_f4 = uStack_c4;
  uStack_f0 = uStack_c0;
  uStack_ec = uStack_bc;
  if (*(longlong *)(param_2 + 0xa0) == 0) {
LAB_14289c257:
    uVar6 = 0;
    uStack_60 = uVar5;
    if (*(longlong *)(param_2 + 0xb8) == 0) goto LAB_14289c26d;
  }
  else {
    piVar3 = *(int **)(param_2 + 0x98);
    uStack_5c = *piVar3;
    uStack_58 = *(ushort *)(piVar3 + 1);
    uVar1 = *(ushort *)((longlong)piVar3 + 6);
    if (uStack_5c == 0xc3 && uStack_58 < 3) {
      uStack_5c = (uint)uStack_58 << 0x10;
      uVar5 = 199;
      uStack_58 = uVar1;
      goto LAB_14289c257;
    }
    iStack_54 = piVar3[2];
    uStack_60 = 200;
    uStack_56 = uVar1;
    if (*(longlong *)(param_2 + 0xb8) == 0) {
      uVar6 = 0;
      goto LAB_14289c26d;
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 0xb0);
LAB_14289c26d:
  uStack_2a = 1;
  pdb_1420bfea0(&uStack_98,&uStack_60,uVar6);
  uStack_2a = 0;
  pdb_1420c0330(param_1,&uStack_f8,&uStack_98);
  return param_1;
}

