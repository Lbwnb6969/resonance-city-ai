// VA 0x14173fad0, PDB extent 762 bytes
// turbosloth::asset::impl$24::run::async_block$0<clutter_pack_pipe::ClutterMeshAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterMeshAsset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141740462) overlaps instruction at (ram,0x00014174045e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<clutter_pack_pipe::ClutterMeshAsset,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<clutter_pack_pipe::ClutterMeshAsset>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 762 */

undefined8 * pdb_14173fad0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined *arg0;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined8 in_XMM1_Qa;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined *apuStack_2e8 [12];
  byte *pbStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  longlong *plStack_218;
  undefined *puStack_210;
  longlong lStack_208;
  longlong lStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong *plStack_168;
  undefined *puStack_160;
  ulonglong uStack_158;
  byte *pbStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined1 auStack_128 [192];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar8 = (ulonglong)*(int *)(&UNK_14332bdd8 + (ulonglong)*(byte *)(param_2 + 0x1d8) * 4);
  puVar9 = &UNK_14332bdd8 + uVar8;
  lStack_38 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x1d8)) {
  case 0:
    pub_142e32760(&uStack_228,param_2,200);
    puStack_160 = *(undefined **)(param_2 + 200);
    uStack_158 = *(undefined8 *)(param_2 + 0xd0);
    pbStack_150 = *(byte **)(param_2 + 0xd8);
    lStack_148 = *(longlong *)(param_2 + 0xe0);
    lStack_30 = param_2 + 0xe8;
    pub_142e32760(lStack_30,&uStack_228,0xe8);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570(&UNK_14332ba20);
  case 2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(&UNK_14332ba20);
  case 3:
    lStack_40 = param_2 + 0xe8;
    lStack_30 = lStack_40;
    if (*(char *)(param_2 + 0x1d0) != '\0') {
      if (*(char *)(param_2 + 0x1d0) != '\x01') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8590(&UNK_14332bb50);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8570(&UNK_14332bb50);
    }
    break;
  case 4:
    lStack_140 = param_2;
                    /* WARNING: Could not emulate address calculation at 0x00014173fe07 */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (undefined8 *)
              (*(code *)(&UNK_14332bdd8 + *(int *)(&UNK_14332bdd8 + (longlong)puVar9 * 4)))();
    return puVar10;
  case 5:
    *(int *)(uVar8 + 0xd07ac8e7) = *(int *)(uVar8 + 0xd07ac8e7) + (int)param_2;
    puVar9 = (undefined *)(ulonglong)((uint)puVar9 | 0x1beb5ac);
  case 6:
    piVar1 = (int *)((ulonglong)(((uint)puVar9 | 0x9b0d8d48) + (int)&pbStack_288) + 1);
    *piVar1 = *piVar1 + -0x480b0f90;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(0x4332ba20);
  case 7:
    *(int *)(param_2 + 0x70) =
         *(int *)(param_2 + 0x70) + (int)param_2 + (uint)(0xfffffffebccd4227 < uVar8);
    *(int *)(param_2 + 0x60) = (int)param_3;
    *(int *)(param_2 + 100) = (int)((ulonglong)param_3 >> 0x20);
    *(undefined4 *)(param_2 + 0x68) = in_XMM2_Dc;
    *(undefined4 *)(param_2 + 0x6c) = in_XMM2_Dd;
    *(int *)(param_2 + 0x50) = (int)in_XMM1_Qa;
    *(int *)(param_2 + 0x54) = (int)((ulonglong)in_XMM1_Qa >> 0x20);
    *(undefined4 *)(param_2 + 0x58) = in_XMM1_Dc;
    *(undefined4 *)(param_2 + 0x5c) = in_XMM1_Dd;
    *(undefined8 *)(param_2 + 0x40) = in_XMM0_Qa;
    *(undefined8 *)(param_2 + 0x48) = in_XMM0_Qb;
    if (*(char *)(param_2 + 0x80) != '\0') {
      if (*(char *)(param_2 + 0x80) != '\x01') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8590(&UNK_14332bb00);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8570(&UNK_14332bb00);
    }
    uStack_158 = *(ulonglong *)(param_2 + 0x40);
    pbStack_150 = *(byte **)(param_2 + 0x48);
    puVar9 = *(undefined **)(param_2 + 0x50);
    lStack_208 = *(longlong *)(param_2 + 0x60);
    lStack_200 = *(longlong *)(param_2 + 0x68);
    uStack_1f8 = *(undefined4 *)(param_2 + 0x70);
    uStack_1f4 = *(undefined4 *)(param_2 + 0x74);
    uStack_1f0 = *(undefined4 *)(param_2 + 0x78);
    uStack_1ec = *(undefined4 *)(param_2 + 0x7c);
    pdb_141c2f360(&uStack_1c8,lStack_208 + 0x10,pbStack_150,puVar9);
    lVar14 = lStack_1b8;
    lVar4 = lStack_200;
    auVar17[0] = -((char)uStack_1c8 == DAT_142f5c7c0);
    auVar17[1] = -(uStack_1c8._1_1_ == UNK_142f5c7c1);
    auVar17[2] = -(uStack_1c8._2_1_ == UNK_142f5c7c2);
    auVar17[3] = -(uStack_1c8._3_1_ == UNK_142f5c7c3);
    auVar17[4] = -(uStack_1c8._4_1_ == UNK_142f5c7c4);
    auVar17[5] = -(uStack_1c8._5_1_ == UNK_142f5c7c5);
    auVar17[6] = -(uStack_1c8._6_1_ == UNK_142f5c7c6);
    auVar17[7] = -(uStack_1c8._7_1_ == UNK_142f5c7c7);
    auVar17[8] = -((char)uStack_1c0 == UNK_142f5c7c8);
    auVar17[9] = -(uStack_1c0._1_1_ == UNK_142f5c7c9);
    auVar17[10] = -(uStack_1c0._2_1_ == UNK_142f5c7ca);
    auVar17[0xb] = -(uStack_1c0._3_1_ == UNK_142f5c7cb);
    auVar17[0xc] = -(uStack_1c0._4_1_ == UNK_142f5c7cc);
    auVar17[0xd] = -(uStack_1c0._5_1_ == UNK_142f5c7cd);
    auVar17[0xe] = -(uStack_1c0._6_1_ == UNK_142f5c7ce);
    auVar17[0xf] = -(uStack_1c0._7_1_ == UNK_142f5c7cf);
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf
                ) == 0xffff) {
      pdb_14098a860(&lStack_208);
      if (uStack_158 != 0) {
        pub_1406abac0(pbStack_150,uStack_158,1);
      }
      *(undefined1 *)(lStack_140 + 0x80) = 1;
      lVar15 = lStack_140;
code_r0x000141740265:
      uStack_1c8 = (longlong *)lVar14;
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(8,8);
      if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,8);
      }
      *(longlong *)pbVar11 = lVar14;
      uVar13 = 1;
      puVar9 = &UNK_1430712c0;
      lStack_140 = lVar15;
    }
    else {
      puStack_210 = puStack_160;
      uStack_220 = uStack_170;
      plStack_218 = plStack_168;
      uStack_230 = (undefined4)uStack_180;
      uStack_22c = uStack_180._4_4_;
      uStack_228 = (undefined4)uStack_178;
      uStack_224 = uStack_178._4_4_;
      uStack_240 = uStack_190;
      uStack_23c = uStack_18c;
      uStack_238 = (undefined4)uStack_188;
      uStack_234 = uStack_188._4_4_;
      uStack_250 = (undefined4)uStack_1a0;
      uStack_24c = uStack_1a0._4_4_;
      uStack_248 = (undefined4)uStack_198;
      uStack_244 = uStack_198._4_4_;
      uStack_260 = uStack_1b0;
      uStack_258 = uStack_1a8;
      uStack_278 = uStack_1c8;
      puStack_270 = uStack_1c0;
      uStack_268 = lStack_1b8;
      if (lStack_200 == 0) {
        uVar12 = (undefined4)CONCAT71((int7)((ulonglong)uStack_1c0 >> 8),1);
      }
      else {
        lVar14 = lStack_200 + 0x38;
        LOCK();
        bVar16 = *(char *)(lStack_200 + 0x38) == '\0';
        if (bVar16) {
          *(char *)(lStack_200 + 0x38) = '\x01';
        }
        UNLOCK();
        if (!bVar16) {
          uStack_130._0_7_ = CONCAT16(1,(undefined6)uStack_130);
          uStack_130 = CONCAT17(1,(uint7)uStack_130);
          pdb_142dc6be0(lVar14);
        }
        puVar2 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          uVar7 = 0;
          cVar6 = *(char *)(lVar4 + 0x39);
        }
        else {
          uStack_130._0_7_ = CONCAT16(1,(undefined6)uStack_130);
          uStack_130 = CONCAT17(1,(uint7)uStack_130);
          uVar7 = pdb_142dc79e0();
          uVar7 = uVar7 ^ 1;
          cVar6 = *(char *)(lVar4 + 0x39);
        }
        if (cVar6 != '\0') {
          uVar8 = (ulonglong)uStack_1c0 >> 8;
          uStack_1c0 = (undefined *)CONCAT71((int7)uVar8,(char)uVar7);
          apuStack_2e8[0] = &UNK_14332bae8;
          uStack_1c8 = (longlong *)lVar14;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_1c8,&UNK_14332b940);
        }
        uStack_130._4_4_ = (undefined4)(uStack_130 >> 0x20);
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar7);
        uStack_178 = CONCAT44(uStack_224,uStack_228);
        uStack_188 = CONCAT44(uStack_234,uStack_238);
        uStack_180 = CONCAT44(uStack_22c,uStack_230);
        uStack_198 = (undefined *)CONCAT44(uStack_244,uStack_248);
        uStack_1a0 = (byte *)CONCAT44(uStack_24c,uStack_250);
        uStack_1c8 = (longlong *)uStack_278;
        uStack_1c0 = puStack_270;
        lStack_1b8 = uStack_268;
        uStack_1b0 = uStack_260;
        uStack_1a8 = uStack_258;
        uStack_190 = uStack_240;
        uStack_18c = uStack_23c;
        uStack_170 = uStack_220;
        lStack_148 = lVar14;
        pdb_1417b89d0(lVar4 + 0x40,&uStack_1c8);
        if (((char)uStack_130 == '\0') && ((*puVar2 & 0x7fffffffffffffff) != 0)) {
          uStack_130._0_7_ = CONCAT16(1,(int6)uStack_130);
          uStack_130 = (ulonglong)(uint7)uStack_130;
          cVar6 = pdb_142dc79e0();
          if (cVar6 == '\0') {
            *(undefined1 *)(lVar4 + 0x39) = 1;
          }
        }
        uVar12 = 0;
        LOCK();
        cVar6 = *(char *)(lVar4 + 0x38);
        *(char *)(lVar4 + 0x38) = '\0';
        UNLOCK();
        if (cVar6 == '\x02') {
          uStack_130._0_7_ = CONCAT16(1,(int6)uStack_130);
          uStack_130 = (ulonglong)(uint7)uStack_130;
          pdb_142dc6ca0();
          uVar12 = 0;
        }
      }
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar12);
      pbStack_288 = pbStack_150;
      lStack_1e8 = 0;
      uStack_1e0 = 1;
      uStack_1d8 = 0;
      lStack_1b8 = 0x60000020;
      uStack_1c8 = &lStack_1e8;
      uStack_1c0 = &UNK_14332b508;
      puStack_280 = puVar9;
      cVar6 = pdb_140f58310(&pbStack_288,&uStack_1c8);
      uVar13 = uStack_1d8;
      arg0 = puStack_210;
      plVar3 = plStack_218;
      if (cVar6 != '\0') {
        apuStack_2e8[0] = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14332b538,0x37,&uStack_131,&UNK_14332b890);
      }
      lStack_148 = lStack_1e8;
      if (plStack_218 == (longlong *)0x0) {
        pbVar11 = (byte *)0x0;
        arg0 = puVar9;
        lVar14 = uStack_1e0;
      }
      else {
        uStack_1c8 = plStack_218;
        uStack_1c0 = puStack_210;
        uStack_1d0 = uStack_1e0;
        if (puStack_210 == (undefined *)0x0) {
          pbVar11 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          pbVar11 = pub_1406abab0((ulonglong)arg0,1);
          if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(1,arg0);
          }
        }
        pub_142e32760(pbVar11,plVar3 + 2,arg0);
        LOCK();
        *uStack_1c8 = *uStack_1c8 + -1;
        UNLOCK();
        if (*uStack_1c8 == 0) {
          pdb_1406ed6a0(&uStack_1c8);
        }
        lVar14 = uStack_1d0;
      }
      if (((char)uStack_130 != '\0') && (CONCAT44(uStack_234,uStack_238) != 0)) {
        pub_1406abac0((byte *)CONCAT44(uStack_22c,uStack_230),CONCAT44(uStack_234,uStack_238),1);
      }
      pdb_14098a860(&lStack_208);
      lVar4 = lStack_148;
      if (uStack_158 != 0) {
        pub_1406abac0(pbStack_150,uStack_158,1);
      }
      *(undefined1 *)(lStack_140 + 0x80) = 1;
      lVar15 = lStack_140;
      if (SBORROW8(0,lVar4)) goto code_r0x000141740265;
      if (lVar4 == -0x7fffffffffffffff) {
        *param_1 = 2;
        uVar5 = 3;
        goto code_r0x0001417402a5;
      }
      uStack_1c8 = (longlong *)0x1;
      uStack_1c0 = (undefined *)0x1;
      lStack_1b8 = lVar4;
      uStack_1a8 = uVar13;
      uStack_1b0 = lVar14;
      uStack_1a0 = pbVar11;
      uStack_198 = arg0;
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(0x38,8);
      if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x38);
      }
      *(undefined **)(pbVar11 + 0x30) = uStack_198;
      *(undefined8 *)(pbVar11 + 0x20) = uStack_1a8;
      *(byte **)(pbVar11 + 0x28) = uStack_1a0;
      *(longlong *)(pbVar11 + 0x10) = lStack_1b8;
      *(undefined8 *)(pbVar11 + 0x18) = uStack_1b0;
      *(longlong **)pbVar11 = uStack_1c8;
      *(undefined **)(pbVar11 + 8) = uStack_1c0;
      puVar9 = &UNK_14332ba38;
      uVar13 = 0;
    }
    *param_1 = uVar13;
    param_1[1] = pbVar11;
    param_1[2] = puVar9;
    uVar5 = 1;
