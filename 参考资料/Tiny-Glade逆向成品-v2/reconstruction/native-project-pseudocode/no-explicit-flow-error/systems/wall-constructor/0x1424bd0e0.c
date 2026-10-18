// VA 0x1424bd0e0, PDB extent 446 bytes
// system_wall_constructor::construct_wooden_walls::window_cut_lists::WindowCutLists::list_for_piece
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/window_cut_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::window_cut_lists::WindowCutLists::list_for_piece
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/window_cut_lists.rs
   Extent: 446 */

void pdb_1424bd0e0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  ulonglong uVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  int iVar11;
  ulonglong uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  uStack_78 = *(undefined4 *)(param_1 + 0x40);
  fVar1 = *(float *)(param_1 + 0x40);
  uStack_88 = *param_2;
  uStack_80 = param_2[1];
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  pfVar3 = *(float **)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  pfVar5 = pfVar3;
  iVar7 = 0;
  uStack_98 = uVar2;
LAB_1424bd150:
  iVar11 = iVar7;
  pfVar10 = pfVar5;
  if (pfVar10 == pfVar3 + lVar4 * 4) {
    uVar9 = uStack_98 - uVar2;
    if ((int)uVar9 != 0) {
      uVar8 = uVar9 & 0xffffffff | (ulonglong)*(uint *)(param_1 + 0x44) << 0x20;
      uVar8 = (uVar8 >> 0x1e ^ uVar8) * -0x40a7b892e31b1a47;
      uVar8 = (uVar8 >> 0x1b ^ uVar8) * -0x6b2fb644ecceee15;
      *(ulonglong *)(param_1 + 0x38) = uVar8 >> 0x1f ^ *(ulonglong *)(param_1 + 0x38) ^ uVar8;
    }
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) + 1;
    uVar8 = *(longlong *)(param_1 + 0x30) + uVar2;
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    iVar7 = pdb_140a78260(uVar8,uVar9 & 0xffffffff);
    if (uVar2 <= uStack_98 && iVar7 == 0) {
      *(ulonglong *)(param_1 + 0x28) = uVar2;
    }
    return;
  }
  cVar6 = pdb_140deea30(pfVar10,&uStack_88);
  if (cVar6 == '\0') goto code_r0x0001424bd16e;
  uVar9 = *(ulonglong *)(param_1 + 0x18);
  goto joined_r0x0001424bd1c8;
code_r0x0001424bd16e:
  fStack_68 = *pfVar10 + fVar1;
  fStack_64 = pfVar10[1] + 0.0;
  fStack_60 = pfVar10[2] + fVar1;
  fStack_5c = pfVar10[3] + 0.0;
  cVar6 = pdb_140deea30(&fStack_68,&uStack_88);
  pfVar5 = pfVar10 + 4;
  iVar7 = iVar11 + 1;
  if (cVar6 != '\0') {
    uVar9 = *(ulonglong *)(param_1 + 0x18);
joined_r0x0001424bd1c8:
    if (uStack_98 == uVar9) {
      pdb_142d7f1b0(param_1 + 0x18,uStack_98,1,4,4);
    }
    *(int *)(*(longlong *)(param_1 + 0x20) + uStack_98 * 4) = iVar11;
    uStack_98 = uStack_98 + 1;
    *(ulonglong *)(param_1 + 0x28) = uStack_98;
    pfVar5 = pfVar10 + 4;
    iVar7 = iVar11 + 1;
  }
  goto LAB_1424bd150;
}

