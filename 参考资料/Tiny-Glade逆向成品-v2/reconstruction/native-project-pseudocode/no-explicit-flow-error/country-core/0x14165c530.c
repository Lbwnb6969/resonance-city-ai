// VA 0x14165c530, PDB extent 2764 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::toolbar::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::toolbar::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2764 */

undefined8 * pdb_14165c530(undefined8 *param_1,byte *******param_2)

{
  byte bVar1;
  byte ******ppppppbVar2;
  undefined8 uVar3;
  byte ******ppppppbVar4;
  ulonglong uVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******unaff_R14;
  byte *******unaff_R15;
  byte *******pppppppbStack_d0;
  undefined1 uStack_c8;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  undefined1 uStack_89;
  undefined8 uStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  byte *******pppppppbStack_68;
  byte *******pppppppbStack_60;
  byte *******pppppppbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppppbVar2 = param_2[5];
  if (ppppppbVar2 < param_2[4]) {
    do {
      ppppppbVar2 = (byte ******)((longlong)ppppppbVar2 + 1);
      bVar1 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppbVar2);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x5b) {
          pppppppbVar7 = param_2 + 9;
          *(char *)pppppppbVar7 = *(char *)pppppppbVar7 + -1;
          if (*(char *)pppppppbVar7 != '\0') {
            param_2[5] = ppppppbVar2;
            pppppppbStack_a0 = (byte *******)CONCAT71(pppppppbStack_a0._1_7_,1);
            pppppppbStack_a8 = param_2;
            pdb_140407e70(&uStack_88,&pppppppbStack_a8);
            if ((char)uStack_88 == '\x01') {
              pppppppbStack_60 = pppppppbStack_80;
LAB_14165c930:
              pppppppbStack_68 = (byte *******)0x8000000000000000;
            }
            else {
              if (uStack_88._1_1_ != '\x01') {
                pppppppbStack_60 = (byte *******)pdb_142d8f0e0(0,&UNK_1433228b0,&UNK_143322608);
                goto LAB_14165c930;
              }
              pdb_14165a060(&uStack_88,pppppppbStack_a8);
              pppppppbStack_60 = pppppppbStack_80;
              if (SBORROW8(0,(longlong)uStack_88)) goto LAB_14165c930;
              pppppppbStack_68 = uStack_88;
              unaff_R15 = (byte *******)&pppppppbStack_a8;
              pdb_140407e70(&uStack_88);
              pppppppbVar7 = pppppppbStack_80;
              unaff_R14 = pppppppbStack_78;
              if ((char)uStack_88 == '\x01') {
LAB_14165caa5:
                if (pppppppbStack_68 != (byte *******)0x0) {
                  pub_1406abac0((byte *)pppppppbStack_60,(longlong)pppppppbStack_68 * 0x18,8);
                }
                pppppppbStack_68 = (byte *******)0x8000000000000000;
                unaff_R15 = pppppppbVar7;
                pppppppbStack_60 = pppppppbVar7;
              }
              else {
                if (uStack_88._1_1_ != '\x01') {
                  pppppppbVar7 = (byte *******)pdb_142d8f0e0(1,&UNK_1433228b0,&UNK_143322608);
                  goto LAB_14165caa5;
                }
                uVar5 = pdb_14165b3b0(pppppppbStack_a8);
                pppppppbVar7 = unaff_R15;
                if ((uVar5 & 1) != 0) goto LAB_14165caa5;
              }
            }
            *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
            pppppppbVar6 = (byte *******)pdb_140404e50(param_2);
            pppppppbVar7 = pppppppbVar6;
            if (!SBORROW8(0,(longlong)pppppppbStack_68)) goto joined_r0x00014165caf5;
            pppppppbVar7 = pppppppbStack_60;
            if (pppppppbVar6 == (byte *******)0x0) goto LAB_14165cc5e;
            ppppppbVar2 = *pppppppbVar6;
            pppppppbStack_58 = pppppppbVar6;
            if (ppppppbVar2 != (byte ******)0x1) goto LAB_14165cb6b;
            pdb_1404b38e0(pppppppbVar6 + 1);
            goto LAB_14165cc46;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            pppppppbVar7 = (byte *******)pdb_142de8b10(param_2,&uStack_89,&UNK_143323aa0);
            goto LAB_14165cc5e;
          }
          pppppppbVar7 = param_2 + 9;
          *(char *)pppppppbVar7 = *(char *)pppppppbVar7 + -1;
          if (*(char *)pppppppbVar7 != '\0') {
            param_2[5] = ppppppbVar2;
            uStack_c8 = 1;
            pppppppbStack_58 = (byte *******)0x8000000000000000;
            pppppppbStack_60 = (byte *******)0x0;
            pppppppbStack_68 = (byte *******)0x0;
            pppppppbStack_d0 = param_2;
            goto LAB_14165c608;
          }
        }
        uStack_88 = (byte *******)0x18;
        goto LAB_14165c5a8;
      }
      param_2[5] = ppppppbVar2;
    } while (ppppppbVar2 != param_2[4]);
  }
  uStack_88 = (byte *******)0x5;
