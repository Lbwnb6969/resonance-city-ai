// VA 0x1416743d0, PDB extent 3159 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::startup::startup_meadow::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::startup::startup_meadow::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 3159 */

byte ******* pdb_1416743d0(byte *******param_1,byte *******param_2)

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
LAB_1416747a8:
              arg0 = pppppppbStack_98;
              pppppppbVar8 = param_1;
              pppppppbVar9 = (byte *******)0x8000000000000000;
            }
            else {
              if (uStack_a0._1_1_ != '\x01') {
                pppppppbVar5 = (byte *******)0x0;
                pppppppbStack_98 = (byte *******)pdb_142d8f0e0(0,&UNK_143322fa8,&UNK_143322608);
                goto LAB_1416747a8;
              }
              pdb_14165b0e0(&uStack_a0,pppppppbStack_c0);
              pppppppbVar8 = pppppppbStack_90;
              pppppppbVar5 = uStack_a0;
              if (SBORROW8(0,(longlong)uStack_a0)) goto LAB_1416747a8;
              pppppppbStack_d0 = pppppppbStack_98;
              pppppppbStack_58 = uStack_a0;
              pppppppbVar6 = (byte *******)&uStack_a0;
              pdb_140407e70(pppppppbVar6,&pppppppbStack_c0);
              if ((char)uStack_a0 == '\x01') {
LAB_1416749ef:
                arg0 = pppppppbStack_98;
                pppppppbVar5 = pppppppbVar6;
                pppppppbVar9 = (byte *******)0x8000000000000000;
                unaff_R15 = arg0;
                if (pppppppbStack_58 != (byte *******)0x0) {
                  pppppppbVar5 = pppppppbStack_d0;
                  pub_1406abac0((byte *)pppppppbStack_d0,(ulonglong)pppppppbStack_58,1);
                }
              }
              else {
                if (uStack_a0._1_1_ != '\x01') {
                  pppppppbVar6 = (byte *******)0x1;
                  pppppppbStack_98 = (byte *******)pdb_142d8f0e0(1,&UNK_143322fa8,&UNK_143322608);
                  goto LAB_1416749ef;
                }
                pppppppbVar6 = (byte *******)&uStack_a0;
                pdb_14165b0e0(pppppppbVar6,pppppppbStack_c0);
                arg0 = pppppppbStack_d0;
                pppppppbVar5 = pppppppbStack_90;
                unaff_RBX = uStack_a0;
                pppppppbVar9 = pppppppbStack_58;
                unaff_R15 = pppppppbStack_98;
                if (SBORROW8(0,(longlong)uStack_a0)) goto LAB_1416749ef;
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
              if (pppppppbVar6 == (byte *******)0x0) goto LAB_141674a4e;
              if (pppppppbVar9 != (byte *******)0x0) {
                pub_1406abac0((byte *)arg0,(ulonglong)pppppppbVar9,1);
              }
              goto joined_r0x000141674ae0;
            }
            if (pppppppbVar6 == (byte *******)0x0) goto LAB_141674b79;
            ppppppbVar4 = *pppppppbVar6;
            pppppppbStack_58 = pppppppbVar6;
            if (ppppppbVar4 != (byte ******)0x1) goto LAB_141674b2e;
            pdb_1404b38e0(pppppppbVar6 + 1);
            goto LAB_141674b62;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            arg0 = (byte *******)pdb_142de8b10(param_2,&uStack_c1,&UNK_143323e80);
            goto LAB_141674b79;
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
            goto LAB_1416744a2;
          }
        }
        uStack_a0 = (byte *******)0x18;
        goto LAB_141674448;
      }
      param_2[5] = ppppppbVar3;
    } while (ppppppbVar3 != ppppppbVar4);
  }
  uStack_a0 = (byte *******)0x5;
LAB_141674448:
  ppppppbVar4 = (byte ******)pdb_142d84ef0(param_2,&uStack_a0);
  goto LAB_141674b81;
