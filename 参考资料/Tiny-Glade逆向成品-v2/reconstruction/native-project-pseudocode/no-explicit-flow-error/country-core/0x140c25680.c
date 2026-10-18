// VA 0x140c25680, PDB extent 783 bytes
// country_core::systems::grass2::load_grass2_runtime_config
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::grass2::load_grass2_runtime_config
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
   Extent: 783 */

void pdb_140c25680(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong lStack_118;
  undefined *puStack_110;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte *pbStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_40 = pub_1406abab0(6,1);
  if (pbStack_40 != (byte *)0x0) {
    pbStack_40[4] = 0x65;
    pbStack_40[5] = 0x72;
    pbStack_40[0] = 0x73;
    pbStack_40[1] = 0x75;
    pbStack_40[2] = 0x6d;
    pbStack_40[3] = 0x6d;
    puVar4 = &UNK_14306ad3e;
    uStack_31 = 1;
    pdb_140c25990(&uStack_98,&UNK_14306ad3e,6);
    uStack_198 = uStack_58;
    uStack_190 = uStack_50;
    uStack_1a8 = uStack_68;
    uStack_1a4 = uStack_64;
    uStack_1a0 = uStack_60;
    uStack_19c = uStack_5c;
    uStack_1b8 = uStack_78;
    uStack_1b4 = uStack_74;
    uStack_1b0 = uStack_70;
    uStack_1ac = uStack_6c;
    uStack_1c8 = uStack_88;
    uStack_1c4 = uStack_84;
    uStack_1c0 = uStack_80;
    uStack_1bc = uStack_7c;
    uStack_1d8 = uStack_98;
    uStack_1d4 = uStack_94;
    uStack_1d0 = uStack_90;
    uStack_1cc = uStack_8c;
    plVar3 = (longlong *)pdb_140f3bda0();
    if ((char)plVar3[2] == '\x01') {
      lStack_118 = *plVar3;
      puVar4 = (undefined *)plVar3[1];
    }
    else {
      lStack_118 = pdb_140f4fd10();
      *plVar3 = lStack_118;
      plVar3[1] = (longlong)puVar4;
      *(undefined1 *)(plVar3 + 2) = 1;
    }
    *plVar3 = lStack_118 + 1;
    uStack_c8 = uStack_58;
    uStack_c0 = uStack_50;
    uStack_d8 = uStack_68;
    uStack_d4 = uStack_64;
    uStack_d0 = uStack_60;
    uStack_cc = uStack_5c;
    uStack_e8 = uStack_78;
    uStack_e4 = uStack_74;
    uStack_e0 = uStack_70;
    uStack_dc = uStack_6c;
    uStack_f8 = uStack_88;
    uStack_f4 = uStack_84;
    uStack_f0 = uStack_80;
    uStack_ec = uStack_7c;
    uStack_b8 = 6;
    pbStack_b0 = pbStack_40;
    uStack_a8 = 6;
    uStack_138 = _DAT_14306af70;
    uStack_130 = _UNK_14306af78;
    uStack_128 = _DAT_14306af80;
    uStack_124 = _UNK_14306af84;
    uStack_120 = _UNK_14306af88;
    uStack_11c = _UNK_14306af8c;
    puStack_110 = puVar4;
    pdb_140c23f60(&uStack_138);
    pub_142e32760(&uStack_1d8,&uStack_138,0xa0);
    lVar1 = *(longlong *)*param_1;
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_32 = 1;
    pdb_140c244f0(lVar1 + 0x10,*param_2,&uStack_1d8);
    uStack_32 = 0;
    pdb_14161ae80(param_3,&uStack_1d8,&UNK_14306ad48);
    return;
  }
  pdb_142dc7e2a(1,6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

