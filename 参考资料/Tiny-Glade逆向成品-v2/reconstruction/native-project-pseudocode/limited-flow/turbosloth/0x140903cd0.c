// VA 0x140903cd0, PDB extent 5675 bytes
// turbosloth::asset::impl$24::run::async_block$0<asset::texture::blob::TextureAssetBlob,anyhow::Error,enum2$<asset_pipe::texture::BuildTextureAsset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140904709) overlaps instruction at (ram,0x000140904707)
    */
/* WARNING: Removing unreachable block (ram,0x000140904709) */
/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<asset::texture::blob::TextureAssetBlob,anyhow::Error,enum2$<asset_pipe::texture::BuildTextureAsset>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 5675 */

byte ***** pdb_140903cd0(byte *****param_1,byte *****param_2,byte *****param_3,ulonglong param_4)

{
  int iVar1;
  byte ****ppppbVar2;
  undefined8 *puVar3;
  ulonglong arg1;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte ***pppbVar12;
  byte ***pppbVar13;
  char cVar14;
  byte bVar15;
  undefined1 uVar16;
  longlong lVar17;
  byte ****ppppbVar18;
  char *pcVar19;
  ulonglong uVar20;
  byte *****pppppbVar21;
  byte *****pppppbVar22;
  undefined *puVar23;
  byte ****ppppbVar24;
  byte *****unaff_RBX;
  byte *****pppppbVar25;
  undefined8 **ppuVar26;
  undefined8 *puVar27;
  byte *****unaff_RSI;
  byte *****pppppbVar28;
  byte ****ppppbVar29;
  undefined8 uVar30;
  byte ***pppbVar31;
  float10 in_ST0;
  undefined4 uVar32;
  undefined8 *apuStack_968 [6];
  byte ***pppbStack_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  byte ****appppbStack_928 [9];
  undefined8 auStack_8e0 [2];
  char cStack_8c9;
  int iStack_8a7;
  byte ***pppbStack_6a8;
  byte ***pppbStack_6a0;
  byte ***pppbStack_698;
  byte ***pppbStack_690;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  byte ***pppbStack_668;
  byte ***pppbStack_660;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  byte ****ppppbStack_428;
  byte ****ppppbStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  byte **ppbStack_400;
  byte **ppbStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 uStack_3e0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  byte ***pppbStack_168;
  byte ***pppbStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  byte ***pppbStack_118;
  byte ***pppbStack_110;
  byte ***pppbStack_108;
  byte ***pppbStack_100;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  byte ****ppppbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  byte ***pppbStack_68;
  undefined8 uStack_60;
  byte ****ppppbStack_58;
  byte ****ppppbStack_50;
  undefined8 uStack_48;
  
  puVar27 = auStack_8e0 + 1;
  uStack_48 = 0xfffffffffffffffe;
  pppppbVar22 = (byte *****)&UNK_14301e940;
  lVar17 = (longlong)*(int *)(&UNK_14301e940 + (ulonglong)*(byte *)(param_2 + 0x5e) * 4);
  ppppbVar18 = (byte ****)(&UNK_14301e940 + lVar17);
  cVar14 = (char)ppppbVar18;
  pppppbVar25 = pppppbVar22;
  ppppbStack_50 = (byte ****)param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x5e)) {
  case 0:
    pppbStack_668 = (byte ***)param_2[0x5c];
    pppbStack_660 = (byte ***)param_2[0x5d];
    pppbStack_6a8 = (byte ***)param_2[0x54];
    pppbStack_6a0 = (byte ***)param_2[0x55];
    pppbStack_698 = (byte ***)param_2[0x56];
    pppbStack_690 = (byte ***)param_2[0x57];
    uStack_688 = *(undefined4 *)(param_2 + 0x58);
    uStack_684 = *(undefined4 *)((longlong)param_2 + 0x2c4);
    uStack_680 = *(undefined4 *)(param_2 + 0x59);
    uStack_67c = *(undefined4 *)((longlong)param_2 + 0x2cc);
    uStack_678 = *(undefined4 *)(param_2 + 0x5a);
    uStack_674 = *(undefined4 *)((longlong)param_2 + 0x2d4);
    uStack_670 = *(undefined4 *)(param_2 + 0x5b);
    uStack_66c = *(undefined4 *)((longlong)param_2 + 0x2dc);
    uStack_4f8 = *(undefined4 *)(param_2 + 0x50);
    uStack_4f4 = *(undefined4 *)((longlong)param_2 + 0x284);
    uStack_4f0 = *(undefined4 *)(param_2 + 0x51);
    uStack_4ec = *(undefined4 *)((longlong)param_2 + 0x28c);
    uStack_4e8 = *(undefined4 *)(param_2 + 0x52);
    uStack_4e4 = *(undefined4 *)((longlong)param_2 + 0x294);
    uStack_4e0 = *(undefined4 *)(param_2 + 0x53);
    uStack_4dc = *(undefined4 *)((longlong)param_2 + 0x29c);
    apuStack_968[1] = (undefined8 *)0x140903d99;
    pdb_140d9d540(&ppppbStack_428,&pppbStack_6a8,&uStack_4f8);
    pppppbVar25 = appppbStack_928;
    apuStack_968[1] = (undefined8 *)0x140903db3;
    pub_142e32760(pppppbVar25,&ppppbStack_428,0x280);
    param_2 = (byte *****)ppppbStack_50;
    pppppbVar28 = (byte *****)0x280;
    apuStack_968[1] = (undefined8 *)0x140903dcb;
    unaff_RBX = pppppbVar25;
    uVar32 = pub_142e32760(ppppbStack_50);
    pppppbVar22 = (byte *****)&UNK_14301e950;
    uVar20 = (ulonglong)*(int *)(&UNK_14301e950 + (ulonglong)*(byte *)(param_2 + 0x18) * 4);
    pppppbVar21 = (byte *****)(&UNK_14301e950 + uVar20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 0x18)) {
    case 0:
      param_2[0xc] = param_2[0x16];
      param_2[0xd] = param_2[0x17];
      param_2[10] = param_2[0x14];
      param_2[0xb] = param_2[0x15];
      param_2[8] = param_2[0x12];
      param_2[9] = param_2[0x13];
      param_2[6] = param_2[0x10];
      param_2[7] = param_2[0x11];
      param_2[4] = param_2[0xe];
      param_2[5] = param_2[0xf];
      pppbStack_118 = (byte ***)*param_2;
      pppbStack_110 = (byte ***)param_2[1];
      pppbStack_108 = (byte ***)param_2[2];
      pppbStack_100 = (byte ***)param_2[3];
      if (SBORROW8(0,(longlong)param_2[0xb])) {
        uStack_158 = *(undefined4 *)(param_2 + 0xe);
        uStack_154 = *(undefined4 *)((longlong)param_2 + 0x74);
        uStack_150 = *(undefined4 *)(param_2 + 0xf);
        uStack_14c = *(undefined4 *)((longlong)param_2 + 0x7c);
        uStack_148 = *(undefined4 *)(param_2 + 0x10);
        uStack_144 = *(undefined4 *)((longlong)param_2 + 0x84);
        uStack_140 = *(undefined4 *)(param_2 + 0x11);
        uStack_13c = *(undefined4 *)((longlong)param_2 + 0x8c);
        uStack_138 = *(undefined4 *)(param_2 + 0x12);
        uStack_134 = *(undefined4 *)((longlong)param_2 + 0x94);
        uStack_130 = *(undefined4 *)(param_2 + 0x13);
        uStack_12c = *(undefined4 *)((longlong)param_2 + 0x9c);
        apuStack_968[1] = (undefined8 *)0x140903e8c;
        pdb_140d9d500(&ppppbStack_428,&uStack_158,&pppbStack_118);
        apuStack_968[1] = (undefined8 *)0x140903ea9;
        pub_142e32760(&pppbStack_6a8,&ppppbStack_428,0x120);
        ppppbVar18 = ppppbStack_50;
        apuStack_968[1] = (undefined8 *)0x140903ec8;
        pub_142e32760(ppppbStack_50 + 0x1a,&pppbStack_6a8,0x120);
        ppppbVar18 = (byte ****)(ulonglong)*(byte *)(ppppbVar18 + 0x3d);
        goto code_r0x000140903ecf;
      }
      pppbStack_168 = (byte ***)param_2[0x16];
      pppbStack_160 = (byte ***)param_2[0x17];
      uStack_1a8 = *(undefined4 *)(param_2 + 0xe);
      uStack_1a4 = *(undefined4 *)((longlong)param_2 + 0x74);
      uStack_1a0 = *(undefined4 *)(param_2 + 0xf);
      uStack_19c = *(undefined4 *)((longlong)param_2 + 0x7c);
      uStack_198 = *(undefined4 *)(param_2 + 0x10);
      uStack_194 = *(undefined4 *)((longlong)param_2 + 0x84);
      uStack_190 = *(undefined4 *)(param_2 + 0x11);
      uStack_18c = *(undefined4 *)((longlong)param_2 + 0x8c);
      uStack_188 = *(undefined4 *)(param_2 + 0x12);
      uStack_184 = *(undefined4 *)((longlong)param_2 + 0x94);
      uStack_180 = *(undefined4 *)(param_2 + 0x13);
      uStack_17c = *(undefined4 *)((longlong)param_2 + 0x9c);
      uStack_178 = *(undefined4 *)(param_2 + 0x14);
      uStack_174 = *(undefined4 *)((longlong)param_2 + 0xa4);
      uStack_170 = *(undefined4 *)(param_2 + 0x15);
      uStack_16c = *(undefined4 *)((longlong)param_2 + 0xac);
      apuStack_968[1] = (undefined8 *)0x140904027;
      pdb_140d9d590(&ppppbStack_428,&uStack_1a8,&pppbStack_118);
      unaff_RBX = (byte *****)&pppbStack_6a8;
      apuStack_968[1] = (undefined8 *)0x140904044;
      pub_142e32760(unaff_RBX,&ppppbStack_428,0x1b0);
      unaff_RSI = (byte *****)(ppppbStack_50 + 0x1a);
      pppppbVar28 = (byte *****)0x1b0;
      goto code_r0x000140904058;
    case 1:
      puVar23 = &UNK_14301e778;
      goto code_r0x000140904719;
    case 2:
      pppppbVar22 = (byte *****)&UNK_14301e778;
      goto code_r0x000140904707;
    case 3:
      ppppbVar18 = (byte ****)(ulonglong)*(byte *)(param_2 + 0x4f);
      goto code_r0x000140903eed;
    case 4:
      break;
    case 5:
      if (-1 < (longlong)pppppbVar21) {
        *(char *)pppppbVar21 = *(char *)pppppbVar21 + (char)pppppbVar21;
      }
      goto code_r0x00014090406a;
    case 6:
      puVar23 = &UNK_14301e760;
      goto code_r0x000140904745;
    case 7:
      goto code_r0x00014090470d;
    case 8:
      pcVar19 = (char *)CONCAT71((int7)((ulonglong)pppppbVar21 >> 8),1);
      *pcVar19 = *pcVar19 + '\x01';
      goto code_r0x000140904124;
    case 9:
      *(uint *)(&UNK_14301e951 + uVar20) = *(uint *)(&UNK_14301e951 + uVar20) | 0x4ce0ffc8;
      param_2 = (byte *****)(ulonglong)((int)param_2 + 0xd0);
      break;
    case 10:
      puVar23 = (undefined *)0x4301e760;
code_r0x000140904745:
                    /* WARNING: Subroutine does not return */
      apuStack_968[1] = (undefined8 *)0x14090474a;
      pdb_142dc8590(puVar23);
    case 0xb:
      puVar23 = (undefined *)0x4301e778;
code_r0x000140904719:
                    /* WARNING: Subroutine does not return */
      apuStack_968[1] = (undefined8 *)0x14090471e;
      pdb_142dc8570(puVar23);
    case 0xc:
      if (0xfffffffebcfe16af < uVar20 || pppppbVar21 == (byte *****)0x0) goto code_r0x000140903fa2;
      *(int *)(unaff_RBX + 1) = *(int *)(unaff_RBX + 1) + 1;
code_r0x000140903fa7:
      apuStack_968[1] = (undefined8 *)0x140903faf;
      ppppbVar18 = (byte ****)pub_1406abab0((ulonglong)pppppbVar25,(ulonglong)unaff_RBX);
      if (ppppbVar18 == (byte ****)0x0) {
        apuStack_968[1] = (undefined8 *)0x140904786;
        pdb_142dc7e2a(8,pppppbVar25);
        goto code_r0x000140904799;
      }
      pppppbVar22 = (byte *****)param_2[0x2e];
      goto code_r0x000140904202;
    case 0xd:
      pcVar5 = (code *)swi(3);
      pppppbVar22 = (byte *****)(*pcVar5)();
      return pppppbVar22;
    case 0xe:
      goto code_r0x000140905491;
    case 0xf:
      pppppbVar22 = (byte *****)CONCAT71(0x14301e9,cStack_8c9 + 'P');
      ppuVar26 = apuStack_968 + 1;
      cVar14 = '\x10';
      puVar3 = puVar27;
      do {
        puVar3 = puVar3 + -1;
        ppuVar26 = ppuVar26 + -1;
        *ppuVar26 = (undefined8 *)*puVar3;
        cVar14 = cVar14 + -1;
        apuStack_968[1] = puVar27;
      } while ('\0' < cVar14);
      goto code_r0x00014090543d;
    case 0x10:
      if ((POPCOUNT((ulonglong)pppppbVar21 & 0xff) & 1U) == 0) {
        param_2 = (byte *****)&pppbStack_938;
        apuStack_968[1] = (undefined8 *)0x14090540c;
        ppppbVar18 = (byte ****)pdb_1417ca2e0(uVar32,param_2,8);
        goto code_r0x00014090540a;
      }
      if (SCARRY8(uVar20,0x14301e950)) goto code_r0x000140905466;
      pppbStack_938 = (byte ***)&UNK_14301e810;
      appppbStack_928[0] = (byte ****)pppppbVar21;
      goto code_r0x000140905479;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar23 = (undefined *)(ulonglong)*(byte *)(param_2 + 0x3d);
code_r0x000140903f0b:
                    /* WARNING: Could not recover jumptable at 0x000140903f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppbVar22 = (byte *****)
                  (*(code *)(&UNK_14301e974 + *(int *)(&UNK_14301e974 + (longlong)puVar23 * 4)))();
    return pppppbVar22;
  case 1:
    pppppbVar22 = (byte *****)&UNK_14301e728;
    goto code_r0x0001409046fa;
  case 2:
                    /* WARNING: Subroutine does not return */
    apuStack_968[1] = (undefined8 *)0x1409046f3;
    pdb_142dc8590(&UNK_14301e728);
  case 3:
    ppppbVar18 = (byte ****)(ulonglong)*(byte *)(param_2 + 0x18);
  case 4:
                    /* WARNING: Could not recover jumptable at 0x000140903df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppbVar22 = (byte *****)
                  (*(code *)(&UNK_14301e950 + *(int *)(&UNK_14301e950 + (longlong)ppppbVar18 * 4)))
                            ();
    return pppppbVar22;
  case 5:
code_r0x000140904707:
                    /* WARNING: Subroutine does not return */
    apuStack_968[1] = (undefined8 *)0x14090470c;
    pdb_142dc8590(pppppbVar22);
  case 6:
    param_4 = (ulonglong)(byte)((char)param_4 + (&UNK_14301e8cd)[lVar17]);
code_r0x0001409046fa:
                    /* WARNING: Subroutine does not return */
    apuStack_968[1] = (undefined8 *)0x1409046ff;
    pdb_142dc8570(pppppbVar22,param_2,param_3,param_4);
  case 7:
code_r0x000140903ecf:
                    /* WARNING: Could not emulate address calculation at 0x000140903ed6 */
                    /* WARNING: Treating indirect jump as call */
    pppppbVar22 = (byte *****)
                  (*(code *)(&UNK_14301e974 + *(int *)(&UNK_14301e974 + (longlong)ppppbVar18 * 4)))
                            ();
    return pppppbVar22;
  case 9:
    *(char *)ppppbVar18 = *(char *)ppppbVar18 + cVar14;
    pppppbVar28 = param_3;
code_r0x000140904058:
    param_2 = (byte *****)ppppbStack_50;
    apuStack_968[1] = (undefined8 *)0x140904063;
    pub_142e32760(unaff_RSI);
    pppppbVar21 = (byte *****)(ulonglong)*(byte *)(param_2 + 0x4f);
code_r0x00014090406a:
    pppppbVar22 = (byte *****)&UNK_14301e964;
    iVar1 = *(int *)(&UNK_14301e964 + (longlong)pppppbVar21 * 4);
    puVar23 = &UNK_14301e964 + iVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(puVar23) {
    case (undefined *)0x140903f0b:
      goto code_r0x000140903f0b;
    case (undefined *)0x140903fb4:
      *(undefined4 *)param_2 = *(undefined4 *)param_2;
      (&UNK_14301e8ef)[iVar1] = (&UNK_14301e8ef)[iVar1] + 'd';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined *)0x14090407a:
      ppppbVar18 = unaff_RSI[9];
      param_2[0x30] = unaff_RSI[8];
      param_2[0x31] = ppppbVar18;
      ppppbVar18 = *unaff_RSI;
      ppppbVar29 = unaff_RSI[1];
      ppppbVar24 = unaff_RSI[2];
      ppppbVar2 = unaff_RSI[3];
      uVar32 = *(undefined4 *)(unaff_RSI + 4);
      uVar6 = *(undefined4 *)((longlong)unaff_RSI + 0x24);
      uVar7 = *(undefined4 *)(unaff_RSI + 5);
      uVar8 = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
      uVar9 = *(undefined4 *)((longlong)unaff_RSI + 0x34);
      uVar10 = *(undefined4 *)(unaff_RSI + 7);
      uVar11 = *(undefined4 *)((longlong)unaff_RSI + 0x3c);
      *(undefined4 *)(param_2 + 0x2e) = *(undefined4 *)(unaff_RSI + 6);
      *(undefined4 *)((longlong)param_2 + 0x174) = uVar9;
      *(undefined4 *)(param_2 + 0x2f) = uVar10;
      *(undefined4 *)((longlong)param_2 + 0x17c) = uVar11;
      *(undefined4 *)(param_2 + 0x2c) = uVar32;
      *(undefined4 *)((longlong)param_2 + 0x164) = uVar6;
      *(undefined4 *)(param_2 + 0x2d) = uVar7;
      *(undefined4 *)((longlong)param_2 + 0x16c) = uVar8;
      param_2[0x2a] = ppppbVar24;
      param_2[0x2b] = ppppbVar2;
      param_2[0x28] = ppppbVar18;
      param_2[0x29] = ppppbVar29;
      *(undefined4 *)(param_2 + 0x32) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)((longlong)param_2 + 0x194) = *(undefined4 *)((longlong)param_2 + 0x124);
      *(undefined4 *)(param_2 + 0x33) = *(undefined4 *)(param_2 + 0x25);
      *(undefined4 *)((longlong)param_2 + 0x19c) = *(undefined4 *)((longlong)param_2 + 300);
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x26);
      *(undefined4 *)((longlong)param_2 + 0x1a4) = *(undefined4 *)((longlong)param_2 + 0x134);
      *(undefined4 *)(param_2 + 0x35) = *(undefined4 *)(param_2 + 0x27);
      *(undefined4 *)((longlong)param_2 + 0x1ac) = *(undefined4 *)((longlong)param_2 + 0x13c);
      pppbStack_938 = (byte ***)param_2[0x31];
      apuStack_968[1] = (undefined8 *)0x140904100;
      ppppbStack_58 = (byte ****)unaff_RSI;
      pdb_140d9d190(&ppppbStack_428,param_2 + 0x28,param_2 + 0x32,param_2[0x30]);
      pppppbVar25 = (byte *****)&uStack_4f8;
      apuStack_968[1] = (undefined8 *)0x14090411d;
      pub_142e32760(pppppbVar25,&ppppbStack_428,200);
      param_2 = (byte *****)ppppbStack_50;
      goto code_r0x000140904124;
    case (undefined *)0x14090413b:
      ppppbStack_58 = (byte ****)unaff_RSI;
      goto code_r0x000140904142;
    case (undefined *)0x140904721:
      pppppbVar22 = (byte *****)&UNK_14301e7a8;
      ppppbStack_58 = (byte ****)unaff_RSI;
      goto code_r0x00014090472f;
    case (undefined *)0x140904727:
      (&UNK_14301e8f1)[iVar1] = (&UNK_14301e8f1)[iVar1] + 'd';
      goto code_r0x00014090472f;
    case (undefined *)0x14090474d:
      pppppbVar22 = (byte *****)&UNK_14301e7a8;
      ppppbStack_58 = (byte ****)unaff_RSI;
      break;
    case (undefined *)0x140904753:
      (&UNK_14301e8f1)[iVar1] = (&UNK_14301e8f1)[iVar1] + 'd';
      break;
    case (undefined *)0x14090542e:
      iStack_8a7 = iStack_8a7 + 1;
      pppppbVar25 = pppppbVar22;
      param_2 = unaff_RBX;
      goto code_r0x000140905424;
    case (undefined *)0x140905448:
      goto code_r0x000140905448;
    case (undefined *)0x140905476:
