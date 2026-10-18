// VA 0x1408fdd40, PDB extent 3992 bytes
// asset_pipe::texture::impl$0::load::async_fn$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001409053dc) overlaps instruction at (ram,0x0001409053d8)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset_pipe::texture::impl$0::load::async_fn$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 3992 */

byte *******
pdb_1408fdd40(byte *******param_1,byte *******param_2,byte *******param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte ******ppppppbVar5;
  byte *****arg2;
  byte *****pppppbVar6;
  uint uVar7;
  uint uVar8;
  char unaff_00084f00;
  undefined1 *unaff_0008ae00;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  undefined1 uVar18;
  uint uVar19;
  ulonglong uVar20;
  byte *******pppppppbVar21;
  byte *pbVar22;
  undefined7 uVar28;
  byte *******extraout_RAX;
  longlong lVar23;
  char *pcVar24;
  byte ******ppppppbVar25;
  byte ******ppppppbVar26;
  byte bVar29;
  byte bVar30;
  byte ******ppppppbVar32;
  byte *pbVar33;
  byte *******pppppppbVar34;
  byte *******arg1;
  undefined *puVar35;
  byte *****pppppbVar36;
  byte *******arg1_00;
  byte ******ppppppbVar37;
  byte *******unaff_RBX;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined8 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  undefined1 *puVar49;
  byte *******pppppppbVar50;
  byte *******unaff_RDI;
  byte *******pppppppbVar51;
  byte *******pppppppbVar52;
  byte *******in_R9;
  undefined4 in_R10D;
  undefined4 in_R11D;
  byte *******unaff_R12;
  undefined8 uVar53;
  byte *unaff_R13;
  byte *******unaff_R14;
  byte *******unaff_R15;
  undefined8 uVar54;
  byte ******ppppppbVar55;
  bool bVar56;
  byte in_AF;
  bool bVar57;
  bool bVar58;
  byte in_TF;
  byte in_IF;
  bool bVar59;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  unkbyte10 in_ST5;
  undefined4 uVar60;
  undefined8 in_XMM0_Qa;
  undefined4 uVar61;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 uVar62;
  undefined8 in_XMM1_Qa;
  undefined4 uVar63;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auStack_250 [16];
  undefined1 auStack_218 [32];
  byte *******pppppppbStack_1f8;
  byte ******ppppppbStack_1f0;
  byte *****pppppbStack_1e8;
  byte *pbStack_1e0;
  byte *****pppppbStack_1d8;
  byte bStack_1d0;
  byte *****pppppbStack_1c8;
  byte ******ppppppbStack_1c0;
  byte *******pppppppbStack_1b8;
  byte *******pppppppbStack_1b0;
  byte ******ppppppbStack_1a8;
  byte *****pppppbStack_1a0;
  byte *******pppppppbStack_198;
  byte *******pppppppbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  byte *******pppppppbStack_178;
  byte *pbStack_170;
  byte ******ppppppbStack_108;
  byte ******ppppppbStack_100;
  byte ******ppppppbStack_f8;
  byte ******ppppppbStack_f0;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  byte *pbStack_c0;
  byte *******pppppppbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  byte ******ppppppbStack_a0;
  byte ******ppppppbStack_98;
  byte ******ppppppbStack_90;
  byte ******ppppppbStack_88;
  byte *******pppppppbStack_70;
  byte *******pppppppbStack_68;
  byte *******pppppppbStack_60;
  byte *******pppppppbStack_58;
  byte *******pppppppbStack_50;
  undefined8 uStack_48;
  uint7 uVar27;
  uint uVar31;
  undefined8 *puVar48;
  
  uVar65 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar64 = (undefined4)param_4;
  uVar63 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar62 = (undefined4)in_XMM1_Qa;
  uVar61 = (undefined4)((ulonglong)in_XMM0_Qa >> 0x20);
  uVar60 = (undefined4)in_XMM0_Qa;
  puVar43 = auStack_218;
  puVar44 = auStack_218;
  puVar46 = auStack_218;
  puVar45 = auStack_218;
  puVar40 = auStack_218;
  puVar38 = auStack_218;
  puVar39 = auStack_218;
  pppppppbVar50 = (byte *******)&pppppppbStack_198;
  uStack_48 = 0xfffffffffffffffe;
  arg1 = (byte *******)&UNK_14301e89c;
  uVar20 = (ulonglong)*(int *)(&UNK_14301e89c + (ulonglong)*(byte *)(param_1 + 0xb) * 4);
  bVar56 = 0xfffffffebcfe1763 < uVar20;
  bVar59 = SCARRY8(uVar20,0x14301e89c);
  pppppppbVar21 = (byte *******)(&UNK_14301e89c + uVar20);
  bVar58 = (longlong)pppppppbVar21 < 0;
  bVar57 = pppppppbVar21 == (byte *******)0x0;
  pppppppbStack_50 = param_1;
  bVar29 = (byte)param_1;
  uVar31 = (uint)param_1;
  bVar17 = (byte)pppppppbVar21;
  uVar19 = (uint)pppppppbVar21;
  uVar27 = (uint7)((ulonglong)pppppppbVar21 >> 8);
  puVar42 = auStack_218;
  pppppppbVar52 = unaff_RDI;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 0xb)) {
  case 0:
    unaff_RBX = (byte *******)*param_1;
    ppppppbVar25 = param_1[1];
    pppppppbStack_1f8 = (byte *******)param_1[2];
    ppppppbStack_1f0 = param_1[3];
    if (SBORROW8(0,(longlong)*unaff_RBX)) {
      uVar53 = pdb_1417107c0(ppppppbVar25,unaff_RBX[2],unaff_RBX[3]);
      pppppppbVar21 = (byte *******)pdb_141706550(uVar53);
    }
    else {
      param_1[0xd] = ppppppbVar25;
      pdb_140d9d1b0(&uStack_a8,unaff_RBX[1],unaff_RBX[2]);
      if ((char)uStack_a8 == '\0') {
        *(byte *)((longlong)pppppppbStack_50 + 0x21) = uStack_a8._1_1_;
        *(byte *)(pppppppbStack_50 + 4) = 0;
        *(byte *)(pppppppbStack_50 + 0xc) = uStack_a8._1_1_;
        unaff_R14 = pppppppbStack_50 + 0xe;
        pppppppbStack_50[0xe] = ppppppbVar25;
        goto code_r0x0001408fdff3;
      }
      pppppppbStack_50[5] = ppppppbStack_a0;
      *(byte *)(pppppppbStack_50 + 4) = 1;
      pppppppbVar21 = (byte *******)0x1;
    }
    goto code_r0x0001408fe1b1;
  case 1:
    param_1 = (byte *******)&UNK_14301e0b8;
    goto code_r0x0001408fe5ac;
  case 2:
    param_1 = (byte *******)&UNK_14301e0b8;
code_r0x0001408fe5a0:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(param_1);
  case 3:
    pppppppbVar21 = (byte *******)(ulonglong)*(byte *)(param_1 + 0x18);
  case 8:
                    /* WARNING: Could not recover jumptable at 0x0001408fdde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppbVar21 =
         (byte *******)
         (*(code *)(&UNK_14301e8b0 + *(int *)(&UNK_14301e8b0 + (longlong)pppppppbVar21 * 4)))();
    return pppppppbVar21;
  case 4:
    ppppppbVar55 = param_1[0xc];
    ppppppbVar25 = param_1[0xd];
    goto code_r0x0001408fde75;
  case 5:
    if (bVar58) {
code_r0x0001408fdff3:
      pppppppbStack_50[0xf] = (byte ******)unaff_RBX;
      unaff_RBX = pppppppbStack_50 + 0x18;
      *(byte *)(pppppppbStack_50 + 0x18) = 0;
      pppppppbVar21 = (byte *******)pppppppbStack_50[0xe];
      arg1 = (byte *******)pppppppbStack_50[0xf];
      unaff_R12 = pppppppbStack_50 + 0x10;
code_r0x0001408fe014:
      pppppppbStack_50[0x10] = (byte ******)pppppppbVar21;
      pppppppbStack_50[0x11] = (byte ******)arg1;
      unaff_R15 = pppppppbStack_50 + 0x17;
      *(byte *)(pppppppbStack_50 + 0x17) = 0;
      pppppppbStack_50[0x14] = pppppppbStack_50[0x10];
      goto code_r0x0001408fe03e;
    }
    puVar46 = (undefined1 *)((ulonglong)uVar27 * 0x100);
    *puVar46 = *puVar46;
    puVar46[-0x75] = puVar46[-0x75] + bVar29;
    param_1 = (byte *******)0xa0;
    puVar38 = auStack_218;
    break;
  case 6:
    if (!bVar57) {
code_r0x0001408fe632:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8590(param_1);
    }
    param_1 = (byte *******)&UNK_14301e198;
    goto code_r0x0001408fe5bc;
  case 7:
    if (bVar59) goto code_r0x0001408fe5a0;
    in_R9 = (byte *******)
            (ulonglong)
            (byte)((char)in_R9 +
                  *(char *)(CONCAT62((int6)((ulonglong)pppppppbVar21 >> 0x10),
                                     CONCAT11(bVar58 << 7 | bVar57 << 6 | in_AF << 4 |
                                              ((POPCOUNT((ulonglong)pppppppbVar21 & 0xff) & 1U) == 0
                                              ) << 2 | 2 | bVar56,bVar17)) + -0x73));
code_r0x0001408fe5ac:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570(param_1,&UNK_14301e89c,param_3,in_R9);
  case 9:
    puVar38 = auStack_218;
    if (!bVar58) {
      puVar39 = (undefined1 *)(ulonglong)(uVar31 + 0x80);
      goto code_r0x0001408fe014;
    }
    break;
  case 10:
    pcVar24 = (char *)((longlong)param_1 * 5 + 0x65);
    cVar2 = *pcVar24;
    *pcVar24 = *pcVar24 + bVar29;
    if (SCARRY1(cVar2,bVar29)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x0001408fe5e2;
  case 0xb:
    if (!bVar59) {
      pcVar24 = (char *)((longlong)param_1 * 5 + 0x75);
      *pcVar24 = *pcVar24 + bVar29;
      if (-1 < *pcVar24) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8570(0x4301e198);
      }
      param_1 = (byte *******)&UNK_14301e108;
      goto code_r0x0001408fe632;
    }
code_r0x0001408fe5bc:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(param_1);
  case 0xc:
    pppppppbVar21 = (byte *******)(ulonglong)*(byte *)(param_1 + 0x17);
    puVar35 = &UNK_14301e8c0;
    goto code_r0x0001408fde02;
  case 0xd:
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    (&UNK_14301e827)[uVar20] = (&UNK_14301e827)[uVar20] + bVar29;
    *(int *)(uVar20 + 0x18b01e89c) = *(int *)(uVar20 + 0x18b01e89c) + 0xa08189;
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    puVar39 = auStack_218;
code_r0x0001408fe03e:
    pppppppbStack_50[0x15] = pppppppbStack_50[0x11];
    unaff_R13 = (byte *)((longlong)pppppppbStack_50 + 0xb1);
    *(byte *)((longlong)pppppppbStack_50 + 0xb1) = 0;
    param_1 = pppppppbStack_50;
    puVar38 = puVar39;
    break;
  case 0xe:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570();
  case 0xf:
    if (bVar59) {
      halt_baddata();
    }
code_r0x0001408fe5e2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(&UNK_14301e0f0);
  case 0x10:
    puVar35 = (undefined *)0x4301e8c0;
code_r0x0001408fde02:
                    /* WARNING: Could not recover jumptable at 0x0001408fde09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppbVar21 =
         (byte *******)(*(code *)(puVar35 + *(int *)(puVar35 + (longlong)pppppppbVar21 * 4)))();
    return pppppppbVar21;
  case 0x11:
    pbVar22 = (byte *)((longlong)unaff_RBX + (longlong)param_1 * 4 + 10);
    *pbVar22 = *pbVar22 - bVar29;
    pppppppbVar21 = (byte *******)0x0;
    if (*(byte *)(in_R9 + 3) == 0) goto LAB_1408ffa16;
    param_3 = (byte *******)in_R9[7];
  case 0x12:
    if (param_3 != (byte *******)CONCAT44(_UNK_14301e8a8,_UNK_14301e8a4)) {
LAB_1408ffa16:
      *(int *)param_1 = (int)pppppppbVar21;
      return param_1;
    }
    pppppppbVar52 = (byte *******)in_R9[4];
    in_R10D = 0x4301e8e0;
    uVar20 = (ulonglong)*(int *)(&UNK_14301e8e0 + (ulonglong)*(byte *)(pppppppbVar52 + 0x13) * 4);
    bVar59 = SCARRY8(uVar20,0x14301e8e0);
    arg1 = (byte *******)(&UNK_14301e8e0 + uVar20);
    bVar56 = (longlong)arg1 < 0;
    bVar17 = (byte)pppppppbVar21;
    uVar28 = (undefined7)((ulonglong)pppppppbVar21 >> 8);
    puVar39 = auStack_218;
    puVar38 = auStack_218;
    puVar43 = auStack_218;
    puVar42 = auStack_218;
    uVar10 = 0x4301e8e0;
    pppppppbVar51 = pppppppbVar52;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(pppppppbVar52 + 0x13)) {
    case 0:
      lVar23 = 8;
      goto code_r0x0001408ffa2c;
    case 1:
      ppppppbVar25 = in_R9[8];
      if (pppppppbVar52[0x16] <= ppppppbVar25) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(ppppppbVar25,pppppppbVar52[0x16],&UNK_143077600);
      }
      pbVar22 = (byte *)((longlong)pppppppbVar52[0x15] + (longlong)ppppppbVar25 * 0xc);
      goto code_r0x0001408ffa5a;
    default:
      goto LAB_1408ffa16;
    case 6:
      lVar23 = 4;
code_r0x0001408ffa2c:
      pbVar22 = (byte *)((longlong)pppppppbVar52 + lVar23 + 0x98);
code_r0x0001408ffa5a:
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(pbVar22 + 8);
      *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)pbVar22;
      *(undefined4 *)param_1 = 1;
      return param_1;
    case 8:
    case 9:
    case 10:
      param_1 = (byte *******)*arg1;
      in_R9 = (byte *******)0x0;
      goto code_r0x000140901a11;
    case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc:
      arg1 = (byte *******)(ulonglong)(uint)((int)arg1 + (int)pppppppbVar21);
code_r0x000140901a11:
                    /* WARNING: Could not recover jumptable at 0x000140901a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppbVar21 =
           (byte *******)
           (*(code *)(&UNK_14301e900 + *(int *)(&UNK_14301e900 + (longlong)param_1 * 4)))
                     (param_1,arg1,&UNK_14301e900,in_R9);
      return pppppppbVar21;
    case 0xd:
      puVar1 = (uint *)((longlong)param_1 + -0x7f);
      *puVar1 = *puVar1 << 1 | *puVar1 >> 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe:
      goto code_r0x000140901b12;
    case 0xf:
code_r0x000140901a51:
      in_R10D = uVar10;
      if (!bVar59) {
        pppppppbVar52 = (byte *******)(ulonglong)*(uint *)(arg1 + 9);
        unaff_RBX = (byte *******)(ulonglong)*(byte *)((longlong)arg1 + 0x61);
        in_R9 = (byte *******)(ulonglong)(*(uint *)(arg1 + 9) & 0xffffff00);
        uVar60 = _UNK_14301e040;
      }
      pppppppbVar21[6] = arg1[7];
      uVar62 = *(undefined4 *)(arg1 + 3);
      uVar63 = *(undefined4 *)((longlong)arg1 + 0x1c);
      in_XMM1_Dc = *(undefined4 *)(arg1 + 4);
      in_XMM1_Dd = *(undefined4 *)((longlong)arg1 + 0x24);
      ppppppbVar25 = arg1[6];
      pppppppbVar21[4] = arg1[5];
      pppppppbVar21[5] = ppppppbVar25;
code_r0x000140901ad4:
      *(undefined4 *)(pppppppbVar21 + 2) = uVar62;
      *(undefined4 *)((longlong)pppppppbVar21 + 0x14) = uVar63;
      *(undefined4 *)(pppppppbVar21 + 3) = in_XMM1_Dc;
      *(undefined4 *)((longlong)pppppppbVar21 + 0x1c) = in_XMM1_Dd;
      ppppppbVar25 = arg1[1];
      bVar17 = *(byte *)((longlong)arg1 + 0x66);
      bVar29 = *(byte *)((longlong)arg1 + 0x67);
      *pppppppbVar21 = (byte ******)param_1;
      pppppppbVar21[1] = ppppppbVar25;
      *(byte *)(pppppppbVar21 + 0xb) = 0;
      *(byte *)((longlong)pppppppbVar21 + 0x59) = bVar17;
      pppppppbVar21[10] = arg1[8];
      *(byte *)((longlong)pppppppbVar21 + 0x5a) = bVar29;
      *(uint *)(pppppppbVar21 + 7) = (uint)pppppppbVar52 & 0xff | (uint)in_R9;
      *(byte *)((longlong)pppppppbVar21 + 0x3c) = (byte)unaff_RBX;
      param_1 = (byte *******)((ulonglong)param_2 >> 0x10 & 0xffff);
code_r0x000140901b12:
      *(byte *)((longlong)pppppppbVar21 + 0x3f) = (byte)param_1;
      *(short *)((longlong)pppppppbVar21 + 0x3d) = (short)param_2;
      *(undefined4 *)(pppppppbVar21 + 8) = in_R10D;
      *(undefined4 *)((longlong)pppppppbVar21 + 0x44) = in_R11D;
      *(int *)(pppppppbVar21 + 9) = (int)unaff_RDI;
      *(undefined4 *)((longlong)pppppppbVar21 + 0x4c) = uVar60;
      return pppppppbVar21;
    case 0x10:
      puVar46 = (undefined1 *)(ulonglong)((int)auStack_218 - 0x508);
      pppppppbVar50 = (byte *******)(puVar46 + 0x80);
      *(undefined8 *)(puVar46 + 0x500) = 0xfffffffffffffffe;
      bVar17 = (&UNK_14301eb00)[uVar20];
      pppppppbVar34 = (byte *******)&UNK_14301e920;
      iVar4 = *(int *)(&UNK_14301e920 + (ulonglong)bVar17 * 4);
      pppppppbVar21 = (byte *******)(&UNK_14301e920 + iVar4);
      *(byte ********)(puVar46 + 0x4f8) = arg1;
      bVar29 = (byte)pppppppbVar21;
      unaff_R14 = arg1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar17) {
      case 0:
        uVar53 = *(undefined8 *)(&UNK_14301eaf8 + uVar20);
        *(undefined8 *)(puVar46 + 0x3d0) = *(undefined8 *)(&UNK_14301eaf0 + uVar20);
        *(undefined8 *)(puVar46 + 0x3d8) = uVar53;
        uVar53 = *(undefined8 *)(&UNK_14301eab0 + uVar20);
        uVar54 = *(undefined8 *)(&UNK_14301eab8 + uVar20);
        uVar15 = *(undefined8 *)(&UNK_14301eac0 + uVar20);
        uVar16 = *(undefined8 *)(&UNK_14301eac8 + uVar20);
        uVar62 = *(undefined4 *)(&UNK_14301ead0 + uVar20);
        uVar63 = *(undefined4 *)(&UNK_14301ead4 + uVar20);
        uVar64 = *(undefined4 *)(&UNK_14301ead8 + uVar20);
        uVar65 = *(undefined4 *)(&UNK_14301eadc + uVar20);
        uVar60 = *(undefined4 *)(&UNK_14301eae4 + uVar20);
        uVar61 = *(undefined4 *)(&UNK_14301eae8 + uVar20);
        uVar10 = *(undefined4 *)(&UNK_14301eaec + uVar20);
        *(undefined4 *)(puVar46 + 0x3c0) = *(undefined4 *)(&UNK_14301eae0 + uVar20);
        *(undefined4 *)(puVar46 + 0x3c4) = uVar60;
        *(undefined4 *)(puVar46 + 0x3c8) = uVar61;
        *(undefined4 *)(puVar46 + 0x3cc) = uVar10;
        *(undefined4 *)(puVar46 + 0x3b0) = uVar62;
        *(undefined4 *)(puVar46 + 0x3b4) = uVar63;
        *(undefined4 *)(puVar46 + 0x3b8) = uVar64;
        *(undefined4 *)(puVar46 + 0x3bc) = uVar65;
        *(undefined8 *)(puVar46 + 0x3a0) = uVar15;
        *(undefined8 *)(puVar46 + 0x3a8) = uVar16;
        *(undefined8 *)(puVar46 + 0x390) = uVar53;
        *(undefined8 *)(puVar46 + 0x398) = uVar54;
        uVar60 = *(undefined4 *)arg1;
        uVar61 = *(undefined4 *)(&UNK_14301e8e4 + uVar20);
        in_XMM0_Dc = *(undefined4 *)(&UNK_14301e8e8 + uVar20);
        in_XMM0_Dd = *(undefined4 *)(&UNK_14301e8ec + uVar20);
code_r0x000140903498:
        uVar62 = *(undefined4 *)((longlong)arg1 + 0x14);
        uVar63 = *(undefined4 *)(arg1 + 3);
        uVar64 = *(undefined4 *)((longlong)arg1 + 0x1c);
        *(undefined4 *)(pppppppbVar50 + 0x86) = *(undefined4 *)(arg1 + 2);
        *(undefined4 *)((longlong)pppppppbVar50 + 0x434) = uVar62;
        *(undefined4 *)(pppppppbVar50 + 0x87) = uVar63;
        *(undefined4 *)((longlong)pppppppbVar50 + 0x43c) = uVar64;
        puVar40 = puVar46;
        param_2 = param_1;
        unaff_RDI = pppppppbVar52;
        goto code_r0x0001409034a4;
      case 1:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar46 + -8) = 0x1409039ea;
        pdb_142dc8570(&UNK_14301e728);
      case 2:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar46 + -8) = 0x1409039de;
        pdb_142dc8590(&UNK_14301e728);
      case 3:
        pppppppbVar21 = (byte *******)(ulonglong)(byte)(&UNK_14301eaa8)[uVar20];
      case 4:
                    /* WARNING: Could not recover jumptable at 0x00014090352d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pppppppbVar21 =
             (byte *******)
             (*(code *)(&UNK_14301e930 + *(int *)(&UNK_14301e930 + (longlong)pppppppbVar21 * 4)))();
        return pppppppbVar21;
      case 5:
        (&UNK_14301e8ad)[iVar4] = (&UNK_14301e8ad)[iVar4] + ' ';
        goto code_r0x0001409039eb;
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
        goto code_r0x0001409035eb;
      case 8:
        pppppppbVar21 = (byte *******)(ulonglong)(byte)(&UNK_14301ebd0)[uVar20];
        pppppppbVar34 = (byte *******)&UNK_14301e940;
        goto code_r0x000140903d0d;
      case 9:
        goto code_r0x0001409046d3;
      case 10:
        *(undefined4 *)(&UNK_14301eae0 + iVar4) = 0x4301e920;
        goto code_r0x0001409046cd;
      case 0xb:
        goto code_r0x000140903d47;
      case 0xc:
        puVar41 = (undefined8 *)(puVar46 + -8);
        puVar46 = puVar46 + -8;
        *puVar41 = arg1;
        bVar17 = *(byte *)pppppppbVar52;
        pppppppbVar34 = (byte *******)CONCAT71(0x14301e9,bVar17 + 0x20);
        arg1_00 = (byte *******)CONCAT62((int6)((ulonglong)arg1 >> 0x10),CONCAT11(0x87,(char)arg1));
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21;
        (&UNK_14301e8ad)[iVar4] = (&UNK_14301e8ad)[iVar4] + bVar17 + 0x20;
        pppppppbVar21 = (byte *******)(ulonglong)((uint)pppppppbVar21 | 0x271ab77);
        goto code_r0x000140903dd9;
      case 0xd:
        goto code_r0x0001409046e2;
      case 0xe:
        goto code_r0x0001409046d0;
      case 0xf:
        puVar46[0x50c07a4bf] = puVar46[0x50c07a4bf] + ' ';
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 << 1 | (char)*(byte *)pppppppbVar21 < '\0';
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar29;
        break;
      case 0x10:
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar29;
        break;
      case 0x11:
        goto code_r0x000140904036;
      case 0x12:
        goto code_r0x000140904711;
      case 0x13:
        *(undefined4 *)pppppppbVar52 = *(undefined4 *)param_1;
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 - 0x20;
        goto code_r0x0001409046e0;
      case 0x14:
        pcVar24 = (char *)CONCAT71((int7)((ulonglong)pppppppbVar21 >> 8),4);
        *pcVar24 = *pcVar24 + '\x04';
        puVar39 = puVar46;
        unaff_RDI = pppppppbVar52;
        goto code_r0x0001409040b7;
      case 0x15:
        bVar17 = *(byte *)pppppppbVar52;
        *(undefined8 *)(puVar46 + -8) = 0x140903ed0;
        func_0x000188903ed1(CONCAT71(0x14301e9,bVar17 + 0x20));
        break;
      case 0x16:
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar29;
code_r0x000140904711:
        (&UNK_14301e8ad)[iVar4] = (&UNK_14301e8ad)[iVar4] + ' ';
        goto code_r0x000140904719;
      case 0x17:
        goto code_r0x0001409046e3;
      case 0x18:
        (&UNK_14301e8ab)[iVar4] = (&UNK_14301e8ab)[iVar4] + ' ';
        *(uint *)pppppppbVar21 = *(int *)pppppppbVar21 + (uint)pppppppbVar21;
        (&UNK_14301e8a5)[iVar4] = (&UNK_14301e8a5)[iVar4] + ' ';
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 | bVar29;
        cRam000000064f098d5d = cRam000000064f098d5d + ' ';
        if (-1 < cRam000000064f098d5d) {
          *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar29;
          goto code_r0x000140903f1b;
        }
        *(byte *)pppppppbVar52 = *(byte *)pppppppbVar52 + 0x20;
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar29;
        goto code_r0x000140903f96;
      case 0x19:
        pcVar9 = (code *)swi(1);
        pppppppbVar21 = (byte *******)(*pcVar9)();
        return pppppppbVar21;
      case 0x1a:
        goto code_r0x000140905466;
      case 0x1b:
        goto code_r0x000140905404;
      case 0x1c:
        goto code_r0x000140905432;
      default:
        *(int *)((longlong)unaff_RBX + -0x72) = *(int *)((longlong)unaff_RBX + -0x72) + -0x4301e920;
        *(byte ********)(puVar46 + -8) = pppppppbVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000140903e8d;
    case 0x11:
      goto code_r0x00014090399e;
    case 0x12:
      *(byte *)((longlong)pppppppbVar21 + -0x77) =
           *(byte *)((longlong)pppppppbVar21 + -0x77) | bVar29;
      *(byte *)((longlong)pppppppbVar21 + 0x20878801) =
           *(byte *)((longlong)pppppppbVar21 + 0x20878801) + (char)((ulonglong)arg1 >> 8);
      pppppppbVar21 = (byte *******)CONCAT71(uVar28,bVar17 + *(byte *)pppppppbVar21);
code_r0x00014090399e:
      *(byte *)((longlong)pppppppbVar21 + -0x77) =
           *(byte *)((longlong)pppppppbVar21 + -0x77) + bVar29;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
      *(char *)CONCAT71(uVar28,1) = *(char *)CONCAT71(uVar28,1) + '\x01';
code_r0x0001409034a4:
      *(undefined4 *)(pppppppbVar50 + 0x84) = uVar60;
      *(undefined4 *)((longlong)pppppppbVar50 + 0x424) = uVar61;
      *(undefined4 *)(pppppppbVar50 + 0x85) = in_XMM0_Dc;
      *(undefined4 *)((longlong)pppppppbVar50 + 0x42c) = in_XMM0_Dd;
      *(undefined8 *)(puVar40 + -8) = 0x1409034c5;
      pdb_140d9d590(pppppppbVar50 + 0x2c,pppppppbVar50 + 0x62,pppppppbVar50 + 0x84);
      unaff_RBX = pppppppbVar50 + -10;
      *(undefined8 *)(puVar40 + -8) = 0x1409034df;
      pub_142e32760(unaff_RBX,pppppppbVar50 + 0x2c,0x1b0);
      puVar42 = puVar40;
    case 0x14:
      pppppppbVar52 = unaff_RDI;
      param_1 = param_2;
      puVar46 = puVar42;
      unaff_R14 = (byte *******)pppppppbVar50[0x8f];
      unaff_R15 = unaff_R14 + 4;
      pppppppbVar51 = (byte *******)0x1b0;
      *(undefined8 *)(puVar46 + -8) = 0x1409034fb;
      arg1_00 = unaff_RBX;
      pub_142e32760(unaff_R15);
      pppppppbVar34 = (byte *******)&UNK_14301e930;
      uVar20 = (ulonglong)*(int *)(&UNK_14301e930 + (ulonglong)*(byte *)(unaff_R14 + 0x39) * 4);
      bVar57 = SCARRY8(uVar20,0x14301e930);
      pppppppbVar21 = (byte *******)(&UNK_14301e930 + uVar20);
      bVar56 = (longlong)pppppppbVar21 < 0;
      arg1 = arg1_00;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(unaff_R14 + 0x39)) {
      case 0:
        arg1 = unaff_R14 + 0x12;
        unaff_R14[0x1a] = unaff_R14[0xc];
        unaff_R14[0x1b] = unaff_R14[0xd];
        uVar60 = *(undefined4 *)unaff_R15;
        uVar61 = *(undefined4 *)((longlong)unaff_R14 + 0x24);
        in_XMM0_Dc = *(undefined4 *)(unaff_R14 + 5);
        in_XMM0_Dd = *(undefined4 *)((longlong)unaff_R14 + 0x2c);
        uVar62 = *(undefined4 *)(unaff_R14 + 6);
        uVar63 = *(undefined4 *)((longlong)unaff_R14 + 0x34);
        in_XMM1_Dc = *(undefined4 *)(unaff_R14 + 7);
        in_XMM1_Dd = *(undefined4 *)((longlong)unaff_R14 + 0x3c);
        uVar64 = *(undefined4 *)(unaff_R14 + 8);
        uVar65 = *(undefined4 *)((longlong)unaff_R14 + 0x44);
        uVar10 = *(undefined4 *)(unaff_R14 + 9);
        uVar11 = *(undefined4 *)((longlong)unaff_R14 + 0x4c);
        pppppppbVar50[0x8d] = (byte ******)unaff_R15;
        *(undefined4 *)(unaff_R14 + 0x18) = *(undefined4 *)(unaff_R14 + 10);
        *(undefined4 *)((longlong)unaff_R14 + 0xc4) = *(undefined4 *)((longlong)unaff_R14 + 0x54);
        *(undefined4 *)(unaff_R14 + 0x19) = *(undefined4 *)(unaff_R14 + 0xb);
        *(undefined4 *)((longlong)unaff_R14 + 0xcc) = *(undefined4 *)((longlong)unaff_R14 + 0x5c);
        *(undefined4 *)(unaff_R14 + 0x16) = uVar64;
        *(undefined4 *)((longlong)unaff_R14 + 0xb4) = uVar65;
        *(undefined4 *)(unaff_R14 + 0x17) = uVar10;
        *(undefined4 *)((longlong)unaff_R14 + 0xbc) = uVar11;
code_r0x00014090356d:
        *(undefined4 *)(unaff_R14 + 0x14) = uVar62;
        *(undefined4 *)((longlong)unaff_R14 + 0xa4) = uVar63;
        *(undefined4 *)(unaff_R14 + 0x15) = in_XMM1_Dc;
        *(undefined4 *)((longlong)unaff_R14 + 0xac) = in_XMM1_Dd;
        *(undefined4 *)(unaff_R14 + 0x12) = uVar60;
        *(undefined4 *)((longlong)unaff_R14 + 0x94) = uVar61;
        *(undefined4 *)(unaff_R14 + 0x13) = in_XMM0_Dc;
        *(undefined4 *)((longlong)unaff_R14 + 0x9c) = in_XMM0_Dd;
        unaff_R14[0x1c] = unaff_R14[0xe];
        unaff_R14[0x1d] = unaff_R14[0xf];
        *(undefined4 *)(unaff_R14 + 0x1e) = *(undefined4 *)(unaff_R14 + 0x10);
        *(undefined4 *)((longlong)unaff_R14 + 0xf4) = *(undefined4 *)((longlong)unaff_R14 + 0x84);
        *(undefined4 *)(unaff_R14 + 0x1f) = *(undefined4 *)(unaff_R14 + 0x11);
        *(undefined4 *)((longlong)unaff_R14 + 0xfc) = *(undefined4 *)((longlong)unaff_R14 + 0x8c);
        ppppppbVar25 = unaff_R14[0x1a];
        *(byte *******)(puVar46 + 0x20) = unaff_R14[0x1b];
        *(undefined8 *)(puVar46 + -8) = 0x1409035c0;
        pdb_140d9d190(pppppppbVar50 + 0x2c,arg1,unaff_R14 + 0x1c,ppppppbVar25);
        unaff_RBX = pppppppbVar50 + 0x62;
        *(undefined8 *)(puVar46 + -8) = 0x1409035dd;
        pub_142e32760(unaff_RBX,pppppppbVar50 + 0x2c,200);
        arg1 = (byte *******)pppppppbVar50[0x8f];
        pppppppbVar34 = arg1 + 0x20;
code_r0x0001409035eb:
        *(undefined8 *)(puVar46 + -8) = 0x1409035f9;
        pub_142e32760(pppppppbVar34,unaff_RBX,200);
        unaff_R14 = arg1;
        goto code_r0x000140903602;
      case 1:
        pppppppbVar50[0x8d] = (byte ******)unaff_R15;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar46 + -8) = 0x140903a14;
        pdb_142dc8570(&UNK_14301e790);
      case 2:
code_r0x0001409039eb:
        pppppppbVar50[0x8d] = (byte ******)unaff_R15;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar46 + -8) = 0x1409039fe;
        pdb_142dc8590(&UNK_14301e790);
      case 3:
        pppppppbVar50[0x8d] = (byte ******)unaff_R15;
code_r0x000140903602:
        pppppppbVar50[0x8e] = (byte ******)(unaff_R14 + 0x20);
        *(undefined8 *)(puVar46 + -8) = 0x140903618;
        uVar20 = pdb_1408fdd40();
        param_2 = param_1;
        if (uVar20 != 2) {
          ppppppbVar25 = pppppppbVar50[0x8f];
          if (*(char *)(ppppppbVar25 + 0x2b) == '\x04') {
            pppppppbVar50[0x8e] = (byte ******)ppppppbVar25[0x2c];
            ppppppbVar25 = (byte ******)ppppppbVar25[0x2d];
            pppppppbVar50[0x8c] = ppppppbVar25;
            pppppbVar6 = *ppppppbVar25;
            if (pppppbVar6 != (byte *****)0x0) {
              ppppppbVar25 = pppppppbVar50[0x8e];
              *(undefined8 *)(puVar46 + -8) = 0x14090372f;
              (*(code *)pppppbVar6)(ppppppbVar25);
            }
            ppppppbVar25 = pppppppbVar50[0x8e];
            pppppbVar6 = pppppppbVar50[0x8c][1];
            if (pppppbVar6 != (byte *****)0x0) {
              pppppbVar36 = pppppppbVar50[0x8c][2];
              *(undefined8 *)(puVar46 + -8) = 0x140903750;
              pub_1406abac0((byte *)ppppppbVar25,(ulonglong)pppppbVar6,(ulonglong)pppppbVar36);
            }
            pppppbVar6 = pppppppbVar50[0x8f][0x26];
            LOCK();
            *pppppbVar6 = (byte ****)((longlong)*pppppbVar6 + -1);
            UNLOCK();
            if (*pppppbVar6 == (byte ****)0x0) {
              ppppppbVar25 = pppppppbVar50[0x8f];
              *(undefined8 *)(puVar46 + -8) = 0x140903777;
              pdb_141746810(ppppppbVar25 + 0x26);
            }
          }
          else if (((*(char *)(ppppppbVar25 + 0x2b) == '\x03') &&
                   (*(char *)(pppppppbVar50[0x8f] + 0x38) == '\x03')) &&
                  ((*(char *)(pppppppbVar50[0x8f] + 0x37) == '\x03' &&
                   (*(char *)((longlong)pppppppbVar50[0x8f] + 0x1b1) == '\x03')))) {
            pppppppbVar50[0x8e] = (byte ******)pppppppbVar50[0x8f][0x32];
            ppppppbVar25 = (byte ******)pppppppbVar50[0x8f][0x33];
            pppppppbVar50[0x8c] = ppppppbVar25;
            pppppbVar6 = *ppppppbVar25;
            if (pppppbVar6 != (byte *****)0x0) {
              ppppppbVar25 = pppppppbVar50[0x8e];
              *(undefined8 *)(puVar46 + -8) = 0x1409036d1;
              (*(code *)pppppbVar6)(ppppppbVar25);
            }
            ppppppbVar25 = pppppppbVar50[0x8e];
            pppppbVar6 = pppppppbVar50[0x8c][1];
            if (pppppbVar6 != (byte *****)0x0) {
              pppppbVar36 = pppppppbVar50[0x8c][2];
              *(undefined8 *)(puVar46 + -8) = 0x1409036f2;
              pub_1406abac0((byte *)ppppppbVar25,(ulonglong)pppppbVar6,(ulonglong)pppppbVar36);
            }
            *(undefined1 *)(pppppppbVar50[0x8f] + 0x36) = 0;
          }
          if ((uVar20 & 1) == 0) {
            pppppppbVar50[0x8b] = (byte ******)pppppppbVar52;
            ppppppbVar25 = pppppppbVar50[0x8f];
            pppppbVar6 = ppppppbVar25[0x1a];
            pppppbVar36 = ppppppbVar25[0x1b];
            ppppppbVar55 = pppppppbVar52[4];
            *(byte *******)(puVar46 + 0x20) = pppppppbVar52[3];
            *(byte *******)(puVar46 + 0x28) = ppppppbVar55;
            pppppppbVar50[0x8e] = (byte ******)pppppppbVar52;
            *(undefined8 *)(puVar46 + -8) = 0x140903837;
            pdb_1417da120(pppppppbVar50 + 0x84,pppppbVar6,pppppbVar36,ppppppbVar25 + 0x16);
            ppppppbVar25 = pppppppbVar50[0x8e];
            LOCK();
            *ppppppbVar25 = (byte *****)((longlong)*ppppppbVar25 + -1);
            UNLOCK();
            if (*ppppppbVar25 == (byte *****)0x0) {
              *(undefined8 *)(puVar46 + -8) = 0x140903851;
              pdb_140cd0de0(pppppppbVar50 + 0x8b);
            }
            ppppppbVar25 = pppppppbVar50[0x8f];
            *(undefined8 *)(puVar46 + -8) = 0x140903865;
            pdb_14098a860(ppppppbVar25 + 0x1c);
            unaff_RDI = (byte *******)pppppppbVar50[0x8f];
            ppppppbVar25 = unaff_RDI[0x19];
            if (ppppppbVar25 != (byte ******)0x0) {
              ppppppbVar55 = unaff_RDI[0x1a];
              *(undefined8 *)(puVar46 + -8) = 0x14090388b;
              pub_1406abac0((byte *)ppppppbVar55,(ulonglong)ppppppbVar25,1);
            }
            ppppppbVar55 = unaff_RDI[0x12];
            ppppppbVar25 = pppppppbVar50[0x8d];
            if ((!SBORROW8(0,(longlong)ppppppbVar55)) && (ppppppbVar55 != (byte ******)0x0)) {
              ppppppbVar26 = unaff_RDI[0x13];
              *(undefined8 *)(puVar46 + -8) = 0x1409038b5;
              pub_1406abac0((byte *)ppppppbVar26,(ulonglong)ppppppbVar55,1);
            }
            unaff_R15 = (byte *******)pppppppbVar50[0x84];
            pppppppbVar52 = (byte *******)pppppppbVar50[0x85];
            pppppppbVar50[0x80] = pppppppbVar50[0x86];
            pppppppbVar50[0x81] = pppppppbVar50[0x87];
            pppppppbVar50[0x82] = pppppppbVar50[0x88];
            pppppppbVar50[0x83] = pppppppbVar50[0x89];
            *(byte *)(unaff_RDI + 0x39) = 1;
            if (unaff_R15 == (byte *******)0x8000000000000001) goto code_r0x000140903630;
          }
          else {
            ppppppbVar25 = pppppppbVar50[0x8f];
            *(undefined8 *)(puVar46 + -8) = 0x140903791;
            pdb_14098a860(ppppppbVar25 + 0x1c);
            ppppppbVar26 = pppppppbVar50[0x8f];
            pppppbVar6 = ppppppbVar26[0x19];
            if (pppppbVar6 != (byte *****)0x0) {
              pppppbVar36 = ppppppbVar26[0x1a];
              *(undefined8 *)(puVar46 + -8) = 0x1409037b7;
              pub_1406abac0((byte *)pppppbVar36,(ulonglong)pppppbVar6,1);
            }
            ppppppbVar55 = (byte ******)ppppppbVar26[0x12];
            ppppppbVar25 = pppppppbVar50[0x8d];
            if ((!SBORROW8(0,(longlong)ppppppbVar55)) && (ppppppbVar55 != (byte ******)0x0)) {
              pppppbVar6 = ppppppbVar26[0x13];
              *(undefined8 *)(puVar46 + -8) = 0x1409037e1;
              pub_1406abac0((byte *)pppppbVar6,(ulonglong)ppppppbVar55,1);
            }
            *(undefined1 *)(ppppppbVar26 + 0x39) = 1;
            unaff_R15 = (byte *******)0x8000000000000000;
          }
          *(undefined4 *)(pppppppbVar50 + 0x7e) = *(undefined4 *)(pppppppbVar50 + 0x82);
          *(undefined4 *)((longlong)pppppppbVar50 + 0x3f4) =
               *(undefined4 *)((longlong)pppppppbVar50 + 0x414);
          *(undefined4 *)(pppppppbVar50 + 0x7f) = *(undefined4 *)(pppppppbVar50 + 0x83);
          *(undefined4 *)((longlong)pppppppbVar50 + 0x3fc) =
               *(undefined4 *)((longlong)pppppppbVar50 + 0x41c);
          pppppppbVar50[0x7c] = pppppppbVar50[0x80];
          pppppppbVar50[0x7d] = pppppppbVar50[0x81];
          *(undefined8 *)(puVar46 + -8) = 0x14090391d;
          pdb_140902140(ppppppbVar25);
          if (!SBORROW8(0,(longlong)unaff_R15)) {
            *(undefined8 *)(puVar46 + -8) = 0x14090393b;
            pdb_14007ee60();
            *(undefined8 *)(puVar46 + -8) = 0x14090394a;
            pppppppbVar21 = (byte *******)pub_1406abab0(0x40,8);
            if (pppppppbVar21 == (byte *******)0x0) {
              pppppppbVar50[0x8d] = (byte ******)unaff_R15;
              pppppppbVar50[0x8e] = (byte ******)pppppppbVar52;
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar46 + -8) = 0x1409039cf;
              pdb_142dc7e11(8,0x40);
            }
            *pppppppbVar21 = (byte ******)0x1;
            pppppppbVar21[1] = (byte ******)0x1;
            unaff_R14 = pppppppbVar52;
            goto code_r0x00014090395e;
          }
          *(undefined8 *)(puVar46 + -8) = 0x14090392e;
          pppppppbVar21 = (byte *******)pdb_142dc6590(pppppppbVar52);
          ppppppbVar25 = (byte ******)0x1;
          goto code_r0x000140903985;
        }
        unaff_RDI = (byte *******)pppppppbVar50[0x8f];
        *(byte *)(unaff_RDI + 0x39) = 3;
code_r0x000140903630:
        *param_1 = (byte ******)0x2;
        pppppppbVar21 = (byte *******)0x3;
        goto code_r0x000140903999;
      case 4:
code_r0x000140903d0d:
        iVar4 = *(int *)((longlong)pppppppbVar34 + (longlong)pppppppbVar21 * 4);
        pppppppbVar50[0x111] = (byte ******)arg1;
                    /* WARNING: Could not emulate address calculation at 0x000140903d0d */
                    /* WARNING: Treating indirect jump as call */
        pppppppbVar21 = (byte *******)(*(code *)((longlong)pppppppbVar34 + (longlong)iVar4))();
        return pppppppbVar21;
      case 5:
code_r0x0001409046e3:
        *(int *)pppppppbVar34 = *(int *)pppppppbVar34 + -0x72b80000;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar46 + -8) = 0x1409046f3;
        pdb_142dc8590();
      case 6:
