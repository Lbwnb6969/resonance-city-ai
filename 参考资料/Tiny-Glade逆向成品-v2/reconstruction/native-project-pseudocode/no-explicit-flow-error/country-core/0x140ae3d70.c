// VA 0x140ae3d70, PDB extent 627 bytes
// country_core::resources::history::History::nuke_future_states
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::nuke_future_states
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 627 */

void pdb_140ae3d70(undefined8 *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 *puStack_40;
  ulonglong *puStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar4 = *(uint *)(param_1 + 0xd);
  uVar2 = param_1[2];
  uVar7 = (int)uVar2 - 1;
  if (uVar4 != uVar7) {
    if ((int)uVar4 < 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      puStack_40 = param_1;
      puStack_38 = param_1 + 2;
      pdb_14098f1a0(param_1);
      *puStack_40 = 0;
      puStack_40[1] = 8;
      *puStack_38 = 0;
      puStack_38[1] = 0;
      puStack_40[4] = 8;
      puStack_40[5] = 0;
      puStack_40[6] = 0x8000000000000000;
      *(undefined4 *)(puStack_40 + 7) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)puStack_40 + 0x3c) = uStack_78._4_4_;
      *(undefined4 *)(puStack_40 + 8) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puStack_40 + 0x44) = uStack_70._4_4_;
      puStack_40[9] = CONCAT71(uStack_67,uStack_68);
      puStack_40[10] = uStack_60;
      puStack_40[0xb] = uStack_58;
      puStack_40[0xc] = uStack_50;
      puStack_40[0xd] = 0xffffffffffffffff;
      *(undefined4 *)(puStack_40 + 0xe) = 0;
      param_1 = puStack_40;
    }
    else {
      uVar6 = (ulonglong)uVar4 + 1;
      if (uVar6 <= uVar2) {
        puVar5 = (undefined8 *)(uVar6 * 0x28 + param_1[1]);
        param_1[2] = uVar6;
        puStack_38 = (ulonglong *)(uVar2 - uVar6);
        while (puStack_38 != (ulonglong *)0x0) {
          puVar5 = puVar5 + 5;
          puStack_38 = (ulonglong *)((longlong)puStack_38 + -1);
          puStack_40 = puVar5;
          pdb_140990a30();
        }
        uVar4 = *(uint *)(param_1 + 0xd);
        uVar2 = param_1[2];
        uVar7 = (int)uVar2 - 1;
      }
      uStack_48 = uVar7;
      uStack_44 = uVar4;
      if (uVar4 != uVar7) {
        pdb_142dc6671(0,&uStack_44,&uStack_48,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = param_1[0xb];
      if (uVar2 < (ulonglong)param_1[0xb]) {
        uVar6 = uVar2;
      }
      param_1[0xb] = uVar6;
      pdb_1415e0b70(param_1 + 3,param_1 + 0xd);
    }
  }
  uStack_78 = 0;
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = 0;
  uVar3 = pdb_1416f96d0(&UNK_14304fab0,&uStack_78);
  param_1[0xc] = uVar3;
  return;
}

