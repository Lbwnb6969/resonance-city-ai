// VA 0x1408fcc90, PDB extent 531 bytes
// country_core::systems::backend::update_material_args::material_update_firefly_glow
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::backend::update_material_args::material_update_firefly_glow
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
   Extent: 531 */

void pdb_1408fcc90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined *puStack_88;
  undefined8 uStack_80;
  float fStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  
  puVar4 = *(undefined4 **)(param_4 + 0x28);
  puVar5 = *(undefined4 **)(param_4 + 0x38);
  uVar2 = *(undefined4 *)(param_4 + 0x44);
  puVar6 = *(undefined4 **)(param_5 + 0x28);
  puVar7 = *(undefined4 **)(param_5 + 0x38);
  uVar3 = *(undefined4 *)(param_5 + 0x44);
  fVar1 = *(float *)*param_3;
  uVar11 = 0;
  if (fVar1 <= 0.0) {
LAB_1408fce4b:
    *puVar7 = uVar3;
    *puVar6 = uVar11;
    *puVar5 = uVar2;
    *puVar4 = uVar11;
    return;
  }
  plVar8 = (longlong *)*param_1;
  lVar9 = *plVar8;
  uVar10 = *param_2;
  puVar12 = (undefined8 *)pdb_140bf45b0(uVar10,&UNK_14331c9c8);
  if (puVar12 != (undefined8 *)0x0) {
    lVar13 = (**(code **)(puVar12[1] + 0x18))(*puVar12);
    if (lVar13 != 0) {
      puVar12 = (undefined8 *)pdb_140bf45b0(uVar10,&UNK_14331c868);
      if (puVar12 != (undefined8 *)0x0) {
        lVar14 = (**(code **)(puVar12[1] + 0x18))(*puVar12);
        if (lVar14 != 0) {
          puVar12 = (undefined8 *)pdb_140bf45b0(uVar10,&UNK_14331c9c0);
          if (puVar12 != (undefined8 *)0x0) {
            lStack_60 = (**(code **)(puVar12[1] + 0x18))(*puVar12);
            if (lStack_60 != 0) {
              puStack_88 = &UNK_14301d9b8;
              uStack_80 = 0x30;
              fStack_78 = fVar1;
              lStack_70 = lVar13;
              lStack_68 = lVar14;
              pdb_1416c82c0(param_5,lVar9 + 0x10,&puStack_88);
              lVar9 = *plVar8;
              puVar12 = (undefined8 *)pdb_140bf45b0(uVar10,&UNK_14331c9c8);
              if (puVar12 != (undefined8 *)0x0) {
                lVar13 = (**(code **)(puVar12[1] + 0x18))(*puVar12);
                if (lVar13 != 0) {
                  puStack_88 = &UNK_14301da00;
                  uStack_80 = 0x2b;
                  fStack_78 = fVar1;
                  lStack_70 = lVar13;
                  pdb_1416c8150(param_4,lVar9 + 0x10,&puStack_88);
                  uVar11 = 0x60;
                  goto LAB_1408fce4b;
                }
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14301d9e8);
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14301d9a0);
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14301d988);
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14301d970);
}

