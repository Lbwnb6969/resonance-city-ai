// VA 0x14041e7a0, PDB extent 4847 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,country_core::resources::grading_lut::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404211f0) overlaps instruction at (ram,0x0001404211ef)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,country_core::resources::grading_lut::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 4847 */

uint *******
pdb_14041e7a0(uint *******param_1,uint *******param_2,undefined8 param_3,undefined8 param_4,
             uint *******param_5,uint *******param_6)

{
  byte *pbVar1;
  byte bVar2;
  uint ******ppppppuVar3;
  code *pcVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar16;
  uint ******ppppppuVar7;
  uint *******pppppppuVar8;
  ulonglong uVar9;
  uint *******pppppppuVar10;
  uint *******extraout_RAX;
  uint *******pppppppuVar11;
  uint *******pppppppuVar12;
  char *pcVar13;
  undefined6 uVar18;
  undefined7 uVar17;
  undefined4 *puVar15;
  undefined *puVar19;
  undefined8 uVar20;
  uint *******pppppppuVar21;
  uint *******pppppppuVar22;
  undefined2 uVar23;
  uint uVar24;
  uint *******pppppppuVar25;
  undefined1 *puVar26;
  uint *******unaff_RBP;
  undefined4 *puVar27;
  uint *******pppppppuVar28;
  uint *******arg1;
  uint *******pppppppuVar29;
  uint *******in_R10;
  uint *******in_R11;
  uint *******unaff_R12;
  undefined8 unaff_R14;
  uint *******unaff_R15;
  undefined2 in_ES;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  uint unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  uint unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  uint unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  uint unaff_XMM9_Da;
  uint *******unaff_retaddr;
  uint uStackX_c;
  uint *******pppppppuStackX_10;
  undefined8 uStackX_18;
  uint *******pppppppuStackX_20;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000054;
  uint in_stack_00000098;
  undefined4 in_stack_000000a0;
  char cStack00000000000000a8;
  char cStack00000000000000a9;
  uint *******in_stack_000000b0;
  uint *******in_stack_000000b8;
  uint *******in_stack_000000c0;
  uint *******in_stack_000000c8;
  uint *******in_stack_000000d0;
  uint *******in_stack_000000d8;
  undefined8 in_stack_000000e0;
  uint *******in_stack_000000e8;
  uint *******in_stack_000000f0;
  undefined1 auStack_148 [32];
  uint *******pppppppuStack_128;
  uint *******pppppppuStack_120;
  uint *******pppppppuStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint *******pppppppuStack_e0;
  uint *******pppppppuStack_d8;
  uint *******pppppppuStack_d0;
  uint *******pppppppuStack_c8;
  uint *******pppppppuStack_c0;
  undefined8 uStack_b8;
  uint *******pppppppuStack_b0;
  uint *******pppppppuStack_a8;
  uint *******pppppppuStack_a0;
  undefined6 uStack_98;
  char cStack_92;
  undefined1 uStack_91;
  uint *******pppppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *pcVar14;
  
  puVar26 = auStack_148;
  uStack_68 = (uint *******)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  uStack_78 = (uint *******)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  uStack_70 = (uint *******)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  uStack_88 = (uint *******)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uStack_80 = (uint *******)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  pppppppuStack_90 = (uint *******)0xfffffffffffffffe;
  ppppppuVar7 = param_2[5];
  if (ppppppuVar7 < param_2[4]) {
    pppppppuVar25 = (uint *******)0x100002600;
    do {
      ppppppuVar7 = (uint ******)((longlong)ppppppuVar7 + 1);
      bVar2 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppuVar7);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pppppppuVar25 = param_2 + 7;
          *(char *)pppppppuVar25 = *(char *)pppppppuVar25 + -1;
          if (*(char *)pppppppuVar25 != '\0') {
            param_2[5] = ppppppuVar7;
            pppppppuStack_e0 = (uint *******)CONCAT71(pppppppuStack_e0._1_7_,1);
            uStack_e8 = param_2;
            pdb_140407e70(&uStack_b8,&uStack_e8);
            pppppppuStack_d0 = pppppppuStack_b0;
            if ((char)uStack_b8 == '\x01') {
LAB_14041edbf:
              pppppppuStack_c0 = (uint *******)0x8000000000000000;
            }
            else {
              if (uStack_b8._1_1_ != '\x01') {
                uVar20 = 0;
LAB_14041f0ab:
                pppppppuStack_d0 = (uint *******)pdb_142d86de0(uVar20,&UNK_142f56b30,&UNK_142f56898)
                ;
                goto LAB_14041edbf;
              }
              pdb_14040f2f0(&uStack_b8,uStack_e8);
              pppppppuStack_d0 = pppppppuStack_b0;
              if ((char)uStack_b8 == '\x01') goto LAB_14041edbf;
              uVar9 = (ulonglong)uStack_b8 >> 8;
              pdb_140407e70(&uStack_b8,&uStack_e8);
              pppppppuStack_d0 = pppppppuStack_b0;
              if ((char)uStack_b8 == '\x01') goto LAB_14041edbf;
              if (uStack_b8._1_1_ != '\x01') {
                uVar20 = 1;
                goto LAB_14041f0ab;
              }
              pdb_14040f770(&uStack_b8,uStack_e8);
              pppppppuStack_d0 = pppppppuStack_b0;
              if (SBORROW8(0,(longlong)uStack_b8)) goto LAB_14041edbf;
              pppppppuStack_c0 = uStack_b8;
              pdb_140407e70(&uStack_b8,&uStack_e8);
              pppppppuVar25 = pppppppuStack_b0;
              if ((char)uStack_b8 == '\x01') {
LAB_14041f2eb:
                if (pppppppuStack_c0 != (uint *******)0x0) {
                  pub_1406abac0((byte *)pppppppuStack_d0,(ulonglong)pppppppuStack_c0,1);
                }
                pppppppuStack_c0 = (uint *******)0x8000000000000000;
                pppppppuStack_d0 = pppppppuVar25;
              }
              else {
                if (uStack_b8._1_1_ != '\x01') {
                  pppppppuVar25 = (uint *******)pdb_142d86de0(2,&UNK_142f56b30,&UNK_142f56898);
                  goto LAB_14041f2eb;
                }
                pdb_140408af0(&uStack_b8,uStack_e8);
                pppppppuVar25 = pppppppuStack_b0;
                if ((int)uStack_b8 == 1) goto LAB_14041f2eb;
                unaff_XMM6_Da = uStack_b8._4_4_;
                pdb_140407e70(&uStack_b8,&uStack_e8);
                pppppppuVar25 = pppppppuStack_b0;
                if ((char)uStack_b8 == '\x01') goto LAB_14041f2eb;
                if (uStack_b8._1_1_ != '\x01') {
                  pppppppuVar25 = (uint *******)pdb_142d86de0(3,&UNK_142f56b30,&UNK_142f56898);
                  goto LAB_14041f2eb;
                }
                pdb_140408af0(&uStack_b8,uStack_e8);
                pppppppuVar25 = pppppppuStack_b0;
                if ((int)uStack_b8 == 1) goto LAB_14041f2eb;
                unaff_XMM7_Da = uStack_b8._4_4_;
                pdb_140407e70(&uStack_b8,&uStack_e8);
                pppppppuVar25 = pppppppuStack_b0;
                if ((char)uStack_b8 == '\x01') goto LAB_14041f2eb;
                if (uStack_b8._1_1_ != '\x01') {
                  pppppppuVar25 = (uint *******)pdb_142d86de0(4,&UNK_142f56b30,&UNK_142f56898);
                  goto LAB_14041f2eb;
                }
                pdb_140408af0(&uStack_b8,uStack_e8);
                pppppppuVar25 = pppppppuStack_b0;
                if ((int)uStack_b8 == 1) goto LAB_14041f2eb;
                unaff_XMM8_Da = uStack_b8._4_4_;
                pdb_140407e70(&uStack_b8,&uStack_e8);
                pppppppuVar25 = pppppppuStack_b0;
                if ((char)uStack_b8 == '\x01') goto LAB_14041f2eb;
                if (uStack_b8._1_1_ != '\x01') {
                  pppppppuVar25 = (uint *******)pdb_142d86de0(5,&UNK_142f56b30,&UNK_142f56898);
                  goto LAB_14041f2eb;
                }
                pdb_140408af0(&uStack_b8,uStack_e8);
                pppppppuVar25 = pppppppuStack_b0;
                if ((int)uStack_b8 == 1) goto LAB_14041f2eb;
                unaff_R15 = (uint *******)(uVar9 & 0xff);
                unaff_R12 = pppppppuStack_a8;
                unaff_XMM9_Da = uStack_b8._4_4_;
              }
            }
            cVar6 = (char)unaff_R15;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            pppppppuVar10 = (uint *******)pdb_140404e50(param_2);
            pppppppuVar25 = pppppppuVar10;
            if (!SBORROW8(0,(longlong)pppppppuStack_c0)) goto joined_r0x00014041edf3;
            pppppppuVar25 = pppppppuStack_d0;
            if (pppppppuVar10 == (uint *******)0x0) goto LAB_14041f37b;
            ppppppuVar7 = *pppppppuVar10;
            pppppppuStack_a0 = pppppppuVar10;
            if (ppppppuVar7 != (uint ******)0x1) goto LAB_14041f019;
            pdb_1404b38e0(pppppppuVar10 + 1);
            goto LAB_14041f363;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pppppppuVar25 =
                 (uint *******)pdb_142d85290(param_2,(longlong)&uStack_f0 + 7,&UNK_142f574f0);
            goto LAB_14041f37b;
          }
          pppppppuVar10 = param_2 + 7;
          *(char *)pppppppuVar10 = *(char *)pppppppuVar10 + -1;
          if (*(char *)pppppppuVar10 != '\0') {
            param_2[5] = ppppppuVar7;
            pppppppuStack_120 = (uint *******)CONCAT71(pppppppuStack_120._1_7_,1);
            cStack_92 = '\x02';
            pppppppuStack_d0 = (uint *******)((ulonglong)pppppppuStack_d0 & 0xffffffff00000000);
            pppppppuStack_c0 = (uint *******)((ulonglong)pppppppuStack_c0 & 0xffffffff00000000);
            pppppppuStack_110 = (uint *******)0x0;
            pppppppuStack_100 = (uint *******)0x0;
            pppppppuStack_108 = (uint *******)0x0;
            pppppppuStack_a0 = (uint *******)0x8000000000000000;
            pppppppuStack_128 = param_2;
            goto LAB_14041e8c0;
          }
        }
        uStack_b8 = (uint *******)0x18;
        goto LAB_14041e82a;
      }
      param_2[5] = ppppppuVar7;
    } while (ppppppuVar7 != param_2[4]);
  }
  uStack_b8 = (uint *******)0x5;
