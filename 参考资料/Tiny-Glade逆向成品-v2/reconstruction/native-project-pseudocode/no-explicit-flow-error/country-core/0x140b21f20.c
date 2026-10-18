// VA 0x140b21f20, PDB extent 567 bytes
// country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_pieces
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_pieces
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 567 */

void pdb_140b21f20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  longlong lStack_a0;
  uint *puStack_90;
  code *pcStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  uint uStack_68;
  int iStack_64;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_80 = 0;
  lStack_78 = 4;
  lStack_70 = 0;
  lVar8 = *(longlong *)(param_2 + 0x68);
  lVar1 = lVar8 + *(longlong *)(param_2 + 0x70) * 0x48;
  lVar11 = 0;
  iStack_64 = 0;
  lVar6 = 0;
  do {
    if ((lVar6 == 0) || (lVar6 == lStack_a0)) {
      do {
        lVar7 = lVar8;
        if (lVar7 == lVar1) {
          param_1[2] = lStack_70;
          *param_1 = lStack_80;
          param_1[1] = lStack_78;
          return;
        }
        lVar8 = lVar7 + 0x48;
      } while (*(longlong *)(lVar7 + 0x28) == 0);
      lVar6 = *(longlong *)(lVar7 + 0x20);
      lStack_a0 = *(longlong *)(lVar7 + 0x28) * 0xd0 + lVar6;
    }
    piVar9 = *(int **)(lVar6 + 0x60);
    piVar2 = piVar9 + *(longlong *)(lVar6 + 0x68) * 5;
    for (; piVar9 != piVar2; piVar9 = piVar9 + 5) {
      uVar4 = piVar9[1];
      if (0xfff < uVar4) {
        puStack_90 = (uint *)(piVar9 + 1);
        pcStack_88 = pdb_140f71a50;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143055e96,&puStack_90,&UNK_143055ef0);
      }
      uVar10 = *piVar9 + iStack_64;
      uStack_68 = uVar10;
      if (0x3fffff < uVar10) {
        puStack_90 = &uStack_68;
        pcStack_88 = pdb_140f71a50;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143055f08,&puStack_90,&UNK_143055f50);
      }
      uVar3 = *(undefined8 *)(piVar9 + 2);
      iVar5 = piVar9[4];
      if (lVar11 == lStack_80) {
        pdb_142d8d5c0(&lStack_80);
      }
      *(uint *)(lStack_78 + lVar11 * 0x14) = uVar10;
      *(uint *)(lStack_78 + 4 + lVar11 * 0x14) = uVar4;
      *(undefined8 *)(lStack_78 + 8 + lVar11 * 0x14) = uVar3;
      *(int *)(lStack_78 + 0x10 + lVar11 * 0x14) = iVar5;
      lVar11 = lVar11 + 1;
      lStack_70 = lVar11;
    }
    iStack_64 = iStack_64 + *(int *)(lVar6 + 0x38);
    lVar6 = lVar6 + 0xd0;
  } while( true );
}

