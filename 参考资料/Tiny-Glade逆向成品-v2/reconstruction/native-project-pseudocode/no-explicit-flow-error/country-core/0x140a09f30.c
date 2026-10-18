// VA 0x140a09f30, PDB extent 324 bytes
// country_core::systems::terrain::deferred_terrain_history::history_record_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/deferred_terrain_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::terrain::deferred_terrain_history::history_record_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/deferred_terrain_history.rs
   Extent: 324 */

void pdb_140a09f30(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  plVar1 = (longlong *)*param_2;
  uStack_50 = *plVar1;
  *plVar1 = -0x7ffffffffffffffe;
  if (uStack_50 != -0x7ffffffffffffffe) {
    uStack_48 = (undefined4)plVar1[1];
    uStack_44 = *(undefined4 *)((longlong)plVar1 + 0xc);
    uStack_40 = (undefined4)plVar1[2];
    uStack_3c = *(undefined4 *)((longlong)plVar1 + 0x14);
    uStack_38 = (undefined4)plVar1[3];
    uStack_34 = *(undefined4 *)((longlong)plVar1 + 0x1c);
    uStack_30 = (undefined4)plVar1[4];
    uStack_2c = *(undefined4 *)((longlong)plVar1 + 0x24);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar2 = *param_1;
    uStack_60 = 1;
    uStack_58 = (byte *)0x1;
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(0x38,8);
    if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x38);
    }
    *(ulonglong *)(pbVar5 + 0x30) = CONCAT44(uStack_2c,uStack_30);
    *(undefined4 *)(pbVar5 + 0x20) = uStack_40;
    *(undefined4 *)(pbVar5 + 0x24) = uStack_3c;
    *(undefined4 *)(pbVar5 + 0x28) = uStack_38;
    *(undefined4 *)(pbVar5 + 0x2c) = uStack_34;
    *(undefined4 *)(pbVar5 + 0x10) = (undefined4)uStack_50;
    *(undefined4 *)(pbVar5 + 0x14) = uStack_50._4_4_;
    *(undefined4 *)(pbVar5 + 0x18) = uStack_48;
    *(undefined4 *)(pbVar5 + 0x1c) = uStack_44;
    *(undefined4 *)pbVar5 = (undefined4)uStack_60;
    *(undefined4 *)(pbVar5 + 4) = uStack_60._4_4_;
    *(undefined4 *)(pbVar5 + 8) = (undefined4)uStack_58;
    *(undefined4 *)(pbVar5 + 0xc) = uStack_58._4_4_;
    uStack_60 = 0;
    uStack_58 = pbVar5;
    pdb_140ae5180(uVar2,&uStack_60,&UNK_1430357b8);
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar3 = *param_3;
    lVar4 = *(longlong *)(lVar3 + 0x30);
    uVar2 = *(undefined8 *)(lVar3 + 0x40);
    if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
      pdb_142d7e8a0(lVar3 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar4 * 8) = uVar2;
    *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
    *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
  }
  return;
}

