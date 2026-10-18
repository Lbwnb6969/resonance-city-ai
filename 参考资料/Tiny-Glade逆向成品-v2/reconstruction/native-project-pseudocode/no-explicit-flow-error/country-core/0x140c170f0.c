// VA 0x140c170f0, PDB extent 250 bytes
// country_core::resources::grading_lut::impl$2::load_cube::parse_rgb
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::grading_lut::impl$2::load_cube::parse_rgb
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
   Extent: 250 */

void pdb_140c170f0(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined2 uStack_20;
  
  lStack_30 = param_2 + param_3;
  uStack_58 = 0;
  uStack_28 = 0;
  uStack_20 = 1;
  lStack_50 = param_3;
  lStack_48 = param_2;
  lStack_40 = param_3;
  lStack_38 = param_2;
  lVar3 = pdb_140c14fe0(&uStack_58);
  if (lVar3 == 0) {
LAB_140c171a3:
    uVar7 = pdb_142de9270(&UNK_143068edf,0x13);
  }
  else {
    uVar4 = pdb_140f6f160(lVar3);
    if ((uVar4 & 1) == 0) {
      lVar3 = pdb_140c14fe0(&uStack_58);
      if (lVar3 == 0) goto LAB_140c171a3;
      uVar5 = pdb_140f6f160(lVar3);
      if ((uVar5 & 1) == 0) {
        lVar3 = pdb_140c14fe0(&uStack_58);
        if (lVar3 == 0) goto LAB_140c171a3;
        uVar6 = pdb_140f6f160(lVar3);
        if ((uVar6 & 1) == 0) {
          param_1[1] = (int)(uVar4 >> 0x20);
          param_1[2] = (int)(uVar5 >> 0x20);
          param_1[3] = (int)(uVar6 >> 0x20);
          uVar1 = 0;
          goto LAB_140c171e0;
        }
        uVar2 = (uint)(uVar6 >> 8) & 1;
      }
      else {
        uVar2 = (uint)(uVar5 >> 8) & 1;
      }
    }
    else {
      uVar2 = (uint)(uVar4 >> 8) & 1;
    }
    uVar7 = pdb_142deae40(uVar2);
  }
  *(undefined8 *)(param_1 + 2) = uVar7;
  uVar1 = 1;
LAB_140c171e0:
  *param_1 = uVar1;
  return;
}

