// VA 0x140b2ba80, PDB extent 7720 bytes
// country_core::resources::steam::SteamMainActionSet::try_load<steamworks::input::Input<steamworks::ClientManager> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::steam::SteamMainActionSet::try_load<steamworks::input::Input<steamworks::ClientManager>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
   Extent: 7720 */

undefined8 * pdb_140b2ba80(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uStack_181;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 **ppuStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  lStack_48 = pdb_1414d9370(param_2,&UNK_1430571e8,0xc);
  if (lStack_48 == 0) {
    uVar8 = 0;
  }
  else {
    puStack_180 = &UNK_14305721f;
    uStack_178 = 9;
    lStack_50 = pdb_1414d9450(param_2,&UNK_14305721f,9);
    if ((lStack_50 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067cfb;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057228;
    uStack_178 = 0xb;
    lStack_58 = pdb_1414d9450(param_2,&UNK_143057228,0xb);
    if ((lStack_58 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067cfb;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057233;
    uStack_178 = 0xd;
    lStack_60 = pdb_1414d9450(param_2,&UNK_143057233,0xd);
    if ((lStack_60 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067cfb;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057240;
    uStack_178 = 0xd;
    lStack_68 = pdb_1414d9450(param_2,&UNK_143057240,0xd);
    if ((lStack_68 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067cfb;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_14305724d;
    uStack_178 = 10;
    lStack_70 = pdb_1414d9530(param_2,&UNK_14305724d,10);
    if ((lStack_70 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057257;
    uStack_178 = 0xb;
    lStack_78 = pdb_1414d9530(param_2,&UNK_143057257,0xb);
    if ((lStack_78 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057262;
    uStack_178 = 4;
    lStack_80 = pdb_1414d9530(param_2,&UNK_143057262,4);
    if ((lStack_80 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057266;
    uStack_178 = 4;
    lStack_88 = pdb_1414d9530(param_2,&UNK_143057266,4);
    if ((lStack_88 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_14305726a;
    uStack_178 = 0xd;
    lStack_90 = pdb_1414d9530(param_2,&UNK_14305726a,0xd);
    if ((lStack_90 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057277;
    uStack_178 = 9;
    lStack_98 = pdb_1414d9530(param_2,&UNK_143057277,9);
    if ((lStack_98 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057280;
    uStack_178 = 0xe;
    lStack_a0 = pdb_1414d9530(param_2,&UNK_143057280,0xe);
    if ((lStack_a0 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_14305728e;
    uStack_178 = 0xe;
    lStack_a8 = pdb_1414d9530(param_2,&UNK_14305728e,0xe);
    if ((lStack_a8 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_14305729c;
    uStack_178 = 0xb;
    lStack_b0 = pdb_1414d9530(param_2,&UNK_14305729c,0xb);
    if ((lStack_b0 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_1430572a7;
    uStack_178 = 0xc;
    lStack_b8 = pdb_1414d9530(param_2,&UNK_1430572a7,0xc);
    if ((lStack_b8 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_1430572b3;
    uStack_178 = 0xb;
    lStack_c0 = pdb_1414d9530(param_2,&UNK_1430572b3,0xb);
    if ((lStack_c0 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_1430572be;
    uStack_178 = 9;
    lStack_c8 = pdb_1414d9530(param_2,&UNK_1430572be,9);
    if ((lStack_c8 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_1430572c7;
    uStack_178 = 10;
    lStack_d0 = pdb_1414d9530(param_2,&UNK_1430572c7,10);
    if ((lStack_d0 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_1430572d1;
    uStack_178 = 0x12;
    lStack_d8 = pdb_1414d9530(param_2,&UNK_1430572d1,0x12);
    if ((lStack_d8 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_1430572e3;
    uStack_178 = 0xb;
    lStack_e0 = pdb_1414d9530(param_2,&UNK_1430572e3,0xb);
    if ((lStack_e0 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_1430572ee;
    uStack_178 = 9;
    lStack_e8 = pdb_1414d9530(param_2,&UNK_1430572ee,9);
    if ((lStack_e8 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_1430572f7;
    uStack_178 = 0xf;
    lStack_f0 = pdb_1414d9530(param_2,&UNK_1430572f7,0xf);
    if ((lStack_f0 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057306;
    uStack_178 = 7;
    lStack_f8 = pdb_1414d9530(param_2,&UNK_143057306,7);
    if ((lStack_f8 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_14305730d;
    uStack_178 = 8;
    lStack_100 = pdb_1414d9530(param_2,&UNK_14305730d,8);
    if ((lStack_100 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057315;
    uStack_178 = 9;
    lVar1 = pdb_1414d9530(param_2,&UNK_143057315,9);
    if ((lVar1 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_14305731e;
    uStack_178 = 9;
    lVar2 = pdb_1414d9530(param_2,&UNK_14305731e,9);
    if ((lVar2 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057327;
    uStack_178 = 10;
    lVar3 = pdb_1414d9530(param_2,&UNK_143057327,10);
    if ((lVar3 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057331;
    uStack_178 = 5;
    lVar4 = pdb_1414d9530(param_2,&UNK_143057331,5);
    if ((lVar4 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057336;
    uStack_178 = 7;
    lVar5 = pdb_1414d9530(param_2,&UNK_143057336,7);
    if ((lVar5 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_14305733d;
    uStack_178 = 8;
    lVar6 = pdb_1414d9530(param_2,&UNK_14305733d,8);
    if ((lVar6 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    puStack_180 = &UNK_143057345;
    uStack_178 = 7;
    lVar7 = pdb_1414d9530(param_2,&UNK_143057345,7);
    if ((lVar7 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_170 = &puStack_180;
      pcStack_168 = pdb_1402ed420;
      uStack_160 = 0;
      puStack_158 = &UNK_143067d22;
      uStack_150 = 0x2b;
      uStack_148 = 0;
      puStack_140 = &UNK_1430571f4;
      uStack_138 = 0x2a;
      uStack_130 = 1;
      puStack_128 = &UNK_143067d22;
      uStack_120 = 0x2b;
      uStack_118 = 0x12000000001;
      puStack_110 = &UNK_143067d4d;
      ppuStack_108 = &ppuStack_170;
      pdb_140f332f0(&uStack_181,&uStack_160);
    }
    param_1[1] = lStack_48;
    param_1[2] = lStack_50;
    param_1[3] = lStack_58;
    param_1[4] = lStack_60;
    param_1[5] = lStack_68;
    param_1[6] = lStack_70;
    param_1[7] = lStack_78;
    param_1[8] = lStack_80;
    param_1[9] = lStack_88;
    param_1[10] = lStack_90;
    param_1[0xb] = lStack_98;
    param_1[0xc] = lStack_a0;
    param_1[0xd] = lStack_a8;
    param_1[0xe] = lStack_b0;
    param_1[0xf] = lStack_b8;
    param_1[0x10] = lStack_c0;
    param_1[0x11] = lStack_c8;
    param_1[0x12] = lStack_d0;
    param_1[0x13] = lStack_d8;
    param_1[0x14] = lStack_e0;
    param_1[0x15] = lStack_e8;
    param_1[0x16] = lStack_f0;
    param_1[0x17] = lStack_f8;
    param_1[0x18] = lStack_100;
    param_1[0x19] = lVar1;
    param_1[0x1a] = lVar2;
    param_1[0x1b] = lVar3;
    param_1[0x1c] = lVar4;
    param_1[0x1d] = lVar5;
    param_1[0x1e] = lVar6;
    param_1[0x1f] = lVar7;
    uVar8 = 1;
  }
  *param_1 = uVar8;
  return param_1;
}

