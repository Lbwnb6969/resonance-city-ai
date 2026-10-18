// VA 0x140a84de0, PDB extent 21 bytes
// country_core::resources::glade_border::GladeBorder::is_pos_inside
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::glade_border::GladeBorder::is_pos_inside
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 21 */

bool pdb_140a84de0(int *param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*param_1 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 1);
    fVar6 = (float)uVar1;
    fVar7 = (float)((ulonglong)uVar1 >> 0x20);
    fVar9 = (float)((ulonglong)*(undefined8 *)(param_1 + 3) >> 0x20);
    fVar8 = (float)*(undefined8 *)(param_1 + 3);
    uVar1 = *(undefined8 *)(param_1 + 5);
    uVar2 = *(undefined8 *)(param_1 + 5);
    fVar5 = (param_3 - fVar9) * fVar7 + (param_2 - fVar8) * fVar6;
    fVar6 = (param_3 - fVar9) * fVar6 + (param_2 - fVar8) * (float)((uint)fVar7 ^ _UNK_142e37824);
    auVar3._4_4_ = -(uint)((float)(_UNK_142e37824 ^ (uint)fVar6) <=
                          ((float)((ulonglong)uVar1 >> 0x20) + 0.0) * _UNK_142e36f44);
    auVar3._0_4_ = -(uint)((float)(_DAT_142e37820 ^ (uint)fVar5) <=
                          ((float)uVar1 + 0.0) * _DAT_142e36f40);
    auVar3._8_4_ = -(uint)(fVar5 <= ((float)uVar2 + 0.0) * _UNK_142e36f48);
    auVar3._12_4_ = -(uint)(fVar6 <= ((float)((ulonglong)uVar2 >> 0x20) + 0.0) * _UNK_142e36f4c);
    iVar4 = movmskps((int)param_1,auVar3);
    return iVar4 == 0xf;
  }
  uVar1 = *(undefined8 *)(param_1 + 1);
  param_2 = param_2 - (float)uVar1;
  param_3 = param_3 - (float)((ulonglong)uVar1 >> 0x20);
  return param_3 * param_3 + param_2 * param_2 < (float)param_1[3] * (float)param_1[3];
}

