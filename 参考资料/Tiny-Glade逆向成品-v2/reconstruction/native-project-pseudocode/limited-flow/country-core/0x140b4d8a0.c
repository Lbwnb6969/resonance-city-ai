// VA 0x140b4d8a0, PDB extent 146 bytes
// country_core::systems::ui_edit_focus::geo_src_to_edit_subject
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140b5568b) overlaps instruction at (ram,0x000140b55689)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui_edit_focus::geo_src_to_edit_subject
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
   Extent: 146 */

byte ******* pdb_140b4d8a0(byte *******param_1,byte *******param_2)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
  byte ******ppppppbVar4;
  byte ******ppppppbVar5;
  byte ****ppppbVar6;
  byte *****pppppbVar7;
  uint uVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  uint *puVar14;
  float *pfVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  byte *******pppppppbVar19;
  undefined1 uVar20;
  byte *pbVar21;
  char cVar22;
  byte *******unaff_RBX;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  longlong *unaff_RBP;
  longlong *unaff_RSI;
  char *unaff_RDI;
  undefined4 *puVar32;
  byte *pbVar33;
  ulonglong uVar34;
  undefined *puVar35;
  longlong lVar36;
  ushort uVar37;
  longlong in_R10;
  ulonglong uVar38;
  byte ******unaff_R12;
  undefined8 *unaff_R13;
  byte *******unaff_R14;
  longlong *plVar39;
  undefined8 *puVar40;
  undefined8 *unaff_R15;
  undefined4 *puVar41;
  bool bVar42;
  char in_AF;
  int iVar43;
  int iVar44;
  byte bVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  undefined8 extraout_XMM0_Qa;
  float fVar54;
  undefined1 in_XMM0 [16];
  float fVar53;
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  undefined8 uVar56;
  undefined1 in_XMM1 [16];
  code in_XMM2_Ba;
  code in_XMM2_Bb;
  code in_XMM2_Bc;
  code in_XMM2_Bd;
  code in_XMM2_Be;
  code in_XMM2_Bf;
  code in_XMM2_Bg;
  code in_XMM2_Bh;
  code in_XMM2_Bi;
  code in_XMM2_Bj;
  code in_XMM2_Bk;
  code in_XMM2_Bl;
  code in_XMM2_Bm;
  code in_XMM2_Bn;
  code in_XMM2_Bo;
  code in_XMM2_Bp;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float unaff_XMM9_Da;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  byte ******in_stack_00000048;
  undefined1 auStack_38 [32];
  undefined *puStack_18;
  byte *******pppppppbStack_10;
  byte *******pppppppbStack_8;
  uint uVar23;
  undefined1 auVar51 [16];
  
  uVar56 = in_XMM1._0_8_;
  puVar27 = auStack_38;
  puVar25 = auStack_38;
  puVar29 = auStack_38;
  puVar30 = auStack_38;
  puVar31 = auStack_38;
  pcVar12 = (char *)0x0;
  uVar46 = 0;
  uVar11 = 0x4305a380;
  uVar34 = (ulonglong)*(int *)(&UNK_14305a380 + (ulonglong)*(byte *)param_2 * 4);
  bVar42 = 0xfffffffebcfa5c7f < uVar34;
  puVar35 = &UNK_14305a380 + uVar34;
  cVar22 = (char)param_2;
  uVar23 = (uint)param_2;
  bVar45 = (byte)param_1;
  iVar43 = (int)unaff_RDI;
  puVar28 = auStack_38;
  puVar24 = auStack_38;
  puVar26 = auStack_38;
  uVar17 = in_XMM0._0_8_;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)param_2) {
  case 0:
  case 1:
  case 8:
  case 9:
    param_1[1] = param_2[1];
    *(undefined4 *)param_1 = 1;
    return param_1;
  case 2:
    param_1[1] = param_2[1];
    *(undefined4 *)param_1 = 2;
    return param_1;
  case 3:
  case 0xc:
  case 0xf:
  case 0x10:
    pppppppbStack_8 = (byte *******)pdb_140b55630;
    param_1 = (byte *******)&UNK_1430597e0;
    pppppppbStack_10 = param_2;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
    *(undefined4 *)param_1 = 0;
    return param_1;
  case 0xd:
  case 0xe:
    *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = 5;
    return param_1;
  case 0x11:
  case 0x12:
  case 0x19:
  case 0x1a:
    param_1 = (byte *******)0x430597e0;
    break;
  case 0x13:
    while( true ) {
      pcVar12 = (char *)((ulonglong)pcVar12 & (ulonglong)param_2);
      pcVar1 = (code *)((longlong)param_1 + (longlong)pcVar12);
      in_XMM2_Ba = *pcVar1;
      in_XMM2_Bb = pcVar1[1];
      in_XMM2_Bc = pcVar1[2];
      in_XMM2_Bd = pcVar1[3];
      in_XMM2_Be = pcVar1[4];
      in_XMM2_Bf = pcVar1[5];
      in_XMM2_Bg = pcVar1[6];
      in_XMM2_Bh = pcVar1[7];
      in_XMM2_Bi = pcVar1[8];
      in_XMM2_Bj = pcVar1[9];
      in_XMM2_Bk = pcVar1[10];
      in_XMM2_Bl = pcVar1[0xb];
      in_XMM2_Bm = pcVar1[0xc];
      in_XMM2_Bn = pcVar1[0xd];
      in_XMM2_Bo = pcVar1[0xe];
      in_XMM2_Bp = pcVar1[0xf];
      auVar59[0] = -(in_XMM2_Ba == in_XMM0[0]);
      auVar59[1] = -(in_XMM2_Bb == in_XMM0[1]);
      auVar59[2] = -(in_XMM2_Bc == in_XMM0[2]);
      auVar59[3] = -(in_XMM2_Bd == in_XMM0[3]);
      auVar59[4] = -(in_XMM2_Be == in_XMM0[4]);
      auVar59[5] = -(in_XMM2_Bf == in_XMM0[5]);
      auVar59[6] = -(in_XMM2_Bg == in_XMM0[6]);
      auVar59[7] = -(in_XMM2_Bh == in_XMM0[7]);
      auVar59[8] = -(in_XMM2_Bi == in_XMM0[8]);
      auVar59[9] = -(in_XMM2_Bj == in_XMM0[9]);
      auVar59[10] = -(in_XMM2_Bk == in_XMM0[10]);
      auVar59[0xb] = -(in_XMM2_Bl == in_XMM0[0xb]);
      auVar59[0xc] = -(in_XMM2_Bm == in_XMM0[0xc]);
      auVar59[0xd] = -(in_XMM2_Bn == in_XMM0[0xd]);
      auVar59[0xe] = -(in_XMM2_Bo == in_XMM0[0xe]);
      auVar59[0xf] = -(in_XMM2_Bp == in_XMM0[0xf]);
      uVar37 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar37;
      while (uVar37 != 0) {
        uVar23 = 0;
        for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        in_R10 = ((ulonglong)(pcVar12 + uVar23) & (ulonglong)param_2) * -0x68;
code_r0x000140b4da26:
        if (iVar43 == *(int *)((longlong)param_1 + in_R10 + -0x68)) {
          lVar18 = *(longlong *)((longlong)param_1 + in_R10 + -0x60);
          if (lVar18 == 7) {
            *(int *)((longlong)unaff_RBX + 4) = iVar43;
            unaff_RSI = (longlong *)0x5;
          }
          else {
            unaff_RSI = (longlong *)0x0;
            if ((int)lVar18 == 6) {
              *(int *)((longlong)unaff_RBX + 4) = iVar43;
              unaff_RSI = (longlong *)0x4;
            }
          }
          goto code_r0x000140b4da67;
        }
        uVar37 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar37);
      }
      auVar57[0] = -(in_XMM2_Ba == in_XMM1[0]);
      auVar57[1] = -(in_XMM2_Bb == in_XMM1[1]);
      auVar57[2] = -(in_XMM2_Bc == in_XMM1[2]);
      auVar57[3] = -(in_XMM2_Bd == in_XMM1[3]);
      auVar57[4] = -(in_XMM2_Be == in_XMM1[4]);
      auVar57[5] = -(in_XMM2_Bf == in_XMM1[5]);
      auVar57[6] = -(in_XMM2_Bg == in_XMM1[6]);
      auVar57[7] = -(in_XMM2_Bh == in_XMM1[7]);
      auVar57[8] = -(in_XMM2_Bi == in_XMM1[8]);
      auVar57[9] = -(in_XMM2_Bj == in_XMM1[9]);
      auVar57[10] = -(in_XMM2_Bk == in_XMM1[10]);
      auVar57[0xb] = -(in_XMM2_Bl == in_XMM1[0xb]);
      auVar57[0xc] = -(in_XMM2_Bm == in_XMM1[0xc]);
      auVar57[0xd] = -(in_XMM2_Bn == in_XMM1[0xd]);
      auVar57[0xe] = -(in_XMM2_Bo == in_XMM1[0xe]);
      auVar57[0xf] = -(in_XMM2_Bp == in_XMM1[0xf]);
      if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar57 >> 0x4f,0) & 1) != 0) || (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar57 >> 0x6f,0) & 1) != 0) || (SUB161(auVar57 >> 0x77,0) & 1) != 0) ||
          auVar57[0xf] < '\0') break;
      pcVar12 = pcVar12 + (longlong)(puVar35 + 0x10);
      puVar35 = puVar35 + 0x10;
    }
    goto code_r0x000140b4da67;
  case 0x14:
  case 0x1d:
  case 0x20:
  case 0x21:
    unaff_RSI = (longlong *)0x2;
    unaff_RBX = param_1;
