// VA 0x140faa560, PDB extent 2779 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,theme_server_proto::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,theme_server_proto::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
   Extent: 2779 */

undefined8 * pdb_140faa560(undefined8 *param_1,byte *******param_2)

{
  byte bVar1;
  byte ******ppppppbVar2;
  undefined8 uVar3;
  byte ******ppppppbVar4;
  ulonglong uVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******unaff_RBX;
  byte *******unaff_R14;
  byte *******unaff_R15;
  byte *******pppppppbStack_d8;
  undefined1 uStack_d0;
  byte *******pppppppbStack_c8;
  longlong lStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  undefined1 uStack_99;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  undefined8 uStack_70;
  byte *******pppppppbStack_68;
  byte *******pppppppbStack_60;
  byte *******pppppppbStack_58;
  byte *******pppppppbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppppbVar2 = param_2[5];
  if (ppppppbVar2 < param_2[4]) {
    do {
      ppppppbVar2 = (byte ******)((longlong)ppppppbVar2 + 1);
      bVar1 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppbVar2);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x5b) {
          pppppppbVar9 = param_2 + 7;
          *(byte *)pppppppbVar9 = *(byte *)pppppppbVar9 - 1;
          if (*(byte *)pppppppbVar9 != 0) {
            param_2[5] = ppppppbVar2;
            pppppppbStack_90 = (byte *******)CONCAT71(pppppppbStack_90._1_7_,1);
            pppppppbVar9 = (byte *******)&pppppppbStack_98;
            pppppppbStack_98 = param_2;
            pdb_140407e70(&uStack_70);
            pppppppbStack_50 = pppppppbStack_68;
            if ((char)uStack_70 == '\x01') {
LAB_140faa996:
              pppppppbStack_78 = (byte *******)0x8000000000000000;
              pppppppbVar9 = unaff_RBX;
            }
            else {
              if (uStack_70._1_1_ != '\x01') {
                pppppppbStack_50 = (byte *******)pdb_142e12e60(0,&UNK_143266cf8,&UNK_143266d08);
                goto LAB_140faa996;
              }
              uVar5 = pdb_140fa9d80(pppppppbStack_98);
              unaff_R15 = (byte *******)0x8000000000000000;
              pppppppbStack_78 = (byte *******)0x8000000000000000;
              pppppppbStack_50 = pppppppbVar9;
              if ((uVar5 & 1) == 0) {
                pppppppbVar6 = (byte *******)&pppppppbStack_98;
                pdb_140407e70(&uStack_70);
                pppppppbStack_50 = pppppppbStack_68;
                if ((char)uStack_70 != '\x01') {
                  if (uStack_70._1_1_ == '\x01') {
                    uVar5 = pdb_140fa9d80(pppppppbStack_98);
                    unaff_R14 = pppppppbVar6;
                    pppppppbStack_50 = pppppppbVar6;
                    if ((uVar5 & 1) == 0) {
                      pdb_140407e70(&uStack_70,&pppppppbStack_98);
                      pppppppbStack_50 = pppppppbStack_68;
                      if ((char)uStack_70 != '\x01') {
                        if (uStack_70._1_1_ != '\x01') {
                          uVar3 = 2;
                          goto LAB_140faac9f;
                        }
                        pdb_140faa410(&uStack_70,pppppppbStack_98);
                        pppppppbStack_50 = pppppppbStack_68;
                        if (!SBORROW8(0,(longlong)uStack_70)) {
                          unaff_R15 = pppppppbStack_60;
                          pppppppbStack_78 = uStack_70;
                        }
                      }
                    }
                  }
                  else {
                    uVar3 = 1;
LAB_140faac9f:
                    pppppppbStack_50 =
                         (byte *******)pdb_142e12e60(uVar3,&UNK_143266cf8,&UNK_143266d08);
                  }
                }
              }
            }
            *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) + 1;
            pppppppbVar8 = (byte *******)pdb_140404e50(param_2);
            pppppppbVar6 = pppppppbVar8;
            if (!SBORROW8(0,(longlong)pppppppbStack_78)) goto joined_r0x000140faaaa2;
            pppppppbVar6 = pppppppbStack_50;
            if (pppppppbVar8 == (byte *******)0x0) goto LAB_140faae81;
            ppppppbVar2 = *pppppppbVar8;
            pppppppbStack_80 = pppppppbVar8;
            if (ppppppbVar2 != (byte ******)0x1) goto LAB_140faae25;
            pdb_1404b38e0(pppppppbVar8 + 1);
            goto LAB_140faae69;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            pppppppbVar6 = (byte *******)pdb_142dc90e0(param_2,&uStack_99,&UNK_143266e30);
            goto LAB_140faae81;
          }
          pppppppbVar9 = param_2 + 7;
          *(byte *)pppppppbVar9 = *(byte *)pppppppbVar9 - 1;
          if (*(byte *)pppppppbVar9 != 0) {
            param_2[5] = ppppppbVar2;
            uStack_d0 = 1;
            pppppppbStack_80 = (byte *******)0x0;
            lStack_c0 = 0;
            pppppppbStack_78 = (byte *******)0x0;
            pppppppbStack_50 = (byte *******)0x0;
            pppppppbVar6 = (byte *******)0x8000000000000000;
            pppppppbStack_d8 = param_2;
            goto LAB_140faa640;
          }
        }
        uStack_70 = (byte *******)0x18;
        goto LAB_140faa5d8;
      }
      param_2[5] = ppppppbVar2;
    } while (ppppppbVar2 != param_2[4]);
  }
  uStack_70 = (byte *******)0x5;
