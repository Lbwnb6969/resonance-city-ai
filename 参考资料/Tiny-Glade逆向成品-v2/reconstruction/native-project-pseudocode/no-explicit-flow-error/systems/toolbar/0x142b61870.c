// VA 0x142b61870, PDB extent 1611 bytes
// zune_jpeg::headers::parse_huffman<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: zune_jpeg::headers::parse_huffman<ref$<slice2$<u8> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 1611 */

undefined8 * pdb_142b61870(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  ulonglong uVar22;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auStackX_10 [8];
  longlong lStackX_18;
  ulonglong uStackX_20;
  undefined8 uStack_48;
  
  uStack_48 = 0x142b61886;
  lVar9 = pdb_142d7c6d0();
  lVar9 = -lVar9;
  *(undefined8 *)(&stack0x00002b50 + lVar9) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00002b58 + lVar9) = unaff_XMM6_Qb;
  uVar13 = *(ulonglong *)(param_2 + 29000);
  if ((uVar13 < 0xfffffffffffffffe) && (uVar13 + 2 <= *(ulonglong *)(param_2 + 0x7140))) {
    uVar7 = *(ushort *)(*(longlong *)(param_2 + 0x7138) + uVar13);
    *(ulonglong *)(param_2 + 29000) = uVar13 + 2;
    uVar7 = uVar7 << 8 | uVar7 >> 8;
    if (uVar7 < 2) {
      *(undefined1 *)param_1 = 1;
      param_1[1] = &UNK_14367f8b6;
      param_1[2] = 0x1f;
    }
    else {
      *(undefined8 **)(&stack0xfffffffffffffff0 + lVar9) = param_1;
      uVar7 = uVar7 - 2;
      uVar20 = (uint)uVar7;
      if (0x10 < uVar7) {
        *(longlong *)((longlong)&lStackX_18 + lVar9) = param_2;
        do {
          uVar13 = *(ulonglong *)(param_2 + 0x7140);
          uVar22 = *(ulonglong *)(param_2 + 29000);
          if (uVar13 <= uVar22) {
            param_1 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar9);
            goto LAB_142b61c06;
          }
          lVar2 = *(longlong *)(param_2 + 0x7138);
          lVar10 = uVar22 + 1;
          *(longlong *)(param_2 + 29000) = lVar10;
          bVar1 = *(byte *)(lVar2 + uVar22);
          (&stack0xffffffffffffffef)[lVar9] = bVar1 >> 4;
          uVar18 = bVar1 & 0xf;
          *(ulonglong *)((longlong)&uStackX_20 + lVar9) = (ulonglong)uVar18;
          *(undefined1 (*) [16])(&stack0x00000000 + lVar9) = (undefined1  [16])0x0;
          auStackX_10[lVar9] = 0;
          if (3 < (byte)uVar18) {
            *(longlong *)(&stack0x00000290 + lVar9) = (longlong)&uStackX_20 + lVar9;
            *(code **)(&stack0x00000298 + lVar9) = pdb_140f72a40;
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61c70;
            pdb_140f60760(&stack0x00000028 + lVar9,&UNK_14367f998,&stack0x00000290 + lVar9);
            *(undefined8 *)(&stack0x00000297 + lVar9) = *(undefined8 *)(&stack0x00000028 + lVar9);
            *(undefined8 *)(&stack0x0000029f + lVar9) = *(undefined8 *)(&stack0x00000030 + lVar9);
            uVar11 = *(undefined8 *)(&stack0x00000038 + lVar9);
LAB_142b61d6e:
            *(undefined8 *)(&stack0x000002a7 + lVar9) = uVar11;
            puVar12 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar9);
            *(undefined1 *)puVar12 = 3;
            uVar6 = *(undefined8 *)(&stack0x00000298 + lVar9);
            uVar11 = *(undefined8 *)(&stack0x0000029f + lVar9);
            uVar3 = *(undefined8 *)(&stack0x000002a7 + lVar9);
            *(undefined8 *)((longlong)puVar12 + 1) = *(undefined8 *)(&stack0x00000290 + lVar9);
            *(undefined8 *)((longlong)puVar12 + 9) = uVar6;
            puVar12[2] = uVar11;
            puVar12[3] = uVar3;
            return puVar12;
          }
          if (0x1f < bVar1) {
            *(undefined1 **)(&stack0x00000290 + lVar9) = &stack0xffffffffffffffef + lVar9;
            *(code **)(&stack0x00000298 + lVar9) = pdb_140f6e8f0;
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61cbf;
            pdb_140f60760(&stack0x00000040 + lVar9,&UNK_14367f96d,&stack0x00000290 + lVar9);
            *(undefined8 *)(&stack0x00000297 + lVar9) = *(undefined8 *)(&stack0x00000040 + lVar9);
            *(undefined8 *)(&stack0x0000029f + lVar9) = *(undefined8 *)(&stack0x00000048 + lVar9);
            uVar11 = *(undefined8 *)(&stack0x00000050 + lVar9);
            goto LAB_142b61d6e;
          }
          uVar14 = uVar22 + 0x11;
          if (uVar13 <= uVar22 + 0x11) {
            uVar14 = uVar13;
          }
          uVar17 = uVar14 - lVar10;
          if (0x10 < uVar17) {
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61e9a;
            pdb_142dc8420(0,uVar17,0x10,&UNK_14367ff70);
LAB_142b61e9a:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61ea6;
            pdb_142dc8150(&UNK_14367ff58);
          }
          if (uVar14 <= uVar22) goto LAB_142b61e9a;
          *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b619a6;
          pub_142e32760(&stack0x00000001 + lVar9,lVar10 + lVar2,uVar17);
          *(ulonglong *)(param_2 + 29000) = uVar14;
          if (uVar17 != 0x10) {
            puVar12 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar9);
            *(undefined1 *)puVar12 = 10;
            return puVar12;
          }
          uVar19 = uVar20 - 0x11;
          *(uint *)(&stack0xfffffffffffffff8 + lVar9) = uVar19;
          auVar21 = psadbw(*(undefined1 (*) [16])(&stack0x00000001 + lVar9),(undefined1  [16])0x0);
          uVar22 = auVar21._8_8_ + auVar21._0_8_;
          uVar8 = (uint)uVar22;
          *(uint *)(&stack0xfffffffffffffffc + lVar9) = uVar8;
          if (0x100 < uVar8) {
            puVar12 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar9);
            *(undefined1 *)puVar12 = 1;
            puVar12[1] = &UNK_14367f937;
            puVar12[2] = 0x36;
            return puVar12;
          }
          uVar20 = uVar19 - uVar8;
          if (uVar19 < uVar8) {
            *(undefined1 **)(&stack0x00000290 + lVar9) = &stack0xfffffffffffffffc + lVar9;
            *(code **)(&stack0x00000298 + lVar9) = pdb_140f71c50;
            *(undefined1 **)(&stack0x000002a0 + lVar9) = &stack0xfffffffffffffff8 + lVar9;
            *(code **)(&stack0x000002a8 + lVar9) = pdb_140f71c50;
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61d56;
            pdb_140f60760(&stack0x00000058 + lVar9,&UNK_14367f8f3,&stack0x00000290 + lVar9);
            *(undefined8 *)(&stack0x00000297 + lVar9) = *(undefined8 *)(&stack0x00000058 + lVar9);
            *(undefined8 *)(&stack0x0000029f + lVar9) = *(undefined8 *)(&stack0x00000060 + lVar9);
            uVar11 = *(undefined8 *)(&stack0x00000068 + lVar9);
            goto LAB_142b61d6e;
          }
          *(uint *)(&stack0xfffffffffffffff8 + lVar9) = uVar20;
          *(undefined1 (*) [16])(&stack0x00000180 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000170 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000160 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000150 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000140 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000130 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000120 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000110 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000100 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000f0 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000e0 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000d0 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000c0 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000b0 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x000000a0 + lVar9) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(&stack0x00000090 + lVar9) = (undefined1  [16])0x0;
          uVar22 = uVar22 & 0xffffffff;
          uVar17 = uVar14 + uVar22;
          uVar16 = uVar17;
          if (uVar13 <= uVar17) {
            uVar16 = uVar13;
          }
          uVar13 = uVar16 - uVar14;
          if (uVar22 < uVar13) {
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61eba;
            pdb_142dc8420(0,uVar13,uVar22,&UNK_14367ff70);
            pcVar5 = (code *)swi(3);
            puVar12 = (undefined8 *)(*pcVar5)();
            return puVar12;
          }
          if (uVar17 < uVar14) goto LAB_142b61e9a;
          *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61ac6;
          pub_142e32760(&stack0x00000090 + lVar9,lVar2 + uVar14,uVar13);
          param_2 = *(longlong *)((longlong)&lStackX_18 + lVar9);
          *(ulonglong *)(param_2 + 29000) = uVar16;
          if (uVar13 != uVar22) {
            *(undefined **)(&stack0x00000190 + lVar9) = &UNK_14367fec5;
            *(undefined8 *)(&stack0x00000198 + lVar9) = 0x24;
            *(undefined1 **)(&stack0x00000290 + lVar9) = &stack0x00000190 + lVar9;
            *(code **)(&stack0x00000298 + lVar9) = pdb_1402ed400;
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61dff;
            pdb_140f60760(&stack0x00000078 + lVar9,&UNK_14367f9c8,&stack0x00000290 + lVar9);
            (&stack0x00000070)[lVar9] = 0;
            puVar12 = (undefined8 *)(&stack0x00000070 + lVar9);
LAB_142b61e67:
            uVar11 = *puVar12;
            uVar3 = puVar12[1];
            uVar6 = puVar12[3];
            puVar4 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar9);
            puVar4[2] = puVar12[2];
            puVar4[3] = uVar6;
            *puVar4 = uVar11;
            puVar4[1] = uVar3;
            return puVar4;
          }
          puVar15 = &stack0x00000190 + lVar9;
          if (bVar1 >> 4 == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61b5c;
            pub_142e32760(puVar15,&stack0x00000090 + lVar9,0x100);
            (&stack0xffffffffffffffe0)[lVar9] = *(undefined1 *)(param_2 + 0x71c5);
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61b7f;
            pdb_140dc1b30(&stack0x00000290 + lVar9,(longlong)&stack0x00000000 + lVar9,puVar15,1);
            if ((&stack0x00000290)[lVar9] != '\0') {
              puVar12 = (undefined8 *)(&stack0x0000102c + lVar9);
              *(undefined8 *)(&stack0x0000103c + lVar9) = *(undefined8 *)(&stack0x000002a8 + lVar9);
              *(undefined8 *)(&stack0x00001044 + lVar9) = *(undefined8 *)(&stack0x000002b0 + lVar9);
              *(undefined8 *)(&stack0x0000102c + lVar9) = *(undefined8 *)(&stack0x00000298 + lVar9);
              *(undefined8 *)(&stack0x00001034 + lVar9) = *(undefined8 *)(&stack0x000002a0 + lVar9);
              goto LAB_142b61e67;
            }
            puVar15 = &stack0x00001028 + lVar9;
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61bab;
            pub_142e32760(puVar15,&stack0x00000294 + lVar9,0xd94);
            lVar10 = 0x458;
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61b01;
            pub_142e32760(puVar15,&stack0x00000090 + lVar9,0x100);
            (&stack0xffffffffffffffe0)[lVar9] = *(undefined1 *)(param_2 + 0x71c5);
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61b24;
            pdb_140dc1b30(&stack0x00000290 + lVar9,(longlong)&stack0x00000000 + lVar9,puVar15,0);
            if ((&stack0x00000290)[lVar9] != '\0') {
              puVar12 = (undefined8 *)(&stack0x00001dc0 + lVar9);
              *(undefined8 *)(&stack0x00001dd0 + lVar9) = *(undefined8 *)(&stack0x000002a8 + lVar9);
              *(undefined8 *)(&stack0x00001dd8 + lVar9) = *(undefined8 *)(&stack0x000002b0 + lVar9);
              *(undefined8 *)(&stack0x00001dc0 + lVar9) = *(undefined8 *)(&stack0x00000298 + lVar9);
              *(undefined8 *)(&stack0x00001dc8 + lVar9) = *(undefined8 *)(&stack0x000002a0 + lVar9);
              goto LAB_142b61e67;
            }
            puVar15 = &stack0x00001dbc + lVar9;
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61b50;
            pub_142e32760(puVar15,&stack0x00000294 + lVar9,0xd94);
            lVar10 = 0x3aa8;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x142b61bcb;
          pub_142e32760((ulonglong)uVar18 * 0xd94 + lVar10 + param_2,puVar15,0xd94);
        } while (0x10 < uVar20);
      }
      if (uVar20 == 0) {
        param_1 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar9);
        *(undefined1 *)param_1 = 0xd;
      }
      else {
        param_1 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar9);
        *(undefined1 *)param_1 = 1;
        param_1[1] = &UNK_14367f8d5;
        param_1[2] = 0x1e;
      }
    }
  }
  else {
LAB_142b61c06:
    *(undefined1 *)param_1 = 1;
    param_1[1] = &UNK_14367f40b;
    param_1[2] = 0xd;
  }
  return param_1;
}

