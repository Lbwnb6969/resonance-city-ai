// VA 0x1418c0a20, PDB extent 147 bytes
// country_core::resources::session::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001418c21dc) overlaps instruction at (ram,0x0001418c21da)
    */
/* WARNING: Removing unreachable block (ram,0x0001418c15d2) */
/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 147 */

byte * pdb_1418c0a20(byte *param_1,byte *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [11];
  undefined1 auVar7 [12];
  undefined1 auVar8 [13];
  undefined1 auVar9 [14];
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  uint uVar22;
  undefined8 uVar23;
  longlong lVar24;
  byte *pbVar25;
  ulonglong uVar26;
  longlong *plVar27;
  byte *pbVar28;
  undefined8 unaff_RBX;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined1 *unaff_RBP;
  longlong *plVar32;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong *plVar33;
  undefined *puVar34;
  code *UNRECOVERED_JUMPTABLE;
  char in_XMM0_Ba;
  char in_XMM0_Bb;
  char in_XMM0_Bc;
  char cVar35;
  char in_XMM0_Bd;
  char cVar36;
  char in_XMM0_Be;
  undefined1 extraout_XMM0_Be;
  undefined1 extraout_XMM0_Be_00;
  undefined1 extraout_XMM0_Be_01;
  char cVar37;
  char in_XMM0_Bf;
  undefined1 extraout_XMM0_Bf;
  undefined1 extraout_XMM0_Bf_00;
  undefined1 extraout_XMM0_Bf_01;
  char cVar38;
  char in_XMM0_Bg;
  undefined1 extraout_XMM0_Bg;
  undefined1 extraout_XMM0_Bg_00;
  undefined1 extraout_XMM0_Bg_01;
  char cVar39;
  char in_XMM0_Bh;
  undefined1 extraout_XMM0_Bh;
  undefined1 extraout_XMM0_Bh_00;
  undefined1 extraout_XMM0_Bh_01;
  char cVar40;
  char in_XMM0_Bi;
  undefined1 extraout_XMM0_Bi;
  undefined1 extraout_XMM0_Bi_00;
  undefined1 extraout_XMM0_Bi_01;
  char cVar41;
  char in_XMM0_Bj;
  undefined1 extraout_XMM0_Bj;
  undefined1 extraout_XMM0_Bj_00;
  undefined1 extraout_XMM0_Bj_01;
  char cVar42;
  char in_XMM0_Bk;
  undefined1 extraout_XMM0_Bk;
  undefined1 extraout_XMM0_Bk_00;
  undefined1 extraout_XMM0_Bk_01;
  char cVar43;
  char in_XMM0_Bl;
  undefined1 extraout_XMM0_Bl;
  undefined1 extraout_XMM0_Bl_00;
  undefined1 extraout_XMM0_Bl_01;
  char cVar44;
  char in_XMM0_Bm;
  undefined1 extraout_XMM0_Bm;
  undefined1 extraout_XMM0_Bm_00;
  undefined1 extraout_XMM0_Bm_01;
  char cVar45;
  char in_XMM0_Bn;
  undefined1 extraout_XMM0_Bn;
  undefined1 extraout_XMM0_Bn_00;
  undefined1 extraout_XMM0_Bn_01;
  char cVar46;
  char in_XMM0_Bo;
  undefined1 extraout_XMM0_Bo;
  undefined1 extraout_XMM0_Bo_00;
  undefined1 extraout_XMM0_Bo_01;
  char cVar47;
  char in_XMM0_Bp;
  undefined1 extraout_XMM0_Bp;
  undefined1 extraout_XMM0_Bp_00;
  undefined1 extraout_XMM0_Bp_01;
  byte bVar48;
  undefined8 uStack_28;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined8 uStack_10;
  
  puVar29 = &uStack_28;
  pbVar28 = param_2 + 8;
  plVar33 = (longlong *)&UNK_14335695c;
  uVar26 = (ulonglong)*(int *)(&UNK_14335695c + (ulonglong)*param_1 * 4);
  plVar27 = (longlong *)(&UNK_14335695c + uVar26);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar34 = &UNK_143356231;
    goto code_r0x0001418c0a73;
  case 1:
    lVar24 = pdb_14054e5c0(param_2,pbVar28,&UNK_143356237,5);
    uVar10 = extraout_XMM0_Be_01;
    uVar11 = extraout_XMM0_Bf_01;
    uVar12 = extraout_XMM0_Bg_01;
    uVar13 = extraout_XMM0_Bh_01;
    uVar14 = extraout_XMM0_Bi_01;
    uVar15 = extraout_XMM0_Bj_01;
    uVar16 = extraout_XMM0_Bk_01;
    uVar17 = extraout_XMM0_Bl_01;
    uVar18 = extraout_XMM0_Bm_01;
    uVar19 = extraout_XMM0_Bn_01;
    uVar20 = extraout_XMM0_Bo_01;
    uVar21 = extraout_XMM0_Bp_01;
    goto joined_r0x0001418c0aa5;
  case 2:
    lVar24 = pdb_14054e5c0(param_2,pbVar28,&UNK_14335623c,7);
    uVar10 = extraout_XMM0_Be;
    uVar11 = extraout_XMM0_Bf;
    uVar12 = extraout_XMM0_Bg;
    uVar13 = extraout_XMM0_Bh;
    uVar14 = extraout_XMM0_Bi;
    uVar15 = extraout_XMM0_Bj;
    uVar16 = extraout_XMM0_Bk;
    uVar17 = extraout_XMM0_Bl;
    uVar18 = extraout_XMM0_Bm;
    uVar19 = extraout_XMM0_Bn;
    uVar20 = extraout_XMM0_Bo;
    uVar21 = extraout_XMM0_Bp;
    goto joined_r0x0001418c0aa5;
  case 3:
    puVar34 = &UNK_143356243;
    goto code_r0x0001418c0a73;
  case 4:
    puVar34 = &UNK_143356249;
code_r0x0001418c0a73:
    lVar24 = pdb_14054e5c0(param_2,pbVar28,puVar34,6);
    uVar10 = extraout_XMM0_Be_00;
    uVar11 = extraout_XMM0_Bf_00;
    uVar12 = extraout_XMM0_Bg_00;
    uVar13 = extraout_XMM0_Bh_00;
    uVar14 = extraout_XMM0_Bi_00;
    uVar15 = extraout_XMM0_Bj_00;
    uVar16 = extraout_XMM0_Bk_00;
    uVar17 = extraout_XMM0_Bl_00;
    uVar18 = extraout_XMM0_Bm_00;
    uVar19 = extraout_XMM0_Bn_00;
    uVar20 = extraout_XMM0_Bo_00;
    uVar21 = extraout_XMM0_Bp_00;
joined_r0x0001418c0aa5:
    if (lVar24 == 0) {
      return (byte *)0x0;
    }
    uStack_10 = 0xfffffffffffffffe;
    uVar22 = CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) ^
             CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)));
    uStack_1c = (undefined1)uVar22;
    uStack_1b = (undefined1)(uVar22 >> 8);
    uStack_1a = (undefined1)(uVar22 >> 0x10);
    uStack_19 = (undefined1)(uVar22 >> 0x18);
    uVar22 = CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) ^
             CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)));
    uStack_18 = (undefined1)uVar22;
    uStack_17 = (undefined1)(uVar22 >> 8);
    uStack_16 = (undefined1)(uVar22 >> 0x10);
    uStack_15 = (undefined1)(uVar22 >> 0x18);
    uVar22 = CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) ^
             CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18)));
    uStack_14 = (undefined1)uVar22;
    uStack_13 = (undefined1)(uVar22 >> 8);
    uStack_12 = (undefined1)(uVar22 >> 0x10);
    uStack_11 = (undefined1)(uVar22 >> 0x18);
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    uStack_1d = 0;
    pdb_14007ee60();
    pbVar28 = pub_1406abab0(0x28,8);
    if (pbVar28 != (byte *)0x0) {
      *(ulonglong *)(pbVar28 + 0x20) =
           CONCAT17(uStack_11,
                    CONCAT16(uStack_12,
                             CONCAT15(uStack_13,
                                      CONCAT14(uStack_14,
                                               CONCAT13(uStack_15,
                                                        CONCAT12(uStack_16,
                                                                 CONCAT11(uStack_17,uStack_18)))))))
      ;
      *(undefined8 *)(pbVar28 + 0x10) = uStack_28;
      *(ulonglong *)(pbVar28 + 0x18) =
           CONCAT17(uStack_19,
                    CONCAT16(uStack_1a,
                             CONCAT15(uStack_1b,
                                      CONCAT14(uStack_1c,
                                               CONCAT13(uStack_1d,
                                                        CONCAT12(uStack_1e,
                                                                 CONCAT11(uStack_1f,uStack_20)))))))
      ;
      pbVar28[0] = 1;
      pbVar28[1] = 0;
      pbVar28[2] = 0;
      pbVar28[3] = 0;
      pbVar28[4] = 0;
      pbVar28[5] = 0;
      pbVar28[6] = 0;
      pbVar28[7] = 0;
      *(longlong *)(pbVar28 + 8) = lVar24;
      return pbVar28;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  case 5:
    *param_2 = *param_2 + (char)param_2;
    param_2[-0x73] = param_2[-0x73] + (char)plVar27;
    UNRECOVERED_JUMPTABLE = (code *)((longlong)*(int *)(uVar26 + 0x6500b0ecc) + (longlong)plVar27);
                    /* WARNING: Could not emulate address calculation at 0x0001418c14f8 */
                    /* WARNING: Treating indirect jump as call */
    pbVar28 = (byte *)(*UNRECOVERED_JUMPTABLE)(plVar27,pbVar28,UNRECOVERED_JUMPTABLE);
    return pbVar28;
  default:
    cVar35 = -(in_XMM0_Bc == UNK_142f87e02);
    cVar36 = -(in_XMM0_Bd == UNK_142f87e03);
    cVar37 = -(in_XMM0_Be == UNK_142f87e04);
    cVar38 = -(in_XMM0_Bf == UNK_142f87e05);
    cVar39 = -(in_XMM0_Bg == UNK_142f87e06);
    cVar40 = -(in_XMM0_Bh == UNK_142f87e07);
    cVar41 = -(in_XMM0_Bi == UNK_142f87e08);
    cVar42 = -(in_XMM0_Bj == UNK_142f87e09);
    cVar43 = -(in_XMM0_Bk == UNK_142f87e0a);
    cVar44 = -(in_XMM0_Bl == UNK_142f87e0b);
    cVar45 = -(in_XMM0_Bm == UNK_142f87e0c);
    cVar46 = -(in_XMM0_Bn == UNK_142f87e0d);
    cVar47 = -(in_XMM0_Bo == UNK_142f87e0e);
    bVar48 = -(in_XMM0_Bp == UNK_142f87e0f);
    auVar4[1] = -(in_XMM0_Bb == UNK_142f87e01);
    auVar4[0] = -(in_XMM0_Ba == UNK_142f87e00);
    auVar4[2] = cVar35;
    auVar4[3] = cVar36;
    auVar4[4] = cVar37;
    auVar4[5] = cVar38;
    auVar4[6] = cVar39;
    auVar4[7] = cVar40;
    auVar4[8] = cVar41;
    auVar4[9] = cVar42;
    auVar4[10] = cVar43;
    auVar4[0xb] = cVar44;
    auVar4[0xc] = cVar45;
    auVar4[0xd] = cVar46;
    auVar4[0xe] = cVar47;
    auVar4[0xf] = bVar48;
    auVar5[1] = -(in_XMM0_Bb == UNK_142f87e01);
    auVar5[0] = -(in_XMM0_Ba == UNK_142f87e00);
    auVar5[2] = cVar35;
    auVar5[3] = cVar36;
    auVar5[4] = cVar37;
    auVar5[5] = cVar38;
    auVar5[6] = cVar39;
    auVar5[7] = cVar40;
    auVar5[8] = cVar41;
    auVar5[9] = cVar42;
    auVar5[10] = cVar43;
    auVar5[0xb] = cVar44;
    auVar5[0xc] = cVar45;
    auVar5[0xd] = cVar46;
    auVar5[0xe] = cVar47;
    auVar5[0xf] = bVar48;
    auVar9[1] = cVar36;
    auVar9[0] = cVar35;
    auVar9[2] = cVar37;
    auVar9[3] = cVar38;
    auVar9[4] = cVar39;
    auVar9[5] = cVar40;
    auVar9[6] = cVar41;
    auVar9[7] = cVar42;
    auVar9[8] = cVar43;
    auVar9[9] = cVar44;
    auVar9[10] = cVar45;
    auVar9[0xb] = cVar46;
    auVar9[0xc] = cVar47;
    auVar9[0xd] = bVar48;
    auVar8[1] = cVar37;
    auVar8[0] = cVar36;
    auVar8[2] = cVar38;
    auVar8[3] = cVar39;
    auVar8[4] = cVar40;
    auVar8[5] = cVar41;
    auVar8[6] = cVar42;
    auVar8[7] = cVar43;
    auVar8[8] = cVar44;
    auVar8[9] = cVar45;
    auVar8[10] = cVar46;
    auVar8[0xb] = cVar47;
    auVar8[0xc] = bVar48;
    auVar7[1] = cVar38;
    auVar7[0] = cVar37;
    auVar7[2] = cVar39;
    auVar7[3] = cVar40;
    auVar7[4] = cVar41;
    auVar7[5] = cVar42;
    auVar7[6] = cVar43;
    auVar7[7] = cVar44;
    auVar7[8] = cVar45;
    auVar7[9] = cVar46;
    auVar7[10] = cVar47;
    auVar7[0xb] = bVar48;
    auVar6[1] = cVar39;
    auVar6[0] = cVar38;
    auVar6[2] = cVar40;
    auVar6[3] = cVar41;
    auVar6[4] = cVar42;
    auVar6[5] = cVar43;
    auVar6[6] = cVar44;
    auVar6[7] = cVar45;
    auVar6[8] = cVar46;
    auVar6[9] = cVar47;
    auVar6[10] = bVar48;
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB141(auVar9 >> 7,0) & 1) << 2 | (ushort)(SUB131(auVar8 >> 7,0) & 1) << 3
                 | (ushort)(SUB121(auVar7 >> 7,0) & 1) << 4 |
                 (ushort)(SUB111(auVar6 >> 7,0) & 1) << 5 |
                 (ushort)((byte)(CONCAT19(bVar48,CONCAT18(cVar47,CONCAT17(cVar46,CONCAT16(cVar45,
                                                  CONCAT15(cVar44,CONCAT14(cVar43,CONCAT13(cVar42,
                                                  CONCAT12(cVar41,CONCAT11(cVar40,cVar39))))))))) >>
                                7) & 1) << 6 |
                 (ushort)((byte)(CONCAT18(bVar48,CONCAT17(cVar47,CONCAT16(cVar46,CONCAT15(cVar45,
                                                  CONCAT14(cVar44,CONCAT13(cVar43,CONCAT12(cVar42,
                                                  CONCAT11(cVar41,cVar40)))))))) >> 7) & 1) << 7 |
                 (ushort)((byte)(CONCAT17(bVar48,CONCAT16(cVar47,CONCAT15(cVar46,CONCAT14(cVar45,
                                                  CONCAT13(cVar44,CONCAT12(cVar43,CONCAT11(cVar42,
                                                  cVar41))))))) >> 7) & 1) << 8 |
                 (ushort)((byte)(CONCAT17(bVar48,CONCAT16(cVar47,CONCAT15(cVar46,CONCAT14(cVar45,
                                                  CONCAT13(cVar44,CONCAT12(cVar43,CONCAT11(cVar42,
                                                  cVar41))))))) >> 0xf) & 1) << 9 |
                 (ushort)((byte)(CONCAT15(bVar48,CONCAT14(cVar47,CONCAT13(cVar46,CONCAT12(cVar45,
                                                  CONCAT11(cVar44,cVar43))))) >> 7) & 1) << 10 |
                 (ushort)((byte)(CONCAT14(bVar48,CONCAT13(cVar47,CONCAT12(cVar46,CONCAT11(cVar45,
                                                  cVar44)))) >> 7) & 1) << 0xb |
                 (ushort)((byte)(CONCAT13(bVar48,CONCAT12(cVar47,CONCAT11(cVar46,cVar45))) >> 7) & 1
                         ) << 0xc |
                 (ushort)((byte)(CONCAT12(bVar48,CONCAT11(cVar47,cVar46)) >> 7) & 1) << 0xd |
                 (ushort)((byte)(CONCAT11(bVar48,cVar47) >> 7) & 1) << 0xe |
                (ushort)(bVar48 >> 7) << 0xf) == 0xffff) {
      param_2[1] = 3;
      *param_2 = 0;
      return param_2;
    }
    break;
  case 8:
    uVar22 = (uint)param_2 | (uint)plVar27;
    param_2 = (byte *)(ulonglong)uVar22;
    if (uVar22 == 0) {
      uRam0000000000000001 = 4;
      cRam0000000000000000 = 0;
      return (byte *)0x0;
    }
    break;
  case 0xd:
    if (param_2[0xc] == 0x65 && (uint)plVar27 == 0) {
      param_2[1] = 2;
      *param_2 = 0;
      return param_2;
    }
    break;
  case 0x10:
    if ((plVar27 == (longlong *)0x0) || (0xfffffffebcca96a3 < uVar26)) {
      pbVar28 = (byte *)pdb_140f66e50(param_2,&UNK_143356880,10,&UNK_14335688a);
      return pbVar28;
    }
    if (*(longlong **)pbVar28 == plVar27) {
      param_2[1] = 1;
      *param_2 = 0;
      return param_2;
    }
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x17:
    puVar30 = (undefined8 *)(ulonglong)((int)&uStack_28 + 0x40);
    goto code_r0x0001418c21d9;
  case 0x14:
    puVar29 = (undefined8 *)(ulonglong)((int)&uStack_28 - 0x40);
    unaff_RBP = (undefined1 *)((longlong)puVar29 + 0x40);
    *(undefined8 *)((longlong)puVar29 + 0x38) = 0xfffffffffffffffe;
    if (*plVar27 == -0x7fffffffffffffff) {
      bVar48 = (&UNK_143356964)[uVar26];
      if (6 < (ulonglong)bVar48) {
code_r0x0001418c2220:
        *(undefined8 *)((longlong)puVar29 + 0x40) = *(undefined8 *)((longlong)puVar29 + 0x40);
        *(longlong *)((longlong)puVar29 + 0x38) = unaff_RSI;
        *(undefined8 *)((longlong)puVar29 + 0x30) = unaff_RDI;
        *(undefined8 *)((longlong)puVar29 + 0x28) = unaff_RBX;
        *(undefined8 *)((longlong)puVar29 + 0x20) = 0xfffffffffffffffe;
        lVar24 = *(longlong *)(&UNK_14335696c + uVar26);
        if (lVar24 == 0) {
          uVar23 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(&UNK_143356974 + uVar26);
          uVar23 = *(undefined8 *)(&UNK_14335697c + uVar26);
          *(undefined8 *)((longlong)puVar29 + -0x48) = 0;
          *(longlong *)((longlong)puVar29 + -0x40) = lVar24;
          *(undefined8 *)((longlong)puVar29 + -0x38) = uVar2;
          *(undefined8 *)((longlong)puVar29 + -0x28) = 0;
          *(longlong *)((longlong)puVar29 + -0x20) = lVar24;
          *(undefined8 *)((longlong)puVar29 + -0x18) = uVar2;
        }
        uVar26 = (ulonglong)(lVar24 != 0);
        *(ulonglong *)((longlong)puVar29 + -0x50) = uVar26;
        *(ulonglong *)((longlong)puVar29 + -0x30) = uVar26;
        *(undefined8 *)((longlong)puVar29 + -0x10) = uVar23;
        puVar1 = (undefined1 *)((longlong)puVar29 + -0x50);
        *(undefined8 *)((longlong)puVar29 + -0x78) = 0x1409a4652;
        pdb_14192c4b0((undefined1 *)((longlong)puVar29 + -8),puVar1);
        lVar24 = *(longlong *)((longlong)puVar29 + -8);
        if (lVar24 != 0) {
          do {
            lVar3 = *(longlong *)((longlong)puVar29 + 8);
            *(undefined1 **)((longlong)puVar29 + 0x18) = puVar1;
            *(longlong *)((longlong)puVar29 + 0x10) = lVar3 * 0x20 + lVar24;
            uVar26 = *(ulonglong *)(lVar24 + 0x168 + lVar3 * 0x18);
            if (uVar26 != 0) {
              pbVar28 = *(byte **)(lVar24 + lVar3 * 0x18 + 0x170);
              *(undefined8 *)((longlong)puVar29 + -0x78) = 0x1409a46ad;
              pub_1406abac0(pbVar28,uVar26,1);
            }
            *(undefined8 *)((longlong)puVar29 + -0x78) = 0x1409a46b6;
            pdb_140966d70((longlong *)((longlong)puVar29 + 0x10));
            *(undefined8 *)((longlong)puVar29 + -0x78) = 0x1409a46c2;
            pdb_14192c4b0((undefined1 *)((longlong)puVar29 + -8),puVar1);
            lVar24 = *(longlong *)((longlong)puVar29 + -8);
          } while (lVar24 != 0);
        }
        return (byte *)0x0;
      }
      pbVar25 = &UNK_1433569a0 + *(int *)(&UNK_1433569a0 + (ulonglong)bVar48 * 4);
      switch(bVar48) {
      default:
        goto code_r0x0001418c221a;
      case 3:
        pbVar28 = *(byte **)(&UNK_14335696c + uVar26);
        if (pbVar28 == (byte *)0x0) {
          return pbVar25;
        }
        plVar27 = *(longlong **)(&UNK_143356974 + uVar26);
        plVar33 = (longlong *)0x1;
        break;
      case 4:
        goto code_r0x0001418c21df;
      case 5:
        goto code_r0x0001418c2220;
      }
      goto code_r0x0001418c219d;
    }
    *(longlong *)((longlong)puVar29 + 0x30) = *plVar27;
    *(longlong **)((longlong)puVar29 + 0x28) = plVar27;
    *(undefined **)((longlong)puVar29 + -8) = &UNK_1418c21b8;
    pdb_1409a45e0(&UNK_143356974 + uVar26);
    pbVar28 = *(byte **)((longlong)puVar29 + 0x30);
    pbVar25 = *(byte **)((longlong)puVar29 + 0x28);
    if (SBORROW8(0,(longlong)pbVar28)) {
      return pbVar25;
    }
    if (pbVar28 == (byte *)0x0) {
      return pbVar25;
    }
    plVar27 = *(longlong **)(pbVar25 + 8);
    plVar33 = (longlong *)0x1;
    puVar30 = (undefined8 *)((longlong)puVar29 + 0x40);
