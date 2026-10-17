// RVA 0xe77bd0 | Placemaker.Graphs.Graph$$SampleNormal
// PDB: Graph_SampleNormal_mDEB4A60C6490D39A5FC90D07445735609449202E
// Body: [[10e77bd0, 10e77c37]]
// Direct callees:
// 10e75050 Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
Graph_SampleNormal_mDEB4A60C6490D39A5FC90D07445735609449202E
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar4;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_14;

  pVVar4 = Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6
                     (&local_14,param_1,param_2,(MethodInfo *)0x0);
  fVar1 = (pVVar4->___Item1_0).___y_3;
  fVar2 = (pVVar4->___Item1_0).___z_4;
  fVar3 = pVVar4->___Item2_1;
  __return_storage_ptr__->___x_2 = (pVVar4->___Item1_0).___x_2 * fVar3;
  __return_storage_ptr__->___y_3 = fVar1 * fVar3;
  __return_storage_ptr__->___z_4 = fVar2 * fVar3;
  return __return_storage_ptr__;
}
