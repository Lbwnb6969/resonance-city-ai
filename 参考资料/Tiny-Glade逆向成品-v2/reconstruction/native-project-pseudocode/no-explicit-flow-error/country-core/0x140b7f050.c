// VA 0x140b7f050, PDB extent 875 bytes
// country_core::systems::save::load_completion_checker::clear_session_loading_marker
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::load_completion_checker::clear_session_loading_marker
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
   Extent: 875 */

void pdb_140b7f050(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  longlong lStack_68;
  undefined *puStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  byte *pbStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140a937d0(&puStack_60,param_1);
  pbStack_40 = (byte *)CONCAT71(uStack_57,bStack_58);
  pdb_140f3e9e0(&uStack_88,pbStack_40,uStack_50,&UNK_14305ca08,0xb);
  pbStack_38 = pbStack_80;
  lStack_68 = pdb_140f4eda0(pbStack_80,uStack_78);
  if (uStack_88 != 0) {
    pub_1406abac0(pbStack_38,uStack_88,1);
  }
  if (lStack_68 != 0) {
    pdb_1404b38e0(&lStack_68);
  }
  if (puStack_60 != (undefined *)0x0) {
    pub_1406abac0(pbStack_40,(ulonglong)puStack_60,1);
  }
  LOCK();
  bVar15 = DAT_143ca4448 == '\0';
  if (bVar15) {
    DAT_143ca4448 = '\x01';
  }
  UNLOCK();
  if (!bVar15) {
    pdb_142dc6be0(&DAT_143ca4448);
  }
  puVar5 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bStack_58 = 0;
    plVar4 = _DAT_143ca4458;
  }
  else {
    bStack_58 = pdb_142dc79e0();
    bStack_58 = bStack_58 ^ 1;
    plVar4 = _DAT_143ca4458;
  }
  _DAT_143ca4458 = plVar4;
  if (DAT_143ca4449 != '\0') {
    puStack_60 = &DAT_143ca4448;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14305cbe0,0x2b,&puStack_60,&UNK_14305cbc0,&UNK_14305ca98);
  }
  if (_DAT_143ca4460 == 0) {
LAB_140b7f182:
    if (bStack_58 == 0) {
LAB_140b7f186:
      if (((*puVar5 & 0x7fffffffffffffff) != 0) && (cVar7 = pdb_142dc79e0(), cVar7 == '\0')) {
        DAT_143ca4449 = '\x01';
      }
    }
LAB_140b7f195:
    cVar7 = DAT_143ca4448;
    LOCK();
    DAT_143ca4448 = 0;
    UNLOCK();
    if (cVar7 == '\x02') {
      pdb_142dc6ca0(&DAT_143ca4448);
    }
    return;
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  uVar13 = 0;
  plVar10 = plVar4;
LAB_140b7f160:
  plVar9 = plVar10 + 2;
  if (plVar10[1] != lVar2 || *plVar10 != lVar1) goto code_r0x000140b7f173;
  uVar14 = uVar13 + 1;
  if (uVar14 < _DAT_143ca4460) {
    uVar11 = uVar13 - _DAT_143ca4460;
    uVar6 = uVar11;
    uVar12 = uVar13;
    if ((uVar11 & 1) == 0) {
      if (plVar10[3] != lVar2 || *plVar9 != lVar1) {
        *plVar10 = *plVar9;
        plVar10[1] = plVar10[3];
        uVar12 = uVar13 + 1;
      }
      uVar14 = uVar13 + 2;
      uVar6 = uVar12;
    }
    uVar13 = uVar6;
    if (uVar11 != 0xfffffffffffffffe) {
      lVar8 = _DAT_143ca4460 - uVar14;
      plVar10 = plVar4 + uVar14 * 2 + 2;
      uVar13 = uVar12;
      do {
        if (plVar10[-1] != lVar2 || plVar10[-2] != lVar1) {
          lVar3 = plVar10[-1];
          plVar4[uVar13 * 2] = plVar10[-2];
          (plVar4 + uVar13 * 2)[1] = lVar3;
          uVar13 = uVar13 + 1;
        }
        if (plVar10[1] != lVar2 || *plVar10 != lVar1) {
          lVar3 = plVar10[1];
          plVar4[uVar13 * 2] = *plVar10;
          (plVar4 + uVar13 * 2)[1] = lVar3;
          uVar13 = uVar13 + 1;
        }
        plVar10 = plVar10 + 4;
        lVar8 = lVar8 + -2;
      } while (lVar8 != 0);
    }
  }
  _DAT_143ca4460 = uVar13;
  if (bStack_58 != 0) goto LAB_140b7f195;
  goto LAB_140b7f186;
code_r0x000140b7f173:
  uVar13 = uVar13 + 1;
  plVar10 = plVar9;
  if (uVar13 == _DAT_143ca4460) goto LAB_140b7f182;
  goto LAB_140b7f160;
}

