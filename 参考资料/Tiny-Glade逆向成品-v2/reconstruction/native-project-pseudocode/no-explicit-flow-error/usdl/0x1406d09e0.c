// VA 0x1406d09e0, PDB extent 1022 bytes
// usdl::event::from_ll
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/event.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::event::from_ll
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/event.rs
   Extent: 1022 */

void pdb_1406d09e0(undefined1 *param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  byte *unaff_R13;
  int *piVar17;
  undefined8 uVar18;
  int *piStack_88;
  byte *pbStack_80;
  int *piStack_78;
  byte *pbStack_70;
  int *piStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  iVar15 = *param_2;
  if (iVar15 < 0x303) {
    if (iVar15 < 0x300) {
      if (iVar15 == 0x100) {
LAB_1406d0b62:
        *(int *)(param_1 + 4) = param_2[1];
        uVar7 = 1;
        goto LAB_1406d0d6a;
      }
      if (iVar15 == 0x200) {
        bVar6 = (char)param_2[3] - 1;
        iVar15 = 0;
        if (bVar6 < 0x12) {
          iVar15 = bVar6 + 1;
        }
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 1);
        *(int *)(param_1 + 0xc) = iVar15;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 4);
        uVar7 = 2;
        goto LAB_1406d0d6a;
      }
    }
    else {
      if (iVar15 == 0x300) {
        uVar18 = *(undefined8 *)(param_2 + 1);
        piVar17 = param_2;
        uVar9 = pdb_1406d1ad0(param_2[5]);
        uVar16 = (int)piVar17;
        uVar10 = pdb_1406d1b30(param_2[4]);
        uVar2 = *(ushort *)(param_2 + 6);
        cVar1 = *(char *)((longlong)param_2 + 0xd);
        *(undefined8 *)(param_1 + 4) = uVar18;
        *(undefined4 *)(param_1 + 0xc) = uVar9;
        *(int *)(param_1 + 0x10) = (int)piVar17;
        *(undefined4 *)(param_1 + 0x14) = uVar10;
        *(undefined4 *)(param_1 + 0x18) = uVar16;
        *(ushort *)(param_1 + 2) = uVar2 & 0xffc3;
        param_1[1] = cVar1 != '\0';
        uVar7 = 3;
        goto LAB_1406d0d6a;
      }
      if (iVar15 == 0x301) {
        uVar18 = *(undefined8 *)(param_2 + 1);
        piVar17 = param_2;
        uVar9 = pdb_1406d1ad0(param_2[5]);
        uVar16 = (int)piVar17;
        uVar10 = pdb_1406d1b30(param_2[4]);
        uVar2 = *(ushort *)(param_2 + 6);
        cVar1 = *(char *)((longlong)param_2 + 0xd);
        *(undefined8 *)(param_1 + 4) = uVar18;
        *(undefined4 *)(param_1 + 0xc) = uVar9;
        *(int *)(param_1 + 0x10) = (int)piVar17;
        *(undefined4 *)(param_1 + 0x14) = uVar10;
        *(undefined4 *)(param_1 + 0x18) = uVar16;
        *(ushort *)(param_1 + 2) = uVar2 & 0xffc3;
        param_1[1] = cVar1 != '\0';
        uVar7 = 4;
        goto LAB_1406d0d6a;
      }
    }