LAB_140faa5d8:
  uVar3 = pdb_142d84ef0(param_2,&uStack_70);
  goto LAB_140faae89;
  while (pppppppbStack_58 = pppppppbVar6, pppppppbVar7 = (byte *******)pdb_140fa8c30(pppppppbVar8),
        pppppppbVar7 == (byte *******)0x0) {
LAB_140faa640:
    pppppppbStack_58 = pppppppbVar6;
    pdb_140407a40(&uStack_70,&pppppppbStack_d8);
    pppppppbVar8 = pppppppbStack_d8;
    pppppppbVar7 = pppppppbStack_68;
    unaff_R15 = pppppppbVar6;
    if ((char)uStack_70 == '\x01') break;
    if (uStack_70._1_1_ == '\0') {
      if (((ulonglong)pppppppbStack_50 & 1) == 0) {
        pppppppbStack_98 = (byte *******)&UNK_143266cc8;
        pppppppbStack_90 = (byte *******)0x5;
        uStack_70 = (byte *******)&pppppppbStack_98;
        pppppppbStack_68 = (byte *******)pdb_1402ed400;
        pppppppbStack_58 = pppppppbVar6;
        pppppppbVar7 = (byte *******)pdb_142d872f0(&UNK_143402280,&uStack_70);
      }
      else {
        if (((ulonglong)pppppppbStack_78 & 1) != 0) {
          if (SBORROW8(0,(longlong)pppppppbVar6)) {
            pppppppbStack_98 = (byte *******)&UNK_143266cd0;
            pppppppbStack_90 = (byte *******)0x3;
            uStack_70 = (byte *******)&pppppppbStack_98;
            pppppppbStack_68 = (byte *******)pdb_1402ed400;
            pppppppbStack_58 = (byte *******)0x8000000000000000;
            pppppppbStack_50 = (byte *******)pdb_142d872f0(&UNK_143402280,&uStack_70);
            pppppppbStack_78 = (byte *******)0x8000000000000000;
            pppppppbVar9 = (byte *******)0x8000000000000000;
          }
          else {
            pppppppbStack_50 = pppppppbStack_b8;
            pppppppbVar9 = pppppppbStack_b0;
            unaff_R14 = pppppppbStack_a8;
            unaff_R15 = pppppppbStack_c8;
            pppppppbStack_78 = pppppppbVar6;
          }
          goto LAB_140faaddc;
        }
        pppppppbStack_98 = (byte *******)&UNK_143266ccd;
        pppppppbStack_90 = (byte *******)0x3;
        uStack_70 = (byte *******)&pppppppbStack_98;
        pppppppbStack_68 = (byte *******)pdb_1402ed400;
        pppppppbStack_58 = pppppppbVar6;
        pppppppbVar7 = (byte *******)pdb_142d872f0(&UNK_143402280,&uStack_70);
      }
      break;
    }
    pppppppbStack_d8[5] = (byte ******)((longlong)pppppppbStack_d8[5] + 1);
    unaff_RBX = pppppppbStack_d8 + 3;
    pppppppbStack_d8[2] = (byte ******)0x0;
    pppppppbStack_58 = pppppppbVar6;
    pdb_140de3740(&uStack_70,unaff_RBX,pppppppbStack_d8);
    pppppppbVar7 = pppppppbStack_68;
    unaff_R14 = pppppppbVar8;
    if ((int)uStack_70 == 2) break;
    if (pppppppbStack_60 == (byte *******)0x3) {
      if (*(byte *)((longlong)pppppppbStack_68 + 2) == DAT_14342610a &&
          *(short *)pppppppbStack_68 == _DAT_143426108) {
        if (pppppppbStack_80 != (byte *******)0x0) {
          pppppppbStack_98 = (byte *******)&UNK_143266ccd;
          pppppppbStack_90 = (byte *******)0x3;
          uStack_70 = (byte *******)&pppppppbStack_98;
          pppppppbStack_68 = (byte *******)pdb_1402ed400;
          pppppppbStack_58 = pppppppbVar6;
          pppppppbVar7 = (byte *******)pdb_142d872f0(&UNK_1434022b3,&uStack_70);
          break;
        }
        if (pppppppbVar8[5] < pppppppbVar8[4]) {
          pppppppbVar9 = (byte *******)*unaff_RBX;
          ppppppbVar2 = pppppppbVar8[5];
          do {
            ppppppbVar4 = (byte ******)((longlong)ppppppbVar2 + 1);
            uVar5 = (ulonglong)*(byte *)((longlong)pppppppbVar9 + (longlong)ppppppbVar2);
            if (0x3a < uVar5) {
LAB_140faa94a:
              uStack_70 = (byte *******)0x6;
              pppppppbStack_58 = pppppppbVar6;
              pppppppbStack_a8 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_70);
              goto LAB_140faa811;
            }
            if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
              if (uVar5 != 0x3a) goto LAB_140faa94a;
              pppppppbVar8[5] = ppppppbVar4;
              pppppppbStack_58 = pppppppbVar6;
              uVar5 = pdb_140fa9d80(pppppppbVar8);
              pppppppbStack_a8 = pppppppbVar9;
              goto LAB_140faa90e;
            }
            pppppppbVar8[5] = ppppppbVar4;
            ppppppbVar2 = ppppppbVar4;
          } while (ppppppbVar4 != pppppppbVar8[4]);
        }
        uStack_70 = (byte *******)0x3;
        pppppppbStack_58 = pppppppbVar6;
        pppppppbStack_a8 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_70);
