// VA 0x140ae3ff0, PDB extent 340 bytes
// country_core::resources::history::History::insert_starting_edit
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::insert_starting_edit
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 340 */

void pdb_140ae3ff0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar1 = *(uint *)(param_1 + 0xd);
  uStack_38 = (ulonglong)uVar1;
  puStack_30 = param_2;
  if (-2 < (int)uVar1) {
    *(uint *)(param_1 + 0xd) = uVar1 + 1;
    uStack_48 = param_2[4];
    uStack_68 = *param_2;
    uStack_60 = param_2[1];
    uStack_58 = *(uint *)(param_2 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_50 = *(undefined4 *)(param_2 + 3);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar10 = param_1[2];
    if (lVar10 == *param_1) {
      pdb_142d7ede0(param_1);
    }
    puVar2 = (undefined4 *)param_1[1];
    if (lVar10 != 0) {
      pub_142e32770(puVar2 + 10,puVar2,lVar10 * 0x28);
    }
    *(undefined8 *)(puVar2 + 8) = puStack_30[4];
    uVar3 = *(undefined4 *)puStack_30;
    uVar4 = *(undefined4 *)((longlong)puStack_30 + 4);
    uVar5 = *(undefined4 *)(puStack_30 + 1);
    uVar6 = *(undefined4 *)((longlong)puStack_30 + 0xc);
    uVar7 = *(undefined4 *)((longlong)puStack_30 + 0x14);
    uVar8 = *(undefined4 *)(puStack_30 + 3);
    uVar9 = *(undefined4 *)((longlong)puStack_30 + 0x1c);
    puVar2[4] = *(undefined4 *)(puStack_30 + 2);
    puVar2[5] = uVar7;
    puVar2[6] = uVar8;
    puVar2[7] = uVar9;
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    param_1[2] = lVar10 + 1;
    uStack_68 = 0;
    uStack_60 = 0xffffffffffffffff;
    uStack_58 = uStack_58 & 0xffffff00;
    lVar10 = pdb_1416f96d0(&UNK_14304fab0,&uStack_68);
    param_1[0xc] = lVar10;
    param_1[0xb] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143062a69,0x1e,&UNK_143062a88);
}

