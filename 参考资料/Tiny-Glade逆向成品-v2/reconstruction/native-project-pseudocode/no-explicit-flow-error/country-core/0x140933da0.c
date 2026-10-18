// VA 0x140933da0, PDB extent 400 bytes
// country_core::systems::collision::world::RaycastWorld::remove_collider<country_core::resources::walls::decorator::DecoratorId>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::remove_collider<country_core::resources::walls::decorator::DecoratorId>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 400 */

longlong pdb_140933da0(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  char *pcVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_48 = CONCAT44(uStack_48._4_4_,param_4);
  uVar7 = pdb_1400aede0(param_3 + 4,&uStack_48);
  lVar2 = *param_3;
  uVar11 = param_3[1];
  bVar15 = (byte)(uVar7 >> 0x39);
  auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar16 = pshuflw(auVar16,auVar16,0);
  lVar9 = 0;
  do {
    uVar7 = uVar7 & uVar11;
    auVar17 = *(undefined1 (*) [16])(lVar2 + uVar7);
    auVar19[0] = -(auVar17[0] == auVar16[0]);
    auVar19[1] = -(auVar17[1] == auVar16[1]);
    auVar19[2] = -(auVar17[2] == auVar16[2]);
    auVar19[3] = -(auVar17[3] == auVar16[3]);
    auVar19[4] = -(auVar17[4] == auVar16[4]);
    auVar19[5] = -(auVar17[5] == auVar16[5]);
    auVar19[6] = -(auVar17[6] == auVar16[6]);
    auVar19[7] = -(auVar17[7] == auVar16[7]);
    auVar19[8] = -(auVar17[8] == auVar16[0]);
    auVar19[9] = -(auVar17[9] == auVar16[1]);
    auVar19[10] = -(auVar17[10] == auVar16[2]);
    auVar19[0xb] = -(auVar17[0xb] == auVar16[3]);
    auVar19[0xc] = -(auVar17[0xc] == auVar16[4]);
    auVar19[0xd] = -(auVar17[0xd] == auVar16[5]);
    auVar19[0xe] = -(auVar17[0xe] == auVar16[6]);
    auVar19[0xf] = -(auVar17[0xf] == auVar16[7]);
    uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
    uVar13 = (uint)uVar12;
    while (uVar12 != 0) {
      uVar5 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar14 = uVar5 + uVar7 & uVar11;
      if (*(int *)(lVar2 + -0x18 + uVar14 * -0x18) == param_4) {
        lVar9 = lVar2 + uVar14 * -0x18;
        lVar10 = ((longlong)(uVar14 * 0x18) >> 3) * -0x5555555555555555;
        uVar11 = lVar10 - 0x10U & uVar11;
        pcVar1 = (char *)(lVar2 + uVar11);
        auVar16[0] = -(*pcVar1 == -1);
        auVar16[1] = -(pcVar1[1] == -1);
        auVar16[2] = -(pcVar1[2] == -1);
        auVar16[3] = -(pcVar1[3] == -1);
        auVar16[4] = -(pcVar1[4] == -1);
        auVar16[5] = -(pcVar1[5] == -1);
        auVar16[6] = -(pcVar1[6] == -1);
        auVar16[7] = -(pcVar1[7] == -1);
        auVar16[8] = -(pcVar1[8] == -1);
        auVar16[9] = -(pcVar1[9] == -1);
        auVar16[10] = -(pcVar1[10] == -1);
        auVar16[0xb] = -(pcVar1[0xb] == -1);
        auVar16[0xc] = -(pcVar1[0xc] == -1);
        auVar16[0xd] = -(pcVar1[0xd] == -1);
        auVar16[0xe] = -(pcVar1[0xe] == -1);
        auVar16[0xf] = -(pcVar1[0xf] == -1);
        uVar3 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
        pcVar1 = (char *)(lVar2 + lVar10);
        auVar17[0] = -(*pcVar1 == -1);
        auVar17[1] = -(pcVar1[1] == -1);
        auVar17[2] = -(pcVar1[2] == -1);
        auVar17[3] = -(pcVar1[3] == -1);
        auVar17[4] = -(pcVar1[4] == -1);
        auVar17[5] = -(pcVar1[5] == -1);
        auVar17[6] = -(pcVar1[6] == -1);
        auVar17[7] = -(pcVar1[7] == -1);
        auVar17[8] = -(pcVar1[8] == -1);
        auVar17[9] = -(pcVar1[9] == -1);
        auVar17[10] = -(pcVar1[10] == -1);
        auVar17[0xb] = -(pcVar1[0xb] == -1);
        auVar17[0xc] = -(pcVar1[0xc] == -1);
        auVar17[0xd] = -(pcVar1[0xd] == -1);
        auVar17[0xe] = -(pcVar1[0xe] == -1);
        auVar17[0xf] = -(pcVar1[0xf] == -1);
        uVar12 = 0xf;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar12 == 0; uVar12 = uVar12 - 1) {
          }
        }
        sVar4 = 0;
        for (uVar13 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar17[0xf] >> 7) << 0xf) | 0x10000; (uVar13 & 1) == 0;
            uVar13 = uVar13 >> 1 | 0x80000000) {
          sVar4 = sVar4 + 1;
        }
        uVar8 = 0x80;
        if ((ushort)(sVar4 + (uVar12 ^ 0xf)) < 0x10) {
          param_3[2] = param_3[2] + 1;
          uVar8 = 0xff;
        }
        *(undefined1 *)(lVar2 + lVar10) = uVar8;
        *(undefined1 *)(lVar2 + 0x10 + uVar11) = uVar8;
        param_3[3] = param_3[3] + -1;
        uStack_38 = *(undefined4 *)(lVar9 + -4);
        uStack_48 = *(undefined8 *)(lVar9 + -0x14);
        uStack_40 = *(undefined8 *)(lVar9 + -0xc);
        pdb_1409f8710(param_1,param_2,&uStack_48);
        return param_1;
      }
      uVar12 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar12);
    }
    auVar18[0] = -(auVar17[0] == -1);
    auVar18[1] = -(auVar17[1] == -1);
    auVar18[2] = -(auVar17[2] == -1);
    auVar18[3] = -(auVar17[3] == -1);
    auVar18[4] = -(auVar17[4] == -1);
    auVar18[5] = -(auVar17[5] == -1);
    auVar18[6] = -(auVar17[6] == -1);
    auVar18[7] = -(auVar17[7] == -1);
    auVar18[8] = -(auVar17[8] == -1);
    auVar18[9] = -(auVar17[9] == -1);
    auVar18[10] = -(auVar17[10] == -1);
    auVar18[0xb] = -(auVar17[0xb] == -1);
    auVar18[0xc] = -(auVar17[0xc] == -1);
    auVar18[0xd] = -(auVar17[0xd] == -1);
    auVar18[0xe] = -(auVar17[0xe] == -1);
    auVar18[0xf] = -(auVar17[0xf] == -1);
    uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
    if (uVar12 != 0) {
      if (param_3[2] == 0) {
        pdb_142d92b40(param_3,1,param_3 + 4,CONCAT71((uint7)(byte)(uVar12 >> 8),1));
      }
      *(undefined1 *)(param_1 + 0x20) = 0x11;
      return param_1;
    }
    uVar7 = uVar7 + lVar9 + 0x10;
    lVar9 = lVar9 + 0x10;
  } while( true );
}

