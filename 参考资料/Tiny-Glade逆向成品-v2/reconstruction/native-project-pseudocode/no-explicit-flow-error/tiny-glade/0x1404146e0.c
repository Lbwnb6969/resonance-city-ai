// VA 0x1404146e0, PDB extent 1792 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,backtrace::capture::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,backtrace::capture::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1792 */

code * pdb_1404146e0(code *param_1,undefined8 *****param_2)

{
  undefined8 *****pppppuVar1;
  byte bVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  longlong lVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******extraout_RAX;
  undefined8 ******ppppppuVar11;
  ulonglong uVar12;
  undefined8 ****ppppuStack_d8;
  undefined1 uStack_d0;
  code *pcStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 *****pppppuStack_b0;
  code *pcStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined1 uStack_91;
  undefined8 *****pppppuStack_90;
  code *pcStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 *****pppppuStack_68;
  code *pcStack_60;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppuVar4 = param_2[5];
  if (ppppuVar4 < param_2[4]) {
    do {
      ppppuVar4 = (undefined8 ****)((longlong)ppppuVar4 + 1);
      bVar2 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppuVar4);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pppppuVar1 = param_2 + 7;
          *(char *)pppppuVar1 = *(char *)pppppuVar1 + -1;
          if (*(char *)pppppuVar1 != '\0') {
            param_2[5] = ppppuVar4;
            pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,1);
            ppppppuVar10 = &pppppuStack_90;
            pppppuStack_90 = param_2;
            pdb_140407e70(&uStack_78);
            if ((char)uStack_78 == '\x01') {
LAB_140414959:
              pppppuStack_68 = ppppppuVar10;
              uStack_78 = (undefined8 ******)0x8000000000000000;
            }
            else {
              if (uStack_78._1_1_ != '\x01') {
                ppppppuVar10 = (undefined8 ******)&UNK_142f56888;
                pcStack_70 = (code *)pdb_142d86de0(0,&UNK_142f56888,&UNK_142f56898);
                goto LAB_140414959;
              }
              pdb_14040e4b0(&uStack_78,pppppuStack_90);
              ppppppuVar10 = (undefined8 ******)-(longlong)uStack_78;
              if (SBORROW8(0,(longlong)uStack_78)) goto LAB_140414959;
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            pppppuStack_90 = uStack_78;
            pcStack_88 = pcStack_70;
            pppppuStack_80 = pppppuStack_68;
            pcVar8 = (code *)pdb_140404e50(param_2);
            pcVar6 = pcStack_88;
            pppppuStack_68 = pppppuStack_80;
            uStack_78 = (undefined8 ******)pppppuStack_90;
            pcStack_70 = pcStack_88;
            pcStack_60 = pcVar8;
            if (!SBORROW8(0,(longlong)pppppuStack_90)) {
              ppppppuVar10 = (undefined8 ******)pppppuStack_80;
              ppppppuVar11 = (undefined8 ******)pppppuStack_90;
              if (pcVar8 != (code *)0x0) {
                ppppppuVar10 = (undefined8 ******)pdb_1404b83f0(&uStack_78);
                pcVar6 = pcVar8;
                ppppppuVar11 = (undefined8 ******)0x8000000000000000;
              }
              goto LAB_140414b5e;
            }
            ppppppuVar10 = (undefined8 ******)-(longlong)pppppuStack_90;
            ppppppuVar11 = (undefined8 ******)0x8000000000000000;
            if (pcVar8 == (code *)0x0) goto LAB_140414b5e;
            lVar9 = *(longlong *)pcVar8;
            pcStack_50 = pcVar8;
            if (lVar9 != 1) goto LAB_140414ae6;
            pdb_1404b38e0(pcVar8 + 8);
            goto LAB_140414b4a;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pcVar6 = (code *)pdb_142d85290(param_2,&uStack_91,&UNK_142f57370);
            goto LAB_140414c1d;
          }
          pppppuVar1 = param_2 + 7;
          *(char *)pppppuVar1 = *(char *)pppppuVar1 + -1;
          if (*(char *)pppppuVar1 != '\0') {
            param_2[5] = ppppuVar4;
            uStack_d0 = 1;
            pppppuStack_b0 = (undefined8 ******)0x8000000000000000;
            ppppuStack_d8 = param_2;
            pcStack_50 = param_1;
            goto LAB_1404147c0;
          }
        }
        uStack_78 = (undefined8 ******)0x18;
        goto LAB_140414758;
      }
      param_2[5] = ppppuVar4;
    } while (ppppuVar4 != param_2[4]);
  }
  uStack_78 = (undefined8 ******)0x5;
