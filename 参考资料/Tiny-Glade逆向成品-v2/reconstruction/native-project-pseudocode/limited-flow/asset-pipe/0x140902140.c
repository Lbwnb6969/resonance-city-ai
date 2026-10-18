// VA 0x140902140, PDB extent 657 bytes
// core::ptr::drop_in_place<enum2$<asset_pipe::texture::impl$1::run::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<asset_pipe::texture::impl$1::run::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 657 */

longlong * pdb_140902140(ulonglong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte *arg0;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  bVar2 = (byte)param_1[0x35];
  plVar4 = (longlong *)(ulonglong)bVar2;
  if (bVar2 == 0) {
    if (param_1[7] != 0) {
      pub_1406abac0((byte *)param_1[8],param_1[7],1);
    }
    uVar6 = *param_1;
    if ((!SBORROW8(0,uVar6)) && (uVar6 != 0)) {
      pub_1406abac0((byte *)param_1[1],uVar6,1);
    }
    plVar4 = (longlong *)param_1[10];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140dd78e0(param_1 + 10);
    }
    plVar4 = (longlong *)param_1[0xb];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pdb_140dd7630(param_1 + 0xb);
      }
    }
    plVar4 = (longlong *)param_1[0xc];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        uVar6 = param_1[0xc];
        puVar3 = (undefined8 *)param_1[0xd];
        plVar4 = (longlong *)0x0;
        if ((code *)*puVar3 != (code *)0x0) {
          plVar4 = (longlong *)
                   (*(code *)*puVar3)((puVar3[2] - 1 & 0xfffffffffffffff0) + uVar6 + 0x10);
        }
        if (uVar6 != 0xffffffffffffffff) {
          LOCK();
          plVar1 = (longlong *)(uVar6 + 8);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            uVar7 = 8;
            if (8 < (ulonglong)puVar3[2]) {
              uVar7 = puVar3[2];
            }
            plVar4 = (longlong *)(puVar3[1] + uVar7 + 0xf);
            if ((-uVar7 & (ulonglong)plVar4) != 0) goto code_r0x0001406abac0;
          }
        }
        return plVar4;
      }
    }
    return plVar4;
  }
  if (bVar2 == 3) {
    if ((char)param_1[0x27] == '\x04') {
      arg0 = (byte *)param_1[0x28];
      puVar3 = (undefined8 *)param_1[0x29];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(arg0);
      }
      if (puVar3[1] != 0) {
        pub_1406abac0(arg0,puVar3[1],puVar3[2]);
      }
      plVar4 = (longlong *)param_1[0x22];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pdb_141746810(param_1 + 0x22);
      }
    }
    else if (((((char)param_1[0x27] == '\x03') && ((char)param_1[0x34] == '\x03')) &&
             ((char)param_1[0x33] == '\x03')) && (*(char *)((longlong)param_1 + 0x191) == '\x03')) {
      pdb_1400d68e0(param_1 + 0x2e);
      *(undefined1 *)(param_1 + 0x32) = 0;
    }
    pdb_14098a860(param_1 + 0x18);
    if (param_1[0x15] != 0) {
      pub_1406abac0((byte *)param_1[0x16],param_1[0x15],1);
    }
    uVar6 = param_1[0xe];
    plVar4 = (longlong *)-uVar6;
    if ((!SBORROW8(0,uVar6)) && (uVar6 != 0)) {
      uVar6 = param_1[0xf];
      uVar7 = 1;
code_r0x0001406abac0:
      if (0x10 < uVar7) {
        uVar6 = *(ulonglong *)(uVar6 - 8);
      }
      uVar5 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (longlong *)HeapFree(uVar5,0,uVar6);
      return plVar4;
    }
  }
  return plVar4;
}

