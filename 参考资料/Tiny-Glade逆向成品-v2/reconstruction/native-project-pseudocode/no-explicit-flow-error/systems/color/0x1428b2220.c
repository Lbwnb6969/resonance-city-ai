// VA 0x1428b2220, PDB extent 1961 bytes
// system_color::style_picker_feedback::outline_target
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_feedback.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::style_picker_feedback::outline_target
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_feedback.rs
   Extent: 1961 */

void pdb_1428b2220(uint *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7,longlong *param_8)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_170;
  longlong lStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong lStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar3 = *param_1;
  uStack_160 = (ulonglong)uVar3;
  uStack_100 = param_3;
  if (uVar3 - 2 < 2) {
    lVar24 = param_2;
    uStack_170 = pdb_140c47770(param_4);
    lStack_168 = lVar24;
    lStack_158 = lVar24;
    pdb_1421248e0(&fStack_148,param_2,param_1);
    fVar8 = _UNK_142e378f8;
    fVar7 = _UNK_142e378f4;
    fVar6 = _DAT_142e378f0;
    fVar4 = _DAT_142e36f28;
    lStack_108 = CONCAT44(fStack_144,fStack_148);
    pbStack_f8 = (byte *)CONCAT44(fStack_13c,fStack_140);
    lVar24 = CONCAT44(fStack_134,fStack_138);
    if (lVar24 != 0) {
      uStack_150 = *(undefined8 *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0xc0);
      lVar28 = 0;
      do {
        uVar3 = *(uint *)(pbStack_f8 + lVar28);
        lVar21 = pdb_140c40010(uVar5,uVar3);
        if ((lVar21 != 0) &&
           (pdb_140c45b00(&fStack_148,uStack_100,uVar3), fVar18 = fStack_114, fVar17 = fStack_118,
           fVar16 = fStack_11c, fVar15 = fStack_120, fVar14 = fStack_124, fVar13 = fStack_128,
           fVar12 = fStack_12c, fVar11 = fStack_130, fVar10 = fStack_134, fVar9 = fStack_138,
           ((uint)fStack_148 & 1) != 0)) {
          if (*(byte *)(lVar21 + 0x32) < 2) {
            uVar27 = (ulonglong)uVar3;
            lVar22 = pdb_140c3ee20(uVar5);
            if (lVar22 == 3) goto LAB_1428b23d0;
            fStack_148 = (float)lVar22;
            fStack_144 = (float)((ulonglong)lVar22 >> 0x20);
            fStack_140 = (float)uVar27;
            fStack_13c = (float)(uVar27 >> 0x20);
            lVar22 = pdb_140c413e0(&fStack_148);
            if ((lVar22 != 1) || (lVar22 = pdb_140b54f80(uStack_150), lVar22 == 0))
            goto LAB_1428b23d0;
            bVar29 = *(uint *)(lVar22 + 600) < 2;
          }
          else {
LAB_1428b23d0:
            bVar29 = false;
          }
          pdb_140a34500(&fStack_148,param_6);
          fVar34 = fVar10 + fVar10;
          fVar35 = fVar12 + fVar12;
          fVar30 = fVar4;
          if ((int)uStack_160 == 3) {
            fVar30 = fVar11 * fVar11;
            fVar31 = fVar12 * fVar12;
            fVar33 = fVar10 * fVar10 + fVar9 * fVar9;
            fVar32 = fVar11 * fVar8 + fVar10 * fVar7 + fVar9 * fVar6;
            fVar32 = fVar32 + fVar32;
            fVar30 = *(float *)(&UNK_1435ae288 +
                               (ulonglong)
                               ((fVar35 * (fVar9 * 0.0 - fVar10 * 0.0) +
                                fVar32 * fVar11 + (fVar31 - (fVar33 + fVar30)) * fVar8) *
                                (fStack_140 - fVar15) +
                                (fStack_148 - fVar13) *
                                (fVar35 * (fVar10 * fVar4 - fVar11 * 0.0) +
                                fVar32 * fVar9 + (fVar31 - (fVar33 + fVar30)) * fVar6) +
                                (fVar35 * (fVar11 * 0.0 - fVar9 * fVar4) +
                                fVar32 * fVar10 + (fVar31 - (fVar33 + fVar30)) * fVar7) *
                                (fStack_144 - fVar14) < 0.0) * 4);
          }
          uVar2 = *(undefined1 *)(lVar21 + 0x59);
          uVar19 = pdb_140c45920(&uStack_170,uVar3);
          uVar23 = pdb_140c44e40(lStack_158,
                                 CONCAT71((int7)((ulonglong)lVar21 >> 8),uVar2) & 0xffffffff,uVar19)
          ;
          fVar31 = fVar11 + fVar11;
          fVar35 = fVar9 * (fVar9 + fVar9);
          fVar32 = (fVar9 + fVar9) * fVar12;
          fStack_13c = fVar31 * fVar9 - fVar34 * fVar12;
          fStack_12c = fVar32 + fVar31 * fVar10;
          fStack_11c = fVar4 - (fVar35 + fVar10 * fVar34);
          fStack_148 = fVar16 * (fVar4 - (fVar10 * fVar34 + fVar11 * fVar31));
          fStack_144 = fVar16 * (fVar34 * fVar9 + fVar12 * fVar31);
          fStack_140 = fVar16 * fStack_13c;
          fStack_13c = fVar16 * fStack_13c;
          fStack_138 = fVar17 * (fVar34 * fVar9 - fVar12 * fVar31);
          fStack_134 = fVar17 * (fVar4 - (fVar11 * fVar31 + fVar35));
          fStack_130 = fVar17 * fStack_12c;
          fStack_12c = fVar17 * fStack_12c;
          fStack_128 = fVar18 * (fVar34 * fVar12 + fVar31 * fVar9);
          fStack_124 = fVar18 * (fVar31 * fVar10 - fVar32);
          fStack_120 = fVar18 * fStack_11c;
          fStack_11c = fVar18 * fStack_11c;
          fStack_118 = fVar13;
          fStack_114 = fVar14;
          fStack_110 = fVar15;
          fStack_10c = fVar15;
          pdb_140c67620(uVar23,&fStack_148,param_5,uVar3,uVar2,bVar29,1,fVar30);
        }
        lVar28 = lVar28 + 4;
      } while (lVar24 << 2 != lVar28);
    }
    if (lStack_108 != 0) {
      pub_1406abac0(pbStack_f8,lStack_108 << 2,4);
    }
  }
  else if (uVar3 == 0) {
    pdb_140bc10b0(&fStack_148,*(undefined8 *)(param_1 + 2),4,_DAT_142e36f28);
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar24 = *param_7;
    lVar28 = *(longlong *)(lVar24 + 0x30);
    uVar5 = *(undefined8 *)(lVar24 + 0x40);
    pbStack_f8 = (byte *)CONCAT44(fStack_144,fStack_148);
    uStack_100 = CONCAT44(fStack_13c,fStack_140);
    if (lVar28 == *(longlong *)(lVar24 + 0x20)) {
      pdb_142d7ede0(lVar24 + 0x20);
    }
    lVar21 = *(longlong *)(lVar24 + 0x28);
    *(byte **)(lVar21 + lVar28 * 0x28) = pbStack_f8;
    *(undefined8 *)(lVar21 + 8 + lVar28 * 0x28) = uStack_100;
    puVar1 = (undefined8 *)(lVar21 + 0x10 + lVar28 * 0x28);
    *puVar1 = CONCAT44(fStack_134,fStack_138);
    puVar1[1] = CONCAT44(fStack_12c,fStack_130);
    *(undefined8 *)(lVar21 + 0x20 + lVar28 * 0x28) = uVar5;
    *(longlong *)(lVar24 + 0x30) = lVar28 + 1;
    *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
  }
  else {
    fVar4 = (float)param_1[1];
    lVar24 = pdb_140a61160(*(undefined8 *)(param_2 + 0x40));
    uVar27 = *(ulonglong *)(lVar24 + 0x10);
    if (uVar27 != 0) {
      fStack_148 = fVar4;
      if (uVar27 == 1) {
        lVar24 = *(longlong *)(lVar24 + 8);
        if (fVar4 != *(float *)(lVar24 + 0x20)) {
          return;
        }
        uVar25 = 0;
      }
      else {
        uVar25 = pdb_140fc4e90(lVar24 + 0x38,&fStack_148);
        uVar26 = pdb_142b39ce0(lVar24,uVar25,&fStack_148);
        if ((uVar26 & 1) == 0) {
          return;
        }
        if (uVar27 <= uVar25) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar25,uVar27,&UNK_14366cdd8);
        }
        lVar24 = *(longlong *)(lVar24 + 8);
        if (lVar24 == 0) {
          return;
        }
      }
      if (*(longlong *)(lVar24 + 0x10 + uVar25 * 0x28) != 0) {
        uVar19 = **(undefined4 **)(lVar24 + 8 + uVar25 * 0x28);
        uVar20 = pdb_140a61520(fVar4);
        *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
        lVar24 = *param_8;
        lVar28 = *(longlong *)(lVar24 + 0x30);
        uVar5 = *(undefined8 *)(lVar24 + 0x40);
        if (lVar28 == *(longlong *)(lVar24 + 0x20)) {
          pdb_142d7e830(lVar24 + 0x20);
        }
        lVar21 = *(longlong *)(lVar24 + 0x28);
        *(undefined8 *)(lVar21 + lVar28 * 0x18) = uVar5;
        *(undefined4 *)(lVar21 + 8 + lVar28 * 0x18) = uVar20;
        *(undefined4 *)(lVar21 + 0xc + lVar28 * 0x18) = uVar19;
        *(undefined2 *)(lVar21 + 0x10 + lVar28 * 0x18) = 0x100;
        *(longlong *)(lVar24 + 0x30) = lVar28 + 1;
        *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
      }
    }
  }
  return;
}

