// RVA 0xe12470 | Placemaker.GridGenerator$$GetStartingHex
// PDB: GridGenerator_GetStartingHex_m0CA5A5091AEA04B9CBCAD4612446E536EA9D1A8D
// Body: [[10e12470, 10e124c5]]
// Direct callees:
// 10192150 memset
// 1040f270 HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
// 1040f470 HexOnionIterator_get_dualPos2_mAF7340B572CC5A19444A88CE4590A9726C63686F

int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 __cdecl
GridGenerator_GetStartingHex_m0CA5A5091AEA04B9CBCAD4612446E536EA9D1A8D
          (int param_1,MethodInfo *param_2)

{
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar1;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar2;
  HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B local_3c;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_10;

  memset((uchar *)&local_3c,'\0',0x2c);
  for (; 0 < param_1; param_1 = param_1 + -1) {
    HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
              (&local_10,&local_3c,(MethodInfo *)0x0);
  }
  iVar1 = HexOnionIterator_get_dualPos2_mAF7340B572CC5A19444A88CE4590A9726C63686F
                    (&local_3c,(MethodInfo *)0x0);
  iVar2.___x_0 = iVar1.___x_0 * 0x48;
  iVar2.___y_1 = iVar1.___y_1 * 0x48;
  return iVar2;
}
