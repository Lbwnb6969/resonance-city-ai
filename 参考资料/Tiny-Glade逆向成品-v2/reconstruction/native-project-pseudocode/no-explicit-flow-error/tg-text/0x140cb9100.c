// VA 0x140cb9100, PDB extent 584 bytes
// tg_text::shape_stream::RawShapeStream::append
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_text::shape_stream::RawShapeStream::append
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 584 */

void pdb_140cb9100(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  uint uVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 uStack_7d;
  uint uStack_7c;
  code *pcStack_78;
  undefined8 uStack_70;
  
  fVar4 = _DAT_142e4fba0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar8 = *(longlong *)(param_2 + 0x10) << 5;
    pcStack_78 = *(code **)(param_4 + 0x18);
    lVar9 = 0;
    uStack_70 = param_3;
    do {
      while( true ) {
        uVar3 = *(ulonglong *)(lVar2 + lVar9);
        lVar7 = uVar3 + 0x7ffffffffffffffe;
        if (uVar3 < 0x8000000000000002) {
          lVar7 = 1;
        }
        if (lVar7 == 0) break;
        if (lVar7 == 1) {
          if (uVar3 == 0x8000000000000001) {
            uVar5 = *(uint *)(lVar2 + 8 + lVar9);
            if (0xffff < uVar5) {
              puVar6 = &UNK_14307ab98;
LAB_140cb9325:
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14307ab48,0x2b,&uStack_7d,&UNK_14307ab28,puVar6);
            }
          }
          else {
            uVar5 = (*pcStack_78)(uStack_70,*(undefined8 *)(lVar2 + 8 + lVar9),
                                  *(undefined8 *)(lVar2 + 0x10 + lVar9));
            if (0xffff < uVar5) {
              puVar6 = &UNK_14307abb0;
              goto LAB_140cb9325;
            }
          }
          iVar1 = *(int *)(lVar2 + 0x18 + lVar9);
          lVar7 = param_1[2];
          if (*param_1 == lVar7) {
            uStack_7c = uVar5;
            pdb_142d7f1b0(param_1,lVar7,1,4,4);
            lVar7 = param_1[2];
            uVar5 = uStack_7c;
          }
          *(uint *)(param_1[1] + lVar7 * 4) = (iVar1 << 0x18 | uVar5 << 8) + 1;
        }
        else {
          fVar10 = *(float *)(lVar2 + 8 + lVar9);
          fVar11 = 0.0;
          if (0.0 <= fVar10) {
            fVar11 = fVar10;
          }
          lVar7 = param_1[2];
          if (*param_1 == lVar7) {
            pdb_142d7f1b0(param_1,lVar7,1,4,4);
            lVar7 = param_1[2];
          }
          fVar10 = fVar4;
          if (fVar11 <= fVar4) {
            fVar10 = fVar11;
          }
          fVar11 = 0.0;
          if (0.0 <= fVar10) {
            fVar11 = fVar10;
          }
          fVar10 = fVar4;
          if (fVar11 <= fVar4) {
            fVar10 = fVar11;
          }
          *(uint *)(param_1[1] + lVar7 * 4) = ((int)fVar10 & 0xffU) << 8 | 2;
        }
        param_1[2] = lVar7 + 1;
        lVar9 = lVar9 + 0x20;
        if (lVar8 == lVar9) {
          return;
        }
      }
      uVar5 = *(uint *)(lVar2 + 8 + lVar9);
      lVar7 = param_1[2];
      if ((ulonglong)(*param_1 - lVar7) < 2) {
        pdb_142d7f1b0(param_1,lVar7,2,4,4);
        lVar7 = param_1[2];
      }
      *(ulonglong *)(param_1[1] + lVar7 * 4) = (ulonglong)uVar5 << 0x20;
      param_1[2] = lVar7 + 2;
      lVar9 = lVar9 + 0x20;
    } while (lVar8 != lVar9);
  }
  return;
}

