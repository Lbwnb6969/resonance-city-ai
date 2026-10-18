// VA 0x140a9e810, PDB extent 8294 bytes
// country_core::startup::load_textures::load_glade_texture_mappings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_textures::load_glade_texture_mappings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
   Extent: 8294 */

void pdb_140a9e810(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte ***pppbVar8;
  code **ppcVar9;
  char cVar10;
  longlong lVar11;
  byte ***pppbVar12;
  code **ppcStack_3c8;
  code **ppcStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  code **ppcStack_3a8;
  code **ppcStack_3a0;
  byte **ppbStack_398;
  code **ppcStack_390;
  code **ppcStack_388;
  byte **ppbStack_380;
  code **ppcStack_378;
  code **ppcStack_370;
  byte **ppbStack_368;
  code **ppcStack_360;
  code **ppcStack_358;
  byte **ppbStack_350;
  code **ppcStack_348;
  code **ppcStack_340;
  byte **ppbStack_338;
  code **ppcStack_330;
  code **ppcStack_328;
  byte **ppbStack_320;
  code **ppcStack_318;
  code **ppcStack_310;
  byte **ppbStack_308;
  code **ppcStack_300;
  code **ppcStack_2f8;
  byte **ppbStack_2f0;
  code **ppcStack_2e8;
  code **ppcStack_2e0;
  code **ppcStack_2d8;
  code **ppcStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  byte **ppbStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  byte **ppbStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  byte **ppbStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  byte **ppbStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  byte **ppbStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  byte **ppbStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte **ppbStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  byte **ppbStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  code **ppcStack_1c8;
  code **ppcStack_1c0;
  code **ppcStack_1b8;
  code **ppcStack_1b0;
  code **ppcStack_1a8;
  code **ppcStack_1a0;
  code **ppcStack_198;
  code **ppcStack_190;
  code **ppcStack_188;
  byte ***pppbStack_180;
  code **ppcStack_178;
  byte ***pppbStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  byte ***pppbStack_128;
  code **ppcStack_90;
  undefined8 uStack_88;
  code **ppcStack_80;
  code **ppcStack_78;
  byte ***pppbStack_70;
  byte **ppbStack_68;
  byte ***pppbStack_60;
  code *pcStack_58;
  code **ppcStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar11 = (ulonglong)*(byte *)(*param_1 + 0x98) * 8;
  pdb_140f3e9e0(&pppbStack_180,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_143047860 + lVar11),
                *(undefined8 *)(&UNK_143047838 + lVar11));
  ppcStack_50 = ppcStack_178;
  pdb_140f3e9e0(&pcStack_1e8,ppcStack_178,pppbStack_170,&UNK_143046898,0xd);
  if (pppbStack_180 != (byte ***)0x0) {
    pub_1406abac0((byte *)ppcStack_50,(ulonglong)pppbStack_180,1);
  }
  pdb_140d929f0(&pppbStack_180,pbStack_1e0,uStack_1d8);
  ppcStack_50 = ppcStack_178;
  cVar10 = pdb_140d8af50(ppcStack_178,pppbStack_170);
  if (cVar10 == '\0') {
    if (pppbStack_180 != (byte ***)0x0) {
      pub_1406abac0((byte *)ppcStack_50,(ulonglong)pppbStack_180,1);
    }
    pdb_141643400(&ppcStack_2d8,pbStack_1e0,uStack_1d8);
    pppbVar12 = (byte ***)ppcStack_2d0;
    if ((char)ppcStack_2d8 != '\x06') {
      uStack_3b8 = (undefined4)uStack_2c8;
      uStack_3b4 = uStack_2c8._4_4_;
      uStack_3b0 = (undefined4)uStack_2c0;
      uStack_3ac = uStack_2c0._4_4_;
      ppcStack_3c8 = ppcStack_2d8;
      ppcStack_3c0 = ppcStack_2d0;
      pdb_1415037b0(&pppbStack_180,&ppcStack_3c8,&UNK_143321928,0x14,&UNK_1433219d8,10);
      ppcVar9 = ppcStack_178;
      pppbVar12 = pppbStack_180;
      if (!SBORROW8(0,(longlong)pppbStack_180)) {
        pub_142e32760(&uStack_2c8,&pppbStack_170,0xe0);
        ppcStack_2d8 = (code **)pppbVar12;
        ppcStack_2d0 = ppcVar9;
        *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
        pdb_140a9ddf0(&ppcStack_2d8,*param_2);
        pdb_140999ea0(&ppcStack_2d8);
        goto LAB_140a9fefd;
      }
      pppbVar12 = (byte ***)pdb_142dead00(ppcStack_178);
    }
    pdb_142d8f8e0(&pcStack_1e8,pppbVar12);
    goto LAB_140aa0312;
  }
  if (pppbStack_180 != (byte ***)0x0) {
    pub_1406abac0((byte *)ppcStack_50,(ulonglong)pppbStack_180,1);
  }
  pdb_140f55d10(&pppbStack_180,pbStack_1e0,uStack_1d8);
  ppcStack_50 = (code **)pppbStack_180;
  if (SBORROW8(0,(longlong)pppbStack_180)) {
    pppbVar12 = (byte ***)pdb_142deaf00(ppcStack_178);
  }
  else {
    ppcStack_188 = ppcStack_178;
    pdb_14164fb60(&pppbStack_180,ppcStack_178,pppbStack_170);
    pppbVar12 = (byte ***)ppcStack_178;
    pppbVar8 = pppbStack_180;
    if (SBORROW8(0,(longlong)pppbStack_180)) {
      pppbVar12 = (byte ***)pdb_142dead00(ppcStack_178);
    }
    else {
      pub_142e32760(&ppcStack_2d8,&pppbStack_170,0xe0);
    }
    if ((byte ***)ppcStack_50 != (byte ***)0x0) {
      pub_1406abac0((byte *)ppcStack_188,(ulonglong)ppcStack_50,1);
    }
    if (!SBORROW8(0,(longlong)pppbVar8)) {
      ppcStack_3c8 = (code **)pppbVar8;
      ppcStack_3c0 = (code **)pppbVar12;
      pub_142e32760(&uStack_3b8,&ppcStack_2d8,0xe0);
      pdb_141643400(&ppcStack_2d8,pbStack_1e0,uStack_1d8);
      ppcStack_80 = ppcStack_2d0;
      if ((char)ppcStack_2d8 == '\x06') {
LAB_140a9ebfb:
        if (*_DAT_143ca8e90 != 0) {
          ppcStack_2d0 = (code **)pdb_140f58250;
          uStack_2c8 = &ppcStack_80;
          uStack_2c0 = pdb_140f36c30;
          pppbStack_180 = (byte ***)0x0;
          ppcStack_178 = (code **)&UNK_143046741;
          pppbStack_170 = (byte ***)0x24;
          pcStack_168 = (code *)0x0;
          puStack_160 = &UNK_143046557;
          uStack_158 = 0x30;
          uStack_150 = 1;
          puStack_148 = &UNK_143046741;
          uStack_140 = 0x24;
          uStack_138 = 0x13300000001;
          puStack_130 = &UNK_1430468a5;
          ppcStack_2d8 = &pcStack_1e8;
          pppbStack_128 = (byte ***)&ppcStack_2d8;
          pdb_140f332f0(&uStack_41,&pppbStack_180);
        }
        *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
        pdb_140a9ddf0(&ppcStack_3c8,*param_2);
        pdb_140f36c40(&ppcStack_80);
      }
      else {
        pppbStack_70 = (byte ***)uStack_2c8;
        ppbStack_68 = (byte **)uStack_2c0;
        ppcStack_80 = ppcStack_2d8;
        ppcStack_78 = ppcStack_2d0;
        pdb_1415037b0(&pppbStack_180,&ppcStack_80,&UNK_143321928,0x14,&UNK_1433219d8,10);
        ppcVar9 = ppcStack_178;
        pppbVar12 = pppbStack_180;
        if (SBORROW8(0,(longlong)pppbStack_180)) {
          ppcStack_80 = (code **)pdb_142dead00(ppcStack_178);
          goto LAB_140a9ebfb;
        }
        pub_142e32760(&uStack_2c8,&pppbStack_170,0xe0);
        ppcStack_2d8 = (code **)pppbVar12;
        ppcStack_2d0 = ppcVar9;
        *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
        uVar2 = *param_2;
        pdb_14007ee60();
        pppbVar12 = (byte ***)pub_1406abab0(0x14,1);
        uVar6 = _UNK_143046614;
        uVar5 = _UNK_143046610;
        uVar4 = _UNK_14304660c;
        if (pppbVar12 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0x14);
          goto LAB_140aa0312;
        }
        *(undefined4 *)pppbVar12 = _DAT_143046608;
        *(undefined4 *)((longlong)pppbVar12 + 4) = uVar4;
        *(undefined4 *)(pppbVar12 + 1) = uVar5;
        *(undefined4 *)((longlong)pppbVar12 + 0xc) = uVar6;
        *(undefined4 *)(pppbVar12 + 2) = 0x726f6c6f;
        ppcStack_50 = (code **)pppbVar12;
        cVar10 = pdb_140a2ead0(uVar2,pppbVar12,0x14,ppcStack_2d0,uStack_2c8);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            ppcStack_80 = (code **)&UNK_1430466e0;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pppbStack_60 = (byte ***)&ppcStack_3c8;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pppbStack_70 = (byte ***)&ppcStack_2d8;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_78 = (code **)CONCAT44(uStack_3b4,uStack_3b8);
          ppcStack_90 = ppcStack_50;
          uStack_88 = 0x14;
          ppcStack_80 = ppcStack_3c0;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_50,0x14,ppcStack_3c0,ppcStack_78);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pdb_14007ee60();
        pppbVar12 = (byte ***)pub_1406abab0(0x1a,1);
        uVar7 = _UNK_14304662e;
        if (pppbVar12 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0x1a);
          goto LAB_140aa0312;
        }
        *(ulonglong *)((longlong)pppbVar12 + 10) =
             CONCAT26(_UNK_14304662c,CONCAT42(_UNK_143046628,_DAT_143046626));
        *(undefined8 *)((longlong)pppbVar12 + 0x12) = uVar7;
        uVar6 = _UNK_143046628;
        uVar5 = _UNK_143046620;
        uVar4 = CONCAT22(_DAT_143046626,_UNK_143046624);
        *(undefined4 *)pppbVar12 = _DAT_14304661c;
        *(undefined4 *)((longlong)pppbVar12 + 4) = uVar5;
        *(undefined4 *)(pppbVar12 + 1) = uVar4;
        *(undefined4 *)((longlong)pppbVar12 + 0xc) = uVar6;
        ppcStack_188 = (code **)pppbVar12;
        cVar10 = pdb_140a2ead0(uVar2,pppbVar12,0x1a,uStack_2b8,uStack_2b0);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            pppbStack_70 = (byte ***)&uStack_2c0;
            pppbStack_60 = (byte ***)&uStack_3b0;
            ppcStack_80 = (code **)&UNK_143046780;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_90 = ppcStack_188;
          uStack_88 = 0x1a;
          ppcStack_80 = ppcStack_3a8;
          ppcStack_78 = ppcStack_3a0;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_188,0x1a,ppcStack_3a8,ppcStack_3a0);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pdb_14007ee60();
        pppbVar12 = (byte ***)pub_1406abab0(0x1a,1);
        uVar7 = _UNK_143046648;
        if (pppbVar12 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0x1a);
          goto LAB_140aa0312;
        }
        *(ulonglong *)((longlong)pppbVar12 + 10) =
             CONCAT26(_UNK_143046646,CONCAT42(_UNK_143046642,_DAT_143046640));
        *(undefined8 *)((longlong)pppbVar12 + 0x12) = uVar7;
        uVar6 = _UNK_143046642;
        uVar5 = _UNK_14304663a;
        uVar4 = CONCAT22(_DAT_143046640,_UNK_14304663e);
        *(undefined4 *)pppbVar12 = _DAT_143046636;
        *(undefined4 *)((longlong)pppbVar12 + 4) = uVar5;
        *(undefined4 *)(pppbVar12 + 1) = uVar4;
        *(undefined4 *)((longlong)pppbVar12 + 0xc) = uVar6;
        ppcStack_1c8 = (code **)pppbVar12;
        cVar10 = pdb_140a2ead0(uVar2,pppbVar12,0x1a,uStack_2a0,uStack_298);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            pppbStack_70 = &ppbStack_2a8;
            pppbStack_60 = &ppbStack_398;
            ppcStack_80 = (code **)&UNK_1430467a8;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_90 = ppcStack_1c8;
          uStack_88 = 0x1a;
          ppcStack_80 = ppcStack_390;
          ppcStack_78 = ppcStack_388;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_1c8,0x1a,ppcStack_390,ppcStack_388);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pdb_14007ee60();
        pppbVar12 = (byte ***)pub_1406abab0(0x15,1);
        uVar6 = _UNK_14304665c;
        uVar5 = _UNK_143046658;
        uVar4 = _UNK_143046654;
        if (pppbVar12 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0x15);
          goto LAB_140aa0312;
        }
        *(undefined4 *)pppbVar12 = _DAT_143046650;
        *(undefined4 *)((longlong)pppbVar12 + 4) = uVar4;
        *(undefined4 *)(pppbVar12 + 1) = uVar5;
        *(undefined4 *)((longlong)pppbVar12 + 0xc) = uVar6;
        pbVar1 = (byte *)((longlong)pppbVar12 + 0xd);
        pbVar1[0] = 0x5f;
        pbVar1[1] = 0x74;
        pbVar1[2] = 0x65;
        pbVar1[3] = 0x78;
        pbVar1[4] = 0x74;
        pbVar1[5] = 0x75;
        pbVar1[6] = 0x72;
        pbVar1[7] = 0x65;
        ppcStack_1c0 = (code **)pppbVar12;
        cVar10 = pdb_140a2ead0(uVar2,pppbVar12,0x15,uStack_288,uStack_280);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            pppbStack_70 = &ppbStack_290;
            pppbStack_60 = &ppbStack_380;
            ppcStack_80 = (code **)&UNK_1430467c8;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_90 = ppcStack_1c0;
          uStack_88 = 0x15;
          ppcStack_80 = ppcStack_378;
          ppcStack_78 = ppcStack_370;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_1c0,0x15,ppcStack_378,ppcStack_370);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pdb_14007ee60();
        pppbVar12 = (byte ***)pub_1406abab0(0x11,1);
        uVar6 = _UNK_143046671;
        uVar5 = _UNK_14304666d;
        uVar4 = _UNK_143046669;
        if (pppbVar12 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0x11);
          goto LAB_140aa0312;
        }
        *(undefined4 *)pppbVar12 = _DAT_143046665;
        *(undefined4 *)((longlong)pppbVar12 + 4) = uVar4;
        *(undefined4 *)(pppbVar12 + 1) = uVar5;
        *(undefined4 *)((longlong)pppbVar12 + 0xc) = uVar6;
        *(byte *)(pppbVar12 + 2) = 0x68;
        ppcStack_1b8 = (code **)pppbVar12;
        cVar10 = pdb_140a2ead0(uVar2,pppbVar12,0x11,uStack_270,uStack_268);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            pppbStack_70 = &ppbStack_278;
            pppbStack_60 = &ppbStack_368;
            ppcStack_80 = (code **)&UNK_1430467e8;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_90 = ppcStack_1b8;
          uStack_88 = 0x11;
          ppcStack_80 = ppcStack_360;
          ppcStack_78 = ppcStack_358;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_1b8,0x11,ppcStack_360,ppcStack_358);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pdb_14007ee60();
        pppbVar12 = (byte ***)pub_1406abab0(0xd,1);
        if (pppbVar12 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0xd);
          goto LAB_140aa0312;
        }
        pbVar1 = (byte *)((longlong)pppbVar12 + 5);
        pbVar1[0] = 0x3a;
        pbVar1[1] = 0x66;
        pbVar1[2] = 0x6c;
        pbVar1[3] = 0x6f;
        pbVar1[4] = 0x77;
        pbVar1[5] = 0x65;
        pbVar1[6] = 0x72;
        pbVar1[7] = 0x31;
        *pppbVar12 = (byte **)0x6c663a6564616c67;
        ppcStack_1b0 = (code **)pppbVar12;
        cVar10 = pdb_140a2ead0(uVar2,pppbVar12,0xd,uStack_258,uStack_250);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            pppbStack_70 = &ppbStack_260;
            pppbStack_60 = &ppbStack_350;
            ppcStack_80 = (code **)&UNK_143046800;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_90 = ppcStack_1b0;
          uStack_88 = 0xd;
          ppcStack_80 = ppcStack_348;
          ppcStack_78 = ppcStack_340;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_1b0,0xd,ppcStack_348,ppcStack_340);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pdb_14007ee60();
        pppbVar12 = (byte ***)pub_1406abab0(0x14,1);
        uVar6 = _UNK_143046682;
        uVar5 = _UNK_14304667e;
        uVar4 = _UNK_14304667a;
        if (pppbVar12 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0x14);
          goto LAB_140aa0312;
        }
        *(undefined4 *)pppbVar12 = _DAT_143046676;
        *(undefined4 *)((longlong)pppbVar12 + 4) = uVar4;
        *(undefined4 *)(pppbVar12 + 1) = uVar5;
        *(undefined4 *)((longlong)pppbVar12 + 0xc) = uVar6;
        *(undefined4 *)(pppbVar12 + 2) = 0x7265776f;
        ppcStack_1a8 = (code **)pppbVar12;
        cVar10 = pdb_140a2ead0(uVar2,pppbVar12,0x14,uStack_240,uStack_238);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            pppbStack_70 = &ppbStack_248;
            pppbStack_60 = &ppbStack_338;
            ppcStack_80 = (code **)&UNK_143046820;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_90 = ppcStack_1a8;
          uStack_88 = 0x14;
          ppcStack_80 = ppcStack_330;
          ppcStack_78 = ppcStack_328;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_1a8,0x14,ppcStack_330,ppcStack_328);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pdb_14007ee60();
        pppbVar12 = (byte ***)pub_1406abab0(0x12,1);
        uVar6 = _UNK_143046696;
        uVar5 = _UNK_143046692;
        uVar4 = _UNK_14304668e;
        if (pppbVar12 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0x12);
          goto LAB_140aa0312;
        }
        *(undefined4 *)pppbVar12 = _DAT_14304668a;
        *(undefined4 *)((longlong)pppbVar12 + 4) = uVar4;
        *(undefined4 *)(pppbVar12 + 1) = uVar5;
        *(undefined4 *)((longlong)pppbVar12 + 0xc) = uVar6;
        *(undefined2 *)(pppbVar12 + 2) = 0x726f;
        ppcStack_1a0 = (code **)pppbVar12;
        cVar10 = pdb_140a2ead0(uVar2,pppbVar12,0x12,uStack_228,uStack_220);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            pppbStack_70 = &ppbStack_230;
            pppbStack_60 = &ppbStack_320;
            ppcStack_80 = (code **)&UNK_143046840;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_90 = ppcStack_1a0;
          uStack_88 = 0x12;
          ppcStack_80 = ppcStack_318;
          ppcStack_78 = ppcStack_310;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_1a0,0x12,ppcStack_318,ppcStack_310);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pdb_14007ee60();
        pppbVar12 = (byte ***)pub_1406abab0(0x16,1);
        uVar6 = _UNK_1430466a8;
        uVar5 = _UNK_1430466a4;
        uVar4 = _UNK_1430466a0;
        if (pppbVar12 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0x16);
          goto LAB_140aa0312;
        }
        *(undefined4 *)pppbVar12 = _DAT_14304669c;
        *(undefined4 *)((longlong)pppbVar12 + 4) = uVar4;
        *(undefined4 *)(pppbVar12 + 1) = uVar5;
        *(undefined4 *)((longlong)pppbVar12 + 0xc) = uVar6;
        pbVar1 = (byte *)((longlong)pppbVar12 + 0xe);
        pbVar1[0] = 0x6f;
        pbVar1[1] = 0x72;
        pbVar1[2] = 0x5f;
        pbVar1[3] = 0x6e;
        pbVar1[4] = 0x61;
        pbVar1[5] = 0x6b;
        pbVar1[6] = 0x65;
        pbVar1[7] = 100;
        ppcStack_198 = (code **)pppbVar12;
        cVar10 = pdb_140a2ead0(uVar2,pppbVar12,0x16,uStack_210,uStack_208);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            pppbStack_70 = &ppbStack_218;
            pppbStack_60 = &ppbStack_308;
            ppcStack_80 = (code **)&UNK_143046860;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_90 = ppcStack_198;
          uStack_88 = 0x16;
          ppcStack_80 = ppcStack_300;
          ppcStack_78 = ppcStack_2f8;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_198,0x16,ppcStack_300,ppcStack_2f8);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pdb_14007ee60();
        ppcStack_190 = (code **)pub_1406abab0(0x1d,1);
        uVar7 = _UNK_1430466c7;
        if ((byte ***)ppcStack_190 == (byte ***)0x0) {
          pdb_142dc7e2a(1,0x1d);
          goto LAB_140aa0312;
        }
        *(ulonglong *)((longlong)ppcStack_190 + 0xd) = CONCAT53(_UNK_1430466c2,_DAT_1430466bf);
        *(undefined8 *)((longlong)ppcStack_190 + 0x15) = uVar7;
        uVar6 = _UNK_1430466be;
        uVar5 = _UNK_1430466ba;
        uVar4 = _UNK_1430466b6;
        *(undefined4 *)ppcStack_190 = _DAT_1430466b2;
        *(undefined4 *)((longlong)ppcStack_190 + 4) = uVar4;
        *(undefined4 *)(ppcStack_190 + 1) = uVar5;
        *(undefined4 *)((longlong)ppcStack_190 + 0xc) = uVar6;
        cVar10 = pdb_140a2ead0(uVar2,ppcStack_190,0x1d,uStack_1f8,uStack_1f0);
        if (cVar10 == '\0') {
          if (*_DAT_143ca8e90 != 0) {
            pppbStack_70 = &ppbStack_200;
            pppbStack_60 = &ppbStack_2f0;
            ppcStack_80 = (code **)&UNK_143046888;
            ppcStack_78 = (code **)pdb_1402ed420;
            ppbStack_68 = (byte **)pdb_140094770;
            pcStack_58 = pdb_140094770;
            pppbStack_180 = (byte ***)0x0;
            ppcStack_178 = (code **)&UNK_143046741;
            pppbStack_170 = (byte ***)0x24;
            pcStack_168 = (code *)0x0;
            puStack_160 = &UNK_143046557;
            uStack_158 = 0x30;
            uStack_150 = 1;
            puStack_148 = &UNK_143046741;
            uStack_140 = 0x24;
            uStack_138 = 0x10c00000001;
            puStack_130 = &UNK_1430466f0;
            pppbStack_128 = (byte ***)&ppcStack_80;
            pdb_140f332f0(&uStack_41,&pppbStack_180);
          }
          ppcStack_90 = ppcStack_190;
          uStack_88 = 0x1d;
          ppcStack_80 = ppcStack_2e8;
          ppcStack_78 = ppcStack_2e0;
          cVar10 = pdb_140a2ead0(uVar2,ppcStack_190,0x1d,ppcStack_2e8,ppcStack_2e0);
          if (cVar10 == '\0') {
            pppbStack_180 = (byte ***)&ppcStack_90;
            ppcStack_178 = (code **)pdb_1402ed420;
            pcStack_168 = pdb_1402ed420;
            pppbStack_170 = (byte ***)&ppcStack_80;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039f70,&pppbStack_180,&UNK_143039fc0);
          }
        }
        pub_1406abac0((byte *)ppcStack_190,0x1d,1);
        pub_1406abac0((byte *)ppcStack_198,0x16,1);
        pub_1406abac0((byte *)ppcStack_1a0,0x12,1);
        pub_1406abac0((byte *)ppcStack_1a8,0x14,1);
        pub_1406abac0((byte *)ppcStack_1b0,0xd,1);
        pub_1406abac0((byte *)ppcStack_1b8,0x11,1);
        pub_1406abac0((byte *)ppcStack_1c0,0x15,1);
        pub_1406abac0((byte *)ppcStack_1c8,0x1a,1);
        pub_1406abac0((byte *)ppcStack_188,0x1a,1);
        pub_1406abac0((byte *)ppcStack_50,0x14,1);
        pdb_140999ea0(&ppcStack_2d8);
      }
      pdb_140999ea0(&ppcStack_3c8);
LAB_140a9fefd:
      if ((byte **)pcStack_1e8 != (byte **)0x0) {
        pub_1406abac0(pbStack_1e0,(ulonglong)pcStack_1e8,1);
      }
      return;
    }
  }
  pdb_142d8f960(&pcStack_1e8,pppbVar12);
LAB_140aa0312:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

