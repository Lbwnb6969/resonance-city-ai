// VA 0x1408e9140, PDB extent 754 bytes
// system_decorator::decorator_on_freehand_wall_edited::decorator_on_circle_edited
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_freehand_wall_edited.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_on_freehand_wall_edited::decorator_on_circle_edited
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_freehand_wall_edited.rs
   Extent: 754 */

void pdb_1408e9140(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 *puStack_98;
  ushort uStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = (ulonglong *)*param_2;
  lVar16 = param_2[1];
  uVar4 = *puVar3;
  uVar17 = 0;
  uVar9 = uVar4 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar4 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar9 = uVar17;
  }
  uVar18 = uVar4 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar4 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar18 = uVar17;
  }
  lVar14 = uVar9 * 0x20 + *(longlong *)(lVar16 + 8);
  uVar4 = *(ulonglong *)(lVar16 + 0x10) - uVar9;
  if (*(ulonglong *)(lVar16 + 0x10) < uVar9) {
    lVar14 = 8;
    uVar4 = uVar17;
  }
  lVar10 = uVar18 * 0x20 + *(longlong *)(lVar16 + 0x28);
  uVar9 = *(ulonglong *)(lVar16 + 0x30) - uVar18;
  if (*(ulonglong *)(lVar16 + 0x30) < uVar18) {
    lVar10 = 8;
    uVar9 = uVar17;
  }
  *puVar3 = (*(longlong *)(lVar16 + 0x40) - uVar9) - uVar4;
  lVar16 = uVar4 * 0x20 + lVar14;
  lVar20 = uVar9 * 0x20 + lVar10;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar5 = *param_3;
  puVar6 = (undefined4 *)param_3[2];
  uVar7 = *param_1;
  do {
    if ((lVar14 == 0) || (lVar14 == lVar16)) {
      if ((lVar10 == 0) || (lVar10 == lVar20)) {
        return;
      }
      lVar14 = 0;
      lVar11 = lVar10 + 0x20;
      lVar12 = lVar10;
    }
    else {
      lVar11 = lVar10;
      lVar12 = lVar14;
      lVar14 = lVar14 + 0x20;
    }
    lVar10 = lVar11;
    *puVar3 = *puVar3 + 1;
    puVar19 = *(undefined8 **)(lVar12 + 8);
    puVar15 = puVar19 + *(longlong *)(lVar12 + 0x10);
    if (*(longlong *)(lVar12 + 0x10) != 0) {
      do {
        *puVar6 = uVar2;
        uVar8 = *puVar19;
        lVar11 = pdb_140c3f000(uVar5,uVar8);
        if (lVar11 != 0) {
          pauStack_a8 = *(undefined1 (**) [16])(lVar11 + 0x30);
          puStack_98 = *pauStack_a8 + *(longlong *)(lVar11 + 0x38) + 1;
          auVar1 = *pauStack_a8;
          uStack_90 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
          uStack_88 = *(undefined8 *)(lVar11 + 0x48);
          lStack_80 = lVar11 + 0x60;
          pauStack_a0 = pauStack_a8 + 1;
          while (pdb_140c441a0(auStack_60,&pauStack_a8), lStack_58 != 0) {
            uStack_68 = uStack_48;
            lStack_78 = lStack_58;
            uStack_70 = uStack_50;
            lVar12 = pdb_140315970(&lStack_78);
            lVar11 = (ulonglong)*(byte *)(lVar12 + 0x32) - 1;
            if ((ulonglong)*(byte *)(lVar12 + 0x32) < 2) {
              lVar11 = 0;
            }
            if (lVar11 == 0) {
              lVar11 = pdb_140b54f80(uVar7,uVar8,&UNK_14301bf10);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_14301bf28);
              }
              pdb_140dea260(&uStack_b4,lVar12 + 0x10);
              uVar13 = pdb_140c413c0(&lStack_78);
              lVar11 = pdb_1409011f0(uVar13,&UNK_14301bf40);
              *(undefined8 *)(lVar11 + 0x14) = uStack_b4;
              *(undefined4 *)(lVar11 + 0x1c) = uStack_ac;
            }
            else if ((int)lVar11 != 1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_14301bf58,0x28,&UNK_14301bf80);
            }
          }
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar15);
    }
  } while( true );
}