LAB_1416744a2:
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
    if ((char)uStack_a0 == '\x01') goto LAB_1416747f0;
    if (uStack_a0._1_1_ == '\0') {
      if (SBORROW8(0,(longlong)pppppppbStack_58)) {
        pppppppbStack_c0 = (byte *******)&UNK_143322f78;
        pppppppbStack_b8 = (byte *******)0x4;
        uStack_a0 = (byte *******)&pppppppbStack_c0;
        pppppppbStack_98 = (byte *******)pdb_1402ed400;
        pppppppbStack_60 = (byte *******)0x8000000000000000;
        uStack_49 = 1;
        pppppppbStack_68 = unaff_RBX;
        arg0 = (byte *******)pdb_142d872f0(&UNK_143044fe5,&uStack_a0);
        pppppppbVar9 = (byte *******)0x8000000000000000;
        goto LAB_1416747f0;
      }
      pppppppbVar5 = pppppppbStack_e0;
      arg0 = pppppppbStack_d8;
      pppppppbVar8 = pppppppbStack_d0;
      unaff_R15 = pppppppbStack_70;
      if (!SBORROW8(0,(longlong)unaff_RBX)) goto LAB_14167494f;
      pppppppbStack_c0 = (byte *******)&UNK_1433227d9;
      pppppppbStack_b8 = (byte *******)0xa;
      uStack_a0 = (byte *******)&pppppppbStack_c0;
      pppppppbStack_98 = (byte *******)pdb_1402ed400;
      pppppppbVar5 = (byte *******)pdb_142d872f0(&UNK_143044fe5,&uStack_a0);
      arg0 = pppppppbVar5;
      pppppppbVar8 = param_1;
      pppppppbVar9 = pppppppbStack_58;
      pppppppbVar2 = pppppppbStack_58;
      goto joined_r0x000141674927;
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
    if ((int)uStack_a0 == 2) goto LAB_1416747f0;
    if (pppppppbStack_90 == (byte *******)0xa) {
      if (*(short *)(pppppppbStack_98 + 1) == _DAT_143321ab7 && *pppppppbStack_98 == _DAT_143321aaf)
      {
        if (!SBORROW8(0,(longlong)unaff_RBX)) {
          pppppppbStack_c0 = (byte *******)&UNK_1433227d9;
          pppppppbStack_b8 = (byte *******)0xa;
          uStack_a0 = (byte *******)&pppppppbStack_c0;
          pppppppbStack_98 = (byte *******)pdb_1402ed400;
          pppppppbStack_60 = pppppppbStack_58;
          uStack_49 = 1;
          pppppppbStack_68 = unaff_RBX;
          arg0 = (byte *******)pdb_142d872f0(&UNK_143045061,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto joined_r0x000141674cc4;
        }
        ppppppbVar4 = pppppppbVar8[5];
        if (pppppppbVar8[4] <= ppppppbVar4) {
LAB_141674bd9:
          uStack_a0 = (byte *******)0x3;
          pppppppbStack_60 = pppppppbStack_58;
          pppppppbStack_68 = (byte *******)0x8000000000000000;
          uStack_49 = 1;
          arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto LAB_141674811;
        }
        ppppppbVar3 = *pppppppbVar5;
        while( true ) {
          ppppppbVar4 = (byte ******)((longlong)ppppppbVar4 + 1);
          uVar7 = (ulonglong)*(byte *)((longlong)ppppppbVar3 + -1 + (longlong)ppppppbVar4);
          if (0x3a < uVar7) goto LAB_141674d17;
          if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
          pppppppbVar8[5] = ppppppbVar4;
          if (ppppppbVar4 == pppppppbVar8[4]) goto LAB_141674bd9;
        }
        if (uVar7 != 0x3a) {
LAB_141674d17:
          uStack_a0 = (byte *******)0x6;
          pppppppbStack_60 = pppppppbStack_58;
          pppppppbStack_68 = (byte *******)0x8000000000000000;
          uStack_49 = 1;
          arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto LAB_141674811;
        }
        pppppppbVar8[5] = ppppppbVar4;
        pppppppbStack_60 = pppppppbStack_58;
        pppppppbStack_68 = (byte *******)0x8000000000000000;
        uStack_49 = 1;
        pdb_14165b0e0(&pppppppbStack_c0,pppppppbVar8);
        pppppppbStack_70 = pppppppbStack_b8;
        arg0 = pppppppbStack_b8;
        pppppppbVar9 = pppppppbStack_58;
        if (SBORROW8(0,(longlong)pppppppbStack_c0)) goto LAB_141674811;
        pppppppbStack_e0 = pppppppbStack_b0;
        unaff_RBX = pppppppbStack_c0;
        pppppppbVar5 = pppppppbStack_d8;
        pppppppbVar8 = pppppppbStack_d0;
      }
      else {
LAB_141674551:
        ppppppbVar4 = pppppppbVar8[5];
        if (pppppppbVar8[4] <= ppppppbVar4) {
LAB_141674757:
          uStack_a0 = (byte *******)0x3;
          pppppppbStack_60 = pppppppbStack_58;
          uStack_49 = 1;
          pppppppbStack_68 = unaff_RBX;
          arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto LAB_1416747f0;
        }
        ppppppbVar3 = *pppppppbVar5;
        while( true ) {
          ppppppbVar4 = (byte ******)((longlong)ppppppbVar4 + 1);
          uVar7 = (ulonglong)*(byte *)((longlong)ppppppbVar3 + -1 + (longlong)ppppppbVar4);
          if (0x3a < uVar7) goto LAB_141674c14;
          if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
          pppppppbVar8[5] = ppppppbVar4;
          if (ppppppbVar4 == pppppppbVar8[4]) goto LAB_141674757;
        }
        if (uVar7 != 0x3a) {
LAB_141674c14:
          uStack_a0 = (byte *******)0x6;
          pppppppbStack_60 = pppppppbStack_58;
          uStack_49 = 1;
          pppppppbStack_68 = unaff_RBX;
          arg0 = (byte *******)pdb_142d84ef0(pppppppbVar8,&uStack_a0);
          pppppppbVar9 = pppppppbStack_58;
          goto LAB_1416747f0;
        }
        pppppppbVar8[5] = ppppppbVar4;
        pppppppbStack_60 = pppppppbStack_58;
        uStack_49 = 1;
        pppppppbStack_68 = unaff_RBX;
        arg0 = (byte *******)pdb_14164c7b0(pppppppbVar8);
        pppppppbVar9 = pppppppbStack_58;
        pppppppbVar5 = pppppppbStack_d8;
        pppppppbVar8 = pppppppbStack_d0;
        if (arg0 != (byte *******)0x0) goto LAB_1416747f0;
      }
      goto LAB_1416744a2;
    }
    if ((pppppppbStack_90 != (byte *******)0x4) || (*(int *)pppppppbStack_98 != _DAT_143321aab))
    goto LAB_141674551;
    if (!SBORROW8(0,(longlong)pppppppbStack_58)) {
      pppppppbStack_c0 = (byte *******)&UNK_143322f78;
      pppppppbStack_b8 = (byte *******)0x4;
      uStack_a0 = (byte *******)&pppppppbStack_c0;
      pppppppbStack_98 = (byte *******)pdb_1402ed400;
      pppppppbStack_60 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbStack_68 = unaff_RBX;
      arg0 = (byte *******)pdb_142d872f0(&UNK_143045061,&uStack_a0);
      pppppppbVar9 = pppppppbStack_58;
      goto LAB_1416747f0;
    }
    ppppppbVar4 = pppppppbVar8[5];
    if (pppppppbVar8[4] <= ppppppbVar4) {
LAB_141674b98:
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
      if (0x3a < uVar7) goto LAB_141674d4b;
      if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
      pppppppbVar8[5] = ppppppbVar4;
      if (ppppppbVar4 == pppppppbVar8[4]) goto LAB_141674b98;
    }
    if (uVar7 != 0x3a) {
LAB_141674d4b:
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
    pdb_14165b0e0(&pppppppbStack_c0,pppppppbVar8);
    arg0 = pppppppbStack_b8;
    pppppppbVar5 = pppppppbStack_b8;
    pppppppbVar8 = pppppppbStack_b0;
    pppppppbVar9 = pppppppbStack_c0;
  } while (!SBORROW8(0,(longlong)pppppppbStack_c0));
  pppppppbVar9 = (byte *******)0x8000000000000000;
LAB_1416747f0:
  pppppppbVar8 = param_1;
  if (!SBORROW8(0,(longlong)unaff_RBX)) {
joined_r0x000141674cc4:
    if (unaff_RBX != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_70,(ulonglong)unaff_RBX,1);
      pppppppbVar6 = arg0;
    }
  }
LAB_141674811:
  pppppppbVar5 = (byte *******)((longlong)pppppppbVar9 * 2);
  pppppppbVar2 = pppppppbVar5;
joined_r0x000141674927:
  unaff_R15 = pppppppbVar6;
  if (pppppppbVar2 == (byte *******)0x0) {
    pppppppbVar9 = (byte *******)0x8000000000000000;
  }
  else {
    pub_1406abac0((byte *)pppppppbStack_d8,(ulonglong)pppppppbVar9,1);
    pppppppbVar5 = extraout_RAX;
    pppppppbVar9 = (byte *******)0x8000000000000000;
  }
LAB_14167494f:
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
LAB_141674b2e:
        param_1 = pppppppbStack_a8;
        if ((ppppppbVar4 == (byte ******)0x0) && (pppppppbStack_58[2] != (byte ******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_58[1],(ulonglong)pppppppbStack_58[2],1);
        }
      }
LAB_141674b62:
      pub_1406abac0((byte *)pppppppbStack_58,0x28,8);
    }
  }
  else {
    if (pppppppbVar6 == (byte *******)0x0) {
LAB_141674a4e:
      pppppppbStack_a8[2] = (byte ******)pppppppbVar8;
      pppppppbStack_a8[3] = (byte ******)unaff_RBX;
      pppppppbStack_a8[4] = (byte ******)unaff_R15;
      pppppppbStack_a8[5] = (byte ******)pppppppbVar5;
      *pppppppbStack_a8 = (byte ******)pppppppbVar9;
      pppppppbStack_a8[1] = (byte ******)arg0;
      return pppppppbStack_a8;
    }
    if (pppppppbVar9 != (byte *******)0x0) {
      pub_1406abac0((byte *)arg0,(ulonglong)pppppppbVar9,1);
    }
joined_r0x000141674ae0:
    arg0 = pppppppbVar6;
    if (unaff_RBX != (byte *******)0x0) {
      pub_1406abac0((byte *)unaff_R15,(ulonglong)unaff_RBX,1);
    }
  }
LAB_141674b79:
  ppppppbVar4 = (byte ******)pdb_142d86ed0(arg0,param_2);
LAB_141674b81:
  param_1[1] = ppppppbVar4;
  *param_1 = (byte ******)0x8000000000000000;
  return param_1;
}

