// RVA 0x110d880 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs.PlayerPrefsLoadRequest$$.ctor
// PDB: PlayerPrefsLoadRequest__ctor_m42EE4202765647C77DCA769664B0AFF5D98E43FC
// Body: [[1110d880, 1110d8c1]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10c9f6f0 AsyncRequest_1__ctor_m9959B461E4FE570F2FBC3137A0E3416345C50110_gshared

void __cdecl
PlayerPrefsLoadRequest__ctor_m42EE4202765647C77DCA769664B0AFF5D98E43FC
          (PlayerPrefsLoadRequest_t6616BA8C95AADA3039553787E6DD69235EF81D8F *param_1,
          ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 param_2,String_t *param_3,
          MethodInfo *param_4)

{
  if (DAT_11523ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequest_1__ctor_m0FC9951A4CB2CECE1E094AA4B93CDE7A7967A2DA_RuntimeMethod_var
              );
    DAT_11523ea7 = '\x01';
  }
  AsyncRequest_1__ctor_m9959B461E4FE570F2FBC3137A0E3416345C50110_gshared
            ((AsyncRequest_1_t74C8BF280D89A76E9C365212CDF4A594128C37CD *)param_1,
             AsyncRequest_1__ctor_m0FC9951A4CB2CECE1E094AA4B93CDE7A7967A2DA_RuntimeMethod_var);
  (param_1->___container_7).___id_0 = param_2.___id_0;
  param_1->___filename_8 = param_3;
  return;
}
