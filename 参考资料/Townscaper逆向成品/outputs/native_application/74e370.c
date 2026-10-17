// RVA 0x74e370 | Placemaker.Modules.OutlineUv$$get_uv
// PDB: OutlineUv_get_uv_m19A9B6ABD3736491758DE0A0F15F8A46D77A0A58
// Body: [[1074e370, 1074e3ca]]
// Direct callees:

Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 __cdecl
OutlineUv_get_uv_m19A9B6ABD3736491758DE0A0F15F8A46D77A0A58
          (OutlineUv_t8D885F66CE40F841ECE9B414D9ADD5D61B6D2790 *param_1,MethodInfo *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;

  bVar1 = param_1->___b_0 & 3;
  if (bVar1 == 1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)(bVar1 == 2);
  }
  bVar1 = param_1->___b_0 & 0xc;
  if (bVar1 == 4) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)(bVar1 == 8);
  }
  VVar4.___y_1 = (float)(int)uVar2;
  VVar4.___x_0 = (float)(int)uVar3;
  return VVar4;
}
