// VA 0x1408279f0, PDB extent 1010 bytes
// system_wall_constructor::construct_playermade_stairs::wooden_supports::support_station_from_sample
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::wooden_supports::support_station_from_sample
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
   Extent: 1010 */

void pdb_1408279f0(undefined8 *param_1,undefined4 *param_2,float param_3,undefined4 param_4,
                  uint param_5,byte param_6,float param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char cStack_120;
  byte bStack_11f;
  undefined2 uStack_11e;
  float fStack_11c;
  float fStack_118;
  float fStack_104;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  
  uStack_c4 = param_5;
  uVar1 = *param_2;
  fStack_11c = (float)param_2[2];
  cStack_120 = (char)uVar1;
  bStack_11f = (byte)((uint)uVar1 >> 8);
  uStack_11e = (undefined2)((uint)uVar1 >> 0x10);
  uStack_c8 = param_4;
  pdb_140df4540(&uStack_f8,&cStack_120,(float)param_2[1] + _DAT_143009d30);
  uStack_c0 = param_5 ^ _DAT_142e37820;
  fVar5 = _DAT_142e36f50 * param_3 + _DAT_143009d10;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  uStack_bc = param_4;
  pdb_140df4520(&cStack_120,&uStack_c0);
  fVar4 = fStack_f0;
  uVar3 = _DAT_142fa5c30;
  fVar2 = _DAT_142e377f0;
  fVar7 = (float)CONCAT22(uStack_11e,CONCAT11(bStack_11f,cStack_120)) * fVar5;
  fVar12 = (float)uStack_f8;
  fVar13 = (float)((ulonglong)uStack_f8 >> 0x20);
  fVar9 = fVar12 - fVar7;
  fVar10 = fVar13 - fStack_11c * fVar5;
  fVar11 = fStack_f0 - fVar5 * fStack_118;
  fVar7 = fVar7 + fVar12;
  fVar8 = fStack_11c * fVar5 + fVar13;
  fVar6 = fVar5 * fStack_118 + fStack_f0;
  fVar5 = param_7;
  fVar14 = param_7;
  if ((param_6 & 1) != 0) goto LAB_140827d0b;
  fStack_e8 = fVar9 + _DAT_143009d20;
  fStack_e4 = fVar10 + _UNK_143009d24;
  fStack_e0 = fVar11 + _UNK_143009d28;
  fStack_dc = _DAT_142e377f0 + _UNK_143009d2c;
  uStack_d8 = _DAT_142fa5c30;
  pdb_1409edd20(&cStack_120,param_9,&fStack_e8,_DAT_142e36f3c,0x202);
  if (cStack_120 == '\x11') {
LAB_140827be7:
    param_7 = (float)pdb_14140ce00(param_8,fVar9,fVar11);
  }
  else if (cStack_120 == '\x01') {
    param_7 = fStack_104 + _DAT_142e37988;
  }
  else {
    if (cStack_120 != '\x02') goto LAB_140827be7;
    param_7 = fStack_104;
    if ((bStack_11f & 1) == 0) {
      param_7 = fStack_104 + _DAT_142e36f34;
    }
  }
  fStack_e8 = fVar7 + _DAT_143009d20;
  fStack_e4 = fVar8 + _UNK_143009d24;
  fStack_e0 = fVar6 + _UNK_143009d28;
  fStack_dc = fVar2 + _UNK_143009d2c;
  uStack_d8 = uVar3;
  pdb_1409edd20(&cStack_120,param_9,&fStack_e8,_DAT_142e36f3c,0x202);
  if (cStack_120 == '\x11') {
LAB_140827c70:
    fVar14 = (float)pdb_14140ce00(param_8,fVar7,fVar6);
  }
  else if (cStack_120 == '\x01') {
    fVar14 = fStack_104 + _DAT_142e37988;
  }
  else {
    if (cStack_120 != '\x02') goto LAB_140827c70;
    fVar14 = fStack_104;
    if ((bStack_11f & 1) == 0) {
      fVar14 = fStack_104 + _DAT_142e36f34;
    }
  }
  fStack_e8 = fVar12 + _DAT_143009d20;
  fStack_e4 = fVar13 + _UNK_143009d24;
  fStack_e0 = fVar4 + _UNK_143009d28;
  fStack_dc = fVar2 + _UNK_143009d2c;
  uStack_d8 = _DAT_142fa5c30;
  pdb_1409edd20(&cStack_120,param_9,&fStack_e8,_DAT_142e36f3c,0x202);
  if (cStack_120 != '\x11') {
    if (cStack_120 == '\x01') {
      fVar5 = fStack_104 + _DAT_142e37988;
      goto LAB_140827d0b;
    }
    if (cStack_120 == '\x02') {
      fVar5 = fStack_104;
      if ((bStack_11f & 1) == 0) {
        fVar5 = fStack_104 + _DAT_142e36f34;
      }
      goto LAB_140827d0b;
    }
  }
  fVar5 = (float)pdb_14140ce00(param_8,fVar12,fVar4);
LAB_140827d0b:
  *(float *)((longlong)param_1 + 0x24) = param_7;
  *(float *)(param_1 + 5) = fVar14;
  *(float *)((longlong)param_1 + 0x2c) = fVar5;
  pdb_140df4520(param_1 + 6,&uStack_c8);
  *param_1 = CONCAT44(fVar10,fVar9);
  *(float *)(param_1 + 1) = fVar11;
  *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(fVar8,fVar7);
  *(float *)((longlong)param_1 + 0x14) = fVar6;
  param_1[3] = uStack_f8;
  *(float *)(param_1 + 4) = fStack_f0;
  *(float *)((longlong)param_1 + 0x3c) = param_3;
  return;
}

