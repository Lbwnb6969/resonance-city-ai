// VA 0x141d61a60, PDB extent 982 bytes
// clutter_icon_pipe::with_gpu_bake_resources<alloc::vec::Vec<u8,alloc::alloc::Global>,clutter_icon_pipe::bake_icon_png_from_mesh::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   clutter_icon_pipe::with_gpu_bake_resources<alloc::vec::Vec<u8,alloc::alloc::Global>,clutter_icon_pipe::bake_icon_png_from_mesh::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 982 */

undefined8 * pdb_141d61a60(undefined8 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_598 [672];
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  longlong alStack_2e8 [84];
  undefined8 uStack_48;
  longlong lStack_40;
  longlong *plStack_38;
  uint uStack_30;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  plStack_38 = param_2;
  if (_DAT_143ca4898 != 0) {
    uStack_29 = 1;
    pdb_142df8304(&DAT_143ca45e0);
  }
  LOCK();
  bVar5 = DAT_143ca45e0 == '\0';
  if (bVar5) {
    DAT_143ca45e0 = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    uStack_29 = 1;
    pdb_142dc6be0(&DAT_143ca45e0);
  }
  puVar1 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uVar3 = 0;
    if (DAT_143ca45e1 == '\0') goto LAB_141d61b7d;
LAB_141d61acf:
    uStack_29 = 1;
    uVar4 = pdb_142df8250(&DAT_143ca45e0);
    param_1[1] = uVar4;
    *param_1 = 0x8000000000000000;
LAB_141d61af4:
    if (*plStack_38 != 0) {
      pub_1406abac0((byte *)plStack_38[1],*plStack_38 * 0x48,8);
    }
  }
  else {
    uStack_29 = 1;
    uVar3 = pdb_142dc79e0();
    uVar3 = uVar3 ^ 1;
    if (DAT_143ca45e1 != '\0') goto LAB_141d61acf;
LAB_141d61b7d:
    uStack_30 = uVar3;
    if (_DAT_143ca45e8 == 2) {
      uStack_2a = 1;
      pdb_140cf78f0(&uStack_2f8);
      lStack_40 = CONCAT44(uStack_2f4,uStack_2f8);
      uStack_48 = CONCAT44(uStack_2ec,uStack_2f0);
      if (lStack_40 == 2) {
        param_1[1] = uStack_48;
        *param_1 = 0x8000000000000000;
        if (((char)uStack_30 == '\0') && ((*puVar1 & 0x7fffffffffffffff) != 0)) {
          uStack_29 = 1;
          cVar2 = pdb_142dc79e0();
          if (cVar2 == '\0') {
            DAT_143ca45e1 = '\x01';
          }
        }
        cVar2 = DAT_143ca45e0;
        LOCK();
        DAT_143ca45e0 = '\0';
        UNLOCK();
        if (cVar2 == '\x02') {
          uStack_29 = 1;
          pdb_142dc6ca0(&DAT_143ca45e0);
        }
        goto LAB_141d61af4;
      }
      pub_142e32760(auStack_598,alStack_2e8,0x2a0);
      if (_DAT_143ca45e8 != 2) {
        pdb_141d52920(&DAT_143ca45e8);
      }
      _DAT_143ca45e8 = lStack_40;
      _DAT_143ca45f0 = uStack_48;
      pub_142e32760(0x143ca45f8,auStack_598,0x2a0);
    }
    alStack_2e8[0] = plStack_38[2];
    uStack_2f8 = (undefined4)*plStack_38;
    uStack_2f4 = *(undefined4 *)((longlong)plStack_38 + 4);
    uStack_2f0 = (undefined4)plStack_38[1];
    uStack_2ec = *(undefined4 *)((longlong)plStack_38 + 0xc);
    uStack_2a = 0;
    pdb_140cf1b80(param_1,&DAT_143ca45e8,plStack_38[3],&uStack_2f8,*(undefined1 *)plStack_38[4]);
    if (((char)uStack_30 == '\0') && ((*puVar1 & 0x7fffffffffffffff) != 0)) {
      uStack_29 = 0;
      cVar2 = pdb_142dc79e0();
      if (cVar2 == '\0') {
        DAT_143ca45e1 = '\x01';
      }
    }
    cVar2 = DAT_143ca45e0;
    LOCK();
    DAT_143ca45e0 = '\0';
    UNLOCK();
    if (cVar2 == '\x02') {
      uStack_29 = 0;
      pdb_142dc6ca0(&DAT_143ca45e0);
    }
  }
  return param_1;
}

