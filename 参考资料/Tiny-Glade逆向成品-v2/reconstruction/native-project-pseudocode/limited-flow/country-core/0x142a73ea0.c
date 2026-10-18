// VA 0x142a73ea0, PDB extent 33755 bytes
// country_core::systems::steam::workshop_publish::prepare_mod::async_fn$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000142a7d98d) overlaps instruction at (ram,0x000142a7d98c)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Removing unreachable block (ram,0x000142a74f4e) */
/* WARNING: Removing unreachable block (ram,0x000142a7cab1) */
/* WARNING: Removing unreachable block (ram,0x000142a7cab8) */
/* WARNING: Removing unreachable block (ram,0x000142a7cabf) */
/* WARNING: Removing unreachable block (ram,0x000142a7cad0) */
/* WARNING: Removing unreachable block (ram,0x000142a7cad9) */
/* WARNING: Removing unreachable block (ram,0x000142a7caee) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_publish::prepare_mod::async_fn$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 33755 */

undefined1 (*) [16]
pdb_142a73ea0(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             longlong param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  char cVar18;
  undefined1 uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 (*extraout_RAX) [16];
  undefined8 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [16];
  undefined7 uVar34;
  char *pcVar27;
  undefined8 *puVar28;
  undefined1 (*pauVar29) [16];
  int *piVar30;
  longlong *plVar31;
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  uint uVar35;
  byte bVar41;
  byte *pbVar36;
  undefined1 (*pauVar37) [16];
  ulonglong uVar38;
  longlong lVar39;
  longlong *plVar40;
  int iVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  undefined *puVar45;
  uint uVar46;
  undefined1 (*unaff_RBX) [16];
  undefined8 *puVar47;
  byte *pbVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  undefined1 *puVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  undefined8 *puVar54;
  undefined1 *puVar55;
  undefined1 *puVar56;
  undefined1 *puVar57;
  undefined1 *puVar58;
  undefined1 *puVar59;
  undefined1 (*unaff_RDI) [16];
  undefined1 (*pauVar60) [16];
  ushort uVar61;
  uint uVar62;
  undefined1 (*unaff_R12) [16];
  undefined1 (*unaff_R13) [16];
  undefined1 (*unaff_R14) [16];
  uint uVar63;
  undefined1 (*unaff_R15) [16];
  undefined8 uVar64;
  bool bVar65;
  bool bVar66;
  unkbyte10 in_ST0;
  undefined8 uVar67;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  longlong alStackX_10 [3];
  undefined8 uStack_48;
  
  puVar28 = (undefined8 *)&stack0xffffffffffffffc0;
  uStack_48 = 0x142a73eb6;
  lVar24 = pdb_142d7c6d0();
  lVar24 = -lVar24;
  puVar47 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar24);
  puVar52 = &stack0xffffffffffffffc0 + lVar24;
  puVar51 = &stack0xffffffffffffffc0 + lVar24;
  puVar53 = &stack0xffffffffffffffc0 + lVar24;
  puVar54 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar24);
  puVar50 = &stack0xffffffffffffffc0 + lVar24;
  puVar56 = &stack0xffffffffffffffc0 + lVar24;
  puVar57 = &stack0xffffffffffffffc0 + lVar24;
  puVar58 = &stack0xffffffffffffffc0 + lVar24;
  pauVar33 = (undefined1 (*) [16])(&stack0x00000040 + lVar24);
  (&stack0x00001580)[lVar24] = unaff_XMM6_Ba;
  (&stack0x00001581)[lVar24] = unaff_XMM6_Bb;
  (&stack0x00001582)[lVar24] = unaff_XMM6_Bc;
  (&stack0x00001583)[lVar24] = unaff_XMM6_Bd;
  (&stack0x00001584)[lVar24] = unaff_XMM6_Be;
  (&stack0x00001585)[lVar24] = unaff_XMM6_Bf;
  (&stack0x00001586)[lVar24] = unaff_XMM6_Bg;
  (&stack0x00001587)[lVar24] = unaff_XMM6_Bh;
  (&stack0x00001588)[lVar24] = unaff_XMM6_Bi;
  (&stack0x00001589)[lVar24] = unaff_XMM6_Bj;
  (&stack0x0000158a)[lVar24] = unaff_XMM6_Bk;
  (&stack0x0000158b)[lVar24] = unaff_XMM6_Bl;
  (&stack0x0000158c)[lVar24] = unaff_XMM6_Bm;
  (&stack0x0000158d)[lVar24] = unaff_XMM6_Bn;
  (&stack0x0000158e)[lVar24] = unaff_XMM6_Bo;
  (&stack0x0000158f)[lVar24] = unaff_XMM6_Bp;
  *(undefined8 *)(&stack0x00001578 + lVar24) = 0xfffffffffffffffe;
  *(undefined8 *)(&stack0x000013a8 + lVar24) = param_1;
  bVar41 = param_2[0xf][8];
  pauVar37 = (undefined1 (*) [16])&UNK_143633910;
  uVar25 = (ulonglong)*(int *)(&UNK_143633910 + (ulonglong)bVar41 * 4);
  bVar65 = 0xfffffffebc9cc6ef < uVar25;
  pauVar26 = (undefined1 (*) [16])(&UNK_143633910 + uVar25);
  bVar66 = pauVar26 == (undefined1 (*) [16])0x0;
  *(undefined1 (**) [16])(&stack0x00001570 + lVar24) = param_2;
  bVar17 = (byte)pauVar26;
  uVar63 = (uint)pauVar26;
  uVar34 = (undefined7)((ulonglong)pauVar26 >> 8);
  pauVar60 = unaff_RBX;
  puVar55 = &stack0xffffffffffffffc0 + lVar24;
  puVar59 = &stack0xffffffffffffffc0 + lVar24;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar41) {
  case 0:
    *(undefined2 *)(param_2[0xf] + 0xe) = 0;
    *(undefined4 *)(param_2[0xf] + 10) = 0;
    uVar23 = *(undefined8 *)param_2[1];
    uVar67 = *(undefined8 *)(param_2[1] + 8);
    *(undefined8 *)(param_2[2] + 8) = *(undefined8 *)*param_2;
    *(undefined8 *)param_2[3] = *(undefined8 *)(*param_2 + 8);
    *(undefined8 *)(param_2[3] + 8) = uVar23;
    *(undefined8 *)param_2[4] = uVar67;
    param_2[0xf][9] = 1;
    *(undefined8 *)(param_2[4] + 8) = *(undefined8 *)param_2[2];
    uVar23 = *(undefined8 *)param_2[3];
    uVar67 = *(undefined8 *)(param_2[3] + 8);
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a73f3e;
    lVar32 = pdb_140f3ecf0(uVar23,uVar67);
    if (lVar32 != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a73f53;
      pdb_140f69110((longlong)alStackX_10 + lVar24,lVar32,uVar67);
      if (*(int *)((longlong)alStackX_10 + lVar24) != 1) {
        unaff_RBX = *(undefined1 (**) [16])((longlong)alStackX_10 + lVar24 + 0x10);
        goto code_r0x000142a743c0;
      }
    }
    *(longlong *)((longlong)alStackX_10 + lVar24) = *(longlong *)(&stack0x00001570 + lVar24) + 0x28;
    *(code **)((longlong)alStackX_10 + lVar24 + 8) = pdb_140f58250;
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a73f88;
    unaff_R13 = (undefined1 (*) [16])pdb_142d8fe70(&UNK_1436334ba,(longlong)alStackX_10 + lVar24);
    lVar32 = *(longlong *)(&stack0x00001570 + lVar24);
    goto code_r0x000142a770f2;
  case 1:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a74f99;
    pdb_142dc8570(&UNK_143633388);
  case 2:
    pauVar37 = (undefined1 (*) [16])&UNK_143633388;
    goto code_r0x000142a74fa0;
  case 3:
    pcVar27 = (char *)(ulonglong)(byte)param_2[0x2d][0xd];
    goto code_r0x000142a73fa6;
  case 4:
    *(undefined1 **)(&stack0x00001548 + lVar24) = param_2[0x23] + 8;
    uVar25 = (ulonglong)(byte)param_2[0x23][8];
    *(undefined1 (**) [16])(&stack0x00001568 + lVar24) = param_2 + 0x17;
    pauVar37 = (undefined1 (*) [16])&UNK_143633924;
    goto code_r0x000142a742d1;
  case 5:
    cRam00000000cfef42cc = cRam00000000cfef42cc - (char)param_2;
    uVar25 = (ulonglong)(uVar63 | 0xbbf653);
code_r0x000142a742d1:
                    /* WARNING: Could not recover jumptable at 0x000142a742d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar33 = (undefined1 (*) [16])(*(code *)(*pauVar37 + *(int *)(*pauVar37 + uVar25 * 4)))();
    return pauVar33;
  case 6:
code_r0x000142a74fa0:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a74fa5;
    pdb_142dc8590(pauVar37);
  case 7:
    (*pauVar26)[0] = (*pauVar26)[0] + bVar17;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a74fbf;
    pdb_142dc8570(&UNK_1436336d0);
  case 8:
    goto code_r0x000142a7437d;
  case 9:
    pcVar27 = (char *)(CONCAT71(uVar34,bVar17 + (*pauVar26)[0]) + -0x75);
    *pcVar27 = *pcVar27 + '\x10';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    cVar18 = bVar17 + (*pauVar26)[0];
    pcVar27 = (char *)CONCAT71(uVar34,cVar18);
    (*unaff_RDI)[0] = (*unaff_RDI)[0] + '\x10';
    param_2 = (undefined1 (*) [16])
              CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x82,(char)param_2));
    *pcVar27 = *pcVar27 + cVar18;
code_r0x000142a73fa6:
    *(undefined1 (**) [16])(&stack0x00001560 + lVar24) = param_2 + 0x19;
                    /* WARNING: Could not recover jumptable at 0x000142a73fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar33 = (undefined1 (*) [16])
               (*(code *)(&UNK_143633938 + *(int *)(&UNK_143633938 + (longlong)pcVar27 * 4)))();
    return pauVar33;
  case 0xb:
    uVar63 = CONCAT31((int3)((uVar63 ^ 0xfae99000) >> 8),
                      bVar17 & *(byte *)(ulonglong)(uVar63 ^ 0xfae99000));
    pcVar27 = (char *)((ulonglong)uVar63 - 0x75);
    *pcVar27 = *pcVar27 + '\x10';
    uVar63 = uVar63 + 0x89480000;
    pcVar27 = (char *)((ulonglong)
                       CONCAT31((int3)(uVar63 >> 8),(char)uVar63 + *(char *)(ulonglong)uVar63) -
                      0x73);
    *pcVar27 = *pcVar27 + '\x10';
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a74fdf;
    pdb_142dc8590();
  case 0xc:
    uVar63 = CONCAT31((int3)((uVar63 ^ 0xdae99000) >> 8),
                      bVar17 & *(byte *)(ulonglong)(uVar63 ^ 0xdae99000));
    pcVar27 = (char *)((ulonglong)uVar63 - 0x75);
    *pcVar27 = *pcVar27 + '\x10';
    uVar63 = uVar63 + 0x89480000;
    pcVar27 = (char *)((ulonglong)(uVar63 + *(int *)(ulonglong)uVar63) - 0x73);
    *pcVar27 = *pcVar27 + '\x10';
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a74fff;
    pdb_142dc8570();
  case 0xd:
code_r0x000142a743dd:
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a743e2;
    pdb_142dc7e2a(pauVar37);
    goto code_r0x000142a772bf;
  case 0xe:
    uVar43 = (ulonglong)*(uint *)param_2[0x2e];
    pauVar37 = *(undefined1 (**) [16])(&UNK_143633bf8 + uVar25);
    puVar47 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar24);
    goto code_r0x000142a77967;
  case 0xf:
    (*pauVar26)[0] = (*pauVar26)[0] + bVar17 + bVar65;
    (&UNK_14363389d)[uVar25] = (&UNK_14363389d)[uVar25] + '\x10';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    (*pauVar26)[0] = (*pauVar26)[0] + bVar17;
    lVar32 = *(longlong *)(&UNK_143633bf8 + uVar25);
    puVar47 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar24);
    goto code_r0x000142a750b0;
  case 0x11:
code_r0x000142a743c0:
    lVar32 = *(longlong *)(&stack0x00001570 + lVar24);
    unaff_R14 = (undefined1 (*) [16])(lVar32 + 0x50);
    if ((longlong)unaff_RBX < 0) {
      pauVar37 = (undefined1 (*) [16])0x0;
      goto code_r0x000142a743dd;
    }
    if (unaff_RBX == (undefined1 (*) [16])0x0) {
      unaff_R12 = (undefined1 (*) [16])0x1;
    }
    else {
      unaff_R15 = *(undefined1 (**) [16])((longlong)alStackX_10 + lVar24 + 8);
      *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a74480;
      pdb_14007ee60();
      pauVar37 = (undefined1 (*) [16])0x1;
      *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a74493;
      unaff_R12 = (undefined1 (*) [16])pub_1406abab0((ulonglong)unaff_RBX,1);
      if (unaff_R12 == (undefined1 (*) [16])0x0) goto code_r0x000142a743dd;
      *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a744ad;
      pub_142e32760(unaff_R12,unaff_R15,unaff_RBX);
      lVar32 = *(longlong *)(&stack0x00001570 + lVar24);
    }
    *(undefined1 (**) [16])(lVar32 + 0x50) = unaff_RBX;
    *(undefined1 (**) [16])(lVar32 + 0x58) = unaff_R12;
    *(undefined1 (**) [16])(lVar32 + 0x60) = unaff_RBX;
    *(undefined1 *)(lVar32 + 0xff) = 1;
    uVar23 = *(undefined8 *)(lVar32 + 0x30);
    uVar67 = *(undefined8 *)(lVar32 + 0x38);
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a74835;
    pdb_140f4ee90((longlong)alStackX_10 + lVar24,uVar23,uVar67);
    lVar32 = *(longlong *)((longlong)alStackX_10 + lVar24);
    uVar23 = *(undefined8 *)((longlong)alStackX_10 + lVar24 + 8);
    if (!SBORROW8(0,lVar32)) {
      *(undefined8 *)(&stack0x000011c0 + lVar24) =
           *(undefined8 *)((longlong)alStackX_10 + lVar24 + 0x10);
      *(undefined8 *)(&stack0x000011c8 + lVar24) = *(undefined8 *)(&stack0x00000028 + lVar24);
      lVar22 = *(longlong *)(&stack0x00001570 + lVar24);
      *(undefined1 *)(lVar22 + 0xfe) = 1;
      *(longlong *)(lVar22 + 0x68) = lVar32;
      *(undefined8 *)(lVar22 + 0x70) = uVar23;
      uVar67 = *(undefined8 *)(&stack0x000011c8 + lVar24);
      *(undefined8 *)(lVar22 + 0x78) = *(undefined8 *)(&stack0x000011c0 + lVar24);
      *(undefined8 *)(lVar22 + 0x80) = uVar67;
      uVar67 = *(undefined8 *)(lVar22 + 0x78);
      uVar64 = *(undefined8 *)(lVar22 + 0x58);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar24) = *(undefined8 *)(lVar22 + 0x60);
      *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a748a6;
      pdb_140b28ae0((longlong)alStackX_10 + lVar24,uVar23,uVar67,uVar64);
      pauVar29 = *(undefined1 (**) [16])((longlong)alStackX_10 + lVar24);
      unaff_R13 = *(undefined1 (**) [16])((longlong)alStackX_10 + lVar24 + 8);
      puVar47 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar24);
      if (!SBORROW8(0,(longlong)pauVar29)) {
code_r0x000142a74a35:
        uVar23 = *(undefined8 *)pauVar33[-2];
        uVar67 = *(undefined8 *)(pauVar33[-2] + 8);
        uVar64 = *(undefined8 *)pauVar33[-1];
        uVar6 = *(undefined8 *)(pauVar33[-1] + 8);
        uVar7 = *(undefined8 *)(*pauVar33 + 8);
        *(undefined8 *)pauVar33[0x11a] = *(undefined8 *)*pauVar33;
        *(undefined8 *)(pauVar33[0x11a] + 8) = uVar7;
        *(undefined8 *)pauVar33[0x119] = uVar64;
        *(undefined8 *)(pauVar33[0x119] + 8) = uVar6;
        *(undefined8 *)pauVar33[0x118] = uVar23;
        *(undefined8 *)(pauVar33[0x118] + 8) = uVar67;
        unaff_RDI = *(undefined1 (**) [16])pauVar33[0x153];
        *(undefined1 (**) [16])(unaff_RDI[8] + 8) = pauVar29;
        *(undefined1 (**) [16])unaff_RDI[9] = unaff_R13;
        uVar23 = *(undefined8 *)(pauVar33[0x118] + 8);
        uVar67 = *(undefined8 *)pauVar33[0x119];
        uVar64 = *(undefined8 *)(pauVar33[0x119] + 8);
        auVar68 = pauVar33[0x11a];
        *(undefined8 *)(unaff_RDI[9] + 8) = *(undefined8 *)pauVar33[0x118];
        *(undefined8 *)unaff_RDI[10] = uVar23;
        *(undefined8 *)(unaff_RDI[10] + 8) = uVar67;
        *(undefined8 *)unaff_RDI[0xb] = uVar64;
        *(undefined1 (*) [16])(unaff_RDI[0xb] + 8) = auVar68;
        *(undefined2 *)(unaff_RDI[0xf] + 0xc) = 1;
        *(undefined8 *)(unaff_RDI[0xc] + 8) = *(undefined8 *)(unaff_RDI[8] + 8);
        *(undefined8 *)unaff_RDI[0xd] = *(undefined8 *)unaff_RDI[9];
        *(undefined8 *)(unaff_RDI[0xd] + 8) = *(undefined8 *)(unaff_RDI[9] + 8);
        if (!SBORROW8(0,*(longlong *)unaff_RDI[10])) {
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74b1a;
          pdb_140dbd540(pauVar33 + -3,unaff_RDI[6] + 8);
          lVar24 = *(longlong *)pauVar33[0x153];
          pauVar33[-2][8] = *(undefined1 *)(lVar24 + 0x80);
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74b3f;
          pdb_140f60be0(pauVar33 + 0x14b,lVar24 + 200);
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74b4f;
          pdb_140f60be0(pauVar33 + 0x118,unaff_R14);
          lVar24 = *(longlong *)pauVar33[0x153];
          *(undefined8 *)(lVar24 + 0x128) = 0;
          uVar23 = *(undefined8 *)pauVar33[-3];
          uVar67 = *(undefined8 *)(pauVar33[-3] + 8);
          *(undefined1 (*) [16])(lVar24 + 0x148) = pauVar33[-2];
          *(undefined8 *)(lVar24 + 0x138) = uVar23;
          *(undefined8 *)(lVar24 + 0x140) = uVar67;
          uVar23 = *(undefined8 *)(pauVar33[0x14b] + 8);
          *(undefined8 *)(lVar24 + 0x158) = *(undefined8 *)pauVar33[0x14b];
          *(undefined8 *)(lVar24 + 0x160) = uVar23;
          *(undefined8 *)(lVar24 + 0x168) = *(undefined8 *)pauVar33[0x14c];
          uVar23 = *(undefined8 *)(pauVar33[0x118] + 8);
          *(undefined8 *)(lVar24 + 0x170) = *(undefined8 *)pauVar33[0x118];
          *(undefined8 *)(lVar24 + 0x178) = uVar23;
          *(undefined8 *)(lVar24 + 0x180) = *(undefined8 *)pauVar33[0x119];
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74bc4;
          pdb_140c8ab10(pauVar33 + -3,lVar24 + 0x128);
          lVar24 = *(longlong *)pauVar33[-3];
          unaff_R13 = *(undefined1 (**) [16])(pauVar33[-3] + 8);
          puVar56 = (undefined1 *)puVar47;
          if (!SBORROW8(0,lVar24)) {
            uVar23 = *(undefined8 *)pauVar33[-2];
            lVar32 = *(longlong *)pauVar33[0x153];
            *(undefined1 *)(lVar32 + 0xfb) = 1;
            *(longlong *)(lVar32 + 0x100) = lVar24;
            *(undefined1 (**) [16])(lVar32 + 0x108) = unaff_R13;
            *(undefined8 *)(lVar32 + 0x110) = uVar23;
            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74c09;
            pdb_141c36f00(pauVar33 + -3);
            unaff_R13 = *(undefined1 (**) [16])(pauVar33[-3] + 8);
            if (*(longlong *)pauVar33[-3] != 0) {
              lVar24 = *(longlong *)pauVar33[0x153];
              *(longlong *)(lVar24 + 0x118) = *(longlong *)pauVar33[-3];
              *(undefined1 (**) [16])(lVar24 + 0x120) = unaff_R13;
              uVar23 = *(undefined8 *)(lVar24 + 0x108);
              uVar67 = *(undefined8 *)(lVar24 + 0x110);
              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74c47;
              pdb_141b05400(pauVar33 + -3,uVar23,uVar67);
              pauVar60 = *(undefined1 (**) [16])pauVar33[0x153];
              pauVar26 = *(undefined1 (**) [16])(pauVar60[4] + 8);
              LOCK();
              lVar24 = *(longlong *)*pauVar26;
              *(longlong *)*pauVar26 = *(longlong *)*pauVar26 + 1;
              UNLOCK();
              if (*(longlong *)*pauVar26 != 0 && SCARRY8(lVar24,1) == *(longlong *)*pauVar26 < 0) {
                pauVar37 = (undefined1 (*) [16])(pauVar60[0x11] + 8);
                *(undefined8 *)pauVar33[0x112] = *(undefined8 *)pauVar33[-2];
code_r0x000142a74c72:
                uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
                *(undefined8 *)pauVar33[0x111] = *(undefined8 *)pauVar33[-3];
                *(undefined8 *)(pauVar33[0x111] + 8) = uVar23;
                *(undefined1 (**) [16])pauVar60[0x2b] = pauVar37;
                *(undefined1 (**) [16])(pauVar60[0x2b] + 8) = pauVar26;
                uVar23 = *(undefined8 *)(pauVar33[0x111] + 8);
                *(undefined8 *)pauVar60[0x2c] = *(undefined8 *)pauVar33[0x111];
                *(undefined8 *)(pauVar60[0x2c] + 8) = uVar23;
                *(undefined8 *)pauVar60[0x2d] = *(undefined8 *)pauVar33[0x112];
                unaff_RDI = (undefined1 (*) [16])(pauVar60[0x2d] + 0xd);
                param_2 = pauVar60;
code_r0x000142a74cb2:
                pauVar26 = param_2;
                pauVar60[0x2d][0xd] = 0;
                *(undefined1 (**) [16])pauVar33[0x152] = pauVar60 + 0x19;
code_r0x000142a73fc4:
                *(undefined4 *)(pauVar26[0x2d] + 8) = 0;
                pauVar26[0x2d][0xc] = 0;
                uVar23 = *(undefined8 *)(pauVar26[0x2b] + 8);
                *(undefined8 *)pauVar26[0x22] = *(undefined8 *)pauVar26[0x2b];
                uVar67 = *(undefined8 *)(pauVar26[0x2c] + 8);
                *(undefined8 *)(pauVar26[0x22] + 8) = *(undefined8 *)pauVar26[0x2c];
                *(undefined8 *)pauVar26[0x23] = uVar67;
                *(undefined8 *)(pauVar26[0x23] + 8) = *(undefined8 *)pauVar26[0x2d];
                pauVar26[0x2d][9] = 1;
                *(undefined1 (**) [16])(pauVar33[0x13f] + 8) = unaff_RDI;
                *(undefined8 *)pauVar33[0x13f] = *(undefined8 *)pauVar33[0x152];
                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74029;
                unaff_R13 = (undefined1 (*) [16])pdb_140cf7270(uVar23);
                if (unaff_R13 == (undefined1 (*) [16])0x0) {
                  uVar23 = *(undefined8 *)(*(longlong *)pauVar33[0x153] + 0x220);
                  *(undefined1 (**) [16])(pauVar33[0x13f] + 8) = unaff_RDI;
                  *(undefined8 *)pauVar33[0x13f] = *(undefined8 *)pauVar33[0x152];
                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7405e;
                  puVar28 = (undefined8 *)pdb_1406d0830(uVar23);
                  *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                  plVar31 = (longlong *)*puVar28;
                  LOCK();
                  lVar24 = *plVar31;
                  *plVar31 = *plVar31 + 1;
                  UNLOCK();
                  if (*plVar31 == 0 || SCARRY8(lVar24,1) != *plVar31 < 0) goto code_r0x000142a772bf;
                  lVar24 = *(longlong *)pauVar33[0x153];
                  *(undefined1 *)(lVar24 + 0x2d9) = 0;
                  *(longlong **)pauVar33[-3] = plVar31;
                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7408a;
                  pdb_14007ee60();
                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74099;
                  pbVar36 = pub_1406abab0(0x10,8);
                  if (pbVar36 == (byte *)0x0) {
                    *(longlong **)(pauVar33[0x136] + 8) = plVar31;
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74f87;
                    pdb_142dc7e11(8,0x10);
                  }
                  pbVar36[0] = 1;
                  pbVar36[1] = 0;
                  pbVar36[2] = 0;
                  pbVar36[3] = 0;
                  pbVar36[4] = 0;
                  pbVar36[5] = 0;
                  pbVar36[6] = 0;
                  pbVar36[7] = 0;
                  pbVar36[8] = 1;
                  pbVar36[9] = 0;
                  pbVar36[10] = 0;
                  pbVar36[0xb] = 0;
                  pbVar36[0xc] = 0;
                  pbVar36[0xd] = 0;
                  pbVar36[0xe] = 0;
                  pbVar36[0xf] = 0;
                  *(longlong **)(lVar24 + 0x1d0) = plVar31;
                  *(undefined8 *)(lVar24 + 0x1d8) = 0;
                  *(byte **)(lVar24 + 0x1e0) = pbVar36;
                  *(undefined **)(lVar24 + 0x1e8) = &UNK_14332a748;
                  if (2 < *_DAT_143ca8e90) {
                    *(undefined8 *)pauVar33[0x14b] = *(undefined8 *)(lVar24 + 0x238);
                    *(undefined1 (**) [16])pauVar33[0x118] = pauVar33 + 0x14b;
                    *(code **)(pauVar33[0x118] + 8) = pdb_140f72a40;
                    *(undefined **)pauVar33[-3] = &UNK_1436335b0;
                    *(undefined8 *)(pauVar33[-3] + 8) = 0x11;
                    *(undefined **)pauVar33[-2] = &UNK_1436335b0;
                    *(undefined8 *)(pauVar33[-2] + 8) = 0x11;
                    *(undefined **)pauVar33[-1] = &UNK_143633598;
                    *(undefined8 *)(pauVar33[299] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
                    *(undefined8 *)pauVar33[299] = *(undefined8 *)pauVar33[0x152];
                    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a74179;
                    pdb_1400c9be0(&UNK_143633550,pauVar33 + 0x118,3,pauVar33 + -3);
                    lVar24 = *(longlong *)pauVar33[0x153];
                  }
                  lVar32 = *(longlong *)(lVar24 + 0x230);
                  lVar22 = *(longlong *)(lVar24 + 0x238);
                  *(longlong *)pauVar33[-3] = lVar32;
                  *(longlong *)(pauVar33[-3] + 8) = lVar22 * 0x38 + lVar32;
                  *(longlong *)pauVar33[-2] = lVar24 + 0x1d0;
                  unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
                  *(undefined1 (**) [16])pauVar33[0x130] = unaff_RDI;
                  *(undefined8 *)(pauVar33[0x12f] + 8) = *(undefined8 *)pauVar33[0x152];
                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a741d2;
                  pdb_1415eb850(pauVar33[0x112] + 8,pauVar33 + -3);
                  lVar24 = *(longlong *)pauVar33[0x153];
                  *(undefined8 *)(lVar24 + 0x240) = 0;
                  *(undefined8 *)(lVar24 + 0x248) = 0x10;
                  *(undefined1 (*) [16])(lVar24 + 0x250) = (undefined1  [16])0x0;
                  *(undefined1 *)(lVar24 + 0x2d8) = 1;
                  *(undefined8 *)(lVar24 + 0x260) = 8;
                  *(undefined1 (*) [16])(lVar24 + 0x268) = (undefined1  [16])0x0;
                  *(undefined8 *)(lVar24 + 0x278) = 0x10;
                  *(undefined8 *)(lVar24 + 0x280) = 0;
                  *(undefined2 *)(lVar24 + 0x2da) = 0x101;
                  *(undefined1 *)(lVar24 + 0x2dc) = 0;
                  uVar23 = *(undefined8 *)(pauVar33[0x112] + 8);
                  lVar32 = *(longlong *)pauVar33[0x113];
                  lVar22 = *(longlong *)(pauVar33[0x113] + 8);
                  *(longlong *)(lVar24 + 400) = *(longlong *)(lVar24 + 0x230);
                  *(longlong *)(lVar24 + 0x198) =
                       *(longlong *)(lVar24 + 0x238) * 0x38 + *(longlong *)(lVar24 + 0x230);
                  *(longlong *)(lVar24 + 0x1a0) = lVar32;
                  *(longlong *)(lVar24 + 0x1a8) = lVar32;
                  *(undefined8 *)(lVar24 + 0x1b0) = uVar23;
                  *(longlong *)(lVar24 + 0x1b8) = lVar32 + lVar22 * 0x10;
                  *(undefined1 (*) [16])(lVar24 + 0x1c0) = (undefined1  [16])0x0;
code_r0x000142a75025:
                  param_4 = *(longlong *)pauVar33[0x153];
                  lVar24 = *(longlong *)(param_4 + 400);
                  puVar53 = (undefined1 *)puVar47;
                  if (lVar24 != *(longlong *)(param_4 + 0x198)) {
                    *(longlong *)(param_4 + 400) = lVar24 + 0x38;
                    puVar28 = *(undefined8 **)(param_4 + 0x1a8);
                    if (puVar28 == *(undefined8 **)(param_4 + 0x1b8)) goto code_r0x000142a758b2;
                    *(undefined8 **)(param_4 + 0x1a8) = puVar28 + 2;
                    uVar23 = *puVar28;
                    lVar32 = puVar28[1];
                    *(longlong *)(param_4 + 0x288) = lVar24;
                    *(undefined8 *)(param_4 + 0x290) = uVar23;
                    *(longlong *)(param_4 + 0x298) = lVar32;
                    *(longlong *)(param_4 + 0x2a0) = lVar24;
                    *(longlong *)(param_4 + 0x210) = lVar24;
                    *(longlong *)(param_4 + 0x218) = param_4 + 600;
                    *(undefined8 *)(param_4 + 0x2e0) = uVar23;
                    *(longlong *)(param_4 + 0x2e8) = lVar32;
code_r0x000142a750b0:
                    *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                    pcVar9 = *(code **)(lVar32 + 0x18);
                    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a750c1;
                    (*pcVar9)(pauVar33 + -3);
                    unaff_R15 = *(undefined1 (**) [16])pauVar33[-3];
                    if (unaff_R15 == (undefined1 (*) [16])0x2) {
                      uVar19 = 3;
                      goto code_r0x000142a7797f;
                    }
                    unaff_R12 = *(undefined1 (**) [16])(pauVar33[-3] + 8);
                    uVar23 = *(undefined8 *)pauVar33[-2];
                    uVar67 = *(undefined8 *)(pauVar33[-2] + 8);
                    lVar24 = *(longlong *)pauVar33[-1];
                    lVar32 = *(longlong *)pauVar33[0x153];
                    *(undefined8 *)(pauVar33[0x151] + 8) = *(undefined8 *)(lVar32 + 0x2e0);
                    puVar28 = *(undefined8 **)(lVar32 + 0x2e8);
                    *(undefined8 **)(pauVar33[0x150] + 8) = puVar28;
                    pcVar9 = (code *)*puVar28;
                    if (pcVar9 != (code *)0x0) {
                      uVar64 = *(undefined8 *)(pauVar33[0x151] + 8);
                      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75114;
                      (*pcVar9)(uVar64);
                    }
                    pbVar36 = *(byte **)(pauVar33[0x151] + 8);
                    uVar25 = *(ulonglong *)(*(longlong *)(pauVar33[0x150] + 8) + 8);
                    if (uVar25 != 0) {
                      uVar43 = *(ulonglong *)(*(longlong *)(pauVar33[0x150] + 8) + 0x10);
                      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75135;
                      pub_1406abac0(pbVar36,uVar25,uVar43);
                    }
                    if ((int)unaff_R15 == 1) {
                      *(undefined1 (**) [16])pauVar33[-3] = unaff_R12;
                      *(undefined8 *)(pauVar33[-3] + 8) = uVar23;
                      *(undefined8 *)pauVar33[-2] = uVar67;
                      *(longlong *)(pauVar33[-2] + 8) = lVar24;
                      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7515f;
                      pdb_141747470(pauVar33 + 0x118,pauVar33 + -3);
                      lVar24 = *(longlong *)pauVar33[0x153];
                      *(undefined8 *)pauVar33[0x14c] = *(undefined8 *)pauVar33[0x119];
                      uVar23 = *(undefined8 *)(pauVar33[0x118] + 8);
                      *(undefined8 *)pauVar33[0x14b] = *(undefined8 *)pauVar33[0x118];
                      *(undefined8 *)(pauVar33[0x14b] + 8) = uVar23;
                      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75198;
                      pdb_142a7c280(lVar24 + 0x210,pauVar33 + 0x14b);
                      plVar31 = *(longlong **)pauVar33[-2];
                      LOCK();
                      *plVar31 = *plVar31 + -1;
                      UNLOCK();
                      unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
                      if (*plVar31 == 0) {
                        *(undefined1 (**) [16])(pauVar33[0x13e] + 8) = unaff_RDI;
                        *(undefined8 *)pauVar33[0x13e] = *(undefined8 *)pauVar33[0x152];
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a751cc;
                        pdb_140c7a240(pauVar33 + -2);
                      }
                    }
                    else {
                      lVar32 = *(longlong *)pauVar33[0x153];
                      *(undefined8 *)(lVar32 + 0x1f0) = uVar23;
                      *(undefined8 *)(lVar32 + 0x1f8) = uVar67;
                      *(longlong *)(lVar32 + 0x200) = lVar24;
                      lVar32 = lVar32 + 0x1d0;
                      uVar23 = *(undefined8 *)(lVar24 + 0x10);
                      uVar67 = *(undefined8 *)(lVar24 + 0x18);
                      *(undefined8 *)(pauVar33[0x139] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
                      *(undefined8 *)pauVar33[0x139] = *(undefined8 *)pauVar33[0x152];
                      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75221;
                      uVar25 = pdb_141710600(lVar32,uVar23,uVar67);
                      if ((uVar25 & 1) == 0) {
                        lVar24 = *(longlong *)pauVar33[0x153];
                        *(undefined8 *)(lVar24 + 0x2a8) = uVar23;
                        if (3 < *_DAT_143ca8e90) {
                          lVar24 = *(longlong *)(lVar24 + 0x2a0);
                          uVar23 = *(undefined8 *)(lVar24 + 0x20);
                          uVar67 = *(undefined8 *)(lVar24 + 0x28);
                          *(undefined8 *)(pauVar33[0x14a] + 8) =
                               *(undefined8 *)(pauVar33[0x152] + 8);
                          *(undefined8 *)pauVar33[0x14a] = *(undefined8 *)pauVar33[0x152];
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75328;
                          pdb_141b1e240(pauVar33 + 0x14b,uVar23,uVar67,3);
                          *(longlong *)pauVar33[0x118] = lVar24;
                          *(code **)(pauVar33[0x118] + 8) = pdb_140094770;
                          *(undefined1 (**) [16])pauVar33[0x119] = pauVar33 + 0x14b;
                          *(code **)(pauVar33[0x119] + 8) = pdb_140f58250;
                          *(undefined8 *)pauVar33[-3] = 0;
                          *(undefined **)(pauVar33[-3] + 8) = &UNK_1436335b0;
                          *(undefined8 *)pauVar33[-2] = 0x11;
                          *(undefined8 *)(pauVar33[-2] + 8) = 0;
                          *(undefined **)pauVar33[-1] = &UNK_143633572;
                          *(undefined8 *)(pauVar33[-1] + 8) = 0x23;
                          *(undefined8 *)*pauVar33 = 4;
                          *(undefined **)(*pauVar33 + 8) = &UNK_1436335b0;
                          *(undefined8 *)pauVar33[1] = 0x11;
                          *(undefined8 *)(pauVar33[1] + 8) = 0x21b00000001;
                          *(undefined **)pauVar33[2] = &UNK_14363360e;
                          *(undefined1 (**) [16])(pauVar33[2] + 8) = pauVar33 + 0x118;
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a753d1;
                          pdb_140f332f0(pauVar33[0x150] + 6,pauVar33 + -3);
                          uVar25 = *(ulonglong *)pauVar33[0x14b];
                          if (uVar25 != 0) {
                            pbVar36 = *(byte **)(pauVar33[0x14b] + 8);
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a753f0;
                            pub_1406abac0(pbVar36,uVar25,1);
                          }
                          lVar24 = *(longlong *)pauVar33[0x153];
                        }
                        lVar24 = *(longlong *)(lVar24 + 0x200);
                        uVar25 = *(ulonglong *)(lVar24 + 0x30);
                        uVar43 = uVar25 << 4;
                        if (0x7ffffffffffffff0 < uVar43 || uVar25 >> 0x3c != 0) {
                          uVar23 = 0;
code_r0x000142a7542a:
                          *(undefined8 *)(pauVar33[0x14a] + 8) =
                               *(undefined8 *)(pauVar33[0x152] + 8);
                          *(undefined8 *)pauVar33[0x14a] = *(undefined8 *)pauVar33[0x152];
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75451;
                          pdb_142dc7e2a(uVar23,uVar43);
                          goto code_r0x000142a772bf;
                        }
                        uVar67 = *(undefined8 *)(lVar24 + 0x10);
                        uVar64 = *(undefined8 *)(lVar24 + 0x18);
                        pbVar36 = (byte *)0x10;
                        if (uVar43 != 0) {
                          *(longlong *)(pauVar33[0x151] + 8) = lVar32;
                          lVar24 = *(longlong *)(lVar24 + 0x28);
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75479;
                          pdb_14007ee60();
                          uVar23 = 0x10;
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7548c;
                          pbVar36 = pub_1406abab0(uVar43,0x10);
                          if (pbVar36 == (byte *)0x0) goto code_r0x000142a7542a;
                          if (uVar25 != 0) {
                            uVar38 = 0;
                            uVar44 = uVar25;
                            do {
                              if (uVar43 == uVar38) break;
                              puVar28 = (undefined8 *)(lVar24 + uVar38);
                              uVar23 = puVar28[1];
                              *(undefined8 *)(pbVar36 + uVar38) = *puVar28;
                              *(undefined8 *)(pbVar36 + uVar38 + 8) = uVar23;
                              uVar38 = uVar38 + 0x10;
                              uVar44 = uVar44 - 1;
                            } while (uVar44 != 0);
                          }
                          lVar32 = *(longlong *)(pauVar33[0x151] + 8);
                        }
                        *(undefined8 *)pauVar33[-3] = uVar67;
                        *(undefined8 *)(pauVar33[-3] + 8) = uVar64;
                        *(ulonglong *)pauVar33[-2] = uVar25;
                        *(byte **)(pauVar33[-2] + 8) = pbVar36;
                        *(ulonglong *)pauVar33[-1] = uVar25;
                        pauVar33[-1][8] = 0;
                        *(undefined8 *)(pauVar33[0x14a] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
                        *(undefined8 *)pauVar33[0x14a] = *(undefined8 *)pauVar33[0x152];
                        pauVar37 = pauVar33 + -3;
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a754fa;
                        uVar23 = pdb_141713e70(lVar32);
                        lVar24 = *(longlong *)pauVar33[0x153];
                        *(undefined8 *)(lVar24 + 0x2e0) = uVar23;
                        *(undefined1 (**) [16])(lVar24 + 0x2e8) = pauVar37;
                        *(longlong *)(pauVar33[0x148] + 8) = lVar24 + 0x2e0;
                        pcVar9 = *(code **)(pauVar37[1] + 8);
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75531;
                        (*pcVar9)(pauVar33 + -3,uVar23,param_3);
                        unaff_R15 = *(undefined1 (**) [16])pauVar33[-3];
                        if (unaff_R15 == (undefined1 (*) [16])0x2) {
                          uVar19 = 4;
                          goto code_r0x000142a7797f;
                        }
                        unaff_R12 = *(undefined1 (**) [16])(pauVar33[-3] + 8);
                        unaff_R14 = *(undefined1 (**) [16])pauVar33[-2];
                        unaff_RBX = *(undefined1 (**) [16])(pauVar33[-2] + 8);
                        unaff_RDI = *(undefined1 (**) [16])pauVar33[-1];
                        lVar24 = *(longlong *)pauVar33[0x153];
                        *(undefined8 *)(pauVar33[0x151] + 8) = *(undefined8 *)(lVar24 + 0x2e0);
                        puVar28 = *(undefined8 **)(lVar24 + 0x2e8);
                        *(undefined8 **)(pauVar33[0x150] + 8) = puVar28;
                        pcVar9 = (code *)*puVar28;
                        if (pcVar9 != (code *)0x0) {
                          uVar23 = *(undefined8 *)(pauVar33[0x151] + 8);
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75584;
                          (*pcVar9)(uVar23);
                        }
                        pbVar36 = *(byte **)(pauVar33[0x151] + 8);
                        uVar25 = *(ulonglong *)(*(longlong *)(pauVar33[0x150] + 8) + 8);
                        if (uVar25 != 0) {
                          uVar43 = *(ulonglong *)(*(longlong *)(pauVar33[0x150] + 8) + 0x10);
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a755a5;
                          pub_1406abac0(pbVar36,uVar25,uVar43);
                        }
                        if ((int)unaff_R15 != 1) {
code_r0x000142a75696:
                          lVar24 = *(longlong *)pauVar33[0x153];
                          *(undefined1 (**) [16])(lVar24 + 0x3f0) = unaff_R14;
                          *(undefined1 (**) [16])(lVar24 + 0x3f8) = unaff_RBX;
                          *(undefined1 (**) [16])(lVar24 + 0x400) = unaff_RDI;
                          uVar23 = *(undefined8 *)(*(longlong *)(lVar24 + 0x2a0) + 8);
                          uVar67 = *(undefined8 *)(*(longlong *)(lVar24 + 0x2a0) + 0x10);
                          uVar64 = *(undefined8 *)(*(longlong *)(lVar24 + 0x200) + 0x28);
                          uVar6 = *(undefined8 *)(*(longlong *)(lVar24 + 0x200) + 0x30);
                          auVar68 = *(undefined1 (*) [16])(*(longlong *)(lVar24 + 0x2a8) + 0xa8);
                          unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
                          *(undefined1 (**) [16])pauVar33[0x136] = unaff_RDI;
                          *(undefined8 *)(pauVar33[0x135] + 8) = *(undefined8 *)pauVar33[0x152];
                          *(longlong *)((longlong)puVar47 + 0x40) = lVar24 + 0x270;
                          *(undefined1 (*) [16])((longlong)puVar47 + 0x30) = auVar68;
                          *(undefined8 *)((longlong)puVar47 + 0x20) = uVar64;
                          *(undefined8 *)((longlong)puVar47 + 0x28) = uVar6;
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75720;
                          pdb_140cea950(pauVar33 + -3,lVar24 + 0x1d0,uVar23,uVar67);
                          unaff_RBX = pauVar33 + 0x118;
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7573a;
                          pub_142e32760(unaff_RBX,pauVar33 + -3,0x108);
                          pauVar60 = (undefined1 (*) [16])0x108;
                          uVar23 = *(undefined8 *)(pauVar33[0x148] + 8);
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7574f;
                          uVar67 = pub_142e32760(uVar23,unaff_RBX);
                          param_2 = *(undefined1 (**) [16])pauVar33[0x153];
                          pauVar37 = (undefined1 (*) [16])&UNK_143633958;
                          pauVar26 = (undefined1 (*) [16])
                                     (&UNK_143633958 +
                                     *(int *)(&UNK_143633958 + (ulonglong)(byte)param_2[0x3e][5] * 4
                                             ));
                          cVar18 = (char)pauVar26;
                          uVar34 = (undefined7)((ulonglong)pauVar26 >> 8);
                          pauVar29 = pauVar26;
                          uVar23 = extraout_XMM0_Qb;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                          switch(param_2[0x3e][5]) {
                          case 0:
                            *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                            uVar23 = *(undefined8 *)(param_2[0x39] + 8);
                            auVar68 = param_2[0x3a];
                            *(undefined8 *)param_2[0x32] = *(undefined8 *)param_2[0x39];
                            *(undefined8 *)(param_2[0x32] + 8) = uVar23;
                            param_2[0x33] = auVar68;
                            unaff_R14 = *(undefined1 (**) [16])param_2[0x3b];
                            unaff_RDI = *(undefined1 (**) [16])(param_2[0x3b] + 8);
                            uVar23 = *(undefined8 *)(param_2[0x3d] + 8);
                            *(undefined8 *)param_2[0x3c] = *(undefined8 *)param_2[0x3d];
                            *(undefined8 *)(param_2[0x3c] + 8) = uVar23;
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a757b5;
                            unaff_RBX = (undefined1 (*) [16])pdb_140f3bda0();
                            if (unaff_RBX[1][0] == '\x01') {
                              pauVar26 = *(undefined1 (**) [16])*unaff_RBX;
                              param_2 = *(undefined1 (**) [16])(*unaff_RBX + 8);
                            }
                            else {
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a76033;
                              pauVar26 = (undefined1 (*) [16])pdb_140f4fd10();
                              *(undefined1 (**) [16])*unaff_RBX = pauVar26;
                              puVar55 = (undefined1 *)puVar47;
code_r0x000142a76037:
                              *(undefined1 (**) [16])(*unaff_RBX + 8) = param_2;
                              unaff_RBX[1][0] = 1;
                              puVar47 = (undefined8 *)puVar55;
                            }
                            *(undefined1 **)*unaff_RBX = *pauVar26 + 1;
                            uVar23 = _UNK_1436337f8;
                            lVar24 = *(longlong *)pauVar33[0x153];
                            *(undefined8 *)(lVar24 + 0x350) = _UNK_1436337f0;
                            *(undefined8 *)(lVar24 + 0x358) = uVar23;
                            uVar23 = _UNK_1436337e8;
                            *(undefined8 *)(lVar24 + 0x340) = _UNK_1436337e0;
                            *(undefined8 *)(lVar24 + 0x348) = uVar23;
                            *(undefined1 (**) [16])(lVar24 + 0x360) = pauVar26;
                            *(undefined1 (**) [16])(lVar24 + 0x368) = param_2;
                            pauVar37 = (undefined1 (*) [16])
                                       ((longlong)unaff_RDI * 0x3c + (longlong)unaff_R14);
                            *(undefined1 (**) [16])(lVar24 + 0x370) = unaff_R14;
                            *(undefined1 (**) [16])(lVar24 + 0x378) = pauVar37;
                            param_4 = lVar24;
                            if (unaff_R14 != pauVar37) {
code_r0x000142a75824:
                              *(undefined1 **)(param_4 + 0x370) = unaff_R14[3] + 0xc;
                              uVar23 = *(undefined8 *)*unaff_R14;
                              uVar67 = *(undefined8 *)(*unaff_R14 + 8);
                              uVar64 = *(undefined8 *)unaff_R14[1];
                              uVar6 = *(undefined8 *)(unaff_R14[1] + 8);
                              *(undefined8 *)(param_4 + 0x2e0) = 0;
                              *(undefined8 *)(param_4 + 0x2e8) = 4;
                              *(undefined1 *)(param_4 + 0x2f0) = 0;
                              *(undefined8 *)(param_4 + 0x2f4) = uVar23;
                              *(undefined1 *)(param_4 + 0x2fc) = 1;
                              *(undefined8 *)(param_4 + 0x300) = uVar67;
                              *(undefined1 *)(param_4 + 0x308) = 2;
                              *(undefined8 *)(param_4 + 0x30c) = uVar64;
                              *(undefined1 *)(param_4 + 0x314) = 3;
                              *(undefined8 *)(param_4 + 0x318) = uVar6;
                              do {
                                unaff_R12 = (undefined1 (*) [16])(param_4 + 0x2f0);
                                unaff_R15 = pauVar33 + -3;
                                iVar42 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                                          CONCAT12(unaff_XMM6_Bc,
                                                                   CONCAT11(unaff_XMM6_Bb,
                                                                            unaff_XMM6_Ba))) ==
                                                CONCAT13(unaff_XMM6_Bd,
                                                         CONCAT12(unaff_XMM6_Bc,
                                                                  CONCAT11(unaff_XMM6_Bb,
                                                                           unaff_XMM6_Ba))));
                                unaff_XMM6_Ba = (char)iVar42;
                                unaff_XMM6_Bb = (char)((uint)iVar42 >> 8);
                                unaff_XMM6_Bc = (char)((uint)iVar42 >> 0x10);
                                unaff_XMM6_Bd = (char)((uint)iVar42 >> 0x18);
                                iVar42 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                                          CONCAT12(unaff_XMM6_Bg,
                                                                   CONCAT11(unaff_XMM6_Bf,
                                                                            unaff_XMM6_Be))) ==
                                                CONCAT13(unaff_XMM6_Bh,
                                                         CONCAT12(unaff_XMM6_Bg,
                                                                  CONCAT11(unaff_XMM6_Bf,
                                                                           unaff_XMM6_Be))));
                                unaff_XMM6_Be = (char)iVar42;
                                unaff_XMM6_Bf = (char)((uint)iVar42 >> 8);
                                unaff_XMM6_Bg = (char)((uint)iVar42 >> 0x10);
                                unaff_XMM6_Bh = (char)((uint)iVar42 >> 0x18);
                                iVar42 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                                          CONCAT12(unaff_XMM6_Bk,
                                                                   CONCAT11(unaff_XMM6_Bj,
                                                                            unaff_XMM6_Bi))) ==
                                                CONCAT13(unaff_XMM6_Bl,
                                                         CONCAT12(unaff_XMM6_Bk,
                                                                  CONCAT11(unaff_XMM6_Bj,
                                                                           unaff_XMM6_Bi))));
                                unaff_XMM6_Bi = (char)iVar42;
                                unaff_XMM6_Bj = (char)((uint)iVar42 >> 8);
                                unaff_XMM6_Bk = (char)((uint)iVar42 >> 0x10);
                                unaff_XMM6_Bl = (char)((uint)iVar42 >> 0x18);
                                iVar42 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                                          CONCAT12(unaff_XMM6_Bo,
                                                                   CONCAT11(unaff_XMM6_Bn,
                                                                            unaff_XMM6_Bm))) ==
                                                CONCAT13(unaff_XMM6_Bp,
                                                         CONCAT12(unaff_XMM6_Bo,
                                                                  CONCAT11(unaff_XMM6_Bn,
                                                                           unaff_XMM6_Bm))));
                                unaff_XMM6_Bm = (char)iVar42;
                                unaff_XMM6_Bn = (char)((uint)iVar42 >> 8);
                                unaff_XMM6_Bo = (char)((uint)iVar42 >> 0x10);
                                unaff_XMM6_Bp = (char)((uint)iVar42 >> 0x18);
                                lVar24 = param_4;
code_r0x000142a78b18:
                                do {
                                  lVar32 = *(longlong *)(lVar24 + 0x2e0);
                                  if (*(longlong *)(lVar24 + 0x2e8) == lVar32) {
code_r0x000142a78c9d:
                                    unaff_R14 = *(undefined1 (**) [16])(lVar24 + 0x370);
                                    param_4 = lVar24;
                                    if (unaff_R14 != *(undefined1 (**) [16])(lVar24 + 0x378))
                                    goto code_r0x000142a75824;
                                    goto code_r0x000142a78cb4;
                                  }
                                  *(longlong *)(lVar24 + 0x2e0) = lVar32 + 1;
                                  uVar63 = *(uint *)(param_4 + 0x2f4 + lVar32 * 0xc);
                                  if (uVar63 == 2) goto code_r0x000142a78c9d;
                                  cVar18 = (*unaff_R12)[lVar32 * 0xc];
                                  iVar42 = *(int *)(param_4 + 0x2f8 + lVar32 * 0xc);
                                  *(char *)(lVar24 + 0x3e4) = cVar18;
                                } while ((uVar63 & 1) == 0);
                                *(int *)(lVar24 + 0x3e0) = iVar42;
                                pauVar33[-3][0] = cVar18;
                                *(int *)(pauVar33[-3] + 4) = iVar42;
                                if (*(longlong *)(lVar24 + 0x358) == 0) {
                                  lVar32 = *(longlong *)pauVar33[0x153];
                                }
                                else {
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78b85;
                                  uVar43 = pdb_1417c41e0(param_4 + 0x360,unaff_R15);
                                  lVar24 = *(longlong *)(*(longlong *)pauVar33[0x153] + 0x340);
                                  uVar25 = *(ulonglong *)(*(longlong *)pauVar33[0x153] + 0x348);
                                  bVar41 = (byte)(uVar43 >> 0x39);
                                  auVar68 = ZEXT216(CONCAT11(bVar41,bVar41));
                                  auVar68 = pshuflw(auVar68,auVar68,0);
                                  lVar32 = 0;
                                  while( true ) {
                                    uVar43 = uVar43 & uVar25;
                                    auVar10 = *(undefined1 (*) [16])(lVar24 + uVar43);
                                    auVar70[0] = -(auVar10[0] == auVar68[0]);
                                    auVar70[1] = -(auVar10[1] == auVar68[1]);
                                    auVar70[2] = -(auVar10[2] == auVar68[2]);
                                    auVar70[3] = -(auVar10[3] == auVar68[3]);
                                    auVar70[4] = -(auVar10[4] == auVar68[4]);
                                    auVar70[5] = -(auVar10[5] == auVar68[5]);
                                    auVar70[6] = -(auVar10[6] == auVar68[6]);
                                    auVar70[7] = -(auVar10[7] == auVar68[7]);
                                    auVar70[8] = -(auVar10[8] == auVar68[0]);
                                    auVar70[9] = -(auVar10[9] == auVar68[1]);
                                    auVar70[10] = -(auVar10[10] == auVar68[2]);
                                    auVar70[0xb] = -(auVar10[0xb] == auVar68[3]);
                                    auVar70[0xc] = -(auVar10[0xc] == auVar68[4]);
                                    auVar70[0xd] = -(auVar10[0xd] == auVar68[5]);
                                    auVar70[0xe] = -(auVar10[0xe] == auVar68[6]);
                                    auVar70[0xf] = -(auVar10[0xf] == auVar68[7]);
                                    uVar61 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                                             (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                                             (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                                             (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                                             (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                                             (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                                             (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                                             (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                                             (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                                             (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                                             (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                                             (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                                             (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                                             (ushort)(auVar70[0xf] >> 7) << 0xf;
                                    uVar63 = (uint)uVar61;
                                    while (uVar61 != 0) {
                                      uVar21 = 0;
                                      for (uVar35 = uVar63; (uVar35 & 1) == 0;
                                          uVar35 = uVar35 >> 1 | 0x80000000) {
                                        uVar21 = uVar21 + 1;
                                      }
                                      lVar22 = lVar24 + (uVar21 + uVar43 & uVar25) * -0x20;
                                      if ((cVar18 == *(char *)(lVar22 + -0x20)) &&
                                         (iVar42 == *(int *)(lVar22 + -0x1c))) {
                                        lVar24 = *(longlong *)pauVar33[0x153];
                                        goto code_r0x000142a78b18;
                                      }
                                      uVar61 = (ushort)(uVar63 - 1) & (ushort)uVar63;
                                      uVar63 = CONCAT22((short)(uVar63 - 1 >> 0x10),uVar61);
                                    }
                                    auVar69[0] = -(auVar10[0] == unaff_XMM6_Ba);
                                    auVar69[1] = -(auVar10[1] == unaff_XMM6_Bb);
                                    auVar69[2] = -(auVar10[2] == unaff_XMM6_Bc);
                                    auVar69[3] = -(auVar10[3] == unaff_XMM6_Bd);
                                    auVar69[4] = -(auVar10[4] == unaff_XMM6_Be);
                                    auVar69[5] = -(auVar10[5] == unaff_XMM6_Bf);
                                    auVar69[6] = -(auVar10[6] == unaff_XMM6_Bg);
                                    auVar69[7] = -(auVar10[7] == unaff_XMM6_Bh);
                                    auVar69[8] = -(auVar10[8] == unaff_XMM6_Bi);
                                    auVar69[9] = -(auVar10[9] == unaff_XMM6_Bj);
                                    auVar69[10] = -(auVar10[10] == unaff_XMM6_Bk);
                                    auVar69[0xb] = -(auVar10[0xb] == unaff_XMM6_Bl);
                                    auVar69[0xc] = -(auVar10[0xc] == unaff_XMM6_Bm);
                                    auVar69[0xd] = -(auVar10[0xd] == unaff_XMM6_Bn);
                                    auVar69[0xe] = -(auVar10[0xe] == unaff_XMM6_Bo);
                                    auVar69[0xf] = -(auVar10[0xf] == unaff_XMM6_Bp);
                                    if ((((((((((((((((SUB161(auVar69 >> 7,0) & 1) != 0 ||
                                                     (SUB161(auVar69 >> 0xf,0) & 1) != 0) ||
                                                    (SUB161(auVar69 >> 0x17,0) & 1) != 0) ||
                                                   (SUB161(auVar69 >> 0x1f,0) & 1) != 0) ||
                                                  (SUB161(auVar69 >> 0x27,0) & 1) != 0) ||
                                                 (SUB161(auVar69 >> 0x2f,0) & 1) != 0) ||
                                                (SUB161(auVar69 >> 0x37,0) & 1) != 0) ||
                                               (SUB161(auVar69 >> 0x3f,0) & 1) != 0) ||
                                              (SUB161(auVar69 >> 0x47,0) & 1) != 0) ||
                                             (SUB161(auVar69 >> 0x4f,0) & 1) != 0) ||
                                            (SUB161(auVar69 >> 0x57,0) & 1) != 0) ||
                                           (SUB161(auVar69 >> 0x5f,0) & 1) != 0) ||
                                          (SUB161(auVar69 >> 0x67,0) & 1) != 0) ||
                                         (SUB161(auVar69 >> 0x6f,0) & 1) != 0) ||
                                        (SUB161(auVar69 >> 0x77,0) & 1) != 0) || auVar69[0xf] < '\0'
                                       ) break;
                                    uVar43 = uVar43 + lVar32 + 0x10;
                                    lVar32 = lVar32 + 0x10;
                                  }
                                  lVar32 = *(longlong *)pauVar33[0x153];
                                  cVar18 = *(char *)(lVar32 + 0x3e4);
                                }
                                if (cVar18 == '\x02') {
                                  uVar43 = (ulonglong)*(uint *)(lVar32 + 0x3e0);
                                  uVar25 = *(ulonglong *)(lVar32 + 0x338);
                                  if (uVar25 <= uVar43) {
                    /* WARNING: Subroutine does not return */
                                    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a79148;
                                    pdb_142dc81f2(uVar43,uVar25,&UNK_1436336a0);
                                  }
                                  uVar23 = *(undefined8 *)(lVar32 + 0x3c0);
                                  lVar24 = *(longlong *)
                                            (*(longlong *)(lVar32 + 0x330) + uVar43 * 0x10);
                                  uVar67 = *(undefined8 *)
                                            (*(longlong *)(lVar32 + 0x330) + 8 + uVar43 * 0x10);
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78c7c;
                                  uVar23 = pdb_1417129b0(uVar23,lVar24,uVar67);
                                  lVar32 = *(longlong *)pauVar33[0x153];
                                  *(undefined8 *)(lVar32 + 0x380) = uVar23;
                                  *(longlong *)(lVar32 + 0x388) = lVar24;
