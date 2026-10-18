// VA 0x1414f5df0, PDB extent 1848 bytes
// system_decorator::decorator_visual::deco_differential_state::WallAttachedDecoTracker::add<system_decorator::decorator_visual::door_stairs_assemble_bricks::DoorStairsAssemblyParams>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/deco_differential_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::deco_differential_state::WallAttachedDecoTracker::add<system_decorator::decorator_visual::door_stairs_assemble_bricks::DoorStairsAssemblyParams>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/deco_differential_state.rs
   Extent: 1848 */

void pdb_1414f5df0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 *param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  ulonglong uVar14;
  longlong lVar15;
  ushort uVar16;
  longlong lVar17;
  longlong lVar18;
  byte bVar19;
  ulonglong uVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong alStack_d0 [10];
  longlong lStack_80;
  byte *pbStack_78;
  int iStack_64;
  ulonglong uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_e0 = param_2;
  uStack_d8 = param_3;
  iStack_64 = param_4;
  lVar8 = pdb_140c413f0(&uStack_e0);
  lStack_80 = lVar8;
  pdb_14007ee60();
  pbStack_78 = pub_1406abab0(0x20,4);
  if (pbStack_78 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x20);
  }
  uVar5 = *param_5;
  uVar6 = param_5[1];
  uVar3 = param_5[3];
  *(undefined8 *)(pbStack_78 + 0x10) = param_5[2];
  *(undefined8 *)(pbStack_78 + 0x18) = uVar3;
  *(undefined8 *)pbStack_78 = uVar5;
  *(undefined8 *)(pbStack_78 + 8) = uVar6;
  alStack_d0[0] = lVar8;
  uVar9 = pdb_1400af0a0(param_1 + 4);
  lVar18 = *param_1;
  bVar19 = (byte)(uVar9 >> 0x38);
  bVar21 = bVar19 >> 1;
  auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
  auVar22 = pshuflw(auVar22,auVar22,0);
  lVar12 = 0;
  uVar14 = uVar9;
  do {
    uVar14 = uVar14 & param_1[1];
    pcVar1 = (char *)(lVar18 + uVar14);
    auVar25[0] = -(*pcVar1 == auVar22[0]);
    auVar25[1] = -(pcVar1[1] == auVar22[1]);
    auVar25[2] = -(pcVar1[2] == auVar22[2]);
    auVar25[3] = -(pcVar1[3] == auVar22[3]);
    auVar25[4] = -(pcVar1[4] == auVar22[4]);
    auVar25[5] = -(pcVar1[5] == auVar22[5]);
    auVar25[6] = -(pcVar1[6] == auVar22[6]);
    auVar25[7] = -(pcVar1[7] == auVar22[7]);
    auVar25[8] = -(pcVar1[8] == auVar22[0]);
    auVar25[9] = -(pcVar1[9] == auVar22[1]);
    auVar25[10] = -(pcVar1[10] == auVar22[2]);
    auVar25[0xb] = -(pcVar1[0xb] == auVar22[3]);
    auVar25[0xc] = -(pcVar1[0xc] == auVar22[4]);
    auVar25[0xd] = -(pcVar1[0xd] == auVar22[5]);
    auVar25[0xe] = -(pcVar1[0xe] == auVar22[6]);
    auVar25[0xf] = -(pcVar1[0xf] == auVar22[7]);
    uVar16 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
    uVar11 = (uint)uVar16;
    while (uVar16 != 0) {
      uVar7 = 0;
      for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      lVar17 = (uVar7 + uVar14 & param_1[1]) * -0x38;
      if (*(longlong *)(lVar18 + -0x38 + lVar17) == lVar8) {
        lVar18 = lVar18 + lVar17;
        goto LAB_1414f5fe4;
      }
      uVar16 = (ushort)(uVar11 - 1) & (ushort)uVar11;
      uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar16);
    }
    auVar23[0] = -(*pcVar1 == -1);
    auVar23[1] = -(pcVar1[1] == -1);
    auVar23[2] = -(pcVar1[2] == -1);
    auVar23[3] = -(pcVar1[3] == -1);
    auVar23[4] = -(pcVar1[4] == -1);
    auVar23[5] = -(pcVar1[5] == -1);
    auVar23[6] = -(pcVar1[6] == -1);
    auVar23[7] = -(pcVar1[7] == -1);
    auVar23[8] = -(pcVar1[8] == -1);
    auVar23[9] = -(pcVar1[9] == -1);
    auVar23[10] = -(pcVar1[10] == -1);
    auVar23[0xb] = -(pcVar1[0xb] == -1);
    auVar23[0xc] = -(pcVar1[0xc] == -1);
    auVar23[0xd] = -(pcVar1[0xd] == -1);
    auVar23[0xe] = -(pcVar1[0xe] == -1);
    auVar23[0xf] = -(pcVar1[0xf] == -1);
    uVar16 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
    if (uVar16 != 0) {
      if (param_1[2] == 0) {
        uStack_49 = 1;
        lVar12 = 1;
        pdb_142ddb6d0(param_1,1,param_1 + 4,CONCAT71((uint7)(byte)(uVar16 >> 8),1));
      }
      uStack_49 = 1;
      plVar10 = (longlong *)pdb_140f3bda0();
      if ((char)plVar10[2] == '\x01') {
        lVar17 = *plVar10;
        lVar12 = plVar10[1];
      }
      else {
        uStack_49 = 1;
        lVar17 = pdb_140f4fd10();
        *plVar10 = lVar17;
        plVar10[1] = lVar12;
        *(undefined1 *)(plVar10 + 2) = 1;
      }
      *plVar10 = lVar17 + 1;
      pauVar13 = (undefined1 (*) [16])*param_1;
      uVar14 = param_1[1];
      uVar9 = uVar9 & uVar14;
      auVar22 = *(undefined1 (*) [16])(*pauVar13 + uVar9);
      uVar16 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar16;
      if (uVar16 == 0) {
        lVar18 = 0x10;
        do {
          uVar9 = uVar9 + lVar18 & uVar14;
          auVar22 = *(undefined1 (*) [16])(*pauVar13 + uVar9);
          lVar18 = lVar18 + 0x10;
          uVar11 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
        } while (uVar11 == 0);
      }
      uVar7 = 0;
      for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar9 = uVar7 + uVar9 & uVar14;
      bVar21 = (*pauVar13)[uVar9];
      if (-1 < (char)bVar21) {
        auVar22 = *pauVar13;
        uVar11 = 0;
        for (uVar7 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar22[0xf] >> 7) << 0xf); (uVar7 & 1) == 0;
            uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar9 = (ulonglong)uVar11;
        bVar21 = (*pauVar13)[uVar9];
      }
      bVar19 = bVar19 >> 1;
      (*pauVar13)[uVar9] = bVar19;
      pauVar13[1][uVar9 - 0x10 & uVar14] = bVar19;
      lVar15 = uVar9 * -0x38;
      lVar18 = (longlong)pauVar13 + lVar15;
      *(longlong *)((longlong)pauVar13 + lVar15 + -0x38) = lVar8;
      uVar3 = _UNK_143317bb8;
      puVar2 = (undefined8 *)((longlong)pauVar13 + lVar15 + -0x30);
      *puVar2 = _DAT_143317bb0;
      puVar2[1] = uVar3;
      uVar3 = _UNK_143317bc8;
      puVar2 = (undefined8 *)((longlong)pauVar13 + lVar15 + -0x20);
      *puVar2 = _DAT_143317bc0;
      puVar2[1] = uVar3;
      *(longlong *)((longlong)pauVar13 + lVar15 + -0x10) = lVar17;
      *(longlong *)((longlong)pauVar13 + lVar15 + -8) = lVar12;
      lVar12 = param_1[3] - _UNK_142e47bf8;
      param_1[2] = param_1[2] - ((ulonglong)bVar21 & 0xffffffffffffff01);
      param_1[3] = lVar12;
