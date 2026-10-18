// VA 0x141715e10, PDB extent 2961 bytes
// turbosloth::asset::AssetRequest::build<asset::texture::SourceImageAsset,turbosloth::asset::BuildContext>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::AssetRequest::build<asset::texture::SourceImageAsset,turbosloth::asset::BuildContext>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 2961 */

byte * pdb_141715e10(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint *puVar10;
  longlong lVar11;
  byte bVar12;
  char cVar13;
  uint *puVar14;
  byte *pbVar15;
  longlong lVar16;
  undefined *puVar17;
  uint *puStack_488;
  uint *puStack_480;
  longlong lStack_478;
  uint *puStack_470;
  longlong lStack_468;
  longlong *plStack_460;
  uint *puStack_458;
  longlong lStack_450;
  uint *puStack_448;
  undefined8 uStack_440;
  longlong *plStack_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  uint *puStack_418;
  longlong lStack_410;
  longlong lStack_408;
  longlong lStack_400;
  uint *puStack_3e0;
  longlong lStack_3d8;
  undefined1 uStack_3ce;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined8 uStack_300;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong *plStack_58;
  undefined8 uStack_48;
  
  plStack_58 = &lStack_478;
  uStack_48 = 0xfffffffffffffffe;
  pdb_141748820(&lStack_468);
  puVar14 = (uint *)(param_1 + 6);
  uVar4 = *(uint *)(param_1 + 6);
  if (uVar4 < 0x3ffffffe) {
    LOCK();
    uVar2 = *puVar14;
    if (uVar4 == uVar2) {
      *puVar14 = uVar4 + 1;
    }
    UNLOCK();
    if (uVar4 != uVar2) goto LAB_14171633a;
  }
  else {
LAB_14171633a:
    pdb_142dc6cb0(puVar14);
  }
  plVar1 = param_1 + 8;
  if ((char)param_1[7] != '\0') {
    uStack_380 = (uint *)plVar1;
    uStack_378 = puVar14;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_380,&UNK_14332b900,&UNK_14332acb0);
  }
  puStack_488 = (uint *)*plVar1;
  if (puStack_488 != (uint *)0x0) {
    LOCK();
    lVar16 = *(longlong *)puStack_488;
    *(longlong *)puStack_488 = *(longlong *)puStack_488 + 1;
    UNLOCK();
    if (*(longlong *)puStack_488 == 0 || SCARRY8(lVar16,1) != *(longlong *)puStack_488 < 0)
    goto LAB_141716459;
  }
  LOCK();
  uVar4 = *puVar14;
  *puVar14 = *puVar14 - 1;
  UNLOCK();
  puStack_480 = puStack_488;
  if (SBORROW4(0,uVar4 - 1 & 0xbfffffff)) {
    pdb_142dc6fa0(puVar14);
  }
  if (puStack_488 == (uint *)0x0) {
    LOCK();
    uVar4 = *puVar14;
    if (uVar4 == 0) {
      *puVar14 = 0x3fffffff;
    }
    UNLOCK();
    if (uVar4 != 0) {
      pdb_142dc6e70(puVar14);
    }
    puVar9 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      bVar12 = 0;
      cVar13 = (char)param_1[7];
    }
    else {
      bVar12 = pdb_142dc79e0();
      bVar12 = bVar12 ^ 1;
      cVar13 = (char)param_1[7];
    }
    if (cVar13 != '\0') {
      uVar8 = (ulonglong)uStack_378 >> 8;
      uStack_378 = (uint *)CONCAT71((int7)uVar8,bVar12);
      uStack_380 = puVar14;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_380,&UNK_14332b8b0,&UNK_14332acc8);
    }
    uVar8 = (ulonglong)lStack_410 >> 8;
    lStack_410 = CONCAT71((int7)uVar8,bVar12);
    puStack_488 = (uint *)*plVar1;
    puStack_418 = puVar14;
    if (puStack_488 == (uint *)0x0) {
      lVar16 = param_1[1];
      uStack_380 = (uint *)(**(code **)(lVar16 + 0x28))
                                     ((*(longlong *)(lVar16 + 0x10) - 1U & 0xfffffffffffffff0) +
                                      *param_1 + 0x10);
      uStack_370 = param_1[4];
      uStack_368 = param_1[5];
      uStack_430 = _DAT_14332b488;
      uStack_42c = _UNK_14332b48c;
      uStack_428 = _UNK_14332b490;
      uStack_424 = _UNK_14332b494;
      uStack_378 = (uint *)lVar16;
      puStack_470 = (uint *)pdb_1417f8250(lStack_468 + 0x10,&uStack_430,uStack_370,uStack_368,
                                          &uStack_380);
      LOCK();
      lVar16 = *(longlong *)puStack_470;
      *(longlong *)puStack_470 = *(longlong *)puStack_470 + 1;
      UNLOCK();
      puStack_448 = puStack_470;
      if (*(longlong *)puStack_470 == 0 || SCARRY8(lVar16,1) != *(longlong *)puStack_470 < 0)
      goto LAB_141716459;
      plVar5 = (longlong *)*plVar1;
      plStack_438 = plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          pdb_140dd76c0(param_1 + 8);
        }
      }
      param_1[8] = (longlong)puStack_470;
      puStack_488 = puStack_448;
    }
    else {
      LOCK();
      lVar16 = *(longlong *)puStack_488;
      *(longlong *)puStack_488 = *(longlong *)puStack_488 + 1;
      UNLOCK();
      if (*(longlong *)puStack_488 == 0 || SCARRY8(lVar16,1) != *(longlong *)puStack_488 < 0)
      goto LAB_141716459;
    }
    if (((bVar12 == 0) && ((*puVar9 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = pdb_142dc79e0(), cVar13 == '\0')) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    LOCK();
    uVar4 = *puVar14;
    *puVar14 = *puVar14 + 0xc0000001;
    UNLOCK();
    if (0x3fffffff < uVar4 + 0xc0000001) {
      pdb_142dc6fa0(puVar14);
    }
  }
  pdb_141747230(&lStack_468);
  lVar16 = param_1[2];
  lVar6 = param_1[3];
  if (puStack_458 == (uint *)0x0) {
    puVar14 = (uint *)0x0;
  }
  else {
    LOCK();
    lVar3 = *(longlong *)puStack_458;
    *(longlong *)puStack_458 = *(longlong *)puStack_458 + 1;
    UNLOCK();
    puVar14 = puStack_458;
    if (*(longlong *)puStack_458 == 0 || SCARRY8(lVar3,1) != *(longlong *)puStack_458 < 0)
    goto LAB_141716459;
  }
  puStack_3e0 = puStack_488;
  lStack_3d8 = lStack_468;
  lStack_410 = lStack_450;
  uStack_3ce = 0;
  puStack_418 = puVar14;
  lStack_408 = lVar16;
  lStack_400 = lVar6;
  if (puStack_458 == (uint *)0x0) {
    pub_142e32760(&uStack_380,&puStack_418,0x98);
    pdb_14007ee60();
    pbVar15 = pub_1406abab0(0x98,8);
    if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x98);
    }
    pub_142e32760(pbVar15,&puStack_418,0x98);
    puVar17 = &UNK_14332ade0;
  }
  else {
    puStack_480 = puStack_458;
    lStack_478 = lStack_450;
    uStack_380 = (uint *)0x1;
    uStack_378 = (uint *)0x1;
    uStack_300 = 0;
    uStack_2d8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 1;
    uStack_e0 = 1;
    pdb_14007ee60();
    puVar14 = (uint *)pub_1406abab0(0x300,0x80);
    puStack_470 = (uint *)CONCAT71(puStack_470._1_7_,puVar14 == (uint *)0x0);
    if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x80,0x300);
    }
    pub_142e32760(puVar14,&uStack_380,0x300);
    lVar11 = lStack_478;
    puVar10 = puStack_480;
    LOCK();
    lVar3 = *(longlong *)puVar14;
    *(longlong *)puVar14 = *(longlong *)puVar14 + 1;
    UNLOCK();
    if (*(longlong *)puVar14 == 0 || SCARRY8(lVar3,1) != *(longlong *)puVar14 < 0) {
LAB_141716459:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uStack_440 = 0;
    puStack_448 = puVar14;
    uStack_380 = puVar14;
    pub_142e32760(&uStack_378,&puStack_418,0x98);
    uStack_2e0 = 0;
    pdb_14007ee60();
    pbVar15 = pub_1406abab0(0x148,8);
    if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x148);
    }
    lVar3 = *(longlong *)(lVar11 + 0x10);
    pub_142e32760(pbVar15,&uStack_380,0x148);
    (**(code **)(lVar11 + 0x28))
              ((longlong)puVar10 + (lVar3 - 1U & 0xfffffffffffffff0) + 0x10,pbVar15,&UNK_14332ada0);
    uStack_378 = (uint *)0x0;
    uStack_350 = 0;
    uStack_380 = puVar14;
    uStack_370 = lVar16;
    uStack_368 = lVar6;
    pdb_14007ee60();
    pbVar15 = pub_1406abab0(0x38,8);
    if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x38);
    }
    *(ulonglong *)(pbVar15 + 0x30) = CONCAT71(uStack_34f,uStack_350);
    *(undefined4 *)(pbVar15 + 0x20) = uStack_360;
    *(undefined4 *)(pbVar15 + 0x24) = uStack_35c;
    *(undefined4 *)(pbVar15 + 0x28) = uStack_358;
    *(undefined4 *)(pbVar15 + 0x2c) = uStack_354;
    *(undefined4 *)(pbVar15 + 0x10) = (undefined4)uStack_370;
    *(undefined4 *)(pbVar15 + 0x14) = uStack_370._4_4_;
    *(undefined4 *)(pbVar15 + 0x18) = (undefined4)uStack_368;
    *(undefined4 *)(pbVar15 + 0x1c) = uStack_368._4_4_;
    *(undefined4 *)pbVar15 = (undefined4)uStack_380;
    *(undefined4 *)(pbVar15 + 4) = uStack_380._4_4_;
    *(undefined4 *)(pbVar15 + 8) = (undefined4)uStack_378;
    *(undefined4 *)(pbVar15 + 0xc) = uStack_378._4_4_;
    LOCK();
    *(longlong *)puStack_480 = *(longlong *)puStack_480 + -1;
    UNLOCK();
    if (*(longlong *)puStack_480 == 0) {
      pdb_140c7a240(&puStack_480);
    }
    puVar17 = &UNK_14332adc0;
  }
  if (plStack_460 != (longlong *)0x0) {
    LOCK();
    *plStack_460 = *plStack_460 + -1;
    UNLOCK();
    if (*plStack_460 == 0) {
      pdb_140dd7630(&plStack_460,puVar17);
    }
  }
  return pbVar15;
}

