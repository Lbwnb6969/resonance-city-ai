// VA 0x1408ff9e0, PDB extent 167 bytes
// country_core::systems::ui::resources::ui_state::UiWidgetContext::origin
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001409046cf) overlaps instruction at (ram,0x0001409046cd)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiWidgetContext::origin
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 167 */

byte * pdb_1408ff9e0(byte *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  byte bVar18;
  undefined1 uVar19;
  char *pcVar20;
  ulonglong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte bVar24;
  uint uVar25;
  byte *pbVar26;
  undefined *puVar27;
  ulonglong uVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  undefined *puVar31;
  byte *pbVar32;
  byte *unaff_RBX;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined8 *unaff_RBP;
  byte *unaff_RSI;
  longlong *plVar38;
  byte *unaff_RDI;
  byte *pbVar39;
  byte *pbVar40;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_R11D;
  longlong unaff_R12;
  longlong lVar41;
  undefined8 uVar42;
  byte *unaff_R14;
  byte *unaff_R15;
  longlong *plVar43;
  longlong lVar44;
  byte in_AF;
  bool bVar45;
  byte in_TF;
  byte in_IF;
  bool bVar46;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 uVar47;
  undefined8 in_XMM1_Qa;
  undefined4 uVar48;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 auStack_28 [32];
  ulonglong uStack_8;
  
  uVar50 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar49 = (undefined4)param_3;
  uVar48 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar47 = (undefined4)in_XMM1_Qa;
  puVar36 = auStack_28;
  puVar37 = auStack_28;
  pbVar23 = (byte *)*param_2;
  pbVar22 = (byte *)0x0;
  if ((pbVar23[0x18] == 0) || (*(longlong *)(pbVar23 + 0x38) != param_2[1])) {
LAB_1408ffa16:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  pbVar39 = *(byte **)(pbVar23 + 0x20);
  UNRECOVERED_JUMPTABLE = (code *)&UNK_14301e8e0;
  uVar28 = (ulonglong)*(int *)(&UNK_14301e8e0 + (ulonglong)pbVar39[0x98] * 4);
  pbVar29 = &UNK_14301e8e0 + uVar28;
  bVar24 = (byte)param_1;
  pbVar32 = pbVar22;
  pbVar26 = param_1;
  puVar34 = auStack_28;
  puVar33 = auStack_28;
  puVar16 = auStack_28;
  puVar35 = auStack_28;
  puVar17 = auStack_28;
  pbVar40 = pbVar39;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pbVar39[0x98]) {
  case 0:
    lVar41 = 8;
    goto code_r0x0001408ffa2c;
  case 1:
    uVar28 = *(ulonglong *)(pbVar23 + 0x40);
    if (*(ulonglong *)(pbVar39 + 0xb0) <= uVar28) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar28,*(ulonglong *)(pbVar39 + 0xb0),&UNK_143077600);
    }
    pbVar39 = (byte *)(uVar28 * 0xc + *(longlong *)(pbVar39 + 0xa8));
    goto code_r0x0001408ffa5a;
  default:
    goto LAB_1408ffa16;
  case 6:
    lVar41 = 4;
code_r0x0001408ffa2c:
    pbVar39 = pbVar39 + lVar41 + 0x98;
code_r0x0001408ffa5a:
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(pbVar39 + 8);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)pbVar39;
    param_1[0] = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  case 8:
  case 9:
  case 10:
    param_1 = *(byte **)pbVar29;
    pbVar23 = (byte *)0x0;
    pbVar39 = &UNK_14301e900;
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_14301e900 + *(int *)(&UNK_14301e900 + (longlong)param_1 * 4));
    goto code_r0x000140901a1f;
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
    pbVar29 = (byte *)((ulonglong)pbVar29 & 0xffffffff);
code_r0x000140901a1f:
                    /* WARNING: Could not emulate address calculation at 0x000140901a18 */
                    /* WARNING: Treating indirect jump as call */
    pbVar23 = (byte *)(*UNRECOVERED_JUMPTABLE)(param_1,pbVar29,pbVar39,pbVar23);
    return pbVar23;
  case 0xd:
    puVar1 = (uint *)(param_1 + -0x7f);
    *puVar1 = *puVar1 << 1 | *puVar1 >> 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    goto code_r0x000140901b12;
  case 0xf:
    if (!SCARRY8(uVar28,0x14301e8e0)) {
      pbVar39 = (byte *)(ulonglong)*(uint *)(&UNK_14301e928 + uVar28);
      unaff_RBX = (byte *)(ulonglong)(byte)(&UNK_14301e941)[uVar28];
      pbVar23 = (byte *)(ulonglong)(*(uint *)(&UNK_14301e928 + uVar28) & 0xffffff00);
      in_XMM0_Qa = _UNK_14301e040;
    }
    uRam0000000000000030 = *(undefined8 *)(&UNK_14301e918 + uVar28);
    uRam0000000000000010 = *(undefined8 *)(&UNK_14301e8f8 + uVar28);
    uRam0000000000000018 = *(undefined8 *)(&UNK_14301e900 + uVar28);
    uRam0000000000000020 = *(undefined8 *)(&UNK_14301e908 + uVar28);
    uRam0000000000000028 = *(undefined8 *)(&UNK_14301e910 + uVar28);
    uRam0000000000000008 = *(undefined8 *)(&UNK_14301e8e8 + uVar28);
    uRam0000000000000059 = (&UNK_14301e946)[uVar28];
    uRam000000000000005a = (&UNK_14301e947)[uVar28];
    uRam0000000000000058 = 0;
    uRam0000000000000050 = *(undefined8 *)(&UNK_14301e920 + uVar28);
    uRam0000000000000038 = (uint)pbVar39 & 0xff | (uint)pbVar23;
    uRam000000000000003c = SUB81(unaff_RBX,0);
    pbVar26 = (byte *)((ulonglong)unaff_RSI >> 0x10 & 0xffff);
    _uRam0000000000000000 = param_1;
