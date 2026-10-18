// VA 0x14041ce20, PDB extent 3319 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::systems::camera_rig::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140421188) overlaps instruction at (ram,0x000140421186)
    */
/* WARNING: Removing unreachable block (ram,0x000140421590) */
/* WARNING: Removing unreachable block (ram,0x00014042159c) */
/* WARNING: Removing unreachable block (ram,0x0001404215ad) */
/* WARNING: Removing unreachable block (ram,0x0001404215b7) */
/* WARNING: Removing unreachable block (ram,0x0001404215c7) */
/* WARNING: Removing unreachable block (ram,0x0001404215d1) */
/* WARNING: Removing unreachable block (ram,0x0001404215e5) */
/* WARNING: Removing unreachable block (ram,0x000140421680) */
/* WARNING: Removing unreachable block (ram,0x00014042168a) */
/* WARNING: Removing unreachable block (ram,0x0001404216ec) */
/* WARNING: Removing unreachable block (ram,0x000140422804) */
/* WARNING: Removing unreachable block (ram,0x00014042212f) */
/* WARNING: Removing unreachable block (ram,0x00014042217e) */
/* WARNING: Removing unreachable block (ram,0x000140422181) */
/* WARNING: Removing unreachable block (ram,0x000140422400) */
/* WARNING: Removing unreachable block (ram,0x000140421222) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::systems::camera_rig::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 3319 */

code * pdb_14041ce20(code *param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5
                    ,undefined8 param_6,uint param_7,undefined4 param_8,code *param_9,code *param_10
                    ,code *param_11,code *param_12,code *param_13,code *param_14,code *param_15,
                    undefined8 param_16,code *param_17,code *param_18)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  code *pcVar11;
  code *extraout_RAX;
  longlong lVar12;
  undefined6 uVar16;
  undefined7 uVar15;
  undefined4 *puVar14;
  undefined4 uVar17;
  undefined2 uVar22;
  undefined8 *puVar18;
  undefined *puVar19;
  code *pcVar20;
  code *pcVar21;
  undefined2 uVar23;
  uint uVar24;
  code *pcVar25;
  int iVar26;
  code *unaff_RBX;
  code *pcVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  code *unaff_RSI;
  code *unaff_RDI;
  code *pcVar33;
  code *pcVar34;
  code *in_R10;
  code *in_R11;
  code cVar35;
  code *unaff_R15;
  undefined2 in_ES;
  char cVar36;
  bool bVar37;
  bool bVar38;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 uVar39;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  int unaff_XMM6_Da;
  int unaff_XMM7_Da;
  int unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  int unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  uint unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 uStack_1a8;
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  longlong lStack_1a0;
  code *pcStack_188;
  code *pcStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *pcVar13;
  
  puVar28 = &uStack_1a8;
  puVar29 = &uStack_1a8;
  puVar31 = &uStack_1a8;
  puVar14 = &uStack_1a8;
  puVar30 = &uStack_1a8;
  uStack_50 = (code *)CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
  uStack_68 = (code *)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
  uStack_60 = (code *)CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
  uStack_70 = (code *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
  pcStack_a0 = (code *)0xfffffffffffffffe;
  uVar6 = *(ulonglong *)(param_2 + 0x28);
  if (uVar6 < *(ulonglong *)(param_2 + 0x20)) {
    pcVar27 = (code *)0x100002600;
    do {
      uVar6 = uVar6 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar6);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x5b) {
          pcVar8 = param_2 + 0x48;
          *pcVar8 = (code)((char)*pcVar8 - 1);
          if (*pcVar8 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar6;
            pcStack_100 = (code *)CONCAT71(pcStack_100._1_7_,1);
            uStack_108 = param_2;
            uVar39 = pdb_140407e70(&uStack_d8,&uStack_108);
            if (uStack_d8._0_1_ == (code)0x1) {
LAB_14041d0ef:
              pcVar8 = pcVar27;
              uVar17 = 1;
              uStack_a8 = (code *)(ulonglong)(uint)uStack_a8;
              uStack_128 = pcStack_d0;
            }
            else {
              if (uStack_d8._1_1_ != '\x01') {
                uVar7 = 0;
LAB_14041d73b:
                pcStack_d0 = (code *)pdb_142d86de0(uVar7,&UNK_142f56bb0,&UNK_142f56898);
                uVar39 = extraout_XMM0_Da_11;
                goto LAB_14041d0ef;
              }
              uVar39 = pdb_140408970(&uStack_d8,uStack_108);
              if ((int)uStack_d8 == 1) goto LAB_14041d0ef;
              unaff_XMM7_Da = uStack_d8._4_4_;
              uVar39 = pdb_140407e70(&uStack_d8,&uStack_108);
              if (uStack_d8._0_1_ == (code)0x1) goto LAB_14041d0ef;
              if (uStack_d8._1_1_ != '\x01') {
                uVar7 = 1;
                goto LAB_14041d73b;
              }
              uVar39 = pdb_140408970(&uStack_d8,uStack_108);
              if ((int)uStack_d8 == 1) goto LAB_14041d0ef;
              uVar17 = uStack_d8._4_4_;
              uVar39 = pdb_140407e70(&uStack_d8,&uStack_108);
              if (uStack_d8._0_1_ == (code)0x1) goto LAB_14041d0ef;
              if (uStack_d8._1_1_ != '\x01') {
                uVar7 = 2;
                goto LAB_14041d73b;
              }
              uVar39 = pdb_14040f4b0(&uStack_d8,uStack_108);
              pcVar8 = pcStack_d0;
              if ((int)uStack_d8 == 1) goto LAB_14041d0ef;
              uVar3 = uStack_d8._4_4_;
              uVar39 = pdb_140407e70(&uStack_d8,&uStack_108);
              pcVar27 = pcVar8;
              if (uStack_d8._0_1_ == (code)0x1) goto LAB_14041d0ef;
              if (uStack_d8._1_1_ != '\x01') {
                uVar7 = 3;
                goto LAB_14041d73b;
              }
              uVar39 = pdb_140408970(&uStack_d8,uStack_108);
              if ((int)uStack_d8 == 1) goto LAB_14041d0ef;
              unaff_XMM8_Da = uStack_d8._4_4_;
              unaff_XMM6_Da = pdb_140a369c0();
              uVar39 = pdb_140407e70(&uStack_d8,&uStack_108);
              if (uStack_d8._0_1_ == (code)0x1) goto LAB_14041d0ef;
              unaff_XMM9_Da = 0;
              if (uStack_d8._1_1_ == '\x01') {
                uVar39 = pdb_140408970(&uStack_d8,uStack_108);
                if ((int)uStack_d8 == 1) goto LAB_14041d0ef;
                unaff_XMM9_Da = uStack_d8._4_4_;
              }
              uVar7 = pdb_140407e70(&uStack_d8,&uStack_108);
              uVar39 = extraout_XMM0_Da_00;
              if (uStack_d8._0_1_ == (code)0x1) goto LAB_14041d0ef;
              uVar39 = 0;
              if (uStack_d8._1_1_ == '\x01') {
                uVar7 = pdb_140408970(&uStack_d8,uStack_108);
                uVar39 = extraout_XMM0_Da_14;
                if ((int)uStack_d8 == 1) goto LAB_14041d0ef;
                uVar39 = uStack_d8._4_4_;
              }
              uStack_128 = (code *)CONCAT44(uVar3,uVar17);
              uVar17 = 0;
              uStack_a8 = (code *)CONCAT44((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1),
                                           (uint)uStack_a8);
            }
            param_2[0x48] = (code)((char)param_2[0x48] + 1);
            uStack_108 = (code *)CONCAT44(unaff_XMM7_Da,uVar17);
            uStack_f0 = (code *)CONCAT44(unaff_XMM6_Da,unaff_XMM8_Da);
            uStack_e8 = (code *)CONCAT44(uVar39,unaff_XMM9_Da);
            pcStack_100 = uStack_128;
            uStack_f8 = pcVar8;
            pcStack_b0 = (code *)pdb_140404e50(param_2);
            pcVar27 = pcStack_100;
            uStack_b8 = uStack_e8;
            pcStack_c8 = uStack_f8;
            uStack_c0 = uStack_f0;
            uStack_d8 = uStack_108;
            pcStack_d0 = pcStack_100;
            if (((ulonglong)uStack_108 & 1) != 0) {
              if (pcStack_b0 != (code *)0x0) {
                pdb_1404b4b10(&pcStack_b0);
              }
              goto LAB_14041d789;
            }
            pcVar27 = pcStack_b0;
            if (pcStack_b0 != (code *)0x0) goto LAB_14041d789;
            pcStack_178 = uStack_f8;
            uStack_170 = uStack_f0;
            uStack_168 = uStack_e8;
            goto LAB_14041d17b;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            pcVar27 = (code *)pdb_142d84f80(param_2,(longlong)&uStack_118 + 7,&UNK_142f57470);
            goto LAB_14041d789;
          }
          pcVar8 = param_2 + 0x48;
          *pcVar8 = (code)((char)*pcVar8 - 1);
          if (*pcVar8 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar6;
            pcStack_120 = (code *)CONCAT71(pcStack_120._1_7_,1);
            uStack_128 = param_2;
            iStack_78 = unaff_XMM8_Da;
            uStack_74 = unaff_XMM8_Db;
            uStack_54 = unaff_XMM10_Db;
            pcVar8 = (code *)pdb_140407a40(&uStack_d8,&uStack_128);
            pcVar21 = pcStack_d0;
            uVar39 = extraout_XMM0_Da;
            pcVar11 = uStack_e0;
            if (uStack_d8._0_1_ != (code)0x0) goto LAB_14041cf15;
            uStack_a8 = (code *)((ulonglong)uStack_a8 & 0xffffffff);
            unaff_R15 = (code *)&UNK_142f57a80;
            uStack_140 = (code *)0x0;
            uStack_130 = (code *)0x0;
            uStack_138 = (code *)0x0;
            pcStack_110 = (code *)((ulonglong)pcStack_110 & 0xffffffff00000000);
            uStack_150 = 0;
            uStack_148 = (code *)0x0;
            goto LAB_14041d265;
          }
        }
        uStack_d8 = (code *)0x18;
        goto LAB_14041cec1;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar6;
    } while (uVar6 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_d8 = (code *)0x5;
LAB_14041cec1:
  uVar7 = pdb_142d84ef0(param_2,&uStack_d8);
  goto LAB_14041d794;
  while( true ) {
    uVar6 = (ulonglong)(byte)(pcVar25 + -1)[(longlong)pcVar10];
    if (0x3a < uVar6) goto code_r0x00014041f6c4;
    if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
code_r0x00014041ead6:
    *(char **)(pcVar20 + 0x28) = pcVar10;
    pcVar13 = (char *)((longlong)puVar18 + (longlong)pcVar10);
    pcVar10 = pcVar10 + 1;
    if (pcVar13 == (char *)0x0) {
      uStack_118 = (code *)0x3;
      uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
      uStack_128 = param_4;
      pcVar11 = (code *)pdb_142d84ef0(pcVar20,&uStack_118);
      goto LAB_14041eea5;
    }
  }
  if (uVar6 != 0x3a) {
code_r0x00014041f6c4:
    uStack_118 = (code *)0x6;
    uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
    uStack_128 = param_4;
    pcVar11 = (code *)pdb_142d84ef0(pcVar20,&uStack_118);
    goto LAB_14041eea5;
  }
  *(char **)(pcVar20 + 0x28) = pcVar10;
  uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
  uStack_128 = param_4;
  uVar7 = pdb_140408af0(&uStack_148,pcVar20);
  pcVar11 = uStack_140;
  if (uStack_148._0_1_ != (code)0x0) goto LAB_14041eea5;
  uStack_168 = (code *)CONCAT44((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1),
                                (undefined4)uStack_168);
  uStack_170 = (code *)CONCAT44(uStack_170._4_4_,1);
  unaff_XMM7_Da = uStack_148._4_4_;
  goto LAB_14041e8c0;
  while( true ) {
    uVar6 = (ulonglong)(byte)(pcVar25 + -1)[(longlong)pcVar10];
    if (0x3a < uVar6) goto code_r0x00014041f6a2;
    if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
code_r0x00014041e9c5:
    *(char **)(pcVar20 + 0x28) = pcVar10;
    pcVar13 = (char *)((longlong)puVar18 + (longlong)pcVar10);
    pcVar10 = pcVar10 + 1;
    if (pcVar13 == (char *)0x0) {
      uStack_118 = (code *)0x3;
      uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
      uStack_128 = param_4;
      pcVar11 = (code *)pdb_142d84ef0(pcVar20,&uStack_118);
      goto LAB_14041eea5;
    }
  }
  if (uVar6 != 0x3a) {
code_r0x00014041f6a2:
    uStack_118 = (code *)0x6;
    uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
    uStack_128 = param_4;
    pcVar11 = (code *)pdb_142d84ef0(pcVar20,&uStack_118);
    goto LAB_14041eea5;
  }
  *(char **)(pcVar20 + 0x28) = pcVar10;
  uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
  uStack_128 = param_4;
  pdb_14040f2f0(&uStack_148,pcVar20);
  pcVar11 = uStack_140;
  if (uStack_148._0_1_ != (code)0x0) goto LAB_14041eea5;
  uStack_f8._0_7_ = CONCAT16(uStack_148._1_1_,(undefined6)uStack_f8);
  uStack_f8 = (code *)(ulonglong)(uint7)uStack_f8;
  goto LAB_14041e8c0;
  while( true ) {
    uVar6 = (ulonglong)(byte)(pcVar25 + -1)[(longlong)pcVar10];
    if (0x3a < uVar6) goto code_r0x00014041f708;
    if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
code_r0x00014041ea7b:
    *(char **)(pcVar20 + 0x28) = pcVar10;
    pcVar13 = (char *)((longlong)puVar18 + (longlong)pcVar10);
    pcVar10 = pcVar10 + 1;
    if (pcVar13 == (char *)0x0) {
      uStack_118 = (code *)0x3;
      uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
      uStack_128 = param_4;
      pcVar11 = (code *)pdb_142d84ef0(pcVar20,&uStack_118);
      goto LAB_14041eea5;
    }
  }
  if (uVar6 != 0x3a) {
code_r0x00014041f708:
    uStack_118 = (code *)0x6;
    uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
    uStack_128 = param_4;
    pcVar11 = (code *)pdb_142d84ef0(pcVar20,&uStack_118);
    goto LAB_14041eea5;
  }
  *(char **)(pcVar20 + 0x28) = pcVar10;
  uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
  uStack_128 = param_4;
  uVar7 = pdb_140408af0(&uStack_148,pcVar20);
  pcVar11 = uStack_140;
  if (uStack_148._0_1_ != (code)0x0) goto LAB_14041eea5;
  uStack_168 = (code *)CONCAT44(uStack_168._4_4_,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1));
  uStack_170 = (code *)CONCAT44(1,(undefined4)uStack_170);
  unaff_XMM6_Da = uStack_148._4_4_;
  goto LAB_14041e8c0;
