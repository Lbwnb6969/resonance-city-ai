// VA 0x140fab040, PDB extent 1918 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,theme_server_proto::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,theme_server_proto::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
   Extent: 1918 */

undefined8 * pdb_140fab040(undefined8 *param_1,byte *******param_2)

{
  byte bVar1;
  byte ******ppppppbVar2;
  byte ******ppppppbVar3;
  undefined8 uVar4;
  byte *******arg0;
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
  byte *******pppppppbStack_88;
  longlong lStack_80;
  undefined1 uStack_71;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  byte *******pppppppbStack_60;
  longlong lStack_58;
  byte *******pppppppbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppppbVar3 = param_2[5];
  if (ppppppbVar3 < param_2[4]) {
    do {
      ppppppbVar3 = (byte ******)((longlong)ppppppbVar3 + 1);
      bVar1 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppbVar3);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 != 0x5b) {
          if (bVar1 != 0x7b) {
            pppppppbVar5 = (byte *******)pdb_142dc90e0(param_2,&uStack_71,&UNK_143266e50);
            goto LAB_140fab623;
          }
          pppppppbVar5 = param_2 + 7;
          *(char *)pppppppbVar5 = *(char *)pppppppbVar5 + -1;
          if (*(char *)pppppppbVar5 != '\0') {
            param_2[5] = ppppppbVar3;
            uStack_a0 = 1;
            pppppppbStack_50 = (byte *******)0x8000000000000000;
            pppppppbStack_a8 = param_2;
            pppppppbVar5 = pppppppbStack_98;
            puStack_70 = param_1;
            pppppppbVar10 = pppppppbStack_50;
            goto LAB_140fab110;
          }
LAB_140fab476:
          uStack_68 = (byte *******)0x18;
          goto LAB_140fab0b8;
        }
        pppppppbVar5 = param_2 + 7;
        *(char *)pppppppbVar5 = *(char *)pppppppbVar5 + -1;
        if (*(char *)pppppppbVar5 == '\0') goto LAB_140fab476;
        param_2[5] = ppppppbVar3;
        pppppppbStack_88 = (byte *******)CONCAT71(pppppppbStack_88._1_7_,1);
        pppppppbStack_90 = param_2;
        pdb_140407e70(&uStack_68,&pppppppbStack_90);
        if ((char)uStack_68 == '\x01') {
LAB_140fab29f:
          arg0 = pppppppbStack_60;
          lVar8 = unaff_RSI;
          pppppppbVar10 = (byte *******)0x8000000000000000;
        }
        else {
          if (uStack_68._1_1_ != '\x01') {
            pppppppbStack_60 = (byte *******)pdb_142e12e60(0,&UNK_143266d78,&UNK_143266d08);
            goto LAB_140fab29f;
          }
          pdb_140faa190(&uStack_68,pppppppbStack_90);
          arg0 = pppppppbStack_60;
          lVar8 = lStack_58;
          pppppppbVar10 = uStack_68;
          if (SBORROW8(0,(longlong)uStack_68)) goto LAB_140fab29f;
        }
        *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
        uStack_68 = pppppppbVar10;
        pppppppbStack_60 = arg0;
        lStack_58 = lVar8;
        pppppppbVar6 = (byte *******)pdb_140404e50(param_2);
        if (!SBORROW8(0,(longlong)pppppppbVar10)) {
          if (pppppppbVar6 != (byte *******)0x0) {
            if (lVar8 != 0) {
              pppppppbVar5 = arg0 + 1;
              do {
                if (pppppppbVar5[-1] != (byte ******)0x0) {
                  pub_1406abac0((byte *)*pppppppbVar5,(ulonglong)pppppppbVar5[-1],1);
                }
                pppppppbVar5 = pppppppbVar5 + 5;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
            pppppppbVar5 = pppppppbVar6;
            if (pppppppbVar10 != (byte *******)0x0) {
              pub_1406abac0((byte *)arg0,(longlong)pppppppbVar10 * 0x28,8);
            }
            goto LAB_140fab623;
          }
          goto LAB_140fab536;
        }
        pppppppbVar5 = arg0;
        if (pppppppbVar6 == (byte *******)0x0) goto LAB_140fab623;
        ppppppbVar3 = *pppppppbVar6;
        pppppppbStack_50 = pppppppbVar6;
        if (ppppppbVar3 != (byte ******)0x1) goto LAB_140fab573;
        pdb_1404b38e0(pppppppbVar6 + 1);
        goto LAB_140fab60f;
      }
      param_2[5] = ppppppbVar3;
    } while (ppppppbVar3 != param_2[4]);
  }
  uStack_68 = (byte *******)0x5;
