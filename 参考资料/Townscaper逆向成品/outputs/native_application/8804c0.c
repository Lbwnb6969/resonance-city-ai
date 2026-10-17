// RVA 0x8804c0 | Placemaker.Life.Bird$$.ctor
// PDB: Bird__ctor_m5761D3C4F0196993668CB8C5E12EB1F7CC62413B
// Body: [[108804c0, 108804fd]]
// Direct callees:
// 1065fe60 Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
Bird__ctor_m5761D3C4F0196993668CB8C5E12EB1F7CC62413B
          (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_14;

  pQVar4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                     (&local_14,(MethodInfo *)0x0);
  fVar1 = pQVar4->___y_1;
  fVar2 = pQVar4->___z_2;
  fVar3 = pQVar4->___w_3;
  (param_1->___rotation0_9).___x_0 = pQVar4->___x_0;
  (param_1->___rotation0_9).___y_1 = fVar1;
  (param_1->___rotation0_9).___z_2 = fVar2;
  (param_1->___rotation0_9).___w_3 = fVar3;
  pQVar4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                     (&local_14,(MethodInfo *)0x0);
  fVar1 = pQVar4->___y_1;
  fVar2 = pQVar4->___z_2;
  fVar3 = pQVar4->___w_3;
  (param_1->___rotation1_10).___x_0 = pQVar4->___x_0;
  (param_1->___rotation1_10).___y_1 = fVar1;
  (param_1->___rotation1_10).___z_2 = fVar2;
  (param_1->___rotation1_10).___w_3 = fVar3;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
