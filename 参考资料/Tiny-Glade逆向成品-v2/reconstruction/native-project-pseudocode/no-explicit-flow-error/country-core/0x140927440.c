// VA 0x140927440, PDB extent 1392 bytes
// country_core::resources::history::terrain_edit::TerrainEdit::reapply
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::terrain_edit::TerrainEdit::reapply
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
   Extent: 1392 */

void pdb_140927440(ulonglong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,float param_6)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  longlong lVar21;
  uint uVar22;
  byte bVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined8 uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  ulonglong *puStack_80;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar15 = 2;
  if ((longlong)*param_1 < 0) {
    uVar15 = *param_1 ^ 0x8000000000000000;
  }
  if (uVar15 == 0) {
    uVar6 = (undefined4)param_1[4];
    uVar15 = param_1[2];
    uVar7 = param_1[3];
    fVar24 = (float)pdb_140926600(uVar6,uVar15,uVar7,param_4,param_2);
    fVar2 = *(float *)((longlong)param_1 + 0x24);
    if ((uVar7 == 0) || (uVar15 + uVar7 * 0xc == 0xc)) {
      uStack_a0 = 0;
      uStack_a8 = 0;
    }
    else {
      lVar17 = uVar15 + uVar7 * 0xc;
      uStack_90 = CONCAT44(*(undefined4 *)(lVar17 + -4),*(undefined4 *)(lVar17 + -0xc));
      pdb_140df4540(&uStack_a8,&uStack_90);
    }
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar17 = *param_3;
    lVar18 = *(longlong *)(lVar17 + 0x30);
    uVar8 = *(undefined8 *)(lVar17 + 0x40);
    if (lVar18 == *(longlong *)(lVar17 + 0x20)) {
      pdb_142d7ede0(lVar17 + 0x20);
    }
    lVar21 = *(longlong *)(lVar17 + 0x28);
    *(undefined4 *)(lVar21 + lVar18 * 0x28) = 0;
    *(undefined4 *)(lVar21 + 8 + lVar18 * 0x28) = 1;
    *(float *)(lVar21 + 0xc + lVar18 * 0x28) = fVar24 * fVar2;
    *(undefined8 *)(lVar21 + 0x10 + lVar18 * 0x28) = uStack_a8;
    *(undefined4 *)(lVar21 + 0x18 + lVar18 * 0x28) = uStack_a0;
    *(undefined4 *)(lVar21 + 0x1c + lVar18 * 0x28) = uVar6;
    *(undefined8 *)(lVar21 + 0x20 + lVar18 * 0x28) = uVar8;
    *(longlong *)(lVar17 + 0x30) = lVar18 + 1;
    *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar18 = *param_4;
    lVar17 = *(longlong *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x40);
    if (lVar17 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7e980(lVar18 + 0x20);
    }
    lVar21 = *(longlong *)(lVar18 + 0x28);
    *(undefined8 *)(lVar21 + lVar17 * 0x10) = uVar8;
    *(undefined4 *)(lVar21 + 8 + lVar17 * 0x10) = uVar6;
  }
  else {
    if (uVar15 == 1) {
      fVar2 = *(float *)((longlong)param_1 + 0xc);
      fVar24 = *(float *)(param_1 + 2);
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar39 = 0;
      uVar40 = 0;
      uVar41 = 0;
      fVar44 = _DAT_142e36f28 - param_6;
      iVar5 = (int)param_1[1];
      fVar3 = *(float *)(param_1 + 3);
      fVar4 = *(float *)((longlong)param_1 + 0x14);
      uVar22 = -(uint)(fVar24 != fVar2);
      uVar26 = (undefined1)uVar22;
      uVar27 = (undefined1)(uVar22 >> 8);
      uVar28 = (undefined1)(uVar22 >> 0x10);
      uVar29 = (undefined1)(uVar22 >> 0x18);
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar5);
      if (*(longlong *)(param_2 + 0x20) != 0) {
        uVar15 = pdb_1400aede0(param_2 + 0x28,&uStack_90);
        lVar17 = *(longlong *)(param_2 + 8);
        bVar23 = (byte)(uVar15 >> 0x39);
        auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
        auVar25 = pshuflw(auVar25,auVar25,0);
        lVar18 = 0;
        iVar11 = -(uint)(CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) ==
                        CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))));
        iVar12 = -(uint)(CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) ==
                        CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))));
        iVar13 = -(uint)(CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34))) ==
                        CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34))));
        iVar14 = -(uint)(CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))) ==
                        CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))));
        while( true ) {
          uVar15 = uVar15 & *(ulonglong *)(param_2 + 0x10);
          pcVar1 = (char *)(lVar17 + uVar15);
          auVar43[0] = -(*pcVar1 == auVar25[0]);
          auVar43[1] = -(pcVar1[1] == auVar25[1]);
          auVar43[2] = -(pcVar1[2] == auVar25[2]);
          auVar43[3] = -(pcVar1[3] == auVar25[3]);
          auVar43[4] = -(pcVar1[4] == auVar25[4]);
          auVar43[5] = -(pcVar1[5] == auVar25[5]);
          auVar43[6] = -(pcVar1[6] == auVar25[6]);
          auVar43[7] = -(pcVar1[7] == auVar25[7]);
          auVar43[8] = -(pcVar1[8] == auVar25[0]);
          auVar43[9] = -(pcVar1[9] == auVar25[1]);
          auVar43[10] = -(pcVar1[10] == auVar25[2]);
          auVar43[0xb] = -(pcVar1[0xb] == auVar25[3]);
          auVar43[0xc] = -(pcVar1[0xc] == auVar25[4]);
          auVar43[0xd] = -(pcVar1[0xd] == auVar25[5]);
          auVar43[0xe] = -(pcVar1[0xe] == auVar25[6]);
          auVar43[0xf] = -(pcVar1[0xf] == auVar25[7]);
          uVar20 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar43[0xf] >> 7) << 0xf;
          uVar19 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar9 = 0;
            for (uVar10 = uVar19; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            lVar21 = (uVar9 + uVar15 & *(ulonglong *)(param_2 + 0x10)) * -0x30;
            if (iVar5 == *(int *)(lVar17 + -0x30 + lVar21)) {
              lVar17 = lVar17 + lVar21;
              uVar15 = *(ulonglong *)(lVar17 + -0x18);
              if (uVar15 == 0) goto LAB_140927813;
              lVar17 = *(longlong *)(lVar17 + -0x20);
              uVar15 = uVar15 >> 1;
              uStack_90 = CONCAT44(*(undefined4 *)(lVar17 + 8 + uVar15 * 0xc),
                                   *(undefined4 *)(lVar17 + uVar15 * 0xc));
              pdb_140df4540(&uStack_b8,&uStack_90);
              goto LAB_140927822;
            }
            uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
            uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
          }
          auVar42[0] = -(*pcVar1 == (char)iVar11);
          auVar42[1] = -(pcVar1[1] == (char)((uint)iVar11 >> 8));
          auVar42[2] = -(pcVar1[2] == (char)((uint)iVar11 >> 0x10));
          auVar42[3] = -(pcVar1[3] == (char)((uint)iVar11 >> 0x18));
          auVar42[4] = -(pcVar1[4] == (char)iVar12);
          auVar42[5] = -(pcVar1[5] == (char)((uint)iVar12 >> 8));
          auVar42[6] = -(pcVar1[6] == (char)((uint)iVar12 >> 0x10));
          auVar42[7] = -(pcVar1[7] == (char)((uint)iVar12 >> 0x18));
          auVar42[8] = -(pcVar1[8] == (char)iVar13);
          auVar42[9] = -(pcVar1[9] == (char)((uint)iVar13 >> 8));
          auVar42[10] = -(pcVar1[10] == (char)((uint)iVar13 >> 0x10));
          auVar42[0xb] = -(pcVar1[0xb] == (char)((uint)iVar13 >> 0x18));
          auVar42[0xc] = -(pcVar1[0xc] == (char)iVar14);
          auVar42[0xd] = -(pcVar1[0xd] == (char)((uint)iVar14 >> 8));
          auVar42[0xe] = -(pcVar1[0xe] == (char)((uint)iVar14 >> 0x10));
          auVar42[0xf] = -(pcVar1[0xf] == (char)((uint)iVar14 >> 0x18));
          if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar42 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar42 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar42 >> 0x2f,0) & 1) != 0) || (SUB161(auVar42 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') break;
          uVar15 = uVar15 + lVar18 + 0x10;
          lVar18 = lVar18 + 0x10;
        }
      }
