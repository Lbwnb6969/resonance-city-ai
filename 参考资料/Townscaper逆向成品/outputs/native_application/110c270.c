// RVA 0x110c270 | FuryStudios.FurySDK.Internal.DotNetCheckIfFileExists$$OnStarted
// PDB: DotNetCheckIfFileExists_OnStarted_mBEFE3D40DB9B7DCE1CE2B0606DD266C41624022E
// Body: [[1110c270, 1110c2b5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a710b0 File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B
// 10c9f6b0 AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_gshared

void __cdecl
DotNetCheckIfFileExists_OnStarted_mBEFE3D40DB9B7DCE1CE2B0606DD266C41624022E
          (DotNetCheckIfFileExists_t4BA9C4C51302C5958994A8DD7DAD201C42623C6B *param_1,
          MethodInfo *param_2)

{
  bool bVar1;

  if (DAT_11523e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_RuntimeMethod_var
              );
    DAT_11523e91 = '\x01';
  }
  bVar1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B
                    (param_1->___filePath_7,(MethodInfo *)0x0);
  AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_gshared
            ((AsyncRequest_1_t74C8BF280D89A76E9C365212CDF4A594128C37CD *)param_1,bVar1,
             AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_RuntimeMethod_var);
  return;
}
