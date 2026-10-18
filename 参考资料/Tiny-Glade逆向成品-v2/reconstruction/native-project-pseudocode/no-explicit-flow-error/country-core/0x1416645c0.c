// VA 0x1416645c0, PDB extent 3060 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,country_core::resources::clutter_packs::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,country_core::resources::clutter_packs::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 3060 */

undefined8 * pdb_1416645c0(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  char unaff_R12B;
  longlong *unaff_R13;
  char unaff_R14B;
  undefined8 *puStack_c8;
  undefined1 uStack_c0;
  longlong *plStack_b8;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  code *pcStack_a0;
  longlong *plStack_98;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  longlong *plStack_70;
  char cStack_61;
  code *pcStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar4 = param_2[5];
  if (uVar4 < (ulonglong)param_2[4]) {
    do {
      uVar4 = uVar4 + 1;
      bVar2 = *(byte *)(param_2[3] + -1 + uVar4);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pcVar1 = (char *)(param_2 + 7);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            param_2[5] = uVar4;
            pcStack_a0 = (code *)CONCAT71(pcStack_a0._1_7_,1);
            uStack_a8 = param_2;
            pdb_140407e70(&uStack_80,&uStack_a8);
            if (uStack_80._0_1_ == (code)0x1) {
              pcStack_60 = pcStack_78;
LAB_1416649ce:
              puStack_58 = (undefined8 *)0x8000000000000000;
            }
            else {
              if (uStack_80._1_1_ != '\x01') {
                pcStack_60 = (code *)pdb_142d8f0e0(0,&UNK_143322ff0,&UNK_143322608);
                goto LAB_1416649ce;
              }
              pdb_14165c3e0(&uStack_80,uStack_a8);
              pcStack_60 = pcStack_78;
              if (SBORROW8(0,(longlong)uStack_80)) goto LAB_1416649ce;
              puStack_58 = uStack_80;
              pdb_140407e70(&uStack_80,&uStack_a8);
              pcVar7 = pcStack_78;
              unaff_R13 = plStack_70;
              if (uStack_80._0_1_ == (code)0x1) {
LAB_141664c27:
                if (puStack_58 != (undefined8 *)0x0) {
                  pub_1406abac0((byte *)pcStack_60,(ulonglong)puStack_58,1);
                }
                puStack_58 = (undefined8 *)0x8000000000000000;
                pcStack_60 = pcVar7;
              }
              else {
                if (uStack_80._1_1_ != '\x01') {
                  pcVar7 = (code *)pdb_142d8f0e0(1,&UNK_143322ff0,&UNK_143322608);
                  goto LAB_141664c27;
                }
                pdb_141ad8950(&uStack_80,uStack_a8);
                pcVar7 = pcStack_78;
                if (uStack_80._0_1_ == (code)0x1) goto LAB_141664c27;
                unaff_R12B = uStack_80._1_1_;
                pdb_140407e70(&uStack_80,&uStack_a8);
                pcVar7 = pcStack_78;
                if (uStack_80._0_1_ == (code)0x1) goto LAB_141664c27;
                unaff_R14B = '\'';
                if (uStack_80._1_1_ == '\x01') {
                  pdb_140c6cc80(&uStack_80,uStack_a8);
                  pcVar7 = pcStack_78;
                  if (uStack_80._0_1_ == (code)0x1) goto LAB_141664c27;
                  unaff_R14B = uStack_80._1_1_;
                }
              }
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            pcVar6 = (code *)pdb_140404e50(param_2);
            pcVar9 = pcStack_60;
            pcVar7 = pcVar6;
            if (!SBORROW8(0,(longlong)puStack_58)) goto joined_r0x000141664c73;
            pcVar7 = pcStack_60;
            if (pcVar6 == (code *)0x0) goto LAB_141664d65;
            lVar8 = *(longlong *)pcVar6;
            pcStack_88 = pcVar6;
            if (lVar8 != 1) goto LAB_141664cec;
            pdb_1404b38e0(pcVar6 + 8);
            goto LAB_141664d4e;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pcVar7 = (code *)pdb_142de8e20(param_2,&uStack_a9,&UNK_143323ca0);
            goto LAB_141664d65;
          }
          pcVar1 = (char *)(param_2 + 7);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            param_2[5] = uVar4;
            uStack_c0 = 1;
            cStack_61 = '(';
            puStack_58 = (undefined8 *)0x8000000000000000;
            pcVar7 = (code *)&uStack_80;
            uVar10 = 4;
            puStack_c8 = param_2;
            goto LAB_14166468e;
          }
        }
        uStack_80 = (undefined8 *)0x18;
        goto LAB_141664638;
      }
      param_2[5] = uVar4;
    } while (uVar4 != param_2[4]);
  }
  uStack_80 = (undefined8 *)0x5;
