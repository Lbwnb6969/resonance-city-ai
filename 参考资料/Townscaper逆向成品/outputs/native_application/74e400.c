// RVA 0x74e400 | Placemaker.Modules.OutlineUv$$get_y
// PDB: OutlineUv_get_y_m3C188990E705CF30BDDD4D02B4D533A5F9C171C1
// Body: [[1074e400, 1074e420]]
// Direct callees:

int __cdecl
OutlineUv_get_y_m3C188990E705CF30BDDD4D02B4D533A5F9C171C1
          (OutlineUv_t8D885F66CE40F841ECE9B414D9ADD5D61B6D2790 *param_1,MethodInfo *param_2)

{
  byte bVar1;

  bVar1 = param_1->___b_0 & 0xc;
  if (bVar1 == 4) {
    return -1;
  }
  return (uint)(bVar1 == 8);
}
