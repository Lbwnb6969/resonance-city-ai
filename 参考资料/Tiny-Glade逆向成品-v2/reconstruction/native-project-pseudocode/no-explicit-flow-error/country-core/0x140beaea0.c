// VA 0x140beaea0, PDB extent 359 bytes
// concurrent_queue::bounded::Bounded::pop<enum2$<core::result::Result<alloc::sync::Arc<clutter_pack_pipe::ClutterGlbImport,alloc::alloc::Global>,turbosloth::asset::AssetBuildError> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   concurrent_queue::bounded::Bounded::pop<enum2$<core::result::Result<alloc::sync::Arc<clutter_pack_pipe::ClutterGlbImport,alloc::alloc::Global>,turbosloth::asset::AssetBuildError>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 359 */

undefined1 * pdb_140beaea0(undefined1 *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar10 = *param_2;
  uVar7 = param_2[0x23];
  uVar9 = param_2[0x21] - 1 & uVar10;
  if (uVar9 < uVar7) {
    uVar6 = -param_2[0x20] & uVar10;
    do {
      uVar7 = *(ulonglong *)(param_2[0x22] + 0x20 + uVar9 * 0x28);
      if (uVar10 + 1 == uVar7) {
        if (param_2[0x23] <= uVar9 + 1) {
          uVar7 = uVar6 + param_2[0x20];
        }
        LOCK();
        uVar8 = *param_2;
        bVar11 = uVar10 == uVar8;
        if (bVar11) {
          *param_2 = uVar7;
          uVar8 = uVar10;
        }
        UNLOCK();
        if (bVar11) {
          puVar1 = (undefined8 *)(param_2[0x22] + uVar9 * 0x28);
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          uVar4 = puVar1[3];
          puVar1[4] = uVar10 + param_2[0x20];
          *(undefined8 *)(param_1 + 0x18) = puVar1[2];
          *(undefined8 *)(param_1 + 0x20) = uVar4;
          *(undefined8 *)(param_1 + 8) = uVar2;
          *(undefined8 *)(param_1 + 0x10) = uVar3;
          uVar5 = 0;
LAB_140beafed:
          *param_1 = uVar5;
          return param_1;
        }
      }
      else {
        if (uVar7 == uVar10) {
          LOCK();
          UNLOCK();
          if ((~param_2[0x21] & param_2[0x10]) == uVar10) {
            if ((param_2[0x21] & param_2[0x10]) == 0) {
              param_1[1] = 0;
            }
            else {
              param_1[1] = 1;
            }
            uVar5 = 1;
            goto LAB_140beafed;
          }
        }
        else {
          pdb_140f502e0();
        }
        uVar8 = *param_2;
      }
      uVar7 = param_2[0x23];
      uVar9 = param_2[0x21] - 1 & uVar8;
      uVar6 = -param_2[0x20] & uVar8;
      uVar10 = uVar8;
    } while (uVar9 < uVar7);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar9,uVar7,&UNK_143065918);
}

