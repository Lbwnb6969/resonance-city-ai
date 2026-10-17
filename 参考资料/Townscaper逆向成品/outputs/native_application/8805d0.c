// RVA 0x8805d0 | Os.Utils.Bitwise$$IsBitSet
// PDB: Bitwise_IsBitSet_mAB8C2910AEA94BEA53152639A44E1D08CCF38F9D
// Body: [[108805d0, 108805e7]]
// Direct callees:

bool __cdecl
Bitwise_IsBitSet_mAB8C2910AEA94BEA53152639A44E1D08CCF38F9D
          (int param_1,int param_2,MethodInfo *param_3)

{
  return (param_1 & 1 << ((byte)param_2 & 0x1f)) != 0;
}