LAB_14041e82a:
  ppppppuVar7 = (uint ******)pdb_142d84ef0(param_2,&uStack_b8);
  goto LAB_14041f383;
code_r0x000140421330:
  in_stack_000000a0 = uStackX_18._4_4_;
  in_stack_00000098 = (uint)pppppppuStackX_20;
  uStackX_c = 1;
  goto code_r0x0001404210c0;
code_r0x0001404211bc:
  ppppppuVar7 = (uint ******)(ulonglong)*(uint *)pppppppuStackX_20;
  puVar19 = (undefined *)0x7373656d;
  puVar5 = puVar26;
code_r0x0001404211c3:
  puVar26 = puVar5;
  pppppppuVar8 = pppppppuVar22;
  if (*(int *)((longlong)param_1 + 3) != 0x65676173 || (int)ppppppuVar7 != (int)puVar19)
  goto code_r0x000140421230;
  in_stack_000000c8 = pppppppuVar25;
  if (in_stack_000000f0 == (uint *******)0x8000000000000001) {
    ppppppuVar7 = pppppppuVar22[5];
    if (ppppppuVar7 < pppppppuVar22[4]) {
      ppppppuVar3 = *pppppppuVar10;
      while( true ) {
        ppppppuVar7 = (uint ******)((longlong)ppppppuVar7 + 1);
        pppppppuVar28 =
             (uint *******)(ulonglong)*(byte *)((longlong)ppppppuVar3 + -1 + (longlong)ppppppuVar7);
        in_R10 = pppppppuVar25;
        if ((uint *******)0x3a < pppppppuVar28) goto code_r0x000140422720;
        if (((ulonglong)&uStack_b8 >> ((ulonglong)pppppppuVar28 & 0x3f) & 1) == 0) break;
        pppppppuVar22[5] = ppppppuVar7;
        if (ppppppuVar7 == pppppppuVar22[4]) {
          pppppppuVar28 = (uint *******)0x1;
          goto code_r0x00014042206b;
        }
      }
      if (pppppppuVar28 == (uint *******)0x3a) {
        pppppppuVar22[5] = ppppppuVar7;
        in_stack_000000d8 = (uint *******)0x8000000000000001;
        in_stack_000000c0 = in_stack_000000e8;
        *(undefined **)(puVar26 + -8) = &UNK_1404217c1;
        pdb_1403fbba0(&stack0x000000a8,pppppppuVar22);
        pppppppuVar22 = _cStack00000000000000a8;
        pppppppuVar12 = in_stack_000000b0;
        if (_cStack00000000000000a8 != (uint *******)0x8000000000000001) {
          in_stack_000000f0 = _cStack00000000000000a8;
          pppppppuStackX_10 = in_stack_000000b0;
          unaff_RBP = in_stack_000000b8;
code_r0x0001404210c0:
          in_stack_000000c0 = in_stack_000000e8;
          pppppppuVar8 = (uint *******)&uStackX_18;
          *(undefined **)(puVar26 + -8) = &UNK_1404210f8;
          in_stack_000000c8 = pppppppuVar25;
          in_stack_000000d0 = pppppppuVar29;
          in_stack_000000d8 = in_stack_000000f0;
          uVar24 = (uint)&pppppppuStack_c8;
          pdb_140407a40();
          pppppppuVar22 = pppppppuStack_c8;
          pppppppuVar12 = pppppppuStackX_20;
          arg1 = in_stack_000000f0;
          if ((char)uStackX_18 == '\x01') goto code_r0x0001404218aa;
          if (uStackX_18._1_1_ != '\x01') {
            if ((uStackX_c & 1) == 0) {
              in_stack_000000d8 = in_stack_000000f0;
              in_stack_000000c0 = in_stack_000000e8;
              *(undefined **)(puVar26 + -8) = &UNK_1404219c7;
              in_stack_000000c8 = pppppppuVar25;
              in_stack_000000d0 = pppppppuVar29;
              in_stack_000000a0 = pdb_140f3fd40();
              in_stack_00000098 = uVar24;
            }
            pppppppuVar12 = pppppppuStack_90;
            arg1 = uStack_88;
            if (SBORROW8(0,(longlong)pppppppuVar25)) {
              in_stack_000000d8 = in_stack_000000f0;
              in_stack_000000c8 = (uint *******)0x8000000000000000;
              in_stack_000000c0 = in_stack_000000e8;
              *(undefined **)(puVar26 + -8) = &UNK_140421a22;
              in_stack_000000d0 = pppppppuVar29;
              pdb_14071c030(&uStackX_18);
              pppppppuVar12 = pppppppuStackX_20;
              arg1 = param_5;
              pppppppuVar25 = uStackX_18;
            }
            uStackX_18 = pppppppuVar25;
            if (pppppppuVar29 == (uint *******)0x8000000000000001) {
              pppppppuVar29 = (uint *******)0x8000000000000000;
            }
            cVar6 = '\x01';
            if (in_stack_000000e0._7_1_ != '\x05') {
              cVar6 = in_stack_000000e0._7_1_;
            }
            in_R11 = in_stack_000000f0;
            if (in_stack_000000f0 == (uint *******)0x8000000000000001) {
              in_R11 = (uint *******)0x8000000000000000;
            }
            pppppppuVar10 = uStack_b8;
            if (((ulonglong)in_stack_000000e8 & 1) == 0) {
              uStack_68 = (uint *******)0x0;
              pppppppuVar10 = (uint *******)0x0;
            }
            in_stack_000000e8 = uStack_70;
            pppppppuVar22 = (uint *******)CONCAT17(uStack_91,CONCAT16(cStack_92,uStack_98));
            pppppppuVar25 = (uint *******)(ulonglong)in_stack_00000098;
            pppppppuVar28 = uStack_68;
            uStack_80 = uStackX_18;
            uStack_88 = arg1;
            uStack_58 = unaff_R15;
            goto code_r0x000140421b6a;
          }
          pppppppuVar10 = pppppppuStack_c8 + 3;
          pppppppuStack_c8[5] = (uint ******)((longlong)pppppppuStack_c8[5] + 1);
          pppppppuStack_c8[2] = (uint ******)0x0;
          in_stack_000000d8 = in_stack_000000f0;
          in_stack_000000c0 = in_stack_000000e8;
          pppppppuVar8 = (uint *******)&uStackX_18;
          *(undefined **)(puVar26 + -8) = &UNK_140421166;
          pppppppuVar28 = pppppppuVar22;
          in_R10 = pppppppuVar29;
          in_stack_000000c8 = pppppppuVar25;
          in_stack_000000d0 = pppppppuVar29;
          pdb_140de3740(pppppppuVar8,pppppppuVar10);
          pppppppuVar12 = pppppppuStackX_20;
          arg1 = in_stack_000000f0;
          if ((int)uStackX_18 == 2) goto code_r0x0001404218aa;
          param_1 = pppppppuStackX_20;
          in_stack_000000d0 = pppppppuVar29;
          pppppppuVar8 = pppppppuVar22;
          pppppppuVar11 = pppppppuVar29;
          switch(param_5) {
          case (uint *******)0x4:
            bVar31 = *(uint *)pppppppuStackX_20 == 0x65707974;
code_r0x0001404211a9:
            in_stack_000000c8 = pppppppuVar25;
            if (bVar31) {
              if (!SBORROW8(0,(longlong)pppppppuVar25)) {
                _cStack00000000000000a8 = (uint *******)&UNK_142f56919;
                in_stack_000000b0 = (uint *******)0x4;
                uStackX_18 = (uint *******)&stack0x000000a8;
                pppppppuStackX_20 = (uint *******)pdb_1402ed400;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c0 = in_stack_000000e8;
                pppppppuVar8 = (uint *******)&UNK_142f75701;
                *(undefined **)(puVar26 + -8) = &UNK_140422472;
                pppppppuVar12 = (uint *******)pdb_142d872f0(&UNK_142f75701,&uStackX_18);
                arg1 = in_stack_000000f0;
                goto code_r0x0001404218aa;
              }
              ppppppuVar7 = pppppppuVar22[5];
              if (ppppppuVar7 < pppppppuVar22[4]) {
                ppppppuVar3 = *pppppppuVar10;
                while( true ) {
                  ppppppuVar7 = (uint ******)((longlong)ppppppuVar7 + 1);
                  pppppppuVar28 =
                       (uint *******)
                       (ulonglong)*(byte *)((longlong)ppppppuVar3 + -1 + (longlong)ppppppuVar7);
                  if ((uint *******)0x3a < pppppppuVar28) goto code_r0x000140422804;
                  if (((ulonglong)&uStack_b8 >> ((ulonglong)pppppppuVar28 & 0x3f) & 1) == 0) break;
                  pppppppuVar22[5] = ppppppuVar7;
                  if (ppppppuVar7 == pppppppuVar22[4]) {
                    pppppppuVar28 = (uint *******)0x1;
                    goto code_r0x00014042212f;
                  }
                }
                if (pppppppuVar28 == (uint *******)0x3a) {
                  pppppppuVar22[5] = ppppppuVar7;
                  in_stack_000000d8 = in_stack_000000f0;
                  in_stack_000000c8 = (uint *******)0x8000000000000000;
                  in_stack_000000c0 = in_stack_000000e8;
                  pppppppuVar25 = (uint *******)&stack0x000000a8;
                  *(undefined **)(puVar26 + -8) = &UNK_1404216d1;
                  pdb_14040f770(pppppppuVar25,pppppppuVar22);
                  pppppppuVar22 = pppppppuVar25;
                  pppppppuVar12 = in_stack_000000b0;
                  if (!SBORROW8(0,(longlong)_cStack00000000000000a8)) {
                    uStack_88 = in_stack_000000b8;
                    pppppppuVar25 = _cStack00000000000000a8;
                    pppppppuStack_90 = in_stack_000000b0;
                    goto code_r0x0001404210c0;
                  }
                }
                else {
code_r0x000140422804:
                  uStackX_18 = (uint *******)0x6;
                  in_stack_000000d8 = in_stack_000000f0;
                  in_stack_000000c8 = (uint *******)0x8000000000000000;
                  in_stack_000000c0 = in_stack_000000e8;
                  *(undefined **)(puVar26 + -8) = &UNK_140422852;
                  pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&uStackX_18);
                }
              }
              else {
code_r0x00014042212f:
                uStackX_18 = (uint *******)0x3;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c8 = (uint *******)0x8000000000000000;
                in_stack_000000c0 = in_stack_000000e8;
                *(undefined **)(puVar26 + -8) = &UNK_14042217d;
                pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&uStackX_18);
              }
              pppppppuVar25 = (uint *******)0x8000000000000000;
              pppppppuVar8 = pppppppuVar22;
              arg1 = in_stack_000000f0;
              goto code_r0x0001404218aa;
            }
            pppppppuVar8 = pppppppuVar22;
            if (*(uint *)param_1 == 0x61746164) {
              if (in_stack_000000e8 != (uint *******)0x0) {
                _cStack00000000000000a8 = (uint *******)&UNK_142f56931;
                in_stack_000000b0 = (uint *******)0x4;
                uStackX_18 = (uint *******)&stack0x000000a8;
                pppppppuStackX_20 = (uint *******)pdb_1402ed400;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c0 = (uint *******)0x1;
                *(undefined **)(puVar26 + -8) = &UNK_1404226c0;
                pppppppuVar12 = (uint *******)pdb_142d872f0(&UNK_142f75701,&uStackX_18);
                arg1 = in_stack_000000f0;
                goto code_r0x0001404218b4;
              }
              ppppppuVar7 = pppppppuVar22[5];
              pppppppuVar11 = pppppppuVar29;
              pppppppuVar21 = unaff_retaddr;
              if (pppppppuVar22[4] <= ppppppuVar7) {
code_r0x00014042222e:
                _cStack00000000000000a8 = (uint *******)0x3;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c0 = (uint *******)0x0;
                *(undefined **)(puVar26 + -8) = &UNK_14042226f;
                pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&stack0x000000a8);
                pppppppuVar8 = pppppppuVar22;
                arg1 = in_stack_000000f0;
                goto joined_r0x00014042228d;
              }
              ppppppuVar3 = *pppppppuVar10;
              while( true ) {
                ppppppuVar7 = (uint ******)((longlong)ppppppuVar7 + 1);
                pppppppuVar28 =
                     (uint *******)
                     (ulonglong)*(byte *)((longlong)ppppppuVar3 + -1 + (longlong)ppppppuVar7);
                in_R10 = pppppppuVar25;
                if ((uint *******)0x3a < pppppppuVar28) goto code_r0x000140422858;
                if (((ulonglong)&uStack_b8 >> ((ulonglong)pppppppuVar28 & 0x3f) & 1) == 0) break;
                pppppppuVar22[5] = ppppppuVar7;
                if (ppppppuVar7 == pppppppuVar22[4]) {
                  pppppppuVar28 = (uint *******)0x1;
                  goto code_r0x00014042222e;
                }
              }
              if (pppppppuVar28 != (uint *******)0x3a) {
code_r0x000140422858:
                _cStack00000000000000a8 = (uint *******)0x6;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c0 = (uint *******)0x0;
                *(undefined **)(puVar26 + -8) = &UNK_140422899;
                pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&stack0x000000a8);
                pppppppuVar8 = pppppppuVar22;
                arg1 = in_stack_000000f0;
                goto joined_r0x00014042228d;
              }
              pppppppuVar22[5] = ppppppuVar7;
              in_stack_000000d8 = in_stack_000000f0;
              in_stack_000000c0 = (uint *******)0x0;
              pppppppuVar8 = (uint *******)&uStackX_18;
              *(undefined **)(puVar26 + -8) = &UNK_1404214c8;
              pdb_14040d2d0(pppppppuVar8,pppppppuVar22);
              pppppppuVar12 = pppppppuStackX_20;
              arg1 = in_stack_000000f0;
              if ((int)uStackX_18 == 1) goto joined_r0x00014042228d;
              uStack_70 = param_5;
              uStack_68 = param_6;
              uStack_80 = (uint *******)0x1;
              uStack_b8 = pppppppuStackX_20;
              uStack_78 = pppppppuStackX_20;
              in_stack_000000e8 = (uint *******)0x1;
              goto code_r0x0001404210c0;
            }
            break;
          case (uint *******)0x5:
            if (*(char *)((longlong)pppppppuStackX_20 + 4) == 'l' &&
                *(uint *)pppppppuStackX_20 == 0x6576656c) {
              if (in_stack_000000e0._7_1_ != '\x05') {
                _cStack00000000000000a8 = (uint *******)&UNK_142f56925;
                in_stack_000000b0 = (uint *******)0x5;
                uStackX_18 = (uint *******)&stack0x000000a8;
                pppppppuStackX_20 = (uint *******)pdb_1402ed400;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c0 = in_stack_000000e8;
                pppppppuVar8 = (uint *******)&UNK_142f75701;
                *(undefined **)(puVar26 + -8) = &UNK_1404224ea;
                in_stack_000000c8 = pppppppuVar25;
                pppppppuVar12 = (uint *******)pdb_142d872f0(&UNK_142f75701,&uStackX_18);
                arg1 = in_stack_000000f0;
                goto code_r0x0001404218aa;
              }
              ppppppuVar7 = pppppppuVar22[5];
              if (pppppppuVar22[4] <= ppppppuVar7) {
code_r0x00014042219a:
                uStackX_18 = (uint *******)0x3;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c0 = in_stack_000000e8;
                *(undefined **)(puVar26 + -8) = &UNK_1404221de;
                in_stack_000000c8 = pppppppuVar25;
                pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&uStackX_18);
                pppppppuVar8 = pppppppuVar22;
                arg1 = in_stack_000000f0;
                goto code_r0x0001404218aa;
              }
              ppppppuVar3 = *pppppppuVar10;
              while( true ) {
                ppppppuVar7 = (uint ******)((longlong)ppppppuVar7 + 1);
                pppppppuVar28 =
                     (uint *******)
                     (ulonglong)*(byte *)((longlong)ppppppuVar3 + -1 + (longlong)ppppppuVar7);
                in_R10 = pppppppuVar25;
                if ((uint *******)0x3a < pppppppuVar28) goto code_r0x0001404227ba;
                if (((ulonglong)&uStack_b8 >> ((ulonglong)pppppppuVar28 & 0x3f) & 1) == 0) break;
                pppppppuVar22[5] = ppppppuVar7;
                if (ppppppuVar7 == pppppppuVar22[4]) {
                  pppppppuVar28 = (uint *******)0x1;
                  goto code_r0x00014042219a;
                }
              }
              if (pppppppuVar28 != (uint *******)0x3a) {
code_r0x0001404227ba:
                uStackX_18 = (uint *******)0x6;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c0 = in_stack_000000e8;
                *(undefined **)(puVar26 + -8) = &UNK_1404227fe;
                in_stack_000000c8 = pppppppuVar25;
                pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&uStackX_18);
                pppppppuVar8 = pppppppuVar22;
                arg1 = in_stack_000000f0;
                goto code_r0x0001404218aa;
              }
              pppppppuVar22[5] = ppppppuVar7;
              in_stack_000000d8 = in_stack_000000f0;
              in_stack_000000c0 = in_stack_000000e8;
              pppppppuVar8 = (uint *******)&stack0x000000a8;
              *(undefined **)(puVar26 + -8) = &UNK_140421464;
              in_stack_000000c8 = pppppppuVar25;
              pdb_1403a7a40(pppppppuVar8,pppppppuVar22);
              pppppppuVar12 = in_stack_000000b0;
              arg1 = in_stack_000000f0;
              if (cStack00000000000000a8 == '\x01') goto code_r0x0001404218aa;
              in_stack_000000e0._7_1_ = cStack00000000000000a9;
              goto code_r0x0001404210c0;
            }
            break;
          case (uint *******)0x7:
            goto code_r0x0001404211bc;
          case (uint *******)0x8:
