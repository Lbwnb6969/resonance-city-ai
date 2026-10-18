// VA 0x141c5fe60, PDB extent 2686 bytes
// country_core::systems::save::save_thread::CurrentSaveFile::flush_deferred_and_sync
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_thread::CurrentSaveFile::flush_deferred_and_sync
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
   Extent: 2686 */

ulonglong pdb_141c5fe60(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong unaff_RDI;
  undefined *puVar13;
  undefined *puVar14;
  byte *unaff_R14;
  longlong lStack_78;
  longlong *plStack_50;
  
  cVar5 = pdb_140e94b40();
  if (cVar5 == '\0') {
    lStack_78 = 0;
  }
  else {
    puVar12 = &UNK_1433a27a4;
    unaff_RDI = 0x52;
    uVar11 = 0x52;
    lVar8 = pdb_141c6bab0(&UNK_1433a27a4);
    if (lVar8 == 1) {
      if (0x52 < uVar11) {
        pdb_142dc8070(&UNK_1433a27a4,0x52,0,uVar11,&UNK_1433a2910);
LAB_141c60712:
        pdb_142dc8070(&UNK_1433a27a4,0x52);
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return uVar11;
      }
      puVar12 = &UNK_1433a27a4;
      uVar9 = pdb_141c6bab0(&UNK_1433a27a4);
      if ((uVar9 & 1) != 0) {
        if (0x52 < uVar11 + 2) goto LAB_141c60712;
        unaff_RDI = 0x50 - uVar11;
        puVar12 = &UNK_1433a27a6 + uVar11;
      }
    }
    puVar13 = &UNK_1433a2093;
    unaff_R14 = &UNK_1433a2060;
    do {
      bVar6 = puVar13[-1];
      uVar7 = (uint)(char)bVar6;
      if ((char)bVar6 < '\0') {
        bVar2 = puVar13[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar13[-3];
          if ((char)bVar3 < -0x40) {
            pbVar1 = puVar13 + -4;
            puVar13 = puVar13 + -4;
            uVar7 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar13 = puVar13 + -3;
            uVar7 = bVar3 & 0xf;
          }
          uVar7 = bVar2 & 0x3f | uVar7 << 6;
        }
        else {
          puVar13 = puVar13 + -2;
          uVar7 = bVar2 & 0x1f;
        }
        uVar7 = (uint)(bVar6 & 0x3f) | uVar7 << 6;
        if (uVar7 != 0x5c) goto LAB_141c5ff74;
LAB_141c5ff8d:
        puVar14 = puVar13 + -0x1433a205f;
        if ((undefined *)0x33 < puVar14) {
          pdb_142dc8070(&UNK_1433a2060,0x33,puVar14,0x33,&UNK_1433a28f0);
          goto LAB_141c606cc;
        }
        lVar8 = 0x33 - (longlong)puVar14;
        unaff_R14 = puVar13 + 1;
        goto LAB_141c5ffb0;
      }
      puVar13 = puVar13 + -1;
      if (uVar7 == 0x5c) goto LAB_141c5ff8d;
LAB_141c5ff74:
      if (uVar7 == 0x2f) goto LAB_141c5ff8d;
    } while (puVar13 != &UNK_1433a2060);
    lVar8 = 0x33;
LAB_141c5ffb0:
    plVar10 = (longlong *)pdb_140e97000();
    if (((char)plVar10[0xd] != '\x01') &&
       (plVar10 = (longlong *)pdb_142d8ec20(plVar10,0), plVar10 == (longlong *)0x0))
    goto LAB_141c60634;
    if (*plVar10 != 0) goto LAB_141c60604;
    *plVar10 = -1;
    unaff_RDI = pdb_140e94f10(plVar10 + 1,puVar12,unaff_RDI,unaff_R14,lVar8,1,0);
    *plVar10 = *plVar10 + 1;
    lStack_78 = 1;
  }
  uVar11 = *(ulonglong *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0xe0);
    pdb_141c5f3d0(param_1,0,unaff_R14,*(undefined8 *)(param_1 + 0xe8));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x108);
    pdb_141c5f3d0(param_1,1,unaff_R14,*(undefined8 *)(param_1 + 0x110));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x130);
    pdb_141c5f3d0(param_1,2,unaff_R14,*(undefined8 *)(param_1 + 0x138));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x158);
    pdb_141c5f3d0(param_1,3,unaff_R14,*(undefined8 *)(param_1 + 0x160));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x180);
    pdb_141c5f3d0(param_1,4,unaff_R14,*(undefined8 *)(param_1 + 0x188));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x1a8);
    pdb_141c5f3d0(param_1,5,unaff_R14,*(undefined8 *)(param_1 + 0x1b0));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x1d0);
    pdb_141c5f3d0(param_1,6,unaff_R14,*(undefined8 *)(param_1 + 0x1d8));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x1f8);
    pdb_141c5f3d0(param_1,7,unaff_R14,*(undefined8 *)(param_1 + 0x200));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x220);
    pdb_141c5f3d0(param_1,8,unaff_R14,*(undefined8 *)(param_1 + 0x228));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x248);
    pdb_141c5f3d0(param_1,9,unaff_R14,*(undefined8 *)(param_1 + 0x250));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x270);
    pdb_141c5f3d0(param_1,10,unaff_R14,*(undefined8 *)(param_1 + 0x278));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x298);
    pdb_141c5f3d0(param_1,0xb,unaff_R14,*(undefined8 *)(param_1 + 0x2a0));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = 0x8000000000000000;
  if (!SBORROW8(0,uVar11)) {
    unaff_R14 = *(byte **)(param_1 + 0x2c0);
    pdb_141c5f3d0(param_1,0xc,unaff_R14,*(undefined8 *)(param_1 + 0x2c8));
    if (uVar11 != 0) {
      pub_1406abac0(unaff_R14,uVar11,1);
    }
  }
  bVar6 = pdb_140e94b40();
  plStack_50 = (longlong *)(ulonglong)bVar6;
  if (bVar6 == 0) goto LAB_141c60569;
  puVar13 = &UNK_1433a2093;
  puVar12 = &UNK_1433a2060;
  do {
    bVar6 = puVar13[-1];
    uVar7 = (uint)(char)bVar6;
    if ((char)bVar6 < '\0') {
      bVar2 = puVar13[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar13[-3];
        if ((char)bVar3 < -0x40) {
          pbVar1 = puVar13 + -4;
          puVar13 = puVar13 + -4;
          uVar7 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar13 = puVar13 + -3;
          uVar7 = bVar3 & 0xf;
        }
        uVar7 = bVar2 & 0x3f | uVar7 << 6;
      }
      else {
        puVar13 = puVar13 + -2;
        uVar7 = bVar2 & 0x1f;
      }
      uVar7 = (uint)(bVar6 & 0x3f) | uVar7 << 6;
      if (uVar7 != 0x5c) goto LAB_141c604c4;
LAB_141c604dd:
      if ((undefined *)0x33 < puVar13 + -0x1433a205f) goto LAB_141c606cc;
      unaff_R14 = (byte *)(0x33 - (longlong)(puVar13 + -0x1433a205f));
      puVar12 = puVar13 + 1;
      goto LAB_141c60500;
    }
    puVar13 = puVar13 + -1;
    if (uVar7 == 0x5c) goto LAB_141c604dd;
LAB_141c604c4:
    if (uVar7 == 0x2f) goto LAB_141c604dd;
  } while (puVar13 != &UNK_1433a2060);
  unaff_R14 = (byte *)0x33;
