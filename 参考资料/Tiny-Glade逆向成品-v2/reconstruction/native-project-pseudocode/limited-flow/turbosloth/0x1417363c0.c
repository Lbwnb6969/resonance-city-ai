// VA 0x1417363c0, PDB extent 632 bytes
// turbosloth::asset::impl$44::build::async_block$3<asset::texture::blob::TextureAssetBlob,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014173fc2e) overlaps instruction at (ram,0x00014173fc26)
    */
/* WARNING: Removing unreachable block (ram,0x00014173f5eb) */
/* WARNING: Removing unreachable block (ram,0x00014173f8bf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$44::build::async_block$3<asset::texture::blob::TextureAssetBlob,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 632 */

uint * pdb_1417363c0(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  char cVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  uint *puVar25;
  char *pcVar26;
  uint *puVar27;
  code *UNRECOVERED_JUMPTABLE;
  uint *puVar28;
  uint *puVar29;
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  longlong *plVar32;
  longlong lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  longlong lVar36;
  byte *pbVar37;
  undefined1 *puVar38;
  undefined8 uVar39;
  uint *extraout_RAX;
  undefined *puVar40;
  uint *extraout_RAX_00;
  uint *puVar42;
  uint *puVar43;
  int iVar44;
  undefined1 (*arg1) [16];
  undefined1 (*pauVar45) [16];
  undefined1 *puVar46;
  undefined1 *puVar47;
  char cVar49;
  undefined1 *unaff_RBX;
  uint **ppuVar50;
  uint **ppuVar51;
  uint **ppuVar52;
  uint **ppuVar53;
  uint **ppuVar54;
  uint **ppuVar55;
  uint **ppuVar56;
  uint **ppuVar57;
  undefined1 *puVar58;
  uint **ppuVar59;
  uint **ppuVar60;
  uint **ppuVar61;
  uint **ppuVar62;
  uint **ppuVar63;
  undefined8 *puVar64;
  undefined8 *puVar65;
  undefined8 *unaff_RSI;
  ulonglong *puVar66;
  uint *unaff_RDI;
  uint *in_R11;
  ulonglong unaff_R12;
  uint *unaff_R13;
  uint *unaff_R14;
  uint *unaff_R15;
  bool bVar67;
  unkbyte10 in_ST0;
  undefined *in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 in_XMM1_Qa;
  uint uVar71;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  uint uVar72;
  undefined8 in_XMM2_Qa;
  uint uVar73;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  uint uVar74;
  uint uVar75;
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  uint in_XMM4_Da;
  uint in_XMM4_Db;
  uint in_XMM4_Dc;
  uint in_XMM4_Dd;
  byte *unaff_XMM6_Qa;
  undefined *unaff_XMM6_Qb;
  undefined1 auStackX_10 [24];
  uint in_stack_00000060;
  uint in_stack_00000220;
  char acStack_218 [152];
  char acStack_180 [6];
  undefined1 auStack_17a [42];
  undefined1 auStack_150 [56];
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  uint *puStack_b8;
  undefined1 auStack_b0 [24];
  uint *puStack_98;
  uint *puStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  longlong lStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined7 uVar41;
  char cVar48;
  
  uVar75 = (uint)((ulonglong)param_4 >> 0x20);
  uVar74 = (uint)param_4;
  uVar73 = (uint)((ulonglong)in_XMM2_Qa >> 0x20);
  uVar72 = (uint)in_XMM2_Qa;
  uVar71 = (uint)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar22 = (uint)in_XMM1_Qa;
  uVar39 = (undefined8)in_ST0;
  ppuVar63 = &puStack_b8;
  ppuVar62 = &puStack_b8;
  ppuVar59 = &puStack_b8;
  ppuVar56 = &puStack_b8;
  ppuVar51 = &puStack_b8;
  ppuVar57 = &puStack_b8;
  ppuVar54 = &puStack_b8;
  ppuVar55 = &puStack_b8;
  ppuVar52 = &puStack_b8;
  ppuVar53 = &puStack_b8;
  ppuVar50 = &puStack_b8;
  ppuVar60 = &puStack_b8;
  puVar65 = (undefined8 *)&uStack_38;
  uStack_50 = 0xfffffffffffffffe;
  puVar42 = (uint *)&UNK_14332bd30;
  uVar24 = (ulonglong)*(int *)(&UNK_14332bd30 + (ulonglong)(byte)param_2[0xc] * 4);
  puVar25 = (uint *)(&UNK_14332bd30 + uVar24);
  cVar49 = (char)((ulonglong)unaff_RBX >> 8);
  cVar18 = (char)puVar25;
  iVar20 = (int)puVar25;
  uVar41 = (undefined7)((ulonglong)puVar25 >> 8);
  cVar48 = (char)((ulonglong)param_2 >> 8);
  iVar44 = (int)param_2;
  puVar27 = puVar25;
  puVar43 = puVar42;
  ppuVar61 = &puStack_b8;
  puVar29 = param_1;
  puVar28 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)param_2[0xc]) {
  case 0:
    *(uint **)(param_2 + 8) = param_2;
    param_2[10] = 0;
    param_2[0xb] = 0;
  case 3:
    puStack_68 = param_2 + 8;
    uStack_60 = param_2;
    pdb_140b35590(&puStack_90,puStack_68,(longlong)&uStack_54 + 3);
    if (puStack_90 == (uint *)0x2) {
      bVar19 = 3;
      uVar39 = 1;
    }
    else {
      uVar39 = CONCAT44(uStack_84,uStack_88);
      uVar34 = CONCAT44(uStack_7c,uStack_80);
      pbVar37 = (byte *)CONCAT44(uStack_74,iStack_78);
      puVar40 = (undefined *)CONCAT44(uStack_6c,iStack_70);
      if (*(uint **)(uStack_60 + 10) != (uint *)0x0) {
        puStack_68 = *(uint **)(uStack_60 + 10);
        pdb_140974580();
        pub_1406abac0((byte *)puStack_68,0x38,8);
      }
      if ((int)puStack_90 == 1) {
        uVar39 = *(undefined8 *)(uStack_60 + 4);
        uVar34 = *(undefined8 *)(uStack_60 + 6);
        pdb_14007ee60();
        pbVar37 = pub_1406abab0(0x10,8);
        if (pbVar37 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x10);
        }
        pbVar37[0] = 1;
        pbVar37[1] = 0;
        pbVar37[2] = 0;
        pbVar37[3] = 0;
        pbVar37[4] = 0;
        pbVar37[5] = 0;
        pbVar37[6] = 0;
        pbVar37[7] = 0;
        pbVar37[8] = 1;
        pbVar37[9] = 0;
        pbVar37[10] = 0;
        pbVar37[0xb] = 0;
        pbVar37[0xc] = 0;
        pbVar37[0xd] = 0;
        pbVar37[0xe] = 0;
        pbVar37[0xf] = 0;
        puVar40 = &UNK_14332b300;
      }
      pdb_14097e360();
      *(undefined8 *)(param_1 + 2) = uVar39;
      *(undefined8 *)(param_1 + 4) = uVar34;
      *(byte **)(param_1 + 6) = pbVar37;
      *(undefined **)(param_1 + 8) = puVar40;
      bVar19 = 1;
      uVar39 = 0;
    }
    *(undefined8 *)param_1 = uVar39;
    *(byte *)(uStack_60 + 0xc) = bVar19;
    return param_1;
  case 1:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570(&UNK_14332b2c8);
  case 2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(&UNK_14332b2c8);
  case 4:
    ppuVar50 = (uint **)&stack0xffffffffffffff40;
    *(uint *)(&UNK_14332bd31 + uVar24) = *(uint *)(&UNK_14332bd31 + uVar24) | 0x7d8948c8;
    if (cVar49 != '\0') {
code_r0x0001417366bb:
      uStack_88 = uStack_58;
      uStack_84 = uStack_54;
      uStack_80 = (undefined4)uStack_50;
      uStack_7c = uStack_50._4_4_;
      puStack_98 = puStack_68;
      puStack_90 = uStack_60;
      pdb_14173c8a0(unaff_RSI);
      uVar39 = *(undefined8 *)(unaff_R14 + 0x2a);
      unaff_R14[0x2a] = 1;
      unaff_R14[0x2b] = 0;
      *(undefined4 *)(unaff_RSI + 2) = uStack_88;
      *(undefined4 *)((longlong)unaff_RSI + 0x14) = uStack_84;
      *(undefined4 *)(unaff_RSI + 3) = uStack_80;
      *(undefined4 *)((longlong)unaff_RSI + 0x1c) = uStack_7c;
      *unaff_RSI = puStack_98;
      unaff_RSI[1] = puStack_90;
      *(undefined8 *)(unaff_R14 + 0x34) = uVar39;
      unaff_R14[0x36] = 0;
      unaff_R14[0x37] = 0;
      puVar25 = unaff_R14 + 0x2a;
      goto code_r0x000141736716;
    }
    uRam00000000046348a9 = 0x4634801;
    pub_142e32760(0x46348b1,0x4634809,0x98);
    unaff_RSI = (undefined8 *)0x46348b1;
    pdb_1417251f0(&iStack_70,0x46348b1,param_1);
    if ((char)iStack_70 == '\0') goto code_r0x0001417366bb;
    puVar42 = (uint *)0x3;
code_r0x000141736733:
    puVar25 = (uint *)0x1;
    break;
  case 5:
    goto code_r0x0001417367b1;
  case 6:
    puVar25 = (uint *)CONCAT71(uVar41,cRam00b8c48148000000);
    *(byte *)puVar25 = (byte)*puVar25 + cRam00b8c48148000000;
    break;
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    pcVar26 = (char *)((ulonglong)param_2 & 0xffffffff);
    puVar25 = (uint *)((ulonglong)puVar25 & 0xffffffff);
    *pcVar26 = *pcVar26 + (char)pcVar26;
    pcVar26[-0x39] = pcVar26[-0x39] + '0';
    pcVar26 = (char *)((ulonglong)unaff_RBX & 0xffffffff);
    cVar18 = (char)pcVar26;
    *pcVar26 = *pcVar26 + cVar18;
    *pcVar26 = *pcVar26 + cVar18;
    *pcVar26 = *pcVar26 + cVar18;
    pcVar26[-0x73] = pcVar26[-0x73] + '0';
    pcVar26 = (char *)((ulonglong)unaff_RDI & 0xffffffff);
    *pcVar26 = *pcVar26 + (char)pcVar26;
code_r0x000141736716:
    *(undefined8 *)((longlong)ppuVar50 + -8) = 0x14173672a;
    pdb_140b36d70(&iStack_70,puVar25,&stack0xfffffffffffffff7,param_1);
    if (iStack_70 == 2) {
      puVar42 = (uint *)0x4;
      goto code_r0x000141736733;
    }
    lStack_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = (undefined4)uStack_60;
    uStack_34 = uStack_60._4_4_;
    plVar32 = (longlong *)CONCAT44(uStack_54,uStack_58);
    puStack_40 = puStack_68;
    *(undefined8 *)((longlong)ppuVar50 + -8) = 0x141736758;
    pdb_14097c580(puVar25);
    if (lStack_48 != 0) {
      if (puStack_40 == (uint *)0x0) {
        plVar32 = (longlong *)CONCAT44(uStack_34,uStack_38);
        LOCK();
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (*plVar32 == 0) {
          *(undefined8 *)((longlong)ppuVar50 + -8) = 0x141736790;
          pdb_141746b00(puVar65);
        }
      }
      else {
        LOCK();
        *plVar32 = *plVar32 + -1;
        UNLOCK();
        if (*plVar32 == 0) {
          *(undefined8 *)((longlong)ppuVar50 + -8) = 0x14173677a;
          pdb_140c7a240(&stack0xffffffffffffffd0);
        }
      }
    }
    *(undefined8 *)((longlong)ppuVar50 + -8) = 0x14173679a;
    pdb_14097de90(unaff_R14);
    puVar42 = (uint *)0x1;
    puVar25 = (uint *)0x0;
    break;
  case 9:
    if (puVar25 == (uint *)0x0) {
      uStack_50 = 0xfffffffffffffffe;
      puVar29 = (uint *)&UNK_14332bd30;
      goto code_r0x0001417368b6;
    }
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
    (&UNK_14332bcbd)[uVar24] = (&UNK_14332bcbd)[uVar24] + '0';
    puVar29 = (uint *)((longlong)param_1 + 1);
    pcVar26 = (char *)(CONCAT71(uVar41,(byte)*param_1) & 0xffffffffffffff80);
    *pcVar26 = *pcVar26 + (char)pcVar26;
    param_1 = param_1 + 4;
    uVar22 = *param_1;
    cVar18 = (char)((ulonglong)pcVar26 >> 8);
    *(byte *)param_1 = (byte)*param_1 + cVar18;
    if ((byte)*param_1 == 0 || SCARRY1((byte)uVar22,cVar18) != (char)(byte)*param_1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar67 = false;
    goto code_r0x000141736922;
  case 10:
    goto code_r0x0001417369c6;
  case 0xb:
    if (puVar25 == (uint *)0x0) {
      return (uint *)0x0;
    }
    uStack_60 = (uint *)((ulonglong)uStack_60 & 0xffffffff);
    puVar27 = param_1;
    goto code_r0x0001417369af;
  case 0xc:
code_r0x0001417368b6:
    uStack_50 = 0xfffffffffffffffe;
    puVar42 = (uint *)(&UNK_14332bcb9 + uVar24);
    *puVar42 = *puVar42 >> 0xe | *puVar42 << 0x12;
    puVar42 = (uint *)&UNK_14332bd54;
    lVar33 = (longlong)*(int *)(&UNK_14332bd54 + (ulonglong)(byte)param_2[0xc] * 4);
    puVar25 = (uint *)(&UNK_14332bd54 + lVar33);
    cVar18 = (char)puVar25;
    iVar20 = (int)puVar25;
    uVar41 = (undefined7)((ulonglong)puVar25 >> 8);
    bVar19 = (byte)param_3;
    ppuVar56 = &puStack_b8;
    ppuVar62 = &puStack_b8;
    ppuVar59 = &puStack_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)param_2[0xc]) {
    case 0:
      *(uint **)(param_2 + 8) = param_2;
      param_2[10] = 0;
      param_2[0xb] = 0;
    case 3:
      puStack_68 = param_2 + 8;
      uStack_60 = param_2;
      pdb_140b35ec0(&puStack_90,puStack_68,(longlong)&uStack_54 + 3);
      if (puStack_90 == (uint *)0x2) {
        puVar25 = (uint *)0x3;
        puVar42 = (uint *)0x1;
        puVar27 = puVar29;
      }
      else {
        unaff_RDI = (uint *)CONCAT44(uStack_84,uStack_88);
        unaff_RBX = (undefined1 *)CONCAT44(uStack_7c,uStack_80);
        unaff_XMM6_Qa = (byte *)CONCAT44(uStack_74,iStack_78);
        unaff_XMM6_Qb = (undefined *)CONCAT44(uStack_6c,iStack_70);
        puVar42 = *(uint **)(uStack_60 + 10);
        bVar67 = puVar42 == (uint *)0x0;
        unaff_R14 = puStack_90;
        unaff_R15 = uStack_60;
code_r0x000141736922:
        if (!bVar67) {
          puStack_68 = puVar42;
          pdb_140974580();
          pub_1406abac0((byte *)puStack_68,0x38,8);
          unaff_R15 = uStack_60;
        }
        if ((int)unaff_R14 == 1) {
          unaff_RDI = *(uint **)(unaff_R15 + 4);
          unaff_RBX = *(undefined1 **)(unaff_R15 + 6);
          pdb_14007ee60();
          unaff_XMM6_Qa = pub_1406abab0(0x10,8);
          if (unaff_XMM6_Qa == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x10);
          }
          unaff_XMM6_Qa[0] = 1;
          unaff_XMM6_Qa[1] = 0;
          unaff_XMM6_Qa[2] = 0;
          unaff_XMM6_Qa[3] = 0;
          unaff_XMM6_Qa[4] = 0;
          unaff_XMM6_Qa[5] = 0;
          unaff_XMM6_Qa[6] = 0;
          unaff_XMM6_Qa[7] = 0;
          unaff_XMM6_Qa[8] = 1;
          unaff_XMM6_Qa[9] = 0;
          unaff_XMM6_Qa[10] = 0;
          unaff_XMM6_Qa[0xb] = 0;
          unaff_XMM6_Qa[0xc] = 0;
          unaff_XMM6_Qa[0xd] = 0;
          unaff_XMM6_Qa[0xe] = 0;
          unaff_XMM6_Qa[0xf] = 0;
          unaff_XMM6_Qb = &UNK_14332b300;
        }
        pdb_14097d2c0();
        *(uint **)(puVar29 + 2) = unaff_RDI;
        *(undefined1 **)(puVar29 + 4) = unaff_RBX;
        *(byte **)(puVar29 + 6) = unaff_XMM6_Qa;
        *(undefined **)(puVar29 + 8) = unaff_XMM6_Qb;
        puVar25 = (uint *)0x1;
        puVar42 = (uint *)0x0;
        puVar27 = puVar29;
      }
code_r0x0001417369af:
      *(uint **)puVar27 = puVar42;
      *(byte *)(uStack_60 + 0xc) = (byte)puVar25;
code_r0x0001417369c6:
      return puVar27;
    case 1:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8570(&UNK_14332b2c8);
    case 2:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8590(&UNK_14332b2c8);
    case 4:
      goto code_r0x000141736b3e;
    case 5:
      *(int *)(lVar33 + 0xd07ac863) = *(int *)(lVar33 + 0xd07ac863) + iVar44;
      goto code_r0x000141736c5e;
    case 6:
      *(byte *)puVar25 = (byte)*puVar25 + cVar18;
      *(byte *)(param_2 + 4) = (byte)param_2[4] + cVar49;
      goto code_r0x000141736c56;
    case 7:
      puVar25 = (uint *)(ulonglong)(iVar20 + 0x4332bd54);
code_r0x000141736b3e:
      uStack_50 = 0xfffffffffffffffe;
      puVar65 = (undefined8 *)&uStack_38;
      puVar42 = (uint *)&UNK_14332bd64;
      lVar33 = (longlong)*(int *)(&UNK_14332bd64 + (longlong)puVar25 * 4);
      puVar25 = (uint *)(&UNK_14332bd64 + lVar33);
      cVar18 = (char)puVar25;
      ppuVar60 = &puStack_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(puVar25) {
      case (uint *)0x141736b4e:
        *(uint **)(param_2 + 8) = param_2;
        param_2[10] = 0;
        param_2[0xb] = 0;
      case (uint *)0x141736b5a:
        puStack_68 = param_2 + 8;
        uStack_60 = param_2;
        pdb_140b34c60(&puStack_90,puStack_68,(longlong)&uStack_54 + 3);
        if (puStack_90 == (uint *)0x2) {
          puVar25 = (uint *)0x3;
          puVar42 = (uint *)0x1;
        }
        else {
          unaff_RDI = (uint *)CONCAT44(uStack_84,uStack_88);
          unaff_RBX = (undefined1 *)CONCAT44(uStack_7c,uStack_80);
          unaff_XMM6_Qa = (byte *)CONCAT44(uStack_74,iStack_78);
          unaff_XMM6_Qb = (undefined *)CONCAT44(uStack_6c,iStack_70);
          puVar42 = *(uint **)(uStack_60 + 10);
          bVar67 = puVar42 == (uint *)0x0;
          unaff_R14 = puStack_90;
          unaff_R15 = uStack_60;
code_r0x000141736ba2:
          puVar65 = (undefined8 *)&uStack_38;
          if (!bVar67) {
            puStack_68 = puVar42;
            pdb_140974580();
            pub_1406abac0((byte *)puStack_68,0x38,8);
            unaff_R15 = uStack_60;
          }
          if ((int)unaff_R14 == 1) {
            unaff_RDI = *(uint **)(unaff_R15 + 4);
            unaff_RBX = *(undefined1 **)(unaff_R15 + 6);
            pdb_14007ee60();
            unaff_XMM6_Qa = pub_1406abab0(0x10,8);
            if (unaff_XMM6_Qa == (byte *)0x0) {
              puVar42 = (uint *)0x8;
              param_2 = (uint *)0x10;
code_r0x000141736c56:
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(puVar42,param_2);
            }
            unaff_XMM6_Qa[0] = 1;
            unaff_XMM6_Qa[1] = 0;
            unaff_XMM6_Qa[2] = 0;
            unaff_XMM6_Qa[3] = 0;
            unaff_XMM6_Qa[4] = 0;
            unaff_XMM6_Qa[5] = 0;
            unaff_XMM6_Qa[6] = 0;
            unaff_XMM6_Qa[7] = 0;
            unaff_XMM6_Qa[8] = 1;
            unaff_XMM6_Qa[9] = 0;
            unaff_XMM6_Qa[10] = 0;
            unaff_XMM6_Qa[0xb] = 0;
            unaff_XMM6_Qa[0xc] = 0;
            unaff_XMM6_Qa[0xd] = 0;
            unaff_XMM6_Qa[0xe] = 0;
            unaff_XMM6_Qa[0xf] = 0;
            unaff_XMM6_Qb = &UNK_14332b300;
          }
          pdb_14097dce0();
          *(uint **)(puVar29 + 2) = unaff_RDI;
          *(undefined1 **)(puVar29 + 4) = unaff_RBX;
          *(byte **)(puVar29 + 6) = unaff_XMM6_Qa;
          *(undefined **)(puVar29 + 8) = unaff_XMM6_Qb;
          puVar25 = (uint *)0x1;
          puVar42 = (uint *)0x0;
        }
code_r0x000141736c2b:
        lVar33 = puVar65[-5];
        *(uint **)puVar29 = puVar42;
        *(char *)(lVar33 + 0x30) = (char)puVar25;
        return puVar29;
      case (uint *)0x141736c5e:
code_r0x000141736c5e:
        uStack_50 = 0xfffffffffffffffe;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8590(&UNK_14332b2c8);
      case (uint *)0x141736c6a:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8570(&UNK_14332b2c8);
      case (uint *)0x141736dbe:
        goto code_r0x000141736dbe;
      case (uint *)0x141736dca:
        puVar25 = (uint *)(ulonglong)((int)puVar25 + 0x4332bd64);
        ppuVar60 = &puStack_b8;
code_r0x000141736dbe:
        puVar42 = (uint *)&UNK_14332bd74;
        uVar24 = (ulonglong)*(int *)(&UNK_14332bd74 + (longlong)puVar25 * 4);
        puVar25 = (uint *)(&UNK_14332bd74 + uVar24);
        bVar67 = puVar25 == (uint *)0x0;
        cVar18 = (char)puVar25;
        uVar21 = (uint)puVar25;
        ppuVar57 = ppuVar60;
        ppuVar62 = ppuVar60;
        ppuVar53 = ppuVar60;
        param_1 = unaff_RDI;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(puVar25) {
        case (uint *)0x141736dce:
          *(uint **)(param_2 + 8) = param_2;
          param_2[10] = 0;
          param_2[0xb] = 0;
        case (uint *)0x141736dda:
          puVar65[-5] = param_2;
          puVar65[-6] = param_2 + 8;
          *(undefined8 *)((longlong)ppuVar60 + -8) = 0x141736df3;
          pdb_140b34640(puVar65 + -0xb,param_2 + 8,(longlong)puVar65 + -0x19);
          lVar33 = puVar65[-0xb];
          if (lVar33 == 2) {
            puVar25 = (uint *)0x3;
            puVar42 = (uint *)0x1;
          }
          else {
            unaff_RDI = (uint *)puVar65[-10];
            unaff_RBX = (undefined1 *)puVar65[-9];
            unaff_XMM6_Qa = (byte *)puVar65[-8];
            unaff_XMM6_Qb = (undefined *)puVar65[-7];
            lVar31 = puVar65[-5];
            if (*(longlong *)(lVar31 + 0x28) != 0) {
              puVar65[-6] = *(longlong *)(lVar31 + 0x28);
              *(undefined8 *)((longlong)ppuVar60 + -8) = 0x141736e2d;
              pdb_140974580();
              pbVar37 = (byte *)puVar65[-6];
              *(undefined8 *)((longlong)ppuVar60 + -8) = 0x141736e42;
              pub_1406abac0(pbVar37,0x38,8);
              lVar31 = puVar65[-5];
            }
            if ((int)lVar33 == 1) {
              unaff_RDI = *(uint **)(lVar31 + 0x10);
              unaff_RBX = *(undefined1 **)(lVar31 + 0x18);
              *(undefined8 *)((longlong)ppuVar60 + -8) = 0x141736e59;
              pdb_14007ee60();
              *(undefined8 *)((longlong)ppuVar60 + -8) = 0x141736e68;
              unaff_XMM6_Qa = pub_1406abab0(0x10,8);
              if (unaff_XMM6_Qa == (byte *)0x0) {
                puVar42 = (uint *)0x8;
                param_2 = (uint *)0x10;
                ppuVar52 = ppuVar60;
code_r0x000141736ed6:
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((longlong)ppuVar52 + -8) = 0x141736edb;
                pdb_142dc7e11(puVar42,param_2);
              }
              unaff_XMM6_Qa[0] = 1;
              unaff_XMM6_Qa[1] = 0;
              unaff_XMM6_Qa[2] = 0;
              unaff_XMM6_Qa[3] = 0;
              unaff_XMM6_Qa[4] = 0;
              unaff_XMM6_Qa[5] = 0;
              unaff_XMM6_Qa[6] = 0;
              unaff_XMM6_Qa[7] = 0;
              unaff_XMM6_Qa[8] = 1;
              unaff_XMM6_Qa[9] = 0;
              unaff_XMM6_Qa[10] = 0;
              unaff_XMM6_Qa[0xb] = 0;
              unaff_XMM6_Qa[0xc] = 0;
              unaff_XMM6_Qa[0xd] = 0;
              unaff_XMM6_Qa[0xe] = 0;
              unaff_XMM6_Qa[0xf] = 0;
              unaff_XMM6_Qb = &UNK_14332b300;
            }
            *(undefined8 *)((longlong)ppuVar60 + -8) = 0x141736e99;
            pdb_14097afe0();
code_r0x000141736e9a:
            *(uint **)(puVar29 + 2) = unaff_RDI;
            *(undefined1 **)(puVar29 + 4) = unaff_RBX;
            *(byte **)(puVar29 + 6) = unaff_XMM6_Qa;
            *(undefined **)(puVar29 + 8) = unaff_XMM6_Qb;
            puVar25 = (uint *)0x1;
            puVar42 = (uint *)0x0;
          }
code_r0x000141736eab:
          lVar33 = puVar65[-5];
          *(uint **)puVar29 = puVar42;
          *(char *)(lVar33 + 0x30) = (char)puVar25;
          puVar25 = puVar29;
code_r0x000141736eca:
          return puVar25;
        case (uint *)0x141736ede:
code_r0x000141736ede:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppuVar53 + -8) = 0x141736eea;
          pdb_142dc8590(&UNK_14332b2c8);
        case (uint *)0x141736eea:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppuVar60 + -8) = 0x141736ef6;
          pdb_142dc8570(&UNK_14332b2c8);
        case (uint *)0x14173703e:
