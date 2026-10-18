// VA 0x1403b4470, PDB extent 3042 bytes
// alloc::collections::btree::node::Handle::insert_recursing<tiny_glade::vram_snapshot::AllocationCategory,tiny_glade::vram_snapshot::CategorySummary,alloc::alloc::Global,alloc::collections::btree::map::entry::impl$8::insert_entry::closure_env$0<tiny_glade::vram_snapshot::AllocationCategory,tiny_glade::vram_snapshot::CategorySummary,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   alloc::collections::btree::node::Handle::insert_recursing<tiny_glade::vram_snapshot::AllocationCategory,tiny_glade::vram_snapshot::CategorySummary,alloc::alloc::Global,alloc::collections::btree::map::entry::impl$8::insert_entry::closure_env$0<tiny_glade::vram_snapshot::AllocationCategory,tiny_glade::vram_snapshot::CategorySummary,alloc::alloc::Global>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 3042 */

longlong *
pdb_1403b4470(longlong *param_1,longlong *param_2,byte param_3,undefined8 *param_4,longlong *param_5
             )

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined3 uVar14;
  undefined3 uVar15;
  undefined3 uVar16;
  undefined1 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulonglong uVar20;
  byte *pbVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  short sVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  int iVar29;
  byte *pbVar30;
  byte *pbVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  int iVar35;
  bool bVar36;
  undefined1 uStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_108;
  undefined1 uStack_104;
  undefined3 uStack_103;
  undefined1 uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_f8;
  undefined3 uStack_f7;
  undefined1 uStack_e1;
  undefined4 uStack_e0;
  undefined3 uStack_dc;
  undefined1 uStack_d9;
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  undefined1 uStack_d1;
  undefined4 uStack_d0;
  undefined3 uStack_cc;
  undefined1 uStack_c9;
  undefined3 uStack_c8;
  undefined4 uStack_c5;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_80;
  ulonglong uStack_58;
  byte bStack_49;
  
  pbVar21 = (byte *)*param_2;
  uVar3 = *(ushort *)(pbVar21 + 0x16a);
  uVar28 = (ulonglong)uVar3;
  if (uVar28 < 0xb) {
    uStack_58 = param_2[2];
    if (uVar28 < uStack_58 + 1) {
      pbVar21[uStack_58 + 0x16c] = param_3;
      uStack_a8 = *param_4;
      uStack_a0 = param_4[1];
      uStack_98 = param_4[2];
      uStack_90 = (undefined4)param_4[3];
      uStack_8c = (undefined4)((ulonglong)param_4[3] >> 0x20);
    }
    else {
      pub_142e32770(pbVar21 + uStack_58 + 0x16d,pbVar21 + uStack_58 + 0x16c,uVar28 - uStack_58);
      pbVar21[uStack_58 + 0x16c] = param_3;
      uStack_a8 = *param_4;
      uStack_a0 = param_4[1];
      uStack_98 = param_4[2];
      uStack_90 = *(undefined4 *)(param_4 + 3);
      uStack_8c = *(undefined4 *)((longlong)param_4 + 0x1c);
      pub_142e32770(pbVar21 + (uStack_58 + 1) * 0x20,pbVar21 + uStack_58 * 0x20,
                    (uVar28 - uStack_58) * 0x20);
    }
    *(undefined8 *)(pbVar21 + uStack_58 * 0x20 + 0x10) = uStack_98;
    *(ulonglong *)(pbVar21 + uStack_58 * 0x20 + 0x10 + 8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(pbVar21 + uStack_58 * 0x20) = uStack_a8;
    *(undefined8 *)(pbVar21 + uStack_58 * 0x20 + 8) = uStack_a0;
    *(ushort *)(pbVar21 + 0x16a) = uVar3 + 1;
    lVar23 = param_2[1];
    pbVar31 = pbVar21;
  }
  else {
    uStack_58 = param_2[2];
    if (uStack_58 < 5) {
      uVar28 = 4;
      bVar36 = false;
    }
    else if (uStack_58 == 5) {
      bVar36 = false;
      uVar28 = 5;
    }
    else if (uStack_58 == 6) {
      uVar28 = 5;
      bVar36 = true;
      uStack_58 = 0;
    }
    else {
      uStack_58 = uStack_58 - 7;
      uVar28 = 6;
      bVar36 = true;
    }
    lStack_80 = param_2[1];
    pdb_14007ee60();
    pbVar18 = pub_1406abab0(0x178,8);
    if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x178);
    }
    pbVar18[0x160] = 0;
    pbVar18[0x161] = 0;
    pbVar18[0x162] = 0;
    pbVar18[0x163] = 0;
    pbVar18[0x164] = 0;
    pbVar18[0x165] = 0;
    pbVar18[0x166] = 0;
    pbVar18[0x167] = 0;
    uVar33 = ~uVar28 + (ulonglong)*(ushort *)(pbVar21 + 0x16a);
    *(short *)(pbVar18 + 0x16a) = (short)uVar33;
    if (0xb < uVar33) {
      pdb_142dc8420(0,uVar33,0xb,&UNK_142f4e2a8);
LAB_1403b4f29:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    bStack_49 = pbVar21[uVar28 + 0x16c];
    pub_142e32760(pbVar18 + 0x16c,pbVar21 + uVar28 + 0x16d,uVar33);
    pub_142e32760(pbVar18,pbVar21 + (uVar28 + 1) * 0x20,uVar33 * 0x20);
    *(short *)(pbVar21 + 0x16a) = (short)uVar28;
    pbVar31 = pbVar21 + uVar28 * 0x20;
    pbVar1 = pbVar21 + uVar28 * 0x20 + 0x10;
    uStack_c5 = *(undefined4 *)(pbVar1 + 0xc);
    uStack_d1 = (undefined1)*(undefined4 *)pbVar1;
    uStack_fc = (undefined1)*(undefined4 *)(pbVar1 + 4);
    uStack_d0 = CONCAT13(uStack_fc,(int3)((uint)*(undefined4 *)pbVar1 >> 8));
    uStack_cc = (undefined3)((uint)*(undefined4 *)(pbVar1 + 4) >> 8);
    uStack_f8 = (undefined1)*(undefined4 *)(pbVar1 + 8);
    uStack_c9 = uStack_f8;
    uStack_f7 = (undefined3)((uint)*(undefined4 *)(pbVar1 + 8) >> 8);
    uStack_110 = (undefined1)*(undefined4 *)pbVar31;
    uStack_10c = (undefined1)*(undefined4 *)(pbVar31 + 4);
    uStack_e0 = CONCAT13(uStack_10c,(int3)((uint)*(undefined4 *)pbVar31 >> 8));
    uStack_dc = (undefined3)((uint)*(undefined4 *)(pbVar31 + 4) >> 8);
    uStack_108 = (undefined1)*(undefined4 *)(pbVar31 + 8);
    uStack_d9 = uStack_108;
    uStack_104 = (undefined1)*(undefined4 *)(pbVar31 + 0xc);
    uStack_d8 = CONCAT13(uStack_104,(int3)((uint)*(undefined4 *)(pbVar31 + 8) >> 8));
    uStack_103 = (undefined3)((uint)*(undefined4 *)(pbVar31 + 0xc) >> 8);
    uStack_d4 = uStack_103;
    lVar23 = 0;
    pbVar31 = pbVar18;
    if (!bVar36) {
      lVar23 = lStack_80;
      pbVar31 = pbVar21;
    }
    uVar3 = *(ushort *)(pbVar31 + 0x16a);
    lVar34 = uVar3 - uStack_58;
    if (uVar3 < uStack_58 || lVar34 == 0) {
      pbVar31[uStack_58 + 0x16c] = param_3;
      uStack_a8 = *param_4;
      uStack_a0 = param_4[1];
      uStack_98 = param_4[2];
      uStack_90 = (undefined4)param_4[3];
      uStack_8c = (undefined4)((ulonglong)param_4[3] >> 0x20);
    }
    else {
      pub_142e32770(pbVar31 + uStack_58 + 0x16d,pbVar31 + uStack_58 + 0x16c,lVar34);
      pbVar31[uStack_58 + 0x16c] = param_3;
      uStack_a8 = *param_4;
      uStack_a0 = param_4[1];
      uStack_98 = param_4[2];
      uStack_90 = *(undefined4 *)(param_4 + 3);
      uStack_8c = *(undefined4 *)((longlong)param_4 + 0x1c);
      pub_142e32770(pbVar31 + (uStack_58 + 1) * 0x20,pbVar31 + uStack_58 * 0x20,(int)lVar34 << 5);
    }
    *(undefined8 *)(pbVar31 + uStack_58 * 0x20 + 0x10) = uStack_98;
    *(ulonglong *)(pbVar31 + uStack_58 * 0x20 + 0x10 + 8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(pbVar31 + uStack_58 * 0x20) = uStack_a8;
    *(undefined8 *)(pbVar31 + uStack_58 * 0x20 + 8) = uStack_a0;
    *(ushort *)(pbVar31 + 0x16a) = uVar3 + 1;
    uStack_c8 = uStack_f7;
    uStack_e1 = uStack_110;
    if (*(byte **)(pbVar21 + 0x160) == (byte *)0x0) {
      lStack_80 = 0;
    }
    else {
      bVar36 = lStack_80 == 0;
      pbVar1 = *(byte **)(pbVar21 + 0x160);
      pbVar30 = pbVar18;
      do {
        pbVar19 = pbVar1;
        uVar17 = uStack_110;
        if (!bVar36) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_142f4e2d8,0x35,&UNK_142f4e310);
        }
        uVar3 = *(ushort *)(pbVar21 + 0x168);
        uVar33 = (ulonglong)uVar3;
        uVar4 = *(ushort *)(pbVar19 + 0x16a);
        uVar28 = (ulonglong)uVar4;
        if (uVar28 < 0xb) {
          lVar34 = uVar33 + 1;
          if (uVar3 < uVar4) {
            lVar27 = uVar28 - uVar33;
            pub_142e32770(pbVar19 + uVar33 + 0x16d,pbVar19 + uVar33 + 0x16c,lVar27);
            pbVar19[uVar33 + 0x16c] = bStack_49;
            lVar22 = (ulonglong)uVar3 * 0x20;
            pub_142e32770(pbVar19 + ((uint)lVar34 << 5),pbVar19 + lVar22,lVar27 * 0x20);
            pbVar21 = pbVar19 + lVar22;
            *(uint *)pbVar21 = CONCAT31((undefined3)uStack_e0,uStack_110);
            *(uint *)(pbVar21 + 4) = CONCAT31(uStack_dc,uStack_e0._3_1_);
            *(uint *)(pbVar21 + 8) = CONCAT31((undefined3)uStack_d8,uStack_d9);
            *(uint *)(pbVar21 + 0xc) = CONCAT31(uStack_d4,uStack_d8._3_1_);
            pbVar21 = pbVar19 + lVar22 + 0x10;
            *(uint *)pbVar21 = CONCAT31((undefined3)uStack_d0,uStack_d1);
            *(uint *)(pbVar21 + 4) = CONCAT31(uStack_cc,uStack_d0._3_1_);
            *(uint *)(pbVar21 + 8) = CONCAT31(uStack_c8,uStack_c9);
            *(undefined4 *)(pbVar21 + 0xc) = uStack_c5;
            pub_142e32770(pbVar19 + uVar33 * 8 + 0x188,pbVar19 + lVar34 * 8 + 0x178,lVar27 * 8);
          }
          else {
            pbVar19[uVar33 + 0x16c] = bStack_49;
            *(ulonglong *)(pbVar19 + (ulonglong)uVar3 * 0x20 + 0x10) =
                 CONCAT35(uStack_cc,CONCAT41(uStack_d0,uStack_d1));
            *(ulonglong *)(pbVar19 + (ulonglong)uVar3 * 0x20 + 0x10 + 8) =
                 CONCAT44(uStack_c5,CONCAT31(uStack_c8,uStack_c9));
            *(ulonglong *)(pbVar19 + (ulonglong)uVar3 * 0x20) =
                 CONCAT35(uStack_dc,CONCAT41(uStack_e0,uStack_110));
            *(ulonglong *)(pbVar19 + (ulonglong)uVar3 * 0x20 + 8) =
                 CONCAT35(uStack_d4,CONCAT41(uStack_d8,uStack_d9));
          }
          *(byte **)(pbVar19 + uVar33 * 8 + 0x180) = pbVar30;
          *(ushort *)(pbVar19 + 0x16a) = uVar4 + 1;
          if ((uint)lVar34 < (uint)(uVar28 + 2)) {
            uVar24 = ((uint)uVar4 - (uint)uVar3) + 1 & 3;
            if (uVar24 != 0) {
              uVar26 = 0;
              do {
                lVar27 = *(longlong *)(pbVar19 + uVar26 * 8 + uVar33 * 8 + 0x180);
                *(byte **)(lVar27 + 0x160) = pbVar19;
                *(short *)(lVar27 + 0x168) = (short)lVar34 + (short)uVar26;
                uVar26 = uVar26 + 1;
              } while (uVar24 != uVar26);
              lVar34 = lVar34 + uVar26;
            }
            if (2 < (uint)uVar4 - (uint)uVar3) {
              do {
                lVar27 = *(longlong *)(pbVar19 + lVar34 * 8 + 0x178);
                *(byte **)(lVar27 + 0x160) = pbVar19;
                sVar25 = (short)lVar34;
                *(short *)(lVar27 + 0x168) = sVar25;
                lVar27 = *(longlong *)(pbVar19 + lVar34 * 8 + 0x180);
                *(byte **)(lVar27 + 0x160) = pbVar19;
                *(short *)(lVar27 + 0x168) = sVar25 + 1;
                lVar27 = *(longlong *)(pbVar19 + lVar34 * 8 + 0x188);
                *(byte **)(lVar27 + 0x160) = pbVar19;
                *(short *)(lVar27 + 0x168) = sVar25 + 2;
                lVar27 = *(longlong *)(pbVar19 + lVar34 * 8 + 400);
                *(byte **)(lVar27 + 0x160) = pbVar19;
                *(short *)(lVar27 + 0x168) = sVar25 + 3;
                lVar34 = lVar34 + 4;
              } while (lVar34 != uVar28 + 2);
            }
          }
          goto LAB_1403b4c89;
        }
        if (uVar3 < 5) {
          uVar28 = 4;
          bVar36 = false;
        }
        else if (uVar3 == 5) {
          bVar36 = false;
          uVar28 = 5;
        }
        else if (uVar3 == 6) {
          bVar36 = true;
          uVar28 = 5;
          uVar33 = 0;
        }
        else {
          uVar33 = uVar33 - 7;
          bVar36 = true;
          uVar28 = 6;
        }
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(0x1d8,8);
        if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x1d8);
        }
        pbVar18[0x160] = 0;
        pbVar18[0x161] = 0;
        pbVar18[0x162] = 0;
        pbVar18[0x163] = 0;
        pbVar18[0x164] = 0;
        pbVar18[0x165] = 0;
        pbVar18[0x166] = 0;
        pbVar18[0x167] = 0;
        pbVar18[0x16a] = 0;
        pbVar18[0x16b] = 0;
        uVar26 = ~uVar28 + (ulonglong)*(ushort *)(pbVar19 + 0x16a);
        *(short *)(pbVar18 + 0x16a) = (short)uVar26;
        bVar2 = pbVar19[uVar28 + 0x16c];
        iVar35 = (int)uVar28;
        pbVar21 = pbVar19 + (uint)(iVar35 << 5);
        uVar6 = *(undefined4 *)pbVar21;
        uVar7 = *(undefined4 *)(pbVar21 + 4);
        uVar8 = *(undefined4 *)(pbVar21 + 8);
        uVar9 = *(undefined4 *)(pbVar21 + 0xc);
        pbVar21 = pbVar19 + (ulonglong)(uint)(iVar35 << 5) + 0x10;
        uVar10 = *(undefined4 *)pbVar21;
        uVar11 = *(undefined4 *)(pbVar21 + 4);
        uVar12 = *(undefined4 *)(pbVar21 + 8);
        uVar13 = *(undefined4 *)(pbVar21 + 0xc);
        if (0xb < uVar26) {
          pdb_142dc8420(0,uVar26,0xb,&UNK_142f4e2a8);
          goto LAB_1403b4f29;
        }
        pub_142e32760(pbVar18 + 0x16c,pbVar19 + uVar28 + 0x16d,uVar26);
        pub_142e32760(pbVar18,pbVar19 + (uint)((iVar35 + 1) * 0x20),uVar26 * 0x20);
        *(short *)(pbVar19 + 0x16a) = (short)uVar28;
        uStack_110 = (undefined1)uVar6;
        uStack_10c = (undefined1)uVar7;
        uVar6 = CONCAT13(uStack_10c,(int3)((uint)uVar6 >> 8));
        uVar14 = (undefined3)((uint)uVar7 >> 8);
        uStack_108 = (undefined1)uVar8;
        uStack_104 = (undefined1)uVar9;
        uVar7 = CONCAT13(uStack_104,(int3)((uint)uVar8 >> 8));
        uVar15 = (undefined3)((uint)uVar9 >> 8);
        uStack_100 = (undefined1)uVar10;
        uStack_fc = (undefined1)uVar11;
        uVar8 = CONCAT13(uStack_fc,(int3)((uint)uVar10 >> 8));
        uVar16 = (undefined3)((uint)uVar11 >> 8);
        uStack_f8 = (undefined1)uVar12;
        uStack_f7 = (undefined3)((uint)uVar12 >> 8);
        uVar26 = (ulonglong)*(ushort *)(pbVar18 + 0x16a);
        if (0xb < uVar26) {
          pdb_142dc8420(0,uVar26 + 1,0xc,&UNK_142f4e2c0);
          goto LAB_1403b4f29;
        }
        iVar29 = (int)(uVar26 + 1);
        if ((uint)uVar4 - iVar35 != iVar29) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_142f4e268,0x28,&UNK_142f4e290);
        }
        lStack_80 = lStack_80 + 1;
        pub_142e32760(pbVar18 + 0x178,pbVar19 + uVar28 * 8 + 0x180,iVar29 << 3);
        uVar28 = 0;
        do {
          uVar20 = uVar28 + (uVar28 < uVar26);
          lVar34 = *(longlong *)(pbVar18 + uVar28 * 8 + 0x178);
          *(byte **)(lVar34 + 0x160) = pbVar18;
          *(short *)(lVar34 + 0x168) = (short)uVar28;
          if (uVar26 <= uVar28) break;
          uVar28 = uVar20;
        } while (uVar20 <= uVar26);
        pbVar21 = pbVar18;
        if (!bVar36) {
          pbVar21 = pbVar19;
        }
        uVar3 = *(ushort *)(pbVar21 + 0x16a);
        uVar28 = (ulonglong)uVar3;
        lVar34 = uVar33 + 1;
        lVar27 = uVar28 - uVar33;
        uVar24 = (uint)lVar27;
        if (uVar28 < uVar33 || lVar27 == 0) {
          pbVar21[uVar33 + 0x16c] = bStack_49;
          *(ulonglong *)(pbVar21 + uVar33 * 0x20 + 0x10) =
               CONCAT35(uStack_cc,CONCAT41(uStack_d0,uStack_d1));
          *(ulonglong *)(pbVar21 + uVar33 * 0x20 + 0x10 + 8) =
               CONCAT44(uStack_c5,CONCAT31(uStack_c8,uStack_c9));
          *(ulonglong *)(pbVar21 + uVar33 * 0x20) = CONCAT35(uStack_dc,CONCAT41(uStack_e0,uVar17));
          *(ulonglong *)(pbVar21 + uVar33 * 0x20 + 8) =
               CONCAT35(uStack_d4,CONCAT41(uStack_d8,uStack_d9));
        }
        else {
          pub_142e32770(pbVar21 + uVar33 + 0x16d,pbVar21 + uVar33 + 0x16c,lVar27);
          pbVar21[uVar33 + 0x16c] = bStack_49;
          lVar27 = uVar33 * 0x20;
          pub_142e32770(pbVar21 + lVar34 * 0x20,pbVar21 + lVar27,uVar24 << 5);
          pbVar1 = pbVar21 + lVar27;
          *(uint *)pbVar1 = CONCAT31((undefined3)uStack_e0,uVar17);
          *(uint *)(pbVar1 + 4) = CONCAT31(uStack_dc,uStack_e0._3_1_);
          *(uint *)(pbVar1 + 8) = CONCAT31((undefined3)uStack_d8,uStack_d9);
          *(uint *)(pbVar1 + 0xc) = CONCAT31(uStack_d4,uStack_d8._3_1_);
          pbVar1 = pbVar21 + lVar27 + 0x10;
          *(uint *)pbVar1 = CONCAT31((undefined3)uStack_d0,uStack_d1);
          *(uint *)(pbVar1 + 4) = CONCAT31(uStack_cc,uStack_d0._3_1_);
          *(uint *)(pbVar1 + 8) = CONCAT31(uStack_c8,uStack_c9);
          *(undefined4 *)(pbVar1 + 0xc) = uStack_c5;
          pub_142e32770(pbVar21 + uVar33 * 8 + 0x188,pbVar21 + lVar34 * 8 + 0x178,uVar24 * 8);
        }
        *(byte **)(pbVar21 + uVar33 * 8 + 0x180) = pbVar30;
        *(ushort *)(pbVar21 + 0x16a) = uVar3 + 1;
        if ((uint)lVar34 < (uint)(uVar28 + 2)) {
          uVar32 = ((uint)uVar3 - (int)uVar33) + 1 & 3;
          if (uVar32 != 0) {
            uVar26 = 0;
            do {
              lVar27 = *(longlong *)(pbVar21 + uVar26 * 8 + uVar33 * 8 + 0x180);
              *(byte **)(lVar27 + 0x160) = pbVar21;
              *(short *)(lVar27 + 0x168) = (short)lVar34 + (short)uVar26;
              uVar26 = uVar26 + 1;
            } while (uVar32 != uVar26);
            lVar34 = lVar34 + uVar26;
          }
          if (2 < uVar24) {
            do {
              lVar27 = *(longlong *)(pbVar21 + lVar34 * 8 + 0x178);
              *(byte **)(lVar27 + 0x160) = pbVar21;
              sVar25 = (short)lVar34;
              *(short *)(lVar27 + 0x168) = sVar25;
              lVar27 = *(longlong *)(pbVar21 + lVar34 * 8 + 0x180);
              *(byte **)(lVar27 + 0x160) = pbVar21;
              *(short *)(lVar27 + 0x168) = sVar25 + 1;
              lVar27 = *(longlong *)(pbVar21 + lVar34 * 8 + 0x188);
              *(byte **)(lVar27 + 0x160) = pbVar21;
              *(short *)(lVar27 + 0x168) = sVar25 + 2;
              lVar27 = *(longlong *)(pbVar21 + lVar34 * 8 + 400);
              *(byte **)(lVar27 + 0x160) = pbVar21;
              *(short *)(lVar27 + 0x168) = sVar25 + 3;
              lVar34 = lVar34 + 4;
            } while (lVar34 != uVar28 + 2);
          }
        }
        uStack_c8 = uStack_f7;
        uStack_d1 = uStack_100;
        uStack_c9 = uStack_f8;
        uStack_e1 = uStack_110;
        uStack_d9 = uStack_108;
        bVar36 = true;
        pbVar1 = *(byte **)(pbVar19 + 0x160);
        pbVar21 = pbVar19;
        pbVar30 = pbVar18;
        uStack_e0 = uVar6;
        uStack_d8 = uVar7;
        uStack_d0 = uVar8;
        uStack_c5 = uVar13;
        bStack_49 = bVar2;
        uStack_dc = uVar14;
        uStack_d4 = uVar15;
        uStack_cc = uVar16;
      } while (*(byte **)(pbVar19 + 0x160) != (byte *)0x0);
    }
    param_5 = (longlong *)*param_5;
    lVar34 = *param_5;
    if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f4e120);
    }
    lVar27 = param_5[1];
    pdb_14007ee60();
    pbVar21 = pub_1406abab0(0x1d8,8);
    if (pbVar21 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x1d8);
    }
    pbVar21[0x160] = 0;
    pbVar21[0x161] = 0;
    pbVar21[0x162] = 0;
    pbVar21[0x163] = 0;
    pbVar21[0x164] = 0;
    pbVar21[0x165] = 0;
    pbVar21[0x166] = 0;
    pbVar21[0x167] = 0;
    pbVar21[0x16a] = 0;
    pbVar21[0x16b] = 0;
    *(longlong *)(pbVar21 + 0x178) = lVar34;
    lVar22 = lVar27 + 1;
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f4e250);
    }
    *(byte **)(lVar34 + 0x160) = pbVar21;
    *(undefined2 *)(lVar34 + 0x168) = 0;
    *param_5 = (longlong)pbVar21;
    param_5[1] = lVar22;
    if (lStack_80 != lVar27) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_142f4e1f0,0x30,&UNK_142f4e220);
    }
    pbVar21[0x16a] = 1;
    pbVar21[0x16b] = 0;
    pbVar21[0x16c] = bStack_49;
    *(ulonglong *)pbVar21 = CONCAT35(uStack_dc,CONCAT41(uStack_e0,uStack_e1));
    *(ulonglong *)(pbVar21 + 8) = CONCAT35(uStack_d4,CONCAT41(uStack_d8,uStack_d9));
    *(ulonglong *)(pbVar21 + 0x10) = CONCAT35(uStack_cc,CONCAT41(uStack_d0,uStack_d1));
    *(ulonglong *)(pbVar21 + 0x18) = CONCAT44(uStack_c5,CONCAT31(uStack_c8,uStack_c9));
    *(byte **)(pbVar21 + 0x180) = pbVar18;
    *(byte **)(pbVar18 + 0x160) = pbVar21;
    pbVar18[0x168] = 1;
    pbVar18[0x169] = 0;
  }
LAB_1403b4c89:
  *param_1 = (longlong)pbVar31;
  param_1[1] = lVar23;
  param_1[2] = uStack_58;
  return param_1;
}

