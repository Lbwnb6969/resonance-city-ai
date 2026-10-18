// VA 0x140fab7c0, PDB extent 3350 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,theme_fetcher::checked_zip::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,theme_fetcher::checked_zip::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
   Extent: 3350 */

undefined8 * pdb_140fab7c0(undefined8 *param_1,byte *******param_2)

{
  byte bVar1;
  byte ******ppppppbVar2;
  byte ******ppppppbVar3;
  undefined8 uVar4;
  byte *******pppppppbVar5;
  byte *******extraout_RAX;
  byte *******extraout_RAX_00;
  byte *******extraout_RAX_01;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******arg0;
  byte *******unaff_RBX;
  byte *******unaff_RSI;
  undefined7 uVar10;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  ulonglong uVar11;
  byte *******pppppppbVar12;
  byte *******unaff_R13;
  byte *******pppppppbStack_110;
  undefined1 uStack_108;
  byte *******pppppppbStack_100;
  byte ******ppppppbStack_f0;
  undefined8 uStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  undefined1 uStack_c1;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  undefined8 uStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  undefined8 *puStack_70;
  byte *******pppppppbStack_68;
  byte *******pppppppbStack_60;
  byte *******pppppppbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppppbVar3 = param_2[5];
  if (ppppppbVar3 < param_2[4]) {
    do {
      ppppppbVar3 = (byte ******)((longlong)ppppppbVar3 + 1);
      bVar1 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppbVar3);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        puStack_70 = param_1;
        if (bVar1 != 0x5b) {
          if (bVar1 != 0x7b) {
            pppppppbVar6 = (byte *******)pdb_142dc90e0(param_2,&uStack_c1,&UNK_143266e70);
            goto LAB_140fac125;
          }
          pppppppbVar6 = param_2 + 7;
          *(byte *)pppppppbVar6 = *(byte *)pppppppbVar6 - 1;
          if (*(byte *)pppppppbVar6 != 0) {
            param_2[5] = ppppppbVar3;
            uStack_108 = 1;
            pppppppbStack_e0 = (byte *******)0x8000000000000000;
            pppppppbStack_58 = (byte *******)0x8000000000000000;
            unaff_RBX = (byte *******)0x8000000000000000;
            pppppppbStack_110 = param_2;
            goto LAB_140fab890;
          }
LAB_140fac14e:
          uStack_a8 = (byte *******)0x18;
          goto LAB_140fab838;
        }
        pppppppbVar6 = param_2 + 7;
        *(byte *)pppppppbVar6 = *(byte *)pppppppbVar6 - 1;
        if (*(byte *)pppppppbVar6 == 0) goto LAB_140fac14e;
        param_2[5] = ppppppbVar3;
        pppppppbStack_d8 = (byte *******)CONCAT71(pppppppbStack_d8._1_7_,1);
        pppppppbVar5 = (byte *******)&uStack_a8;
        pppppppbStack_e0 = param_2;
        pdb_140407e70(pppppppbVar5,&pppppppbStack_e0);
        if ((char)uStack_a8 == '\x01') {
LAB_140fabb2d:
          pppppppbVar12 = (byte *******)0x8000000000000000;
          pppppppbVar9 = unaff_RSI;
          pppppppbVar6 = pppppppbStack_a0;
          goto LAB_140fabb37;
        }
        if (uStack_a8._1_1_ != '\x01') {
          pppppppbVar5 = (byte *******)0x0;
          pppppppbStack_a0 = (byte *******)pdb_142e12e60(0,&UNK_143266dc0,&UNK_143266d08);
          goto LAB_140fabb2d;
        }
        pdb_140fa9ef0(&uStack_a8,pppppppbStack_e0);
        pppppppbVar9 = pppppppbStack_98;
        arg0 = pppppppbStack_a0;
        pppppppbVar8 = uStack_a8;
        pppppppbVar5 = uStack_a8;
        if (SBORROW8(0,(longlong)uStack_a8)) goto LAB_140fabb2d;
        pppppppbStack_c0 = uStack_a8;
        pppppppbStack_b8 = pppppppbStack_a0;
        pppppppbStack_b0 = pppppppbStack_98;
        pppppppbVar7 = (byte *******)&uStack_a8;
        pdb_140407e70(pppppppbVar7,&pppppppbStack_e0);
        unaff_R13 = pppppppbStack_a0;
        if ((char)uStack_a8 != '\x01') {
          if (uStack_a8._1_1_ == '\x01') {
            pppppppbVar7 = (byte *******)&uStack_a8;
            pdb_140faa410(pppppppbVar7,pppppppbStack_e0);
            pppppppbVar5 = pppppppbStack_98;
            pppppppbVar12 = pppppppbVar8;
            unaff_RBX = uStack_a8;
            unaff_R13 = pppppppbStack_a0;
            pppppppbVar6 = arg0;
            if (!SBORROW8(0,(longlong)uStack_a8)) goto LAB_140fabb37;
          }
          else {
            pppppppbVar7 = (byte *******)0x1;
            unaff_R13 = (byte *******)pdb_142e12e60(1,&UNK_143266dc0,&UNK_143266d08);
          }
        }
        pppppppbVar5 = pppppppbVar7;
        if (pppppppbVar9 != (byte *******)0x0) {
          unaff_RBX = arg0 + 4;
          pppppppbVar6 = pppppppbVar9;
          do {
            if (unaff_RBX[-4] != (byte ******)0x0) {
              pppppppbVar5 = (byte *******)unaff_RBX[-3];
              pub_1406abac0((byte *)pppppppbVar5,(ulonglong)unaff_RBX[-4],1);
            }
            if (unaff_RBX[-1] != (byte ******)0x0) {
              pppppppbVar5 = (byte *******)*unaff_RBX;
              pub_1406abac0((byte *)pppppppbVar5,(ulonglong)unaff_RBX[-1],1);
            }
            unaff_RBX = unaff_RBX + 6;
            pppppppbVar6 = (byte *******)((longlong)pppppppbVar6 + -1);
            pppppppbVar9 = (byte *******)0x0;
          } while (pppppppbVar6 != (byte *******)0x0);
        }
        pppppppbVar12 = (byte *******)0x8000000000000000;
        pppppppbVar6 = unaff_R13;
        if (pppppppbVar8 != (byte *******)0x0) {
          pub_1406abac0((byte *)arg0,(longlong)pppppppbVar8 * 0x30,8);
          pppppppbVar5 = arg0;
          pppppppbVar12 = (byte *******)0x8000000000000000;
        }
LAB_140fabb37:
        *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) + 1;
        uStack_a8 = pppppppbVar12;
        pppppppbStack_a0 = pppppppbVar6;
        pppppppbStack_98 = pppppppbVar9;
        pppppppbStack_90 = unaff_RBX;
        pppppppbStack_88 = unaff_R13;
        pppppppbStack_80 = pppppppbVar5;
        pppppppbVar8 = (byte *******)pdb_140404e50(param_2);
        param_1 = puStack_70;
        if (!SBORROW8(0,(longlong)pppppppbVar12)) {
          if (pppppppbVar8 == (byte *******)0x0) goto LAB_140fabce2;
          pppppppbStack_68 = unaff_R13;
          pppppppbStack_58 = pppppppbVar8;
          if (pppppppbVar9 != (byte *******)0x0) {
            pppppppbVar5 = pppppppbVar6 + 4;
            do {
              if (pppppppbVar5[-4] != (byte ******)0x0) {
                pub_1406abac0((byte *)pppppppbVar5[-3],(ulonglong)pppppppbVar5[-4],1);
              }
              if (pppppppbVar5[-1] != (byte ******)0x0) {
                pub_1406abac0((byte *)*pppppppbVar5,(ulonglong)pppppppbVar5[-1],1);
              }
              pppppppbVar5 = pppppppbVar5 + 6;
              pppppppbVar9 = (byte *******)((longlong)pppppppbVar9 + -1);
            } while (pppppppbVar9 != (byte *******)0x0);
          }
          if (pppppppbVar12 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbVar6,(longlong)pppppppbVar12 * 0x30,8);
          }
          unaff_R13 = pppppppbStack_68;
          pppppppbVar6 = pppppppbStack_58;
          if (unaff_RBX == (byte *******)0x0) goto LAB_140fac125;
          goto LAB_140fac09b;
        }
        if (pppppppbVar8 != (byte *******)0x0) {
          ppppppbVar3 = *pppppppbVar8;
          pppppppbStack_58 = pppppppbVar8;
          if (ppppppbVar3 != (byte ******)0x1) goto LAB_140fabfc6;
          pdb_1404b38e0(pppppppbVar8 + 1);
          goto LAB_140fac111;
        }
        goto LAB_140fac125;
      }
      param_2[5] = ppppppbVar3;
    } while (ppppppbVar3 != param_2[4]);
  }
  uStack_a8 = (byte *******)0x5;
