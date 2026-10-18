// VA 0x140c419b0, PDB extent 289 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::decorator_cull_allow_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::decorator_cull_allow_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 289 */

void pdb_140c419b0(longlong param_1,undefined1 (*param_2) [16],longlong *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  longlong lVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lStack_48;
  longlong *plStack_40;
  undefined1 (*pauStack_38) [16];
  undefined1 (*pauStack_30) [16];
  undefined1 *puStack_28;
  ushort uStack_20;
  
  if (param_3[3] != 0) {
    pauStack_38 = param_2;
    uVar4 = pdb_1400af0a0(param_3 + 4,&pauStack_38);
    lVar5 = *param_3;
    bVar10 = (byte)(uVar4 >> 0x39);
    auVar11 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar11 = pshuflw(auVar11,auVar11,0);
    lVar6 = 0;
    while( true ) {
      uVar4 = uVar4 & param_3[1];
      auVar1 = *(undefined1 (*) [16])(lVar5 + uVar4);
      auVar13[0] = -(auVar1[0] == auVar11[0]);
      auVar13[1] = -(auVar1[1] == auVar11[1]);
      auVar13[2] = -(auVar1[2] == auVar11[2]);
      auVar13[3] = -(auVar1[3] == auVar11[3]);
      auVar13[4] = -(auVar1[4] == auVar11[4]);
      auVar13[5] = -(auVar1[5] == auVar11[5]);
      auVar13[6] = -(auVar1[6] == auVar11[6]);
      auVar13[7] = -(auVar1[7] == auVar11[7]);
      auVar13[8] = -(auVar1[8] == auVar11[0]);
      auVar13[9] = -(auVar1[9] == auVar11[1]);
      auVar13[10] = -(auVar1[10] == auVar11[2]);
      auVar13[0xb] = -(auVar1[0xb] == auVar11[3]);
      auVar13[0xc] = -(auVar1[0xc] == auVar11[4]);
      auVar13[0xd] = -(auVar1[0xd] == auVar11[5]);
      auVar13[0xe] = -(auVar1[0xe] == auVar11[6]);
      auVar13[0xf] = -(auVar1[0xf] == auVar11[7]);
      uVar8 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
      uVar7 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar9 = (uVar2 + uVar4 & param_3[1]) * -0x98;
        if (param_2 == *(undefined1 (**) [16])(lVar5 + -0x98 + lVar9)) {
          lVar5 = lVar5 + lVar9;
          lStack_48 = param_1 + 0x30;
          pauStack_38 = *(undefined1 (**) [16])(lVar5 + -0x60);
          puStack_28 = *pauStack_38 + *(longlong *)(lVar5 + -0x58) + 1;
          auVar11 = *pauStack_38;
          uStack_20 = ~((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
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
                        (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar11[0xf] >> 7) << 0xf);
          plStack_40 = &lStack_48;
          pauStack_30 = pauStack_38 + 1;
          pdb_140ca8170(&pauStack_38,*(undefined8 *)(lVar5 + -0x48),&plStack_40);
          return;
        }
        uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
      }
      auVar12[0] = -(auVar1[0] == -1);
      auVar12[1] = -(auVar1[1] == -1);
      auVar12[2] = -(auVar1[2] == -1);
      auVar12[3] = -(auVar1[3] == -1);
      auVar12[4] = -(auVar1[4] == -1);
      auVar12[5] = -(auVar1[5] == -1);
      auVar12[6] = -(auVar1[6] == -1);
      auVar12[7] = -(auVar1[7] == -1);
      auVar12[8] = -(auVar1[8] == -1);
      auVar12[9] = -(auVar1[9] == -1);
      auVar12[10] = -(auVar1[10] == -1);
      auVar12[0xb] = -(auVar1[0xb] == -1);
      auVar12[0xc] = -(auVar1[0xc] == -1);
      auVar12[0xd] = -(auVar1[0xd] == -1);
      auVar12[0xe] = -(auVar1[0xe] == -1);
      auVar12[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar4 = uVar4 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
  return;
}

