// VA 0x140a3b620, PDB extent 952 bytes
// country_core::systems::save::session_lock::lock_session
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/session_lock.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::session_lock::lock_session
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/session_lock.rs
   Extent: 952 */

undefined8 pdb_140a3b620(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  longlong *plStack_d8;
  code *pcStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  longlong **pplStack_60;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_2d;
  uint uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar13 = 1;
  if (DAT_143cb2cc4 == '\0') {
    LOCK();
    bVar15 = DAT_143ca42e0 == '\0';
    if (bVar15) {
      DAT_143ca42e0 = '\x01';
    }
    UNLOCK();
    if (!bVar15) {
      pdb_142dc6be0(&DAT_143ca42e0);
    }
    puVar10 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uVar6 = uStack_2c;
      uStack_2c = 0;
    }
    else {
      uVar12 = pdb_142dc79e0();
      uVar6 = uStack_2c;
      uStack_2c = uVar12 ^ 1;
    }
    cVar11 = (char)uStack_2c;
    if (DAT_143ca42e1 != '\0') {
      puStack_b8 = &DAT_143ca42e0;
      uVar8 = (ulonglong)puStack_b0 >> 8;
      puStack_b0 = (undefined *)CONCAT71((int7)uVar8,cVar11);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303be58,0x2b,&puStack_b8,&UNK_14303be88,&UNK_14303b9b8);
    }
    lVar14 = 0;
    do {
      if (_DAT_143ca42f8 * 0x18 == lVar14) {
        puStack_b8 = (undefined *)*param_1;
        puStack_b0 = (undefined *)param_1[1];
        pdb_140a3bca0(&lStack_50,&puStack_b8);
        lVar14 = _DAT_143ca42f8;
        if (lStack_50 == 2) {
          uStack_38 = uStack_48;
          if (*_DAT_143ca8e90 != 0) {
            pcStack_d0 = pdb_140a457a0;
            puStack_c8 = &uStack_38;
            pcStack_c0 = pdb_140f36c30;
            puStack_b8 = (undefined *)0x0;
            puStack_b0 = &UNK_14303b9e9;
            uStack_a8 = 0x29;
            uStack_a0 = 0;
            puStack_98 = &UNK_14303b982;
            uStack_90 = 0x34;
            uStack_88 = 1;
            puStack_80 = &UNK_14303b9e9;
            uStack_78 = 0x29;
            uStack_70 = 0x3800000001;
            puStack_68 = &UNK_14303b9d0;
            pplStack_60 = &plStack_d8;
            plStack_d8 = param_1;
            pdb_140f332f0(&uStack_2d,&puStack_b8);
          }
          pdb_140f36c40(&uStack_38);
          uVar13 = 1;
          cVar11 = (char)uStack_2c;
        }
        else if (lStack_50 == 0) {
          uVar13 = 0;
          cVar11 = (char)uStack_2c;
        }
        else {
          uStack_40 = uStack_48;
          if (_DAT_143ca42f8 == _DAT_143ca42e8) {
            pdb_142d7e830(&DAT_143ca42e8);
          }
          lVar9 = _DAT_143ca42f0;
          uVar4 = *(undefined4 *)((longlong)param_1 + 4);
          lVar7 = param_1[1];
          uVar5 = *(undefined4 *)((longlong)param_1 + 0xc);
          puVar2 = (undefined4 *)(_DAT_143ca42f0 + lVar14 * 0x18);
          *puVar2 = (int)*param_1;
          puVar2[1] = uVar4;
          puVar2[2] = (int)lVar7;
          puVar2[3] = uVar5;
          *(undefined8 *)(lVar9 + 0x10 + lVar14 * 0x18) = uStack_40;
          _DAT_143ca42f8 = lVar14 + 1;
          uVar13 = 1;
          cVar11 = (char)uStack_2c;
        }
        if (((cVar11 == '\0') && ((*puVar10 & 0x7fffffffffffffff) != 0)) &&
           (cVar11 = pdb_142dc79e0(), cVar11 == '\0')) {
          DAT_143ca42e1 = '\x01';
        }
        LOCK();
        UNLOCK();
        cVar11 = DAT_143ca42e0;
        goto LAB_140a3b861;
      }
      plVar1 = (longlong *)(_DAT_143ca42f0 + lVar14);
      plVar3 = (longlong *)(_DAT_143ca42f0 + 8 + lVar14);
      lVar14 = lVar14 + 0x18;
    } while (*plVar3 != param_1[1] || *plVar1 != *param_1);
    uStack_2c = uVar6;
    if (((cVar11 == '\0') && ((*puVar10 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = pdb_142dc79e0(), cVar11 == '\0')) {
      DAT_143ca42e1 = '\x01';
    }
    LOCK();
    UNLOCK();
    uVar13 = 1;
    cVar11 = DAT_143ca42e0;
LAB_140a3b861:
    DAT_143ca42e0 = '\0';
    if (cVar11 == '\x02') {
      pdb_142dc6ca0(&DAT_143ca42e0);
    }
  }
  return uVar13;
}

