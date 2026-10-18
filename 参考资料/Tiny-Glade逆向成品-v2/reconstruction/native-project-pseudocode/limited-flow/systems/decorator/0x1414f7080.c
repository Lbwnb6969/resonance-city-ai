// VA 0x1414f7080, PDB extent 1009 bytes
// system_decorator::decorator_visual::deco_differential_state::WallAttachedDecoTracker::remove<system_decorator::decorator_visual::chimney_assemble_bricks::ChimneyAssemblyParams>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/deco_differential_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::deco_differential_state::WallAttachedDecoTracker::remove<system_decorator::decorator_visual::chimney_assemble_bricks::ChimneyAssemblyParams>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/deco_differential_state.rs
   Extent: 1009 */

void pdb_1414f7080(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong alStack_98 [3];
  undefined **ppuStack_80;
  code *pcStack_78;
  longlong *plStack_70;
  code *pcStack_68;
  int *piStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  int aiStack_3c [3];
  
  aiStack_3c[1] = -2;
  aiStack_3c[2] = -1;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  aiStack_3c[0] = param_4;
  lVar4 = pdb_140c413f0(&uStack_a8);
  alStack_98[0] = lVar4;
  if (param_1[3] != 0) {
    uVar5 = pdb_1400af0a0(param_1 + 4,alStack_98);
    lVar10 = *param_1;
    bVar11 = (byte)(uVar5 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar6 = 0;
    while( true ) {
      uVar5 = uVar5 & param_1[1];
      auVar1 = *(undefined1 (*) [16])(lVar10 + uVar5);
      auVar15[0] = -(auVar1[0] == auVar12[0]);
      auVar15[1] = -(auVar1[1] == auVar12[1]);
      auVar15[2] = -(auVar1[2] == auVar12[2]);
      auVar15[3] = -(auVar1[3] == auVar12[3]);
      auVar15[4] = -(auVar1[4] == auVar12[4]);
      auVar15[5] = -(auVar1[5] == auVar12[5]);
      auVar15[6] = -(auVar1[6] == auVar12[6]);
      auVar15[7] = -(auVar1[7] == auVar12[7]);
      auVar15[8] = -(auVar1[8] == auVar12[0]);
      auVar15[9] = -(auVar1[9] == auVar12[1]);
      auVar15[10] = -(auVar1[10] == auVar12[2]);
      auVar15[0xb] = -(auVar1[0xb] == auVar12[3]);
      auVar15[0xc] = -(auVar1[0xc] == auVar12[4]);
      auVar15[0xd] = -(auVar1[0xd] == auVar12[5]);
      auVar15[0xe] = -(auVar1[0xe] == auVar12[6]);
      auVar15[0xf] = -(auVar1[0xf] == auVar12[7]);
      uVar8 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar7 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (uVar2 + uVar5 & param_1[1]) * -0x38;
        if (lVar4 == *(longlong *)(lVar10 + -0x38 + lVar9)) {
          lVar10 = lVar10 + lVar9;
          if (*(longlong *)(lVar10 + -0x18) != 0) {
            uVar5 = pdb_1400aede0(lVar10 + -0x10,aiStack_3c);
            bVar11 = (byte)(uVar5 >> 0x39);
            auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
            auVar12 = pshuflw(auVar12,auVar12,0);
            lVar4 = 0;
            while( true ) {
              uVar5 = uVar5 & *(ulonglong *)(lVar10 + -0x28);
              auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar10 + -0x30) + uVar5);
              auVar16[0] = -(auVar1[0] == auVar12[0]);
              auVar16[1] = -(auVar1[1] == auVar12[1]);
              auVar16[2] = -(auVar1[2] == auVar12[2]);
              auVar16[3] = -(auVar1[3] == auVar12[3]);
              auVar16[4] = -(auVar1[4] == auVar12[4]);
              auVar16[5] = -(auVar1[5] == auVar12[5]);
              auVar16[6] = -(auVar1[6] == auVar12[6]);
              auVar16[7] = -(auVar1[7] == auVar12[7]);
              auVar16[8] = -(auVar1[8] == auVar12[0]);
              auVar16[9] = -(auVar1[9] == auVar12[1]);
              auVar16[10] = -(auVar1[10] == auVar12[2]);
              auVar16[0xb] = -(auVar1[0xb] == auVar12[3]);
              auVar16[0xc] = -(auVar1[0xc] == auVar12[4]);
              auVar16[0xd] = -(auVar1[0xd] == auVar12[5]);
              auVar16[0xe] = -(auVar1[0xe] == auVar12[6]);
              auVar16[0xf] = -(auVar1[0xf] == auVar12[7]);
              uVar8 = (ushort)(SUB161(auVar16 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar16[0xf] >> 7) << 0xf;
              uVar7 = (uint)uVar8;
              while (uVar8 != 0) {
                uVar2 = 0;
                for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                  uVar2 = uVar2 + 1;
                }
                lVar6 = *(longlong *)(lVar10 + -0x30) +
                        (uVar2 + uVar5 & *(ulonglong *)(lVar10 + -0x28)) * -0x20;
                if (aiStack_3c[0] == *(int *)(lVar6 + -0x20)) {
                  lVar4 = *(longlong *)(lVar6 + -0x18);
                  *(undefined8 *)(lVar6 + -0x18) = 4;
                    /* WARNING: Could not recover jumptable at 0x0001414f7231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&UNK_143317c20 + *(int *)(&UNK_143317c20 + lVar4 * 4)))
                            (*(undefined8 *)(lVar6 + -0x10),
                             &UNK_143317c20 + *(int *)(&UNK_143317c20 + lVar4 * 4));
                  return;
                }
                uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
                uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
              }
              auVar14[0] = -(auVar1[0] == -1);
              auVar14[1] = -(auVar1[1] == -1);
              auVar14[2] = -(auVar1[2] == -1);
              auVar14[3] = -(auVar1[3] == -1);
              auVar14[4] = -(auVar1[4] == -1);
              auVar14[5] = -(auVar1[5] == -1);
              auVar14[6] = -(auVar1[6] == -1);
              auVar14[7] = -(auVar1[7] == -1);
              auVar14[8] = -(auVar1[8] == -1);
              auVar14[9] = -(auVar1[9] == -1);
              auVar14[10] = -(auVar1[10] == -1);
              auVar14[0xb] = -(auVar1[0xb] == -1);
              auVar14[0xc] = -(auVar1[0xc] == -1);
              auVar14[0xd] = -(auVar1[0xd] == -1);
              auVar14[0xe] = -(auVar1[0xe] == -1);
              auVar14[0xf] = -(auVar1[0xf] == -1);
              if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar14 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar14 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar14 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar14 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar14 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar14 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar14 >> 0x67,0) & 1) != 0) || (SUB161(auVar14 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar14 >> 0x77,0) & 1) != 0) || auVar14[0xf] < '\0') break;
              uVar5 = uVar5 + lVar4 + 0x10;
              lVar4 = lVar4 + 0x10;
            }
          }
          puStack_50 = &UNK_143317a90;
          uStack_48 = 0x52;
          ppuStack_80 = &puStack_50;
          pcStack_78 = pdb_1402ed400;
          pcStack_68 = pdb_1414f7480;
          piStack_60 = aiStack_3c;
          pcStack_58 = pdb_1414f74c0;
          plStack_70 = alStack_98;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_1433179b8,&ppuStack_80,&UNK_1433179d8);
        }
        uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
      }
      auVar13[0] = -(auVar1[0] == -1);
      auVar13[1] = -(auVar1[1] == -1);
      auVar13[2] = -(auVar1[2] == -1);
      auVar13[3] = -(auVar1[3] == -1);
      auVar13[4] = -(auVar1[4] == -1);
      auVar13[5] = -(auVar1[5] == -1);
      auVar13[6] = -(auVar1[6] == -1);
      auVar13[7] = -(auVar1[7] == -1);
      auVar13[8] = -(auVar1[8] == -1);
      auVar13[9] = -(auVar1[9] == -1);
      auVar13[10] = -(auVar1[10] == -1);
      auVar13[0xb] = -(auVar1[0xb] == -1);
      auVar13[0xc] = -(auVar1[0xc] == -1);
      auVar13[0xd] = -(auVar1[0xd] == -1);
      auVar13[0xe] = -(auVar1[0xe] == -1);
      auVar13[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar5 = uVar5 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
  puStack_50 = &UNK_143317a90;
  uStack_48 = 0x52;
  ppuStack_80 = &puStack_50;
  pcStack_78 = pdb_1402ed400;
  plStack_70 = alStack_98;
  pcStack_68 = pdb_1414f7480;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1433179f0,&ppuStack_80,&UNK_143317a10);
}

