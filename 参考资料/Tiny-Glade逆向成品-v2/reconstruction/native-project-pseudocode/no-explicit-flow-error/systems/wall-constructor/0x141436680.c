// VA 0x141436680, PDB extent 1245 bytes
// system_wall_constructor::utils::half_timber::overlapping_windows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::half_timber::overlapping_windows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
   Extent: 1245 */

void pdb_141436680(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  uint uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 uVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  longlong *plStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  char cStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  lStack_110 = 0;
  lStack_108 = 4;
  lStack_100 = 0;
  plStack_120 = param_1;
  uStack_118 = param_4;
  lVar11 = pdb_140c41030(param_7,0,param_5);
  fVar9 = _DAT_1433097f4;
  fVar8 = _DAT_1433097f0;
  fVar7 = _DAT_143307070;
  fVar6 = _DAT_14300bbe0;
  fVar5 = _DAT_142e36f50;
  if (lVar11 != 0) {
    pauVar15 = *(undefined1 (**) [16])(lVar11 + 0x30);
    lVar11 = *(longlong *)(lVar11 + 0x48);
    auVar2 = *pauVar15;
    pauVar13 = pauVar15 + 1;
    uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
LAB_1414367a0:
    if (lVar11 != 0) {
      if ((short)uVar14 == 0) {
        do {
          auVar2 = *pauVar13;
          pauVar15 = pauVar15 + -0x68;
          pauVar13 = pauVar13 + 1;
          uVar14 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar14 == 0);
      }
      uVar3 = 0;
      for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      uVar14 = uVar14 - 1 & uVar14;
      lVar19 = (ulonglong)uVar3 * -0x68;
      lVar11 = lVar11 + -1;
      if ((*(byte *)((longlong)pauVar15 + lVar19 + -0x2e) < 2) &&
         (puVar17 = (uint *)((longlong)pauVar15 + lVar19 + -0x60), *puVar17 < 3)) {
        cStack_e1 = pdb_140c45920(param_8,*(undefined4 *)((longlong)pauVar15 + lVar19 + -0x68));
        pdb_1414364c0(&fStack_f4,puVar17,cStack_e1,param_8);
        fStack_f4 = fStack_f4 + fVar8;
        fStack_ec = fStack_ec + fVar9;
        if ((cStack_e1 == '\t') && (*(char *)((longlong)pauVar15 + lVar19 + -7) == '\x01')) {
          fStack_f4 = fStack_f4 + fVar7;
          fStack_ec = fStack_ec + fVar6;
        }
        fVar24 = fStack_f4;
        cVar10 = pdb_140deea30(uStack_118,&fStack_f4);
        lVar18 = lStack_100;
        if (cVar10 != '\0') {
          uVar16 = *(undefined1 *)((longlong)pauVar15 + lVar19 + -7);
          if (lStack_100 == lStack_110) {
            pdb_142d8d5c0(&lStack_110);
          }
          puVar1 = (undefined8 *)(lStack_108 + lVar18 * 0x14);
          *puVar1 = CONCAT44(uStack_f0,fStack_f4);
          puVar1[1] = CONCAT44(uStack_e8,fStack_ec);
          *(undefined1 *)(lStack_108 + 0x10 + lVar18 * 0x14) = uVar16;
          *(char *)(lStack_108 + 0x11 + lVar18 * 0x14) = cStack_e1;
          *(undefined1 *)(lStack_108 + 0x12 + lVar18 * 0x14) = 0;
          lStack_100 = lVar18 + 1;
        }
        fVar20 = (float)pdb_140deec20(&fStack_f4);
        fVar21 = (float)pdb_140deec10(&fStack_f4);
        if (fVar20 + fVar21 * fVar5 <= param_6) {
          fVar20 = (float)pdb_140deec20(&fStack_f4);
          fVar21 = (float)pdb_140deec10(&fStack_f4);
          if (fVar21 * fVar5 <= fVar20) goto LAB_1414367a0;
          fVar20 = (float)pdb_140deec20(&fStack_f4);
          pdb_140deec20(&fStack_f4);
          uVar22 = pdb_140deec10(&fStack_f4);
          uVar23 = pdb_140deec50(&fStack_f4);
          pdb_140deead0(auStack_140,fVar20 + param_6,fVar24,uVar22,uVar23);
          cVar10 = pdb_140deea30(uStack_118,auStack_140);
          lVar18 = lStack_100;
          if (cVar10 == '\0') goto LAB_1414367a0;
          uVar16 = *(undefined1 *)((longlong)pauVar15 + lVar19 + -7);
          if (lStack_100 == lStack_110) {
            pdb_142d8d5c0(&lStack_110);
            pauVar12 = &auStack_140;
          }
          else {
            pauVar12 = &auStack_140;
          }
        }
        else {
          fVar20 = (float)pdb_140deec20(&fStack_f4);
          pdb_140deec20(&fStack_f4);
          uVar22 = pdb_140deec10(&fStack_f4);
          uVar23 = pdb_140deec50(&fStack_f4);
          pdb_140deead0(auStack_130,fVar20 - param_6,fVar24,uVar22,uVar23);
          cVar10 = pdb_140deea30(uStack_118,auStack_130);
          lVar18 = lStack_100;
          if (cVar10 == '\0') goto LAB_1414367a0;
          uVar16 = *(undefined1 *)((longlong)pauVar15 + lVar19 + -7);
          if (lStack_100 == lStack_110) {
            pdb_142d8d5c0(&lStack_110);
            pauVar12 = &auStack_130;
          }
          else {
            pauVar12 = &auStack_130;
          }
        }
        *(undefined1 (*) [16])(lStack_108 + lVar18 * 0x14) = *pauVar12;
        *(undefined1 *)(lStack_108 + 0x10 + lVar18 * 0x14) = uVar16;
        *(char *)(lStack_108 + 0x11 + lVar18 * 0x14) = cStack_e1;
        *(undefined1 *)(lStack_108 + 0x12 + lVar18 * 0x14) = 1;
        lStack_100 = lVar18 + 1;
      }
      goto LAB_1414367a0;
    }
  }
  plStack_120[2] = lStack_100;
  *plStack_120 = lStack_110;
  plStack_120[1] = lStack_108;
  return;
}

