// VA 0x1409fe300, PDB extent 1847 bytes
// country_core::systems::ui::signifiers::signifier_arch_highlight::append_arch_highlights
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_arch_highlight.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::signifier_arch_highlight::append_arch_highlights
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/signifier_arch_highlight.rs
   Extent: 1847 */

void pdb_1409fe300(float *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined1 param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  byte *pbVar17;
  float *pfVar18;
  code *pcVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float *pfVar22;
  float *unaff_RBX;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulonglong uStack_130;
  byte *pbStack_128;
  float *pfStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  code *pcStack_100;
  float *pfStack_f8;
  code *pcStack_f0;
  float *pfStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  byte *pbStack_b0;
  float *pfStack_a8;
  ulonglong uStack_a0;
  code *pcStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_72 = param_6;
  lVar25 = param_4 * 0x68 + param_3;
  lVar23 = 0;
  fVar34 = (float)_DAT_142e378e0;
  uVar16 = (ulonglong)_DAT_142e378e0 >> 0x20;
  uStack_110 = param_2;
  if (param_3 != lVar25) {
    do {
      uVar26 = *(ulonglong *)(param_3 + 0x28);
      uVar21 = uVar26 * 0xc;
      lStack_118 = lVar23;
      if (0xaaaaaaaaaaaaaaa < uVar26) {
        uVar27 = 0;
LAB_1409fe844:
        pdb_142dc7e2a(uVar27,uVar21);
LAB_1409fe84f:
        uVar27 = 0;
LAB_1409fe852:
        pdb_142dc7e2a(uVar27,unaff_RBX);
                    /* WARNING: Does not return */
        pcVar19 = (code *)invalidInstructionException();
        (*pcVar19)();
      }
      unaff_RBX = *(float **)(param_3 + 0x20);
      pfStack_a8 = param_1;
      if (uVar21 == 0) {
        pbVar17 = (byte *)0x4;
        uVar20 = 0;
      }
      else {
        pdb_14007ee60();
        uVar27 = 4;
        pbVar17 = pub_1406abab0(uVar21,4);
        uVar20 = uVar26;
        if (pbVar17 == (byte *)0x0) goto LAB_1409fe844;
      }
      uStack_80 = 0;
      uStack_90 = uVar20;
      pbStack_88 = pbVar17;
      if (uVar26 != 0) {
        pub_142e32760(pbVar17,unaff_RBX,uVar21);
        uStack_80 = uVar26;
      }
      pfVar12 = *(float **)(param_3 + 8);
      uVar21 = *(ulonglong *)(param_3 + 0x10);
      if (uVar26 <= *(ulonglong *)(param_3 + 0x10)) {
        uVar21 = uVar26;
      }
      if (uStack_90 - uVar26 < uVar21) {
        uStack_71 = 1;
        pdb_142d7f1b0(&uStack_90,uVar26,uVar21,4,0xc);
        uVar26 = uStack_80;
joined_r0x0001409fe5ad:
        if (3 < uVar21) {
          pfVar18 = (float *)(pbStack_88 + uVar26 * 0xc);
          if ((pfVar12 + uVar21 <= pfVar18 || pfVar18 + uVar21 * 3 <= pfVar12) &&
             (unaff_RBX + uVar21 * 3 <= pfVar18 || pfVar18 + uVar21 * 3 <= unaff_RBX)) {
            uStack_a0 = uVar21 & 0xffffffffffffffc;
            uVar26 = uVar26 + uStack_a0;
            pfVar22 = unaff_RBX + uVar21 * 3 + -1;
            lVar24 = 0;
            do {
              pfVar1 = pfVar12 + uVar21 + lVar24 + -4;
              fVar13 = *pfVar1;
              fVar14 = pfVar1[1];
              fVar15 = pfVar1[3];
              fVar2 = pfVar22[-5];
              fVar29 = pfVar22[-2];
              fVar3 = pfVar22[-0xb];
              fVar4 = pfVar22[-10];
              fVar5 = pfVar22[-9];
              fVar6 = pfVar22[-8];
              fVar7 = pfVar22[-7];
              fVar8 = pfVar22[-1];
              fVar9 = pfVar22[-6];
              fVar10 = pfVar22[-3];
              fVar11 = *pfVar22;
              fVar30 = fVar15 * 0.0;
              fVar31 = pfVar1[2] * 0.0;
              fVar32 = fVar14 * 0.0;
              fVar33 = fVar13 * 0.0;
              pfVar18[4] = pfVar22[-4] + pfVar1[2];
              pfVar18[5] = fVar31 + fVar10;
              pfVar18[6] = fVar6 + fVar32;
              pfVar18[7] = fVar7 + fVar14;
              *pfVar18 = fVar29 + fVar30;
              pfVar18[1] = fVar8 + fVar15;
              pfVar18[2] = fVar30 + fVar11;
              pfVar18[3] = fVar2 + fVar31;
              pfVar18[8] = fVar32 + fVar9;
              pfVar18[9] = fVar3 + fVar33;
              pfVar18[10] = fVar4 + fVar13;
              pfVar18[0xb] = fVar33 + fVar5;
              pfVar18 = pfVar18 + 0xc;
              lVar24 = lVar24 + -4;
              pfVar22 = pfVar22 + -0xc;
            } while (-lVar24 != uStack_a0);
            bVar28 = uVar21 == uStack_a0;
            uVar21 = (ulonglong)((uint)uVar21 & 3);
            if (bVar28) goto LAB_1409fe634;
          }
        }
        pfVar18 = (float *)(pbStack_88 + uVar26 * 0xc + 8);
        pfVar22 = unaff_RBX + uVar21 * 3 + -1;
        lVar24 = 0;
        do {
          fVar29 = pfVar12[uVar21 + lVar24 + -1] * fVar34;
          fVar2 = *pfVar22;
          *(ulonglong *)(pfVar18 + -2) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar22 + -2) >> 0x20) +
                        pfVar12[uVar21 + lVar24 + -1] * (float)uVar16,
                        (float)*(undefined8 *)(pfVar22 + -2) + fVar29);
          *pfVar18 = fVar29 + fVar2;
          lVar24 = lVar24 + -1;
          pfVar18 = pfVar18 + 3;
          pfVar22 = pfVar22 + -3;
        } while (-lVar24 != uVar21);
        uVar26 = uVar26 - lVar24;
      }
      else if (uVar21 != 0) goto joined_r0x0001409fe5ad;
