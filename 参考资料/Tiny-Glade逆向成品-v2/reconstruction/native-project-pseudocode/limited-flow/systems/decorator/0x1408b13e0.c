// VA 0x1408b13e0, PDB extent 1111 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::queue_swept_wood_pieces
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::queue_swept_wood_pieces
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
   Extent: 1111 */

void pdb_1408b13e0(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  float fStack_124;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong *plStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  longlong *plStack_d0;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong lStack_b8;
  undefined8 uStack_b0;
  float *pfStack_a8;
  undefined8 uStack_a0;
  
  fVar6 = _DAT_143009d64;
  fVar5 = _DAT_142e36f28;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_bc = param_5;
  lStack_110 = *param_4;
  plStack_120 = (longlong *)param_4[1];
  plStack_108 = plStack_120 + param_4[2] * 5;
  uVar12 = param_4[2] * 0x28;
  plVar9 = plStack_120 + 6;
  plVar11 = plStack_120;
  lStack_f8 = lStack_110;
  plStack_f0 = plStack_120;
  plStack_d0 = plStack_108;
  uStack_c4 = param_3;
  uStack_c0 = param_2;
  do {
    uVar12 = uVar12 - 0x28;
    if (plVar11 == plStack_d0) {
LAB_1408b169a:
      plVar9 = plStack_f0;
      if (lStack_f8 == 0) {
        return;
      }
      uVar8 = GetProcessHeap(plStack_f0,lStack_f8 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      HeapFree(uVar8,0,plVar9);
      return;
    }
    plVar1 = plVar11 + 5;
    plStack_118 = plVar1;
    if (SBORROW8(0,*plVar11)) {
      if (plStack_d0 != plVar1) {
        uVar12 = uVar12 / 0x28;
        do {
          if (plVar9[-1] != 0) {
            pub_1406abac0((byte *)*plVar9,plVar9[-1] * 0xc,4);
          }
          plVar9 = plVar9 + 5;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      goto LAB_1408b169a;
    }
    pfStack_a8 = (float *)plVar11[1];
    uVar13 = plVar11[2];
    fVar20 = *(float *)(plVar11 + 3);
    uVar8 = *(undefined8 *)((longlong)plVar11 + 0x1c);
    bVar2 = *(byte *)((longlong)plVar11 + 0x24);
    lStack_b8 = *plVar11;
    pdb_1408b0b00(&uStack_148,pfStack_a8,uVar13);
    uStack_b0 = uStack_148;
    uStack_d8 = uStack_140;
    uStack_100 = uStack_138;
    uStack_e8 = uStack_130;
    uStack_e0 = uStack_128;
    uVar10 = 3;
    if ((bVar2 & 1) != 0) {
      fVar15 = 0.0;
      fVar14 = 0.0;
      if (1 < uVar13) {
        uVar13 = uVar13 + 1;
        pfVar7 = pfStack_a8 + 5;
        fVar18 = *pfStack_a8;
        do {
          fVar17 = (*pfVar7 - pfVar7[-3]) * (*pfVar7 - pfVar7[-3]);
          fVar16 = (float)*(undefined8 *)(pfVar7 + -2);
          fVar18 = fVar16 - fVar18;
          fVar19 = (float)((ulonglong)*(undefined8 *)(pfVar7 + -2) >> 0x20) - pfVar7[-4];
          fVar18 = fVar18 * fVar18;
          fVar14 = fVar14 + SQRT(fVar18 + fVar17);
          fVar15 = fVar15 + SQRT(fVar19 * fVar19 + fVar18 + fVar17);
          uVar13 = uVar13 - 1;
          pfVar7 = pfVar7 + 3;
          fVar18 = fVar16;
        } while (2 < uVar13);
      }
      fVar18 = fVar5;
      if (fVar6 < fVar15) {
        fVar18 = fVar14 / fVar15;
      }
      fVar20 = fVar20 * fVar18;
      uVar10 = 0xf;
    }
    fVar14 = fStack_124 + fVar5;
    lVar3 = param_1[2];
    if (lVar3 == *param_1) {
      pdb_142d7eec0(param_1);
    }
    lVar4 = param_1[1];
    *(undefined8 *)(lVar4 + lVar3 * 0x48) = uStack_b0;
    *(undefined8 *)(lVar4 + 8 + lVar3 * 0x48) = uStack_d8;
    *(undefined8 *)(lVar4 + 0x10 + lVar3 * 0x48) = uStack_100;
    *(undefined8 *)(lVar4 + 0x18 + lVar3 * 0x48) = uStack_e8;
    *(undefined4 *)(lVar4 + 0x20 + lVar3 * 0x48) = uStack_e0;
    *(float *)(lVar4 + 0x24 + lVar3 * 0x48) = fVar14;
    *(undefined4 *)(lVar4 + 0x28 + lVar3 * 0x48) = uVar10;
    *(float *)(lVar4 + 0x2c + lVar3 * 0x48) = fVar20;
    *(undefined8 *)(lVar4 + 0x30 + lVar3 * 0x48) = uVar8;
    *(undefined4 *)(lVar4 + 0x38 + lVar3 * 0x48) = uStack_c0;
    *(undefined4 *)(lVar4 + 0x3c + lVar3 * 0x48) = uStack_c4;
    *(undefined4 *)(lVar4 + 0x40 + lVar3 * 0x48) = uStack_bc;
    param_1[2] = lVar3 + 1;
    if (lStack_b8 != 0) {
      pub_1406abac0((byte *)pfStack_a8,lStack_b8 * 0xc,4);
    }
    plVar9 = plVar9 + 5;
    plVar11 = plVar1;
  } while( true );
}

