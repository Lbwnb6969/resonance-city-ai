// RVA 0x4bf180 | Placemaker.Ui.CreditsMenu$$MaybeUpdateScreenSize
// PDB: CreditsMenu_MaybeUpdateScreenSize_m2342F013A0B59CE19FB5ECF3C78A102EC783C73C
// Body: [[104bf180, 104bf26d]]
// Direct callees:
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828

bool __cdecl
CreditsMenu_MaybeUpdateScreenSize_m2342F013A0B59CE19FB5ECF3C78A102EC783C73C
          (CreditsMenu_tE101B90DEBA1E200189C86C0CFA340BA4872BB12 *param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  float local_10;
  float local_c;

  fVar3 = (param_1->___oldScreenSize_12).___x_0;
  fVar4 = (param_1->___oldScreenSize_12).___y_1;
  VVar5 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  fVar3 = fVar3 - local_10;
  local_c = VVar5.___y_1;
  fVar4 = fVar4 - local_c;
  if (__real_2edbe6fe <= fVar4 * fVar4 + fVar3 * fVar3) {
    fVar3 = (param_1->___oldScreenSize_12).___x_0;
    iVar1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
    if (fVar3 == (float)iVar1) {
      fVar3 = (param_1->___oldScreenSize_12).___y_1;
      iVar1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
      if (fVar3 == (float)iVar1) {
        return false;
      }
    }
  }
  iVar1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
  iVar2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
  (param_1->___oldScreenSize_12).___x_0 = (float)iVar1;
  (param_1->___oldScreenSize_12).___y_1 = (float)iVar2;
  return true;
}
