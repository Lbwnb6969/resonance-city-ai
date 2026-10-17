// RVA 0xe13ed0 | Placemaker.GridGenerator$$IsNewGrid
// PDB: GridGenerator_IsNewGrid_m3EA8D69F72430BC597FEDE80AB72D0B37781F6D1
// Body: [[10e13ed0, 10e13ff5]]
// Direct callees:
// 10a44230 Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
GridGenerator_IsNewGrid_m3EA8D69F72430BC597FEDE80AB72D0B37781F6D1
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_2,MethodInfo *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;

  if ((((param_2.___x_0 < 0x481) && (param_2.___y_1 < 0x481)) && (param_2.___z_2 < 0x481)) &&
     (((param_2.___x_0 == -0x480 || -param_2.___x_0 < 0x480 &&
       (param_2.___y_1 == -0x480 || -param_2.___y_1 < 0x480)) &&
      (param_2.___z_2 == -0x480 || -param_2.___z_2 < 0x480)))) {
    return false;
  }
  fVar1 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                    ((float)param_2.___x_0 * ___real_3c37fe09,
                     (float)param_2.___y_1 * ___real_bea978d5,(MethodInfo *)0x0);
  fVar2 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                    ((float)param_2.___y_1 * ___real_3c37fe09,
                     (float)param_2.___z_2 * ___real_bea978d5,(MethodInfo *)0x0);
  fVar3 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                    ((float)param_2.___z_2 * ___real_3c37fe09,
                     (float)param_2.___x_0 * ___real_bea978d5,(MethodInfo *)0x0);
  return ___real_3fc66666 < fVar3 + fVar2 + fVar1;
}
