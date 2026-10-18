// VA 0x1408a6bc0, PDB extent 715 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::gen_stairs_collider_and_rt_geo
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::gen_stairs_collider_and_rt_geo
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 715 */

void pdb_1408a6bc0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6,longlong param_7,char param_8,byte param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  char cVar1;
  longlong lVar2;
  char cStack_1b5;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float *pfStack_e8;
  float *pfStack_e0;
  float *pfStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  longlong lStack_40;
  undefined1 uStack_38;
  
  cStack_1b5 = param_8;
  cVar1 = pdb_1408ff980(&cStack_1b5);
  fStack_1b4 = _DAT_142e37ae4;
  if (cVar1 == '\0') {
    fStack_1b4 = _DAT_142e36f50;
  }
  fStack_1b0 = _DAT_142e37ae4 * fStack_1b4;
  if (param_8 == '\0') {
    lVar2 = 0;
    if (1 < param_9) {
      lVar2 = (ulonglong)param_9 - 1;
    }
    fStack_1ac = 0.0;
    if ((lVar2 == 3) || (lVar2 == 0)) goto LAB_1408a6c4f;
  }
  fStack_1ac = fStack_1b0;
LAB_1408a6c4f:
  uStack_1a8 = 0;
  uStack_1a0 = 4;
  uStack_198 = 1;
  uStack_190 = 1;
  uStack_188 = 4;
  uStack_180 = 5;
  uStack_178 = 2;
  uStack_170 = 3;
  uStack_168 = 6;
  uStack_160 = 3;
  uStack_158 = 7;
  uStack_150 = 6;
  uStack_148 = 0;
  uStack_140 = 2;
  uStack_138 = 4;
  uStack_130 = 2;
  uStack_128 = 6;
  uStack_120 = 4;
  uStack_118 = 1;
  uStack_110 = 5;
  uStack_108 = 3;
  uStack_100 = 3;
  uStack_f8 = 5;
  uStack_f0 = 7;
  if (param_7 != 0) {
    uStack_68 = param_2;
    if (param_4 < param_2) {
      uStack_68 = param_4;
    }
    uStack_48 = uStack_68;
    if (param_6 < uStack_68) {
      uStack_48 = param_6;
    }
    lStack_58 = param_5 + param_6 * 4;
    lStack_78 = param_3 + param_4 * 8;
    lStack_88 = param_1 + param_2 * 0xc;
    lStack_40 = param_7 + -1;
    pfStack_e8 = &fStack_1b4;
    pfStack_e0 = &fStack_1b0;
    pfStack_d8 = &fStack_1ac;
    uStack_d0 = param_12;
    puStack_c8 = &uStack_1a8;
    uStack_c0 = 0;
    uStack_70 = 0;
    lStack_60 = param_5;
    uStack_50 = 0;
    uStack_38 = 1;
    lStack_90 = param_1;
    lStack_80 = param_3;
    pdb_141496580(param_11,&pfStack_e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143014478,0x1b,&UNK_143014510);
}

