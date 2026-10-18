// VA 0x140a59450, PDB extent 663 bytes
// country_core::asset_libraries::shader_library::AssetShaderLibrary::register_vertex_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/shader_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::shader_library::AssetShaderLibrary::register_vertex_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/shader_library.rs
   Extent: 663 */

ulonglong pdb_140a59450(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte *arg0;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lStack_68;
  ulonglong uStack_50;
  
  uStack_50 = param_1[1];
  uVar3 = param_1[2];
  if (uVar3 != 0) {
    arg0 = (byte *)param_2[1];
    lStack_68 = param_2[2];
    if (lStack_68 == 0) {
      uVar5 = 0;
      lVar7 = 0;
      do {
        if (*(longlong *)(uStack_50 + 0x10 + lVar7) == 0) {
          lVar7 = *param_2;
          if (lVar7 != 0) {
LAB_140a59698:
            pub_1406abac0(arg0,lVar7 << 5,8);
          }
          goto LAB_140a59660;
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar3 * 0x18 != lVar7);
    }
    else {
      uVar5 = 0;
      uVar12 = uStack_50;
      do {
        if (*(longlong *)(uVar12 + 0x10) == lStack_68) {
          lVar7 = *(longlong *)(uVar12 + 8);
          lVar11 = 0;
          while (lVar6 = lVar11 * 0x20,
                *(int *)(lVar7 + 0x18 + lVar6) == *(int *)(arg0 + lVar6 + 0x18)) {
            lVar1 = lVar6 + lVar7;
            lVar8 = *(longlong *)(lVar1 + 0x10);
            if (lVar8 != *(longlong *)(arg0 + lVar6 + 0x10)) break;
            if (lVar8 != 0) {
              lVar6 = *(longlong *)(arg0 + lVar6 + 8);
              lVar1 = *(longlong *)(lVar1 + 8);
              lVar10 = 0x14;
              do {
                if ((((*(longlong *)(lVar1 + -0xc + lVar10) != *(longlong *)(lVar6 + -0xc + lVar10))
                     || (iVar4 = pub_142e32750(*(undefined8 *)(lVar1 + -0x14 + lVar10),
                                               *(undefined8 *)(lVar6 + -0x14 + lVar10)), iVar4 != 0)
                     ) || (*(int *)(lVar1 + -4 + lVar10) != *(int *)(lVar6 + -4 + lVar10))) ||
                   (*(char *)(lVar1 + lVar10) != *(char *)(lVar6 + lVar10))) goto LAB_140a594d0;
                lVar10 = lVar10 + 0x18;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
            lVar11 = lVar11 + 1;
            if (lVar11 == lStack_68) {
              pbVar9 = arg0 + 8;
              do {
                if (*(longlong *)(pbVar9 + -8) != 0) {
                  pub_1406abac0(*(byte **)pbVar9,*(longlong *)(pbVar9 + -8) * 0x18,8);
                }
                pbVar9 = pbVar9 + 0x20;
                lStack_68 = lStack_68 + -1;
              } while (lStack_68 != 0);
              lVar7 = *param_2;
              if (lVar7 == 0) goto LAB_140a59660;
              goto LAB_140a59698;
            }
          }
        }
LAB_140a594d0:
        uVar12 = uVar12 + 0x18;
        uVar5 = uVar5 + 1;
      } while (uVar12 != uVar3 * 0x18 + uStack_50);
    }
  }
  if (uVar3 == *param_1) {
    pdb_142d7e830(param_1);
    uStack_50 = param_1[1];
  }
  *(longlong *)(uStack_50 + 0x10 + uVar3 * 0x18) = param_2[2];
  lVar7 = param_2[1];
  plVar2 = (longlong *)(uStack_50 + uVar3 * 0x18);
  *plVar2 = *param_2;
  plVar2[1] = lVar7;
  param_1[2] = uVar3 + 1;
  uVar5 = uVar3;
LAB_140a59660:
  return uVar5 & 0xffffffff;
}

