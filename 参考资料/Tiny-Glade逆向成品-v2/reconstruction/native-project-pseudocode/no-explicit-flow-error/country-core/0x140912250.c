// VA 0x140912250, PDB extent 570 bytes
// country_core::systems::prefab::create_prefab_gpu_instances
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::prefab::create_prefab_gpu_instances
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
   Extent: 570 */

void pdb_140912250(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined8 *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *plStack_128;
  code *pcStack_120;
  longlong *plStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 **ppuStack_b0;
  longlong lStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_a0 = param_3;
  uStack_98 = param_4;
  puStack_88 = param_1;
  puVar6 = (undefined4 *)pdb_140a56a40(param_2,param_3,param_4);
  uStack_80 = 0;
  uStack_78 = 4;
  uStack_70 = 0;
  if (4 < *_DAT_143ca8e90) {
    plStack_128 = &lStack_90;
    pcStack_120 = pdb_140f72a40;
    plStack_118 = &lStack_a0;
    pcStack_110 = pdb_1418c1610;
    uStack_108 = 0;
    uStack_100 = &UNK_14301f3d3;
    uStack_f8 = 0x1d;
    uStack_f0 = 0;
    puStack_e8 = &UNK_14301f318;
    uStack_e0 = 0x29;
    uStack_d8 = 5;
    puStack_d0 = &UNK_14301f3d3;
    uStack_c8 = 0x1d;
    uStack_c0 = 0xef00000001;
    puStack_b8 = &UNK_14301f468;
    ppuStack_b0 = &plStack_128;
    lStack_90 = param_3;
    pdb_140f332f0(&uStack_61,&uStack_108);
  }
  puVar1 = puVar6 + param_3 * 2;
  uVar2 = *(undefined4 *)(param_5 + 0xc);
  uVar3 = *(undefined4 *)((longlong)param_6 + 0x1c);
  uVar4 = *param_6;
  puVar5 = (undefined4 *)param_6[2];
  for (; puVar6 != puVar1; puVar6 = puVar6 + 2) {
    pdb_140947fa0(&uStack_138,param_5,uVar2,*puVar6);
    *puVar5 = uVar3;
    uStack_108 = CONCAT44(uStack_134,uStack_138);
    uStack_100 = (undefined *)CONCAT44(uStack_12c,uStack_130);
    pdb_140957070(uVar4,*(undefined1 *)(puVar6 + 1),&uStack_108,1,param_5,1,&uStack_80);
  }
  puStack_88[2] = uStack_70;
  *puStack_88 = uStack_80;
  puStack_88[1] = uStack_78;
  return;
}

