// VA 0x14089e4b0, PDB extent 487 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::densely_sample_spline_segment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::densely_sample_spline_segment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 487 */

undefined8 * pdb_14089e4b0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float *pfStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float afStack_54 [15];
  
  afStack_54[1] = -NAN;
  afStack_54[2] = -NAN;
  uVar4 = param_2[1];
  if (param_3 < uVar4) {
    lVar2 = *param_2;
    lVar6 = param_3 * 0x2c;
    lVar1 = lVar2 + lVar6;
    pfVar3 = (float *)(lVar2 + 0x2c + lVar6);
    if (uVar4 <= param_3 + 1) {
      pfVar3 = (float *)((longlong)param_2 + 0x14);
    }
    fVar11 = *pfVar3 - *(float *)(lVar2 + lVar6);
    fVar7 = (float)pub_142e329c0(fVar11 + fVar11);
    uVar4 = 0;
    if (0.0 <= fVar7) {
      uVar4 = (longlong)(fVar7 - _DAT_142e36f2c) & (longlong)fVar7 >> 0x3f | (longlong)fVar7;
    }
    uVar5 = 0xffffffffffffffff;
    if (fVar7 <= _DAT_142e36f30) {
      uVar5 = uVar4;
    }
    uStack_78 = 2;
    if (2 < uVar5) {
      uStack_78 = uVar5;
    }
    afStack_54[0] = fVar11 / (float)(uStack_78 - 1);
    uStack_80 = 0;
    pfStack_90 = afStack_54;
    lStack_88 = lVar1;
    pdb_141496b40(&uStack_70,&pfStack_90);
    uVar10 = 0;
    uVar8 = pdb_140dea810(lVar1);
    uVar9 = pdb_140dea810(lVar1);
    param_1[2] = uStack_60;
    *param_1 = uStack_70;
    param_1[1] = uStack_68;
    *(undefined4 *)(param_1 + 3) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar10;
    param_1[4] = CONCAT44((uint)fVar11 ^ _UNK_142e37824,uVar9 ^ _DAT_142e37820);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(param_3,uVar4,&UNK_143013938);
}

