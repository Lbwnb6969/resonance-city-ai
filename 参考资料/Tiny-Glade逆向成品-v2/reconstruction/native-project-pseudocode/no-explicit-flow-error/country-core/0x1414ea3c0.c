// VA 0x1414ea3c0, PDB extent 523 bytes
// country_core::systems::collision::world::impl$14::iter_shape_overlaps::closure$0<country_core::systems::collision::world::SubworldColliderHandle,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$2,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$14::iter_shape_overlaps::closure$0<country_core::systems::collision::world::SubworldColliderHandle,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$2,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 523 */

undefined8 pdb_1414ea3c0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  ulonglong uVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_50;
  undefined4 uStack_48;
  char *pcStack_40;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  lVar3 = *param_1;
  puVar12 = (uint *)pdb_140cd4bd0(param_1[1]);
  if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1433166e8);
  }
  uVar18 = (ulonglong)*puVar12;
  uVar10 = pdb_1409012c0(puVar12[1] | 1);
  lVar15 = *(longlong *)(lVar3 + 8);
  uVar13 = *(ulonglong *)(lVar3 + 0x10);
  uStack_50 = CONCAT44((int)uVar18,uVar10);
  iVar11 = pdb_1409fb190(&uStack_50);
  uVar18 = uVar18 & 0xffffffff;
  if (((uVar13 <= uVar18) || (lVar15 == 0)) || (*(int *)(lVar15 + 0x20 + uVar18 * 0x28) != iVar11))
  {
    pdb_142dc664f(&UNK_143512bd0,0x18,&UNK_143316700);
    pcVar6 = (code *)swi(3);
    uVar14 = (*pcVar6)();
    return uVar14;
  }
  pcVar1 = (char *)(lVar15 + uVar18 * 0x28);
  puVar4 = (undefined8 *)param_1[2];
  pdb_1409f14f0(&uStack_34,*(undefined1 *)param_1[3],param_2,param_3);
  uStack_48 = uStack_2c;
  uStack_50 = uStack_34;
  pcStack_40 = pcVar1;
  if ((char)uStack_2c == '\x10') {
    if (*pcVar1 != '\x10') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143316790,0x28,&UNK_143316840);
    }
    uVar14 = *(undefined8 *)*puVar4;
    iVar11 = -(uint)((int)*(undefined8 *)(pcVar1 + 8) == (int)uVar14);
    iVar21 = -(uint)((int)((ulonglong)*(undefined8 *)(pcVar1 + 8) >> 0x20) ==
                    (int)((ulonglong)uVar14 >> 0x20));
    auVar20._4_4_ = iVar11;
    auVar20._0_4_ = iVar11;
    auVar20._8_4_ = iVar21;
    auVar20._12_4_ = iVar21;
    iVar11 = movmskpd((int)(undefined8 *)*puVar4,auVar20);
    if (iVar11 == 3) {
      return 0;
    }
  }
  cVar9 = pdb_1409ecfb0(puVar4[1],&uStack_50);
  if ((-1 < cVar9) && (plVar5 = (longlong *)puVar4[2], plVar5[3] != 0)) {
    uVar13 = pdb_14148b1b0(plVar5 + 4,&uStack_50);
    lVar3 = *plVar5;
    bVar19 = (byte)(uVar13 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar15 = 0;
    while( true ) {
      uVar13 = uVar13 & plVar5[1];
      pcVar1 = (char *)(lVar3 + uVar13);
      auVar23[0] = -(*pcVar1 == auVar20[0]);
      auVar23[1] = -(pcVar1[1] == auVar20[1]);
      auVar23[2] = -(pcVar1[2] == auVar20[2]);
      auVar23[3] = -(pcVar1[3] == auVar20[3]);
      auVar23[4] = -(pcVar1[4] == auVar20[4]);
      auVar23[5] = -(pcVar1[5] == auVar20[5]);
      auVar23[6] = -(pcVar1[6] == auVar20[6]);
      auVar23[7] = -(pcVar1[7] == auVar20[7]);
      auVar23[8] = -(pcVar1[8] == auVar20[0]);
      auVar23[9] = -(pcVar1[9] == auVar20[1]);
      auVar23[10] = -(pcVar1[10] == auVar20[2]);
      auVar23[0xb] = -(pcVar1[0xb] == auVar20[3]);
      auVar23[0xc] = -(pcVar1[0xc] == auVar20[4]);
      auVar23[0xd] = -(pcVar1[0xd] == auVar20[5]);
      auVar23[0xe] = -(pcVar1[0xe] == auVar20[6]);
      auVar23[0xf] = -(pcVar1[0xf] == auVar20[7]);
      uVar17 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar18 = uVar7 + uVar13 & plVar5[1];
        if (((char)uStack_2c == *(char *)(lVar3 + -4 + uVar18 * -0xc)) &&
           (lVar2 = lVar3 + uVar18 * -0xc, uVar14 = *(undefined8 *)(lVar2 + -0xc),
           auVar24._0_4_ = -(uint)((int)uVar14 == (int)uStack_50),
           iVar11 = -(uint)((int)((ulonglong)uVar14 >> 0x20) == (int)((ulonglong)uStack_50 >> 0x20))
           , auVar24._4_4_ = auVar24._0_4_, auVar24._8_4_ = iVar11, auVar24._12_4_ = iVar11,
           iVar11 = movmskpd((int)lVar2,auVar24), iVar11 == 3)) {
          return 0;
        }
        uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
      }
      auVar22[0] = -(*pcVar1 == -1);
      auVar22[1] = -(pcVar1[1] == -1);
      auVar22[2] = -(pcVar1[2] == -1);
      auVar22[3] = -(pcVar1[3] == -1);
      auVar22[4] = -(pcVar1[4] == -1);
      auVar22[5] = -(pcVar1[5] == -1);
      auVar22[6] = -(pcVar1[6] == -1);
      auVar22[7] = -(pcVar1[7] == -1);
      auVar22[8] = -(pcVar1[8] == -1);
      auVar22[9] = -(pcVar1[9] == -1);
      auVar22[10] = -(pcVar1[10] == -1);
      auVar22[0xb] = -(pcVar1[0xb] == -1);
      auVar22[0xc] = -(pcVar1[0xc] == -1);
      auVar22[0xd] = -(pcVar1[0xd] == -1);
      auVar22[0xe] = -(pcVar1[0xe] == -1);
      auVar22[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar13 = uVar13 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
  return 1;
}

