// VA 0x1408bc5b0, PDB extent 2074 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::assemble_wooden_railing_for_side
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::assemble_wooden_railing_for_side
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
   Extent: 2074 */

void pdb_1408bc5b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
                  longlong param_9,ulonglong param_10,ushort param_11,char param_12,
                  undefined8 param_13,undefined1 param_14,longlong *param_15,undefined8 param_16,
                  undefined8 param_17)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  uint uVar11;
  byte *pbVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  float fVar18;
  undefined4 uVar19;
  float extraout_XMM0_Da;
  float fVar20;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulonglong uStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  longlong lStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  ulonglong *puStack_d0;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  ulonglong *puStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if ((param_11 & 1) != 0) {
    if (param_15[2] == 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(1,1,&UNK_143015d28);
    }
    if (param_15[2] == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143015d10);
    }
    puVar6 = (undefined8 *)param_15[1];
    fVar18 = *(float *)(puVar6 + 1) * _DAT_142e382c0;
    fVar20 = *(float *)((longlong)puVar6 + 0x14) * _DAT_142e3798c;
    *puVar6 = CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)puVar6 + 0xc) >> 0x20) *
                       _UNK_142e37a94 + (float)((ulonglong)*puVar6 >> 0x20) * _UNK_1430159c4,
                       (float)*(undefined8 *)((longlong)puVar6 + 0xc) * _DAT_142e37a90 +
                       (float)*puVar6 * _DAT_1430159c0);
    *(float *)(puVar6 + 1) = fVar20 + fVar18;
  }
  if ((param_11 & 0x100) != 0) {
    lVar7 = param_15[2];
    lVar13 = lVar7 + -1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0xffffffffffffffff,0,&UNK_143015d40);
    }
    if (lVar7 == 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0xffffffffffffffff,1,&UNK_143015d58);
    }
    lVar8 = param_15[1];
    fVar18 = *(float *)(lVar8 + 8 + lVar13 * 0xc) * _DAT_142e382c0;
    fVar20 = *(float *)(lVar8 + 8 + (lVar7 + -2) * 0xc) * _DAT_142e3798c;
    uVar4 = *(undefined8 *)(lVar8 + lVar13 * 0xc);
    uVar5 = *(undefined8 *)(lVar8 + (lVar7 + -2) * 0xc);
    *(ulonglong *)(lVar8 + lVar13 * 0xc) =
         CONCAT44((float)((ulonglong)uVar5 >> 0x20) * _UNK_142e37a94 +
                  (float)((ulonglong)uVar4 >> 0x20) * _UNK_1430159c4,
                  (float)uVar5 * _DAT_142e37a90 + (float)uVar4 * _DAT_1430159c0);
    *(float *)(lVar8 + 8 + lVar13 * 0xc) = fVar20 + fVar18;
  }
  pdb_14148ba90(&uStack_a8,param_15,
                *(undefined4 *)(&UNK_143015920 + (ulonglong)(param_12 == '\x04') * 4),1);
  if (!SBORROW8(0,uStack_a8)) {
    uStack_f8 = uStack_78;
    uStack_108 = (undefined4)uStack_88;
    uStack_104 = uStack_88._4_4_;
    uStack_100 = uStack_80;
    uStack_fc = uStack_7c;
    uStack_118 = (undefined4)uStack_98;
    uStack_114 = uStack_98._4_4_;
    uStack_110 = (undefined4)uStack_90;
    uStack_10c = uStack_90._4_4_;
    uStack_128 = (undefined4)uStack_a8;
    uStack_124 = uStack_a8._4_4_;
    uStack_120 = (undefined4)uStack_a0;
    uStack_11c = uStack_a0._4_4_;
    plVar1 = param_15 + 1;
    puVar2 = (ulonglong *)(param_15 + 2);
    plStack_b0 = (longlong *)&uStack_120;
    plVar10 = (longlong *)&uStack_128;
    if (param_12 == '\x04' && uStack_98 < 3U) {
      plStack_b0 = plVar1;
      plVar10 = param_15;
    }
    puVar15 = (ulonglong *)&uStack_118;
    if (param_12 == '\x04' && uStack_98 < 3U) {
      puVar15 = puVar2;
    }
    uStack_a8 = plVar10[1];
    uStack_a0 = (byte *)(uStack_a8 + plVar10[2] * 0xc);
    uStack_98 = param_15;
    pdb_141499190(&lStack_e8,&uStack_a8);
    puStack_60 = puVar15;
    uStack_58 = *puVar15;
    uVar16 = uStack_58 * 4;
    puStack_d0 = puVar2;
    uStack_68 = uVar16;
    if (uStack_58 == 0) {
      pbStack_50 = (byte *)0x4;
    }
    else {
      pdb_14007ee60();
      pbStack_50 = pub_1406abae0(uVar16,4);
      if (pbStack_50 == (byte *)0x0) {
        pdb_142dc7e2a(4,uStack_68);
        goto LAB_1408bcc53;
      }
    }
    plStack_c0 = plVar1;
    if (param_8 == 0) {
      uStack_a8 = 0;
      uStack_a0 = (byte *)0x4;
      uStack_98 = (longlong *)0x0;
    }
    else {
      uVar16 = param_8 * 0xc;
      pdb_14007ee60();
      pbVar12 = pub_1406abab0(uVar16,4);
      if (pbVar12 == (byte *)0x0) {
        pdb_142dc7e2a(4,uVar16);
LAB_1408bcc53:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uStack_a8 = param_8;
      uStack_a0 = pbVar12;
      pub_142e32760(pbVar12,param_7,uVar16);
      uStack_98 = (longlong *)param_8;
    }
    puVar2 = puStack_60;
    uStack_c8 = param_4;
    pdb_140080930(&uStack_160,&uStack_a8,1);
    puVar17 = (undefined4 *)*plStack_b0;
    uVar16 = *puVar2;
    if (!SBORROW8(0,CONCAT44(uStack_15c,uStack_160))) {
      uStack_a8 = CONCAT44(uStack_15c,uStack_160);
      uStack_a0 = (byte *)CONCAT44(uStack_154,uStack_158);
      puVar3 = puVar17 + uVar16 * 3;
      uVar16 = 0;
      uStack_b8 = param_1;
      uStack_6c = param_2;
      uStack_88 = pbStack_140;
      uStack_98 = (longlong *)uStack_150;
      uStack_90 = lStack_148;
      uStack_70 = param_3;
      for (; puVar17 != puVar3; puVar17 = puVar17 + 3) {
        uVar19 = pdb_14148c970(&uStack_160,*puVar17,puVar17[2],&UNK_143015d70);
        uVar11 = pdb_14148c300(&uStack_160,uVar19);
        uVar14 = (ulonglong)uVar11;
        if (param_10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14,param_10,&UNK_143015d88);
        }
        if (param_10 <= uVar14 + 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14 + 1,param_10,&UNK_143015d88);
        }
        if (uStack_58 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar16,uStack_58,&UNK_143015da0);
        }
        fVar18 = *(float *)(param_9 + uVar14 * 4);
        *(float *)(pbStack_50 + uVar16 * 4) =
             (*(float *)(param_9 + 4 + uVar14 * 4) - fVar18) * extraout_XMM0_Da + fVar18;
        uVar16 = uVar16 + 1;
      }
      if (uStack_a8 != 0) {
        pub_1406abac0(uStack_a0,uStack_a8 * 0xc,4);
      }
      puVar2 = puStack_60;
      param_2 = uStack_6c;
      param_3 = uStack_70;
      param_1 = uStack_b8;
      if (uStack_90 != 0) {
        pub_1406abac0(uStack_88,uStack_90 << 2,4);
      }
      puVar17 = (undefined4 *)*plStack_b0;
      uVar16 = *puVar2;
    }
    pdb_1408bae10(uStack_c8,param_5,param_6,puVar17,uVar16,pbStack_50,uStack_58,param_14,param_16,
                  param_17,0x101);
    pdb_1408b9980(param_1,param_2,param_3,param_5,param_14,*plStack_c0,*puStack_d0,pbStack_e0,
                  uStack_d8);
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_50,uStack_68,4);
    }
    if (lStack_e8 != 0) {
      pub_1406abac0(pbStack_e0,lStack_e8 << 3,4);
    }
    if (CONCAT44(uStack_124,uStack_128) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_11c,uStack_120),CONCAT44(uStack_124,uStack_128) * 0xc,4)
      ;
    }
    if (CONCAT44(uStack_10c,uStack_110) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_104,uStack_108),CONCAT44(uStack_10c,uStack_110) << 2,4);
    }
  }
  if (*param_15 != 0) {
    pub_1406abac0((byte *)param_15[1],*param_15 * 0xc,4);
  }
  if (param_15[3] != 0) {
    pub_1406abac0((byte *)param_15[4],param_15[3] << 2,4);
  }
  return;
}

