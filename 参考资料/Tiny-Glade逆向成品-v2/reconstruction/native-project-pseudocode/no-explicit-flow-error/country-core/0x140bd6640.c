// VA 0x140bd6640, PDB extent 484 bytes
// country_core::resources::active_raster_stroke::InProgressRasterStroke::add_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::active_raster_stroke::InProgressRasterStroke::add_point
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
   Extent: 484 */

void pdb_140bd6640(byte *param_1,float *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  float *pfVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = (ulonglong *)(param_1 + 0x28);
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 == 0) {
    if (*puVar1 == 0) {
      pdb_142db7820(puVar1);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    *(float *)(puVar4 + 1) = param_2[2];
    *puVar4 = *(undefined8 *)param_2;
    param_1[0x38] = 1;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar2 = lVar6 + lVar7 * 0xc;
    if (lVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143064990);
    }
    fVar9 = *(float *)(lVar2 + -8) - param_2[1];
    fVar10 = *(float *)(lVar2 + -0xc) - *param_2;
    fVar11 = *(float *)(lVar2 + -4) - param_2[2];
    *(float *)(param_1 + 0x40) =
         SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10) + *(float *)(param_1 + 0x40);
    if (lVar7 == *(longlong *)(param_1 + 0x28)) {
      pdb_142db7820(puVar1);
      lVar6 = *(longlong *)(param_1 + 0x30);
    }
    *(float *)(lVar6 + 8 + lVar7 * 0xc) = param_2[2];
    *(undefined8 *)(lVar6 + lVar7 * 0xc) = *(undefined8 *)param_2;
    pfVar3 = (float *)(lVar7 + 1);
    *(float **)(param_1 + 0x38) = pfVar3;
    if (_DAT_142e36f28 < *(float *)(param_1 + 0x40)) {
      pfVar8 = *(float **)(param_1 + 8);
      if (((float *)0x1 < pfVar8 & *param_1) == 1) {
        if (pfVar3 < pfVar8) {
          pdb_142dc8420(0,pfVar8,pfVar3,&UNK_1430649a8);
        }
        else {
          pdb_140bd6350(*(undefined8 *)(param_1 + 0x30),pfVar8,param_1 + 0x10);
          pfVar8 = (float *)((longlong)pfVar8 + -1);
          param_2 = *(float **)(param_1 + 0x38);
          if (pfVar8 <= param_2) {
            param_1[0x38] = 0;
            param_1[0x39] = 0;
            param_1[0x3a] = 0;
            param_1[0x3b] = 0;
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            lVar7 = (longlong)param_2 - (longlong)pfVar8;
            if (lVar7 == 0) {
              lVar7 = 0;
            }
            else {
              pub_142e32770(*(longlong *)(param_1 + 0x30),
                            *(longlong *)(param_1 + 0x30) + (longlong)pfVar8 * 0xc,lVar7 * 0xc);
              *(longlong *)(param_1 + 0x38) = lVar7;
            }
            param_1[0] = 1;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            *(longlong *)(param_1 + 8) = lVar7;
            return;
          }
        }
        pdb_142dc8420(0,pfVar8,param_2,&UNK_14338aa00);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pfVar3 == (float *)*puVar1) {
        pdb_142db7820(puVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x30);
      *(float *)(lVar2 + 8 + (longlong)pfVar3 * 0xc) = param_2[2];
      *(undefined8 *)(lVar2 + (longlong)pfVar3 * 0xc) = *(undefined8 *)param_2;
      *(longlong *)(param_1 + 0x38) = lVar7 + 2;
      param_1[0] = 1;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(longlong *)(param_1 + 8) = lVar7 + 2;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
  }
  return;
}

