// VA 0x140cb6c60, PDB extent 1896 bytes
// tg_text::TextRenderer::upload_pending_glyphs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_text::TextRenderer::upload_pending_glyphs
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 1896 */

void pdb_140cb6c60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  byte *arg0;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong arg1;
  ulonglong arg1_00;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined2 *puStack_358;
  code *pcStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined2 **ppuStack_310;
  undefined1 auStack_c8 [16];
  undefined8 *puStack_b8;
  undefined2 *puStack_b0;
  code *pcStack_a8;
  undefined2 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  uint uStack_54;
  byte *pbStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  code *pcStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x4c0) == '\0') {
    if (*(longlong *)(param_1 + 0x458) != 0) {
      pdb_140f33350(auStack_c8);
      uStack_368 = *(undefined2 **)(param_1 + 0x450);
      uStack_360 = (code *)(*(longlong *)(param_1 + 0x458) * 0x40 + (longlong)uStack_368);
      puStack_358 = (undefined2 *)auStack_c8;
      pdb_141cc0d00(&uStack_58,&uStack_368);
      pcStack_38 = (code *)pbStack_50;
      pdb_140e660d0(&puStack_b0,param_2,param_1 + 0x460,pbStack_50,CONCAT71(uStack_47,uStack_48),
                    0x23);
      if ((int)puStack_b0 != 0xb) {
        uStack_328 = uStack_70;
        uStack_320 = uStack_68;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14307a90f,0x11,&uStack_368,&UNK_14307a6b0,&UNK_14307a920);
      }
      lVar10 = *(longlong *)(param_1 + 0x458);
      *(undefined8 *)(param_1 + 0x458) = 0;
      if (lVar10 != 0) {
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x450) + 8);
        do {
          if (puVar11[-1] != 0) {
            pub_1406abac0((byte *)*puVar11,puVar11[-1],1);
          }
          puVar11 = puVar11 + 8;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      puVar11 = _DAT_143ca8ec8;
      if (CONCAT44(uStack_54,uStack_58) != 0) {
        pub_1406abac0((byte *)pcStack_38,CONCAT44(uStack_54,uStack_58) * 0x30,8);
        puVar11 = _DAT_143ca8ec8;
      }
      while (puVar5 = _DAT_143ca8ec8, bVar3 = puStack_b8 != _DAT_143ca8ec8, _DAT_143ca8ec8 = puVar11
            , bVar3) {
        puVar2 = (undefined8 *)puStack_b8[3];
        pub_1406abac0((byte *)*puStack_b8,puStack_b8[2],puStack_b8[1]);
        puVar11 = _DAT_143ca8ec8;
        puStack_b8 = puVar2;
        _DAT_143ca8ec8 = puVar5;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4c0) = 0;
    lVar10 = param_1 + 0x460;
    lVar6 = pdb_140e17390(lVar10);
    iVar1 = *(int *)(lVar6 + 0x84);
    uVar9 = iVar1 * 2;
    uStack_3a = (undefined2)uVar9;
    if (2 < *_DAT_143ca8e90) {
      puStack_b0 = &uStack_3a;
      pcStack_a8 = pdb_140f71140;
      pcStack_98 = pdb_140f71140;
      uStack_368 = (undefined2 *)0x0;
      uStack_360 = (code *)&UNK_14307a908;
      puStack_358 = (undefined2 *)0x7;
      pcStack_350 = (code *)0x0;
      puStack_348 = &UNK_14307a8a7;
      uStack_340 = 0x19;
      uStack_338 = 3;
      puStack_330 = &UNK_14307a908;
      uStack_328 = 7;
      uStack_320 = 0xed00000001;
      puStack_318 = &UNK_14307a938;
      ppuStack_310 = &puStack_b0;
      puStack_a0 = puStack_b0;
      pdb_140f332f0(&uStack_3b,&uStack_368);
    }
    uVar9 = uVar9 & 0xffff;
    uStack_54 = iVar1 << 0x11 | uVar9;
    uStack_58 = 0;
    pbStack_50 = (byte *)0x12b010c00010001;
    uStack_48 = 2;
    uStack_368 = (undefined2 *)0x1;
    pdb_141cc5340(&puStack_b0,param_2,&UNK_14307a95d,0xb,&uStack_58,&uStack_368);
    if ((int)puStack_b0 != 0xb) {
      uStack_328 = uStack_70;
      uStack_320 = uStack_68;
      puStack_358 = puStack_a0;
      pcStack_350 = pcStack_98;
      uStack_368 = puStack_b0;
      uStack_360 = pcStack_a8;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14307a968,0x1a,&uStack_368,&UNK_14307a6b0,&UNK_14307a988);
    }
    pcStack_38 = pcStack_a8;
    lStack_60 = lVar10;
    pdb_141cbcc10(lVar10);
    *(code **)(param_1 + 0x460) = pcStack_38;
    pdb_140cbee60(&uStack_368);
    pcStack_38 = (code *)(param_1 + 0x110);
    pdb_141cbc9d0();
    pub_142e32760(param_1 + 0x110,&uStack_368,0x298);
    pdb_141cc47e0(&uStack_368,uVar9,uVar9);
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      pub_1406abac0(*(byte **)(param_1 + 0x3b0),*(longlong *)(param_1 + 0x3a8) * 0xe,2);
    }
    if (*(longlong *)(param_1 + 0x3c0) != 0) {
      pub_1406abac0(*(byte **)(param_1 + 0x3c8),*(longlong *)(param_1 + 0x3c0) * 0xe,2);
    }
    *(undefined8 *)(param_1 + 1000) = uStack_328;
    *(undefined8 *)(param_1 + 0x3f0) = uStack_320;
    *(undefined8 *)(param_1 + 0x3d8) = uStack_338;
    *(undefined **)(param_1 + 0x3e0) = puStack_330;
    *(undefined **)(param_1 + 0x3c8) = puStack_348;
    *(undefined8 *)(param_1 + 0x3d0) = uStack_340;
    *(undefined2 **)(param_1 + 0x3b8) = puStack_358;
    *(code **)(param_1 + 0x3c0) = pcStack_350;
    *(undefined4 *)(param_1 + 0x3a8) = (undefined4)uStack_368;
    *(undefined4 *)(param_1 + 0x3ac) = uStack_368._4_4_;
    *(undefined4 *)(param_1 + 0x3b0) = (undefined4)uStack_360;
    *(undefined4 *)(param_1 + 0x3b4) = uStack_360._4_4_;
    arg1 = 0;
    if (*(longlong *)(param_1 + 0x3f8) != 0) {
      arg1 = *(longlong *)(param_1 + 0x3f8) << 3;
      pub_1406abac0(*(byte **)(param_1 + 0x400),arg1,4);
    }
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x400) = 4;
    *(undefined8 *)(param_1 + 0x408) = 0;
    plVar7 = (longlong *)pdb_140f3bda0();
    if ((char)plVar7[2] == '\x01') {
      lVar10 = *plVar7;
      arg1 = plVar7[1];
    }
    else {
      lVar10 = pdb_140f4fd10();
      *plVar7 = lVar10;
      plVar7[1] = arg1;
      *(undefined1 *)(plVar7 + 2) = 1;
    }
    *plVar7 = lVar10 + 1;
    lVar6 = *(longlong *)(param_1 + 0x470);
    if (lVar6 != 0) {
      uVar8 = lVar6 * 0x24 + 0x33U & 0xfffffffffffffff0;
      arg1_00 = lVar6 + uVar8 + 0x11;
      if (arg1_00 != 0) {
        pub_1406abac0((byte *)(*(longlong *)(param_1 + 0x468) - uVar8),arg1_00,0x10);
      }
    }
    uVar4 = _UNK_14307a6a8;
    *(undefined8 *)(param_1 + 0x478) = _DAT_14307a6a0;
    *(undefined8 *)(param_1 + 0x480) = uVar4;
    uVar4 = _UNK_14307a698;
    *(longlong *)(param_1 + 0x468) = _DAT_14307a690;
    *(undefined8 *)(param_1 + 0x470) = uVar4;
    *(longlong *)(param_1 + 0x488) = lVar10;
    *(ulonglong *)(param_1 + 0x490) = arg1;
    arg0 = *(byte **)(param_1 + 0x450);
    lVar10 = *(longlong *)(param_1 + 0x458);
    if (lVar10 != 0) {
      pbVar12 = arg0 + 8;
      do {
        if (*(ulonglong *)(pbVar12 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar12,*(ulonglong *)(pbVar12 + -8),1);
        }
        pbVar12 = pbVar12 + 0x40;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (*(longlong *)(param_1 + 0x448) != 0) {
      pub_1406abac0(arg0,*(longlong *)(param_1 + 0x448) << 6,8);
    }
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined8 *)(param_1 + 0x450) = 8;
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x4b4);
  }
  return;
}

