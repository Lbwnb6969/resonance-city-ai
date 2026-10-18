// VA 0x140954f80, PDB extent 1032 bytes
// country_core::render::nani::gpu_world::OwnedGpuWorldSubset::update_instance_data<country_core::resources::placement_data::PlacementDataSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::OwnedGpuWorldSubset::update_instance_data<country_core::resources::placement_data::PlacementDataSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 1032 */

void pdb_140954f80(longlong param_1,int *param_2,undefined8 *param_3,uint param_4,
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
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint in_R9D;
  ushort uVar22;
  ulonglong uVar23;
  undefined8 *unaff_R12;
  longlong unaff_R13;
  ulonglong uVar24;
  bool bVar25;
  byte bVar26;
  undefined1 auVar27 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  
  uVar24 = (ulonglong)(uint)param_2[1];
  if ((uVar24 < *(ulonglong *)(param_1 + 0x10)) &&
     (*(int *)(*(longlong *)(param_1 + 8) + uVar24 * 4) == *param_2)) {
LAB_14095507b:
    uVar14 = *(ulonglong *)(param_1 + 0x60);
    do {
      uVar23 = uVar24;
      if (uVar14 <= uVar24) {
        uVar23 = uVar14;
      }
      LOCK();
      uVar15 = *(ulonglong *)(param_1 + 0x60);
      bVar25 = uVar14 == uVar15;
      if (bVar25) {
        *(ulonglong *)(param_1 + 0x60) = uVar23;
        uVar15 = uVar14;
      }
      UNLOCK();
      uVar14 = uVar15;
    } while (!bVar25);
    uVar14 = *(ulonglong *)(param_1 + 0x68);
    do {
      uVar23 = uVar24;
      if (uVar24 < uVar14) {
        uVar23 = uVar14;
      }
      LOCK();
      uVar15 = *(ulonglong *)(param_1 + 0x68);
      bVar25 = uVar14 == uVar15;
      if (bVar25) {
        *(ulonglong *)(param_1 + 0x68) = uVar23;
        uVar15 = uVar14;
      }
      UNLOCK();
      uVar14 = uVar15;
    } while (!bVar25);
    uVar14 = *(ulonglong *)(param_1 + 0x58);
    if (uVar14 <= uVar24) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar24,uVar14,&UNK_143382d08);
    }
    lVar18 = *(longlong *)(param_1 + 0x50);
    lVar20 = uVar24 * 0x10;
    unaff_R13 = lVar18 + lVar20;
    uVar3 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar18 + lVar20) = *param_3;
    *(undefined4 *)(lVar18 + 8 + lVar20) = uVar3;
    uVar23 = *_DAT_143cad8c0;
    if (uVar23 == 0) {
      uVar23 = pdb_142dec140();
    }
    unaff_R12 = param_5;
    if ((uVar23 >> 0x37 & 1) != 0) {
      uVar22 = pdb_14094f6a0();
      goto LAB_140955224;
    }
    uVar16 = param_4 & 0x80000000;
    in_R9D = param_4 & 0x7f800000;
    uVar19 = param_4 & 0x7fffff;
    if (in_R9D == 0x7f800000) {
      uVar14 = (ulonglong)(uVar16 >> 0x10);
      uVar22 = (ushort)(uVar19 >> 0xd) | (ushort)(uVar16 >> 0x10) | (ushort)(uVar19 != 0) << 9 |
               0x7c00;
      goto LAB_140955224;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar14 = pdb_1400aede0(param_1 + 0x38,param_2);
      lVar18 = *(longlong *)(param_1 + 0x18);
      bVar26 = (byte)(uVar14 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar27 = pshuflw(auVar27,auVar27,0);
      lVar20 = 0;
      iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                     CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
      iVar6 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                     CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
      iVar7 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                     CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
      iVar8 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                     CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
      while( true ) {
        uVar14 = uVar14 & *(ulonglong *)(param_1 + 0x20);
        pcVar1 = (char *)(lVar18 + uVar14);
        auVar29[0] = -(*pcVar1 == auVar27[0]);
        auVar29[1] = -(pcVar1[1] == auVar27[1]);
        auVar29[2] = -(pcVar1[2] == auVar27[2]);
        auVar29[3] = -(pcVar1[3] == auVar27[3]);
        auVar29[4] = -(pcVar1[4] == auVar27[4]);
        auVar29[5] = -(pcVar1[5] == auVar27[5]);
        auVar29[6] = -(pcVar1[6] == auVar27[6]);
        auVar29[7] = -(pcVar1[7] == auVar27[7]);
        auVar29[8] = -(pcVar1[8] == auVar27[0]);
        auVar29[9] = -(pcVar1[9] == auVar27[1]);
        auVar29[10] = -(pcVar1[10] == auVar27[2]);
        auVar29[0xb] = -(pcVar1[0xb] == auVar27[3]);
        auVar29[0xc] = -(pcVar1[0xc] == auVar27[4]);
        auVar29[0xd] = -(pcVar1[0xd] == auVar27[5]);
        auVar29[0xe] = -(pcVar1[0xe] == auVar27[6]);
        auVar29[0xf] = -(pcVar1[0xf] == auVar27[7]);
        uVar22 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar22;
        if (uVar22 != 0) {
          do {
            uVar19 = 0;
            for (uVar4 = uVar16; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar19 = uVar19 + 1;
            }
            uVar23 = uVar19 + uVar14 & *(ulonglong *)(param_1 + 0x20);
            uVar24 = uVar23 * 8;
            unaff_R12 = (undefined8 *)(lVar18 + uVar23 * -8);
            if (*param_2 == *(int *)(unaff_R12 + -1)) {
              uVar16 = *(uint *)(lVar18 + -4 + uVar23 * -8);
              uVar24 = (ulonglong)uVar16;
              param_2[1] = uVar16;
              goto LAB_14095507b;
            }
            uVar22 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar22);
          } while (uVar22 != 0);
        }
        auVar28[0] = -(*pcVar1 == (char)iVar5);
        auVar28[1] = -(pcVar1[1] == (char)((uint)iVar5 >> 8));
        auVar28[2] = -(pcVar1[2] == (char)((uint)iVar5 >> 0x10));
        auVar28[3] = -(pcVar1[3] == (char)((uint)iVar5 >> 0x18));
        auVar28[4] = -(pcVar1[4] == (char)iVar6);
        auVar28[5] = -(pcVar1[5] == (char)((uint)iVar6 >> 8));
        auVar28[6] = -(pcVar1[6] == (char)((uint)iVar6 >> 0x10));
        auVar28[7] = -(pcVar1[7] == (char)((uint)iVar6 >> 0x18));
        auVar28[8] = -(pcVar1[8] == (char)iVar7);
        auVar28[9] = -(pcVar1[9] == (char)((uint)iVar7 >> 8));
        auVar28[10] = -(pcVar1[10] == (char)((uint)iVar7 >> 0x10));
        auVar28[0xb] = -(pcVar1[0xb] == (char)((uint)iVar7 >> 0x18));
        auVar28[0xc] = -(pcVar1[0xc] == (char)iVar8);
        auVar28[0xd] = -(pcVar1[0xd] == (char)((uint)iVar8 >> 8));
        auVar28[0xe] = -(pcVar1[0xe] == (char)((uint)iVar8 >> 0x10));
        auVar28[0xf] = -(pcVar1[0xf] == (char)((uint)iVar8 >> 0x18));
        uVar22 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
        ;
        in_R9D = (uint)uVar22;
        if (uVar22 != 0) break;
        uVar14 = uVar14 + lVar20 + 0x10;
        lVar20 = lVar20 + 0x10;
      }
    }
    uVar16 = 0;
    uVar21 = param_6;
    param_4 = pdb_142dc8110(&UNK_143025540);
    uVar19 = (uint)uVar21;
  }
  uVar14 = (ulonglong)(uVar16 >> 0x10);
  if (in_R9D < 0x47000001) {
    uVar9 = (ushort)(uVar16 >> 0x10);
    if (0x387fffff < in_R9D) {
      uVar22 = (ushort)((param_4 & 0x2fff) != 0 & (byte)(param_4 >> 0xc)) +
               ((short)(in_R9D >> 0xd) + (short)(uVar19 >> 0xd) + 0x4000U | uVar9);
      goto LAB_140955224;
    }
    if (0x32ffffff < in_R9D) {
      uVar19 = uVar19 | 0x800000;
      uVar22 = (ushort)(uVar19 >> (0x7eU - (char)(in_R9D >> 0x17) & 0x1f));
      uVar16 = 0x1d - (in_R9D >> 0x17) & 0x1f;
      if ((uVar19 >> uVar16 & 1) != 0) {
        uVar22 = (uVar22 + 1) - (ushort)(((3 << (sbyte)uVar16) - 1U & uVar19) == 0);
      }
      uVar22 = uVar22 | uVar9;
      goto LAB_140955224;
    }
  }
  else {
    uVar14 = (ulonglong)(uVar16 >> 0x10 | 0x7c00);
  }
  uVar22 = (ushort)uVar14;
