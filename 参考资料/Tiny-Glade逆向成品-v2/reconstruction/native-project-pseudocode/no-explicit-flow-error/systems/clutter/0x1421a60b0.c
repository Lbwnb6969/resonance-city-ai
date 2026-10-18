// VA 0x1421a60b0, PDB extent 788 bytes
// system_clutter::autoclutter::read_bush_positions_from_gpu::read_bush_positions_from_gpu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/read_bush_positions_from_gpu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::read_bush_positions_from_gpu::read_bush_positions_from_gpu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/read_bush_positions_from_gpu.rs
   Extent: 788 */

void pdb_1421a60b0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uStack_461;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulonglong uStack_450;
  ulonglong auStack_258 [67];
  
  puVar6 = (undefined8 *)pdb_1428fa560(*param_2,&UNK_1435b3fc0);
  if ((puVar6 == (undefined8 *)0x0) ||
     (lVar7 = (**(code **)(puVar6[1] + 0x18))(*puVar6), lVar7 == 0)) {
    return;
  }
  uVar1 = *(ulonglong *)(lVar7 + 0x10);
  if (uVar1 != 0) {
    puVar2 = *(uint **)(lVar7 + 8);
    uVar4 = *puVar2;
    uVar11 = 0x2580;
    if (uVar4 < 0x2580) {
      uVar11 = (ulonglong)uVar4;
    }
    if (uVar11 < uVar1) {
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      lVar7 = *param_1;
      if (*(longlong *)(lVar7 + 0x10) != 0) {
        lVar14 = *(longlong *)(lVar7 + 8);
        lVar8 = *(longlong *)(lVar7 + 0x10) * 0x20;
        uVar1 = lVar8 - 0x20;
        lVar12 = lVar14;
        if ((~(uint)uVar1 & 0xe0) != 0) {
          lVar13 = -(ulonglong)(((uint)(uVar1 >> 5) & 0x7ffffff) + 1 & 7);
          do {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            lVar12 = lVar12 + 0x20;
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0);
        }
        if (0xdf < uVar1) {
          do {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            *(undefined8 *)(lVar12 + 0x30) = 0;
            *(undefined8 *)(lVar12 + 0x50) = 0;
            *(undefined8 *)(lVar12 + 0x70) = 0;
            *(undefined8 *)(lVar12 + 0x90) = 0;
            *(undefined8 *)(lVar12 + 0xb0) = 0;
            *(undefined8 *)(lVar12 + 0xd0) = 0;
            *(undefined8 *)(lVar12 + 0xf0) = 0;
            lVar12 = lVar12 + 0x100;
          } while (lVar12 != lVar14 + lVar8);
        }
      }
      uVar3 = _DAT_142e3783c;
      if (uVar4 != 0) {
        lVar14 = 0;
        do {
          uStack_460 = *(undefined8 *)((longlong)puVar2 + lVar14 + 8);
          pdb_140deeb40(&uStack_458,uStack_460,(int)((ulonglong)uStack_460 >> 0x20),uVar3);
          pdb_1421a6e80(&uStack_458,lVar7,&uStack_460);
          lVar14 = lVar14 + 8;
        } while (uVar11 * 8 != lVar14);
      }
      uStack_458 = 4;
      uStack_450 = 0;
      uVar4 = pdb_1428f8ec0(&uStack_458);
      pdb_140a84d70(auStack_258);
      if (*(longlong *)(lVar7 + 0x10) == 0) {
        return;
      }
      lVar12 = *(longlong *)(lVar7 + 0x10) * 0x20 + *(longlong *)(lVar7 + 8);
      iVar9 = 0;
      bVar10 = false;
      lVar14 = *(longlong *)(lVar7 + 8);
      do {
        while( true ) {
          lVar8 = lVar14 + 0x20;
          uStack_458 = *(undefined8 *)(lVar14 + 8);
          uStack_450 = *(ulonglong *)(lVar14 + 0x10);
          if (1 < uStack_450) {
            if (uStack_450 < 0x15) {
              pdb_14219ef90(uStack_458,uStack_450,1,&uStack_461);
            }
            else {
              pdb_1428fb9e0(uStack_458,uStack_450,&uStack_461);
            }
          }
          uVar5 = pdb_1428f8ec0(&uStack_458);
          if (*(uint *)(lVar14 + 0x18) != (uVar5 ^ uVar4)) break;
          iVar9 = iVar9 + 1;
          lVar14 = lVar8;
          if (lVar8 == lVar12) {
            if (!bVar10) {
              return;
            }
            goto LAB_1421a6342;
          }
        }
        *(uint *)(lVar14 + 0x18) = uVar5 ^ uVar4;
        uVar5 = pdb_1409012c0(iVar9);
        if (0xfff < uVar5) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2((ulonglong)(uVar5 >> 6),0x40,&UNK_14346cb48);
        }
        auStack_258[uVar5 >> 6] = auStack_258[uVar5 >> 6] | 1L << ((byte)uVar5 & 0x3f);
        iVar9 = iVar9 + 1;
        bVar10 = true;
        lVar14 = lVar8;
      } while (lVar8 != lVar12);
LAB_1421a6342:
      pub_142e32760(&uStack_458,auStack_258,0x200);
      pdb_1428f4370(lVar7 + 0x18,&uStack_458);
      return;
    }
    pdb_142dc8420(1,uVar11 + 1,uVar1,&UNK_14346cbc0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_14346cba8);
}

