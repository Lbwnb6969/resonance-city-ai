// VA 0x140cea530, PDB extent 600 bytes
// clutter_pack_pipe::feather_icon_edges
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_pack_pipe::feather_icon_edges
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 600 */

void pdb_140cea530(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar7 = _DAT_142e4fba0;
  uVar6 = _DAT_142e377e0;
  fVar5 = _DAT_142e36f50;
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar12 = CONCAT44(0,*(uint *)(param_1 + 0x1c));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (ulonglong)uVar1 * 4;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar12;
  uVar9 = SUB168(auVar3 * auVar4,0);
  if (SUB168(auVar3 * auVar4,8) == 0) {
    if (uVar9 <= *(ulonglong *)(param_1 + 0x10)) {
      if ((uVar9 & 0x7ffffffffffffffc) != 0) {
        fVar15 = (float)uVar1 * _DAT_142e36f50;
        fVar16 = (float)uVar12 * _DAT_142e36f50;
        lVar2 = *(longlong *)(param_1 + 8);
        fVar17 = fVar15 + _DAT_143086fc8;
        fVar18 = fVar16 + _DAT_143086fc8;
        uVar12 = 0;
        uVar10 = 0;
        uVar11 = 0;
        do {
          uVar8 = uVar10;
          if (uVar10 >= uVar1) {
            uVar8 = 0;
          }
          uVar11 = (uVar11 + 1) - (uint)(uVar10 < uVar1);
          uVar10 = uVar8 + 1;
          fVar19 = (float)((uint)(((float)uVar8 + fVar5) - fVar15) & uVar6) - fVar17;
          fVar20 = (float)((uint)(((float)uVar11 + fVar5) - fVar16) & uVar6) - fVar18;
          fVar13 = fVar19;
          if (fVar19 <= 0.0) {
            fVar13 = 0.0;
          }
          fVar14 = (float)pub_142e32850(fVar13);
          fVar13 = fVar20;
          if (fVar20 <= fVar19) {
            fVar13 = fVar19;
          }
          fVar13 = (float)(~-(uint)NAN(fVar19) & (uint)fVar13 | -(uint)NAN(fVar19) & (uint)fVar20);
          if (0.0 <= fVar13) {
            fVar13 = 0.0;
          }
          fVar19 = (fVar13 + fVar14 + _DAT_143086fc8) / _DAT_14303aa00;
          fVar13 = 0.0;
          if (0.0 <= fVar19) {
            fVar13 = fVar19;
          }
          fVar19 = _DAT_142e36f28;
          if (fVar13 <= _DAT_142e36f28) {
            fVar19 = fVar13;
          }
          fVar19 = (float)pub_142e32b00((float)*(byte *)(lVar2 + 3 + uVar12) * fVar19);
          fVar13 = 0.0;
          if (0.0 <= fVar19) {
            fVar13 = fVar19;
          }
          fVar19 = fVar7;
          if (fVar13 <= fVar7) {
            fVar19 = fVar13;
          }
          *(char *)(lVar2 + 3 + uVar12) = (char)(int)fVar19;
          uVar12 = uVar12 + 4;
        } while ((uVar9 & 0x7ffffffffffffffc) != uVar12);
      }
      return;
    }
    pdb_142dc8420(0,uVar9,*(ulonglong *)(param_1 + 0x10),&UNK_1433cf0d0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1433cf0b8);
}