code_r0x000142a784c7:
                                  pcVar9 = *(code **)(lVar24 + 0x18);
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a784d2;
                                  (*pcVar9)(pauVar33 + -3,uVar23,param_3);
                                  lVar24 = *(longlong *)pauVar33[-3];
                                  if (lVar24 != 2) {
                                    uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
                                    unaff_R15 = *(undefined1 (**) [16])pauVar33[-2];
                                    unaff_R12 = *(undefined1 (**) [16])(pauVar33[-2] + 8);
                                    plVar31 = *(longlong **)pauVar33[-1];
                                    lVar32 = *(longlong *)pauVar33[0x153];
                                    *(undefined8 *)(pauVar33[0x151] + 8) =
                                         *(undefined8 *)(lVar32 + 0x380);
                                    puVar28 = *(undefined8 **)(lVar32 + 0x388);
                                    *(undefined8 **)(pauVar33[0x150] + 8) = puVar28;
                                    pcVar9 = (code *)*puVar28;
                                    if (pcVar9 != (code *)0x0) {
                                      uVar67 = *(undefined8 *)(pauVar33[0x151] + 8);
                                      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78528;
                                      (*pcVar9)(uVar67);
                                    }
                                    pbVar36 = *(byte **)(pauVar33[0x151] + 8);
                                    uVar25 = *(ulonglong *)(*(longlong *)(pauVar33[0x150] + 8) + 8);
                                    if (uVar25 != 0) {
                                      uVar43 = *(ulonglong *)
                                                (*(longlong *)(pauVar33[0x150] + 8) + 0x10);
                                      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78549;
                                      pub_1406abac0(pbVar36,uVar25,uVar43);
                                    }
                                    if ((int)lVar24 != 1) {
                                      *(undefined1 (**) [16])pauVar33[0x14b] = unaff_R15;
                                      *(undefined1 (**) [16])(pauVar33[0x14b] + 8) = unaff_R12;
                                      *(longlong **)pauVar33[0x14c] = plVar31;
                                      LOCK();
                                      *plVar31 = *plVar31 + -1;
                                      UNLOCK();
                                      if (*plVar31 == 0) {
                                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7864e;
                                        pdb_140cd0de0(pauVar33 + 0x14c);
                                      }
                                      cVar18 = *(char *)(*(longlong *)pauVar33[0x153] + 0x3e4);
                                      goto code_r0x000142a78841;
                                    }
                                    *(undefined8 *)pauVar33[-3] = uVar23;
                                    *(undefined1 (**) [16])(pauVar33[-3] + 8) = unaff_R15;
                                    *(undefined1 (**) [16])pauVar33[-2] = unaff_R12;
                                    *(longlong **)(pauVar33[-2] + 8) = plVar31;
                                    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7856b;
                                    uVar23 = pdb_142deada0(pauVar33 + -3);
                                    *(undefined1 (**) [16])(pauVar33[0x151] + 8) = param_3;
                                    lVar24 = *(longlong *)pauVar33[0x153];
                                    lVar32 = *(longlong *)(lVar24 + 0x348);
                                    if (lVar32 != 0) {
                                      lVar24 = *(longlong *)(lVar24 + 0x358);
                                      if (lVar24 != 0) {
                                        unaff_R12 = *(undefined1 (**) [16])
                                                     (*(longlong *)pauVar33[0x153] + 0x340);
                                        auVar68 = *unaff_R12;
                                        pauVar37 = unaff_R12 + 1;
                                        uVar63 = ~(uint)(ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1
                                                                         ) |
                                                                 (ushort)(SUB161(auVar68 >> 0xf,0) &
                                                                         1) << 1 |
                                                                 (ushort)(SUB161(auVar68 >> 0x17,0)
                                                                         & 1) << 2 |
                                                                 (ushort)(SUB161(auVar68 >> 0x1f,0)
                                                                         & 1) << 3 |
                                                                 (ushort)(SUB161(auVar68 >> 0x27,0)
                                                                         & 1) << 4 |
                                                                 (ushort)(SUB161(auVar68 >> 0x2f,0)
                                                                         & 1) << 5 |
                                                                 (ushort)(SUB161(auVar68 >> 0x37,0)
                                                                         & 1) << 6 |
                                                                 (ushort)(SUB161(auVar68 >> 0x3f,0)
                                                                         & 1) << 7 |
                                                                 (ushort)(SUB161(auVar68 >> 0x47,0)
                                                                         & 1) << 8 |
                                                                 (ushort)(SUB161(auVar68 >> 0x4f,0)
                                                                         & 1) << 9 |
                                                                 (ushort)(SUB161(auVar68 >> 0x57,0)
                                                                         & 1) << 10 |
                                                                 (ushort)(SUB161(auVar68 >> 0x5f,0)
                                                                         & 1) << 0xb |
                                                                 (ushort)(SUB161(auVar68 >> 0x67,0)
                                                                         & 1) << 0xc |
                                                                 (ushort)(SUB161(auVar68 >> 0x6f,0)
                                                                         & 1) << 0xd |
                                                                 (ushort)(SUB161(auVar68 >> 0x77,0)
                                                                         & 1) << 0xe |
                                                                (ushort)(byte)(auVar68[0xf] >> 7) <<
                                                                0xf);
                                        do {
                                          if ((short)uVar63 == 0) {
                                            do {
                                              auVar68 = *pauVar37;
                                              unaff_R12 = unaff_R12 + -0x20;
                                              pauVar37 = pauVar37 + 1;
                                              uVar63 = (ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1)
                                                                | (ushort)(SUB161(auVar68 >> 0xf,0)
                                                                          & 1) << 1 |
                                                                (ushort)(SUB161(auVar68 >> 0x17,0) &
                                                                        1) << 2 |
                                                                (ushort)(SUB161(auVar68 >> 0x1f,0) &
                                                                        1) << 3 |
                                                                (ushort)(SUB161(auVar68 >> 0x27,0) &
                                                                        1) << 4 |
                                                                (ushort)(SUB161(auVar68 >> 0x2f,0) &
                                                                        1) << 5 |
                                                                (ushort)(SUB161(auVar68 >> 0x37,0) &
                                                                        1) << 6 |
                                                                (ushort)(SUB161(auVar68 >> 0x3f,0) &
                                                                        1) << 7 |
                                                                (ushort)(SUB161(auVar68 >> 0x47,0) &
                                                                        1) << 8 |
                                                                (ushort)(SUB161(auVar68 >> 0x4f,0) &
                                                                        1) << 9 |
                                                                (ushort)(SUB161(auVar68 >> 0x57,0) &
                                                                        1) << 10 |
                                                                (ushort)(SUB161(auVar68 >> 0x5f,0) &
                                                                        1) << 0xb |
                                                                (ushort)(SUB161(auVar68 >> 0x67,0) &
                                                                        1) << 0xc |
                                                                (ushort)(SUB161(auVar68 >> 0x6f,0) &
                                                                        1) << 0xd |
                                                                (ushort)(SUB161(auVar68 >> 0x77,0) &
                                                                        1) << 0xe |
                                                               (ushort)(byte)(auVar68[0xf] >> 7) <<
                                                               0xf) ^ 0xffff;
                                            } while (uVar63 == 0);
                                          }
                                          iVar42 = 0;
                                          for (uVar21 = uVar63; (uVar21 & 1) == 0;
                                              uVar21 = uVar21 >> 1 | 0x80000000) {
                                            iVar42 = iVar42 + 1;
                                          }
                                          uVar25 = *(ulonglong *)
                                                    ((longlong)unaff_R12 +
                                                    (-0x18 - (ulonglong)(uint)(iVar42 << 5)));
                                          if (uVar25 != 0) {
                                            pbVar36 = *(byte **)((longlong)unaff_R12 +
                                                                (-0x10 - (ulonglong)
                                                                         (uint)(iVar42 << 5)));
                                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78622;
                                            pub_1406abac0(pbVar36,uVar25,1);
                                          }
                                          uVar63 = uVar63 - 1 & uVar63;
                                          lVar24 = lVar24 + -1;
                                        } while (lVar24 != 0);
                                      }
                                      unaff_R15 = (undefined1 (*) [16])0x0;
                                      lVar22 = lVar32 * 0x20 + 0x20;
                                      uVar25 = lVar32 + lVar22 + 0x11;
                                      lVar24 = *(longlong *)pauVar33[0x153];
                                      if (uVar25 != 0) {
                                        lVar32 = *(longlong *)(lVar24 + 0x340);
                                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78699;
                                        pub_1406abac0((byte *)(lVar32 - lVar22),uVar25,0x10);
                                      }
                                    }
                                    *(undefined1 *)(lVar24 + 0x3e5) = 1;
                                    param_3 = *(undefined1 (**) [16])(pauVar33[0x151] + 8);
                                    goto code_r0x000142a786a7;
                                  }
                                  lVar24 = *(longlong *)pauVar33[0x153];
                                  *(undefined1 *)(lVar24 + 0x3e5) = 3;
                                  uVar19 = 5;
                                  goto code_r0x000142a78823;
                                }
                                uVar43 = (ulonglong)*(uint *)(lVar32 + 0x3e0);
                                uVar25 = *(ulonglong *)(lVar32 + 0x338);
                                if (uVar25 <= uVar43) {
                    /* WARNING: Subroutine does not return */
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7915a;
                                  pdb_142dc81f2(uVar43,uVar25,&UNK_1436336b8);
                                }
                                unaff_R15 = *(undefined1 (**) [16])
                                             (*(longlong *)(lVar32 + 0x330) + uVar43 * 0x10);
                                unaff_R12 = *(undefined1 (**) [16])
                                             (*(longlong *)(lVar32 + 0x330) + 8 + uVar43 * 0x10);
