// VA 0x140901e70, PDB extent 482 bytes
// core::ptr::drop_in_place<enum2$<asset_pipe::texture::impl$2::run::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<asset_pipe::texture::impl$2::run::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 482 */

void pdb_140901e70(longlong param_1)

{
  byte *arg0;
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  if (*(char *)(param_1 + 0x118) != '\0') {
    if (*(char *)(param_1 + 0x118) != '\x03') {
      return;
    }
    arg0 = *(byte **)(param_1 + 0x108);
    puVar7 = *(undefined8 **)(param_1 + 0x110);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(arg0);
    }
    if (puVar7[1] != 0) {
      pub_1406abac0(arg0,puVar7[1],puVar7[2]);
    }
    pdb_1404ada40(param_1 + 0xd8);
    pdb_140969180(param_1 + 0xc0);
    *(undefined2 *)(param_1 + 0x119) = 0;
    pdb_14098a860(param_1 + 0x80);
    if (*(ulonglong *)(param_1 + 0x50) != 0) {
      pub_1406abac0(*(byte **)(param_1 + 0x58),*(ulonglong *)(param_1 + 0x50),1);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar5 = *(longlong *)(param_1 + 0x78);
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)(lVar3 + 0x40);
      do {
        if (puVar7[-1] != 0) {
          pub_1406abac0((byte *)*puVar7,puVar7[-1],1);
        }
        uVar4 = puVar7[-8];
        if ((!SBORROW8(0,uVar4)) && (uVar4 != 0)) {
          pub_1406abac0((byte *)puVar7[-7],uVar4,1);
        }
        puVar7 = puVar7 + 10;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      return;
    }
    uVar4 = *(longlong *)(param_1 + 0x68) * 0x50;
    uVar6 = 0x10;
code_r0x0001406abac0:
    lVar5 = lVar3;
    if (0x10 < uVar6) {
      lVar5 = *(longlong *)(lVar3 + -8);
    }
    uVar2 = GetProcessHeap(lVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(uVar2,0,lVar5);
    return;
  }
  pdb_14098ce10();
  plVar1 = *(longlong **)(param_1 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pdb_140dd78e0((undefined8 *)(param_1 + 0x30));
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pdb_140dd7630(param_1 + 0x38);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      puVar7 = *(undefined8 **)(param_1 + 0x48);
      if ((code *)*puVar7 != (code *)0x0) {
        (*(code *)*puVar7)((puVar7[2] - 1 & 0xfffffffffffffff0) + lVar3 + 0x10);
      }
      if (lVar3 != -1) {
        LOCK();
        plVar1 = (longlong *)(lVar3 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar6 = 8;
          if (8 < (ulonglong)puVar7[2]) {
            uVar6 = puVar7[2];
          }
          uVar4 = -uVar6 & puVar7[1] + uVar6 + 0xf;
          if (uVar4 != 0) goto code_r0x0001406abac0;
        }
      }
      return;
    }
  }
  return;
}

