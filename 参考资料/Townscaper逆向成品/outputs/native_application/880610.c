// RVA 0x880610 | Os.Utils.Bitwise$$SetBit
// PDB: Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
// Body: [[10880610, 10880632]]
// Direct callees:

void __cdecl
Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
          (uchar *param_1,int param_2,bool param_3,MethodInfo *param_4)

{
  if (!param_3) {
    *param_1 = *param_1 & ~(byte)(1 << (param_2 & 0x1fU));
    return;
  }
  *param_1 = *param_1 | (byte)(1 << (param_2 & 0x1fU));
  return;
}
