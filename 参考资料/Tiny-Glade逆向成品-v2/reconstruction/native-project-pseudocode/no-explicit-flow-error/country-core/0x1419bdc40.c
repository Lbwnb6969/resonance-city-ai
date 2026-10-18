// VA 0x1419bdc40, PDB extent 494 bytes
// country_core::systems::wall::shapes::utils::shape_signifier_lerp::ShapeVal::interpolate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/utils/shape_signifier_lerp.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::utils::shape_signifier_lerp::ShapeVal::interpolate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/utils/shape_signifier_lerp.rs
   Extent: 494 */

void pdb_1419bdc40(undefined4 *param_1,int *param_2,char *param_3,float param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 in_XMM3_Dc;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (*param_2 == 1) {
    if (*param_3 == '\0') {
LAB_1419bde15:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143360ba0,0x28,&UNK_143360bc8);
    }
    uVar1 = pub_142e32a20(_DAT_142f6d800 * param_4);
    auVar14._0_4_ = param_4 + param_4;
    fVar8 = (float)*(undefined8 *)(param_2 + 1);
    fVar11 = (float)*(undefined8 *)(param_3 + 4) - fVar8;
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
    fVar13 = (float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20) - fVar6;
    fVar7 = (_DAT_142e36f28 - extraout_XMM0_Da) * fVar11;
    fVar9 = (_DAT_142e36f28 - extraout_XMM0_Da) * fVar13;
    auVar12._0_4_ = (uint)fVar11 & _DAT_142e377e0;
    auVar12._4_4_ = (uint)fVar13 & _UNK_142e377e4;
    auVar12._8_8_ = 0;
    auVar14._4_4_ = auVar14._0_4_;
    auVar14._8_4_ = in_XMM3_Dc;
    auVar14._12_4_ = in_XMM3_Dc;
    auVar15 = minps(auVar14,auVar12);
    fVar11 = (float)(-(uint)NAN(fVar11) & _DAT_143013270 |
                    ~-(uint)NAN(fVar11) &
                    (_DAT_142e37950 & _DAT_142e377e0 | ~_DAT_142e377e0 & (uint)fVar11)) *
             auVar15._0_4_;
    fVar13 = (float)(-(uint)NAN(fVar13) & _UNK_143013274 |
                    ~-(uint)NAN(fVar13) &
                    (_UNK_142e37954 & _UNK_142e377e4 | ~_UNK_142e377e4 & (uint)fVar13)) *
             auVar15._4_4_;
    iVar4 = -(uint)((float)(_DAT_142e377e0 & (uint)fVar11) < (float)((uint)fVar7 & _DAT_142e377e0));
    iVar5 = -(uint)((float)(_UNK_142e377e4 & (uint)fVar13) < (float)((uint)fVar9 & _UNK_142e377e4));
    auVar10._4_4_ = iVar5;
    auVar10._0_4_ = iVar4;
    auVar10._8_4_ = iVar5;
    auVar10._12_4_ = iVar5;
    auVar15._8_8_ = auVar10._8_8_;
    auVar15._4_4_ = iVar4;
    auVar15._0_4_ = iVar4;
    uVar2 = movmskpd(uVar1,auVar15);
    if ((uVar2 & 1) == 0) {
      fVar7 = fVar11;
    }
    if ((uVar2 & 2) == 0) {
      fVar9 = fVar13;
    }
    fVar6 = fVar6 + fVar9;
    param_1[1] = fVar7 + fVar8;
    uVar1 = 1;
    lVar3 = 8;
  }
  else {
    if (*param_3 != '\0') goto LAB_1419bde15;
    fVar6 = (float)param_2[1];
    fVar9 = *(float *)(param_3 + 4);
    fVar7 = (float)pub_142e32a20(_DAT_142f6d800 * param_4);
    fVar9 = fVar9 - fVar6;
    fVar8 = (_DAT_142e36f28 - fVar7) * fVar9;
    param_4 = param_4 + param_4;
    fVar11 = (float)((uint)fVar9 & _DAT_142e377e0);
    fVar7 = fVar11;
    if (param_4 <= fVar11) {
      fVar7 = param_4;
    }
    fVar9 = (float)(_DAT_143009de0 & -(uint)NAN(fVar9) |
                   ~-(uint)NAN(fVar9) & (_DAT_142e37820 & (uint)fVar9 | (uint)DAT_142e3c640)) *
            (float)(~-(uint)NAN(param_4) & (uint)fVar7 | -(uint)NAN(param_4) & (uint)fVar11);
    uVar2 = -(uint)((float)(_DAT_142e377e0 & (uint)fVar9) < (float)((uint)fVar8 & _DAT_142e377e0));
    fVar6 = (float)(uVar2 & (uint)fVar8 | ~uVar2 & (uint)fVar9) + fVar6;
    uVar1 = 0;
    lVar3 = 4;
  }
  *(float *)((longlong)param_1 + lVar3) = fVar6;
  *param_1 = uVar1;
  return;
}

