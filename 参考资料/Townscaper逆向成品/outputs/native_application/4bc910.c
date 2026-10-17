// RVA 0x4bc910 | CornerImage$$set_progress
// PDB: CornerImage_set_progress_mC8BFD04C882CFCF98E715FF11C7502BFAC3F1F59
// Body: [[104bc910, 104bc949]]
// Direct callees:

void __cdecl
CornerImage_set_progress_mC8BFD04C882CFCF98E715FF11C7502BFAC3F1F59
          (CornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2 *param_1,float param_2,
          MethodInfo *param_3)

{
  if (param_1->____progress_40 != param_2) {
    param_1->____progress_40 = param_2;
    (**(code **)(param_1->_padding_ + 0x18c))(param_1,*(undefined4 *)(param_1->_padding_ + 400));
  }
  return;
}
