// VA 0x1409d5f90, PDB extent 3864 bytes
// country_core::systems::steam::workshop_mods::register_workshop_mod
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::steam::workshop_mods::register_workshop_mod
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_mods.rs
   Extent: 3864 */

undefined8 *
pdb_1409d5f90(undefined8 *param_1,code *param_2,ulonglong *param_3,longlong param_4,
             undefined8 *param_5)

{
  code *pcVar1;
  byte *pbVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  longlong lVar10;
  code *pcVar11;
  code **ppcVar12;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 *apuStack_3c8 [21];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  code *pcStack_308;
  ulonglong *puStack_300;
  code *pcStack_2f8;
  ulonglong *puStack_2f0;
  code *pcStack_2e8;
  code **ppcStack_278;
  code *pcStack_270;
  undefined4 *puStack_268;
  code *pcStack_260;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  code **ppcStack_180;
  code **ppcStack_178;
  code *pcStack_170;
  code **ppcStack_168;
  ulonglong uStack_160;
  byte *pbStack_158;
  undefined *puStack_150;
  code *pcStack_148;
  code **ppcStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  code ***pppcStack_f0;
  byte *pbStack_98;
  code **ppcStack_90;
  code *pcStack_88;
  ulonglong *puStack_80;
  code *pcStack_78;
  code *pcStack_70;
  ulonglong uStack_68;
  code **ppcStack_60;
  ulonglong uStack_58;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbStack_98 = (byte *)param_3[1];
  uStack_49 = 1;
  pcStack_88 = param_2;
  puStack_80 = param_3;
  pdb_140c8dc00(&uStack_320,pbStack_98,param_3[2]);
  if (SBORROW8(0,(longlong)uStack_320)) {
    uStack_49 = 1;
    pcStack_148 = param_2;
    uVar6 = pdb_1400af0a0(param_4 + 0x88,&pcStack_148);
    uStack_49 = 1;
    pdb_140caa210(param_4 + 0x68,uVar6,&pcStack_148);
    ppcStack_278 = (code **)*puStack_80;
    pcStack_270 = (code *)puStack_80[1];
    puStack_268 = (undefined4 *)puStack_80[2];
    pcStack_260 = (code *)puStack_80[3];
    uStack_49 = 0;
    pdb_140d94b80(&pcStack_148,&ppcStack_278,1,param_2);
    if ((int)pcStack_148 == 2) {
      pcStack_148 = (code *)0x8000000000000001;
      uStack_49 = 0;
      pdb_140bd80b0(param_4,param_2,&pcStack_148);
      *param_1 = 2;
      return param_1;
    }
    pub_142e32760(&uStack_3d8,&pcStack_148,0xb0);
    pcStack_148 = (code *)0x0;
    ppcStack_140 = (code **)0x8;
    lStack_138 = 0;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    uStack_4a = 1;
    pdb_1417b9370(&ppcStack_278,param_4 + 0x38,param_2,&pcStack_148);
    if ((!SBORROW8(0,(longlong)ppcStack_278)) && (ppcStack_278 != (code **)0x0)) {
      pub_1406abac0((byte *)pcStack_270,(longlong)ppcStack_278 << 3,8);
    }
    uStack_4a = 1;
    pdb_140bd8210(param_4,param_2);
    uStack_4a = 1;
    pdb_140f60be0(&uStack_160,apuStack_3c8);
    pdb_14007ee60();
    ppcVar7 = (code **)pub_1406abab0(0xb0,8);
    uStack_4b = ppcVar7 == (code **)0x0;
    if ((bool)uStack_4b) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0xb0);
    }
    pub_142e32760(ppcVar7,&uStack_3d8,0xb0);
    pcStack_148 = (code *)0x1;
    lStack_138 = 1;
    ppcStack_140 = ppcVar7;
    pdb_140d93170(&ppcStack_278,&pcStack_148);
    pcVar11 = pcStack_270;
    ppcStack_60 = ppcStack_278;
    lVar10 = (longlong)puStack_268 * 0xb0;
    pcStack_70 = pcStack_270;
    if (puStack_268 == (undefined4 *)0x0) {
      ppcStack_278 = (code **)0x2;
      pcStack_78 = pcStack_270;
    }
    else {
      pcVar1 = pcStack_270 + 0xb0;
      pub_142e32760(&ppcStack_278,pcStack_270,0xb0);
      pcStack_78 = pcVar1;
    }
    uStack_68 = ((ulonglong)(pcVar11 + (lVar10 - (longlong)pcStack_78)) >> 4) * 0x2e8ba2e8ba2e8ba3;
    uStack_58 = 0;
    pcVar11 = pcStack_78;
    while (uStack_68 != uStack_58) {
      uStack_58 = uStack_58 + 1;
      pdb_1404b3c90(pcVar11);
      pcVar11 = pcVar11 + 0xb0;
    }
    if (ppcStack_60 != (code **)0x0) {
      pub_1406abac0((byte *)pcStack_70,(longlong)ppcStack_60 * 0xb0,8);
    }
    if ((int)ppcStack_278 == 2) {
      pdb_140d8ead0(&pcStack_148);
      pbVar2 = pbStack_158;
      uStack_58 = lStack_138 * 0xb0;
      ppcVar7 = ppcStack_140 + lStack_138 * 0x16;
      ppcStack_180 = ppcStack_140;
      pcStack_170 = pcStack_148;
      ppcStack_178 = ppcStack_140;
      ppcVar8 = ppcStack_140;
      ppcStack_168 = ppcVar7;
      if (lStack_138 != 0) {
        pcStack_78 = pcStack_148;
        ppcStack_90 = ppcStack_140;
        ppcVar12 = ppcStack_140;
        ppcVar9 = ppcStack_140;
LAB_1409d6620:
        uStack_58 = uStack_58 - 0xb0;
        ppcVar9 = ppcVar9 + 0x16;
        pub_142e32760(&pcStack_148,ppcVar12,0xb0);
        ppcStack_178 = ppcVar12 + 0x16;
        ppcStack_60 = ppcStack_178;
        if (((puStack_128 != puStack_150) ||
            (iVar5 = pub_142e32750(uStack_130,pbVar2,puStack_150), iVar5 != 0)) ||
           (pcStack_148 != (code *)0x0)) goto LAB_1409d6673;
        pub_142e32760(&uStack_320,ppcVar12 + 1,0xa8);
        pub_142e32760(&ppcStack_140,&uStack_320,0xa8);
        puVar3 = puStack_f8;
        uVar6 = uStack_100;
        pcStack_148 = (code *)0x0;
        lVar10 = pdb_140c8a840(uStack_100,puStack_f8);
        if (lVar10 == 0) {
          if (1 < *_DAT_143ca8e90) {
            pdb_141b1e240(&uStack_1a0,uVar6,puVar3,2);
            puStack_310 = &uStack_120;
            uStack_320 = &pcStack_88;
            uStack_318 = pdb_140c91ab0;
            pcStack_308 = pdb_140094770;
            pcStack_2f8 = pdb_140f58250;
            puStack_2f0 = &uStack_160;
            pcStack_2e8 = pdb_1409d82e0;
            puStack_1c8 = &UNK_14302f0c8;
            uStack_1c0 = 0x2b;
            puStack_1b8 = &UNK_14302f0c8;
            uStack_1b0 = 0x2b;
            puStack_1a8 = &UNK_14302f0b0;
            puStack_300 = &uStack_1a0;
            pdb_1400c9be0(&UNK_14302ef5e,&uStack_320,2,&puStack_1c8);
            if (uStack_1a0 != 0) {
              pub_1406abac0(pbStack_198,uStack_1a0,1);
            }
          }
          pdb_1404b3c90(&pcStack_148);
          uStack_68 = ((ulonglong)((longlong)ppcVar7 - (longlong)ppcStack_60) >> 4) *
                      0x2e8ba2e8ba2e8ba3;
          pcVar11 = (code *)(uStack_58 / 0xb0);
          pcStack_70 = (code *)0x0;
          while (ppcVar7 = ppcStack_90, pcVar1 = pcStack_78, pcVar11 != pcStack_70) {
            pcStack_70 = pcStack_70 + 1;
            pdb_1404b3c90(ppcVar9);
            ppcVar9 = ppcVar9 + 0x16;
          }
          goto joined_r0x0001409d698c;
        }
        pdb_1404b3c90(&pcStack_148);
        ppcVar8 = ppcStack_60;
      }
LAB_1409d66ad:
      uStack_68 = ((ulonglong)((longlong)ppcVar7 - (longlong)ppcVar8) >> 4) * 0x2e8ba2e8ba2e8ba3;
      uStack_58 = 0;
      ppcStack_60 = ppcVar8;
      while (ppcVar7 = ppcStack_180, pcVar1 = pcStack_170, uStack_68 != uStack_58) {
        uStack_58 = uStack_58 + 1;
        pdb_1404b3c90(ppcVar8);
        ppcVar8 = ppcVar8 + 0x16;
      }
joined_r0x0001409d698c:
      if (pcVar1 != (code *)0x0) {
        pub_1406abac0((byte *)ppcVar7,(longlong)pcVar1 * 0xb0,8);
      }
    }
    pub_142e32760(param_1,&ppcStack_278,0xb0);
  }
  else {
    apuStack_3c8[0] = puStack_310;
    uStack_3d8 = (undefined4)uStack_320;
    uStack_3d4 = uStack_320._4_4_;
    uStack_3d0 = (undefined4)uStack_318;
    uStack_3cc = uStack_318._4_4_;
    cVar4 = pdb_1403b05d0(param_4 + 0x68,param_2);
    if (cVar4 == '\0') {
      ppcStack_140 = (code **)pub_142e32030();
      pcVar11 = (code *)*param_5;
      LOCK();
      lVar10 = *(longlong *)pcVar11;
      *(longlong *)pcVar11 = *(longlong *)pcVar11 + 1;
      UNLOCK();
      if (*(longlong *)pcVar11 == 0 || SCARRY8(lVar10,1) != *(longlong *)pcVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      pcStack_148 = pcVar11;
      pub_142e32040(ppcStack_140,param_2,1);
      LOCK();
      *(longlong *)pcVar11 = *(longlong *)pcVar11 + -1;
      UNLOCK();
      if (*(longlong *)pcVar11 == 0) {
        pdb_140cb1c10(&pcStack_148);
      }
      if (*_DAT_143ca8e90 != 0) {
        ppcStack_278 = &pcStack_88;
        pcStack_270 = pdb_140c91ab0;
        puStack_268 = &uStack_3d8;
        pcStack_260 = pdb_140001020;
        pcStack_148 = (code *)0x0;
        ppcStack_140 = (code **)&UNK_14302f0c8;
        lStack_138 = 0x2b;
        uStack_130 = 0;
        puStack_128 = &UNK_14302f077;
        uStack_120 = 0x36;
        uStack_118 = 1;
        puStack_110 = &UNK_14302f0c8;
        uStack_108 = 0x2b;
        uStack_100 = 0x6200000001;
        puStack_f8 = &UNK_14302f13c;
        pppcStack_f0 = &ppcStack_278;
        pdb_140f332f0(&uStack_4c,&pcStack_148);
      }
      pdb_140bd8210(param_4,param_2);
    }
    else {
      if (*_DAT_143ca8e90 != 0) {
        ppcStack_278 = &pcStack_88;
        pcStack_270 = pdb_140c91ab0;
        puStack_268 = &uStack_3d8;
        pcStack_260 = pdb_140001020;
        pcStack_148 = (code *)0x0;
        ppcStack_140 = (code **)&UNK_14302f0c8;
        lStack_138 = 0x2b;
        uStack_130 = 0;
        puStack_128 = &UNK_14302f077;
        uStack_120 = 0x36;
        uStack_118 = 1;
        puStack_110 = &UNK_14302f0c8;
        uStack_108 = 0x2b;
        uStack_100 = 0x6800000001;
        puStack_f8 = &UNK_14302f0f3;
        pppcStack_f0 = &ppcStack_278;
        pdb_140f332f0(&uStack_4c,&pcStack_148);
      }
      pcStack_148 = (code *)0x8000000000000000;
      pdb_140bd80b0(param_4,param_2,&pcStack_148);
    }
    *param_1 = 2;
    if (CONCAT44(uStack_3d4,uStack_3d8) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_3cc,uStack_3d0),CONCAT44(uStack_3d4,uStack_3d8),1);
    }
    uStack_160 = *puStack_80;
    pbStack_158 = pbStack_98;
  }
  if (uStack_160 != 0) {
    pub_1406abac0(pbStack_158,uStack_160,1);
  }
  return param_1;
LAB_1409d6673:
  pdb_1404b3c90(&pcStack_148);
  ppcVar8 = ppcVar7;
  ppcVar12 = ppcStack_60;
  if (ppcStack_60 == ppcVar7) goto LAB_1409d66ad;
  goto LAB_1409d6620;
}