LAB_140faa811:
        uVar5 = 1;
LAB_140faa90e:
        pppppppbVar7 = pppppppbStack_a8;
        if ((uVar5 & 1) != 0) break;
        pppppppbStack_78 = (byte *******)CONCAT71((int7)(uVar5 >> 8),1);
        pppppppbStack_80 = (byte *******)0x1;
        goto LAB_140faa640;
      }
      if (*(byte *)((longlong)pppppppbStack_68 + 2) == DAT_14342610d &&
          *(short *)pppppppbStack_68 == _DAT_14342610b) {
        if (!SBORROW8(0,(longlong)pppppppbVar6)) {
          pppppppbStack_98 = (byte *******)&UNK_143266cd0;
          pppppppbStack_90 = (byte *******)0x3;
          uStack_70 = (byte *******)&pppppppbStack_98;
          pppppppbStack_68 = (byte *******)pdb_1402ed400;
          pppppppbStack_58 = pppppppbVar6;
          pppppppbVar7 = (byte *******)pdb_142d872f0(&UNK_1434022b3,&uStack_70);
          goto LAB_140faadb3;
        }
        ppppppbVar2 = pppppppbVar8[5];
        if (ppppppbVar2 < pppppppbVar8[4]) {
          ppppppbVar4 = *unaff_RBX;
          while( true ) {
            ppppppbVar2 = (byte ******)((longlong)ppppppbVar2 + 1);
            uVar5 = (ulonglong)*(byte *)((longlong)ppppppbVar4 + -1 + (longlong)ppppppbVar2);
            if (0x3a < uVar5) goto LAB_140faae9f;
            if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
            pppppppbVar8[5] = ppppppbVar2;
            if (ppppppbVar2 == pppppppbVar8[4]) goto LAB_140faac4f;
          }
          if (uVar5 == 0x3a) {
            pppppppbVar8[5] = ppppppbVar2;
            pppppppbStack_58 = (byte *******)0x8000000000000000;
            pdb_140faa410(&pppppppbStack_98,pppppppbVar8);
            pppppppbStack_b8 = pppppppbStack_90;
            pppppppbVar8 = pppppppbStack_90;
            pppppppbVar6 = pppppppbStack_98;
            if (!SBORROW8(0,(longlong)pppppppbStack_98)) {
              pppppppbStack_c8 = pppppppbStack_88;
              goto LAB_140faa640;
            }
          }
          else {
LAB_140faae9f:
            uStack_70 = (byte *******)0x6;
            pppppppbStack_58 = (byte *******)0x8000000000000000;
            pppppppbVar8 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_70);
          }
        }
        else {
LAB_140faac4f:
          uStack_70 = (byte *******)0x3;
          pppppppbStack_58 = (byte *******)0x8000000000000000;
          pppppppbVar8 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_70);
        }
        pppppppbStack_78 = (byte *******)0x8000000000000000;
        pppppppbVar9 = unaff_RBX;
        unaff_R15 = pppppppbVar6;
        pppppppbStack_50 = pppppppbVar8;
        goto LAB_140faaddc;
      }
    }
    else if ((pppppppbStack_60 == (byte *******)0x5) &&
            (*(byte *)((longlong)pppppppbStack_68 + 4) == DAT_143426107 &&
             *(int *)pppppppbStack_68 == _DAT_143426103)) {
      if (lStack_c0 != 0) {
        pppppppbStack_98 = (byte *******)&UNK_143266cc8;
        pppppppbStack_90 = (byte *******)0x5;
        uStack_70 = (byte *******)&pppppppbStack_98;
        pppppppbStack_68 = (byte *******)pdb_1402ed400;
        pppppppbStack_58 = pppppppbVar6;
        pppppppbVar7 = (byte *******)pdb_142d872f0(&UNK_1434022b3,&uStack_70);
        break;
      }
      if (pppppppbVar8[5] < pppppppbVar8[4]) {
        pppppppbVar9 = (byte *******)*unaff_RBX;
        ppppppbVar2 = pppppppbVar8[5];
        do {
          ppppppbVar4 = (byte ******)((longlong)ppppppbVar2 + 1);
          uVar5 = (ulonglong)*(byte *)((longlong)pppppppbVar9 + (longlong)ppppppbVar2);
          if (0x3a < uVar5) {
LAB_140faa92a:
            uStack_70 = (byte *******)0x6;
            pppppppbStack_58 = pppppppbVar6;
            pppppppbStack_b0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_70);
            goto LAB_140faa739;
          }
          if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
            if (uVar5 != 0x3a) goto LAB_140faa92a;
            pppppppbVar8[5] = ppppppbVar4;
            pppppppbStack_58 = pppppppbVar6;
            uVar5 = pdb_140fa9d80(pppppppbVar8);
            pppppppbStack_b0 = pppppppbVar9;
            goto LAB_140faa8d8;
          }
          pppppppbVar8[5] = ppppppbVar4;
          ppppppbVar2 = ppppppbVar4;
        } while (ppppppbVar4 != pppppppbVar8[4]);
      }
      uStack_70 = (byte *******)0x3;
      pppppppbStack_58 = pppppppbVar6;
      pppppppbStack_b0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_70);
