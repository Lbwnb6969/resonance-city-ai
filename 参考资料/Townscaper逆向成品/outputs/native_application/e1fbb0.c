// RVA 0xe1fbb0 | Placemaker.GridGenerator$$UnmotivateCluster
// PDB: GridGenerator_UnmotivateCluster_m8607EAC24BA38C3D43B11F0E5D01172F8E8BE8EF
// Body: [[10e1fbb0, 10e1fbec]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103dcef0 MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D
// 10e1faf0 GridGenerator_UnmotivateClusterChildren_mB300EC8BB32EA947A751C1D01217C12F2DE58F33

void __cdecl
GridGenerator_UnmotivateCluster_m8607EAC24BA38C3D43B11F0E5D01172F8E8BE8EF
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *param_2,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_3,MethodInfo *param_4)

{
  int iVar1;

  if (param_2 != (HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *)0x0) {
    iVar1 = MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D
                      (&param_2->___motivations_1,param_3,(MethodInfo *)0x0);
    if ((iVar1 == 0) && (param_2->___done_4 == false)) {
      GridGenerator_UnmotivateClusterChildren_mB300EC8BB32EA947A751C1D01217C12F2DE58F33
                (param_1,param_2,(MethodInfo *)0x0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
