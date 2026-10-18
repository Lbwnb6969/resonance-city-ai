// VA 0x141712d40, PDB extent 4385 bytes
// turbosloth::asset::BuildContext::require<clutter_pack_pipe::ImportClutterGlb>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000141712f2f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::require<clutter_pack_pipe::ImportClutterGlb>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 4385 */

byte * pdb_141712d40(uint *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint *puVar10;
  byte bVar11;
  char cVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint *puVar15;
  uint *puVar16;
  byte *pbVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  bool bVar22;
  undefined1 auStack_4f8 [10];
  undefined1 uStack_4ee;
  undefined1 uStack_4ed;
  undefined1 uStack_4ec;
  undefined1 uStack_4eb;
  undefined1 uStack_4ea;
  undefined1 uStack_4e9;
  uint *puStack_4e8;
  uint *puStack_4e0;
  undefined8 *puStack_4d8;
  uint *puStack_4d0;
  longlong lStack_4c8;
  byte *pbStack_4c0;
  undefined *puStack_4b8;
  uint *puStack_4b0;
  undefined8 uStack_4a8;
  uint *puStack_4a0;
  undefined8 uStack_498;
  uint uStack_490;
  undefined4 uStack_48c;
  char cStack_488;
  uint *apuStack_480 [3];
  undefined8 uStack_468;
  longlong lStack_460;
  longlong *plStack_458;
  uint *puStack_450;
  longlong lStack_448;
  uint *puStack_440;
  undefined8 uStack_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  uint *puStack_418;
  longlong lStack_410;
  uint *puStack_408;
  undefined8 uStack_400;
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
  
  puStack_58 = auStack_4f8;
  uStack_48 = 0xfffffffffffffffe;
  puStack_418 = (uint *)&UNK_14332b68a;
  lStack_410 = 0x23;
  uStack_4ec = 1;
  puStack_4d8 = param_2;
  lVar13 = pdb_142565cc0(&UNK_14332b68a,0x23);
  if (lVar13 == 0) {
    uStack_380 = &puStack_418;
    uStack_378 = pdb_1402ed400;
    uStack_368 = pdb_1402ed400;
    uStack_4ec = 1;
    uStack_370 = uStack_380;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14332a978,&uStack_380,&UNK_14332aa18);
  }
  uStack_4ec = 1;
  pdb_1417ca880(&uStack_380);
  uStack_4eb = 1;
  puVar19 = &uStack_380;
  puStack_4e8 = param_1;
  pdb_1417ce070(puStack_4d8);
  uStack_4eb = 1;
  uVar14 = pdb_1417c9b80(&uStack_380);
  uStack_4eb = 1;
  uVar20 = 0x23;
  puVar15 = (uint *)pdb_141747730(&UNK_14332b68a,0x23,4,uVar14,puVar19);
  puVar19 = puStack_4d8;
  uVar14 = *puStack_4d8;
  uVar1 = puStack_4d8[1];
  pdb_14007ee60();
  pbStack_4c0 = pub_1406abab0(0x30,8);
  if (pbStack_4c0 == (byte *)0x0) {
    puStack_4e8 = (uint *)uVar14;
    uStack_468 = uVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x30);
  }
  pbStack_4c0[0] = 1;
  pbStack_4c0[1] = 0;
  pbStack_4c0[2] = 0;
  pbStack_4c0[3] = 0;
  pbStack_4c0[4] = 0;
  pbStack_4c0[5] = 0;
  pbStack_4c0[6] = 0;
  pbStack_4c0[7] = 0;
  pbStack_4c0[8] = 1;
  pbStack_4c0[9] = 0;
  pbStack_4c0[10] = 0;
  pbStack_4c0[0xb] = 0;
  pbStack_4c0[0xc] = 0;
  pbStack_4c0[0xd] = 0;
  pbStack_4c0[0xe] = 0;
  pbStack_4c0[0xf] = 0;
  *(undefined8 *)(pbStack_4c0 + 0x10) = uVar14;
  *(undefined8 *)(pbStack_4c0 + 0x18) = uVar1;
  uVar4 = *(undefined4 *)((longlong)puVar19 + 0x14);
  uVar5 = *(undefined4 *)(puVar19 + 3);
  uVar6 = *(undefined4 *)((longlong)puVar19 + 0x1c);
  *(undefined4 *)(pbStack_4c0 + 0x20) = *(undefined4 *)(puVar19 + 2);
  *(undefined4 *)(pbStack_4c0 + 0x24) = uVar4;
  *(undefined4 *)(pbStack_4c0 + 0x28) = uVar5;
  *(undefined4 *)(pbStack_4c0 + 0x2c) = uVar6;
  uStack_490 = 0;
  uStack_48c = 0;
  cStack_488 = '\0';
  apuStack_480[0] = (uint *)0x0;
  puStack_4b8 = &UNK_14332ab70;
  puStack_4b0 = (uint *)&UNK_14332b68a;
  uStack_4a8 = 0x23;
  puStack_4a0 = puVar15;
  uStack_498 = uVar20;
  if (uStack_378 != (code *)0x0) {
    pub_1406abac0((byte *)uStack_380,(ulonglong)uStack_378,1);
  }
  puVar15 = puStack_4a0;
  puStack_4d8 = (undefined8 *)uStack_498;
  pdb_141748820(&lStack_460,puStack_4e8);
  if (uStack_490 < 0x3ffffffe) {
    uStack_490 = uStack_490 + 1;
    LOCK();
    UNLOCK();
  }
  else {
    uStack_4ee = 1;
    pdb_142dc6cb0(&uStack_490);
  }
  puVar10 = apuStack_480[0];
  if (cStack_488 != '\0') {
    uStack_380 = apuStack_480;
    uStack_378 = (code *)&uStack_490;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_380,&UNK_14332b900,&UNK_14332acb0);
  }
  if (apuStack_480[0] != (uint *)0x0) {
    LOCK();
    lVar13 = *(longlong *)apuStack_480[0];
    *(longlong *)apuStack_480[0] = *(longlong *)apuStack_480[0] + 1;
    UNLOCK();
    if (*(longlong *)apuStack_480[0] == 0 || SCARRY8(lVar13,1) != *(longlong *)apuStack_480[0] < 0)
    goto LAB_1417136d1;
  }
  puStack_4d0 = apuStack_480[0];
  LOCK();
  uVar3 = uStack_490 - 1;
  UNLOCK();
  uVar18 = uStack_490 - 1;
  uStack_490 = uVar3;
  if (SBORROW4(0,uVar18 & 0xbfffffff)) {
    pdb_142dc6fa0(&uStack_490);
  }
  if (puVar10 == (uint *)0x0) {
    LOCK();
    bVar22 = uStack_490 == 0;
    if (bVar22) {
      uStack_490 = 0x3fffffff;
    }
    UNLOCK();
    if (!bVar22) {
      pdb_142dc6e70(&uStack_490);
    }
    puVar8 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      bVar11 = 0;
      puVar21 = puStack_4b8;
    }
    else {
      bVar11 = pdb_142dc79e0();
      bVar11 = bVar11 ^ 1;
      puVar21 = puStack_4b8;
    }
    puStack_4b8 = puVar21;
    if (cStack_488 != '\0') {
      uVar7 = (ulonglong)uStack_378 >> 8;
      uStack_378 = (code *)CONCAT71((int7)uVar7,bVar11);
      uStack_380 = (uint **)&uStack_490;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_380,&UNK_14332b8b0,&UNK_14332acc8);
    }
    uVar7 = (ulonglong)lStack_410 >> 8;
    lStack_410 = CONCAT71((int7)uVar7,bVar11);
    puStack_418 = &uStack_490;
    if (apuStack_480[0] == (uint *)0x0) {
      uStack_380 = (uint **)(**(code **)(puVar21 + 0x28))
                                      (pbStack_4c0 +
                                       (*(longlong *)(puVar21 + 0x10) - 1U & 0xfffffffffffffff0) +
                                       0x10);
      uStack_430 = _DAT_14332b498;
      uStack_42c = _UNK_14332b49c;
      uStack_428 = _UNK_14332b4a0;
      uStack_424 = _UNK_14332b4a4;
      uStack_368 = (code *)uStack_498;
      uStack_370 = (uint **)puStack_4a0;
      uStack_378 = (code *)puVar21;
      puStack_4e8 = (uint *)pdb_1417f60c0(lStack_460 + 0x10,&uStack_430,puStack_4a0,uStack_498,
                                          &uStack_380);
      LOCK();
      lVar13 = *(longlong *)puStack_4e8;
      *(longlong *)puStack_4e8 = *(longlong *)puStack_4e8 + 1;
      UNLOCK();
      puStack_440 = puStack_4e8;
      if (*(longlong *)puStack_4e8 == 0 || SCARRY8(lVar13,1) != *(longlong *)puStack_4e8 < 0)
      goto LAB_1417136d1;
      puVar10 = puStack_4e8;
      puVar16 = puStack_4e8;
      if (apuStack_480[0] != (uint *)0x0) {
        LOCK();
        *(longlong *)apuStack_480[0] = *(longlong *)apuStack_480[0] + -1;
        UNLOCK();
        puVar10 = puStack_4e8;
        puVar16 = puStack_4e8;
        if (*(longlong *)apuStack_480[0] == 0) {
          pdb_140dd76c0(apuStack_480);
          puVar10 = puStack_4e8;
          puVar16 = puStack_440;
        }
      }
    }
    else {
      LOCK();
      lVar13 = *(longlong *)apuStack_480[0];
      *(longlong *)apuStack_480[0] = *(longlong *)apuStack_480[0] + 1;
      UNLOCK();
      puVar10 = apuStack_480[0];
      puVar16 = apuStack_480[0];
      if (*(longlong *)apuStack_480[0] == 0 || SCARRY8(lVar13,1) != *(longlong *)apuStack_480[0] < 0
         ) goto LAB_1417136d1;
    }
    puStack_4e0 = puVar16;
    apuStack_480[0] = puVar10;
    if (((bVar11 == 0) && ((*puVar8 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = pdb_142dc79e0(), cVar12 == '\0')) {
      cStack_488 = '\x01';
    }
    LOCK();
    uVar3 = uStack_490 + 0xc0000001;
    UNLOCK();
    uVar18 = uStack_490 + 0xc0000001;
    uStack_490 = uVar3;
    if (0x3fffffff < uVar18) {
      pdb_142dc6fa0(&uStack_490);
    }
  }
  else {
    puStack_4e0 = puVar10;
  }
  uStack_4e9 = 1;
  pdb_141747230(&lStack_460);
  uVar14 = uStack_4a8;
  puVar10 = puStack_4b0;
  if (puStack_450 == (uint *)0x0) {
    puVar16 = (uint *)0x0;
  }
  else {
    LOCK();
    lVar13 = *(longlong *)puStack_450;
    *(longlong *)puStack_450 = *(longlong *)puStack_450 + 1;
    UNLOCK();
    puVar16 = puStack_450;
    if (*(longlong *)puStack_450 == 0 || SCARRY8(lVar13,1) != *(longlong *)puStack_450 < 0)
    goto LAB_1417136d1;
  }
  puStack_3e0 = puStack_4e0;
  lStack_3d8 = lStack_460;
  lStack_410 = lStack_448;
  puStack_408 = puStack_4b0;
  uStack_400 = uStack_4a8;
  uStack_3ce = 0;
  puStack_418 = puVar16;
  if (puStack_450 == (uint *)0x0) {
    pub_142e32760(&uStack_380,&puStack_418,0x98);
    pdb_14007ee60();
    pbVar17 = pub_1406abab0(0x98,8);
    if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x98);
    }
    pub_142e32760(pbVar17,&puStack_418,0x98);
    puVar21 = &UNK_14332afc0;
  }
  else {
    puStack_4d0 = puStack_450;
    lStack_4c8 = lStack_448;
    uStack_380 = (uint **)0x1;
    uStack_378 = (code *)0x1;
    uStack_300 = 0;
    uStack_2d8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 1;
    uStack_e0 = 1;
    pdb_14007ee60();
    puVar16 = (uint *)pub_1406abab0(0x300,0x80);
    uStack_468 = CONCAT71(uStack_468._1_7_,puVar16 == (uint *)0x0);
    if (puVar16 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x80,0x300);
    }
    puStack_4e8 = puVar15;
    pub_142e32760(puVar16,&uStack_380,0x300);
    lVar9 = lStack_4c8;
    puVar15 = puStack_4d0;
    LOCK();
    lVar13 = *(longlong *)puVar16;
    *(longlong *)puVar16 = *(longlong *)puVar16 + 1;
    UNLOCK();
    if (*(longlong *)puVar16 == 0 || SCARRY8(lVar13,1) != *(longlong *)puVar16 < 0) {
LAB_1417136d1:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uStack_438 = 0;
    puStack_440 = puVar16;
    uStack_380 = (uint **)puVar16;
    pub_142e32760(&uStack_378,&puStack_418,0x98);
    uStack_2e0 = 0;
    pdb_14007ee60();
    pbVar17 = pub_1406abab0(0x148,8);
    if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x148);
    }
    lVar13 = *(longlong *)(lVar9 + 0x10);
    pub_142e32760(pbVar17,&uStack_380,0x148);
    uStack_4ed = 1;
    (**(code **)(lVar9 + 0x28))
              ((byte *)((longlong)puVar15 + (lVar13 - 1U & 0xfffffffffffffff0) + 0x10),pbVar17,
               &UNK_14332af80);
    uStack_378 = (code *)0x0;
    uStack_370 = (uint **)puVar10;
    uStack_368 = (code *)uVar14;
    uStack_350 = uStack_350 & 0xffffff00;
    uStack_380 = (uint **)puVar16;
    pdb_14007ee60();
    pbVar17 = pub_1406abab0(0x38,8);
    puVar15 = puStack_4e8;
    if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x38);
    }
    *(ulonglong *)(pbVar17 + 0x30) = CONCAT44(uStack_34c,uStack_350);
    *(undefined4 *)(pbVar17 + 0x20) = uStack_360;
    *(undefined4 *)(pbVar17 + 0x24) = uStack_35c;
    *(undefined4 *)(pbVar17 + 0x28) = uStack_358;
    *(undefined4 *)(pbVar17 + 0x2c) = uStack_354;
    *(undefined4 *)(pbVar17 + 0x10) = (undefined4)uStack_370;
    *(undefined4 *)(pbVar17 + 0x14) = uStack_370._4_4_;
    *(undefined4 *)(pbVar17 + 0x18) = (undefined4)uStack_368;
    *(undefined4 *)(pbVar17 + 0x1c) = uStack_368._4_4_;
    *(undefined4 *)pbVar17 = (undefined4)uStack_380;
    *(undefined4 *)(pbVar17 + 4) = uStack_380._4_4_;
    *(undefined4 *)(pbVar17 + 8) = (undefined4)uStack_378;
    *(undefined4 *)(pbVar17 + 0xc) = uStack_378._4_4_;
    LOCK();
    *(longlong *)puStack_4d0 = *(longlong *)puStack_4d0 + -1;
    UNLOCK();
    if (*(longlong *)puStack_4d0 == 0) {
      uStack_4ea = 0;
      pdb_140c7a240(&puStack_4d0);
    }
    puVar21 = &UNK_14332afa0;
  }
  if (plStack_458 != (longlong *)0x0) {
    LOCK();
    *plStack_458 = *plStack_458 + -1;
    UNLOCK();
    if (*plStack_458 == 0) {
      pdb_140dd7630(&plStack_458);
    }
  }
  uStack_368 = (code *)puStack_4d8;
  uStack_350 = uStack_350 & 0xffffff00;
  uStack_380 = (uint **)pbVar17;
  uStack_378 = (code *)puVar21;
  uStack_370 = (uint **)puVar15;
  pdb_14007ee60();
  pbVar17 = pub_1406abab0(0x40,0x10);
  if (pbVar17 != (byte *)0x0) {
    *(uint *)(pbVar17 + 0x30) = uStack_350;
    *(undefined4 *)(pbVar17 + 0x34) = uStack_34c;
    *(undefined4 *)(pbVar17 + 0x38) = uStack_348;
    *(undefined4 *)(pbVar17 + 0x3c) = uStack_344;
    *(undefined4 *)(pbVar17 + 0x20) = uStack_360;
    *(undefined4 *)(pbVar17 + 0x24) = uStack_35c;
    *(undefined4 *)(pbVar17 + 0x28) = uStack_358;
    *(undefined4 *)(pbVar17 + 0x2c) = uStack_354;
    *(undefined4 *)(pbVar17 + 0x10) = (undefined4)uStack_370;
    *(undefined4 *)(pbVar17 + 0x14) = uStack_370._4_4_;
    *(undefined4 *)(pbVar17 + 0x18) = (undefined4)uStack_368;
    *(undefined4 *)(pbVar17 + 0x1c) = uStack_368._4_4_;
    *(undefined4 *)pbVar17 = (undefined4)uStack_380;
    *(undefined4 *)(pbVar17 + 4) = uStack_380._4_4_;
    *(undefined4 *)(pbVar17 + 8) = (undefined4)uStack_378;
    *(undefined4 *)(pbVar17 + 0xc) = uStack_378._4_4_;
    if (apuStack_480[0] != (uint *)0x0) {
      LOCK();
      *(longlong *)apuStack_480[0] = *(longlong *)apuStack_480[0] + -1;
      UNLOCK();
      if (*(longlong *)apuStack_480[0] == 0) {
        pdb_140dd76c0(apuStack_480);
      }
    }
    LOCK();
    *(longlong *)pbStack_4c0 = *(longlong *)pbStack_4c0 + -1;
    UNLOCK();
    if (*(longlong *)pbStack_4c0 == 0) {
      pdb_140c7a240(&pbStack_4c0);
    }
    return pbVar17;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x40);
}

