// Matched PDB: rapier3d::geometry::collider::ColliderBuilder::build
// VA 0x140cd4920, PDB extent 564 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: rapier3d::geometry::collider::ColliderBuilder::build
   Extent: 564 bytes. No whole-program auto-analysis. */

undefined8 * pdb_140cd4920(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iVar24;
  int iVar25;
  undefined8 *puVar26;
  int iVar27;
  
  plVar14 = *(longlong **)(param_2 + 4);
  uVar15 = *(undefined8 *)(param_2 + 6);
  LOCK();
  lVar3 = *plVar14;
  *plVar14 = *plVar14 + 1;
  UNLOCK();
  if (*plVar14 == 0 || SCARRY8(lVar3,1) != *plVar14 < 0) {
LAB_140cd4af0:
                    /* WARNING: Does not return */
    pcVar18 = (code *)invalidInstructionException();
    (*pcVar18)();
  }
  iVar1 = param_2[0x10];
  iVar2 = param_2[0x11];
  iVar24 = param_2[0x1e];
  uVar4 = *(undefined1 *)((longlong)param_2 + 0x79);
  iVar7 = param_2[0xc];
  iVar8 = param_2[0xd];
  iVar9 = param_2[0xe];
  iVar10 = param_2[0xf];
  iVar25 = param_2[0x1d];
  iVar11 = param_2[0x19];
  iVar12 = param_2[0x1a];
  cVar5 = *(char *)((longlong)param_2 + 0x77);
  uVar6 = *(undefined1 *)((longlong)param_2 + 0x76);
  iVar13 = *param_2;
  if ((iVar13 == 0) || (iVar13 == 1)) {
    iVar27 = param_2[1];
    puVar26 = *(undefined8 **)(param_2 + 2);
  }
  else {
    iVar27 = iVar10;
    pdb_14007ee60(param_1,param_2,iVar10,param_4,plVar14,uVar15);
    puVar26 = (undefined8 *)func_0x0001406abab0(0x2c,4);
    if (puVar26 == (undefined8 *)0x0) {
      pdb_142dc7e11(4,0x2c);
      goto LAB_140cd4af0;
    }
    puVar16 = *(undefined8 **)(param_2 + 2);
    uVar19 = *puVar16;
    uVar20 = puVar16[1];
    uVar21 = puVar16[2];
    uVar22 = puVar16[3];
    uVar23 = *(undefined8 *)((longlong)puVar16 + 0x24);
    *(undefined8 *)((longlong)puVar26 + 0x1c) = *(undefined8 *)((longlong)puVar16 + 0x1c);
    *(undefined8 *)((longlong)puVar26 + 0x24) = uVar23;
    puVar26[2] = uVar21;
    puVar26[3] = uVar22;
    *puVar26 = uVar19;
    puVar26[1] = uVar20;
  }
  *(undefined1 *)((longlong)param_1 + 0xac) = uVar6;
  param_1[2] = plVar14;
  param_1[3] = uVar15;
  *(int *)(param_1 + 4) = iVar13;
  *(int *)((longlong)param_1 + 0x24) = iVar27;
  param_1[5] = puVar26;
  *(undefined4 *)(param_1 + 6) = 0x1ff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  uVar15 = *(undefined8 *)(param_2 + 0x14);
  uVar19 = *(undefined8 *)(param_2 + 0x15);
  uVar20 = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar15;
  param_1[8] = uVar19;
  param_1[9] = uVar20;
  *(int *)((longlong)param_1 + 0x5c) = iVar1;
  *(int *)(param_1 + 0xc) = iVar2;
  *(char *)((longlong)param_1 + 100) = (char)iVar24;
  *(undefined1 *)((longlong)param_1 + 0x65) = uVar4;
  *(int *)(param_1 + 0xd) = iVar7;
  *(int *)((longlong)param_1 + 0x6c) = iVar8;
  *(int *)(param_1 + 0xe) = iVar9;
  *(int *)((longlong)param_1 + 0x74) = iVar10;
  *(int *)(param_1 + 0xf) = iVar11;
  *(int *)((longlong)param_1 + 0x7c) = iVar12;
  *(short *)(param_1 + 0x10) = (short)iVar25;
  *(byte *)((longlong)param_1 + 0x82) = cVar5 * '\x02' ^ 2;
  uVar15 = *(undefined8 *)(param_2 + 8);
  uVar19 = *(undefined8 *)(param_2 + 10);
  uVar17 = *(ulonglong *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(ulonglong *)((longlong)param_1 + 0x54) = uVar17 << 0x20 | uVar17 >> 0x20;
  *param_1 = uVar15;
  param_1[1] = uVar19;
  return param_1;
}

