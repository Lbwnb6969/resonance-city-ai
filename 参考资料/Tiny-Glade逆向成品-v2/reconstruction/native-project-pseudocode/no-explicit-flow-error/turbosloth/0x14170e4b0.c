// VA 0x14170e4b0, PDB extent 4209 bytes
// turbosloth::asset::BuildContext::store_asset<clutter_pack_pipe::ClutterObjectList>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x00014170e706) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::store_asset<clutter_pack_pipe::ClutterObjectList>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 4209 */

byte * pdb_14170e4b0(undefined8 param_1,undefined8 *param_2)

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
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  bool bVar18;
  uint *puStack_510;
  uint *puStack_508;
  longlong lStack_500;
  uint *puStack_4f8;
  byte *pbStack_4f0;
  undefined *puStack_4e8;
  uint *puStack_4e0;
  undefined8 uStack_4d8;
  uint *puStack_4d0;
  undefined8 uStack_4c8;
  uint uStack_4c0;
  undefined4 uStack_4bc;
  char cStack_4b8;
  uint *apuStack_4b0 [3];
  longlong lStack_498;
  longlong *plStack_490;
  uint *puStack_488;
  longlong lStack_480;
  uint *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  uint *puStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  uint *puStack_428;
  longlong lStack_420;
  undefined1 uStack_416;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
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
  uint **ppuStack_58;
  undefined8 uStack_48;
  
  ppuStack_58 = &puStack_4f8;
  uStack_48 = 0xfffffffffffffffe;
  uStack_3c0 = *(undefined4 *)param_2;
  uStack_3bc = *(undefined4 *)((longlong)param_2 + 4);
  uStack_3b8 = *(undefined4 *)(param_2 + 1);
  uStack_3b4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_3b0 = *(undefined4 *)(param_2 + 2);
  uStack_3ac = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_3a8 = *(undefined4 *)(param_2 + 3);
  uStack_3a4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_3a0 = *(undefined4 *)(param_2 + 4);
  uStack_39c = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_398 = *(undefined4 *)(param_2 + 5);
  uStack_394 = *(undefined4 *)((longlong)param_2 + 0x2c);
  pdb_1417ca880(&uStack_380);
  uVar10 = CONCAT44(uStack_3a4,uStack_3a8);
  uVar16 = CONCAT44(uStack_39c,uStack_3a0);
  uStack_460 = (uint *)uVar16;
  pdb_1417ca2e0(&uStack_380,&uStack_460,8);
  pdb_1424e6ee0(uVar10,uVar16,&uStack_380);
  uStack_460 = (uint *)CONCAT44(uStack_3bc,uStack_3c0);
  uStack_458 = CONCAT44(uStack_3b4,uStack_3b8);
  puVar15 = &uStack_460;
  pdb_1417ca2e0(&uStack_380,puVar15,0x10);
  uVar10 = pdb_1417c9b80(&uStack_380);
  uVar16 = 0x49;
  puVar11 = (uint *)pdb_141747730(&UNK_14332b744,0x49,1,uVar10,puVar15);
  puStack_450 = (uint *)*param_2;
  uStack_448 = param_2[1];
  uStack_440 = *(undefined4 *)(param_2 + 2);
  uStack_43c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_438 = *(undefined4 *)(param_2 + 3);
  uStack_434 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_430 = *(undefined4 *)(param_2 + 4);
  uStack_42c = *(undefined4 *)((longlong)param_2 + 0x24);
  puStack_428 = (uint *)param_2[5];
  uStack_460 = (uint *)0x1;
  uStack_458 = 1;
  pdb_14007ee60();
  pbStack_4f0 = pub_1406abab0(0x40,0x10);
  if (pbStack_4f0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x40);
  }
  *(ulonglong *)(pbStack_4f0 + 0x30) = CONCAT44(uStack_42c,uStack_430);
  *(uint **)(pbStack_4f0 + 0x38) = puStack_428;
  *(ulonglong *)(pbStack_4f0 + 0x20) = CONCAT44(uStack_43c,uStack_440);
  *(ulonglong *)(pbStack_4f0 + 0x28) = CONCAT44(uStack_434,uStack_438);
  *(uint **)(pbStack_4f0 + 0x10) = puStack_450;
  *(undefined8 *)(pbStack_4f0 + 0x18) = uStack_448;
  *(undefined4 *)pbStack_4f0 = (undefined4)uStack_460;
  *(undefined4 *)(pbStack_4f0 + 4) = uStack_460._4_4_;
  *(undefined4 *)(pbStack_4f0 + 8) = (undefined4)uStack_458;
  *(undefined4 *)(pbStack_4f0 + 0xc) = uStack_458._4_4_;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  cStack_4b8 = '\0';
  apuStack_4b0[0] = (uint *)0x0;
  puStack_4e8 = &UNK_14332ac30;
  puStack_4e0 = (uint *)&UNK_14332b744;
  uStack_4d8 = 0x49;
  puStack_4d0 = puVar11;
  uStack_4c8 = uVar16;
  if (uStack_378 != (uint *)0x0) {
    pub_1406abac0((byte *)uStack_380,(ulonglong)uStack_378,1);
  }
  puVar11 = puStack_4d0;
  uStack_468 = uStack_4c8;
  pdb_141748820(&lStack_498,param_1);
  if (uStack_4c0 < 0x3ffffffe) {
    uStack_4c0 = uStack_4c0 + 1;
    LOCK();
    UNLOCK();
  }
  else {
    pdb_142dc6cb0(&uStack_4c0);
  }
  puStack_510 = apuStack_4b0[0];
  if (cStack_4b8 != '\0') {
    uStack_380 = apuStack_4b0;
    uStack_378 = &uStack_4c0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_380,&UNK_14332b900,&UNK_14332acb0);
  }
  if (apuStack_4b0[0] != (uint *)0x0) {
    LOCK();
    lVar1 = *(longlong *)apuStack_4b0[0];
    *(longlong *)apuStack_4b0[0] = *(longlong *)apuStack_4b0[0] + 1;
    UNLOCK();
    if (*(longlong *)apuStack_4b0[0] == 0 || SCARRY8(lVar1,1) != *(longlong *)apuStack_4b0[0] < 0)
    goto LAB_14170edfe;
  }
  puStack_508 = apuStack_4b0[0];
  LOCK();
  uVar3 = uStack_4c0 - 1;
  UNLOCK();
  uVar14 = uStack_4c0 - 1;
  uStack_4c0 = uVar3;
  if (SBORROW4(0,uVar14 & 0xbfffffff)) {
    pdb_142dc6fa0(&uStack_4c0);
  }
  if (puStack_510 == (uint *)0x0) {
    LOCK();
    bVar18 = uStack_4c0 == 0;
    if (bVar18) {
      uStack_4c0 = 0x3fffffff;
    }
    UNLOCK();
    if (!bVar18) {
      pdb_142dc6e70(&uStack_4c0);
    }
    puVar5 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      bVar8 = 0;
      puVar17 = puStack_4e8;
    }
    else {
      bVar8 = pdb_142dc79e0();
      bVar8 = bVar8 ^ 1;
      puVar17 = puStack_4e8;
    }
    puStack_4e8 = puVar17;
    if (cStack_4b8 != '\0') {
      uVar4 = (ulonglong)uStack_378 >> 8;
      uStack_378 = (uint *)CONCAT71((int7)uVar4,bVar8);
      uStack_380 = (uint **)&uStack_4c0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_380,&UNK_14332b8b0,&UNK_14332acc8);
    }
    uVar4 = (ulonglong)uStack_458 >> 8;
    uStack_458 = CONCAT71((int7)uVar4,bVar8);
    uStack_460 = &uStack_4c0;
    if (apuStack_4b0[0] == (uint *)0x0) {
      uStack_380 = (uint **)(**(code **)(puVar17 + 0x28))
                                      (pbStack_4f0 +
                                       (*(longlong *)(puVar17 + 0x10) - 1U & 0xfffffffffffffff0) +
                                       0x10);
      uStack_390 = _DAT_14332b4a8;
      uStack_38c = _UNK_14332b4ac;
      uStack_388 = _UNK_14332b4b0;
      uStack_384 = _UNK_14332b4b4;
      uStack_368 = uStack_4c8;
      uStack_370 = puStack_4d0;
      uStack_378 = (uint *)puVar17;
      puStack_4f8 = (uint *)pdb_1417f6bf0(lStack_498 + 0x10,&uStack_390,puStack_4d0,uStack_4c8,
                                          &uStack_380);
      LOCK();
      lVar1 = *(longlong *)puStack_4f8;
      *(longlong *)puStack_4f8 = *(longlong *)puStack_4f8 + 1;
      UNLOCK();
      puStack_478 = puStack_4f8;
      if (*(longlong *)puStack_4f8 == 0 || SCARRY8(lVar1,1) != *(longlong *)puStack_4f8 < 0)
      goto LAB_14170edfe;
      puVar7 = puStack_4f8;
      puStack_510 = puStack_4f8;
      if (apuStack_4b0[0] != (uint *)0x0) {
        LOCK();
        *(longlong *)apuStack_4b0[0] = *(longlong *)apuStack_4b0[0] + -1;
        UNLOCK();
        puVar7 = puStack_4f8;
        if (*(longlong *)apuStack_4b0[0] == 0) {
          pdb_140dd76c0(apuStack_4b0);
          puVar7 = puStack_4f8;
          puStack_510 = puStack_478;
        }
      }
    }
    else {
      LOCK();
      lVar1 = *(longlong *)apuStack_4b0[0];
      *(longlong *)apuStack_4b0[0] = *(longlong *)apuStack_4b0[0] + 1;
      UNLOCK();
      puVar7 = apuStack_4b0[0];
      puStack_510 = apuStack_4b0[0];
      if (*(longlong *)apuStack_4b0[0] == 0 || SCARRY8(lVar1,1) != *(longlong *)apuStack_4b0[0] < 0)
      goto LAB_14170edfe;
    }
    apuStack_4b0[0] = puVar7;
    if (((bVar8 == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
      cStack_4b8 = '\x01';
    }
    LOCK();
    uVar3 = uStack_4c0 + 0xc0000001;
    UNLOCK();
    uVar14 = uStack_4c0 + 0xc0000001;
    uStack_4c0 = uVar3;
    if (0x3fffffff < uVar14) {
      pdb_142dc6fa0(&uStack_4c0);
    }
  }
  else {
  }
  pdb_141747230(&lStack_498);
  uVar10 = uStack_4d8;
  puVar7 = puStack_4e0;
  if (puStack_488 == (uint *)0x0) {
    puVar12 = (uint *)0x0;
  }
  else {
    LOCK();
    lVar1 = *(longlong *)puStack_488;
    *(longlong *)puStack_488 = *(longlong *)puStack_488 + 1;
    UNLOCK();
    puVar12 = puStack_488;
    if (*(longlong *)puStack_488 == 0 || SCARRY8(lVar1,1) != *(longlong *)puStack_488 < 0)
    goto LAB_14170edfe;
  }
  puStack_428 = puStack_510;
  lStack_420 = lStack_498;
  uStack_458 = lStack_480;
  puStack_450 = puStack_4e0;
  uStack_448 = uStack_4d8;
  uStack_416 = 0;
  uStack_460 = puVar12;
  if (puStack_488 == (uint *)0x0) {
    pub_142e32760(&uStack_380,&uStack_460,0x98);
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x98,8);
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x98);
    }
    pub_142e32760(pbVar13,&uStack_460,0x98);
    puVar17 = &UNK_14332ad80;
  }
  else {
    puStack_508 = puStack_488;
    lStack_500 = lStack_480;
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
    if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x80,0x300);
    }
    puStack_4f8 = puVar11;
    pub_142e32760(puVar12,&uStack_380,0x300);
    lVar6 = lStack_500;
    puVar11 = puStack_508;
    LOCK();
    lVar1 = *(longlong *)puVar12;
    *(longlong *)puVar12 = *(longlong *)puVar12 + 1;
    UNLOCK();
    if (*(longlong *)puVar12 == 0 || SCARRY8(lVar1,1) != *(longlong *)puVar12 < 0) {
LAB_14170edfe:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uStack_470 = 0;
    puStack_478 = puVar12;
    uStack_380 = (uint **)puVar12;
    pub_142e32760(&uStack_378,&uStack_460,0x98);
    uStack_2e0 = 0;
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x148,8);
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x148);
    }
    lVar1 = *(longlong *)(lVar6 + 0x10);
    pub_142e32760(pbVar13,&uStack_380,0x148);
    (**(code **)(lVar6 + 0x28))
              ((byte *)((longlong)puVar11 + (lVar1 - 1U & 0xfffffffffffffff0) + 0x10),pbVar13,
               &UNK_14332ad40);
    uStack_378 = (uint *)0x0;
    uStack_370 = puVar7;
    uStack_368 = uVar10;
    uStack_350 = uStack_350 & 0xffffff00;
    uStack_380 = (uint **)puVar12;
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x38,8);
    puVar11 = puStack_4f8;
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
    *(longlong *)puStack_508 = *(longlong *)puStack_508 + -1;
    UNLOCK();
    if (*(longlong *)puStack_508 == 0) {
      pdb_140c7a240(&puStack_508);
    }
    puVar17 = &UNK_14332ad60;
  }
  if (plStack_490 != (longlong *)0x0) {
    LOCK();
    *plStack_490 = *plStack_490 + -1;
    UNLOCK();
    if (*plStack_490 == 0) {
      pdb_140dd7630(&plStack_490);
    }
  }
  uStack_368 = uStack_468;
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
    if (apuStack_4b0[0] != (uint *)0x0) {
      LOCK();
      *(longlong *)apuStack_4b0[0] = *(longlong *)apuStack_4b0[0] + -1;
      UNLOCK();
      if (*(longlong *)apuStack_4b0[0] == 0) {
        pdb_140dd76c0(apuStack_4b0);
      }
    }
    LOCK();
    *(longlong *)pbStack_4f0 = *(longlong *)pbStack_4f0 + -1;
    UNLOCK();
    if (*(longlong *)pbStack_4f0 == 0) {
      pdb_140c7a240(&pbStack_4f0);
    }
    return pbVar13;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x40);
}

