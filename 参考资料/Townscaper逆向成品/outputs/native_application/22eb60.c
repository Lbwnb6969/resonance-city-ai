// RVA 0x22eb60 | Placemaker.ByteQube$$get_cost
// PDB: ByteQube_GetHashCode_m97D1744B126126CCFAD3C3EF6ED6172021ED109B
// Body: [[1022eb60, 1022ebb7]]
// Direct callees:

int __cdecl
ByteQube_GetHashCode_m97D1744B126126CCFAD3C3EF6ED6172021ED109B
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *param_1,MethodInfo *param_2)

{
  return param_1->___v0_0 + 0x80000000 +
         ((((uint)param_1->___v4_4 * 0x7f + (uint)param_1->___v3_3) * 0x7f + (uint)param_1->___v2_2)
          * 0x7f + (uint)param_1->___v1_1) * 0x7f + (uint)param_1->___v6_6 * -0x127c42ff +
         (uint)param_1->___v5_5 * -0x4ec27d81 + (uint)param_1->___v7_7 * -0x2ba53c81;
}