LAB_141c60500:
  plVar10 = (longlong *)pdb_140e97000();
  if ((char)plVar10[0xd] != '\x01') goto LAB_141c60641;
  do {
    if (*plVar10 != 0) {
      pdb_142dc8090(&UNK_143326a50);
      goto LAB_141c606f0;
    }
    *plVar10 = -1;
    unaff_R14 = (byte *)pdb_140e94f10(plVar10 + 1,&UNK_1433a21a8,8,puVar12,unaff_R14,1,0);
    *plVar10 = *plVar10 + 1;
LAB_141c60569:
    param_1 = param_1 + 0x10;
    uVar7 = pdb_140c6fb10(param_1);
    puVar12 = (undefined *)(ulonglong)uVar7;
    if ((char)plStack_50 != '\0') {
      plStack_50 = (longlong *)pdb_140e97000();
      if (((char)plStack_50[0xd] != '\x01') &&
         (plStack_50 = (longlong *)pdb_142d8ec20(plStack_50,0), plStack_50 == (longlong *)0x0)) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141c606f0;
      }
      if (*plStack_50 != 0) {
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_141c606f0;
      }
      *plStack_50 = -1;
      pdb_140e95370(plStack_50 + 1,unaff_R14);
      *plStack_50 = *plStack_50 + 1;
    }
    if (lStack_78 == 0) {
LAB_141c605f2:
      return (ulonglong)puVar12 & 0xffffffff;
    }
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_141c60610;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        pdb_140e95370(plVar10 + 1,unaff_RDI);
        *plVar10 = *plVar10 + 1;
        goto LAB_141c605f2;
      }
LAB_141c60604:
      plVar10 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_141c60610:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
LAB_141c60634:
    plVar10 = (longlong *)pdb_142dc7890(&UNK_143326860);
LAB_141c60641:
    plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
  } while (plVar10 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
  goto LAB_141c606f0;
LAB_141c606cc:
  pdb_142dc8070(&UNK_1433a2060,0x33);
LAB_141c606f0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