code_r0x000140901b12:
    uRam000000000000003f = (char)pbVar26;
    uRam000000000000003d = (short)unaff_RSI;
    uRam0000000000000040 = 0x4301e8e0;
    uRam0000000000000044 = in_R11D;
    uRam0000000000000048 = (int)unaff_RDI;
    uRam000000000000004c = (int)in_XMM0_Qa;
    return (byte *)0x0;
  case 0x10:
    puVar36 = (undefined1 *)(ulonglong)((int)auStack_28 - 0x508);
    unaff_RBP = (undefined8 *)(puVar36 + 0x80);
    *(undefined8 *)(puVar36 + 0x500) = 0xfffffffffffffffe;
    bVar24 = (&UNK_14301eb00)[uVar28];
    pbVar26 = &UNK_14301e920;
    iVar4 = *(int *)(&UNK_14301e920 + (ulonglong)bVar24 * 4);
    pbVar22 = &UNK_14301e920 + iVar4;
    *(byte **)(puVar36 + 0x4f8) = pbVar29;
    bVar18 = (byte)pbVar22;
    pbVar32 = unaff_RBX;
    puVar37 = puVar36;
    unaff_R14 = pbVar29;
    unaff_RDI = pbVar39;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar24) {
    case 0:
      uVar42 = *(undefined8 *)(&UNK_14301eaf8 + uVar28);
      *(undefined8 *)(puVar36 + 0x3d0) = *(undefined8 *)(&UNK_14301eaf0 + uVar28);
      *(undefined8 *)(puVar36 + 0x3d8) = uVar42;
      uVar42 = *(undefined8 *)(&UNK_14301eab0 + uVar28);
      uVar8 = *(undefined8 *)(&UNK_14301eab8 + uVar28);
      uVar7 = *(undefined8 *)(&UNK_14301eac0 + uVar28);
      uVar14 = *(undefined8 *)(&UNK_14301eac8 + uVar28);
      uVar47 = *(undefined4 *)(&UNK_14301ead0 + uVar28);
      uVar48 = *(undefined4 *)(&UNK_14301ead4 + uVar28);
      uVar49 = *(undefined4 *)(&UNK_14301ead8 + uVar28);
      uVar50 = *(undefined4 *)(&UNK_14301eadc + uVar28);
      uVar11 = *(undefined4 *)(&UNK_14301eae4 + uVar28);
      uVar12 = *(undefined4 *)(&UNK_14301eae8 + uVar28);
      uVar13 = *(undefined4 *)(&UNK_14301eaec + uVar28);
      *(undefined4 *)(puVar36 + 0x3c0) = *(undefined4 *)(&UNK_14301eae0 + uVar28);
      *(undefined4 *)(puVar36 + 0x3c4) = uVar11;
      *(undefined4 *)(puVar36 + 0x3c8) = uVar12;
      *(undefined4 *)(puVar36 + 0x3cc) = uVar13;
      *(undefined4 *)(puVar36 + 0x3b0) = uVar47;
      *(undefined4 *)(puVar36 + 0x3b4) = uVar48;
      *(undefined4 *)(puVar36 + 0x3b8) = uVar49;
      *(undefined4 *)(puVar36 + 0x3bc) = uVar50;
      *(undefined8 *)(puVar36 + 0x3a0) = uVar7;
      *(undefined8 *)(puVar36 + 0x3a8) = uVar14;
      *(undefined8 *)(puVar36 + 0x390) = uVar42;
      *(undefined8 *)(puVar36 + 0x398) = uVar8;
      uVar42 = *(undefined8 *)pbVar29;
      uVar8 = *(undefined8 *)(&UNK_14301e8e8 + uVar28);
      uVar47 = *(undefined4 *)(&UNK_14301e8f0 + uVar28);
      uVar48 = *(undefined4 *)(&UNK_14301e8f4 + uVar28);
      in_XMM1_Dc = *(undefined4 *)(&UNK_14301e8f8 + uVar28);
      in_XMM1_Dd = *(undefined4 *)(&UNK_14301e8fc + uVar28);
      *(undefined4 *)(puVar36 + 0x4b0) = uVar47;
      *(undefined4 *)(puVar36 + 0x4b4) = uVar48;
      *(undefined4 *)(puVar36 + 0x4b8) = in_XMM1_Dc;
      *(undefined4 *)(puVar36 + 0x4bc) = in_XMM1_Dd;
      *(undefined8 *)(puVar36 + 0x4a0) = uVar42;
      *(undefined8 *)(puVar36 + 0x4a8) = uVar8;
      *(undefined8 *)(puVar36 + -8) = 0x1409034c5;
      pdb_140d9d590(puVar36 + 0x1e0,puVar36 + 0x390,puVar36 + 0x4a0);
      unaff_RBX = puVar36 + 0x30;
      pbVar29 = puVar36 + 0x1e0;
      pbVar39 = (byte *)0x1b0;
      goto code_r0x0001409034d7;
    case 1:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar36 + -8) = 0x1409039ea;
      pdb_142dc8570(&UNK_14301e728);
    case 2:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar36 + -8) = 0x1409039de;
      pdb_142dc8590(&UNK_14301e728);
    case 3:
      pbVar22 = (byte *)(ulonglong)(byte)(&UNK_14301eaa8)[uVar28];
    case 4:
                    /* WARNING: Could not recover jumptable at 0x00014090352d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar23 = (byte *)(*(code *)(&UNK_14301e930 + *(int *)(&UNK_14301e930 + (longlong)pbVar22 * 4)
                                  ))();
      return pbVar23;
    case 5:
      (&UNK_14301e8ad)[iVar4] = (&UNK_14301e8ad)[iVar4] + ' ';
      goto code_r0x0001409039eb;
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
      goto code_r0x0001409035eb;
    case 8:
      pbVar22 = (byte *)(ulonglong)(byte)(&UNK_14301ebd0)[uVar28];
      pbVar26 = &UNK_14301e940;
      goto code_r0x000140903d0d;
    case 9:
      goto code_r0x0001409046d3;
    case 10:
      *(undefined4 *)(&UNK_14301eae0 + iVar4) = 0x4301e920;
      goto code_r0x0001409046cd;
    case 0xb:
      goto code_r0x000140903d8d;
    case 0xc:
      puVar37 = puVar36 + -8;
      *(byte **)(puVar36 + -8) = pbVar29;
      bVar24 = *pbVar39;
      pbVar26 = (byte *)CONCAT71(0x14301e9,bVar24 + 0x20);
      pbVar32 = (byte *)CONCAT62((int6)((ulonglong)pbVar29 >> 0x10),CONCAT11(0x87,(char)pbVar29));
      *pbVar22 = *pbVar22;
      (&UNK_14301e8ad)[iVar4] = (&UNK_14301e8ad)[iVar4] + bVar24 + 0x20;
      pbVar22 = (byte *)(ulonglong)((uint)pbVar22 | 0x271ab77);
      goto code_r0x000140903dd9;
    case 0xd:
      goto code_r0x0001409046e2;
    case 0xe:
      goto code_r0x0001409046d0;
    case 0xf:
      puVar36[0x50c07a4bf] = puVar36[0x50c07a4bf] + ' ';
      *pbVar22 = *pbVar22 << 1 | (char)*pbVar22 < '\0';
      *pbVar22 = *pbVar22 + bVar18;
      break;
    case 0x10:
      *pbVar22 = *pbVar22 + bVar18;
      break;
    case 0x11:
      goto code_r0x000140904036;
    case 0x12:
      goto code_r0x000140904711;
    case 0x13:
      *(undefined4 *)pbVar39 = *(undefined4 *)param_1;
      *pbVar22 = *pbVar22 - 0x20;
      goto code_r0x0001409046e0;
    case 0x14:
      pcVar20 = (char *)CONCAT71((int7)((ulonglong)pbVar22 >> 8),4);
      *pcVar20 = *pcVar20 + '\x04';
      puVar33 = puVar36;
      goto code_r0x0001409040b7;
    case 0x15:
      bVar24 = *pbVar39;
      *(undefined8 *)(puVar36 + -8) = 0x140903ed0;
      func_0x000188903ed1(CONCAT71(0x14301e9,bVar24 + 0x20));
      break;
    case 0x16:
      *pbVar22 = *pbVar22 + bVar18;
code_r0x000140904711:
      (&UNK_14301e8ad)[iVar4] = (&UNK_14301e8ad)[iVar4] + ' ';
      goto code_r0x000140904719;
    case 0x17:
      goto code_r0x0001409046e3;
    case 0x18:
      (&UNK_14301e8ab)[iVar4] = (&UNK_14301e8ab)[iVar4] + ' ';
      *(uint *)pbVar22 = *(int *)pbVar22 + (uint)pbVar22;
      (&UNK_14301e8a5)[iVar4] = (&UNK_14301e8a5)[iVar4] + ' ';
      *pbVar22 = *pbVar22 | bVar18;
      cRam000000064f098d5d = cRam000000064f098d5d + ' ';
      if (-1 < cRam000000064f098d5d) {
        *pbVar22 = *pbVar22 + bVar18;
        goto code_r0x000140903f34;
      }
      *pbVar39 = *pbVar39 + 0x20;
      *pbVar22 = *pbVar22 + bVar18;
      goto code_r0x000140903f96;
    case 0x19:
      UNRECOVERED_JUMPTABLE = (code *)swi(1);
      pbVar23 = (byte *)(*UNRECOVERED_JUMPTABLE)();
      return pbVar23;
    case 0x1a:
      goto code_r0x000140905466;
    case 0x1b:
      goto code_r0x000140905404;
    case 0x1c:
      goto code_r0x000140905432;
    default:
      *(int *)(unaff_RBX + -0x72) = *(int *)(unaff_RBX + -0x72) + -0x4301e920;
      *(byte **)(puVar36 + -8) = pbVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000140903e8d;
  case 0x11:
    goto code_r0x00014090399e;
  case 0x12:
    bRamffffffffffffff89 = bRamffffffffffffff89 | bVar24;
    cRam0000000020878801 = cRam0000000020878801 + (char)((ulonglong)pbVar29 >> 8);
    pbVar22 = (byte *)((ulonglong)_uRam0000000000000000 & 0xff);
code_r0x00014090399e:
    pbVar22[-0x77] = pbVar22[-0x77] + bVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
    cVar2 = uRam0000000000000000._1_1_ + '\x01';
    uRam0000000000000000 = CONCAT11(cVar2,(undefined1)uRam0000000000000000);
    puVar36 = auStack_28;
    param_1 = unaff_RSI;
code_r0x0001409034d7:
    *(undefined8 *)(puVar36 + -8) = 0x1409034df;
    pub_142e32760(unaff_RBX,pbVar29,pbVar39);
    puVar17 = puVar36;
    unaff_RSI = param_1;
  case 0x14:
    pbVar39 = unaff_RDI;
    param_1 = unaff_RSI;
    puVar36 = puVar17;
    unaff_R14 = (byte *)unaff_RBP[0x8f];
    unaff_R15 = unaff_R14 + 0x20;
    pbVar40 = (byte *)0x1b0;
    *(undefined8 *)(puVar36 + -8) = 0x1409034fb;
    pbVar32 = unaff_RBX;
    in_XMM0_Qa = pub_142e32760(unaff_R15);
    pbVar26 = &UNK_14301e930;
    uVar28 = (ulonglong)*(int *)(&UNK_14301e930 + (ulonglong)unaff_R14[0x1c8] * 4);
    bVar46 = SCARRY8(uVar28,0x14301e930);
    pbVar22 = &UNK_14301e930 + uVar28;
    bVar45 = (longlong)pbVar22 < 0;
    pbVar29 = pbVar32;
    puVar37 = puVar36;
    in_XMM0_Qb = extraout_XMM0_Qb;
    unaff_RDI = pbVar39;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(unaff_R14[0x1c8]) {
    case 0:
      pbVar29 = unaff_R14 + 0x90;
      *(undefined8 *)(unaff_R14 + 0xd0) = *(undefined8 *)(unaff_R14 + 0x60);
      *(undefined8 *)(unaff_R14 + 0xd8) = *(undefined8 *)(unaff_R14 + 0x68);
      uVar42 = *(undefined8 *)unaff_R15;
      uVar8 = *(undefined8 *)(unaff_R14 + 0x28);
      uVar7 = *(undefined8 *)(unaff_R14 + 0x30);
      uVar14 = *(undefined8 *)(unaff_R14 + 0x38);
      uVar47 = *(undefined4 *)(unaff_R14 + 0x40);
      uVar48 = *(undefined4 *)(unaff_R14 + 0x44);
      uVar49 = *(undefined4 *)(unaff_R14 + 0x48);
      uVar50 = *(undefined4 *)(unaff_R14 + 0x4c);
      unaff_RBP[0x8d] = unaff_R15;
      *(undefined4 *)(unaff_R14 + 0xc0) = *(undefined4 *)(unaff_R14 + 0x50);
      *(undefined4 *)(unaff_R14 + 0xc4) = *(undefined4 *)(unaff_R14 + 0x54);
      *(undefined4 *)(unaff_R14 + 200) = *(undefined4 *)(unaff_R14 + 0x58);
      *(undefined4 *)(unaff_R14 + 0xcc) = *(undefined4 *)(unaff_R14 + 0x5c);
      *(undefined4 *)(unaff_R14 + 0xb0) = uVar47;
      *(undefined4 *)(unaff_R14 + 0xb4) = uVar48;
      *(undefined4 *)(unaff_R14 + 0xb8) = uVar49;
      *(undefined4 *)(unaff_R14 + 0xbc) = uVar50;
      *(undefined8 *)(unaff_R14 + 0xa0) = uVar7;
      *(undefined8 *)(unaff_R14 + 0xa8) = uVar14;
      *(undefined8 *)(unaff_R14 + 0x90) = uVar42;
      *(undefined8 *)(unaff_R14 + 0x98) = uVar8;
      pbVar26 = unaff_R14 + 0xe0;
      *(undefined8 *)(unaff_R14 + 0xe0) = *(undefined8 *)(unaff_R14 + 0x70);
      *(undefined8 *)(unaff_R14 + 0xe8) = *(undefined8 *)(unaff_R14 + 0x78);
      *(undefined4 *)(unaff_R14 + 0xf0) = *(undefined4 *)(unaff_R14 + 0x80);
      *(undefined4 *)(unaff_R14 + 0xf4) = *(undefined4 *)(unaff_R14 + 0x84);
      *(undefined4 *)(unaff_R14 + 0xf8) = *(undefined4 *)(unaff_R14 + 0x88);
      *(undefined4 *)(unaff_R14 + 0xfc) = *(undefined4 *)(unaff_R14 + 0x8c);
      pbVar23 = *(byte **)(unaff_R14 + 0xd0);
      pbVar22 = *(byte **)(unaff_R14 + 0xd8);
code_r0x0001409035af:
      pbVar39 = unaff_RDI;
      *(byte **)(puVar36 + 0x20) = pbVar22;
      *(undefined8 *)(puVar36 + -8) = 0x1409035c0;
      pdb_140d9d190(unaff_RBP + 0x2c,pbVar29,pbVar26,pbVar23);
      unaff_RBX = (byte *)(unaff_RBP + 0x62);
      *(undefined8 *)(puVar36 + -8) = 0x1409035dd;
      pub_142e32760(unaff_RBX,unaff_RBP + 0x2c,200);
      pbVar29 = (byte *)unaff_RBP[0x8f];
      pbVar26 = pbVar29 + 0x100;
code_r0x0001409035eb:
      *(undefined8 *)(puVar36 + -8) = 0x1409035f9;
      pub_142e32760(pbVar26,unaff_RBX,200);
      unaff_R14 = pbVar29;
      goto code_r0x000140903602;
    case 1:
      unaff_RBP[0x8d] = unaff_R15;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar36 + -8) = 0x140903a14;
      pdb_142dc8570(&UNK_14301e790);
    case 2:
code_r0x0001409039eb:
      unaff_RBP[0x8d] = unaff_R15;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar36 + -8) = 0x1409039fe;
      pdb_142dc8590(&UNK_14301e790);
    case 3:
      unaff_RBP[0x8d] = unaff_R15;
code_r0x000140903602:
      unaff_RBP[0x8e] = unaff_R14 + 0x100;
      *(undefined8 *)(puVar36 + -8) = 0x140903618;
      uVar28 = pdb_1408fdd40();
      pbVar32 = param_1;
      if (uVar28 == 2) {
        unaff_RDI = (byte *)unaff_RBP[0x8f];
        unaff_RDI[0x1c8] = 3;
code_r0x000140903630:
        param_1[0] = 2;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        pbVar22 = (byte *)0x3;
      }
      else {
        lVar41 = unaff_RBP[0x8f];
        if (*(char *)(lVar41 + 0x158) == '\x04') {
          unaff_RBP[0x8e] = *(undefined8 *)(lVar41 + 0x160);
          puVar30 = *(undefined8 **)(lVar41 + 0x168);
          unaff_RBP[0x8c] = puVar30;
          UNRECOVERED_JUMPTABLE = (code *)*puVar30;
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
            uVar42 = unaff_RBP[0x8e];
            *(undefined8 *)(puVar36 + -8) = 0x14090372f;
            (*UNRECOVERED_JUMPTABLE)(uVar42);
          }
          pbVar23 = (byte *)unaff_RBP[0x8e];
          uVar21 = *(ulonglong *)(unaff_RBP[0x8c] + 8);
          if (uVar21 != 0) {
            uVar6 = *(ulonglong *)(unaff_RBP[0x8c] + 0x10);
            *(undefined8 *)(puVar36 + -8) = 0x140903750;
            pub_1406abac0(pbVar23,uVar21,uVar6);
          }
          plVar38 = *(longlong **)(unaff_RBP[0x8f] + 0x130);
          LOCK();
          *plVar38 = *plVar38 + -1;
          UNLOCK();
          if (*plVar38 == 0) {
            lVar41 = unaff_RBP[0x8f];
            *(undefined8 *)(puVar36 + -8) = 0x140903777;
            pdb_141746810(lVar41 + 0x130);
          }
        }
        else if (((*(char *)(lVar41 + 0x158) == '\x03') &&
                 (*(char *)(unaff_RBP[0x8f] + 0x1c0) == '\x03')) &&
                ((*(char *)(unaff_RBP[0x8f] + 0x1b8) == '\x03' &&
                 (*(char *)(unaff_RBP[0x8f] + 0x1b1) == '\x03')))) {
          unaff_RBP[0x8e] = *(undefined8 *)(unaff_RBP[0x8f] + 400);
          puVar30 = *(undefined8 **)(unaff_RBP[0x8f] + 0x198);
          unaff_RBP[0x8c] = puVar30;
          UNRECOVERED_JUMPTABLE = (code *)*puVar30;
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
            uVar42 = unaff_RBP[0x8e];
            *(undefined8 *)(puVar36 + -8) = 0x1409036d1;
            (*UNRECOVERED_JUMPTABLE)(uVar42);
          }
          pbVar23 = (byte *)unaff_RBP[0x8e];
          uVar21 = *(ulonglong *)(unaff_RBP[0x8c] + 8);
          if (uVar21 != 0) {
            uVar6 = *(ulonglong *)(unaff_RBP[0x8c] + 0x10);
            *(undefined8 *)(puVar36 + -8) = 0x1409036f2;
            pub_1406abac0(pbVar23,uVar21,uVar6);
          }
          *(undefined1 *)(unaff_RBP[0x8f] + 0x1b0) = 0;
        }
        if ((uVar28 & 1) == 0) {
          unaff_RBP[0x8b] = pbVar39;
          lVar41 = unaff_RBP[0x8f];
          uVar42 = *(undefined8 *)(lVar41 + 0xd0);
          uVar8 = *(undefined8 *)(lVar41 + 0xd8);
          uVar7 = *(undefined8 *)(pbVar39 + 0x20);
          *(undefined8 *)(puVar36 + 0x20) = *(undefined8 *)(pbVar39 + 0x18);
          *(undefined8 *)(puVar36 + 0x28) = uVar7;
          unaff_RBP[0x8e] = pbVar39;
          *(undefined8 *)(puVar36 + -8) = 0x140903837;
          pdb_1417da120(unaff_RBP + 0x84,uVar42,uVar8,lVar41 + 0xb0);
          plVar38 = (longlong *)unaff_RBP[0x8e];
          LOCK();
          *plVar38 = *plVar38 + -1;
          UNLOCK();
          if (*plVar38 == 0) {
            *(undefined8 *)(puVar36 + -8) = 0x140903851;
            pdb_140cd0de0(unaff_RBP + 0x8b);
          }
          lVar41 = unaff_RBP[0x8f];
          *(undefined8 *)(puVar36 + -8) = 0x140903865;
          pdb_14098a860(lVar41 + 0xe0);
          unaff_RDI = (byte *)unaff_RBP[0x8f];
          uVar28 = *(ulonglong *)(unaff_RDI + 200);
          if (uVar28 != 0) {
            pbVar23 = *(byte **)(unaff_RDI + 0xd0);
            *(undefined8 *)(puVar36 + -8) = 0x14090388b;
            pub_1406abac0(pbVar23,uVar28,1);
          }
          puVar31 = *(undefined **)(unaff_RDI + 0x90);
          uVar42 = unaff_RBP[0x8d];
          if ((!SBORROW8(0,(longlong)puVar31)) && (puVar31 != (undefined *)0x0)) {
            pbVar23 = *(byte **)(unaff_RDI + 0x98);
            *(undefined8 *)(puVar36 + -8) = 0x1409038b5;
            pub_1406abac0(pbVar23,(ulonglong)puVar31,1);
          }
          lVar41 = unaff_RBP[0x84];
          pbVar39 = (byte *)unaff_RBP[0x85];
          unaff_RBP[0x80] = unaff_RBP[0x86];
          unaff_RBP[0x81] = unaff_RBP[0x87];
          unaff_RBP[0x82] = unaff_RBP[0x88];
          unaff_RBP[0x83] = unaff_RBP[0x89];
          unaff_RDI[0x1c8] = 1;
          if (lVar41 == -0x7fffffffffffffff) goto code_r0x000140903630;
        }
        else {
          lVar41 = unaff_RBP[0x8f];
          *(undefined8 *)(puVar36 + -8) = 0x140903791;
          pdb_14098a860(lVar41 + 0xe0);
          lVar41 = unaff_RBP[0x8f];
          uVar28 = *(ulonglong *)(lVar41 + 200);
          if (uVar28 != 0) {
            pbVar23 = *(byte **)(lVar41 + 0xd0);
            *(undefined8 *)(puVar36 + -8) = 0x1409037b7;
            pub_1406abac0(pbVar23,uVar28,1);
          }
          puVar31 = *(undefined **)(lVar41 + 0x90);
          uVar42 = unaff_RBP[0x8d];
          if ((!SBORROW8(0,(longlong)puVar31)) && (puVar31 != (undefined *)0x0)) {
            pbVar23 = *(byte **)(lVar41 + 0x98);
            *(undefined8 *)(puVar36 + -8) = 0x1409037e1;
            pub_1406abac0(pbVar23,(ulonglong)puVar31,1);
          }
          *(undefined1 *)(lVar41 + 0x1c8) = 1;
          lVar41 = -0x8000000000000000;
        }
        *(undefined4 *)(unaff_RBP + 0x7e) = *(undefined4 *)(unaff_RBP + 0x82);
        *(undefined4 *)((longlong)unaff_RBP + 0x3f4) = *(undefined4 *)((longlong)unaff_RBP + 0x414);
        *(undefined4 *)(unaff_RBP + 0x7f) = *(undefined4 *)(unaff_RBP + 0x83);
        *(undefined4 *)((longlong)unaff_RBP + 0x3fc) = *(undefined4 *)((longlong)unaff_RBP + 0x41c);
        unaff_RBP[0x7c] = unaff_RBP[0x80];
        unaff_RBP[0x7d] = unaff_RBP[0x81];
        *(undefined8 *)(puVar36 + -8) = 0x14090391d;
        pdb_140902140(uVar42);
        if (SBORROW8(0,lVar41)) {
          *(undefined8 *)(puVar36 + -8) = 0x14090392e;
          pbVar23 = (byte *)pdb_142dc6590(pbVar39);
          uVar42 = 1;
        }
        else {
          *(undefined8 *)(puVar36 + -8) = 0x14090393b;
          pdb_14007ee60();
          *(undefined8 *)(puVar36 + -8) = 0x14090394a;
          pbVar23 = pub_1406abab0(0x40,8);
          if (pbVar23 == (byte *)0x0) {
            unaff_RBP[0x8d] = lVar41;
            unaff_RBP[0x8e] = pbVar39;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar36 + -8) = 0x1409039cf;
            pdb_142dc7e11(8,0x40);
          }
          pbVar23[0] = 1;
          pbVar23[1] = 0;
          pbVar23[2] = 0;
          pbVar23[3] = 0;
          pbVar23[4] = 0;
          pbVar23[5] = 0;
          pbVar23[6] = 0;
          pbVar23[7] = 0;
          pbVar23[8] = 1;
          pbVar23[9] = 0;
          pbVar23[10] = 0;
          pbVar23[0xb] = 0;
          pbVar23[0xc] = 0;
          pbVar23[0xd] = 0;
          pbVar23[0xe] = 0;
          pbVar23[0xf] = 0;
          *(longlong *)(pbVar23 + 0x10) = lVar41;
          *(byte **)(pbVar23 + 0x18) = pbVar39;
          uVar42 = unaff_RBP[0x7d];
          uVar8 = unaff_RBP[0x7e];
          uVar7 = unaff_RBP[0x7f];
          *(undefined8 *)(pbVar23 + 0x20) = unaff_RBP[0x7c];
          *(undefined8 *)(pbVar23 + 0x28) = uVar42;
          *(undefined8 *)(pbVar23 + 0x30) = uVar8;
          *(undefined8 *)(pbVar23 + 0x38) = uVar7;
          puVar31 = &UNK_14301e740;
          uVar42 = 0;
        }
        unaff_RDI = (byte *)unaff_RBP[0x8f];
        *(undefined8 *)param_1 = uVar42;
        *(byte **)(param_1 + 8) = pbVar23;
        *(undefined **)(param_1 + 0x10) = puVar31;
        pbVar22 = (byte *)0x1;
      }
code_r0x000140903999:
      unaff_RDI[0x220] = (byte)pbVar22;
code_r0x0001409039b1:
      return pbVar32;
    case 4:
code_r0x000140903d0d:
      iVar4 = *(int *)(pbVar26 + (longlong)pbVar22 * 4);
      unaff_RBP[0x111] = pbVar29;
                    /* WARNING: Could not recover jumptable at 0x000140903d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar23 = (byte *)(*(code *)(pbVar26 + iVar4))();
      return pbVar23;
    case 5:
code_r0x0001409046e3:
      *(int *)pbVar26 = *(int *)pbVar26 + -0x72b80000;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar36 + -8) = 0x1409046f3;
      pdb_142dc8590();
    case 6:
code_r0x0001409046d7:
      pbVar29 = unaff_R14;
      pbVar39 = pbVar40;
      if (bVar45) {
        pbVar26 = (byte *)CONCAT71((int7)((ulonglong)pbVar26 >> 8),
                                   (char)pbVar26 + (char)((ulonglong)pbVar26 >> 8));
        goto code_r0x0001409046e3;
      }
      *pbVar22 = *pbVar22 + (char)pbVar22;
      goto code_r0x0001409046d4;
    case 7:
code_r0x000140903dd2:
      pbVar26 = &UNK_14301e950;
      puVar37 = puVar36;
    case 8:
code_r0x000140903dd9:
      uVar28 = (ulonglong)*(int *)(pbVar26 + (longlong)pbVar22 * 4);
      pbVar22 = pbVar26 + uVar28;
      puVar36 = puVar37;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(pbVar22) {
      case (byte *)0x140903df9:
        *(undefined8 *)(pbVar39 + 0x60) = *(undefined8 *)(pbVar39 + 0xb0);
        *(undefined8 *)(pbVar39 + 0x68) = *(undefined8 *)(pbVar39 + 0xb8);
        *(undefined8 *)(pbVar39 + 0x50) = *(undefined8 *)(pbVar39 + 0xa0);
        *(undefined8 *)(pbVar39 + 0x58) = *(undefined8 *)(pbVar39 + 0xa8);
        *(undefined8 *)(pbVar39 + 0x40) = *(undefined8 *)(pbVar39 + 0x90);
        *(undefined8 *)(pbVar39 + 0x48) = *(undefined8 *)(pbVar39 + 0x98);
        *(undefined8 *)(pbVar39 + 0x30) = *(undefined8 *)(pbVar39 + 0x80);
        *(undefined8 *)(pbVar39 + 0x38) = *(undefined8 *)(pbVar39 + 0x88);
        *(undefined8 *)(pbVar39 + 0x20) = *(undefined8 *)(pbVar39 + 0x70);
        *(undefined8 *)(pbVar39 + 0x28) = *(undefined8 *)(pbVar39 + 0x78);
        uVar42 = *(undefined8 *)pbVar39;
        uVar8 = *(undefined8 *)(pbVar39 + 8);
        uVar7 = *(undefined8 *)(pbVar39 + 0x18);
        unaff_RBP[0xfa] = *(undefined8 *)(pbVar39 + 0x10);
        unaff_RBP[0xfb] = uVar7;
        unaff_RBP[0xf8] = uVar42;
        unaff_RBP[0xf9] = uVar8;
        if (SBORROW8(0,*(longlong *)(pbVar39 + 0x58))) {
          uVar42 = *(undefined8 *)(pbVar39 + 0x70);
          uVar8 = *(undefined8 *)(pbVar39 + 0x78);
          uVar47 = *(undefined4 *)(pbVar39 + 0x80);
          uVar48 = *(undefined4 *)(pbVar39 + 0x84);
          uVar49 = *(undefined4 *)(pbVar39 + 0x88);
          uVar50 = *(undefined4 *)(pbVar39 + 0x8c);
          uVar11 = *(undefined4 *)(pbVar39 + 0x94);
          uVar12 = *(undefined4 *)(pbVar39 + 0x98);
          uVar13 = *(undefined4 *)(pbVar39 + 0x9c);
          *(undefined4 *)(unaff_RBP + 0xf4) = *(undefined4 *)(pbVar39 + 0x90);
          *(undefined4 *)((longlong)unaff_RBP + 0x7a4) = uVar11;
          *(undefined4 *)(unaff_RBP + 0xf5) = uVar12;
          *(undefined4 *)((longlong)unaff_RBP + 0x7ac) = uVar13;
          *(undefined4 *)(unaff_RBP + 0xf2) = uVar47;
          *(undefined4 *)((longlong)unaff_RBP + 0x794) = uVar48;
          *(undefined4 *)(unaff_RBP + 0xf3) = uVar49;
          *(undefined4 *)((longlong)unaff_RBP + 0x79c) = uVar50;
          unaff_RBP[0xf0] = uVar42;
          unaff_RBP[0xf1] = uVar8;
          param_1 = (byte *)(unaff_RBP + 0x96);
          pbVar29 = (byte *)(unaff_RBP + 0xf0);
          pbVar39 = (byte *)(unaff_RBP + 0xf8);
          puVar16 = puVar37;
code_r0x000140903e87:
          puVar36 = puVar16;
          *(undefined8 *)(puVar36 + -8) = 0x140903e8c;
          pdb_140d9d500(param_1,pbVar29,pbVar39);
          goto code_r0x000140903e8d;
        }
        uVar42 = *(undefined8 *)(pbVar39 + 0xb8);
        unaff_RBP[0xee] = *(undefined8 *)(pbVar39 + 0xb0);
        unaff_RBP[0xef] = uVar42;
        in_XMM0_Qa = *(undefined8 *)(pbVar39 + 0x70);
        in_XMM0_Qb = *(undefined8 *)(pbVar39 + 0x78);
        uVar47 = *(undefined4 *)(pbVar39 + 0x80);
        uVar48 = *(undefined4 *)(pbVar39 + 0x84);
        in_XMM1_Dc = *(undefined4 *)(pbVar39 + 0x88);
        in_XMM1_Dd = *(undefined4 *)(pbVar39 + 0x8c);
        uVar49 = *(undefined4 *)(pbVar39 + 0x90);
        uVar50 = *(undefined4 *)(pbVar39 + 0x94);
        in_XMM2_Dc = *(undefined4 *)(pbVar39 + 0x98);
        in_XMM2_Dd = *(undefined4 *)(pbVar39 + 0x9c);
        uVar11 = *(undefined4 *)(pbVar39 + 0xa4);
        uVar12 = *(undefined4 *)(pbVar39 + 0xa8);
        uVar13 = *(undefined4 *)(pbVar39 + 0xac);
        *(undefined4 *)(unaff_RBP + 0xec) = *(undefined4 *)(pbVar39 + 0xa0);
        *(undefined4 *)((longlong)unaff_RBP + 0x764) = uVar11;
        *(undefined4 *)(unaff_RBP + 0xed) = uVar12;
        *(undefined4 *)((longlong)unaff_RBP + 0x76c) = uVar13;
code_r0x000140903ff8:
        *(undefined4 *)(unaff_RBP + 0xea) = uVar49;
        *(undefined4 *)((longlong)unaff_RBP + 0x754) = uVar50;
        *(undefined4 *)(unaff_RBP + 0xeb) = in_XMM2_Dc;
        *(undefined4 *)((longlong)unaff_RBP + 0x75c) = in_XMM2_Dd;
        *(undefined4 *)(unaff_RBP + 0xe8) = uVar47;
        *(undefined4 *)((longlong)unaff_RBP + 0x744) = uVar48;
        *(undefined4 *)(unaff_RBP + 0xe9) = in_XMM1_Dc;
        *(undefined4 *)((longlong)unaff_RBP + 0x74c) = in_XMM1_Dd;
        unaff_RBP[0xe6] = in_XMM0_Qa;
        unaff_RBP[0xe7] = in_XMM0_Qb;
        *(undefined8 *)(puVar37 + -8) = 0x140904027;
        pdb_140d9d590(unaff_RBP + 0x96,unaff_RBP + 0xe6,unaff_RBP + 0xf8);
        pbVar32 = (byte *)(unaff_RBP + 0x46);
code_r0x000140904036:
        *(undefined8 *)(puVar37 + -8) = 0x140904044;
        pub_142e32760(pbVar32);
        pbVar39 = (byte *)unaff_RBP[0x111];
        param_1 = pbVar39 + 0xd0;
        pbVar40 = (byte *)0x1b0;
        *(undefined8 *)(puVar37 + -8) = 0x140904063;
        pub_142e32760(param_1);
        pbVar22 = (byte *)(ulonglong)pbVar39[0x278];
        break;
      case (byte *)0x140903edf:
        param_1 = pbVar39 + 0xd0;
        pbVar26 = &UNK_14301e964;
        puVar31 = &UNK_14301e964 + *(int *)(&UNK_14301e964 + (ulonglong)pbVar39[0x278] * 4);
        puVar34 = puVar37;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(pbVar39[0x278]) {
        case 0:
          goto code_r0x00014090407a;
        case 1:
          goto code_r0x00014090474d;
        case 2:
          goto code_r0x000140904721;
        case 3:
          goto code_r0x00014090413b;
        case 4:
          goto code_r0x000140903f0b;
        case 5:
          goto code_r0x000140904753;
        case 6:
          goto code_r0x000140904727;
        case 7:
          goto code_r0x000140903fb4;
        case 8:
          goto code_r0x00014090542e;
        case 9:
          goto code_r0x0001409054a4;
        case 10:
          goto code_r0x000140905448;
        case 0xb:
          goto code_r0x000140905476;
        default:
          goto code_r0x00014301e964;
        }
      case (byte *)0x140903ef7:
        *(uint *)(pbVar22 + 1) = *(uint *)(pbVar22 + 1) | 0x4ce0ffc8;
        pbVar39 = (byte *)(ulonglong)((int)pbVar39 + 0xd0);
code_r0x000140903f04:
        puVar31 = (undefined *)(ulonglong)pbVar39[0x1e8];
        goto code_r0x000140903f0b;
      case (byte *)0x140903efd:
        goto code_r0x000140903f04;
      case (byte *)0x140903fa0:
        if (CARRY8(uVar28,(ulonglong)pbVar26) || pbVar22 == (byte *)0x0) goto code_r0x000140903fa2;
        *(int *)(pbVar32 + 8) = *(int *)(pbVar32 + 8) + 1;
        pbVar29 = unaff_R14;
        goto code_r0x000140903fa7;
      case (byte *)0x140904066:
        if (-1 < (longlong)pbVar22) {
          *pbVar22 = *pbVar22 + (char)pbVar22;
        }
        break;
      case (byte *)0x140904127:
        pcVar20 = (char *)CONCAT71((int7)((ulonglong)pbVar22 >> 8),1);
        *pcVar20 = *pcVar20 + '\x01';
        puVar33 = puVar37;
        unaff_RDI = pbVar39;
        goto code_r0x0001409040b7;
      case (byte *)0x140904700:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar37 + -8) = 0x14090470c;
        pdb_142dc8590(&UNK_14301e778);
      case (byte *)0x14090470d:
        goto code_r0x000140904799;
      case (byte *)0x140904712:
        pbVar26 = &UNK_14301e778;
        goto code_r0x000140904719;
      case (byte *)0x140904713:
        pbVar26 = (byte *)0x4301e778;
code_r0x000140904719:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar36 + -8) = 0x14090471e;
        pdb_142dc8570(pbVar26);
      case (byte *)0x140904739:
        unaff_RBP = (undefined8 *)0x878;
        goto code_r0x000140904737;
      case (byte *)0x14090473f:
        goto code_r0x000140904737;
      case (byte *)0x14090541a:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        pbVar23 = (byte *)(*UNRECOVERED_JUMPTABLE)();
        return pbVar23;
      case (byte *)0x140905434:
        pbVar29 = (byte *)CONCAT71((int7)((ulonglong)pbVar26 >> 8),
                                   (char)pbVar26 + *(char *)((longlong)unaff_RBP + 0xf));
        puVar30 = (undefined8 *)(puVar37 + -8);
        *(undefined8 **)(puVar37 + -8) = unaff_RBP;
        cVar2 = '\x10';
        do {
          unaff_RBP = unaff_RBP + -1;
          puVar30 = puVar30 + -1;
          *puVar30 = *unaff_RBP;
          cVar2 = cVar2 + -1;
        } while ('\0' < cVar2);
        *(undefined1 **)(puVar37 + -0x90) = puVar37 + -8;
        goto code_r0x00014090543d;
      case (byte *)0x140905462:
        if ((POPCOUNT((ulonglong)pbVar22 & 0xff) & 1U) == 0) goto code_r0x0001409053c6;
        if (SCARRY8(uVar28,(longlong)pbVar26)) goto code_r0x000140905466;
        *(byte **)(puVar37 + 0x30) = pbVar22;
        puVar31 = &UNK_14301e810;
code_r0x000140905474:
        *(undefined **)(puVar37 + 0x20) = puVar31;
        goto code_r0x00014090548b;
      case (byte *)0x140905491:
        goto code_r0x000140905491;
      case (byte *)0x14301e950:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar26 = &UNK_14301e964;
      puVar31 = &UNK_14301e964 + *(int *)(&UNK_14301e964 + (longlong)pbVar22 * 4);
      puVar34 = puVar37;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(puVar31) {
      case (undefined *)0x140903f0b:
code_r0x000140903f0b:
                    /* WARNING: Could not recover jumptable at 0x000140903f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar23 = (byte *)(*(code *)(&UNK_14301e974 +
                                    *(int *)(&UNK_14301e974 + (longlong)puVar31 * 4)))();
        return pbVar23;
      case (undefined *)0x140903fb4:
code_r0x000140903fb4:
        *(undefined4 *)pbVar39 = *(undefined4 *)pbVar39;
        puVar31[-0x75] = puVar31[-0x75] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined *)0x14090407a:
code_r0x00014090407a:
        uVar42 = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 *)(pbVar39 + 0x180) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(pbVar39 + 0x188) = uVar42;
        in_XMM0_Qa = *(undefined8 *)param_1;
        in_XMM0_Qb = *(undefined8 *)(param_1 + 8);
        uVar42 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        uVar14 = *(undefined8 *)(param_1 + 0x28);
        unaff_RBP[0x110] = param_1;
        uVar15 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(pbVar39 + 0x170) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(pbVar39 + 0x178) = uVar15;
        *(undefined8 *)(pbVar39 + 0x160) = uVar7;
        *(undefined8 *)(pbVar39 + 0x168) = uVar14;
        *(undefined8 *)(pbVar39 + 0x150) = uVar42;
        *(undefined8 *)(pbVar39 + 0x158) = uVar8;
        puVar33 = puVar37;
        unaff_RDI = pbVar39;
code_r0x0001409040b7:
        *(undefined8 *)(unaff_RDI + 0x140) = in_XMM0_Qa;
        *(undefined8 *)(unaff_RDI + 0x148) = in_XMM0_Qb;
        uVar47 = *(undefined4 *)(unaff_RDI + 0x130);
        *(undefined8 *)(unaff_RDI + 400) = *(undefined8 *)(unaff_RDI + 0x120);
        *(undefined8 *)(unaff_RDI + 0x198) = *(undefined8 *)(unaff_RDI + 0x128);
        *(undefined4 *)(unaff_RDI + 0x1a0) = uVar47;
        *(undefined4 *)(unaff_RDI + 0x1a4) = *(undefined4 *)(unaff_RDI + 0x134);
        *(undefined4 *)(unaff_RDI + 0x1a8) = *(undefined4 *)(unaff_RDI + 0x138);
        *(undefined4 *)(unaff_RDI + 0x1ac) = *(undefined4 *)(unaff_RDI + 0x13c);
        uVar42 = *(undefined8 *)(unaff_RDI + 0x180);
        *(undefined8 *)(puVar33 + 0x20) = *(undefined8 *)(unaff_RDI + 0x188);
        *(undefined8 *)(puVar33 + -8) = 0x140904100;
        pdb_140d9d190(unaff_RBP + 0x96,uVar47,unaff_RDI + 400,uVar42);
        *(undefined8 *)(puVar33 + -8) = 0x14090411d;
        pub_142e32760(unaff_RBP + 0x7c,unaff_RBP + 0x96,200);
        pbVar39 = (byte *)unaff_RBP[0x111];
        *(undefined8 *)(puVar33 + -8) = 0x140904139;
        pub_142e32760(pbVar39 + 0x1b0,unaff_RBP + 0x7c,200);
        puVar37 = puVar33;
        pbVar29 = unaff_R14;
        break;
      case (undefined *)0x14090413b:
code_r0x00014090413b:
        unaff_RBP[0x110] = param_1;
        pbVar29 = unaff_R14;
        break;
      case (undefined *)0x140904721:
code_r0x000140904721:
        unaff_RBP[0x110] = param_1;
        puVar27 = &UNK_14301e7a8;
        goto code_r0x00014090472f;
      case (undefined *)0x140904727:
code_r0x000140904727:
        puVar27 = &UNK_14301e964;
        puVar31[-0x73] = puVar31[-0x73] + 'd';
code_r0x00014090472f:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar37 + -8) = 0x140904734;
        pdb_142dc8590(puVar27);
      case (undefined *)0x14090474d:
code_r0x00014090474d:
        unaff_RBP[0x110] = param_1;
        puVar27 = &UNK_14301e7a8;
        goto code_r0x00014090475b;
      case (undefined *)0x140904753:
code_r0x000140904753:
        puVar27 = &UNK_14301e964;
        puVar31[-0x73] = puVar31[-0x73] + 'd';
code_r0x00014090475b:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar37 + -8) = 0x140904760;
        pdb_142dc8570(puVar27);
      case (undefined *)0x14090542e:
code_r0x00014090542e:
        pbVar39 = pbVar40;
        pbVar26 = &UNK_14301e964;
        *(int *)((longlong)unaff_RBP + 0x31) = *(int *)((longlong)unaff_RBP + 0x31) + 1;
        pbVar29 = pbVar32;
code_r0x000140905432:
        if ((byte *)0x1 < pbVar26) {
          pbVar23 = pbVar39;
        }
code_r0x00014090543d:
        pbVar32 = &UNK_14301e984;
        pbVar26 = pbVar29;
        goto code_r0x000140905444;
      case (undefined *)0x140905448:
        goto code_r0x000140905448;
      case (undefined *)0x140905476:
code_r0x000140905476:
        puVar37 = puVar34;
        goto code_r0x00014090548b;
      case (undefined *)0x1409054a4:
code_r0x0001409054a4:
        goto code_r0x0001409054b9;
      case (undefined *)0x14301e964:
code_r0x00014301e964:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_RBP[0x10f] = pbVar39 + 0x1b0;
      *(undefined8 *)(puVar37 + -8) = 0x140904158;
      uVar28 = pdb_1408fdd40();
      if (uVar28 == 2) {
        lVar41 = unaff_RBP[0x111];
        *(undefined1 *)(lVar41 + 0x278) = 3;
        uVar19 = 3;
        goto code_r0x000140904a97;
      }
      lVar41 = unaff_RBP[0x111];
      if (*(char *)(lVar41 + 0x208) == '\x04') {
        unaff_RBP[0x10f] = *(undefined8 *)(lVar41 + 0x210);
        puVar30 = *(undefined8 **)(lVar41 + 0x218);
        unaff_RBP[0x10e] = puVar30;
        UNRECOVERED_JUMPTABLE = (code *)*puVar30;
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          uVar42 = unaff_RBP[0x10f];
          *(undefined8 *)(puVar37 + -8) = 0x140904413;
          (*UNRECOVERED_JUMPTABLE)(uVar42);
        }
        pbVar23 = (byte *)unaff_RBP[0x10f];
        uVar21 = *(ulonglong *)(unaff_RBP[0x10e] + 8);
        if (uVar21 != 0) {
          uVar6 = *(ulonglong *)(unaff_RBP[0x10e] + 0x10);
          *(undefined8 *)(puVar37 + -8) = 0x140904434;
          pub_1406abac0(pbVar23,uVar21,uVar6);
        }
        plVar38 = *(longlong **)(unaff_RBP[0x111] + 0x1e0);
        LOCK();
        *plVar38 = *plVar38 + -1;
        UNLOCK();
        if (*plVar38 == 0) {
          lVar41 = unaff_RBP[0x111];
          *(undefined8 *)(puVar37 + -8) = 0x14090445b;
          pdb_141746810(lVar41 + 0x1e0);
        }
      }
      else if ((((*(char *)(lVar41 + 0x208) == '\x03') &&
                (*(char *)(unaff_RBP[0x111] + 0x270) == '\x03')) &&
               (*(char *)(unaff_RBP[0x111] + 0x268) == '\x03')) &&
              (*(char *)(unaff_RBP[0x111] + 0x261) == '\x03')) {
        lVar41 = unaff_RBP[0x111];
        *(undefined8 *)(puVar37 + -8) = 0x1409041e9;
        pdb_1400d68e0(lVar41 + 0x240);
        *(undefined1 *)(unaff_RBP[0x111] + 0x260) = 0;
      }
      if ((uVar28 & 1) == 0) {
        unaff_RBP[0x10b] = unaff_R12;
        if (*(char *)(unaff_R12 + 0x28) == '\x02') {
          uVar42 = *(undefined8 *)(unaff_RBP[0x111] + 0x180);
          uVar8 = *(undefined8 *)(unaff_RBP[0x111] + 0x188);
          uVar7 = *(undefined8 *)(unaff_R12 + 0x18);
          *(undefined8 *)(puVar37 + 0x20) = *(undefined8 *)(unaff_R12 + 0x20);
          *(undefined8 *)(puVar37 + -8) = 0x14090453a;
          pdb_1417d7ad0(unaff_RBP + 0x96,uVar42,uVar8,uVar7);
        }
        else {
          lVar41 = unaff_RBP[0x111];
          uVar42 = *(undefined8 *)(lVar41 + 0x180);
          uVar8 = *(undefined8 *)(lVar41 + 0x188);
          uVar7 = *(undefined8 *)(unaff_R12 + 0x20);
          *(undefined8 *)(puVar37 + 0x20) = *(undefined8 *)(unaff_R12 + 0x18);
          *(undefined8 *)(puVar37 + 0x28) = uVar7;
          *(undefined8 *)(puVar37 + -8) = 0x14090456e;
          pdb_1417d8230(unaff_RBP + 0x96,uVar42,uVar8,lVar41 + 0x160);
        }
        lVar44 = unaff_RBP[0x96];
        unaff_R12 = unaff_RBP[0x97];
        if (SBORROW8(0,lVar44)) {
          plVar38 = (longlong *)unaff_RBP[0x10b];
          LOCK();
          *plVar38 = *plVar38 + -1;
          UNLOCK();
          if (*plVar38 == 0) {
            *(undefined8 *)(puVar37 + -8) = 0x1409045a2;
            pdb_140cd0de0(unaff_RBP + 0x10b);
          }
          goto code_r0x000140904466;
        }
        *(undefined4 *)(unaff_RBP + 0x108) = *(undefined4 *)(unaff_RBP + 0x9a);
        *(undefined4 *)((longlong)unaff_RBP + 0x844) = *(undefined4 *)((longlong)unaff_RBP + 0x4d4);
        *(undefined4 *)(unaff_RBP + 0x109) = *(undefined4 *)(unaff_RBP + 0x9b);
        *(undefined4 *)((longlong)unaff_RBP + 0x84c) = *(undefined4 *)((longlong)unaff_RBP + 0x4dc);
        unaff_RBP[0x106] = unaff_RBP[0x98];
        unaff_RBP[0x107] = unaff_RBP[0x99];
        plVar38 = (longlong *)unaff_RBP[0x10b];
        LOCK();
        *plVar38 = *plVar38 + -1;
        UNLOCK();
        if (*plVar38 == 0) {
          *(undefined8 *)(puVar37 + -8) = 0x1409045dd;
          pdb_140cd0de0(unaff_RBP + 0x10b);
        }
        lVar41 = unaff_RBP[0x111];
        *(undefined8 *)(puVar37 + -8) = 0x1409045f1;
        pdb_14098a860(lVar41 + 400);
        lVar41 = unaff_RBP[0x111];
        uVar28 = *(ulonglong *)(lVar41 + 0x178);
        if (uVar28 != 0) {
          pbVar23 = *(byte **)(lVar41 + 0x180);
          *(undefined8 *)(puVar37 + -8) = 0x140904617;
          pub_1406abac0(pbVar23,uVar28,1);
        }
        puVar31 = *(undefined **)(lVar41 + 0x140);
        uVar42 = unaff_RBP[0x110];
      }
      else {
code_r0x000140904466:
        lVar41 = unaff_RBP[0x111];
        *(undefined8 *)(puVar37 + -8) = 0x140904479;
        pdb_14098a860(lVar41 + 400);
        lVar41 = unaff_RBP[0x111];
        uVar28 = *(ulonglong *)(lVar41 + 0x178);
        if (uVar28 != 0) {
          pbVar23 = *(byte **)(lVar41 + 0x180);
          *(undefined8 *)(puVar37 + -8) = 0x14090449f;
          pub_1406abac0(pbVar23,uVar28,1);
        }
        puVar31 = *(undefined **)(lVar41 + 0x140);
        lVar44 = -0x8000000000000000;
        uVar42 = unaff_RBP[0x110];
      }
      if (0 < (longlong)puVar31) {
        pbVar23 = *(byte **)(lVar41 + 0x148);
        *(undefined8 *)(puVar37 + -8) = 0x1409044ce;
        pub_1406abac0(pbVar23,(ulonglong)puVar31,1);
      }
      *(undefined4 *)(unaff_RBP + 0x102) = *(undefined4 *)(unaff_RBP + 0x108);
      *(undefined4 *)((longlong)unaff_RBP + 0x814) = *(undefined4 *)((longlong)unaff_RBP + 0x844);
      *(undefined4 *)(unaff_RBP + 0x103) = *(undefined4 *)(unaff_RBP + 0x109);
      *(undefined4 *)((longlong)unaff_RBP + 0x81c) = *(undefined4 *)((longlong)unaff_RBP + 0x84c);
      unaff_RBP[0x100] = unaff_RBP[0x106];
      unaff_RBP[0x101] = unaff_RBP[0x107];
      *(undefined1 *)(lVar41 + 0x278) = 1;
      *(undefined8 *)(puVar37 + -8) = 0x1409044f9;
      pdb_140902140(uVar42);
      goto code_r0x00014090479b;
    case 9:
      break;
    case 10:
code_r0x0001409046e0:
      pbVar29 = unaff_R14;
      pbVar39 = pbVar40;
      *pbVar22 = *pbVar22 + (char)pbVar22;
      goto code_r0x0001409046e2;
    case 0xb:
      goto code_r0x000140903e8d;
    case 0xc:
      goto code_r0x000140903edd;
    case 0xd:
      unaff_RBP = (undefined8 *)0x888;
      pbVar32 = unaff_RBX;
      goto code_r0x000140904036;
    case 0xe:
      goto code_r0x000140904719;
    case 0xf:
      puVar36 = puVar36 + 8;
      break;
    case 0x10:
      (&UNK_14301e8bd)[uVar28] = (&UNK_14301e8bd)[uVar28] + '0';
      uVar28 = (ulonglong)unaff_RBP >> 8;
      unaff_RBP = (undefined8 *)((ulonglong)pbVar22 & 0xffffffff);
      pcVar20 = (char *)CONCAT71((uint7)uVar28 & 0xffffff,4);
      *pcVar20 = *pcVar20 + '\x04';
      puVar33 = puVar36;
      goto code_r0x0001409040b7;
    case 0x11:
code_r0x000140903e8d:
      *(undefined8 *)(puVar36 + -8) = 0x140903ea9;
      pub_142e32760(unaff_RBP + 0x46,unaff_RBP + 0x96,0x120);
      pbVar39 = (byte *)unaff_RBP[0x111];
      unaff_R15 = pbVar39 + 0xd0;
      *(undefined8 *)(puVar36 + -8) = 0x140903ec8;
      pub_142e32760(unaff_R15,unaff_RBP + 0x46,0x120);
      pbVar26 = &UNK_14301e974;
      bVar46 = SCARRY8((longlong)*(int *)(&UNK_14301e974 + (ulonglong)pbVar39[0x1e8] * 4),
                       0x14301e974);
      pbVar22 = &UNK_14301e974 + *(int *)(&UNK_14301e974 + (ulonglong)pbVar39[0x1e8] * 4);
      puVar37 = puVar36;
code_r0x000140903edd:
      pbVar29 = unaff_R14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(pbVar22) {
      case (byte *)0x140903fc4:
        uVar42 = *(undefined8 *)(pbVar39 + 0x1d8);
        lVar41 = *(longlong *)(pbVar39 + 0x1e0);
        goto code_r0x00014090489f;
      case (byte *)0x140904737:
code_r0x000140904737:
        unaff_RBP[0x10f] = unaff_R15;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar37 + -8) = 0x14090474a;
        pdb_142dc8590(&UNK_14301e760);
      case (byte *)0x140904763:
        unaff_RBP[0x10f] = unaff_R15;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar37 + -8) = 0x140904776;
        pdb_142dc8570(&UNK_14301e760);
      case (byte *)0x14090543e:
        pbVar32 = (byte *)0x4301e984;
code_r0x000140905444:
        pbVar40 = (byte *)(longlong)*(int *)(pbVar32 + (longlong)pbVar23 * 4);
code_r0x000140905448:
                    /* WARNING: Could not emulate address calculation at 0x00014090543a */
                    /* WARNING: Treating indirect jump as call */
        pbVar23 = (byte *)(*(code *)(pbVar40 + (longlong)pbVar32))(pbVar26);
        return pbVar23;
      case (byte *)0x140905458:
        if (!bVar46) {
          pbVar22 = (byte *)((ulonglong)pbVar22 & 0xffffffffffffff20);
        }
        *(byte **)(puVar37 + 0x20) = pbVar22;
        puVar36 = puVar37;