code_r0x000142a78841:
                                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78848;
                                uVar23 = pdb_140ceaa80(cVar18);
                                *(undefined8 *)pauVar33[0x145] = uVar23;
                                *(ulonglong *)(pauVar33[0x145] + 8) = uVar25;
                                lVar24 = *(longlong *)pauVar33[0x153];
                                *(undefined1 (**) [16])pauVar33[-3] = pauVar33 + 0x145;
                                *(code **)(pauVar33[-3] + 8) = pdb_1402ed400;
                                *(longlong *)pauVar33[-2] = lVar24 + 800;
                                *(code **)(pauVar33[-2] + 8) = pdb_1402ed400;
                                *(longlong *)pauVar33[-1] = lVar24 + 0x3e0;
                                *(code **)(pauVar33[-1] + 8) = pdb_140f71a50;
                                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a788b0;
                                pdb_140f60760(pauVar33 + 0x14b,&UNK_143633698,pauVar33 + -3);
                                uVar23 = *(undefined8 *)(pauVar33[0x14b] + 8);
                                *(undefined8 *)pauVar33[0x137] = *(undefined8 *)pauVar33[0x14b];
                                *(undefined8 *)(pauVar33[0x137] + 8) = uVar23;
                                pauVar37 = *(undefined1 (**) [16])pauVar33[0x14c];
                                *(undefined1 (**) [16])pauVar33[0x138] = pauVar37;
                                if ((longlong)pauVar37 < 0) {
                                  uVar23 = 0;
                                  pauVar37 = unaff_RDI;
code_r0x000142a788d6:
                                  pauVar33[0x150][7] = 1;
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a788e5;
                                  pdb_142dc7e2a(uVar23,pauVar37);
                                  goto code_r0x000142a772bf;
                                }
                                plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x3c8);
                                pbVar36 = (byte *)0x1;
                                if (pauVar37 != (undefined1 (*) [16])0x0) {
                                  uVar23 = *(undefined8 *)(pauVar33[0x137] + 8);
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7890c;
                                  pdb_14007ee60();
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78919;
                                  pbVar36 = pub_1406abab0((ulonglong)pauVar37,1);
                                  if (pbVar36 == (byte *)0x0) {
                                    uVar23 = 1;
                                    goto code_r0x000142a788d6;
                                  }
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78933;
                                  pub_142e32760(pbVar36,uVar23,pauVar37);
                                }
                                *(undefined1 (**) [16])(pauVar33[0x150] + 8) = pauVar37;
                                *(byte **)(pauVar33[0x151] + 8) = pbVar36;
                                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78955;
                                pdb_140f60be0(pauVar33 + 0x13a,pauVar33 + 0x137);
                                uVar19 = *(undefined1 *)(*(longlong *)pauVar33[0x153] + 0x3e4);
                                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78970;
                                pdb_140ceaa40(pauVar33 + 0x145,uVar19);
                                *(undefined8 *)(pauVar33[1] + 8) = *(undefined8 *)pauVar33[0x13b];
                                *(undefined8 *)(*pauVar33 + 8) = *(undefined8 *)pauVar33[0x13a];
                                *(undefined8 *)pauVar33[1] = *(undefined8 *)(pauVar33[0x13a] + 8);
                                *(undefined8 *)pauVar33[-3] = 0x8000000000000000;
                                *(undefined1 (**) [16])pauVar33[-2] = unaff_R15;
                                *(undefined1 (**) [16])(pauVar33[-2] + 8) = unaff_R12;
                                uVar23 = *(undefined8 *)(pauVar33[0x145] + 8);
                                *(undefined8 *)pauVar33[-1] = *(undefined8 *)pauVar33[0x145];
                                *(undefined8 *)(pauVar33[-1] + 8) = uVar23;
                                *(undefined8 *)*pauVar33 = *(undefined8 *)pauVar33[0x146];
                                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a789c8;
                                pdb_140d9d030(pauVar33 + 0x14b,pauVar33 + -3);
                                uVar23 = *(undefined8 *)(pauVar33[0x150] + 8);
                                *(undefined8 *)pauVar33[-3] = uVar23;
                                *(undefined8 *)(pauVar33[-3] + 8) =
                                     *(undefined8 *)(pauVar33[0x151] + 8);
                                *(undefined8 *)pauVar33[-2] = uVar23;
                                uVar7 = *(undefined8 *)(pauVar33[0x14b] + 8);
                                uVar23 = *(undefined8 *)pauVar33[0x14c];
                                uVar67 = *(undefined8 *)(pauVar33[0x14c] + 8);
                                uVar64 = *(undefined8 *)pauVar33[0x14d];
                                uVar6 = *(undefined8 *)(pauVar33[0x14d] + 8);
                                uVar4 = *(undefined4 *)pauVar33[0x14e];
                                uVar5 = *(undefined4 *)(pauVar33[0x14e] + 4);
                                uVar11 = *(undefined4 *)(pauVar33[0x14e] + 8);
                                uVar12 = *(undefined4 *)(pauVar33[0x14e] + 0xc);
                                *(undefined8 *)pauVar33[-1] = *(undefined8 *)pauVar33[0x14b];
                                *(undefined8 *)(pauVar33[-1] + 8) = uVar7;
                                *(undefined8 *)*pauVar33 = uVar23;
                                *(undefined8 *)(*pauVar33 + 8) = uVar67;
                                *(undefined8 *)pauVar33[1] = uVar64;
                                *(undefined8 *)(pauVar33[1] + 8) = uVar6;
                                *(undefined4 *)pauVar33[2] = uVar4;
                                *(undefined4 *)(pauVar33[2] + 4) = uVar5;
                                *(undefined4 *)(pauVar33[2] + 8) = uVar11;
                                *(undefined4 *)(pauVar33[2] + 0xc) = uVar12;
                                uVar23 = *(undefined8 *)(pauVar33[0x14f] + 8);
                                *(undefined8 *)pauVar33[3] = *(undefined8 *)pauVar33[0x14f];
                                *(undefined8 *)(pauVar33[3] + 8) = uVar23;
                                lVar24 = plVar31[2];
                                if (lVar24 == *plVar31) {
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78a31;
                                  pdb_142d8dd60(plVar31);
                                }
                                lVar32 = plVar31[1];
                                lVar22 = lVar24 * 0x70;
                                uVar23 = *(undefined8 *)(pauVar33[3] + 8);
                                puVar28 = (undefined8 *)(lVar32 + 0x60 + lVar22);
                                *puVar28 = *(undefined8 *)pauVar33[3];
                                puVar28[1] = uVar23;
                                uVar23 = *(undefined8 *)(pauVar33[2] + 8);
                                puVar28 = (undefined8 *)(lVar32 + 0x50 + lVar22);
                                *puVar28 = *(undefined8 *)pauVar33[2];
                                puVar28[1] = uVar23;
                                uVar23 = *(undefined8 *)(pauVar33[1] + 8);
                                puVar28 = (undefined8 *)(lVar32 + 0x40 + lVar22);
                                *puVar28 = *(undefined8 *)pauVar33[1];
                                puVar28[1] = uVar23;
                                uVar23 = *(undefined8 *)pauVar33[-3];
                                uVar67 = *(undefined8 *)(pauVar33[-3] + 8);
                                auVar68 = pauVar33[-2];
                                auVar10 = pauVar33[-1];
                                uVar4 = *(undefined4 *)(*pauVar33 + 4);
                                uVar5 = *(undefined4 *)(*pauVar33 + 8);
                                uVar11 = *(undefined4 *)(*pauVar33 + 0xc);
                                puVar2 = (undefined4 *)(lVar32 + 0x30 + lVar22);
                                *puVar2 = *(undefined4 *)*pauVar33;
                                puVar2[1] = uVar4;
                                puVar2[2] = uVar5;
                                puVar2[3] = uVar11;
                                *(undefined1 (*) [16])(lVar32 + 0x20 + lVar22) = auVar10;
                                *(undefined1 (*) [16])(lVar32 + 0x10 + lVar22) = auVar68;
                                *(undefined8 *)(lVar32 + lVar22) = uVar23;
                                ((undefined8 *)(lVar32 + lVar22))[1] = uVar67;
                                plVar31[2] = lVar24 + 1;
                                lVar24 = *(longlong *)pauVar33[0x153];
                                uVar19 = *(undefined1 *)(lVar24 + 0x3e4);
                                uVar4 = *(undefined4 *)(lVar24 + 0x3e0);
                                *(undefined8 *)pauVar33[-2] = *(undefined8 *)pauVar33[0x138];
                                uVar23 = *(undefined8 *)(pauVar33[0x137] + 8);
                                *(undefined8 *)pauVar33[-3] = *(undefined8 *)pauVar33[0x137];
                                *(undefined8 *)(pauVar33[-3] + 8) = uVar23;
                                pauVar33[0x150][7] = 0;
                                *(undefined1 (**) [16])((longlong)puVar47 + 0x20) = pauVar33 + -3;
                                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78ad0;
                                pdb_1417babc0(pauVar33 + 0x14b,lVar24 + 0x340,uVar19,uVar4);
                                uVar25 = *(ulonglong *)pauVar33[0x14b];
                                unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x151] + 8);
                                if ((!SBORROW8(0,uVar25)) && (uVar25 != 0)) {
                                  pbVar36 = *(byte **)(pauVar33[0x14b] + 8);
                                  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78afb;
                                  pub_1406abac0(pbVar36,uVar25,1);
                                }
                                param_4 = *(longlong *)pauVar33[0x153];
                              } while( true );
                            }
code_r0x000142a78cb4:
                            lVar32 = *(longlong *)(lVar24 + 0x340);
                            uVar23 = *(undefined8 *)(lVar24 + 0x348);
                            *(undefined1 *)(lVar24 + 0x3e5) = 1;
                            if (lVar32 == 0) {
code_r0x000142a786a7:
                              *(undefined8 *)pauVar33[0x13a] = uVar23;
                              *(undefined1 (**) [16])pauVar33[0x145] = pauVar33 + 0x13a;
                              *(code **)(pauVar33[0x145] + 8) = pdb_140f36c30;
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a786e1;
                              pdb_140f60760(pauVar33 + -3,&UNK_1436335f1,pauVar33 + 0x145);
                              lVar24 = *(longlong *)pauVar33[0x153];
                              uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
                              *(undefined8 *)pauVar33[0x14b] = *(undefined8 *)pauVar33[-3];
                              *(undefined8 *)(pauVar33[0x14b] + 8) = uVar23;
                              *(undefined8 *)pauVar33[0x14c] = *(undefined8 *)pauVar33[-2];
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78714;
                              pdb_142a7c280(lVar24 + 0x210,pauVar33 + 0x14b);
                              uVar23 = *(undefined8 *)(pauVar33[0x152] + 8);
                              *(undefined8 *)pauVar33[0x136] = uVar23;
                              *(undefined8 *)(pauVar33[0x135] + 8) = *(undefined8 *)pauVar33[0x152];
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7873d;
                              pdb_140f36c40(pauVar33 + 0x13a);
                              lVar24 = *(longlong *)pauVar33[0x153];
                              plVar31 = *(longlong **)(lVar24 + 0x400);
                              LOCK();
                              *plVar31 = *plVar31 + -1;
                              UNLOCK();
                              if (*plVar31 == 0) {
                                *(undefined8 *)(pauVar33[0x14a] + 8) = uVar23;
                                *(undefined8 *)pauVar33[0x14a] = *(undefined8 *)pauVar33[0x152];
                                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78773;
                                pdb_140c7b710(lVar24 + 0x400);
                              }
                              goto code_r0x000142a78774;
                            }
                            uVar67 = *(undefined8 *)(lVar24 + 0x350);
                            uVar64 = *(undefined8 *)(lVar24 + 0x358);
                            uVar6 = *(undefined8 *)(lVar24 + 0x368);
                            *(undefined8 *)pauVar33[0x142] = *(undefined8 *)(lVar24 + 0x360);
                            *(undefined8 *)(pauVar33[0x142] + 8) = uVar6;
                            *(undefined8 *)pauVar33[0x141] = uVar67;
                            *(undefined8 *)(pauVar33[0x141] + 8) = uVar64;
                            *(longlong *)pauVar33[0x140] = lVar32;
                            *(undefined8 *)(pauVar33[0x140] + 8) = uVar23;
                            *(undefined1 (**) [16])pauVar33[0x13a] = pauVar33 + 0x140;
                            lVar32 = *(longlong *)(*(longlong *)(lVar24 + 0x2a8) + 0xa8);
                            lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x2a8) + 0xb0);
                            *(longlong *)pauVar33[-3] = lVar32;
                            *(longlong *)(pauVar33[-3] + 8) = lVar24 * 0x3c + lVar32;
                            *(undefined1 (**) [16])pauVar33[-2] = pauVar33 + 0x13a;
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78d4d;
                            pdb_1415e92d0(pauVar33 + 0x145,pauVar33 + -3);
                            *(undefined8 *)pauVar33[0x118] =
                                 *(undefined8 *)(*(longlong *)pauVar33[0x153] + 0x2a0);
                            *(code **)(pauVar33[0x118] + 8) = pdb_140001020;
                            pauVar33[0x150][5] = 1;
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78d8f;
                            pdb_140f60760(pauVar33 + -3,&UNK_1436335e0,pauVar33 + 0x118);
                            uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
                            *(undefined8 *)pauVar33[0x14b] = *(undefined8 *)pauVar33[-3];
                            *(undefined8 *)(pauVar33[0x14b] + 8) = uVar23;
                            *(undefined8 *)pauVar33[0x14c] = *(undefined8 *)pauVar33[-2];
                            pauVar33[0x151][7] = 1;
                            lVar24 = *(longlong *)pauVar33[0x153];
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78dc9;
                            pdb_140f60be0(pauVar33 + 0x118,pauVar33 + 0x14b);
                            uVar23 = *(undefined8 *)(*(longlong *)(lVar24 + 0x400) + 0x10);
                            uVar67 = *(undefined8 *)(*(longlong *)(lVar24 + 0x400) + 0x18);
                            pauVar33[0x151][7] = 1;
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78df0;
                            pdb_140cf7080(pauVar33 + -3,pauVar33 + 0x118,uVar23,uVar67);
                            unaff_R15 = (undefined1 (*) [16])(lVar24 + 0x400);
                            lVar32 = *(longlong *)(lVar24 + 0x280);
                            if (lVar32 == *(longlong *)(lVar24 + 0x270)) {
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78e1b;
                              pdb_142d8dd60(lVar24 + 0x270);
                            }
                            lVar22 = *(longlong *)(lVar24 + 0x278);
                            lVar39 = lVar32 * 0x70;
                            uVar23 = *(undefined8 *)(pauVar33[3] + 8);
                            puVar28 = (undefined8 *)(lVar22 + 0x60 + lVar39);
                            *puVar28 = *(undefined8 *)pauVar33[3];
                            puVar28[1] = uVar23;
                            uVar23 = *(undefined8 *)(pauVar33[2] + 8);
                            puVar28 = (undefined8 *)(lVar22 + 0x50 + lVar39);
                            *puVar28 = *(undefined8 *)pauVar33[2];
                            puVar28[1] = uVar23;
                            uVar23 = *(undefined8 *)(pauVar33[1] + 8);
                            puVar28 = (undefined8 *)(lVar22 + 0x40 + lVar39);
                            *puVar28 = *(undefined8 *)pauVar33[1];
                            puVar28[1] = uVar23;
                            uVar23 = *(undefined8 *)pauVar33[-3];
                            uVar67 = *(undefined8 *)(pauVar33[-3] + 8);
                            uVar64 = *(undefined8 *)pauVar33[-2];
                            uVar6 = *(undefined8 *)(pauVar33[-2] + 8);
                            uVar7 = *(undefined8 *)pauVar33[-1];
                            uVar13 = *(undefined8 *)(pauVar33[-1] + 8);
                            uVar4 = *(undefined4 *)(*pauVar33 + 4);
                            uVar5 = *(undefined4 *)(*pauVar33 + 8);
                            uVar11 = *(undefined4 *)(*pauVar33 + 0xc);
                            puVar2 = (undefined4 *)(lVar22 + 0x30 + lVar39);
                            *puVar2 = *(undefined4 *)*pauVar33;
                            puVar2[1] = uVar4;
                            puVar2[2] = uVar5;
                            puVar2[3] = uVar11;
                            puVar28 = (undefined8 *)(lVar22 + 0x20 + lVar39);
                            *puVar28 = uVar7;
                            puVar28[1] = uVar13;
                            puVar28 = (undefined8 *)(lVar22 + 0x10 + lVar39);
                            *puVar28 = uVar64;
                            puVar28[1] = uVar6;
                            *(undefined8 *)(lVar22 + lVar39) = uVar23;
                            ((undefined8 *)(lVar22 + lVar39))[1] = uVar67;
                            *(longlong *)(lVar24 + 0x280) = lVar32 + 1;
                            uVar23 = *(undefined8 *)(lVar24 + 0x2a0);
                            pauVar33[0x151][7] = 1;
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78e8f;
                            pdb_140f60be0(pauVar33 + 0x118,uVar23);
                            puVar28 = (undefined8 *)(lVar24 + 0x200);
                            uVar23 = *(undefined8 *)(*(longlong *)(lVar24 + 0x200) + 0x10);
                            uVar67 = *(undefined8 *)(*(longlong *)(lVar24 + 0x200) + 0x18);
                            *(undefined8 *)(*pauVar33 + 8) = *(undefined8 *)pauVar33[0x146];
                            uVar64 = *(undefined8 *)(pauVar33[0x145] + 8);
                            *(undefined8 *)(pauVar33[-1] + 8) = *(undefined8 *)pauVar33[0x145];
                            *(undefined8 *)*pauVar33 = uVar64;
                            uVar64 = *(undefined8 *)(pauVar33[0x14b] + 8);
                            *(undefined8 *)pauVar33[1] = *(undefined8 *)pauVar33[0x14b];
                            *(undefined8 *)(pauVar33[1] + 8) = uVar64;
                            *(undefined8 *)pauVar33[2] = *(undefined8 *)pauVar33[0x14c];
                            uVar25 = *(ulonglong *)(*(longlong *)(lVar24 + 0x2a8) + 0x20);
                            uVar4 = *(undefined4 *)(*(longlong *)(lVar24 + 0x2a8) + 0x38);
                            *(undefined8 *)pauVar33[-1] = *(undefined8 *)pauVar33[0x119];
                            uVar64 = *(undefined8 *)(pauVar33[0x118] + 8);
                            *(undefined8 *)pauVar33[-2] = *(undefined8 *)pauVar33[0x118];
                            *(undefined8 *)(pauVar33[-2] + 8) = uVar64;
                            *(undefined8 *)pauVar33[-3] = uVar23;
                            *(undefined8 *)(pauVar33[-3] + 8) = uVar67;
                            *(int *)(pauVar33[2] + 8) = (int)(uVar25 / 3);
                            *(undefined4 *)(pauVar33[2] + 0xc) = uVar4;
                            lVar32 = *(longlong *)(lVar24 + 0x250);
                            if (lVar32 == *(longlong *)(lVar24 + 0x240)) {
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78f29;
                              pdb_142d91e10(lVar24 + 0x240);
                            }
                            lVar22 = *(longlong *)(lVar24 + 0x248);
                            lVar39 = lVar32 * 0x60;
                            uVar23 = *(undefined8 *)(pauVar33[2] + 8);
                            puVar54 = (undefined8 *)(lVar22 + 0x50 + lVar39);
                            *puVar54 = *(undefined8 *)pauVar33[2];
                            puVar54[1] = uVar23;
                            uVar23 = *(undefined8 *)(pauVar33[1] + 8);
                            puVar54 = (undefined8 *)(lVar22 + 0x40 + lVar39);
                            *puVar54 = *(undefined8 *)pauVar33[1];
                            puVar54[1] = uVar23;
                            uVar23 = *(undefined8 *)pauVar33[-3];
                            uVar67 = *(undefined8 *)(pauVar33[-3] + 8);
                            auVar68 = pauVar33[-2];
                            auVar10 = pauVar33[-1];
                            uVar64 = *(undefined8 *)(*pauVar33 + 8);
                            puVar54 = (undefined8 *)(lVar22 + 0x30 + lVar39);
                            *puVar54 = *(undefined8 *)*pauVar33;
                            puVar54[1] = uVar64;
                            *(undefined1 (*) [16])(lVar22 + 0x20 + lVar39) = auVar10;
                            *(undefined1 (*) [16])(lVar22 + 0x10 + lVar39) = auVar68;
                            *(undefined8 *)(lVar22 + lVar39) = uVar23;
                            ((undefined8 *)(lVar22 + lVar39))[1] = uVar67;
                            *(longlong *)(lVar24 + 0x250) = lVar32 + 1;
                            lVar32 = *(longlong *)(pauVar33[0x140] + 8);
                            unaff_R12 = (undefined1 (*) [16])0x0;
                            if (lVar32 != 0) {
                              *(undefined8 **)(pauVar33[0x150] + 8) = puVar28;
                              *(undefined1 (**) [16])(pauVar33[0x151] + 8) = unaff_R15;
                              lVar22 = *(longlong *)(pauVar33[0x141] + 8);
                              if (lVar22 != 0) {
                                pauVar26 = *(undefined1 (**) [16])pauVar33[0x140];
                                auVar68 = *pauVar26;
                                pauVar37 = pauVar26 + 1;
                                uVar63 = ~(uint)(ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                                                         (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1
                                                         | (ushort)(SUB161(auVar68 >> 0x17,0) & 1)
                                                           << 2 | (ushort)(SUB161(auVar68 >> 0x1f,0)
                                                                          & 1) << 3 |
                                                         (ushort)(SUB161(auVar68 >> 0x27,0) & 1) <<
                                                         4 | (ushort)(SUB161(auVar68 >> 0x2f,0) & 1)
                                                             << 5 |
                                                         (ushort)(SUB161(auVar68 >> 0x37,0) & 1) <<
                                                         6 | (ushort)(SUB161(auVar68 >> 0x3f,0) & 1)
                                                             << 7 |
                                                         (ushort)(SUB161(auVar68 >> 0x47,0) & 1) <<
                                                         8 | (ushort)(SUB161(auVar68 >> 0x4f,0) & 1)
                                                             << 9 |
                                                         (ushort)(SUB161(auVar68 >> 0x57,0) & 1) <<
                                                         10 | (ushort)(SUB161(auVar68 >> 0x5f,0) & 1
                                                                      ) << 0xb |
                                                         (ushort)(SUB161(auVar68 >> 0x67,0) & 1) <<
                                                         0xc | (ushort)(SUB161(auVar68 >> 0x6f,0) &
                                                                       1) << 0xd |
                                                         (ushort)(SUB161(auVar68 >> 0x77,0) & 1) <<
                                                         0xe | (ushort)(byte)(auVar68[0xf] >> 7) <<
                                                               0xf);
                                do {
                                  if ((short)uVar63 == 0) {
                                    do {
                                      auVar68 = *pauVar37;
                                      pauVar26 = pauVar26 + -0x20;
                                      pauVar37 = pauVar37 + 1;
                                      uVar63 = (ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                                                        (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1
                                                        | (ushort)(SUB161(auVar68 >> 0x17,0) & 1) <<
                                                          2 | (ushort)(SUB161(auVar68 >> 0x1f,0) & 1
                                                                      ) << 3 |
                                                        (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4
                                                        | (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) <<
                                                          5 | (ushort)(SUB161(auVar68 >> 0x37,0) & 1
                                                                      ) << 6 |
                                                        (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7
                                                        | (ushort)(SUB161(auVar68 >> 0x47,0) & 1) <<
                                                          8 | (ushort)(SUB161(auVar68 >> 0x4f,0) & 1
                                                                      ) << 9 |
                                                        (ushort)(SUB161(auVar68 >> 0x57,0) & 1) <<
                                                        10 | (ushort)(SUB161(auVar68 >> 0x5f,0) & 1)
                                                             << 0xb |
                                                        (ushort)(SUB161(auVar68 >> 0x67,0) & 1) <<
                                                        0xc | (ushort)(SUB161(auVar68 >> 0x6f,0) & 1
                                                                      ) << 0xd |
                                                        (ushort)(SUB161(auVar68 >> 0x77,0) & 1) <<
                                                        0xe | (ushort)(byte)(auVar68[0xf] >> 7) <<
                                                              0xf) ^ 0xffff;
                                    } while (uVar63 == 0);
                                  }
                                  iVar42 = 0;
                                  for (uVar21 = uVar63; (uVar21 & 1) == 0;
                                      uVar21 = uVar21 >> 1 | 0x80000000) {
                                    iVar42 = iVar42 + 1;
                                  }
                                  uVar25 = *(ulonglong *)
                                            ((longlong)pauVar26 +
                                            (-0x18 - (ulonglong)(uint)(iVar42 << 5)));
                                  if (uVar25 != 0) {
                                    pbVar36 = *(byte **)((longlong)pauVar26 +
                                                        (-0x10 - (ulonglong)(uint)(iVar42 << 5)));
                                    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a79031;
                                    pub_1406abac0(pbVar36,uVar25,1);
                                  }
                                  uVar63 = uVar63 - 1 & uVar63;
                                  lVar22 = lVar22 + -1;
                                } while (lVar22 != 0);
                              }
                              lVar22 = lVar32 * 0x20 + 0x20;
                              unaff_R12 = (undefined1 (*) [16])(lVar32 + lVar22 + 0x11);
                              unaff_R15 = *(undefined1 (**) [16])(pauVar33[0x151] + 8);
                              puVar28 = *(undefined8 **)(pauVar33[0x150] + 8);
                              if (unaff_R12 != (undefined1 (*) [16])0x0) {
                                lVar32 = *(longlong *)pauVar33[0x140];
                                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a79074;
                                pub_1406abac0((byte *)(lVar32 - lVar22),(ulonglong)unaff_R12,0x10);
                              }
                            }
                            plVar31 = *(longlong **)*unaff_R15;
                            LOCK();
                            *plVar31 = *plVar31 + -1;
                            UNLOCK();
                            if (*plVar31 == 0) {
                              *(undefined8 *)(pauVar33[0x14a] + 8) =
                                   *(undefined8 *)(pauVar33[0x152] + 8);
                              *(undefined8 *)pauVar33[0x14a] = *(undefined8 *)pauVar33[0x152];
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a790a1;
                              pdb_140c7b710(unaff_R15);
                            }
                            plVar31 = *(longlong **)(lVar24 + 0x2a8);
                            LOCK();
                            *plVar31 = *plVar31 + -1;
                            UNLOCK();
                            unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
                            if (*plVar31 == 0) {
                              *(undefined1 (**) [16])(pauVar33[0x139] + 8) = unaff_RDI;
                              *(undefined8 *)pauVar33[0x139] = *(undefined8 *)pauVar33[0x152];
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a790cf;
                              pdb_140c7a060((undefined8 *)(lVar24 + 0x2a8));
                            }
                            plVar31 = (longlong *)*puVar28;
                            LOCK();
                            *plVar31 = *plVar31 + -1;
                            UNLOCK();
                            if (*plVar31 == 0) {
                              *(undefined1 (**) [16])(pauVar33[0x13e] + 8) = unaff_RDI;
                              *(undefined8 *)pauVar33[0x13e] = *(undefined8 *)pauVar33[0x152];
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a790fb;
                              pdb_140c79e90(puVar28);
                            }
                            goto code_r0x000142a75025;
                          case 1:
                            *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                    /* WARNING: Subroutine does not return */
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a76057;
                            pdb_142dc8570(&UNK_143633680);
                          case 2:
                            *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                            pauVar37 = (undefined1 (*) [16])&UNK_143633680;
                            break;
                          case 3:
                            *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                            uVar23 = *(undefined8 *)param_2[0x38];
                            lVar24 = *(longlong *)(param_2[0x38] + 8);
                            goto code_r0x000142a784c7;
                          case 4:
                            goto code_r0x000142a75986;
                          case 5:
                            break;
                          case 6:
                            goto code_r0x000142a76084;
                          case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
                            halt_baddata();
                          case 8:
                            (*unaff_RBX)[0] = cVar18;
                            (*pauVar26)[0] = (*pauVar26)[0] + cVar18;
                            puVar54 = puVar47;
                            goto code_r0x000142a75aaf;
                          case 9:
                            puVar52 = (undefined1 *)puVar47;
                            goto code_r0x000142a749ef;
                          case 10:
                            (*pauVar26)[0] = (*pauVar26)[0] + cVar18;
                            goto code_r0x000142a74c72;
                          case 0xb:
                            goto code_r0x000142a74cb2;
                          case 0xc:
                            UNK_14363391e = UNK_14363391e + cVar18;
                            (*pauVar26)[0] = (*pauVar26)[0] + cVar18;
                            (*pauVar26)[0] = (*pauVar26)[0] + cVar18;
                            goto code_r0x000142a74eb6;
                          case 0xd:
                            *(undefined8 *)
                             (((ulonglong)((longlong)puVar47 + 0x50) & 0xffffffff) - 8) =
                                 0xfffffffffffffffe;
                            pauVar33 = (undefined1 (*) [16])(ulonglong)UNK_143633aa5;
                            if ((undefined1 (*) [16])0x7 < pauVar33) {
                              return pauVar33;
                            }
                            iVar42 = *(int *)(&UNK_14363398c + (longlong)pauVar33 * 4);
                            *(undefined **)
                             (((ulonglong)((longlong)puVar47 + 0x50) & 0xffffffff) - 0x10) =
                                 &UNK_143633958;
                    /* WARNING: Could not recover jumptable at 0x000142a7c9e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            pauVar33 = (undefined1 (*) [16])(*(code *)(&UNK_14363398c + iVar42))();
                            return pauVar33;
                          case 0xe:
                          case 0xf:
                            return (undefined1 (*) [16])CONCAT71(uVar34,cVar18 + '9');
                          case 0x10:
                            goto code_r0x000142a7cb1e;
                          case 0x11:
                            (*pauVar26)[0] = (*pauVar26)[0] + cVar18;
                            pauVar60 = unaff_RBX;
                            puVar59 = (undefined1 *)puVar47;
                            goto code_r0x000142a7ca1c;
                          case 0x12:
                            if (pauVar26 == (undefined1 (*) [16])0x0) {
                              if ((code *)(ulonglong)uRam0000000000000000 != (code *)0x0) {
                                uVar23 = *(undefined8 *)(pauVar33[-2] + 8);
                                *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cb78;
                                (*(code *)(ulonglong)uRam0000000000000000)(uVar23);
                              }
                              goto code_r0x000142a7cb79;
                            }
                            *(undefined1 (**) [16])(pauVar33[-2] + 8) = pauVar26;
                            puVar28 = *(undefined8 **)(unaff_R12[0x1f] + 8);
                            *(undefined8 **)pauVar33[-2] = puVar28;
                            pcVar9 = (code *)*puVar28;
                            if (pcVar9 != (code *)0x0) {
                              uVar23 = *(undefined8 *)(pauVar33[-2] + 8);
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cbd1;
                              (*pcVar9)(uVar23);
                            }
                            pbVar36 = *(byte **)(pauVar33[-2] + 8);
                            uVar25 = *(ulonglong *)(*(longlong *)pauVar33[-2] + 8);
                            if (uVar25 != 0) {
                              uVar43 = *(ulonglong *)(*(longlong *)pauVar33[-2] + 0x10);
                              *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cbec;
                              pub_1406abac0(pbVar36,uVar25,uVar43);
                            }
                            unaff_R12 = *(undefined1 (**) [16])pauVar33[-1];
                            param_3 = *(undefined1 (**) [16])(unaff_R12[0x1b] + 8);
                            if (param_3 == (undefined1 (*) [16])0x0) goto code_r0x000142a7ccda;
                            unaff_RDI = *(undefined1 (**) [16])(unaff_R12[0x1c] + 8);
                            if (unaff_RDI == (undefined1 (*) [16])0x0) goto code_r0x000142a7cca9;
                            unaff_RBX = *(undefined1 (**) [16])unaff_R12[0x1b];
                            goto code_r0x000142a7cc1a;
                          case 0x13:
                            uVar25 = (ulonglong)in_ST0;
                            unaff_RDI = (undefined1 (*) [16])
                                        (ulonglong)
                                        (byte)((byte)(uVar25 >> 7) & 1 |
                                               ((byte)(uVar25 >> 0xf) & 1) << 1 |
                                               ((byte)(uVar25 >> 0x17) & 1) << 2 |
                                               ((byte)(uVar25 >> 0x1f) & 1) << 3 |
                                               ((byte)(uVar25 >> 0x27) & 1) << 4 |
                                               ((byte)(uVar25 >> 0x2f) & 1) << 5 |
                                               ((byte)(uVar25 >> 0x37) & 1) << 6 |
                                              (byte)((unkuint10)in_ST0 >> 0x38) & 0x80);
                            goto code_r0x000142a7cc50;
                          case 0x14:
                            if (pauVar26 == (undefined1 (*) [16])0x0) {
                              pauVar26 = (undefined1 (*) [16])(ulonglong)uRam0000000000000000;
                              bVar66 = pauVar26 == (undefined1 (*) [16])0x0;
                              goto code_r0x000142a7ca6c;
                            }
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cafe;
                            pdb_141746a60(&UNK_143633956);
                            goto code_r0x000142a7cd41;
                          default:
                            *(undefined1 (**) [16])((longlong)puVar47 + 0x10) = param_2;
                            goto code_r0x000142a7d745;
                          case 0x19:
                          case 0x1a:
                          case 0x1b:
                          case 0x1c:
                            uVar19 = in((short)param_2);
                            pbVar36 = (byte *)(CONCAT71(uVar34,uVar19) + -0x73);
                            *pbVar36 = *pbVar36 & 0x58;
                            *(undefined8 *)((longlong)puVar47 + -8) = 0x40;
                            goto code_r0x000142a7d753;
                          case 0x1d:
                            return pauVar26;
                          case 0x1e:
                            goto code_r0x000142a7d95a;
                          case 0x1f:
                            pauVar37 = (undefined1 (*) [16])(ulonglong)((int)unaff_RBX + 0x420);
                          case 0x20:
                            goto code_r0x000142a7d9d5;
                          case 0x21:
                            (*pauVar26)[0] = (*pauVar26)[0] + cVar18;
                            goto code_r0x000142a7d978;
                          }
                    /* WARNING: Subroutine does not return */
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a76070;
                          pdb_142dc8590(pauVar37);
                        }
                        *(undefined1 (**) [16])pauVar33[-3] = unaff_R12;
                        *(undefined1 (**) [16])(pauVar33[-3] + 8) = unaff_R14;
                        *(undefined1 (**) [16])pauVar33[-2] = unaff_RBX;
                        *(undefined1 (**) [16])(pauVar33[-2] + 8) = unaff_RDI;
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a755d2;
                        pdb_141747470(pauVar33 + 0x118,pauVar33 + -3);
                        *(undefined1 (**) [16])pauVar33[0x145] = pauVar33 + 0x118;
                        *(code **)(pauVar33[0x145] + 8) = pdb_140001020;
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75602;
                        pdb_140f60760(pauVar33 + 0x14b,&UNK_14363362e,pauVar33 + 0x145);
                        lVar24 = *(longlong *)pauVar33[0x153];
                        uVar25 = *(ulonglong *)pauVar33[0x118];
                        if (uVar25 != 0) {
                          pbVar36 = *(byte **)(pauVar33[0x118] + 8);
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7562f;
                          pub_1406abac0(pbVar36,uVar25,1);
                        }
                        uVar23 = *(undefined8 *)(pauVar33[0x14b] + 8);
                        *(undefined8 *)pauVar33[0x140] = *(undefined8 *)pauVar33[0x14b];
                        *(undefined8 *)(pauVar33[0x140] + 8) = uVar23;
                        *(undefined8 *)pauVar33[0x141] = *(undefined8 *)pauVar33[0x14c];
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7565c;
                        pdb_142a7c280(lVar24 + 0x210,pauVar33 + 0x140);
                        plVar31 = *(longlong **)pauVar33[-2];
                        LOCK();
                        *plVar31 = *plVar31 + -1;
                        UNLOCK();
                        if (*plVar31 == 0) {
                          *(undefined8 *)(pauVar33[0x14a] + 8) =
                               *(undefined8 *)(pauVar33[0x152] + 8);
                          *(undefined8 *)pauVar33[0x14a] = *(undefined8 *)pauVar33[0x152];
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75690;
                          pdb_140c7a240(pauVar33 + -2);
                        }
code_r0x000142a78774:
                        lVar24 = *(longlong *)pauVar33[0x153];
                        plVar31 = *(longlong **)(lVar24 + 0x2a8);
                        LOCK();
                        *plVar31 = *plVar31 + -1;
                        UNLOCK();
                        if (*plVar31 == 0) {
                          unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
                          *(undefined1 (**) [16])(pauVar33[0x139] + 8) = unaff_RDI;
                          *(undefined8 *)pauVar33[0x139] = *(undefined8 *)pauVar33[0x152];
                          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a787b0;
                          pdb_140c7a060(lVar24 + 0x2a8);
                          goto code_r0x000142a787b1;
                        }
                        unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
                        lVar32 = *(longlong *)pauVar33[0x153];
                        plVar31 = *(longlong **)(lVar32 + 0x200);
                        LOCK();
                        *plVar31 = *plVar31 + -1;
                        lVar24 = *plVar31;
                        UNLOCK();
                      }
                      else {
                        *(undefined8 *)pauVar33[0x140] = uVar23;
                        *(undefined1 (**) [16])pauVar33[0x14b] = pauVar33 + 0x140;
                        *(code **)(pauVar33[0x14b] + 8) = pdb_140f59780;
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75264;
                        pdb_140f60760(pauVar33 + -3,&UNK_143633643,pauVar33 + 0x14b);
                        lVar24 = *(longlong *)pauVar33[0x153];
                        uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
                        *(undefined8 *)pauVar33[0x118] = *(undefined8 *)pauVar33[-3];
                        *(undefined8 *)(pauVar33[0x118] + 8) = uVar23;
                        *(undefined8 *)pauVar33[0x119] = *(undefined8 *)pauVar33[-2];
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75297;
                        pdb_142a7c280(lVar24 + 0x210,pauVar33 + 0x118);
                        unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
                        *(undefined1 (**) [16])(pauVar33[0x139] + 8) = unaff_RDI;
                        *(undefined8 *)pauVar33[0x139] = *(undefined8 *)pauVar33[0x152];
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a752c0;
                        pdb_1404b38e0(pauVar33 + 0x140);
code_r0x000142a787b1:
                        lVar32 = *(longlong *)pauVar33[0x153];
                        plVar31 = *(longlong **)(lVar32 + 0x200);
                        LOCK();
                        *plVar31 = *plVar31 + -1;
                        lVar24 = *plVar31;
                        UNLOCK();
                      }
                      if (lVar24 == 0) {
                        *(undefined1 (**) [16])(pauVar33[0x13e] + 8) = unaff_RDI;
                        *(undefined8 *)pauVar33[0x13e] = *(undefined8 *)pauVar33[0x152];
                        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7880b;
                        pdb_140c79e90(lVar32 + 0x200);
                      }
                    }
                    goto code_r0x000142a75025;
                  }
