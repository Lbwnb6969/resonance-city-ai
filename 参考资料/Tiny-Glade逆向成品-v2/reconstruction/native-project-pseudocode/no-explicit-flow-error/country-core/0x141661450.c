// VA 0x141661450, PDB extent 1886 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,country_core::resources::clutter_packs::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,country_core::resources::clutter_packs::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1886 */

undefined8 * pdb_141661450(undefined8 *param_1,byte *******param_2)

{
  byte bVar1;
  byte ******ppppppbVar2;
  byte *******arg0;
  byte ******ppppppbVar3;
  undefined8 uVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  longlong unaff_RSI;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbStack_a8;
  undefined1 uStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  longlong lStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_71;
  byte *******pppppppbStack_70;
  undefined8 uStack_68;
  byte *******pppppppbStack_60;
  longlong lStack_58;
  byte *******pppppppbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppppbVar3 = param_2[5];
  puStack_80 = param_1;
  if (ppppppbVar3 < param_2[4]) {
    do {
      ppppppbVar3 = (byte ******)((longlong)ppppppbVar3 + 1);
      bVar1 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppbVar3);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x5b) {
          pppppppbVar5 = param_2 + 7;
          *(char *)pppppppbVar5 = *(char *)pppppppbVar5 + -1;
          if (*(char *)pppppppbVar5 != '\0') {
            param_2[5] = ppppppbVar3;
            pppppppbStack_90 = (byte *******)CONCAT71(pppppppbStack_90._1_7_,1);
            pppppppbStack_98 = param_2;
            pdb_140407e70(&uStack_68,&pppppppbStack_98);
            if ((char)uStack_68 == '\x01') {
LAB_1416616ae:
              pppppppbVar5 = pppppppbStack_60;
              lVar8 = unaff_RSI;
              pppppppbVar10 = (byte *******)0x8000000000000000;
            }
            else {
              if (uStack_68._1_1_ != '\x01') {
                pppppppbStack_60 = (byte *******)pdb_142d8f0e0(0,&UNK_143322c30,&UNK_143322608);
                goto LAB_1416616ae;
              }
              pdb_1416596a0(&uStack_68,pppppppbStack_98);
              pppppppbVar5 = pppppppbStack_60;
              lVar8 = lStack_58;
              pppppppbVar10 = uStack_68;
              if (SBORROW8(0,(longlong)uStack_68)) goto LAB_1416616ae;
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            uStack_68 = pppppppbVar10;
            pppppppbStack_60 = pppppppbVar5;
            lStack_58 = lVar8;
            pppppppbVar6 = (byte *******)pdb_140404e50(param_2);
            if (!SBORROW8(0,(longlong)pppppppbVar10)) {
              if (pppppppbVar6 == (byte *******)0x0) goto LAB_14166191b;
              arg0 = pppppppbVar5;
              if (lVar8 != 0) {
                pppppppbVar5 = pppppppbVar5 + 1;
                do {
                  if (pppppppbVar5[-1] != (byte ******)0x0) {
                    pub_1406abac0((byte *)*pppppppbVar5,(ulonglong)pppppppbVar5[-1],1);
                  }
                  pppppppbVar5 = pppppppbVar5 + 4;
                  lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
              }
              goto joined_r0x0001416617a6;
            }
            if (pppppppbVar6 == (byte *******)0x0) goto LAB_141661a03;
            ppppppbVar3 = *pppppppbVar6;
            pppppppbStack_50 = pppppppbVar6;
            if (ppppppbVar3 != (byte ******)0x1) goto LAB_141661959;
            pdb_1404b38e0(pppppppbVar6 + 1);
            goto LAB_1416619ef;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            pppppppbVar5 = (byte *******)pdb_142de8e20(param_2,&uStack_71,&UNK_143323bc0);
            goto LAB_141661a03;
          }
          pppppppbVar5 = param_2 + 7;
          *(char *)pppppppbVar5 = *(char *)pppppppbVar5 + -1;
          if (*(char *)pppppppbVar5 != '\0') {
            param_2[5] = ppppppbVar3;
            uStack_a0 = 1;
            pppppppbStack_50 = (byte *******)0x8000000000000000;
            pppppppbStack_a8 = param_2;
            pppppppbVar10 = pppppppbStack_70;
            pppppppbVar6 = pppppppbStack_50;
            goto LAB_141661520;
          }
        }
        uStack_68 = (byte *******)0x18;
        goto LAB_1416614c9;
      }
      param_2[5] = ppppppbVar3;
    } while (ppppppbVar3 != param_2[4]);
  }
  uStack_68 = (byte *******)0x5;
