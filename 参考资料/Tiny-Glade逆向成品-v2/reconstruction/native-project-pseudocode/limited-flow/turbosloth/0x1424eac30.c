// VA 0x1424eac30, PDB extent 5313 bytes
// turbosloth::asset::impl$24::run::async_block$0<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::BakeClutterIcon>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001424ec7b6) overlaps instruction at (ram,0x0001424ec7b3)
    */
/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::BakeClutterIcon>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 5313 */

undefined8 *
pdb_1424eac30(undefined8 *param_1,byte ******param_2,byte ******param_3,byte ******param_4)

{
  char *pcVar1;
  byte ****ppppbVar2;
  byte *****pppppbVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *****pppppbVar9;
  byte *****pppppbVar10;
  byte bVar11;
  undefined *puVar12;
  byte ******ppppppbVar13;
  byte *pbVar14;
  byte ******ppppppbVar15;
  byte *****pppppbVar16;
  undefined8 *puVar17;
  longlong lVar18;
  byte ******ppppppbVar19;
  undefined *puVar20;
  undefined8 uVar21;
  byte ******ppppppbVar22;
  ulonglong uVar23;
  byte ******unaff_RBX;
  byte ******ppppppbVar24;
  bool bVar25;
  undefined4 auStack_318 [2];
  uint uStack_310;
  undefined1 uStack_308;
  undefined1 uStack_2f8;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  byte *****pppppbStack_2d8;
  byte *****pppppbStack_2d0;
  byte *****pppppbStack_2c8;
  byte *****pppppbStack_2c0;
  byte *****pppppbStack_2b8;
  byte *****pppppbStack_2b0;
  byte *****pppppbStack_2a8;
  ulonglong uStack_2a0;
  byte *****pppppbStack_298;
  byte *****pppppbStack_290;
  byte *****pppppbStack_288;
  byte *****pppppbStack_280;
  byte *****pppppbStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  byte *****pppppbStack_238;
  byte *****pppppbStack_230;
  byte *****pppppbStack_228;
  byte *****pppppbStack_220;
  byte *****pppppbStack_218;
  byte *****pppppbStack_210;
  byte *****pppppbStack_208;
  byte *****pppppbStack_200;
  byte *****pppppbStack_1f8;
  undefined8 uStack_1f0;
  byte *****pppppbStack_1e8;
  byte *****pppppbStack_1e0;
  byte *****pppppbStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  byte *****pppppbStack_1c0;
  byte *****pppppbStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  byte *****pppppbStack_190;
  byte *****pppppbStack_188;
  byte *****pppppbStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte *****pppppbStack_158;
  byte *****pppppbStack_150;
  byte *****pppppbStack_148;
  byte *****pppppbStack_140;
  byte *****pppppbStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  byte *****pppppbStack_110;
  byte *****pppppbStack_108;
  byte *****pppppbStack_100;
  byte *****pppppbStack_f8;
  byte *****pppppbStack_f0;
  byte *****pppppbStack_e8;
  undefined8 uStack_e0;
  byte *****pppppbStack_d8;
  byte *****pppppbStack_d0;
  byte *****pppppbStack_c0;
  byte *****pppppbStack_b8;
  byte *****pppppbStack_b0;
  byte *****pppppbStack_a8;
  byte *****pppppbStack_a0;
  byte *****pppppbStack_98;
  byte *****pppppbStack_90;
  byte *****pppppbStack_88;
  byte *****pppppbStack_80;
  byte *****pppppbStack_78;
  byte *****pppppbStack_70;
  byte *****pppppbStack_68;
  byte *****pppppbStack_60;
  undefined1 uStack_51;
  byte *****pppppbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar20 = &UNK_143512ac4;
  puVar12 = &UNK_143512ac4 + *(int *)(&UNK_143512ac4 + (ulonglong)*(byte *)(param_2 + 0x26) * 4);
  bVar25 = puVar12 == (undefined *)0x0;
  pppppbStack_50 = (byte *****)param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x26)) {
  case 0:
    pppppbStack_f8 = *param_2;
    pppppbStack_f0 = param_2[1];
    pppppbStack_e8 = param_2[2];
    uStack_e0 = (byte ******)param_2[3];
    pppppbStack_d8 = param_2[4];
    pppppbStack_d0 = param_2[5];
    pppppbStack_138 = param_2[6];
    uStack_130 = (byte ******)param_2[7];
    uStack_128 = (byte ******)param_2[8];
    uStack_120 = *(undefined4 *)(param_2 + 9);
    uStack_11c = *(undefined4 *)((longlong)param_2 + 0x4c);
    pdb_140ceed80(&pppppbStack_238,&pppppbStack_f8,&pppppbStack_138);
    param_2 = (byte ******)auStack_318;
    pub_142e32760(param_2,&pppppbStack_238,0xe0);
    pppppbVar3 = pppppbStack_50;
    ppppppbVar13 = (byte ******)(pppppbStack_50 + 10);
    pub_142e32760(ppppppbVar13,param_2,0xe0);
    puVar20 = &UNK_143512ad4;
    puVar12 = &UNK_143512ad4 +
              *(int *)(&UNK_143512ad4 + (ulonglong)*(byte *)(pppppbVar3 + 0x25) * 4);
    pppppbStack_b0 = (byte *****)ppppppbVar13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(pppppbVar3 + 0x25)) {
    case 0:
      *(byte *)((longlong)pppppbVar3 + 299) = 0;
      ((byte *)((longlong)pppppbVar3 + 0x129))[0] = 1;
      ((byte *)((longlong)pppppbVar3 + 0x129))[1] = 0;
      pppppbVar3[0x14] = (byte ****)*ppppppbVar13;
      pppppbVar3[0x15] = pppppbVar3[0xb];
      pppppbVar3[0x16] = pppppbVar3[0xc];
      pppppbVar3[0x17] = pppppbVar3[0xd];
      *(undefined4 *)(pppppbVar3 + 0x18) = *(undefined4 *)(pppppbVar3 + 0xe);
      *(undefined4 *)((longlong)pppppbVar3 + 0xc4) = *(undefined4 *)((longlong)pppppbVar3 + 0x74);
      *(undefined4 *)(pppppbVar3 + 0x19) = *(undefined4 *)(pppppbVar3 + 0xf);
      *(undefined4 *)((longlong)pppppbVar3 + 0xcc) = *(undefined4 *)((longlong)pppppbVar3 + 0x7c);
      unaff_RBX = (byte ******)(pppppbVar3 + 0x1a);
      *(undefined4 *)(pppppbVar3 + 0x1a) = *(undefined4 *)(pppppbVar3 + 0x10);
      *(undefined4 *)((longlong)pppppbVar3 + 0xd4) = *(undefined4 *)((longlong)pppppbVar3 + 0x84);
      *(undefined4 *)(pppppbVar3 + 0x1b) = *(undefined4 *)(pppppbVar3 + 0x11);
      *(undefined4 *)((longlong)pppppbVar3 + 0xdc) = *(undefined4 *)((longlong)pppppbVar3 + 0x8c);
      *(undefined4 *)(pppppbVar3 + 0x1c) = *(undefined4 *)(pppppbVar3 + 0x12);
      *(undefined4 *)((longlong)pppppbVar3 + 0xe4) = *(undefined4 *)((longlong)pppppbVar3 + 0x94);
      *(undefined4 *)(pppppbVar3 + 0x1d) = *(undefined4 *)(pppppbVar3 + 0x13);
      *(undefined4 *)((longlong)pppppbVar3 + 0xec) = *(undefined4 *)((longlong)pppppbVar3 + 0x9c);
      ppppppbVar13 = (byte ******)pppppbVar3[0x14];
      lVar18 = pdb_141710600(unaff_RBX,ppppppbVar13,pppppbVar3[0x15]);
      param_2 = ppppppbVar13;
      if (lVar18 == 1) goto code_r0x0001424eadc6;
      pppppbStack_50[0x20] = (byte ****)ppppppbVar13;
      *(byte *)((longlong)pppppbStack_50 + 0x129) = 0;
      pppppbStack_e8 = (byte *****)pppppbStack_50[0x16];
      pppppbStack_f8 = (byte *****)pppppbStack_50[0x17];
      uStack_e0 = (byte ******)(pppppbStack_f8 + (longlong)pppppbStack_50[0x18] * 2);
      pppppbStack_158 = (byte *****)0x0;
      pppppbStack_d0 = (byte *****)&pppppbStack_158;
      uStack_51 = 1;
      param_2 = &pppppbStack_f8;
      pppppbStack_f0 = pppppbStack_f8;
      pppppbStack_d8 = (byte *****)unaff_RBX;
      pdb_1415e33c0(&pppppbStack_138);
      ppppppbVar13 = (byte ******)pppppbStack_158;
      if ((byte ******)pppppbStack_158 == (byte ******)0x0) {
        ppppppbVar13 = uStack_130;
        if (!SBORROW8(0,(longlong)pppppbStack_138)) {
          pppppbStack_50[0x21] = (byte ****)pppppbStack_138;
          pppppbStack_50[0x22] = (byte ****)uStack_130;
          pppppbStack_50[0x23] = (byte ****)uStack_128;
          pppppbStack_e8 = pppppbStack_50 + 0x24;
          pppppbStack_50[0x24] = (byte ****)(pppppbStack_50 + 0x21);
          pppppbStack_f8 = (byte *****)pppppbStack_50[0x20][0x15];
          pppppbStack_f0 =
               (byte *****)((longlong)pppppbStack_f8 + (longlong)pppppbStack_50[0x20][0x16] * 0x3c);
          pdb_141603de0(&pppppbStack_158,&pppppbStack_f8);
          *(byte *)((longlong)pppppbStack_50 + 299) = 1;
          ppppppbVar13 = (byte ******)pppppbStack_50[0x20][7];
          uVar23 = (longlong)ppppppbVar13 * 0xc;
          if ((byte ******)0xaaaaaaaaaaaaaaa < ppppppbVar13) {
            uVar21 = 0;
code_r0x0001424eb269:
            pdb_142dc7e2a(uVar21,uVar23);
            goto code_r0x0001424eb8d4;
          }
          ppppbVar2 = (byte ****)pppppbStack_50[0x20][6];
          if (uVar23 == 0) {
            pppppbStack_68 = (byte *****)0x4;
            pppppbStack_78 = (byte *****)0x0;
            ppppppbVar19 = (byte ******)pppppbStack_78;
          }
          else {
            pdb_14007ee60();
            uVar21 = 4;
            pppppbStack_68 = (byte *****)pub_1406abab0(uVar23,4);
            ppppppbVar19 = ppppppbVar13;
            if ((byte ******)pppppbStack_68 == (byte ******)0x0) goto code_r0x0001424eb269;
          }
          pppppbStack_78 = (byte *****)ppppppbVar19;
          ppppppbVar19 = (byte ******)pppppbStack_50;
          if (ppppppbVar13 != (byte ******)0x0) {
            pub_142e32760(pppppbStack_68,ppppbVar2,uVar23);
          }
          ppppppbVar24 = (byte ******)ppppppbVar19[0x20][0xd];
          uVar23 = (longlong)ppppppbVar24 * 0xc;
          if ((byte ******)0xaaaaaaaaaaaaaaa < ppppppbVar24) {
            uVar21 = 0;
code_r0x0001424eb30f:
            pdb_142dc7e2a(uVar21,uVar23);
            goto code_r0x0001424eb8d4;
          }
          ppppbVar2 = ppppppbVar19[0x20][0xc];
          pppppbStack_110 = (byte *****)ppppppbVar24;
          if (uVar23 == 0) {
            pppppbStack_60 = (byte *****)0x4;
            pppppbStack_70 = (byte *****)0x0;
          }
          else {
            pdb_14007ee60();
            uVar21 = 4;
            pppppbStack_60 = (byte *****)pub_1406abab0(uVar23,4);
            if ((byte ******)pppppbStack_60 == (byte ******)0x0) goto code_r0x0001424eb30f;
            pppppbStack_70 = pppppbStack_110;
            ppppppbVar19 = (byte ******)pppppbStack_50;
          }
          if ((byte ******)pppppbStack_110 != (byte ******)0x0) {
            pub_142e32760(pppppbStack_60,ppppbVar2,uVar23);
          }
          ppppppbVar24 = (byte ******)ppppppbVar19[0x20][10];
          uVar23 = (longlong)ppppppbVar24 * 0xc;
          if ((byte ******)0xaaaaaaaaaaaaaaa < ppppppbVar24) {
            uVar21 = 0;
code_r0x0001424eb3c3:
            pdb_142dc7e2a(uVar21,uVar23);
            goto code_r0x0001424eb8d4;
          }
          ppppppbVar22 = (byte ******)ppppppbVar19[0x20][9];
          if (uVar23 == 0) {
            pppppbStack_90 = (byte *****)0x4;
            pppppbStack_a8 = (byte *****)0x0;
            ppppppbVar15 = (byte ******)pppppbStack_a8;
          }
          else {
            pppppbStack_88 = (byte *****)ppppppbVar22;
            pdb_14007ee60();
            uVar21 = 4;
            pppppbStack_90 = (byte *****)pub_1406abab0(uVar23,4);
            ppppppbVar22 = (byte ******)pppppbStack_88;
            ppppppbVar19 = (byte ******)pppppbStack_50;
            ppppppbVar15 = ppppppbVar24;
            if ((byte ******)pppppbStack_90 == (byte ******)0x0) goto code_r0x0001424eb3c3;
          }
          pppppbStack_a8 = (byte *****)ppppppbVar15;
          if (ppppppbVar24 != (byte ******)0x0) {
            pub_142e32760(pppppbStack_90,ppppppbVar22,uVar23);
          }
          ppppppbVar22 = (byte ******)ppppppbVar19[0x20][0x10];
          uVar23 = (longlong)ppppppbVar22 * 8;
          if (0x7ffffffffffffffc < uVar23 || (ulonglong)ppppppbVar22 >> 0x3d != 0) {
            uVar21 = 0;
code_r0x0001424eb482:
            pdb_142dc7e2a(uVar21,uVar23);
            goto code_r0x0001424eb8d4;
          }
          ppppppbVar15 = (byte ******)ppppppbVar19[0x20][0xf];
          pppppbStack_88 = (byte *****)ppppppbVar22;
          if (uVar23 == 0) {
            pppppbStack_a0 = (byte *****)0x4;
            pppppbStack_108 = (byte *****)0x0;
          }
          else {
            pppppbStack_80 = (byte *****)ppppppbVar15;
            pdb_14007ee60();
            uVar21 = 4;
            pppppbStack_a0 = (byte *****)pub_1406abab0(uVar23,4);
            if ((byte ******)pppppbStack_a0 == (byte ******)0x0) goto code_r0x0001424eb482;
            pppppbStack_108 = pppppbStack_88;
            ppppppbVar15 = (byte ******)pppppbStack_80;
            ppppppbVar19 = (byte ******)pppppbStack_50;
          }
          if ((byte ******)pppppbStack_88 != (byte ******)0x0) {
            pub_142e32760(pppppbStack_a0,ppppppbVar15,uVar23);
          }
          ppppppbVar22 = (byte ******)ppppppbVar19[0x20][0x13];
          uVar23 = (longlong)ppppppbVar22 * 4;
          if (0x7ffffffffffffffc < uVar23 || (ulonglong)ppppppbVar22 >> 0x3e != 0) {
            uVar21 = 0;
code_r0x0001424eb54f:
            pdb_142dc7e2a(uVar21,uVar23);
            goto code_r0x0001424eb8d4;
          }
          ppppppbVar15 = (byte ******)ppppppbVar19[0x20][0x12];
          pppppbStack_80 = (byte *****)ppppppbVar22;
          if (uVar23 == 0) {
            pppppbStack_100 = (byte *****)0x4;
            pppppbStack_140 = (byte *****)0x0;
          }
          else {
            pppppbStack_98 = (byte *****)ppppppbVar15;
            pdb_14007ee60();
            uVar21 = 4;
            pppppbStack_100 = (byte *****)pub_1406abab0(uVar23,4);
            if ((byte ******)pppppbStack_100 == (byte ******)0x0) goto code_r0x0001424eb54f;
            pppppbStack_140 = pppppbStack_80;
            ppppppbVar15 = (byte ******)pppppbStack_98;
            ppppppbVar19 = (byte ******)pppppbStack_50;
          }
          if ((byte ******)pppppbStack_80 != (byte ******)0x0) {
            pub_142e32760(pppppbStack_100,ppppppbVar15,uVar23);
          }
          ppppppbVar22 = (byte ******)ppppppbVar19[0x20][4];
          uVar23 = (longlong)ppppppbVar22 * 4;
          if (0x7ffffffffffffffc < uVar23 || (ulonglong)ppppppbVar22 >> 0x3e != 0) {
            uVar21 = 0;
code_r0x0001424eb629:
            pdb_142dc7e2a(uVar21,uVar23);
code_r0x0001424eb8d4:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          ppppppbVar19 = (byte ******)ppppppbVar19[0x20][3];
          if (uVar23 == 0) {
            ppppppbVar15 = (byte ******)0x4;
            pppppbStack_1c0 = (byte *****)(byte ******)0x0;
          }
          else {
            pppppbStack_98 = (byte *****)ppppppbVar19;
            pdb_14007ee60();
            ppppppbVar15 = (byte ******)pub_1406abab0(uVar23,4);
            uVar21 = 4;
            ppppppbVar19 = (byte ******)pppppbStack_98;
            pppppbStack_1c0 = (byte *****)ppppppbVar22;
            if (ppppppbVar15 == (byte ******)0x0) goto code_r0x0001424eb629;
          }
          if (ppppppbVar22 != (byte ******)0x0) {
            pppppbStack_98 = pppppbStack_1c0;
            pub_142e32760(ppppppbVar15,ppppppbVar19,uVar23);
            pppppbStack_1c0 = pppppbStack_98;
          }
          pppppbStack_238 = pppppbStack_78;
          pppppbStack_230 = pppppbStack_68;
          pppppbStack_220 = pppppbStack_70;
          pppppbStack_218 = pppppbStack_60;
          pppppbStack_208 = pppppbStack_a8;
          pppppbStack_200 = pppppbStack_90;
          uStack_1f0 = (byte ******)pppppbStack_108;
          pppppbStack_1e8 = pppppbStack_a0;
          pppppbStack_1d8 = pppppbStack_140;
          uStack_1d0 = (byte ******)pppppbStack_100;
          uStack_1a8 = CONCAT31(uStack_1a8._1_3_,1);
          *(byte *)((longlong)pppppbStack_50 + 299) = 0;
          pppppbStack_e8 = pppppbStack_148;
          pppppbStack_f8 = pppppbStack_158;
          pppppbStack_f0 = pppppbStack_150;
          pppppbStack_228 = (byte *****)ppppppbVar13;
          pppppbStack_210 = pppppbStack_110;
          pppppbStack_1f8 = (byte *****)ppppppbVar24;
          pppppbStack_1e0 = pppppbStack_88;
          uStack_1c8 = (byte ******)pppppbStack_80;
          pppppbStack_1b8 = (byte *****)ppppppbVar15;
          uStack_1b0 = ppppppbVar22;
          pdb_140cf7870(&pppppbStack_138,&pppppbStack_238,&pppppbStack_f8,
                        *(byte *)(pppppbStack_50 + 0x19));
          ppppppbVar19 = uStack_130;
          param_2 = (byte ******)pppppbStack_138;
          ppppppbVar13 = uStack_130;
          if (!SBORROW8(0,(longlong)pppppbStack_138)) {
            *(byte *)((longlong)pppppbStack_50 + 0x12a) = 0;
            pppppbStack_f8 = pppppbStack_138;
            pppppbStack_f0 = (byte *****)uStack_130;
            pppppbStack_e8 = (byte *****)uStack_128;
            uStack_e0 = (byte ******)((ulonglong)uStack_e0 & 0xffffffffffffff00);
            pppppbStack_70 = pppppbStack_138;
            pppppbStack_b8 = pppppbStack_138;
            pppppbStack_c0 = (byte *****)uStack_130;
            ppppppbVar13 = &pppppbStack_f8;
            pppppbVar16 = (byte *****)pdb_14170d0a0(unaff_RBX);
            pppppbStack_60 = (byte *****)ppppppbVar19;
            pppppbStack_50[0x1e] = (byte ****)pppppbVar16;
            pppppbStack_50[0x1f] = (byte ****)ppppppbVar13;
            goto code_r0x0001424eade9;
          }
          goto code_r0x0001424eaee4;
        }
      }
      else {
        uStack_51 = 0;
        pdb_140966f40(&pppppbStack_138);
      }
      ppppppbVar13 = (byte ******)pdb_142deaf00(ppppppbVar13);
      pppppbVar3 = (byte *****)pppppbStack_50[0x20];
      LOCK();
      *pppppbVar3 = (byte ****)((longlong)*pppppbVar3 + -1);
      ppppbVar2 = *pppppbVar3;
      UNLOCK();
joined_r0x0001424eaf13:
      if (ppppbVar2 == (byte ****)0x0) {
        pdb_140c7a060(pppppbStack_50 + 0x20);
      }
      goto code_r0x0001424eb0cb;
    case 1:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8570(&UNK_1435128d0);
    case 2:
      puVar20 = &UNK_1435128d0;
      goto code_r0x0001424eb8b8;
    case 3:
      pppppbVar16 = (byte *****)pppppbVar3[0x1e];
      ppppppbVar13 = (byte ******)pppppbVar3[0x1f];
code_r0x0001424eade9:
      (*(code *)ppppppbVar13[3])(&pppppbStack_f8,pppppbVar16,param_3);
      pppppbVar16 = pppppbStack_d8;
      unaff_RBX = uStack_e0;
      param_3 = (byte ******)pppppbStack_e8;
      ppppppbVar13 = (byte ******)pppppbStack_f0;
      pppppbVar3 = pppppbStack_f8;
      if ((byte ******)pppppbStack_f8 == (byte ******)0x2) {
        *(byte *)(pppppbStack_50 + 0x25) = 3;
        *param_1 = 2;
        bVar11 = 3;
        goto code_r0x0001424eb198;
      }
      pppppbStack_68 = (byte *****)pppppbStack_50[0x1e];
      pppppbStack_78 = (byte *****)pppppbStack_50[0x1f];
      if ((byte *****)*pppppbStack_78 != (byte *****)0x0) {
        (*(code *)*pppppbStack_78)(pppppbStack_68);
      }
      param_2 = (byte ******)pppppbStack_78[1];
      if (param_2 != (byte ******)0x0) {
        pub_1406abac0((byte *)pppppbStack_68,(ulonglong)param_2,(ulonglong)pppppbStack_78[2]);
      }
      if ((int)pppppbVar3 == 1) {
        pppppbStack_f8 = (byte *****)ppppppbVar13;
        pppppbStack_f0 = (byte *****)param_3;
        pppppbStack_e8 = (byte *****)unaff_RBX;
        uStack_e0 = (byte ******)pppppbVar16;
        pppppbStack_b8 = pppppbStack_70;
        pppppbStack_c0 = pppppbStack_60;
        ppppppbVar13 = (byte ******)pdb_142deada0(&pppppbStack_f8);
code_r0x0001424eaee4:
        ((byte *)((longlong)pppppbStack_50 + 0x12a))[0] = 0;
        ((byte *)((longlong)pppppbStack_50 + 0x12a))[1] = 0;
        pdb_140966f40(pppppbStack_50 + 0x21);
        pppppbVar3 = (byte *****)pppppbStack_50[0x20];
        LOCK();
        *pppppbVar3 = (byte ****)((longlong)*pppppbVar3 + -1);
        ppppbVar2 = *pppppbVar3;
        UNLOCK();
        goto joined_r0x0001424eaf13;
      }
      pppppbStack_138 = (byte *****)param_3;
      uStack_130 = unaff_RBX;
      uStack_128 = (byte ******)pppppbVar16;
      LOCK();
      *pppppbVar16 = (byte ****)((longlong)*pppppbVar16 + -1);
      UNLOCK();
      if ((byte *****)*pppppbVar16 == (byte *****)0x0) {
        pppppbStack_b8 = pppppbStack_70;
        pppppbStack_c0 = pppppbStack_60;
        param_2 = (byte ******)pppppbStack_70;
        pdb_140cd0de0(&uStack_128);
      }
      ((byte *)((longlong)pppppbStack_50 + 0x12a))[0] = 0;
      ((byte *)((longlong)pppppbStack_50 + 0x12a))[1] = 0;
      pdb_140966f40(pppppbStack_50 + 0x21);
      pppppbVar3 = (byte *****)pppppbStack_50[0x20];
      LOCK();
      *pppppbVar3 = (byte ****)((longlong)*pppppbVar3 + -1);
      UNLOCK();
      if (*pppppbVar3 == (byte ****)0x0) {
        pdb_140c7a060(pppppbStack_50 + 0x20);
      }
      pdb_14098a860(pppppbStack_50 + 0x1a);
      *(byte *)((longlong)pppppbStack_50 + 0x129) = 0;
      bVar25 = false;
      ppppppbVar19 = (byte ******)pppppbStack_50;
      break;
    case 4:
      goto code_r0x0001424ec133;
    case 5:
      pcVar1 = (char *)((longlong)
                        *(int *)(&UNK_143512ad4 + (ulonglong)*(byte *)(pppppbVar3 + 0x25) * 4) +
                       0xd09935e3);
      *pcVar1 = *pcVar1 + (char)param_2;
      goto code_r0x0001424ec7ca;
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570(&UNK_143512858);
  case 2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(&UNK_143512858);
  case 3:
    puVar12 = (undefined *)(ulonglong)*(byte *)(param_2 + 0x25);
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0001424ead3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar17 = (undefined8 *)
              (*(code *)(&UNK_143512ad4 + *(int *)(&UNK_143512ad4 + (longlong)puVar12 * 4)))();
    return puVar17;
  case 5:
    (&UNK_143512a51)[*(int *)(&UNK_143512ac4 + (ulonglong)*(byte *)(param_2 + 0x26) * 4)] =
         (&UNK_143512a51)[*(int *)(&UNK_143512ac4 + (ulonglong)*(byte *)(param_2 + 0x26) * 4)] +
         -0x3c;
code_r0x0001424eb8b8:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(puVar20);
  case 6:
    pcVar4 = (code *)swi(3);
    puVar17 = (undefined8 *)(*pcVar4)();
    return puVar17;
  case 7:
    ppppppbVar13 = (byte ******)((ulonglong)param_2 & 0xffffffff);
code_r0x0001424eadc6:
    ppppppbVar13 = (byte ******)pdb_142deaf00(ppppppbVar13);
code_r0x0001424eb0cb:
    pdb_14098a860(pppppbStack_50 + 0x1a);
    ppppppbVar19 = (byte ******)pppppbStack_50;
    if (*(byte *)((longlong)pppppbStack_50 + 0x129) != 0) {
      param_2 = (byte ******)0x0;
      if ((byte *****)pppppbStack_50[0x16] != (byte *****)0x0) {
        param_2 = (byte ******)((longlong)pppppbStack_50[0x16] << 4);
        pub_1406abac0((byte *)pppppbStack_50[0x17],(ulonglong)param_2,0x10);
      }
    }
    *(byte *)((longlong)ppppppbVar19 + 0x129) = 0;
    bVar25 = true;
    break;
  case 8:
    param_1 = (undefined8 *)((ulonglong)param_2 & 0xffffffff);
    puVar12 = (undefined *)(ulonglong)*(byte *)(param_2 + 0xe);
    puVar20 = &UNK_143512ae4;
code_r0x0001424ec133:
    pppppbStack_e8 = (byte *****)param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(puVar20 + *(int *)(puVar20 + (longlong)puVar12 * 4)) {
    case (undefined *)0x1424ec143:
      uStack_248 = *(undefined4 *)param_4;
      uStack_244 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_240 = *(undefined4 *)(param_4 + 1);
      uStack_23c = *(undefined4 *)((longlong)param_4 + 0xc);
      pppppbStack_238 = param_4[2];
      pppppbStack_230 = param_4[3];
      pdb_140ceedf0(&uStack_168,param_4[4],param_4[5],&uStack_248);
      param_4 = (byte ******)pppppbStack_e8;
      ppppppbVar13 = uStack_130;
      pppppbVar10 = pppppbStack_140;
      pppppbVar9 = pppppbStack_148;
      pppppbVar16 = pppppbStack_150;
      pppppbVar3 = pppppbStack_158;
      uVar5 = (undefined4)uStack_168;
      uVar6 = uStack_168._4_4_;
      uVar7 = (undefined4)uStack_160;
      uVar8 = uStack_160._4_4_;
      uStack_2e8 = (undefined4)uStack_168;
      uStack_2e4 = uStack_168._4_4_;
      uStack_2e0 = (undefined4)uStack_160;
      uStack_2dc = uStack_160._4_4_;
      pppppbStack_2d8 = pppppbStack_158;
      pppppbStack_2d0 = pppppbStack_150;
      pppppbStack_2c8 = pppppbStack_148;
      pppppbStack_2c0 = pppppbStack_140;
      pppppbStack_2b8 = pppppbStack_138;
      pppppbStack_2b0 = (byte *****)uStack_130;
      pppppbStack_e8[0xc] = (byte ****)pppppbStack_138;
      param_4[0xd] = (byte *****)ppppppbVar13;
      param_4[10] = pppppbVar9;
      param_4[0xb] = pppppbVar10;
      param_4[8] = pppppbVar3;
      param_4[9] = pppppbVar16;
      *(undefined4 *)(param_4 + 6) = uVar5;
      *(undefined4 *)((longlong)param_4 + 0x34) = uVar6;
      *(undefined4 *)(param_4 + 7) = uVar7;
      *(undefined4 *)((longlong)param_4 + 0x3c) = uVar8;
      break;
    case (undefined *)0x1424ec7ca:
code_r0x0001424ec7ca:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8590(&UNK_143512858);
    case (undefined *)0x1424ec7d6:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8570(&UNK_143512858);
    }
    pppppbStack_108 = (byte *****)(param_4 + 6);
    if (*(byte *)(param_4 + 0xc) != 0) {
      bVar25 = *(byte *)(param_4 + 0xc) == 1;
code_r0x0001424ec7aa:
      if (bVar25) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8570(&UNK_143512a18);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8590(&UNK_143512a18);
    }
    ppppppbVar13 = (byte ******)param_4[10];
    uStack_268 = *(undefined4 *)pppppbStack_108;
    uStack_264 = *(undefined4 *)((longlong)param_4 + 0x34);
    uStack_260 = *(undefined4 *)(param_4 + 7);
    uStack_25c = *(undefined4 *)((longlong)param_4 + 0x3c);
    uStack_258 = *(undefined4 *)(param_4 + 8);
    uStack_254 = *(undefined4 *)((longlong)param_4 + 0x44);
    uStack_250 = *(undefined4 *)(param_4 + 9);
    uStack_24c = *(undefined4 *)((longlong)param_4 + 0x4c);
    lVar18 = pdb_1417107c0(&uStack_268,ppppppbVar13,param_4[0xb]);
    if (lVar18 == 1) {
      ppppppbVar19 = (byte ******)pdb_142deaf00(ppppppbVar13);
code_r0x0001424ec4b3:
      pdb_14098a860(&uStack_268);
      *(byte *)(pppppbStack_e8 + 0xc) = 1;
code_r0x0001424ec4c8:
      pbVar14 = (byte *)pdb_142dc6590(ppppppbVar19);
      uVar21 = 1;
      ppppppbVar24 = (byte ******)pppppbStack_e8;
    }
    else {
      ppppppbVar19 = (byte ******)ppppppbVar13[3];
      pppppbStack_f0 = (byte *****)ppppppbVar13;
      pdb_140dace30(&uStack_1d0,ppppppbVar19,ppppppbVar13[4]);
      if (uStack_1d0 != (byte ******)0x800000000000000a) {
        pppppbStack_238 = pppppbStack_1c0;
        pppppbStack_230 = pppppbStack_1b8;
        uStack_248 = (undefined4)uStack_1d0;
        uStack_244 = uStack_1d0._4_4_;
        uStack_240 = (undefined4)uStack_1c8;
        uStack_23c = uStack_1c8._4_4_;
        uStack_e0 = (byte ******)CONCAT17(1,(uint7)uStack_e0);
        pdb_140f3f5b0(&uStack_168);
        pppppbStack_288 = pppppbStack_148;
        pppppbStack_280 = pppppbStack_140;
        pppppbStack_298 = pppppbStack_158;
        pppppbStack_290 = pppppbStack_150;
        pppppbStack_2a8 = (byte *****)uStack_168;
        uStack_2a0 = uStack_160;
        uStack_128 = (byte ******)CONCAT44(uStack_19c,uStack_1a0);
        uStack_120 = uStack_198;
        uStack_11c = uStack_194;
        pppppbStack_138 = (byte *****)uStack_1b0;
        uStack_130 = (byte ******)CONCAT44(uStack_1a4,uStack_1a8);
        pppppbStack_148 = pppppbStack_1c0;
        pppppbStack_158 = (byte *****)uStack_1d0;
        pppppbStack_150 = (byte *****)uStack_1c8;
        uStack_168 = (byte ******)&UNK_143512999;
        uStack_160 = 0x24;
        uStack_e0 = (byte ******)((ulonglong)uStack_e0 & 0xffffffffffffff);
        ppppppbVar13 = &pppppbStack_2a8;
        ppppppbVar19 = (byte ******)pdb_142dea520(&uStack_168);
code_r0x0001424ec499:
        LOCK();
        *pppppbStack_f0 = (byte ****)((longlong)*pppppbStack_f0 + -1);
        UNLOCK();
        if ((byte *****)*pppppbStack_f0 == (byte *****)0x0) {
          pdb_140cd0de0(&pppppbStack_f0);
        }
        goto code_r0x0001424ec4b3;
      }
      pppppbStack_1e8 = pppppbStack_1b8;
      pppppbStack_1e0 = (byte *****)uStack_1b0;
      pppppbStack_1d8 = (byte *****)CONCAT44(uStack_1a4,uStack_1a8);
      ppppppbVar13 = ppppppbVar19;
      ppppppbVar19 = (byte ******)pppppbStack_1c0;
      if (uStack_1c8 == (byte ******)0xa) goto code_r0x0001424ec499;
      pppppbStack_180 = pppppbStack_1b8;
      uStack_178 = (undefined4)uStack_1b0;
      uStack_174 = uStack_1b0._4_4_;
      pppppbStack_190 = (byte *****)uStack_1c8;
      pppppbStack_188 = pppppbStack_1c0;
      pdb_140daccf0(&pppppbStack_208,&pppppbStack_190);
      pdb_1424e6e70(&pppppbStack_190);
      uStack_160 = (ulonglong)pppppbStack_1f8 & 0x7ffffffffffffffc;
      pppppbStack_158 = (byte *****)((longlong)pppppbStack_200 + uStack_160);
      pppppbStack_150 = (byte *****)(ulonglong)((uint)pppppbStack_1f8 & 3);
      pppppbStack_f8 = pppppbStack_200;
      uStack_168 = (byte ******)pppppbStack_200;
      pppppbStack_148 = (byte *****)0x4;
      pdb_1415f27b0(&pppppbStack_1e8,&uStack_168);
      uVar23 = (ulonglong)uStack_1f0._4_4_ * ((ulonglong)uStack_1f0 & 0xffffffff);
      if (pppppbStack_1d8 <= uVar23 && uVar23 - (longlong)pppppbStack_1d8 != 0) {
        if ((byte ******)pppppbStack_1e8 != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppbStack_1e0,(ulonglong)pppppbStack_1e8,1);
        }
code_r0x0001424ec452:
        pdb_140f3f5b0(&uStack_168);
        ppppppbVar19 = (byte ******)pdb_142dea6e0(&UNK_1435129bd,0x2b,&uStack_168);
code_r0x0001424ec47b:
        ppppppbVar13 = (byte ******)pppppbStack_208;
        if ((byte ******)pppppbStack_208 != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppbStack_f8,(ulonglong)pppppbStack_208,1);
          ppppppbVar13 = (byte ******)pppppbStack_208;
        }
        goto code_r0x0001424ec499;
      }
      if (SBORROW8(0,(longlong)pppppbStack_1e8)) goto code_r0x0001424ec452;
      pppppbStack_100 = pppppbStack_1e8;
      pppppbStack_190 = (byte *****)0x0;
      pppppbStack_188 = (byte *****)0x1;
      pppppbStack_180 = (byte *****)0x0;
      uStack_270 = 0;
      pppppbStack_110 = pppppbStack_1e0;
      pppppbStack_278 = (byte *****)&pppppbStack_190;
      uVar21 = pdb_1406d0830();
      uStack_310 = uStack_1f0._4_4_;
      auStack_318[0] = (undefined4)uStack_1f0;
      uStack_2f8 = 0;
      uStack_308 = 0xd;
      pdb_140ade920(&uStack_1d0,&pppppbStack_278,uVar21,uVar23);
      pppppbVar16 = pppppbStack_180;
      ppppppbVar19 = (byte ******)pppppbStack_188;
      pppppbVar3 = pppppbStack_190;
      if (uStack_1d0 != (byte ******)0x800000000000000a) {
        pppppbStack_238 = pppppbStack_1c0;
        pppppbStack_230 = pppppbStack_1b8;
        uStack_248 = (undefined4)uStack_1d0;
        uStack_244 = uStack_1d0._4_4_;
        uStack_240 = (undefined4)uStack_1c8;
        uStack_23c = uStack_1c8._4_4_;
        uStack_e0._0_7_ = CONCAT16(1,(uint6)uStack_e0);
        pdb_140f3f5b0(&uStack_168);
        pppppbStack_288 = pppppbStack_148;
        pppppbStack_280 = pppppbStack_140;
        pppppbStack_298 = pppppbStack_158;
        pppppbStack_290 = pppppbStack_150;
        pppppbStack_2a8 = (byte *****)uStack_168;
        uStack_2a0 = uStack_160;
        uStack_128 = (byte ******)CONCAT44(uStack_19c,uStack_1a0);
        uStack_120 = uStack_198;
        uStack_11c = uStack_194;
        pppppbStack_138 = (byte *****)uStack_1b0;
        uStack_130 = (byte ******)CONCAT44(uStack_1a4,uStack_1a8);
        pppppbStack_148 = pppppbStack_1c0;
        pppppbStack_158 = (byte *****)uStack_1d0;
        pppppbStack_150 = (byte *****)uStack_1c8;
        uStack_168 = (byte ******)&UNK_1435129e8;
        uStack_160 = 0x2d;
        uStack_e0._0_7_ = (uint7)(uint6)uStack_e0;
        ppppppbVar19 = (byte ******)pdb_142dea520(&uStack_168,&pppppbStack_2a8);
        if ((byte ******)pppppbStack_190 != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppbStack_188,(ulonglong)pppppbStack_190,1);
        }
        if ((byte ******)pppppbStack_100 != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppbStack_110,(ulonglong)pppppbStack_100,1);
        }
        goto code_r0x0001424ec47b;
      }
      if ((byte ******)pppppbStack_100 != (byte ******)0x0) {
        pub_1406abac0((byte *)pppppbStack_110,(ulonglong)pppppbStack_100,1);
      }
      ppppppbVar13 = (byte ******)pppppbStack_208;
      if ((byte ******)pppppbStack_208 != (byte ******)0x0) {
        pub_1406abac0((byte *)pppppbStack_f8,(ulonglong)pppppbStack_208,1);
        ppppppbVar13 = (byte ******)pppppbStack_208;
      }
      LOCK();
      *pppppbStack_f0 = (byte ****)((longlong)*pppppbStack_f0 + -1);
      UNLOCK();
      if ((byte *****)*pppppbStack_f0 == (byte *****)0x0) {
        pdb_140cd0de0(&pppppbStack_f0);
      }
      pdb_14098a860(&uStack_268);
      ppppppbVar24 = (byte ******)pppppbStack_e8;
      *(byte *)(pppppbStack_e8 + 0xc) = 1;
      if (SBORROW8(0,(longlong)pppppbVar3)) goto code_r0x0001424ec4c8;
      if ((byte ******)pppppbVar3 == (byte ******)0x8000000000000001) {
        *param_1 = 2;
        bVar11 = 3;
        goto code_r0x0001424ec4ea;
      }
      pdb_14007ee60();
      pbVar14 = pub_1406abab0(0x30,8);
      if (pbVar14 == (byte *)0x0) {
        pppppbStack_108 = pppppbVar3;
        pppppbStack_f8 = (byte *****)ppppppbVar19;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar14[0] = 1;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
      pbVar14[4] = 0;
      pbVar14[5] = 0;
      pbVar14[6] = 0;
      pbVar14[7] = 0;
      pbVar14[8] = 1;
      pbVar14[9] = 0;
      pbVar14[10] = 0;
      pbVar14[0xb] = 0;
      pbVar14[0xc] = 0;
      pbVar14[0xd] = 0;
      pbVar14[0xe] = 0;
      pbVar14[0xf] = 0;
      *(byte ******)(pbVar14 + 0x10) = pppppbVar3;
      *(byte *******)(pbVar14 + 0x18) = ppppppbVar19;
      *(byte ******)(pbVar14 + 0x20) = pppppbVar16;
      pbVar14[0x28] = 0;
      ppppppbVar13 = (byte ******)&UNK_143512870;
      uVar21 = 0;
    }
    *param_1 = uVar21;
    param_1[1] = pbVar14;
    param_1[2] = ppppppbVar13;
    bVar11 = 1;