LAB_1406d0bb3:
    *(int *)(param_1 + 4) = iVar15;
    uVar7 = 0;
    goto LAB_1406d0d6a;
  }
  switch(iVar15) {
  case 0x400:
    iVar3 = param_2[8];
    iVar4 = param_2[2];
    iVar5 = param_2[3];
    iVar15 = param_2[5];
    *(int *)(param_1 + 4) = param_2[1];
    *(int *)(param_1 + 8) = iVar4;
    *(int *)(param_1 + 0xc) = iVar5;
    *(int *)(param_1 + 0x10) = iVar15;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 6);
    *(int *)(param_1 + 0x1c) = iVar3;
    uVar7 = 6;
    break;
  case 0x401:
    iVar15 = param_2[3];
    uVar18 = *(undefined8 *)(param_2 + 1);
    uVar8 = pdb_14100a890((char)param_2[4]);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0x12);
    *(undefined8 *)(param_1 + 4) = uVar18;
    *(int *)(param_1 + 0xc) = iVar15;
    param_1[2] = uVar8;
    param_1[1] = uVar7;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 5);
    uVar7 = 7;
    break;
  case 0x402:
    iVar15 = param_2[3];
    uVar18 = *(undefined8 *)(param_2 + 1);
    uVar8 = pdb_14100a890((char)param_2[4]);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0x12);
    *(undefined8 *)(param_1 + 4) = uVar18;
    *(int *)(param_1 + 0xc) = iVar15;
    param_1[2] = uVar8;
    param_1[1] = uVar7;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 5);
    uVar7 = 8;
    break;
  case 0x403:
    iVar15 = param_2[5];
    uVar18 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0xc) = uVar18;
    *(int *)(param_1 + 0x14) = iVar15;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 7);
    uVar7 = 9;
    break;
  default:
    if (iVar15 == 0x303) {
      uVar18 = *(undefined8 *)(param_2 + 1);
      lVar11 = pub_142e32b70(param_2 + 3);
      pdb_140f601a0(&piStack_88,param_2 + 3,lVar11 + 1);
      pbVar13 = pbStack_80;
      if (SBORROW8(0,(longlong)piStack_88)) {
        if ((longlong)piStack_78 < 0) {
          piVar17 = (int *)0x0;
LAB_1406d0c7d:
          piVar14 = piVar17;
          pdb_142dc7e2a(piVar17,piStack_78);
          pbVar13 = pbStack_80;
          param_2 = piStack_78;
          pbStack_70 = unaff_R13;
          piStack_68 = piVar14;
          goto LAB_1406d0d1f;
        }
        if (piStack_78 == (int *)0x0) {
          pbVar13 = (byte *)0x1;
          piStack_78 = (int *)0x0;
          piStack_88 = (int *)0x0;
        }
        else {
          pdb_14007ee60(-(longlong)piStack_88);
          piVar17 = (int *)0x1;
          pbVar13 = pub_1406abab0((ulonglong)piStack_78,1);
          if (pbVar13 == (byte *)0x0) goto LAB_1406d0c7d;
          pub_142e32760(pbVar13,pbStack_80,piStack_78);
          piStack_88 = piStack_78;
        }
      }
      *(undefined8 *)(param_1 + 4) = uVar18;
      *(int **)(param_1 + 0x10) = piStack_88;
      *(byte **)(param_1 + 0x18) = pbVar13;
      *(int **)(param_1 + 0x20) = piStack_78;
      uVar7 = 5;
    }
    else {
      if (iVar15 != 0x1000) goto LAB_1406d0bb3;
      pbVar13 = *(byte **)(param_2 + 2);
      lVar11 = pub_142e32b70(pbVar13);
      pdb_140f601a0(&piStack_88,pbVar13,lVar11 + 1);
      piVar17 = piStack_78;
      pbStack_70 = pbStack_80;
      piStack_68 = piStack_88;
      if (SBORROW8(0,(longlong)piStack_88)) {
        if ((longlong)piStack_78 < 0) {
          uVar18 = 0;
LAB_1406d0b57:
          pdb_142dc7e2a(uVar18,piStack_78);
          goto LAB_1406d0b62;
        }
        if (piStack_78 == (int *)0x0) {
          pbStack_70 = (byte *)0x1;
          piStack_68 = (int *)0x0;
          piVar17 = (int *)0x0;
        }
        else {
          pdb_14007ee60();
          uVar18 = 1;
          pbVar12 = pub_1406abab0((ulonglong)piStack_78,1);
          if (pbVar12 == (byte *)0x0) goto LAB_1406d0b57;
          pub_142e32760(pbVar12,pbStack_80,piStack_78);
          piStack_68 = piStack_78;
          pbStack_70 = pbVar12;
        }
      }
LAB_1406d0d1f:
      pdb_14100a900(pbVar13);
      *(int **)(param_1 + 0x10) = piStack_68;
      *(byte **)(param_1 + 0x18) = pbStack_70;
      *(int **)(param_1 + 0x20) = piVar17;
      *(ulonglong *)(param_1 + 4) = CONCAT44(param_2[4],param_2[1]);
      uVar7 = 10;
    }
  }
LAB_1406d0d6a:
  *param_1 = uVar7;
  return;
}