LAB_14165c5a8:
  uVar3 = pdb_142d84ef0(param_2,&uStack_88);
  goto LAB_14165cc66;
LAB_14165c608:
  do {
    uStack_49 = 1;
    pppppppbStack_70 = pppppppbStack_58;
    pdb_140407a40(&uStack_88,&pppppppbStack_d0);
    pppppppbVar7 = pppppppbStack_d0;
    pppppppbVar6 = pppppppbStack_80;
    unaff_R15 = (byte *******)&uStack_88;
    if ((char)uStack_88 == '\x01') break;
    if (uStack_88._1_1_ == '\0') {
      if (SBORROW8(0,(longlong)pppppppbStack_58)) {
        pppppppbStack_a8 = (byte *******)&UNK_143322880;
        pppppppbStack_a0 = (byte *******)0x5;
        uStack_88 = (byte *******)&pppppppbStack_a8;
        pppppppbStack_80 = (byte *******)pdb_1402ed400;
        pppppppbStack_70 = (byte *******)0x8000000000000000;
        uStack_49 = 1;
        pppppppbStack_60 = (byte *******)pdb_142d872f0(&UNK_143044fe5,&uStack_88);
        pppppppbStack_68 = (byte *******)0x8000000000000000;
        goto LAB_14165c9aa;
      }
      if (((ulonglong)pppppppbStack_68 & 1) != 0) {
        pppppppbStack_60 = pppppppbStack_b0;
        unaff_R14 = pppppppbStack_c0;
        unaff_R15 = pppppppbStack_b8;
        pppppppbStack_68 = pppppppbStack_58;
        goto LAB_14165c9aa;
      }
      pppppppbStack_a8 = (byte *******)&UNK_1433225ca;
      pppppppbStack_a0 = (byte *******)0xd;
      uStack_88 = (byte *******)&pppppppbStack_a8;
      pppppppbStack_80 = (byte *******)pdb_1402ed400;
      pppppppbStack_60 = (byte *******)pdb_142d872f0(&UNK_143044fe5,&uStack_88);
      pppppppbVar7 = pppppppbStack_58;
      goto joined_r0x00014165cc08;
    }
    pppppppbStack_d0[5] = (byte ******)((longlong)pppppppbStack_d0[5] + 1);
    unaff_R14 = pppppppbStack_d0 + 3;
    pppppppbStack_d0[2] = (byte ******)0x0;
    pppppppbStack_70 = pppppppbStack_58;
    uStack_49 = 1;
    pdb_140de3310(&uStack_88,unaff_R14,pppppppbStack_d0);
    pppppppbVar6 = pppppppbStack_80;
    if ((int)uStack_88 == 2) break;
    if (pppppppbStack_78 == (byte *******)0xd) {
      if (*(longlong *)((longlong)pppppppbStack_80 + 5) == CONCAT53(_UNK_1433a38a9,_DAT_1433a38a6)
          && *pppppppbStack_80 == (byte ******)CONCAT35(_DAT_1433a38a6,_DAT_1433a38a1)) {
        if (pppppppbStack_60 != (byte *******)0x0) {
          pppppppbStack_a8 = (byte *******)&UNK_1433225ca;
          pppppppbStack_a0 = (byte *******)0xd;
          uStack_88 = (byte *******)&pppppppbStack_a8;
          pppppppbStack_80 = (byte *******)pdb_1402ed400;
          pppppppbStack_70 = pppppppbStack_58;
          uStack_49 = 1;
          pppppppbVar6 = (byte *******)pdb_142d872f0(&UNK_143045061,&uStack_88);
          break;
        }
        if (pppppppbVar7[5] < pppppppbVar7[4]) {
          pppppppbVar6 = (byte *******)*unaff_R14;
          ppppppbVar2 = pppppppbVar7[5];
          do {
            ppppppbVar4 = (byte ******)((longlong)ppppppbVar2 + 1);
            uVar5 = (ulonglong)*(byte *)((longlong)pppppppbVar6 + (longlong)ppppppbVar2);
            if (0x3a < uVar5) {
LAB_14165c7ec:
              uStack_88 = (byte *******)0x6;
              pppppppbStack_70 = pppppppbStack_58;
              uStack_49 = 1;
              pppppppbStack_b8 = (byte *******)pdb_142d84ef0(pppppppbVar7,&uStack_88);
              goto LAB_14165c7a7;
            }
            if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
              if (uVar5 != 0x3a) goto LAB_14165c7ec;
              pppppppbVar7[5] = ppppppbVar4;
              pppppppbStack_70 = pppppppbStack_58;
              uStack_49 = 1;
              uVar5 = pdb_14165b3b0(pppppppbVar7);
              pppppppbStack_b8 = pppppppbVar6;
              goto LAB_14165c7cc;
            }
            pppppppbVar7[5] = ppppppbVar4;
            ppppppbVar2 = ppppppbVar4;
          } while (ppppppbVar4 != pppppppbVar7[4]);
        }
        uStack_88 = (byte *******)0x3;
        pppppppbStack_70 = pppppppbStack_58;
        uStack_49 = 1;
        pppppppbStack_b8 = (byte *******)pdb_142d84ef0(pppppppbVar7,&uStack_88);
LAB_14165c7a7:
        uVar5 = 1;
LAB_14165c7cc:
        pppppppbVar6 = pppppppbStack_b8;
        if ((uVar5 & 1) != 0) break;
        pppppppbStack_68 = (byte *******)CONCAT71((int7)(uVar5 >> 8),1);
        pppppppbStack_60 = (byte *******)0x1;
        goto LAB_14165c608;
      }
    }
    else if ((pppppppbStack_78 == (byte *******)0x5) &&
            (*(byte *)((longlong)pppppppbStack_80 + 4) == DAT_1433a38a0 &&
             *(int *)pppppppbStack_80 == _DAT_1433a389c)) {
      if (!SBORROW8(0,(longlong)pppppppbStack_58)) {
        pppppppbStack_a8 = (byte *******)&UNK_143322880;
        pppppppbStack_a0 = (byte *******)0x5;
        uStack_88 = (byte *******)&pppppppbStack_a8;
        pppppppbStack_80 = (byte *******)pdb_1402ed400;
        pppppppbStack_70 = pppppppbStack_58;
        uStack_49 = 1;
        pppppppbVar6 = (byte *******)pdb_142d872f0(&UNK_143045061,&uStack_88);
        break;
      }
      ppppppbVar2 = pppppppbVar7[5];
      if (ppppppbVar2 < pppppppbVar7[4]) {
        ppppppbVar4 = *unaff_R14;
        while( true ) {
          ppppppbVar2 = (byte ******)((longlong)ppppppbVar2 + 1);
          uVar5 = (ulonglong)*(byte *)((longlong)ppppppbVar4 + -1 + (longlong)ppppppbVar2);
          if (0x3a < uVar5) goto LAB_14165cd9b;
          if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
          pppppppbVar7[5] = ppppppbVar2;
          if (ppppppbVar2 == pppppppbVar7[4]) goto LAB_14165cc7c;
        }
        if (uVar5 == 0x3a) {
          pppppppbVar7[5] = ppppppbVar2;
          pppppppbStack_70 = (byte *******)0x8000000000000000;
          uStack_49 = 1;
          pdb_14165a060(&pppppppbStack_a8,pppppppbVar7);
          pppppppbStack_b0 = pppppppbStack_a0;
          pppppppbVar7 = pppppppbStack_a0;
          if (!SBORROW8(0,(longlong)pppppppbStack_a8)) {
            pppppppbStack_c0 = pppppppbStack_98;
            pppppppbStack_58 = pppppppbStack_a8;
            goto LAB_14165c608;
          }
        }
        else {
LAB_14165cd9b:
          uStack_88 = (byte *******)0x6;
          pppppppbStack_70 = (byte *******)0x8000000000000000;
          uStack_49 = 1;
          pppppppbVar7 = (byte *******)pdb_142d84ef0(pppppppbVar7,&uStack_88);
        }
      }
      else {
LAB_14165cc7c:
        uStack_88 = (byte *******)0x3;
        pppppppbStack_70 = (byte *******)0x8000000000000000;
        uStack_49 = 1;
        pppppppbVar7 = (byte *******)pdb_142d84ef0(pppppppbVar7,&uStack_88);
      }
      pppppppbStack_68 = (byte *******)0x8000000000000000;
      pppppppbStack_60 = pppppppbVar7;
      goto LAB_14165c9aa;
    }
    ppppppbVar2 = pppppppbVar7[5];
    if (pppppppbVar7[4] <= ppppppbVar2) {
LAB_14165c8e6:
      uStack_88 = (byte *******)0x3;
      pppppppbStack_70 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbVar6 = (byte *******)pdb_142d84ef0(pppppppbVar7,&uStack_88);
      break;
    }
    ppppppbVar4 = *unaff_R14;
    while( true ) {
      ppppppbVar2 = (byte ******)((longlong)ppppppbVar2 + 1);
      uVar5 = (ulonglong)*(byte *)((longlong)ppppppbVar4 + -1 + (longlong)ppppppbVar2);
      if (0x3a < uVar5) goto LAB_14165ccba;
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
      pppppppbVar7[5] = ppppppbVar2;
      if (ppppppbVar2 == pppppppbVar7[4]) goto LAB_14165c8e6;
    }
    if (uVar5 != 0x3a) {
LAB_14165ccba:
      uStack_88 = (byte *******)0x6;
      pppppppbStack_70 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbVar6 = (byte *******)pdb_142d84ef0(pppppppbVar7,&uStack_88);
      break;
    }
    pppppppbVar7[5] = ppppppbVar2;
    pppppppbStack_70 = pppppppbStack_58;
    uStack_49 = 1;
    pppppppbVar6 = (byte *******)pdb_14164c7b0(pppppppbVar7);
  } while (pppppppbVar6 == (byte *******)0x0);
  pppppppbVar7 = (byte *******)((ulonglong)pppppppbStack_58 & 0x7fffffffffffffff);
  pppppppbStack_60 = pppppppbVar6;
