// VA 0x1428ae1d0, PDB extent 538 bytes
// system_color::style_sample::StyleSample::remember
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/remember_style.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_sample::StyleSample::remember
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/remember_style.rs
   Extent: 538 */

void pdb_1428ae1d0(int *param_1,uint *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (*param_1 == 1) {
    uVar6 = param_1[1];
    *param_2 = (uint)(uVar6 != 999);
    param_2[1] = uVar6;
    param_2[0x13] = param_1[2];
    return;
  }
  cVar2 = pdb_1408ff980(param_1 + 0x11);
  uVar6 = param_1[0x10];
  if (cVar2 == '\0') {
    param_2[0xb] = uVar6;
    param_2[10] = uVar6;
    if ((uVar6 < 0xc & (byte)(0x80f >> ((byte)uVar6 & 0x1f))) == 0) {
      piVar5 = &iStack_34;
      switch(~((uVar6 / 100000) * 100000) + uVar6) {
      case 0:
      case 4:
        piVar5 = &iStack_30;
        break;
      case 1:
      case 6:
        piVar5 = &iStack_28;
        break;
      case 3:
        piVar5 = &iStack_1c;
        break;
      case 5:
        piVar5 = &iStack_18;
        break;
      case 7:
        piVar5 = &iStack_20;
        break;
      case 8:
        piVar5 = &iStack_24;
        break;
      case 10:
        piVar5 = &iStack_14;
        break;
      case 0xb:
        piVar5 = &iStack_2c;
      }
      iStack_34 = 3;
      iStack_14 = 0xb;
      iStack_18 = 3;
      iStack_1c = 0;
      iStack_20 = 3;
      iStack_24 = 3;
      iStack_28 = 2;
      iStack_2c = 0;
      iStack_30 = 1;
      uVar6 = *piVar5 + 100000;
    }
    else {
      uVar6 = *(uint *)(&UNK_1435ae140 + (ulonglong)uVar6 * 4);
    }
    param_2[2] = uVar6;
    cVar2 = *(char *)((longlong)param_1 + 0x46);
  }
  else {
    param_2[0xc] = uVar6;
    param_2[0x12] = uVar6;
    param_2[4] = uVar6;
    cVar2 = *(char *)((longlong)param_1 + 0x46);
  }
  if (cVar2 != '\x03') {
    uVar6 = (uint)iStack_34 >> 8;
    iStack_34 = CONCAT31((int3)uVar6,cVar2);
    *(char *)((longlong)param_2 + 0x5f) = cVar2;
    uVar3 = pdb_140a937c0(&iStack_34);
    *(undefined1 *)(param_2 + 0x18) = uVar3;
  }
  if (*(char *)((longlong)param_1 + 0x45) == '\x02') {
    if (param_1[1] != 1) goto LAB_1428ae37f;
LAB_1428ae340:
    param_2[0xf] = param_1[2];
    if (param_1[9] == 1) goto LAB_1428ae385;
LAB_1428ae350:
    if (param_1[5] != 1) goto LAB_1428ae391;
LAB_1428ae356:
    param_2[0xd] = param_1[6];
    cVar2 = (char)param_1[0xd];
    if (cVar2 != '\0') goto LAB_1428ae399;
LAB_1428ae364:
    param_2[0xe] = param_1[0xe];
    iVar4 = param_1[3];
    if (param_1[0xb] == 0 && iVar4 == 0) goto LAB_1428ae3d4;
  }
  else {
    *(char *)((longlong)param_2 + 0x5d) = *(char *)((longlong)param_1 + 0x45);
    if (param_1[1] == 1) goto LAB_1428ae340;
LAB_1428ae37f:
    if (param_1[9] != 1) goto LAB_1428ae350;
LAB_1428ae385:
    param_2[0x15] = param_1[10];
    if (param_1[5] == 1) goto LAB_1428ae356;
LAB_1428ae391:
    cVar2 = (char)param_1[0xd];
    if (cVar2 == '\0') goto LAB_1428ae364;
LAB_1428ae399:
    if (cVar2 != '\x02') {
      uVar3 = *(undefined1 *)((longlong)param_1 + 0x35);
      uVar1 = *(undefined1 *)((longlong)param_1 + 0x36);
      *(undefined1 *)(param_2 + 7) = 2;
      *(undefined1 *)((longlong)param_2 + 0x1d) = uVar3;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0xe);
      *(undefined1 *)((longlong)param_2 + 0x5e) = uVar1;
    }
    iVar4 = param_1[3];
    if (param_1[0xb] == 0 && iVar4 == 0) goto LAB_1428ae3d4;
  }
  uVar6 = param_1[(ulonglong)(byte)((byte)iVar4 ^ 1) * 8 + 4];
  param_2[0x10] = uVar6;
  param_2[3] = uVar6;
LAB_1428ae3d4:
  if (*(char *)((longlong)param_1 + 0x47) == '\x04') {
    return;
  }
  *(char *)(param_2 + 6) = *(char *)((longlong)param_1 + 0x47);
  return;
}

