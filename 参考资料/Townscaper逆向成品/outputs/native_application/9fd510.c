// RVA 0x9fd510 | Placemaker.SaveCardsHandler$$SetCurrentCardImage
// PDB: SaveCardsHandler_SetCurrentCardImage_m9C0E72A60833ACD805807ECE31D2B25653AE6E70
// Body: [[109fd510, 109fd628]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102fd7e0 StorageUtils_LastSaveIsEmpty_mB1A73C5A22787235F0E4017361C0482C405308DA
// 109fb1f0 SaveCamera_GetImage_m5D5B448C8044324FBAB04D15DE504656A3840D18
// 10a39ea0 Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10c6a920 RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99
// 11149190 ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477

void __cdecl
SaveCardsHandler_SetCurrentCardImage_m9C0E72A60833ACD805807ECE31D2B25653AE6E70
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveCamera_t7E86B5A1216D55E6BA708D6AA32DDA610977BD0E *pSVar3;
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar4;
  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *pRVar5;
  bool bVar6;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar7;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar8;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_14;

  if (param_1->___storage_16 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) {
    bVar6 = StorageUtils_LastSaveIsEmpty_mB1A73C5A22787235F0E4017361C0482C405308DA
                      (param_1->___storage_16,(MethodInfo *)0x0);
    if (bVar6) {
      return;
    }
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pOVar1 = param_1->___master_4->___orbitalCamera_15,
       pOVar1 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) {
      Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                (pOVar1->___rotationY_10 * __real_437f0000,0.0,255.0,(MethodInfo *)0x0);
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         ((pWVar2 = param_1->___master_4->___worldMaster_5,
          pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
          (pSVar3 = pWVar2->___saveCamera_25,
          pSVar3 != (SaveCamera_t7E86B5A1216D55E6BA708D6AA32DDA610977BD0E *)0x0)))) {
        pBVar7 = SaveCamera_GetImage_m5D5B448C8044324FBAB04D15DE504656A3840D18
                           (pSVar3,(SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0,
                            (MethodInfo *)0x0);
        pSVar4 = param_1->___lastSaveCard_15;
        if ((pSVar4 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
           (pSVar4->___saveData_8 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)) {
          pSVar4->___saveData_8->___bigJpg_6 = pBVar7;
          if (pSVar4->___saveData_8 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
            ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477
                      (pSVar4->___bigTexture_5,pSVar4->___saveData_8->___bigJpg_6,(MethodInfo *)0x0)
            ;
            pRVar5 = pSVar4->___image_4;
            pCVar8 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E
                               (&local_14,(MethodInfo *)0x0);
            if (pRVar5 != (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)0x0) {
              (**(code **)(pRVar5->_padding_ + 0x174))
                        (pRVar5,pCVar8->___r_0,pCVar8->___g_1,pCVar8->___b_2,pCVar8->___a_3,
                         *(undefined4 *)(pRVar5->_padding_ + 0x178));
              if (pSVar4->___image_4 != (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)0x0) {
                RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99
                          (pSVar4->___image_4,
                           (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
                           pSVar4->___bigTexture_5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