LAB_140fab838:
  uVar4 = pdb_142d84ef0(param_2,&uStack_a8);
  goto LAB_140fac130;
  while( true ) {
    uStack_49 = 1;
    pppppppbStack_60 = unaff_RBX;
    pppppppbVar6 = (byte *******)pdb_140fa8c30(unaff_R13);
    if (pppppppbVar6 != (byte *******)0x0) break;
LAB_140fab890:
    uStack_49 = 1;
    pppppppbStack_60 = unaff_RBX;
    pdb_140407a40(&uStack_a8,&pppppppbStack_110);
    unaff_R13 = pppppppbStack_110;
    pppppppbVar6 = pppppppbStack_a0;
    if ((char)uStack_a8 == '\x01') break;
    if (uStack_a8._1_1_ == '\0') {
      pppppppbVar8 = (byte *******)
                     CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                              SBORROW8(0,(longlong)pppppppbStack_58));
      if (SBORROW8(0,(longlong)pppppppbStack_58)) {
        ppppppbStack_f0 = (byte ******)&UNK_143266d88;
        uStack_e8 = 5;
        pppppppbStack_c0 = &ppppppbStack_f0;
        pppppppbStack_b8 = (byte *******)pdb_1402ed400;
        uStack_49 = 1;
        pppppppbStack_60 = unaff_RBX;
        pppppppbVar6 = (byte *******)pdb_142d872f0(&UNK_143402280,&pppppppbStack_c0);
      }
      else {
        pppppppbStack_98 = pppppppbStack_d0;
        uStack_a8 = pppppppbStack_e0;
        pppppppbStack_a0 = pppppppbStack_d8;
        pppppppbVar5 = pppppppbStack_100;
        unaff_R13 = pppppppbStack_68;
        pppppppbVar12 = pppppppbStack_e0;
        pppppppbVar9 = pppppppbStack_d0;
        pppppppbVar6 = pppppppbStack_d8;
        if (!SBORROW8(0,(longlong)unaff_RBX)) goto LAB_140fabc9a;
        ppppppbStack_f0 = (byte ******)&UNK_143266d8d;
        uStack_e8 = 3;
        pppppppbStack_c0 = &ppppppbStack_f0;
        pppppppbStack_b8 = (byte *******)pdb_1402ed400;
        pppppppbVar6 = (byte *******)pdb_142d872f0(&UNK_143402280,&pppppppbStack_c0);
        pppppppbStack_60 = (byte *******)0x8000000000000000;
        uStack_49 = 0;
        pdb_14049a0e0(&uStack_a8);
      }
      goto LAB_140fabbde;
    }
    pppppppbStack_110[5] = (byte ******)((longlong)pppppppbStack_110[5] + 1);
    unaff_RSI = pppppppbStack_110 + 3;
    pppppppbStack_110[2] = (byte ******)0x0;
    uStack_49 = 1;
    pppppppbStack_60 = unaff_RBX;
    pdb_140de3740(&uStack_a8,unaff_RSI,pppppppbStack_110);
    pppppppbVar6 = pppppppbStack_a0;
    if ((int)uStack_a8 == 2) break;
    if (pppppppbStack_98 == (byte *******)0x3) {
      if (*(byte *)((longlong)pppppppbStack_a0 + 2) == DAT_14326786f &&
          *(short *)pppppppbStack_a0 == _DAT_14326786d) {
        uVar10 = (undefined7)((ulonglong)unaff_RSI >> 8);
        if (!SBORROW8(0,(longlong)unaff_RBX)) {
          pppppppbStack_c0 = (byte *******)&UNK_143266d8d;
          pppppppbStack_b8 = (byte *******)0x3;
          uStack_a8 = (byte *******)&pppppppbStack_c0;
          pppppppbStack_a0 = (byte *******)pdb_1402ed400;
          uStack_49 = 1;
          pppppppbStack_60 = unaff_RBX;
          pppppppbVar6 = (byte *******)pdb_142d872f0(&UNK_1434022b3,&uStack_a8);
          pppppppbVar8 = (byte *******)CONCAT71(uVar10,1);
          unaff_R13 = pppppppbStack_68;
          goto joined_r0x000140fac207;
        }
        ppppppbVar3 = unaff_R13[5];
        if (ppppppbVar3 < unaff_R13[4]) {
          ppppppbVar2 = *unaff_RSI;
          while( true ) {
            ppppppbVar3 = (byte ******)((longlong)ppppppbVar3 + 1);
            uVar11 = (ulonglong)*(byte *)((longlong)ppppppbVar2 + -1 + (longlong)ppppppbVar3);
            if (0x3a < uVar11) goto LAB_140fac234;
            if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
            unaff_R13[5] = ppppppbVar3;
            if (ppppppbVar3 == unaff_R13[4]) goto LAB_140fac0ce;
          }
          if (uVar11 == 0x3a) {
            unaff_R13[5] = ppppppbVar3;
            pppppppbStack_60 = (byte *******)0x8000000000000000;
            uStack_49 = 1;
            pdb_140faa410(&pppppppbStack_c0,unaff_R13);
            pppppppbStack_68 = pppppppbStack_b8;
            unaff_R13 = (byte *******)-(longlong)pppppppbStack_c0;
            pppppppbVar6 = pppppppbStack_b8;
            if (!SBORROW8(0,(longlong)pppppppbStack_c0)) {
              pppppppbStack_100 = pppppppbStack_b0;
              unaff_RBX = pppppppbStack_c0;
              goto LAB_140fab890;
            }
          }
          else {
LAB_140fac234:
            uStack_a8 = (byte *******)0x6;
            pppppppbStack_60 = (byte *******)0x8000000000000000;
            uStack_49 = 1;
            pppppppbVar6 = (byte *******)pdb_142d84ef0(unaff_R13,&uStack_a8);
          }
        }
        else {
LAB_140fac0ce:
          uStack_a8 = (byte *******)0x3;
          pppppppbStack_60 = (byte *******)0x8000000000000000;
          uStack_49 = 1;
          pppppppbVar6 = (byte *******)pdb_142d84ef0(unaff_R13,&uStack_a8);
        }
        pppppppbVar8 = (byte *******)CONCAT71(uVar10,1);
        pppppppbVar9 = pppppppbStack_58;
        goto LAB_140fabc05;
      }
    }
    else if ((pppppppbStack_98 == (byte *******)0x5) &&
            (*(byte *)((longlong)pppppppbStack_a0 + 4) == DAT_14326786c &&
             *(int *)pppppppbStack_a0 == _DAT_143267868)) {
      if (!SBORROW8(0,(longlong)pppppppbStack_58)) {
        pppppppbStack_c0 = (byte *******)&UNK_143266d88;
        pppppppbStack_b8 = (byte *******)0x5;
        uStack_a8 = (byte *******)&pppppppbStack_c0;
        pppppppbStack_a0 = (byte *******)pdb_1402ed400;
        uStack_49 = 1;
        pppppppbStack_60 = unaff_RBX;
        pppppppbVar6 = (byte *******)pdb_142d872f0(&UNK_1434022b3,&uStack_a8);
        break;
      }
      ppppppbVar3 = unaff_R13[5];
      if (unaff_R13[4] <= ppppppbVar3) {
LAB_140fac0a9:
        uStack_a8 = (byte *******)0x3;
        uStack_49 = 1;
        pppppppbStack_60 = unaff_RBX;
        pppppppbVar6 = (byte *******)pdb_142d84ef0(unaff_R13,&uStack_a8);
        break;
      }
      ppppppbVar2 = *unaff_RSI;
      while( true ) {
        ppppppbVar3 = (byte ******)((longlong)ppppppbVar3 + 1);
        uVar11 = (ulonglong)*(byte *)((longlong)ppppppbVar2 + -1 + (longlong)ppppppbVar3);
        if (0x3a < uVar11) goto LAB_140fac212;
        if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
        unaff_R13[5] = ppppppbVar3;
        if (ppppppbVar3 == unaff_R13[4]) goto LAB_140fac0a9;
      }
      if (uVar11 != 0x3a) {
LAB_140fac212:
        uStack_a8 = (byte *******)0x6;
        uStack_49 = 1;
        pppppppbStack_60 = unaff_RBX;
        pppppppbVar6 = (byte *******)pdb_142d84ef0(unaff_R13,&uStack_a8);
        break;
      }
      unaff_R13[5] = ppppppbVar3;
      uStack_49 = 1;
      pppppppbStack_60 = unaff_RBX;
      pdb_140fa9ef0(&pppppppbStack_c0,unaff_R13);
      pppppppbVar6 = pppppppbStack_b8;
      if (SBORROW8(0,(longlong)pppppppbStack_c0)) break;
      pppppppbStack_d0 = pppppppbStack_b0;
      pppppppbStack_e0 = pppppppbStack_c0;
      pppppppbStack_d8 = pppppppbStack_b8;
      pppppppbStack_58 = pppppppbStack_c0;
      goto LAB_140fab890;
    }
  }
  pppppppbVar8 = (byte *******)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_140fabbde:
  unaff_R13 = pppppppbStack_68;
  pppppppbVar9 = pppppppbStack_58;
  if (!SBORROW8(0,(longlong)unaff_RBX)) {
joined_r0x000140fac207:
    pppppppbVar9 = pppppppbStack_58;
    pppppppbStack_68 = unaff_R13;
    if (unaff_RBX != (byte *******)0x0) {
      pub_1406abac0((byte *)unaff_R13,(ulonglong)unaff_RBX,1);
      pppppppbVar9 = pppppppbStack_e0;
    }
  }
