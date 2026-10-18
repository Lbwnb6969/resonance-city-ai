// VA 0x14038c6d0, PDB extent 637 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::generate_playermade_stair_requests::closure$1<false>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::generate_playermade_stair_requests::closure$1<false>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 637 */

void pdb_14038c6d0(undefined8 *param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int unaff_EBX;
  int unaff_EBP;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  byte bVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 unaff_XMM6 [16];
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  iStack_9c = param_4;
  iVar5 = unaff_EBP;
  if (param_2[3] != 0) {
    uVar6 = pdb_1400aede0(param_2 + 4,&iStack_9c);
    lVar9 = *param_2;
    bVar14 = (byte)(uVar6 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar10 = 0;
    while( true ) {
      uVar6 = uVar6 & param_2[1];
      auVar2 = *(undefined1 (*) [16])(lVar9 + uVar6);
      auVar18[0] = -(auVar2[0] == auVar16[0]);
      auVar18[1] = -(auVar2[1] == auVar16[1]);
      auVar18[2] = -(auVar2[2] == auVar16[2]);
      auVar18[3] = -(auVar2[3] == auVar16[3]);
      auVar18[4] = -(auVar2[4] == auVar16[4]);
      auVar18[5] = -(auVar2[5] == auVar16[5]);
      auVar18[6] = -(auVar2[6] == auVar16[6]);
      auVar18[7] = -(auVar2[7] == auVar16[7]);
      auVar18[8] = -(auVar2[8] == auVar16[0]);
      auVar18[9] = -(auVar2[9] == auVar16[1]);
      auVar18[10] = -(auVar2[10] == auVar16[2]);
      auVar18[0xb] = -(auVar2[0xb] == auVar16[3]);
      auVar18[0xc] = -(auVar2[0xc] == auVar16[4]);
      auVar18[0xd] = -(auVar2[0xd] == auVar16[5]);
      auVar18[0xe] = -(auVar2[0xe] == auVar16[6]);
      auVar18[0xf] = -(auVar2[0xf] == auVar16[7]);
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar13 = (uVar3 + uVar6 & param_2[1]) * -0x38;
        if (param_4 == *(int *)(lVar9 + -0x38 + lVar13)) {
          lVar9 = lVar9 + lVar13;
          unaff_XMM7_Da = *(float *)(lVar9 + -0x14);
          unaff_XMM8_Da = *(float *)(lVar9 + -0xc);
          unaff_XMM6 = ZEXT416(*(uint *)(lVar9 + -4));
          iStack_a0 = param_5;
          uVar6 = *(ulonglong *)(param_3 + 0x58);
          iStack_a4 = param_4;
          if (uVar6 == 1) goto LAB_14038c89f;
          if (uVar6 == 0) goto LAB_14038c922;
          uVar7 = pdb_1400af680(param_3 + 0x80,&iStack_a4);
          uVar8 = pdb_1404014e0(param_3 + 0x48,uVar7,&iStack_a4);
          if ((uVar8 & 1) == 0) goto LAB_14038c922;
          if (uVar7 < uVar6) {
            lVar9 = *(longlong *)(param_3 + 0x50);
            uVar6 = *(ulonglong *)(param_3 + 0x58);
            puVar1 = (undefined8 *)(lVar9 + 0x10 + uVar7 * 0x28);
            uStack_98 = *puVar1;
            uStack_90 = puVar1[1];
            uStack_88 = *(undefined4 *)(lVar9 + 0x20 + uVar7 * 0x28);
            iStack_a0 = param_5;
            iStack_a4 = param_4;
            if (uVar6 == 1) goto LAB_14038c8bf;
            if (uVar6 == 0) goto LAB_14038c92e;
            uVar7 = pdb_1400af680(param_3 + 0x80,&iStack_a4);
            uVar8 = pdb_1404014e0(param_3 + 0x48,uVar7,&iStack_a4);
            if ((uVar8 & 1) == 0) goto LAB_14038c92e;
            if (uVar7 < uVar6) {
              lVar9 = *(longlong *)(param_3 + 0x50);
              goto LAB_14038c8cb;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar7,uVar6,&UNK_142f77528);
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar17[0] = -(auVar2[0] == -1);
      auVar17[1] = -(auVar2[1] == -1);
      auVar17[2] = -(auVar2[2] == -1);
      auVar17[3] = -(auVar2[3] == -1);
      auVar17[4] = -(auVar2[4] == -1);
      auVar17[5] = -(auVar2[5] == -1);
      auVar17[6] = -(auVar2[6] == -1);
      auVar17[7] = -(auVar2[7] == -1);
      auVar17[8] = -(auVar2[8] == -1);
      auVar17[9] = -(auVar2[9] == -1);
      auVar17[10] = -(auVar2[10] == -1);
      auVar17[0xb] = -(auVar2[0xb] == -1);
      auVar17[0xc] = -(auVar2[0xc] == -1);
      auVar17[0xd] = -(auVar2[0xd] == -1);
      auVar17[0xe] = -(auVar2[0xe] == -1);
      auVar17[0xf] = -(auVar2[0xf] == -1);
      unaff_RSI = param_1;
      unaff_RDI = param_3;
      unaff_EBX = param_4;
      iVar5 = param_5;
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar6 = uVar6 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  param_5 = iVar5;
  param_4 = unaff_EBX;
  pdb_142dc8110(&UNK_142f46b0c,0x16,&UNK_142f47118);
  param_1 = unaff_RSI;
  param_3 = unaff_RDI;
LAB_14038c89f:
  lVar9 = *(longlong *)(param_3 + 0x50);
  if ((param_4 != *(int *)(lVar9 + 8)) || (param_5 != *(int *)(lVar9 + 0xc))) {
LAB_14038c922:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142f47130);
  }
  uStack_98 = *(undefined8 *)(lVar9 + 0x10);
  uStack_90 = *(undefined8 *)(lVar9 + 0x18);
  uStack_88 = *(undefined4 *)(lVar9 + 0x20);
LAB_14038c8bf:
  if ((param_4 != *(int *)(lVar9 + 8)) || (param_5 != *(int *)(lVar9 + 0xc))) {
LAB_14038c92e:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142f47148);
  }
  uVar7 = 0;
LAB_14038c8cb:
  fVar15 = (float)pdb_140c01750(lVar9 + uVar7 * 0x28 + 0x10);
  *param_1 = CONCAT44(unaff_XMM6._0_4_ + unaff_XMM8_Da,fVar15 + unaff_XMM7_Da);
  param_1[1] = uStack_98;
  param_1[2] = uStack_90;
  *(undefined4 *)(param_1 + 3) = uStack_88;
  return;
}