code_r0x00014173703e:
          UNRECOVERED_JUMPTABLE =
               (code *)(&UNK_14332bd84 + *(int *)(&UNK_14332bd84 + (longlong)puVar25 * 4));
          goto code_r0x00014173704c;
        case (uint *)0x14173704a:
          UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar21 + 0x4332bd74);
code_r0x00014173704c:
                    /* WARNING: Could not recover jumptable at 0x00014173704c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar29 = (uint *)(*UNRECOVERED_JUMPTABLE)();
          return puVar29;
        case (uint *)0x14173714e:
code_r0x00014173714e:
          *(byte *)puVar25 = (byte)*puVar25 + (char)puVar25;
          *(byte *)(param_2 + 4) = (byte)param_2[4] + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppuVar60 + -8) = 0x14173715b;
          pdb_142dc7e11(puVar42);
        case (uint *)0x14173715a:
          *(int *)(uVar24 + 0xd07ac883) = *(int *)(uVar24 + 0xd07ac883) + (int)param_2;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppuVar60 + -8) = 0x14173716a;
          pdb_142dc8590();
        case (uint *)0x1417372d3:
          param_1 = (uint *)((ulonglong)puVar25 & 0xffffffff);
code_r0x0001417372d5:
          bVar19 = *(byte *)((longlong)param_2 + 0x4a);
          puVar40 = &UNK_14332bd94;
          iVar20 = *(int *)(&UNK_14332bd94 + (ulonglong)bVar19 * 4);
          puVar25 = (uint *)(&UNK_14332bd94 + iVar20);
          *(uint **)(unaff_RBX + 0x70) = param_2;
          cVar18 = (char)puVar25;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(bVar19) {
          case 0:
            *(undefined2 *)(param_2 + 0x12) = 0;
            unaff_R12 = *(ulonglong *)(param_2 + 0xe);
            unaff_R14 = (uint *)(unaff_R12 + 0x30);
            LOCK();
            bVar67 = *(int *)(unaff_R12 + 0x30) == 0;
            if (bVar67) {
              *(int *)(unaff_R12 + 0x30) = 0x3fffffff;
            }
            UNLOCK();
            if (!bVar67) {
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417387ec;
              pdb_142dc6e70(unaff_R14);
            }
            puVar66 = _DAT_143ca8f38;
            if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
              unaff_R15 = (uint *)0x0;
              bVar19 = 0;
              cVar18 = *(char *)(unaff_R12 + 0x38);
              lVar33 = *(longlong *)(unaff_RBX + 0x70);
            }
            else {
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417387f7;
              bVar19 = pdb_142dc79e0();
              bVar19 = bVar19 ^ 1;
              unaff_R15 = (uint *)(ulonglong)bVar19;
              cVar18 = *(char *)(unaff_R12 + 0x38);
              lVar33 = *(longlong *)(unaff_RBX + 0x70);
            }
            if (cVar18 != '\0') {
              *(uint **)(unaff_RBX + 0x280) = unaff_R14;
              unaff_RBX[0x288] = bVar19;
              *(undefined **)((longlong)ppuVar57 + 0x20) = &UNK_14332afe0;
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173884a;
              pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b960);
            }
            *(uint **)(unaff_RBX + 0x98) = unaff_R14;
            cVar18 = (char)unaff_R15;
            unaff_RBX[0xa0] = cVar18;
            plVar32 = *(longlong **)(unaff_R12 + 0x70);
            unaff_R13 = puVar42;
            if (plVar32 == (longlong *)0x0) {
              if (SBORROW8(0,*(longlong *)(unaff_R12 + 0x58))) {
                *(undefined8 *)(unaff_R12 + 0x58) = 0;
                *(undefined8 *)(unaff_R12 + 0x60) = 8;
                *(undefined8 *)(unaff_R12 + 0x68) = 0;
                *(undefined8 *)(lVar33 + 0x20) = 2;
              }
              else {
                *(undefined8 *)(unaff_RBX + 0x280) = 1;
                *(undefined8 *)(unaff_RBX + 0x288) = 1;
                *(undefined8 *)(unaff_RBX + 0x300) = 0;
                *(undefined8 *)(unaff_RBX + 0x328) = 0;
                *(undefined1 (*) [16])(unaff_RBX + 0x500) = (undefined1  [16])0x0;
                *(undefined8 *)(unaff_RBX + 0x510) = 0;
                *(undefined8 *)(unaff_RBX + 0x518) = 1;
                *(undefined8 *)(unaff_RBX + 0x520) = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737d42;
                pdb_14007ee60();
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737d51;
                pbVar37 = pub_1406abab0(0x300,0x80);
                if (pbVar37 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738983;
                  pdb_142dc7e11(0x80,0x300);
                }
                *(uint **)(unaff_RBX + 0x80) = param_1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737d79;
                pub_142e32760(pbVar37,unaff_RBX + 0x280,0x300);
                LOCK();
                lVar33 = *(longlong *)pbVar37;
                *(longlong *)pbVar37 = *(longlong *)pbVar37 + 1;
                UNLOCK();
                if (*(longlong *)pbVar37 == 0 || SCARRY8(lVar33,1) != *(longlong *)pbVar37 < 0)
                goto code_r0x00014173a218;
                *(byte **)(unaff_RBX + 0x280) = pbVar37;
                *(undefined8 *)(unaff_RBX + 0x288) = 0;
                *(byte **)(unaff_RBX + 0x150) = pbVar37;
                lVar33 = *(longlong *)(unaff_R12 + 0x68);
                if (lVar33 == *(longlong *)(unaff_R12 + 0x58)) {
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737db2;
                  pdb_142d7e8a0(unaff_R12 + 0x58);
                }
                *(byte **)(*(longlong *)(unaff_R12 + 0x60) + lVar33 * 8) = pbVar37;
                *(longlong *)(unaff_R12 + 0x68) = lVar33 + 1;
                lVar33 = *(longlong *)(unaff_RBX + 0x70);
                *(byte **)(lVar33 + 0x28) = pbVar37;
                *(undefined8 *)(lVar33 + 0x30) = 0;
                *(undefined8 *)(lVar33 + 0x20) = 1;
                param_1 = *(uint **)(unaff_RBX + 0x80);
                puVar66 = _DAT_143ca8f38;
              }
            }
            else {
              uVar39 = *(undefined8 *)(unaff_R12 + 0x78);
              LOCK();
              lVar31 = *plVar32;
              *plVar32 = *plVar32 + 1;
              UNLOCK();
              if (*plVar32 == 0 || SCARRY8(lVar31,1) != *plVar32 < 0) goto code_r0x00014173a218;
              *(longlong **)(unaff_RBX + 0x150) = plVar32;
              *(undefined8 *)(unaff_RBX + 0x158) = uVar39;
              lVar33 = *(longlong *)(lVar33 + 0x40);
              uVar39 = *(undefined8 *)(unaff_R12 + 0x48);
              uVar34 = *(undefined8 *)(unaff_R12 + 0x50);
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737399;
              pdb_141c34660(unaff_RBX + 0x668,lVar33 + 0x10,uVar39,uVar34);
              uVar24 = 1;
              if ((longlong)*(ulonglong *)(unaff_RBX + 0x668) < 0) {
                uVar24 = *(ulonglong *)(unaff_RBX + 0x668) ^ 0x8000000000000000;
              }
              lVar33 = *(longlong *)(unaff_RBX + 0x70);
              if (uVar24 != 0) {
                if (uVar24 != 1) {
                  if (SBORROW8(0,*(longlong *)(unaff_R12 + 0x58))) {
                    *(undefined8 *)(unaff_R12 + 0x58) = 0;
                    *(undefined8 *)(unaff_R12 + 0x60) = 8;
                    *(undefined8 *)(unaff_R12 + 0x68) = 0;
                    *(undefined8 *)(lVar33 + 0x20) = 2;
                    plVar32 = *(longlong **)(unaff_RBX + 0x150);
                    LOCK();
                    *plVar32 = *plVar32 + -1;
                    lVar33 = *plVar32;
                    UNLOCK();
                  }
                  else {
                    *(undefined8 *)(unaff_RBX + 0x280) = 1;
                    *(undefined8 *)(unaff_RBX + 0x288) = 1;
                    *(undefined8 *)(unaff_RBX + 0x300) = 0;
                    *(undefined8 *)(unaff_RBX + 0x328) = 0;
                    *(undefined1 (*) [16])(unaff_RBX + 0x500) = (undefined1  [16])0x0;
                    *(undefined8 *)(unaff_RBX + 0x510) = 0;
                    *(undefined8 *)(unaff_RBX + 0x518) = 1;
                    *(undefined8 *)(unaff_RBX + 0x520) = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737ef4;
                    pdb_14007ee60();
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737f03;
                    pbVar37 = pub_1406abab0(0x300,0x80);
                    if (pbVar37 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738a11;
                      pdb_142dc7e11(0x80,0x300);
                    }
                    *(uint **)(unaff_RBX + 0x80) = param_1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737f2b;
                    pub_142e32760(pbVar37,unaff_RBX + 0x280,0x300);
                    LOCK();
                    lVar33 = *(longlong *)pbVar37;
                    *(longlong *)pbVar37 = *(longlong *)pbVar37 + 1;
                    UNLOCK();
                    if (*(longlong *)pbVar37 == 0 || SCARRY8(lVar33,1) != *(longlong *)pbVar37 < 0)
                    goto code_r0x00014173a218;
                    *(byte **)(unaff_RBX + 0x280) = pbVar37;
                    *(undefined8 *)(unaff_RBX + 0x288) = 0;
                    *(byte **)(unaff_RBX + 0xc0) = pbVar37;
                    lVar33 = *(longlong *)(unaff_R12 + 0x68);
                    if (lVar33 == *(longlong *)(unaff_R12 + 0x58)) {
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737f64;
                      pdb_142d7e8a0(unaff_R12 + 0x58);
                    }
                    *(byte **)(*(longlong *)(unaff_R12 + 0x60) + lVar33 * 8) = pbVar37;
                    *(longlong *)(unaff_R12 + 0x68) = lVar33 + 1;
                    lVar33 = *(longlong *)(unaff_RBX + 0x70);
                    *(byte **)(lVar33 + 0x28) = pbVar37;
                    *(undefined8 *)(lVar33 + 0x30) = 0;
                    *(undefined8 *)(lVar33 + 0x20) = 1;
                    puVar66 = _DAT_143ca8f38;
                    param_1 = *(uint **)(unaff_RBX + 0x80);
                    plVar32 = *(longlong **)(unaff_RBX + 0x150);
                    LOCK();
                    *plVar32 = *plVar32 + -1;
                    lVar33 = *plVar32;
                    UNLOCK();
                  }
                  if (lVar33 == 0) {
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737fb5;
                    pdb_140c7a240(unaff_RBX + 0x150);
                  }
                  goto code_r0x000141737fb6;
                }
                *(uint **)(unaff_RBX + 0x80) = puVar42;
                uVar24 = *(ulonglong *)(unaff_R12 + 0x48);
code_r0x0001417373e0:
                cVar18 = (char)unaff_R15;
                *(ulonglong *)(unaff_RBX + 0x88) = uVar24;
                unaff_RDI = *(uint **)(unaff_R12 + 0x50);
                puVar29 = param_1;
                if (unaff_RDI != (uint *)0x0) {
                  unaff_R13 = (uint *)(*(longlong *)(unaff_RBX + 0x88) + 0x48);
                  ppuVar54 = ppuVar57;
                  do {
                    uVar24 = *(ulonglong *)(unaff_R13 + -2);
                    if (uVar24 != 0) {
                      pbVar37 = *(byte **)unaff_R13;
                      *(undefined8 *)((longlong)ppuVar54 + -8) = 0x141737435;
                      pub_1406abac0(pbVar37,uVar24,1);
                    }
code_r0x000141737410:
                    unaff_R13 = unaff_R13 + 0x18;
                    unaff_RDI = (uint *)((longlong)unaff_RDI + -1);
                    bVar67 = unaff_RDI == (uint *)0x0;
                    ppuVar60 = ppuVar54;
code_r0x000141737417:
                    cVar18 = (char)unaff_R15;
                    ppuVar54 = ppuVar60;
                    ppuVar57 = ppuVar60;
                  } while (!bVar67);
                }
                lVar33 = *(longlong *)(unaff_R12 + 0x40);
                if (lVar33 != 0) {
                  pbVar37 = *(byte **)(unaff_RBX + 0x88);
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737c5b;
                  pub_1406abac0(pbVar37,lVar33 * 0x60,0x10);
                }
                *(undefined8 *)(unaff_R12 + 0x50) = *(undefined8 *)(unaff_RBX + 0x678);
                uVar39 = *(undefined8 *)(unaff_RBX + 0x670);
                *(longlong *)(unaff_R12 + 0x40) = *(longlong *)(unaff_RBX + 0x668);
                *(undefined8 *)(unaff_R12 + 0x48) = uVar39;
                lVar33 = *(longlong *)(unaff_RBX + 0x70);
                puVar42 = *(uint **)(unaff_RBX + 0x80);
                puVar66 = _DAT_143ca8f38;
                param_1 = puVar29;
              }
              uVar39 = *(undefined8 *)(unaff_RBX + 0x158);
              *(undefined8 *)(lVar33 + 0x28) = *(undefined8 *)(unaff_RBX + 0x150);
              *(undefined8 *)(lVar33 + 0x30) = uVar39;
              *(undefined8 *)(lVar33 + 0x20) = 0;
              unaff_R13 = puVar42;
            }
code_r0x000141737fb6:
            if ((cVar18 == '\0') && ((*puVar66 & 0x7fffffffffffffff) != 0)) {
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738960;
              cVar18 = pdb_142dc79e0();
              if (cVar18 == '\0') {
                *(undefined1 *)(unaff_R12 + 0x38) = 1;
              }
            }
            LOCK();
            uVar22 = *unaff_R14;
            *unaff_R14 = *unaff_R14 + 0xc0000001;
            UNLOCK();
            unaff_R12 = (ulonglong)(uVar22 + 0xc0000001);
            if (0x3fffffff < uVar22 + 0xc0000001) {
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417387de;
              pdb_142dc6fa0(unaff_R14);
            }
            plVar32 = plRam0000000143cad8b0;
            in_R11 = *(uint **)(unaff_RBX + 0x70);
            if (*(longlong *)(in_R11 + 8) != 0) {
              if ((int)*(longlong *)(in_R11 + 8) != 1) {
                *(uint **)(unaff_RBX + 0x80) = unaff_R13;
                plVar32 = *(longlong **)(in_R11 + 0xe);
                LOCK();
                lVar33 = *plVar32;
                *plVar32 = *plVar32 + 1;
                UNLOCK();
                if (*plVar32 == 0 || SCARRY8(lVar33,1) != *plVar32 < 0) goto code_r0x00014173a218;
                *(longlong **)(in_R11 + 0x16) = plVar32;
                *(byte *)(in_R11 + 0x18) = 1;
                puVar46 = (undefined1 *)(*(longlong *)(in_R11 + 0x10) + 0x10);
                uVar39 = *(undefined8 *)(*(longlong *)(in_R11 + 0xe) + 0x20);
                uVar34 = *(undefined8 *)(*(longlong *)(in_R11 + 0xe) + 0x28);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417383e6;
                pdb_141805d60(unaff_RBX + 0x1c0,puVar46,uVar39,uVar34);
                plVar5 = plRam0000000143cad8a8;
                plVar32 = plRam0000000143cad898;
                if (SBORROW8(0,*(longlong *)(unaff_RBX + 0x1d0))) {
                  lVar33 = *(longlong *)(unaff_RBX + 0x70);
                  puVar42 = *(uint **)(unaff_RBX + 0x80);
                  if (*_DAT_143ca4b08 < 3) {
                    bVar19 = *(byte *)(plRam0000000143cad898 + 2);
                    puVar46 = (undefined1 *)(ulonglong)bVar19;
                    if (2 < bVar19) {
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417391e4;
                      uVar22 = pdb_142db8070(plRam0000000143cad898);
                      puVar46 = (undefined1 *)(ulonglong)uVar22;
                      lVar33 = *(longlong *)(unaff_RBX + 0x70);
                      puVar42 = *(uint **)(unaff_RBX + 0x80);
                      if ((char)uVar22 != '\0') goto code_r0x000141738431;
                      goto code_r0x0001417391fa;
                    }
                    if (bVar19 == 0) goto code_r0x0001417391fa;
code_r0x000141738431:
                    lVar33 = *plVar32;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738439;
                    cVar18 = pdb_140dd7f60(lVar33);
                    lVar33 = *(longlong *)(unaff_RBX + 0x70);
                    puVar42 = *(uint **)(unaff_RBX + 0x80);
                    if (cVar18 == '\0') goto code_r0x0001417391fa;
                    lVar31 = *plVar32;
                    uVar24 = *(ulonglong *)(lVar31 + 0x38);
                    if (uVar24 == 0) {
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a073;
                      pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                      goto code_r0x00014173a218;
                    }
                    uVar39 = *(undefined8 *)(lVar31 + 0x30);
                    uVar34 = *(undefined8 *)(lVar31 + 0x40);
                    uVar35 = *(undefined8 *)(lVar31 + 0x48);
                    *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
                    *(ulonglong *)(unaff_RBX + 200) = uVar24;
                    *(undefined8 *)(unaff_RBX + 0xd0) = uVar34;
                    *(undefined8 *)(unaff_RBX + 0xd8) = uVar35;
                    *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                    *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b168;
                    *(undefined8 *)(unaff_RBX + 0xf8) = 0x1d;
                    if (uVar24 == 1) {
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a0af;
                      pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                      goto code_r0x00014173a218;
                    }
                    *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
                    *(ulonglong *)(unaff_RBX + 0xa0) = uVar24;
                    *(undefined8 *)(unaff_RBX + 0xa8) = uVar34;
                    *(undefined8 *)(unaff_RBX + 0xb0) = uVar35;
                    *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                    *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(lVar33 + 0x38) + 0x20;
                    if (uVar24 < 3) {
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a0eb;
                      pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                      goto code_r0x00014173a218;
                    }
                    *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
                    *(ulonglong *)(unaff_RBX + 0x158) = uVar24;
                    *(undefined8 *)(unaff_RBX + 0x160) = uVar34;
                    *(undefined8 *)(unaff_RBX + 0x168) = uVar35;
                    *(undefined8 *)(unaff_RBX + 0x170) = 2;
                    *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                    *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
                    *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                    *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                    *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
                    *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                    puVar38 = unaff_RBX + 0x150;
                    *(undefined1 **)(unaff_RBX + 0x2b0) = puVar38;
                    *(longlong *)(unaff_RBX + 0x2b8) = lVar33 + 0x10;
                    *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                    *(undefined1 **)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
                    *(undefined8 *)(unaff_RBX + 0x1c8) = 3;
                    *(longlong *)(unaff_RBX + 0x1d0) = lVar31 + 0x30;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417385c5;
                    pdb_14173b8e0(unaff_RBX + 0x1c0);
code_r0x00014173941e:
                    lVar33 = *(longlong *)(unaff_RBX + 0x70);
                    puVar42 = *(uint **)(unaff_RBX + 0x80);
                    puVar47 = puVar38;
                  }
                  else {
code_r0x0001417391fa:
                    plVar32 = plRam0000000143cad898;
                    puVar47 = puVar46;
                    if ((*_DAT_143ca4ab0 == '\0') && (2 < *_DAT_143ca8e90)) {
                      lVar31 = *plRam0000000143cad898;
                      uVar39 = *(undefined8 *)(lVar31 + 0x20);
                      uVar34 = *(undefined8 *)(lVar31 + 0x28);
                      *(undefined8 *)(unaff_RBX + 0x628) = 3;
                      *(undefined8 *)(unaff_RBX + 0x630) = uVar39;
                      *(undefined8 *)(unaff_RBX + 0x638) = uVar34;
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739248;
                      puVar38 = (undefined1 *)pdb_140f33290();
                      puVar47 = unaff_RBX + 0x628;
                      UNRECOVERED_JUMPTABLE = *(code **)(puVar46 + 0x18);
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173925e;
                      cVar18 = (*UNRECOVERED_JUMPTABLE)(puVar38);
                      lVar33 = *(longlong *)(unaff_RBX + 0x70);
                      puVar42 = *(uint **)(unaff_RBX + 0x80);
                      if (cVar18 != '\0') {
                        lVar36 = *plVar32;
                        uVar24 = *(ulonglong *)(lVar36 + 0x38);
                        if (uVar24 == 0) {
                          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a18d;
                          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                          goto code_r0x00014173a218;
                        }
                        uVar39 = *(undefined8 *)(lVar36 + 0x30);
                        uVar34 = *(undefined8 *)(lVar36 + 0x40);
                        uVar35 = *(undefined8 *)(lVar36 + 0x48);
                        *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
                        *(ulonglong *)(unaff_RBX + 200) = uVar24;
                        *(undefined8 *)(unaff_RBX + 0xd0) = uVar34;
                        *(undefined8 *)(unaff_RBX + 0xd8) = uVar35;
                        *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                        *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b168;
                        *(undefined8 *)(unaff_RBX + 0x110) = 0x1d;
                        if (uVar24 == 1) {
                          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a1c6;
                          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                          goto code_r0x00014173a218;
                        }
                        *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
                        *(ulonglong *)(unaff_RBX + 0xa0) = uVar24;
                        *(undefined8 *)(unaff_RBX + 0xa8) = uVar34;
                        *(undefined8 *)(unaff_RBX + 0xb0) = uVar35;
                        *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                        *(longlong *)(unaff_RBX + 0x120) = *(longlong *)(lVar33 + 0x38) + 0x20;
                        if (uVar24 < 3) {
                          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a1fc;
                          pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b150);
                          goto code_r0x00014173a218;
                        }
                        *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
                        *(ulonglong *)(unaff_RBX + 0x158) = uVar24;
                        *(undefined8 *)(unaff_RBX + 0x160) = uVar34;
                        *(undefined8 *)(unaff_RBX + 0x168) = uVar35;
                        *(undefined8 *)(unaff_RBX + 0x170) = 2;
                        *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                        *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                        *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                        *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                        *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
                        *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                        *(undefined1 **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                        *(longlong *)(unaff_RBX + 0x2b8) = lVar33 + 0x10;
                        *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                        *(undefined1 **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                        *(undefined8 *)(unaff_RBX + 0xf8) = 3;
                        *(longlong *)(unaff_RBX + 0x100) = lVar36 + 0x30;
                        *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x638);
                        *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x628);
                        *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x630);
                        *(undefined1 **)((longlong)ppuVar57 + 0x20) = unaff_RBX + 0xf0;
                        *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173941d;
                        pdb_140dd7f80(lVar31,puVar38,puVar46,unaff_RBX + 0x1c0);
                        goto code_r0x00014173941e;
                      }
                    }
                  }
                  uVar39 = *(undefined8 *)(*(longlong *)(lVar33 + 0x38) + 0x10);
                  UNRECOVERED_JUMPTABLE =
                       *(code **)(*(longlong *)(*(longlong *)(lVar33 + 0x38) + 0x18) + 0x28);
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739438;
                  uVar39 = (*UNRECOVERED_JUMPTABLE)(uVar39);
                  *(undefined8 *)(unaff_RBX + 0x148) = uVar39;
                  *(undefined1 **)(unaff_RBX + 0x140) = puVar47;
                  lVar33 = *(longlong *)(unaff_RBX + 0x70);
                  *(undefined1 *)(lVar33 + 0x49) = 1;
                  plVar32 = *(longlong **)(lVar33 + 0x40);
                  LOCK();
                  lVar33 = *plVar32;
                  *plVar32 = *plVar32 + 1;
                  UNLOCK();
                  if (*plVar32 == 0 || SCARRY8(lVar33,1) != *plVar32 < 0) goto code_r0x00014173a218;
                  *(longlong **)(unaff_RBX + 0x80) = plVar32;
                  *(longlong **)(unaff_RBX + 0x98) = plVar32;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739477;
                  pdb_1417473a0(unaff_RBX + 0x150);
                  *(undefined8 *)(unaff_RBX + 0x280) = 1;
                  *(undefined8 *)(unaff_RBX + 0x288) = 1;
                  *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x150);
                  *(undefined8 *)(unaff_RBX + 0x298) = *(undefined8 *)(unaff_RBX + 0x158);
                  *(undefined4 *)(unaff_RBX + 0x2a0) = *(undefined4 *)(unaff_RBX + 0x160);
                  *(undefined4 *)(unaff_RBX + 0x2a4) = *(undefined4 *)(unaff_RBX + 0x164);
                  *(undefined4 *)(unaff_RBX + 0x2a8) = *(undefined4 *)(unaff_RBX + 0x168);
                  *(undefined4 *)(unaff_RBX + 0x2ac) = *(undefined4 *)(unaff_RBX + 0x16c);
                  *(undefined4 *)(unaff_RBX + 0x2b0) = *(undefined4 *)(unaff_RBX + 0x170);
                  *(undefined4 *)(unaff_RBX + 0x2b4) = *(undefined4 *)(unaff_RBX + 0x174);
                  *(undefined4 *)(unaff_RBX + 0x2b8) = *(undefined4 *)(unaff_RBX + 0x178);
                  *(undefined4 *)(unaff_RBX + 700) = *(undefined4 *)(unaff_RBX + 0x17c);
                  *(undefined4 *)(unaff_RBX + 0x2c0) = *(undefined4 *)(unaff_RBX + 0x180);
                  *(undefined4 *)(unaff_RBX + 0x2c4) = *(undefined4 *)(unaff_RBX + 0x184);
                  *(undefined4 *)(unaff_RBX + 0x2c8) = *(undefined4 *)(unaff_RBX + 0x188);
                  *(undefined4 *)(unaff_RBX + 0x2cc) = *(undefined4 *)(unaff_RBX + 0x18c);
                  *(undefined8 *)(unaff_RBX + 0x2d0) = *(undefined8 *)(unaff_RBX + 400);
                  *(undefined8 *)(unaff_RBX + 0x2d8) = *(undefined8 *)(unaff_RBX + 0x198);
                  *(undefined8 *)(unaff_RBX + 0x2e0) = *(undefined8 *)(unaff_RBX + 0x1a0);
                  *(undefined8 *)(unaff_RBX + 0x2e8) = *(undefined8 *)(unaff_RBX + 0x1a8);
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417394e9;
                  pdb_14007ee60();
                  uVar39 = 8;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417394f8;
                  pbVar37 = pub_1406abab0(0x70,8);
                  if (pbVar37 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739612;
                    pdb_142dc7e11(8,0x70);
                  }
                  uVar34 = *(undefined8 *)(unaff_RBX + 0x2e8);
                  *(undefined8 *)(pbVar37 + 0x60) = *(undefined8 *)(unaff_RBX + 0x2e0);
                  *(undefined8 *)(pbVar37 + 0x68) = uVar34;
                  uVar34 = *(undefined8 *)(unaff_RBX + 0x2d8);
                  *(undefined8 *)(pbVar37 + 0x50) = *(undefined8 *)(unaff_RBX + 0x2d0);
                  *(undefined8 *)(pbVar37 + 0x58) = uVar34;
                  uVar34 = *(undefined8 *)(unaff_RBX + 0x2c8);
                  *(undefined8 *)(pbVar37 + 0x40) = *(undefined8 *)(unaff_RBX + 0x2c0);
                  *(undefined8 *)(pbVar37 + 0x48) = uVar34;
                  uVar34 = *(undefined8 *)(unaff_RBX + 0x280);
                  uVar35 = *(undefined8 *)(unaff_RBX + 0x288);
                  uVar4 = *(undefined8 *)(unaff_RBX + 0x290);
                  uVar2 = *(undefined8 *)(unaff_RBX + 0x298);
                  uVar23 = *(undefined4 *)(unaff_RBX + 0x2a0);
                  uVar7 = *(undefined4 *)(unaff_RBX + 0x2a4);
                  uVar8 = *(undefined4 *)(unaff_RBX + 0x2a8);
                  uVar9 = *(undefined4 *)(unaff_RBX + 0x2ac);
                  uVar10 = *(undefined4 *)(unaff_RBX + 0x2b4);
                  uVar11 = *(undefined4 *)(unaff_RBX + 0x2b8);
                  uVar12 = *(undefined4 *)(unaff_RBX + 700);
                  *(undefined4 *)(pbVar37 + 0x30) = *(undefined4 *)(unaff_RBX + 0x2b0);
                  *(undefined4 *)(pbVar37 + 0x34) = uVar10;
                  *(undefined4 *)(pbVar37 + 0x38) = uVar11;
                  *(undefined4 *)(pbVar37 + 0x3c) = uVar12;
                  *(undefined4 *)(pbVar37 + 0x20) = uVar23;
                  *(undefined4 *)(pbVar37 + 0x24) = uVar7;
                  *(undefined4 *)(pbVar37 + 0x28) = uVar8;
                  *(undefined4 *)(pbVar37 + 0x2c) = uVar9;
                  *(undefined8 *)(pbVar37 + 0x10) = uVar4;
                  *(undefined8 *)(pbVar37 + 0x18) = uVar2;
                  *(undefined8 *)pbVar37 = uVar34;
                  *(undefined8 *)(pbVar37 + 8) = uVar35;
                  puVar65 = *(undefined8 **)(unaff_RBX + 0x70);
                  plVar32 = (longlong *)*puVar65;
                  uVar34 = *(undefined8 *)(unaff_RBX + 0x148);
                  if (plVar32 != (longlong *)0x0) {
                    uVar39 = puVar65[1];
                    LOCK();
                    lVar33 = *plVar32;
                    *plVar32 = *plVar32 + 1;
                    UNLOCK();
                    if (*plVar32 == 0 || SCARRY8(lVar33,1) != *plVar32 < 0)
                    goto code_r0x00014173a218;
                  }
                  *(undefined1 *)(puVar65 + 9) = 1;
                  puVar65[0xf] = *(undefined8 *)(unaff_RBX + 0x80);
                  puVar65[0x10] = pbVar37;
                  puVar65[0x11] = plVar32;
                  puVar65[0x12] = uVar39;
                  LOCK();
                  lVar33 = *(longlong *)pbVar37;
                  *(longlong *)pbVar37 = *(longlong *)pbVar37 + 1;
                  UNLOCK();
                  if (*(longlong *)pbVar37 == 0 || SCARRY8(lVar33,1) != *(longlong *)pbVar37 < 0)
                  goto code_r0x00014173a218;
                  puVar65[10] = pbVar37;
                  *(undefined1 *)((longlong)puVar65 + 0x49) = 0;
                  *(undefined1 *)(puVar65 + 9) = 0;
                  uVar39 = puVar65[0xf];
                  uVar35 = puVar65[0x10];
                  uVar23 = *(undefined4 *)((longlong)puVar65 + 0x8c);
                  uVar7 = *(undefined4 *)(puVar65 + 0x12);
                  uVar8 = *(undefined4 *)((longlong)puVar65 + 0x94);
                  *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(puVar65 + 0x11);
                  *(undefined4 *)(unaff_RBX + 0x294) = uVar23;
                  *(undefined4 *)(unaff_RBX + 0x298) = uVar7;
                  *(undefined4 *)(unaff_RBX + 0x29c) = uVar8;
                  *(undefined8 *)(unaff_RBX + 0x280) = uVar39;
                  *(undefined8 *)(unaff_RBX + 0x288) = uVar35;
                  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(unaff_RBX + 0x140) + 0x30);
                  *(undefined8 *)(unaff_RBX + 0x1f0) = uVar34;
                  *(longlong *)(unaff_RBX + 0x1f8) = *(longlong *)(unaff_RBX + 0x140);
                  puVar46 = unaff_RBX + 0x280;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417395eb;
                  uVar39 = (*UNRECOVERED_JUMPTABLE)();
                  lVar33 = *(longlong *)(unaff_RBX + 0x70);
                  *(undefined8 *)(lVar33 + 0x68) = uVar39;
                  *(undefined1 **)(lVar33 + 0x70) = puVar46;
                  goto code_r0x00014173743f;
                }
                uVar39 = *(undefined8 *)(unaff_RBX + 0x1c0);
                pbVar37 = *(byte **)(unaff_RBX + 0x1c8);
                *(undefined8 *)(unaff_RBX + 0x658) = uVar39;
                *(byte **)(unaff_RBX + 0x660) = pbVar37;
                *(undefined8 *)(unaff_RBX + 0x130) = *(undefined8 *)(unaff_RBX + 0x1e0);
                *(undefined8 *)(unaff_RBX + 0x120) = *(undefined8 *)(unaff_RBX + 0x1d0);
                *(undefined8 *)(unaff_RBX + 0x128) = *(undefined8 *)(unaff_RBX + 0x1d8);
                if (*_DAT_143ca4b08 < 2) {
                  bVar19 = *(byte *)(plRam0000000143cad8a8 + 2);
                  puVar46 = (undefined1 *)(ulonglong)bVar19;
                  if (2 < bVar19) {
                    *(undefined8 *)(unaff_RBX + 0x88) = uVar39;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173962b;
                    uVar22 = pdb_142db8070(plRam0000000143cad8a8);
                    puVar46 = (undefined1 *)(ulonglong)uVar22;
                    uVar39 = *(undefined8 *)(unaff_RBX + 0x88);
                    if ((char)uVar22 != '\0') goto code_r0x000141738635;
                    goto code_r0x00014173963d;
                  }
                  if (bVar19 == 0) goto code_r0x00014173963d;
code_r0x000141738635:
                  *(undefined8 *)(unaff_RBX + 0x88) = uVar39;
                  lVar33 = *plVar5;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738644;
                  cVar18 = pdb_140dd7f60(lVar33);
                  uVar39 = *(undefined8 *)(unaff_RBX + 0x88);
                  if (cVar18 == '\0') goto code_r0x00014173963d;
                  lVar33 = *plVar5;
                  uVar24 = *(ulonglong *)(lVar33 + 0x38);
                  if (uVar24 == 0) {
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a091;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                    goto code_r0x00014173a218;
                  }
                  uVar39 = *(undefined8 *)(lVar33 + 0x30);
                  uVar34 = *(undefined8 *)(lVar33 + 0x40);
                  uVar35 = *(undefined8 *)(lVar33 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
                  *(ulonglong *)(unaff_RBX + 200) = uVar24;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar34;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar35;
                  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                  *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b130;
                  *(undefined8 *)(unaff_RBX + 0x110) = 0x39;
                  if (uVar24 == 1) {
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a0cd;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar24;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar34;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar35;
                  *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                  *(longlong *)(unaff_RBX + 0x220) =
                       *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x20;
                  if (uVar24 < 3) {
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a109;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar24;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar34;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar35;
                  *(undefined8 *)(unaff_RBX + 0x170) = 2;
                  *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x220;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(undefined1 **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                  *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(undefined1 **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                  *(undefined8 *)(unaff_RBX + 0xf8) = 3;
                  *(longlong *)(unaff_RBX + 0x100) = lVar33 + 0x30;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417387d0;
                  pdb_14173b830(unaff_RBX + 0xf0);
code_r0x000141739867:
                  uVar39 = *(undefined8 *)(unaff_RBX + 0x88);
                }
                else {
code_r0x00014173963d:
                  plVar32 = plRam0000000143cad8a8;
                  if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                    *(undefined8 *)(unaff_RBX + 0x88) = uVar39;
                    param_1 = (uint *)*plRam0000000143cad8a8;
                    uVar39 = *(undefined8 *)(param_1 + 8);
                    uVar34 = *(undefined8 *)(param_1 + 10);
                    *(undefined8 *)(unaff_RBX + 0x610) = 4;
                    *(undefined8 *)(unaff_RBX + 0x618) = uVar39;
                    *(undefined8 *)(unaff_RBX + 0x620) = uVar34;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739691;
                    uVar34 = pdb_140f33290();
                    UNRECOVERED_JUMPTABLE = *(code **)(puVar46 + 0x18);
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417396a7;
                    cVar18 = (*UNRECOVERED_JUMPTABLE)(uVar34,unaff_RBX + 0x610);
                    uVar39 = *(undefined8 *)(unaff_RBX + 0x88);
                    if (cVar18 != '\0') {
                      lVar33 = *plVar32;
                      uVar24 = *(ulonglong *)(lVar33 + 0x38);
                      if (uVar24 == 0) {
                        *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a1ab;
                        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                        goto code_r0x00014173a218;
                      }
                      uVar39 = *(undefined8 *)(lVar33 + 0x30);
                      uVar35 = *(undefined8 *)(lVar33 + 0x40);
                      uVar4 = *(undefined8 *)(lVar33 + 0x48);
                      *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
                      *(ulonglong *)(unaff_RBX + 200) = uVar24;
                      *(undefined8 *)(unaff_RBX + 0xd0) = uVar35;
                      *(undefined8 *)(unaff_RBX + 0xd8) = uVar4;
                      *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                      *(undefined **)(unaff_RBX + 0x220) = &UNK_14332b130;
                      *(undefined8 *)(unaff_RBX + 0x228) = 0x39;
                      if (uVar24 == 1) {
                        *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a1e1;
                        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                        goto code_r0x00014173a218;
                      }
                      *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
                      *(ulonglong *)(unaff_RBX + 0xa0) = uVar24;
                      *(undefined8 *)(unaff_RBX + 0xa8) = uVar35;
                      *(undefined8 *)(unaff_RBX + 0xb0) = uVar4;
                      *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                      *(longlong *)(unaff_RBX + 0x5d8) =
                           *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x20;
                      if (uVar24 < 3) {
                        *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a217;
                        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b118);
                        goto code_r0x00014173a218;
                      }
                      *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
                      *(ulonglong *)(unaff_RBX + 0x158) = uVar24;
                      *(undefined8 *)(unaff_RBX + 0x160) = uVar35;
                      *(undefined8 *)(unaff_RBX + 0x168) = uVar4;
                      *(undefined8 *)(unaff_RBX + 0x170) = 2;
                      *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                      *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0x220;
                      *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                      *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                      *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x5d8;
                      *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                      *(undefined1 **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                      *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                      *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                      *(undefined1 **)(unaff_RBX + 0x108) = unaff_RBX + 0x280;
                      *(undefined8 *)(unaff_RBX + 0x110) = 3;
                      *(longlong *)(unaff_RBX + 0x118) = lVar33 + 0x30;
                      *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x620);
                      *(undefined8 *)(unaff_RBX + 0xf0) = *(undefined8 *)(unaff_RBX + 0x610);
                      *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0x618);
                      *(undefined1 **)((longlong)ppuVar57 + 0x20) = unaff_RBX + 0x108;
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739866;
                      pdb_140dd7f80(param_1,uVar34,puVar46,unaff_RBX + 0xf0);
                      goto code_r0x000141739867;
                    }
                  }
                }
                *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
                *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
                *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
                lVar31 = 0;
                lVar33 = *(longlong *)(unaff_RBX + 0x70);
                goto code_r0x000141739892;
              }
              *(undefined8 *)(in_R11 + 0x14) = *(undefined8 *)(in_R11 + 10);
              *(undefined8 *)(in_R11 + 0x16) = *(undefined8 *)(in_R11 + 0xc);
              plVar32 = plRam0000000143cad8a0;
              if (*_DAT_143ca4b08 < 2) {
                bVar19 = *(byte *)(plRam0000000143cad8a0 + 2);
                unaff_R12 = (ulonglong)bVar19;
                if (2 < bVar19) {
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738a23;
                  uVar22 = pdb_142db8070(plRam0000000143cad8a0);
                  unaff_R12 = (ulonglong)uVar22;
                  in_R11 = *(uint **)(unaff_RBX + 0x70);
                  if ((char)uVar22 != '\0') goto code_r0x00014173803c;
                  goto code_r0x000141738a32;
                }
                if (bVar19 == 0) goto code_r0x000141738a32;
code_r0x00014173803c:
                lVar33 = *plVar32;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738044;
                cVar18 = pdb_140dd7f60(lVar33);
                in_R11 = *(uint **)(unaff_RBX + 0x70);
                if (cVar18 == '\0') goto code_r0x000141738a32;
                lVar33 = *plVar32;
                uVar24 = *(ulonglong *)(lVar33 + 0x38);
                if (uVar24 == 0) {
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739e8d;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                  goto code_r0x00014173a218;
                }
                uVar39 = *(undefined8 *)(lVar33 + 0x30);
                uVar34 = *(undefined8 *)(lVar33 + 0x40);
                uVar35 = *(undefined8 *)(lVar33 + 0x48);
                *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
                *(ulonglong *)(unaff_RBX + 200) = uVar24;
                *(undefined8 *)(unaff_RBX + 0xd0) = uVar34;
                *(undefined8 *)(unaff_RBX + 0xd8) = uVar35;
                *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b0f0;
                *(undefined8 *)(unaff_RBX + 0xf8) = 0x47;
                if (uVar24 == 1) {
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739ecd;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
                *(ulonglong *)(unaff_RBX + 0xa0) = uVar24;
                *(undefined8 *)(unaff_RBX + 0xa8) = uVar34;
                *(undefined8 *)(unaff_RBX + 0xb0) = uVar35;
                *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(in_R11 + 0xe) + 0x20;
                if (uVar24 < 3) {
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739f0d;
                  pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
                *(ulonglong *)(unaff_RBX + 0x158) = uVar24;
                *(undefined8 *)(unaff_RBX + 0x160) = uVar34;
                *(undefined8 *)(unaff_RBX + 0x168) = uVar35;
                *(undefined8 *)(unaff_RBX + 0x170) = 2;
                *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
                *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
                *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                *(undefined1 **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                *(uint **)(unaff_RBX + 0x2b8) = in_R11 + 4;
                *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                *(undefined1 **)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
                *(undefined8 *)(unaff_RBX + 0x1c8) = 3;
                *(longlong *)(unaff_RBX + 0x1d0) = lVar33 + 0x30;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417381c9;
                pdb_14173b6d0(unaff_RBX + 0x1c0);
                goto code_r0x000141738c4f;
              }
code_r0x000141738a32:
              plVar32 = plRam0000000143cad8a0;
              if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                unaff_R14 = (uint *)*plRam0000000143cad8a0;
                uVar39 = *(undefined8 *)(unaff_R14 + 8);
                uVar34 = *(undefined8 *)(unaff_R14 + 10);
                *(undefined8 *)(unaff_RBX + 0x5f8) = 4;
                *(undefined8 *)(unaff_RBX + 0x600) = uVar39;
                *(undefined8 *)(unaff_RBX + 0x608) = uVar34;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738a80;
                unaff_R15 = (uint *)pdb_140f33290();
                UNRECOVERED_JUMPTABLE = *(code **)(unaff_R12 + 0x18);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738a96;
                cVar18 = (*UNRECOVERED_JUMPTABLE)(unaff_R15,unaff_RBX + 0x5f8);
                in_R11 = *(uint **)(unaff_RBX + 0x70);
                if (cVar18 != '\0') {
                  puVar25 = (uint *)*plVar32;
                  puVar42 = *(uint **)(puVar25 + 0xe);
                  if (puVar42 == (uint *)0x0) {
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739fb3;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                    goto code_r0x00014173a218;
                  }
                  puVar28 = *(uint **)(puVar25 + 0xc);
                  param_2 = *(uint **)(puVar25 + 0x10);
                  param_3 = *(uint **)(puVar25 + 0x12);
                  *(uint **)(unaff_RBX + 0xc0) = puVar28;
                  *(uint **)(unaff_RBX + 200) = puVar42;
                  *(uint **)(unaff_RBX + 0xd0) = param_2;
                  *(uint **)(unaff_RBX + 0xd8) = param_3;
                  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                  *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b0f0;
                  *(undefined8 *)(unaff_RBX + 0x110) = 0x47;
                  if (puVar42 == (uint *)0x1) {
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739ff3;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                    goto code_r0x00014173a218;
                  }
                  *(uint **)(unaff_RBX + 0x98) = puVar28;
                  *(uint **)(unaff_RBX + 0xa0) = puVar42;
                  *(uint **)(unaff_RBX + 0xa8) = param_2;
                  *(uint **)(unaff_RBX + 0xb0) = param_3;
                  *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                  *(longlong *)(unaff_RBX + 0x120) = *(longlong *)(in_R11 + 0xe) + 0x20;
                  ppuVar55 = ppuVar57;
                  unaff_RDI = param_1;
                  if (puVar42 < (uint *)0x3) {
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a033;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b0d8);
                    goto code_r0x00014173a218;
                  }
code_r0x000141738b49:
                  *(uint **)(unaff_RBX + 0x150) = puVar28;
                  *(uint **)(unaff_RBX + 0x158) = puVar42;
                  *(uint **)(unaff_RBX + 0x160) = param_2;
                  *(uint **)(unaff_RBX + 0x168) = param_3;
                  *(undefined8 *)(unaff_RBX + 0x170) = 2;
                  *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(undefined1 **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                  *(uint **)(unaff_RBX + 0x2b8) = in_R11 + 4;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(undefined1 **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                  *(undefined8 *)(unaff_RBX + 0xf8) = 3;
                  *(uint **)(unaff_RBX + 0x100) = puVar25 + 0xc;
                  *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x608);
                  *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x5f8);
                  *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x600);
                  *(undefined1 **)((longlong)ppuVar55 + 0x20) = unaff_RBX + 0xf0;
                  param_3 = (uint *)(unaff_RBX + 0x1c0);
                  puVar42 = unaff_R14;
                  ppuVar57 = ppuVar55;
                  param_1 = unaff_RDI;
                  goto code_r0x000141738c43;
                }
              }
              goto code_r0x000141738c53;
            }
            uVar39 = *(undefined8 *)(in_R11 + 0xc);
            *(undefined8 *)(unaff_RBX + 0x120) = *(undefined8 *)(in_R11 + 10);
            *(undefined8 *)(unaff_RBX + 0x128) = uVar39;
            if (*_DAT_143ca4b08 < 2) {
              bVar19 = *(byte *)(plRam0000000143cad8b0 + 2);
              unaff_R12 = (ulonglong)bVar19;
              if (2 < bVar19) {
                unaff_RBX[0x6b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738e3f;
                uVar22 = pdb_142db8070(plRam0000000143cad8b0);
                unaff_R12 = (ulonglong)uVar22;
                in_R11 = *(uint **)(unaff_RBX + 0x70);
                if ((char)uVar22 != '\0') goto code_r0x00014173820d;
                goto code_r0x000141738e4e;
              }
              if (bVar19 == 0) goto code_r0x000141738e4e;
code_r0x00014173820d:
              lVar33 = *plVar32;
              unaff_RBX[0x6b] = 1;
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738219;
              cVar18 = pdb_140dd7f60(lVar33);
              in_R11 = *(uint **)(unaff_RBX + 0x70);
              if (cVar18 == '\0') goto code_r0x000141738e4e;
              lVar33 = *plVar32;
              uVar24 = *(ulonglong *)(lVar33 + 0x38);
              if (uVar24 == 0) {
                unaff_RBX[0x6b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739eaf;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                goto code_r0x00014173a218;
              }
              uVar39 = *(undefined8 *)(lVar33 + 0x30);
              uVar34 = *(undefined8 *)(lVar33 + 0x40);
              uVar35 = *(undefined8 *)(lVar33 + 0x48);
              *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
              *(ulonglong *)(unaff_RBX + 200) = uVar24;
              *(undefined8 *)(unaff_RBX + 0xd0) = uVar34;
              *(undefined8 *)(unaff_RBX + 0xd8) = uVar35;
              *(undefined8 *)(unaff_RBX + 0xe0) = 0;
              *(undefined **)(unaff_RBX + 0xf0) = &UNK_14332b038;
              *(undefined8 *)(unaff_RBX + 0xf8) = 0x33;
              if (uVar24 == 1) {
                unaff_RBX[0x6b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739eef;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
              *(ulonglong *)(unaff_RBX + 0xa0) = uVar24;
              *(undefined8 *)(unaff_RBX + 0xa8) = uVar34;
              *(undefined8 *)(unaff_RBX + 0xb0) = uVar35;
              *(undefined8 *)(unaff_RBX + 0xb8) = 1;
              *(longlong *)(unaff_RBX + 0x108) = *(longlong *)(in_R11 + 0xe) + 0x20;
              if (uVar24 < 3) {
                unaff_RBX[0x6b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739f2f;
                pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                goto code_r0x00014173a218;
              }
              *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
              *(ulonglong *)(unaff_RBX + 0x158) = uVar24;
              *(undefined8 *)(unaff_RBX + 0x160) = uVar34;
              *(undefined8 *)(unaff_RBX + 0x168) = uVar35;
              *(undefined8 *)(unaff_RBX + 0x170) = 2;
              *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
              *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0xf0;
              *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
              *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
              *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x108;
              *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
              *(undefined1 **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
              *(uint **)(unaff_RBX + 0x2b8) = in_R11 + 4;
              *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
              *(undefined1 **)(unaff_RBX + 0x1c0) = unaff_RBX + 0x280;
              *(undefined8 *)(unaff_RBX + 0x1c8) = 3;
              *(longlong *)(unaff_RBX + 0x1d0) = lVar33 + 0x30;
              unaff_RBX[0x6b] = 1;
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417383a2;
              pdb_14173b620(unaff_RBX + 0x1c0);
code_r0x000141739077:
              in_R11 = *(uint **)(unaff_RBX + 0x70);
            }
            else {
code_r0x000141738e4e:
              plVar32 = plRam0000000143cad8b0;
              if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                lVar33 = *plRam0000000143cad8b0;
                uVar39 = *(undefined8 *)(lVar33 + 0x20);
                uVar34 = *(undefined8 *)(lVar33 + 0x28);
                *(undefined8 *)(unaff_RBX + 0x5e0) = 4;
                *(undefined8 *)(unaff_RBX + 0x5e8) = uVar39;
                *(undefined8 *)(unaff_RBX + 0x5f0) = uVar34;
                unaff_RBX[0x6b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738e9f;
                uVar39 = pdb_140f33290();
                UNRECOVERED_JUMPTABLE = *(code **)(unaff_R12 + 0x18);
                unaff_RBX[0x6b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738eba;
                cVar18 = (*UNRECOVERED_JUMPTABLE)(uVar39,unaff_RBX + 0x5e0);
                in_R11 = *(uint **)(unaff_RBX + 0x70);
                if (cVar18 != '\0') {
                  lVar31 = *plVar32;
                  uVar24 = *(ulonglong *)(lVar31 + 0x38);
                  if (uVar24 == 0) {
                    unaff_RBX[0x6b] = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739fd5;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
code_r0x00014173a218:
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
                    (*UNRECOVERED_JUMPTABLE)();
                  }
                  uVar34 = *(undefined8 *)(lVar31 + 0x30);
                  uVar35 = *(undefined8 *)(lVar31 + 0x40);
                  uVar4 = *(undefined8 *)(lVar31 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar34;
                  *(ulonglong *)(unaff_RBX + 200) = uVar24;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar35;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                  *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b038;
                  *(undefined8 *)(unaff_RBX + 0x110) = 0x33;
                  if (uVar24 == 1) {
                    unaff_RBX[0x6b] = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a015;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar34;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar24;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar35;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                  *(longlong *)(unaff_RBX + 0x230) = *(longlong *)(in_R11 + 0xe) + 0x20;
                  if (uVar24 < 3) {
                    unaff_RBX[0x6b] = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a055;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b020);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar34;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar24;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar35;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar4;
                  *(undefined8 *)(unaff_RBX + 0x170) = 2;
                  *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x230;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(undefined1 **)(unaff_RBX + 0x2b0) = unaff_RBX + 0x150;
                  *(uint **)(unaff_RBX + 0x2b8) = in_R11 + 4;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(undefined1 **)(unaff_RBX + 0xf0) = unaff_RBX + 0x280;
                  *(undefined8 *)(unaff_RBX + 0xf8) = 3;
                  *(longlong *)(unaff_RBX + 0x100) = lVar31 + 0x30;
                  *(undefined8 *)(unaff_RBX + 0x1d0) = *(undefined8 *)(unaff_RBX + 0x5f0);
                  *(undefined8 *)(unaff_RBX + 0x1c0) = *(undefined8 *)(unaff_RBX + 0x5e0);
                  *(undefined8 *)(unaff_RBX + 0x1c8) = *(undefined8 *)(unaff_RBX + 0x5e8);
                  unaff_RBX[0x6b] = 1;
                  *(undefined1 **)((longlong)ppuVar57 + 0x20) = unaff_RBX + 0xf0;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739076;
                  pdb_140dd7f80(lVar33,uVar39,unaff_R12,unaff_RBX + 0x1c0);
                  goto code_r0x000141739077;
                }
              }
            }
            lVar33 = *(longlong *)(in_R11 + 0x10);
            *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
            *(undefined8 *)(unaff_RBX + 0x288) = _UNK_14332b500;
            uVar39 = *(undefined8 *)(*(longlong *)(in_R11 + 0xe) + 0x20);
            uVar34 = *(undefined8 *)(*(longlong *)(in_R11 + 0xe) + 0x28);
            unaff_RBX[0x6b] = 1;
            *(undefined1 **)((longlong)ppuVar57 + 0x20) = unaff_RBX + 0x120;
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417390bb;
            pdb_141c2b710(lVar33 + 0x10,unaff_RBX + 0x280,uVar39,uVar34);
            lVar33 = *(longlong *)(unaff_RBX + 0x120);
            lVar31 = *(longlong *)(unaff_RBX + 0x128);
            *(longlong *)(unaff_RBX + 0x150) = lVar33;
            *(longlong *)(unaff_RBX + 0x158) = lVar31;
            lVar36 = *(longlong *)(lVar31 + 0x10);
            *(longlong *)(unaff_RBX + 0x80) = lVar33;
            UNRECOVERED_JUMPTABLE = *(code **)(lVar31 + 0x18);
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417390fc;
            (*UNRECOVERED_JUMPTABLE)
                      (unaff_RBX + 0x280,lVar33 + (lVar36 - 1U & 0xfffffffffffffff0) + 0x10);
            auVar69[0] = -(unaff_RBX[0x280] == DAT_14332a670);
            auVar69[1] = -(unaff_RBX[0x281] == UNK_14332a671);
            auVar69[2] = -(unaff_RBX[0x282] == UNK_14332a672);
            auVar69[3] = -(unaff_RBX[0x283] == UNK_14332a673);
            auVar69[4] = -(unaff_RBX[0x284] == UNK_14332a674);
            auVar69[5] = -(unaff_RBX[0x285] == UNK_14332a675);
            auVar69[6] = -(unaff_RBX[0x286] == UNK_14332a676);
            auVar69[7] = -(unaff_RBX[0x287] == UNK_14332a677);
            auVar69[8] = -(unaff_RBX[0x288] == UNK_14332a678);
            auVar69[9] = -(unaff_RBX[0x289] == UNK_14332a679);
            auVar69[10] = -(unaff_RBX[0x28a] == UNK_14332a67a);
            auVar69[0xb] = -(unaff_RBX[0x28b] == UNK_14332a67b);
            auVar69[0xc] = -(unaff_RBX[0x28c] == UNK_14332a67c);
            auVar69[0xd] = -(unaff_RBX[0x28d] == UNK_14332a67d);
            auVar69[0xe] = -(unaff_RBX[0x28e] == UNK_14332a67e);
            auVar69[0xf] = -(unaff_RBX[0x28f] == UNK_14332a67f);
            if ((ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar69[0xf] >> 7) << 0xf) != 0xffff) {
              *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x80);
              *(longlong *)(unaff_RBX + 0x288) = lVar31;
              *(undefined **)((longlong)ppuVar57 + 0x20) = &UNK_14332b0c0;
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417391d2;
              pdb_142dc8170(&UNK_14332b0b8,8,unaff_RBX + 0x280,&UNK_14332b870);
            }
            *(undefined8 *)(unaff_RBX + 0x268) = *(undefined8 *)(unaff_RBX + 0x80);
            *(undefined8 *)(unaff_RBX + 0x260) = 0;
            plVar32 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
            LOCK();
            *plVar32 = *plVar32 + -1;
            lVar33 = *plVar32;
            UNLOCK();
            goto joined_r0x000141738e0f;
          case 1:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739e68;
            pdb_142dc8570(&UNK_14332b178);
          case 2:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739e74;
            pdb_142dc8590(&UNK_14332b178);
          case 3:
            goto code_r0x000141738c63;
          case 4:
            uVar39 = *(undefined8 *)(param_2 + 0x1a);
            puVar46 = *(undefined1 **)(param_2 + 0x1c);
code_r0x00014173743f:
            UNRECOVERED_JUMPTABLE = *(code **)(puVar46 + 0x18);
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173744d;
            (*UNRECOVERED_JUMPTABLE)(unaff_RBX + 0x280,uVar39,param_1);
            lVar33 = *(longlong *)(unaff_RBX + 0x280);
            if (lVar33 != 2) {
              uVar39 = *(undefined8 *)(unaff_RBX + 0x288);
              pauVar45 = *(undefined1 (**) [16])(unaff_RBX + 0x290);
              *(undefined8 *)(unaff_RBX + 0x80) =
                   *(undefined8 *)(*(longlong *)(unaff_RBX + 0x70) + 0x68);
              puVar65 = *(undefined8 **)(*(longlong *)(unaff_RBX + 0x70) + 0x70);
              *(undefined8 **)(unaff_RBX + 0x88) = puVar65;
              UNRECOVERED_JUMPTABLE = (code *)*puVar65;
              if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                uVar34 = *(undefined8 *)(unaff_RBX + 0x80);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417374a3;
                (*UNRECOVERED_JUMPTABLE)(uVar34);
              }
              pbVar37 = *(byte **)(unaff_RBX + 0x80);
              arg1 = *(undefined1 (**) [16])(*(longlong *)(unaff_RBX + 0x88) + 8);
              if (arg1 != (undefined1 (*) [16])0x0) {
                uVar24 = *(ulonglong *)(*(longlong *)(unaff_RBX + 0x88) + 0x10);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417374c4;
                pub_1406abac0(pbVar37,(ulonglong)arg1,uVar24);
              }
              lVar31 = *(longlong *)(unaff_RBX + 0x70);
              if ((int)lVar33 == 1) {
                uVar34 = *(undefined8 *)(lVar31 + 0x10);
                uVar35 = *(undefined8 *)(lVar31 + 0x18);
                *(undefined8 *)(unaff_RBX + 0x1f0) = *(undefined8 *)(unaff_RBX + 0x148);
                *(undefined8 *)(unaff_RBX + 0x1f8) = *(undefined8 *)(unaff_RBX + 0x140);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417374fd;
                pauVar30 = (undefined1 (*) [16])pdb_140c799b0(uVar39);
                *(undefined1 (**) [16])(unaff_RBX + 0xb0) = pauVar45;
                lVar31 = *(longlong *)(unaff_RBX + 0x70);
                arg1 = pauVar45;
                pauVar45 = pauVar30;
                uVar39 = uVar35;
              }
              else {
                uVar34 = 0;
              }
              *(undefined8 *)(unaff_RBX + 0x98) = uVar34;
              *(undefined8 *)(unaff_RBX + 0xa0) = uVar39;
              *(undefined1 (**) [16])(unaff_RBX + 0xa8) = pauVar45;
              lVar33 = *(longlong *)(lVar31 + 0x50);
              pcVar26 = (char *)(lVar33 + 0x10);
              LOCK();
              bVar67 = *(char *)(lVar33 + 0x10) == '\0';
              if (bVar67) {
                *(char *)(lVar33 + 0x10) = '\x01';
              }
              UNLOCK();
              if (!bVar67) {
                unaff_RBX[0x7d] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173885c;
                pdb_142dc6be0(pcVar26);
              }
              puVar66 = _DAT_143ca8f38;
              if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
                bVar19 = 0;
                cVar18 = *(char *)(lVar33 + 0x11);
                uVar39 = _UNK_14332bb30;
                uVar34 = _UNK_14332bb38;
              }
              else {
                unaff_RBX[0x7d] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173886b;
                bVar19 = pdb_142dc79e0();
                bVar19 = bVar19 ^ 1;
                cVar18 = *(char *)(lVar33 + 0x11);
                uVar39 = _UNK_14332bb30;
                uVar34 = _UNK_14332bb38;
              }
              _UNK_14332bb30 = uVar39;
              _UNK_14332bb38 = uVar34;
              if (cVar18 != '\0') {
                *(char **)(unaff_RBX + 0x280) = pcVar26;
                unaff_RBX[0x288] = bVar19;
                *(undefined **)((longlong)ppuVar57 + 0x20) = &UNK_14332b190;
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417388b2;
                pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b920);
              }
              uVar35 = *(undefined8 *)(lVar33 + 0x18);
              uVar4 = *(undefined8 *)(lVar33 + 0x20);
              uVar23 = *(undefined4 *)(lVar33 + 0x2c);
              uVar7 = *(undefined4 *)(lVar33 + 0x30);
              uVar8 = *(undefined4 *)(lVar33 + 0x34);
              *(undefined4 *)(unaff_RBX + 0x160) = *(undefined4 *)(lVar33 + 0x28);
              *(undefined4 *)(unaff_RBX + 0x164) = uVar23;
              *(undefined4 *)(unaff_RBX + 0x168) = uVar7;
              *(undefined4 *)(unaff_RBX + 0x16c) = uVar8;
              *(undefined8 *)(unaff_RBX + 0x150) = uVar35;
              *(undefined8 *)(unaff_RBX + 0x158) = uVar4;
              *(undefined8 *)(lVar33 + 0x18) = uVar39;
              *(undefined8 *)(lVar33 + 0x20) = uVar34;
              uVar4 = _UNK_14332bb48;
              uVar35 = _UNK_14332bb40;
              *(undefined8 *)(lVar33 + 0x28) = _UNK_14332bb40;
              *(undefined8 *)(lVar33 + 0x30) = uVar4;
              if ((bVar19 == 0) && ((*puVar66 & 0x7fffffffffffffff) != 0)) {
                unaff_RBX[0x7b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738992;
                cVar18 = pdb_142dc79e0();
                if (cVar18 == '\0') {
                  *(undefined1 *)(lVar33 + 0x11) = 1;
                }
              }
              LOCK();
              cVar18 = *pcVar26;
              *pcVar26 = '\0';
              UNLOCK();
              if (cVar18 == '\x02') {
                unaff_RBX[0x7b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417388c4;
                pdb_142dc6ca0(pcVar26);
              }
              lVar31 = *(longlong *)(unaff_RBX + 0x70);
              lVar36 = *(longlong *)(lVar31 + 0x50);
              lVar33 = lVar36 + 0x38;
              LOCK();
              bVar67 = *(char *)(lVar36 + 0x38) == '\0';
              if (bVar67) {
                *(char *)(lVar36 + 0x38) = '\x01';
              }
              UNLOCK();
              if (!bVar67) {
                unaff_RBX[0x7b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417388d6;
                pdb_142dc6be0(lVar33);
              }
              if ((*puVar66 & 0x7fffffffffffffff) == 0) {
                uVar22 = 0;
                cVar18 = *(char *)(lVar36 + 0x39);
              }
              else {
                unaff_RBX[0x7b] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417388e5;
                uVar22 = pdb_142dc79e0();
                uVar22 = uVar22 ^ 1;
                cVar18 = *(char *)(lVar36 + 0x39);
              }
              if (cVar18 != '\0') {
                *(longlong *)(unaff_RBX + 0x280) = lVar33;
                unaff_RBX[0x288] = (char)uVar22;
                *(undefined **)((longlong)ppuVar57 + 0x20) = &UNK_14332b1a8;
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173892c;
                pdb_142dc8170(&UNK_14332b8d0,0x2b,unaff_RBX + 0x280,&UNK_14332b940);
              }
              *(uint *)(unaff_RBX + 0x88) = uVar22;
              *(longlong *)(unaff_RBX + 0x80) = lVar33;
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737633;
              plVar32 = (longlong *)pdb_140f3bda0();
              if ((char)plVar32[2] == '\x01') {
                lVar33 = *plVar32;
                arg1 = (undefined1 (*) [16])plVar32[1];
              }
              else {
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738937;
                lVar33 = pdb_140f4fd10();
                *plVar32 = lVar33;
                plVar32[1] = (longlong)arg1;
                *(undefined1 *)(plVar32 + 2) = 1;
              }
              *plVar32 = lVar33 + 1;
              pauVar45 = *(undefined1 (**) [16])(lVar36 + 0x40);
              lVar1 = *(longlong *)(lVar36 + 0x48);
              uVar2 = *(undefined8 *)(lVar36 + 0x58);
              *(undefined8 *)(lVar36 + 0x50) = uVar35;
              *(undefined8 *)(lVar36 + 0x58) = uVar4;
              *(undefined8 *)(lVar36 + 0x40) = uVar39;
              *(undefined8 *)(lVar36 + 0x48) = uVar34;
              *(longlong *)(lVar36 + 0x60) = lVar33;
              *(undefined1 (**) [16])(lVar36 + 0x68) = arg1;
              auVar70 = *pauVar45;
              if (lVar1 == 0) {
                uVar39 = 0;
              }
              else {
                lVar33 = lVar1 * 0x61 + 0x71;
                arg1 = pauVar45 + lVar1 * -6 + -6;
                uVar39 = 0x10;
              }
              *(undefined8 *)(unaff_RBX + 0x280) = uVar39;
              *(longlong *)(unaff_RBX + 0x288) = lVar33;
              *(undefined1 (**) [16])(unaff_RBX + 0x290) = arg1;
              *(undefined1 (**) [16])(unaff_RBX + 0x298) = pauVar45;
              *(undefined1 (**) [16])(unaff_RBX + 0x2a0) = pauVar45 + 1;
              *(undefined1 **)(unaff_RBX + 0x2a8) = *pauVar45 + lVar1 + 1;
              *(ushort *)(unaff_RBX + 0x2b0) =
                   ~((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
              *(undefined8 *)(unaff_RBX + 0x2b8) = uVar2;
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417376f8;
              pdb_1415ed630(unaff_RBX + 0x120,unaff_RBX + 0x280);
              if ((unaff_RBX[0x88] == '\0') && ((*puVar66 & 0x7fffffffffffffff) != 0)) {
                unaff_RBX[0x7e] = 1;
                unaff_RBX[0x7f] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417389b1;
                cVar18 = pdb_142dc79e0();
                if (cVar18 == '\0') {
                  *(undefined1 *)(lVar36 + 0x39) = 1;
                }
              }
              LOCK();
              cVar18 = **(char **)(unaff_RBX + 0x80);
              **(char **)(unaff_RBX + 0x80) = '\0';
              UNLOCK();
              if (cVar18 == '\x02') {
                unaff_RBX[0x7e] = 1;
                unaff_RBX[0x7f] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738955;
                pdb_142dc6ca0();
              }
              pauVar45 = *(undefined1 (**) [16])(unaff_RBX + 0x150);
              auVar70 = *pauVar45;
              *(undefined1 (**) [16])(unaff_RBX + 0x280) = pauVar45;
              *(undefined1 (**) [16])(unaff_RBX + 0x288) = pauVar45 + 1;
              *(undefined1 **)(unaff_RBX + 0x290) = *pauVar45 + *(longlong *)(unaff_RBX + 0x158) + 1
              ;
              *(ushort *)(unaff_RBX + 0x298) =
                   ~((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar70[0xf] >> 7) << 0xf);
              *(undefined8 *)(unaff_RBX + 0x2a0) = *(undefined8 *)(unaff_RBX + 0x168);
              *(longlong *)(unaff_RBX + 0x2a8) = *(longlong *)(unaff_RBX + 0x70) + 0x40;
              unaff_RBX[0x7e] = 1;
              unaff_RBX[0x7f] = 1;
              puVar46 = unaff_RBX + 0x280;
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173779a;
              pdb_1415ea2a0(unaff_RBX + 0x108);
              *(longlong **)(unaff_RBX + 0x88) = (longlong *)(lVar31 + 0x50);
              *(uint **)(unaff_RBX + 0x80) = puVar42;
              if (*(longlong *)(unaff_RBX + 0x98) == 0) {
                UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(unaff_RBX + 0xa8) + 0x18);
                lVar33 = *(longlong *)(unaff_RBX + 0xa0) +
                         (*(longlong *)(*(longlong *)(unaff_RBX + 0xa8) + 0x10) - 1U &
                         0xfffffffffffffff0) + 0x10;
                unaff_RBX[0x6d] = 1;
                unaff_RBX[0x6e] = 1;
                unaff_RBX[0x6f] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737946;
                (*UNRECOVERED_JUMPTABLE)(unaff_RBX + 0x280,lVar33);
                auVar68[0] = -(unaff_RBX[0x280] == DAT_14332a670);
                auVar68[1] = -(unaff_RBX[0x281] == UNK_14332a671);
                auVar68[2] = -(unaff_RBX[0x282] == UNK_14332a672);
                auVar68[3] = -(unaff_RBX[0x283] == UNK_14332a673);
                auVar68[4] = -(unaff_RBX[0x284] == UNK_14332a674);
                auVar68[5] = -(unaff_RBX[0x285] == UNK_14332a675);
                auVar68[6] = -(unaff_RBX[0x286] == UNK_14332a676);
                auVar68[7] = -(unaff_RBX[0x287] == UNK_14332a677);
                auVar68[8] = -(unaff_RBX[0x288] == UNK_14332a678);
                auVar68[9] = -(unaff_RBX[0x289] == UNK_14332a679);
                auVar68[10] = -(unaff_RBX[0x28a] == UNK_14332a67a);
                auVar68[0xb] = -(unaff_RBX[0x28b] == UNK_14332a67b);
                auVar68[0xc] = -(unaff_RBX[0x28c] == UNK_14332a67c);
                auVar68[0xd] = -(unaff_RBX[0x28d] == UNK_14332a67d);
                auVar68[0xe] = -(unaff_RBX[0x28e] == UNK_14332a67e);
                auVar68[0xf] = -(unaff_RBX[0x28f] == UNK_14332a67f);
                if ((ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
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
                            (ushort)(auVar68[0xf] >> 7) << 0xf) != 0xffff) {
                  unaff_RBX[0x6d] = 1;
                  unaff_RBX[0x6e] = 1;
                  unaff_RBX[0x6f] = 1;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417389fc;
                  pdb_142dc8110(&UNK_14332b0b8,8,&UNK_14332b1c0);
                  goto code_r0x00014173a218;
                }
                *(undefined8 *)(unaff_RBX + 0xf0) = 0;
                *(undefined8 *)(unaff_RBX + 0xf8) = 0x10;
                *(undefined8 *)(unaff_RBX + 0x100) = 0;
                *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xf0;
                unaff_RBX[0x7c] = 1;
                puVar46 = unaff_RBX + 0x280;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417379af;
                pdb_140d9d5e0(lVar33,puVar46,&UNK_14332b448);
                lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
                lVar36 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
                *(undefined8 *)(unaff_RBX + 0x208) = *(undefined8 *)(lVar31 + 0x28);
                *(undefined8 *)(unaff_RBX + 0x200) = *(undefined8 *)(lVar31 + 0x20);
                uVar39 = *(undefined8 *)(lVar31 + 0x10);
                UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar31 + 0x18) + 0x38);
                unaff_RBX[0x7c] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417379e4;
                uVar39 = (*UNRECOVERED_JUMPTABLE)(uVar39);
                *(undefined8 *)(unaff_RBX + 0x5d0) = uVar39;
                uVar39 = *(undefined8 *)
                          (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
                UNRECOVERED_JUMPTABLE =
                     *(code **)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) +
                               0x18);
                unaff_RBX[0x7c] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737a08;
                uVar34 = (*UNRECOVERED_JUMPTABLE)(uVar39);
                uVar39 = *(undefined8 *)
                          (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
                UNRECOVERED_JUMPTABLE =
                     *(code **)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) +
                               0x20);
                unaff_RBX[0x7c] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737a26;
                uVar17 = (*UNRECOVERED_JUMPTABLE)(uVar39);
                unaff_RBX[0x7c] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737a44;
                pdb_1415e6d20(unaff_RBX + 0x1c0,unaff_RBX + 0x120);
                *(undefined8 *)(unaff_RBX + 0xd0) = *(undefined8 *)(unaff_RBX + 0x118);
                *(undefined8 *)(unaff_RBX + 0xc0) = *(undefined8 *)(unaff_RBX + 0x108);
                *(undefined8 *)(unaff_RBX + 200) = *(undefined8 *)(unaff_RBX + 0x110);
                *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x100);
                *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0xf0);
                *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0xf8);
                unaff_RBX[0x7c] = 0;
                *(undefined1 **)((longlong)ppuVar57 + 0x50) = unaff_RBX + 0x280;
                *(undefined1 **)((longlong)ppuVar57 + 0x48) = unaff_RBX + 0xc0;
                *(undefined1 **)((longlong)ppuVar57 + 0x40) = unaff_RBX + 0x1c0;
                *(undefined1 *)((longlong)ppuVar57 + 0x38) = uVar17;
                *(undefined8 *)((longlong)ppuVar57 + 0x30) = uVar34;
                *(undefined1 **)((longlong)ppuVar57 + 0x28) = puVar46;
                *(undefined8 *)((longlong)ppuVar57 + 0x20) = *(undefined8 *)(unaff_RBX + 0x5d0);
                uVar39 = *(undefined8 *)(unaff_RBX + 0x200);
                uVar34 = *(undefined8 *)(unaff_RBX + 0x208);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737ad8;
                lVar33 = pdb_1417ffee0(lVar36 + 0x10,uVar39,uVar34,lVar33);
              }
              else {
                lVar33 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
                lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
                *(undefined8 *)(unaff_RBX + 0x208) = *(undefined8 *)(lVar33 + 0x28);
                *(undefined8 *)(unaff_RBX + 0x200) = *(undefined8 *)(lVar33 + 0x20);
                uVar39 = *(undefined8 *)(lVar33 + 0x10);
                UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar33 + 0x18) + 0x38);
                unaff_RBX[0x6d] = 1;
                unaff_RBX[0x6e] = 1;
                unaff_RBX[0x6f] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417377f3;
                uVar34 = (*UNRECOVERED_JUMPTABLE)(uVar39);
                uVar39 = *(undefined8 *)
                          (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
                UNRECOVERED_JUMPTABLE =
                     *(code **)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) +
                               0x18);
                unaff_RBX[0x6d] = 1;
                unaff_RBX[0x6e] = 1;
                unaff_RBX[0x6f] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173781c;
                uVar35 = (*UNRECOVERED_JUMPTABLE)(uVar39);
                uVar39 = *(undefined8 *)
                          (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x10);
                UNRECOVERED_JUMPTABLE =
                     *(code **)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38) + 0x18) +
                               0x20);
                unaff_RBX[0x6d] = 1;
                unaff_RBX[0x6e] = 1;
                unaff_RBX[0x6f] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737842;
                uVar17 = (*UNRECOVERED_JUMPTABLE)(uVar39);
                unaff_RBX[0x6d] = 1;
                unaff_RBX[0x6e] = 1;
                unaff_RBX[0x6f] = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737868;
                pdb_1415e6d20(unaff_RBX + 0x1c0,unaff_RBX + 0x120);
                *(undefined8 *)(unaff_RBX + 0xd0) = *(undefined8 *)(unaff_RBX + 0x118);
                *(undefined8 *)(unaff_RBX + 0xc0) = *(undefined8 *)(unaff_RBX + 0x108);
                *(undefined8 *)(unaff_RBX + 200) = *(undefined8 *)(unaff_RBX + 0x110);
                *(undefined8 *)(unaff_RBX + 0x280) = 0;
                *(undefined8 *)(unaff_RBX + 0x288) = 0x10;
                *(undefined8 *)(unaff_RBX + 0x290) = 0;
                unaff_RBX[0x6d] = 0;
                unaff_RBX[0x6e] = 1;
                unaff_RBX[0x6f] = 1;
                *(undefined1 **)((longlong)ppuVar57 + 0x50) = unaff_RBX + 0x280;
                *(undefined1 **)((longlong)ppuVar57 + 0x48) = unaff_RBX + 0xc0;
                *(undefined1 **)((longlong)ppuVar57 + 0x40) = unaff_RBX + 0x1c0;
                *(undefined1 *)((longlong)ppuVar57 + 0x38) = uVar17;
                *(undefined8 *)((longlong)ppuVar57 + 0x30) = uVar35;
                *(undefined1 **)((longlong)ppuVar57 + 0x28) = puVar46;
                *(undefined8 *)((longlong)ppuVar57 + 0x20) = uVar34;
                uVar39 = *(undefined8 *)(unaff_RBX + 0x200);
                uVar34 = *(undefined8 *)(unaff_RBX + 0x208);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737902;
                lVar33 = pdb_1417ffee0(lVar31 + 0x10,uVar39,uVar34,0);
              }
              *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x98);
              *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0xa0);
              *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(unaff_RBX + 0xa8);
              *(undefined4 *)(unaff_RBX + 0x294) = *(undefined4 *)(unaff_RBX + 0xac);
              *(undefined4 *)(unaff_RBX + 0x298) = *(undefined4 *)(unaff_RBX + 0xb0);
              *(undefined4 *)(unaff_RBX + 0x29c) = *(undefined4 *)(unaff_RBX + 0xb4);
              *(longlong *)(unaff_RBX + 0x2a0) = lVar33;
              lVar31 = *(longlong *)(unaff_RBX + 0x280);
              if (lVar33 == 0 || lVar31 != 0) {
                uVar39 = *(undefined8 *)(unaff_RBX + 0x288);
                pbVar37 = *(byte **)(unaff_RBX + 0x290);
                *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
                param_1 = *(uint **)(unaff_RBX + 0x298);
                *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
                *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
                if (lVar33 != 0) {
                  unaff_RBX[0x6d] = 0;
                  unaff_RBX[0x6e] = 0;
                  unaff_RBX[0x6f] = 0;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737b6d;
                  pdb_1404b38e0(unaff_RBX + 0x2a0);
                }
              }
              else {
                lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x10);
                uVar39 = *(undefined8 *)(*(longlong *)(unaff_RBX + 0x70) + 0x18);
                *(undefined8 *)(unaff_RBX + 0xc0) = 1;
                *(undefined8 *)(unaff_RBX + 200) = 1;
                *(longlong *)(unaff_RBX + 0xd0) = lVar33;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737b9d;
                pdb_14007ee60();
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737bac;
                pbVar37 = pub_1406abab0(0x18,8);
                if (pbVar37 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417389d2;
                  pdb_142dc7e11(8,0x18);
                }
                *(undefined8 *)(pbVar37 + 0x10) = *(undefined8 *)(unaff_RBX + 0xd0);
                uVar34 = *(undefined8 *)(unaff_RBX + 200);
                *(undefined8 *)pbVar37 = *(undefined8 *)(unaff_RBX + 0xc0);
                *(undefined8 *)(pbVar37 + 8) = uVar34;
                *(undefined8 *)(unaff_RBX + 0x230) = *(undefined8 *)(unaff_RBX + 0x120);
                *(undefined8 *)(unaff_RBX + 0x238) = *(undefined8 *)(unaff_RBX + 0x128);
                *(undefined8 *)(unaff_RBX + 0x240) = *(undefined8 *)(unaff_RBX + 0x130);
                if (*(longlong *)(unaff_RBX + 0x280) == 0) {
                  plVar32 = *(longlong **)(unaff_RBX + 0x288);
                  LOCK();
                  *plVar32 = *plVar32 + -1;
                  UNLOCK();
                  param_1 = (uint *)&UNK_14332b220;
                  if (*plVar32 == 0) {
                    unaff_RBX[0x6d] = 0;
                    unaff_RBX[0x6e] = 0;
                    unaff_RBX[0x6f] = 0;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737e1b;
                    pdb_140c7a240(unaff_RBX + 0x288);
                  }
                }
                else {
                  plVar32 = *(longlong **)(unaff_RBX + 0x290);
                  LOCK();
                  *plVar32 = *plVar32 + -1;
                  UNLOCK();
                  param_1 = (uint *)&UNK_14332b220;
                  if (*plVar32 == 0) {
                    unaff_RBX[0x6d] = 0;
                    unaff_RBX[0x6e] = 0;
                    unaff_RBX[0x6f] = 0;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737c2a;
                    pdb_140c7a240(unaff_RBX + 0x290);
                  }
                }
              }
              lVar33 = *(longlong *)(unaff_RBX + 0x158);
              if (lVar33 != 0) {
                lVar36 = lVar33 * 0x10 + 0x10;
                uVar24 = lVar33 + lVar36 + 0x11;
                if (uVar24 != 0) {
                  lVar33 = *(longlong *)(unaff_RBX + 0x150);
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737e55;
                  pub_1406abac0((byte *)(lVar33 - lVar36),uVar24,0x10);
                }
              }
              plVar32 = (longlong *)**(undefined8 **)(unaff_RBX + 0x88);
              LOCK();
              *plVar32 = *plVar32 + -1;
              UNLOCK();
              if (*plVar32 == 0) {
                *(undefined8 *)(unaff_RBX + 0x250) = *(undefined8 *)(unaff_RBX + 0x148);
                *(undefined8 *)(unaff_RBX + 600) = *(undefined8 *)(unaff_RBX + 0x140);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737e86;
                pdb_140dd7630();
              }
              lVar33 = *(longlong *)(unaff_RBX + 0x70);
              *(undefined2 *)(lVar33 + 0x48) = 0;
code_r0x000141739892:
              uVar24 = *(longlong *)(lVar33 + 0x38) + 0x10;
              *(longlong *)(unaff_RBX + 0x280) = lVar31;
              *(undefined8 *)(unaff_RBX + 0x288) = uVar39;
              *(byte **)(unaff_RBX + 0x290) = pbVar37;
              *(uint **)(unaff_RBX + 0x298) = param_1;
              *(undefined8 *)(unaff_RBX + 0x160) = *(undefined8 *)(unaff_RBX + 0x240);
              *(undefined8 *)(unaff_RBX + 0x150) = *(undefined8 *)(unaff_RBX + 0x230);
              *(undefined8 *)(unaff_RBX + 0x158) = *(undefined8 *)(unaff_RBX + 0x238);
              puVar46 = unaff_RBX + 0x280;
              puVar47 = unaff_RBX + 0x150;
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417398f4;
              pdb_141746c10(unaff_RBX + 0x1c0,uVar24,puVar46,puVar47);
              plVar32 = (longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
              *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x60) = 0;
              plVar5 = plRam0000000143cad8b8;
              if (*(longlong *)(unaff_RBX + 0x1c0) == 0) {
                if (*_DAT_143ca4b08 < 2) {
                  bVar19 = *(byte *)(plRam0000000143cad8b8 + 2);
                  uVar24 = (ulonglong)bVar19;
                  if (2 < bVar19) {
                    unaff_RBX[0x6c] = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739adb;
                    uVar22 = pdb_142db8070(plRam0000000143cad8b8);
                    uVar24 = (ulonglong)uVar22;
                    if ((char)uVar22 != '\0') goto code_r0x00014173993f;
                    goto code_r0x000141739ae6;
                  }
                  if (bVar19 == 0) goto code_r0x000141739ae6;
code_r0x00014173993f:
                  lVar33 = *plVar5;
                  unaff_RBX[0x6c] = 1;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173994b;
                  cVar18 = pdb_140dd7f60(lVar33);
                  if (cVar18 == '\0') goto code_r0x000141739ae6;
                  lVar33 = *plVar5;
                  uVar24 = *(ulonglong *)(lVar33 + 0x38);
                  if (uVar24 == 0) {
                    unaff_RBX[0x6c] = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739f51;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                    goto code_r0x00014173a218;
                  }
                  uVar39 = *(undefined8 *)(lVar33 + 0x30);
                  uVar34 = *(undefined8 *)(lVar33 + 0x40);
                  uVar35 = *(undefined8 *)(lVar33 + 0x48);
                  *(undefined8 *)(unaff_RBX + 0xc0) = uVar39;
                  *(ulonglong *)(unaff_RBX + 200) = uVar24;
                  *(undefined8 *)(unaff_RBX + 0xd0) = uVar34;
                  *(undefined8 *)(unaff_RBX + 0xd8) = uVar35;
                  *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                  *(undefined **)(unaff_RBX + 0x108) = &UNK_14332b290;
                  *(undefined8 *)(unaff_RBX + 0x110) = 0x33;
                  if (uVar24 == 1) {
                    unaff_RBX[0x6c] = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739f73;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x98) = uVar39;
                  *(ulonglong *)(unaff_RBX + 0xa0) = uVar24;
                  *(undefined8 *)(unaff_RBX + 0xa8) = uVar34;
                  *(undefined8 *)(unaff_RBX + 0xb0) = uVar35;
                  *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                  *(longlong *)(unaff_RBX + 0x120) = *plVar32 + 0x20;
                  if (uVar24 < 3) {
                    unaff_RBX[0x6c] = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739f95;
                    pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                    goto code_r0x00014173a218;
                  }
                  *(undefined8 *)(unaff_RBX + 0x150) = uVar39;
                  *(ulonglong *)(unaff_RBX + 0x158) = uVar24;
                  *(undefined8 *)(unaff_RBX + 0x160) = uVar34;
                  *(undefined8 *)(unaff_RBX + 0x168) = uVar35;
                  *(undefined8 *)(unaff_RBX + 0x170) = 2;
                  *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                  *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0x108;
                  *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                  *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                  *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x120;
                  *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                  *(undefined1 **)(unaff_RBX + 0x2b0) = puVar47;
                  *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                  *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                  *(undefined1 **)(unaff_RBX + 0xf0) = puVar46;
                  *(undefined8 *)(unaff_RBX + 0xf8) = 3;
                  *(longlong *)(unaff_RBX + 0x100) = lVar33 + 0x30;
                  unaff_RBX[0x6c] = 1;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739ac5;
                  pdb_14173b780(unaff_RBX + 0xf0);
                }
                else {
code_r0x000141739ae6:
                  plVar5 = plRam0000000143cad8b8;
                  if ((*_DAT_143ca4ab0 == '\0') && (3 < *_DAT_143ca8e90)) {
                    lVar33 = *plRam0000000143cad8b8;
                    *(longlong *)(unaff_RBX + 0x88) = lVar33;
                    uVar39 = *(undefined8 *)(lVar33 + 0x20);
                    uVar34 = *(undefined8 *)(lVar33 + 0x28);
                    *(undefined8 *)(unaff_RBX + 0x640) = 4;
                    *(undefined8 *)(unaff_RBX + 0x648) = uVar39;
                    *(undefined8 *)(unaff_RBX + 0x650) = uVar34;
                    unaff_RBX[0x6c] = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739b3e;
                    uVar39 = pdb_140f33290();
                    UNRECOVERED_JUMPTABLE = *(code **)(uVar24 + 0x18);
                    unaff_RBX[0x6c] = 1;
                    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739b59;
                    cVar18 = (*UNRECOVERED_JUMPTABLE)(uVar39,unaff_RBX + 0x640);
                    if (cVar18 != '\0') {
                      lVar33 = *plVar5;
                      uVar3 = *(ulonglong *)(lVar33 + 0x38);
                      if (uVar3 == 0) {
                        unaff_RBX[0x6c] = 1;
                        *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a12b;
                        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                        goto code_r0x00014173a218;
                      }
                      uVar34 = *(undefined8 *)(lVar33 + 0x30);
                      uVar35 = *(undefined8 *)(lVar33 + 0x40);
                      uVar4 = *(undefined8 *)(lVar33 + 0x48);
                      *(undefined8 *)(unaff_RBX + 0xc0) = uVar34;
                      *(ulonglong *)(unaff_RBX + 200) = uVar3;
                      *(undefined8 *)(unaff_RBX + 0xd0) = uVar35;
                      *(undefined8 *)(unaff_RBX + 0xd8) = uVar4;
                      *(undefined8 *)(unaff_RBX + 0xe0) = 0;
                      *(undefined **)(unaff_RBX + 0x120) = &UNK_14332b290;
                      *(undefined8 *)(unaff_RBX + 0x128) = 0x33;
                      if (uVar3 == 1) {
                        unaff_RBX[0x6c] = 1;
                        *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a14d;
                        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                        goto code_r0x00014173a218;
                      }
                      *(undefined8 *)(unaff_RBX + 0x98) = uVar34;
                      *(ulonglong *)(unaff_RBX + 0xa0) = uVar3;
                      *(undefined8 *)(unaff_RBX + 0xa8) = uVar35;
                      *(undefined8 *)(unaff_RBX + 0xb0) = uVar4;
                      *(undefined8 *)(unaff_RBX + 0xb8) = 1;
                      *(longlong *)(unaff_RBX + 0x220) = *plVar32 + 0x20;
                      if (uVar3 < 3) {
                        unaff_RBX[0x6c] = 1;
                        *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173a16f;
                        pdb_142dc8110(&UNK_14332aff8,0x22,&UNK_14332b278);
                        goto code_r0x00014173a218;
                      }
                      *(undefined8 *)(unaff_RBX + 0x150) = uVar34;
                      *(ulonglong *)(unaff_RBX + 0x158) = uVar3;
                      *(undefined8 *)(unaff_RBX + 0x160) = uVar35;
                      *(undefined8 *)(unaff_RBX + 0x168) = uVar4;
                      *(undefined8 *)(unaff_RBX + 0x170) = 2;
                      *(undefined1 **)(unaff_RBX + 0x280) = unaff_RBX + 0xc0;
                      *(undefined1 **)(unaff_RBX + 0x288) = unaff_RBX + 0x120;
                      *(undefined **)(unaff_RBX + 0x290) = &UNK_14332b058;
                      *(undefined1 **)(unaff_RBX + 0x298) = unaff_RBX + 0x98;
                      *(undefined1 **)(unaff_RBX + 0x2a0) = unaff_RBX + 0x220;
                      *(undefined **)(unaff_RBX + 0x2a8) = &UNK_14332b078;
                      *(undefined1 **)(unaff_RBX + 0x2b0) = puVar47;
                      *(longlong *)(unaff_RBX + 0x2b8) = *(longlong *)(unaff_RBX + 0x70) + 0x10;
                      *(undefined **)(unaff_RBX + 0x2c0) = &UNK_14332b098;
                      *(undefined1 **)(unaff_RBX + 0x108) = puVar46;
                      *(undefined8 *)(unaff_RBX + 0x110) = 3;
                      *(longlong *)(unaff_RBX + 0x118) = lVar33 + 0x30;
                      *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x650);
                      *(undefined8 *)(unaff_RBX + 0xf0) = *(undefined8 *)(unaff_RBX + 0x640);
                      *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0x648);
                      unaff_RBX[0x6c] = 1;
                      *(undefined1 **)((longlong)ppuVar57 + 0x20) = unaff_RBX + 0x108;
                      uVar34 = *(undefined8 *)(unaff_RBX + 0x88);
                      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739d0a;
                      pdb_140dd7f80(uVar34,uVar39,uVar24,unaff_RBX + 0xf0);
                    }
                  }
                }
                if (*(longlong *)(unaff_RBX + 0x1c0) == 0) {
                  lVar33 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
                  *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
                  *(undefined8 *)(unaff_RBX + 0x288) = _UNK_14332b500;
                  lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
                  uVar39 = *(undefined8 *)(lVar31 + 0x20);
                  uVar34 = *(undefined8 *)(lVar31 + 0x28);
                  unaff_RBX[0x6c] = 1;
                  *(undefined1 **)((longlong)ppuVar57 + 0x20) = unaff_RBX + 0x1c8;
                  *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739d59;
                  pdb_141c2b710(lVar33 + 0x10,unaff_RBX + 0x280,uVar39,uVar34);
                }
              }
              *(undefined4 *)(unaff_RBX + 0x290) = *(undefined4 *)(unaff_RBX + 0x1d0);
              *(undefined4 *)(unaff_RBX + 0x294) = *(undefined4 *)(unaff_RBX + 0x1d4);
              *(undefined4 *)(unaff_RBX + 0x298) = *(undefined4 *)(unaff_RBX + 0x1d8);
              *(undefined4 *)(unaff_RBX + 0x29c) = *(undefined4 *)(unaff_RBX + 0x1dc);
              *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x1c0);
              *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0x1c8);
              unaff_RBX[0x6c] = 0;
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739d8f;
              pdb_14173b990(unaff_RBX + 0x260,unaff_RBX + 0x280);
              *(longlong *)(unaff_RBX + 0x88) = *(longlong *)(unaff_RBX + 0x70) + 0x58;
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739da4;
              pdb_141ac4fd0();
              plVar5 = (longlong *)**(undefined8 **)(unaff_RBX + 0x88);
              LOCK();
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              unaff_R13 = *(uint **)(unaff_RBX + 0x80);
              if (*plVar5 == 0) {
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739dc1;
                pdb_140dd76c0();
              }
              plVar5 = (longlong *)*plVar32;
              LOCK();
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              if (*plVar5 == 0) {
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739dd3;
                pdb_140dd76c0(plVar32);
              }
              plVar32 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
              LOCK();
              *plVar32 = *plVar32 + -1;
              UNLOCK();
              ppuVar56 = ppuVar57;
              if (*plVar32 == 0) {
                lVar33 = *(longlong *)(unaff_RBX + 0x70);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739def;
                pdb_140dd78e0(lVar33 + 0x40);
              }
              goto code_r0x000141739df0;
            }
            puVar42[0] = 1;
            puVar42[1] = 0;
            uVar17 = 4;
            puVar25 = puVar42;
            break;
          case 5:
            puVar42 = (uint *)0x4801beca;
            goto code_r0x00014173f2cb;
          case 7:
            ppuVar57 = (uint **)(ulonglong)(iVar20 + 0x8b32bd94);
            puVar40 = (undefined *)0x4332bb50;
          case 6:
code_r0x00014173f49a:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173f49f;
            pdb_142dc8570(puVar40);
          case 8:
            *(byte *)puVar25 = (byte)*puVar25;
            *(byte *)param_1 = (byte)*param_1 + 0x94;
            param_2[0x24] = param_2[0x24] - (int)ppuVar57;
            goto code_r0x00014173f31e;
          case 9:
code_r0x00014173f5b7:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0xb:
            goto code_r0x00014173f702;
          case 0xc:
            puVar42 = (uint *)(puVar65 + -6);
            bVar67 = *puVar42 < (uint)unaff_RBX;
            *puVar42 = *puVar42 - (uint)unaff_RBX;
            ppuVar59 = ppuVar57;
            goto code_r0x00014173f5dc;
          case 0xd:
            *(uint **)((longlong)ppuVar57 + -8) = param_1;
            *(undefined1 **)((longlong)ppuVar57 + -0x10) = unaff_RBX;
            puVar65 = (undefined8 *)((longlong)ppuVar57 + -0x58);
code_r0x00014173f853:
            puVar65[8] = 0xfffffffffffffffe;
            puVar25 = (uint *)(ulonglong)(byte)param_2[0x1e];
            puVar40 = &UNK_14332bdc8;
code_r0x00014173f869:
            iVar20 = *(int *)(puVar40 + (longlong)puVar25 * 4);
            puVar65[6] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014173f874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar29 = (uint *)(*(code *)(puVar40 + iVar20))();
            return puVar29;
          case 0xe:
            *(byte *)puVar25 = (byte)*puVar25 - cVar18;
            *(byte *)puVar25 = (byte)*puVar25 + cVar18;
            goto code_r0x00014173f9a9;
          case 0xf:
            unaff_RBX[0x5f] = unaff_RBX[0x5f] + (char)unaff_RBX;
            return puVar25;
          case 0x10:
            ppuVar60 = (uint **)((longlong)ppuVar57 + -8);
            *(undefined8 **)((longlong)ppuVar57 + -8) = puVar65;
            param_2[0xe] = param_2[0xe] + (int)puVar25 + (uint)((byte)*unaff_R15 < (byte)param_3);
            goto code_r0x00014173f877;
          case 0x11:
            UNRECOVERED_JUMPTABLE = (code *)swi(3);
            puVar29 = (uint *)(*UNRECOVERED_JUMPTABLE)();
            return puVar29;
          case 0x12:
            goto code_r0x00014173fc92;
          case 0x13:
            (&UNK_14332bd1d)[iVar20] = (&UNK_14332bd1d)[iVar20] + -0x6c;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x14:
            uVar22 = *param_1;
            *param_1 = *param_1 + 0x4332bd94;
            unaff_RBX[200] = unaff_RBX[200] + cVar18 + -0x6f + (0xbccd426b < uVar22);
            uVar22 = *(uint *)(unaff_RBX + 0xd8);
            uVar71 = *(uint *)(unaff_RBX + 0xdc);
            in_XMM1_Dc = *(uint *)(unaff_RBX + 0xe0);
            in_XMM1_Dd = *(uint *)(unaff_RBX + 0xe4);
            puVar65[0x25] = in_XMM0_Qa;
            puVar65[0x26] = in_XMM0_Qb;
            ppuVar62 = ppuVar57;
            puVar25 = puVar29;
            goto code_r0x00014173fb3c;
          case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x16:
code_r0x000141740425:
            *(undefined1 *)((longlong)puVar65 + 0x15f) = 0;
            *(undefined1 *)((longlong)puVar65 + 0x15e) = 1;
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740438;
            puVar25 = (uint *)pdb_142dc79e0();
            puVar42 = puVar29;
            goto code_r0x000141740439;
          case 0x17:
            *(byte *)puVar25 = (byte)*puVar25 + cVar18;
            goto code_r0x000141740413;
          case 0x18:
            *(byte *)puVar25 = (byte)*puVar25;
            uVar22 = *param_1;
            *(byte *)param_1 = (byte)*param_1 + 0x94;
            *(char *)(puVar65 + 0x1a) = *(char *)(puVar65 + 0x1a) + -0x6c + (0x6b < (byte)uVar22);
            ppuVar56 = ppuVar57;
            goto code_r0x00014173fe1a;
          }
          goto code_r0x000141739e30;
        case (uint *)0x141737417:
          goto code_r0x000141737417;
        case (uint *)0x141738c43:
code_r0x000141738c43:
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738c4e;
          pdb_140dd7f80(puVar42,unaff_R15,unaff_R12,param_3);
code_r0x000141738c4f:
          in_R11 = *(uint **)(unaff_RBX + 0x70);
code_r0x000141738c53:
          *(uint **)(in_R11 + 0x18) = in_R11 + 0x14;
          in_R11[0x1a] = 0;
          in_R11[0x1b] = 0;
          param_2 = in_R11;
          puVar42 = unaff_R13;
code_r0x000141738c63:
          *(uint **)(unaff_RBX + 0x80) = param_2 + 0x18;
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738c84;
          pdb_140b35bb0(unaff_RBX + 0x280,param_2 + 0x18,unaff_RBX + 0x1bf,param_1);
          lVar33 = *(longlong *)(unaff_RBX + 0x280);
          if (lVar33 != 2) {
            lVar31 = *(longlong *)(unaff_RBX + 0x288);
            uVar39 = *(undefined8 *)(unaff_RBX + 0x290);
            uVar34 = *(undefined8 *)(unaff_RBX + 0x298);
            uVar35 = *(undefined8 *)(unaff_RBX + 0x2a0);
            lVar36 = *(longlong *)(unaff_RBX + 0x70);
            if (*(longlong *)(lVar36 + 0x68) != 0) {
              *(longlong *)(unaff_RBX + 0x80) = *(longlong *)(lVar36 + 0x68);
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738ccf;
              pdb_140974580();
              pbVar37 = *(byte **)(unaff_RBX + 0x80);
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738ce7;
              pub_1406abac0(pbVar37,0x38,8);
              lVar36 = *(longlong *)(unaff_RBX + 0x70);
            }
            if ((int)lVar33 == 1) {
              uVar39 = *(undefined8 *)(lVar36 + 0x10);
              uVar34 = *(undefined8 *)(lVar36 + 0x18);
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738cfd;
              pdb_14007ee60();
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738d0c;
              pbVar37 = pub_1406abab0(0x10,8);
              if (pbVar37 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738e29;
                pdb_142dc7e11(8,0x10);
              }
              pbVar37[0] = 1;
              pbVar37[1] = 0;
              pbVar37[2] = 0;
              pbVar37[3] = 0;
              pbVar37[4] = 0;
              pbVar37[5] = 0;
              pbVar37[6] = 0;
              pbVar37[7] = 0;
              pbVar37[8] = 1;
              pbVar37[9] = 0;
              pbVar37[10] = 0;
              pbVar37[0xb] = 0;
              pbVar37[0xc] = 0;
              pbVar37[0xd] = 0;
              pbVar37[0xe] = 0;
              pbVar37[0xf] = 0;
              *(undefined8 *)(unaff_RBX + 0x260) = uVar39;
              *(undefined8 *)(unaff_RBX + 0x268) = uVar34;
              *(byte **)(unaff_RBX + 0x270) = pbVar37;
              *(undefined **)(unaff_RBX + 0x278) = &UNK_14332b300;
            }
            else {
              *(longlong *)(unaff_RBX + 0x150) = lVar31;
              *(undefined8 *)(unaff_RBX + 0x158) = uVar39;
              *(undefined8 *)(unaff_RBX + 0x160) = uVar34;
              *(undefined8 *)(unaff_RBX + 0x168) = uVar35;
              if (lVar31 == 0) {
                lVar33 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
                *(undefined8 *)(unaff_RBX + 0x280) = _DAT_14332b4f8;
                *(undefined8 *)(unaff_RBX + 0x288) = _UNK_14332b500;
                lVar31 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
                uVar39 = *(undefined8 *)(lVar31 + 0x20);
                uVar34 = *(undefined8 *)(lVar31 + 0x28);
                unaff_RBX[0x97] = 1;
                *(undefined1 **)((longlong)ppuVar57 + 0x20) = unaff_RBX + 0x158;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738dad;
                pdb_141c2b710(lVar33 + 0x10,unaff_RBX + 0x280,uVar39,uVar34);
              }
              *(undefined8 *)(unaff_RBX + 0x290) = *(undefined8 *)(unaff_RBX + 0x160);
              *(undefined8 *)(unaff_RBX + 0x298) = *(undefined8 *)(unaff_RBX + 0x168);
              *(undefined8 *)(unaff_RBX + 0x280) = *(undefined8 *)(unaff_RBX + 0x150);
              *(undefined8 *)(unaff_RBX + 0x288) = *(undefined8 *)(unaff_RBX + 0x158);
              unaff_RBX[0x97] = 0;
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738df4;
              pdb_14173b990(unaff_RBX + 0x260,unaff_RBX + 0x280);
              lVar36 = *(longlong *)(unaff_RBX + 0x70);
            }
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141738e02;
            pdb_140981490(lVar36 + 0x50);
            plVar32 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x38);
            LOCK();
            *plVar32 = *plVar32 + -1;
            lVar33 = *plVar32;
            UNLOCK();
            unaff_R13 = puVar42;
joined_r0x000141738e0f:
            if (lVar33 == 0) {
              lVar33 = *(longlong *)(unaff_RBX + 0x70);
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173914c;
              pdb_140dd76c0(lVar33 + 0x38);
            }
            plVar32 = *(longlong **)(*(longlong *)(unaff_RBX + 0x70) + 0x40);
            LOCK();
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (*plVar32 == 0) {
              lVar33 = *(longlong *)(unaff_RBX + 0x70);
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141739168;
              pdb_140dd78e0(lVar33 + 0x40);
            }
            plVar32 = (longlong *)**(undefined8 **)(unaff_RBX + 0x70);
            if (plVar32 != (longlong *)0x0) {
              LOCK();
              *plVar32 = *plVar32 + -1;
              UNLOCK();
              if (*plVar32 == 0) {
                uVar39 = *(undefined8 *)(unaff_RBX + 0x70);
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173918c;
                pdb_140c7a240(uVar39);
              }
            }
            goto code_r0x000141739e0c;
          }
          puVar42[0] = 1;
          puVar42[1] = 0;
          uVar17 = 3;
          puVar25 = puVar42;
          goto code_r0x000141739e30;
        case (uint *)0x141739e3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (uint *)0x141739e48:
          goto code_r0x000141739e48;
        case (uint *)0x14173f2cb:
code_r0x00014173f2cb:
          puVar65 = (undefined8 *)((longlong)ppuVar57 + 0x80);
          *(undefined8 *)((longlong)ppuVar57 + 0x130) = 0xfffffffffffffffe;
          uVar72 = param_2[0x2c];
          puVar43 = (uint *)&UNK_14332bda8;
          uVar24 = (ulonglong)*(int *)(&UNK_14332bda8 + (ulonglong)(byte)uVar72 * 4);
          puVar25 = (uint *)(&UNK_14332bda8 + uVar24);
          *(uint **)((longlong)ppuVar57 + 0x128) = param_2;
          uVar73 = (uint)param_2;
          cVar18 = (char)puVar25;
          puVar29 = puVar42;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((byte)uVar72) {
          case 0:
            in_XMM0_Qa = *(undefined **)param_2;
            in_XMM0_Qb = *(undefined8 *)(param_2 + 2);
            uVar22 = param_2[4];
            uVar71 = param_2[5];
            in_XMM1_Dc = param_2[6];
            in_XMM1_Dd = param_2[7];
            uVar72 = param_2[8];
            uVar73 = param_2[9];
            in_XMM2_Dc = param_2[10];
            in_XMM2_Dd = param_2[0xb];
            *(uint *)((longlong)ppuVar57 + 0x40) = uVar72;
            *(uint *)((longlong)ppuVar57 + 0x44) = uVar73;
            *(uint *)((longlong)ppuVar57 + 0x48) = in_XMM2_Dc;
            *(uint *)((longlong)ppuVar57 + 0x4c) = in_XMM2_Dd;
code_r0x00014173f30e:
            *(uint *)(puVar65 + -10) = uVar22;
            *(uint *)((longlong)puVar65 + -0x4c) = uVar71;
            *(uint *)(puVar65 + -9) = in_XMM1_Dc;
            *(uint *)((longlong)puVar65 + -0x44) = in_XMM1_Dd;
            puVar65[-0xc] = in_XMM0_Qa;
            puVar65[-0xb] = in_XMM0_Qb;
            uVar74 = param_2[0xc];
            uVar75 = param_2[0xd];
            in_XMM3_Dc = param_2[0xe];
            in_XMM3_Dd = param_2[0xf];
            in_XMM4_Da = param_2[0x10];
            in_XMM4_Db = param_2[0x11];
            in_XMM4_Dc = param_2[0x12];
            in_XMM4_Dd = param_2[0x13];
            goto code_r0x00014173f31e;
          case 1:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173f4ba;
            pdb_142dc8570(&UNK_14332ba20);
          case 2:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173f4ae;
            pdb_142dc8590(&UNK_14332ba20);
          case 3:
            puVar42 = param_2 + 0x14;
            ppuVar60 = ppuVar57;
            if ((byte)param_2[0x28] != 0) {
              if ((byte)param_2[0x28] != 1) {
                *(uint **)((longlong)ppuVar57 + 0x120) = puVar42;
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173f4cd;
                pdb_142dc8590(&UNK_14332bb50);
              }
              *(uint **)((longlong)ppuVar57 + 0x120) = puVar42;
              puVar40 = &UNK_14332bb50;
              goto code_r0x00014173f49a;
            }
            goto code_r0x00014173f360;
          case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
            *(int *)(uVar24 + 0xd07aeb93) = *(int *)(uVar24 + 0xd07aeb93) + uVar73;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173f732;
            pdb_142dc8590();
          case 6:
            (&UNK_14332bd35)[uVar24] = (&UNK_14332bd35)[uVar24] ^ 0xa8;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173f723;
            pdb_142dc8570();
          case 7:
            puVar42 = param_2 + 0x18;
            bVar67 = CARRY4(*puVar42,uVar73) ||
                     CARRY4(*puVar42 + uVar73,(uint)(0xfffffffebccd4257 < uVar24));
            *puVar42 = *puVar42 + uVar73 + (uint)(0xfffffffebccd4257 < uVar24);
            ppuVar59 = ppuVar57;
            goto code_r0x00014173f5dc;
          case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 9:
            *(byte *)((longlong)param_3 + -0x73) =
                 *(byte *)((longlong)param_3 + -0x73) - (char)param_3;
            puVar25 = (uint *)(ulonglong)((uint)puVar25 | 0x1bec181);
          case 10:
            *(uint *)((longlong)puVar25 + -0x77cb615) =
                 *(int *)((longlong)puVar25 + -0x77cb615) + uVar73;
            *(int *)((longlong)ppuVar57 + 0xaf) = *(int *)((longlong)ppuVar57 + 0xaf) + (int)puVar42
            ;
            *(undefined8 *)((longlong)ppuVar57 + 0xa8) = *(undefined8 *)((longlong)ppuVar57 + 0xb8);
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173f9d4;
            pdb_142dc8570(&UNK_14332bb50);
          case 0xb:
            ppuVar60 = (uint **)((longlong)ppuVar57 + 8);
            goto code_r0x00014173f877;
          case 0xc:
            (&UNK_14332bd6f)[uVar24] = (&UNK_14332bd6f)[uVar24] + -0x58;
            *(byte *)puVar25 = (byte)*puVar25 + cVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0xd:
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
            (*UNRECOVERED_JUMPTABLE)();
          case 0xe:
            *(byte *)(param_2 + 0x36) = (byte)param_2[0x36] + (char)((ulonglong)unaff_RBX >> 8);
            goto code_r0x00014173fca0;
          case 0xf:
            UNK_14332bda8 = UNK_14332bda8 - cVar18;
            *(byte *)puVar25 = (byte)*puVar25 + cVar18;
            ppuVar62 = ppuVar57;
            puVar25 = puVar42;
code_r0x00014173fb3c:
            *(uint *)(puVar65 + 0x27) = uVar22;
            *(uint *)((longlong)puVar65 + 0x13c) = uVar71;
            *(uint *)(puVar65 + 0x28) = in_XMM1_Dc;
            *(uint *)((longlong)puVar65 + 0x144) = in_XMM1_Dd;
            puVar65[0x4b] = unaff_RBX + 0xe8;
            *(undefined8 *)((longlong)ppuVar62 + -8) = 0x14173fb5f;
            pub_142e32760(unaff_RBX + 0xe8,param_1,0xe8);
            unaff_RBX[0x1d0] = 0;
            unaff_RDI = *(uint **)(unaff_RBX + 0xe8);
            *(undefined8 *)((longlong)ppuVar62 + -8) = 0x14173fba5;
            pub_142e32760(puVar65 + 0x29,unaff_RBX + 0xf0,0xc0);
            uVar39 = *(undefined8 *)(unaff_RBX + 0x1b0);
            uVar34 = *(undefined8 *)(unaff_RBX + 0x1b8);
            uVar23 = *(undefined4 *)(unaff_RBX + 0x1c4);
            uVar7 = *(undefined4 *)(unaff_RBX + 0x1c8);
            uVar8 = *(undefined4 *)(unaff_RBX + 0x1cc);
            *(undefined4 *)(puVar65 + 0x46) = *(undefined4 *)(unaff_RBX + 0x1c0);
            *(undefined4 *)((longlong)puVar65 + 0x234) = uVar23;
            *(undefined4 *)(puVar65 + 0x47) = uVar7;
            *(undefined4 *)((longlong)puVar65 + 0x23c) = uVar8;
            puVar65[0x44] = uVar39;
            puVar65[0x45] = uVar34;
            *(undefined8 *)((longlong)ppuVar62 + -8) = 0x14173fbcd;
            pdb_14098a860(puVar65 + 0x44);
            *(undefined8 *)((longlong)ppuVar62 + -8) = 0x14173fbe4;
            pub_142e32760(puVar65 + -0xc,puVar65 + 0x29,0xc0);
            unaff_RBX = (undefined1 *)puVar65[0x4a];
            unaff_RBX[0x1d0] = 1;
            if (!SBORROW8(0,(longlong)unaff_RDI)) {
              *(undefined8 *)((longlong)ppuVar62 + -8) = 0x14173fc1b;
              pub_142e32760(puVar65 + 0x2c,puVar65 + -0xc,0xc0);
              puVar65[0x29] = 1;
              puVar29 = puVar25;
              goto code_r0x00014173fc26;
            }
            puVar25[0] = 2;
            puVar25[1] = 0;
            uVar17 = 3;
            goto code_r0x00014173fc81;
          case 0x10:
            *(ulonglong *)((longlong)ppuVar57 + -8) = unaff_R12;
            *(uint **)((longlong)ppuVar57 + -0x10) = puVar42;
            *(uint **)((longlong)ppuVar57 + -0x18) = param_1;
            *(undefined1 **)((longlong)ppuVar57 + -0x20) = unaff_RBX;
            ppuVar63 = (uint **)((longlong)ppuVar57 + -0x208);
            puVar65 = (undefined8 *)((longlong)ppuVar57 + -0x188);
            *(undefined8 *)((longlong)ppuVar57 + -0x28) = 0xfffffffffffffffe;
code_r0x00014173fdf6:
            uVar22 = param_2[0x22];
            puVar65[0x29] = param_2;
            ppuVar57 = ppuVar63;
            puVar29 = puVar43;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((byte)uVar22) {
            case 0:
              in_XMM0_Qa = *(undefined **)param_2;
              in_XMM0_Qb = *(undefined8 *)(param_2 + 2);
              ppuVar56 = ppuVar63;
              goto code_r0x00014173fe1a;
            case 1:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppuVar63 + -8) = 0x141740485;
              pdb_142dc8570(&UNK_14332ba20);
            case 2:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppuVar63 + -8) = 0x141740479;
              pdb_142dc8590(&UNK_14332ba20);
            }
            goto code_r0x00014173feae;
          case 0x11:
code_r0x000141740439:
            bVar67 = (char)puVar25 == '\0';
            puVar29 = puVar42;
            break;
          case 0x12:
            *(byte *)puVar25 = (byte)*puVar25 + cVar18;
            bVar67 = ((uint)puVar25 + (int)puVar65 & 0x75) == 0;
            puVar64 = (undefined8 *)((longlong)ppuVar57 + -8);
            ppuVar57 = (uint **)((longlong)ppuVar57 + -8);
            *puVar64 = 0xffffffffc0849001;
            break;
          case 0x13:
            LOCK();
            *(byte *)puVar25 = (byte)*puVar25 + cVar18;
            UNLOCK();
            pbVar37 = (byte *)((longlong)puVar42 + 0xf);
            bVar19 = *pbVar37;
            cVar18 = (char)((ulonglong)puVar25 >> 8);
            *pbVar37 = *pbVar37 + cVar18;
            if (*pbVar37 != 0 && SCARRY1(bVar19,cVar18) == (char)*pbVar37 < '\0') {
              (&UNK_14332bd33)[uVar24] = (&UNK_14332bd33)[uVar24] + -0x58;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(int *)((longlong)ppuVar57 + 0x40) = *(int *)((longlong)ppuVar57 + 0x40) + -0x4332bda8;
            ppuVar56 = (uint **)((longlong)ppuVar57 + 8);
            goto code_r0x00014173fe1a;
          }
          if (bVar67) {
            unaff_RBX[0x39] = 1;
          }
code_r0x00014174008e:
          uVar23 = 0;
          LOCK();
          uVar22 = *unaff_R15;
          *(byte *)unaff_R15 = 0;
          UNLOCK();
          if ((byte)uVar22 == 2) {
            *(undefined1 *)((longlong)puVar65 + 0x15f) = 0;
            *(undefined1 *)((longlong)puVar65 + 0x15e) = 1;
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417400af;
            pdb_142dc6ca0();
            uVar23 = 0;
          }
code_r0x0001417400b6:
          *(undefined4 *)(puVar65 + 0x2b) = uVar23;
          *puVar65 = puVar65[0x27];
          puVar65[1] = param_1;
          puVar65[0x14] = 0;
          puVar65[0x15] = 1;
          puVar65[0x16] = 0;
          puVar65[0x1a] = 0x60000020;
          puVar65[0x18] = puVar65 + 0x14;
          puVar65[0x19] = &UNK_14332b508;
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740122;
          cVar18 = pdb_140f58310(puVar65,puVar65 + 0x18);
          if (cVar18 != '\0') {
            *(undefined **)((longlong)ppuVar57 + 0x20) = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740394;
            pdb_142dc8170(&UNK_14332b538,0x37,(longlong)puVar65 + 0x157,&UNK_14332b890);
          }
          uVar39 = puVar65[0x15];
          uVar34 = puVar65[0x16];
          lVar33 = puVar65[0xe];
          puVar65[0x28] = puVar65[0x14];
          if (lVar33 == 0) {
            pbVar37 = (byte *)0x0;
            cVar18 = *(char *)(puVar65 + 0x2b);
          }
          else {
            param_1 = (uint *)puVar65[0xf];
            puVar65[0x18] = lVar33;
            puVar65[0x19] = param_1;
            puVar65[0x17] = uVar39;
            if (param_1 == (uint *)0x0) {
              pbVar37 = (byte *)0x1;
            }
            else {
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740173;
              pdb_14007ee60();
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740180;
              pbVar37 = pub_1406abab0((ulonglong)param_1,1);
              if (pbVar37 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740195;
                pdb_142dc7e11(1,param_1);
              }
            }
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417401bf;
            pub_142e32760(pbVar37,lVar33 + 0x10,param_1);
            plVar32 = (longlong *)puVar65[0x18];
            LOCK();
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (*plVar32 == 0) {
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417401d8;
              pdb_1406ed6a0(puVar65 + 0x18);
            }
            uVar39 = puVar65[0x17];
            cVar18 = *(char *)(puVar65 + 0x2b);
          }
          if ((cVar18 != '\0') && (uVar24 = puVar65[10], uVar24 != 0)) {
            pbVar6 = (byte *)puVar65[0xb];
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740201;
            pub_1406abac0(pbVar6,uVar24,1);
          }
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14174020e;
          pdb_14098a860(puVar65 + 0x10);
          lVar33 = puVar65[0x28];
          uVar24 = puVar65[0x26];
          if (uVar24 != 0) {
            pbVar6 = (byte *)puVar65[0x27];
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740234;
            pub_1406abac0(pbVar6,uVar24,1);
          }
          lVar31 = puVar65[0x29];
          *(undefined1 *)(lVar31 + 0x80) = 1;
          if (SBORROW8(0,lVar33)) goto code_r0x000141740265;
          if (lVar33 == -0x7fffffffffffffff) {
            puVar29[0] = 2;
            puVar29[1] = 0;
            uVar17 = 3;
            goto code_r0x0001417402a5;
          }
          puVar65[0x18] = 1;
          puVar65[0x19] = 1;
          puVar65[0x1a] = lVar33;
          puVar65[0x1b] = uVar39;
          puVar65[0x1c] = uVar34;
          puVar65[0x1d] = pbVar37;
          puVar65[0x1e] = param_1;
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740301;
          pdb_14007ee60();
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740310;
          pbVar37 = pub_1406abab0(0x38,8);
          if (pbVar37 == (byte *)0x0) {
code_r0x000141740413:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740422;
            pdb_142dc7e11(8,0x38);
          }
          *(undefined8 *)(pbVar37 + 0x30) = puVar65[0x1e];
          uVar39 = puVar65[0x18];
          uVar34 = puVar65[0x19];
          uVar35 = puVar65[0x1a];
          uVar4 = puVar65[0x1b];
          uVar2 = puVar65[0x1d];
          *(undefined8 *)(pbVar37 + 0x20) = puVar65[0x1c];
          *(undefined8 *)(pbVar37 + 0x28) = uVar2;
          *(undefined8 *)(pbVar37 + 0x10) = uVar35;
          *(undefined8 *)(pbVar37 + 0x18) = uVar4;
          *(undefined8 *)pbVar37 = uVar39;
          *(undefined8 *)(pbVar37 + 8) = uVar34;
          puVar40 = &UNK_14332ba38;
          uVar39 = 0;
          goto code_r0x000141740298;
        case (uint *)0x14173f319:
          *(byte *)unaff_RDI = (byte)*unaff_RDI ^ 0x74;
          *(byte *)(param_2 + 0x10) = (byte)param_2[0x10] - (char)((ulonglong)puVar25 >> 8);
code_r0x00014173f31e:
          *(uint *)(puVar65 + -6) = uVar74;
          *(uint *)((longlong)puVar65 + -0x2c) = uVar75;
          *(uint *)(puVar65 + -5) = in_XMM3_Dc;
          *(uint *)((longlong)puVar65 + -0x24) = in_XMM3_Dd;
          *(uint *)(puVar65 + -4) = in_XMM4_Da;
          *(uint *)((longlong)puVar65 + -0x1c) = in_XMM4_Db;
          *(uint *)(puVar65 + -3) = in_XMM4_Dc;
          *(uint *)((longlong)puVar65 + -0x14) = in_XMM4_Dd;
          puVar42 = param_2 + 0x14;
          *(undefined **)(param_2 + 0x14) = in_XMM0_Qa;
          *(undefined8 *)(param_2 + 0x16) = in_XMM0_Qb;
          param_2[0x18] = uVar22;
          param_2[0x19] = uVar71;
          param_2[0x1a] = in_XMM1_Dc;
          param_2[0x1b] = in_XMM1_Dd;
          param_2[0x1c] = uVar72;
          param_2[0x1d] = uVar73;
          param_2[0x1e] = in_XMM2_Dc;
          param_2[0x1f] = in_XMM2_Dd;
          param_2[0x20] = uVar74;
          param_2[0x21] = uVar75;
          param_2[0x22] = in_XMM3_Dc;
          param_2[0x23] = in_XMM3_Dd;
          param_2[0x24] = in_XMM4_Da;
          param_2[0x25] = in_XMM4_Db;
          param_2[0x26] = in_XMM4_Dc;
          param_2[0x27] = in_XMM4_Dd;
          *(byte *)(param_2 + 0x28) = 0;
          ppuVar60 = ppuVar57;
code_r0x00014173f360:
          puVar65[0x13] = puVar42;
          uVar39 = *(undefined8 *)(puVar42 + 2);
          puVar65[-2] = *(undefined8 *)puVar42;
          puVar65[-1] = uVar39;
          lVar33 = *(longlong *)(param_2 + 0x18);
          puVar65[4] = *(undefined8 *)(param_2 + 0x1e);
          uVar39 = *(undefined8 *)(param_2 + 0x1c);
          puVar65[2] = *(undefined8 *)(param_2 + 0x1a);
          puVar65[3] = uVar39;
          uVar39 = *(undefined8 *)(param_2 + 0x20);
          uVar34 = *(undefined8 *)(param_2 + 0x22);
          uVar22 = param_2[0x25];
          uVar71 = param_2[0x26];
          uVar72 = param_2[0x27];
          *(uint *)(puVar65 + 0xc) = param_2[0x24];
          *(uint *)((longlong)puVar65 + 100) = uVar22;
          *(uint *)(puVar65 + 0xd) = uVar71;
          *(uint *)((longlong)puVar65 + 0x6c) = uVar72;
          puVar65[10] = uVar39;
          puVar65[0xb] = uVar34;
          *(undefined8 *)((longlong)ppuVar60 + -8) = 0x14173f3a1;
          pdb_14098a860(puVar65 + 10);
          *puVar65 = puVar65[-2];
          puVar65[1] = puVar65[-1];
          puVar65[6] = puVar65[2];
          puVar65[7] = puVar65[3];
          puVar65[8] = puVar65[4];
          unaff_RBX = (undefined1 *)puVar65[0x15];
          unaff_RBX[0xa0] = 1;
          if (SBORROW8(0,lVar33)) {
            puVar29[0] = 2;
            puVar29[1] = 0;
            uVar17 = 3;
            goto code_r0x00014173f460;
          }
          puVar65[0xc] = *puVar65;
          puVar65[0xd] = puVar65[1];
          puVar65[0xf] = puVar65[6];
          puVar65[0x10] = puVar65[7];
          puVar65[0x11] = puVar65[8];
          puVar65[10] = 1;
          puVar65[0xb] = 1;
          puVar65[0xe] = lVar33;
          *(undefined8 *)((longlong)ppuVar60 + -8) = 0x14173f412;
          pdb_14007ee60();
          *(undefined8 *)((longlong)ppuVar60 + -8) = 0x14173f421;
          puVar25 = (uint *)pub_1406abab0(0x40,0x10);
          if (puVar25 == (uint *)0x0) {
            puVar42 = (uint *)0x10;
code_r0x00014173f47a:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar60 + -8) = 0x14173f484;
            pdb_142dc7e11(puVar42,0x40);
          }
          in_XMM0_Qa = (undefined *)puVar65[10];
          in_XMM0_Qb = puVar65[0xb];
          goto code_r0x00014173f42a;
        case (uint *)0x14173f46e:
          *(byte *)puVar25 = (byte)*puVar25 + cVar18;
          return puVar25;
        case (uint *)0x14173f47a:
          goto code_r0x00014173f47a;
        case (uint *)0x14173f597:
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          puVar29 = (uint *)(*UNRECOVERED_JUMPTABLE)();
          return puVar29;
        case (uint *)0x14173f5d7:
          *(undefined8 **)((longlong)ppuVar60 + -8) = puVar65;
          bVar67 = false;
          ppuVar59 = (uint **)((longlong)ppuVar60 + -8);
code_r0x00014173f5dc:
          *(byte *)param_2 = (byte)*param_2 + (char)puVar25 + bVar67;
          uVar39 = *(undefined8 *)(param_2 + 4);
          uVar34 = *(undefined8 *)(param_2 + 6);
          puVar65[-10] = uVar39;
          puVar65[-9] = uVar34;
          puVar65[-0xc] = in_XMM0_Qa;
          puVar65[-0xb] = in_XMM0_Qb;
          uVar22 = param_2[8];
          uVar71 = param_2[9];
          uVar72 = param_2[10];
          uVar73 = param_2[0xb];
          uVar74 = param_2[0xc];
          uVar75 = param_2[0xd];
          uVar21 = param_2[0xe];
          uVar13 = param_2[0xf];
          *(uint *)(puVar65 + -8) = uVar22;
          *(uint *)((longlong)puVar65 + -0x3c) = uVar71;
          *(uint *)(puVar65 + -7) = uVar72;
          *(uint *)((longlong)puVar65 + -0x34) = uVar73;
          *(uint *)(puVar65 + -6) = uVar74;
          *(uint *)((longlong)puVar65 + -0x2c) = uVar75;
          *(uint *)(puVar65 + -5) = uVar21;
          *(uint *)((longlong)puVar65 + -0x24) = uVar13;
          puVar65[8] = param_2 + 0x10;
          *(undefined **)(param_2 + 0x10) = in_XMM0_Qa;
          *(undefined8 *)(param_2 + 0x12) = in_XMM0_Qb;
          *(undefined8 *)(param_2 + 0x14) = uVar39;
          *(undefined8 *)(param_2 + 0x16) = uVar34;
          param_2[0x18] = uVar22;
          param_2[0x19] = uVar71;
          param_2[0x1a] = uVar72;
          param_2[0x1b] = uVar73;
          param_2[0x1c] = uVar74;
          param_2[0x1d] = uVar75;
          param_2[0x1e] = uVar21;
          param_2[0x1f] = uVar13;
          *(byte *)(param_2 + 0x20) = 0;
          unaff_RBX = *(undefined1 **)(param_2 + 0x10);
          unaff_R14 = *(uint **)(param_2 + 0x12);
          uVar39 = *(undefined8 *)(param_2 + 0x16);
          puVar65[-4] = *(undefined8 *)(param_2 + 0x14);
          puVar65[-3] = uVar39;
          uVar39 = *(undefined8 *)(param_2 + 0x18);
          uVar34 = *(undefined8 *)(param_2 + 0x1a);
          uVar22 = param_2[0x1d];
          uVar71 = param_2[0x1e];
          uVar72 = param_2[0x1f];
          *(uint *)(puVar65 + 2) = param_2[0x1c];
          *(uint *)((longlong)puVar65 + 0x14) = uVar22;
          *(uint *)(puVar65 + 3) = uVar71;
          *(uint *)((longlong)puVar65 + 0x1c) = uVar72;
          *puVar65 = uVar39;
          puVar65[1] = uVar34;
          *(undefined8 *)((longlong)ppuVar59 + -8) = 0x14173f65a;
          pdb_14098a860(puVar65);
          puVar65[-2] = puVar65[-4];
          puVar65[-1] = puVar65[-3];
          unaff_RDI = (uint *)puVar65[7];
          *(byte *)(unaff_RDI + 0x20) = 1;
          if (SBORROW8(0,(longlong)unaff_RBX)) {
            puVar29[0] = 2;
            puVar29[1] = 0;
            bVar19 = 3;
            puVar25 = puVar29;
          }
          else {
            *puVar65 = puVar65[-2];
            puVar65[1] = puVar65[-1];
            *(undefined8 *)((longlong)ppuVar59 + -8) = 0x14173f68e;
            pdb_14007ee60();
            *(undefined8 *)((longlong)ppuVar59 + -8) = 0x14173f69d;
            puVar25 = (uint *)pub_1406abab0(0x30,8);
            bVar67 = puVar25 == (uint *)0x0;
code_r0x00014173f6a0:
            if (bVar67) {
              puVar65[5] = unaff_R14;
              puVar65[8] = unaff_RBX;
              puVar40 = (undefined *)0x8;
              ppuVar57 = ppuVar59;
code_r0x00014173f702:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173f707;
              pdb_142dc7e11(puVar40);
            }
code_r0x00014173f6a2:
            puVar25[0] = 1;
            puVar25[1] = 0;
            puVar25[2] = 1;
            puVar25[3] = 0;
            *(undefined1 **)(puVar25 + 4) = unaff_RBX;
            *(uint **)(puVar25 + 6) = unaff_R14;
            uVar39 = puVar65[1];
            *(undefined8 *)(puVar25 + 8) = *puVar65;
            *(undefined8 *)(puVar25 + 10) = uVar39;
            puVar29[0] = 0;
            puVar29[1] = 0;
            *(uint **)(puVar29 + 2) = puVar25;
            puVar40 = &UNK_14332ba78;
code_r0x00014173f6d3:
            *(undefined **)(puVar29 + 4) = puVar40;
            bVar19 = 1;
            puVar25 = puVar29;
          }
          *(byte *)(unaff_RDI + 0x22) = bVar19;
code_r0x00014173f6e2:
          return puVar25;
        case (uint *)0x14173f6e2:
          goto code_r0x00014173f6e2;
        case (uint *)0x14173f6ee:
          return puVar25;
        case (uint *)0x14173f822:
          *(byte *)puVar25 = (byte)*puVar25 + cVar18;
          (&UNK_14332bcff)[uVar24] = (&UNK_14332bcff)[uVar24] + 't';
          return (uint *)((ulonglong)param_2 & 0xffffffff);
        case (uint *)0x14173f873:
code_r0x00014173f877:
          puVar65[-8] = (ulonglong)param_2[4];
          uVar39 = *(undefined8 *)param_2;
          uVar34 = *(undefined8 *)(param_2 + 2);
          puVar65[-10] = uVar39;
          puVar65[-9] = uVar34;
          uVar22 = param_2[7];
          uVar71 = param_2[8];
          uVar72 = param_2[9];
          uVar73 = param_2[10];
          uVar74 = param_2[0xb];
          uVar75 = param_2[0xc];
          uVar21 = param_2[0xd];
          *(uint *)(puVar65 + -7) = param_2[6];
          *(uint *)((longlong)puVar65 + -0x34) = uVar22;
          *(uint *)(puVar65 + -6) = uVar71;
          *(uint *)((longlong)puVar65 + -0x2c) = uVar72;
          *(uint *)(puVar65 + -5) = uVar73;
          *(uint *)((longlong)puVar65 + -0x24) = uVar74;
          *(uint *)(puVar65 + -4) = uVar75;
          *(uint *)((longlong)puVar65 + -0x1c) = uVar21;
          puVar65[7] = param_2 + 0xe;
          *(undefined8 *)(param_2 + 0xe) = uVar39;
          *(undefined8 *)(param_2 + 0x10) = uVar34;
          uVar39 = puVar65[-5];
          *(undefined8 *)(param_2 + 0x16) = puVar65[-6];
          *(undefined8 *)(param_2 + 0x18) = uVar39;
          *(undefined8 *)(param_2 + 0x1a) = puVar65[-4];
          *(undefined8 *)(param_2 + 0x12) = puVar65[-8];
          *(undefined8 *)(param_2 + 0x14) = puVar65[-7];
          *(byte *)(param_2 + 0x1c) = 0;
          unaff_RDI = *(uint **)(param_2 + 0xe);
          puVar65[-2] = *(undefined8 *)(param_2 + 0x10);
          puVar65[-1] = *(undefined8 *)(param_2 + 0x12);
          uVar39 = *(undefined8 *)(param_2 + 0x14);
          uVar34 = *(undefined8 *)(param_2 + 0x16);
          uVar35 = *(undefined8 *)(param_2 + 0x1a);
          puVar65[2] = *(undefined8 *)(param_2 + 0x18);
          puVar65[3] = uVar35;
          *puVar65 = uVar39;
          puVar65[1] = uVar34;
          *(undefined8 *)((longlong)ppuVar60 + -8) = 0x14173f90f;
          pdb_14098a860(puVar65);
          puVar65[-0xc] = puVar65[-2];
          puVar65[-0xb] = puVar65[-1];
          unaff_RBX = (undefined1 *)puVar65[6];
          unaff_RBX[0x70] = 1;
          if (SBORROW8(0,(longlong)unaff_RDI)) {
            puVar29[0] = 2;
            puVar29[1] = 0;
            uVar17 = 3;
            goto code_r0x00014173f997;
          }
          puVar65[3] = puVar65[-0xc];
          puVar65[4] = puVar65[-0xb];
          *puVar65 = 1;
code_r0x00014173f943:
          puVar65[1] = 1;
          ppuVar61 = ppuVar60;
code_r0x00014173f94b:
          puVar65[2] = unaff_RDI;
          *(undefined8 *)((longlong)ppuVar61 + -8) = 0x14173f954;
          pdb_14007ee60();
          *(undefined8 *)((longlong)ppuVar61 + -8) = 0x14173f963;
          puVar25 = (uint *)pub_1406abab0(0x28,8);
          ppuVar59 = ppuVar61;
code_r0x00014173f963:
          ppuVar57 = ppuVar59;
          if (puVar25 == (uint *)0x0) {
code_r0x00014173f9a9:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173f9b8;
            pdb_142dc7e11(8,0x28);
          }
          *(undefined8 *)(puVar25 + 8) = puVar65[4];
          in_XMM0_Qa = (undefined *)*puVar65;
          in_XMM0_Qb = puVar65[1];
code_r0x00014173f974:
          uVar39 = puVar65[3];
          *(undefined8 *)(puVar25 + 4) = puVar65[2];
          *(undefined8 *)(puVar25 + 6) = uVar39;
          *(undefined **)puVar25 = in_XMM0_Qa;
          *(undefined8 *)(puVar25 + 2) = in_XMM0_Qb;
          break;
        case (uint *)0x14173f983:
          *(byte *)puVar25 = (byte)*puVar25 + cVar18;
          (&UNK_14332bcfd)[uVar24] = (&UNK_14332bcfd)[uVar24] + 't';
          (&UNK_14332bd01)[uVar24] = (&UNK_14332bd01)[uVar24] | (byte)param_3;
          puVar25 = (uint *)(ulonglong)(uVar21 + 0x1bec0c7);
          break;
        case (uint *)0x14173f98f:
          *(char *)(uVar24 + 0x1bb764575) =
               *(char *)(uVar24 + 0x1bb764575) + (char)((ulonglong)param_2 >> 8) +
               (0xfffffffebccd428b < uVar24);
          return (uint *)0x46894801;
        case (uint *)0x14173faae:
          *(undefined8 *)((longlong)ppuVar60 + -8) = 0x14173fabc;
          puVar25 = (uint *)pdb_140974040((int)param_2 + 0x80);
          unaff_RBX = *(undefined1 **)((longlong)ppuVar60 + 0x28);
code_r0x00014173fac0:
          unaff_RBX[0x5f] = unaff_RBX[0x5f] - (char)unaff_RBX;
          return puVar25;
        case (uint *)0x14173fb04:
          lVar33 = CONCAT71((int7)((ulonglong)puVar25 >> 8),cVar18 + -0x7f);
code_r0x00014173fb06:
          puVar65[0x4a] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014173fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar29 = (uint *)(*(code *)(lVar33 + (longlong)puVar42))();
          return puVar29;
        case (uint *)0x14173fc66:
          goto code_r0x00014173fc54;
        case (uint *)0x14173fc72:
          if (bVar67 || (longlong)uVar24 < -0x14332bd74) {
            puVar29[4] = uVar21;
          }
          goto code_r0x00014173fc74;
        case (uint *)0x14173fda3:
          *(undefined8 **)((longlong)ppuVar60 + -8) = puVar65;
          *(uint **)((longlong)ppuVar60 + -0x10) = puVar29;
          *(uint **)((longlong)ppuVar60 + -0x18) = unaff_RDI;
          *(undefined1 **)((longlong)ppuVar60 + -0x20) = unaff_RBX;
          *(undefined8 *)((longlong)ppuVar60 + -0x50) = 0x14173fdc0;
          puVar29 = (uint *)pdb_14098b910(param_2 + 0x76);
          return puVar29;
        case (uint *)0x14173fe3a:
          puVar65[2] = uVar39;
          ppuVar56 = ppuVar60;
code_r0x00014173fe1a:
          uVar39 = *(undefined8 *)(param_2 + 6);
          puVar65[0x12] = *(undefined8 *)(param_2 + 4);
          puVar65[0x13] = uVar39;
          puVar65[0x10] = in_XMM0_Qa;
          puVar65[0x11] = in_XMM0_Qb;
          uVar39 = *(undefined8 *)(param_2 + 8);
          uVar34 = *(undefined8 *)(param_2 + 10);
          uVar22 = param_2[0xd];
          uVar71 = param_2[0xe];
          uVar72 = param_2[0xf];
          *(uint *)(puVar65 + 4) = param_2[0xc];
          *(uint *)((longlong)puVar65 + 0x24) = uVar22;
          *(uint *)(puVar65 + 5) = uVar71;
          *(uint *)((longlong)puVar65 + 0x2c) = uVar72;
          puVar65[2] = uVar39;
          puVar65[3] = uVar34;
          *(undefined8 *)((longlong)ppuVar56 + -8) = 0x14173fe55;
          pdb_141748860(puVar65 + 0x18,puVar65 + 0x10,puVar65 + 2);
          uVar39 = puVar65[0x18];
          uVar34 = puVar65[0x19];
          uVar35 = puVar65[0x1a];
          uVar4 = puVar65[0x1b];
          uVar2 = puVar65[0x1c];
          uVar14 = puVar65[0x1d];
          uVar15 = puVar65[0x1e];
          uVar16 = puVar65[0x1f];
          puVar65[-10] = uVar39;
          puVar65[-9] = uVar34;
          puVar65[-8] = uVar35;
          puVar65[-7] = uVar4;
          puVar65[-6] = uVar2;
          puVar65[-5] = uVar14;
          puVar65[-4] = uVar15;
          puVar65[-3] = uVar16;
          puVar65[-2] = puVar65[0x20];
          param_2 = (uint *)puVar65[0x29];
          *(undefined8 *)(param_2 + 0x20) = puVar65[0x20];
          *(undefined8 *)(param_2 + 0x1c) = uVar15;
          *(undefined8 *)(param_2 + 0x1e) = uVar16;
          *(undefined8 *)(param_2 + 0x18) = uVar2;
          *(undefined8 *)(param_2 + 0x1a) = uVar14;
          *(undefined8 *)(param_2 + 0x14) = uVar35;
          *(undefined8 *)(param_2 + 0x16) = uVar4;
          *(undefined8 *)(param_2 + 0x10) = uVar39;
          *(undefined8 *)(param_2 + 0x12) = uVar34;
          ppuVar57 = ppuVar56;
code_r0x00014173feae:
          if ((byte)param_2[0x20] != 0) {
            if ((byte)param_2[0x20] != 1) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14174046a;
              pdb_142dc8590(&UNK_14332bb00);
            }
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14174045b;
            pdb_142dc8570(&UNK_14332bb00);
          }
          puVar65[0x26] = *(undefined8 *)(param_2 + 0x10);
          uVar39 = *(undefined8 *)(param_2 + 0x12);
          param_1 = *(uint **)(param_2 + 0x14);
          uVar34 = *(undefined8 *)(param_2 + 0x18);
          uVar35 = *(undefined8 *)(param_2 + 0x1a);
          uVar22 = param_2[0x1d];
          uVar71 = param_2[0x1e];
          uVar72 = param_2[0x1f];
          *(uint *)(puVar65 + 0x12) = param_2[0x1c];
          *(uint *)((longlong)puVar65 + 0x94) = uVar22;
          *(uint *)(puVar65 + 0x13) = uVar71;
          *(uint *)((longlong)puVar65 + 0x9c) = uVar72;
          puVar65[0x10] = uVar34;
          puVar65[0x11] = uVar35;
          lVar33 = puVar65[0x10];
          puVar65[0x27] = uVar39;
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173ff09;
          pdb_141c2f360(puVar65 + 0x18,lVar33 + 0x10,uVar39,param_1);
          auVar70[0] = -(*(char *)(puVar65 + 0x18) == DAT_142f5c7c0);
          auVar70[1] = -(*(char *)((longlong)puVar65 + 0xc1) == UNK_142f5c7c1);
          auVar70[2] = -(*(char *)((longlong)puVar65 + 0xc2) == UNK_142f5c7c2);
          auVar70[3] = -(*(char *)((longlong)puVar65 + 0xc3) == UNK_142f5c7c3);
          auVar70[4] = -(*(char *)((longlong)puVar65 + 0xc4) == UNK_142f5c7c4);
          auVar70[5] = -(*(char *)((longlong)puVar65 + 0xc5) == UNK_142f5c7c5);
          auVar70[6] = -(*(char *)((longlong)puVar65 + 0xc6) == UNK_142f5c7c6);
          auVar70[7] = -(*(char *)((longlong)puVar65 + 199) == UNK_142f5c7c7);
          auVar70[8] = -(*(char *)(puVar65 + 0x19) == UNK_142f5c7c8);
          auVar70[9] = -(*(char *)((longlong)puVar65 + 0xc9) == UNK_142f5c7c9);
          auVar70[10] = -(*(char *)((longlong)puVar65 + 0xca) == UNK_142f5c7ca);
          auVar70[0xb] = -(*(char *)((longlong)puVar65 + 0xcb) == UNK_142f5c7cb);
          auVar70[0xc] = -(*(char *)((longlong)puVar65 + 0xcc) == UNK_142f5c7cc);
          auVar70[0xd] = -(*(char *)((longlong)puVar65 + 0xcd) == UNK_142f5c7cd);
          auVar70[0xe] = -(*(char *)((longlong)puVar65 + 0xce) == UNK_142f5c7ce);
          auVar70[0xf] = -(*(char *)((longlong)puVar65 + 0xcf) == UNK_142f5c7cf);
          uVar39 = puVar65[0x1a];
          if ((ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                      (ushort)(auVar70[0xf] >> 7) << 0xf) != 0xffff) {
            puVar65[0xf] = puVar65[0x25];
            puVar65[0xd] = puVar65[0x23];
            puVar65[0xe] = puVar65[0x24];
            *(undefined4 *)(puVar65 + 0xb) = *(undefined4 *)(puVar65 + 0x21);
            *(undefined4 *)((longlong)puVar65 + 0x5c) = *(undefined4 *)((longlong)puVar65 + 0x10c);
            *(undefined4 *)(puVar65 + 0xc) = *(undefined4 *)(puVar65 + 0x22);
            *(undefined4 *)((longlong)puVar65 + 100) = *(undefined4 *)((longlong)puVar65 + 0x114);
            *(undefined4 *)(puVar65 + 9) = *(undefined4 *)(puVar65 + 0x1f);
            *(undefined4 *)((longlong)puVar65 + 0x4c) = *(undefined4 *)((longlong)puVar65 + 0xfc);
            *(undefined4 *)(puVar65 + 10) = *(undefined4 *)(puVar65 + 0x20);
            *(undefined4 *)((longlong)puVar65 + 0x54) = *(undefined4 *)((longlong)puVar65 + 0x104);
            *(undefined4 *)(puVar65 + 7) = *(undefined4 *)(puVar65 + 0x1d);
            *(undefined4 *)((longlong)puVar65 + 0x3c) = *(undefined4 *)((longlong)puVar65 + 0xec);
            *(undefined4 *)(puVar65 + 8) = *(undefined4 *)(puVar65 + 0x1e);
            *(undefined4 *)((longlong)puVar65 + 0x44) = *(undefined4 *)((longlong)puVar65 + 0xf4);
            puVar65[5] = puVar65[0x1b];
            puVar65[6] = puVar65[0x1c];
            puVar65[2] = puVar65[0x18];
            puVar65[3] = puVar65[0x19];
            puVar65[4] = uVar39;
            unaff_RBX = (undefined1 *)puVar65[0x11];
            if (unaff_RBX != (undefined1 *)0x0) {
              unaff_R15 = (uint *)(unaff_RBX + 0x38);
              LOCK();
              bVar67 = unaff_RBX[0x38] == '\0';
              if (bVar67) {
                unaff_RBX[0x38] = '\x01';
              }
              UNLOCK();
              if (!bVar67) {
                *(undefined1 *)((longlong)puVar65 + 0x15f) = 1;
                *(undefined1 *)((longlong)puVar65 + 0x15e) = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417403b0;
                pdb_142dc6be0(unaff_R15);
              }
              puVar66 = _DAT_143ca8f38;
              if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
                puVar25 = (uint *)0x0;
                uVar23 = 0;
                cVar18 = unaff_RBX[0x39];
              }
              else {
                *(undefined1 *)((longlong)puVar65 + 0x15f) = 1;
                *(undefined1 *)((longlong)puVar65 + 0x15e) = 1;
                *(undefined8 *)((longlong)ppuVar57 + -8) = 0x1417403c9;
                uVar24 = pdb_142dc79e0();
                puVar25 = (uint *)(uVar24 ^ 1);
                uVar23 = SUB84(puVar25,0);
                cVar18 = unaff_RBX[0x39];
              }
              if (cVar18 != '\0') {
code_r0x0001417403d8:
                puVar65[0x18] = unaff_R15;
                *(char *)(puVar65 + 0x19) = (char)puVar25;
                ppuVar62 = ppuVar57;
                goto code_r0x0001417403e5;
              }
              *(undefined4 *)(puVar65 + 0x2b) = uVar23;
              puVar65[0x28] = unaff_R15;
              puVar65[0x22] = puVar65[0xc];
              puVar65[0x23] = puVar65[0xd];
              puVar65[0x20] = puVar65[10];
              puVar65[0x21] = puVar65[0xb];
              *(undefined4 *)(puVar65 + 0x1e) = *(undefined4 *)(puVar65 + 8);
              *(undefined4 *)((longlong)puVar65 + 0xf4) = *(undefined4 *)((longlong)puVar65 + 0x44);
              *(undefined4 *)(puVar65 + 0x1f) = *(undefined4 *)(puVar65 + 9);
              *(undefined4 *)((longlong)puVar65 + 0xfc) = *(undefined4 *)((longlong)puVar65 + 0x4c);
              *(undefined4 *)(puVar65 + 0x1c) = *(undefined4 *)(puVar65 + 6);
              *(undefined4 *)((longlong)puVar65 + 0xe4) = *(undefined4 *)((longlong)puVar65 + 0x34);
              *(undefined4 *)(puVar65 + 0x1d) = *(undefined4 *)(puVar65 + 7);
              *(undefined4 *)((longlong)puVar65 + 0xec) = *(undefined4 *)((longlong)puVar65 + 0x3c);
              *(undefined4 *)(puVar65 + 0x1a) = *(undefined4 *)(puVar65 + 4);
              *(undefined4 *)((longlong)puVar65 + 0xd4) = *(undefined4 *)((longlong)puVar65 + 0x24);
              *(undefined4 *)(puVar65 + 0x1b) = *(undefined4 *)(puVar65 + 5);
              *(undefined4 *)((longlong)puVar65 + 0xdc) = *(undefined4 *)((longlong)puVar65 + 0x2c);
              puVar65[0x18] = puVar65[2];
              puVar65[0x19] = puVar65[3];
              *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740071;
              pdb_1417b89d0(unaff_RBX + 0x40,puVar65 + 0x18);
              unaff_R15 = (uint *)(unaff_RBX + 0x38);
              if ((*(char *)(puVar65 + 0x2b) == '\0') && ((*puVar66 & 0x7fffffffffffffff) != 0))
              goto code_r0x000141740425;
              goto code_r0x00014174008e;
            }
            uVar23 = (undefined4)CONCAT71((int7)((ulonglong)puVar65[0x19] >> 8),1);
            goto code_r0x0001417400b6;
          }
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173ff38;
          pdb_14098a860(puVar65 + 0x10);
          uVar24 = puVar65[0x26];
          if (uVar24 != 0) {
            pbVar37 = (byte *)puVar65[0x27];
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173ff57;
            pub_1406abac0(pbVar37,uVar24,1);
          }
          lVar31 = puVar65[0x29];
          *(undefined1 *)(lVar31 + 0x80) = 1;
code_r0x000141740265:
          puVar65[0x18] = uVar39;
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740271;
          pdb_14007ee60();
          *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740280;
          pbVar37 = pub_1406abab0(8,8);
          if (pbVar37 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141740363;
            pdb_142dc7e11(8,8);
          }
          *(undefined8 *)pbVar37 = uVar39;
          uVar39 = 1;
          puVar40 = &UNK_1430712c0;
code_r0x000141740298:
          *(undefined8 *)puVar29 = uVar39;
          *(byte **)(puVar29 + 2) = pbVar37;
          *(undefined **)(puVar29 + 4) = puVar40;
          uVar17 = 1;
code_r0x0001417402a5:
          *(undefined1 *)(lVar31 + 0x88) = uVar17;
          return puVar29;
        case (uint *)0x1417403f9:
code_r0x0001417403e5:
          *(undefined **)((longlong)ppuVar62 + 0x20) = &UNK_14332bae8;
          puVar42 = (uint *)&UNK_14332b8d0;
code_r0x00014174040b:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppuVar62 + -8) = 0x141740410;
          pdb_142dc8170(puVar42);
        case (uint *)0x141740405:
code_r0x000141740405:
          *(byte *)((longlong)param_2 + 0x2b) = *(byte *)((longlong)param_2 + 0x2b) + cVar49;
          goto code_r0x00014174040b;
        }
code_r0x00014173f97f:
        puVar29[0] = 0;
        puVar29[1] = 0;
        *(uint **)(puVar29 + 2) = puVar25;
        *(undefined **)(puVar29 + 4) = &UNK_14332ba58;
        uVar17 = 1;
code_r0x00014173f997:
        unaff_RBX[0x78] = uVar17;
        return puVar29;
      case (uint *)0x141736ece:
        *(byte *)puVar25 = (byte)*puVar25 + cVar18;
        *(byte *)(param_2 + 4) = (byte)param_2[4] + cVar49;
        goto code_r0x000141736ed6;
      case (uint *)0x141736eda:
        *(int *)(lVar33 + 0xd07ac873) = *(int *)(lVar33 + 0xd07ac873) + iVar44;
        goto code_r0x000141736ede;
      case (uint *)0x14173702e:
                    /* WARNING: Call to offcut address within same function */
        func_0x000141737032();
      case (uint *)0x14173703a:
