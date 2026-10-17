// RVA 0xe6bc60 | Placemaker.Graphs.Graph$$GetNewCorner
// PDB: Graph_GetNewCorner_mF02A51B4A63974E2AA2290B3DBDD93F731600FCB
// Body: [[10e6bc60, 10e6bc92]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10ae2b50 UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared

Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 * __cdecl
Graph_GetNewCorner_mF02A51B4A63974E2AA2290B3DBDD93F731600FCB
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,MethodInfo *param_3)

{
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *pCVar1;

  if (DAT_11522831 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UnityFunctions_GetNewObject_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_mDB906E87FE170CA0279C521C85ABC30DF170BB49_RuntimeMethod_var
              );
    DAT_11522831 = '\x01';
  }
  pCVar1 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)
           UnityFunctions_GetNewObject_TisRuntimeObject_mA14E611AB49243963CF26AB0DCA1EEC1BB87D953_gshared
                     (param_2,
                      UnityFunctions_GetNewObject_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_mDB906E87FE170CA0279C521C85ABC30DF170BB49_RuntimeMethod_var
                     );
  return pCVar1;
}