code_r0x000140b4da67:
    *(int *)unaff_RBX = (int)unaff_RSI;
    return unaff_RBX;
  case 0x15:
  case 0x16:
    pcVar1 = (code *)swi(3);
    pppppppbVar19 = (byte *******)(*pcVar1)();
    return pppppppbVar19;
  case 0x17:
  case 0x18:
  case 0x1b:
  case 0x1c:
    param_2 = (byte *******)(ulonglong)(uVar23 * 0x68);
    goto code_r0x000140b4da26;
  case 0x1e:
  case 0x1f:
    goto code_r0x000140b4d92c;
  case 0x22:
  case 0x2b:
    puVar14 = (uint *)((ulonglong)
                       (byte)(((longlong)puVar35 < 0) << 7 | (puVar35 == (undefined *)0x0) << 6 |
                              in_AF << 4 | ((POPCOUNT((ulonglong)puVar35 & 0xff) & 1U) == 0) << 2 |
                              2U | bVar42) << 8);
    *puVar14 = *puVar14 | (uint)puVar14;
    *(code *)((longlong)unaff_RBX + -0x7a76a7bb) =
         (code)((char)*(code *)((longlong)unaff_RBX + -0x7a76a7bb) + bVar45);
    uVar34 = (ulonglong)*(uint *)(unaff_RBP + 10);
