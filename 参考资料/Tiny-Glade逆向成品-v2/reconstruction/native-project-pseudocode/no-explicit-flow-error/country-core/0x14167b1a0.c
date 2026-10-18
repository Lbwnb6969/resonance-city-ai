// VA 0x14167b1a0, PDB extent 1933 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::rocky_terrain::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::rocky_terrain::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1933 */

undefined4 * pdb_14167b1a0(undefined4 *param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined *puVar13;
  undefined4 unaff_EBX;
  ulonglong uVar14;
  undefined4 unaff_R14D;
  int iVar15;
  byte *pbStack_c0;
  longlong lStack_b8;
  undefined1 uStack_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined1 uStack_99;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  code *pcStack_70;
  longlong lStack_68;
  byte *apbStack_60 [2];
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar6 = *(ulonglong *)(param_2 + 0x28);
  if (uVar6 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar6 = uVar6 + 1;
      bVar3 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar6);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          pcVar1 = (char *)(param_2 + 0x48);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar6;
            pbStack_88 = (byte *)CONCAT71(pbStack_88._1_7_,1);
            puVar11 = &uStack_78;
            uStack_90 = (undefined *)param_2;
            pdb_140407e70(puVar11,&uStack_90);
            uVar10 = (int)puVar11;
            if ((char)uStack_78 == '\x01') {
LAB_14167b339:
              uStack_78._4_4_ = uVar10;
              uVar10 = 1;
              uStack_50 = 0;
              pcVar9 = pcStack_70;
            }
            else {
              if (uStack_78._1_1_ == '\x01') {
                puVar11 = &uStack_78;
                pdb_14165bae0(puVar11,uStack_90);
                pcVar9 = pcStack_70;
                uVar10 = (int)puVar11;
                if ((int)uStack_78 != 1) {
                  unaff_R14D = uStack_78._4_4_;
                  puVar11 = &uStack_78;
                  pdb_140407e70(puVar11,&uStack_90);
                  uVar10 = (int)puVar11;
                  if ((char)uStack_78 != '\x01') {
                    if (uStack_78._1_1_ == '\x01') {
                      puVar11 = &uStack_78;
                      pdb_141654530(puVar11,uStack_90);
                      uVar10 = (int)puVar11;
                      if ((int)uStack_78 != 1) {
                        uVar10 = 0;
                        uStack_50 = CONCAT71((int7)((ulonglong)uStack_90 >> 8),1);
                        goto LAB_14167b346;
                      }
                    }
                    else {
                      uVar10 = 1;
                      pcStack_70 = (code *)pdb_142d8f0e0(1,&UNK_143323160,&UNK_143322608);
                    }
                  }
                }
                goto LAB_14167b339;
              }
              uStack_50 = 0;
              uStack_78._4_4_ = 0;
              pcVar9 = (code *)pdb_142d8f0e0(0,&UNK_143323160,&UNK_143322608);
              uVar10 = 1;
            }
LAB_14167b346:
            *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
            uStack_90 = (undefined *)CONCAT44(unaff_R14D,uVar10);
            pbStack_88 = (byte *)pcVar9;
            uStack_80 = uStack_78._4_4_;
            apbStack_60[0] = (byte *)pdb_140404e50(param_2);
            pbStack_c0 = pbStack_88;
            lStack_68 = CONCAT44(uStack_7c,uStack_80);
            uStack_78 = (undefined8 *)uStack_90;
            pcStack_70 = (code *)pbStack_88;
            pbVar8 = apbStack_60[0];
            uVar10 = uStack_90._4_4_;
            pbVar5 = pbStack_88;
            unaff_EBX = uStack_80;
            if (((ulonglong)uStack_90 & 1) == 0) goto joined_r0x00014167b384;
            if (apbStack_60[0] != (byte *)0x0) {
              pdb_1404b4b10(apbStack_60);
            }
            goto LAB_14167b73e;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            pbStack_c0 = (byte *)pdb_142de8b10(param_2,&uStack_99,&UNK_143323ec0);
            goto LAB_14167b73e;
          }
          pcVar1 = (char *)(param_2 + 0x48);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar6;
            uStack_b0 = 1;
            puVar11 = &uStack_78;
            lStack_b8 = param_2;
            uVar7 = pdb_140407a40(puVar11,&lStack_b8);
            uVar10 = SUB84(puVar11,0);
            pcVar9 = pcStack_70;
            if ((char)uStack_78 != '\0') goto LAB_14167b26d;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            uStack_a0 = 0;
            uStack_a4 = 0;
            pbStack_98 = (byte *)((ulonglong)pbStack_98 & 0xffffffff00000000);
            goto LAB_14167b416;
          }
        }
        uStack_78 = (undefined8 *)0x18;
        goto LAB_14167b218;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar6;
    } while (uVar6 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_78 = (undefined8 *)0x5;
LAB_14167b218:
  uVar7 = pdb_142d84ef0(param_2,&uStack_78);
  goto LAB_14167b746;
LAB_14167b416:
  do {
    lVar12 = lStack_b8;
    if (uStack_78._1_1_ == '\0') {
      if ((uStack_a4 & 1) == 0) {
        uStack_90 = &UNK_143323118;
        pbStack_88 = (byte *)0xa;
      }
      else {
        if ((uStack_a0 & 1) != 0) {
          iVar15 = 0;
          uStack_50 = CONCAT44(uStack_50._4_4_,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1));
          uVar10 = uStack_a8;
          goto LAB_14167b27a;
        }
        uStack_90 = &UNK_143323122;
        pbStack_88 = (byte *)0x6;
      }
      puVar13 = &UNK_143044fe5;
LAB_14167b7b6:
      uStack_78 = &uStack_90;
      pcStack_70 = pdb_1402ed400;
      pcVar9 = (code *)pdb_142d872f0(puVar13,&uStack_78);
      uVar10 = SUB84(puVar13,0);
      break;
    }
    plVar2 = (longlong *)(lStack_b8 + 0x18);
    *(longlong *)(lStack_b8 + 0x28) = *(longlong *)(lStack_b8 + 0x28) + 1;
    *(undefined8 *)(lStack_b8 + 0x10) = 0;
    puVar11 = &uStack_78;
    pdb_140de3310(&uStack_78,plVar2,lStack_b8);
    uVar10 = SUB84(puVar11,0);
    pcVar9 = pcStack_70;
    if ((int)uStack_78 == 2) break;
    if (lStack_68 != 6) {
      if ((lStack_68 == 10) &&
         (*(short *)(pcStack_70 + 8) == _DAT_1433a3472 && *(longlong *)pcStack_70 == _DAT_1433a346a)
         ) {
        if ((int)uStack_50 != 0) {
          uStack_90 = &UNK_143323118;
          pbStack_88 = (byte *)0xa;
LAB_14167b821:
          puVar13 = &UNK_143045061;
          goto LAB_14167b7b6;
        }
        uVar6 = *(ulonglong *)(lVar12 + 0x28);
        if (*(ulonglong *)(lVar12 + 0x20) <= uVar6) goto LAB_14167b6d1;
        lVar4 = *plVar2;
        while( true ) {
          uVar6 = uVar6 + 1;
          uVar14 = (ulonglong)*(byte *)(lVar4 + -1 + uVar6);
          if (0x3a < uVar14) goto LAB_14167b7c4;
          if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(lVar12 + 0x28) = uVar6;
          if (uVar6 == *(ulonglong *)(lVar12 + 0x20)) goto LAB_14167b6d1;
        }
        if (uVar14 == 0x3a) {
          *(ulonglong *)(lVar12 + 0x28) = uVar6;
          puVar11 = &uStack_90;
          pdb_14165bae0(puVar11,lVar12);
          uVar10 = SUB84(puVar11,0);
          pcVar9 = (code *)pbStack_88;
          if ((char)uStack_90 == '\0') {
            uStack_a8 = uStack_90._4_4_;
            pbStack_c0 = pbStack_88;
            uStack_a4 = (uint)CONCAT71((int7)((ulonglong)pbStack_88 >> 8),1);
            uStack_50 = CONCAT44(uStack_50._4_4_,1);
            goto LAB_14167b400;
          }
          break;
        }
LAB_14167b7c4:
        uStack_78 = (undefined8 *)0x6;
      }
      else {
LAB_14167b50a:
        uVar6 = *(ulonglong *)(lVar12 + 0x28);
        if (uVar6 < *(ulonglong *)(lVar12 + 0x20)) {
          lVar4 = *plVar2;
          while( true ) {
            uVar6 = uVar6 + 1;
            uVar14 = (ulonglong)*(byte *)(lVar4 + -1 + uVar6);
            if (0x3a < uVar14) goto LAB_14167b7c4;
            if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
            *(ulonglong *)(lVar12 + 0x28) = uVar6;
            if (uVar6 == *(ulonglong *)(lVar12 + 0x20)) goto LAB_14167b6d1;
          }
          if (uVar14 != 0x3a) goto LAB_14167b7c4;
          *(ulonglong *)(lVar12 + 0x28) = uVar6;
          pcVar9 = (code *)pdb_14164c7b0();
          uVar10 = (undefined4)lVar12;
          if (pcVar9 == (code *)0x0) goto LAB_14167b400;
          break;
        }
LAB_14167b6d1:
        uStack_78 = (undefined8 *)0x3;
      }
      pcVar9 = (code *)pdb_142d84ef0(lVar12,&uStack_78);
      uVar10 = (undefined4)lVar12;
      break;
    }
    if (*(short *)(pcStack_70 + 4) != _DAT_1433a3478 || *(int *)pcStack_70 != _DAT_1433a3474)
    goto LAB_14167b50a;
    if ((int)pbStack_98 != 0) {
      uStack_90 = &UNK_143323122;
      pbStack_88 = (byte *)0x6;
      goto LAB_14167b821;
    }
    uVar6 = *(ulonglong *)(lVar12 + 0x28);
    if (*(ulonglong *)(lVar12 + 0x20) <= uVar6) goto LAB_14167b6d1;
    lVar4 = *plVar2;
    while( true ) {
      uVar6 = uVar6 + 1;
      uVar14 = (ulonglong)*(byte *)(lVar4 + -1 + uVar6);
      if (0x3a < uVar14) goto LAB_14167b7c4;
      if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lVar12 + 0x28) = uVar6;
      if (uVar6 == *(ulonglong *)(lVar12 + 0x20)) goto LAB_14167b6d1;
    }
    if (uVar14 != 0x3a) goto LAB_14167b7c4;
    *(ulonglong *)(lVar12 + 0x28) = uVar6;
    puVar11 = &uStack_90;
    uVar7 = pdb_141654530(puVar11,lVar12);
    uVar10 = SUB84(puVar11,0);
    pcVar9 = (code *)pbStack_88;
    if ((char)uStack_90 != '\0') break;
    uStack_a0 = (uint)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    pbStack_98 = (byte *)CONCAT44(pbStack_98._4_4_,1);
    unaff_EBX = uStack_90._4_4_;