code_r0x0001424ec4ea:
    *(byte *)(ppppppbVar24 + 0xe) = bVar11;
    return param_1;
  case 9:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  case 10:
    goto code_r0x0001424ec7aa;
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(ppppppbVar19 + 0x25) = 1;
  pdb_1424e6650(pppppbStack_b0);
  if (bVar25) {
    pbVar14 = (byte *)pdb_142dc6590(ppppppbVar13);
    uVar21 = 1;
  }
  else {
    pdb_14007ee60();
    pbVar14 = pub_1406abab0(0x20,0x10);
    if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x20);
    }
    pbVar14[0] = 1;
    pbVar14[1] = 0;
    pbVar14[2] = 0;
    pbVar14[3] = 0;
    pbVar14[4] = 0;
    pbVar14[5] = 0;
    pbVar14[6] = 0;
    pbVar14[7] = 0;
    pbVar14[8] = 1;
    pbVar14[9] = 0;
    pbVar14[10] = 0;
    pbVar14[0xb] = 0;
    pbVar14[0xc] = 0;
    pbVar14[0xd] = 0;
    pbVar14[0xe] = 0;
    pbVar14[0xf] = 0;
    *(byte *******)(pbVar14 + 0x10) = param_3;
    *(byte *******)(pbVar14 + 0x18) = unaff_RBX;
    param_2 = (byte ******)&UNK_1435128b0;
    uVar21 = 0;
  }
  *param_1 = uVar21;
  param_1[1] = pbVar14;
  param_1[2] = param_2;
  bVar11 = 1;
code_r0x0001424eb198:
  *(byte *)(pppppbStack_50 + 0x26) = bVar11;
  return param_1;
}

