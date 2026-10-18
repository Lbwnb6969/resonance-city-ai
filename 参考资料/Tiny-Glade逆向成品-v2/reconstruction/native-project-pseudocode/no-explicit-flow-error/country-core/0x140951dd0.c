// VA 0x140951dd0, PDB extent 1064 bytes
// country_core::render::nani::gpu_world::OwnedGpuWorldSubset::update_instance_data<country_core::render::nani::instance_data::CurvedHalfTimberInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::OwnedGpuWorldSubset::update_instance_data<country_core::render::nani::instance_data::CurvedHalfTimberInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 1064 */

void pdb_140951dd0(longlong param_1,int *param_2,undefined8 *param_3,uint param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 uVar23;
  uint in_R9D;
  ushort uVar24;
  ulonglong uVar25;
  undefined8 *unaff_R12;
  longlong unaff_R13;
  ulonglong uVar26;
  bool bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  
  uVar26 = (ulonglong)(uint)param_2[1];
  if ((uVar26 < *(ulonglong *)(param_1 + 0x10)) &&
     (*(int *)(*(longlong *)(param_1 + 8) + uVar26 * 4) == *param_2)) {
LAB_140951ecb:
    uVar16 = *(ulonglong *)(param_1 + 0x60);
    do {
      uVar25 = uVar26;
      if (uVar16 <= uVar26) {
        uVar25 = uVar16;
      }
      LOCK();
      uVar17 = *(ulonglong *)(param_1 + 0x60);
      bVar27 = uVar16 == uVar17;
      if (bVar27) {
        *(ulonglong *)(param_1 + 0x60) = uVar25;
        uVar17 = uVar16;
      }
      UNLOCK();
      uVar16 = uVar17;
    } while (!bVar27);
    uVar16 = *(ulonglong *)(param_1 + 0x68);
    do {
      uVar25 = uVar26;
      if (uVar26 < uVar16) {
        uVar25 = uVar16;
      }
      LOCK();
      uVar17 = *(ulonglong *)(param_1 + 0x68);
      bVar27 = uVar16 == uVar17;
      if (bVar27) {
        *(ulonglong *)(param_1 + 0x68) = uVar25;
        uVar17 = uVar16;
      }
      UNLOCK();
      uVar16 = uVar17;
    } while (!bVar27);
    uVar16 = *(ulonglong *)(param_1 + 0x58);
    if (uVar16 <= uVar26) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar26,uVar16,&UNK_143382d08);
    }
    lVar20 = *(longlong *)(param_1 + 0x50);
    lVar22 = uVar26 * 0x10;
    unaff_R13 = lVar20 + lVar22;
    uVar3 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar20 + lVar22) = *param_3;
    *(undefined4 *)(lVar20 + 8 + lVar22) = uVar3;
    uVar25 = *_DAT_143cad8c0;
    if (uVar25 == 0) {
      uVar25 = pdb_142dec140();
    }
    unaff_R12 = param_5;
    if ((uVar25 >> 0x37 & 1) != 0) {
      uVar24 = pdb_14094f6a0();
      goto LAB_140952074;
    }
    uVar18 = param_4 & 0x80000000;
    in_R9D = param_4 & 0x7f800000;
    uVar21 = param_4 & 0x7fffff;
    if (in_R9D == 0x7f800000) {
      uVar16 = (ulonglong)(uVar18 >> 0x10);
      uVar24 = (ushort)(uVar21 >> 0xd) | (ushort)(uVar18 >> 0x10) | (ushort)(uVar21 != 0) << 9 |
               0x7c00;
      goto LAB_140952074;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar16 = pdb_1400aede0(param_1 + 0x38,param_2);
      lVar20 = *(longlong *)(param_1 + 0x18);
      bVar28 = (byte)(uVar16 >> 0x39);
      auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
      auVar29 = pshuflw(auVar29,auVar29,0);
      lVar22 = 0;
      iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                     CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
      iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                     CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
      iVar7 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                     CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
      iVar8 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                     CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
      while( true ) {
        uVar16 = uVar16 & *(ulonglong *)(param_1 + 0x20);
        pcVar1 = (char *)(lVar20 + uVar16);
        auVar31[0] = -(*pcVar1 == auVar29[0]);
        auVar31[1] = -(pcVar1[1] == auVar29[1]);
        auVar31[2] = -(pcVar1[2] == auVar29[2]);
        auVar31[3] = -(pcVar1[3] == auVar29[3]);
        auVar31[4] = -(pcVar1[4] == auVar29[4]);
        auVar31[5] = -(pcVar1[5] == auVar29[5]);
        auVar31[6] = -(pcVar1[6] == auVar29[6]);
        auVar31[7] = -(pcVar1[7] == auVar29[7]);
        auVar31[8] = -(pcVar1[8] == auVar29[0]);
        auVar31[9] = -(pcVar1[9] == auVar29[1]);
        auVar31[10] = -(pcVar1[10] == auVar29[2]);
        auVar31[0xb] = -(pcVar1[0xb] == auVar29[3]);
        auVar31[0xc] = -(pcVar1[0xc] == auVar29[4]);
        auVar31[0xd] = -(pcVar1[0xd] == auVar29[5]);
        auVar31[0xe] = -(pcVar1[0xe] == auVar29[6]);
        auVar31[0xf] = -(pcVar1[0xf] == auVar29[7]);
        uVar24 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf
        ;
        uVar18 = (uint)uVar24;
        if (uVar24 != 0) {
          do {
            uVar21 = 0;
            for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar21 = uVar21 + 1;
            }
            uVar25 = uVar21 + uVar16 & *(ulonglong *)(param_1 + 0x20);
            uVar26 = uVar25 * 8;
            unaff_R12 = (undefined8 *)(lVar20 + uVar25 * -8);
            if (*param_2 == *(int *)(unaff_R12 + -1)) {
              uVar18 = *(uint *)(lVar20 + -4 + uVar25 * -8);
              uVar26 = (ulonglong)uVar18;
              param_2[1] = uVar18;
              goto LAB_140951ecb;
            }
            uVar24 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar24);
          } while (uVar24 != 0);
        }
        auVar30[0] = -(*pcVar1 == (char)iVar5);
        auVar30[1] = -(pcVar1[1] == (char)((uint)iVar5 >> 8));
        auVar30[2] = -(pcVar1[2] == (char)((uint)iVar5 >> 0x10));
        auVar30[3] = -(pcVar1[3] == (char)((uint)iVar5 >> 0x18));
        auVar30[4] = -(pcVar1[4] == (char)iVar6);
        auVar30[5] = -(pcVar1[5] == (char)((uint)iVar6 >> 8));
        auVar30[6] = -(pcVar1[6] == (char)((uint)iVar6 >> 0x10));
        auVar30[7] = -(pcVar1[7] == (char)((uint)iVar6 >> 0x18));
        auVar30[8] = -(pcVar1[8] == (char)iVar7);
        auVar30[9] = -(pcVar1[9] == (char)((uint)iVar7 >> 8));
        auVar30[10] = -(pcVar1[10] == (char)((uint)iVar7 >> 0x10));
        auVar30[0xb] = -(pcVar1[0xb] == (char)((uint)iVar7 >> 0x18));
        auVar30[0xc] = -(pcVar1[0xc] == (char)iVar8);
        auVar30[0xd] = -(pcVar1[0xd] == (char)((uint)iVar8 >> 8));
        auVar30[0xe] = -(pcVar1[0xe] == (char)((uint)iVar8 >> 0x10));
        auVar30[0xf] = -(pcVar1[0xf] == (char)((uint)iVar8 >> 0x18));
        uVar24 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
        ;
        in_R9D = (uint)uVar24;
        if (uVar24 != 0) break;
        uVar16 = uVar16 + lVar22 + 0x10;
        lVar22 = lVar22 + 0x10;
      }
    }
    uVar18 = 0;
    uVar23 = param_6;
    param_4 = pdb_142dc8110(&UNK_143025540);
    uVar21 = (uint)uVar23;
  }
  uVar16 = (ulonglong)(uVar18 >> 0x10);
  if (in_R9D < 0x47000001) {
    uVar9 = (ushort)(uVar18 >> 0x10);
    if (0x387fffff < in_R9D) {
      uVar24 = (ushort)((param_4 & 0x2fff) != 0 & (byte)(param_4 >> 0xc)) +
               ((short)(in_R9D >> 0xd) + (short)(uVar21 >> 0xd) + 0x4000U | uVar9);
      goto LAB_140952074;
    }
    if (0x32ffffff < in_R9D) {
      uVar21 = uVar21 | 0x800000;
      uVar24 = (ushort)(uVar21 >> (0x7eU - (char)(in_R9D >> 0x17) & 0x1f));
      uVar18 = 0x1d - (in_R9D >> 0x17) & 0x1f;
      if ((uVar21 >> uVar18 & 1) != 0) {
        uVar24 = (uVar24 + 1) - (ushort)(((3 << (sbyte)uVar18) - 1U & uVar21) == 0);
      }
      uVar24 = uVar24 | uVar9;
      goto LAB_140952074;
    }
  }
  else {
    uVar16 = (ulonglong)(uVar18 >> 0x10 | 0x7c00);
  }
  uVar24 = (ushort)uVar16;