LAB_140fab0b8:
  uVar4 = pdb_142d84ef0(param_2,&uStack_68);
  goto LAB_140fab62e;
  while (arg0 = (byte *******)pdb_140fa8c30(pppppppbVar5), unaff_RSI = lVar8,
        pppppppbVar5 = pppppppbStack_98, pppppppbVar10 = pppppppbStack_50, param_1 = puStack_70,
        arg0 == (byte *******)0x0) {
LAB_140fab110:
    pppppppbStack_50 = pppppppbVar10;
    pppppppbStack_98 = pppppppbVar5;
    lVar8 = unaff_RSI;
    pdb_140407a40(&uStack_68,&pppppppbStack_a8);
    pppppppbVar5 = pppppppbStack_a8;
    arg0 = pppppppbStack_60;
    param_1 = puStack_70;
    if ((char)uStack_68 == '\x01') break;
    if (uStack_68._1_1_ == '\0') {
      arg0 = pppppppbStack_98;
      pppppppbVar10 = pppppppbStack_50;
      if (SBORROW8(0,(longlong)pppppppbStack_50)) {
        pppppppbStack_90 = (byte *******)&UNK_143266d48;
        pppppppbStack_88 = (byte *******)0x6;
        uStack_68 = (byte *******)&pppppppbStack_90;
        pppppppbStack_60 = (byte *******)pdb_1402ed400;
        arg0 = (byte *******)pdb_142d872f0(&UNK_143402280,&uStack_68);
        pppppppbVar10 = (byte *******)0x8000000000000000;
        param_1 = puStack_70;
      }
      goto LAB_140fab50e;
    }
    pppppppbVar10 = pppppppbStack_a8 + 3;
    pppppppbStack_a8[5] = (byte ******)((longlong)pppppppbStack_a8[5] + 1);
    pppppppbStack_a8[2] = (byte ******)0x0;
    pdb_140de3740(&uStack_68,pppppppbVar10,pppppppbStack_a8);
    arg0 = pppppppbStack_60;
    param_1 = puStack_70;
    if ((int)uStack_68 == 2) break;
    if ((lStack_58 == 6) &&
       (*(short *)((longlong)pppppppbStack_60 + 4) == _DAT_143426112 &&
        *(int *)pppppppbStack_60 == _DAT_14342610e)) {
      if (!SBORROW8(0,(longlong)pppppppbStack_50)) {
        pppppppbStack_90 = (byte *******)&UNK_143266d48;
        pppppppbStack_88 = (byte *******)0x6;
        uStack_68 = (byte *******)&pppppppbStack_90;
        pppppppbStack_60 = (byte *******)pdb_1402ed400;
        arg0 = (byte *******)pdb_142d872f0(&UNK_1434022b3,&uStack_68);
        param_1 = puStack_70;
        goto joined_r0x000140fab4de;
      }
      ppppppbVar3 = pppppppbVar5[5];
      if (pppppppbVar5[4] <= ppppppbVar3) {
LAB_140fab406:
        uStack_68 = (byte *******)0x3;
        arg0 = (byte *******)pdb_142d84ef0(pppppppbVar5,&uStack_68);
        param_1 = puStack_70;
        break;
      }
      ppppppbVar2 = *pppppppbVar10;
      while( true ) {
        ppppppbVar3 = (byte ******)((longlong)ppppppbVar3 + 1);
        uVar9 = (ulonglong)*(byte *)((longlong)ppppppbVar2 + -1 + (longlong)ppppppbVar3);
        if (0x3a < uVar9) goto LAB_140fab644;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        pppppppbVar5[5] = ppppppbVar3;
        if (ppppppbVar3 == pppppppbVar5[4]) goto LAB_140fab406;
      }
      if (uVar9 != 0x3a) {
LAB_140fab644:
        uStack_68 = (byte *******)0x6;
        arg0 = (byte *******)pdb_142d84ef0(pppppppbVar5,&uStack_68);
        param_1 = puStack_70;
        break;
      }
      pppppppbVar5[5] = ppppppbVar3;
      pdb_140faa190(&pppppppbStack_90,pppppppbVar5);
      unaff_RSI = lStack_80;
      pppppppbVar5 = pppppppbStack_88;
      pppppppbVar10 = pppppppbStack_90;
      arg0 = pppppppbStack_88;
      param_1 = puStack_70;
      if (SBORROW8(0,(longlong)pppppppbStack_90)) break;
      goto LAB_140fab110;
    }
  }
  if (SBORROW8(0,(longlong)pppppppbStack_50)) {
    pppppppbVar10 = (byte *******)0x8000000000000000;
    puStack_70 = param_1;
  }
  else {
joined_r0x000140fab4de:
    puStack_70 = param_1;
    if (lVar8 != 0) {
      pppppppbVar5 = pppppppbStack_98 + 1;
      lVar7 = lVar8;
      do {
        if (pppppppbVar5[-1] != (byte ******)0x0) {
          pub_1406abac0((byte *)*pppppppbVar5,(ulonglong)pppppppbVar5[-1],1);
        }
        pppppppbVar5 = pppppppbVar5 + 5;
        lVar7 = lVar7 + -1;
        lVar8 = 0;
      } while (lVar7 != 0);
    }
    pppppppbVar10 = (byte *******)0x8000000000000000;
    if (pppppppbStack_50 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_98,(longlong)pppppppbStack_50 * 0x28,8);
    }
  }
