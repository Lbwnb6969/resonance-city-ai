// VA 0x140c49e60, PDB extent 1012 bytes
// country_core::systems::ui_wall_transform_gizmos::show_corner_arrow
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui_wall_transform_gizmos::show_corner_arrow
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 1012 */

void pdb_140c49e60(byte *param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbStack_b0;
  undefined *puStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  undefined *puStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar2 = *param_5;
  uVar3 = param_5[1];
  if ((longlong)param_3 < 0) {
    pdb_14007ee60();
    pbStack_78 = pub_1406abab0(0x50,0x10);
    if (pbStack_78 != (byte *)0x0) {
      pbStack_78[0] = 1;
      pbStack_78[1] = 0;
      pbStack_78[2] = 0;
      pbStack_78[3] = 0;
      pbStack_78[4] = 0;
      pbStack_78[5] = 0;
      pbStack_78[6] = 0;
      pbStack_78[7] = 0;
      pbStack_78[8] = 1;
      pbStack_78[9] = 0;
      pbStack_78[10] = 0;
      pbStack_78[0xb] = 0;
      pbStack_78[0xc] = 0;
      pbStack_78[0xd] = 0;
      pbStack_78[0xe] = 0;
      pbStack_78[0xf] = 0;
      *(undefined **)(pbStack_78 + 0x10) = &UNK_14306e1e0;
      pbStack_78[0x18] = 0xc;
      pbStack_78[0x19] = 0;
      pbStack_78[0x1a] = 0;
      pbStack_78[0x1b] = 0;
      pbStack_78[0x1c] = 0;
      pbStack_78[0x1d] = 0;
      pbStack_78[0x1e] = 0;
      pbStack_78[0x1f] = 0;
      *(undefined8 *)(pbStack_78 + 0x20) = uVar2;
      *(undefined8 *)(pbStack_78 + 0x28) = uVar3;
      *(undefined4 *)(pbStack_78 + 0x30) = param_6;
      *(undefined8 *)(pbStack_78 + 0x34) = *param_4;
      *(undefined4 *)(pbStack_78 + 0x3c) = *(undefined4 *)(param_4 + 1);
      pbStack_78[0x40] = 0;
      puStack_a8 = &UNK_14306e200;
      uVar6 = 0;
      pbStack_b0 = pbStack_78;
      goto LAB_140c49f18;
    }
  }
  else {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0x50,0x10);
    if (param_3 == 0) {
      if (pbVar4 != (byte *)0x0) {
        pbVar4[0] = 1;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        pbVar4[8] = 1;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        *(undefined **)(pbVar4 + 0x10) = &UNK_14306e1e0;
        pbVar4[0x18] = 0xc;
        pbVar4[0x19] = 0;
        pbVar4[0x1a] = 0;
        pbVar4[0x1b] = 0;
        pbVar4[0x1c] = 0;
        pbVar4[0x1d] = 0;
        pbVar4[0x1e] = 0;
        pbVar4[0x1f] = 0;
        *(undefined8 *)(pbVar4 + 0x20) = uVar2;
        *(undefined8 *)(pbVar4 + 0x28) = uVar3;
        *(undefined4 *)(pbVar4 + 0x30) = param_6;
        *(undefined8 *)(pbVar4 + 0x34) = *param_4;
        *(undefined4 *)(pbVar4 + 0x3c) = *(undefined4 *)(param_4 + 1);
        pbVar4[0x40] = 0;
        puStack_a8 = (undefined *)((ulonglong)puStack_a8 & 0xffffffffffffff00);
        uStack_a0 = 0;
        pbStack_98 = (byte *)0x1;
        uStack_90 = 0;
        puStack_80 = &UNK_14306e200;
        pbStack_b0 = param_1;
        pbStack_88 = pbVar4;
        pdb_141a88350(param_7,&pbStack_b0);
        pdb_14007ee60();
        pbVar4 = pub_1406abab0(0x50,0x10);
        if (pbVar4 != (byte *)0x0) {
          pbVar4[0] = 1;
          pbVar4[1] = 0;
          pbVar4[2] = 0;
          pbVar4[3] = 0;
          pbVar4[4] = 0;
          pbVar4[5] = 0;
          pbVar4[6] = 0;
          pbVar4[7] = 0;
          pbVar4[8] = 1;
          pbVar4[9] = 0;
          pbVar4[10] = 0;
          pbVar4[0xb] = 0;
          pbVar4[0xc] = 0;
          pbVar4[0xd] = 0;
          pbVar4[0xe] = 0;
          pbVar4[0xf] = 0;
          *(undefined **)(pbVar4 + 0x10) = &UNK_14306e1ec;
          pbVar4[0x18] = 0x14;
          pbVar4[0x19] = 0;
          pbVar4[0x1a] = 0;
          pbVar4[0x1b] = 0;
          pbVar4[0x1c] = 0;
          pbVar4[0x1d] = 0;
          pbVar4[0x1e] = 0;
          pbVar4[0x1f] = 0;
          *(undefined8 *)(pbVar4 + 0x20) = uVar2;
          *(undefined8 *)(pbVar4 + 0x28) = uVar3;
          *(undefined4 *)(pbVar4 + 0x30) = param_6;
          *(undefined8 *)(pbVar4 + 0x34) = *param_4;
          *(undefined4 *)(pbVar4 + 0x3c) = *(undefined4 *)(param_4 + 1);
          pbVar4[0x40] = 1;
          pbVar5 = (byte *)0x1;
          param_3 = 0;
LAB_140c4a18e:
          puStack_a8 = (undefined *)((ulonglong)puStack_a8 & 0xffffffffffffff00);
          puStack_80 = &UNK_14306e200;
          pbStack_b0 = param_1;
          uStack_a0 = param_3;
          pbStack_98 = pbVar5;
          uStack_90 = param_3;
          pbStack_88 = pbVar4;
          pdb_141a88350(param_7,&pbStack_b0);
          return;
        }
      }
    }
    else if (pbVar4 != (byte *)0x0) {
      pbVar4[0] = 1;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pbVar4[4] = 0;
      pbVar4[5] = 0;
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      pbVar4[8] = 1;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      *(undefined **)(pbVar4 + 0x10) = &UNK_14306e1e0;
      pbVar4[0x18] = 0xc;
      pbVar4[0x19] = 0;
      pbVar4[0x1a] = 0;
      pbVar4[0x1b] = 0;
      pbVar4[0x1c] = 0;
      pbVar4[0x1d] = 0;
      pbVar4[0x1e] = 0;
      pbVar4[0x1f] = 0;
      *(undefined8 *)(pbVar4 + 0x20) = uVar2;
      *(undefined8 *)(pbVar4 + 0x28) = uVar3;
      *(undefined4 *)(pbVar4 + 0x30) = param_6;
      *(undefined8 *)(pbVar4 + 0x34) = *param_4;
      *(undefined4 *)(pbVar4 + 0x3c) = *(undefined4 *)(param_4 + 1);
      pbVar4[0x40] = 0;
      puStack_a8 = &UNK_14306e200;
      pbStack_b0 = pbVar4;
      pdb_14007ee60();
      uVar6 = 1;
      pbVar5 = pub_1406abab0(param_3,1);
      pbStack_78 = pbVar4;
      if (pbVar5 != (byte *)0x0) {
        pub_142e32760(pbVar5,param_2,param_3);
        puStack_a8 = (undefined *)((ulonglong)puStack_a8 & 0xffffffffffffff00);
        puStack_80 = &UNK_14306e200;
        pbStack_b0 = param_1;
        uStack_a0 = param_3;
        pbStack_98 = pbVar5;
        uStack_90 = param_3;
        pbStack_88 = pbVar4;
        pdb_141a88350(param_7,&pbStack_b0);
        pdb_14007ee60();
        pbStack_78 = pub_1406abab0(0x50,0x10);
        if (pbStack_78 == (byte *)0x0) goto LAB_140c4a1d9;
        pbStack_78[0] = 1;
        pbStack_78[1] = 0;
        pbStack_78[2] = 0;
        pbStack_78[3] = 0;
        pbStack_78[4] = 0;
        pbStack_78[5] = 0;
        pbStack_78[6] = 0;
        pbStack_78[7] = 0;
        pbStack_78[8] = 1;
        pbStack_78[9] = 0;
        pbStack_78[10] = 0;
        pbStack_78[0xb] = 0;
        pbStack_78[0xc] = 0;
        pbStack_78[0xd] = 0;
        pbStack_78[0xe] = 0;
        pbStack_78[0xf] = 0;
        *(undefined **)(pbStack_78 + 0x10) = &UNK_14306e1ec;
        pbStack_78[0x18] = 0x14;
        pbStack_78[0x19] = 0;
        pbStack_78[0x1a] = 0;
        pbStack_78[0x1b] = 0;
        pbStack_78[0x1c] = 0;
        pbStack_78[0x1d] = 0;
        pbStack_78[0x1e] = 0;
        pbStack_78[0x1f] = 0;
        *(undefined8 *)(pbStack_78 + 0x20) = uVar2;
        *(undefined8 *)(pbStack_78 + 0x28) = uVar3;
        *(undefined4 *)(pbStack_78 + 0x30) = param_6;
        *(undefined8 *)(pbStack_78 + 0x34) = *param_4;
        *(undefined4 *)(pbStack_78 + 0x3c) = *(undefined4 *)(param_4 + 1);
        pbStack_78[0x40] = 1;
        puStack_a8 = &UNK_14306e200;
        pbStack_b0 = pbStack_78;
        pdb_14007ee60();
        pbVar5 = pub_1406abab0(param_3,1);
        if (pbVar5 != (byte *)0x0) {
          pub_142e32760(pbVar5,param_2,param_3);
          pbVar4 = pbStack_78;
          goto LAB_140c4a18e;
        }
      }
LAB_140c49f18:
      pdb_142dc7e2a(uVar6,param_3);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
LAB_140c4a1d9:
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x50);
}

