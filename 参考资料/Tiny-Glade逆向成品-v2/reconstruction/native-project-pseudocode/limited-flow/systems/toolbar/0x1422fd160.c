// VA 0x1422fd160, PDB extent 11927 bytes
// toolbar::menu::report_bug::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::report_bug::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 11927 */

void pdb_1422fd160(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10,ulonglong *param_11)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  code *pcVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong *unaff_RBX;
  undefined *puVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *unaff_RDI;
  undefined *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  int *piVar24;
  bool bVar25;
  undefined8 *in_stack_00000078;
  longlong *in_stack_00000080;
  longlong *plStack_3b8;
  ulonglong uStack_3b0;
  ulonglong uStack_3a8;
  longlong *plStack_1f8;
  ulonglong uStack_1f0;
  ulonglong uStack_1e8;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 uStack_75;
  undefined1 uStack_71;
  longlong *plStack_70;
  undefined1 uStack_66;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plStack_70 = (longlong *)*param_5;
  puVar17 = (undefined *)param_5[4];
  uStack_90 = *param_7;
  puVar14 = param_2;
  puStack_130 = param_1;
  cVar9 = pdb_140e94b40();
  puStack_80 = puVar17;
  if (cVar9 == '\0') {
    lStack_140 = 0;
    piVar24 = (int *)*param_3;
    iVar5 = *piVar24;
    goto joined_r0x0001422fd306;
  }
  unaff_RDI = (longlong *)0x1d;
  lVar11 = pdb_1422fca20(0x1d);
  piVar24 = (int *)&UNK_1434d7174;
  if (lVar11 == 1) {
    if ((undefined8 *)0x1d < puVar14) {
LAB_1422ff109:
      pdb_142dc8070(&UNK_1434d7174,0x1d,0);
LAB_1422ff129:
      pdb_142dc8070(&UNK_1434d7174,0x1d);
      pdb_142dc7e2a(1,0x13);
      goto LAB_1422ff22a;
    }
    uVar12 = pdb_1422fca20(puVar14);
    if ((uVar12 & 1) != 0) {
      if (0x1d < (longlong)puVar14 + 2U) goto LAB_1422ff129;
      unaff_RDI = (longlong *)(0x1b - (longlong)puVar14);
      piVar24 = (int *)((longlong)puVar14 + 0x1434d7176);
    }
  }
  puVar20 = &UNK_1434d7335;
  puVar17 = &UNK_1434d7308;
  do {
    bVar2 = puVar20[-1];
    uVar10 = (uint)(char)bVar2;
    if ((char)bVar2 < '\0') {
      bVar3 = puVar20[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar20[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar20 + -4;
          puVar20 = puVar20 + -4;
          uVar10 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar20 = puVar20 + -3;
          uVar10 = bVar4 & 0xf;
        }
        uVar10 = bVar3 & 0x3f | uVar10 << 6;
      }
      else {
        puVar20 = puVar20 + -2;
        uVar10 = bVar3 & 0x1f;
      }
      uVar10 = (uint)(bVar2 & 0x3f) | uVar10 << 6;
      if (uVar10 != 0x5c) goto LAB_1422fd2d8;
LAB_1422fd40d:
      puVar17 = puVar20 + -0x1434d7307;
      if ((undefined *)0x2d < puVar17) {
        pdb_142dc8070(&UNK_1434d7308,0x2d,puVar17,0x2d,&UNK_1434d71f8);
        goto LAB_1422ff109;
      }
      unaff_RBX = (ulonglong *)(0x2d - (longlong)puVar17);
      puVar17 = puVar20 + 1;
      goto LAB_1422fd42f;
    }
    puVar20 = puVar20 + -1;
    if (uVar10 == 0x5c) goto LAB_1422fd40d;
LAB_1422fd2d8:
    if (uVar10 == 0x2f) goto LAB_1422fd40d;
  } while (puVar20 != &UNK_1434d7308);
  unaff_RBX = (ulonglong *)0x2d;
LAB_1422fd42f:
  plVar13 = (longlong *)pdb_140e97000();
  if ((char)plVar13[0xd] != '\x01') goto LAB_1422fefbc;