code_r0x00014173703a:
        puVar25 = (uint *)(ulonglong)(byte)param_2[0xc];
        goto code_r0x00014173703e;
      case (uint *)0x14173713e:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x14173714a:
        goto code_r0x00014173714a;
      case (uint *)0x1417372c3:
        *(byte *)puVar29 = (byte)*puVar29;
        (&UNK_14332bd2b)[lVar33] = (&UNK_14332bd2b)[lVar33] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x141737407:
        goto code_r0x000141737410;
      case (uint *)0x141738c33:
        (&UNK_14332bced)[lVar33] = (&UNK_14332bced)[lVar33] + 'd';
        puVar25 = (uint *)((ulonglong)puVar25 & 0xffffffffffffff20);
        ppuVar55 = &puStack_b8;
        goto code_r0x000141738b49;
      case (uint *)0x141739e2c:
        *(byte *)puVar25 = (byte)*puVar25 + cVar18;
        goto code_r0x000141739e0c;
      case (uint *)0x141739e38:
        uVar17 = SUB81(puVar65,0);
        puVar25 = unaff_R13;
        goto code_r0x000141739e30;
      case (uint *)0x14173f2bb:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        puVar29 = (uint *)(*UNRECOVERED_JUMPTABLE)();
        return puVar29;
      case (uint *)0x14173f309:
        *(byte *)unaff_RDI = (byte)*unaff_RDI & 100;
        iStack_78 = iStack_78 - iVar44;
        ppuVar57 = &puStack_b8;
        goto code_r0x00014173f30e;
      case (uint *)0x14173f45e:
        goto code_r0x00014173f45e;
      case (uint *)0x14173f46a:
        return puVar25;
      case (uint *)0x14173f587:
        puVar58 = &stack0xffffffffffffff40;
