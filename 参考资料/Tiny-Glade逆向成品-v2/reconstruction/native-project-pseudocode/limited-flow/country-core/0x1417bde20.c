// VA 0x1417bde20, PDB extent 871 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001433375e0) overlaps instruction at (ram,0x0001433375df)
    */
/* WARNING: Removing unreachable block (ram,0x0001417c1ff6) */
/* WARNING: Removing unreachable block (ram,0x0001417c1b56) */
/* WARNING: Removing unreachable block (ram,0x0001417c321d) */
/* WARNING: Removing unreachable block (ram,0x0001417c1cd6) */
/* WARNING: Removing unreachable block (ram,0x000143337613) */
/* WARNING: Removing unreachable block (ram,0x00014333766f) */
/* WARNING: Removing unreachable block (ram,0x000143337627) */
/* WARNING: Removing unreachable block (ram,0x00014333762f) */
/* WARNING: Removing unreachable block (ram,0x000143337677) */
/* WARNING: Removing unreachable block (ram,0x0001417bfcaf) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize<enum2$<serde_json::value::Value>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 871 */

ulonglong *
pdb_1417bde20(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined3 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  char cVar14;
  undefined1 uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  undefined7 uVar25;
  int *piVar22;
  longlong lVar23;
  ulonglong *puVar24;
  ulonglong *extraout_RAX;
  ulonglong *extraout_RAX_00;
  ulonglong *extraout_RAX_01;
  int iVar26;
  undefined4 uVar27;
  ulonglong *puVar28;
  char *pcVar29;
  byte *pbVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  undefined2 uVar33;
  byte *pbVar34;
  ulonglong *puVar35;
  byte bVar36;
  code *UNRECOVERED_JUMPTABLE_00;
  byte bVar37;
  ulonglong *unaff_RBX;
  ulonglong uVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  ulonglong *puVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  undefined8 *puVar57;
  undefined8 *puVar58;
  undefined8 *puVar59;
  uint *puVar60;
  ulonglong *puVar61;
  byte *unaff_RDI;
  byte bVar62;
  ulonglong *in_R10;
  ulonglong *in_R11;
  undefined4 unaff_R13D;
  undefined8 *unaff_R14;
  longlong unaff_R15;
  undefined2 in_ES;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  undefined8 in_XMM0_Qa;
  uint uVar66;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  ulonglong in_XMM1_Qa;
  ulonglong *in_XMM1_Qb;
  uint uVar67;
  undefined8 in_XMM2_Qa;
  undefined4 uVar68;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  int in_stack_00000006;
  undefined1 auStack_8e79 [36105];
  undefined1 *puStack_170;
  undefined8 uStack_160;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  ulonglong uStack_f8;
  ulonglong *in_stack_ffffffffffffff10;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulonglong *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  char cStack_b7;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  uint uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  uint uStack_54;
  char cStack_50;
  byte bStack_4f;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar12 = uStack_7c;
  uVar10 = uStack_b0._4_4_;
  uVar13 = (uint)uStack_b0;
  uVar27 = uStack_c0._4_4_;
  uVar66 = (uint)((ulonglong)in_XMM0_Qa >> 0x20);
  uVar18 = (uint)in_XMM0_Qa;
  puVar39 = &stack0xffffffffffffff18;
  puVar41 = &stack0xffffffffffffff18;
  puVar42 = &stack0xffffffffffffff18;
  puVar44 = &stack0xffffffffffffff18;
  puVar49 = &stack0xffffffffffffff18;
  puVar52 = &stack0xffffffffffffff18;
  puVar53 = &stack0xffffffffffffff18;
  puVar55 = &stack0xffffffffffffff18;
  puVar57 = &stack0xffffffffffffff18;
  puVar58 = &stack0xffffffffffffff18;
  puVar59 = &stack0xffffffffffffff18;
  puVar43 = &stack0xffffffffffffff18;
  puVar46 = &stack0xffffffffffffff18;
  puVar40 = &stack0xffffffffffffff18;
  puVar47 = &stack0xffffffffffffff18;
  puVar48 = &stack0xffffffffffffff18;
  puVar54 = &stack0xffffffffffffff18;
  puVar50 = &stack0xffffffffffffff18;
  puVar45 = &stack0xffffffffffffff18;
  puVar51 = &stack0xffffffffffffff18;
  puVar61 = &uStack_68;
  uStack_28 = 0xfffffffffffffffe;
  bVar36 = (byte)*param_2;
  puVar28 = (ulonglong *)&UNK_1433375e0;
  uVar20 = (ulonglong)*(int *)(&UNK_1433375e0 + (ulonglong)bVar36 * 4);
  bVar63 = 0xfffffffebccc8a1f < uVar20;
  puVar21 = (ulonglong *)(&UNK_1433375e0 + uVar20);
  bVar65 = puVar21 == (ulonglong *)0x0;
  uVar33 = SUB82(param_2,0);
  bVar16 = (byte)puVar21;
  uVar17 = (uint)puVar21;
  uVar25 = (undefined7)((ulonglong)puVar21 >> 8);
  bVar62 = (byte)param_4;
  bVar37 = (byte)unaff_RBX;
  cVar14 = (char)((ulonglong)unaff_RBX >> 8);
  uStack_b0._0_4_ = (uint)param_1;
  iVar9 = (uint)uStack_b0;
  uStack_b0._4_4_ = (uint)((ulonglong)param_1 >> 0x20);
  uVar11 = uStack_b0._4_4_;
  iVar26 = (int)param_3;
  uStack_c0._4_4_ = (undefined4)((ulonglong)unaff_RBX >> 0x20);
  uVar8 = uStack_c0._4_4_;
  puVar24 = puVar21;
  puVar35 = param_2;
  puVar56 = &stack0xffffffffffffff18;
  uVar67 = (uint)in_XMM2_Qa;
  uVar68 = (int)((ulonglong)in_XMM2_Qa >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar36) {
  case 0:
    cVar14 = '\x12';
    uStack_b0._0_4_ = uVar13;
    uStack_b0._4_4_ = uVar10;
    goto code_r0x0001417bdeeb;
  case 1:
    bStack_4f = *(byte *)((longlong)param_2 + 1);
    cVar14 = '\0';
    uStack_b0._0_4_ = uVar13;
    uStack_b0._4_4_ = uVar10;
    goto code_r0x0001417bdeeb;
  case 2:
    uStack_48 = (uint)param_2[2];
    uStack_44 = (uint)(param_2[2] >> 0x20);
    cVar14 = (char)(0xa0804 >> ((byte)((uint)param_2[1] << 3) & 0x1f));
    uStack_b0._0_4_ = uVar13;
    uStack_b0._4_4_ = uVar10;
    goto code_r0x0001417bdeeb;
  case 3:
    uVar20 = param_2[1];
    uVar31 = param_2[2];
    uStack_98._7_1_ = (undefined1)uVar20;
    uStack_90 = (uint)(uVar20 >> 8);
    uStack_8c = (undefined1)(uVar20 >> 0x28);
    uStack_8b = (undefined2)(uVar20 >> 0x30);
    uStack_89 = (undefined1)uVar31;
    uStack_88 = (uint)(uVar31 >> 8);
    uStack_84._0_3_ = (undefined3)(uVar31 >> 0x28);
    uStack_38 = (byte *)param_2[3];
    uStack_84._3_1_ = SUB81(uStack_38,0);
    iStack_80 = (int)((ulonglong)uStack_38 >> 8);
    uStack_7c._0_3_ = (undefined3)((ulonglong)uStack_38 >> 0x28);
    uVar7 = CONCAT12(uStack_98._2_1_,CONCAT11(uStack_98._1_1_,(byte)uStack_98));
    bStack_4f = (byte)uStack_98;
    uStack_4e = (undefined2)((uint3)uVar7 >> 8);
    uStack_4c = (uint)(CONCAT25(uStack_98._5_2_,
                                CONCAT14(uStack_98._4_1_,CONCAT13(uStack_98._3_1_,uVar7))) >> 0x18);
    uStack_48 = (uint)uVar20;
    uStack_44 = (uint)(uVar20 >> 0x20);
    uStack_40 = (uint)uVar31;
    uStack_3c = (undefined4)(uVar31 >> 0x20);
    cVar14 = '\f';
    uStack_b0._0_4_ = uVar13;
    uStack_b0._4_4_ = uVar10;
    goto code_r0x0001417bdeeb;
  case 4:
    uStack_b0._0_4_ = uVar13;
    uStack_b0._4_4_ = uVar10;
    pdb_141bc80b0(&cStack_50,param_2 + 1);
    cVar14 = cStack_50;
    if (cStack_50 != '\x16') goto code_r0x0001417bdeeb;
code_r0x0001417bdee2:
    uVar20 = CONCAT44(uStack_44,uStack_48);
    goto code_r0x0001417be0b9;
  case 5:
    uStack_a8._0_4_ = (uint)param_2[3];
    uStack_a8._4_4_ = (uint)(param_2[3] >> 0x20);
    uVar18 = (uint)param_2[1];
    uStack_b4 = *(uint *)((longlong)param_2 + 0xc);
    uStack_b0._0_4_ = (uint)param_2[2];
    uStack_b0._4_4_ = *(uint *)((longlong)param_2 + 0x14);
    bStack_b8 = (byte)uVar18;
    cStack_b7 = (char)(uVar18 >> 8);
    uStack_b6 = (undefined2)(uVar18 >> 0x10);
    pdb_141ba70a0(&cStack_50,&bStack_b8);
    cVar14 = cStack_50;
    if (cStack_50 == '\x16') goto code_r0x0001417bdee2;
code_r0x0001417bdeeb:
    uStack_70._5_3_ = (undefined3)(uStack_4c >> 8);
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    uStack_58 = (uint)uStack_38;
    uStack_54 = uStack_38._4_4_;
    uStack_70 = (byte *)CONCAT71(CONCAT34(uStack_70._5_3_,
                                          CONCAT13((undefined1)uStack_4c,
                                                   CONCAT21(uStack_4e,bStack_4f))),cVar14);
    uStack_c8 = (ulonglong *)&UNK_1433368f0;
    uStack_c0._0_1_ = 4;
    uStack_c0._1_1_ = 0;
    uStack_c0._2_2_ = 0;
    uStack_c0._4_4_ = 0;
    pdb_141b4d650(&cStack_50,&uStack_70,&UNK_1433368d0,0xc);
    uVar18 = uStack_4c;
    if (CONCAT22(uStack_4e,CONCAT11(bStack_4f,cStack_50)) == 1) {
      uStack_30 = (byte *)CONCAT44(uStack_44,uStack_48);
      if (*(longlong *)uStack_30 == 1) {
        pdb_1404b38e0(uStack_30 + 8);
      }
      else if ((*(longlong *)uStack_30 == 0) && (*(ulonglong *)(uStack_30 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(uStack_30 + 8),*(ulonglong *)(uStack_30 + 0x10),1);
      }
      pub_1406abac0(uStack_30,0x28,8);
      uStack_c8 = (ulonglong *)&UNK_143336998;
      uStack_c0._0_1_ = 2;
      uStack_c0._1_1_ = 0;
      uStack_c0._2_2_ = 0;
      uStack_c0._4_4_ = 0;
      pdb_141b4d380(&cStack_50,&uStack_70,&UNK_143336981,0x12);
      uVar18 = uStack_4c;
      if (CONCAT22(uStack_4e,CONCAT11(bStack_4f,cStack_50)) == 1) {
        uStack_30 = (byte *)CONCAT44(uStack_44,uStack_48);
        if (*(longlong *)uStack_30 == 1) {
          pdb_1404b38e0(uStack_30 + 8);
        }
        else if ((*(longlong *)uStack_30 == 0) && (*(ulonglong *)(uStack_30 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(uStack_30 + 8),*(ulonglong *)(uStack_30 + 0x10),1);
        }
        pub_1406abac0(uStack_30,0x28,8);
        uVar20 = pdb_142d86fc0(&UNK_1433369b8,0x44);
        pdb_1417c2e50(&uStack_70);
code_r0x0001417be0b9:
        param_1[1] = uVar20;
        uVar18 = 1;
        goto code_r0x0001417be0c2;
      }
      uVar20 = CONCAT44(uStack_44,uStack_48);
      uStack_98._0_1_ = (byte)uStack_40;
      uStack_98._1_1_ = (char)(uStack_40 >> 8);
      uStack_98._2_1_ = (char)(uStack_40 >> 0x10);
      uStack_98._3_1_ = (undefined1)(uStack_40 >> 0x18);
      uStack_98._4_1_ = (undefined1)uStack_3c;
      uStack_98._5_2_ = (undefined2)((uint)uStack_3c >> 8);
      uStack_98._7_1_ = (undefined1)((uint)uStack_3c >> 0x18);
      uStack_90 = (uint)uStack_38;
      uStack_8c = (undefined1)((ulonglong)uStack_38 >> 0x20);
      uStack_8b = (undefined2)((ulonglong)uStack_38 >> 0x28);
      uStack_89 = (undefined1)((ulonglong)uStack_38 >> 0x38);
      pdb_1417c2e50(&uStack_70);
      uVar66 = 2;
      if (uVar18 != 2) {
code_r0x0001417be067:
        param_1[1] = uVar20;
        param_1[2] = CONCAT17(uStack_98._7_1_,
                              CONCAT25(uStack_98._5_2_,
                                       CONCAT14(uStack_98._4_1_,
                                                CONCAT13(uStack_98._3_1_,
                                                         CONCAT12(uStack_98._2_1_,
                                                                  CONCAT11(uStack_98._1_1_,
                                                                           (byte)uStack_98))))));
        param_1[3] = CONCAT17(uStack_89,CONCAT25(uStack_8b,CONCAT14(uStack_8c,uStack_90)));
        uVar66 = uVar18;
      }
    }
    else {
      uVar20 = CONCAT44(uStack_44,uStack_48);
      uStack_98._0_1_ = (byte)uStack_40;
      uStack_98._1_1_ = (char)(uStack_40 >> 8);
      uStack_98._2_1_ = (char)(uStack_40 >> 0x10);
      uStack_98._3_1_ = (undefined1)(uStack_40 >> 0x18);
      uStack_98._4_1_ = (undefined1)uStack_3c;
      uStack_98._5_2_ = (undefined2)((uint)uStack_3c >> 8);
      uStack_98._7_1_ = (undefined1)((uint)uStack_3c >> 0x18);
      uStack_90 = (uint)uStack_38;
      uStack_8c = (undefined1)((ulonglong)uStack_38 >> 0x20);
      uStack_8b = (undefined2)((ulonglong)uStack_38 >> 0x28);
      uStack_89 = (undefined1)((ulonglong)uStack_38 >> 0x38);
      pdb_1417c2e50(&uStack_70);
      iVar26 = uVar18 - 2;
      uVar66 = 2;
      if (uVar18 < 2) {
        iVar26 = 2;
      }
      if (iVar26 != 0) {
        if (iVar26 != 1) goto code_r0x0001417be067;
        uVar66 = 3;
      }
    }
    *(uint *)((longlong)param_1 + 4) = uVar66;
    uVar18 = 0;
code_r0x0001417be0c2:
    *(uint *)param_1 = uVar18;
    return param_1;
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
    uStack_58._1_3_ = (undefined3)in_XMM0_Qa;
    uStack_54 = (uint)((ulonglong)in_XMM0_Qa >> 0x18);
    cStack_50 = (char)((ulonglong)in_XMM0_Qa >> 0x38);
    bStack_4f = (byte)in_XMM0_Dc;
    uStack_4e = (undefined2)(in_XMM0_Dc >> 8);
    uStack_4c._1_3_ = (undefined3)in_XMM0_Dd;
    uStack_4c = CONCAT31(uStack_4c._1_3_,(char)(in_XMM0_Dc >> 0x18));
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    puVar21 = (ulonglong *)CONCAT44(uStack_7c,iStack_80);
    uStack_40 = iStack_80;
    uStack_3c = uStack_7c;
  case 0xb:
    *(byte *)((longlong)puVar21 + -0x75) = *(byte *)((longlong)puVar21 + -0x75) & 0xe0;
    func_0x000169c170e2();
    uVar15 = 0xc;
code_r0x0001417be7d7:
    uStack_78._5_3_ = (undefined3)(uStack_54 >> 8);
    uStack_70 = (byte *)CONCAT44(uStack_4c,CONCAT22(uStack_4e,CONCAT11(bStack_4f,cStack_50)));
    uStack_78 = (ulonglong *)
                CONCAT71(CONCAT34(uStack_78._5_3_,CONCAT13((undefined1)uStack_54,uStack_58._1_3_)),
                         uVar15);
    uStack_c8 = (ulonglong *)&UNK_143336950;
    uStack_c0._0_1_ = 2;
    uStack_c0._1_1_ = 0;
    uStack_c0._2_2_ = 0;
    uStack_c0._4_4_ = 0;
    pdb_141b4d510(&uStack_58,&uStack_78,&UNK_143336970,0x11);
    uVar18 = uStack_54;
    if (uStack_58 == 1) {
      uStack_38 = (byte *)CONCAT44(uStack_4c,CONCAT22(uStack_4e,CONCAT11(bStack_4f,cStack_50)));
      if (*(longlong *)uStack_38 == 1) {
        pdb_1404b38e0(uStack_38 + 8);
      }
      else if ((*(longlong *)uStack_38 == 0) && (*(ulonglong *)(uStack_38 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(uStack_38 + 8),*(ulonglong *)(uStack_38 + 0x10),1);
      }
      pub_1406abac0(uStack_38,0x28,8);
      uStack_c8 = (ulonglong *)&UNK_143336950;
      uStack_c0._0_1_ = 2;
      uStack_c0._1_1_ = 0;
      uStack_c0._2_2_ = 0;
      uStack_c0._4_4_ = 0;
      pdb_141b4d5b0(&uStack_58,&uStack_78,&UNK_14333693f,0x11);
      uVar18 = uStack_4c;
      if (uStack_58 == 2) {
        uStack_38 = (byte *)CONCAT44(uStack_4c,CONCAT22(uStack_4e,CONCAT11(bStack_4f,cStack_50)));
        if (*(longlong *)uStack_38 == 1) {
          pdb_1404b38e0(uStack_38 + 8);
        }
        else if ((*(longlong *)uStack_38 == 0) && (*(ulonglong *)(uStack_38 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(uStack_38 + 8),*(ulonglong *)(uStack_38 + 0x10),1);
        }
        pub_1406abac0(uStack_38,0x28,8);
        uVar20 = pdb_142d86fc0(&UNK_1433369fc,0x49);
        pdb_1417c2e50(&uStack_78);
        param_1[1] = uVar20;
        uVar18 = 1;
        goto code_r0x0001417be9c2;
      }
      uVar20 = CONCAT44(uStack_54,uStack_58);
      uVar66 = CONCAT22(uStack_4e,CONCAT11(bStack_4f,cStack_50));
      pdb_1417c2e50(&uStack_78);
      uStack_48 = uVar66;
      uStack_44 = uVar18;
code_r0x0001417be954:
      if ((uVar20 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1430435e8,0x6d,&UNK_143043620);
      }
      pdb_140defa80(param_1 + 1,uVar20 >> 0x20,uStack_48,uStack_44);
      uVar66 = 0;
    }
    else {
      uVar20 = CONCAT44(uStack_4c,CONCAT22(uStack_4e,CONCAT11(bStack_4f,cStack_50)));
      pdb_1417c2e50(&uStack_78);
      if (uVar18 == 2) goto code_r0x0001417be954;
      param_1[1] = uVar20;
      param_1[2] = CONCAT44(uStack_44,uStack_48);
      uVar66 = 0;
      if (uVar18 == 1) {
        param_1[3] = CONCAT44(uStack_3c,uStack_40);
        uVar66 = 1;
      }
    }
    *(uint *)((longlong)param_1 + 4) = uVar66;
    uVar18 = 0;
code_r0x0001417be9c2:
    *(uint *)param_1 = uVar18;
    return param_1;
  case 8:
    (&UNK_143337563)[uVar20] = (&UNK_143337563)[uVar20] + -0x20;
    return puVar21;
  case 9:
    if ((longlong)uVar20 < -0x1433375e0) {
      return puVar21;
    }
    (&UNK_14333756b)[uVar20] = (&UNK_14333756b)[uVar20] | 0xe0;
    (&UNK_143337569)[uVar20] = (&UNK_143337569)[uVar20] + -0x20;
    uVar15 = 0;
    goto code_r0x0001417be7d7;
  case 10:
    lVar23 = CONCAT71(0x1433375,(&UNK_14333756d)[uVar20] + -0x20);
                    /* WARNING: Could not emulate address calculation at 0x0001417be734 */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)
              (*(code *)(*(int *)(lVar23 + (ulonglong)(uVar17 | 0x1b78ec4) * 4) + lVar23))();
    return puVar28;
  case 0xc:
    in(uVar33);
    uStack_98._0_1_ = (byte)unaff_XMM6_Dc;
    uStack_98._1_1_ = (char)((uint)unaff_XMM6_Dc >> 8);
    uStack_98._2_1_ = (char)((uint)unaff_XMM6_Dc >> 0x10);
    uStack_98._3_1_ = (undefined1)((uint)unaff_XMM6_Dc >> 0x18);
    uStack_98._4_1_ = (undefined1)unaff_XMM6_Dd;
    uStack_98._5_2_ = (undefined2)((uint)unaff_XMM6_Dd >> 8);
    uStack_98._7_1_ = (undefined1)((uint)unaff_XMM6_Dd >> 0x18);
    lVar23 = 0;
    if (1 < (ulonglong)UNK_143337602) {
      lVar23 = (ulonglong)UNK_143337602 - 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001417bec85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)
              (*(code *)(&UNK_143337610 + *(int *)(&UNK_143337610 + lVar23 * 4)))
                        (&UNK_143337610 + *(int *)(&UNK_143337610 + lVar23 * 4));
    return puVar28;
  case 0xd:
    pdb_140172c20((uint)*puVar21,&UNK_14333682e,1);
    pdb_140172c20(*param_1,&UNK_14333682e,1);
    return (ulonglong *)0x0;
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    pdb_142d7f1b0();
    lVar23 = *(longlong *)(unaff_RDI + 0x10);
    *(undefined1 *)(*(longlong *)(unaff_RDI + 8) + lVar23) = 0x7d;
    *(longlong *)(unaff_RDI + 0x10) = lVar23 + 1;
    plVar5 = (longlong *)*param_1;
    lVar23 = plVar5[2];
    if (*plVar5 == lVar23) {
      uStack_c8 = (ulonglong *)0x1;
      pdb_142d7f1b0(plVar5,lVar23,1,1);
      lVar23 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar23) = 0x7d;
    plVar5[2] = lVar23 + 1;
    return (ulonglong *)0x0;
  case 0x11:
    return puVar21;
  case 0x12:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar36) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x22:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x32:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x34:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x35:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x36:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x37:
    case 0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x38:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x48:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x49:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x50:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x51:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x54:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x56:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x57:
    case 0x5a:
    case 0x5c:
    case 0x5d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x58:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x60:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x61:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 100:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x65:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x70:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x71:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x84:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x81:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x82:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x91:
    case 0x93:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x96:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x98:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x99:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x9f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xaa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xab:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xac:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case 0x13:
    return puVar21;
  case 0x14:
    uStack_c8 = (ulonglong *)CONCAT44(uStack_c8._4_4_,1);
    pdb_142d7f1b0(param_1,param_2,1,1);
    param_2 = (ulonglong *)param_1[2];
  case 0x16:
    *(byte *)(param_1[1] + (longlong)param_2) = 0x7d;
    param_1[2] = (ulonglong)((longlong)param_2 + 1);
    return puVar21;
  case 0x15:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    goto code_r0x0001417bf779;
  case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x18:
    (&UNK_143337569)[uVar20] = (&UNK_143337569)[uVar20] + -0x20;
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(1);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x19:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    goto code_r0x0001417bf779;
  case 0x1a:
    param_4 = (ulonglong *)0x6;
code_r0x0001417bf779:
    lVar23 = pdb_14054e5c0(param_1,param_2,param_3,param_4);
    if (lVar23 == 0) {
      return (ulonglong *)0x0;
    }
    puVar61 = (ulonglong *)CONCAT44(uStack_a8._4_4_,(uint)uStack_a8);
    puVar60 = (uint *)&uStack_70;
pdb_142db8fb0:
    *(ulonglong **)((longlong)puVar60 + -8) = puVar61;
    *(undefined8 *)((longlong)puVar60 + -0x10) = 0xfffffffffffffffe;
    *(undefined8 *)((longlong)puVar60 + -0x38) = 1;
    *(longlong *)((longlong)puVar60 + -0x30) = lVar23;
    *(undefined8 *)((longlong)puVar60 + -0x20) = 0;
    *(undefined8 *)((longlong)puVar60 + -0x18) = 0;
    *(undefined **)((longlong)puVar60 + -0x60) = &UNK_142db8fda;
    pdb_14007ee60();
    *(undefined **)((longlong)puVar60 + -0x60) = &UNK_142db8fe9;
    puVar28 = (ulonglong *)pub_1406abab0(0x28,8);
    if (puVar28 != (ulonglong *)0x0) {
      puVar28[4] = *(ulonglong *)((longlong)puVar60 + -0x18);
      uVar20 = *(ulonglong *)((longlong)puVar60 + -0x38);
      uVar31 = *(ulonglong *)((longlong)puVar60 + -0x30);
      uVar6 = *(ulonglong *)((longlong)puVar60 + -0x20);
      puVar28[2] = *(ulonglong *)((longlong)puVar60 + -0x28);
      puVar28[3] = uVar6;
      *puVar28 = uVar20;
      puVar28[1] = uVar31;
      return puVar28;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar60 + -0x60) = &UNK_142db901a;
    pdb_142dc7e11(8,0x28);
  case 0x1b:
                    /* WARNING: Could not recover jumptable at 0x0001417bf6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)(*(code *)(ulonglong)(uVar17 + (int)param_2))();
    return puVar28;
  case 0x1c:
    (&UNK_143337569)[uVar20] = (&UNK_143337569)[uVar20] + -0x20;
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(1);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x1d:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    *(undefined4 *)(&UNK_1433375e3 + uVar20) = 0x79656e6d;
    *(uint *)puVar21 = 0x6d696843;
    puVar24 = param_1;
code_r0x0001417bfcf4:
    *(byte *)puVar24 = 3;
    puVar24[1] = 7;
code_r0x0001417bfcff:
    puVar24[2] = (ulonglong)puVar21;
    puVar24[3] = 7;
    return puVar24;
  case 0x1e:
    *unaff_RDI = *unaff_RDI >> 4 | *unaff_RDI << 4;
    bVar16 = bVar16 ^ (byte)*unaff_RBX;
    pcRam000000008548fefe = (char *)CONCAT71(uVar25,bVar16);
    *pcRam000000008548fefe = *pcRam000000008548fefe + bVar16;
    pcRam000000008548fefe[5] = 'g';
    pcRam000000008548fefe[6] = 'e';
    pcRam000000008548fefe[7] = 'W';
    pcRam000000008548fefe[8] = 'i';
    pcRam000000008548fefe[9] = 'n';
    pcRam000000008548fefe[10] = 'd';
    pcRam000000008548fefe[0xb] = 'o';
    pcRam000000008548fefe[0xc] = 'w';
    pcRam000000008548fefe[0] = 'C';
    pcRam000000008548fefe[1] = 'o';
    pcRam000000008548fefe[2] = 't';
    pcRam000000008548fefe[3] = 't';
    pcRam000000008548fefe[4] = 'a';
    pcRam000000008548fefe[5] = 'g';
    pcRam000000008548fefe[6] = 'e';
    pcRam000000008548fefe[7] = 'W';
    uRam000000008548feee = 3;
    uRam000000008548fef6 = 0xd;
    uRam000000008548ff06 = 0xd;
    return (ulonglong *)0x8548feee;
  case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
    if (bVar63) {
      *(byte *)((longlong)unaff_RBX + 0x74) = *(byte *)((longlong)unaff_RBX + 0x74) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x22:
    pcVar29 = &UNK_143337599 + uVar20;
    *pcVar29 = *pcVar29 + -0x20;
    puVar28 = (ulonglong *)((longlong)param_1 + 4);
    out((uint)*param_1,uVar33);
    if (*pcVar29 == '\0') {
      (&UNK_143337569)[uVar20] = (&UNK_143337569)[uVar20] + -0x20;
      uStack_c8 = (ulonglong *)&UNK_143336aff;
      bStack_b8 = 1;
      cStack_b7 = 0;
      uStack_b6 = 0;
      uStack_b4 = 0;
      uStack_c0._0_1_ = 7;
      uStack_c0._1_1_ = 0;
      uStack_c0._2_2_ = 0;
      uStack_c0._4_4_ = 0;
      pdb_140ddcab0(&uStack_a8,&UNK_143336abe,0xd,6);
      if (SBORROW8(0,CONCAT44(uStack_a8._4_4_,(uint)uStack_a8))) {
        *(ulonglong **)((longlong)param_1 + 0xc) = uStack_a0;
        *(byte *)puVar28 = 6;
      }
      else {
        uStack_48 = CONCAT13(uStack_98._3_1_,
                             CONCAT12(uStack_98._2_1_,CONCAT11(uStack_98._1_1_,(byte)uStack_98)));
        uStack_44 = CONCAT13(uStack_98._7_1_,CONCAT21(uStack_98._5_2_,uStack_98._4_1_));
        uStack_3c = CONCAT13(uStack_89,CONCAT21(uStack_8b,uStack_8c));
        uStack_38 = (byte *)CONCAT44(uStack_84,uStack_88);
        uStack_30._0_4_ = iStack_80;
        uStack_30._4_4_ = uStack_7c;
        uStack_40 = uStack_90;
        uStack_58 = (uint)uStack_a8;
        uStack_54 = uStack_a8._4_4_;
        cStack_50 = (char)uStack_a0;
        bStack_4f = (byte)((ulonglong)uStack_a0 >> 8);
        uStack_4e = (undefined2)((ulonglong)uStack_a0 >> 0x10);
        uStack_4c = (uint)((ulonglong)uStack_a0 >> 0x20);
        uStack_28 = CONCAT17(1,(undefined7)uStack_28);
        lVar23 = pdb_141bfb410(&uStack_58,&UNK_143336b06,2,unaff_RDI + 8);
        if (lVar23 == 0) {
          uStack_88 = (uint)uStack_38;
          uStack_84 = uStack_38._4_4_;
          iStack_80 = (int)uStack_30;
          uStack_7c = uStack_30._4_4_;
          uStack_98._0_1_ = (byte)uStack_48;
          uStack_98._1_1_ = (char)(uStack_48 >> 8);
          uStack_98._2_1_ = (char)(uStack_48 >> 0x10);
          uStack_98._3_1_ = (undefined1)(uStack_48 >> 0x18);
          uStack_98._4_1_ = (undefined1)uStack_44;
          uStack_98._5_2_ = (undefined2)(uStack_44 >> 8);
          uStack_98._7_1_ = (undefined1)(uStack_44 >> 0x18);
          uStack_90 = uStack_40;
          uStack_8c = (undefined1)uStack_3c;
          uStack_8b = (undefined2)((uint)uStack_3c >> 8);
          uStack_89 = (undefined1)((uint)uStack_3c >> 0x18);
          uStack_a8._0_4_ = uStack_58;
          uStack_a8._4_4_ = uStack_54;
          uStack_a0 = (ulonglong *)
                      CONCAT44(uStack_4c,CONCAT22(uStack_4e,CONCAT11(bStack_4f,cStack_50)));
          uStack_28 = uStack_28 & 0xffffffffffffff;
          pdb_140ddc650(puVar28,&uStack_a8);
        }
        else {
          *(longlong *)((longlong)param_1 + 0xc) = lVar23;
          *(byte *)puVar28 = 6;
          if (CONCAT44(uStack_54,uStack_58) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_4c,
                                           CONCAT22(uStack_4e,CONCAT11(bStack_4f,cStack_50))),
                          CONCAT44(uStack_54,uStack_58),1);
          }
          puVar61 = (ulonglong *)CONCAT44(uStack_3c,uStack_40);
          if (puVar61 == (ulonglong *)0x0) {
            uStack_30._0_4_ = 0;
            uStack_30._4_4_ = 0;
          }
          else {
            uStack_a0 = (ulonglong *)0x0;
            uStack_98._0_1_ = (byte)uStack_40;
            uStack_98._1_1_ = (char)(uStack_40 >> 8);
            uStack_98._2_1_ = (char)(uStack_40 >> 0x10);
            uStack_98._3_1_ = (undefined1)(uStack_40 >> 0x18);
            uStack_98._4_1_ = (undefined1)uStack_3c;
            uStack_98._5_2_ = (undefined2)((uint)uStack_3c >> 8);
            uStack_98._7_1_ = (undefined1)((uint)uStack_3c >> 0x18);
            uStack_90 = (uint)uStack_38;
            uStack_8c = (undefined1)((ulonglong)uStack_38 >> 0x20);
            uStack_8b = (undefined2)((ulonglong)uStack_38 >> 0x28);
            uStack_89 = (undefined1)((ulonglong)uStack_38 >> 0x38);
            iStack_80 = 0;
            uStack_7c = 0;
            uStack_70 = uStack_38;
            uStack_78 = puVar61;
          }
          bVar63 = puVar61 != (ulonglong *)0x0;
          uStack_a8._0_4_ = (uint)bVar63;
          uStack_a8._4_4_ = 0;
          uStack_88 = (uint)bVar63;
          uStack_84 = 0;
          uStack_68._0_4_ = (int)uStack_30;
          uStack_68._4_4_ = uStack_30._4_4_;
          pdb_14096e700(&uStack_a8);
        }
      }
    }
    else {
      *(undefined4 *)(&UNK_1433375e8 + uVar20) = 0x776f646e;
      *(byte *)puVar28 = 3;
      ((uint *)((longlong)param_1 + 0xc))[0] = 0xc;
      ((uint *)((longlong)param_1 + 0xc))[1] = 0;
      *(ulonglong **)((longlong)param_1 + 0x14) = puVar21;
      ((uint *)((longlong)param_1 + 0x1c))[0] = 0xc;
      ((uint *)((longlong)param_1 + 0x1c))[1] = 0;
    }
    return puVar28;
  case 0x23:
    if (bVar63) {
      UNK_1433375e6 = UNK_1433375e6 + '\x01';
    }
    else {
      puVar24 = (ulonglong *)((longlong)param_1 + 4);
      out((uint)*param_1,uVar33);
      if (!bVar65) {
        *(uint *)((longlong)param_1 + 0xc) = 7;
        goto code_r0x0001417bfcff;
      }
      pbVar34 = unaff_RDI + 1;
      bVar36 = in(uVar33);
      *unaff_RDI = bVar36;
      uVar31 = (longlong)*(int *)(&UNK_143337569 + uVar20) * 0x840c608;
      pcVar29 = (char *)(uVar31 & 0xffffffff);
      if ((longlong)(int)uVar31 == uVar31) {
        _uRam0000000000000000 = 0x746e614c;
        goto code_r0x0001417bfcf4;
      }
      bVar36 = (byte)pcVar29;
      cVar14 = (char)((ulonglong)pcVar29 >> 8);
      if (-1 < (int)puVar61 + in_stack_00000006) {
        pbVar34 = (byte *)(&UNK_143337569 + uVar20);
        bVar16 = *pbVar34;
        *pbVar34 = *pbVar34 + bVar36;
        pbVar34 = &UNK_1433375a7 + uVar20;
        bVar37 = *pbVar34;
        bVar2 = *pbVar34;
        *pbVar34 = bVar2 + bVar62 + CARRY1(bVar16,bVar36);
        *pcVar29 = (*pcVar29 - bVar62) -
                   (CARRY1(bVar37,bVar62) || CARRY1(bVar2 + bVar62,CARRY1(bVar16,bVar36)));
        uVar27 = _uRam0000000000000000;
        uRam0000000000000000._0_1_ = (char)_uRam0000000000000000;
        UNRECOVERED_JUMPTABLE_00 = (code *)swi(1);
        puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)((char)uRam0000000000000000 + cVar14);
        _uRam0000000000000000 = uVar27;
        return puVar28;
      }
      *(byte *)(unaff_RBX + 0xd) = (byte)unaff_RBX[0xd];
      *pbVar34 = *pbVar34 | (byte)param_3;
      pbVar30 = (byte *)(&UNK_143337569 + uVar20);
      bVar16 = *pbVar30;
      *pbVar30 = *pbVar30 + bVar36;
      pbVar30 = &UNK_1433375a7 + uVar20;
      bVar37 = *pbVar30;
      bVar2 = *pbVar30;
      *pbVar30 = bVar2 + bVar62 + CARRY1(bVar16,bVar36);
      *pbVar34 = (*pbVar34 - (byte)param_3) -
                 (CARRY1(bVar37,bVar62) || CARRY1(bVar2 + bVar62,CARRY1(bVar16,bVar36)));
      cVar3 = uRam0000000000000000._2_1_ + '\x02';
      uRam0000000000000000 = CONCAT12(cVar3,(undefined2)uRam0000000000000000);
      pdb_14007ee60(CONCAT71((int7)((ulonglong)pcVar29 >> 8),bVar36 + cVar14));
      puVar28 = (ulonglong *)0x6;
      param_1 = puVar24;
      unaff_RDI = pbVar34;
    }
    pbVar34 = pub_1406abab0((ulonglong)puVar28,1);
    if (pbVar34 != (byte *)0x0) {
      pbVar34[4] = 0x72;
      pbVar34[5] = 0x73;
      pbVar34[0] = 0x53;
      pbVar34[1] = 0x74;
      pbVar34[2] = 0x61;
      pbVar34[3] = 0x69;
      *(byte *)param_1 = 3;
      param_1[1] = 6;
      param_1[2] = (ulonglong)pbVar34;
      param_1[3] = 6;
      return param_1;
    }
    puVar28 = (ulonglong *)0x1;
  case 0x24:
    *(int *)((longlong)puVar28 + 1) = *(int *)((longlong)puVar28 + 1) + (int)unaff_RDI;
    pdb_142dc7e2a(puVar28,6);
    puVar28 = (ulonglong *)0x1;
code_r0x0001417bff54:
    pdb_142dc7e2a(puVar28,0xd);
    pdb_142dc7e2a(1,0xc);
    pdb_142dc7e2a(1,4);
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x25:
    return puVar21;
  case 0x26:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    piVar22 = (int *)CONCAT71(uVar25,bVar16 + 0x75);
    *piVar22 = *piVar22 + (int)piVar22;
    *(byte *)piVar22 = (char)*piVar22 + bVar16 + 0x75;
    goto code_r0x0001417bff54;
  case 0x27:
    if (bVar16 != *unaff_RDI && (char)*unaff_RDI <= (char)bVar16) {
      uVar38 = (ulonglong)((int)&stack0xffffffffffffff18 + 0x433375e0);
      *(ulonglong **)(uVar38 + 0x10) = param_2;
      *(ulonglong **)(uVar38 - 8) = puVar61;
      *(ulonglong **)(uVar38 - 0x10) = param_1;
      *(byte **)(uVar38 - 0x18) = unaff_RDI + 1;
      if (*(byte *)((longlong)param_2 + 199) == 0) {
        return puVar21;
      }
      *(undefined8 *)(uVar38 - 0x60) = 0x1417bffaa;
      puVar28 = (ulonglong *)pdb_1409922e0(param_2 + 0x12);
      return puVar28;
    }
    goto code_r0x0001417c0052;
  case 0x28:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    goto code_r0x0001417bff54;
  case 0x29:
                    /* WARNING: Could not recover jumptable at 0x0001417bffcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)
              (*(code *)(&UNK_143337670 +
                        *(int *)(&UNK_143337670 +
                                CONCAT17(UNK_1433375e7,
                                         CONCAT16(UNK_1433375e6,
                                                  CONCAT24(_UNK_1433375e4,_UNK_1433375e0))) * 4)))()
    ;
    return puVar28;
  case 0x2a:
    if (SCARRY1(bVar37,'u')) {
      param_2 = (ulonglong *)(ulonglong)((uint)uStack_b0 + 8);
      param_3 = (ulonglong *)&UNK_143336ad8;
      param_4 = (ulonglong *)0xc;
    }
    else {
      param_2 = (ulonglong *)(ulonglong)((uint)uStack_b0 + 8);
      param_3 = (ulonglong *)&UNK_143336af4;
      param_4 = (ulonglong *)0x7;
    }
code_r0x0001417c0052:
    lVar23 = pdb_14054e5c0(param_1,param_2,param_3,param_4);
    if (lVar23 == 0) {
      return (ulonglong *)0x0;
    }
    puVar60 = &uStack_90;
    goto pdb_142db8fb0;
  case 0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2c:
    *(byte *)(*(longlong *)(unaff_RDI + 8) + (longlong)param_2) = 0x3a;
    pbVar34 = (byte *)((longlong)param_2 + 1);
    *(byte **)(unaff_RDI + 0x10) = pbVar34;
    if (*(byte **)unaff_RDI == pbVar34) {
      uStack_c8 = (ulonglong *)0x1;
      pdb_142d7f1b0(uVar18,pbVar34,1,1);
      pbVar34 = *(byte **)(unaff_RDI + 0x10);
    }
    pbVar34[*(longlong *)(unaff_RDI + 8)] = 0x7b;
    *(byte **)(unaff_RDI + 0x10) = pbVar34 + 1;
    uStack_c0._0_1_ = 0;
    uStack_c0._1_1_ = '\x01';
    cStack_b7 = (char)((ulonglong)param_1 >> 8);
    uStack_b6 = (undefined2)((ulonglong)param_1 >> 0x10);
    bStack_b8 = (byte)param_1;
    uStack_b4 = uStack_b0._4_4_;
    puVar28 = (ulonglong *)pdb_141b7fe30(&uStack_c0,&UNK_143336b06,2,&UNK_1433375e8 + uVar20);
    if (puVar28 != (ulonglong *)0x0) {
      return puVar28;
    }
    if ((byte)uStack_c0 != 1) {
      plVar5 = (longlong *)CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(cStack_b7,bStack_b8)));
      if (uStack_c0._1_1_ != '\0') {
        plVar4 = (longlong *)*plVar5;
        lVar23 = plVar4[2];
        if (*plVar4 == lVar23) {
          uStack_c8 = (ulonglong *)0x1;
          pdb_142d7f1b0(plVar4,lVar23,1,1);
          lVar23 = plVar4[2];
        }
        *(undefined1 *)(plVar4[1] + lVar23) = 0x7d;
        plVar4[2] = lVar23 + 1;
      }
      plVar5 = (longlong *)*plVar5;
      lVar23 = plVar5[2];
      if (*plVar5 == lVar23) {
        uStack_c8 = (ulonglong *)0x1;
        pdb_142d7f1b0(plVar5,lVar23,1,1);
        lVar23 = plVar5[2];
      }
      *(undefined1 *)(plVar5[1] + lVar23) = 0x7d;
      plVar5[2] = lVar23 + 1;
      return (ulonglong *)0x0;
    }
    puVar28 = (ulonglong *)&UNK_143336f18;
    goto code_r0x0001417c021d;
  case 0x2d:
    uStack_c0._0_1_ = 7;
    uStack_c0._1_1_ = '\0';
    uStack_c0._2_2_ = 0;
    uVar19 = 4;
    uStack_c0._4_4_ = uVar27;
    goto code_r0x0001417c03dd;
  case 0x2e:
    out(uVar33,uVar17);
    *(int *)(&UNK_14333756b + uVar20) = *(int *)(&UNK_14333756b + uVar20) + 0x433375e0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x30:
code_r0x0001417c021d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(puVar28,0x28,&UNK_143337548);
  case 0x31:
    uStack_c0._0_1_ = 9;
    uStack_c0._1_1_ = '\0';
    uStack_c0._2_2_ = 0;
    uStack_c0._4_4_ = 0;
    uVar19 = 2;
    goto code_r0x0001417c03dd;
  case 0x32:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    uVar19 = 3;
    uStack_c0._4_4_ = uVar27;
    goto code_r0x0001417c03dd;
  case 0x33:
    uStack_c0._0_1_ = 0xd;
    uStack_c0._1_1_ = '\0';
    uStack_c0._2_2_ = 0;
    uVar19 = 0;
    uStack_c0._4_4_ = uVar27;
code_r0x0001417c03dd:
    pdb_142db8640(param_1,&UNK_143336abe,0xd,uVar19);
    return param_1;
  case 0x34:
    uStack_c8 = (ulonglong *)0x7;
    uVar20 = pdb_142db8610(&UNK_143336abe,0xd,6,&UNK_143336aff);
    param_1[1] = uVar20;
    *(byte *)param_1 = 6;
    return param_1;
  case 0x35:
    *(undefined2 *)puVar21 = in_ES;
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
LAB_1417c049f:
    if (param_4 == (ulonglong *)0x22) {
      puVar28 = &uStack_c0;
      goto code_r0x0001417c04aa;
    }
LAB_1417c04d0:
    if ((int)param_4 != 0x7b) {
      uStack_c0._0_1_ = 10;
LAB_1417c048a:
      uStack_c0._4_4_ = 0;
      uStack_c0._2_2_ = 0;
      uStack_c0._1_1_ = '\0';
      puVar21 = &uStack_c0;
      uVar27 = uStack_c0._4_4_;
      goto code_r0x0001417c048f;
    }
    puVar28 = param_2 + 9;
    *(byte *)puVar28 = (byte)*puVar28 - 1;
    unaff_RBX = param_2;
    uStack_c0._4_4_ = uVar27;
    uStack_b0._0_4_ = uVar13;
    uStack_b0._4_4_ = uVar10;
    if ((byte)*puVar28 == 0) {
      uStack_c0._0_1_ = 0x18;
      goto LAB_1417c048a;
    }
    goto code_r0x0001417c04e3;
  case 0x36:
    puVar21 = (ulonglong *)((ulonglong)&uStack_c0 & 0xffffffff);
  case 0x37:
  case 0x40:
code_r0x0001417c048f:
    uStack_c0._4_4_ = uVar27;
    uVar20 = pdb_142d84ef0(param_2,puVar21);
    goto LAB_1417c052b;
  case 0x38:
    *(undefined4 *)(&UNK_1433375df + uVar20) = *(undefined4 *)(&UNK_1433375df + uVar20);
    while (param_4 != (ulonglong *)0x1) {
      param_4 = (ulonglong *)(ulonglong)((byte *)((longlong)param_3 + -1))[(longlong)puVar21];
code_r0x0001417c0461:
      if ((ulonglong *)0x22 < param_4) goto LAB_1417c04d0;
      bVar63 = ((ulonglong)unaff_RDI >> ((ulonglong)param_4 & 0x3f) & 1) != 0;
      puVar24 = puVar21;
code_r0x0001417c046b:
      puVar21 = puVar24;
      if (!bVar63) goto LAB_1417c049f;
      param_2[5] = (ulonglong)puVar24;
      puVar21 = (ulonglong *)((longlong)puVar24 + 1);
      param_4 = (ulonglong *)((longlong)puVar24 + 0x1433375e1);
    }
    uStack_c0._0_1_ = 5;
    goto LAB_1417c048a;
  case 0x39:
    goto code_r0x0001417c04aa;
  case 0x3a:
    puVar21 = (ulonglong *)(ulonglong)(uint)*param_1;
    goto code_r0x0001417c05e4;
  case 0x3b:
    goto code_r0x0001417c046b;
  case 0x3c:
    _UNK_1433375e0 = CONCAT31(_UNK_1433375e1,UNK_1433375e0 + bVar16);
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    uStack_60 = CONCAT17(uStack_60._7_1_ + bVar16,(undefined7)uStack_60);
    param_2 = (ulonglong *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x4c,(char)param_2))
    ;
    unaff_RBX = (ulonglong *)
                CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(cVar14 * '\x02',bVar37));
    goto code_r0x0001417c0461;
  case 0x3d:
    *(int *)(&UNK_143337569 + uVar20) = *(int *)(&UNK_143337569 + uVar20) + 0x433375e0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3e:
    goto code_r0x0001417c04aa;
  case 0x3f:
    puVar28 = (ulonglong *)&stack0xffffffffffffff10;
    cVar14 = '\a';
    do {
      puVar61 = puVar61 + -1;
      puVar28 = puVar28 + -1;
      *puVar28 = *puVar61;
      cVar14 = cVar14 + -1;
    } while ('\0' < cVar14);
    *(uint *)param_1 = 0;
    return param_1;
  case 0x41:
    return puVar21;
  case 0x42:
    *(int *)(&UNK_143337565 + uVar20) = *(int *)(&UNK_143337565 + uVar20) + -1;
    *unaff_RDI = *unaff_RDI >> 5 | *unaff_RDI << 3;
    uVar17 = uVar17 | _UNK_1433375e0;
    *(char *)(ulonglong)uVar17 = *(char *)(ulonglong)uVar17 + (char)uVar17;
    goto code_r0x0001417c051f;
  case 0x43:
    *(uint *)puVar21 = (uint)*puVar21 + uVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x44:
    uVar20 = (ulonglong)puVar21 & 0xffffffffffffff30;
    goto LAB_1417c052b;
  case 0x45:
    goto code_r0x0001417c0536;
  case 0x46:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    UNK_143337569 = UNK_143337569 + -0x20;
    uVar20 = pdb_141c0a1c0();
    if (uVar20 != 0) goto LAB_1417c0bde;
    param_4 = (ulonglong *)(unaff_RDI + 8);
    uStack_68 = CONCAT17(1,(undefined7)uStack_68);
    param_2 = (ulonglong *)&UNK_143336c79;
    puVar28 = &uStack_98;
    param_3 = (ulonglong *)0x2;
    goto code_r0x0001417c0bd3;
  case 0x47:
    goto code_r0x0001417c0c16;
  case 0x48:
code_r0x0001417c0bd3:
    uVar20 = pdb_141c06d70(puVar28,param_2,param_3,param_4);
    if (uVar20 != 0) {
LAB_1417c0bde:
      param_1[1] = uVar20;
      *(byte *)param_1 = 6;
      pdb_1417c2cd0(&uStack_98);
      return param_1;
    }
    if ((unaff_XMM6_Da != 0.0) || (NAN(unaff_XMM6_Da))) {
      uStack_68 = CONCAT17(1,(undefined7)uStack_68);
      uVar20 = pdb_141c06050(&uStack_98,&UNK_143336c7b,0xb,unaff_RDI + 0x10);
      if (uVar20 != 0) goto LAB_1417c0bde;
    }
    uVar18 = CONCAT13(uStack_98._3_1_,
                      CONCAT12(uStack_98._2_1_,CONCAT11(uStack_98._1_1_,(byte)uStack_98)));
    uVar66 = CONCAT13(uStack_98._7_1_,CONCAT21(uStack_98._5_2_,uStack_98._4_1_));
    in_XMM1_Qa = CONCAT44(uStack_84,uStack_88);
    in_XMM1_Qb = (ulonglong *)CONCAT44(uStack_7c,iStack_80);
    in_XMM0_Dc = uStack_90;
    uVar67 = (uint)uStack_78;
    uVar68 = uStack_78._4_4_;
    in_XMM2_Dc = (uint)uStack_70;
    in_XMM2_Dd = uStack_70._4_4_;
code_r0x0001417c0c16:
    uStack_a0 = (ulonglong *)CONCAT44(in_XMM2_Dd,in_XMM2_Dc);
    bStack_b8 = (byte)in_XMM1_Qa;
    cStack_b7 = (char)(in_XMM1_Qa >> 8);
    uStack_b6 = (undefined2)(in_XMM1_Qa >> 0x10);
    uStack_b4 = (uint)(in_XMM1_Qa >> 0x20);
    uStack_b0._0_4_ = (uint)in_XMM1_Qb;
    uStack_b0._4_4_ = (uint)((ulonglong)in_XMM1_Qb >> 0x20);
    uStack_c8 = (ulonglong *)CONCAT44(uVar66,uVar18);
    uStack_c0._0_1_ = (byte)in_XMM0_Dc;
    uStack_c0._1_1_ = (char)(in_XMM0_Dc >> 8);
    uStack_c0._2_2_ = (undefined2)(in_XMM0_Dc >> 0x10);
    uStack_68 = uStack_68 & 0xffffffffffffff;
    uStack_a8._0_4_ = uVar67;
    uStack_a8._4_4_ = uVar68;
    pdb_140ddcdc0(param_1,&uStack_c8);
    return param_1;
  case 0x49:
    return (ulonglong *)((ulonglong)param_1 & 0xffffffff);
  case 0x4a:
    cRam00000000433375e0 = cRam00000000433375e0 + -0x20;
    bVar63 = 0x1f < UNK_14333756b;
    UNK_14333756b = UNK_14333756b - 0x20;
    cRam0000000650014db4 = cRam0000000650014db4 + -0x20 + bVar63;
    uStack_a0 = (ulonglong *)CONCAT44(uStack_a0._4_4_,(int)unaff_RDI);
    uStack_a8._0_4_ = (uint)unaff_RBX;
    uStack_b0._0_4_ = 0x43337540;
    uStack_b0._4_4_ = 0;
    bStack_b8 = (byte)in_R11;
    cStack_b7 = (char)((ulonglong)in_R11 >> 8);
    uStack_c0._0_1_ = (byte)uStack_e8;
    uStack_c0._1_1_ = (char)((ulonglong)uStack_e8 >> 8);
    uStack_c0._2_2_ = (undefined2)((ulonglong)uStack_e8 >> 0x10);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_e8 >> 0x20);
    uStack_98._0_1_ = 0x19;
    uStack_98._1_1_ = 0x33;
    uStack_e8 = 0x1417c14b1;
    uStack_a8._4_4_ = uVar8;
    uVar18 = pdb_141764730();
    param_1 = (ulonglong *)(ulonglong)uVar18;
    unaff_RBX = (ulonglong *)*unaff_R14;
    unaff_XMM6_Da = (float)*(undefined8 *)(unaff_R15 + 8);
    unaff_XMM6_Db = (undefined4)((ulonglong)*(undefined8 *)(unaff_R15 + 8) >> 0x20);
    unaff_R14 = (undefined8 *)unaff_RBX[0x20];
    if (unaff_R14 == (undefined8 *)unaff_RBX[0x1e]) {
      uStack_e8 = 0x1417c14d8;
      pdb_142dbafc0(unaff_RBX + 0x1e);
    }
    param_2 = (ulonglong *)(ulonglong)(iStack_80 + 2);
    puVar21 = (ulonglong *)unaff_RBX[0x1f];
    puVar28 = (ulonglong *)((longlong)unaff_R14 * 0x1b);
  case 0x4c:
    pbVar30 = (byte *)((longlong)puVar28 + (longlong)unaff_R14);
    pbVar34 = (byte *)((longlong)puVar21 + (longlong)pbVar30);
    pbVar34[0] = 3;
    pbVar34[1] = 0;
    pbVar34[2] = 0;
    pbVar34[3] = 0;
    *(ulonglong *)((longlong)((longlong)puVar21 + 4) + (longlong)pbVar30) =
         CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
    *(int *)((longlong)((longlong)puVar21 + 0xc) + (longlong)pbVar30) = (int)unaff_RDI;
    *(int *)((longlong)(puVar21 + 2) + (longlong)pbVar30) = (int)param_2;
    *(undefined4 *)((longlong)((longlong)puVar21 + 0x14) + (longlong)pbVar30) = unaff_R13D;
    *(int *)((longlong)(puVar21 + 3) + (longlong)pbVar30) = (int)param_1;
    unaff_RBX[0x20] = (longlong)unaff_R14 + 1;
    return puVar21;
  case 0x4b:
    (&UNK_14333756d)[uVar20] = (&UNK_14333756d)[uVar20] + -0x20;
    uStack_c8 = (ulonglong *)(ulonglong)(uVar17 + 0x1b75668);
    uStack_b0._0_4_ = uVar13;
    uStack_b0._4_4_ = uVar10;
    goto code_r0x0001417c15d8;
  case 0x4d:
    puVar21 = (ulonglong *)CONCAT71(uVar25,bVar16 & bRam000000018a6c9eb7);
    goto code_r0x0001417c1564;
  case 0x4e:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    cRam0000000153428626 = cRam0000000153428626 + -0x20;
    uStack_78._4_4_ = uVar18;
    uStack_70._0_4_ = uVar66;
    goto code_r0x0001417c1773;
  case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x50:
    (&UNK_14333756b)[uVar20] = (&UNK_14333756b)[uVar20] | 0xe0;
    *param_1 = (ulonglong)puVar21 & 0xffffffffffffff5c;
    bVar36 = 2;
    goto code_r0x0001417c17b1;
  case 0x51:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x52:
    *unaff_RDI = *unaff_RDI ^ 0xe0;
    uStack_b4 = uVar66;
    goto code_r0x0001417c178d;
  case 0x53:
    goto code_r0x0001417c1832;
  case 0x54:
    goto code_r0x0001417c1857;
  case 0x55:
    uStack_70 = (byte *)pdb_142db90e0(&uStack_78,&UNK_14339ab48,&UNK_143399fa8);
    goto code_r0x0001417c175d;
  case 0x56:
    goto code_r0x0001417c192e;
  case 0x57:
  case 0x5a:
  case 0x5c:
  case 0x5d:
    param_3 = (ulonglong *)((ulonglong)puVar21 & 0xffffffff);
    goto code_r0x0001417c1a38;
  case 0x58:
    goto code_r0x0001417c1a04;
  case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x60:
    goto code_r0x0001417c1a6c;
  case 0x61:
    goto code_r0x0001417c1ab3;
  case 0x62:
    UNRECOVERED_JUMPTABLE_00 = (code *)0x8666ebc0;
    uStack_b0._0_4_ = uVar13;
    goto code_r0x0001417c1a84;
  case 99:
    puVar42 = &stack0xffffffffffffff18;
    uStack_b0._0_4_ = uVar13;
    if (bVar65) goto code_r0x0001417c1b03;
    puVar28 = (ulonglong *)(*param_2 ^ 0x1433375e0);
    puVar40 = (undefined8 *)&stack0xffffffffffffff10;
    goto code_r0x0001417c1aa8;
  case 100:
    puVar28 = (ulonglong *)CONCAT71(uVar25,(bVar16 | unaff_RDI[0x143337597]) + 0x41);
    uVar20 = pdb_142d8f140(param_2,param_3,&UNK_143336cf0,4);
    puVar28[1] = uVar20;
    *(undefined1 *)puVar28 = 1;
    return puVar28;
  case 0x65:
    (&UNK_143337628)[(longlong)unaff_RDI * 2] = (&UNK_143337628)[(longlong)unaff_RDI * 2];
    uStack_c8 = (ulonglong *)0x433368b0;
    uStack_c0._0_1_ = 2;
    uStack_c0._1_1_ = '\0';
    uStack_c0._2_2_ = 0;
    uStack_c0._4_4_ = 0;
    param_3 = (ulonglong *)&UNK_143336891;
    puVar28 = &uStack_b0;
    goto code_r0x0001417c1d7e;
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
    uVar18 = (uint)CONCAT71(uVar25,bVar16 + 0x31);
    goto LAB_1417c1dcb;
  case 0x6e:
    *(byte *)puVar21 = 0xe0;
    return puVar21;
  case 0x70:
    *(byte *)((longlong)unaff_RBX + -0x49) =
         (*(byte *)((longlong)unaff_RBX + -0x49) + 0x20) - bVar63;
    *(int *)(&UNK_14333756d + uVar20) = *(int *)(&UNK_14333756d + uVar20) + 0x433375e0;
    uStack_c0._4_4_ = uVar27;
code_r0x0001417c1d7e:
    uStack_b0._0_4_ = uVar13;
    uStack_b0._4_4_ = uVar10;
    pdb_141b4dee0(puVar28,param_2,param_3,0xc);
    if ((uint)uStack_b0 == 1) {
      param_1[1] = CONCAT44(uStack_a8._4_4_,(uint)uStack_a8);
      uVar18 = 2;
    }
    else {
      *(uint *)((longlong)param_1 + 0xc) = uStack_a8._4_4_;
      *(ulonglong *)((longlong)param_1 + 4) = CONCAT44((uint)uStack_a8,uStack_b0._4_4_);
      uVar18 = 0;
    }
LAB_1417c1dcb:
    *(uint *)param_1 = uVar18;
    return param_1;
  case 0x71:
    goto code_r0x0001417c1e42;
  case 0x72:
    goto code_r0x0001417c1e69;
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7c:
    goto code_r0x0001417c1eb5;
  case 0x7b:
    goto code_r0x0001417c1e4f;
  case 0x7d:
    puVar39 = &stack0xffffffffffffff18;
    uStack_b0._0_4_ = uVar13;
    if (bVar65) {
      bVar63 = *(byte *)((longlong)param_2 + 3) == 0x6d;
      goto code_r0x0001417c1e92;
    }
    goto LAB_1417c1f58;
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x84:
    break;
  case 0x81:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x82:
    puVar28 = puVar21;
    uStack_b0._0_4_ = uVar13;
    goto pdb_140f679a0;
  case 0x83:
    _UNK_1433375e0 = CONCAT31(_UNK_1433375e1,bVar16);
    break;
  default:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x91:
  case 0x93:
    uStack_b0._0_4_ = uVar13;
    goto pdb_140f679a0;
  case 0x96:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x98:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    pbVar34 = &UNK_143337619 + uVar20;
    *pbVar34 = *pbVar34 | 0xc1;
    uStack_7c = (undefined4)((ulonglong)param_3 >> 0x20);
    if (*pbVar34 != 0) {
      uStack_78 = (ulonglong *)&UNK_1433375e0;
      puVar28 = param_3 + 3;
      iStack_80 = iVar26;
      goto code_r0x0001417c2d43;
    }
    bVar36 = (byte)param_3[1];
    if (6 < (ulonglong)bVar36) {
code_r0x0001417c2db0:
      bStack_b8 = (byte)unaff_RDI;
      cStack_b7 = (char)((ulonglong)unaff_RDI >> 8);
      uStack_b6 = (undefined2)((ulonglong)unaff_RDI >> 0x10);
      uStack_b4 = (uint)((ulonglong)unaff_RDI >> 0x20);
      uStack_c0._2_2_ = (undefined2)((ulonglong)unaff_RBX >> 0x10);
      uStack_c8 = (ulonglong *)0xfffffffffffffffe;
      uVar20 = param_3[2];
      if (uVar20 != 0) {
        uStack_120 = param_3[3];
        puStack_130 = (undefined1 *)0x0;
        uStack_110 = 0;
        uStack_128 = uVar20;
      }
      puStack_138 = (undefined1 *)(ulonglong)(uVar20 != 0);
      uStack_160 = 0x1409a4652;
      puStack_118 = puStack_138;
      uStack_c0._0_1_ = bVar37;
      uStack_c0._1_1_ = cVar14;
      pdb_14192c4b0(&stack0xffffffffffffff10,&puStack_138);
      if (in_stack_ffffffffffffff10 != (ulonglong *)0x0) {
        do {
          puStack_d8 = in_stack_ffffffffffffff10 + (longlong)puStack_e0 * 4;
          ppuStack_d0 = &puStack_138;
          if (in_stack_ffffffffffffff10[(longlong)puStack_e0 * 3 + 0x2d] != 0) {
            uStack_160 = 0x1409a46ad;
            pub_1406abac0((byte *)in_stack_ffffffffffffff10[(longlong)puStack_e0 * 3 + 0x2e],
                          in_stack_ffffffffffffff10[(longlong)puStack_e0 * 3 + 0x2d],1);
          }
          uStack_160 = 0x1409a46b6;
          pdb_140966d70(&puStack_d8);
          uStack_160 = 0x1409a46c2;
          pdb_14192c4b0(&stack0xffffffffffffff10,&puStack_138);
        } while (in_stack_ffffffffffffff10 != (ulonglong *)0x0);
      }
      return in_stack_ffffffffffffff10;
    }
    puVar21 = (ulonglong *)(&UNK_1433377d8 + *(int *)(&UNK_1433377d8 + (ulonglong)bVar36 * 4));
    switch(bVar36) {
    default:
      goto code_r0x0001417c2daa;
    case 3:
      if (param_3[2] == 0) {
        return puVar21;
      }
      puVar28 = (ulonglong *)param_3[3];
      uVar20 = 1;
      uStack_7c = uVar12;
      goto code_r0x0001406abac0;
    case 4:
      puVar28 = (ulonglong *)param_3[3];
      param_2 = (ulonglong *)param_3[4];
      iStack_80 = iVar26;
      uStack_78 = puVar28;
      break;
    case 5:
      goto code_r0x0001417c2db0;
    }
    goto code_r0x0001417c2d7f;
  case 0x99:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x9a:
    piVar22 = (int *)((ulonglong)puVar21 & 0xffffffffffffff40);
    *piVar22 = *piVar22 + (int)piVar22;
    *(char *)piVar22 = (char)*piVar22 + (char)piVar22;
    uStack_c8 = (ulonglong *)0x1;
    puVar28 = (ulonglong *)pdb_140f66f00(piVar22,&UNK_143336ee0,0xe,&UNK_143336abd);
    return puVar28;
  case 0x9b:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x9c:
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    (&UNK_143337569)[uVar20] = (&UNK_143337569)[uVar20] + -0x20;
    puVar28 = (ulonglong *)(ulonglong)(uVar17 >> 0xf);
    if ((POPCOUNT(uVar17 >> 0xf & 0xff) & 1U) == 0) {
      puVar28 = (ulonglong *)(*(code *)puVar28[0xd189069])();
    }
    return puVar28;
  case 0x9d:
    uStack_c8 = (ulonglong *)&UNK_1433375e0;
    puVar28 = (ulonglong *)pdb_140f66090(uVar17 | 0x1b73e1d,&UNK_143336f10,7,&bStack_b8);
    return puVar28;
  case 0x9e:
    puVar51 = &uStack_60;
    goto code_r0x0001417c3193;
  case 0x9f:
    goto code_r0x0001417c320f;
  case 0xa0:
    puVar28 = (ulonglong *)(ulonglong)(uint)(iVar26 * 8);
    puVar53 = &stack0xffffffffffffff18;
    goto code_r0x0001417c31cd;
  case 0xa1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa2:
    puVar51 = &stack0xffffffffffffff18;
    goto code_r0x0001417c31ac;
  case 0xa3:
    uVar20 = 0xbc08666e;
    puVar56 = &stack0xffffffffffffff18;
    goto code_r0x0001417c322b;
  case 0xa4:
    bVar63 = uVar17 == 8;
    puVar56 = &stack0xffffffffffffff18;
    goto code_r0x0001417c3244;
  case 0xa5:
    (&UNK_14333756b)[uVar20] = (&UNK_14333756b)[uVar20] + -0x20 + bVar63;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa6:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0xa7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa8:
    puVar21 = (ulonglong *)(ulonglong)(uVar17 >> 9);
  case 0xaa:
    bStack_b8 = 0xe0;
    cStack_b7 = 0x75;
    uStack_b6 = 0x4333;
    uStack_b4 = 1;
    uStack_c0._0_1_ = (byte)&uStack_a8;
    uStack_c0._1_1_ = (char)((ulonglong)&uStack_a8 >> 8);
    uStack_c0._2_2_ = (undefined2)((ulonglong)&uStack_a8 >> 0x10);
    uStack_c0._4_4_ = (undefined4)((ulonglong)&uStack_a8 >> 0x20);
    uStack_c8 = (ulonglong *)0x1;
    puVar28 = (ulonglong *)pdb_140f66e50(puVar21,&UNK_143336ab0,0xd,&UNK_143336abd);
    return puVar28;
  case 0xa9:
    UNRECOVERED_JUMPTABLE_00 =
         (code *)((longlong)(int)*(uint *)((longlong)param_3 + (longlong)param_2 * 4) +
                 (longlong)param_3);
                    /* WARNING: Could not recover jumptable at 0x0001417c3408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)(&UNK_1433375e0,UNRECOVERED_JUMPTABLE_00);
    return puVar28;
  case 0xab:
    *(uint *)puVar21 = (uint)*puVar21 | uVar17;
    *(byte *)puVar21 = (byte)*puVar21 + bVar16;
    puVar28 = puVar21;
    uStack_b0._0_4_ = uVar13;
    goto pdb_140f679a0;
  case 0xac:
    puVar28 = (ulonglong *)0x6;
    uStack_b0._0_4_ = uVar13;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)(**(code **)(puVar28[1] + 0x18))(*puVar28);
    return puVar28;
  case 0xad:
  case 0xae:
  case 0xaf:
    if (SCARRY8(uVar20,0x1433375e0)) {
      halt_baddata();
    }
    *(byte *)param_2 = (byte)*param_2 + 1;
    *(uint *)(&UNK_1433375de + uVar20) = *(uint *)(&UNK_1433375de + uVar20) | 0xfe4885b0;
    uVar20 = (ulonglong)(uVar17 + 0x30fe4887);
    LOCK();
    bVar36 = *(byte *)(uVar20 - 2);
    *(byte *)(uVar20 - 2) = 0xe0;
    lVar23 = CONCAT71(0x1433375,bVar36);
    UNLOCK();
    if ((POPCOUNT(uVar17 + 0x30fe4887 & 0xff) & 1U) != 0) {
      while( true ) {
        puVar1 = (uint *)((longlong)param_1 + uVar20 * 4);
        *(byte *)puVar1 = (byte)*puVar1 + 1;
        *(byte *)((longlong)param_2 + -0x79) = *(byte *)((longlong)param_2 + -0x79) + 1;
        *(char *)(lVar23 + -0x3f01b779) = *(char *)(lVar23 + -0x3f01b779) + '\x01';
        LOCK();
        uVar15 = *(undefined1 *)(uVar20 - 2);
        *(undefined1 *)(uVar20 - 2) = (char)lVar23;
        lVar23 = CONCAT71((int7)((ulonglong)lVar23 >> 8),uVar15);
        UNLOCK();
        uVar27 = (undefined4)lVar23;
        *(undefined4 *)(uVar20 - 2) = uVar27;
        param_1 = (ulonglong *)0x85fe4889;
        *(undefined4 *)(uVar20 - 2) = uVar27;
        uVar20 = (ulonglong)(uint)(int)(short)uVar20;
        *(undefined4 *)(uVar20 - 2) = uVar27;
        if (uVar17 < 0xcf01b779) break;
        *(char *)(lVar23 + 0x77fe4871) = *(char *)(lVar23 + 0x77fe4871) + '\x01';
        *(byte *)((longlong)param_2 + -0x7a) = *(byte *)((longlong)param_2 + -0x7a) + 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(uVar20 + 0x48) = *(byte *)(uVar20 + 0x48) >> (bVar36 & 0x1f);
    unaff_RDI[-0x5901b798] = unaff_RDI[-0x5901b798] - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
    UNK_143337648 = UNK_143337648 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(&UNK_14333756d + uVar20);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
  uStack_b0._0_4_ = uVar13;
  goto pdb_140f679a0;
code_r0x0001417c1f5d:
  puVar39 = &stack0xffffffffffffff18;
  goto LAB_1417c1f58;
code_r0x0001417c04aa:
  uStack_c0._4_4_ = uVar27;
  uStack_b0._0_4_ = uVar13;
  uStack_b0._4_4_ = uVar10;
  uVar20 = pdb_1416578a0(puVar28);
  puVar28 = (ulonglong *)&UNK_1433376b0;
  uVar31 = (ulonglong)*(int *)(&UNK_1433376b0 + (ulonglong)(byte)uStack_c0 * 4);
  bVar65 = 0xfffffffebccc894f < uVar31;
  puVar21 = (ulonglong *)(&UNK_1433376b0 + uVar31);
  bVar63 = puVar21 == (ulonglong *)0x0;
  bVar36 = (byte)puVar21;
  uVar18 = (uint)puVar21;
  uVar25 = (undefined7)((ulonglong)puVar21 >> 8);
  puVar35 = param_2;
  uVar13 = (uint)uStack_b0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)uStack_c0) {
  case 0:
    *param_1 = 0;
    break;
  case 1:
    *param_1 = 1;
    break;
  case 2:
    *param_1 = 2;
    break;
  case 3:
  case 0xc:
    *param_1 = 3;
    break;
  case 4:
    *param_1 = 4;
    break;
  case 5:
    *param_1 = 5;
    break;
  case 6:
    uStack_c0._0_1_ = 0xd;
    uVar20 = pdb_142db90e0(&uStack_c0,&UNK_143323610,&UNK_143322608);
    goto LAB_1417c052b;
  case 7:
    *param_1 = 7;
    break;
  case 8:
    uVar20 = CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(cStack_b7,bStack_b8)));
    goto LAB_1417c052b;
  case 9:
    puVar21 = (ulonglong *)((ulonglong)puVar21 & 0xffffffffffffff28);
    unaff_RBX = param_2;
code_r0x0001417c04e3:
    unaff_RBX[5] = (ulonglong)puVar21;
    uVar20 = pdb_141654250(&uStack_c0);
    iVar26 = CONCAT22(uStack_b6,CONCAT11(cStack_b7,bStack_b8));
    puVar21 = (ulonglong *)CONCAT44(uStack_b4,iVar26);
    param_2 = (ulonglong *)&UNK_1433376d4;
    uVar31 = (ulonglong)*(int *)(&UNK_1433376d4 + (ulonglong)(byte)uStack_c0 * 4);
    bVar65 = 0xfffffffebccc892b < uVar31;
    puVar28 = (ulonglong *)(&UNK_1433376d4 + uVar31);
    bVar63 = puVar28 == (ulonglong *)0x0;
    uVar25 = (undefined7)((ulonglong)puVar21 >> 8);
    bVar36 = (byte)puVar28;
    uVar18 = (uint)puVar28;
    puVar32 = puVar28;
    puVar35 = param_2;
    puVar52 = &stack0xffffffffffffff18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)uStack_c0) {
    case 0:
      puVar21 = (ulonglong *)pdb_141654940(puVar21);
      if (puVar21 == (ulonglong *)0x0) {
code_r0x0001417c051f:
        puVar21 = (ulonglong *)0x0;
        goto code_r0x0001417c063f;
      }
      break;
    case 1:
      puVar21 = (ulonglong *)pdb_141654940(puVar21);
      if (puVar21 == (ulonglong *)0x0) {
        puVar21 = (ulonglong *)0x1;
        goto code_r0x0001417c063f;
      }
      break;
    case 2:
      puVar21 = (ulonglong *)pdb_141654940(puVar21);
      if (puVar21 == (ulonglong *)0x0) {
        puVar21 = (ulonglong *)0x2;
        goto code_r0x0001417c063f;
      }
      break;
    case 3:
      goto code_r0x0001417c0583;
    case 4:
      puVar21 = (ulonglong *)pdb_141654940(puVar21);
      if (puVar21 == (ulonglong *)0x0) {
        puVar21 = (ulonglong *)0x4;
        goto code_r0x0001417c063f;
      }
      break;
    case 5:
      puVar28 = puVar21;
      goto code_r0x0001417c0606;
    case 6:
      goto code_r0x0001417c05d6;
    case 7:
      puVar21 = (ulonglong *)pdb_141654940(puVar21);
      if (puVar21 == (ulonglong *)0x0) {
        puVar21 = (ulonglong *)0x7;
        goto code_r0x0001417c063f;
      }
      break;
    case 8:
      break;
    case 9:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    case 10:
      *(byte *)puVar21 = (byte)*puVar21 + bStack_b8;
      puVar21 = (ulonglong *)pub_1406abab0(6,1);
      if (puVar21 != (ulonglong *)0x0) {
        *(undefined2 *)((longlong)puVar21 + 4) = 0x6e65;
        *(uint *)puVar21 = 0x646f6f57;
        goto code_r0x0001417c0d50;
      }
      goto code_r0x0001417c0d78;
    case 0xb:
      *(byte *)puVar21 = (byte)*puVar21 + bStack_b8;
      puVar21 = (ulonglong *)pub_1406abab0(4,1);
      if (puVar21 != (ulonglong *)0x0) {
        *(uint *)puVar21 = 0x656e6f4e;
        goto code_r0x0001417c0d50;
      }
      goto code_r0x0001417c0d69;
    case 0xc:
code_r0x0001417c0d50:
      *(byte *)param_1 = 3;
      param_1[1] = (ulonglong)unaff_RDI;
      param_1[2] = (ulonglong)puVar21;
      param_1[3] = (ulonglong)unaff_RDI;
      return param_1;
    case 0xd:
      *(byte *)puVar21 = (byte)*puVar21 + bStack_b8;
      *(byte *)((longlong)param_1 + -0x3d) = *(byte *)((longlong)param_1 + -0x3d) + (byte)unaff_RBX;
LAB_1417c1577:
      uStack_58 = (uint)uStack_a8;
      uStack_54 = uStack_a8._4_4_;
      cStack_50 = (char)uStack_a0;
      bStack_4f = (byte)((ulonglong)uStack_a0 >> 8);
      uStack_4e = (undefined2)((ulonglong)uStack_a0 >> 0x10);
      uStack_4c = uStack_a0._4_4_;
                    /* WARNING: Could not emulate address calculation at 0x0001417c159d */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ulonglong *)
                (*(code *)(&UNK_143337708 +
                          *(int *)(&UNK_143337708 + ((ulonglong)param_2 & 0xffffffff) * 4)))
                          ((ulonglong)puVar21 & 0xff,
                           &UNK_143337708 +
                           *(int *)(&UNK_143337708 + ((ulonglong)param_2 & 0xffffffff) * 4));
      return puVar28;
    case 0xe:
      *(byte *)((longlong)puVar21 + -0x39) = *(byte *)((longlong)puVar21 + -0x39) & bVar36;
      uVar18 = (int)(int *)((ulonglong)puVar21 & 0xffffffffffffff28) +
               *(int *)((ulonglong)puVar21 & 0xffffffffffffff28);
      puVar21 = (ulonglong *)(ulonglong)uVar18;
      *(byte *)puVar21 = (byte)*puVar21 + (char)uVar18;
      goto code_r0x0001417c16a0;
    case 0xf:
      *(byte *)puVar21 = (byte)*puVar21 + bStack_b8;
      pbVar34 = (byte *)((longlong)&uStack_68 + (longlong)puVar28 * 4 + 5);
      bVar16 = *pbVar34;
      *pbVar34 = *pbVar34 + bVar36;
      uStack_c8 = (ulonglong *)CONCAT71(uVar25,bStack_b8 + 0x56 + CARRY1(bVar16,bVar36));
      goto code_r0x0001417c15d8;
    case 0x10:
      puVar21 = (ulonglong *)((ulonglong)puVar21 & 0xffffffffffffff58);
      goto code_r0x0001417c1639;
    case 0x11:
      goto code_r0x0001417c185c;
    case 0x12:
      goto code_r0x0001417c1901;
    case 0x13:
      *(uint *)((longlong)puVar21 + 1) = *(uint *)((longlong)puVar21 + 1) | 0x48e0ffc8;
      goto code_r0x0001417c18a0;
    case 0x14:
      goto code_r0x0001417c18bd;
    case 0x15:
      uStack_88 = CONCAT31(uStack_88._1_3_,(char)uStack_88 + bVar36 + bVar65);
      goto LAB_1417c1875;
    case 0x16:
      goto code_r0x0001417c1924;
    case 0x17:
      goto code_r0x0001417c1947;
    case 0x18:
      goto code_r0x0001417c18de;
    case 0x19:
      *(byte *)((longlong)param_1 + -0x3d) = *(byte *)((longlong)param_1 + -0x3d) & (byte)unaff_RBX;
      puVar28 = param_2;
LAB_1417c1a25:
      in_R10 = (ulonglong *)&UNK_143336a70;
      param_4 = (ulonglong *)0x4;
code_r0x0001417c1a38:
      uVar20 = pdb_142d8f140(puVar28,param_3,in_R10,param_4);
      puVar21[1] = uVar20;
      *(byte *)puVar21 = 1;
      return puVar21;
    case 0x1a:
    case 0x1d:
    case 0x1f:
    case 0x20:
      puVar28 = (ulonglong *)(ulonglong)(uVar18 ^ 0x776f646e);
      goto code_r0x0001417c1b1e;
    case 0x1b:
      goto code_r0x0001417c1af8;
    case 0x1c:
      *(byte *)((longlong)puVar21 + -0x77) = *(byte *)((longlong)puVar21 + -0x77) & bVar36;
      puStack_130 = &stack0xffffffffffffff10;
      puVar24 = (ulonglong *)&stack0xffffffffffffff10;
      cVar14 = '\a';
      do {
        puVar61 = puVar61 + -1;
        puVar24 = puVar24 + -1;
        *puVar24 = *puVar61;
        cVar14 = cVar14 + -1;
      } while ('\0' < cVar14);
      puVar39 = (undefined8 *)auStack_8e79;
      uVar13 = (uint)uStack_b0;
      goto code_r0x0001417c1a6c;
    case 0x1e:
      puVar21 = (ulonglong *)((longlong)puVar21 + *(longlong *)(&UNK_1433376dd + uVar31));
      puVar41 = &uStack_60;
code_r0x0001417c1ad6:
      if ((int)param_4 != 0 || (int)puVar28 != *(int *)((longlong)param_2 + 3)) {
        if (*(int *)((longlong)param_2 + 3) == 0x6e726574 && (uint)*param_2 == 0x746e614c) {
          *(byte *)((longlong)puVar21 + 1) = 4;
          goto code_r0x0001417c1b84;
        }
        goto code_r0x0001417c1afc;
      }
      *(byte *)((longlong)puVar21 + 1) = 3;
      goto code_r0x0001417c1b84;
    case 0x21:
      puVar21 = (ulonglong *)((longlong)puVar21 + 0xfc90949);
      *(byte *)puVar21 = *(byte *)puVar21 + (char)puVar21;
      *(uint *)puVar21 = *(uint *)puVar21 + (int)puVar21;
      goto code_r0x0001417c1abf;
    case 0x22:
      return puVar21;
    case 0x23:
      puVar21 = (ulonglong *)CONCAT71(uVar25,bStack_b8 + 0x41);
      puVar28 = (ulonglong *)(ulonglong)(uVar18 ^ 0x7372);
code_r0x0001417c1b6f:
      bVar63 = (int)param_4 == 0 && (int)puVar28 == 0;
      goto code_r0x0001417c1b72;
    case 0x24:
      goto code_r0x0001417c1ba7;
    case 0x25:
      *(int *)unaff_RDI = *(int *)unaff_RDI + iVar26;
      goto code_r0x0001417c1b74;
    case 0x26:
      *(int *)(&UNK_14333768d + uVar31) = *(int *)(&UNK_14333768d + uVar31) + iVar26;
      *(byte *)puVar21 = (byte)*puVar21 | bStack_b8;
      *(byte *)puVar21 = (byte)*puVar21 + bStack_b8;
      puVar44 = &stack0xffffffffffffff18;
      goto code_r0x0001417c1ba4;
    case 0x27:
      goto code_r0x0001417c1db8;
    case 0x28:
      *(uint *)((longlong)puVar21 + 1) = *(uint *)((longlong)puVar21 + 1) | 0x80e0ffc8;
      *(byte *)puVar21 = (byte)*puVar21 + bStack_b8;
      *(byte *)((longlong)puVar21 + 0xf6f017a) =
           *(byte *)((longlong)puVar21 + 0xf6f017a) + bStack_b8;
      *(byte *)puVar21 = (byte)*puVar21 + bStack_b8;
      *(byte *)((longlong)param_1 + -0x39) = *(byte *)((longlong)param_1 + -0x39) + cStack_b7;
      halt_baddata();
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x32:
      puVar21 = (ulonglong *)(ulonglong)(uint)(int)CONCAT11(cStack_b7,bStack_b8);
      *(byte *)puVar21 = (byte)*puVar21 + bStack_b8;
      *(byte *)((longlong)puVar21 + 0xf68087a) =
           *(byte *)((longlong)puVar21 + 0xf68087a) + bStack_b8;
      bVar63 = (POPCOUNT((uint)param_1[-0x10000000] & uVar18 & 0xff) & 1U) == 0;
      goto code_r0x0001417c1ecb;
    case 0x31:
      return puVar21;
    case 0x33:
code_r0x0001417c1e69:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x34:
      pbVar34 = (byte *)((longlong)&uStack_4c + (longlong)param_1 * 2 + 2);
      *pbVar34 = *pbVar34 | (byte)((ulonglong)puVar28 >> 8);
code_r0x0001417c1f3a:
      puVar39 = &stack0xffffffffffffff18;
      if (((*(byte *)((longlong)param_2 + 9) != 0x6f) ||
          (puVar39 = &stack0xffffffffffffff18, *(byte *)((longlong)param_2 + 10) != 0x73)) ||
         ((puVar39 = &stack0xffffffffffffff18, *(byte *)((longlong)param_2 + 0xb) != 0x75 ||
          (puVar39 = &stack0xffffffffffffff18, *(byte *)((longlong)param_2 + 0xc) != 0x72))))
      goto LAB_1417c1f58;
      bVar36 = *(byte *)((longlong)param_2 + 0xd);
      puVar45 = &stack0xffffffffffffff18;
      goto joined_r0x0001417c1f56;
    case 0x35:
      goto code_r0x0001417c1f5d;
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3f:
      puStack_d8 = (ulonglong *)&UNK_1433376d4;
      puVar48 = &uStack_120;
      puVar61 = (ulonglong *)&UNK_143337714;
      goto code_r0x0001417c1fbf;
    case 0x3e:
      if (!bVar65) {
        *(byte *)((longlong)puVar21 + -0x73) = *(byte *)((longlong)puVar21 + -0x73) - bVar36;
        puVar48 = (ulonglong *)&stack0xffffffffffffff10;
        goto code_r0x0001417c1fbf;
      }
code_r0x0001417c1f45:
      do {
        bVar36 = (char)puVar21 + *(byte *)((longlong)puVar21 + 0x75750b7a) + bVar65;
        bVar65 = false;
        bVar16 = bVar36 | 0x80;
        puVar21 = (ulonglong *)(CONCAT71((int7)((ulonglong)puVar21 >> 8),bVar36) | 0x80);
        if ((POPCOUNT(bVar16) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar28 = (ulonglong *)((longlong)puVar28 + -1);
      } while (puVar28 != (ulonglong *)0x0 && bVar16 != 0);
      goto code_r0x0001417c1f5d;
    case 0x40:
      *(uint *)(puVar21 + 0x108d129) = (uint)puVar21[0x108d129] + 0x433376d4;
      goto code_r0x0001417c1f84;
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x47:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    case 0x44:
      puVar1 = (uint *)((longlong)puVar21 + -0x73);
      *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
      goto pdb_140f679a0;
    case 0x45:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    case 0x46:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    default:
      (&UNK_14333768c)[uVar31] = (&UNK_14333768c)[uVar31] | bStack_b8;
      *(uint *)puVar21 = (uint)*puVar21 + iVar26;
      *(byte *)puVar21 = (byte)*puVar21 + bStack_b8;
      goto code_r0x0001417c2d5b;
    case 0x54:
    case 0x56:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x59:
      goto code_r0x0001417c2dc3;
    case 0x5b:
      puVar28 = (ulonglong *)func_0x000151ccb92e();
      goto code_r0x0001417c2de6;
    case 0x5c:
code_r0x0001417c2d7f:
      pdb_14098ae50(puVar28,param_2);
      if (((ulonglong *)CONCAT44(uStack_7c,iStack_80))[2] == 0) {
        return (ulonglong *)CONCAT44(uStack_7c,iStack_80);
      }
      uVar20 = 8;
      puVar28 = uStack_78;
      goto code_r0x0001406abac0;
    case 0x5d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5e:
      goto code_r0x0001417c31f0;
    case 0x5f:
      goto code_r0x0001417c3193;
    case 0x60:
      goto code_r0x0001417c31c2;
    case 0x61:
      goto code_r0x0001417c3286;
    case 0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 99:
      _UNK_143337679 = _UNK_143337679 << 0xb;
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    case 100:
      goto code_r0x0001417c32d1;
    case 0x65:
      goto code_r0x0001417c329f;
    case 0x66:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x67:
      goto code_r0x0001417c3335;
    case 0x68:
      pbVar34 = &UNK_1433376d3 + uVar31;
      *pbVar34 = *pbVar34 << 1 | (char)*pbVar34 < '\0';
      puVar28 = (ulonglong *)(&UNK_1433376d3 + uVar31);
      if (puVar28 == (ulonglong *)0x0 || bVar63) {
        uStack_c8 = (ulonglong *)&UNK_143336f88;
        goto code_r0x0001417c337c;
      }
      uStack_c8 = (ulonglong *)&UNK_143336fe8;
      goto code_r0x0001417c3347;
    case 0x69:
      puVar28 = puVar21;
      goto pdb_140f679a0;
    case 0x6a:
      *(uint *)((longlong)puVar21 + -0x73) = *(int *)((longlong)puVar21 + -0x73) + uVar18;
      goto code_r0x0001417c3519;
    case 0x6b:
      puVar21 = (ulonglong *)((ulonglong)puVar21 & 0xffffffffffffff28);
      goto code_r0x0001417c34d3;
    case 0x6c:
      goto code_r0x0001417c34ef;
    case 0x6d:
      puVar28 = puVar21;
      goto pdb_140f679a0;
    case 0x6e:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    case 0x6f:
      goto code_r0x0001417c356a;
    case 0x70:
    case 0x71:
    case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
      UNK_1433376d4 = UNK_1433376d4 + '\x01';
      return puVar21;
    }
code_r0x0001417c062a:
    param_1[1] = (ulonglong)puVar21;
    *param_1 = 8;
    *(byte *)(unaff_RBX + 9) = (byte)unaff_RBX[9] + 1;
    break;
  case 10:
    puVar21 = (ulonglong *)((ulonglong)(uVar18 + 0xe9000000) & 0xffffffffffffff01);
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x0001417c0583:
    puVar21 = (ulonglong *)pdb_141654940(puVar21);
    if (puVar21 != (ulonglong *)0x0) goto code_r0x0001417c062a;
    puVar21 = (ulonglong *)0x3;
  case 0xb:
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    *(byte *)((longlong)puVar21 + 3) =
         *(byte *)((longlong)puVar21 + 3) + (char)((ulonglong)unaff_RBX >> 8);
    goto code_r0x0001417c063f;
  case 0xd:
code_r0x0001417c05d6:
    pdb_141655c40(param_1,puVar21);
    puVar21 = (ulonglong *)*param_1;
    goto code_r0x0001417c05e4;
  case 0xe:
code_r0x0001417c05e4:
    *(byte *)(unaff_RBX + 9) = (byte)unaff_RBX[9] + 1;
    if (puVar21 == (ulonglong *)0x8) {
      return param_1;
    }
    goto code_r0x0001417c0648;
  case 0xf:
    *(int *)(&UNK_143337635 + uVar31) = *(int *)(&UNK_143337635 + uVar31) + -1;
    *(uint *)puVar21 = (uint)*puVar21 + uVar18;
    *(byte *)puVar21 = (byte)*puVar21 + bVar36;
    goto code_r0x0001417c063f;
  case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
code_r0x0001417c0606:
    unaff_RBX = (ulonglong *)
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                         (char)unaff_RBX + (char)((ulonglong)puVar28 >> 8));
    puVar21 = (ulonglong *)pdb_141654940(puVar21);
    if (puVar21 != (ulonglong *)0x0) goto code_r0x0001417c062a;
    puVar21 = (ulonglong *)0x5;
code_r0x0001417c063f:
    *param_1 = (ulonglong)puVar21;
    *(byte *)(unaff_RBX + 9) = (byte)unaff_RBX[9] + 1;
code_r0x0001417c0648:
    uVar20 = unaff_RBX[5];
    if (uVar20 < unaff_RBX[4]) {
      do {
        uVar20 = uVar20 + 1;
        bVar36 = *(byte *)((unaff_RBX[3] - 1) + uVar20);
        if ((0x20 < (ulonglong)bVar36) ||
           (((ulonglong)unaff_RDI >> ((ulonglong)bVar36 & 0x3f) & 1) == 0)) {
          if (bVar36 == 0x7d) {
            unaff_RBX[5] = uVar20;
            return param_1;
          }
          uStack_c0._0_1_ = 10;
          goto code_r0x0001417c068e;
        }
        unaff_RBX[5] = uVar20;
      } while (uVar20 != unaff_RBX[4]);
    }
    uStack_c0._0_1_ = 3;
code_r0x0001417c068e:
    uStack_c0._4_4_ = 0;
    uStack_c0._2_2_ = 0;
    uStack_c0._1_1_ = 0;
    uVar20 = pdb_142d855a0(unaff_RBX,&uStack_c0);
LAB_1417c052b:
    param_1[1] = uVar20;
    *param_1 = 8;
code_r0x0001417c0536:
    break;
  case 0x12:
    if ((longlong)uVar31 < -0x1433376b0) {
      return puVar21;
    }
    (&UNK_143337633)[uVar31] = (&UNK_143337633)[uVar31] & 0xb0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
    unaff_RDI = (byte *)0x4;
    puVar21 = (ulonglong *)pub_1406abab0(4,1);
    if (puVar21 != (ulonglong *)0x0) {
      *(uint *)puVar21 = 0x68676948;
      goto code_r0x0001417c0d50;
    }
code_r0x0001417c0d69:
    pdb_142dc7e2a(1,4);
code_r0x0001417c0d78:
    pdb_142dc7e2a(1,6);
    pdb_142dc7e2a(1,3);
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x14:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x15:
    puVar28 = (ulonglong *)(*(code *)&UNK_1433376b0)();
    return puVar28;
  case 0x16:
    pdb_141be78f0();
    param_2 = (ulonglong *)(ulonglong)bStack_b8;
    puVar21 = (ulonglong *)CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
    if (bStack_b8 != 4) goto LAB_1417c1577;
    goto code_r0x0001417c1564;
  case 0x17:
code_r0x0001417c16a0:
    uStack_58 = CONCAT31(uStack_58._1_3_,(char)uStack_58 - (char)puVar21);
    uStack_c8 = (ulonglong *)&UNK_143336c88;
    uStack_c0._0_1_ = 3;
    uStack_c0._1_1_ = 0;
    uStack_c0._2_2_ = 0;
    uStack_c0._4_4_ = 0;
    uStack_b0 = uVar20;
    pdb_141502000(&uStack_78,&bStack_b8,&UNK_143336c60,0xf);
    if ((uint)uStack_78 != 1) {
      *(uint *)(param_1 + 2) = uStack_68._4_4_;
      in_XMM0_Dc = uStack_70._4_4_;
      in_XMM0_Dd = (uint)uStack_68;
code_r0x0001417c1773:
      *(uint *)param_1 = uStack_78._4_4_;
      *(uint *)((longlong)param_1 + 4) = (uint)uStack_70;
      *(uint *)(param_1 + 1) = in_XMM0_Dc;
      *(uint *)((longlong)param_1 + 0xc) = in_XMM0_Dd;
      bVar36 = 4;
      goto code_r0x0001417c17b1;
    }
    goto code_r0x0001417c175d;
  case 0x18:
    uStack_60 = CONCAT44(uStack_44,uStack_48);
    uStack_c8 = (ulonglong *)&UNK_143336c40;
code_r0x0001417c15d8:
    uStack_c0._0_1_ = 2;
    uStack_c0._1_1_ = 0;
    uStack_c0._2_2_ = 0;
    uStack_c0._4_4_ = 0;
    pdb_141501430(&bStack_b8,&uStack_78,&UNK_143336c01,0xe);
    if (uStack_98._2_1_ != '\x02') {
      param_1[4] = CONCAT17(uStack_98._7_1_,
                            CONCAT25(uStack_98._5_2_,
                                     CONCAT14(uStack_98._4_1_,
                                              CONCAT13(uStack_98._3_1_,
                                                       CONCAT12(uStack_98._2_1_,
                                                                CONCAT11(uStack_98._1_1_,
                                                                         (byte)uStack_98))))));
      uVar18 = CONCAT22(uStack_b6,CONCAT11(cStack_b7,bStack_b8));
      in_XMM1_Qa = CONCAT44(uStack_a8._4_4_,(uint)uStack_a8);
      in_XMM0_Dc = (uint)uStack_b0;
      in_XMM0_Dd = uStack_b0._4_4_;
      in_XMM1_Qb = uStack_a0;
code_r0x0001417c178d:
      param_1[2] = in_XMM1_Qa;
      param_1[3] = (ulonglong)in_XMM1_Qb;
      *(uint *)param_1 = uVar18;
      *(uint *)((longlong)param_1 + 4) = uStack_b4;
      *(uint *)(param_1 + 1) = in_XMM0_Dc;
      *(uint *)((longlong)param_1 + 0xc) = in_XMM0_Dd;
      return param_1;
    }
    puVar21 = (ulonglong *)CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(cStack_b7,bStack_b8)));
    goto code_r0x0001417c1564;
  case 0x19:
code_r0x0001417c1639:
    *(byte *)((longlong)puVar21 + -0x77) = *(byte *)((longlong)puVar21 + -0x77) + (char)puVar28;
    uStack_c8 = (ulonglong *)&UNK_143336d68;
    uStack_c0._0_1_ = 2;
    uStack_c0._1_1_ = 0;
    uStack_c0._2_2_ = 0;
    uStack_c0._4_4_ = 0;
    pdb_1415023d0(&uStack_90,&bStack_b8,&UNK_143336d50,0x11);
    if (uStack_90 != 1) {
      *(uint *)(param_1 + 1) = uStack_84;
      *param_1 = CONCAT44(uStack_88,CONCAT13(uStack_89,CONCAT21(uStack_8b,uStack_8c)));
      bVar36 = 3;
      goto code_r0x0001417c17b1;
    }
    uStack_70 = (byte *)CONCAT44(uStack_84,uStack_88);
code_r0x0001417c175d:
    *param_1 = (ulonglong)uStack_70;
    bVar36 = 5;
code_r0x0001417c17b1:
    *(byte *)((longlong)param_1 + 0x22) = bVar36;
    return param_1;
  case 0x1a:
code_r0x0001417c1832:
    puVar21 = (ulonglong *)CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(cStack_b7,bStack_b8)));