code_r0x00014041e94f:
  uStack_128 = pcStack_100;
  uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
  pcVar11 = (code *)pdb_1404031f0(pcVar20);
  if (pcVar11 != (code *)0x0) goto LAB_14041eea5;
  goto LAB_14041e8c0;
code_r0x0001404211a4:
  param_14 = param_4;
  param_13 = pcVar27;
  if (bVar37) {
    bVar37 = uStack_54 == 0;
code_r0x000140421288:
    if (bVar37) {
      uVar6 = *(ulonglong *)(pcVar34 + 0x28);
      if (uVar6 < *(ulonglong *)(pcVar34 + 0x20)) {
        lVar12 = *(longlong *)pcVar20;
        do {
          uVar6 = uVar6 + 1;
          pcVar33 = (code *)(ulonglong)*(byte *)(lVar12 + -1 + uVar6);
          if ((code *)0x3a < pcVar33) {
code_r0x0001404226d6:
            uStack_48 = (code *)0x6;
            param_15 = param_18;
            param_12 = param_17;
            in_R10 = pcVar27;
            pcVar8 = (code *)pdb_142d84ef0(pcVar34,&uStack_48);
            pcVar21 = pcVar34;
            puVar31 = &uStack_1a8;
            pcVar11 = param_18;
            goto code_r0x0001404218aa;
          }
          if (((ulonglong)&uStack_d8 >> ((ulonglong)pcVar33 & 0x3f) & 1) == 0) {
            if (pcVar33 != (code *)0x3a) goto code_r0x0001404226d6;
            *(ulonglong *)(pcVar34 + 0x28) = uVar6;
            param_15 = param_18;
            param_12 = param_17;
            pcVar21 = (code *)&uStack_48;
            in_R10 = pcVar27;
            pdb_1403a7c60(pcVar21,pcVar34);
            puVar31 = &uStack_1a8;
            pcVar11 = param_18;
            if ((int)uStack_48 == 1) goto code_r0x0001404218aa;
            param_8 = uStack_48._4_4_;
            param_7 = (uint)unaff_RBX;
            uStack_54 = 1;
            puVar14 = &uStack_1a8;
            unaff_R15 = (code *)&UNK_142f57a80;
            goto code_r0x0001404210c0;
          }
          *(ulonglong *)(pcVar34 + 0x28) = uVar6;
        } while (uVar6 != *(ulonglong *)(pcVar34 + 0x20));
        pcVar33 = (code *)0x1;
        in_R10 = pcVar27;
      }
      uStack_48 = (code *)0x3;
      param_15 = param_18;
      param_12 = param_17;
      pcVar8 = (code *)pdb_142d84ef0(pcVar34,&uStack_48);
      pcVar21 = pcVar34;
      puVar31 = &uStack_1a8;
      pcVar11 = param_18;
    }
    else {
      param_9 = (code *)&UNK_142f56910;
      param_10 = (code *)0x9;
      uStack_48 = (code *)&param_9;
      param_15 = param_18;
      param_12 = param_17;
      pcVar21 = (code *)&UNK_142f75701;
      pcVar8 = (code *)pdb_142d872f0(&UNK_142f75701,&uStack_48);
      puVar31 = &uStack_1a8;
      pcVar11 = param_18;
    }
    goto code_r0x0001404218aa;
  }
  if (bVar38) {
    if ((bool)cVar36) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar10 = *pcVar10 + (char)pcVar10;
    *pcVar10 = *pcVar10 + (char)pcVar10;
    bVar37 = *pcVar10 == '\0';
    goto code_r0x000140421288;
  }
  puVar30 = &uStack_1a8;
  pcVar21 = pcVar34;
  if (*(int *)param_1 != 0x61746164) goto code_r0x000140421230;
  if (param_17 == (code *)0x0) {
    uVar6 = *(ulonglong *)(pcVar34 + 0x28);
    puVar14 = &uStack_1a8;
    pcVar25 = unaff_R15;
    if (uVar6 < *(ulonglong *)(pcVar34 + 0x20)) {
      lVar12 = *(longlong *)pcVar20;
      do {
        uVar6 = uVar6 + 1;
        pcVar33 = (code *)(ulonglong)*(byte *)(lVar12 + -1 + uVar6);
        if ((code *)0x3a < pcVar33) {
code_r0x000140422858:
          param_9 = (code *)0x6;
          param_15 = param_18;
          param_12 = (code *)0x0;
          in_R10 = pcVar27;
          pcVar8 = (code *)pdb_142d84ef0(pcVar34,&param_9);
          pcVar21 = pcVar34;
          pcVar11 = param_18;
          pcVar20 = uStack_50;
          goto joined_r0x00014042228d;
        }
        if (((ulonglong)&uStack_d8 >> ((ulonglong)pcVar33 & 0x3f) & 1) == 0) {
          if (pcVar33 != (code *)0x3a) goto code_r0x000140422858;
          *(ulonglong *)(pcVar34 + 0x28) = uVar6;
          param_15 = param_18;
          param_12 = (code *)0x0;
          pcVar21 = (code *)&uStack_48;
          in_R10 = pcVar27;
          pdb_14040d2d0(pcVar21,pcVar34);
          pcVar11 = param_18;
          pcVar20 = uStack_50;
          if ((int)uStack_48 == 1) goto joined_r0x00014042228d;
          uStack_e0 = (code *)0x1;
          param_17 = (code *)0x1;
          puVar14 = &uStack_1a8;
          uStack_118 = unaff_RBX;
          pcStack_d0 = unaff_RDI;
          pcStack_c8 = unaff_RSI;
          goto code_r0x0001404210c0;
        }
        *(ulonglong *)(pcVar34 + 0x28) = uVar6;
      } while (uVar6 != *(ulonglong *)(pcVar34 + 0x20));
      pcVar33 = (code *)0x1;
      in_R10 = pcVar27;
    }
    param_9 = (code *)0x3;
    param_15 = param_18;
    param_12 = (code *)0x0;
    pcVar8 = (code *)pdb_142d84ef0(pcVar34,&param_9);
    pcVar21 = pcVar34;
    pcVar11 = param_18;
    pcVar20 = uStack_50;
    goto joined_r0x00014042228d;
  }
  param_9 = (code *)&UNK_142f56931;
  param_10 = (code *)0x4;
  uStack_48 = (code *)&param_9;
  param_15 = param_18;
  param_12 = (code *)0x1;
  pcVar8 = (code *)pdb_142d872f0(&UNK_142f75701,&uStack_48);
  pcVar11 = param_18;
  goto code_r0x0001404218b4;
