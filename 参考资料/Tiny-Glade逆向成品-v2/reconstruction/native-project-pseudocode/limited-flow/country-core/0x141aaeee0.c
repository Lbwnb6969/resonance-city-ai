// VA 0x141aaeee0, PDB extent 641 bytes
// core::ptr::drop_in_place<enum2$<country_core::startup::bake_mod_textures::bake_all::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/bake_mod_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<country_core::startup::bake_mod_textures::bake_all::async_fn_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/bake_mod_textures.rs
   Extent: 641 */

void pdb_141aaeee0(longlong *param_1)

{
  longlong lVar1;
  byte *arg0;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((char)param_1[0x1f] != '\0') {
    if ((char)param_1[0x1f] == '\x03') {
      arg0 = (byte *)param_1[0x1d];
      puVar2 = (undefined8 *)param_1[0x1e];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(arg0);
      }
      if (puVar2[1] != 0) {
        pub_1406abac0(arg0,puVar2[1],puVar2[2]);
      }
      if (param_1[0x1a] != 0) {
        pub_1406abac0((byte *)param_1[0x1b],param_1[0x1a],1);
      }
      *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
      pdb_140985aa0(param_1[0x12],
                    ((ulonglong)(param_1[0x14] - param_1[0x12]) >> 3) * -0x3333333333333333);
      if (param_1[0x13] != 0) {
        pub_1406abac0((byte *)param_1[0x11],param_1[0x13] * 0x28,8);
      }
      pdb_14097e630(param_1 + 0xe);
      *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
      pdb_14098a860(param_1 + 7);
      *(undefined1 *)((longlong)param_1 + 0xfb) = 0;
    }
    return;
  }
  lVar1 = param_1[1];
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    lVar4 = lVar1 + 0x20;
    do {
      if (*(ulonglong *)(lVar4 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(lVar4 + -0x18),*(ulonglong *)(lVar4 + -0x20),1);
      }
      pdb_14098ced0(lVar4);
      lVar4 = lVar4 + 0x70;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  uVar3 = GetProcessHeap(lVar1,*param_1 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar3,0,lVar1);
  return;
}

