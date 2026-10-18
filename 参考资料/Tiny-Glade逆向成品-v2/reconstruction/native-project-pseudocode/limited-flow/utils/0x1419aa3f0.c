// VA 0x1419aa3f0, PDB extent 686 bytes
// utils::curve::Curve::try_new_from_points<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   utils::curve::Curve::try_new_from_points<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 686 */

void pdb_1419aa3f0(longlong *param_1,longlong *param_2)

{
  float fVar1;
  ulonglong uVar2;
  byte *arg0;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uStack_98;
  undefined4 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  float *pfStack_78;
  undefined8 *puStack_70;
  ulonglong uStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  longlong *plStack_40;
  float afStack_34 [3];
  
  afStack_34[1] = -NAN;
  afStack_34[2] = -NAN;
  uVar2 = param_2[2];
  if (uVar2 < 2) {
    *(undefined1 *)(param_1 + 1) = 0;
    *(char *)((longlong)param_1 + 9) = (char)uVar2;
    *param_1 = -0x8000000000000000;
    if (*param_2 != 0) {
      lVar7 = param_2[1];
      plStack_40 = (longlong *)&UNK_140f3c37e;
      uVar6 = GetProcessHeap(lVar7,*param_2 * 0xc);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      HeapFree(uVar6,0,lVar7);
      return;
    }
  }
  else {
    pdb_14007ee60();
    pbStack_50 = pub_1406abab0(uVar2 * 4,4);
    plStack_40 = param_2;
    if (pbStack_50 == (byte *)0x0) {
      pdb_142dc7e2a(4,uVar2 * 4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    arg0 = (byte *)param_2[1];
    afStack_34[0] = 0.0;
    uStack_90 = *(undefined4 *)(arg0 + 8);
    uStack_98 = *(undefined8 *)arg0;
    lStack_48 = 0;
    pbStack_80 = arg0 + uVar2 * 0xc;
    pfStack_78 = afStack_34;
    puStack_70 = &uStack_98;
    pbStack_88 = arg0;
    uStack_58 = uVar2;
    pdb_140566590(&pbStack_88);
    plVar5 = plStack_40;
    if ((afStack_34[0] != 0.0) || (NAN(afStack_34[0]))) {
      lVar7 = 0;
      do {
        if (lStack_48 << 2 == lVar7) {
          lVar7 = plStack_40[2];
          lVar4 = plStack_40[1];
          *param_1 = *plStack_40;
          param_1[1] = lVar4;
          param_1[2] = lVar7;
          param_1[3] = uStack_58;
          param_1[4] = (longlong)pbStack_50;
          param_1[5] = lStack_48;
          *(float *)(param_1 + 6) = afStack_34[0];
          return;
        }
        fVar1 = *(float *)(pbStack_50 + lVar7);
        *(float *)(pbStack_50 + lVar7) = fVar1 / afStack_34[0];
        lVar7 = lVar7 + 4;
      } while ((uint)ABS(fVar1 / afStack_34[0]) < 0x7f800000);
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = -0x8000000000000000;
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_50,uStack_58 << 2,4);
    }
    if (*plVar5 != 0) {
      pub_1406abac0(arg0,*plVar5 * 0xc,4);
    }
  }
  return;
}

