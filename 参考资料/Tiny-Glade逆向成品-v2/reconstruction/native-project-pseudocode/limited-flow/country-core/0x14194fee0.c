// VA 0x14194fee0, PDB extent 722 bytes
// country_core::resources::history::color_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/color_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014195112f) overlaps instruction at (ram,0x00014195112c)
    */
/* WARNING: Removing unreachable block (ram,0x0001419501d6) */
/* WARNING: Removing unreachable block (ram,0x000141950dc0) */
/* WARNING: Removing unreachable block (ram,0x000141950f4f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::color_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/color_edit.rs
   Extent: 722 */

code * pdb_14194fee0(code *param_1,undefined1 (*param_2) [16],code *UNRECOVERED_JUMPTABLE_00,
                    undefined *param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  ulonglong uVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined2 uVar10;
  ushort uVar11;
  longlong unaff_RBX;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 *unaff_RBP;
  byte *unaff_RDI;
  ulonglong uVar22;
  undefined *in_R10;
  int unaff_R13D;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStackX_20 [8];
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  char acStack_50 [16];
  undefined1 auStack_40 [16];
  ulonglong uStack_30;
  char cStack_28;
  undefined1 auStack_27 [15];
  char cStack_18;
  undefined1 auStack_17 [15];
  
  puVar14 = auStack_78;
  puVar16 = auStack_78;
  puVar18 = auStack_78;
  puVar19 = (undefined8 *)auStack_78;
  puVar13 = auStack_78;
  puVar12 = auStack_78;
  pdb_141be7fb0(&uStack_30);
  if (cStack_28 == '\a') {
    *(ulonglong *)param_1 = uStack_30;
    param_1[8] = (code)0x15;
    return param_1;
  }
  auVar33[0xf] = cStack_18;
  auVar33._0_15_ = auStack_27;
  auVar39._1_15_ = auStack_17;
  auVar39[0] = cStack_18;
  acStack_50[0] = cStack_28;
  puVar8 = &UNK_14335b234;
  uVar5 = (ulonglong)*(int *)(&UNK_14335b234 + (uStack_30 & 0xff) * 4);
  bVar23 = 0xfffffffebcca4dcb < uVar5;
  UNRECOVERED_JUMPTABLE = (code *)(&UNK_14335b234 + uVar5);
  bVar24 = UNRECOVERED_JUMPTABLE == (code *)0x0;
  cVar4 = (char)UNRECOVERED_JUMPTABLE;
  uVar10 = SUB82(param_2,0);
  puVar21 = auStack_78;
  puVar3 = auStack_78;
  puVar17 = auStack_78;
  puVar15 = auStack_78;
  puVar20 = auStack_78;
  auVar32 = auVar33;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_30 & 0xff) {
  case 0:
    pdb_141bebcb0(param_1,acStack_50,&UNK_14335ada8,3);
    return param_1;
  case 1:
    pdb_141be9220(param_1,acStack_50,&UNK_14335ada8,3);
    return param_1;
  case 2:
    pdb_141beb8e0(param_1,acStack_50,&UNK_14335ada8,3);
    return param_1;
  case 3:
    pdb_141be9320(param_1,acStack_50,&UNK_14335ada8,3);
    return param_1;
  case 4:
    pdb_141be9920(param_1,acStack_50,&UNK_14335ada8,3);
    return param_1;
  case 5:
    pdb_141be8e20(param_1,acStack_50,&UNK_14335ada8,3);
    return param_1;
  case 6:
    pdb_141bec090(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 7:
    pdb_141be9610(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 8:
    pdb_141beb4d0(param_1,acStack_50,&UNK_14335ada8,3);
    return param_1;
  case 9:
    pdb_141bea7a0(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 10:
    pdb_141bea490(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 0xb:
    pdb_141beb0c0(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 0xc:
    pdb_141beb9e0(param_1,acStack_50,&UNK_14335ae08,4);
    return param_1;
  case 0xd:
    pdb_141beadc0(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 0xe:
    pdb_141be9020(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 0xf:
    pdb_141bebbb0(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 0x10:
    pdb_141beabc0(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 0x11:
    pdb_141be9d50(param_1,acStack_50,&UNK_14335add8,3);
    return param_1;
  case 0x12:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
    (&UNK_14335b1bd)[uVar5] = (&UNK_14335b1bd)[uVar5] + '4';
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case 0x13:
  case 0x14:
  case 0x15:
    out(*(undefined4 *)param_1,uVar10);
    out(param_1[4],uVar10);
    out(*(undefined4 *)(param_1 + 5),uVar10);
    if (!bVar24) goto code_r0x00014195048b;
    if (*(longlong *)(*param_2 + 7) == 0x6e6f697461646e75 && *(int *)*param_2 == 0x4335b234) {
      (&UNK_14335b235)[uVar5] = 2;
      goto code_r0x00014195047a;
    }
    break;
  case 0x16:
    if (bVar24) {
      bVar1 = in(uVar10);
      *unaff_RDI = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar12 = auStack_78;
    if (*(longlong *)(*param_2 + 5) == 0x6c6169726574614d && *(int *)*param_2 == 0x4335b234) {
      (&UNK_14335b235)[uVar5] = 0xf;
      goto code_r0x00014195047a;
    }
    break;
  case 0x17:
    UNK_14335b1b5 = UNK_14335b1b5 | 0x34;
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case 0x18:
    out(*(undefined4 *)param_1,uVar10);
    out(*(undefined4 *)(param_1 + 4),uVar10);
    uVar22 = (ulonglong)param_4 ^ *(ulonglong *)(*param_2 + in_FS_OFFSET + 3);
code_r0x000141950296:
    puVar12 = auStack_78;
    if (uVar22 == 0 && puVar8 == (undefined *)0x0) {
      (&UNK_14335b235)[uVar5] = 0xe;
code_r0x00014195047a:
      *UNRECOVERED_JUMPTABLE = (code)0x0;
      return UNRECOVERED_JUMPTABLE;
    }
    break;
  case 0x19:
    puVar12 = auStack_78;
    break;
  case 0x1a:
    *(int *)unaff_RDI = *(int *)unaff_RDI + 0x4335b234;
    goto code_r0x00014195047a;
  case 0x1b:
    if (*(short *)(*param_2 + 8) == 0x7373 && *(int *)*param_2 == 0x4335b234) {
      (&UNK_14335b235)[uVar5] = 10;
      goto code_r0x00014195047a;
    }
    puVar12 = &stack0xffffffffffffff80;
    if (*(short *)(*param_2 + 8) == 0x726f && *(longlong *)*param_2 == 0x6c6f43636967614d) {
      (&UNK_14335b235)[uVar5] = 0x10;
      goto code_r0x00014195047a;
    }
    break;
  case 0x1c:
    lVar9 = CONCAT71(0x14335b2,UNK_14335b1ed | 0x34);
    lVar2 = (longlong)*(int *)(param_2[4] + 0xc) * 0x65646461;
    if ((int)lVar2 == lVar2) {
      if (param_4 == (undefined *)0x0 && (int)lVar9 == *(int *)(*param_2 + 3))
      goto code_r0x0001419502cc;
      puVar8 = (undefined *)(*(ulonglong *)*param_2 ^ 0x6f6f527269617453);
      uVar22 = *(ulonglong *)(*param_2 + 3) ^ 0x6465666f6f527269;
      goto code_r0x000141950296;
    }
    puVar12 = auStack_78;
    if (param_4 == *(undefined **)(*param_2 + 6) && lVar9 == 0) {
code_r0x0001419502cc:
      (&UNK_14335b235)[uVar5] = 0xc;
      goto code_r0x00014195047a;
    }
    break;
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1e:
    if (bVar23) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!bVar24) {
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
      puVar13 = auStack_78;
      goto code_r0x00014195048b;
    }
    puVar12 = auStack_78;
    if (*(int *)(*param_2 + 8) == 0x74726f70 && *(longlong *)*param_2 == 0x69617453) {
      (&UNK_14335b235)[uVar5] = 0x11;
      goto code_r0x00014195047a;
    }
    break;
  case 0x1f:
    pcVar6 = (char *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffffa0);
    *pcVar6 = *pcVar6 + (char)pcVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
  case 0x21:
  case 0x24:
  case 0x25:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
    return UNRECOVERED_JUMPTABLE;
  case 0x22:
    auStack_40[0] = 0xd;
    UNRECOVERED_JUMPTABLE = (code *)pdb_142db90e0(auStack_40,&UNK_14339ab48,&UNK_143399fa8);
    goto LAB_141950514;
  case 0x23:
    UNRECOVERED_JUMPTABLE = (code *)pdb_142db90e0(auStackX_20);
    goto LAB_141950514;
  case 0x26:
    if ((POPCOUNT(unaff_R13D + 0x4335b234U & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_141950514:
    *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE;
    *(ulonglong *)param_1 = 0x8000000000000002;
    return param_1;
  case 0x27:
                    /* WARNING: Could not recover jumptable at 0x0001419507bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE_00)();
    return UNRECOVERED_JUMPTABLE;
  case 0x28:
    if ((*param_2)[4] == 'x' && *(int *)*param_2 == 0x65646e69) goto code_r0x000141950806;
    goto LAB_14195084f;
  case 0x29:
  case 0x2a:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    if (bVar23 || bVar24) {
      if (((ulonglong)UNRECOVERED_JUMPTABLE_00 ^ *(ulonglong *)(*param_2 + 6) | 0x14335b234) == 0) {
        (&UNK_14335b235)[uVar5] = 1;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
    }
    else if (((ulonglong)UNRECOVERED_JUMPTABLE_00 | 0x14335b234) == 0) {
      (&UNK_14335b235)[uVar5] = 4;
      *UNRECOVERED_JUMPTABLE = (code)0x0;
      return UNRECOVERED_JUMPTABLE;
    }
    goto LAB_1419509a6;
  case 0x2b:
    if (*(short *)(*param_2 + 8) == 0x7374 && *(longlong *)*param_2 == 0x6f727473) {
      (&UNK_14335b235)[uVar5] = 1;
      *UNRECOVERED_JUMPTABLE = (code)0x0;
      return UNRECOVERED_JUMPTABLE;
    }
LAB_14195084f:
    (&UNK_14335b235)[uVar5] = 3;
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x30:
    if (bVar23 || bVar24) {
                    /* WARNING: Could not recover jumptable at 0x00014195088f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE =
           (code *)(*(code *)(&UNK_14335b2d4 +
                             *(int *)(&UNK_14335b2d4 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))();
      return UNRECOVERED_JUMPTABLE;
    }
LAB_1419509a6:
    puVar8 = (undefined *)0x5;
code_r0x0001419509a8:
    (&UNK_14335b235)[uVar5] = (char)puVar8;
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x31:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
    return UNRECOVERED_JUMPTABLE;
  case 0x32:
    (&UNK_14335b235)[uVar5] = 0x34;
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x33:
code_r0x000141950806:
    (&UNK_14335b235)[uVar5] = 0;
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x34:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
    return UNRECOVERED_JUMPTABLE;
  case 0x35:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x36:
    return UNRECOVERED_JUMPTABLE;
  case 0x37:
    return UNRECOVERED_JUMPTABLE;
  case 0x38:
    return UNRECOVERED_JUMPTABLE;
  case 0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3a:
    return UNRECOVERED_JUMPTABLE;
  case 0x3b:
    return UNRECOVERED_JUMPTABLE;
  case 0x3c:
    return UNRECOVERED_JUMPTABLE;
  case 0x3d:
    return UNRECOVERED_JUMPTABLE;
  case 0x3e:
    goto code_r0x000141950a34;
  case 0x3f:
    return UNRECOVERED_JUMPTABLE;
  case 0x40:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case 0x41:
    cStack_18 = cStack_18 + '4' + bVar23;
    acStack_50[0] = '4';
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_14335b308 +
                 *(int *)(&UNK_14335b308 + ((ulonglong)UNRECOVERED_JUMPTABLE & 0xff) * 4));
    goto code_r0x000141950a34;
  case 0x42:
    return UNRECOVERED_JUMPTABLE;
  case 0x43:
    goto code_r0x0001419509a8;
  case 0x44:
    return UNRECOVERED_JUMPTABLE;
  case 0x45:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
    return UNRECOVERED_JUMPTABLE;
  case 0x46:
    return UNRECOVERED_JUMPTABLE;
  case 0x47:
    return UNRECOVERED_JUMPTABLE;
  case 0x48:
  case 0x4a:
    return UNRECOVERED_JUMPTABLE;
  case 0x49:
    return UNRECOVERED_JUMPTABLE;
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5b:
  case 0x5e:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
    goto code_r0x000141950fdd;
  case 0x4f:
    pdb_141be8af0(param_1);
    return param_1;
  case 0x50:
code_r0x000141950df8:
    puVar14 = puVar3;
    auVar26[0] = -(auVar33[0] == UNK_14335a310);
    auVar26[1] = -(auVar33[1] == UNK_14335a311);
    auVar26[2] = -(auVar33[2] == UNK_14335a312);
    auVar26[3] = -(auVar33[3] == UNK_14335a313);
    auVar26[4] = -(auVar33[4] == UNK_14335a314);
    auVar26[5] = -(auVar33[5] == UNK_14335a315);
    auVar26[6] = -(auVar33[6] == UNK_14335a316);
    auVar26[7] = -(auVar33[7] == UNK_14335a317);
    auVar26[8] = -(auVar33[8] == UNK_14335a318);
    auVar26[9] = -(auVar33[9] == UNK_14335a319);
    auVar26[10] = -(auVar33[10] == UNK_14335a31a);
    auVar26[0xb] = -(auVar33[0xb] == UNK_14335a31b);
    auVar26[0xc] = -(auVar33[0xc] == UNK_14335a31c);
    auVar26[0xd] = -(auVar33[0xd] == UNK_14335a31d);
    auVar26[0xe] = -(auVar33[0xe] == UNK_14335a31e);
    auVar26[0xf] = -(auVar33[0xf] == UNK_14335a31f);
    auVar26 = auVar26 & auVar39;
    if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
    UNRECOVERED_JUMPTABLE[1] = (code)0x11;
    goto code_r0x000141951160;
  case 0x51:
    out(*(undefined4 *)param_1,uVar10);
    puVar14 = auStack_78;
    if (!bVar23) {
code_r0x000141950d4b:
      if ((*param_2)[4] != 'h' || (int)puVar8 != *(int *)*param_2) goto LAB_141951100;
code_r0x000141950f17:
      UNRECOVERED_JUMPTABLE[1] = (code)0x12;
      goto code_r0x000141951160;
    }
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
    puVar14 = auStack_78;
    goto code_r0x000141950dbf;
  case 0x52:
    pdb_141beaab0(param_1,(ulonglong)acStack_50 & 0xffffffff);
    return param_1;
  case 0x53:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
code_r0x000141950e6f:
    if (*(int *)(*param_2 + 8) != 0x74686769 || *(longlong *)*param_2 != 0x65487473756a6441)
    goto LAB_141951100;
    UNRECOVERED_JUMPTABLE[1] = (code)0x3;
    goto code_r0x000141951160;
  case 0x54:
code_r0x000141950da7:
    puVar14 = puVar15;
    if (*(short *)(*param_2 + 8) == 0x6c6c && param_4 == puVar8) goto code_r0x000141951132;
code_r0x000141950dbf:
    if (*(short *)(*param_2 + 8) != 0x6c6c || puVar8 + 0x406f301 != *(undefined **)*param_2)
    goto LAB_141951100;
    UNRECOVERED_JUMPTABLE[1] = (code)0x2;
    goto code_r0x000141951160;
  case 0x55:
    puVar14 = (undefined1 *)(ulonglong)((int)auStack_78 - 0x20);
    UNRECOVERED_JUMPTABLE = (code *)&UNK_14335b234;
    switch(UNRECOVERED_JUMPTABLE_00) {
    case (code *)0x5:
      puVar8 = (undefined *)0x70726f4d;
      goto code_r0x000141950d4b;
    case (code *)0xa:
      puVar8 = (undefined *)0x6157657461657243;
      param_4 = *(undefined **)*param_2;
      puVar15 = puVar14;
      goto code_r0x000141950da7;
    case (code *)0xb:
      if (*(longlong *)(*param_2 + 3) == 0x6465676e6168436c &&
          *(longlong *)*param_2 == 0x6e6168436c6c6157) {
        UNK_14335b235 = 0;
        goto code_r0x000141951160;
      }
      UNRECOVERED_JUMPTABLE = (code *)&UNK_14335b234;
      if (*(longlong *)(*param_2 + 3) == 0x656c79745365676e &&
          *(longlong *)*param_2 == 0x745365676e616843) {
        UNK_14335b235 = 9;
        goto code_r0x000141951160;
      }
      puVar8 = (undefined *)(*(ulonglong *)*param_2 ^ 0x6b5365676e616843);
      param_4 = (undefined *)0x7472696b5365676e;
      goto code_r0x000141950f7f;
    case (code *)0xc:
      goto code_r0x000141950e6f;
    case (code *)0xd:
      if (*(longlong *)(*param_2 + 5) == 0x657275736f6c636e &&
          *(longlong *)*param_2 == 0x6c636e456b72614d) {
        UNK_14335b235 = 0x13;
        goto code_r0x000141951160;
      }
      break;
    case (code *)0xe:
      puVar8 = (undefined *)(*(ulonglong *)*param_2 ^ 0x724165676e616843);
code_r0x000141950fa2:
      param_4 = (undefined *)(*(ulonglong *)(*param_2 + 6) ^ 0x6570795468637241);
      puVar16 = puVar14;
code_r0x000141950fab:
      if (param_4 == *(undefined **)(*param_2 + unaff_GS_OFFSET + 6) && puVar8 == (undefined *)0x0)
      {
        UNRECOVERED_JUMPTABLE[1] = (code)0x8;
        goto code_r0x000141951160;
      }
      if (*(longlong *)(*param_2 + 6) == 0x6c6169726574614d &&
          *(longlong *)*param_2 == 0x614d65676e616843) {
        UNRECOVERED_JUMPTABLE[1] = (code)0xa;
        goto code_r0x000141951160;
      }
      goto code_r0x000141950fdd;
    case (code *)0xf:
      puVar8 = (undefined *)(*(ulonglong *)*param_2 ^ 0x6c4565676e616843);
      param_4 = (undefined *)0x6e6f69746176656c;
code_r0x000141950ee6:
      if (param_4 == *(undefined **)(*param_2 + 7) && puVar8 == (undefined *)0x0) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x6;
        goto code_r0x000141951160;
      }
      if (*(longlong *)(*param_2 + 7) != 0x6870726f4d646574 ||
          *(longlong *)*param_2 != 0x7461636572706544) break;
      goto code_r0x000141950f17;
    case (code *)0x10:
      auVar27[0] = -((*param_2)[0] == UNK_14335a380);
      auVar27[1] = -((*param_2)[1] == UNK_14335a381);
      auVar27[2] = -((*param_2)[2] == UNK_14335a382);
      auVar27[3] = -((*param_2)[3] == UNK_14335a383);
      auVar27[4] = -((*param_2)[4] == UNK_14335a384);
      auVar27[5] = -((*param_2)[5] == UNK_14335a385);
      auVar27[6] = -((*param_2)[6] == UNK_14335a386);
      auVar27[7] = -((*param_2)[7] == UNK_14335a387);
      auVar27[8] = -((*param_2)[8] == UNK_14335a388);
      auVar27[9] = -((*param_2)[9] == UNK_14335a389);
      auVar27[10] = -((*param_2)[10] == UNK_14335a38a);
      auVar27[0xb] = -((*param_2)[0xb] == UNK_14335a38b);
      auVar27[0xc] = -((*param_2)[0xc] == UNK_14335a38c);
      auVar27[0xd] = -((*param_2)[0xd] == UNK_14335a38d);
      auVar27[0xe] = -((*param_2)[0xe] == UNK_14335a38e);
      auVar27[0xf] = -((*param_2)[0xf] == UNK_14335a38f);
      if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
        UNK_14335b235 = 7;
        goto code_r0x000141951160;
      }
      break;
    case (code *)0x11:
      auVar33 = *param_2;
      puVar17 = puVar14;
      goto code_r0x00014195100e;
    case (code *)0x15:
      auVar33 = *param_2;
      goto code_r0x0001419510a3;
    case (code *)0x17:
      auVar35[0] = -((*param_2)[7] == UNK_14335a340);
      auVar35[1] = -((*param_2)[8] == UNK_14335a341);
      auVar35[2] = -((*param_2)[9] == UNK_14335a342);
      auVar35[3] = -((*param_2)[10] == UNK_14335a343);
      auVar35[4] = -((*param_2)[0xb] == UNK_14335a344);
      auVar35[5] = -((*param_2)[0xc] == UNK_14335a345);
      auVar35[6] = -((*param_2)[0xd] == UNK_14335a346);
      auVar35[7] = -((*param_2)[0xe] == UNK_14335a347);
      auVar35[8] = -((*param_2)[0xf] == UNK_14335a348);
      auVar35[9] = -(param_2[1][0] == UNK_14335a349);
      auVar35[10] = -(param_2[1][1] == UNK_14335a34a);
      auVar35[0xb] = -(param_2[1][2] == UNK_14335a34b);
      auVar35[0xc] = -(param_2[1][3] == UNK_14335a34c);
      auVar35[0xd] = -(param_2[1][4] == UNK_14335a34d);
      auVar35[0xe] = -(param_2[1][5] == UNK_14335a34e);
      auVar35[0xf] = -(param_2[1][6] == UNK_14335a34f);
      auVar25[0] = -((*param_2)[0] == UNK_14335a350);
      auVar25[1] = -((*param_2)[1] == UNK_14335a351);
      auVar25[2] = -((*param_2)[2] == UNK_14335a352);
      auVar25[3] = -((*param_2)[3] == UNK_14335a353);
      auVar25[4] = -((*param_2)[4] == UNK_14335a354);
      auVar25[5] = -((*param_2)[5] == UNK_14335a355);
      auVar25[6] = -((*param_2)[6] == UNK_14335a356);
      auVar25[7] = -((*param_2)[7] == UNK_14335a357);
      auVar25[8] = -((*param_2)[8] == UNK_14335a358);
      auVar25[9] = -((*param_2)[9] == UNK_14335a359);
      auVar25[10] = -((*param_2)[10] == UNK_14335a35a);
      auVar25[0xb] = -((*param_2)[0xb] == UNK_14335a35b);
      auVar25[0xc] = -((*param_2)[0xc] == UNK_14335a35c);
      auVar25[0xd] = -((*param_2)[0xd] == UNK_14335a35d);
      auVar25[0xe] = -((*param_2)[0xe] == UNK_14335a35e);
      auVar25[0xf] = -((*param_2)[0xf] == UNK_14335a35f);
      auVar25 = auVar25 & auVar35;
      if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
        UNK_14335b235 = 0xc;
        goto code_r0x000141951160;
      }
      break;
    case (code *)0x18:
      uVar7 = *(undefined8 *)param_2[1];
      auVar36[0] = -((char)uVar7 == UNK_14335a320);
      auVar36[1] = -((char)((ulonglong)uVar7 >> 8) == UNK_14335a321);
      auVar36[2] = -((char)((ulonglong)uVar7 >> 0x10) == UNK_14335a322);
      auVar36[3] = -((char)((ulonglong)uVar7 >> 0x18) == UNK_14335a323);
      auVar36[4] = -((char)((ulonglong)uVar7 >> 0x20) == UNK_14335a324);
      auVar36[5] = -((char)((ulonglong)uVar7 >> 0x28) == UNK_14335a325);
      auVar36[6] = -((char)((ulonglong)uVar7 >> 0x30) == UNK_14335a326);
      auVar36[7] = -((char)((ulonglong)uVar7 >> 0x38) == UNK_14335a327);
      auVar36[8] = -(UNK_14335a328 == '\0');
      auVar36[9] = -(UNK_14335a329 == '\0');
      auVar36[10] = -(UNK_14335a32a == '\0');
      auVar36[0xb] = -(UNK_14335a32b == '\0');
      auVar36[0xc] = -(UNK_14335a32c == '\0');
      auVar36[0xd] = -(UNK_14335a32d == '\0');
      auVar36[0xe] = -(UNK_14335a32e == '\0');
      auVar36[0xf] = -(UNK_14335a32f == '\0');
      auVar28[0] = -((*param_2)[0] == UNK_14335a330);
      auVar28[1] = -((*param_2)[1] == UNK_14335a331);
      auVar28[2] = -((*param_2)[2] == UNK_14335a332);
      auVar28[3] = -((*param_2)[3] == UNK_14335a333);
      auVar28[4] = -((*param_2)[4] == UNK_14335a334);
      auVar28[5] = -((*param_2)[5] == UNK_14335a335);
      auVar28[6] = -((*param_2)[6] == UNK_14335a336);
      auVar28[7] = -((*param_2)[7] == UNK_14335a337);
      auVar28[8] = -((*param_2)[8] == UNK_14335a338);
      auVar28[9] = -((*param_2)[9] == UNK_14335a339);
      auVar28[10] = -((*param_2)[10] == UNK_14335a33a);
      auVar28[0xb] = -((*param_2)[0xb] == UNK_14335a33b);
      auVar28[0xc] = -((*param_2)[0xc] == UNK_14335a33c);
      auVar28[0xd] = -((*param_2)[0xd] == UNK_14335a33d);
      auVar28[0xe] = -((*param_2)[0xe] == UNK_14335a33e);
      auVar28[0xf] = -((*param_2)[0xf] == UNK_14335a33f);
      auVar28 = auVar28 & auVar36;
      if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
        UNK_14335b235 = 0xd;
        goto code_r0x000141951160;
      }
      break;
    case (code *)0x1a:
      auVar33 = *param_2;
      auVar39[0] = -((*param_2)[10] == UNK_14335a300);
      auVar39[1] = -((*param_2)[0xb] == UNK_14335a301);
      auVar39[2] = -((*param_2)[0xc] == UNK_14335a302);
      auVar39[3] = -((*param_2)[0xd] == UNK_14335a303);
      auVar39[4] = -((*param_2)[0xe] == UNK_14335a304);
      auVar39[5] = -((*param_2)[0xf] == UNK_14335a305);
      auVar39[6] = -(param_2[1][0] == UNK_14335a306);
      auVar39[7] = -(param_2[1][1] == UNK_14335a307);
      auVar39[8] = -(param_2[1][2] == UNK_14335a308);
      auVar39[9] = -(param_2[1][3] == UNK_14335a309);
      auVar39[10] = -(param_2[1][4] == UNK_14335a30a);
      auVar39[0xb] = -(param_2[1][5] == UNK_14335a30b);
      auVar39[0xc] = -(param_2[1][6] == UNK_14335a30c);
      auVar39[0xd] = -(param_2[1][7] == UNK_14335a30d);
      auVar39[0xe] = -(param_2[1][8] == UNK_14335a30e);
      auVar39[0xf] = -(param_2[1][9] == UNK_14335a30f);
      puVar3 = puVar14;
      goto code_r0x000141950df8;
    case (code *)0x1b:
      auVar33 = *param_2;
      auVar39[0] = -((*param_2)[0xb] == UNK_14335a360);
      auVar39[1] = -((*param_2)[0xc] == UNK_14335a361);
      auVar39[2] = -((*param_2)[0xd] == UNK_14335a362);
      auVar39[3] = -((*param_2)[0xe] == UNK_14335a363);
      auVar39[4] = -((*param_2)[0xf] == UNK_14335a364);
      auVar39[5] = -(param_2[1][0] == UNK_14335a365);
      auVar39[6] = -(param_2[1][1] == UNK_14335a366);
      auVar39[7] = -(param_2[1][2] == UNK_14335a367);
      auVar39[8] = -(param_2[1][3] == UNK_14335a368);
      auVar39[9] = -(param_2[1][4] == UNK_14335a369);
      auVar39[10] = -(param_2[1][5] == UNK_14335a36a);
      auVar39[0xb] = -(param_2[1][6] == UNK_14335a36b);
      auVar39[0xc] = -(param_2[1][7] == UNK_14335a36c);
      auVar39[0xd] = -(param_2[1][8] == UNK_14335a36d);
      auVar39[0xe] = -(param_2[1][9] == UNK_14335a36e);
      auVar39[0xf] = -(param_2[1][10] == UNK_14335a36f);
      puVar21 = puVar14;
      goto code_r0x0001419510e2;
    }
    goto LAB_141951100;
  case 0x56:
    if (!bVar24) {
      out(*(undefined4 *)param_1,uVar10);
      out(param_1[4],uVar10);
      puVar14 = auStack_78;
      goto code_r0x000141950ee6;
    }
    puVar16 = &stack0xffffffffffffff80;
    puVar14 = &stack0xffffffffffffff80;
    if (!bVar23) {
      puVar8 = (undefined *)(ulonglong)(*(uint *)*param_2 ^ 0x4335b234);
      goto code_r0x000141950fa2;
    }
code_r0x000141950fdd:
    puVar14 = puVar16;
    if (*(longlong *)(*param_2 + 6) != 0x7374726f70707553 ||
        *(longlong *)*param_2 != 0x755365676e616843) {
LAB_141951100:
      *(undefined8 *)(puVar14 + -8) = 0x14195111e;
      uVar7 = pdb_142d8f140(param_2,UNRECOVERED_JUMPTABLE_00,&UNK_14335abf0,0x16);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8) = uVar7;
      *UNRECOVERED_JUMPTABLE = (code)0x1;
      return UNRECOVERED_JUMPTABLE;
    }
    UNRECOVERED_JUMPTABLE[1] = (code)0xf;
code_r0x000141951160:
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x5a:
    out(*param_1,uVar10);
    puVar14 = &stack0xffffffffffffff80;
code_r0x000141950f7f:
    if (param_4 != *(undefined **)(*param_2 + 3) || puVar8 != (undefined *)0x0) goto LAB_141951100;
    UNRECOVERED_JUMPTABLE[1] = (code)0x14;
    goto code_r0x000141951160;
  case 0x5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5d:
    return UNRECOVERED_JUMPTABLE;
  case 0x5f:
    pdb_141be9710((ulonglong)param_1 & 0xffffffff);
    return param_1;
  case 0x60:
    puVar16 = auStack_78;
    if ((longlong)UNRECOVERED_JUMPTABLE < 0) goto code_r0x000141950fab;
    UNRECOVERED_JUMPTABLE =
         (code *)(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uRam4ff5aa0d740f6601) & 0xffffffff);
    param_1 = param_1 + 0xf;
    *(int *)param_1 = *(int *)param_1 + (int)auStack_78;
    puVar18 = auStack_78;
    if (*(int *)param_1 != 0) {
      puVar18 = auStack_78;
    }
    goto code_r0x00014195102a;
  case 0x61:
code_r0x00014195100e:
    auVar29[0] = -(auVar33[0] == UNK_14335a390);
    auVar29[1] = -(auVar33[1] == UNK_14335a391);
    auVar29[2] = -(auVar33[2] == UNK_14335a392);
    auVar29[3] = -(auVar33[3] == UNK_14335a393);
    auVar29[4] = -(auVar33[4] == UNK_14335a394);
    auVar29[5] = -(auVar33[5] == UNK_14335a395);
    auVar29[6] = -(auVar33[6] == UNK_14335a396);
    auVar29[7] = -(auVar33[7] == UNK_14335a397);
    auVar29[8] = -(auVar33[8] == UNK_14335a398);
    auVar29[9] = -(auVar33[9] == UNK_14335a399);
    auVar29[10] = -(auVar33[10] == UNK_14335a39a);
    auVar29[0xb] = -(auVar33[0xb] == UNK_14335a39b);
    auVar29[0xc] = -(auVar33[0xc] == UNK_14335a39c);
    auVar29[0xd] = -(auVar33[0xd] == UNK_14335a39d);
    auVar29[0xe] = -(auVar33[0xe] == UNK_14335a39e);
    auVar29[0xf] = -(auVar33[0xf] == UNK_14335a39f);
    auVar37[0] = -(param_2[1][0] == DAT_142e505d0);
    auVar37[1] = -(UNK_142e505d1 == '\0');
    auVar37[2] = -(UNK_142e505d2 == '\0');
    auVar37[3] = -(UNK_142e505d3 == '\0');
    auVar37[4] = -(UNK_142e505d4 == '\0');
    auVar37[5] = -(UNK_142e505d5 == '\0');
    auVar37[6] = -(UNK_142e505d6 == '\0');
    auVar37[7] = -(UNK_142e505d7 == '\0');
    auVar37[8] = -(UNK_142e505d8 == '\0');
    auVar37[9] = -(UNK_142e505d9 == '\0');
    auVar37[10] = -(UNK_142e505da == '\0');
    auVar37[0xb] = -(UNK_142e505db == '\0');
    auVar37[0xc] = -(UNK_142e505dc == '\0');
    auVar37[0xd] = -(UNK_142e505dd == '\0');
    auVar37[0xe] = -(UNK_142e505de == '\0');
    auVar37[0xf] = -(UNK_142e505df == '\0');
    auVar39 = auVar37 & auVar29;
    puVar18 = puVar17;
code_r0x00014195102a:
    puVar8 = (undefined *)
             (ulonglong)
             (ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar39[0xf] >> 7) << 0xf);
code_r0x00014195102e:
    puVar19 = (undefined8 *)puVar18;
    if ((int)puVar8 != 0xffff) {
code_r0x00014195103a:
      auVar30[0] = -((*param_2)[0] == UNK_14335a3a0);
      auVar30[1] = -((*param_2)[1] == UNK_14335a3a1);
      auVar30[2] = -((*param_2)[2] == UNK_14335a3a2);
      auVar30[3] = -((*param_2)[3] == UNK_14335a3a3);
      auVar30[4] = -((*param_2)[4] == UNK_14335a3a4);
      auVar30[5] = -((*param_2)[5] == UNK_14335a3a5);
      auVar30[6] = -((*param_2)[6] == UNK_14335a3a6);
      auVar30[7] = -((*param_2)[7] == UNK_14335a3a7);
      auVar30[8] = -((*param_2)[8] == UNK_14335a3a8);
      auVar30[9] = -((*param_2)[9] == UNK_14335a3a9);
      auVar30[10] = -((*param_2)[10] == UNK_14335a3aa);
      auVar30[0xb] = -((*param_2)[0xb] == UNK_14335a3ab);
      auVar30[0xc] = -((*param_2)[0xc] == UNK_14335a3ac);
      auVar30[0xd] = -((*param_2)[0xd] == UNK_14335a3ad);
      auVar30[0xe] = -((*param_2)[0xe] == UNK_14335a3ae);
      auVar30[0xf] = -((*param_2)[0xf] == UNK_14335a3af);
      auVar38[0] = -(param_2[1][0] == UNK_142e49990);
      auVar38[1] = -(UNK_142e49991 == '\0');
      auVar38[2] = -(UNK_142e49992 == '\0');
      auVar38[3] = -(UNK_142e49993 == '\0');
      auVar38[4] = -(UNK_142e49994 == '\0');
      auVar38[5] = -(UNK_142e49995 == '\0');
      auVar38[6] = -(UNK_142e49996 == '\0');
      auVar38[7] = -(UNK_142e49997 == '\0');
      auVar38[8] = -(UNK_142e49998 == '\0');
      auVar38[9] = -(UNK_142e49999 == '\0');
      auVar38[10] = -(UNK_142e4999a == '\0');
      auVar38[0xb] = -(UNK_142e4999b == '\0');
      auVar38[0xc] = -(UNK_142e4999c == '\0');
      auVar38[0xd] = -(UNK_142e4999d == '\0');
      auVar38[0xe] = -(UNK_142e4999e == '\0');
      auVar38[0xf] = -(UNK_142e4999f == '\0');
      auVar38 = auVar38 & auVar30;
      if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) == 0xffff) {
        UNRECOVERED_JUMPTABLE[1] = (code)0xe;
        goto code_r0x000141951160;
      }
      auVar33 = *param_2;
      auVar39 = ZEXT116((byte)param_2[1][0]);
code_r0x000141951076:
      auVar31[0] = -(auVar33[0] == UNK_14335a3b0);
      auVar31[1] = -(auVar33[1] == UNK_14335a3b1);
      auVar31[2] = -(auVar33[2] == UNK_14335a3b2);
      auVar31[3] = -(auVar33[3] == UNK_14335a3b3);
      auVar31[4] = -(auVar33[4] == UNK_14335a3b4);
      auVar31[5] = -(auVar33[5] == UNK_14335a3b5);
      auVar31[6] = -(auVar33[6] == UNK_14335a3b6);
      auVar31[7] = -(auVar33[7] == UNK_14335a3b7);
      auVar31[8] = -(auVar33[8] == UNK_14335a3b8);
      auVar31[9] = -(auVar33[9] == UNK_14335a3b9);
      auVar31[10] = -(auVar33[10] == UNK_14335a3ba);
      auVar31[0xb] = -(auVar33[0xb] == UNK_14335a3bb);
      auVar31[0xc] = -(auVar33[0xc] == UNK_14335a3bc);
      auVar31[0xd] = -(auVar33[0xd] == UNK_14335a3bd);
      auVar31[0xe] = -(auVar33[0xe] == UNK_14335a3be);
      auVar31[0xf] = -(auVar33[0xf] == UNK_14335a3bf);
      auVar40[0] = -(auVar39[0] == UNK_14335a3c0);
      auVar40[1] = -(auVar39[1] == UNK_14335a3c1);
      auVar40[2] = -(auVar39[2] == UNK_14335a3c2);
      auVar40[3] = -(auVar39[3] == UNK_14335a3c3);
      auVar40[4] = -(auVar39[4] == UNK_14335a3c4);
      auVar40[5] = -(auVar39[5] == UNK_14335a3c5);
      auVar40[6] = -(auVar39[6] == UNK_14335a3c6);
      auVar40[7] = -(auVar39[7] == UNK_14335a3c7);
      auVar40[8] = -(auVar39[8] == UNK_14335a3c8);
      auVar40[9] = -(auVar39[9] == UNK_14335a3c9);
      auVar40[10] = -(auVar39[10] == UNK_14335a3ca);
      auVar40[0xb] = -(auVar39[0xb] == UNK_14335a3cb);
      auVar40[0xc] = -(auVar39[0xc] == UNK_14335a3cc);
      auVar40[0xd] = -(auVar39[0xd] == UNK_14335a3cd);
      auVar40[0xe] = -(auVar39[0xe] == UNK_14335a3ce);
      auVar40[0xf] = -(auVar39[0xf] == UNK_14335a3cf);
      auVar40 = auVar40 & auVar31;
      puVar14 = (undefined1 *)puVar19;
      if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000141951096:
        UNRECOVERED_JUMPTABLE[1] = (code)0x10;
        goto code_r0x000141951160;
      }
      goto LAB_141951100;
    }
    UNRECOVERED_JUMPTABLE[1] = (code)0x5;
    goto code_r0x000141951160;
  case 0x62:
    goto code_r0x00014195103a;
  default:
    *(undefined4 *)UNRECOVERED_JUMPTABLE = *(undefined4 *)UNRECOVERED_JUMPTABLE;
    puVar14 = auStack_78;
code_r0x0001419510a3:
    auVar39[0] = -((*param_2)[5] == UNK_14335a3d0);
    auVar39[1] = -((*param_2)[6] == UNK_14335a3d1);
    auVar39[2] = -((*param_2)[7] == UNK_14335a3d2);
    auVar39[3] = -((*param_2)[8] == UNK_14335a3d3);
    auVar39[4] = -((*param_2)[9] == UNK_14335a3d4);
    auVar39[5] = -((*param_2)[10] == UNK_14335a3d5);
    auVar39[6] = -((*param_2)[0xb] == UNK_14335a3d6);
    auVar39[7] = -((*param_2)[0xc] == UNK_14335a3d7);
    auVar39[8] = -((*param_2)[0xd] == UNK_14335a3d8);
    auVar39[9] = -((*param_2)[0xe] == UNK_14335a3d9);
    auVar39[10] = -((*param_2)[0xf] == UNK_14335a3da);
    auVar39[0xb] = -(param_2[1][0] == UNK_14335a3db);
    auVar39[0xc] = -(param_2[1][1] == UNK_14335a3dc);
    auVar39[0xd] = -(param_2[1][2] == UNK_14335a3dd);
    auVar39[0xe] = -(param_2[1][3] == UNK_14335a3de);
    auVar39[0xf] = -(param_2[1][4] == UNK_14335a3df);
    auVar32[0] = -(auVar33[0] == UNK_14335a3e0);
    auVar32[1] = -(auVar33[1] == UNK_14335a3e1);
    auVar32[2] = -(auVar33[2] == UNK_14335a3e2);
    auVar32[3] = -(auVar33[3] == UNK_14335a3e3);
    auVar32[4] = -(auVar33[4] == UNK_14335a3e4);
    auVar32[5] = -(auVar33[5] == UNK_14335a3e5);
    auVar32[6] = -(auVar33[6] == UNK_14335a3e6);
    auVar32[7] = -(auVar33[7] == UNK_14335a3e7);
    auVar32[8] = -(auVar33[8] == UNK_14335a3e8);
    auVar32[9] = -(auVar33[9] == UNK_14335a3e9);
    auVar32[10] = -(auVar33[10] == UNK_14335a3ea);
    auVar32[0xb] = -(auVar33[0xb] == UNK_14335a3eb);
    auVar32[0xc] = -(auVar33[0xc] == UNK_14335a3ec);
    auVar32[0xd] = -(auVar33[0xd] == UNK_14335a3ed);
    auVar32[0xe] = -(auVar33[0xe] == UNK_14335a3ee);
    auVar32[0xf] = -(auVar33[0xf] == UNK_14335a3ef);
    puVar20 = puVar14;
  case 0x73:
    auVar32 = auVar32 & auVar39;
    puVar14 = puVar20;
    if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
    UNRECOVERED_JUMPTABLE[1] = (code)0x4;
    goto code_r0x000141951160;
  case 0x66:
    puVar19 = (undefined8 *)&stack0xffffffffffffff80;
    cVar4 = '\x16';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar19 = puVar19 + -1;
      *puVar19 = *unaff_RBP;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    goto code_r0x00014195102e;
  case 0x6e:
    uVar11 = CONCAT11(0x4a,(char)param_2);
    param_2 = (undefined1 (*) [16])(ulonglong)uVar11;
    param_1[0xf] = (code)((char)param_1[0xf] + (char)((ulonglong)UNRECOVERED_JUMPTABLE >> 8) +
                         (0xcb < *unaff_RDI));
    out(*param_1,uVar11);
    puVar19 = unaff_RBP + 1;
    goto code_r0x000141951076;
  case 0x6f:
    goto code_r0x000141951096;
  case 0x70:
  case 0x72:
  case 0x75:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    if (0xd < (uint)UNRECOVERED_JUMPTABLE) {
      puVar8 = (undefined *)0x4;
      goto code_r0x00014195121f;
    }
    puVar8 = &UNK_14335b3b8;
    goto code_r0x000141951188;
  case 0x71:
    puVar14 = auStack_78;
    goto LAB_141951100;
  case 0x74:
    param_1[-0x3d] = (code)((byte)param_1[-0x3d] & (byte)unaff_RBX);
code_r0x000141951132:
    UNRECOVERED_JUMPTABLE[1] = (code)0x1;
    goto code_r0x000141951160;
  case 0x76:
    *(int *)*param_2 = *(int *)*param_2 + 0x4335b234;
    goto code_r0x000141951160;
  case 0x7b:
code_r0x0001419510e2:
    auVar34[0] = -(auVar33[0] == UNK_14335a370);
    auVar34[1] = -(auVar33[1] == UNK_14335a371);
    auVar34[2] = -(auVar33[2] == UNK_14335a372);
    auVar34[3] = -(auVar33[3] == UNK_14335a373);
    auVar34[4] = -(auVar33[4] == UNK_14335a374);
    auVar34[5] = -(auVar33[5] == UNK_14335a375);
    auVar34[6] = -(auVar33[6] == UNK_14335a376);
    auVar34[7] = -(auVar33[7] == UNK_14335a377);
    auVar34[8] = -(auVar33[8] == UNK_14335a378);
    auVar34[9] = -(auVar33[9] == UNK_14335a379);
    auVar34[10] = -(auVar33[10] == UNK_14335a37a);
    auVar34[0xb] = -(auVar33[0xb] == UNK_14335a37b);
    auVar34[0xc] = -(auVar33[0xc] == UNK_14335a37c);
    auVar34[0xd] = -(auVar33[0xd] == UNK_14335a37d);
    auVar34[0xe] = -(auVar33[0xe] == UNK_14335a37e);
    auVar34[0xf] = -(auVar33[0xf] == UNK_14335a37f);
    auVar34 = auVar34 & auVar39;
    puVar14 = puVar21;
    if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
    UNRECOVERED_JUMPTABLE[1] = (code)0xb;
    goto code_r0x000141951160;
  case 0x7c:
    puVar8 = (undefined *)0x4335b3b8;
code_r0x000141951188:
                    /* WARNING: Could not recover jumptable at 0x00014195118f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)(puVar8 + *(int *)(puVar8 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))();
    return UNRECOVERED_JUMPTABLE;
  case 0x7d:
  case 0x7e:
  case 0x83:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
    (&UNK_14335b23d)[uVar5] = (&UNK_14335b23d)[uVar5] + '4';
    return UNRECOVERED_JUMPTABLE;
  case 0x7f:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
    return UNRECOVERED_JUMPTABLE;
  case 0x80:
code_r0x00014195121f:
    (&UNK_14335b235)[uVar5] = (char)puVar8;
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x81:
                    /* WARNING: Could not recover jumptable at 0x00014195124f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (code *)(*(code *)((longlong)*(int *)((longlong)UNRECOVERED_JUMPTABLE_00 * 4 + 0x4335b3f0)
                           + 0x4335b3f0))();
    return UNRECOVERED_JUMPTABLE;
  case 0x82:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar4);
    cRam00000001447e3a36 = cRam00000001447e3a36 + (char)((ulonglong)param_2 >> 8);
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x84:
    return UNRECOVERED_JUMPTABLE;
  case 0x89:
    (&UNK_14335b235)[uVar5] = 0x34;
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x8a:
    *(byte *)((longlong)unaff_RBP + 0x5f) = *(byte *)((longlong)unaff_RBP + 0x5f) | 0x34;
    UNK_141341182 = UNK_141341182 + -1;
    *(char *)(unaff_RBX + 0x4e) = *(char *)(unaff_RBX + 0x4e) + '\x01';
    *(char *)((longlong)unaff_RBP + 0x2d53b62c7) =
         *(char *)((longlong)unaff_RBP + 0x2d53b62c7) + '\x01';
    cRam00000001aa3411a0 = cRam00000001aa3411a0 + '\x01';
    *(char *)(unaff_RBX + 0x4f) = *(char *)(unaff_RBX + 0x4f) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_R10 = &UNK_14335a598;
  puVar13 = puVar12;
code_r0x00014195048b:
  *(undefined8 *)(puVar13 + -8) = 0x1419504a2;
  uVar7 = pdb_142d8f140(param_2,UNRECOVERED_JUMPTABLE_00,in_R10,0x14);
  *(undefined8 *)(&UNK_14335b23c + uVar5) = uVar7;
  *UNRECOVERED_JUMPTABLE = (code)0x1;
  return UNRECOVERED_JUMPTABLE;
code_r0x000141950a34:
                    /* WARNING: Could not recover jumptable at 0x000141950a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
  return UNRECOVERED_JUMPTABLE;
}