LAB_1416614c9:
  uVar4 = pdb_142d84ef0(param_2,&uStack_68);
  goto LAB_141661a0e;
  while (pppppppbVar5 = (byte *******)pdb_14164b700(pppppppbVar10), unaff_RSI = lVar8,
        pppppppbVar10 = pppppppbStack_70, pppppppbVar6 = pppppppbStack_50,
        pppppppbVar5 == (byte *******)0x0) {
LAB_141661520:
    pppppppbStack_50 = pppppppbVar6;
    pppppppbStack_70 = pppppppbVar10;
    lVar8 = unaff_RSI;
    pdb_140407a40(&uStack_68,&pppppppbStack_a8);
    pppppppbVar10 = pppppppbStack_a8;
    pppppppbVar5 = pppppppbStack_60;
    if ((char)uStack_68 == '\x01') break;
    if (uStack_68._1_1_ == '\0') {
      pppppppbVar5 = pppppppbStack_70;
      pppppppbVar10 = pppppppbStack_50;
      if (!SBORROW8(0,(longlong)pppppppbStack_50)) goto LAB_1416618f3;
      pppppppbStack_98 = (byte *******)&UNK_143322c00;
      pppppppbStack_90 = (byte *******)0x5;
      uStack_68 = (byte *******)&pppppppbStack_98;
      pppppppbStack_60 = (byte *******)pdb_1402ed400;
      pppppppbVar5 = (byte *******)pdb_142d872f0(&UNK_143044fe5,&uStack_68);
      goto LAB_14166175f;
    }
    pppppppbVar6 = pppppppbStack_a8 + 3;
    pppppppbStack_a8[5] = (byte ******)((longlong)pppppppbStack_a8[5] + 1);
    pppppppbStack_a8[2] = (byte ******)0x0;
    pdb_140de3740(&uStack_68,pppppppbVar6,pppppppbStack_a8);
    pppppppbVar5 = pppppppbStack_60;
    if ((int)uStack_68 == 2) break;
    if ((lStack_58 == 5) &&
       (*(byte *)((longlong)pppppppbStack_60 + 4) == DAT_1433a020a &&
        *(int *)pppppppbStack_60 == _DAT_1433a0206)) {
      if (!SBORROW8(0,(longlong)pppppppbStack_50)) {
        pppppppbStack_98 = (byte *******)&UNK_143322c00;
        pppppppbStack_90 = (byte *******)0x5;
        uStack_68 = (byte *******)&pppppppbStack_98;
        pppppppbStack_60 = (byte *******)pdb_1402ed400;
        pppppppbVar5 = (byte *******)pdb_142d872f0(&UNK_143045061,&uStack_68);
        goto joined_r0x0001416618c7;
      }
      ppppppbVar3 = pppppppbVar10[5];
      if (pppppppbVar10[4] <= ppppppbVar3) {
LAB_141661832:
        uStack_68 = (byte *******)0x3;
        pppppppbVar5 = (byte *******)pdb_142d84ef0(pppppppbVar10,&uStack_68);
        break;
      }
      ppppppbVar2 = *pppppppbVar6;
      while( true ) {
        ppppppbVar3 = (byte ******)((longlong)ppppppbVar3 + 1);
        uVar9 = (ulonglong)*(byte *)((longlong)ppppppbVar2 + -1 + (longlong)ppppppbVar3);
        if (0x3a < uVar9) goto LAB_141661a2b;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        pppppppbVar10[5] = ppppppbVar3;
        if (ppppppbVar3 == pppppppbVar10[4]) goto LAB_141661832;
      }
      if (uVar9 != 0x3a) {
LAB_141661a2b:
        uStack_68 = (byte *******)0x6;
        pppppppbVar5 = (byte *******)pdb_142d84ef0(pppppppbVar10,&uStack_68);
        break;
      }
      pppppppbVar10[5] = ppppppbVar3;
      pdb_1416596a0(&pppppppbStack_98,pppppppbVar10);
      unaff_RSI = lStack_88;
      pppppppbVar10 = pppppppbStack_90;
      pppppppbVar6 = pppppppbStack_98;
      pppppppbVar5 = pppppppbStack_90;
      if (SBORROW8(0,(longlong)pppppppbStack_98)) break;
      goto LAB_141661520;
    }
  }
  if (SBORROW8(0,(longlong)pppppppbStack_50)) {
LAB_14166175f:
    pppppppbVar10 = (byte *******)0x8000000000000000;
  }
  else {
joined_r0x0001416618c7:
    if (lVar8 != 0) {
      pppppppbVar10 = pppppppbStack_70 + 1;
      lVar7 = lVar8;
      do {
        if (pppppppbVar10[-1] != (byte ******)0x0) {
          pub_1406abac0((byte *)*pppppppbVar10,(ulonglong)pppppppbVar10[-1],1);
        }
        pppppppbVar10 = pppppppbVar10 + 4;
        lVar7 = lVar7 + -1;
        lVar8 = 0;
      } while (lVar7 != 0);
    }
    pppppppbVar10 = (byte *******)0x8000000000000000;
    if (pppppppbStack_50 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_70,(longlong)pppppppbStack_50 << 5,8);
    }
  }
