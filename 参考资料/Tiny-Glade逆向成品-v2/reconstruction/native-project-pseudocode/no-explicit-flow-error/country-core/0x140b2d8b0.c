// VA 0x140b2d8b0, PDB extent 2572 bytes
// country_core::resources::steam::SteamMenuActionSet::try_load<steamworks::input::Input<steamworks::ClientManager> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::steam::SteamMenuActionSet::try_load<steamworks::input::Input<steamworks::ClientManager>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
   Extent: 2572 */

undefined8 * pdb_140b2d8b0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uStack_e1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 **ppuStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  lStack_48 = pdb_1414d9370(param_2,&UNK_14305734c,4);
  if (lStack_48 == 0) {
    uVar8 = 0;
  }
  else {
    puStack_e0 = &UNK_143057228;
    uStack_d8 = 0xb;
    lStack_50 = pdb_1414d9450(param_2,&UNK_143057228,0xb);
    if ((lStack_50 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067cfb;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    puStack_e0 = &UNK_143057315;
    uStack_d8 = 9;
    lStack_58 = pdb_1414d9530(param_2,&UNK_143057315,9);
    if ((lStack_58 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067d4d;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    puStack_e0 = &UNK_14305731e;
    uStack_d8 = 9;
    lStack_60 = pdb_1414d9530(param_2,&UNK_14305731e,9);
    if ((lStack_60 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067d4d;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    puStack_e0 = &UNK_143057327;
    uStack_d8 = 10;
    lVar1 = pdb_1414d9530(param_2,&UNK_143057327,10);
    if ((lVar1 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067d4d;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    puStack_e0 = &UNK_143057331;
    uStack_d8 = 5;
    lVar2 = pdb_1414d9530(param_2,&UNK_143057331,5);
    if ((lVar2 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067d4d;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    puStack_e0 = &UNK_143057336;
    uStack_d8 = 7;
    lVar3 = pdb_1414d9530(param_2,&UNK_143057336,7);
    if ((lVar3 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067d4d;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    puStack_e0 = &UNK_14305733d;
    uStack_d8 = 8;
    lVar4 = pdb_1414d9530(param_2,&UNK_14305733d,8);
    if ((lVar4 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067d4d;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    puStack_e0 = &UNK_143057345;
    uStack_d8 = 7;
    lVar5 = pdb_1414d9530(param_2,&UNK_143057345,7);
    if ((lVar5 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067d4d;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    puStack_e0 = &UNK_143057350;
    uStack_d8 = 0xb;
    lVar6 = pdb_1414d9530(param_2,&UNK_143057350,0xb);
    if ((lVar6 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067d4d;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    puStack_e0 = &UNK_14305735b;
    uStack_d8 = 0xb;
    lVar7 = pdb_1414d9530(param_2,&UNK_14305735b,0xb);
    if ((lVar7 == 0) && (*_DAT_143ca8e90 != 0)) {
      ppuStack_d0 = &puStack_e0;
      pcStack_c8 = pdb_1402ed420;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143067d22;
      uStack_b0 = 0x2b;
      uStack_a8 = 0;
      puStack_a0 = &UNK_1430571f4;
      uStack_98 = 0x2a;
      uStack_90 = 1;
      puStack_88 = &UNK_143067d22;
      uStack_80 = 0x2b;
      uStack_78 = 0x12000000001;
      puStack_70 = &UNK_143067d4d;
      ppuStack_68 = &ppuStack_d0;
      pdb_140f332f0(&uStack_e1,&uStack_c0);
    }
    param_1[1] = lStack_48;
    param_1[2] = lStack_50;
    param_1[3] = lStack_58;
    param_1[4] = lStack_60;
    param_1[5] = lVar1;
    param_1[6] = lVar2;
    param_1[7] = lVar3;
    param_1[8] = lVar4;
    param_1[9] = lVar5;
    param_1[10] = lVar6;
    param_1[0xb] = lVar7;
    uVar8 = 1;
  }
  *param_1 = uVar8;
  return param_1;
}

