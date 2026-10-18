// VA 0x1408b9880, PDB extent 254 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::push_wooden_railing_piece
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::push_wooden_railing_piece
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
   Extent: 254 */

void pdb_1408b9880(ulonglong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  undefined1 auStack_70 [64];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar7 = *param_1;
  uVar8 = uVar7 + 0xa0761d6478bd642f;
  *param_1 = uVar8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar8 ^ 0xe7037ed1a0b428db;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar8;
  uVar6 = SUB168(auVar1 * auVar3,8) ^ SUB168(auVar1 * auVar3,0);
  if ((uint)((int)uVar6 * 1000) < 0x128) {
    uVar7 = uVar7 + 0x40ec3ac8f17ac85e;
    do {
      uVar8 = uVar8 + 0xa0761d6478bd642f;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar7 ^ 0xe7037ed1a0b428db;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      uVar6 = SUB168(auVar2 * auVar4,8) ^ SUB168(auVar2 * auVar4,0);
      uVar7 = uVar7 + 0xa0761d6478bd642f;
    } while ((uint)((int)uVar6 * 1000) < 0x128);
    *param_1 = uVar8;
  }
  uVar5 = pdb_1409012c0(param_2);
  pdb_140a77410(auStack_70);
  uStack_c8 = *param_4;
  uStack_c0 = param_4[1];
  uStack_b8 = *(undefined4 *)(param_4 + 2);
  uStack_b4 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_b0 = *(undefined4 *)(param_4 + 3);
  uStack_ac = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_a8 = *(undefined4 *)(param_4 + 4);
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_a0 = *(undefined4 *)(param_4 + 5);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_98 = 0;
  uStack_94 = (undefined4)((uVar6 & 0xffffffff) * 1000 >> 0x20);
  uStack_8c = 0x18;
  uStack_88 = uStack_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  uStack_7c = uStack_24;
  uStack_90 = uVar5;
  pdb_1414aa5f0(param_3,&uStack_c8);
  return;
}

