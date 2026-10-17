// RVA 0x22e610 | Os.Utils.ByteFloat3$$GetHashCode
// PDB: ByteFloat3_GetHashCode_m1EC9195009E4F6282F00EE957BD09527E98C4609
// Body: [[1022e610, 1022e632]]
// Direct callees:

int __cdecl
ByteFloat3_GetHashCode_m1EC9195009E4F6282F00EE957BD09527E98C4609
          (ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 *param_1,MethodInfo *param_2)

{
  return ((uint)param_1->___z_2 * 0xff + (uint)param_1->___y_1) * 0xff + (uint)param_1->___x_0;
}
