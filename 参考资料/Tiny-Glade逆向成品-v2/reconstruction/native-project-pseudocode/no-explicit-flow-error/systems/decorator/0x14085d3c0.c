// VA 0x14085d3c0, PDB extent 1231 bytes
// system_decorator::ui_systems::ui_stairs_viz::visualize_ui_stairs::closure$10
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_stairs_viz::visualize_ui_stairs::closure$10
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
   Extent: 1231 */

void pdb_14085d3c0(undefined4 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uStack_1a8;
  uint uStack_1a4;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  uint uStack_180;
  uint uStack_174;
  undefined4 *puStack_170;
  longlong lStack_168;
  uint uStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  char acStack_128 [16];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  
  pdb_140c45b00(acStack_128,*(undefined8 *)*param_2);
  puVar1 = (undefined8 *)param_2[1];
  lStack_168 = pdb_140c40010(*puVar1);
  if ((lStack_168 == 0) || (acStack_128[0] == '\0')) {
    param_1[0xc] = 2;
    return;
  }
  if (1 < *(byte *)(lStack_168 + 0x32)) {
    param_1[0xb] = uStack_ec;
    *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_f8,uStack_fc);
    *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_f0,uStack_f4);
    *param_1 = uStack_118;
    param_1[1] = uStack_114;
    param_1[2] = uStack_110;
    param_1[3] = uStack_10c;
    *(undefined8 *)(param_1 + 4) = uStack_108;
    param_1[6] = fStack_100;
    param_1[0xc] = 0;
    return;
  }
  uStack_c8 = *(undefined8 *)(lStack_168 + 0x30);
  uStack_e8 = *(undefined4 *)(lStack_168 + 0x10);
  uStack_e4 = *(undefined4 *)(lStack_168 + 0x14);
  uStack_e0 = *(undefined4 *)(lStack_168 + 0x18);
  uStack_dc = *(undefined4 *)(lStack_168 + 0x1c);
  uVar14 = *(uint *)(lStack_168 + 0x20);
  uStack_d4 = *(undefined4 *)(lStack_168 + 0x24);
  uStack_d0 = *(undefined4 *)(lStack_168 + 0x28);
  uStack_cc = *(undefined4 *)(lStack_168 + 0x2c);
  puStack_130 = puVar1;
  uStack_d8 = uVar14;
  lVar6 = pdb_140a61160(*(undefined8 *)param_2[2]);
  uStack_198 = CONCAT44(uStack_198._4_4_,param_3);
  uVar11 = *(ulonglong *)(lVar6 + 0x10);
  lStack_188 = 4;
  puStack_170 = param_1;
  if (uVar11 == 0) {
    uStack_190 = 4;
    goto LAB_14085d58c;
  }
  if (uVar11 == 1) {
    lVar7 = *(longlong *)(lVar6 + 8);
    uStack_190 = 4;
    if (param_3 != *(uint *)(lVar7 + 0x20)) goto LAB_14085d58c;
    uVar8 = 0;
  }
  else {
    uVar8 = pdb_1400aede0(lVar6 + 0x38,&uStack_198);
    uVar9 = pdb_1414af660(lVar6,uVar8,&uStack_198);
    if ((uVar9 & 1) == 0) {
      uStack_190 = 4;
      goto LAB_14085d58c;
    }
    if (uVar11 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar8,uVar11,&UNK_143311df8);
    }
    lVar7 = *(longlong *)(lVar6 + 8);
    uStack_190 = 4;
    if (lVar7 == 0) goto LAB_14085d58c;
  }
  uStack_190 = *(longlong *)(lVar7 + 8 + uVar8 * 0x28);
  lStack_188 = uStack_190 + *(longlong *)(lVar7 + 0x10 + uVar8 * 0x28) * 8;
