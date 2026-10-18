// VA 0x140b4d940, PDB extent 395 bytes
// country_core::systems::ui_edit_focus::geo_src_to_edit_subject_w_deco_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140b558e6) overlaps instruction at (ram,0x000140b558e4)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_edit_focus::geo_src_to_edit_subject_w_deco_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
   Extent: 395 */

undefined8 *
pdb_140b4d940(undefined8 *param_1,byte *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined7 uVar17;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  float *pfVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  char *pcVar16;
  char cVar18;
  undefined1 uVar19;
  undefined7 uVar21;
  byte *pbVar20;
  char cVar22;
  undefined8 *unaff_RBX;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  longlong *unaff_RBP;
  char cVar30;
  char *unaff_RDI;
  undefined4 *puVar31;
  byte *pbVar32;
  longlong lVar33;
  code **ppcVar34;
  ushort uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong unaff_R12;
  undefined8 *unaff_R13;
  bool bVar38;
  undefined8 *unaff_R14;
  longlong *plVar39;
  undefined8 *unaff_R15;
  undefined4 *puVar40;
  int iVar41;
  int iVar42;
  byte bVar43;
  undefined4 uVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar47 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uStackX_20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  byte *pbStack_38;
  byte *pbStack_30;
  code *pcStack_28;
  undefined1 auVar49 [16];
  
  puVar25 = auStack_58;
  puVar28 = auStack_58;
  puVar24 = auStack_58;
  puVar27 = auStack_58;
  puVar29 = auStack_58;
  uVar10 = 0;
  uVar6 = 0;
  ppcVar34 = (code **)&UNK_14305a3c4;
  lVar8 = (longlong)*(int *)(&UNK_14305a3c4 + (ulonglong)*param_2 * 4);
  puVar9 = (uint *)(&UNK_14305a3c4 + lVar8);
  cVar18 = (char)param_1;
  uVar21 = (undefined7)((ulonglong)param_1 >> 8);
  cVar30 = (char)puVar9;
  uVar17 = (undefined7)((ulonglong)puVar9 >> 8);
  uVar7 = (uint)puVar9;
  cVar22 = (char)param_2;
  puVar26 = auStack_58;
  puVar23 = auStack_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
  case 1:
  case 8:
  case 9:
    param_1[1] = *(undefined8 *)(param_2 + 8);
    uVar6 = 1;
    break;
  case 2:
    param_1[1] = *(undefined8 *)(param_2 + 8);
    uVar6 = 2;
    break;
  case 3:
  case 0xc:
  case 0xf:
  case 0x10:
    pcStack_28 = pdb_140b55630;
    pbStack_30 = param_2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1430597e0,&pbStack_30,&UNK_143059848);
  case 4:
  case 5:
    if (param_3 != (undefined8 *)0x0) {
      iVar41 = *(int *)(param_2 + 4);
      pbStack_30 = (byte *)CONCAT44(pbStack_30._4_4_,iVar41);
      lVar8 = pdb_140c41030(param_3,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x48) != 0)) {
        uVar10 = pdb_1400aede0(lVar8 + 0x50,&pbStack_30);
        lVar33 = *(longlong *)(lVar8 + 0x30);
        bVar43 = (byte)(uVar10 >> 0x39);
        auVar47 = ZEXT216(CONCAT11(bVar43,bVar43));
        auVar47 = pshuflw(auVar47,auVar47,0);
        lVar37 = 0;
        while( true ) {
          uVar10 = uVar10 & *(ulonglong *)(lVar8 + 0x38);
          pcVar16 = (char *)(lVar33 + uVar10);
          auVar56[0] = -(*pcVar16 == auVar47[0]);
          auVar56[1] = -(pcVar16[1] == auVar47[1]);
          auVar56[2] = -(pcVar16[2] == auVar47[2]);
          auVar56[3] = -(pcVar16[3] == auVar47[3]);
          auVar56[4] = -(pcVar16[4] == auVar47[4]);
          auVar56[5] = -(pcVar16[5] == auVar47[5]);
          auVar56[6] = -(pcVar16[6] == auVar47[6]);
          auVar56[7] = -(pcVar16[7] == auVar47[7]);
          auVar56[8] = -(pcVar16[8] == auVar47[0]);
          auVar56[9] = -(pcVar16[9] == auVar47[1]);
          auVar56[10] = -(pcVar16[10] == auVar47[2]);
          auVar56[0xb] = -(pcVar16[0xb] == auVar47[3]);
          auVar56[0xc] = -(pcVar16[0xc] == auVar47[4]);
          auVar56[0xd] = -(pcVar16[0xd] == auVar47[5]);
          auVar56[0xe] = -(pcVar16[0xe] == auVar47[6]);
          auVar56[0xf] = -(pcVar16[0xf] == auVar47[7]);
          uVar35 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar56[0xf] >> 7) << 0xf;
          uVar7 = (uint)uVar35;
          while (uVar35 != 0) {
            uVar3 = 0;
            for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            lVar36 = (uVar3 + uVar10 & *(ulonglong *)(lVar8 + 0x38)) * -0x68;
            if (iVar41 == *(int *)(lVar33 + -0x68 + lVar36)) {
              lVar8 = *(longlong *)(lVar33 + lVar36 + -0x60);
              if (lVar8 == 7) {
                *(int *)((longlong)param_1 + 4) = iVar41;
                uVar6 = 5;
              }
              else {
                uVar6 = 0;
                if ((int)lVar8 == 6) {
                  *(int *)((longlong)param_1 + 4) = iVar41;
                  uVar6 = 4;
                }
              }
              goto code_r0x000140b4da67;
            }
            uVar35 = (ushort)(uVar7 - 1) & (ushort)uVar7;
            uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar35);
          }
          auVar54[0] = -(*pcVar16 == -1);
          auVar54[1] = -(pcVar16[1] == -1);
          auVar54[2] = -(pcVar16[2] == -1);
          auVar54[3] = -(pcVar16[3] == -1);
          auVar54[4] = -(pcVar16[4] == -1);
          auVar54[5] = -(pcVar16[5] == -1);
          auVar54[6] = -(pcVar16[6] == -1);
          auVar54[7] = -(pcVar16[7] == -1);
          auVar54[8] = -(pcVar16[8] == -1);
          auVar54[9] = -(pcVar16[9] == -1);
          auVar54[10] = -(pcVar16[10] == -1);
          auVar54[0xb] = -(pcVar16[0xb] == -1);
          auVar54[0xc] = -(pcVar16[0xc] == -1);
          auVar54[0xd] = -(pcVar16[0xd] == -1);
          auVar54[0xe] = -(pcVar16[0xe] == -1);
          auVar54[0xf] = -(pcVar16[0xf] == -1);
          if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar54 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar54 >> 0x2f,0) & 1) != 0) || (SUB161(auVar54 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
          uVar10 = uVar10 + lVar37 + 0x10;
          lVar37 = lVar37 + 0x10;
        }
      }
    }
    break;
  case 6:
  case 7:
  case 10:
  case 0xb:
    break;
  case 0xd:
  case 0xe:
    *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)(param_2 + 4);
    uVar6 = 5;
    break;
  case 0x11:
  case 0x1a:
code_r0x000140b52353:
    *(char *)(puVar9 + 0xd) = '\x02';
    uVar14 = *(undefined8 *)((longlong)unaff_RBP + 0xb7);
    *(longlong *)((longlong)puVar9 + 0x35) = unaff_RBP[0x16];
    *(undefined8 *)(puVar9 + 0xf) = uVar14;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
    puVar9[0x14] = 0;
    puVar9[0x15] = 0;
    puVar15 = (undefined8 *)unaff_RBP[0x47];
    pcVar16 = (char *)*puVar15;
    cVar30 = '\0';
    goto LAB_140b52caa;
  default:
    *(undefined4 *)((longlong)unaff_RBP + 0x1c) = *(undefined4 *)((longlong)unaff_RBP + 0x8c);
    *(int *)(unaff_RBP + 0x20) = (int)unaff_RBP[2];
    unaff_RBP[0x1f] = unaff_RBP[1];
    unaff_RBP[6] = unaff_RBP[-2];
    unaff_RBP[7] = unaff_RBP[-1];
    unaff_RBP[8] = *unaff_RBP;
    param_1 = (undefined8 *)&UNK_14305a408;
    uVar10 = (ulonglong)*(int *)(&UNK_14305a408 + (ulonglong)*(byte *)(unaff_RBP + 6) * 4);
    puVar9 = (uint *)(&UNK_14305a408 + uVar10);
    cVar30 = (char)puVar9;
    param_3 = unaff_R14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(unaff_RBP + 6)) {
    case 0:
    case 9:
      uVar14 = *unaff_R14;
      unaff_RBP[0x15] = unaff_RBP[7];
      lVar8 = pdb_140b54f80(uVar14,unaff_RBP[7],&UNK_143059bb0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143059bc8);
      }
      lVar33 = lVar8 + 0x38;
      fVar51 = *(float *)((longlong)unaff_RBP + 0xfc);
      if (_DAT_142f3e554 <= *(float *)((longlong)unaff_RBP + 0xfc)) {
        fVar51 = _DAT_142f3e554;
      }
      *(float *)((longlong)unaff_RBP + 0xfc) = fVar51;
      uVar46 = pdb_1419aa990(lVar33);
      uVar6 = pdb_1419aaa60(lVar8);
      auVar48._8_4_ = (int)((ulonglong)extraout_XMM0_Qa >> 0x20);
      auVar48._0_8_ = extraout_XMM0_Qa;
      auVar48._12_4_ = (int)((ulonglong)uVar46 >> 0x20);
      auVar47._8_8_ = auVar48._8_8_;
      auVar47._0_4_ = (undefined4)extraout_XMM0_Qa;
      auVar47._4_4_ = (int)uVar46;
      auVar47 = maxps(ZEXT816(0),auVar47);
      fVar59 = auVar47._0_4_;
      fVar52 = auVar47._4_4_;
      iVar41 = -(uint)(_DAT_142e37950 < fVar59);
      iVar42 = -(uint)(_UNK_142e37954 < fVar52);
      auVar50._4_4_ = iVar42;
      auVar50._0_4_ = iVar41;
      auVar50._8_4_ = iVar42;
      auVar50._12_4_ = iVar42;
      auVar49._8_8_ = auVar50._8_8_;
      auVar49._4_4_ = iVar41;
      auVar49._0_4_ = iVar41;
      uVar7 = movmskpd(uVar6,auVar49);
      if ((uVar7 & 2) == 0) {
        if ((uVar7 & 1) != 0) goto code_r0x000140b52452;
code_r0x000140b5247f:
        uVar7 = *(uint *)(lVar8 + 600);
        if (1 < uVar7) goto code_r0x000140b5248e;
code_r0x000140b5245d:
        if ((uVar7 & 1) == 0) {
          fVar53 = fVar59;
          uVar6 = pdb_140def5e0(lVar8 + 0x25c);
        }
        else {
          uVar6 = *(undefined4 *)(lVar8 + 0x25c);
          fVar53 = *(float *)(lVar8 + 0x260);
        }
      }
      else {
        fVar52 = _DAT_142e36f28;
        if ((uVar7 & 1) == 0) goto code_r0x000140b5247f;
code_r0x000140b52452:
        uVar7 = *(uint *)(lVar8 + 600);
        fVar59 = _DAT_142e36f28;
        if (uVar7 < 2) goto code_r0x000140b5245d;
code_r0x000140b5248e:
        pdb_1419aa0c0(unaff_RBP + 0x16,lVar33);
        uVar6 = (undefined4)unaff_RBP[0x16];
        fVar53 = *(float *)(unaff_RBP + 0x17);
      }
      if (fVar51 < _DAT_142e37838) {
        pdb_1419a7e00(unaff_RBP + 0x1f,lVar33);
        fVar51 = 0.0;
      }
      pdb_1419a7e00(unaff_RBP + 0x16,lVar33);
      *(int *)(unaff_RBP + 0xc) = (int)unaff_RBP[0x16];
      *(int *)((longlong)unaff_RBP + 100) = (int)unaff_RBP[0x17];
      plVar39 = (longlong *)((longlong)unaff_RBP + -0x3c);
      pdb_140df4540(plVar39,unaff_RBP + 0xc);
      if (((0.0 < fVar51) && (*(uint *)(lVar8 + 600) < 2)) &&
         ((*unaff_RDI == '\x01' && (unaff_RDI[1] == '\x02')))) {
        if (*(uint *)(lVar8 + 600) == 1) {
          unaff_RBP[0x18] = *(longlong *)(lVar8 + 0x26c);
          lVar33 = *(longlong *)(lVar8 + 0x264);
          unaff_RBP[0x16] = *(longlong *)(lVar8 + 0x25c);
          unaff_RBP[0x17] = lVar33;
          unaff_RBP[0x18] =
               CONCAT44((float)((ulonglong)unaff_RBP[0x18] >> 0x20) + _UNK_1430595a4,
                        (float)unaff_RBP[0x18] + _UNK_1430595a0);
          uVar44 = pdb_140df0920(unaff_RBP + 0x16);
        }
        else {
          lVar33 = *(longlong *)(lVar8 + 0x264);
          unaff_RBP[0x16] = *(longlong *)(lVar8 + 0x25c);
          unaff_RBP[0x17] = lVar33;
          *(float *)(unaff_RBP + 0x17) = *(float *)(unaff_RBP + 0x17) + _UNK_143059594;
          uVar44 = pdb_140def2c0(unaff_RBP + 0x16);
        }
        *(undefined4 *)(unaff_RBP + 0x16) = uVar44;
        *(float *)((longlong)unaff_RBP + 0xb4) = fVar59;
        pdb_140df4540(unaff_RBP + 0x1f,unaff_RBP + 0x16);
      }
      uVar14 = pdb_140b54b40(uVar14,unaff_RBP[0x15]);
      lVar8 = pdb_140b55350(uVar14,lRam0000000000000000,puRam0000000000000008);
      if (lVar8 == 0) {
        uVar19 = false;
      }
      else {
        uVar19 = *(float *)(lVar8 + 0x30) <= _DAT_142e3b1d8;
      }
      uVar44 = *(undefined4 *)((longlong)unaff_R13 + 0x1c);
      puVar40 = (undefined4 *)unaff_R13[2];
      *puVar40 = uVar44;
      puVar31 = (undefined4 *)*unaff_R13;
      *puVar31 = 0;
      puVar31[2] = 0;
      puVar31[4] = 1;
      cVar30 = '\x02';
      goto code_r0x000140b52bba;
    default:
      uVar14 = *unaff_RBX;
      unaff_R15 = (undefined8 *)*unaff_R14;
      *(int *)(unaff_RBP + 7) = (int)unaff_RBP[0xb];
      unaff_RBP[6] = unaff_RBP[10];
      unaff_R14 = puRam0000000000000008;
      unaff_R12 = lRam0000000000000000;
      unaff_RBP[-2] = 0;
      unaff_RBP[-1] = 8;
      *unaff_RBP = 0;
      fVar51 = *(float *)(unaff_RBP + 7) + _UNK_14304ab14;
      fVar52 = *(float *)(unaff_RBP + 6) + _UNK_14304ab18;
      fVar53 = *(float *)(unaff_RBP + 7) + _UNK_14304ab1c;
      *(float *)(unaff_RBP + 0x16) = *(float *)(unaff_RBP + 6) + _DAT_14304ab10;
      *(float *)((longlong)unaff_RBP + 0xb4) = fVar51;
      *(float *)(unaff_RBP + 0x17) = fVar52;
      *(float *)((longlong)unaff_RBP + 0xbc) = fVar53;
      pdb_140b57420(uVar14,unaff_RBP + 0x16,unaff_RBP + -2);
      unaff_RBP[0x16] = unaff_RBP[-1];
      unaff_RBP[0x17] = unaff_RBP[-1] + *unaff_RBP * 8;
      unaff_RBP[0x18] = (longlong)unaff_R15;
      unaff_RBP[0x19] = (longlong)(unaff_RBP + 6);
      pdb_1415f5d00(unaff_RBP + 0xc,unaff_RBP + 0x16);
      uVar10 = unaff_RBP[0xe];
      if (uVar10 != 0) {
        pbVar20 = (byte *)unaff_RBP[0xd];
        unaff_RBP[0x14] = (longlong)(unaff_RBP + 6);
        unaff_RBP[0x16] = (longlong)(unaff_RBP + 0x14);
        if (uVar10 != 1) {
          unaff_RBP[0x15] = (longlong)pbVar20;
          if (uVar10 < 0x15) goto code_r0x000140b52d2a;
          pbVar20 = (byte *)unaff_RBP[0x15];
          pdb_140c75e80(pbVar20,uVar10,unaff_RBP + 0x16);
        }
        goto LAB_140b51fba;
      }
      if (unaff_RBP[0xc] != 0) {
        pub_1406abac0((byte *)unaff_RBP[0xd],unaff_RBP[0xc] << 5,8);
      }
      puVar15 = (undefined8 *)unaff_RBP[0x48];
      if (unaff_RBP[-2] != 0) {
        pub_1406abac0((byte *)unaff_RBP[-1],unaff_RBP[-2] << 3,8);
      }
      if (*(char *)*puVar15 != '\x01') {
        *(int *)((longlong)unaff_RBP + 0xbb) = (int)unaff_RBP[0xb];
        *(longlong *)((longlong)unaff_RBP + 0xb3) = unaff_RBP[10];
        puVar15 = (undefined8 *)unaff_RBP[0x46];
        *(undefined4 *)puVar15[2] = *(undefined4 *)((longlong)puVar15 + 0x1c);
        puVar9 = (uint *)*puVar15;
        *puVar9 = 0;
        puVar9[2] = 0;
        puVar9[4] = 0;
        goto code_r0x000140b52353;
      }
      puVar15 = (undefined8 *)unaff_RBP[0x46];
      uVar44 = *(undefined4 *)((longlong)puVar15 + 0x1c);
      puVar31 = (undefined4 *)*puVar15;
      puVar40 = (undefined4 *)puVar15[2];
      goto LAB_140b522a9;
    case 2:
      *(uint *)((longlong)unaff_RBP + 0x9c) = (uint)*(byte *)((longlong)unaff_RBP + 0x31);
      uVar14 = *unaff_R14;
      unaff_RBP[0x15] = unaff_RBP[7];
      lVar8 = pdb_140b54f80(uVar14,unaff_RBP[7],&UNK_143059ae0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143059af8);
      }
      if (1 < *(uint *)(lVar8 + 600)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143021f00);
      }
      fVar51 = (float)pdb_1419aa990(lVar8 + 0x38);
      fVar52 = _DAT_142e36f28;
      fVar53 = (float)pdb_1419aaa60(lVar8);
      if (*(char *)(lVar8 + 600) == '\0') {
        fVar59 = 0.0;
        if (0.0 <= fVar53) {
          fVar59 = fVar53;
        }
        fVar53 = fVar52;
        if (fVar59 <= fVar52) {
          fVar53 = fVar59;
        }
        uVar6 = pdb_140def5e0(lVar8 + 0x25c);
      }
      else {
        uVar6 = *(undefined4 *)(lVar8 + 0x25c);
        fVar53 = *(float *)(lVar8 + 0x260);
      }
      if ((*unaff_RDI != '\x01') ||
         ((fVar59 = _DAT_14303aa00, unaff_RDI[1] != '\x02' &&
          (fVar59 = _DAT_142e37888, unaff_RDI[1] != '\x01')))) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059b70,0x28,&UNK_143059b98);
      }
      fVar1 = *(float *)((longlong)unaff_RBP + 0xfc);
      uVar14 = pdb_140b54b40(uVar14,unaff_RBP[0x15]);
      if ((int)uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143059b40);
      }
      pdb_140b55520(unaff_RBP + 0xc,lRam0000000000000000,puRam0000000000000008,uVar14);
      if ((int)unaff_RBP[0xc] != 3) {
        unaff_RBP[0x16] = unaff_RBP[0xc];
        unaff_RBP[0x17] = unaff_RBP[0xd];
        pbStack_38 = &UNK_143059b58;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143059ea8,0x2b,unaff_RBP + 0x16,&UNK_143059e88);
      }
      pdb_140b51610(unaff_RBP + 0xc,unaff_RBP[0xd],unaff_RBP + 1,_DAT_142e36f50);
      if ((int)unaff_RBP[0xc] == 0) {
        cVar30 = '\0';
code_r0x000140b52885:
        uVar19 = (undefined1)*(undefined4 *)((longlong)unaff_RBP + 0x9c);
      }
      else {
        puVar15 = (undefined8 *)unaff_RBP[0x4d];
        if ((int)unaff_RBP[0xc] == 1) {
          uVar44 = *(undefined4 *)((longlong)unaff_RBP + 100);
          lVar33 = unaff_RBP[0xd];
          uVar2 = *(undefined4 *)((longlong)unaff_RBP + 0x6c);
          *(undefined4 *)(unaff_RBP + 0x1f) = uVar44;
          *(int *)((longlong)unaff_RBP + 0xfc) = (int)lVar33;
          *(undefined4 *)(unaff_RBP + 0x20) = uVar2;
          *(int *)((longlong)unaff_RBP + 0xcc) = (int)unaff_RBP[0x20];
          *(longlong *)((longlong)unaff_RBP + 0xc4) = unaff_RBP[0x1f];
          *(undefined4 *)(unaff_RBP + 0x16) = 0;
          *(undefined4 *)(unaff_RBP + 0x18) = 0x3e99999a;
          *(undefined4 *)(unaff_RBP + 0x1a) = 0x3f800000;
          *(undefined1 *)((longlong)unaff_RBP + 0xd4) = 0;
          uVar14 = *puVar15;
          pdb_140ab07b0(unaff_RBP + 0x16,uVar14);
          lVar37 = pdb_140b4b7e0();
          unaff_RBP[0x12] = lVar37;
          *(undefined4 *)(unaff_RBP + 0x14) = uVar44;
          *(undefined4 *)((longlong)unaff_RBP + 0xa4) = uVar2;
          pdb_140df4540(unaff_RBP + 0x16,unaff_RBP + 0x14);
          puVar31 = (undefined4 *)unaff_RBP[0x12];
          *puVar31 = uVar44;
          puVar31[1] = (int)lVar33;
          puVar31[2] = uVar2;
          puVar31[5] = (int)unaff_RBP[0x17];
          *(longlong *)(puVar31 + 3) = unaff_RBP[0x16];
          unaff_RBP[0x16] = 2;
          unaff_RBP[0x17] = (longlong)puVar31;
          unaff_RBP[0x18] = 2;
          unaff_RBP[0x19] = -0x8000000000000000;
          *(undefined4 *)(unaff_RBP + 0x1c) = 0;
          *(undefined4 *)(unaff_RBP + 0x1e) = 0x40400000;
          *(undefined2 *)((longlong)unaff_RBP + 0xf4) = 0x101;
          pdb_140ab2da0(unaff_RBP + 0x16,uVar14);
          cVar30 = '\x02';
          goto code_r0x000140b52885;
        }
        *(float *)((longlong)unaff_RBP + 0x2c) = fVar51;
        fVar51 = *(float *)((longlong)unaff_RBP + 100);
        pfVar13 = (float *)pdb_140b4b7e0();
        fVar58 = *(float *)(unaff_RBP + 0xd);
        fVar5 = *(float *)((longlong)unaff_RBP + 0x6c);
        fVar45 = *(float *)(unaff_RBP + 0xe);
        fVar60 = *(float *)((longlong)unaff_RBP + 0x74);
        uVar10 = (ulonglong)_DAT_142f6a630 >> 0x20;
        lVar33 = unaff_RBP[0xe];
        *pfVar13 = (float)_DAT_142f6a630 + fVar58;
        pfVar13[1] = (float)uVar10 + fVar5;
        pfVar13[2] = fVar45 + 0.0;
        pfVar13[3] = fVar60 + 0.0;
        fVar61 = (float)unaff_RBP[0xf];
        fVar60 = (float)((ulonglong)unaff_RBP[0xf] >> 0x20);
        *(ulonglong *)(pfVar13 + 4) = CONCAT44(fVar60 + 0.0,_DAT_142e3787c + fVar61);
        unaff_RBP[0x16] = 2;
        unaff_RBP[0x17] = (longlong)pfVar13;
        unaff_RBP[0x18] = 2;
        unaff_RBP[0x19] = -0x8000000000000000;
        *(undefined4 *)(unaff_RBP + 0x1c) = 0;
        *(undefined4 *)(unaff_RBP + 0x1e) = 0x40400000;
        *(undefined2 *)((longlong)unaff_RBP + 0xf4) = 0x101;
        uVar14 = *puVar15;
        pdb_140ab2da0(unaff_RBP + 0x16,uVar14);
        fVar45 = fVar52 - fVar51;
        fVar60 = fVar60 * fVar51 + (float)lVar33 * fVar45;
        fVar58 = fVar51 * (float)((ulonglong)lVar33 >> 0x20) + fVar45 * fVar58;
        unaff_RBP[0x1f] = CONCAT44(fVar51 * fVar61 + fVar45 * fVar5,fVar58);
        *(float *)(unaff_RBP + 0x20) = fVar60;
        *(int *)((longlong)unaff_RBP + 0xcc) = (int)unaff_RBP[0x20];
        *(longlong *)((longlong)unaff_RBP + 0xc4) = unaff_RBP[0x1f];
        *(undefined4 *)(unaff_RBP + 0x16) = 0;
        *(undefined4 *)(unaff_RBP + 0x18) = 0x3e99999a;
        *(undefined4 *)(unaff_RBP + 0x1a) = 0x3f800000;
        *(undefined1 *)((longlong)unaff_RBP + 0xd4) = 0;
        pdb_140ab07b0(unaff_RBP + 0x16,uVar14);
        lVar33 = pdb_140b4b7e0();
        unaff_RBP[0x12] = lVar33;
        *(float *)(unaff_RBP + 0x14) = fVar58;
        *(float *)((longlong)unaff_RBP + 0xa4) = fVar60;
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
        pdb_140ab2da0(unaff_RBP + 0x16,uVar14);
        cVar30 = '\x02';
        uVar19 = (undefined1)*(undefined4 *)((longlong)unaff_RBP + 0x9c);
        fVar51 = *(float *)((longlong)unaff_RBP + 0x2c);
      }
      fVar58 = 0.0;
      if (0.0 <= fVar51) {
        fVar58 = fVar51;
      }
      if (fVar58 <= fVar52) {
        fVar52 = fVar58;
      }
      fVar59 = fVar59 + fVar1 + _DAT_142e37874;
      fVar51 = *(float *)(lVar8 + 0x284);
      puVar15 = (undefined8 *)unaff_RBP[0x46];
      uVar44 = *(undefined4 *)((longlong)puVar15 + 0x1c);
      puVar40 = (undefined4 *)puVar15[2];
      *puVar40 = uVar44;
      puVar31 = (undefined4 *)*puVar15;
      *puVar31 = 1;
      puVar31[1] = fVar59;
      puVar31[2] = 0;
      puVar31[4] = 2;
      *(longlong *)(puVar31 + 5) = unaff_RBP[0x1f];
      puVar31[7] = (int)unaff_RBP[0x20];
      plVar39 = unaff_RBP + 0x1f;
