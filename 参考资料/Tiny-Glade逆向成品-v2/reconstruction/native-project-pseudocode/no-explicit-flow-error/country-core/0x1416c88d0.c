// VA 0x1416c88d0, PDB extent 404 bytes
// country_core::systems::backend::update_material_args::impl$0::update<country_core::shader::sheep::MaterialData<shabriri_rt::api::EmptyProtocol>,country_core::shader::sheep::MaterialData<rhapsody::raw::binding_set::RawProtocol> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::backend::update_material_args::impl$0::update<country_core::shader::sheep::MaterialData<shabriri_rt::api::EmptyProtocol>,country_core::shader::sheep::MaterialData<rhapsody::raw::binding_set::RawProtocol>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
   Extent: 404 */

void pdb_1416c88d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong *plStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1[4] + 0x28) != 0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    lStack_58 = pdb_140e51270(param_2,param_1[4] + 0x28);
    uStack_88 = param_3[0x10];
    uStack_98 = param_3[0xe];
    uStack_90 = param_3[0xf];
    uStack_a8 = param_3[0xc];
    uStack_a0 = param_3[0xd];
    uStack_b8 = param_3[10];
    uStack_b0 = param_3[0xb];
    uStack_f8 = *(undefined4 *)(param_3 + 2);
    uStack_f4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_f0 = *(undefined4 *)(param_3 + 3);
    uStack_ec = *(undefined4 *)((longlong)param_3 + 0x1c);
    uStack_e8 = *(undefined4 *)(param_3 + 4);
    uStack_e4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_e0 = *(undefined4 *)(param_3 + 5);
    uStack_dc = *(undefined4 *)((longlong)param_3 + 0x2c);
    uStack_d8 = *(undefined4 *)(param_3 + 6);
    uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_d0 = *(undefined4 *)(param_3 + 7);
    uStack_cc = *(undefined4 *)((longlong)param_3 + 0x3c);
    uStack_c8 = *(undefined4 *)(param_3 + 8);
    uStack_c4 = *(undefined4 *)((longlong)param_3 + 0x44);
    uStack_c0 = *(undefined4 *)(param_3 + 9);
    uStack_bc = *(undefined4 *)((longlong)param_3 + 0x4c);
    uStack_70 = 0x8000000000000000;
    uStack_78 = 0;
    uStack_39 = 1;
    uStack_68 = uVar1;
    uStack_60 = uVar2;
    lStack_50 = lStack_58;
    pdb_1415a1170(param_2,&lStack_58,0,&uStack_78,&uStack_f8);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    plStack_48 = (longlong *)*param_1;
    if (*plStack_48 != 0) {
      pdb_14098d520(plStack_48);
    }
    *plStack_48 = lStack_50;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1433261d8);
}

