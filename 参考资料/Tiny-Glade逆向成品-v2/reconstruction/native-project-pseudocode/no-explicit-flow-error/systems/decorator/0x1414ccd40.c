// VA 0x1414ccd40, PDB extent 495 bytes
// system_decorator::ui_systems::move_ops::show_decorator_remove_signifier
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/move_ops.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::move_ops::show_decorator_remove_signifier
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/move_ops.rs
   Extent: 495 */

void pdb_1414ccd40(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  undefined8 uStack_50;
  float fStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  fVar4 = *(float *)(param_2 + 1) - *(float *)(param_3 + 1);
  fStack_58 = *(float *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined8 *)((longlong)param_2 + 0xc);
  fVar5 = (float)*param_2;
  fVar6 = (float)((ulonglong)*param_2 >> 0x20);
  fVar7 = fVar5 - (float)*param_3;
  fVar8 = fVar6 - (float)((ulonglong)*param_3 >> 0x20);
  fVar4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar4 * fVar4);
  fStack_48 = fVar4 * fStack_58 + *(float *)(param_2 + 1);
  uStack_50 = CONCAT44(fVar4 * (float)((ulonglong)uStack_60 >> 0x20) + fVar6,
                       fVar4 * (float)uStack_60 + fVar5);
  uStack_44 = param_1;
  pdb_140de9ab0(&uStack_88,&uStack_60);
  uVar2 = uStack_80;
  uVar1 = uStack_88;
  uStack_88 = &uStack_44;
  uStack_80 = pdb_1414cd110;
  uStack_78 = &uStack_50;
  uStack_70 = pdb_140f33d80;
  pdb_140f60760(&uStack_a8,&UNK_143313a08,&uStack_88);
  uStack_80._0_4_ = fStack_48;
  uStack_88 = (undefined4 *)uStack_50;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x30,0x10);
  pbStack_90 = pbStack_a0;
  if (pbVar3 != (byte *)0x0) {
    pbVar3[0] = 1;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 1;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    *(undefined8 *)(pbVar3 + 0x10) = uVar1;
    *(undefined8 *)(pbVar3 + 0x18) = uVar2;
    *(undefined4 **)(pbVar3 + 0x20) = uStack_88;
    *(float *)(pbVar3 + 0x28) = (float)uStack_80;
    pdb_1409baea0(&uStack_88,pbStack_a0,uStack_98,pbVar3,&UNK_143313a20);
    uStack_b8 = uStack_68;
    uStack_c8 = (undefined4)uStack_78;
    uStack_c4 = uStack_78._4_4_;
    uStack_c0 = (undefined4)uStack_70;
    uStack_bc = uStack_70._4_4_;
    uStack_d8 = (undefined4)uStack_88;
    uStack_d4 = uStack_88._4_4_;
    fStack_d0 = (float)uStack_80;
    uStack_cc = uStack_80._4_4_;
    pdb_140b133a0(param_4,&uStack_d8);
    if (uStack_a8 != 0) {
      pub_1406abac0(pbStack_90,uStack_a8,1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x30);
}