code_r0x000140b52bba:
      puVar31[8] = uVar6;
      puVar31[9] = fVar53;
      *(longlong *)(puVar31 + 10) = unaff_RBP[0x15];
      puVar31[0xc] = fVar52;
      *(undefined1 *)(puVar31 + 0xd) = uVar19;
      *(longlong *)(puVar31 + 0xe) = unaff_RBP[0x1f];
      puVar31[0x10] = (int)unaff_RBP[0x20];
      puVar31[0x11] = fVar51;
      puVar31[0x12] = 0;
      *(longlong *)(puVar31 + 0x13) = *plVar39;
      puVar31[0x15] = (int)plVar39[1];
      if (*(char *)*unaff_R15 == '\0') {
LAB_140b52c14:
        plVar39 = (longlong *)unaff_RBP[0x4b];
        *(undefined4 *)plVar39[2] = *(undefined4 *)((longlong)plVar39 + 0x1c);
        lVar8 = *plVar39;
        lVar33 = *(longlong *)(lVar8 + 0x30);
        uVar14 = *(undefined8 *)(lVar8 + 0x40);
        if (lVar33 == *(longlong *)(lVar8 + 0x20)) {
          pdb_142d7e980(lVar8 + 0x20);
        }
        lVar37 = *(longlong *)(lVar8 + 0x28);
        *(undefined8 *)(lVar37 + lVar33 * 0x10) = uVar14;
        *(undefined1 *)(lVar37 + 8 + lVar33 * 0x10) = 0;
        *(longlong *)(lVar8 + 0x30) = lVar33 + 1;
        *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
        puVar15 = (undefined8 *)unaff_RBP[0x47];
        pcVar16 = (char *)*puVar15;
        if ((cVar30 != '\0') && (*pcVar16 == '\0')) {
          *(undefined4 *)(unaff_RBP + 0x18) = puVar31[0x10];
          unaff_RBP[0x17] = *(longlong *)(puVar31 + 0xe);
          *(undefined1 *)(unaff_RBP + 0x16) = 3;
          pdb_1414af100(unaff_RBP[0x45],unaff_RBP + 0x16,&UNK_143059ca8);
        }
LAB_140b52caa:
        uVar7 = *(uint *)((longlong)puVar15 + 0x1c);
        *(uint *)puVar15[2] = uVar7;
        *pcVar16 = cVar30;
      }
      else {
code_r0x000140b5225c:
        plVar39 = (longlong *)unaff_RBP[0x4b];
        *(undefined4 *)plVar39[2] = *(undefined4 *)((longlong)plVar39 + 0x1c);
        lVar8 = *plVar39;
        lVar33 = *(longlong *)(lVar8 + 0x30);
        uVar14 = *(undefined8 *)(lVar8 + 0x40);
        if (lVar33 == *(longlong *)(lVar8 + 0x20)) {
          pdb_142d7e980(lVar8 + 0x20);
        }
        lVar37 = *(longlong *)(lVar8 + 0x28);
        *(undefined8 *)(lVar37 + lVar33 * 0x10) = uVar14;
        *(undefined1 *)(lVar37 + 8 + lVar33 * 0x10) = 1;
        *(longlong *)(lVar8 + 0x30) = lVar33 + 1;
        *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
LAB_140b522a9:
        *(undefined4 *)(unaff_RBP + 0xd) = 0;
        unaff_RBP[0xc] = 0;
        *(longlong *)((longlong)unaff_RBP + 0xb3) = unaff_RBP[10];
        *(int *)((longlong)unaff_RBP + 0xbb) = (int)unaff_RBP[0xb];
        *puVar40 = uVar44;
        *puVar31 = 0;
        puVar31[2] = 0;
        puVar31[4] = 0;
        *(undefined1 *)(puVar31 + 0xd) = 2;
        uVar14 = *(undefined8 *)((longlong)unaff_RBP + 0xb7);
        *(longlong *)((longlong)puVar31 + 0x35) = unaff_RBP[0x16];
        *(undefined8 *)(puVar31 + 0xf) = uVar14;
        *(undefined8 *)(puVar31 + 0x11) = 0;
        *(longlong *)(puVar31 + 0x13) = unaff_RBP[0xc];
        uVar7 = *(uint *)(unaff_RBP + 0xd);
        puVar31[0x15] = uVar7;
      }
      return (undefined8 *)(ulonglong)uVar7;
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
      param_2 = (byte *)0x43059fe8;
      ppcVar34 = &pcStack_28;
      param_3 = (undefined8 *)0xb;
      goto code_r0x000140b5561a;
    case 0x12:
      goto code_r0x000140b55a14;
    case 0x13:
      *(char *)(uVar10 + 0xcbca2550) = *(char *)(uVar10 + 0xcbca2550) + cVar22;
      *(char *)puVar9 = (char)*puVar9 + cVar30;
      param_5 = (undefined8 *)&UNK_14305a410;
      pcStack_28 = (code *)&UNK_143059ff8;
      pbStack_30 = (byte *)&param_5;
      pbStack_38 = (byte *)0x7;
      param_2 = &UNK_14305a12f;
      break;
    case 0x14:
      puVar25 = &stack0xffffffffffffffa0;
      param_1 = (undefined8 *)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar10] + '\b');
      puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff30);
      goto code_r0x000140b55919;
    case 0x15:
      param_1 = (undefined8 *)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar10] + '\b');
      puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff30);
    case 0x1c:
      *(char *)(puVar9 + -0x1dcedfae) = (char)puVar9[-0x1dcedfae] + cVar22;
      *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
      param_5 = (undefined8 *)((longlong)param_1 + 4);
      pcStack_28 = (code *)&UNK_14305a158;
      pbStack_30 = (byte *)&param_5;
      pbStack_38 = (byte *)0xa;
      param_2 = &UNK_14305a18e;