LAB_141664638:
  uVar5 = pdb_142d84ef0(param_2,&uStack_80);
  goto LAB_141664d6d;
LAB_14166468e:
  pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,uVar10);
LAB_1416646a0:
  do {
    uStack_49 = 1;
    puStack_90 = puStack_58;
    pdb_140407a40(pcVar7,&puStack_c8);
    puVar3 = puStack_c8;
    pcVar9 = pcStack_78;
    if (uStack_80._0_1_ == (code)0x1) goto joined_r0x000141664ac1;
    if (uStack_80._1_1_ == '\0') {
      if (SBORROW8(0,(longlong)puStack_58)) {
        uStack_a8 = (undefined8 *)&UNK_143322f78;
        pcStack_a0 = (code *)0x4;
        uStack_80 = &uStack_a8;
        pcStack_78 = pdb_1402ed400;
        puStack_58 = (undefined8 *)0x8000000000000000;
        puStack_90 = (undefined8 *)0x8000000000000000;
        uStack_49 = 1;
        pcStack_60 = (code *)pdb_142d872f0(&UNK_143044fe5,&uStack_80);
        goto LAB_141664acf;
      }
      unaff_R12B = (char)pcStack_88;
      if ((char)pcStack_88 == '\x04') {
        uStack_a8 = (undefined8 *)&UNK_143322fb8;
        pcStack_a0 = (code *)0x8;
        uStack_80 = &uStack_a8;
        pcStack_78 = pdb_1402ed400;
        pcVar7 = (code *)pdb_142d872f0(&UNK_143044fe5,&uStack_80);
        if (puStack_58 != (undefined8 *)0x0) {
          pub_1406abac0((byte *)pcStack_60,(ulonglong)puStack_58,1);
        }
        puStack_58 = (undefined8 *)0x8000000000000000;
        pcStack_60 = pcVar7;
        unaff_R14B = '\0';
      }
      else {
        unaff_R13 = plStack_b8;
        unaff_R14B = '\'';
        if (cStack_61 != '(') {
          unaff_R14B = cStack_61;
        }
      }
      goto LAB_141664ad4;
    }
    puStack_c8[5] = puStack_c8[5] + 1;
    unaff_R13 = puStack_c8 + 3;
    puStack_c8[2] = 0;
    puStack_90 = puStack_58;
    uStack_49 = 1;
    pdb_140de3740(pcVar7,unaff_R13,puStack_c8);
    pcVar9 = pcStack_78;
    if ((int)uStack_80 == 2) goto joined_r0x000141664ac1;
    if (plStack_70 == (longlong *)0x8) {
      if (*(longlong *)pcStack_78 == _DAT_1433a0233) {
        if ((char)pcStack_88 != '\x04') {
          uStack_a8 = (undefined8 *)&UNK_143322fb8;
          pcStack_a0 = (code *)0x8;
          uStack_80 = &uStack_a8;
          pcStack_78 = pdb_1402ed400;
          puStack_90 = puStack_58;
          uStack_49 = 1;
          pcVar9 = (code *)pdb_142d872f0(&UNK_143045061,&uStack_80);
          goto joined_r0x000141664ac1;
        }
        uVar4 = puVar3[5];
        if ((ulonglong)puVar3[4] <= uVar4) {
LAB_141664dea:
          uStack_80 = (undefined8 *)0x3;
          puStack_90 = puStack_58;
          uStack_49 = 1;
          pcVar9 = (code *)pdb_142d84ef0(puVar3,&uStack_80);
          goto joined_r0x000141664ac1;
        }
        lVar8 = *unaff_R13;
        while( true ) {
          uVar4 = uVar4 + 1;
          uVar11 = (ulonglong)*(byte *)(lVar8 + -1 + uVar4);
          if (0x3a < uVar11) goto LAB_141664f67;
          if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
          puVar3[5] = uVar4;
          if (uVar4 == puVar3[4]) goto LAB_141664dea;
        }
        if (uVar11 != 0x3a) {
LAB_141664f67:
          uStack_80 = (undefined8 *)0x6;
          puStack_90 = puStack_58;
          uStack_49 = 1;
          pcVar9 = (code *)pdb_142d84ef0(puVar3,&uStack_80);
          goto joined_r0x000141664ac1;
        }
        puVar3[5] = uVar4;
        puStack_90 = puStack_58;
        uStack_49 = 1;
        pdb_141ad8950(&uStack_a8,puVar3);
        pcVar9 = pcStack_a0;
        if ((char)uStack_a8 != '\0') goto joined_r0x000141664ac1;
        pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,uStack_a8._1_1_);
        goto LAB_1416646a0;
      }
    }
    else if (plStack_70 == (longlong *)0x5) {
      if (pcStack_78[4] == DAT_1433a023f && *(int *)pcStack_78 == _DAT_1433a023b) {
        if (cStack_61 != '(') {
          uStack_a8 = (undefined8 *)&UNK_143322fc0;
          pcStack_a0 = (code *)0x5;
          uStack_80 = &uStack_a8;
          pcStack_78 = pdb_1402ed400;
          puStack_90 = puStack_58;
          uStack_49 = 1;
          pcVar9 = (code *)pdb_142d872f0(&UNK_143045061,&uStack_80);
          goto joined_r0x000141664ac1;
        }
        uVar4 = puVar3[5];
        if ((ulonglong)puVar3[4] <= uVar4) goto LAB_141664dc4;
        lVar8 = *unaff_R13;
        break;
      }
    }
    else if ((plStack_70 == (longlong *)0x4) && (*(int *)pcStack_78 == _DAT_1433a022f))
    goto LAB_1416648b9;
    puStack_90 = puStack_58;
    uStack_49 = 1;
    pcVar9 = (code *)pdb_14164b700(puVar3);
    if (pcVar9 != (code *)0x0) goto joined_r0x000141664ac1;
  } while( true );
