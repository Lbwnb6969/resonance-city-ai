// RVA 0xe6bae0 | Placemaker.Graphs.Graph$$GetMaxExtents
// PDB: Graph_GetMaxExtents_m6721C88B5586B09C182FE4F400226FCCEA14C037
// Body: [[10e6bae0, 10e6bc5e]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 103af0c0 Position__ctor_m3F6A5C351510265E5FCE79C95B2F4CF15BB21F35
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a43fd0 Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD

ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E __cdecl
Graph_GetMaxExtents_m6721C88B5586B09C182FE4F400226FCCEA14C037
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,int param_2,MethodInfo *param_3)

{
  int iVar1;
  Il2CppObject *pIVar2;
  float fVar3;
  float fVar4;
  ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E local_c;

  if (DAT_1152282e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var
              );
    DAT_1152282e = '\x01';
  }
  local_c.___Item2_1 =
       (int)Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                      (64.0,256.0,(float)param_2,(MethodInfo *)0x0);
  iVar1 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                    (param_1.___c1_1.___x_0 - param_1.___c0_0.___x_0,
                     param_1.___c1_1.___y_1 - param_1.___c0_0.___y_1,(MethodInfo *)0x0);
  iVar1 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                    (iVar1,param_1.___c1_1.___z_2 - param_1.___c0_0.___z_2,(MethodInfo *)0x0);
  fVar4 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    (256.0,512.0,(float)iVar1 * __real_3f000000,(MethodInfo *)0x0);
  param_2 = local_c.___Item2_1;
  if (__real_3f800000 < fVar4 + (float)local_c.___Item2_1) {
    fVar3 = __real_3f800000 / (fVar4 + (float)local_c.___Item2_1);
    fVar4 = fVar4 * fVar3;
    param_2 = (int)(fVar3 * (float)local_c.___Item2_1);
  }
  fVar4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(256.0,64.0,fVar4,(MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)
           Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(fVar4,(MethodInfo *)0x0);
  fVar4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                    (512.0,256.0,(float)param_2,(MethodInfo *)0x0);
  iVar1 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(fVar4,(MethodInfo *)0x0);
  local_c.___Item1_0 = 0;
  local_c.___Item2_1 = 0;
  Position__ctor_m3F6A5C351510265E5FCE79C95B2F4CF15BB21F35
            ((Position_tD9D8C9ECCEF2EC71D72D9BEE2C4A332E402E6866 *)&local_c,iVar1,pIVar2,
             ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
  return local_c;
}
