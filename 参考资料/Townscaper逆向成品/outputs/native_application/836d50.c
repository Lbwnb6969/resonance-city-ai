// RVA 0x836d50 | Os.Utils.ExtraMath$$Pow
// PDB: ExtraMath_Pow_m824DC87D9B81F8B129D90FFC8C78206A0CBDFAFF
// Body: [[10836d50, 10836d74]]
// Direct callees:

int __cdecl
ExtraMath_Pow_m824DC87D9B81F8B129D90FFC8C78206A0CBDFAFF
          (int param_1,uint param_2,MethodInfo *param_3)

{
  int iVar1;

  iVar1 = 1;
  for (; param_2 != 0; param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      iVar1 = iVar1 * param_1;
    }
    param_1 = param_1 * param_1;
  }
  return iVar1;
}
