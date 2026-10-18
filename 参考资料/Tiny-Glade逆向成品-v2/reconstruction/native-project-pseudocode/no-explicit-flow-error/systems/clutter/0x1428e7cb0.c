// VA 0x1428e7cb0, PDB extent 816 bytes
// system_clutter::autoclutter::add_birdnests::add_birdnests::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_birdnests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::add_birdnests::add_birdnests::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_birdnests.rs
   Extent: 816 */

undefined8 pdb_1428e7cb0(undefined8 *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  
  fVar16 = *(float *)(*(longlong *)(*(longlong *)*param_1 + 0x60) + 0x60) * _DAT_142e3783c;
  lVar5 = *(longlong *)param_1[1];
  lVar6 = ((longlong *)param_1[1])[1];
  puVar13 = *(uint **)(lVar5 + 0xf8);
  puVar1 = puVar13 + *(longlong *)(lVar5 + 0x100);
  pfVar7 = (float *)param_1[2];
  fVar2 = *pfVar7;
  fVar3 = pfVar7[1];
  fVar4 = pfVar7[2];
  if (*(char *)(lVar5 + 0x108) == '\0') {
    lVar9 = 0;
    lVar10 = 8;
    lVar12 = 0;
    uVar11 = 0;
LAB_1428e7e73:
    do {
      if (uVar11 == (uint)lVar9) {
        do {
          if (puVar13 == puVar1) {
            return 0;
          }
          uVar11 = *puVar13;
          puVar13 = puVar13 + 1;
          lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)uVar11 * 0xa0);
        } while (lVar9 == 0);
        lVar10 = *(longlong *)(lVar6 + 0x100) + (ulonglong)uVar11 * 0xa0;
        uVar8 = (ulonglong)*(uint *)(lVar10 + 0x94);
        if (*(ulonglong *)(lVar5 + 0x110) <
            *(ulonglong *)(*(longlong *)(lVar6 + 0x1a0) + 0x40 + uVar8 * 0x48)) {
          lVar12 = *(longlong *)(lVar6 + 0x1a0) + uVar8 * 0x48;
          uVar8 = *(ulonglong *)(*(longlong *)(lVar12 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8);
          if (uVar8 == 0) goto LAB_1428e7ef2;
          lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar8 * 0x30);
        }
        else {
LAB_1428e7ef2:
          lVar12 = 0;
        }
        lVar10 = *(longlong *)(lVar10 + 0x50);
        uVar11 = 0;
      }
      uVar8 = (ulonglong)uVar11;
      uVar11 = uVar11 + 1;
      pdb_140b77620(&iStack_b4,(ulonglong)~*(uint *)(lVar10 + 8 + uVar8 * 0x10) * 0x58 + lVar12,
                    fVar3);
      fVar15 = fVar2;
      if (iStack_b4 == 0) {
        uStack_d8 = uStack_b0;
        uStack_d4 = uStack_ac;
        uStack_d0 = uStack_a8;
        uStack_cc = uStack_a4;
        pdb_140defa20(&uStack_d8,fVar2,fVar4);
        fVar14 = extraout_XMM0_Da_02;
      }
      else {
        if (iStack_b4 == 2) goto LAB_1428e7e73;
        uStack_c8 = uStack_a0;
        uStack_d8 = uStack_b0;
        uStack_d4 = uStack_ac;
        uStack_d0 = uStack_a8;
        uStack_cc = uStack_a4;
        pdb_140df2a20(&uStack_d8,fVar2,fVar4);
        fVar14 = extraout_XMM0_Da_01;
      }
    } while (fVar16 <= SQRT((fVar15 - fVar4) * (fVar15 - fVar4) +
                            (fVar14 - fVar2) * (fVar14 - fVar2)));
  }
  else {
    lVar9 = 0;
    lVar12 = 0;
    uVar11 = 0;
    do {
      do {
        if (uVar11 == (uint)lVar9) {
          do {
            if (puVar13 == puVar1) {
              return 0;
            }
            uVar11 = *puVar13;
            puVar13 = puVar13 + 1;
            lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)uVar11 * 0x48);
          } while (lVar9 == 0);
          lVar12 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)uVar11 * 0x48;
          if ((*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar12 + 0x40)) &&
             (uVar8 = *(ulonglong *)
                       (*(longlong *)(lVar12 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
             uVar8 != 0)) {
            lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar8 * 0x30);
          }
          else {
            lVar12 = 0;
          }
          uVar11 = 0;
        }
        uVar8 = (ulonglong)uVar11;
        uVar11 = uVar11 + 1;
        pdb_140b77620(&iStack_b4,uVar8 * 0x58 + lVar12,fVar3);
      } while (iStack_b4 == 2);
      fVar15 = fVar2;
      if (iStack_b4 == 0) {
        uStack_d8 = uStack_b0;
        uStack_d4 = uStack_ac;
        uStack_d0 = uStack_a8;
        uStack_cc = uStack_a4;
        pdb_140defa20(&uStack_d8,fVar2,fVar4);
        fVar14 = extraout_XMM0_Da;
      }
      else {
        uStack_c8 = uStack_a0;
        uStack_d8 = uStack_b0;
        uStack_d4 = uStack_ac;
        uStack_d0 = uStack_a8;
        uStack_cc = uStack_a4;
        pdb_140df2a20(&uStack_d8,fVar2,fVar4);
        fVar14 = extraout_XMM0_Da_00;
      }
    } while (fVar16 <= SQRT((fVar15 - fVar4) * (fVar15 - fVar4) +
                            (fVar14 - fVar2) * (fVar14 - fVar2)));
  }
  return 1;
}