code_r0x000140905466:
        *(undefined8 *)(puVar36 + -8) = 0x1409054ec;
        pbVar23 = (byte *)pdb_140f66090();
        return pbVar23;
      case (byte *)0x140905486:
code_r0x00014090548b:
        *(undefined8 *)(puVar37 + -8) = 0x140905490;
        pbVar22 = (byte *)pdb_140f66090();
code_r0x000140905491:
        return pbVar22;
      case (byte *)0x1409054b4:
code_r0x0001409054b9:
        *(undefined8 *)(puVar37 + -8) = 0x1409054be;
        pbVar23 = (byte *)pdb_140f66090();
        return pbVar23;
      case (byte *)0x14301e974:
        *(undefined8 **)(puVar37 + -8) = unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar39[0x1e9] = 0;
      pbVar39[0x1ea] = 0;
      pbVar26 = pbVar39 + 0x120;
      in_XMM0_Qa = *(undefined8 *)unaff_R15;
      in_XMM0_Qb = *(undefined8 *)(unaff_R15 + 8);
      uVar47 = *(undefined4 *)(unaff_R15 + 0x10);
      uVar48 = *(undefined4 *)(unaff_R15 + 0x14);
      in_XMM1_Dc = *(undefined4 *)(unaff_R15 + 0x18);
      in_XMM1_Dd = *(undefined4 *)(unaff_R15 + 0x1c);
