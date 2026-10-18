// VA 0x1428ade90, PDB extent 818 bytes
// system_color::style_sample::StructureSample::from_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_sample.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::style_sample::StructureSample::from_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_sample.rs
   Extent: 818 */

uint * pdb_1428ade90(uint *param_1,undefined8 *param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float unaff_XMM8_Da;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  char cStack_b1;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  byte bStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte bStack_88;
  char cStack_87;
  undefined2 uStack_86;
  undefined8 *puStack_80;
  
  puVar3 = param_2 + 8;
  puStack_80 = puVar3;
  bVar1 = pdb_1408ff980();
  uVar4 = *(undefined1 *)((longlong)param_2 + 0x42);
  uStack_b0 = *(uint *)(param_2 + 7);
  cStack_b1 = param_3;
  if (bVar1 == 0) {
    uVar11 = *(uint *)((longlong)param_2 + 0x2c);
    uStack_98 = uVar11 - 4;
    uVar6 = 0;
    uVar2 = 0;
    if (uStack_98 < 9) {
      uVar2 = *(uint *)(&UNK_1435ae11c + (ulonglong)uStack_98 * 4);
    }
    uVar14 = *(uint *)(param_2 + 5);
    uStack_a8 = uVar2;
    if (param_3 != '\0') {
      uVar2 = (int)param_2 + 0x42;
      uStack_98 = pdb_1408ff990();
      uVar6 = uStack_98 & 0xff;
    }
    uVar9 = *(uint *)((longlong)param_2 + 0x34);
    uVar15 = (undefined4)*param_2;
    uVar16 = (undefined4)((ulonglong)*param_2 >> 0x20);
    cVar5 = *(char *)((longlong)param_2 + 0x25);
    bVar10 = 2;
    uStack_ac = 0;
    if (cVar5 == '\x02') {
      cVar5 = '\x02';
      uVar7 = 2;
    }
    else {
      uStack_86 = *(undefined2 *)((longlong)param_2 + 0x26);
      bStack_88 = *(byte *)((longlong)param_2 + 0x24);
      uVar2 = (uint)bStack_88;
      uStack_98 = *(uint *)((longlong)param_2 + 0x14);
      uStack_94 = *(undefined4 *)(param_2 + 3);
      uStack_90 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_8c = *(undefined4 *)(param_2 + 4);
      if ((bStack_88 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        cStack_87 = cVar5;
        uStack_b3 = pdb_140c33110(puStack_80);
        pdb_140b76800(&uStack_a4,&uStack_94,&uStack_b3,uVar11,uVar9);
        param_2 = (undefined8 *)(ulonglong)bStack_a0;
        uVar7 = 1;
        uStack_98 = uStack_a4;
        uVar2 = uStack_9c;
      }
    }
  }
  else {
    fVar12 = *(float *)((longlong)param_2 + 0xc) - *(float *)(param_2 + 1);
    unaff_XMM8_Da = 0.0;
    if (0.0 < fVar12) {
      fVar12 = (*(float *)((longlong)param_2 + 0x3c) - *(float *)(param_2 + 1)) / fVar12;
      fVar13 = 0.0;
      if (0.0 <= fVar12) {
        fVar13 = fVar12;
      }
      unaff_XMM8_Da = _DAT_142e36f28;
      if (fVar13 <= _DAT_142e36f28) {
        unaff_XMM8_Da = fVar13;
      }
    }
    bVar10 = 2;
    if (param_3 != '\0') {
      bVar10 = *(byte *)((longlong)param_2 + 0x41);
    }
    uVar14 = *(uint *)(param_2 + 5);
    uVar2 = *(uint *)((longlong)param_2 + 0x34);
    uVar11 = *(uint *)(param_2 + 6);
    uVar9 = uVar11;
    if (param_3 != '\0') {
      uVar9 = uVar2;
    }
    uVar15 = (undefined4)*param_2;
    uVar16 = (undefined4)((ulonglong)*param_2 >> 0x20);
    cVar5 = *(char *)((longlong)param_2 + 0x25);
    uStack_ac = 1;
    uStack_a8 = 0;
    if (cVar5 == '\x02') {
      cVar5 = '\x02';
      uVar7 = 2;
      uVar6 = 1;
      uStack_98 = (uint)*(byte *)((longlong)param_2 + 0x41);
      uVar2 = (uint)puVar3;
    }
    else {
      uStack_86 = *(undefined2 *)((longlong)param_2 + 0x26);
      bStack_88 = *(byte *)((longlong)param_2 + 0x24);
      uStack_98 = *(uint *)((longlong)param_2 + 0x14);
      uStack_94 = *(undefined4 *)(param_2 + 3);
      uStack_90 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_8c = *(undefined4 *)(param_2 + 4);
      if ((bStack_88 & 1) == 0) {
        uVar7 = 0;
        uVar6 = 1;
        uVar2 = (uint)bStack_88;
      }
      else {
        uStack_b2 = uVar4;
        cStack_87 = cVar5;
        uStack_b3 = pdb_140c33110(param_2 + 8);
        pdb_140b76800(&uStack_a4,&uStack_94,&uStack_b3,*(undefined4 *)((longlong)param_2 + 0x2c),
                      uVar2);
        param_2 = (undefined8 *)(ulonglong)bStack_a0;
        uVar7 = 1;
        uVar6 = 1;
        uStack_98 = uStack_a4;
        uVar2 = uStack_9c;
        uVar4 = uStack_b2;
      }
    }
  }
  uVar8 = 3;
  if (bVar1 == 0) {
    uVar8 = uVar4;
  }
  if (cStack_b1 != '\0') {
    uVar8 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)puStack_80;
  param_1[0xf] = uVar11;
  *(undefined1 *)((longlong)param_1 + 0x42) = uVar8;
  *(byte *)((longlong)param_1 + 0x41) = bVar10;
  *param_1 = uStack_a8;
  param_1[1] = uVar14;
  param_1[2] = uVar6;
  param_1[3] = uVar9;
  param_1[4] = (uint)bVar1;
  param_1[5] = uStack_b0;
  param_1[6] = uStack_ac;
  param_1[7] = (uint)unaff_XMM8_Da;
  *(ulonglong *)(param_1 + 8) = CONCAT44(uVar16,uVar15);
  *(undefined1 *)(param_1 + 0xc) = uVar7;
  *(char *)((longlong)param_1 + 0x31) = (char)param_2;
  *(char *)((longlong)param_1 + 0x32) = cVar5;
  param_1[0xd] = uStack_98;
  param_1[0xe] = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x43) = 4;
  param_1[10] = 0;
  return param_1;
}