LAB_140414758:
  uVar5 = pdb_142d84ef0(param_2,&uStack_78);
  goto LAB_140414763;
  while (pcVar6 = (code *)pdb_1404031f0(), pcVar6 == (code *)0x0) {
LAB_1404147c0:
    pdb_140407a40(&uStack_78,&ppppuStack_d8);
    ppppuVar4 = ppppuStack_d8;
    pcVar6 = pcStack_70;
    if ((char)uStack_78 == '\x01') break;
    if (uStack_78._1_1_ != '\x01') {
      pcVar6 = pcStack_a8;
      pppppuStack_80 = pppppuStack_a0;
      ppppppuVar10 = (undefined8 ******)pppppuStack_b0;
      param_1 = pcStack_50;
      if (!SBORROW8(0,(longlong)pppppuStack_b0)) goto LAB_140414a91;
      pppppuStack_90 = (undefined8 *****)&UNK_142f56860;
      pcStack_88 = (code *)0x6;
      uStack_78 = &pppppuStack_90;
      pcStack_70 = pdb_1402ed400;
      pcVar6 = (code *)pdb_142d872f0(&UNK_142f756ce,&uStack_78);
      break;
    }
    pppppuVar1 = (undefined8 *****)(ppppuStack_d8 + 3);
    ppppuStack_d8[5] = (undefined8 ****)((longlong)ppppuStack_d8[5] + 1);
    ppppuStack_d8[2] = (undefined8 ****)0x0;
    pdb_140de3740(&uStack_78,pppppuVar1,ppppuStack_d8);
    pcVar6 = pcStack_70;
    if ((int)uStack_78 == 2) break;
    if (((undefined8 ******)pppppuStack_68 == (undefined8 ******)0x6) &&
       (*(short *)(pcStack_70 + 4) == 0x7365 && *(int *)pcStack_70 == 0x6d617266)) {
      if (!SBORROW8(0,(longlong)pppppuStack_b0)) {
        pppppuStack_90 = (undefined8 *****)&UNK_142f56860;
        pcStack_88 = (code *)0x6;
        uStack_78 = &pppppuStack_90;
        pcStack_70 = pdb_1402ed400;
        pcVar6 = (code *)pdb_142d872f0(&UNK_142f75701,&uStack_78);
        break;
      }
      ppppuVar7 = (undefined8 ****)ppppuVar4[5];
      if (ppppuVar4[4] <= ppppuVar7) {
LAB_140414a58:
        uStack_78 = (undefined8 ******)0x3;
        pcVar6 = (code *)pdb_142d84ef0(ppppuVar4,&uStack_78);
        break;
      }
      ppppuVar3 = *pppppuVar1;
      while( true ) {
        ppppuVar7 = (undefined8 ****)((longlong)ppppuVar7 + 1);
        uVar12 = (ulonglong)*(byte *)((longlong)ppppuVar3 + -1 + (longlong)ppppuVar7);
        if (0x3a < uVar12) goto LAB_140414bee;
        if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
        ppppuVar4[5] = ppppuVar7;
        if (ppppuVar7 == (undefined8 ****)ppppuVar4[4]) goto LAB_140414a58;
      }
      if (uVar12 != 0x3a) {
LAB_140414bee:
        uStack_78 = (undefined8 ******)0x6;
        pcVar6 = (code *)pdb_142d84ef0(ppppuVar4,&uStack_78);
        break;
      }
      ppppuVar4[5] = ppppuVar7;
      pdb_14040e4b0(&pppppuStack_90,ppppuVar4);
      pcVar6 = pcStack_88;
      if (SBORROW8(0,(longlong)pppppuStack_90)) break;
      pppppuStack_c0 = pppppuStack_90;
      pcStack_c8 = pcStack_88;
      pppppuStack_b8 = pppppuStack_80;
      if (!SBORROW8(0,(longlong)pppppuStack_b0)) {
        pdb_1404b83f0(&pppppuStack_b0);
      }
      pppppuStack_b0 = pppppuStack_c0;
      pcStack_a8 = pcStack_c8;
      pppppuStack_a0 = pppppuStack_b8;
      goto LAB_1404147c0;
    }
  }
  param_1 = pcStack_50;
  pppppuStack_80 = (undefined8 ******)0x0;
  ppppppuVar10 = (undefined8 ******)0x8000000000000000;
  if (!SBORROW8(0,(longlong)pppppuStack_b0)) {
    ppppppuVar11 = &pppppuStack_b0;
    pdb_1404b83f0();
    pppppuStack_80 = ppppppuVar11;
  }
