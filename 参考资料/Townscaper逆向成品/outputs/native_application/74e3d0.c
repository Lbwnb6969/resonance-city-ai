// RVA 0x74e3d0 | Placemaker.Modules.OutlineUv$$get_x
// PDB: OutlineUv_get_x_m0880A7CC88781B9FDE12C7E4E89625D926C339D6
// Body: [[1074e3d0, 1074e3f0]]
// Direct callees:

int __cdecl
OutlineUv_get_x_m0880A7CC88781B9FDE12C7E4E89625D926C339D6
          (OutlineUv_t8D885F66CE40F841ECE9B414D9ADD5D61B6D2790 *param_1,MethodInfo *param_2)

{
  byte bVar1;

  bVar1 = param_1->___b_0 & 3;
  if (bVar1 == 1) {
    return -1;
  }
  return (uint)(bVar1 == 2);
}
