// RVA 0x3e80e0 | Os.Utils.UnityFunctions$$InView
// PDB: UnityFunctions_InView_m62DB7D956417AC6B0D608CD9EC9CDAE25358953A
// Body: [[103e80e0, 103e8195]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a383a0 Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UnityFunctions_InView_m62DB7D956417AC6B0D608CD9EC9CDAE25358953A
          (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,float param_3,
          MethodInfo *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  float local_10;

  if (param_1 == (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pVVar4 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D
                     (&local_1c,param_1,param_2,(MethodInfo *)0x0);
  uVar1 = pVVar4->___x_2;
  if (___real_00000000 < pVVar4->___z_4) {
    if ((((float)((uint)param_3 ^ __xmm_80000000800000008000000080000000) < (float)uVar1) &&
        (uVar2 = pVVar4->___y_3,
        (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000) < (float)uVar2)) &&
       ((float)uVar1 < param_3 + __real_3f800000)) {
      uVar3 = pVVar4->___y_3;
      return (float)uVar3 < param_3 + __real_3f800000;
    }
  }
  return false;
}
