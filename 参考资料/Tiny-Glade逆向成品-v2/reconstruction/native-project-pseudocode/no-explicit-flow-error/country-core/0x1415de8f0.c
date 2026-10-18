// VA 0x1415de8f0, PDB extent 317 bytes
// country_core::systems::steam::missing_mods::refresh_missing_mods_on_pack_change::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::missing_mods::refresh_missing_mods_on_pack_change::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
   Extent: 317 */

undefined8 pdb_1415de8f0(longlong param_1,undefined8 *param_2)

{
  ulonglong arg0;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar3 = *param_2;
    uVar10 = param_2[2];
    lVar4 = param_2[3];
    lVar9 = 0;
    do {
      if (((*(int *)(lVar2 + lVar9) == (int)uVar3) && (*(longlong *)(lVar2 + 0x18 + lVar9) == lVar4)
          ) && (iVar7 = pub_142e32750(*(undefined8 *)(lVar2 + 0x10 + lVar9),uVar10,lVar4),
               iVar7 == 0)) {
        uVar5 = *(ulonglong *)(lVar2 + 0x30 + lVar9);
        arg0 = uVar5 * 8;
        if (0x7ffffffffffffff8 < arg0 || uVar5 >> 0x3d != 0) {
          uVar10 = 0;
LAB_1415de988:
          pdb_142dc7e2a(uVar10,arg0);
          return 0;
        }
        uVar3 = *(undefined8 *)(lVar2 + 0x28 + lVar9);
        if (arg0 == 0) {
          pbVar8 = (byte *)0x8;
          uVar6 = 0;
        }
        else {
          pdb_14007ee60();
          uVar10 = 8;
          pbVar8 = pub_1406abab0(arg0,8);
          uVar6 = uVar5;
          if (pbVar8 == (byte *)0x0) goto LAB_1415de988;
        }
        if (uVar5 != 0) {
          pub_142e32760(pbVar8,uVar3,arg0);
        }
        if (param_2[4] != 0) {
          pub_1406abac0((byte *)param_2[5],param_2[4] << 3,8);
        }
        param_2[4] = uVar6;
        param_2[5] = pbVar8;
        param_2[6] = uVar5;
        *(undefined1 *)(param_2 + 10) = *(undefined1 *)(lVar2 + 0x50 + lVar9);
        return 1;
      }
      lVar9 = lVar9 + 0x58;
    } while (lVar1 * 0x58 - lVar9 != 0);
  }
  return 0;
}