LAB_140fab50e:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  uStack_68 = pppppppbVar10;
  pppppppbStack_60 = arg0;
  lStack_58 = lVar8;
  pppppppbVar6 = (byte *******)pdb_140404da0(param_2);
  if (SBORROW8(0,(longlong)pppppppbVar10)) {
    pppppppbVar5 = arg0;
    if (pppppppbVar6 != (byte *******)0x0) {
      ppppppbVar3 = *pppppppbVar6;
      pppppppbStack_50 = pppppppbVar6;
      if (ppppppbVar3 == (byte ******)0x1) {
        pdb_1404b38e0(pppppppbVar6 + 1);
      }
      else {
LAB_140fab573:
        if ((ppppppbVar3 == (byte ******)0x0) && (pppppppbStack_50[2] != (byte ******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_50[1],(ulonglong)pppppppbStack_50[2],1);
        }
      }
LAB_140fab60f:
      pub_1406abac0((byte *)pppppppbStack_50,0x28,8);
      pppppppbVar5 = arg0;
    }
  }
  else {
    if (pppppppbVar6 == (byte *******)0x0) {
LAB_140fab536:
      *param_1 = pppppppbVar10;
      param_1[1] = arg0;
      param_1[2] = lVar8;
      return param_1;
    }
    if (lVar8 != 0) {
      pppppppbVar5 = arg0 + 1;
      do {
        if (pppppppbVar5[-1] != (byte ******)0x0) {
          pub_1406abac0((byte *)*pppppppbVar5,(ulonglong)pppppppbVar5[-1],1);
        }
        pppppppbVar5 = pppppppbVar5 + 5;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    pppppppbVar5 = pppppppbVar6;
    param_1 = puStack_70;
    if (pppppppbVar10 != (byte *******)0x0) {
      pub_1406abac0((byte *)arg0,(longlong)pppppppbVar10 * 0x28,8);
      param_1 = puStack_70;
    }
  }
LAB_140fab623:
  uVar4 = pdb_142d86ed0(pppppppbVar5,param_2);
LAB_140fab62e:
  param_1[1] = uVar4;
  *param_1 = 0x8000000000000000;
  return param_1;
}

