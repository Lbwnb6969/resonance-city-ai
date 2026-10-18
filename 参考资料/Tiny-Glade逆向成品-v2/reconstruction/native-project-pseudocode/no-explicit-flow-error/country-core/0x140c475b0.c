// VA 0x140c475b0, PDB extent 448 bytes
// country_core::resources::history::decorator_edit::impl$1::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::history::decorator_edit::impl$1::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 448 */

undefined8 * pdb_140c475b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (*(char *)(param_2 + 0xb) == '\0') {
    bVar2 = *(byte *)((longlong)param_2 + 0x4f);
    cVar14 = '\x06';
    if (1 < bVar2) {
      cVar14 = bVar2 - 2;
    }
    if ((cVar14 == '\x02') || (cVar14 == '\x06')) {
      uVar12 = *(uint *)(param_2 + 7);
      uVar15 = uVar12;
      uStack_54 = uVar12;
    }
    else {
      uVar12 = (uint)*(byte *)(param_2 + 7);
      uStack_54 = 0;
      uVar15 = *(uint *)(param_2 + 7);
    }
    if (bVar2 < 2) {
      uVar19 = *(uint *)((longlong)param_2 + 0x3c);
      uStack_44 = *(undefined4 *)((longlong)param_2 + 0x44);
      uStack_50 = *(undefined4 *)(param_2 + 8);
      uVar13 = *(undefined1 *)((longlong)param_2 + 0x4c);
      uVar3 = *(undefined1 *)((longlong)param_2 + 0x4d);
      uStack_48 = *(undefined4 *)(param_2 + 9);
      uVar18 = *(undefined1 *)((longlong)param_2 + 0x4e);
      bVar17 = bVar2;
    }
    else {
      uStack_48 = 0;
      uVar3 = 0;
      uStack_50 = 0;
      uVar13 = 0;
      uVar18 = 0;
      uVar19 = _DAT_142e36f28;
      bVar17 = 0;
    }
    uVar11 = (undefined1)uVar12;
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar4 = *(undefined1 *)((longlong)param_2 + 0x59);
    uVar1 = param_2[10];
    uVar5 = *(undefined1 *)((longlong)param_2 + 0x5a);
    uVar12 = _DAT_142e36f28;
    if (bVar2 == 7) {
      uVar12 = uVar15;
    }
    if (bVar2 != 6) {
      uVar15 = 0;
    }
    if (bVar2 != 5) {
      uVar11 = 0;
    }
    uVar16 = 1;
    if (bVar2 == 4) {
      uVar16 = *(undefined1 *)((longlong)param_2 + 0x3c);
    }
    param_1[7] = param_2[6];
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    uVar10 = param_2[5];
    param_1[5] = param_2[4];
    param_1[6] = uVar10;
    param_1[3] = uVar8;
    param_1[4] = uVar9;
    *param_1 = uVar6;
    param_1[1] = uVar7;
    *(undefined1 *)((longlong)param_1 + 0x66) = uVar4;
    param_1[8] = uVar1;
    *(undefined1 *)((longlong)param_1 + 0x67) = uVar5;
    *(uint *)(param_1 + 9) = uStack_54;
    *(undefined1 *)(param_1 + 0xc) = uVar11;
    *(uint *)((longlong)param_1 + 0x4c) = uVar15;
    *(uint *)(param_1 + 10) = uVar12;
    *(undefined1 *)((longlong)param_1 + 0x61) = uVar16;
    *(uint *)((longlong)param_1 + 0x54) = uVar19;
    *(undefined4 *)(param_1 + 0xb) = uStack_50;
    *(uint *)(param_1 + 2) = (uint)(bVar2 < 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_44;
    *(undefined1 *)((longlong)param_1 + 0x65) = uVar13;
    *(undefined1 *)((longlong)param_1 + 0x62) = uVar3;
    *(byte *)((longlong)param_1 + 99) = bVar17;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_48;
    *(undefined1 *)((longlong)param_1 + 100) = uVar18;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306db5c,0x77,&UNK_14306db98);
}