LAB_14167b400:
    puVar11 = &uStack_78;
    uVar7 = pdb_140407a40(&uStack_78,&lStack_b8);
    uVar10 = SUB84(puVar11,0);
    pcVar9 = pcStack_70;
  } while ((char)uStack_78 == '\0');
LAB_14167b26d:
  iVar15 = 1;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  pbStack_c0 = (byte *)pcVar9;
LAB_14167b27a:
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  uStack_78 = (undefined8 *)CONCAT44(uVar10,iVar15);
  lStack_68 = CONCAT44(lStack_68._4_4_,unaff_EBX);
  pcStack_70 = (code *)pbStack_c0;
  pbVar8 = (byte *)pdb_140404da0(param_2);
  pbVar5 = pbStack_c0;
  if (iVar15 == 0) {
joined_r0x00014167b384:
    pbStack_c0 = pbVar8;
    if (pbStack_c0 == (byte *)0x0) {
      param_1[1] = uVar10;
      *(byte **)(param_1 + 2) = pbVar5;
      param_1[4] = unaff_EBX;
      uVar10 = 0;
      goto LAB_14167b3a2;
    }
  }
  else if (pbVar8 != (byte *)0x0) {
    pbStack_98 = pbVar8;
    if (*(longlong *)pbVar8 == 1) {
      pdb_1404b38e0(pbVar8 + 8);
    }
    else if ((*(longlong *)pbVar8 == 0) && (*(ulonglong *)(pbVar8 + 0x10) != 0)) {
      pub_1406abac0(*(byte **)(pbVar8 + 8),*(ulonglong *)(pbVar8 + 0x10),1);
    }
    pub_1406abac0(pbStack_98,0x28,8);
  }
LAB_14167b73e:
  uVar7 = pdb_142d86ed0(pbStack_c0,param_2);
LAB_14167b746:
  *(undefined8 *)(param_1 + 2) = uVar7;
  uVar10 = 1;
LAB_14167b3a2:
  *param_1 = uVar10;
  return param_1;
}

