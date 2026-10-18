// VA 0x1409f94a0, PDB extent 746 bytes
// country_core::systems::collision::world::Rapier::raycast
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::Rapier::raycast
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 746 */

void pdb_1409f94a0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,uint param_7)

{
  undefined8 uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong lStack_158;
  longlong lStack_150;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_84;
  
  uStack_130 = param_5;
  uStack_118 = CONCAT44(uStack_118._4_4_,4);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar1 = param_3[2];
  lVar11 = 0x20;
  uVar10 = 0;
  uVar12 = uStack_118;
  uStack_138 = param_4;
  do {
    uVar6 = uVar10;
    do {
      if (lVar11 == 0x3cb0) {
        uStack_120 = uStack_160;
        uStack_11c = uStack_15c;
        lStack_128 = lStack_150;
        if ((int)uVar12 == 4) {
          *(undefined4 *)(param_1 + 0x34) = 2;
        }
        else {
          uStack_118 = uVar12;
          uStack_110 = param_6;
          puVar7 = (ulonglong *)pdb_140cd4bd0(lStack_158);
          if (puVar7 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143033ce8);
          }
          uVar8 = *puVar7 & 0xffffffff;
          if (((*(ulonglong *)(param_2 + 0x10) <= uVar8) ||
              (lVar11 = *(longlong *)(param_2 + 8), lVar11 == 0)) ||
             (*(uint *)(lVar11 + 0x20 + uVar8 * 0x28) != ((uint)(*puVar7 >> 0x20) | 1))) {
            pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033d00);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pdb_1409f8a10(param_1,param_3,&uStack_118,(longlong)puVar7 + 0x34,lVar11 + uVar8 * 0x28);
        }
        return;
      }
      lVar11 = lVar11 + 0x390;
      uVar10 = uVar6 + 1;
      uVar2 = uVar6 & 0x1f;
      uVar6 = uVar10;
    } while ((param_7 >> uVar2 & 1) == 0);
    lVar9 = param_2 + lVar11 + -0x390;
    puStack_a8 = &UNK_143034028;
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_84 = 0;
    lStack_e0 = param_2;
    lStack_d8 = lVar9;
    puStack_d0 = &uStack_138;
    uStack_c8 = uVar4;
    uStack_c0 = uVar5;
    uStack_b8 = uVar1;
    plStack_b0 = &lStack_e0;
    pdb_141a08700(&uStack_100,param_2 + -0x360 + lVar11,param_2 + 0x3d80,lVar9,&uStack_c8,param_6,1,
                  &plStack_b0);
    if (iStack_f8 != 4) {
      uStack_160 = uStack_100;
      uStack_15c = uStack_fc;
      uVar12 = CONCAT44(uStack_f4,iStack_f8);
      uStack_104 = uStack_e4;
      uStack_10c = uStack_ec;
      param_6 = uStack_f0;
      lStack_158 = lVar9;
      lStack_150 = lVar9;
    }
  } while( true );
}

