// VA 0x140b0a710, PDB extent 1047 bytes
// country_core::startup::background_terrain_maps::upload_r16f_texture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::background_terrain_maps::upload_r16f_texture
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
   Extent: 1047 */

void pdb_140b0a710(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  int param_5,longlong param_6,longlong param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *arg0;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uStack_148;
  byte *pbStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined1 uStack_5c;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  pdb_1415fefd0(&lStack_90,param_6,param_6 + param_7 * 0x18);
  arg0 = pbStack_88;
  uStack_58 = uStack_80;
  uVar9 = uStack_80 << 4;
  uStack_78 = uVar9;
  if (uStack_80 == 0) {
    pbStack_50 = (byte *)0x8;
  }
  else {
    pdb_14007ee60();
    pbStack_50 = pub_1406abab0(uVar9,8);
    if (pbStack_50 == (byte *)0x0) {
      pdb_142dc7e2a(8,uVar9);
      goto LAB_140b0aa4c;
    }
    if (uStack_58 == 1) {
      uVar9 = 0;
    }
    else {
      pbVar7 = arg0 + 0x28;
      pbVar8 = pbStack_50 + 0x18;
      uVar9 = 0;
      do {
        uVar5 = *(undefined8 *)(pbVar7 + -0x18);
        *(undefined8 *)(pbVar8 + -0x18) = *(undefined8 *)(pbVar7 + -0x20);
        *(undefined8 *)(pbVar8 + -0x10) = uVar5;
        uVar2 = *(undefined4 *)(pbVar7 + -4);
        uVar3 = *(undefined4 *)pbVar7;
        uVar4 = *(undefined4 *)(pbVar7 + 4);
        *(undefined4 *)(pbVar8 + -8) = *(undefined4 *)(pbVar7 + -8);
        *(undefined4 *)(pbVar8 + -4) = uVar2;
        *(undefined4 *)pbVar8 = uVar3;
        *(undefined4 *)(pbVar8 + 4) = uVar4;
        uVar9 = uVar9 + 2;
        pbVar7 = pbVar7 + 0x30;
        pbVar8 = pbVar8 + 0x20;
      } while ((uStack_58 & 0xfffffffffffffffe) != uVar9);
      if ((uStack_58 & 1) == 0) goto LAB_140b0a831;
    }
    pbVar8 = arg0 + uVar9 * 0x18 + 8;
    uVar2 = *(undefined4 *)(pbVar8 + 4);
    uVar3 = *(undefined4 *)(pbVar8 + 8);
    uVar4 = *(undefined4 *)(pbVar8 + 0xc);
    pbVar7 = pbStack_50 + uVar9 * 0x10;
    *(undefined4 *)pbVar7 = *(undefined4 *)pbVar8;
    *(undefined4 *)(pbVar7 + 4) = uVar2;
    *(undefined4 *)(pbVar7 + 8) = uVar3;
    *(undefined4 *)(pbVar7 + 0xc) = uVar4;
  }
LAB_140b0a831:
  iStack_68 = param_5 * 0x10001;
  uStack_6c = 0;
  uStack_64 = 0x10001;
  uStack_60 = 8;
  uStack_5f = (undefined1)param_7;
  uStack_5e = 0x14c;
  uStack_5c = 2;
  lVar6 = pdb_140e940b0(param_3,param_4);
  pbStack_e0 = pbStack_50;
  uStack_d8 = uStack_58;
  uStack_e8 = 2;
  pdb_1415d4a60(&uStack_148,param_1 + 0x10,lVar6,*(undefined8 *)(lVar6 + -8),&uStack_6c,1,&uStack_e8
               );
  if ((int)uStack_148 == 0xb) {
    pbStack_d0 = pbStack_140;
    uStack_e8 = 0x8000000000000000;
    pdb_14007ee60();
    pbStack_140 = pub_1406abab0(param_4,1);
    if (pbStack_140 != (byte *)0x0) {
      pub_142e32760(pbStack_140,param_3,param_4);
      pbStack_130 = pbStack_d0;
      uStack_148 = param_4;
      uStack_138 = param_4;
      uStack_e8 = param_4;
      pbStack_e0 = pbStack_140;
      uStack_d8 = param_4;
      pdb_140a2dcf0(param_2,&uStack_148);
      if ((uStack_58 != 0) &&
         (pub_1406abac0(pbStack_50,uStack_78,8), arg0 = pbStack_88, uStack_80 != 0)) {
        pbVar7 = pbStack_88 + 8;
        uVar9 = uStack_80;
        do {
          if (*(ulonglong *)(pbVar7 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar7,*(ulonglong *)(pbVar7 + -8),1);
          }
          pbVar7 = pbVar7 + 0x18;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (lStack_90 != 0) {
        pub_1406abac0(arg0,lStack_90 * 0x18,8);
      }
      return;
    }
    pdb_142dc7e2a(1,param_4);
  }
  else {
    uStack_a8 = uStack_108;
    uStack_a0 = uStack_100;
    uStack_b8 = uStack_118;
    uStack_b4 = uStack_114;
    uStack_b0 = uStack_110;
    uStack_ac = uStack_10c;
    uStack_c8 = uStack_128;
    uStack_c4 = uStack_124;
    uStack_c0 = uStack_120;
    uStack_bc = uStack_11c;
    uStack_d8 = uStack_138;
    pbStack_d0 = pbStack_130;
    uStack_e8 = uStack_148;
    pbStack_e0 = pbStack_140;
    pdb_142d8fad0(&uStack_f8,&uStack_e8);
  }
LAB_140b0aa4c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

