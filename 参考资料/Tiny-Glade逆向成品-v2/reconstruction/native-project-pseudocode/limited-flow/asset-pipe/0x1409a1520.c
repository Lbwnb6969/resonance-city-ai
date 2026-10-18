// VA 0x1409a1520, PDB extent 897 bytes
// core::ptr::drop_in_place<enum2$<asset_pipe::texture::build_texture_assets::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<asset_pipe::texture::build_texture_assets::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 897 */

void pdb_1409a1520(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulonglong arg1;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong arg2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x71);
  if (cVar1 == '\0') {
    lVar5 = param_1[1];
    lVar4 = param_1[2];
    if (lVar4 != 0) {
      lVar7 = lVar5 + 0x20;
      do {
        if (*(ulonglong *)(lVar7 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(lVar7 + -0x18),*(ulonglong *)(lVar7 + -0x20),1);
        }
        pdb_14098ced0(lVar7);
        lVar7 = lVar7 + 0x70;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*param_1 == 0) {
      return;
    }
    uVar2 = GetProcessHeap(lVar5,*param_1 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(uVar2,0,lVar5);
    return;
  }
  if (cVar1 == '\x03') {
    pbVar3 = (byte *)param_1[0x15];
    puVar6 = (undefined8 *)param_1[0x16];
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(pbVar3);
    }
    if (puVar6[1] != 0) {
      pub_1406abac0(pbVar3,puVar6[1],puVar6[2]);
    }
    if (param_1[0xf] != 0) {
      pub_1406abac0((byte *)param_1[0x10],param_1[0xf],1);
    }
    pdb_140986550(param_1[0x18],(ulonglong)(param_1[0x1a] - param_1[0x18]) >> 6);
    if (param_1[0x19] == 0) goto LAB_1409a163c;
    pbVar3 = (byte *)param_1[0x17];
    arg1 = param_1[0x19] << 6;
    arg2 = 8;
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    pbVar3 = (byte *)param_1[0xf];
    puVar6 = (undefined8 *)param_1[0x10];
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(pbVar3);
    }
    arg1 = puVar6[1];
    if (arg1 == 0) goto LAB_1409a163c;
    arg2 = puVar6[2];
  }
  pub_1406abac0(pbVar3,arg1,arg2);
LAB_1409a163c:
  if (*(char *)((longlong)param_1 + 0x72) != '\0') {
    lVar5 = param_1[0xd];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(param_1[0xc] + 0x18);
      do {
        if (puVar6[-1] != 0) {
          pub_1406abac0((byte *)*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 10;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_1[0xb] != 0) {
      pub_1406abac0((byte *)param_1[0xc],param_1[0xb] * 0x50,0x10);
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x72) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  return;
}

