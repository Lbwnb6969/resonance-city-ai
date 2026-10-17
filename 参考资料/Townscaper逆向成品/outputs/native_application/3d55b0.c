// RVA 0x3d55b0 | Placemaker.MaterialMaster$$.ctor
// PDB: MaterialMaster__ctor_mB8829A9385DFC8F5CA164ECFF5FAEE632F439C88
// Body: [[103d55b0, 103d5626]]
// Direct callees:
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
// 10a39c90 Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B
// 10a39cc0 Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E
// 10a39cf0 Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9
// 10a39e70 Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
// 10a39ed0 Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1

void __cdecl
MaterialMaster__ctor_mB8829A9385DFC8F5CA164ECFF5FAEE632F439C88
          (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar4;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_14;

  pCVar4 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(&local_14,(MethodInfo *)0x0);
  fVar1 = pCVar4->___g_1;
  fVar2 = pCVar4->___b_2;
  fVar3 = pCVar4->___a_3;
  (param_1->___backgroundColor_18).___r_0 = pCVar4->___r_0;
  (param_1->___backgroundColor_18).___g_1 = fVar1;
  (param_1->___backgroundColor_18).___b_2 = fVar2;
  (param_1->___backgroundColor_18).___a_3 = fVar3;
  pCVar4 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(&local_14,(MethodInfo *)0x0);
  fVar1 = pCVar4->___g_1;
  fVar2 = pCVar4->___b_2;
  fVar3 = pCVar4->___a_3;
  (param_1->___grassColor_19).___r_0 = pCVar4->___r_0;
  (param_1->___grassColor_19).___g_1 = fVar1;
  (param_1->___grassColor_19).___b_2 = fVar2;
  (param_1->___grassColor_19).___a_3 = fVar3;
  pCVar4 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(&local_14,(MethodInfo *)0x0);
  fVar1 = pCVar4->___g_1;
  fVar2 = pCVar4->___b_2;
  fVar3 = pCVar4->___a_3;
  (param_1->___roofColor_20).___r_0 = pCVar4->___r_0;
  (param_1->___roofColor_20).___g_1 = fVar1;
  (param_1->___roofColor_20).___b_2 = fVar2;
  (param_1->___roofColor_20).___a_3 = fVar3;
  pCVar4 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(&local_14,(MethodInfo *)0x0);
  fVar1 = pCVar4->___g_1;
  fVar2 = pCVar4->___b_2;
  fVar3 = pCVar4->___a_3;
  (param_1->___plateColor_21).___r_0 = pCVar4->___r_0;
  (param_1->___plateColor_21).___g_1 = fVar1;
  (param_1->___plateColor_21).___b_2 = fVar2;
  (param_1->___plateColor_21).___a_3 = fVar3;
  pCVar4 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(&local_14,(MethodInfo *)0x0);
  fVar1 = pCVar4->___g_1;
  fVar2 = pCVar4->___b_2;
  fVar3 = pCVar4->___a_3;
  (param_1->___stoneColor_22).___r_0 = pCVar4->___r_0;
  (param_1->___stoneColor_22).___g_1 = fVar1;
  (param_1->___stoneColor_22).___b_2 = fVar2;
  (param_1->___stoneColor_22).___a_3 = fVar3;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
