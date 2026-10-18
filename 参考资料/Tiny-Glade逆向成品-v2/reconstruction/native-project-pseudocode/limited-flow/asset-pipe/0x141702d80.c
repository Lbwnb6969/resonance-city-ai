// VA 0x141702d80, PDB extent 801 bytes
// core::ptr::drop_in_place<enum2$<asset_pipe::texture::build_texture_assets::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<asset_pipe::texture::build_texture_assets::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 801 */

void pdb_141702d80(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulonglong arg1;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  ulonglong arg2;
  longlong lVar8;
  
  cVar1 = *(char *)((longlong)param_1 + 0x71);
  if (cVar1 == '\0') {
    lVar7 = param_1[1];
    lVar8 = param_1[2];
    if (lVar8 != 0) {
      lVar5 = lVar7 + 0x20;
      do {
        if (*(ulonglong *)(lVar5 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(lVar5 + -0x18),*(ulonglong *)(lVar5 + -0x20),1);
        }
        pdb_14098ced0(lVar5);
        lVar5 = lVar5 + 0x70;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*param_1 != 0) {
      uVar3 = GetProcessHeap(lVar7,*param_1 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      HeapFree(uVar3,0,lVar7);
      return;
    }
    return;
  }
  if (cVar1 == '\x03') {
    pbVar4 = (byte *)param_1[0x15];
    puVar2 = (undefined8 *)param_1[0x16];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(pbVar4);
    }
    if (puVar2[1] != 0) {
      pub_1406abac0(pbVar4,puVar2[1],puVar2[2]);
    }
    if (param_1[0xf] != 0) {
      pub_1406abac0((byte *)param_1[0x10],param_1[0xf],1);
    }
    pdb_140986550(param_1[0x18],(ulonglong)(param_1[0x1a] - param_1[0x18]) >> 6);
    if (param_1[0x19] == 0) goto LAB_141702e9c;
    pbVar4 = (byte *)param_1[0x17];
    arg1 = param_1[0x19] << 6;
    arg2 = 8;
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    pbVar4 = (byte *)param_1[0xf];
    puVar2 = (undefined8 *)param_1[0x10];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(pbVar4);
    }
    arg1 = puVar2[1];
    if (arg1 == 0) goto LAB_141702e9c;
    arg2 = puVar2[2];
  }
  pub_1406abac0(pbVar4,arg1,arg2);
LAB_141702e9c:
  if (*(char *)((longlong)param_1 + 0x72) != '\0') {
    pbVar4 = (byte *)param_1[0xc];
    lVar7 = param_1[0xd];
    if (lVar7 != 0) {
      pbVar6 = pbVar4 + 0x18;
      do {
        if (*(ulonglong *)(pbVar6 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar6,*(ulonglong *)(pbVar6 + -8),1);
        }
        pbVar6 = pbVar6 + 0x50;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (param_1[0xb] != 0) {
      pub_1406abac0(pbVar4,param_1[0xb] * 0x50,0x10);
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x72) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  return;
}

