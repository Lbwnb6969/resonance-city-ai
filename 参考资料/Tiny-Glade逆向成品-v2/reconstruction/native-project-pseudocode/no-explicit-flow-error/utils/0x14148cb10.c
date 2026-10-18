// VA 0x14148cb10, PDB extent 597 bytes
// utils::curve::Curve::crashy_new_from_points<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::crashy_new_from_points<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 597 */

longlong * pdb_14148cb10(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong arg0;
  longlong lVar1;
  byte *arg0_00;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong in_RAX;
  byte *arg0_01;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined4 uStack_56;
  undefined2 uStack_52;
  ulonglong uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar1 = *param_2;
  arg0_00 = (byte *)param_2[1];
  uVar2 = param_2[2];
  if (uVar2 < 2) {
    uVar6 = 0;
    uStack_58 = 0;
    param_1 = (longlong *)(uVar2 & 0xffffffff);
  }
  else {
    arg0 = uVar2 * 4;
    pdb_14007ee60();
    arg0_01 = pub_1406abab0(arg0,4);
    if (arg0_01 == (byte *)0x0) {
      lStack_48 = lVar1;
      pdb_142dc7e2a(4,arg0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    fVar8 = (float)*(undefined8 *)arg0_00;
    fVar9 = (float)((ulonglong)*(undefined8 *)arg0_00 >> 0x20);
    fVar7 = 0.0;
    uVar4 = 0;
    do {
      fVar10 = (float)*(undefined8 *)(arg0_00 + uVar4 * 2);
      fVar8 = fVar8 - fVar10;
      fVar11 = (float)((ulonglong)*(undefined8 *)(arg0_00 + uVar4 * 2) >> 0x20);
      fVar9 = fVar9 - fVar11;
      fVar7 = SQRT(fVar9 * fVar9 + fVar8 * fVar8) + fVar7;
      *(float *)(arg0_01 + uVar4) = fVar7;
      fVar8 = (float)*(undefined8 *)(arg0_00 + uVar4 * 2 + 8);
      fVar9 = (float)((ulonglong)*(undefined8 *)(arg0_00 + uVar4 * 2 + 8) >> 0x20);
      fVar10 = fVar10 - fVar8;
      fVar11 = fVar11 - fVar9;
      fVar7 = SQRT(fVar11 * fVar11 + fVar10 * fVar10) + fVar7;
      *(float *)(arg0_01 + uVar4 + 4) = fVar7;
      uVar4 = uVar4 + 8;
    } while ((arg0 & 0xfffffffffffffff8) != uVar4);
    if ((uVar2 & 1) != 0) {
      fVar8 = fVar8 - (float)*(undefined8 *)(arg0_00 + uVar4 * 2);
      fVar9 = fVar9 - (float)((ulonglong)*(undefined8 *)(arg0_00 + uVar4 * 2) >> 0x20);
      fVar7 = fVar7 + SQRT(fVar9 * fVar9 + fVar8 * fVar8);
      *(float *)(arg0_01 + uVar4) = fVar7;
    }
    if ((fVar7 != 0.0) || (NAN(fVar7))) {
      lVar5 = 0;
      do {
        if (arg0 - lVar5 == 0) {
          if (!SBORROW8(0,lVar1)) {
            *param_1 = lVar1;
            param_1[1] = (longlong)arg0_00;
            param_1[2] = uVar2;
            param_1[3] = uVar2;
            param_1[4] = (longlong)arg0_01;
            param_1[5] = uVar2;
            *(float *)(param_1 + 6) = fVar7;
            return param_1;
          }
          uStack_57 = (undefined1)((ulonglong)arg0_00 >> 8);
          in_RAX = (ulonglong)arg0_00 >> 0x10;
          uStack_58 = SUB81(arg0_00,0);
          goto LAB_14148cc6a;
        }
        fVar8 = *(float *)(arg0_01 + lVar5);
        *(float *)(arg0_01 + lVar5) = fVar8 / fVar7;
        lVar5 = lVar5 + 4;
      } while ((uint)ABS(fVar8 / fVar7) < 0x7f800000);
    }
    pub_1406abac0(arg0_01,arg0,4);
    uVar6 = 1;
    uStack_58 = 1;
    in_RAX = extraout_RAX;
  }
  uStack_57 = (char)param_1;
  if (lVar1 != 0) {
    pub_1406abac0(arg0_00,lVar1 << 3,4);
    in_RAX = extraout_RAX_00;
    uStack_58 = uVar6;
  }
LAB_14148cc6a:
  uStack_56 = (undefined4)in_RAX;
  uStack_52 = (undefined2)(in_RAX >> 0x20);
  uStack_50 = uVar2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14330d540,0x2b,&uStack_58,&UNK_14330d520,param_3);
}