code_r0x0001417c1564:
    *param_1 = (ulonglong)puVar21;
    *(byte *)((longlong)param_1 + 0x22) = 5;
    return param_1;
  case 0x1b:
    goto code_r0x0001417c18de;
  case 0x1c:
    uStack_98._1_1_ = uStack_98._1_1_ + bVar36 + bVar65;
    goto LAB_1417c1875;
  case 0x1d:
    puVar21 = (ulonglong *)(ulonglong)(byte)(bVar36 + 0x81);
    goto LAB_1417c1875;
  case 0x1e:
code_r0x0001417c1857:
    puVar21 = uStack_a0;
code_r0x0001417c185c:
    puVar35 = param_2;
    if ((char)puVar28 == '\a') goto code_r0x0001417c1861;
LAB_1417c1875:
    uStack_c0._1_1_ = uStack_98._1_1_;
    uStack_c0._2_2_ =
         (undefined2)(CONCAT12(uStack_98._3_1_,CONCAT11(uStack_98._2_1_,uStack_98._1_1_)) >> 8);
    uStack_c0._4_4_ = CONCAT31(CONCAT12(uStack_98._7_1_,uStack_98._5_2_),uStack_98._4_1_);
    bStack_b8 = (byte)uStack_90;
    cStack_b7 = (char)(uStack_90 >> 8);
    uStack_b6 = (undefined2)(uStack_90 >> 0x10);
    uStack_b0._0_4_ = uStack_88;
    uStack_c0._0_1_ = (byte)puVar28;
    uVar20 = (ulonglong)puVar21 & 0xff;
    puVar28 = (ulonglong *)&UNK_143337718;
    uVar31 = (ulonglong)*(int *)(&UNK_143337718 + uVar20 * 4);
    bVar65 = 0xfffffffebccc88e7 < uVar31;
    puVar21 = (ulonglong *)(&UNK_143337718 + uVar31);
    bVar63 = puVar21 == (ulonglong *)0x0;
    bVar64 = (POPCOUNT((ulonglong)puVar21 & 0xff) & 1U) == 0;
    cVar14 = (char)puVar21;
    param_2 = puVar28;
    puVar44 = &stack0xffffffffffffff18;
    puVar46 = &stack0xffffffffffffff18;
    puVar24 = puVar61;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar20) {
    case 0:
code_r0x0001417c18a0:
      puVar21 = (ulonglong *)pdb_140de26b0(&uStack_c0);
      if (puVar21 == (ulonglong *)0x0) {
        *param_1 = 0;
        puVar21 = param_1;
code_r0x0001417c18bd:
        return puVar21;
      }
      break;
    case 1:
code_r0x0001417c1947:
      puVar21 = (ulonglong *)pdb_140de26b0(&uStack_c0);
      if (puVar21 == (ulonglong *)0x0) {
        *param_1 = 1;
        return param_1;
      }
      break;
    case 2:
code_r0x0001417c18de:
      puVar21 = (ulonglong *)pdb_140de26b0(&uStack_c0);
      if (puVar21 == (ulonglong *)0x0) {
        *param_1 = 2;
        return param_1;
      }
      break;
    case 3:
code_r0x0001417c1901:
      puVar21 = (ulonglong *)pdb_140de26b0(&uStack_c0);
      if (puVar21 == (ulonglong *)0x0) {
code_r0x0001417c1914:
        *param_1 = 3;
        return param_1;
      }
      break;
    case 4:
      puVar21 = (ulonglong *)pdb_140de26b0(&uStack_c0);
      if (puVar21 == (ulonglong *)0x0) {
        *param_1 = 4;
        return param_1;
      }
      break;
    case 5:
      puVar21 = (ulonglong *)pdb_140de26b0(&uStack_c0);
      if (puVar21 == (ulonglong *)0x0) {
        *param_1 = 5;
        return param_1;
      }
      break;
    case 6:
      pdb_141bebeb0(param_1,&uStack_c0,&UNK_143336d88,1);
      return param_1;
    case 7:
code_r0x0001417c1924:
      puVar21 = (ulonglong *)pdb_140de26b0(&uStack_c0);
code_r0x0001417c192e:
      if (puVar21 == (ulonglong *)0x0) {
        *param_1 = 7;
        return param_1;
      }
      break;
    case 8:
      puVar21 = (ulonglong *)0x43337718;
      param_2 = puVar35;
      puVar39 = &stack0xffffffffffffff18;
code_r0x0001417c1a68:
      puVar28 = (ulonglong *)((longlong)param_3 + -4);
      uVar13 = (uint)uStack_b0;
code_r0x0001417c1a6c:
      uStack_b0._0_4_ = uVar13;
      puVar44 = puVar39;
      if ((ulonglong *)0x9 < puVar28) goto code_r0x0001417c1ba4;
      goto code_r0x0001417c1a76;
    case 9:
    case 0xc:
    case 0xe:
    case 0xf:
      UNK_143337721 = UNK_143337721 + cVar14;
      bVar63 = UNK_143337721 == '\0';
      param_2 = puVar35;
      puVar43 = &uStack_60;
code_r0x0001417c1b72:
      puVar44 = puVar43;
      if (bVar63) {
code_r0x0001417c1b74:
        *(byte *)((longlong)puVar21 + 1) = 7;
code_r0x0001417c1b84:
        puVar28 = (ulonglong *)0x0;
code_r0x0001417c1b86:
        *(byte *)puVar21 = (byte)puVar28;
        return puVar21;
      }
    case 0x12:
code_r0x0001417c1ba4:
      puVar28 = param_2;
      param_1 = puVar21;
code_r0x0001417c1ba7:
      puVar21 = param_1;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x1417c1bac;
      uVar20 = pdb_142d8f140(puVar28);
      puVar21[1] = uVar20;
      *(byte *)puVar21 = 1;
code_r0x0001417c1bba:
      return puVar21;
    case 10:
code_r0x0001417c1b3c:
      param_2 = puVar35;
      puVar44 = &stack0xffffffffffffff18;
      if (bVar65 || bVar63) {
        bVar36 = in((short)param_2);
        *unaff_RDI = bVar36;
        uVar18 = *(int *)((longlong)puVar21 + 0x33) * -0x49f0bbf6;
        pbVar34 = (byte *)((ulonglong)uVar18 - 0x7d);
        *pbVar34 = *pbVar34 | (byte)uVar18;
        UNRECOVERED_JUMPTABLE_00 = (code *)swi(1);
        puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
        return puVar28;
      }
      goto code_r0x0001417c1ba4;
    case 0xb:
code_r0x0001417c1aa8:
      param_2 = puVar35;
      puVar44 = puVar40;
      if (*(longlong *)((longlong)param_2 + 5) == 0x776f646e69576567 && puVar28 == (ulonglong *)0x0)
      {
code_r0x0001417c1abf:
        *(byte *)((longlong)puVar21 + 1) = 0;
        goto code_r0x0001417c1b84;
      }
      goto code_r0x0001417c1ba4;
    case 0xd:
      out((uint)*param_1,(short)puVar35);
      param_2 = puVar35;
code_r0x0001417c1b1c:
      if (bVar63) goto code_r0x0001417c1b86;
code_r0x0001417c1b1e:
      puVar44 = (undefined8 *)(ulonglong)(uint)(*(int *)((longlong)unaff_RBX + 0x57) * 0xa334869);
      if ((uint)param_2[1] == 0x776f646e && puVar28 == (ulonglong *)0x0) {
        *(byte *)((longlong)puVar21 + 1) = 1;
        goto code_r0x0001417c1b84;
      }
      goto code_r0x0001417c1ba4;
    case 0x10:
code_r0x0001417c1af8:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      param_2 = puVar35;
      puVar41 = &stack0xffffffffffffff18;
code_r0x0001417c1afc:
      puVar28 = (ulonglong *)(ulonglong)((uint)*param_2 ^ 0x74756c43);
      puVar42 = puVar41;
code_r0x0001417c1b03:
      puVar44 = puVar42;
      if (*(int *)((longlong)param_2 + 3) == 0x72657474 && (int)puVar28 == 0) {
        *(byte *)((longlong)puVar21 + 1) = 6;
        goto code_r0x0001417c1b84;
      }
      goto code_r0x0001417c1ba4;
    case 0x11:
code_r0x0001417c1a76:
      UNRECOVERED_JUMPTABLE_00 =
           (code *)(&UNK_143337738 + *(int *)(&UNK_143337738 + (longlong)puVar28 * 4));
code_r0x0001417c1a84:
                    /* WARNING: Could not recover jumptable at 0x0001417c1a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
      return puVar28;
    case 0x13:
      if (bVar63) {
        if (((int)puVar35 != 0) && ((byte)*puVar35 != 0x12)) {
code_r0x0001417c1c24:
          uVar20 = pdb_142deedc0(puVar35,(longlong)&uStack_c0 + 7,&UNK_143396738);
          param_1[1] = uVar20;
          *(uint *)param_1 = 1;
          return param_1;
        }
        uVar20 = 0x200000000;
      }
      else {
        *(undefined1 *)((longlong)&stack0xffffffffffffff18 + (longlong)puVar21) = 0;
        if ((byte)puVar35 != (byte)*puVar35) goto code_r0x0001417c1c24;
        uVar20 = 0x300000000;
      }
      *param_1 = uVar20;
      return param_1;
    case 0x14:
      goto code_r0x0001417c1bba;
    case 0x15:
                    /* WARNING: Could not emulate address calculation at 0x0001417c1be3 */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ulonglong *)
                (*(code *)(&UNK_143337760 + *(int *)(&UNK_143337760 + (longlong)puVar21 * 4)))
                          (&UNK_143337760,uStack_88);
      return puVar28;
    case 0x16:
      uVar20 = pdb_142deedc0(puVar35,(longlong)&uStack_b4 + 3);
      param_1[1] = uVar20;
      *(uint *)param_1 = 2;
      return param_1;
    case 0x17:
code_r0x0001417c1e92:
      param_2 = puVar35;
      puVar39 = &stack0xffffffffffffff18;
      if (bVar63) {
code_r0x0001417c1e98:
        puVar39 = &stack0xffffffffffffff18;
        if (((*(byte *)((longlong)param_2 + 4) == 0x61) &&
            (puVar39 = &stack0xffffffffffffff18, *(byte *)((longlong)param_2 + 5) == 100)) &&
           (puVar35 = param_2, puVar39 = &stack0xffffffffffffff18,
           *(byte *)((longlong)param_2 + 6) == 0x65)) {
code_r0x0001417c1eb6:
          puVar39 = &stack0xffffffffffffff18;
          if ((*(byte *)((longlong)puVar35 + 7) == 0x53) &&
             (puVar39 = &stack0xffffffffffffff18, (byte)puVar35[1] == 0x68))
          goto code_r0x0001417c1eca;
        }
      }
      goto LAB_1417c1f58;
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
      return param_1;
    case 0x20:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    case 0x22:
      uVar13 = (uint)uStack_b0;
      if (bVar64) {
code_r0x0001417c1eb5:
        uStack_b0._0_4_ = uVar13;
        *(byte *)((longlong)puVar21 + 0xf53077a) =
             *(byte *)((longlong)puVar21 + 0xf53077a) + (char)puVar21;
        bVar63 = true;
        param_2 = puVar35;
        if ((POPCOUNT((uint)puVar21[-0x10000000] & (uint)unaff_RBX & 0xff) & 1U) == 0) {
code_r0x0001417c1ecb:
          if (!bVar63) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          bVar36 = (byte)((ulonglong)param_2 >> 8) | *(byte *)((longlong)puVar21 + 0x75);
          pcVar29 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                     CONCAT11(bVar36,(char)param_2));
          if ((char)bVar36 < '\x01') {
            *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
            puVar39 = &stack0xffffffffffffff18;
            if (pcVar29[1] == 'o') {
              *(undefined2 *)param_1 = 0;
              return param_1;
            }
          }
          else if ((POPCOUNT(bVar36) & 1U) == 0) {
            *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
            puVar39 = &stack0xffffffffffffff18;
            if (((*pcVar29 == 'Y') && (puVar39 = &stack0xffffffffffffff18, pcVar29[1] == 'e')) &&
               (puVar39 = &stack0xffffffffffffff18, pcVar29[2] == 's')) {
              *(undefined2 *)param_1 = 0x100;
              return param_1;
            }
          }
          else {
            puVar39 = &stack0xffffffffffffff18;
            if (bVar36 == 0) goto code_r0x0001417c1ee0;
          }
        }
        else {
          puVar45 = (undefined8 *)&stack0xffffffffffffff10;
          *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
code_r0x0001417c1eca:
          puVar39 = puVar45;
          if ((*(byte *)((longlong)puVar35 + 9) == 0x61) &&
             (*(byte *)((longlong)puVar35 + 10) == 0x70)) {
            bVar36 = *(byte *)((longlong)puVar35 + 0xb);
joined_r0x0001417c1f56:
            puVar39 = puVar45;
            if (bVar36 == 0x65) {
code_r0x0001417c1ee0:
              *(undefined2 *)param_1 = 0x200;
              return param_1;
            }
          }
        }
      }
      else {
        puVar39 = &stack0xffffffffffffff18;
        if (bVar63) goto code_r0x0001417c1eb6;
      }
