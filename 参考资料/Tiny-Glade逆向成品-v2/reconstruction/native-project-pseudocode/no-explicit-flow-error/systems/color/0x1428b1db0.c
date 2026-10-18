// VA 0x1428b1db0, PDB extent 1135 bytes
// system_color::style_picker_feedback::picker_cursor::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_feedback.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::style_picker_feedback::picker_cursor::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_feedback.rs
   Extent: 1135 */

void pdb_1428b1db0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  float fVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  float fVar11;
  ulonglong auStack_240 [5];
  ulonglong uStack_218;
  undefined8 uStack_210;
  ulonglong uStack_208;
  undefined4 uStack_200;
  ulonglong uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulonglong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  ulonglong uStack_130;
  undefined2 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  longlong *plStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  ulonglong *puStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  uVar7 = pdb_142152670(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                        *(undefined1 *)(param_2 + 0x38),param_3,param_4,param_5);
  uStack_170 = *(undefined8 *)(param_5 + 4);
  uStack_168 = *(undefined8 *)(param_5 + 6);
  uStack_180 = *param_5;
  uStack_17c = param_5[1];
  uStack_178 = *(ulonglong *)(param_5 + 2);
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  uVar10 = uVar2 == 0;
  uStack_188 = uVar7;
  if (-1 < (longlong)uVar2) goto LAB_1428b1e74;
  param_3 = 0;
  uVar10 = true;
  while( true ) {
    pdb_142dc7e2a(param_3,uVar2);
LAB_1428b1e74:
    uStack_f0 = param_4;
    uStack_e8 = param_3;
    plStack_d8 = param_1;
    if ((bool)uVar10) break;
    param_4 = *(undefined8 *)(param_2 + 0x18);
    pdb_14007ee60();
    param_3 = 1;
    uStack_210 = pub_1406abab0(uVar2,1);
    uVar10 = uStack_210 == (byte *)0x0;
    if (!(bool)uVar10) {
      pub_142e32760(uStack_210,param_4,uVar2);
LAB_1428b1ec5:
      uStack_200 = 0;
      uStack_218 = uVar2;
      uStack_208 = uVar2;
      pdb_1428d4630(&uStack_188,&uStack_218,&UNK_1435ae3f0);
      pdb_14007ee60();
      puStack_c0 = (ulonglong *)pub_1406abab0(8,8);
      if (puStack_c0 != (ulonglong *)0x0) {
        *puStack_c0 = uVar7;
        fVar5 = _DAT_14304abd4;
        uVar4 = _DAT_143020ec0;
        uVar3 = _DAT_142e36f28;
        lStack_c8 = 1;
        lStack_b8 = 1;
        lStack_d0 = *(longlong *)(param_2 + 0x10);
        if (lStack_d0 != 0) {
          lVar9 = *(longlong *)(param_2 + 8);
          lStack_e0 = lVar9 + lStack_d0 * 0x28;
          fVar1 = *(float *)(param_2 + 0x30);
          fVar11 = *(float *)(param_2 + 0x34) + 0.0;
          lVar8 = 0;
          do {
            uStack_218 = 0x8000000000000001;
            pdb_1409bb100(&uStack_188,&uStack_218);
            pdb_1409bb0b0(&uStack_218,&uStack_188,0);
            pdb_1409bba50(auStack_240,&uStack_218,uStack_e8,uStack_f0,param_5);
            pdb_140f60be0(&uStack_218,lVar9);
            fStack_140 = (float)lVar8 * fVar5 + fVar1;
            uStack_178 = uStack_208;
            uStack_188 = uStack_218;
            uStack_180 = (undefined4)uStack_210;
            uStack_17c = uStack_210._4_4_;
            uStack_168 = CONCAT44(fVar11,fStack_140);
            uStack_160 = uVar4;
            uStack_170 = CONCAT44(uStack_170._4_4_,*(undefined4 *)(lVar9 + 0x24));
            uStack_148 = uVar4;
            uStack_130 = (ulonglong)uVar3;
            uStack_128 = 0;
            lStack_150 = lStack_d0;
            uStack_120 = 2;
            lStack_158 = lVar8;
            fStack_13c = fVar11;
            fStack_138 = fStack_140;
            fStack_134 = fVar11;
            pdb_1428d4940(auStack_240,&uStack_188,&UNK_1435ae408);
            lVar6 = lStack_b8;
            uVar2 = auStack_240[0];
            if (lStack_b8 == lStack_c8) {
              pdb_142db0920(&lStack_c8);
            }
            puStack_c0[lVar6] = uVar2;
            lStack_b8 = lVar6 + 1;
            lVar9 = lVar9 + 0x28;
            lVar8 = lVar8 + 1;
          } while (lVar9 != lStack_e0);
        }
        plStack_d8[2] = lStack_b8;
        *plStack_d8 = lStack_c8;
        plStack_d8[1] = (longlong)puStack_c0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
  }
  uStack_210 = (byte *)0x1;
  goto LAB_1428b1ec5;
}

