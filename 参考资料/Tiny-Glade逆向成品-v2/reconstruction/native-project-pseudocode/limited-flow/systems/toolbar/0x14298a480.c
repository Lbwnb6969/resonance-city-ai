// VA 0x14298a480, PDB extent 511 bytes
// toolbar::photomode::ui_slider::slider_val_01
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/ui_slider.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014298c2f0) overlaps instruction at (ram,0x00014298c2ef)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::photomode::ui_slider::slider_val_01
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/ui_slider.rs
   Extent: 511 */

ulonglong pdb_14298a480(ulonglong param_1,code *param_2,ulonglong param_3,undefined8 param_4,
                       float *param_5,undefined4 *param_6,undefined8 param_7,longlong *param_8,
                       int *param_9,undefined8 param_10,undefined4 *param_11,float *param_12,
                       float *param_13,float *param_14)

{
  code *pcVar1;
  code cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  int *piVar10;
  longlong lVar11;
  byte *pbVar12;
  undefined7 uVar16;
  char *pcVar13;
  uint *puVar14;
  float *pfVar15;
  byte in_CL;
  byte bVar17;
  ulonglong uVar18;
  float *pfVar19;
  longlong lVar20;
  undefined8 *puVar21;
  byte bVar23;
  float *unaff_RBX;
  float *pfVar22;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  float *unaff_RBP;
  code *unaff_RSI;
  float *unaff_RDI;
  undefined *puVar30;
  float *in_R10;
  float *pfVar31;
  float *unaff_R12;
  longlong *unaff_R13;
  longlong unaff_R14;
  float *unaff_R15;
  undefined2 in_FS;
  bool bVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float *unaff_retaddr;
  undefined4 uStackX_c;
  float *pfStackX_10;
  float *pfStackX_18;
  undefined4 uStackX_20;
  float fStackX_24;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  uint in_stack_000000e0;
  float *in_stack_000000f0;
  uint in_stack_000002a8;
  undefined4 in_stack_000002ac;
  float *in_stack_000002b0;
  longlong in_stack_000002c0;
  longlong in_stack_000002c8;
  undefined8 *in_stack_000002d0;
  uint in_stack_000002d8;
  undefined1 auStack_28 [32];
  undefined *puStack_8;
  undefined4 uVar34;
  
  uVar38 = (undefined4)((ulonglong)param_4 >> 0x20);
  puVar28 = auStack_28;
  puVar26 = auStack_28;
  puVar27 = auStack_28;
  puVar29 = auStack_28;
  puVar24 = auStack_28;
  puVar30 = &UNK_143608dac;
  uVar18 = (ulonglong)*(int *)(&UNK_143608dac + (ulonglong)in_CL * 4);
  pfVar19 = (float *)(&UNK_143608dac + uVar18);
  bVar32 = pfVar19 == (float *)0x0;
  bVar23 = (byte)param_5;
  bVar17 = (byte)pfVar19;
  pfVar15 = param_5;
  puVar25 = auStack_28;
  pfVar9 = unaff_RDI;
  fVar36 = unaff_XMM11_Da;
  pfVar22 = unaff_RBX;
  pfVar31 = in_R10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(in_CL) {
  case 0:
    lVar20 = pdb_1409aa260(param_2);
    uVar38 = 0;
    fVar36 = _DAT_142f61034;
    fVar33 = _DAT_142e37874;
    fVar35 = *(float *)(lVar20 + 0x1c);
    break;
  case 1:
    lVar20 = pdb_1409aa260(param_2);
    uVar38 = 0;
    fVar36 = _DAT_142e382c0;
    fVar33 = _DAT_1430679a4;
    fVar35 = *(float *)(lVar20 + 0x20);
    break;
  case 2:
    lVar20 = pdb_1409aa260(param_2);
    uVar38 = 0;
    fVar36 = 0.0;
    fVar33 = _DAT_142e37990;
    fVar35 = *(float *)(lVar20 + 0x24);
    break;
  case 3:
    lVar20 = pdb_1409aa260(param_2);
    uVar38 = 0;
    fVar36 = 0.0;
    fVar33 = _DAT_142e36f28;
    fVar35 = *(float *)(lVar20 + 0x30);
    break;
  case 4:
    lVar20 = pdb_1409aa260(param_2);
    uVar38 = 0;
    fVar36 = 0.0;
    fVar33 = _DAT_143077144;
    fVar35 = *(float *)(lVar20 + 0x38);
    break;
  case 5:
    lVar20 = pdb_1409aa260(param_2);
    uVar38 = 0;
    fVar36 = 0.0;
    fVar33 = _DAT_142e37840;
    fVar35 = *(float *)(lVar20 + 0x34);
    break;
  case 6:
    lVar20 = pdb_140a36600(param_3);
    uVar38 = *(undefined4 *)(lVar20 + 8);
    uVar34 = *(undefined4 *)(lVar20 + 0xc);
    uVar37 = *(undefined4 *)(lVar20 + 0x10);
    goto code_r0x00014298a655;
  case 7:
    lVar20 = pdb_140a368d0(param_3);
    fVar36 = (float)pub_142e32ab0(*(undefined4 *)(lVar20 + 0x18));
    fVar39 = _DAT_142e37890;
    if (_DAT_142e37890 <= fVar36 + _DAT_142e3788c) {
      fVar39 = fVar36 + _DAT_142e3788c;
    }
    uVar38 = 0;
    fVar36 = _DAT_142e37890;
    fVar33 = _DAT_142e37830;
    fVar35 = _DAT_142e37830;
    if (fVar39 <= _DAT_142e37830) {
      fVar35 = fVar39;
    }
    break;
  case 8:
    lVar20 = pdb_140a36600(param_3);
    uVar38 = *(undefined4 *)(lVar20 + 0x18);
    uVar34 = *(undefined4 *)(lVar20 + 0x1c);
    uVar37 = *(undefined4 *)(lVar20 + 0x20);
code_r0x00014298a655:
    fVar33 = (float)pdb_140de8220(uVar34,uVar37,uVar38);
    fVar36 = 0.0;
    fVar39 = 0.0;
    if (0.0 <= fVar33) {
      fVar39 = fVar33;
    }
    uVar38 = 0;
    fVar33 = _DAT_142e36f28;
    fVar35 = _DAT_142e36f28;
    if (fVar39 <= _DAT_142e36f28) {
      fVar35 = fVar39;
    }
    break;
  case 9:
    fVar36 = _DAT_142e37988;
    fVar33 = _DAT_142e37830;
    fVar35 = (float)param_4;
    break;
  case 10:
    uVar38 = 0;
    fVar36 = _DAT_14305a490;
    fVar33 = _DAT_142e37990;
    fVar35 = *param_5;
    break;
  case 0xb:
    uVar38 = 0;
    fVar36 = _DAT_142e36f28;
    fVar33 = _DAT_142e37834;
    fVar35 = param_5[1];
    break;
  case 0xc:
    uVar38 = 0;
    fVar36 = _DAT_142e37830;
    fVar33 = _DAT_142e37adc;
    fVar35 = param_5[2];
    break;
  case 0xd:
    return param_1;
  case 0xe:
    *(byte *)(unaff_RBX + 0x143608dc1) = (char)*(code *)(unaff_RBX + 0x143608dc1) + bVar17;
code_r0x00014298abae:
    unaff_R12[6] = (float)param_1;
    pfVar22 = unaff_RBX;
    unaff_RDI = pfVar9;
    pfVar31 = in_R10;
    if ((uint)*unaff_R12 < 2) {
      *unaff_R12 = 4.2039e-45;
      param_1 = *(ulonglong *)(unaff_R12 + 4);
      *(ulonglong *)(unaff_R12 + 1) = param_1;
    }
LAB_14298a810:
    do {
      in_R10 = unaff_retaddr;
      if ((unaff_RDI == (float *)0x0) || (unaff_RDI == unaff_R15)) {
        if ((pfVar22 == (float *)0x0) || (pfVar22 == unaff_RBP)) {
          return param_1;
        }
        unaff_RBX = pfVar22 + 4;
        pfVar9 = (float *)0x0;
      }
      else {
        pfVar9 = unaff_RDI + 4;
        unaff_RBX = pfVar22;
        pfVar22 = unaff_RDI;
      }
      *unaff_R13 = *unaff_R13 + 1;
      uVar3 = *(undefined8 *)pfVar22;
      pfVar22 = unaff_RBX;
      unaff_RDI = pfVar9;
      unaff_retaddr = in_R10;
    } while ((((*(ulonglong *)(unaff_RSI + 0x10) <= (ulonglong)~(uint)uVar3) ||
              (piVar10 = (int *)((ulonglong)~(uint)uVar3 * 0x18 + *(longlong *)(unaff_RSI + 8)),
              piVar10[4] != (int)((ulonglong)uVar3 >> 0x20))) || (*piVar10 == 0)) ||
            ((uVar18 = *(ulonglong *)(piVar10 + 2),
             *(ulonglong *)(pfVar31 + 0xe) <= (uVar18 & 0xffffffff) ||
             ((*(ulonglong *)(*(longlong *)(pfVar31 + 10) + (uVar18 >> 6 & 0x3ffffff) * 8) >>
               (uVar18 & 0x3f) & 1) == 0))));
    uVar18 = uVar18 >> 0x20;
    param_3 = uVar18 * 9;
    if (*(ulonglong *)(pfVar31 + 0x44) <
        *(ulonglong *)(*(longlong *)(unaff_RSI + 0x1a0) + 0x40 + uVar18 * 0x48)) {
      lVar20 = *(longlong *)(unaff_RSI + 0x1a0) + uVar18 * 0x48;
      param_3 = *(ulonglong *)(lVar20 + 0x38);
      uVar18 = *(ulonglong *)(param_3 + *(ulonglong *)(pfVar31 + 0x44) * 8);
      if (uVar18 == 0) goto LAB_14298a8ce;
      lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x18) + 0x10 + ~uVar18 * 0x30);
    }
    else {
LAB_14298a8ce:
      lVar20 = 0;
    }
    uVar8 = piVar10[1];
    lVar11 = param_8[2];
    if ((ulonglong)(*param_8 - lVar11) < 0x20) {
      puStack_8 = (undefined *)0x1;
      param_3 = 0x20;
      puVar30 = (undefined *)0x1;
      pdb_142d7f1b0(param_8,lVar11);
    }
    lVar4 = param_8[1];
    param_2 = pdb_1411ae9e0;
    *(code **)(lVar4 + lVar11) = pdb_1411ae9e0;
    *(undefined8 *)(lVar4 + 8 + lVar11) = uVar3;
    *(ulonglong *)(lVar4 + 0x10 + lVar11) = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
    *(undefined4 *)(lVar4 + 0x18 + lVar11) = 0;
    *(undefined1 *)(lVar4 + 0x1c + lVar11) = 0;
    unaff_R12 = (float *)(lVar11 + 0x20);
    param_8[2] = (longlong)unaff_R12;
    lVar11 = (ulonglong)*(byte *)(lVar20 + (ulonglong)~uVar8) * 4;
    unaff_XMM7_Da = *(float *)(&UNK_143608d78 + lVar11);
    fVar33 = *(float *)(&UNK_143608d44 + lVar11);
    param_1 = pdb_140de8220(unaff_XMM7_Da,fVar33,*(undefined4 *)(&UNK_143608d10 + lVar11));
    unaff_XMM11_Da = (float)param_1;
    unaff_XMM6_Da = fVar33 * unaff_XMM11_Da + (unaff_XMM9_Da - unaff_XMM11_Da) * unaff_XMM7_Da;
    bVar23 = *(byte *)(lVar20 + (ulonglong)~uVar8);
    pfVar19 = (float *)&UNK_143608de0;
    uVar18 = (ulonglong)*(int *)(&UNK_143608de0 + (ulonglong)bVar23 * 4);
    pfVar15 = (float *)(&UNK_143608de0 + uVar18);
    cVar7 = (char)pfVar15;
    bVar17 = (byte)unaff_RBX;
    unaff_RBP = param_13;
    pfVar31 = in_R10;
    unaff_R15 = param_14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar23) {
    case 0:
      lVar20 = pdb_1406d0830(param_7);
      unaff_XMM6_Da = *(float *)(lVar20 + 0x1c);
      *param_6 = uStackX_c;
      param_1 = pdb_1409aa280(&pfStackX_10,param_7);
      param_2 = (code *)CONCAT44(fStackX_24,uStackX_20);
      pfVar9 = pfStackX_10;
      pfVar19 = pfStackX_18;
code_r0x00014298a9e7:
      for (; unaff_retaddr = pfVar31, pfVar9 != pfVar19; pfVar9 = pfVar9 + 0x10) {
        unaff_RBX = pfVar22;
        unaff_XMM11_Da = fVar36;
        if ((float *)param_2 != (float *)0x0) {
code_r0x00014298a9f5:
          if (pfVar9 != (float *)0x0) {
            pfVar9[7] = unaff_XMM6_Da;
          }
        }
        param_2 = (code *)((longlong)param_2 + 1);
        pfVar22 = unaff_RBX;
        fVar36 = unaff_XMM11_Da;
        pfVar31 = unaff_retaddr;
      }
      goto LAB_14298a810;
    case 1:
      lVar20 = pdb_1406d0830(param_7);
      fVar33 = *(float *)(lVar20 + 0x20);
      *param_6 = uStackX_c;
      param_1 = pdb_1409aa280(&pfStackX_10,param_7);
      lVar20 = CONCAT44(fStackX_24,uStackX_20);
      for (pfVar9 = pfStackX_10; pfVar9 != pfStackX_18; pfVar9 = pfVar9 + 0x10) {
        if ((lVar20 != 0) && (pfVar9 != (float *)0x0)) {
          pfVar9[8] = fVar33;
        }
        lVar20 = lVar20 + 1;
      }
      goto LAB_14298a810;
    case 2:
      lVar20 = pdb_1406d0830(param_7);
      unaff_XMM6_Da = *(float *)(lVar20 + 0x24);
      *param_6 = uStackX_c;
      param_1 = pdb_1409aa280(&pfStackX_10,param_7);
      param_2 = (code *)CONCAT44(fStackX_24,uStackX_20);
      pfVar15 = pfStackX_10;
      pfVar19 = pfStackX_18;
code_r0x00014298aaf7:
      for (; pfVar22 = unaff_RBX, unaff_RDI = pfVar9, pfVar31 = in_R10, unaff_retaddr = in_R10,
          pfVar15 != pfVar19; pfVar15 = pfVar15 + 0x10) {
        if (((float *)param_2 != (float *)0x0) && (pfVar15 != (float *)0x0)) {
          pfVar15[9] = unaff_XMM6_Da;
        }
        param_2 = (code *)((longlong)param_2 + 1);
      }
      goto LAB_14298a810;
    case 3:
      *param_6 = uStackX_c;
      param_1 = pdb_1409aa280(&pfStackX_10,param_7);
      param_2 = (code *)CONCAT44(fStackX_24,uStackX_20);
      pfVar19 = pfStackX_18;
      for (pfVar15 = pfStackX_10; pfVar22 = unaff_RBX, unaff_RDI = pfVar9, pfVar31 = in_R10,
          unaff_retaddr = in_R10, pfVar15 != pfVar19; pfVar15 = pfVar15 + 0x10) {
        if (((float *)param_2 != (float *)0x0) && (pfVar15 != (float *)0x0)) {
          pfVar15[0xc] = unaff_XMM6_Da;
        }
code_r0x00014298ab50:
        param_2 = (code *)((longlong)param_2 + 1);
      }
      goto LAB_14298a810;
    case 4:
      *param_6 = uStackX_c;
      param_1 = pdb_1409aa280(&pfStackX_10,param_7);
      param_2 = (code *)CONCAT44(fStackX_24,uStackX_20);
      pfVar19 = pfStackX_18;
      for (pfVar15 = pfStackX_10; pfVar22 = unaff_RBX, unaff_RDI = pfVar9, pfVar31 = in_R10,
          unaff_retaddr = in_R10, pfVar15 != pfVar19; pfVar15 = pfVar15 + 0x10) {
        if (((float *)param_2 != (float *)0x0) && (pfVar15 != (float *)0x0)) {
code_r0x00014298aa76:
          pfVar15[0xe] = unaff_XMM6_Da;
        }
code_r0x00014298aa60:
        param_2 = (code *)((longlong)param_2 + 1);
      }
      goto LAB_14298a810;
    case 5:
      *param_6 = uStackX_c;
      param_1 = pdb_1409aa280(&pfStackX_10,param_7);
      pfVar15 = pfStackX_10;
      pfVar19 = pfStackX_18;
code_r0x00014298ac75:
      lVar20 = CONCAT44(fStackX_24,uStackX_20);
      for (; pfVar22 = unaff_RBX, unaff_RDI = pfVar9, pfVar31 = in_R10, unaff_retaddr = in_R10,
          pfVar15 != pfVar19; pfVar15 = pfVar15 + 0x10) {
        if ((lVar20 != 0) && (pfVar15 != (float *)0x0)) {
          pfVar15[0xd] = unaff_XMM6_Da;
        }
        lVar20 = lVar20 + 1;
      }
      goto LAB_14298a810;
    case 6:
      *param_9 = (int)param_5;
      pfVar15 = (float *)pdb_140a36600(param_10);
code_r0x00014298acc1:
      param_1 = (ulonglong)(uint)pfVar15[5];
      pfVar15[2] = pfVar15[5];
      pfVar22 = unaff_RBX;
      unaff_RDI = pfVar9;
      pfVar31 = in_R10;
      goto LAB_14298a810;
    case 7:
      goto code_r0x00014298ab77;
    case 8:
      *param_9 = (int)param_5;
      lVar20 = pdb_140a36600(param_10);
      param_1 = (ulonglong)*(uint *)(lVar20 + 0x24);
      *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x24);
    case 9:
      goto LAB_14298a810;
    case 10:
      *param_11 = param_5._4_4_;
      param_1 = pdb_140b67350(param_12);
      goto LAB_14298a810;
    case 0xb:
      *param_11 = param_5._4_4_;
      param_1 = pdb_140b67380(param_12);
      goto LAB_14298a810;
    case 0xc:
      *param_11 = param_5._4_4_;
      param_1 = pdb_140b67390(param_12);
      goto LAB_14298a810;
    case 0xd:
      goto code_r0x00014298bd99;
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
      goto code_r0x00014298bf23;
    case 0x10:
      *(char *)pfVar15 = (char)*(code *)pfVar15 + cVar7;
      unaff_RBX = (float *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar17 + 0x8d);
      pfVar15 = (float *)(ulonglong)((int)pfVar15 + 0x66666666 + (uint)(0x72 < bVar17));
      goto code_r0x00014298bfb0;
    case 0x11:
      goto code_r0x00014298be41;
    case 0x12:
      *(undefined2 *)(pfVar15 + (longlong)param_2) = in_FS;
      *(char *)pfVar15 = (char)*(code *)pfVar15 + cVar7;
      (&UNK_143608d6b)[uVar18] = (&UNK_143608d6b)[uVar18] + -0x20;
      pcVar13 = (char *)((ulonglong)auStack_28 & 0xffffff98);
      *pcVar13 = *pcVar13 + (char)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
      pcVar13 = (char *)((ulonglong)pfVar15 & 0xffffffffffffff90);
      *pcVar13 = *pcVar13 + (char)pcVar13;
      pcVar13[-0x75] = pcVar13[-0x75] + -0x20;
      pcVar13 = (char *)((ulonglong)auStack_28 & 0xffffff98);
      *pcVar13 = *pcVar13 + (char)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x14:
      pcVar13 = (char *)((ulonglong)pfVar15 & 0xffffffffffffff90);
      *pcVar13 = *pcVar13 + (char)pcVar13;
      pcVar13[-0x75] = pcVar13[-0x75] + -0x20;
      pcVar13 = (char *)((ulonglong)auStack_28 & 0xffffff98);
      *pcVar13 = *pcVar13 + (char)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x15:
      goto code_r0x00014298c1d9;
    case 0x16:
      goto code_r0x00014298bee1;
    case 0x17:
      puVar30[-0x7374b7ff] = puVar30[-0x7374b7ff] + -0x20 + (0xfffffffebc9f721f < uVar18);
      pcVar13 = (char *)((ulonglong)pfVar15 & 0xffffffffffffffe0);
      *pcVar13 = *pcVar13 + (char)pcVar13;
      unaff_RDI = (float *)((longlong)pfVar9 + 1);
      *(code *)pfVar9 = *unaff_RSI;
      unaff_RBX = (float *)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                                    CONCAT11((byte)((ulonglong)unaff_RBX >> 8) |
                                             (byte)((ulonglong)param_2 >> 8),bVar17));
      in_stack_000002b0 = pfVar19;
      unaff_RSI = unaff_RSI + 1;
      goto code_r0x00014298c1a7;
    case 0x18:
      goto code_r0x00014298be0d;
    case 0x19:
      goto code_r0x00014298bead;
    case 0x1a:
      goto code_r0x00014298c2bd;
    case 0x1b:
      *(int *)(&UNK_143608de0 + CONCAT71((int7)((ulonglong)pfVar15 >> 8),cVar7 + 'H')) =
           (int)unaff_RBX;
      goto code_r0x00014298c3ca;
    case 0x1c:
      goto code_r0x00014298c323;
    case 0x1d:
      puVar30 = &UNK_143608ddf;
      if (pfVar15 == (float *)0x0) goto code_r0x00014298c381;
      goto code_r0x00014298c37d;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case 0xf:
    param_5[0xe] = (float)((int)param_5[0xe] + (int)unaff_RSI + (uint)(0xfffffffebc9f7253 < uVar18))
    ;
    in_R10 = unaff_retaddr;
    goto code_r0x00014298aa76;
  case 0x10:
    pfVar15 = (float *)((ulonglong)param_5 & 0xffffffffffffff48);
    in_R10 = unaff_retaddr;
    goto code_r0x00014298aaf7;
  case 0x11:
    *(char *)(unaff_RBX + (longlong)unaff_RBP * 2 + 0x12) =
         (char)*(code *)(unaff_RBX + (longlong)unaff_RBP * 2 + 0x12) << (bVar17 & 0x1f);
    pfVar9 = param_5;
    goto code_r0x00014298a9f5;
  case 0x12:
    *(byte *)param_5 = (char)*(code *)param_5 + bVar23;
    *(code *)((longlong)param_5 + -0x7d) =
         (code)((char)*(code *)((longlong)param_5 + -0x7d) + bVar17);
    param_5 = param_5 + 0x12;
    *(byte *)param_5 = (char)*(code *)param_5 << 7 | (byte)*(code *)param_5 >> 1;
    return param_1;
  case 0x13:
    pfVar15 = (float *)((ulonglong)param_5 & 0xffffffffffffff40);
    in_R10 = unaff_retaddr;
    goto code_r0x00014298ac75;
  case 0x14:
    pfVar15 = param_5;
    in_R10 = unaff_retaddr;
    goto code_r0x00014298ab50;
  case 0x15:
    goto code_r0x00014298acc1;
  case 0x16:
    *param_2 = (code)((byte)*param_2 >> 1 | (char)*param_2 << 7);
    unaff_RBP = unaff_RBP;
    unaff_R15 = unaff_R15;
    fVar36 = _DAT_142e37830;
    unaff_XMM12_Da = _DAT_142e382d4;
    unaff_retaddr = in_R10;
    param_13 = unaff_RBP;
    param_14 = unaff_R15;
    goto LAB_14298a810;
  case 0x17:
    in_R10 = unaff_retaddr;
    goto code_r0x00014298aa60;
  case 0x18:
    unaff_RBP = unaff_RBP;
    unaff_R15 = unaff_R15;
    if (pfVar19 != (float *)0x0) goto LAB_14298a810;
    *(byte *)(unaff_RBX + 0x15) = (char)*(code *)(unaff_RBX + 0x15) - 1;
    unaff_RBP = unaff_RBP;
    unaff_R15 = unaff_R15;
    goto LAB_14298a810;
  case 0x19:
    pfVar9 = (float *)((ulonglong)param_5 & 0xffffffffffffff48);
    pfVar31 = unaff_retaddr;
    goto code_r0x00014298a9e7;
  case 0x1a:
    if ((int)unaff_RDI == *(int *)(unaff_RSI + 0x20)) {
      pdb_142d7e6e0(unaff_R14 + 0x20);
    }
    lVar20 = *(longlong *)(unaff_R14 + 0x28);
    *(undefined4 *)(lVar20 + (longlong)unaff_R15 * 0x20) = 0x22;
    *(float **)(lVar20 + 0x18 + (longlong)unaff_R15 * 0x20) = unaff_R12;
    *(code **)(unaff_R14 + 0x30) = (code *)((longlong)unaff_R15 + 1);
    *(longlong *)(unaff_R14 + 0x40) = *(longlong *)(unaff_R14 + 0x40) + 1;
