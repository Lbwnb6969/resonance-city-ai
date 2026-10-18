// VA 0x140b4d760, PDB extent 311 bytes
// country_core::systems::ui_edit_focus::wall_under_cursor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140b55ac1) overlaps instruction at (ram,0x000140b55abb)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui_edit_focus::wall_under_cursor
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
   Extent: 311 */

code * pdb_140b4d760(undefined8 param_1,float *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [15];
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  code *pcVar12;
  undefined7 uVar19;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  char *pcVar18;
  undefined1 uVar20;
  byte bVar21;
  undefined *puVar22;
  byte *pbVar23;
  char cVar24;
  float *pfVar25;
  float *pfVar26;
  code *unaff_RBX;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  longlong *unaff_RBP;
  code cVar34;
  undefined4 *puVar35;
  byte *pbVar36;
  longlong lVar37;
  uint uVar38;
  ushort uVar39;
  ulonglong in_R10;
  longlong lVar40;
  longlong unaff_R12;
  undefined8 *unaff_R13;
  float *unaff_R14;
  longlong *plVar41;
  undefined8 *unaff_R15;
  undefined4 *puVar42;
  bool bVar43;
  int iVar44;
  int iVar45;
  byte bVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  undefined8 uVar50;
  undefined1 auVar51 [14];
  float fVar66;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar61 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar62 [16];
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  float fVar71;
  float fVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  float fVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float unaff_XMM9_Da;
  float fVar78;
  float fVar79;
  longlong lStack_98;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  float *pfStack_68;
  float *pfStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined1 *puStack_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  undefined8 uStack_30;
  byte bStack_28;
  undefined7 uStack_27;
  undefined1 *puStack_20;
  undefined1 uStack_18;
  undefined7 uStack_17;
  undefined1 auVar64 [16];
  undefined1 auVar54 [16];
  undefined1 auVar63 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  
  puVar28 = auStack_88;
  puVar29 = auStack_88;
  puVar30 = auStack_88;
  puVar31 = auStack_88;
  puVar33 = auStack_88;
  puVar27 = auStack_88;
  puVar32 = auStack_88;
  uStack_58 = 0x643;
  pfStack_60 = (float *)CONCAT44(pfStack_60._4_4_,0x7f7fffff);
  uVar13 = 0;
  pfVar25 = param_2;
  pdb_1409f9030(&bStack_50,param_1);
  if (bStack_50 == 0x11) {
LAB_140b4d84e:
    return (code *)0x0;
  }
  fVar47 = (float)uStack_38 - *param_2;
  fVar66 = (float)uStack_30 - param_2[2];
  auVar52._0_4_ = fVar47 * fVar47;
  auVar52._4_4_ = fVar66 * fVar66;
  auVar52._8_4_ = ((float)uStack_30 - param_2[2]) * ((float)uStack_30 - param_2[2]);
  auVar52._12_4_ = (uStack_30._4_4_ - param_2[3]) * (uStack_30._4_4_ - param_2[3]);
  pfVar26 = (float *)&UNK_143044340;
  if ((char)*param_3 != '\0') {
    pfVar26 = (float *)((longlong)param_3 + 4);
  }
  fVar73 = *pfVar26 - *param_2;
  fVar77 = pfVar26[2] - param_2[2];
  fVar77 = fVar77 * fVar77;
  fVar47 = uStack_38._4_4_ - param_2[1];
  fVar66 = pfVar26[1] - param_2[1];
  fVar71 = 0.0 - param_2[3];
  fVar72 = 0.0 - param_2[3];
  auVar68._0_4_ = fVar47 * fVar47;
  auVar68._4_4_ = fVar66 * fVar66;
  auVar68._8_4_ = fVar71 * fVar71;
  auVar68._12_4_ = fVar72 * fVar72;
  auVar74._0_4_ = auVar52._4_4_ + auVar52._0_4_ + auVar68._0_4_;
  auVar74._4_4_ = fVar77 + fVar73 * fVar73 + auVar68._4_4_;
  auVar74._8_4_ = auVar52._8_4_ + auVar52._4_4_ + auVar68._8_4_;
  auVar74._12_4_ = auVar52._12_4_ + fVar77 + auVar68._12_4_;
  auVar52 = sqrtps(auVar52,auVar74);
  fVar47 = auVar52._4_4_;
  auVar67._4_4_ = fVar47;
  auVar67._0_4_ = fVar47;
  auVar67._8_4_ = auVar52._12_4_;
  auVar67._12_4_ = auVar52._12_4_;
  if (fVar47 <= auVar52._0_4_) {
    return (code *)0x0;
  }
  uStack_17 = uStack_3f;
  auVar7._7_8_ = puStack_48;
  auVar7._0_7_ = uStack_4f;
  auVar61[0xf] = uStack_40;
  auVar61._0_15_ = auVar7;
  auVar51 = auVar7._0_14_;
  uStack_27 = uStack_4f;
  puStack_20 = puStack_48;
  uStack_18 = uStack_40;
  bStack_28 = bStack_50;
  puVar22 = &UNK_14305a33c;
  uVar11 = (ulonglong)*(int *)(&UNK_14305a33c + (ulonglong)(uint)bStack_50 * 4);
  pcVar12 = (code *)(&UNK_14305a33c + uVar11);
  bVar46 = (byte)pcVar12;
  uVar19 = (undefined7)((ulonglong)pcVar12 >> 8);
  iVar44 = (int)param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_50) {
  case 0:
  case 1:
  case 2:
  case 8:
  case 9:
    return (code *)0x1;
  case 3:
  case 0xc:
  case 0xf:
  case 0x10:
    bStack_50 = (byte)&bStack_28;
    uStack_4f = (undefined7)((ulonglong)&bStack_28 >> 8);
    pcVar12 = pdb_140b55630;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
    goto LAB_140b4d84e;
  case 0x11:
  case 0x12:
  case 0x19:
  case 0x1a:
    puVar27 = auStack_80;
    pcVar12 = (code *)(ulonglong)((int)pcVar12 + 0x250bfbc);
    break;
  case 0x13:
    return pcVar12;
  case 0x14:
  case 0x1d:
  case 0x20:
  case 0x21:
    return pcVar12;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1b:
  case 0x1c:
    *pcVar12 = (code)((char)*pcVar12 + bVar46);
    puVar27 = auStack_88;
    break;
  case 0x1e:
  case 0x1f:
    pcVar12 = (code *)swi(3);
    pcVar12 = (code *)(*pcVar12)();
    return pcVar12;
  case 0x22:
  case 0x23:
  case 0x2a:
  case 0x2b:
    plVar41 = (longlong *)&stack0xffffffffffffff70;
    cVar8 = '\x03';
    do {
      unaff_RBP = unaff_RBP + -1;
      plVar41 = plVar41 + -1;
      *plVar41 = *unaff_RBP;
      cVar8 = cVar8 + -1;
    } while ('\0' < cVar8);
    _UNK_14305a340 = pfVar26[1];
    _UNK_14305a33c = 5;
    return (code *)&UNK_14305a33c;
  case 0x24:
    puVar22 = *(undefined **)(unaff_R14 + 0xc);
    pfVar26 = *(float **)(unaff_R14 + 0xe);
    auVar51 = ZEXT414((uint)((ulonglong)pcVar12 >> 0x39));
    goto code_r0x000140b4d9e5;
  case 0x25:
  case 0x2e:
  case 0x31:
  case 0x32:
    goto code_r0x000140b4da19;
  case 0x26:
  case 0x27:
    (&UNK_14305a33e)[uVar11] = (&UNK_14305a33e)[uVar11] | (byte)((ulonglong)unaff_RBX >> 8);
    goto code_r0x000140b4d8fe;
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2d:
code_r0x000140b4d9e5:
    auVar60[0xe] = auVar51[7];
    auVar60._0_14_ = auVar51;
    auVar60[0xf] = auVar51[7];
    auVar59._14_2_ = auVar60._14_2_;
    auVar59._0_13_ = auVar51._0_13_;
    auVar59[0xd] = auVar51[6];
    auVar58._13_3_ = auVar59._13_3_;
    auVar58._0_12_ = auVar51._0_12_;
    auVar58[0xc] = auVar51[6];
    auVar57._12_4_ = auVar58._12_4_;
    auVar57._0_11_ = auVar51._0_11_;
    auVar57[0xb] = auVar51[5];
    auVar56._11_5_ = auVar57._11_5_;
    auVar56._0_10_ = auVar51._0_10_;
    auVar56[10] = auVar51[5];
    auVar55._10_6_ = auVar56._10_6_;
    auVar55._0_9_ = auVar51._0_9_;
    auVar55[9] = auVar51[4];
    auVar54._9_7_ = auVar55._9_7_;
    auVar54._0_8_ = auVar51._0_8_;
    auVar54[8] = auVar51[4];
    auVar53._8_8_ = auVar54._8_8_;
    auVar53[7] = auVar51[3];
    auVar53[6] = auVar51[3];
    auVar53[5] = auVar51[2];
    auVar53[4] = auVar51[2];
    auVar53[3] = auVar51[1];
    auVar53[2] = auVar51[1];
    auVar53[0] = auVar51[0];
    auVar53[1] = auVar53[0];
    auVar52 = pshuflw(auVar53,auVar53,0);
    auVar61._0_8_ = auVar52._0_8_;
    auVar61._8_4_ = auVar52._0_4_;
    auVar61._12_4_ = auVar52._4_4_;
    pfVar25 = (float *)0x0;
    auVar67._8_4_ = 0xffffffff;
    auVar67._0_8_ = 0xffffffffffffffff;
    auVar67._12_4_ = 0xffffffff;
    do {
      pcVar12 = (code *)((ulonglong)pcVar12 & (ulonglong)pfVar26);
      auVar68 = *(undefined1 (*) [16])(puVar22 + (longlong)pcVar12);
      auVar75[0] = -(auVar68[0] == auVar61[0]);
      auVar75[1] = -(auVar68[1] == auVar61[1]);
      auVar75[2] = -(auVar68[2] == auVar61[2]);
      auVar75[3] = -(auVar68[3] == auVar61[3]);
      auVar75[4] = -(auVar68[4] == auVar61[4]);
      auVar75[5] = -(auVar68[5] == auVar61[5]);
      auVar75[6] = -(auVar68[6] == auVar61[6]);
      auVar75[7] = -(auVar68[7] == auVar61[7]);
      auVar75[8] = -(auVar68[8] == auVar61[8]);
      auVar75[9] = -(auVar68[9] == auVar61[9]);
      auVar75[10] = -(auVar68[10] == auVar61[10]);
      auVar75[0xb] = -(auVar68[0xb] == auVar61[0xb]);
      auVar75[0xc] = -(auVar68[0xc] == auVar61[0xc]);
      auVar75[0xd] = -(auVar68[0xd] == auVar61[0xd]);
      auVar75[0xe] = -(auVar68[0xe] == auVar61[0xe]);
      auVar75[0xf] = -(auVar68[0xf] == auVar61[0xf]);
      uVar39 = (ushort)(SUB161(auVar75 >> 7,0) & 1) | (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe | (ushort)(auVar75[0xf] >> 7) << 0xf;
      uVar13 = (ulonglong)uVar39;
      while (uVar39 != 0) {
        uVar10 = 0;
        for (uVar38 = (uint)uVar13; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        in_R10 = (ulonglong)uVar10;
code_r0x000140b4da19:
        lVar17 = ((ulonglong)(pcVar12 + in_R10) & (ulonglong)pfVar26) * -0x68;
        if (iVar44 == *(int *)(puVar22 + lVar17 + -0x68)) {
          if (*(longlong *)(puVar22 + lVar17 + -0x60) == 7) {
            *(int *)(unaff_RBX + 4) = iVar44;
            param_3 = (longlong *)0x5;
          }
          else {
            param_3 = (longlong *)0x0;
            if ((int)*(longlong *)(puVar22 + lVar17 + -0x60) == 6) {
              *(int *)(unaff_RBX + 4) = iVar44;
              param_3 = (longlong *)0x4;
            }
          }
          goto code_r0x000140b4da67;
        }
        iVar45 = (int)uVar13 + -1;
        uVar39 = (ushort)iVar45 & (ushort)uVar13;
        uVar13 = (ulonglong)CONCAT22((short)((uint)iVar45 >> 0x10),uVar39);
      }
      auVar69[0] = -(auVar68[0] == auVar67[0]);
      auVar69[1] = -(auVar68[1] == auVar67[1]);
      auVar69[2] = -(auVar68[2] == auVar67[2]);
      auVar69[3] = -(auVar68[3] == auVar67[3]);
      auVar69[4] = -(auVar68[4] == auVar67[4]);
      auVar69[5] = -(auVar68[5] == auVar67[5]);
      auVar69[6] = -(auVar68[6] == auVar67[6]);
      auVar69[7] = -(auVar68[7] == auVar67[7]);
      auVar69[8] = -(auVar68[8] == auVar67[8]);
      auVar69[9] = -(auVar68[9] == auVar67[9]);
      auVar69[10] = -(auVar68[10] == auVar67[10]);
      auVar69[0xb] = -(auVar68[0xb] == auVar67[0xb]);
      auVar69[0xc] = -(auVar68[0xc] == auVar67[0xc]);
      auVar69[0xd] = -(auVar68[0xd] == auVar67[0xd]);
      auVar69[0xe] = -(auVar68[0xe] == auVar67[0xe]);
      auVar69[0xf] = -(auVar68[0xf] == auVar67[0xf]);
      if ((((((((((((((((SUB161(auVar69 >> 7,0) & 1) != 0 || (SUB161(auVar69 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar69 >> 0x17,0) & 1) != 0) || (SUB161(auVar69 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar69 >> 0x27,0) & 1) != 0) || (SUB161(auVar69 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar69 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar69 >> 0x3f,0) & 1) != 0) || (SUB161(auVar69 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar69 >> 0x4f,0) & 1) != 0) || (SUB161(auVar69 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar69 >> 0x5f,0) & 1) != 0) || (SUB161(auVar69 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar69 >> 0x6f,0) & 1) != 0) || (SUB161(auVar69 >> 0x77,0) & 1) != 0) ||
          auVar69[0xf] < '\0') {
code_r0x000140b4da67:
        *(int *)unaff_RBX = (int)param_3;
        return unaff_RBX;
      }
      pcVar12 = pcVar12 + (longlong)pfVar25 + 0x10;
      pfVar25 = pfVar25 + 4;
    } while( true );
  case 0x2f:
  case 0x30:
    *(int *)(&UNK_14305a2c5 + uVar11) = *(int *)(&UNK_14305a2c5 + uVar11) + 0x4305a33c;
    plVar41 = (longlong *)&stack0xffffffffffffff70;
    cVar8 = '\x03';
    do {
      unaff_RBP = unaff_RBP + -1;
      plVar41 = plVar41 + -1;
      *plVar41 = *unaff_RBP;
      cVar8 = cVar8 + -1;
    } while ('\0' < cVar8);
    _UNK_14305a344 = *(code **)(pfVar26 + 2);
    pcVar12 = (code *)0x2;
code_r0x000140b4d8fe:
    _UNK_14305a33c = (int)pcVar12;
    return (code *)&UNK_14305a33c;
  case 0x33:
  case 0x3c:
    UNK_14305a2c5 = UNK_14305a2c5 + bVar46;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    pfStack_60 = (float *)CONCAT44(pfStack_60._4_4_,0x7f7fffff);
    pdb_1409f94a0(unaff_RBP + 0x16);
    if (*(int *)((longlong)unaff_RBP + 0xe4) == 2) {
LAB_140b51ee7:
      uVar50 = *(undefined8 *)unaff_RBX;
      lVar17 = *(longlong *)unaff_R14;
      *(int *)(unaff_RBP + 7) = (int)unaff_RBP[0xb];
      unaff_RBP[6] = unaff_RBP[10];
      lVar15 = *param_3;
      lVar16 = param_3[1];
      unaff_RBP[-2] = 0;
      unaff_RBP[-1] = 8;
      *unaff_RBP = 0;
      fVar47 = *(float *)(unaff_RBP + 7) + _UNK_14304ab14;
      fVar66 = *(float *)(unaff_RBP + 6) + _UNK_14304ab18;
      fVar71 = *(float *)(unaff_RBP + 7) + _UNK_14304ab1c;
      *(float *)(unaff_RBP + 0x16) = *(float *)(unaff_RBP + 6) + _DAT_14304ab10;
      *(float *)((longlong)unaff_RBP + 0xb4) = fVar47;
      *(float *)(unaff_RBP + 0x17) = fVar66;
      *(float *)((longlong)unaff_RBP + 0xbc) = fVar71;
      pdb_140b57420(uVar50,unaff_RBP + 0x16,unaff_RBP + -2);
      unaff_RBP[0x16] = unaff_RBP[-1];
      unaff_RBP[0x17] = unaff_RBP[-1] + *unaff_RBP * 8;
      unaff_RBP[0x18] = lVar17;
      unaff_RBP[0x19] = (longlong)(unaff_RBP + 6);
      pdb_1415f5d00(unaff_RBP + 0xc,unaff_RBP + 0x16);
      uVar13 = unaff_RBP[0xe];
      if (uVar13 != 0) {
        pbVar23 = (byte *)unaff_RBP[0xd];
        unaff_RBP[0x14] = (longlong)(unaff_RBP + 6);
        unaff_RBP[0x16] = (longlong)(unaff_RBP + 0x14);
        if (uVar13 != 1) {
          unaff_RBP[0x15] = (longlong)pbVar23;
          if (uVar13 < 0x15) {
            pbVar23 = (byte *)unaff_RBP[0x15];
            pbVar36 = pbVar23 + 0x20;
            do {
              pdb_141510850(pbVar23,pbVar36,unaff_RBP + 0x14);
              pbVar36 = pbVar36 + 0x20;
            } while (pbVar36 != pbVar23 + uVar13 * 0x20);
          }
          else {
            pbVar23 = (byte *)unaff_RBP[0x15];
            pdb_140c75e80(pbVar23,uVar13,unaff_RBP + 0x16);
          }
        }
        uVar50 = *(undefined8 *)(pbVar23 + 8);
        lVar2 = *(longlong *)pbVar23;
        uVar9 = *(undefined4 *)(pbVar23 + 0x10);
        unaff_RBP[0x16] = lVar2;
        if (*(longlong *)(lVar17 + 0x48) != 0) {
          uVar13 = pdb_1400af0a0(lVar17 + 0x50,unaff_RBP + 0x16);
          bVar46 = (byte)(uVar13 >> 0x39);
          auVar52 = ZEXT216(CONCAT11(bVar46,bVar46));
          auVar52 = pshuflw(auVar52,auVar52,0);
          lVar37 = 0;
          while( true ) {
            uVar13 = uVar13 & *(ulonglong *)(lVar17 + 0x38);
            pcVar18 = (char *)(*(longlong *)(lVar17 + 0x30) + uVar13);
            auVar76[0] = -(*pcVar18 == auVar52[0]);
            auVar76[1] = -(pcVar18[1] == auVar52[1]);
            auVar76[2] = -(pcVar18[2] == auVar52[2]);
            auVar76[3] = -(pcVar18[3] == auVar52[3]);
            auVar76[4] = -(pcVar18[4] == auVar52[4]);
            auVar76[5] = -(pcVar18[5] == auVar52[5]);
            auVar76[6] = -(pcVar18[6] == auVar52[6]);
            auVar76[7] = -(pcVar18[7] == auVar52[7]);
            auVar76[8] = -(pcVar18[8] == auVar52[0]);
            auVar76[9] = -(pcVar18[9] == auVar52[1]);
            auVar76[10] = -(pcVar18[10] == auVar52[2]);
            auVar76[0xb] = -(pcVar18[0xb] == auVar52[3]);
            auVar76[0xc] = -(pcVar18[0xc] == auVar52[4]);
            auVar76[0xd] = -(pcVar18[0xd] == auVar52[5]);
            auVar76[0xe] = -(pcVar18[0xe] == auVar52[6]);
            auVar76[0xf] = -(pcVar18[0xf] == auVar52[7]);
            uVar39 = (ushort)(SUB161(auVar76 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar76 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar76[0xf] >> 7) << 0xf;
            uVar10 = (uint)uVar39;
            while (uVar39 != 0) {
              uVar38 = 0;
              for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar38 = uVar38 + 1;
              }
              lVar40 = *(longlong *)(lVar17 + 0x30) +
                       (uVar38 + uVar13 & *(ulonglong *)(lVar17 + 0x38)) * -0x10;
              if (lVar2 == *(longlong *)(lVar40 + -0x10)) {
                uVar13 = *(ulonglong *)(lVar40 + -8);
                uVar11 = uVar13 & 0xffffffff;
                if (uVar11 == 0) {
                  bVar43 = false;
                }
                else {
                  uVar11 = uVar11 ^ 0xffffffff;
                  if ((((*(ulonglong *)(lVar16 + 0x10) <= uVar11) ||
                       (piVar14 = (int *)(uVar11 * 0x18 + *(longlong *)(lVar16 + 8)),
                       piVar14[4] != (int)(uVar13 >> 0x20))) || (*piVar14 == 0)) ||
                     ((uVar13 = *(ulonglong *)(piVar14 + 2),
                      *(ulonglong *)(lVar15 + 0x38) <= (uVar13 & 0xffffffff) ||
                      ((*(ulonglong *)(*(longlong *)(lVar15 + 0x28) + (uVar13 >> 6 & 0x3ffffff) * 8)
                        >> (uVar13 & 0x3f) & 1) == 0)))) goto LAB_140b52196;
                  bVar43 = *(float *)(*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(lVar16 + 0x1a0) + 0x18 +
                                         (uVar13 >> 0x20) * 0x48) + 0x10 +
                                       ~*(ulonglong *)
                                         (*(longlong *)
                                           (*(longlong *)(lVar16 + 0x1a0) + 0x38 +
                                           (uVar13 >> 0x20) * 0x48) +
                                         *(longlong *)(lVar15 + 0x110) * 8) * 0x30) + 0x30 +
                                     (ulonglong)(uint)~piVar14[1] * 0x58) <= _DAT_142e3b1d8;
                }
                goto LAB_140b52199;
              }
              uVar39 = (ushort)(uVar10 - 1) & (ushort)uVar10;
              uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar39);
            }
            auVar70[0] = -(*pcVar18 == -1);
            auVar70[1] = -(pcVar18[1] == -1);
            auVar70[2] = -(pcVar18[2] == -1);
            auVar70[3] = -(pcVar18[3] == -1);
            auVar70[4] = -(pcVar18[4] == -1);
            auVar70[5] = -(pcVar18[5] == -1);
            auVar70[6] = -(pcVar18[6] == -1);
            auVar70[7] = -(pcVar18[7] == -1);
            auVar70[8] = -(pcVar18[8] == -1);
            auVar70[9] = -(pcVar18[9] == -1);
            auVar70[10] = -(pcVar18[10] == -1);
            auVar70[0xb] = -(pcVar18[0xb] == -1);
            auVar70[0xc] = -(pcVar18[0xc] == -1);
            auVar70[0xd] = -(pcVar18[0xd] == -1);
            auVar70[0xe] = -(pcVar18[0xe] == -1);
            auVar70[0xf] = -(pcVar18[0xf] == -1);
            if ((((((((((((((((SUB161(auVar70 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar70 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar70 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar70 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar70 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar70 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar70 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar70 >> 0x3f,0) & 1) != 0) || (SUB161(auVar70 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar70 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar70 >> 0x57,0) & 1) != 0) || (SUB161(auVar70 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar70 >> 0x67,0) & 1) != 0) || (SUB161(auVar70 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar70 >> 0x77,0) & 1) != 0) || auVar70[0xf] < '\0') break;
            uVar13 = uVar13 + lVar37 + 0x10;
            lVar37 = lVar37 + 0x10;
          }
        }
LAB_140b52196:
        bVar43 = false;
LAB_140b52199:
        *(undefined4 *)((longlong)unaff_RBP + -0x24) = *(undefined4 *)(pbVar23 + 0x1c);
        *(longlong *)((longlong)unaff_RBP + -0x2c) = *(longlong *)(pbVar23 + 0x14);
        unaff_RBP[-4] = *(longlong *)(pbVar23 + 0x14);
        *(undefined4 *)(unaff_RBP + -3) = *(undefined4 *)(pbVar23 + 0x1c);
        if (unaff_RBP[0xc] != 0) {
          pub_1406abac0(pbVar23,unaff_RBP[0xc] << 5,8);
        }
        if (unaff_RBP[-2] != 0) {
          pub_1406abac0((byte *)unaff_RBP[-1],unaff_RBP[-2] << 3,8);
        }
        puVar3 = (undefined8 *)unaff_RBP[0x46];
        uVar48 = *(undefined4 *)((longlong)puVar3 + 0x1c);
        puVar42 = (undefined4 *)puVar3[2];
        *puVar42 = uVar48;
        puVar35 = (undefined4 *)*puVar3;
        *puVar35 = 0;
        puVar35[2] = 0;
        puVar35[4] = 1;
        *(undefined8 *)(puVar35 + 8) = uVar50;
        *(longlong *)(puVar35 + 10) = lVar2;
        puVar35[0xc] = uVar9;
        *(bool *)(puVar35 + 0xd) = bVar43;
        lVar17 = unaff_RBP[-5];
        *(undefined8 *)((longlong)puVar35 + 0x35) = *(undefined8 *)((longlong)unaff_RBP + -0x2f);
        *(longlong *)(puVar35 + 0xf) = lVar17;
        *(undefined8 *)(puVar35 + 0x11) = 0;
        puVar35[0x15] = (int)unaff_RBP[-3];
        *(longlong *)(puVar35 + 0x13) = unaff_RBP[-4];
        param_3 = (longlong *)0x2;
        if (**(char **)unaff_RBP[0x48] == '\x01') goto code_r0x000140b5225c;
        goto LAB_140b52c14;
      }
      if (unaff_RBP[0xc] != 0) {
        pub_1406abac0((byte *)unaff_RBP[0xd],unaff_RBP[0xc] << 5,8);
      }
      puVar3 = (undefined8 *)unaff_RBP[0x48];
      if (unaff_RBP[-2] != 0) {
        pub_1406abac0((byte *)unaff_RBP[-1],unaff_RBP[-2] << 3,8);
      }
      if (*(char *)*puVar3 == '\x01') {
        puVar3 = (undefined8 *)unaff_RBP[0x46];
        uVar48 = *(undefined4 *)((longlong)puVar3 + 0x1c);
        puVar35 = (undefined4 *)*puVar3;
        puVar42 = (undefined4 *)puVar3[2];
        goto LAB_140b522a9;
      }
      *(int *)((longlong)unaff_RBP + 0xbb) = (int)unaff_RBP[0xb];
      *(longlong *)((longlong)unaff_RBP + 0xb3) = unaff_RBP[10];
      puVar3 = (undefined8 *)unaff_RBP[0x46];
      *(undefined4 *)puVar3[2] = *(undefined4 *)((longlong)puVar3 + 0x1c);
      puVar42 = (undefined4 *)*puVar3;
      *puVar42 = 0;
      puVar42[2] = 0;
      puVar42[4] = 0;
      *(undefined1 *)(puVar42 + 0xd) = 2;
      uVar50 = *(undefined8 *)((longlong)unaff_RBP + 0xb7);
      *(longlong *)((longlong)puVar42 + 0x35) = unaff_RBP[0x16];
      *(undefined8 *)(puVar42 + 0xf) = uVar50;
      *(undefined8 *)(puVar42 + 0x11) = 0;
      *(undefined8 *)(puVar42 + 0x13) = 0;
      puVar42[0x15] = 0;
      unaff_R14 = (float *)unaff_RBP[0x47];
      unaff_RBX = *(code **)unaff_R14;
      cVar34 = (code)0x0;
      goto LAB_140b52caa;
    }
    *(int *)(unaff_RBP + 0x10) = (int)unaff_RBP[0x1a];
    *(undefined8 *)((longlong)unaff_RBP + 0x84) = *(undefined8 *)((longlong)unaff_RBP + 0xd4);
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
    uVar13 = (ulonglong)*(int *)(&UNK_14305a408 + (ulonglong)*(byte *)(unaff_RBP + 6) * 4);
    bVar43 = 0xfffffffebcfa5bf7 < uVar13;
    pcVar12 = (code *)(&UNK_14305a408 + uVar13);
    cVar8 = (char)pcVar12;
    cVar24 = (char)pfVar26;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(unaff_RBP + 6)) {
    case 0:
    case 9:
      unaff_R12 = *(longlong *)unaff_R14;
      unaff_RBP[0x15] = unaff_RBP[7];
      unaff_RBX = (code *)pdb_140b54f80(unaff_R12,unaff_RBP[7],&UNK_143059bb0);
      if (unaff_RBX == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143059bc8);
      }
      unaff_R14 = (float *)(unaff_RBX + 0x38);
      unaff_XMM9_Da = *(float *)((longlong)unaff_RBP + 0xfc);
      if (_DAT_142f3e554 <= unaff_XMM9_Da) {
        unaff_XMM9_Da = _DAT_142f3e554;
      }
      *(float *)((longlong)unaff_RBP + 0xfc) = unaff_XMM9_Da;
      goto code_r0x000140b523ef;
    default:
      goto LAB_140b51ee7;
    case 2:
      *(uint *)((longlong)unaff_RBP + 0x9c) = (uint)*(byte *)((longlong)unaff_RBP + 0x31);
      lVar17 = *(longlong *)unaff_R14;
      unaff_RBP[0x15] = unaff_RBP[7];
      lVar15 = pdb_140b54f80(lVar17,unaff_RBP[7],&UNK_143059ae0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143059af8);
      }
      if (1 < *(uint *)(lVar15 + 600)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143021f00);
      }
      fVar47 = (float)pdb_1419aa990(lVar15 + 0x38);
      fVar66 = _DAT_142e36f28;
      fVar71 = (float)pdb_1419aaa60(lVar15);
      if (*(char *)(lVar15 + 600) == '\0') {
        fVar72 = 0.0;
        if (0.0 <= fVar71) {
          fVar72 = fVar71;
        }
        fVar71 = fVar66;
        if (fVar72 <= fVar66) {
          fVar71 = fVar72;
        }
        uVar9 = pdb_140def5e0(lVar15 + 0x25c);
      }
      else {
        uVar9 = *(undefined4 *)(lVar15 + 0x25c);
        fVar71 = *(float *)(lVar15 + 0x260);
      }
      if ((*(char *)param_2 != '\x01') ||
         ((fVar72 = _DAT_14303aa00, *(char *)((longlong)param_2 + 1) != '\x02' &&
          (fVar72 = _DAT_142e37888, *(char *)((longlong)param_2 + 1) != '\x01')))) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059b70,0x28,&UNK_143059b98);
      }
      fVar73 = *(float *)((longlong)unaff_RBP + 0xfc);
      uVar50 = pdb_140b54b40(lVar17,unaff_RBP[0x15]);
      if ((int)uVar50 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143059b40);
      }
      pdb_140b55520(unaff_RBP + 0xc,*param_3,param_3[1],uVar50);
      if ((int)unaff_RBP[0xc] != 3) {
        unaff_RBP[0x16] = unaff_RBP[0xc];
        unaff_RBP[0x17] = unaff_RBP[0xd];
        pfStack_68 = (float *)&UNK_143059b58;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143059ea8,0x2b,unaff_RBP + 0x16,&UNK_143059e88);
      }
      pdb_140b51610(unaff_RBP + 0xc,unaff_RBP[0xd],unaff_RBP + 1,_DAT_142e36f50);
      if ((int)unaff_RBP[0xc] == 0) {
        param_3 = (longlong *)0x0;
code_r0x000140b52885:
        uVar20 = (undefined1)*(undefined4 *)((longlong)unaff_RBP + 0x9c);
      }
      else {
        puVar3 = (undefined8 *)unaff_RBP[0x4d];
        if ((int)unaff_RBP[0xc] == 1) {
          uVar48 = *(undefined4 *)((longlong)unaff_RBP + 100);
          lVar17 = unaff_RBP[0xd];
          uVar1 = *(undefined4 *)((longlong)unaff_RBP + 0x6c);
          *(undefined4 *)(unaff_RBP + 0x1f) = uVar48;
          *(int *)((longlong)unaff_RBP + 0xfc) = (int)lVar17;
          *(undefined4 *)(unaff_RBP + 0x20) = uVar1;
          *(int *)((longlong)unaff_RBP + 0xcc) = (int)unaff_RBP[0x20];
          *(longlong *)((longlong)unaff_RBP + 0xc4) = unaff_RBP[0x1f];
          *(undefined4 *)(unaff_RBP + 0x16) = 0;
          *(undefined4 *)(unaff_RBP + 0x18) = 0x3e99999a;
          *(undefined4 *)(unaff_RBP + 0x1a) = 0x3f800000;
          *(undefined1 *)((longlong)unaff_RBP + 0xd4) = 0;
          uVar50 = *puVar3;
          pdb_140ab07b0(unaff_RBP + 0x16,uVar50);
          lVar16 = pdb_140b4b7e0();
          unaff_RBP[0x12] = lVar16;
          *(undefined4 *)(unaff_RBP + 0x14) = uVar48;
          *(undefined4 *)((longlong)unaff_RBP + 0xa4) = uVar1;
          pdb_140df4540(unaff_RBP + 0x16,unaff_RBP + 0x14);
          puVar42 = (undefined4 *)unaff_RBP[0x12];
          *puVar42 = uVar48;
          puVar42[1] = (int)lVar17;
          puVar42[2] = uVar1;
          puVar42[5] = (int)unaff_RBP[0x17];
          *(longlong *)(puVar42 + 3) = unaff_RBP[0x16];
          unaff_RBP[0x16] = 2;
          unaff_RBP[0x17] = (longlong)puVar42;
          unaff_RBP[0x18] = 2;
          unaff_RBP[0x19] = -0x8000000000000000;
          *(undefined4 *)(unaff_RBP + 0x1c) = 0;
          *(undefined4 *)(unaff_RBP + 0x1e) = 0x40400000;
          *(undefined2 *)((longlong)unaff_RBP + 0xf4) = 0x101;
          pdb_140ab2da0(unaff_RBP + 0x16,uVar50);
          param_3 = (longlong *)0x2;
          goto code_r0x000140b52885;
        }
        *(float *)((longlong)unaff_RBP + 0x2c) = fVar47;
        fVar47 = *(float *)((longlong)unaff_RBP + 100);
        pfVar25 = (float *)pdb_140b4b7e0();
        fVar77 = *(float *)(unaff_RBP + 0xd);
        fVar6 = *(float *)((longlong)unaff_RBP + 0x6c);
        fVar49 = *(float *)(unaff_RBP + 0xe);
        fVar78 = *(float *)((longlong)unaff_RBP + 0x74);
        uVar13 = (ulonglong)_DAT_142f6a630 >> 0x20;
        lVar17 = unaff_RBP[0xe];
        *pfVar25 = (float)_DAT_142f6a630 + fVar77;
        pfVar25[1] = (float)uVar13 + fVar6;
        pfVar25[2] = fVar49 + 0.0;
        pfVar25[3] = fVar78 + 0.0;
        fVar79 = (float)unaff_RBP[0xf];
        fVar78 = (float)((ulonglong)unaff_RBP[0xf] >> 0x20);
        *(ulonglong *)(pfVar25 + 4) = CONCAT44(fVar78 + 0.0,_DAT_142e3787c + fVar79);
        unaff_RBP[0x16] = 2;
        unaff_RBP[0x17] = (longlong)pfVar25;
        unaff_RBP[0x18] = 2;
        unaff_RBP[0x19] = -0x8000000000000000;
        *(undefined4 *)(unaff_RBP + 0x1c) = 0;
        *(undefined4 *)(unaff_RBP + 0x1e) = 0x40400000;
        *(undefined2 *)((longlong)unaff_RBP + 0xf4) = 0x101;
        uVar50 = *puVar3;
        pdb_140ab2da0(unaff_RBP + 0x16,uVar50);
        fVar49 = fVar66 - fVar47;
        fVar78 = fVar78 * fVar47 + (float)lVar17 * fVar49;
        fVar77 = fVar47 * (float)((ulonglong)lVar17 >> 0x20) + fVar49 * fVar77;
        unaff_RBP[0x1f] = CONCAT44(fVar47 * fVar79 + fVar49 * fVar6,fVar77);
        *(float *)(unaff_RBP + 0x20) = fVar78;
        *(int *)((longlong)unaff_RBP + 0xcc) = (int)unaff_RBP[0x20];
        *(longlong *)((longlong)unaff_RBP + 0xc4) = unaff_RBP[0x1f];
        *(undefined4 *)(unaff_RBP + 0x16) = 0;
        *(undefined4 *)(unaff_RBP + 0x18) = 0x3e99999a;
        *(undefined4 *)(unaff_RBP + 0x1a) = 0x3f800000;
        *(undefined1 *)((longlong)unaff_RBP + 0xd4) = 0;
        pdb_140ab07b0(unaff_RBP + 0x16,uVar50);
        lVar17 = pdb_140b4b7e0();
        unaff_RBP[0x12] = lVar17;
        *(float *)(unaff_RBP + 0x14) = fVar77;
        *(float *)((longlong)unaff_RBP + 0xa4) = fVar78;
        pdb_140df4540(unaff_RBP + 0x16,unaff_RBP + 0x14);
        plVar41 = (longlong *)unaff_RBP[0x12];
        *(int *)(plVar41 + 1) = (int)unaff_RBP[0x20];
        *plVar41 = unaff_RBP[0x1f];
        *(int *)((longlong)plVar41 + 0x14) = (int)unaff_RBP[0x17];
        *(longlong *)((longlong)plVar41 + 0xc) = unaff_RBP[0x16];
        unaff_RBP[0x16] = 2;
        unaff_RBP[0x17] = (longlong)plVar41;
        unaff_RBP[0x18] = 2;
        unaff_RBP[0x19] = -0x8000000000000000;
        *(undefined4 *)(unaff_RBP + 0x1c) = 0;
        *(undefined4 *)(unaff_RBP + 0x1e) = 0x40400000;
        *(undefined2 *)((longlong)unaff_RBP + 0xf4) = 0x101;
        pdb_140ab2da0(unaff_RBP + 0x16,uVar50);
        param_3 = (longlong *)0x2;
        uVar20 = (undefined1)*(undefined4 *)((longlong)unaff_RBP + 0x9c);
        fVar47 = *(float *)((longlong)unaff_RBP + 0x2c);
      }
      fVar77 = 0.0;
      if (0.0 <= fVar47) {
        fVar77 = fVar47;
      }
      if (fVar77 <= fVar66) {
        fVar66 = fVar77;
      }
      fVar47 = fVar72 + fVar73 + _DAT_142e37874;
      unaff_XMM9_Da = *(float *)(lVar15 + 0x284);
      puVar3 = (undefined8 *)unaff_RBP[0x46];
      uVar48 = *(undefined4 *)((longlong)puVar3 + 0x1c);
      puVar42 = (undefined4 *)puVar3[2];
      *puVar42 = uVar48;
      puVar35 = (undefined4 *)*puVar3;
      *puVar35 = 1;
      puVar35[1] = fVar47;
      puVar35[2] = 0;
      puVar35[4] = 2;
      *(longlong *)(puVar35 + 5) = unaff_RBP[0x1f];
      puVar35[7] = (int)unaff_RBP[0x20];
      plVar41 = unaff_RBP + 0x1f;
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
      pfVar26 = (float *)0x43059fe8;
      goto code_r0x000140b55614;
    case 0x12:
      *(char *)(uVar13 + 0xcbca2550) = *(char *)(uVar13 + 0xcbca2550) + cVar24;
      *pcVar12 = (code)((char)*pcVar12 + cVar8);
      uStack_58 = 0x43059ff8;
      uStack_54 = 1;
      pfStack_60 = (float *)&stack0xfffffffffffffff8;
      pfStack_68 = (float *)0x7;
      break;
    case 0x13:
      *(char *)(uVar13 + 0xcbca2550) = *(char *)(uVar13 + 0xcbca2550) + cVar24;
      *pcVar12 = (code)((char)*pcVar12 + cVar8);
      uStack_58 = 0x43059ff8;
      uStack_54 = 1;
      pfStack_60 = (float *)&stack0xfffffffffffffff8;
      pfStack_68 = (float *)0x7;
      break;
    case 0x14:
      puVar31 = &stack0xffffffffffffff70;
      puVar22 = (undefined *)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar13] + '\b');
      pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b55948;
    case 0x15:
      pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b55735;
    case 0x16:
      goto code_r0x000140b55a4e;
    case 0x17:
      puVar33 = &stack0xffffffffffffff70;
      pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      pfStack_68 = (float *)&stack0xfffffffffffffff0;
      uStack_70 = 10;
      puVar22 = &UNK_14305a178;
      goto code_r0x000140b55b44;
    case 0x18:
      pcVar18 = (char *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      bStack_50 = 4;
      uStack_4f = 0;
      uStack_70 = 0xc;
      pfVar25 = (float *)&UNK_14305a0d8;
      pfStack_68 = pfVar26;
      goto code_r0x000140b55a0d;
    case 0x19:
      *pcVar12 = (code)((char)*pcVar12 + cVar8);
      pbVar23 = &UNK_14305a395 + uVar13;
      bVar46 = *pbVar23;
      *pbVar23 = *pbVar23 + 8;
      pcVar12 = (code *)(ulonglong)((int)pcVar12 + 0x2504587 + (uint)(0xf7 < bVar46));
      break;
    case 0x1a:
      pfStack_60 = (float *)&stack0xfffffffffffffff8;
      pfStack_68 = (float *)0x6;
      pcVar12 = (code *)pdb_140f66e50(iVar44 + 0x50U & 0xffffff30,&UNK_14305a140,0xb,&UNK_14305a14b)
      ;
      return pcVar12;
    case 0x1b:
      *(int *)(&UNK_14305a40a + (longlong)pfVar26 * 2 + uVar13) =
           *(int *)(&UNK_14305a40a + (longlong)pfVar26 * 2 + uVar13) + 0x48;
      uStack_58 = 0x4305a408;
      pfStack_60 = (float *)&stack0xfffffffffffffff8;
      pfStack_68 = (float *)0x7;
      break;
    case 0x1c:
      *(char *)(uVar13 + 0xcbca2550) = *(char *)(uVar13 + 0xcbca2550) + cVar24;
      *pcVar12 = (code)((char)*pcVar12 + cVar8);
      uStack_58 = 0x4305a158;
      uStack_54 = 1;
code_r0x000140b55735:
      pfStack_60 = (float *)&stack0xfffffffffffffff8;
      pfStack_68 = (float *)0xa;
      puVar22 = &UNK_14305a18e;
code_r0x000140b55b44:
      *(undefined8 *)(puVar33 + -8) = 0x140b55b59;
      pcVar12 = (code *)pdb_140f66e50(pcVar12,puVar22,0xc,&UNK_14305a184);
      return pcVar12;
    case 0x1d:
      puVar30 = &stack0xffffffffffffff70;
      puVar22 = (undefined *)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar13] + '\b');
      pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b5576d;
    case 0x1e:
      puVar32 = &stack0xffffffffffffff70;
      puVar22 = (undefined *)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar13] + '\b');
      pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff30);
      goto code_r0x000140b55aa9;
    case 0x1f:
      uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff30;
      pfStack_68 = pfVar26;
      goto code_r0x000140b556e6;
    case 0x20:
      pfVar25 = unaff_R14;
      goto code_r0x000140b55891;
    case 0x21:
      puVar29 = &stack0xffffffffffffff70;
      pcVar12 = (code *)(ulonglong)CONCAT31((int3)(char)((ulonglong)pcVar12 >> 8),cVar8);
      goto code_r0x000140b55665;
    }
code_r0x000140b55b97:
    pcVar12 = (code *)pdb_140f66e50(pcVar12);
    return pcVar12;
  case 0x35:
    unaff_RBP = (longlong *)0x100;
code_r0x000140b523ef:
    uVar50 = pdb_1419aa990(unaff_R14);
    uVar9 = pdb_1419aaa60(unaff_RBX);
    auVar63._8_4_ = (int)((ulonglong)extraout_XMM0_Qa >> 0x20);
    auVar63._0_8_ = extraout_XMM0_Qa;
    auVar63._12_4_ = (int)((ulonglong)uVar50 >> 0x20);
    auVar62._8_8_ = auVar63._8_8_;
    auVar62._0_4_ = (undefined4)extraout_XMM0_Qa;
    auVar62._4_4_ = (int)uVar50;
    auVar52 = maxps(ZEXT816(0),auVar62);
    fVar47 = auVar52._0_4_;
    fVar66 = auVar52._4_4_;
    iVar44 = -(uint)(_DAT_142e37950 < fVar47);
    iVar45 = -(uint)(_UNK_142e37954 < fVar66);
    auVar65._4_4_ = iVar45;
    auVar65._0_4_ = iVar44;
    auVar65._8_4_ = iVar45;
    auVar65._12_4_ = iVar45;
    auVar64._8_8_ = auVar65._8_8_;
    auVar64._4_4_ = iVar44;
    auVar64._0_4_ = iVar44;
    uVar10 = movmskpd(uVar9,auVar64);
    if ((uVar10 & 2) == 0) {
      if ((uVar10 & 1) == 0) goto code_r0x000140b5247f;
code_r0x000140b52452:
      uVar10 = *(uint *)(unaff_RBX + 600);
      fVar47 = _DAT_142e36f28;
      if (1 < uVar10) goto code_r0x000140b5248e;
code_r0x000140b5245d:
      if ((uVar10 & 1) == 0) {
        fVar71 = fVar47;
        uVar9 = pdb_140def5e0(unaff_RBX + 0x25c);
      }
      else {
        uVar9 = *(undefined4 *)(unaff_RBX + 0x25c);
        fVar71 = *(float *)(unaff_RBX + 0x260);
      }
    }
    else {
      fVar66 = _DAT_142e36f28;
      if ((uVar10 & 1) != 0) goto code_r0x000140b52452;
code_r0x000140b5247f:
      uVar10 = *(uint *)(unaff_RBX + 600);
      if (uVar10 < 2) goto code_r0x000140b5245d;
code_r0x000140b5248e:
      pdb_1419aa0c0(unaff_RBP + 0x16,unaff_R14);
      uVar9 = (undefined4)unaff_RBP[0x16];
      fVar71 = *(float *)(unaff_RBP + 0x17);
    }
    if (unaff_XMM9_Da < _DAT_142e37838) {
      pdb_1419a7e00(unaff_RBP + 0x1f,unaff_R14);
      unaff_XMM9_Da = 0.0;
    }
    pdb_1419a7e00(unaff_RBP + 0x16,unaff_R14);
    *(int *)(unaff_RBP + 0xc) = (int)unaff_RBP[0x16];
    *(int *)((longlong)unaff_RBP + 100) = (int)unaff_RBP[0x17];
    plVar41 = (longlong *)((longlong)unaff_RBP + -0x3c);
    pdb_140df4540(plVar41,unaff_RBP + 0xc);
    if (((0.0 < unaff_XMM9_Da) && (*(uint *)(unaff_RBX + 600) < 2)) &&
       ((*(char *)param_2 == '\x01' && (*(char *)((longlong)param_2 + 1) == '\x02')))) {
      if (*(uint *)(unaff_RBX + 600) == 1) {
        unaff_RBP[0x18] = *(longlong *)(unaff_RBX + 0x26c);
        lVar17 = *(longlong *)(unaff_RBX + 0x264);
        unaff_RBP[0x16] = *(longlong *)(unaff_RBX + 0x25c);
        unaff_RBP[0x17] = lVar17;
        unaff_RBP[0x18] =
             CONCAT44((float)((ulonglong)unaff_RBP[0x18] >> 0x20) + _UNK_1430595a4,
                      (float)unaff_RBP[0x18] + _UNK_1430595a0);
        uVar48 = pdb_140df0920(unaff_RBP + 0x16);
      }
      else {
        lVar17 = *(longlong *)(unaff_RBX + 0x264);
        unaff_RBP[0x16] = *(longlong *)(unaff_RBX + 0x25c);
        unaff_RBP[0x17] = lVar17;
        *(float *)(unaff_RBP + 0x17) = *(float *)(unaff_RBP + 0x17) + _UNK_143059594;
        uVar48 = pdb_140def2c0(unaff_RBP + 0x16);
      }
      *(undefined4 *)(unaff_RBP + 0x16) = uVar48;
      *(float *)((longlong)unaff_RBP + 0xb4) = fVar47;
      pdb_140df4540(unaff_RBP + 0x1f,unaff_RBP + 0x16);
    }
    uVar50 = pdb_140b54b40(unaff_R12,unaff_RBP[0x15]);
    lVar17 = pdb_140b55350(uVar50,*param_3,param_3[1]);
    if (lVar17 == 0) {
      uVar20 = false;
    }
    else {
      uVar20 = *(float *)(lVar17 + 0x30) <= _DAT_142e3b1d8;
    }
    uVar48 = *(undefined4 *)((longlong)unaff_R13 + 0x1c);
    puVar42 = (undefined4 *)unaff_R13[2];
    *puVar42 = uVar48;
    puVar35 = (undefined4 *)*unaff_R13;
    *puVar35 = 0;
    puVar35[2] = 0;
    puVar35[4] = 1;
    param_3 = (longlong *)0x2;
code_r0x000140b52bba:
    puVar35[8] = uVar9;
    puVar35[9] = fVar71;
    *(longlong *)(puVar35 + 10) = unaff_RBP[0x15];
    puVar35[0xc] = fVar66;
    *(undefined1 *)(puVar35 + 0xd) = uVar20;
    *(longlong *)(puVar35 + 0xe) = unaff_RBP[0x1f];
    puVar35[0x10] = (int)unaff_RBP[0x20];
    puVar35[0x11] = unaff_XMM9_Da;
    puVar35[0x12] = 0;
    *(longlong *)(puVar35 + 0x13) = *plVar41;
    puVar35[0x15] = (int)plVar41[1];
    if (*(char *)*unaff_R15 != '\0') {
code_r0x000140b5225c:
      plVar41 = (longlong *)unaff_RBP[0x4b];
      *(undefined4 *)plVar41[2] = *(undefined4 *)((longlong)plVar41 + 0x1c);
      lVar17 = *plVar41;
      lVar15 = *(longlong *)(lVar17 + 0x30);
      uVar50 = *(undefined8 *)(lVar17 + 0x40);
      if (lVar15 == *(longlong *)(lVar17 + 0x20)) {
        pdb_142d7e980(lVar17 + 0x20);
      }
      lVar16 = *(longlong *)(lVar17 + 0x28);
      *(undefined8 *)(lVar16 + lVar15 * 0x10) = uVar50;
      *(undefined1 *)(lVar16 + 8 + lVar15 * 0x10) = 1;
      *(longlong *)(lVar17 + 0x30) = lVar15 + 1;
      *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
LAB_140b522a9:
      *(undefined4 *)(unaff_RBP + 0xd) = 0;
      unaff_RBP[0xc] = 0;
      *(longlong *)((longlong)unaff_RBP + 0xb3) = unaff_RBP[10];
      *(int *)((longlong)unaff_RBP + 0xbb) = (int)unaff_RBP[0xb];
      *puVar42 = uVar48;
      *puVar35 = 0;
      puVar35[2] = 0;
      puVar35[4] = 0;
      *(undefined1 *)(puVar35 + 0xd) = 2;
      uVar50 = *(undefined8 *)((longlong)unaff_RBP + 0xb7);
      *(longlong *)((longlong)puVar35 + 0x35) = unaff_RBP[0x16];
      *(undefined8 *)(puVar35 + 0xf) = uVar50;
      *(undefined8 *)(puVar35 + 0x11) = 0;
      *(longlong *)(puVar35 + 0x13) = unaff_RBP[0xc];
      fVar47 = *(float *)(unaff_RBP + 0xd);
      puVar35[0x15] = fVar47;
      goto LAB_140b52cb7;
    }
LAB_140b52c14:
    cVar34 = SUB81(param_3,0);
    plVar41 = (longlong *)unaff_RBP[0x4b];
    *(undefined4 *)plVar41[2] = *(undefined4 *)((longlong)plVar41 + 0x1c);
    lVar17 = *plVar41;
    lVar15 = *(longlong *)(lVar17 + 0x30);
    uVar50 = *(undefined8 *)(lVar17 + 0x40);
    if (lVar15 == *(longlong *)(lVar17 + 0x20)) {
      pdb_142d7e980(lVar17 + 0x20);
    }
    lVar16 = *(longlong *)(lVar17 + 0x28);
    *(undefined8 *)(lVar16 + lVar15 * 0x10) = uVar50;
    *(undefined1 *)(lVar16 + 8 + lVar15 * 0x10) = 0;
    *(longlong *)(lVar17 + 0x30) = lVar15 + 1;
    *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
    unaff_R14 = (float *)unaff_RBP[0x47];
    unaff_RBX = *(code **)unaff_R14;
    if ((cVar34 != (code)0x0) && (*unaff_RBX == (code)0x0)) {
      puVar22 = (undefined *)unaff_RBP[0x45];
      *(undefined4 *)(unaff_RBP + 0x18) = puVar35[0x10];
      unaff_RBP[0x17] = *(longlong *)(puVar35 + 0xe);
      *(undefined1 *)(unaff_RBP + 0x16) = 3;
      goto code_r0x000140b52c97;
    }
    goto LAB_140b52caa;
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x42:
  case 0x43:
code_r0x000140b52c97:
    cVar34 = SUB81(param_3,0);
    pdb_1414af100(puVar22,unaff_RBP + 0x16,&UNK_143059ca8);
LAB_140b52caa:
    fVar47 = unaff_R14[7];
    **(float **)(unaff_R14 + 4) = fVar47;
    *unaff_RBX = cVar34;
LAB_140b52cb7:
    return (code *)(ulonglong)(uint)fVar47;
  case 0x44:
    if ((*(int *)(&UNK_14305a34c + uVar11) != (int)(in_R10 >> 0x20)) || (*(int *)pcVar12 == 0)) {
      _UNK_14305a33c = 1;
      _UNK_14305a344 = (code *)uVar13;
      return pcVar12;
    }
    uVar4 = *(ulonglong *)(&UNK_14305a344 + uVar11);
    if ((uRam000000004305a374 <= (uVar4 & 0xffffffff)) ||
       ((*(ulonglong *)(lRam000000004305a364 + (uVar4 >> 6 & 0x3ffffff) * 8) >> (uVar4 & 0x3f) & 1)
        == 0)) {
      _UNK_14305a33c = 0;
      _UNK_14305a340 = (float)(int)uVar4;
      _UNK_14305a344 = (code *)uVar13;
      return pcVar12;
    }
    uVar10 = *(uint *)(&UNK_14305a340 + uVar11);
    if (uRam000000004305a44c <
        *(ulonglong *)(*(longlong *)(pfVar25 + 0x68) + 0x40 + (uVar4 >> 0x20) * 0x48)) {
      pfVar25 = (float *)(*(longlong *)(pfVar25 + 0x68) + (uVar4 >> 0x20) * 0x48);
      pfVar26 = *(float **)(*(longlong *)(pfVar25 + 0xe) + uRam000000004305a44c * 8);
      goto code_r0x000140b55599;
    }
    goto code_r0x000140b555d0;
  case 0x45:
code_r0x000140b55948:
    *(undefined **)(puVar31 + 0x48) = puVar22;
    *(undefined **)(puVar31 + 0x38) = &UNK_14305a1d8;
    *(undefined **)(puVar31 + 0x30) = &UNK_14305a1a0;
    *(float **)(puVar31 + 0x28) = pfVar26;
    *(undefined8 *)(puVar31 + 0x40) = 9;
    *(undefined8 *)(puVar31 + 0x20) = 10;
    pfVar26 = (float *)&UNK_14305a1c0;
code_r0x000140b55990:
    *(undefined8 *)(puVar31 + -8) = 0x140b55998;
    pcVar12 = (code *)pdb_140f66f00(pcVar12,pfVar26);
    return pcVar12;
  case 0x46:
code_r0x000140b5576d:
    lVar17 = CONCAT71((int7)((ulonglong)puVar22 >> 8),
                      (char)puVar22 + (char)((ulonglong)puVar22 >> 8));
    *(longlong *)(puVar30 + 0x80) = lVar17 + 8;
    *(undefined **)(puVar30 + 0x50) = &UNK_14305a0b8;
    *(undefined1 **)(puVar30 + 0x48) = puVar30 + 0x80;
    *(undefined **)(puVar30 + 0x38) = &UNK_14305a0f6;
    *(undefined **)(puVar30 + 0x30) = &UNK_14305a098;
    *(ulonglong *)(puVar30 + 0x28) = (ulonglong)((int)lVar17 + 4);
    *(undefined8 *)(puVar30 + 0x40) = 4;
    *(undefined8 *)(puVar30 + 0x20) = 0xc;
    *(undefined8 *)(puVar30 + -8) = 0x140b557e7;
    pcVar12 = (code *)pdb_140f66f00((int)pcVar12 + -0x48004122,&UNK_14305a0fa,0x14,&UNK_14305a0ea);
    return pcVar12;
  case 0x47:
code_r0x000140b55891:
    uStack_18 = 0x68;
    uStack_17 = 0x14305a0;
    puStack_20 = &stack0xfffffffffffffff8;
    uStack_30 = &UNK_14305a090;
    uStack_38 = &UNK_14305a048;
    uStack_40 = SUB81(pfVar25,0);
    uStack_3f = (undefined7)((ulonglong)pfVar25 >> 8);
    bStack_50 = 0x8c;
    uStack_4f = 0x14305a0;
    uStack_58 = 0x4305a028;
    uStack_54 = 1;
    bStack_28 = 5;
    uStack_27 = 0;
    puStack_48 = (undefined1 *)0x4;
    pfStack_68 = (float *)0x7;
    pfVar25 = (float *)&UNK_14305a088;
    pfStack_60 = pfVar26;
code_r0x000140b55913:
    pcVar12 = (code *)pdb_140f66ff0(pcVar12,pfVar25);
    return pcVar12;
  case 0x48:
code_r0x000140b55665:
    *(undefined1 **)(puVar29 + 0x28) = puVar29 + 0x80;
    *(undefined8 *)(puVar29 + 0x20) = 7;
    *(undefined8 *)(puVar29 + -8) = 0x140b55697;
    pcVar12 = (code *)pdb_140f66e50((ulonglong)pcVar12 & 0xffffffffffffff30,&UNK_14305a018,4,
                                    &UNK_14305a01c);
    return pcVar12;
  case 0x49:
    puVar31 = &stack0xffffffffffffff70;
    pbVar23 = (byte *)(CONCAT71(0x14305a3,*(char *)((longlong)unaff_RBP + 0x50c168cfd) + '<') +
                      -0x48);
    cVar8 = bVar46 + *pbVar23;
    pcVar12 = (code *)CONCAT71(uVar19,cVar8);
    *pcVar12 = (code)(((char)*pcVar12 - cVar8) - CARRY1(bVar46,*pbVar23));
    *pcVar12 = (code)((char)*pcVar12 + cVar8);
    goto code_r0x000140b55990;
  case 0x4a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4b:
    pcVar12 = (code *)0x4;
    pfVar25 = pfVar26;
    goto code_r0x000140b55913;
  case 0x4c:
    puVar22 = (undefined *)CONCAT71(0x14305a3,(&UNK_14305a2c5)[uVar11] + '<');
    pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff38);
    goto code_r0x000140b55aa9;
  case 0x4d:
    pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff30);
    goto code_r0x000140b55735;
  case 0x4e:
    pfVar26 = (float *)((ulonglong)pfVar26 & 0xffffffff);
    puVar32 = auStack_88;
    if (0xfffffffebcfa5cc3 < uVar11 || pcVar12 == (code *)0x0) {
      pfVar26 = (float *)(ulonglong)*(uint *)(&UNK_14305a33e + uVar11);
      puVar32 = auStack_88;
    }
code_r0x000140b55aa9:
    *(undefined **)(puVar32 + 0x50) = puVar22;
    *(undefined1 **)(puVar32 + 0x48) = puVar32 + 0x80;
    *(undefined **)(puVar32 + 0x38) = &UNK_14305a0f6;
    *(undefined **)(puVar32 + 0x30) = &UNK_14305a098;
    *(float **)(puVar32 + 0x28) = pfVar26;
    *(undefined8 *)(puVar32 + 0x40) = 4;
    *(undefined8 *)(puVar32 + 0x20) = 0xc;
    *(undefined8 *)(puVar32 + -8) = 0x140b55b06;
    pcVar12 = (code *)pdb_140f66f00(pcVar12,&UNK_14305a10e,0x10,&UNK_14305a0ea);
    return pcVar12;
  case 0x4f:
                    /* WARNING: Could not recover jumptable at 0x000140b5564b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar12 = (code *)(*(code *)((longlong)pfVar26 + (longlong)pfVar25))
                                (&UNK_14305a33c,(code *)((longlong)pfVar26 + (longlong)pfVar25));
    return pcVar12;
  case 0x50:
    (&UNK_14305a2c5)[uVar11] = (&UNK_14305a2c5)[uVar11] ^ 0x3c;
    uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff28;
code_r0x000140b556e6:
    bStack_50 = 9;
    uStack_4f = 0;
    uStack_70 = 10;
    pcVar12 = (code *)pdb_140f66f00(uVar13,&UNK_14305a1e1,0x1a,&UNK_14305a184);
    return pcVar12;
  case 0x51:
    bVar21 = *(char *)((longlong)unaff_RBP + 0x50c168cfd) + 0x3c;
    if (CONCAT71(0x14305a3,bVar21) != 0) {
      pbVar23 = (byte *)(CONCAT71(0x14305a3,bVar21) + -0x48);
      cVar8 = bVar46 + *pbVar23;
      cVar8 = cVar8 + *(char *)CONCAT71(uVar19,cVar8) + CARRY1(bVar46,*pbVar23);
      pcVar18 = (char *)CONCAT71(uVar19,cVar8);
      *pcVar18 = *pcVar18 + cVar8;
      pfVar25 = pfVar26;
code_r0x000140b55a0d:
      pcVar12 = (code *)pdb_140f66f00(pcVar18,pfVar25);
      return pcVar12;
    }
    pbVar23 = &UNK_14305a2c9 + uVar11;
    bVar43 = CARRY1(*pbVar23,bVar21);
    *pbVar23 = *pbVar23 + bVar21;
code_r0x000140b55a4e:
    pcVar12 = (code *)(ulonglong)((int)pcVar12 + 0x25046d1 + (uint)bVar43);
    goto code_r0x000140b55b97;
  case 0x52:
    puVar28 = &stack0xffffffffffffff70;
    pcVar12 = (code *)((ulonglong)pcVar12 & 0xffffffffffffff30);
code_r0x000140b55614:
    *(undefined8 *)(puVar28 + -8) = 0x140b55622;
    pcVar12 = (code *)pdb_140f66090(pcVar12,pfVar26,0xb);
    return pcVar12;
  case 0x53:
    (&UNK_14305a303)[uVar11] = (&UNK_14305a303)[uVar11] + -0x3c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x54:
    plVar41 = (longlong *)&stack0xffffffffffffff70;
    cVar8 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      plVar41 = plVar41 + -1;
      *plVar41 = *unaff_RBP;
      cVar8 = cVar8 + -1;
    } while ('\0' < cVar8);
    uVar10 = (uint)CONCAT71(uVar19,(bVar46 - 0x2f) + (UNK_14305a2c7 < 0x3c));
code_r0x000140b55599:
    if (pfVar26 != (float *)0x0) {
      lVar17 = *(longlong *)(*(longlong *)(pfVar25 + 6) + 0x10 + ~(ulonglong)pfVar26 * 0x30);
      goto code_r0x000140b555d2;
    }
code_r0x000140b555d0:
    lVar17 = 0;
code_r0x000140b555d2:
    _UNK_14305a344 = (code *)((ulonglong)~uVar10 * 0x58 + lVar17);
    _UNK_14305a33c = 3;
    return _UNK_14305a344;
  }
  *(code **)(puVar27 + 0x40) = pcVar12;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar27 + -8) = 0x140b4d896;
  pdb_142dc83d0(&UNK_1430597e0,puVar27 + 0x38,&UNK_143059848);
}

