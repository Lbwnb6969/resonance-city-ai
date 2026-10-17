// RVA 0x303970 | Placemaker.TexturePngMaster$$OnApplicationFocus
// PDB: TexturePngMaster_OnApplicationFocus_m6124B08CF93C51BA2EA9270A76C763F7453DE8AF
// Body: [[10303970, 103039a3]]
// Direct callees:
// 10303ae0 TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092

void __cdecl
TexturePngMaster_OnApplicationFocus_m6124B08CF93C51BA2EA9270A76C763F7453DE8AF
          (TexturePngMaster_t66DC98DAEB68DC2C477793AAAD65DD4068F9A252 *param_1,bool param_2,
          MethodInfo *param_3)

{
  if (param_2) {
    TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092
              (param_1,param_1->___houseTex_5,(MethodInfo *)0x0);
    TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092
              (param_1,param_1->___typeTex_6,(MethodInfo *)0x0);
    TexturePngMaster_ReadOrWriteTexture_m90FD8B789720AC3CBB1FFA3C55646A49D5FA4092
              (param_1,param_1->___paletteTex_7,(MethodInfo *)0x0);
  }
  return;
}