code_r0x000142a758b2:
                  *(undefined8 *)(param_4 + 0x288) = 0;
                  *(undefined1 (**) [16])pauVar33[0x148] = unaff_RDI;
                  *(undefined8 *)(pauVar33[0x147] + 8) = *(undefined8 *)pauVar33[0x152];
                  *(undefined8 *)(puVar53 + -8) = 0x142a758d7;
                  pdb_140987940();
                  lVar24 = *(longlong *)pauVar33[0x153];
                  *(undefined1 *)(lVar24 + 0x2da) = 0;
                  *(undefined8 *)pauVar33[0x14c] = *(undefined8 *)(lVar24 + 0x280);
                  uVar23 = *(undefined8 *)(lVar24 + 0x278);
                  *(undefined8 *)pauVar33[0x14b] = *(undefined8 *)(lVar24 + 0x270);
                  *(undefined8 *)(pauVar33[0x14b] + 8) = uVar23;
                  *(undefined1 (**) [16])pauVar33[0x148] = unaff_RDI;
                  *(undefined8 *)(pauVar33[0x147] + 8) = *(undefined8 *)pauVar33[0x152];
                  *(undefined8 *)(puVar53 + -8) = 0x142a75933;
                  pdb_140d9d3a0(pauVar33 + -3,lVar24 + 0x1d0,1,pauVar33 + 0x14b);
                  unaff_RBX = pauVar33 + 0x118;
                  *(undefined8 *)(puVar53 + -8) = 0x142a7594d;
                  pub_142e32760(unaff_RBX,pauVar33 + -3,0x118);
                  param_2 = *(undefined1 (**) [16])pauVar33[0x153];
                  pauVar60 = (undefined1 (*) [16])0x118;
                  *(undefined1 (**) [16])pauVar33[0x135] = param_2 + 0x2e;
                  *(undefined8 *)(puVar53 + -8) = 0x142a75976;
                  uVar67 = pub_142e32760(param_2 + 0x2e,unaff_RBX,0x118);
                  pauVar29 = (undefined1 (*) [16])(ulonglong)(byte)param_2[0x35][1];
                  puVar47 = (undefined8 *)puVar53;
                  unaff_R14 = unaff_RDI;
                  uVar23 = extraout_XMM0_Qb_00;
code_r0x000142a75986:
                  pauVar26 = param_2;
                  pauVar37 = (undefined1 (*) [16])&UNK_143633968;
                  iVar42 = *(int *)(&UNK_143633968 + (longlong)pauVar29 * 4);
                  pauVar29 = (undefined1 (*) [16])(&UNK_143633968 + iVar42);
                  cVar18 = (char)pauVar29;
                  iVar20 = (int)pauVar29;
                  param_2 = pauVar26;
                  puVar54 = puVar47;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                  switch(pauVar29) {
                  case (undefined1 (*) [16])0x142a74a18:
                    puVar1 = (uint *)(unaff_RBX[-0x72b7fc2] + 1);
                    *puVar1 = *puVar1 << 0x15 | *puVar1 >> 0xb;
                    uVar23 = *puVar47;
                    puVar47 = puVar47 + 1;
                    out((short)pauVar26,iVar20);
                    unaff_R13 = (undefined1 (*) [16])0xc634800;
                    lVar24 = CONCAT71((int7)((ulonglong)uVar23 >> 8),(&UNK_143633969)[iVar42]) + -1;
                    if (lVar24 != 0 && (int)unaff_RDI >> 1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    bVar41 = (byte)((ulonglong)lVar24 >> 8);
                    pauVar33 = (undefined1 (*) [16])0xf000004;
                    cRam000000000effffe4 =
                         cRam000000000effffe4 + cVar18 +
                         (CARRY1((byte)lVar24,bVar41) ||
                         CARRY1((byte)lVar24 + bVar41,((ulonglong)unaff_RDI & 1) != 0));
                    goto code_r0x000142a74a35;
                  case (undefined1 (*) [16])0x142a74cb9:
                    goto code_r0x000142a74cb9;
                  case (undefined1 (*) [16])0x142a74cc2:
                    goto code_r0x000142a74cc2;
                  case (undefined1 (*) [16])0x142a74ecc:
                    goto code_r0x000142a74eb6;
                  case (undefined1 (*) [16])0x142a75996:
                    *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                    *(undefined2 *)(pauVar26[0x35] + 3) = 0x100;
                    pauVar26[0x35][2] = 0;
                    *(undefined8 *)pauVar26[0x30] = *(undefined8 *)(pauVar26[0x2f] + 8);
                    puVar28 = *(undefined8 **)pauVar33[0x135];
                    uVar23 = puVar28[1];
                    *(undefined8 *)(pauVar26[0x30] + 8) = *puVar28;
                    *(undefined8 *)pauVar26[0x31] = uVar23;
                    *(undefined8 *)(pauVar26[0x31] + 8) = puVar28[2];
                    if (pauVar26[0x35][0] == '\0') {
                      *(undefined8 *)pauVar33[0x14b] = *(undefined8 *)(pauVar26[0x31] + 8);
                      *(undefined1 (**) [16])pauVar33[-3] = pauVar33 + 0x14b;
                      *(code **)(pauVar33[-3] + 8) = pdb_140f72a40;
                      puVar47[-1] = 0x142a75b09;
                      pdb_140f4e780(&UNK_1436332cd,pauVar33 + -3);
                      goto code_r0x000142a75b0a;
                    }
                    if (*_DAT_143ca8e90 < 3) goto code_r0x000142a75b11;
                    *(undefined8 *)pauVar33[0x140] = *(undefined8 *)(pauVar26[0x31] + 8);
                    *(undefined1 (**) [16])pauVar33[0x14b] = pauVar33 + 0x140;
                    *(code **)(pauVar33[0x14b] + 8) = pdb_140f72a40;
                    *(undefined8 *)pauVar33[-3] = 0;
                    *(undefined **)(pauVar33[-3] + 8) = &UNK_14363331b;
                    *(undefined8 *)pauVar33[-2] = 0x13;
                    *(undefined8 *)(pauVar33[-2] + 8) = 0;
                    *(undefined **)pauVar33[-1] = &UNK_1436332fa;
                    *(undefined8 *)(pauVar33[-1] + 8) = 0x20;
                    *(undefined8 *)*pauVar33 = 3;
                    *(undefined **)(*pauVar33 + 8) = &UNK_14363331b;
                    goto code_r0x000142a75a66;
                  case (undefined1 (*) [16])0x142a75aa5:
                    param_2 = *(undefined1 (**) [16])(pauVar26[0x38] + 8);
code_r0x000142a75aaf:
                    lVar24 = *(longlong *)pauVar26[0x39];
                    goto code_r0x000142a772c1;
                  case (undefined1 (*) [16])0x142a75abb:
                    *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                    uVar23 = *(undefined8 *)(pauVar26[0x35] + 8);
                    pauVar37 = *(undefined1 (**) [16])pauVar26[0x36];
                    goto code_r0x000142a77634;
                  case (undefined1 (*) [16])0x142a76076:
                    *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                    pauVar37 = (undefined1 (*) [16])&UNK_143633330;
code_r0x000142a76084:
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a76089;
                    pdb_142dc8570(pauVar37);
                  case (undefined1 (*) [16])0x142a7608f:
                    *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
                    /* WARNING: Subroutine does not return */
                    puVar47[-1] = 0x142a760a2;
                    pdb_142dc8590(&UNK_143633330);
                  case (undefined1 (*) [16])0x142a7c9bf:
                    *(int *)*pauVar29 = *(int *)*pauVar29 + iVar20;
                    (&UNK_1436338eb)[iVar42] = (&UNK_1436338eb)[iVar42] + 'h';
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  case (undefined1 (*) [16])0x142a7ca2a:
                    goto code_r0x000142a7ca2a;
                  case (undefined1 (*) [16])0x142a7ca75:
                    goto code_r0x000142a7ca75;
                  case (undefined1 (*) [16])0x142a7cb2e:
                    (*unaff_RDI)[0] = (*unaff_RDI)[0] | 0x68;
                    UNK_1436338e9 = UNK_1436338e9 + 'h';
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  case (undefined1 (*) [16])0x142a7cb79:
code_r0x000142a7cb79:
                    pbVar36 = *(byte **)(pauVar33[-2] + 8);
                    uVar25 = *(ulonglong *)(*(longlong *)pauVar33[-2] + 8);
                    if (uVar25 != 0) {
                      uVar43 = *(ulonglong *)(*(longlong *)pauVar33[-2] + 0x10);
                      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cb97;
                      pub_1406abac0(pbVar36,uVar25,uVar43);
                    }
                    goto code_r0x000142a7cd37;
                  case (undefined1 (*) [16])0x142a7cc72:
                    return pauVar29;
                  case (undefined1 (*) [16])0x142a7cef2:
                    goto code_r0x000142a7ceea;
                  case (undefined1 (*) [16])0x142a7d745:
code_r0x000142a7d745:
                    *(undefined1 (**) [16])((longlong)puVar47 + -8) = pauVar33;
                    *(undefined1 (**) [16])((longlong)puVar47 + -0x10) = unaff_R14;
                    *(undefined1 (**) [16])((longlong)puVar47 + -0x18) = param_3;
                    *(undefined1 (**) [16])((longlong)puVar47 + -0x20) = unaff_RDI;
                    *(undefined1 (**) [16])((longlong)puVar47 + -0x28) = unaff_RBX;
                    pauVar33 = param_2 + 4;
code_r0x000142a7d753:
                    pauVar33 = *(undefined1 (**) [16])pauVar33[-1];
                    *(undefined2 *)(pauVar33[0xc] + 9) = 0;
                    return pauVar33;
                  case (undefined1 (*) [16])0x142a7d75d:
                    (*pauVar29)[0] = (*pauVar29)[0] + cVar18;
                    (&UNK_1436338eb)[iVar42] = (&UNK_1436338eb)[iVar42] + 'h';
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  case (undefined1 (*) [16])0x142a7d778:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  case (undefined1 (*) [16])0x142a7d96a:
                    unaff_RBX[5][0xd] = unaff_RBX[5][0xd] - (char)unaff_RBX;
                    return pauVar29;
                  case (undefined1 (*) [16])0x142a7d993:
                    pcVar9 = (code *)swi(3);
                    pauVar33 = (undefined1 (*) [16])(*pcVar9)();
                    return pauVar33;
                  case (undefined1 (*) [16])0x142a7d9e5:
                    (*pauVar29)[0] = (*pauVar29)[0] + cVar18;
                    break;
                  case (undefined1 (*) [16])0x142a7d9f1:
                  }
code_r0x000142a7d9d5:
                  (*pauVar29)[0] = (*pauVar29)[0] ^ (byte)pauVar37;
                  (*pauVar29)[0] = (*pauVar29)[0] + (char)pauVar29;
                  *(undefined8 *)unaff_RBX[0x41] = uVar67;
                  *(undefined8 *)(unaff_RBX[0x41] + 8) = uVar23;
                  *(undefined **)((longlong)puVar47 + -8) = &UNK_142a7d9f8;
                  pub_142e32760(unaff_RBX + 0x42,unaff_RBX,0x410);
                  *(undefined1 (**) [16])(pauVar33[-1] + 8) = unaff_RBX;
                  *(undefined1 (**) [16])pauVar33[-1] = unaff_RBX + 0x42;
                  *(undefined **)((longlong)puVar47 + -8) = &UNK_142a7da12;
                  pdb_142a73ea0(param_3,unaff_RBX + 0x42,pauVar60);
                  uVar19 = 3;
                  if (*(int *)*param_3 != 3) {
                    uVar23 = *(undefined8 *)pauVar33[-1];
                    *(undefined **)((longlong)puVar47 + -8) = &UNK_142a7da23;
                    pdb_142a7c460(uVar23);
                    lVar24 = *(longlong *)(pauVar33[-1] + 8);
                    uVar19 = 1;
                    *(undefined **)((longlong)puVar47 + -8) = &UNK_142a7da36;
                    pdb_140976160(lVar24 + 0x410);
                  }
                  *(undefined1 *)(*(longlong *)(pauVar33[-1] + 8) + 0x840) = uVar19;
                  return param_3;
                }
                goto code_r0x000142a77d03;
              }
              goto code_r0x000142a772bf;
            }
            goto code_r0x000142a77fe0;
          }
          goto code_r0x000142a77ff4;
        }
        *(undefined8 *)unaff_RDI[0xe] = 0;
        *(undefined8 *)(unaff_RDI[0xe] + 8) = 8;
        pauVar37 = unaff_RDI + 0xf;
        *(undefined8 *)unaff_RDI[0xf] = 0;
        unaff_RDI[0x10][0] = 0;
        puVar50 = (undefined1 *)puVar47;
        goto code_r0x000142a77217;
      }
      lVar32 = *(longlong *)(&stack0x00001570 + lVar24);
      goto code_r0x000142a770b4;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a7484e;
    unaff_R13 = (undefined1 (*) [16])pdb_142deaf00(uVar23);
    lVar32 = *(longlong *)(&stack0x00001570 + lVar24);
    goto code_r0x000142a770d3;
  case 0x12:
    *(uint *)*pauVar26 = *(int *)*pauVar26 + uVar63 + (uint)bVar65;
    (&UNK_14363389d)[uVar25] = (&UNK_14363389d)[uVar25] + '\x10';
    puVar47 = (undefined8 *)((longlong)&uStack_48 + lVar24);
    *(undefined1 (**) [16])((longlong)&uStack_48 + lVar24) = pauVar33;
    UNK_1436338c8 = UNK_1436338c8 << 1 | (char)UNK_1436338c8 < '\0';
    UNK_143633910 = UNK_143633910 | bVar17;
    (*pauVar26)[0] = (*pauVar26)[0] + bVar17;
    goto code_r0x000142a75696;
  case 0x13:
    uVar63 = uVar63 + *(int *)*pauVar26;
    piVar30 = (int *)(ulonglong)uVar63;
    UNK_14363389b = UNK_14363389b + '\x10';
    LOCK();
    iVar42 = *piVar30;
    *piVar30 = (int)pauVar33;
    pauVar33 = (undefined1 (*) [16])CONCAT44((int)((ulonglong)pauVar33 >> 0x20),iVar42);
    UNLOCK();
    uVar63 = uVar63 + *piVar30;
    pcVar27 = (char *)((ulonglong)uVar63 - 0x3f);
    *pcVar27 = *pcVar27 + '\x10';
    uVar63 = (uint)(short)uVar63;
    pauVar26 = (undefined1 (*) [16])(ulonglong)(uVar63 + *(int *)(ulonglong)uVar63);
    UNK_143633898 = UNK_143633898 + '\x0f';
    LOCK();
    uVar4 = *(undefined4 *)(pauVar26[0x4900000] + 3);
    *(int *)(pauVar26[0x4900000] + 3) = (int)(&stack0xffffffffffffffc0 + lVar24);
    puVar54 = (undefined8 *)
              CONCAT44((int)((ulonglong)(&stack0xffffffffffffffc0 + lVar24) >> 0x20),uVar4);
    UNLOCK();
    *(undefined4 *)(unaff_RDI[0x3a] + 8) = 0x4363390f;
    break;
  case 0x14:
    *(uint *)unaff_RDI[0x3a] = uVar63;
    goto code_r0x000142a7600a;
  case 0x15:
    cVar18 = bVar17 + (*pauVar26)[0];
    pcVar27 = (char *)CONCAT71(uVar34,cVar18);
    *(char *)((longlong)pcVar27 * 2) = *(char *)((longlong)pcVar27 * 2) + cVar18;
    *pcVar27 = *pcVar27 + cVar18;
    puVar47 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar24);
    goto code_r0x000142a75824;
  case 0x16:
    bVar66 = (char)UNK_1436338c8 < '\0';
    UNK_1436338c8 = UNK_1436338c8 << 1 | bVar66;
    UNK_143633910 = (UNK_143633910 - bVar17) - bVar66;
    (*pauVar26)[0] = (*pauVar26)[0] + bVar17;
    goto code_r0x000142a758b2;
  case 0x17:
    (*pauVar26)[0] = (*pauVar26)[0] + bVar17;
    puVar54 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar24);
    break;
  case 0x18:
    goto code_r0x000142a76037;
  case 0x19:
    (&UNK_143633899)[uVar25] = (&UNK_143633899)[uVar25] + '\x10';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
    *(uint *)(&stack0x00000048 + lVar24) = uVar63;
    puVar47 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar24);
code_r0x000142a75a66:
    *(undefined8 *)pauVar33[1] = 0x13;
    *(undefined8 *)(pauVar33[1] + 8) = 0xea00000001;
    *(undefined **)pauVar33[2] = &UNK_1436332e4;
    *(undefined1 (**) [16])(pauVar33[2] + 8) = pauVar33 + 0x14b;
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a75aa2;
    pdb_140f332f0(pauVar33[0x150] + 6,pauVar33 + -3);
code_r0x000142a75b0a:
    pauVar26 = *(undefined1 (**) [16])pauVar33[0x153];
    puVar54 = puVar47;
code_r0x000142a75b11:
    lVar24 = *(longlong *)(pauVar26[0x31] + 8);
    if (lVar24 == 0) {
      pbVar36 = (byte *)0x8;
      lVar32 = 0;
    }
    else {
      unaff_RBX = (undefined1 (*) [16])(lVar24 << 6);
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75b2f;
      pdb_14007ee60();
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75b3c;
      pbVar36 = pub_1406abab0((ulonglong)unaff_RBX,8);
      if (pbVar36 == (byte *)0x0) {
        *(undefined8 *)((longlong)puVar54 + -8) = 0x142a760b5;
        pdb_142dc7e2a(8,unaff_RBX);
        goto code_r0x000142a772bf;
      }
      lVar32 = *(longlong *)(pauVar26[0x31] + 8);
    }
    *(undefined1 (**) [16])(pauVar33[0x148] + 8) = pauVar26 + 0x32;
    *(longlong *)pauVar26[0x32] = lVar24;
    *(byte **)(pauVar26[0x32] + 8) = pbVar36;
    *(undefined8 *)pauVar26[0x33] = 0;
    *(undefined2 *)(pauVar26[0x35] + 3) = 1;
    uVar23 = *(undefined8 *)(pauVar26[0x30] + 8);
    plVar31 = *(longlong **)pauVar26[0x31];
    plVar40 = plVar31 + lVar32 * 0xe;
    *(longlong **)pauVar33[0x13a] = plVar31;
    *(longlong **)(pauVar33[0x13a] + 8) = plVar31;
    *(undefined8 *)pauVar33[0x13b] = uVar23;
    *(longlong **)(pauVar33[0x13b] + 8) = plVar40;
    while (plVar31 != plVar40) {
      *(longlong **)(pauVar33[0x13a] + 8) = plVar31 + 0xe;
      lVar24 = *plVar31;
      *(longlong *)pauVar33[3] = plVar31[0xd];
      lVar32 = plVar31[0xc];
      *(longlong *)pauVar33[2] = plVar31[0xb];
      *(longlong *)(pauVar33[2] + 8) = lVar32;
      lVar32 = plVar31[10];
      *(longlong *)pauVar33[1] = plVar31[9];
      *(longlong *)(pauVar33[1] + 8) = lVar32;
      lVar32 = plVar31[8];
      *(longlong *)*pauVar33 = plVar31[7];
      *(longlong *)(*pauVar33 + 8) = lVar32;
      lVar32 = plVar31[6];
      *(longlong *)pauVar33[-1] = plVar31[5];
      *(longlong *)(pauVar33[-1] + 8) = lVar32;
      lVar32 = plVar31[4];
      *(longlong *)pauVar33[-2] = plVar31[3];
      *(longlong *)(pauVar33[-2] + 8) = lVar32;
      lVar32 = plVar31[2];
      *(longlong *)pauVar33[-3] = plVar31[1];
      *(longlong *)(pauVar33[-3] + 8) = lVar32;
      if (SBORROW8(0,lVar24)) break;
      *(longlong *)(pauVar33[0x12d] + 8) = lVar24;
      uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
      *(undefined8 *)pauVar33[0x12e] = *(undefined8 *)pauVar33[-3];
      *(undefined8 *)(pauVar33[0x12e] + 8) = uVar23;
      *(undefined8 *)pauVar33[0x144] = *(undefined8 *)(pauVar33[2] + 8);
      *(undefined8 *)(pauVar33[0x144] + 8) = *(undefined8 *)pauVar33[3];
      uVar23 = *(undefined8 *)(pauVar33[-2] + 8);
      uVar67 = *(undefined8 *)pauVar33[-1];
      auVar68 = *(undefined1 (*) [16])(pauVar33[-1] + 8);
      uVar64 = *(undefined8 *)(*pauVar33 + 8);
      uVar6 = *(undefined8 *)pauVar33[1];
      uVar4 = *(undefined4 *)(pauVar33[1] + 0xc);
      uVar5 = *(undefined4 *)pauVar33[2];
      uVar11 = *(undefined4 *)(pauVar33[2] + 4);
      *(undefined4 *)pauVar33[0x143] = *(undefined4 *)(pauVar33[1] + 8);
      *(undefined4 *)(pauVar33[0x143] + 4) = uVar4;
      *(undefined4 *)(pauVar33[0x143] + 8) = uVar5;
      *(undefined4 *)(pauVar33[0x143] + 0xc) = uVar11;
      *(undefined8 *)pauVar33[0x142] = uVar64;
      *(undefined8 *)(pauVar33[0x142] + 8) = uVar6;
      pauVar33[0x141] = auVar68;
      *(undefined8 *)pauVar33[0x140] = uVar23;
      *(undefined8 *)(pauVar33[0x140] + 8) = uVar67;
      pauVar33[0x151][6] = 1;
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75cf9;
      pdb_140d9ce10(pauVar33 + 300,pauVar33 + 0x140);
      iVar42 = *(int *)pauVar33[300];
      if (iVar42 == 2) {
        uVar23 = *(undefined8 *)(pauVar33[300] + 8);
        *(undefined8 *)(pauVar33[0x115] + 8) = uVar23;
        *(undefined1 **)pauVar33[0x14b] = pauVar33[0x12d] + 8;
        *(code **)(pauVar33[0x14b] + 8) = pdb_140001020;
        pauVar33[0x150][3] = 1;
        *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75edd;
        pdb_140f60760(pauVar33 + 0x137,&UNK_143326e85,pauVar33 + 0x14b);
        *(undefined8 *)pauVar33[0x146] = *(undefined8 *)pauVar33[0x138];
        uVar67 = *(undefined8 *)(pauVar33[0x137] + 8);
        *(undefined8 *)pauVar33[0x145] = *(undefined8 *)pauVar33[0x137];
        *(undefined8 *)(pauVar33[0x145] + 8) = uVar67;
        *(undefined8 *)(pauVar33[0x146] + 8) = uVar23;
        *(undefined8 *)pauVar33[0x14b] = 3;
        pauVar33[0x150][3] = 0;
        *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75f28;
        unaff_R13 = (undefined1 (*) [16])pdb_142de9850(pauVar33 + 0x145,pauVar33 + 0x14b);
        uVar25 = *(ulonglong *)(pauVar33[0x143] + 8);
        if (SBORROW8(0,uVar25)) {
          pauVar33[0x150][4] = 1;
          *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75f4e;
          pdb_14098ce10(pauVar33 + 0x140);
        }
        else {
          if (uVar25 != 0) {
            pbVar36 = *(byte **)pauVar33[0x144];
            *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75f73;
            pub_1406abac0(pbVar36,uVar25,1);
          }
          uVar25 = *(ulonglong *)pauVar33[0x140];
          if ((!SBORROW8(0,uVar25)) && (uVar25 != 0)) {
            pbVar36 = *(byte **)(pauVar33[0x140] + 8);
            *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75f96;
            pub_1406abac0(pbVar36,uVar25,1);
          }
        }
        pauVar26 = *(undefined1 (**) [16])(pauVar33[0x12d] + 8);
        if (pauVar26 != (undefined1 (*) [16])0x0) {
          pbVar36 = *(byte **)pauVar33[0x12e];
          *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75fb4;
          pub_1406abac0(pbVar36,(ulonglong)pauVar26,1);
        }
        *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75fc1;
        pdb_1409740c0(pauVar33 + 0x13a);
        lVar24 = *(longlong *)pauVar33[0x153];
        goto code_r0x000142a7781e;
      }
      uVar4 = *(undefined4 *)(pauVar33[300] + 4);
      uVar23 = *(undefined8 *)(pauVar33[300] + 8);
      uVar67 = *(undefined8 *)pauVar33[0x12d];
      *(undefined8 *)(pauVar33[0x151] + 8) = *(undefined8 *)(pauVar33[0x12d] + 8);
      *(undefined8 *)(pauVar33[0x150] + 8) = *(undefined8 *)pauVar33[0x12e];
      unaff_R15 = *(undefined1 (**) [16])(pauVar33[0x12e] + 8);
      lVar24 = *(longlong *)pauVar33[0x153];
      uVar64 = *(undefined8 *)(lVar24 + 0x300);
      uVar6 = *(undefined8 *)(pauVar33[0x144] + 8);
      *(undefined8 *)pauVar33[0x14f] = *(undefined8 *)pauVar33[0x144];
      *(undefined8 *)(pauVar33[0x14f] + 8) = uVar6;
      uVar6 = *(undefined8 *)pauVar33[0x140];
      uVar7 = *(undefined8 *)(pauVar33[0x140] + 8);
      uVar13 = *(undefined8 *)pauVar33[0x141];
      uVar14 = *(undefined8 *)(pauVar33[0x141] + 8);
      uVar15 = *(undefined8 *)pauVar33[0x142];
      uVar16 = *(undefined8 *)(pauVar33[0x142] + 8);
      uVar5 = *(undefined4 *)(pauVar33[0x143] + 4);
      uVar11 = *(undefined4 *)(pauVar33[0x143] + 8);
      uVar12 = *(undefined4 *)(pauVar33[0x143] + 0xc);
      *(undefined4 *)pauVar33[0x14e] = *(undefined4 *)pauVar33[0x143];
      *(undefined4 *)(pauVar33[0x14e] + 4) = uVar5;
      *(undefined4 *)(pauVar33[0x14e] + 8) = uVar11;
      *(undefined4 *)(pauVar33[0x14e] + 0xc) = uVar12;
      *(undefined8 *)pauVar33[0x14d] = uVar15;
      *(undefined8 *)(pauVar33[0x14d] + 8) = uVar16;
      *(undefined8 *)pauVar33[0x14c] = uVar13;
      *(undefined8 *)(pauVar33[0x14c] + 8) = uVar14;
      *(undefined8 *)pauVar33[0x14b] = uVar6;
      *(undefined8 *)(pauVar33[0x14b] + 8) = uVar7;
      pauVar37 = pauVar33 + 0x14b;
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75da4;
      uVar64 = pdb_141711ee0(uVar64);
      *(undefined8 *)pauVar33[0x14b] = *(undefined8 *)(pauVar33[0x151] + 8);
      *(undefined8 *)(pauVar33[0x14b] + 8) = *(undefined8 *)(pauVar33[0x150] + 8);
      *(undefined1 (**) [16])pauVar33[0x14c] = unaff_R15;
      *(int *)(pauVar33[0x14c] + 8) = iVar42;
      *(undefined4 *)(pauVar33[0x14c] + 0xc) = uVar4;
      *(undefined8 *)pauVar33[0x14d] = uVar23;
      *(undefined8 *)(pauVar33[0x14d] + 8) = uVar67;
      *(undefined8 *)pauVar33[0x14e] = uVar64;
      *(undefined1 (**) [16])(pauVar33[0x14e] + 8) = pauVar37;
      lVar32 = *(longlong *)(lVar24 + 0x330);
      if (lVar32 == *(longlong *)(lVar24 + 800)) {
        uVar23 = *(undefined8 *)(pauVar33[0x148] + 8);
        *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75e11;
        pdb_142d7ee50(uVar23);
      }
      lVar24 = *(longlong *)pauVar33[0x153];
      lVar22 = *(longlong *)(lVar24 + 0x328);
      lVar39 = lVar32 * 0x40;
      uVar23 = *(undefined8 *)pauVar33[0x14b];
      uVar67 = *(undefined8 *)(pauVar33[0x14b] + 8);
      auVar68 = pauVar33[0x14c];
      uVar64 = *(undefined8 *)pauVar33[0x14d];
      uVar6 = *(undefined8 *)(pauVar33[0x14d] + 8);
      uVar7 = *(undefined8 *)(pauVar33[0x14e] + 8);
      puVar28 = (undefined8 *)(lVar22 + 0x30 + lVar39);
      *puVar28 = *(undefined8 *)pauVar33[0x14e];
      puVar28[1] = uVar7;
      puVar28 = (undefined8 *)(lVar22 + 0x20 + lVar39);
      *puVar28 = uVar64;
      puVar28[1] = uVar6;
      *(undefined1 (*) [16])(lVar22 + 0x10 + lVar39) = auVar68;
      *(undefined8 *)(lVar22 + lVar39) = uVar23;
      ((undefined8 *)(lVar22 + lVar39))[1] = uVar67;
      *(longlong *)(lVar24 + 0x330) = lVar32 + 1;
      plVar40 = *(longlong **)(pauVar33[0x13b] + 8);
      unaff_RBX = param_3;
      plVar31 = *(longlong **)(pauVar33[0x13a] + 8);
    }
    *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75e23;
    pdb_1409740c0(pauVar33 + 0x13a);
    unaff_R15 = *(undefined1 (**) [16])pauVar33[0x153];
    uVar25 = *(ulonglong *)unaff_R15[0x33];
    if (0x199999999999999 < uVar25) {
      uVar23 = 0;
code_r0x000142a75e44:
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75e4f;
      pdb_142dc7e2a(uVar23,unaff_RBX);
      goto code_r0x000142a772bf;
    }
    if (uVar25 == 0) {
      pbVar36 = (byte *)0x10;
      lVar24 = 0;
    }
    else {
      unaff_RBX = (undefined1 (*) [16])(uVar25 * 0x50);
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75e6e;
      pdb_14007ee60();
      uVar23 = 0x10;
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a75e81;
      pbVar36 = pub_1406abab0((ulonglong)unaff_RBX,0x10);
      if (pbVar36 == (byte *)0x0) goto code_r0x000142a75e44;
      lVar24 = *(longlong *)unaff_R15[0x33];
    }
    *(ulonglong *)(unaff_R15[0x33] + 8) = uVar25;
    *(byte **)unaff_R15[0x34] = pbVar36;
    *(undefined8 *)(unaff_R15[0x34] + 8) = 0;
    *(undefined2 *)(unaff_R15[0x35] + 2) = 1;
    pauVar37 = *(undefined1 (**) [16])unaff_R15[0x32];
    pauVar26 = *(undefined1 (**) [16])(unaff_R15[0x32] + 8);
    param_2 = (undefined1 (*) [16])(lVar24 << 6);
code_r0x000142a7600a:
    param_2 = (undefined1 (*) [16])(*pauVar26 + (longlong)*param_2);
    *(undefined1 (**) [16])(unaff_R15[0x39] + 8) = pauVar26;
    *(undefined1 (**) [16])unaff_R15[0x3a] = pauVar26;
    *(undefined1 (**) [16])(unaff_R15[0x3a] + 8) = pauVar37;
    break;
  case 0x1b:
    goto code_r0x000142a74952;
  case 0x1c:
    *(uint *)*pauVar26 = *(int *)*pauVar26 + uVar63;
    UNK_143633899 = UNK_143633899 + '\x10';
    bVar66 = UNK_143633899 == '\0';
    pbVar36 = (byte *)(&UNK_14363389b + uVar25);
    bVar65 = (bool)(*pbVar36 & 1);
    *pbVar36 = *pbVar36 >> 1 | *pbVar36 << 7;
    puVar28 = &uStack_48;
    *(undefined1 (**) [16])((longlong)puVar28 + lVar24) = pauVar33;
  case 0x1d:
    puVar47 = (undefined8 *)((longlong)puVar28 + lVar24);
    pauVar37 = (undefined1 (*) [16])&UNK_14363390f;
    if (bVar66) {
      *(int *)(&stack0x00001160 + lVar24) = (int)param_2;
      pauVar60 = param_3;
      goto code_r0x000142a74c72;
    }
    pauVar37 = (undefined1 (*) [16])CONCAT62(0x14363,CONCAT11('7' - bVar65,0xf));
    (*pauVar26)[0] = (*pauVar26)[0] + bVar17;
    pauVar29 = pauVar26;
code_r0x000142a74cb9:
    pbVar36 = pauVar37[-8] + 0xd;
    bVar41 = *pbVar36;
    *pbVar36 = *pbVar36 + (byte)pauVar37;
    pauVar29[0x4800000][1] = pauVar29[0x4800000][1] + -0x77 + CARRY1(bVar41,(byte)pauVar37);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1e:
    (*pauVar26)[0] = (*pauVar26)[0] + bVar17;
    pauVar26 = param_3;
    goto code_r0x000142a74e76;
  case 0x1f:
    return pauVar26;
  case 0x20:
  case 0x21:
    (&UNK_143633895)[uVar25] = (&UNK_143633895)[uVar25] + '\x10';
    puVar47 = (undefined8 *)((longlong)&uStack_48 + lVar24);
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = *(undefined8 *)(param_2[0x286c6726] + 8);
    goto code_r0x000142a7cea0;
  case 0x22:
    out((short)param_2,uVar63);
    return pauVar26;
  case 0x23:
    *(uint *)(&UNK_143633911 + uVar25) = *(uint *)(&UNK_143633911 + uVar25) | 0x65894cc8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x24:
    out((short)param_2,uVar63);
    return pauVar26;
  case 0x25:
