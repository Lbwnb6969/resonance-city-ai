// VA 0x140ff6d20, PDB extent 1836 bytes
// tg_gpu_selector::vulkan_config::Controls::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/vulkan_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_gpu_selector::vulkan_config::Controls::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/vulkan_config.rs
   Extent: 1836 */

longlong * pdb_140ff6d20(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  byte *arg0;
  longlong *plVar14;
  byte *unaff_R13;
  longlong *plVar15;
  byte *unaff_R15;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong *plStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  longlong lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  longlong *plStack_90;
  longlong lStack_78;
  longlong *plStack_70;
  longlong lStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_78 = 0;
  plStack_70 = (longlong *)0x8;
  lStack_68 = 0;
  lStack_d8 = *param_2;
  pbStack_e0 = (byte *)param_2[1];
  pbStack_d0 = pbStack_e0 + param_2[2] * 0x30;
  lStack_f8 = param_4;
  plStack_f0 = param_1;
  pbStack_e8 = pbStack_e0;
  plStack_90 = param_3;
  if (pbStack_e0 == pbStack_d0) {
LAB_140ff70c8:
    if (pbStack_d0 != pbStack_e0) {
      uVar13 = (ulonglong)((longlong)pbStack_d0 - (longlong)pbStack_e0) / 0x30;
      pbVar10 = pbStack_e0 + 0x20;
      do {
        if (*(ulonglong *)(pbVar10 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar10 + -0x18),*(ulonglong *)(pbVar10 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar10 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar10,*(ulonglong *)(pbVar10 + -8),1);
        }
        pbVar10 = pbVar10 + 0x30;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (lStack_d8 != 0) {
      pub_1406abac0(pbStack_e8,lStack_d8 * 0x30,8);
    }
    plStack_f0[2] = lStack_68;
    *plStack_f0 = lStack_78;
    plStack_f0[1] = (longlong)plStack_70;
    lVar9 = *plStack_90;
    lVar4 = plStack_90[1];
    lVar11 = plStack_90[3];
    plStack_f0[5] = plStack_90[2];
    plStack_f0[6] = lVar11;
    plStack_f0[3] = lVar9;
    plStack_f0[4] = lVar4;
    plStack_f0[0xc] = lStack_f8;
    plStack_f0[7] = -0x7fffffffffffffff;
    return plStack_f0;
  }
LAB_140ff6dac:
  pbVar10 = pbStack_e0 + 0x30;
  arg0 = *(byte **)pbStack_e0;
  pbVar1 = pbStack_e0 + 0x28;
  pbVar2 = pbStack_e0 + 0x18;
  pbVar6 = pbStack_e0 + 0x20;
  pbVar3 = pbStack_e0 + 8;
  pbVar7 = pbStack_e0 + 0x10;
  pbStack_e0 = pbVar10;
  if (!SBORROW8(0,(longlong)arg0)) {
    uStack_158 = (undefined4)*(longlong *)pbVar3;
    uStack_154 = (undefined4)((ulonglong)*(longlong *)pbVar3 >> 0x20);
    uStack_150 = (undefined4)*(longlong *)pbVar7;
    uStack_14c = (undefined4)((ulonglong)*(longlong *)pbVar7 >> 0x20);
    uStack_148 = (undefined4)*(longlong *)pbVar2;
    uStack_144 = (undefined4)((ulonglong)*(longlong *)pbVar2 >> 0x20);
    uStack_140 = (undefined4)*(longlong *)pbVar6;
    uStack_13c = (undefined4)((ulonglong)*(longlong *)pbVar6 >> 0x20);
    uStack_110 = uStack_148;
    uStack_10c = uStack_144;
    uStack_108 = uStack_140;
    uStack_104 = uStack_13c;
    uStack_120 = uStack_158;
    uStack_11c = uStack_154;
    uStack_118 = uStack_150;
    uStack_114 = uStack_14c;
    uStack_49 = 1;
    uStack_128 = arg0;
    uStack_100 = *(longlong *)pbVar1;
    lVar9 = pdb_140e12b20(&uStack_128);
    if (lVar9 == 0) {
      arg0 = (byte *)0x8000000000000000;
joined_r0x000140ff6e87:
      if (lStack_68 != 0) {
        lVar9 = lStack_68 * 0x30;
        plVar15 = plStack_70;
        pbStack_60 = arg0;
        if (SBORROW8(0,(longlong)arg0)) {
          do {
            if (SBORROW8(0,*plVar15)) goto LAB_140ff7010;
            plVar15 = plVar15 + 6;
            lVar9 = lVar9 + -0x30;
          } while (lVar9 != 0);
        }
        else {
          plVar14 = plStack_70 + lStack_68 * 6;
LAB_140ff6fed:
          do {
            if (((!SBORROW8(0,*plVar15)) && ((byte *)plVar15[2] == unaff_R13)) &&
               (iVar8 = pub_142e32750(plVar15[1],pbStack_58,unaff_R13), iVar8 == 0))
            goto LAB_140ff7010;
            plVar15 = plVar15 + 6;
            arg0 = pbStack_60;
          } while (plVar15 != plVar14);
        }
      }
    }
    else {
      if ((longlong)arg0 < 0) {
        uVar12 = 0;
LAB_140ff70b0:
        uStack_49 = 1;
        pdb_142dc7e2a(uVar12,unaff_R15);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (arg0 != (byte *)0x0) {
        pdb_14007ee60();
        unaff_R15 = pub_1406abab0((ulonglong)arg0,1);
        if (unaff_R15 == (byte *)0x0) {
          uVar12 = 1;
          unaff_R15 = arg0;
          goto LAB_140ff70b0;
        }
        pub_142e32760(unaff_R15,lVar9,arg0);
        unaff_R13 = arg0;
        pbStack_58 = unaff_R15;
        goto joined_r0x000140ff6e87;
      }
      unaff_R15 = (byte *)0x1;
      if (lStack_68 != 0) {
        plVar14 = plStack_70 + lStack_68 * 6;
        unaff_R13 = (byte *)0x0;
        pbStack_58 = (byte *)0x1;
        pbStack_60 = (byte *)0x0;
        plVar15 = plStack_70;
        goto LAB_140ff6fed;
      }
      pbStack_58 = (byte *)0x1;
      unaff_R13 = (byte *)0x0;
      arg0 = (byte *)0x0;
    }
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0x30,8);
    lVar9 = lStack_68;
    pbStack_60 = arg0;
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    *(undefined4 *)(pbVar10 + 0x20) = uStack_108;
    *(undefined4 *)(pbVar10 + 0x24) = uStack_104;
    *(undefined4 *)(pbVar10 + 0x28) = (undefined4)uStack_100;
    *(undefined4 *)(pbVar10 + 0x2c) = uStack_100._4_4_;
    *(undefined4 *)(pbVar10 + 0x10) = uStack_118;
    *(undefined4 *)(pbVar10 + 0x14) = uStack_114;
    *(undefined4 *)(pbVar10 + 0x18) = uStack_110;
    *(undefined4 *)(pbVar10 + 0x1c) = uStack_10c;
    *(undefined4 *)pbVar10 = (undefined4)uStack_128;
    *(undefined4 *)(pbVar10 + 4) = uStack_128._4_4_;
    *(undefined4 *)(pbVar10 + 8) = uStack_120;
    *(undefined4 *)(pbVar10 + 0xc) = uStack_11c;
    uStack_c0 = pbStack_58;
    uStack_b0 = 1;
    lStack_a0 = 1;
    pbStack_c8 = arg0;
    uStack_b8 = unaff_R13;
    uStack_a8 = pbVar10;
    if (lStack_68 == lStack_78) {
      pdb_142d7e7c0(&lStack_78);
    }
    plStack_70[lVar9 * 6 + 4] = (longlong)uStack_a8;
    (plStack_70 + lVar9 * 6 + 4)[1] = lStack_a0;
    plStack_70[lVar9 * 6 + 2] = (longlong)uStack_b8;
    (plStack_70 + lVar9 * 6 + 2)[1] = uStack_b0;
    plStack_70[lVar9 * 6] = (longlong)pbStack_c8;
    (plStack_70 + lVar9 * 6)[1] = (longlong)uStack_c0;
    lStack_68 = lVar9 + 1;
    goto LAB_140ff6f7d;
  }
  goto LAB_140ff70c8;
LAB_140ff7010:
  uStack_a8 = (byte *)CONCAT44(uStack_104,uStack_108);
  lStack_a0 = uStack_100;
  uStack_b8 = (byte *)CONCAT44(uStack_114,uStack_118);
  uStack_b0 = CONCAT44(uStack_10c,uStack_110);
  pbStack_c8 = uStack_128;
  uStack_c0 = (byte *)CONCAT44(uStack_11c,uStack_120);
  lVar9 = plVar15[5];
  if (lVar9 == plVar15[3]) {
    pdb_142d7e7c0(plVar15 + 3);
  }
  lVar4 = plVar15[4];
  lVar11 = lVar9 * 0x30;
  plVar14 = (longlong *)(lVar4 + 0x20 + lVar11);
  *plVar14 = (longlong)uStack_a8;
  plVar14[1] = lStack_a0;
  plVar14 = (longlong *)(lVar4 + 0x10 + lVar11);
  *plVar14 = (longlong)uStack_b8;
  plVar14[1] = uStack_b0;
  *(longlong *)(lVar4 + lVar11) = (longlong)pbStack_c8;
  ((longlong *)(lVar4 + lVar11))[1] = (longlong)uStack_c0;
  plVar15[5] = lVar9 + 1;
  if (((ulonglong)pbStack_60 & 0x7fffffffffffffff) != 0) {
    pub_1406abac0(pbStack_58,(ulonglong)pbStack_60,1);
  }
LAB_140ff6f7d:
  if (pbStack_e0 == pbStack_d0) goto LAB_140ff70c8;
  goto LAB_140ff6dac;
}

