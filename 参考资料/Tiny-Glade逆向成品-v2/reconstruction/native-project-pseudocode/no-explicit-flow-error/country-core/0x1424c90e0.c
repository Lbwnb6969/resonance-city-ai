// VA 0x1424c90e0, PDB extent 379 bytes
// country_core::components::drawable::RenderPipelinesInner::create_material_data2<country_core::shader::flag_roof_cloth::MaterialData<rhapsody::raw::binding_set::RawProtocol> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::components::drawable::RenderPipelinesInner::create_material_data2<country_core::shader::flag_roof_cloth::MaterialData<rhapsody::raw::binding_set::RawProtocol>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 379 */

undefined8 pdb_1424c90e0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143511240);
  }
  param_1 = param_1 + 0x28;
  lVar2 = pdb_140e72a40(param_1);
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    lVar3 = *(longlong *)(lVar2 + 8);
    lVar2 = *(longlong *)(lVar2 + 0x10) << 6;
    do {
      uVar1 = *(ulonglong *)(lVar3 + 0x18);
      if (0xd < uVar1) {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + -8 + uVar1) == 0x617461645f6c6169 &&
            *(longlong *)(*(longlong *)(lVar3 + 0x10) + -0xe + uVar1) == 0x6169726574616d2f) {
          uStack_38 = pdb_140e51270(param_2);
          uStack_48 = pdb_1408f8090(lVar3);
          uStack_68 = *(undefined8 *)(param_3 + 0x14);
          uStack_78 = *(undefined8 *)(param_3 + 0x10);
          uStack_70 = *(undefined8 *)(param_3 + 0x12);
          uStack_b8 = *param_3;
          uStack_b4 = param_3[1];
          uStack_b0 = param_3[2];
          uStack_ac = param_3[3];
          uStack_a8 = param_3[4];
          uStack_a4 = param_3[5];
          uStack_a0 = param_3[6];
          uStack_9c = param_3[7];
          uStack_98 = param_3[8];
          uStack_94 = param_3[9];
          uStack_90 = param_3[10];
          uStack_8c = param_3[0xb];
          uStack_88 = param_3[0xc];
          uStack_84 = param_3[0xd];
          uStack_80 = param_3[0xe];
          uStack_7c = param_3[0xf];
          uStack_50 = 0x8000000000000000;
          uStack_58 = 0;
          lStack_40 = param_1;
          pdb_1414efac0(param_2,&uStack_38,0,&uStack_58,&uStack_b8);
          return uStack_38;
        }
      }
      lVar3 = lVar3 + 0x40;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143511258);
}