LAB_1417c1f58:
      *(undefined8 *)((longlong)puVar39 + -8) = 0x1417c1f61;
      pdb_140f35800(&uStack_88);
      uStack_70 = (byte *)CONCAT44(uStack_7c,iStack_80);
      puVar46 = puVar39;
code_r0x0001417c1f7a:
      *(undefined8 *)((longlong)puVar46 + -8) = 0x1417c1f7f;
      uVar20 = pdb_142d8f140();
      param_1[1] = uVar20;
code_r0x0001417c1f84:
      *(byte *)param_1 = 1;
      puVar47 = puVar46;
code_r0x0001417c1f87:
      if (0 < (longlong)CONCAT44(uStack_84,uStack_88)) {
        *(undefined8 *)((longlong)puVar47 + -8) = 0x1417c1f9f;
        pub_1406abac0(uStack_70,CONCAT44(uStack_84,uStack_88),1);
      }
      return param_1;
    case 0x23:
      goto code_r0x0001417c1f7a;
    case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2e:
      uVar19 = pdb_142d8f140(puVar35,param_3,&UNK_1433368f0,4);
      *(undefined8 *)(&UNK_143337720 + uVar31) = uVar19;
      *(byte *)puVar21 = 1;
      return puVar21;
    case 0x2d:
      goto code_r0x0001417c1f87;
    case 0x2f:
code_r0x0001417c1fbf:
      uVar20 = puVar61[-4];
      if (0 < (longlong)uVar20) {
        pbVar34 = (byte *)puVar61[-1];
        *(undefined8 *)((longlong)puVar48 + -8) = 0x1417c1fd7;
        pub_1406abac0(pbVar34,uVar20,1);
        puVar21 = extraout_RAX;
      }
      return puVar21;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x36:
      *(uint *)puVar21 = (uint)*puVar21 + (int)puVar21;
      *(byte *)puVar21 = (byte)*puVar21 + cVar14;
      *(byte *)puVar21 = (byte)*puVar21 + cVar14;
    case 0x35:
      *(char *)(uVar31 + 0x1b8f4b060) = *(char *)(uVar31 + 0x1b8f4b060) + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x33:
      goto pdb_140f679a0;
    case 0x34:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x43:
    case 0x45:
code_r0x0001417c2daa:
      return puVar21;
    case 0x48:
      puVar50 = &uStack_110;
      puVar61 = puVar35 + 8;
      puVar21 = (ulonglong *)(puVar35[6] * 2);
      goto code_r0x0001417c2e2a;
    case 0x4a:
      *(byte *)param_3 = (byte)*param_3 + (char)param_3;
      *(byte *)puVar21 = (byte)*puVar21 + cVar14;
