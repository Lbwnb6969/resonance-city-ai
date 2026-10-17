// RVA 0x874df0 | Beatbox$$IsBeat
// PDB: Beatbox_IsBeat_m0D2F71268218CE83752489F36818A1D353AA741C
// Body: [[10874df0, 10874e72]]
// Direct callees:
// 1066d890 Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Beatbox_IsBeat_m0D2F71268218CE83752489F36818A1D353AA741C
          (float param_1,float param_2,MethodInfo *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;

  fVar3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    (fVar3 * ___real_3fd55555 * param_1 + param_2,(MethodInfo *)0x0);
  fVar3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
  fVar4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
  iVar2 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    ((fVar4 + fVar3) * ___real_3fd55555 * param_1 + param_2,(MethodInfo *)0x0);
  return iVar1 != iVar2;
}
