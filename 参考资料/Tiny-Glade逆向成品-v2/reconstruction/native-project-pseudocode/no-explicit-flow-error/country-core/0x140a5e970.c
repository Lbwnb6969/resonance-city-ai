// VA 0x140a5e970, PDB extent 721 bytes
// country_core::resources::ivy::ivy_leaf_storage::IvyLeafStorage::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_leaf_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::ivy::ivy_leaf_storage::IvyLeafStorage::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_leaf_storage.rs
   Extent: 721 */

void pdb_140a5e970(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  byte *pbStack_78;
  
  uVar9 = param_12;
  uVar8 = param_11;
  uVar7 = param_10;
  uVar6 = param_9;
  lVar5 = param_6;
  if (param_1[3] != 0) {
    uVar10 = pdb_1400af0a0(param_1 + 4,&param_6);
    bVar16 = (byte)(uVar10 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar13 = 0;
    while( true ) {
      uVar10 = uVar10 & param_1[1];
      auVar1 = *(undefined1 (*) [16])(*param_1 + uVar10);
      auVar19[0] = -(auVar1[0] == auVar17[0]);
      auVar19[1] = -(auVar1[1] == auVar17[1]);
      auVar19[2] = -(auVar1[2] == auVar17[2]);
      auVar19[3] = -(auVar1[3] == auVar17[3]);
      auVar19[4] = -(auVar1[4] == auVar17[4]);
      auVar19[5] = -(auVar1[5] == auVar17[5]);
      auVar19[6] = -(auVar1[6] == auVar17[6]);
      auVar19[7] = -(auVar1[7] == auVar17[7]);
      auVar19[8] = -(auVar1[8] == auVar17[0]);
      auVar19[9] = -(auVar1[9] == auVar17[1]);
      auVar19[10] = -(auVar1[10] == auVar17[2]);
      auVar19[0xb] = -(auVar1[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar1[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar1[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar1[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar1[0xf] == auVar17[7]);
      uVar15 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar12 = *param_1 + (uVar3 + uVar10 & param_1[1]) * -0x20;
        if (lVar5 == *(longlong *)(lVar12 + -0x20)) {
          lVar13 = *(longlong *)(lVar12 + -8);
          if (lVar13 == *(longlong *)(lVar12 + -0x18)) {
            pdb_142d8d8d0(lVar12 + -0x18);
          }
          lVar2 = *(longlong *)(lVar12 + -0x10);
          lVar11 = lVar13 * 0x68;
          *(undefined8 *)(lVar2 + lVar11) = param_7;
          *(undefined8 *)(lVar2 + 8 + lVar11) = param_8;
          *(longlong *)(lVar2 + 0x10 + lVar11) = lVar5;
          *(undefined8 *)(lVar2 + 0x18 + lVar11) = uVar9;
          *(undefined4 *)(lVar2 + 0x28 + lVar11) = *(undefined4 *)(param_2 + 1);
          *(undefined8 *)(lVar2 + 0x20 + lVar11) = *param_2;
          *(undefined8 *)(lVar2 + 0x2c + lVar11) = *param_3;
          *(undefined4 *)(lVar2 + 0x34 + lVar11) = *(undefined4 *)(param_3 + 1);
          *(undefined8 *)(lVar2 + 0x38 + lVar11) = *param_5;
          *(undefined4 *)(lVar2 + 0x40 + lVar11) = *(undefined4 *)(param_5 + 1);
          *(undefined4 *)(lVar2 + 0x44 + lVar11) = uVar6;
          *(undefined8 *)(lVar2 + 0x48 + lVar11) = 0;
          *(undefined4 *)(lVar2 + 0x50 + lVar11) = uVar7;
          *(undefined4 *)(lVar2 + 0x54 + lVar11) = uVar8;
          *(undefined8 *)(lVar2 + 0x58 + lVar11) = *param_4;
          *(undefined4 *)(lVar2 + 0x60 + lVar11) = *(undefined4 *)(param_4 + 1);
          *(longlong *)(lVar12 + -8) = lVar13 + 1;
          return;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == -1);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar10 = uVar10 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  pdb_14007ee60();
  pbStack_90 = pub_1406abab0(0x68,8);
  if (pbStack_90 != (byte *)0x0) {
    *(undefined8 *)pbStack_90 = param_7;
    *(undefined8 *)(pbStack_90 + 8) = param_8;
    *(longlong *)(pbStack_90 + 0x10) = lVar5;
    *(undefined8 *)(pbStack_90 + 0x18) = uVar9;
    *(undefined4 *)(pbStack_90 + 0x28) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(pbStack_90 + 0x20) = *param_2;
    *(undefined8 *)(pbStack_90 + 0x2c) = *param_3;
    *(undefined4 *)(pbStack_90 + 0x34) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(pbStack_90 + 0x38) = *param_5;
    *(undefined4 *)(pbStack_90 + 0x40) = *(undefined4 *)(param_5 + 1);
    *(undefined4 *)(pbStack_90 + 0x44) = uVar6;
    pbStack_90[0x48] = 0;
    pbStack_90[0x49] = 0;
    pbStack_90[0x4a] = 0;
    pbStack_90[0x4b] = 0;
    pbStack_90[0x4c] = 0;
    pbStack_90[0x4d] = 0;
    pbStack_90[0x4e] = 0;
    pbStack_90[0x4f] = 0;
    *(undefined4 *)(pbStack_90 + 0x50) = uVar7;
    *(undefined4 *)(pbStack_90 + 0x54) = uVar8;
    *(undefined4 *)(pbStack_90 + 0x60) = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)(pbStack_90 + 0x58) = *param_4;
    uStack_98 = 1;
    uStack_88 = 1;
    pdb_1417b8480(&lStack_80,param_1,lVar5,&uStack_98);
    if ((!SBORROW8(0,lStack_80)) && (lStack_80 != 0)) {
      pub_1406abac0(pbStack_78,lStack_80 * 0x68,8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x68);
}

