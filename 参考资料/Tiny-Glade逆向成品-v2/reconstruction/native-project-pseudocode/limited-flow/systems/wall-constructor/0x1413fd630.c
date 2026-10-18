// VA 0x1413fd630, PDB extent 756 bytes
// system_wall_constructor::wooden_arch_frame_systems::impl$0::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wooden_arch_frame_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::wooden_arch_frame_systems::impl$0::drop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wooden_arch_frame_systems.rs
   Extent: 756 */

void pdb_1413fd630(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    bVar11 = DAT_143ca41e0 == '\0';
    if (bVar11) {
      DAT_143ca41e0 = '\x01';
    }
    UNLOCK();
    if (!bVar11) {
      pdb_142dc6be0(&DAT_143ca41e0);
    }
    puVar6 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uStack_4c = 0;
      puVar8 = puStack_58;
    }
    else {
      uStack_4c = pdb_142dc79e0();
      uStack_4c = uStack_4c ^ 1;
      puVar8 = puStack_58;
    }
    if (DAT_143ca41e1 != '\0') {
      puStack_80 = (undefined8 *)&DAT_143ca41e0;
      uVar3 = (ulonglong)puStack_78 >> 8;
      puStack_78 = (undefined8 *)CONCAT71((int7)uVar3,(char)uStack_4c);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143306e80,0x2b,&puStack_80,&UNK_143306e60,&UNK_143306de8);
    }
    puStack_58 = *(undefined8 **)(param_1 + 8);
    lStack_68 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar1 = puStack_58 + lStack_68;
    uStack_60 = 0;
    puStack_80 = puStack_58;
    puStack_78 = puVar1;
    lStack_70 = param_1;
    if (lStack_68 != 0) {
      lVar9 = lStack_68 << 3;
      lVar10 = _DAT_143ca41f8 << 4;
      do {
        lVar5 = _DAT_143ca41f8;
        puVar8 = puStack_58 + 1;
        uVar2 = *puStack_58;
        puStack_58 = puVar8;
        if (_DAT_143ca41f8 == _DAT_143ca41e8) {
          pdb_142d7e980(&DAT_143ca41e8);
        }
        lVar4 = _DAT_143ca41f0;
        *(undefined8 *)(_DAT_143ca41f0 + lVar10) = uVar2;
        *(undefined4 *)(lVar4 + 8 + lVar10) = 3;
        _DAT_143ca41f8 = lVar5 + 1;
        lVar10 = lVar10 + 0x10;
        lVar9 = lVar9 + -8;
        puStack_80 = puVar1;
        puVar8 = puStack_58;
      } while (lVar9 != 0);
    }
    puStack_58 = puVar8;
    pdb_141402230(&puStack_80);
    if ((((char)uStack_4c == '\0') && ((*puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar7 = pdb_142dc79e0(), cVar7 == '\0')) {
      DAT_143ca41e1 = '\x01';
    }
    cVar7 = DAT_143ca41e0;
    LOCK();
    DAT_143ca41e0 = '\0';
    UNLOCK();
    if (cVar7 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000142dc6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      WakeByAddressSingle(&DAT_143ca41e0);
      return;
    }
  }
  return;
}

