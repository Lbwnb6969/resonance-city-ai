// RVA 0x880550 | Os.Utils.Bitwise$$GetByte
// PDB: Bitwise_GetByte_m401A6C322CEC1A11FCCA7C1D56B75D5807C1527F
// Body: [[10880550, 108805cd]]
// Direct callees:

uchar __cdecl
Bitwise_GetByte_m401A6C322CEC1A11FCCA7C1D56B75D5807C1527F
          (bool param_1,bool param_2,bool param_3,bool param_4,bool param_5,bool param_6,
          bool param_7,bool param_8,MethodInfo *param_9)

{
  byte bVar1;
  byte bVar2;

  bVar2 = param_1 | 2;
  if (!param_2) {
    bVar2 = param_1;
  }
  bVar1 = bVar2 | 4;
  if (!param_3) {
    bVar1 = bVar2;
  }
  bVar2 = bVar1 | 8;
  if (!param_4) {
    bVar2 = bVar1;
  }
  bVar1 = bVar2 | 0x10;
  if (!param_5) {
    bVar1 = bVar2;
  }
  bVar2 = bVar1 | 0x20;
  if (!param_6) {
    bVar2 = bVar1;
  }
  bVar1 = bVar2 | 0x40;
  if (!param_7) {
    bVar1 = bVar2;
  }
  bVar2 = bVar1 | 0x80;
  if (!param_8) {
    bVar2 = bVar1;
  }
  return bVar2;
}
