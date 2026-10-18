// VA 0x140dc5520, PDB extent 2874 bytes
// lang_lib::load_locale_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: lang_lib::load_locale_impl
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
   Extent: 2874 */

byte ****** pdb_140dc5520(byte ******param_1,byte ******param_2)

{
  code *pcVar1;
  byte *****pppppbVar2;
  byte *******pppppppbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte ******ppppppbVar7;
  byte ******ppppppbStack_1d8;
  byte ******ppppppbStack_1d0;
  byte *******pppppppbStack_1c8;
  byte ******ppppppbStack_1c0;
  byte ******ppppppbStack_1b8;
  byte ******ppppppbStack_1b0;
  undefined *puStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte *****pppppbStack_188;
  byte *******pppppppbStack_180;
  undefined8 uStack_178;
  byte ******ppppppbStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  byte *****pppppbStack_148;
  undefined8 uStack_140;
  byte ******ppppppbStack_138;
  byte ******ppppppbStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte ******ppppppbStack_100;
  byte ******ppppppbStack_f8;
  byte ******ppppppbStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  byte ******ppppppbStack_70;
  byte ******ppppppbStack_68;
  byte *******pppppppbStack_60;
  undefined1 uStack_51;
  byte *******pppppppbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_108 = &ppppppbStack_138;
  ppppppbStack_100 = (byte ******)pdb_1402ed400;
  ppppppbStack_1d8 = param_1;
  ppppppbStack_1d0 = param_2;
  ppppppbStack_138 = param_1;
  ppppppbStack_130 = param_2;
  pdb_140f60760(&uStack_c8,&UNK_1431f2863,&uStack_108);
  pppppppbStack_50 = uStack_c0;
  pdb_140f3e9e0(&pppppbStack_188,&UNK_1431f2857,0xc,uStack_c0,uStack_b8);
  if (uStack_c8 != (byte *******)0x0) {
    pub_1406abac0((byte *)pppppppbStack_50,(ulonglong)uStack_c8,1);
  }
  pppppppbStack_50 = pppppppbStack_180;
  if ((longlong)param_2 < 0) {
    uVar6 = 0;
LAB_140dc55f6:
    pdb_142dc7e2a(uVar6,param_2);
  }
  else {
    if (param_2 == (byte ******)0x0) {
      pppppppbVar3 = (byte *******)0x1;
    }
    else {
      pdb_14007ee60();
      uVar6 = 1;
      pppppppbVar3 = (byte *******)pub_1406abab0((ulonglong)param_2,1);
      if (pppppppbVar3 == (byte *******)0x0) goto LAB_140dc55f6;
      pub_142e32760(pppppppbVar3,param_1,param_2);
    }
    uStack_c8 = (byte *******)param_2;
    uStack_c0 = pppppppbVar3;
    uStack_b8 = (byte *******)param_2;
    pdb_141dd7ba0(&pppppppbStack_1c8,pppppppbStack_50,uStack_178,&uStack_c8);
    if (pppppppbStack_1c8 == (byte *******)0x0) {
      ppppppbStack_68 = ppppppbStack_1c0;
      if (1 < *_DAT_143ca8e90) {
        uStack_108 = &ppppppbStack_1d8;
        ppppppbStack_100 = (byte ******)pdb_1402ed420;
        ppppppbStack_f8 = (byte ******)&ppppppbStack_68;
        ppppppbStack_f0 = (byte ******)pdb_140f36c30;
        puStack_e8 = &UNK_1431f2870;
        pcStack_e0 = pdb_1402ed420;
        uStack_c8 = (byte *******)0x0;
        uStack_c0 = (byte *******)&UNK_1431f283a;
        uStack_b8 = (byte *******)0x8;
        uStack_b0 = (byte ******)0x0;
        uStack_a8 = (byte ******)&UNK_1431f281f;
        uStack_a0 = (byte ******)0x1a;
        uStack_98 = (undefined *)0x2;
        uStack_90 = (code *)&UNK_1431f283a;
        uStack_88 = 8;
        uStack_80 = 0x2500000001;
        puStack_78 = &UNK_1431f2880;
        ppppppbStack_70 = (byte ******)&uStack_108;
        pdb_140f332f0(&uStack_51,&uStack_c8);
      }
      pppppbStack_148 = (byte *****)&UNK_1431f2842;
      uStack_140 = 5;
      ppppppbStack_138 = &pppppbStack_148;
      ppppppbStack_130 = (byte ******)pdb_1402ed400;
      pdb_140f60760(&uStack_c8,&UNK_1431f2863,&ppppppbStack_138);
      pppppppbStack_60 = uStack_c0;
      pdb_140f3e9e0(&ppppppbStack_168,&UNK_1431f2857,0xc,uStack_c0,uStack_b8);
      if (uStack_c8 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_60,(ulonglong)uStack_c8,1);
      }
      pbVar5 = pbStack_160;
      pdb_14007ee60();
      pbVar4 = pub_1406abab0(5,1);
      pppppppbStack_60 = (byte *******)pbVar5;
      if (pbVar4 == (byte *)0x0) {
        pdb_142dc7e2a(1,5);
        goto LAB_140dc5db2;
      }
      pbVar4[4] = 0x53;
      pbVar4[0] = 0x65;
      pbVar4[1] = 0x6e;
      pbVar4[2] = 0x2d;
      pbVar4[3] = 0x55;
      ppppppbStack_138 = (byte ******)0x5;
      puStack_128 = (undefined *)0x5;
      ppppppbStack_130 = (byte ******)pbVar4;
      pdb_141dd7ba0(&uStack_c8,pbVar5,uStack_158,&ppppppbStack_138);
      pdb_141dd85a0(&uStack_108,&uStack_c8);
      ppppppbVar7 = ppppppbStack_100;
      pppppppbVar3 = uStack_108;
      if (uStack_108 == (byte *******)0x0) {
        if (ppppppbStack_168 != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_60,(ulonglong)ppppppbStack_168,1);
        }
        pdb_140f36c40(&ppppppbStack_68);
        if (pppppbStack_188 == (byte *****)0x0) {
          return ppppppbVar7;
        }
        pub_1406abac0((byte *)pppppppbStack_50,(ulonglong)pppppbStack_188,1);
        return ppppppbVar7;
      }
      uStack_118 = CONCAT44(uStack_d4,uStack_d8);
      uStack_110 = CONCAT44(uStack_cc,uStack_d0);
      puStack_128 = puStack_e8;
      pcStack_120 = pcStack_e0;
      ppppppbStack_138 = ppppppbStack_f8;
      ppppppbStack_130 = ppppppbStack_f0;
      if (ppppppbStack_168 != (byte ******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_60,(ulonglong)ppppppbStack_168,1);
      }
      pdb_140f36c40(&ppppppbStack_68);
    }
    else {
      ppppppbStack_138 = ppppppbStack_1b8;
      ppppppbStack_130 = ppppppbStack_1b0;
      puStack_128 = puStack_1a8;
      pcStack_120 = pcStack_1a0;
      uStack_118 = uStack_198;
      uStack_110 = uStack_190;
      ppppppbVar7 = ppppppbStack_1c0;
      pppppppbVar3 = pppppppbStack_1c8;
    }
    if (pppppbStack_188 != (byte *****)0x0) {
      pub_1406abac0((byte *)pppppppbStack_50,(ulonglong)pppppbStack_188,1);
    }
    uStack_a8 = ppppppbStack_138;
    uStack_a0 = ppppppbStack_130;
    uStack_98 = puStack_128;
    uStack_90 = pcStack_120;
    uStack_88 = uStack_118;
    uStack_80 = uStack_110;
    uStack_c8 = (byte *******)0x1;
    uStack_c0 = (byte *******)0x1;
    uStack_b8 = pppppppbVar3;
    uStack_b0 = ppppppbVar7;
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(0x50,8);
    if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    *(undefined8 *)(pbVar5 + 0x40) = uStack_88;
    *(undefined8 *)(pbVar5 + 0x48) = uStack_80;
    *(undefined4 *)(pbVar5 + 0x30) = (undefined4)uStack_98;
    *(undefined4 *)(pbVar5 + 0x34) = uStack_98._4_4_;
    *(undefined4 *)(pbVar5 + 0x38) = (undefined4)uStack_90;
    *(undefined4 *)(pbVar5 + 0x3c) = uStack_90._4_4_;
    *(undefined4 *)(pbVar5 + 0x20) = (undefined4)uStack_a8;
    *(undefined4 *)(pbVar5 + 0x24) = uStack_a8._4_4_;
    *(undefined4 *)(pbVar5 + 0x28) = (undefined4)uStack_a0;
    *(undefined4 *)(pbVar5 + 0x2c) = uStack_a0._4_4_;
    *(undefined4 *)(pbVar5 + 0x10) = (undefined4)uStack_b8;
    *(undefined4 *)(pbVar5 + 0x14) = uStack_b8._4_4_;
    *(undefined4 *)(pbVar5 + 0x18) = (undefined4)uStack_b0;
    *(undefined4 *)(pbVar5 + 0x1c) = uStack_b0._4_4_;
    *(undefined4 *)pbVar5 = (undefined4)uStack_c8;
    *(undefined4 *)(pbVar5 + 4) = uStack_c8._4_4_;
    *(undefined4 *)(pbVar5 + 8) = (undefined4)uStack_c0;
    *(undefined4 *)(pbVar5 + 0xc) = uStack_c0._4_4_;
    ppppppbVar7 = _DAT_143cb2d10;
    LOCK();
    UNLOCK();
    pppppbStack_148 = (byte *****)&DAT_143cb2d18;
    pppppbStack_188 = (byte *****)&DAT_143cb2d10;
    ppppppbStack_168 = _DAT_143cb2d10;
    pppppppbStack_1c8 = (byte *******)&DAT_143cb2d10;
    _DAT_143cb2d10 = (byte ******)(pbVar5 + 0x10);
    uStack_108 = (byte *******)&pppppbStack_148;
    ppppppbStack_100 = &pppppbStack_188;
    uStack_c8 = &ppppppbStack_168;
    uStack_c0 = (byte *******)&pppppppbStack_1c8;
    uStack_b8 = (byte *******)&uStack_108;
    pdb_141dd6d20(&uStack_c8);
    uStack_c8 = (byte *******)(ppppppbVar7 + -2);
    if (ppppppbVar7 != (byte ******)0x0) {
      LOCK();
      *uStack_c8 = (byte ******)((longlong)*uStack_c8 + -1);
      UNLOCK();
      ppppppbVar7 = (byte ******)uStack_c8;
      if (*uStack_c8 == (byte ******)0x0) {
        pdb_141dd6ef0(&uStack_c8);
        ppppppbVar7 = (byte ******)uStack_c8;
      }
    }
    uStack_c8 = (byte *******)ppppppbVar7;
    pdb_140f4c440(&uStack_c8,&UNK_1431f28bd,0x18);
    if (!SBORROW8(0,(longlong)uStack_c8)) {
      if (uStack_c8 == (byte *******)0x8000000000000001) {
        pppppppbVar3 = uStack_c0;
        ppppppbStack_1c0 = (byte ******)uStack_b8;
        pppppbVar2 = (byte *****)0x8000000000000001;
        goto joined_r0x000140dc5cec;
      }
      if (uStack_c8 != (byte *******)0x0) {
        pub_1406abac0((byte *)uStack_c0,(ulonglong)uStack_c8,1);
      }
    }
    ppppppbStack_168 = (byte ******)&UNK_1431f2842;
    pbStack_160 = (byte *)0x5;
    ppppppbStack_100 = (byte ******)pdb_1402ed400;
    uStack_108 = &ppppppbStack_168;
    pdb_140f60760(&uStack_c8,&UNK_1431f2863,&uStack_108);
    pppppppbStack_50 = uStack_c0;
    pdb_140f3e9e0(&pppppppbStack_1c8,&UNK_1431f2857,0xc,uStack_c0,uStack_b8);
    if (uStack_c8 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_50,(ulonglong)uStack_c8,1);
    }
    ppppppbVar7 = ppppppbStack_1c0;
    pdb_14007ee60();
    pppppppbVar3 = (byte *******)pub_1406abab0(5,1);
    if (pppppppbVar3 == (byte *******)0x0) {
      pdb_142dc7e2a(1,5);
    }
    else {
      *(byte *)((longlong)pppppppbVar3 + 4) = 0x53;
      *(undefined4 *)pppppppbVar3 = 0x552d6e65;
      uStack_c8 = (byte *******)0x5;
      uStack_b8 = (byte *******)0x5;
      uStack_c0 = pppppppbVar3;
      pdb_141dd7ba0(&uStack_108,ppppppbVar7,ppppppbStack_1b8,&uStack_c8);
      if (uStack_108 != (byte *******)0x0) {
        uStack_88 = CONCAT44(uStack_d4,uStack_d8);
        uStack_80 = CONCAT44(uStack_cc,uStack_d0);
        uStack_98 = puStack_e8;
        uStack_90 = pcStack_e0;
        uStack_a8 = ppppppbStack_f8;
        uStack_a0 = ppppppbStack_f0;
        uStack_b8._0_4_ = SUB84(uStack_108,0);
        uStack_b8._4_4_ = uStack_108._4_4_;
        uStack_b0 = ppppppbStack_100;
        uStack_c8 = (byte *******)0x1;
        uStack_c0 = (byte *******)0x1;
        pdb_14007ee60();
        pbVar5 = pub_1406abab0(0x50,8);
        if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x50);
        }
        *(undefined8 *)(pbVar5 + 0x40) = uStack_88;
        *(undefined8 *)(pbVar5 + 0x48) = uStack_80;
        *(undefined4 *)(pbVar5 + 0x30) = (undefined4)uStack_98;
        *(undefined4 *)(pbVar5 + 0x34) = uStack_98._4_4_;
        *(undefined4 *)(pbVar5 + 0x38) = (undefined4)uStack_90;
        *(undefined4 *)(pbVar5 + 0x3c) = uStack_90._4_4_;
        *(undefined4 *)(pbVar5 + 0x20) = (undefined4)uStack_a8;
        *(undefined4 *)(pbVar5 + 0x24) = uStack_a8._4_4_;
        *(undefined4 *)(pbVar5 + 0x28) = (undefined4)uStack_a0;
        *(undefined4 *)(pbVar5 + 0x2c) = uStack_a0._4_4_;
        *(undefined4 *)(pbVar5 + 0x10) = (undefined4)uStack_b8;
        *(undefined4 *)(pbVar5 + 0x14) = uStack_b8._4_4_;
        *(undefined4 *)(pbVar5 + 0x18) = (undefined4)uStack_b0;
        *(undefined4 *)(pbVar5 + 0x1c) = uStack_b0._4_4_;
        *(undefined4 *)pbVar5 = (undefined4)uStack_c8;
        *(undefined4 *)(pbVar5 + 4) = uStack_c8._4_4_;
        *(undefined4 *)(pbVar5 + 8) = (undefined4)uStack_c0;
        *(undefined4 *)(pbVar5 + 0xc) = uStack_c0._4_4_;
        pppppbVar2 = _DAT_143cb2d18;
        LOCK();
        UNLOCK();
        ppppppbStack_68 = (byte ******)&DAT_143cb2d20;
        pppppbStack_148 = (byte *****)&DAT_143cb2d18;
        pppppbStack_188 = _DAT_143cb2d18;
        ppppppbStack_168 = (byte ******)&DAT_143cb2d18;
        uStack_108 = &ppppppbStack_68;
        _DAT_143cb2d18 = (byte *****)(pbVar5 + 0x10);
        ppppppbStack_100 = &pppppbStack_148;
        uStack_c8 = (byte *******)&pppppbStack_188;
        uStack_c0 = &ppppppbStack_168;
        uStack_b8 = (byte *******)&uStack_108;
        pdb_141dd6d20(&uStack_c8);
        uStack_c8 = (byte *******)(pppppbVar2 + -2);
        pppppppbVar3 = pppppppbStack_1c8;
        if (pppppbVar2 != (byte *****)0x0) {
          LOCK();
          *uStack_c8 = (byte ******)((longlong)*uStack_c8 + -1);
          UNLOCK();
          pppppbVar2 = (byte *****)uStack_c8;
          if (*uStack_c8 == (byte ******)0x0) {
            pdb_141dd6ef0(&uStack_c8);
            pppppppbVar3 = pppppppbStack_1c8;
            pppppbVar2 = (byte *****)uStack_c8;
          }
        }
joined_r0x000140dc5cec:
        uStack_c8 = (byte *******)pppppbVar2;
        if (pppppppbVar3 != (byte *******)0x0) {
          pub_1406abac0((byte *)ppppppbStack_1c0,(ulonglong)pppppppbVar3,1);
        }
        return (byte ******)0x0;
      }
      pdb_142db7680(ppppppbStack_100);
    }
  }
LAB_140dc5db2:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