code_r0x0001417c2e2a:
      puVar28 = (ulonglong *)0x0;
      if (puVar21 != (ulonglong *)0x0) {
        pbVar34 = *(byte **)(puVar61[-3] + 8);
        uVar20 = puVar61[-2];
        *(undefined **)((longlong)puVar50 + -8) = &UNK_1417c2e46;
        pub_1406abac0(pbVar34,uVar20,1);
        puVar28 = extraout_RAX_01;
      }
      return puVar28;
    case 0x4b:
code_r0x0001417c2dc3:
      puStack_d8 = puVar35;
      puVar49 = &uStack_110;
      puVar61 = puVar35 + 8;
      puVar28 = (ulonglong *)puVar35[5];
      param_2 = (ulonglong *)puVar28[2];
code_r0x0001417c2de6:
      if (param_2 != (ulonglong *)0x0) {
        pbVar34 = (byte *)puVar61[-2];
        *(undefined **)((longlong)puVar49 + -8) = &UNK_1417c2dfe;
        pub_1406abac0(pbVar34,(longlong)param_2 << 5,8);
        puVar28 = extraout_RAX_00;
      }
      return puVar28;
    case 0x4c:
      puVar1 = (uint *)(&UNK_1433376eb + uVar31);
      *puVar1 = *puVar1 >> 6 | *puVar1 << 0x1a;
      puVar52 = &stack0xffffffffffffff18;
