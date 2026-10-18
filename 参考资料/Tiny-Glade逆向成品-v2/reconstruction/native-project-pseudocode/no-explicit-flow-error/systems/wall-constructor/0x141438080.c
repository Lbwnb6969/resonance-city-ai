// VA 0x141438080, PDB extent 598 bytes
// system_wall_constructor::utils::half_timber::check_for_overlap_with_all_windows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::utils::half_timber::check_for_overlap_with_all_windows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
   Extent: 598 */

ulonglong pdb_141438080(undefined4 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                       undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  uint *puVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [136];
  
  uVar9 = 0;
  lVar8 = pdb_140c41030(param_5,0);
  fVar4 = _DAT_142e36f50;
  if (lVar8 != 0) {
    lVar13 = *(longlong *)(lVar8 + 0x48);
    if (lVar13 != 0) {
      pauVar10 = *(undefined1 (**) [16])(lVar8 + 0x30);
      auVar1 = *pauVar10;
      uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar11 = pauVar10 + 1;
      do {
        if ((short)uVar6 == 0) {
          do {
            auVar1 = *pauVar11;
            pauVar10 = pauVar10 + -0x68;
            pauVar11 = pauVar11 + 1;
            uVar6 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar6 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar8 = (ulonglong)uVar2 * -0x68;
        if ((*(byte *)((longlong)pauVar10 + lVar8 + -0x2e) < 2) &&
           (puVar12 = (uint *)((longlong)pauVar10 + lVar8 + -0x60), *puVar12 < 3)) {
          uVar7 = pdb_140c45920(param_6,*(undefined4 *)((longlong)pauVar10 + lVar8 + -0x68));
          pdb_1414364c0(auStack_d8,puVar12,uVar7,param_6);
          uVar7 = param_1;
          cVar5 = pdb_140deec60(auStack_d8);
          if (cVar5 == '\0') {
            fVar16 = (float)pdb_140deec20(auStack_d8);
            fVar17 = (float)pdb_140deec10(auStack_d8);
            if (param_4 < fVar17 * fVar4 + fVar16) {
              fVar16 = (float)pdb_140deec20(auStack_d8);
              fVar16 = fVar16 - param_4;
            }
            else {
              fVar16 = (float)pdb_140deec20(auStack_d8);
              fVar17 = (float)pdb_140deec10(auStack_d8);
              if (fVar17 * fVar4 <= fVar16) goto LAB_141438190;
              fVar16 = (float)pdb_140deec20(auStack_d8);
              fVar16 = fVar16 + param_4;
            }
            pdb_140deec20(auStack_d8);
            uVar14 = pdb_140deec10(auStack_d8);
            uVar15 = pdb_140deec50(auStack_d8);
            pdb_140deead0(auStack_c8,fVar16,uVar7,uVar14,uVar15);
            cVar5 = pdb_140deec60(auStack_c8);
            if (cVar5 == '\0') goto LAB_141438190;
          }
          uVar9 = CONCAT71((int7)((ulonglong)param_6 >> 8),1);
          goto LAB_141438287;
        }
LAB_141438190:
        uVar6 = uVar6 - 1 & uVar6;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    uVar9 = 0;
  }
LAB_141438287:
  return uVar9 & 0xffffffff;
}