LAB_140927813:
      uStack_b0 = 0;
      uStack_b8 = 0;
LAB_140927822:
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar18 = *param_3;
      lVar17 = *(longlong *)(lVar18 + 0x30);
      uVar8 = *(undefined8 *)(lVar18 + 0x40);
      if (lVar17 == *(longlong *)(lVar18 + 0x20)) {
        pdb_142d7ede0(lVar18 + 0x20);
      }
      lVar21 = *(longlong *)(lVar18 + 0x28);
      *(uint *)(lVar21 + lVar17 * 0x28) = -(uint)(fVar3 != fVar4) & 1;
      *(float *)(lVar21 + 4 + lVar17 * 0x28) = param_6 * fVar3 + fVar44 * fVar4;
      *(uint *)(lVar21 + 8 + lVar17 * 0x28) = uVar22 & 1;
      *(float *)(lVar21 + 0xc + lVar17 * 0x28) = param_6 * fVar24 + fVar44 * fVar2;
      *(undefined8 *)(lVar21 + 0x10 + lVar17 * 0x28) = uStack_b8;
      *(undefined4 *)(lVar21 + 0x18 + lVar17 * 0x28) = uStack_b0;
      *(int *)(lVar21 + 0x1c + lVar17 * 0x28) = iVar5;
      *(undefined8 *)(lVar21 + 0x20 + lVar17 * 0x28) = uVar8;
      *(longlong *)(lVar18 + 0x30) = lVar17 + 1;
      goto LAB_14092788d;
    }
    uStack_9c = pdb_140dedcd0(&UNK_1430214d0);
    uStack_90 = param_1[1];
    lStack_88 = uStack_90 + param_1[2] * 0xc;
    puStack_78 = &uStack_9c;
    puStack_80 = param_1 + 3;
    pdb_1415f9eb0(&uStack_e0,&uStack_90);
    uStack_c8 = uStack_d0;
    if (uStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143021508);
    }
    uStack_98 = uStack_e0;
    uStack_90 = *(undefined8 *)(lStack_d8 + (uStack_d0 >> 1) * 0xc);
    lStack_c0 = lStack_d8;
    lStack_88 = CONCAT44(lStack_88._4_4_,*(undefined4 *)(lStack_d8 + 8 + (uStack_d0 >> 1) * 0xc));
    uVar15 = param_1[4];
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    lVar18 = *param_5;
    lVar17 = *(longlong *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x40);
    if (lVar17 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7e7c0(lVar18 + 0x20);
    }
    lVar21 = *(longlong *)(lVar18 + 0x28);
    lVar16 = lVar17 * 0x30;
    *(undefined8 *)(lVar21 + lVar16) = uStack_98;
    *(longlong *)(lVar21 + 8 + lVar16) = lStack_c0;
    *(ulonglong *)(lVar21 + 0x10 + lVar16) = uStack_c8;
    *(ulonglong *)(lVar21 + 0x18 + lVar16) = uStack_90;
    *(undefined4 *)(lVar21 + 0x20 + lVar16) = (undefined4)lStack_88;
    *(int *)(lVar21 + 0x24 + lVar16) = (int)uVar15;
    *(undefined8 *)(lVar21 + 0x28 + lVar16) = uVar8;
  }
  *(longlong *)(lVar18 + 0x30) = lVar17 + 1;
LAB_14092788d:
  *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
  return;
}