code_r0x0001409046d7:
        pppppppbVar52 = pppppppbVar51;
        if (bVar56) {
          pppppppbVar34 =
               (byte *******)
               CONCAT71((int7)((ulonglong)pppppppbVar34 >> 8),
                        (char)pppppppbVar34 + (char)((ulonglong)pppppppbVar34 >> 8));
          goto code_r0x0001409046e3;
        }
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + (char)pppppppbVar21;
        arg1 = unaff_R14;
        goto code_r0x0001409046d4;
      case 7:
        goto code_r0x000140903dd2;
      case 8:
        goto code_r0x000140903dd9;
      case 9:
        break;
      case 10:
code_r0x0001409046e0:
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + (char)pppppppbVar21;
        pppppppbVar52 = pppppppbVar51;
        arg1 = unaff_R14;
        goto code_r0x0001409046e2;
      case 0xb:
        goto code_r0x000140903e8d;
      case 0xc:
        goto code_r0x000140903edd;
      case 0xd:
        pppppppbVar50 = (byte *******)0x888;
        goto code_r0x000140904036;
      case 0xe:
        goto code_r0x000140904719;
      case 0xf:
        puVar46 = puVar46 + 8;
        break;
      case 0x10:
        (&UNK_14301e8bd)[uVar20] = (&UNK_14301e8bd)[uVar20] + '0';
        uVar20 = (ulonglong)pppppppbVar50 >> 8;
        pppppppbVar50 = (byte *******)((ulonglong)pppppppbVar21 & 0xffffffff);
        pcVar24 = (char *)CONCAT71((uint7)uVar20 & 0xffffff,4);
        *pcVar24 = *pcVar24 + '\x04';
