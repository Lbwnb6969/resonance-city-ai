// VA 0x1405bed60, PDB extent 511 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure$19<false>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure$19<false>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 511 */

ulonglong pdb_1405bed60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 unaff_RDI;
  ulonglong uVar14;
  float fVar15;
  uint uStack_48;
  uint uStack_44;
  
  uVar14 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(byte *)*param_1 < 2) {
    uVar14 = (ulonglong)*(byte *)*param_1;
  }
  puVar6 = (undefined8 *)param_1[1];
  puVar7 = (uint *)param_1[2];
  uVar4 = puVar7[1];
  uVar13 = (ulonglong)uVar4;
  lVar9 = pdb_140c3d2c0(*puVar6);
  uVar5 = *puVar7;
  uVar12 = (ulonglong)uVar5;
  lVar10 = pdb_140c3d2c0(*puVar6);
  if ((lVar9 == lVar10) && ((lVar9 != 0 || (uVar13 == uVar12)))) {
    lVar9 = param_1[3];
    uVar13 = *(ulonglong *)(lVar9 + 0x58);
    if (uVar13 == 0) goto LAB_1405bef2f;
    if (uVar13 == 1) {
      lVar8 = *(longlong *)(lVar9 + 0x50);
      if ((uVar5 != *(uint *)(lVar8 + 8)) || (uVar4 != *(uint *)(lVar8 + 0xc))) goto LAB_1405bef2f;
      lVar10 = 0;
      cVar3 = *(char *)(lVar8 + 0x10);
    }
    else {
      uStack_48 = uVar5;
      uStack_44 = uVar4;
      uVar11 = pdb_1400af680(lVar9 + 0x80,&uStack_48);
      uVar12 = pdb_1404014e0(lVar9 + 0x48,uVar11,&uStack_48);
      if ((uVar12 & 1) == 0) goto LAB_1405bef2f;
      if (uVar13 <= uVar11) goto LAB_1405bef4c;
      lVar8 = *(longlong *)(lVar9 + 0x50);
      lVar10 = uVar11 * 5;
      cVar3 = *(char *)(lVar8 + 0x10 + uVar11 * 0x28);
    }
    if ((cVar3 == '\x01') && (uVar13 = *(ulonglong *)(lVar9 + 0x58), uVar13 != 0)) {
      if (uVar13 == 1) {
        if ((uVar4 != *(uint *)(lVar8 + 8)) || (uVar5 != *(uint *)(lVar8 + 0xc)))
        goto LAB_1405bef2f;
        uVar11 = 0;
        lVar9 = lVar8;
      }
      else {
        uStack_48 = uVar4;
        uStack_44 = uVar5;
        uVar11 = pdb_1400af680(lVar9 + 0x80,&uStack_48);
        uVar12 = pdb_1404014e0(lVar9 + 0x48,uVar11,&uStack_48);
        if ((uVar12 & 1) == 0) goto LAB_1405bef2f;
        if (uVar13 <= uVar11) {
LAB_1405bef4c:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,uVar13,&UNK_142f77528);
        }
        lVar9 = *(longlong *)(lVar9 + 0x50);
      }
      if ((*(char *)(lVar9 + 0x10 + uVar11 * 0x28) == '\x01') &&
         (lVar8 = lVar8 + lVar10 * 8, uVar1 = *(undefined8 *)(lVar8 + 0x14),
         uVar2 = *(undefined8 *)(lVar8 + 0x1c),
         fVar15 = (float)((ulonglong)uVar1 >> 0x20) * (float)uVar2 -
                  (float)uVar1 * (float)((ulonglong)uVar2 >> 0x20), uVar14 = uVar14 & 0xff,
         0.0 < (float)(_DAT_142e37820 & (uint)fVar15 | (uint)DAT_142e3c640) && !NAN(fVar15))) {
        uVar14 = 0;
      }
    }
  }
LAB_1405bef2f:
  return (uVar14 ^ 1) & 0xffffffff;
}

