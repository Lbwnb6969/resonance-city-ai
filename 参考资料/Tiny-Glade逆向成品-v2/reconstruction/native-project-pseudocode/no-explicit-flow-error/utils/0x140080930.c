// VA 0x140080930, PDB extent 850 bytes
// utils::curve::Curve::try_new_from_points<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::try_new_from_points<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 850 */

longlong * pdb_140080930(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  float *pfVar1;
  float fVar2;
  ulonglong uVar3;
  float *arg0;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined8 uStack_a8;
  float fStack_a0;
  float *pfStack_98;
  float *pfStack_90;
  float *pfStack_88;
  undefined8 *puStack_80;
  ulonglong uStack_60;
  byte *pbStack_58;
  longlong lStack_50;
  longlong *plStack_48;
  float afStack_3c [3];
  
  afStack_3c[1] = -NAN;
  afStack_3c[2] = -NAN;
  uVar3 = param_2[2];
  if (uVar3 < 2) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(char *)((longlong)param_1 + 9) = (char)uVar3;
    *param_1 = -0x8000000000000000;
    if (*param_2 == 0) {
      return param_1;
    }
    pub_1406abac0((byte *)param_2[1],*param_2 * 0xc,4);
    return param_1;
  }
  pdb_14007ee60();
  pbStack_58 = pub_1406abab0(uVar3 * 4,4);
  plStack_48 = param_2;
  if (pbStack_58 == (byte *)0x0) {
    pdb_142dc7e2a(4,uVar3 * 4);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  arg0 = (float *)param_2[1];
  afStack_3c[0] = 0.0;
  fStack_a0 = arg0[2];
  uStack_a8 = *(undefined8 *)arg0;
  lStack_50 = 0;
  pfStack_90 = arg0 + uVar3 * 3;
  pfStack_88 = afStack_3c;
  puStack_80 = &uStack_a8;
  pfStack_98 = arg0;
  uStack_60 = uVar3;
  pdb_140566590(&pfStack_98);
  if ((afStack_3c[0] != 0.0) || (NAN(afStack_3c[0]))) {
    lVar6 = 0;
    do {
      if (lStack_50 << 2 == lVar6) {
        if ((param_3 & 1) == 0) goto LAB_140080b1a;
        fVar7 = arg0[3];
        if ((*arg0 == fVar7) && (!NAN(*arg0) && !NAN(fVar7))) {
          if ((arg0[1] == arg0[4]) && (!NAN(arg0[1]) && !NAN(arg0[4]))) {
            if ((arg0[2] == arg0[5]) && (!NAN(arg0[2]) && !NAN(arg0[5]))) {
              lVar6 = 0;
              goto LAB_140080bce;
            }
          }
        }
        if (uVar3 == 2) goto LAB_140080b1a;
        lVar6 = 1;
        lVar5 = 0;
        goto LAB_140080ba0;
      }
      fVar7 = *(float *)(pbStack_58 + lVar6);
      *(float *)(pbStack_58 + lVar6) = fVar7 / afStack_3c[0];
      lVar6 = lVar6 + 4;
    } while ((uint)ABS(fVar7 / afStack_3c[0]) < 0x7f800000);
  }
  *(undefined1 *)(param_1 + 1) = 1;
LAB_140080a85:
  *param_1 = -0x8000000000000000;
  if (uStack_60 != 0) {
    pub_1406abac0(pbStack_58,uStack_60 << 2,4);
  }
  if (*plStack_48 != 0) {
    pub_1406abac0((byte *)arg0,*plStack_48 * 0xc,4);
  }
  return param_1;
LAB_140080ba0:
  fVar2 = *(float *)((longlong)arg0 + lVar5 + 0x18);
  if ((fVar7 == fVar2) && (!NAN(fVar7) && !NAN(fVar2))) {
    fVar7 = *(float *)((longlong)arg0 + lVar5 + 0x10);
    pfVar1 = (float *)((longlong)arg0 + lVar5 + 0x1c);
    if ((fVar7 == *pfVar1) && (!NAN(fVar7) && !NAN(*pfVar1))) {
      fVar7 = *(float *)((longlong)arg0 + lVar5 + 0x14);
      pfVar1 = (float *)((longlong)arg0 + lVar5 + 0x20);
      if ((fVar7 == *pfVar1) && (!NAN(fVar7) && !NAN(*pfVar1))) goto LAB_140080bce;
    }
  }
  lVar5 = lVar5 + 0xc;
  lVar6 = lVar6 + 1;
  fVar7 = fVar2;
  if (uVar3 * 0xc + -0x18 == lVar5) {
LAB_140080b1a:
    lVar6 = plStack_48[2];
    lVar5 = plStack_48[1];
    *param_1 = *plStack_48;
    param_1[1] = lVar5;
    param_1[2] = lVar6;
    param_1[3] = uStack_60;
    param_1[4] = (longlong)pbStack_58;
    param_1[5] = lStack_50;
    *(float *)(param_1 + 6) = afStack_3c[0];
    return param_1;
  }
  goto LAB_140080ba0;
LAB_140080bce:
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = lVar6;
  goto LAB_140080a85;
}