code_r0x000140903f34:
      uVar49 = *(undefined4 *)(unaff_R15 + 0x24);
      uVar50 = *(undefined4 *)(unaff_R15 + 0x28);
      uVar11 = *(undefined4 *)(unaff_R15 + 0x2c);
      *(undefined4 *)(pbVar39 + 0x140) = *(undefined4 *)(unaff_R15 + 0x20);
      *(undefined4 *)(pbVar39 + 0x144) = uVar49;
      *(undefined4 *)(pbVar39 + 0x148) = uVar50;
      *(undefined4 *)(pbVar39 + 0x14c) = uVar11;
      *(undefined8 *)(pbVar39 + 0x120) = in_XMM0_Qa;
      *(undefined8 *)(pbVar39 + 0x128) = in_XMM0_Qb;
      *(undefined4 *)(pbVar39 + 0x130) = uVar47;
      *(undefined4 *)(pbVar39 + 0x134) = uVar48;
      *(undefined4 *)(pbVar39 + 0x138) = in_XMM1_Dc;
      *(undefined4 *)(pbVar39 + 0x13c) = in_XMM1_Dd;
      *(undefined8 *)(pbVar39 + 0x150) = *(undefined8 *)(pbVar39 + 0x100);
      *(undefined8 *)(pbVar39 + 0x158) = *(undefined8 *)(pbVar39 + 0x108);
      *(undefined4 *)(pbVar39 + 0x160) = *(undefined4 *)(pbVar39 + 0x110);
      *(undefined4 *)(pbVar39 + 0x164) = *(undefined4 *)(pbVar39 + 0x114);
      *(undefined4 *)(pbVar39 + 0x168) = *(undefined4 *)(pbVar39 + 0x118);
      *(undefined4 *)(pbVar39 + 0x16c) = *(undefined4 *)(pbVar39 + 0x11c);
      *(byte **)(pbVar39 + 0x170) = pbVar26;
      param_1 = *(byte **)(pbVar39 + 0x148);
      unaff_RBP[0x104] = pbVar29;
      unaff_RBP[0x10f] = unaff_R15;
      unaff_RBP[0x105] = unaff_R12;
      if (param_1 == (byte *)0x0) {
        pbVar23 = (byte *)0x8;
      }
      else {
code_r0x000140903f96:
        unaff_RBX = (byte *)((longlong)param_1 << 4);
        *(undefined8 *)(puVar37 + -8) = 0x140903fa2;
        pdb_14007ee60();
        unaff_R14 = pbVar29;
code_r0x000140903fa2:
        pbVar32 = (byte *)0x8;
        pbVar29 = unaff_R14;
code_r0x000140903fa7:
        *(undefined8 *)(puVar37 + -8) = 0x140903faf;
        pbVar23 = pub_1406abab0((ulonglong)unaff_RBX,(ulonglong)pbVar32);
        if (pbVar23 == (byte *)0x0) {
          *(undefined8 *)(puVar37 + -8) = 0x140904786;
          pdb_142dc7e2a(8,unaff_RBX);
          goto code_r0x000140904799;
        }
        pbVar26 = *(byte **)(pbVar39 + 0x170);
      }
      unaff_RBP[0x110] = pbVar39 + 0x178;
      *(byte **)(pbVar39 + 0x178) = param_1;
      *(byte **)(pbVar39 + 0x180) = pbVar23;
      pbVar39[0x188] = 0;
      pbVar39[0x189] = 0;
      pbVar39[0x18a] = 0;
      pbVar39[0x18b] = 0;
      pbVar39[0x18c] = 0;
      pbVar39[0x18d] = 0;
      pbVar39[0x18e] = 0;
      pbVar39[399] = 0;
      pbVar39[0x1ea] = 1;
      plVar38 = *(longlong **)(pbVar26 + 0x20);
      plVar43 = plVar38 + *(longlong *)(pbVar26 + 0x28) * 10;
      lVar41 = 0;
      for (; plVar38 != plVar43; plVar38 = plVar38 + 10) {
        *(undefined8 *)(puVar37 + -8) = 0x1409042a5;
        pdb_140f60be0(unaff_RBP + 0x10b,plVar38 + 7);
        if (SBORROW8(0,*plVar38)) {
          uVar21 = plVar38[2];
          lVar41 = plVar38[3];
          uVar28 = 0x8000000000000000;
        }
        else {
          uVar28 = plVar38[2];
          if ((longlong)uVar28 < 0) {
            uVar42 = 0;
code_r0x0001409043d5:
            *(undefined8 *)(puVar37 + -8) = 0x1409043e0;
            pdb_142dc7e2a(uVar42,uVar28);
            goto code_r0x000140904799;
          }
          if (uVar28 == 0) {
            pbVar29 = (byte *)0x1;
            uVar21 = 0;
          }
          else {
            lVar41 = plVar38[1];
            *(undefined8 *)(puVar37 + -8) = 0x1409042eb;
            pdb_14007ee60();
            uVar42 = 1;
            *(undefined8 *)(puVar37 + -8) = 0x1409042fe;
            pbVar29 = pub_1406abab0(uVar28,1);
            if (pbVar29 == (byte *)0x0) goto code_r0x0001409043d5;
            *(undefined8 *)(puVar37 + -8) = 0x140904318;
            pub_142e32760(pbVar29,lVar41,uVar28);
            uVar21 = uVar28;
          }
          lVar41 = CONCAT71((int7)((ulonglong)unaff_RBP[0x10e] >> 8),(char)plVar38[3]);
          unaff_RBP[0x10e] = lVar41;
        }
        unaff_RBP[0x9c] = plVar38[6];
        lVar44 = plVar38[5];
        unaff_RBP[0x9a] = plVar38[4];
        unaff_RBP[0x9b] = lVar44;
        unaff_RBP[0x9f] = unaff_RBP[0x10d];
        unaff_RBP[0x9d] = unaff_RBP[0x10b];
        unaff_RBP[0x9e] = unaff_RBP[0x10c];
        unaff_RBP[0x96] = uVar28;
        unaff_RBP[0x97] = pbVar29;
        unaff_RBP[0x99] = lVar41;
        unaff_RBP[0x98] = uVar21;
        puVar30 = unaff_RBP + 0x96;
        *(undefined8 *)(puVar37 + -8) = 0x140904390;
        pbVar29 = (byte *)pdb_141710980(pbVar39 + 0x150);
        unaff_RBP[0x96] = pbVar29;
        unaff_RBP[0x97] = puVar30;
        lVar41 = *(longlong *)(unaff_RBP[0x111] + 0x188);
        if (lVar41 == *(longlong *)(unaff_RBP[0x111] + 0x178)) {
          uVar42 = unaff_RBP[0x110];
          *(undefined8 *)(puVar37 + -8) = 0x1409043cc;
          pdb_142d7e980(uVar42);
        }
        lVar44 = unaff_RBP[0x111];
        lVar5 = *(longlong *)(lVar44 + 0x180);
        *(byte **)(lVar5 + lVar41 * 0x10) = pbVar29;
        *(undefined8 **)(lVar5 + 8 + lVar41 * 0x10) = puVar30;
        lVar41 = lVar41 + 1;
        *(longlong *)(lVar44 + 0x188) = lVar41;
      }
      if (lVar41 == 0) {
        pbVar23 = (byte *)0x8;
        param_1 = (byte *)0x0;
        pbVar39 = (byte *)unaff_RBP[0x111];
      }
      else {
        *(undefined8 *)(puVar37 + -8) = 0x140904645;
        pdb_14007ee60();
        *(undefined8 *)(puVar37 + -8) = 0x140904652;
        pbVar23 = pub_1406abab0(lVar41 * 8,8);
        pbVar39 = (byte *)unaff_RBP[0x111];
        if (pbVar23 == (byte *)0x0) {
          *(undefined8 *)(puVar37 + -8) = 0x140904796;
          pdb_142dc7e2a(8,lVar41 * 8);
code_r0x000140904799:
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
          (*UNRECOVERED_JUMPTABLE)();
        }
        param_1 = *(byte **)(pbVar39 + 0x188);
      }
      *(longlong *)(pbVar39 + 400) = lVar41;
      *(byte **)(pbVar39 + 0x198) = pbVar23;
      puVar34 = puVar37;
      goto code_r0x000140904687;
    case 0x12:
      goto code_r0x000140904799;
    case 0x13:
      break;
    case 0x14:
      *pbVar22 = *pbVar22 + (char)pbVar22;
      pbVar29 = unaff_R14;
      goto code_r0x000140903f34;
    case 0x15:
      goto code_r0x0001409053c6;
    case 0x16:
      puVar37 = puVar36 + -8;
      puVar34 = puVar36 + -8;
      *(ulonglong *)(puVar36 + -8) =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar46 * 0x800 |
           (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
           (ulonglong)bVar45 * 0x80 | (ulonglong)(pbVar22 == (byte *)0x0) * 0x40 |
           (ulonglong)(in_AF & 1) * 0x10 |
           (ulonglong)((POPCOUNT((ulonglong)pbVar22 & 0xff) & 1U) == 0) * 4 |
           (ulonglong)(0xfffffffebcfe16cf < uVar28) | (ulonglong)(in_ID & 1) * 0x200000 |
           (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
           (ulonglong)(in_AC & 1) * 0x40000;
      puVar31 = (undefined *)((ulonglong)unaff_RBX & 0xffffffff);
      if (bVar46) goto code_r0x000140905474;
      goto code_r0x000140905476;
    case 0x17:
      goto code_r0x000140905414;
    case 0x18:
      if (!bVar46) goto code_r0x000140905448;
      goto code_r0x000140905444;
    default:
      *(int *)(unaff_RBX + -0x72) = *(int *)(unaff_RBX + -0x72) + -1;
      *(uint *)(&UNK_14301e8be + uVar28) =
           *(uint *)(&UNK_14301e8be + uVar28) << 1 | (uint)(0xfffffffebcfe16cf < uVar28);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar36 + -8) = 0x1409046ff;
    pdb_142dc8570(&UNK_14301e728);
  case 0x15:
    goto code_r0x0001409039b1;
  case 0x16:
    *pbVar29 = 0;
    pbVar32 = unaff_RSI;
    goto code_r0x000140903999;
  case 0x17:
    puVar36 = auStack_28;
    param_1 = unaff_RSI;
    pbVar26 = pbVar39;
    goto code_r0x0001409035af;
  case 0x18:
    return (byte *)0x0;
  case 0x19:
    pbVar39[0x1e9] = 1;
    pbVar39[0x1ea] = 0;
    pbVar39[0x1eb] = 0x49;
    pbVar39[0x1ec] = 0x8b;
    puVar35 = auStack_28;
    if ((longlong)pbVar29 < 0) goto code_r0x0001409046a2;
    break;
  case 0x1a:
    goto code_r0x000140904687;
  case 0x1b:
    cVar2 = uRam0000000000000002._2_1_ + '\x04';
    _uRam0000000000000000 = CONCAT14(cVar2,_uRam0000000000000000);
    pbVar29 = (byte *)(unaff_RBP + 0x46);
    puVar36 = auStack_28;
    param_1 = unaff_RSI;
    goto code_r0x000140903d8d;
  case 0x1c:
    *pbVar29 = *pbVar29;
    puVar36 = auStack_28;
    param_1 = unaff_RSI;
code_r0x000140903d8d:
    *(undefined8 *)(puVar36 + -8) = 0x140903d99;
    pdb_140d9d540(pbVar26,pbVar29,unaff_RBP + 0x7c);
    unaff_RBX = (byte *)(unaff_RBP + -10);
    *(undefined8 *)(puVar36 + -8) = 0x140903db3;
    pub_142e32760(unaff_RBX,unaff_RBP + 0x96,0x280);
    pbVar40 = (byte *)0x280;
    pbVar39 = (byte *)unaff_RBP[0x111];
    *(undefined8 *)(puVar36 + -8) = 0x140903dcb;
    pbVar32 = unaff_RBX;
    in_XMM0_Qa = pub_142e32760(pbVar39);
    pbVar22 = (byte *)(ulonglong)pbVar39[0xc0];
    in_XMM0_Qb = extraout_XMM0_Qb_00;
    goto code_r0x000140903dd2;
  case 0x1d:
code_r0x0001409046a2:
    param_1[-0x75] = param_1[-0x75] + bVar24;
    cRam0000000048000001 = cRam0000000048000001 + -0x3f;
    param_1 = param_1 + -1;
    puVar36 = auStack_28;
    if (param_1 != (byte *)0x0 && cRam0000000048000001 == '\0') {
      uRam00000000000001a8 = 0;
      puVar36 = auStack_28;
    }
    goto code_r0x0001409046ae;
  case 0x1e:
    puVar34 = auStack_28;
    goto code_r0x000140904687;
  case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
    goto code_r0x000140903e8d;
  case 0x21:
    goto code_r0x000140903ff8;
  case 0x22:
    *param_1 = *param_1;
    unaff_RBX[(longlong)param_1 * 4 + -0x4b] = unaff_RBX[(longlong)param_1 * 4 + -0x4b] + bVar24;
    puVar36 = auStack_28;
    pbVar29 = unaff_R14;
code_r0x0001409046d0:
    *pbVar22 = *pbVar22 & (byte)pbVar26;
    *pbVar22 = *pbVar22 + (char)pbVar22;
    goto code_r0x0001409046d4;
  case 0x23:
    pbVar29 = (byte *)(ulonglong)uRam0000000000000178;
    puVar35 = auStack_28;
    break;
  case 0x24:
    goto code_r0x0001409040b7;
  case 0x25:
    goto code_r0x000140903e87;
  case 0x26:
    pbVar26 = (byte *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x20,bVar24));
    puVar36 = auStack_28;
    pbVar29 = unaff_R14;