code_r0x000140b55b44:
      *(undefined8 *)(puVar29 + -8) = 0x140b55b59;
      puVar15 = (undefined8 *)pdb_140f66e50(puVar9,param_2,0xc,&UNK_14305a184);
      return puVar15;
    case 0x16:
      puVar9 = (uint *)(ulonglong)((int)puVar9 + 0x25046d1 + (uint)(0xfffffffebcfa5bf7 < uVar10));
      goto code_r0x000140b55a14;
    case 0x17:
      puVar28 = &stack0xffffffffffffffa0;
      puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff30);
      param_1 = &uStackX_20;
      goto code_r0x000140b55b2f;
    case 0x18:
      puVar26 = &stack0xffffffffffffffa0;
      param_1 = (undefined8 *)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar10] + '\b');
      puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff30);
      goto code_r0x000140b55996;
    case 0x19:
      *(char *)puVar9 = (char)*puVar9 + cVar30;
      pbVar20 = &UNK_14305a395 + uVar10;
      bVar43 = *pbVar20;
      *pbVar20 = *pbVar20 + 8;
      puVar9 = (uint *)(ulonglong)((int)puVar9 + 0x2504587 + (uint)(0xf7 < bVar43));
      break;
    case 0x1a:
      uVar7 = (int)unaff_RDI + 0x50;
      param_1 = (undefined8 *)CONCAT71(0x14305a4,*(char *)((ulonglong)uVar7 - 0x77) + '\b');
      puVar9 = (uint *)((ulonglong)uVar7 & 0xffffffffffffff30);
      goto code_r0x000140b557f5;
    case 0x1b:
      *(int *)(&UNK_14305a40a + (longlong)param_2 * 2 + uVar10) =
           *(int *)(&UNK_14305a40a + (longlong)param_2 * 2 + uVar10) + 0x48;
      pcStack_28 = (code *)CONCAT44(pcStack_28._4_4_,0x4305a408);
      pbStack_30 = (byte *)&param_5;
      pbStack_38 = (byte *)0x7;
      param_2 = &UNK_14305a11e;
      break;
    case 0x1d:
      puVar24 = &stack0xffffffffffffffa0;
      pcVar16 = (char *)((ulonglong)puVar9 & 0xffffffffffffff30);
      pbStack_38 = param_2;
      goto code_r0x000140b557c2;
    case 0x1e:
      puVar27 = &stack0xffffffffffffffa0;
      pcVar16 = (char *)((ulonglong)puVar9 & 0xffffffffffffff30);
      pbStack_38 = param_2;
      goto code_r0x000140b55ae1;
    case 0x1f:
      puVar23 = &stack0xffffffffffffffa0;
      param_1 = (undefined8 *)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar10] + '\b');
      puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff30);
      goto code_r0x000140b55695;
    case 0x20:
      goto code_r0x000140b5589e;
    case 0x21:
      pbStack_38 = (byte *)&uStackX_20;
      uStack_40 = 7;
      puVar15 = (undefined8 *)
                pdb_140f66e50(CONCAT31((int3)(char)((ulonglong)puVar9 >> 8),cVar30) & 0xffffff30,
                              &UNK_14305a018,4,&UNK_14305a01c);
      return puVar15;
    }
    goto code_r0x000140b55b97;
  case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x20:
  case 0x21:
    (&UNK_14305a347)[lVar8] = (&UNK_14305a347)[lVar8] + cVar18;
    UNK_141a0b037 = UNK_141a0b037 + '\x01';
    *(char *)puVar9 = (char)*puVar9 + cVar30;
