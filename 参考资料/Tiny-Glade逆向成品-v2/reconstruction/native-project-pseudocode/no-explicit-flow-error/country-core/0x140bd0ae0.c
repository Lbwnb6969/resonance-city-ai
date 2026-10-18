// VA 0x140bd0ae0, PDB extent 1499 bytes
// country_core::systems::collision::intersect_meshes::intersect_mesh_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::intersect_meshes::intersect_mesh_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
   Extent: 1499 */

void pdb_140bd0ae0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_248;
  undefined8 uStack_240;
  longlong *plStack_1c8;
  undefined1 auStack_1ac [24];
  int iStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined1 auStack_130 [8];
  float fStack_128;
  undefined1 auStack_120 [8];
  float fStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  uint *puStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  uint *puStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  longlong *plStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  lStack_d8 = 0;
  puStack_d0 = (uint *)0x4;
  lStack_c8 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_1c8 = &lStack_d8;
  plStack_b0 = param_3;
  pdb_14094f6b0(0,param_2,&uStack_248);
  uVar9 = _DAT_142e3c660;
  puStack_f8 = puStack_d0 + lStack_c8 * 2;
  uStack_e8 = *(ulonglong *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x98);
  lVar3 = *(longlong *)(param_1 + 0x80);
  uVar4 = *(ulonglong *)(param_1 + 0x88);
  uStack_e0 = *(ulonglong *)(param_2 + 0xa0);
  lVar5 = *(longlong *)(param_2 + 0x98);
  lVar6 = *(longlong *)(param_2 + 0x80);
  uVar7 = *(ulonglong *)(param_2 + 0x88);
  puVar14 = puStack_d0;
  if (puStack_d0 != puStack_f8) {
    do {
      while( true ) {
        uVar12 = (ulonglong)*puVar14;
        if (uStack_e8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,uStack_e8,&UNK_143064d98);
        }
        uVar13 = (ulonglong)*(uint *)(lVar2 + uVar12 * 0xc);
        if (uVar4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar13,uVar4,&UNK_143064db0);
        }
        uVar11 = (ulonglong)*(uint *)(lVar2 + uVar12 * 0xc + 4);
        if (uVar4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,uVar4,&UNK_143064dc8);
        }
        uVar12 = (ulonglong)*(uint *)(lVar2 + 8 + uVar12 * 0xc);
        if (uVar4 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,uVar4,&UNK_143064de0);
        }
        uStack_134 = *(undefined4 *)(lVar3 + 8 + uVar12 * 0xc);
        uStack_154 = *(undefined4 *)(lVar3 + uVar13 * 0xc);
        uStack_140 = *(undefined4 *)(lVar3 + 8 + uVar11 * 0xc);
        uStack_150 = *(undefined8 *)(lVar3 + 4 + uVar13 * 0xc);
        uStack_148 = *(undefined8 *)(lVar3 + uVar11 * 0xc);
        uStack_13c = *(undefined8 *)(lVar3 + uVar12 * 0xc);
        uVar12 = (ulonglong)puVar14[1];
        if (uStack_e0 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,uStack_e0,&UNK_143064d98);
        }
        uVar13 = (ulonglong)*(uint *)(lVar5 + uVar12 * 0xc);
        if (uVar7 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar13,uVar7,&UNK_143064db0);
        }
        uVar11 = (ulonglong)*(uint *)(lVar5 + uVar12 * 0xc + 4);
        if (uVar7 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,uVar7,&UNK_143064dc8);
        }
        uVar12 = (ulonglong)*(uint *)(lVar5 + 8 + uVar12 * 0xc);
        if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,uVar7,&UNK_143064de0);
        }
        uStack_158 = *(undefined4 *)(lVar6 + 8 + uVar12 * 0xc);
        uStack_178 = *(undefined4 *)(lVar6 + uVar13 * 0xc);
        uStack_164 = *(undefined4 *)(lVar6 + 8 + uVar11 * 0xc);
        uStack_174 = *(undefined8 *)(lVar6 + 4 + uVar13 * 0xc);
        uStack_16c = *(undefined8 *)(lVar6 + uVar11 * 0xc);
        uStack_160 = *(undefined8 *)(lVar6 + uVar12 * 0xc);
        pdb_1414736b0(&iStack_194,&uStack_154,&uStack_178);
        if (iStack_194 == 1) break;
LAB_140bd0bf0:
        puVar14 = puVar14 + 2;
        if (puVar14 == puStack_f8) goto LAB_140bd0f45;
      }
      pdb_141473740(&fStack_a8,&uStack_154);
      uStack_110 = uVar9;
      uStack_108 = 0x3dcccccd;
      pdb_140def070(auStack_1ac,&fStack_a8,&uStack_110);
      pdb_141473740(&fStack_a8,&uStack_178);
      uStack_c0 = uVar9;
      fStack_b8 = 0.1;
      pdb_140def070(&uStack_110,&fStack_a8,&uStack_c0);
      fStack_118 = fStack_188;
      fStack_a0 = fStack_188;
      cVar10 = pdb_140deeda0(auStack_1ac,&fStack_a8);
      if (cVar10 == '\0') goto LAB_140bd0bf0;
      fStack_128 = fStack_17c;
      fStack_a0 = fStack_17c;
      fStack_a8 = fStack_184;
      fStack_a4 = fStack_180;
      cVar10 = pdb_140deeda0(auStack_1ac,&fStack_a8);
      if (((cVar10 == '\0') || (cVar10 = pdb_140deeda0(&uStack_110,auStack_120), cVar10 == '\0')) ||
         (cVar10 = pdb_140deeda0(&uStack_110,auStack_130), cVar10 == '\0')) goto LAB_140bd0bf0;
      pdb_1414737c0(&uStack_c0,&uStack_154);
      pdb_1414737c0(&fStack_a8,&uStack_178);
      fVar15 = (float)uStack_c0;
      uVar12 = (ulonglong)uStack_c0 >> 0x20;
      fVar16 = fStack_b8 + fStack_a0;
      lStack_f0 = plStack_b0[2];
      if (lStack_f0 == *plStack_b0) {
        pdb_142d91b00(plStack_b0);
      }
      lVar8 = plStack_b0[1];
      *(ulonglong *)(lVar8 + 0x10 + lStack_f0 * 0x24) = CONCAT44(fStack_17c,fStack_180);
      puVar1 = (undefined4 *)(lVar8 + lStack_f0 * 0x24);
      *puVar1 = uStack_190;
      puVar1[1] = uStack_18c;
      puVar1[2] = fStack_188;
      puVar1[3] = fStack_184;
      *(ulonglong *)(lVar8 + 0x18 + lStack_f0 * 0x24) =
           CONCAT44((float)uVar12 + fStack_a4,fVar15 + fStack_a8);
      *(float *)(lVar8 + 0x20 + lStack_f0 * 0x24) = fVar16;
      plStack_b0[2] = lStack_f0 + 1;
      puVar14 = puVar14 + 2;
    } while (puVar14 != puStack_f8);
  }
LAB_140bd0f45:
  if (lStack_d8 != 0) {
    pub_1406abac0((byte *)puStack_d0,lStack_d8 << 3,4);
  }
  return;
}

