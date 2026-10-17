// RVA 0x40dc70 | Os.Hex.HexMath$$HexRoundX
// PDB: HexMath_HexRoundX_mF610613FDBDA1218FC4B9F1758CAF1FDC44B189E
// Body: [[1040dc70, 1040dcc9]]
// Direct callees:
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
HexMath_HexRoundX_mF610613FDBDA1218FC4B9F1758CAF1FDC44B189E
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;

  Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(param_1.___x_0,(MethodInfo *)0x0);
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_1.___y_1,(MethodInfo *)0x0);
  iVar2 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (param_1.___z_2,(MethodInfo *)0x0);
  __return_storage_ptr__->___y_1 = iVar1;
  __return_storage_ptr__->___x_0 = -(iVar2 + iVar1);
  __return_storage_ptr__->___z_2 = iVar2;
  return __return_storage_ptr__;
}