code_r0x00014298bd99:
    unaff_R15 = unaff_retaddr;
    unaff_XMM6_Da = unaff_XMM6_Da + (unaff_XMM11_Da - unaff_XMM10_Da) * unaff_XMM7_Da;
    bVar23 = *(byte *)*in_stack_000002d0;
    pfVar19 = (float *)(ulonglong)bVar23;
    uVar18 = (ulonglong)*(int *)(&UNK_143608e14 + (ulonglong)(byte)*(code *)(unaff_RBX + 4) * 4);
    pbVar12 = &UNK_143608e14 + uVar18;
    uVar16 = (undefined7)((ulonglong)pbVar12 >> 8);
    puVar28 = auStack_28;
    pfVar9 = unaff_RDI;
    unaff_R12 = pfStackX_18;
    in_R10 = unaff_R15;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(code *)(unaff_RBX + 4)) {
    case (code)0x0:
      if (bVar23 == 0x10) goto code_r0x00014298bddb;
      break;
    case (code)0x1:
      if (bVar23 == 0x10) {
        uVar18 = CONCAT44(in_stack_000002ac,in_stack_000002a8);
        goto code_r0x00014298c0c8;
      }
      break;
    case (code)0x2:
      if (bVar23 == 0x10) {
        pfVar19 = (float *)CONCAT44(in_stack_000002ac,in_stack_000002a8);
        goto code_r0x00014298bf6d;
      }
      break;
    case (code)0x3:
      bVar32 = bVar23 == 0x10;
      goto code_r0x00014298bfd9;
    case (code)0x4:
      bVar32 = bVar23 == 0x10;
      goto code_r0x00014298be7d;
    case (code)0x5:
      bVar32 = bVar23 == 0x10;
      goto code_r0x00014298c129;
    case (code)0x6:
      param_14 = unaff_R15;
      if (bVar23 == 0x10) goto code_r0x00014298c1a7;
      break;
    case (code)0x7:
      if (bVar23 == 0x10) {
        pfVar19 = (float *)&UNK_143608c4c;
        goto code_r0x00014298c056;
      }
      break;
    case (code)0x8:
      if (bVar23 == 0x10) {
        **(float **)(in_stack_000002b0 + 4) = in_stack_000002b0[7];
        lVar20 = pdb_140a36600(in_stack_000000b8);
        *(float *)(lVar20 + 0x18) =
             unaff_XMM6_Da * (float)((ulonglong)*(undefined8 *)(lVar20 + 0x1c) >> 0x20) +
             (fVar36 - unaff_XMM6_Da) * (float)*(undefined8 *)(lVar20 + 0x1c);
      }
      break;
    case (code)0x9:
      if (bVar23 != 0x10) {
code_r0x00014298bf23:
        if (unaff_XMM12_Da <= unaff_XMM6_Da) {
          unaff_XMM12_Da = unaff_XMM6_Da;
        }
        fVar36 = _DAT_142e37830;
        if (unaff_XMM12_Da <= _DAT_142e37830) {
          fVar36 = unaff_XMM12_Da;
        }
        **(undefined4 **)(in_stack_000002c0 + 0x10) = *(undefined4 *)(in_stack_000002c0 + 0x1c);
        *in_stack_000000f0 = fVar36;
      }
      break;
    case (code)0xa:
      if (bVar23 != 0x10) {
        **(undefined4 **)(in_stack_000002c8 + 0x10) = *(undefined4 *)(in_stack_000002c8 + 0x1c);
        pdb_140b673a0(in_stack_000000b0,unaff_XMM6_Da);
      }
      break;
    case (code)0xb:
code_r0x00014298be41:
      unaff_R15 = in_R10;
      unaff_RDI = pfVar9;
      if ((char)pfVar19 != '\x10') {
        **(undefined4 **)(in_stack_000002c8 + 0x10) = *(undefined4 *)(in_stack_000002c8 + 0x1c);
        pdb_140b673c0(in_stack_000000b0,unaff_XMM6_Da);
      }
      break;
    case (code)0xc:
code_r0x00014298bee1:
      unaff_R15 = in_R10;
      unaff_RDI = pfVar9;
      if ((char)pfVar19 != '\x10') goto code_r0x00014298beef;
      break;
    case (code)0xd:
      goto code_r0x00014298c2ff;
    case (code)0xe:
      *(code *)((longlong)pfVar19 + 0x328b4801) =
           (code)((char)*(code *)((longlong)pfVar19 + 0x328b4801) + bVar23 +
                 (0xfffffffebc9f71eb < uVar18));
      puVar28 = auStack_28;
      goto code_r0x00014298c40f;
    case (code)0xf:
      *(uint *)(&UNK_143608d9f + uVar18) = *(int *)(&UNK_143608d9f + uVar18) + (uint)bVar23;
      bVar23 = bVar23 ^ (&UNK_143608d9f)[uVar18];
      puVar26 = auStack_28;
      if ((char)bVar23 < '\x01') {
        cVar7 = (char)pbVar12 + *pbVar12;
        pcVar13 = (char *)CONCAT71(uVar16,cVar7);
        pcVar13[-0x75] = pcVar13[-0x75] + bVar23;
        pcVar13[-0x7bf0f4c8] = pcVar13[-0x7bf0f4c8] + cVar7;
        *pcVar13 = *pcVar13 + cVar7;
        pcVar13[-0x75] = pcVar13[-0x75] + bVar23;
        puVar28 = (undefined1 *)((ulonglong)pcVar13 & 0xffffffff);
        pcVar1 = (code *)((longlong)unaff_RBX + -0x74b7e3be);
        cVar2 = *pcVar1;
        *pcVar1 = (code)((char)*pcVar1 + bVar23);
        *(char *)((ulonglong)bVar23 + 0x328b4801) =
             *(char *)((ulonglong)bVar23 + 0x328b4801) + bVar23 + CARRY1((byte)cVar2,bVar23);
        goto code_r0x00014298c3b3;
      }
      goto code_r0x00014298c35f;
    case (code)0x10:
      *(uint *)(&UNK_143608d9f + uVar18) = *(int *)(&UNK_143608d9f + uVar18) + (uint)bVar23;
      bVar23 = bVar23 ^ (&UNK_143608d9f)[uVar18];
      puVar29 = auStack_28;
      if ((char)bVar23 < '\x01') {
        pcVar13 = (char *)(CONCAT71(uVar16,(char)pbVar12 + *pbVar12) + -0x75);
        *pcVar13 = *pcVar13 + bVar23;
        *(byte *)unaff_RDI = (char)*(code *)unaff_RDI + bVar23;
        puVar28 = auStack_28;
        goto code_r0x00014298c3e3;
      }
      goto code_r0x00014298c3b7;
    default:
      bVar23 = (byte)((ulonglong)unaff_RBX >> 8) ^ *pbVar12;
      piVar10 = (int *)(CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                                 CONCAT11(bVar23,(char)unaff_RBX)) + 0x31);
      *piVar10 = *piVar10 + 1;
      *pbVar12 = *pbVar12 ^ bVar23;
      iRam00000001c15fc660 = iRam00000001c15fc660 + -1;
                    /* WARNING: Could not recover jumptable at 0x000143608e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)(ulonglong)uRam000000013d5fc667)(0x9eff382f);
      return uVar18;
    }
    goto code_r0x00014298c256;
  case 0x1b:
    pcVar13 = (char *)(CONCAT71((int7)((ulonglong)param_5 >> 8),bVar23 + (char)*(code *)param_5) +
                      -0x73);
    *pcVar13 = *pcVar13 + bVar17;
code_r0x00014298c056:
    fVar36 = (float)pdb_142b5a620(pfVar19,unaff_XMM6_Da);
    **(float **)(in_stack_000002b0 + 4) = in_stack_000002b0[7];
    puVar14 = (uint *)pdb_140a368d0(in_stack_000000b8);
    if ((((float)puVar14[6] != fVar36) || (NAN((float)puVar14[6]) || NAN(fVar36))) &&
       (puVar14[6] = (uint)fVar36, *puVar14 < 2)) {
      *puVar14 = 3;
      *(undefined8 *)(puVar14 + 1) = *(undefined8 *)(puVar14 + 4);
    }
    goto code_r0x00014298c256;
  case 0x1c:
code_r0x00014298beef:
    **(undefined4 **)(in_stack_000002c8 + 0x10) = *(undefined4 *)(in_stack_000002c8 + 0x1c);
    pdb_140b67360(in_stack_000000b0,unaff_XMM6_Da);
    unaff_RDI = pfVar9;
    goto code_r0x00014298c256;
  case 0x1d:
    *param_2 = (code)((char)*param_2 << 1 | (char)*param_2 < '\0');
    *(byte *)param_5 = (char)*(code *)param_5 + bVar23;
code_r0x00014298bf6d:
    **(float **)(pfVar19 + 4) = pfVar19[7];
    pdb_1409aa280(&param_12,param_7);
    pfVar19 = param_13;
    param_2 = (code *)param_14;
    param_14 = unaff_R15;
    for (pfVar15 = param_12; unaff_RDI = pfVar9, unaff_R15 = param_14, pfVar15 != pfVar19;
        pfVar15 = pfVar15 + 0x10) {
      if (((float *)param_2 != (float *)0x0) && (pfVar15 != (float *)0x0)) {
        pfVar15[9] = unaff_XMM6_Da;
      }
code_r0x00014298bfb0:
      param_2 = (code *)((longlong)param_2 + 1);
    }
    goto code_r0x00014298c256;
  case 0x1e:
code_r0x00014298be0d:
    *(code *)((longlong)pfVar15 + -0x75) =
         (code)((char)*(code *)((longlong)pfVar15 + -0x75) + (char)pfVar19);
    pcVar13 = (char *)((ulonglong)auStack_28 & 0xffffff98);
    *pcVar13 = *pcVar13 + (char)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1f:
    *(byte *)unaff_RDI = (char)*(code *)unaff_RDI - bVar17;
    uVar18 = (ulonglong)in_stack_000002a8;
code_r0x00014298c0c8:
    **(undefined4 **)(uVar18 + 0x10) = *(undefined4 *)(uVar18 + 0x1c);
    pdb_1409aa280(&param_12,param_7);
    for (pfVar9 = param_12; pfVar9 != param_13; pfVar9 = pfVar9 + 0x10) {
      if ((param_14 != (float *)0x0) && (pfVar9 != (float *)0x0)) {
        pfVar9[8] = unaff_XMM6_Da;
      }
      param_14 = (float *)((longlong)param_14 + 1);
    }
    goto code_r0x00014298c256;
  case 0x20:
code_r0x00014298c129:
    if (bVar32) {
      **(undefined4 **)(CONCAT44(in_stack_000002ac,in_stack_000002a8) + 0x10) =
           *(undefined4 *)(CONCAT44(in_stack_000002ac,in_stack_000002a8) + 0x1c);
      pdb_1409aa280(&param_12,param_7);
      param_5 = param_12;
      while( true ) {
        bVar32 = param_5 == param_13;
        param_2 = (code *)param_14;
code_r0x00014298c17a:
        if (bVar32) break;
        if (((float *)param_2 != (float *)0x0) && (param_5 != (float *)0x0)) {
          param_5[0xd] = unaff_XMM6_Da;
        }
        param_14 = (float *)((longlong)param_2 + 1);
        param_5 = param_5 + 0x10;
      }
    }
    goto code_r0x00014298c256;
  case 0x21:
code_r0x00014298bfd9:
    if (bVar32) {
      **(undefined4 **)(CONCAT44(in_stack_000002ac,in_stack_000002a8) + 0x10) =
           *(undefined4 *)(CONCAT44(in_stack_000002ac,in_stack_000002a8) + 0x1c);
      pdb_1409aa280(&param_12,param_7);
      for (pfVar9 = param_12; pfVar9 != param_13; pfVar9 = pfVar9 + 0x10) {
        if ((param_14 != (float *)0x0) && (pfVar9 != (float *)0x0)) {
          pfVar9[0xc] = unaff_XMM6_Da;
        }
        param_14 = (float *)((longlong)param_14 + 1);
      }
    }
    goto code_r0x00014298c256;
  case 0x22:
    *(byte *)param_5 = (char)*(code *)param_5 + bVar23;
    in_stack_000002b0 = pfVar19;
    param_14 = unaff_R15;
code_r0x00014298c1a7:
    **(float **)(in_stack_000002b0 + 4) = in_stack_000002b0[7];
    pfVar15 = (float *)pdb_140a36600(in_stack_000000b8);
    unaff_XMM11_Da =
         unaff_XMM6_Da * (float)((ulonglong)*(undefined8 *)(pfVar15 + 3) >> 0x20) +
         (fVar36 - unaff_XMM6_Da) * (float)*(undefined8 *)(pfVar15 + 3);
    pfVar9 = unaff_RDI;
code_r0x00014298c1d9:
    pfVar15[2] = unaff_XMM11_Da;
    unaff_RDI = pfVar9;
    unaff_R15 = param_14;
    goto code_r0x00014298c256;
  case 0x23:
code_r0x00014298bead:
    *(code *)((longlong)pfVar15 + -0x75) =
         (code)((char)*(code *)((longlong)pfVar15 + -0x75) + (char)pfVar19);
    *(undefined2 *)(pfVar15 + (longlong)param_2) = in_FS;
    *(char *)pfVar15 = (char)*(code *)pfVar15 + (char)pfVar15;
    *(code *)((longlong)pfVar15 + -0x75) =
         (code)((char)*(code *)((longlong)pfVar15 + -0x75) + (char)pfVar19);
    pcVar13 = (char *)((ulonglong)auStack_28 & 0xffffff98);
    *pcVar13 = *pcVar13 + (char)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x24:
    bVar32 = (int)param_5 == (int)pfVar19;
    param_13 = pfVar19;
    goto code_r0x00014298c17a;
  case 0x25:
    *(byte *)param_5 = (char)*(code *)param_5 + bVar23;
code_r0x00014298bddb:
    **(undefined4 **)(CONCAT44(in_stack_000002ac,in_stack_000002a8) + 0x10) =
         *(undefined4 *)(CONCAT44(in_stack_000002ac,in_stack_000002a8) + 0x1c);
    pdb_1409aa280(&param_12,param_7);
    for (pfVar9 = param_12; pfVar9 != param_13; pfVar9 = pfVar9 + 0x10) {
      if ((param_14 != (float *)0x0) && (pfVar9 != (float *)0x0)) {
        pfVar9[7] = unaff_XMM6_Da;
      }
      param_14 = (float *)((longlong)param_14 + 1);
    }
    goto code_r0x00014298c256;
  case 0x26:
    unaff_RDI = (float *)((ulonglong)unaff_retaddr & 0xffffffff);
code_r0x00014298be7d:
    if (bVar32) {
      **(undefined4 **)(CONCAT44(in_stack_000002ac,in_stack_000002a8) + 0x10) =
           *(undefined4 *)(CONCAT44(in_stack_000002ac,in_stack_000002a8) + 0x1c);
      pdb_1409aa280(&param_12,param_7);
      for (pfVar9 = param_12; pfVar9 != param_13; pfVar9 = pfVar9 + 0x10) {
        if ((param_14 != (float *)0x0) && (pfVar9 != (float *)0x0)) {
          pfVar9[0xe] = unaff_XMM6_Da;
        }
        param_14 = (float *)((longlong)param_14 + 1);
      }
    }
code_r0x00014298c256:
    unaff_RDI[(longlong)unaff_RSI] = fStackX_24;
    unaff_RBX[3] = unaff_XMM10_Da;
    puVar28 = auStack_28;
    if (in_stack_000000e0 == 0) goto LAB_14298c49a;
    lVar20 = 1;
    if (((((ulonglong)in_stack_000000e0 ^ 0xffffffff) < *(ulonglong *)(unaff_R15 + 4)) &&
        (param_2 = (code *)(((ulonglong)in_stack_000000e0 ^ 0xffffffff) * 0x18 +
                           *(longlong *)(unaff_R15 + 2)),
        *(float *)((longlong)param_2 + 0x10) == SUB84(unaff_R13,0))) &&
       (param_14 = unaff_R15, *(float *)param_2 != 0.0)) {
code_r0x00014298c2ab:
      pfVar19 = *(float **)((longlong)param_2 + 8);
      param_3 = (ulonglong)pfVar19 & 0xffffffff;
      if (param_3 < *(ulonglong *)(unaff_R12 + 0xe)) {
code_r0x00014298c2bd:
        if ((*(ulonglong *)(*(longlong *)(unaff_R12 + 10) + (param_3 >> 6 & 0x3ffffff) * 8) >>
             ((ulonglong)pfVar19 & 0x3f) & 1) != 0) {
          pbVar12 = (byte *)(ulonglong)(uint)*(float *)((longlong)param_2 + 4);
          param_3 = *(ulonglong *)
                     (*(longlong *)(param_14 + 0x68) + 0x18 + ((ulonglong)pfVar19 >> 0x20) * 0x48);
          pfVar19 = *(float **)
                     (*(longlong *)
                       (*(longlong *)(param_14 + 0x68) + 0x38 + ((ulonglong)pfVar19 >> 0x20) * 0x48)
                     + *(longlong *)(unaff_R12 + 0x46) * 8);
code_r0x00014298c2fc:
          pfVar19 = (float *)~(ulonglong)pfVar19;
          puVar28 = puVar24;
code_r0x00014298c2ff:
          uVar8 = *(byte *)(*(longlong *)(param_3 + 0x10 + (longlong)pfVar19 * 0x30) + 0x10 +
                           (ulonglong)~(uint)pbVar12 * 0x18) - 9;
          pfVar15 = (float *)(ulonglong)uVar8;
          if (uVar8 < 4) {
code_r0x00014298c323:
            switch(&UNK_143608e48 + *(int *)(&UNK_143608e48 + (longlong)pfVar15 * 4)) {
            case (undefined *)0x14298c333:
              puVar25 = puVar28;
              if (*(char *)**(undefined8 **)(puVar28 + 0x2f8) == '\x04') goto LAB_14298c49a;
code_r0x00014298c347:
              puVar21 = *(undefined8 **)(puVar25 + 0x300);
              *(undefined4 *)puVar21[2] = *(undefined4 *)((longlong)puVar21 + 0x1c);
              unaff_RSI = (code *)*puVar21;
              puVar26 = puVar25;
              pfVar9 = *(float **)(unaff_RSI + 0x30);
code_r0x00014298c35f:
              unaff_RBX = *(float **)(unaff_RSI + 0x40);
              if (pfVar9 == *(float **)(unaff_RSI + 0x20)) {
                *(undefined8 *)(puVar26 + -8) = 0x14298c372;
                pdb_142d7e980(unaff_RSI + 0x20);
              }
              pfVar15 = *(float **)(unaff_RSI + 0x28);
              puVar30 = (undefined *)((longlong)pfVar9 << 4);
code_r0x00014298c37d:
              *(float **)((longlong)pfVar15 + (longlong)puVar30) = unaff_RBX;
              puVar27 = puVar26;
code_r0x00014298c381:
              *(code *)((longlong)pfVar15 + (longlong)(puVar30 + 8)) = (code)0x4;
              puVar28 = puVar27;
              break;
            case (undefined *)0x14298c38b:
              if (*(char *)**(undefined8 **)(puVar28 + 0x2f8) == '\v') goto LAB_14298c49a;
              puVar21 = *(undefined8 **)(puVar28 + 0x300);
code_r0x00014298c3a7:
              *(undefined4 *)puVar21[2] = *(undefined4 *)((longlong)puVar21 + 0x1c);
              unaff_RSI = (code *)*puVar21;
code_r0x00014298c3b3:
              puVar29 = puVar28;
              pfVar9 = *(float **)(unaff_RSI + 0x30);
code_r0x00014298c3b7:
              unaff_RBX = *(float **)(unaff_RSI + 0x40);
              if (pfVar9 == *(float **)(unaff_RSI + 0x20)) {
                *(undefined8 *)(puVar29 + -8) = 0x14298c3ca;
                pdb_142d7e980(unaff_RSI + 0x20);
              }
code_r0x00014298c3ca:
              lVar20 = *(longlong *)(unaff_RSI + 0x28);
              *(float **)(lVar20 + (longlong)pfVar9 * 0x10) = unaff_RBX;
              *(undefined1 *)(lVar20 + 8 + (longlong)pfVar9 * 0x10) = 8;
              puVar28 = puVar29;
              break;
            case (undefined *)0x14298c3e3:
code_r0x00014298c3e3:
              if ((byte)(*(char *)**(undefined8 **)(puVar28 + 0x2f8) - 0xdU) < 2)
              goto LAB_14298c49a;
              puVar21 = *(undefined8 **)(puVar28 + 0x300);
              *(undefined4 *)puVar21[2] = *(undefined4 *)((longlong)puVar21 + 0x1c);
              unaff_RSI = (code *)*puVar21;
code_r0x00014298c40f:
              pfVar9 = *(float **)(unaff_RSI + 0x30);
              uVar3 = *(undefined8 *)(unaff_RSI + 0x40);
              if (pfVar9 == *(float **)(unaff_RSI + 0x20)) {
                *(undefined8 *)(puVar28 + -8) = 0x14298c426;
                pdb_142d7e980(unaff_RSI + 0x20);
              }
              lVar20 = *(longlong *)(unaff_RSI + 0x28);
              *(undefined8 *)(lVar20 + (longlong)pfVar9 * 0x10) = uVar3;
              *(undefined1 *)(lVar20 + 8 + (longlong)pfVar9 * 0x10) = 9;
              break;
            case (undefined *)0x14298c43c:
              if ((*(byte *)**(undefined8 **)(puVar28 + 0x2f8) & 0x1e) == 2) goto LAB_14298c49a;
              puVar21 = *(undefined8 **)(puVar28 + 0x300);
              *(undefined4 *)puVar21[2] = *(undefined4 *)((longlong)puVar21 + 0x1c);
              unaff_RSI = (code *)*puVar21;
              pfVar9 = *(float **)(unaff_RSI + 0x30);
              uVar3 = *(undefined8 *)(unaff_RSI + 0x40);
              if (pfVar9 == *(float **)(unaff_RSI + 0x20)) {
                *(undefined8 *)(puVar28 + -8) = 0x14298c47b;
                pdb_142d7e980(unaff_RSI + 0x20);
              }
              lVar20 = *(longlong *)(unaff_RSI + 0x28);
              *(undefined8 *)(lVar20 + (longlong)pfVar9 * 0x10) = uVar3;
              *(undefined1 *)(lVar20 + 8 + (longlong)pfVar9 * 0x10) = 1;
            }
            *(code **)(unaff_RSI + 0x30) = (code *)((longlong)pfVar9 + 1);
            *(longlong *)(unaff_RSI + 0x40) = *(longlong *)(unaff_RSI + 0x40) + 1;
          }
LAB_14298c49a:
          uVar18 = **(ulonglong **)(puVar28 + 0x130);
          uVar6 = (*(ulonglong **)(puVar28 + 0x130))[1];
          puVar5 = *(ulonglong **)(puVar28 + 0x2c8);
          *puVar5 = uVar18;
          puVar5[1] = uVar6;
          return uVar18;
        }
      }
      lVar20 = (longlong)pfVar19 << 0x20;
    }
    puStack_8 = &UNK_143608ca8;
    param_12 = (float *)lVar20;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143608b58,0x2b,&param_12,&UNK_143608b38);
  case 0x27:
    (&UNK_143608e16 + uVar18)[(longlong)unaff_RDI] =
         (&UNK_143608e16 + uVar18)[(longlong)unaff_RDI] | bVar23;
    *(byte *)unaff_RDI = (char)*(code *)unaff_RDI + bVar17;
    *(byte *)unaff_RDI = (char)*(code *)unaff_RDI + bVar17;
    *(byte *)param_5 = (char)*(code *)param_5 + bVar23;
    param_14 = unaff_R15;
    goto code_r0x00014298c2ab;
  case 0x28:
    puVar21 = (undefined8 *)(ulonglong)in_stack_000002d8;
    puVar28 = auStack_28;
    goto code_r0x00014298c3a7;
  case 0x29:
    puVar24 = (undefined1 *)((ulonglong)param_5 & 0xffffffff);
    piVar10 = (int *)((ulonglong)auStack_28 & 0xffffff18);
    *piVar10 = *piVar10 + (int)piVar10;
    *(char *)((longlong)piVar10 + -0x75) = *(char *)((longlong)piVar10 + -0x75) + bVar17;
    pbVar12 = (byte *)((ulonglong)piVar10 | 0xd1);
    goto code_r0x00014298c2fc;
  case 0x2a:
    goto code_r0x00014298c347;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return CONCAT44(uVar38,(fVar35 - fVar36) / (fVar33 - fVar36));
code_r0x00014298ab77:
  *param_9 = (int)param_5;
  unaff_R12 = (float *)pdb_140a368d0(param_10);
  fVar33 = unaff_XMM10_Da;
  if (unaff_XMM10_Da <= unaff_XMM6_Da) {
    fVar33 = unaff_XMM6_Da;
  }
  fVar35 = fVar36;
  if (fVar33 <= fVar36) {
    fVar35 = fVar33;
  }
  param_1 = pub_142e32a10(fVar35 + unaff_XMM12_Da);
  goto code_r0x00014298abae;
}

