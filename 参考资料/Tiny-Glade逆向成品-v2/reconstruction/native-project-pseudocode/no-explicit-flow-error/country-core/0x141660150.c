// VA 0x141660150, PDB extent 1939 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::time_of_day::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::time_of_day::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1939 */

undefined8 * pdb_141660150(undefined8 *param_1,undefined8 *****param_2)

{
  undefined8 *****pppppuVar1;
  byte bVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  code *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuStack_b8;
  undefined1 uStack_b0;
  longlong lStack_a8;
  undefined8 ****ppppuStack_a0;
  code *pcStack_98;
  longlong lStack_90;
  undefined1 uStack_81;
  undefined8 ****ppppuStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  longlong lStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppuVar4 = param_2[5];
  if (ppppuVar4 < param_2[4]) {
    lVar9 = 0x100002600;
    do {
      ppppuVar4 = (undefined8 ****)((longlong)ppppuVar4 + 1);
      bVar2 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppuVar4);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pppppuVar11 = param_2 + 9;
          *(char *)pppppuVar11 = *(char *)pppppuVar11 + -1;
          if (*(char *)pppppuVar11 != '\0') {
            param_2[5] = ppppuVar4;
            pcStack_98 = (code *)CONCAT71(pcStack_98._1_7_,1);
            ppppuStack_a0 = param_2;
            pdb_140407e70(&uStack_78,&ppppuStack_a0);
            pcStack_50 = pcStack_70;
            if ((char)uStack_78 == '\x01') {
LAB_14166044b:
              ppppuStack_60 = (undefined8 *****)0x8000000000000000;
            }
            else {
              if (uStack_78._1_1_ != '\x01') {
                pcStack_50 = (code *)pdb_142d8f0e0(0,&UNK_143322870,&UNK_143322608);
                goto LAB_14166044b;
              }
              pdb_141659ba0(&uStack_78,ppppuStack_a0);
              pcStack_50 = pcStack_70;
              if (SBORROW8(0,(longlong)uStack_78)) goto LAB_14166044b;
              ppppuStack_60 = uStack_78;
              lVar9 = lStack_68;
            }
            *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
            pcVar7 = (code *)pdb_140404e50(param_2);
            pcVar8 = pcVar7;
            if (!SBORROW8(0,(longlong)ppppuStack_60)) goto joined_r0x000141660489;
            pcVar8 = pcStack_50;
            if (pcVar7 == (code *)0x0) goto LAB_14166065f;
            lVar9 = *(longlong *)pcVar7;
            pcStack_58 = pcVar7;
            if (lVar9 != 1) goto LAB_1416605e1;
            pdb_1404b38e0(pcVar7 + 8);
            goto LAB_141660647;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pcVar8 = (code *)pdb_142de8b10(param_2,&uStack_81,&UNK_143323b60);
            goto LAB_14166065f;
          }
          pppppuVar11 = param_2 + 9;
          *(char *)pppppuVar11 = *(char *)pppppuVar11 + -1;
          if (*(char *)pppppuVar11 != '\0') {
            param_2[5] = ppppuVar4;
            uStack_b0 = 1;
            pppppuVar11 = (undefined8 *****)0x8000000000000000;
            ppppuStack_b8 = param_2;
            goto LAB_141660210;
          }
        }
        uStack_78 = (undefined8 *****)0x18;
        goto LAB_1416601c8;
      }
      param_2[5] = ppppuVar4;
    } while (ppppuVar4 != param_2[4]);
  }
  uStack_78 = (undefined8 *****)0x5;
LAB_1416601c8:
  uVar5 = pdb_142d84ef0(param_2,&uStack_78);
  goto LAB_141660667;
