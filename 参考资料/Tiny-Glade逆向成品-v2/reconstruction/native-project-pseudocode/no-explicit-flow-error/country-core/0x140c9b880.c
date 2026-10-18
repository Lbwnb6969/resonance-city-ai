// VA 0x140c9b880, PDB extent 2505 bytes
// country_core::systems::wall::shapes::shape_placement_signifiers::shape_placement_signifiers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement_signifiers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::shape_placement_signifiers::shape_placement_signifiers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement_signifiers.rs
   Extent: 2505 */

void pdb_140c9b880(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  byte *arg0;
  float fVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
  ushort uVar16;
  longlong lVar17;
  undefined8 uVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_108;
  undefined4 uStack_100;
  byte *pbStack_f8;
  code *pcStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  code *pcStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined *puStack_90;
  byte *pbStack_88;
  undefined8 uStack_80;
  float fStack_78;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (((*(char *)*param_1 == '\x01') && (((char *)*param_1)[1] != '\0')) &&
     (lVar3 = *param_2, *(char *)(lVar3 + 0x34) != '\x02')) {
    uStack_100 = *(undefined4 *)(lVar3 + 0x54);
    uStack_108 = *(undefined8 *)(lVar3 + 0x4c);
    if (*(int *)(lVar3 + 0x10) != 0) {
      if (*(int *)(lVar3 + 0x10) != 2) {
        param_4 = (longlong *)*param_4;
        pbVar10 = *(byte **)(lVar3 + 0x28);
        pbStack_c0 = pbVar10;
        if (param_4[3] != 0) {
          uVar11 = pdb_1400af0a0(param_4 + 4,&pbStack_c0);
          lVar15 = *param_4;
          bVar19 = (byte)(uVar11 >> 0x39);
          auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
          auVar20 = pshuflw(auVar20,auVar20,0);
          lVar14 = 0;
          do {
            uVar11 = uVar11 & param_4[1];
            auVar1 = *(undefined1 (*) [16])(lVar15 + uVar11);
            auVar25[0] = -(auVar1[0] == auVar20[0]);
            auVar25[1] = -(auVar1[1] == auVar20[1]);
            auVar25[2] = -(auVar1[2] == auVar20[2]);
            auVar25[3] = -(auVar1[3] == auVar20[3]);
            auVar25[4] = -(auVar1[4] == auVar20[4]);
            auVar25[5] = -(auVar1[5] == auVar20[5]);
            auVar25[6] = -(auVar1[6] == auVar20[6]);
            auVar25[7] = -(auVar1[7] == auVar20[7]);
            auVar25[8] = -(auVar1[8] == auVar20[0]);
            auVar25[9] = -(auVar1[9] == auVar20[1]);
            auVar25[10] = -(auVar1[10] == auVar20[2]);
            auVar25[0xb] = -(auVar1[0xb] == auVar20[3]);
            auVar25[0xc] = -(auVar1[0xc] == auVar20[4]);
            auVar25[0xd] = -(auVar1[0xd] == auVar20[5]);
            auVar25[0xe] = -(auVar1[0xe] == auVar20[6]);
            auVar25[0xf] = -(auVar1[0xf] == auVar20[7]);
            uVar16 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar25[0xf] >> 7) << 0xf;
            uVar9 = (uint)uVar16;
            while (uVar16 != 0) {
              uVar6 = 0;
              for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              lVar17 = (uVar6 + uVar11 & param_4[1]) * -0x2b0;
              if (pbVar10 == *(byte **)(lVar15 + -0x2b0 + lVar17)) {
                lVar15 = lVar15 + lVar17;
                if ((*(ulonglong *)(lVar15 + -0x298) < 2) || (*(float *)(lVar15 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143077320);
                }
                pbVar10 = (byte *)(lVar15 + -0x2a8);
                fVar2 = *(float *)(lVar3 + 0x54);
                uStack_80 = *(byte **)(lVar3 + 0x4c);
                fStack_78 = fVar2;
                if (*(uint *)(lVar15 + -0x50) < 2) {
                  fVar8 = (float)uStack_80;
                  uVar9 = pdb_1419aad80(pbVar10);
                  uVar11 = (ulonglong)uVar9;
                  if (*(ulonglong *)(lVar15 + -0x298) <= uVar11 + 1) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar11 + 1,*(ulonglong *)(lVar15 + -0x298),&UNK_14335e708);
                  }
                  uVar4 = *(undefined8 *)(*(longlong *)(lVar15 + -0x2a0) + uVar11 * 8);
                  uVar18 = *(undefined8 *)(*(longlong *)(lVar15 + -0x2a0) + 8 + uVar11 * 8);
                  fVar21 = (float)uVar18 - (float)uVar4;
                  fVar22 = (float)((ulonglong)uVar18 >> 0x20) - (float)((ulonglong)uVar4 >> 0x20);
                  fVar23 = _DAT_142e36f28 / SQRT(fVar22 * fVar22 + fVar21 * fVar21);
                  pbStack_d8 = (byte *)CONCAT44(fVar21 * fVar23 * _UNK_143077154 * _UNK_142e36f64,
                                                fVar22 * fVar23 * _DAT_143077150 * _DAT_142e36f60);
                  pdb_140df4520(&pbStack_c0,&pbStack_d8);
                  uStack_80 = (byte *)CONCAT44(uStack_80._4_4_ +
                                               (float)((ulonglong)pbStack_c0 >> 0x20),
                                               fVar8 + SUB84(pbStack_c0,0));
                  fStack_78 = fVar2 + pcStack_b8._0_4_;
                }
                uVar4 = *param_3;
                pbStack_c0 = (byte *)&uStack_80;
                pcStack_b8 = pdb_140f33d80;
                pdb_140f60760(&pbStack_d8,&UNK_143077350,&pbStack_c0);
                pcVar5 = pcStack_d0;
                pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,fStack_78);
                pbStack_c0 = uStack_80;
                pdb_14007ee60();
                pbStack_88 = pub_1406abab0(0x20,8);
                if (pbStack_88 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc7e11(8,0x20);
                }
                pbStack_88[0] = 1;
                pbStack_88[1] = 0;
                pbStack_88[2] = 0;
                pbStack_88[3] = 0;
                pbStack_88[4] = 0;
                pbStack_88[5] = 0;
                pbStack_88[6] = 0;
                pbStack_88[7] = 0;
                pbStack_88[8] = 1;
                pbStack_88[9] = 0;
                pbStack_88[10] = 0;
                pbStack_88[0xb] = 0;
                pbStack_88[0xc] = 0;
                pbStack_88[0xd] = 0;
                pbStack_88[0xe] = 0;
                pbStack_88[0xf] = 0;
                *(byte **)(pbStack_88 + 0x10) = pbStack_c0;
                *(float *)(pbStack_88 + 0x18) = pcStack_b8._0_4_;
                pcStack_b8 = (code *)&UNK_143077368;
                pbStack_c0 = pbStack_88;
                if ((longlong)pbStack_c8 < 0) {
                  uVar18 = 0;
LAB_140c9bbea:
                  pdb_142dc7e2a(uVar18,pbStack_c8);
                  goto LAB_140c9bf17;
                }
                pbStack_e0 = pbVar10;
                if (pbStack_c8 == (byte *)0x0) {
                  pbVar10 = (byte *)0x1;
                }
                else {
                  pdb_14007ee60();
                  uVar18 = 1;
                  pbVar10 = pub_1406abab0((ulonglong)pbStack_c8,1);
                  if (pbVar10 == (byte *)0x0) goto LAB_140c9bbea;
                  pub_142e32760(pbVar10,pcVar5,pbStack_c8);
                }
                pcStack_b8 = (code *)CONCAT71(pcStack_b8._1_7_,2);
                pbStack_b0 = pbStack_c8;
                pbStack_a0 = pbStack_c8;
                pbStack_98 = pbStack_88;
                puStack_90 = &UNK_143077368;
                pbStack_a8 = pbVar10;
                pdb_141a88350(uVar4,&pbStack_c0);
                pbVar10 = pbStack_e0;
                if (pbStack_d8 != (byte *)0x0) {
                  pub_1406abac0((byte *)pcVar5,(ulonglong)pbStack_d8,1);
                }
                pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,fStack_78);
                pbStack_d8 = uStack_80;
                pdb_140c9ae80(&pbStack_c0,pbVar10,&pbStack_d8,*param_5,0x40900000,
                              *(undefined4 *)(lVar3 + 0x44),*(undefined4 *)(lVar3 + 0x3c));
                pbVar10 = pbStack_a0;
                if (SBORROW8(0,(longlong)pbStack_b0)) {
                  return;
                }
                pbStack_88 = pbStack_b0;
                pbStack_e0 = pbStack_a8;
                pbStack_d8 = (byte *)&uStack_80;
                pcStack_d0 = pdb_140f33d80;
                uStack_71 = 1;
                pdb_140f60760(&pbStack_c0,&UNK_143077398,&pbStack_d8);
                arg0 = pbStack_b0;
                pcVar5 = pcStack_b8;
                pbVar12 = pbStack_c0;
                pdb_14007ee60();
                pbVar13 = pub_1406abab0(0x28,8);
                pbStack_f8 = pbVar12;
                pcStack_f0 = pcVar5;
                if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc7e11(8,0x28);
                }
                pbVar13[0] = 1;
                pbVar13[1] = 0;
                pbVar13[2] = 0;
                pbVar13[3] = 0;
                pbVar13[4] = 0;
                pbVar13[5] = 0;
                pbVar13[6] = 0;
                pbVar13[7] = 0;
                pbVar13[8] = 1;
                pbVar13[9] = 0;
                pbVar13[10] = 0;
                pbVar13[0xb] = 0;
                pbVar13[0xc] = 0;
                pbVar13[0xd] = 0;
                pbVar13[0xe] = 0;
                pbVar13[0xf] = 0;
                *(byte **)(pbVar13 + 0x10) = pbStack_88;
                *(byte **)(pbVar13 + 0x18) = pbStack_e0;
                *(byte **)(pbVar13 + 0x20) = pbVar10;
                pcStack_b8 = (code *)&UNK_1430773b0;
                pbStack_c0 = pbVar13;
                if ((longlong)arg0 < 0) {
                  uVar18 = 0;
                  pbStack_e8 = pbVar13;
LAB_140c9be39:
                  pdb_142dc7e2a(uVar18,arg0);
                  goto LAB_140c9bf17;
                }
                if (arg0 == (byte *)0x0) {
                  pbVar10 = (byte *)0x1;
                }
                else {
                  pbStack_e8 = pbVar13;
                  pdb_14007ee60();
                  uVar18 = 1;
                  pbVar10 = pub_1406abab0((ulonglong)arg0,1);
                  if (pbVar10 == (byte *)0x0) goto LAB_140c9be39;
                  pub_142e32760(pbVar10,pcVar5,arg0);
                  pbVar13 = pbStack_e8;
                }
                pcStack_b8 = (code *)CONCAT71(pcStack_b8._1_7_,2);
                pbStack_a0 = arg0;
                puStack_90 = &UNK_1430773b0;
                pbStack_b0 = arg0;
                pbStack_a8 = pbVar10;
                pbStack_98 = pbVar13;
                pdb_141a88350(uVar4,&pbStack_c0);
                pbVar10 = pbStack_f8;
                pcVar5 = pcStack_f0;
                goto joined_r0x000140c9beb5;
              }
              uVar16 = (ushort)(uVar9 - 1) & (ushort)uVar9;
              uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar16);
            }
            auVar24[0] = -(auVar1[0] == -1);
            auVar24[1] = -(auVar1[1] == -1);
            auVar24[2] = -(auVar1[2] == -1);
            auVar24[3] = -(auVar1[3] == -1);
            auVar24[4] = -(auVar1[4] == -1);
            auVar24[5] = -(auVar1[5] == -1);
            auVar24[6] = -(auVar1[6] == -1);
            auVar24[7] = -(auVar1[7] == -1);
            auVar24[8] = -(auVar1[8] == -1);
            auVar24[9] = -(auVar1[9] == -1);
            auVar24[10] = -(auVar1[10] == -1);
            auVar24[0xb] = -(auVar1[0xb] == -1);
            auVar24[0xc] = -(auVar1[0xc] == -1);
            auVar24[0xd] = -(auVar1[0xd] == -1);
            auVar24[0xe] = -(auVar1[0xe] == -1);
            auVar24[0xf] = -(auVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
            uVar11 = uVar11 + lVar14 + 0x10;
            lVar14 = lVar14 + 0x10;
          } while( true );
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143077338);
      }
      fStack_78 = *(float *)(lVar3 + 0x1c);
      uStack_80 = *(byte **)(lVar3 + 0x14);
      uVar4 = *param_3;
      pbStack_c0 = (byte *)&uStack_108;
      pcStack_b8 = pdb_140f33d80;
      pdb_140f60760(&pbStack_d8,&UNK_143077350,&pbStack_c0);
      pcVar5 = pcStack_d0;
      pdb_14007ee60();
      pbVar10 = pub_1406abab0(0x20,8);
      if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      pbVar10[0] = 1;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
      pbVar10[4] = 0;
      pbVar10[5] = 0;
      pbVar10[6] = 0;
      pbVar10[7] = 0;
      pbVar10[8] = 1;
      pbVar10[9] = 0;
      pbVar10[10] = 0;
      pbVar10[0xb] = 0;
      pbVar10[0xc] = 0;
      pbVar10[0xd] = 0;
      pbVar10[0xe] = 0;
      pbVar10[0xf] = 0;
      *(byte **)(pbVar10 + 0x10) = uStack_80;
      *(float *)(pbVar10 + 0x18) = fStack_78;
      pcStack_b8 = (code *)&UNK_1430773e0;
      pbStack_c0 = pbVar10;
      if ((longlong)pbStack_c8 < 0) {
        uVar18 = 0;
LAB_140c9b98d:
        pbStack_88 = pbVar10;
        pdb_142dc7e2a(uVar18,pbStack_c8);
LAB_140c9bf17:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (pbStack_c8 == (byte *)0x0) {
        pbVar12 = (byte *)0x1;
      }
      else {
        pdb_14007ee60();
        uVar18 = 1;
        pbVar12 = pub_1406abab0((ulonglong)pbStack_c8,1);
        if (pbVar12 == (byte *)0x0) goto LAB_140c9b98d;
        pub_142e32760(pbVar12,pcVar5,pbStack_c8);
      }
      pcStack_b8 = (code *)CONCAT71(pcStack_b8._1_7_,2);
      pbStack_b0 = pbStack_c8;
      pbStack_a0 = pbStack_c8;
      puStack_90 = &UNK_1430773e0;
      pbStack_a8 = pbVar12;
      pbStack_98 = pbVar10;
      pdb_141a88350(uVar4,&pbStack_c0);
      pbVar10 = pbStack_d8;
joined_r0x000140c9beb5:
      if (pbVar10 != (byte *)0x0) {
        pub_1406abac0((byte *)pcVar5,(ulonglong)pbVar10,1);
      }
    }
  }
  return;
}

