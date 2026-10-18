// VA 0x1419a74d0, PDB extent 450 bytes
// utils::curve::Curve::try_extend<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::try_extend<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 450 */

longlong * pdb_1419a74d0(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong arg0;
  byte *arg0_00;
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uStack_b0;
  byte *pbStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  
  lVar2 = param_2[2];
  if ((ulonglong)(*param_2 - lVar2) < param_4) {
    pdb_142d7f1b0(param_2,lVar2,param_4,4,8);
    lVar2 = param_2[2];
  }
  else if (param_4 == 0) {
    arg0_00 = (byte *)param_2[1];
    goto LAB_1419a7522;
  }
  arg0_00 = (byte *)param_2[1];
  pub_142e32760(arg0_00 + lVar2 * 8,param_3,param_4 * 8);
LAB_1419a7522:
  param_4 = lVar2 + param_4;
  param_2[2] = param_4;
  arg0 = param_4 * 8;
  if (param_4 >> 0x3c == 0) goto LAB_1419a7548;
  uVar1 = 0;
  while( true ) {
    pdb_142dc7e2a(uVar1,arg0);
LAB_1419a7548:
    if (param_4 == 0) break;
    pdb_14007ee60();
    uVar1 = 4;
    pbStack_a8 = pub_1406abab0(arg0,4);
    if (pbStack_a8 != (byte *)0x0) {
      uStack_b0 = param_4;
      pub_142e32760(pbStack_a8,arg0_00,arg0);
      uStack_a0 = param_4;
LAB_1419a75a4:
      pdb_140080c90(&lStack_68,&uStack_b0,1);
      lStack_98 = lStack_60;
      lStack_90 = lStack_58;
      if (SBORROW8(0,lStack_68)) {
        *param_1 = lStack_60;
        param_1[1] = lStack_58;
      }
      else {
        lStack_78 = lStack_40;
        lStack_70 = lStack_38;
        lStack_88 = lStack_50;
        lStack_80 = lStack_48;
        if (*param_2 != 0) {
          pub_1406abac0(arg0_00,*param_2 << 3,4);
        }
        if (param_2[3] != 0) {
          pub_1406abac0((byte *)param_2[4],param_2[3] << 2,4);
        }
        *param_2 = lStack_68;
        param_2[1] = lStack_98;
        param_2[2] = lStack_90;
        param_2[5] = lStack_78;
        param_2[6] = lStack_70;
        param_2[3] = lStack_88;
        param_2[4] = lStack_80;
        *(undefined1 *)param_1 = 3;
      }
      return param_1;
    }
  }
  uStack_b0 = 0;
  pbStack_a8 = (byte *)0x4;
  uStack_a0 = 0;
  goto LAB_1419a75a4;
}

