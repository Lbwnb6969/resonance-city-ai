// RVA 0x8805f0 | Os.Utils.Bitwise$$IsBitSet
// PDB: Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// Body: [[108805f0, 1088060a]]
// Direct callees:

bool __cdecl
Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
          (uchar param_1,int param_2,MethodInfo *param_3)

{
  return ((uint)param_1 & 1 << ((byte)param_2 & 0x1f)) != 0;
}