code_r0x0001404211f1:
            ppppppuVar7 = (uint ******)0x79726f6765746163;
            in_stack_000000d0 = pppppppuVar29;
            pppppppuVar29 = pppppppuVar11;
            pppppppuVar11 = unaff_retaddr;
            pppppppuVar21 = unaff_R15;
code_r0x0001404211fb:
            pppppppuVar8 = pppppppuVar22;
            unaff_retaddr = pppppppuVar11;
            unaff_R15 = pppppppuVar21;
            if (*param_1 == ppppppuVar7) {
              in_stack_000000c8 = pppppppuVar25;
              if (in_stack_000000d0 != (uint *******)0x8000000000000001) {
                _cStack00000000000000a8 = (uint *******)&UNK_142f5691d;
                in_stack_000000b0 = (uint *******)0x8;
                uStackX_18 = (uint *******)&stack0x000000a8;
                pppppppuStackX_20 = (uint *******)pdb_1402ed400;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c0 = in_stack_000000e8;
                pppppppuVar8 = (uint *******)&UNK_142f75701;
                *(undefined **)(puVar26 + -8) = &UNK_140422562;
                pppppppuVar12 = (uint *******)pdb_142d872f0(&UNK_142f75701,&uStackX_18);
                arg1 = in_stack_000000f0;
                goto code_r0x0001404218aa;
              }
              ppppppuVar7 = pppppppuVar22[5];
              if (ppppppuVar7 < pppppppuVar22[4]) {
                ppppppuVar3 = *pppppppuVar10;
                while( true ) {
                  ppppppuVar7 = (uint ******)((longlong)ppppppuVar7 + 1);
                  pppppppuVar28 =
                       (uint *******)
                       (ulonglong)*(byte *)((longlong)ppppppuVar3 + -1 + (longlong)ppppppuVar7);
                  in_R10 = pppppppuVar25;
                  if ((uint *******)0x3a < pppppppuVar28) goto code_r0x00014042276d;
                  if (((ulonglong)&uStack_b8 >> ((ulonglong)pppppppuVar28 & 0x3f) & 1) == 0) break;
                  pppppppuVar22[5] = ppppppuVar7;
                  if (ppppppuVar7 == pppppppuVar22[4]) {
                    pppppppuVar28 = (uint *******)0x1;
                    goto code_r0x0001404220cb;
                  }
                }
                if (pppppppuVar28 == (uint *******)0x3a) {
                  pppppppuVar22[5] = ppppppuVar7;
                  in_stack_000000d8 = in_stack_000000f0;
                  in_stack_000000d0 = (uint *******)0x8000000000000001;
                  in_stack_000000c0 = in_stack_000000e8;
                  pppppppuVar10 = (uint *******)&stack0x000000a8;
                  *(undefined **)(puVar26 + -8) = &UNK_140421634;
                  pdb_1403fbba0(pppppppuVar10,pppppppuVar22);
                  pppppppuVar22 = pppppppuVar10;
                  pppppppuVar12 = in_stack_000000b0;
                  pppppppuVar29 = _cStack00000000000000a8;
                  unaff_retaddr = in_stack_000000b0;
                  unaff_R15 = in_stack_000000b8;
                  if (_cStack00000000000000a8 != (uint *******)0x8000000000000001)
                  goto code_r0x0001404210c0;
                }
                else {
code_r0x00014042276d:
                  uStackX_18 = (uint *******)0x6;
                  in_stack_000000d8 = in_stack_000000f0;
                  in_stack_000000d0 = (uint *******)0x8000000000000001;
                  in_stack_000000c0 = in_stack_000000e8;
                  *(undefined **)(puVar26 + -8) = &UNK_1404227b4;
                  pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&uStackX_18);
                }
              }
              else {
code_r0x0001404220cb:
                uStackX_18 = (uint *******)0x3;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000d0 = (uint *******)0x8000000000000001;
                in_stack_000000c0 = in_stack_000000e8;
                *(undefined **)(puVar26 + -8) = &UNK_140422112;
                pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&uStackX_18);
              }
              pppppppuVar29 = (uint *******)0x8000000000000001;
              pppppppuVar8 = pppppppuVar22;
              arg1 = in_stack_000000f0;
              unaff_retaddr = pppppppuVar11;
              unaff_R15 = pppppppuVar21;
              goto code_r0x0001404218aa;
            }
            break;
          case (uint *******)0x9:
            bVar31 = *(char *)(pppppppuStackX_20 + 1) == 'p' &&
                     *pppppppuStackX_20 == (uint ******)0x6d617473656d6974;
