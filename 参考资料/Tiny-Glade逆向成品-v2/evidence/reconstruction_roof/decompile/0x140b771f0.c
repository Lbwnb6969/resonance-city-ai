// Matched PDB: country_core::resources::roofs::roof_shape::Roof::roof_tip_offset_xz
// VA 0x140b771f0, PDB extent 136 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::roof_tip_offset_xz
   Extent: 136 bytes. No whole-program auto-analysis. */

undefined8 pdb_140b771f0(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (*(int *)(param_1 + 8) == 1) {
    uStack_28 = *(undefined8 *)(param_1 + 0x1c);
    uStack_38 = *(undefined4 *)(param_1 + 0xc);
    uStack_34 = *(undefined4 *)(param_1 + 0x10);
    uStack_30 = *(undefined4 *)(param_1 + 0x14);
    uStack_2c = *(undefined4 *)(param_1 + 0x18);
    pdb_140df1c10(&fStack_18,&uStack_38);
    fVar1 = (float)*(undefined8 *)(param_1 + 0x24) * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar2 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x24) >> 0x20) *
            (float)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    return CONCAT44(fVar2 * _UNK_142e36f4c * fStack_c + fVar1 * _UNK_142e36f44 * fStack_14,
                    fVar2 * _UNK_142e36f48 * fStack_10 + fVar1 * _DAT_142e36f40 * fStack_18);
  }
  fVar1 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x14);
  return CONCAT44(fVar1 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x24) >> 0x20) *
                  _UNK_142e36f64,fVar1 * (float)*(undefined8 *)(param_1 + 0x24) * _DAT_142e36f60);
}