code_r0x00014090410f:
        *(undefined8 *)(puVar46 + -8) = 0x14090411d;
        pub_142e32760(unaff_RBX);
        pppppppbVar52 = (byte *******)pppppppbVar50[0x111];
        pppppppbVar34 = pppppppbVar52 + 0x36;
        goto code_r0x00014090412b;
      case 0x11:
        goto code_r0x000140903e8d;
      case 0x12:
        goto code_r0x000140904799;
      case 0x13:
        break;
      case 0x14:
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + (char)pppppppbVar21;
        arg1 = unaff_R14;
        goto code_r0x000140903f1b;
      case 0x15:
        goto LAB_1409053b8;
      case 0x16:
        puVar49 = puVar46 + -8;
        *(ulonglong *)(puVar46 + -8) =
             (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar57 * 0x800 |
             (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
             (ulonglong)bVar56 * 0x80 | (ulonglong)(pppppppbVar21 == (byte *******)0x0) * 0x40 |
             (ulonglong)(in_AF & 1) * 0x10 |
             (ulonglong)((POPCOUNT((ulonglong)pppppppbVar21 & 0xff) & 1U) == 0) * 4 |
             (ulonglong)(0xfffffffebcfe16cf < uVar20) | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
        puVar35 = (undefined *)((ulonglong)unaff_RBX & 0xffffffff);
        puVar46 = puVar46 + -8;
        if (!bVar57) {
          puVar35 = (undefined *)((ulonglong)unaff_RBX & 0xffffff20);
          puVar46 = puVar49;
        }
        goto code_r0x000140905474;
      case 0x17:
        goto code_r0x000140905414;
      case 0x18:
        goto code_r0x000140905444;
      default:
        *(int *)((longlong)unaff_RBX + -0x72) = *(int *)((longlong)unaff_RBX + -0x72) + -1;
        *(uint *)(&UNK_14301e8be + uVar20) =
             *(uint *)(&UNK_14301e8be + uVar20) << 1 | (uint)(0xfffffffebcfe16cf < uVar20);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar46 + -8) = 0x1409046ff;
      pdb_142dc8570(&UNK_14301e728);
    case 0x15:
      goto code_r0x0001409039b1;
    case 0x16:
      *(byte *)arg1 = *(byte *)arg1 & bVar17;
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
      goto code_r0x000140903999;
    case 0x17:
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
      puVar46 = auStack_218;
      param_1 = param_2;
      pppppppbVar52 = unaff_RDI;
      goto code_r0x00014090356d;
    case 0x18:
      return pppppppbVar21;
    case 0x19:
      pbVar22 = (byte *)((longlong)pppppppbVar52 + 0x1e9);
      pbVar22[0] = 1;
      pbVar22[1] = 0;
      pbVar22[2] = 0x49;
      pbVar22[3] = 0x8b;
code_r0x00014090469f:
      if (bVar56) goto code_r0x0001409046a2;
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + (char)pppppppbVar21;
      puVar38 = auStack_218;
      break;
    case 0x1a:
      goto code_r0x000140904687;
    case 0x1b:
      *(char *)CONCAT71(uVar28,4) = *(char *)CONCAT71(uVar28,4) + '\x04';
      puVar46 = auStack_218;
      param_1 = param_2;
      pppppppbVar52 = unaff_RDI;
      arg1 = unaff_R14;
      goto code_r0x000140903d47;
    case 0x1c:
      *(byte *)arg1 = *(byte *)arg1 ^ bVar17;
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
      puVar46 = auStack_218;
      param_1 = param_2;
      pppppppbVar52 = unaff_RDI;
      arg1 = unaff_R14;
      goto code_r0x000140903d47;
    case 0x1d:
code_r0x0001409046a2:
      *(byte *)((longlong)param_1 + -0x75) = *(byte *)((longlong)param_1 + -0x75) + bVar29;
      pbVar22 = (byte *)((longlong)pppppppbVar21 + 0x48000001);
      *pbVar22 = *pbVar22 - 0x3f;
      pbVar33 = (byte *)((longlong)param_1 + -1);
      puVar46 = auStack_218;
      if (pbVar33 != (byte *)0x0 && *pbVar22 == 0) {
        *(int *)(pppppppbVar21 + 0x35) = (int)pppppppbVar21;
        puVar46 = auStack_218;
      }
      goto code_r0x0001409046ae;
    case 0x1e:
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
      goto code_r0x000140904692;
    case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x20:
      goto code_r0x000140903e8d;
    case 0x21:
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
      puVar46 = auStack_218;
      goto code_r0x000140903fd7;
    case 0x22:
      *(byte *)param_1 = *(byte *)param_1;
      pbVar22 = (byte *)((longlong)unaff_RBX + (longlong)param_1 * 4 + -0x4b);
      *pbVar22 = *pbVar22 + bVar29;
      pppppppbVar34 = param_1;
      puVar46 = auStack_218;
      arg1 = unaff_R14;
code_r0x0001409046d0:
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 & (byte)pppppppbVar34;
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + (char)pppppppbVar21;
      goto code_r0x0001409046d4;
    case 0x23:
      arg1 = (byte *******)(ulonglong)*(uint *)(pppppppbVar21 + 0x2f);
      puVar38 = auStack_218;
      break;
    case 0x24:
code_r0x0001409040b7:
      puVar46 = puVar39;
      *(undefined4 *)(unaff_RDI + 0x28) = uVar60;
      *(undefined4 *)((longlong)unaff_RDI + 0x144) = uVar61;
      *(undefined4 *)(unaff_RDI + 0x29) = in_XMM0_Dc;
      *(undefined4 *)((longlong)unaff_RDI + 0x14c) = in_XMM0_Dd;
      unaff_RDI[0x32] = unaff_RDI[0x24];
      unaff_RDI[0x33] = unaff_RDI[0x25];
      *(undefined4 *)(unaff_RDI + 0x34) = *(undefined4 *)(unaff_RDI + 0x26);
      *(undefined4 *)((longlong)unaff_RDI + 0x1a4) = *(undefined4 *)((longlong)unaff_RDI + 0x134);
      *(undefined4 *)(unaff_RDI + 0x35) = *(undefined4 *)(unaff_RDI + 0x27);
      *(undefined4 *)((longlong)unaff_RDI + 0x1ac) = *(undefined4 *)((longlong)unaff_RDI + 0x13c);
      ppppppbVar25 = unaff_RDI[0x30];
      *(byte *******)(puVar46 + 0x20) = unaff_RDI[0x31];
      *(undefined8 *)(puVar46 + -8) = 0x140904100;
      pdb_140d9d190(pppppppbVar50 + 0x96,arg1,unaff_RDI + 0x32,ppppppbVar25);
      unaff_RBX = pppppppbVar50 + 0x7c;
      goto code_r0x00014090410f;
    case 0x25:
      goto code_r0x000140903e87;
    case 0x26:
      pppppppbVar34 =
           (byte *******)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x20,bVar29));
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 | bVar17;
      puVar46 = auStack_218;
      arg1 = unaff_R14;