code_r0x000140421220:
            if (!bVar31) break;
            bVar30 = uStackX_c == 0;
code_r0x000140421288:
            in_stack_000000c8 = pppppppuVar25;
            if (bVar30) {
              ppppppuVar7 = pppppppuVar8[5];
              if (ppppppuVar7 < pppppppuVar8[4]) {
                ppppppuVar3 = *pppppppuVar10;
                while( true ) {
                  ppppppuVar7 = (uint ******)((longlong)ppppppuVar7 + 1);
                  pppppppuVar28 =
                       (uint *******)
                       (ulonglong)*(byte *)((longlong)ppppppuVar3 + -1 + (longlong)ppppppuVar7);
                  in_R10 = pppppppuVar25;
                  if ((uint *******)0x3a < pppppppuVar28) goto code_r0x0001404226d6;
                  if (((ulonglong)&uStack_b8 >> ((ulonglong)pppppppuVar28 & 0x3f) & 1) == 0) break;
                  pppppppuVar8[5] = ppppppuVar7;
                  if (ppppppuVar7 == pppppppuVar8[4]) {
                    pppppppuVar28 = (uint *******)0x1;
                    goto code_r0x0001404221e1;
                  }
                }
                if (pppppppuVar28 == (uint *******)0x3a) {
                  pppppppuVar8[5] = ppppppuVar7;
                  in_stack_000000d8 = in_stack_000000f0;
                  in_stack_000000c0 = in_stack_000000e8;
                  pppppppuVar10 = (uint *******)&uStackX_18;
                  *(undefined **)(puVar26 + -8) = &UNK_140421322;
                  pdb_1403a7c60(pppppppuVar10,pppppppuVar8);
                  pppppppuVar8 = pppppppuVar10;
                  pppppppuVar12 = pppppppuStackX_20;
                  arg1 = in_stack_000000f0;
                  if ((int)uStackX_18 != 1) goto code_r0x000140421330;
                }
                else {
code_r0x0001404226d6:
                  uStackX_18 = (uint *******)0x6;
                  in_stack_000000d8 = in_stack_000000f0;
                  in_stack_000000c0 = in_stack_000000e8;
                  *(undefined **)(puVar26 + -8) = &UNK_14042271a;
                  pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar8,&uStackX_18);
                  arg1 = in_stack_000000f0;
                }
              }
              else {
code_r0x0001404221e1:
                uStackX_18 = (uint *******)0x3;
                in_stack_000000d8 = in_stack_000000f0;
                in_stack_000000c0 = in_stack_000000e8;
                *(undefined **)(puVar26 + -8) = &UNK_140422225;
                pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar8,&uStackX_18);
                arg1 = in_stack_000000f0;
              }
            }
            else {
              _cStack00000000000000a8 = (uint *******)&UNK_142f56910;
              in_stack_000000b0 = (uint *******)0x9;
              uStackX_18 = (uint *******)&stack0x000000a8;
              pppppppuStackX_20 = (uint *******)pdb_1402ed400;
              in_stack_000000d8 = in_stack_000000f0;
              in_stack_000000c0 = in_stack_000000e8;
              pppppppuVar8 = (uint *******)&UNK_142f75701;
              *(undefined **)(puVar26 + -8) = &UNK_1404225da;
              pppppppuVar12 = (uint *******)pdb_142d872f0(&UNK_142f75701,&uStackX_18);
              arg1 = in_stack_000000f0;
            }
            goto code_r0x0001404218aa;
          }
