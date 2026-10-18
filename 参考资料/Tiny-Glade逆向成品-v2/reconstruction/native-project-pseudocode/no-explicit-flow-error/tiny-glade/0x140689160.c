// VA 0x140689160, PDB extent 448 bytes
// tiny_glade::gui::gui_fog::fill_weather_slots::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_fog::fill_weather_slots::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
   Extent: 448 */

void pdb_140689160(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  float *pfVar2;
  bool bVar3;
  float *pfVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pfVar2 = (float *)param_1[1];
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\0') {
    puVar7 = &UNK_142e385c2;
    uVar9 = 0x13;
    puVar10 = &UNK_142e385f5;
    uVar8 = 0x12;
    puVar6 = &UNK_142e38577;
    pfVar4 = pfVar2;
  }
  else {
    if (cVar1 != '\x01') {
      fVar11 = (float)pdb_140de8220(_DAT_142e382c8,param_2,_DAT_142e36f28 / pfVar2[2]);
      puVar6 = &UNK_142e38598;
      puVar10 = &UNK_142e38618;
      uVar9 = 0x13;
      uVar8 = 0x12;
      puVar7 = &UNK_142e385e3;
      bVar3 = true;
      goto LAB_140689243;
    }
    puVar7 = &UNK_142e385d4;
    uVar9 = 0x10;
    puVar10 = &UNK_142e38608;
    uVar8 = 0xf;
    puVar6 = &UNK_142e38589;
    pfVar4 = pfVar2 + 1;
  }
  fVar11 = (float)pdb_140de8220(0,param_2,*pfVar4);
  bVar3 = false;
LAB_140689243:
  fVar13 = _DAT_142e36f28;
  fVar12 = 0.0;
  if (0.0 <= fVar11) {
    fVar12 = fVar11;
  }
  fVar11 = _DAT_142e36f28;
  if (fVar12 <= _DAT_142e36f28) {
    fVar11 = fVar12;
  }
  uVar5 = pdb_14008dee0(param_2,puVar10,uVar9,puVar7,uVar8,puVar6,uVar8,fVar11,
                        *(undefined4 *)param_1[2],*(undefined4 *)(param_1 + 3),
                        *(undefined4 *)(param_1 + 4));
  *(byte *)param_1[5] = *(byte *)param_1[5] | (byte)(uVar5 >> 0x20) & 1;
  if ((uVar5 >> 0x28 & 1) != 0) {
    *(undefined1 *)(pfVar2 + 5) = 1;
  }
  fVar11 = (float)uVar5;
  fVar12 = fVar13 - fVar11;
  if (bVar3) {
    fVar13 = fVar13 / (fVar11 + fVar11 + fVar12 * _DAT_142e382c8);
  }
  else {
    fVar13 = fVar12 * 0.0 + fVar11;
  }
  if (cVar1 == '\x02') {
    pfVar2[2] = fVar13;
  }
  else if (cVar1 == '\x01') {
    pfVar2[1] = fVar13;
  }
  else {
    *pfVar2 = fVar13;
  }
  return;
}

