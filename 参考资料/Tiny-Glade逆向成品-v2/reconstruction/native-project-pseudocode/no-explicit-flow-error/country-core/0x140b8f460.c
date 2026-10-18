// VA 0x140b8f460, PDB extent 494 bytes
// country_core::render::load_texture::create_game_texture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/load_texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::load_texture::create_game_texture
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/load_texture.rs
   Extent: 494 */

undefined8
pdb_140b8f460(undefined8 param_1,ulonglong *param_2,ulonglong param_3,ushort *param_4,
             undefined1 param_5,undefined1 param_6,ushort param_7,undefined2 param_8,
             undefined8 param_9,undefined8 param_10)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  int iStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
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
  ulonglong *puStack_b0;
  ulonglong uStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_4c [20];
  
  puStack_b0 = param_2;
  uStack_a8 = param_3;
  if (0xff < param_7) {
    pdb_142deafa0();
    return 1;
  }
  uStack_104 = *(int *)(param_4 + 2) << 0x10 | (uint)*param_4;
  iStack_108 = 0;
  uStack_100 = CONCAT22(1,param_4[4]);
  uStack_fc = CONCAT13(1,CONCAT12(param_6,CONCAT11((char)param_7,8)));
  uStack_f8 = CONCAT31(uStack_f8._1_3_,param_5);
  pdb_140e1d540(auStack_4c,&iStack_108,param_8);
  cVar6 = '\x01';
  if (param_3 < 5) goto LAB_140b8f58b;
  if (*(char *)((longlong)param_2 + 4) == '/' && (int)*param_2 == 0x756e656d) {
    cVar6 = '\x02';
    goto LAB_140b8f58b;
  }
  if (param_3 < 10) goto LAB_140b8f58b;
  uVar5 = 0x6e65775f676c6164;
  uVar2 = *param_2;
  uVar2 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
          (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
          (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  if (uVar2 == 0x6e65775f676c6164) {
    uVar1 = (ushort)param_2[1] << 8 | (ushort)param_2[1] >> 8;
    uVar2 = (ulonglong)uVar1;
    iVar4 = 0;
    if (uVar1 != 0x652f) {
      uVar5 = 0x652f;
      goto LAB_140b8f56e;
    }
  }
  else {
LAB_140b8f56e:
    iVar4 = (uint)(uVar2 <= uVar5) * 2 + -1;
  }
  cVar6 = (iVar4 == 0) + '\x01';
LAB_140b8f58b:
  lVar3 = pdb_140e940b0(param_2,param_3);
  pdb_1415d5630(&iStack_a0,param_1,lVar3,*(undefined8 *)(lVar3 + -8),auStack_4c,cVar6,param_9,
                param_10);
  if (iStack_a0 != 0xb) {
    uStack_c8 = uStack_60;
    uStack_c0 = uStack_58;
    uStack_d8 = uStack_70;
    uStack_d4 = uStack_6c;
    uStack_d0 = uStack_68;
    uStack_cc = uStack_64;
    uStack_e8 = uStack_80;
    uStack_e4 = uStack_7c;
    uStack_e0 = uStack_78;
    uStack_dc = uStack_74;
    uStack_f8 = uStack_90;
    uStack_f4 = uStack_8c;
    uStack_f0 = uStack_88;
    uStack_ec = uStack_84;
    iStack_108 = iStack_a0;
    uStack_104 = uStack_9c;
    uStack_100 = uStack_98;
    uStack_fc = uStack_94;
    pdb_142d90120(&puStack_b0,&iStack_108);
    return 1;
  }
  return 0;
}