code_r0x000140421230:
          in_stack_000000d8 = in_stack_000000f0;
          in_stack_000000c0 = in_stack_000000e8;
          *(undefined **)(puVar26 + -8) = &UNK_140421262;
          in_stack_000000c8 = pppppppuVar25;
          pppppppuVar12 = (uint *******)pdb_1404031f0();
          arg1 = in_stack_000000f0;
          if (pppppppuVar12 != (uint *******)0x0) goto code_r0x0001404218aa;
          goto code_r0x0001404210c0;
        }
      }
      else {
code_r0x000140422720:
        uStackX_18 = (uint *******)0x6;
        in_stack_000000d8 = (uint *******)0x8000000000000001;
        in_stack_000000c0 = in_stack_000000e8;
        *(undefined **)(puVar26 + -8) = &UNK_140422767;
        pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&uStackX_18);
      }
    }
    else {
code_r0x00014042206b:
      uStackX_18 = (uint *******)0x3;
      in_stack_000000d8 = (uint *******)0x8000000000000001;
      in_stack_000000c0 = in_stack_000000e8;
      *(undefined **)(puVar26 + -8) = &UNK_1404220b2;
      pppppppuVar12 = (uint *******)pdb_142d84ef0(pppppppuVar22,&uStackX_18);
    }
    pppppppuVar8 = pppppppuVar22;
    arg1 = (uint *******)0x8000000000000001;
  }
  else {
    _cStack00000000000000a8 = (uint *******)&UNK_142f5692a;
    in_stack_000000b0 = (uint *******)0x7;
    uStackX_18 = (uint *******)&stack0x000000a8;
    pppppppuStackX_20 = (uint *******)pdb_1402ed400;
    in_stack_000000d8 = in_stack_000000f0;
    in_stack_000000c0 = in_stack_000000e8;
    pppppppuVar8 = (uint *******)&UNK_142f75701;
    *(undefined **)(puVar26 + -8) = &UNK_14042264b;
    pppppppuVar12 = (uint *******)pdb_142d872f0(&UNK_142f75701,&uStackX_18);
    arg1 = in_stack_000000f0;
  }
