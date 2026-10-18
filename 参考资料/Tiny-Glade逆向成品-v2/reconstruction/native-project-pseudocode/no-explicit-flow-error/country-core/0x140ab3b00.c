// VA 0x140ab3b00, PDB extent 2655 bytes
// country_core::startup::swap_replacement_mods::ModSwapReloads::apply
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::swap_replacement_mods::ModSwapReloads::apply
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 2655 */

void pdb_140ab3b00(undefined8 *param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulonglong *puVar9;
  byte ***arg0;
  char cVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 ***arg1;
  ulonglong uVar16;
  undefined1 *puVar17;
  longlong lVar18;
  undefined *puVar19;
  longlong lVar20;
  undefined8 ****ppppuVar21;
  undefined *puVar22;
  code *pcVar23;
  byte ***apppbStack_168 [2];
  longlong lStack_158;
  undefined1 auStack_150 [48];
  char cStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  longlong lStack_e8;
  undefined8 uStack_e0;
  byte ***pppbStack_d8;
  undefined8 ****ppppuStack_d0;
  byte ***pppbStack_c8;
  byte ****ppppbStack_c0;
  code *pcStack_b8;
  longlong lStack_b0;
  undefined8 ****ppppuStack_a8;
  byte ***pppbStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  byte ****ppppbStack_50;
  longlong *plStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if ((param_4 != 0) && (*param_2 != '\0')) {
    uStack_118 = *(undefined4 *)(param_2 + 1);
    uStack_114 = *(undefined4 *)(param_2 + 5);
    uStack_110 = *(undefined4 *)(param_2 + 9);
    uStack_10c = *(undefined4 *)(param_2 + 0xd);
    pdb_140b7e580(&uStack_118);
  }
  pdb_140d8f0d0(apppbStack_168,param_3,param_4);
  uVar15 = (undefined4)param_3;
  if ((lStack_158 != 0) && (1 < *_DAT_143ca8e90)) {
    pcStack_b8 = pdb_1415e4c30;
    ppppuStack_a8 = (byte *****)0x0;
    pppbStack_a0 = (byte ***)&UNK_14304a1e5;
    lStack_98 = 0x2c;
    uStack_90 = 0;
    puStack_88 = &UNK_14304a1ac;
    uStack_80 = 0x38;
    uStack_78 = 2;
    puStack_70 = &UNK_14304a1e5;
    uStack_68 = 0x2c;
    uStack_60 = 0xbd00000001;
    puStack_58 = &UNK_14304a170;
    ppppbStack_50 = (byte ****)&ppppbStack_c0;
    uVar15 = SUB84(&ppppuStack_a8,0);
    ppppbStack_c0 = apppbStack_168;
    pdb_140f332f0(&uStack_39);
  }
  lVar18 = param_1[4];
  pdb_140d8f670(&ppppuStack_a8);
  arg0 = pppbStack_a0;
  *(bool *)(*(longlong *)(lVar18 + 8) + 0x10) = lStack_98 != 0;
  if (lStack_98 != 0) {
    ppppuVar21 = (undefined8 ****)(pppbStack_a0 + 1);
    lVar18 = lStack_98;
    do {
      arg1 = ppppuVar21[-1];
      if (arg1 != (undefined8 ***)0x0) {
        pub_1406abac0((byte *)*ppppuVar21,(ulonglong)arg1,1);
      }
      uVar15 = SUB84(arg1,0);
      ppppuVar21 = ppppuVar21 + 3;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if ((byte *****)ppppuStack_a8 != (byte *****)0x0) {
    uVar16 = (longlong)ppppuStack_a8 * 0x18;
    pub_1406abac0((byte *)arg0,uVar16,8);
    uVar15 = (undefined4)uVar16;
  }
  if (cStack_120 == '\x01') {
    cVar10 = pdb_140e94b40();
    if (cVar10 == '\0') {
      lStack_e8 = 0;
    }
    else {
      puVar19 = &UNK_14304a774;
      lVar20 = 0x47;
      uVar16 = 0x47;
      lVar18 = pdb_140ab7420(&UNK_14304a774);
      if (lVar18 == 1) {
        if (0x47 < uVar16) {
          pdb_142dc8070(&UNK_14304a774,0x47,0,uVar16,&UNK_14304a890);
          goto LAB_140ab439d;
        }
        puVar19 = &UNK_14304a774;
        uVar11 = pdb_140ab7420(&UNK_14304a774);
        if ((uVar11 & 1) != 0) {
          if (0x47 < uVar16 + 2) {
            pdb_142dc8070(&UNK_14304a774,0x47,uVar16 + 2,0x47,&UNK_14304a8a8);
            goto LAB_140ab439d;
          }
          lVar20 = 0x45 - uVar16;
          puVar19 = &UNK_14304a776 + uVar16;
        }
      }
      puVar12 = &UNK_14304a249;
      puVar22 = &UNK_14304a211;
      do {
        pbVar1 = puVar12 + -1;
        uVar14 = (uint)(char)*pbVar1;
        if ((int)uVar14 < 0) {
          bVar3 = puVar12[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar12[-3];
            if ((char)bVar4 < -0x40) {
              pbVar2 = puVar12 + -4;
              puVar12 = puVar12 + -4;
              uVar14 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
            }
            else {
              puVar12 = puVar12 + -3;
              uVar14 = bVar4 & 0xf;
            }
            uVar14 = bVar3 & 0x3f | uVar14 << 6;
          }
          else {
            puVar12 = puVar12 + -2;
            uVar14 = bVar3 & 0x1f;
          }
          uVar14 = (uint)(*pbVar1 & 0x3f) | uVar14 << 6;
          if (uVar14 != 0x5c) goto LAB_140ab3da9;
LAB_140ab3dc6:
          if ((undefined *)0x38 < puVar12 + -0x14304a210) {
            pdb_142dc8070(&UNK_14304a211,0x38,puVar12 + -0x14304a210,0x38,&UNK_14304a870);
            goto LAB_140ab439d;
          }
          lVar18 = 0x37 - (longlong)(puVar12 + -0x14304a211);
          puVar22 = puVar12 + 1;
          goto LAB_140ab3dea;
        }
        puVar12 = puVar12 + -1;
        if (uVar14 == 0x5c) goto LAB_140ab3dc6;
LAB_140ab3da9:
        if (uVar14 == 0x2f) goto LAB_140ab3dc6;
      } while (puVar12 != &UNK_14304a211);
      lVar18 = 0x38;
LAB_140ab3dea:
      plVar13 = (longlong *)pdb_140e97000();
      if (((char)plVar13[0xd] != '\x01') &&
         (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0)) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_140ab439d;
      }
      if (*plVar13 != 0) {
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_140ab439d;
      }
      *plVar13 = -1;
      plStack_48 = plVar13;
      uStack_e0 = pdb_140e94f10(plVar13 + 1,puVar19,lVar20,puVar22,lVar18,1,0);
      uVar15 = SUB84(puVar19,0);
      *plStack_48 = *plStack_48 + 1;
      lStack_e8 = 1;
    }
    uStack_108 = pdb_140f3c9d0();
    puVar9 = _DAT_143ca8e90;
    uStack_100 = uVar15;
    if (2 < *_DAT_143ca8e90) {
      pdb_140d8f670(&ppppbStack_c0);
      pppbStack_c8 = (byte ***)pdb_1415e5030;
      ppppuStack_a8 = (byte *****)0x0;
      pppbStack_a0 = (byte ***)&UNK_14304a1e5;
      lStack_98 = 0x2c;
      uStack_90 = 0;
      puStack_88 = &UNK_14304a1ac;
      uStack_80 = 0x38;
      uStack_78 = 3;
      puStack_70 = &UNK_14304a1e5;
      uStack_68 = 0x2c;
      uStack_60 = 0xca00000001;
      puStack_58 = &UNK_14304a249;
      ppppbStack_50 = (byte ****)&ppppuStack_d0;
      ppppuStack_d0 = &ppppbStack_c0;
      pdb_140f332f0(&uStack_39,&ppppuStack_a8);
      pcVar8 = pcStack_b8;
      if (lStack_b0 != 0) {
        pcVar23 = pcStack_b8 + 8;
        lVar18 = lStack_b0;
        do {
          if (*(ulonglong *)(pcVar23 + -8) != 0) {
            pub_1406abac0(*(byte **)pcVar23,*(ulonglong *)(pcVar23 + -8),1);
          }
          pcVar23 = pcVar23 + 0x18;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      if ((undefined8 *****)ppppbStack_c0 != (undefined8 *****)0x0) {
        pub_1406abac0((byte *)pcVar8,(longlong)ppppbStack_c0 * 0x18,8);
      }
    }
    plVar13 = (longlong *)*param_1;
    pdb_140e57ef0(*plVar13 + 0x10);
    pdb_141c36f00(&ppppuStack_d0);
    if ((byte *****)ppppuStack_d0 == (byte *****)0x0) {
      pppbStack_d8 = pppbStack_c8;
      if (*puVar9 != 0) {
        ppppbStack_c0 = &pppbStack_d8;
        pcStack_b8 = pdb_140f36c30;
        ppppuStack_a8 = (byte *****)0x0;
        pppbStack_a0 = (byte ***)&UNK_14304a1e5;
        lStack_98 = 0x2c;
        uStack_90 = 0;
        puStack_88 = &UNK_14304a1ac;
        uStack_80 = 0x38;
        uStack_78 = 1;
        puStack_70 = &UNK_14304a1e5;
        uStack_68 = 0x2c;
        uStack_60 = 0xdd00000001;
        puStack_58 = &UNK_14304a287;
        ppppbStack_50 = (byte ****)&ppppbStack_c0;
        pdb_140f332f0(&uStack_39,&ppppuStack_a8);
      }
      pdb_140f36c40(&pppbStack_d8);
    }
    else {
      ppppuStack_a8 = ppppuStack_d0;
      pppbStack_a0 = pppbStack_c8;
      *(undefined4 *)param_1[10] = *(undefined4 *)((longlong)param_1 + 0x5c);
      pdb_141b00390(plVar13,param_1[8],&ppppuStack_a8,auStack_150);
      ppppuVar21 = ppppuStack_a8;
      LOCK();
      *ppppuStack_a8 = (byte ****)((longlong)*ppppuStack_a8 + -1);
      UNLOCK();
      if ((byte ****)*ppppuVar21 == (byte ****)0x0) {
        pdb_140dd78e0(&ppppuStack_a8);
      }
      LOCK();
      *pppbStack_a0 = (byte **)((longlong)*pppbStack_a0 + -1);
      UNLOCK();
      pdb_142d8feb0(pppbStack_a0 + 1);
    }
    lVar18 = *plVar13;
    puVar17 = auStack_150;
    *(undefined4 *)param_1[0xe] = *(undefined4 *)((longlong)param_1 + 0x7c);
    uVar5 = param_1[0xc];
    *(undefined4 *)param_1[0x12] = *(undefined4 *)((longlong)param_1 + 0x9c);
    uVar6 = param_1[0x10];
    *(undefined4 *)param_1[0x16] = *(undefined4 *)((longlong)param_1 + 0xbc);
    uVar7 = param_1[0x14];
    *(undefined4 *)param_1[0x1a] = *(undefined4 *)((longlong)param_1 + 0xdc);
    pdb_140ab5050(lVar18 + 0x10,puVar17,uVar5,uVar6,uVar7,param_1[0x18]);
    uVar15 = SUB84(puVar17,0);
    *(undefined4 *)param_1[0x1e] = *(undefined4 *)((longlong)param_1 + 0xfc);
    lVar18 = param_1[0x1c];
    lVar20 = *(longlong *)(lVar18 + 0x30);
    uVar5 = *(undefined8 *)(lVar18 + 0x40);
    if (lVar20 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7e8a0(lVar18 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar20 * 8) = uVar5;
    *(longlong *)(lVar18 + 0x30) = lVar20 + 1;
    *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
    if (2 < *puVar9) {
      ppppuStack_d0 = (undefined8 ****)pdb_140f3cb70(&uStack_108);
      pppbStack_c8 = (byte ***)CONCAT44(pppbStack_c8._4_4_,uVar15);
      pcStack_b8 = pdb_140f72840;
      ppppuStack_a8 = (byte *****)0x0;
      pppbStack_a0 = (byte ***)&UNK_14304a1e5;
      lStack_98 = 0x2c;
      uStack_90 = 0;
      puStack_88 = &UNK_14304a1ac;
      uStack_80 = 0x38;
      uStack_78 = 3;
      puStack_70 = &UNK_14304a1e5;
      uStack_68 = 0x2c;
      uStack_60 = 0xea00000001;
      puStack_58 = &UNK_14304a2bf;
      ppppbStack_50 = (byte ****)&ppppbStack_c0;
      ppppbStack_c0 = (byte ****)&ppppuStack_d0;
      pdb_140f332f0(&uStack_39,&ppppuStack_a8);
    }
    if (lStack_e8 != 0) {
      plVar13 = (longlong *)pdb_140e97000();
      if (((char)plVar13[0xd] == '\x01') ||
         (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 != (longlong *)0x0)) {
        if (*plVar13 == 0) {
          *plVar13 = -1;
          plStack_48 = plVar13;
          pdb_140e95370(plVar13 + 1,uStack_e0);
          *plStack_48 = *plStack_48 + 1;
          goto LAB_140ab42b0;
        }
        pdb_142dc8090(&UNK_143326a50);
      }
      else {
        pdb_142dc7890(&UNK_143326860);
      }
LAB_140ab439d:
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
  }
LAB_140ab42b0:
  pdb_14098acf0(apppbStack_168);
  return;
}