LAB_140fabc05:
  pppppppbVar5 = (byte *******)
                 CONCAT71((int7)((ulonglong)-(longlong)pppppppbVar9 >> 8),
                          !SBORROW8(0,(longlong)pppppppbVar9));
  if (((byte)pppppppbVar8 & !SBORROW8(0,(longlong)pppppppbVar9)) != 0) {
    pppppppbStack_58 = pppppppbStack_d8;
    pppppppbVar5 = pppppppbStack_d8;
    if (pppppppbStack_d0 != (byte *******)0x0) {
      pppppppbVar8 = pppppppbStack_d8 + 4;
      pppppppbVar12 = pppppppbStack_d0;
      do {
        if (pppppppbVar8[-4] != (byte ******)0x0) {
          unaff_R13 = (byte *******)pppppppbVar8[-3];
          pub_1406abac0((byte *)unaff_R13,(ulonglong)pppppppbVar8[-4],1);
          pppppppbVar5 = extraout_RAX;
        }
        if (pppppppbVar8[-1] != (byte ******)0x0) {
          unaff_R13 = (byte *******)*pppppppbVar8;
          pub_1406abac0((byte *)unaff_R13,(ulonglong)pppppppbVar8[-1],1);
          pppppppbVar5 = extraout_RAX_00;
        }
        pppppppbVar8 = pppppppbVar8 + 6;
        pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + -1);
      } while (pppppppbVar12 != (byte *******)0x0);
    }
    pppppppbVar8 = (byte *******)0x0;
    if (pppppppbVar9 != (byte *******)0x0) {
      pppppppbVar8 = (byte *******)((longlong)pppppppbVar9 * 0x10);
      unaff_R13 = pppppppbStack_58;
      pub_1406abac0((byte *)pppppppbStack_58,(longlong)pppppppbVar9 * 0x30,8);
      pppppppbVar5 = extraout_RAX_01;
    }
  }
  pppppppbVar12 = (byte *******)0x8000000000000000;
  pppppppbVar9 = pppppppbVar8;