code_r0x0001404218aa:
  pppppppuVar11 = pppppppuVar29;
  pppppppuVar21 = unaff_retaddr;
  if (in_stack_000000e8 != (uint *******)0x0) {
code_r0x0001404218b4:
    pppppppuVar8 = (uint *******)&uStack_78;
    pppppppuStack_b0 = pppppppuVar25;
    pppppppuStack_a8 = pppppppuVar29;
    pppppppuStack_a0 = arg1;
    *(undefined **)(puVar26 + -8) = &UNK_1404218cc;
    pdb_1404a03d0();
    pppppppuVar11 = pppppppuVar29;
    pppppppuVar21 = unaff_retaddr;
  }
joined_r0x00014042228d:
  pppppppuVar29 = in_R10;
  if ((-0x7fffffffffffffff < (longlong)arg1) && (arg1 != (uint *******)0x0)) {
    pppppppuVar28 = (uint *******)0x1;
    *(undefined **)(puVar26 + -8) = &UNK_1404218fb;
    pppppppuVar8 = pppppppuStackX_10;
    pub_1406abac0((byte *)pppppppuStackX_10,(ulonglong)arg1,1);
  }
  unaff_RBP = pppppppuStack_90;
  unaff_retaddr = (uint *******)0x8000000000000002;
  pppppppuVar22 = (uint *******)CONCAT17(uStack_91,CONCAT16(cStack_92,uStack_98));
  if ((-0x7fffffffffffffff < (longlong)pppppppuVar11) && (pppppppuVar11 != (uint *******)0x0)) {
    pppppppuVar28 = (uint *******)0x1;
    *(undefined **)(puVar26 + -8) = &UNK_140421925;
    pub_1406abac0((byte *)pppppppuVar21,(ulonglong)pppppppuVar11,1);
    pppppppuVar8 = pppppppuVar21;
  }
  in_stack_000000a0 = SUB84(pppppppuVar11,0);
  cVar6 = '\0';
  if (((ulonglong)pppppppuVar25 & 0x7fffffffffffffff) == 0) {
    pppppppuVar10 = (uint *******)0x0;
    unaff_RBP = pppppppuVar8;
  }
  else {
    pppppppuVar28 = (uint *******)0x1;
    *(undefined **)(puVar26 + -8) = &UNK_140421955;
    pppppppuVar10 = pppppppuVar25;
    pub_1406abac0((byte *)unaff_RBP,(ulonglong)pppppppuVar25,1);
    cVar6 = (char)pppppppuVar10;
    pppppppuVar10 = extraout_RAX;
  }
  uStack_80 = (uint *******)0x8000000000000000;
  uStack_58 = unaff_R15;
