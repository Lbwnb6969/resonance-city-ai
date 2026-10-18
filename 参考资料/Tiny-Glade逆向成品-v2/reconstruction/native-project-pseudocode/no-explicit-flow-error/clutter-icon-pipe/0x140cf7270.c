// VA 0x140cf7270, PDB extent 958 bytes
// clutter_icon_pipe::use_graphics_device
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_icon_pipe::use_graphics_device
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 958 */

undefined8 pdb_140cf7270(longlong *param_1)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_610 [672];
  longlong lStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [672];
  undefined8 auStack_c0 [16];
  undefined8 uStack_40;
  longlong lStack_38;
  longlong *plStack_30;
  uint uStack_28;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  plStack_30 = param_1;
  if (_DAT_143ca4898 != 0) {
    uStack_21 = 1;
    pdb_142df8353(&DAT_143ca45e0);
  }
  LOCK();
  bVar4 = DAT_143ca45e0 == '\0';
  if (bVar4) {
    DAT_143ca45e0 = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    uStack_21 = 1;
    pdb_142dc6be0(&DAT_143ca45e0);
  }
  puVar1 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_28 = 0;
  }
  else {
    uStack_21 = 1;
    uStack_28 = pdb_142dc79e0();
    uStack_28 = uStack_28 ^ 1;
  }
  if (DAT_143ca45e1 == '\0') {
    if ((_DAT_143ca45e8 == 2) || (_DAT_143ca4830 != plStack_30)) {
      auStack_c0[0] = 0x19;
      pdb_140cf8260(&lStack_370,plStack_30,auStack_c0,1);
      if (lStack_370 == 2) {
        if (((char)uStack_28 == '\0') && ((*puVar1 & 0x7fffffffffffffff) != 0)) {
          uStack_21 = 0;
          cVar2 = pdb_142dc79e0();
          if (cVar2 == '\0') {
            DAT_143ca45e1 = '\x01';
          }
        }
        cVar2 = DAT_143ca45e0;
        LOCK();
        DAT_143ca45e0 = 0;
        UNLOCK();
        if (cVar2 == '\x02') {
          uStack_21 = 0;
          pdb_142dc6ca0(&DAT_143ca45e0);
          return uStack_368;
        }
        DAT_143ca45e0 = 0;
        return uStack_368;
      }
      lStack_38 = lStack_370;
      uStack_40 = uStack_368;
      pub_142e32760(auStack_610,auStack_360,0x2a0);
      if (_DAT_143ca45e8 != 2) {
        pdb_141d52920(&DAT_143ca45e8);
      }
      _DAT_143ca45e8 = lStack_38;
      _DAT_143ca45f0 = uStack_40;
      pub_142e32760(0x143ca45f8,auStack_610,0x2a0);
      if (((char)uStack_28 == '\0') && ((*puVar1 & 0x7fffffffffffffff) != 0)) {
        uStack_21 = 0;
        cVar2 = pdb_142dc79e0();
        if (cVar2 == '\0') {
          DAT_143ca45e1 = '\x01';
        }
      }
      cVar2 = DAT_143ca45e0;
      LOCK();
      DAT_143ca45e0 = 0;
      UNLOCK();
      if (cVar2 == '\x02') {
        uStack_21 = 0;
        pdb_142dc6ca0(&DAT_143ca45e0);
        return 0;
      }
      DAT_143ca45e0 = 0;
      return 0;
    }
    if (((char)uStack_28 == '\0') && ((*puVar1 & 0x7fffffffffffffff) != 0)) {
      uStack_21 = 1;
      cVar2 = pdb_142dc79e0();
      if (cVar2 == '\0') {
        DAT_143ca45e1 = '\x01';
      }
    }
    cVar2 = DAT_143ca45e0;
    uVar3 = 0;
    LOCK();
    DAT_143ca45e0 = '\0';
    UNLOCK();
    if (cVar2 == '\x02') {
      uStack_21 = 1;
      pdb_142dc6ca0(&DAT_143ca45e0);
      uVar3 = 0;
    }
  }
  else {
    uStack_21 = 1;
    uVar3 = pdb_142db1df0(&DAT_143ca45e0,uStack_28);
  }
  LOCK();
  *plStack_30 = *plStack_30 + -1;
  UNLOCK();
  if (*plStack_30 == 0) {
    pdb_140e3f860(&plStack_30);
  }
  return uVar3;
}

