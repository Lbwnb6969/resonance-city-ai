// VA 0x140b0b280, PDB extent 478 bytes
// country_core::startup::background_terrain_maps::water_plane_footprint_ws
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::background_terrain_maps::water_plane_footprint_ws
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
   Extent: 478 */

undefined4 * pdb_140b0b280(undefined4 *param_1,longlong param_2,float param_3,float param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    uVar2 = pdb_1400af950(param_2 + 0x58,&UNK_143054090,0xf);
    lVar3 = *(longlong *)(param_2 + 0x38);
    bVar14 = (byte)(uVar2 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar7 = 0;
    do {
      uVar2 = uVar2 & *(ulonglong *)(param_2 + 0x40);
      pcVar1 = (char *)(lVar3 + uVar2);
      auVar26[0] = -(*pcVar1 == auVar16[0]);
      auVar26[1] = -(pcVar1[1] == auVar16[1]);
      auVar26[2] = -(pcVar1[2] == auVar16[2]);
      auVar26[3] = -(pcVar1[3] == auVar16[3]);
      auVar26[4] = -(pcVar1[4] == auVar16[4]);
      auVar26[5] = -(pcVar1[5] == auVar16[5]);
      auVar26[6] = -(pcVar1[6] == auVar16[6]);
      auVar26[7] = -(pcVar1[7] == auVar16[7]);
      auVar26[8] = -(pcVar1[8] == auVar16[0]);
      auVar26[9] = -(pcVar1[9] == auVar16[1]);
      auVar26[10] = -(pcVar1[10] == auVar16[2]);
      auVar26[0xb] = -(pcVar1[0xb] == auVar16[3]);
      auVar26[0xc] = -(pcVar1[0xc] == auVar16[4]);
      auVar26[0xd] = -(pcVar1[0xd] == auVar16[5]);
      auVar26[0xe] = -(pcVar1[0xe] == auVar16[6]);
      auVar26[0xf] = -(pcVar1[0xf] == auVar16[7]);
      uVar5 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar5;
      if (uVar5 != 0) {
LAB_140b0b31d:
        uVar10 = 0;
        for (uVar12 = uVar8; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        lVar6 = (uVar10 + uVar2 & *(ulonglong *)(param_2 + 0x40)) * -0x38;
        if ((*(longlong *)(lVar3 + -0x28 + lVar6) != 0xf) ||
           (lVar6 = lVar6 + lVar3,
           *(longlong *)((longlong)*(longlong **)(lVar6 + -0x30) + 7) != 0x6e6f697469736f50 ||
           **(longlong **)(lVar6 + -0x30) != 0x505f786574726556)) goto LAB_140b0b350;
        uVar4 = 0;
        if ((*(int *)(lVar6 + -0x20) == 4) && (*(longlong *)(param_2 + 0x10) != 0)) {
          lVar3 = *(longlong *)(param_2 + 0x10) << 2;
          lVar7 = 0;
          fVar15 = _DAT_143053ca0;
          fVar17 = _UNK_143053ca4;
          fVar18 = _UNK_143053ca8;
          fVar19 = _UNK_143053cac;
          do {
            uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 8) + lVar7);
            if (*(ulonglong *)(lVar6 + -8) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar2,*(ulonglong *)(lVar6 + -8),&UNK_1430542d8);
            }
            fVar24 = *(float *)(*(longlong *)(lVar6 + -0x10) + uVar2 * 0xc);
            fVar25 = *(float *)(*(longlong *)(lVar6 + -0x10) + 8 + uVar2 * 0xc);
            fVar20 = fVar24 * param_3;
            fVar23 = fVar25 * param_4;
            fVar24 = fVar24 * param_3;
            fVar25 = fVar25 * param_4;
            uVar12 = -(uint)(fVar24 < fVar18);
            uVar13 = -(uint)(fVar25 < fVar19);
            uVar8 = -(uint)(fVar15 < fVar20);
            uVar10 = -(uint)(fVar17 < fVar23);
            fVar15 = (float)(~uVar8 & (uint)fVar20 | (uint)fVar15 & uVar8);
            fVar17 = (float)(~uVar10 & (uint)fVar23 | (uint)fVar17 & uVar10);
            fVar18 = (float)(~uVar12 & (uint)fVar24 | (uint)fVar18 & uVar12);
            fVar19 = (float)(~uVar13 & (uint)fVar25 | (uint)fVar19 & uVar13);
            lVar7 = lVar7 + 4;
          } while (lVar3 != lVar7);
          iVar9 = -(uint)(fVar15 < fVar18);
          iVar11 = -(uint)(fVar17 < fVar19);
          auVar22._4_4_ = iVar11;
          auVar22._0_4_ = iVar9;
          auVar22._8_4_ = iVar11;
          auVar22._12_4_ = iVar11;
          auVar16._8_8_ = auVar22._8_8_;
          auVar16._4_4_ = iVar9;
          auVar16._0_4_ = iVar9;
          iVar9 = movmskpd((int)lVar3,auVar16);
          if (iVar9 == 3) {
            param_1[1] = fVar15;
            param_1[2] = fVar17;
            param_1[3] = fVar18;
            param_1[4] = fVar19;
            uVar4 = 1;
            goto LAB_140b0b436;
          }
          break;
        }
        goto LAB_140b0b436;
      }
LAB_140b0b360:
      auVar21[0] = -(*pcVar1 == -1);
      auVar21[1] = -(pcVar1[1] == -1);
      auVar21[2] = -(pcVar1[2] == -1);
      auVar21[3] = -(pcVar1[3] == -1);
      auVar21[4] = -(pcVar1[4] == -1);
      auVar21[5] = -(pcVar1[5] == -1);
      auVar21[6] = -(pcVar1[6] == -1);
      auVar21[7] = -(pcVar1[7] == -1);
      auVar21[8] = -(pcVar1[8] == -1);
      auVar21[9] = -(pcVar1[9] == -1);
      auVar21[10] = -(pcVar1[10] == -1);
      auVar21[0xb] = -(pcVar1[0xb] == -1);
      auVar21[0xc] = -(pcVar1[0xc] == -1);
      auVar21[0xd] = -(pcVar1[0xd] == -1);
      auVar21[0xe] = -(pcVar1[0xe] == -1);
      auVar21[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar2 = uVar2 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    } while( true );
  }
  uVar4 = 0;
LAB_140b0b436:
  *param_1 = uVar4;
  return param_1;
LAB_140b0b350:
  uVar5 = (ushort)(uVar8 - 1) & (ushort)uVar8;
  uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar5);
  if (uVar5 == 0) goto LAB_140b0b360;
  goto LAB_140b0b31d;
}

