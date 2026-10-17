// RVA 0xa02f70 | Placemaker.SaveSystem$$MaybeUpdateTexture
// PDB: SaveSystem_MaybeUpdateTexture_mDCDA658E3B2C087F8388E5FB72D1C59306D9D48E
// Body: [[10a02f70, 10a02fb5]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 11149190 ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477

bool __cdecl
SaveSystem_MaybeUpdateTexture_mDCDA658E3B2C087F8388E5FB72D1C59306D9D48E
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  float fVar1;

  if (param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
    if (param_2->___lastSaveDataTime_12 < param_2->___lastTextureLoadTime_11) {
      return false;
    }
    if (param_2->___saveData_9 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
      ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477
                (param_2->___texture_7,param_2->___saveData_9->___bigJpg_6,(MethodInfo *)0x0);
      fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      param_2->___lastTextureLoadTime_11 = fVar1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