code_r0x000142a7cc1a:
    auVar68 = *unaff_RBX;
    unaff_R14 = unaff_RBX + 1;
    uVar63 = ~(uint)(ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar68[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar63 == 0) {
code_r0x000142a7cc50:
        do {
          auVar68 = *unaff_R14;
          unaff_RBX = unaff_RBX + -0x20;
          unaff_R14 = unaff_R14 + 1;
          uVar63 = (ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar63 == 0);
      }
      iVar42 = 0;
      for (uVar21 = uVar63; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
        iVar42 = iVar42 + 1;
      }
      uVar25 = *(ulonglong *)((longlong)unaff_RBX + (-0x18 - (ulonglong)(uint)(iVar42 << 5)));
      if (uVar25 != 0) {
        pbVar36 = *(byte **)((longlong)unaff_RBX + (-0x10 - (ulonglong)(uint)(iVar42 << 5)));
        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cc94;
        pub_1406abac0(pbVar36,uVar25,1);
      }
      uVar63 = uVar63 - 1 & uVar63;
      unaff_RDI = (undefined1 (*) [16])(unaff_RDI[-1] + 0xf);
    } while (unaff_RDI != (undefined1 (*) [16])0x0);
code_r0x000142a7cca9:
    if (param_3[(longlong)param_3 * 2 + 3] + 1 != (undefined *)0x0) {
      lVar24 = *(longlong *)unaff_R12[0x1b];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ccda;
      pub_1406abac0((byte *)(lVar24 - ((longlong)param_3 * 0x20 + 0x20)),
                    (ulonglong)(param_3[(longlong)param_3 * 2 + 3] + 1),0x10);
    }
code_r0x000142a7ccda:
    plVar31 = *(longlong **)unaff_R12[0x27];
    LOCK();
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      lVar24 = *(longlong *)pauVar33[-1];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ccf8;
      pdb_140c7b710(lVar24 + 0x270);
    }
    goto code_r0x000142a7ccf9;
  case 0x26:
code_r0x000142a7ca1c:
    pcVar27 = pauVar26[-8] + 0xb;
    *pcVar27 = *pcVar27 + (char)pauVar37;
    cVar18 = *pcVar27;
    puVar47 = (undefined8 *)(puVar59 + -8);
    *(undefined1 (**) [16])(puVar59 + -8) = pauVar60;
    if (pauVar37 == (undefined1 (*) [16])0x1 || cVar18 == '\0') {
      bVar66 = (int)param_2 == 0;
      goto code_r0x000142a7ca24;
    }
    bVar66 = (int)pauVar26 == 0;
    puVar47 = (undefined8 *)(puVar59 + -8);
code_r0x000142a7ca6c:
    if (!bVar66) {
      uVar23 = *(undefined8 *)(pauVar33[-2] + 8);
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ca74;
      (*(code *)pauVar26)(uVar23);
    }
code_r0x000142a7ca75:
    pbVar36 = *(byte **)(pauVar33[-2] + 8);
    uVar25 = *(ulonglong *)(*(longlong *)pauVar33[-2] + 8);
    if (uVar25 != 0) {
      uVar43 = *(ulonglong *)(*(longlong *)pauVar33[-2] + 0x10);
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ca93;
      pub_1406abac0(pbVar36,uVar25,uVar43);
    }
code_r0x000142a7ccf9:
    plVar31 = *(longlong **)(*(longlong *)pauVar33[-1] + 0x118);
    LOCK();
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      lVar24 = *(longlong *)pauVar33[-1];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cd1a;
      pdb_140c7a060(lVar24 + 0x118);
    }
    plVar31 = *(longlong **)(*(longlong *)pauVar33[-1] + 0x70);
    LOCK();
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      lVar24 = *(longlong *)pauVar33[-1];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cd36;
      pdb_140c79e90(lVar24 + 0x70);
    }
code_r0x000142a7cd37:
    uVar23 = *(undefined8 *)pauVar33[-1];
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cd40;
    pdb_140987940(uVar23);
code_r0x000142a7cd41:
    if (*(char *)(*(longlong *)pauVar33[-1] + 0x14a) != '\0') {
      lVar24 = *(longlong *)pauVar33[-1];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cd5e;
      pdb_14096d580(lVar24 + 0xe0);
    }
    lVar24 = *(longlong *)pauVar33[-1];
    *(undefined1 *)(lVar24 + 0x14a) = 0;
    pbVar36 = *(byte **)(lVar24 + 0xd0);
    lVar32 = *(longlong *)(lVar24 + 0xd8);
    if (lVar32 != 0) {
      pbVar48 = pbVar36 + 0x20;
      do {
        uVar25 = *(ulonglong *)(pbVar48 + -0x20);
        if (uVar25 != 0) {
          pbVar8 = *(byte **)(pbVar48 + -0x18);
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cdb1;
          pub_1406abac0(pbVar8,uVar25,1);
        }
        uVar25 = *(ulonglong *)(pbVar48 + -8);
        if (uVar25 != 0) {
          pbVar8 = *(byte **)pbVar48;
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cdc8;
          pub_1406abac0(pbVar8,uVar25,1);
        }
        pbVar48 = pbVar48 + 0x30;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
    lVar32 = *(longlong *)(lVar24 + 200);
    if (lVar32 != 0) {
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cdec;
      pub_1406abac0(pbVar36,lVar32 * 0x30,8);
    }
    *(undefined1 *)(lVar24 + 0x14b) = 0;
    if (*(char *)(lVar24 + 0x148) != '\0') {
      lVar32 = *(longlong *)(lVar24 + 0xb8);
      *(undefined8 *)pauVar33[-2] = *(undefined8 *)(lVar24 + 0xc0);
      *(undefined8 *)(pauVar33[-2] + 8) = 0;
      *(longlong *)(pauVar33[-3] + 8) = lVar32;
      while (*(longlong *)pauVar33[-2] != *(longlong *)(pauVar33[-2] + 8)) {
        *(longlong *)(pauVar33[-2] + 8) = *(longlong *)(pauVar33[-2] + 8) + 1;
        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ce3a;
        pdb_14098f040(lVar32);
        lVar32 = lVar32 + 0x60;
      }
      lVar24 = *(longlong *)pauVar33[-1];
      lVar32 = *(longlong *)(lVar24 + 0xb0);
      if (lVar32 != 0) {
        pbVar36 = *(byte **)(pauVar33[-3] + 8);
        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ce67;
        pub_1406abac0(pbVar36,lVar32 * 0x60,0x10);
      }
    }
    *(undefined1 *)(lVar24 + 0x148) = 0;
    *(undefined1 *)(lVar24 + 0x14c) = 0;
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ce80;
    pdb_14098a860(lVar24 + 0x40);
    unaff_R14 = *(undefined1 (**) [16])pauVar33[-1];
    unaff_R14[0x14][9] = 0;
    param_3 = *(undefined1 (**) [16])unaff_R14[10];
    unaff_RDI = *(undefined1 (**) [16])(unaff_R14[10] + 8);
    if (unaff_RDI != (undefined1 (*) [16])0x0) {
code_r0x000142a7cea0:
      pauVar33 = param_3 + 2;
      do {
        uVar25 = *(ulonglong *)pauVar33[-2];
        if (uVar25 != 0) {
          pbVar36 = *(byte **)(pauVar33[-2] + 8);
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ced1;
          pub_1406abac0(pbVar36,uVar25,1);
        }
        uVar25 = *(ulonglong *)(pauVar33[-1] + 8);
        if (uVar25 != 0) {
          pbVar36 = *(byte **)*pauVar33;
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cee8;
          pub_1406abac0(pbVar36,uVar25,1);
        }
        pauVar33 = (undefined1 (*) [16])(pauVar33[3] + 8);
        unaff_RDI = (undefined1 (*) [16])(unaff_RDI[-1] + 0xf);
      } while (unaff_RDI != (undefined1 (*) [16])0x0);
    }
code_r0x000142a7ceea:
    if (*(longlong *)(unaff_R14[9] + 8) == 0) {
      return (undefined1 (*) [16])0x0;
    }
    lVar24 = *(longlong *)(unaff_R14[9] + 8) * 0x38;
    uVar23 = *(undefined8 *)((longlong)puVar47 + 0x60);
    uVar67 = *(undefined8 *)((longlong)puVar47 + 0x80);
    puVar49 = (undefined1 *)((longlong)puVar47 + 0x88);
code_r0x0001406abac0:
    *(undefined8 *)(puVar49 + -8) = uVar67;
    *(undefined8 *)(puVar49 + -0x10) = uVar23;
    *(undefined **)(puVar49 + -0x40) = &UNK_140f3c37e;
    uVar23 = GetProcessHeap(param_3,lVar24);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar33 = (undefined1 (*) [16])HeapFree(uVar23,0,param_3);
    return pauVar33;
  default:
    (&UNK_143633895)[uVar25] = (&UNK_143633895)[uVar25] + '\x10';
    (param_3[4] + 8)[(longlong)param_2] = 0;
    pbVar36 = *(byte **)((ulonglong)*(uint *)(&stack0x00000030 + lVar24) + 0xb0);
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a7d709;
    pub_1406abac0(pbVar36,(ulonglong)param_2,1);
    lVar32 = *(longlong *)(&stack0x00000030 + lVar24);
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a7d716;
    pdb_1404a7a30(lVar32 + 0x60);
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a7d71f;
    pdb_1404ca240(lVar32 + 0x48);
    uVar25 = lVar32 + 0x28;
    goto code_r0x000142a7d723;
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
    return pauVar26;
  case 0x2f:
    uVar25 = (ulonglong)((int)param_3 + 0x28);
code_r0x000142a7d723:
    *(undefined8 *)((longlong)&uStack_48 + lVar24) = 0x142a7d728;
    pauVar33 = (undefined1 (*) [16])pdb_14098a860(uVar25);
    return pauVar33;
  case 0x30:
    uVar25 = (ulonglong)(uVar63 + *(int *)(&stack0xffffffffffffffe0 + lVar24));
    do {
      puVar47 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar24);
      if ((undefined1 (*) [16])(uVar25 + *(ulonglong *)(&stack0xffffffffffffffe0 + lVar24)) <=
          pauVar33 && !CARRY8(uVar25,*(ulonglong *)(&stack0xffffffffffffffe0 + lVar24))) {
code_r0x000142a7d978:
        *(undefined **)((longlong)puVar47 + -8) = &UNK_142a7d991;
        pdb_142dc8420(0,*(undefined8 *)((longlong)puVar47 + 0x20),4,&UNK_1436332b0);
        pcVar9 = (code *)swi(3);
        pauVar33 = (undefined1 (*) [16])(*pcVar9)();
        return pauVar33;
      }
      do {
        *(undefined1 (**) [16])(unaff_RDI[2] + 8) = unaff_R14;
        if ((unaff_R14 < unaff_R13) || (pauVar33 < unaff_R14)) {
code_r0x000142a7d953:
          unaff_RDI[4][1] = 1;
          pauVar26 = *(undefined1 (**) [16])*unaff_RDI;
code_r0x000142a7d95a:
          return (undefined1 (*) [16])(*pauVar26 + (longlong)*param_3);
        }
        unaff_R14 = (undefined1 (*) [16])((longlong)unaff_R14 - (longlong)unaff_R13);
        pauVar37 = (undefined1 (*) [16])(ulonglong)(byte)(*unaff_R15)[(longlong)unaff_RDI[3]];
code_r0x000142a7d93d:
        puVar45 = *unaff_R13 + (longlong)*param_3;
        *(undefined **)((longlong)&uStack_48 + lVar24) = &UNK_142a7d949;
        lVar32 = pdb_140f69410(pauVar37,puVar45,unaff_R14);
        if (lVar32 != 1) {
          *(undefined1 (**) [16])(unaff_RDI[2] + 8) = unaff_R13;
          goto code_r0x000142a7d953;
        }
        unaff_R14 = (undefined1 (*) [16])(puVar45 + (longlong)unaff_R13);
        uVar25 = (longlong)unaff_R14 - (longlong)unaff_R15;
      } while (unaff_R14 < unaff_R15);
    } while( true );
  case 0x31:
    pcVar9 = (code *)swi(3);
    pauVar33 = (undefined1 (*) [16])(*pcVar9)();
    return pauVar33;
  case 0x32:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x33:
    goto code_r0x000142a7d93d;
  }
  *(undefined1 (**) [16])unaff_R15[0x3b] = param_2;
  while( true ) {
    unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
    if (pauVar26 == param_2) break;
    *(undefined1 (**) [16])unaff_R15[0x3a] = pauVar26 + 4;
    uVar23 = *(undefined8 *)*pauVar26;
    uVar67 = *(undefined8 *)(*pauVar26 + 8);
    auVar68 = pauVar26[1];
    uVar64 = *(undefined8 *)pauVar26[2];
    uVar6 = *(undefined8 *)(pauVar26[2] + 8);
    uVar7 = *(undefined8 *)(pauVar26[3] + 8);
    *(undefined8 *)(unaff_R15[0x3e] + 8) = *(undefined8 *)pauVar26[3];
    *(undefined8 *)unaff_R15[0x3f] = uVar7;
    *(undefined8 *)(unaff_R15[0x3d] + 8) = uVar64;
    *(undefined8 *)unaff_R15[0x3e] = uVar6;
    *(undefined1 (*) [16])(unaff_R15[0x3c] + 8) = auVar68;
    *(undefined8 *)(unaff_R15[0x3b] + 8) = uVar23;
    *(undefined8 *)unaff_R15[0x3c] = uVar67;
    pauVar37 = pauVar26 + 4;
    if (SBORROW8(0,*(longlong *)(unaff_R15[0x3b] + 8))) goto code_r0x000142a775a6;
    uVar23 = *(undefined8 *)*pauVar26;
    uVar67 = *(undefined8 *)(*pauVar26 + 8);
    *(undefined8 *)(unaff_R15[0x36] + 8) = *(undefined8 *)pauVar26[1];
    *(undefined8 *)(unaff_R15[0x35] + 8) = uVar23;
    *(undefined8 *)unaff_R15[0x36] = uVar67;
    uVar23 = *(undefined8 *)(unaff_R15[0x3d] + 8);
    *(undefined8 *)unaff_R15[0x37] = *(undefined8 *)unaff_R15[0x3d];
    *(undefined8 *)(unaff_R15[0x37] + 8) = uVar23;
    *(undefined8 *)unaff_R15[0x38] = *(undefined8 *)unaff_R15[0x3e];
    param_2 = *(undefined1 (**) [16])(unaff_R15[0x3e] + 8);
    lVar24 = *(longlong *)unaff_R15[0x3f];
    *(undefined1 (**) [16])(unaff_R15[0x38] + 8) = param_2;
    *(longlong *)unaff_R15[0x39] = lVar24;
code_r0x000142a772c1:
    *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
    pcVar9 = *(code **)(lVar24 + 0x18);
    *(undefined8 *)((longlong)puVar54 + -8) = 0x142a772d2;
    (*pcVar9)(pauVar33 + -3,param_2,param_3);
    lVar24 = *(longlong *)pauVar33[-3];
    if (lVar24 == 2) {
      uVar19 = 3;
      goto code_r0x000142a77706;
    }
    uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
    uVar67 = *(undefined8 *)pauVar33[-2];
    uVar64 = *(undefined8 *)(pauVar33[-2] + 8);
    uVar6 = *(undefined8 *)pauVar33[-1];
    lVar32 = *(longlong *)pauVar33[0x153];
    *(undefined8 *)(pauVar33[0x151] + 8) = *(undefined8 *)(lVar32 + 0x388);
    puVar28 = *(undefined8 **)(lVar32 + 0x390);
    *(undefined8 **)(pauVar33[0x150] + 8) = puVar28;
    pcVar9 = (code *)*puVar28;
    if (pcVar9 != (code *)0x0) {
      uVar7 = *(undefined8 *)(pauVar33[0x151] + 8);
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77325;
      (*pcVar9)(uVar7);
    }
    pbVar36 = *(byte **)(pauVar33[0x151] + 8);
    uVar25 = *(ulonglong *)(*(longlong *)(pauVar33[0x150] + 8) + 8);
    if (uVar25 != 0) {
      uVar43 = *(ulonglong *)(*(longlong *)(pauVar33[0x150] + 8) + 0x10);
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77346;
      pub_1406abac0(pbVar36,uVar25,uVar43);
    }
    lVar32 = *(longlong *)pauVar33[0x153];
    if ((int)lVar24 == 1) {
      *(undefined8 *)pauVar33[-3] = uVar23;
      *(undefined8 *)(pauVar33[-3] + 8) = uVar67;
      *(undefined8 *)pauVar33[-2] = uVar64;
      *(undefined8 *)(pauVar33[-2] + 8) = uVar6;
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77738;
      unaff_R13 = (undefined1 (*) [16])pdb_142deada0(pauVar33 + -3);
      lVar24 = *(longlong *)pauVar33[0x153];
      uVar25 = *(ulonglong *)(lVar24 + 0x358);
      if (uVar25 != 0) {
        pbVar36 = *(byte **)(lVar24 + 0x360);
        *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77761;
        pub_1406abac0(pbVar36,uVar25,1);
      }
      lVar32 = *(longlong *)(lVar24 + 0x3a0);
      lVar24 = *(longlong *)(lVar24 + 0x3b0);
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a7777b;
      pdb_140986550(lVar32,(ulonglong)(lVar24 - lVar32) >> 6);
      lVar24 = *(longlong *)pauVar33[0x153];
      pauVar26 = (undefined1 (*) [16])0x0;
      unaff_R15 = param_3;
      if (*(longlong *)(lVar24 + 0x3a8) != 0) {
        pbVar36 = *(byte **)(lVar24 + 0x398);
        pauVar26 = (undefined1 (*) [16])(*(longlong *)(lVar24 + 0x3a8) << 6);
        *(undefined8 *)((longlong)puVar54 + -8) = 0x142a777aa;
        pub_1406abac0(pbVar36,(ulonglong)pauVar26,8);
      }
      goto code_r0x000142a777aa;
    }
    *(undefined8 *)pauVar33[0x14b] = uVar67;
    *(undefined8 *)(pauVar33[0x14b] + 8) = uVar64;
    *(undefined8 *)pauVar33[0x14c] = uVar6;
    uVar23 = *(undefined8 *)(lVar32 + 0x360);
    uVar67 = *(undefined8 *)(lVar32 + 0x368);
    *(undefined8 *)pauVar33[0x140] = 0;
    *(undefined8 *)(pauVar33[0x140] + 8) = 1;
    *(undefined8 *)pauVar33[0x141] = 0;
    *(undefined8 *)pauVar33[-2] = 0x60000020;
    *(undefined1 (**) [16])pauVar33[-3] = pauVar33 + 0x140;
    *(undefined **)(pauVar33[-3] + 8) = &UNK_143633800;
    *(undefined8 *)((longlong)puVar54 + -8) = 0x142a773c2;
    cVar18 = pdb_140f73140(uVar23,uVar67,pauVar33 + -3);
    if (cVar18 != '\0') {
      *(undefined **)((longlong)puVar54 + 0x20) = &UNK_1436338d8;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a784c1;
      pdb_142dc8170(&UNK_143633830,0x37,pauVar33[0x150] + 6,&UNK_1436338f0);
    }
    *(undefined8 *)(pauVar33[0x151] + 8) = *(undefined8 *)pauVar33[0x140];
    *(undefined8 *)(pauVar33[0x150] + 8) = *(undefined8 *)(pauVar33[0x140] + 8);
    uVar23 = *(undefined8 *)pauVar33[0x141];
    uVar67 = *(undefined8 *)pauVar33[0x14b];
    uVar64 = *(undefined8 *)(pauVar33[0x14b] + 8);
    uVar19 = *(undefined1 *)(*(longlong *)pauVar33[0x14c] + 0x38);
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined8 *)pauVar33[-2] = *(undefined8 *)(lVar24 + 0x380);
    uVar6 = *(undefined8 *)(lVar24 + 0x378);
    *(undefined8 *)pauVar33[-3] = *(undefined8 *)(lVar24 + 0x370);
    *(undefined8 *)(pauVar33[-3] + 8) = uVar6;
    lVar32 = *(longlong *)(lVar24 + 0x348);
    if (lVar32 == *(longlong *)(lVar24 + 0x338)) {
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77443;
      pdb_142d7eb40(lVar24 + 0x338);
    }
    lVar22 = *(longlong *)(lVar24 + 0x340);
    lVar39 = lVar32 * 0x50;
    *(undefined8 *)(lVar22 + 8 + lVar39) = uVar64;
    *(undefined8 *)(lVar22 + lVar39) = uVar67;
    *(undefined8 *)(lVar22 + 0x10 + lVar39) = *(undefined8 *)(pauVar33[0x151] + 8);
    *(undefined8 *)(lVar22 + 0x18 + lVar39) = *(undefined8 *)(pauVar33[0x150] + 8);
    *(undefined8 *)(lVar22 + 0x20 + lVar39) = uVar23;
    uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
    puVar28 = (undefined8 *)(lVar22 + 0x28 + lVar39);
    *puVar28 = *(undefined8 *)pauVar33[-3];
    puVar28[1] = uVar23;
    *(undefined8 *)(lVar22 + 0x38 + lVar39) = *(undefined8 *)pauVar33[-2];
    *(undefined1 *)(lVar22 + 0x40 + lVar39) = uVar19;
    *(longlong *)(lVar24 + 0x348) = lVar32 + 1;
    plVar31 = *(longlong **)pauVar33[0x14c];
    LOCK();
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a774b4;
      pdb_141746b00(pauVar33 + 0x14c);
    }
    unaff_R15 = *(undefined1 (**) [16])pauVar33[0x153];
    uVar25 = *(ulonglong *)(unaff_R15[0x35] + 8);
    if (uVar25 != 0) {
      pbVar36 = *(byte **)unaff_R15[0x36];
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a774dd;
      pub_1406abac0(pbVar36,uVar25,1);
    }
    pauVar26 = *(undefined1 (**) [16])unaff_R15[0x3a];
    param_2 = *(undefined1 (**) [16])unaff_R15[0x3b];
  }
  *(undefined8 *)(unaff_R15[0x3b] + 8) = 0x8000000000000000;
  pauVar37 = pauVar26;
code_r0x000142a775a6:
  *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_RDI;
  *(undefined8 *)((longlong)puVar54 + -8) = 0x142a775bc;
  pdb_140986550(pauVar37,(ulonglong)((longlong)param_2 - (longlong)pauVar37) >> 6);
  lVar24 = *(longlong *)pauVar33[0x153];
  lVar32 = *(longlong *)(lVar24 + 0x3a8);
  if (lVar32 != 0) {
    pbVar36 = *(byte **)(lVar24 + 0x398);
    *(undefined8 *)((longlong)puVar54 + -8) = 0x142a775e6;
    pub_1406abac0(pbVar36,lVar32 << 6,8);
  }
  uVar23 = *(undefined8 *)(lVar24 + 0x300);
  *(undefined1 *)(lVar24 + 0x352) = 0;
  *(undefined8 *)pauVar33[-2] = *(undefined8 *)(lVar24 + 0x348);
  uVar67 = *(undefined8 *)(lVar24 + 0x340);
  *(undefined8 *)pauVar33[-3] = *(undefined8 *)(lVar24 + 0x338);
  *(undefined8 *)(pauVar33[-3] + 8) = uVar67;
  pauVar37 = pauVar33 + -3;
  *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77615;
  uVar23 = pdb_14170f530(uVar23);
  lVar24 = *(longlong *)pauVar33[0x153];
  *(undefined8 *)(lVar24 + 0x358) = uVar23;
  *(undefined1 (**) [16])(lVar24 + 0x360) = pauVar37;
code_r0x000142a77634:
  pcVar9 = *(code **)(pauVar37[1] + 8);
  *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77641;
  (*pcVar9)(pauVar33 + -3,uVar23,param_3);
  lVar24 = *(longlong *)pauVar33[-3];
  if (lVar24 == 2) {
    uVar19 = 4;
code_r0x000142a77706:
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0x351) = uVar19;
    uVar19 = 6;
code_r0x000142a78823:
    **(undefined1 **)(pauVar33[0x152] + 8) = uVar19;
code_r0x000142a7882c:
    puVar28 = *(undefined8 **)(pauVar33[0x136] + 8);
    *puVar28 = 3;
    pauVar33 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)puVar28 >> 8),3);
    goto code_r0x000142a771f4;
  }
  uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
  unaff_R13 = *(undefined1 (**) [16])pauVar33[-2];
  unaff_R15 = *(undefined1 (**) [16])(pauVar33[-2] + 8);
  lVar32 = *(longlong *)pauVar33[-1];
  lVar22 = *(longlong *)pauVar33[0x153];
  *(undefined8 *)(pauVar33[0x151] + 8) = *(undefined8 *)(lVar22 + 0x358);
  puVar28 = *(undefined8 **)(lVar22 + 0x360);
  *(undefined8 **)(pauVar33[0x150] + 8) = puVar28;
  pcVar9 = (code *)*puVar28;
  if (pcVar9 != (code *)0x0) {
    uVar67 = *(undefined8 *)(pauVar33[0x151] + 8);
    *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77697;
    (*pcVar9)(uVar67);
  }
  pbVar36 = *(byte **)(pauVar33[0x151] + 8);
  pauVar26 = *(undefined1 (**) [16])(*(longlong *)(pauVar33[0x150] + 8) + 8);
  if (pauVar26 != (undefined1 (*) [16])0x0) {
    uVar25 = *(ulonglong *)(*(longlong *)(pauVar33[0x150] + 8) + 0x10);
    *(undefined8 *)((longlong)puVar54 + -8) = 0x142a776b8;
    pub_1406abac0(pbVar36,(ulonglong)pauVar26,uVar25);
  }
  if ((int)lVar24 == 1) {
    *(undefined8 *)pauVar33[-3] = uVar23;
    *(undefined1 (**) [16])(pauVar33[-3] + 8) = unaff_R13;
    *(undefined1 (**) [16])pauVar33[-2] = unaff_R15;
    *(longlong *)(pauVar33[-2] + 8) = lVar32;
    *(undefined8 *)((longlong)puVar54 + -8) = 0x142a776d6;
    unaff_R13 = (undefined1 (*) [16])pdb_142deada0(pauVar33 + -3);
    lVar24 = *(longlong *)pauVar33[0x153];
code_r0x000142a777aa:
    if (*(char *)(lVar24 + 0x352) != '\0') {
      pbVar36 = *(byte **)(lVar24 + 0x340);
      lVar32 = *(longlong *)(lVar24 + 0x348);
      if (lVar32 != 0) {
        unaff_R15 = (undefined1 (*) [16])(pbVar36 + 0x18);
        do {
          pauVar26 = *(undefined1 (**) [16])(unaff_R15[-1] + 8);
          if (pauVar26 != (undefined1 (*) [16])0x0) {
            pbVar48 = *(byte **)*unaff_R15;
            *(undefined8 *)((longlong)puVar54 + -8) = 0x142a777f0;
            pub_1406abac0(pbVar48,(ulonglong)pauVar26,1);
          }
          unaff_R15 = unaff_R15 + 5;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
      }
      if (*(longlong *)(lVar24 + 0x338) != 0) {
        pauVar26 = (undefined1 (*) [16])(*(longlong *)(lVar24 + 0x338) * 0x50);
        *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77815;
        pub_1406abac0(pbVar36,(ulonglong)pauVar26,0x10);
      }
    }
    *(undefined1 *)(lVar24 + 0x352) = 0;
code_r0x000142a7781e:
    uVar23 = *(undefined8 *)(pauVar33[0x152] + 8);
    if (*(char *)(lVar24 + 0x353) != '\0') {
      *(undefined8 *)(pauVar33[0x152] + 8) = uVar23;
      uVar23 = *(undefined8 *)(lVar24 + 0x328);
      uVar67 = *(undefined8 *)(lVar24 + 0x330);
      *(undefined8 *)(pauVar33[0x151] + 8) = uVar23;
      *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77853;
      pdb_140986550(uVar23,uVar67);
      lVar24 = *(longlong *)pauVar33[0x153];
      uVar23 = *(undefined8 *)(pauVar33[0x152] + 8);
      pauVar26 = (undefined1 (*) [16])0x0;
      if (*(longlong *)(lVar24 + 800) != 0) {
        pauVar26 = (undefined1 (*) [16])(*(longlong *)(lVar24 + 800) << 6);
        pbVar36 = *(byte **)(pauVar33[0x151] + 8);
        *(undefined8 *)((longlong)puVar54 + -8) = 0x142a77885;
        pub_1406abac0(pbVar36,(ulonglong)pauVar26,8);
      }
    }
    *(undefined1 *)(lVar24 + 0x353) = 0;
    lVar32 = 0;
    puVar47 = puVar54;
  }
  else {
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined2 *)(lVar24 + 0x352) = 0;
    uVar23 = *(undefined8 *)(pauVar33[0x152] + 8);
    puVar47 = puVar54;
  }
  *(undefined1 *)(lVar24 + 0x354) = 0;
  *(undefined1 *)(lVar24 + 0x351) = 1;
  *(undefined8 *)pauVar33[0x148] = uVar23;
  *(undefined8 *)(pauVar33[0x147] + 8) = *(undefined8 *)pauVar33[0x152];
  uVar67 = *(undefined8 *)pauVar33[0x135];
  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a778c4;
  pdb_141702d80(uVar67);
  *(undefined8 *)(pauVar33[0x152] + 8) = uVar23;
  if (lVar32 == 0) {
code_r0x000142a77b89:
    lVar24 = *(longlong *)pauVar33[0x153];
code_r0x000142a77b90:
    *(undefined1 *)(lVar24 + 0x2da) = 0;
    pbVar36 = *(byte **)(lVar24 + 0x260);
    lVar32 = *(longlong *)(lVar24 + 0x268);
    if (lVar32 != 0) {
      unaff_R15 = (undefined1 (*) [16])(pbVar36 + 0x20);
      do {
        uVar25 = *(ulonglong *)unaff_R15[-2];
        if (uVar25 != 0) {
          pbVar48 = *(byte **)(unaff_R15[-2] + 8);
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77be1;
          pub_1406abac0(pbVar48,uVar25,1);
        }
        pauVar26 = *(undefined1 (**) [16])(unaff_R15[-1] + 8);
        if (pauVar26 != (undefined1 (*) [16])0x0) {
          pbVar48 = *(byte **)*unaff_R15;
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77bf8;
          pub_1406abac0(pbVar48,(ulonglong)pauVar26,1);
        }
        unaff_R15 = unaff_R15 + 3;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
    unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
    if (*(longlong *)(lVar24 + 600) != 0) {
      pauVar26 = (undefined1 (*) [16])(*(longlong *)(lVar24 + 600) * 0x30);
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77c24;
      pub_1406abac0(pbVar36,(ulonglong)pauVar26,8);
    }
    *(undefined1 *)(lVar24 + 0x2db) = 0;
    if (*(char *)(lVar24 + 0x2d8) != '\0') {
      lVar32 = *(longlong *)(lVar24 + 0x248);
      *(undefined8 *)(pauVar33[0x150] + 8) = *(undefined8 *)(lVar24 + 0x250);
      *(undefined8 *)(pauVar33[0x151] + 8) = 0;
      *(longlong *)(pauVar33[0x148] + 8) = lVar32;
      while (*(longlong *)(pauVar33[0x150] + 8) != *(longlong *)(pauVar33[0x151] + 8)) {
        *(longlong *)(pauVar33[0x151] + 8) = *(longlong *)(pauVar33[0x151] + 8) + 1;
        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77c93;
        pdb_14098f040(lVar32);
        lVar32 = lVar32 + 0x60;
      }
      lVar24 = *(longlong *)pauVar33[0x153];
      unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x152] + 8);
      if (*(longlong *)(lVar24 + 0x240) != 0) {
        pauVar26 = (undefined1 (*) [16])(*(longlong *)(lVar24 + 0x240) * 0x60);
        pbVar36 = *(byte **)(pauVar33[0x148] + 8);
        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77cce;
        pub_1406abac0(pbVar36,(ulonglong)pauVar26,0x10);
      }
    }
    *(undefined1 *)(lVar24 + 0x2d8) = 0;
    *(undefined1 *)(lVar24 + 0x2dc) = 0;
    *(undefined1 (**) [16])(pauVar33[0x13f] + 8) = unaff_RDI;
    *(undefined8 *)pauVar33[0x13f] = *(undefined8 *)pauVar33[0x152];
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77d02;
    pdb_14098a860(lVar24 + 0x1d0);
code_r0x000142a77d03:
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0x2d9) = 0;
    pbVar36 = *(byte **)(lVar24 + 0x230);
    lVar32 = *(longlong *)(lVar24 + 0x238);
    if (lVar32 != 0) {
      unaff_R15 = (undefined1 (*) [16])(pbVar36 + 0x20);
      do {
        uVar25 = *(ulonglong *)unaff_R15[-2];
        if (uVar25 != 0) {
          pbVar48 = *(byte **)(unaff_R15[-2] + 8);
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77d61;
          pub_1406abac0(pbVar48,uVar25,1);
        }
        pauVar26 = *(undefined1 (**) [16])(unaff_R15[-1] + 8);
        if (pauVar26 != (undefined1 (*) [16])0x0) {
          pbVar48 = *(byte **)*unaff_R15;
          *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77d78;
          pub_1406abac0(pbVar48,(ulonglong)pauVar26,1);
        }
        unaff_R15 = (undefined1 (*) [16])(unaff_R15[3] + 8);
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
    if (*(longlong *)(lVar24 + 0x228) != 0) {
      pauVar26 = (undefined1 (*) [16])(*(longlong *)(lVar24 + 0x228) * 0x38);
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77d99;
      pub_1406abac0(pbVar36,(ulonglong)pauVar26,8);
    }
    *(undefined8 *)pauVar33[0x117] = *(undefined8 *)pauVar33[0x115];
    uVar23 = *(undefined8 *)(pauVar33[0x114] + 8);
    *(undefined8 *)pauVar33[0x116] = *(undefined8 *)pauVar33[0x114];
    *(undefined8 *)(pauVar33[0x116] + 8) = uVar23;
    (*unaff_RDI)[0] = 1;
    unaff_R14 = (undefined1 (*) [16])0x8000000000000000;
  }
  else {
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 (**) [16])(lVar24 + 0x2f0) = unaff_R13;
    *(undefined1 (**) [16])(lVar24 + 0x2f8) = unaff_R15;
    *(longlong *)(lVar24 + 0x300) = lVar32;
    *(undefined1 *)(lVar24 + 0x2d8) = 0;
    *(undefined8 *)pauVar33[-1] = *(undefined8 *)(lVar24 + 0x250);
    uVar67 = *(undefined8 *)(lVar24 + 0x248);
    *(undefined8 *)pauVar33[-2] = *(undefined8 *)(lVar24 + 0x240);
    *(undefined8 *)(pauVar33[-2] + 8) = uVar67;
    uVar67 = *(undefined8 *)(lVar24 + 0x2f0);
    *(undefined8 *)(pauVar33[-3] + 8) = *(undefined8 *)(lVar24 + 0x2f8);
    *(undefined8 *)pauVar33[-3] = uVar67;
    *(undefined8 *)(pauVar33[0x13d] + 8) = uVar23;
    *(undefined8 *)pauVar33[0x13d] = *(undefined8 *)pauVar33[0x152];
    pauVar37 = pauVar33 + -3;
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7794b;
    uVar43 = pdb_14170e4b0(lVar24 + 0x1d0);
    lVar24 = *(longlong *)pauVar33[0x153];
    *(ulonglong *)(lVar24 + 0x2e0) = uVar43;
    *(undefined1 (**) [16])(lVar24 + 0x2e8) = pauVar37;
code_r0x000142a77967:
    pcVar9 = *(code **)(pauVar37[1] + 8);
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77972;
    (*pcVar9)(pauVar33 + -3,uVar43,param_3);
    unaff_R15 = *(undefined1 (**) [16])pauVar33[-3];
    if (unaff_R15 == (undefined1 (*) [16])0x2) {
      uVar19 = 7;
code_r0x000142a7797f:
      **(undefined1 **)(pauVar33[0x152] + 8) = uVar19;
      lVar24 = *(longlong *)pauVar33[0x153];
      goto code_r0x000142a7882c;
    }
    uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
    uVar67 = *(undefined8 *)pauVar33[-2];
    uVar64 = *(undefined8 *)(pauVar33[-2] + 8);
    uVar6 = *(undefined8 *)pauVar33[-1];
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined8 *)(pauVar33[0x151] + 8) = *(undefined8 *)(lVar24 + 0x2e0);
    puVar28 = *(undefined8 **)(lVar24 + 0x2e8);
    *(undefined8 **)(pauVar33[0x150] + 8) = puVar28;
    pcVar9 = (code *)*puVar28;
    if (pcVar9 != (code *)0x0) {
      uVar7 = *(undefined8 *)(pauVar33[0x151] + 8);
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a779d8;
      (*pcVar9)(uVar7);
    }
    pbVar36 = *(byte **)(pauVar33[0x151] + 8);
    pauVar26 = *(undefined1 (**) [16])(*(longlong *)(pauVar33[0x150] + 8) + 8);
    if (pauVar26 != (undefined1 (*) [16])0x0) {
      uVar25 = *(ulonglong *)(*(longlong *)(pauVar33[0x150] + 8) + 0x10);
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a779f9;
      pub_1406abac0(pbVar36,(ulonglong)pauVar26,uVar25);
    }
    if ((int)unaff_R15 == 1) {
      *(undefined8 *)pauVar33[-3] = uVar23;
      *(undefined8 *)(pauVar33[-3] + 8) = uVar67;
      *(undefined8 *)pauVar33[-2] = uVar64;
      *(undefined8 *)(pauVar33[-2] + 8) = uVar6;
      uVar23 = *(undefined8 *)(pauVar33[0x152] + 8);
      *(undefined8 *)(pauVar33[0x13d] + 8) = uVar23;
      *(undefined8 *)pauVar33[0x13d] = *(undefined8 *)pauVar33[0x152];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77a34;
      unaff_R13 = (undefined1 (*) [16])pdb_142deada0(pauVar33 + -3);
code_r0x000142a77b51:
      lVar24 = *(longlong *)pauVar33[0x153];
      plVar31 = *(longlong **)(lVar24 + 0x300);
      LOCK();
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        *(undefined8 *)pauVar33[0x148] = uVar23;
        *(undefined8 *)(pauVar33[0x147] + 8) = *(undefined8 *)pauVar33[0x152];
        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77b88;
        pdb_141746a60(lVar24 + 0x300);
        goto code_r0x000142a77b89;
      }
      goto code_r0x000142a77b90;
    }
    *(undefined8 *)pauVar33[0x118] = uVar67;
    *(undefined8 *)(pauVar33[0x118] + 8) = uVar64;
    *(undefined8 *)pauVar33[0x119] = uVar6;
    uVar23 = *(undefined8 *)(*(longlong *)pauVar33[0x153] + 0x220);
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77a65;
    plVar31 = (longlong *)pdb_1406d0830(uVar23);
    uVar23 = *(undefined8 *)pauVar33[0x118];
    lVar24 = *plVar31;
    *(undefined8 *)((longlong)puVar47 + 0x20) = *(undefined8 *)(pauVar33[0x118] + 8);
    pauVar26 = (undefined1 (*) [16])&UNK_143633649;
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77a95;
    lVar24 = pdb_1417f4760(lVar24 + 0x10,&UNK_143633649,0x11,uVar23);
    if (lVar24 != 0) {
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77aa3;
      unaff_R13 = (undefined1 (*) [16])pdb_142deaf00(lVar24);
code_r0x000142a77b18:
      plVar31 = *(longlong **)pauVar33[0x119];
      LOCK();
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      uVar23 = *(undefined8 *)(pauVar33[0x152] + 8);
      if (*plVar31 == 0) {
        *(undefined8 *)(pauVar33[0x13d] + 8) = uVar23;
        *(undefined8 *)pauVar33[0x13d] = *(undefined8 *)pauVar33[0x152];
        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77b50;
        pdb_140c7b880(pauVar33 + 0x119);
      }
      goto code_r0x000142a77b51;
    }
    uVar23 = *(undefined8 *)(*(longlong *)pauVar33[0x153] + 0x220);
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77ab9;
    plVar31 = (longlong *)pdb_1406d0830(uVar23);
    lVar24 = *plVar31;
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77ac6;
    pdb_140cea9a0(pauVar33 + -3);
    *(undefined **)pauVar33[0x145] = &UNK_143633649;
    *(undefined8 *)(pauVar33[0x145] + 8) = 0x11;
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77af7;
    pdb_1417fa580(pauVar33 + 0x14b,lVar24 + 0x10,pauVar33 + -3,pauVar33 + 0x145);
    lVar24 = *(longlong *)pauVar33[0x14b];
    uVar23 = *(undefined8 *)(pauVar33[0x14b] + 8);
    pauVar26 = (undefined1 (*) [16])-lVar24;
    if (SBORROW8(0,lVar24)) {
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77b17;
      unaff_R13 = (undefined1 (*) [16])pdb_142deaf00();
      goto code_r0x000142a77b18;
    }
    pauVar26 = *(undefined1 (**) [16])pauVar33[0x14c];
    *(longlong *)pauVar33[0x140] = lVar24;
    *(undefined8 *)(pauVar33[0x140] + 8) = uVar23;
    *(undefined1 (**) [16])pauVar33[0x141] = pauVar26;
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78218;
    pdb_14098b740(pauVar33 + 0x140);
    unaff_R13 = *(undefined1 (**) [16])pauVar33[0x118];
    unaff_R15 = *(undefined1 (**) [16])(pauVar33[0x118] + 8);
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0x2db) = 0;
    unaff_R14 = *(undefined1 (**) [16])(lVar24 + 600);
    uVar23 = *(undefined8 *)(lVar24 + 0x268);
    *(undefined8 *)pauVar33[0x114] = *(undefined8 *)(lVar24 + 0x260);
    *(undefined8 *)(pauVar33[0x114] + 8) = uVar23;
    plVar31 = *(longlong **)pauVar33[0x119];
    LOCK();
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    puVar58 = *(undefined1 **)(pauVar33[0x152] + 8);
    if (*plVar31 == 0) {
      *(undefined1 **)(pauVar33[0x13d] + 8) = puVar58;
      *(undefined8 *)pauVar33[0x13d] = *(undefined8 *)pauVar33[0x152];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78281;
      pdb_140c7b880(pauVar33 + 0x119);
    }
    plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x300);
    LOCK();
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      lVar24 = *(longlong *)pauVar33[0x153];
      *(undefined1 **)pauVar33[0x148] = puVar58;
      *(undefined8 *)(pauVar33[0x147] + 8) = *(undefined8 *)pauVar33[0x152];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a782be;
      pdb_141746a60(lVar24 + 0x300);
    }
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined2 *)(lVar24 + 0x2da) = 0;
    *(undefined1 *)(lVar24 + 0x2d8) = 0;
    *(undefined1 *)(lVar24 + 0x2dc) = 0;
    *(undefined1 **)(pauVar33[0x13f] + 8) = puVar58;
    *(undefined8 *)pauVar33[0x13f] = *(undefined8 *)pauVar33[0x152];
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a782fe;
    pdb_14098a860(lVar24 + 0x1d0);
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0x2d9) = 0;
    *(undefined1 **)(pauVar33[0x12a] + 8) = puVar58;
    *(undefined8 *)pauVar33[0x12a] = *(undefined8 *)pauVar33[0x152];
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7832e;
    pdb_1404dd8b0(lVar24 + 0x228);
    *(undefined8 *)pauVar33[0x117] = *(undefined8 *)pauVar33[0x115];
    uVar23 = *(undefined8 *)(pauVar33[0x114] + 8);
    *(undefined8 *)pauVar33[0x116] = *(undefined8 *)pauVar33[0x114];
    *(undefined8 *)(pauVar33[0x116] + 8) = uVar23;
    *puVar58 = 1;
    lVar24 = *(longlong *)pauVar33[0x153];
    if (unaff_R14 == (undefined1 (*) [16])0x8000000000000001) goto code_r0x000142a7882c;
  }
  *(undefined8 *)pauVar33[0x110] = *(undefined8 *)pauVar33[0x117];
  uVar23 = *(undefined8 *)(pauVar33[0x116] + 8);
  *(undefined8 *)pauVar33[0x10f] = *(undefined8 *)pauVar33[0x116];
  *(undefined8 *)(pauVar33[0x10f] + 8) = uVar23;
  uVar23 = *(undefined8 *)pauVar33[0x152];
  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77df0;
  pdb_142a7c9a0(uVar23);
  if (SBORROW8(0,(longlong)unaff_R14)) {
    lVar24 = *(longlong *)pauVar33[0x153];
code_r0x000142a77fa3:
    plVar31 = *(longlong **)(lVar24 + 0x118);
    LOCK();
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      lVar24 = *(longlong *)pauVar33[0x153];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77fc3;
      pdb_140dd78e0(lVar24 + 0x118);
    }
    plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x120);
    LOCK();
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77fdf;
    pdb_142d8feb0(plVar31 + 1);
