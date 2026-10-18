// VA 0x141b49cc0, PDB extent 2855 bytes
// tg_mods::identity::read_id_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::identity::read_id_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 2855 */

void pdb_141b49cc0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char *pcVar5;
  undefined ***pppuVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined **arg0;
  byte *pbStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined ***pppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  code *pcStack_118;
  undefined ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined ***pppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  byte *pbStack_c0;
  undefined **ppuStack_b8;
  ulonglong uStack_b0;
  byte *pbStack_a8;
  undefined **ppuStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f55fb0(&uStack_160);
  uStack_88 = CONCAT44(uStack_15c,uStack_160);
  pbStack_80 = (byte *)CONCAT44(uStack_154,uStack_158);
  if (!SBORROW8(0,uStack_88)) {
    pdb_14261c6f0(&uStack_160,pbStack_80,CONCAT44(uStack_14c,uStack_150));
    if ((char)uStack_160 == '\x06') {
      ppuStack_90 = (undefined **)CONCAT44(uStack_154,uStack_158);
      if (1 < *_DAT_143ca8e90) {
        pdb_141b1e240(&uStack_b0,param_2,param_3,3);
        uStack_70 = pdb_140f58250;
        uStack_68 = &ppuStack_90;
        uStack_60 = pdb_140de07e0;
        puStack_128 = (undefined *)0x0;
        puStack_120 = &UNK_14339647b;
        pcStack_118 = (code *)0x11;
        pppuStack_110 = (undefined ***)0x0;
        puStack_108 = &UNK_14339643f;
        uStack_100 = 0x1e;
        pcStack_f8 = (code *)0x2;
        pppuStack_f0 = (undefined ***)&UNK_14339647b;
        ppuStack_e8 = (undefined **)0x11;
        uStack_e0 = 0xbe00000001;
        puStack_d8 = &UNK_14339648c;
        puStack_d0 = &uStack_78;
        uStack_78 = &uStack_b0;
        pdb_140f332f0(&uStack_49,&puStack_128);
        if (uStack_b0 != 0) {
          pub_1406abac0(pbStack_a8,uStack_b0,1);
        }
      }
      *param_1 = -0x8000000000000000;
      ppuStack_58 = ppuStack_90;
      if (*ppuStack_90 == (undefined *)0x1) {
        pdb_1404b38e0(ppuStack_90 + 1);
      }
      else if ((*ppuStack_90 == (undefined *)0x0) && (ppuStack_90[2] != (undefined *)0x0)) {
        pub_1406abac0(ppuStack_90[1],(ulonglong)ppuStack_90[2],1);
      }
      pub_1406abac0((byte *)ppuStack_58,0x28,8);
      uVar8 = uStack_88;
      goto joined_r0x000141b4a42c;
    }
    uStack_68 = (undefined ***)CONCAT44(uStack_14c,uStack_150);
    uStack_60 = (code *)CONCAT44(uStack_144,uStack_148);
    uStack_78 = (ulonglong *)CONCAT44(uStack_15c,uStack_160);
    uStack_70 = (code *)CONCAT44(uStack_154,uStack_158);
    pcVar5 = (char *)pdb_141c0c220(&UNK_14339645e,6,&uStack_78);
    if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x03')) {
      bVar3 = true;
      bVar2 = true;
      arg0 = (undefined **)0x8000000000000000;
      pcVar7 = uStack_70;
      pppuStack_130 = uStack_68;
      ppuStack_140 = (undefined **)uStack_60;
    }
    else {
      arg0 = *(undefined ***)(pcVar5 + 0x18);
      if ((longlong)arg0 < 0) {
        uVar9 = 0;
LAB_141b49efe:
        pdb_142dc7e2a(uVar9,arg0);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if (arg0 == (undefined **)0x0) {
        pbStack_168 = (byte *)0x1;
      }
      else {
        uVar1 = *(undefined8 *)(pcVar5 + 0x10);
        pdb_14007ee60();
        uVar9 = 1;
        pbStack_168 = pub_1406abab0((ulonglong)arg0,1);
        if (pbStack_168 == (byte *)0x0) goto LAB_141b49efe;
        pub_142e32760(pbStack_168,uVar1,arg0);
      }
      bVar3 = false;
      bVar2 = false;
      pbStack_c0 = pbStack_168;
      ppuStack_b8 = arg0;
      pcVar7 = uStack_70;
      pppuStack_130 = uStack_68;
      ppuStack_140 = (undefined **)uStack_60;
    }
    ppuStack_c8 = arg0;
    uStack_70 = pcVar7;
    uStack_68 = pppuStack_130;
    uStack_60 = (code *)ppuStack_140;
    if (2 < (byte)uStack_78) {
      bVar2 = bVar3;
      if ((byte)uStack_78 == 3) {
        if (pcVar7 != (code *)0x0) {
          uVar8 = 1;
LAB_141b4a216:
          pub_1406abac0((byte *)pppuStack_130,(ulonglong)pcVar7,uVar8);
        }
      }
      else if ((byte)uStack_78 == 4) {
        ppuStack_58 = (undefined **)0x0;
        pppuVar6 = pppuStack_130;
        while (ppuStack_140 != ppuStack_58) {
          ppuStack_58 = (undefined **)((longlong)ppuStack_58 + 1);
          pdb_141da14f0(pppuVar6);
          pppuVar6 = pppuVar6 + 4;
        }
        if (uStack_70 != (code *)0x0) {
          pcVar7 = (code *)((longlong)uStack_70 << 5);
          uVar8 = 8;
          goto LAB_141b4a216;
        }
      }
      else {
        if (pcVar7 == (code *)0x0) {
          ppuStack_e8 = (undefined **)0x0;
        }
        else {
          puStack_120 = (undefined *)0x0;
          uStack_100 = 0;
          ppuStack_e8 = ppuStack_140;
          pcStack_118 = pcVar7;
          pppuStack_110 = pppuStack_130;
          pcStack_f8 = pcVar7;
          pppuStack_f0 = pppuStack_130;
        }
        puStack_128 = (undefined *)(ulonglong)(pcVar7 != (code *)0x0);
        puStack_108 = puStack_128;
        pdb_141da5b20(&uStack_b0,&puStack_128);
        if (uStack_b0 != 0) {
          do {
            ppuStack_90 = &puStack_128;
            pdb_141da1d20(&uStack_b0);
            pdb_141da5b20(&uStack_b0,&puStack_128);
          } while (uStack_b0 != 0);
        }
      }
    }
    if (bVar2) {
      *param_1 = -0x8000000000000000;
LAB_141b4a2d3:
      if (1 < *_DAT_143ca8e90) {
        ppuStack_138 = arg0;
        pdb_141b1e240(&uStack_b0,param_2,param_3,3);
        uStack_70 = pdb_140f58250;
        uStack_68 = &ppuStack_c8;
        uStack_60 = pdb_141b49320;
        puStack_128 = (undefined *)0x0;
        puStack_120 = &UNK_14339647b;
        pcStack_118 = (code *)0x11;
        pppuStack_110 = (undefined ***)0x0;
        puStack_108 = &UNK_14339643f;
        uStack_100 = 0x1e;
        pcStack_f8 = (code *)0x2;
        pppuStack_f0 = (undefined ***)&UNK_14339647b;
        ppuStack_e8 = (undefined **)0x11;
        uStack_e0 = 0xc500000001;
        puStack_d8 = &UNK_143396464;
        puStack_d0 = &uStack_78;
        uStack_78 = &uStack_b0;
        pdb_140f332f0(&uStack_49,&puStack_128);
        arg0 = ppuStack_c8;
        if (uStack_b0 != 0) {
          pub_1406abac0(pbStack_a8,uStack_b0,1);
          arg0 = ppuStack_c8;
        }
      }
      *param_1 = -0x8000000000000000;
      uVar8 = uStack_88;
    }
    else {
      ppuStack_138 = arg0;
      pdb_141b4aca0(param_1,pbStack_168,arg0);
      uVar8 = uStack_88;
      if (SBORROW8(0,*param_1)) goto LAB_141b4a2d3;
    }
    if ((!SBORROW8(0,(longlong)arg0)) && (arg0 != (undefined **)0x0)) {
      pub_1406abac0(pbStack_c0,(ulonglong)arg0,1);
    }
joined_r0x000141b4a42c:
    if (uVar8 == 0) {
      return;
    }
    pub_1406abac0(pbStack_80,uVar8,1);
    return;
  }
  switch(uStack_158 & 3) {
  case 0:
    bVar4 = pbStack_80[0x10];
    break;
  case 1:
    bVar4 = pbStack_80[0xf];
    break;
  case 2:
    if (((0x34 < uStack_154 - 0xf) ||
        ((0x10004000000001U >> ((ulonglong)(uStack_154 - 0xf) & 0x3f) & 1) == 0)) &&
       (1 < uStack_154 - 2)) goto code_r0x000141b49ff6;
    goto code_r0x000141b49fb7;
  case 3:
    bVar4 = 0x2a;
    if (uStack_154 < 0x2a) {
      bVar4 = (byte)uStack_154;
    }
  }
  if (bVar4 == 0) {
code_r0x000141b49fb7:
    *param_1 = -0x8000000000000000;
    pdb_1404b38e0(&puStack_128);
  }
  else {
code_r0x000141b49ff6:
    if (1 < *_DAT_143ca8e90) {
      pdb_141b1e240(&uStack_b0,param_2,param_3,3);
      uStack_70 = pdb_140f58250;
      uStack_68 = &ppuStack_c8;
      uStack_60 = pdb_140f59780;
      puStack_128 = (undefined *)0x0;
      puStack_120 = &UNK_14339647b;
      pcStack_118 = (code *)0x11;
      pppuStack_110 = (undefined ***)0x0;
      puStack_108 = &UNK_14339643f;
      uStack_100 = 0x1e;
      pcStack_f8 = (code *)0x2;
      pppuStack_f0 = (undefined ***)&UNK_14339647b;
      ppuStack_e8 = (undefined **)0x11;
      uStack_e0 = 0xb400000001;
      puStack_d8 = &UNK_14339649b;
      puStack_d0 = &uStack_78;
      uStack_78 = &uStack_b0;
      pdb_140f332f0(&uStack_49,&puStack_128);
      if (uStack_b0 != 0) {
        pub_1406abac0(pbStack_a8,uStack_b0,1);
      }
    }
    *param_1 = -0x8000000000000000;
    pdb_1404b38e0(&ppuStack_c8);
  }
  return;
}

