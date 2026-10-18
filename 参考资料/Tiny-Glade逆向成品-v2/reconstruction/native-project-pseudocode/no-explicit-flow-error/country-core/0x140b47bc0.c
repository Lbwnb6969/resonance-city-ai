// VA 0x140b47bc0, PDB extent 891 bytes
// country_core::systems::ui_move_wall_group::WallGroupTransformCache::notify_shape_moved
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_move_wall_group::WallGroupTransformCache::notify_shape_moved
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 891 */

void pdb_140b47bc0(float *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lStack_c8;
  byte *pbStack_c0;
  longlong lStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined4 uStack_94;
  byte *pbStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lVar13 = *(longlong *)(param_1 + 0x1c);
  lStack_a0 = *(longlong *)(param_1 + 0x1e) * 200 + lVar13;
  if (*(longlong *)(param_1 + 0x1e) == 0) {
    fVar18 = (float)*(undefined8 *)param_1;
    fVar19 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    lVar12 = lVar13;
  }
  else {
    fVar18 = *param_1;
    fVar19 = param_1[1];
    fVar7 = param_1[2];
    fVar8 = param_1[3];
    uVar1 = *(undefined8 *)(param_1 + 4);
    uStack_94 = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar3 = *param_2;
    puVar4 = (undefined4 *)param_2[2];
    plStack_b0 = param_3;
    lStack_a8 = lVar13;
    do {
      uVar5 = *(undefined8 *)(lVar13 + 0xa8);
      lVar12 = *(longlong *)(lVar13 + 0x98);
      pbVar14 = (byte *)0x4;
      if (lVar12 != 0) {
        lVar11 = *(longlong *)(lVar13 + 0x90);
        pdb_14007ee60();
        pbVar14 = pub_1406abab0(lVar12 * 0xc,4);
        if (pbVar14 == (byte *)0x0) {
          pdb_142dc7e2a(4,lVar12 * 0xc);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar9 = 4;
        lVar10 = lVar12;
        do {
          uVar2 = *(undefined8 *)(lVar11 + lVar9);
          fVar17 = (float)((ulonglong)uVar2 >> 0x20);
          fVar15 = (float)uVar2;
          *(undefined4 *)(pbVar14 + lVar9 + -4) = *(undefined4 *)(lVar11 + -4 + lVar9);
          *(ulonglong *)(pbVar14 + lVar9) =
               CONCAT44(fVar17 * fVar8 + fVar15 * fVar19,fVar17 * fVar7 + fVar15 * fVar18);
          lVar9 = lVar9 + 0xc;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      fVar15 = (float)*(undefined8 *)(lVar13 + 0xb8);
      fVar17 = (float)((ulonglong)*(undefined8 *)(lVar13 + 0xb8) >> 0x20);
      *puVar4 = uStack_94;
      lVar11 = *(longlong *)(lVar3 + 0x30);
      uVar2 = *(undefined8 *)(lVar3 + 0x40);
      pbStack_90 = pbVar14;
      lStack_88 = lVar12;
      if (lVar11 == *(longlong *)(lVar3 + 0x20)) {
        pdb_142d7e7c0(lVar3 + 0x20);
      }
      lVar13 = lVar13 + 200;
      lVar12 = *(longlong *)(lVar3 + 0x28);
      lVar10 = lVar11 * 0x30;
      *(longlong *)(lVar12 + lVar10) = lStack_88;
      *(byte **)(lVar12 + 8 + lVar10) = pbStack_90;
      *(longlong *)(lVar12 + 0x10 + lVar10) = lStack_88;
      *(undefined8 *)(lVar12 + 0x18 + lVar10) = uVar5;
      *(ulonglong *)(lVar12 + 0x20 + lVar10) =
           CONCAT44(fVar17 * fVar8 + fVar15 * fVar19 + (float)((ulonglong)uVar1 >> 0x20),
                    fVar17 * fVar7 + fVar15 * fVar18 + (float)uVar1);
      *(undefined8 *)(lVar12 + 0x28 + lVar10) = uVar2;
      *(longlong *)(lVar3 + 0x30) = lVar11 + 1;
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
      lVar12 = lStack_a8;
      param_3 = plStack_b0;
    } while (lVar13 != lStack_a0);
  }
  uVar16 = pub_142e32980(CONCAT44(fVar19,fVar19),CONCAT44(fVar19,fVar18));
  if (_DAT_143035f20 < (float)(uVar16 & _DAT_142e377e0)) {
    pdb_1416069f0(&lStack_c8,lVar12,lStack_a0);
    if (lStack_b8 == 0) {
      if (lStack_c8 != 0) {
        pub_1406abac0(pbStack_c0,lStack_c8 << 3,8);
      }
    }
    else {
      lStack_88 = lStack_c8;
      pbStack_90 = pbStack_c0;
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar13 = *param_3;
      lVar12 = *(longlong *)(lVar13 + 0x30);
      uVar1 = *(undefined8 *)(lVar13 + 0x40);
      if (lVar12 == *(longlong *)(lVar13 + 0x20)) {
        pdb_142d7e6e0(lVar13 + 0x20);
      }
      lVar3 = *(longlong *)(lVar13 + 0x28);
      lVar11 = lVar12 * 0x20;
      *(longlong *)(lVar3 + lVar11) = lStack_88;
      *(byte **)(lVar3 + 8 + lVar11) = pbStack_90;
      *(longlong *)(lVar3 + 0x10 + lVar11) = lStack_b8;
      *(undefined8 *)(lVar3 + 0x18 + lVar11) = uVar1;
      *(longlong *)(lVar13 + 0x30) = lVar12 + 1;
      *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
    }
  }
  return;
}

