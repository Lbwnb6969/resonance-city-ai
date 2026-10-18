// VA 0x14167d810, PDB extent 3215 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::rocky_terrain::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::rocky_terrain::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 3215 */

byte ******* pdb_14167d810(byte *******param_1,byte *******param_2)

{
  byte bVar1;
  byte *******pppppppbVar2;
  byte ******ppppppbVar3;
  byte ******ppppppbVar4;
  byte *******pppppppbVar5;
  byte *******extraout_RAX;
  byte *******pppppppbVar6;
  byte *******arg0;
  byte *******unaff_RBX;
  ulonglong uVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******unaff_R15;
  byte *******pppppppbStack_f0;
  undefined1 uStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  undefined1 uStack_c1;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  undefined8 uStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  byte *******pppppppbStack_68;
  byte *******pppppppbStack_60;
  byte *******pppppppbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppppbVar4 = param_2[4];
  ppppppbVar3 = param_2[5];
  if (ppppppbVar3 < ppppppbVar4) {
    do {
      ppppppbVar3 = (byte ******)((longlong)ppppppbVar3 + 1);
      bVar1 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppbVar3);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        pppppppbStack_a8 = param_1;
        if (bVar1 == 0x5b) {
          pppppppbVar5 = param_2 + 9;
          *(byte *)pppppppbVar5 = *(byte *)pppppppbVar5 - 1;
          if (*(byte *)pppppppbVar5 != 0) {
            param_2[5] = ppppppbVar3;
            pppppppbStack_b8 = (byte *******)CONCAT71(pppppppbStack_b8._1_7_,1);
            pppppppbVar5 = (byte *******)&uStack_a0;
            pppppppbStack_c0 = param_2;
            pdb_140407e70(pppppppbVar5,&pppppppbStack_c0);
            if ((char)uStack_a0 == '\x01') {
LAB_14167dbf8:
              arg0 = pppppppbStack_98;
              pppppppbVar8 = param_1;
              pppppppbVar9 = (byte *******)0x8000000000000000;
            }
            else {
              if (uStack_a0._1_1_ != '\x01') {
                pppppppbVar5 = (byte *******)0x0;
                pppppppbStack_98 = (byte *******)pdb_142d8f0e0(0,&UNK_143322e90,&UNK_143322608);
                goto LAB_14167dbf8;
              }
              pdb_14165a770(&uStack_a0,pppppppbStack_c0);
              pppppppbVar8 = pppppppbStack_90;
              pppppppbVar5 = uStack_a0;
              if (SBORROW8(0,(longlong)uStack_a0)) goto LAB_14167dbf8;
              pppppppbStack_d0 = pppppppbStack_98;
              pppppppbStack_58 = uStack_a0;
              pppppppbVar6 = (byte *******)&uStack_a0;
              pdb_140407e70(pppppppbVar6,&pppppppbStack_c0);
              if ((char)uStack_a0 == '\x01') {
LAB_14167de51:
                arg0 = pppppppbStack_98;
                pppppppbVar5 = pppppppbVar6;
                pppppppbVar9 = (byte *******)0x8000000000000000;
                unaff_R15 = arg0;
                if (pppppppbStack_58 != (byte *******)0x0) {
                  pppppppbVar5 = pppppppbStack_d0;
                  pub_1406abac0((byte *)pppppppbStack_d0,(longlong)pppppppbStack_58 * 0x24,4);
                }
              }
              else {
                if (uStack_a0._1_1_ != '\x01') {
                  pppppppbVar6 = (byte *******)0x1;
                  pppppppbStack_98 = (byte *******)pdb_142d8f0e0(1,&UNK_143322e90,&UNK_143322608);
                  goto LAB_14167de51;
                }
                pppppppbVar6 = (byte *******)&uStack_a0;
                pdb_141659260(pppppppbVar6,pppppppbStack_c0);
                arg0 = pppppppbStack_d0;
                pppppppbVar5 = pppppppbStack_90;
                unaff_RBX = uStack_a0;
                pppppppbVar9 = pppppppbStack_58;
                unaff_R15 = pppppppbStack_98;
                if (SBORROW8(0,(longlong)uStack_a0)) goto LAB_14167de51;
              }
            }
            *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) + 1;
            uStack_a0 = pppppppbVar9;
            pppppppbStack_98 = arg0;
            pppppppbStack_90 = pppppppbVar8;
            pppppppbStack_88 = unaff_RBX;
            pppppppbStack_80 = unaff_R15;
            pppppppbStack_78 = pppppppbVar5;
            pppppppbVar6 = (byte *******)pdb_140404e50(param_2);
            param_1 = pppppppbStack_a8;
            if (!SBORROW8(0,(longlong)pppppppbVar9)) {
              if (pppppppbVar6 == (byte *******)0x0) goto LAB_14167deb5;
              if (pppppppbVar9 != (byte *******)0x0) {
                pub_1406abac0((byte *)arg0,(longlong)pppppppbVar9 * 0x24,4);
              }
              goto joined_r0x00014167df4f;
            }
            if (pppppppbVar6 == (byte *******)0x0) goto LAB_14167dfe8;
            ppppppbVar4 = *pppppppbVar6;
            pppppppbStack_58 = pppppppbVar6;
            if (ppppppbVar4 != (byte ******)0x1) goto LAB_14167df9d;
            pdb_1404b38e0(pppppppbVar6 + 1);
            goto LAB_14167dfd1;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            arg0 = (byte *******)pdb_142de8b10(param_2,&uStack_c1,&UNK_143323f20);
            goto LAB_14167dfe8;
          }
          pppppppbVar5 = param_2 + 9;
          *(byte *)pppppppbVar5 = *(byte *)pppppppbVar5 - 1;
          if (*(byte *)pppppppbVar5 != 0) {
            param_2[5] = ppppppbVar3;
            uStack_e8 = 1;
            unaff_RBX = (byte *******)0x8000000000000000;
            pppppppbVar6 = (byte *******)&uStack_a0;
            pppppppbStack_f0 = param_2;
            pppppppbVar5 = pppppppbStack_d8;
            pppppppbVar8 = (byte *******)-(longlong)ppppppbVar4;
            pppppppbVar9 = (byte *******)0x8000000000000000;
            goto LAB_14167d8e2;
          }
        }
        uStack_a0 = (byte *******)0x18;
        goto LAB_14167d888;
      }
      param_2[5] = ppppppbVar3;
    } while (ppppppbVar3 != ppppppbVar4);
  }
  uStack_a0 = (byte *******)0x5;
