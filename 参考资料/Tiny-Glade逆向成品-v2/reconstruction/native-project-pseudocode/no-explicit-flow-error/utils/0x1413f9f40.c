// VA 0x1413f9f40, PDB extent 712 bytes
// utils::curve::Curve::crashy_new_from_points<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemanticThresholded3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::crashy_new_from_points<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemanticThresholded3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 712 */

longlong * pdb_1413f9f40(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  float fVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *extraout_RAX;
  byte *extraout_RAX_00;
  longlong lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  float *pfStack_78;
  undefined8 *puStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  longlong lStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  float fStack_3c;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lStack_48 = *param_2;
  pbVar4 = (byte *)param_2[1];
  uVar2 = param_2[2];
  pbStack_50 = pbVar4;
  if (uVar2 < 2) {
    uVar7 = 0;
    uVar6 = 0;
    param_1 = (longlong *)(uVar2 & 0xffffffff);
    pbVar4 = (byte *)0x0;
  }
  else {
    pdb_14007ee60();
    pbStack_60 = pub_1406abab0(uVar2 * 4,4);
    if (pbStack_60 == (byte *)0x0) {
      pdb_142dc7e2a(4,uVar2 * 4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    fStack_3c = 0.0;
    uStack_90 = *(undefined4 *)(pbVar4 + 8);
    uStack_98 = *(undefined8 *)pbVar4;
    lStack_58 = 0;
    pbStack_80 = pbVar4 + uVar2 * 0xc;
    pfStack_78 = &fStack_3c;
    puStack_70 = &uStack_98;
    uStack_88 = pbVar4;
    uStack_68 = uVar2;
    pbVar4 = (byte *)pdb_140566590(&uStack_88);
    if ((fStack_3c != 0.0) || (NAN(fStack_3c))) {
      lVar5 = 0;
      do {
        if (lStack_58 << 2 == lVar5) {
          if (!SBORROW8(0,lStack_48)) {
            *param_1 = lStack_48;
            param_1[1] = (longlong)pbStack_50;
            param_1[2] = uVar2;
            param_1[3] = uStack_68;
            param_1[4] = (longlong)pbStack_60;
            param_1[5] = lStack_58;
            *(float *)(param_1 + 6) = fStack_3c;
            return param_1;
          }
          uVar8 = (undefined1)((ulonglong)pbStack_50 >> 8);
          pbVar4 = (byte *)((ulonglong)pbStack_50 >> 0x10);
          uVar6 = SUB81(pbStack_50,0);
          goto LAB_1413fa0a1;
        }
        fVar1 = *(float *)(pbStack_60 + lVar5);
        *(float *)(pbStack_60 + lVar5) = fVar1 / fStack_3c;
        lVar5 = lVar5 + 4;
        pbVar4 = pbStack_60;
      } while ((uint)ABS(fVar1 / fStack_3c) < 0x7f800000);
    }
    if (uStack_68 != 0) {
      pub_1406abac0(pbStack_60,uStack_68 << 2,4);
      pbVar4 = extraout_RAX;
    }
    uVar7 = 1;
    uVar6 = 1;
  }
  uVar8 = SUB81(param_1,0);
  if (lStack_48 != 0) {
    pub_1406abac0(pbStack_50,lStack_48 * 0xc,4);
    pbVar4 = extraout_RAX_00;
    uVar6 = uVar7;
  }
LAB_1413fa0a1:
  uStack_88 = (byte *)CONCAT26((short)((ulonglong)pbVar4 >> 0x20),
                               CONCAT42((int)pbVar4,CONCAT11(uVar8,uVar6)));
  pbStack_80 = (byte *)uVar2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143306430,0x2b,&uStack_88,&UNK_143306410,param_3);
}