LAB_141660210:
  do {
    ppppuStack_80 = pppppuVar11;
    pdb_140407a40(&uStack_78,&ppppuStack_b8);
    ppppuVar4 = ppppuStack_b8;
    pcStack_50 = pcStack_70;
    if ((char)uStack_78 == '\x01') break;
    if (uStack_78._1_1_ == '\0') {
      if (SBORROW8(0,(longlong)pppppuVar11)) {
        ppppuStack_a0 = (undefined8 ****)&UNK_143322848;
        pcStack_98 = (code *)0x7;
        uStack_78 = &ppppuStack_a0;
        pcStack_70 = pdb_1402ed400;
        ppppuStack_80 = (undefined8 *****)0x8000000000000000;
        pcStack_50 = (code *)pdb_142d872f0(&UNK_143044fe5,&uStack_78);
        ppppuStack_60 = (undefined8 *****)0x8000000000000000;
        lVar9 = -0x8000000000000000;
      }
      else {
        pcStack_50 = pcStack_58;
        lVar9 = lStack_a8;
        ppppuStack_60 = pppppuVar11;
      }
      goto LAB_1416604ef;
    }
    ppppuStack_b8[5] = (undefined8 ****)((longlong)ppppuStack_b8[5] + 1);
    pppppuVar1 = (undefined8 *****)(ppppuStack_b8 + 3);
    ppppuStack_b8[2] = (undefined8 ****)0x0;
    ppppuStack_80 = pppppuVar11;
    pdb_140de3310(&uStack_78,pppppuVar1,ppppuStack_b8);
    pcStack_50 = pcStack_70;
    if ((int)uStack_78 == 2) break;
    if ((lStack_68 == 7) &&
       (*(int *)(pcStack_70 + 3) == CONCAT31(_UNK_14304c9fc,DAT_14304c9fb) &&
        *(int *)pcStack_70 == _DAT_14304c9f8)) {
      if (!SBORROW8(0,(longlong)pppppuVar11)) {
        ppppuStack_a0 = (undefined8 ****)&UNK_143322848;
        pcStack_98 = (code *)0x7;
        uStack_78 = &ppppuStack_a0;
        pcStack_70 = pdb_1402ed400;
        ppppuStack_80 = pppppuVar11;
        pcStack_50 = (code *)pdb_142d872f0(&UNK_143045061,&uStack_78);
        goto LAB_1416604c1;
      }
      ppppuVar6 = (undefined8 ****)ppppuVar4[5];
      if (ppppuVar6 < ppppuVar4[4]) {
        ppppuVar3 = *pppppuVar1;
        while( true ) {
          ppppuVar6 = (undefined8 ****)((longlong)ppppuVar6 + 1);
          uVar10 = (ulonglong)*(byte *)((longlong)ppppuVar3 + -1 + (longlong)ppppuVar6);
          if (0x3a < uVar10) goto LAB_141660740;
          if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
          ppppuVar4[5] = ppppuVar6;
          if (ppppuVar6 == (undefined8 ****)ppppuVar4[4]) goto LAB_14166067d;
        }
        if (uVar10 == 0x3a) {
          ppppuVar4[5] = ppppuVar6;
          ppppuStack_80 = (undefined8 *****)0x8000000000000000;
          pdb_141659ba0(&ppppuStack_a0,ppppuVar4);
          pcStack_50 = pcStack_98;
          if (!SBORROW8(0,(longlong)ppppuStack_a0)) {
            lStack_a8 = lStack_90;
            pppppuVar11 = (undefined8 *****)ppppuStack_a0;
            pcStack_58 = pcStack_98;
            goto LAB_141660210;
          }
        }
        else {
LAB_141660740:
          uStack_78 = (undefined8 *****)0x6;
          ppppuStack_80 = (undefined8 *****)0x8000000000000000;
          pcStack_50 = (code *)pdb_142d84ef0(ppppuVar4,&uStack_78);
        }
      }
      else {
LAB_14166067d:
        uStack_78 = (undefined8 *****)0x3;
        ppppuStack_80 = (undefined8 *****)0x8000000000000000;
        pcStack_50 = (code *)pdb_142d84ef0(ppppuVar4,&uStack_78);
      }
      ppppuStack_60 = (undefined8 *****)0x8000000000000000;
      goto LAB_1416604ef;
    }
    ppppuVar6 = (undefined8 ****)ppppuVar4[5];
    if (ppppuVar4[4] <= ppppuVar6) {
LAB_1416603e4:
      uStack_78 = (undefined8 *****)0x3;
      ppppuStack_80 = pppppuVar11;
      pcStack_50 = (code *)pdb_142d84ef0(ppppuVar4,&uStack_78);
      break;
    }
    ppppuVar3 = *pppppuVar1;
    while( true ) {
      ppppuVar6 = (undefined8 ****)((longlong)ppppuVar6 + 1);
      uVar10 = (ulonglong)*(byte *)((longlong)ppppuVar3 + -1 + (longlong)ppppuVar6);
      if (0x3a < uVar10) goto LAB_1416606ba;
      if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
      ppppuVar4[5] = ppppuVar6;
      if (ppppuVar6 == (undefined8 ****)ppppuVar4[4]) goto LAB_1416603e4;
    }
    if (uVar10 != 0x3a) {
LAB_1416606ba:
      uStack_78 = (undefined8 *****)0x6;
      ppppuStack_80 = pppppuVar11;
      pcStack_50 = (code *)pdb_142d84ef0(ppppuVar4,&uStack_78);
      break;
    }
    ppppuVar4[5] = ppppuVar6;
    ppppuStack_80 = pppppuVar11;
    pcStack_50 = (code *)pdb_14164c7b0(ppppuVar4);
  } while (pcStack_50 == (code *)0x0);
  if (SBORROW8(0,(longlong)pppppuVar11)) {
    ppppuStack_60 = (undefined8 *****)0x8000000000000000;
  }
  else {
LAB_1416604c1:
    ppppuStack_60 = (undefined8 *****)0x8000000000000000;
    if (pppppuVar11 != (undefined8 *****)0x0) {
      pub_1406abac0((byte *)pcStack_58,(longlong)pppppuVar11 * 0x60,8);
    }
  }
LAB_1416604ef:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  pcVar7 = (code *)pdb_140404da0(param_2);
  pcVar8 = pcVar7;
  if (SBORROW8(0,(longlong)ppppuStack_60)) {
    pcVar8 = pcStack_50;
    if (pcVar7 != (code *)0x0) {
      lVar9 = *(longlong *)pcVar7;
      pcStack_58 = pcVar7;
      if (lVar9 == 1) {
        pdb_1404b38e0(pcVar7 + 8);
      }
      else {
LAB_1416605e1:
        if ((lVar9 == 0) && (*(ulonglong *)(pcStack_58 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(pcStack_58 + 8),*(ulonglong *)(pcStack_58 + 0x10),1);
        }
      }
LAB_141660647:
      pub_1406abac0((byte *)pcStack_58,0x28,8);
      pcVar8 = pcStack_50;
    }
  }
  else {
joined_r0x000141660489:
    if (pcVar8 == (code *)0x0) {
      *param_1 = ppppuStack_60;
      param_1[1] = pcStack_50;
      param_1[2] = lVar9;
      return param_1;
    }
    if ((undefined8 *****)ppppuStack_60 != (undefined8 *****)0x0) {
      pub_1406abac0((byte *)pcStack_50,(longlong)ppppuStack_60 * 0x60,8);
    }
  }
LAB_14166065f:
  uVar5 = pdb_142d86ed0(pcVar8,param_2);
LAB_141660667:
  param_1[1] = uVar5;
  *param_1 = 0x8000000000000000;
  return param_1;
}