code_r0x000140b52325:
    *(ulonglong *)((longlong)unaff_RBP + 0xb3) = uVar34;
    puVar40 = (undefined8 *)unaff_RBP[0x46];
    *(undefined4 *)puVar40[2] = *(undefined4 *)((longlong)puVar40 + 0x1c);
    puVar41 = (undefined4 *)*puVar40;
    *puVar41 = 0;
    puVar41[2] = 0;
    puVar41[4] = 0;
    *(undefined1 *)(puVar41 + 0xd) = 2;
    uVar17 = *(undefined8 *)((longlong)unaff_RBP + 0xb7);
    *(longlong *)((longlong)puVar41 + 0x35) = unaff_RBP[0x16];
    *(undefined8 *)(puVar41 + 0xf) = uVar17;
    *(undefined8 *)(puVar41 + 0x11) = 0;
    *(undefined8 *)(puVar41 + 0x13) = 0;
    puVar41[0x15] = 0;
    puVar40 = (undefined8 *)unaff_RBP[0x47];
    pcVar12 = (char *)*puVar40;
    cVar22 = '\0';
    goto LAB_140b52caa;
  default:
    *(undefined4 *)((longlong)unaff_RBP + 0x84) = 0;
    *(undefined4 *)((longlong)unaff_RBP + 0x8c) = *(undefined4 *)((longlong)unaff_RBP + 0xdc);
    unaff_RBP[0xe] = unaff_RBP[0x18];
    unaff_RBP[0xf] = unaff_RBP[0x19];
    unaff_RBP[-2] = unaff_RBP[0x16];
    unaff_RBP[-1] = unaff_RBP[0x17];
    *unaff_RBP = unaff_RBP[0xe];
    unaff_RBP[1] = unaff_RBP[0xf];
    *(int *)(unaff_RBP + 2) = (int)unaff_RBP[0x10];
    *(undefined8 *)((longlong)unaff_RBP + 0x14) = *(undefined8 *)((longlong)unaff_RBP + 0x84);
    *(undefined4 *)((longlong)unaff_RBP + 0x1c) = *(undefined4 *)((longlong)unaff_RBP + 0x8c);
    *(int *)(unaff_RBP + 0x20) = (int)unaff_RBP[2];
    unaff_RBP[0x1f] = unaff_RBP[1];
    unaff_RBP[6] = unaff_RBP[-2];
    unaff_RBP[7] = unaff_RBP[-1];
    unaff_RBP[8] = *unaff_RBP;
    param_1 = (byte *******)&UNK_14305a408;
    uVar34 = (ulonglong)*(int *)(&UNK_14305a408 + (ulonglong)*(byte *)(unaff_RBP + 6) * 4);
    pcVar12 = &UNK_14305a408 + uVar34;
    cVar10 = (char)pcVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(unaff_RBP + 6)) {
    case 0:
    case 9:
      unaff_R12 = *unaff_R14;
      unaff_RBP[0x15] = unaff_RBP[7];
      unaff_RBX = (byte *******)pdb_140b54f80(unaff_R12,unaff_RBP[7],&UNK_143059bb0);
      if (unaff_RBX == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143059bc8);
      }
      unaff_R14 = unaff_RBX + 7;
      unaff_XMM9_Da = *(float *)((longlong)unaff_RBP + 0xfc);
      if (_DAT_142f3e554 <= unaff_XMM9_Da) {
        unaff_XMM9_Da = _DAT_142f3e554;
      }
      *(float *)((longlong)unaff_RBP + 0xfc) = unaff_XMM9_Da;
      uVar17 = pdb_1419aa990(unaff_R14);
      uVar46 = pdb_1419aaa60(unaff_RBX);
      auVar50._8_4_ = (int)((ulonglong)extraout_XMM0_Qa >> 0x20);
      auVar50._0_8_ = extraout_XMM0_Qa;
      auVar50._12_4_ = (int)((ulonglong)uVar17 >> 0x20);
      auVar49._8_8_ = auVar50._8_8_;
      auVar49._0_4_ = (undefined4)extraout_XMM0_Qa;
      auVar49._4_4_ = (int)uVar17;
      auVar49 = maxps(ZEXT816(0),auVar49);
      uVar56 = auVar49._0_8_;
      uVar17 = _DAT_142e37950;
      goto code_r0x000140b5242e;
    default:
      ppppppbVar4 = *unaff_RBX;
      ppppppbVar5 = *unaff_R14;
      *(int *)(unaff_RBP + 7) = (int)unaff_RBP[0xb];
      unaff_RBP[6] = unaff_RBP[10];
      lVar18 = *unaff_RSI;
      lVar16 = unaff_RSI[1];
      unaff_RBP[-2] = 0;
      unaff_RBP[-1] = 8;
      *unaff_RBP = 0;
      fVar53 = *(float *)(unaff_RBP + 7) + _UNK_14304ab14;
      fVar54 = *(float *)(unaff_RBP + 6) + _UNK_14304ab18;
      fVar55 = *(float *)(unaff_RBP + 7) + _UNK_14304ab1c;
      *(float *)(unaff_RBP + 0x16) = *(float *)(unaff_RBP + 6) + _DAT_14304ab10;
      *(float *)((longlong)unaff_RBP + 0xb4) = fVar53;
      *(float *)(unaff_RBP + 0x17) = fVar54;
      *(float *)((longlong)unaff_RBP + 0xbc) = fVar55;
      pdb_140b57420(ppppppbVar4,unaff_RBP + 0x16,unaff_RBP + -2);
      unaff_RBP[0x16] = unaff_RBP[-1];
      unaff_RBP[0x17] = unaff_RBP[-1] + *unaff_RBP * 8;
      unaff_RBP[0x18] = (longlong)ppppppbVar5;
      unaff_RBP[0x19] = (longlong)(unaff_RBP + 6);
      pdb_1415f5d00(unaff_RBP + 0xc,unaff_RBP + 0x16);
      uVar34 = unaff_RBP[0xe];
      if (uVar34 != 0) {
        pbVar21 = (byte *)unaff_RBP[0xd];
        unaff_RBP[0x14] = (longlong)(unaff_RBP + 6);
        unaff_RBP[0x16] = (longlong)(unaff_RBP + 0x14);
        if (uVar34 != 1) {
          unaff_RBP[0x15] = (longlong)pbVar21;
          if (uVar34 < 0x15) {
            pbVar21 = (byte *)unaff_RBP[0x15];
            pbVar33 = pbVar21 + 0x20;
            do {
              pdb_141510850(pbVar21,pbVar33,unaff_RBP + 0x14);
              pbVar33 = pbVar33 + 0x20;
            } while (pbVar33 != pbVar21 + uVar34 * 0x20);
          }
          else {
            pbVar21 = (byte *)unaff_RBP[0x15];
            pdb_140c75e80(pbVar21,uVar34,unaff_RBP + 0x16);
          }
        }
        uVar17 = *(undefined8 *)(pbVar21 + 8);
        ppppbVar6 = *(byte *****)pbVar21;
        uVar46 = *(undefined4 *)(pbVar21 + 0x10);
        unaff_RBP[0x16] = (longlong)ppppbVar6;
        if (ppppppbVar5[9] != (byte *****)0x0) {
          uVar34 = pdb_1400af0a0(ppppppbVar5 + 10,unaff_RBP + 0x16);
          pppppbVar7 = ppppppbVar5[6];
          bVar45 = (byte)(uVar34 >> 0x39);
          auVar49 = ZEXT216(CONCAT11(bVar45,bVar45));
          auVar49 = pshuflw(auVar49,auVar49,0);
          lVar36 = 0;
          while( true ) {
            uVar34 = uVar34 & (ulonglong)ppppppbVar5[7];
            pcVar12 = (char *)((longlong)pppppbVar7 + uVar34);
            auVar60[0] = -(*pcVar12 == auVar49[0]);
            auVar60[1] = -(pcVar12[1] == auVar49[1]);
            auVar60[2] = -(pcVar12[2] == auVar49[2]);
            auVar60[3] = -(pcVar12[3] == auVar49[3]);
            auVar60[4] = -(pcVar12[4] == auVar49[4]);
            auVar60[5] = -(pcVar12[5] == auVar49[5]);
            auVar60[6] = -(pcVar12[6] == auVar49[6]);
            auVar60[7] = -(pcVar12[7] == auVar49[7]);
            auVar60[8] = -(pcVar12[8] == auVar49[0]);
            auVar60[9] = -(pcVar12[9] == auVar49[1]);
            auVar60[10] = -(pcVar12[10] == auVar49[2]);
            auVar60[0xb] = -(pcVar12[0xb] == auVar49[3]);
            auVar60[0xc] = -(pcVar12[0xc] == auVar49[4]);
            auVar60[0xd] = -(pcVar12[0xd] == auVar49[5]);
            auVar60[0xe] = -(pcVar12[0xe] == auVar49[6]);
            auVar60[0xf] = -(pcVar12[0xf] == auVar49[7]);
            uVar37 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar60[0xf] >> 7) << 0xf;
            uVar11 = (uint)uVar37;
            while (uVar37 != 0) {
              uVar23 = 0;
              for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar23 = uVar23 + 1;
              }
              uVar38 = uVar23 + uVar34 & (ulonglong)ppppppbVar5[7];
              if (ppppbVar6 == pppppbVar7[uVar38 * -2 + -2]) {
                uVar34 = (ulonglong)pppppbVar7[uVar38 * -2 + -1] & 0xffffffff;
                if (uVar34 == 0) {
                  bVar42 = false;
                }
                else {
                  uVar34 = uVar34 ^ 0xffffffff;
                  if ((((*(ulonglong *)(lVar16 + 0x10) <= uVar34) ||
                       (piVar13 = (int *)(uVar34 * 0x18 + *(longlong *)(lVar16 + 8)),
                       piVar13[4] != (int)((ulonglong)pppppbVar7[uVar38 * -2 + -1] >> 0x20))) ||
                      (*piVar13 == 0)) ||
                     ((uVar34 = *(ulonglong *)(piVar13 + 2),
                      *(ulonglong *)(lVar18 + 0x38) <= (uVar34 & 0xffffffff) ||
                      ((*(ulonglong *)(*(longlong *)(lVar18 + 0x28) + (uVar34 >> 6 & 0x3ffffff) * 8)
                        >> (uVar34 & 0x3f) & 1) == 0)))) goto LAB_140b52196;
                  bVar42 = *(float *)(*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(lVar16 + 0x1a0) + 0x18 +
                                         (uVar34 >> 0x20) * 0x48) + 0x10 +
                                       ~*(ulonglong *)
                                         (*(longlong *)
                                           (*(longlong *)(lVar16 + 0x1a0) + 0x38 +
                                           (uVar34 >> 0x20) * 0x48) +
                                         *(longlong *)(lVar18 + 0x110) * 8) * 0x30) + 0x30 +
                                     (ulonglong)(uint)~piVar13[1] * 0x58) <= _DAT_142e3b1d8;
                }
                goto LAB_140b52199;
              }
              uVar37 = (ushort)(uVar11 - 1) & (ushort)uVar11;
              uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar37);
            }
            auVar58[0] = -(*pcVar12 == -1);
            auVar58[1] = -(pcVar12[1] == -1);
            auVar58[2] = -(pcVar12[2] == -1);
            auVar58[3] = -(pcVar12[3] == -1);
            auVar58[4] = -(pcVar12[4] == -1);
            auVar58[5] = -(pcVar12[5] == -1);
            auVar58[6] = -(pcVar12[6] == -1);
            auVar58[7] = -(pcVar12[7] == -1);
            auVar58[8] = -(pcVar12[8] == -1);
            auVar58[9] = -(pcVar12[9] == -1);
            auVar58[10] = -(pcVar12[10] == -1);
            auVar58[0xb] = -(pcVar12[0xb] == -1);
            auVar58[0xc] = -(pcVar12[0xc] == -1);
            auVar58[0xd] = -(pcVar12[0xd] == -1);
            auVar58[0xe] = -(pcVar12[0xe] == -1);
            auVar58[0xf] = -(pcVar12[0xf] == -1);
            if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar58 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar58 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x3f,0) & 1) != 0) || (SUB161(auVar58 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
            uVar34 = uVar34 + lVar36 + 0x10;
            lVar36 = lVar36 + 0x10;
          }
        }
