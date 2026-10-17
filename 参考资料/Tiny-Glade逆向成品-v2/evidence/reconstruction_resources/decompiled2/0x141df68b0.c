// Matched PDB: turbosloth::export::to_json_value<asset::foliage::Grass2RuntimeConfigAsset>
// VA 0x141df68b0, PDB extent 1089 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: turbosloth::export::to_json_value<asset::foliage::Grass2RuntimeConfigAsset>
   Extent: 1089 bytes. No whole-program auto-analysis. */

char * pdb_141df68b0(char *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong lStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  char cStack_68;
  undefined4 uStack_67;
  undefined3 uStack_63;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14270fe30(&uStack_138);
  if (SBORROW8(0,lStack_108)) {
    param_1[8] = '\x01';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    *(undefined **)(param_1 + 0x10) = &UNK_14358b258;
    *param_1 = '\x06';
    return param_1;
  }
  uStack_98 = uStack_118;
  uStack_94 = uStack_114;
  uStack_90 = uStack_110;
  uStack_8c = uStack_10c;
  uStack_80 = uStack_100;
  uStack_7c = uStack_fc;
  uStack_78 = uStack_f8;
  uStack_74 = uStack_f4;
  uStack_70 = uStack_f0;
  uStack_b8 = (undefined4)uStack_138;
  uStack_b4 = uStack_138._4_4_;
  uStack_b0 = uStack_130;
  uStack_ac = uStack_12c;
  lStack_88 = lStack_108;
  lStack_e8 = -0x8000000000000000;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_29 = 1;
  lVar2 = pdb_1427141e0(&lStack_e8,&UNK_1435894fe,5,&lStack_88);
  if (lVar2 == 0) {
    uStack_29 = 1;
    lVar2 = pdb_142715290(&lStack_e8,&UNK_1435894f1,0xd,&uStack_b8);
    if (lVar2 != 0) goto LAB_141df69a3;
    uStack_118 = uStack_c8;
    uStack_114 = uStack_c4;
    uStack_110 = (undefined4)uStack_c0;
    uStack_10c = uStack_c0._4_4_;
    uStack_128 = uStack_d8;
    uStack_124 = uStack_d4;
    uStack_120 = (undefined4)uStack_d0;
    uStack_11c = uStack_d0._4_4_;
    uStack_138 = lStack_e8;
    uStack_130 = uStack_e0;
    uStack_12c = uStack_dc;
    uStack_29 = 0;
    pdb_140ddcdc0(&cStack_68,&uStack_138);
    lVar2 = lStack_60;
    if (cStack_68 != '\x06') {
      *(uint *)(param_1 + 4) = CONCAT31(uStack_63,uStack_67._3_1_);
      *(undefined4 *)(param_1 + 1) = uStack_67;
      *(undefined4 *)(param_1 + 0x10) = uStack_58;
      *(undefined4 *)(param_1 + 0x14) = uStack_54;
      *(undefined4 *)(param_1 + 0x18) = uStack_50;
      *(undefined4 *)(param_1 + 0x1c) = uStack_4c;
      *param_1 = cStack_68;
      *(longlong *)(param_1 + 8) = lStack_60;
      lStack_38 = CONCAT44(uStack_7c,uStack_80);
      lStack_48 = CONCAT44(uStack_74,uStack_78);
      lStack_40 = 0;
      lVar2 = lStack_38;
      while (lStack_48 != lStack_40) {
        lStack_40 = lStack_40 + 1;
        pdb_140989ed0(lVar2);
        lVar2 = lVar2 + 0x48;
      }
      goto LAB_141df6ae9;
    }
  }
  else {
LAB_141df69a3:
    pdb_1427040f0(&lStack_e8);
  }
  uStack_138 = lVar2;
  pdb_14007ee60();
  plVar3 = (longlong *)func_0x0001406abab0(8,8);
  if (plVar3 == (longlong *)0x0) {
    pdb_142dc7e11(8,8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *plVar3 = lVar2;
  *(longlong **)(param_1 + 8) = plVar3;
  *(undefined **)(param_1 + 0x10) = &UNK_14358b2d0;
  *param_1 = '\x06';
  lStack_38 = CONCAT44(uStack_7c,uStack_80);
  lStack_48 = CONCAT44(uStack_74,uStack_78);
  lStack_40 = 0;
  lVar2 = lStack_38;
  while (lStack_48 != lStack_40) {
    lStack_40 = lStack_40 + 1;
    pdb_140989ed0(lVar2);
    lVar2 = lVar2 + 0x48;
  }
LAB_141df6ae9:
  if (lStack_88 != 0) {
    func_0x0001406abac0(lStack_38,lStack_88 * 0x48,8);
  }
  return param_1;
}