code_r0x0001409046d3:
      pbVar22 = (byte *)((longlong)unaff_RBX + (longlong)pppppppbVar34 * 4 + -0x43);
      *pbVar22 = *pbVar22 + (char)pppppppbVar34;
      bVar56 = (char)*pbVar22 < '\0';
      unaff_R14 = arg1;
      goto code_r0x0001409046d7;
    case 0x27:
      break;
    case 0x28:
      puVar46 = auStack_218;
      pppppppbVar52 = unaff_RDI;
      arg1 = unaff_R14;
      goto code_r0x000140903f1b;
    case 0x29:
code_r0x0001409053aa:
      param_3 = (byte *******)0x4;
code_r0x0001409053b0:
      pdb_1417ca2e0(param_2,arg1,param_3);
      puVar46 = auStack_218;
      param_1 = param_2;
      pppppppbVar52 = unaff_RDI;
      goto LAB_1409053b8;
    case 0x2a:
      puVar46 = auStack_250;
      pppppppbVar34 = (byte *******)(ulonglong)*(byte *)((longlong)param_1 + 0x22);
      pppppppbVar52 = (byte *******)((longlong)pppppppbVar34 + -1);
      in_R9 = (byte *******)0x0;
code_r0x000140905432:
      if ((byte *******)0x1 < pppppppbVar34) {
        in_R9 = pppppppbVar52;
      }
      goto code_r0x000140905438;
    case 0x2b:
      puVar46 = auStack_218;
      param_1 = param_2;
      pppppppbVar52 = unaff_RDI;
      goto LAB_1409053b8;
    case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2d:
    case 0x2e:
    case 0x2f:
      puVar1 = (uint *)((longlong)unaff_R14 + -0x71eea703);
      uVar19 = *puVar1;
      uVar8 = *puVar1 + (uint)in_R9;
      *puVar1 = uVar8 + (0xfffffffebcfe171f < uVar20);
      puVar1 = (uint *)((longlong)param_2 + -0x71eec903);
      uVar7 = (uint)(CARRY4(uVar19,(uint)in_R9) || CARRY4(uVar8,(uint)(0xfffffffebcfe171f < uVar20))
                    );
      uVar19 = *puVar1;
      uVar8 = *puVar1;
      *puVar1 = uVar8 + uVar31 + uVar7;
      puVar1 = (uint *)((longlong)param_2 + -0x71eec903);
      uVar7 = (uint)(CARRY4(uVar19,uVar31) || CARRY4(uVar8 + uVar31,uVar7));
      uVar19 = *puVar1;
      uVar8 = *puVar1;
      *puVar1 = uVar8 + uVar31 + uVar7;
      *(uint *)((longlong)param_2 + -0x71eec903) =
           *(int *)((longlong)param_2 + -0x71eec903) + uVar31 +
           (uint)(CARRY4(uVar19,uVar31) || CARRY4(uVar8 + uVar31,uVar7));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x0001409046a3;
  default:
    *(undefined4 *)pppppppbVar21 = uVar60;
    *(undefined4 *)(&UNK_14301e8a0 + uVar20) = uVar61;
    *(undefined4 *)(&UNK_14301e8a4 + uVar20) = in_XMM0_Dc;
    *(undefined4 *)(&UNK_14301e8a8 + uVar20) = in_XMM0_Dd;
    return pppppppbVar21;
  case 0x17:
    return pppppppbVar21;
  case 0x19:
  case 0x1a:
  case 0x1b:
    _UNK_14301e964 = _UNK_14301e99c;
    pppppppbVar21 = (byte *******)pdb_14096c850(&UNK_14301e964);
  case 0x1c:
    return pppppppbVar21;
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1e:
    ffree(in_ST5);
    pppppppbVar52 = param_3;
    uVar10 = in_R10D;
    goto code_r0x000140901a51;
  case 0x1f:
    bVar17 = *(byte *)unaff_RDI;
    *(byte *)unaff_RDI = *(byte *)unaff_RDI - bVar29;
    *(uint *)(&UNK_14301e8bc + uVar20) =
         *(int *)(&UNK_14301e8bc + uVar20) + 0x4301e89c + (uint)(bVar17 < bVar29);
    pppppppbVar52 = param_3;
    goto code_r0x000140901ad4;
  case 0x20:
    goto code_r0x000140901a11;
  case 0x21:
    pub_1406abac0(_UNK_14301eaf4,0x50,0x10);
    return extraout_RAX;
  case 0x22:
    *(uint *)pppppppbVar21 = *(int *)pppppppbVar21 + uVar19;
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    goto code_r0x00014090395e;
  case 0x23:
    uVar19 = *(uint *)(&UNK_14301e863 + uVar20);
    pbVar33 = (byte *)(ulonglong)uVar19;
    *pbVar33 = *pbVar33 + bVar17;
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    bVar30 = (byte)uVar19;
    (&UNK_14301e863)[uVar20] = (&UNK_14301e863)[uVar20] + bVar30;
    *pbVar33 = *pbVar33 | bVar17;
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    pbVar22 = (byte *)((longlong)pbVar33 * 5 + 0x78);
    bVar17 = *pbVar22;
    *pbVar22 = *pbVar22 + bVar30;
    pbVar22 = (byte *)((longlong)pbVar33 * 5 + 0x70);
    bVar29 = *pbVar22;
    bVar3 = *pbVar22;
    *pbVar22 = bVar3 + bVar30 + CARRY1(bVar17,bVar30);
    *(byte *)unaff_RDI =
         (*(byte *)unaff_RDI - bVar30) -
         (CARRY1(bVar29,bVar30) || CARRY1(bVar3 + bVar30,CARRY1(bVar17,bVar30)));
  case 0x26:
code_r0x00014090396d:
    param_1 = param_2;
    ppppppbVar25 = pppppppbVar50[0x7e];
    ppppppbVar55 = pppppppbVar50[0x7f];
    *(undefined4 *)(pppppppbVar21 + 4) = uVar60;
    *(undefined4 *)((longlong)pppppppbVar21 + 0x24) = uVar61;
    *(undefined4 *)(pppppppbVar21 + 5) = in_XMM0_Dc;
    *(undefined4 *)((longlong)pppppppbVar21 + 0x2c) = in_XMM0_Dd;
    pppppppbVar21[6] = ppppppbVar25;
    pppppppbVar21[7] = ppppppbVar55;
    ppppppbVar55 = (byte ******)&UNK_14301e740;
    ppppppbVar25 = (byte ******)0x0;
code_r0x000140903985:
    unaff_RDI = (byte *******)pppppppbVar50[0x8f];
    *param_1 = ppppppbVar25;
    param_1[1] = (byte ******)pppppppbVar21;
    param_1[2] = ppppppbVar55;
    pppppppbVar21 = (byte *******)0x1;
    param_2 = param_1;
code_r0x000140903999:
    *(byte *)(unaff_RDI + 0x44) = (byte)pppppppbVar21;
    pppppppbVar21 = param_2;
code_r0x0001409039b1:
    return pppppppbVar21;
  case 0x24:
    bVar17 = bVar17 + (char)*(undefined4 *)pppppppbVar21;
    pbVar22 = (byte *)((longlong)param_1 + 0xf);
    bVar29 = *pbVar22;
    *pbVar22 = *pbVar22 + bVar17;
    *(byte *)param_2 = *(byte *)param_2 + bVar17 + CARRY1(bVar29,bVar17);
    puVar46 = auStack_218;
    param_1 = param_2;
    arg1 = unaff_R14;
    goto code_r0x000140903498;
  case 0x25:
    *(byte *)unaff_RDI = *(byte *)unaff_RDI + (char)in_R9 + bVar56;
    puVar40 = auStack_218;
    goto code_r0x0001409034a4;
  case 0x27:
    *(undefined4 *)(&UNK_14301e8a4 + uVar20) = 1;
code_r0x00014090395e:
    pppppppbVar21[2] = (byte ******)unaff_R15;
    pppppppbVar21[3] = (byte ******)unaff_R14;
    uVar60 = *(undefined4 *)(pppppppbVar50 + 0x7c);
    uVar61 = *(undefined4 *)((longlong)pppppppbVar50 + 0x3e4);
    in_XMM0_Dc = *(undefined4 *)(pppppppbVar50 + 0x7d);
    in_XMM0_Dd = *(undefined4 *)((longlong)pppppppbVar50 + 0x3ec);
    goto code_r0x00014090396d;
  case 0x28:
    *(int *)(param_2 + 0x16) = *(int *)(param_2 + 0x16) + -0x4301e89c;
    puVar46 = auStack_218;
    param_1 = param_2;
    goto code_r0x00014090356d;
  case 0x29:
    return pppppppbVar21;
  case 0x2a:
    goto code_r0x00014090464f;
  case 0x2b:
    if (bVar56 || bVar57) goto code_r0x000140904645;
    _UNK_14301e8a4 = _UNK_14301e8a4 + 1;
    puVar43 = auStack_218;
    goto code_r0x00014090464a;
  case 0x2c:
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    uVar64 = *(undefined4 *)(unaff_RDI + 0x5a);
    uVar65 = *(undefined4 *)((longlong)unaff_RDI + 0x2d4);
    in_XMM3_Dc = *(undefined4 *)(unaff_RDI + 0x5b);
    in_XMM3_Dd = *(undefined4 *)((longlong)unaff_RDI + 0x2dc);
    puVar46 = auStack_218;
    param_1 = param_2;
    arg1 = unaff_R14;
    goto code_r0x000140903d47;
  case 0x2d:
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    puVar46 = auStack_218;
    param_1 = param_2;
    arg1 = unaff_R14;
code_r0x000140903d47:
    *(undefined4 *)(pppppppbVar50 + 0x4c) = uVar64;
    *(undefined4 *)((longlong)pppppppbVar50 + 0x264) = uVar65;
    *(undefined4 *)(pppppppbVar50 + 0x4d) = in_XMM3_Dc;
    *(undefined4 *)((longlong)pppppppbVar50 + 0x26c) = in_XMM3_Dd;
    *(int *)(pppppppbVar50 + 0x4a) = (int)in_XMM2_Qa;
    *(int *)((longlong)pppppppbVar50 + 0x254) = (int)((ulonglong)in_XMM2_Qa >> 0x20);
    *(undefined4 *)(pppppppbVar50 + 0x4b) = in_XMM2_Dc;
    *(undefined4 *)((longlong)pppppppbVar50 + 0x25c) = in_XMM2_Dd;
    *(undefined4 *)(pppppppbVar50 + 0x48) = uVar62;
    *(undefined4 *)((longlong)pppppppbVar50 + 0x244) = uVar63;
    *(undefined4 *)(pppppppbVar50 + 0x49) = in_XMM1_Dc;
    *(undefined4 *)((longlong)pppppppbVar50 + 0x24c) = in_XMM1_Dd;
    *(undefined4 *)(pppppppbVar50 + 0x46) = uVar60;
    *(undefined4 *)((longlong)pppppppbVar50 + 0x234) = uVar61;
    *(undefined4 *)(pppppppbVar50 + 0x47) = in_XMM0_Dc;
    *(undefined4 *)((longlong)pppppppbVar50 + 0x23c) = in_XMM0_Dd;
    ppppppbVar25 = pppppppbVar52[0x50];
    ppppppbVar55 = pppppppbVar52[0x51];
    uVar62 = *(undefined4 *)((longlong)pppppppbVar52 + 0x294);
    uVar63 = *(undefined4 *)(pppppppbVar52 + 0x53);
    uVar64 = *(undefined4 *)((longlong)pppppppbVar52 + 0x29c);
    *(undefined4 *)(pppppppbVar50 + 0x7e) = *(undefined4 *)(pppppppbVar52 + 0x52);
    *(undefined4 *)((longlong)pppppppbVar50 + 0x3f4) = uVar62;
    *(undefined4 *)(pppppppbVar50 + 0x7f) = uVar63;
    *(undefined4 *)((longlong)pppppppbVar50 + 0x3fc) = uVar64;
    pppppppbVar50[0x7c] = ppppppbVar25;
    pppppppbVar50[0x7d] = ppppppbVar55;
    *(undefined8 *)(puVar46 + -8) = 0x140903d99;
    pdb_140d9d540(pppppppbVar50 + 0x96,pppppppbVar50 + 0x46,pppppppbVar50 + 0x7c);
    unaff_RBX = pppppppbVar50 + -10;
    *(undefined8 *)(puVar46 + -8) = 0x140903db3;
    pub_142e32760(unaff_RBX,pppppppbVar50 + 0x96,0x280);
    pppppppbVar52 = (byte *******)pppppppbVar50[0x111];
    *(undefined8 *)(puVar46 + -8) = 0x140903dcb;
    arg1_00 = unaff_RBX;
    pub_142e32760(pppppppbVar52,unaff_RBX,0x280);
    pppppppbVar21 = (byte *******)(ulonglong)*(byte *)(pppppppbVar52 + 0x18);
    unaff_R14 = arg1;