code_r0x000140421b6a:
  pppppppuVar8 = in_stack_000000e8;
  uStack_48 = pppppppuStackX_10;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  uStack_78 = pppppppuVar12;
  uStack_70 = arg1;
  uStack_68 = pppppppuVar29;
  uStack_60 = unaff_retaddr;
  uStack_50 = in_R11;
  *(undefined **)(puVar26 + -8) = &UNK_140421bdd;
  pppppppuVar11 = (uint *******)pdb_140404da0(param_2);
  pppppppuVar29 = uStack_78;
  uStack000000000000004c = uStack_50._4_4_;
  uStack0000000000000054 = uStack_48._4_4_;
  uStack000000000000003c = uStack_60._4_4_;
  uStack0000000000000044 = uStack_58._4_4_;
  uStackX_18 = uStack_80;
  pppppppuStackX_20 = uStack_78;
  if (SBORROW8(0,(longlong)uStack_80)) {
    pppppppuVar8 = (uint *******)0x8000000000000000;
    if (pppppppuVar11 != (uint *******)0x0) {
      in_stack_000000e8 = pppppppuVar11;
      if (*pppppppuVar11 == (uint ******)0x1) {
        *(undefined **)(puVar26 + -8) = &UNK_140421c8b;
        pdb_1404b38e0(pppppppuVar11 + 1);
      }
      else if ((*pppppppuVar11 == (uint ******)0x0) &&
              (ppppppuVar7 = pppppppuVar11[2], ppppppuVar7 != (uint ******)0x0)) {
        ppppppuVar3 = pppppppuVar11[1];
        *(undefined **)(puVar26 + -8) = &UNK_140421f1d;
        pub_1406abac0((byte *)ppppppuVar3,(ulonglong)ppppppuVar7,1);
      }
      *(undefined **)(puVar26 + -8) = &UNK_140421fae;
      pub_1406abac0((byte *)in_stack_000000e8,0x28,8);
    }
  }
  else if (pppppppuVar11 == (uint *******)0x0) {
    pppppppuStack_128 = uStack_70;
    pppppppuStack_120 = uStack_68;
    pppppppuStack_118 = uStack_60;
    pppppppuStack_110 = uStack_58;
    pppppppuStack_108 = uStack_50;
    pppppppuStack_100 = uStack_48;
    pppppppuStack_e0 = pppppppuVar8;
    pppppppuVar8 = uStack_80;
    pppppppuStack_f8 = unaff_RBP;
    uStack_f0 = (uint ******)CONCAT44((int)pppppppuVar25,in_stack_000000a0);
    uStack_e8 = pppppppuVar10;
    pppppppuStack_d8 = pppppppuVar28;
    pppppppuStack_d0 = (uint *******)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),cVar6);
  }
  else {
    *(undefined **)(puVar26 + -8) = &UNK_140421f30;
    pdb_1404c4620(&uStackX_18);
    pppppppuVar8 = (uint *******)0x8000000000000000;
    pppppppuVar29 = pppppppuVar11;
  }
  if (SBORROW8(0,(longlong)pppppppuVar8)) {
    *(undefined **)(puVar26 + -8) = &UNK_1404223fb;
    ppppppuVar7 = (uint ******)pdb_142d86ed0(pppppppuVar29,param_2);
    pppppppuVar22[1] = ppppppuVar7;
    *pppppppuVar22 = (uint ******)0x8000000000000000;
  }
  else {
    pppppppuVar22[0xc] = (uint ******)pppppppuStack_d8;
    pppppppuVar22[0xd] = (uint ******)pppppppuStack_d0;
    pppppppuVar22[10] = (uint ******)uStack_e8;
    pppppppuVar22[0xb] = (uint ******)pppppppuStack_e0;
    pppppppuVar22[8] = (uint ******)pppppppuStack_f8;
    pppppppuVar22[9] = uStack_f0;
    pppppppuVar22[6] = (uint ******)pppppppuStack_108;
    pppppppuVar22[7] = (uint ******)pppppppuStack_100;
    pppppppuVar22[4] = (uint ******)pppppppuStack_118;
    pppppppuVar22[5] = (uint ******)pppppppuStack_110;
    pppppppuVar22[2] = (uint ******)pppppppuStack_128;
    pppppppuVar22[3] = (uint ******)pppppppuStack_120;
    *pppppppuVar22 = (uint ******)pppppppuVar8;
    pppppppuVar22[1] = (uint ******)pppppppuVar29;
  }
  return pppppppuVar22;
  while( true ) {
    if (uStack_b8._1_1_ == '\0') {
      if (cStack_92 != '\x02') {
        if (SBORROW8(0,(longlong)pppppppuStack_a0)) {
          uStack_e8 = (uint *******)&UNK_142f56ac4;
          pppppppuStack_e0 = (uint *******)0x13;
          uStack_b8 = (uint *******)&uStack_e8;
          pppppppuStack_b0 = (uint *******)pdb_1402ed400;
          pppppppuStack_c8 = (uint *******)0x8000000000000000;
          uStack_91 = 1;
          pppppppuStack_d0 = (uint *******)pdb_142d872f0(&UNK_142f756ce,&uStack_b8);
          pppppppuStack_c0 = (uint *******)0x8000000000000000;
          cVar6 = cStack_92;
          goto LAB_14041eed8;
        }
        if (((ulonglong)pppppppuStack_108 & 1) == 0) {
          uStack_e8 = (uint *******)&UNK_142f56ad7;
          pppppppuStack_e0 = (uint *******)0x10;
          uStack_b8 = (uint *******)&uStack_e8;
          pppppppuStack_b0 = (uint *******)pdb_1402ed400;
          pppppppuStack_d0 = (uint *******)pdb_142d872f0(&UNK_142f756ce,&uStack_b8);
          pppppppuVar25 = pppppppuStack_a0;
          goto joined_r0x00014041f447;
        }
        if (((ulonglong)pppppppuStack_108 & 0x100000000) == 0) {
          uStack_e8 = (uint *******)&UNK_142f56ae7;
          pppppppuStack_e0 = (uint *******)0x8;
          uStack_b8 = (uint *******)&uStack_e8;
          pppppppuStack_b0 = (uint *******)pdb_1402ed400;
          pppppppuStack_d0 = (uint *******)pdb_142d872f0(&UNK_142f756ce,&uStack_b8);
          pppppppuVar25 = pppppppuStack_a0;
          goto joined_r0x00014041f447;
        }
        if (((ulonglong)pppppppuStack_100 & 1) == 0) {
          uStack_e8 = (uint *******)&UNK_142f56aef;
          pppppppuStack_e0 = (uint *******)0x8;
          uStack_b8 = (uint *******)&uStack_e8;
          pppppppuStack_b0 = (uint *******)pdb_1402ed400;
          pppppppuStack_d0 = (uint *******)pdb_142d872f0(&UNK_142f756ce,&uStack_b8);
          pppppppuVar25 = pppppppuStack_a0;
          goto joined_r0x00014041f447;
        }
        if (((ulonglong)pppppppuStack_100 & 0x100000000) != 0) {
          pppppppuStack_d0 = pppppppuStack_f8;
          unaff_R12 = pppppppuStack_118;
          pppppppuStack_c0 = pppppppuStack_a0;
          goto LAB_14041eed8;
        }
        uStack_e8 = (uint *******)&UNK_142f56af7;
        pppppppuStack_e0 = (uint *******)0xa;
        uStack_b8 = (uint *******)&uStack_e8;
        pppppppuStack_b0 = (uint *******)pdb_1402ed400;
        pppppppuStack_d0 = (uint *******)pdb_142d872f0(&UNK_142f756ce,&uStack_b8);
        pppppppuVar25 = pppppppuStack_a0;
        goto joined_r0x00014041f447;
      }
      uStack_e8 = (uint *******)&UNK_142f56ab8;
      pppppppuStack_e0 = (uint *******)0xc;
      uStack_b8 = (uint *******)&uStack_e8;
      pppppppuStack_b0 = (uint *******)pdb_1402ed400;
      pppppppuStack_c8 = pppppppuStack_a0;
      uStack_91 = 1;
      pppppppuVar8 = (uint *******)pdb_142d872f0(&UNK_142f756ce,&uStack_b8);
      break;
    }
    pppppppuStack_128[5] = (uint ******)((longlong)pppppppuStack_128[5] + 1);
    pppppppuVar22 = pppppppuStack_128 + 3;
    pppppppuStack_128[2] = (uint ******)0x0;
    pppppppuStack_c8 = pppppppuStack_a0;
    uStack_91 = 1;
    pdb_140de3740(&uStack_b8,pppppppuVar22,pppppppuStack_128);
    pppppppuVar8 = pppppppuStack_b0;
    unaff_R12 = pppppppuVar10;
    if ((int)uStack_b8 == 2) break;
    pppppppuVar28 = pppppppuStack_a8;
    pdb_140641fa0(&uStack_e8);
    uVar23 = SUB82(pppppppuVar8,0);
    pppppppuVar8 = pppppppuStack_e0;
    if ((char)uStack_e8 == '\x01') break;
    if (uStack_e8._1_1_ != 6) {
      puVar19 = &UNK_142f57a9c;
      uVar9 = (ulonglong)*(int *)(&UNK_142f57a9c + (ulonglong)(uint)uStack_e8._1_1_ * 4);
      bVar30 = 0xfffffffebd0a8563 < uVar9;
      bVar32 = SCARRY8(uVar9,0x142f57a9c);
      ppppppuVar7 = (uint ******)(&UNK_142f57a9c + uVar9);
      cVar6 = (char)ppppppuVar7;
      pppppppuVar8 = pppppppuVar22;
      pppppppuVar29 = (uint *******)&pppppppuStack_128;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uStack_e8._1_1_) {
      case 7:
        puVar5 = auStack_148;
        in_stack_000000d0 = pppppppuStack_a0;
        if (!bVar30) {
          (&UNK_142f57a25)[uVar9] = (&UNK_142f57a25)[uVar9] + -100;
          goto code_r0x000140421230;
        }
        break;
      case 8:
        (&UNK_142f57a1f)[uVar9] = (&UNK_142f57a1f)[uVar9] | 0x9c;
        pcVar4 = (code *)swi(1);
        pppppppuVar25 = (uint *******)(*pcVar4)();
        return pppppppuVar25;
      case 9:
        bVar31 = true;
        puVar26 = auStack_148;
        in_stack_000000d0 = pppppppuStack_a0;
        if (ppppppuVar7 == (uint ******)0x0) goto code_r0x000140421220;
        bVar31 = false;
        puVar26 = auStack_148;
        if (!bVar32) goto code_r0x0001404211a9;
        if (!bVar30) {
          *(char *)ppppppuVar7 = *(char *)ppppppuVar7 + cVar6;
          *(char *)ppppppuVar7 = *(char *)ppppppuVar7 + cVar6;
          bVar30 = *(char *)ppppppuVar7 == '\0';
          puVar26 = auStack_148;
          goto code_r0x000140421288;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xb:
        if (!bVar30) {
          pbVar1 = &UNK_142f57a54 + uVar9;
          bVar2 = *pbVar1;
          *pbVar1 = *pbVar1 + 0x9c;
          puVar26 = (undefined1 *)(ulonglong)_UNK_142f57b10;
          puVar27 = (undefined4 *)param_1;
          param_1 = (uint *******)CONCAT44((int)((ulonglong)param_1 >> 0x20),puVar27 + 1);
          out(*puVar27,uVar23);
          in_stack_000000d0 = pppppppuStack_a0;
          pppppppuVar11 = unaff_retaddr;
          pppppppuVar21 = unaff_R15;
          if (bVar2 < 100) goto code_r0x0001404211fb;
          puVar26 = (undefined1 *)0x2600;
          goto code_r0x000140421230;
        }
        *(char *)ppppppuVar7 = *(char *)ppppppuVar7 + cVar6;
        puVar26 = auStack_148;
        pppppppuVar29 = pppppppuStack_a0;
        pppppppuVar11 = (uint *******)&pppppppuStack_128;
        goto code_r0x0001404211f1;
      case 0xc:
        pcVar13 = (char *)func_0x000152f2c70f();
        cVar6 = (char)pcVar13;
        if (bVar30) {
          *pcVar13 = *pcVar13 + cVar6;
          uRam0000000100002600 = in_ES;
          *pcVar13 = *pcVar13 + cVar6;
          *pcVar13 = *pcVar13 + cVar6;
          *pcVar13 = *pcVar13 + cVar6;
          *pcVar13 = *pcVar13 + cVar6;
          *pcVar13 = *pcVar13 + cVar6;
        }
        else {
          out(*(uint *)param_1,uVar23);
          out(*(uint *)((longlong)param_1 + -4),uVar23);
          out(*(uint *)(param_1 + -1),uVar23);
          if (!bVar32) {
            out(uVar23,(int)pcVar13);
            if ((char)((char)(param_1 + -1) + -4) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(byte *)((longlong)param_2 + -0x68c202b4) =
                 *(byte *)((longlong)param_2 + -0x68c202b4) | (byte)uVar23;
            pcVar13 = (char *)((ulonglong)param_2 & 0xffffffff);
            *pcVar13 = *pcVar13 + (char)pcVar13;
            *pcVar13 = *pcVar13 + (char)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        cVar16 = (char)((ulonglong)pcVar13 >> 8);
        cVar6 = cVar6 + cVar16;
        pcVar14 = (char *)CONCAT71((int7)((ulonglong)pcVar13 >> 8),cVar6);
        *pcVar14 = *pcVar14 + cVar6;
        *pcVar14 = *pcVar14 + cVar6;
        *pcVar14 = *pcVar14 + cVar6;
        uVar18 = (undefined6)((ulonglong)pcVar13 >> 0x10);
        cVar16 = cVar16 + (char)((ulonglong)puVar19 >> 8);
        pcVar13 = (char *)CONCAT62(uVar18,CONCAT11(cVar16,cVar6));
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        cVar16 = cVar16 * '\x02';
        pcVar13 = (char *)CONCAT62(uVar18,CONCAT11(cVar16,cVar6));
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        uVar17 = (undefined7)((ulonglong)pcVar13 >> 8);
        cVar6 = cVar6 + (char)puVar19;
        pcVar13 = (char *)CONCAT71(uVar17,cVar6);
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        pcVar13[-0x258bf2cb] = pcVar13[-0x258bf2cb] + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        *pcVar13 = *pcVar13 + cVar6;
        puVar15 = (undefined4 *)CONCAT71(uVar17,cVar6 + cVar16);
        *puVar15 = *puVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x0001404211c3;
    }
    pppppppuStack_c8 = pppppppuStack_a0;
    uStack_91 = 1;
    pppppppuVar8 = (uint *******)pdb_1404031f0(pppppppuVar10);
    if (pppppppuVar8 != (uint *******)0x0) break;
LAB_14041e8c0:
    uStack_91 = 1;
    pppppppuStack_c8 = pppppppuStack_a0;
    pdb_140407a40(&uStack_b8,&pppppppuStack_128);
    cVar6 = cStack_92;
    pppppppuVar10 = pppppppuStack_128;
    pppppppuVar8 = pppppppuStack_b0;
    if ((char)uStack_b8 == '\x01') break;
  }
  pppppppuStack_d0 = pppppppuVar8;
  cVar6 = cStack_92;
  pppppppuVar25 = (uint *******)((ulonglong)pppppppuStack_a0 & 0x7fffffffffffffff);
joined_r0x00014041f447:
  pppppppuStack_c0 = (uint *******)0x8000000000000000;
  if (pppppppuVar25 != (uint *******)0x0) {
    pppppppuStack_c0 = (uint *******)0x8000000000000000;
    pub_1406abac0((byte *)pppppppuStack_f8,(ulonglong)pppppppuStack_a0,1);
  }
LAB_14041eed8:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  pppppppuVar10 = (uint *******)pdb_140404da0(param_2);
  pppppppuVar25 = pppppppuVar10;
  if (SBORROW8(0,(longlong)pppppppuStack_c0)) {
    pppppppuVar25 = pppppppuStack_d0;
    if (pppppppuVar10 != (uint *******)0x0) {
      ppppppuVar7 = *pppppppuVar10;
      pppppppuStack_a0 = pppppppuVar10;
      if (ppppppuVar7 == (uint ******)0x1) {
        pdb_1404b38e0(pppppppuVar10 + 1);
      }
      else {
LAB_14041f019:
        if ((ppppppuVar7 == (uint ******)0x0) && (pppppppuStack_a0[2] != (uint ******)0x0)) {
          pub_1406abac0((byte *)pppppppuStack_a0[1],(ulonglong)pppppppuStack_a0[2],1);
        }
      }
LAB_14041f363:
      pub_1406abac0((byte *)pppppppuStack_a0,0x28,8);
      pppppppuVar25 = pppppppuStack_d0;
    }
  }
  else {
joined_r0x00014041edf3:
    if (pppppppuVar25 == (uint *******)0x0) {
      param_1[2] = (uint ******)unaff_R12;
      *(uint *)(param_1 + 3) = unaff_XMM6_Da;
      *(uint *)((longlong)param_1 + 0x1c) = unaff_XMM7_Da;
      *(uint *)(param_1 + 4) = unaff_XMM8_Da;
      *(uint *)((longlong)param_1 + 0x24) = unaff_XMM9_Da;
      *(char *)(param_1 + 5) = cVar6;
      *param_1 = (uint ******)pppppppuStack_c0;
      param_1[1] = (uint ******)pppppppuStack_d0;
      return param_1;
    }
    if (pppppppuStack_c0 != (uint *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_d0,(ulonglong)pppppppuStack_c0,1);
    }
  }
LAB_14041f37b:
  ppppppuVar7 = (uint ******)pdb_142d86ed0(pppppppuVar25,param_2);
LAB_14041f383:
  param_1[1] = ppppppuVar7;
  *param_1 = (uint ******)0x8000000000000000;
  return param_1;
}

