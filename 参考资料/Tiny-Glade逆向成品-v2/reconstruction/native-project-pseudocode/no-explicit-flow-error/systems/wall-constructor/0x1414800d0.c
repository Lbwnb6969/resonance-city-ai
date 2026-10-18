// VA 0x1414800d0, PDB extent 790 bytes
// system_wall_constructor::construct_elevation_supports::find_overlap_segments::OverhangSupportFinderCache::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/find_overlap_segments.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::find_overlap_segments::OverhangSupportFinderCache::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/find_overlap_segments.rs
   Extent: 790 */

void pdb_1414800d0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_60 = 0;
  lStack_58 = 8;
  lStack_50 = 0;
  lStack_78 = 0;
  lStack_70 = 8;
  lStack_68 = 0;
  lVar17 = param_2[3];
  if (lVar17 != 0) {
    lVar2 = *param_3;
    lVar3 = param_3[1];
    pauVar18 = (undefined1 (*) [16])*param_2;
    auVar1 = *pauVar18;
    uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    pauVar15 = pauVar18 + 1;
    do {
      if ((short)uVar14 == 0) {
        do {
          auVar1 = *pauVar15;
          pauVar18 = pauVar18 + -0x2b0;
          pauVar15 = pauVar15 + 1;
          uVar14 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar14 == 0);
      }
      uVar5 = 0;
      for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar8 = (ulonglong)uVar5;
      uVar4 = *(undefined8 *)pauVar18[uVar8 * -0x2b + -0x2b];
      uVar9 = pdb_140b54b40(param_2,uVar4);
      if (((((uVar9 & 0xffffffff) != 0) &&
           (uVar10 = uVar9 & 0xffffffff ^ 0xffffffff, uVar10 < *(ulonglong *)(lVar3 + 0x10))) &&
          (piVar11 = (int *)(uVar10 * 0x18 + *(longlong *)(lVar3 + 8)),
          piVar11[4] == (int)(uVar9 >> 0x20))) &&
         (((*piVar11 != 0 &&
           (uVar9 = *(ulonglong *)(piVar11 + 2), (uVar9 & 0xffffffff) < *(ulonglong *)(lVar2 + 0x38)
           )) && ((*(ulonglong *)(*(longlong *)(lVar2 + 0x28) + (uVar9 >> 6 & 0x3ffffff) * 8) >>
                   (uVar9 & 0x3f) & 1) != 0)))) {
        if (*(ulonglong *)(lVar2 + 0x110) <
            *(ulonglong *)(*(longlong *)(lVar3 + 0x1a0) + 0x40 + (uVar9 >> 0x20) * 0x48)) {
          lVar16 = *(longlong *)(lVar3 + 0x1a0) + (uVar9 >> 0x20) * 0x48;
          uVar9 = *(ulonglong *)(*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lVar2 + 0x110) * 8);
          if (uVar9 == 0) goto LAB_14148029f;
          lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar9 * 0x30);
        }
        else {
LAB_14148029f:
          lVar16 = 0;
        }
        lVar16 = (ulonglong)(uint)~piVar11[1] * 0x58 + lVar16;
        cVar7 = pdb_140b77b60(lVar16);
        lVar13 = lStack_50;
        if (cVar7 != '\0') {
          if (lStack_50 == lStack_60) {
            pdb_142d7e980(&lStack_60);
          }
          lVar12 = lVar13 * 0x10;
          *(undefined8 *)(lStack_58 + lVar12) = uVar4;
          *(longlong *)(lStack_58 + 8 + lVar12) = lVar16;
          lStack_50 = lVar13 + 1;
        }
      }
      lVar16 = lStack_68;
      if (*(uint *)pauVar18[uVar8 * -0x2b + -5] < 2) {
        if (lStack_68 == lStack_78) {
          pdb_142d7e980(&lStack_78);
        }
        lVar13 = lVar16 * 0x10;
        *(undefined8 *)(lStack_70 + lVar13) = uVar4;
        *(undefined1 **)(lStack_70 + 8 + lVar13) = pauVar18[uVar8 * -0x2b + -0x2b] + 8;
        lStack_68 = lVar16 + 1;
      }
      uVar14 = uVar14 - 1 & uVar14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  param_1[2] = lStack_50;
  *param_1 = lStack_60;
  param_1[1] = lStack_58;
  param_1[3] = lStack_78;
  param_1[4] = lStack_70;
  param_1[5] = lStack_68;
  return;
}