code_r0x000140903dd2:
    pppppppbVar34 = (byte *******)&UNK_14301e950;
code_r0x000140903dd9:
    uVar20 = (ulonglong)*(int *)((longlong)pppppppbVar34 + (longlong)pppppppbVar21 * 4);
    pppppppbVar21 = (byte *******)((longlong)pppppppbVar34 + uVar20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(pppppppbVar21) {
    case (byte *******)0x140903df9:
      pppppppbVar21 = pppppppbVar52 + 0xe;
      pppppppbVar52[0xc] = pppppppbVar52[0x16];
      pppppppbVar52[0xd] = pppppppbVar52[0x17];
      pppppppbVar52[10] = pppppppbVar52[0x14];
      pppppppbVar52[0xb] = pppppppbVar52[0x15];
      pppppppbVar52[8] = pppppppbVar52[0x12];
      pppppppbVar52[9] = pppppppbVar52[0x13];
      pppppppbVar52[6] = pppppppbVar52[0x10];
      pppppppbVar52[7] = pppppppbVar52[0x11];
      pppppppbVar52[4] = pppppppbVar52[0xe];
      pppppppbVar52[5] = pppppppbVar52[0xf];
code_r0x000140903e31:
      ppppppbVar25 = *pppppppbVar52;
      ppppppbVar55 = pppppppbVar52[1];
      ppppppbVar26 = pppppppbVar52[3];
      pppppppbVar50[0xfa] = pppppppbVar52[2];
      pppppppbVar50[0xfb] = ppppppbVar26;
      pppppppbVar50[0xf8] = ppppppbVar25;
      pppppppbVar50[0xf9] = ppppppbVar55;
      bVar56 = SBORROW8(0,(longlong)pppppppbVar52[0xb]);
code_r0x000140903e4c:
      if (!bVar56) {
code_r0x000140903fd7:
        ppppppbVar25 = pppppppbVar21[9];
        pppppppbVar50[0xee] = pppppppbVar21[8];
        pppppppbVar50[0xef] = ppppppbVar25;
        ppppppbVar25 = *pppppppbVar21;
        ppppppbVar55 = pppppppbVar21[1];
        uVar62 = *(undefined4 *)(pppppppbVar21 + 2);
        uVar63 = *(undefined4 *)((longlong)pppppppbVar21 + 0x14);
        uVar64 = *(undefined4 *)(pppppppbVar21 + 3);
        uVar65 = *(undefined4 *)((longlong)pppppppbVar21 + 0x1c);
        uVar60 = *(undefined4 *)(pppppppbVar21 + 4);
        uVar61 = *(undefined4 *)((longlong)pppppppbVar21 + 0x24);
        uVar10 = *(undefined4 *)(pppppppbVar21 + 5);
        uVar11 = *(undefined4 *)((longlong)pppppppbVar21 + 0x2c);
        uVar12 = *(undefined4 *)((longlong)pppppppbVar21 + 0x34);
        uVar13 = *(undefined4 *)(pppppppbVar21 + 7);
        uVar14 = *(undefined4 *)((longlong)pppppppbVar21 + 0x3c);
        *(undefined4 *)(pppppppbVar50 + 0xec) = *(undefined4 *)(pppppppbVar21 + 6);
        *(undefined4 *)((longlong)pppppppbVar50 + 0x764) = uVar12;
        *(undefined4 *)(pppppppbVar50 + 0xed) = uVar13;
        *(undefined4 *)((longlong)pppppppbVar50 + 0x76c) = uVar14;
        *(undefined4 *)(pppppppbVar50 + 0xea) = uVar60;
        *(undefined4 *)((longlong)pppppppbVar50 + 0x754) = uVar61;
        *(undefined4 *)(pppppppbVar50 + 0xeb) = uVar10;
        *(undefined4 *)((longlong)pppppppbVar50 + 0x75c) = uVar11;
        *(undefined4 *)(pppppppbVar50 + 0xe8) = uVar62;
        *(undefined4 *)((longlong)pppppppbVar50 + 0x744) = uVar63;
        *(undefined4 *)(pppppppbVar50 + 0xe9) = uVar64;
        *(undefined4 *)((longlong)pppppppbVar50 + 0x74c) = uVar65;
        pppppppbVar50[0xe6] = ppppppbVar25;
        pppppppbVar50[0xe7] = ppppppbVar55;
        *(undefined8 *)(puVar46 + -8) = 0x140904027;
        pdb_140d9d590(pppppppbVar50 + 0x96,pppppppbVar50 + 0xe6,pppppppbVar50 + 0xf8);
        unaff_RBX = pppppppbVar50 + 0x46;
code_r0x000140904036:
        *(undefined8 *)(puVar46 + -8) = 0x140904044;
        pub_142e32760(unaff_RBX);
        ppppppbVar25 = pppppppbVar50[0x111];
        *(undefined8 *)(puVar46 + -8) = 0x140904063;
        pub_142e32760(ppppppbVar25 + 0x1a,unaff_RBX,0x1b0);
        pppppppbVar21 = (byte *******)(ulonglong)*(byte *)(ppppppbVar25 + 0x4f);
        goto code_r0x00014090406a;
      }
      ppppppbVar25 = *pppppppbVar21;
      ppppppbVar55 = pppppppbVar21[1];
      uVar62 = *(undefined4 *)(pppppppbVar21 + 2);
      uVar63 = *(undefined4 *)((longlong)pppppppbVar21 + 0x14);
      uVar64 = *(undefined4 *)(pppppppbVar21 + 3);
      uVar65 = *(undefined4 *)((longlong)pppppppbVar21 + 0x1c);
      uVar60 = *(undefined4 *)((longlong)pppppppbVar21 + 0x24);
      uVar61 = *(undefined4 *)(pppppppbVar21 + 5);
      uVar10 = *(undefined4 *)((longlong)pppppppbVar21 + 0x2c);
      *(undefined4 *)(pppppppbVar50 + 0xf4) = *(undefined4 *)(pppppppbVar21 + 4);
      *(undefined4 *)((longlong)pppppppbVar50 + 0x7a4) = uVar60;
      *(undefined4 *)(pppppppbVar50 + 0xf5) = uVar61;
      *(undefined4 *)((longlong)pppppppbVar50 + 0x7ac) = uVar10;
      *(undefined4 *)(pppppppbVar50 + 0xf2) = uVar62;
      *(undefined4 *)((longlong)pppppppbVar50 + 0x794) = uVar63;
      *(undefined4 *)(pppppppbVar50 + 0xf3) = uVar64;
      *(undefined4 *)((longlong)pppppppbVar50 + 0x79c) = uVar65;
      pppppppbVar50[0xf0] = ppppppbVar25;
      pppppppbVar50[0xf1] = ppppppbVar55;
      param_1 = pppppppbVar50 + 0x96;
      arg1 = pppppppbVar50 + 0xf0;
      pppppppbVar52 = pppppppbVar50 + 0xf8;
      puVar43 = puVar46;
code_r0x000140903e87:
      puVar46 = puVar43;
      *(undefined8 *)(puVar46 + -8) = 0x140903e8c;
      pdb_140d9d500(param_1,arg1,pppppppbVar52);
code_r0x000140903e8d:
      *(undefined8 *)(puVar46 + -8) = 0x140903ea9;
      pub_142e32760(pppppppbVar50 + 0x46,pppppppbVar50 + 0x96,0x120);
      pppppppbVar52 = (byte *******)pppppppbVar50[0x111];
      unaff_R15 = pppppppbVar52 + 0x1a;
      *(undefined8 *)(puVar46 + -8) = 0x140903ec8;
      pub_142e32760(unaff_R15,pppppppbVar50 + 0x46,0x120);
      pppppppbVar34 = (byte *******)&UNK_14301e974;
      bVar57 = SCARRY8((longlong)
                       *(int *)(&UNK_14301e974 + (ulonglong)*(byte *)(pppppppbVar52 + 0x3d) * 4),
                       0x14301e974);
      pppppppbVar21 =
           (byte *******)
           (&UNK_14301e974 +
           *(int *)(&UNK_14301e974 + (ulonglong)*(byte *)(pppppppbVar52 + 0x3d) * 4));
code_r0x000140903edd:
      arg1 = unaff_R14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(pppppppbVar21) {
      case (byte *******)0x140903fc4:
        goto code_r0x000140903fc4;
      case (byte *******)0x140904737:
        goto code_r0x000140904737;
      case (byte *******)0x140904763:
        goto code_r0x000140904763;
      case (byte *******)0x14090543e:
        goto code_r0x00014090543e;
      case (byte *******)0x140905458:
        goto code_r0x000140905458;
      case (byte *******)0x140905486:
        goto code_r0x000140905486;
      case (byte *******)0x1409054b4:
        goto code_r0x0001409054b4;
      case (byte *******)0x14301e974:
        goto code_r0x00014301e974;
      }
      goto code_r0x000140903f1b;
    case (byte *******)0x140903edf:
      uVar20 = (ulonglong)*(byte *)(pppppppbVar52 + 0x4f);
      param_1 = (byte *******)&UNK_14301e964;
code_r0x000140903ef4:
                    /* WARNING: Could not recover jumptable at 0x000140903efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppbVar21 =
           (byte *******)
           (*(code *)((longlong)param_1 + (longlong)*(int *)((longlong)param_1 + uVar20 * 4)))();
      return pppppppbVar21;
    case (byte *******)0x140903ef7:
      *(uint *)((longlong)pppppppbVar21 + 1) = *(uint *)((longlong)pppppppbVar21 + 1) | 0x4ce0ffc8;
      pppppppbVar52 = (byte *******)(ulonglong)((int)pppppppbVar52 + 0xd0);
      break;
    case (byte *******)0x140903efd:
      unaff_R15 = pppppppbVar52 + 0x1a;
      break;
    case (byte *******)0x140903fa0:
      if (CARRY8(uVar20,(ulonglong)pppppppbVar34) || pppppppbVar21 == (byte *******)0x0)
      goto code_r0x000140903fa2;
      *(int *)(arg1_00 + 1) = *(int *)(arg1_00 + 1) + 1;
      goto code_r0x000140903fa7;
    case (byte *******)0x140904066:
      if (-1 < (longlong)pppppppbVar21) {
        *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + (char)pppppppbVar21;
      }
code_r0x00014090406a:
      param_1 = (byte *******)&UNK_14301e964;
      lVar23 = (longlong)*(int *)(&UNK_14301e964 + (longlong)pppppppbVar21 * 4);
code_r0x000140904075:
                    /* WARNING: Could not recover jumptable at 0x000140904078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppbVar21 = (byte *******)(*(code *)((longlong)param_1 + lVar23))();
      return pppppppbVar21;
    case (byte *******)0x140904127:
      pcVar24 = (char *)CONCAT71((int7)((ulonglong)pppppppbVar21 >> 8),1);
      *pcVar24 = *pcVar24 + '\x01';
code_r0x00014090412b:
      *(undefined8 *)(puVar46 + -8) = 0x140904139;
      pub_142e32760(pppppppbVar34,unaff_RBX,200);
      pppppppbVar50[0x10f] = (byte ******)(pppppppbVar52 + 0x36);
      *(undefined8 *)(puVar46 + -8) = 0x140904158;
      uVar20 = pdb_1408fdd40();
      if (uVar20 == 2) {
        ppppppbVar25 = pppppppbVar50[0x111];
        *(undefined1 *)(ppppppbVar25 + 0x4f) = 3;
        uVar18 = 3;
        goto code_r0x000140904a97;
      }
      ppppppbVar25 = pppppppbVar50[0x111];
      if (*(char *)(ppppppbVar25 + 0x41) == '\x04') {
        pppppppbVar50[0x10f] = (byte ******)ppppppbVar25[0x42];
        ppppppbVar25 = (byte ******)ppppppbVar25[0x43];
        pppppppbVar50[0x10e] = ppppppbVar25;
        pppppbVar6 = *ppppppbVar25;
        if (pppppbVar6 != (byte *****)0x0) {
          ppppppbVar25 = pppppppbVar50[0x10f];
          *(undefined8 *)(puVar46 + -8) = 0x140904413;
          (*(code *)pppppbVar6)(ppppppbVar25);
        }
        ppppppbVar25 = pppppppbVar50[0x10f];
        pppppbVar6 = pppppppbVar50[0x10e][1];
        if (pppppbVar6 != (byte *****)0x0) {
          pppppbVar36 = pppppppbVar50[0x10e][2];
          *(undefined8 *)(puVar46 + -8) = 0x140904434;
          pub_1406abac0((byte *)ppppppbVar25,(ulonglong)pppppbVar6,(ulonglong)pppppbVar36);
        }
        pppppbVar6 = pppppppbVar50[0x111][0x3c];
        LOCK();
        *pppppbVar6 = (byte ****)((longlong)*pppppbVar6 + -1);
        UNLOCK();
        if (*pppppbVar6 == (byte ****)0x0) {
          ppppppbVar25 = pppppppbVar50[0x111];
          *(undefined8 *)(puVar46 + -8) = 0x14090445b;
          pdb_141746810(ppppppbVar25 + 0x3c);
        }
      }
      else if ((((*(char *)(ppppppbVar25 + 0x41) == '\x03') &&
                (*(char *)(pppppppbVar50[0x111] + 0x4e) == '\x03')) &&
               (*(char *)(pppppppbVar50[0x111] + 0x4d) == '\x03')) &&
              (*(char *)((longlong)pppppppbVar50[0x111] + 0x261) == '\x03')) {
        ppppppbVar25 = pppppppbVar50[0x111];
        *(undefined8 *)(puVar46 + -8) = 0x1409041e9;
        pdb_1400d68e0(ppppppbVar25 + 0x48);
        *(undefined1 *)(pppppppbVar50[0x111] + 0x4c) = 0;
      }
      if ((uVar20 & 1) == 0) {
        pppppppbVar50[0x10b] = (byte ******)unaff_R12;
        if (*(byte *)(unaff_R12 + 5) == 2) {
          pppppbVar6 = pppppppbVar50[0x111][0x30];
          pppppbVar36 = pppppppbVar50[0x111][0x31];
          ppppppbVar25 = unaff_R12[3];
          *(byte *******)(puVar46 + 0x20) = unaff_R12[4];
          *(undefined8 *)(puVar46 + -8) = 0x14090453a;
          pdb_1417d7ad0(pppppppbVar50 + 0x96,pppppbVar6,pppppbVar36,ppppppbVar25);
        }
        else {
          ppppppbVar25 = pppppppbVar50[0x111];
          pppppbVar6 = ppppppbVar25[0x30];
          pppppbVar36 = ppppppbVar25[0x31];
          ppppppbVar55 = unaff_R12[4];
          *(byte *******)(puVar46 + 0x20) = unaff_R12[3];
          *(byte *******)(puVar46 + 0x28) = ppppppbVar55;
          *(undefined8 *)(puVar46 + -8) = 0x14090456e;
          pdb_1417d8230(pppppppbVar50 + 0x96,pppppbVar6,pppppbVar36,ppppppbVar25 + 0x2c);
        }
        ppppppbVar55 = pppppppbVar50[0x96];
        unaff_R12 = (byte *******)pppppppbVar50[0x97];
        if (SBORROW8(0,(longlong)ppppppbVar55)) {
          ppppppbVar25 = pppppppbVar50[0x10b];
          LOCK();
          *ppppppbVar25 = (byte *****)((longlong)*ppppppbVar25 + -1);
          UNLOCK();
          if (*ppppppbVar25 == (byte *****)0x0) {
            *(undefined8 *)(puVar46 + -8) = 0x1409045a2;
            pdb_140cd0de0(pppppppbVar50 + 0x10b);
          }
          goto code_r0x000140904466;
        }
        *(undefined4 *)(pppppppbVar50 + 0x108) = *(undefined4 *)(pppppppbVar50 + 0x9a);
        *(undefined4 *)((longlong)pppppppbVar50 + 0x844) =
             *(undefined4 *)((longlong)pppppppbVar50 + 0x4d4);
        *(undefined4 *)(pppppppbVar50 + 0x109) = *(undefined4 *)(pppppppbVar50 + 0x9b);
        *(undefined4 *)((longlong)pppppppbVar50 + 0x84c) =
             *(undefined4 *)((longlong)pppppppbVar50 + 0x4dc);
        pppppppbVar50[0x106] = pppppppbVar50[0x98];
        pppppppbVar50[0x107] = pppppppbVar50[0x99];
        ppppppbVar25 = pppppppbVar50[0x10b];
        LOCK();
        *ppppppbVar25 = (byte *****)((longlong)*ppppppbVar25 + -1);
        UNLOCK();
        if (*ppppppbVar25 == (byte *****)0x0) {
          *(undefined8 *)(puVar46 + -8) = 0x1409045dd;
          pdb_140cd0de0(pppppppbVar50 + 0x10b);
        }
        ppppppbVar25 = pppppppbVar50[0x111];
        *(undefined8 *)(puVar46 + -8) = 0x1409045f1;
        pdb_14098a860(ppppppbVar25 + 0x32);
        ppppppbVar25 = pppppppbVar50[0x111];
        pppppbVar6 = ppppppbVar25[0x2f];
        if (pppppbVar6 != (byte *****)0x0) {
          pppppbVar36 = ppppppbVar25[0x30];
          *(undefined8 *)(puVar46 + -8) = 0x140904617;
          pub_1406abac0((byte *)pppppbVar36,(ulonglong)pppppbVar6,1);
        }
        ppppppbVar37 = (byte ******)ppppppbVar25[0x28];
        ppppppbVar26 = pppppppbVar50[0x110];
      }
      else {
code_r0x000140904466:
        ppppppbVar25 = pppppppbVar50[0x111];
        *(undefined8 *)(puVar46 + -8) = 0x140904479;
        pdb_14098a860(ppppppbVar25 + 0x32);
        ppppppbVar25 = pppppppbVar50[0x111];
        pppppbVar6 = ppppppbVar25[0x2f];
        if (pppppbVar6 != (byte *****)0x0) {
          pppppbVar36 = ppppppbVar25[0x30];
          *(undefined8 *)(puVar46 + -8) = 0x14090449f;
          pub_1406abac0((byte *)pppppbVar36,(ulonglong)pppppbVar6,1);
        }
        ppppppbVar37 = (byte ******)ppppppbVar25[0x28];
        ppppppbVar55 = (byte ******)0x8000000000000000;
        ppppppbVar26 = pppppppbVar50[0x110];
      }
      if (0 < (longlong)ppppppbVar37) {
        pppppbVar6 = ppppppbVar25[0x29];
        *(undefined8 *)(puVar46 + -8) = 0x1409044ce;
        pub_1406abac0((byte *)pppppbVar6,(ulonglong)ppppppbVar37,1);
      }
      *(undefined4 *)(pppppppbVar50 + 0x102) = *(undefined4 *)(pppppppbVar50 + 0x108);
      *(undefined4 *)((longlong)pppppppbVar50 + 0x814) =
           *(undefined4 *)((longlong)pppppppbVar50 + 0x844);
      *(undefined4 *)(pppppppbVar50 + 0x103) = *(undefined4 *)(pppppppbVar50 + 0x109);
      *(undefined4 *)((longlong)pppppppbVar50 + 0x81c) =
           *(undefined4 *)((longlong)pppppppbVar50 + 0x84c);
      pppppppbVar50[0x100] = pppppppbVar50[0x106];
      pppppppbVar50[0x101] = pppppppbVar50[0x107];
      *(undefined1 *)(ppppppbVar25 + 0x4f) = 1;
      *(undefined8 *)(puVar46 + -8) = 0x1409044f9;
      pdb_140902140(ppppppbVar26);
      goto code_r0x00014090479b;
    case (byte *******)0x140904700:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar46 + -8) = 0x14090470c;
      pdb_142dc8590(&UNK_14301e778);
    case (byte *******)0x14090470d:
      goto code_r0x000140904799;
    case (byte *******)0x140904712:
      pppppppbVar34 = (byte *******)&UNK_14301e778;
      goto code_r0x000140904719;
    case (byte *******)0x140904713:
      pppppppbVar34 = (byte *******)0x4301e778;
code_r0x000140904719:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar46 + -8) = 0x14090471e;
      pdb_142dc8570(pppppppbVar34);
    case (byte *******)0x140904739:
      pppppppbVar50 = (byte *******)0x878;
      goto code_r0x000140904737;
    case (byte *******)0x14090473f:
      goto code_r0x000140904737;
    case (byte *******)0x14090541a:
      pcVar9 = (code *)swi(3);
      pppppppbVar21 = (byte *******)(*pcVar9)();
      return pppppppbVar21;
    case (byte *******)0x140905434:
      arg1 = (byte *******)
             CONCAT71((int7)((ulonglong)pppppppbVar34 >> 8),
                      (char)pppppppbVar34 + *(char *)((longlong)pppppppbVar50 + 0xf));
      unaff_00084f00 = '\x11';
      puVar47 = puVar46 + -8;
      unaff_0008ae00 = puVar46 + -8;
      puVar48 = (undefined8 *)(puVar46 + -8);
      *(byte ********)(puVar46 + -8) = pppppppbVar50;
      cVar2 = '\x10';
      do {
        pppppppbVar50 = pppppppbVar50 + -1;
        puVar48 = puVar48 + -1;
        *puVar48 = *pppppppbVar50;
        cVar2 = cVar2 + -1;
        puVar46 = puVar47;
      } while ('\0' < cVar2);
code_r0x000140905438:
      *(undefined1 **)(puVar46 + (ulonglong)(byte)(unaff_00084f00 - 1) * -8 + -8) = unaff_0008ae00;
      arg1_00 = (byte *******)&UNK_14301e984;
      pppppppbVar34 = arg1;
      goto code_r0x000140905444;
    case (byte *******)0x140905462:
      if ((POPCOUNT((ulonglong)pppppppbVar21 & 0xff) & 1U) == 0) {
LAB_1409053b8:
        *(ulonglong *)(puVar46 + 0x20) = (ulonglong)*(byte *)((longlong)pppppppbVar52 + 0x17);
        *(undefined8 *)(puVar46 + -8) = 0x1409053d4;
        pdb_1417ca2e0(param_1,puVar46 + 0x20,8);
        *(ulonglong *)(puVar46 + 0x20) = (ulonglong)*(byte *)((longlong)pppppppbVar52 + 0x15);
        *(undefined8 *)(puVar46 + -8) = 0x1409053f0;
        pdb_1417ca2e0(param_1,puVar46 + 0x20,8);
        *(ulonglong *)(puVar46 + 0x20) = (ulonglong)*(byte *)((longlong)pppppppbVar52 + 0x16);
        arg1 = (byte *******)(puVar46 + 0x20);
        pppppppbVar52 = (byte *******)0x8;
code_r0x000140905404:
        *(undefined8 *)(puVar46 + -8) = 0x14090540c;
        pppppppbVar21 = (byte *******)pdb_1417ca2e0(param_1,arg1,pppppppbVar52);
code_r0x000140905414:
        return pppppppbVar21;
      }
      if (SCARRY8(uVar20,(longlong)pppppppbVar34)) goto code_r0x000140905466;
      *(byte ********)(puVar46 + 0x30) = pppppppbVar21;
      puVar35 = &UNK_14301e810;
code_r0x000140905474:
      *(undefined **)(puVar46 + 0x20) = puVar35;
      goto code_r0x00014090548b;
    case (byte *******)0x140905491:
      goto code_r0x000140905491;
    case (byte *******)0x14301e950:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pppppppbVar34 = (byte *******)&UNK_14301e974;
    bVar57 = SCARRY8((longlong)
                     *(int *)(&UNK_14301e974 + (ulonglong)*(byte *)(pppppppbVar52 + 0x3d) * 4),
                     0x14301e974);
    pppppppbVar21 =
         (byte *******)
         (&UNK_14301e974 + *(int *)(&UNK_14301e974 + (ulonglong)*(byte *)(pppppppbVar52 + 0x3d) * 4)
         );
    arg1 = unaff_R14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(pppppppbVar52 + 0x3d)) {
    case 0:
      goto code_r0x000140903f1b;
    case 1:
code_r0x000140904763:
      pppppppbVar50[0x10f] = (byte ******)unaff_R15;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar46 + -8) = 0x140904776;
      pdb_142dc8570(&UNK_14301e760);
    case 2:
code_r0x000140904737:
      pppppppbVar50[0x10f] = (byte ******)unaff_R15;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar46 + -8) = 0x14090474a;
      pdb_142dc8590(&UNK_14301e760);
    case 3:
code_r0x000140903fc4:
      ppppppbVar25 = pppppppbVar52[0x3b];
      ppppppbVar55 = pppppppbVar52[0x3c];
      goto code_r0x00014090489f;
    case 4:
code_r0x00014090543e:
      arg1_00 = (byte *******)0x4301e984;
code_r0x000140905444:
                    /* WARNING: Could not recover jumptable at 0x00014090544b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppbVar21 =
           (byte *******)
           (*(code *)((longlong)arg1_00 +
                     (longlong)*(int *)((longlong)arg1_00 + (longlong)in_R9 * 4)))(pppppppbVar34);
      return pppppppbVar21;
    case 5:
code_r0x0001409054b4:
      *(undefined8 *)(puVar46 + -8) = 0x1409054be;
      pppppppbVar21 = (byte *******)pdb_140f66090();
      return pppppppbVar21;
    case 6:
code_r0x000140905458:
      if (!bVar57) {
        pppppppbVar21 = (byte *******)((ulonglong)pppppppbVar21 & 0xffffffffffffff20);
      }
      *(byte ********)(puVar46 + 0x20) = pppppppbVar21;
code_r0x000140905466:
      *(undefined8 *)(puVar46 + -8) = 0x1409054ec;
      pppppppbVar21 = (byte *******)pdb_140f66090();
      return pppppppbVar21;
    case 7:
code_r0x000140905486:
code_r0x00014090548b:
      *(undefined8 *)(puVar46 + -8) = 0x140905490;
      pppppppbVar21 = (byte *******)pdb_140f66090();
code_r0x000140905491:
      return pppppppbVar21;
    default:
code_r0x00014301e974:
      *(byte ********)(puVar46 + -8) = pppppppbVar50;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case 0x2e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2f:
code_r0x00014090464f:
    if (bVar57) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(&UNK_14301e821 + uVar20) = *(int *)(&UNK_14301e821 + uVar20) + -1;
    pbVar22 = (byte *)((longlong)unaff_RBX + (longlong)param_1 * 4 + -0x7b);
    *pbVar22 = *pbVar22;
code_r0x000140904659:
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 | bVar17;
    *(byte *)unaff_RDI = *(byte *)unaff_RDI + bVar29;
code_r0x00014090465f:
    *(uint *)pppppppbVar21 = *(int *)pppppppbVar21 + uVar19;
    *(byte *)((longlong)param_1 + -0x75) = *(byte *)((longlong)param_1 + -0x75) + bVar29;
    *(byte *)(uVar20 + 0x12e01e89d) = bVar29;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x30:
    if (bVar59) {
      *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
      puVar46 = auStack_218;
    }
    else {
      *(uint *)(unaff_RDI + 4) = *(int *)(unaff_RDI + 4) - uVar19;
      puVar46 = auStack_218;
    }
    goto code_r0x000140903e31;
  case 0x31:
    bVar56 = SBORROW4(uVar31,*(int *)(unaff_RDI + 0xb));
    puVar46 = auStack_218;
    goto code_r0x000140903e4c;
  case 0x32:
    goto code_r0x000140903fb2;
  case 0x33:
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    puVar44 = auStack_218;
    pppppppbVar52 = param_3;
    goto code_r0x000140904687;
  case 0x34:
    goto code_r0x000140904659;
  case 0x35:
    lVar23 = CONCAT71(uVar27,bVar17 + 0x81);
    goto code_r0x000140904075;
  case 0x36:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x37:
    *(uint *)pppppppbVar21 = *(int *)pppppppbVar21 + uVar19;
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    pbVar22 = (byte *)((longlong)param_2 + 0x41);
    *pbVar22 = *pbVar22 + (char)((ulonglong)pppppppbVar21 >> 8);
    bVar56 = (char)*pbVar22 < '\0';
    *(undefined4 *)(&UNK_14301ea85 + uVar20) = 0x8b490001;
    pppppppbVar52 = param_3;
    goto code_r0x00014090469f;
  case 0x38:
    goto code_r0x00014090465f;
  case 0x39:
    (&UNK_14301e829)[uVar20] = (&UNK_14301e829)[uVar20] + bVar29;
    uVar20 = (ulonglong)(uVar19 | 0x271aa70);
    goto code_r0x000140903ef4;
  case 0x3a:
    pdb_1417ca2e0(param_2,&pppppppbStack_1f8,8);
    unaff_R14 = (byte *******)(ulonglong)*(uint *)((longlong)unaff_RDI + 0xc);
  case 0x3c:
    uVar62 = *(undefined4 *)(unaff_RDI + 2);
    pppppppbStack_1f8 = unaff_R14;
    pdb_1417ca2e0(param_2,&pppppppbStack_1f8,8);
    puVar46 = auStack_218;
    param_1 = param_2;
    if (unaff_R14 == (byte *******)0x2) {
      pppppppbStack_1f8 = (byte *******)CONCAT44(pppppppbStack_1f8._4_4_,uVar62);
      arg1 = (byte *******)&pppppppbStack_1f8;
      goto code_r0x0001409053aa;
    }
    goto LAB_1409053b8;
  case 0x3b:
    (&UNK_14301e829)[uVar20] = (&UNK_14301e829)[uVar20] & bVar29;
    puVar46 = &stack0xfffffffffffffde0;
    param_1 = param_2;
    goto LAB_1409053b8;
  case 0x3d:
    *(byte *)pppppppbVar21 = *(byte *)pppppppbVar21 + bVar17;
    goto code_r0x0001409053b0;
  case 0x3e:
  case 0x3f:
  case 0x40:
    func_0x00014cff7695();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pppppppbStack_c8 = param_1 + 0x12;
  *(byte *)(param_1 + 0x16) = 0;
  ppppppbVar25 = param_1[0x14];
  ppppppbVar55 = param_1[0x15];
  pppppppbStack_e8 = unaff_R15;
  pppppppbStack_e0 = unaff_R12;
  pppppppbStack_d8 = unaff_R14;
  pppppppbStack_d0 = unaff_RBX;
  pbStack_c0 = unaff_R13;
  pppppppbStack_60 = pppppppbStack_c8;
  *(undefined8 *)(puVar38 + -8) = 0x1408fe0b3;
  pdb_140b78570(&uStack_a8,ppppppbVar55);
  if (SBORROW8(0,(longlong)uStack_a8)) {
    ppppppbStack_108 = (byte ******)0x1;
    ppppppbStack_100 = (byte ******)0x1;
    ppppppbStack_f8 = ppppppbStack_a0;
    *(undefined8 *)(puVar38 + -8) = 0x1408fe0f0;
    pdb_14007ee60();
    *(undefined8 *)(puVar38 + -8) = 0x1408fe0ff;
    ppppppbVar26 = (byte ******)pub_1406abab0(0x18,8);
    if (ppppppbVar26 == (byte ******)0x0) {
                    /* WARNING: Subroutine does not return */
      pppppppbStack_b8 = unaff_R12;
      pbStack_b0 = unaff_R13;
      pppppppbStack_70 = unaff_R14;
      pppppppbStack_68 = unaff_RBX;
      pppppppbStack_58 = unaff_R15;
      *(undefined8 *)(puVar38 + -8) = 0x1408fe57e;
      pdb_142dc7e11(8,0x18);
    }
    ppppppbVar26[2] = (byte *****)ppppppbStack_f8;
    *ppppppbVar26 = (byte *****)ppppppbStack_108;
    ppppppbVar26[1] = (byte *****)ppppppbStack_100;
    *(undefined2 *)(pppppppbStack_50 + 0x16) = 0x100;
    *(byte *)(pppppppbStack_50 + 0x17) = 1;
    ppppppbVar37 = (byte ******)&UNK_14301e140;
    ppppppbVar55 = (byte ******)0x22;
    ppppppbVar25 = (byte ******)&UNK_14301e5c0;
code_r0x0001408fe14a:
    *(byte *)(pppppppbStack_50 + 0x18) = 1;
    pppppppbStack_50[7] = ppppppbVar25;
    pppppppbStack_50[8] = ppppppbVar55;
    pppppppbStack_50[9] = ppppppbVar26;
    pppppppbStack_50[10] = ppppppbVar37;
    uStack_a8 = pppppppbStack_50[7];
    ppppppbStack_a0 = pppppppbStack_50[8];
    ppppppbStack_98 = pppppppbStack_50[9];
    ppppppbStack_90 = pppppppbStack_50[10];
    *(undefined8 *)(puVar38 + -8) = 0x1408fe1a1;
    pdb_142deada0(&uStack_a8);
code_r0x0001408fe1a5:
    pppppppbVar21 = (byte *******)0x1;
  }
  else {
    *(byte *)(pppppppbStack_50 + 0x16) = 0;
    pppppppbStack_178 = pppppppbStack_60;
    pppppbStack_1c8 = (byte *****)uStack_a8;
    pppppbStack_1a0 = (byte *****)uStack_a8;
    ppppppbStack_1c0 = ppppppbStack_a0;
    ppppppbStack_1a8 = ppppppbStack_a0;
    ppppppbVar55 = (byte ******)&uStack_a8;
    pppppppbStack_198 = unaff_R15;
    pppppppbStack_190 = unaff_R12;
    pppppppbStack_188 = unaff_R14;
    pppppppbStack_180 = unaff_RBX;
    pbStack_170 = unaff_R13;
    *(undefined8 *)(puVar38 + -8) = 0x1408fe23c;
    ppppppbVar25 = (byte ******)pdb_141710e30(ppppppbVar25);
    pppppppbStack_50[0x12] = ppppppbVar25;
    pppppppbStack_50[0x13] = ppppppbVar55;
    pppppbVar6 = ppppppbVar55[3];
    pppppppbStack_b8 = unaff_R12;
    pbStack_b0 = unaff_R13;
    pppppppbStack_70 = unaff_R14;
    pppppppbStack_68 = unaff_RBX;
    pppppppbStack_58 = unaff_R15;
    *(undefined8 *)(puVar38 + -8) = 0x1408fe28b;
    (*(code *)pppppbVar6)(&uStack_a8,ppppppbVar25,param_2);
    ppppppbVar37 = ppppppbStack_88;
    ppppppbVar26 = ppppppbStack_90;
    ppppppbVar55 = ppppppbStack_98;
    ppppppbVar25 = ppppppbStack_a0;
    pppppbVar6 = (byte *****)uStack_a8;
    if (uStack_a8 == (byte ******)0x2) {
      *pbStack_b0 = 3;
      *(byte *)pppppppbStack_58 = 3;
      *(byte *)pppppppbStack_68 = 3;
      pppppppbVar21 = (byte *******)0x2;
      bVar17 = 3;
      goto code_r0x0001408fe1b3;
    }
    ppppppbVar32 = pppppppbStack_50[0x12];
    ppppppbVar5 = pppppppbStack_50[0x13];
    pppppbVar36 = *ppppppbVar5;
    if (pppppbVar36 != (byte *****)0x0) {
      *(undefined8 *)(puVar38 + -8) = 0x1408fe31a;
      (*(code *)pppppbVar36)(ppppppbVar32);
    }
    pppppbVar36 = ppppppbVar5[1];
    if (pppppbVar36 != (byte *****)0x0) {
      arg2 = ppppppbVar5[2];
      *(undefined8 *)(puVar38 + -8) = 0x1408fe33b;
      pub_1406abac0((byte *)ppppppbVar32,(ulonglong)pppppbVar36,(ulonglong)arg2);
    }
    *(undefined2 *)(pppppppbStack_50 + 0x16) = 0x100;
    if (((ulonglong)pppppbVar6 & 1) == 0) {
      *(byte *)pppppppbStack_58 = 1;
      ppppppbVar55 = ppppppbVar37;
    }
    else {
      *(byte *)pppppppbStack_58 = 1;
      if (ppppppbVar25 != (byte ******)0x0) goto code_r0x0001408fe14a;
    }
    if (ppppppbVar55[5] == (byte *****)0x0) {
      ppppppbStack_108 = ppppppbVar55 + 2;
      ppppppbStack_100 = (byte ******)pdb_140001020;
      ppppppbStack_f0 = ppppppbVar55;
      *(undefined8 *)(puVar38 + -8) = 0x1408fe3fc;
      pdb_140f60760(&uStack_a8,&UNK_14301e1b0,&ppppppbStack_108);
      ppppppbStack_108 = uStack_a8;
      ppppppbStack_100 = ppppppbStack_a0;
      ppppppbStack_f8 = ppppppbStack_98;
      *(undefined8 *)(puVar38 + -8) = 0x1408fe427;
      ppppppbStack_98 = (byte ******)pdb_140dbd3e0(0,&ppppppbStack_108);
      uStack_a8 = (byte ******)0x1;
      ppppppbStack_a0 = (byte ******)0x1;
      *(undefined8 *)(puVar38 + -8) = 0x1408fe44a;
      pdb_14007ee60();
      *(undefined8 *)(puVar38 + -8) = 0x1408fe459;
      ppppppbVar26 = (byte ******)pub_1406abab0(0x18,8);
      if (ppppppbVar26 == (byte ******)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar38 + -8) = 0x1408fe593;
        pdb_142dc7e11(8,0x18);
      }
      ppppppbVar26[2] = (byte *****)ppppppbStack_98;
      *ppppppbVar26 = (byte *****)uStack_a8;
      ppppppbVar26[1] = (byte *****)ppppppbStack_a0;
      LOCK();
      *ppppppbStack_f0 = (byte *****)((longlong)*ppppppbStack_f0 + -1);
      UNLOCK();
      ppppppbVar37 = (byte ******)&UNK_14301e140;
      ppppppbVar55 = (byte ******)0x22;
      ppppppbVar25 = (byte ******)&UNK_14301e5c0;
      if (*ppppppbStack_f0 == (byte *****)0x0) {
        pppppppbStack_1b0 = pppppppbStack_70;
        pppppppbStack_1b8 = pppppppbStack_68;
        *(undefined8 *)(puVar38 + -8) = 0x1408fe4c0;
        pdb_141746810(&ppppppbStack_f0);
      }
      goto code_r0x0001408fe14a;
    }
    *(byte *)(pppppppbStack_50 + 0x18) = 1;
    pppppppbStack_50[8] = ppppppbVar55;
    pppppppbStack_50[7] = (byte ******)0x0;
    pppppppbVar21 = pppppppbStack_50 + 6;
    pppppppbStack_50[6] = ppppppbVar55;
    *(undefined8 *)(puVar38 + -8) = 0x1408fe3a8;
    uVar53 = pdb_141748780(pppppppbVar21);
    pppppppbVar21 = pppppppbStack_50;
    if ((longlong)pppppbVar36 < 0) {
      uVar54 = 0;
code_r0x0001408fe3b8:
      *(undefined8 *)(puVar38 + -8) = 0x1408fe3c3;
      pdb_142dc7e2a(uVar54,pppppbVar36);
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (pppppbVar36 == (byte *****)0x0) {
      pbVar22 = (byte *)0x1;
    }
    else {
      *(undefined8 *)(puVar38 + -8) = 0x1408fe4da;
      pdb_14007ee60();
      uVar54 = 1;
      *(undefined8 *)(puVar38 + -8) = 0x1408fe4ed;
      pbVar22 = pub_1406abab0((ulonglong)pppppbVar36,1);
      if (pbVar22 == (byte *)0x0) goto code_r0x0001408fe3b8;
      *(undefined8 *)(puVar38 + -8) = 0x1408fe507;
      pub_142e32760(pbVar22,uVar53,pppppbVar36);
    }
    bStack_1d0 = *(byte *)(pppppppbVar21 + 0xc);
    ppppppbVar55 = pppppppbVar21[0xd];
    ppppppbVar25 = &pppppbStack_1e8;
    pppppbStack_1e8 = pppppbVar36;
    pbStack_1e0 = pbVar22;
    pppppbStack_1d8 = pppppbVar36;
    *(undefined8 *)(puVar38 + -8) = 0x1408fe531;
    ppppppbVar55 = (byte ******)pdb_14170d0a0(ppppppbVar55);
    pppppppbStack_50[0xc] = ppppppbVar55;
    pppppppbStack_50[0xd] = ppppppbVar25;
code_r0x0001408fde75:
    pppppbVar6 = ppppppbVar25[3];
    *(undefined8 *)(puVar38 + -8) = 0x1408fde83;
    (*(code *)pppppbVar6)(&uStack_a8,ppppppbVar55,param_2);
    if (uStack_a8 == (byte ******)0x2) {
      pppppppbVar21 = (byte *******)0x2;
      bVar17 = 4;
      goto code_r0x0001408fe1b3;
    }
    ppppppbVar25 = pppppppbStack_50[0xc];
    pppppppbStack_58 = (byte *******)pppppppbStack_50[0xd];
    pppppbVar6 = (byte *****)*pppppppbStack_58;
    pppppppbStack_60 = (byte *******)ppppppbVar25;
    if (pppppbVar6 != (byte *****)0x0) {
      *(undefined8 *)(puVar38 + -8) = 0x1408fdeee;
      (*(code *)pppppbVar6)(ppppppbVar25);
    }
    pppppppbVar21 = pppppppbStack_60;
    pppppbVar6 = (byte *****)pppppppbStack_58[1];
    if (pppppbVar6 != (byte *****)0x0) {
      pppppbVar36 = (byte *****)pppppppbStack_58[2];
      *(undefined8 *)(puVar38 + -8) = 0x1408fdf0f;
      pub_1406abac0((byte *)pppppppbVar21,(ulonglong)pppppbVar6,(ulonglong)pppppbVar36);
    }
    if ((int)uStack_a8 == 1) {
      uStack_a8 = ppppppbStack_a0;
      ppppppbStack_a0 = ppppppbStack_98;
      ppppppbStack_98 = ppppppbStack_90;
      ppppppbStack_90 = ppppppbStack_88;
      *(undefined8 *)(puVar38 + -8) = 0x1408fdf40;
      pdb_142deada0(&uStack_a8);
      ppppppbVar25 = pppppppbStack_50[6];
      LOCK();
      *ppppppbVar25 = (byte *****)((longlong)*ppppppbVar25 + -1);
      UNLOCK();
      if (*ppppppbVar25 == (byte *****)0x0) {
        pppppppbVar21 = pppppppbStack_50 + 6;
        *(undefined8 *)(puVar38 + -8) = 0x1408fdf62;
        pdb_141746810(pppppppbVar21);
      }
      goto code_r0x0001408fe1a5;
    }
    ppppppbVar25 = pppppppbStack_50[6];
    LOCK();
    *ppppppbVar25 = (byte *****)((longlong)*ppppppbVar25 + -1);
    UNLOCK();
    if (*ppppppbVar25 == (byte *****)0x0) {
      pppppppbVar21 = pppppppbStack_50 + 6;
      *(undefined8 *)(puVar38 + -8) = 0x1408fdfcb;
      pdb_141746810(pppppppbVar21);
    }
    pppppppbVar21 = (byte *******)0x0;
  }
