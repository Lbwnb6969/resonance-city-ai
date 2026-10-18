// VA 0x140ac6240, PDB extent 1986 bytes
// country_core::systems::camera_rig::walk::impl$2::translate_screen_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::camera_rig::walk::impl$2::translate_screen_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
   Extent: 1986 */

void pdb_140ac6240(longlong param_1,float *param_2,float param_3,undefined ***param_4)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float unaff_XMM11_Dc;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined *puStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_15c;
  undefined **ppuStack_158;
  code *pcStack_150;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_128;
  int iStack_124;
  undefined ***pppuStack_110;
  ulonglong uStack_108;
  undefined2 uStack_100;
  undefined1 auStack_f8 [8];
  float fStack_f0;
  
  *(float *)(param_1 + 0x50) = param_3;
  fVar33 = _DAT_142e36f28;
  fVar18 = *param_2;
  fVar36 = (float)*(undefined8 *)(param_2 + 1);
  fVar29 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar17 = fVar29 * fVar29 + fVar18 * fVar18 + fVar36 * fVar36;
  if (_DAT_14304ab40 <= fVar17) {
    cVar3 = *(char *)(param_1 + 0x54);
    fVar41 = *(float *)(param_1 + 0x18);
    fVar31 = *(float *)(param_1 + 0x1c);
    fVar32 = *(float *)(param_1 + 0x20);
    fVar37 = *(float *)(param_1 + 0x24);
    fVar24 = fVar32 * fVar32;
    fVar25 = fVar37 * fVar37;
    fVar30 = fVar31 * fVar31 + fVar41 * fVar41;
    fVar26 = fVar29 * fVar32 + fVar36 * fVar31 + fVar18 * fVar41;
    fVar26 = fVar26 + fVar26;
    fVar37 = fVar37 + fVar37;
    fVar34 = fVar37 * (fVar31 * fVar29 - fVar36 * fVar32) +
             fVar26 * fVar41 + (fVar25 - (fVar30 + fVar24)) * fVar18;
    fVar35 = fVar37 * (fVar32 * fVar18 - fVar29 * fVar41) +
             fVar26 * fVar31 + (fVar25 - (fVar30 + fVar24)) * fVar36;
    fVar36 = fVar37 * (fVar41 * fVar36 - fVar18 * fVar31) +
             fVar26 * fVar32 + (fVar25 - (fVar30 + fVar24)) * fVar29;
    fVar18 = fVar35;
    if (cVar3 == '\0') {
      fVar18 = 0.0;
    }
    fVar29 = _DAT_142e36f28 / SQRT(fVar36 * fVar36 + fVar18 * fVar18 + fVar34 * fVar34);
    puVar9 = (undefined8 *)CONCAT71((int7)((ulonglong)param_2 >> 8),-1 < (int)fVar29);
    bVar4 = (int)fVar29 - 1U < 0x7fffff ||
            (int)ABS(fVar29) - 0x800000U < 0x7f000000 && -1 < (int)fVar29;
    if (bVar4) {
      fVar41 = fVar34 * fVar29;
    }
    else {
      fVar41 = 0.0;
    }
    fVar17 = SQRT(fVar17);
    uVar6 = (uint)bVar4;
    fVar18 = (float)((int)(uVar6 << 0x1f) >> 0x1f & (uint)(fVar18 * fVar29));
    auVar38._0_4_ = fVar17 * fVar18 * _DAT_14304ab50;
    auVar38._4_4_ = fVar17 * fVar18 * _UNK_14304ab54;
    auVar38._8_4_ =
         fVar17 * (float)((int)(uVar6 << 0x1f) >> 0x1f & (uint)(fVar36 * fVar29)) * _UNK_14304ab58;
    auVar38._12_4_ = unaff_XMM11_Dc * 0.0 * _UNK_14304ab5c;
    auVar38 = divps(auVar38,_DAT_14304ab60);
    auVar39._4_12_ = auVar38._4_12_;
    auVar39._0_4_ = (fVar41 * fVar17 * _DAT_142f57bc8) / _DAT_142f3e554;
    puVar14 = *(undefined8 **)(param_1 + 8);
    lVar16 = *(longlong *)(param_1 + 0x10);
    lVar15 = lVar16 << 4;
    puVar7 = puVar14;
    fStack_15c = param_3;
    pppuStack_110 = param_4;
    do {
      if (lVar15 == 0) goto LAB_140ac697b;
      puVar1 = puVar7 + 2;
      puVar8 = (undefined8 *)(**(code **)(puVar7[1] + 0x38))(*puVar7);
      puVar7 = puVar9 + 3;
      puVar9 = puVar8;
      (*(code *)*puVar7)(&ppuStack_158);
      pppuVar2 = pppuStack_110;
      fVar29 = _UNK_14304abac;
      fVar17 = _UNK_14304aba4;
      fVar18 = _DAT_14304aba0;
      uVar5 = _DAT_142e36f50;
      lVar15 = lVar15 + -0x10;
      puVar7 = puVar1;
    } while ((puVar8 == (undefined8 *)0x0) ||
            (pcStack_150 != (code *)0x2e441b8be050d85b ||
             ppuStack_158 != (undefined **)0x1d5a207d10288a54));
    fVar41 = *(float *)(puVar8 + 1);
    fVar31 = (float)*puVar8 + _DAT_14304ab70;
    fVar32 = (float)((ulonglong)*puVar8 >> 0x20) + _UNK_14304ab74;
    fVar37 = _UNK_14304ab78 + 0.0;
    fVar24 = _UNK_14304ab7c + 0.0;
    uVar12 = 0x30ef;
    if (cVar3 != '\0') {
      uVar12 = 0x20;
    }
    iVar13 = 8;
    while( true ) {
      puStack_178 = (undefined *)CONCAT44(fVar32,fVar31);
      fStack_16c = auVar39._0_4_;
      fVar25 = fStack_16c;
      fStack_168 = auVar39._4_4_;
      fVar26 = fStack_168;
      fVar30 = auVar39._8_4_;
      uStack_108 = (ulonglong)(uint)_DAT_142e36f28;
      uStack_100 = 0;
      pppuVar11 = pppuVar2;
      fStack_170 = fVar41;
      fStack_164 = fVar30;
      pdb_1409ed190(&ppuStack_158,pppuVar2,&puStack_178,uVar5,&uStack_108,uVar12);
      fVar40 = auVar39._12_4_;
      if (iStack_124 == 2) break;
      fVar20 = 0.0;
      if (0.0 <= fStack_128) {
        fVar20 = fStack_128;
      }
      fVar27 = fVar33;
      if (fVar20 <= fVar33) {
        fVar27 = fVar20;
      }
      fVar31 = fVar31 + fVar27 * fVar25 * _DAT_14304ab80;
      fVar32 = fVar32 + fVar27 * fVar26 * _UNK_14304ab84;
      fVar37 = fVar37 + fVar30 * 0.0 * _UNK_14304ab88;
      fVar24 = fVar24 + fVar40 * 0.0 * _UNK_14304ab8c;
      fVar41 = fVar41 + fVar30 * fVar27 * _DAT_143007998;
      fVar28 = fVar33 - fVar27;
      fVar42 = (float)uStack_130;
      fVar20 = (float)((ulonglong)uStack_130 >> 0x20);
      fVar43 = fVar33 / SQRT(fVar20 * fVar20 + fStack_134 * fStack_134 + fVar42 * fVar42);
      fVar44 = fVar43 * fStack_134 * fVar28 * fVar25 + fVar42 * fVar43 * fVar26 * fVar28 +
               fVar43 * fVar20 * fVar28 * fVar30;
      fVar20 = fVar30 * fVar27 * fVar18 + (fVar28 * fVar30 - fVar44 * fVar43 * fVar20);
      fVar23 = fVar27 * fVar25 * fVar17 + (fVar28 * fVar25 - fVar44 * fVar43 * fStack_134);
      fVar25 = (fVar26 * fVar28 - fVar42 * fVar43 * fVar44) + fVar27 * fVar26 * _DAT_14304ab90;
      if ((fVar34 * fVar23 + fVar35 * fVar25 + fVar36 * fVar20 <= 0.0) ||
         (fVar23 * fVar23 + fVar25 * fVar25 + fVar20 * fVar20 < _DAT_14304ab40)) goto LAB_140ac671f;
      auVar39._4_4_ = fVar25;
      auVar39._0_4_ = fVar23;
      auVar39._8_4_ = fVar20;
      auVar39._12_4_ = fVar30 * 0.0 * fVar29 + (fVar40 * 0.0 - fVar40 * 0.0 * 0.0 * 0.0);
      iVar13 = iVar13 + -1;
      if (iVar13 == 0) goto LAB_140ac671f;
    }
    fVar31 = fVar31 + fVar25;
    fVar32 = fVar32 + fVar26;
    fVar37 = fVar37 + fVar30;
    fVar24 = fVar24 + fVar40;
    fVar41 = fVar41 + fVar30;
LAB_140ac671f:
    fVar31 = fVar31 + _DAT_142f89640;
    fVar32 = fVar32 + _UNK_142f89644;
    fVar37 = fVar37 + _UNK_142f89648;
    fVar24 = fVar24 + _UNK_142f8964c;
    fVar41 = fVar41 + 0.0;
    if (DAT_143ca42c4 != '\0') {
      fVar18 = (float)pub_142e32a20(fStack_15c * _DAT_142e37888);
      fVar33 = fVar33 - fVar18;
      if (DAT_143cb2d0c == '\0') {
        auVar19._0_8_ = (undefined **)CONCAT44(fVar41,fVar31);
        auVar22._8_4_ = fVar37;
        auVar22._0_8_ = auVar19._0_8_;
        auVar22._12_4_ = fVar24;
        auVar38 = maxps(auVar22,_DAT_14304abb0);
        auVar38 = minps(auVar38,_DAT_14304abc0);
        fVar18 = fVar31 - auVar38._0_4_;
        fVar17 = fVar41 - auVar38._4_4_;
        fVar36 = fVar17 * fVar17 + fVar18 * fVar18;
        if (_DAT_14304abd0 < fVar36) {
          fVar36 = _DAT_14304abd4 / SQRT(fVar36);
          auVar19._0_8_ =
               (undefined **)
               CONCAT44(auVar38._4_4_ + fVar17 * fVar36,auVar38._0_4_ + fVar18 * fVar36);
        }
      }
      else {
        fVar18 = fVar41 * fVar41 + fVar31 * fVar31;
        auVar19._0_8_ = (undefined **)CONCAT44(fVar41,fVar31);
        auVar19._8_4_ = fVar37;
        auVar19._12_4_ = fVar24;
        if (_DAT_14304abd8 < fVar18) {
          auVar21._0_4_ = SQRT(fVar18);
          auVar21._4_4_ = auVar21._0_4_;
          auVar21._8_8_ = 0;
          auVar38 = divps(auVar19,auVar21);
          auVar19._0_8_ =
               (undefined **)CONCAT44(auVar38._4_4_ * _UNK_14304abe4,auVar38._0_4_ * _DAT_14304abe0)
          ;
        }
      }
      pppuVar11 = &ppuStack_158;
      ppuStack_158 = auVar19._0_8_;
      pdb_140df4540(auStack_f8,pppuVar11,fVar32);
      fVar31 = fVar31 + fVar33 * (auStack_f8._0_4_ - fVar31);
      fVar32 = fVar32 + fVar33 * (auStack_f8._4_4_ - fVar32);
      fVar41 = fVar41 + (fStack_f0 - fVar41) * fVar33;
    }
    lVar15 = lVar16 << 4;
    puVar9 = puVar14;
    do {
      if (lVar15 == 0) {
LAB_140ac697b:
        puStack_178 = &UNK_14337fa53;
        fStack_170 = 4.76441e-44;
        fStack_16c = 0.0;
        ppuStack_158 = &puStack_178;
        pcStack_150 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14337f99a,&ppuStack_158,&UNK_14337fa98);
      }
      puVar7 = puVar9 + 2;
      pppuVar10 = (undefined ***)(**(code **)(puVar9[1] + 0x38))(*puVar9);
      pppuVar2 = pppuVar11 + 3;
      pppuVar11 = pppuVar10;
      (*(code *)*pppuVar2)(&ppuStack_158);
      lVar15 = lVar15 + -0x10;
      puVar9 = puVar7;
    } while ((pppuVar10 == (undefined ***)0x0) ||
            (pcStack_150 != (code *)0x2e441b8be050d85b ||
             ppuStack_158 != (undefined **)0x1d5a207d10288a54));
    auVar19._0_8_ = *pppuVar10;
    fVar18 = *(float *)(pppuVar10 + 1);
    lVar16 = lVar16 << 4;
    do {
      if (lVar16 == 0) {
        puStack_178 = &UNK_14337fa53;
        fStack_170 = 4.76441e-44;
        fStack_16c = 0.0;
        ppuStack_158 = &puStack_178;
        pcStack_150 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14337f99a,&ppuStack_158,&UNK_14337fa18);
      }
      puVar9 = puVar14 + 2;
      pppuVar10 = (undefined ***)(**(code **)(puVar14[1] + 0x40))(*puVar14);
      pppuVar2 = pppuVar11 + 3;
      pppuVar11 = pppuVar10;
      (*(code *)*pppuVar2)(&ppuStack_158);
      lVar16 = lVar16 + -0x10;
      puVar14 = puVar9;
    } while ((pppuVar10 == (undefined ***)0x0) ||
            (pcStack_150 != (code *)0x2e441b8be050d85b ||
             ppuStack_158 != (undefined **)0x1d5a207d10288a54));
    *pppuVar10 = (undefined **)
                 CONCAT44((fVar32 - (float)((ulonglong)auVar19._0_8_ >> 0x20)) +
                          (float)((ulonglong)*pppuVar10 >> 0x20),
                          (fVar31 - SUB84(auVar19._0_8_,0)) + SUB84(*pppuVar10,0));
    *(float *)(pppuVar10 + 1) = (fVar41 - fVar18) + *(float *)(pppuVar10 + 1);
  }
  return;
}