code_r0x000142a77fe0:
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77ff3;
    pdb_140967580(lVar24 + 0x100);
    puVar56 = (undefined1 *)puVar47;
code_r0x000142a77ff4:
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0xfb) = 0;
    uVar25 = *(ulonglong *)(lVar24 + 0x138);
    if (uVar25 != 0) {
      pbVar36 = *(byte **)(lVar24 + 0x140);
      *(undefined8 *)(puVar56 + -8) = 0x142a78020;
      pub_1406abac0(pbVar36,uVar25,1);
    }
    uVar25 = *(ulonglong *)(lVar24 + 0x158);
    if (uVar25 != 0) {
      pbVar36 = *(byte **)(lVar24 + 0x160);
      *(undefined8 *)(puVar56 + -8) = 0x142a7803e;
      pub_1406abac0(pbVar36,uVar25,1);
    }
    uVar25 = *(ulonglong *)(lVar24 + 0x170);
    if (uVar25 != 0) {
      pbVar36 = *(byte **)(lVar24 + 0x178);
      *(undefined8 *)(puVar56 + -8) = 0x142a7805c;
      pub_1406abac0(pbVar36,uVar25,1);
    }
code_r0x000142a7805c:
    lVar32 = *(longlong *)pauVar33[0x153];
    uVar25 = *(ulonglong *)(lVar32 + 200);
    if (uVar25 != 0) {
      pbVar36 = *(byte **)(lVar32 + 0xd0);
      *(undefined8 *)(puVar56 + -8) = 0x142a78081;
      pub_1406abac0(pbVar36,uVar25,1);
    }
    *(undefined1 *)(lVar32 + 0xfc) = 0;
    uVar25 = *(ulonglong *)(lVar32 + 0xa0);
    if ((!SBORROW8(0,uVar25)) && (uVar25 != 0)) {
      pbVar36 = *(byte **)(lVar32 + 0xa8);
      *(undefined8 *)(puVar56 + -8) = 0x142a780b3;
      pub_1406abac0(pbVar36,uVar25,1);
    }
code_r0x000142a770b4:
    *(undefined1 *)(lVar32 + 0xfd) = 0;
    uVar25 = *(ulonglong *)(lVar32 + 0x68);
    puVar57 = puVar56;
    if (uVar25 != 0) {
      pbVar36 = *(byte **)(lVar32 + 0x70);
      *(undefined8 *)(puVar56 + -8) = 0x142a770d3;
      pub_1406abac0(pbVar36,uVar25,1);
    }
code_r0x000142a770d3:
    *(undefined1 *)(lVar32 + 0xfe) = 0;
    uVar25 = *(ulonglong *)(lVar32 + 0x50);
    puVar58 = puVar57;
    if (uVar25 != 0) {
      pbVar36 = *(byte **)(lVar32 + 0x58);
      *(undefined8 *)(puVar57 + -8) = 0x142a770f2;
      pub_1406abac0(pbVar36,uVar25,1);
    }