code_r0x0001408fe1b1:
  bVar17 = 1;
code_r0x0001408fe1b3:
  *(byte *)(pppppppbStack_50 + 0xb) = bVar17;
  return pppppppbVar21;
code_r0x000140903f1b:
  ((byte *)((longlong)pppppppbVar52 + 0x1e9))[0] = 0;
  ((byte *)((longlong)pppppppbVar52 + 0x1e9))[1] = 0;
  pppppppbVar51 = pppppppbVar52 + 0x24;
  ppppppbVar25 = *unaff_R15;
  ppppppbVar55 = unaff_R15[1];
  ppppppbVar26 = unaff_R15[2];
  ppppppbVar37 = unaff_R15[3];
  uVar62 = *(undefined4 *)((longlong)unaff_R15 + 0x24);
  uVar63 = *(undefined4 *)(unaff_R15 + 5);
  uVar64 = *(undefined4 *)((longlong)unaff_R15 + 0x2c);
  *(undefined4 *)(pppppppbVar52 + 0x28) = *(undefined4 *)(unaff_R15 + 4);
  *(undefined4 *)((longlong)pppppppbVar52 + 0x144) = uVar62;
  *(undefined4 *)(pppppppbVar52 + 0x29) = uVar63;
  *(undefined4 *)((longlong)pppppppbVar52 + 0x14c) = uVar64;
  pppppppbVar52[0x24] = ppppppbVar25;
  pppppppbVar52[0x25] = ppppppbVar55;
  pppppppbVar52[0x26] = ppppppbVar26;
  pppppppbVar52[0x27] = ppppppbVar37;
  pppppppbVar52[0x2a] = pppppppbVar52[0x20];
  pppppppbVar52[0x2b] = pppppppbVar52[0x21];
  *(undefined4 *)(pppppppbVar52 + 0x2c) = *(undefined4 *)(pppppppbVar52 + 0x22);
  *(undefined4 *)((longlong)pppppppbVar52 + 0x164) =
       *(undefined4 *)((longlong)pppppppbVar52 + 0x114);
  *(undefined4 *)(pppppppbVar52 + 0x2d) = *(undefined4 *)(pppppppbVar52 + 0x23);
  *(undefined4 *)((longlong)pppppppbVar52 + 0x16c) =
       *(undefined4 *)((longlong)pppppppbVar52 + 0x11c);
  pppppppbVar52[0x2e] = (byte ******)pppppppbVar51;
  param_1 = (byte *******)pppppppbVar52[0x29];
  pppppppbVar50[0x104] = (byte ******)arg1;
  pppppppbVar50[0x10f] = (byte ******)unaff_R15;
  pppppppbVar50[0x105] = (byte ******)unaff_R12;
  if (param_1 == (byte *******)0x0) {
    pppppppbVar21 = (byte *******)0x8;
    puVar43 = puVar46;
  }
  else {
code_r0x000140903f96:
    unaff_RBX = (byte *******)((longlong)param_1 << 4);
    *(undefined8 *)(puVar46 + -8) = 0x140903fa2;
    pdb_14007ee60();
    unaff_R14 = arg1;
code_r0x000140903fa2:
    arg1_00 = (byte *******)0x8;
code_r0x000140903fa7:
    *(undefined8 *)(puVar46 + -8) = 0x140903faf;
    pppppppbVar21 = (byte *******)pub_1406abab0((ulonglong)unaff_RBX,(ulonglong)arg1_00);
    bVar57 = pppppppbVar21 == (byte *******)0x0;
    puVar42 = puVar46;
    param_2 = param_1;
code_r0x000140903fb2:
    if (bVar57) {
      *(undefined8 *)(puVar42 + -8) = 0x140904786;
      pdb_142dc7e2a(8,unaff_RBX);
      goto code_r0x000140904799;
    }
    pppppppbVar51 = (byte *******)pppppppbVar52[0x2e];
    puVar43 = puVar42;
    param_1 = param_2;
    arg1 = unaff_R14;
  }
  pppppppbVar50[0x110] = (byte ******)(pppppppbVar52 + 0x2f);
  pppppppbVar52[0x2f] = (byte ******)param_1;
  pppppppbVar52[0x30] = (byte ******)pppppppbVar21;
  pppppppbVar52[0x31] = (byte ******)0x0;
  *(byte *)((longlong)pppppppbVar52 + 0x1ea) = 1;
  ppppppbVar25 = pppppppbVar51[4];
  ppppppbVar55 = ppppppbVar25 + (longlong)pppppppbVar51[5] * 10;
  unaff_R12 = (byte *******)0x0;
  for (; ppppppbVar25 != ppppppbVar55; ppppppbVar25 = ppppppbVar25 + 10) {
    *(undefined8 *)(puVar43 + -8) = 0x1409042a5;
    pdb_140f60be0(pppppppbVar50 + 0x10b,ppppppbVar25 + 7);
    if (SBORROW8(0,(longlong)*ppppppbVar25)) {
      ppppppbVar37 = (byte ******)ppppppbVar25[2];
      ppppppbVar32 = (byte ******)ppppppbVar25[3];
      ppppppbVar26 = (byte ******)0x8000000000000000;
    }
    else {
      ppppppbVar26 = (byte ******)ppppppbVar25[2];
      if ((longlong)ppppppbVar26 < 0) {
        uVar53 = 0;
code_r0x0001409043d5:
        *(undefined8 *)(puVar43 + -8) = 0x1409043e0;
        pdb_142dc7e2a(uVar53,ppppppbVar26);
        goto code_r0x000140904799;
      }
      if (ppppppbVar26 == (byte ******)0x0) {
        arg1 = (byte *******)0x1;
        ppppppbVar37 = (byte ******)0x0;
      }
      else {
        pppppbVar6 = ppppppbVar25[1];
        *(undefined8 *)(puVar43 + -8) = 0x1409042eb;
        pdb_14007ee60();
        uVar53 = 1;
        *(undefined8 *)(puVar43 + -8) = 0x1409042fe;
        arg1 = (byte *******)pub_1406abab0((ulonglong)ppppppbVar26,1);
        if (arg1 == (byte *******)0x0) goto code_r0x0001409043d5;
        *(undefined8 *)(puVar43 + -8) = 0x140904318;
        pub_142e32760(arg1,pppppbVar6,ppppppbVar26);
        ppppppbVar37 = ppppppbVar26;
      }
      ppppppbVar32 = (byte ******)
                     CONCAT71((int7)((ulonglong)pppppppbVar50[0x10e] >> 8),
                              *(undefined1 *)(ppppppbVar25 + 3));
      pppppppbVar50[0x10e] = ppppppbVar32;
    }
    pppppppbVar50[0x9c] = (byte ******)ppppppbVar25[6];
    ppppppbVar5 = (byte ******)ppppppbVar25[5];
    pppppppbVar50[0x9a] = (byte ******)ppppppbVar25[4];
    pppppppbVar50[0x9b] = ppppppbVar5;
    pppppppbVar50[0x9f] = pppppppbVar50[0x10d];
    pppppppbVar50[0x9d] = pppppppbVar50[0x10b];
    pppppppbVar50[0x9e] = pppppppbVar50[0x10c];
    pppppppbVar50[0x96] = ppppppbVar26;
    pppppppbVar50[0x97] = (byte ******)arg1;
    pppppppbVar50[0x99] = ppppppbVar32;
    pppppppbVar50[0x98] = ppppppbVar37;
    pppppppbVar21 = pppppppbVar50 + 0x96;
    *(undefined8 *)(puVar43 + -8) = 0x140904390;
    arg1 = (byte *******)pdb_141710980(pppppppbVar52 + 0x2a);
    pppppppbVar50[0x96] = (byte ******)arg1;
    pppppppbVar50[0x97] = (byte ******)pppppppbVar21;
    pppppbVar6 = pppppppbVar50[0x111][0x31];
    if (pppppbVar6 == pppppppbVar50[0x111][0x2f]) {
      ppppppbVar26 = pppppppbVar50[0x110];
      *(undefined8 *)(puVar43 + -8) = 0x1409043cc;
      pdb_142d7e980(ppppppbVar26);
    }
    ppppppbVar26 = pppppppbVar50[0x111];
    pppppbVar36 = ppppppbVar26[0x30];
    pppppbVar36[(longlong)pppppbVar6 * 2] = (byte ****)arg1;
    pppppbVar36[(longlong)pppppbVar6 * 2 + 1] = (byte ****)pppppppbVar21;
    unaff_R12 = (byte *******)((longlong)pppppbVar6 + 1);
    ppppppbVar26[0x31] = (byte *****)unaff_R12;
  }
  if (unaff_R12 == (byte *******)0x0) {
    ppppppbVar25 = (byte ******)0x8;
    param_1 = (byte *******)0x0;
    pppppppbVar52 = (byte *******)pppppppbVar50[0x111];
  }
  else {
    unaff_RBX = (byte *******)((longlong)unaff_R12 * 8);
    *(undefined8 *)(puVar43 + -8) = 0x140904645;
    pdb_14007ee60();
code_r0x000140904645:
    arg1 = (byte *******)0x8;
code_r0x00014090464a:
    *(undefined8 *)(puVar43 + -8) = 0x140904652;
    ppppppbVar25 = (byte ******)pub_1406abab0((ulonglong)unaff_RBX,(ulonglong)arg1);
    pppppppbVar52 = (byte *******)pppppppbVar50[0x111];
    if (ppppppbVar25 == (byte ******)0x0) {
      *(undefined8 *)(puVar43 + -8) = 0x140904796;
      pdb_142dc7e2a(8,unaff_RBX);
code_r0x000140904799:
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    param_1 = (byte *******)pppppppbVar52[0x31];
  }
  pppppppbVar52[0x32] = (byte ******)unaff_R12;
  pppppppbVar52[0x33] = ppppppbVar25;
  puVar44 = puVar43;
code_r0x000140904687:
  pppppppbVar52[0x34] = (byte ******)0x0;
  puVar45 = puVar44;
code_r0x000140904692:
  ((byte *)((longlong)pppppppbVar52 + 0x1e9))[0] = 1;
  ((byte *)((longlong)pppppppbVar52 + 0x1e9))[1] = 0;
  arg1 = (byte *******)pppppppbVar52[0x2f];
  puVar38 = puVar45;
code_r0x0001409046a3:
  pppppppbVar21 = (byte *******)pppppppbVar52[0x30];
  pbVar33 = (byte *)((longlong)param_1 << 4);
  puVar46 = puVar38;
code_r0x0001409046ae:
  pppppppbVar34 = (byte *******)(pbVar33 + (longlong)pppppppbVar21);
  pppppppbVar52[0x35] = (byte ******)pppppppbVar21;
  pppppppbVar52[0x36] = (byte ******)pppppppbVar21;
  pppppppbVar52[0x37] = (byte ******)arg1;
  pppppppbVar52[0x38] = (byte ******)pppppppbVar34;
code_r0x0001409046cd:
  arg1 = (byte *******)pppppppbVar50[0x104];
code_r0x0001409046d4:
  unaff_R15 = (byte *******)pppppppbVar50[0x10f];
  unaff_R12 = (byte *******)pppppppbVar50[0x105];
code_r0x0001409046e2:
  while (pppppppbVar21 != pppppppbVar34) {
    pppppppbVar52[0x36] = (byte ******)(pppppppbVar21 + 2);
    ppppppbVar25 = *pppppppbVar21;
    ppppppbVar55 = pppppppbVar21[1];
    pppppppbVar52[0x39] = ppppppbVar25;
    pppppppbVar52[0x3a] = ppppppbVar55;
    pppppppbVar52[0x3b] = ppppppbVar25;
    pppppppbVar52[0x3c] = ppppppbVar55;
code_r0x00014090489f:
    pppppppbVar50[0x10f] = (byte ******)unaff_R15;
    pppppbVar6 = ppppppbVar55[3];
    *(undefined8 *)(puVar46 + -8) = 0x1409048b3;
    (*(code *)pppppbVar6)(pppppppbVar50 + 0x96,ppppppbVar25,unaff_R12);
    unaff_R14 = arg1;
    if (*(int *)(pppppppbVar50 + 0x96) == 1) {
      ppppppbVar25 = pppppppbVar50[0x111];
      *(undefined1 *)(ppppppbVar25 + 0x3d) = 3;
      goto code_r0x000140904a95;
    }
    ppppppbVar25 = pppppppbVar50[0x97];
    ppppppbVar55 = pppppppbVar50[0x98];
    pppppppbVar50[0xf6] = pppppppbVar50[0x99];
    pppppppbVar50[0xf7] = pppppppbVar50[0x9a];
    pppppppbVar50[0x110] = (byte ******)pppppppbVar50[0x111][0x3b];
    ppppppbVar26 = (byte ******)pppppppbVar50[0x111][0x3c];
    pppppppbVar50[0x10e] = ppppppbVar26;
    pppppbVar6 = *ppppppbVar26;
    if (pppppbVar6 != (byte *****)0x0) {
      ppppppbVar26 = pppppppbVar50[0x110];
      *(undefined8 *)(puVar46 + -8) = 0x140904911;
      (*(code *)pppppbVar6)(ppppppbVar26);
    }
    ppppppbVar26 = pppppppbVar50[0x110];
    ppppppbVar37 = (byte ******)pppppppbVar50[0x10e][1];
    if (ppppppbVar37 != (byte ******)0x0) {
      pppppbVar6 = pppppppbVar50[0x10e][2];
      *(undefined8 *)(puVar46 + -8) = 0x140904932;
      pub_1406abac0((byte *)ppppppbVar26,(ulonglong)ppppppbVar37,(ulonglong)pppppbVar6);
    }
    pppppppbVar52 = (byte *******)pppppppbVar50[0x111];
    if (ppppppbVar25 != (byte ******)0x0) {
      pppppppbVar50[0x98] = pppppppbVar50[0xf6];
      pppppppbVar50[0x99] = pppppppbVar50[0xf7];
      pppppppbVar50[0x96] = ppppppbVar25;
      pppppppbVar50[0x97] = ppppppbVar55;
      *(undefined8 *)(puVar46 + -8) = 0x140904aeb;
      unaff_R12 = (byte *******)pdb_142deada0(pppppppbVar50 + 0x96);
      ppppppbVar25 = pppppppbVar50[0x111];
      *(undefined8 *)(puVar46 + -8) = 0x140904b02;
      pdb_1404ada40(ppppppbVar25 + 0x35);
      ppppppbVar25 = pppppppbVar50[0x111];
      *(undefined8 *)(puVar46 + -8) = 0x140904b16;
      pdb_140969180(ppppppbVar25 + 0x32);
      ppppppbVar25 = pppppppbVar50[0x111];
      *(undefined2 *)((longlong)ppppppbVar25 + 0x1e9) = 0;
      *(undefined8 *)(puVar46 + -8) = 0x140904b33;
      pdb_14098a860(ppppppbVar25 + 0x2a);
      ppppppbVar25 = pppppppbVar50[0x111];
      *(undefined8 *)(puVar46 + -8) = 0x140904b47;
      pdb_14098ce10(ppppppbVar25 + 0x24);
      pppppppbVar50[0x108] = pppppppbVar50[0x80];
      pppppppbVar50[0x109] = pppppppbVar50[0x81];
      pppppppbVar50[0x106] = pppppppbVar50[0x7e];
      pppppppbVar50[0x107] = pppppppbVar50[0x7f];
      *(undefined1 *)(pppppppbVar50[0x111] + 0x3d) = 1;
      ppppppbVar55 = (byte ******)0x8000000000000000;
      goto code_r0x000140904b7c;
    }
    pppppppbVar50[0x110] = ppppppbVar55;
    pppppppbVar50[0x96] = ppppppbVar55;
    ppppppbVar25 = pppppppbVar52[0x34];
    if (ppppppbVar25 == pppppppbVar52[0x32]) {
      *(undefined8 *)(puVar46 + -8) = 0x14090496c;
      pdb_142d7e8a0(pppppppbVar52 + 0x32);
    }
    pppppppbVar52[0x33][(longlong)ppppppbVar25] = (byte *****)pppppppbVar50[0x110];
    pppppppbVar52[0x34] = (byte ******)((longlong)ppppppbVar25 + 1);
    pppppppbVar34 = (byte *******)pppppppbVar52[0x38];
    unaff_R15 = (byte *******)pppppppbVar50[0x10f];
    pppppppbVar21 = (byte *******)pppppppbVar52[0x36];
  }
  pppppppbVar50[0x10f] = (byte ******)unaff_R15;
  pppppppbVar52[0x39] = (byte ******)0x0;
  *(undefined8 *)(puVar46 + -8) = 0x1409049c4;
  pdb_1404ada40(pppppppbVar52 + 0x35);
  ppppppbVar25 = pppppppbVar50[0x111];
  ppppppbVar37 = (byte ******)ppppppbVar25[0x2e];
  *(undefined1 *)((longlong)ppppppbVar25 + 0x1e9) = 0;
  pppppppbVar50[0x98] = (byte ******)ppppppbVar25[0x34];
  ppppppbVar55 = (byte ******)ppppppbVar25[0x33];
  pppppppbVar50[0x96] = (byte ******)ppppppbVar25[0x32];
  pppppppbVar50[0x97] = ppppppbVar55;
  *(undefined8 *)(puVar46 + -8) = 0x140904a09;
  pdb_1417db610(pppppppbVar50 + 0x7c,ppppppbVar37,pppppppbVar50 + 0x96);
  ppppppbVar25 = pppppppbVar50[0x111];
  *(undefined2 *)((longlong)ppppppbVar25 + 0x1e9) = 0;
  *(undefined8 *)(puVar46 + -8) = 0x140904a26;
  pdb_14098a860(ppppppbVar25 + 0x2a);
  ppppppbVar25 = pppppppbVar50[0x111];
  *(undefined8 *)(puVar46 + -8) = 0x140904a3a;
  pdb_14098ce10(ppppppbVar25 + 0x24);
  ppppppbVar55 = pppppppbVar50[0x7c];
  unaff_R12 = (byte *******)pppppppbVar50[0x7d];
  pppppppbVar50[0x106] = pppppppbVar50[0x7e];
  pppppppbVar50[0x107] = pppppppbVar50[0x7f];
  pppppppbVar50[0x108] = pppppppbVar50[0x80];
  pppppppbVar50[0x109] = pppppppbVar50[0x81];
  ppppppbVar25 = pppppppbVar50[0x111];
  *(undefined1 *)(ppppppbVar25 + 0x3d) = 1;
  unaff_R14 = arg1;
  if (ppppppbVar55 == (byte ******)0x8000000000000001) {
code_r0x000140904a95:
    uVar18 = 4;
code_r0x000140904a97:
    *(undefined1 *)(ppppppbVar25 + 0x18) = uVar18;
    *unaff_R14 = (byte ******)0x2;
    uVar18 = 3;
  }
  else {
code_r0x000140904b7c:
    *(undefined4 *)(pppppppbVar50 + 0x102) = *(undefined4 *)(pppppppbVar50 + 0x108);
    *(undefined4 *)((longlong)pppppppbVar50 + 0x814) =
         *(undefined4 *)((longlong)pppppppbVar50 + 0x844);
    *(undefined4 *)(pppppppbVar50 + 0x103) = *(undefined4 *)(pppppppbVar50 + 0x109);
    *(undefined4 *)((longlong)pppppppbVar50 + 0x81c) =
         *(undefined4 *)((longlong)pppppppbVar50 + 0x84c);
    pppppppbVar50[0x100] = pppppppbVar50[0x106];
    pppppppbVar50[0x101] = pppppppbVar50[0x107];
    ppppppbVar25 = pppppppbVar50[0x10f];
    *(undefined8 *)(puVar46 + -8) = 0x140904ba4;
    pdb_140901e70(ppppppbVar25);
code_r0x00014090479b:
    *(undefined4 *)(pppppppbVar50 + 0xfe) = *(undefined4 *)(pppppppbVar50 + 0x102);
    *(undefined4 *)((longlong)pppppppbVar50 + 0x7f4) =
         *(undefined4 *)((longlong)pppppppbVar50 + 0x814);
    *(undefined4 *)(pppppppbVar50 + 0xff) = *(undefined4 *)(pppppppbVar50 + 0x103);
    *(undefined4 *)((longlong)pppppppbVar50 + 0x7fc) =
         *(undefined4 *)((longlong)pppppppbVar50 + 0x81c);
    pppppppbVar50[0xfc] = pppppppbVar50[0x100];
    pppppppbVar50[0xfd] = pppppppbVar50[0x101];
    ppppppbVar25 = pppppppbVar50[0x111];
    *(undefined1 *)(ppppppbVar25 + 0x18) = 1;
    if (SBORROW8(0,(longlong)ppppppbVar55)) {
      *(undefined8 *)(puVar46 + -8) = 0x1409047d5;
      ppppppbVar26 = (byte ******)pdb_142dc6590(unaff_R12);
      ppppppbVar55 = (byte ******)0x1;
      ppppppbVar25 = pppppppbVar50[0x111];
    }
    else {
      *(undefined8 *)(puVar46 + -8) = 0x1409047e9;
      pdb_14007ee60();
      *(undefined8 *)(puVar46 + -8) = 0x1409047f8;
      ppppppbVar26 = (byte ******)pub_1406abab0(0x40,8);
      if (ppppppbVar26 == (byte ******)0x0) {
        pppppppbVar50[0x110] = ppppppbVar55;
        pppppppbVar50[0x10f] = (byte ******)unaff_R12;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar46 + -8) = 0x140904862;
        pdb_142dc7e11(8,0x40);
      }
      *ppppppbVar26 = (byte *****)0x1;
      ppppppbVar26[1] = (byte *****)0x1;
      ppppppbVar26[2] = (byte *****)ppppppbVar55;
      ppppppbVar26[3] = (byte *****)unaff_R12;
      ppppppbVar55 = pppppppbVar50[0xfd];
      ppppppbVar37 = pppppppbVar50[0xfe];
      ppppppbVar32 = pppppppbVar50[0xff];
      ppppppbVar26[4] = (byte *****)pppppppbVar50[0xfc];
      ppppppbVar26[5] = (byte *****)ppppppbVar55;
      ppppppbVar26[6] = (byte *****)ppppppbVar37;
      ppppppbVar26[7] = (byte *****)ppppppbVar32;
      ppppppbVar37 = (byte ******)&UNK_14301e740;
      ppppppbVar55 = (byte ******)0x0;
    }
    *unaff_R14 = ppppppbVar55;
    unaff_R14[1] = ppppppbVar26;
    unaff_R14[2] = ppppppbVar37;
    uVar18 = 1;
  }
  *(undefined1 *)(ppppppbVar25 + 0x5e) = uVar18;
  return unaff_R14;
}