LAB_140414a91:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  pppppuStack_90 = ppppppuVar10;
  pcStack_88 = pcVar6;
  pcVar8 = (code *)pdb_140404da0(param_2);
  pcVar6 = pcStack_88;
  pppppuStack_68 = pppppuStack_80;
  uStack_78 = (undefined8 ******)pppppuStack_90;
  pcStack_70 = pcStack_88;
  pcStack_60 = pcVar8;
  if (SBORROW8(0,(longlong)pppppuStack_90)) {
    ppppppuVar10 = (undefined8 ******)-(longlong)pppppuStack_90;
    ppppppuVar11 = (undefined8 ******)0x8000000000000000;
    if (pcVar8 != (code *)0x0) {
      lVar9 = *(longlong *)pcVar8;
      pcStack_50 = pcVar8;
      if (lVar9 == 1) {
        pdb_1404b38e0(pcVar8 + 8);
      }
      else {
LAB_140414ae6:
        pcVar6 = pcStack_88;
        uStack_78 = (undefined8 ******)pppppuStack_90;
        pcStack_70 = pcStack_88;
        pppppuStack_68 = pppppuStack_80;
        pcStack_60 = pcStack_50;
        if ((lVar9 == 0) && (*(ulonglong *)(pcStack_50 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(pcStack_50 + 8),*(ulonglong *)(pcStack_50 + 0x10),1);
        }
      }
LAB_140414b4a:
      pub_1406abac0((byte *)pcStack_50,0x28,8);
      ppppppuVar10 = extraout_RAX;
      ppppppuVar11 = (undefined8 ******)0x8000000000000000;
    }
  }
  else {
    ppppppuVar10 = (undefined8 ******)pppppuStack_80;
    ppppppuVar11 = (undefined8 ******)pppppuStack_90;
    if (pcVar8 != (code *)0x0) {
      ppppppuVar10 = (undefined8 ******)pdb_1404b83f0(&uStack_78);
      pcVar6 = pcVar8;
      ppppppuVar11 = (undefined8 ******)0x8000000000000000;
    }
  }
LAB_140414b5e:
  if (!SBORROW8(0,(longlong)ppppppuVar11)) {
    *(undefined8 *******)param_1 = ppppppuVar11;
    *(code **)(param_1 + 8) = pcVar6;
    *(undefined8 *******)(param_1 + 0x10) = ppppppuVar10;
    return param_1;
  }
LAB_140414c1d:
  uVar5 = pdb_142d86ed0(pcVar6,param_2);
LAB_140414763:
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)param_1 = 0x8000000000000000;
  return param_1;
}

