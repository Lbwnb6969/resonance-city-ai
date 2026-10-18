// VA 0x14194ab00, PDB extent 7473 bytes
// country_core::resources::history::color_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/color_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000141951107) overlaps instruction at (ram,0x000141951105)
    */
/* WARNING: Removing unreachable block (ram,0x0001419509f1) */
/* WARNING: Removing unreachable block (ram,0x0001419501d6) */
/* WARNING: Removing unreachable block (ram,0x00014195113e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::color_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/color_edit.rs
   Extent: 7473 */

ulonglong *
pdb_14194ab00(ulonglong *param_1,undefined1 (*param_2) [16],code *UNRECOVERED_JUMPTABLE,
             ulonglong param_4)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined7 uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [15];
  byte bVar9;
  char cVar10;
  uint uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined7 uVar20;
  char *pcVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  char cVar21;
  byte bVar22;
  undefined *puVar23;
  undefined1 (**ppauVar24) [16];
  undefined1 (*pauVar25) [16];
  byte bVar26;
  undefined2 uVar27;
  undefined7 uVar29;
  undefined8 *unaff_RBX;
  int iVar30;
  int **ppiVar31;
  int **ppiVar32;
  undefined8 *puVar33;
  int **ppiVar34;
  int **ppiVar35;
  int **ppiVar36;
  int **ppiVar37;
  int **ppiVar38;
  int **ppiVar39;
  int **ppiVar40;
  undefined8 *unaff_RBP;
  undefined4 uVar42;
  byte *pbVar41;
  undefined *in_R10;
  undefined2 in_FS;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar43;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  undefined1 in_XMM0 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 (*apauStackX_10 [3]) [16];
  undefined1 auStack_8ef9 [36161];
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_180;
  int *piStack_168;
  int aiStack_160 [2];
  undefined1 (*pauStack_158) [16];
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte abStack_138 [8];
  undefined8 uStack_130;
  undefined1 (*pauStack_128) [16];
  undefined8 uStack_120;
  byte abStack_118 [8];
  char cStack_110;
  char cStack_10f;
  undefined6 uStack_10e;
  byte bStack_108;
  undefined7 uStack_107;
  char cStack_100;
  undefined1 uStack_ff;
  uint6 uStack_fe;
  undefined1 (*pauStack_f8) [16];
  char cStack_f0;
  undefined1 uStack_ef;
  undefined6 uStack_ee;
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined2 auStack_d0 [4];
  undefined1 (*pauStack_c8) [16];
  undefined2 auStack_c0 [4];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined2 auStack_90 [4];
  undefined1 (*pauStack_88) [16];
  undefined2 auStack_80 [4];
  undefined1 (*pauStack_78) [16];
  undefined1 (*pauStack_70) [16];
  undefined1 (*pauStack_68) [16];
  undefined1 (*pauStack_60) [16];
  undefined1 (*pauStack_58) [16];
  undefined2 auStack_50 [4];
  undefined1 (*pauStack_48) [16];
  undefined2 auStack_40 [4];
  undefined1 (*pauStack_38) [16];
  undefined1 (*pauStack_30) [16];
  undefined1 (*pauStack_28) [16];
  uint uVar11;
  char *pcVar15;
  uint uVar28;
  
  ppiVar39 = &piStack_168;
  ppiVar36 = &piStack_168;
  ppiVar37 = &piStack_168;
  ppiVar35 = &piStack_168;
  ppiVar40 = &piStack_168;
  ppiVar34 = &piStack_168;
  ppiVar31 = &piStack_168;
  ppiVar32 = &piStack_168;
  bVar22 = 5;
  if (2 < (byte)param_1[1]) {
    bVar22 = (byte)param_1[1] - 3;
  }
  puVar23 = &UNK_14335b198;
  lVar13 = (longlong)*(int *)(&UNK_14335b198 + (ulonglong)bVar22 * 4);
  puVar14 = (ulonglong *)(&UNK_14335b198 + lVar13);
  bVar43 = puVar14 == (ulonglong *)0x0;
  bVar9 = (byte)puVar14;
  uVar11 = (uint)puVar14;
  uVar20 = (undefined7)((ulonglong)puVar14 >> 8);
  bVar26 = (byte)param_2;
  uVar27 = SUB82(param_2,0);
  uVar28 = (uint)param_2;
  iVar30 = (int)&piStack_168;
  uVar42 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar29 = (undefined7)((ulonglong)param_2 >> 8);
  pauVar25 = param_2;
  ppiVar38 = &piStack_168;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar22) {
  case 0:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a4a9,4);
    if (lVar13 != 0) {
pdb_142db8fb0:
      *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBP;
      *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0xfffffffffffffffe;
      *(undefined8 *)((longlong)register0x00000020 + -0x38) = 1;
      *(longlong *)((longlong)register0x00000020 + -0x30) = lVar13;
      *(undefined8 *)((longlong)register0x00000020 + -0x20) = 0;
      *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0;
      *(undefined **)((longlong)register0x00000020 + -0x60) = &UNK_142db8fda;
      pdb_14007ee60();
      *(undefined **)((longlong)register0x00000020 + -0x60) = &UNK_142db8fe9;
      puVar14 = (ulonglong *)pub_1406abab0(0x28,8);
      if (puVar14 != (ulonglong *)0x0) {
        puVar14[4] = *(ulonglong *)((longlong)register0x00000020 + -0x18);
        uVar19 = *(ulonglong *)((longlong)register0x00000020 + -0x38);
        uVar18 = *(ulonglong *)((longlong)register0x00000020 + -0x30);
        uVar7 = *(ulonglong *)((longlong)register0x00000020 + -0x20);
        puVar14[2] = *(ulonglong *)((longlong)register0x00000020 + -0x28);
        puVar14[3] = uVar7;
        *puVar14 = uVar19;
        puVar14[1] = uVar18;
        return puVar14;
      }
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x60) = &UNK_142db901a;
      pdb_142dc7e11(8,0x28);
    }
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    uStack_130._0_1_ = '\0';
    uStack_130._1_1_ = 1;
    pauStack_128 = param_2;
    puVar14 = (ulonglong *)pdb_141b7a020(&uStack_130,&UNK_14335a4ad,7,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)uStack_130 == '\x01') {
code_r0x00014194bf73:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14335b0f8,0x28,&UNK_14335b168);
    }
    puVar14 = (ulonglong *)pdb_141b7dc80(&uStack_130,&UNK_14335a4b4,4,param_1 + 3);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(&uStack_130,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x1c));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&uStack_130;
    break;
  case 1:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a4ba,10);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    uStack_120._0_1_ = '\0';
    uStack_120._1_1_ = 1;
    abStack_118[0] = bVar26;
    abStack_118._1_7_ = uVar29;
    puVar14 = (ulonglong *)pdb_141b7a020(&uStack_120,&UNK_14335a4ad,7,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)uStack_120 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7dc80(&uStack_120,&UNK_14335a4b4,4,param_1 + 3);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(&uStack_120,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x1c));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&uStack_120;
    break;
  case 2:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a4c4,0xf);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    cStack_110 = '\0';
    cStack_10f = '\x01';
    bStack_108 = bVar26;
    uStack_107 = uVar29;
    puVar14 = (ulonglong *)pdb_141b7a020(&cStack_110,&UNK_14335a4ad,7,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if (cStack_110 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7dc80(&cStack_110,&UNK_14335a4b4,4,param_1 + 3);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(&cStack_110,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x1c));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&cStack_110;
    break;
  case 3:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a4d3,4);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    cStack_100 = '\0';
    uStack_ff = 1;
    pauStack_f8 = param_2;
    puVar14 = (ulonglong *)pdb_141b7a020(&cStack_100,&UNK_14335a4ad,7,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if (cStack_100 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7dc80(&cStack_100,&UNK_14335a4b4,4,param_1 + 3);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(&cStack_100,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x1c));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&cStack_100;
    break;
  case 4:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a4d7,4);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    cStack_f0 = '\0';
    uStack_ef = 1;
    pauStack_e8 = param_2;
    puVar14 = (ulonglong *)pdb_141b7a020(&cStack_f0,&UNK_14335a4ad,7,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if (cStack_f0 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7dc80(&cStack_f0,&UNK_14335a4b4,4,param_1 + 3);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(&cStack_f0,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x1c));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&cStack_f0;
    break;
  case 5:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a4db,8);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    pauStack_e0._0_2_ = 0x100;
    pauStack_d8 = param_2;
    puVar14 = (ulonglong *)pdb_141b7a020(&pauStack_e0,&UNK_14335a4ad,7,param_1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)pauStack_e0 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7f3c0(&pauStack_e0,&UNK_14335a4b4,4,param_1 + 1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_141952770(&pauStack_e0,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_e0;
    break;
  case 6:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a4e3,9);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    auStack_d0[0] = 0x100;
    pauStack_c8 = param_2;
    puVar14 = (ulonglong *)
              pdb_141b79730(auStack_d0,&UNK_14335a4ec,0xc,(int *)((longlong)param_1 + 0xc));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)auStack_d0[0] == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7dc80(auStack_d0,&UNK_14335a4b4,4,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(auStack_d0,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_d0;
    break;
  case 7:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a4f8,0xb);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    auStack_c0[0] = 0x100;
    pauStack_b8 = param_2;
    puVar14 = (ulonglong *)
              pdb_141b79730(auStack_c0,&UNK_14335a4ec,0xc,(int *)((longlong)param_1 + 0xc));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)auStack_c0[0] == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7dc80(auStack_c0,&UNK_14335a4b4,4,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(auStack_c0,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_c0;
    break;
  case 8:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a503,10);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    pauStack_b0._0_2_ = 0x100;
    pauStack_a8 = param_2;
    puVar14 = (ulonglong *)pdb_141b7a020(&pauStack_b0,&UNK_14335a4ad,7,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)pauStack_b0 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7dc80(&pauStack_b0,&UNK_14335a4b4,4,param_1 + 3);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(&pauStack_b0,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x1c));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_b0;
    break;
  case 9:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a50d,0xb);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    pauStack_a0._0_2_ = 0x100;
    pauStack_98 = param_2;
    puVar14 = (ulonglong *)pdb_141b79730(&pauStack_a0,&UNK_14335a4ec,0xc,param_1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)pauStack_a0 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)
              pdb_141b85940(&pauStack_a0,&UNK_14335a4b4,4,(int *)((longlong)param_1 + 4));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419528d0(&pauStack_a0,&UNK_14335a4b8,2,(char *)((longlong)param_1 + 5));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_a0;
    break;
  case 10:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a518,10);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    auStack_90[0] = 0x100;
    pauStack_88 = param_2;
    puVar14 = (ulonglong *)
              pdb_141b79730(auStack_90,&UNK_14335a4ec,0xc,(int *)((longlong)param_1 + 0xc));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)auStack_90[0] == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b82660(auStack_90,&UNK_14335a4b4,4,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526e0(auStack_90,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_90;
    break;
  case 0xb:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a522,0xc);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    auStack_80[0] = 0x100;
    pauStack_78 = param_2;
    puVar14 = (ulonglong *)pdb_141b79730(auStack_80,&UNK_14335a4ec,0xc,param_1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)auStack_80[0] == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b85940(auStack_80,&UNK_14335a4b4,4,(int *)((longlong)param_1 + 4))
    ;
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419528d0(auStack_80,&UNK_14335a4b8,2,(char *)((longlong)param_1 + 5));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_80;
    break;
  case 0xc:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a52e,0xe);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    uStack_140._0_1_ = 0;
    uStack_140._1_1_ = '\x01';
    abStack_138[0] = bVar26;
    abStack_138._1_7_ = uVar29;
    puVar14 = (ulonglong *)
              pdb_141b79730(&uStack_140,&UNK_14335a4ec,0xc,(int *)((longlong)param_1 + 0xc));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((byte)uStack_140 == 1) goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7d4b0(&uStack_140,&UNK_14335a53c,6,param_1 + 3);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)pdb_1419526b0(&uStack_140,&UNK_14335a4b4,4,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(&uStack_140,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&uStack_140;
    break;
  case 0xd:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a542,0xc);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    pauStack_70._0_2_ = 0x100;
    pauStack_68 = param_2;
    puVar14 = (ulonglong *)pdb_141b79730(&pauStack_70,&UNK_14335a4ec,0xc,param_1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)pauStack_70 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)
              pdb_141b7aaa0(&pauStack_70,&UNK_14335a4b4,4,(int *)((longlong)param_1 + 4));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_141952ad0(&pauStack_70,&UNK_14335a4b8,2,(char *)((longlong)param_1 + 5));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_70;
    break;
  case 0xe:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a54e,0xb);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    pauStack_60._0_2_ = 0x100;
    pauStack_58 = param_2;
    puVar14 = (ulonglong *)pdb_141b79730(&pauStack_60,&UNK_14335a4ec,0xc,param_1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)pauStack_60 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)
              pdb_141b85940(&pauStack_60,&UNK_14335a4b4,4,(int *)((longlong)param_1 + 4));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419528d0(&pauStack_60,&UNK_14335a4b8,2,(char *)((longlong)param_1 + 5));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_60;
    break;
  case 0xf:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a559,0xd);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    auStack_50[0] = 0x100;
    pauStack_48 = param_2;
    puVar14 = (ulonglong *)pdb_141b79730(auStack_50,&UNK_14335a4ec,0xc,param_1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)auStack_50[0] == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b79930(auStack_50,&UNK_14335a4b4,4,(int *)((longlong)param_1 + 4))
    ;
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_141952a60(auStack_50,&UNK_14335a4b8,2,(char *)((longlong)param_1 + 5));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_50;
    break;
  case 0x10:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a566,10);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    auStack_40[0] = 0x100;
    pauStack_38 = param_2;
    puVar14 = (ulonglong *)
              pdb_141b79730(auStack_40,&UNK_14335a4ec,0xc,(int *)((longlong)param_1 + 0xc));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)auStack_40[0] == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)pdb_141b7dc80(auStack_40,&UNK_14335a4b4,4,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(auStack_40,&UNK_14335a4b8,2,(int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_40;
    break;
  case 0x11:
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    lVar13 = pdb_14054e5c0(param_2,*param_2 + 8,&UNK_14335a570,0xc);
    if (lVar13 != 0) goto pdb_142db8fb0;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
    plVar4[2] = lVar13 + 1;
    plVar4 = *(longlong **)*param_2;
    lVar13 = plVar4[2];
    if (*plVar4 == lVar13) {
      uStack_148 = 1;
      pdb_142d7f1b0(plVar4,lVar13,1,1);
      lVar13 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar13) = 0x7b;
    plVar4[2] = lVar13 + 1;
    pauStack_30._0_2_ = 0x100;
    pauStack_28 = param_2;
    puVar14 = (ulonglong *)pdb_141b79730(&pauStack_30,&UNK_14335a4ec,0xc,param_1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if ((char)pauStack_30 == '\x01') goto code_r0x00014194bf73;
    puVar14 = (ulonglong *)
              pdb_141b836f0(&pauStack_30,&UNK_14335a4b4,4,(int *)((longlong)param_1 + 4));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_141952830(&pauStack_30,&UNK_14335a4b8,2,(char *)((longlong)param_1 + 5));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_30;
    break;
  case 0x12:
    return puVar14;
  case 0x13:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    puVar14 = (ulonglong *)CONCAT71(uVar20,bVar9 + 0xb1);
    ppiVar32 = (int **)aiStack_160;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar9 + 0xb1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    piStack_168 = (int *)0x14194e3ab;
    puVar14 = (ulonglong *)
              pdb_1419526e0(&pauStack_a8,&UNK_14335aa06,5,(int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_a8;
    goto code_r0x00014194eed7;
  case 0x14:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    pcVar15 = (char *)(CONCAT71(uVar20,bVar9 + 0xb1) + -0x7b);
    *pcVar15 = *pcVar15 + (char)_UNK_14335b198 + -0x68 + (0x4e < bVar9);
    (*param_2)[0] = (byte)(*param_2)[0] >> 5 | (*param_2)[0] << 3;
    func_0x00018994df06();
    puVar14 = (ulonglong *)pdb_141952800(auStack_90,&UNK_14335aa06,5,(uint)param_1 + 0x11);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_90;
    goto code_r0x00014194eed7;
  case 0x15:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    pcVar15 = (char *)(CONCAT71(uVar20,bVar9 + 0xb1) + -0x7b);
    *pcVar15 = *pcVar15 + -0x68;
    (*param_2)[0] = (byte)(*param_2)[0] >> 5 | (*param_2)[0] << 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x16:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    goto code_r0x00014194db8d;
  case 0x17:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    puVar14 = (ulonglong *)CONCAT71(uVar20,bVar9 + 0xb1);
    if ((int)puVar14 != 0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419528d0(apauStackX_10,&UNK_14335aa06,5,(char *)((longlong)param_1 + 0x11));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = apauStackX_10;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x18:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    puVar14 = (ulonglong *)CONCAT71(uVar20,bVar9 + 0xb1);
    if ((int)puVar14 != 0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_141952680(auStack_50,&UNK_14335aa06,5,(char *)((longlong)param_1 + 0x11));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_50;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x19:
    puVar14 = (ulonglong *)pdb_1419526e0(&cStack_100,0x4335aa06,5);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    if (((char)param_1[3] != '\0') &&
       (puVar14 = (ulonglong *)pdb_141952940(&cStack_100,param_1 + 3), puVar14 != (ulonglong *)0x0))
    {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&cStack_100;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x1a:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    cVar10 = in(0x3b);
    puVar14 = (ulonglong *)CONCAT71(uVar20,cVar10);
    *(char *)puVar14 = (char)*puVar14 + cVar10;
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_141952860(auStack_80,&UNK_14335aa06,5,(char *)((longlong)param_1 + 0x11));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_80;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x1b:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    puVar14 = (ulonglong *)CONCAT71(uVar20,bVar9 + 0xb1);
    *(char *)puVar14 = (char)*puVar14 + (char)UNRECOVERED_JUMPTABLE;
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    piStack_168 = (int *)0x14194de01;
    puVar14 = (ulonglong *)
              pdb_141952a30(&pauStack_58,&UNK_14335aa06,5,(int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_58;
    ppiVar32 = (int **)aiStack_160;
    goto code_r0x00014194eed7;
  case 0x1c:
    *piStack_168 = *piStack_168 + (int)piStack_168;
    *(char *)((longlong)piStack_168 + -0x73) = *(char *)((longlong)piStack_168 + -0x73) + -0x68;
    piStack_168 = aiStack_160;
    puVar14 = (ulonglong *)pdb_141952a90();
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    abStack_118[0] = (byte)(param_1 + 8);
    abStack_118._1_7_ = (undefined7)((ulonglong)(param_1 + 8) >> 8);
    puVar14 = (ulonglong *)pdb_141952980(&stack0xfffffffffffffff0,abStack_118);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&stack0xfffffffffffffff0;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x1d:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    bVar22 = bVar9 + 0xb1;
    puVar14 = (ulonglong *)CONCAT71(uVar20,bVar22);
    if ((POPCOUNT(bVar22) & 1U) == 0) {
      *(byte *)puVar14 = (char)*puVar14 + bVar22;
      if (puVar14 != (ulonglong *)0x0) {
        return puVar14;
      }
      puVar14 = (ulonglong *)
                pdb_141952710(auStack_40,&UNK_14335aa06,5,(char *)((longlong)param_1 + 0x11));
      if (puVar14 != (ulonglong *)0x0) {
        return puVar14;
      }
      ppauVar24 = (undefined1 (**) [16])auStack_40;
      ppiVar32 = &piStack_168;
      goto code_r0x00014194eed7;
    }
    *(char *)((longlong)puVar14 + 0x39) =
         *(char *)((longlong)puVar14 + 0x39) + -0x68 + (0x4e < bVar9);
    cVar21 = (char)*(undefined4 *)*param_2 + -0x68;
    *(char *)((longlong)puVar14 + -0x75) = *(char *)((longlong)puVar14 + -0x75) + cVar21;
    cVar10 = bVar9 + 0xb2;
    pcVar15 = (char *)CONCAT71(uVar20,cVar10);
    if ((POPCOUNT(cVar10) & 1U) == 0) {
      unaff_RBX[2] = (ulonglong)((int)pcVar15 + 1);
      lVar13 = pdb_14054e5c0(param_2,param_2,&UNK_14335aad2,0x1b);
      if (lVar13 != 0) {
        register0x00000020 = (BADSPACEBASE *)&stack0x00000040;
        goto pdb_142db8fb0;
      }
      plVar4 = *(longlong **)*param_2;
      lVar13 = plVar4[2];
      if (*plVar4 == lVar13) {
        uStack_148 = 1;
        pdb_142d7f1b0(plVar4,lVar13,1,1);
        lVar13 = plVar4[2];
      }
      *(undefined1 *)(plVar4[1] + lVar13) = 0x3a;
      plVar4[2] = lVar13 + 1;
      unaff_RBX = *(undefined8 **)*param_2;
      pauVar25 = (undefined1 (*) [16])unaff_RBX[2];
      ppiVar31 = &piStack_168;
      if ((undefined1 (*) [16])*unaff_RBX == pauVar25) {
        uStack_148 = 1;
        pdb_142d7f1b0(unaff_RBX,pauVar25,1,1);
        pauVar25 = (undefined1 (*) [16])unaff_RBX[2];
        ppiVar31 = &piStack_168;
      }
    }
    else {
      ppiVar31 = (int **)&stack0xfffffffffffffe90;
      pcVar15[0x39] = pcVar15[0x39] + cVar21 + (0xfe < bVar22);
      *pcVar15 = *pcVar15 + cVar10;
    }
    (*pauVar25)[unaff_RBX[1]] = 0x7b;
    unaff_RBX[2] = *pauVar25 + 1;
    *(undefined2 *)((longlong)ppiVar31 + 0xf8) = 0x100;
    *(undefined1 (**) [16])((longlong)ppiVar31 + 0x100) = param_2;
    *(undefined8 *)((longlong)ppiVar31 + -8) = 0x14194db84;
    puVar14 = (ulonglong *)
              pdb_141b7a020((undefined1 *)((longlong)ppiVar31 + 0xf8),&UNK_14335a9ea,10,param_1 + 1)
    ;
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
code_r0x00014194db8d:
    *(undefined8 *)((longlong)ppiVar31 + -8) = 0x14194dbab;
    puVar14 = (ulonglong *)
              pdb_1419526e0((undefined1 *)((longlong)ppiVar31 + 0xf8),&UNK_14335aa00,6,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    *(undefined8 *)((longlong)ppiVar31 + -8) = 0x14194dbd5;
    puVar14 = (ulonglong *)
              pdb_1419526e0((undefined1 *)((longlong)ppiVar31 + 0xf8),&UNK_14335aa06,5,
                            (int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])((longlong)ppiVar31 + 0xf8);
    ppiVar32 = ppiVar31;
    goto code_r0x00014194eed7;
  case 0x1e:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1f:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    puVar14 = (ulonglong *)((ulonglong)unaff_RBX & 0xffffffff);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)puVar14);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419529c0(auStack_d0,&UNK_14335aa06,5,(int *)((longlong)param_1 + 0x2c));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_d0;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x20:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    puVar14 = (ulonglong *)CONCAT71(uVar20,bVar9 + 0xb1);
    *(char *)puVar14 = (char)*puVar14 + (char)UNRECOVERED_JUMPTABLE;
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)pdb_1419527d0(&pauStack_28,&UNK_14335aa06,5,param_1 + 8);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_28;
    ppiVar32 = (int **)&stack0xfffffffffffffe90;
    goto code_r0x00014194eed7;
  case 0x21:
    puVar14 = (ulonglong *)pdb_1419526b0(&UNK_14335b198,param_2,8);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)pdb_1419526b0(&pauStack_128,&UNK_14335aa31,0xd,param_1 + 0x11);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = &pauStack_128;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x22:
    puVar14 = (ulonglong *)pdb_1419527a0(&UNK_14335b198,param_2,6,param_1);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)pdb_1419527a0(&cStack_110,&UNK_14335aa06,5,param_1 + 0xe);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&cStack_110;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x23:
    puVar14 = (ulonglong *)pdb_1419526b0(&UNK_14335b198,param_2,8);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)
              pdb_1419526b0(abStack_138,&UNK_14335aa31,0xd,(int *)((longlong)param_1 + 0x8c));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])abStack_138;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x24:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    pcVar16 = (char *)CONCAT71(uVar20,bVar9 + 0xb1);
    LOCK();
    uVar11 = *(uint *)((longlong)pcVar16 * 2);
    *(uint *)((longlong)pcVar16 * 2) = uVar28;
    pbVar41 = (byte *)CONCAT44(uVar42,uVar11);
    UNLOCK();
    pcVar15 = pcVar16 + -0x7b;
    cVar10 = *pcVar15;
    *pcVar15 = *pcVar15 + -0x68;
    cVar21 = *pcVar15;
    *pbVar41 = *pbVar41 >> 5 | *pbVar41 << 3;
    if (SCARRY1(cVar10,-0x68) != cVar21 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar16 = *pcVar16 + bVar9 + 0xb1;
    puVar14 = (ulonglong *)
              pdb_1419526e0(auStack_c0,&UNK_14335aa06,5,(int *)((longlong)param_1 + 0x14));
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])auStack_c0;
    ppiVar32 = &piStack_168;
    goto code_r0x00014194eed7;
  case 0x25:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    lVar13 = CONCAT71(uVar20,bVar9 + 0xb1);
    out(uVar27,bVar9 + 0xb1);
    *(char *)(lVar13 + -0x7b) = *(char *)(lVar13 + -0x7b) + -0x68;
    (*param_2)[0] = (byte)(*param_2)[0] >> 5 | (*param_2)[0] << 3;
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + (int)lVar13;
    *(char *)(lVar13 + -0x7d) = *(char *)(lVar13 + -0x7d) + -0x68;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x26:
    _UNK_14335b198 = _UNK_14335b198 << 0x18 | _UNK_14335b198 >> 8;
    (&UNK_14335b11d)[lVar13] = (&UNK_14335b11d)[lVar13] + -0x68;
    (*param_2)[0] = (byte)(*param_2)[0] >> 5 | (*param_2)[0] << 3;
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    puVar14 = (ulonglong *)pdb_141952b30(&cStack_f0,param_1 + 0xe);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    puVar14 = (ulonglong *)pdb_141952900(&cStack_f0,param_1 + 2);
    if (puVar14 != (ulonglong *)0x0) {
      return puVar14;
    }
    ppauVar24 = (undefined1 (**) [16])&cStack_f0;
    ppiVar32 = &piStack_168;
code_r0x00014194eed7:
    *(undefined8 *)((longlong)ppiVar32 + -8) = 0x14194eedc;
    pdb_141952b70(ppauVar24);
    return (ulonglong *)0x0;
  case 0x27:
    if (((param_2[0xc][0xf] != '\0') && (*(int *)(param_2[0xc] + 8) != 3)) &&
       (*(int *)(param_2[0xc] + 8) != 5)) {
      uStack_1b8 = 0x14194fed4;
      pauStack_158 = param_2;
      puVar14 = (ulonglong *)pdb_140a7a6f0(*(undefined8 *)param_2[0xc]);
      return puVar14;
    }
    return puVar14;
  case 0x28:
    pdb_141bea7a0((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x29:
    pdb_141be9020((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x2a:
    pdb_141be9920((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x2b:
    goto code_r0x00014194ff2c;
  case 0x2c:
    pdb_141bebbb0((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x2d:
    pdb_141be9610((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x2e:
    pdb_141beb9e0((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x2f:
    pdb_141be9d50((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x30:
    pdb_141beabc0((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x31:
    pdb_141be9220((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x32:
    uVar19 = (ulonglong)param_1 & 0xffffffff;
code_r0x00014194ff01:
    *param_1 = uVar19;
    *(char *)(param_1 + 1) = '\x15';
    return param_1;
  case 0x33:
    pdb_141bebcb0((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x34:
    pdb_141be9320((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x35:
    param_1 = (ulonglong *)0x4335b198;
    pdb_141be7fb0(&uStack_120);
    uVar19 = CONCAT62(uStack_120._2_6_,CONCAT11(uStack_120._1_1_,(char)uStack_120));
    if (abStack_118[0] == 7) goto code_r0x00014194ff01;
    uStack_130._1_1_ = (undefined1)uStack_107;
    uStack_130._2_6_ = SUB76(uStack_107,1);
    uStack_140._1_1_ = (char)abStack_118._1_7_;
    uStack_140._2_6_ = SUB76(abStack_118._1_7_,1);
    uStack_140._0_1_ = abStack_118[0];
    puVar14 = (ulonglong *)((ulonglong)CONCAT11(uStack_120._1_1_,(char)uStack_120) & 0xff);
    goto code_r0x00014194ff2c;
  case 0x36:
    pdb_141beb0c0((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x37:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x38:
    pdb_141beb8e0((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x39:
    return puVar14;
  case 0x3a:
  case 0x3b:
  case 0x3c:
    if (((ulonglong)(byte)(*param_2)[8] ^ 0x72 | 0x14335b198) == 0) {
      (&UNK_14335b199)[lVar13] = 6;
      goto code_r0x00014195047a;
    }
    goto LAB_141950484;
  case 0x3d:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    bVar43 = *(short *)(*param_2 + 8) == 0x6c6c && *(longlong *)*param_2 == 0x61576e65646f6f57;
    goto code_r0x0001419502f1;
  case 0x3e:
    ppiVar34 = (int **)&stack0xfffffffffffffe90;
    out((int)*param_1,uVar27);
    out(*(int *)((longlong)param_1 + 4),uVar27);
    if (*(longlong *)(*param_2 + 6) == 0x726f6c6f43646f6f &&
        *(undefined **)*param_2 == &UNK_14335b198) {
      (&UNK_14335b199)[lVar13] = 0xc;
      goto code_r0x00014195047a;
    }
    goto LAB_141950484;
  case 0x3f:
    cRam00000001b796f8d2 = cRam00000001b796f8d2 + bVar9;
    if (cRam00000001b796f8d2 == '\0') {
      (&UNK_14335b199)[lVar13] = 3;
    }
    else {
      ppiVar34 = &piStack_168;
      if (*(int *)*param_2 != 0x666f6f52) goto LAB_141950484;
      (&UNK_14335b199)[lVar13] = 4;
    }
    goto code_r0x00014195047a;
  case 0x40:
    pdb_141beadc0(param_1,param_2,UNRECOVERED_JUMPTABLE,3);
    return param_1;
  case 0x41:
    bVar43 = false;
code_r0x0001419502f1:
    if (bVar43) {
      (&UNK_14335b199)[lVar13] = 1;
    }
    else if (*(short *)(*param_2 + 8) == 0x7265 && *(longlong *)*param_2 == 0x626d6974666c6148) {
      (&UNK_14335b199)[lVar13] = 8;
    }
    else if (*(short *)(*param_2 + 8) == 0x7373 && *(longlong *)*param_2 == 0x656e746867697242) {
      (&UNK_14335b199)[lVar13] = 10;
    }
    else {
      puVar23 = (undefined *)(*(ulonglong *)*param_2 ^ 0x6c6f43636967614d);
      param_4 = (ulonglong)*(ushort *)(*param_2 + 8) ^ 0x726f;
code_r0x000141950354:
      ppiVar34 = &piStack_168;
      if (param_4 != 0 || puVar23 != (undefined *)0x0) goto LAB_141950484;
      (&UNK_14335b199)[lVar13] = 0x10;
    }
code_r0x00014195047a:
    *(char *)puVar14 = '\0';
    return puVar14;
  case 0x42:
    out((int)*param_1,uVar27);
    out(*(int *)((longlong)param_1 + 4),uVar27);
    ppiVar34 = (int **)&stack0xfffffffffffffe90;
    if (*(longlong *)(*param_2 + 3) == 0x6465666f6f527269 &&
        *(undefined **)*param_2 == &UNK_14335b198) {
      (&UNK_14335b199)[lVar13] = 0xe;
      goto code_r0x00014195047a;
    }
    goto LAB_141950484;
  case 0x43:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] & 0x98;
    puStack_1b0 = &stack0xfffffffffffffe90;
    puVar33 = (undefined8 *)&stack0xfffffffffffffe90;
    cVar10 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar33 = puVar33 + -1;
      *puVar33 = *unaff_RBP;
      cVar10 = cVar10 + -1;
    } while ('\0' < cVar10);
    ppiVar34 = (int **)auStack_8ef9;
    goto LAB_141950484;
  case 0x44:
    goto code_r0x000141950354;
  case 0x45:
    ppiVar34 = (int **)(ulonglong)(uint)(_UNK_14335b204 * 0x54a334c);
    if ((param_4 | 0x14335b198) == 0) {
      (&UNK_14335b199)[lVar13] = 0xf;
      goto code_r0x00014195047a;
    }
LAB_141950484:
    *(undefined8 *)((longlong)ppiVar34 + -8) = 0x1419504a2;
    uVar17 = pdb_142d8f140(param_2,UNRECOVERED_JUMPTABLE,&UNK_14335a598,0x14);
    *(undefined8 *)(&UNK_14335b1a0 + lVar13) = uVar17;
    *(char *)puVar14 = '\x01';
    return puVar14;
  case 0x46:
    puVar14 = (ulonglong *)((ulonglong)puVar14 & 0xffffffffffffff40);
    goto LAB_141950514;
  case 0x47:
  case 0x48:
  case 0x4b:
  case 0x4c:
    *(int *)*param_2 = (int)*param_1;
    *(uint *)((longlong)param_1 + 5) = uVar11;
    param_1 = (ulonglong *)((longlong)param_1 + 4);
    goto LAB_141950514;
  case 0x49:
    param_1[3] = (ulonglong)pauStack_f8;
    param_1[4] = CONCAT62(uStack_ee,CONCAT11(uStack_ef,cStack_f0));
    *(undefined1 (*) [16])(param_1 + 1) = in_XMM0;
    uVar19 = 0x8000000000000000;
    goto LAB_141950522;
  case 0x4a:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    bVar22 = (*param_2)[0];
    (*param_2)[0] = (*param_2)[0] + -0x68;
    *(uint *)(param_1 + 1) = (int)param_1[1] + uVar11 + (uint)(0x67 < bVar22);
    uVar19 = 0x8000000000000001;
    goto LAB_141950522;
  case 0x4d:
    *(int *)(&UNK_14335b123 + lVar13) = *(int *)(&UNK_14335b123 + lVar13) + -1;
    param_1[4] = (ulonglong)puVar14 & 0xffffffffffffff58;
    param_1[2] = CONCAT62(uStack_120._2_6_,CONCAT11(uStack_120._1_1_,(char)uStack_120));
    param_1[3] = CONCAT71(abStack_118._1_7_,abStack_118[0]);
    *param_1 = CONCAT62(uStack_130._2_6_,CONCAT11(uStack_130._1_1_,(char)uStack_130));
    param_1[1] = (ulonglong)pauStack_128;
    return param_1;
  case 0x4e:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    return puVar14;
  case 0x4f:
    cRam000000012aaa94a4 = cRam000000012aaa94a4 + -0x68;
    uRama49842058d4c01a4 = uVar11;
    *(int *)(&UNK_14335b125 + lVar13) = *(int *)(&UNK_14335b125 + lVar13) + 0x4335b198;
    *(undefined2 *)((longlong)puVar14 + (longlong)unaff_RBX * 4) = in_FS;
    goto code_r0x00014195076b;
  case 0x50:
  case 0x51:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
    pcVar5 = (code *)swi(3);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x57:
    return (ulonglong *)CONCAT71(uVar20,bVar9 + 0x81);
  case 0x58:
    (&UNK_14335b199)[lVar13] = 0x98;
    *(char *)puVar14 = '\0';
    return puVar14;
  case 0x59:
    uRam00000001447e399b = uRam00000001447e399b | (uint)param_1;
    *(char *)puVar14 = '\0';
    return puVar14;
  case 0x5a:
    puVar14 = (ulonglong *)(ulonglong)(uint)(int)(short)puVar14;
code_r0x00014195076b:
    *(char *)puVar14 = (char)*puVar14 + (char)puVar14;
    puVar14 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar14 >> 8),(char)puVar14 + -0x4f);
    uVar42 = in(uVar27);
    *(undefined4 *)*param_2 = uVar42;
    *(int *)((longlong)param_1 + 1) = (int)puVar14;
LAB_141950514:
    param_1[1] = (ulonglong)puVar14;
    uVar19 = 0x8000000000000002;
LAB_141950522:
    *param_1 = uVar19;
    return param_1;
  case 0x5b:
                    /* WARNING: Could not recover jumptable at 0x0001419507bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar14 = (ulonglong *)(*UNRECOVERED_JUMPTABLE)();
    return puVar14;
  case 0x5c:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    (&UNK_14335b199)[lVar13] = 2;
    *(char *)puVar14 = '\0';
    return puVar14;
  case 0x5d:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x5e:
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
code_r0x0001419509b8:
    (&UNK_14335b199)[lVar13] = 3;
    *(char *)puVar14 = '\0';
    return puVar14;
  case 0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x60:
    if (bVar43) goto code_r0x0001419509ab;
    puVar14 = (ulonglong *)(ulonglong)(uVar11 ^ *(uint *)(*param_2 + 3));
    if (((ulonglong)UNRECOVERED_JUMPTABLE | 0x14335b198) == 0) {
      *(char *)((longlong)puVar14 + 1) = '\x01';
      *(char *)puVar14 = '\0';
      return puVar14;
    }
    puVar23 = (undefined *)(*(ulonglong *)*param_2 ^ 0x6c6c61665f77656e);
    UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong *)(*param_2 + 3) ^ 0x66666f6c6c61665f);
  case 0x68:
    out((int)*param_1,uVar27);
    if (UNRECOVERED_JUMPTABLE == *(code **)(*param_2 + 3) && puVar23 == (undefined *)0x0) {
      *(char *)((longlong)puVar14 + 1) = '\x04';
      *(char *)puVar14 = '\0';
      return puVar14;
    }
LAB_1419509a6:
    *(char *)((longlong)puVar14 + 1) = '\x05';
code_r0x0001419509ab:
    *(char *)puVar14 = '\0';
    return puVar14;
  case 0x61:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x62:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 99:
    uVar27 = CONCAT11(0xc0,bVar26);
    goto LAB_141950a0b;
  case 100:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x65:
    (&UNK_14335b119)[lVar13] = (&UNK_14335b119)[lVar13] | 0x98;
    while (puVar23 != (undefined *)0x0) {
      puVar23 = puVar23 + -1;
      uVar2 = in(uVar27);
      (*pauVar25)[0] = uVar2;
      pauVar25 = (undefined1 (*) [16])(*pauVar25 + 1);
    }
    out((int)*param_1,uVar27);
    if (param_2 == (undefined1 (*) [16])0x0) goto code_r0x0001419509b8;
    goto LAB_1419509a6;
  case 0x66:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x67:
    if ((uVar28 | 0x4335b198) == 0) {
      (&UNK_14335b199)[lVar13] = 2;
      *(char *)puVar14 = '\0';
      return puVar14;
    }
    goto LAB_1419509a6;
  case 0x69:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x6a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6b:
    (*param_2)[0] = (*param_2)[0] + -0x68;
    uVar27 = CONCAT11(0x4c,bVar26);
    puVar14 = (ulonglong *)CONCAT62(uStack_120._2_6_,CONCAT11(uStack_120._1_1_,(char)uStack_120));
LAB_141950a0b:
    pauVar25 = (undefined1 (*) [16])CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar27);
    auVar8[7] = cStack_110;
    auVar8._0_7_ = abStack_118._1_7_;
    auVar8[8] = cStack_10f;
    auVar8._9_6_ = uStack_10e;
    in_XMM0[0xf] = bStack_108;
    in_XMM0._0_15_ = auVar8;
    uVar11 = in_XMM0._12_4_;
    in_XMM1._1_7_ = uStack_107;
    in_XMM1[0] = bStack_108;
    in_XMM1[8] = cStack_100;
    in_XMM1[9] = uStack_ff;
    in_XMM1._10_6_ = uStack_fe;
    uVar28 = (uint)(uStack_fe >> 0x10);
    uStack_130._1_1_ = (undefined1)uStack_107;
    uStack_130._2_6_ = SUB76(uStack_107,1);
    pauStack_128 = in_XMM1._8_8_;
    uStack_140._1_1_ = (char)abStack_118._1_7_;
    uStack_140._2_6_ = SUB76(abStack_118._1_7_,1);
    abStack_138._1_7_ = auVar8._8_7_;
    uStack_140._0_1_ = 0x98;
    uVar19 = (ulonglong)puVar14 & 0xff;
    puVar23 = &UNK_14335b308;
    uVar18 = (ulonglong)*(int *)(&UNK_14335b308 + uVar19 * 4);
    puVar14 = (ulonglong *)(&UNK_14335b308 + uVar18);
    cVar10 = (char)puVar14;
    uVar12 = (uint)puVar14;
    uVar20 = (undefined7)((ulonglong)puVar14 >> 8);
    cVar21 = (char)((uint6)uStack_10e >> 8);
    cVar49 = (char)((uint6)uStack_10e >> 0x10);
    cVar50 = (char)((uint6)uStack_10e >> 0x18);
    cVar51 = (char)((uint6)uStack_10e >> 0x20);
    cVar52 = (char)((uint6)uStack_10e >> 0x28);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar19) {
    case 0:
      pdb_141bea180(param_1,&uStack_140,&UNK_14335ae68,4);
      return param_1;
    case 1:
      pdb_141bea8a0(param_1,&uStack_140,&UNK_14335aec0,7);
      return param_1;
    case 2:
      pdb_141be8d10(param_1,&uStack_140,&UNK_14335af48,6);
      return param_1;
    case 3:
      pdb_141be9420(param_1,&uStack_140,&UNK_14335afa8,4);
      return param_1;
    case 4:
      pdb_141beb2c0(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 5:
      UNRECOVERED_JUMPTABLE = (code *)&UNK_14335afe8;
      param_2 = (undefined1 (*) [16])&uStack_140;
code_r0x000141950c2c:
      pdb_141be89e0(param_1,param_2,UNRECOVERED_JUMPTABLE,3);
      return param_1;
    case 6:
      pdb_141be8af0(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 7:
      UNRECOVERED_JUMPTABLE = (code *)&UNK_14335afe8;
      param_2 = (undefined1 (*) [16])&uStack_140;
code_r0x000141950ba0:
      pdb_141be9c40(param_1,param_2,UNRECOVERED_JUMPTABLE,3);
      return param_1;
    case 8:
      UNRECOVERED_JUMPTABLE = (code *)&UNK_14335afe8;
      param_2 = (undefined1 (*) [16])&uStack_140;
code_r0x000141950cdb:
      *(undefined8 *)((longlong)ppiVar35 + -8) = 0x141950ce9;
      pdb_141be9e50(param_1,param_2,UNRECOVERED_JUMPTABLE,3);
      return param_1;
    case 9:
      pdb_141bec190(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 10:
      pdb_141be9710(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 0xb:
      pdb_141be88d0(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 0xc:
      pdb_141be9b30(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 0xd:
      pdb_141be9a20(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 0xe:
      pdb_141bea070(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 0xf:
      pdb_141be9f60(param_1,&uStack_140,&UNK_14335b018,3);
      return param_1;
    case 0x10:
      pdb_141be87c0(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 0x11:
      pdb_141be8c00(param_1,&uStack_140,&UNK_14335b048,4);
      return param_1;
    case 0x12:
      pdb_141beb5d0(param_1,&uStack_140,&UNK_14335b088,3);
      puVar14 = param_1;
code_r0x000141950cab:
      return puVar14;
    case 0x13:
    case 0x15:
      pdb_141beaab0(param_1,&uStack_140,&UNK_14335b0b8,3);
      return param_1;
    case 0x14:
      pdb_141bea590(param_1,&uStack_140,&UNK_14335afe8,3);
      return param_1;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x26:
    case 0x29:
      pbVar41 = (byte *)(unaff_RBX + 0x1ecc034);
      *pbVar41 = *pbVar41 & (byte)uVar27;
      if (*pbVar41 != 0) {
        *(byte *)(unaff_RBX + 0x1ecc034) = *(char *)(unaff_RBX + 0x1ecc034) - (byte)uVar27;
      }
code_r0x0001419510bc:
      ppiVar40 = &piStack_168;
      if ((ushort)((ushort)(SUB161(in_XMM0 >> 7,0) & 1) |
                   (ushort)(SUB161(in_XMM0 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(in_XMM0 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(in_XMM0 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(in_XMM0 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(in_XMM0 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(in_XMM0 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(in_XMM0 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(in_XMM0 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(in_XMM0 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(in_XMM0 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(in_XMM0 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(in_XMM0 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(in_XMM0 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(in_XMM0 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(in_XMM0[0xf] >> 7) << 0xf) == 0xffff) {
        *(char *)((longlong)puVar14 + 1) = '\x04';
        goto code_r0x000141951160;
      }
      break;
    case 0x1a:
      if ((*pauVar25)[4] == 'h' && *(int *)*pauVar25 == 0x70726f4d) {
code_r0x000141950f17:
        *(char *)((longlong)puVar14 + 1) = '\x12';
        goto code_r0x000141951160;
      }
      break;
    case 0x1b:
      puVar14 = (ulonglong *)CONCAT71(uVar20,cVar10 + (char)*puVar14);
      *(char *)((longlong)puVar14 + -0x47) = *(char *)((longlong)puVar14 + -0x47) + '\b';
      ppiVar36 = (int **)&stack0xfffffffffffffe90;
      uVar2 = in(uVar27);
      (*param_2)[0] = uVar2;
      puVar23 = (undefined *)(*(ulonglong *)*pauVar25 ^ 0x14335b308);
      param_4 = 0x6e6f69746176656c;
code_r0x000141950ee6:
      if (param_4 == *(ulonglong *)(*pauVar25 + 7) && puVar23 == (undefined *)0x0) {
        *(char *)((longlong)puVar14 + 1) = '\x06';
        goto code_r0x000141951160;
      }
      ppiVar40 = ppiVar36;
      if (*(longlong *)(*pauVar25 + 7) == 0x6870726f4d646574 &&
          *(longlong *)*pauVar25 == 0x7461636572706544) goto code_r0x000141950f17;
      break;
    case 0x1c:
      *(char *)puVar14 = (char)*puVar14 + cVar10;
      ppiVar40 = &piStack_168;
      if (*(longlong *)(*pauVar25 + 5) == 0x657275736f6c636e &&
          *(longlong *)*pauVar25 == 0x6c636e456b72614d) {
        (&UNK_14335b309)[uVar18] = 0x13;
        goto code_r0x000141950e45;
      }
      break;
    case 0x1d:
      param_4 = (ulonglong)*(ushort *)(*pauVar25 + 8) ^ 0x6c6c;
code_r0x000141950dd5:
      ppiVar40 = &piStack_168;
      if (param_4 == 0 && puVar23 == (undefined *)0x0) {
        *(char *)((longlong)puVar14 + 1) = '\x02';
        goto code_r0x000141951160;
      }
      break;
    case 0x1e:
      *(uint *)puVar14 = (int)*puVar14 + uVar12;
code_r0x000141950f43:
      pbVar41 = (byte *)((longlong)puVar14 + -0x47);
      bVar22 = *pbVar41;
      *pbVar41 = *pbVar41 + (byte)puVar23;
      ppiVar37 = (int **)&stack0xfffffffffffffe88;
      if (*pbVar41 == 0) {
        ppiVar31 = (int **)&uStack_180;
        ppiVar39 = (int **)&uStack_180;
        uStack_180 = 0x65676e61;
        if (!CARRY1(bVar22,(byte)puVar23)) {
          bVar43 = *(longlong *)(*pauVar25 + 6) == 0x6570795468637241 &&
                   (int)puVar23 == *(int *)*pauVar25;
code_r0x000141950fb3:
          if (bVar43) goto code_r0x000141951144;
          uVar19 = *(ulonglong *)*pauVar25 ^ 0x614d65676e616843;
          param_4 = *(ulonglong *)(*pauVar25 + 6) ^ 0x6c6169726574614d;
          ppiVar31 = ppiVar39;
code_r0x000141950fd4:
          if (param_4 == 0 && uVar19 == 0) {
            *(char *)((longlong)puVar14 + 1) = '\n';
            goto code_r0x000141951160;
          }
        }
        bVar43 = *(longlong *)(*pauVar25 + 6) == 0x7374726f70707553 &&
                 *(longlong *)*pauVar25 == 0x755365676e616843;
code_r0x000141950ffb:
        ppiVar40 = ppiVar31;
        if (bVar43) {
code_r0x000141951001:
          *(char *)((longlong)puVar14 + 1) = '\x0f';
          goto code_r0x000141951160;
        }
      }
      else {
code_r0x000141950f44:
        if (*(longlong *)(*pauVar25 + 3) == 0x656c79745365676e &&
            *(longlong *)*pauVar25 == 0x745365676e616843) {
          *(char *)((longlong)puVar14 + 1) = '\t';
          goto code_r0x000141951160;
        }
        puVar23 = (undefined *)0x6b5365676e616843;
        ppiVar38 = ppiVar37;
code_r0x000141950f72:
        ppiVar40 = ppiVar38;
        if (*(longlong *)(*pauVar25 + 3) == 0x7472696b5365676e &&
            puVar23 == *(undefined **)*pauVar25) {
          *(char *)((longlong)puVar14 + 1) = '\x14';
          goto code_r0x000141951160;
        }
      }
      break;
    case 0x1f:
      UNK_14335b289 = UNK_14335b289 | 8;
      pcVar5 = (code *)swi(1);
      puVar14 = (ulonglong *)(*pcVar5)();
      return puVar14;
    case 0x20:
      puVar14 = (ulonglong *)CONCAT71(uVar20,uRama0951005740f6601);
      *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + iVar30;
      goto code_r0x000141950e04;
    case 0x21:
      *(uint *)puVar14 = (int)*puVar14 + uVar12;
      (&UNK_14335b2c1)[uVar18] = (&UNK_14335b2c1)[uVar18] + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x25:
      puVar14 = (ulonglong *)(CONCAT71(uVar6,uRam4f893a0d740f6601) & 0xffffffff);
      *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + iVar30;
code_r0x00014195105a:
      if ((ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) |
                   (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf) == 0xffff) {
        *(char *)((longlong)puVar14 + 1) = '\x0e';
        goto code_r0x000141951160;
      }
      in_XMM0 = *pauVar25;
      puVar23 = (undefined *)(ulonglong)(byte)pauVar25[1][0];
      param_2 = pauVar25;
code_r0x000141951072:
      auVar46[0] = -(in_XMM0[0] == UNK_14335a3b0);
      auVar46[1] = -(in_XMM0[1] == UNK_14335a3b1);
      auVar46[2] = -(in_XMM0[2] == UNK_14335a3b2);
      auVar46[3] = -(in_XMM0[3] == UNK_14335a3b3);
      auVar46[4] = -(in_XMM0[4] == UNK_14335a3b4);
      auVar46[5] = -(in_XMM0[5] == UNK_14335a3b5);
      auVar46[6] = -(in_XMM0[6] == UNK_14335a3b6);
      auVar46[7] = -(in_XMM0[7] == UNK_14335a3b7);
      auVar46[8] = -(in_XMM0[8] == UNK_14335a3b8);
      auVar46[9] = -(in_XMM0[9] == UNK_14335a3b9);
      auVar46[10] = -(in_XMM0[10] == UNK_14335a3ba);
      auVar46[0xb] = -(in_XMM0[0xb] == UNK_14335a3bb);
      auVar46[0xc] = -(in_XMM0[0xc] == UNK_14335a3bc);
      auVar46[0xd] = -(in_XMM0[0xd] == UNK_14335a3bd);
      auVar46[0xe] = -(in_XMM0[0xe] == UNK_14335a3be);
      auVar46[0xf] = -(in_XMM0[0xf] == UNK_14335a3bf);
      auVar55[0] = -((char)puVar23 == UNK_14335a3c0);
      auVar55[1] = -((char)((ulonglong)puVar23 >> 8) == UNK_14335a3c1);
      auVar55[2] = -((char)((ulonglong)puVar23 >> 0x10) == UNK_14335a3c2);
      auVar55[3] = -((char)((ulonglong)puVar23 >> 0x18) == UNK_14335a3c3);
      auVar55[4] = -(UNK_14335a3c4 == '\0');
      auVar55[5] = -(UNK_14335a3c5 == '\0');
      auVar55[6] = -(UNK_14335a3c6 == '\0');
      auVar55[7] = -(UNK_14335a3c7 == '\0');
      auVar55[8] = -(UNK_14335a3c8 == '\0');
      auVar55[9] = -(UNK_14335a3c9 == '\0');
      auVar55[10] = -(UNK_14335a3ca == '\0');
      auVar55[0xb] = -(UNK_14335a3cb == '\0');
      auVar55[0xc] = -(UNK_14335a3cc == '\0');
      auVar55[0xd] = -(UNK_14335a3cd == '\0');
      auVar55[0xe] = -(UNK_14335a3ce == '\0');
      auVar55[0xf] = -(UNK_14335a3cf == '\0');
      in_XMM1 = auVar55 & auVar46;
      pauVar25 = param_2;
      goto code_r0x00014195108a;
    case 0x27:
      return puVar14;
    case 0x28:
code_r0x000141950e45:
      goto code_r0x000141951160;
    case 0x2a:
      *(int *)(&UNK_14335b308 + (longlong)unaff_RBP * 8) =
           *(int *)(&UNK_14335b308 + (longlong)unaff_RBP * 8) + 0x4335b308;
      *(undefined1 *)unaff_RBX = 0;
      pbVar41 = &UNK_14335b2c1 + uVar18;
      bVar22 = *pbVar41;
      *pbVar41 = *pbVar41 + 8;
      if (bVar22 < 0xf8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x000141950e04:
      ppiVar40 = &piStack_168;
      if ((ushort)((ushort)(SUB161(in_XMM0 >> 7,0) & 1) |
                   (ushort)(SUB161(in_XMM0 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(in_XMM0 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(in_XMM0 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(in_XMM0 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(in_XMM0 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(in_XMM0 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(in_XMM0 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(in_XMM0 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(in_XMM0 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(in_XMM0 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(in_XMM0 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(uVar11 >> 7) & 1) << 0xc |
                   (ushort)((byte)(uVar11 >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(uVar11 >> 0x17) & 1) << 0xe | (ushort)(bStack_108 >> 7) << 0xf)
          == 0xffff) {
        *(char *)((longlong)puVar14 + 1) = '\x11';
code_r0x000141951160:
        *(char *)puVar14 = '\0';
        return puVar14;
      }
      break;
    case 0x2b:
      piVar1 = (int *)((longlong)param_1 + 0xf);
      *piVar1 = *piVar1 + iVar30;
      if (*piVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x00014195108a:
      ppiVar40 = &piStack_168;
      if ((ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) |
                   (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000141951096:
        *(char *)((longlong)puVar14 + 1) = '\x10';
        goto code_r0x000141951160;
      }
      break;
    case 0x2c:
      auVar47[0] = -(uStack_140._1_1_ == UNK_14335a370);
      auVar47[1] = -(SUB71(abStack_118._1_7_,1) == UNK_14335a371);
      auVar47[2] = -(SUB71(abStack_118._1_7_,2) == UNK_14335a372);
      auVar47[3] = -(SUB71(abStack_118._1_7_,3) == UNK_14335a373);
      auVar47[4] = -(SUB71(abStack_118._1_7_,4) == UNK_14335a374);
      auVar47[5] = -(SUB71(abStack_118._1_7_,5) == UNK_14335a375);
      auVar47[6] = -(SUB71(abStack_118._1_7_,6) == UNK_14335a376);
      auVar47[7] = -(cStack_110 == UNK_14335a377);
      auVar47[8] = -(cStack_10f == UNK_14335a378);
      auVar47[9] = -((char)uStack_10e == UNK_14335a379);
      auVar47[10] = -(cVar21 == UNK_14335a37a);
      auVar47[0xb] = -(cVar49 == UNK_14335a37b);
      auVar47[0xc] = -(cVar50 == UNK_14335a37c);
      auVar47[0xd] = -(cVar51 == UNK_14335a37d);
      auVar47[0xe] = -(cVar52 == UNK_14335a37e);
      auVar47[0xf] = -(bStack_108 == UNK_14335a37f);
      in_XMM0 = auVar47 & in_XMM1;
      param_2 = pauVar25;
code_r0x0001419510ee:
      pauVar25 = param_2;
      ppiVar40 = &piStack_168;
      if ((ushort)((ushort)(SUB161(in_XMM0 >> 7,0) & 1) |
                   (ushort)(SUB161(in_XMM0 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(in_XMM0 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(in_XMM0 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(in_XMM0 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(in_XMM0 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(in_XMM0 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(in_XMM0 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(in_XMM0 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(in_XMM0 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(in_XMM0 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(in_XMM0 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(in_XMM0 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(in_XMM0 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(in_XMM0 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(in_XMM0[0xf] >> 7) << 0xf) == 0xffff) {
        *(char *)((longlong)puVar14 + 1) = '\v';
        goto code_r0x000141951160;
      }
      break;
    case 0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      pcVar5 = (code *)swi(3);
      puVar14 = (ulonglong *)(*pcVar5)();
      return puVar14;
    case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x39:
      puVar14 = (ulonglong *)CONCAT71(uVar20,(cVar10 + ':') - (0x4c < (byte)unaff_RBX));
      *(int *)puVar14 = (int)*puVar14 + 0x4335b308;
code_r0x000141951144:
      *(char *)((longlong)puVar14 + 1) = '\b';
      goto code_r0x000141951160;
    case 0x3a:
      pcVar5 = (code *)swi(3);
      puVar14 = (ulonglong *)(*pcVar5)();
      return puVar14;
    case 0x3b:
    case 0x3d:
    case 0x40:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
                    /* WARNING: Could not recover jumptable at 0x00014195124f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (ulonglong *)
                (*(UNRECOVERED_JUMPTABLE + 0x14335b308))
                          (&UNK_14335b308,pauVar25,UNRECOVERED_JUMPTABLE + 0x14335b308);
      return puVar14;
    case 0x3c:
code_r0x0001419511ee:
      *(char *)puVar14 = (char)*puVar14 + (char)puVar14;
      return puVar14;
    case 0x3e:
code_r0x00014195118c:
                    /* WARNING: Could not recover jumptable at 0x00014195118f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (ulonglong *)
                (*(UNRECOVERED_JUMPTABLE + (longlong)puVar23))
                          (puVar23,pauVar25,UNRECOVERED_JUMPTABLE + (longlong)puVar23);
      return puVar14;
    case 0x3f:
      puVar14 = (ulonglong *)CONCAT71(uVar20,uRam710fa30d740f6601);
      *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + iVar30;
      if ((ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) |
                   (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                   (ushort)((byte)(uStack_fe >> 7) & 1) << 10 |
                   (ushort)((byte)(uStack_fe >> 0xf) & 1) << 0xb |
                   (ushort)((byte)(uVar28 >> 7) & 1) << 0xc |
                   (ushort)((byte)(uVar28 >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(uVar28 >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(uStack_fe >> 0x2f) << 0xf) == 0xffff) {
        *(char *)((longlong)puVar14 + 1) = '\x03';
        *(char *)puVar14 = '\0';
        return puVar14;
      }
      goto LAB_14195121d;
    case 0x41:
      *(char *)puVar14 = (char)*puVar14 + cVar10;
      return puVar14;
    case 0x46:
      if (*(short *)(*pauVar25 + 8) == 0x7865 &&
          *(undefined **)(*pauVar25 + in_FS_OFFSET) == &UNK_14335b308) {
        puVar23 = (undefined *)0x0;
code_r0x0001419511cc:
        *(char *)((longlong)puVar14 + 1) = (char)puVar23;
        *(char *)puVar14 = '\0';
        return puVar14;
      }
LAB_14195121d:
      *(char *)((longlong)puVar14 + 1) = '\x04';
      *(char *)puVar14 = '\0';
      return puVar14;
    case 0x47:
      out((int)*param_1,uVar27);
      if (*(short *)(*pauVar25 + 4) == 0x6572 && *(int *)*pauVar25 == 0x4335b308) {
        (&UNK_14335b309)[uVar18] = 2;
        *(char *)puVar14 = '\0';
        return puVar14;
      }
      goto LAB_141951334;
    case 0x48:
    case 0x49:
    case 0x4e:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
      LOCK();
      uVar3 = *(undefined4 *)*param_2;
      *(int *)*param_2 = (int)pauVar25;
      UNLOCK();
      *(uint *)puVar14 = (int)*puVar14 + uVar12;
      (&UNK_14335b295)[uVar18] = (&UNK_14335b295)[uVar18] + '\b';
                    /* WARNING: Could not recover jumptable at 0x00014195136f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (ulonglong *)
                (*(code *)(&UNK_14335b308 +
                          *(int *)(&UNK_14335b308 + (longlong)UNRECOVERED_JUMPTABLE * 4)))
                          (&UNK_14335b308,CONCAT44(uVar42,uVar3),
                           &UNK_14335b308 +
                           *(int *)(&UNK_14335b308 + (longlong)UNRECOVERED_JUMPTABLE * 4));
      return puVar14;
    case 0x4a:
      auVar48[0] = -(uStack_140._1_1_ == UNK_14335a410);
      auVar48[1] = -(SUB71(abStack_118._1_7_,1) == UNK_14335a411);
      auVar48[2] = -(SUB71(abStack_118._1_7_,2) == UNK_14335a412);
      auVar48[3] = -(SUB71(abStack_118._1_7_,3) == UNK_14335a413);
      auVar48[4] = -(SUB71(abStack_118._1_7_,4) == UNK_14335a414);
      auVar48[5] = -(SUB71(abStack_118._1_7_,5) == UNK_14335a415);
      auVar48[6] = -(SUB71(abStack_118._1_7_,6) == UNK_14335a416);
      auVar48[7] = -(cStack_110 == UNK_14335a417);
      auVar48[8] = -(cStack_10f == UNK_14335a418);
      auVar48[9] = -((char)uStack_10e == UNK_14335a419);
      auVar48[10] = -(cVar21 == UNK_14335a41a);
      auVar48[0xb] = -(cVar49 == UNK_14335a41b);
      auVar48[0xc] = -(cVar50 == UNK_14335a41c);
      auVar48[0xd] = -(cVar51 == UNK_14335a41d);
      auVar48[0xe] = -(cVar52 == UNK_14335a41e);
      auVar48[0xf] = -(bStack_108 == UNK_14335a41f);
      auVar56[0] = -((char)*(undefined2 *)pauVar25[1] == UNK_142e50630);
      auVar56[1] = -((char)((ushort)*(undefined2 *)pauVar25[1] >> 8) == UNK_142e50631);
      auVar56[2] = -(UNK_142e50632 == '\0');
      auVar56[3] = -(UNK_142e50633 == '\0');
      auVar56[4] = -(UNK_142e50634 == '\0');
      auVar56[5] = -(UNK_142e50635 == '\0');
      auVar56[6] = -(UNK_142e50636 == '\0');
      auVar56[7] = -(UNK_142e50637 == '\0');
      auVar56[8] = -(UNK_142e50638 == '\0');
      auVar56[9] = -(UNK_142e50639 == '\0');
      auVar56[10] = -(UNK_142e5063a == '\0');
      auVar56[0xb] = -(UNK_142e5063b == '\0');
      auVar56[0xc] = -(UNK_142e5063c == '\0');
      auVar56[0xd] = -(UNK_142e5063d == '\0');
      auVar56[0xe] = -(UNK_142e5063e == '\0');
      auVar56[0xf] = -(UNK_142e5063f == '\0');
      in_XMM1 = auVar56 & auVar48;
    case 0x54:
      if ((ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) |
                   (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf) == 0xffff) {
        (&UNK_14335b309)[uVar18] = 2;
        *(char *)puVar14 = '\0';
        return puVar14;
      }
LAB_141951334:
      *(char *)((longlong)puVar14 + 1) = '\x05';
      *(char *)puVar14 = '\0';
code_r0x00014195133c:
      return puVar14;
    case 0x4b:
      piStack_168 = (int *)0x68676965;
      if (puVar14 == (ulonglong *)0x0) {
        pcVar5 = (code *)swi(3);
        puVar14 = (ulonglong *)(*pcVar5)();
        return puVar14;
      }
      puVar14 = (ulonglong *)(ulonglong)(uVar12 ^ *(uint *)(*pauVar25 + 3));
      if (UNRECOVERED_JUMPTABLE == (code *)0x0 &&
          *(int *)(&UNK_14335b33b + unaff_GS_OFFSET + uVar18) * 0x6cb8490a == 0) {
        *(char *)((longlong)puVar14 + 1) = '\x01';
        *(char *)puVar14 = '\0';
        return puVar14;
      }
      goto LAB_141951334;
    case 0x4c:
      if (uVar18 < 0xfffffffebcca4cf8 && puVar14 != (ulonglong *)0x0) {
        cRam00000001447e3b0b = cRam00000001447e3b0b + (char)((ushort)uVar27 >> 8);
        *(char *)puVar14 = '\0';
        return puVar14;
      }
      out((int)*param_1,uVar27);
      if (*(longlong *)(*pauVar25 + 5) == 0x64695f726f6c6f63 &&
          *(undefined **)*pauVar25 == &UNK_14335b308) {
        (&UNK_14335b309)[uVar18] = 4;
        *(char *)puVar14 = '\0';
        return puVar14;
      }
      goto LAB_141951334;
    case 0x4d:
      goto code_r0x00014195133c;
    case 0x4f:
      (&UNK_14335b289)[uVar18] = (&UNK_14335b289)[uVar18] | 0x77;
      (&UNK_14335b311)[uVar18] = (&UNK_14335b311)[uVar18] + 'w';
      return puVar14;
    case 0x55:
      param_2[0x23fe5f5][8] = param_2[0x23fe5f5][8] + '\x01';
      UNK_14335b360 = UNK_14335b360 + '\x01';
      pauVar25[0x18fe5f5][7] = pauVar25[0x18fe5f5][7] + '\x01';
      *(char *)((longlong)param_1 + 0x59) = *(char *)((longlong)param_1 + 0x59) + '\x01';
      pcVar15 = (char *)((longlong)piStack_168 + (longlong)unaff_RBX * 2 + 0x59c7fe5f);
      *pcVar15 = *pcVar15 + -1;
      *(char *)piStack_168 = (char)*piStack_168 + '\x01';
      pcVar15 = (char *)(lStack_150 + 0x5797fe5f + (longlong)unaff_RBX * 2);
      *pcVar15 = *pcVar15 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_141951100:
    in_R10 = &UNK_14335abf0;
    param_4 = 0x16;
code_r0x000141951110:
    *(undefined8 *)((longlong)ppiVar40 + -8) = 0x14195111e;
    uVar19 = pdb_142d8f140(pauVar25,UNRECOVERED_JUMPTABLE,in_R10,param_4);
    puVar14[1] = uVar19;
    *(char *)puVar14 = '\x01';
    return puVar14;
  case 0x6c:
    (&UNK_14335b199)[lVar13] = 0;
    *(char *)puVar14 = '\0';
    return puVar14;
  case 0x6d:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x6e:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x6f:
  case 0x71:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x70:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
    pcVar5 = (code *)swi(1);
    puVar14 = (ulonglong *)(*pcVar5)();
    return puVar14;
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x82:
  case 0x85:
    goto code_r0x000141950f44;
  case 0x76:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x77:
    *(uint *)puVar14 = (int)*puVar14 + uVar11;
    puVar14 = (ulonglong *)(ulonglong)(uVar11 + (int)*puVar14);
    auVar53[0] = -((*param_2)[7] == UNK_14335a340);
    auVar53[1] = -((*param_2)[8] == UNK_14335a341);
    auVar53[2] = -((*param_2)[9] == UNK_14335a342);
    auVar53[3] = -((*param_2)[10] == UNK_14335a343);
    auVar53[4] = -((*param_2)[0xb] == UNK_14335a344);
    auVar53[5] = -((*param_2)[0xc] == UNK_14335a345);
    auVar53[6] = -((*param_2)[0xd] == UNK_14335a346);
    auVar53[7] = -((*param_2)[0xe] == UNK_14335a347);
    auVar53[8] = -((*param_2)[0xf] == UNK_14335a348);
    auVar53[9] = -(param_2[1][0] == UNK_14335a349);
    auVar53[10] = -(param_2[1][1] == UNK_14335a34a);
    auVar53[0xb] = -(param_2[1][2] == UNK_14335a34b);
    auVar53[0xc] = -(param_2[1][3] == UNK_14335a34c);
    auVar53[0xd] = -(param_2[1][4] == UNK_14335a34d);
    auVar53[0xe] = -(param_2[1][5] == UNK_14335a34e);
    auVar53[0xf] = -(param_2[1][6] == UNK_14335a34f);
    auVar44[0] = -(in_XMM0[0] == UNK_14335a350);
    auVar44[1] = -(in_XMM0[1] == UNK_14335a351);
    auVar44[2] = -(in_XMM0[2] == UNK_14335a352);
    auVar44[3] = -(in_XMM0[3] == UNK_14335a353);
    auVar44[4] = -(in_XMM0[4] == UNK_14335a354);
    auVar44[5] = -(in_XMM0[5] == UNK_14335a355);
    auVar44[6] = -(in_XMM0[6] == UNK_14335a356);
    auVar44[7] = -(in_XMM0[7] == UNK_14335a357);
    auVar44[8] = -(in_XMM0[8] == UNK_14335a358);
    auVar44[9] = -(in_XMM0[9] == UNK_14335a359);
    auVar44[10] = -(in_XMM0[10] == UNK_14335a35a);
    auVar44[0xb] = -(in_XMM0[0xb] == UNK_14335a35b);
    auVar44[0xc] = -(in_XMM0[0xc] == UNK_14335a35c);
    auVar44[0xd] = -(in_XMM0[0xd] == UNK_14335a35d);
    auVar44[0xe] = -(in_XMM0[0xe] == UNK_14335a35e);
    auVar44[0xf] = -(in_XMM0[0xf] == UNK_14335a35f);
    auVar44 = auVar44 & auVar53;
    ppiVar40 = (int **)&stack0xfffffffffffffe90;
    if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) == 0xffff) {
      *(char *)((longlong)puVar14 + 1) = '\f';
      goto code_r0x000141951160;
    }
    goto LAB_141951100;
  case 0x78:
    goto code_r0x000141950cab;
  case 0x79:
    return puVar14;
  case 0x7a:
    uVar2 = in(uVar27);
    (*param_2)[0] = uVar2;
    uVar2 = in(uVar27);
    (*param_2)[1] = uVar2;
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    goto code_r0x000141950dd5;
  case 0x7b:
    (&UNK_14335b121)[lVar13] = (&UNK_14335b121)[lVar13] + -0x68;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7c:
    if (!SCARRY8(lVar13,0x14335b198)) {
      return puVar14;
    }
    iRam000000004335b198 = iRam000000004335b198 + -0x4335b198;
    ppiVar35 = &piStack_168;
    goto code_r0x000141950cdb;
  case 0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x81:
    bVar22 = UNK_14335b151 | 0x98;
    puVar23 = (undefined *)CONCAT71(0x14335b1,bVar22);
    uVar2 = in(uVar27);
    (*param_2)[0] = uVar2;
    if (bVar22 == 0) goto code_r0x000141950f43;
    out((int)*param_1,uVar27);
    out(*(char *)((longlong)param_1 + 4),uVar27);
    goto code_r0x000141950ee6;
  case 0x83:
    goto code_r0x000141950ba0;
  case 0x84:
    *(int *)(&UNK_14335b125 + lVar13) = *(int *)(&UNK_14335b125 + lVar13) + 0x4335b198;
    ppiVar35 = (int **)&stack0xfffffffffffffe90;
    goto code_r0x000141950cdb;
  case 0x86:
    *(int *)(unaff_RBX + -0xe56ffcc) = *(int *)(unaff_RBX + -0xe56ffcc) << 0x14;
    goto code_r0x000141950c2c;
  case 0x87:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x88:
    goto code_r0x000141950f72;
  case 0x89:
    goto code_r0x000141950fb3;
  default:
    *(int *)puVar14 = (int)*puVar14 + 1;
    *(byte *)puVar14 = (char)*puVar14 + bVar9;
    goto code_r0x000141951001;
  case 0x8d:
    *(uint *)(&UNK_14335b198 + (longlong)unaff_RBP * 8) =
         *(int *)(&UNK_14335b198 + (longlong)unaff_RBP * 8) + uVar28;
    return puVar14;
  case 0x95:
    uVar19 = (ulonglong)(*(uint *)(*param_2 + 6) ^ 0x4335b198);
    ppiVar31 = &piStack_168;
    goto code_r0x000141950fd4;
  case 0x96:
    ppiVar31 = (int **)(unaff_RBP + 1);
    goto code_r0x000141950ffb;
  case 0x97:
  case 0x99:
  case 0x9c:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
    if (bVar43) goto code_r0x0001419510ee;
    if (-0x14335b199 < lVar13) {
      puVar14 = (ulonglong *)CONCAT71(uVar20,uRama0928605740f6601);
      *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + iVar30;
      goto code_r0x0001419510e6;
    }
    goto code_r0x000141951072;
  case 0x98:
    puVar14 = (ulonglong *)(CONCAT71(uVar6,uRama0933a0d740f6601) & 0xffffffff);
    *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + iVar30;
    goto code_r0x00014195108a;
  case 0x9a:
    puVar14 = (ulonglong *)CONCAT71(uVar20,uRam4ff5aa0d740f6601);
    *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + iVar30;
    if ((ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) | (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf) == 0xffff) {
      *(char *)((longlong)puVar14 + 1) = '\x05';
      goto code_r0x00014195114e;
    }
    in_XMM0 = *param_2;
    in_XMM1 = ZEXT116((byte)param_2[1][0]);
  case 0xa2:
    auVar45[0] = -(in_XMM0[0] == UNK_14335a3a0);
    auVar45[1] = -(in_XMM0[1] == UNK_14335a3a1);
    auVar45[2] = -(in_XMM0[2] == UNK_14335a3a2);
    auVar45[3] = -(in_XMM0[3] == UNK_14335a3a3);
    auVar45[4] = -(in_XMM0[4] == UNK_14335a3a4);
    auVar45[5] = -(in_XMM0[5] == UNK_14335a3a5);
    auVar45[6] = -(in_XMM0[6] == UNK_14335a3a6);
    auVar45[7] = -(in_XMM0[7] == UNK_14335a3a7);
    auVar45[8] = -(in_XMM0[8] == UNK_14335a3a8);
    auVar45[9] = -(in_XMM0[9] == UNK_14335a3a9);
    auVar45[10] = -(in_XMM0[10] == UNK_14335a3aa);
    auVar45[0xb] = -(in_XMM0[0xb] == UNK_14335a3ab);
    auVar45[0xc] = -(in_XMM0[0xc] == UNK_14335a3ac);
    auVar45[0xd] = -(in_XMM0[0xd] == UNK_14335a3ad);
    auVar45[0xe] = -(in_XMM0[0xe] == UNK_14335a3ae);
    auVar45[0xf] = -(in_XMM0[0xf] == UNK_14335a3af);
    auVar54[0] = -(in_XMM1[0] == UNK_142e49990);
    auVar54[1] = -(in_XMM1[1] == UNK_142e49991);
    auVar54[2] = -(in_XMM1[2] == UNK_142e49992);
    auVar54[3] = -(in_XMM1[3] == UNK_142e49993);
    auVar54[4] = -(in_XMM1[4] == UNK_142e49994);
    auVar54[5] = -(in_XMM1[5] == UNK_142e49995);
    auVar54[6] = -(in_XMM1[6] == UNK_142e49996);
    auVar54[7] = -(in_XMM1[7] == UNK_142e49997);
    auVar54[8] = -(in_XMM1[8] == UNK_142e49998);
    auVar54[9] = -(in_XMM1[9] == UNK_142e49999);
    auVar54[10] = -(in_XMM1[10] == UNK_142e4999a);
    auVar54[0xb] = -(in_XMM1[0xb] == UNK_142e4999b);
    auVar54[0xc] = -(in_XMM1[0xc] == UNK_142e4999c);
    auVar54[0xd] = -(in_XMM1[0xd] == UNK_142e4999d);
    auVar54[0xe] = -(in_XMM1[0xe] == UNK_142e4999e);
    auVar54[0xf] = -(in_XMM1[0xf] == UNK_142e4999f);
    in_XMM1 = auVar54 & auVar45;
    goto code_r0x00014195105a;
  case 0x9b:
    *(char *)((longlong)unaff_RBP + 0x6a) =
         *(char *)((longlong)unaff_RBP + 0x6a) + (char)((ulonglong)param_2 >> 8);
    goto code_r0x000141951096;
  case 0x9d:
    goto code_r0x0001419510bc;
  case 0xa3:
code_r0x0001419510e6:
    LOCK();
    uVar2 = param_2[0xf6601a][0];
    param_2[0xf6601a][0] = bVar26;
    param_2 = (undefined1 (*) [16])CONCAT71(uVar29,uVar2);
    UNLOCK();
    goto code_r0x0001419510ee;
  case 0xa4:
  case 0xa5:
  case 0xaa:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
    goto code_r0x0001419511ee;
  case 0xa6:
    (&UNK_14335b199)[lVar13] = 1;
    goto code_r0x000141951160;
  case 0xa7:
    UNRECOVERED_JUMPTABLE =
         (code *)(longlong)*(int *)(&UNK_14335b198 + (longlong)UNRECOVERED_JUMPTABLE * 4);
    goto code_r0x00014195118c;
  case 0xa8:
    (&UNK_14335b199)[lVar13] = 0x98;
    *(char *)puVar14 = '\0';
    return puVar14;
  case 0xa9:
    goto code_r0x0001419511cc;
  case 0xab:
    puVar14 = (ulonglong *)CONCAT71(uVar20,uRam4800000016b94101);
    pauVar25 = (undefined1 (*) [16])((ulonglong)param_2 & 0xffffffff);
    ppiVar40 = &piStack_168;
    goto code_r0x000141951110;
  case 0xb0:
code_r0x00014195114e:
    goto code_r0x000141951160;
  case 0xb1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pdb_141952b70(ppauVar24);
  return (ulonglong *)0x0;
code_r0x00014194ff2c:
                    /* WARNING: Could not recover jumptable at 0x00014194ff3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar14 = (ulonglong *)
            (*(code *)(&UNK_14335b234 + *(int *)(&UNK_14335b234 + (longlong)puVar14 * 4)))();
  return puVar14;
}

