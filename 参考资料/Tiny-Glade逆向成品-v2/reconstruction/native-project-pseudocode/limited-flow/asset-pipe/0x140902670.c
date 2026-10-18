// VA 0x140902670, PDB extent 382 bytes
// core::ptr::drop_in_place<enum2$<asset_pipe::texture::impl$0::load::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<asset_pipe::texture::impl$0::load::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 382 */

void pdb_140902670(longlong param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x58) == '\x03') {
    if (((*(char *)(param_1 + 0xc0) == '\x03') && (*(char *)(param_1 + 0xb8) == '\x03')) &&
       (*(char *)(param_1 + 0xb1) == '\x03')) {
      pbVar1 = *(byte **)(param_1 + 0x90);
      puVar2 = *(undefined8 **)(param_1 + 0x98);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(pbVar1);
      }
      if (puVar2[1] != 0) {
        pub_1406abac0(pbVar1,puVar2[1],puVar2[2]);
      }
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x58) == '\x04') {
    pbVar1 = *(byte **)(param_1 + 0x60);
    puVar2 = *(undefined8 **)(param_1 + 0x68);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(pbVar1);
    }
    if (puVar2[1] != 0) {
      pub_1406abac0(pbVar1,puVar2[1],puVar2[2]);
    }
    plVar3 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(ulonglong *)(lVar4 + 0x10) != 0) {
        pub_1406abac0(*(byte **)(lVar4 + 0x18),*(ulonglong *)(lVar4 + 0x10),1);
      }
      if ((*(byte **)(lVar4 + 0x28) != (byte *)0x0) && (*(ulonglong *)(lVar4 + 0x30) != 0)) {
        pub_1406abac0(*(byte **)(lVar4 + 0x28),*(ulonglong *)(lVar4 + 0x30),1);
      }
      if (lVar4 != -1) {
        LOCK();
        plVar3 = (longlong *)(lVar4 + 8);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          uVar5 = GetProcessHeap(lVar4,0x38);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          HeapFree(uVar5,0,lVar4);
          return;
        }
      }
      return;
    }
  }
  return;
}