LAB_140b52196:
        bVar42 = false;
LAB_140b52199:
        *(undefined4 *)((longlong)unaff_RBP + -0x24) = *(undefined4 *)(pbVar21 + 0x1c);
        *(longlong *)((longlong)unaff_RBP + -0x2c) = *(longlong *)(pbVar21 + 0x14);
        unaff_RBP[-4] = *(longlong *)(pbVar21 + 0x14);
        *(undefined4 *)(unaff_RBP + -3) = *(undefined4 *)(pbVar21 + 0x1c);
        if (unaff_RBP[0xc] != 0) {
          pub_1406abac0(pbVar21,unaff_RBP[0xc] << 5,8);
        }
        if (unaff_RBP[-2] != 0) {
          pub_1406abac0((byte *)unaff_RBP[-1],unaff_RBP[-2] << 3,8);
        }
        puVar40 = (undefined8 *)unaff_RBP[0x46];
        uVar47 = *(undefined4 *)((longlong)puVar40 + 0x1c);
        puVar41 = (undefined4 *)puVar40[2];
        *puVar41 = uVar47;
        puVar32 = (undefined4 *)*puVar40;
        *puVar32 = 0;
        puVar32[2] = 0;
        puVar32[4] = 1;
        *(undefined8 *)(puVar32 + 8) = uVar17;
        *(byte *****)(puVar32 + 10) = ppppbVar6;
        puVar32[0xc] = uVar46;
        *(bool *)(puVar32 + 0xd) = bVar42;
        lVar18 = unaff_RBP[-5];
        *(undefined8 *)((longlong)puVar32 + 0x35) = *(undefined8 *)((longlong)unaff_RBP + -0x2f);
        *(longlong *)(puVar32 + 0xf) = lVar18;
        *(undefined8 *)(puVar32 + 0x11) = 0;
        puVar32[0x15] = (int)unaff_RBP[-3];
        *(longlong *)(puVar32 + 0x13) = unaff_RBP[-4];
        cVar22 = '\x02';
        if (**(char **)unaff_RBP[0x48] != '\x01') goto LAB_140b52c14;
        goto code_r0x000140b5225c;
      }
      if (unaff_RBP[0xc] != 0) {
        pub_1406abac0((byte *)unaff_RBP[0xd],unaff_RBP[0xc] << 5,8);
      }
      puVar40 = (undefined8 *)unaff_RBP[0x48];
      if (unaff_RBP[-2] != 0) {
        pub_1406abac0((byte *)unaff_RBP[-1],unaff_RBP[-2] << 3,8);
      }
      if (*(char *)*puVar40 != '\x01') {
        *(int *)((longlong)unaff_RBP + 0xbb) = (int)unaff_RBP[0xb];
        uVar34 = unaff_RBP[10];
        goto code_r0x000140b52325;
      }
      puVar40 = (undefined8 *)unaff_RBP[0x46];
      uVar47 = *(undefined4 *)((longlong)puVar40 + 0x1c);
      puVar32 = (undefined4 *)*puVar40;
      puVar41 = (undefined4 *)puVar40[2];
      goto LAB_140b522a9;
    case 2:
      *(uint *)((longlong)unaff_RBP + 0x9c) = (uint)*(byte *)((longlong)unaff_RBP + 0x31);
      ppppppbVar4 = *unaff_R14;
      unaff_RBP[0x15] = unaff_RBP[7];
      lVar18 = pdb_140b54f80(ppppppbVar4,unaff_RBP[7],&UNK_143059ae0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143059af8);
      }
      if (1 < *(uint *)(lVar18 + 600)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143021f00);
      }
      fVar53 = (float)pdb_1419aa990(lVar18 + 0x38);
      fVar54 = _DAT_142e36f28;
      fVar55 = (float)pdb_1419aaa60(lVar18);
      if (*(char *)(lVar18 + 600) == '\0') {
        fVar62 = 0.0;
        if (0.0 <= fVar55) {
          fVar62 = fVar55;
        }
        fVar55 = fVar54;
        if (fVar62 <= fVar54) {
          fVar55 = fVar62;
        }
        uVar46 = pdb_140def5e0(lVar18 + 0x25c);
      }
      else {
        uVar46 = *(undefined4 *)(lVar18 + 0x25c);
        fVar55 = *(float *)(lVar18 + 0x260);
      }
      if ((*unaff_RDI != '\x01') ||
         ((fVar62 = _DAT_14303aa00, unaff_RDI[1] != '\x02' &&
          (fVar62 = _DAT_142e37888, unaff_RDI[1] != '\x01')))) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059b70,0x28,&UNK_143059b98);
      }
      fVar2 = *(float *)((longlong)unaff_RBP + 0xfc);
      uVar17 = pdb_140b54b40(ppppppbVar4,unaff_RBP[0x15]);
      if ((int)uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143059b40);
      }
      pdb_140b55520(unaff_RBP + 0xc,*unaff_RSI,unaff_RSI[1],uVar17);
      if ((int)unaff_RBP[0xc] != 3) {
        unaff_RBP[0x16] = unaff_RBP[0xc];
        unaff_RBP[0x17] = unaff_RBP[0xd];
        puStack_18 = &UNK_143059b58;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143059ea8,0x2b,unaff_RBP + 0x16,&UNK_143059e88);
      }
      pdb_140b51610(unaff_RBP + 0xc,unaff_RBP[0xd],unaff_RBP + 1,_DAT_142e36f50);
      if ((int)unaff_RBP[0xc] == 0) {
        cVar22 = '\0';
code_r0x000140b52885:
        uVar20 = (undefined1)*(undefined4 *)((longlong)unaff_RBP + 0x9c);
      }
      else {
        puVar40 = (undefined8 *)unaff_RBP[0x4d];
        if ((int)unaff_RBP[0xc] == 1) {
          uVar47 = *(undefined4 *)((longlong)unaff_RBP + 100);
          lVar16 = unaff_RBP[0xd];
          uVar3 = *(undefined4 *)((longlong)unaff_RBP + 0x6c);
          *(undefined4 *)(unaff_RBP + 0x1f) = uVar47;
          *(int *)((longlong)unaff_RBP + 0xfc) = (int)lVar16;
          *(undefined4 *)(unaff_RBP + 0x20) = uVar3;
          *(int *)((longlong)unaff_RBP + 0xcc) = (int)unaff_RBP[0x20];
          *(longlong *)((longlong)unaff_RBP + 0xc4) = unaff_RBP[0x1f];
          *(undefined4 *)(unaff_RBP + 0x16) = 0;
          *(undefined4 *)(unaff_RBP + 0x18) = 0x3e99999a;
          *(undefined4 *)(unaff_RBP + 0x1a) = 0x3f800000;
          *(undefined1 *)((longlong)unaff_RBP + 0xd4) = 0;
          uVar17 = *puVar40;
          pdb_140ab07b0(unaff_RBP + 0x16,uVar17);
          lVar36 = pdb_140b4b7e0();
          unaff_RBP[0x12] = lVar36;
          *(undefined4 *)(unaff_RBP + 0x14) = uVar47;
          *(undefined4 *)((longlong)unaff_RBP + 0xa4) = uVar3;
          pdb_140df4540(unaff_RBP + 0x16,unaff_RBP + 0x14);
          puVar41 = (undefined4 *)unaff_RBP[0x12];
          *puVar41 = uVar47;
          puVar41[1] = (int)lVar16;
          puVar41[2] = uVar3;
          puVar41[5] = (int)unaff_RBP[0x17];
          *(longlong *)(puVar41 + 3) = unaff_RBP[0x16];
          unaff_RBP[0x16] = 2;
          unaff_RBP[0x17] = (longlong)puVar41;
          unaff_RBP[0x18] = 2;
          unaff_RBP[0x19] = -0x8000000000000000;
          *(undefined4 *)(unaff_RBP + 0x1c) = 0;
          *(undefined4 *)(unaff_RBP + 0x1e) = 0x40400000;
          *(undefined2 *)((longlong)unaff_RBP + 0xf4) = 0x101;
          pdb_140ab2da0(unaff_RBP + 0x16,uVar17);
          cVar22 = '\x02';
          goto code_r0x000140b52885;
        }
        *(float *)((longlong)unaff_RBP + 0x2c) = fVar53;
        fVar53 = *(float *)((longlong)unaff_RBP + 100);
        pfVar15 = (float *)pdb_140b4b7e0();
        fVar61 = *(float *)(unaff_RBP + 0xd);
        fVar9 = *(float *)((longlong)unaff_RBP + 0x6c);
        fVar48 = *(float *)(unaff_RBP + 0xe);
        fVar63 = *(float *)((longlong)unaff_RBP + 0x74);
        uVar34 = (ulonglong)_DAT_142f6a630 >> 0x20;
        lVar16 = unaff_RBP[0xe];
        *pfVar15 = (float)_DAT_142f6a630 + fVar61;
        pfVar15[1] = (float)uVar34 + fVar9;
        pfVar15[2] = fVar48 + 0.0;
        pfVar15[3] = fVar63 + 0.0;
        fVar64 = (float)unaff_RBP[0xf];
        fVar63 = (float)((ulonglong)unaff_RBP[0xf] >> 0x20);
        *(ulonglong *)(pfVar15 + 4) = CONCAT44(fVar63 + 0.0,_DAT_142e3787c + fVar64);
        unaff_RBP[0x16] = 2;
        unaff_RBP[0x17] = (longlong)pfVar15;
        unaff_RBP[0x18] = 2;
        unaff_RBP[0x19] = -0x8000000000000000;
        *(undefined4 *)(unaff_RBP + 0x1c) = 0;
        *(undefined4 *)(unaff_RBP + 0x1e) = 0x40400000;
        *(undefined2 *)((longlong)unaff_RBP + 0xf4) = 0x101;
        uVar17 = *puVar40;
        pdb_140ab2da0(unaff_RBP + 0x16,uVar17);
        fVar48 = fVar54 - fVar53;
        fVar63 = fVar63 * fVar53 + (float)lVar16 * fVar48;
        fVar61 = fVar53 * (float)((ulonglong)lVar16 >> 0x20) + fVar48 * fVar61;
        unaff_RBP[0x1f] = CONCAT44(fVar53 * fVar64 + fVar48 * fVar9,fVar61);
        *(float *)(unaff_RBP + 0x20) = fVar63;
        *(int *)((longlong)unaff_RBP + 0xcc) = (int)unaff_RBP[0x20];
        *(longlong *)((longlong)unaff_RBP + 0xc4) = unaff_RBP[0x1f];
        *(undefined4 *)(unaff_RBP + 0x16) = 0;
        *(undefined4 *)(unaff_RBP + 0x18) = 0x3e99999a;
        *(undefined4 *)(unaff_RBP + 0x1a) = 0x3f800000;
        *(undefined1 *)((longlong)unaff_RBP + 0xd4) = 0;
        pdb_140ab07b0(unaff_RBP + 0x16,uVar17);
        lVar16 = pdb_140b4b7e0();
        unaff_RBP[0x12] = lVar16;
        *(float *)(unaff_RBP + 0x14) = fVar61;
        *(float *)((longlong)unaff_RBP + 0xa4) = fVar63;
        pdb_140df4540(unaff_RBP + 0x16,unaff_RBP + 0x14);
        plVar39 = (longlong *)unaff_RBP[0x12];
        *(int *)(plVar39 + 1) = (int)unaff_RBP[0x20];
        *plVar39 = unaff_RBP[0x1f];
        *(int *)((longlong)plVar39 + 0x14) = (int)unaff_RBP[0x17];
        *(longlong *)((longlong)plVar39 + 0xc) = unaff_RBP[0x16];
        unaff_RBP[0x16] = 2;
        unaff_RBP[0x17] = (longlong)plVar39;
        unaff_RBP[0x18] = 2;
        unaff_RBP[0x19] = -0x8000000000000000;
        *(undefined4 *)(unaff_RBP + 0x1c) = 0;
        *(undefined4 *)(unaff_RBP + 0x1e) = 0x40400000;
        *(undefined2 *)((longlong)unaff_RBP + 0xf4) = 0x101;
        pdb_140ab2da0(unaff_RBP + 0x16,uVar17);
        cVar22 = '\x02';
        uVar20 = (undefined1)*(undefined4 *)((longlong)unaff_RBP + 0x9c);
        fVar53 = *(float *)((longlong)unaff_RBP + 0x2c);
      }
      fVar61 = 0.0;
      if (0.0 <= fVar53) {
        fVar61 = fVar53;
      }
      if (fVar61 <= fVar54) {
        fVar54 = fVar61;
      }
      fVar53 = fVar62 + fVar2 + _DAT_142e37874;
      unaff_XMM9_Da = *(float *)(lVar18 + 0x284);
      puVar40 = (undefined8 *)unaff_RBP[0x46];
      uVar47 = *(undefined4 *)((longlong)puVar40 + 0x1c);
      puVar41 = (undefined4 *)puVar40[2];
      *puVar41 = uVar47;
      puVar32 = (undefined4 *)*puVar40;
      *puVar32 = 1;
      puVar32[1] = fVar53;
      puVar32[2] = 0;
      puVar32[4] = 2;
      *(longlong *)(puVar32 + 5) = unaff_RBP[0x1f];
      puVar32[7] = (int)unaff_RBP[0x20];
      plVar39 = unaff_RBP + 0x1f;
      goto code_r0x000140b52bba;
    case 3:
    case 4:
    case 5:
    case 0xf:
    case 0x10:
      unaff_RBP[0x16] = (longlong)(unaff_RBP + 6);
      unaff_RBP[0x17] = (longlong)pdb_140b55630;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143059c40,unaff_RBP + 0x16,&UNK_143059c90);
    case 0x11:
      pppppppbVar19 = (byte *******)pdb_140f66090(pcVar12,0x43059fe8,0xb,&pppppppbStack_8);
      return pppppppbVar19;
    case 0x12:
      *(char *)(uVar34 + 0xcbca2550) = *(char *)(uVar34 + 0xcbca2550) + cVar22;
      *pcVar12 = *pcVar12 + cVar10;
      in_stack_00000048 = (byte ******)&UNK_14305a410;
      pppppppbStack_8 = (byte *******)&UNK_143059ff8;
      pppppppbStack_10 = &stack0x00000048;
      break;
    case 0x13:
      *(char *)(uVar34 + 0xcbca2550) = *(char *)(uVar34 + 0xcbca2550) + cVar22;
      *pcVar12 = *pcVar12 + cVar10;
      in_stack_00000048 = (byte ******)&UNK_14305a410;
      pppppppbStack_8 = (byte *******)&UNK_143059ff8;
      goto code_r0x000140b5585b;
    case 0x14:
      puVar28 = &stack0xffffffffffffffc0;
      pcVar12 = (char *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b55952;
    case 0x15:
      param_1 = (byte *******)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar34] + '\b');
      pcVar12 = (char *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b55730;
    case 0x16:
      pcVar12 = (char *)(ulonglong)((int)pcVar12 + 0x25046d1 + (uint)(0xfffffffebcfa5bf7 < uVar34));
      break;
    case 0x17:
      puVar31 = &stack0xffffffffffffffc0;
      param_1 = (byte *******)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar34] + '\b');
      pcVar12 = (char *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b55b05;
    case 0x18:
      puVar29 = &stack0xffffffffffffffc0;
      param_1 = (byte *******)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar34] + '\b');
      pcVar12 = (char *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b559c6;
    case 0x19:
      *pcVar12 = *pcVar12 + cVar10;
      pbVar21 = &UNK_14305a395 + uVar34;
      bVar45 = *pbVar21;
      *pbVar21 = *pbVar21 + 8;
      pcVar12 = (char *)(ulonglong)((int)pcVar12 + 0x2504587 + (uint)(0xf7 < bVar45));
      goto code_r0x000140b55b97;
    case 0x1a:
      pppppppbStack_10 = &stack0x00000048;
      puStack_18 = (undefined *)0x6;
      pppppppbVar19 =
           (byte *******)
           pdb_140f66e50(iVar43 + 0x50U & 0xffffff30,&UNK_14305a140,0xb,&UNK_14305a14b);
      return pppppppbVar19;
    case 0x1b:
      *(int *)(&UNK_14305a40a + (longlong)param_2 * 2 + uVar34) =
           *(int *)(&UNK_14305a40a + (longlong)param_2 * 2 + uVar34) + 0x48;
      pppppppbStack_8 = (byte *******)CONCAT44(pppppppbStack_8._4_4_,0x4305a408);
      pppppppbStack_10 = &stack0x00000048;
      puStack_18 = (undefined *)0x7;
      param_2 = (byte *******)&UNK_14305a11e;
      goto code_r0x000140b55b97;
    case 0x1c:
      *(char *)(uVar34 + 0xcbca2550) = *(char *)(uVar34 + 0xcbca2550) + cVar22;
      *pcVar12 = *pcVar12 + cVar10;
      in_stack_00000048 = (byte ******)&UNK_14305a40c;
      param_1 = (byte *******)&UNK_14305a158;
code_r0x000140b55730:
      pppppppbStack_10 = &stack0x00000048;
      puStack_18 = (undefined *)0xa;
      puVar35 = &UNK_14305a18e;
      puVar31 = auStack_38;
      pppppppbStack_8 = param_1;
code_r0x000140b55b44:
      *(undefined8 *)(puVar31 + -8) = 0x140b55b59;
      pppppppbVar19 = (byte *******)pdb_140f66e50(pcVar12,puVar35,0xc,&UNK_14305a184);
      return pppppppbVar19;
    case 0x1d:
      puVar27 = &stack0xffffffffffffffc0;
      param_1 = (byte *******)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar34] + '\b');
      goto code_r0x000140b557b1;
    case 0x1e:
      puVar30 = &stack0xffffffffffffffc0;
      param_1 = (byte *******)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar34] + '\b');
      pcVar12 = (char *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b55a96;
    case 0x1f:
      puVar25 = &stack0xffffffffffffffc0;
      param_1 = (byte *******)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar34] + '\b');
      pcVar12 = (char *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b556a7;
    case 0x20:
      goto code_r0x000140b558d5;
    case 0x21:
      puVar24 = &stack0xffffffffffffffc0;
      param_1 = (byte *******)
                CONCAT71(0x14305a4,*(char *)((ulonglong)(uint)(int)(short)pcVar12 - 0x77) + '\b');
      pcVar12 = (char *)((ulonglong)CONCAT31((int3)(char)((ulonglong)pcVar12 >> 8),cVar10) &
                        0xffffffffffffff30);
      goto code_r0x000140b55651;
    }
