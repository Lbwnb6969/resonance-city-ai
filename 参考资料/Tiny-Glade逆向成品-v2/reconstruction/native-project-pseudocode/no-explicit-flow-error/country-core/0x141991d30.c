// VA 0x141991d30, PDB extent 363 bytes
// country_core::components::drawable::RenderPipelinesInner::create_material_data<country_core::shader::ivy::instanced_ivy_leaf::MaterialData<rhapsody::raw::binding_set::RawProtocol> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::components::drawable::RenderPipelinesInner::create_material_data<country_core::shader::ivy::instanced_ivy_leaf::MaterialData<rhapsody::raw::binding_set::RawProtocol>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 363 */

undefined8 pdb_141991d30(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar2 = pdb_140e72a40(param_1 + 0x28);
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x10) << 6;
    puVar4 = (ulonglong *)(*(longlong *)(lVar2 + 8) + 0x18);
    do {
      uVar1 = *puVar4;
      if ((0xd < uVar1) &&
         (*(longlong *)((puVar4[-1] - 8) + uVar1) == 0x617461645f6c6169 &&
          *(longlong *)((puVar4[-1] - 0xe) + uVar1) == 0x6169726574616d2f)) {
        uStack_38 = pdb_140e51270(param_2,param_1 + 0x28);
        uStack_48 = puVar4[-1];
        if (!SBORROW8(0,puVar4[-2])) {
          uStack_48 = pdb_140e940b0(uStack_48,*puVar4);
          puVar4 = (ulonglong *)(uStack_48 - 8);
        }
        uStack_40 = *puVar4;
        uStack_68 = *(undefined8 *)(param_3 + 4);
        uStack_78 = *param_3;
        uStack_74 = param_3[1];
        uStack_70 = param_3[2];
        uStack_6c = param_3[3];
        uStack_50 = 0x8000000000000000;
        uStack_58 = 0;
        pdb_1415619d0(param_2,&uStack_38,1,&uStack_58,&uStack_78);
        return uStack_38;
      }
      puVar4 = puVar4 + 8;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14335d270);
}

