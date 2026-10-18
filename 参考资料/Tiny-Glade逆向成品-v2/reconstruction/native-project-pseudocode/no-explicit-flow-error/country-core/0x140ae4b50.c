// VA 0x140ae4b50, PDB extent 523 bytes
// country_core::resources::history::History::finish_input_recording
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::finish_input_recording
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 523 */

undefined8 pdb_140ae4b50(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lStack_88;
  longlong lStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int aiStack_34 [3];
  
  aiStack_34[1] = -2;
  aiStack_34[2] = -1;
  lStack_88 = param_1[6];
  param_1[6] = -0x8000000000000000;
  if (SBORROW8(0,lStack_88)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14304f4e8,0x93,&UNK_14304f538);
  }
  uStack_58 = (undefined4)param_1[7];
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x3c);
  lStack_80 = param_1[7];
  uStack_78 = *(uint *)(param_1 + 8);
  uStack_74 = *(uint *)((longlong)param_1 + 0x44);
  uStack_70 = *(uint *)(param_1 + 9);
  uStack_6c = *(uint *)((longlong)param_1 + 0x4c);
  plVar6 = param_1 + 10;
  uStack_40 = (undefined4)*plVar6;
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x54);
  lStack_68 = *plVar6;
  uStack_60 = lStack_88;
  uStack_50 = uStack_78;
  uStack_4c = uStack_74;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if ((((param_1[8] == 0) && (*(longlong *)(param_1[9] + 0x28) == 0)) &&
      (*(longlong *)(*plVar6 + 0x40) == 0)) && (*(longlong *)(*plVar6 + 0x58) == 0)) {
    pdb_140990a30(&uStack_60);
    uVar8 = 0;
  }
  else {
    lVar7 = param_1[2];
    if (lVar7 == *param_1) {
      pdb_142d7ede0(param_1);
    }
    lVar3 = param_1[1];
    *(ulonglong *)(lVar3 + 0x20 + lVar7 * 0x28) = CONCAT44(uStack_3c,uStack_40);
    puVar2 = (uint *)(lVar3 + 0x10 + lVar7 * 0x28);
    *puVar2 = uStack_50;
    puVar2[1] = uStack_4c;
    puVar2[2] = uStack_48;
    puVar2[3] = uStack_44;
    puVar1 = (undefined4 *)(lVar3 + lVar7 * 0x28);
    *puVar1 = (undefined4)uStack_60;
    puVar1[1] = uStack_60._4_4_;
    puVar1[2] = uStack_58;
    puVar1[3] = uStack_54;
    param_1[2] = lVar7 + 1;
    lStack_88 = 0;
    lStack_80 = 0xffffffffffffffff;
    uStack_78 = uStack_78 & 0xffffff00;
    lVar7 = pdb_1416f96d0(&UNK_14304fab0,&lStack_88);
    param_1[0xc] = lVar7;
    if ((int)param_1[0xd] < -1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143062a69,0x1e,&UNK_143062a88);
    }
    aiStack_34[0] = (int)param_1[0xd] + 1;
    *(int *)(param_1 + 0xd) = aiStack_34[0];
    iStack_38 = (int)param_1[2] + -1;
    if (aiStack_34[0] != iStack_38) {
      pdb_142dc6671(0,aiStack_34,&iStack_38,0);
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar7 = *param_2;
    lVar3 = *(longlong *)(lVar7 + 0x30);
    uVar8 = *(undefined8 *)(lVar7 + 0x40);
    if (lVar3 == *(longlong *)(lVar7 + 0x20)) {
      pdb_142d7e7c0(lVar7 + 0x20);
    }
    lVar4 = *(longlong *)(lVar7 + 0x28);
    lVar9 = lVar3 * 0x30;
    *(undefined8 *)(lVar4 + lVar9) = 0x8000000000000000;
    *(undefined8 *)(lVar4 + 8 + lVar9) = 1;
    *(undefined8 *)(lVar4 + 0x28 + lVar9) = uVar8;
    *(longlong *)(lVar7 + 0x30) = lVar3 + 1;
    *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
    uVar8 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  return uVar8;
}

