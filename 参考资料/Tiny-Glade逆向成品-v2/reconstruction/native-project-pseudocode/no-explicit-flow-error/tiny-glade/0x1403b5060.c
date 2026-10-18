// VA 0x1403b5060, PDB extent 3090 bytes
// alloc::collections::btree::node::Handle::insert_recursing<winit::monitor::VideoMode,alloc::collections::btree::set_val::SetValZST,alloc::alloc::Global,alloc::collections::btree::map::entry::impl$8::insert_entry::closure_env$0<winit::monitor::VideoMode,alloc::collections::btree::set_val::SetValZST,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   alloc::collections::btree::node::Handle::insert_recursing<winit::monitor::VideoMode,alloc::collections::btree::set_val::SetValZST,alloc::alloc::Global,alloc::collections::btree::map::entry::impl$8::insert_entry::closure_env$0<winit::monitor::VideoMode,alloc::collections::btree::set_val::SetValZST,alloc::alloc::Global>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 3090 */

longlong * pdb_1403b5060(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  short sVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte *pbVar26;
  byte *pbVar27;
  int iVar28;
  bool bVar29;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  longlong lStack_68;
  ulonglong uStack_58;
  
  pbVar14 = (byte *)*param_2;
  uVar1 = *(ushort *)(pbVar14 + 0x16a);
  uVar20 = (ulonglong)uVar1;
  if (uVar20 < 0xb) {
    lVar17 = param_2[2];
    if (lVar17 + 1U <= uVar20) {
      pub_142e32770(pbVar14 + (lVar17 + 1U) * 0x20,pbVar14 + lVar17 * 0x20,(uVar20 - lVar17) * 0x20)
      ;
    }
    uVar25 = *param_3;
    uVar24 = param_3[1];
    uVar3 = param_3[3];
    *(undefined8 *)(pbVar14 + lVar17 * 0x20 + 0x10) = param_3[2];
    *(undefined8 *)(pbVar14 + lVar17 * 0x20 + 0x10 + 8) = uVar3;
    *(undefined8 *)(pbVar14 + lVar17 * 0x20) = uVar25;
    *(undefined8 *)(pbVar14 + lVar17 * 0x20 + 8) = uVar24;
    *(ushort *)(pbVar14 + 0x16a) = uVar1 + 1;
    lVar19 = param_2[1];
    *param_1 = (longlong)pbVar14;
    param_1[1] = lVar19;
    param_1[2] = lVar17;
  }
  else {
    uStack_58 = param_2[2];
    if (uStack_58 < 5) {
      uVar20 = 4;
      bVar29 = false;
    }
    else if (uStack_58 == 5) {
      bVar29 = false;
      uVar20 = 5;
    }
    else if (uStack_58 == 6) {
      uVar20 = 5;
      bVar29 = true;
      uStack_58 = 0;
    }
    else {
      uStack_58 = uStack_58 - 7;
      uVar20 = 6;
      bVar29 = true;
    }
    lStack_68 = param_2[1];
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(0x170,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x170);
    }
    pbVar12[0x160] = 0;
    pbVar12[0x161] = 0;
    pbVar12[0x162] = 0;
    pbVar12[0x163] = 0;
    pbVar12[0x164] = 0;
    pbVar12[0x165] = 0;
    pbVar12[0x166] = 0;
    pbVar12[0x167] = 0;
    uVar21 = ~uVar20 + (ulonglong)*(ushort *)(pbVar14 + 0x16a);
    *(short *)(pbVar12 + 0x16a) = (short)uVar21;
    lVar17 = uVar20 * 0x20;
    uVar25 = *(undefined8 *)(pbVar14 + lVar17);
    if (0xb < uVar21) {
      pdb_142dc8420(0,uVar21,0xb,&UNK_142f4e2a8);
LAB_1403b597b:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    pub_142e32760(pbVar12,pbVar14 + lVar17 + 0x20,uVar21 * 0x20);
    *(short *)(pbVar14 + 0x16a) = (short)uVar20;
    uStack_78 = *(undefined8 *)(pbVar14 + lVar17 + 0x18);
    uStack_88 = *(undefined4 *)(pbVar14 + lVar17 + 8);
    uStack_84 = *(undefined4 *)(pbVar14 + lVar17 + 0xc);
    uStack_80 = *(undefined4 *)(pbVar14 + lVar17 + 0x10);
    uStack_7c = *(undefined4 *)(pbVar14 + lVar17 + 0x14);
    lVar17 = 0;
    pbVar11 = pbVar12;
    if (!bVar29) {
      lVar17 = lStack_68;
      pbVar11 = pbVar14;
    }
    uVar1 = *(ushort *)(pbVar11 + 0x16a);
    if (uStack_58 < uVar1) {
      pub_142e32770(pbVar11 + uStack_58 * 0x20 + 0x20,pbVar11 + uStack_58 * 0x20,
                    ((uint)uVar1 - (int)uStack_58) * 0x20);
    }
    uVar24 = *param_3;
    uVar3 = param_3[1];
    uVar10 = param_3[3];
    *(undefined8 *)(pbVar11 + uStack_58 * 0x20 + 0x10) = param_3[2];
    *(undefined8 *)(pbVar11 + uStack_58 * 0x20 + 0x10 + 8) = uVar10;
    *(undefined8 *)(pbVar11 + uStack_58 * 0x20) = uVar24;
    *(undefined8 *)(pbVar11 + uStack_58 * 0x20 + 8) = uVar3;
    *(ushort *)(pbVar11 + 0x16a) = uVar1 + 1;
    if (*(byte **)(pbVar14 + 0x160) == (byte *)0x0) {
      lStack_68 = 0;
    }
    else {
      bVar29 = lStack_68 == 0;
      pbVar27 = *(byte **)(pbVar14 + 0x160);
      uVar24 = uVar25;
      pbVar26 = pbVar12;
      do {
        pbVar13 = pbVar27;
        if (!bVar29) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_142f4e2d8,0x35,&UNK_142f4e310);
        }
        uVar1 = *(ushort *)(pbVar14 + 0x168);
        uVar20 = (ulonglong)uVar1;
        uVar2 = *(ushort *)(pbVar13 + 0x16a);
        uVar21 = (ulonglong)uVar2;
        if (uVar21 < 0xb) {
          lVar19 = uVar20 + 1;
          pbVar14 = pbVar13 + (ulonglong)uVar1 * 0x20;
          if (uVar1 < uVar2) {
            pub_142e32770(pbVar13 + ((uint)lVar19 << 5),pbVar14,(uVar21 - uVar20) * 0x20);
            *(undefined8 *)pbVar14 = uVar24;
            *(undefined4 *)(pbVar14 + 8) = uStack_88;
            *(undefined4 *)(pbVar14 + 0xc) = uStack_84;
            *(undefined4 *)(pbVar14 + 0x10) = uStack_80;
            *(undefined4 *)(pbVar14 + 0x14) = uStack_7c;
            *(undefined8 *)(pbVar14 + 0x18) = uStack_78;
            pub_142e32770(pbVar13 + uVar20 * 8 + 0x180,pbVar13 + lVar19 * 8 + 0x170,
                          (uVar21 - uVar20) * 8);
          }
          else {
            *(undefined8 *)pbVar14 = uVar24;
            *(ulonglong *)(pbVar14 + 8) = CONCAT44(uStack_84,uStack_88);
            *(ulonglong *)(pbVar14 + 0x10) = CONCAT44(uStack_7c,uStack_80);
            *(undefined8 *)(pbVar14 + 0x18) = uStack_78;
          }
          *(byte **)(pbVar13 + uVar20 * 8 + 0x178) = pbVar26;
          *(ushort *)(pbVar13 + 0x16a) = uVar2 + 1;
          if ((uint)lVar19 < (uint)(uVar21 + 2)) {
            uVar23 = ((uint)uVar2 - (uint)uVar1) + 1 & 3;
            if (uVar23 != 0) {
              uVar15 = 0;
              do {
                lVar4 = *(longlong *)(pbVar13 + uVar15 * 8 + uVar20 * 8 + 0x178);
                *(byte **)(lVar4 + 0x160) = pbVar13;
                *(short *)(lVar4 + 0x168) = (short)lVar19 + (short)uVar15;
                uVar15 = uVar15 + 1;
              } while (uVar23 != uVar15);
              lVar19 = lVar19 + uVar15;
            }
            if (2 < (uint)uVar2 - (uint)uVar1) {
              do {
                lVar4 = *(longlong *)(pbVar13 + lVar19 * 8 + 0x170);
                *(byte **)(lVar4 + 0x160) = pbVar13;
                sVar18 = (short)lVar19;
                *(short *)(lVar4 + 0x168) = sVar18;
                lVar4 = *(longlong *)(pbVar13 + lVar19 * 8 + 0x178);
                *(byte **)(lVar4 + 0x160) = pbVar13;
                *(short *)(lVar4 + 0x168) = sVar18 + 1;
                lVar4 = *(longlong *)(pbVar13 + lVar19 * 8 + 0x180);
                *(byte **)(lVar4 + 0x160) = pbVar13;
                *(short *)(lVar4 + 0x168) = sVar18 + 2;
                lVar4 = *(longlong *)(pbVar13 + lVar19 * 8 + 0x188);
                *(byte **)(lVar4 + 0x160) = pbVar13;
                *(short *)(lVar4 + 0x168) = sVar18 + 3;
                lVar19 = lVar19 + 4;
              } while (lVar19 != uVar21 + 2);
            }
          }
          goto LAB_1403b56bb;
        }
        if (uVar1 < 5) {
          uVar21 = 4;
          bVar29 = false;
        }
        else if (uVar1 == 5) {
          bVar29 = false;
          uVar21 = 5;
        }
        else if (uVar1 == 6) {
          bVar29 = true;
          uVar21 = 5;
          uVar20 = 0;
        }
        else {
          uVar20 = uVar20 - 7;
          bVar29 = true;
          uVar21 = 6;
        }
        pdb_14007ee60();
        pbVar12 = pub_1406abab0(0x1d0,8);
        if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x1d0);
        }
        pbVar12[0x160] = 0;
        pbVar12[0x161] = 0;
        pbVar12[0x162] = 0;
        pbVar12[0x163] = 0;
        pbVar12[0x164] = 0;
        pbVar12[0x165] = 0;
        pbVar12[0x166] = 0;
        pbVar12[0x167] = 0;
        pbVar12[0x16a] = 0;
        pbVar12[0x16b] = 0;
        uVar22 = ~uVar21 + (ulonglong)*(ushort *)(pbVar13 + 0x16a);
        *(short *)(pbVar12 + 0x16a) = (short)uVar22;
        uVar15 = (ulonglong)(uint)((int)uVar21 << 5);
        uVar25 = *(undefined8 *)(pbVar13 + uVar15);
        uVar3 = *(undefined8 *)(pbVar13 + uVar15 + 0x18);
        pbVar14 = pbVar13 + uVar15 + 8;
        uVar6 = *(undefined4 *)pbVar14;
        uVar7 = *(undefined4 *)(pbVar14 + 4);
        uVar8 = *(undefined4 *)(pbVar14 + 8);
        uVar9 = *(undefined4 *)(pbVar14 + 0xc);
        if (0xb < uVar22) {
          pdb_142dc8420(0,uVar22,0xb,&UNK_142f4e2a8);
          goto LAB_1403b597b;
        }
        pub_142e32760(pbVar12,pbVar13 + uVar15 + 0x20,uVar22 * 0x20);
        *(short *)(pbVar13 + 0x16a) = (short)uVar21;
        uVar15 = (ulonglong)*(ushort *)(pbVar12 + 0x16a);
        if (0xb < uVar15) {
          pdb_142dc8420(0,uVar15 + 1,0xc,&UNK_142f4e2c0);
          goto LAB_1403b597b;
        }
        iVar28 = (int)(uVar15 + 1);
        if ((uint)uVar2 - (int)uVar21 != iVar28) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_142f4e268,0x28,&UNK_142f4e290);
        }
        lStack_68 = lStack_68 + 1;
        pub_142e32760(pbVar12 + 0x170,pbVar13 + uVar21 * 8 + 0x178,iVar28 << 3);
        uVar21 = 0;
        do {
          uVar22 = uVar21 + (uVar21 < uVar15);
          lVar19 = *(longlong *)(pbVar12 + uVar21 * 8 + 0x170);
          *(byte **)(lVar19 + 0x160) = pbVar12;
          *(short *)(lVar19 + 0x168) = (short)uVar21;
          if (uVar15 <= uVar21) break;
          uVar21 = uVar22;
        } while (uVar22 <= uVar15);
        pbVar14 = pbVar12;
        if (!bVar29) {
          pbVar14 = pbVar13;
        }
        uVar1 = *(ushort *)(pbVar14 + 0x16a);
        uVar21 = (ulonglong)uVar1;
        lVar19 = uVar20 + 1;
        pbVar27 = pbVar14 + uVar20 * 0x20;
        if (uVar21 < uVar20 || uVar21 - uVar20 == 0) {
          *(undefined8 *)pbVar27 = uVar24;
          *(ulonglong *)(pbVar27 + 8) = CONCAT44(uStack_84,uStack_88);
          *(ulonglong *)(pbVar27 + 0x10) = CONCAT44(uStack_7c,uStack_80);
          *(undefined8 *)(pbVar27 + 0x18) = uStack_78;
        }
        else {
          iVar28 = (uint)uVar1 - (int)uVar20;
          pub_142e32770(pbVar14 + lVar19 * 0x20,pbVar27,iVar28 * 0x20);
          *(undefined8 *)pbVar27 = uVar24;
          *(undefined4 *)(pbVar27 + 8) = uStack_88;
          *(undefined4 *)(pbVar27 + 0xc) = uStack_84;
          *(undefined4 *)(pbVar27 + 0x10) = uStack_80;
          *(undefined4 *)(pbVar27 + 0x14) = uStack_7c;
          *(undefined8 *)(pbVar27 + 0x18) = uStack_78;
          pub_142e32770(pbVar14 + uVar20 * 8 + 0x180,pbVar14 + lVar19 * 8 + 0x170,iVar28 * 8);
        }
        *(byte **)(pbVar14 + uVar20 * 8 + 0x178) = pbVar26;
        *(ushort *)(pbVar14 + 0x16a) = uVar1 + 1;
        if ((uint)lVar19 < (uint)(uVar21 + 2)) {
          uVar23 = ((uint)uVar1 - (int)uVar20) + 1 & 3;
          if (uVar23 != 0) {
            uVar15 = 0;
            do {
              lVar4 = *(longlong *)(pbVar14 + uVar15 * 8 + uVar20 * 8 + 0x178);
              *(byte **)(lVar4 + 0x160) = pbVar14;
              *(short *)(lVar4 + 0x168) = (short)lVar19 + (short)uVar15;
              uVar15 = uVar15 + 1;
            } while (uVar23 != uVar15);
            lVar19 = lVar19 + uVar15;
          }
          if (2 < (uint)(uVar21 - uVar20)) {
            do {
              lVar4 = *(longlong *)(pbVar14 + lVar19 * 8 + 0x170);
              *(byte **)(lVar4 + 0x160) = pbVar14;
              sVar18 = (short)lVar19;
              *(short *)(lVar4 + 0x168) = sVar18;
              lVar4 = *(longlong *)(pbVar14 + lVar19 * 8 + 0x178);
              *(byte **)(lVar4 + 0x160) = pbVar14;
              *(short *)(lVar4 + 0x168) = sVar18 + 1;
              lVar4 = *(longlong *)(pbVar14 + lVar19 * 8 + 0x180);
              *(byte **)(lVar4 + 0x160) = pbVar14;
              *(short *)(lVar4 + 0x168) = sVar18 + 2;
              lVar4 = *(longlong *)(pbVar14 + lVar19 * 8 + 0x188);
              *(byte **)(lVar4 + 0x160) = pbVar14;
              *(short *)(lVar4 + 0x168) = sVar18 + 3;
              lVar19 = lVar19 + 4;
            } while (lVar19 != uVar21 + 2);
          }
        }
        bVar29 = true;
        pbVar27 = *(byte **)(pbVar13 + 0x160);
        uVar24 = uVar25;
        pbVar26 = pbVar12;
        pbVar14 = pbVar13;
        uStack_88 = uVar6;
        uStack_84 = uVar7;
        uStack_80 = uVar8;
        uStack_7c = uVar9;
        uStack_78 = uVar3;
      } while (*(byte **)(pbVar13 + 0x160) != (byte *)0x0);
    }
    param_4 = (longlong *)*param_4;
    lVar19 = *param_4;
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f4e120);
    }
    lVar4 = param_4[1];
    pdb_14007ee60();
    pbVar14 = pub_1406abab0(0x1d0,8);
    if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x1d0);
    }
    pbVar14[0x160] = 0;
    pbVar14[0x161] = 0;
    pbVar14[0x162] = 0;
    pbVar14[0x163] = 0;
    pbVar14[0x164] = 0;
    pbVar14[0x165] = 0;
    pbVar14[0x166] = 0;
    pbVar14[0x167] = 0;
    pbVar14[0x16a] = 0;
    pbVar14[0x16b] = 0;
    *(longlong *)(pbVar14 + 0x170) = lVar19;
    lVar16 = lVar4 + 1;
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f4e250);
    }
    *(byte **)(lVar19 + 0x160) = pbVar14;
    *(undefined2 *)(lVar19 + 0x168) = 0;
    *param_4 = (longlong)pbVar14;
    param_4[1] = lVar16;
    if (lStack_68 != lVar4) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_142f4e1f0,0x30,&UNK_142f4e220);
    }
    pbVar14[0x16a] = 1;
    pbVar14[0x16b] = 0;
    *(undefined8 *)pbVar14 = uVar25;
    *(ulonglong *)(pbVar14 + 8) = CONCAT44(uStack_84,uStack_88);
    *(ulonglong *)(pbVar14 + 0x10) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(pbVar14 + 0x18) = uStack_78;
    *(byte **)(pbVar14 + 0x178) = pbVar12;
    *(byte **)(pbVar12 + 0x160) = pbVar14;
    pbVar12[0x168] = 1;
    pbVar12[0x169] = 0;
LAB_1403b56bb:
    *param_1 = (longlong)pbVar11;
    param_1[1] = lVar17;
    param_1[2] = uStack_58;
  }
  return param_1;
}