LAB_140955224:
  *(ushort *)(unaff_R13 + 0xc) = uVar22;
  lVar20 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x28))(*(undefined8 *)(param_1 + 0x70));
  lVar18 = lVar20;
  (**(code **)(uVar14 + 0x18))(&uStack_98);
  auVar27[0] = -((char)uStack_98 == DAT_143025380);
  auVar27[1] = -(uStack_98._1_1_ == UNK_143025381);
  auVar27[2] = -(uStack_98._2_1_ == UNK_143025382);
  auVar27[3] = -(uStack_98._3_1_ == UNK_143025383);
  auVar27[4] = -(uStack_98._4_1_ == UNK_143025384);
  auVar27[5] = -(uStack_98._5_1_ == UNK_143025385);
  auVar27[6] = -(uStack_98._6_1_ == UNK_143025386);
  auVar27[7] = -(uStack_98._7_1_ == UNK_143025387);
  auVar27[8] = -((char)uStack_90 == UNK_143025388);
  auVar27[9] = -(uStack_90._1_1_ == UNK_143025389);
  auVar27[10] = -(uStack_90._2_1_ == UNK_14302538a);
  auVar27[0xb] = -(uStack_90._3_1_ == UNK_14302538b);
  auVar27[0xc] = -(uStack_90._4_1_ == UNK_14302538c);
  auVar27[0xd] = -(uStack_90._5_1_ == UNK_14302538d);
  auVar27[0xe] = -(uStack_90._6_1_ == UNK_14302538e);
  auVar27[0xf] = -(uStack_90._7_1_ == UNK_14302538f);
  if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf)
      != 0xffff) {
    puStack_68 = &UNK_1430268f2;
    uStack_60 = 0x3a;
    uStack_58 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))(*(undefined8 *)(param_1 + 0x70))
    ;
    uStack_90 = pdb_140960640;
    ppuStack_88 = &puStack_68;
    pcStack_80 = pdb_1402ed420;
    puStack_78 = &uStack_58;
    pcStack_70 = pdb_1402ed400;
    uStack_98 = param_2 + 2;
    lStack_50 = lVar18;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143025554,&uStack_98,param_6);
  }
  if (uVar24 < *(ulonglong *)(lVar20 + 0x28)) {
    lVar18 = *(longlong *)(lVar20 + 0x20);
    lVar17 = uVar24 * 0x30;
    uVar21 = *unaff_R12;
    uVar10 = unaff_R12[1];
    uVar11 = unaff_R12[2];
    uVar12 = unaff_R12[3];
    uVar13 = unaff_R12[5];
    puVar2 = (undefined8 *)(lVar18 + 0x20 + lVar17);
    *puVar2 = unaff_R12[4];
    puVar2[1] = uVar13;
    puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar17);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    *(undefined8 *)(lVar18 + lVar17) = uVar21;
    ((undefined8 *)(lVar18 + lVar17))[1] = uVar10;
    uVar14 = *(ulonglong *)(lVar20 + 0x30);
    do {
      uVar23 = uVar24;
      if (uVar14 <= uVar24) {
        uVar23 = uVar14;
      }
      LOCK();
      uVar15 = *(ulonglong *)(lVar20 + 0x30);
      bVar25 = uVar14 == uVar15;
      if (bVar25) {
        *(ulonglong *)(lVar20 + 0x30) = uVar23;
        uVar15 = uVar14;
      }
      UNLOCK();
      uVar14 = uVar15;
    } while (!bVar25);
    uVar14 = *(ulonglong *)(lVar20 + 0x38);
    do {
      uVar23 = uVar24;
      if (uVar24 < uVar14) {
        uVar23 = uVar14;
      }
      LOCK();
      uVar15 = *(ulonglong *)(lVar20 + 0x38);
      bVar25 = uVar14 == uVar15;
      if (bVar25) {
        *(ulonglong *)(lVar20 + 0x38) = uVar23;
        uVar15 = uVar14;
      }
      UNLOCK();
      uVar14 = uVar15;
    } while (!bVar25);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar24,*(ulonglong *)(lVar20 + 0x28),&UNK_143382cf0);
}