code_r0x0001417c31c2:
      in_R11 = (ulonglong *)((ulonglong)in_R11 | (ulonglong)param_1);
      param_2 = puVar35;
LAB_1417c31c5:
      puVar28 = (ulonglong *)(ulonglong)(uint)((int)param_3 * 8);
      puVar53 = puVar52;
code_r0x0001417c31cd:
      in_R11 = (ulonglong *)((longlong)in_R11 << ((byte)puVar28 & 0x3f) | param_2[7]);
      param_2[7] = (ulonglong)in_R11;
      puVar35 = param_2;
      puVar54 = puVar53;
    case 0x4e:
      param_2 = puVar35;
      if (in_R10 < (ulonglong *)0x5) {
        puVar28 = (ulonglong *)param_2[3];
        puVar55 = puVar54;
code_r0x0001417c31f0:
        uVar31 = (ulonglong)puVar28 ^ (ulonglong)in_R11;
        uVar20 = param_2[2];
        puVar21 = (ulonglong *)(*param_2 + uVar20);
        unaff_RDI = (byte *)(param_2[1] + uVar31);
        puVar28 = (ulonglong *)(uVar31 << 0x10 | uVar31 >> 0x30);
        param_1 = (ulonglong *)((uVar20 << 0xd | uVar20 >> 0x33) ^ (ulonglong)puVar21);
        puVar56 = puVar55;
code_r0x0001417c320f:
        uVar20 = (ulonglong)puVar28 ^ (ulonglong)unaff_RDI;
        unaff_RDI = unaff_RDI + (longlong)param_1;
        puVar21 = (ulonglong *)(((longlong)puVar21 << 0x20 | (ulonglong)puVar21 >> 0x20) + uVar20);
        param_2[2] = ((longlong)param_1 << 0x11 | (ulonglong)param_1 >> 0x2f) ^ (ulonglong)unaff_RDI
        ;
        uVar20 = uVar20 << 0x15 | uVar20 >> 0x2b;
code_r0x0001417c322b:
        param_2[3] = uVar20 ^ (ulonglong)puVar21;
        param_2[1] = (longlong)unaff_RDI << 0x20 | (ulonglong)unaff_RDI >> 0x20;
        *param_2 = (ulonglong)puVar21 ^ (ulonglong)in_R11;
        bVar63 = param_3 == (ulonglong *)0x8;
code_r0x0001417c3244:
        puVar59 = puVar56;
        if (bVar63) {
          param_3 = (ulonglong *)0x4;
          in_R10 = (ulonglong *)0x0;
          puVar21 = (ulonglong *)0x4;
        }
        else {
LAB_1417c32a6:
          param_3 = (ulonglong *)((longlong)param_3 + -4);
          puVar21 = (ulonglong *)0x0;
          param_4 = (ulonglong *)0x0;
          puVar57 = puVar59;
          if ((ulonglong *)0x1 < param_3) {
LAB_1417c3260:
            param_4 = (ulonglong *)
                      ((ulonglong)param_4 |
                      (ulonglong)
                      *(ushort *)
                       ((longlong)puVar21 +
                       (longlong)((undefined1 *)((longlong)puVar57 + (longlong)in_R10) + 4)) <<
                      ((char)puVar21 * '\b' & 0x3fU));
            puVar21 = (ulonglong *)((ulonglong)puVar21 | 2);
            puVar59 = puVar57;
          }
        }
LAB_1417c327e:
        if (puVar21 < param_3) {
          in_R10 = (ulonglong *)((longlong)in_R10 + (longlong)puVar21);
          puVar58 = puVar59;
code_r0x0001417c3286:
          uVar18 = (int)puVar21 << 3;
          puVar21 = (ulonglong *)(ulonglong)uVar18;
          in_R10 = (ulonglong *)
                   ((ulonglong)(byte)((undefined1 *)((longlong)puVar58 + 4))[(longlong)in_R10] <<
                   ((byte)uVar18 & 0x3f));
code_r0x0001417c3294:
          param_4 = (ulonglong *)((ulonglong)param_4 | (ulonglong)in_R10);
        }
        param_2[7] = (ulonglong)param_4;
      }
      else {
        param_3 = (ulonglong *)((longlong)param_3 + 4);
      }
      param_2[8] = (ulonglong)param_3;
