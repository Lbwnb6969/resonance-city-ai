// VA 0x141c20fa0, PDB extent 1600 bytes
// zune_jpeg::headers::parse_huffman<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zune_jpeg::headers::parse_huffman<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1600 */

undefined8 * pdb_141c20fa0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  uint uStackX_c;
  undefined1 auStackX_10 [16];
  undefined1 auStackX_20 [8];
  undefined8 uStack_48;
  
  uStack_48 = 0x141c20fb6;
  lVar8 = pdb_142d7c6d0();
  lVar8 = -lVar8;
  *(undefined8 *)(&stack0x00002b60 + lVar8) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00002b68 + lVar8) = unaff_XMM6_Qb;
  uVar18 = *(ulonglong *)(param_2 + 0x7140);
  if (uVar18 < 0xfffffffffffffffe) {
    if (uVar18 + 2 <= *(ulonglong *)(*(longlong *)(param_2 + 0x7138) + 0x10)) {
      uVar6 = *(ushort *)(*(longlong *)(*(longlong *)(param_2 + 0x7138) + 8) + uVar18);
      *(ulonglong *)(param_2 + 0x7140) = uVar18 + 2;
      uVar6 = uVar6 << 8 | uVar6 >> 8;
      if (uVar6 < 2) {
        *(undefined1 *)param_1 = 1;
        param_1[1] = &UNK_14339d986;
        param_1[2] = 0x1f;
        return param_1;
      }
      uVar6 = uVar6 - 2;
      uVar18 = (ulonglong)uVar6;
      uVar7 = (uint)uVar6;
      if (0x10 < uVar6) {
        *(undefined8 **)(auStackX_20 + lVar8 + -0x20) = param_1;
        do {
          lVar9 = *(longlong *)(param_2 + 0x7138);
          uVar12 = *(ulonglong *)(param_2 + 0x7140);
          if (*(ulonglong *)(lVar9 + 0x10) <= uVar12) goto LAB_141c20fe6;
          lVar3 = *(longlong *)(lVar9 + 8);
          lVar1 = uVar12 + 1;
          *(longlong *)(param_2 + 0x7140) = lVar1;
          bVar2 = *(byte *)(lVar3 + uVar12);
          (&stack0xfffffffffffffff7)[lVar8] = bVar2 >> 4;
          uVar16 = bVar2 & 0xf;
          *(ulonglong *)(&stack0x00000030 + lVar8) = (ulonglong)uVar16;
          *(undefined1 (*) [16])(auStackX_10 + lVar8) = (undefined1  [16])0x0;
          auStackX_20[lVar8] = 0;
          if (3 < (byte)uVar16) {
            *(undefined1 **)(&stack0x000002a0 + lVar8) = &stack0x00000030 + lVar8;
            *(code **)(&stack0x000002a8 + lVar8) = pdb_140f72a40;
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c213a1;
            pdb_140f60760(&stack0x00000038 + lVar8,&UNK_14339da68,&stack0x000002a0 + lVar8);
            *(undefined8 *)(&stack0x000002a7 + lVar8) = *(undefined8 *)(&stack0x00000038 + lVar8);
            *(undefined8 *)(&stack0x000002af + lVar8) = *(undefined8 *)(&stack0x00000040 + lVar8);
            uVar10 = *(undefined8 *)(&stack0x00000048 + lVar8);
LAB_141c21498:
            *(undefined8 *)(&stack0x000002b7 + lVar8) = uVar10;
            *(undefined1 *)param_1 = 3;
            uVar5 = *(undefined8 *)(&stack0x000002a8 + lVar8);
            uVar10 = *(undefined8 *)(&stack0x000002af + lVar8);
            uVar4 = *(undefined8 *)(&stack0x000002b7 + lVar8);
            *(undefined8 *)((longlong)param_1 + 1) = *(undefined8 *)(&stack0x000002a0 + lVar8);
            *(undefined8 *)((longlong)param_1 + 9) = uVar5;
            param_1[2] = uVar10;
            param_1[3] = uVar4;
            return param_1;
          }
          if (0x1f < bVar2) {
            *(undefined1 **)(&stack0x000002a0 + lVar8) = &stack0xfffffffffffffff7 + lVar8;
            *(code **)(&stack0x000002a8 + lVar8) = pdb_140f6e8f0;
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c213f3;
            pdb_140f60760(&stack0x00000050 + lVar8,&UNK_14339da3d,&stack0x000002a0 + lVar8);
            *(undefined8 *)(&stack0x000002a7 + lVar8) = *(undefined8 *)(&stack0x00000050 + lVar8);
            *(undefined8 *)(&stack0x000002af + lVar8) = *(undefined8 *)(&stack0x00000058 + lVar8);
            uVar10 = *(undefined8 *)(&stack0x00000060 + lVar8);
            goto LAB_141c21498;
          }
          uVar13 = *(ulonglong *)(lVar9 + 0x10);
          if (uVar12 + 0x11 < *(ulonglong *)(lVar9 + 0x10)) {
            uVar13 = uVar12 + 0x11;
          }
          uVar15 = uVar13 - lVar1;
          if (0x10 < uVar15) {
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c215bf;
            pdb_142dc8420(0,uVar15,0x10,&UNK_1430203c0);
LAB_141c215bf:
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c215d3;
            pdb_142dc8420(0,uVar18,uVar15,&UNK_1430203c0);
LAB_141c215d3:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c215df;
            pdb_142dc8150(&UNK_1430203a8);
          }
          if (uVar13 <= uVar12) goto LAB_141c215d3;
          lVar3 = *(longlong *)(lVar9 + 8);
          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c21100;
          pub_142e32760(auStackX_10 + lVar8 + 1,lVar1 + lVar3,uVar15);
          *(ulonglong *)(param_2 + 0x7140) = uVar13;
          if (uVar15 != 0x10) {
            *(undefined1 *)param_1 = 10;
            return param_1;
          }
          uVar17 = (int)uVar18 - 0x11;
          *(uint *)(&stack0xfffffffffffffffc + lVar8) = uVar17;
          auVar19 = psadbw(*(undefined1 (*) [16])(auStackX_10 + lVar8 + 1),(undefined1  [16])0x0);
          uVar15 = auVar19._8_8_ + auVar19._0_8_;
          uVar7 = (uint)uVar15;
          *(uint *)((longlong)&uStackX_c + lVar8) = uVar7;
          if (0x100 < uVar7) {
            *(undefined1 *)param_1 = 1;
            param_1[1] = &UNK_14339da07;
            param_1[2] = 0x36;
            return param_1;
          }
          if (uVar17 < uVar7) {
            *(longlong *)(&stack0x000002a0 + lVar8) = (longlong)&uStackX_c + lVar8;
            *(code **)(&stack0x000002a8 + lVar8) = pdb_140f71c50;
            *(undefined1 **)(&stack0x000002b0 + lVar8) = &stack0xfffffffffffffffc + lVar8;
            *(code **)(&stack0x000002b8 + lVar8) = pdb_140f71c50;
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c21480;
            pdb_140f60760(&stack0x00000068 + lVar8,&UNK_14339d9c3,&stack0x000002a0 + lVar8);
            *(undefined8 *)(&stack0x000002a7 + lVar8) = *(undefined8 *)(&stack0x00000068 + lVar8);
            *(undefined8 *)(&stack0x000002af + lVar8) = *(undefined8 *)(&stack0x00000070 + lVar8);
            uVar10 = *(undefined8 *)(&stack0x00000078 + lVar8);
            goto LAB_141c21498;
          }
          *(uint *)(&stack0xfffffffffffffff8 + lVar8) = uVar17 - uVar7;
          *(uint *)(&stack0xfffffffffffffffc + lVar8) = uVar17 - uVar7;
          *(undefined1 (*) [16])(&stack0x00000190 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000180 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000170 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000160 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000150 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000140 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000130 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000120 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000110 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000100 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000f0 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000e0 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000d0 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000c0 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000b0 + lVar8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000a0 + lVar8) = (undefined1  [16])0x0;
          uVar15 = uVar15 & 0xffffffff;
          uVar12 = *(ulonglong *)(lVar9 + 0x10);
          if (uVar15 + uVar13 < *(ulonglong *)(lVar9 + 0x10)) {
            uVar12 = uVar15 + uVar13;
          }
          uVar18 = uVar12 - uVar13;
          if (uVar15 < uVar18) goto LAB_141c215bf;
          lVar9 = *(longlong *)(lVar9 + 8);
          puVar14 = &stack0x000000a0 + lVar8;
          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c21220;
          pub_142e32760(puVar14,uVar13 + lVar9,uVar18);
          *(ulonglong *)(param_2 + 0x7140) = uVar12;
          if (uVar18 != uVar15) {
            *(undefined **)(&stack0x000001a0 + lVar8) = &UNK_143020319;
            *(undefined8 *)(&stack0x000001a8 + lVar8) = 0x24;
            *(undefined1 **)(&stack0x000002a0 + lVar8) = &stack0x000001a0 + lVar8;
            *(code **)(&stack0x000002a8 + lVar8) = pdb_1402ed400;
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c21524;
            pdb_140f60760(&stack0x00000088 + lVar8,&UNK_14339da98,&stack0x000002a0 + lVar8);
            (&stack0x00000080)[lVar8] = 0;
            puVar11 = (undefined8 *)(&stack0x00000080 + lVar8);
            param_1 = *(undefined8 **)(auStackX_20 + lVar8 + -0x20);
LAB_141c21591:
            uVar10 = *puVar11;
            uVar4 = puVar11[1];
            uVar5 = puVar11[3];
            param_1[2] = puVar11[2];
            param_1[3] = uVar5;
            *param_1 = uVar10;
            param_1[1] = uVar4;
            return param_1;
          }
          if (bVar2 >> 4 == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c212c1;
            pub_142e32760(&stack0x000001a0 + lVar8,puVar14,0x100);
            (&stack0xffffffffffffffe0)[lVar8] = *(undefined1 *)(param_2 + 0x71bd);
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c212e4;
            pdb_140dc1b30(&stack0x000002a0 + lVar8,auStackX_10 + lVar8,&stack0x000001a0 + lVar8,1);
            param_1 = *(undefined8 **)(auStackX_20 + lVar8 + -0x20);
            uVar7 = *(uint *)(&stack0xfffffffffffffff8 + lVar8);
            if ((&stack0x000002a0)[lVar8] != '\0') {
              puVar11 = (undefined8 *)(&stack0x0000103c + lVar8);
              *(undefined8 *)(&stack0x0000104c + lVar8) = *(undefined8 *)(&stack0x000002b8 + lVar8);
              *(undefined8 *)(&stack0x00001054 + lVar8) = *(undefined8 *)(&stack0x000002c0 + lVar8);
              *(undefined8 *)(&stack0x0000103c + lVar8) = *(undefined8 *)(&stack0x000002a8 + lVar8);
              *(undefined8 *)(&stack0x00001044 + lVar8) = *(undefined8 *)(&stack0x000002b0 + lVar8);
              goto LAB_141c21591;
            }
            puVar14 = &stack0x00001038 + lVar8;
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c2131a;
            pub_142e32760(puVar14,&stack0x000002a4 + lVar8,0xd94);
            lVar9 = 0x458;
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c2124e;
            pub_142e32760(&stack0x000001a0 + lVar8,puVar14,0x100);
            (&stack0xffffffffffffffe0)[lVar8] = *(undefined1 *)(param_2 + 0x71bd);
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c21271;
            pdb_140dc1b30(&stack0x000002a0 + lVar8,auStackX_10 + lVar8,&stack0x000001a0 + lVar8,0);
            param_1 = *(undefined8 **)(auStackX_20 + lVar8 + -0x20);
            uVar7 = *(uint *)(&stack0xfffffffffffffff8 + lVar8);
            if ((&stack0x000002a0)[lVar8] != '\0') {
              puVar11 = (undefined8 *)(&stack0x00001dd0 + lVar8);
              *(undefined8 *)(&stack0x00001de0 + lVar8) = *(undefined8 *)(&stack0x000002b8 + lVar8);
              *(undefined8 *)(&stack0x00001de8 + lVar8) = *(undefined8 *)(&stack0x000002c0 + lVar8);
              *(undefined8 *)(&stack0x00001dd0 + lVar8) = *(undefined8 *)(&stack0x000002a8 + lVar8);
              *(undefined8 *)(&stack0x00001dd8 + lVar8) = *(undefined8 *)(&stack0x000002b0 + lVar8);
              goto LAB_141c21591;
            }
            puVar14 = &stack0x00001dcc + lVar8;
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c212a7;
            pub_142e32760(puVar14,&stack0x000002a4 + lVar8,0xd94);
            lVar9 = 0x3aa8;
          }
          uVar18 = (ulonglong)uVar7;
          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x141c2133a;
          pub_142e32760((ulonglong)uVar16 * 0xd94 + lVar9 + param_2,puVar14,0xd94);
        } while (0x10 < uVar7);
      }
      if (uVar7 != 0) {
        *(undefined1 *)param_1 = 1;
        param_1[1] = &UNK_14339d9a5;
        param_1[2] = 0x1e;
        return param_1;
      }
      *(undefined1 *)param_1 = 0xd;
      return param_1;
    }
  }
LAB_141c20fe6:
  *(undefined1 *)param_1 = 1;
  param_1[1] = &UNK_14339d4db;
  param_1[2] = 0xd;
  return param_1;
}