LAB_14167d888:
  ppppppbVar4 = (byte ******)pdb_142d84ef0(param_2,&uStack_a0);
  goto LAB_14167dff0;
LAB_14167d8e2:
  do {
    pppppppbStack_58 = pppppppbVar9;
    pppppppbStack_d0 = pppppppbVar8;
    pppppppbStack_d8 = pppppppbVar5;
    uStack_49 = 1;
    pppppppbStack_68 = unaff_RBX;
    pppppppbStack_60 = pppppppbStack_58;
    pdb_140407a40(pppppppbVar6,&pppppppbStack_f0);
    pppppppbVar8 = pppppppbStack_f0;
    arg0 = pppppppbStack_98;
    pppppppbVar9 = pppppppbStack_58;
    if ((char)uStack_a0 == '\x01') goto LAB_14167dc40;
    if (uStack_a0._1_1_ == '\0') {
      if (SBORROW8(0,(longlong)pppppppbStack_58)) {
        pppppppbStack_c0 = (byte *******)&UNK_143322e58;
        pppppppbStack_b8 = (byte *******)0x8;
        uStack_a0 = (byte *******)&pppppppbStack_c0;
        pppppppbStack_98 = (byte *******)pdb_1402ed400;
        pppppppbStack_60 = (byte *******)0x8000000000000000;
        uStack_49 = 1;
        pppppppbStack_68 = unaff_RBX;
        arg0 = (byte *******)pdb_142d872f0(&UNK_143044fe5,&uStack_a0);
        pppppppbVar9 = (byte *******)0x0;
        goto LAB_14167dc40;
      }
      pppppppbVar5 = pppppppbStack_e0;
      arg0 = pppppppbStack_d8;
      pppppppbVar8 = pppppppbStack_d0;
      unaff_R15 = pppppppbStack_70;
      if (!SBORROW8(0,(longlong)unaff_RBX)) goto LAB_14167dda8;
      pppppppbStack_c0 = (byte *******)&UNK_143322e60;
      pppppppbStack_b8 = (byte *******)0x9;
      uStack_a0 = (byte *******)&pppppppbStack_c0;
      pppppppbStack_98 = (byte *******)pdb_1402ed400;
      pppppppbVar5 = (byte *******)pdb_142d872f0(&UNK_143044fe5,&uStack_a0);
      arg0 = pppppppbVar5;
      pppppppbVar8 = param_1;
      pppppppbVar9 = pppppppbStack_58;
      pppppppbVar2 = pppppppbStack_58;
      goto joined_r0x00014167dd7b;
    }
    pppppppbVar5 = pppppppbStack_f0 + 3;
    pppppppbStack_f0[5] = (byte ******)((longlong)pppppppbStack_f0[5] + 1);
    pppppppbStack_f0[2] = (byte ******)0x0;
    pppppppbStack_60 = pppppppbStack_58;
    uStack_49 = 1;
    pppppppbStack_68 = unaff_RBX;
    pdb_140de3310(pppppppbVar6,pppppppbVar5,pppppppbStack_f0);
    arg0 = pppppppbStack_98;
    param_1 = pppppppbVar8;
    pppppppbVar9 = pppppppbStack_58;
    if ((int)uStack_a0 == 2) goto LAB_14167dc40;
    if (pppppppbStack_90 == (byte *******)0x9) {
      if (*(byte *)(pppppppbStack_98 + 1) == DAT_1433a33b8 && *pppppppbStack_98 == _DAT_1433a33b0) {
        if (!SBORROW8(0,(longlong)unaff_RBX)) {
          pppppppbStack_c0 = (byte *******)&UNK_143322e60;
          pppppppbStack_b8 = (byte *******)0x9;
          uStack_a0 = (byte *******)&pppppppbStack_c0;
          pppppppbStack_98 = (byte *******)pdb_1402ed400;
          pppppppbStack_60 = pppppppbStack_58;
          uStack_49 = 1;
          pppppppbStack_68 = unaff_RBX;
          arg0 = (byte *******)pdb_142d872f0(&UNK_143045061,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto joined_r0x00014167e133;
        }
        ppppppbVar4 = pppppppbVar8[5];
        if (pppppppbVar8[4] <= ppppppbVar4) {
LAB_14167e048:
          uStack_a0 = (byte *******)0x3;
          pppppppbStack_60 = pppppppbStack_58;
          pppppppbStack_68 = (byte *******)0x8000000000000000;
          uStack_49 = 1;
          arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto LAB_14167dc65;
        }
        ppppppbVar3 = *pppppppbVar5;
        while( true ) {
          ppppppbVar4 = (byte ******)((longlong)ppppppbVar4 + 1);
          uVar7 = (ulonglong)*(byte *)((longlong)ppppppbVar3 + -1 + (longlong)ppppppbVar4);
          if (0x3a < uVar7) goto LAB_14167e186;
          if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
          pppppppbVar8[5] = ppppppbVar4;
          if (ppppppbVar4 == pppppppbVar8[4]) goto LAB_14167e048;
        }
        if (uVar7 != 0x3a) {
LAB_14167e186:
          uStack_a0 = (byte *******)0x6;
          pppppppbStack_60 = pppppppbStack_58;
          pppppppbStack_68 = (byte *******)0x8000000000000000;
          uStack_49 = 1;
          arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto LAB_14167dc65;
        }
        pppppppbVar8[5] = ppppppbVar4;
        pppppppbStack_60 = pppppppbStack_58;
        pppppppbStack_68 = (byte *******)0x8000000000000000;
        uStack_49 = 1;
        pdb_141659260(&pppppppbStack_c0,pppppppbVar8);
        pppppppbStack_70 = pppppppbStack_b8;
        arg0 = pppppppbStack_b8;
        pppppppbVar9 = pppppppbStack_58;
        if (SBORROW8(0,(longlong)pppppppbStack_c0)) goto LAB_14167dc65;
        pppppppbStack_e0 = pppppppbStack_b0;
        unaff_RBX = pppppppbStack_c0;
        pppppppbVar5 = pppppppbStack_d8;
        pppppppbVar8 = pppppppbStack_d0;
      }
      else {
LAB_14167d9a0:
        ppppppbVar4 = pppppppbVar8[5];
        if (pppppppbVar8[4] <= ppppppbVar4) {
LAB_14167dba7:
          uStack_a0 = (byte *******)0x3;
          pppppppbStack_60 = pppppppbStack_58;
          uStack_49 = 1;
          pppppppbStack_68 = unaff_RBX;
          arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto LAB_14167dc40;
        }
        ppppppbVar3 = *pppppppbVar5;
        while( true ) {
          ppppppbVar4 = (byte ******)((longlong)ppppppbVar4 + 1);
          uVar7 = (ulonglong)*(byte *)((longlong)ppppppbVar3 + -1 + (longlong)ppppppbVar4);
          if (0x3a < uVar7) goto LAB_14167e083;
          if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
          pppppppbVar8[5] = ppppppbVar4;
          if (ppppppbVar4 == pppppppbVar8[4]) goto LAB_14167dba7;
        }
        if (uVar7 != 0x3a) {
LAB_14167e083:
          uStack_a0 = (byte *******)0x6;
          pppppppbStack_60 = pppppppbStack_58;
          uStack_49 = 1;
          pppppppbStack_68 = unaff_RBX;
          arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto LAB_14167dc40;
        }
        pppppppbVar8[5] = ppppppbVar4;
        pppppppbStack_60 = pppppppbStack_58;
        uStack_49 = 1;
        pppppppbStack_68 = unaff_RBX;
        arg0 = (byte *******)pdb_14164c7b0(pppppppbVar8);
        pppppppbVar9 = pppppppbStack_58;
        pppppppbVar5 = pppppppbStack_d8;
        pppppppbVar8 = pppppppbStack_d0;
        if (arg0 != (byte *******)0x0) goto LAB_14167dc40;
      }
      goto LAB_14167d8e2;
    }
    if ((pppppppbStack_90 != (byte *******)0x8) || (*pppppppbStack_98 != _DAT_1433a33a8))
    goto LAB_14167d9a0;
    if (!SBORROW8(0,(longlong)pppppppbStack_58)) {
      pppppppbStack_c0 = (byte *******)&UNK_143322e58;
      pppppppbStack_b8 = (byte *******)0x8;
      uStack_a0 = (byte *******)&pppppppbStack_c0;
      pppppppbStack_98 = (byte *******)pdb_1402ed400;
      pppppppbStack_60 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbStack_68 = unaff_RBX;
      arg0 = (byte *******)pdb_142d872f0(&UNK_143045061,&uStack_a0);
      pppppppbVar9 = pppppppbStack_58;
      goto LAB_14167dc40;
    }
    ppppppbVar4 = pppppppbVar8[5];
    if (pppppppbVar8[4] <= ppppppbVar4) {
LAB_14167e007:
      uStack_a0 = (byte *******)0x3;
      pppppppbStack_60 = (byte *******)0x8000000000000000;
      uStack_49 = 1;
      pppppppbStack_68 = unaff_RBX;
      arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
      break;
    }
    ppppppbVar3 = *pppppppbVar5;
    while( true ) {
      ppppppbVar4 = (byte ******)((longlong)ppppppbVar4 + 1);
      uVar7 = (ulonglong)*(byte *)((longlong)ppppppbVar3 + -1 + (longlong)ppppppbVar4);
      if (0x3a < uVar7) goto LAB_14167e1ba;
      if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
      pppppppbVar8[5] = ppppppbVar4;
      if (ppppppbVar4 == pppppppbVar8[4]) goto LAB_14167e007;
    }
    if (uVar7 != 0x3a) {
LAB_14167e1ba:
      uStack_a0 = (byte *******)0x6;
      pppppppbStack_60 = (byte *******)0x8000000000000000;
      uStack_49 = 1;
      pppppppbStack_68 = unaff_RBX;
      arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
      break;
    }
    pppppppbVar8[5] = ppppppbVar4;
    pppppppbStack_60 = (byte *******)0x8000000000000000;
    uStack_49 = 1;
    pppppppbStack_68 = unaff_RBX;
    pdb_14165a770(&pppppppbStack_c0,pppppppbVar8);
    arg0 = pppppppbStack_b8;
    pppppppbVar5 = pppppppbStack_b8;
    pppppppbVar8 = pppppppbStack_b0;
    pppppppbVar9 = pppppppbStack_c0;
  } while (!SBORROW8(0,(longlong)pppppppbStack_c0));
  pppppppbVar9 = (byte *******)0x0;
LAB_14167dc40:
  pppppppbVar8 = param_1;
  if (!SBORROW8(0,(longlong)unaff_RBX)) {
joined_r0x00014167e133:
    if (unaff_RBX != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_70,(longlong)unaff_RBX << 4,4);
      pppppppbVar6 = arg0;
    }
  }