code_r0x0001409046d3:
    pbVar23 = unaff_RBX + (longlong)pbVar26 * 4 + -0x43;
    *pbVar23 = *pbVar23 + (char)pbVar26;
    bVar45 = (char)*pbVar23 < '\0';
    unaff_R14 = pbVar29;
    goto code_r0x0001409046d7;
  case 0x27:
    break;
  case 0x28:
    uVar47 = *(undefined4 *)(unaff_RDI + 0x10);
    uVar48 = *(undefined4 *)(unaff_RDI + 0x14);
    in_XMM1_Dc = *(undefined4 *)(unaff_RDI + 0x18);
    in_XMM1_Dd = *(undefined4 *)(unaff_RDI + 0x1c);
    puVar37 = auStack_28;
    pbVar39 = unaff_RDI;
    pbVar29 = unaff_R14;
    goto code_r0x000140903f34;
  case 0x29:
    pdb_1417ca2e0();
    uStack_8 = (ulonglong)unaff_RDI[0x17];
    puVar37 = auStack_28;
    param_1 = unaff_RSI;
    pbVar39 = unaff_RDI;
    goto code_r0x0001409053c6;
  case 0x2a:
    pbVar26 = (byte *)(ulonglong)param_1[0x22];
    pbVar39 = pbVar26 + -1;
    pbVar23 = (byte *)0x0;
    goto code_r0x000140905432;
  case 0x2b:
    puVar37 = auStack_28;
    param_1 = unaff_RSI;
    pbVar39 = unaff_RDI;
