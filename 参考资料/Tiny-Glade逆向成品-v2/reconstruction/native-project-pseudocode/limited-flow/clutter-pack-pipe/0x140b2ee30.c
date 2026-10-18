// VA 0x140b2ee30, PDB extent 1780 bytes
// core::ptr::drop_in_place<enum2$<clutter_pack_pipe::mod_icons::impl$0::run::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/mod_icons.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<clutter_pack_pipe::mod_icons::impl$0::run::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/mod_icons.rs
   Extent: 1780 */

longlong * pdb_140b2ee30(ulonglong *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar5 = (longlong *)(ulonglong)(byte)param_1[0x30];
  if ((longlong *)0x5 < plVar5) {
    return plVar5;
  }
  plVar3 = (longlong *)(&UNK_1430578b8 + *(int *)(&UNK_1430578b8 + (longlong)plVar5 * 4));
  switch(plVar5) {
  case (longlong *)0x0:
    if (*param_1 != 0) {
      pub_1406abac0((byte *)param_1[1],*param_1,1);
    }
    uVar6 = param_1[4];
    if ((!SBORROW8(0,uVar6)) && (uVar6 != 0)) {
      pub_1406abac0((byte *)param_1[5],uVar6,1);
    }
    plVar5 = (longlong *)param_1[8];
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      pdb_140dd78e0(param_1 + 8);
    }
    plVar5 = (longlong *)param_1[9];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        pdb_140dd7630(param_1 + 9);
      }
    }
    plVar5 = (longlong *)param_1[10];
    if (plVar5 == (longlong *)0x0) {
      return plVar5;
    }
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 != 0) {
      return plVar5;
    }
    uVar6 = param_1[10];
    puVar2 = (undefined8 *)param_1[0xb];
    plVar5 = (longlong *)0x0;
    if ((code *)*puVar2 != (code *)0x0) {
      plVar5 = (longlong *)(*(code *)*puVar2)((puVar2[2] - 1 & 0xfffffffffffffff0) + uVar6 + 0x10);
    }
    if (uVar6 == 0xffffffffffffffff) {
      return plVar5;
    }
    LOCK();
    plVar3 = (longlong *)(uVar6 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 != 0) {
      return plVar5;
    }
    uVar7 = 8;
    if (8 < (ulonglong)puVar2[2]) {
      uVar7 = puVar2[2];
    }
    plVar5 = (longlong *)(puVar2[1] + uVar7 + 0xf);
    if ((-uVar7 & (ulonglong)plVar5) == 0) {
      return plVar5;
    }
    goto code_r0x0001406abac0;
  default:
    goto LAB_140b2f1e4;
  case (longlong *)0x3:
    if ((((char)param_1[0x3b] == '\x03') && ((char)param_1[0x3a] == '\x03')) &&
       (*(char *)((longlong)param_1 + 0x1c9) == '\x03')) {
      pbVar1 = (byte *)param_1[0x35];
      puVar2 = (undefined8 *)param_1[0x36];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(pbVar1);
      }
      if (puVar2[1] != 0) {
        pub_1406abac0(pbVar1,puVar2[1],puVar2[2]);
      }
      *(undefined1 *)(param_1 + 0x39) = 0;
    }
    goto code_r0x000140b2f18e;
  case (longlong *)0x4:
    if ((((char)param_1[0x3b] == '\x03') && ((char)param_1[0x3a] == '\x03')) &&
       (*(char *)((longlong)param_1 + 0x1c9) == '\x03')) {
      pbVar1 = (byte *)param_1[0x35];
      puVar2 = (undefined8 *)param_1[0x36];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(pbVar1);
      }
      if (puVar2[1] != 0) {
        pub_1406abac0(pbVar1,puVar2[1],puVar2[2]);
      }
      *(undefined1 *)(param_1 + 0x39) = 0;
    }
    break;
  case (longlong *)0x5:
    pbVar1 = (byte *)param_1[0x32];
    puVar2 = (undefined8 *)param_1[0x33];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(pbVar1);
    }
    if (puVar2[1] != 0) {
      pub_1406abac0(pbVar1,puVar2[1],puVar2[2]);
    }
    *(undefined1 *)((longlong)param_1 + 0x183) = 0;
    plVar5 = (longlong *)param_1[0x31];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        pdb_141746810(param_1 + 0x31);
      }
    }
  }
  uVar6 = param_1[0x2c];
  if ((!SBORROW8(0,uVar6)) && (uVar6 != 0)) {
    pub_1406abac0((byte *)param_1[0x2d],uVar6,1);
  }
  if ((((*(char *)((longlong)param_1 + 0x181) != '\0') &&
       ((param_1[0x19] == 0 ||
        (pub_1406abac0((byte *)param_1[0x1a],param_1[0x19] * 0xc,4),
        *(char *)((longlong)param_1 + 0x181) != '\0')))) &&
      ((param_1[0x1c] == 0 ||
       (pub_1406abac0((byte *)param_1[0x1d],param_1[0x1c] * 0xc,4),
       *(char *)((longlong)param_1 + 0x181) != '\0')))) &&
     (((param_1[0x1f] == 0 ||
       (pub_1406abac0((byte *)param_1[0x20],param_1[0x1f] * 0xc,4),
       *(char *)((longlong)param_1 + 0x181) != '\0')) && (param_1[0x22] != 0)))) {
    pub_1406abac0((byte *)param_1[0x23],param_1[0x22] << 3,4);
  }
  if ((*(char *)((longlong)param_1 + 0x182) != '\0') && (param_1[0x25] != 0)) {
    pub_1406abac0((byte *)param_1[0x26],param_1[0x25] << 2,4);
  }
  if ((*(char *)((longlong)param_1 + 0x181) != '\0') && (param_1[0x28] != 0)) {
    pub_1406abac0((byte *)param_1[0x29],param_1[0x28] << 2,4);
  }
  *(undefined2 *)((longlong)param_1 + 0x181) = 0;
  plVar5 = (longlong *)param_1[0x18];
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    pdb_141746810(param_1 + 0x18);
  }
code_r0x000140b2f18e:
  pdb_14098a860(param_1 + 0x14);
  if (param_1[0xc] != 0) {
    pub_1406abac0((byte *)param_1[0xd],param_1[0xc],1);
  }
  uVar6 = param_1[0x10];
  plVar3 = (longlong *)-uVar6;
  if ((SBORROW8(0,uVar6)) || (uVar6 == 0)) {
LAB_140b2f1e4:
    return plVar3;
  }
  uVar6 = param_1[0x11];
  uVar7 = 1;
code_r0x0001406abac0:
  if (0x10 < uVar7) {
    uVar6 = *(ulonglong *)(uVar6 - 8);
  }
  uVar4 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar5 = (longlong *)HeapFree(uVar4,0,uVar6);
  return plVar5;
}

