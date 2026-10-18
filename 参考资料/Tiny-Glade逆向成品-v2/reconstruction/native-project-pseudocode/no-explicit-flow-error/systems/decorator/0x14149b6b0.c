// VA 0x14149b6b0, PDB extent 848 bytes
// system_decorator::decorator_visual::lantern::maintain_lantern_lights::closure$5
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::lantern::maintain_lantern_lights::closure$5
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
   Extent: 848 */

void pdb_14149b6b0(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *pcVar11;
  ushort uVar12;
  ushort uVar13;
  ushort *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if (*param_2 == 0) {
    lVar4 = param_2[1];
    piVar5 = *(int **)*param_1;
    if (*piVar5 < 4) {
      plVar6 = (longlong *)((undefined8 *)*param_1)[1];
      uVar3 = *(undefined4 *)(lVar4 + 0x18);
      uVar7 = *(undefined8 *)(lVar4 + 0x10);
      *(undefined4 *)plVar6[2] = *(undefined4 *)((longlong)plVar6 + 0x1c);
      lVar17 = *plVar6;
      lVar8 = *(longlong *)(lVar17 + 0x30);
      uVar9 = *(undefined8 *)(lVar17 + 0x40);
      if (lVar8 == *(longlong *)(lVar17 + 0x20)) {
        pdb_142d7e7c0(lVar17 + 0x20);
      }
      lVar10 = *(longlong *)(lVar17 + 0x28);
      lVar16 = lVar8 * 0x30;
      *(undefined8 *)(lVar10 + lVar16) = 0x17;
      uStack_78 = (undefined4)uVar7;
      uStack_74 = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar1 = (undefined4 *)(lVar10 + 8 + lVar16);
      *puVar1 = uStack_88;
      puVar1[1] = uStack_84;
      puVar1[2] = uStack_80;
      puVar1[3] = uStack_7c;
      puVar1 = (undefined4 *)(lVar10 + 0x14 + lVar16);
      *puVar1 = uStack_7c;
      puVar1[1] = uStack_78;
      puVar1[2] = uStack_74;
      puVar1[3] = uVar3;
      *(undefined1 *)(lVar10 + 0x24 + lVar16) = 0;
      *(undefined8 *)(lVar10 + 0x28 + lVar16) = uVar9;
      *(longlong *)(lVar17 + 0x30) = lVar8 + 1;
      *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
      *piVar5 = *piVar5 + 1;
    }
    lVar17 = param_1[1];
    lVar8 = *(longlong *)(lVar17 + 0x10);
    if (lVar8 == 0) {
      pdb_142dc8110(&UNK_14330e6f8,0x16,&UNK_14330e710);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(longlong *)(lVar17 + 0x10) = lVar8 + -1;
    uVar2 = *(ushort *)(*(longlong *)(lVar17 + 8) + -2 + lVar8 * 2);
    puVar14 = (ushort *)(lVar4 + 0xc);
    *(ushort *)(lVar4 + 0xc) = uVar2;
    uVar15 = *(ulonglong *)param_1[2];
    uVar20 = (ulonglong)uVar2 + 1;
    if (uVar20 <= uVar15) {
      uVar20 = uVar15;
    }
    *(ulonglong *)param_1[2] = uVar20;
    iVar18 = *(int *)(lVar4 + 4);
    fVar22 = *(float *)(lVar4 + 8);
    fVar23 = (float)*(undefined8 *)(lVar4 + 0x10);
    fVar24 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x10) >> 0x20);
    fVar25 = *(float *)(lVar4 + 0x18);
  }
  else {
    if ((int)*param_2 == 1) {
      return;
    }
    lVar4 = param_2[1];
    lVar17 = param_2[2];
    uVar2 = *(ushort *)(lVar4 + 0xc);
    *(ushort *)(lVar17 + 0xc) = uVar2;
    uVar15 = *(ulonglong *)param_1[2];
    uVar20 = (ulonglong)uVar2 + 1;
    if (uVar20 <= uVar15) {
      uVar20 = uVar15;
    }
    puVar14 = (ushort *)(lVar17 + 0xc);
    *(ulonglong *)param_1[2] = uVar20;
    iVar18 = *(int *)(lVar17 + 4);
    fVar22 = *(float *)(lVar17 + 8);
    fVar23 = (float)*(undefined8 *)(lVar17 + 0x10);
    fVar24 = (float)((ulonglong)*(undefined8 *)(lVar17 + 0x10) >> 0x20);
    fVar25 = *(float *)(lVar17 + 0x18);
    if (iVar18 == *(int *)(lVar4 + 4)) {
      if ((fVar22 == *(float *)(lVar4 + 8)) && (!NAN(fVar22) && !NAN(*(float *)(lVar4 + 8)))) {
        if ((fVar23 == *(float *)(lVar4 + 0x10)) && (!NAN(fVar23) && !NAN(*(float *)(lVar4 + 0x10)))
           ) {
          if ((fVar24 == *(float *)(lVar4 + 0x14)) &&
             (!NAN(fVar24) && !NAN(*(float *)(lVar4 + 0x14)))) {
            if ((fVar25 == *(float *)(lVar4 + 0x18)) &&
               (!NAN(fVar25) && !NAN(*(float *)(lVar4 + 0x18)))) {
              return;
            }
          }
        }
      }
    }
  }
  uVar2 = *puVar14;
  uVar20 = (ulonglong)uVar2;
  uVar15 = *_DAT_143cad8c0;
  if (uVar15 == 0) {
    uVar15 = pdb_142dec140();
  }
  if ((uVar15 >> 0x37 & 1) == 0) {
    uVar12 = (ushort)((uint)fVar22 >> 0x10) & 0x8000;
    uVar21 = (uint)fVar22 & 0x7f800000;
    uVar19 = (uint)fVar22 & 0x7fffff;
    if (uVar21 == 0x7f800000) {
      uVar12 = (ushort)(uVar19 >> 0xd) | uVar12 | (ushort)(uVar19 != 0) << 9 | 0x7c00;
    }
    else if (uVar21 < 0x47000001) {
      if (uVar21 < 0x38800000) {
        if (0x32ffffff < uVar21) {
          uVar19 = uVar19 | 0x800000;
          uVar13 = (ushort)(uVar19 >> (0x7eU - (char)(uVar21 >> 0x17) & 0x1f));
          uVar21 = 0x1d - (uVar21 >> 0x17) & 0x1f;
          if ((uVar19 >> uVar21 & 1) != 0) {
            uVar13 = (uVar13 + 1) - (ushort)(((3 << (sbyte)uVar21) - 1U & uVar19) == 0);
          }
          uVar12 = uVar13 | uVar12;
        }
      }
      else {
        uVar12 = (ushort)(((uint)fVar22 & 0x2fff) != 0 & (byte)((uint)fVar22 >> 0xc)) +
                 ((short)(uVar21 >> 0xd) + (short)(uVar19 >> 0xd) + 0x4000U | uVar12);
      }
    }
    else {
      uVar12 = uVar12 | 0x7c00;
    }
  }
  else {
    uVar12 = pdb_14094f6a0();
  }
  uVar15 = *(ulonglong *)(param_1[3] + 0x10);
  if (uVar20 < uVar15) {
    lVar4 = *(longlong *)(param_1[3] + 8);
    lVar17 = (ulonglong)uVar2 * 0x10;
    *(ulonglong *)(lVar4 + lVar17) = CONCAT44(fVar24,fVar23);
    *(float *)(lVar4 + 8 + lVar17) = fVar25;
    *(ushort *)(lVar4 + 0xc + lVar17) = uVar12;
    *(short *)(lVar4 + 0xe + lVar17) = (short)iVar18;
    uVar15 = *(ulonglong *)param_1[4];
    if (uVar20 < uVar15) {
      uVar15 = uVar20;
    }
    *(ulonglong *)param_1[4] = uVar15;
    uVar15 = *(ulonglong *)param_1[5];
    if (uVar15 < uVar20) {
      uVar15 = uVar20;
    }
    *(ulonglong *)param_1[5] = uVar15;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar20,uVar15,&UNK_14330e728);
}