code_r0x0001409053c6:
    *(undefined8 *)(puVar37 + -8) = 0x1409053d4;
    pdb_1417ca2e0(param_1);
    *(ulonglong *)(puVar37 + 0x20) = (ulonglong)pbVar39[0x15];
    *(undefined8 *)(puVar37 + -8) = 0x1409053f0;
    pdb_1417ca2e0(param_1,puVar37 + 0x20,8);
    *(ulonglong *)(puVar37 + 0x20) = (ulonglong)pbVar39[0x16];
    pbVar29 = puVar37 + 0x20;
    pbVar39 = (byte *)0x8;
    puVar36 = puVar37;
code_r0x000140905404:
    *(undefined8 *)(puVar36 + -8) = 0x14090540c;
    pbVar22 = (byte *)pdb_1417ca2e0(param_1,pbVar29,pbVar39);
code_r0x000140905414:
    return pbVar22;
  case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2d:
  case 0x2e:
  case 0x2f:
    puVar1 = (uint *)(unaff_R14 + -0x71eea703);
    uVar3 = *puVar1;
    uVar10 = *puVar1 + (uint)pbVar23;
    *puVar1 = uVar10 + (0xfffffffebcfe171f < uVar28);
    puVar1 = (uint *)(unaff_RSI + -0x71eec903);
    uVar9 = (uint)(CARRY4(uVar3,(uint)pbVar23) || CARRY4(uVar10,(uint)(0xfffffffebcfe171f < uVar28))
                  );
    uVar3 = *puVar1;
    uVar25 = (uint)param_1;
    uVar10 = *puVar1;
    *puVar1 = uVar10 + uVar25 + uVar9;
    puVar1 = (uint *)(unaff_RSI + -0x71eec903);
    uVar9 = (uint)(CARRY4(uVar3,uVar25) || CARRY4(uVar10 + uVar25,uVar9));
    uVar3 = *puVar1;
    uVar10 = *puVar1;
    *puVar1 = uVar10 + uVar25 + uVar9;
    *(uint *)(unaff_RSI + -0x71eec903) =
         *(int *)(unaff_RSI + -0x71eec903) + uVar25 +
         (uint)(CARRY4(uVar3,uVar25) || CARRY4(uVar10 + uVar25,uVar9));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001409046a3:
  pbVar22 = *(byte **)(pbVar39 + 0x180);
  param_1 = (byte *)((longlong)param_1 << 4);
  puVar36 = puVar35;
