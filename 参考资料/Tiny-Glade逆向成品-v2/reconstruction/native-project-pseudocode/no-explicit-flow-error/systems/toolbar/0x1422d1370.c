// VA 0x1422d1370, PDB extent 515 bytes
// toolbar::menu::credits::spawn_third_party_license_http_server
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::credits::spawn_third_party_license_http_server
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
   Extent: 515 */

undefined8 * pdb_1422d1370(undefined8 *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  short *psVar4;
  undefined8 auStack_b0 [3];
  short sStack_98;
  undefined4 uStack_96;
  undefined2 uStack_92;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_142976dc0(&uStack_58,&UNK_1434d20e0,0x19,&UNK_1434d20f9,0xe);
  if ((short)uStack_58 == 2) {
    uVar3 = pdb_142e18d90(uStack_50,uStack_48);
    param_1[1] = uVar3;
    *param_1 = 0x8000000000000000;
  }
  else {
    uStack_92 = uStack_58._6_2_;
    uStack_96 = uStack_58._2_4_;
    uStack_88 = uStack_48;
    uStack_80 = uStack_40;
    uStack_78 = uStack_38;
    uStack_70 = uStack_30;
    uStack_68 = uStack_28;
    uStack_64 = uStack_24;
    uStack_60 = uStack_20;
    uStack_5c = uStack_1c;
    sStack_98 = (short)uStack_58;
    uStack_90 = uStack_50;
    auStack_b0[0] = 0x8000000000000000;
    psVar4 = &sStack_98;
    uVar3 = 0;
    pdb_142977020(&uStack_58,auStack_b0,0);
    if (uStack_58 == 0) {
      uStack_58 = uStack_50;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14360676e,0x16,&uStack_58,&UNK_143606810,&UNK_1436067f8,uVar3,psVar4);
    }
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(0xe,1);
    if (pbVar2 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xe);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pbVar2[6] = 0x30;
    pbVar2[7] = 0x2e;
    pbVar2[8] = 0x31;
    pbVar2[9] = 0x3a;
    pbVar2[10] = 0x38;
    pbVar2[0xb] = 0x31;
    pbVar2[0xc] = 0x32;
    pbVar2[0xd] = 0x33;
    pbVar2[0] = 0x31;
    pbVar2[1] = 0x32;
    pbVar2[2] = 0x37;
    pbVar2[3] = 0x2e;
    pbVar2[4] = 0x30;
    pbVar2[5] = 0x2e;
    pbVar2[6] = 0x30;
    pbVar2[7] = 0x2e;
    param_1[5] = uStack_48;
    param_1[3] = uStack_58;
    param_1[4] = uStack_50;
    *param_1 = 0xe;
    param_1[1] = pbVar2;
    param_1[2] = 0xe;
  }
  return param_1;
}