LAB_140faa739:
      uVar5 = 1;
LAB_140faa8d8:
      pppppppbVar7 = pppppppbStack_b0;
      if ((uVar5 & 1) != 0) break;
      pppppppbStack_50 = (byte *******)CONCAT71((int7)(uVar5 >> 8),1);
      lStack_c0 = 1;
      goto LAB_140faa640;
    }
  }
  pppppppbVar8 = unaff_R14;
  if (SBORROW8(0,(longlong)pppppppbVar6)) {
    pppppppbStack_78 = (byte *******)0x8000000000000000;
    pppppppbVar9 = unaff_RBX;
    pppppppbStack_50 = pppppppbVar7;
  }
  else {
LAB_140faadb3:
    pppppppbStack_78 = (byte *******)0x8000000000000000;
    pppppppbVar9 = unaff_RBX;
    unaff_R14 = pppppppbVar8;
    pppppppbStack_50 = pppppppbVar7;
    if (pppppppbVar6 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_b8,(ulonglong)pppppppbVar6,1);
    }
  }
LAB_140faaddc:
  *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) + 1;
  pppppppbVar8 = (byte *******)pdb_140404da0(param_2);
  pppppppbVar6 = pppppppbVar8;
  if (SBORROW8(0,(longlong)pppppppbStack_78)) {
    pppppppbVar6 = pppppppbStack_50;
    if (pppppppbVar8 != (byte *******)0x0) {
      ppppppbVar2 = *pppppppbVar8;
      pppppppbStack_80 = pppppppbVar8;
      if (ppppppbVar2 == (byte ******)0x1) {
        pdb_1404b38e0(pppppppbVar8 + 1);
      }
      else {
LAB_140faae25:
        if ((ppppppbVar2 == (byte ******)0x0) && (pppppppbStack_80[2] != (byte ******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_80[1],(ulonglong)pppppppbStack_80[2],1);
        }
      }
LAB_140faae69:
      pub_1406abac0((byte *)pppppppbStack_80,0x28,8);
      pppppppbVar6 = pppppppbStack_50;
    }
  }
  else {
joined_r0x000140faaaa2:
    if (pppppppbVar6 == (byte *******)0x0) {
      param_1[2] = unaff_R15;
      param_1[3] = pppppppbVar9;
      param_1[4] = unaff_R14;
      *param_1 = pppppppbStack_78;
      param_1[1] = pppppppbStack_50;
      return param_1;
    }
    if (pppppppbStack_78 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_50,(ulonglong)pppppppbStack_78,1);
    }
  }
LAB_140faae81:
  uVar3 = pdb_142d86ed0(pppppppbVar6,param_2);
LAB_140faae89:
  param_1[1] = uVar3;
  *param_1 = 0x8000000000000000;
  return param_1;
}

