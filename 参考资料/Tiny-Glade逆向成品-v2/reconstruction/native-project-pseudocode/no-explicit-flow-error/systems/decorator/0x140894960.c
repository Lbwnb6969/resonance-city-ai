// VA 0x140894960, PDB extent 273 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_wall_holes::playermade_stairs_add_wall_holes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_wall_holes::playermade_stairs_add_wall_holes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_wall_holes.rs
   Extent: 273 */

void pdb_140894960(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar13 = ((undefined8 *)*param_1)[3];
  if (lVar13 != 0) {
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar4 = *param_2;
    puVar5 = (undefined4 *)param_2[2];
    pauVar15 = *(undefined1 (**) [16])*param_1;
    auVar2 = *pauVar15;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
    pauVar14 = pauVar15 + 1;
    do {
      if ((short)uVar11 == 0) {
        do {
          auVar2 = *pauVar14;
          pauVar15 = pauVar15 + -0x140;
          pauVar14 = pauVar14 + 1;
          uVar11 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar11 == 0);
      }
      uVar9 = 0;
      for (uVar10 = uVar11; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      lVar6 = *(longlong *)pauVar15[(ulonglong)uVar9 * -0x14 + -0xe];
      if (lVar6 != 0) {
        puVar7 = *(undefined8 **)(pauVar15[(ulonglong)uVar9 * -0x14 + -0xf] + 8);
        puVar12 = puVar7;
        do {
          puVar1 = puVar12 + 3;
          uVar8 = *puVar12;
          uStack_58 = puVar12[1];
          uStack_50 = puVar12[2];
          *puVar5 = uVar3;
          pdb_140c2bb20(uVar4,uVar8,&uStack_58,4);
          puVar12 = puVar1;
        } while (puVar1 != puVar7 + lVar6 * 3);
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

