// VA 0x1413f8b70, PDB extent 1209 bytes
// utils::curve::Curve::circular_slice<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::circular_slice<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1209 */

undefined8 pdb_1413f8b70(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
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
  longlong lStack_98;
  float *pfStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  float *pfStack_70;
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
    pdb_142dc83d0(&UNK_143307ab0,&pfStack_108,&UNK_143307a98);
  }
  if (param_3 < param_4) {
    uStack_b8 = 0;
    uStack_b0 = 4;
    uStack_a8 = 0;
    uStack_62 = 1;
    pdb_1413f8720(param_2,param_3,param_4,&uStack_b8);
    uStack_62 = 0;
    pdb_140080c90(param_1,&uStack_b8,0);
    return param_1;
  }
  lStack_88 = 0;
  lStack_80 = 4;
  lStack_78 = 0;
  if ((param_3 != _DAT_142e36f28) || (NAN(param_3) || NAN(_DAT_142e36f28))) {
    uStack_61 = 1;
    pdb_1413f8720(param_2,param_3,_DAT_142e36f28,&lStack_88);
  }
  if ((param_4 == 0.0) && (!NAN(param_4))) goto LAB_1413f8dea;
  uStack_d0 = 0;
  uStack_c8 = 4;
  uStack_c0 = 0;
  uStack_63 = 1;
  pdb_1413f8720(param_2,0,param_4,&uStack_d0);
  uStack_63 = 0;
  pdb_140080c90(&pfStack_108,&uStack_d0,0);
  if (SBORROW8(0,(longlong)pfStack_108)) goto LAB_1413f8dea;
  pfStack_70 = pfStack_100;
  if (lStack_78 == 0) {
    lVar4 = 0;
    lVar2 = lStack_78;
LAB_1413f8d7e:
    lStack_78 = lVar2;
    if ((ulonglong)(lStack_88 - lVar4) < uStack_f8) {
LAB_1413f8e44:
      pfStack_90 = pfStack_108;
      pbStack_a0 = pbStack_e8;
      lStack_98 = lStack_f0;
      pdb_142d7f1b0(&lStack_88,lVar4,uStack_f8,4,8);
      lVar4 = lStack_78;
      pbStack_e8 = pbStack_a0;
      pfStack_108 = pfStack_90;
      lStack_f0 = lStack_98;
      goto LAB_1413f8d96;
    }
    if (uStack_f8 != 0) goto LAB_1413f8d96;
  }
  else {
    lVar4 = lStack_78 + -1;
    lVar1 = lStack_80 + lStack_78 * 8;
    if (((uStack_f8 == 0) || (lVar4 == 0)) || (lVar1 == 0x10)) {
      lVar2 = lVar4;
      if (((lVar4 != 0) && (uStack_f8 == 0)) && (lVar1 == 0x10)) {
LAB_1413f8d73:
        lVar4 = lStack_78 + -2;
        lVar2 = lVar4;
      }
      goto LAB_1413f8d7e;
    }
    lVar2 = lStack_80 + lStack_78 * 8;
    fVar3 = *(float *)(lVar2 + -0x10);
    if ((fVar3 == *pfStack_100) && (!NAN(fVar3) && !NAN(*pfStack_100))) {
      fVar3 = *(float *)(lVar2 + -0xc);
      if ((fVar3 == pfStack_100[1]) && (!NAN(fVar3) && !NAN(pfStack_100[1]))) goto LAB_1413f8d73;
    }
    lStack_78 = lVar4;
    if ((ulonglong)(lStack_88 - lVar4) < uStack_f8) goto LAB_1413f8e44;
LAB_1413f8d96:
    pub_142e32760(lVar4 * 8 + lStack_80,pfStack_70,uStack_f8 * 8);
  }
  lStack_78 = lVar4 + uStack_f8;
  if (pfStack_108 != (float *)0x0) {
    pub_1406abac0((byte *)pfStack_70,(longlong)pfStack_108 << 3,4);
  }
  if (lStack_f0 != 0) {
    pub_1406abac0(pbStack_e8,lStack_f0 << 2,4);
  }
LAB_1413f8dea:
  uStack_61 = 0;
  pdb_140080c90(param_1,&lStack_88,0);
  return param_1;
}

