// VA 0x1409d35c0, PDB extent 464 bytes
// country_core::render::nani::gpu_world::GpuWorld::update_instance_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::GpuWorld::update_instance_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 464 */

void pdb_1409d35c0(longlong param_1,int *param_2,undefined2 param_3)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  ulonglong uVar11;
  bool bVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte bStack_39;
  byte *pbStack_38;
  code *pcStack_30;
  
  bStack_39 = *(byte *)(param_2 + 2);
  lVar2 = *(longlong *)(param_1 + 0x40 + (ulonglong)((uint)bStack_39 * 0xa0));
  if (lVar2 == -0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14302d780);
  }
  if (SBORROW8(0,lVar2)) {
    pbStack_38 = &bStack_39;
    pcStack_30 = pdb_1409d4a30;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14302d6a8,&pbStack_38,&UNK_14302d798);
  }
  param_1 = param_1 + (ulonglong)((uint)bStack_39 * 0xa0);
  uVar5 = (ulonglong)(uint)param_2[1];
  if ((uVar5 < *(ulonglong *)(param_1 + 0x50)) &&
     (*(int *)(*(longlong *)(param_1 + 0x48) + uVar5 * 4) == *param_2)) {
LAB_1409d36d6:
    uVar11 = *(ulonglong *)(param_1 + 0xa0);
    do {
      uVar7 = uVar5;
      if (uVar11 <= uVar5) {
        uVar7 = uVar11;
      }
      LOCK();
      uVar6 = *(ulonglong *)(param_1 + 0xa0);
      bVar12 = uVar11 == uVar6;
      if (bVar12) {
        *(ulonglong *)(param_1 + 0xa0) = uVar7;
        uVar6 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar6;
    } while (!bVar12);
    uVar11 = *(ulonglong *)(param_1 + 0xa8);
    do {
      uVar7 = uVar5;
      if (uVar5 < uVar11) {
        uVar7 = uVar11;
      }
      LOCK();
      uVar6 = *(ulonglong *)(param_1 + 0xa8);
      bVar12 = uVar11 == uVar6;
      if (bVar12) {
        *(ulonglong *)(param_1 + 0xa8) = uVar7;
        uVar6 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar6;
    } while (!bVar12);
    if (*(ulonglong *)(param_1 + 0x98) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar5,*(ulonglong *)(param_1 + 0x98),&UNK_143382d08);
    }
    *(undefined2 *)(*(longlong *)(param_1 + 0x90) + 0xe + uVar5 * 0x10) = param_3;
    return;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar5 = pdb_1400aede0(param_1 + 0x78,param_2);
    lVar2 = *(longlong *)(param_1 + 0x58);
    bVar13 = (byte)(uVar5 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar8 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(param_1 + 0x60);
      pcVar1 = (char *)(lVar2 + uVar5);
      auVar16[0] = -(*pcVar1 == auVar14[0]);
      auVar16[1] = -(pcVar1[1] == auVar14[1]);
      auVar16[2] = -(pcVar1[2] == auVar14[2]);
      auVar16[3] = -(pcVar1[3] == auVar14[3]);
      auVar16[4] = -(pcVar1[4] == auVar14[4]);
      auVar16[5] = -(pcVar1[5] == auVar14[5]);
      auVar16[6] = -(pcVar1[6] == auVar14[6]);
      auVar16[7] = -(pcVar1[7] == auVar14[7]);
      auVar16[8] = -(pcVar1[8] == auVar14[0]);
      auVar16[9] = -(pcVar1[9] == auVar14[1]);
      auVar16[10] = -(pcVar1[10] == auVar14[2]);
      auVar16[0xb] = -(pcVar1[0xb] == auVar14[3]);
      auVar16[0xc] = -(pcVar1[0xc] == auVar14[4]);
      auVar16[0xd] = -(pcVar1[0xd] == auVar14[5]);
      auVar16[0xe] = -(pcVar1[0xe] == auVar14[6]);
      auVar16[0xf] = -(pcVar1[0xf] == auVar14[7]);
      uVar10 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
      uVar9 = (uint)uVar10;
      if (uVar10 != 0) {
        do {
          uVar3 = 0;
          for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          uVar11 = uVar3 + uVar5 & *(ulonglong *)(param_1 + 0x60);
          if (*param_2 == *(int *)(lVar2 + uVar11 * -8 + -8)) {
            uVar9 = *(uint *)(lVar2 + -4 + uVar11 * -8);
            uVar5 = (ulonglong)uVar9;
            param_2[1] = uVar9;
            goto LAB_1409d36d6;
          }
          uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
        } while (uVar10 != 0);
      }
      auVar15[0] = -(*pcVar1 == -1);
      auVar15[1] = -(pcVar1[1] == -1);
      auVar15[2] = -(pcVar1[2] == -1);
      auVar15[3] = -(pcVar1[3] == -1);
      auVar15[4] = -(pcVar1[4] == -1);
      auVar15[5] = -(pcVar1[5] == -1);
      auVar15[6] = -(pcVar1[6] == -1);
      auVar15[7] = -(pcVar1[7] == -1);
      auVar15[8] = -(pcVar1[8] == -1);
      auVar15[9] = -(pcVar1[9] == -1);
      auVar15[10] = -(pcVar1[10] == -1);
      auVar15[0xb] = -(pcVar1[0xb] == -1);
      auVar15[0xc] = -(pcVar1[0xc] == -1);
      auVar15[0xd] = -(pcVar1[0xd] == -1);
      auVar15[0xe] = -(pcVar1[0xe] == -1);
      auVar15[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar5 = uVar5 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302d720);
}

