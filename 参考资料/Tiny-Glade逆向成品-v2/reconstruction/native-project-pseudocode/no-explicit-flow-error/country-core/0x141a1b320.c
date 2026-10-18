// VA 0x141a1b320, PDB extent 1071 bytes
// country_core::startup::swap_replacement_mods::_::impl$0::get_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::swap_replacement_mods::_::impl$0::get_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 1071 */

void pdb_141a1b320(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 uStack_89;
  undefined4 *puStack_88;
  code *pcStack_80;
  undefined1 *puStack_78;
  code *pcStack_70;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(ulonglong *)(param_4 + 0x210);
  if (*param_2 < uVar2) {
    lVar11 = *(longlong *)(param_4 + 0x208);
    uVar3 = *(ulonglong *)(lVar11 + *param_2 * 8);
    if (uVar3 != 0) {
      lVar12 = *(longlong *)(param_4 + 0x1d8);
      lVar10 = ~uVar3 * 0x40;
      if ((((*(longlong *)(lVar12 + 0x20 + lVar10) != 0) && (param_2[1] < uVar2)) &&
          (uVar3 = *(ulonglong *)(lVar11 + param_2[1] * 8), uVar3 != 0)) &&
         (lVar15 = ~uVar3 * 0x40, *(longlong *)(lVar12 + 0x20 + lVar15) != 0)) {
        if (((param_2[2] < uVar2) && (uVar2 = *(ulonglong *)(lVar11 + param_2[2] * 8), uVar2 != 0))
           && (lVar11 = ~uVar2 * 0x40, *(longlong *)(lVar12 + 0x20 + lVar11) != 0)) {
          lVar10 = lVar10 + lVar12;
          uVar4 = *(undefined8 *)(lVar10 + 0x10);
          uVar1 = *param_3;
          lVar15 = lVar15 + lVar12;
          uVar5 = *(undefined8 *)(lVar15 + 0x10);
          lVar11 = lVar11 + lVar12;
          uVar6 = *(undefined8 *)(lVar11 + 0x10);
          if ((param_2[3] < *(ulonglong *)(param_4 + 0x210)) &&
             (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[3] * 8), uVar2 != 0))
          {
            lVar12 = ~uVar2 * 0x40;
            if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar12) != 0) {
              lVar12 = *(longlong *)(param_4 + 0x1d8) + lVar12;
              uStack_48 = *(undefined8 *)(lVar12 + 0x10);
              if ((param_2[4] < *(ulonglong *)(param_4 + 0x210)) &&
                 (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[4] * 8),
                 uVar2 != 0)) {
                lVar13 = ~uVar2 * 0x40;
                if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar13) != 0) {
                  lVar13 = *(longlong *)(param_4 + 0x1d8) + lVar13;
                  uStack_50 = *(undefined8 *)(lVar13 + 0x10);
                  if ((param_2[5] < *(ulonglong *)(param_4 + 0x210)) &&
                     (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[5] * 8),
                     uVar2 != 0)) {
                    lVar14 = ~uVar2 * 0x40;
                    if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar14) != 0) {
                      lVar14 = *(longlong *)(param_4 + 0x1d8) + lVar14;
                      uVar7 = *(undefined8 *)(lVar14 + 0x10);
                      puStack_68 = param_3;
                      uStack_60 = uVar4;
                      uStack_58 = uVar5;
                      if ((param_2[6] < *(ulonglong *)(param_4 + 0x210)) &&
                         (uVar2 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2[6] * 8),
                         uVar2 != 0)) {
                        lVar17 = ~uVar2 * 0x40;
                        if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar17) != 0) {
                          lVar17 = *(longlong *)(param_4 + 0x1d8) + lVar17;
                          uVar8 = *(undefined8 *)(lVar17 + 0x10);
                          if ((param_2[7] < *(ulonglong *)(param_4 + 0x210)) &&
                             (uVar2 = *(ulonglong *)
                                       (*(longlong *)(param_4 + 0x208) + param_2[7] * 8), uVar2 != 0
                             )) {
                            lVar16 = ~uVar2 * 0x40;
                            if (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + lVar16) != 0)
                            {
                              lVar16 = *(longlong *)(param_4 + 0x1d8) + lVar16;
                              uVar9 = *(undefined8 *)(lVar16 + 0x10);
                              *param_1 = uVar4;
                              param_1[1] = lVar10 + 0x38;
                              param_1[2] = lVar10 + 0x3c;
                              *(undefined4 *)(param_1 + 3) = uVar1;
                              *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
                              param_1[4] = uVar5;
                              param_1[5] = lVar15 + 0x38;
                              param_1[6] = lVar15 + 0x3c;
                              *(undefined4 *)(param_1 + 7) = uVar1;
                              *(undefined4 *)((longlong)param_1 + 0x3c) = param_5;
                              param_1[8] = uVar6;
                              param_1[9] = lVar11 + 0x38;
                              param_1[10] = lVar11 + 0x3c;
                              *(undefined4 *)(param_1 + 0xb) = uVar1;
                              *(undefined4 *)((longlong)param_1 + 0x5c) = param_5;
                              param_1[0xc] = uStack_48;
                              param_1[0xd] = lVar12 + 0x38;
                              param_1[0xe] = lVar12 + 0x3c;
                              *(undefined4 *)(param_1 + 0xf) = uVar1;
                              *(undefined4 *)((longlong)param_1 + 0x7c) = param_5;
                              param_1[0x10] = uStack_50;
                              param_1[0x11] = lVar13 + 0x38;
                              param_1[0x12] = lVar13 + 0x3c;
                              *(undefined4 *)(param_1 + 0x13) = uVar1;
                              *(undefined4 *)((longlong)param_1 + 0x9c) = param_5;
                              param_1[0x14] = uVar7;
                              param_1[0x15] = lVar14 + 0x38;
                              param_1[0x16] = lVar14 + 0x3c;
                              *(undefined4 *)(param_1 + 0x17) = uVar1;
                              *(undefined4 *)((longlong)param_1 + 0xbc) = param_5;
                              param_1[0x18] = uVar8;
                              param_1[0x19] = lVar17 + 0x38;
                              param_1[0x1a] = lVar17 + 0x3c;
                              *(undefined4 *)(param_1 + 0x1b) = uVar1;
                              *(undefined4 *)((longlong)param_1 + 0xdc) = param_5;
                              param_1[0x1c] = uVar9;
                              param_1[0x1d] = lVar16 + 0x38;
                              param_1[0x1e] = lVar16 + 0x3c;
                              *(undefined4 *)(param_1 + 0x1f) = uVar1;
                              *(undefined4 *)((longlong)param_1 + 0xfc) = param_5;
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        puStack_88 = param_3 + 1;
        pcStack_80 = pdb_140f33ec0;
        puStack_78 = &uStack_89;
        pcStack_70 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143363407,&puStack_88,&UNK_1433634e8);
      }
    }
  }
  puStack_88 = param_3 + 1;
  pcStack_80 = pdb_140f33ec0;
  puStack_78 = &uStack_89;
  pcStack_70 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143363407,&puStack_88,&UNK_1433634a0);
}