code_r0x000140b52d2a:
    pbVar20 = (byte *)unaff_RBP[0x15];
    pbVar32 = pbVar20 + 0x20;
    do {
      pdb_141510850(pbVar20,pbVar32,unaff_RBP + 0x14);
      pbVar32 = pbVar32 + 0x20;
    } while (pbVar32 != pbVar20 + uVar10 * 0x20);
LAB_140b51fba:
    uVar14 = *(undefined8 *)(pbVar20 + 8);
    lVar8 = *(longlong *)pbVar20;
    uVar6 = *(undefined4 *)(pbVar20 + 0x10);
    unaff_RBP[0x16] = lVar8;
    if (unaff_R15[9] != 0) {
      uVar10 = pdb_1400af0a0(unaff_R15 + 10,unaff_RBP + 0x16);
      bVar43 = (byte)(uVar10 >> 0x39);
      auVar47 = ZEXT216(CONCAT11(bVar43,bVar43));
      auVar47 = pshuflw(auVar47,auVar47,0);
      lVar33 = 0;
      while( true ) {
        uVar10 = uVar10 & unaff_R15[7];
        pcVar16 = (char *)(unaff_R15[6] + uVar10);
        auVar57[0] = -(*pcVar16 == auVar47[0]);
        auVar57[1] = -(pcVar16[1] == auVar47[1]);
        auVar57[2] = -(pcVar16[2] == auVar47[2]);
        auVar57[3] = -(pcVar16[3] == auVar47[3]);
        auVar57[4] = -(pcVar16[4] == auVar47[4]);
        auVar57[5] = -(pcVar16[5] == auVar47[5]);
        auVar57[6] = -(pcVar16[6] == auVar47[6]);
        auVar57[7] = -(pcVar16[7] == auVar47[7]);
        auVar57[8] = -(pcVar16[8] == auVar47[0]);
        auVar57[9] = -(pcVar16[9] == auVar47[1]);
        auVar57[10] = -(pcVar16[10] == auVar47[2]);
        auVar57[0xb] = -(pcVar16[0xb] == auVar47[3]);
        auVar57[0xc] = -(pcVar16[0xc] == auVar47[4]);
        auVar57[0xd] = -(pcVar16[0xd] == auVar47[5]);
        auVar57[0xe] = -(pcVar16[0xe] == auVar47[6]);
        auVar57[0xf] = -(pcVar16[0xf] == auVar47[7]);
        uVar35 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf
        ;
        uVar7 = (uint)uVar35;
        while (uVar35 != 0) {
          uVar3 = 0;
          for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          lVar37 = unaff_R15[6] + (uVar3 + uVar10 & unaff_R15[7]) * -0x10;
          if (lVar8 == *(longlong *)(lVar37 + -0x10)) {
            uVar10 = *(ulonglong *)(lVar37 + -8);
            uVar11 = uVar10 & 0xffffffff;
            if (uVar11 == 0) {
              bVar38 = false;
            }
            else {
              uVar11 = uVar11 ^ 0xffffffff;
              if (((((ulonglong)unaff_R14[2] <= uVar11) ||
                   (piVar12 = (int *)(uVar11 * 0x18 + unaff_R14[1]),
                   piVar12[4] != (int)(uVar10 >> 0x20))) || (*piVar12 == 0)) ||
                 ((uVar10 = *(ulonglong *)(piVar12 + 2),
                  *(ulonglong *)(unaff_R12 + 0x38) <= (uVar10 & 0xffffffff) ||
                  ((*(ulonglong *)(*(longlong *)(unaff_R12 + 0x28) + (uVar10 >> 6 & 0x3ffffff) * 8)
                    >> (uVar10 & 0x3f) & 1) == 0)))) goto LAB_140b52196;
              bVar38 = *(float *)(*(longlong *)
                                   (*(longlong *)(unaff_R14[0x34] + 0x18 + (uVar10 >> 0x20) * 0x48)
                                    + 0x10 + ~*(ulonglong *)
                                               (*(longlong *)
                                                 (unaff_R14[0x34] + 0x38 + (uVar10 >> 0x20) * 0x48)
                                               + *(longlong *)(unaff_R12 + 0x110) * 8) * 0x30) +
                                  0x30 + (ulonglong)(uint)~piVar12[1] * 0x58) <= _DAT_142e3b1d8;
            }
            goto LAB_140b52199;
          }
          uVar35 = (ushort)(uVar7 - 1) & (ushort)uVar7;
          uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar35);
        }
        auVar55[0] = -(*pcVar16 == -1);
        auVar55[1] = -(pcVar16[1] == -1);
        auVar55[2] = -(pcVar16[2] == -1);
        auVar55[3] = -(pcVar16[3] == -1);
        auVar55[4] = -(pcVar16[4] == -1);
        auVar55[5] = -(pcVar16[5] == -1);
        auVar55[6] = -(pcVar16[6] == -1);
        auVar55[7] = -(pcVar16[7] == -1);
        auVar55[8] = -(pcVar16[8] == -1);
        auVar55[9] = -(pcVar16[9] == -1);
        auVar55[10] = -(pcVar16[10] == -1);
        auVar55[0xb] = -(pcVar16[0xb] == -1);
        auVar55[0xc] = -(pcVar16[0xc] == -1);
        auVar55[0xd] = -(pcVar16[0xd] == -1);
        auVar55[0xe] = -(pcVar16[0xe] == -1);
        auVar55[0xf] = -(pcVar16[0xf] == -1);
        if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x1f,0) & 1) != 0) || (SUB161(auVar55 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
        uVar10 = uVar10 + lVar33 + 0x10;
        lVar33 = lVar33 + 0x10;
      }
    }
