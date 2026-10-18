// VA 0x1400b5010, PDB extent 4196 bytes
// tiny_glade::screenshot::write_image_with_callback_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::screenshot::write_image_with_callback_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
   Extent: 4196 */

undefined8 pdb_1400b5010(longlong *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  short *psVar20;
  longlong lVar21;
  char *pcVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  longlong lStackX_8;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [4];
  undefined1 auStackX_1c [4];
  char cStackX_20;
  undefined1 auStackX_21 [7];
  undefined8 uStack_48;
  
  uStack_48 = 0x1400b5026;
  lVar14 = pdb_142d7c6d0();
  lVar14 = -lVar14;
  *(undefined8 *)(&stack0x000021c0 + lVar14) = 0xfffffffffffffffe;
  uVar23 = param_2 >> 0x10 & 0xffff;
  uVar24 = param_2 & 0xffff;
  if (param_4 < uVar24 * uVar23 * 4) {
    (&stack0x000021bf)[lVar14] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5073;
    uVar15 = pdb_142d877a0(&UNK_142e3b418,0x1c);
LAB_1400b5077:
    pcVar22 = *(char **)(&stack0x00002230 + lVar14);
  }
  else {
    *(undefined8 *)(&stack0x000020d8 + lVar14) = param_3;
    *(ulonglong *)(&stack0x000020e0 + lVar14) = param_4;
    *(ulonglong *)(&stack0x000020e8 + lVar14) = uVar23 << 0x20 | uVar24;
    uVar17 = *param_1 >> 0x3f & *param_1 + 0x8000000000000001U;
    *(int *)(&stack0x000021a8 + lVar14) = (int)param_2;
    if (uVar17 == 0) {
      lVar21 = param_1[1];
      lVar5 = param_1[2];
      (&stack0x000021bf)[lVar14] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5457;
      lVar19 = lVar5;
      lVar18 = pdb_140f3eaf0(lVar21,lVar5);
      if (lVar18 != 0) {
        (&stack0x00001070)[lVar14] = 1;
        (&stack0x000021bf)[lVar14] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b547d;
        lVar19 = pdb_140f46c40(&stack0x00001070 + lVar14,lVar18,lVar19);
        if (lVar19 != 0) {
          (&stack0x000021bf)[lVar14] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5492;
          uVar15 = pdb_142d88fc0(lVar19);
          goto LAB_1400b5077;
        }
      }
      (&stack0x000021bf)[lVar14] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b54aa;
      lVar19 = lVar5;
      lVar18 = pdb_140f3eaf0(lVar21,lVar5);
      if (lVar18 == 0) {
        (&stack0x000021bf)[lVar14] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b561b;
        pdb_140f3f5b0(&stack0x00001070 + lVar14);
        (&stack0x000021bf)[lVar14] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b563b;
        uVar15 = pdb_142d884c0(&UNK_142e3b380,0x1e,&stack0x00001070 + lVar14);
      }
      else {
        *(undefined8 *)(&stack0x00001098 + lVar14) = 6;
        *(undefined **)(&stack0x00001078 + lVar14) = &UNK_142e466a1;
        *(undefined8 *)(&stack0x00001080 + lVar14) = 4;
        *(undefined8 *)(&stack0x00001088 + lVar14) = 1;
        *(undefined8 *)(&stack0x00001090 + lVar14) = 0;
        *(undefined2 *)(&stack0x000010a0 + lVar14) = 0;
        *(undefined4 *)(&stack0x00001070 + lVar14) = 0;
        (&stack0x000021bf)[lVar14] = 1;
        *(undefined1 **)(auStackX_10 + lVar14 + -0x10) = &stack0x00001070 + lVar14;
        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar14) = 6;
        *(undefined8 *)(&stack0xfffffffffffffff0 + lVar14) = 0;
        *(undefined8 *)(&stack0xffffffffffffffe8 + lVar14) = 1;
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar14) = 4;
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5547;
        pdb_140165760((longlong)&lStackX_8 + lVar14,lVar18,lVar19);
        cVar1 = auStackX_10[lVar14 + 0x10];
        if (cVar1 == '\x02') {
          (&stack0x000021bf)[lVar14] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5564;
          uVar15 = pdb_142d88fc0();
        }
        else {
          uVar3 = *(undefined4 *)(auStackX_10 + lVar14 + 4);
          uVar4 = *(undefined4 *)(auStackX_10 + lVar14 + 8);
          uVar10 = *(undefined4 *)(auStackX_10 + lVar14 + 0xc);
          *(undefined4 *)(&stack0x00002168 + lVar14) = *(undefined4 *)(auStackX_10 + lVar14);
          *(undefined4 *)(&stack0x0000216c + lVar14) = uVar3;
          *(undefined4 *)(&stack0x00002170 + lVar14) = uVar4;
          *(undefined4 *)(&stack0x00002174 + lVar14) = uVar10;
          *(undefined4 *)(&stack0x00002179 + lVar14) = *(undefined4 *)(auStackX_10 + lVar14 + 0x11);
          *(undefined4 *)(&stack0x0000217c + lVar14) = *(undefined4 *)(auStackX_10 + lVar14 + 0x14);
          *(undefined8 *)(&stack0x00002160 + lVar14) =
               *(undefined8 *)((longlong)&lStackX_8 + lVar14);
          (&stack0x00002178)[lVar14] = cVar1;
          (&stack0x000021be)[lVar14] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b567d;
          lVar19 = lVar5;
          psVar20 = (short *)pdb_140f3ec80(lVar21);
          if ((lVar19 == 3 && psVar20 != (short *)0x0) &&
             ((char)psVar20[1] == 'g' && *psVar20 == 0x706a)) {
            (&stack0x000021be)[lVar14] = 1;
            *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5885;
            pdb_140182be0(&stack0x00002188 + lVar14,&stack0x000020d8 + lVar14);
            *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b589c;
            pdb_1400c2350(&stack0x00002138 + lVar14,&stack0x00002160 + lVar14);
            *(undefined1 **)(&stack0x00002130 + lVar14) = &stack0x00002138 + lVar14;
            lVar21 = param_1[4];
            *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b58b9;
            pdb_1403d0c10((longlong)&lStackX_8 + lVar14,&stack0x00002130 + lVar14,(char)lVar21);
            *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b58d3;
            pub_142e32760(&stack0x00001070 + lVar14,(longlong)&lStackX_8 + lVar14,0x1068);
            pbVar16 = *(byte **)(&stack0x00002190 + lVar14);
            uVar15 = *(undefined8 *)(&stack0x00002198 + lVar14);
            uVar3 = *(undefined4 *)(&stack0x000021a0 + lVar14);
            uVar4 = *(undefined4 *)(&stack0x000021a4 + lVar14);
            *(undefined **)(auStackX_10 + lVar14 + -0x10) = &UNK_142e3b3a8;
            *(undefined4 *)(&stack0xffffffffffffffe8 + lVar14) = uVar4;
            *(undefined4 *)(&stack0xffffffffffffffe0 + lVar14) = uVar3;
            (&stack0xfffffffffffffff0)[lVar14] = 0xf;
            *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5918;
            pdb_1403d12d0(&stack0x000020f0 + lVar14,&stack0x00001070 + lVar14,pbVar16,uVar15);
            if (*(longlong *)(&stack0x000020f0 + lVar14) == -0x7ffffffffffffff6) {
              *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b593b;
              lVar21 = pdb_1400c2510(*(undefined8 *)(&stack0x00002130 + lVar14));
              if (lVar21 == 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5a2c;
                pdb_14049cdb0(&stack0x00002138 + lVar14);
                if (*(ulonglong *)(&stack0x00002188 + lVar14) != 0) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5a4b;
                  pub_1406abac0(pbVar16,*(ulonglong *)(&stack0x00002188 + lVar14),1);
                }
LAB_1400b5742:
                *(undefined4 *)(&stack0x00001080 + lVar14) =
                     *(undefined4 *)(&stack0x00002170 + lVar14);
                *(undefined4 *)(&stack0x00001084 + lVar14) =
                     *(undefined4 *)(&stack0x00002174 + lVar14);
                *(undefined4 *)(&stack0x00001088 + lVar14) =
                     *(undefined4 *)(&stack0x00002178 + lVar14);
                *(undefined4 *)(&stack0x0000108c + lVar14) =
                     *(undefined4 *)(&stack0x0000217c + lVar14);
                *(undefined4 *)(&stack0x00001070 + lVar14) =
                     *(undefined4 *)(&stack0x00002160 + lVar14);
                *(undefined4 *)(&stack0x00001074 + lVar14) =
                     *(undefined4 *)(&stack0x00002164 + lVar14);
                *(undefined4 *)(&stack0x00001078 + lVar14) =
                     *(undefined4 *)(&stack0x00002168 + lVar14);
                *(undefined4 *)(&stack0x0000107c + lVar14) =
                     *(undefined4 *)(&stack0x0000216c + lVar14);
                (&stack0x000021be)[lVar14] = 0;
                *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5778;
                pdb_1401174f0((longlong)&lStackX_8 + lVar14,&stack0x00001070 + lVar14,param_1);
                if ((&stack0x00000028)[lVar14] == '\x02') {
                  *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b578f;
                  CloseHandle();
                  goto LAB_1400b539b;
                }
                *(undefined8 *)(&stack0x00001088 + lVar14) =
                     *(undefined8 *)(auStackX_10 + lVar14 + 0x10);
                uVar3 = *(undefined4 *)(auStackX_10 + lVar14 + 4);
                uVar4 = *(undefined4 *)(auStackX_10 + lVar14 + 8);
                uVar10 = *(undefined4 *)(auStackX_10 + lVar14 + 0xc);
                *(undefined4 *)(&stack0x00001078 + lVar14) = *(undefined4 *)(auStackX_10 + lVar14);
                *(undefined4 *)(&stack0x0000107c + lVar14) = uVar3;
                *(undefined4 *)(&stack0x00001080 + lVar14) = uVar4;
                *(undefined4 *)(&stack0x00001084 + lVar14) = uVar10;
                *(undefined4 *)(&stack0x00001091 + lVar14) =
                     *(undefined4 *)(&stack0x00000029 + lVar14);
                *(undefined4 *)(&stack0x00001094 + lVar14) =
                     *(undefined4 *)(&stack0x0000002c + lVar14);
                *(undefined8 *)(&stack0x00001070 + lVar14) =
                     *(undefined8 *)((longlong)&lStackX_8 + lVar14);
                (&stack0x00001090)[lVar14] = (&stack0x00000028)[lVar14];
                (&stack0x000021be)[lVar14] = 0;
                *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b599b;
                uVar15 = pdb_142d89060(&stack0x00001070 + lVar14);
                goto LAB_1400b5077;
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b594d;
              uVar15 = pdb_142d88fc0(lVar21);
            }
            else {
              *(undefined8 *)(&stack0x000010a8 + lVar14) =
                   *(undefined8 *)(&stack0x00002128 + lVar14);
              *(undefined4 *)(&stack0x00001098 + lVar14) =
                   *(undefined4 *)(&stack0x00002118 + lVar14);
              *(undefined4 *)(&stack0x0000109c + lVar14) =
                   *(undefined4 *)(&stack0x0000211c + lVar14);
              *(undefined4 *)(&stack0x000010a0 + lVar14) =
                   *(undefined4 *)(&stack0x00002120 + lVar14);
              *(undefined4 *)(&stack0x000010a4 + lVar14) =
                   *(undefined4 *)(&stack0x00002124 + lVar14);
              *(undefined4 *)(&stack0x00001088 + lVar14) =
                   *(undefined4 *)(&stack0x00002108 + lVar14);
              *(undefined4 *)(&stack0x0000108c + lVar14) =
                   *(undefined4 *)(&stack0x0000210c + lVar14);
              *(undefined4 *)(&stack0x00001090 + lVar14) =
                   *(undefined4 *)(&stack0x00002110 + lVar14);
              *(undefined4 *)(&stack0x00001094 + lVar14) =
                   *(undefined4 *)(&stack0x00002114 + lVar14);
              *(undefined4 *)(&stack0x00001078 + lVar14) =
                   *(undefined4 *)(&stack0x000020f8 + lVar14);
              *(undefined4 *)(&stack0x0000107c + lVar14) =
                   *(undefined4 *)(&stack0x000020fc + lVar14);
              *(undefined4 *)(&stack0x00001080 + lVar14) =
                   *(undefined4 *)(&stack0x00002100 + lVar14);
              *(undefined4 *)(&stack0x00001084 + lVar14) =
                   *(undefined4 *)(&stack0x00002104 + lVar14);
              *(longlong *)(&stack0x00001070 + lVar14) = *(longlong *)(&stack0x000020f0 + lVar14);
              *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b59ec;
              uVar15 = pdb_142d88e60(&stack0x00001070 + lVar14);
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b59fc;
            pdb_14049cdb0(&stack0x00002138 + lVar14);
            if (*(ulonglong *)(&stack0x00002188 + lVar14) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5a1b;
              pub_1406abac0(pbVar16,*(ulonglong *)(&stack0x00002188 + lVar14),1);
            }
          }
          else {
            (&stack0x000021be)[lVar14] = 1;
            *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b56c1;
            pdb_140da1980((longlong)&lStackX_8 + lVar14,lVar21,lVar5);
            uVar2 = auStackX_10[lVar14];
            if (*(longlong *)((longlong)&lStackX_8 + lVar14) == -0x7ffffffffffffff6) {
              uVar17 = (uint)((int)uVar24 * 4) * uVar23;
              if (param_4 <= uVar17 && uVar17 - param_4 != 0) {
                (&stack0x000021be)[lVar14] = 1;
                *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5af6;
                pdb_142dc8420(0,uVar17,param_4,&UNK_142e50170);
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              (&stack0x000021be)[lVar14] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5702;
              uVar15 = pdb_1406d0830(param_3);
              (&stack0x000021be)[lVar14] = 1;
              auStackX_10[lVar14 + -0x10] = uVar2;
              *(int *)(&stack0xffffffffffffffe8 + lVar14) = (int)uVar23;
              *(int *)(&stack0xffffffffffffffe0 + lVar14) = (int)uVar24;
              (&stack0xfffffffffffffff0)[lVar14] = 0x10;
              *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5734;
              pdb_140106310((longlong)&lStackX_8 + lVar14,&stack0x00002160 + lVar14,uVar15,uVar17);
              if (*(longlong *)((longlong)&lStackX_8 + lVar14) == -0x7ffffffffffffff6)
              goto LAB_1400b5742;
              *(undefined8 *)(&stack0x000010a8 + lVar14) =
                   *(undefined8 *)(&stack0x00000040 + lVar14);
              uVar3 = *(undefined4 *)(auStackX_10 + lVar14 + 4);
              uVar4 = *(undefined4 *)(auStackX_10 + lVar14 + 8);
              uVar10 = *(undefined4 *)(auStackX_10 + lVar14 + 0xc);
              uVar11 = *(undefined4 *)(auStackX_10 + lVar14 + 0x10);
              uVar12 = *(undefined4 *)(auStackX_10 + lVar14 + 0x14);
              *(undefined4 *)(&stack0x00001098 + lVar14) =
                   *(undefined4 *)(&stack0x00000030 + lVar14);
              *(undefined4 *)(&stack0x0000109c + lVar14) =
                   *(undefined4 *)(&stack0x00000034 + lVar14);
              *(undefined4 *)(&stack0x000010a0 + lVar14) =
                   *(undefined4 *)(&stack0x00000038 + lVar14);
              *(undefined4 *)(&stack0x000010a4 + lVar14) =
                   *(undefined4 *)(&stack0x0000003c + lVar14);
              *(undefined4 *)(&stack0x00001088 + lVar14) = uVar11;
              *(undefined4 *)(&stack0x0000108c + lVar14) = uVar12;
              *(undefined4 *)(&stack0x00001090 + lVar14) =
                   *(undefined4 *)(&stack0x00000028 + lVar14);
              *(undefined4 *)(&stack0x00001094 + lVar14) =
                   *(undefined4 *)(&stack0x0000002c + lVar14);
              *(undefined4 *)(&stack0x00001078 + lVar14) = *(undefined4 *)(auStackX_10 + lVar14);
              *(undefined4 *)(&stack0x0000107c + lVar14) = uVar3;
              *(undefined4 *)(&stack0x00001080 + lVar14) = uVar4;
              *(undefined4 *)(&stack0x00001084 + lVar14) = uVar10;
              *(longlong *)(&stack0x00001070 + lVar14) =
                   *(longlong *)((longlong)&lStackX_8 + lVar14);
              (&stack0x000021be)[lVar14] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b582a;
              uVar15 = pdb_142d88e60(&stack0x00001070 + lVar14);
            }
            else {
              *(undefined8 *)(&stack0x000010a8 + lVar14) =
                   *(undefined8 *)(&stack0x00000040 + lVar14);
              uVar3 = *(undefined4 *)(auStackX_10 + lVar14 + 1);
              uVar4 = *(undefined4 *)(auStackX_10 + lVar14 + 5);
              uVar10 = *(undefined4 *)(auStackX_10 + lVar14 + 9);
              uVar11 = *(undefined4 *)(auStackX_10 + lVar14 + 0xd);
              uVar12 = *(undefined4 *)(auStackX_10 + lVar14 + 0x11);
              uVar13 = *(undefined4 *)(auStackX_10 + lVar14 + 0x15);
              *(undefined4 *)(&stack0x00001099 + lVar14) =
                   *(undefined4 *)(&stack0x00000031 + lVar14);
              *(undefined4 *)(&stack0x0000109d + lVar14) =
                   *(undefined4 *)(&stack0x00000035 + lVar14);
              *(undefined4 *)(&stack0x000010a1 + lVar14) =
                   *(undefined4 *)(&stack0x00000039 + lVar14);
              *(undefined4 *)(&stack0x000010a5 + lVar14) =
                   *(undefined4 *)(&stack0x0000003d + lVar14);
              *(undefined4 *)(&stack0x00001089 + lVar14) = uVar12;
              *(undefined4 *)(&stack0x0000108d + lVar14) = uVar13;
              *(undefined4 *)(&stack0x00001091 + lVar14) =
                   *(undefined4 *)(&stack0x00000029 + lVar14);
              *(undefined4 *)(&stack0x00001095 + lVar14) =
                   *(undefined4 *)(&stack0x0000002d + lVar14);
              *(undefined4 *)(&stack0x00001079 + lVar14) = uVar3;
              *(undefined4 *)(&stack0x0000107d + lVar14) = uVar4;
              *(undefined4 *)(&stack0x00001081 + lVar14) = uVar10;
              *(undefined4 *)(&stack0x00001085 + lVar14) = uVar11;
              *(longlong *)(&stack0x00001070 + lVar14) =
                   *(longlong *)((longlong)&lStackX_8 + lVar14);
              (&stack0x00001078)[lVar14] = uVar2;
              (&stack0x000021be)[lVar14] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b57e1;
              uVar15 = pdb_142d88e60(&stack0x00001070 + lVar14);
            }
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b583a;
          pdb_140cb07d0(&stack0x00002168 + lVar14);
          if (*(ulonglong *)(&stack0x00002170 + lVar14) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5859;
            pub_1406abac0(*(byte **)(&stack0x00002168 + lVar14),
                          *(ulonglong *)(&stack0x00002170 + lVar14),1);
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5866;
          CloseHandle(*(undefined8 *)(&stack0x00002160 + lVar14));
        }
      }
      goto LAB_1400b5077;
    }
    if (uVar17 != 1) {
      (&stack0x000021bf)[lVar14] = 1;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5aa1;
      pdb_142dc83b0(&UNK_142e3b3d8,0x28,&UNK_142e3b400);
    }
    (&stack0x000021bf)[lVar14] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5226;
    pdb_140182be0(&stack0x00002138 + lVar14,&stack0x000020d8 + lVar14);
    *(undefined8 *)(&stack0x00002188 + lVar14) = 0;
    *(undefined8 *)(&stack0x00002190 + lVar14) = 1;
    *(undefined8 *)(&stack0x00002198 + lVar14) = 0;
    lVar21 = param_1[2];
    (&stack0x000021bd)[lVar14] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5264;
    pdb_1403d0c10((longlong)&lStackX_8 + lVar14,&stack0x00002188 + lVar14,(char)lVar21);
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b527e;
    pub_142e32760(&stack0x00001070 + lVar14,(longlong)&lStackX_8 + lVar14,0x1068);
    pbVar16 = *(byte **)(&stack0x00002140 + lVar14);
    uVar15 = *(undefined8 *)(&stack0x00002148 + lVar14);
    uVar3 = *(undefined4 *)(&stack0x00002150 + lVar14);
    uVar4 = *(undefined4 *)(&stack0x00002154 + lVar14);
    (&stack0x000021bd)[lVar14] = 1;
    *(undefined **)(auStackX_10 + lVar14 + -0x10) = &UNK_142e3b3c0;
    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar14) = uVar4;
    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar14) = uVar3;
    (&stack0xfffffffffffffff0)[lVar14] = 0xf;
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b52ca;
    pdb_1403d1cb0(&stack0x000020f0 + lVar14,&stack0x00001070 + lVar14,pbVar16,uVar15);
    if (*(longlong *)(&stack0x000020f0 + lVar14) == -0x7ffffffffffffff6) {
      *(undefined8 *)(&stack0x000021b0 + lVar14) = *(undefined8 *)(&stack0x00002188 + lVar14);
      *(undefined8 *)(&stack0x00002180 + lVar14) = *(undefined8 *)(&stack0x00002190 + lVar14);
      uVar15 = *(undefined8 *)(&stack0x00002198 + lVar14);
      lVar21 = param_1[1];
      pcVar22 = (char *)(lVar21 + 0x10);
      LOCK();
      bVar25 = *(char *)(lVar21 + 0x10) == '\0';
      if (bVar25) {
        *(char *)(lVar21 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar25) {
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5ab2;
        pdb_142dbd1a0(pcVar22);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5327;
      pdb_140e9a150(pcVar22);
      uVar23 = *(ulonglong *)(lVar21 + 0x18);
      if ((!SBORROW8(0,uVar23)) && (uVar23 != 0)) {
        pbVar16 = *(byte **)(lVar21 + 0x20);
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5345;
        pub_1406abac0(pbVar16,uVar23,1);
      }
      *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(&stack0x000021b0 + lVar14);
      *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(&stack0x00002180 + lVar14);
      *(undefined8 *)(lVar21 + 0x28) = uVar15;
      (&stack0x000021bd)[lVar14] = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b536e;
      pdb_140e9a350();
      LOCK();
      cVar1 = *pcVar22;
      if (cVar1 == '\x01') {
        *pcVar22 = '\0';
      }
      UNLOCK();
      if (cVar1 != '\x01') {
        (&stack0x000021bd)[lVar14] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5ac9;
        pdb_142dbcef0(pcVar22,0);
      }
      if (*(ulonglong *)(&stack0x00002138 + lVar14) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b539b;
        pub_1406abac0(*(byte **)(&stack0x00002140 + lVar14),
                      *(ulonglong *)(&stack0x00002138 + lVar14),1);
      }
LAB_1400b539b:
      piVar9 = *(int **)(&stack0x00002230 + lVar14);
      *(undefined8 *)(&stack0x00002188 + lVar14) = 0;
      if (*piVar9 == 1) {
        lVar21 = *(longlong *)(piVar9 + 2);
        lVar5 = *(longlong *)(piVar9 + 4);
        *(longlong *)(auStackX_10 + lVar14) = lVar5;
        *(undefined8 *)((longlong)&lStackX_8 + lVar14) = 0;
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5adb;
          pdb_142dc8150(&UNK_142e3b490);
        }
        *(undefined8 *)(&stack0x00001070 + lVar14) = 0;
        *(ulonglong *)(&stack0x00001078 + lVar14) = (ulonglong)*(uint *)(&stack0x000021a8 + lVar14);
        *(longlong *)(&stack0x000021b0 + lVar14) = lVar21;
        *(longlong *)(&stack0x000021a8 + lVar14) = lVar5;
        pcVar8 = *(code **)(lVar5 + 0x18);
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5406;
        (*pcVar8)(lVar21,&stack0x00001070 + lVar14);
        uVar23 = *(ulonglong *)(*(longlong *)(&stack0x000021a8 + lVar14) + 8);
        if (uVar23 != 0) {
          uVar24 = *(ulonglong *)(*(longlong *)(&stack0x000021a8 + lVar14) + 0x10);
          *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5427;
          pub_1406abac0(*(byte **)(&stack0x000021b0 + lVar14),uVar23,uVar24);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5431;
        pdb_1404d0050((longlong)&lStackX_8 + lVar14);
      }
      goto LAB_1400b51a2;
    }
    *(undefined8 *)(&stack0x000010a8 + lVar14) = *(undefined8 *)(&stack0x00002128 + lVar14);
    *(undefined4 *)(&stack0x00001098 + lVar14) = *(undefined4 *)(&stack0x00002118 + lVar14);
    *(undefined4 *)(&stack0x0000109c + lVar14) = *(undefined4 *)(&stack0x0000211c + lVar14);
    *(undefined4 *)(&stack0x000010a0 + lVar14) = *(undefined4 *)(&stack0x00002120 + lVar14);
    *(undefined4 *)(&stack0x000010a4 + lVar14) = *(undefined4 *)(&stack0x00002124 + lVar14);
    *(undefined4 *)(&stack0x00001088 + lVar14) = *(undefined4 *)(&stack0x00002108 + lVar14);
    *(undefined4 *)(&stack0x0000108c + lVar14) = *(undefined4 *)(&stack0x0000210c + lVar14);
    *(undefined4 *)(&stack0x00001090 + lVar14) = *(undefined4 *)(&stack0x00002110 + lVar14);
    *(undefined4 *)(&stack0x00001094 + lVar14) = *(undefined4 *)(&stack0x00002114 + lVar14);
    *(undefined4 *)(&stack0x00001078 + lVar14) = *(undefined4 *)(&stack0x000020f8 + lVar14);
    *(undefined4 *)(&stack0x0000107c + lVar14) = *(undefined4 *)(&stack0x000020fc + lVar14);
    *(undefined4 *)(&stack0x00001080 + lVar14) = *(undefined4 *)(&stack0x00002100 + lVar14);
    *(undefined4 *)(&stack0x00001084 + lVar14) = *(undefined4 *)(&stack0x00002104 + lVar14);
    *(longlong *)(&stack0x00001070 + lVar14) = *(longlong *)(&stack0x000020f0 + lVar14);
    (&stack0x000021bd)[lVar14] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b55bc;
    uVar15 = pdb_142d88e60(&stack0x00001070 + lVar14);
    if (*(ulonglong *)(&stack0x00002188 + lVar14) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b55de;
      pub_1406abac0(*(byte **)(&stack0x00002190 + lVar14),*(ulonglong *)(&stack0x00002188 + lVar14),
                    1);
    }
    pcVar22 = *(char **)(&stack0x00002230 + lVar14);
    if (*(ulonglong *)(&stack0x00002138 + lVar14) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5603;
      pub_1406abac0(pbVar16,*(ulonglong *)(&stack0x00002138 + lVar14),1);
    }
  }
  *(undefined8 *)(&stack0x00002188 + lVar14) = uVar15;
  *(undefined1 **)(&stack0x00002138 + lVar14) = &stack0x00002188 + lVar14;
  if (*pcVar22 != '\0') {
    lVar21 = *(longlong *)(pcVar22 + 8);
    lVar5 = *(longlong *)(pcVar22 + 0x10);
    *(longlong *)(&stack0x000020f0 + lVar14) = lVar21;
    *(longlong *)(&stack0x000020f8 + lVar14) = lVar5;
    *(undefined1 **)((longlong)&lStackX_8 + lVar14) = &stack0x00002138 + lVar14;
    *(code **)(auStackX_10 + lVar14) = pdb_140677370;
    (&stack0x000021bc)[lVar14] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b50e6;
    pdb_140f60760(&stack0x00001070 + lVar14,&UNK_142e3b450,(longlong)&lStackX_8 + lVar14);
    uVar15 = *(undefined8 *)(&stack0x00001070 + lVar14);
    uVar6 = *(undefined8 *)(&stack0x00001078 + lVar14);
    uVar7 = *(undefined8 *)(&stack0x00001080 + lVar14);
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5101;
    pdb_14007ee60();
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5110;
    pbVar16 = pub_1406abab0(0x18,8);
    if (pbVar16 == (byte *)0x0) {
      *(undefined8 *)(&stack0x000021b0 + lVar14) = uVar6;
      *(undefined8 *)(&stack0x000021a8 + lVar14) = uVar15;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5a6d;
      pdb_142dc7e11(8,0x18);
    }
    *(undefined8 *)pbVar16 = uVar15;
    *(undefined8 *)(pbVar16 + 8) = uVar6;
    *(undefined8 *)(pbVar16 + 0x10) = uVar7;
    *(longlong *)(auStackX_10 + lVar14) = lVar5;
    *(undefined8 *)((longlong)&lStackX_8 + lVar14) = 0;
    *(longlong *)(&stack0x000021b0 + lVar14) = lVar21;
    *(byte **)(&stack0x00002180 + lVar14) = pbVar16;
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5a7f;
      pdb_142dc8150(&UNK_142e3b490);
    }
    *(byte **)(&stack0x00001070 + lVar14) = pbVar16;
    *(undefined **)(&stack0x00001078 + lVar14) = &UNK_142e3b208;
    *(longlong *)(&stack0x000021a8 + lVar14) = lVar5;
    pcVar8 = *(code **)(lVar5 + 0x18);
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5170;
    (*pcVar8)(lVar21,&stack0x00001070 + lVar14);
    uVar23 = *(ulonglong *)(*(longlong *)(&stack0x000021a8 + lVar14) + 8);
    if (uVar23 != 0) {
      uVar24 = *(ulonglong *)(*(longlong *)(&stack0x000021a8 + lVar14) + 0x10);
      *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b5191;
      pub_1406abac0(*(byte **)(&stack0x000021b0 + lVar14),uVar23,uVar24);
    }
    (&stack0x000021bc)[lVar14] = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar14) = 0x1400b51a1;
    pdb_1404d0050((longlong)&lStackX_8 + lVar14);
  }
LAB_1400b51a2:
  return *(undefined8 *)(&stack0x00002188 + lVar14);
}