code_r0x0001417402a5:
    *(undefined1 *)(lStack_140 + 0x88) = uVar5;
    return param_1;
  }
  lVar14 = *(longlong *)(param_2 + 0xe8);
  pub_142e32760(&lStack_140,param_2 + 0xf0,0xc0);
  uStack_68 = *(undefined8 *)(param_2 + 0x1b0);
  uStack_60 = *(undefined8 *)(param_2 + 0x1b8);
  uStack_58 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_54 = *(undefined4 *)(param_2 + 0x1c4);
  uStack_50 = *(undefined4 *)(param_2 + 0x1c8);
  uStack_4c = *(undefined4 *)(param_2 + 0x1cc);
  pdb_14098a860(&uStack_68);
  pub_142e32760(apuStack_2e8,&lStack_140,0xc0);
  lVar4 = lStack_38;
  *(undefined1 *)(lStack_38 + 0x1d0) = 1;
  if (SBORROW8(0,lVar14)) {
    *param_1 = 2;
    uVar5 = 3;
  }
  else {
    pub_142e32760(auStack_128,apuStack_2e8,0xc0);
    lStack_140 = 1;
    uStack_138 = 1;
    uStack_130 = lVar14;
    pdb_14007ee60();
    pbVar11 = pub_1406abab0(0xd8,8);
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0xd8);
    }
    pub_142e32760(pbVar11,&lStack_140,0xd8);
    *param_1 = 0;
    param_1[1] = pbVar11;
    param_1[2] = &UNK_14332bab8;
    uVar5 = 1;
  }
  *(undefined1 *)(lVar4 + 0x1d8) = uVar5;
  return param_1;
}

