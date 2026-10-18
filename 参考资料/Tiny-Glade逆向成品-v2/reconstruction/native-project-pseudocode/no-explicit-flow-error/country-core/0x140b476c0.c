// VA 0x140b476c0, PDB extent 1196 bytes
// country_core::systems::ui_move_wall_group::WallGroupTransformCache::target_states
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_move_wall_group::WallGroupTransformCache::target_states
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 1196 */

void pdb_140b476c0(ulonglong *param_1,float *param_2,ulonglong param_3,float *param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong uStack_98;
  float fStack_90;
  float fStack_8c;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  float *pfStack_70;
  float *pfStack_68;
  float *pfStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  fVar7 = (float)*(undefined8 *)(param_4 + 8);
  fVar11 = (float)((ulonglong)*(undefined8 *)(param_4 + 8) >> 0x20);
  fVar10 = (fVar11 * param_4[2] + fVar7 * *param_4 + (float)*(undefined8 *)(param_4 + 4)) - fVar7;
  fVar11 = (fVar11 * param_4[3] + fVar7 * param_4[1] +
           (float)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20)) - fVar11;
  if ((_DAT_14304ab40 <= fVar11 * fVar11 + fVar10 * fVar10) ||
     (uVar8 = pub_142e32980(), _DAT_142e37934 <= (float)(uVar8 & _DAT_142e377e0))) {
LAB_140b47784:
    pfStack_70 = param_2;
    pfStack_68 = param_2 + param_3 * 0x32;
    pfStack_60 = param_4;
    pdb_1415f55b0(&uStack_a8,&pfStack_70);
    pcStack_58 = (code *)param_5;
    pfStack_70 = param_2;
    pfStack_68 = param_2 + param_3 * 0x32;
    pfStack_60 = param_4;
    pdb_141604e80(&uStack_88,&pfStack_70);
    fVar11 = _DAT_142f3e554;
    fVar7 = _DAT_142e3c620;
    uVar1 = param_3;
    if (uStack_78 < param_3) {
      uVar1 = uStack_78;
    }
    if (uVar1 != 0) {
      uVar2 = 0;
      fVar9 = 0.0;
      iVar6 = 0;
      fVar10 = _DAT_143053cb0;
      do {
        pfVar3 = param_2 + (uVar2 * 0x19 + 0x18) * 2;
        uVar5 = uVar2;
        while ((uVar2 = uVar5 + 1, *(char *)(pfVar3 + -8) == '\0' || (pbStack_80[uVar5 * 8] == 0)))
        {
          pfVar3 = pfVar3 + 0x32;
          uVar5 = uVar2;
          if (uVar1 <= uVar2) goto LAB_140b478a1;
        }
        fVar13 = *pfVar3 + *(float *)(pbStack_80 + uVar2 * 8 + -4) + _DAT_14300b368;
        if (fVar13 <= _DAT_14300b364) {
          fVar13 = _DAT_14300b364;
        }
        fVar9 = fVar9 + (fVar13 - pfVar3[-7]);
        iVar6 = iVar6 + 1;
        fVar12 = (*(float *)(pbStack_80 + uVar2 * 8 + -4) + pfVar3[-4] + _DAT_14300b368) -
                 pfVar3[-7];
        fVar13 = fVar12;
        if (fVar12 <= fVar10) {
          fVar13 = fVar10;
        }
        fVar10 = (float)(~-(uint)NAN(fVar10) & (uint)fVar13 | -(uint)NAN(fVar10) & (uint)fVar12);
      } while (uVar2 < uVar1);
LAB_140b478a1:
      if (iVar6 != 0) {
        if (uStack_98 < param_3) {
          param_3 = uStack_98;
        }
        if (param_3 != 0) {
          fVar9 = fVar9 / (float)iVar6;
          fVar13 = fVar10;
          if (fVar10 <= fVar9) {
            fVar13 = fVar9;
          }
          fVar10 = (float)(-(uint)NAN(fVar9) & (uint)fVar10 | ~-(uint)NAN(fVar9) & (uint)fVar13);
          param_2 = param_2 + 0x2d;
          pfVar3 = (float *)(pbStack_a0 + 0x58);
          lVar4 = 0;
          do {
            if (uStack_78 << 3 == lVar4) break;
            if (0.0 < param_2[-0x17]) {
              fVar13 = param_2[-0x17] + fVar10;
              fVar9 = 0.0;
              if (0.0 <= fVar13) {
                fVar9 = fVar13;
              }
              fVar13 = fVar11;
              if (fVar9 <= fVar11) {
                fVar13 = fVar9;
              }
              *pfVar3 = fVar13;
            }
            else if ((*(uint *)(pbStack_80 + lVar4) & (uint)param_2[-5]) != 0) {
              fStack_8c = param_2[-1];
              fStack_90 = *param_2;
              if (fStack_90 < fStack_8c) {
                pfStack_70 = &fStack_8c;
                pfStack_68 = (float *)pdb_140f705d0;
                pfStack_60 = &fStack_90;
                pcStack_58 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143058d48,&pfStack_70,&UNK_143058de8,fVar7,uStack_88,pbStack_80);
              }
              fVar9 = ((param_2[-4] + fVar10) - *(float *)(pbStack_80 + lVar4 + 4)) + fVar7;
              if (fStack_8c <= fVar9) {
                fStack_8c = fVar9;
              }
              if (fStack_8c <= fStack_90) {
                fStack_90 = fStack_8c;
              }
              pfVar3[-1] = fStack_90;
            }
            lVar4 = lVar4 + 8;
            param_2 = param_2 + 0x32;
            pfVar3 = pfVar3 + 0x1c;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        if (uStack_88 != 0) {
          pub_1406abac0(pbStack_80,uStack_88 << 3,4);
        }
        param_1[2] = uStack_98;
        goto LAB_140b47a35;
      }
    }
    param_1[2] = uStack_98;
    *param_1 = uStack_a8;
    param_1[1] = (ulonglong)pbStack_a0;
    if (uStack_88 != 0) {
      pub_1406abac0(pbStack_80,uStack_88 << 3,4);
    }
  }
  else {
    if (param_3 == 0) {
      pfStack_60 = (float *)0x8;
    }
    else {
      param_4 = (float *)(param_3 * 0x70);
      pdb_14007ee60();
      pfStack_60 = (float *)pub_1406abab0((ulonglong)param_4,8);
      if (pfStack_60 == (float *)0x0) {
        pdb_142dc7e2a(8,param_4);
        goto LAB_140b47784;
      }
    }
    pfStack_70 = (float *)&uStack_78;
    uStack_78 = 0;
    pfStack_68 = (float *)0x0;
    uStack_88 = param_3;
    pbStack_80 = (byte *)pfStack_60;
    pdb_1419b2680(param_2,param_2 + param_3 * 0x32,&pfStack_70);
    param_1[2] = uStack_78;
    uStack_a8 = uStack_88;
    pbStack_a0 = pbStack_80;
LAB_140b47a35:
    *param_1 = uStack_a8;
    param_1[1] = (ulonglong)pbStack_a0;
  }
  return;
}

