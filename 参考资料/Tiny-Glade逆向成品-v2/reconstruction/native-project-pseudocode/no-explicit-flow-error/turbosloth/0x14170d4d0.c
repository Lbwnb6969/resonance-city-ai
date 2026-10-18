// VA 0x14170d4d0, PDB extent 4049 bytes
// turbosloth::asset::BuildContext::store_asset<clutter_pack_pipe::ClutterMeshAsset>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x00014170d697) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::BuildContext::store_asset<clutter_pack_pipe::ClutterMeshAsset>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 4049 */

byte * pdb_14170d4d0(undefined8 param_1,undefined8 param_2)

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
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  bool bVar18;
  uint *puStack_620;
  uint *puStack_618;
  longlong lStack_610;
  uint *puStack_608;
  byte *pbStack_600;
  undefined *puStack_5f8;
  uint *puStack_5f0;
  undefined8 uStack_5e8;
  uint *puStack_5e0;
  undefined8 uStack_5d8;
  uint uStack_5d0;
  undefined4 uStack_5cc;
  char cStack_5c8;
  uint *apuStack_5c0 [3];
  longlong lStack_5a8;
  longlong *plStack_5a0;
  uint *puStack_598;
  longlong lStack_590;
  uint *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  uint *puStack_558;
  longlong lStack_550;
  uint *puStack_548;
  undefined8 uStack_540;
  uint *puStack_520;
  longlong lStack_518;
  undefined1 uStack_50e;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  uint uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined8 uStack_400;
  undefined1 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_120 [200];
  undefined **ppuStack_58;
  undefined8 uStack_48;
  
  ppuStack_58 = &puStack_5f8;
  uStack_48 = 0xfffffffffffffffe;
  pub_142e32760(auStack_120,param_2,200);
  pdb_1417ca880(&uStack_480);
  puVar15 = &uStack_480;
  pdb_1424ecad0(auStack_120);
  uVar10 = pdb_1417c9b80(&uStack_480);
  uVar16 = 0x48;
  puVar11 = (uint *)pdb_141747730(&UNK_14332b7dd,0x48,1,uVar10,puVar15);
  pub_142e32760(&puStack_548,auStack_120,200);
  puStack_558 = (uint *)0x1;
  lStack_550 = 1;
  pdb_14007ee60();
  pbVar12 = pub_1406abab0(0xd8,8);
  if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xd8);
  }
  pub_142e32760(pbVar12,&puStack_558,0xd8);
  uStack_5d0 = 0;
  uStack_5cc = 0;
  cStack_5c8 = '\0';
  apuStack_5c0[0] = (uint *)0x0;
  puStack_5f8 = &UNK_14332ab30;
  puStack_5f0 = (uint *)&UNK_14332b7dd;
  uStack_5e8 = 0x48;
  pbStack_600 = pbVar12;
  puStack_5e0 = puVar11;
  uStack_5d8 = uVar16;
  if (uStack_478 != (uint *)0x0) {
    pub_1406abac0((byte *)uStack_480,(ulonglong)uStack_478,1);
  }
  puVar11 = puStack_5e0;
  uStack_578 = uStack_5d8;
  pdb_141748820(&lStack_5a8,param_1);
  if (uStack_5d0 < 0x3ffffffe) {
    uStack_5d0 = uStack_5d0 + 1;
    LOCK();
    UNLOCK();
  }
  else {
    pdb_142dc6cb0(&uStack_5d0);
  }
  puStack_620 = apuStack_5c0[0];
  if (cStack_5c8 != '\0') {
    uStack_480 = apuStack_5c0;
    uStack_478 = &uStack_5d0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_480,&UNK_14332b900,&UNK_14332acb0);
  }
  if (apuStack_5c0[0] != (uint *)0x0) {
    LOCK();
    lVar1 = *(longlong *)apuStack_5c0[0];
    *(longlong *)apuStack_5c0[0] = *(longlong *)apuStack_5c0[0] + 1;
    UNLOCK();
    if (*(longlong *)apuStack_5c0[0] == 0 || SCARRY8(lVar1,1) != *(longlong *)apuStack_5c0[0] < 0)
    goto LAB_14170dd7d;
  }
  puStack_618 = apuStack_5c0[0];
  LOCK();
  uVar3 = uStack_5d0 - 1;
  UNLOCK();
  uVar14 = uStack_5d0 - 1;
  uStack_5d0 = uVar3;
  if (SBORROW4(0,uVar14 & 0xbfffffff)) {
    pdb_142dc6fa0(&uStack_5d0);
  }
  if (puStack_620 == (uint *)0x0) {
    LOCK();
    bVar18 = uStack_5d0 == 0;
    if (bVar18) {
      uStack_5d0 = 0x3fffffff;
    }
    UNLOCK();
    if (!bVar18) {
      pdb_142dc6e70(&uStack_5d0);
    }
    puVar5 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      bVar8 = 0;
      puVar17 = puStack_5f8;
    }
    else {
      bVar8 = pdb_142dc79e0();
      bVar8 = bVar8 ^ 1;
      puVar17 = puStack_5f8;
    }
    puStack_5f8 = puVar17;
    if (cStack_5c8 != '\0') {
      uVar4 = (ulonglong)uStack_478 >> 8;
      uStack_478 = (uint *)CONCAT71((int7)uVar4,bVar8);
      uStack_480 = (uint **)&uStack_5d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_480,&UNK_14332b8b0,&UNK_14332acc8);
    }
    uVar4 = (ulonglong)lStack_550 >> 8;
    lStack_550 = CONCAT71((int7)uVar4,bVar8);
    puStack_558 = &uStack_5d0;
    if (apuStack_5c0[0] == (uint *)0x0) {
      uStack_480 = (uint **)(**(code **)(puVar17 + 0x28))
                                      (pbStack_600 +
                                       (*(longlong *)(puVar17 + 0x10) - 1U & 0xfffffffffffffff0) +
                                       0x10);
      uStack_570 = _DAT_14332b4d8;
      uStack_56c = _UNK_14332b4dc;
      uStack_568 = _UNK_14332b4e0;
      uStack_564 = _UNK_14332b4e4;
      uStack_468 = uStack_5d8;
      uStack_470 = puStack_5e0;
      uStack_478 = (uint *)puVar17;
      puStack_608 = (uint *)pdb_1417f98b0(lStack_5a8 + 0x10,&uStack_570,puStack_5e0,uStack_5d8,
                                          &uStack_480);
      LOCK();
      lVar1 = *(longlong *)puStack_608;
      *(longlong *)puStack_608 = *(longlong *)puStack_608 + 1;
      UNLOCK();
      puStack_588 = puStack_608;
      if (*(longlong *)puStack_608 == 0 || SCARRY8(lVar1,1) != *(longlong *)puStack_608 < 0)
      goto LAB_14170dd7d;
      puVar7 = puStack_608;
      puStack_620 = puStack_608;
      if (apuStack_5c0[0] != (uint *)0x0) {
        LOCK();
        *(longlong *)apuStack_5c0[0] = *(longlong *)apuStack_5c0[0] + -1;
        UNLOCK();
        puVar7 = puStack_608;
        if (*(longlong *)apuStack_5c0[0] == 0) {
          pdb_140dd76c0(apuStack_5c0);
          puVar7 = puStack_608;
          puStack_620 = puStack_588;
        }
      }
    }
    else {
      LOCK();
      lVar1 = *(longlong *)apuStack_5c0[0];
      *(longlong *)apuStack_5c0[0] = *(longlong *)apuStack_5c0[0] + 1;
      UNLOCK();
      puVar7 = apuStack_5c0[0];
      puStack_620 = apuStack_5c0[0];
      if (*(longlong *)apuStack_5c0[0] == 0 || SCARRY8(lVar1,1) != *(longlong *)apuStack_5c0[0] < 0)
      goto LAB_14170dd7d;
    }
    apuStack_5c0[0] = puVar7;
    if (((bVar8 == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
      cStack_5c8 = '\x01';
    }
    LOCK();
    uVar3 = uStack_5d0 + 0xc0000001;
    UNLOCK();
    uVar14 = uStack_5d0 + 0xc0000001;
    uStack_5d0 = uVar3;
    if (0x3fffffff < uVar14) {
      pdb_142dc6fa0(&uStack_5d0);
    }
  }
  else {
  }
  pdb_141747230(&lStack_5a8);
  uVar10 = uStack_5e8;
  puVar7 = puStack_5f0;
  if (puStack_598 == (uint *)0x0) {
    puVar13 = (uint *)0x0;
  }
  else {
    LOCK();
    lVar1 = *(longlong *)puStack_598;
    *(longlong *)puStack_598 = *(longlong *)puStack_598 + 1;
    UNLOCK();
    puVar13 = puStack_598;
    if (*(longlong *)puStack_598 == 0 || SCARRY8(lVar1,1) != *(longlong *)puStack_598 < 0)
    goto LAB_14170dd7d;
  }
  puStack_520 = puStack_620;
  lStack_518 = lStack_5a8;
  lStack_550 = lStack_590;
  puStack_548 = puStack_5f0;
  uStack_540 = uStack_5e8;
  uStack_50e = 0;
  puStack_558 = puVar13;
  if (puStack_598 == (uint *)0x0) {
    pub_142e32760(&uStack_480,&puStack_558,0x98);
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x98,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x98);
    }
    pub_142e32760(pbVar12,&puStack_558,0x98);
    puVar17 = &UNK_14332af00;
  }
  else {
    puStack_618 = puStack_598;
    lStack_610 = lStack_590;
    uStack_480 = (uint **)0x1;
    uStack_478 = (uint *)0x1;
    uStack_400 = 0;
    uStack_3d8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 1;
    uStack_1e0 = 1;
    pdb_14007ee60();
    puVar13 = (uint *)pub_1406abab0(0x300,0x80);
    if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x80,0x300);
    }
    puStack_608 = puVar11;
    pub_142e32760(puVar13,&uStack_480,0x300);
    lVar6 = lStack_610;
    puVar11 = puStack_618;
    LOCK();
    lVar1 = *(longlong *)puVar13;
    *(longlong *)puVar13 = *(longlong *)puVar13 + 1;
    UNLOCK();
    if (*(longlong *)puVar13 == 0 || SCARRY8(lVar1,1) != *(longlong *)puVar13 < 0) {
LAB_14170dd7d:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uStack_580 = 0;
    puStack_588 = puVar13;
    uStack_480 = (uint **)puVar13;
    pub_142e32760(&uStack_478,&puStack_558,0x98);
    uStack_3e0 = 0;
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x148,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x148);
    }
    lVar1 = *(longlong *)(lVar6 + 0x10);
    pub_142e32760(pbVar12,&uStack_480,0x148);
    (**(code **)(lVar6 + 0x28))
              ((byte *)((longlong)puVar11 + (lVar1 - 1U & 0xfffffffffffffff0) + 0x10),pbVar12,
               &UNK_14332aec0);
    uStack_478 = (uint *)0x0;
    uStack_470 = puVar7;
    uStack_468 = uVar10;
    uStack_450 = uStack_450 & 0xffffff00;
    uStack_480 = (uint **)puVar13;
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x38,8);
    puVar11 = puStack_608;
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x38);
    }
    *(ulonglong *)(pbVar12 + 0x30) = CONCAT44(uStack_44c,uStack_450);
    *(undefined4 *)(pbVar12 + 0x20) = uStack_460;
    *(undefined4 *)(pbVar12 + 0x24) = uStack_45c;
    *(undefined4 *)(pbVar12 + 0x28) = uStack_458;
    *(undefined4 *)(pbVar12 + 0x2c) = uStack_454;
    *(undefined4 *)(pbVar12 + 0x10) = (undefined4)uStack_470;
    *(undefined4 *)(pbVar12 + 0x14) = uStack_470._4_4_;
    *(undefined4 *)(pbVar12 + 0x18) = (undefined4)uStack_468;
    *(undefined4 *)(pbVar12 + 0x1c) = uStack_468._4_4_;
    *(undefined4 *)pbVar12 = (undefined4)uStack_480;
    *(undefined4 *)(pbVar12 + 4) = uStack_480._4_4_;
    *(undefined4 *)(pbVar12 + 8) = (undefined4)uStack_478;
    *(undefined4 *)(pbVar12 + 0xc) = uStack_478._4_4_;
    LOCK();
    *(longlong *)puStack_618 = *(longlong *)puStack_618 + -1;
    UNLOCK();
    if (*(longlong *)puStack_618 == 0) {
      pdb_140c7a240(&puStack_618);
    }
    puVar17 = &UNK_14332aee0;
  }
  if (plStack_5a0 != (longlong *)0x0) {
    LOCK();
    *plStack_5a0 = *plStack_5a0 + -1;
    UNLOCK();
    if (*plStack_5a0 == 0) {
      pdb_140dd7630(&plStack_5a0);
    }
  }
  uStack_468 = uStack_578;
  uStack_450 = uStack_450 & 0xffffff00;
  uStack_480 = (uint **)pbVar12;
  uStack_478 = (uint *)puVar17;
  uStack_470 = puVar11;
  pdb_14007ee60();
  pbVar12 = pub_1406abab0(0x40,0x10);
  if (pbVar12 != (byte *)0x0) {
    *(uint *)(pbVar12 + 0x30) = uStack_450;
    *(undefined4 *)(pbVar12 + 0x34) = uStack_44c;
    *(undefined4 *)(pbVar12 + 0x38) = uStack_448;
    *(undefined4 *)(pbVar12 + 0x3c) = uStack_444;
    *(undefined4 *)(pbVar12 + 0x20) = uStack_460;
    *(undefined4 *)(pbVar12 + 0x24) = uStack_45c;
    *(undefined4 *)(pbVar12 + 0x28) = uStack_458;
    *(undefined4 *)(pbVar12 + 0x2c) = uStack_454;
    *(undefined4 *)(pbVar12 + 0x10) = (undefined4)uStack_470;
    *(undefined4 *)(pbVar12 + 0x14) = uStack_470._4_4_;
    *(undefined4 *)(pbVar12 + 0x18) = (undefined4)uStack_468;
    *(undefined4 *)(pbVar12 + 0x1c) = uStack_468._4_4_;
    *(undefined4 *)pbVar12 = (undefined4)uStack_480;
    *(undefined4 *)(pbVar12 + 4) = uStack_480._4_4_;
    *(undefined4 *)(pbVar12 + 8) = (undefined4)uStack_478;
    *(undefined4 *)(pbVar12 + 0xc) = uStack_478._4_4_;
    if (apuStack_5c0[0] != (uint *)0x0) {
      LOCK();
      *(longlong *)apuStack_5c0[0] = *(longlong *)apuStack_5c0[0] + -1;
      UNLOCK();
      if (*(longlong *)apuStack_5c0[0] == 0) {
        pdb_140dd76c0(apuStack_5c0);
      }
    }
    LOCK();
    *(longlong *)pbStack_600 = *(longlong *)pbStack_600 + -1;
    UNLOCK();
    if (*(longlong *)pbStack_600 == 0) {
      pdb_140c7a240(&pbStack_600);
    }
    return pbVar12;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x40);
}

