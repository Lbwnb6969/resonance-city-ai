// RVA 0xc79340 | Placemaker.PropPlacer$$GetPropIterator<ButterflyLanding>
// PDB: PropPlacer_GetPropIterator_TisRuntimeObject_m389B3D39E0E2A365927A01DF94D6AACFAC1531A3_gshared
// Body: [[10c79340, 10c7938c]]
// Direct callees:
// 10192150 memset
// 1050dba0 PropRadiusIterator_1__ctor_mBD0807D309B64C5982B153A3518D795F55CD09FB_gshared

PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B * __cdecl
PropPlacer_GetPropIterator_TisRuntimeObject_m389B3D39E0E2A365927A01DF94D6AACFAC1531A3_gshared
          (PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B *__return_storage_ptr__,
          PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,float param_3,
          MethodInfo *param_4)

{
  memset((uchar *)__return_storage_ptr__,'\0',0x44);
  PropRadiusIterator_1__ctor_mBD0807D309B64C5982B153A3518D795F55CD09FB_gshared
            (__return_storage_ptr__,param_2,param_3,param_1,
             (param_4->field6_0x18).rgctx_data[1].method);
  return __return_storage_ptr__;
}