code_r0x000140b55a43:
    puStack_18 = (undefined *)0x7;
    param_2 = (byte *******)&UNK_14305a124;
code_r0x000140b55b97:
    pppppppbVar19 = (byte *******)pdb_140f66e50(pcVar12,param_2,6,&UNK_14305a01c);
    return pppppppbVar19;
  case 0x24:
code_r0x000140b5242e:
    fVar53 = (float)uVar56;
    fVar54 = (float)((ulonglong)uVar56 >> 0x20);
    iVar43 = -(uint)((float)uVar17 < fVar53);
    iVar44 = -(uint)((float)((ulonglong)uVar17 >> 0x20) < fVar54);
    auVar52._4_4_ = iVar44;
    auVar52._0_4_ = iVar43;
    auVar52._8_4_ = iVar44;
    auVar52._12_4_ = iVar44;
    auVar51._8_8_ = auVar52._8_8_;
    auVar51._4_4_ = iVar43;
    auVar51._0_4_ = iVar43;
    uVar11 = movmskpd(uVar46,auVar51);
    if ((uVar11 & 2) == 0) {
      if ((uVar11 & 1) == 0) goto code_r0x000140b5247f;
code_r0x000140b52452:
      uVar11 = *(uint *)(unaff_RBX + 0x4b);
      fVar53 = _DAT_142e36f28;
      if (1 < uVar11) goto code_r0x000140b5248e;
code_r0x000140b5245d:
      if ((uVar11 & 1) == 0) {
        fVar55 = fVar53;
        uVar46 = pdb_140def5e0((code *)((longlong)unaff_RBX + 0x25c));
      }
      else {
        uVar46 = *(undefined4 *)((longlong)unaff_RBX + 0x25c);
        fVar55 = *(float *)(unaff_RBX + 0x4c);
      }
    }
    else {
      fVar54 = _DAT_142e36f28;
      if ((uVar11 & 1) != 0) goto code_r0x000140b52452;
code_r0x000140b5247f:
      uVar11 = *(uint *)(unaff_RBX + 0x4b);
      if (uVar11 < 2) goto code_r0x000140b5245d;
code_r0x000140b5248e:
      pdb_1419aa0c0(unaff_RBP + 0x16,unaff_R14);
      uVar46 = (undefined4)unaff_RBP[0x16];
      fVar55 = *(float *)(unaff_RBP + 0x17);
    }
    if (unaff_XMM9_Da < _DAT_142e37838) {
      pdb_1419a7e00(unaff_RBP + 0x1f,unaff_R14);
      unaff_XMM9_Da = 0.0;
    }
    pdb_1419a7e00(unaff_RBP + 0x16,unaff_R14);
    *(int *)(unaff_RBP + 0xc) = (int)unaff_RBP[0x16];
    *(int *)((longlong)unaff_RBP + 100) = (int)unaff_RBP[0x17];
    plVar39 = (longlong *)((longlong)unaff_RBP + -0x3c);
    pdb_140df4540(plVar39,unaff_RBP + 0xc);
    if (((0.0 < unaff_XMM9_Da) && (*(uint *)(unaff_RBX + 0x4b) < 2)) &&
       ((*unaff_RDI == '\x01' && (unaff_RDI[1] == '\x02')))) {
      if (*(uint *)(unaff_RBX + 0x4b) == 1) {
        unaff_RBP[0x18] = *(longlong *)((longlong)unaff_RBX + 0x26c);
        lVar18 = *(longlong *)((longlong)unaff_RBX + 0x264);
        unaff_RBP[0x16] = *(longlong *)((longlong)unaff_RBX + 0x25c);
        unaff_RBP[0x17] = lVar18;
        unaff_RBP[0x18] =
             CONCAT44((float)((ulonglong)unaff_RBP[0x18] >> 0x20) + _UNK_1430595a4,
                      (float)unaff_RBP[0x18] + _UNK_1430595a0);
        uVar47 = pdb_140df0920(unaff_RBP + 0x16);
      }
      else {
        lVar18 = *(longlong *)((longlong)unaff_RBX + 0x264);
        unaff_RBP[0x16] = *(longlong *)((longlong)unaff_RBX + 0x25c);
        unaff_RBP[0x17] = lVar18;
        *(float *)(unaff_RBP + 0x17) = *(float *)(unaff_RBP + 0x17) + _UNK_143059594;
        uVar47 = pdb_140def2c0(unaff_RBP + 0x16);
      }
      *(undefined4 *)(unaff_RBP + 0x16) = uVar47;
      *(float *)((longlong)unaff_RBP + 0xb4) = fVar53;
      pdb_140df4540(unaff_RBP + 0x1f,unaff_RBP + 0x16);
    }
    uVar17 = pdb_140b54b40(unaff_R12,unaff_RBP[0x15]);
    lVar18 = pdb_140b55350(uVar17,*unaff_RSI,unaff_RSI[1]);
    if (lVar18 == 0) {
      uVar20 = false;
    }
    else {
      uVar20 = *(float *)(lVar18 + 0x30) <= _DAT_142e3b1d8;
    }
    uVar47 = *(undefined4 *)((longlong)unaff_R13 + 0x1c);
    puVar41 = (undefined4 *)unaff_R13[2];
    *puVar41 = uVar47;
    puVar32 = (undefined4 *)*unaff_R13;
    *puVar32 = 0;
    puVar32[2] = 0;
    puVar32[4] = 1;
    cVar22 = '\x02';