code_r0x0001417c329f:
      return puVar21;
    case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x50:
code_r0x0001417c32ca:
      puVar32 = (ulonglong *)
                CONCAT71((int7)((ulonglong)puVar28 >> 8),
                         (byte)puVar28 & *(byte *)((longlong)puVar24 + (longlong)puVar28 * 4 + 0x41)
                        );
      *(int *)((longlong)puVar24 + 0x31) = *(int *)((longlong)puVar24 + 0x31) + 1;
      param_2 = puVar35;
code_r0x0001417c32d1:
      puVar28 = param_2;
      if ((ulonglong *)0x1 < puVar32) {
        param_4 = param_3;
      }
      param_2 = (ulonglong *)&UNK_143337848;
code_r0x0001417c32e4:
      param_3 = (ulonglong *)(longlong)(int)*(uint *)((longlong)param_2 + (longlong)param_4 * 4);
      goto code_r0x0001417c32e8;
    case 0x51:
code_r0x0001417c3347:
      puVar28 = (ulonglong *)pdb_140f66090(puVar28,&UNK_143336a6b,5,&bStack_b8);
      return puVar28;
    case 0x52:
      goto code_r0x0001417c337c;
    case 0x53:
code_r0x0001417c3315:
      uStack_c8 = (ulonglong *)CONCAT44(uStack_c8._4_4_,(int)puVar21);
      puVar28 = (ulonglong *)pdb_140f66090(puVar28,&UNK_143336a64,7,&bStack_b8);
      return puVar28;
    case 0x54:
      *(int *)((longlong)param_1 + 99) = *(int *)((longlong)param_1 + 99) + 0x43337718;
      param_2 = puVar35;
code_r0x0001417c32e8:
                    /* WARNING: Could not recover jumptable at 0x0001417c32eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ulonglong *)(*(code *)((longlong)param_3 + (longlong)param_2))(puVar28);
      return puVar28;
    case 0x55:
      return puVar21;
    case 0x56:
code_r0x0001417c337c:
      puVar28 = (ulonglong *)pdb_140f66090();
      return puVar28;
    case 0x57:
      if (bVar64) {
        puVar21 = (ulonglong *)(**(code **)(uVar31 + 0x17bf7fa60))();
      }
code_r0x0001417c3335:
      return puVar21;
    case 0x58:
      puVar28 = (ulonglong *)((ulonglong)&uStack_a8 & 0xffffffff);
code_r0x0001417c34d3:
      uStack_c0._0_1_ = (byte)puVar28;
      uStack_c0._1_1_ = (char)((ulonglong)puVar28 >> 8);
      uStack_c0._2_2_ = (undefined2)((ulonglong)puVar28 >> 0x10);
      uStack_c0._4_4_ = (undefined4)((ulonglong)puVar28 >> 0x20);
      uStack_c8 = (ulonglong *)0x2;
    case 0x5c:
code_r0x0001417c34ef:
      puVar28 = (ulonglong *)pdb_140f66e50(puVar21);
      return puVar28;
    case 0x59:
code_r0x0001417c3564:
code_r0x0001417c356a:
      puVar28 = (ulonglong *)pdb_140f66090(puVar21);
      return puVar28;
    case 0x5a:
code_r0x0001417c3519:
      puVar28 = puVar35;
      goto pdb_140f679a0;
    case 0x5b:
      goto pdb_140f679a0;
    case 0x5d:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    case 0x5e:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    case 0x5f:
    case 0x60:
    case 0x61:
      uRam00000000e5637560 = (undefined1)((ulonglong)puVar21 >> 8);
      param_1 = (ulonglong *)CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 + 1);
      puVar21 = (ulonglong *)(ulonglong)uRama1a7fe48a1e9fe48;
      *(byte *)((longlong)puVar35 + -0x5e) = *(byte *)((longlong)puVar35 + -0x5e) + 1;
      *(byte *)puVar35 = (byte)*puVar35 - 1;
    case 0x62:
    case 99:
    case 100:
    case 0x65:
      *(byte *)((longlong)puVar21 + 0x2ffe48a1) = *(byte *)((longlong)puVar21 + 0x2ffe48a1) - 1;
      uRama20cfe48a275fe48 = SUB81(puVar21,0);
      uRama1e9fe48a1c6fe48 = uRama20cfe48a275fe48;
      unaff_RDI[0x52fe48a1] = unaff_RDI[0x52fe48a1] + 1;
      *(byte *)((longlong)param_1 + -0x5d) = *(byte *)((longlong)param_1 + -0x5d) - 1;
      *(byte *)((longlong)param_1 + -0x5c) = *(byte *)((longlong)param_1 + -0x5c) + 1;
      *(byte *)((longlong)puVar21 + 0x56fe48a3) = *(byte *)((longlong)puVar21 + 0x56fe48a3) + 1;
      *unaff_RDI = (byte)*param_1;
      *(byte *)unaff_RBX = (byte)*unaff_RBX + 1;
      unaff_RDI[1] = *(byte *)((longlong)param_1 + 1);
      *(byte *)((longlong)param_1 + -0x5a) = *(byte *)((longlong)param_1 + -0x5a) + 1;
      *(byte *)((longlong)param_1 + -0x5a) = *(byte *)((longlong)param_1 + -0x5a) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x0001417c1861:
    param_1[1] = (ulonglong)puVar21;
    *param_1 = 8;
    return param_1;
  case 0x1f:
    goto code_r0x0001417c1901;
  case 0x20:
    goto code_r0x0001417c1924;
  case 0x21:
    if (!SCARRY8(uVar31,0x1433376b0)) {
      return puVar21;
    }
    goto code_r0x0001417c1914;
  case 0x22:
    if (!bVar63) {
      puVar21 = (ulonglong *)CONCAT71(uVar25,bVar36 + 0x41);
code_r0x0001417c1a04:
      puVar28 = param_2;
      if ((int)param_4 == 0x72 && *(byte *)((longlong)param_2 + 4) == 0) goto code_r0x0001417c1a11;
      goto LAB_1417c1a25;
    }
    puVar39 = (undefined8 *)&stack0xfffffffffffffef8;
    puVar21 = (ulonglong *)&UNK_1433376b0;
    goto code_r0x0001417c1a68;
  case 0x23:
  case 0x26:
  case 0x28:
  case 0x29:
    if (bVar63) goto code_r0x0001417c1b6f;
    puVar44 = &stack0xffffffffffffff18;
    if (bVar65) goto code_r0x0001417c1ba4;
    puVar28 = (ulonglong *)(ulonglong)(*(uint *)((longlong)param_2 + 3) ^ 0x433376b0);
    goto code_r0x0001417c1b03;
  case 0x24:
    if ((longlong)puVar21 < 0) goto code_r0x0001417c1ad6;
    out((uint)*param_1,(short)param_2);
    goto code_r0x0001417c1b1c;
  case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
code_r0x0001417c1ab3:
    uStack_b0._0_4_ = uVar13;
    puVar28 = (ulonglong *)(ulonglong)((uint)puVar28 ^ *(uint *)((longlong)param_2 + 5));
    puVar35 = param_2;
    puVar40 = &stack0xffffffffffffff18;
    goto code_r0x0001417c1aa8;
  case 0x2a:
    *(byte *)puVar21 = (byte)*puVar21 + bVar36;
    (&UNK_1433376b1)[uVar31] = 5;
    goto code_r0x0001417c1b84;
  case 0x2b:
    *(uint *)unaff_RBX = (uint)*unaff_RBX + uVar18;
code_r0x0001417c1a11:
    *(byte *)((longlong)puVar21 + 1) = 3;
    *(byte *)puVar21 = 0;
    return puVar21;
  case 0x2c:
    goto code_r0x0001417c1b3c;
  case 0x2d:
    puVar21 = (ulonglong *)CONCAT71(uVar25,bVar36 + 0x31);
    goto code_r0x0001417c1b86;
  case 0x2e:
    puVar44 = &stack0xffffffffffffff18;
    goto code_r0x0001417c1ba4;
  case 0x2f:
    bVar63 = false;
    puVar43 = &stack0xffffffffffffff18;
    goto code_r0x0001417c1b72;
  case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3b:
    goto code_r0x0001417c1e98;
  case 0x3a:
    puVar21 = (ulonglong *)((ulonglong)param_1 & 0xffffffff);
code_r0x0001417c1db8:
    return puVar21;
  case 0x3c:
code_r0x0001417c1e42:
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar28 = (ulonglong *)&UNK_143337770;
    puVar21 = (ulonglong *)(longlong)*(int *)(&UNK_143337770 + (longlong)puVar21 * 4);
code_r0x0001417c1e4f:
                    /* WARNING: Could not recover jumptable at 0x0001417c1e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)(*(code *)((longlong)puVar21 + (longlong)puVar28))();
    return puVar28;
  case 0x3d:
    puVar39 = &stack0xffffffffffffff18;
    if ((*(byte *)((longlong)param_2 + 3) == 0x69) &&
       (puVar39 = &stack0xffffffffffffff18, *(byte *)((longlong)param_2 + 4) == 100)) {
code_r0x0001417c1f22:
      puVar39 = &stack0xffffffffffffff18;
      if ((*(byte *)((longlong)param_2 + 5) == 0x45) &&
         (((puVar39 = &stack0xffffffffffffff18, *(byte *)((longlong)param_2 + 6) == 0x6e &&
           (puVar39 = &stack0xffffffffffffff18, *(byte *)((longlong)param_2 + 7) == 99)) &&
          (puVar39 = &stack0xffffffffffffff18, (byte)param_2[1] == 0x6c))))
      goto code_r0x0001417c1f3a;
    }
    goto LAB_1417c1f58;
  case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x48:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x47:
    puVar39 = &stack0xffffffffffffff18;
    if (bVar63) goto code_r0x0001417c1f22;
    goto LAB_1417c1f58;
  case 0x49:
    (&UNK_14333763d)[uVar31] = 0xb0;
    puVar28 = (ulonglong *)&UNK_1433376af;
    if (!bVar63) goto code_r0x0001417c1f45;
    goto code_r0x0001417c1f5d;
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x50:
    if ((POPCOUNT((ulonglong)puVar21 & 0xff) & 1U) != 0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar28;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x4d:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x4e:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  case 0x4f:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar28;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5d:
  case 0x5f:
code_r0x0001417c2d43:
    pdb_1409a45e0(puVar28);
    puVar21 = (ulonglong *)CONCAT44(uStack_7c,iStack_80);
    if (SBORROW8(0,(longlong)uStack_78)) {
      return puVar21;
    }
    if (uStack_78 == (ulonglong *)0x0) {
      return puVar21;
    }
  case 0x65:
code_r0x0001417c2d5b:
    uVar20 = 1;
    puVar28 = (ulonglong *)puVar21[1];
code_r0x0001406abac0:
    if (0x10 < uVar20) {
      puVar28 = (ulonglong *)puVar28[-1];
    }
    puStack_e0 = &UNK_140f3c37e;
    uStack_b0._0_4_ = iVar9;
    uStack_b0._4_4_ = uVar11;
    uVar19 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)HeapFree(uVar19,0,puVar28);
    return puVar28;
  case 0x62:
    return puVar21;
  case 100:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x66:
    *(byte *)puVar21 = (byte)*puVar21 + bVar36;
    UNK_14333766a = UNK_14333766a + bVar36;
    *(byte *)puVar21 = (byte)*puVar21 | bVar36;
    *(byte *)puVar21 = (byte)*puVar21 + bVar36;
    in_R10 = (ulonglong *)((longlong)in_R10 - (longlong)param_3);
    in_R11 = (ulonglong *)0x0;
    unaff_RDI = (byte *)0x0;
    bVar65 = in_R10 < (ulonglong *)0x4;
    param_1 = (ulonglong *)0x4;
  case 0x68:
    if (bVar65) {
      param_1 = in_R10;
    }
    param_4 = (ulonglong *)0x433376b0;
    if (!bVar65) {
      in_R11 = param_4;
    }
    iVar26 = (int)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),!bVar65);
    puVar21 = (ulonglong *)(ulonglong)(uint)(iVar26 * 4);
    if (iVar26 * 4 + 1U < (uint)param_1) {
      puVar28 = (ulonglong *)0x0;
      puVar51 = &stack0xffffffffffffff18;
code_r0x0001417c3193:
      in_R11 = (ulonglong *)
               ((ulonglong)in_R11 |
               (ulonglong)
               *(ushort *)
                ((longlong)puVar51 +
                CONCAT71((int7)((ulonglong)puVar28 >> 8),(ulonglong *)0x3 < in_R10) * 4 + 4) <<
               ((char)puVar21 * '\b' & 0x3fU));
code_r0x0001417c31ac:
      puVar21 = (ulonglong *)((ulonglong)puVar21 | 2);
      puVar52 = puVar51;
    }
    if (puVar21 < param_1) {
      pbVar34 = (undefined1 *)((longlong)puVar52 + 4) + (longlong)puVar21;
      uVar18 = (int)puVar21 << 3;
      puVar21 = (ulonglong *)(ulonglong)uVar18;
      param_1 = (ulonglong *)((ulonglong)*pbVar34 << ((byte)uVar18 & 0x3f));
      puVar35 = param_2;
      goto code_r0x0001417c31c2;
    }
    goto LAB_1417c31c5;
  case 0x67:
    UNK_143337683 = UNK_143337683 + -0x50;
    goto code_r0x0001417c31cd;
  case 0x69:
    puVar21 = (ulonglong *)(CONCAT71(uVar25,bVar36 + 0x8d) | 0xc5);
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
    puVar51 = &stack0xffffffffffffff18;
    goto code_r0x0001417c3193;
  case 0x6a:
    puVar21 = (ulonglong *)((ulonglong)puVar21 | 0x14);
    goto LAB_1417c3260;
  case 0x6b:
    goto code_r0x0001417c32e4;
  case 0x6c:
    goto code_r0x0001417c3294;
  case 0x6d:
    goto LAB_1417c32a6;
  case 0x6e:
    puVar21 = (ulonglong *)(ulonglong)(uVar18 | 2);
    puVar59 = &stack0xffffffffffffff18;
    goto LAB_1417c327e;
  case 0x6f:
    uStack_c8 = puVar21;
    goto code_r0x0001417c337c;
  case 0x70:
    *(int *)(&UNK_143337639 + uVar31) = *(int *)(&UNK_143337639 + uVar31) + 0x433376b0;
    puVar21 = (ulonglong *)((ulonglong)puVar21 & 0xffffffffffffff20);
    goto code_r0x0001417c3315;
  case 0x71:
    puStack_138 = &stack0xffffffffffffff10;
    puVar21 = (ulonglong *)&stack0xffffffffffffff10;
    puVar24 = (ulonglong *)&stack0xffffffffffffff10;
    cVar14 = '\b';
    do {
      puVar61 = puVar61 + -1;
      puVar21 = puVar21 + -1;
      *puVar21 = *puVar61;
      cVar14 = cVar14 + -1;
    } while ('\0' < cVar14);
    goto code_r0x0001417c32ca;
  case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x73:
    puVar28 = (ulonglong *)(**(code **)(uVar31 + 0x18bf7f9f8))();
    return puVar28;
  case 0x74:
    goto pdb_140f679a0;
  case 0x75:
    puVar21 = (ulonglong *)((ulonglong)puVar21 & 0xffffffffffffff30);
    puVar28 = &uStack_a8;
    goto code_r0x0001417c34d3;
  case 0x76:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x77:
    puStack_170 = &stack0xffffffffffffff10;
    puVar28 = (ulonglong *)&stack0xffffffffffffff10;
    cVar14 = '\x0f';
    do {
      puVar61 = puVar61 + -1;
      puVar28 = puVar28 + -1;
      *puVar28 = *puVar61;
      cVar14 = cVar14 + -1;
    } while ('\0' < cVar14);
    goto code_r0x0001417c3519;
  case 0x78:
    pbVar34 = &UNK_143337639 + uVar31;
    *pbVar34 = *pbVar34 >> 1 | *pbVar34 << 7;
    puVar21 = (ulonglong *)((ulonglong)puVar21 & 0xffffffffffffff30);
    uStack_c8 = (ulonglong *)&UNK_1433371d0;
    goto code_r0x0001417c3564;
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    *(byte *)(param_1 + 0xa199bb58) = (byte)param_1[0xa199bb58] + 1;
    *(byte *)((longlong)unaff_RBX + -0x5c01b772) = *(byte *)((longlong)unaff_RBX + -0x5c01b772) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}

