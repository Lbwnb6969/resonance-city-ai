// VA 0x141a7d170, PDB extent 400 bytes
// country_core::render::shadowed_buffer::ShadowedBuffer::new<country_core::render::nani::instance_data::PlantInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::shadowed_buffer::ShadowedBuffer::new<country_core::render::nani::instance_data::PlantInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
   Extent: 400 */

undefined8 * pdb_141a7d170(undefined8 *param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong arg1;
  undefined8 uVar3;
  byte *arg0;
  
  arg0 = (byte *)param_3[1];
  uVar1 = param_3[2];
  uVar3 = pdb_141b0da30(param_2,arg0,uVar1);
  if (uVar1 < *param_3) {
    arg1 = *param_3 * 0x30;
    if (uVar1 == 0) {
      pub_1406abac0(arg0,arg1,4);
      arg0 = (byte *)0x4;
    }
    else {
      arg0 = pub_1406abad0(arg0,arg1,4,uVar1 * 0x30);
      if (arg0 == (byte *)0x0) {
        pdb_142dc7e2a(4,uVar1 * 0x30);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
  }
  *param_1 = uVar3;
  param_1[1] = arg0;
  param_1[2] = uVar1;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0;
  return param_1;
}

