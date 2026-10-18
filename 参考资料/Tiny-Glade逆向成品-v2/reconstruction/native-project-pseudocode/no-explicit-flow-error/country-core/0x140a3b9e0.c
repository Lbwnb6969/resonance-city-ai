// VA 0x140a3b9e0, PDB extent 692 bytes
// country_core::systems::save::session_lock::is_session_locked_elsewhere
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/session_lock.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::session_lock::is_session_locked_elsewhere
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/session_lock.rs
   Extent: 692 */

undefined8 pdb_140a3b9e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (DAT_143cb2cc4 == '\0') {
    LOCK();
    bVar9 = DAT_143ca42e0 == '\0';
    if (bVar9) {
      DAT_143ca42e0 = '\x01';
    }
    UNLOCK();
    if (!bVar9) {
      pdb_142dc6be0(&DAT_143ca42e0);
    }
    puVar4 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uVar3 = uStack_2c;
      uStack_2c = 0;
    }
    else {
      uVar6 = pdb_142dc79e0();
      uVar3 = uStack_2c;
      uStack_2c = uVar6 ^ 1;
    }
    cVar5 = (char)uStack_2c;
    if (DAT_143ca42e1 != '\0') {
      puStack_48 = &DAT_143ca42e0;
      uVar3 = (uint)uStack_40 >> 8;
      uStack_40 = CONCAT31((int3)uVar3,cVar5);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303be58,0x2b,&puStack_48,&UNK_14303be88,&UNK_14303ba18);
    }
    lVar8 = 0;
    do {
      if (_DAT_143ca42f8 * 0x18 == lVar8) {
        puStack_48 = (undefined *)*param_1;
        uStack_40 = (undefined4)param_1[1];
        uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
        pdb_140a3bca0(&lStack_58,&puStack_48);
        if (lStack_58 == 0) {
          uVar7 = 1;
        }
        else {
          if ((int)lStack_58 == 2) {
LAB_140a3baf7:
            pdb_140f36c40();
          }
          else {
            uStack_60 = uStack_50;
            uStack_68 = uStack_50;
            puStack_48 = (undefined *)pdb_140f3ef30(&uStack_68);
            if (puStack_48 != (undefined *)0x0) {
              pdb_1404b38e0(&puStack_48);
            }
            CloseHandle();
            if (lStack_58 == 2) goto LAB_140a3baf7;
          }
          uVar7 = 0;
        }
        if ((((char)uStack_2c == '\0') && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
           (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
          DAT_143ca42e1 = '\x01';
        }
        goto LAB_140a3bb22;
      }
      plVar1 = (longlong *)(_DAT_143ca42f0 + lVar8);
      plVar2 = (longlong *)(_DAT_143ca42f0 + 8 + lVar8);
      lVar8 = lVar8 + 0x18;
    } while (*plVar2 != param_1[1] || *plVar1 != *param_1);
    uStack_2c = uVar3;
    if (((cVar5 == '\0') && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
      DAT_143ca42e1 = '\x01';
    }
    uVar7 = 0;
LAB_140a3bb22:
    cVar5 = DAT_143ca42e0;
    LOCK();
    DAT_143ca42e0 = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      pdb_142dc6ca0(&DAT_143ca42e0);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

