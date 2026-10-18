// VA 0x1424e6840, PDB extent 1335 bytes
// core::ptr::drop_in_place<enum2$<clutter_pack_pipe::impl$9::run::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<clutter_pack_pipe::impl$9::run::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 1335 */

void pdb_1424e6840(ulonglong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  switch((char)param_1[0x2d]) {
  case '\0':
    if (*param_1 != 0) {
      pub_1406abac0((byte *)param_1[1],*param_1,1);
    }
    plVar2 = (longlong *)param_1[4];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140dd78e0(param_1 + 4);
    }
    plVar2 = (longlong *)param_1[5];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        pdb_140dd7630(param_1 + 5);
      }
    }
    plVar2 = (longlong *)param_1[6];
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 != 0) {
      return;
    }
    uVar6 = param_1[6];
    puVar5 = (undefined8 *)param_1[7];
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)((puVar5[2] - 1 & 0xfffffffffffffff0) + uVar6 + 0x10);
    }
    if (uVar6 == 0xffffffffffffffff) {
      return;
    }
    LOCK();
    plVar2 = (longlong *)(uVar6 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 != 0) {
      return;
    }
    uVar7 = 8;
    if (8 < (ulonglong)puVar5[2]) {
      uVar7 = puVar5[2];
    }
    if ((-uVar7 & puVar5[1] + uVar7 + 0xf) == 0) {
      return;
    }
    goto code_r0x0001406abac0;
  default:
    goto LAB_1424e6b2c;
  case '\x03':
    if ((((char)param_1[0x38] == '\x03') && ((char)param_1[0x37] == '\x03')) &&
       (*(char *)((longlong)param_1 + 0x1b1) == '\x03')) {
      pbVar1 = (byte *)param_1[0x32];
      puVar5 = (undefined8 *)param_1[0x33];
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(pbVar1);
      }
      if (puVar5[1] != 0) {
        pub_1406abac0(pbVar1,puVar5[1],puVar5[2]);
      }
      *(undefined1 *)(param_1 + 0x36) = 0;
    }
    goto code_r0x0001424e6af8;
  case '\x04':
    pbVar1 = (byte *)param_1[0x2e];
    puVar5 = (undefined8 *)param_1[0x2f];
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(pbVar1);
    }
    if (puVar5[1] != 0) {
      pub_1406abac0(pbVar1,puVar5[1],puVar5[2]);
    }
    break;
  case '\x05':
    pbVar1 = (byte *)param_1[0x32];
    puVar5 = (undefined8 *)param_1[0x33];
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(pbVar1);
    }
    if (puVar5[1] != 0) {
      pub_1406abac0(pbVar1,puVar5[1],puVar5[2]);
    }
    uVar6 = param_1[0x3b] - param_1[0x39];
    if (uVar6 != 0) {
      uVar6 = uVar6 >> 5;
      puVar5 = (undefined8 *)(param_1[0x39] + 8);
      do {
        if (puVar5[-1] != 0) {
          pub_1406abac0((byte *)*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_1[0x3a] != 0) {
      pub_1406abac0((byte *)param_1[0x38],param_1[0x3a] << 5,8);
    }
    if (param_1[0x2e] != 0) {
      pub_1406abac0((byte *)param_1[0x2f],param_1[0x2e] << 4,0x10);
    }
    plVar2 = (longlong *)param_1[0x36];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140c7a060(param_1 + 0x36);
    }
  }
  if (*(char *)((longlong)param_1 + 0x169) != '\0') {
    pbVar1 = (byte *)param_1[0x2b];
    uVar6 = param_1[0x2c];
    if (uVar6 != 0) {
      pbVar4 = pbVar1 + 8;
      do {
        if (*(ulonglong *)(pbVar4 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar4,*(ulonglong *)(pbVar4 + -8),1);
        }
        pbVar4 = pbVar4 + 0x20;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_1[0x2a] != 0) {
      pub_1406abac0(pbVar1,param_1[0x2a] << 5,8);
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x169) = 0;
  plVar2 = (longlong *)param_1[0x10];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    pdb_141746810(param_1 + 0x10);
  }
code_r0x0001424e6af8:
  pdb_14098a860(param_1 + 0xc);
  if (param_1[8] == 0) {
LAB_1424e6b2c:
    return;
  }
  uVar6 = param_1[9];
  uVar7 = 1;
code_r0x0001406abac0:
  if (0x10 < uVar7) {
    uVar6 = *(ulonglong *)(uVar6 - 8);
  }
  uVar3 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar3,0,uVar6);
  return;
}