LAB_140b52196:
    bVar38 = false;
LAB_140b52199:
    *(undefined4 *)((longlong)unaff_RBP + -0x24) = *(undefined4 *)(pbVar20 + 0x1c);
    *(longlong *)((longlong)unaff_RBP + -0x2c) = *(longlong *)(pbVar20 + 0x14);
    unaff_RBP[-4] = *(longlong *)(pbVar20 + 0x14);
    *(undefined4 *)(unaff_RBP + -3) = *(undefined4 *)(pbVar20 + 0x1c);
    if (unaff_RBP[0xc] != 0) {
      pub_1406abac0(pbVar20,unaff_RBP[0xc] << 5,8);
    }
    if (unaff_RBP[-2] != 0) {
      pub_1406abac0((byte *)unaff_RBP[-1],unaff_RBP[-2] << 3,8);
    }
    puVar15 = (undefined8 *)unaff_RBP[0x46];
    uVar44 = *(undefined4 *)((longlong)puVar15 + 0x1c);
    puVar40 = (undefined4 *)puVar15[2];
    *puVar40 = uVar44;
    puVar31 = (undefined4 *)*puVar15;
    *puVar31 = 0;
    puVar31[2] = 0;
    puVar31[4] = 1;
    *(undefined8 *)(puVar31 + 8) = uVar14;
    *(longlong *)(puVar31 + 10) = lVar8;
    puVar31[0xc] = uVar6;
    *(bool *)(puVar31 + 0xd) = bVar38;
    lVar8 = unaff_RBP[-5];
    *(undefined8 *)((longlong)puVar31 + 0x35) = *(undefined8 *)((longlong)unaff_RBP + -0x2f);
    *(longlong *)(puVar31 + 0xf) = lVar8;
    *(undefined8 *)(puVar31 + 0x11) = 0;
    puVar31[0x15] = (int)unaff_RBP[-3];
    *(longlong *)(puVar31 + 0x13) = unaff_RBP[-4];
    cVar30 = '\x02';
    if (**(char **)unaff_RBP[0x48] == '\x01') goto code_r0x000140b5225c;
    goto LAB_140b52c14;
  case 0x22:
    pcVar16 = (char *)((longlong)param_1 * 5 + 0x51);
    *pcVar16 = *pcVar16 + cVar30;
    *(int *)(param_1 + 1) = (int)param_1;
    return (undefined8 *)CONCAT71(uVar17,cVar30 + 'L');
  case 0x23:
    param_1 = (undefined8 *)CONCAT71(uVar21,cVar18 + (&UNK_14305a34d)[lVar8]);
    puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff38);
    puVar26 = auStack_58;
  case 0x29:
code_r0x000140b55996:
    *(char *)(param_3 + -0xee76fd7) = *(char *)(param_3 + -0xee76fd7) + cVar22;
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    *(undefined8 **)(puVar26 + 0x80) = param_1 + 1;
    *(undefined **)(puVar26 + 0x50) = &UNK_14305a0b8;
    *(undefined1 **)(puVar26 + 0x48) = puVar26 + 0x80;
    *(undefined **)(puVar26 + 0x38) = &UNK_14305a0f6;
    *(undefined **)(puVar26 + 0x30) = &UNK_14305a098;
    *(undefined **)(puVar26 + 0x28) = (undefined *)((longlong)param_1 + 4);
    *(undefined8 *)(puVar26 + 0x40) = 4;
    *(undefined8 *)(puVar26 + 0x20) = 0xc;
    *(undefined8 *)(puVar26 + -8) = 0x140b55a15;
    puVar15 = (undefined8 *)pdb_140f66f00(puVar9,&UNK_14305a0d8,0x12,&UNK_14305a0ea);
    return puVar15;
  case 0x24:
code_r0x000140b557f5:
    param_5 = (undefined8 *)CONCAT44(param_5._4_4_,(int)param_1);
    pcStack_28 = (code *)&UNK_143059f90;
    pbStack_30 = (byte *)&param_5;
    pbStack_38 = (byte *)0x6;
    puVar15 = (undefined8 *)pdb_140f66e50(puVar9,&UNK_14305a140,0xb,&UNK_14305a14b);
    return puVar15;
  case 0x25:
code_r0x000140b55919:
    *(char *)(param_3 + -0xee76fd7) = *(char *)(param_3 + -0xee76fd7) + cVar22;
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    *(undefined **)(puVar25 + 0x80) = (undefined *)((longlong)param_1 + 4);
    *(undefined **)(puVar25 + 0x50) = &UNK_143059fc8;
    *(undefined1 **)(puVar25 + 0x48) = puVar25 + 0x80;
    *(undefined **)(puVar25 + 0x38) = &UNK_14305a1d8;
    *(undefined **)(puVar25 + 0x30) = &UNK_14305a1a0;
    *(undefined8 **)(puVar25 + 0x28) = param_1 + 1;
    *(undefined8 *)(puVar25 + 0x40) = 9;
    *(undefined8 *)(puVar25 + 0x20) = 10;
    *(undefined8 *)(puVar25 + -8) = 0x140b55998;
    puVar15 = (undefined8 *)pdb_140f66f00(puVar9,&UNK_14305a1c0,0x18,&UNK_14305a184);
    return puVar15;
  case 0x26:
    *puVar9 = *puVar9 | uVar7;
    *(char *)puVar9 = (char)*puVar9 + cVar30;
    puVar23 = auStack_58;
  case 0x30:
code_r0x000140b55695:
    *(char *)(param_3 + -0xee76fd7) = *(char *)(param_3 + -0xee76fd7) + cVar22;
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    *(undefined **)(puVar23 + 0x80) = (undefined *)((longlong)param_1 + 4);
    *(undefined **)(puVar23 + 0x50) = &UNK_143059fc8;
    *(undefined1 **)(puVar23 + 0x48) = puVar23 + 0x80;
    *(undefined **)(puVar23 + 0x38) = &UNK_14305a1d8;
    *(undefined **)(puVar23 + 0x30) = &UNK_14305a1a0;
    *(undefined8 **)(puVar23 + 0x28) = param_1 + 1;
    *(undefined8 *)(puVar23 + 0x40) = 9;
    *(undefined8 *)(puVar23 + 0x20) = 10;
    *(undefined8 *)(puVar23 + -8) = 0x140b55714;
    puVar15 = (undefined8 *)pdb_140f66f00(puVar9,&UNK_14305a1e1,0x1a,&UNK_14305a184);
    return puVar15;
  case 0x27:
    *(char *)puVar9 = (char)*puVar9 + cVar30;
    (&UNK_14305a34d)[lVar8] = (&UNK_14305a34d)[lVar8] + cVar18;
    puVar9 = (uint *)(ulonglong)
                     CONCAT31((uint3)((ulonglong)puVar9 >> 8) >> 0xb,
                              (char)(uVar7 >> 0xb) + 'A' + ((uVar7 >> 10 & 1) != 0));
    goto code_r0x000140b55a14;
  case 0x28:
    pcVar16 = (char *)((ulonglong)puVar9 & 0xffffffffffffff40);
    *pcVar16 = *pcVar16 + (char)pcVar16;
code_r0x000140b55ae1:
    *(undefined8 *)(puVar27 + 0x20) = 0xc;
    *(undefined8 *)(puVar27 + -8) = 0x140b55b06;
    puVar15 = (undefined8 *)pdb_140f66f00(pcVar16,&UNK_14305a10e,0x10,&UNK_14305a0ea);
    return puVar15;
  case 0x2a:
    puVar29 = &stack0xffffffffffffffa0;
    puVar9 = (uint *)CONCAT71(uVar17,cVar30 + *(char *)(param_1 + -9));
    *(char *)puVar9 = (char)*puVar9 + cVar30 + *(char *)(param_1 + -9);
    goto code_r0x000140b55b44;
  case 0x2b:
    pcVar16 = (char *)((ulonglong)puVar9 & 0xffffffffffffff40);
    *pcVar16 = *pcVar16 + (char)pcVar16;
code_r0x000140b557c2:
    *(undefined8 *)(puVar24 + 0x20) = 0xc;
    *(undefined8 *)(puVar24 + -8) = 0x140b557e7;
    puVar15 = (undefined8 *)pdb_140f66f00(pcVar16,&UNK_14305a0fa,0x14,&UNK_14305a0ea);
    return puVar15;
  case 0x2c:
    *(char *)puVar9 = (char)*puVar9 + cVar30;
code_r0x000140b55b2f:
    *(undefined8 **)(puVar28 + 0x28) = param_1;
    *(undefined8 *)(puVar28 + 0x20) = 10;
    param_2 = &UNK_14305a178;
    puVar29 = puVar28;
    goto code_r0x000140b55b44;
  case 0x2d:
    param_1 = (undefined8 *)CONCAT71(uVar21,cVar18 + (&UNK_14305a34d)[lVar8]);
    puVar9 = (uint *)((ulonglong)puVar9 & 0xffffffffffffff38);
    puVar23 = auStack_58;
    goto code_r0x000140b55695;
  case 0x2e:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (undefined8 *)
              (**(code **)(param_1[1] + 0x18))
                        (*param_1,param_2,param_3,*(code **)(param_1[1] + 0x18));
    return puVar15;
  case 0x2f:
    puVar15 = (undefined8 *)pdb_140f66e50(puVar9,0x4305a023,5,&UNK_14305a01c);
    return puVar15;
  case 0x31:
    if (SCARRY8(lVar8,0x14305a3c4)) {
      puVar9 = (uint *)(ulonglong)((uVar7 & 0xffffff60) + 0x48000000);
    }
code_r0x000140b5589e:
    pcStack_28 = (code *)&UNK_14305a028;
    pbStack_38 = (byte *)0x7;
    pbStack_30 = param_2;
    puVar15 = (undefined8 *)pdb_140f66ff0(puVar9,&UNK_14305a088,4,&UNK_14305a01c);
    return puVar15;
  case 0x32:
    *(char *)puVar9 = (char)*puVar9 + cVar30;
code_r0x000140b5561a:
    puVar15 = (undefined8 *)pdb_140f66090(puVar9,param_2,param_3,ppcVar34);
    return puVar15;
  }
code_r0x000140b4da67:
  *(undefined4 *)param_1 = uVar6;
  return param_1;
code_r0x000140b55a14:
  *(char *)(puVar9 + -0x1dcedfae) = (char)puVar9[-0x1dcedfae] + cVar22;
  *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
  param_5 = param_1 + 1;
  pcStack_28 = (code *)&UNK_143059ff8;
  pbStack_30 = (byte *)&param_5;
  pbStack_38 = (byte *)0x7;
  param_2 = &UNK_14305a124;
code_r0x000140b55b97:
  puVar15 = (undefined8 *)pdb_140f66e50(puVar9,param_2,6,&UNK_14305a01c);
  return puVar15;
}

