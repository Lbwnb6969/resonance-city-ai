// VA 0x140ae4d80, PDB extent 303 bytes
// country_core::resources::history::History::closest_resolved_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::History::closest_resolved_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 303 */

undefined8 * pdb_140ae4d80(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lStack_28;
  byte *pbStack_20;
  ulonglong uStack_18;
  
  pdb_1415ed4a0(&lStack_28,*(longlong *)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x28) * 0x10 + *(longlong *)(param_2 + 0x20));
  if (uStack_18 != 0) {
    lVar5 = 0;
    lVar4 = lVar5;
    uVar7 = uStack_18;
    if (uStack_18 != 1) {
      do {
        lVar5 = lVar4 + (uVar7 >> 1);
        if (param_3 <= *(int *)(pbStack_20 + lVar5 * 0x10 + 8)) {
          lVar5 = lVar4;
        }
        uVar7 = uVar7 - (uVar7 >> 1);
        lVar4 = lVar5;
      } while (1 < uVar7);
    }
    uVar7 = (ulonglong)(*(int *)(pbStack_20 + lVar5 * 0x10 + 8) < param_3) + lVar5;
    if (uVar7 < uStack_18) {
      pbVar2 = pbStack_20 + uVar7 * 0x10;
      if (uVar7 != 0) {
        iVar6 = -(*(int *)(pbVar2 + -8) - param_3);
        if (iVar6 < 0) {
          iVar6 = *(int *)(pbVar2 + -8) - param_3;
        }
        iVar3 = -(*(int *)(pbVar2 + 8) - param_3);
        if (iVar3 < 0) {
          iVar3 = *(int *)(pbVar2 + 8) - param_3;
        }
        pbVar2 = pbVar2 + (ulonglong)(iVar3 <= iVar6) * 0x10 + -0x10;
      }
    }
    else {
      pbVar2 = pbStack_20 + uStack_18 * 0x10 + -0x10;
    }
    if (pbVar2 != (byte *)0x0) {
      uVar1 = *(undefined4 *)(pbVar2 + 8);
      param_1[1] = *(undefined8 *)pbVar2;
      *(undefined4 *)(param_1 + 2) = uVar1;
      *param_1 = 1;
      goto joined_r0x000140ae4e8f;
    }
  }
  *param_1 = 0;
joined_r0x000140ae4e8f:
  if (lStack_28 != 0) {
    pub_1406abac0(pbStack_20,lStack_28 << 4,8);
  }
  return param_1;
}

