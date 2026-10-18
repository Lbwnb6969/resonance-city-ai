// VA 0x1408af5c0, PDB extent 1270 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_railing_shared::railing_tip_placements::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_railing_shared.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_railing_shared::railing_tip_placements::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_railing_shared.rs
   Extent: 1270 */

void pdb_1408af5c0(longlong *param_1,float param_2,float param_3,ulonglong param_4,longlong param_5)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  undefined8 uStack_fc;
  float fStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined1 auStack_e4 [164];
  
  if (*(char *)(*param_1 + param_5) == '\x01') {
    lVar8 = param_1[1];
    uVar11 = *(ulonglong *)(lVar8 + 0x70);
    if (uVar11 != 0) {
      fStack_150 = param_2;
      fStack_14c = param_3;
      if (uVar11 == 1) {
        lVar8 = *(longlong *)(lVar8 + 0x68);
        if (param_2 != *(float *)(lVar8 + 8)) {
          return;
        }
        if (param_3 != *(float *)(lVar8 + 0xc)) {
          return;
        }
        cVar3 = *(char *)(lVar8 + 0x10);
      }
      else {
        uVar9 = pdb_1400af680(lVar8 + 0x98,&fStack_150);
        uVar10 = pdb_1414af730(lVar8 + 0x60,uVar9,&fStack_150);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar9,uVar11,&UNK_143311df8);
        }
        cVar3 = *(char *)(*(longlong *)(lVar8 + 0x68) + 0x10 + uVar9 * 0x28);
      }
      if (cVar3 == '\x01') {
        lVar8 = pdb_140a61160();
        uVar11 = *(ulonglong *)(lVar8 + 0x10);
        if (uVar11 != 0) {
          if (uVar11 == 1) {
            lVar8 = *(longlong *)(lVar8 + 8);
            if (param_2 != *(float *)(lVar8 + 0x20)) {
              return;
            }
            uVar9 = 0;
            fStack_150 = param_2;
          }
          else {
            fStack_150 = param_2;
            uVar9 = pdb_1400aede0(lVar8 + 0x38,&fStack_150);
            uVar10 = pdb_1414af660(lVar8,uVar9,&fStack_150);
            if ((uVar10 & 1) == 0) {
              return;
            }
            if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar9,uVar11,&UNK_143311df8);
            }
            lVar8 = *(longlong *)(lVar8 + 8);
            if (lVar8 == 0) {
              return;
            }
          }
          uVar11 = (ulonglong)(uint)param_2;
          lVar8 = *(longlong *)(lVar8 + 0x10 + uVar9 * 0x28);
          if (((lVar8 != 0) && (lVar8 * 8 - 8U < 8)) &&
             (lVar8 = pdb_140c3ee20(param_1[3]), fVar4 = _DAT_142e36f38, lVar8 == 0)) {
            if ((ulonglong)param_1[5] <= param_4) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(param_4,param_1[5],&UNK_1430150d8);
            }
            if ((ulonglong)param_1[7] <= param_4) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(param_4,param_1[7],&UNK_1430150f0);
            }
            uVar2 = *(undefined8 *)(param_1[4] + param_4 * 0xc);
            fVar13 = (float)uVar2;
            fVar14 = (float)((ulonglong)uVar2 >> 0x20);
            fVar1 = *(float *)(param_1[4] + 8 + param_4 * 0xc);
            uStack_110 = *(undefined8 *)(param_1[6] + param_4 * 8);
            uVar15 = (undefined4)uStack_110;
            uVar9 = (ulonglong)uStack_110 >> 0x20;
            if ((ulonglong)param_1[9] <= param_4) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(param_4,param_1[9],&UNK_143015108);
            }
            fVar12 = *(float *)(param_1[8] + param_4 * 4) + _DAT_142e36f38;
            pdb_140df4520(&fStack_150,&uStack_110);
            fVar7 = _UNK_142e36f64;
            fVar6 = _DAT_142e36f60;
            fVar5 = _DAT_142e36f50;
            fVar16 = fStack_148 * _DAT_142e36f50 * _DAT_142e36f50;
            fVar17 = fStack_150 * _DAT_142e36f60 * _DAT_142e36f60;
            fVar18 = fStack_14c * _UNK_142e36f64 * _UNK_142e36f64;
            pdb_140df4520(&fStack_150,&uStack_110);
            fStack_f4 = -fStack_148;
            uStack_fc = CONCAT44((uint)fStack_14c ^ _UNK_142e37824,(uint)fStack_150 ^ _DAT_142e37820
                                );
            uStack_108 = CONCAT44(fVar18 + fVar14,fVar17 + fVar13);
            fVar12 = fVar12 + fVar4;
            if (fVar12 <= _DAT_142e3b1d8) {
              fVar12 = _DAT_142e3b1d8;
            }
            fVar18 = (float)((uint)uVar9 ^ _DAT_142e37820);
            fStack_128 = fVar18;
            fStack_124 = (float)uVar15;
            fStack_100 = fVar16 + fVar1;
            pdb_140df4520(&fStack_150,&fStack_128);
            fVar16 = fVar12 * fStack_150;
            fVar17 = fVar12 * fStack_14c;
            fStack_150 = fVar18;
            fStack_14c = (float)uVar15;
            pdb_140df4520(auStack_e4,&fStack_150);
            uStack_f0 = CONCAT44(fVar14 - fVar17 * fVar7,fVar13 - fVar16 * fVar6);
            fStack_128 = fVar13 + _DAT_143015050;
            fStack_124 = fVar14 + _UNK_143015054;
            fStack_120 = fVar1 + _UNK_143015058;
            fStack_11c = _DAT_142e377f0 + _UNK_14301505c;
            uStack_118 = _DAT_142fa5c30;
            lVar8 = param_1[10];
            fStack_e8 = fStack_148 * fVar12 * fVar4 + fVar1;
            pdb_1409efb80(&fStack_150,lVar8,&uStack_108,fVar5,1,1,uVar11);
            if (fStack_150._0_1_ == '\x11') {
              pdb_1409efb80(&fStack_150,lVar8,&uStack_f0,fVar12,1,1,uVar11);
              if (fStack_150._0_1_ == '\x11') {
                pdb_1409efb80(&fStack_150,lVar8,&fStack_128,_DAT_142e36f50,1,1,uVar11);
                if (fStack_150._0_1_ == '\x11') {
                  *(undefined1 *)(param_1[0xb] + param_5) = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