code_r0x000142a770f2:
    *(undefined1 *)(lVar32 + 0xff) = 0;
    if (*(char *)(lVar32 + 0xf9) != '\0') {
      plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x48);
      LOCK();
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        lVar24 = *(longlong *)pauVar33[0x153];
        *(undefined8 *)(puVar58 + -8) = 0x142a77123;
        pdb_140e3f860(lVar24 + 0x48);
      }
    }
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0xf9) = 0;
    uVar25 = *(ulonglong *)(lVar24 + 0x28);
    unaff_RDI = (undefined1 (*) [16])0x2;
  }
  else {
    *(undefined8 *)(pauVar33[0x134] + 8) = *(undefined8 *)pauVar33[0x110];
    uVar23 = *(undefined8 *)(pauVar33[0x10f] + 8);
    *(undefined8 *)(pauVar33[0x133] + 8) = *(undefined8 *)pauVar33[0x10f];
    *(undefined8 *)pauVar33[0x134] = uVar23;
    *(undefined1 (**) [16])pauVar33[0x132] = unaff_R13;
    *(undefined1 (**) [16])(pauVar33[0x132] + 8) = unaff_R15;
    *(undefined1 (**) [16])pauVar33[0x133] = unaff_R14;
    if (*(longlong *)pauVar33[0x134] != 0) {
      lVar24 = *(longlong *)(pauVar33[0x133] + 8);
      uVar23 = *(undefined8 *)(lVar24 + 8);
      uVar67 = *(undefined8 *)(lVar24 + 0x10);
      *(undefined8 *)pauVar33[-3] = 0;
      *(undefined8 *)(pauVar33[-3] + 8) = uVar67;
      *(undefined8 *)pauVar33[-2] = uVar23;
      *(undefined8 *)(pauVar33[-2] + 8) = uVar67;
      *(undefined8 *)pauVar33[-1] = 0;
      *(undefined8 *)(pauVar33[-1] + 8) = uVar67;
      *(undefined8 *)*pauVar33 = 0x2f0000002f;
      (*pauVar33)[8] = 1;
      *(undefined2 *)pauVar33[1] = 1;
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77e96;
      lVar32 = pdb_142a7d7e0(pauVar33 + -3);
      if (lVar32 == 0) {
        lVar32 = *(longlong *)(lVar24 + 8);
        pauVar26 = *(undefined1 (**) [16])(lVar24 + 0x10);
      }
      *(longlong *)pauVar33[0x14b] = lVar32;
      *(undefined1 (**) [16])(pauVar33[0x14b] + 8) = pauVar26;
      *(undefined1 (**) [16])pauVar33[-3] = pauVar33 + 0x14b;
      *(code **)(pauVar33[-3] + 8) = pdb_1402ed400;
      *(longlong *)pauVar33[-2] = lVar24 + 0x18;
      *(code **)(pauVar33[-2] + 8) = pdb_140001020;
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77ef2;
      pdb_140f60760(pauVar33 + 0x118,&UNK_1436333a0,pauVar33 + -3);
      uVar23 = *(undefined8 *)(pauVar33[0x118] + 8);
      *(undefined8 *)pauVar33[-3] = *(undefined8 *)pauVar33[0x118];
      *(undefined8 *)(pauVar33[-3] + 8) = uVar23;
      *(undefined8 *)pauVar33[-2] = *(undefined8 *)pauVar33[0x119];
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77f14;
      unaff_R13 = (undefined1 (*) [16])pdb_142de92b0(pauVar33 + -3);
      pbVar36 = *(byte **)(pauVar33[0x133] + 8);
      lVar24 = *(longlong *)pauVar33[0x134];
      if (lVar24 != 0) {
        pbVar48 = pbVar36 + 0x20;
        do {
          uVar25 = *(ulonglong *)(pbVar48 + -0x20);
          if (uVar25 != 0) {
            pbVar8 = *(byte **)(pbVar48 + -0x18);
            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77f61;
            pub_1406abac0(pbVar8,uVar25,1);
          }
          uVar25 = *(ulonglong *)(pbVar48 + -8);
          if (uVar25 != 0) {
            pbVar8 = *(byte **)pbVar48;
            *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77f78;
            pub_1406abac0(pbVar8,uVar25,1);
          }
          pbVar48 = pbVar48 + 0x30;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      unaff_R14 = (undefined1 (*) [16])0x0;
      lVar32 = *(longlong *)pauVar33[0x133];
      lVar24 = *(longlong *)pauVar33[0x153];
      if (lVar32 != 0) {
        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a77fa3;
        pub_1406abac0(pbVar36,lVar32 * 0x30,8);
      }
      goto code_r0x000142a77fa3;
    }
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0xfb) = 0;
    *(undefined8 *)(lVar24 + 0xe0) = *(undefined8 *)(lVar24 + 0x100);
    *(undefined8 *)(lVar24 + 0xe8) = *(undefined8 *)(lVar24 + 0x108);
    *(undefined8 *)(lVar24 + 0xf0) = *(undefined8 *)(lVar24 + 0x110);
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a780f0;
    pdb_14098ba00(pauVar33 + 0x132);
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a78104;
    pdb_142d8e230(lVar24 + 0x118);
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0xfb) = 0;
    *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7811f;
    pdb_140998000(lVar24 + 0x128);
    unaff_RDI = *(undefined1 (**) [16])pauVar33[0x153];
    bVar66 = *(longlong *)unaff_RDI[0xf] == 0;
    pauVar37 = unaff_RDI + 0xf;
    unaff_RDI[0x10][0] = !bVar66;
    puVar50 = (undefined1 *)puVar47;
    if (bVar66) {
code_r0x000142a77217:
      if (unaff_RDI[0xc][0] == '\x01') {
        uVar23 = *(undefined8 *)unaff_RDI[7];
        uVar67 = *(undefined8 *)(unaff_RDI[7] + 8);
        *(undefined8 *)(puVar50 + -8) = 0x142a77231;
        pdb_140d99980(pauVar33 + -3,uVar23,uVar67);
        uVar25 = *(ulonglong *)pauVar33[-3];
        if (!SBORROW8(0,uVar25)) {
          unaff_RDI = *(undefined1 (**) [16])pauVar33[0x153];
          if (uVar25 != 0) {
            pbVar36 = *(byte **)(pauVar33[-3] + 8);
            *(undefined8 *)(puVar50 + -8) = 0x142a772ba;
            pub_1406abac0(pbVar36,uVar25,1);
          }
          goto code_r0x000142a78143;
        }
        *(longlong *)pauVar33[-3] = *(longlong *)pauVar33[0x153] + 0x50;
        *(code **)(pauVar33[-3] + 8) = pdb_140001020;
        *(undefined8 *)(puVar50 + -8) = 0x142a77268;
        unaff_R13 = (undefined1 (*) [16])pdb_142d8fe70(&UNK_1436333b8,pauVar33 + -3);
      }
      else {
        *(undefined1 (**) [16])pauVar33[-3] = unaff_RDI + 5;
        *(code **)(pauVar33[-3] + 8) = pdb_140001020;
        *(undefined8 *)(puVar50 + -8) = 0x142a7728e;
        unaff_R13 = (undefined1 (*) [16])pdb_142d8fe70(&UNK_143633446,pauVar33 + -3);
      }
      lVar24 = *(longlong *)pauVar33[0x153];
      puVar56 = puVar50;
code_r0x000142a747f8:
      *(undefined8 *)(puVar56 + -8) = 0x142a74805;
      pdb_140967580(lVar24 + 0xe0);
      goto code_r0x000142a7805c;
    }
code_r0x000142a78143:
    uVar23 = *(undefined8 *)unaff_RDI[7];
    uVar67 = *(undefined8 *)(unaff_RDI[7] + 8);
    *(undefined8 *)(puVar50 + -8) = 0x142a78150;
    uVar23 = pdb_140c8a840(uVar23);
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined8 *)(lVar24 + 0x108) = uVar23;
    *(undefined8 *)(lVar24 + 0x110) = uVar67;
    uVar23 = *(undefined8 *)(lVar24 + 0x70);
    uVar67 = *(undefined8 *)(lVar24 + 0x78);
    uVar64 = *(undefined8 *)(lVar24 + 0x58);
    *(undefined8 *)(puVar50 + 0x20) = *(undefined8 *)(lVar24 + 0x60);
    *(undefined8 *)(puVar50 + -8) = 0x142a78184;
    pdb_140b28270(pauVar33 + -3,uVar23,uVar67,uVar64);
    puVar56 = puVar50;
    if (*(longlong *)pauVar33[-3] == -0x7fffffffffffffff) {
      unaff_R13 = *(undefined1 (**) [16])(pauVar33[-3] + 8);
      lVar24 = *(longlong *)pauVar33[0x153];
      *(undefined1 (**) [16])(lVar24 + 0x150) = unaff_R13;
      *(undefined8 *)(lVar24 + 0x148) = 0x8000000000000001;
      goto code_r0x000142a747f8;
    }
    lVar24 = *(longlong *)pauVar33[0x153];
    puVar28 = (undefined8 *)(lVar24 + 0x148);
    uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
    uVar67 = *(undefined8 *)pauVar33[-2];
    uVar64 = *(undefined8 *)(pauVar33[-2] + 8);
    *puVar28 = *(undefined8 *)pauVar33[-3];
    *(undefined8 *)(lVar24 + 0x150) = uVar23;
    *(undefined8 *)(lVar24 + 0x158) = uVar67;
    *(undefined8 *)(lVar24 + 0x160) = uVar64;
    param_2 = (undefined1 (*) [16])*puVar28;
    if (param_2 == (undefined1 (*) [16])0x8000000000000001) {
      unaff_R13 = *(undefined1 (**) [16])(lVar24 + 0x150);
      goto code_r0x000142a747f8;
    }
    *(undefined8 *)(lVar24 + 0x128) = *puVar28;
    *(undefined8 *)(lVar24 + 0x130) = *(undefined8 *)(lVar24 + 0x150);
    *(undefined1 (*) [16])(lVar24 + 0x138) = *(undefined1 (*) [16])(lVar24 + 0x158);
    if (SBORROW8(0,*(longlong *)(lVar24 + 0x128))) {
      lVar24 = *(longlong *)(lVar24 + 0xe8);
      lVar32 = *(longlong *)*pauVar37;
      *(undefined8 *)(puVar50 + -8) = 0x142a783be;
      pdb_1415fe4e0(pauVar33 + 0x137,lVar24,lVar32 * 0x90 + lVar24);
      *(undefined1 *)(*(longlong *)pauVar33[0x153] + 0xfa) = 1;
      *(undefined8 *)(puVar50 + -8) = 0x142a783d6;
      pdb_141c36f00(pauVar33 + -3);
      unaff_R13 = *(undefined1 (**) [16])(pauVar33[-3] + 8);
      if (*(longlong *)pauVar33[-3] != 0) {
        pauVar37 = *(undefined1 (**) [16])pauVar33[0x153];
        *(longlong *)(pauVar37[0x11] + 8) = *(longlong *)pauVar33[-3];
        *(undefined1 (**) [16])pauVar37[0x12] = unaff_R13;
        *(undefined2 *)(pauVar37[0xf] + 9) = 0;
        uVar23 = *(undefined8 *)(pauVar37[4] + 8);
        *(undefined1 (**) [16])(pauVar33[0x152] + 8) = pauVar37 + 0x17;
        uVar67 = *(undefined8 *)(pauVar33[0x137] + 8);
        *(undefined8 *)pauVar37[0x17] = *(undefined8 *)pauVar33[0x137];
        *(undefined8 *)(pauVar37[0x17] + 8) = uVar67;
        *(undefined8 *)pauVar37[0x18] = *(undefined8 *)pauVar33[0x138];
        *(undefined1 **)(pauVar37[0x18] + 8) = pauVar37[0x11] + 8;
        *(undefined8 *)pauVar37[0x19] = uVar23;
        *(undefined1 **)(pauVar33[0x150] + 8) = pauVar37[0x23] + 8;
        pauVar37[0x23][8] = 0;
        uVar23 = *(undefined8 *)(pauVar37[0x18] + 8);
        pauVar37[0x23][10] = 1;
        puVar28 = *(undefined8 **)(pauVar33[0x152] + 8);
        *(undefined8 *)pauVar33[0x13b] = puVar28[2];
        uVar67 = puVar28[1];
        *(undefined8 *)pauVar33[0x13a] = *puVar28;
        *(undefined8 *)(pauVar33[0x13a] + 8) = uVar67;
        uVar67 = *(undefined8 *)pauVar37[0x19];
        pauVar37[0x23][9] = 1;
        *(undefined8 **)(pauVar33[0x13c] + 8) = puVar28;
        *(undefined8 *)(puVar50 + -8) = 0x142a74321;
        unaff_R13 = (undefined1 (*) [16])pdb_140cf7270(uVar67);
        if (unaff_R13 == (undefined1 (*) [16])0x0) {
          *(undefined8 *)(pauVar33[0x13c] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
          *(undefined8 *)(puVar50 + -8) = 0x142a746ec;
          puVar28 = (undefined8 *)pdb_1406d0830(uVar23);
          plVar31 = (longlong *)*puVar28;
          LOCK();
          lVar24 = *plVar31;
          *plVar31 = *plVar31 + 1;
          UNLOCK();
          if (*plVar31 == 0 || SCARRY8(lVar24,1) != *plVar31 < 0) goto code_r0x000142a772bf;
          lVar24 = *(longlong *)pauVar33[0x153];
          *(undefined1 *)(lVar24 + 0x239) = 0;
          *(longlong **)pauVar33[-3] = plVar31;
          *(undefined8 *)(puVar50 + -8) = 0x142a74712;
          pdb_14007ee60();
          *(undefined8 *)(puVar50 + -8) = 0x142a74721;
          pbVar36 = pub_1406abab0(0x10,8);
          if (pbVar36 == (byte *)0x0) {
            *(longlong **)pauVar33[0x152] = plVar31;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar50 + -8) = 0x142a74f6b;
            pdb_142dc7e11(8,0x10);
          }
          pbVar36[0] = 1;
          pbVar36[1] = 0;
          pbVar36[2] = 0;
          pbVar36[3] = 0;
          pbVar36[4] = 0;
          pbVar36[5] = 0;
          pbVar36[6] = 0;
          pbVar36[7] = 0;
          pbVar36[8] = 1;
          pbVar36[9] = 0;
          pbVar36[10] = 0;
          pbVar36[0xb] = 0;
          pbVar36[0xc] = 0;
          pbVar36[0xd] = 0;
          pbVar36[0xe] = 0;
          pbVar36[0xf] = 0;
          *(longlong **)(lVar24 + 0x198) = plVar31;
          *(undefined8 *)(lVar24 + 0x1a0) = 0;
          *(byte **)(lVar24 + 0x1a8) = pbVar36;
          *(undefined **)(lVar24 + 0x1b0) = &UNK_14332a748;
          *(undefined8 *)(lVar24 + 0x1b8) = 0;
          *(undefined8 *)(lVar24 + 0x1c0) = 8;
          *(undefined8 *)(lVar24 + 0x1c8) = 0;
          *(undefined1 *)(lVar24 + 0x23a) = 0;
          uVar23 = *(undefined8 *)pauVar33[0x13a];
          lVar32 = *(longlong *)(pauVar33[0x13a] + 8);
          lVar22 = *(longlong *)pauVar33[0x13b];
          *(longlong *)(lVar24 + 0x1d0) = lVar32;
          *(longlong *)(lVar24 + 0x1d8) = lVar32;
          *(undefined8 *)(lVar24 + 0x1e0) = uVar23;
          *(longlong *)(lVar24 + 0x1e8) = lVar22 * 0x20 + lVar32;
          *(undefined8 *)(lVar24 + 0x1f0) = 0x10;
          while( true ) {
            if (*(longlong *)(lVar24 + 0x1f0) == 0) break;
            *(longlong *)(lVar24 + 0x1f0) = *(longlong *)(lVar24 + 0x1f0) + -1;
            puVar28 = *(undefined8 **)(lVar24 + 0x1d8);
            puVar47 = *(undefined8 **)(lVar24 + 0x1e8);
            if (puVar28 == puVar47) goto code_r0x000142a768be;
            *(undefined8 **)(lVar24 + 0x1d8) = puVar28 + 4;
            uVar23 = *puVar28;
            uVar67 = puVar28[1];
            *(undefined1 (*) [16])(lVar24 + 0x208) = *(undefined1 (*) [16])(puVar28 + 2);
            *(undefined8 *)(lVar24 + 0x1f8) = uVar23;
            *(undefined8 *)(lVar24 + 0x200) = uVar67;
            puVar54 = puVar28 + 4;
            if (SBORROW8(0,*(longlong *)(lVar24 + 0x1f8))) goto code_r0x000142a768ce;
            uVar23 = *puVar28;
            uVar67 = puVar28[1];
            *(undefined1 (*) [16])(lVar24 + 0x228) = *(undefined1 (*) [16])(puVar28 + 2);
            *(undefined8 *)(lVar24 + 0x218) = uVar23;
            *(undefined8 *)(lVar24 + 0x220) = uVar67;
            uVar25 = *(ulonglong *)(lVar24 + 0x228);
            if ((longlong)uVar25 < 0) {
              uVar23 = 0;
code_r0x000142a76145:
              *(undefined8 *)(pauVar33[0x149] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
              *(undefined8 *)(puVar50 + -8) = 0x142a7615e;
              pdb_142dc7e2a(uVar23,uVar25);
              goto code_r0x000142a772bf;
            }
            pbVar36 = (byte *)0x1;
            if (uVar25 != 0) {
              uVar67 = *(undefined8 *)(lVar24 + 0x220);
              *(undefined8 *)(puVar50 + -8) = 0x142a76178;
              pdb_14007ee60();
              uVar23 = 1;
              *(undefined8 *)(puVar50 + -8) = 0x142a7618b;
              pbVar36 = pub_1406abab0(uVar25,1);
              if (pbVar36 == (byte *)0x0) goto code_r0x000142a76145;
              *(undefined8 *)(puVar50 + -8) = 0x142a761a1;
              pub_142e32760(pbVar36,uVar67,uVar25);
            }
            uVar19 = *(undefined1 *)(lVar24 + 0x230);
            *(ulonglong *)pauVar33[-3] = uVar25;
            *(byte **)(pauVar33[-3] + 8) = pbVar36;
            *(ulonglong *)pauVar33[-2] = uVar25;
            pauVar33[-2][8] = uVar19;
            *(undefined8 *)(pauVar33[0x149] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
            pauVar37 = pauVar33 + -3;
            *(undefined8 *)(puVar50 + -8) = 0x142a761d6;
            uVar23 = pdb_141712d40(lVar24 + 0x198);
            lVar24 = *(longlong *)pauVar33[0x153];
            *(undefined8 *)(lVar24 + 0x240) = uVar23;
            *(undefined1 (**) [16])(lVar24 + 0x248) = pauVar37;
            pcVar9 = *(code **)(pauVar37[1] + 8);
            *(undefined8 *)(puVar50 + -8) = 0x142a761ff;
            (*pcVar9)(pauVar33 + -3,uVar23,param_3);
            uVar25 = *(ulonglong *)pauVar33[-3];
            if (uVar25 == 2) {
              uVar19 = 3;
code_r0x000142a769d6:
              **(undefined1 **)(pauVar33[0x150] + 8) = uVar19;
              lVar24 = *(longlong *)pauVar33[0x153];
              goto code_r0x000142a769e6;
            }
            uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
            unaff_R14 = *(undefined1 (**) [16])pauVar33[-2];
            plVar31 = *(longlong **)(pauVar33[-2] + 8);
            lVar24 = *(longlong *)pauVar33[-1];
            *(undefined8 *)pauVar33[0x152] = *(undefined8 *)(*(longlong *)pauVar33[0x153] + 0x240);
            puVar28 = *(undefined8 **)(*(longlong *)pauVar33[0x153] + 0x248);
            *(undefined8 **)(pauVar33[0x151] + 8) = puVar28;
            pcVar9 = (code *)*puVar28;
            if (pcVar9 != (code *)0x0) {
              uVar67 = *(undefined8 *)pauVar33[0x152];
              *(undefined8 *)(puVar50 + -8) = 0x142a76252;
              (*pcVar9)(uVar67);
            }
            pbVar36 = *(byte **)pauVar33[0x152];
            uVar43 = *(ulonglong *)(*(longlong *)(pauVar33[0x151] + 8) + 8);
            if (uVar43 != 0) {
              uVar44 = *(ulonglong *)(*(longlong *)(pauVar33[0x151] + 8) + 0x10);
              *(undefined8 *)(puVar50 + -8) = 0x142a76273;
              pub_1406abac0(pbVar36,uVar43,uVar44);
            }
            lVar32 = *(longlong *)pauVar33[0x153];
            if ((uVar25 & 1) == 0) {
              *(undefined1 (**) [16])(lVar32 + 0x250) = unaff_R14;
              *(longlong **)(lVar32 + 600) = plVar31;
              *(longlong *)(lVar32 + 0x260) = lVar24;
              uVar25 = *(ulonglong *)(lVar24 + 0x30);
              uVar43 = uVar25 << 4;
              if (uVar43 < 0x7ffffffffffffff1 && uVar25 >> 0x3c == 0) {
                uVar23 = *(undefined8 *)(lVar24 + 0x10);
                uVar67 = *(undefined8 *)(lVar24 + 0x18);
                pbVar36 = (byte *)0x10;
                if (uVar43 != 0) {
                  *(undefined1 (**) [16])(pauVar33[0x151] + 8) = param_3;
                  lVar24 = *(longlong *)(lVar24 + 0x28);
                  *(undefined8 *)(puVar50 + -8) = 0x142a76463;
                  pdb_14007ee60(lVar32 + 0x198);
                  uVar64 = 0x10;
                  *(undefined8 *)(puVar50 + -8) = 0x142a76476;
                  pbVar36 = pub_1406abab0(uVar43,0x10);
                  if (pbVar36 == (byte *)0x0) goto code_r0x000142a76418;
                  if (uVar25 != 0) {
                    uVar38 = 0;
                    uVar44 = uVar25;
                    do {
                      if (uVar43 == uVar38) break;
                      puVar28 = (undefined8 *)(lVar24 + uVar38);
                      uVar64 = puVar28[1];
                      *(undefined8 *)(pbVar36 + uVar38) = *puVar28;
                      *(undefined8 *)(pbVar36 + uVar38 + 8) = uVar64;
                      uVar38 = uVar38 + 0x10;
                      uVar44 = uVar44 - 1;
                    } while (uVar44 != 0);
                  }
                  param_3 = *(undefined1 (**) [16])(pauVar33[0x151] + 8);
                }
                *(undefined8 *)pauVar33[-3] = uVar23;
                *(undefined8 *)(pauVar33[-3] + 8) = uVar67;
                *(ulonglong *)pauVar33[-2] = uVar25;
                *(byte **)(pauVar33[-2] + 8) = pbVar36;
                *(ulonglong *)pauVar33[-1] = uVar25;
                pauVar33[-1][8] = 1;
                *(undefined8 *)pauVar33[0x149] = *(undefined8 *)(pauVar33[0x152] + 8);
                pauVar37 = pauVar33 + -3;
                *(undefined8 *)(puVar50 + -8) = 0x142a764e1;
                uVar23 = pdb_141713e70(lVar32 + 0x198);
                lVar24 = *(longlong *)pauVar33[0x153];
                *(undefined8 *)(lVar24 + 0x240) = uVar23;
                *(undefined1 (**) [16])(lVar24 + 0x248) = pauVar37;
                pcVar9 = *(code **)(pauVar37[1] + 8);
                *(undefined8 *)(puVar50 + -8) = 0x142a7650a;
                (*pcVar9)(pauVar33 + -3,uVar23,param_3);
                uVar25 = *(ulonglong *)pauVar33[-3];
                if (uVar25 == 2) {
                  uVar19 = 4;
                  goto code_r0x000142a769d6;
                }
                uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
                unaff_R14 = *(undefined1 (**) [16])pauVar33[-2];
                plVar31 = *(longlong **)(pauVar33[-2] + 8);
                lVar24 = *(longlong *)pauVar33[-1];
                *(undefined8 *)pauVar33[0x152] =
                     *(undefined8 *)(*(longlong *)pauVar33[0x153] + 0x240);
                puVar28 = *(undefined8 **)(*(longlong *)pauVar33[0x153] + 0x248);
                *(undefined8 **)(pauVar33[0x151] + 8) = puVar28;
                pcVar9 = (code *)*puVar28;
                if (pcVar9 != (code *)0x0) {
                  uVar67 = *(undefined8 *)pauVar33[0x152];
                  *(undefined8 *)(puVar50 + -8) = 0x142a7655d;
                  (*pcVar9)(uVar67);
                }
                pbVar36 = *(byte **)pauVar33[0x152];
                uVar43 = *(ulonglong *)(*(longlong *)(pauVar33[0x151] + 8) + 8);
                if (uVar43 != 0) {
                  uVar44 = *(ulonglong *)(*(longlong *)(pauVar33[0x151] + 8) + 0x10);
                  *(undefined8 *)(puVar50 + -8) = 0x142a7657e;
                  pub_1406abac0(pbVar36,uVar43,uVar44);
                }
                lVar32 = *(longlong *)pauVar33[0x153];
                if ((uVar25 & 1) != 0) {
                  *(undefined8 *)pauVar33[0x140] = uVar23;
                  *(undefined1 (**) [16])(pauVar33[0x140] + 8) = unaff_R14;
                  *(longlong **)pauVar33[0x141] = plVar31;
                  *(longlong *)(pauVar33[0x141] + 8) = lVar24;
                  if (1 < *_DAT_143ca8e90) {
                    uVar23 = *(undefined8 *)(lVar32 + 0x220);
                    uVar67 = *(undefined8 *)(lVar32 + 0x228);
                    *(undefined8 *)(puVar50 + -8) = 0x142a765e2;
                    pdb_141b1e240(pauVar33 + 0x14b,uVar23,uVar67,3);
                    *(undefined1 (**) [16])pauVar33[0x118] = pauVar33 + 0x14b;
                    *(code **)(pauVar33[0x118] + 8) = pdb_140f58250;
                    *(undefined1 (**) [16])pauVar33[0x119] = pauVar33 + 0x140;
                    *(code **)(pauVar33[0x119] + 8) = pdb_1417487e0;
                    *(undefined8 *)pauVar33[-3] = 0;
                    *(undefined **)(pauVar33[-3] + 8) = &UNK_1436335b0;
                    *(undefined8 *)pauVar33[-2] = 0x11;
                    *(undefined8 *)(pauVar33[-2] + 8) = 0;
                    *(undefined **)pauVar33[-1] = &UNK_143633572;
                    *(undefined8 *)(pauVar33[-1] + 8) = 0x23;
                    *(undefined8 *)*pauVar33 = 2;
                    *(undefined **)(*pauVar33 + 8) = &UNK_1436335b0;
                    *(undefined8 *)pauVar33[1] = 0x11;
                    *(undefined8 *)(pauVar33[1] + 8) = 0x2d500000001;
                    *(undefined **)pauVar33[2] = &UNK_1436336e8;
                    *(undefined1 (**) [16])(pauVar33[2] + 8) = pauVar33 + 0x118;
                    *(undefined8 *)(puVar50 + -8) = 0x142a76692;
                    pdb_140f332f0(pauVar33[0x150] + 6,pauVar33 + -3);
                    uVar25 = *(ulonglong *)pauVar33[0x14b];
                    if (uVar25 != 0) {
                      pbVar36 = *(byte **)(pauVar33[0x14b] + 8);
                      *(undefined8 *)(puVar50 + -8) = 0x142a766b1;
                      pub_1406abac0(pbVar36,uVar25,1);
                    }
                    plVar31 = *(longlong **)pauVar33[0x141];
                  }
                  LOCK();
                  *plVar31 = *plVar31 + -1;
                  UNLOCK();
                  if (*plVar31 == 0) {
                    *(undefined8 *)pauVar33[0x149] = *(undefined8 *)(pauVar33[0x152] + 8);
                    *(undefined8 *)(puVar50 + -8) = 0x142a766d8;
                    pdb_140c7a240(pauVar33 + 0x141);
                  }
                  lVar24 = *(longlong *)pauVar33[0x153];
                  plVar31 = *(longlong **)(lVar24 + 0x260);
                  LOCK();
                  *plVar31 = *plVar31 + -1;
                  UNLOCK();
                  if (*plVar31 == 0) {
                    *(undefined8 *)(pauVar33[0x149] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
                    *(undefined8 *)(puVar50 + -8) = 0x142a7670b;
                    pdb_140c79e90(lVar24 + 0x260);
                  }
                  goto code_r0x000142a76882;
                }
                *(undefined1 (**) [16])pauVar33[0x132] = unaff_R14;
                *(longlong **)(pauVar33[0x132] + 8) = plVar31;
                *(longlong *)pauVar33[0x133] = lVar24;
                lVar22 = *(longlong *)(lVar24 + 0x10);
                uVar23 = *(undefined8 *)(lVar24 + 0x18);
                *(undefined8 *)(puVar50 + -8) = 0x142a7673a;
                lVar24 = pdb_1417107c0(lVar32 + 0x198,lVar22,uVar23);
                if (lVar24 == 1) {
                  *(undefined8 *)(puVar50 + -8) = 0x142a76a9d;
                  unaff_R13 = (undefined1 (*) [16])pdb_142deaf00(lVar22);
                  plVar31 = *(longlong **)pauVar33[0x133];
                  LOCK();
                  *plVar31 = *plVar31 + -1;
                  UNLOCK();
                  if (*plVar31 == 0) {
                    *(undefined8 *)pauVar33[0x149] = *(undefined8 *)(pauVar33[0x152] + 8);
                    *(undefined8 *)(puVar50 + -8) = 0x142a76ac8;
                    pdb_140c7b710(pauVar33 + 0x133);
                  }
                  plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x260);
                  LOCK();
                  *plVar31 = *plVar31 + -1;
                  UNLOCK();
                  if (*plVar31 == 0) {
                    lVar24 = *(longlong *)pauVar33[0x153];
                    *(undefined8 *)(pauVar33[0x149] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
                    *(undefined8 *)(puVar50 + -8) = 0x142a76afe;
                    pdb_140c79e90(lVar24 + 0x260);
                  }
                  lVar24 = *(longlong *)pauVar33[0x153];
                  uVar25 = *(ulonglong *)(lVar24 + 0x218);
                  if (uVar25 != 0) {
                    pbVar36 = *(byte **)(lVar24 + 0x220);
                    *(undefined8 *)(puVar50 + -8) = 0x142a76b24;
                    pub_1406abac0(pbVar36,uVar25,1);
                  }
                  uVar25 = *(longlong *)(lVar24 + 0x1e8) - *(longlong *)(lVar24 + 0x1d8);
                  if (uVar25 != 0) {
                    uVar25 = uVar25 >> 5;
                    puVar28 = (undefined8 *)(*(longlong *)(lVar24 + 0x1d8) + 8);
                    do {
                      uVar43 = puVar28[-1];
                      if (uVar43 != 0) {
                        pbVar36 = (byte *)*puVar28;
                        *(undefined8 *)(puVar50 + -8) = 0x142a76b61;
                        pub_1406abac0(pbVar36,uVar43,1);
                      }
                      puVar28 = puVar28 + 4;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                  pauVar37 = (undefined1 (*) [16])0x0;
                  if (*(longlong *)(lVar24 + 0x1e0) != 0) {
                    pbVar36 = *(byte **)(lVar24 + 0x1d0);
                    pauVar37 = (undefined1 (*) [16])(*(longlong *)(lVar24 + 0x1e0) << 5);
                    uVar25 = 8;
                    goto code_r0x000142a76f7f;
                  }
                  goto code_r0x000142a76f84;
                }
                lVar24 = *(longlong *)pauVar33[0x153];
                *(longlong *)pauVar33[-3] = lVar22;
                uVar25 = *(ulonglong *)(lVar22 + 0x20);
                if (-1 < (longlong)uVar25) {
                  pbVar36 = (byte *)0x1;
                  if (uVar25 != 0) {
                    unaff_R14 = *(undefined1 (**) [16])(lVar22 + 0x18);
                    *(undefined8 *)(puVar50 + -8) = 0x142a76786;
                    pdb_14007ee60();
                    uVar23 = 1;
                    *(undefined8 *)(puVar50 + -8) = 0x142a76799;
                    pbVar36 = pub_1406abab0(uVar25,1);
                    if (pbVar36 == (byte *)0x0) goto code_r0x000142a76764;
                    *(undefined8 *)(puVar50 + -8) = 0x142a767af;
                    pub_142e32760(pbVar36,unaff_R14,uVar25);
                  }
                  *(byte **)(pauVar33[0x151] + 8) = pbVar36;
                  *(ulonglong *)pauVar33[0x152] = uVar25;
                  lVar32 = *(longlong *)(lVar24 + 0x1c8);
                  if (lVar32 == *(longlong *)(lVar24 + 0x1b8)) {
                    *(undefined8 *)(puVar50 + -8) = 0x142a767d7;
                    pdb_142db08b0(lVar24 + 0x1b8);
                  }
                  lVar24 = *(longlong *)pauVar33[0x153];
                  lVar22 = *(longlong *)(lVar24 + 0x1c0);
                  uVar23 = *(undefined8 *)pauVar33[0x152];
                  *(undefined8 *)(lVar22 + lVar32 * 0x18) = uVar23;
                  *(undefined8 *)(lVar22 + 8 + lVar32 * 0x18) = *(undefined8 *)(pauVar33[0x151] + 8)
                  ;
                  *(undefined8 *)(lVar22 + 0x10 + lVar32 * 0x18) = uVar23;
                  *(longlong *)(lVar24 + 0x1c8) = lVar32 + 1;
                  plVar31 = *(longlong **)pauVar33[-3];
                  LOCK();
                  *plVar31 = *plVar31 + -1;
                  UNLOCK();
                  if (*plVar31 == 0) {
                    *(undefined8 *)(puVar50 + -8) = 0x142a76823;
                    pdb_140cd0de0(pauVar33 + -3);
                  }
                  plVar31 = *(longlong **)pauVar33[0x133];
                  LOCK();
                  *plVar31 = *plVar31 + -1;
                  UNLOCK();
                  if (*plVar31 == 0) {
                    *(undefined8 *)pauVar33[0x149] = *(undefined8 *)(pauVar33[0x152] + 8);
                    *(undefined8 *)(puVar50 + -8) = 0x142a7684b;
                    pdb_140c7b710(pauVar33 + 0x133);
                  }
                  plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x260);
                  LOCK();
                  *plVar31 = *plVar31 + -1;
                  UNLOCK();
                  if (*plVar31 == 0) {
                    lVar24 = *(longlong *)pauVar33[0x153];
                    *(undefined8 *)(pauVar33[0x149] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
                    *(undefined8 *)(puVar50 + -8) = 0x142a76881;
                    pdb_140c79e90(lVar24 + 0x260);
                  }
                  goto code_r0x000142a76882;
                }
                uVar23 = 0;
code_r0x000142a76764:
                *(undefined8 *)(puVar50 + -8) = 0x142a7676f;
                pdb_142dc7e2a(uVar23,uVar25);
              }
              else {
                uVar64 = 0;
code_r0x000142a76418:
                *(undefined8 *)pauVar33[0x149] = *(undefined8 *)(pauVar33[0x152] + 8);
                *(undefined8 *)(puVar50 + -8) = 0x142a76431;
                pdb_142dc7e2a(uVar64,uVar43);
              }
              goto code_r0x000142a772bf;
            }
            *(undefined8 *)pauVar33[0x140] = uVar23;
            *(undefined1 (**) [16])(pauVar33[0x140] + 8) = unaff_R14;
            *(longlong **)pauVar33[0x141] = plVar31;
            *(longlong *)(pauVar33[0x141] + 8) = lVar24;
            if (1 < *_DAT_143ca8e90) {
              uVar23 = *(undefined8 *)(lVar32 + 0x220);
              uVar67 = *(undefined8 *)(lVar32 + 0x228);
              *(undefined8 *)(puVar50 + -8) = 0x142a762d7;
              pdb_141b1e240(pauVar33 + 0x14b,uVar23,uVar67,3);
              *(undefined1 (**) [16])pauVar33[0x118] = pauVar33 + 0x14b;
              *(code **)(pauVar33[0x118] + 8) = pdb_140f58250;
              *(undefined1 (**) [16])pauVar33[0x119] = pauVar33 + 0x140;
              *(code **)(pauVar33[0x119] + 8) = pdb_1417487e0;
              *(undefined8 *)pauVar33[-3] = 0;
              *(undefined **)(pauVar33[-3] + 8) = &UNK_1436335b0;
              *(undefined8 *)pauVar33[-2] = 0x11;
              *(undefined8 *)(pauVar33[-2] + 8) = 0;
              *(undefined **)pauVar33[-1] = &UNK_143633572;
              *(undefined8 *)(pauVar33[-1] + 8) = 0x23;
              *(undefined8 *)*pauVar33 = 2;
              *(undefined **)(*pauVar33 + 8) = &UNK_1436335b0;
              *(undefined8 *)pauVar33[1] = 0x11;
              *(undefined8 *)(pauVar33[1] + 8) = 0x2c400000001;
              *(undefined **)pauVar33[2] = &UNK_143633794;
              *(undefined1 (**) [16])(pauVar33[2] + 8) = pauVar33 + 0x118;
              *(undefined8 *)(puVar50 + -8) = 0x142a76387;
              pdb_140f332f0(pauVar33[0x150] + 6,pauVar33 + -3);
              uVar25 = *(ulonglong *)pauVar33[0x14b];
              if (uVar25 != 0) {
                pbVar36 = *(byte **)(pauVar33[0x14b] + 8);
                *(undefined8 *)(puVar50 + -8) = 0x142a763a6;
                pub_1406abac0(pbVar36,uVar25,1);
              }
              plVar31 = *(longlong **)pauVar33[0x141];
            }
            LOCK();
            *plVar31 = *plVar31 + -1;
            UNLOCK();
            if (*plVar31 == 0) {
              *(undefined8 *)(pauVar33[0x149] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
              *(undefined8 *)(puVar50 + -8) = 0x142a763d1;
              pdb_140c7a240(pauVar33 + 0x141);
            }
code_r0x000142a76882:
            lVar24 = *(longlong *)pauVar33[0x153];
            uVar25 = *(ulonglong *)(lVar24 + 0x218);
            if (uVar25 != 0) {
              pbVar36 = *(byte **)(lVar24 + 0x220);
              *(undefined8 *)(puVar50 + -8) = 0x142a768ab;
              pub_1406abac0(pbVar36,uVar25,1);
            }
          }
          puVar28 = *(undefined8 **)(lVar24 + 0x1d8);
          puVar47 = *(undefined8 **)(lVar24 + 0x1e8);
code_r0x000142a768be:
          *(undefined8 *)(lVar24 + 0x1f8) = 0x8000000000000000;
          puVar54 = puVar28;
code_r0x000142a768ce:
          if ((longlong)puVar47 - (longlong)puVar54 != 0) {
            uVar25 = (ulonglong)((longlong)puVar47 - (longlong)puVar54) >> 5;
            puVar54 = puVar54 + 1;
            do {
              uVar43 = puVar54[-1];
              if (uVar43 != 0) {
                pbVar36 = (byte *)*puVar54;
                *(undefined8 *)(puVar50 + -8) = 0x142a76900;
                pub_1406abac0(pbVar36,uVar43,1);
              }
              puVar54 = puVar54 + 4;
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
          }
          iVar42 = 0;
          if (*(longlong *)(lVar24 + 0x1e0) != 0) {
            pbVar36 = *(byte **)(lVar24 + 0x1d0);
            uVar25 = *(longlong *)(lVar24 + 0x1e0) << 5;
            *(undefined8 *)(puVar50 + -8) = 0x142a76924;
            pub_1406abac0(pbVar36,uVar25,8);
            iVar42 = (int)uVar25;
          }
          if (*(longlong *)(lVar24 + 0x1c8) == 0) {
            *(undefined8 *)pauVar33[0x13c] = *(undefined8 *)(pauVar33[0x152] + 8);
            pauVar37 = (undefined1 (*) [16])0x3c;
            *(undefined8 *)(puVar50 + -8) = 0x142a769c7;
            unaff_R13 = (undefined1 (*) [16])pdb_142de9270(&UNK_143633758);
code_r0x000142a76ef6:
            lVar24 = *(longlong *)pauVar33[0x153];
code_r0x000142a76f84:
            unaff_RDI = *(undefined1 (**) [16])(lVar24 + 0x1c0);
            lVar32 = *(longlong *)(lVar24 + 0x1c8);
            if (lVar32 != 0) {
              unaff_R14 = (undefined1 (*) [16])(*unaff_RDI + 8);
              do {
                pauVar37 = *(undefined1 (**) [16])(unaff_R14[-1] + 8);
                if (pauVar37 != (undefined1 (*) [16])0x0) {
                  pbVar36 = *(byte **)*unaff_R14;
                  *(undefined8 *)(puVar50 + -8) = 0x142a76fc0;
                  pub_1406abac0(pbVar36,(ulonglong)pauVar37,1);
                }
                unaff_R14 = (undefined1 (*) [16])(unaff_R14[1] + 8);
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
            }
            if (*(longlong *)(lVar24 + 0x1b8) != 0) {
              pauVar37 = (undefined1 (*) [16])(*(longlong *)(lVar24 + 0x1b8) * 0x18);
              *(undefined8 *)(puVar50 + -8) = 0x142a76fe4;
              pub_1406abac0((byte *)unaff_RDI,(ulonglong)pauVar37,8);
            }
            *(undefined8 *)(pauVar33[0x13c] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
            *(undefined8 *)(puVar50 + -8) = 0x142a76ffe;
            pdb_14098a860(lVar24 + 0x198);
            goto code_r0x000142a7432e;
          }
          *(undefined8 *)pauVar33[0x13c] = *(undefined8 *)(pauVar33[0x152] + 8);
          *(undefined8 *)(puVar50 + -8) = 0x142a76943;
          uVar21 = pdb_140cea790();
          uVar62 = uVar21 * 0x150 - 0x10;
          uVar35 = iVar42 * 0x110 - 0x10;
          uVar63 = uVar62;
          if (uVar62 < uVar35) {
            uVar63 = uVar35;
          }
          uVar63 = uVar63 + 0x40;
          auVar68._8_8_ = 0;
          auVar68._0_8_ = CONCAT44(0,uVar63) * 4;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = CONCAT44(0,uVar63);
          uVar25 = SUB168(auVar68 * auVar10,0);
          if (SUB168(auVar68 * auVar10,8) != 0) {
            *(undefined8 *)pauVar33[0x13c] = *(undefined8 *)(pauVar33[0x152] + 8);
            *(undefined8 *)(puVar50 + -8) = 0x142a7709c;
            pdb_142dc8110(&UNK_143073324,0x33,&UNK_143073358);
            goto code_r0x000142a772bf;
          }
          if ((longlong)uVar25 < 0) {
            uVar23 = 0;
code_r0x000142a76989:
            *(undefined8 *)pauVar33[0x13c] = *(undefined8 *)(pauVar33[0x152] + 8);
            *(undefined8 *)(puVar50 + -8) = 0x142a769a2;
            pdb_142dc7e2a(uVar23,uVar25);
code_r0x000142a772bf:
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          if (uVar25 == 0) {
            pbVar36 = (byte *)0x1;
          }
          else {
            *(undefined8 *)(puVar50 + -8) = 0x142a76a08;
            pdb_14007ee60();
            uVar23 = 1;
            *(undefined8 *)(puVar50 + -8) = 0x142a76a1b;
            pbVar36 = pub_1406abae0(uVar25,1);
            uVar64 = _UNK_143633238;
            uVar67 = _UNK_143633230;
            if (pbVar36 == (byte *)0x0) goto code_r0x000142a76989;
            pbVar48 = pbVar36;
            uVar43 = uVar25;
            if (0x1b < uVar25 - 4) {
              uVar44 = (uVar25 - 4 >> 2) + 1;
              uVar38 = uVar44 & 0xfffffffffffffff8;
              pbVar48 = pbVar36 + uVar38 * 4;
              uVar43 = uVar25 + uVar38 * -4;
              lVar24 = 0;
              do {
                *(undefined8 *)(pbVar36 + lVar24 * 4) = uVar67;
                *(undefined8 *)(pbVar36 + lVar24 * 4 + 8) = uVar64;
                *(undefined8 *)(pbVar36 + lVar24 * 4 + 0x10) = uVar67;
                *(undefined8 *)(pbVar36 + lVar24 * 4 + 0x10 + 8) = uVar64;
                lVar24 = lVar24 + 8;
              } while (uVar38 != lVar24);
              if (uVar44 == uVar38) goto code_r0x000142a76b8e;
            }
            lVar24 = 0;
            do {
              pbVar8 = pbVar48 + lVar24;
              pbVar8[0] = 0xe9;
              pbVar8[1] = 0xe1;
              pbVar8[2] = 0xd0;
              pbVar8[3] = 0xff;
              lVar24 = lVar24 + 4;
            } while (uVar43 != lVar24);
          }
code_r0x000142a76b8e:
          *(ulonglong *)pauVar33[0x145] = uVar25;
          *(byte **)(pauVar33[0x145] + 8) = pbVar36;
          *(ulonglong *)pauVar33[0x146] = uVar25;
          *(uint *)(pauVar33[0x146] + 8) = uVar63;
          *(uint *)(pauVar33[0x146] + 0xc) = uVar63;
          lVar24 = *(longlong *)(*(longlong *)pauVar33[0x153] + 0x1c0);
          *(longlong *)(pauVar33[0x151] + 8) =
               lVar24 + *(longlong *)(*(longlong *)pauVar33[0x153] + 0x1c8) * 0x18;
          unaff_R14 = (undefined1 (*) [16])(pauVar33[0x118] + 8);
          uVar46 = 0;
          pauVar37 = pauVar33 + -3;
          for (; lVar32 = *(longlong *)(pauVar33[0x151] + 8), *(longlong *)pauVar33[0x152] = lVar24,
              lVar24 != lVar32; lVar24 = lVar24 + 0x18) {
            uVar23 = *(undefined8 *)(lVar24 + 8);
            uVar67 = *(undefined8 *)(lVar24 + 0x10);
            *(undefined8 *)(puVar50 + -8) = 0x142a76c21;
            pdb_140dace30(pauVar33 + 0x118,uVar23,uVar67);
            lVar24 = *(longlong *)pauVar33[0x118];
            uVar23 = *(undefined8 *)(pauVar33[0x119] + 8);
            uVar67 = *(undefined8 *)pauVar33[0x11a];
            *(undefined8 *)pauVar33[0x14b] = *(undefined8 *)*unaff_R14;
            *(undefined8 *)(pauVar33[0x14b] + 8) = *(undefined8 *)pauVar33[0x119];
            *(undefined8 *)pauVar33[0x14c] = uVar23;
            *(undefined8 *)(pauVar33[0x14c] + 8) = uVar67;
            *(undefined8 *)pauVar33[0x14d] = *(undefined8 *)(pauVar33[0x11a] + 8);
            if (lVar24 != -0x7ffffffffffffff6) {
              uVar23 = *(undefined8 *)(pauVar33[0x11b] + 8);
              *(undefined8 *)*pauVar33 = *(undefined8 *)pauVar33[0x11b];
              *(undefined8 *)(*pauVar33 + 8) = uVar23;
              uVar23 = *(undefined8 *)(pauVar33[0x14b] + 8);
              auVar68 = pauVar33[0x14c];
              *(undefined8 *)(pauVar33[-3] + 8) = *(undefined8 *)pauVar33[0x14b];
              *(undefined8 *)pauVar33[-2] = uVar23;
              *(undefined1 (*) [16])(pauVar33[-2] + 8) = auVar68;
              *(undefined8 *)(pauVar33[-1] + 8) = *(undefined8 *)pauVar33[0x14d];
              *(longlong *)pauVar33[-3] = lVar24;
              *(undefined8 *)(puVar50 + -8) = 0x142a76ed4;
              unaff_R13 = (undefined1 (*) [16])pdb_142deb120(pauVar33 + -3);
              pauVar37 = *(undefined1 (**) [16])pauVar33[0x145];
              if (pauVar37 != (undefined1 (*) [16])0x0) {
                pbVar36 = *(byte **)(pauVar33[0x145] + 8);
                *(undefined8 *)(puVar50 + -8) = 0x142a76ef6;
                pub_1406abac0(pbVar36,(ulonglong)pauVar37,1);
              }
              goto code_r0x000142a76ef6;
            }
            uVar23 = *(undefined8 *)(pauVar33[0x14b] + 8);
            uVar67 = *(undefined8 *)pauVar33[0x14c];
            uVar64 = *(undefined8 *)(pauVar33[0x14c] + 8);
            *(undefined8 *)pauVar33[0x140] = *(undefined8 *)pauVar33[0x14b];
            *(undefined8 *)(pauVar33[0x140] + 8) = uVar23;
            *(undefined8 *)pauVar33[0x141] = uVar67;
            *(undefined8 *)(pauVar33[0x141] + 8) = uVar64;
            *(undefined8 *)pauVar33[0x142] = *(undefined8 *)pauVar33[0x14d];
            *(undefined8 *)(puVar50 + -8) = 0x142a76ca2;
            pdb_140daccf0(pauVar33 + 0x132,pauVar33 + 0x140);
            *(undefined8 *)(puVar50 + -8) = 0x142a76caf;
            pdb_142a7d770(pauVar33 + 0x14b);
            puVar50[0x20] = 4;
            *(undefined8 *)(puVar50 + -8) = 0x142a76ccc;
            pdb_140c77380(pauVar37,pauVar33 + 0x132,0x140,0x100);
            *(undefined8 *)(puVar50 + -8) = 0x142a76cd5;
            pdb_140cea530(pauVar37);
            if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar50 + -8) = 0x142a770ae;
              pdb_142dc8510(&UNK_143633740);
            }
            *(undefined8 *)(puVar50 + -8) = 0x142a76d07;
            pdb_140c9cfa0(pauVar33 + 0x145,pauVar37,
                          (uVar46 % uVar21) * 0x150 + (uVar63 - uVar62 >> 1),
                          (uVar46 / uVar21) * 0x110 + (uVar63 - uVar35 >> 1));
            uVar25 = *(ulonglong *)pauVar33[-3];
            if (uVar25 != 0) {
              pbVar36 = *(byte **)(pauVar33[-3] + 8);
              *(undefined8 *)(puVar50 + -8) = 0x142a76d20;
              pub_1406abac0(pbVar36,uVar25,1);
            }
            uVar25 = *(ulonglong *)pauVar33[0x132];
            lVar24 = *(longlong *)pauVar33[0x152];
            if (uVar25 != 0) {
              pbVar36 = *(byte **)(pauVar33[0x132] + 8);
              *(undefined8 *)(puVar50 + -8) = 0x142a76d49;
              pub_1406abac0(pbVar36,uVar25,1);
            }
            uVar46 = uVar46 + 1;
          }
          uVar23 = *(undefined8 *)pauVar33[0x145];
          uVar67 = *(undefined8 *)(pauVar33[0x145] + 8);
          *(undefined1 (*) [16])(pauVar33[-2] + 8) = pauVar33[0x146];
          *(undefined8 *)(pauVar33[-3] + 8) = uVar23;
          *(undefined8 *)pauVar33[-2] = uVar67;
          *(undefined8 *)pauVar33[-3] = 3;
          *(undefined8 *)(puVar50 + -8) = 0x142a76d80;
          pdb_140dacc60(pauVar33 + 0x14b,pauVar33 + -3);
          *(undefined8 *)(puVar50 + -8) = 0x142a76d8a;
          pdb_142a7d770(pauVar33 + -3);
          *(undefined8 *)pauVar33[0x140] = 0;
          *(undefined8 *)(pauVar33[0x140] + 8) = 1;
          *(undefined8 *)pauVar33[0x141] = 0;
          *(undefined8 *)(puVar50 + -8) = 0x142a76dbe;
          pdb_141c43000(pauVar33 + -3,pauVar33 + 0x140,0x5a);
          pbVar36 = *(byte **)(pauVar33[0x14b] + 8);
          uVar23 = *(undefined8 *)pauVar33[0x14c];
          uVar4 = *(undefined4 *)(pauVar33[0x14c] + 8);
          uVar5 = *(undefined4 *)(pauVar33[0x14c] + 0xc);
          *(undefined **)(puVar50 + 0x40) = &UNK_143633728;
          *(undefined4 *)(puVar50 + 0x28) = uVar5;
          *(undefined4 *)(puVar50 + 0x20) = uVar4;
          puVar50[0x30] = 0xf;
          *(undefined8 *)(puVar50 + -8) = 0x142a76e05;
          pdb_141c44440(pauVar33 + 0x118,pauVar33 + -3,pbVar36,uVar23);
          lVar24 = *(longlong *)pauVar33[0x118];
          if (lVar24 != -0x7ffffffffffffff6) {
            *(undefined8 *)(*pauVar33 + 8) = *(undefined8 *)(pauVar33[0x11b] + 8);
            uVar23 = *(undefined8 *)(pauVar33[0x118] + 8);
            uVar67 = *(undefined8 *)pauVar33[0x119];
            auVar68 = *(undefined1 (*) [16])(pauVar33[0x119] + 8);
            uVar64 = *(undefined8 *)pauVar33[0x11b];
            *(undefined8 *)(pauVar33[-1] + 8) = *(undefined8 *)(pauVar33[0x11a] + 8);
            *(undefined8 *)*pauVar33 = uVar64;
            *(undefined1 (*) [16])(pauVar33[-2] + 8) = auVar68;
            *(undefined8 *)(pauVar33[-3] + 8) = uVar23;
            *(undefined8 *)pauVar33[-2] = uVar67;
            *(longlong *)pauVar33[-3] = lVar24;
            *(undefined8 *)(puVar50 + -8) = 0x142a76f41;
            unaff_R13 = (undefined1 (*) [16])pdb_142deb120(pauVar33 + -3);
            uVar25 = *(ulonglong *)pauVar33[0x140];
            if (uVar25 != 0) {
              pbVar48 = *(byte **)(pauVar33[0x140] + 8);
              *(undefined8 *)(puVar50 + -8) = 0x142a76f63;
              pub_1406abac0(pbVar48,uVar25,1);
            }
            pauVar37 = *(undefined1 (**) [16])pauVar33[0x14b];
            lVar24 = *(longlong *)pauVar33[0x153];
            if (pauVar37 != (undefined1 (*) [16])0x0) {
              uVar25 = 1;
code_r0x000142a76f7f:
              *(undefined8 *)(puVar50 + -8) = 0x142a76f84;
              pub_1406abac0(pbVar36,(ulonglong)pauVar37,uVar25);
            }
            goto code_r0x000142a76f84;
          }
          lVar32 = *(longlong *)pauVar33[0x140];
          unaff_R13 = *(undefined1 (**) [16])(pauVar33[0x140] + 8);
          unaff_RDI = *(undefined1 (**) [16])pauVar33[0x141];
          pauVar37 = *(undefined1 (**) [16])pauVar33[0x14b];
          if (pauVar37 != (undefined1 (*) [16])0x0) {
            *(undefined8 *)(puVar50 + -8) = 0x142a76e4f;
            pub_1406abac0(pbVar36,(ulonglong)pauVar37,1);
          }
          lVar24 = *(longlong *)pauVar33[0x153];
          pbVar36 = *(byte **)(lVar24 + 0x1c0);
          lVar22 = *(longlong *)(lVar24 + 0x1c8);
          if (lVar22 != 0) {
            pbVar48 = pbVar36 + 8;
            do {
              pauVar37 = *(undefined1 (**) [16])(pbVar48 + -8);
              if (pauVar37 != (undefined1 (*) [16])0x0) {
                pbVar8 = *(byte **)pbVar48;
                *(undefined8 *)(puVar50 + -8) = 0x142a76e99;
                pub_1406abac0(pbVar8,(ulonglong)pauVar37,1);
              }
              pbVar48 = pbVar48 + 0x18;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          unaff_R14 = (undefined1 (*) [16])0x0;
          if (*(longlong *)(lVar24 + 0x1b8) != 0) {
            pauVar37 = (undefined1 (*) [16])(*(longlong *)(lVar24 + 0x1b8) * 0x18);
            *(undefined8 *)(puVar50 + -8) = 0x142a77027;
            pub_1406abac0(pbVar36,(ulonglong)pauVar37,8);
          }
          *(undefined8 *)(pauVar33[0x13c] + 8) = *(undefined8 *)(pauVar33[0x152] + 8);
          *(undefined8 *)(puVar50 + -8) = 0x142a77042;
          pdb_14098a860(lVar24 + 0x198);
          lVar24 = *(longlong *)pauVar33[0x153];
          *(undefined2 *)(lVar24 + 0x239) = 0;
          *(undefined1 *)(lVar24 + 0x238) = 1;
          if (lVar32 == -0x7fffffffffffffff) {
code_r0x000142a769e6:
            puVar28 = *(undefined8 **)(pauVar33[0x136] + 8);
            *puVar28 = 3;
            pauVar33 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)puVar28 >> 8),4);
            goto code_r0x000142a771f4;
          }
        }
        else {
code_r0x000142a7432e:
          unaff_R15 = *(undefined1 (**) [16])pauVar33[0x153];
          unaff_R15[0x23][9] = 0;
          if (unaff_R15[0x23][10] != '\0') {
            unaff_RDI = *(undefined1 (**) [16])(pauVar33[0x13a] + 8);
            unaff_RBX = *(undefined1 (**) [16])pauVar33[0x13b];
            if (unaff_RBX != (undefined1 (*) [16])0x0) {
              unaff_R14 = (undefined1 (*) [16])(*unaff_RDI + 8);
code_r0x000142a7437d:
              do {
                uVar25 = *(ulonglong *)(unaff_R14[-1] + 8);
                if (uVar25 != 0) {
                  pbVar36 = *(byte **)*unaff_R14;
                  *(undefined8 *)(puVar50 + -8) = 0x142a74394;
                  pub_1406abac0(pbVar36,uVar25,1);
                }
                unaff_R14 = unaff_R14 + 2;
                unaff_RBX = (undefined1 (*) [16])(unaff_RBX[-1] + 0xf);
              } while (unaff_RBX != (undefined1 (*) [16])0x0);
            }
            pauVar37 = (undefined1 (*) [16])0x0;
            if (*(longlong *)pauVar33[0x13a] != 0) {
              pauVar37 = (undefined1 (*) [16])(*(longlong *)pauVar33[0x13a] << 5);
              *(undefined8 *)(puVar50 + -8) = 0x142a744d7;
              pub_1406abac0((byte *)unaff_RDI,(ulonglong)pauVar37,8);
            }
          }
          unaff_R15[0x23][10] = 0;
          unaff_R15[0x23][8] = 1;
          lVar32 = -0x8000000000000000;
        }
        uVar23 = *(undefined8 *)(pauVar33[0x152] + 8);
        *(undefined8 *)(puVar50 + -8) = 0x142a744fd;
        pdb_142a7d3d0(uVar23);
        if (SBORROW8(0,lVar32)) {
          lVar24 = *(longlong *)pauVar33[0x153];
          pauVar37 = unaff_R14;
        }
        else {
          *(longlong *)pauVar33[0x152] = lVar32;
          *(undefined1 (**) [16])(pauVar33[0x152] + 8) = unaff_R13;
          *(undefined8 *)(puVar50 + -8) = 0x142a74528;
          uVar67 = pdb_140dc74c0();
          *(longlong *)pauVar33[0x14b] = *(longlong *)pauVar33[0x153] + 0x50;
          *(code **)(pauVar33[0x14b] + 8) = pdb_140001020;
          *(undefined8 *)(puVar50 + -8) = 0x142a74569;
          pdb_140f60760(pauVar33 + 0x118,&UNK_14363348d,pauVar33 + 0x14b);
          *(undefined8 *)(pauVar33[0x151] + 8) = *(undefined8 *)pauVar33[0x118];
          uVar23 = *(undefined8 *)(pauVar33[0x118] + 8);
          *(undefined8 *)(puVar50 + 0x20) = *(undefined8 *)pauVar33[0x119];
          *(undefined8 *)(pauVar33[0x150] + 8) = uVar23;
          *(undefined8 *)(puVar50 + -8) = 0x142a745a1;
          pdb_140f3e9e0(pauVar33 + -3,uVar67,pauVar37);
          uVar25 = *(ulonglong *)(pauVar33[0x151] + 8);
          if (uVar25 != 0) {
            pbVar36 = *(byte **)(pauVar33[0x150] + 8);
            *(undefined8 *)(puVar50 + -8) = 0x142a745c0;
            pub_1406abac0(pbVar36,uVar25,1);
          }
          uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
          uVar67 = *(undefined8 *)pauVar33[-2];
          *(undefined8 *)(pauVar33[0x151] + 8) = uVar23;
          uVar64 = *(undefined8 *)(pauVar33[0x152] + 8);
          *(undefined8 *)(puVar50 + -8) = 0x142a745de;
          lVar24 = pdb_140f561c0(uVar23,uVar67,uVar64,unaff_RDI);
          if (lVar24 == 0) {
            uVar23 = *(undefined8 *)pauVar33[-3];
            uVar67 = *(undefined8 *)(pauVar33[-2] + 8);
            *(undefined8 *)pauVar33[300] = *(undefined8 *)pauVar33[-2];
            *(undefined8 *)(pauVar33[300] + 8) = uVar67;
            param_2 = *(undefined1 (**) [16])pauVar33[0x152];
            if (param_2 != (undefined1 (*) [16])0x0) {
              pbVar36 = *(byte **)(pauVar33[0x152] + 8);
              *(undefined8 *)(puVar50 + -8) = 0x142a748f9;
              pub_1406abac0(pbVar36,(ulonglong)param_2,1);
            }
            plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x118);
            LOCK();
            *plVar31 = *plVar31 + -1;
            UNLOCK();
            if (*plVar31 == 0) {
              lVar24 = *(longlong *)pauVar33[0x153];
              *(undefined8 *)(puVar50 + -8) = 0x142a74920;
              pdb_140dd78e0(lVar24 + 0x118);
            }
            plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x120);
            LOCK();
            *plVar31 = *plVar31 + -1;
            UNLOCK();
            *(undefined8 *)(puVar50 + -8) = 0x142a7493c;
            pdb_142d8feb0(plVar31 + 1);
            *(undefined8 *)pauVar33[0x152] = uVar23;
            *(undefined1 *)(*(longlong *)pauVar33[0x153] + 0xfa) = 0;
            puVar51 = puVar50;
            goto code_r0x000142a74952;
          }
          *(undefined8 *)(puVar50 + -8) = 0x142a745f0;
          unaff_R13 = (undefined1 (*) [16])pdb_142deaf00(lVar24);
          uVar25 = *(ulonglong *)pauVar33[-3];
          if (uVar25 != 0) {
            pbVar36 = *(byte **)(pauVar33[0x151] + 8);
            *(undefined8 *)(puVar50 + -8) = 0x142a7460f;
            pub_1406abac0(pbVar36,uVar25,1);
          }
          uVar25 = *(ulonglong *)pauVar33[0x152];
          lVar24 = *(longlong *)pauVar33[0x153];
          pbVar36 = *(byte **)(pauVar33[0x152] + 8);
          if (uVar25 != 0) {
            *(undefined8 *)(puVar50 + -8) = 0x142a74634;
            pub_1406abac0(pbVar36,uVar25,1);
          }
        }
        plVar31 = *(longlong **)(lVar24 + 0x118);
        LOCK();
        *plVar31 = *plVar31 + -1;
        UNLOCK();
        if (*plVar31 == 0) {
          lVar24 = *(longlong *)pauVar33[0x153];
          *(undefined8 *)(puVar50 + -8) = 0x142a74654;
          pdb_140dd78e0(lVar24 + 0x118);
        }
        plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x120);
        LOCK();
        *plVar31 = *plVar31 + -1;
        UNLOCK();
        *(undefined8 *)(puVar50 + -8) = 0x142a74670;
        pdb_142d8feb0(plVar31 + 1);
        unaff_R14 = pauVar37;
      }
      lVar24 = *(longlong *)pauVar33[0x153];
      if (*(char *)(lVar24 + 0xfa) != '\0') {
        pbVar36 = *(byte **)(pauVar33[0x137] + 8);
        lVar32 = *(longlong *)pauVar33[0x138];
        if (lVar32 != 0) {
          pbVar48 = pbVar36 + 8;
          do {
            uVar25 = *(ulonglong *)(pbVar48 + -8);
            if (uVar25 != 0) {
              pbVar8 = *(byte **)pbVar48;
              *(undefined8 *)(puVar50 + -8) = 0x142a746d4;
              pub_1406abac0(pbVar8,uVar25,1);
            }
            pbVar48 = pbVar48 + 0x20;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
        }
        unaff_R14 = (undefined1 (*) [16])0x0;
        lVar32 = *(longlong *)pauVar33[0x137];
        if (lVar32 != 0) {
          *(undefined8 *)(puVar50 + -8) = 0x142a747ef;
          pub_1406abac0(pbVar36,lVar32 << 5,8);
        }
      }
      *(undefined1 *)(lVar24 + 0xfa) = 0;
      puVar56 = puVar50;
      goto code_r0x000142a747f8;
    }
    *(undefined1 (**) [16])pauVar33[0x152] = param_2;
    *(undefined8 *)(pauVar33[0x151] + 8) = *(undefined8 *)(lVar24 + 0x150);
    uVar23 = *(undefined8 *)(lVar24 + 0x160);
    *(undefined8 *)pauVar33[300] = *(undefined8 *)(lVar24 + 0x158);
    *(undefined8 *)(pauVar33[300] + 8) = uVar23;
    puVar51 = puVar50;
code_r0x000142a74952:
    *(undefined8 *)(puVar51 + -8) = 0x142a74957;
    uVar67 = pdb_140dc74c0();
    unaff_R14 = (undefined1 (*) [16])(*(longlong *)pauVar33[0x153] + 0x50);
    *(undefined1 (**) [16])pauVar33[0x14b] = unaff_R14;
    *(code **)(pauVar33[0x14b] + 8) = pdb_140001020;
    *(undefined8 *)(puVar51 + -8) = 0x142a74998;
    pdb_140f60760(pauVar33 + 0x118,&UNK_1436334a6,pauVar33 + 0x14b);
    *(undefined8 *)(pauVar33[0x152] + 8) = *(undefined8 *)pauVar33[0x118];
    uVar23 = *(undefined8 *)(pauVar33[0x118] + 8);
    *(undefined8 *)(puVar51 + 0x20) = *(undefined8 *)pauVar33[0x119];
    *(undefined8 *)(pauVar33[0x150] + 8) = uVar23;
    *(undefined8 *)(puVar51 + -8) = 0x142a749d0;
    pdb_140f3e9e0(pauVar33 + -3,uVar67,param_2);
    uVar25 = *(ulonglong *)(pauVar33[0x152] + 8);
    puVar52 = puVar51;
    if (uVar25 != 0) {
      pbVar36 = *(byte **)(pauVar33[0x150] + 8);
      *(undefined8 *)(puVar51 + -8) = 0x142a749ef;
      pub_1406abac0(pbVar36,uVar25,1);
    }
code_r0x000142a749ef:
    uVar23 = *(undefined8 *)(pauVar33[-3] + 8);
    uVar67 = *(undefined8 *)pauVar33[-2];
    *(undefined8 *)(pauVar33[0x152] + 8) = uVar23;
    *(undefined8 *)(puVar52 + -8) = 0x142a74a06;
    lVar24 = pdb_140f4ef90(uVar23,uVar67);
    if (lVar24 != 0) {
      *(longlong *)pauVar33[0x118] = lVar24;
      uVar63 = (uint)((ulonglong)lVar24 >> 0x20);
      switch((uint)lVar24 & 3) {
      case 0:
        cVar18 = *(char *)(lVar24 + 0x10);
        break;
      case 1:
        cVar18 = *(char *)(lVar24 + 0xf);
        break;
      case 2:
        if (((uVar63 - 0xf < 0x35) &&
            ((0x10004000000001U >> ((ulonglong)(uVar63 - 0xf) & 0x3f) & 1) != 0)) ||
           (uVar63 - 2 < 2)) goto code_r0x000142a74d01;
        goto code_r0x000142a74efa;
      case 3:
        cVar18 = '*';
        if (uVar63 < 0x2a) {
          cVar18 = (char)((ulonglong)lVar24 >> 0x20);
        }
      }
      if (cVar18 == '\0') {
code_r0x000142a74d01:
        *(undefined8 *)(puVar52 + -8) = 0x142a74d0d;
        pdb_1404b38e0(pauVar33 + 0x118);
        goto code_r0x000142a74d0e;
      }
code_r0x000142a74efa:
      *(undefined8 *)(puVar52 + -8) = 0x142a74f02;
      unaff_R13 = (undefined1 (*) [16])pdb_142deaf00(lVar24);
code_r0x000142a74f06:
      uVar25 = *(ulonglong *)pauVar33[-3];
      pbVar36 = *(byte **)(pauVar33[0x151] + 8);
      uVar43 = *(ulonglong *)pauVar33[0x152];
      if (uVar25 != 0) {
        pbVar48 = *(byte **)(pauVar33[0x152] + 8);
        *(undefined8 *)(puVar52 + -8) = 0x142a74f2f;
        pub_1406abac0(pbVar48,uVar25,1);
      }
      lVar24 = *(longlong *)pauVar33[0x153];
      puVar56 = puVar52;
      if (uVar43 != 0) {
        *(undefined8 *)(puVar52 + -8) = 0x142a74f50;
        pub_1406abac0(pbVar36,uVar43,1);
      }
      goto code_r0x000142a747f8;
    }
code_r0x000142a74d0e:
    uVar23 = *(undefined8 *)(*(longlong *)pauVar33[0x153] + 0x70);
    uVar64 = *(undefined8 *)(*(longlong *)pauVar33[0x153] + 0x78);
    puVar52[0x20] = 1;
    uVar6 = *(undefined8 *)(pauVar33[0x152] + 8);
    *(undefined8 *)(puVar52 + -8) = 0x142a74d31;
    unaff_R13 = (undefined1 (*) [16])pdb_140b27930(uVar23,uVar64,uVar6,uVar67);
    if (unaff_R13 != (undefined1 (*) [16])0x0) goto code_r0x000142a74f06;
    uVar23 = *(undefined8 *)(pauVar33[0x152] + 8);
    *(undefined8 *)(puVar52 + -8) = 0x142a74d4d;
    unaff_R13 = (undefined1 (*) [16])pdb_140c8cbd0(uVar23,uVar67);
    if (unaff_R13 != (undefined1 (*) [16])0x0) goto code_r0x000142a74f06;
    uVar19 = *(undefined1 *)(*(longlong *)pauVar33[0x153] + 0xc0);
    uVar3 = *(undefined1 *)(*(longlong *)pauVar33[0x153] + 0x100);
    *(undefined8 *)(puVar52 + -8) = 0x142a74d7c;
    pdb_140b27700(pauVar33 + 0x118,uVar3,uVar19);
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0xff) = 0;
    *(undefined8 *)pauVar33[0x10a] = *(undefined8 *)unaff_R14[1];
    uVar23 = *(undefined8 *)(*unaff_R14 + 8);
    *(undefined8 *)pauVar33[0x109] = *(undefined8 *)*unaff_R14;
    *(undefined8 *)(pauVar33[0x109] + 8) = uVar23;
    *(undefined1 *)(lVar24 + 0xfe) = 0;
    uVar23 = *(undefined8 *)(lVar24 + 0x68);
    uVar67 = *(undefined8 *)(lVar24 + 0x70);
    uVar64 = *(undefined8 *)(lVar24 + 0x80);
    *(undefined8 *)pauVar33[0x105] = *(undefined8 *)(lVar24 + 0x78);
    *(undefined8 *)(pauVar33[0x105] + 8) = uVar64;
    *(undefined8 *)pauVar33[0x104] = uVar23;
    *(undefined8 *)(pauVar33[0x104] + 8) = uVar67;
    uVar67 = *(undefined8 *)pauVar33[-3];
    uVar64 = *(undefined8 *)(pauVar33[-3] + 8);
    uVar23 = *(undefined8 *)(pauVar33[-2] + 8);
    *(undefined8 *)pauVar33[0x107] = *(undefined8 *)pauVar33[-2];
    *(undefined8 *)(pauVar33[0x107] + 8) = uVar23;
    *(undefined8 *)pauVar33[0x106] = uVar67;
    *(undefined8 *)(pauVar33[0x106] + 8) = uVar64;
    uVar23 = *(undefined8 *)(pauVar33[300] + 8);
    *(undefined8 *)pauVar33[0x108] = *(undefined8 *)pauVar33[300];
    *(undefined8 *)(pauVar33[0x108] + 8) = uVar23;
    unaff_RDI = *(undefined1 (**) [16])(lVar24 + 0x108);
    unaff_RBX = *(undefined1 (**) [16])(lVar24 + 0x110);
    *(undefined1 *)(lVar24 + 0xfc) = 0;
    uVar23 = *(undefined8 *)(lVar24 + 0xd0);
    *(undefined8 *)pauVar33[0x10b] = *(undefined8 *)(lVar24 + 200);
    *(undefined8 *)(pauVar33[0x10b] + 8) = uVar23;
    *(undefined8 *)pauVar33[0x10c] = *(undefined8 *)(lVar24 + 0xd8);
    *(undefined8 *)pauVar33[0x10e] = *(undefined8 *)pauVar33[0x119];
    uVar23 = *(undefined8 *)(pauVar33[0x118] + 8);
    *(undefined8 *)pauVar33[0x10d] = *(undefined8 *)pauVar33[0x118];
    *(undefined8 *)(pauVar33[0x10d] + 8) = uVar23;
    *(undefined8 *)(puVar52 + -8) = 0x142a74e42;
    pdb_140967580(lVar24 + 0xe0);
    param_3 = *(undefined1 (**) [16])pauVar33[0x153];
    param_3[0xf][0xc] = 0;
    param_2 = *(undefined1 (**) [16])param_3[10];
    unaff_R14 = *(undefined1 (**) [16])pauVar33[0x152];
    if ((!SBORROW8(0,(longlong)param_2)) && (param_2 != (undefined1 (*) [16])0x0)) {
      pauVar37 = *(undefined1 (**) [16])(param_3[10] + 8);
      pauVar26 = (undefined1 (*) [16])0x1;
code_r0x000142a74e76:
      *(undefined8 *)(puVar52 + -8) = 0x142a74e7b;
      pub_1406abac0((byte *)pauVar37,(ulonglong)param_2,(ulonglong)pauVar26);
    }
    *(undefined2 *)(param_3[0xf] + 0xd) = 0;
    param_3[0xf][0xf] = 0;
    puVar47 = (undefined8 *)puVar52;
    if (param_3[0xf][9] != '\0') {
      plVar31 = *(longlong **)(*(longlong *)pauVar33[0x153] + 0x48);
      LOCK();
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        lVar24 = *(longlong *)pauVar33[0x153];
        *(undefined8 *)(puVar52 + -8) = 0x142a74eb5;
        pdb_140e3f860(lVar24 + 0x48);
      }
    }
code_r0x000142a74eb6:
    lVar24 = *(longlong *)pauVar33[0x153];
    *(undefined1 *)(lVar24 + 0xf9) = 0;
    uVar25 = *(ulonglong *)(lVar24 + 0x28);
    lVar32 = *(longlong *)(pauVar33[0x151] + 8);
    unaff_R13 = unaff_RBX;
    puVar58 = (undefined1 *)puVar47;
  }
  if (uVar25 != 0) {
    pbVar36 = *(byte **)(lVar24 + 0x30);
    *(undefined8 *)(puVar58 + -8) = 0x142a77153;
    pub_1406abac0(pbVar36,uVar25,1);
  }
  puVar28 = *(undefined8 **)(pauVar33[0x136] + 8);
  *puVar28 = unaff_RDI;
  puVar28[1] = unaff_R13;
  puVar28[4] = *(undefined8 *)pauVar33[0x10a];
  uVar23 = *(undefined8 *)(pauVar33[0x109] + 8);
  puVar28[2] = *(undefined8 *)pauVar33[0x109];
  puVar28[3] = uVar23;
  uVar23 = *(undefined8 *)(pauVar33[0x104] + 8);
  uVar67 = *(undefined8 *)pauVar33[0x105];
  uVar64 = *(undefined8 *)(pauVar33[0x105] + 8);
  puVar28[5] = *(undefined8 *)pauVar33[0x104];
  puVar28[6] = uVar23;
  puVar28[7] = uVar67;
  puVar28[8] = uVar64;
  uVar23 = *(undefined8 *)(pauVar33[0x106] + 8);
  uVar67 = *(undefined8 *)pauVar33[0x107];
  uVar64 = *(undefined8 *)(pauVar33[0x107] + 8);
  puVar28[9] = *(undefined8 *)pauVar33[0x106];
  puVar28[10] = uVar23;
  puVar28[0xb] = uVar67;
  puVar28[0xc] = uVar64;
  puVar28[0xd] = unaff_R14;
  puVar28[0xe] = lVar32;
  uVar23 = *(undefined8 *)(pauVar33[0x108] + 8);
  puVar28[0xf] = *(undefined8 *)pauVar33[0x108];
  puVar28[0x10] = uVar23;
  puVar28[0x13] = *(undefined8 *)pauVar33[0x10c];
  uVar23 = *(undefined8 *)(pauVar33[0x10b] + 8);
  puVar28[0x11] = *(undefined8 *)pauVar33[0x10b];
  puVar28[0x12] = uVar23;
  uVar23 = *(undefined8 *)(pauVar33[0x10d] + 8);
  puVar28[0x14] = *(undefined8 *)pauVar33[0x10d];
  puVar28[0x15] = uVar23;
  uVar23 = *(undefined8 *)pauVar33[0x10e];
  puVar28[0x16] = uVar23;
  pauVar33 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
code_r0x000142a771f4:
  *(char *)(lVar24 + 0xf8) = (char)pauVar33;
  return pauVar33;
code_r0x000142a7ca2a:
  *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ca35;
  pub_1406abac0((byte *)pauVar37,(ulonglong)pauVar26,1);
  pauVar37 = param_3;
  do {
    uVar25 = *(ulonglong *)(unaff_RBX[-1] + 8);
    if (uVar25 != 0) {
      pbVar36 = *(byte **)*unaff_RBX;
      *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7ca4c;
      pub_1406abac0(pbVar36,uVar25,1);
    }
    pauVar60 = (undefined1 (*) [16])(unaff_RBX[3] + 8);
    unaff_RDI = (undefined1 (*) [16])(unaff_RDI[-1] + 0xf);
    if (unaff_RDI == (undefined1 (*) [16])0x0) {
      if (*(longlong *)unaff_R12[0x13] != 0) {
        param_2 = (undefined1 (*) [16])(*(longlong *)unaff_R12[0x13] * 0x38);
        pauVar60 = (undefined1 (*) [16])0x8;
code_r0x000142a7cb1e:
        *(undefined8 *)((longlong)puVar47 + -8) = 0x142a7cb23;
        pub_1406abac0((byte *)pauVar37,(ulonglong)param_2,(ulonglong)pauVar60);
      }
      pauVar33 = *(undefined1 (**) [16])(unaff_R12[0x12] + 8);
      LOCK();
      *(longlong *)*pauVar33 = *(longlong *)*pauVar33 + -1;
      UNLOCK();
      if (*(longlong *)*pauVar33 != 0) {
        return pauVar33;
      }
      *(undefined8 *)((longlong)puVar47 + 0x80) = *(undefined8 *)((longlong)puVar47 + 0x80);
      *(undefined8 *)((longlong)puVar47 + 0x78) = *(undefined8 *)((longlong)puVar47 + 0x78);
      *(undefined8 *)((longlong)puVar47 + 0x70) = *(undefined8 *)((longlong)puVar47 + 0x70);
      *(undefined8 *)((longlong)puVar47 + 0x68) = *(undefined8 *)((longlong)puVar47 + 0x60);
      *(undefined8 *)((longlong)puVar47 + 0x60) = *(undefined8 *)((longlong)puVar47 + 0x58);
      *(undefined8 *)((longlong)puVar47 + 0x58) = *(undefined8 *)((longlong)puVar47 + 0x50);
      *(undefined8 *)((longlong)puVar47 + 0x50) = 0xfffffffffffffffe;
      lVar24 = *(longlong *)(unaff_R12[0x12] + 8);
      *(longlong *)((longlong)puVar47 + 0x38) = lVar24 + 0x10;
      *(longlong *)((longlong)puVar47 + 0x48) = lVar24;
      *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f88d;
      pdb_140e50100();
      plVar31 = *(longlong **)(*(longlong *)((longlong)puVar47 + 0x48) + 0x670);
      LOCK();
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f8af;
        pdb_140e40750(*(longlong *)((longlong)puVar47 + 0x48) + 0x670);
      }
      plVar31 = *(longlong **)(*(longlong *)((longlong)puVar47 + 0x48) + 0x678);
      LOCK();
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f8d1;
        pdb_140e411d0(*(longlong *)((longlong)puVar47 + 0x48) + 0x678);
      }
      plVar31 = *(longlong **)(*(longlong *)((longlong)puVar47 + 0x48) + 0x680);
      LOCK();
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f8f3;
        pdb_140e41090(*(longlong *)((longlong)puVar47 + 0x48) + 0x680);
      }
      lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
      plVar31 = *(longlong **)(lVar24 + 0x688);
      LOCK();
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f911;
        pdb_140740180(lVar24 + 0x688);
      }
      pbVar36 = (byte *)(lVar24 + 0x698);
      *(byte **)((longlong)puVar47 + 0x28) = pbVar36;
      *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f921;
      pdb_140e3b6a0();
      if (**(longlong **)((longlong)puVar47 + 0x28) == 0) {
        plVar31 = (longlong *)((longlong)puVar47 + 0x40);
        lVar32 = 0;
        lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
      }
      else {
        lVar32 = **(longlong **)((longlong)puVar47 + 0x28) << 4;
        lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
        pbVar36 = *(byte **)(lVar24 + 0x6a0);
        *(undefined8 *)((longlong)puVar47 + 0x40) = 8;
        plVar31 = (longlong *)((longlong)puVar47 + 0x30);
      }
      *plVar31 = lVar32;
      if ((*(ulonglong *)((longlong)puVar47 + 0x40) != 0) &&
         (*(ulonglong *)((longlong)puVar47 + 0x30) != 0)) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f96f;
        pub_1406abac0(pbVar36,*(ulonglong *)((longlong)puVar47 + 0x30),
                      *(ulonglong *)((longlong)puVar47 + 0x40));
      }
      *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f97b;
      pdb_140e3c5c0(lVar24 + 0x7b8);
      plVar31 = *(longlong **)(*(longlong *)((longlong)puVar47 + 0x48) + 0x6b8);
      LOCK();
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 == 0) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f99d;
        pdb_140e404d0(*(longlong *)((longlong)puVar47 + 0x48) + 0x6b8);
      }
      lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
      lVar32 = *(longlong *)(lVar24 + 0x6c8);
      if (lVar32 != 0) {
        uVar25 = lVar32 * 0x18 + 0x27U & 0xfffffffffffffff0;
        uVar43 = lVar32 + uVar25 + 0x11;
        if (uVar43 != 0) {
          lVar32 = *(longlong *)(lVar24 + 0x6c0);
          *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3f9dc;
          pub_1406abac0((byte *)(lVar32 - uVar25),uVar43,0x10);
        }
      }
      lVar32 = *(longlong *)(lVar24 + 0x890);
      if (lVar32 != 0) {
        lVar24 = *(longlong *)(lVar24 + 0x8a0);
        if (lVar24 != 0) {
          pauVar37 = *(undefined1 (**) [16])(*(longlong *)((longlong)puVar47 + 0x48) + 0x888);
          auVar68 = *pauVar37;
          pauVar33 = pauVar37 + 1;
          uVar63 = ~(uint)(ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar68[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar63 == 0) {
              do {
                auVar68 = *pauVar33;
                pauVar37 = pauVar37 + -0x28;
                pauVar33 = pauVar33 + 1;
                uVar63 = (ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar63 == 0);
            }
            uVar21 = 0;
            for (uVar35 = uVar63; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
              uVar21 = uVar21 + 1;
            }
            *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fa67;
            pdb_140e70a60((longlong)pauVar37 + (ulonglong)uVar21 * -0x28 + -8);
            uVar63 = uVar63 - 1 & uVar63;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        uVar25 = lVar32 * 0x28 + 0x37U & 0xfffffffffffffff0;
        uVar43 = lVar32 + uVar25 + 0x11;
        if (uVar43 != 0) {
          lVar24 = *(longlong *)(*(longlong *)((longlong)puVar47 + 0x48) + 0x888);
          *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3faac;
          pub_1406abac0((byte *)(lVar24 - uVar25),uVar43,0x10);
        }
      }
      if (**(longlong **)((longlong)puVar47 + 0x38) != 0) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fac3;
        pdb_140e71180(*(longlong *)((longlong)puVar47 + 0x48) + 0x20);
      }
      *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fad4;
      pdb_140e71180(*(longlong *)((longlong)puVar47 + 0x48) + 0x6e0);
      lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
      pbVar36 = (byte *)(lVar24 + 0x8b8);
      lVar32 = *(longlong *)(lVar24 + 0x8e0);
      if (lVar32 != 0) {
        lVar22 = lVar32 * 0x20 + 0x20;
        uVar25 = lVar32 + lVar22 + 0x11;
        if (uVar25 != 0) {
          lVar24 = *(longlong *)(lVar24 + 0x8d8);
          *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fb19;
          pub_1406abac0((byte *)(lVar24 - lVar22),uVar25,0x10);
        }
      }
      *(byte **)((longlong)puVar47 + 0x38) = pbVar36;
      *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fb26;
      pdb_140e3b920();
      if (**(longlong **)((longlong)puVar47 + 0x38) == 0) {
        plVar31 = (longlong *)((longlong)puVar47 + 0x40);
        lVar32 = 0;
        lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
      }
      else {
        lVar32 = **(longlong **)((longlong)puVar47 + 0x38) * 0x28;
        lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
        pbVar36 = *(byte **)(lVar24 + 0x8c0);
        *(undefined8 *)((longlong)puVar47 + 0x40) = 8;
        plVar31 = (longlong *)((longlong)puVar47 + 0x30);
      }
      *plVar31 = lVar32;
      if ((*(ulonglong *)((longlong)puVar47 + 0x40) != 0) &&
         (*(ulonglong *)((longlong)puVar47 + 0x30) != 0)) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fb78;
        pub_1406abac0(pbVar36,*(ulonglong *)((longlong)puVar47 + 0x30),
                      *(ulonglong *)((longlong)puVar47 + 0x40));
      }
      pbVar36 = (byte *)(lVar24 + 0xa68);
      *(byte **)((longlong)puVar47 + 0x38) = pbVar36;
      *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fb88;
      pdb_141e5de20();
      if (**(longlong **)((longlong)puVar47 + 0x38) == 0) {
        plVar31 = (longlong *)((longlong)puVar47 + 0x40);
        lVar32 = 0;
        lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
      }
      else {
        lVar32 = **(longlong **)((longlong)puVar47 + 0x38) * 0x18;
        lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
        pbVar36 = *(byte **)(lVar24 + 0xa70);
        *(undefined8 *)((longlong)puVar47 + 0x40) = 8;
        plVar31 = (longlong *)((longlong)puVar47 + 0x30);
      }
      *plVar31 = lVar32;
      if ((*(ulonglong *)((longlong)puVar47 + 0x40) != 0) &&
         (*(ulonglong *)((longlong)puVar47 + 0x30) != 0)) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fbda;
        pub_1406abac0(pbVar36,*(ulonglong *)((longlong)puVar47 + 0x30),
                      *(ulonglong *)((longlong)puVar47 + 0x40));
      }
      if (*(longlong *)(lVar24 + 0xa88) == 0) {
        plVar31 = (longlong *)((longlong)puVar47 + 0x40);
        lVar32 = 0;
      }
      else {
        lVar32 = *(longlong *)(lVar24 + 0xa88) << 3;
        pbVar36 = *(byte **)(lVar24 + 0xa90);
        *(undefined8 *)((longlong)puVar47 + 0x40) = 8;
        plVar31 = (longlong *)((longlong)puVar47 + 0x30);
      }
      *plVar31 = lVar32;
      if ((*(ulonglong *)((longlong)puVar47 + 0x40) != 0) &&
         (*(ulonglong *)((longlong)puVar47 + 0x30) != 0)) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fc1f;
        pub_1406abac0(pbVar36,*(ulonglong *)((longlong)puVar47 + 0x30),
                      *(ulonglong *)((longlong)puVar47 + 0x40));
      }
      pbVar36 = (byte *)(lVar24 + 0xaa0);
      *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fc2b;
      pdb_140e3cd40();
      lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
      lVar32 = *(longlong *)(lVar24 + 0xb20);
      if (lVar32 != 0) {
        lVar24 = *(longlong *)(lVar24 + 0xb30);
        if (lVar24 != 0) {
          pauVar37 = *(undefined1 (**) [16])(*(longlong *)((longlong)puVar47 + 0x48) + 0xb18);
          auVar68 = *pauVar37;
          pauVar33 = pauVar37 + 1;
          uVar63 = ~(uint)(ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar68[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar63 == 0) {
              do {
                auVar68 = *pauVar33;
                pauVar37 = pauVar37 + -0x10;
                pauVar33 = pauVar33 + 1;
                uVar63 = (ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar63 == 0);
            }
            iVar42 = 0;
            for (uVar21 = uVar63; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
              iVar42 = iVar42 + 1;
            }
            pbVar36 = (byte *)((longlong)pauVar37 + (-8 - (ulonglong)(uint)(iVar42 << 4)));
            *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fcb5;
            pdb_140e71920();
            uVar63 = uVar63 - 1 & uVar63;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        uVar25 = lVar32 * 0x11 + 0x21;
        lVar24 = *(longlong *)((longlong)puVar47 + 0x48);
        if (uVar25 != 0) {
          pbVar36 = (byte *)(*(longlong *)(lVar24 + 0xb18) + lVar32 * -0x10 + -0x10);
          *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fcf5;
          pub_1406abac0(pbVar36,uVar25,0x10);
        }
      }
      lVar32 = *(longlong *)(lVar24 + 0x7a0);
      if (lVar32 != 0) {
        pbVar36 = *(byte **)(lVar24 + 0x798);
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fd17;
        pub_1406abac0(pbVar36,lVar32 << 3,8);
      }
      if (*(longlong *)(lVar24 + 0x50) == 0) {
        plVar31 = (longlong *)((longlong)puVar47 + 0x40);
        lVar32 = 0;
      }
      else {
        lVar32 = *(longlong *)(lVar24 + 0x50) << 3;
        pbVar36 = *(byte **)(lVar24 + 0x58);
        *(undefined8 *)((longlong)puVar47 + 0x40) = 8;
        plVar31 = (longlong *)((longlong)puVar47 + 0x30);
      }
      *plVar31 = lVar32;
      if ((*(ulonglong *)((longlong)puVar47 + 0x40) != 0) &&
         (*(ulonglong *)((longlong)puVar47 + 0x30) != 0)) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fd56;
        pub_1406abac0(pbVar36,*(ulonglong *)((longlong)puVar47 + 0x30),
                      *(ulonglong *)((longlong)puVar47 + 0x40));
      }
      pbVar36 = (byte *)(lVar24 + 0xb58);
      *(byte **)((longlong)puVar47 + 0x38) = pbVar36;
      *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fd66;
      pdb_141e5e2b0();
      if (**(longlong **)((longlong)puVar47 + 0x38) == 0) {
        plVar31 = (longlong *)((longlong)puVar47 + 0x40);
        pauVar33 = (undefined1 (*) [16])0x0;
        param_3 = *(undefined1 (**) [16])((longlong)puVar47 + 0x48);
      }
      else {
        pauVar33 = (undefined1 (*) [16])(**(longlong **)((longlong)puVar47 + 0x38) * 0x50);
        param_3 = *(undefined1 (**) [16])((longlong)puVar47 + 0x48);
        pbVar36 = *(byte **)param_3[0xb6];
        *(undefined8 *)((longlong)puVar47 + 0x40) = 8;
        plVar31 = (longlong *)((longlong)puVar47 + 0x30);
      }
      *plVar31 = (longlong)pauVar33;
      if ((*(ulonglong *)((longlong)puVar47 + 0x40) != 0) &&
         (*(ulonglong *)((longlong)puVar47 + 0x30) != 0)) {
        *(undefined **)((longlong)puVar47 + -8) = &UNK_140e3fdb8;
        pub_1406abac0(pbVar36,*(ulonglong *)((longlong)puVar47 + 0x30),
                      *(ulonglong *)((longlong)puVar47 + 0x40));
        pauVar33 = extraout_RAX;
      }
      if (param_3 == (undefined1 (*) [16])0xffffffffffffffff) {
        return pauVar33;
      }
      LOCK();
      plVar31 = (longlong *)(*param_3 + 8);
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (*plVar31 != 0) {
        return pauVar33;
      }
      lVar24 = 0xbb0;
      uVar23 = *(undefined8 *)((longlong)puVar47 + 0x68);
      uVar67 = *(undefined8 *)((longlong)puVar47 + 0x80);
      puVar49 = (undefined1 *)((longlong)puVar47 + 0x88);
      goto code_r0x0001406abac0;
    }
    param_2 = *(undefined1 (**) [16])(unaff_RBX[1] + 8);
    bVar66 = param_2 == (undefined1 (*) [16])0x0;
    param_3 = pauVar37;
code_r0x000142a7ca24:
    unaff_RBX = pauVar60;
    pauVar37 = param_3;
  } while (bVar66);
  pauVar37 = *(undefined1 (**) [16])(pauVar60[-2] + 8);
  pauVar26 = param_2;
  goto code_r0x000142a7ca2a;
code_r0x000142a74cc2:
  *(int *)pauVar33[0x152] = iVar20;
  goto code_r0x000142a73fc4;
}