code_r0x0001418c21d9:
    uVar23 = *puVar30;
    puVar31 = puVar30 + 1;
code_r0x0001406abac0:
    *(undefined8 *)((longlong)puVar31 + -8) = uVar23;
    *(longlong *)((longlong)puVar31 + -0x10) = unaff_RSI;
    plVar32 = plVar27;
    if ((longlong *)0x10 < plVar33) {
      plVar32 = (longlong *)plVar27[-1];
    }
    *(undefined **)((longlong)puVar31 + -0x40) = &UNK_140f3c37e;
    uVar23 = GetProcessHeap(plVar27,pbVar28);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar28 = (byte *)HeapFree(uVar23,0,plVar32);
    return pbVar28;
  case 0x15:
    *param_2 = *param_2 + (char)param_2;
    puVar29 = &uStack_28;
code_r0x0001418c219d:
    uVar23 = *(undefined8 *)((longlong)puVar29 + 0x40);
    puVar31 = (undefined8 *)((longlong)puVar29 + 0x48);
    goto code_r0x0001406abac0;
  case 0x16:
    plVar27 = plVar33;
code_r0x0001418c21df:
    lVar24 = plVar27[3];
    lVar3 = plVar27[4];
    *(longlong *)(unaff_RBP + -0x10) = lVar24;
    *(longlong **)(unaff_RBP + -0x18) = plVar27;
    *(undefined **)((longlong)puVar29 + -8) = &UNK_1418c21f4;
    pdb_14098ae50(lVar24,lVar3);
    pbVar25 = *(byte **)(unaff_RBP + -0x18);
    if (*(longlong *)(pbVar25 + 0x10) == 0) {
code_r0x0001418c221a:
      return pbVar25;
    }
    pbVar28 = (byte *)(*(longlong *)(pbVar25 + 0x10) << 5);
    plVar33 = (longlong *)0x8;
    plVar27 = *(longlong **)(unaff_RBP + -0x10);
    uVar23 = *(undefined8 *)((longlong)puVar29 + 0x40);
    puVar31 = (undefined8 *)((longlong)puVar29 + 0x48);
    goto code_r0x0001406abac0;
  case 0x18:
    if (uVar26 == 0xfffffffebcca96a5) {
      cRam0000000000000000 = cRam0000000000000000 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(unaff_RSI + 0x3c) =
         (*(int *)(unaff_RSI + 0x3c) - (int)pbVar28) - (uint)(0xfffffffebcca96a3 < uVar26);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_2[1] = 5;
  *param_2 = 0;
  return param_2;
}

