// VA 0x140487ec0, PDB extent 471 bytes
// tiny_glade::sdl_setup::enumerate_displays
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::sdl_setup::enumerate_displays
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
   Extent: 471 */

void pdb_140487ec0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_68 = 0;
  lStack_60 = 8;
  lStack_58 = 0;
  plStack_78 = param_1;
  pdb_1406d12f0(&uStack_a0);
  iVar2 = iStack_98;
  if (SBORROW8(0,uStack_a0)) {
    for (iVar10 = 0; iVar10 < iVar2; iVar10 = iVar10 + 1) {
      pdb_1404880a0(&uStack_a0,param_2,iVar10);
      lVar8 = lStack_58;
      uVar7 = uStack_80;
      uVar6 = uStack_84;
      uVar5 = uStack_88;
      uVar4 = uStack_8c;
      uVar3 = uStack_90;
      uStack_50 = uStack_a0;
      uStack_70 = CONCAT44(uStack_94,iStack_98);
      if (lStack_58 == lStack_68) {
        pdb_142d7e7c0(&lStack_68);
      }
      lVar9 = lVar8 * 0x30;
      *(ulonglong *)(lStack_60 + lVar9) = uStack_50;
      *(undefined8 *)(lStack_60 + 8 + lVar9) = uStack_70;
      puVar1 = (undefined4 *)(lStack_60 + 0x10 + lVar9);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *(undefined8 *)(lStack_60 + 0x20 + lVar9) = uVar7;
      *(int *)(lStack_60 + 0x28 + lVar9) = iVar10;
      lStack_58 = lVar8 + 1;
    }
  }
  else if (uStack_a0 != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_94,iStack_98),uStack_a0,1);
  }
  plStack_78[2] = lStack_58;
  *plStack_78 = lStack_68;
  plStack_78[1] = lStack_60;
  return;
}

