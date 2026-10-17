// RVA 0x2fbb00 | Placemaker.Graphs.Square$$get_bitQuadId
// PDB: Square_get_bitQuadId_m0A67A48FD4B1A14B68D9F46992DF1EAF85654E99
// Body: [[102fbb00, 102fbb2d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
Square_get_bitQuadId_m0A67A48FD4B1A14B68D9F46992DF1EAF85654E99
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_1,MethodInfo *param_2)

{
  byte bVar1;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *pCVar2;
  int iVar3;

  pCVar2 = param_1->___c2_10;
  if (pCVar2 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) {
    bVar1 = param_1->___quadIndex_17;
    iVar3 = (pCVar2->___hexPos_4).___y_1;
    __return_storage_ptr__->___y_1 = (pCVar2->___hexPos_4).___x_0;
    __return_storage_ptr__->___x_0 = (uint)bVar1;
    __return_storage_ptr__->___z_2 = iVar3;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
