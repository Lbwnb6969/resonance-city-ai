// RVA 0xe124d0 | Placemaker.GridGenerator$$GetSubdivisions
// PDB: GridGenerator_GetSubdivisions_m499E231AD2A5CA5897C310C8A0B74CC0EE58832A
// Body: [[10e124d0, 10e1251c]]
// Direct callees:
// 10a437e0 Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0

int __cdecl
GridGenerator_GetSubdivisions_m499E231AD2A5CA5897C310C8A0B74CC0EE58832A
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  int iVar1;
  uint uVar2;

  iVar1 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0
                    ((param_2.___x_0 + param_2.___y_1 + 0x48) / 0xb,(MethodInfo *)0x0);
  uVar2 = iVar1 + 3U & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if (uVar2 == 0) {
    return 1;
  }
  return 3 - (uint)(uVar2 != 1);
}