LAB_1422fd43e:
  if (*plVar13 != 0) goto LAB_1422fefb0;
  *plVar13 = -1;
  uStack_88 = plVar13;
  uStack_138 = pdb_140e94f10(plVar13 + 1,piVar24,unaff_RDI,puVar17,unaff_RBX,1,0);
  *uStack_88 = *uStack_88 + 1;
  lStack_140 = 1;
  piVar24 = (int *)*param_3;
  iVar5 = *piVar24;
joined_r0x0001422fd306:
  if (iVar5 != 8) {
    uVar12 = *param_11;
    if (SBORROW8(0,uVar12)) goto LAB_1422fd5aa;
    if ((-0x7ffffffffffffffe < (longlong)uVar12) && (uVar12 != 0)) {
      pub_1406abac0((byte *)param_11[1],uVar12,1);
    }
    *param_11 = 0x8000000000000000;
    *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
    pdb_1409ec050(*param_9);
    puVar17 = (undefined *)*param_2;
    unaff_RDI = (longlong *)(puVar17 + 0x10);
    LOCK();
    bVar25 = puVar17[0x10] == '\0';
    if (bVar25) {
      puVar17[0x10] = '\x01';
    }
    UNLOCK();
    if (!bVar25) goto LAB_1422ff006;
    do {
      unaff_RBX = _DAT_143ca8f38;
      if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        uVar10 = 0;
        cVar9 = puVar17[0x11];
      }
      else {
        uVar10 = pdb_142dc79e0();
        uVar10 = uVar10 ^ 1;
        cVar9 = puVar17[0x11];
      }
      if (cVar9 != '\0') {
        uVar12 = uStack_3b0 >> 8;
        uStack_3b0 = CONCAT71((int7)uVar12,(char)uVar10);
        plStack_3b8 = unaff_RDI;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1434d70f8,0x2b,&plStack_3b8,&UNK_1434d7128,&UNK_1434d7278);
      }
      uVar12 = (ulonglong)uStack_88 >> 0x20;
      uStack_88 = (longlong *)CONCAT44((int)uVar12,uVar10);
      puStack_80 = puVar17 + 0x18;
      plStack_70 = unaff_RDI;
      if (*(int *)(puVar17 + 0x18) != 4) {
        pdb_14117d130(puVar17 + 0x18);
      }
      *(undefined8 *)(puVar17 + 0x18) = 4;
      unaff_RDI = (longlong *)(puVar17 + 0x10);
      if ((((char)uStack_88 == '\0') && ((*unaff_RBX & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
        puVar17[0x11] = 1;
      }
      LOCK();
      lVar11 = *unaff_RDI;
      *(char *)unaff_RDI = '\0';
      UNLOCK();
      if ((char)lVar11 == '\x02') {
        pdb_142dc6ca0(unaff_RDI);
      }
      *puStack_130 = 0;
LAB_1422fd5aa:
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      pdb_1409ec030(*param_9);
      if (lStack_140 == 0) {
        return;
      }
      plVar13 = (longlong *)pdb_140e97000();
      if (((char)plVar13[0xd] == '\x01') ||
         (plVar13 = (longlong *)pdb_142dcf3a0(plVar13,0), plVar13 != (longlong *)0x0)) {
        if (*plVar13 == 0) {
          *plVar13 = -1;
          uStack_88 = plVar13;
          pdb_140e95370(plVar13 + 1,uStack_138);
          *uStack_88 = *uStack_88 + 1;
          return;
        }
LAB_1422fefb0:
        plVar13 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_1422fefbc:
        plVar13 = (longlong *)pdb_142dcf3a0(plVar13,0);
        if (plVar13 != (longlong *)0x0) goto LAB_1422fd43e;
      }
      pdb_142dc7890(&UNK_1432a7ee8);
LAB_1422ff006:
      pdb_142dc6be0(unaff_RDI);
    } while( true );
  }
  lVar11 = in_stack_00000078[1];
  uVar12 = *(ulonglong *)*in_stack_00000078;
  plVar21 = (longlong *)0x0;
  plVar13 = (longlong *)(uVar12 - *(ulonglong *)(lVar11 + 0x18));
  if (uVar12 < *(ulonglong *)(lVar11 + 0x18)) {
    plVar13 = plVar21;
  }
  lVar18 = (longlong)plVar13 * 0x20 + *(longlong *)(lVar11 + 8);
  plVar6 = *(longlong **)(lVar11 + 0x10);
  plVar7 = *(longlong **)(lVar11 + 0x30);
  plVar22 = (longlong *)((longlong)plVar6 - (longlong)plVar13);
  if (plVar6 < plVar13) {
    plVar22 = plVar21;
  }
  if (plVar6 < plVar13) {
    lVar18 = 8;
  }
  plVar19 = (longlong *)(lVar18 + -0x20 + (longlong)plVar22 * 0x20);
  if (plVar6 <= plVar13) {
    plVar19 = plVar21;
  }
  plVar15 = (longlong *)(uVar12 - *(ulonglong *)(lVar11 + 0x38));
  if (uVar12 < *(ulonglong *)(lVar11 + 0x38)) {
    plVar15 = plVar21;
  }
  lVar18 = (longlong)plVar15 * 0x20 + *(longlong *)(lVar11 + 0x28);
  plVar23 = (longlong *)((longlong)plVar7 - (longlong)plVar15);
  if (plVar7 < plVar15) {
    plVar23 = plVar21;
  }
  if (plVar7 < plVar15) {
    lVar18 = 8;
  }
  plVar16 = (longlong *)(lVar18 + -0x20 + (longlong)plVar23 * 0x20);
  if (plVar7 <= plVar15) {
    plVar16 = plVar19;
  }
  plVar22 = (longlong *)((longlong)plVar23 + (longlong)plVar22);
  if (plVar13 < plVar6 || plVar15 < plVar7) {
    plVar22 = plVar21;
  }
  *(ulonglong *)*in_stack_00000078 = *(longlong *)(lVar11 + 0x40) - (longlong)plVar22;
  uStack_88 = param_4;
  if (plVar13 < plVar6 || plVar15 < plVar7) {
    if (SBORROW8(0,*plVar16)) {
      uVar12 = *param_11;
      if ((-0x7ffffffffffffffe < (longlong)uVar12) && (uVar12 != 0)) {
        pub_1406abac0((byte *)param_11[1],uVar12,1);
      }
      *param_11 = 0x8000000000000002;
    }
    else {
      pdb_140f60be0(&plStack_3b8);
      uStack_1e8 = uStack_3a8;
      plStack_1f8 = plStack_3b8;
      uStack_1f0 = uStack_3b0;
      uVar12 = *param_11;
      if ((-0x7ffffffffffffffe < (longlong)uVar12) && (uVar12 != 0)) {
        pub_1406abac0((byte *)param_11[1],uVar12,1);
      }
      param_11[2] = uStack_1e8;
      *param_11 = (ulonglong)plStack_1f8;
      param_11[1] = uStack_1f0;
    }
  }
  uStack_75 = pdb_1409ec020(*param_9);
  if (*in_stack_00000080 == 0) {
    uStack_71 = 0;
  }
  else {
    puVar14 = (undefined8 *)pdb_1406d0830();
    uStack_3b0 = pub_142e31f10();
    plStack_3b8 = (longlong *)*puVar14;
    LOCK();
    lVar11 = *plStack_3b8;
    *plStack_3b8 = *plStack_3b8 + 1;
    UNLOCK();
    if (*plStack_3b8 == 0 || SCARRY8(lVar11,1) != *plStack_3b8 < 0) {
LAB_1422ff22a:
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uStack_71 = pub_142e31e90(uStack_3b0);
    LOCK();
    *plStack_3b8 = *plStack_3b8 + -1;
    UNLOCK();
    if (*plStack_3b8 == 0) {
      pdb_140cb1c10(&plStack_3b8);
    }
  }
  uVar12 = 3;
  if ((longlong)*param_11 < 0) {
    uVar12 = *param_11;
  }
  uStack_66 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001422fd72d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1434d76ec + *(int *)(&UNK_1434d76ec + uVar12 * 4)))();
  return;
}