LAB_140952074:
  *(ushort *)(unaff_R13 + 0xc) = uVar24;
  lVar22 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x28))(*(undefined8 *)(param_1 + 0x70));
  lVar20 = lVar22;
  (**(code **)(uVar16 + 0x18))(&uStack_98);
  auVar29[0] = -((char)uStack_98 == DAT_1430252c0);
  auVar29[1] = -(uStack_98._1_1_ == UNK_1430252c1);
  auVar29[2] = -(uStack_98._2_1_ == UNK_1430252c2);
  auVar29[3] = -(uStack_98._3_1_ == UNK_1430252c3);
  auVar29[4] = -(uStack_98._4_1_ == UNK_1430252c4);
  auVar29[5] = -(uStack_98._5_1_ == UNK_1430252c5);
  auVar29[6] = -(uStack_98._6_1_ == UNK_1430252c6);
  auVar29[7] = -(uStack_98._7_1_ == UNK_1430252c7);
  auVar29[8] = -((char)uStack_90 == UNK_1430252c8);
  auVar29[9] = -(uStack_90._1_1_ == UNK_1430252c9);
  auVar29[10] = -(uStack_90._2_1_ == UNK_1430252ca);
  auVar29[0xb] = -(uStack_90._3_1_ == UNK_1430252cb);
  auVar29[0xc] = -(uStack_90._4_1_ == UNK_1430252cc);
  auVar29[0xd] = -(uStack_90._5_1_ == UNK_1430252cd);
  auVar29[0xe] = -(uStack_90._6_1_ == UNK_1430252ce);
  auVar29[0xf] = -(uStack_90._7_1_ == UNK_1430252cf);
  if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf)
      != 0xffff) {
    puStack_68 = &UNK_143026b57;
    uStack_60 = 0x47;
    uStack_58 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))(*(undefined8 *)(param_1 + 0x70))
    ;
    uStack_90 = pdb_140960640;
    ppuStack_88 = &puStack_68;
    pcStack_80 = pdb_1402ed420;
    puStack_78 = &uStack_58;
    pcStack_70 = pdb_1402ed400;
    uStack_98 = param_2 + 2;
    lStack_50 = lVar20;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143025554,&uStack_98,param_6);
  }
  if (uVar26 < *(ulonglong *)(lVar22 + 0x28)) {
    lVar20 = *(longlong *)(lVar22 + 0x20);
    lVar19 = uVar26 * 0x50;
    uVar23 = unaff_R12[9];
    puVar2 = (undefined8 *)(lVar20 + 0x40 + lVar19);
    *puVar2 = unaff_R12[8];
    puVar2[1] = uVar23;
    uVar23 = *unaff_R12;
    uVar10 = unaff_R12[1];
    uVar11 = unaff_R12[2];
    uVar12 = unaff_R12[3];
    uVar13 = unaff_R12[4];
    uVar14 = unaff_R12[5];
    uVar15 = unaff_R12[7];
    puVar2 = (undefined8 *)(lVar20 + 0x30 + lVar19);
    *puVar2 = unaff_R12[6];
    puVar2[1] = uVar15;
    puVar2 = (undefined8 *)(lVar20 + 0x20 + lVar19);
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    puVar2 = (undefined8 *)(lVar20 + 0x10 + lVar19);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    *(undefined8 *)(lVar20 + lVar19) = uVar23;
    ((undefined8 *)(lVar20 + lVar19))[1] = uVar10;
    uVar16 = *(ulonglong *)(lVar22 + 0x30);
    do {
      uVar25 = uVar26;
      if (uVar16 <= uVar26) {
        uVar25 = uVar16;
      }
      LOCK();
      uVar17 = *(ulonglong *)(lVar22 + 0x30);
      bVar27 = uVar16 == uVar17;
      if (bVar27) {
        *(ulonglong *)(lVar22 + 0x30) = uVar25;
        uVar17 = uVar16;
      }
      UNLOCK();
      uVar16 = uVar17;
    } while (!bVar27);
    uVar16 = *(ulonglong *)(lVar22 + 0x38);
    do {
      uVar25 = uVar26;
      if (uVar26 < uVar16) {
        uVar25 = uVar16;
      }
      LOCK();
      uVar17 = *(ulonglong *)(lVar22 + 0x38);
      bVar27 = uVar16 == uVar17;
      if (bVar27) {
        *(ulonglong *)(lVar22 + 0x38) = uVar25;
        uVar17 = uVar16;
      }
      UNLOCK();
      uVar16 = uVar17;
    } while (!bVar27);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar26,*(ulonglong *)(lVar22 + 0x28),&UNK_143382cf0);
}

