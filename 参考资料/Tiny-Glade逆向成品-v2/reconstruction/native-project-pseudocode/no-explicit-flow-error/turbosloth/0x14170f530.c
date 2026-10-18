// VA 0x14170f530, PDB extent 4289 bytes
// turbosloth::asset::BuildContext::store_asset<asset_pipe::texture::TextureAssetList>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x00014170f745) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::store_asset<asset_pipe::texture::TextureAssetList>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 4289 */

byte * pdb_14170f530(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  uint *puVar7;
  byte bVar8;
  char cVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  bool bVar18;
  undefined1 uStack_4f8;
  undefined1 uStack_4f7;
  undefined1 uStack_4f6;
  undefined1 uStack_4f5;
  undefined1 uStack_4f4;
  undefined1 uStack_4f3;
  undefined1 uStack_4f2;
  undefined1 uStack_4f1;
  uint *puStack_4f0;
  uint *puStack_4e8;
  longlong lStack_4e0;
  uint *puStack_4d8;
  byte *pbStack_4d0;
  undefined *puStack_4c8;
  uint *puStack_4c0;
  undefined8 uStack_4b8;
  uint *puStack_4b0;
  undefined8 uStack_4a8;
  uint uStack_4a0;
  undefined4 uStack_49c;
  char cStack_498;
  uint *apuStack_490 [3];
  longlong lStack_478;
  longlong *plStack_470;
  uint *puStack_468;
  longlong lStack_460;
  uint *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  uint *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  uint *puStack_3f0;
  longlong lStack_3e8;
  undefined1 uStack_3de;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  uint uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 uStack_300;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_58;
  undefined8 uStack_48;
  
  puStack_58 = &uStack_4f8;
  uStack_48 = 0xfffffffffffffffe;
  uStack_430 = param_2[2];
  uStack_440 = *(undefined4 *)param_2;
  uStack_43c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_438 = *(undefined4 *)(param_2 + 1);
  uStack_434 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_4f2 = 1;
  pdb_1417ca880(&uStack_380);
  uVar15 = uStack_430;
  uVar10 = CONCAT44(uStack_434,uStack_438);
  uStack_428 = (uint *)uStack_430;
  uStack_4f6 = 1;
  pdb_1417ca2e0(&uStack_380,&uStack_428,8);
  uStack_4f6 = 1;
  pdb_1409028d0(uVar10,uVar15,&uStack_380);
  uStack_4f6 = 1;
  uVar10 = pdb_1417c9b80(&uStack_380);
  uStack_4f6 = 1;
  uVar16 = 0x4a;
  puVar11 = (uint *)pdb_141747730(&UNK_14332b5f8,0x4a,1,uVar10,uVar15);
  uStack_408 = param_2[2];
  puStack_418 = (uint *)*param_2;
  uStack_410 = param_2[1];
  uStack_428 = (uint *)0x1;
  uStack_420 = 1;
  pdb_14007ee60();
  pbStack_4d0 = pub_1406abab0(0x28,8);
  if (pbStack_4d0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  *(undefined8 *)(pbStack_4d0 + 0x20) = uStack_408;
  *(uint **)(pbStack_4d0 + 0x10) = puStack_418;
  *(undefined8 *)(pbStack_4d0 + 0x18) = uStack_410;
  *(undefined4 *)pbStack_4d0 = (undefined4)uStack_428;
  *(undefined4 *)(pbStack_4d0 + 4) = uStack_428._4_4_;
  *(undefined4 *)(pbStack_4d0 + 8) = (undefined4)uStack_420;
  *(undefined4 *)(pbStack_4d0 + 0xc) = uStack_420._4_4_;
  uStack_4a0 = 0;
  uStack_49c = 0;
  cStack_498 = '\0';
  apuStack_490[0] = (uint *)0x0;
  puStack_4c8 = &UNK_14332abf0;
  puStack_4c0 = (uint *)&UNK_14332b5f8;
  uStack_4b8 = 0x4a;
  puStack_4b0 = puVar11;
  uStack_4a8 = uVar16;
  if (uStack_378 != (uint *)0x0) {
    pub_1406abac0((byte *)uStack_380,(ulonglong)uStack_378,1);
  }
  puVar11 = puStack_4b0;
  uStack_448 = uStack_4a8;
  pdb_141748820(&lStack_478,param_1);
  if (uStack_4a0 < 0x3ffffffe) {
    uStack_4a0 = uStack_4a0 + 1;
    LOCK();
    UNLOCK();
  }
  else {
    uStack_4f7 = 1;
    pdb_142dc6cb0(&uStack_4a0);
  }
  puVar7 = apuStack_490[0];
  if (cStack_498 != '\0') {
    uStack_380 = apuStack_490;
    uStack_378 = &uStack_4a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_380,&UNK_14332b900,&UNK_14332acb0);
  }
  if (apuStack_490[0] != (uint *)0x0) {
    LOCK();
    lVar1 = *(longlong *)apuStack_490[0];
    *(longlong *)apuStack_490[0] = *(longlong *)apuStack_490[0] + 1;
    UNLOCK();
    if (*(longlong *)apuStack_490[0] == 0 || SCARRY8(lVar1,1) != *(longlong *)apuStack_490[0] < 0)
    goto LAB_14170fe68;
  }
  puStack_4e8 = apuStack_490[0];
  LOCK();
  uVar3 = uStack_4a0 - 1;
  UNLOCK();
  uVar14 = uStack_4a0 - 1;
  uStack_4a0 = uVar3;
  if (SBORROW4(0,uVar14 & 0xbfffffff)) {
    pdb_142dc6fa0(&uStack_4a0);
  }
  if (puVar7 == (uint *)0x0) {
    LOCK();
    bVar18 = uStack_4a0 == 0;
    if (bVar18) {
      uStack_4a0 = 0x3fffffff;
    }
    UNLOCK();
    if (!bVar18) {
      pdb_142dc6e70(&uStack_4a0);
    }
    puVar5 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      bVar8 = 0;
      puVar17 = puStack_4c8;
    }
    else {
      bVar8 = pdb_142dc79e0();
      bVar8 = bVar8 ^ 1;
      puVar17 = puStack_4c8;
    }
    puStack_4c8 = puVar17;
    if (cStack_498 != '\0') {
      uVar4 = (ulonglong)uStack_378 >> 8;
      uStack_378 = (uint *)CONCAT71((int7)uVar4,bVar8);
      uStack_380 = (uint **)&uStack_4a0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_380,&UNK_14332b8b0,&UNK_14332acc8);
    }
    uVar4 = (ulonglong)uStack_420 >> 8;
    uStack_420 = CONCAT71((int7)uVar4,bVar8);
    uStack_428 = &uStack_4a0;
    if (apuStack_490[0] == (uint *)0x0) {
      uStack_380 = (uint **)(**(code **)(puVar17 + 0x28))
                                      (pbStack_4d0 +
                                       (*(longlong *)(puVar17 + 0x10) - 1U & 0xfffffffffffffff0) +
                                       0x10);
      uStack_390 = _DAT_14332b4f8;
      uStack_38c = _UNK_14332b4fc;
      uStack_388 = _UNK_14332b500;
      uStack_384 = _UNK_14332b504;
      uStack_368 = uStack_4a8;
      uStack_370 = puStack_4b0;
      uStack_378 = (uint *)puVar17;
      puStack_4d8 = (uint *)pdb_1417f4a60(lStack_478 + 0x10,&uStack_390,puStack_4b0,uStack_4a8,
                                          &uStack_380);
      LOCK();
      lVar1 = *(longlong *)puStack_4d8;
      *(longlong *)puStack_4d8 = *(longlong *)puStack_4d8 + 1;
      UNLOCK();
      puStack_458 = puStack_4d8;
      if (*(longlong *)puStack_4d8 == 0 || SCARRY8(lVar1,1) != *(longlong *)puStack_4d8 < 0)
      goto LAB_14170fe68;
      puVar7 = puStack_4d8;
      puVar12 = puStack_4d8;
      if (apuStack_490[0] != (uint *)0x0) {
        LOCK();
        *(longlong *)apuStack_490[0] = *(longlong *)apuStack_490[0] + -1;
        UNLOCK();
        puVar7 = puStack_4d8;
        puVar12 = puStack_4d8;
        if (*(longlong *)apuStack_490[0] == 0) {
          pdb_140dd76c0(apuStack_490);
          puVar7 = puStack_4d8;
          puVar12 = puStack_458;
        }
      }
    }
    else {
      LOCK();
      lVar1 = *(longlong *)apuStack_490[0];
      *(longlong *)apuStack_490[0] = *(longlong *)apuStack_490[0] + 1;
      UNLOCK();
      puVar7 = apuStack_490[0];
      puVar12 = apuStack_490[0];
      if (*(longlong *)apuStack_490[0] == 0 || SCARRY8(lVar1,1) != *(longlong *)apuStack_490[0] < 0)
      goto LAB_14170fe68;
    }
    puStack_4f0 = puVar12;
    apuStack_490[0] = puVar7;
    if (((bVar8 == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
      cStack_498 = '\x01';
    }
    LOCK();
    uVar3 = uStack_4a0 + 0xc0000001;
    UNLOCK();
    uVar14 = uStack_4a0 + 0xc0000001;
    uStack_4a0 = uVar3;
    if (0x3fffffff < uVar14) {
      pdb_142dc6fa0(&uStack_4a0);
    }
  }
  else {
    puStack_4f0 = puVar7;
  }
  uStack_4f3 = 1;
  pdb_141747230(&lStack_478);
  uVar10 = uStack_4b8;
  puVar7 = puStack_4c0;
  if (puStack_468 == (uint *)0x0) {
    puVar12 = (uint *)0x0;
  }
  else {
    LOCK();
    lVar1 = *(longlong *)puStack_468;
    *(longlong *)puStack_468 = *(longlong *)puStack_468 + 1;
    UNLOCK();
    puVar12 = puStack_468;
    if (*(longlong *)puStack_468 == 0 || SCARRY8(lVar1,1) != *(longlong *)puStack_468 < 0)
    goto LAB_14170fe68;
  }
  puStack_3f0 = puStack_4f0;
  lStack_3e8 = lStack_478;
  uStack_420 = lStack_460;
  puStack_418 = puStack_4c0;
  uStack_410 = uStack_4b8;
  uStack_3de = 0;
  uStack_428 = puVar12;
  if (puStack_468 == (uint *)0x0) {
    pub_142e32760(&uStack_380,&uStack_428,0x98);
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x98,8);
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x98);
    }
    pub_142e32760(pbVar13,&uStack_428,0x98);
    puVar17 = &UNK_14332af60;
  }
  else {
    puStack_4e8 = puStack_468;
    lStack_4e0 = lStack_460;
    uStack_380 = (uint **)0x1;
    uStack_378 = (uint *)0x1;
    uStack_300 = 0;
    uStack_2d8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 1;
    uStack_e0 = 1;
    pdb_14007ee60();
    puVar12 = (uint *)pub_1406abab0(0x300,0x80);
    uStack_4f1 = puVar12 == (uint *)0x0;
    if ((bool)uStack_4f1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x80,0x300);
    }
    puStack_4d8 = puVar11;
    pub_142e32760(puVar12,&uStack_380,0x300);
    lVar6 = lStack_4e0;
    puVar11 = puStack_4e8;
    LOCK();
    lVar1 = *(longlong *)puVar12;
    *(longlong *)puVar12 = *(longlong *)puVar12 + 1;
    UNLOCK();
    if (*(longlong *)puVar12 == 0 || SCARRY8(lVar1,1) != *(longlong *)puVar12 < 0) {
LAB_14170fe68:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uStack_450 = 0;
    puStack_458 = puVar12;
    uStack_380 = (uint **)puVar12;
    pub_142e32760(&uStack_378,&uStack_428,0x98);
    uStack_2e0 = 0;
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x148,8);
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x148);
    }
    lVar1 = *(longlong *)(lVar6 + 0x10);
    pub_142e32760(pbVar13,&uStack_380,0x148);
    uStack_4f5 = 1;
    (**(code **)(lVar6 + 0x28))
              ((byte *)((longlong)puVar11 + (lVar1 - 1U & 0xfffffffffffffff0) + 0x10),pbVar13,
               &UNK_14332af20);
    uStack_378 = (uint *)0x0;
    uStack_370 = puVar7;
    uStack_368 = uVar10;
    uStack_350 = uStack_350 & 0xffffff00;
    uStack_380 = (uint **)puVar12;
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x38,8);
    puVar11 = puStack_4d8;
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x38);
    }
    *(ulonglong *)(pbVar13 + 0x30) = CONCAT44(uStack_34c,uStack_350);
    *(undefined4 *)(pbVar13 + 0x20) = uStack_360;
    *(undefined4 *)(pbVar13 + 0x24) = uStack_35c;
    *(undefined4 *)(pbVar13 + 0x28) = uStack_358;
    *(undefined4 *)(pbVar13 + 0x2c) = uStack_354;
    *(undefined4 *)(pbVar13 + 0x10) = (undefined4)uStack_370;
    *(undefined4 *)(pbVar13 + 0x14) = uStack_370._4_4_;
    *(undefined4 *)(pbVar13 + 0x18) = (undefined4)uStack_368;
    *(undefined4 *)(pbVar13 + 0x1c) = uStack_368._4_4_;
    *(undefined4 *)pbVar13 = (undefined4)uStack_380;
    *(undefined4 *)(pbVar13 + 4) = uStack_380._4_4_;
    *(undefined4 *)(pbVar13 + 8) = (undefined4)uStack_378;
    *(undefined4 *)(pbVar13 + 0xc) = uStack_378._4_4_;
    LOCK();
    *(longlong *)puStack_4e8 = *(longlong *)puStack_4e8 + -1;
    UNLOCK();
    if (*(longlong *)puStack_4e8 == 0) {
      uStack_4f4 = 0;
      pdb_140c7a240(&puStack_4e8);
    }
    puVar17 = &UNK_14332af40;
  }
  if (plStack_470 != (longlong *)0x0) {
    LOCK();
    *plStack_470 = *plStack_470 + -1;
    UNLOCK();
    if (*plStack_470 == 0) {
      pdb_140dd7630(&plStack_470);
    }
  }
  uStack_368 = uStack_448;
  uStack_350 = uStack_350 & 0xffffff00;
  uStack_380 = (uint **)pbVar13;
  uStack_378 = (uint *)puVar17;
  uStack_370 = puVar11;
  pdb_14007ee60();
  pbVar13 = pub_1406abab0(0x40,0x10);
  if (pbVar13 != (byte *)0x0) {
    *(uint *)(pbVar13 + 0x30) = uStack_350;
    *(undefined4 *)(pbVar13 + 0x34) = uStack_34c;
    *(undefined4 *)(pbVar13 + 0x38) = uStack_348;
    *(undefined4 *)(pbVar13 + 0x3c) = uStack_344;
    *(undefined4 *)(pbVar13 + 0x20) = uStack_360;
    *(undefined4 *)(pbVar13 + 0x24) = uStack_35c;
    *(undefined4 *)(pbVar13 + 0x28) = uStack_358;
    *(undefined4 *)(pbVar13 + 0x2c) = uStack_354;
    *(undefined4 *)(pbVar13 + 0x10) = (undefined4)uStack_370;
    *(undefined4 *)(pbVar13 + 0x14) = uStack_370._4_4_;
    *(undefined4 *)(pbVar13 + 0x18) = (undefined4)uStack_368;
    *(undefined4 *)(pbVar13 + 0x1c) = uStack_368._4_4_;
    *(undefined4 *)pbVar13 = (undefined4)uStack_380;
    *(undefined4 *)(pbVar13 + 4) = uStack_380._4_4_;
    *(undefined4 *)(pbVar13 + 8) = (undefined4)uStack_378;
    *(undefined4 *)(pbVar13 + 0xc) = uStack_378._4_4_;
    if (apuStack_490[0] != (uint *)0x0) {
      LOCK();
      *(longlong *)apuStack_490[0] = *(longlong *)apuStack_490[0] + -1;
      UNLOCK();
      if (*(longlong *)apuStack_490[0] == 0) {
        pdb_140dd76c0(apuStack_490);
      }
    }
    LOCK();
    *(longlong *)pbStack_4d0 = *(longlong *)pbStack_4d0 + -1;
    UNLOCK();
    if (*(longlong *)pbStack_4d0 == 0) {
      pdb_140c7a240(&pbStack_4d0);
    }
    return pbVar13;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x40);
}

