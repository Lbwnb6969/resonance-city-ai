// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::arch_openings_to_aabb2
// VA 0x1414853f0, PDB extent 1259 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::arch_openings_to_aabb2
   Extent: 1259 bytes. No whole-program auto-analysis. */

void pdb_1414853f0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  float extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_XMM9_Da;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  
  fVar3 = _DAT_143053cb0;
  uStack_f0 = 0xfffffffffffffffe;
  lStack_108 = 0;
  lStack_100 = 4;
  lStack_f8 = 0;
  if (param_4 != 0) {
    lVar6 = param_4 * 0x68 + param_3;
    do {
      uVar12 = *(ulonglong *)(param_3 + 0x28);
      if ((uVar12 != 0) && (uVar8 = *(ulonglong *)(param_3 + 0x10), uVar8 != 0)) {
        fVar23 = *(float *)(param_2 + 0x278) + _DAT_142f60fec;
        lVar10 = *(longlong *)(param_3 + 8);
        lVar9 = *(longlong *)(param_3 + 0x20);
        if (uVar8 < uVar12) {
          uVar12 = uVar8;
        }
        uVar11 = 0;
        bVar2 = 0;
        fVar16 = (float)_DAT_14330cff0;
        fVar20 = (float)((ulonglong)_DAT_14330cff0 >> 0x20);
        fVar21 = fVar3;
        fVar18 = _DAT_142f7737c;
        fVar22 = fVar3;
        while (lVar4 = lStack_f8, uVar11 < uVar12) {
          uStack_114 = *(undefined4 *)(lVar9 + uVar11 * 0xc);
          fVar19 = *(float *)(lVar9 + 4 + uVar11 * 0xc);
          uStack_10c = *(undefined4 *)(lVar9 + 8 + uVar11 * 0xc);
          fStack_110 = fVar19;
          uVar7 = pdb_140dea520(&uStack_114,param_2);
          bVar13 = *(int *)(param_2 + 600) == 2;
          uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),bVar13);
          fVar14 = extraout_XMM0_Da;
          if ((!(bool)(~bVar2 & 1) && !bVar13) && (extraout_XMM0_Da < unaff_XMM9_Da)) {
            do {
              fVar14 = fVar14 + *(float *)(param_2 + 0x290);
            } while (fVar14 < unaff_XMM9_Da);
          }
          fVar19 = fVar19 + *(float *)(lVar10 + uVar11 * 4);
          uVar11 = uVar11 + 1;
          fVar16 = fVar14;
          if (fVar18 <= fVar14) {
            fVar16 = fVar18;
          }
          fVar20 = (float)(~-(uint)NAN(fVar18) & (uint)fVar16 | -(uint)NAN(fVar18) & (uint)fVar14);
          fVar18 = fVar14;
          if (fVar14 <= fVar22) {
            fVar18 = fVar22;
          }
          fVar16 = (float)(~-(uint)NAN(fVar22) & (uint)fVar18 | -(uint)NAN(fVar22) & (uint)fVar14);
          fVar18 = fVar19;
          if (fVar19 <= fVar21) {
            fVar18 = fVar21;
          }
          fVar21 = (float)(~-(uint)NAN(fVar21) & (uint)fVar18 | -(uint)NAN(fVar21) & (uint)fVar19);
          bVar2 = 1;
          unaff_XMM9_Da = fVar14;
          fVar18 = fVar20;
          fVar22 = fVar16;
        }
        auVar1._4_4_ = -(uint)(_UNK_14303aa64 < (int)((uint)fVar20 & _UNK_142e377e4));
        auVar1._0_4_ = -(uint)(_DAT_14303aa60 < (int)((uint)fVar16 & _DAT_142e377e0));
        auVar1._8_4_ = -(uint)(_UNK_14303aa68 < (int)((uint)fVar23 & _UNK_142e377e8));
        auVar1._12_4_ = -(uint)(_UNK_14303aa6c < (int)((uint)fVar21 & _UNK_142e377ec));
        iVar5 = movmskps((int)uVar8,auVar1);
        if (iVar5 == 0) {
          if (*(int *)(param_2 + 600) == 2) {
            fVar16 = fVar22;
            if (lStack_f8 == lStack_108) {
              pdb_142d7ef30(&lStack_108);
            }
LAB_14148576d:
            lVar10 = lVar4 * 0x10;
            *(float *)(lStack_100 + lVar10) = fVar18;
            *(float *)(lStack_100 + 4 + lVar10) = fVar23;
            *(float *)(lStack_100 + 8 + lVar10) = fVar16;
            *(float *)(lStack_100 + 0xc + lVar10) = fVar21;
            lStack_f8 = lVar4 + 1;
          }
          else {
            fVar16 = *(float *)(param_2 + 0x290);
            if (_DAT_142e37848 < fVar16) {
              if (fVar16 + _DAT_14300b120 <= fVar22 - fVar18) {
                fVar18 = 0.0;
                if (lStack_f8 == lStack_108) {
                  pdb_142d7ef30(&lStack_108);
                }
                goto LAB_14148576d;
              }
              unaff_XMM9_Da = fVar22 + _DAT_14300b120;
              if (fVar18 < unaff_XMM9_Da) {
                fVar20 = (float)((uint)fVar16 & _DAT_142e377e0);
                do {
                  fVar19 = (float)func_0x000142e32a70(fVar18,fVar16);
                  lVar10 = lStack_f8;
                  fVar19 = (float)(~-(uint)(fVar19 < 0.0) & (uint)fVar19 |
                                  (uint)(fVar20 + fVar19) & -(uint)(fVar19 < 0.0));
                  fVar15 = fVar22 - fVar18;
                  fVar17 = fVar16 - fVar19;
                  fVar14 = fVar17;
                  if (fVar15 <= fVar17) {
                    fVar14 = fVar15;
                  }
                  fVar14 = (float)(~-(uint)NAN(fVar15) & (uint)fVar14 |
                                  -(uint)NAN(fVar15) & (uint)fVar17);
                  if (fVar14 <= _DAT_143009d64) break;
                  if (lStack_f8 == lStack_108) {
                    pdb_142d7ef30(&lStack_108);
                  }
                  lVar9 = lVar10 * 0x10;
                  *(float *)(lStack_100 + lVar9) = fVar19;
                  *(float *)(lStack_100 + 4 + lVar9) = fVar23;
                  *(float *)(lStack_100 + 8 + lVar9) = fVar19 + fVar14;
                  *(float *)(lStack_100 + 0xc + lVar9) = fVar21;
                  lStack_f8 = lVar10 + 1;
                  fVar18 = fVar18 + fVar14;
                } while (fVar18 < unaff_XMM9_Da);
              }
            }
          }
        }
      }
      param_3 = param_3 + 0x68;
    } while (param_3 != lVar6);
  }
  param_1[2] = lStack_f8;
  *param_1 = lStack_108;
  param_1[1] = lStack_100;
  return;
}

