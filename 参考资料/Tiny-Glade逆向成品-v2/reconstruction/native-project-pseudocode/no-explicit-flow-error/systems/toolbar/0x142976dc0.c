// VA 0x142976dc0, PDB extent 607 bytes
// toolbar::third_party_licenses_server::SingleFileServer::http<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/third_party_licenses_server.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::third_party_licenses_server::SingleFileServer::http<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/third_party_licenses_server.rs
   Extent: 607 */

short * pdb_142976dc0(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_88 = param_5;
  uStack_90 = param_4;
  uStack_80 = param_2;
  uStack_78 = param_3;
  if (2 < *_DAT_143ca8e90) {
    uStack_70 = &uStack_80;
    pcStack_68 = pdb_1402ed400;
    puStack_60 = &uStack_90;
    pcStack_58 = pdb_1402ed400;
    lStack_f0 = 0;
    puStack_e8 = &UNK_14360669f;
    uStack_e0 = 0x24;
    uStack_d8 = 0;
    puStack_d0 = &UNK_143606665;
    uStack_c8 = 0x39;
    uStack_c0 = 3;
    puStack_b8 = &UNK_14360669f;
    uStack_b0 = 0x24;
    uStack_a8 = 0x1100000001;
    puStack_a0 = &UNK_143606648;
    puStack_98 = &uStack_70;
    pdb_140f332f0(&uStack_39,&lStack_f0);
  }
  pdb_140f59400(&lStack_148,param_4,param_5);
  uVar2 = uStack_140;
  if (lStack_148 != 0) {
    uStack_118 = uStack_138;
    uStack_110 = uStack_130;
    lStack_128 = lStack_148;
    uStack_120 = uStack_140;
    pdb_1411b2590(&lStack_108,&lStack_128);
    uVar2 = uStack_100;
    if (!SBORROW8(0,lStack_108)) {
      lStack_f0 = lStack_108;
      puStack_e8 = (undefined *)uStack_100;
      uStack_e0 = uStack_f8;
      uStack_d8 = 0x8000000000000000;
      pdb_142309620(&uStack_70,&lStack_f0);
      if ((short)uStack_70 != 2) {
        param_1[3] = uStack_70._6_2_;
        *(undefined4 *)(param_1 + 1) = uStack_70._2_4_;
        *(code **)(param_1 + 0xc) = pcStack_58;
        *(undefined8 *)(param_1 + 0x10) = uStack_50;
        *(undefined8 *)(param_1 + 0x14) = uStack_48;
        *param_1 = (short)uStack_70;
        *(code **)(param_1 + 4) = pcStack_68;
        *(undefined8 **)(param_1 + 8) = puStack_60;
        *(undefined8 *)(param_1 + 0x18) = param_2;
        *(undefined8 *)(param_1 + 0x1c) = param_3;
        return param_1;
      }
      goto LAB_142976f79;
    }
  }
  pdb_14007ee60();
  pcVar1 = (code *)pub_1406abab0(8,8);
  if (pcVar1 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(undefined8 *)pcVar1 = uVar2;
  puStack_60 = (undefined8 *)&UNK_1436066e8;
  pcStack_68 = pcVar1;
LAB_142976f79:
  *(code **)(param_1 + 4) = pcStack_68;
  *(undefined8 **)(param_1 + 8) = puStack_60;
  *param_1 = 2;
  return param_1;
}

