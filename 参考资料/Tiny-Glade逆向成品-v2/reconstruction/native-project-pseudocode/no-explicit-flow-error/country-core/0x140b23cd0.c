// VA 0x140b23cd0, PDB extent 528 bytes
// country_core::systems::render_loop::compute_passes::grass2::load_grass2_exemplar_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::load_grass2_exemplar_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 528 */

undefined8 * pdb_140b23cd0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  longlong lStack_48;
  byte *pbStack_40;
  ulonglong uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar7 = *(longlong *)(param_2 + 0x68);
  uStack_e0 = lVar7 + *(longlong *)(param_2 + 0x70) * 0x48;
  uStack_e8 = (undefined4)lVar7;
  uStack_e4 = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_c0 = 0;
  uStack_f0 = (undefined4)param_3;
  uStack_ec = (undefined4)((ulonglong)param_3 >> 0x20);
  pdb_1415f5f00(&lStack_48,&uStack_f0);
  if (uStack_38 != 0) {
    if (pbStack_40 + uStack_38 * 0x2c + -0x2c != (byte *)0x0) {
      uStack_78 = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -0x2c);
      uStack_74 = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -0x28);
      uStack_70 = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -0x24);
      uStack_6c = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -0x20);
      uStack_68 = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -0x1c);
      uStack_64 = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -0x18);
      uStack_60 = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -0x14);
      uStack_5c = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -0x10);
      uStack_58 = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -0xc);
      uStack_54 = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -8);
      uStack_50 = *(undefined4 *)(pbStack_40 + uStack_38 * 0x2c + -4);
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(0x9a0,4);
      if (pbVar6 != (byte *)0x0) {
        lVar7 = 0;
        uVar8 = 0;
        do {
          puVar9 = &uStack_128;
          if (uVar8 < uStack_38) {
            uVar2 = *(undefined8 *)(pbStack_40 + lVar7);
            uVar3 = *(undefined8 *)(pbStack_40 + lVar7 + 8);
            uVar4 = *(undefined8 *)(pbStack_40 + lVar7 + 0x10);
            uVar5 = *(undefined8 *)(pbStack_40 + lVar7 + 0x10 + 8);
            uStack_cc = (undefined4)((ulonglong)*(undefined8 *)(pbStack_40 + lVar7 + 0x1c) >> 0x20);
            uStack_c8 = *(undefined8 *)(pbStack_40 + lVar7 + 0x1c + 8);
            uStack_e0._4_4_ = (undefined4)uVar4;
            uStack_d8 = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_d4 = (undefined4)uVar5;
            uStack_d0 = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_ec = (undefined4)uVar2;
            uStack_e8 = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_e4 = (undefined4)uVar3;
            uStack_e0._0_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar9 = (undefined8 *)&uStack_ec;
          }
          uVar8 = uVar8 + 1;
          uStack_108 = uStack_58;
          uStack_104 = CONCAT44(uStack_50,uStack_54);
          uStack_118 = CONCAT44(uStack_64,uStack_68);
          uStack_110 = uStack_60;
          uStack_10c = uStack_5c;
          uStack_128 = CONCAT44(uStack_74,uStack_78);
          uStack_120 = CONCAT44(uStack_6c,uStack_70);
          uStack_a8 = *puVar9;
          uStack_a0 = puVar9[1];
          uStack_98 = puVar9[2];
          uVar2 = puVar9[3];
          uStack_84 = *(undefined8 *)((longlong)puVar9 + 0x24);
          uStack_88 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar9 + 0x1c) >> 0x20);
          uStack_90 = (undefined4)uVar2;
          uStack_8c = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(ulonglong *)(pbVar6 + lVar7 + 0x1c) = CONCAT44(uStack_88,uStack_8c);
          *(undefined8 *)(pbVar6 + lVar7 + 0x1c + 8) = uStack_84;
          *(undefined8 *)(pbVar6 + lVar7 + 0x10) = uStack_98;
          *(undefined8 *)(pbVar6 + lVar7 + 0x10 + 8) = uVar2;
          *(undefined8 *)(pbVar6 + lVar7) = uStack_a8;
          *(undefined8 *)(pbVar6 + lVar7 + 8) = uStack_a0;
          lVar7 = lVar7 + 0x2c;
        } while (uVar8 != 0x38);
        *param_1 = 0x38;
        param_1[1] = pbVar6;
        param_1[2] = 0x38;
        if (lStack_48 != 0) {
          pub_1406abac0(pbStack_40,lStack_48 * 0x2c,4);
        }
        return param_1;
      }
      pbStack_30 = pbStack_40;
      pdb_142dc7e2a(4,0x9a0);
      goto LAB_140b23e94;
    }
  }
  pbStack_30 = pbStack_40;
  pdb_142dc8110(&UNK_143056107,0x21,&UNK_143056128);
LAB_140b23e94:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