code_r0x000140b52bba:
    puVar32[8] = uVar46;
    puVar32[9] = fVar55;
    *(longlong *)(puVar32 + 10) = unaff_RBP[0x15];
    puVar32[0xc] = fVar54;
    *(undefined1 *)(puVar32 + 0xd) = uVar20;
    *(longlong *)(puVar32 + 0xe) = unaff_RBP[0x1f];
    puVar32[0x10] = (int)unaff_RBP[0x20];
    puVar32[0x11] = unaff_XMM9_Da;
    puVar32[0x12] = 0;
    *(longlong *)(puVar32 + 0x13) = *plVar39;
    puVar32[0x15] = (int)plVar39[1];
    if (*(char *)*unaff_R15 != '\0') {
code_r0x000140b5225c:
      plVar39 = (longlong *)unaff_RBP[0x4b];
      *(undefined4 *)plVar39[2] = *(undefined4 *)((longlong)plVar39 + 0x1c);
      lVar18 = *plVar39;
      lVar16 = *(longlong *)(lVar18 + 0x30);
      uVar17 = *(undefined8 *)(lVar18 + 0x40);
      if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
        pdb_142d7e980(lVar18 + 0x20);
      }
      lVar36 = *(longlong *)(lVar18 + 0x28);
      *(undefined8 *)(lVar36 + lVar16 * 0x10) = uVar17;
      *(undefined1 *)(lVar36 + 8 + lVar16 * 0x10) = 1;
      *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
      *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