code_r0x00014173f588:
        uStack_50 = 0xfffffffffffffffe;
        *(undefined8 *)(puVar58 + -8) = 0x14173f58d;
        puVar25 = (uint *)pdb_1409737b0(puVar42);
code_r0x00014173f593:
        return puVar25;
      case (uint *)0x14173f5c7:
                    /* WARNING: Could not recover jumptable at 0x00014173f5d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar29 = (uint *)(*(code *)(&UNK_14332bdb8 +
                                    *(int *)(&UNK_14332bdb8 + (longlong)puVar25 * 4)))();
        return puVar29;
      case (uint *)0x14173f6d2:
        puVar29 = (uint *)(&UNK_14332bced + lVar33);
        uVar22 = *puVar29;
        *puVar29 = *puVar29 + 0x4332bd64;
        *(char *)(lVar33 + 0xcbba4565) =
             *(char *)(lVar33 + 0xcbba4565) + (char)unaff_R14 + (0xbccd429b < uVar22);
        *(byte *)puVar25 = (byte)*puVar25 + cVar18;
      case (uint *)0x14173f6de:
        goto code_r0x00014173f6de;
      case (uint *)0x14173f812:
        *(byte *)puVar25 = (byte)*puVar25;
        (&UNK_14332bcef)[lVar33] = (&UNK_14332bcef)[lVar33] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x14173f863:
        puVar40 = (undefined *)0x4332bdc8;
        goto code_r0x00014173f869;
      case (uint *)0x14173f973:
        *(byte *)unaff_RDI = (byte)*unaff_RDI + 100;
        goto code_r0x00014173f974;
      case (uint *)0x14173f97f:
        goto code_r0x00014173f97f;
      case (uint *)0x14173fa9e:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x14173faf4:
code_r0x00014173faf4:
        uStack_50 = 0xfffffffffffffffe;
        puVar65 = (undefined8 *)&uStack_38;
        puVar42 = (uint *)&UNK_14332bdd8;
        lVar33 = (longlong)*(int *)(&UNK_14332bdd8 + (ulonglong)(byte)param_2[0x76] * 4);
        goto code_r0x00014173fb06;
      case (uint *)0x14173fc56:
        puVar42 = (uint *)((ulonglong)puVar65 & 0xffffffff);
        puVar65 = (undefined8 *)((ulonglong)puVar25 & 0xffffffff);
        *(byte **)puVar42 = (byte *)(*(longlong *)puVar42 + (longlong)puVar42);
        UNK_14332bd1c = UNK_14332bd1c + (char)puVar42;
        *(byte *)puVar42 = (byte)*puVar42 + (char)puVar42;
        puVar25 = puVar42;
        ppuVar62 = &puStack_b8;
        break;
      case (uint *)0x14173fc62:
        ppuVar62 = &puStack_b8;
        break;
      case (uint *)0x14173fd93:
        unaff_RBX[0x5f] = unaff_RBX[0x5f] - (char)unaff_RBX;
        return puVar25;
      case (uint *)0x14173fe2a:
        *(byte *)puVar25 = (byte)*puVar25 + cVar18;
        ppuVar56 = &puStack_b8;
        goto code_r0x00014173fe1a;
      case (uint *)0x1417403e9:
        *(int *)(&UNK_14332bced + lVar33) = *(int *)(&UNK_14332bced + lVar33) + 0x4332bd64;
        ppuVar62 = &puStack_b8;
        goto code_r0x0001417403e5;
      case (uint *)0x1417403f5:
        puVar46 = (undefined1 *)CONCAT62((int6)((ulonglong)puVar25 >> 0x10),CONCAT11(0xbe,cVar18));
        *puVar46 = *puVar46;
        ppuVar62 = &puStack_b8;
        goto code_r0x000141740405;
      }
      goto code_r0x00014173fc54;
    case 8:
                    /* WARNING: Call to offcut address within same function */
      in_XMM0_Qa = (undefined *)func_0x000141736db2();
      uVar39 = (undefined8)in_ST0;
      in_XMM0_Qb = extraout_XMM0_Qb;
      goto code_r0x000141736d96;
    case 9:
      goto code_r0x000141736eca;
    case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
      goto code_r0x000141736dba;
    case 0xc:
code_r0x00014173701e:
      (&UNK_14332bce1)[lVar33] = (&UNK_14332bce1)[lVar33] + 'T';
      param_1 = (uint *)((longlong)puVar29 + 1);
      pcVar26 = (char *)(CONCAT71(uVar41,(byte)*puVar29) & 0xffffffffffffff80);
      *pcVar26 = *pcVar26 + (char)pcVar26;
      puVar29 = puVar29 + 4;
      uVar22 = *puVar29;
      cVar18 = (char)((ulonglong)pcVar26 >> 8);
      *(byte *)puVar29 = (byte)*puVar29 + cVar18;
      if ((byte)*puVar29 == 0 || SCARRY1((byte)uVar22,cVar18) != (char)(byte)*puVar29 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puStack_68 = (uint *)&UNK_14332bd54;
      pdb_140974580();
      pub_1406abac0((byte *)puStack_68,0x38,8);
      ppuVar57 = &puStack_b8;
      in_XMM0_Qa = unaff_XMM6_Qb;
      if ((int)unaff_R14 == 1) {
        unaff_RDI = *(uint **)(uStack_60 + 4);
        unaff_RBX = *(undefined1 **)(uStack_60 + 6);
        pdb_14007ee60();
        unaff_XMM6_Qa = pub_1406abab0(0x10,8);
        if (unaff_XMM6_Qa == (byte *)0x0) {
          puVar42 = (uint *)0x8;
          param_2 = (uint *)0x10;
          puVar25 = (uint *)0x0;
          goto code_r0x00014173714e;
        }
        unaff_XMM6_Qa[0] = 1;
        unaff_XMM6_Qa[1] = 0;
        unaff_XMM6_Qa[2] = 0;
        unaff_XMM6_Qa[3] = 0;
        unaff_XMM6_Qa[4] = 0;
        unaff_XMM6_Qa[5] = 0;
        unaff_XMM6_Qa[6] = 0;
        unaff_XMM6_Qa[7] = 0;
        unaff_XMM6_Qa[8] = 1;
        unaff_XMM6_Qa[9] = 0;
        unaff_XMM6_Qa[10] = 0;
        unaff_XMM6_Qa[0xb] = 0;
        unaff_XMM6_Qa[0xc] = 0;
        unaff_XMM6_Qa[0xd] = 0;
        unaff_XMM6_Qa[0xe] = 0;
        unaff_XMM6_Qa[0xf] = 0;
        in_XMM0_Qa = &UNK_14332b300;
        ppuVar57 = &puStack_b8;
      }
      goto code_r0x000141737111;
    case 0xd:
      if (puVar25 == (uint *)0x0) {
        return (uint *)0x0;
      }
      uStack_60 = (uint *)((ulonglong)uStack_60 & 0xffffffff);
      puVar28 = puVar25;
      puVar25 = puVar29;
      goto code_r0x00014173712f;
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
      if (puVar25 != (uint *)0x0) {
        *(byte *)puVar25 = (byte)*puVar25 + cVar18;
        goto code_r0x00014173701e;
      }
      uStack_50 = 0xfffffffffffffffe;
      goto code_r0x00014173703a;
    case 0x10:
      ppuVar57 = (uint **)auStack_100;
      unaff_RBX = auStack_100;
      param_1 = param_3;
      goto code_r0x0001417372d5;
    case 0x11:
      goto code_r0x000141739e0c;
    case 0x12:
      *(byte *)param_3 = (byte)*param_3 + bVar19;
      *(byte *)puVar25 = (byte)*puVar25 + cVar18;
      pcVar26 = (char *)(lVar33 + 0x18ebe0555);
      cVar18 = *pcVar26;
      *pcVar26 = *pcVar26 + cVar48;
      if (SCARRY1(cVar18,cVar48)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
      *(byte *)puVar25 = (byte)*puVar25 + cVar18;
      goto code_r0x000141738b49;
    case 0x14:
      *(uint *)(lVar33 + 0x18f32bd54) = *(uint *)(lVar33 + 0x18f32bd54) | 0xffffff8d;
      ppuVar54 = (uint **)&stack0xffffffffffffff40;
      goto code_r0x000141737410;
    case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x17:
      (&UNK_14332bcdd)[lVar33] = (&UNK_14332bcdd)[lVar33] + 'T';
      (&UNK_14332bce1)[lVar33] = (&UNK_14332bce1)[lVar33] | bVar19;
      puVar25 = (uint *)(ulonglong)(iVar20 + 0x1bec63e);
      break;
    case 0x18:
      *(byte *)puVar25 = (byte)*puVar25 + cVar18;
      ppuVar57 = &puStack_b8;
      param_1 = unaff_RDI;
      goto code_r0x00014173f2cb;
    case 0x19:
      puVar58 = auStack_f0;
      puVar42 = param_2 + 0x34;
      goto code_r0x00014173f588;
    case 0x1a:
      puVar40 = (undefined *)(ulonglong)(iVar20 + 0x1bec3a5);
      goto code_r0x00014173f6d3;
    case 0x1b:
      *puVar29 = 0;
      goto code_r0x00014173f6a2;
    case 0x1c:
      goto code_r0x00014173f5b7;
    case 0x1d:
      puVar25 = (uint *)((ulonglong)puVar25 & 0xffffffffffffff10);
      if (*(ulonglong *)(param_2 + 0x30) != 0) {
        uStack_110 = 0x14173f82e;
        pub_1406abac0(*(byte **)(param_2 + 0x2a),*(ulonglong *)(param_2 + 0x30),1);
        puVar25 = extraout_RAX_00;
      }
code_r0x00014173f82f:
      return puVar25;
    case 0x1e:
      *(byte *)unaff_RDI = (byte)*unaff_RDI & 0x54;
      uStack_38 = CONCAT31(uStack_38._1_3_,(char)uStack_38 + cVar18);
      goto code_r0x00014173f974;
    case 0x1f:
      goto code_r0x00014173f963;
    case 0x20:
      goto code_r0x00014173f853;
    case 0x21:
      *(byte *)((longlong)param_3 + -0x7d) = *(byte *)((longlong)param_3 + -0x7d) - bVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x22:
      ppuVar62 = &puStack_b8;
      unaff_RDI = (uint *)((ulonglong)puVar25 & 0xffffffff);
      goto code_r0x00014173fc54;
    case 0x23:
      auStackX_10[CONCAT71(uVar41,cVar18 + -0x43) * 2] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x24:
      goto code_r0x00014173faf4;
    case 0x25:
      puVar25 = (uint *)(ulonglong)in_stack_00000220;
code_r0x00014173fd5f:
      *(byte *)((longlong)puVar25 + -0x77) = *(byte *)((longlong)puVar25 + -0x77) + (char)puVar42;
      *(undefined1 *)(*(longlong *)(param_2 + 0xb4) + 0x1d0) = 2;
      *(uint **)(param_2 + 0xb2) = *(uint **)(param_2 + 0xb6);
      return *(uint **)(param_2 + 0xb6);
    case 0x26:
      goto code_r0x0001417403e5;
    case 0x27:
      goto code_r0x0001417403d8;
    case 0x28:
      goto code_r0x00014173fe1a;
    }
    goto code_r0x00014173f45a;
  case 0xd:
    cVar18 = in((short)param_2);
    pcVar26 = (char *)CONCAT71(uVar41,cVar18);
    *pcVar26 = cVar18;
    *pcVar26 = *pcVar26 + cVar18;
    uStack_50 = 0xfffffffffffffffe;
    puVar29 = (uint *)&UNK_14332bd30;
    puVar25 = (uint *)(ulonglong)(byte)param_2[0xc];
    goto code_r0x000141736b3e;
  case 0xe:
    puVar25 = (uint *)((ulonglong)param_1 & 0xffffffff);
    goto code_r0x000141736c2b;
  case 0xf:
    puVar65 = (undefined8 *)CONCAT44(uStack_34,uStack_38);
    goto code_r0x000141736c2b;
  case 0x10:
    pbVar37 = (byte *)((longlong)param_1 + 0xf);
    bVar19 = *pbVar37;
    cVar18 = (char)((ulonglong)puVar25 >> 8);
    *pbVar37 = *pbVar37 + cVar18;
    if (*pbVar37 == 0 || SCARRY1(bVar19,cVar18) != (char)*pbVar37 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar67 = false;
    goto code_r0x000141736ba2;
  case 0x11:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    puVar29 = (uint *)(*UNRECOVERED_JUMPTABLE)();
    return puVar29;
  case 0x12:
    *(char *)(uVar24 + 0x18bfbee31) =
         (*(char *)(uVar24 + 0x18bfbee31) - cVar48) - (0xfffffffebccd42cf < uVar24);
    goto code_r0x000141736eab;
  case 0x13:
    goto code_r0x000141736e9a;
  case 0x14:
code_r0x000141736d96:
    ppuVar51 = (uint **)auStack_150;
    puVar65 = (undefined8 *)&stack0xffffffffffffff30;
    puVar29 = puVar42;
code_r0x000141736dba:
    puVar25 = (uint *)(ulonglong)(byte)param_2[0xc];
    ppuVar60 = ppuVar51;
    goto code_r0x000141736dbe;
  case 0x15:
    (&UNK_14332bcb3)[uVar24] = (&UNK_14332bcb3)[uVar24] & 0x30;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x16:
    ppuVar57 = (uint **)auStack_b0;
    unaff_RDI = puStack_b8;
    in_XMM0_Qa = unaff_XMM6_Qb;
    goto code_r0x000141737111;
  case 0x17:
    ppuVar57 = &puStack_b8;
code_r0x000141737111:
    *(undefined8 *)((longlong)ppuVar57 + -8) = 0x141737119;
    pdb_14097d110();
    *(uint **)(param_1 + 2) = unaff_RDI;
    *(undefined1 **)(param_1 + 4) = unaff_RBX;
    *(byte **)(param_1 + 6) = unaff_XMM6_Qa;
    *(undefined **)(param_1 + 8) = in_XMM0_Qa;
    puVar42 = (uint *)0x0;
    puVar28 = (uint *)0x1;
    puVar25 = param_1;
code_r0x00014173712f:
    *(uint **)puVar25 = puVar42;
    *(byte *)(uStack_60 + 0xc) = (byte)puVar28;
code_r0x00014173714a:
    return puVar25;
  case 0x18:
    return puVar25;
  case 0x19:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    puVar29 = (uint *)(*UNRECOVERED_JUMPTABLE)();
    return puVar29;
  case 0x1a:
    goto code_r0x000141739df0;
  case 0x1b:
    ppuVar56 = &puStack_b8;
    if (!SCARRY8(uVar24,0x14332bd30)) goto code_r0x000141739e0c;
code_r0x000141739df0:
    plVar32 = (longlong *)**(undefined8 **)(unaff_RBX + 0x70);
    if (plVar32 != (longlong *)0x0) {
      LOCK();
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (*plVar32 == 0) {
        uVar39 = *(undefined8 *)(unaff_RBX + 0x70);
        *(undefined8 *)((longlong)ppuVar56 + -8) = 0x141739e0b;
        pdb_140c7a240(uVar39);
      }
    }
code_r0x000141739e0c:
    uVar39 = *(undefined8 *)(unaff_RBX + 0x260);
    uVar34 = *(undefined8 *)(unaff_RBX + 0x268);
    uVar35 = *(undefined8 *)(unaff_RBX + 0x278);
    *(undefined8 *)(unaff_R13 + 6) = *(undefined8 *)(unaff_RBX + 0x270);
    *(undefined8 *)(unaff_R13 + 8) = uVar35;
    *(undefined8 *)(unaff_R13 + 2) = uVar39;
    *(undefined8 *)(unaff_R13 + 4) = uVar34;
    unaff_R13[0] = 0;
    unaff_R13[1] = 0;
    uVar17 = 1;
    puVar25 = unaff_R13;
code_r0x000141739e30:
    *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x4a) = uVar17;
code_r0x000141739e48:
    return puVar25;
  case 0x1c:
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
    uVar22 = *puVar25;
    puVar25 = (uint *)(ulonglong)(iVar20 + uVar22);
    *(byte *)puVar25 = (byte)*puVar25 + (char)(iVar20 + uVar22);
    ppuVar55 = &puStack_b8;
    goto code_r0x000141738b49;
  case 0x1d:
    cRam000000064ffdb19b = cRam000000064ffdb19b + -1;
    *(byte *)puVar25 = (byte)*puVar25;
    UNK_14332bcbb = UNK_14332bcbb + '0';
    uVar24 = (ulonglong)puVar25 & 0xffffffffffffff48;
    ppuVar57 = &puStack_b8;
    goto code_r0x0001417373e0;
  case 0x1e:
    uStack_f8 = 0x14173f2a8;
    pub_1406abac0(*(byte **)(param_2 + 0x2e),0x20,8);
    return extraout_RAX;
  case 0x1f:
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
    *(byte *)unaff_RDI = (byte)*unaff_RDI + 0x30;
    *(int *)(&UNK_14332bd60 + uVar24) = *(int *)(&UNK_14332bd60 + uVar24) - (int)unaff_RBX;
  case 0x20:
code_r0x00014173f42a:
    uVar39 = puVar65[0xc];
    uVar34 = puVar65[0xd];
    uVar35 = puVar65[0xe];
    uVar4 = puVar65[0xf];
    uVar2 = puVar65[0x11];
    *(undefined8 *)(puVar25 + 0xc) = puVar65[0x10];
    *(undefined8 *)(puVar25 + 0xe) = uVar2;
    *(undefined8 *)(puVar25 + 8) = uVar35;
    *(undefined8 *)(puVar25 + 10) = uVar4;
    *(undefined8 *)(puVar25 + 4) = uVar39;
    *(undefined8 *)(puVar25 + 6) = uVar34;
    *(undefined **)puVar25 = in_XMM0_Qa;
    *(undefined8 *)(puVar25 + 2) = in_XMM0_Qb;
    puVar29[0] = 0;
    puVar29[1] = 0;
    *(uint **)(puVar29 + 2) = puVar25;
    puVar25 = (uint *)&UNK_14332ba98;
code_r0x00014173f45a:
    *(uint **)(puVar29 + 4) = puVar25;
code_r0x00014173f45e:
    uVar17 = 1;
code_r0x00014173f460:
    unaff_RBX[0xb0] = uVar17;
    return puVar29;
  case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x22:
    return (uint *)(ulonglong)in_stack_00000060;
  case 0x23:
    *(undefined4 *)(&UNK_14332bd38 + uVar24) = 1;
    goto code_r0x00014173f6a2;
  case 0x24:
    bVar67 = iVar20 == 0;
    goto code_r0x00014173f6a0;
  case 0x25:
    goto code_r0x00014173f593;
  case 0x26:
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
    goto code_r0x00014173f94b;
  case 0x28:
    *puVar25 = *puVar25 + iVar20;
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
    ppuVar60 = &puStack_b8;
    goto code_r0x00014173f943;
  case 0x29:
    goto code_r0x00014173f82f;
  case 0x2a:
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
    *(undefined1 *)(*(longlong *)(param_2 + 0x2c) + 0x70) = 2;
    *(uint **)(param_2 + 0x2a) = *(uint **)(param_2 + 0x2e);
    return *(uint **)(param_2 + 0x2e);
  case 0x2b:
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
    (&UNK_14332bcb9)[uVar24] = (&UNK_14332bcb9)[uVar24] + '0';
    puVar65 = (undefined8 *)0x158;
    goto code_r0x00014173fc26;
  case 0x2c:
    *puVar25 = *puVar25 + iVar20;
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
    ppuVar62 = &puStack_b8;
code_r0x00014173fc26:
    puVar65[0x2a] = 1;
    puVar65[0x2b] = unaff_RDI;
    *(undefined8 *)((longlong)ppuVar62 + -8) = 0x14173fc3d;
    pdb_14007ee60();
    *(undefined8 *)((longlong)ppuVar62 + -8) = 0x14173fc4c;
    puVar25 = (uint *)pub_1406abab0(0xd8,8);
    unaff_RDI = puVar25;
    if (puVar25 == (uint *)0x0) {
      puVar43 = (uint *)0x8;
      ppuVar57 = ppuVar62;
code_r0x00014173fca0:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppuVar57 + -8) = 0x14173fca5;
      pdb_142dc7e11(puVar43);
    }
code_r0x00014173fc54:
    *(undefined8 *)((longlong)ppuVar62 + -8) = 0x14173fc69;
    pub_142e32760(puVar25,puVar65 + 0x29,0xd8);
    puVar29[0] = 0;
    puVar29[1] = 0;
    *(uint **)(puVar29 + 2) = unaff_RDI;
code_r0x00014173fc74:
    *(undefined **)(puVar29 + 4) = &UNK_14332bab8;
    uVar17 = 1;
    puVar25 = puVar29;
code_r0x00014173fc81:
    unaff_RBX[0x1d8] = uVar17;
code_r0x00014173fc92:
    return puVar25;
  case 0x2d:
    goto code_r0x00014173fac0;
  case 0x2e:
    goto code_r0x00014173fd5f;
  case 0x2f:
    goto code_r0x0001417403c1;
  case 0x30:
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
code_r0x0001417403c1:
    *(byte *)puVar25 = (byte)*puVar25 + cVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
    goto code_r0x00014173fdf6;
  }
  *(byte *)(unaff_R14 + 0x28) = (byte)puVar42;
code_r0x0001417367b1:
  return puVar25;
code_r0x00014173f6de:
  (&UNK_14332bced)[lVar33] = (&UNK_14332bced)[lVar33] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

