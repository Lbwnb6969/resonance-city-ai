// RVA 0x836fe0 | Os.Utils.ExtraMath$$SetW
// PDB: ExtraMath_SetW_m9164BE628F6F11B09140233538951964E88E6B58
// Body: [[10836fe0, 1083702a]]
// Direct callees:
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4

Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __cdecl
ExtraMath_SetW_m9164BE628F6F11B09140233538951964E88E6B58
          (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *__return_storage_ptr__,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,float param_2,
          MethodInfo *param_3)

{
  __return_storage_ptr__->___x_1 = 0.0;
  __return_storage_ptr__->___y_2 = 0.0;
  __return_storage_ptr__->___z_3 = 0.0;
  __return_storage_ptr__->___w_4 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)__return_storage_ptr__,
             param_1.___x_2,param_1.___y_3,param_1.___z_4,param_2,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}
