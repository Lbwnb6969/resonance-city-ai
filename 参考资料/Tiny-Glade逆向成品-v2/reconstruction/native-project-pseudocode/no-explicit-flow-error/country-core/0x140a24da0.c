// VA 0x140a24da0, PDB extent 439 bytes
// country_core::systems::render_loop::session_selection::thumbnails_startup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/session_selection/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::session_selection::thumbnails_startup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/session_selection/mod.rs
   Extent: 439 */

void pdb_140a24da0(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lStack_f8;
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
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_84 = 0x200020000000000;
  uStack_7c = 0x12b010800010001;
  uStack_74 = 2;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2 = (longlong *)*param_2;
  puStack_68 = &uStack_84;
  uStack_60 = 0;
  uStack_58 = 6;
  puStack_50 = &uStack_70;
  uVar6 = 0;
  uVar7 = 6;
  uStack_70 = param_1;
  do {
    while( true ) {
      pdb_1409b4b40(&lStack_f8,&puStack_50,uVar6);
      uVar6 = uVar6 + 1;
      if (lStack_f8 != -0x7fffffffffffffff) break;
      if (uVar7 == uVar6) {
        return;
      }
    }
    uStack_98 = uStack_d0;
    uStack_94 = uStack_cc;
    uStack_90 = uStack_c8;
    uStack_8c = uStack_c4;
    uStack_a8 = uStack_e0;
    uStack_a4 = uStack_dc;
    uStack_a0 = uStack_d8;
    uStack_9c = uStack_d4;
    uStack_b8 = uStack_f0;
    uStack_b4 = uStack_ec;
    uStack_b0 = uStack_e8;
    uStack_ac = uStack_e4;
    uStack_c0 = lStack_f8;
    lVar3 = param_2[2];
    uStack_60 = uVar6;
    if (lVar3 == *param_2) {
      pdb_142d7f1b0(param_2,lVar3,1,8,0x38);
    }
    lVar4 = param_2[1];
    lVar5 = lVar3 * 0x38;
    *(ulonglong *)(lVar4 + 0x30 + lVar5) = CONCAT44(uStack_8c,uStack_90);
    puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar5);
    *puVar2 = CONCAT44(uStack_9c,uStack_a0);
    puVar2[1] = CONCAT44(uStack_94,uStack_98);
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    *puVar2 = CONCAT44(uStack_ac,uStack_b0);
    puVar2[1] = CONCAT44(uStack_a4,uStack_a8);
    puVar1 = (undefined4 *)(lVar4 + lVar5);
    *puVar1 = (undefined4)uStack_c0;
    puVar1[1] = uStack_c0._4_4_;
    puVar1[2] = uStack_b8;
    puVar1[3] = uStack_b4;
    param_2[2] = lVar3 + 1;
    puStack_50 = &uStack_70;
    uVar6 = uStack_60;
    uVar7 = uStack_58;
  } while (uStack_60 < uStack_58);
  return;
}

