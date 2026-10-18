// VA 0x140902060, PDB extent 224 bytes
// core::ptr::drop_in_place<enum2$<asset_pipe::texture::impl$5::run::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<asset_pipe::texture::impl$5::run::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 224 */

longlong * pdb_140902060(undefined8 *param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  bVar2 = *(byte *)(param_1 + 0x18);
  if (bVar2 == 0) {
    uVar7 = param_1[0x15];
    if (SBORROW8(0,uVar7)) {
      pdb_14098ce10(param_1 + 0xe);
    }
    else {
      if (uVar7 != 0) {
        pub_1406abac0((byte *)param_1[0x16],uVar7,1);
      }
      uVar7 = param_1[0xe];
      if ((!SBORROW8(0,uVar7)) && (uVar7 != 0)) {
        pub_1406abac0((byte *)param_1[0xf],uVar7,1);
      }
    }
  }
  else if (bVar2 == 3) {
    bVar2 = *(byte *)(param_1 + 0x4f);
    plVar5 = (longlong *)(ulonglong)bVar2;
    if (bVar2 != 0) {
      if (bVar2 == 3) {
        if (*(char *)(param_1 + 0x41) == '\x04') {
          pbVar3 = (byte *)param_1[0x42];
          puVar10 = (undefined8 *)param_1[0x43];
          if ((code *)*puVar10 != (code *)0x0) {
            (*(code *)*puVar10)(pbVar3);
          }
          if (puVar10[1] != 0) {
            pub_1406abac0(pbVar3,puVar10[1],puVar10[2]);
          }
          plVar5 = (longlong *)param_1[0x3c];
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            pdb_141746810(param_1 + 0x3c);
          }
        }
        else if ((((*(char *)(param_1 + 0x41) == '\x03') && (*(char *)(param_1 + 0x4e) == '\x03'))
                 && (*(char *)(param_1 + 0x4d) == '\x03')) &&
                (*(char *)((longlong)param_1 + 0x261) == '\x03')) {
          pdb_1400d68e0(param_1 + 0x48);
          *(undefined1 *)(param_1 + 0x4c) = 0;
        }
        pdb_14098a860(param_1 + 0x32);
        if (param_1[0x2f] != 0) {
          pub_1406abac0((byte *)param_1[0x30],param_1[0x2f],1);
        }
        uVar7 = param_1[0x28];
        plVar5 = (longlong *)-uVar7;
        if ((!SBORROW8(0,uVar7)) && (uVar7 != 0)) {
          lVar6 = param_1[0x29];
          uVar9 = 1;
          goto code_r0x0001406abac0;
        }
      }
      return plVar5;
    }
    if (param_1[0x21] != 0) {
      pub_1406abac0((byte *)param_1[0x22],param_1[0x21],1);
    }
    uVar7 = param_1[0x1a];
    if ((!SBORROW8(0,uVar7)) && (uVar7 != 0)) {
      pub_1406abac0((byte *)param_1[0x1b],uVar7,1);
    }
    param_1 = param_1 + 0x24;
  }
  else {
    if (bVar2 != 4) {
      return (longlong *)(ulonglong)bVar2;
    }
    bVar2 = *(byte *)(param_1 + 0x3d);
    if (bVar2 != 0) {
      if (bVar2 != 3) {
        return (longlong *)(ulonglong)bVar2;
      }
      pbVar3 = (byte *)param_1[0x3b];
      puVar10 = (undefined8 *)param_1[0x3c];
      if ((code *)*puVar10 != (code *)0x0) {
        (*(code *)*puVar10)(pbVar3);
      }
      if (puVar10[1] != 0) {
        pub_1406abac0(pbVar3,puVar10[1],puVar10[2]);
      }
      pdb_1404ada40(param_1 + 0x35);
      pdb_140969180(param_1 + 0x32);
      *(undefined2 *)((longlong)param_1 + 0x1e9) = 0;
      pdb_14098a860(param_1 + 0x2a);
      if (param_1[0x24] != 0) {
        pub_1406abac0((byte *)param_1[0x25],param_1[0x24],1);
      }
      lVar6 = param_1[0x28];
      lVar8 = param_1[0x29];
      if (lVar8 != 0) {
        puVar10 = (undefined8 *)(lVar6 + 0x40);
        do {
          if (puVar10[-1] != 0) {
            pub_1406abac0((byte *)*puVar10,puVar10[-1],1);
          }
          uVar7 = puVar10[-8];
          if ((!SBORROW8(0,uVar7)) && (uVar7 != 0)) {
            pub_1406abac0((byte *)puVar10[-7],uVar7,1);
          }
          puVar10 = puVar10 + 10;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (param_1[0x27] == 0) {
        return (longlong *)0x0;
      }
      uVar7 = param_1[0x27] * 0x50;
      uVar9 = 0x10;
      goto code_r0x0001406abac0;
    }
    pdb_14098ce10();
    param_1 = param_1 + 0x20;
  }
  plVar5 = (longlong *)*param_1;
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    pdb_140dd78e0(param_1);
  }
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      pdb_140dd7630(param_1 + 1);
    }
  }
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      lVar6 = param_1[2];
      puVar10 = (undefined8 *)param_1[3];
      plVar5 = (longlong *)0x0;
      if ((code *)*puVar10 != (code *)0x0) {
        plVar5 = (longlong *)
                 (*(code *)*puVar10)((puVar10[2] - 1 & 0xfffffffffffffff0) + lVar6 + 0x10);
      }
      if (lVar6 != -1) {
        LOCK();
        plVar1 = (longlong *)(lVar6 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar9 = 8;
          if (8 < (ulonglong)puVar10[2]) {
            uVar9 = puVar10[2];
          }
          plVar5 = (longlong *)(puVar10[1] + uVar9 + 0xf);
          uVar7 = -uVar9 & (ulonglong)plVar5;
          if (uVar7 != 0) {
code_r0x0001406abac0:
            lVar8 = lVar6;
            if (0x10 < uVar9) {
              lVar8 = *(longlong *)(lVar6 + -8);
            }
            uVar4 = GetProcessHeap(lVar6,uVar7);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar5 = (longlong *)HeapFree(uVar4,0,lVar8);
            return plVar5;
          }
        }
      }
      return plVar5;
    }
  }
  return plVar5;
}

