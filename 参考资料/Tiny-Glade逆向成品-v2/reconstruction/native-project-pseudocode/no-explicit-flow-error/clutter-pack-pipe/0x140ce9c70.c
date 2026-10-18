// VA 0x140ce9c70, PDB extent 2239 bytes
// clutter_pack_pipe::import_glb
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::import_glb
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 2239 */

undefined8 * pdb_140ce9c70(undefined8 *param_1)

{
  code *pcVar1;
  byte ****ppppbVar2;
  byte ****ppppbVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte ***pppbStack_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined1 auStack_580 [88];
  byte ***pppbStack_528;
  longlong lStack_520;
  byte ***pppbStack_4b0;
  longlong lStack_4a8;
  byte ***pppbStack_420;
  longlong lStack_418;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  byte ***pppbStack_3d8;
  byte ***pppbStack_3d0;
  byte ***pppbStack_3c8;
  byte ***pppbStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined1 auStack_3a0 [408];
  byte ***pppbStack_208;
  byte ***pppbStack_200;
  byte ***pppbStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  byte ***pppbStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte ***pppbStack_d8;
  undefined8 uStack_d0;
  byte ***pppbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte ***pppbStack_78;
  byte ***pppbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte ***pppbStack_58;
  byte ***pppbStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_141d34e00(&uStack_3e8);
  ppppbVar2 = uStack_3e8;
  uStack_1c8 = uStack_3e0;
  uStack_1c0 = (byte ****)pppbStack_3d8;
  uStack_1b8 = (byte ****)pppbStack_3d0;
  uStack_1b0 = (byte ****)pppbStack_3c8;
  uStack_1a0 = (byte ****)CONCAT44(uStack_3b4,uStack_3b8);
  uStack_1a8 = (byte ****)pppbStack_3c0;
  uStack_198 = uStack_3b0;
  uStack_194 = uStack_3ac;
  uStack_190 = uStack_3a8;
  uStack_18c = uStack_3a4;
  if (SBORROW8(0,(longlong)uStack_3e8)) {
    uStack_3b8 = uStack_3b0;
    uStack_3b4 = uStack_3ac;
    uStack_3b0 = uStack_3a8;
    uStack_3ac = uStack_3a4;
    uVar4 = pdb_142df6970(&uStack_3e8);
    param_1[1] = uVar4;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pub_142e32760(auStack_580,auStack_3a0,0x198);
  pppbStack_50 = pppbStack_208;
  pppbStack_70 = pppbStack_200;
  uStack_5c0 = (undefined4)uStack_1c8;
  uStack_5bc = uStack_1c8._4_4_;
  uStack_5b8 = (undefined4)uStack_1c0;
  uStack_5b4 = uStack_1c0._4_4_;
  uStack_5b0 = (undefined4)uStack_1b8;
  uStack_5ac = uStack_1b8._4_4_;
  uStack_5a8 = (undefined4)uStack_1b0;
  uStack_5a4 = uStack_1b0._4_4_;
  uStack_5a0 = (undefined4)uStack_1a8;
  uStack_59c = uStack_1a8._4_4_;
  uStack_598 = (undefined4)uStack_1a0;
  uStack_594 = uStack_1a0._4_4_;
  uStack_590 = uStack_198;
  uStack_58c = uStack_194;
  uStack_588 = uStack_190;
  uStack_584 = uStack_18c;
  pppbStack_5c8 = (byte ***)ppppbVar2;
  uStack_41 = 1;
  pdb_141d35580(&uStack_3e8,&pppbStack_5c8);
  if (uStack_3e8 == (byte ****)0x0) {
    uStack_41 = 1;
    uVar4 = pdb_142df6340(&UNK_1430870e4,0x18);
  }
  else {
    uStack_3e8 = (byte ****)CONCAT44(uStack_5a4,uStack_5a8);
    uStack_3e0 = uStack_3e8 + CONCAT44(uStack_59c,uStack_5a0) * 10;
    pppbStack_3d8 = (byte ***)0x0;
    uStack_41 = 1;
    pppbStack_3d0 = (byte ***)&pppbStack_5c8;
    pdb_141d35b40(&uStack_1c8,&uStack_3e8);
    if (uStack_1c8 == (byte ****)0x0) {
      uStack_3e0 = (byte ****)(pppbStack_420 + lStack_418 * 9);
      uStack_3e8 = (byte ****)pppbStack_420;
      pppbStack_3d8 = (byte ***)0x0;
      uStack_41 = 1;
      pppbStack_3d0 = (byte ***)&pppbStack_5c8;
      pdb_141d35a50(&uStack_1c8,&uStack_3e8);
      if (uStack_1c8 == (byte ****)0x0) {
        uStack_3e0 = (byte ****)(pppbStack_528 + lStack_520 * 8);
        uStack_3e8 = (byte ****)pppbStack_528;
        pppbStack_3d8 = (byte ***)0x0;
        pppbStack_3d0 = (byte ***)&pppbStack_5c8;
        do {
          uStack_41 = 1;
          pdb_141d35b80(&uStack_1c8,&uStack_3e8);
          if (uStack_1c8 == (byte ****)0x0) {
            uStack_1c0 = (byte ****)(pppbStack_4b0 + lStack_4a8 * 0xb);
            uStack_1c8 = (byte ****)pppbStack_4b0;
            uStack_1b8 = (byte ****)0x0;
            puVar6 = &uStack_3e8;
            uStack_1b0 = &pppbStack_5c8;
            goto LAB_140ce9fd0;
          }
        } while (SBORROW8(0,(longlong)uStack_1c0[3]));
        uStack_41 = 1;
        uVar4 = pdb_142df6340(&UNK_143087089,0x1a);
      }
      else {
        uStack_41 = 1;
        uVar4 = pdb_142df6340(&UNK_1430870a3,0x20);
      }
    }
    else {
      uStack_41 = 1;
      uVar4 = pdb_142df6340(&UNK_1430870c3,0x21);
    }
  }
  goto LAB_140cea043;
  while( true ) {
    pppbStack_1d8 = pppbStack_3d8;
    uStack_1e8 = (undefined4)uStack_3e8;
    uStack_1e4 = uStack_3e8._4_4_;
    uStack_1e0 = (undefined4)uStack_3e0;
    uStack_1dc = uStack_3e0._4_4_;
    uStack_42 = 1;
    lVar5 = pdb_140ceb4c0(&uStack_1c8,&uStack_1e8,&UNK_143087030,0,puVar6);
    if (lVar5 != 0) break;
LAB_140cea288:
    uStack_42 = 1;
    pdb_141d3f160(&uStack_3e8,&uStack_68);
    if (uStack_3e8 == (byte ****)0x0) {
      pub_142e32760(&uStack_3e8,&uStack_1c8,0x138);
      uStack_42 = 0;
      pdb_140cee170(param_1,&uStack_3e8);
      uStack_41 = 0;
      pdb_1404ca240(&uStack_88);
      goto LAB_140cea07a;
    }
  }
  param_1[1] = lVar5;
  *param_1 = 0x8000000000000000;
  pdb_141d37ec0(&uStack_1c8);
  uStack_41 = 0;
  pdb_1404ca240(&uStack_88);
  goto LAB_140cea07a;
  while( true ) {
    pppbStack_58 = pppbStack_78;
    uStack_68 = (byte ****)CONCAT44(uStack_84,uStack_88);
    uStack_60 = (byte ****)CONCAT44(uStack_7c,uStack_80);
    uStack_41 = 1;
    pdb_141c47700(puVar6,&uStack_68);
    if (uStack_3e8 == (byte ****)0x0) break;
LAB_140ce9fd0:
    uStack_41 = 1;
    pdb_141d35b00(&uStack_88,&uStack_1c8);
    if (CONCAT44(uStack_84,uStack_88) == 0) {
      uStack_3e8 = (byte ****)pppbStack_50;
      uStack_3e0 = (byte ****)pppbStack_70;
      pppbStack_3d8 = pppbStack_1f8;
      uStack_41 = 0;
      pdb_141d39640(&uStack_1c8,&pppbStack_5c8,0);
      uStack_68 = uStack_1c0;
      ppppbVar2 = uStack_68;
      uStack_60 = uStack_1b8;
      ppppbVar3 = uStack_60;
      pppbStack_58 = (byte ***)uStack_1b0;
      uStack_68._0_4_ = SUB84(uStack_1c0,0);
      uStack_68._4_4_ = (undefined4)((ulonglong)uStack_1c0 >> 0x20);
      uStack_60._0_4_ = SUB84(uStack_1b8,0);
      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_1b8 >> 0x20);
      uStack_68 = ppppbVar2;
      uStack_60 = ppppbVar3;
      if (uStack_1c8 != (byte ****)0x8000000000000016) {
        uStack_3b8 = uStack_198;
        uStack_3b4 = uStack_194;
        uStack_3b0 = uStack_190;
        uStack_3ac = uStack_18c;
        pppbStack_3c8 = (byte ***)uStack_1a8;
        pppbStack_3c0 = (byte ***)uStack_1a0;
        uStack_3e0 = uStack_1c0;
        pppbStack_3d8 = (byte ***)uStack_1b8;
        pppbStack_3d0 = (byte ***)uStack_1b0;
        uStack_3e8 = uStack_1c8;
        uStack_41 = 0;
        uVar4 = pdb_142df6970(&uStack_3e8);
        param_1[1] = uVar4;
        *param_1 = 0x8000000000000000;
        goto LAB_140cea07a;
      }
      uStack_88 = (undefined4)uStack_68;
      uStack_84 = uStack_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      pppbStack_78 = (byte ***)uStack_1b0;
      pdb_141d35580(&uStack_3e8,&pppbStack_5c8);
      if (uStack_3e8 == (byte ****)0x0) {
        pdb_142dc8110(&UNK_143086fcc,0x27,&UNK_143087018);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uStack_d0 = CONCAT44(uStack_7c,uStack_80);
      pppbStack_c8 = pppbStack_78;
      uStack_1c8 = (byte ****)0x0;
      uStack_1c0 = (byte ****)0x4;
      uStack_1b8 = (byte ****)0x0;
      uStack_1b0 = (byte ****)0x0;
      uStack_1a8 = (byte ****)0x4;
      uStack_1a0 = (byte ****)0x0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_190 = 4;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 4;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 4;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 8;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 8;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 4;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 8;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 8;
      uStack_e0 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_60 = (byte ****)uStack_3e0[1];
      pppbStack_58 = (byte ***)((longlong)uStack_60 + (longlong)uStack_3e0[2] * 4);
      uStack_68 = uStack_3e8;
      pppbStack_d8 = (byte ***)&pppbStack_5c8;
      goto LAB_140cea288;
    }
  }
  uStack_41 = 1;
  uVar4 = pdb_142df6340(&UNK_143087070,0x19);
LAB_140cea043:
  param_1[1] = uVar4;
  *param_1 = 0x8000000000000000;
  if (((ulonglong)pppbStack_50 & 0x7fffffffffffffff) != 0) {
    pub_1406abac0((byte *)pppbStack_70,(ulonglong)pppbStack_50,1);
  }
LAB_140cea07a:
  pdb_141d37070(&pppbStack_5c8);
  return param_1;
}

