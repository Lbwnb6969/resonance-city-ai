// VA 0x140648e50, PDB extent 2073 bytes
// tiny_glade::sdl_event_loop::extract_available_monitors_info
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::sdl_event_loop::extract_available_monitors_info
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
   Extent: 2073 */

void pdb_140648e50(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  ulonglong arg1;
  int iVar4;
  byte *pbVar5;
  short sVar6;
  int iVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  ulonglong unaff_R14;
  int unaff_R15D;
  int iVar15;
  ulonglong unaff_XMM7_Qa;
  ulonglong uStack_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined2 uStack_160;
  undefined6 uStack_15e;
  ulonglong uStack_158;
  byte *pbStack_150;
  longlong *plStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  longlong lStack_108;
  byte *pbStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  int iStack_dc;
  ulonglong uStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  longlong lStack_c0;
  ulonglong uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lStack_f8 = 0;
  lStack_f0 = 8;
  lStack_e8 = 0;
  plStack_148 = param_1;
  pdb_140487ec0(&pbStack_130);
  pbVar5 = pbStack_120;
  pbStack_140 = pbStack_130;
  pbStack_118 = pbStack_128 + (longlong)pbStack_120 * 0x30;
  pbStack_130 = pbStack_128;
  pbStack_120 = pbStack_140;
  pbVar13 = pbStack_128 + 0x38;
  pbStack_138 = pbStack_128;
  pbVar9 = pbStack_128;
  uVar11 = (longlong)pbVar5 * 0x30;
  pbStack_100 = pbStack_118;
  do {
    if (pbVar9 == pbStack_100) {
LAB_1406492d7:
      if (pbStack_140 != (byte *)0x0) {
        pub_1406abac0(pbStack_138,(longlong)pbStack_140 * 0x30,8);
      }
      plStack_148[2] = lStack_e8;
      *plStack_148 = lStack_f8;
      plStack_148[1] = lStack_f0;
      return;
    }
    pbStack_128 = pbVar9 + 0x30;
    if (*(longlong *)pbVar9 == -0x7fffffffffffffff) {
      if (pbStack_100 != pbStack_128) {
        uVar11 = (uVar11 - 0x30) / 0x30;
        do {
          arg1 = *(ulonglong *)(pbVar13 + -8);
          if ((!SBORROW8(0,arg1)) && (arg1 != 0)) {
            pub_1406abac0(*(byte **)pbVar13,arg1,1);
          }
          pbVar13 = pbVar13 + 0x30;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      goto LAB_1406492d7;
    }
    lStack_c0 = *(longlong *)(pbVar9 + 8);
    lStack_1b8 = *(longlong *)(pbVar9 + 0x20);
    lStack_1c8 = *(longlong *)(pbVar9 + 0x10);
    lStack_1c0 = *(longlong *)(pbVar9 + 0x18);
    uVar3 = *(undefined4 *)(pbVar9 + 0x28);
    lStack_a8 = 0;
    lStack_a0 = 4;
    lStack_98 = 0;
    uStack_81 = 1;
    uStack_158 = uVar11 - 0x30;
    pbStack_150 = pbStack_128;
    pbStack_110 = pbVar13;
    iStack_dc = unaff_R15D;
    uStack_b8 = unaff_R14;
    lStack_90 = *(longlong *)pbVar9;
    pdb_1406d12b0(&uStack_1e0,param_2,uVar3);
    iVar4 = iStack_1d8;
    if (SBORROW8(0,uStack_1e0)) {
      iVar15 = 0;
      if (0 < iStack_1d8) {
        do {
          while( true ) {
            uStack_81 = 1;
            pdb_1406d1110(&uStack_d8,param_2,uVar3,iVar15);
            iVar14 = iStack_c4;
            iVar7 = iStack_c8;
            iVar12 = iStack_cc;
            if (!SBORROW8(0,uStack_d8)) break;
            uVar11 = CONCAT44(iStack_c8,iStack_cc);
            uStack_81 = 1;
            sVar6 = pdb_1406d15b0(uStack_d0);
            lVar8 = lStack_98;
            if (iVar14 < 1) {
              iVar14 = 0;
            }
            if (lStack_98 == lStack_a8) {
              uStack_81 = 1;
              pdb_142d7ef30(&lStack_a8);
            }
            lVar10 = lVar8 * 0x10;
            *(ulonglong *)(lStack_a0 + lVar10) =
                 CONCAT44(-(uint)(0 < iVar7),-(uint)(0 < iVar12)) & uVar11;
            *(int *)(lStack_a0 + 8 + lVar10) = iVar14 * 1000;
            *(short *)(lStack_a0 + 0xc + lVar10) = sVar6 << 3;
            lStack_98 = lVar8 + 1;
LAB_140649070:
            iVar15 = iVar15 + 1;
            if (iVar4 <= iVar15) goto LAB_140649151;
          }
          if (uStack_d8 == 0) goto LAB_140649070;
          pub_1406abac0((byte *)CONCAT44(iStack_cc,uStack_d0),uStack_d8,1);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar4);
      }
    }
    else if (uStack_1e0 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_1d4,iStack_1d8),uStack_1e0,1);
    }
LAB_140649151:
    lVar8 = lStack_98;
    lStack_b0 = lStack_a8;
    lStack_108 = lStack_a0;
    pdb_1406d13f0(&uStack_d8,param_2,uVar3);
    unaff_R14 = uStack_b8;
    iVar12 = iStack_c4;
    iVar15 = iStack_c8;
    iVar4 = iStack_cc;
    unaff_R15D = iStack_dc;
    if (SBORROW8(0,uStack_d8)) {
      uVar11 = CONCAT44(iStack_c8,iStack_cc);
      iVar7 = pdb_1406d15b0(uStack_d0);
      unaff_XMM7_Qa = CONCAT44(-(uint)(0 < iVar15),-(uint)(0 < iVar4)) & uVar11;
      unaff_R14 = (ulonglong)(uint)(iVar7 << 3);
      if (iVar12 < 1) {
        iVar12 = 0;
      }
      unaff_R15D = iVar12 * 1000;
      uStack_170 = 1;
    }
    else {
      if (uStack_d8 != 0) {
        pub_1406abac0((byte *)CONCAT44(iStack_cc,uStack_d0),uStack_d8,1);
      }
      uStack_170 = 0;
    }
    lVar10 = lStack_e8;
    pbVar13 = pbStack_110;
    lStack_198 = lStack_90;
    lStack_190 = lStack_c0;
    lStack_178 = lStack_1b8;
    lStack_188 = lStack_1c8;
    lStack_180 = lStack_1c0;
    lStack_1b0 = lStack_b0;
    lStack_1a8 = lStack_108;
    lStack_1a0 = lVar8;
    uStack_16c = (undefined4)unaff_XMM7_Qa;
    uStack_168 = (undefined4)(unaff_XMM7_Qa >> 0x20);
    uStack_160 = (undefined2)unaff_R14;
    iStack_164 = unaff_R15D;
    if (lStack_e8 == lStack_f8) {
      pdb_142d7ebb0(&lStack_f8);
    }
    lVar8 = lVar10 * 0x58;
    *(ulonglong *)(lStack_f0 + 0x50 + lVar8) = CONCAT62(uStack_15e,uStack_160);
    puVar1 = (undefined8 *)(lStack_f0 + 0x40 + lVar8);
    *puVar1 = CONCAT44(uStack_16c,uStack_170);
    puVar1[1] = CONCAT44(iStack_164,uStack_168);
    plVar2 = (longlong *)(lStack_f0 + 0x30 + lVar8);
    *plVar2 = lStack_180;
    plVar2[1] = lStack_178;
    plVar2 = (longlong *)(lStack_f0 + 0x20 + lVar8);
    *plVar2 = lStack_190;
    plVar2[1] = lStack_188;
    plVar2 = (longlong *)(lStack_f0 + 0x10 + lVar8);
    *plVar2 = lStack_1a0;
    plVar2[1] = lStack_198;
    *(longlong *)(lStack_f0 + lVar8) = lStack_1b0;
    ((longlong *)(lStack_f0 + lVar8))[1] = lStack_1a8;
    lStack_e8 = lVar10 + 1;
    pbVar13 = pbVar13 + 0x30;
    pbVar9 = pbStack_150;
    uVar11 = uStack_158;
  } while( true );
}

