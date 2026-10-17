// RVA 0x4c4fd0 | Placemaker.Ui.DistanceFieldMask$$.ctor
// PDB: DistanceFieldMask__ctor_m2D3EA6D70AF98747FD6D3CE8FE576BE7A4A765FF
// Body: [[104c4fd0, 104c5023]]
// Direct callees:
// 1022e200 ButtonNavigator__ctor_m6F9F6FD2D6ACA1DB4E86CFFED118BF5B8AC86B5F
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4

void __cdecl
DistanceFieldMask__ctor_m2D3EA6D70AF98747FD6D3CE8FE576BE7A4A765FF
          (DistanceFieldMask_t24D3AF7EA4ACC3024F916C27CA2EA096B36D22B2 *param_1,MethodInfo *param_2)

{
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  local_14.___m_Left_0 = 0.0;
  local_14.___m_Right_1 = 0.0;
  local_14.___m_Top_2 = 0.0;
  local_14.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_14,-1.0,-1.0,2.0,2.0,(MethodInfo *)0x0);
  (param_1->___anchor_6).___x_1 = local_14.___m_Left_0;
  (param_1->___anchor_6).___y_2 = local_14.___m_Right_1;
  (param_1->___anchor_6).___z_3 = local_14.___m_Top_2;
  (param_1->___anchor_6).___w_4 = local_14.___m_Bottom_3;
  ButtonNavigator__ctor_m6F9F6FD2D6ACA1DB4E86CFFED118BF5B8AC86B5F
            ((ButtonNavigator_t39070393E4925734D41C4E047B64C061BFAD8A9D *)param_1,(MethodInfo *)0x0)
  ;
  return;
}
