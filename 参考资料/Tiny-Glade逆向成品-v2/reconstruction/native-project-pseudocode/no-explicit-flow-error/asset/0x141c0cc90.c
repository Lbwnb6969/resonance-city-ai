// VA 0x141c0cc90, PDB extent 201 bytes
// asset::legacy_mod::flip_triangle_winding
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/legacy_mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::legacy_mod::flip_triangle_winding
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/legacy_mod.rs
   Extent: 201 */

ulonglong pdb_141c0cc90(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  uVar4 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = (param_2 / 3) * 3;
  if (2 < uVar8) {
    uVar1 = uVar8 - 3;
    uVar6 = (uint)(uVar1 / 3);
    uVar3 = ~uVar6;
    uVar4 = (ulonglong)uVar3;
    if ((uVar3 & 3) != 0) {
      uVar7 = (ulonglong)(uVar6 + 1 & 3);
      uVar4 = uVar7 * 3;
      uVar8 = uVar8 + uVar7 * -3;
      do {
        *(ulonglong *)(param_1 + 4) =
             CONCAT44((int)*(undefined8 *)(param_1 + 4),
                      (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20));
        param_1 = param_1 + 0xc;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (8 < uVar1) {
      puVar5 = (undefined8 *)(param_1 + 0x28);
      do {
        *(ulonglong *)((longlong)puVar5 + -0x24) =
             CONCAT44((int)*(undefined8 *)((longlong)puVar5 + -0x24),
                      (int)((ulonglong)*(undefined8 *)((longlong)puVar5 + -0x24) >> 0x20));
        puVar5[-3] = CONCAT44((int)puVar5[-3],(int)((ulonglong)puVar5[-3] >> 0x20));
        *(ulonglong *)((longlong)puVar5 + -0xc) =
             CONCAT44((int)*(undefined8 *)((longlong)puVar5 + -0xc),
                      (int)((ulonglong)*(undefined8 *)((longlong)puVar5 + -0xc) >> 0x20));
        uVar8 = uVar8 - 0xc;
        *puVar5 = CONCAT44((int)*puVar5,(int)((ulonglong)*puVar5 >> 0x20));
        puVar5 = puVar5 + 6;
      } while (2 < uVar8);
    }
  }
  return uVar4;
}

