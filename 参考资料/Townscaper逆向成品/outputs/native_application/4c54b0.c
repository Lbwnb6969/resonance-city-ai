// RVA 0x4c54b0 | Placemaker.DrawPlane$$AllowedQuad
// PDB: DrawPlane_AllowedQuad_m4D1CF166504E903E7FF3E5D8C64218C2C2D0148D
// Body: [[104c54b0, 104c5538]]
// Direct callees:
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C

bool __cdecl
DrawPlane_AllowedQuad_m4D1CF166504E903E7FF3E5D8C64218C2C2D0148D
          (DrawPlane_t25E93171CC5BAAB4443AC73B5628F14D1F786176 *param_1,
          Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB param_2,MethodInfo *param_3)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 *pfVar1;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar2;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar3;
  float fVar4;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar5;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar6;
  MethodInfo *pMVar7;

  pfVar1 = &param_1->___camDir_10;
  pMVar7 = (MethodInfo *)pfVar1->___x_0;
  iVar3.___z_2 = 0;
  iVar3.___x_0 = (int)pfVar1->___x_0;
  iVar3.___y_1 = (int)pfVar1->___y_1;
  iVar5 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar3,pMVar7);
  fVar4 = (float)iVar5.___x_0;
  iVar2.___y_1 = (int)(param_2.___p0_5.___y_1 - param_2.___p1_6.___y_1);
  iVar2.___x_0 = (int)(param_2.___p0_5.___x_0 - param_2.___p1_6.___x_0);
  iVar2.___z_2 = 0;
  iVar6 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar2,pMVar7);
  param_2.___p3_8.___x_0 = (float)iVar6.___x_0;
  param_2.___p3_8.___y_1 = (float)iVar6.___y_1;
  return param_2.___p3_8.___y_1 * (float)iVar5.___y_1 + param_2.___p3_8.___x_0 * fVar4 < 0.0;
}
