// VA 0x1400a94a0, PDB extent 3018 bytes
// rhapsody::raw::device::GraphicsDevice::create_texture_with_mem_location<enum2$<rhapsody::raw::texture::TextureInitialData> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   rhapsody::raw::device::GraphicsDevice::create_texture_with_mem_location<enum2$<rhapsody::raw::texture::TextureInitialData>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 3018 */

longlong *
pdb_1400a94a0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5
             ,undefined1 param_6,longlong *param_7)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  longlong lVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined1 auStack_3e0 [28];
  int iStack_3c4;
  int iStack_3c0;
  int iStack_3bc;
  longlong lStack_388;
  longlong lStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined *puStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  char cStack_30c;
  undefined8 uStack_30b;
  undefined8 uStack_2f8;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  ulonglong uStack_288;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong lStack_268;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined4 auStack_208 [2];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulonglong uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_128;
  undefined8 uStack_124;
  char cStack_11c;
  undefined8 uStack_11b;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_84;
  longlong lStack_70;
  longlong lStack_68;
  char *pcStack_60;
  code *pcStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_70 = param_3;
  lStack_68 = param_4;
  if (4 < *_DAT_143ca8e90) {
    uStack_f8 = &lStack_70;
    uStack_f0 = pdb_1402ed420;
    uStack_1a8 = (longlong *)0x0;
    uStack_1a0 = (code *)&UNK_142e3a49e;
    uStack_198 = 0x16;
    uStack_190 = 0;
    uStack_188 = (code *)&UNK_142e3a44a;
    uStack_180 = 0x53;
    uStack_178 = 5;
    uStack_170 = &UNK_142e3a49e;
    lStack_168 = 0x16;
    lStack_160 = 0x38100000001;
    puStack_158 = &UNK_142e3a435;
    puStack_150 = &uStack_f8;
    pdb_140f332f0(&uStack_4a,&uStack_1a8);
  }
  lStack_268 = param_7[2];
  uStack_278 = (undefined4)*param_7;
  uStack_274 = *(undefined4 *)((longlong)param_7 + 4);
  lVar16 = *param_7;
  uStack_270 = (undefined4)param_7[1];
  uStack_26c = *(undefined4 *)((longlong)param_7 + 0xc);
  if (*(byte *)((longlong)param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142e3a4b4,0x38,&UNK_142e3a4f0);
  }
  if (lVar16 != 0) {
    *(byte *)((longlong)param_5 + 0xc) = *(byte *)((longlong)param_5 + 0xc) | 2;
  }
  pdb_140e1ded0(auStack_3e0,param_5,lVar16 != 0);
  if (iStack_3c4 != 0) {
    if (iStack_3c0 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_142e3a550,0x2f,&UNK_142e3a580);
    }
    if (iStack_3bc == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_142e3a598,0x2e,&UNK_142e3a5c8);
    }
    iVar12 = (**(code **)(param_2 + 0x1b8))
                       (*(undefined8 *)(param_2 + 0x658),auStack_3e0,0,&uStack_1a8);
    lVar5 = (longlong)uStack_1a8;
    if (iVar12 != 0) {
      uStack_1a8 = (longlong *)CONCAT44(uStack_1a8._4_4_,iVar12);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142e3a5e0,0xc,&uStack_1a8,&UNK_142e396e0,&UNK_142e3a5f0);
    }
    puVar13 = (undefined8 *)pdb_140e56170(param_2);
    if (puVar13 != (undefined8 *)0x0) {
      pdb_140f60950(&uStack_f8,lStack_70,lStack_68);
      pcVar2 = uStack_f0;
      if (!SBORROW8(0,(longlong)uStack_f8)) {
        uStack_1a8 = uStack_f8;
        uStack_1a0 = uStack_f0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_142e39720,0x2b,&uStack_1a8,&UNK_142e39700,&UNK_142e3a608);
      }
      uStack_1a8 = (longlong *)CONCAT44(uStack_1a8._4_4_,0x3b9cbe00);
      uStack_1a0 = (code *)0x0;
      uStack_198 = CONCAT44(uStack_198._4_4_,10);
      uStack_190 = lVar5;
      uStack_188 = uStack_f0;
      iVar12 = (*(code *)*puVar13)(puVar13[8],&uStack_1a8);
      if (iVar12 != 0) {
        pcStack_58 = pcVar2;
        pcStack_60 = (char *)uStack_e8;
        uStack_f8 = (longlong *)CONCAT44(uStack_f8._4_4_,iVar12);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_142e3a078,0x1b,&uStack_f8,&UNK_142e396e0,&UNK_142e3a620);
      }
      *pcVar2 = (code)0x0;
      if (uStack_e8 != 0) {
        pub_1406abac0((byte *)pcVar2,uStack_e8,1);
      }
    }
    pcStack_58 = (code *)lVar16;
    auStack_208[0] = 0x3b9cba18;
    uStack_200 = 0;
    uStack_1f8 = 0;
    puVar14 = auStack_208;
    do {
      puVar14 = *(undefined4 **)(puVar14 + 2);
    } while (puVar14 != (undefined4 *)0x0);
    uStack_1a8 = (longlong *)CONCAT44(uStack_1a8._4_4_,0x3b9d0453);
    uStack_1a0 = (code *)auStack_208;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = (code *)((ulonglong)uStack_188 & 0xffffffff00000000);
    uStack_f8 = (longlong *)CONCAT44(uStack_f8._4_4_,0x3b9d0451);
    uStack_f0 = (code *)0x0;
    uStack_e8 = lVar5;
    (**(code **)(param_2 + 0x478))(*(undefined8 *)(param_2 + 0x658),&uStack_f8,&uStack_1a8);
    uStack_1c8 = (undefined4)uStack_198;
    uStack_1c4 = uStack_198._4_4_;
    uStack_1c0 = (undefined4)uStack_190;
    uStack_1bc = uStack_190._4_4_;
    uStack_1b8 = (ulonglong)uStack_188;
    bVar3 = uStack_1f8._4_4_ == 0;
    bVar4 = (int)uStack_1f8 == 0;
    lVar16 = *(longlong *)(param_2 + 0x6a8);
    pcStack_60 = (char *)(lVar16 + 0x10);
    LOCK();
    bVar17 = *(char *)(lVar16 + 0x10) == '\0';
    if (bVar17) {
      *(char *)(lVar16 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar17) {
      pdb_142dbd1a0(pcStack_60,1,1000000000);
    }
    uVar18 = pdb_140e9a150(lVar16 + 0x10);
    bVar17 = *(char *)(param_2 + 0x5f) == '\x01';
    if (bVar17) {
      uVar18 = *(undefined4 *)
                (&UNK_142e39540 + (ulonglong)((*(byte *)((longlong)param_5 + 0xc) & 0x60) == 0) * 4)
      ;
    }
    uStack_190 = lStack_70;
    uStack_188 = (code *)lStack_68;
    uStack_180 = CONCAT44(uStack_1c4,uStack_1c8);
    uStack_178 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_170 = (undefined *)uStack_1b8;
    lStack_168 = (ulonglong)CONCAT61(lStack_168._2_6_,param_6) << 8;
    uStack_1a0 = (code *)lVar5;
    uStack_198 = CONCAT44(uVar18,(uint)bVar17);
    uStack_1a8 = (longlong *)((ulonglong)(bVar3 && bVar4) + 1);
    pdb_140e7f890(&uStack_f8,lVar16 + 0x18,&uStack_1a8);
    pcVar11 = pcStack_60;
    lVar7 = uStack_e8;
    lVar6 = (longlong)uStack_f0;
    lVar16 = (longlong)uStack_f8;
    if (uStack_b8._4_1_ == '\x02') {
      pdb_14007ee60();
      pbVar15 = pub_1406abab0(0xf,1);
      pcVar11 = pcStack_60;
      if (pbVar15 == (byte *)0x0) {
        lStack_1f0 = lVar7;
        lStack_100 = lVar6;
        pcStack_58 = (code *)lVar16;
        pdb_142dc7e2a(1,0xf);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pbVar15[7] = 0x20;
      pbVar15[8] = 0x74;
      pbVar15[9] = 0x65;
      pbVar15[10] = 0x78;
      pbVar15[0xb] = 0x74;
      pbVar15[0xc] = 0x75;
      pbVar15[0xd] = 0x72;
      pbVar15[0xe] = 0x65;
      pbVar15[0] = 0x47;
      pbVar15[1] = 0x70;
      pbVar15[2] = 0x75;
      pbVar15[3] = 0x4f;
      pbVar15[4] = 0x6e;
      pbVar15[5] = 0x6c;
      pbVar15[6] = 0x79;
      pbVar15[7] = 0x20;
      lStack_1e8 = (longlong)uStack_f0;
      lStack_1e0 = uStack_e8;
      lStack_1d8 = uStack_e0;
      uStack_298 = uStack_1c8;
      uStack_294 = uStack_1c4;
      uStack_290 = uStack_1c0;
      uStack_28c = uStack_1bc;
      uStack_288 = uStack_1b8;
      param_1[3] = uStack_e0;
      param_1[1] = (longlong)uStack_f0;
      param_1[2] = uStack_e8;
      *(undefined4 *)(param_1 + 7) = uStack_1c8;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_1c4;
      *(undefined4 *)(param_1 + 8) = uStack_1c0;
      *(undefined4 *)((longlong)param_1 + 0x44) = uStack_1bc;
      param_1[9] = uStack_1b8;
      *param_1 = lVar16;
      param_1[4] = 0xf;
      param_1[5] = (longlong)pbVar15;
      param_1[6] = 0xf;
      pdb_140e9a350(pcStack_60);
      LOCK();
      cVar1 = *pcVar11;
      if (cVar1 == '\x01') {
        *pcVar11 = '\0';
      }
      UNLOCK();
      if (cVar1 != '\x01') {
        pdb_142dbcef0(pcVar11,0);
      }
    }
    else {
      uStack_298 = (undefined4)uStack_c8;
      uStack_294 = uStack_c8._4_4_;
      uStack_290 = (undefined4)uStack_c0;
      uStack_28c = uStack_c0._4_4_;
      uStack_288 = (ulonglong)uStack_b8;
      lStack_1e8 = (longlong)uStack_f8;
      lStack_1e0 = (longlong)uStack_f0;
      lStack_1d8 = uStack_e8;
      uStack_258 = (undefined4)uStack_f8;
      uStack_254 = uStack_f8._4_4_;
      uStack_250 = (undefined4)uStack_f0;
      uStack_24c = uStack_f0._4_4_;
      uStack_248 = uStack_e8;
      uStack_218 = uStack_b8;
      uStack_228 = (undefined4)uStack_c8;
      uStack_224 = uStack_c8._4_4_;
      uStack_220 = (undefined4)uStack_c0;
      uStack_21c = uStack_c0._4_4_;
      uStack_240 = (undefined4)uStack_e0;
      uStack_23c = uStack_e0._4_4_;
      uStack_238 = (undefined4)uStack_d8;
      uStack_234 = uStack_d8._4_4_;
      uStack_230 = uStack_d0;
      uStack_49 = 1;
      pdb_140e9a350(pcStack_60);
      LOCK();
      cVar1 = *pcVar11;
      if (cVar1 == '\x01') {
        *pcVar11 = '\0';
      }
      UNLOCK();
      if (cVar1 != '\x01') {
        uStack_49 = 1;
        pdb_142dbcef0(pcVar11,0);
      }
      iVar12 = (**(code **)(param_2 + 0xf8))
                         (*(undefined8 *)(param_2 + 0x658),lVar5,uStack_230,
                          CONCAT44(uStack_24c,uStack_250));
      if (iVar12 != 0) {
        uStack_1a8 = (longlong *)CONCAT44(uStack_1a8._4_4_,iVar12);
        uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_142e3a638,0x11,&uStack_1a8,&UNK_142e396e0,&UNK_142e3a650);
      }
      uStack_2a8 = uStack_218;
      uStack_2e8 = CONCAT44(uStack_254,uStack_258);
      uStack_2e0 = CONCAT44(uStack_24c,uStack_250);
      uStack_2b8 = uStack_228;
      uStack_2b4 = uStack_224;
      uStack_2b0 = uStack_220;
      uStack_2ac = uStack_21c;
      uStack_2c8 = uStack_238;
      uStack_2c4 = uStack_234;
      uStack_2c0 = (undefined4)uStack_230;
      uStack_2bc = uStack_230._4_4_;
      uStack_2d8 = (undefined4)uStack_248;
      uStack_2d4 = uStack_248._4_4_;
      uStack_2d0 = uStack_240;
      uStack_2cc = uStack_23c;
      lStack_1d8 = CONCAT44(lStack_1d8._4_4_,(int)param_5[2]);
      lStack_1e8 = *param_5;
      lStack_1e0 = param_5[1];
      uStack_49 = 0;
      pdb_140e1d720(&uStack_1a8,lStack_70,lStack_68,lVar5,param_2,&uStack_2e8,&lStack_1e8);
      if (cStack_11c == '\x03') {
        param_1[8] = lStack_168;
        param_1[9] = lStack_160;
        param_1[6] = uStack_178;
        param_1[7] = (longlong)uStack_170;
        param_1[4] = (longlong)uStack_188;
        param_1[5] = uStack_180;
        param_1[2] = uStack_198;
        param_1[3] = uStack_190;
        *param_1 = (longlong)uStack_1a8;
        param_1[1] = (longlong)uStack_1a0;
      }
      else {
        uStack_84 = uStack_124;
        uVar10 = uStack_84;
        uStack_98 = uStack_138;
        uStack_a8 = uStack_148;
        uStack_a0 = uStack_140;
        uStack_b8 = puStack_158;
        puStack_b0 = puStack_150;
        uStack_c8 = lStack_168;
        lVar7 = uStack_c8;
        uStack_c0 = lStack_160;
        lVar9 = uStack_c0;
        uStack_d8 = uStack_178;
        lVar6 = uStack_d8;
        uStack_d0 = (ulonglong)uStack_170;
        uVar8 = uStack_d0;
        uStack_e8 = (ulonglong)uStack_188;
        lVar16 = uStack_e8;
        uStack_e0 = uStack_180;
        lVar5 = uStack_e0;
        uStack_f8 = (longlong *)uStack_198;
        uStack_f0 = (code *)uStack_190;
        uStack_30b = uStack_11b;
        uStack_2f8 = uStack_108;
        uStack_e8._0_4_ = SUB84(uStack_188,0);
        uStack_e8._4_4_ = (undefined4)((ulonglong)uStack_188 >> 0x20);
        uStack_e0._0_4_ = (undefined4)uStack_180;
        uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_180 >> 0x20);
        uStack_d8._0_4_ = (undefined4)uStack_178;
        uStack_d8._4_4_ = (undefined4)((ulonglong)uStack_178 >> 0x20);
        uStack_d0._0_4_ = SUB84(uStack_170,0);
        uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_170 >> 0x20);
        uStack_c8._0_4_ = (undefined4)lStack_168;
        uStack_c8._4_4_ = (undefined4)((ulonglong)lStack_168 >> 0x20);
        uStack_c0._0_4_ = (undefined4)lStack_160;
        uStack_c0._4_4_ = (undefined4)((ulonglong)lStack_160 >> 0x20);
        lStack_388 = uStack_198;
        lStack_380 = uStack_190;
        uStack_378 = (undefined4)uStack_e8;
        uStack_374 = uStack_e8._4_4_;
        uStack_370 = (undefined4)uStack_e0;
        uStack_36c = uStack_e0._4_4_;
        uStack_368 = (undefined4)uStack_d8;
        uStack_364 = uStack_d8._4_4_;
        uStack_360 = (undefined4)uStack_d0;
        uStack_35c = uStack_d0._4_4_;
        uStack_358 = (undefined4)uStack_c8;
        uStack_354 = uStack_c8._4_4_;
        uStack_350 = (undefined4)uStack_c0;
        uStack_34c = uStack_c0._4_4_;
        puStack_348 = puStack_158;
        puStack_340 = puStack_150;
        uStack_338 = uStack_148;
        uStack_330 = uStack_140;
        uStack_328 = uStack_138;
        uStack_84._0_4_ = (undefined4)uStack_124;
        uStack_84._4_4_ = (undefined4)((ulonglong)uStack_124 >> 0x20);
        uStack_318 = uStack_128;
        uStack_314 = (undefined4)uStack_84;
        uStack_310 = uStack_84._4_4_;
        cStack_30c = cStack_11c;
        uStack_49 = 0;
        uStack_e8 = lVar16;
        uStack_e0 = lVar5;
        uStack_d8 = lVar6;
        uStack_d0 = uVar8;
        uStack_c8 = lVar7;
        uStack_c0 = lVar9;
        uStack_84 = uVar10;
        lVar16 = pdb_140399780(*(longlong *)(param_2 + 0x660) + 0x10,uStack_1a8,uStack_1a0,
                               &lStack_388);
        if (pcStack_58 != (code *)0x0) {
          uStack_f8 = (longlong *)lVar16;
          pdb_140e66100(&uStack_1a8,param_2,&uStack_278,&uStack_f8,auStack_3e0);
          if ((int)uStack_1a8 != 0xb) {
            param_1[8] = lStack_168;
            param_1[9] = lStack_160;
            *(undefined4 *)(param_1 + 6) = (undefined4)uStack_178;
            *(undefined4 *)((longlong)param_1 + 0x34) = uStack_178._4_4_;
            *(undefined4 *)(param_1 + 7) = (undefined4)uStack_170;
            *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_170._4_4_;
            *(undefined4 *)(param_1 + 4) = (undefined4)uStack_188;
            *(undefined4 *)((longlong)param_1 + 0x24) = uStack_188._4_4_;
            *(undefined4 *)(param_1 + 5) = (undefined4)uStack_180;
            *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_180._4_4_;
            *(undefined4 *)(param_1 + 2) = (undefined4)uStack_198;
            *(undefined4 *)((longlong)param_1 + 0x14) = uStack_198._4_4_;
            *(undefined4 *)(param_1 + 3) = (undefined4)uStack_190;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_190._4_4_;
            *(int *)param_1 = (int)uStack_1a8;
            *(undefined4 *)((longlong)param_1 + 4) = uStack_1a8._4_4_;
            *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1a0;
            *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1a0._4_4_;
            uStack_49 = 0;
            pdb_1404bb6e0(&uStack_f8);
            return param_1;
          }
        }
        param_1[1] = lVar16;
        *param_1 = 0xb;
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_142e3a508,0x2e,&UNK_142e3a538);
}