code_r0x0001404210c0:
  do {
    param_12 = param_17;
    pcVar21 = (code *)&uStack_48;
    *(undefined **)((longlong)puVar14 + -8) = &UNK_1404210f8;
    puVar18 = &uStack_128;
    param_13 = pcVar27;
    param_14 = unaff_R15;
    param_15 = param_18;
    pdb_140407a40();
    uVar24 = (uint)puVar18;
    puVar31 = puVar14;
    pcVar8 = unaff_RBX;
    pcVar11 = param_18;
    if (uStack_48._0_1_ == (code)0x1) break;
    puVar28 = puVar14;
    in_R10 = unaff_R15;
    if (uStack_48._1_1_ != '\x01') {
      if ((uStack_54 & 1) == 0) {
        param_15 = param_18;
        param_12 = param_17;
        *(undefined **)((longlong)puVar14 + -8) = &UNK_1404219c7;
        param_13 = pcVar27;
        param_14 = unaff_R15;
        param_8 = pdb_140f3fd40();
        param_7 = uVar24;
      }
      pcVar8 = uStack_f0;
      pcVar11 = uStack_e8;
      uStack_f0 = uStack_68;
      if (SBORROW8(0,(longlong)pcVar27)) {
        param_15 = param_18;
        param_13 = (code *)0x8000000000000000;
        param_12 = param_17;
        *(undefined **)((longlong)puVar14 + -8) = &UNK_140421a22;
        param_14 = unaff_R15;
        pdb_14071c030(&uStack_48);
        pcVar8 = unaff_RBX;
        pcVar11 = unaff_RDI;
        uStack_f0 = uStack_68;
        pcVar27 = uStack_48;
      }
      uStack_48 = pcVar27;
      if (unaff_R15 == (code *)0x8000000000000001) {
        unaff_R15 = (code *)0x8000000000000000;
      }
      cVar4 = '\x01';
      if (param_16._7_1_ != '\x05') {
        cVar4 = param_16._7_1_;
      }
      in_R11 = param_18;
      if (param_18 == (code *)0x8000000000000001) {
        in_R11 = (code *)0x8000000000000000;
      }
      if (((ulonglong)param_17 & 1) == 0) {
        uStack_118 = (code *)0x0;
        pcStack_c8 = (code *)0x0;
      }
      param_17 = pcStack_d0;
      pcVar27 = (code *)(ulonglong)param_7;
      uStack_c0 = uStack_60;
      pcVar20 = uStack_f8;
      uStack_e0 = uStack_48;
      uStack_68 = uStack_f0;
      goto code_r0x000140421b6a;
    }
code_r0x000140421116:
    pcVar20 = uStack_128;
    pcVar8 = uStack_128 + 0x18;
    *(longlong *)(uStack_128 + 0x28) = *(longlong *)(uStack_128 + 0x28) + 1;
    *(longlong *)(uStack_128 + 0x10) = 0;
    param_15 = param_18;
    param_12 = param_17;
    pcVar21 = (code *)&uStack_48;
    *(undefined **)((longlong)puVar28 + -8) = &UNK_140421166;
    pcVar33 = pcVar20;
    param_13 = pcVar27;
    param_14 = in_R10;
    pdb_140de3740(pcVar21,pcVar8);
    puVar31 = puVar28;
    pcVar8 = unaff_RBX;
    pcVar11 = param_18;
    if ((int)uStack_48 == 2) break;
    pcVar8 = unaff_RDI + -4;
    puVar30 = puVar28;
    param_4 = unaff_R15;
    pcVar21 = pcVar20;
    if (pcVar8 < (code *)0x6) {
code_r0x000140421193:
                    /* WARNING: Could not recover jumptable at 0x0001404211a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar27 = (code *)(*(code *)(&UNK_142f57ab4 + *(int *)(&UNK_142f57ab4 + (longlong)pcVar8 * 4))
                        )();
      return pcVar27;
    }
code_r0x000140421230:
    param_15 = param_18;
    param_12 = param_17;
    *(undefined **)((longlong)puVar30 + -8) = &UNK_140421262;
    param_13 = pcVar27;
    param_14 = param_4;
    pcVar8 = (code *)pdb_1404031f0();
    puVar14 = puVar30;
    puVar31 = puVar30;
    pcVar11 = param_18;
  } while (pcVar8 == (code *)0x0);
  goto code_r0x0001404218aa;
LAB_14041d265:
  do {
    pcVar20 = uStack_128;
    if (uStack_d8._1_1_ == '\0') {
      if (((ulonglong)uStack_140 & 1) == 0) {
        uStack_108 = (code *)&UNK_142f56b40;
        pcStack_100 = (code *)0x3;
      }
      else if (((ulonglong)uStack_140 & 0x100000000) == 0) {
        uStack_108 = (code *)&UNK_142f56b43;
        pcStack_100 = (code *)0x5;
      }
      else if (((ulonglong)uStack_138 & 1) == 0) {
        uStack_108 = (code *)&UNK_142f56b48;
        pcStack_100 = (code *)0x8;
      }
      else {
        if (((ulonglong)uStack_138 & 0x100000000) != 0) {
          if (((ulonglong)uStack_130 & 0x100000000) == 0) {
            unaff_XMM7_Da = 0;
          }
          iVar5 = (int)uStack_158;
          if (((ulonglong)uStack_130 & 1) == 0) {
            unaff_XMM8_Da = 0;
          }
          uVar39 = pdb_140a369c0();
          uStack_e0 = (code *)CONCAT44(uStack_158._4_4_,unaff_XMM9_Da);
          iVar26 = 0;
          uStack_a8 = (code *)CONCAT44((int)CONCAT71((uint7)(uint3)((ulonglong)uStack_158 >> 0x28),1
                                                    ),(uint)uStack_a8);
          pcVar21 = uStack_e0;
          goto LAB_14041cf24;
        }
        uStack_108 = (code *)&UNK_142f56b50;
        pcStack_100 = (code *)0x15;
      }
      puVar19 = &UNK_142f756ce;
code_r0x00014041d832:
      uStack_d8 = (code *)&uStack_108;
      pcStack_d0 = pdb_1402ed400;
      pcVar8 = (code *)pdb_142d872f0(puVar19,&uStack_d8);
      pcVar21 = pcVar8;
      uVar39 = extraout_XMM0_Da_13;
      pcVar11 = pcVar8;
      break;
    }
    pcVar34 = uStack_128 + 0x18;
    *(longlong *)(uStack_128 + 0x28) = *(longlong *)(uStack_128 + 0x28) + 1;
    *(longlong *)(uStack_128 + 0x10) = 0;
    pcVar8 = (code *)pdb_140de3310(&uStack_d8,pcVar34,uStack_128);
    pcVar21 = pcStack_d0;
    uVar39 = extraout_XMM0_Da_03;
    pcVar11 = uStack_e0;
    if ((int)uStack_d8 == 2) break;
    puVar18 = &uStack_108;
    pcVar25 = pcStack_d0;
    pcVar33 = pcStack_c8;
    pcVar8 = (code *)pdb_140615990();
    pcVar21 = pcStack_100;
    uVar39 = extraout_XMM0_Da_04;
    pcVar11 = uStack_e0;
    if ((char)uStack_108 == '\x01') break;
    uVar6 = (ulonglong)uStack_108 >> 8 & 0xff;
    uVar9 = (ulonglong)*(int *)(&UNK_142f57a80 + uVar6 * 4);
    cVar36 = 0xfffffffebd0a857f < uVar9;
    bVar38 = SCARRY8(uVar9,0x142f57a80);
    pcVar10 = &UNK_142f57a80 + uVar9;
    bVar37 = pcVar10 == (char *)0x0;
    cVar4 = (char)pcVar10;
    pcVar8 = unaff_RBX;
    pcVar21 = pcVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar6) {
    case 0:
      if (uStack_a8._4_4_ != 0) {
        uStack_108 = (code *)&UNK_142f56b40;
        pcStack_100 = (code *)0x3;
code_r0x00014041d967:
        puVar19 = &UNK_142f75701;
        goto code_r0x00014041d832;
      }
      uVar6 = *(ulonglong *)(pcVar20 + 0x28);
      if (uVar6 < *(ulonglong *)(pcVar20 + 0x20)) {
        lVar12 = *(longlong *)pcVar34;
        while( true ) {
          uVar6 = uVar6 + 1;
          uVar9 = (ulonglong)*(byte *)(lVar12 + -1 + uVar6);
          if (0x3a < uVar9) goto code_r0x00014041d85f;
          if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pcVar20 + 0x28) = uVar6;
          if (uVar6 == *(ulonglong *)(pcVar20 + 0x20)) goto code_r0x00014041d745;
        }
        if (uVar9 == 0x3a) {
          *(ulonglong *)(pcVar20 + 0x28) = uVar6;
          pcVar8 = (code *)pdb_140408970(&uStack_108,pcVar20);
          uVar39 = extraout_XMM0_Da_08;
          if ((char)uStack_108 == '\0') {
            uStack_158 = (code *)CONCAT44(uStack_158._4_4_,uStack_108._4_4_);
            uStack_140 = (code *)CONCAT44(uStack_140._4_4_,
                                          (int)CONCAT71((uint7)(uint3)((ulonglong)uStack_108 >> 0x28
                                                                      ),1));
            uStack_a8 = (code *)CONCAT44(1,(uint)uStack_a8);
            break;
          }
code_r0x00014041d6cc:
          uStack_e0 = pcStack_100;
          pcVar21 = pcStack_100;
          pcVar11 = uStack_e0;
          goto LAB_14041cf15;
        }
code_r0x00014041d85f:
        uStack_d8 = (code *)0x6;
      }
      else {
code_r0x00014041d745:
        uStack_d8 = (code *)0x3;
      }
      pcVar8 = (code *)pdb_142d84ef0(pcVar20,&uStack_d8);
      pcVar21 = pcVar8;
      uVar39 = extraout_XMM0_Da_12;
      pcVar11 = pcVar8;
      goto LAB_14041cf15;
    case 1:
      if ((int)pcStack_110 != 0) {
        uStack_108 = (code *)&UNK_142f56b43;
        pcStack_100 = (code *)0x5;
        goto code_r0x00014041d967;
      }
      uVar6 = *(ulonglong *)(pcVar20 + 0x28);
      if (*(ulonglong *)(pcVar20 + 0x20) <= uVar6) goto code_r0x00014041d745;
      lVar12 = *(longlong *)pcVar34;
      while( true ) {
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)*(byte *)(lVar12 + -1 + uVar6);
        if (0x3a < uVar9) goto code_r0x00014041d85f;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar20 + 0x28) = uVar6;
        if (uVar6 == *(ulonglong *)(pcVar20 + 0x20)) goto code_r0x00014041d745;
      }
      if (uVar9 != 0x3a) goto code_r0x00014041d85f;
      *(ulonglong *)(pcVar20 + 0x28) = uVar6;
      pcVar8 = (code *)pdb_140408970(&uStack_108,pcVar20);
      uVar39 = extraout_XMM0_Da_09;
      if ((char)uStack_108 != '\0') goto code_r0x00014041d6cc;
      uStack_140 = (code *)CONCAT44((int)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1),
                                    (undefined4)uStack_140);
      pcStack_110 = (code *)CONCAT44(pcStack_110._4_4_,1);
      unaff_XMM9_Da = uStack_108._4_4_;
      break;
    case 2:
      if ((int)uStack_150 != 0) {
        uStack_108 = (code *)&UNK_142f56b48;
        pcStack_100 = (code *)0x8;
        goto code_r0x00014041d967;
      }
      uVar6 = *(ulonglong *)(pcVar20 + 0x28);
      if (*(ulonglong *)(pcVar20 + 0x20) <= uVar6) goto code_r0x00014041d745;
      lVar12 = *(longlong *)pcVar34;
      while( true ) {
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)*(byte *)(lVar12 + -1 + uVar6);
        if (0x3a < uVar9) goto code_r0x00014041d85f;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar20 + 0x28) = uVar6;
        if (uVar6 == *(ulonglong *)(pcVar20 + 0x20)) goto code_r0x00014041d745;
      }
      if (uVar9 != 0x3a) goto code_r0x00014041d85f;
      *(ulonglong *)(pcVar20 + 0x28) = uVar6;
      pcVar8 = (code *)pdb_14040f4b0(&uStack_108,pcVar20);
      uVar39 = extraout_XMM0_Da_06;
      if ((char)uStack_108 != '\0') goto code_r0x00014041d6cc;
      uStack_158 = (code *)CONCAT44(uStack_108._4_4_,(int)uStack_158);
      pcStack_180 = pcStack_100;
      uStack_138 = (code *)CONCAT44(uStack_138._4_4_,
                                    (int)CONCAT71((int7)((ulonglong)pcStack_100 >> 8),1));
      uStack_150 = CONCAT44(uStack_150._4_4_,1);
      break;
    case 3:
      if (uStack_150._4_4_ != 0) {
        uStack_108 = (code *)&UNK_142f56b50;
        pcStack_100 = (code *)0x15;
        goto code_r0x00014041d967;
      }
      uVar6 = *(ulonglong *)(pcVar20 + 0x28);
      if (*(ulonglong *)(pcVar20 + 0x20) <= uVar6) goto code_r0x00014041d745;
      lVar12 = *(longlong *)pcVar34;
      while( true ) {
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)*(byte *)(lVar12 + -1 + uVar6);
        if (0x3a < uVar9) goto code_r0x00014041d85f;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar20 + 0x28) = uVar6;
        if (uVar6 == *(ulonglong *)(pcVar20 + 0x20)) goto code_r0x00014041d745;
      }
      if (uVar9 != 0x3a) goto code_r0x00014041d85f;
      *(ulonglong *)(pcVar20 + 0x28) = uVar6;
      pcVar8 = (code *)pdb_140408970(&uStack_108,pcVar20);
      uVar39 = extraout_XMM0_Da_07;
      if ((char)uStack_108 != '\0') goto code_r0x00014041d6cc;
      uStack_138 = (code *)CONCAT44((int)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1),
                                    (undefined4)uStack_138);
      uStack_150 = CONCAT44(1,(int)uStack_150);
      unaff_XMM6_Da = uStack_108._4_4_;
      break;
    case 4:
      if ((int)uStack_148 != 0) {
        uStack_108 = (code *)&UNK_142f56b65;
        pcStack_100 = (code *)0xc;
        goto code_r0x00014041d967;
      }
      uVar6 = *(ulonglong *)(pcVar20 + 0x28);
      if (*(ulonglong *)(pcVar20 + 0x20) <= uVar6) goto code_r0x00014041d745;
      lVar12 = *(longlong *)pcVar34;
      while( true ) {
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)*(byte *)(lVar12 + -1 + uVar6);
        if (0x3a < uVar9) goto code_r0x00014041d85f;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar20 + 0x28) = uVar6;
        if (uVar6 == *(ulonglong *)(pcVar20 + 0x20)) goto code_r0x00014041d745;
      }
      if (uVar9 != 0x3a) goto code_r0x00014041d85f;
      *(ulonglong *)(pcVar20 + 0x28) = uVar6;
      pcVar8 = (code *)pdb_140408970(&uStack_108,pcVar20);
      uVar39 = extraout_XMM0_Da_05;
      if ((char)uStack_108 != '\0') goto code_r0x00014041d6cc;
      uStack_130 = (code *)CONCAT44((int)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1),
                                    (undefined4)uStack_130);
      uStack_148 = (code *)CONCAT44(uStack_148._4_4_,1);
      unaff_XMM7_Da = uStack_108._4_4_;
      break;
    case 5:
      if (uStack_148._4_4_ != 0) {
        uStack_108 = (code *)&UNK_142f56b71;
        pcStack_100 = (code *)0xa;
        goto code_r0x00014041d967;
      }
      uVar6 = *(ulonglong *)(pcVar20 + 0x28);
      if (*(ulonglong *)(pcVar20 + 0x20) <= uVar6) goto code_r0x00014041d745;
      lVar12 = *(longlong *)pcVar34;
      while( true ) {
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)*(byte *)(lVar12 + -1 + uVar6);
        if (0x3a < uVar9) goto code_r0x00014041d85f;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar20 + 0x28) = uVar6;
        if (uVar6 == *(ulonglong *)(pcVar20 + 0x20)) goto code_r0x00014041d745;
      }
      if (uVar9 != 0x3a) goto code_r0x00014041d85f;
      *(ulonglong *)(pcVar20 + 0x28) = uVar6;
      pcVar8 = (code *)pdb_140408970(&uStack_108,pcVar20);
      uVar39 = extraout_XMM0_Da_10;
      if ((char)uStack_108 != '\0') goto code_r0x00014041d6cc;
      uStack_130 = (code *)CONCAT44(uStack_130._4_4_,(int)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1)
                                   );
      uStack_148 = (code *)CONCAT44(1,(int)uStack_148);
      unaff_XMM8_Da = uStack_108._4_4_;
      break;
    case 6:
      pcVar8 = (code *)pdb_140402c20(pcVar20);
      pcVar21 = pcVar8;
      uVar39 = extraout_XMM0_Da_01;
      pcVar11 = pcVar8;
      if (pcVar8 != (code *)0x0) goto LAB_14041cf15;
      break;
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
      pcVar27 = (code *)CONCAT71(0x1000026,(char)((ulonglong)pcVar25 >> 8));
      uStack_160 = (code *)CONCAT44((int)CONCAT71((int7)((ulonglong)pcVar10 >> 8),1),
                                    (undefined4)uStack_160);
      uStack_130 = (code *)CONCAT44(uStack_130._4_4_,1);
      unaff_XMM9_Da = uStack_148._4_4_;
      goto LAB_14041e8c0;
    case 9:
      *pcVar10 = *pcVar10 + cVar4;
      goto code_r0x00014041ea20;
    case 10:
      *pcVar10 = *pcVar10 + cVar4;
      goto code_r0x00014041ea7b;
    case 0xb:
      *pcVar10 = *pcVar10 + cVar4;
      goto code_r0x00014041e9c5;
    case 0xc:
      *pcVar10 = *pcVar10 + cVar4;
      goto code_r0x00014041ead6;
    case 0xd:
      goto code_r0x000140421116;
    case 0xe:
      goto code_r0x0001404211a4;
    case 0xf:
      bVar37 = *(int *)param_1 == (int)pcVar10;
      puVar14 = &uStack_1a8;
      param_14 = param_4;
      goto code_r0x0001404211fe;
    case 0x10:
      pcVar8 = (code *)(ulonglong)((int)pcVar10 + 0xff9894d);
      LOCK();
      UNLOCK();
      goto code_r0x000140421193;
    case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x12:
      goto code_r0x0001404211d1;
    case 0x13:
      uVar16 = CONCAT24(uStack_1a4,uStack_1a8);
      uStack_1a8 = 0x42f57a8b;
      (*(code *)(CONCAT26(uStack_1a2,uVar16) + 0x4c))();
      *param_2 = *param_1;
      *(char *)(lStack_1a0 + 0x4c) = *(char *)(lStack_1a0 + 0x4c) + cVar36;
      out(param_1[-1],(short)lStack_1a0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar8 = (code *)pdb_140407a40(&uStack_d8,&uStack_128);
    pcVar21 = pcStack_d0;
    uVar39 = extraout_XMM0_Da_02;
    pcVar11 = uStack_e0;
  } while (uStack_d8._0_1_ == (code)0x0);
LAB_14041cf15:
  uStack_e0 = pcVar11;
  pcStack_180 = pcVar8;
  iVar5 = (int)unaff_R15;
  iVar26 = 1;
  uStack_a8 = (code *)((ulonglong)uStack_a8 & 0xffffffff);
LAB_14041cf24:
  param_2[0x48] = (code)((char)param_2[0x48] + 1);
  uStack_d8 = (code *)CONCAT44(iVar5,iVar26);
  uStack_c0 = (code *)CONCAT44(uVar39,unaff_XMM6_Da);
  uStack_b8 = (code *)CONCAT44(unaff_XMM8_Da,unaff_XMM7_Da);
  pcStack_d0 = pcVar21;
  pcStack_c8 = pcStack_180;
  pcVar8 = (code *)pdb_140404da0(param_2);
  uStack_f8 = uStack_b8;
  pcStack_178 = pcStack_c8;
  uStack_108 = pcStack_c8;
  uStack_170 = uStack_c0;
  pcStack_100 = uStack_c0;
  if (iVar26 == 0) {
    pcVar27 = pcVar8;
    if (pcVar8 == (code *)0x0) {
      uStack_168 = uStack_b8;
      pcStack_100 = pcVar21;
      uStack_108._4_4_ = iVar5;
LAB_14041d17b:
      *(int *)(param_1 + 4) = uStack_108._4_4_;
      *(code **)(param_1 + 8) = pcStack_100;
      *(code **)(param_1 + 0x10) = pcStack_178;
      *(code **)(param_1 + 0x18) = uStack_170;
      *(code **)(param_1 + 0x20) = uStack_168;
      iVar5 = 0;
      goto LAB_14041d195;
    }
  }
  else {
    pcVar27 = pcVar21;
    if (pcVar8 != (code *)0x0) {
      pcStack_110 = pcVar8;
      if (*(longlong *)pcVar8 == 1) {
        pdb_1404b38e0(pcVar8 + 8);
      }
      else if ((*(longlong *)pcVar8 == 0) && (*(ulonglong *)(pcVar8 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(pcVar8 + 8),*(ulonglong *)(pcVar8 + 0x10),1);
      }
      pub_1406abac0((byte *)pcStack_110,0x28,8);
    }
  }
LAB_14041d789:
  uVar7 = pdb_142d86ed0(pcVar27,param_2);
LAB_14041d794:
  *(undefined8 *)(param_1 + 8) = uVar7;
  iVar5 = 1;
LAB_14041d195:
  *(int *)param_1 = iVar5;
  return param_1;
  while( true ) {
    uVar6 = (ulonglong)(byte)(pcVar25 + -1)[(longlong)pcVar10];
    if (0x3a < uVar6) goto code_r0x00014041f6e6;
    if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
code_r0x00014041ea20:
    *(char **)(pcVar20 + 0x28) = pcVar10;
    pcVar13 = (char *)((longlong)puVar18 + (longlong)pcVar10);
    pcVar10 = pcVar10 + 1;
    if (pcVar13 == (char *)0x0) {
      uStack_118 = (code *)0x3;
      uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
      uStack_128 = param_4;
      pcVar11 = (code *)pdb_142d84ef0(pcVar20,&uStack_118);
      goto LAB_14041eea5;
    }
  }
  if (uVar6 != 0x3a) {
code_r0x00014041f6e6:
    uStack_118 = (code *)0x6;
    uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
    uStack_128 = param_4;
    pcVar11 = (code *)pdb_142d84ef0(pcVar20,&uStack_118);
LAB_14041eea5:
    uStack_130 = pcVar11;
    cVar35 = uStack_f8._6_1_;
    pcVar27 = (code *)((ulonglong)pcStack_100 & 0x7fffffffffffffff);
joined_r0x00014041f447:
    pcStack_120 = (code *)0x8000000000000000;
    if (pcVar27 != (code *)0x0) {
      pcStack_120 = (code *)0x8000000000000000;
      pub_1406abac0((byte *)uStack_158,(ulonglong)pcStack_100,1);
    }
LAB_14041eed8:
    param_2[0x38] = (code)((char)param_2[0x38] + 1);
    pcVar27 = (code *)pdb_140404da0(param_2);
    if (SBORROW8(0,(longlong)pcStack_120)) {
      pcVar8 = uStack_130;
      if (pcVar27 != (code *)0x0) {
        pcStack_100 = pcVar27;
        if (*(longlong *)pcVar27 == 1) {
          pdb_1404b38e0(pcVar27 + 8);
        }
        else if ((*(longlong *)pcVar27 == 0) && (*(ulonglong *)(pcVar27 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(pcVar27 + 8),*(ulonglong *)(pcVar27 + 0x10),1);
        }
        pub_1406abac0((byte *)pcStack_100,0x28,8);
        pcVar8 = uStack_130;
      }
    }
    else {
      if (pcVar27 == (code *)0x0) {
        *(code **)(param_1 + 0x10) = pcVar21;
        *(int *)(param_1 + 0x18) = unaff_XMM6_Da;
        *(int *)(param_1 + 0x1c) = unaff_XMM7_Da;
        *(int *)(param_1 + 0x20) = unaff_XMM8_Da;
        *(int *)(param_1 + 0x24) = unaff_XMM9_Da;
        param_1[0x28] = cVar35;
        *(code **)param_1 = pcStack_120;
        *(code **)(param_1 + 8) = uStack_130;
        return param_1;
      }
      pcVar8 = pcVar27;
      if (pcStack_120 != (code *)0x0) {
        pub_1406abac0((byte *)uStack_130,(ulonglong)pcStack_120,1);
      }
    }
    uVar7 = pdb_142d86ed0(pcVar8,param_2);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *(undefined8 *)param_1 = 0x8000000000000000;
    return param_1;
  }
  *(char **)(pcVar20 + 0x28) = pcVar10;
  uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
  uStack_128 = param_4;
  uVar7 = pdb_140408af0(&uStack_148,pcVar20);
  pcVar11 = uStack_140;
  if (uStack_148._0_1_ != (code)0x0) goto LAB_14041eea5;
  uStack_160 = (code *)CONCAT44(uStack_160._4_4_,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1));
  pcStack_120 = (code *)CONCAT44(pcStack_120._4_4_,1);
  unaff_XMM8_Da = uStack_148._4_4_;
LAB_14041e8c0:
  uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
  uStack_128 = pcStack_100;
  pdb_140407a40(&uStack_d8,&UNK_142f57a80);
  pcVar20 = pcStack_188;
  pcVar11 = pcStack_110;
  if ((char)uStack_118 == '\x01') goto LAB_14041eea5;
  uVar15 = (uint7)uStack_f8;
  if (uStack_118._1_1_ == '\0') {
    cVar35 = uStack_f8._6_1_;
    if (uStack_f8._6_1_ != (code)0x2) {
      if (SBORROW8(0,(longlong)pcStack_100)) {
        uStack_148 = (code *)&UNK_142f56ac4;
        uStack_140 = (code *)0x13;
        uStack_118 = (code *)&uStack_148;
        pcStack_110 = pdb_1402ed400;
        uStack_128 = (code *)0x8000000000000000;
        uStack_f8 = (code *)CONCAT17(1,uVar15);
        uStack_130 = (code *)pdb_142d872f0(&UNK_142f756ce,&uStack_118);
        pcStack_120 = (code *)0x8000000000000000;
        cVar35 = uStack_f8._6_1_;
        goto LAB_14041eed8;
      }
      if (((ulonglong)uStack_168 & 1) == 0) {
        uStack_148 = (code *)&UNK_142f56ad7;
        uStack_140 = (code *)0x10;
        uStack_118 = (code *)&uStack_148;
        pcStack_110 = pdb_1402ed400;
        uStack_130 = (code *)pdb_142d872f0(&UNK_142f756ce,&uStack_118);
        pcVar27 = pcStack_100;
        goto joined_r0x00014041f447;
      }
      if (((ulonglong)uStack_168 & 0x100000000) == 0) {
        uStack_148 = (code *)&UNK_142f56ae7;
        uStack_140 = (code *)0x8;
        uStack_118 = (code *)&uStack_148;
        pcStack_110 = pdb_1402ed400;
        uStack_130 = (code *)pdb_142d872f0(&UNK_142f756ce,&uStack_118);
        pcVar27 = pcStack_100;
        goto joined_r0x00014041f447;
      }
      if (((ulonglong)uStack_160 & 1) == 0) {
        uStack_148 = (code *)&UNK_142f56aef;
        uStack_140 = (code *)0x8;
        uStack_118 = (code *)&uStack_148;
        pcStack_110 = pdb_1402ed400;
        uStack_130 = (code *)pdb_142d872f0(&UNK_142f756ce,&uStack_118);
        pcVar27 = pcStack_100;
        goto joined_r0x00014041f447;
      }
      if (((ulonglong)uStack_160 & 0x100000000) != 0) {
        uStack_130 = uStack_158;
        pcVar21 = pcStack_178;
        pcStack_120 = pcStack_100;
        goto LAB_14041eed8;
      }
      uStack_148 = (code *)&UNK_142f56af7;
      uStack_140 = (code *)0xa;
      uStack_118 = (code *)&uStack_148;
      pcStack_110 = pdb_1402ed400;
      uStack_130 = (code *)pdb_142d872f0(&UNK_142f756ce,&uStack_118);
      pcVar27 = pcStack_100;
      goto joined_r0x00014041f447;
    }
    uStack_148 = (code *)&UNK_142f56ab8;
    uStack_140 = (code *)0xc;
    uStack_118 = (code *)&uStack_148;
    pcStack_110 = pdb_1402ed400;
    uStack_128 = pcStack_100;
    uStack_f8 = (code *)CONCAT17(1,uVar15);
    pcVar11 = (code *)pdb_142d872f0(&UNK_142f756ce,&uStack_118);
    goto LAB_14041eea5;
  }
  *(longlong *)(pcStack_188 + 0x28) = *(longlong *)(pcStack_188 + 0x28) + 1;
  pcVar34 = pcStack_188 + 0x18;
  *(longlong *)(pcStack_188 + 0x10) = 0;
  uStack_128 = pcStack_100;
  uStack_f8 = (code *)CONCAT17(1,(uint7)uStack_f8);
  pdb_140de3740(&uStack_d8,pcVar34,pcStack_188);
  pcVar11 = pcStack_110;
  pcVar21 = pcVar20;
  if ((int)uStack_118 == 2) goto LAB_14041eea5;
  pcVar33 = uStack_108;
  pdb_140641fa0(&uStack_148);
  uVar23 = SUB82(pcVar11,0);
  pcVar11 = uStack_140;
  if (uStack_148._0_1_ == (code)0x1) goto LAB_14041eea5;
  if (uStack_148._1_1_ == 6) goto code_r0x00014041e94f;
  uVar22 = 0xf57a;
  uVar6 = (ulonglong)*(int *)(&UNK_142f57a9c + (ulonglong)(uint)uStack_148._1_1_ * 4);
  cVar36 = 0xfffffffebd0a8563 < uVar6;
  bVar38 = SCARRY8(uVar6,0x142f57a9c);
  pcVar10 = &UNK_142f57a9c + uVar6;
  bVar37 = pcVar10 == (char *)0x0;
  param_4 = pcStack_100;
  pcVar21 = pcVar34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_148._1_1_) {
  case 7:
    if (!(bool)cVar36) {
      (&UNK_142f57a25)[uVar6] = (&UNK_142f57a25)[uVar6] + -100;
      goto code_r0x000140421230;
    }
    bVar37 = *(int *)(param_1 + 3) == 0x65676173 && (int)pcVar10 == 0x42f57a9c;
code_r0x0001404211d1:
    puVar30 = &uStack_1a8;
    pcVar21 = pcVar34;
    if (!bVar37) goto code_r0x000140421230;
    param_14 = param_4;
    param_13 = pcVar27;
    if (param_18 != (code *)0x8000000000000001) {
      param_9 = (code *)&UNK_142f5692a;
      param_10 = (code *)0x7;
      uStack_48 = (code *)&param_9;
      param_15 = param_18;
      param_12 = param_17;
      pcVar21 = (code *)&UNK_142f75701;
      pcVar8 = (code *)pdb_142d872f0(&UNK_142f75701,&uStack_48);
      puVar31 = &uStack_1a8;
      pcVar11 = param_18;
      goto code_r0x0001404218aa;
    }
    uVar6 = *(ulonglong *)(pcVar34 + 0x28);
    if (*(ulonglong *)(pcVar34 + 0x20) <= uVar6) {
code_r0x00014042206b:
      uStack_48 = (code *)0x3;
      param_15 = (code *)0x8000000000000001;
      param_12 = param_17;
      pcVar8 = (code *)pdb_142d84ef0(pcVar34,&uStack_48);
code_r0x0001404220b6:
      pcVar21 = pcVar34;
      puVar31 = &uStack_1a8;
      pcVar11 = (code *)0x8000000000000001;
      goto code_r0x0001404218aa;
    }
    lVar12 = *(longlong *)pcVar20;
    do {
      uVar6 = uVar6 + 1;
      pcVar33 = (code *)(ulonglong)*(byte *)(lVar12 + -1 + uVar6);
      in_R10 = pcVar27;
      if ((code *)0x3a < pcVar33) {
code_r0x000140422720:
        uStack_48 = (code *)0x6;
        param_15 = (code *)0x8000000000000001;
        param_12 = param_17;
        pcVar8 = (code *)pdb_142d84ef0(pcVar34,&uStack_48);
        goto code_r0x0001404220b6;
      }
      if (((ulonglong)&uStack_d8 >> ((ulonglong)pcVar33 & 0x3f) & 1) == 0) {
        if (pcVar33 != (code *)0x3a) goto code_r0x000140422720;
        *(ulonglong *)(pcVar34 + 0x28) = uVar6;
        param_15 = (code *)0x8000000000000001;
        param_12 = param_17;
        pdb_1403fbba0(&param_9,pcVar34);
        pcVar34 = param_9;
        pcVar8 = param_10;
        if (param_9 == (code *)0x8000000000000001) goto code_r0x0001404220b6;
        uStack_68 = param_11;
        param_18 = param_9;
        uStack_50 = param_10;
        goto code_r0x0001404210c0;
      }
      *(ulonglong *)(pcVar34 + 0x28) = uVar6;
      if (uVar6 == *(ulonglong *)(pcVar34 + 0x20)) {
        pcVar33 = (code *)0x1;
        goto code_r0x00014042206b;
      }
    } while( true );
  case 8:
    (&UNK_142f57a1f)[uVar6] = (&UNK_142f57a1f)[uVar6] | 0x9c;
    pcVar27 = (code *)swi(1);
    pcVar27 = (code *)(*pcVar27)();
    return pcVar27;
  case 9:
    goto code_r0x0001404211a4;
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
    pcVar10 = (char *)func_0x000152f2c70f();
    cVar4 = (char)pcVar10;
    if ((bool)cVar36) {
      *pcVar10 = *pcVar10 + cVar4;
      *(undefined2 *)pcVar27 = in_ES;
      *pcVar10 = *pcVar10 + cVar4;
      *pcVar10 = *pcVar10 + cVar4;
      *pcVar10 = *pcVar10 + cVar4;
      *pcVar10 = *pcVar10 + cVar4;
      *pcVar10 = *pcVar10 + cVar4;
    }
    else {
      out(*(int *)param_1,uVar23);
      out(*(int *)(param_1 + -4),uVar23);
      out(*(int *)(param_1 + -8),uVar23);
      if (!bVar38) {
        out(uVar23,(int)pcVar10);
        if ((char)((char)(param_1 + -8) + -4) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_2[-0x68c202b4] = (code)((byte)param_2[-0x68c202b4] | (byte)uVar23);
        pcVar10 = (char *)((ulonglong)param_2 & 0xffffffff);
        *pcVar10 = *pcVar10 + (char)pcVar10;
        *pcVar10 = *pcVar10 + (char)pcVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    cVar36 = (char)((ulonglong)pcVar10 >> 8);
    cVar4 = cVar4 + cVar36;
    pcVar13 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),cVar4);
    *pcVar13 = *pcVar13 + cVar4;
    *pcVar13 = *pcVar13 + cVar4;
    *pcVar13 = *pcVar13 + cVar4;
    uVar16 = (undefined6)((ulonglong)pcVar10 >> 0x10);
    cVar36 = cVar36 + (char)((ushort)uVar22 >> 8);
    pcVar10 = (char *)CONCAT62(uVar16,CONCAT11(cVar36,cVar4));
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    cVar36 = cVar36 * '\x02';
    pcVar10 = (char *)CONCAT62(uVar16,CONCAT11(cVar36,cVar4));
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    uVar15 = (undefined7)((ulonglong)pcVar10 >> 8);
    cVar4 = cVar4 + (char)uVar22;
    pcVar10 = (char *)CONCAT71(uVar15,cVar4);
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    pcVar10[-0x258bf2cb] = pcVar10[-0x258bf2cb] + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    *pcVar10 = *pcVar10 + cVar4;
    puVar14 = (undefined4 *)CONCAT71(uVar15,cVar4 + cVar36);
    *puVar14 = *puVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)cVar36) {
    *pcVar10 = *pcVar10 + (char)pcVar10;
    pcVar10 = (char *)0x79726f6765746163;
  }
  else {
    pbVar2 = &UNK_142f57a54 + uVar6;
    bVar1 = *pbVar2;
    *pbVar2 = *pbVar2 + 0x9c;
    puVar29 = (undefined4 *)(ulonglong)_UNK_142f57b10;
    puVar32 = (undefined4 *)param_1;
    param_1 = (code *)CONCAT44((int)((ulonglong)param_1 >> 0x20),puVar32 + 1);
    out(*puVar32,uVar23);
    if (99 < bVar1) {
      puVar30 = (undefined4 *)((ulonglong)pcVar27 & 0xffffffff);
      goto code_r0x000140421230;
    }
  }
  bVar37 = *(char **)param_1 == pcVar10;
  puVar14 = puVar29;
  param_14 = pcStack_100;
code_r0x0001404211fe:
  puVar30 = puVar14;
  param_4 = param_14;
  pcVar21 = pcVar34;
  if (!bVar37) goto code_r0x000140421230;
  puVar31 = puVar14;
  param_13 = pcVar27;
  if (param_14 != (code *)0x8000000000000001) {
    param_9 = (code *)&UNK_142f5691d;
    param_10 = (code *)0x8;
    uStack_48 = (code *)&param_9;
    param_15 = param_18;
    param_12 = param_17;
    pcVar21 = (code *)&UNK_142f75701;
    *(undefined **)((longlong)puVar14 + -8) = &UNK_140422562;
    pcVar8 = (code *)pdb_142d872f0(&UNK_142f75701,&uStack_48);
    pcVar11 = param_18;
    goto code_r0x0001404218aa;
  }
  uVar6 = *(ulonglong *)(pcVar34 + 0x28);
  if (uVar6 < *(ulonglong *)(pcVar34 + 0x20)) {
    lVar12 = *(longlong *)pcVar20;
    while( true ) {
      uVar6 = uVar6 + 1;
      pcVar33 = (code *)(ulonglong)*(byte *)(lVar12 + -1 + uVar6);
      in_R10 = pcVar27;
      if ((code *)0x3a < pcVar33) break;
      if (((ulonglong)&uStack_d8 >> ((ulonglong)pcVar33 & 0x3f) & 1) == 0) {
        if (pcVar33 != (code *)0x3a) break;
        *(ulonglong *)(pcVar34 + 0x28) = uVar6;
        param_15 = param_18;
        param_14 = (code *)0x8000000000000001;
        param_12 = param_17;
        pcVar8 = (code *)&param_9;
        *(undefined **)((longlong)puVar14 + -8) = &UNK_140421634;
        pdb_1403fbba0(pcVar8,pcVar34);
        pcVar34 = pcVar8;
        pcVar8 = param_10;
        if (param_9 != (code *)0x8000000000000001) {
          uStack_70 = param_11;
          unaff_R15 = param_9;
          uStack_60 = param_10;
          goto code_r0x0001404210c0;
        }
        goto code_r0x000140422116;
      }
      *(ulonglong *)(pcVar34 + 0x28) = uVar6;
      if (uVar6 == *(ulonglong *)(pcVar34 + 0x20)) {
        pcVar33 = (code *)0x1;
        goto code_r0x0001404220cb;
      }
    }
    uStack_48 = (code *)0x6;
    param_15 = param_18;
    param_14 = (code *)0x8000000000000001;
    param_12 = param_17;
    *(undefined **)((longlong)puVar14 + -8) = &UNK_1404227b4;
    pcVar8 = (code *)pdb_142d84ef0(pcVar34,&uStack_48);
  }
  else {
code_r0x0001404220cb:
    uStack_48 = (code *)0x3;
    param_15 = param_18;
    param_14 = (code *)0x8000000000000001;
    param_12 = param_17;
    *(undefined **)((longlong)puVar14 + -8) = &UNK_140422112;
    pcVar8 = (code *)pdb_142d84ef0(pcVar34,&uStack_48);
  }
code_r0x000140422116:
  unaff_R15 = (code *)0x8000000000000001;
  pcVar21 = pcVar34;
  pcVar11 = param_18;
code_r0x0001404218aa:
  pcVar25 = unaff_R15;
  pcVar20 = uStack_50;
  puVar14 = puVar31;
  if (param_17 != (code *)0x0) {
code_r0x0001404218b4:
    pcVar21 = (code *)&uStack_d8;
    pcStack_110 = pcVar27;
    uStack_108 = unaff_R15;
    pcStack_100 = pcVar11;
    *(undefined **)((longlong)puVar31 + -8) = &UNK_1404218cc;
    pdb_1404a03d0();
    pcVar25 = unaff_R15;
    pcVar20 = uStack_50;
    puVar14 = puVar31;
  }
joined_r0x00014042228d:
  unaff_R15 = in_R10;
  uStack_50 = pcVar20;
  if ((-0x7fffffffffffffff < (longlong)pcVar11) && (pcVar11 != (code *)0x0)) {
    pcVar33 = (code *)0x1;
    *(undefined **)((longlong)puVar14 + -8) = &UNK_1404218fb;
    pub_1406abac0((byte *)pcVar20,(ulonglong)pcVar11,1);
    pcVar21 = pcVar20;
  }
  pcVar34 = uStack_60;
  pcVar20 = uStack_f8;
  if ((-0x7fffffffffffffff < (longlong)pcVar25) && (pcVar25 != (code *)0x0)) {
    pcVar33 = (code *)0x1;
    *(undefined **)((longlong)puVar14 + -8) = &UNK_140421925;
    pub_1406abac0((byte *)pcVar34,(ulonglong)pcVar25,1);
    pcVar21 = pcVar34;
  }
  param_8 = SUB84(pcVar25,0);
  cVar4 = '\0';
  if (pcVar27 == (code *)0x0) {
    uStack_118 = (code *)0x0;
    uStack_f0 = pcVar21;
    pcStack_c8 = pcVar33;
  }
  else {
    pcVar34 = (code *)0x1;
    *(undefined **)((longlong)puVar14 + -8) = &UNK_140421955;
    pcVar21 = pcVar27;
    pub_1406abac0((byte *)uStack_f0,(ulonglong)pcVar27,1);
    cVar4 = (char)pcVar21;
    uStack_118 = extraout_RAX;
    pcStack_c8 = pcVar34;
  }
  uStack_c0 = (code *)0x8000000000000002;
  uStack_e0 = (code *)0x8000000000000000;
code_r0x000140421b6a:
  uStack_b8 = uStack_70;
  uStack_a8 = uStack_50;
  uStack_94 = SUB84(pcVar27,0);
  pcStack_88 = param_17;
  iStack_78 = CONCAT31(iStack_78._1_3_,cVar4);
  param_2[0x38] = (code)((char)param_2[0x38] + 1);
  uStack_d8 = pcVar8;
  pcStack_d0 = pcVar11;
  pcVar27 = unaff_R15;
  pcStack_b0 = in_R11;
  pcStack_a0 = uStack_f0;
  uStack_98 = param_8;
  pcStack_90 = uStack_118;
  pcStack_80 = pcStack_c8;
  *(undefined **)((longlong)puVar14 + -8) = &UNK_140421bdd;
  pcStack_c8 = pcVar27;
  pcVar8 = (code *)pdb_140404da0(param_2);
  pcVar27 = uStack_d8;
  uStack_48 = uStack_e0;
  if (SBORROW8(0,(longlong)uStack_e0)) {
    pcVar21 = (code *)0x8000000000000000;
    if (pcVar8 != (code *)0x0) {
      param_17 = pcVar8;
      if (*(longlong *)pcVar8 == 1) {
        *(undefined **)((longlong)puVar14 + -8) = &UNK_140421c8b;
        pdb_1404b38e0(pcVar8 + 8);
      }
      else if ((*(longlong *)pcVar8 == 0) && (uVar6 = *(ulonglong *)(pcVar8 + 0x10), uVar6 != 0)) {
        pbVar2 = *(byte **)(pcVar8 + 8);
        *(undefined **)((longlong)puVar14 + -8) = &UNK_140421f1d;
        pub_1406abac0(pbVar2,uVar6,1);
      }
      *(undefined **)((longlong)puVar14 + -8) = &UNK_140421fae;
      pub_1406abac0((byte *)param_17,0x28,8);
    }
  }
  else if (pcVar8 == (code *)0x0) {
    uStack_158 = pcStack_a0;
    uStack_148 = pcStack_90;
    uStack_140 = pcStack_88;
    uStack_138 = pcStack_80;
    pcVar21 = uStack_e0;
    pcStack_188 = pcStack_d0;
    pcStack_180 = pcStack_c8;
    pcStack_178 = uStack_c0;
    uStack_170 = uStack_b8;
    uStack_168 = pcStack_b0;
    uStack_160 = uStack_a8;
    uStack_150 = CONCAT44(uStack_94,uStack_98);
    uStack_130 = (code *)CONCAT44(uStack_74,iStack_78);
  }
  else {
    *(undefined **)((longlong)puVar14 + -8) = &UNK_140421f30;
    pdb_1404c4620(&uStack_48);
    pcVar21 = (code *)0x8000000000000000;
    pcVar27 = pcVar8;
  }
  if (SBORROW8(0,(longlong)pcVar21)) {
    *(undefined **)((longlong)puVar14 + -8) = &UNK_1404223fb;
    lVar12 = pdb_142d86ed0(pcVar27,param_2);
    *(longlong *)(pcVar20 + 8) = lVar12;
    *(longlong *)pcVar20 = -0x8000000000000000;
  }
  else {
    *(code **)(pcVar20 + 0x60) = uStack_138;
    *(code **)(pcVar20 + 0x68) = uStack_130;
    *(code **)(pcVar20 + 0x50) = uStack_148;
    *(code **)(pcVar20 + 0x58) = uStack_140;
    *(code **)(pcVar20 + 0x40) = uStack_158;
    *(longlong *)(pcVar20 + 0x48) = uStack_150;
    *(code **)(pcVar20 + 0x30) = uStack_168;
    *(code **)(pcVar20 + 0x38) = uStack_160;
    *(code **)(pcVar20 + 0x20) = pcStack_178;
    *(code **)(pcVar20 + 0x28) = uStack_170;
    *(code **)(pcVar20 + 0x10) = pcStack_188;
    *(code **)(pcVar20 + 0x18) = pcStack_180;
    *(code **)pcVar20 = pcVar21;
    *(code **)(pcVar20 + 8) = pcVar27;
  }
  return pcVar20;
}