LAB_140fabc9a:
  *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) + 1;
  uStack_a8 = pppppppbVar12;
  pppppppbStack_a0 = pppppppbVar6;
  pppppppbStack_98 = pppppppbVar9;
  pppppppbStack_90 = unaff_RBX;
  pppppppbStack_88 = unaff_R13;
  pppppppbStack_80 = pppppppbVar5;
  pppppppbVar8 = (byte *******)pdb_140404da0(param_2);
  param_1 = puStack_70;
  if (SBORROW8(0,(longlong)pppppppbVar12)) {
    if (pppppppbVar8 != (byte *******)0x0) {
      ppppppbVar3 = *pppppppbVar8;
      pppppppbStack_58 = pppppppbVar8;
      if (ppppppbVar3 == (byte ******)0x1) {
        pdb_1404b38e0(pppppppbVar8 + 1);
      }
      else {
LAB_140fabfc6:
        param_1 = puStack_70;
        if ((ppppppbVar3 == (byte ******)0x0) && (pppppppbStack_58[2] != (byte ******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_58[1],(ulonglong)pppppppbStack_58[2],1);
        }
      }
LAB_140fac111:
      pub_1406abac0((byte *)pppppppbStack_58,0x28,8);
    }
  }
  else {
    if (pppppppbVar8 == (byte *******)0x0) {
LAB_140fabce2:
      puStack_70[2] = pppppppbVar9;
      puStack_70[3] = unaff_RBX;
      puStack_70[4] = unaff_R13;
      puStack_70[5] = pppppppbVar5;
      *puStack_70 = pppppppbVar12;
      puStack_70[1] = pppppppbVar6;
      return puStack_70;
    }
    pppppppbStack_58 = pppppppbVar8;
    if (pppppppbVar9 != (byte *******)0x0) {
      pppppppbVar5 = pppppppbVar6 + 4;
      do {
        if (pppppppbVar5[-4] != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppppbVar5[-3],(ulonglong)pppppppbVar5[-4],1);
        }
        if (pppppppbVar5[-1] != (byte ******)0x0) {
          pub_1406abac0((byte *)*pppppppbVar5,(ulonglong)pppppppbVar5[-1],1);
        }
        pppppppbVar5 = pppppppbVar5 + 6;
        pppppppbVar9 = (byte *******)((longlong)pppppppbVar9 + -1);
      } while (pppppppbVar9 != (byte *******)0x0);
    }
    if (pppppppbVar12 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbVar6,(longlong)pppppppbVar12 * 0x30,8);
    }
    param_1 = puStack_70;
    pppppppbVar6 = pppppppbStack_58;
    if (unaff_RBX != (byte *******)0x0) {
LAB_140fac09b:
      pub_1406abac0((byte *)unaff_R13,(ulonglong)unaff_RBX,1);
      pppppppbVar6 = pppppppbStack_58;
    }
  }
LAB_140fac125:
  uVar4 = pdb_142d86ed0(pppppppbVar6,param_2);
LAB_140fac130:
  param_1[1] = uVar4;
  *param_1 = 0x8000000000000000;
  return param_1;
}