joined_r0x00014165cc08:
  pppppppbStack_68 = (byte *******)0x8000000000000000;
  if (pppppppbVar7 != (byte *******)0x0) {
    pppppppbStack_68 = (byte *******)0x8000000000000000;
    pub_1406abac0((byte *)pppppppbStack_b0,(longlong)pppppppbStack_58 * 0x18,8);
  }
LAB_14165c9aa:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  pppppppbVar6 = (byte *******)pdb_140404da0(param_2);
  pppppppbVar7 = pppppppbVar6;
  if (SBORROW8(0,(longlong)pppppppbStack_68)) {
    pppppppbVar7 = pppppppbStack_60;
    if (pppppppbVar6 != (byte *******)0x0) {
      ppppppbVar2 = *pppppppbVar6;
      pppppppbStack_58 = pppppppbVar6;
      if (ppppppbVar2 == (byte ******)0x1) {
        pdb_1404b38e0(pppppppbVar6 + 1);
      }
      else {
LAB_14165cb6b:
        if ((ppppppbVar2 == (byte ******)0x0) && (pppppppbStack_58[2] != (byte ******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_58[1],(ulonglong)pppppppbStack_58[2],1);
        }
      }
LAB_14165cc46:
      pub_1406abac0((byte *)pppppppbStack_58,0x28,8);
      pppppppbVar7 = pppppppbStack_60;
    }
  }
  else {
joined_r0x00014165caf5:
    if (pppppppbVar7 == (byte *******)0x0) {
      param_1[2] = unaff_R14;
      param_1[3] = unaff_R15;
      *param_1 = pppppppbStack_68;
      param_1[1] = pppppppbStack_60;
      return param_1;
    }
    if (pppppppbStack_68 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_60,(longlong)pppppppbStack_68 * 0x18,8);
    }
  }
LAB_14165cc5e:
  uVar3 = pdb_142d86ed0(pppppppbVar7,param_2);
LAB_14165cc66:
  param_1[1] = uVar3;
  *param_1 = 0x8000000000000000;
  return param_1;
}