LAB_14167dc65:
  pppppppbVar5 = (byte *******)((longlong)pppppppbVar9 * 2);
  pppppppbVar2 = pppppppbVar5;
joined_r0x00014167dd7b:
  unaff_R15 = pppppppbVar6;
  if (pppppppbVar2 == (byte *******)0x0) {
    pppppppbVar9 = (byte *******)0x8000000000000000;
  }
  else {
    pub_1406abac0((byte *)pppppppbStack_d8,(longlong)pppppppbVar9 * 0x24,4);
    pppppppbVar5 = extraout_RAX;
    pppppppbVar9 = (byte *******)0x8000000000000000;
  }
LAB_14167dda8:
  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) + 1;
  uStack_a0 = pppppppbVar9;
  pppppppbStack_98 = arg0;
  pppppppbStack_90 = pppppppbVar8;
  pppppppbStack_88 = unaff_RBX;
  pppppppbStack_80 = unaff_R15;
  pppppppbStack_78 = pppppppbVar5;
  pppppppbVar6 = (byte *******)pdb_140404da0(param_2);
  param_1 = pppppppbStack_a8;
  if (SBORROW8(0,(longlong)pppppppbVar9)) {
    if (pppppppbVar6 != (byte *******)0x0) {
      ppppppbVar4 = *pppppppbVar6;
      pppppppbStack_58 = pppppppbVar6;
      if (ppppppbVar4 == (byte ******)0x1) {
        pdb_1404b38e0(pppppppbVar6 + 1);
      }
      else {
LAB_14167df9d:
        param_1 = pppppppbStack_a8;
        if ((ppppppbVar4 == (byte ******)0x0) && (pppppppbStack_58[2] != (byte ******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_58[1],(ulonglong)pppppppbStack_58[2],1);
        }
      }
LAB_14167dfd1:
      pub_1406abac0((byte *)pppppppbStack_58,0x28,8);
    }
  }
  else {
    if (pppppppbVar6 == (byte *******)0x0) {
LAB_14167deb5:
      pppppppbStack_a8[2] = (byte ******)pppppppbVar8;
      pppppppbStack_a8[3] = (byte ******)unaff_RBX;
      pppppppbStack_a8[4] = (byte ******)unaff_R15;
      pppppppbStack_a8[5] = (byte ******)pppppppbVar5;
      *pppppppbStack_a8 = (byte ******)pppppppbVar9;
      pppppppbStack_a8[1] = (byte ******)arg0;
      return pppppppbStack_a8;
    }
    if (pppppppbVar9 != (byte *******)0x0) {
      pub_1406abac0((byte *)arg0,(longlong)pppppppbVar9 * 0x24,4);
    }
joined_r0x00014167df4f:
    arg0 = pppppppbVar6;
    if (unaff_RBX != (byte *******)0x0) {
      pub_1406abac0((byte *)unaff_R15,(longlong)unaff_RBX << 4,4);
    }
  }
LAB_14167dfe8:
  ppppppbVar4 = (byte ******)pdb_142d86ed0(arg0,param_2);
LAB_14167dff0:
  param_1[1] = ppppppbVar4;
  *param_1 = (byte ******)0x8000000000000000;
  return param_1;
}

