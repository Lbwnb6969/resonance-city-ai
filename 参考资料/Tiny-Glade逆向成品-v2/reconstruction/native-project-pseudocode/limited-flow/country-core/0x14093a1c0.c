// VA 0x14093a1c0, PDB extent 1440 bytes
// country_core::input::action_set::MainActionSet::just_pressed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014093a373) overlaps instruction at (ram,0x00014093a370)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::input::action_set::MainActionSet::just_pressed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 1440 */

code * pdb_14093a1c0(uint *param_1,byte param_2,ulonglong param_3,undefined8 *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  code cVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  byte bVar11;
  uint uVar12;
  char *pcVar13;
  ulonglong uVar14;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined7 uVar17;
  int *piVar15;
  longlong lVar16;
  byte bVar18;
  undefined *puVar19;
  byte bVar20;
  byte bVar22;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  char in_R11B;
  undefined8 unaff_R12;
  undefined8 *unaff_R13;
  longlong *unaff_R14;
  undefined2 in_ES;
  bool bVar24;
  bool bVar25;
  float10 in_ST0;
  float fVar26;
  undefined8 in_XMM0_Qa;
  uint uVar27;
  float fVar28;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined8 in_XMM1_Qa;
  uint uVar29;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar21;
  char cVar23;
  
  uVar29 = (uint)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar27 = (uint)((ulonglong)in_XMM0_Qa >> 0x20);
  fVar26 = (float)in_XMM0_Qa;
  puVar19 = &UNK_143023da8;
  uVar14 = (ulonglong)*(int *)(&UNK_143023da8 + (ulonglong)param_2 * 4);
  bVar24 = 0xfffffffebcfdc257 < uVar14;
  UNRECOVERED_JUMPTABLE_00 = (code *)(&UNK_143023da8 + uVar14);
  bVar25 = UNRECOVERED_JUMPTABLE_00 == (code *)0x0;
  bVar18 = (byte)param_1;
  bVar11 = (byte)UNRECOVERED_JUMPTABLE_00;
  uVar12 = (uint)UNRECOVERED_JUMPTABLE_00;
  uVar17 = (undefined7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8);
  bVar20 = (byte)unaff_RBX;
  bVar22 = (byte)((ulonglong)unaff_RBX >> 8);
  iVar21 = (int)unaff_RBX;
  cVar23 = (char)bVar22 >> 1;
  switch(param_2) {
  case 0:
    uVar12 = *param_1;
    puVar19 = &UNK_143024184;
    goto code_r0x00014093a1dc;
  case 1:
    uVar12 = param_1[2];
    puVar19 = &UNK_143024170;
    goto code_r0x00014093a470;
  case 2:
    uVar12 = param_1[4];
    puVar19 = &UNK_14302415c;
    goto code_r0x00014093a3f8;
  case 3:
    uVar12 = param_1[6];
    puVar19 = &UNK_143024148;
    goto code_r0x00014093a434;
  case 4:
    uVar12 = param_1[8];
    puVar19 = &UNK_143024134;
    goto code_r0x00014093a332;
  default:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[10];
  case 0x8e:
    puVar19 = &UNK_143024120;
code_r0x00014093a51e:
                    /* WARNING: Could not recover jumptable at 0x00014093a525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_00;
  case 6:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0xc];
    puVar19 = &UNK_14302410c;
  case 0x77:
code_r0x00014093a57e:
                    /* WARNING: Could not recover jumptable at 0x00014093a585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                           (param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 7:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0xe];
    puVar19 = &UNK_1430240f8;
    goto code_r0x00014093a452;
  case 8:
    uVar12 = param_1[0x10];
    puVar19 = &UNK_1430240e4;
    goto code_r0x00014093a5de;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x00014093a399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_1430240d0 + *(int *)(&UNK_1430240d0 + (ulonglong)param_1[0x12] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 10:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x14];
    goto code_r0x00014093a5b9;
  case 0xb:
    puVar19 = &UNK_1430240a8;
    lVar16 = (longlong)*(int *)(&UNK_1430240a8 + (ulonglong)param_1[0x16] * 4);
    goto code_r0x00014093a318;
  case 0xc:
    puVar19 = &UNK_143024094;
    lVar16 = (longlong)*(int *)(&UNK_143024094 + (ulonglong)param_1[0x18] * 4);
    goto code_r0x00014093a378;
  case 0xd:
    puVar19 = &UNK_143024080;
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(longlong)*(int *)(&UNK_143024080 + (ulonglong)param_1[0x1a] * 4);
    goto code_r0x00014093a564;
  case 0xe:
                    /* WARNING: Could not recover jumptable at 0x00014093a2d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_14302406c + *(int *)(&UNK_14302406c + (ulonglong)param_1[0x1c] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0xf:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x1e];
    puVar19 = &UNK_143024058;
    goto code_r0x00014093a416;
  case 0x10:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x20];
    puVar19 = &UNK_143024044;
    goto code_r0x00014093a2b1;
  case 0x11:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x22];
    goto code_r0x00014093a4ae;
  case 0x12:
    puVar19 = &UNK_14302401c;
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(longlong)*(int *)(&UNK_14302401c + (ulonglong)param_1[0x24] * 4);
    goto code_r0x00014093a5a3;
  case 0x13:
    puVar19 = &UNK_143024008;
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(longlong)*(int *)(&UNK_143024008 + (ulonglong)param_1[0x26] * 4);
    goto code_r0x00014093a693;
  case 0x14:
                    /* WARNING: Could not recover jumptable at 0x00014093a504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023ff4 + *(int *)(&UNK_143023ff4 + (ulonglong)param_1[0x28] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x15:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x2a];
    goto code_r0x00014093a538;
  case 0x16:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x2c];
    goto code_r0x00014093a640;
  case 0x17:
    puVar19 = &UNK_143023fb8;
    lVar16 = (longlong)*(int *)(&UNK_143023fb8 + (ulonglong)param_1[0x2e] * 4);
    goto code_r0x00014093a6b7;
  case 0x18:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x30];
    puVar19 = &UNK_143023fa4;
    goto code_r0x00014093a3d7;
  case 0x19:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x32];
  case 0xe9:
  case 0xeb:
  case 0xec:
    puVar19 = &UNK_143023f90;
code_r0x00014093a3b3:
                    /* WARNING: Could not recover jumptable at 0x00014093a3ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_00;
  case 0x1a:
                    /* WARNING: Could not recover jumptable at 0x00014093a74a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023f7c + *(int *)(&UNK_143023f7c + (ulonglong)param_1[0x34] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x1b:
                    /* WARNING: Could not recover jumptable at 0x00014093a270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023f68 + *(int *)(&UNK_143023f68 + (ulonglong)param_1[0x36] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x1c:
                    /* WARNING: Could not recover jumptable at 0x00014093a6de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023f54 + *(int *)(&UNK_143023f54 + (ulonglong)param_1[0x38] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x1d:
                    /* WARNING: Could not recover jumptable at 0x00014093a702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023f40 + *(int *)(&UNK_143023f40 + (ulonglong)param_1[0x3a] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x1e:
    uVar14 = (ulonglong)param_1[0x3c];
    puVar19 = &UNK_143023f2c;
    goto code_r0x00014093a5ff;
  case 0x1f:
  case 99:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x3e];
    goto code_r0x00014093a48a;
  case 0x20:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x40];
    goto code_r0x00014093a61c;
  case 0x21:
                    /* WARNING: Could not recover jumptable at 0x00014093a2fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023ef0 + *(int *)(&UNK_143023ef0 + (ulonglong)param_1[0x42] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x22:
    puVar19 = &UNK_143023edc;
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(longlong)*(int *)(&UNK_143023edc + (ulonglong)param_1[0x44] * 4);
  case 0xb8:
                    /* WARNING: Could not recover jumptable at 0x00014093a294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(UNRECOVERED_JUMPTABLE_00 + (longlong)puVar19))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x23:
    puVar19 = &UNK_143023ec8;
    lVar16 = (longlong)*(int *)(&UNK_143023ec8 + (ulonglong)param_1[0x46] * 4);
    goto code_r0x00014093a225;
  case 0x24:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x48];
    puVar19 = &UNK_143023eb4;
    goto code_r0x00014093a245;
  case 0x25:
    piVar15 = (int *)(ulonglong)param_1[0x4a];
    puVar19 = &UNK_143023ea0;
    goto code_r0x00014093a1fd;
  case 0x26:
                    /* WARNING: Could not recover jumptable at 0x00014093a726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023e8c + *(int *)(&UNK_143023e8c + (ulonglong)param_1[0x4c] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x27:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x4e];
    goto code_r0x00014093a664;
  case 0x28:
                    /* WARNING: Could not recover jumptable at 0x00014093a35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023e64 + *(int *)(&UNK_143023e64 + (ulonglong)param_1[0x50] * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x29:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)param_1[0x52];
    goto code_r0x00014093a4d2;
  case 0x2a:
    goto code_r0x00014093a6a7;
  case 0x2b:
  case 0x2d:
  case 0x2e:
code_r0x00014093a6a7:
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (&UNK_143023e0b)[uVar14]);
    lVar16 = CONCAT71(uVar17,bVar11 + 0x82);
code_r0x00014093a6b7:
                    /* WARNING: Could not recover jumptable at 0x00014093a6ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(code *)(puVar19 + lVar16))(param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x2c:
    bVar24 = (bool)(bVar22 & 1);
    param_1 = (uint *)((longlong)param_1 + -1);
    if (param_1 == (uint *)0x0 || cVar23 == '\0') {
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      UNRECOVERED_JUMPTABLE_00 =
           (code *)(CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(cVar23,bVar20)) &
                   0xffffffff);
      bVar24 = *(byte *)(param_3 - 0x73) < (byte)param_1;
    }
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(ulonglong)((int)UNRECOVERED_JUMPTABLE_00 + 0x26e9ca6 + (uint)bVar24);
    goto code_r0x00014093a452;
  case 0x2f:
    goto code_r0x00014093a693;
  case 0x30:
  case 0x32:
  case 0x33:
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(ulonglong)*(uint *)(&UNK_143023da8 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4);
    goto code_r0x00014093a693;
  case 0x31:
    return (code *)CONCAT71(uVar17,!bVar24);
  case 0x34:
    uVar14 = (ulonglong)unaff_RBX & 0xffffffff;
    *(int *)(uVar14 + 0x48000000) =
         (*(int *)(uVar14 + 0x48000000) + 0x6686ea73) - (uint)((bVar11 >> 5 & 1) != 0);
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + *(char *)(uVar14 + 99));
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71((int7)(uVar14 >> 8),(char)uVar14 + -0x7e);
code_r0x00014093a693:
                    /* WARNING: Could not recover jumptable at 0x00014093a696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(UNRECOVERED_JUMPTABLE_00 + (longlong)puVar19))(param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x35:
  case 0x37:
  case 0x38:
    cVar3 = *UNRECOVERED_JUMPTABLE_00;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
    return (code *)CONCAT71(uVar17,!CARRY1((byte)cVar3,bVar11));
  case 0x36:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)(uVar12 + 0x43023da8);
    goto code_r0x00014093a5a3;
  case 0x39:
    goto code_r0x00014093a66b;
  case 0x3a:
  case 0x3c:
  case 0x3d:
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)
                      (byte)(bVar18 + *(char *)((ulonglong)
                                                (uint)(int)(short)UNRECOVERED_JUMPTABLE_00 + 99));
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(ulonglong)
                 CONCAT31((int3)(char)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8),bVar11 + 0x82);
    goto code_r0x00014093a66b;
  case 0x3b:
    out(*unaff_RSI,(short)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 0x10) >> 0xf);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (&UNK_143023e0b)[uVar14]);
    goto code_r0x00014093a649;
  case 0x3e:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
    *unaff_RDI = *unaff_RDI + bVar18;
    UNRECOVERED_JUMPTABLE_00 = (code *)((ulonglong)unaff_RBX & 0xffffffff);
    puVar19 = (undefined *)0x43023e78;
    goto code_r0x00014093a66b;
  case 0x3f:
  case 0x41:
  case 0x42:
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + uVar14 + 0xd6113da8) =
         *(uint *)(UNRECOVERED_JUMPTABLE_00 + uVar14 + 0xd6113da8) ^ 0x818bc3c0;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
code_r0x00014093a664:
    puVar19 = &UNK_143023e78;
code_r0x00014093a66b:
                    /* WARNING: Could not recover jumptable at 0x00014093a672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                           (param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x40:
    goto code_r0x00014093a10e;
  case 0x43:
code_r0x00014093a649:
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,bVar11 + 0x82);
code_r0x00014093a640:
                    /* WARNING: Could not recover jumptable at 0x00014093a64e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023fcc +
                           *(int *)(&UNK_143023fcc + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                           (param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x44:
  case 0x46:
  case 0x47:
    goto code_r0x00014093a640;
  case 0x45:
    piVar15 = (int *)((longlong)param_1 * 5 + -0x70);
    *piVar15 = *piVar15 + 1;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)(uint)(int)(short)UNRECOVERED_JUMPTABLE_00;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
    *(float *)(UNRECOVERED_JUMPTABLE_00 + 0x9c) = fVar26;
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + 0xa0) = uVar27;
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + 0xa4) = in_XMM0_Dc;
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + 0xa8) = in_XMM0_Dd;
    break;
  case 0x48:
    goto code_r0x00014093a62f;
  case 0x49:
  case 0x4b:
  case 0x4c:
    fVar26 = 0.0;
code_r0x00014093a62f:
    return (code *)CONCAT71(uVar17,(float)param_1[0x41] <= fVar26);
  case 0x4a:
    *(byte *)param_1 = (char)*param_1 + bVar11;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
code_r0x00014093a10e:
    *(float *)(&UNK_143023eac + uVar14) = fVar26;
    break;
  case 0x4d:
    pbVar1 = &UNK_143023d35 + uVar14;
    bVar11 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar18;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)(uVar12 + 0x26e98e1 + (uint)CARRY1(bVar11,bVar18))
    ;
    goto code_r0x00014093a623;
  case 0x4e:
  case 0x50:
  case 0x51:
    goto code_r0x00014093a618;
  case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x52:
    param_1 = (uint *)((longlong)param_1 + -1);
    if (param_1 == (uint *)0x0 || bVar25) {
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      UNRECOVERED_JUMPTABLE_00 = (code *)((ulonglong)unaff_RBX & 0xffffffff);
      *(uint *)UNRECOVERED_JUMPTABLE_00 = *(uint *)UNRECOVERED_JUMPTABLE_00 + 0x48000001;
      puVar19 = (undefined *)0x43023f04;
      goto code_r0x00014093a623;
    }
code_r0x00014093a618:
    *(byte *)param_1 = (char)*param_1 + bVar11;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
code_r0x00014093a61c:
    puVar19 = &UNK_143023f04;
code_r0x00014093a623:
                    /* WARNING: Could not recover jumptable at 0x00014093a62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_00;
  case 0x53:
  case 0x55:
  case 0x56:
    uVar14 = (ulonglong)(uVar12 + 0x43023da8);
    goto code_r0x00014093a5ff;
  case 0x54:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
  case 0xe0:
    *(float *)(&UNK_143023e7c + uVar14) = fVar26;
    *(uint *)(&UNK_143023e80 + uVar14) = uVar27;
    *(uint *)(&UNK_143023e84 + uVar14) = in_XMM0_Dc;
    *(uint *)(&UNK_143023e88 + uVar14) = in_XMM0_Dd;
    break;
  case 0x57:
    goto code_r0x00014093a5f3;
  case 0x58:
  case 0x5a:
  case 0x5b:
code_r0x00014093a5f3:
    uVar14 = (ulonglong)(uVar12 ^ 0x48000000);
    puVar19 = (undefined *)0x43023f2c;
code_r0x00014093a5ff:
                    /* WARNING: Could not recover jumptable at 0x00014093a606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(code *)(puVar19 + *(int *)(puVar19 + uVar14 * 4)))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x59:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
code_r0x00014093a4d2:
    puVar19 = &UNK_143023e50;
code_r0x00014093a4d9:
                    /* WARNING: Could not recover jumptable at 0x00014093a4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                           (param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x5c:
    uVar14 = (ulonglong)*(uint *)(&UNK_143023da8 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4);
    goto code_r0x00014093a5e2;
  case 0x5d:
  case 0x5f:
  case 0x60:
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (&UNK_143023e0b)[uVar14]);
    uVar14 = CONCAT71(uVar17,bVar11 + 0x82);
    goto code_r0x00014093a5e2;
  case 0x5e:
    (&UNK_143023d35)[uVar14] = (&UNK_143023d35)[uVar14] & bVar18;
    uVar12 = uVar12 + 0x26e9e02;
code_r0x00014093a332:
    lVar16 = (longlong)*(int *)(puVar19 + (ulonglong)uVar12 * 4);
code_r0x00014093a336:
                    /* WARNING: Could not recover jumptable at 0x00014093a339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(code *)(puVar19 + lVar16))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x61:
code_r0x00014093a5cb:
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
    bVar11 = *unaff_RDI;
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_R12;
    return (code *)CONCAT71(uVar17,-1 < (char)bVar11);
  case 0x62:
  case 100:
  case 0x65:
    param_1 = (uint *)((longlong)param_1 + -1);
    if (param_1 == (uint *)0x0 || bVar25) {
      register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
      goto code_r0x00014093a5cb;
    }
    uVar12 = uVar12 + 0x26e9b06 + (uint)bVar24;
code_r0x00014093a5de:
    uVar14 = (ulonglong)*(int *)(puVar19 + (ulonglong)uVar12 * 4);
code_r0x00014093a5e2:
                    /* WARNING: Could not recover jumptable at 0x00014093a5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(code *)(puVar19 + uVar14))(param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x66:
    goto code_r0x00014093a5b7;
  case 0x67:
  case 0x69:
  case 0x6a:
code_r0x00014093a5b7:
code_r0x00014093a5b9:
                    /* WARNING: Could not recover jumptable at 0x00014093a5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_1430240bc +
                           *(int *)(&UNK_1430240bc + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x68:
    return (code *)CONCAT71(uVar17,(float)param_1[0x1b] <= fVar26);
  case 0x6b:
    goto code_r0x00014093a5a3;
  case 0x6c:
  case 0x6e:
  case 0x6f:
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(ulonglong)*(uint *)(&UNK_143023da8 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4);
    goto code_r0x00014093a5a3;
  case 0x6d:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
code_r0x00014093a538:
    puVar19 = &UNK_143023fe0;
code_r0x00014093a53f:
    lVar16 = (longlong)*(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4);
code_r0x00014093a543:
                    /* WARNING: Could not recover jumptable at 0x00014093a546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(code *)(puVar19 + lVar16))(param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x70:
    goto code_r0x00014093a58f;
  case 0x71:
  case 0x73:
  case 0x74:
    UNRECOVERED_JUMPTABLE_00 = (code *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xff);
code_r0x00014093a58f:
    uVar14 = (ulonglong)unaff_RBX & 0xffffffff;
    *(int *)(uVar14 + 0x48000000) =
         *(int *)(uVar14 + 0x48000000) + -0x6582ea73 +
         (uint)(((byte)UNRECOVERED_JUMPTABLE_00 >> 5 & 1) != 0);
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + *(char *)(uVar14 + 99));
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71((int7)(uVar14 >> 8),(char)uVar14 + -0x7e);
code_r0x00014093a5a3:
                    /* WARNING: Could not recover jumptable at 0x00014093a5a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(UNRECOVERED_JUMPTABLE_00 + (longlong)puVar19))(param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (&UNK_143023e0b)[uVar14]);
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,bVar11 + 0x82);
    goto code_r0x00014093a57e;
  case 0x76:
  case 0x78:
  case 0x79:
    puVar19 = (undefined *)0x4302410c;
    goto code_r0x00014093a57e;
  case 0x7a:
    goto code_r0x00014093a567;
  case 0x7b:
  case 0x7d:
  case 0x7e:
    goto code_r0x00014093a564;
  case 0x7c:
    puVar2 = (uint *)(&UNK_143023d35 + uVar14);
    uVar27 = *puVar2;
    *puVar2 = *puVar2 + (uint)param_1;
    uVar12 = uVar12 + 0x26e9fa8 + (uint)CARRY4(uVar27,(uint)param_1);
code_r0x00014093a1dc:
                    /* WARNING: Could not recover jumptable at 0x00014093a1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (ulonglong)uVar12 * 4)))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x7f:
    uVar14 = (ulonglong)unaff_RBX & 0xffffffff;
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + *(char *)(uVar14 + 99));
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71((int7)(uVar14 >> 8),(char)uVar14 + -0x7e);
code_r0x00014093a564:
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (longlong)puVar19;
code_r0x00014093a567:
                    /* WARNING: Could not recover jumptable at 0x00014093a567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*UNRECOVERED_JUMPTABLE_00)(param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x80:
  case 0x82:
  case 0x83:
    cVar3 = *UNRECOVERED_JUMPTABLE_00;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
    return (code *)CONCAT71(uVar17,!CARRY1((byte)cVar3,bVar11));
  case 0x81:
    if ((char *)((longlong)param_1 + -1) == (char *)0x0 || bVar25) {
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      piVar15 = (int *)((ulonglong)unaff_RBX & 0xffffffff);
      *piVar15 = *piVar15 + -0x48000001;
      puVar19 = (undefined *)0x43023ea0;
    }
    else {
      pbVar1 = &UNK_143023d35 + uVar14;
      bVar11 = *pbVar1;
      bVar18 = (byte)(char *)((longlong)param_1 + -1);
      *pbVar1 = *pbVar1 + bVar18;
      piVar15 = (int *)(ulonglong)(uVar12 + 0x26e9ca3 + (uint)CARRY1(bVar11,bVar18));
    }
code_r0x00014093a1fd:
                    /* WARNING: Could not recover jumptable at 0x00014093a204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)piVar15 * 4)))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0x84:
    goto code_r0x00014093a53f;
  case 0x85:
  case 0x87:
  case 0x88:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x86:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
code_r0x00014093a4ae:
    puVar19 = &UNK_143024030;
code_r0x00014093a4b5:
    lVar16 = (longlong)*(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4);
code_r0x00014093a4b9:
                    /* WARNING: Could not recover jumptable at 0x00014093a4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(code *)(puVar19 + lVar16))(param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x89:
    goto code_r0x00014093a52f;
  case 0x8a:
  case 0x8c:
  case 0x8d:
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
code_r0x00014093a52f:
    uVar14 = (ulonglong)unaff_RBX & 0xffffffff;
    *(int *)(uVar14 + 0x48000000) = *(int *)(uVar14 + 0x48000000) + 0x655eea73;
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + *(char *)(uVar14 + 99));
    lVar16 = CONCAT71((int7)(uVar14 >> 8),(char)uVar14 + -0x7e);
    goto code_r0x00014093a543;
  case 0x8b:
    (&UNK_143023d35)[uVar14] = ((&UNK_143023d35)[uVar14] - bVar18) - bVar24;
  case 0xca:
code_r0x00014093a427:
    bVar24 = (bVar11 >> 5 & 1) != 0;
    pbVar1 = (byte *)(param_3 - 0x73);
    bVar11 = *pbVar1;
    bVar20 = *pbVar1;
    *pbVar1 = (bVar20 - bVar18) - bVar24;
    uVar12 = iVar21 + 0x26e9d14 + (uint)(bVar11 < bVar18 || (byte)(bVar20 - bVar18) < bVar24);
code_r0x00014093a434:
    UNRECOVERED_JUMPTABLE_00 = (code *)(longlong)*(int *)(puVar19 + (ulonglong)uVar12 * 4);
    goto code_r0x00014093a438;
  case 0x90:
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)
                      (byte)(bVar18 + *(char *)(((ulonglong)&stack0x00000000 & 0xffffffff) + 99));
    lVar16 = CONCAT71((int7)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8),0x82);
code_r0x00014093a318:
                    /* WARNING: Could not recover jumptable at 0x00014093a31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(code *)(puVar19 + lVar16))(param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0x93:
    if ((char *)((longlong)param_1 + -1) == (char *)0x0 || cVar23 == '\0') {
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
      *(uint *)(UNRECOVERED_JUMPTABLE_00 + uVar14 + 0xd6113da8) =
           *(uint *)(UNRECOVERED_JUMPTABLE_00 + uVar14 + 0xd6113da8) & 0x418bc3c0;
    }
    pbVar1 = &UNK_143023d35 + uVar14;
    bVar11 = *pbVar1;
    bVar18 = (byte)(char *)((longlong)param_1 + -1);
    *pbVar1 = *pbVar1 - bVar18;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)(uVar12 + 0x26e9c02 + (uint)(bVar11 < bVar18));
    goto code_r0x00014093a51e;
  case 0x94:
  case 0x96:
  case 0x97:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x95:
    return (code *)CONCAT71(uVar17,(float)param_1[0x21] <= 0.0);
  case 0x98:
    goto code_r0x00014093a4ef;
  case 0x99:
  case 0x9b:
  case 0x9c:
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,!bVar24);
code_r0x00014093a4ef:
    return UNRECOVERED_JUMPTABLE_00;
  case 0x9a:
  case 0xc6:
  case 200:
  case 0xc9:
    goto code_r0x00014093a438;
  case 0x9d:
    goto code_r0x00014093a4db;
  case 0x9e:
  case 0xa0:
  case 0xa1:
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (&UNK_143023e0b)[uVar14]);
code_r0x00014093a4db:
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,bVar11 + 0x82);
    goto code_r0x00014093a4d9;
  case 0x9f:
    lVar16 = CONCAT71(uVar17,bVar11 + 0x82);
    goto code_r0x00014093a336;
  case 0xa2:
    *unaff_RDI = *unaff_RDI + bVar18;
    puVar2 = (uint *)(((ulonglong)unaff_RBX & 0xffffffff) + 1);
    *puVar2 = *puVar2 | 0x8d480000;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)(iVar21 + 0x26e9977);
    goto code_r0x00014093a4d9;
  case 0xa3:
  case 0xa5:
  case 0xa6:
    *(undefined2 *)UNRECOVERED_JUMPTABLE_00 = in_ES;
    cVar3 = *UNRECOVERED_JUMPTABLE_00;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
    return (code *)CONCAT71(uVar17,!CARRY1((byte)cVar3,bVar11));
  case 0xa4:
    *(uint *)UNRECOVERED_JUMPTABLE_00 = *(uint *)UNRECOVERED_JUMPTABLE_00 & 0x48000001;
    puVar19 = (undefined *)0x43023eb4;
code_r0x00014093a245:
                    /* WARNING: Could not recover jumptable at 0x00014093a24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_00;
  case 0xa7:
    goto code_r0x00014093a4b3;
  case 0xa8:
  case 0xaa:
  case 0xab:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)(uVar12 + 0x26e9b7b + (uint)bVar24);
    goto code_r0x00014093a4b5;
  case 0xa9:
    *(float *)(&UNK_143023de4 + uVar14) = fVar26;
    *(uint *)(&UNK_143023de8 + uVar14) = uVar27;
    *(uint *)(&UNK_143023dec + uVar14) = in_XMM0_Dc;
    *(uint *)(&UNK_143023df0 + uVar14) = in_XMM0_Dd;
  case 0xc2:
    *(float *)(&UNK_143023de4 + uVar14) = fVar26;
    break;
  case 0xac:
    goto code_r0x00014093a49f;
  case 0xad:
  case 0xaf:
  case 0xb0:
    *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
code_r0x00014093a49f:
    UNRECOVERED_JUMPTABLE_00 = (code *)((ulonglong)unaff_RBX & 0xffffffff);
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + 0x48000000) =
         *(uint *)(UNRECOVERED_JUMPTABLE_00 + 0x48000000) | 0x9b7b158d;
code_r0x00014093a4b3:
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (char)UNRECOVERED_JUMPTABLE_00[99]);
    lVar16 = CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8),
                      (char)UNRECOVERED_JUMPTABLE_00 + -0x7e);
    goto code_r0x00014093a4b9;
  case 0xae:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
    *(float *)(&UNK_143023e8c + uVar14) = fVar26;
    *(uint *)(&UNK_143023e90 + uVar14) = uVar27;
    *(uint *)(&UNK_143023e94 + uVar14) = in_XMM0_Dc;
    *(uint *)(&UNK_143023e98 + uVar14) = in_XMM0_Dd;
    break;
  case 0xb1:
    goto code_r0x00014093a48a;
  case 0xb2:
  case 0xb4:
  case 0xb5:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
code_r0x00014093a48a:
                    /* WARNING: Could not recover jumptable at 0x00014093a498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143023f18 +
                           *(int *)(&UNK_143023f18 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0xb3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb6:
    goto code_r0x00014093a477;
  case 0xb7:
  case 0xb9:
  case 0xba:
    goto code_r0x00014093a474;
  case 0xbb:
    goto code_r0x00014093a463;
  case 0xbc:
  case 0xbe:
  case 0xbf:
code_r0x00014093a463:
    *(byte *)(param_3 - 0x73) = *(byte *)(param_3 - 0x73) | bVar18;
    uVar12 = iVar21 + 0x26e9d00;
code_r0x00014093a470:
    UNRECOVERED_JUMPTABLE_00 = (code *)(longlong)*(int *)(puVar19 + (ulonglong)uVar12 * 4);
code_r0x00014093a474:
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (longlong)puVar19;
code_r0x00014093a477:
                    /* WARNING: Could not recover jumptable at 0x00014093a477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return UNRECOVERED_JUMPTABLE_00;
  case 0xbd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc0:
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (&UNK_143023e0b)[uVar14]);
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,bVar11 + 0x82);
    goto code_r0x00014093a452;
  case 0xc1:
  case 0xc3:
  case 0xc4:
    puVar19 = (undefined *)0x430240f8;
code_r0x00014093a452:
                    /* WARNING: Could not recover jumptable at 0x00014093a459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                           (param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0xc5:
    goto code_r0x00014093a43b;
  case 199:
    goto code_r0x00014093a2b5;
  case 0xcb:
  case 0xcd:
  case 0xce:
    if (-0x143023da9 < (longlong)uVar14) goto code_r0x00014093a427;
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,bVar11 + 0x82);
code_r0x00014093a438:
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (longlong)puVar19;
code_r0x00014093a43b:
                    /* WARNING: Could not recover jumptable at 0x00014093a43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return UNRECOVERED_JUMPTABLE_00;
  case 0xcc:
    pcVar13 = (char *)CONCAT71(uVar17,cRama480110ff3000000);
    *pcVar13 = *pcVar13 + cRama480110ff3000000;
    *(int *)unaff_RDI = (int)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcf:
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (&UNK_143023e0b)[uVar14]);
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,bVar11 + 0x82);
    goto code_r0x00014093a416;
  case 0xd0:
  case 0xd2:
  case 0xd3:
    puVar19 = (undefined *)0x43024058;
code_r0x00014093a416:
                    /* WARNING: Could not recover jumptable at 0x00014093a41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                           (param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0xd1:
    puVar19 = (undefined *)0x43024044;
code_r0x00014093a2b1:
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(longlong)*(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4);
code_r0x00014093a2b5:
                    /* WARNING: Could not recover jumptable at 0x00014093a2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(UNRECOVERED_JUMPTABLE_00 + (longlong)puVar19))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0xd4:
    goto code_r0x00014093a3ff;
  case 0xd5:
  case 0xd7:
  case 0xd8:
    goto code_r0x00014093a3fc;
  case 0xd6:
    *(uint *)UNRECOVERED_JUMPTABLE_00 = *(uint *)UNRECOVERED_JUMPTABLE_00 + uVar12;
    *(float *)(&UNK_143023eac + uVar14) = fVar26;
    *(uint *)(&UNK_143023eb0 + uVar14) = uVar27;
    *(uint *)(&UNK_143023eb4 + uVar14) = in_XMM0_Dc;
    *(uint *)(&UNK_143023eb8 + uVar14) = in_XMM0_Dd;
    break;
  case 0xd9:
    bVar24 = (bVar11 >> 5 & 1) != 0;
    pbVar1 = (byte *)(param_3 - 0x73);
    bVar11 = *pbVar1;
    bVar20 = *pbVar1;
    *pbVar1 = bVar20 + bVar18 + bVar24;
    uVar12 = iVar21 + 0x26e9d64 + (uint)(CARRY1(bVar11,bVar18) || CARRY1(bVar20 + bVar18,bVar24));
code_r0x00014093a3f8:
    UNRECOVERED_JUMPTABLE_00 = (code *)(longlong)*(int *)(puVar19 + (ulonglong)uVar12 * 4);
code_r0x00014093a3fc:
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (longlong)puVar19;
code_r0x00014093a3ff:
                    /* WARNING: Could not recover jumptable at 0x00014093a3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return UNRECOVERED_JUMPTABLE_00;
  case 0xda:
  case 0xdc:
  case 0xdd:
    cVar3 = *UNRECOVERED_JUMPTABLE_00;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
    return (code *)CONCAT71(uVar17,!CARRY1((byte)cVar3,bVar11));
  case 0xdb:
    lVar16 = CONCAT71(uVar17,bVar11 + 0x82);
code_r0x00014093a225:
                    /* WARNING: Could not recover jumptable at 0x00014093a228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(code *)(puVar19 + lVar16))();
    return UNRECOVERED_JUMPTABLE_00;
  case 0xde:
    goto code_r0x00014093a3d7;
  case 0xdf:
  case 0xe1:
  case 0xe2:
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (&UNK_143023e0b)[uVar14]);
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,bVar11 + 0x82);
    goto code_r0x00014093a3d7;
  case 0xe3:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
    *unaff_RDI = *unaff_RDI + bVar18;
  case 0xe4:
  case 0xe6:
  case 0xe7:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)(iVar21 + 0x48000000);
    puVar19 = (undefined *)0x43023fa4;
code_r0x00014093a3d7:
                    /* WARNING: Could not recover jumptable at 0x00014093a3de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(puVar19 + *(int *)(puVar19 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                           (param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0xe5:
    *(float *)(&UNK_143023e0c + uVar14) = fVar26;
    break;
  case 0xe8:
    *(double *)((longlong)unaff_RBX + 0x6348026e) = (double)in_ST0;
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,bVar11 + 0x82);
    goto code_r0x00014093a3b3;
  case 0xea:
    UNRECOVERED_JUMPTABLE_00[uVar14 + 0xcceb3da8] =
         (code)((char)UNRECOVERED_JUMPTABLE_00[uVar14 + 0xcceb3da8] + 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xed:
    return (code *)CONCAT71(uVar17,(float)param_1[0x13] <= 0.0);
  case 0xee:
  case 0xf0:
  case 0xf1:
    if ((char *)((longlong)param_1 + -1) == (char *)0x0 || cVar23 == '\0') {
      *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar1 = &UNK_143023d35 + uVar14;
    bVar11 = *pbVar1;
    bVar18 = (byte)(char *)((longlong)param_1 + -1);
    *pbVar1 = *pbVar1 + bVar18;
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)(uVar12 + 0x26e9bdd + (uint)CARRY1(bVar11,bVar18))
    ;
    goto code_r0x00014093a3b3;
  case 0xef:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + bVar11);
    *(float *)(&UNK_143023e34 + uVar14) = fVar26;
    *(uint *)(&UNK_143023e38 + uVar14) = uVar27;
    *(uint *)(&UNK_143023e3c + uVar14) = in_XMM0_Dc;
    *(uint *)(&UNK_143023e40 + uVar14) = in_XMM0_Dd;
    break;
  case 0xf2:
    goto code_r0x00014093a387;
  case 0xf3:
  case 0xf5:
  case 0xf6:
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(uVar17,!bVar24);
code_r0x00014093a387:
    return UNRECOVERED_JUMPTABLE_00;
  case 0xf4:
    if ((POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xff) & 1U) == 0) {
      halt_baddata();
    }
    break;
  case 0xf7:
    param_1 = (uint *)(ulonglong)(byte)(bVar18 + (&UNK_143023e0b)[uVar14]);
  case 0xf8:
  case 0xfa:
  case 0xfb:
    *(byte *)(unaff_RBP + 0x6348026e) = *(byte *)(unaff_RBP + 0x6348026e) & bVar20;
    lVar16 = CONCAT71(uVar17,bVar11 + 0x82);
code_r0x00014093a378:
                    /* WARNING: Could not recover jumptable at 0x00014093a37b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)(*(code *)(puVar19 + lVar16))(param_1);
    return UNRECOVERED_JUMPTABLE_00;
  case 0xf9:
    UNRECOVERED_JUMPTABLE_00 =
         (code *)CONCAT71(uVar17,*(undefined1 *)
                                  ((longlong)unaff_RBX +
                                  ((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xff)));
    out(*unaff_RSI,0x3da8);
    param_1 = (uint *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                               CONCAT11((char)((ulonglong)param_1 >> 8) + bVar20,
                                        bVar18 + *(char *)(unaff_RBP + 0xd + (longlong)param_1 * 4))
                              );
    puVar19 = (undefined *)CONCAT62(0x14302,CONCAT11(bVar20 ^ 0x3d,0xa8));
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + 0x170) = (uint)in_XMM1_Qa;
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + 0x174) = uVar29;
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + 0x178) = in_XMM1_Dc;
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + 0x17c) = in_XMM1_Dd;
    *(float *)(UNRECOVERED_JUMPTABLE_00 + 0x174) = fVar26;
    break;
  case 0xfc:
  case 0xfd:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143023278);
  case 0xfe:
    *(undefined8 *)(unaff_RBP + 0x1d0) = in_XMM2_Qa;
    *(undefined8 *)(unaff_RBP + 0x1d8) = in_XMM2_Qb;
    *(uint *)(unaff_RBP + 0x1c0) = (uint)in_XMM1_Qa;
    *(uint *)(unaff_RBP + 0x1c4) = uVar29;
    *(uint *)(unaff_RBP + 0x1c8) = in_XMM1_Dc;
    *(uint *)(unaff_RBP + 0x1cc) = in_XMM1_Dd;
    *(float *)(unaff_RBP + 0x1b0) = fVar26;
    *(uint *)(unaff_RBP + 0x1b4) = uVar27;
    *(uint *)(unaff_RBP + 0x1b8) = in_XMM0_Dc;
    *(uint *)(unaff_RBP + 0x1bc) = in_XMM0_Dd;
    bVar11 = unaff_RSI[0xa9];
    *(undefined8 *)(unaff_RBP + 0x23e) = *(undefined8 *)(unaff_RSI + 0xb0);
    *(undefined8 *)(unaff_RBP + 0x238) = *(undefined8 *)(unaff_RSI + 0xaa);
    puVar10 = _UNK_143023da8;
    if (((in_R11B == '\0') || (**(longlong **)(unaff_RBP + 0x2f0) != 0)) || ((bVar11 & 1) != 0)) {
      *(undefined8 *)(unaff_RBP + 0xd0) = *(undefined8 *)(_UNK_143023da8 + 4);
      uVar4 = puVar10[1];
      uVar8 = puVar10[2];
      uVar9 = puVar10[3];
      *(undefined4 *)(unaff_RBP + 0xc0) = *puVar10;
      *(undefined4 *)(unaff_RBP + 0xc4) = uVar4;
      *(undefined4 *)(unaff_RBP + 200) = uVar8;
      *(undefined4 *)(unaff_RBP + 0xcc) = uVar9;
      lVar16 = *(longlong *)UNRECOVERED_JUMPTABLE_00;
      pdb_1415e74f0(unaff_RBP + 0x200,lVar16);
      *(undefined1 *)(unaff_RBP + 0x218) = *(undefined1 *)(lVar16 + 0x18);
      pdb_140a34930(unaff_RBP + 0xe0,*param_4);
      *(undefined8 *)(unaff_RBP + 0x90) = *(undefined8 *)(unaff_RBP + 0xd0);
      *(undefined4 *)(unaff_RBP + 0x80) = *(undefined4 *)(unaff_RBP + 0xc0);
      *(undefined4 *)(unaff_RBP + 0x84) = *(undefined4 *)(unaff_RBP + 0xc4);
      *(undefined4 *)(unaff_RBP + 0x88) = *(undefined4 *)(unaff_RBP + 200);
      *(undefined4 *)(unaff_RBP + 0x8c) = *(undefined4 *)(unaff_RBP + 0xcc);
      *(undefined4 *)(unaff_RBP + 0x60) = *(undefined4 *)(unaff_RBP + 0x200);
      *(undefined4 *)(unaff_RBP + 100) = *(undefined4 *)(unaff_RBP + 0x204);
      *(undefined4 *)(unaff_RBP + 0x68) = *(undefined4 *)(unaff_RBP + 0x208);
      *(undefined4 *)(unaff_RBP + 0x6c) = *(undefined4 *)(unaff_RBP + 0x20c);
      *(undefined8 *)(unaff_RBP + 0x70) = *(undefined8 *)(unaff_RBP + 0x210);
      *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x218);
      *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0xe0);
      *(undefined8 *)(unaff_RBP + 0xa0) = *(undefined8 *)(unaff_RBP + 0xe8);
      *(undefined8 *)(unaff_RBP + 0xa8) = *(undefined8 *)(unaff_RBP + 0xf0);
      *(undefined8 *)(unaff_RBP + 0xb0) = *(undefined8 *)(unaff_RBP + 0xf8);
      *(undefined4 *)(unaff_RBP + 0xb8) = *(undefined4 *)(unaff_RBP + 0x100);
      *(undefined8 *)(unaff_RBP + 0x130) = *(undefined8 *)(unaff_RBP + 0xb0);
      *(undefined4 *)(unaff_RBP + 0x138) = *(undefined4 *)(unaff_RBP + 0xb8);
      *(undefined4 *)(unaff_RBP + 0x13c) = *(undefined4 *)(unaff_RBP + 0xbc);
      *(undefined8 *)(unaff_RBP + 0x120) = *(undefined8 *)(unaff_RBP + 0xa0);
      *(undefined8 *)(unaff_RBP + 0x128) = *(undefined8 *)(unaff_RBP + 0xa8);
      *(undefined8 *)(unaff_RBP + 0x110) = *(undefined8 *)(unaff_RBP + 0x90);
      *(undefined8 *)(unaff_RBP + 0x118) = *(undefined8 *)(unaff_RBP + 0x98);
      *(undefined4 *)(unaff_RBP + 0x100) = *(undefined4 *)(unaff_RBP + 0xc0);
      *(undefined4 *)(unaff_RBP + 0x104) = *(undefined4 *)(unaff_RBP + 0xc4);
      *(undefined4 *)(unaff_RBP + 0x108) = *(undefined4 *)(unaff_RBP + 200);
      *(undefined4 *)(unaff_RBP + 0x10c) = *(undefined4 *)(unaff_RBP + 0xcc);
      *(undefined8 *)(unaff_RBP + 0xf0) = *(undefined8 *)(unaff_RBP + 0x210);
      *(undefined8 *)(unaff_RBP + 0xf8) = *(undefined8 *)(unaff_RBP + 0x218);
      *(undefined4 *)(unaff_RBP + 0xe0) = *(undefined4 *)(unaff_RBP + 0x200);
      *(undefined4 *)(unaff_RBP + 0xe4) = *(undefined4 *)(unaff_RBP + 0x204);
      *(undefined4 *)(unaff_RBP + 0xe8) = *(undefined4 *)(unaff_RBP + 0x208);
      *(undefined4 *)(unaff_RBP + 0xec) = *(undefined4 *)(unaff_RBP + 0x20c);
      *(undefined8 *)(unaff_RBP + 0x140) = 0;
      pdb_1415f5af0(unaff_RBP + 0x200,unaff_RBP + 0xe0);
      *(undefined8 *)(unaff_RBP + 0x230) = *(undefined8 *)(unaff_RBP + 0x200);
      *(undefined8 *)(unaff_RBP + 0x228) = *(undefined8 *)(unaff_RBP + 0x208);
      *(undefined8 *)(unaff_RBP + 0x220) = *(undefined8 *)(unaff_RBP + 0x210);
      *(undefined8 **)(unaff_RBP + 0x248) = unaff_R13;
      pdb_1404a1990();
      pdb_14049f1b0(*(longlong *)(unaff_RBP + 0x248) + 0x20);
      unaff_R13 = *(undefined8 **)(unaff_RBP + 0x248);
      *unaff_R13 = *(undefined8 *)(unaff_RBP + 0x230);
      unaff_R13[1] = *(undefined8 *)(unaff_RBP + 0x228);
      unaff_R13[2] = 0;
      unaff_R13[3] = *(undefined8 *)(unaff_RBP + 0x220);
      unaff_R13[4] = 0;
      unaff_R13[5] = 8;
      unaff_R13[6] = 0;
      unaff_R13[7] = 0;
      *(undefined8 *)(unaff_RBP + 0x1ed) = 0;
      *(undefined8 *)(unaff_RBP + 0x1f5) = 0;
      *(undefined8 *)(unaff_RBP + 0x1e0) = 0;
      *(undefined8 *)(unaff_RBP + 0x1e8) = 0;
      *(undefined8 *)(unaff_RBP + 0x1d0) = 0;
      *(undefined8 *)(unaff_RBP + 0x1d8) = 0;
      *(undefined8 *)(unaff_RBP + 0x1c0) = 0;
      *(undefined8 *)(unaff_RBP + 0x1c8) = 0;
      *(undefined8 *)(unaff_RBP + 0x1b0) = 0;
      *(undefined8 *)(unaff_RBP + 0x1b8) = 0;
      *(undefined8 *)(unaff_RBP + 0x238) = 0;
      *(undefined4 *)(unaff_RBP + 0x240) = 0;
      param_3 = unaff_R13[8];
    }
    puVar6 = (ulonglong *)*unaff_RBX;
    lVar16 = *unaff_R14;
    uVar5 = *(undefined1 *)(lVar16 + 0xf4);
    *(undefined8 *)(unaff_RBP + 0x134) = 0;
    *(undefined8 *)(unaff_RBP + 0x13c) = 0;
    *(undefined8 *)(unaff_RBP + 0x128) = 0;
    *(undefined8 *)(unaff_RBP + 0x130) = 0;
    *(undefined8 *)(unaff_RBP + 0xf0) = 0;
    *(undefined8 *)(unaff_RBP + 0xf8) = 0;
    puVar7 = *(undefined8 **)unaff_RDI;
    uVar4 = *(undefined4 *)(*(longlong *)param_1 + 0x28);
    *(undefined8 *)(unaff_RBP + 0xe0) = 0;
    *(undefined8 *)(unaff_RBP + 0xe8) = 4;
    *(undefined8 *)(unaff_RBP + 0x100) = 4;
    *(undefined8 *)(unaff_RBP + 0x108) = 0;
    *(undefined8 *)(unaff_RBP + 0x110) = *(undefined8 *)(lVar16 + 0xe8);
    *(undefined4 *)(unaff_RBP + 0x118) = *(undefined4 *)(lVar16 + 0xf0);
    *(undefined1 *)(unaff_RBP + 0x11c) = uVar5;
    auVar32._0_8_ = *puVar6 & 0xffffffff;
    auVar32._8_4_ = (int)(*puVar6 >> 0x20);
    auVar32._12_4_ = 0;
    fVar26 = (float)(SUB168(auVar32 | _DAT_142e33010,0) - (double)DAT_142e33010);
    fVar28 = (float)(SUB168(auVar32 | _DAT_142e33010,8) - DAT_142e33010._8_8_);
    auVar31._0_4_ = _DAT_142e61230 * fVar26 + (float)*puVar7;
    auVar31._4_4_ = _UNK_142e61234 * fVar28 + (float)((ulonglong)*puVar7 >> 0x20);
    auVar31._8_4_ = _UNK_142e61238 * 0.0 + 0.0;
    auVar31._12_4_ = _UNK_142e6123c * 0.0 + 0.0;
    auVar30._4_4_ = fVar28;
    auVar30._0_4_ = fVar28;
    auVar30._8_8_ = 0;
    auVar32 = divps(auVar31,auVar30);
    *(ulonglong *)(unaff_RBP + 0x120) = CONCAT44(fVar28,fVar26);
    *(longlong *)(unaff_RBP + 0x148) = auVar32._0_8_;
    *(undefined4 *)(unaff_RBP + 0x1ac) = uVar4;
    *(undefined8 *)(unaff_RBP + 0x150) = *(undefined8 *)(unaff_RBP + 0x1b0);
    *(undefined8 *)(unaff_RBP + 0x158) = *(undefined8 *)(unaff_RBP + 0x1b8);
    *(undefined4 *)(unaff_RBP + 0x160) = *(undefined4 *)(unaff_RBP + 0x1c0);
    *(undefined4 *)(unaff_RBP + 0x164) = *(undefined4 *)(unaff_RBP + 0x1c4);
    *(undefined4 *)(unaff_RBP + 0x168) = *(undefined4 *)(unaff_RBP + 0x1c8);
    *(undefined4 *)(unaff_RBP + 0x16c) = *(undefined4 *)(unaff_RBP + 0x1cc);
    *(undefined8 *)(unaff_RBP + 0x170) = *(undefined8 *)(unaff_RBP + 0x1d0);
    *(undefined8 *)(unaff_RBP + 0x178) = *(undefined8 *)(unaff_RBP + 0x1d8);
    *(undefined8 *)(unaff_RBP + 0x180) = *(undefined8 *)(unaff_RBP + 0x1e0);
    *(undefined8 *)(unaff_RBP + 0x188) = *(undefined8 *)(unaff_RBP + 0x1e8);
    *(undefined4 *)(unaff_RBP + 0x18d) = *(undefined4 *)(unaff_RBP + 0x1ed);
    *(undefined4 *)(unaff_RBP + 0x191) = *(undefined4 *)(unaff_RBP + 0x1f1);
    *(undefined4 *)(unaff_RBP + 0x195) = *(undefined4 *)(unaff_RBP + 0x1f5);
    *(undefined4 *)(unaff_RBP + 0x199) = *(undefined4 *)(unaff_RBP + 0x1f9);
    *(undefined1 *)(unaff_RBP + 0x19d) = 0;
    *(undefined8 *)(unaff_RBP + 0x19e) = *(undefined8 *)(unaff_RBP + 0x238);
    *(undefined8 *)(unaff_RBP + 0x1a4) = *(undefined8 *)(unaff_RBP + 0x23e);
    UNRECOVERED_JUMPTABLE_00 = (code *)pdb_140a6dc60(unaff_R13,unaff_RBP + 0xe0,param_3 >> 0x3f);
    return UNRECOVERED_JUMPTABLE_00;
  case 0xff:
    uVar14 = 1;
    if ((longlong)param_3 < 0) {
      uVar14 = (ulonglong)unaff_RSI ^ param_3;
    }
                    /* WARNING: Could not recover jumptable at 0x00014093bcfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)(&UNK_143024198 + *(int *)(&UNK_143024198 + uVar14 * 4)))();
    return UNRECOVERED_JUMPTABLE_00;
  }
  if ((uint *)(puVar19 + 8) == param_1) {
    return UNRECOVERED_JUMPTABLE_00;
  }
  if (puVar19[8] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140939e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(*(code *)((longlong)*(int *)(param_3 + (ulonglong)(byte)puVar19[9] * 4) + param_3)
                 )();
    return UNRECOVERED_JUMPTABLE_00;
  }
                    /* WARNING: Could not recover jumptable at 0x000140939e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_00 =
       (code *)(*(code *)((longlong)*(int *)((longlong)param_4 + (ulonglong)(byte)puVar19[9] * 4) +
                         (longlong)param_4))
                         (*(undefined4 *)(puVar19 + 0x10),*(undefined4 *)(puVar19 + 0xc));
  return UNRECOVERED_JUMPTABLE_00;
}

