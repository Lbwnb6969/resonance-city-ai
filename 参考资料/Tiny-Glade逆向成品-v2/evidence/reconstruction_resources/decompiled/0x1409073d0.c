// Matched PDB: rkyv::impls::core::impl$15::deserialize_unsized<asset::foliage::ArchivedGrass2RuntimeExemplarAsset,asset::foliage::Grass2RuntimeExemplarAsset,rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error> >
// VA 0x1409073d0, PDB extent 2945 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   rkyv::impls::core::impl$15::deserialize_unsized<asset::foliage::ArchivedGrass2RuntimeExemplarAsset,asset::foliage::Grass2RuntimeExemplarAsset,rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error>
   >
   Extent: 2945 bytes. No whole-program auto-analysis. */

undefined8 pdb_1409073d0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    lStack_120 = param_2 * 0x70 + param_1;
    lVar23 = param_1 + 0x3c;
    lVar19 = 0;
    uStack_128 = param_3;
    do {
      pdb_14150fa80(&lStack_160,param_1,uStack_128);
      uVar6 = uStack_150;
      if (SBORROW8(0,lStack_160)) {
        return CONCAT71((int7)((ulonglong)-lStack_160 >> 8),1);
      }
      lStack_a8 = lStack_160;
      uStack_a0 = uStack_158;
      uStack_148 = *(undefined8 *)(param_1 + 0x10);
      uStack_140 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      uStack_c0 = (ulonglong)*(uint *)(param_1 + 0x28);
      lVar18 = uStack_c0 * 4;
      lStack_d0 = 4;
      lVar25 = 4;
      if (uStack_c0 != 0) {
        pdb_14007ee60();
        lVar25 = func_0x0001406abab0(lVar18,4);
        if (lVar25 == 0) {
          pdb_142dc7e11(4,lVar18);
          goto LAB_140907abf;
        }
        func_0x000142e32760(lVar25,(longlong)*(int *)(param_1 + 0x24) + param_1 + 0x24,lVar18);
      }
      uStack_138 = uVar6;
      uStack_d8 = (ulonglong)*(uint *)(param_1 + 0x30);
      lVar14 = uStack_d8 * 4;
      lStack_b8 = lVar25;
      if (uStack_d8 != 0) {
        pdb_14007ee60();
        lVar25 = func_0x0001406abab0(lVar14,4);
        if (lVar25 == 0) {
          lStack_98 = lVar18;
          pdb_142dc7e11(4,lVar14);
          goto LAB_140907abf;
        }
        lStack_d0 = lVar25;
        func_0x000142e32760(lVar25,(longlong)*(int *)(param_1 + 0x2c) + param_1 + 0x2c,lVar14);
      }
      uStack_e8 = (ulonglong)*(uint *)(param_1 + 0x38);
      lStack_e0 = uStack_e8 * 0x14;
      lVar25 = 4;
      lStack_100 = lVar14;
      if (uStack_e8 != 0) {
        pdb_14007ee60();
        lVar14 = lStack_e0;
        lVar25 = func_0x0001406abab0(lStack_e0,4);
        if (lVar25 == 0) {
          lStack_98 = lVar18;
          pdb_142dc7e11(4,lVar14);
          goto LAB_140907abf;
        }
        lVar18 = (longlong)*(int *)(param_1 + 0x34);
        uVar17 = lVar14 - 0x14;
        if (uVar17 < 0x14) {
          puVar20 = (undefined8 *)(param_1 + 0x34 + lVar18);
          lVar24 = 0;
        }
        else {
          uVar17 = uVar17 / 0x14 + 1;
          lVar18 = lVar18 + param_1;
          lVar24 = 0;
          lVar14 = 0;
          do {
            *(undefined8 *)(lVar25 + lVar14) = *(undefined8 *)(lVar18 + 0x34 + lVar14);
            *(undefined8 *)(lVar25 + 8 + lVar14) = *(undefined8 *)(lVar18 + 0x3c + lVar14);
            *(undefined4 *)(lVar25 + 0x10 + lVar14) = *(undefined4 *)(lVar18 + 0x44 + lVar14);
            *(undefined8 *)(lVar25 + 0x14 + lVar14) = *(undefined8 *)(lVar18 + 0x48 + lVar14);
            *(undefined4 *)(lVar25 + 0x24 + lVar14) = *(undefined4 *)(lVar18 + 0x58 + lVar14);
            *(undefined8 *)(lVar25 + 0x1c + lVar14) = *(undefined8 *)(lVar18 + 0x50 + lVar14);
            lVar14 = lVar14 + 0x28;
            lVar24 = lVar24 + -2;
          } while (-lVar24 != (uVar17 & 0xfffffffffffffffe));
          if ((uVar17 & 1) == 0) goto LAB_140907791;
          lVar24 = -lVar24;
          puVar20 = (undefined8 *)(lVar14 + lVar18 + 0x34);
        }
        *(undefined8 *)(lVar25 + lVar24 * 0x14) = *puVar20;
        *(undefined8 *)(lVar25 + 8 + lVar24 * 0x14) = puVar20[1];
        *(undefined4 *)(lVar25 + 0x10 + lVar24 * 0x14) = *(undefined4 *)(puVar20 + 2);
      }
LAB_140907791:
      lVar14 = 4;
      uStack_f8 = (ulonglong)*(uint *)(param_1 + 0x40);
      lVar18 = uStack_f8 * 8;
      lStack_130 = lVar19;
      lStack_f0 = lVar18;
      lStack_b0 = lVar25;
      if (uStack_f8 != 0) {
        pdb_14007ee60();
        lVar14 = func_0x0001406abab0(lVar18);
        if (lVar14 == 0) {
          pdb_142dc7e11(4,lVar18);
          goto LAB_140907abf;
        }
        lVar19 = (longlong)*(int *)(param_1 + 0x3c);
        puVar20 = (undefined8 *)(param_1 + 0x3c + lVar19);
        if (lVar18 - 8U < 0x18) {
          uVar17 = 0;
          puVar15 = puVar20;
        }
        else {
          uVar21 = (lVar18 - 8U >> 3) + 1;
          uVar17 = uVar21 & 0xfffffffffffffffc;
          puVar15 = puVar20 + uVar17;
          lVar19 = lVar19 + lVar23;
          uVar22 = 0;
          do {
            puVar1 = (undefined4 *)(lVar19 + uVar22 * 8);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar11 = puVar1[3];
            puVar16 = (undefined8 *)(lVar19 + 0x10 + uVar22 * 8);
            uVar6 = *puVar16;
            uVar7 = puVar16[1];
            puVar2 = (undefined4 *)(lVar14 + uVar22 * 8);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar11;
            puVar16 = (undefined8 *)(lVar14 + 0x10 + uVar22 * 8);
            *puVar16 = uVar6;
            puVar16[1] = uVar7;
            uVar22 = uVar22 + 4;
          } while (uVar17 != uVar22);
          if (uVar21 == uVar17) goto LAB_140907853;
        }
        puVar16 = (undefined8 *)(lVar14 + uVar17 * 8);
        do {
          uVar6 = *puVar15;
          puVar15 = puVar15 + 1;
          *puVar16 = uVar6;
          puVar16 = puVar16 + 1;
        } while (puVar15 != (undefined8 *)((longlong)puVar20 + lStack_f0));
      }
LAB_140907853:
      uVar6 = *(undefined8 *)(param_1 + 0x44);
      uVar4 = *(undefined4 *)(param_1 + 0x4c);
      uStack_110 = (ulonglong)*(uint *)(param_1 + 0x54);
      lVar19 = uStack_110 * 0x30;
      lStack_118 = lVar19;
      lStack_c8 = lVar14;
      if (uStack_110 == 0) {
        lStack_98 = 0x10;
      }
      else {
        pdb_14007ee60();
        lVar18 = func_0x0001406abab0(lVar19,0x10);
        if (lVar18 == 0) {
          pdb_142dc7e11(0x10,lVar19);
          goto LAB_140907abf;
        }
        lVar25 = (longlong)*(int *)(param_1 + 0x50);
        lStack_108 = lVar23;
        lStack_98 = lVar18;
        if (lVar19 - 0x30U < 0x30) {
          puVar20 = (undefined8 *)(param_1 + 0x50 + lVar25);
          lVar14 = 0;
        }
        else {
          uVar17 = (lVar19 - 0x30U) / 0x30 + 1;
          lVar25 = lVar25 + param_1;
          lVar14 = 0;
          lVar19 = 0;
          do {
            uVar7 = *(undefined8 *)(lVar25 + 0x50 + lVar19);
            uVar8 = *(undefined8 *)(lVar25 + 0x60 + lVar19);
            uVar9 = *(undefined8 *)(lVar25 + 0x68 + lVar19);
            uVar5 = *(undefined4 *)(lVar25 + 0x70 + lVar19);
            *(undefined8 *)(lVar18 + 8 + lVar19) = *(undefined8 *)(lVar25 + 0x58 + lVar19);
            *(undefined8 *)(lVar18 + lVar19) = uVar7;
            *(undefined8 *)(lVar18 + 0x18 + lVar19) = uVar9;
            *(undefined8 *)(lVar18 + 0x10 + lVar19) = uVar8;
            *(undefined4 *)(lVar18 + 0x20 + lVar19) = uVar5;
            puVar2 = (undefined4 *)(lVar25 + 0x80 + lVar19);
            uVar11 = puVar2[1];
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            puVar20 = (undefined8 *)(lVar25 + 0x90 + lVar19);
            uVar7 = *puVar20;
            uVar8 = puVar20[1];
            uVar5 = *(undefined4 *)(lVar25 + 0xa0 + lVar19);
            puVar1 = (undefined4 *)(lVar18 + 0x30 + lVar19);
            *puVar1 = *puVar2;
            puVar1[1] = uVar11;
            puVar1[2] = uVar12;
            puVar1[3] = uVar13;
            puVar20 = (undefined8 *)(lVar18 + 0x40 + lVar19);
            *puVar20 = uVar7;
            puVar20[1] = uVar8;
            *(undefined4 *)(lVar18 + 0x50 + lVar19) = uVar5;
            lVar19 = lVar19 + 0x60;
            lVar14 = lVar14 + -2;
          } while (-lVar14 != (uVar17 & 0xfffffffffffffffe));
          if ((uVar17 & 1) == 0) goto LAB_1409079c6;
          lVar14 = -lVar14;
          puVar20 = (undefined8 *)(lVar19 + lVar25 + 0x50);
        }
        uVar7 = puVar20[1];
        uVar8 = puVar20[3];
        uVar9 = puVar20[2];
        uVar5 = *(undefined4 *)(puVar20 + 4);
        lVar14 = lVar14 * 0x30;
        *(undefined8 *)(lVar18 + lVar14) = *puVar20;
        *(undefined8 *)(lVar18 + 8 + lVar14) = uVar7;
        *(undefined8 *)(lVar18 + 0x10 + lVar14) = uVar9;
        *(undefined8 *)(lVar18 + 0x18 + lVar14) = uVar8;
        *(undefined4 *)(lVar18 + 0x20 + lVar14) = uVar5;
      }
LAB_1409079c6:
      lVar19 = lStack_130;
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x60);
      if (uVar17 == 0) {
        lVar18 = 2;
      }
      else {
        lVar25 = uVar17 * 2;
        pdb_14007ee60();
        lVar18 = func_0x0001406abab0(lVar25,2);
        if (lVar18 == 0) {
          pdb_142dc7e11(2,lVar25);
LAB_140907abf:
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        func_0x000142e32760(lVar18,(longlong)*(int *)(param_1 + 0x5c) + param_1 + 0x5c,lVar25);
      }
      lVar25 = lVar19 * 0xd0;
      *(undefined8 *)(param_4 + 8 + lVar25) = uStack_140;
      *(undefined8 *)(param_4 + lVar25) = uStack_148;
      *(longlong *)(param_4 + 0x10 + lVar25) = lStack_a8;
      *(undefined8 *)(param_4 + 0x18 + lVar25) = uStack_a0;
      *(undefined8 *)(param_4 + 0x20 + lVar25) = uStack_138;
      *(ulonglong *)(param_4 + 0x28 + lVar25) = uStack_c0;
      *(longlong *)(param_4 + 0x30 + lVar25) = lStack_b8;
      *(ulonglong *)(param_4 + 0x38 + lVar25) = uStack_c0;
      *(ulonglong *)(param_4 + 0x40 + lVar25) = uStack_d8;
      *(longlong *)(param_4 + 0x48 + lVar25) = lStack_d0;
      *(ulonglong *)(param_4 + 0x50 + lVar25) = uStack_d8;
      *(ulonglong *)(param_4 + 0x58 + lVar25) = uStack_e8;
      *(longlong *)(param_4 + 0x60 + lVar25) = lStack_b0;
      *(ulonglong *)(param_4 + 0x68 + lVar25) = uStack_e8;
      *(ulonglong *)(param_4 + 0x70 + lVar25) = uStack_f8;
      *(longlong *)(param_4 + 0x78 + lVar25) = lStack_c8;
      *(ulonglong *)(param_4 + 0x80 + lVar25) = uStack_f8;
      *(ulonglong *)(param_4 + 0x88 + lVar25) = uStack_110;
      *(longlong *)(param_4 + 0x90 + lVar25) = lStack_98;
      *(ulonglong *)(param_4 + 0x98 + lVar25) = uStack_110;
      *(ulonglong *)(param_4 + 0xa0 + lVar25) = uVar17;
      *(longlong *)(param_4 + 0xa8 + lVar25) = lVar18;
      *(ulonglong *)(param_4 + 0xb0 + lVar25) = uVar17;
      *(undefined4 *)(param_4 + 0xb8 + lVar25) = uVar3;
      *(undefined8 *)(param_4 + 0xbc + lVar25) = uVar6;
      *(undefined4 *)(param_4 + 0xc4 + lVar25) = uVar4;
      *(undefined4 *)(param_4 + 200 + lVar25) = uVar5;
      param_1 = param_1 + 0x70;
      lVar19 = lVar19 + 1;
      lVar23 = lVar23 + 0x70;
    } while (param_1 != lStack_120);
  }
  return 0;
}

