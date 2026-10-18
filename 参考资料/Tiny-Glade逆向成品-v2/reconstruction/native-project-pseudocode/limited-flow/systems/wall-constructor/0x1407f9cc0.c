// VA 0x1407f9cc0, PDB extent 341 bytes
// system_wall_constructor::construct_platform_stairs::maintain_wooden_platform_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140a4318b) */
/* WARNING: Removing unreachable block (ram,0x000140a431e7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::maintain_wooden_platform_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
   Extent: 341 */

void pdb_1407f9cc0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined *puStack_58;
  byte bStack_50;
  char cStack_49;
  longlong lStack_48;
  
  cStack_49 = '\0';
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar1 = (ulonglong *)*param_4;
  lVar9 = param_4[1];
  uVar2 = *puVar1;
  uVar13 = 0;
  uVar12 = uVar2 - *(ulonglong *)(lVar9 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar9 + 0x18)) {
    uVar12 = uVar13;
  }
  uVar14 = uVar2 - *(ulonglong *)(lVar9 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar9 + 0x38)) {
    uVar14 = uVar13;
  }
  lVar8 = uVar12 * 0x40 + *(longlong *)(lVar9 + 8);
  uVar2 = *(ulonglong *)(lVar9 + 0x10) - uVar12;
  if (*(ulonglong *)(lVar9 + 0x10) < uVar12) {
    lVar8 = 8;
    uVar2 = uVar13;
  }
  lVar15 = uVar14 * 0x40 + *(longlong *)(lVar9 + 0x28);
  uVar12 = *(ulonglong *)(lVar9 + 0x30) - uVar14;
  if (*(ulonglong *)(lVar9 + 0x30) < uVar14) {
    lVar15 = 8;
    uVar12 = uVar13;
  }
  lVar3 = *param_2;
  *puVar1 = (*(longlong *)(lVar9 + 0x40) - uVar12) - uVar2;
  lStack_48 = uVar12 * 0x40 + lVar15;
  uVar4 = *param_1;
  lVar9 = lVar8;
  do {
    if ((lVar9 == 0) || (lVar9 == uVar2 * 0x40 + lVar8)) {
      if ((lVar15 == 0) || (lVar15 == lStack_48)) {
        if (cStack_49 == '\0') {
          return;
        }
        LOCK();
        bVar16 = DAT_143ca4300 == '\0';
        if (bVar16) {
          DAT_143ca4300 = '\x01';
        }
        UNLOCK();
        if (!bVar16) {
          pdb_142dc6be0(&DAT_143ca4300);
        }
        puVar1 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          bVar6 = 0;
        }
        else {
          bVar6 = pdb_142dc79e0();
          bVar6 = bVar6 ^ 1;
        }
        if (DAT_143ca4301 != '\0') {
          puStack_58 = &DAT_143ca4300;
          bStack_50 = bVar6;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14303be58,0x2b,&puStack_58,&UNK_14303bea8,&UNK_14303bcf0);
        }
        lStack_48 = 0x2e;
        pdb_14007ee60();
        pbVar10 = pub_1406abab0(0x2e,1);
        if (pbVar10 == (byte *)0x0) {
          pdb_142dc7e2a(1,0x2e);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        pub_142e32760(pbVar10,&UNK_143006589,0x2e);
        lVar9 = _DAT_143ca4318;
        if (_DAT_143ca4318 == _DAT_143ca4308) {
          pdb_142d7e6e0(&DAT_143ca4308);
        }
        lVar8 = _DAT_143ca4310;
        lVar15 = lVar9 * 0x20;
        *(longlong *)(_DAT_143ca4310 + lVar15) = lStack_48;
        *(byte **)(lVar8 + 8 + lVar15) = pbVar10;
        *(longlong *)(lVar8 + 0x10 + lVar15) = lStack_48;
        *(undefined1 *)(lVar8 + 0x18 + lVar15) = 0;
        _DAT_143ca4318 = lVar9 + 1;
        if (((bVar6 == 0) && ((*puVar1 & 0x7fffffffffffffff) != 0)) &&
           (cVar7 = pdb_142dc79e0(), cVar7 == '\0')) {
          DAT_143ca4301 = '\x01';
        }
        cVar7 = DAT_143ca4300;
        LOCK();
        DAT_143ca4300 = 0;
        UNLOCK();
        if (cVar7 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000142dc6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          WakeByAddressSingle(&DAT_143ca4300);
          return;
        }
        return;
      }
      lVar11 = 0;
      lVar9 = lVar15;
      lVar15 = lVar15 + 0x40;
    }
    else {
      lVar11 = lVar9 + 0x40;
    }
    *puVar1 = *puVar1 + 1;
    pdb_1407f9e20(uVar4,param_3,*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar9 + 8),
                  *(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x20),
                  *(undefined8 *)(lVar9 + 0x28),lVar3,lVar3 + 0x30,&cStack_49);
    lVar9 = lVar11;
  } while( true );
}

