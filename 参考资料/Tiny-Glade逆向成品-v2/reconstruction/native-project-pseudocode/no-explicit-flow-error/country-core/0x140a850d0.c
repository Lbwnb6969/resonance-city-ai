// VA 0x140a850d0, PDB extent 21 bytes
// country_core::systems::wall::valid_enclosure::ShapeParameters::get_normal_at_u
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::ShapeParameters::get_normal_at_u
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 21 */

undefined8 pdb_140a850d0(int *param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_4c;
  float *pfStack_48;
  code *pcStack_40;
  
  fVar4 = _DAT_142f57bcc;
  piVar2 = param_1 + 1;
  if (*param_1 != 1) {
    fVar8 = (_DAT_142e36f28 - param_2) * _DAT_142f57bcc;
    fVar7 = (float)pub_142e32a70(param_1[4],_DAT_142f57bcc);
    fVar8 = (float)(~-(uint)(fVar7 < 0.0) & (uint)fVar7 |
                   (uint)(fVar4 + fVar7) & -(uint)(fVar7 < 0.0)) + fVar8;
    uVar3 = pub_142e329e0(fVar8);
    pub_142e32b30(fVar8);
    return uVar3;
  }
  fVar4 = (float)param_1[6];
  fVar7 = fVar4 + (float)param_1[5];
  fVar9 = fVar7 + fVar7;
  fVar8 = fVar4 / fVar9;
  fStack_4c = fVar8;
  if (((((fVar8 < 0.0) || (_DAT_142e36f28 < fVar8)) ||
       (fVar7 = fVar7 / fVar9, fStack_4c = fVar7, fVar7 < 0.0)) ||
      ((_DAT_142e36f28 < fVar7 ||
       (fStack_4c = (fVar4 + fVar4 + (float)param_1[5]) / fVar9, fStack_4c < 0.0)))) ||
     (_DAT_142e36f28 < fStack_4c)) {
    pfStack_48 = &fStack_4c;
    pcStack_40 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_48,&UNK_1431ffaa0);
  }
  if ((param_2 != 0.0) || (NAN(param_2))) {
    if ((param_2 == _DAT_142e36f28) && (!NAN(param_2) && !NAN(_DAT_142e36f28))) goto LAB_140df18d8;
    if ((param_2 != fVar8) || (NAN(param_2) || NAN(fVar8))) {
      if ((param_2 == fVar7) && (!NAN(param_2) && !NAN(fVar7))) {
        fVar4 = (float)*(undefined8 *)piVar2;
        fVar7 = (float)((ulonglong)*(undefined8 *)piVar2 >> 0x20);
        fVar8 = (float)(_UNK_142e37824 ^ (uint)fVar7) + fVar4;
        fVar4 = fVar4 + fVar7;
        fVar7 = _DAT_142e36f28 / SQRT(fVar4 * fVar4 + fVar8 * fVar8);
        fVar8 = fVar7 * fVar8;
        fVar7 = fVar7 * fVar4;
        goto LAB_140df1918;
      }
      if ((param_2 != fStack_4c) || (NAN(param_2) || NAN(fStack_4c))) {
        if ((param_2 < 0.0) || (fVar8 <= param_2)) {
          if ((param_2 < fVar8) || (fVar7 <= param_2)) {
            fVar5 = (float)*(undefined8 *)piVar2;
            fVar6 = (float)((ulonglong)*(undefined8 *)piVar2 >> 0x20);
            fVar9 = _UNK_1431ff8d8;
            fVar1 = _UNK_1431ff8dc;
            fVar4 = _DAT_1431ff8d0;
            fVar8 = _UNK_1431ff8d4;
            if ((fVar7 <= param_2) && (param_2 < fStack_4c)) {
              fVar9 = _UNK_142e37958;
              fVar1 = _UNK_142e3795c;
              fVar4 = _DAT_142e37950;
              fVar8 = _UNK_142e37954;
            }
            return CONCAT44(fVar5 * fVar1 + fVar6 * fVar8,
                            (float)(_UNK_142e37824 ^ (uint)fVar6) * fVar9 + fVar5 * fVar4);
          }
          fVar4 = (float)*(undefined8 *)piVar2;
          fVar8 = (float)((ulonglong)*(undefined8 *)piVar2 >> 0x20);
          fVar7 = fVar4 * _DAT_142f98000;
          fVar9 = fVar8 * _UNK_142f98004;
          fVar8 = (float)(_UNK_142e37824 ^ (uint)fVar8) * _UNK_142f98008;
          fVar4 = fVar4 * _UNK_142f9800c;
        }
        else {
          fVar4 = (float)*(undefined8 *)piVar2;
          fVar8 = (float)((ulonglong)*(undefined8 *)piVar2 >> 0x20);
          fVar7 = fVar4 * _DAT_1431ff8e0;
          fVar9 = fVar8 * _UNK_1431ff8e4;
          fVar8 = (float)(_UNK_142e37824 ^ (uint)fVar8) * _UNK_1431ff8e8;
          fVar4 = fVar4 * _UNK_1431ff8ec;
        }
        return CONCAT44(fVar4 + fVar9,fVar8 + fVar7);
      }
      fVar4 = (float)*(undefined8 *)piVar2;
      fVar8 = (float)((ulonglong)*(undefined8 *)piVar2 >> 0x20);
      fVar7 = fVar4 * _DAT_142e377c0;
      fVar9 = fVar8 * _UNK_142e377c4;
      fVar8 = (float)(_UNK_142e37824 ^ (uint)fVar8) * _UNK_142e377c8;
      fVar4 = fVar4 * _UNK_142e377cc;
    }
    else {
      fVar4 = (float)*(undefined8 *)piVar2;
      fVar8 = (float)((ulonglong)*(undefined8 *)piVar2 >> 0x20);
      fVar7 = fVar4 * _DAT_1431ff8f0;
      fVar9 = fVar8 * _UNK_1431ff8f4;
      fVar8 = (float)(_UNK_142e37824 ^ (uint)fVar8) * _UNK_1431ff8f8;
      fVar4 = fVar4 * _UNK_1431ff8fc;
    }
    fVar8 = fVar8 + fVar7;
    fVar4 = fVar4 + fVar9;
  }
  else {
LAB_140df18d8:
    fVar7 = (float)*(undefined8 *)piVar2;
    fVar4 = (float)((ulonglong)*(undefined8 *)piVar2 >> 0x20);
    fVar8 = (float)(_UNK_142e37824 ^ (uint)fVar4 ^ _DAT_142e37820) - fVar7;
    fVar4 = (float)((uint)fVar7 ^ _UNK_142e37824) - fVar4;
  }
  fVar7 = _DAT_142e36f28 / SQRT(fVar4 * fVar4 + fVar8 * fVar8);
  fVar8 = fVar7 * fVar8;
  fVar7 = fVar7 * fVar4;
LAB_140df1918:
  return CONCAT44(_DAT_142e36f28 * fVar7,_DAT_142e36f28 * fVar8);
}

