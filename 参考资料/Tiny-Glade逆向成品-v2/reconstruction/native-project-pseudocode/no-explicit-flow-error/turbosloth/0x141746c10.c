// VA 0x141746c10, PDB extent 1566 bytes
// turbosloth::asset::AssetPayload::finish_build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::asset::AssetPayload::finish_build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 1566 */

longlong * pdb_141746c10(longlong *param_1,longlong param_2,longlong *param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  byte *arg0;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  char cVar13;
  longlong lVar14;
  byte *pbVar15;
  bool bVar16;
  longlong lStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong lStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  longlong lStack_d8;
  undefined8 *puStack_d0;
  longlong lStack_c8;
  undefined8 *puStack_c0;
  longlong lStack_b8;
  int *piStack_b0;
  byte bStack_a8;
  undefined7 uStack_a7;
  longlong *plStack_a0;
  longlong *aplStack_98 [2];
  undefined8 uStack_88;
  undefined4 *puStack_80;
  int *piStack_78;
  longlong lStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong lStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  piVar1 = (int *)(param_2 + 0x20);
  LOCK();
  bVar16 = *(int *)(param_2 + 0x20) == 0;
  if (bVar16) {
    *(int *)(param_2 + 0x20) = 0x3fffffff;
  }
  UNLOCK();
  puStack_80 = param_4;
  plStack_60 = param_3;
  if (!bVar16) {
    uStack_49 = 1;
    pdb_142dc6e70(piVar1);
  }
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar12 = 0;
    cVar13 = *(char *)(param_2 + 0x28);
  }
  else {
    uStack_49 = 1;
    bVar12 = pdb_142dc79e0();
    bVar12 = bVar12 ^ 1;
    cVar13 = *(char *)(param_2 + 0x28);
  }
  if (cVar13 != '\0') {
    piStack_b0 = piVar1;
    bStack_a8 = bVar12;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14332f508,0x2b,&piStack_b0,&UNK_14332f538,&UNK_14332efc8);
  }
  lStack_c8 = *(longlong *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0x8000000000000000;
  if (SBORROW8(0,lStack_c8)) {
    puStack_c0 = (undefined8 *)0x8;
    lStack_b8 = 0;
    lStack_c8 = 0;
  }
  else {
    puStack_c0 = *(undefined8 **)(param_2 + 0x50);
    lStack_b8 = *(longlong *)(param_2 + 0x58);
  }
  arg0 = *(byte **)(param_2 + 0x38);
  lVar14 = *(longlong *)(param_2 + 0x40);
  piStack_78 = piVar1;
  if (lVar14 != 0) {
    pbVar15 = arg0 + 0x48;
    do {
      if (*(ulonglong *)(pbVar15 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar15,*(ulonglong *)(pbVar15 + -8),1);
      }
      pbVar15 = pbVar15 + 0x60;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  lVar14 = *(longlong *)(param_2 + 0x30);
  if (lVar14 != 0) {
    pub_1406abac0(arg0,lVar14 * 0x60,0x10);
  }
  piVar1 = piStack_78;
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(puStack_80 + 4);
  uVar9 = puStack_80[1];
  uVar10 = puStack_80[2];
  uVar11 = puStack_80[3];
  *(undefined4 *)(param_2 + 0x30) = *puStack_80;
  *(undefined4 *)(param_2 + 0x34) = uVar9;
  *(undefined4 *)(param_2 + 0x38) = uVar10;
  *(undefined4 *)(param_2 + 0x3c) = uVar11;
  if (*plStack_60 == 0) {
    plStack_68 = (longlong *)plStack_60[1];
    lStack_70 = plStack_60[2];
    LOCK();
    lVar14 = *plStack_68;
    *plStack_68 = *plStack_68 + 1;
    UNLOCK();
    if (*plStack_68 == 0 || SCARRY8(lVar14,1) != *plStack_68 < 0) {
LAB_141746fea:
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
  }
  else {
    plStack_68 = (longlong *)0x0;
  }
  plVar5 = *(longlong **)(param_2 + 0x60);
  lStack_58 = param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      pdb_140c7a240(param_2 + 0x60);
    }
  }
  lVar14 = lStack_58;
  *(longlong **)(lStack_58 + 0x60) = plStack_68;
  *(longlong *)(lStack_58 + 0x68) = lStack_70;
  if ((bVar12 == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
    uStack_4a = 0;
    uStack_4b = 1;
    cVar13 = pdb_142dc79e0();
    if (cVar13 == '\0') {
      *(undefined1 *)(lVar14 + 0x28) = 1;
    }
  }
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -0x3fffffff;
  UNLOCK();
  if (0x3fffffff < iVar3 + 0xc0000001U) {
    uStack_4a = 0;
    uStack_4b = 1;
    pdb_142dc6fa0(piVar1);
  }
  puStack_d0 = puStack_c0 + lStack_b8;
  puStack_e8 = puStack_c0;
  puStack_e0 = puStack_c0;
  lStack_d8 = lStack_c8;
  if (puStack_c0 != puStack_d0) {
    do {
      puVar2 = puStack_e0 + 1;
      uStack_88 = *puStack_e0;
      lVar14 = *plStack_60;
      puStack_e0 = puVar2;
      if (lVar14 == 0) {
        plVar5 = (longlong *)plStack_60[1];
        plVar6 = (longlong *)plStack_60[2];
        LOCK();
        lVar14 = *plVar5;
        *plVar5 = *plVar5 + 1;
        UNLOCK();
        if (*plVar5 == 0 || SCARRY8(lVar14,1) != *plVar5 < 0) goto LAB_141746fea;
        lStack_108 = 0;
        lVar14 = lStack_108;
        lVar7 = lStack_f0;
      }
      else {
        plVar5 = (longlong *)plStack_60[1];
        plVar6 = (longlong *)plStack_60[2];
        lVar7 = plStack_60[3];
        LOCK();
        lVar4 = *plVar6;
        *plVar6 = *plVar6 + 1;
        UNLOCK();
        if (*plVar6 == 0 || SCARRY8(lVar4,1) != *plVar6 < 0) goto LAB_141746fea;
      }
      lStack_f0 = lVar7;
      plStack_f8 = plVar6;
      plStack_100 = plVar5;
      lStack_108 = lVar14;
      pdb_142566030(&piStack_b0,&uStack_88,&lStack_108);
      if (piStack_b0 != (int *)0x2) {
        if (piStack_b0 == (int *)0x0) {
          if (CONCAT71(uStack_a7,bStack_a8) == 0) {
            LOCK();
            *plStack_a0 = *plStack_a0 + -1;
            UNLOCK();
            if (*plStack_a0 == 0) {
              pdb_140c7a240(&plStack_a0);
            }
          }
          else {
            LOCK();
            *aplStack_98[0] = *aplStack_98[0] + -1;
            UNLOCK();
            if (*aplStack_98[0] == 0) {
              pdb_140c7a240(aplStack_98);
            }
          }
        }
        else if (CONCAT71(uStack_a7,bStack_a8) == 0) {
          LOCK();
          *plStack_a0 = *plStack_a0 + -1;
          UNLOCK();
          if (*plStack_a0 == 0) {
            pdb_140c7a240(&plStack_a0);
          }
        }
        else {
          LOCK();
          *aplStack_98[0] = *aplStack_98[0] + -1;
          UNLOCK();
          if (*aplStack_98[0] == 0) {
            pdb_140c7a240(aplStack_98);
          }
        }
      }
      pdb_140981000(&uStack_88);
    } while (puStack_e0 != puStack_d0);
  }
  uStack_4a = 0;
  uStack_4b = 0;
  pdb_141ac3d80(&puStack_e8);
  lVar14 = *plStack_60;
  lVar7 = plStack_60[1];
  lVar4 = plStack_60[3];
  param_1[2] = plStack_60[2];
  param_1[3] = lVar4;
  *param_1 = lVar14;
  param_1[1] = lVar7;
  return param_1;
}

