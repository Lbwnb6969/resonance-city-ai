// VA 0x140a59a50, PDB extent 497 bytes
// country_core::asset_libraries::shader_library::AssetShaderLibrary::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/shader_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::asset_libraries::shader_library::AssetShaderLibrary::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/shader_library.rs
   Extent: 497 */

undefined8 * pdb_140a59a50(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_140e45350(&uStack_d0);
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lStack_68 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lStack_68 = pdb_140f4fd10();
    *plVar5 = lStack_68;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lStack_68 + 1;
  uVar4 = _UNK_14303e558;
  uVar3 = _DAT_14303e550;
  uVar2 = _UNK_14303e548;
  uVar1 = _DAT_14303e540;
  uStack_78 = _DAT_14303e550;
  uStack_70 = _UNK_14303e558;
  uStack_88 = _DAT_14303e540;
  uStack_80 = _UNK_14303e548;
  uStack_58 = 0;
  uStack_50 = 8;
  uStack_48 = 0;
  lStack_60 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar6 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lVar6 = pdb_140f4fd10();
    *plVar5 = lVar6;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar6 + 1;
  param_1[0xb] = uStack_90;
  param_1[9] = uStack_a0;
  param_1[10] = uStack_98;
  param_1[7] = uStack_b0;
  param_1[8] = uStack_a8;
  param_1[5] = uStack_c0;
  param_1[6] = uStack_b8;
  param_1[3] = uStack_d0;
  param_1[4] = uStack_c8;
  param_1[0x10] = lStack_68;
  param_1[0x11] = lStack_60;
  param_1[0xe] = uStack_78;
  param_1[0xf] = uStack_70;
  param_1[0xc] = uStack_88;
  param_1[0xd] = uStack_80;
  *param_1 = uStack_58;
  param_1[1] = uStack_50;
  param_1[2] = uStack_48;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar2;
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar4;
  param_1[0x16] = lVar6;
  param_1[0x17] = param_2;
  return param_1;
}

