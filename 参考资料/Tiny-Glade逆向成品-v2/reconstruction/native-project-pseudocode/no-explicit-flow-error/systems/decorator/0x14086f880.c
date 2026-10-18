// VA 0x14086f880, PDB extent 857 bytes
// system_decorator::ui_systems::ui_change_chimney_height::show_signifiers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_change_chimney_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_change_chimney_height::show_signifiers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_change_chimney_height.rs
   Extent: 857 */

void pdb_14086f880(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  float fVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined8 *puStack_f4;
  undefined4 uStack_ec;
  undefined8 *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  ulonglong *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte *pbStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  fVar1 = *(float *)(param_1 + 0x14);
  pdb_140df4540(&puStack_f4,param_1 + 8,_DAT_142e37988 + fVar1);
  pdb_140de88f0(&puStack_a8,*(uint *)(param_1 + 0x1c) ^ _DAT_142e37820,
                *(undefined4 *)(param_1 + 0x18));
  uVar4 = uStack_a0;
  puVar3 = puStack_a8;
  puStack_a8 = (ulonglong *)&puStack_e8;
  uStack_a0 = pdb_140090b90;
  uStack_90 = pdb_140f33d80;
  puStack_e8 = (undefined8 *)(param_3 & 0xffffffff);
  uStack_98 = &puStack_f4;
  pdb_140f60760(&uStack_c0,&UNK_14300e050,&puStack_a8);
  uVar2 = uStack_b0;
  pbVar6 = pbStack_b8;
  uStack_a0._0_4_ = uStack_ec;
  puStack_a8 = puStack_f4;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x30,0x10);
  pbStack_78 = pbVar6;
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x30);
  }
  pbVar5[0] = 1;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pbVar5[4] = 0;
  pbVar5[5] = 0;
  pbVar5[6] = 0;
  pbVar5[7] = 0;
  pbVar5[8] = 1;
  pbVar5[9] = 0;
  pbVar5[10] = 0;
  pbVar5[0xb] = 0;
  pbVar5[0xc] = 0;
  pbVar5[0xd] = 0;
  pbVar5[0xe] = 0;
  pbVar5[0xf] = 0;
  *(ulonglong **)(pbVar5 + 0x10) = puVar3;
  *(undefined8 *)(pbVar5 + 0x18) = uVar4;
  *(ulonglong **)(pbVar5 + 0x20) = puStack_a8;
  *(undefined4 *)(pbVar5 + 0x28) = (undefined4)uStack_a0;
  pdb_1409baea0(&puStack_a8,pbVar6,uVar2,pbVar5,&UNK_14300e070);
  uStack_c8 = uStack_88;
  uStack_d8 = (undefined4)uStack_98;
  uStack_d4 = uStack_98._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  puStack_e8 = puStack_a8;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  pdb_140b133a0(param_2,&puStack_e8);
  if (uStack_c0 != 0) {
    pub_1406abac0(pbStack_78,uStack_c0,1);
  }
  pdb_140df4540(&puStack_100,param_1 + 8,fVar1 + _DAT_142e36f38);
  uStack_a0 = pdb_140090b90;
  uStack_90 = pdb_140f33d80;
  puStack_e8 = (undefined8 *)(param_3 & 0xffffffff);
  puStack_a8 = (ulonglong *)&puStack_e8;
  uStack_98 = &puStack_100;
  pdb_140f60760(&uStack_c0,&UNK_14300e0a0,&puStack_a8);
  uStack_a0._0_4_ = uStack_f8;
  puStack_a8 = puStack_100;
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x20,8);
  pbStack_78 = pbStack_b8;
  if (pbVar6 != (byte *)0x0) {
    pbVar6[0] = 1;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6[4] = 0;
    pbVar6[5] = 0;
    pbVar6[6] = 0;
    pbVar6[7] = 0;
    pbVar6[8] = 1;
    pbVar6[9] = 0;
    pbVar6[10] = 0;
    pbVar6[0xb] = 0;
    pbVar6[0xc] = 0;
    pbVar6[0xd] = 0;
    pbVar6[0xe] = 0;
    pbVar6[0xf] = 0;
    *(ulonglong **)(pbVar6 + 0x10) = puStack_a8;
    *(undefined4 *)(pbVar6 + 0x18) = (undefined4)uStack_a0;
    pdb_1409baea0(&puStack_a8,pbStack_b8,uStack_b0,pbVar6,&UNK_14300e0b8);
    uStack_c8 = uStack_88;
    uStack_d8 = (undefined4)uStack_98;
    uStack_d4 = uStack_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    puStack_e8 = puStack_a8;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    pdb_140b133a0(param_2,&puStack_e8);
    if (uStack_c0 != 0) {
      pub_1406abac0(pbStack_78,uStack_c0,1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x20);
}

