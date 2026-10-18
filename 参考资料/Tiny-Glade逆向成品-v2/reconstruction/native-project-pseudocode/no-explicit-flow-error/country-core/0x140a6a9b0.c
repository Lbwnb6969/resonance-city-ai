// VA 0x140a6a9b0, PDB extent 307 bytes
// country_core::resources::walls::wall_render_slots::WallRenderSlots::allocate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_render_slots::WallRenderSlots::allocate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_render_slots.rs
   Extent: 307 */

undefined8 pdb_140a6a9b0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ushort uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lStack_28;
  
  lStack_28 = param_2;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar4 = pdb_1400af0a0(param_1 + 0x50,&lStack_28);
    bVar8 = (byte)(uVar4 >> 0x39);
    auVar9 = ZEXT216(CONCAT11(bVar8,bVar8));
    auVar9 = pshuflw(auVar9,auVar9,0);
    lVar5 = 0;
    while( true ) {
      uVar4 = uVar4 & *(ulonglong *)(param_1 + 0x38);
      pcVar1 = (char *)(*(longlong *)(param_1 + 0x30) + uVar4);
      auVar11[0] = -(*pcVar1 == auVar9[0]);
      auVar11[1] = -(pcVar1[1] == auVar9[1]);
      auVar11[2] = -(pcVar1[2] == auVar9[2]);
      auVar11[3] = -(pcVar1[3] == auVar9[3]);
      auVar11[4] = -(pcVar1[4] == auVar9[4]);
      auVar11[5] = -(pcVar1[5] == auVar9[5]);
      auVar11[6] = -(pcVar1[6] == auVar9[6]);
      auVar11[7] = -(pcVar1[7] == auVar9[7]);
      auVar11[8] = -(pcVar1[8] == auVar9[0]);
      auVar11[9] = -(pcVar1[9] == auVar9[1]);
      auVar11[10] = -(pcVar1[10] == auVar9[2]);
      auVar11[0xb] = -(pcVar1[0xb] == auVar9[3]);
      auVar11[0xc] = -(pcVar1[0xc] == auVar9[4]);
      auVar11[0xd] = -(pcVar1[0xd] == auVar9[5]);
      auVar11[0xe] = -(pcVar1[0xe] == auVar9[6]);
      auVar11[0xf] = -(pcVar1[0xf] == auVar9[7]);
      uVar7 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf;
      uVar6 = (uint)uVar7;
      while (uVar7 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (param_2 ==
            *(longlong *)
             (*(longlong *)(param_1 + 0x30) +
              (uVar2 + uVar4 & *(ulonglong *)(param_1 + 0x38)) * -0x10 + -0x10)) {
          return 1;
        }
        uVar7 = (ushort)(uVar6 - 1) & (ushort)uVar6;
        uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar7);
      }
      auVar10[0] = -(*pcVar1 == -1);
      auVar10[1] = -(pcVar1[1] == -1);
      auVar10[2] = -(pcVar1[2] == -1);
      auVar10[3] = -(pcVar1[3] == -1);
      auVar10[4] = -(pcVar1[4] == -1);
      auVar10[5] = -(pcVar1[5] == -1);
      auVar10[6] = -(pcVar1[6] == -1);
      auVar10[7] = -(pcVar1[7] == -1);
      auVar10[8] = -(pcVar1[8] == -1);
      auVar10[9] = -(pcVar1[9] == -1);
      auVar10[10] = -(pcVar1[10] == -1);
      auVar10[0xb] = -(pcVar1[0xb] == -1);
      auVar10[0xc] = -(pcVar1[0xc] == -1);
      auVar10[0xd] = -(pcVar1[0xd] == -1);
      auVar10[0xe] = -(pcVar1[0xe] == -1);
      auVar10[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar10 >> 7,0) & 1) != 0 || (SUB161(auVar10 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar10 >> 0x17,0) & 1) != 0) || (SUB161(auVar10 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar10 >> 0x27,0) & 1) != 0) || (SUB161(auVar10 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar10 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar10 >> 0x3f,0) & 1) != 0) || (SUB161(auVar10 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar10 >> 0x4f,0) & 1) != 0) || (SUB161(auVar10 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar10 >> 0x5f,0) & 1) != 0) || (SUB161(auVar10 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar10 >> 0x6f,0) & 1) != 0) || (SUB161(auVar10 >> 0x77,0) & 1) != 0) ||
          auVar10[0xf] < '\0') break;
      uVar4 = uVar4 + lVar5 + 0x10;
      lVar5 = lVar5 + 0x10;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar6 = *(uint *)(param_1 + 0x60);
    if (0x1ffff < uVar6) {
      return 0;
    }
    *(uint *)(param_1 + 0x60) = uVar6 + 1;
  }
  else {
    *(longlong *)(param_1 + 0x10) = lVar5 + -1;
    uVar6 = *(uint *)(*(longlong *)(param_1 + 8) + -4 + lVar5 * 4);
  }
  pdb_1417ba230(param_1 + 0x30,param_2,uVar6);
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == *(longlong *)(param_1 + 0x18)) {
    pdb_142d7e8a0(param_1 + 0x18);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar5 * 8) = param_2;
  *(longlong *)(param_1 + 0x28) = lVar5 + 1;
  return 1;
}

