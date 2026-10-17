// RVA 0x875060 | Placemaker.Ui.BetterScrollRect$$GetScrollableSize
// PDB: BetterScrollRect_GetScrollableSize_mA1A82514CE3585D7631C7228C4AC67E564676758
// Body: [[10875060, 108750e5]]
// Direct callees:
// 10192150 memset
// 101d1990 Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD
// 10662d30 Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00
// 106725a0 Vector2_Max_mE5AD9A94D637F61BF11843D73214857F974C6701
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828

Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 __cdecl
BetterScrollRect_GetScrollableSize_mA1A82514CE3585D7631C7228C4AC67E564676758
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 local_40;
  float local_14;
  float local_10;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_c;

  memset((uchar *)&local_40,'\0',0x2c);
  Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD(&local_40,param_1,(MethodInfo *)0x0);
  VVar1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  local_c = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00
                      (&local_40.___contentRect_2,(MethodInfo *)0x0);
  VVar2 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00
                    (&local_40.___parentRect_3,(MethodInfo *)0x0);
  local_14 = local_c.___x_0 - local_14;
  local_10 = VVar2.___y_1;
  local_10 = local_c.___y_1 - local_10;
  VVar2.___y_1 = local_10;
  VVar2.___x_0 = local_14;
  VVar2 = Vector2_Max_mE5AD9A94D637F61BF11843D73214857F974C6701(VVar1,VVar2,(MethodInfo *)0x0);
  return VVar2;
}
