// VA 0x140c2acc0, PDB extent 922 bytes
// country_core::resources::walls::wall_holes::WallHoleStorage::clone_and_reopen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::WallHoleStorage::clone_and_reopen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 922 */

undefined8 * pdb_140c2acc0(undefined8 *param_1,int *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong arg0;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uStack_98;
  byte *pbStack_90;
  undefined1 uStack_81;
  
  if (*param_2 == 1) {
    uVar5 = *(ulonglong *)(param_2 + 0xe);
    uVar4 = uVar5 * 0x14;
    if (0x666666666666666 < uVar5) goto LAB_140c2adb1;
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    if (uVar4 != 0) {
      pdb_14007ee60();
      uVar7 = 4;
      pbStack_90 = pub_1406abab0(uVar4,4);
      uStack_98 = uVar5;
      if (pbStack_90 != (byte *)0x0) goto joined_r0x000140c2ad50;
      goto LAB_140c2adb4;
    }
    pbStack_90 = (byte *)0x4;
    uStack_98 = 0;
joined_r0x000140c2ad50:
    if (uVar5 != 0) {
      pub_142e32760(pbStack_90,uVar6,uVar4);
    }
    uVar4 = *(ulonglong *)(param_2 + 6);
    arg0 = uVar4 * 0x14;
    if (0x666666666666666 < uVar4) {
      uVar7 = 0;
LAB_140c2ad81:
      pdb_142dc7e2a(uVar7,arg0);
      goto LAB_140c2ae2c;
    }
    iVar8 = param_2[0x10];
    iVar9 = param_2[0x11];
    iVar10 = param_2[0x12];
    iVar11 = param_2[0x13];
    iVar12 = param_2[0x14];
    iVar13 = param_2[0x15];
    iVar14 = param_2[0x16];
    iVar15 = param_2[0x17];
    iVar16 = param_2[8];
    uStack_81 = (undefined1)param_2[9];
    uVar6 = *(undefined8 *)(param_2 + 4);
    if (arg0 != 0) {
      pdb_14007ee60();
      uVar7 = 4;
      pbVar3 = pub_1406abab0(arg0,4);
      uVar2 = uVar4;
      if (pbVar3 != (byte *)0x0) goto joined_r0x000140c2aebe;
      goto LAB_140c2ad81;
    }
LAB_140c2af5f:
    pbVar3 = (byte *)0x4;
    uVar2 = 0;
joined_r0x000140c2aebe:
    if (uVar4 != 0) {
      pub_142e32760(pbVar3,uVar6,arg0);
    }
    param_1[1] = uStack_98;
    param_1[2] = pbStack_90;
    param_1[3] = uVar5;
    param_1[4] = uVar2;
    param_1[5] = pbVar3;
    param_1[6] = uVar4;
    *(int *)(param_1 + 7) = iVar16;
    *(undefined1 *)((longlong)param_1 + 0x3c) = uStack_81;
    *(int *)(param_1 + 8) = iVar8;
    *(int *)((longlong)param_1 + 0x44) = iVar9;
    *(int *)(param_1 + 9) = iVar10;
    *(int *)((longlong)param_1 + 0x4c) = iVar11;
    *(int *)(param_1 + 10) = iVar12;
    *(int *)((longlong)param_1 + 0x54) = iVar13;
    *(int *)(param_1 + 0xb) = iVar14;
    *(int *)((longlong)param_1 + 0x5c) = iVar15;
    *param_1 = 0;
    return param_1;
  }
  uVar5 = *(ulonglong *)(param_2 + 6);
  uVar4 = uVar5 * 0x14;
  if (uVar5 < 0x666666666666667) goto LAB_140c2adbf;
LAB_140c2adb1:
  uVar7 = 0;
LAB_140c2adb4:
  do {
    pdb_142dc7e2a(uVar7,uVar4);
LAB_140c2adbf:
    uVar6 = *(undefined8 *)(param_2 + 4);
    if (uVar4 == 0) {
      pbStack_90 = (byte *)0x4;
      uStack_98 = 0;
      break;
    }
    pdb_14007ee60();
    uVar7 = 4;
    pbStack_90 = pub_1406abab0(uVar4,4);
    uStack_98 = uVar5;
  } while (pbStack_90 == (byte *)0x0);
  if (uVar5 != 0) {
    pub_142e32760(pbStack_90,uVar6,uVar4);
  }
  uVar4 = *(ulonglong *)(param_2 + 0xc);
  arg0 = uVar4 * 0x14;
  if (uVar4 < 0x666666666666667) {
    iVar8 = param_2[0x10];
    iVar9 = param_2[0x11];
    iVar10 = param_2[0x12];
    iVar11 = param_2[0x13];
    iVar12 = param_2[0x14];
    iVar13 = param_2[0x15];
    iVar14 = param_2[0x16];
    iVar15 = param_2[0x17];
    iVar16 = param_2[0xe];
    uStack_81 = (undefined1)param_2[0xf];
    uVar6 = *(undefined8 *)(param_2 + 10);
    if (arg0 == 0) goto LAB_140c2af5f;
    pdb_14007ee60();
    uVar7 = 4;
    pbVar3 = pub_1406abab0(arg0,4);
    uVar2 = uVar4;
    if (pbVar3 != (byte *)0x0) goto joined_r0x000140c2aebe;
  }
  else {
    uVar7 = 0;
  }
  pdb_142dc7e2a(uVar7,arg0);
LAB_140c2ae2c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

