// VA 0x1416608f0, PDB extent 2900 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::toolbar::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::toolbar::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2900 */

undefined ** pdb_1416608f0(undefined **param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **extraout_RAX;
  undefined **extraout_RAX_00;
  undefined **ppuVar5;
  byte bVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  undefined **ppuVar9;
  bool bVar10;
  undefined **ppuStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  char cStack_60;
  undefined7 uStack_5f;
  undefined **ppuStack_58;
  char cStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar2 = param_2[5];
  if (puVar2 < param_2[4]) {
    ppuVar7 = (undefined **)0x100002600;
    do {
      puVar2 = puVar2 + 1;
      bVar6 = (param_2[3] + -1)[(longlong)puVar2];
      if ((0x20 < (ulonglong)bVar6) || ((0x100002600U >> ((ulonglong)bVar6 & 0x3f) & 1) == 0)) {
        if (bVar6 != 0x5b) {
          if (bVar6 != 0x7b) {
            ppuVar5 = (undefined **)pdb_142de8b10(param_2,&uStack_91,&UNK_143323ba0);
            goto LAB_1416610ef;
          }
          ppuVar7 = param_2 + 9;
          *(char *)ppuVar7 = *(char *)ppuVar7 + -1;
          if (*(char *)ppuVar7 == '\0') {
LAB_141661177:
            uStack_78 = (undefined **)0x18;
            goto LAB_141660968;
          }
          param_2[5] = puVar2;
          uStack_d8 = 1;
          ppuStack_58 = (undefined **)0x8000000000000000;
          ppuStack_b0 = (undefined **)0x8000000000000000;
          cStack_4a = '\x16';
          ppuStack_e0 = param_2;
          ppuStack_b8 = param_1;
          goto LAB_1416609c0;
        }
        ppuVar5 = param_2 + 9;
        *(char *)ppuVar5 = *(char *)ppuVar5 + -1;
        if (*(char *)ppuVar5 == '\0') goto LAB_141661177;
        param_2[5] = puVar2;
        ppuStack_a8 = (undefined **)CONCAT71(ppuStack_a8._1_7_,1);
        ppuStack_b0 = param_2;
        ppuVar3 = (undefined **)pdb_140407e70(&uStack_78,&ppuStack_b0);
        if ((char)uStack_78 == '\x01') {
          ppuVar5 = ppuStack_70;
          ppuVar9 = (undefined **)0x8000000000000000;
          goto LAB_141660f46;
        }
        if (uStack_78._1_1_ != '\x01') {
          ppuVar3 = (undefined **)pdb_142d8f0e0(0,&UNK_1433225f8,&UNK_143322608);
          ppuVar9 = (undefined **)0x8000000000000000;
          ppuVar5 = ppuVar3;
          goto LAB_141660f46;
        }
        pdb_14165a990(&uStack_78,ppuStack_b0);
        ppuVar3 = (undefined **)-(longlong)uStack_78;
        if (SBORROW8(0,(longlong)uStack_78)) {
          ppuVar5 = ppuStack_70;
          ppuVar9 = (undefined **)0x8000000000000000;
          goto LAB_141660f46;
        }
        ppuVar3 = (undefined **)pdb_140407e70(&uStack_90,&ppuStack_b0);
        ppuVar5 = ppuStack_88;
        ppuVar7 = ppuStack_68;
        if ((char)uStack_90 != '\x01') {
          if (uStack_90._1_1_ == '\x01') {
            ppuVar3 = (undefined **)pdb_141c6e700(&uStack_90,ppuStack_b0);
            ppuVar5 = ppuStack_88;
            if ((char)uStack_90 != '\x01') {
              ppuVar3 = (undefined **)((ulonglong)uStack_90 >> 8 & 0xff);
              ppuVar5 = ppuStack_70;
              ppuVar9 = uStack_78;
              goto LAB_141660f46;
            }
          }
          else {
            ppuVar3 = (undefined **)pdb_142d8f0e0(1,&UNK_1433225f8,&UNK_143322608);
            ppuVar5 = ppuVar3;
          }
        }
        if (ppuStack_68 != (undefined **)0x0) {
          ppuVar9 = ppuStack_70 + 1;
          ppuVar4 = ppuStack_68;
          do {
            ppuVar3 = (undefined **)0x0;
            if (ppuVar9[-1] != (undefined *)0x0) {
              pub_1406abac0(*ppuVar9,(longlong)ppuVar9[-1] * 0x18,8);
              ppuVar3 = extraout_RAX;
            }
            ppuVar9 = ppuVar9 + 4;
            ppuVar4 = (undefined **)((longlong)ppuVar4 + -1);
            ppuVar7 = (undefined **)0x0;
          } while (ppuVar4 != (undefined **)0x0);
        }
        if (uStack_78 != (undefined **)0x0) {
          pub_1406abac0((byte *)ppuStack_70,(longlong)uStack_78 << 5,8);
          ppuVar3 = extraout_RAX_00;
        }
        ppuVar9 = (undefined **)0x8000000000000000;
LAB_141660f46:
        *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
        cStack_60 = (char)ppuVar3;
        uStack_78 = ppuVar9;
        ppuStack_70 = ppuVar5;
        ppuStack_68 = ppuVar7;
        ppuVar4 = (undefined **)pdb_140404e50(param_2);
        if (!SBORROW8(0,(longlong)ppuVar9)) {
          if (ppuVar4 == (undefined **)0x0) goto LAB_141660f75;
          ppuVar3 = ppuVar5;
          if (ppuVar7 != (undefined **)0x0) {
            ppuVar5 = ppuVar5 + 1;
            do {
              if (ppuVar5[-1] != (undefined *)0x0) {
                pub_1406abac0(*ppuVar5,(longlong)ppuVar5[-1] * 0x18,8);
              }
              ppuVar5 = ppuVar5 + 4;
              ppuVar7 = (undefined **)((longlong)ppuVar7 + -1);
            } while (ppuVar7 != (undefined **)0x0);
          }
          goto joined_r0x00014166101e;
        }
        if (ppuVar4 != (undefined **)0x0) {
          puVar2 = *ppuVar4;
          ppuStack_58 = ppuVar4;
          if (puVar2 != (undefined *)0x1) goto LAB_141660fe4;
          pdb_1404b38e0(ppuVar4 + 1);
          goto LAB_1416610db;
        }
        goto LAB_1416610ef;
      }
      param_2[5] = puVar2;
    } while (puVar2 != param_2[4]);
  }
  uStack_78 = (undefined **)0x5;
LAB_141660968:
  puVar2 = (undefined *)pdb_142d84ef0(param_2,&uStack_78);
  goto LAB_1416610fa;
LAB_1416609c0:
  uStack_49 = 1;
  pdb_140407a40(&uStack_78,&ppuStack_e0);
  ppuVar7 = ppuStack_e0;
  if ((char)uStack_78 == '\x01') {
    bVar10 = true;
    ppuVar5 = ppuStack_70;
    goto LAB_141660de0;
  }
  if (uStack_78._1_1_ == '\0') {
    bVar10 = SBORROW8(0,(longlong)ppuStack_58);
    if (bVar10) {
      puStack_d0 = &UNK_1433225c0;
      uStack_c8 = 10;
      uStack_90 = &puStack_d0;
      ppuStack_88 = (undefined **)pdb_1402ed400;
      uStack_49 = 1;
      ppuVar5 = (undefined **)pdb_142d872f0(&UNK_143044fe5,&uStack_90);
    }
    else {
      ppuStack_68 = ppuStack_a0;
      uStack_78 = ppuStack_b0;
      ppuStack_70 = ppuStack_a8;
      ppuVar5 = ppuStack_a8;
      ppuVar7 = ppuStack_a0;
      ppuVar3 = ppuStack_b8;
      ppuVar9 = ppuStack_b0;
      if (cStack_4a != '\x16') goto LAB_141660e5f;
      puStack_d0 = &UNK_1433225ca;
      uStack_c8 = 0xd;
      uStack_90 = &puStack_d0;
      ppuStack_88 = (undefined **)pdb_1402ed400;
      ppuVar5 = (undefined **)pdb_142d872f0(&UNK_143044fe5,&uStack_90);
      uStack_49 = 0;
      pdb_1400da8d0(&uStack_78);
    }
    goto LAB_141660de0;
  }
  ppuStack_e0[5] = ppuStack_e0[5] + 1;
  ppuVar9 = ppuStack_e0 + 3;
  ppuStack_e0[2] = (undefined *)0x0;
  uStack_49 = 1;
  pdb_140de3310(&uStack_78,ppuVar9,ppuStack_e0);
  ppuVar5 = ppuStack_70;
  if ((int)uStack_78 == 2) goto LAB_141660cef;
  if (ppuStack_68 == (undefined **)0xd) {
    if (*(longlong *)((longlong)ppuStack_70 + 5) != CONCAT53(_UNK_1433a38a9,_DAT_1433a38a6) ||
        *ppuStack_70 != (undefined *)CONCAT35(_DAT_1433a38a6,_DAT_1433a38a1)) goto LAB_141660ace;
    if (cStack_4a == '\x16') {
      puVar2 = ppuVar7[5];
      if (puVar2 < ppuVar7[4]) {
        puVar1 = *ppuVar9;
        while( true ) {
          puVar2 = puVar2 + 1;
          uVar8 = (ulonglong)(byte)(puVar1 + -1)[(longlong)puVar2];
          if (0x3a < uVar8) goto LAB_14166121f;
          if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
          ppuVar7[5] = puVar2;
          if (puVar2 == ppuVar7[4]) goto LAB_141661111;
        }
        if (uVar8 == 0x3a) {
          ppuVar7[5] = puVar2;
          uStack_49 = 1;
          pdb_141c6e700(&uStack_90,ppuVar7);
          if ((char)uStack_90 != '\0') {
            bVar10 = true;
            ppuVar5 = ppuStack_88;
            goto LAB_141660de0;
          }
          cStack_4a = uStack_90._1_1_;
          goto LAB_1416609c0;
        }
LAB_14166121f:
        uStack_78 = (undefined **)0x6;
        uStack_49 = 1;
        ppuVar5 = (undefined **)pdb_142d84ef0(ppuVar7,&uStack_78);
      }
      else {
LAB_141661111:
        uStack_78 = (undefined **)0x3;
        uStack_49 = 1;
        ppuVar5 = (undefined **)pdb_142d84ef0(ppuVar7,&uStack_78);
      }
    }
    else {
      uStack_90 = (undefined **)&UNK_1433225ca;
      ppuStack_88 = (undefined **)0xd;
      uStack_78 = (undefined **)&uStack_90;
      ppuStack_70 = (undefined **)pdb_1402ed400;
      uStack_49 = 1;
      ppuVar5 = (undefined **)pdb_142d872f0(&UNK_143045061,&uStack_78);
    }
  }
  else {
    if ((ppuStack_68 != (undefined **)0xa) ||
       (*(short *)(ppuStack_70 + 1) != _DAT_1433a38d8 || *ppuStack_70 != _DAT_1433a38d0)) {
LAB_141660ace:
      puVar2 = ppuVar7[5];
      if (ppuVar7[4] <= puVar2) {
LAB_141660c5f:
        uStack_78 = (undefined **)0x3;
        uStack_49 = 1;
        ppuVar5 = (undefined **)pdb_142d84ef0(ppuVar7,&uStack_78);
        goto LAB_141660c78;
      }
      puVar1 = *ppuVar9;
      while( true ) {
        puVar2 = puVar2 + 1;
        uVar8 = (ulonglong)(byte)(puVar1 + -1)[(longlong)puVar2];
        if (0x3a < uVar8) goto LAB_14166114d;
        if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
        ppuVar7[5] = puVar2;
        if (puVar2 == ppuVar7[4]) goto LAB_141660c5f;
      }
      if (uVar8 != 0x3a) {
LAB_14166114d:
        uStack_78 = (undefined **)0x6;
        uStack_49 = 1;
        ppuVar5 = (undefined **)pdb_142d84ef0(ppuVar7,&uStack_78);
        goto LAB_141660c78;
      }
      ppuVar7[5] = puVar2;
      uStack_49 = 1;
      ppuVar5 = (undefined **)pdb_14164c7b0(ppuVar7);
      if (ppuVar5 != (undefined **)0x0) goto LAB_141660cef;
      goto LAB_1416609c0;
    }
    if (SBORROW8(0,(longlong)ppuStack_58)) {
      puVar2 = ppuVar7[5];
      if (ppuVar7[4] <= puVar2) {
LAB_14166112f:
        uStack_78 = (undefined **)0x3;
        uStack_49 = 1;
        ppuVar5 = (undefined **)pdb_142d84ef0(ppuVar7,&uStack_78);
        goto LAB_141660c78;
      }
      puVar1 = *ppuVar9;
      while( true ) {
        puVar2 = puVar2 + 1;
        uVar8 = (ulonglong)(byte)(puVar1 + -1)[(longlong)puVar2];
        if (0x3a < uVar8) goto LAB_14166123d;
        if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
        ppuVar7[5] = puVar2;
        if (puVar2 == ppuVar7[4]) goto LAB_14166112f;
      }
      if (uVar8 == 0x3a) {
        ppuVar7[5] = puVar2;
        uStack_49 = 1;
        pdb_14165a990(&uStack_90,ppuVar7);
        ppuVar5 = ppuStack_88;
        if (SBORROW8(0,(longlong)uStack_90)) goto LAB_141660cef;
        ppuStack_a0 = ppuStack_80;
        param_1 = ppuStack_80;
        ppuStack_c0 = ppuStack_88;
        ppuStack_b0 = uStack_90;
        ppuStack_a8 = ppuStack_88;
        ppuStack_58 = uStack_90;
        goto LAB_1416609c0;
      }
LAB_14166123d:
      uStack_78 = (undefined **)0x6;
      uStack_49 = 1;
      ppuVar5 = (undefined **)pdb_142d84ef0(ppuVar7,&uStack_78);
    }
    else {
      uStack_90 = (undefined **)&UNK_1433225c0;
      ppuStack_88 = (undefined **)0xa;
      uStack_78 = (undefined **)&uStack_90;
      ppuStack_70 = (undefined **)pdb_1402ed400;
      uStack_49 = 1;
      ppuVar5 = (undefined **)pdb_142d872f0(&UNK_143045061,&uStack_78);
    }
  }
LAB_141660c78:
  bVar10 = true;
  goto LAB_141660de0;
LAB_141660cef:
  bVar10 = true;
LAB_141660de0:
  ppuVar4 = ppuStack_58;
  ppuVar9 = (undefined **)0x8000000000000000;
  bVar6 = bVar10 ^ 1U | SBORROW8(0,(longlong)ppuStack_58);
  ppuVar7 = (undefined **)CONCAT71(0x1000026,bVar6);
  ppuVar3 = ppuStack_b8;
  if (bVar6 == 0) {
    if (param_1 != (undefined **)0x0) {
      ppuVar7 = ppuStack_c0 + 1;
      do {
        if (ppuVar7[-1] != (undefined *)0x0) {
          pub_1406abac0(*ppuVar7,(longlong)ppuVar7[-1] * 0x18,8);
        }
        ppuVar7 = ppuVar7 + 4;
        param_1 = (undefined **)((longlong)param_1 + -1);
      } while (param_1 != (undefined **)0x0);
    }
    ppuVar3 = ppuStack_b8;
    if (ppuVar4 != (undefined **)0x0) {
      pub_1406abac0((byte *)ppuStack_c0,(longlong)ppuVar4 << 5,8);
    }
  }
LAB_141660e5f:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  cStack_60 = cStack_4a;
  uStack_78 = ppuVar9;
  ppuStack_70 = ppuVar5;
  ppuStack_68 = ppuVar7;
  ppuVar4 = (undefined **)pdb_140404da0(param_2);
  param_1 = ppuVar3;
  if (SBORROW8(0,(longlong)ppuVar9)) {
    if (ppuVar4 != (undefined **)0x0) {
      puVar2 = *ppuVar4;
      ppuStack_58 = ppuVar4;
      if (puVar2 == (undefined *)0x1) {
        pdb_1404b38e0(ppuVar4 + 1);
      }
      else {
LAB_141660fe4:
        if ((puVar2 == (undefined *)0x0) && (ppuStack_58[2] != (undefined *)0x0)) {
          pub_1406abac0(ppuStack_58[1],(ulonglong)ppuStack_58[2],1);
        }
      }
LAB_1416610db:
      pub_1406abac0((byte *)ppuStack_58,0x28,8);
    }
  }
  else {
    if (ppuVar4 == (undefined **)0x0) {
LAB_141660f75:
      param_1[2] = (undefined *)ppuVar7;
      param_1[3] = (undefined *)CONCAT71(uStack_5f,cStack_60);
      *param_1 = (undefined *)ppuVar9;
      param_1[1] = (undefined *)ppuVar5;
      return param_1;
    }
    ppuVar3 = ppuVar5;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar5 = ppuVar5 + 1;
      do {
        if (ppuVar5[-1] != (undefined *)0x0) {
          pub_1406abac0(*ppuVar5,(longlong)ppuVar5[-1] * 0x18,8);
        }
        ppuVar5 = ppuVar5 + 4;
        ppuVar7 = (undefined **)((longlong)ppuVar7 + -1);
      } while (ppuVar7 != (undefined **)0x0);
    }
joined_r0x00014166101e:
    ppuVar5 = ppuVar4;
    if (ppuVar9 != (undefined **)0x0) {
      pub_1406abac0((byte *)ppuVar3,(longlong)ppuVar9 << 5,8);
    }
  }
LAB_1416610ef:
  puVar2 = (undefined *)pdb_142d86ed0(ppuVar5,param_2);
LAB_1416610fa:
  param_1[1] = puVar2;
  *param_1 = (undefined *)0x8000000000000000;
  return param_1;
}

