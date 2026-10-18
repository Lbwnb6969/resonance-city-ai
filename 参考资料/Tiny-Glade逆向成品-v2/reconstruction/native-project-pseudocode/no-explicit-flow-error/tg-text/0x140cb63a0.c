// VA 0x140cb63a0, PDB extent 920 bytes
// tg_text::TextFragment::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_text::TextFragment::render
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 920 */

void pdb_140cb63a0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  ulonglong *puStack_88;
  ulonglong *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_5c;
  ulonglong uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uVar8 = *(longlong *)(param_1 + 0x38) >> 0x3f &
          *(longlong *)(param_1 + 0x38) + 0x8000000000000001U;
  if (uVar8 == 0) {
    cVar1 = *(char *)(param_1 + 0x170);
  }
  else {
    if (uVar8 == 1) {
      lVar9 = 0x138;
    }
    else {
      lVar9 = 0x148;
    }
    cVar1 = *(char *)(lVar9 + *(longlong *)(param_1 + 0x40));
  }
  uStack_5c = param_4;
  uStack_58 = param_3;
  if (cVar1 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x24c);
    uVar3 = *(uint *)(param_5 + 0x97);
    if (uVar3 <= uVar2) {
      uVar4 = *(uint *)((longlong)param_5 + 0x4b4);
      if (*(uint *)(param_1 + 0x250) < uVar4) {
        lVar9 = *(longlong *)(param_1 + 0x1e0);
        if (lVar9 != 0) {
          lVar6 = *(longlong *)(param_1 + 0x1d8);
          lVar7 = param_5[0x80];
          uVar8 = param_5[0x81];
          lVar11 = 0;
          do {
            uVar5 = *(uint *)(lVar6 + lVar11);
            uVar10 = (ulonglong)(uVar5 & 0xffff);
            if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar10,uVar8,&UNK_14307a9a0);
            }
            if ((*(short *)(lVar7 + 4 + uVar10 * 8) != (short)(uVar5 >> 0x10)) ||
               (*(int *)(lVar7 + uVar10 * 8) == 0)) {
              *(undefined4 *)(param_1 + 0x24c) = 0;
              if (uVar3 == 0) goto LAB_140cb671e;
              goto LAB_140cb64b7;
            }
            *(uint *)(lVar7 + uVar10 * 8) = uVar4;
            lVar11 = lVar11 + 4;
          } while (lVar9 << 2 != lVar11);
        }
        *(uint *)(param_1 + 0x250) = uVar4;
      }
      if (uVar3 <= uVar2) {
LAB_140cb671e:
        uStack_a0._0_4_ = *(float *)(param_1 + 0x23c);
        goto LAB_140cb6652;
      }
    }
  }
LAB_140cb64b7:
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  puStack_90 = (undefined8 *)(param_1 + 0x256);
  puStack_98 = param_5;
  puStack_88 = &uStack_58;
  pdb_141cbedd0(param_1,&puStack_98);
  pdb_140ccb680(param_1,param_5,1);
  uVar8 = *(longlong *)(param_1 + 0x38) >> 0x3f &
          *(longlong *)(param_1 + 0x38) + 0x8000000000000001U;
  if (uVar8 == 0) {
    lVar9 = param_1 + 0x38;
    uStack_a8 = CONCAT44(uStack_a8._4_4_,*(undefined4 *)(param_1 + 0x154));
    uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
  }
  else if (uVar8 == 1) {
    uStack_a8 = CONCAT44(uStack_a8._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x11c));
    uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
    lVar9 = *(longlong *)(param_1 + 0x40);
  }
  else {
    uStack_a8 = CONCAT44(uStack_a8._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 300));
    uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
    lVar9 = *(longlong *)(param_1 + 0x40) + 0x10;
  }
  puStack_70 = &uStack_a8;
  puStack_88 = (ulonglong *)(param_1 + 0x254);
  puStack_98 = &uStack_a0;
  puStack_68 = param_5;
  puStack_90 = (undefined8 *)param_1;
  puStack_80 = (ulonglong *)(param_1 + 0x1b8);
  puStack_78 = (undefined8 *)(param_1 + 0x1d0);
  pdb_141cbf100(&puStack_98,lVar9);
  uStack_a0._0_4_ = (float)uStack_a0 + (float)uStack_a8;
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_5 + 0x97);
  *(float *)(param_1 + 0x23c) = (float)uStack_a0;
LAB_140cb6652:
  uStack_a8 = CONCAT44((float)uStack_a0 * _UNK_142e61234 + (float)((ulonglong)param_2 >> 0x20),
                       (float)param_3 * _DAT_142e61230 + (float)param_2);
  uStack_48 = *(undefined4 *)(param_5 + 0x96);
  uStack_58 = param_5[0x94];
  uStack_50 = param_5[0x95];
  uStack_a0 = param_5[0x93];
  puStack_98 = *(undefined8 **)(param_1 + 0x1c0);
  puStack_90 = puStack_98 + *(longlong *)(param_1 + 0x1c8) * 6;
  puStack_88 = &uStack_a8;
  puStack_80 = &uStack_58;
  puStack_78 = &uStack_a0;
  puStack_70 = (undefined8 *)&uStack_5c;
  pdb_141cc0b60(param_5 + 0x82,&puStack_98);
  return;
}