code_r0x000140905479:
      param_2 = (byte *****)&UNK_14301e830;
      goto code_r0x000140905480;
    case (undefined *)0x1409054a4:
      apuStack_968[1] = (undefined8 *)0x1409054be;
      pppppbVar22 = (byte *****)pdb_140f66090(&UNK_14301e964,&UNK_14301e858,5,appppbStack_928);
      return pppppbVar22;
    case (undefined *)0x14301e964:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    apuStack_968[1] = (undefined8 *)0x140904760;
    pdb_142dc8570(pppppbVar22);
  case 10:
    pppppbVar22 = (byte *****)0x4301e7a8;
  case 0xe:
code_r0x00014090472f:
                    /* WARNING: Subroutine does not return */
    apuStack_968[1] = (undefined8 *)0x140904734;
    pdb_142dc8590(pppppbVar22);
  case 0xb:
code_r0x00014090470d:
code_r0x000140904799:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  case 0xc:
    out(0x52,cVar14);
    puVar27 = (undefined8 *)0x888;
    pppppbVar25 = unaff_RBX;
code_r0x000140904124:
    apuStack_968[1] = (undefined8 *)0x140904139;
    pub_142e32760(param_2 + 0x36,pppppbVar25,200);
code_r0x000140904142:
    puVar27[0x10f] = param_2 + 0x36;
    apuStack_968[1] = (undefined8 *)0x140904158;
    uVar20 = pdb_1408fdd40();
    if (uVar20 != 2) {
      lVar17 = puVar27[0x111];
      if (*(char *)(lVar17 + 0x208) == '\x04') {
        puVar27[0x10f] = *(undefined8 *)(lVar17 + 0x210);
        puVar3 = *(undefined8 **)(lVar17 + 0x218);
        puVar27[0x10e] = puVar3;
        pcVar5 = (code *)*puVar3;
        if (pcVar5 != (code *)0x0) {
          apuStack_968[1] = (undefined8 *)0x140904413;
          (*pcVar5)(puVar27[0x10f]);
        }
        arg1 = *(ulonglong *)(puVar27[0x10e] + 8);
        if (arg1 != 0) {
          apuStack_968[1] = (undefined8 *)0x140904434;
          pub_1406abac0((byte *)puVar27[0x10f],arg1,*(ulonglong *)(puVar27[0x10e] + 0x10));
        }
        plVar4 = *(longlong **)(puVar27[0x111] + 0x1e0);
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          apuStack_968[1] = (undefined8 *)0x14090445b;
          pdb_141746810(puVar27[0x111] + 0x1e0);
        }
      }
      else if ((((*(char *)(lVar17 + 0x208) == '\x03') &&
                (*(char *)(puVar27[0x111] + 0x270) == '\x03')) &&
               (*(char *)(puVar27[0x111] + 0x268) == '\x03')) &&
              (*(char *)(puVar27[0x111] + 0x261) == '\x03')) {
        apuStack_968[1] = (undefined8 *)0x1409041e9;
        pdb_1400d68e0(puVar27[0x111] + 0x240);
        *(undefined1 *)(puVar27[0x111] + 0x260) = 0;
      }
      if ((uVar20 & 1) == 0) {
        puVar27[0x10b] = param_3;
        if (*(byte *)(param_3 + 5) == 2) {
          pppbStack_938 = (byte ***)param_3[4];
          apuStack_968[1] = (undefined8 *)0x14090453a;
          pdb_1417d7ad0(puVar27 + 0x96,*(undefined8 *)(puVar27[0x111] + 0x180),
                        *(undefined8 *)(puVar27[0x111] + 0x188),param_3[3]);
        }
        else {
          lVar17 = puVar27[0x111];
          pppbStack_938 = (byte ***)param_3[3];
          uStack_930 = *(undefined4 *)(param_3 + 4);
          uStack_92c = *(undefined4 *)((longlong)param_3 + 0x24);
          apuStack_968[1] = (undefined8 *)0x14090456e;
          pdb_1417d8230(puVar27 + 0x96,*(undefined8 *)(lVar17 + 0x180),
                        *(undefined8 *)(lVar17 + 0x188),lVar17 + 0x160);
        }
        pppbVar31 = (byte ***)puVar27[0x96];
        param_3 = (byte *****)puVar27[0x97];
        if (SBORROW8(0,(longlong)pppbVar31)) {
          plVar4 = (longlong *)puVar27[0x10b];
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            apuStack_968[1] = (undefined8 *)0x1409045a2;
            pdb_140cd0de0(puVar27 + 0x10b);
          }
          goto code_r0x000140904466;
        }
        *(undefined4 *)(puVar27 + 0x108) = *(undefined4 *)(puVar27 + 0x9a);
        *(undefined4 *)((longlong)puVar27 + 0x844) = *(undefined4 *)((longlong)puVar27 + 0x4d4);
        *(undefined4 *)(puVar27 + 0x109) = *(undefined4 *)(puVar27 + 0x9b);
        *(undefined4 *)((longlong)puVar27 + 0x84c) = *(undefined4 *)((longlong)puVar27 + 0x4dc);
        *(undefined4 *)(puVar27 + 0x106) = *(undefined4 *)(puVar27 + 0x98);
        *(undefined4 *)((longlong)puVar27 + 0x834) = *(undefined4 *)((longlong)puVar27 + 0x4c4);
        *(undefined4 *)(puVar27 + 0x107) = *(undefined4 *)(puVar27 + 0x99);
        *(undefined4 *)((longlong)puVar27 + 0x83c) = *(undefined4 *)((longlong)puVar27 + 0x4cc);
        plVar4 = (longlong *)puVar27[0x10b];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          apuStack_968[1] = (undefined8 *)0x1409045dd;
          pdb_140cd0de0(puVar27 + 0x10b);
        }
        apuStack_968[1] = (undefined8 *)0x1409045f1;
        pdb_14098a860(puVar27[0x111] + 400);
        lVar17 = puVar27[0x111];
        if (*(ulonglong *)(lVar17 + 0x178) != 0) {
          apuStack_968[1] = (undefined8 *)0x140904617;
          pub_1406abac0(*(byte **)(lVar17 + 0x180),*(ulonglong *)(lVar17 + 0x178),1);
        }
        ppppbVar29 = *(byte *****)(lVar17 + 0x140);
        uVar30 = puVar27[0x110];
      }
      else {
code_r0x000140904466:
        apuStack_968[1] = (undefined8 *)0x140904479;
        pdb_14098a860(puVar27[0x111] + 400);
        lVar17 = puVar27[0x111];
        if (*(ulonglong *)(lVar17 + 0x178) != 0) {
          apuStack_968[1] = (undefined8 *)0x14090449f;
          pub_1406abac0(*(byte **)(lVar17 + 0x180),*(ulonglong *)(lVar17 + 0x178),1);
        }
        ppppbVar29 = *(byte *****)(lVar17 + 0x140);
        pppbVar31 = (byte ***)0x8000000000000000;
        uVar30 = puVar27[0x110];
      }
      if (0 < (longlong)ppppbVar29) {
        apuStack_968[1] = (undefined8 *)0x1409044ce;
        pub_1406abac0(*(byte **)(lVar17 + 0x148),(ulonglong)ppppbVar29,1);
      }
      *(undefined4 *)(puVar27 + 0x102) = *(undefined4 *)(puVar27 + 0x108);
      *(undefined4 *)((longlong)puVar27 + 0x814) = *(undefined4 *)((longlong)puVar27 + 0x844);
      *(undefined4 *)(puVar27 + 0x103) = *(undefined4 *)(puVar27 + 0x109);
      *(undefined4 *)((longlong)puVar27 + 0x81c) = *(undefined4 *)((longlong)puVar27 + 0x84c);
      *(undefined4 *)(puVar27 + 0x100) = *(undefined4 *)(puVar27 + 0x106);
      *(undefined4 *)((longlong)puVar27 + 0x804) = *(undefined4 *)((longlong)puVar27 + 0x834);
      *(undefined4 *)(puVar27 + 0x101) = *(undefined4 *)(puVar27 + 0x107);
      *(undefined4 *)((longlong)puVar27 + 0x80c) = *(undefined4 *)((longlong)puVar27 + 0x83c);
      *(undefined1 *)(lVar17 + 0x278) = 1;
      apuStack_968[1] = (undefined8 *)0x1409044f9;
      pdb_140902140(uVar30);
      goto code_r0x00014090479b;
    }
    ppppbStack_50 = (byte ****)puVar27[0x111];
    *(byte *)(ppppbStack_50 + 0x4f) = 3;
    bVar15 = 3;
    ppppbStack_b8 = (byte ****)param_1;
    goto code_r0x000140904a97;
  case 0xd:
    if (-1 < (longlong)ppppbVar18) {
      *(char *)ppppbVar18 = *(char *)ppppbVar18 + cVar14;
    }
  case 8:
code_r0x000140903eed:
                    /* WARNING: Could not emulate address calculation at 0x000140903ef4 */
                    /* WARNING: Treating indirect jump as call */
    pppppbVar22 = (byte *****)
                  (*(code *)(&UNK_14301e964 + *(int *)(&UNK_14301e964 + (longlong)ppppbVar18 * 4)))
                            ();
    return pppppbVar22;
  case 0xf:
    if (SCARRY8(lVar17,0x14301e940)) goto code_r0x000140904707;
    pcVar19 = (char *)(lVar17 + 0x18b01e941);
    *pcVar19 = *pcVar19 + -0x3f;
    puVar23 = &UNK_14301e93f;
    if (*pcVar19 == '\0') {
      *(int *)(&UNK_14301eae8 + lVar17) = (int)ppppbVar18;
    }
    break;
  case 0x10:
    if (ppppbVar18 != (byte ****)0x0) {
      pppppbVar25 = (byte *****)((longlong)unaff_RSI << 4);
      apuStack_968[1] = (undefined8 *)0x140903fa2;
      pdb_14007ee60();
code_r0x000140903fa2:
      unaff_RBX = (byte *****)0x8;
      goto code_r0x000140903fa7;
    }
    ppppbVar18 = (byte ****)0x8;
code_r0x000140904202:
    ppppbStack_58 = (byte ****)(param_2 + 0x2f);
    param_2[0x2f] = (byte ****)unaff_RSI;
    param_2[0x30] = ppppbVar18;
    param_2[0x31] = (byte ****)0x0;
    *(byte *)((longlong)param_2 + 0x1ea) = 1;
    ppppbVar18 = pppppbVar22[4];
    ppppbVar24 = ppppbVar18 + (longlong)pppppbVar22[5] * 10;
    ppppbVar29 = (byte ****)0x0;
    for (; ppppbVar18 != ppppbVar24; ppppbVar18 = ppppbVar18 + 10) {
      apuStack_968[1] = (undefined8 *)0x1409042a5;
      pdb_140f60be0(&uStack_80,ppppbVar18 + 7);
      if (SBORROW8(0,(longlong)*ppppbVar18)) {
        uStack_418 = (byte *****)ppppbVar18[2];
        uStack_410 = (byte ****)ppppbVar18[3];
        pppppbVar22 = (byte *****)0x8000000000000000;
      }
      else {
        pppppbVar22 = (byte *****)ppppbVar18[2];
        if ((longlong)pppppbVar22 < 0) {
          uVar30 = 0;
code_r0x0001409043d5:
          apuStack_968[1] = (undefined8 *)0x1409043e0;
          pdb_142dc7e2a(uVar30,pppppbVar22);
          goto code_r0x000140904799;
        }
        if (pppppbVar22 == (byte *****)0x0) {
          param_1 = (byte *****)0x1;
          uStack_418 = (byte *****)0x0;
        }
        else {
          pppbVar31 = ppppbVar18[1];
          apuStack_968[1] = (undefined8 *)0x1409042eb;
          pdb_14007ee60();
          uVar30 = 1;
          apuStack_968[1] = (undefined8 *)0x1409042fe;
          param_1 = (byte *****)pub_1406abab0((ulonglong)pppppbVar22,1);
          if (param_1 == (byte *****)0x0) goto code_r0x0001409043d5;
          apuStack_968[1] = (undefined8 *)0x140904318;
          pub_142e32760(param_1,pppbVar31,pppppbVar22);
          uStack_418 = pppppbVar22;
        }
        uStack_410 = (byte ****)
                     CONCAT71((int7)((ulonglong)pppbStack_68 >> 8),*(undefined1 *)(ppppbVar18 + 3));
        pppbStack_68 = (byte ***)uStack_410;
      }
      ppbStack_3f8 = (byte **)ppppbVar18[6];
      uStack_408 = ppppbVar18[4];
      ppbStack_400 = (byte **)ppppbVar18[5];
      uStack_3e0 = uStack_70;
      uStack_3f0 = uStack_80;
      uStack_3ec = uStack_7c;
      uStack_3e8 = uStack_78;
      uStack_3e4 = uStack_74;
      pppppbVar25 = &ppppbStack_428;
      apuStack_968[1] = (undefined8 *)0x140904390;
      ppppbStack_428 = (byte ****)pppppbVar22;
      ppppbStack_420 = (byte ****)param_1;
      param_1 = (byte *****)pdb_141710980(param_2 + 0x2a);
      ppppbVar29 = (byte ****)ppppbStack_50[0x31];
      ppppbStack_428 = (byte ****)param_1;
      ppppbStack_420 = (byte ****)pppppbVar25;
      if (ppppbVar29 == (byte ****)ppppbStack_50[0x2f]) {
        apuStack_968[1] = (undefined8 *)0x1409043cc;
        pdb_142d7e980(ppppbStack_58);
      }
      ppppbVar2 = (byte ****)ppppbStack_50[0x30];
      ppppbVar2[(longlong)ppppbVar29 * 2] = (byte ***)param_1;
      ppppbVar2[(longlong)ppppbVar29 * 2 + 1] = (byte ***)pppppbVar25;
      ppppbVar29 = (byte ****)((longlong)ppppbVar29 + 1);
      ppppbStack_50[0x31] = (byte ***)ppppbVar29;
    }
    if (ppppbVar29 == (byte ****)0x0) {
      ppppbVar18 = (byte ****)0x8;
      ppppbVar24 = (byte ****)0x0;
    }
    else {
      apuStack_968[1] = (undefined8 *)0x140904645;
      pdb_14007ee60();
      apuStack_968[1] = (undefined8 *)0x140904652;
      ppppbVar18 = (byte ****)pub_1406abab0((longlong)ppppbVar29 * 8,8);
      if (ppppbVar18 == (byte ****)0x0) {
        apuStack_968[1] = (undefined8 *)0x140904796;
        pdb_142dc7e2a(8,(longlong)ppppbVar29 * 8);
        goto code_r0x000140904799;
      }
      ppppbVar24 = (byte ****)ppppbStack_50[0x31];
    }
    ppppbStack_50[0x32] = (byte ***)ppppbVar29;
    ppppbStack_50[0x33] = (byte ***)ppppbVar18;
    ppppbStack_50[0x34] = (byte ***)0x0;
    ((byte *)((longlong)ppppbStack_50 + 0x1e9))[0] = 1;
    ((byte *)((longlong)ppppbStack_50 + 0x1e9))[1] = 0;
    param_2 = (byte *****)ppppbStack_50[0x2f];
    ppppbVar18 = (byte ****)ppppbStack_50[0x30];
    puVar23 = (undefined *)((longlong)ppppbVar24 << 4);
    param_3 = (byte *****)ppppbStack_50;
    break;
  case 0x11:
code_r0x00014090540a:
    uVar16 = in((short)param_2);
    pppppbVar25 = (byte *****)CONCAT71((int7)((ulonglong)ppppbVar18 >> 8),uVar16);
    pppppbVar22 = pppppbVar25 + 0x5189069;
    *(char *)pppppbVar22 = *(char *)pppppbVar22 + (char)param_2;
    return pppppbVar25;
  case 0x12:
code_r0x000140905480:
    apuStack_968[1] = (undefined8 *)0x140905490;
    pppppbVar21 = (byte *****)pdb_140f66090(pppppbVar22,param_2,7,appppbStack_928);
code_r0x000140905491:
    return pppppbVar21;
  case 0x13:
code_r0x000140905424:
    pppppbVar22 = param_2;
    param_4 = 0;
    if (1 < (ulonglong)*(byte *)((longlong)pppppbVar25 + 0x22)) {
      param_4 = (ulonglong)*(byte *)((longlong)pppppbVar25 + 0x22) - 1;
    }
code_r0x00014090543d:
    unaff_RBX = (byte *****)&UNK_14301e984;
    pppppbVar28 = (byte *****)(longlong)*(int *)(&UNK_14301e984 + param_4 * 4);
code_r0x000140905448:
                    /* WARNING: Could not recover jumptable at 0x00014090544b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppbVar22 = (byte *****)(*(code *)((longlong)pppppbVar28 + (longlong)unaff_RBX))(pppppbVar22);
    return pppppbVar22;
  case 0x14:
    (&UNK_14301e8cd)[lVar17] = (&UNK_14301e8cd)[lVar17] ^ 0x40;
    pppbStack_938 = (byte ***)(ulonglong)((int)ppppbVar18 + 0x2719366);
code_r0x000140905466:
    apuStack_968[1] = (undefined8 *)0x1409054ec;
    pppppbVar22 = (byte *****)pdb_140f66090();
    return pppppbVar22;
  default:
    *(double *)((longlong)unaff_RBX + -0x72) = (double)in_ST0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  ppppbVar29 = (byte ****)((longlong)ppppbVar18 + (longlong)puVar23);
  param_3[0x35] = ppppbVar18;
  param_3[0x36] = ppppbVar18;
  param_3[0x37] = (byte ****)param_2;
  param_3[0x38] = ppppbVar29;
  while (ppppbVar18 != ppppbVar29) {
    param_3[0x36] = ppppbVar18 + 2;
    ppppbVar29 = (byte ****)*ppppbVar18;
    ppppbVar18 = (byte ****)ppppbVar18[1];
    param_3[0x39] = ppppbVar29;
    param_3[0x3a] = ppppbVar18;
    param_3[0x3b] = ppppbVar29;
    param_3[0x3c] = ppppbVar18;
    apuStack_968[1] = (undefined8 *)0x1409048b3;
    (*(code *)ppppbVar18[3])(&ppppbStack_428,ppppbVar29,uStack_b0);
    pppppbVar22 = uStack_418;
    ppppbVar18 = ppppbStack_420;
    if ((int)ppppbStack_428 == 1) {
      *(byte *)(ppppbStack_50 + 0x3d) = 3;
      goto code_r0x000140904a95;
    }
    uStack_128 = (undefined4)uStack_410;
    uStack_124 = uStack_410._4_4_;
    uStack_120 = (undefined4)uStack_408;
    uStack_11c = uStack_408._4_4_;
    ppppbStack_58 = (byte ****)ppppbStack_50[0x3b];
    pppbStack_68 = ppppbStack_50[0x3c];
    if ((byte ***)*pppbStack_68 != (byte ***)0x0) {
      apuStack_968[1] = (undefined8 *)0x140904911;
      (*(code *)*pppbStack_68)(ppppbStack_58);
    }
    ppppbVar29 = (byte ****)pppbStack_68[1];
    if (ppppbVar29 != (byte ****)0x0) {
      apuStack_968[1] = (undefined8 *)0x140904932;
      pub_1406abac0((byte *)ppppbStack_58,(ulonglong)ppppbVar29,(ulonglong)pppbStack_68[2]);
    }
    param_3 = (byte *****)ppppbStack_50;
    if ((byte *****)ppppbVar18 != (byte *****)0x0) {
      uStack_418 = (byte *****)CONCAT44(uStack_124,uStack_128);
      uStack_410 = (byte ****)CONCAT44(uStack_11c,uStack_120);
      ppppbStack_428 = ppppbVar18;
      ppppbStack_420 = (byte ****)pppppbVar22;
      apuStack_968[1] = (undefined8 *)0x140904aeb;
      param_3 = (byte *****)pdb_142deada0(&ppppbStack_428);
      apuStack_968[1] = (undefined8 *)0x140904b02;
      pdb_1404ada40(ppppbStack_50 + 0x35);
      apuStack_968[1] = (undefined8 *)0x140904b16;
      pdb_140969180(ppppbStack_50 + 0x32);
      ((byte *)((longlong)ppppbStack_50 + 0x1e9))[0] = 0;
      ((byte *)((longlong)ppppbStack_50 + 0x1e9))[1] = 0;
      apuStack_968[1] = (undefined8 *)0x140904b33;
      pdb_14098a860(ppppbStack_50 + 0x2a);
      apuStack_968[1] = (undefined8 *)0x140904b47;
      pdb_14098ce10(ppppbStack_50 + 0x24);
      uStack_a8 = CONCAT44(uStack_4e4,uStack_4e8);
      uStack_a0 = CONCAT44(uStack_4dc,uStack_4e0);
      uStack_98 = uStack_4d8;
      uStack_90 = uStack_4d0;
      *(byte *)(ppppbStack_50 + 0x3d) = 1;
      pppbVar31 = (byte ***)0x8000000000000000;
      goto code_r0x000140904b7c;
    }
    ppppbStack_58 = (byte ****)pppppbVar22;
    ppppbStack_428 = (byte ****)pppppbVar22;
    ppppbVar18 = (byte ****)ppppbStack_50[0x34];
    if (ppppbVar18 == (byte ****)ppppbStack_50[0x32]) {
      apuStack_968[1] = (undefined8 *)0x14090496c;
      pdb_142d7e8a0(ppppbStack_50 + 0x32);
    }
    param_3[0x33][(longlong)ppppbVar18] = (byte ***)ppppbStack_58;
    param_3[0x34] = (byte ****)((longlong)ppppbVar18 + 1);
    ppppbVar29 = param_3[0x38];
    ppppbVar18 = param_3[0x36];
  }
  param_3[0x39] = (byte ****)0x0;
  apuStack_968[1] = (undefined8 *)0x1409049c4;
  pdb_1404ada40(param_3 + 0x35);
  ppppbVar29 = (byte ****)ppppbStack_50[0x2e];
  *(byte *)((longlong)ppppbStack_50 + 0x1e9) = 0;
  uStack_418 = (byte *****)ppppbStack_50[0x34];
  ppppbStack_428 = (byte ****)ppppbStack_50[0x32];
  ppppbStack_420 = (byte ****)ppppbStack_50[0x33];
  apuStack_968[1] = (undefined8 *)0x140904a09;
  pdb_1417db610(&uStack_4f8,ppppbVar29,&ppppbStack_428);
  ((byte *)((longlong)ppppbStack_50 + 0x1e9))[0] = 0;
  ((byte *)((longlong)ppppbStack_50 + 0x1e9))[1] = 0;
  apuStack_968[1] = (undefined8 *)0x140904a26;
  pdb_14098a860(ppppbStack_50 + 0x2a);
  apuStack_968[1] = (undefined8 *)0x140904a3a;
  pdb_14098ce10(ppppbStack_50 + 0x24);
  pppbVar31 = (byte ***)CONCAT44(uStack_4f4,uStack_4f8);
  param_3 = (byte *****)CONCAT44(uStack_4ec,uStack_4f0);
  uStack_a8 = CONCAT44(uStack_4e4,uStack_4e8);
  uStack_a0 = CONCAT44(uStack_4dc,uStack_4e0);
  uStack_98 = uStack_4d8;
  uStack_90 = uStack_4d0;
  *(byte *)(ppppbStack_50 + 0x3d) = 1;
  if (pppbVar31 == (byte ***)0x8000000000000001) {
code_r0x000140904a95:
    bVar15 = 4;
code_r0x000140904a97:
    *(byte *)(ppppbStack_50 + 0x18) = bVar15;
    *ppppbStack_b8 = (byte ***)0x2;
    bVar15 = 3;
  }
  else {
code_r0x000140904b7c:
    uStack_c8 = (undefined4)uStack_98;
    uStack_c4 = uStack_98._4_4_;
    uStack_c0 = (undefined4)uStack_90;
    uStack_bc = uStack_90._4_4_;
    uStack_d8 = (undefined4)uStack_a8;
    uStack_d4 = uStack_a8._4_4_;
    uStack_d0 = (undefined4)uStack_a0;
    uStack_cc = uStack_a0._4_4_;
    apuStack_968[1] = (undefined8 *)0x140904ba4;
    pdb_140901e70(uStack_60);
    param_1 = (byte *****)ppppbStack_b8;
code_r0x00014090479b:
    *(undefined4 *)(puVar27 + 0xfe) = *(undefined4 *)(puVar27 + 0x102);
    *(undefined4 *)((longlong)puVar27 + 0x7f4) = *(undefined4 *)((longlong)puVar27 + 0x814);
    *(undefined4 *)(puVar27 + 0xff) = *(undefined4 *)(puVar27 + 0x103);
    *(undefined4 *)((longlong)puVar27 + 0x7fc) = *(undefined4 *)((longlong)puVar27 + 0x81c);
    *(undefined4 *)(puVar27 + 0xfc) = *(undefined4 *)(puVar27 + 0x100);
    *(undefined4 *)((longlong)puVar27 + 0x7e4) = *(undefined4 *)((longlong)puVar27 + 0x804);
    *(undefined4 *)(puVar27 + 0xfd) = *(undefined4 *)(puVar27 + 0x101);
    *(undefined4 *)((longlong)puVar27 + 0x7ec) = *(undefined4 *)((longlong)puVar27 + 0x80c);
    pppppbVar22 = (byte *****)puVar27[0x111];
    *(byte *)(pppppbVar22 + 0x18) = 1;
    if (SBORROW8(0,(longlong)pppbVar31)) {
      apuStack_968[1] = (undefined8 *)0x1409047d5;
      ppppbVar18 = (byte ****)pdb_142dc6590(param_3);
      ppppbVar24 = (byte ****)0x1;
      pppppbVar22 = (byte *****)puVar27[0x111];
    }
    else {
      apuStack_968[1] = (undefined8 *)0x1409047e9;
      pdb_14007ee60();
      apuStack_968[1] = (undefined8 *)0x1409047f8;
      ppppbVar18 = (byte ****)pub_1406abab0(0x40,8);
      if (ppppbVar18 == (byte ****)0x0) {
        puVar27[0x110] = pppbVar31;
        puVar27[0x10f] = param_3;
                    /* WARNING: Subroutine does not return */
        apuStack_968[1] = (undefined8 *)0x140904862;
        pdb_142dc7e11(8,0x40);
      }
      *ppppbVar18 = (byte ***)0x1;
      ppppbVar18[1] = (byte ***)0x1;
      ppppbVar18[2] = pppbVar31;
      ppppbVar18[3] = (byte ***)param_3;
      pppbVar31 = (byte ***)puVar27[0xfd];
      pppbVar12 = (byte ***)puVar27[0xfe];
      pppbVar13 = (byte ***)puVar27[0xff];
      ppppbVar18[4] = (byte ***)puVar27[0xfc];
      ppppbVar18[5] = pppbVar31;
      ppppbVar18[6] = pppbVar12;
      ppppbVar18[7] = pppbVar13;
      ppppbVar29 = (byte ****)&UNK_14301e740;
      ppppbVar24 = (byte ****)0x0;
    }
    *param_1 = ppppbVar24;
    param_1[1] = ppppbVar18;
    param_1[2] = ppppbVar29;
    bVar15 = 1;
    ppppbStack_50 = (byte ****)pppppbVar22;
    ppppbStack_b8 = (byte ****)param_1;
  }
  *(byte *)(ppppbStack_50 + 0x5e) = bVar15;
  return (byte *****)ppppbStack_b8;
}