code_r0x0001409046ae:
  pbVar26 = param_1 + (longlong)pbVar22;
  *(byte **)(pbVar39 + 0x1a8) = pbVar22;
  *(byte **)(pbVar39 + 0x1b0) = pbVar22;
  *(byte **)(pbVar39 + 0x1b8) = pbVar29;
  *(byte **)(pbVar39 + 0x1c0) = pbVar26;
code_r0x0001409046cd:
  pbVar29 = (byte *)unaff_RBP[0x104];
code_r0x0001409046d4:
  unaff_R15 = (byte *)unaff_RBP[0x10f];
  unaff_R12 = unaff_RBP[0x105];
  puVar37 = puVar36;
code_r0x0001409046e2:
  while (pbVar22 != pbVar26) {
    *(byte **)(pbVar39 + 0x1b0) = pbVar22 + 0x10;
    uVar42 = *(undefined8 *)pbVar22;
    lVar41 = *(longlong *)(pbVar22 + 8);
    *(undefined8 *)(pbVar39 + 0x1c8) = uVar42;
    *(longlong *)(pbVar39 + 0x1d0) = lVar41;
    *(undefined8 *)(pbVar39 + 0x1d8) = uVar42;
    *(longlong *)(pbVar39 + 0x1e0) = lVar41;
code_r0x00014090489f:
    unaff_RBP[0x10f] = unaff_R15;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar41 + 0x18);
    *(undefined8 *)(puVar37 + -8) = 0x1409048b3;
    (*UNRECOVERED_JUMPTABLE)(unaff_RBP + 0x96,uVar42,unaff_R12);
    if (*(int *)(unaff_RBP + 0x96) == 1) {
      lVar41 = unaff_RBP[0x111];
      *(undefined1 *)(lVar41 + 0x1e8) = 3;
      goto code_r0x000140904a95;
    }
    lVar41 = unaff_RBP[0x97];
    uVar42 = unaff_RBP[0x98];
    unaff_RBP[0xf6] = unaff_RBP[0x99];
    unaff_RBP[0xf7] = unaff_RBP[0x9a];
    unaff_RBP[0x110] = *(undefined8 *)(unaff_RBP[0x111] + 0x1d8);
    puVar30 = *(undefined8 **)(unaff_RBP[0x111] + 0x1e0);
    unaff_RBP[0x10e] = puVar30;
    UNRECOVERED_JUMPTABLE = (code *)*puVar30;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      uVar8 = unaff_RBP[0x110];
      *(undefined8 *)(puVar37 + -8) = 0x140904911;
      (*UNRECOVERED_JUMPTABLE)(uVar8);
    }
    pbVar23 = (byte *)unaff_RBP[0x110];
    puVar31 = *(undefined **)(unaff_RBP[0x10e] + 8);
    if (puVar31 != (undefined *)0x0) {
      uVar28 = *(ulonglong *)(unaff_RBP[0x10e] + 0x10);
      *(undefined8 *)(puVar37 + -8) = 0x140904932;
      pub_1406abac0(pbVar23,(ulonglong)puVar31,uVar28);
    }
    pbVar39 = (byte *)unaff_RBP[0x111];
    if (lVar41 != 0) {
      unaff_RBP[0x98] = unaff_RBP[0xf6];
      unaff_RBP[0x99] = unaff_RBP[0xf7];
      unaff_RBP[0x96] = lVar41;
      unaff_RBP[0x97] = uVar42;
      *(undefined8 *)(puVar37 + -8) = 0x140904aeb;
      unaff_R12 = pdb_142deada0(unaff_RBP + 0x96);
      lVar41 = unaff_RBP[0x111];
      *(undefined8 *)(puVar37 + -8) = 0x140904b02;
      pdb_1404ada40(lVar41 + 0x1a8);
      lVar41 = unaff_RBP[0x111];
      *(undefined8 *)(puVar37 + -8) = 0x140904b16;
      pdb_140969180(lVar41 + 400);
      lVar41 = unaff_RBP[0x111];
      *(undefined2 *)(lVar41 + 0x1e9) = 0;
      *(undefined8 *)(puVar37 + -8) = 0x140904b33;
      pdb_14098a860(lVar41 + 0x150);
      lVar41 = unaff_RBP[0x111];
      *(undefined8 *)(puVar37 + -8) = 0x140904b47;
      pdb_14098ce10(lVar41 + 0x120);
      unaff_RBP[0x108] = unaff_RBP[0x80];
      unaff_RBP[0x109] = unaff_RBP[0x81];
      unaff_RBP[0x106] = unaff_RBP[0x7e];
      unaff_RBP[0x107] = unaff_RBP[0x7f];
      *(undefined1 *)(unaff_RBP[0x111] + 0x1e8) = 1;
      lVar44 = -0x8000000000000000;
      goto code_r0x000140904b7c;
    }
    unaff_RBP[0x110] = uVar42;
    unaff_RBP[0x96] = uVar42;
    lVar41 = *(longlong *)(pbVar39 + 0x1a0);
    if (lVar41 == *(longlong *)(pbVar39 + 400)) {
      *(undefined8 *)(puVar37 + -8) = 0x14090496c;
      pdb_142d7e8a0(pbVar39 + 400);
    }
    *(undefined8 *)(*(longlong *)(pbVar39 + 0x198) + lVar41 * 8) = unaff_RBP[0x110];
    *(longlong *)(pbVar39 + 0x1a0) = lVar41 + 1;
    pbVar26 = *(byte **)(pbVar39 + 0x1c0);
    unaff_R15 = (byte *)unaff_RBP[0x10f];
    pbVar22 = *(byte **)(pbVar39 + 0x1b0);
  }
  unaff_RBP[0x10f] = unaff_R15;
  pbVar39[0x1c8] = 0;
  pbVar39[0x1c9] = 0;
  pbVar39[0x1ca] = 0;
  pbVar39[0x1cb] = 0;
  pbVar39[0x1cc] = 0;
  pbVar39[0x1cd] = 0;
  pbVar39[0x1ce] = 0;
  pbVar39[0x1cf] = 0;
  *(undefined8 *)(puVar37 + -8) = 0x1409049c4;
  pdb_1404ada40(pbVar39 + 0x1a8);
  lVar41 = unaff_RBP[0x111];
  puVar31 = *(undefined **)(lVar41 + 0x170);
  *(undefined1 *)(lVar41 + 0x1e9) = 0;
  unaff_RBP[0x98] = *(undefined8 *)(lVar41 + 0x1a0);
  uVar42 = *(undefined8 *)(lVar41 + 0x198);
  unaff_RBP[0x96] = *(undefined8 *)(lVar41 + 400);
  unaff_RBP[0x97] = uVar42;
  *(undefined8 *)(puVar37 + -8) = 0x140904a09;
  pdb_1417db610(unaff_RBP + 0x7c,puVar31,unaff_RBP + 0x96);
  lVar41 = unaff_RBP[0x111];
  *(undefined2 *)(lVar41 + 0x1e9) = 0;
  *(undefined8 *)(puVar37 + -8) = 0x140904a26;
  pdb_14098a860(lVar41 + 0x150);
  lVar41 = unaff_RBP[0x111];
  *(undefined8 *)(puVar37 + -8) = 0x140904a3a;
  pdb_14098ce10(lVar41 + 0x120);
  lVar44 = unaff_RBP[0x7c];
  unaff_R12 = unaff_RBP[0x7d];
  unaff_RBP[0x106] = unaff_RBP[0x7e];
  unaff_RBP[0x107] = unaff_RBP[0x7f];
  unaff_RBP[0x108] = unaff_RBP[0x80];
  unaff_RBP[0x109] = unaff_RBP[0x81];
  lVar41 = unaff_RBP[0x111];
  *(undefined1 *)(lVar41 + 0x1e8) = 1;
  if (lVar44 == -0x7fffffffffffffff) {
code_r0x000140904a95:
    uVar19 = 4;
code_r0x000140904a97:
    *(undefined1 *)(lVar41 + 0xc0) = uVar19;
    pbVar29[0] = 2;
    pbVar29[1] = 0;
    pbVar29[2] = 0;
    pbVar29[3] = 0;
    pbVar29[4] = 0;
    pbVar29[5] = 0;
    pbVar29[6] = 0;
    pbVar29[7] = 0;
    uVar19 = 3;
  }
  else {
code_r0x000140904b7c:
    *(undefined4 *)(unaff_RBP + 0x102) = *(undefined4 *)(unaff_RBP + 0x108);
    *(undefined4 *)((longlong)unaff_RBP + 0x814) = *(undefined4 *)((longlong)unaff_RBP + 0x844);
    *(undefined4 *)(unaff_RBP + 0x103) = *(undefined4 *)(unaff_RBP + 0x109);
    *(undefined4 *)((longlong)unaff_RBP + 0x81c) = *(undefined4 *)((longlong)unaff_RBP + 0x84c);
    unaff_RBP[0x100] = unaff_RBP[0x106];
    unaff_RBP[0x101] = unaff_RBP[0x107];
    uVar42 = unaff_RBP[0x10f];
    *(undefined8 *)(puVar37 + -8) = 0x140904ba4;
    pdb_140901e70(uVar42);
code_r0x00014090479b:
    *(undefined4 *)(unaff_RBP + 0xfe) = *(undefined4 *)(unaff_RBP + 0x102);
    *(undefined4 *)((longlong)unaff_RBP + 0x7f4) = *(undefined4 *)((longlong)unaff_RBP + 0x814);
    *(undefined4 *)(unaff_RBP + 0xff) = *(undefined4 *)(unaff_RBP + 0x103);
    *(undefined4 *)((longlong)unaff_RBP + 0x7fc) = *(undefined4 *)((longlong)unaff_RBP + 0x81c);
    unaff_RBP[0xfc] = unaff_RBP[0x100];
    unaff_RBP[0xfd] = unaff_RBP[0x101];
    lVar41 = unaff_RBP[0x111];
    *(undefined1 *)(lVar41 + 0xc0) = 1;
    if (SBORROW8(0,lVar44)) {
      *(undefined8 *)(puVar37 + -8) = 0x1409047d5;
      pbVar23 = (byte *)pdb_142dc6590(unaff_R12);
      uVar42 = 1;
      lVar41 = unaff_RBP[0x111];
    }
    else {
      *(undefined8 *)(puVar37 + -8) = 0x1409047e9;
      pdb_14007ee60();
      *(undefined8 *)(puVar37 + -8) = 0x1409047f8;
      pbVar23 = pub_1406abab0(0x40,8);
      if (pbVar23 == (byte *)0x0) {
        unaff_RBP[0x110] = lVar44;
        unaff_RBP[0x10f] = unaff_R12;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar37 + -8) = 0x140904862;
        pdb_142dc7e11(8,0x40);
      }
      pbVar23[0] = 1;
      pbVar23[1] = 0;
      pbVar23[2] = 0;
      pbVar23[3] = 0;
      pbVar23[4] = 0;
      pbVar23[5] = 0;
      pbVar23[6] = 0;
      pbVar23[7] = 0;
      pbVar23[8] = 1;
      pbVar23[9] = 0;
      pbVar23[10] = 0;
      pbVar23[0xb] = 0;
      pbVar23[0xc] = 0;
      pbVar23[0xd] = 0;
      pbVar23[0xe] = 0;
      pbVar23[0xf] = 0;
      *(longlong *)(pbVar23 + 0x10) = lVar44;
      *(longlong *)(pbVar23 + 0x18) = unaff_R12;
      uVar42 = unaff_RBP[0xfd];
      uVar8 = unaff_RBP[0xfe];
      uVar7 = unaff_RBP[0xff];
      *(undefined8 *)(pbVar23 + 0x20) = unaff_RBP[0xfc];
      *(undefined8 *)(pbVar23 + 0x28) = uVar42;
      *(undefined8 *)(pbVar23 + 0x30) = uVar8;
      *(undefined8 *)(pbVar23 + 0x38) = uVar7;
      puVar31 = &UNK_14301e740;
      uVar42 = 0;
    }
    *(undefined8 *)pbVar29 = uVar42;
    *(byte **)(pbVar29 + 8) = pbVar23;
    *(undefined **)(pbVar29 + 0x10) = puVar31;
    uVar19 = 1;
  }
  *(undefined1 *)(lVar41 + 0x2f0) = uVar19;
  return pbVar29;
code_r0x000140904687:
  pbVar39[0x1a0] = 0;
  pbVar39[0x1a1] = 0;
  pbVar39[0x1a2] = 0;
  pbVar39[0x1a3] = 0;
  pbVar39[0x1a4] = 0;
  pbVar39[0x1a5] = 0;
  pbVar39[0x1a6] = 0;
  pbVar39[0x1a7] = 0;
  pbVar39[0x1e9] = 1;
  pbVar39[0x1ea] = 0;
  pbVar29 = *(byte **)(pbVar39 + 0x178);
  puVar35 = puVar34;
  goto code_r0x0001409046a3;
}

