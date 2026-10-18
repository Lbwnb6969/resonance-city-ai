// VA 0x140b7e580, PDB extent 891 bytes
// country_core::systems::save::load_completion_checker::mark_session_loading
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::load_completion_checker::mark_session_loading
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
   Extent: 891 */

void pdb_140b7e580(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  ulonglong uStack_90;
  byte *pbStack_88;
  byte *pbStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined4 uStack_58;
  undefined5 uStack_54;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined4 uStack_4b;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_68._0_4_ = (undefined4)*param_1;
  uStack_68._4_4_ = *(uint *)((longlong)param_1 + 4);
  pbStack_60 = (byte *)param_1[1];
  cVar5 = pdb_140a3b620(&uStack_68);
  if (cVar5 != '\0') {
    pdb_140a937d0(&uStack_b0,param_1);
    uStack_38 = pbStack_a8;
    pdb_140f3e9e0(&uStack_90,pbStack_a8,uStack_a0,&UNK_14305ca08,0xb);
    uStack_68 = (undefined *)((ulonglong)uStack_68._4_4_ << 0x20);
    pbStack_60 = (byte *)0x0;
    uStack_58 = 7;
    uStack_54 = 0;
    uStack_4e = 0;
    uStack_4b = 0;
    uStack_4f = 1;
    uStack_4c = 1;
    uStack_4d = 1;
    pbStack_70 = pbStack_88;
    lVar6 = pdb_140f4a2a0(&uStack_68);
    if (uStack_90 != 0) {
      pub_1406abac0(pbStack_70,uStack_90,1);
    }
    uStack_68 = (undefined *)lVar6;
    pbStack_60 = pbStack_88;
    if (lVar6 == 0) {
      CloseHandle(pbStack_88);
    }
    else {
      pdb_1404b38e0(&pbStack_60);
    }
    if (uStack_b0 != 0) {
      pub_1406abac0(uStack_38,uStack_b0,1);
    }
    LOCK();
    bVar9 = DAT_143ca4448 == '\0';
    if (bVar9) {
      DAT_143ca4448 = '\x01';
    }
    UNLOCK();
    if (!bVar9) {
      pdb_142dc6be0(&DAT_143ca4448);
    }
    puVar4 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uVar7 = 0;
      lVar6 = _DAT_143ca4460;
    }
    else {
      uVar7 = pdb_142dc79e0();
      uVar7 = uVar7 ^ 1;
      lVar6 = _DAT_143ca4460;
    }
    _DAT_143ca4460 = lVar6;
    if (DAT_143ca4449 != '\0') {
      uStack_68 = &DAT_143ca4448;
      uVar3 = (ulonglong)pbStack_60 >> 8;
      pbStack_60 = (byte *)CONCAT71((int7)uVar3,(char)uVar7);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14305cbe0,0x2b,&uStack_68,&UNK_14305cbc0,&UNK_14305ca58);
    }
    lVar8 = 0;
    do {
      if (lVar6 * 0x10 == lVar8) {
        if (lVar6 == _DAT_143ca4450) {
          uVar3 = (ulonglong)uStack_38 >> 0x20;
          uStack_38 = (byte *)CONCAT44((int)uVar3,(int)uVar7);
          pdb_142d91b70(&DAT_143ca4450);
          uVar7 = (ulonglong)uStack_38 & 0xffffffff;
        }
        lVar8 = param_1[1];
        plVar1 = (longlong *)(_DAT_143ca4458 + lVar6 * 0x10);
        *plVar1 = *param_1;
        plVar1[1] = lVar8;
        _DAT_143ca4460 = lVar6 + 1;
        if ((char)uVar7 != '\0') goto LAB_140b7e74b;
        goto LAB_140b7e73c;
      }
      plVar1 = (longlong *)(_DAT_143ca4458 + lVar8);
      plVar2 = (longlong *)(_DAT_143ca4458 + 8 + lVar8);
      lVar8 = lVar8 + 0x10;
    } while (*plVar2 != param_1[1] || *plVar1 != *param_1);
    if ((char)uVar7 == '\0') {
LAB_140b7e73c:
      if (((*puVar4 & 0x7fffffffffffffff) != 0) && (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
        DAT_143ca4449 = '\x01';
      }
    }
LAB_140b7e74b:
    cVar5 = DAT_143ca4448;
    LOCK();
    DAT_143ca4448 = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      pdb_142dc6ca0(&DAT_143ca4448);
    }
  }
  return;
}

