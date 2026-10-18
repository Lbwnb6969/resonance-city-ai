// VA 0x140a6d980, PDB extent 734 bytes
// country_core::input::input_stream::InputStream::drop_oldest_sync_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::input_stream::InputStream::drop_oldest_sync_point
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 734 */

void pdb_140a6d980(ulonglong *param_1)

{
  byte *arg0;
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uStack_118;
  longlong lStack_110;
  byte *pbStack_108;
  longlong lStack_f8;
  byte *pbStack_f0;
  
  if (param_1[3] != 0) {
    uVar3 = param_1[2];
    uVar9 = *param_1;
    uVar4 = param_1[1];
    uVar11 = 0;
    if (uVar9 <= uVar3 + 1) {
      uVar11 = uVar9;
    }
    uVar11 = (uVar3 - uVar11) + 1;
    param_1[2] = uVar11;
    uStack_118 = param_1[3] - 1;
    param_1[3] = uStack_118;
    lVar2 = uVar3 * 0x68;
    lVar6 = *(longlong *)(uVar4 + lVar2);
    if (!SBORROW8(0,lVar6)) {
      arg0 = *(byte **)(uVar4 + 8 + lVar2);
      lVar2 = *(longlong *)(uVar4 + 0x10 + lVar2);
      if (lVar2 != 0) {
        pbVar8 = arg0 + 8;
        do {
          if (*(longlong *)(pbVar8 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar8,*(longlong *)(pbVar8 + -8) * 0x18,8);
          }
          pbVar8 = pbVar8 + 0x20;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      if (lVar6 != 0) {
        pub_1406abac0(arg0,lVar6 << 5,8);
      }
    }
    if (uStack_118 != 0) {
      bVar1 = false;
      uVar3 = 0;
      if (uVar9 <= uVar11) {
        uVar3 = uVar9;
      }
      uVar3 = *(ulonglong *)((uVar11 - uVar3) * 0x68 + uVar4 + 0x60);
      goto joined_r0x000140a6da9b;
    }
  }
  bVar1 = true;
  uStack_118 = 0;
  uVar3 = param_1[7];
joined_r0x000140a6da9b:
  if (uVar3 != 0) {
    uVar9 = param_1[7];
    uVar4 = param_1[4];
    uVar11 = param_1[5];
    uVar10 = param_1[6];
    uVar7 = uVar3;
    do {
      uVar9 = uVar9 - 1;
      if (uVar9 == 0xffffffffffffffff) {
        lStack_110 = -0x8000000000000000;
LAB_140a6dc3b:
        pdb_1400dbd00(&lStack_110);
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_1430410d0,0x33,&UNK_143041108);
      }
      uVar5 = uVar4;
      if (uVar10 + 1 < uVar4) {
        uVar5 = 0;
      }
      uVar5 = (uVar10 - uVar5) + 1;
      param_1[6] = uVar5;
      param_1[7] = uVar9;
      pub_142e32760(&lStack_110,uVar10 * 0xd0 + uVar11,0xd0);
      if (SBORROW8(0,lStack_110)) goto LAB_140a6dc3b;
      if (lStack_110 != 0) {
        pub_1406abac0(pbStack_108,lStack_110 * 0xc,4);
      }
      if (lStack_f8 != 0) {
        pub_1406abac0(pbStack_f0,lStack_f8 << 2,4);
      }
      uVar7 = uVar7 - 1;
      uVar10 = uVar5;
    } while (uVar7 != 0);
  }
  if (bVar1) {
    lVar6 = 0;
    uVar9 = 0;
    lVar2 = 0;
  }
  else {
    uVar9 = *param_1;
    uVar4 = 0;
    if (uVar9 <= param_1[2]) {
      uVar4 = uVar9;
    }
    lVar6 = param_1[2] - uVar4;
    lVar2 = uStack_118 - (uVar9 - lVar6);
    if (uStack_118 < uVar9 - lVar6 || lVar2 == 0) {
      uVar9 = uStack_118 + lVar6;
      lVar2 = 0;
    }
  }
  uVar4 = param_1[1];
  uVar10 = lVar6 * 0x68 + uVar4;
  uVar7 = uVar9 * 0x68 + uVar4;
  uVar11 = lVar2 * 0x68 + uVar4;
  uVar9 = uVar4;
  if (uVar10 == uVar7) goto LAB_140a6dbe0;
  do {
    do {
      if (*(ulonglong *)(uVar10 + 0x60) < uVar3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430410b8);
      }
      *(ulonglong *)(uVar10 + 0x60) = *(ulonglong *)(uVar10 + 0x60) - uVar3;
      uVar10 = uVar10 + 0x68;
      uVar9 = uVar4;
    } while (uVar10 != uVar7);
LAB_140a6dbe0:
    uVar4 = uVar10;
    uVar7 = uVar11;
    uVar11 = uVar4;
    uVar10 = uVar9;
  } while (uVar9 != uVar7);
  return;
}

