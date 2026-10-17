// RVA 0x3da2e0 | Placemaker.ModuleMath$$MultiplyVector
// PDB: ModuleMath_MultiplyVector_mABC0EEB44CA48B3210C025960EC9FB1DF149BDC2
// Body: [[103da2e0, 103da36b]]
// Direct callees:
// 103cd350 math_mul_m8216B4BCB7ED4B82A4C35B49CCE6DFD8A393D243_inline

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
ModuleMath_MultiplyVector_mABC0EEB44CA48B3210C025960EC9FB1DF149BDC2
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          int4x4_t2CD7A9F659C5BF8B1C7C3961BC5573E009868331 param_1,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_2,MethodInfo *param_3)

{
  int iVar1;
  int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 iVar2;
  int iVar3;
  int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 *piVar4;

  iVar2.___w_3 = 0;
  iVar2._0_12_ = param_2;
  piVar4 = math_mul_m8216B4BCB7ED4B82A4C35B49CCE6DFD8A393D243_inline
                     (&param_1.___c3_3,param_1,iVar2,(MethodInfo *)0x0);
  iVar3 = piVar4->___y_1;
  iVar1 = piVar4->___z_2;
  __return_storage_ptr__->___x_0 = piVar4->___x_0;
  __return_storage_ptr__->___y_1 = iVar3;
  __return_storage_ptr__->___z_2 = iVar1;
  return __return_storage_ptr__;
}
