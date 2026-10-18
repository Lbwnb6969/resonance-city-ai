// VA 0x142199c80, PDB extent 1181 bytes
// utils::curve::Curve::circular_slice<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::circular_slice<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1181 */

undefined8 pdb_142199c80(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  byte *arg0;
  float *pfStack_108;
  float *pfStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  float *pfStack_98;
  float *pfStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  float fStack_68;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  fStack_68 = param_3;
  if ((((param_3 < 0.0) || (_DAT_142e36f28 < param_3)) || (fStack_68 = param_4, param_4 < 0.0)) ||
     (_DAT_142e36f28 < param_4)) {
    pfStack_108 = &fStack_68;
    pfStack_100 = (float *)pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1435b38c0,&pfStack_108,&UNK_1435b38a8);
  }
  if (param_3 < param_4) {
    uStack_b8 = 0;
    uStack_b0 = 4;
    uStack_a8 = 0;
    uStack_62 = 1;
    pdb_142199760(param_2,param_3,param_4,&uStack_b8);
    uStack_62 = 0;
    pdb_14219a2f0(param_1,&uStack_b8);
    return param_1;
  }
  lStack_80 = 0;
  lStack_78 = 4;
  lStack_70 = 0;
  if ((param_3 != _DAT_142e36f28) || (NAN(param_3) || NAN(_DAT_142e36f28))) {
    uStack_61 = 1;
    pdb_142199760(param_2,param_3,_DAT_142e36f28,&lStack_80);
  }
  if ((param_4 == 0.0) && (!NAN(param_4))) goto LAB_142199ecb;
  uStack_d0 = 0;
  uStack_c8 = 4;
  uStack_c0 = 0;
  uStack_63 = 1;
  pdb_142199760(param_2,0,param_4,&uStack_d0);
  uStack_63 = 0;
  pdb_14219a2f0(&pfStack_108,&uStack_d0);
  if (SBORROW8(0,(longlong)pfStack_108)) goto LAB_142199ecb;
  if (lStack_70 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lStack_70 + -1;
    lStack_70 = lVar3;
  }
  pfVar2 = (float *)(lStack_78 + lVar3 * 0xc + -0xc);
  if (((uStack_f8 == 0) || (lVar3 == 0)) || (pfVar2 == (float *)0x0)) {
    if (((lVar3 != 0) && (uStack_f8 == 0)) && (pfVar2 == (float *)0x0)) {
LAB_142199e4f:
      lVar3 = lVar3 + -1;
      lStack_70 = lVar3;
    }
  }
  else if ((*pfVar2 == *pfStack_100) && (!NAN(*pfVar2) && !NAN(*pfStack_100))) {
    lVar4 = lStack_78 + lVar3 * 0xc;
    fVar1 = *(float *)(lVar4 + -8);
    if ((fVar1 == pfStack_100[1]) && (!NAN(fVar1) && !NAN(pfStack_100[1]))) {
      fVar1 = *(float *)(lVar4 + -4);
      if ((fVar1 == pfStack_100[2]) && (!NAN(fVar1) && !NAN(pfStack_100[2]))) goto LAB_142199e4f;
    }
  }
  if ((ulonglong)(lStack_80 - lVar3) < uStack_f8) {
    pbStack_a0 = pbStack_e8;
    lStack_88 = lStack_f0;
    pfStack_98 = pfStack_100;
    pfStack_90 = pfStack_108;
    pdb_142d7f1b0(&lStack_80,lVar3,uStack_f8,4,0xc);
    lVar3 = lStack_70;
    lVar4 = lStack_88;
    arg0 = pbStack_a0;
    pfStack_108 = pfStack_90;
    pfStack_100 = pfStack_98;
LAB_142199e73:
    pub_142e32760(lStack_78 + lVar3 * 0xc,pfStack_100,uStack_f8 * 0xc);
  }
  else {
    lVar4 = lStack_f0;
    arg0 = pbStack_e8;
    if (uStack_f8 != 0) goto LAB_142199e73;
  }
  lStack_70 = lVar3 + uStack_f8;
  if (pfStack_108 != (float *)0x0) {
    pub_1406abac0((byte *)pfStack_100,(longlong)pfStack_108 * 0xc,4);
  }
  if (lVar4 != 0) {
    pub_1406abac0(arg0,lVar4 << 2,4);
  }
LAB_142199ecb:
  uStack_61 = 0;
  pdb_14219a2f0(param_1,&lStack_80);
  return param_1;
}