LAB_140b522a9:
      *(undefined4 *)(unaff_RBP + 0xd) = 0;
      unaff_RBP[0xc] = 0;
      *(longlong *)((longlong)unaff_RBP + 0xb3) = unaff_RBP[10];
      *(int *)((longlong)unaff_RBP + 0xbb) = (int)unaff_RBP[0xb];
      *puVar41 = uVar47;
      *puVar32 = 0;
      puVar32[2] = 0;
      puVar32[4] = 0;
      *(undefined1 *)(puVar32 + 0xd) = 2;
      uVar17 = *(undefined8 *)((longlong)unaff_RBP + 0xb7);
      *(longlong *)((longlong)puVar32 + 0x35) = unaff_RBP[0x16];
      *(undefined8 *)(puVar32 + 0xf) = uVar17;
      *(undefined8 *)(puVar32 + 0x11) = 0;
      *(longlong *)(puVar32 + 0x13) = unaff_RBP[0xc];
      uVar11 = *(uint *)(unaff_RBP + 0xd);
      puVar32[0x15] = uVar11;
      goto LAB_140b52cb7;
    }
LAB_140b52c14:
    plVar39 = (longlong *)unaff_RBP[0x4b];
    *(undefined4 *)plVar39[2] = *(undefined4 *)((longlong)plVar39 + 0x1c);
    lVar18 = *plVar39;
    lVar16 = *(longlong *)(lVar18 + 0x30);
    uVar17 = *(undefined8 *)(lVar18 + 0x40);
    if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7e980(lVar18 + 0x20);
    }
    lVar36 = *(longlong *)(lVar18 + 0x28);
    *(undefined8 *)(lVar36 + lVar16 * 0x10) = uVar17;
    *(undefined1 *)(lVar36 + 8 + lVar16 * 0x10) = 0;
    *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
    *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
    puVar40 = (undefined8 *)unaff_RBP[0x47];
    pcVar12 = (char *)*puVar40;
    if ((cVar22 != '\0') && (*pcVar12 == '\0')) {
      *(undefined4 *)(unaff_RBP + 0x18) = puVar32[0x10];
      unaff_RBP[0x17] = *(longlong *)(puVar32 + 0xe);
      *(undefined1 *)(unaff_RBP + 0x16) = 3;
      pdb_1414af100(unaff_RBP[0x45],unaff_RBP + 0x16,&UNK_143059ca8);
    }
LAB_140b52caa:
    uVar11 = *(uint *)((longlong)puVar40 + 0x1c);
    *(uint *)puVar40[2] = uVar11;
    *pcVar12 = cVar22;
LAB_140b52cb7:
    return (byte *******)(ulonglong)uVar11;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x31:
  case 0x32:
    return (byte *******)0x0;
  case 0x33:
    pcVar12 = (char *)((ulonglong)param_2 & 0xffffffff);
    *(char *)param_1 = (char)*(code *)param_1 + (char)pcVar12 + bVar42;
    *pcVar12 = *pcVar12 + (char)pcVar12;
    if ((*(longlong *)(uVar34 + 0xb5b32bfc0) == 0) || (**(ulonglong **)(uVar34 + 0xb5b32bfb8) == 0))
    {
      param_2 = (byte *******)0x0;
    }
    else {
      param_2 = *(byte ********)
                 (*(longlong *)(uVar34 + 0xb5b32bf98) + 0x10 +
                 ~**(ulonglong **)(uVar34 + 0xb5b32bfb8) * 0x30);
    }
    pcVar12 = (char *)(ulonglong)~uVar23;
  case 0x43:
    param_1[1] = (byte ******)(param_2 + (longlong)pcVar12 * 0xb);
    *(undefined4 *)param_1 = 3;
    return param_2 + (longlong)pcVar12 * 0xb;
  case 0x34:
    cRam0000000000000000 = cRam0000000000000000 - bVar42;
    puVar28 = auStack_38;
  case 0x3a:
code_r0x000140b55952:
    *(char **)(puVar28 + -8) = pcVar12;
    *(undefined **)(puVar28 + 0x28) = &UNK_14305a1a0;
    *(byte ********)(puVar28 + 0x20) = param_2;
    *(undefined8 *)(puVar28 + 0x38) = 9;
    *(undefined8 *)(puVar28 + 0x18) = 10;
    *(undefined8 *)(puVar28 + -0x10) = 0x140b55998;
    pppppppbVar19 = (byte *******)pdb_140f66f00(pcVar12,&UNK_14305a1c0,0x18,&UNK_14305a184);
    return pppppppbVar19;
  case 0x35:
code_r0x000140b557b1:
    pcVar12 = (char *)((ulonglong)pcVar12 & 0xffffffffffffff30);
    puVar26 = puVar27;
code_r0x000140b55777:
    *(byte ********)(puVar26 + 0x80) = param_1 + 1;
    *(undefined **)(puVar26 + 0x50) = &UNK_14305a0b8;
    *(undefined1 **)(puVar26 + 0x48) = puVar26 + 0x80;
    *(undefined **)(puVar26 + 0x38) = &UNK_14305a0f6;
    *(undefined **)(puVar26 + 0x30) = &UNK_14305a098;
    *(byte ********)(puVar26 + 0x28) = param_2;
    *(undefined8 *)(puVar26 + 0x40) = 4;
    *(undefined8 *)(puVar26 + 0x20) = 0xc;
    *(undefined8 *)(puVar26 + -8) = 0x140b557e7;
    pppppppbVar19 = (byte *******)pdb_140f66f00(pcVar12,&UNK_14305a0fa,0x14,&UNK_14305a0ea);
    return pppppppbVar19;
  case 0x36:
code_r0x000140b558d5:
    puStack_18 = (undefined *)0x7;
    pppppppbStack_10 = param_2;
    pppppppbStack_8 = param_1;
    pppppppbVar19 =
         (byte *******)pdb_140f66ff0((uint)pcVar12 | 0x250474e,&UNK_14305a088,4,&UNK_14305a01c);
    return pppppppbVar19;
  case 0x37:
code_r0x000140b556a7:
    *(int *)(puVar25 + 0x80) = (int)param_1;
    *(undefined **)(puVar25 + 0x50) = &UNK_143059fc8;
    *(undefined1 **)(puVar25 + 0x48) = puVar25 + 0x80;
    *(undefined **)(puVar25 + 0x38) = &UNK_14305a1d8;
    *(undefined **)(puVar25 + 0x30) = &UNK_14305a1a0;
    *(byte ********)(puVar25 + 0x28) = param_2;
    *(undefined8 *)(puVar25 + 0x40) = 9;
    *(undefined8 *)(puVar25 + 0x20) = 10;
    *(undefined8 *)(puVar25 + -8) = 0x140b55714;
    pppppppbVar19 =
         (byte *******)
         pdb_140f66f00(CONCAT71((int7)((ulonglong)pcVar12 >> 8),(char)pcVar12 + 'H'),&UNK_14305a1e1,
                       0x1a,&UNK_14305a184);
    return pppppppbVar19;
  case 0x38:
code_r0x000140b559c6:
    *(int *)(puVar29 + 0x48) = (int)param_1;
    *(undefined **)(puVar29 + 0x38) = &UNK_14305a0f6;
    *(undefined **)(puVar29 + 0x30) = &UNK_14305a098;
    *(byte ********)(puVar29 + 0x28) = param_2;
    *(undefined8 *)(puVar29 + 0x40) = 4;
    *(undefined8 *)(puVar29 + 0x20) = 0xc;
    *(undefined8 *)(puVar29 + -8) = 0x140b55a15;
    pppppppbVar19 = (byte *******)pdb_140f66f00(pcVar12,&UNK_14305a0d8,0x12,&UNK_14305a0ea);
    return pppppppbVar19;
  case 0x39:
code_r0x000140b55a96:
    *(byte ********)(puVar30 + 0x80) = param_1 + 1;
    *(undefined **)(puVar30 + 0x50) = &UNK_14305a0b8;
    *(undefined1 **)(puVar30 + 0x48) = puVar30 + 0x80;
    *(undefined **)(puVar30 + 0x38) = &UNK_14305a0f6;
    *(undefined **)(puVar30 + 0x30) = &UNK_14305a098;
    *(byte ********)(puVar30 + 0x28) = param_2;
    *(undefined8 *)(puVar30 + 0x40) = 4;
    *(undefined8 *)(puVar30 + 0x20) = 0xc;
    param_2 = (byte *******)&UNK_14305a10e;
code_r0x000140b55af1:
    *(undefined8 *)(puVar30 + -8) = 0x140b55b06;
    pppppppbVar19 = (byte *******)pdb_140f66f00(pcVar12,param_2,0x10,&UNK_14305a0ea);
    return pppppppbVar19;
  case 0x3b:
code_r0x000140b55b05:
    pcVar12[0xffffffff88c48148] = pcVar12[0xffffffff88c48148] + cVar22;
    *pcVar12 = *pcVar12 + (char)pcVar12;
    *(code **)(puVar31 + 0x80) = (code *)((longlong)param_1 + 4);
    *(undefined **)(puVar31 + 0x30) = &UNK_14305a158;
    *(undefined1 **)(puVar31 + 0x28) = puVar31 + 0x80;
    *(undefined8 *)(puVar31 + 0x20) = 10;
    puVar35 = &UNK_14305a178;
    goto code_r0x000140b55b44;
  case 0x3c:
    goto code_r0x000140b55777;
  case 0x3d:
    bVar42 = CARRY1(bRamffffffffffffff8d,bVar45);
    bRamffffffffffffff8d = bRamffffffffffffff8d + bVar45;
    pcVar12 = (char *)(ulonglong)(bVar42 + 0x250461d);
    puVar30 = auStack_38;
    goto code_r0x000140b55af1;
  case 0x3e:
    puVar24 = auStack_38;
  case 0x41:
code_r0x000140b55651:
    *(byte ********)(puVar24 + 0x80) = param_1;
    *(undefined **)(puVar24 + 0x30) = &UNK_143059ff8;
    *(undefined1 **)(puVar24 + 0x28) = puVar24 + 0x80;
    *(undefined8 *)(puVar24 + 0x20) = 7;
    *(undefined8 *)(puVar24 + -8) = 0x140b55697;
    pppppppbVar19 = (byte *******)pdb_140f66e50(pcVar12,&UNK_14305a018,4,&UNK_14305a01c);
    return pppppppbVar19;
  case 0x3f:
    bRamffffffffffffff8d = bRamffffffffffffff8d + bVar45;
    pcVar12 = (char *)0x2504a28;
    goto code_r0x000140b55730;
  case 0x40:
    goto code_r0x000140b55a43;
  case 0x42:
    pcVar12 = (char *)0x0;
code_r0x000140b5585b:
    pppppppbStack_10 = &stack0x00000048;
    puStack_18 = (undefined *)0x7;
    param_2 = (byte *******)&UNK_14305a12f;
    goto code_r0x000140b55b97;
  }
  puVar35 = &UNK_143059848;
  param_2 = (byte *******)&pppppppbStack_10;
code_r0x000140b4d92c:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(param_1,param_2,puVar35);
}

