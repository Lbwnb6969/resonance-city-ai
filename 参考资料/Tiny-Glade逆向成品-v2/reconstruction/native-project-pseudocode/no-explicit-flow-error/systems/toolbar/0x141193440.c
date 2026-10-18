// VA 0x141193440, PDB extent 2426 bytes
// toolbar::menu::save_error::ui::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/save_error.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::save_error::ui::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/save_error.rs
   Extent: 2426 */

void pdb_141193440(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte *arg0;
  code *pcVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined1 *arg0_00;
  byte *pbVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uStackX_8;
  undefined8 auStackX_10 [3];
  undefined8 uStack_48;
  
  uStack_48 = 0x141193456;
  lVar7 = pdb_142d7c6d0();
  lVar7 = -lVar7;
  *(undefined8 *)(&stack0x00002470 + lVar7) = 0xfffffffffffffffe;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193482;
  pdb_140a939a0(&stack0x00002430 + lVar7,param_1 + 0xa0);
  *(undefined8 *)(&stack0x00002468 + lVar7) = *(undefined8 *)(&stack0x00002438 + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411934a3;
  pdb_140a3cb00(&stack0x00001cc0 + lVar7,*(undefined8 *)(&stack0x00002438 + lVar7),
                *(undefined8 *)(&stack0x00002440 + lVar7));
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411934bd;
  pub_142e32760(&stack0x00000730 + lVar7,&stack0x00001cc0 + lVar7,0x730);
  lVar15 = *(longlong *)(&stack0x00000730 + lVar7);
  if (lVar15 == 2) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411934d6;
    pdb_140f36c40(&stack0x00000738 + lVar7);
  }
  else {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411934ef;
    pub_142e32760((longlong)auStackX_10 + lVar7 + -0x10,&stack0x00001cc8 + lVar7,0x728);
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193505;
  pub_142e32760(&stack0x00001598 + lVar7,(longlong)auStackX_10 + lVar7 + -0x10,0x728);
  *(undefined8 *)(&stack0x00000730 + lVar7) = 2;
  *(undefined8 *)(&stack0x00000e60 + lVar7) = 2;
  *(longlong *)(&stack0x00001590 + lVar7) = lVar15;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193535;
  pdb_1411b40c0(&stack0x00002418 + lVar7,&stack0x00000730 + lVar7);
  if (*(ulonglong *)(&stack0x00002430 + lVar7) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193554;
    pub_1406abac0(*(byte **)(&stack0x00002468 + lVar7),*(ulonglong *)(&stack0x00002430 + lVar7),1);
  }
  uVar13 = *(ulonglong *)(&stack0x00002428 + lVar7);
  *(undefined1 **)(&stack0x00000730 + lVar7) = &stack0x00002467 + lVar7;
  if (1 < uVar13) {
    if (uVar13 < 0x15) {
      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193a78;
      pdb_1411b8270(*(undefined8 *)(&stack0x00002420 + lVar7),uVar13,1,&stack0x00000730 + lVar7);
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193b21;
      pdb_142321730(*(undefined8 *)(&stack0x00002420 + lVar7),uVar13,&stack0x00000730 + lVar7);
    }
  }
  uVar11 = 0x19;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x14119358b;
  uVar8 = pdb_140dc6290(&UNK_14329f1a9,0x19);
  arg0_00 = &stack0x00000730 + lVar7;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411935a7;
  uVar9 = pdb_140f67ab0(uVar13,arg0_00,0x14);
  if ((longlong)arg0_00 < 0) {
    uVar14 = 0;
LAB_1411935b3:
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411935be;
    pdb_142dc7e2a(uVar14,arg0_00);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (arg0_00 == (undefined1 *)0x0) {
    pbVar10 = (byte *)0x1;
  }
  else {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411935d1;
    pdb_14007ee60();
    uVar14 = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411935e4;
    pbVar10 = pub_1406abab0((ulonglong)arg0_00,1);
    if (pbVar10 == (byte *)0x0) goto LAB_1411935b3;
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411935fa;
    pub_142e32760(pbVar10,uVar9,arg0_00);
  }
  *(undefined1 **)(&stack0x00002468 + lVar7) = arg0_00;
  *(undefined1 **)(&stack0xfffffffffffffff0 + lVar7) = arg0_00;
  *(byte **)(&stack0x00002458 + lVar7) = pbVar10;
  *(byte **)(&stack0xffffffffffffffe8 + lVar7) = pbVar10;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar7) = 7;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x14119363f;
  pdb_141185a10(&stack0x00000730 + lVar7,uVar8,uVar11,&UNK_14329f1c2);
  *(undefined1 **)((longlong)auStackX_10 + lVar7 + -0x10) = &stack0x00000730 + lVar7;
  *(code **)((longlong)&uStackX_8 + lVar7) = pdb_140001020;
  lVar15 = (longlong)auStackX_10 + lVar7 + -0x10;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193669;
  pdb_140f60760(&stack0x00001cc0 + lVar7,&UNK_14329f1c9,lVar15);
  if (*(ulonglong *)(&stack0x00000730 + lVar7) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193688;
    pub_1406abac0(*(byte **)(&stack0x00000738 + lVar7),*(ulonglong *)(&stack0x00000730 + lVar7),1);
  }
  if (*(ulonglong *)(&stack0x00002468 + lVar7) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411936a6;
    pub_1406abac0(*(byte **)(&stack0x00002458 + lVar7),*(ulonglong *)(&stack0x00002468 + lVar7),1);
    uVar13 = *(ulonglong *)(&stack0x00002428 + lVar7);
  }
  *(undefined4 *)(&stack0x00002430 + lVar7) = *(undefined4 *)(&stack0x00001cc0 + lVar7);
  *(undefined4 *)(&stack0x00002434 + lVar7) = *(undefined4 *)(&stack0x00001cc4 + lVar7);
  *(undefined4 *)(&stack0x00002438 + lVar7) = *(undefined4 *)(&stack0x00001cc8 + lVar7);
  *(undefined4 *)(&stack0x0000243c + lVar7) = *(undefined4 *)(&stack0x00001ccc + lVar7);
  *(undefined8 *)(&stack0x00002440 + lVar7) = *(undefined8 *)(&stack0x00001cd0 + lVar7);
  if (uVar13 == 0) {
    lVar15 = *(longlong *)(&stack0x00002440 + lVar7);
    goto LAB_141193836;
  }
  uVar2 = *(undefined4 *)(*(longlong *)(&stack0x00002420 + lVar7) + 0x20);
  uVar3 = *(undefined4 *)(*(longlong *)(&stack0x00002420 + lVar7) + 0x24);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411936ec;
  pdb_140dea010(&stack0x00002408 + lVar7,uVar2,uVar3);
  *(uint *)(&stack0xffffffffffffffe0 + lVar7) =
       (uint)*(ushort *)(&stack0x00002414 + lVar7) * 0x100 +
       (uint)(byte)(&stack0x00002416)[lVar7] * 0x1000000 + 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x14119372a;
  pdb_142321560(&stack0x00000730 + lVar7,&UNK_14329f2d8,*(undefined4 *)(&stack0x00002408 + lVar7),
                *(undefined8 *)(&stack0x0000240c + lVar7));
  if (*(int *)(&stack0x00000730 + lVar7) == 1) {
    *(undefined8 *)(&stack0x00001cd0 + lVar7) = *(undefined8 *)(&stack0x00000748 + lVar7);
    *(undefined4 *)(&stack0x00001cc0 + lVar7) = *(undefined4 *)(&stack0x00000738 + lVar7);
    *(undefined4 *)(&stack0x00001cc4 + lVar7) = *(undefined4 *)(&stack0x0000073c + lVar7);
    *(undefined4 *)(&stack0x00001cc8 + lVar7) = *(undefined4 *)(&stack0x00000740 + lVar7);
    *(undefined4 *)(&stack0x00001ccc + lVar7) = *(undefined4 *)(&stack0x00000744 + lVar7);
    *(undefined **)(&stack0xffffffffffffffe0 + lVar7) = &UNK_14329f318;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193ac5;
    pdb_142dc8170(&UNK_14329eaa8,0x2b,&stack0x00001cc0 + lVar7,&UNK_14329ea88);
  }
  *(undefined8 *)((longlong)auStackX_10 + lVar7) = *(undefined8 *)(&stack0x00000748 + lVar7);
  uVar2 = *(undefined4 *)(&stack0x0000073c + lVar7);
  uVar3 = *(undefined4 *)(&stack0x00000740 + lVar7);
  uVar6 = *(undefined4 *)(&stack0x00000744 + lVar7);
  puVar1 = (undefined4 *)((longlong)auStackX_10 + lVar7 + -0x10);
  *puVar1 = *(undefined4 *)(&stack0x00000738 + lVar7);
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar6;
  uVar9 = 0x1a;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x14119375f;
  uVar8 = pdb_140dc6290(&UNK_14329f330);
  *(undefined8 *)(&stack0x000023f8 + lVar7) = uVar8;
  *(undefined8 *)(&stack0x00002400 + lVar7) = uVar9;
  *(undefined1 **)(&stack0x00000730 + lVar7) = &stack0x000023f8 + lVar7;
  *(code **)(&stack0x00000738 + lVar7) = pdb_1402ed400;
  *(longlong *)(&stack0x00000740 + lVar7) = lVar15;
  *(code **)(&stack0x00000748 + lVar7) = pdb_140001020;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411937b2;
  pdb_140f60760(&stack0x00001cc0 + lVar7,&UNK_14329f34a,&stack0x00000730 + lVar7);
  uVar16 = *(ulonglong *)(&stack0x00001cc0 + lVar7);
  pbVar10 = *(byte **)(&stack0x00001cc8 + lVar7);
  uVar4 = *(ulonglong *)(&stack0x00001cd0 + lVar7);
  lVar15 = *(longlong *)(&stack0x00002440 + lVar7);
  if ((ulonglong)(*(longlong *)(&stack0x00002430 + lVar7) - lVar15) < uVar4) {
    *(byte **)(&stack0x00002458 + lVar7) = pbVar10;
    *(ulonglong *)(&stack0x00002468 + lVar7) = uVar16;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar7) = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193af7;
    pdb_142d7f1b0(&stack0x00002430 + lVar7,lVar15,uVar4,1);
    lVar15 = *(longlong *)(&stack0x00002440 + lVar7);
    uVar16 = *(ulonglong *)(&stack0x00002468 + lVar7);
    pbVar10 = *(byte **)(&stack0x00002458 + lVar7);
LAB_1411937e7:
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411937fc;
    pub_142e32760(*(longlong *)(&stack0x00002438 + lVar7) + lVar15,pbVar10,uVar4);
  }
  else if (uVar4 != 0) goto LAB_1411937e7;
  if (uVar16 != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193812;
    pub_1406abac0(pbVar10,uVar16,1);
  }
  uVar16 = *(ulonglong *)((longlong)auStackX_10 + lVar7 + -0x10);
  if (uVar16 != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x14119382a;
    pub_1406abac0(*(byte **)((longlong)&uStackX_8 + lVar7),uVar16,1);
  }
  lVar15 = lVar15 + uVar4;
LAB_141193836:
  pbVar10 = *(byte **)(&stack0x00002438 + lVar7);
  *(byte **)((longlong)auStackX_10 + lVar7 + -0x10) = pbVar10;
  *(longlong *)((longlong)&uStackX_8 + lVar7) = lVar15;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x14119384e;
  uVar8 = pdb_140bbbcb0((longlong)auStackX_10 + lVar7 + -0x10);
  *(undefined8 *)(&stack0x00000730 + lVar7) = uVar8;
  *(undefined4 *)(&stack0x00000738 + lVar7) = _DAT_14329c260;
  *(undefined4 *)(&stack0x0000073c + lVar7) = _UNK_14329c264;
  *(undefined4 *)(&stack0x00000740 + lVar7) = _UNK_14329c268;
  *(undefined4 *)(&stack0x00000744 + lVar7) = _UNK_14329c26c;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193870;
  uVar8 = pdb_1400affa0(&stack0x00000730 + lVar7);
  *(undefined8 *)(&stack0x00000730 + lVar7) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(&stack0x00000738 + lVar7) = uVar8;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x14119388f;
  uVar8 = pdb_1400b0130(&stack0x00000730 + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411938a2;
  pdb_14072caa0(&stack0x00000730 + lVar7,param_2,uVar8);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411938b1;
  uVar8 = pdb_14116ee90(&stack0x00000730 + lVar7,0);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411938c0;
  pdb_14119b6b0(uVar8,pbVar10,lVar15);
  *(undefined8 *)(&stack0x00001cd0 + lVar7) = *(undefined8 *)(&stack0x00000740 + lVar7);
  *(undefined4 *)(&stack0x00001cc0 + lVar7) = *(undefined4 *)(&stack0x00000730 + lVar7);
  *(undefined4 *)(&stack0x00001cc4 + lVar7) = *(undefined4 *)(&stack0x00000734 + lVar7);
  *(undefined4 *)(&stack0x00001cc8 + lVar7) = *(undefined4 *)(&stack0x00000738 + lVar7);
  *(undefined4 *)(&stack0x00001ccc + lVar7) = *(undefined4 *)(&stack0x0000073c + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411938e9;
  lVar15 = pdb_14116e180(&stack0x00001cc0 + lVar7);
  *(undefined4 *)(lVar15 + 600) = 0x7b5a51ff;
  *(undefined8 *)(&stack0x00000740 + lVar7) = *(undefined8 *)(&stack0x00001cd0 + lVar7);
  *(undefined4 *)(&stack0x00000730 + lVar7) = *(undefined4 *)(&stack0x00001cc0 + lVar7);
  *(undefined4 *)(&stack0x00000734 + lVar7) = *(undefined4 *)(&stack0x00001cc4 + lVar7);
  *(undefined4 *)(&stack0x00000738 + lVar7) = *(undefined4 *)(&stack0x00001cc8 + lVar7);
  *(undefined4 *)(&stack0x0000073c + lVar7) = *(undefined4 *)(&stack0x00001ccc + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x14119391c;
  uVar8 = pdb_14116e180(&stack0x00000730 + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193927;
  pdb_140cb68f0(uVar8,2);
  *(undefined8 *)(&stack0x00001cd0 + lVar7) = *(undefined8 *)(&stack0x00000740 + lVar7);
  *(undefined4 *)(&stack0x00001cc0 + lVar7) = *(undefined4 *)(&stack0x00000730 + lVar7);
  *(undefined4 *)(&stack0x00001cc4 + lVar7) = *(undefined4 *)(&stack0x00000734 + lVar7);
  *(undefined4 *)(&stack0x00001cc8 + lVar7) = *(undefined4 *)(&stack0x00000738 + lVar7);
  *(undefined4 *)(&stack0x00001ccc + lVar7) = *(undefined4 *)(&stack0x0000073c + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193950;
  uVar8 = pdb_14116e180(&stack0x00001cc0 + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x14119395b;
  pdb_140cb5a70(uVar8,3);
  *(undefined8 *)(&stack0x00000740 + lVar7) = *(undefined8 *)(&stack0x00001cd0 + lVar7);
  *(undefined4 *)(&stack0x00000730 + lVar7) = *(undefined4 *)(&stack0x00001cc0 + lVar7);
  *(undefined4 *)(&stack0x00000734 + lVar7) = *(undefined4 *)(&stack0x00001cc4 + lVar7);
  *(undefined4 *)(&stack0x00000738 + lVar7) = *(undefined4 *)(&stack0x00001cc8 + lVar7);
  *(undefined4 *)(&stack0x0000073c + lVar7) = *(undefined4 *)(&stack0x00001ccc + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193984;
  uVar8 = pdb_14116e180(&stack0x00000730 + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193995;
  pdb_14119b2b0(uVar8,_DAT_1430241b0);
  *(undefined8 *)(&stack0x00001cd0 + lVar7) = *(undefined8 *)(&stack0x00000740 + lVar7);
  *(undefined4 *)(&stack0x00001cc0 + lVar7) = *(undefined4 *)(&stack0x00000730 + lVar7);
  *(undefined4 *)(&stack0x00001cc4 + lVar7) = *(undefined4 *)(&stack0x00000734 + lVar7);
  *(undefined4 *)(&stack0x00001cc8 + lVar7) = *(undefined4 *)(&stack0x00000738 + lVar7);
  *(undefined4 *)(&stack0x00001ccc + lVar7) = *(undefined4 *)(&stack0x0000073c + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411939be;
  uVar8 = pdb_14116e180(&stack0x00001cc0 + lVar7);
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411939cf;
  pdb_140cb5df0(uVar8,_DAT_142fa5c70);
  if (*(ulonglong *)(&stack0x00002430 + lVar7) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1411939ea;
    pub_1406abac0(pbVar10,*(ulonglong *)(&stack0x00002430 + lVar7),1);
  }
  pbVar10 = *(byte **)(&stack0x00002420 + lVar7);
  if (uVar13 != 0) {
    pbVar12 = pbVar10 + 8;
    do {
      uVar16 = *(ulonglong *)(pbVar12 + -8);
      if (uVar16 != 0) {
        arg0 = *(byte **)pbVar12;
        *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193a20;
        pub_1406abac0(arg0,uVar16,1);
      }
      pbVar12 = pbVar12 + 0x30;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*(longlong *)(&stack0x00002418 + lVar7) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x141193a44;
    pub_1406abac0(pbVar10,*(longlong *)(&stack0x00002418 + lVar7) * 0x30,8);
  }
  return;
}