LAB_141664843:
  uVar4 = uVar4 + 1;
  uVar11 = (ulonglong)*(byte *)(lVar8 + -1 + uVar4);
  if (0x3a < uVar11) goto LAB_141664f41;
  if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) goto LAB_141664873;
  puVar3[5] = uVar4;
  if (uVar4 == puVar3[4]) goto LAB_141664dc4;
  goto LAB_141664843;
LAB_141664873:
  if (uVar11 != 0x3a) {
LAB_141664f41:
    uStack_80 = (undefined8 *)0x6;
    puStack_90 = puStack_58;
    uStack_49 = 1;
    pcVar9 = (code *)pdb_142d84ef0(puVar3,&uStack_80);
    goto joined_r0x000141664ac1;
  }
  puVar3[5] = uVar4;
  puStack_90 = puStack_58;
  uStack_49 = 1;
  pdb_140c6cc80(&uStack_a8,puVar3);
  pcVar9 = pcStack_a0;
  if ((char)uStack_a8 != '\0') goto joined_r0x000141664ac1;
  cStack_61 = uStack_a8._1_1_;
  uVar10 = (char)pcStack_88;
  goto LAB_14166468e;
LAB_141664dc4:
  uStack_80 = (undefined8 *)0x3;
  puStack_90 = puStack_58;
  uStack_49 = 1;
  pcVar9 = (code *)pdb_142d84ef0(puVar3,&uStack_80);
  goto joined_r0x000141664ac1;
