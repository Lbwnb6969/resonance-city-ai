// VA 0x1424e6650, PDB extent 481 bytes
// core::ptr::drop_in_place<enum2$<clutter_pack_pipe::impl$11::run::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<clutter_pack_pipe::impl$11::run::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 481 */

void pdb_1424e6650(longlong param_1)

{
  byte *arg0;
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_1 + 0xd8) != '\0') {
    if (*(char *)(param_1 + 0xd8) == '\x03') {
      arg0 = *(byte **)(param_1 + 0xa0);
      puVar1 = *(undefined8 **)(param_1 + 0xa8);
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(arg0);
      }
      if (puVar1[1] != 0) {
        pub_1406abac0(arg0,puVar1[1],puVar1[2]);
      }
      *(undefined2 *)(param_1 + 0xda) = 0;
      pdb_140966f40(param_1 + 0xb8);
      plVar2 = *(longlong **)(param_1 + 0xb0);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        pdb_140c7a060(param_1 + 0xb0);
      }
      pdb_14098a860(param_1 + 0x80);
      *(undefined1 *)(param_1 + 0xd9) = 0;
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    pub_1406abac0(*(byte **)(param_1 + 0x18),*(longlong *)(param_1 + 0x10) << 4,0x10);
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    pdb_140dd78e0((undefined8 *)(param_1 + 0x30));
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140dd7630(param_1 + 0x38);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x40);
      puVar1 = *(undefined8 **)(param_1 + 0x48);
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)((puVar1[2] - 1 & 0xfffffffffffffff0) + lVar4 + 0x10);
      }
      if (lVar4 != -1) {
        LOCK();
        plVar2 = (longlong *)(lVar4 + 8);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          uVar5 = 8;
          if (8 < (ulonglong)puVar1[2]) {
            uVar5 = puVar1[2];
          }
          if ((-uVar5 & puVar1[1] + uVar5 + 0xf) != 0) {
            if (0x10 < uVar5) {
              lVar4 = *(longlong *)(lVar4 + -8);
            }
            uVar3 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            HeapFree(uVar3,0,lVar4);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}

