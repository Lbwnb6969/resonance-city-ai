// VA 0x141b49380, PDB extent 2199 bytes
// tg_mods::identity::zip_mod_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::identity::zip_mod_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 2199 */

undefined8 *
pdb_141b49380(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code **ppcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *******pppppppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  code *pcStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 *******pppppppuStack_148;
  code *pcStack_140;
  code **ppcStack_138;
  code *pcStack_130;
  longlong *plStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined *puStack_f8;
  longlong lStack_f0;
  undefined8 *******pppppppuStack_e8;
  code *pcStack_e0;
  code **ppcStack_d8;
  undefined8 *******pppppppuStack_c0;
  code *pcStack_b8;
  code **ppcStack_b0;
  code *pcStack_a8;
  longlong *plStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 *******pppppppuStack_68;
  undefined8 *******pppppppuStack_60;
  undefined8 *******pppppppuStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&pppppppuStack_c0,param_4,param_5,&UNK_143396434,0xb);
  pppppppuStack_58 = (undefined8 *******)pcStack_b8;
  pdb_141b49cc0(&pppppppuStack_148,pcStack_b8,ppcStack_b0);
  if (!SBORROW8(0,(longlong)pppppppuStack_148)) {
    param_1[2] = ppcStack_138;
    *param_1 = pppppppuStack_148;
    param_1[1] = pcStack_140;
    pppppppuStack_180 = pppppppuStack_c0;
    goto joined_r0x000141b497b1;
  }
  if (pppppppuStack_c0 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pppppppuStack_58,(ulonglong)pppppppuStack_c0,1);
  }
  uVar4 = param_3;
  lVar3 = pdb_140f3ee10(param_2,param_3);
  if ((lVar3 == 0) ||
     (pdb_140f5fd10(&pppppppuStack_c0,lVar3,uVar4),
     pppppppuStack_c0 == (undefined8 *******)0x8000000000000001)) {
    pppppppuStack_e8 = (undefined8 *******)0x0;
    pcStack_e0 = (code *)0x1;
    ppcStack_d8 = (code **)0x0;
  }
  else {
    ppcStack_d8 = ppcStack_b0;
    pppppppuStack_e8 = pppppppuStack_c0;
    pcStack_e0 = pcStack_b8;
  }
  pppppppuStack_c0 = &pppppppuStack_e8;
  pcStack_b8 = pdb_140001020;
  ppcStack_b0 = (code **)&UNK_1433964c8;
  pcStack_a8 = pdb_1402ed400;
  pdb_140f60760(&pppppppuStack_148,&UNK_1433964d8,&pppppppuStack_c0);
  pppppppuStack_58 = pppppppuStack_148;
  pppppppuStack_60 = (undefined8 *******)pcStack_140;
  pdb_140f3e930(&pppppppuStack_180,param_2,param_3,pcStack_140,ppcStack_138);
  if (pppppppuStack_58 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pppppppuStack_60,(ulonglong)pppppppuStack_58,1);
  }
  if ((!SBORROW8(0,(longlong)pppppppuStack_e8)) && (pppppppuStack_e8 != (undefined8 *******)0x0)) {
    pub_1406abac0((byte *)pcStack_e0,(ulonglong)pppppppuStack_e8,1);
  }
  pppppppuStack_58 = (undefined8 *******)pcStack_178;
  pcStack_160 = pcStack_178;
  uStack_158 = uStack_170;
  uVar4 = param_3;
  lVar3 = pdb_140f3ecf0(param_2,param_3);
  if (lVar3 == 0) {
    uVar4 = 0;
    lVar3 = 1;
  }
  pdb_140f5fd10(&pppppppuStack_148,lVar3,uVar4);
  pcStack_b8 = pdb_140001020;
  ppcStack_b0 = (code **)&UNK_1433964e0;
  pcStack_a8 = pdb_1402ed400;
  pppppppuStack_c0 = &pppppppuStack_148;
  pdb_140f60760(&pppppppuStack_e8,&UNK_1433964d8,&pppppppuStack_c0);
  if ((!SBORROW8(0,(longlong)pppppppuStack_148)) && (pppppppuStack_148 != (undefined8 *******)0x0))
  {
    pub_1406abac0((byte *)pcStack_140,(ulonglong)pppppppuStack_148,1);
  }
  pppppppuStack_60 = pppppppuStack_e8;
  pcStack_150 = pcStack_e0;
  pdb_140f3e930(&pppppppuStack_e8,param_2,param_3,pcStack_e0,ppcStack_d8);
  if (pppppppuStack_60 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pcStack_150,(ulonglong)pppppppuStack_60,1);
  }
  pdb_140f4f620(&pppppppuStack_c0,pppppppuStack_58,uStack_170);
  if ((int)pppppppuStack_c0 == 2) {
    pppppppuStack_148 = (undefined8 *******)0x2;
LAB_141b496a3:
    pcStack_140 = pcStack_b8;
    pdb_1404b38e0(&pcStack_140);
    ppcVar2 = ppcStack_d8;
    pcVar1 = pcStack_e0;
    pdb_140f4f620(&pppppppuStack_c0,pcStack_e0,ppcStack_d8);
    if ((int)pppppppuStack_c0 == 2) {
      pppppppuStack_148 = (undefined8 *******)0x2;
    }
    else {
      pppppppuStack_148 = pppppppuStack_c0;
      pcStack_140 = pcStack_b8;
      puStack_f8 = puStack_70;
      uStack_108 = (undefined4)uStack_80;
      uStack_104 = uStack_80._4_4_;
      uStack_100 = (undefined4)uStack_78;
      uStack_fc = uStack_78._4_4_;
      uStack_118 = uStack_90;
      puStack_110 = puStack_88;
      plStack_128 = plStack_a0;
      pcStack_120 = pcStack_98;
      ppcStack_138 = ppcStack_b0;
      pcStack_130 = pcStack_a8;
      if (pppppppuStack_c0 != (undefined8 *******)0x2) {
        lVar3 = pdb_140f4f450(pcVar1,ppcVar2,pppppppuStack_58,uStack_170);
        if (lVar3 == 0) {
          if (2 < *_DAT_143ca8e90) {
            pcStack_140 = pdb_140f58250;
            ppcStack_138 = &pcStack_160;
            pcStack_130 = pdb_140117670;
            pppppppuStack_c0 = (undefined8 *******)0x0;
            pcStack_b8 = (code *)&UNK_14339647b;
            ppcStack_b0 = (code **)0x11;
            pcStack_a8 = (code *)0x0;
            plStack_a0 = (longlong *)&UNK_14339643f;
            pcStack_98 = (code *)0x1e;
            uStack_90 = 3;
            puStack_88 = &UNK_14339647b;
            uStack_80 = 0x11;
            uStack_78 = 0x10e00000001;
            puStack_70 = &UNK_1433964f0;
            pppppppuStack_148 = &pppppppuStack_e8;
            pppppppuStack_68 = &pppppppuStack_148;
            pdb_140f332f0(&uStack_49,&pppppppuStack_c0);
          }
        }
        else {
          lStack_f0 = lVar3;
          if (1 < *_DAT_143ca8e90) {
            pcStack_140 = pdb_140f58250;
            ppcStack_138 = &pcStack_160;
            pcStack_130 = pdb_140117670;
            plStack_128 = &lStack_f0;
            pcStack_120 = pdb_140f59780;
            pppppppuStack_c0 = (undefined8 *******)0x0;
            pcStack_b8 = (code *)&UNK_14339647b;
            ppcStack_b0 = (code **)0x11;
            pcStack_a8 = (code *)0x0;
            plStack_a0 = (longlong *)&UNK_14339643f;
            pcStack_98 = (code *)0x1e;
            uStack_90 = 2;
            puStack_88 = &UNK_14339647b;
            uStack_80 = 0x11;
            uStack_78 = 0x10f00000001;
            puStack_70 = &UNK_143396510;
            pppppppuStack_148 = &pppppppuStack_e8;
            pppppppuStack_68 = &pppppppuStack_148;
            pdb_140f332f0(&uStack_49,&pppppppuStack_c0);
          }
          pdb_1404b38e0(&lStack_f0);
        }
        goto LAB_141b4972e;
      }
    }
    pcStack_140 = pcStack_b8;
    pdb_1404b38e0(&pcStack_140);
  }
  else {
    pppppppuStack_148 = pppppppuStack_c0;
    pcStack_140 = pcStack_b8;
    puStack_f8 = puStack_70;
    uStack_108 = (undefined4)uStack_80;
    uStack_104 = uStack_80._4_4_;
    uStack_100 = (undefined4)uStack_78;
    uStack_fc = uStack_78._4_4_;
    uStack_118 = uStack_90;
    puStack_110 = puStack_88;
    plStack_128 = plStack_a0;
    pcStack_120 = pcStack_98;
    ppcStack_138 = ppcStack_b0;
    pcStack_130 = pcStack_a8;
    if (pppppppuStack_c0 == (undefined8 *******)0x2) goto LAB_141b496a3;
  }
LAB_141b4972e:
  if (pppppppuStack_e8 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pcStack_e0,(ulonglong)pppppppuStack_e8,1);
  }
  pdb_141b49cc0(&pppppppuStack_c0,pppppppuStack_58,uStack_170);
  if (SBORROW8(0,(longlong)pppppppuStack_c0)) {
    pdb_141b4af10(param_1,pppppppuStack_58,uStack_170,param_6,param_7);
  }
  else {
    param_1[2] = ppcStack_b0;
    *param_1 = pppppppuStack_c0;
    param_1[1] = pcStack_b8;
  }
joined_r0x000141b497b1:
  if (pppppppuStack_180 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pppppppuStack_58,(ulonglong)pppppppuStack_180,1);
  }
  return param_1;
}

