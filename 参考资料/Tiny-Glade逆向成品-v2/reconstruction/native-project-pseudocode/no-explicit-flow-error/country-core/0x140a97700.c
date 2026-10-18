// VA 0x140a97700, PDB extent 774 bytes
// country_core::render::mesh::Mesh::make_double_sided_by_duplicating_triangles
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::mesh::Mesh::make_double_sided_by_duplicating_triangles
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 774 */

void pdb_140a97700(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int aiStack_40 [2];
  longlong lStack_38;
  undefined8 uStack_30;
  
  lVar10 = *param_1;
  uVar14 = param_1[2];
  if (lVar10 - uVar14 < uVar14) {
    pdb_142d7f0f0(aiStack_40,lVar10,param_1[1],uVar14 * 2,4,4);
    if (aiStack_40[0] == 1) {
      pdb_142dc7e2a(lStack_38,uStack_30);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_1[1] = lStack_38;
    *param_1 = uVar14 * 2;
LAB_140a97737:
    lVar10 = param_1[1];
    puVar12 = (undefined4 *)(lVar10 + uVar14 * 4);
    uVar13 = uVar14;
    uVar15 = 1;
  }
  else {
    if (uVar14 == 0) {
      uVar15 = 0;
      goto LAB_140a97773;
    }
    if (uVar14 <= lVar10 - uVar14) goto LAB_140a97737;
    pdb_142d7f1b0(param_1,uVar14,uVar14,4,4);
    uVar13 = param_1[2];
    lVar10 = param_1[1];
    puVar12 = (undefined4 *)(lVar10 + uVar13 * 4);
    uVar15 = uVar13;
  }
  if (uVar14 != 1) {
    pub_142e32780(puVar12,0,uVar14 * 4 + -4);
    puVar12 = (undefined4 *)(lVar10 + (uVar13 + uVar14) * 4 + -4);
    uVar15 = (uVar13 + uVar14) - 1;
  }
  *puVar12 = 0;
  uVar15 = uVar15 + 1;
LAB_140a97773:
  param_1[2] = uVar15;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar14;
  bVar6 = 0x5555555555555555 < SUB168(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar13 = (ulonglong)bVar6;
  lVar10 = uVar14 / 3 + uVar13;
  if (lVar10 != 0) {
    lVar9 = (ulonglong)((uint)bVar6 * 2) * 3;
    lVar16 = (uVar14 / 3) * 6;
    lVar1 = param_1[1] + uVar13 * 0x18;
    uVar14 = lVar10 * 3;
    lVar2 = param_1[1] + uVar13 * 0xc;
    uVar11 = lVar10 * 3 - 1;
    do {
      uVar14 = uVar14 - 3;
      if (uVar15 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar14,uVar15,&UNK_143045bf0);
      }
      if (uVar15 <= uVar11 - 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar11 - 1,uVar15,&UNK_143045c08);
      }
      if (uVar15 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar11,uVar15,&UNK_143045c20);
      }
      if (uVar15 <= (lVar9 + lVar16) - 6U) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(lVar16 + uVar13 * 6 + -6,uVar15,&UNK_143045c38);
      }
      uVar3 = *(undefined4 *)(lVar2 + -0xc + lVar16 * 2);
      uVar4 = *(undefined4 *)(lVar2 + -8 + lVar16 * 2);
      uVar5 = *(undefined4 *)(lVar2 + -4 + lVar16 * 2);
      *(undefined4 *)(lVar1 + -0x18 + lVar16 * 4) = uVar3;
      if (uVar15 <= (lVar9 + lVar16) - 5U) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(lVar16 + uVar13 * 6 + -5,uVar15,&UNK_143045c50);
      }
      *(undefined4 *)(lVar1 + -0x14 + lVar16 * 4) = uVar4;
      if (uVar15 <= (lVar9 + lVar16) - 4U) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(lVar16 + uVar13 * 6 + -4,uVar15,&UNK_143045c68);
      }
      *(undefined4 *)(lVar1 + -0x10 + lVar16 * 4) = uVar5;
      if (uVar15 <= (lVar9 + lVar16) - 3U) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(lVar16 + uVar13 * 6 + -3,uVar15,&UNK_143045c80);
      }
      *(undefined4 *)(lVar1 + -0xc + lVar16 * 4) = uVar5;
      if (uVar15 <= (lVar9 + lVar16) - 2U) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(lVar16 + uVar13 * 6 + -2,uVar15,&UNK_143045c98);
      }
      *(undefined4 *)(lVar1 + -8 + lVar16 * 4) = uVar4;
      if (uVar15 <= (lVar9 + lVar16) - 1U) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(lVar16 + uVar13 * 6 + -1,uVar15,&UNK_143045cb0);
      }
      *(undefined4 *)(lVar1 + -4 + lVar16 * 4) = uVar3;
      lVar16 = lVar16 + -6;
      uVar11 = uVar11 - 3;
    } while (lVar9 + lVar16 != 0);
  }
  return;
}

