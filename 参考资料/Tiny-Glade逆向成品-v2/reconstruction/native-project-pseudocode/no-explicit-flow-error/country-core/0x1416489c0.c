// VA 0x1416489c0, PDB extent 699 bytes
// country_core::startup::startup_time_of_day::startup_time_of_day
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_time_of_day.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_time_of_day::startup_time_of_day
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_time_of_day.rs
   Extent: 699 */

void pdb_1416489c0(longlong *param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_90 [24];
  ulonglong uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint *puStack_58;
  uint *puStack_50;
  ulonglong uStack_48;
  uint *puStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140d929f0(&puStack_58,&UNK_143321ae0,0x17);
  puStack_38 = puStack_50;
  pdb_140f55d10(auStack_90,puStack_50,uStack_48);
  pdb_141706360(&uStack_78,auStack_90,&puStack_58);
  if (puStack_58 != (uint *)0x0) {
    pub_1406abac0((byte *)puStack_38,(ulonglong)puStack_58,1);
  }
  if (!SBORROW8(0,uStack_78)) {
    puStack_38 = (uint *)uStack_78;
    puStack_60 = puStack_70;
    pdb_14164f9b0(&puStack_58,puStack_70,uStack_68);
    fVar11 = _UNK_14301d4a4;
    fVar10 = _DAT_14301d4a0;
    fVar9 = _UNK_14301d49c;
    fVar8 = _UNK_14301d498;
    fVar7 = _UNK_14301d494;
    fVar6 = _DAT_14301d490;
    uVar5 = _UNK_142e377ec;
    uVar4 = _UNK_142e377e8;
    uVar3 = _UNK_142e377e4;
    uVar2 = _DAT_142e377e0;
    if (!SBORROW8(0,(longlong)puStack_58)) {
      if (uStack_48 != 0) {
        puVar12 = puStack_50;
        do {
          *puVar12 = -(uint)(fVar6 < (float)(*puVar12 & uVar2)) & *puVar12;
          puVar12[1] = -(uint)(fVar7 < (float)(puVar12[1] & uVar3)) & puVar12[1];
          puVar12[2] = -(uint)(fVar8 < (float)(puVar12[2] & uVar4)) & puVar12[2];
          puVar12[3] = -(uint)(fVar9 < (float)(puVar12[3] & uVar5)) & puVar12[3];
          uVar13 = (uint)*(undefined8 *)(puVar12 + 4);
          uVar14 = (uint)((ulonglong)*(undefined8 *)(puVar12 + 4) >> 0x20);
          *(ulonglong *)(puVar12 + 4) =
               CONCAT44(-(uint)(fVar11 < (float)(uVar14 & uVar3)) & uVar14,
                        -(uint)(fVar10 < (float)(uVar13 & uVar2)) & uVar13);
          puVar12 = puVar12 + 0x18;
        } while (puVar12 != puStack_50 + uStack_48 * 0x18);
      }
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      puVar1 = (ulonglong *)*param_1;
      if (*puVar1 != 0) {
        pub_1406abac0((byte *)puVar1[1],*puVar1 * 0x60,8);
      }
      *puVar1 = (ulonglong)puStack_58;
      puVar1[1] = (ulonglong)puStack_50;
      puVar1[2] = uStack_48;
      if (puStack_38 != (uint *)0x0) {
        pub_1406abac0((byte *)puStack_60,(ulonglong)puStack_38,1);
      }
      return;
    }
    puStack_58 = puStack_50;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1433222d0,0x2b,&puStack_58,&UNK_1433222b0,&UNK_143321b48);
  }
  puStack_58 = puStack_70;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1433222d0,0x2b,&puStack_58,&UNK_143322300,&UNK_143321b30);
}