LAB_1409fe634:
      uStack_80 = uVar26;
      if (uVar26 == 0) {
        uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143034558);
      }
      pcStack_108 = *(code **)pbStack_88;
      pcStack_100 = (code *)CONCAT44(pcStack_100._4_4_,*(undefined4 *)(pbStack_88 + 8));
      if (uVar26 == uStack_90) {
        uStack_71 = 1;
        pdb_142db7820(&uStack_90);
      }
      *(undefined4 *)(pbStack_88 + uVar26 * 0xc + 8) = pcStack_100._0_4_;
      *(code **)(pbStack_88 + uVar26 * 0xc) = pcStack_108;
      uStack_80 = uVar26 + 1;
      pcStack_108 = (code *)&uStack_110;
      pcStack_100 = pdb_140a009b0;
      pfStack_f8 = (float *)&lStack_118;
      pcStack_f0 = pdb_140090b90;
      pfStack_e8 = (float *)&param_5;
      pcStack_e0 = pdb_140f705d0;
      puStack_d8 = &uStack_72;
      pcStack_d0 = pdb_140a00a80;
      uStack_71 = 1;
      pdb_140f60760(&uStack_130,&UNK_143034570,&pcStack_108);
      uVar20 = uStack_80;
      pbVar17 = pbStack_88;
      uVar21 = uStack_90;
      unaff_RBX = pfStack_120;
      uVar26 = uStack_130;
      pbStack_b0 = pbStack_128;
      lStack_c8 = lVar25;
      pdb_14007ee60();
      pcStack_98 = (code *)pub_1406abab0(0x28,8);
      uStack_a0 = uVar26;
      if (pcStack_98 == (code *)0x0) {
        pcStack_98 = (code *)uVar21;
        pfStack_a8 = (float *)pbVar17;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
      *(undefined8 *)pcStack_98 = 1;
      *(undefined8 *)(pcStack_98 + 8) = 1;
      *(ulonglong *)(pcStack_98 + 0x10) = uVar21;
      *(byte **)(pcStack_98 + 0x18) = pbVar17;
      *(ulonglong *)(pcStack_98 + 0x20) = uVar20;
      pcStack_100 = (code *)&UNK_143034588;
      pcStack_108 = pcStack_98;
      if ((longlong)unaff_RBX < 0) goto LAB_1409fe84f;
      lStack_c0 = lVar23 + 1;
      lStack_b8 = param_3 + 0x68;
      if (unaff_RBX == (float *)0x0) {
        pcVar19 = (code *)0x1;
        lVar25 = lStack_c8;
      }
      else {
        pdb_14007ee60();
        uVar27 = 1;
        pcVar19 = (code *)pub_1406abab0((ulonglong)unaff_RBX,1);
        lVar25 = lStack_c8;
        if (pcVar19 == (code *)0x0) goto LAB_1409fe852;
        pub_142e32760(pcVar19,pbStack_b0,unaff_RBX);
      }
      param_1 = pfStack_a8;
      param_3 = lStack_b8;
      lVar23 = lStack_c0;
      pcStack_100 = (code *)CONCAT71(pcStack_100._1_7_,2);
      pfStack_f8 = unaff_RBX;
      pfStack_e8 = unaff_RBX;
      pcStack_e0 = pcStack_98;
      puStack_d8 = &UNK_143034588;
      pcStack_f0 = pcVar19;
      pdb_141a88350(pfStack_a8,&pcStack_108);
      if (uStack_a0 != 0) {
        pub_1406abac0(pbStack_b0,uStack_a0,1);
      }
      unaff_RBX = param_1;
    } while (param_3 != lVar25);
  }
  return;
}

