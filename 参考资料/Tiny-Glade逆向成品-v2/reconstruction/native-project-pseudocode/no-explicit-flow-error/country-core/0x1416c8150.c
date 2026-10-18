// VA 0x1416c8150, PDB extent 366 bytes
// country_core::systems::backend::update_material_args::impl$0::update<country_core::shader::critters::firefly::MaterialData<shabriri_rt::api::EmptyProtocol>,country_core::shader::critters::firefly::MaterialData<rhapsody::raw::binding_set::RawProtocol> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::backend::update_material_args::impl$0::update<country_core::shader::critters::firefly::MaterialData<shabriri_rt::api::EmptyProtocol>,country_core::shader::critters::firefly::MaterialData<rhapsody::raw::binding_set::RawProtocol>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
   Extent: 366 */

void pdb_1416c8150(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong *plStack_60;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1[4] + 0x28) != 0) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar1 = *(undefined4 *)(param_3 + 2);
    uVar4 = param_3[3];
    lStack_70 = pdb_140e51270(param_2,param_1[4] + 0x28);
    uStack_88 = 0x8000000000000000;
    uStack_90 = 0;
    uStack_51 = 1;
    uStack_80 = uVar2;
    uStack_78 = uVar3;
    lStack_68 = lStack_70;
    pdb_141580f10(param_2,&lStack_70,0,&uStack_90,uVar1,uVar4);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    plStack_60 = (longlong *)*param_1;
    if (*plStack_60 != 0) {
      pdb_14098d520(plStack_60);
    }
    *plStack_60 = lStack_68;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1433261d8);
}

