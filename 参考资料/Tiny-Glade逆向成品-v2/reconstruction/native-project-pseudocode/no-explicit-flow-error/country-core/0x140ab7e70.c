// VA 0x140ab7e70, PDB extent 1121 bytes
// country_core::systems::wall::snapping::snapping_to_segments::snapping_to_segments
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_to_segments.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::snapping::snapping_to_segments::snapping_to_segments
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_to_segments.rs
   Extent: 1121 */

void pdb_140ab7e70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  byte *arg0;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  byte *pbVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  byte *pbVar17;
  byte bVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong *plStack_e8;
  char *pcStack_e0;
  undefined8 *puStack_d8;
  longlong *plStack_d0;
  undefined8 *puStack_c0;
  longlong lStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  undefined8 **ppuStack_98;
  longlong lStack_90;
  byte *pbStack_88;
  undefined8 uStack_80;
  float fStack_78;
  char acStack_71 [49];
  
  acStack_71[1] = -2;
  acStack_71[2] = -1;
  acStack_71[3] = -1;
  acStack_71[4] = -1;
  acStack_71[5] = -1;
  acStack_71[6] = -1;
  acStack_71[7] = -1;
  acStack_71[8] = -1;
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\x01') {
    plVar5 = (longlong *)*param_2;
    if (SBORROW8(0,*plVar5)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14304ad80);
    }
    acStack_71[0] = pcVar4[1];
    pcVar10 = "";
    if (*(char *)*param_3 != '\0') {
      pcVar10 = (char *)*param_3 + 4;
    }
    fStack_78 = *(float *)(pcVar10 + 8);
    uStack_80 = *(undefined8 *)pcVar10;
    param_4 = (longlong *)*param_4;
    lStack_a0 = 0;
    ppuStack_98 = (undefined8 **)0x8;
    lStack_90 = 0;
    uStack_f8 = (undefined8 **)
                CONCAT44(fStack_78 + _UNK_14304ab14,(float)uStack_80 + _DAT_14304ab10);
    uStack_f0 = (undefined8 **)
                CONCAT44(fStack_78 + _UNK_14304ab1c,(float)uStack_80 + _UNK_14304ab18);
    pdb_140b57420(*param_5,&uStack_f8,&lStack_a0);
    uStack_f0 = ppuStack_98 + lStack_90;
    uStack_f8 = ppuStack_98;
    pcStack_e0 = acStack_71;
    plStack_e8 = plVar5;
    puStack_d8 = &uStack_80;
    plStack_d0 = param_4;
    pdb_141606280(&lStack_b8,&uStack_f8);
    arg0 = pbStack_b0;
    if (uStack_a8 != 0) {
      uStack_f8 = &puStack_c0;
      puStack_c0 = &uStack_80;
      if (uStack_a8 != 1) {
        pbStack_88 = pbStack_b0;
        if (uStack_a8 < 0x15) {
          pbVar17 = pbStack_b0 + uStack_a8 * 0x18;
          pbVar12 = pbStack_b0 + 0x18;
          do {
            pdb_141510a20(arg0,pbVar12,&puStack_c0);
            pbVar12 = pbVar12 + 0x18;
          } while (pbVar12 != pbVar17);
        }
        else {
          pdb_140c75020(pbStack_b0,uStack_a8,&uStack_f8);
        }
      }
      uVar1 = *(undefined8 *)arg0;
      fVar21 = (float)uVar1 - (float)uStack_80;
      fVar22 = (float)((ulonglong)uVar1 >> 0x20) - fStack_78;
      if (SQRT(fVar22 * fVar22 + fVar21 * fVar21) < _DAT_142e37838) {
        lVar6 = *(longlong *)(arg0 + 0x10);
        if (lStack_b8 != 0) {
          pub_1406abac0(arg0,lStack_b8 * 0x18,8);
        }
        if (lStack_a0 != 0) {
          pub_1406abac0((byte *)ppuStack_98,lStack_a0 << 3,8);
        }
        uStack_100 = uVar1;
        pdb_140df4520(&uStack_f8,&uStack_100);
        uVar19 = pdb_1419c1ac0(*param_6);
        lStack_b8 = lVar6;
        if (param_4[3] != 0) {
          uVar9 = pdb_1400af0a0(param_4 + 4,&lStack_b8);
          lVar11 = *param_4;
          bVar18 = (byte)(uVar9 >> 0x39);
          auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
          auVar20 = pshuflw(auVar20,auVar20,0);
          lVar13 = 0;
          while( true ) {
            uVar9 = uVar9 & param_4[1];
            auVar2 = *(undefined1 (*) [16])(lVar11 + uVar9);
            auVar24[0] = -(auVar2[0] == auVar20[0]);
            auVar24[1] = -(auVar2[1] == auVar20[1]);
            auVar24[2] = -(auVar2[2] == auVar20[2]);
            auVar24[3] = -(auVar2[3] == auVar20[3]);
            auVar24[4] = -(auVar2[4] == auVar20[4]);
            auVar24[5] = -(auVar2[5] == auVar20[5]);
            auVar24[6] = -(auVar2[6] == auVar20[6]);
            auVar24[7] = -(auVar2[7] == auVar20[7]);
            auVar24[8] = -(auVar2[8] == auVar20[0]);
            auVar24[9] = -(auVar2[9] == auVar20[1]);
            auVar24[10] = -(auVar2[10] == auVar20[2]);
            auVar24[0xb] = -(auVar2[0xb] == auVar20[3]);
            auVar24[0xc] = -(auVar2[0xc] == auVar20[4]);
            auVar24[0xd] = -(auVar2[0xd] == auVar20[5]);
            auVar24[0xe] = -(auVar2[0xe] == auVar20[6]);
            auVar24[0xf] = -(auVar2[0xf] == auVar20[7]);
            uVar15 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar24[0xf] >> 7) << 0xf;
            uVar14 = (uint)uVar15;
            while (uVar15 != 0) {
              uVar7 = 0;
              for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              lVar16 = (uVar7 + uVar9 & param_4[1]) * -0x2b0;
              if (lVar6 == *(longlong *)(lVar11 + -0x2b0 + lVar16)) {
                lVar11 = lVar11 + lVar16;
                if ((1 < *(ulonglong *)(lVar11 + -0x298)) && (0.0 < *(float *)(lVar11 + -0x278))) {
                  cVar3 = *(char *)(lVar11 + -8);
                  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
                  *pcVar4 = '\x03';
                  pcVar4[1] = cVar3;
                  *(undefined4 *)(pcVar4 + 4) = uVar19;
                  *(undefined8 *)(pcVar4 + 8) = uVar1;
                  *(longlong *)(pcVar4 + 0x10) = lVar6;
                  return;
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14304ad98);
              }
              uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
              uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
            }
            auVar23[0] = -(auVar2[0] == -1);
            auVar23[1] = -(auVar2[1] == -1);
            auVar23[2] = -(auVar2[2] == -1);
            auVar23[3] = -(auVar2[3] == -1);
            auVar23[4] = -(auVar2[4] == -1);
            auVar23[5] = -(auVar2[5] == -1);
            auVar23[6] = -(auVar2[6] == -1);
            auVar23[7] = -(auVar2[7] == -1);
            auVar23[8] = -(auVar2[8] == -1);
            auVar23[9] = -(auVar2[9] == -1);
            auVar23[10] = -(auVar2[10] == -1);
            auVar23[0xb] = -(auVar2[0xb] == -1);
            auVar23[0xc] = -(auVar2[0xc] == -1);
            auVar23[0xd] = -(auVar2[0xd] == -1);
            auVar23[0xe] = -(auVar2[0xe] == -1);
            auVar23[0xf] = -(auVar2[0xf] == -1);
            if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
            uVar9 = uVar9 + lVar13 + 0x10;
            lVar13 = lVar13 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14304adb0);
      }
    }
    if (lStack_b8 != 0) {
      pub_1406abac0(pbStack_b0,lStack_b8 * 0x18,8);
    }
    if (lStack_a0 != 0) {
      pub_1406abac0((byte *)ppuStack_98,lStack_a0 << 3,8);
    }
  }
  return;
}