LAB_1416648b9:
  if (SBORROW8(0,(longlong)puStack_58)) {
    uVar4 = puVar3[5];
    if (uVar4 < (ulonglong)puVar3[4]) {
      lVar8 = *unaff_R13;
      while( true ) {
        uVar4 = uVar4 + 1;
        uVar11 = (ulonglong)*(byte *)(lVar8 + -1 + uVar4);
        if (0x3a < uVar11) goto LAB_141664f15;
        if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
        puVar3[5] = uVar4;
        if (uVar4 == puVar3[4]) goto LAB_141664d83;
      }
      if (uVar11 == 0x3a) {
        puVar3[5] = uVar4;
        puStack_90 = (undefined8 *)0x8000000000000000;
        uStack_49 = 1;
        pdb_14165c3e0(&uStack_a8,puVar3);
        pcStack_60 = pcStack_a0;
        if (!SBORROW8(0,(longlong)uStack_a8)) {
          plStack_b8 = plStack_98;
          uVar10 = (char)pcStack_88;
          puStack_58 = uStack_a8;
          goto LAB_14166468e;
        }
      }
      else {
LAB_141664f15:
        uStack_80 = (undefined8 *)0x6;
        puStack_90 = (undefined8 *)0x8000000000000000;
        uStack_49 = 1;
        pcStack_60 = (code *)pdb_142d84ef0(puVar3,&uStack_80);
      }
    }
    else {
LAB_141664d83:
      uStack_80 = (undefined8 *)0x3;
      puStack_90 = (undefined8 *)0x8000000000000000;
      uStack_49 = 1;
      pcStack_60 = (code *)pdb_142d84ef0(puVar3,&uStack_80);
    }
    puStack_58 = (undefined8 *)0x8000000000000000;
    goto LAB_141664acf;
  }
  uStack_a8 = (undefined8 *)&UNK_143322f78;
  pcStack_a0 = (code *)0x4;
  uStack_80 = &uStack_a8;
  pcStack_78 = pdb_1402ed400;
  puStack_90 = puStack_58;
  uStack_49 = 1;
  pcVar9 = (code *)pdb_142d872f0(&UNK_143045061,&uStack_80);
joined_r0x000141664ac1:
  if (((ulonglong)puStack_58 & 0x7fffffffffffffff) != 0) {
    pub_1406abac0((byte *)pcStack_60,(ulonglong)puStack_58,1);
    pcVar7 = pcVar9;
  }
  puStack_58 = (undefined8 *)0x8000000000000000;
  pcStack_60 = pcVar9;
LAB_141664acf:
  unaff_R12B = (char)pcStack_88;
  unaff_R14B = (char)pcVar7;
LAB_141664ad4:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  pcVar6 = (code *)pdb_140404da0(param_2);
  pcVar9 = pcStack_60;
  pcVar7 = pcVar6;
  if (SBORROW8(0,(longlong)puStack_58)) {
    pcVar7 = pcStack_60;
    if (pcVar6 != (code *)0x0) {
      lVar8 = *(longlong *)pcVar6;
      pcStack_88 = pcVar6;
      if (lVar8 == 1) {
        pdb_1404b38e0(pcVar6 + 8);
      }
      else {
LAB_141664cec:
        pcVar9 = pcStack_60;
        if ((lVar8 == 0) && (*(ulonglong *)(pcStack_88 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(pcStack_88 + 8),*(ulonglong *)(pcStack_88 + 0x10),1);
        }
      }
LAB_141664d4e:
      pub_1406abac0((byte *)pcStack_88,0x28,8);
      pcVar7 = pcVar9;
    }
  }
  else {
joined_r0x000141664c73:
    if (pcVar7 == (code *)0x0) {
      param_1[2] = unaff_R13;
      *(char *)(param_1 + 3) = unaff_R12B;
      *(char *)((longlong)param_1 + 0x19) = unaff_R14B;
      *param_1 = puStack_58;
      param_1[1] = pcStack_60;
      return param_1;
    }
    if (puStack_58 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)pcStack_60,(ulonglong)puStack_58,1);
    }
  }
LAB_141664d65:
  uVar5 = pdb_142d86ed0(pcVar7,param_2);
LAB_141664d6d:
  param_1[1] = uVar5;
  *param_1 = 0x8000000000000000;
  return param_1;
}

