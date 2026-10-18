// VA 0x140a3ab00, PDB extent 1282 bytes
// country_core::game_profile::write_profile_via_tmp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_profile::write_profile_via_tmp
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
   Extent: 1282 */

undefined8 pdb_140a3ab00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte *pbStack_38;
  ulonglong uStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar1 = pdb_140dc7520();
  uStack_150 = 6;
  puStack_170 = &UNK_1430309c8;
  uStack_168 = 4;
  uStack_160 = 1;
  puStack_158 = (undefined *)0x0;
  uStack_148 = uStack_148 & 0xffffffffffff0000;
  uStack_178 = (ulonglong)uStack_178._4_4_ << 0x20;
  pdb_141708940(&uStack_a0,uVar1,param_2,&UNK_1430309c8,4,1,0,6,&uStack_178);
  uStack_58 = CONCAT44(uStack_9c,uStack_a0);
  if ((char)uStack_88 == '\x02') {
    uVar1 = pdb_142deaf00();
  }
  else {
    uStack_50 = uStack_98;
    uStack_4c = uStack_94;
    uStack_48 = uStack_90;
    uStack_44 = uStack_8c;
    uStack_3c = uStack_84;
    uStack_40 = uStack_88;
    uStack_e8 = 0xffffffffffffffff;
    uStack_178 = 0x8000000000000000;
    puStack_170 = &UNK_14303c3dc;
    uStack_168 = 2;
    uStack_160 = 0x8000000000000000;
    puStack_158 = &UNK_14303c3de;
    uStack_150 = 4;
    uStack_148 = 0x8000000000000000;
    puStack_140 = &UNK_14303c3e2;
    uStack_138 = 1;
    uStack_d8 = 0x100000000;
    uStack_e0 = 0;
    uStack_130 = 0x8000000000000000;
    uStack_b8 = 0;
    uStack_c8 = 1;
    uStack_c0 = 0x80;
    uStack_21 = 1;
    pdb_141741e80(&uStack_a0,&uStack_c8,param_1,&uStack_178);
    if ((char)uStack_a0 != '2') {
      uStack_138 = uStack_60;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303be58,0x2b,&uStack_178,&UNK_14303bec8,&UNK_14303b8d0);
    }
    uStack_30 = CONCAT44(uStack_94,uStack_98);
    pbStack_38 = (byte *)CONCAT44(uStack_8c,uStack_90);
    lVar2 = pdb_1409dd580(&uStack_58,pbStack_38,CONCAT44(uStack_84,uStack_88));
    if (lVar2 == 0) {
      if (uStack_30 != 0) {
        pub_1406abac0(pbStack_38,uStack_30,1);
      }
      uStack_b8 = CONCAT44(uStack_44,uStack_48);
      uStack_b0 = uStack_40;
      uStack_ac = uStack_3c;
      uStack_c0 = CONCAT44(uStack_4c,uStack_50);
      uStack_22 = 1;
      uVar1 = pdb_140dc7520();
      uStack_22 = 1;
      pdb_140f3e9e0(&uStack_178,uVar1,uStack_30,&UNK_14303b8c0,0xb);
      uStack_22 = 0;
      pdb_140117330(&uStack_a0,&uStack_c8,&uStack_178);
      if ((char)uStack_80 == '\x02') {
        CloseHandle();
        uVar1 = 0;
      }
      else {
        puStack_158 = (undefined *)
                      CONCAT71((int7)(CONCAT44(uStack_7c,uStack_80) >> 8),(char)uStack_80);
        uStack_21 = 0;
        uVar1 = pdb_142deae70(&uStack_178);
      }
    }
    else {
      uVar1 = pdb_142deaf00(lVar2);
      if (uStack_30 != 0) {
        pub_1406abac0(pbStack_38,uStack_30,1);
      }
      pdb_140cb07d0(&uStack_50);
      if (CONCAT44(uStack_44,uStack_48) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_4c,uStack_50),CONCAT44(uStack_44,uStack_48),1);
      }
      CloseHandle(uStack_58);
    }
  }
  return uVar1;
}