LAB_14085d58c:
  uStack_198 = lVar6 + 0x48;
  plVar2 = (longlong *)param_2[3];
  uStack_180 = param_3;
  puStack_138 = param_2;
  pdb_1414aee80(&uStack_1a8,&uStack_198);
  uStack_174 = param_3;
  if (lStack_1a0 == 0) {
    bVar12 = false;
  }
  else {
    bVar12 = false;
    do {
      uStack_160 = uStack_1a8;
      iStack_15c = uStack_1a4;
      lVar6 = *plVar2;
      uVar11 = *(ulonglong *)(lVar6 + 0x70);
      if (uVar11 != 0) {
        if (uVar11 == 1) {
          lVar6 = *(longlong *)(lVar6 + 0x68);
          if ((uStack_1a8 == *(uint *)(lVar6 + 8)) && (uStack_1a4 == *(int *)(lVar6 + 0xc))) {
            uVar8 = 0;
LAB_14085d5e6:
            bVar12 = (bool)(bVar12 | *(char *)(lVar6 + 0x10 + uVar8 * 0x28) == '\0');
          }
        }
        else {
          uVar8 = pdb_1400af680(lVar6 + 0x98,&uStack_160);
          uVar9 = pdb_1414af730(lVar6 + 0x60,uVar8,&uStack_160);
          if ((uVar9 & 1) != 0) {
            if (uVar11 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar8,uVar11,&UNK_143311df8);
            }
            lVar6 = *(longlong *)(lVar6 + 0x68);
            goto LAB_14085d5e6;
          }
        }
      }
      pdb_1414aee80(&uStack_1a8,&uStack_198);
    } while (lStack_1a0 != 0);
  }
  uVar3 = *(undefined8 *)puStack_138[4];
  uVar11 = (ulonglong)uStack_174;
  uStack_198 = pdb_140c3d2c0(*puStack_130);
  uStack_190 = uVar11;
  uVar10 = pdb_140c413f0(&uStack_198);
  lVar6 = pdb_140b54f80(uVar3,uVar10,&UNK_14300cac8);
  if (lVar6 != 0) {
    uVar13 = pdb_140dea170(&uStack_e8,lVar6);
    puVar4 = puStack_170;
    if (uStack_c8._2_1_ == '\0') {
      uVar13 = uVar13 ^ _DAT_142e37820;
    }
    else {
      uVar14 = uVar14 ^ _DAT_142e37820;
    }
    uStack_1a8 = uVar14;
    uStack_1a4 = uVar13;
    if (bVar12) {
      uStack_148 = uStack_ec;
      uStack_158 = uStack_fc;
      uStack_154 = uStack_f8;
      uStack_150 = uStack_f4;
      uStack_14c = uStack_f0;
      pdb_140df4520(&uStack_198,&uStack_1a8);
      fVar16 = (float)uStack_198 * _DAT_142f61060;
      fVar17 = (float)((ulonglong)uStack_198 >> 0x20) * _UNK_142f61064;
      fVar15 = (float)uStack_190 * _DAT_142e3c624;
      uVar5 = 0;
    }
    else {
      lVar6 = pdb_1409014e0(lStack_168 + 0x38);
      if (lVar6 == 0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = *(float *)(lVar6 + 4) * _DAT_142e36f50;
      }
      uStack_148 = uStack_ec;
      uStack_158 = uStack_fc;
      uStack_154 = uStack_f8;
      uStack_150 = uStack_f4;
      uStack_14c = uStack_f0;
      pdb_140df4520(&uStack_198,&uStack_1a8);
      fVar16 = fVar15 * (float)uStack_198;
      fVar17 = fVar15 * (float)((ulonglong)uStack_198 >> 0x20);
      fVar15 = fVar15 * (float)uStack_190;
      pdb_140de88f0(&uStack_198,_DAT_142e37820 ^ uVar13,uVar14);
      uVar5 = 1;
      uStack_118 = (undefined4)uStack_198;
      uStack_114 = uStack_198._4_4_;
      uStack_110 = (float)uStack_190;
      uStack_10c = uStack_190._4_4_;
    }
    *puVar4 = uStack_118;
    puVar4[1] = uStack_114;
    puVar4[2] = uStack_110;
    puVar4[3] = uStack_10c;
    *(ulonglong *)(puVar4 + 4) =
         CONCAT44((float)((ulonglong)uStack_108 >> 0x20) + fVar17,(float)uStack_108 + fVar16);
    puVar4[6] = fStack_100 + fVar15;
    *(ulonglong *)(puVar4 + 7) = CONCAT44(uStack_154,uStack_158);
    *(ulonglong *)(puVar4 + 9) = CONCAT44(uStack_14c,uStack_150);
    puVar4[0xb] = uStack_148;
    puVar4[0xc] = uVar5;
    puVar4[0xd] = uVar14;
    puVar4[0xe] = uVar13;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14300cae0);
}

