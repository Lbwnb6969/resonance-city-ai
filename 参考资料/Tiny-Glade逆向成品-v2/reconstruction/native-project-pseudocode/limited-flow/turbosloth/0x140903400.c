// VA 0x140903400, PDB extent 2244 bytes
// turbosloth::asset::impl$24::run::async_block$0<asset::texture::blob::TextureAssetBlob,anyhow::Error,asset_pipe::texture::BuildTextureLayer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140903f8f) overlaps instruction at (ram,0x000140903f89)
    */
/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<asset::texture::blob::TextureAssetBlob,anyhow::Error,asset_pipe::texture::BuildTextureLayer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 2244 */

code * pdb_140903400(code *param_1,code *param_2,code *param_3,code *param_4)

{
  int iVar1;
  ulonglong arg1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  code cVar9;
  char cVar10;
  undefined1 uVar11;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar12;
  char *pcVar13;
  ulonglong uVar14;
  code *pcVar15;
  code *pcVar16;
  longlong lVar17;
  undefined *puVar18;
  code *unaff_RBX;
  undefined1 *puVar19;
  undefined1 *puVar20;
  code **ppcVar21;
  code **ppcVar22;
  ulonglong unaff_RBP;
  undefined1 *puVar23;
  longlong *plVar24;
  undefined4 *puVar25;
  code *pcVar26;
  longlong unaff_R12;
  longlong lVar27;
  undefined8 uVar28;
  code *pcVar29;
  code *unaff_R15;
  longlong *plVar30;
  byte in_AF;
  bool bVar31;
  byte in_TF;
  byte in_IF;
  bool bVar32;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float10 in_ST0;
  undefined1 *unaff_retaddr;
  ulonglong uStackX_8;
  code *in_stack_00000368;
  longlong in_stack_00000370;
  code *in_stack_000003c0;
  code *in_stack_000003d0;
  code *pcStack_540;
  undefined1 auStack_538 [8];
  undefined1 auStack_530 [16];
  ulonglong uStack_520;
  ulonglong uStack_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined1 auStack_508 [15];
  char acStack_4f9 [65];
  undefined1 auStack_4b8 [352];
  undefined1 auStack_358 [208];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_60;
  undefined8 *puStack_58;
  code *pcStack_50;
  code *pcStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  puVar19 = auStack_538;
  puVar20 = auStack_538;
  ppcVar21 = (code **)auStack_538;
  puVar23 = auStack_4b8;
  uStack_38 = 0xfffffffffffffffe;
  pcVar15 = (code *)&UNK_14301e920;
  iVar1 = *(int *)(&UNK_14301e920 + (ulonglong)(byte)param_2[0x220] * 4);
  UNRECOVERED_JUMPTABLE = (code *)(&UNK_14301e920 + iVar1);
  pcStack_40 = param_2;
  bVar8 = (byte)UNRECOVERED_JUMPTABLE;
  pcVar16 = pcVar15;
  pcVar26 = param_3;
  pcVar29 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x220]) {
  case (code)0x0:
    uStack_168 = *(undefined8 *)(param_2 + 0x210);
    uStack_160 = *(undefined8 *)(param_2 + 0x218);
    uStack_1a8 = *(undefined8 *)(param_2 + 0x1d0);
    uStack_1a0 = *(undefined8 *)(param_2 + 0x1d8);
    uStack_198 = *(undefined8 *)(param_2 + 0x1e0);
    uStack_190 = *(undefined8 *)(param_2 + 0x1e8);
    uStack_188 = *(undefined4 *)(param_2 + 0x1f0);
    uStack_184 = *(undefined4 *)(param_2 + 500);
    uStack_180 = *(undefined4 *)(param_2 + 0x1f8);
    uStack_17c = *(undefined4 *)(param_2 + 0x1fc);
    uStack_178 = *(undefined4 *)(param_2 + 0x200);
    uStack_174 = *(undefined4 *)(param_2 + 0x204);
    uStack_170 = *(undefined4 *)(param_2 + 0x208);
    uStack_16c = *(undefined4 *)(param_2 + 0x20c);
    uStack_98 = *(undefined4 *)param_2;
    uStack_94 = *(undefined4 *)(param_2 + 4);
    uStack_90 = *(undefined4 *)(param_2 + 8);
    uStack_8c = *(undefined4 *)(param_2 + 0xc);
    uStack_88 = *(undefined4 *)(param_2 + 0x10);
    uStack_84 = *(undefined4 *)(param_2 + 0x14);
    uStack_80 = *(undefined4 *)(param_2 + 0x18);
    uStack_7c = *(undefined4 *)(param_2 + 0x1c);
    pcStack_540 = (code *)0x1409034c5;
    pdb_140d9d590(auStack_358,&uStack_1a8,&uStack_98);
    unaff_RBX = (code *)auStack_508;
    pcStack_540 = (code *)0x1409034df;
    pub_142e32760(unaff_RBX,auStack_358,0x1b0);
    pcVar29 = pcStack_40;
    unaff_R15 = pcStack_40 + 0x20;
    pcVar26 = (code *)0x1b0;
    pcStack_540 = (code *)0x1409034fb;
    param_2 = unaff_RBX;
    pub_142e32760(unaff_R15);
    pcVar15 = (code *)&UNK_14301e930;
    uVar14 = (ulonglong)*(int *)(&UNK_14301e930 + (ulonglong)(byte)pcVar29[0x1c8] * 4);
    bVar32 = SCARRY8(uVar14,0x14301e930);
    UNRECOVERED_JUMPTABLE = (code *)(&UNK_14301e930 + uVar14);
    bVar31 = (longlong)UNRECOVERED_JUMPTABLE < 0;
    pcVar16 = pcVar15;
    pcStack_50 = unaff_R15;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(pcVar29[0x1c8]) {
    case (code)0x0:
      *(undefined8 *)(pcVar29 + 0xd0) = *(undefined8 *)(pcVar29 + 0x60);
      *(undefined8 *)(pcVar29 + 0xd8) = *(undefined8 *)(pcVar29 + 0x68);
      uVar28 = *(undefined8 *)unaff_R15;
      *(undefined4 *)(pcVar29 + 0xc0) = *(undefined4 *)(pcVar29 + 0x50);
      *(undefined4 *)(pcVar29 + 0xc4) = *(undefined4 *)(pcVar29 + 0x54);
      *(undefined4 *)(pcVar29 + 200) = *(undefined4 *)(pcVar29 + 0x58);
      *(undefined4 *)(pcVar29 + 0xcc) = *(undefined4 *)(pcVar29 + 0x5c);
      *(undefined4 *)(pcVar29 + 0xb0) = *(undefined4 *)(pcVar29 + 0x40);
      *(undefined4 *)(pcVar29 + 0xb4) = *(undefined4 *)(pcVar29 + 0x44);
      *(undefined4 *)(pcVar29 + 0xb8) = *(undefined4 *)(pcVar29 + 0x48);
      *(undefined4 *)(pcVar29 + 0xbc) = *(undefined4 *)(pcVar29 + 0x4c);
      *(undefined8 *)(pcVar29 + 0xa0) = *(undefined8 *)(pcVar29 + 0x30);
      *(undefined8 *)(pcVar29 + 0xa8) = *(undefined8 *)(pcVar29 + 0x38);
      *(undefined8 *)(pcVar29 + 0x90) = uVar28;
      *(undefined8 *)(pcVar29 + 0x98) = *(undefined8 *)(pcVar29 + 0x28);
      *(undefined4 *)(pcVar29 + 0xe0) = *(undefined4 *)(pcVar29 + 0x70);
      *(undefined4 *)(pcVar29 + 0xe4) = *(undefined4 *)(pcVar29 + 0x74);
      *(undefined4 *)(pcVar29 + 0xe8) = *(undefined4 *)(pcVar29 + 0x78);
      *(undefined4 *)(pcVar29 + 0xec) = *(undefined4 *)(pcVar29 + 0x7c);
      *(undefined4 *)(pcVar29 + 0xf0) = *(undefined4 *)(pcVar29 + 0x80);
      *(undefined4 *)(pcVar29 + 0xf4) = *(undefined4 *)(pcVar29 + 0x84);
      *(undefined4 *)(pcVar29 + 0xf8) = *(undefined4 *)(pcVar29 + 0x88);
      *(undefined4 *)(pcVar29 + 0xfc) = *(undefined4 *)(pcVar29 + 0x8c);
      uStack_518 = *(ulonglong *)(pcVar29 + 0xd8);
      pcStack_540 = (code *)0x1409035c0;
      pdb_140d9d190(auStack_358,pcVar29 + 0x90,pcVar29 + 0xe0,*(undefined8 *)(pcVar29 + 0xd0));
      unaff_RBX = (code *)&uStack_1a8;
      pcStack_540 = (code *)0x1409035dd;
      pub_142e32760(unaff_RBX,auStack_358,200);
      pcVar15 = pcStack_40 + 0x100;
      goto code_r0x0001409035eb;
    case (code)0x1:
                    /* WARNING: Subroutine does not return */
      pcStack_540 = (code *)0x140903a14;
      pdb_142dc8570(&UNK_14301e790);
    case (code)0x2:
      pcVar15 = (code *)&UNK_14301e790;
      goto code_r0x0001409039f9;
    case (code)0x3:
      break;
    case (code)0x4:
      goto code_r0x000140903d0d;
    case (code)0x5:
      goto code_r0x0001409046e3;
    case (code)0x6:
      goto code_r0x0001409046d7;
    case (code)0x7:
      goto code_r0x000140903dd2;
    case (code)0x8:
      goto code_r0x000140903dd9;
    case (code)0x9:
      pcVar16 = (code *)CONCAT71(0x14301e9,(&UNK_14301e8bd)[uVar14] + '0');
      goto code_r0x0001409046fa;
    case (code)0xa:
      goto code_r0x0001409046e0;
    case (code)0xb:
      goto code_r0x000140903eaf;
    case (code)0xc:
      goto code_r0x000140903edd;
    case (code)0xd:
      puVar23 = (undefined1 *)0x888;
      goto code_r0x000140904036;
    case (code)0xe:
      goto code_r0x000140904719;
    case (code)0xf:
      pcVar16 = (code *)CONCAT62(0x14301,CONCAT11((char)UNRECOVERED_JUMPTABLE + -0x17,0x30));
      puVar19 = auStack_530;
      goto code_r0x0001409046f0;
    case (code)0x10:
      (&UNK_14301e8bd)[uVar14] = (&UNK_14301e8bd)[uVar14] + '0';
      uVar14 = (ulonglong)puVar23 >> 8;
      puVar23 = (undefined1 *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
      pcVar13 = (char *)CONCAT71((uint7)uVar14 & 0xffffff,4);
      *pcVar13 = *pcVar13 + '\x04';
      goto code_r0x0001409040fb;
    case (code)0x11:
      UNRECOVERED_JUMPTABLE =
           (code *)(ulonglong)*(uint *)(&UNK_14301e930 + (longlong)UNRECOVERED_JUMPTABLE * 4);
      goto code_r0x000140903ed6;
    case (code)0x12:
      goto code_r0x000140904799;
    case (code)0x13:
      goto code_r0x0001409046f3;
    case (code)0x14:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
      cVar9 = *UNRECOVERED_JUMPTABLE;
code_r0x000140903f89:
      bVar31 = cVar9 == (code)0x0;
      in_stack_00000370 = unaff_R12;
      in_stack_000003c0 = unaff_R15;
      goto code_r0x000140903f90;
    case (code)0x15:
      param_2 = (code *)((ulonglong)&uStack_518 & 0xffffffff);
      param_3 = (code *)0x8;
      goto code_r0x000140905404;
    case (code)0x16:
      pcStack_540 = (code *)((ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar32 * 0x800 |
                             (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
                             (ulonglong)bVar31 * 0x80 |
                             (ulonglong)(UNRECOVERED_JUMPTABLE == (code *)0x0) * 0x40 |
                             (ulonglong)(in_AF & 1) * 0x10 |
                             (ulonglong)
                             ((POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE & 0xff) & 1U) == 0) * 4 |
                             (ulonglong)(0xfffffffebcfe16cf < uVar14) |
                             (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000
                             | (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000)
      ;
      ppcVar21 = &pcStack_540;
      ppcVar22 = &pcStack_540;
      uVar14 = (ulonglong)unaff_RBX & 0xffffffff;
      if (bVar32) goto code_r0x000140905480;
      goto code_r0x000140905476;
    case (code)0x17:
      goto code_r0x000140905414;
    case (code)0x18:
      if (!bVar32) goto code_r0x000140905448;
      goto code_r0x000140905444;
    default:
      *(uint *)(&UNK_14301e8be + uVar14) =
           *(uint *)(&UNK_14301e8be + uVar14) << 1 | (uint)(0xfffffffebcfe16cf < uVar14);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000140903602;
  case (code)0x1:
                    /* WARNING: Subroutine does not return */
    pcStack_540 = (code *)0x1409039ea;
    pdb_142dc8570(&UNK_14301e728);
  case (code)0x2:
                    /* WARNING: Subroutine does not return */
    pcStack_540 = (code *)0x1409039de;
    pdb_142dc8590(&UNK_14301e728);
  case (code)0x3:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(byte)param_2[0x1c8];
  case (code)0x4:
                    /* WARNING: Could not recover jumptable at 0x00014090352d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar15 = (code *)(*(code *)(&UNK_14301e930 +
                                *(int *)(&UNK_14301e930 + (longlong)UNRECOVERED_JUMPTABLE * 4)))();
    return pcVar15;
  case (code)0x5:
    (&UNK_14301e8ad)[iVar1] = (&UNK_14301e8ad)[iVar1] + ' ';
code_r0x0001409039f9:
                    /* WARNING: Subroutine does not return */
    pcStack_540 = (code *)0x1409039fe;
    pdb_142dc8590(pcVar15);
  case (code)0x6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0x7:
code_r0x0001409035eb:
    pcVar29 = pcStack_40;
    pcStack_540 = (code *)0x1409035f9;
    pub_142e32760(pcVar15,unaff_RBX,200);
code_r0x000140903602:
    pcStack_48 = pcVar29 + 0x100;
    pcStack_540 = (code *)0x140903618;
    uVar14 = pdb_1408fdd40();
    if (uVar14 == 2) {
      pcStack_40[0x1c8] = (code)0x3;
      pcVar15 = pcStack_40;
code_r0x000140903630:
      pcStack_40 = pcVar15;
      *(undefined8 *)param_1 = 2;
      cVar9 = (code)0x3;
    }
    else {
      if (pcStack_40[0x158] == (code)0x4) {
        pcStack_48 = *(code **)(pcStack_40 + 0x160);
        puStack_58 = *(undefined8 **)(pcStack_40 + 0x168);
        if ((code *)*puStack_58 != (code *)0x0) {
          pcStack_540 = (code *)0x14090372f;
          (*(code *)*puStack_58)(pcStack_48);
        }
        if (puStack_58[1] != 0) {
          pcStack_540 = (code *)0x140903750;
          pub_1406abac0((byte *)pcStack_48,puStack_58[1],puStack_58[2]);
        }
        plVar24 = *(longlong **)(pcStack_40 + 0x130);
        LOCK();
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (*plVar24 == 0) {
          pcStack_540 = (code *)0x140903777;
          pdb_141746810(pcStack_40 + 0x130);
        }
      }
      else if (((pcStack_40[0x158] == (code)0x3) && (pcStack_40[0x1c0] == (code)0x3)) &&
              ((pcStack_40[0x1b8] == (code)0x3 && (pcStack_40[0x1b1] == (code)0x3)))) {
        pcStack_48 = *(code **)(pcStack_40 + 400);
        puStack_58 = *(undefined8 **)(pcStack_40 + 0x198);
        if ((code *)*puStack_58 != (code *)0x0) {
          pcStack_540 = (code *)0x1409036d1;
          (*(code *)*puStack_58)(pcStack_48);
        }
        if (puStack_58[1] != 0) {
          pcStack_540 = (code *)0x1409036f2;
          pub_1406abac0((byte *)pcStack_48,puStack_58[1],puStack_58[2]);
        }
        pcStack_40[0x1b0] = (code)0x0;
      }
      if ((uVar14 & 1) == 0) {
        uStack_518 = *(ulonglong *)(param_3 + 0x18);
        uStack_510 = *(undefined4 *)(param_3 + 0x20);
        uStack_50c = *(undefined4 *)(param_3 + 0x24);
        pcStack_540 = (code *)0x140903837;
        pcStack_60 = param_3;
        pcStack_48 = param_3;
        pdb_1417da120(&uStack_98,*(undefined8 *)(pcStack_40 + 0xd0),
                      *(undefined8 *)(pcStack_40 + 0xd8),pcStack_40 + 0xb0);
        LOCK();
        *(longlong *)pcStack_48 = *(longlong *)pcStack_48 + -1;
        UNLOCK();
        if (*(longlong *)pcStack_48 == 0) {
          pcStack_540 = (code *)0x140903851;
          pdb_140cd0de0(&pcStack_60);
        }
        pcStack_540 = (code *)0x140903865;
        pdb_14098a860(pcStack_40 + 0xe0);
        pcVar15 = pcStack_40;
        if (*(ulonglong *)(pcStack_40 + 200) != 0) {
          pcStack_540 = (code *)0x14090388b;
          pub_1406abac0(*(byte **)(pcStack_40 + 0xd0),*(ulonglong *)(pcStack_40 + 200),1);
        }
        pcVar16 = pcStack_50;
        puVar18 = *(undefined **)(pcVar15 + 0x90);
        if ((!SBORROW8(0,(longlong)puVar18)) && (puVar18 != (undefined *)0x0)) {
          pcStack_540 = (code *)0x1409038b5;
          pub_1406abac0(*(byte **)(pcVar15 + 0x98),(ulonglong)puVar18,1);
        }
        lVar27 = CONCAT44(uStack_94,uStack_98);
        param_3 = (code *)CONCAT44(uStack_8c,uStack_90);
        uStack_b8 = CONCAT44(uStack_84,uStack_88);
        uStack_b0 = CONCAT44(uStack_7c,uStack_80);
        uStack_a8 = uStack_78;
        uStack_a0 = uStack_70;
        pcVar15[0x1c8] = (code)0x1;
        if (lVar27 == -0x7fffffffffffffff) goto code_r0x000140903630;
      }
      else {
        pcStack_540 = (code *)0x140903791;
        pdb_14098a860(pcStack_40 + 0xe0);
        pcVar15 = pcStack_40;
        if (*(ulonglong *)(pcStack_40 + 200) != 0) {
          pcStack_540 = (code *)0x1409037b7;
          pub_1406abac0(*(byte **)(pcStack_40 + 0xd0),*(ulonglong *)(pcStack_40 + 200),1);
        }
        pcVar16 = pcStack_50;
        puVar18 = *(undefined **)(pcVar15 + 0x90);
        if ((!SBORROW8(0,(longlong)puVar18)) && (puVar18 != (undefined *)0x0)) {
          pcStack_540 = (code *)0x1409037e1;
          pub_1406abac0(*(byte **)(pcVar15 + 0x98),(ulonglong)puVar18,1);
        }
        pcVar15[0x1c8] = (code)0x1;
        lVar27 = -0x8000000000000000;
      }
      uStack_c8 = (undefined4)uStack_a8;
      uStack_c4 = uStack_a8._4_4_;
      uStack_c0 = (undefined4)uStack_a0;
      uStack_bc = uStack_a0._4_4_;
      uStack_d8 = (undefined4)uStack_b8;
      uStack_d4 = uStack_b8._4_4_;
      uStack_d0 = (undefined4)uStack_b0;
      uStack_cc = uStack_b0._4_4_;
      pcStack_540 = (code *)0x14090391d;
      pdb_140902140(pcVar16);
      if (SBORROW8(0,lVar27)) {
        pcStack_540 = (code *)0x14090392e;
        pbVar12 = (byte *)pdb_142dc6590(param_3);
        uVar28 = 1;
      }
      else {
        pcStack_540 = (code *)0x14090393b;
        pdb_14007ee60();
        pcStack_540 = (code *)0x14090394a;
        pbVar12 = pub_1406abab0(0x40,8);
        if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pcStack_540 = (code *)0x1409039cf;
          pcStack_50 = (code *)lVar27;
          pcStack_48 = param_3;
          pdb_142dc7e11(8,0x40);
        }
        pbVar12[0] = 1;
        pbVar12[1] = 0;
        pbVar12[2] = 0;
        pbVar12[3] = 0;
        pbVar12[4] = 0;
        pbVar12[5] = 0;
        pbVar12[6] = 0;
        pbVar12[7] = 0;
        pbVar12[8] = 1;
        pbVar12[9] = 0;
        pbVar12[10] = 0;
        pbVar12[0xb] = 0;
        pbVar12[0xc] = 0;
        pbVar12[0xd] = 0;
        pbVar12[0xe] = 0;
        pbVar12[0xf] = 0;
        *(longlong *)(pbVar12 + 0x10) = lVar27;
        *(code **)(pbVar12 + 0x18) = param_3;
        *(ulonglong *)(pbVar12 + 0x20) = CONCAT44(uStack_d4,uStack_d8);
        *(ulonglong *)(pbVar12 + 0x28) = CONCAT44(uStack_cc,uStack_d0);
        *(ulonglong *)(pbVar12 + 0x30) = CONCAT44(uStack_c4,uStack_c8);
        *(ulonglong *)(pbVar12 + 0x38) = CONCAT44(uStack_bc,uStack_c0);
        puVar18 = &UNK_14301e740;
        uVar28 = 0;
      }
      *(undefined8 *)param_1 = uVar28;
      *(byte **)(param_1 + 8) = pbVar12;
      *(undefined **)(param_1 + 0x10) = puVar18;
      cVar9 = (code)0x1;
    }
    pcStack_40[0x220] = cVar9;
    return param_1;
  case (code)0x8:
    param_1 = (code *)0x4301e920;
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(byte)param_2[0x2f0];
    pcVar16 = (code *)&UNK_14301e940;
code_r0x000140903d0d:
    lVar27 = (longlong)*(int *)(pcVar16 + (longlong)UNRECOVERED_JUMPTABLE * 4);
    UNRECOVERED_JUMPTABLE = pcVar16 + lVar27;
    bVar31 = UNRECOVERED_JUMPTABLE == (code *)0x0;
    cVar10 = (char)UNRECOVERED_JUMPTABLE;
    ppcVar22 = (code **)auStack_538;
    in_stack_000003d0 = param_2;
    uVar14 = uStack_520;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(UNRECOVERED_JUMPTABLE) {
    case (code *)0x140903d1d:
      uStack_248 = *(undefined8 *)(param_3 + 0x2e0);
      uStack_240 = *(undefined8 *)(param_3 + 0x2e8);
      uStack_288 = *(undefined8 *)(param_3 + 0x2a0);
      uStack_280 = *(undefined8 *)(param_3 + 0x2a8);
      uStack_278 = *(undefined8 *)(param_3 + 0x2b0);
      uStack_270 = *(undefined8 *)(param_3 + 0x2b8);
      uStack_268 = *(undefined4 *)(param_3 + 0x2c0);
      uStack_264 = *(undefined4 *)(param_3 + 0x2c4);
      uStack_260 = *(undefined4 *)(param_3 + 0x2c8);
      uStack_25c = *(undefined4 *)(param_3 + 0x2cc);
      uStack_258 = *(undefined4 *)(param_3 + 0x2d0);
      uStack_254 = *(undefined4 *)(param_3 + 0x2d4);
      uStack_250 = *(undefined4 *)(param_3 + 0x2d8);
      uStack_24c = *(undefined4 *)(param_3 + 0x2dc);
      uStack_d8 = *(undefined4 *)(param_3 + 0x280);
      uStack_d4 = *(undefined4 *)(param_3 + 0x284);
      uStack_d0 = *(undefined4 *)(param_3 + 0x288);
      uStack_cc = *(undefined4 *)(param_3 + 0x28c);
      uStack_c8 = *(undefined4 *)(param_3 + 0x290);
      uStack_c4 = *(undefined4 *)(param_3 + 0x294);
      uStack_c0 = *(undefined4 *)(param_3 + 0x298);
      uStack_bc = *(undefined4 *)(param_3 + 0x29c);
      pcStack_540 = (code *)0x140903d99;
      pdb_140d9d540(&stack0xfffffffffffffff8,&uStack_288,&uStack_d8);
      unaff_RBX = (code *)auStack_508;
      pcStack_540 = (code *)0x140903db3;
      pub_142e32760(unaff_RBX,&stack0xfffffffffffffff8,0x280);
      param_3 = (code *)0x280;
      pcVar15 = param_2;
      goto code_r0x000140903dc3;
    case (code *)0x140903de2:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(byte)param_3[0xc0];
    case (code *)0x140903de9:
                    /* WARNING: Could not recover jumptable at 0x000140903df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar15 = (code *)(*(code *)(&UNK_14301e950 +
                                  *(int *)(&UNK_14301e950 + (longlong)UNRECOVERED_JUMPTABLE * 4)))()
      ;
      return pcVar15;
    case (code *)0x140903ecf:
      goto code_r0x000140903ecf;
    case (code *)0x140903ee7:
      if (-1 < (longlong)UNRECOVERED_JUMPTABLE) {
        *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
      }
    case (code *)0x140903eed:
                    /* WARNING: Could not recover jumptable at 0x000140903efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar15 = (code *)(*(code *)(&UNK_14301e964 +
                                  *(int *)(&UNK_14301e964 + (longlong)UNRECOVERED_JUMPTABLE * 4)))()
      ;
      return pcVar15;
    case (code *)0x140903f90:
code_r0x000140903f90:
      if (!bVar31) goto code_r0x000140903f96;
      pbVar12 = (byte *)0x8;
      goto code_r0x000140904202;
    case (code *)0x140904056:
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar10);
      goto code_r0x000140904036;
    case (code *)0x140904117:
      out(0x52,cVar10);
      pcVar15 = (code *)CONCAT71((int7)((ulonglong)pcVar16 >> 8),
                                 (byte)pcVar16 + (char)UNRECOVERED_JUMPTABLE[-0x75]);
      puVar23 = (undefined1 *)0x888;
      goto code_r0x0001409040fb;
    case (code *)0x1409046e7:
      pcVar15 = (code *)&UNK_14301e728;
code_r0x0001409046ee:
                    /* WARNING: Subroutine does not return */
      pcStack_540 = (code *)0x1409046f3;
      pdb_142dc8590(pcVar15);
    case (code *)0x1409046f0:
code_r0x0001409046f0:
      puVar20 = puVar19;
      goto code_r0x0001409046fa;
    case (code *)0x1409046f3:
code_r0x0001409046f3:
      pcVar16 = (code *)&UNK_14301e728;
      puVar20 = auStack_538;
code_r0x0001409046fa:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar20 + -8) = 0x1409046ff;
      pdb_142dc8570(pcVar16);
    case (code *)0x1409046fd:
      goto code_r0x000140904799;
    case (code *)0x140904702:
code_r0x000140904707:
                    /* WARNING: Subroutine does not return */
      pcStack_540 = (code *)0x14090470c;
      pdb_142dc8590();
    case (code *)0x140904703:
      if (!SCARRY8(lVar27,(longlong)pcVar16)) {
        pcVar29 = UNRECOVERED_JUMPTABLE + 0x48000001;
        *pcVar29 = (code)((char)*pcVar29 - 0x3f);
        pcVar15 = pcVar16 + -1;
        unaff_R12 = in_stack_00000370;
        unaff_R15 = in_stack_000003c0;
        if (pcVar15 != (code *)0x0 && *pcVar29 == (code)0x0) {
          *(int *)(UNRECOVERED_JUMPTABLE + 0x1a8) = (int)UNRECOVERED_JUMPTABLE;
        }
        goto code_r0x0001409046ae;
      }
      if (SCARRY8(lVar27,(longlong)pcVar16)) goto code_r0x000140904707;
      goto code_r0x000140904709;
    case (code *)0x140904729:
      pcVar16 = (code *)0x4301e7a8;
      break;
    case (code *)0x14090540a:
      uVar11 = in((short)param_2);
      UNRECOVERED_JUMPTABLE = (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),uVar11)
      ;
      UNRECOVERED_JUMPTABLE[0x28c48348] =
           (code)((char)UNRECOVERED_JUMPTABLE[0x28c48348] + (char)param_2);
code_r0x000140905414:
      return UNRECOVERED_JUMPTABLE;
    case (code *)0x140905424:
      pcVar16 = (code *)(ulonglong)(byte)pcVar16[0x22];
      param_3 = pcVar16 + -1;
      param_4 = (code *)0x0;
      goto code_r0x000140905432;
    case (code *)0x140905452:
      UNRECOVERED_JUMPTABLE[-0x73] = (code)((byte)UNRECOVERED_JUMPTABLE[-0x73] ^ (byte)pcVar16);
      uStack_518 = (ulonglong)((int)UNRECOVERED_JUMPTABLE + 0x2719366);
      puVar18 = &UNK_14301e7e0;
code_r0x000140905466:
      pcStack_540 = (code *)0x1409054ec;
      pcVar15 = (code *)pdb_140f66090(pcVar16,puVar18,4,auStack_508);
      return pcVar15;
    case (code *)0x140905480:
      goto code_r0x000140905480;
    case (code *)0x14301e940:
      *(double *)(unaff_RBX + -0x72) = (double)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x00014090472f;
  case (code)0x9:
    pcVar16 = unaff_RBX + 0x50c07a43d;
    *pcVar16 = (code)((char)*pcVar16 + 0x20);
    bVar31 = (char)*pcVar16 < '\0';
code_r0x0001409046d7:
    if (bVar31) {
      pcVar15 = (code *)CONCAT71((int7)((ulonglong)pcVar15 >> 8),
                                 (char)pcVar15 + (char)((ulonglong)pcVar15 >> 8));
      goto code_r0x0001409046e3;
    }
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
    unaff_R12 = in_stack_00000370;
    unaff_R15 = in_stack_000003c0;
    break;
  case (code)0xa:
    *(undefined4 *)(&UNK_14301eae0 + iVar1) = 0x4301e920;
    unaff_R12 = in_stack_00000370;
    unaff_R15 = in_stack_000003c0;
    break;
  case (code)0xb:
    param_2 = pcVar15;
    pcVar15 = param_3;
code_r0x000140903dc3:
    pcStack_540 = (code *)0x140903dcb;
    pub_142e32760(param_2,unaff_RBX,param_3);
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(byte)pcVar15[0xc0];
code_r0x000140903dd2:
    pcVar15 = (code *)&UNK_14301e950;
code_r0x000140903dd9:
                    /* WARNING: Could not recover jumptable at 0x000140903de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar15 = (code *)(*(pcVar15 + *(int *)(pcVar15 + (longlong)UNRECOVERED_JUMPTABLE * 4)))();
    return pcVar15;
  case (code)0xc:
    cVar9 = *param_3;
    pcVar15 = (code *)CONCAT71(0x14301e9,(char)cVar9 + 0x20U);
    *UNRECOVERED_JUMPTABLE = *UNRECOVERED_JUMPTABLE;
    (&UNK_14301e8ad)[iVar1] = (&UNK_14301e8ad)[iVar1] + (char)cVar9 + 0x20U;
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)((uint)UNRECOVERED_JUMPTABLE | 0x271ab77);
    pcStack_540 = param_2;
    goto code_r0x000140903dd9;
  case (code)0xd:
    goto code_r0x0001409046e2;
  case (code)0xe:
    *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE & 0x20);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
    unaff_R12 = in_stack_00000370;
    unaff_R15 = in_stack_000003c0;
    break;
  case (code)0xf:
code_r0x000140903eaf:
    acStack_4f9[(longlong)pcVar15 * 4] = acStack_4f9[(longlong)pcVar15 * 4] + (char)pcVar15;
    *UNRECOVERED_JUMPTABLE =
         (code)((char)*UNRECOVERED_JUMPTABLE << 1 | (char)*UNRECOVERED_JUMPTABLE < '\0');
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
    pcStack_540 = (code *)0x140903ec8;
    pub_142e32760(unaff_R15,unaff_RBX,0x120);
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(byte)param_3[0x1e8];
    goto code_r0x000140903ecf;
  case (code)0x10:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
code_r0x000140903ecf:
    pcVar15 = (code *)&UNK_14301e974;
code_r0x000140903ed6:
    UNRECOVERED_JUMPTABLE = pcVar15 + *(int *)(pcVar15 + (longlong)UNRECOVERED_JUMPTABLE * 4);
code_r0x000140903edd:
                    /* WARNING: Could not recover jumptable at 0x000140903edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar15 = (code *)(*UNRECOVERED_JUMPTABLE)();
    return pcVar15;
  case (code)0x11:
code_r0x000140904036:
    param_2 = unaff_RBX;
    pcStack_540 = (code *)0x140904044;
    pub_142e32760(param_2);
    puVar25 = *(undefined4 **)(puVar23 + 0x888);
    puVar2 = (undefined8 *)(puVar25 + 0x34);
    param_3 = (code *)0x1b0;
    pcStack_540 = (code *)0x140904063;
    pub_142e32760(puVar2);
    pcVar16 = (code *)&UNK_14301e964;
    iVar1 = *(int *)(&UNK_14301e964 + (ulonglong)*(byte *)(puVar25 + 0x9e) * 4);
    pcVar15 = pcVar16;
    pcVar26 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(puVar25 + 0x9e)) {
    case 0:
      *(undefined8 *)(puVar25 + 0x60) = *(undefined8 *)(puVar25 + 0x44);
      *(undefined8 *)(puVar25 + 0x62) = *(undefined8 *)(puVar25 + 0x46);
      uVar28 = *puVar2;
      uVar3 = *(undefined8 *)(puVar25 + 0x36);
      uVar4 = *(undefined8 *)(puVar25 + 0x38);
      uVar5 = *(undefined8 *)(puVar25 + 0x3a);
      uVar6 = *(undefined8 *)(puVar25 + 0x3c);
      uVar7 = *(undefined8 *)(puVar25 + 0x3e);
      *(undefined8 **)(puVar23 + 0x880) = puVar2;
      *(undefined8 *)(puVar25 + 0x5c) = *(undefined8 *)(puVar25 + 0x40);
      *(undefined8 *)(puVar25 + 0x5e) = *(undefined8 *)(puVar25 + 0x42);
      *(undefined8 *)(puVar25 + 0x58) = uVar6;
      *(undefined8 *)(puVar25 + 0x5a) = uVar7;
      *(undefined8 *)(puVar25 + 0x54) = uVar4;
      *(undefined8 *)(puVar25 + 0x56) = uVar5;
      *(undefined8 *)(puVar25 + 0x50) = uVar28;
      *(undefined8 *)(puVar25 + 0x52) = uVar3;
      puVar25[100] = puVar25[0x48];
      puVar25[0x65] = puVar25[0x49];
      puVar25[0x66] = puVar25[0x4a];
      puVar25[0x67] = puVar25[0x4b];
      *(undefined8 *)(puVar25 + 0x68) = *(undefined8 *)(puVar25 + 0x4c);
      *(undefined8 *)(puVar25 + 0x6a) = *(undefined8 *)(puVar25 + 0x4e);
      uStack_518 = *(ulonglong *)(puVar25 + 0x62);
      pcVar15 = (code *)(puVar23 + 0x4b0);
      goto code_r0x0001409040fb;
    case 1:
      *(undefined8 **)(puVar23 + 0x880) = puVar2;
      pcVar16 = (code *)&UNK_14301e7a8;
      break;
    case 2:
      *(undefined8 **)(puVar23 + 0x880) = puVar2;
      pcVar16 = (code *)&UNK_14301e7a8;
      goto code_r0x00014090472f;
    case 3:
      *(undefined8 **)(puVar23 + 0x880) = puVar2;
      goto code_r0x000140904142;
    case 4:
                    /* WARNING: Could not emulate address calculation at 0x000140903f12 */
                    /* WARNING: Treating indirect jump as call */
      pcVar15 = (code *)(*(code *)(&UNK_14301e974 +
                                  *(int *)(&UNK_14301e974 + (longlong)(&UNK_14301e964 + iVar1) * 4))
                        )();
      return pcVar15;
    case 5:
      (&UNK_14301e8f1)[iVar1] = (&UNK_14301e8f1)[iVar1] + 'd';
      break;
    case 6:
      (&UNK_14301e8f1)[iVar1] = (&UNK_14301e8f1)[iVar1] + 'd';
code_r0x00014090472f:
                    /* WARNING: Subroutine does not return */
      pcStack_540 = (code *)0x140904734;
      pdb_142dc8590(pcVar16);
    case 7:
      *puVar25 = *puVar25;
      (&UNK_14301e8ef)[iVar1] = (&UNK_14301e8ef)[iVar1] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
      *(int *)(puVar23 + 0x31) = *(int *)(puVar23 + 0x31) + 1;
      goto code_r0x000140905432;
    case 9:
      pcStack_540 = (code *)0x1409054be;
      pcVar15 = (code *)pdb_140f66090(&UNK_14301e964,&UNK_14301e858,5,auStack_508);
      return pcVar15;
    case 10:
      goto code_r0x000140905448;
    case 0xb:
code_r0x000140905476:
      ppcVar22 = ppcVar21;
      uVar14 = uStack_520;
code_r0x000140905480:
      uStack_520 = uVar14;
      *(undefined8 *)((longlong)ppcVar22 + -8) = 0x140905490;
      pcVar15 = (code *)pdb_140f66090();
      return pcVar15;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    pcStack_540 = (code *)0x140904760;
    pdb_142dc8570(pcVar16);
  case (code)0x12:
code_r0x000140904709:
    goto code_r0x000140904711;
  case (code)0x13:
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE - 0x20);
code_r0x0001409046e0:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
    goto code_r0x0001409046e2;
  case (code)0x14:
    pcVar13 = (char *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),4);
    *pcVar13 = *pcVar13 + '\x04';
code_r0x0001409040fb:
    pcStack_540 = (code *)0x140904100;
    pdb_140d9d190(pcVar15);
    pcStack_540 = (code *)0x14090411d;
    pub_142e32760(puVar23 + 0x3e0,puVar23 + 0x4b0,200);
    puVar25 = *(undefined4 **)(puVar23 + 0x888);
    pcStack_540 = (code *)0x140904139;
    pub_142e32760(puVar25 + 0x6c,puVar23 + 0x3e0,200);
code_r0x000140904142:
    *(undefined4 **)(puVar23 + 0x878) = puVar25 + 0x6c;
    pcStack_540 = (code *)0x140904158;
    uVar14 = pdb_1408fdd40();
    if (uVar14 != 2) {
      lVar27 = *(longlong *)(puVar23 + 0x888);
      if (*(char *)(lVar27 + 0x208) == '\x04') {
        *(undefined8 *)(puVar23 + 0x878) = *(undefined8 *)(lVar27 + 0x210);
        puVar2 = *(undefined8 **)(lVar27 + 0x218);
        *(undefined8 **)(puVar23 + 0x870) = puVar2;
        pcVar15 = (code *)*puVar2;
        if (pcVar15 != (code *)0x0) {
          pcStack_540 = (code *)0x140904413;
          (*pcVar15)(*(undefined8 *)(puVar23 + 0x878));
        }
        arg1 = *(ulonglong *)(*(longlong *)(puVar23 + 0x870) + 8);
        if (arg1 != 0) {
          pcStack_540 = (code *)0x140904434;
          pub_1406abac0(*(byte **)(puVar23 + 0x878),arg1,
                        *(ulonglong *)(*(longlong *)(puVar23 + 0x870) + 0x10));
        }
        plVar24 = *(longlong **)(*(longlong *)(puVar23 + 0x888) + 0x1e0);
        LOCK();
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (*plVar24 == 0) {
          pcStack_540 = (code *)0x14090445b;
          pdb_141746810(*(longlong *)(puVar23 + 0x888) + 0x1e0);
        }
      }
      else if ((((*(char *)(lVar27 + 0x208) == '\x03') &&
                (*(char *)(*(longlong *)(puVar23 + 0x888) + 0x270) == '\x03')) &&
               (*(char *)(*(longlong *)(puVar23 + 0x888) + 0x268) == '\x03')) &&
              (*(char *)(*(longlong *)(puVar23 + 0x888) + 0x261) == '\x03')) {
        pcStack_540 = (code *)0x1409041e9;
        pdb_1400d68e0(*(longlong *)(puVar23 + 0x888) + 0x240);
        *(undefined1 *)(*(longlong *)(puVar23 + 0x888) + 0x260) = 0;
      }
      if ((uVar14 & 1) == 0) {
        *(longlong *)(puVar23 + 0x858) = unaff_R12;
        if (*(char *)(unaff_R12 + 0x28) == '\x02') {
          uStack_518 = *(ulonglong *)(unaff_R12 + 0x20);
          pcStack_540 = (code *)0x14090453a;
          pdb_1417d7ad0(puVar23 + 0x4b0,*(undefined8 *)(*(longlong *)(puVar23 + 0x888) + 0x180),
                        *(undefined8 *)(*(longlong *)(puVar23 + 0x888) + 0x188),
                        *(undefined8 *)(unaff_R12 + 0x18));
        }
        else {
          lVar27 = *(longlong *)(puVar23 + 0x888);
          uStack_518 = *(ulonglong *)(unaff_R12 + 0x18);
          uStack_510 = *(undefined4 *)(unaff_R12 + 0x20);
          uStack_50c = *(undefined4 *)(unaff_R12 + 0x24);
          pcStack_540 = (code *)0x14090456e;
          pdb_1417d8230(puVar23 + 0x4b0,*(undefined8 *)(lVar27 + 0x180),
                        *(undefined8 *)(lVar27 + 0x188),lVar27 + 0x160);
        }
        lVar27 = *(longlong *)(puVar23 + 0x4b0);
        unaff_R12 = *(longlong *)(puVar23 + 0x4b8);
        if (SBORROW8(0,lVar27)) {
          plVar24 = *(longlong **)(puVar23 + 0x858);
          LOCK();
          *plVar24 = *plVar24 + -1;
          UNLOCK();
          if (*plVar24 == 0) {
            pcStack_540 = (code *)0x1409045a2;
            pdb_140cd0de0(puVar23 + 0x858);
          }
          goto code_r0x000140904466;
        }
        *(undefined4 *)(puVar23 + 0x840) = *(undefined4 *)(puVar23 + 0x4d0);
        *(undefined4 *)(puVar23 + 0x844) = *(undefined4 *)(puVar23 + 0x4d4);
        *(undefined4 *)(puVar23 + 0x848) = *(undefined4 *)(puVar23 + 0x4d8);
        *(undefined4 *)(puVar23 + 0x84c) = *(undefined4 *)(puVar23 + 0x4dc);
        *(undefined4 *)(puVar23 + 0x830) = *(undefined4 *)(puVar23 + 0x4c0);
        *(undefined4 *)(puVar23 + 0x834) = *(undefined4 *)(puVar23 + 0x4c4);
        *(undefined4 *)(puVar23 + 0x838) = *(undefined4 *)(puVar23 + 0x4c8);
        *(undefined4 *)(puVar23 + 0x83c) = *(undefined4 *)(puVar23 + 0x4cc);
        plVar24 = *(longlong **)(puVar23 + 0x858);
        LOCK();
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (*plVar24 == 0) {
          pcStack_540 = (code *)0x1409045dd;
          pdb_140cd0de0(puVar23 + 0x858);
        }
        pcStack_540 = (code *)0x1409045f1;
        pdb_14098a860(*(longlong *)(puVar23 + 0x888) + 400);
        lVar17 = *(longlong *)(puVar23 + 0x888);
        if (*(ulonglong *)(lVar17 + 0x178) != 0) {
          pcStack_540 = (code *)0x140904617;
          pub_1406abac0(*(byte **)(lVar17 + 0x180),*(ulonglong *)(lVar17 + 0x178),1);
        }
        puVar18 = *(undefined **)(lVar17 + 0x140);
        uVar28 = *(undefined8 *)(puVar23 + 0x880);
      }
      else {
code_r0x000140904466:
        pcStack_540 = (code *)0x140904479;
        pdb_14098a860(*(longlong *)(puVar23 + 0x888) + 400);
        lVar17 = *(longlong *)(puVar23 + 0x888);
        if (*(ulonglong *)(lVar17 + 0x178) != 0) {
          pcStack_540 = (code *)0x14090449f;
          pub_1406abac0(*(byte **)(lVar17 + 0x180),*(ulonglong *)(lVar17 + 0x178),1);
        }
        puVar18 = *(undefined **)(lVar17 + 0x140);
        lVar27 = -0x8000000000000000;
        uVar28 = *(undefined8 *)(puVar23 + 0x880);
      }
      if (0 < (longlong)puVar18) {
        pcStack_540 = (code *)0x1409044ce;
        pub_1406abac0(*(byte **)(lVar17 + 0x148),(ulonglong)puVar18,1);
      }
      *(undefined4 *)(puVar23 + 0x810) = *(undefined4 *)(puVar23 + 0x840);
      *(undefined4 *)(puVar23 + 0x814) = *(undefined4 *)(puVar23 + 0x844);
      *(undefined4 *)(puVar23 + 0x818) = *(undefined4 *)(puVar23 + 0x848);
      *(undefined4 *)(puVar23 + 0x81c) = *(undefined4 *)(puVar23 + 0x84c);
      *(undefined4 *)(puVar23 + 0x800) = *(undefined4 *)(puVar23 + 0x830);
      *(undefined4 *)(puVar23 + 0x804) = *(undefined4 *)(puVar23 + 0x834);
      *(undefined4 *)(puVar23 + 0x808) = *(undefined4 *)(puVar23 + 0x838);
      *(undefined4 *)(puVar23 + 0x80c) = *(undefined4 *)(puVar23 + 0x83c);
      *(undefined1 *)(lVar17 + 0x278) = 1;
      pcStack_540 = (code *)0x1409044f9;
      pdb_140902140(uVar28);
      goto code_r0x00014090479b;
    }
    in_stack_000003d0 = *(code **)(puVar23 + 0x888);
    in_stack_000003d0[0x278] = (code)0x3;
    cVar9 = (code)0x3;
    goto code_r0x000140904a97;
  case (code)0x15:
    pcStack_540 = (code *)0x140903ed0;
    UNRECOVERED_JUMPTABLE = (code *)func_0x000188903ed1(CONCAT71(0x14301e9,(char)*param_3 + 0x20));
    pcVar15 = (code *)0x4301e974;
    goto code_r0x000140903ed6;
  case (code)0x16:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
code_r0x000140904711:
    UNRECOVERED_JUMPTABLE[-0x73] = (code)((char)UNRECOVERED_JUMPTABLE[-0x73] + (char)pcVar16);
code_r0x000140904719:
                    /* WARNING: Subroutine does not return */
    pcStack_540 = (code *)0x14090471e;
    pdb_142dc8570();
  case (code)0x17:
code_r0x0001409046e3:
    *(int *)pcVar15 = *(int *)pcVar15 + -0x72b80000;
    goto code_r0x0001409046ee;
  case (code)0x18:
    (&UNK_14301e8ab)[iVar1] = (&UNK_14301e8ab)[iVar1] + ' ';
    *(uint *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + (uint)UNRECOVERED_JUMPTABLE;
    (&UNK_14301e8a5)[iVar1] = (&UNK_14301e8a5)[iVar1] + ' ';
    *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE | bVar8);
    cRam000000064f098d5d = cRam000000064f098d5d + ' ';
    if (-1 < cRam000000064f098d5d) {
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
      cVar9 = *UNRECOVERED_JUMPTABLE;
      unaff_R15 = in_stack_000003c0;
      goto code_r0x000140903f89;
    }
    *param_3 = (code)((char)*param_3 + 0x20);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + bVar8);
code_r0x000140903f96:
    pcStack_540 = (code *)0x140903fa2;
    pdb_14007ee60();
    pcStack_540 = (code *)0x140903faf;
    pbVar12 = pub_1406abab0((longlong)param_1 << 4,8);
    if (pbVar12 == (byte *)0x0) {
      pcStack_540 = (code *)0x140904786;
      pdb_142dc7e2a(8,(longlong)param_1 << 4);
      goto code_r0x000140904799;
    }
    pcVar16 = *(code **)(param_3 + 0x170);
code_r0x000140904202:
    *(code **)(param_3 + 0x178) = param_1;
    *(byte **)(param_3 + 0x180) = pbVar12;
    *(undefined8 *)(param_3 + 0x188) = 0;
    param_3[0x1ea] = (code)0x1;
    plVar24 = *(longlong **)(pcVar16 + 0x20);
    plVar30 = plVar24 + *(longlong *)(pcVar16 + 0x28) * 10;
    lVar27 = 0;
    for (; plVar24 != plVar30; plVar24 = plVar24 + 10) {
      pcStack_540 = (code *)0x1409042a5;
      pdb_140f60be0(&stack0x000003a0,plVar24 + 7);
      if (SBORROW8(0,*plVar24)) {
        uStackX_8 = plVar24[2];
      }
      else {
        uStackX_8 = plVar24[2];
        if ((longlong)uStackX_8 < 0) {
          uVar28 = 0;
code_r0x0001409043d5:
          pcStack_540 = (code *)0x1409043e0;
          pdb_142dc7e2a(uVar28,uStackX_8);
          goto code_r0x000140904799;
        }
        if (uStackX_8 == 0) {
          uStackX_8 = 0;
        }
        else {
          lVar27 = plVar24[1];
          pcStack_540 = (code *)0x1409042eb;
          pdb_14007ee60();
          uVar28 = 1;
          pcStack_540 = (code *)0x1409042fe;
          pbVar12 = pub_1406abab0(uStackX_8,1);
          if (pbVar12 == (byte *)0x0) goto code_r0x0001409043d5;
          pcStack_540 = (code *)0x140904318;
          pub_142e32760(pbVar12,lVar27,uStackX_8);
        }
      }
      unaff_retaddr = &stack0xfffffffffffffff8;
      pcStack_540 = (code *)0x140904390;
      unaff_RBP = pdb_141710980(param_3 + 0x150);
      lVar27 = *(longlong *)(in_stack_000003d0 + 0x188);
      if (lVar27 == *(longlong *)(in_stack_000003d0 + 0x178)) {
        pcStack_540 = (code *)0x1409043cc;
        pdb_142d7e980(param_3 + 0x178);
      }
      lVar17 = *(longlong *)(in_stack_000003d0 + 0x180);
      *(ulonglong *)(lVar17 + lVar27 * 0x10) = unaff_RBP;
      *(undefined1 **)(lVar17 + 8 + lVar27 * 0x10) = unaff_retaddr;
      lVar27 = lVar27 + 1;
      *(longlong *)(in_stack_000003d0 + 0x188) = lVar27;
    }
    if (lVar27 == 0) {
      pbVar12 = (byte *)0x8;
      lVar17 = 0;
    }
    else {
      pcStack_540 = (code *)0x140904645;
      pdb_14007ee60();
      pcStack_540 = (code *)0x140904652;
      pbVar12 = pub_1406abab0(lVar27 * 8,8);
      if (pbVar12 == (byte *)0x0) {
        pcStack_540 = (code *)0x140904796;
        pdb_142dc7e2a(8,lVar27 * 8);
code_r0x000140904799:
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
      lVar17 = *(longlong *)(in_stack_000003d0 + 0x188);
    }
    *(longlong *)(in_stack_000003d0 + 400) = lVar27;
    *(byte **)(in_stack_000003d0 + 0x198) = pbVar12;
    *(undefined8 *)(in_stack_000003d0 + 0x1a0) = 0;
    *(undefined2 *)(in_stack_000003d0 + 0x1e9) = 1;
    param_2 = *(code **)(in_stack_000003d0 + 0x178);
    UNRECOVERED_JUMPTABLE = *(code **)(in_stack_000003d0 + 0x180);
    pcVar15 = (code *)(lVar17 << 4);
    pcVar26 = in_stack_000003d0;
    unaff_R12 = in_stack_00000370;
    unaff_R15 = in_stack_000003c0;
    break;
  case (code)0x19:
    pcVar15 = (code *)swi(1);
    pcVar15 = (code *)(*pcVar15)();
    return pcVar15;
  case (code)0x1a:
    puVar18 = (undefined *)0x4301e7e0;
    goto code_r0x000140905466;
  case (code)0x1b:
code_r0x000140905404:
    pcStack_540 = (code *)0x14090540c;
    pcVar15 = (code *)pdb_1417ca2e0(param_1,param_2,param_3);
    return pcVar15;
  case (code)0x1c:
code_r0x000140905432:
    pcVar15 = param_2;
    if ((code *)0x1 < pcVar16) {
      param_4 = param_3;
    }
    param_2 = (code *)&UNK_14301e984;
code_r0x000140905444:
    pcVar26 = (code *)(longlong)*(int *)(param_2 + (longlong)param_4 * 4);
code_r0x000140905448:
                    /* WARNING: Could not recover jumptable at 0x00014090544b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar15 = (code *)(*(pcVar26 + (longlong)param_2))(pcVar15);
    return pcVar15;
  default:
    *(int *)(unaff_RBX + -0x72) = *(int *)(unaff_RBX + -0x72) + -0x4301e920;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001409046ae:
  pcVar15 = pcVar15 + (longlong)UNRECOVERED_JUMPTABLE;
  *(code **)(pcVar26 + 0x1a8) = UNRECOVERED_JUMPTABLE;
  *(code **)(pcVar26 + 0x1b0) = UNRECOVERED_JUMPTABLE;
  *(code **)(pcVar26 + 0x1b8) = param_2;
  *(code **)(pcVar26 + 0x1c0) = pcVar15;
  pcVar29 = in_stack_00000368;
code_r0x0001409046e2:
  while (UNRECOVERED_JUMPTABLE != pcVar15) {
    *(code **)(pcVar26 + 0x1b0) = UNRECOVERED_JUMPTABLE + 0x10;
    uVar28 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
    lVar27 = *(longlong *)(UNRECOVERED_JUMPTABLE + 8);
    *(undefined8 *)(pcVar26 + 0x1c8) = uVar28;
    *(longlong *)(pcVar26 + 0x1d0) = lVar27;
    *(undefined8 *)(pcVar26 + 0x1d8) = uVar28;
    *(longlong *)(pcVar26 + 0x1e0) = lVar27;
    pcStack_540 = (code *)0x1409048b3;
    (**(code **)(lVar27 + 0x18))(&stack0xfffffffffffffff8,uVar28,unaff_R12);
    if ((int)unaff_RBP == 1) {
      in_stack_000003d0[0x1e8] = (code)0x3;
      goto code_r0x000140904a95;
    }
    pbVar12 = *(byte **)(in_stack_000003d0 + 0x1d8);
    puVar2 = *(undefined8 **)(in_stack_000003d0 + 0x1e0);
    if ((code *)*puVar2 != (code *)0x0) {
      pcStack_540 = (code *)0x140904911;
      (*(code *)*puVar2)(pbVar12);
    }
    puVar18 = (undefined *)puVar2[1];
    if (puVar18 != (undefined *)0x0) {
      pcStack_540 = (code *)0x140904932;
      pub_1406abac0(pbVar12,(ulonglong)puVar18,puVar2[2]);
    }
    if (unaff_retaddr != (undefined1 *)0x0) {
      pcStack_540 = (code *)0x140904aeb;
      unaff_R12 = pdb_142deada0(&stack0xfffffffffffffff8);
      pcStack_540 = (code *)0x140904b02;
      pdb_1404ada40(in_stack_000003d0 + 0x1a8);
      pcStack_540 = (code *)0x140904b16;
      pdb_140969180(in_stack_000003d0 + 400);
      *(undefined2 *)(in_stack_000003d0 + 0x1e9) = 0;
      pcStack_540 = (code *)0x140904b33;
      pdb_14098a860(in_stack_000003d0 + 0x150);
      pcStack_540 = (code *)0x140904b47;
      pdb_14098ce10(in_stack_000003d0 + 0x120);
      in_stack_000003d0[0x1e8] = (code)0x1;
      lVar27 = -0x8000000000000000;
      goto code_r0x000140904b7c;
    }
    lVar27 = *(longlong *)(in_stack_000003d0 + 0x1a0);
    if (lVar27 == *(longlong *)(in_stack_000003d0 + 400)) {
      pcStack_540 = (code *)0x14090496c;
      pdb_142d7e8a0(in_stack_000003d0 + 400);
    }
    *(ulonglong *)(*(longlong *)(in_stack_000003d0 + 0x198) + lVar27 * 8) = uStackX_8;
    *(longlong *)(in_stack_000003d0 + 0x1a0) = lVar27 + 1;
    pcVar15 = *(code **)(in_stack_000003d0 + 0x1c0);
    pcVar26 = in_stack_000003d0;
    unaff_RBP = uStackX_8;
    UNRECOVERED_JUMPTABLE = *(code **)(in_stack_000003d0 + 0x1b0);
  }
  *(undefined8 *)(pcVar26 + 0x1c8) = 0;
  pcStack_540 = (code *)0x1409049c4;
  pdb_1404ada40(pcVar26 + 0x1a8);
  puVar18 = *(undefined **)(in_stack_000003d0 + 0x170);
  in_stack_000003d0[0x1e9] = (code)0x0;
  pcStack_540 = (code *)0x140904a09;
  pdb_1417db610(&uStack_d8,puVar18,&stack0xfffffffffffffff8);
  *(undefined2 *)(in_stack_000003d0 + 0x1e9) = 0;
  pcStack_540 = (code *)0x140904a26;
  pdb_14098a860(in_stack_000003d0 + 0x150);
  pcStack_540 = (code *)0x140904a3a;
  pdb_14098ce10(in_stack_000003d0 + 0x120);
  lVar27 = CONCAT44(uStack_d4,uStack_d8);
  unaff_R12 = CONCAT44(uStack_cc,uStack_d0);
  in_stack_000003d0[0x1e8] = (code)0x1;
  if (lVar27 == -0x7fffffffffffffff) {
code_r0x000140904a95:
    cVar9 = (code)0x4;
code_r0x000140904a97:
    in_stack_000003d0[0xc0] = cVar9;
    *(undefined8 *)pcVar29 = 2;
    cVar9 = (code)0x3;
  }
  else {
code_r0x000140904b7c:
    pcStack_540 = (code *)0x140904ba4;
    pdb_140901e70(unaff_R15);
code_r0x00014090479b:
    *(undefined4 *)(puVar23 + 0x7f0) = *(undefined4 *)(puVar23 + 0x810);
    *(undefined4 *)(puVar23 + 0x7f4) = *(undefined4 *)(puVar23 + 0x814);
    *(undefined4 *)(puVar23 + 0x7f8) = *(undefined4 *)(puVar23 + 0x818);
    *(undefined4 *)(puVar23 + 0x7fc) = *(undefined4 *)(puVar23 + 0x81c);
    *(undefined4 *)(puVar23 + 0x7e0) = *(undefined4 *)(puVar23 + 0x800);
    *(undefined4 *)(puVar23 + 0x7e4) = *(undefined4 *)(puVar23 + 0x804);
    *(undefined4 *)(puVar23 + 0x7e8) = *(undefined4 *)(puVar23 + 0x808);
    *(undefined4 *)(puVar23 + 0x7ec) = *(undefined4 *)(puVar23 + 0x80c);
    in_stack_000003d0 = *(code **)(puVar23 + 0x888);
    in_stack_000003d0[0xc0] = (code)0x1;
    if (SBORROW8(0,lVar27)) {
      pcStack_540 = (code *)0x1409047d5;
      pbVar12 = (byte *)pdb_142dc6590(unaff_R12);
      uVar28 = 1;
      in_stack_000003d0 = *(code **)(puVar23 + 0x888);
    }
    else {
      pcStack_540 = (code *)0x1409047e9;
      pdb_14007ee60();
      pcStack_540 = (code *)0x1409047f8;
      pbVar12 = pub_1406abab0(0x40,8);
      if (pbVar12 == (byte *)0x0) {
        *(longlong *)(puVar23 + 0x880) = lVar27;
        *(longlong *)(puVar23 + 0x878) = unaff_R12;
                    /* WARNING: Subroutine does not return */
        pcStack_540 = (code *)0x140904862;
        pdb_142dc7e11(8,0x40);
      }
      pbVar12[0] = 1;
      pbVar12[1] = 0;
      pbVar12[2] = 0;
      pbVar12[3] = 0;
      pbVar12[4] = 0;
      pbVar12[5] = 0;
      pbVar12[6] = 0;
      pbVar12[7] = 0;
      pbVar12[8] = 1;
      pbVar12[9] = 0;
      pbVar12[10] = 0;
      pbVar12[0xb] = 0;
      pbVar12[0xc] = 0;
      pbVar12[0xd] = 0;
      pbVar12[0xe] = 0;
      pbVar12[0xf] = 0;
      *(longlong *)(pbVar12 + 0x10) = lVar27;
      *(longlong *)(pbVar12 + 0x18) = unaff_R12;
      uVar28 = *(undefined8 *)(puVar23 + 0x7e8);
      uVar3 = *(undefined8 *)(puVar23 + 0x7f0);
      uVar4 = *(undefined8 *)(puVar23 + 0x7f8);
      *(undefined8 *)(pbVar12 + 0x20) = *(undefined8 *)(puVar23 + 0x7e0);
      *(undefined8 *)(pbVar12 + 0x28) = uVar28;
      *(undefined8 *)(pbVar12 + 0x30) = uVar3;
      *(undefined8 *)(pbVar12 + 0x38) = uVar4;
      puVar18 = &UNK_14301e740;
      uVar28 = 0;
    }
    *(undefined8 *)pcVar29 = uVar28;
    *(byte **)(pcVar29 + 8) = pbVar12;
    *(undefined **)(pcVar29 + 0x10) = puVar18;
    cVar9 = (code)0x1;
  }
  in_stack_000003d0[0x2f0] = cVar9;
  return pcVar29;
}