LAB_1414f5fe4:
      alStack_d0[0] = CONCAT44(alStack_d0[0]._4_4_,param_4);
      uStack_49 = 1;
      uStack_58 = pdb_1400aede0(lVar18 + -0x10,alStack_d0);
      pauVar13 = *(undefined1 (**) [16])(lVar18 + -0x30);
      uVar14 = *(ulonglong *)(lVar18 + -0x28);
      bVar19 = (byte)(uStack_58 >> 0x38);
      bVar21 = bVar19 >> 1;
      auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar22 = pshuflw(auVar22,auVar22,0);
      lVar12 = 0;
      uVar9 = uStack_58;
      do {
        uVar9 = uVar9 & uVar14;
        auVar25 = *(undefined1 (*) [16])(*pauVar13 + uVar9);
        auVar26[0] = -(auVar25[0] == auVar22[0]);
        auVar26[1] = -(auVar25[1] == auVar22[1]);
        auVar26[2] = -(auVar25[2] == auVar22[2]);
        auVar26[3] = -(auVar25[3] == auVar22[3]);
        auVar26[4] = -(auVar25[4] == auVar22[4]);
        auVar26[5] = -(auVar25[5] == auVar22[5]);
        auVar26[6] = -(auVar25[6] == auVar22[6]);
        auVar26[7] = -(auVar25[7] == auVar22[7]);
        auVar26[8] = -(auVar25[8] == auVar22[0]);
        auVar26[9] = -(auVar25[9] == auVar22[1]);
        auVar26[10] = -(auVar25[10] == auVar22[2]);
        auVar26[0xb] = -(auVar25[0xb] == auVar22[3]);
        auVar26[0xc] = -(auVar25[0xc] == auVar22[4]);
        auVar26[0xd] = -(auVar25[0xd] == auVar22[5]);
        auVar26[0xe] = -(auVar25[0xe] == auVar22[6]);
        auVar26[0xf] = -(auVar25[0xf] == auVar22[7]);
        uVar16 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
        ;
        uVar11 = (uint)uVar16;
        while (uVar16 != 0) {
          uVar7 = 0;
          for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar20 = uVar7 + uVar9 & uVar14;
          if (*(int *)pauVar13[uVar20 * -2 + -2] == param_4) {
            lVar8 = *(longlong *)(pauVar13[uVar20 * -2 + -2] + 8);
            uVar3 = *(undefined8 *)pauVar13[uVar20 * -2 + -1];
            *(undefined8 *)(pauVar13[uVar20 * -2 + -2] + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x0001414f60d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_143317be4 + *(int *)(&UNK_143317be4 + lVar8 * 4)))
                      (&UNK_143317be4,&UNK_143317be4 + *(int *)(&UNK_143317be4 + lVar8 * 4),uVar3);
            return;
          }
          uVar16 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar16);
        }
        auVar24[0] = -(auVar25[0] == -1);
        auVar24[1] = -(auVar25[1] == -1);
        auVar24[2] = -(auVar25[2] == -1);
        auVar24[3] = -(auVar25[3] == -1);
        auVar24[4] = -(auVar25[4] == -1);
        auVar24[5] = -(auVar25[5] == -1);
        auVar24[6] = -(auVar25[6] == -1);
        auVar24[7] = -(auVar25[7] == -1);
        auVar24[8] = -(auVar25[8] == -1);
        auVar24[9] = -(auVar25[9] == -1);
        auVar24[10] = -(auVar25[10] == -1);
        auVar24[0xb] = -(auVar25[0xb] == -1);
        auVar24[0xc] = -(auVar25[0xc] == -1);
        auVar24[0xd] = -(auVar25[0xd] == -1);
        auVar24[0xe] = -(auVar25[0xe] == -1);
        auVar24[0xf] = -(auVar25[0xf] == -1);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
          if (*(longlong *)(lVar18 + -0x20) == 0) {
            uStack_49 = 1;
            pdb_142de0610(lVar18 + -0x30,1,lVar18 + -0x10,1);
            pauVar13 = *(undefined1 (**) [16])(lVar18 + -0x30);
            uVar14 = *(ulonglong *)(lVar18 + -0x28);
          }
          uVar9 = uStack_58 & uVar14;
          auVar22 = *(undefined1 (*) [16])(*pauVar13 + uVar9);
          uVar16 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
          uVar11 = (uint)uVar16;
          if (uVar16 == 0) {
            lVar12 = 0x10;
            do {
              uVar9 = uVar9 + lVar12 & uVar14;
              auVar22 = *(undefined1 (*) [16])(*pauVar13 + uVar9);
              lVar12 = lVar12 + 0x10;
              uVar11 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
            } while (uVar11 == 0);
          }
          uVar7 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar9 = uVar7 + uVar9 & uVar14;
          bVar21 = (*pauVar13)[uVar9];
          if (-1 < (char)bVar21) {
            auVar22 = *pauVar13;
            uVar11 = 0;
            for (uVar7 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar22[0xf] >> 7) << 0xf); (uVar7 & 1) == 0;
                uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            uVar9 = (ulonglong)uVar11;
            bVar21 = (*pauVar13)[uVar9];
          }
          bVar19 = bVar19 >> 1;
          (*pauVar13)[uVar9] = bVar19;
          pauVar13[1][uVar9 - 0x10 & uVar14] = bVar19;
          *(int *)pauVar13[uVar9 * -2 + -2] = param_4;
          *(undefined8 *)(pauVar13[uVar9 * -2 + -2] + 8) = 1;
          *(byte **)pauVar13[uVar9 * -2 + -1] = pbStack_78;
          lVar12 = *(longlong *)(lVar18 + -0x18) - _UNK_142e47bf8;
          *(ulonglong *)(lVar18 + -0x20) = *(longlong *)(lVar18 + -0x20) - (ulonglong)(bVar21 & 1);
          *(longlong *)(lVar18 + -0x18) = lVar12;
          uStack_49 = 0;
          pdb_1403b05d0(param_1 + 6,lVar8);
          return;
        }
        uVar9 = uVar9 + lVar12 + 0x10;
        lVar12 = lVar12 + 0x10;
      } while( true );
    }
    uVar14 = uVar14 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  } while( true );
}