LAB_1416618f3:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  uStack_68 = pppppppbVar10;
  pppppppbStack_60 = pppppppbVar5;
  lStack_58 = lVar8;
  pppppppbVar6 = (byte *******)pdb_140404da0(param_2);
  if (SBORROW8(0,(longlong)pppppppbVar10)) {
    if (pppppppbVar6 != (byte *******)0x0) {
      ppppppbVar3 = *pppppppbVar6;
      pppppppbStack_50 = pppppppbVar6;
      if (ppppppbVar3 == (byte ******)0x1) {
        pdb_1404b38e0(pppppppbVar6 + 1);
      }
      else {
LAB_141661959:
        if ((ppppppbVar3 == (byte ******)0x0) && (pppppppbStack_50[2] != (byte ******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_50[1],(ulonglong)pppppppbStack_50[2],1);
        }
      }
LAB_1416619ef:
      pub_1406abac0((byte *)pppppppbStack_50,0x28,8);
    }
  }
  else {
    if (pppppppbVar6 == (byte *******)0x0) {
LAB_14166191b:
      *puStack_80 = pppppppbVar10;
      puStack_80[1] = pppppppbVar5;
      puStack_80[2] = lVar8;
      return puStack_80;
    }
    arg0 = pppppppbVar5;
    if (lVar8 != 0) {
      pppppppbVar5 = pppppppbVar5 + 1;
      do {
        if (pppppppbVar5[-1] != (byte ******)0x0) {
          pub_1406abac0((byte *)*pppppppbVar5,(ulonglong)pppppppbVar5[-1],1);
        }
        pppppppbVar5 = pppppppbVar5 + 4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
joined_r0x0001416617a6:
    pppppppbVar5 = pppppppbVar6;
    if (pppppppbVar10 != (byte *******)0x0) {
      pub_1406abac0((byte *)arg0,(longlong)pppppppbVar10 << 5,8);
    }
  }
LAB_141661a03:
  uVar4 = pdb_142d86ed0(pppppppbVar5,param_2);
LAB_141661a0e:
  puStack_80[1] = uVar4;
  *puStack_80 = 0x8000000000000000;
  return puStack_80;
}

