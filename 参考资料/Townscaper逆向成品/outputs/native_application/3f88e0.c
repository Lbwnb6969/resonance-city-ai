// RVA 0x3f88e0 | Placemaker.WorldMaster$$OnStart
// PDB: WorldMaster_OnStart_mF003374D13345F5D4648CC9221FE948318A810F6
// Body: [[103f88e0, 103f89a5]]
// Direct callees:
// 103d5470 MaterialMaster_OnStart_m98413D7DE9960BC8F457384C5E8D2D076325B413
// 103d91d0 ModuleBuilder_OnStart_mF65B55B371FE735C0ED22F4218F48AC200DBE2B5
// 10413ff0 HoverHightlight_OnStart_m0E46F7EED63E03DC8D4D4DE076C9DECA4B35694C
// 1081c160 Sandbanker_OnStart_m22318071CB23E077DFD4248F64B2CA8FDE275B70
// 10872610 AoBaker_OnStart_m0861E5017A02643D0040AA32F7275BB5AE936AB8
// 108783e0 BigMeshMaster_OnStart_m60F214644DEE56BB57418EB83A84800B6F2E83B0
// 10880b90 BorderDrawer_OnStart_m9DE7FDDFFF59B276F8D5EBCD017F0FBE7445A701
// 10a06c30 ScreenshotCamera_OnStart_m3CA452BB22985F8917D0615B2548185527C52F3B
// 10a0aba0 ShadowBaker_OnStart_m10ACAAB45A859142BE3722EBB81BB681A7E4F7DC
// 10e733b0 Graph_OnStart_m5703171F10D1A6E809F709C97938BD7F7C9B73B7

void __cdecl
WorldMaster_OnStart_mF003374D13345F5D4648CC9221FE948318A810F6
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  if (param_1->___materialMaster_13 !=
      (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0) {
    MaterialMaster_OnStart_m98413D7DE9960BC8F457384C5E8D2D076325B413
              (param_1->___materialMaster_13,(MethodInfo *)0x0);
  }
  if (param_1->___aoBaker_11 != (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0) {
    AoBaker_OnStart_m0861E5017A02643D0040AA32F7275BB5AE936AB8
              (param_1->___aoBaker_11,(MethodInfo *)0x0);
  }
  if (param_1->___borderDrawer_20 != (BorderDrawer_t5CCF0A662FEFF553A6CDA812C86BCB079D1B618C *)0x0)
  {
    BorderDrawer_OnStart_m9DE7FDDFFF59B276F8D5EBCD017F0FBE7445A701
              (param_1->___borderDrawer_20,(MethodInfo *)0x0);
  }
  if (param_1->___graph_7 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
    Graph_OnStart_m5703171F10D1A6E809F709C97938BD7F7C9B73B7(param_1->___graph_7,(MethodInfo *)0x0);
  }
  if (param_1->___hoverHightlight_12 !=
      (HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A *)0x0) {
    HoverHightlight_OnStart_m0E46F7EED63E03DC8D4D4DE076C9DECA4B35694C
              (param_1->___hoverHightlight_12,(MethodInfo *)0x0);
  }
  if (param_1->___moduleBuilder_16 != (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0
     ) {
    ModuleBuilder_OnStart_mF65B55B371FE735C0ED22F4218F48AC200DBE2B5
              (param_1->___moduleBuilder_16,(MethodInfo *)0x0);
  }
  if (param_1->___sandbanker_22 != (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0) {
    Sandbanker_OnStart_m22318071CB23E077DFD4248F64B2CA8FDE275B70
              (param_1->___sandbanker_22,(MethodInfo *)0x0);
  }
  if (param_1->___screenshotCamera_26 !=
      (ScreenshotCamera_t4E8C267455459B778FADF5011EA58AACA4DA9D6B *)0x0) {
    ScreenshotCamera_OnStart_m3CA452BB22985F8917D0615B2548185527C52F3B
              (param_1->___screenshotCamera_26,(MethodInfo *)0x0);
  }
  if (param_1->___shadowBaker_31 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0) {
    ShadowBaker_OnStart_m10ACAAB45A859142BE3722EBB81BB681A7E4F7DC
              (param_1->___shadowBaker_31,(MethodInfo *)0x0);
  }
  if (param_1->___bigMeshMaster_36 != (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0
     ) {
    BigMeshMaster_OnStart_m60F214644DEE56BB57418EB83A84800B6F2E83B0
              (param_1->___bigMeshMaster_36,(MethodInfo *)0x0);
    return;
  }
  return;
}
