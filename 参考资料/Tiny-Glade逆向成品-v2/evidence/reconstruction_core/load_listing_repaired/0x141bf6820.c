// Matched PDB: country_core::systems::save::snapshot::validate_and_load_closest_snapshot_data
// VA 0x141bf6820, PDB extent 13262 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000141bfa6c5) overlaps instruction at (ram,0x000141bfa6c4)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::systems::save::snapshot::validate_and_load_closest_snapshot_data
   Extent: 13262 bytes. No whole-program auto-analysis. */

ulonglong *
pdb_141bf6820(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint *puVar4;
  undefined1 (*pauVar5) [16];
  byte *arg0;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  char cVar12;
  byte bVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  ulonglong *extraout_RAX;
  ulonglong *puVar17;
  undefined8 uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  undefined7 uVar25;
  byte *pbVar23;
  ulonglong *extraout_RAX_00;
  ulonglong *extraout_RAX_01;
  byte bVar26;
  uint uVar27;
  byte bVar32;
  ulonglong uVar28;
  ulonglong *puVar29;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong *puVar30;
  uint *puVar31;
  uint uVar34;
  ulonglong *arg1;
  char cVar35;
  undefined8 *puVar36;
  undefined7 uVar38;
  ulonglong *puVar37;
  ulonglong *puVar39;
  ulonglong *puVar40;
  undefined1 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  ulonglong *puVar44;
  int iVar45;
  uint uVar46;
  byte *pbVar47;
  ulonglong *puVar48;
  ulonglong uVar49;
  ulonglong *puVar50;
  ulonglong uVar51;
  ulonglong *in_R9;
  ulonglong *unaff_R12;
  uint *puVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  ulonglong extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_00;
  ulonglong extraout_XMM0_Qa_01;
  ulonglong extraout_XMM0_Qa_02;
  ulonglong extraout_XMM0_Qa_03;
  ulonglong extraout_XMM0_Qa_04;
  ulonglong extraout_XMM0_Qa_05;
  ulonglong extraout_XMM0_Qb;
  ulonglong extraout_XMM0_Qb_00;
  ulonglong extraout_XMM0_Qb_01;
  ulonglong extraout_XMM0_Qb_02;
  ulonglong extraout_XMM0_Qb_03;
  ulonglong extraout_XMM0_Qb_04;
  ulonglong extraout_XMM0_Qb_05;
  ulonglong extraout_XMM0_Qb_06;
  undefined8 in_XMM1_Qa;
  uint uVar56;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  uint uVar57;
  undefined8 in_XMM2_Qa;
  uint uVar58;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  uint uVar59;
  uint uVar60;
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auStack_618 [128];
  ulonglong auStack_598 [56];
  longlong lStack_3d8;
  undefined8 uStack_3d0;
  longlong lStack_3c8;
  undefined8 uStack_3c0;
  ulonglong *puStack_1f0;
  undefined8 uStack_60;
  char *pcVar24;
  undefined7 uVar33;
  
  uVar60 = (uint)((ulonglong)param_4 >> 0x20);
  uVar59 = (uint)param_4;
  uVar58 = (uint)((ulonglong)in_XMM2_Qa >> 0x20);
  uVar57 = (uint)in_XMM2_Qa;
  uVar56 = (uint)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar46 = (uint)in_XMM1_Qa;
  bVar55 = false;
  puVar44 = (ulonglong *)auStack_618;
  puVar19 = auStack_598;
  uStack_60 = 0xfffffffffffffffe;
  uStack_3d0 = param_3;
  uStack_3c0 = *(undefined8 *)(param_5 + 0x160);
  lStack_3d8 = param_2;
  lStack_3c8 = param_2 + 0x18;
  puStack_1f0 = in_R9;
  do {
    uVar51 = puVar19[0x38];
    uVar61 = *(undefined4 *)(uVar51 + 0x68);
    puVar44[-1] = 0x141bf68cb;
    pdb_140ae4d80(puVar19 + 0x11,uVar51,uVar61);
    if ((byte)puVar19[0x11] == 0) {
      param_1[2] = 2;
      return param_1;
    }
    uVar51 = puVar19[0x12];
    uVar3 = (uint)puVar19[0x13];
    puVar17 = (ulonglong *)(ulonglong)uVar3;
    puVar19[0x6c] = uVar51;
    puVar19[0x98] = (ulonglong)(puVar19 + 0x6c);
    puVar19[0x99] = (ulonglong)pdb_140f72a40;
    puVar19[0x9a] = (ulonglong)&UNK_14304f270;
    puVar19[0x9b] = (ulonglong)pdb_1402ed400;
    puVar44[-1] = 0x141bf693e;
    pdb_140f60760(puVar19 + 0x8c,&UNK_14304f280,puVar19 + 0x98);
    uVar22 = puVar19[0x8d];
    uVar49 = puVar19[0x8e];
    puVar44[4] = (ulonglong)in_R9;
    puVar19[0x97] = uVar22;
    uVar28 = puVar19[0x39];
    puVar44[-1] = 0x141bf696b;
    pdb_141b033a0(puVar19 + 0x55,uVar22,uVar49,uVar28);
    uVar22 = puVar19[0x8c];
    if (uVar22 != 0) {
      pbVar23 = (byte *)puVar19[0x97];
      puVar44[-1] = 0x141bf698a;
      pub_1406abac0(pbVar23,uVar22,1);
    }
    puVar37 = (ulonglong *)puVar19[0x56];
    uVar22 = puVar19[0x57];
    *(uint *)(puVar19 + 0x98) = 0;
    puVar19[0x99] = 0;
    *(uint *)(puVar19 + 0x9a) = 7;
    pbVar23 = (byte *)((longlong)puVar19 + 0x4d9);
    pbVar23[0] = 0;
    pbVar23[1] = 0;
    pbVar23[2] = 0;
    pbVar23[3] = 0;
    pbVar23[4] = 0;
    pbVar23[5] = 0;
    pbVar23[6] = 0;
    pbVar23[7] = 0;
    ((uint *)((longlong)puVar19 + 0x4d4))[0] = 0;
    ((uint *)((longlong)puVar19 + 0x4d4))[1] = 0;
    *(byte *)(puVar19 + 0x9b) = 1;
    *(byte *)((longlong)puVar19 + 0x537) = 1;
    puVar44[-1] = 0x141bf69e8;
    lVar20 = pdb_140f4a2a0(puVar19 + 0x98,puVar37,uVar22);
    if (lVar20 == 1) {
      *(byte *)((longlong)puVar19 + 0x537) = 1;
      puVar44[-1] = 0x141bf69fe;
      puVar21 = (ulonglong *)pdb_142deaf00(puVar37);
      goto LAB_141bf6a85;
    }
    puVar19[0x97] = (ulonglong)puVar37;
    puVar44[-1] = 0x141bf6a1f;
    uVar22 = pdb_140cd10f0(puVar37);
    if ((uVar22 & 1) != 0) {
LAB_141bf6a65:
      uVar22 = puVar19[0x97];
      puVar44[-1] = 0x141bf6a72;
      CloseHandle(uVar22);
      *(byte *)((longlong)puVar19 + 0x537) = 1;
      puVar44[-1] = 0x141bf6a81;
      puVar21 = (ulonglong *)pdb_142deaf00(puVar37);
      goto LAB_141bf6a85;
    }
    *(undefined1 *)(puVar44 + 4) = 0;
    uVar22 = puVar19[0x97];
    puVar44[-1] = 0x141bf6a45;
    pdb_141ab4bb0(puVar19 + 0x98,puVar37,uVar22,0);
    uVar22 = puVar19[0x98];
    puVar37 = (ulonglong *)puVar19[0x99];
    if (uVar22 == 2) {
      in_R9 = (ulonglong *)puVar19[0x75];
      goto LAB_141bf6a65;
    }
    puVar19[0x8e] = puVar19[0x9c];
    puVar19[0x8c] = puVar19[0x9a];
    puVar19[0x8d] = puVar19[0x9b];
    uVar49 = puVar19[0x97];
    puVar44[-1] = 0x141bf6ce5;
    CloseHandle(uVar49);
    puVar19[0x34] = puVar19[0x8e];
    puVar19[0x32] = puVar19[0x8c];
    puVar19[0x33] = puVar19[0x8d];
    puVar19[0x30] = uVar22;
    puVar19[0x31] = (ulonglong)puVar37;
    uVar22 = puVar19[0x32];
    uVar49 = puVar19[0x33];
    puVar44[-1] = 0x141bf6d24;
    uVar22 = pdb_1406d0830(uVar22);
    in_R9 = (ulonglong *)puVar19[0x75];
    puVar19[0x2e] = uVar22;
    puVar19[0x2f] = uVar49;
    puVar44[-1] = 0x141bf6d4d;
    pdb_142565ca0(puVar19 + 0x35,puVar19 + 0x2e);
    puVar44[-1] = 0x141bf6d61;
    pdb_142565b10(puVar19 + 0x98,puVar19 + 0x35);
    if ((uint)puVar19[0x98] != 1) goto LAB_141bf7945;
    uVar22 = puVar19[0x9a];
    if (puVar19[0x99] == 0) {
      puVar44[-1] = 0x141bf6e37;
      puVar21 = (ulonglong *)pdb_142deaf00(uVar22);
      goto code_r0x000141bf6e3b;
    }
    puVar44[-1] = 0x141bf6d92;
    pdb_14164c480(puVar19 + 0x6c);
    bVar26 = (byte)puVar19[0x6c];
    if (bVar26 == 6) {
      uVar22 = puVar19[0x6d];
      puVar19[0x7a] = uVar22;
      *(byte *)((longlong)puVar19 + 0x534) = 1;
      puVar44[-1] = 0x141bf6dc9;
      pdb_140f3f5b0(puVar19 + 0x98);
      uVar46 = (uint)puVar19[0x9a];
      uVar56 = *(uint *)((longlong)puVar19 + 0x4d4);
      in_XMM1_Dc = (uint)puVar19[0x9b];
      in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x4dc);
      uVar57 = (uint)puVar19[0x9c];
      uVar58 = *(uint *)((longlong)puVar19 + 0x4e4);
      in_XMM2_Dc = (uint)puVar19[0x9d];
      in_XMM2_Dd = *(uint *)((longlong)puVar19 + 0x4ec);
      *(uint *)(puVar19 + 0x90) = uVar57;
      *(uint *)((longlong)puVar19 + 0x484) = uVar58;
      *(uint *)(puVar19 + 0x91) = in_XMM2_Dc;
      *(uint *)((longlong)puVar19 + 0x48c) = in_XMM2_Dd;
      *(uint *)(puVar19 + 0x8e) = uVar46;
      *(uint *)((longlong)puVar19 + 0x474) = uVar56;
      *(uint *)(puVar19 + 0x8f) = in_XMM1_Dc;
      *(uint *)((longlong)puVar19 + 0x47c) = in_XMM1_Dd;
      puVar19[0x8c] = puVar19[0x98];
      puVar19[0x8d] = puVar19[0x99];
      puVar19[0x98] = (ulonglong)&UNK_14339b750;
      puVar19[0x99] = 0x1e;
      puVar19[0x9a] = uVar22;
      *(byte *)((longlong)puVar19 + 0x534) = 0;
      puVar44[-1] = 0x141bf6e2c;
      puVar21 = (ulonglong *)pdb_142de9590(puVar19 + 0x98,puVar19 + 0x8c);
      goto code_r0x000141bf6e3b;
    }
    *(uint *)((longlong)puVar19 + 0x404) = *(uint *)((longlong)puVar19 + 0x364);
    *(undefined4 *)((longlong)puVar19 + 0x401) = *(undefined4 *)((longlong)puVar19 + 0x361);
    puVar19[0x82] = puVar19[0x6e];
    puVar19[0x83] = puVar19[0x6f];
    *(uint *)(puVar19 + 0x97) = (uint)bVar26;
    *(byte *)(puVar19 + 0x80) = bVar26;
    puVar19[0x81] = puVar19[0x6d];
    puVar50 = puVar19 + 0x80;
    puVar44[-1] = 0x141bf6ead;
    puVar21 = (ulonglong *)pdb_141c0c220(&UNK_14339b5f8,7);
    if (puVar21 == (ulonglong *)0x0) {
      puVar21 = (ulonglong *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
    }
    arg1 = (ulonglong *)&UNK_14339bdf0;
    uVar28 = (ulonglong)*(int *)(&UNK_14339bdf0 + (ulonglong)(byte)*puVar21 * 4);
    bVar53 = 0xfffffffebcc6420f < uVar28;
    puVar29 = (ulonglong *)(&UNK_14339bdf0 + uVar28);
    bVar13 = (byte)puVar21;
    uVar25 = (undefined7)((ulonglong)puVar21 >> 8);
    cVar12 = (char)puVar29;
    iVar16 = (int)puVar29;
    uVar33 = (undefined7)((ulonglong)puVar29 >> 8);
    bVar32 = (byte)((ulonglong)puVar29 >> 8);
    iVar45 = (int)in_R9;
    cVar35 = (char)puVar37;
    uVar38 = (undefined7)((ulonglong)puVar37 >> 8);
    uVar34 = (uint)puVar19;
    puVar30 = puVar44;
    puVar48 = in_R9;
    uVar22 = extraout_XMM0_Qa;
    uVar49 = extraout_XMM0_Qb;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)*puVar21) {
    case 0:
      *(byte *)(puVar19 + 0x98) = 0;
      break;
    case 1:
    case 2:
      uVar22 = *puVar21;
      uVar49 = puVar21[1];
      uVar46 = (uint)puVar21[2];
      uVar56 = *(uint *)((longlong)puVar21 + 0x14);
      in_XMM1_Dc = (uint)puVar21[3];
      in_XMM1_Dd = *(uint *)((longlong)puVar21 + 0x1c);
      *(uint *)(puVar19 + 0x9a) = uVar46;
      *(uint *)((longlong)puVar19 + 0x4d4) = uVar56;
      *(uint *)(puVar19 + 0x9b) = in_XMM1_Dc;
      *(uint *)((longlong)puVar19 + 0x4dc) = in_XMM1_Dd;
      puVar19[0x98] = uVar22;
      puVar19[0x99] = uVar49;
      break;
    case 3:
      puVar44[-1] = 0x141bf6f22;
      pdb_140f60be0(puVar19 + 0x99,puVar21 + 1);
      *(byte *)(puVar19 + 0x98) = 3;
      break;
    case 4:
      puVar44[-1] = 0x141bf6efc;
      pdb_1415e5d30(puVar19 + 0x99,puVar21 + 1);
      *(byte *)(puVar19 + 0x98) = 4;
      break;
    case 5:
      if (puVar21[3] == 0) {
        puVar19[0x99] = 0;
        puVar19[0x9b] = 0;
      }
      else {
        uVar22 = puVar21[1];
        if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          puVar44[-1] = 0x141bf89e7;
          pdb_142dc8150(&UNK_143359d48);
        }
        uVar49 = puVar21[2];
        puVar44[-1] = 0x141bf6f50;
        pdb_14192d190(puVar19 + 0x99,uVar22,uVar49);
      }
      *(byte *)(puVar19 + 0x98) = 5;
      break;
    case 6:
      puVar29 = (ulonglong *)(ulonglong)(uVar34 + 0x4c8);
      arg1 = puVar21;
      goto code_r0x000141bf711f;
    case 7:
    case 8:
      puVar21 = (ulonglong *)(ulonglong)((int)puVar21 + 0x20b68d4);
      goto code_r0x000141bf7054;
    case 9:
      goto code_r0x000141bf711f;
    case 10:
      goto code_r0x000141bf70fa;
    case 0xb:
      puVar17 = (ulonglong *)(ulonglong)(uVar34 + 0x4c8);
      goto code_r0x000141bf7142;
    case 0xc:
      *(uint *)(puVar19 + 0x9a) = (uint)puVar19[0x9a] - iVar16;
      goto code_r0x000141bf72b9;
    case 0xd:
    case 0xe:
      *(char *)((longlong)puVar21 * 2) = *(char *)((longlong)puVar21 * 2) + bVar13;
      pbVar23 = (byte *)CONCAT71(uVar25,bVar13 + bVar32);
      *puVar50 = (ulonglong)(*puVar50 + (longlong)puVar50);
      goto code_r0x000141bf7284;
    case 0xf:
      goto code_r0x000141bf72bc;
    case 0x10:
      uVar51 = CONCAT71(uVar33,cVar12 + (byte)*in_R9);
      goto code_r0x000141bf729a;
    case 0x11:
      goto code_r0x000141bf72da;
    case 0x12:
      arg1 = (ulonglong *)0x4339be38;
      goto code_r0x000141bf7448;
    case 0x13:
    case 0x14:
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf740b;
    case 0x15:
      uVar46 = iVar45 >> 1;
      in_R9 = (ulonglong *)(ulonglong)uVar46;
      puVar29 = (ulonglong *)(CONCAT71(uVar33,*(byte *)((longlong)puVar21 + 1)) + -1);
      if (puVar29 != (ulonglong *)0x0 && uVar46 == 0) {
        if ((POPCOUNT(uVar46 & 0xff) & 1U) == 0) {
          uVar51 = (ulonglong)*(uint *)(&UNK_14339bdf0 + (longlong)puVar29 * 4);
          goto code_r0x000141bf744c;
        }
        goto code_r0x000141bf7448;
      }
      goto code_r0x000141bf7452;
    case 0x16:
      goto code_r0x000141bf7425;
    case 0x17:
      goto code_r0x000141bf7468;
    case 0x18:
      puVar21 = (ulonglong *)CONCAT71(uVar25,bVar13 + bVar32);
      *(uint *)((longlong)puVar29 + (longlong)puVar21) =
           *(int *)((longlong)puVar29 + (longlong)puVar21) + iVar16 + (uint)CARRY1(bVar13,bVar32);
      goto code_r0x000141bf7610;
    case 0x19:
    case 0x1a:
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf75d4;
    case 0x1b:
      *(byte *)(puVar21 + 0xeb810a9) = (byte)puVar21[0xeb810a9] - 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1c:
      *(byte *)((longlong)puVar21 + -0x77) = *(byte *)((longlong)puVar21 + -0x77) + cVar12;
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf75f0;
    case 0x1d:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(iVar16 + 0x4339bdf0);
      goto code_r0x000141bf762d;
    case 0x1e:
      goto code_r0x000141bf7776;
    case 0x1f:
    case 0x20:
      bVar55 = (*puVar44 & 0x400) != 0;
      pbVar23 = (byte *)((longlong)puVar21 * 2);
      *pbVar23 = *pbVar23 << 1 | (char)*pbVar23 < '\0';
      goto code_r0x000141bf774f;
    case 0x21:
      puVar29 = (ulonglong *)0x4339b670;
      goto code_r0x000141bf7785;
    case 0x22:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x23:
      goto code_r0x000141bf779c;
    case 0x24:
      if (puVar29 < (ulonglong *)0x2) {
        *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      }
      goto code_r0x000141bf78ed;
    case 0x25:
    case 0x26:
      pbVar23 = (byte *)((longlong)puVar17 + 0xf);
      bVar13 = *pbVar23;
      cVar12 = (char)((ulonglong)puVar21 >> 8);
      *pbVar23 = *pbVar23 + cVar12;
      if (*pbVar23 == 0 || SCARRY1(bVar13,cVar12) != (char)*pbVar23 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000141bf7828;
    case 0x27:
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf78f4;
    case 0x28:
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf78ce;
    case 0x29:
      *(byte *)((longlong)puVar19 + 7) = 0;
      puVar21 = (ulonglong *)(ulonglong)_DAT_143cad928;
      goto code_r0x000141bf7919;
    case 0x2a:
      *(uint *)(puVar19 + 0x77) = 0;
      goto code_r0x000141bf79fd;
    case 0x2b:
    case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2d:
      goto code_r0x000141bf79fc;
    case 0x2e:
      goto code_r0x000141bf79d9;
    case 0x2f:
      goto code_r0x000141bf7a19;
    case 0x30:
      puVar19 = (ulonglong *)(ulonglong)((int)puVar21 + 4);
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf7afb;
    case 0x31:
    case 0x32:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x33:
      *(byte *)(puVar21 + 0x117) = (byte)puVar21[0x117] + 1;
      *(byte *)((longlong)puVar21 + -0x77) = *(byte *)((longlong)puVar21 + -0x77) + cVar12;
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf7afb;
    case 0x34:
      goto code_r0x000141bf7ae0;
    case 0x35:
      cVar12 = bVar13 + (byte)*puVar21;
      puVar21 = (ulonglong *)CONCAT71(uVar25,cVar12);
      *(byte *)puVar21 = (byte)*puVar21 + cVar12;
      goto code_r0x000141bf7b27;
    case 0x36:
      goto code_r0x000141bf7c04;
    case 0x37:
    case 0x38:
      *(byte *)((longlong)puVar21 + -0x77) = *(byte *)((longlong)puVar21 + -0x77) + cVar12;
      return puVar21;
    case 0x39:
      goto code_r0x000141bf7c0e;
    case 0x3a:
      goto code_r0x000141bf7be7;
    case 0x3b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      arg1 = (ulonglong *)((longlong)puVar21 + 0x14339be01);
      if (arg1 == (ulonglong *)0x0) {
        return puVar21;
      }
    case 0x43:
      puVar29 = (ulonglong *)((longlong)puVar29 - (longlong)puVar21);
      puVar50 = (ulonglong *)0x10;
      puVar19 = (ulonglong *)puVar44[6];
      puVar44 = puVar44 + 7;
      goto code_r0x0001406abac0;
    case 0x3d:
      uVar51 = *puVar29;
      puVar19[-2] = (ulonglong)puVar29;
      if ((uint)uVar51 != 1) {
        if (((uint)uVar51 != 0) ||
           (arg1 = *(ulonglong **)(puVar19[-2] + 0x10), arg1 == (ulonglong *)0x0))
        goto code_r0x000141bf9cf6;
        goto code_r0x000141bf9cd7;
      }
      puVar44[-1] = (ulonglong)&UNK_141bf9cf5;
      pdb_1404b38e0(&UNK_14339bdf8 + uVar28);
      goto code_r0x000141bf9cf6;
    case 0x41:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      puVar19 = (ulonglong *)(*UNRECOVERED_JUMPTABLE)();
      return puVar19;
    case 0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x50:
    case 0x51:
      goto code_r0x000141bfa4e1;
    case 0x48:
      puVar29 = (ulonglong *)puVar19[-2];
      puVar17 = (ulonglong *)puVar44[7];
      puVar19 = (ulonglong *)puVar44[8];
      puVar44 = puVar44 + 9;
      goto code_r0x0001406abac0;
    case 0x4c:
      *(byte *)((longlong)puVar21 + -0x77) =
           (*(byte *)((longlong)puVar21 + -0x77) - cVar12) - bVar53;
      puVar44 = puVar44 + 1;
      puVar21 = puVar17;
      goto code_r0x000141bfa549;
    case 0x4e:
      puVar37 = (ulonglong *)CONCAT71(uVar33,*(undefined1 *)((longlong)puVar21 * 2 + -0x72b80000));
      puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + (char)puVar50);
      goto code_r0x000141bfa500;
    case 0x4f:
      goto code_r0x000141bfa50c;
    case 0x52:
      goto code_r0x000141bfa6e0;
    case 0x53:
    case 0x54:
      if (puVar29 < (ulonglong *)0x2) goto code_r0x000141bfa6b2;
      goto code_r0x000141bfa6b6;
    case 0x55:
      goto code_r0x000141bfa6e9;
    case 0x56:
      *(byte *)((longlong)puVar21 + -0x77) = *(byte *)((longlong)puVar21 + -0x77) - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar44[-1] = 0x141bf6f83;
    pdb_1414fe290(puVar19 + 0x6c,puVar19 + 0x98);
    if ((uint)puVar19[0x6c] == 1) {
      uVar22 = puVar19[0x6d];
      puVar19[0x7a] = uVar22;
      *(byte *)((longlong)puVar19 + 0x533) = 1;
      puVar44[-1] = 0x141bf6fb5;
      pdb_140f3f5b0(puVar19 + 0x98);
      uVar46 = (uint)puVar19[0x9a];
      uVar56 = *(uint *)((longlong)puVar19 + 0x4d4);
      in_XMM1_Dc = (uint)puVar19[0x9b];
      in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x4dc);
      uVar57 = (uint)puVar19[0x9c];
      uVar58 = *(uint *)((longlong)puVar19 + 0x4e4);
      in_XMM2_Dc = (uint)puVar19[0x9d];
      in_XMM2_Dd = *(uint *)((longlong)puVar19 + 0x4ec);
      *(uint *)(puVar19 + 0x90) = uVar57;
      *(uint *)((longlong)puVar19 + 0x484) = uVar58;
      *(uint *)(puVar19 + 0x91) = in_XMM2_Dc;
      *(uint *)((longlong)puVar19 + 0x48c) = in_XMM2_Dd;
      *(uint *)(puVar19 + 0x8e) = uVar46;
      *(uint *)((longlong)puVar19 + 0x474) = uVar56;
      *(uint *)(puVar19 + 0x8f) = in_XMM1_Dc;
      *(uint *)((longlong)puVar19 + 0x47c) = in_XMM1_Dd;
      puVar19[0x8c] = puVar19[0x98];
      puVar19[0x8d] = puVar19[0x99];
      puVar19[0x98] = (ulonglong)&UNK_14339b76e;
      puVar19[0x99] = 0xf;
      puVar19[0x9a] = uVar22;
      *(byte *)((longlong)puVar19 + 0x533) = 0;
      puVar44[-1] = 0x141bf7018;
      puVar21 = (ulonglong *)pdb_142de9590(puVar19 + 0x98,puVar19 + 0x8c);
code_r0x000141bf70fa:
      uVar3 = (uint)puVar19[0x97];
      goto joined_r0x000141bf7106;
    }
    *(uint *)((longlong)puVar19 + 0x2cc) = *(uint *)((longlong)puVar19 + 0x364);
    if (*(uint *)((longlong)puVar19 + 0x364) != 2) {
      puVar19[0x98] = (ulonglong)&UNK_14339b648;
      puVar19[0x99] = (ulonglong)pdb_140f71c50;
      puVar19[0x9a] = (ulonglong)((longlong)puVar19 + 0x2cc);
      puVar19[0x9b] = (ulonglong)pdb_140f71c50;
      puVar44[-1] = 0x141bf70ce;
      pdb_140f60760(puVar19 + 0x8c,&UNK_14339b8a1,puVar19 + 0x98);
      puVar19[0x98] = puVar19[0x8c];
      puVar19[0x99] = puVar19[0x8d];
      puVar19[0x9a] = puVar19[0x8e];
      puVar44[-1] = 0x141bf70f9;
      puVar21 = (ulonglong *)pdb_142de92b0(puVar19 + 0x98);
      goto code_r0x000141bf70fa;
    }
    puVar50 = puVar19 + 0x80;
    puVar44[-1] = 0x141bf7047;
    puVar21 = (ulonglong *)pdb_141c0c220(&UNK_14339b64c,5);
    uVar22 = extraout_XMM0_Qa_00;
    uVar49 = extraout_XMM0_Qb_00;
    if (puVar21 == (ulonglong *)0x0) {
      puVar21 = (ulonglong *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
    }
code_r0x000141bf7054:
    arg1 = (ulonglong *)&UNK_14339be08;
    puVar29 = (ulonglong *)
              (&UNK_14339be08 + *(int *)(&UNK_14339be08 + (ulonglong)(byte)*puVar21 * 4));
    bVar13 = (byte)puVar21;
    uVar15 = (uint)puVar21;
    uVar25 = (undefined7)((ulonglong)puVar21 >> 8);
    bVar32 = (byte)puVar29;
    cVar12 = (char)((ulonglong)puVar29 >> 8);
    uVar27 = (uint)puVar29;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)*puVar21) {
    case 0:
      *(byte *)(puVar19 + 0x98) = 0;
      break;
    case 1:
    case 2:
      uVar22 = *puVar21;
      uVar49 = puVar21[1];
      uVar28 = puVar21[3];
      puVar19[0x9a] = puVar21[2];
      puVar19[0x9b] = uVar28;
      puVar19[0x98] = uVar22;
      puVar19[0x99] = uVar49;
      break;
    case 3:
      puVar21 = puVar21 + 1;
      puVar17 = puVar19 + 0x99;
code_r0x000141bf7142:
      puVar44[-1] = 0x141bf714a;
      pdb_140f60be0(puVar17,puVar21);
      *(byte *)(puVar19 + 0x98) = 3;
      break;
    case 4:
      arg1 = puVar21 + 1;
      puVar29 = puVar19 + 0x99;
code_r0x000141bf711f:
      puVar44[-1] = 0x141bf7124;
      pdb_1415e5d30(puVar29,arg1);
      *(byte *)(puVar19 + 0x98) = 4;
      break;
    case 5:
      if (puVar21[3] == 0) {
        puVar19[0x99] = 0;
        puVar19[0x9b] = 0;
      }
      else {
        uVar22 = puVar21[1];
        if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          puVar44[-1] = 0x141bf89f6;
          pdb_142dc8150(&UNK_143359d48);
        }
        uVar49 = puVar21[2];
        puVar44[-1] = 0x141bf7178;
        pdb_14192d190(puVar19 + 0x99,uVar22,uVar49);
      }
      *(byte *)(puVar19 + 0x98) = 5;
      break;
    case 6:
code_r0x000141bf72bc:
      LOCK();
      uVar22 = *puVar21;
      *(uint *)puVar21 = (uint)puVar21;
      pcVar24 = (char *)CONCAT44((int)((ulonglong)puVar21 >> 0x20),(uint)uVar22);
      UNLOCK();
      *pcVar24 = *pcVar24 + (char)(uint)uVar22;
      arg1 = (ulonglong *)(pcVar24 + 8);
      puVar29 = puVar19 + 0x99;
    case 9:
      puVar44[-1] = 0x141bf72d9;
      pdb_1415e5d30(puVar29,arg1);
code_r0x000141bf72da:
      *(byte *)(puVar19 + 0x98) = 4;
      goto code_r0x000141bf734d;
    case 7:
    case 8:
      pbVar23 = (byte *)(ulonglong)(uVar15 + 0x20b6691);
      goto code_r0x000141bf7297;
    case 10:
      uVar28 = puVar21[3];
      puVar19[0x9a] = puVar21[2];
      puVar19[0x9b] = uVar28;
code_r0x000141bf72b9:
      puVar19[0x98] = uVar22;
      puVar19[0x99] = uVar49;
      goto code_r0x000141bf734d;
    case 0xb:
      puVar44[-1] = 0x141bf72ff;
      pdb_140f60be0(uVar34 + 0x4c8,puVar21);
      *(byte *)(puVar19 + 0x98) = 3;
code_r0x000141bf734d:
      puVar44[-1] = 0x141bf7360;
      pdb_1414fe8b0(puVar19 + 0x6c,puVar19 + 0x98);
      puVar37 = (ulonglong *)puVar19[0x6d];
      if (!SBORROW8(0,puVar19[0x6c])) {
        puVar19[0x65] = puVar19[0x6c];
code_r0x000141bf740b:
        puVar19[0x5a] = (ulonglong)puVar37;
        arg1 = (ulonglong *)0xa;
        puVar29 = (ulonglong *)&UNK_14339b656;
code_r0x000141bf7425:
        puVar44[-1] = 0x141bf7431;
        puVar21 = (ulonglong *)pdb_141c0c220(puVar29,arg1,puVar19 + 0x80);
        if (puVar21 == (ulonglong *)0x0) {
          puVar21 = (ulonglong *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
        }
code_r0x000141bf743e:
        puVar29 = (ulonglong *)(ulonglong)(byte)*puVar21;
        arg1 = (ulonglong *)&UNK_14339be38;
code_r0x000141bf7448:
        uVar51 = (ulonglong)(int)*(uint *)((longlong)arg1 + (longlong)puVar29 * 4);
code_r0x000141bf744c:
                    /* WARNING: Could not recover jumptable at 0x000141bf744f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar19 = (ulonglong *)
                  (*(code *)(uVar51 + (longlong)arg1))((code *)(uVar51 + (longlong)arg1));
        return puVar19;
      }
      puVar19[0x7a] = (ulonglong)puVar37;
      *(byte *)((longlong)puVar19 + 0x531) = 1;
      puVar44[-1] = 0x141bf7398;
      pdb_140f3f5b0(puVar19 + 0x98);
      uVar46 = (uint)puVar19[0x9a];
      uVar56 = *(uint *)((longlong)puVar19 + 0x4d4);
      in_XMM1_Dc = (uint)puVar19[0x9b];
      in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x4dc);
      uVar57 = (uint)puVar19[0x9c];
      uVar58 = *(uint *)((longlong)puVar19 + 0x4e4);
      in_XMM2_Dc = (uint)puVar19[0x9d];
      in_XMM2_Dd = *(uint *)((longlong)puVar19 + 0x4ec);
      *(uint *)(puVar19 + 0x90) = uVar57;
      *(uint *)((longlong)puVar19 + 0x484) = uVar58;
      *(uint *)(puVar19 + 0x91) = in_XMM2_Dc;
      *(uint *)((longlong)puVar19 + 0x48c) = in_XMM2_Dd;
      *(uint *)(puVar19 + 0x8e) = uVar46;
      *(uint *)((longlong)puVar19 + 0x474) = uVar56;
      *(uint *)(puVar19 + 0x8f) = in_XMM1_Dc;
      *(uint *)((longlong)puVar19 + 0x47c) = in_XMM1_Dd;
      puVar19[0x8c] = puVar19[0x98];
      puVar19[0x8d] = puVar19[0x99];
      puVar19[0x98] = (ulonglong)&UNK_14339b78a;
      puVar19[0x99] = 0xd;
      puVar19[0x9a] = (ulonglong)puVar37;
      *(byte *)((longlong)puVar19 + 0x531) = 0;
      puVar44[-1] = 0x141bf73fb;
      puVar21 = (ulonglong *)pdb_142de9590(puVar19 + 0x98,puVar19 + 0x8c);
code_r0x000141bf86b8:
      unaff_R12 = (ulonglong *)puVar19[0x50];
      uVar22 = puVar19[0x51];
      if (uVar22 != 0) {
        puVar17 = unaff_R12 + 5;
        do {
          uVar49 = puVar17[-4];
          if (uVar49 != 0) {
            pbVar23 = (byte *)puVar17[-3];
            *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8705;
            pub_1406abac0(pbVar23,uVar49 << 3,4);
          }
          uVar49 = puVar17[-1];
          if (uVar49 != 0) {
            pbVar23 = (byte *)*puVar17;
            *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8720;
            pub_1406abac0(pbVar23,uVar49 << 2,4);
          }
          puVar17 = puVar17 + 0xf;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      uVar22 = puVar19[0x4f];
      if (uVar22 != 0) {
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8740;
        pub_1406abac0((byte *)unaff_R12,uVar22 * 0x78,8);
      }
      goto code_r0x000141bf8740;
    case 0xc:
      *(uint *)(puVar19 + 0x9a) = (uint)puVar19[0x9a] - uVar27;
code_r0x000141bf7452:
      uVar28 = puVar21[3];
      puVar19[0x9a] = puVar21[2];
      puVar19[0x9b] = uVar28;
      puVar19[0x98] = uVar22;
      puVar19[0x99] = uVar49;
code_r0x000141bf7468:
      goto code_r0x000141bf74f4;
    case 0xd:
    case 0xe:
      _UNK_14339be82 = _UNK_14339be82 ^ uVar15;
      pbVar23 = (byte *)((longlong)puVar19 + (longlong)puVar29 * 4 + -0x7b);
      *(uint *)pbVar23 = *(int *)pbVar23 + uVar27;
      *(char *)((longlong)puVar21 * 2) = *(char *)((longlong)puVar21 * 2) + bVar13;
      out(0xbe08,(int)CONCAT71(uVar25,bVar13 + cVar12));
      *puVar50 = (ulonglong)(*puVar50 + (longlong)puVar50);
      goto code_r0x000141bf7425;
    case 0xf:
      LOCK();
      uVar22 = *puVar21;
      *(uint *)puVar21 = uVar15;
      pcVar24 = (char *)CONCAT44((int)((ulonglong)puVar21 >> 0x20),(uint)uVar22);
      UNLOCK();
      *pcVar24 = *pcVar24 + (char)(uint)uVar22;
      puVar44[-1] = 0x141bf7480;
      pdb_1415e5d30(puVar19 + 0x99,pcVar24 + 8);
    case 0x11:
      *(byte *)(puVar19 + 0x98) = 4;
code_r0x000141bf74f4:
      puVar44[4] = (ulonglong)&UNK_1430764c0;
      puVar44[5] = 1;
      puVar44[-1] = 0x141bf7529;
      pdb_141500d80(puVar19 + 0x6c,puVar19 + 0x98,&UNK_1430764a0,0x18);
      puVar21 = (ulonglong *)puVar19[0x6c];
      unaff_R12 = (ulonglong *)puVar19[0x6d];
      if (!SBORROW8(0,(longlong)puVar21)) {
        puVar29 = (ulonglong *)puVar19[0x6e];
code_r0x000141bf75d4:
        puVar19[0x4c] = (ulonglong)puVar21;
        puVar19[0x96] = (ulonglong)unaff_R12;
        puVar19[0x4d] = (ulonglong)unaff_R12;
code_r0x000141bf75e9:
        puVar19[0x8b] = (ulonglong)puVar29;
code_r0x000141bf75f0:
        puVar19[0x4e] = (ulonglong)puVar29;
        arg1 = (ulonglong *)0xa;
        puVar29 = (ulonglong *)&UNK_14339b666;
code_r0x000141bf760a:
        puVar44[-1] = 0x141bf760f;
        puVar21 = (ulonglong *)pdb_141c0c220(puVar29,arg1);
code_r0x000141bf7610:
        if (puVar21 == (ulonglong *)0x0) {
          puVar21 = (ulonglong *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
        }
code_r0x000141bf761c:
        puVar29 = (ulonglong *)(ulonglong)(byte)*puVar21;
        arg1 = (ulonglong *)&UNK_14339be50;
code_r0x000141bf7626:
        UNRECOVERED_JUMPTABLE =
             (code *)((longlong)(int)*(uint *)((longlong)arg1 + (longlong)puVar29 * 4) +
                     (longlong)arg1);
code_r0x000141bf762d:
                    /* WARNING: Could not recover jumptable at 0x000141bf762d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar19 = (ulonglong *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
        return puVar19;
      }
      puVar19[0x7a] = (ulonglong)unaff_R12;
      *(byte *)(puVar19 + 0xa6) = 1;
      puVar44[-1] = 0x141bf7561;
      pdb_140f3f5b0(puVar19 + 0x98);
      uVar46 = (uint)puVar19[0x9a];
      uVar56 = *(uint *)((longlong)puVar19 + 0x4d4);
      in_XMM1_Dc = (uint)puVar19[0x9b];
      in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x4dc);
      uVar57 = (uint)puVar19[0x9c];
      uVar58 = *(uint *)((longlong)puVar19 + 0x4e4);
      in_XMM2_Dc = (uint)puVar19[0x9d];
      in_XMM2_Dd = *(uint *)((longlong)puVar19 + 0x4ec);
      *(uint *)(puVar19 + 0x90) = uVar57;
      *(uint *)((longlong)puVar19 + 0x484) = uVar58;
      *(uint *)(puVar19 + 0x91) = in_XMM2_Dc;
      *(uint *)((longlong)puVar19 + 0x48c) = in_XMM2_Dd;
      *(uint *)(puVar19 + 0x8e) = uVar46;
      *(uint *)((longlong)puVar19 + 0x474) = uVar56;
      *(uint *)(puVar19 + 0x8f) = in_XMM1_Dc;
      *(uint *)((longlong)puVar19 + 0x47c) = in_XMM1_Dd;
      puVar19[0x8c] = puVar19[0x98];
      puVar19[0x8d] = puVar19[0x99];
      puVar19[0x98] = (ulonglong)&UNK_14339b797;
      puVar19[0x99] = 0x12;
      puVar19[0x9a] = (ulonglong)unaff_R12;
      *(byte *)(puVar19 + 0xa6) = 0;
      puVar44[-1] = 0x141bf75c4;
      puVar21 = (ulonglong *)pdb_142de9590(puVar19 + 0x98,puVar19 + 0x8c);
      goto code_r0x000141bf868f;
    case 0x10:
      goto code_r0x000141bf743e;
    case 0x12:
      goto code_r0x000141bf761c;
    case 0x13:
    case 0x14:
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf75e9;
    case 0x15:
      goto code_r0x000141bf7626;
    case 0x16:
      goto code_r0x000141bf760a;
    case 0x17:
      puVar17 = (ulonglong *)*puVar44;
      *puVar44 = 0x141bf765b;
      pdb_1415e5d30(puVar19 + 0x99,puVar21 + 1);
      *(byte *)(puVar19 + 0x98) = 4;
      *puVar44 = 0x141bf76b9;
      pdb_1414fe710(puVar19 + 0x6c,puVar19 + 0x98);
      puVar19[0x3c] = CONCAT71(uVar38,cVar35 + cVar12);
      uVar22 = puVar19[0x6d];
      if (!SBORROW8(0,puVar19[0x6c])) {
        puVar19[0x66] = puVar19[0x6c];
        puVar19[0x5b] = uVar22;
        puVar37 = (ulonglong *)puVar19[0x6e];
code_r0x000141bf7779:
        puVar30 = puVar44 + 1;
        arg1 = (ulonglong *)0xa;
        goto code_r0x000141bf7776;
      }
      puVar19[0x7a] = uVar22;
      *(byte *)((longlong)puVar19 + 0x52f) = 1;
      puVar17 = puVar19 + 0x98;
      *puVar44 = 0x141bf76f8;
      pdb_140f3f5b0(puVar17);
      uVar46 = (uint)puVar19[0x9a];
      uVar56 = *(uint *)((longlong)puVar19 + 0x4d4);
      in_XMM1_Dc = (uint)puVar19[0x9b];
      in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x4dc);
      uVar57 = (uint)puVar19[0x9c];
      uVar58 = *(uint *)((longlong)puVar19 + 0x4e4);
      in_XMM2_Dc = (uint)puVar19[0x9d];
      in_XMM2_Dd = *(uint *)((longlong)puVar19 + 0x4ec);
      *(uint *)(puVar19 + 0x90) = uVar57;
      *(uint *)((longlong)puVar19 + 0x484) = uVar58;
      *(uint *)(puVar19 + 0x91) = in_XMM2_Dc;
      *(uint *)((longlong)puVar19 + 0x48c) = in_XMM2_Dd;
      *(uint *)(puVar19 + 0x8e) = uVar46;
      *(uint *)((longlong)puVar19 + 0x474) = uVar56;
      *(uint *)(puVar19 + 0x8f) = in_XMM1_Dc;
      *(uint *)((longlong)puVar19 + 0x47c) = in_XMM1_Dd;
      puVar19[0x8c] = puVar19[0x98];
      puVar19[0x8d] = puVar19[0x99];
      puVar19[0x98] = (ulonglong)&UNK_14339b7a9;
      puVar19[0x99] = 0x12;
      puVar19[0x9a] = uVar22;
      *(byte *)((longlong)puVar19 + 0x52f) = 0;
code_r0x000141bf774f:
      *puVar44 = 0x141bf775b;
      puVar21 = (ulonglong *)pdb_142de9590(puVar17,puVar19 + 0x8c);
      puVar44 = puVar44 + 1;
      goto code_r0x000141bf8619;
    case 0x18:
      *puVar21 = (ulonglong)(*puVar21 + (longlong)puVar21);
      goto code_r0x000141bf7785;
    case 0x19:
    case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1b:
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf7785;
    case 0x1c:
      *(byte *)((longlong)puVar21 + -0x75) = *(byte *)((longlong)puVar21 + -0x75) + bVar32;
      puVar30 = puVar44 + 1;
      bVar55 = (*puVar44 & 0x400) != 0;
      if ((*puVar44 & 0x800) == 0) {
        *(byte *)puVar21 = (byte)*puVar21 + bVar13;
        goto code_r0x000141bf7779;
      }
      bVar13 = bVar13 | (byte)*puVar21;
      pcVar24 = (char *)CONCAT71(uVar25,bVar13);
      *pcVar24 = *pcVar24 + bVar13;
code_r0x000141bf7776:
      *(byte *)((longlong)arg1 + 10) =
           *(byte *)((longlong)arg1 + 10) + (char)((ulonglong)puVar37 >> 8);
      puVar29 = (ulonglong *)&UNK_14339b670;
      puVar44 = puVar30;
code_r0x000141bf7785:
      puVar50 = puVar19 + 0x80;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7791;
      puVar21 = (ulonglong *)pdb_141c0c220(puVar29);
      unaff_R12 = puVar19 + 0x98;
      puVar29 = puVar21;
      uVar22 = extraout_XMM0_Qa_01;
      uVar49 = extraout_XMM0_Qb_01;
code_r0x000141bf779c:
      if (puVar29 == (ulonglong *)0x0) {
        puVar21 = (ulonglong *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
      }
code_r0x000141bf77a5:
      arg1 = (ulonglong *)&UNK_14339be68;
      uVar28 = (ulonglong)*(int *)(&UNK_14339be68 + (ulonglong)(byte)*puVar21 * 4);
      bVar54 = 0xfffffffebcc64197 < uVar28;
      puVar29 = (ulonglong *)(&UNK_14339be68 + uVar28);
      bVar53 = puVar29 == (ulonglong *)0x0;
      cVar12 = (char)puVar21;
      uVar25 = (undefined7)((ulonglong)puVar21 >> 8);
      cVar35 = (char)((ulonglong)puVar29 >> 8);
      iVar16 = (int)puVar29;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((byte)*puVar21) {
      case 0:
        *(byte *)(puVar19 + 0x98) = 0;
        break;
      case 1:
      case 2:
        uVar22 = *puVar21;
        uVar49 = puVar21[1];
        uVar46 = (uint)puVar21[2];
        uVar56 = *(uint *)((longlong)puVar21 + 0x14);
        in_XMM1_Dc = (uint)puVar21[3];
        in_XMM1_Dd = *(uint *)((longlong)puVar21 + 0x1c);
        *(uint *)(puVar19 + 0x9a) = uVar46;
        *(uint *)((longlong)puVar19 + 0x4d4) = uVar56;
        *(uint *)(puVar19 + 0x9b) = in_XMM1_Dc;
        *(uint *)((longlong)puVar19 + 0x4dc) = in_XMM1_Dd;
        puVar19[0x98] = uVar22;
        puVar19[0x99] = uVar49;
        break;
      case 3:
        puVar44[-1] = 0x141bf780a;
        pdb_140f60be0(puVar19 + 0x99,puVar21 + 1);
        *(byte *)(puVar19 + 0x98) = 3;
        break;
      case 4:
        puVar44[-1] = 0x141bf77e4;
        pdb_1415e5d30(puVar19 + 0x99,puVar21 + 1);
        *(byte *)(puVar19 + 0x98) = 4;
        break;
      case 5:
        puVar44[-1] = 0x141bf7827;
        pdb_14192dab0(puVar19 + 0x99,puVar21 + 1);
code_r0x000141bf7828:
        *(byte *)(puVar19 + 0x98) = 5;
        break;
      case 6:
        goto code_r0x000141bf795c;
      case 7:
      case 8:
        puVar21 = (ulonglong *)(ulonglong)((int)puVar21 + 0x20b600f);
        goto code_r0x000141bf7919;
      case 9:
        goto code_r0x000141bf796a;
      case 10:
        if (!bVar53) goto code_r0x000141bf7900;
        cVar12 = (cVar12 - (byte)*puVar21) - bVar54;
        pcVar24 = (char *)CONCAT71(uVar25,cVar12);
        *pcVar24 = *pcVar24 + cVar12;
LAB_141bf7945:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7956;
        puVar21 = (ulonglong *)pdb_142de9270(&UNK_14339b9b1,0x1a);
        goto code_r0x000141bf6e3b;
      case 0xb:
        goto code_r0x000141bf7982;
      case 0xc:
        *(byte *)in_R9 = (byte)*in_R9 + (char)puVar29 + bVar54;
        *(uint *)(puVar19 + 0x9a) = (uint)puVar19[0x9a] - iVar16;
        goto code_r0x000141bf7a74;
      case 0xd:
      case 0xe:
        puVar44[-1] = (ulonglong)puVar29;
        pbVar23 = (byte *)((longlong)puVar19 + (longlong)puVar29 * 4 + -0x7b);
        *(int *)pbVar23 = *(int *)pbVar23 + iVar16;
        *(char *)((longlong)puVar21 * 2) = *(char *)((longlong)puVar21 * 2) + cVar12;
        pcVar24 = (char *)(CONCAT71(uVar25,cVar12 + cVar35) + 0x75c08548);
        *pcVar24 = *pcVar24 + 'h';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xf:
        goto code_r0x000141bf7a74;
      case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x11:
        goto code_r0x000141bf7a92;
      case 0x12:
        goto code_r0x000141bf7b74;
      case 0x13:
      case 0x14:
        *(byte *)puVar21 = (byte)*puVar21 + cVar12;
        goto code_r0x000141bf7b41;
      case 0x15:
        goto code_r0x000141bf7b7e;
      case 0x16:
        goto code_r0x000141bf7b4f;
      case 0x17:
        puVar37 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar37 >> 8),(char)puVar37 + cVar35);
        puVar17 = (ulonglong *)*puVar44;
        puVar44 = puVar44 + 1;
        goto code_r0x000141bf7ba0;
      case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x19:
      case 0x1a:
        *(uint *)(puVar19 + 0x54) = 0;
        puVar50 = in_R9;
        goto code_r0x000141bf7c21;
      case 0x1b:
        *(byte *)(puVar21 + 0xeb810a9) = (byte)puVar21[0xeb810a9] + 0x68;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x1c:
        *(byte *)((longlong)puVar21 + -0x75) = *(byte *)((longlong)puVar21 + -0x75) + (char)puVar29;
        *(byte *)puVar21 = (byte)*puVar21 + cVar12;
        goto code_r0x000141bf7c52;
      case 0x1d:
        puVar30 = (ulonglong *)(ulonglong)(iVar16 + 0x4339be68);
        goto code_r0x000141bf7c9d;
      default:
code_r0x000141bf9d0a:
        goto code_r0x0001406abac0;
      case 0x1f:
        *(byte *)(puVar21 + 0x4189069) = (byte)puVar21[0x4189069] + 1;
        return puVar21;
      case 0x23:
        pbVar23 = (byte *)((longlong)puVar21 + -0x77);
        *pbVar23 = (*pbVar23 - bVar26) - bVar54;
        puVar30 = (ulonglong *)(&UNK_14339be67 + uVar28);
        if (puVar30 == (ulonglong *)0x0 || *pbVar23 == 0) {
          *(uint *)(puVar19 + -2) = 0;
          goto code_r0x000141bf9db1;
        }
        arg1 = (ulonglong *)0xce6f9a0;
        goto code_r0x000141bf9dfd;
      case 0x25:
code_r0x000141bf9d13:
        *(ulonglong **)((longlong)puVar44 + -8) = puVar19;
        puVar44 = (ulonglong *)((longlong)puVar44 + -0x28);
        puVar19 = arg1 + 6;
        arg1 = (ulonglong *)0x28;
        puVar50 = (ulonglong *)0x8;
        goto code_r0x000141bf9d29;
      case 0x26:
        *(uint *)((longlong)puVar21 + 1) = *(uint *)((longlong)puVar21 + 1) | 0x48e0ffc8;
        return puVar21;
      case 0x29:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2f:
      case 0x32:
      case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x2a:
        uVar51 = (ulonglong)puVar21 & 0xffffffff | 0x4339be6800000000;
        UNRECOVERED_JUMPTABLE =
             *(code **)(((longlong)uVar51 / (longlong)iVar45 & 0xffffffffU) + 0x20c48348);
        puVar44[-1] = 0x141bfa49e;
        puVar19 = (ulonglong *)
                  (*UNRECOVERED_JUMPTABLE)(puVar29,(longlong)uVar51 % (longlong)iVar45 & 0xffffffff)
        ;
        return puVar19;
      case 0x2e:
        *(byte *)(puVar19 + 8) = (byte)puVar19[8] - cVar12;
        goto code_r0x000141bfa5bf;
      case 0x30:
        goto code_r0x000141bfa560;
      case 0x31:
        goto code_r0x000141bfa583;
      case 0x34:
        goto code_r0x000141bfa758;
      case 0x35:
      case 0x36:
code_r0x000141bfa728:
        if (!bVar53) {
          uVar51 = puVar19[0xe];
          *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa73c;
          puVar19 = (ulonglong *)pdb_141bf9d40(uVar51);
          return puVar19;
        }
        return puVar21;
      case 0x37:
        if (!bVar53) {
          halt_baddata();
        }
        goto code_r0x000141bfa763;
      case 0x38:
        return puVar21;
      case 0x39:
        goto code_r0x000141bfa77d;
      }
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf783e;
      pdb_1414fe710(puVar19 + 0x6c,unaff_R12);
      puVar19[0x3d] = (ulonglong)puVar37;
      puVar37 = (ulonglong *)puVar19[0x6d];
      puVar19[0x67] = puVar19[0x6c];
      if (SBORROW8(0,puVar19[0x6c])) {
        puVar19[0x7a] = (ulonglong)puVar37;
        *(byte *)((longlong)puVar19 + 0x52e) = 1;
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf787a;
        pdb_140f3f5b0(unaff_R12);
        uVar46 = (uint)puVar19[0x9a];
        uVar56 = *(uint *)((longlong)puVar19 + 0x4d4);
        in_XMM1_Dc = (uint)puVar19[0x9b];
        in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x4dc);
        uVar57 = (uint)puVar19[0x9c];
        uVar58 = *(uint *)((longlong)puVar19 + 0x4e4);
        in_XMM2_Dc = (uint)puVar19[0x9d];
        in_XMM2_Dd = *(uint *)((longlong)puVar19 + 0x4ec);
        *(uint *)(puVar19 + 0x90) = uVar57;
        *(uint *)((longlong)puVar19 + 0x484) = uVar58;
        *(uint *)(puVar19 + 0x91) = in_XMM2_Dc;
        *(uint *)((longlong)puVar19 + 0x48c) = in_XMM2_Dd;
        *(uint *)(puVar19 + 0x8e) = uVar46;
        *(uint *)((longlong)puVar19 + 0x474) = uVar56;
        *(uint *)(puVar19 + 0x8f) = in_XMM1_Dc;
        *(uint *)((longlong)puVar19 + 0x47c) = in_XMM1_Dd;
        puVar19[0x8c] = puVar19[0x98];
        puVar19[0x8d] = puVar19[0x99];
        puVar19[0x98] = (ulonglong)&UNK_14339b7bb;
        puVar19[0x99] = 0x12;
        puVar19[0x9a] = (ulonglong)puVar37;
        *(byte *)((longlong)puVar19 + 0x52e) = 0;
code_r0x000141bf78ce:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf78dd;
        puVar21 = (ulonglong *)pdb_142de9590(unaff_R12,puVar19 + 0x8c);
        goto code_r0x000141bf85f0;
      }
code_r0x000141bf78e6:
      puVar19[0x5c] = (ulonglong)puVar37;
code_r0x000141bf78ed:
      puVar37 = (ulonglong *)puVar19[0x6e];
code_r0x000141bf78f4:
      arg1 = (ulonglong *)0x10;
      puVar29 = (ulonglong *)&UNK_14339b67a;
code_r0x000141bf7900:
      puVar50 = puVar19 + 0x80;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf790c;
      puVar21 = (ulonglong *)pdb_141c0c220(puVar29,arg1);
      uVar22 = extraout_XMM0_Qa_02;
      uVar49 = extraout_XMM0_Qb_02;
      if (puVar21 == (ulonglong *)0x0) {
        puVar21 = (ulonglong *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
      }
code_r0x000141bf7919:
      arg1 = (ulonglong *)&UNK_14339be80;
      puVar29 = (ulonglong *)(longlong)*(int *)(&UNK_14339be80 + (ulonglong)(byte)*puVar21 * 4);
code_r0x000141bf7927:
      bVar54 = CARRY8((ulonglong)puVar29,(ulonglong)arg1);
      puVar30 = (ulonglong *)((longlong)puVar29 + (longlong)arg1);
      bVar13 = (byte)puVar21;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(puVar30) {
      case (ulonglong *)0x141bf792c:
        uVar22 = *puVar21;
        uVar49 = puVar21[1];
        uVar46 = (uint)puVar21[2];
        uVar56 = *(uint *)((longlong)puVar21 + 0x14);
        in_XMM1_Dc = (uint)puVar21[3];
        in_XMM1_Dd = *(uint *)((longlong)puVar21 + 0x1c);
        *(uint *)(puVar19 + 0x9a) = uVar46;
        *(uint *)((longlong)puVar19 + 0x4d4) = uVar56;
        *(uint *)(puVar19 + 0x9b) = in_XMM1_Dc;
        *(uint *)((longlong)puVar19 + 0x4dc) = in_XMM1_Dd;
        puVar19[0x98] = uVar22;
        puVar19[0x99] = uVar49;
        break;
      case (ulonglong *)0x141bf795c:
code_r0x000141bf795c:
        arg1 = puVar21 + 1;
        puVar29 = puVar19 + 0x99;
code_r0x000141bf796a:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf796f;
        pdb_1415e5d30(puVar29,arg1);
        *(byte *)(puVar19 + 0x98) = 4;
        break;
      case (ulonglong *)0x141bf7979:
        *(byte *)(puVar19 + 0x98) = 0;
        break;
      case (ulonglong *)0x141bf7982:
code_r0x000141bf7982:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7995;
        pdb_140f60be0(puVar19 + 0x99,puVar21 + 1);
        *(byte *)(puVar19 + 0x98) = 3;
        break;
      case (ulonglong *)0x141bf799f:
        puVar44[-1] = 0x141bf79b2;
        pdb_14192dab0(puVar19 + 0x99,puVar21 + 1);
        *(byte *)(puVar19 + 0x98) = 5;
        break;
      case (ulonglong *)0x141bf7a4d:
        puVar21 = (ulonglong *)(ulonglong)((int)puVar21 + 0x20b5ed6);
        goto code_r0x000141bf7a52;
      case (ulonglong *)0x141bf7a66:
        goto code_r0x000141bf7a65;
      case (ulonglong *)0x141bf7a83:
        goto code_r0x000141bf7a7e;
      case (ulonglong *)0x141bf7a8c:
        goto code_r0x000141bf7a8c;
      case (ulonglong *)0x141bf7aa9:
        goto code_r0x000141bf7aa4;
      case (ulonglong *)0x141bf7b57:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (ulonglong *)0x141bf7b70:
        puVar21 = (ulonglong *)
                  (ulonglong)
                  ((uint)CONCAT62((int6)((ulonglong)puVar21 >> 0x10),CONCAT11(0x5d,bVar13)) |
                  (uint)*arg1);
        goto code_r0x000141bf7b74;
      case (ulonglong *)0x141bf7b8d:
        *(byte *)in_R9 = (byte)*in_R9 + (char)puVar30 + bVar54;
        *(uint *)(puVar19 + 0x9a) = (uint)puVar19[0x9a] - (int)puVar30;
      case (ulonglong *)0x141bf7b96:
        goto code_r0x000141bf7b96;
      case (ulonglong *)0x141bf7bb4:
        goto code_r0x000141bf7bb4;
      case (ulonglong *)0x141bf7c5e:
        *(byte *)puVar21 = (byte)*puVar21 + bVar13;
        goto code_r0x000141bf7c52;
      case (ulonglong *)0x141bf7c77:
        goto code_r0x000141bf7c6e;
      case (ulonglong *)0x141bf7c94:
        goto code_r0x000141bf7c93;
      case (ulonglong *)0x141bf7c9d:
        goto code_r0x000141bf7c9d;
      case (ulonglong *)0x141bf7cba:
        puVar21 = (ulonglong *)(ulonglong)((int)puVar21 + (uint)*puVar21);
        puVar37 = (ulonglong *)
                  CONCAT71((int7)((ulonglong)puVar37 >> 8),
                           (char)puVar37 + (char)((ulonglong)puVar30 >> 8));
        puVar17 = (ulonglong *)*puVar44;
        puVar44 = puVar44 + 1;
        goto code_r0x000141bf7cbf;
      case (ulonglong *)0x141bf9d22:
        *(byte *)(puVar30 + -9) = (byte)puVar30[-9] + bVar13;
        *(byte *)puVar21 = (byte)*puVar21 | bVar13;
        *(byte *)puVar21 = (byte)*puVar21 + bVar13;
code_r0x000141bf9d29:
        pbVar23 = (byte *)puVar19[-2];
        *(undefined **)((longlong)puVar44 + -8) = &UNK_141bf9d32;
        pub_1406abac0(pbVar23,(ulonglong)arg1,(ulonglong)puVar50);
        return extraout_RAX_00;
      case (ulonglong *)0x141bf9d2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (ulonglong *)0x141bf9d49:
        puVar48 = puVar30;
        goto code_r0x000141bf9d43;
      case (ulonglong *)0x141bf9d94:
        in((short)arg1);
        goto code_r0x000141bf9d95;
      case (ulonglong *)0x141bf9dcb:
        *(byte *)puVar21 = (byte)*puVar21 + bVar13;
        *(byte *)puVar21 = (byte)*puVar21 + bVar13;
        *(byte *)((longlong)puVar21 + -0x75) = *(byte *)((longlong)puVar21 + -0x75) + (char)puVar30;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (ulonglong *)0x141bfa4ae:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        puVar19 = (ulonglong *)(*UNRECOVERED_JUMPTABLE)();
        return puVar19;
      case (ulonglong *)0x141bfa571:
        goto code_r0x000141bfa571;
      case (ulonglong *)0x141bfa57d:
        *(byte *)(puVar21 + -0x280ced7) = (byte)puVar21[-0x280ced7] + 1;
code_r0x000141bfa583:
        *(byte *)(arg1 + 8) = (byte)arg1[8] + (char)puVar21 + bVar54;
        goto code_r0x000141bfa584;
      case (ulonglong *)0x141bfa59b:
        goto code_r0x000141bfa59b;
      case (ulonglong *)0x141bfa5d4:
        *(uint *)(puVar19 + -6) = (uint)puVar19[-6] - (int)puVar37;
        goto code_r0x000141bfa5cb;
      case (ulonglong *)0x141bfa740:
        puVar44[2] = (ulonglong)arg1;
        puVar44[-1] = (ulonglong)puVar19;
        puVar44[-2] = (ulonglong)puVar17;
        puVar44[-3] = (ulonglong)in_R9;
        puVar44[-4] = (ulonglong)puVar37;
        puVar44 = puVar44 + -9;
        puVar19 = arg1 + 0x10;
      case (ulonglong *)0x141bfa754:
        in_R9 = (ulonglong *)puVar19[0xb];
        goto code_r0x000141bfa758;
      case (ulonglong *)0x141bfa770:
        goto code_r0x000141bfa770;
      case (ulonglong *)0x141bfa779:
code_r0x000141bfa770:
        while( true ) {
          *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa775;
          puVar21 = (ulonglong *)pdb_140986eb0(puVar30);
          puVar37 = (ulonglong *)((longlong)puVar37 + 1);
          if (puVar37 == in_R9) break;
code_r0x000141bfa765:
          puVar30 = puVar17 + (longlong)puVar37 * 10;
        }
code_r0x000141bfa77d:
code_r0x000141bfa784:
        return puVar21;
      case (ulonglong *)0x141bfa795:
        goto code_r0x000141bfa795;
      }
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf79c9;
      pdb_1414fe710(puVar19 + 0x8c,unaff_R12);
      puVar29 = (ulonglong *)puVar19[0x8c];
      bVar53 = SBORROW8(0,(longlong)puVar29);
code_r0x000141bf79d7:
      if (bVar53) {
code_r0x000141bf79d9:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf79e5;
        pdb_1404b4b10(puVar19 + 0x8d);
        puVar19[0x68] = 8;
        puVar19[0x77] = 0;
code_r0x000141bf79fd:
        puVar19[0x52] = 0;
      }
      else {
        puVar19[0x77] = (ulonglong)puVar29;
code_r0x000141bf7a11:
        uVar22 = puVar19[0x8d];
code_r0x000141bf7a18:
        puVar19[0x68] = uVar22;
code_r0x000141bf7a1f:
        puVar19[0x52] = puVar19[0x8e];
      }
      arg1 = (ulonglong *)0x10;
      puVar29 = (ulonglong *)&UNK_14339b68a;
code_r0x000141bf7a39:
      puVar50 = puVar19 + 0x80;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7a45;
      puVar21 = (ulonglong *)pdb_141c0c220(puVar29,arg1);
      uVar22 = extraout_XMM0_Qa_03;
      uVar49 = extraout_XMM0_Qb_03;
      if (puVar21 == (ulonglong *)0x0) {
        puVar21 = (ulonglong *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
      }
code_r0x000141bf7a52:
      arg1 = (ulonglong *)&UNK_14339be98;
      uVar28 = (ulonglong)*(int *)(&UNK_14339be98 + (ulonglong)(byte)*puVar21 * 4);
      puVar30 = (ulonglong *)(&UNK_14339be98 + uVar28);
      bVar13 = (byte)puVar30;
      puVar48 = puVar30;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((byte)*puVar21) {
      case 0:
        *(byte *)(puVar19 + 0x98) = 0;
        arg1 = unaff_R12;
        break;
      case 1:
      case 2:
code_r0x000141bf7a65:
        uVar22 = *puVar21;
        uVar49 = puVar21[1];
        uVar46 = (uint)puVar21[2];
        uVar56 = *(uint *)((longlong)puVar21 + 0x14);
        in_XMM1_Dc = (uint)puVar21[3];
        in_XMM1_Dd = *(uint *)((longlong)puVar21 + 0x1c);
        *(uint *)(puVar19 + 0x9a) = uVar46;
        *(uint *)((longlong)puVar19 + 0x4d4) = uVar56;
        *(uint *)(puVar19 + 0x9b) = in_XMM1_Dc;
        *(uint *)((longlong)puVar19 + 0x4dc) = in_XMM1_Dd;
code_r0x000141bf7a74:
        puVar19[0x98] = uVar22;
        puVar19[0x99] = uVar49;
        arg1 = unaff_R12;
        break;
      case 3:
code_r0x000141bf7aa4:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7ab7;
        pdb_140f60be0(puVar19 + 0x99,puVar21 + 1);
        *(byte *)(puVar19 + 0x98) = 3;
        arg1 = unaff_R12;
        break;
      case 4:
code_r0x000141bf7a7e:
        arg1 = puVar21 + 1;
        puVar30 = puVar19 + 0x99;
code_r0x000141bf7a8c:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7a91;
        pdb_1415e5d30(puVar30,arg1);
code_r0x000141bf7a92:
        *(byte *)(puVar19 + 0x98) = 4;
        arg1 = unaff_R12;
        break;
      case 5:
        puVar44[-1] = 0x141bf7ad4;
        pdb_14192dab0(puVar19 + 0x99,puVar21 + 1);
        *(byte *)(puVar19 + 0x98) = 5;
        arg1 = unaff_R12;
        break;
      case 6:
        goto code_r0x000141bf7ba0;
      case 7:
      case 8:
        puVar21 = (ulonglong *)(ulonglong)((int)puVar21 + 0x20b5db4);
        goto code_r0x000141bf7b74;
      case 9:
        goto code_r0x000141bf7bae;
      case 10:
        goto code_r0x000141bf7b87;
      case 0xb:
        puVar50 = (ulonglong *)(ulonglong)(uVar34 + 0x4c8);
        goto code_r0x000141bf7bd1;
      case 0xc:
        *(byte *)in_R9 = (byte)*in_R9 + bVar13 + (0xfffffffebcc64167 < uVar28);
        *(uint *)(puVar19 + 0x7c) = (uint)puVar19[0x7c] - (int)puVar30;
        goto code_r0x000141bf7cb5;
      case 0xd:
      case 0xe:
        goto code_r0x000141bf7c6e;
      case 0xf:
        goto code_r0x000141bf7cb5;
      case 0x10:
        puVar19 = (ulonglong *)((ulonglong)puVar21 & 0xffffffff);
        puVar44 = (ulonglong *)*puVar44;
        puVar21 = (ulonglong *)(ulonglong)(uVar34 | _UNK_14339be98);
        goto code_r0x000141bf7c93;
      case 0x11:
        goto code_r0x000141bf7cd3;
      default:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        puVar19 = (ulonglong *)(*UNRECOVERED_JUMPTABLE)();
        return puVar19;
      case 0x13:
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        *(byte *)((longlong)puVar21 + 0xf) = *(byte *)((longlong)puVar21 + 0xf) + bVar13;
        puVar4 = (uint *)((longlong)puVar50 + -0x7d);
        *puVar4 = *puVar4 >> 0x18 | *puVar4 << 8;
        goto code_r0x000141bf9d6b;
      case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x19:
code_r0x000141bf9d43:
        *(ulonglong **)((longlong)puVar44 + -8) = puVar37;
        puVar41 = (undefined1 *)((longlong)puVar44 + -0x50);
        *(undefined8 *)((longlong)puVar44 + -0x10) = 0xfffffffffffffffe;
        puVar30 = (ulonglong *)*puVar48;
        goto code_r0x000141bf9d5b;
      case 0x1a:
        pbVar23 = (byte *)((longlong)puVar21 + -0x77);
        *pbVar23 = *pbVar23 + bVar13 + (0xfffffffebcc64167 < uVar28);
        if (*pbVar23 == 0) {
code_r0x000141bf9db1:
          puVar19[-4] = puVar17[3];
          puVar19[-2] = 0;
          puVar19[-1] = (ulonglong)puVar30;
          goto code_r0x000141bf9dd0;
        }
        goto code_r0x000140d7dc90;
      case 0x1d:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x23:
      case 0x26:
      case 0x27:
        *(uint *)(puVar19 + 8) = (uint)puVar19[8] - (int)puVar21;
        goto code_r0x000141bfa584;
      case 0x1e:
        *(byte *)puVar21 = (byte)*puVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x22:
        *(uint *)(puVar19 + -1) = (uint)puVar17;
        goto code_r0x000141bfa5e3;
      case 0x24:
        puVar42 = puVar44 + -1;
        puVar44 = puVar44 + -1;
        *puVar42 = &UNK_14339be98;
        *(byte *)in_R9 = (byte)*in_R9 & bVar13;
        UNK_14339bec8 = UNK_14339bec8 + (char)puVar37;
        goto code_r0x000141bfa59b;
      case 0x25:
        goto code_r0x000141bfa5af;
      case 0x28:
        goto code_r0x000141bfa788;
      case 0x29:
      case 0x2a:
code_r0x000141bfa758:
        puVar37 = (ulonglong *)puVar19[0xc];
        bVar53 = in_R9 == puVar37;
        puVar17 = (ulonglong *)puVar19[0xd];
code_r0x000141bfa763:
        if (!bVar53) goto code_r0x000141bfa765;
        goto code_r0x000141bfa77d;
      case 0x2b:
        *(undefined4 *)(puVar44 + 2) = 0x4339be98;
        goto code_r0x000141bfa795;
      case 0x2c:
        puVar30 = (ulonglong *)(ulonglong)((int)puVar30 + (uint)puVar17);
        goto code_r0x000141bfa770;
      case 0x2d:
        goto code_r0x000141bfa7ac;
      }
      puVar29 = puVar19 + 0x8c;
      unaff_R12 = arg1;
code_r0x000141bf7ae0:
      pcVar24 = (char *)((longlong)puVar29 * 5 + -0x1e);
      *pcVar24 = *pcVar24 + (char)puVar29;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7aeb;
      pdb_1414fe710(puVar29,arg1);
      if (SBORROW8(0,puVar19[0x8c])) {
code_r0x000141bf7afb:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7b07;
        pdb_1404b4b10(puVar19 + 0x8d);
        puVar19[0x69] = 8;
        puVar19[0x78] = 0;
code_r0x000141bf7b1f:
        puVar19[0x53] = 0;
      }
      else {
        puVar19[0x78] = puVar19[0x8c];
        puVar19[0x69] = puVar19[0x8d];
code_r0x000141bf7b41:
        puVar19[0x53] = puVar19[0x8e];
      }
code_r0x000141bf7b4f:
      puVar50 = puVar19 + 0x80;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7b67;
      puVar21 = (ulonglong *)pdb_141c0c220(&UNK_14339b69a,0x15);
      uVar22 = extraout_XMM0_Qa_04;
      uVar49 = extraout_XMM0_Qb_04;
      if (puVar21 == (ulonglong *)0x0) {
        puVar21 = (ulonglong *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
      }
code_r0x000141bf7b74:
      puVar29 = (ulonglong *)(ulonglong)(byte)*puVar21;
      arg1 = (ulonglong *)&UNK_14339beb0;
code_r0x000141bf7b7e:
      puVar30 = (ulonglong *)
                ((longlong)(int)*(uint *)((longlong)arg1 + (longlong)puVar29 * 4) + (longlong)arg1);
      puVar41 = (undefined1 *)puVar44;
      puVar48 = puVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(puVar30) {
      case (ulonglong *)0x141bf7b87:
code_r0x000141bf7b87:
        uVar22 = *puVar21;
        uVar49 = puVar21[1];
        uVar46 = (uint)puVar21[2];
        uVar56 = *(uint *)((longlong)puVar21 + 0x14);
        in_XMM1_Dc = (uint)puVar21[3];
        in_XMM1_Dd = *(uint *)((longlong)puVar21 + 0x1c);
        *(uint *)(puVar19 + 0x9a) = uVar46;
        *(uint *)((longlong)puVar19 + 0x4d4) = uVar56;
        *(uint *)(puVar19 + 0x9b) = in_XMM1_Dc;
        *(uint *)((longlong)puVar19 + 0x4dc) = in_XMM1_Dd;
code_r0x000141bf7b96:
        puVar19[0x98] = uVar22;
        puVar19[0x99] = uVar49;
        break;
      case (ulonglong *)0x141bf7ba0:
code_r0x000141bf7ba0:
        arg1 = puVar21 + 1;
        puVar30 = puVar19 + 0x99;
code_r0x000141bf7bae:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7bb3;
        pdb_1415e5d30(puVar30,arg1);
code_r0x000141bf7bb4:
        *(byte *)(puVar19 + 0x98) = 4;
        break;
      case (ulonglong *)0x141bf7bbd:
        *(byte *)(puVar19 + 0x98) = 0;
        break;
      case (ulonglong *)0x141bf7bc6:
        puVar21 = puVar21 + 1;
        puVar50 = puVar19 + 0x99;
code_r0x000141bf7bd1:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7bd9;
        pdb_140f60be0(puVar50,puVar21);
        *(byte *)(puVar19 + 0x98) = 3;
        break;
      case (ulonglong *)0x141bf7be3:
        puVar21 = puVar21 + 1;
code_r0x000141bf7be7:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7bf6;
        pdb_14192dab0(puVar19 + 0x99,puVar21);
        *(byte *)(puVar19 + 0x98) = 5;
        break;
      case (ulonglong *)0x141bf7c8e:
        puVar21 = (ulonglong *)(ulonglong)((int)puVar21 + 0x20b5c95);
        goto code_r0x000141bf7c93;
      case (ulonglong *)0x141bf7ca7:
        goto code_r0x000141bf7ca6;
      case (ulonglong *)0x141bf7cc4:
        goto code_r0x000141bf7cbf;
      case (ulonglong *)0x141bf7ccd:
        goto code_r0x000141bf7ccd;
      case (ulonglong *)0x141bf7cea:
        goto code_r0x000141bf7ce5;
      case (ulonglong *)0x141bf9d52:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (ulonglong *)0x141bf9d5b:
code_r0x000141bf9d5b:
        puVar21 = (ulonglong *)0x6;
        if ((ulonglong *)0x1 < puVar30) {
          puVar21 = (ulonglong *)((longlong)puVar30 + -2);
        }
        if (puVar21 < (ulonglong *)0xb) {
          puVar30 = (ulonglong *)&UNK_14339bee0;
          goto code_r0x000141bf9d79;
        }
        puVar19 = (ulonglong *)puVar48[1];
        LOCK();
        *puVar19 = *puVar19 - 1;
        UNLOCK();
        if (*puVar19 != 0) {
          return puVar19;
        }
        *(undefined8 *)(puVar41 + 0x60) = *(undefined8 *)(puVar41 + 0x60);
        *(undefined8 *)(puVar41 + 0x58) = *(undefined8 *)(puVar41 + 0x58);
        *(undefined8 *)(puVar41 + 0x50) = *(undefined8 *)(puVar41 + 0x50);
        *(undefined8 *)(puVar41 + 0x48) = 0xfffffffffffffffe;
        puVar29 = (ulonglong *)puVar48[1];
        puVar36 = (undefined8 *)puVar48[2];
        *(ulonglong **)(puVar41 + 0x30) = puVar29;
        *(undefined8 **)(puVar41 + 0x38) = puVar36;
        *(ulonglong **)(puVar41 + 0x40) = puVar48 + 3;
        UNRECOVERED_JUMPTABLE = (code *)*puVar36;
        puVar19 = (ulonglong *)0x0;
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          lVar20 = puVar36[2];
          *(undefined **)(puVar41 + 8) = &UNK_140c7a287;
          puVar19 = (ulonglong *)
                    (*UNRECOVERED_JUMPTABLE)
                              ((byte *)((longlong)puVar29 +
                                       (lVar20 - 1U & 0xfffffffffffffff0) + 0x10));
        }
        if (puVar29 != (ulonglong *)0xffffffffffffffff) {
          LOCK();
          puVar44 = puVar29 + 1;
          *puVar44 = *puVar44 - 1;
          UNLOCK();
          if (*puVar44 == 0) {
            puVar50 = (ulonglong *)0x8;
            if ((ulonglong *)0x8 < (ulonglong *)puVar36[2]) {
              puVar50 = (ulonglong *)puVar36[2];
            }
            puVar19 = (ulonglong *)((longlong)puVar50 + puVar36[1] + 0xf);
            arg1 = (ulonglong *)(-(longlong)puVar50 & (ulonglong)puVar19);
            if (arg1 != (ulonglong *)0x0) {
              puVar17 = *(ulonglong **)(puVar41 + 0x58);
              puVar19 = *(ulonglong **)(puVar41 + 0x60);
              puVar44 = (ulonglong *)(puVar41 + 0x68);
              goto code_r0x0001406abac0;
            }
          }
        }
        return puVar19;
      case (ulonglong *)0x141bf9d79:
        goto code_r0x000141bf9d79;
      case (ulonglong *)0x141bf9dc4:
        goto code_r0x000141bf9dd0;
      case (ulonglong *)0x141bf9dfb:
        if (puVar30 != (ulonglong *)0x0) {
code_r0x000141bf9dfd:
          pbVar23 = (byte *)puVar17[4];
          *(undefined **)((longlong)puVar44 + -8) = &UNK_141bf9e10;
          pub_1406abac0(pbVar23,(longlong)arg1 << 2,4);
        }
        if (puVar17[6] == 0) {
          return (ulonglong *)0x0;
        }
        puVar29 = (ulonglong *)puVar17[7];
        arg1 = (ulonglong *)(puVar17[6] * 0x14);
        puVar50 = (ulonglong *)0x4;
        goto code_r0x000141bf9e8d;
      case (ulonglong *)0x141bfa4de:
        ((byte *)((longlong)in_R9 + -0xd))[(longlong)arg1] =
             ((byte *)((longlong)in_R9 + -0xd))[(longlong)arg1] + (char)((ulonglong)arg1 >> 8);
code_r0x000141bfa4e1:
        if ((*(float *)(puVar17 + 5) != 0.0) || (NAN(*(float *)(puVar17 + 5)))) {
code_r0x000141bfa584:
          uVar51 = arg1[9];
          puVar19[8] = arg1[8];
          puVar19[9] = uVar51;
          uVar22 = *arg1;
          uVar49 = arg1[1];
          uVar46 = (uint)arg1[2];
          uVar56 = *(uint *)((longlong)arg1 + 0x14);
          in_XMM1_Dc = (uint)arg1[3];
          in_XMM1_Dd = *(uint *)((longlong)arg1 + 0x1c);
          uVar57 = (uint)arg1[4];
          uVar58 = *(uint *)((longlong)arg1 + 0x24);
          in_XMM2_Dc = (uint)arg1[5];
          in_XMM2_Dd = *(uint *)((longlong)arg1 + 0x2c);
          uVar59 = (uint)arg1[6];
          uVar60 = *(uint *)((longlong)arg1 + 0x34);
          in_XMM3_Dc = (uint)arg1[7];
          in_XMM3_Dd = *(uint *)((longlong)arg1 + 0x3c);
          goto code_r0x000141bfa59b;
        }
        goto code_r0x000141bfa4f8;
      case (ulonglong *)0x141bfa5a1:
        puVar43 = (undefined8 *)((longlong)puVar44 + -8);
        puVar44 = (ulonglong *)((longlong)puVar44 + -8);
        *puVar43 = puVar19;
        *(byte *)in_R9 = (byte)*in_R9 & (byte)puVar30;
        *(uint *)(puVar19 + 2) = (uint)puVar19[2] - (int)puVar30;
code_r0x000141bfa59b:
        *(uint *)(puVar19 + 6) = uVar59;
        *(uint *)((longlong)puVar19 + 0x34) = uVar60;
        *(uint *)(puVar19 + 7) = in_XMM3_Dc;
        *(uint *)((longlong)puVar19 + 0x3c) = in_XMM3_Dd;
        *(uint *)(puVar19 + 4) = uVar57;
        *(uint *)((longlong)puVar19 + 0x24) = uVar58;
        *(uint *)(puVar19 + 5) = in_XMM2_Dc;
        *(uint *)((longlong)puVar19 + 0x2c) = in_XMM2_Dd;
        *(uint *)(puVar19 + 2) = uVar46;
        *(uint *)((longlong)puVar19 + 0x14) = uVar56;
        *(uint *)(puVar19 + 3) = in_XMM1_Dc;
        *(uint *)((longlong)puVar19 + 0x1c) = in_XMM1_Dd;
        *puVar19 = uVar22;
        puVar19[1] = uVar49;
        *(byte *)((longlong)puVar19 + 0x7e) = 1;
        goto code_r0x000141bfa5af;
      case (ulonglong *)0x141bfa5ad:
code_r0x000141bfa5af:
        *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa5ba;
        pdb_140d24750(puVar17,puVar19);
        uVar22 = puVar19[8];
        uVar49 = puVar19[9];
        goto code_r0x000141bfa5bf;
      case (ulonglong *)0x141bfa5cb:
        goto code_r0x000141bfa5cb;
      case (ulonglong *)0x141bfa604:
        goto code_r0x000141bfa604;
      case (ulonglong *)0x141bfa770:
        goto code_r0x000141bfa770;
      case (ulonglong *)0x141bfa784:
        goto code_r0x000141bfa784;
      case (ulonglong *)0x141bfa7a0:
        goto code_r0x000141bfa7a0;
      case (ulonglong *)0x141bfa7a9:
        goto code_r0x000141bfa7a9;
      case (ulonglong *)0x141bfa7c5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar29 = puVar19 + 0x8c;
      arg1 = unaff_R12;
code_r0x000141bf7c08:
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7c0d;
      pdb_1414fe710(puVar29,arg1);
code_r0x000141bf7c0e:
      puVar21 = (ulonglong *)puVar19[0x8c];
      puVar19[0x76] = (ulonglong)puVar21;
code_r0x000141bf7c1c:
      puVar50 = in_R9;
      if (SBORROW8(0,(longlong)puVar21)) {
code_r0x000141bf7c21:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7c2d;
        pdb_1404b4b10(puVar19 + 0x8d);
        puVar19[0x6a] = 8;
        puVar19[0x76] = 0;
        puVar19[0x54] = 0;
        in_R9 = puVar50;
      }
      else {
code_r0x000141bf7c52:
        puVar19[0x6a] = puVar19[0x8d];
        puVar19[0x54] = puVar19[0x8e];
      }
code_r0x000141bf7c6e:
      puVar50 = puVar19 + 0x80;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7c86;
      puVar21 = (ulonglong *)pdb_141c0c220(&UNK_14339b6af,7);
      uVar22 = extraout_XMM0_Qa_05;
      uVar49 = extraout_XMM0_Qb_05;
      if (puVar21 == (ulonglong *)0x0) {
        puVar21 = (ulonglong *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
      }
code_r0x000141bf7c93:
      puVar30 = (ulonglong *)(ulonglong)(byte)*puVar21;
      arg1 = (ulonglong *)&UNK_14339bec8;
code_r0x000141bf7c9d:
      puVar30 = (ulonglong *)
                ((longlong)(int)*(uint *)((longlong)arg1 + (longlong)puVar30 * 4) + (longlong)arg1);
      bVar13 = (byte)puVar21;
      bVar32 = (byte)puVar30;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(puVar30) {
      case (ulonglong *)0x141bf7ca6:
code_r0x000141bf7ca6:
        uVar22 = *puVar21;
        uVar49 = puVar21[1];
        uVar46 = (uint)puVar21[2];
        uVar56 = *(uint *)((longlong)puVar21 + 0x14);
        in_XMM1_Dc = (uint)puVar21[3];
        in_XMM1_Dd = *(uint *)((longlong)puVar21 + 0x1c);
        *(uint *)(puVar19 + 0x7c) = uVar46;
        *(uint *)((longlong)puVar19 + 0x3e4) = uVar56;
        *(uint *)(puVar19 + 0x7d) = in_XMM1_Dc;
        *(uint *)((longlong)puVar19 + 0x3ec) = in_XMM1_Dd;
code_r0x000141bf7cb5:
        puVar19[0x7a] = uVar22;
        puVar19[0x7b] = uVar49;
        break;
      case (ulonglong *)0x141bf7cbf:
code_r0x000141bf7cbf:
        arg1 = puVar21 + 1;
        puVar30 = puVar19 + 0x7b;
code_r0x000141bf7ccd:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7cd2;
        pdb_1415e5d30(puVar30,arg1);
code_r0x000141bf7cd3:
        *(byte *)(puVar19 + 0x7a) = 4;
        break;
      case (ulonglong *)0x141bf7cdc:
        *(byte *)(puVar19 + 0x7a) = 0;
        break;
      case (ulonglong *)0x141bf7ce5:
code_r0x000141bf7ce5:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7cf8;
        pdb_140f60be0(puVar19 + 0x7b,puVar21 + 1);
        *(byte *)(puVar19 + 0x7a) = 3;
        break;
      case (ulonglong *)0x141bf7d02:
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7d15;
        pdb_14192dab0(puVar19 + 0x7b,puVar21 + 1);
        *(byte *)(puVar19 + 0x7a) = 5;
        break;
      case (ulonglong *)0x141bf9d6a:
code_r0x000141bf9d6b:
        bVar26 = (byte)puVar30 | (byte)*in_R9;
        puVar30 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar30 >> 8),bVar26);
        arg1 = (ulonglong *)((ulonglong)puVar17 & 0xffffffff);
        *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
        *(byte *)((longlong)puVar21 + -0x73) = *(byte *)((longlong)puVar21 + -0x73) + bVar26;
        puVar21 = (ulonglong *)(ulonglong)((uint)puVar21 | 0x17a2167);
        goto code_r0x000141bf9d79;
      case (ulonglong *)0x141bf9d73:
        puVar30 = (ulonglong *)0x4339bee0;
code_r0x000141bf9d79:
                    /* WARNING: Could not recover jumptable at 0x000141bf9d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar19 = (ulonglong *)
                  (*(code *)((longlong)(int)*(uint *)((longlong)puVar30 + (longlong)puVar21 * 4) +
                            (longlong)puVar30))(puVar30,arg1);
        return puVar19;
      case (ulonglong *)0x141bf9d91:
        *(uint *)puVar21 = (uint)*puVar21 - 1;
        if ((uint)*puVar21 != 0) {
          return puVar21;
        }
code_r0x000141bf9d95:
        puVar17 = puVar17 + 1;
code_r0x000140d7dc90:
        puVar19 = *(ulonglong **)((longlong)puVar44 + 0x60);
        *(undefined8 *)((longlong)puVar44 + 0x60) = *(undefined8 *)((longlong)puVar44 + 0x58);
        *(undefined8 *)((longlong)puVar44 + 0x58) = *(undefined8 *)((longlong)puVar44 + 0x50);
        *(undefined8 *)((longlong)puVar44 + 0x50) = *(undefined8 *)((longlong)puVar44 + 0x48);
        puVar29 = (ulonglong *)*puVar17;
        plVar6 = (longlong *)puVar29[5];
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          *(undefined **)((longlong)puVar44 + 0x28) = &UNK_140d7dcad;
          pdb_140d7dbd0(puVar29 + 5);
        }
        uVar51 = puVar29[4];
        if (uVar51 != 0) {
          puVar36 = (undefined8 *)(puVar29[3] + 0x68);
          do {
            lVar20 = puVar36[-1];
            if (lVar20 != 0) {
              pbVar23 = (byte *)*puVar36;
              *(undefined **)((longlong)puVar44 + 0x28) = &UNK_140d7dce7;
              pub_1406abac0(pbVar23,lVar20 * 0x34,4);
            }
            lVar20 = puVar36[-0xb];
            if (lVar20 != 0) {
              pbVar23 = (byte *)puVar36[-10];
              *(undefined **)((longlong)puVar44 + 0x28) = &UNK_140d7dd03;
              pub_1406abac0(pbVar23,lVar20 << 2,4);
            }
            lVar20 = puVar36[-8];
            if (lVar20 != 0) {
              pbVar23 = (byte *)puVar36[-7];
              *(undefined **)((longlong)puVar44 + 0x28) = &UNK_140d7dd23;
              pub_1406abac0(pbVar23,lVar20 * 0x14,4);
            }
            puVar36 = puVar36 + 0x12;
            uVar51 = uVar51 - 1;
          } while (uVar51 != 0);
        }
        uVar51 = puVar29[2];
        puVar17 = (ulonglong *)0x0;
        if (uVar51 != 0) {
          pbVar23 = (byte *)puVar29[3];
          *(undefined **)((longlong)puVar44 + 0x28) = &UNK_140d7dd45;
          pub_1406abac0(pbVar23,uVar51 * 0x90,8);
          puVar17 = extraout_RAX;
        }
        if (puVar29 != (ulonglong *)0xffffffffffffffff) {
          LOCK();
          puVar37 = puVar29 + 1;
          *puVar37 = *puVar37 - 1;
          UNLOCK();
          if (*puVar37 == 0) {
            arg1 = (ulonglong *)0x68;
            puVar50 = (ulonglong *)0x8;
            puVar17 = *(ulonglong **)((longlong)puVar44 + 0x60);
            puVar44 = (ulonglong *)((longlong)puVar44 + 0x68);
            goto code_r0x0001406abac0;
          }
        }
        return puVar17;
      case (ulonglong *)0x141bf9ddc:
        *(byte *)puVar21 = (byte)*puVar21 + bVar13;
        puVar17 = puVar30;
        do {
          puVar19[-2] = (ulonglong)((longlong)puVar21 + 1);
          puVar30 = puVar17 + 10;
          *(undefined **)((longlong)puVar44 + -8) = &UNK_141bf9dee;
          pdb_140986eb0(puVar17);
code_r0x000141bf9dd0:
          puVar21 = (ulonglong *)puVar19[-2];
          puVar17 = puVar30;
        } while ((ulonglong *)puVar19[-4] != puVar21);
        if (*(longlong *)(puVar19[-3] + 8) == 0) {
          return (ulonglong *)0x0;
        }
        arg1 = (ulonglong *)(*(longlong *)(puVar19[-3] + 8) * 0x50);
        puVar50 = (ulonglong *)0x8;
        puVar29 = (ulonglong *)puVar19[-1];
code_r0x000141bf9e8d:
        puVar17 = *(ulonglong **)((longlong)puVar44 + 0x58);
        puVar19 = *(ulonglong **)((longlong)puVar44 + 0x60);
        puVar44 = (ulonglong *)((longlong)puVar44 + 0x68);
code_r0x0001406abac0:
        *(ulonglong **)((longlong)puVar44 + -8) = puVar19;
        *(ulonglong **)((longlong)puVar44 + -0x10) = puVar17;
        puVar19 = puVar29;
        if ((ulonglong *)0x10 < puVar50) {
          puVar19 = (ulonglong *)puVar29[-1];
        }
        *(undefined **)((longlong)puVar44 + -0x40) = &UNK_140f3c37e;
        uVar18 = GetProcessHeap(puVar29,arg1);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar19 = (ulonglong *)HeapFree(uVar18,0,puVar19);
        return puVar19;
      case (ulonglong *)0x141bf9e13:
        *(byte *)((longlong)puVar21 + -0x7b) = *(byte *)((longlong)puVar21 + -0x7b) ^ bVar32;
        *(byte *)in_R9 = (byte)*in_R9 >> 4 | (byte)*in_R9 << 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (ulonglong *)0x141bfa4f6:
        *(byte *)puVar21 = (byte)*puVar21 + bVar13;
code_r0x000141bfa4f8:
        puVar37 = puVar17 + 2;
code_r0x000141bfa4fc:
        *(byte *)((longlong)puVar19 + 0x7f) = 1;
code_r0x000141bfa500:
        *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa50b;
        puVar21 = (ulonglong *)pdb_140913d60(puVar37,puVar17,puVar17);
code_r0x000141bfa50c:
        in_R9 = (ulonglong *)puVar19[0xe];
        uVar51 = 6;
        if (1 < *in_R9) {
          uVar51 = *in_R9 - 2;
        }
        if (10 < uVar51) {
          plVar6 = (longlong *)in_R9[1];
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa699;
            pdb_140c7a240(in_R9 + 1);
          }
          goto code_r0x000141bfa5fd;
        }
code_r0x000141bfa52a:
        switch(&UNK_14339bf0c + *(int *)(&UNK_14339bf0c + uVar51 * 4)) {
        case (undefined *)0x141bfa53a:
          puVar29 = (ulonglong *)in_R9[2];
          puVar19[0xb] = in_R9[3];
code_r0x000141bfa549:
          puVar19[0xc] = 0;
          puVar19[0xd] = (ulonglong)puVar29;
          puVar17 = puVar21;
code_r0x000141bfa560:
          while (puVar19[0xb] != puVar19[0xc]) {
            puVar21 = (ulonglong *)(puVar19[0xc] + 1);
            puVar30 = puVar29;
code_r0x000141bfa571:
            puVar19[0xc] = (ulonglong)puVar21;
            puVar29 = puVar30 + 10;
            *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa57e;
            pdb_140986eb0(puVar30);
          }
          puVar21 = puVar17;
          if (*(longlong *)(puVar19[0xe] + 8) != 0) {
            puVar21 = (ulonglong *)(*(longlong *)(puVar19[0xe] + 8) << 4);
code_r0x000141bfa6b2:
            arg1 = (ulonglong *)((longlong)puVar21 * 5);
code_r0x000141bfa6b6:
            puVar21 = puVar17;
            uVar51 = 8;
            pbVar23 = (byte *)puVar19[0xd];
code_r0x000141bfa6c0:
            *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa6c5;
            pub_1406abac0(pbVar23,(ulonglong)arg1,uVar51);
          }
code_r0x000141bfa6c8:
code_r0x000141bfa5fd:
code_r0x000141bfa604:
          return puVar21;
        case (undefined *)0x141bfa5fd:
          goto code_r0x000141bfa5fd;
        case (undefined *)0x141bfa609:
          plVar6 = (longlong *)in_R9[1];
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa622;
            pdb_140d7dc90(in_R9 + 1);
          }
          goto code_r0x000141bfa5fd;
        case (undefined *)0x141bfa627:
          uVar51 = in_R9[3];
          if (uVar51 != 0) {
            pbVar23 = (byte *)in_R9[4];
            *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa646;
            pub_1406abac0(pbVar23,uVar51 << 2,4);
          }
          if (in_R9[6] == 0) goto code_r0x000141bfa5fd;
          pbVar23 = (byte *)in_R9[7];
          arg1 = (ulonglong *)(in_R9[6] * 0x14);
          break;
        case (undefined *)0x141bfa660:
          if (in_R9[1] == 0) goto code_r0x000141bfa5fd;
          pbVar23 = (byte *)in_R9[2];
          arg1 = (ulonglong *)(in_R9[1] << 3);
        }
        uVar51 = 4;
        goto code_r0x000141bfa6c0;
      case (ulonglong *)0x141bfa5b9:
        UNRECOVERED_JUMPTABLE = *(code **)((longlong)puVar21 + 0x4045280f);
        *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa5bf;
        uVar22 = (*UNRECOVERED_JUMPTABLE)();
        uVar49 = extraout_XMM0_Qb_06;
code_r0x000141bfa5bf:
        puVar19[-4] = uVar22;
        puVar19[-3] = uVar49;
        uVar22 = *puVar19;
        uVar49 = puVar19[1];
        uVar46 = (uint)puVar19[2];
        uVar56 = *(uint *)((longlong)puVar19 + 0x14);
        in_XMM1_Dc = (uint)puVar19[3];
        in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x1c);
        goto code_r0x000141bfa5cb;
      case (ulonglong *)0x141bfa5c5:
        *(byte *)param_1 = (char)*param_1 + bVar26;
        *(byte *)(puVar19 + 2) = (byte)puVar19[2] - bVar32;
code_r0x000141bfa5cb:
        puVar19[-6] = puVar19[6];
        puVar19[-5] = puVar19[7];
        puVar19[-8] = puVar19[4];
        puVar19[-7] = puVar19[5];
        *(uint *)(puVar19 + -10) = uVar46;
        *(uint *)((longlong)puVar19 + -0x4c) = uVar56;
        *(uint *)(puVar19 + -9) = in_XMM1_Dc;
        *(uint *)((longlong)puVar19 + -0x44) = in_XMM1_Dd;
        puVar19[-0xc] = uVar22;
        puVar19[-0xb] = uVar49;
code_r0x000141bfa5e3:
        puVar19[-2] = (ulonglong)puVar17;
        puVar19[-1] = (ulonglong)puVar17;
        *(byte *)((longlong)puVar19 + 0x7e) = 0;
        *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa5fc;
        puVar21 = (ulonglong *)pdb_1409139f0(puVar17 + 2,puVar19 + -0xc);
        goto code_r0x000141bfa5fd;
      case (ulonglong *)0x141bfa5e3:
        goto code_r0x000141bfa5e3;
      case (ulonglong *)0x141bfa61c:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (ulonglong *)0x141bfa788:
code_r0x000141bfa788:
        *(ulonglong **)((longlong)puVar44 + 0x10) = arg1;
code_r0x000141bfa795:
        *(ulonglong **)((longlong)puVar44 + -8) = puVar19;
        *(ulonglong **)((longlong)puVar44 + -0x10) = puVar17;
        *(ulonglong **)((longlong)puVar44 + -0x18) = in_R9;
        *(ulonglong **)((longlong)puVar44 + -0x20) = puVar37;
        puVar44 = (ulonglong *)((longlong)puVar44 + -0x48);
        puVar19 = arg1 + 0x10;
        puVar21 = *(ulonglong **)(arg1[0x1e] + 8);
        goto code_r0x000141bfa7ac;
      case (ulonglong *)0x141bfa79c:
        *(byte *)((longlong)puVar21 + -0x73) = *(byte *)((longlong)puVar21 + -0x73) - bVar32;
        *(byte *)in_R9 = bVar13;
code_r0x000141bfa7a0:
        *(byte *)puVar21 = (byte)*puVar21;
        pbVar23 = (byte *)((longlong)puVar21 + -0x75);
        bVar26 = *pbVar23;
        *pbVar23 = *pbVar23 + (char)puVar30;
        if (SCARRY1(bVar26,(char)puVar30)) {
                    /* WARNING: Could not recover jumptable at 0x000141bfa7f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar19 = (ulonglong *)
                    (*(code *)(CONCAT71((int7)((ulonglong)puVar21 >> 8),(char)puVar21 + -0x80) +
                              (longlong)puVar50))();
          return puVar19;
        }
code_r0x000141bfa7a9:
        puVar21 = (ulonglong *)(ulonglong)(uint)puVar21[1];
code_r0x000141bfa7ac:
        if (puVar21 != (ulonglong *)0x0) {
          pbVar23 = (byte *)puVar19[0xd];
          *(undefined **)((longlong)puVar44 + -8) = &UNK_141bfa7c8;
          pub_1406abac0(pbVar23,(longlong)puVar21 * 0x50,8);
          return extraout_RAX_01;
        }
        return (ulonglong *)0x0;
      case (ulonglong *)0x141bfa7b8:
        *(byte *)(puVar30 + -9) = (byte)puVar30[-9] + 8;
        *(byte *)puVar21 = (byte)*puVar21 + bVar13;
        *(byte *)((longlong)puVar21 + -0x75) = *(byte *)((longlong)puVar21 + -0x75) + bVar32;
      case (ulonglong *)0x141bfa7c1:
        *(undefined8 *)((longlong)puVar44 + -8) = 0xffffffffab12f8e8;
        *(byte *)(puVar21 + 0x5189069) = (byte)puVar21[0x5189069] + 1;
        return puVar21;
      case (ulonglong *)0x141bfa7dd:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        puVar19 = (ulonglong *)(*UNRECOVERED_JUMPTABLE)();
        return puVar19;
      }
      *(undefined **)((longlong)puVar44 + 0x20) = &UNK_14304ca90;
      *(undefined8 *)((longlong)puVar44 + 0x28) = 3;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7d4e;
      pdb_141501150(unaff_R12,puVar19 + 0x7a,&UNK_14304ca58,0x12);
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7d6b;
      pdb_141707ff0(puVar19 + 0x8c,unaff_R12,&UNK_14339b7cd,0xf);
      if ((uint)puVar19[0x8c] == 2) {
        puVar21 = (ulonglong *)puVar19[0x8d];
      }
      else {
        puVar19[0x74] = puVar19[0x94];
        uVar46 = (uint)puVar19[0x90];
        uVar56 = *(uint *)((longlong)puVar19 + 0x484);
        in_XMM1_Dc = (uint)puVar19[0x91];
        in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x48c);
        uVar57 = (uint)puVar19[0x92];
        uVar58 = *(uint *)((longlong)puVar19 + 0x494);
        in_XMM2_Dc = (uint)puVar19[0x93];
        in_XMM2_Dd = *(uint *)((longlong)puVar19 + 0x49c);
        *(uint *)(puVar19 + 0x72) = uVar57;
        *(uint *)((longlong)puVar19 + 0x394) = uVar58;
        *(uint *)(puVar19 + 0x73) = in_XMM2_Dc;
        *(uint *)((longlong)puVar19 + 0x39c) = in_XMM2_Dd;
        *(uint *)(puVar19 + 0x70) = uVar46;
        *(uint *)((longlong)puVar19 + 900) = uVar56;
        *(uint *)(puVar19 + 0x71) = in_XMM1_Dc;
        *(uint *)((longlong)puVar19 + 0x38c) = in_XMM1_Dd;
        puVar19[0x6e] = puVar19[0x8e];
        puVar19[0x6f] = puVar19[0x8f];
        *(uint *)(puVar19 + 0x6c) = (uint)puVar19[0x8c];
        *(uint *)((longlong)puVar19 + 0x364) = *(uint *)((longlong)puVar19 + 0x464);
        puVar19[0x6d] = puVar19[0x8d];
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7df0;
        lVar20 = pdb_141c0c220(&UNK_14339b6c8,5,puVar19 + 0x80);
        if (lVar20 == 0) {
          lVar20 = CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
        }
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7e08;
        pdb_141bfa7e0(unaff_R12,lVar20);
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7e18;
        pdb_1414fed90(puVar19 + 0x8c,unaff_R12);
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7e39;
        pdb_141707e40(puVar19 + 0x7a,puVar19 + 0x8c,&UNK_14339b7dc,0xd);
        puVar19[0x3e] = (ulonglong)puVar37;
        puVar21 = (ulonglong *)puVar19[0x7b];
        if (!SBORROW8(0,puVar19[0x7a])) {
          puVar19[0x43] = puVar19[0x7a];
          puVar19[0x44] = (ulonglong)puVar21;
          puVar19[0x45] = puVar19[0x7c];
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7e8f;
          lVar20 = pdb_141c0c220(&UNK_14339b6cd,0xb,puVar19 + 0x80);
          if (lVar20 == 0) {
            lVar20 = CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
          }
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7eab;
          pdb_141bfa7e0(puVar19 + 0x8c,lVar20);
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7ebb;
          pdb_1414ff9d0(unaff_R12,puVar19 + 0x8c);
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7ecb;
          pdb_141bfa350(puVar19 + 0x7a,unaff_R12);
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7ee4;
          lVar20 = pdb_141c0c220(&UNK_14339b6d8,6,puVar19 + 0x80);
          if (lVar20 == 0) {
            lVar20 = CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
          }
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7f00;
          pdb_141bfa7e0(puVar19 + 0x8c,lVar20);
          *(undefined **)((longlong)puVar44 + 0x20) = &UNK_143337ca0;
          *(undefined8 *)((longlong)puVar44 + 0x28) = 2;
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7f32;
          pdb_141501340(unaff_R12,puVar19 + 0x8c,&UNK_143337c85,0xe);
          uVar22 = puVar19[0x98];
          if (uVar22 == 2) {
            *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7f4c;
            pdb_1404b4b10(puVar19 + 0x99);
            puVar19[0x95] = 4;
            uVar22 = 0;
            puVar19[0x79] = 0;
            puVar19[0x5d] = 0;
          }
          else {
            in_R9 = (ulonglong *)puVar19[0x99];
            puVar19[0x79] = puVar19[0x9a];
            puVar19[0x95] = puVar19[0x9b];
            puVar19[0x5d] = puVar19[0x9c];
          }
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7fbc;
          lVar20 = pdb_141c0c220(&UNK_14339b6de,0x15,puVar19 + 0x80);
          if (lVar20 == 0) {
            lVar20 = CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
          }
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf7fd8;
          pdb_141bfa7e0(puVar19 + 0x85,lVar20);
          *(undefined **)((longlong)puVar44 + 0x20) = &UNK_143356218;
          *(undefined8 *)((longlong)puVar44 + 0x28) = 1;
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf800a;
          pdb_1415034e0(unaff_R12,puVar19 + 0x85,&UNK_1433561fd,0x15);
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf801a;
          pdb_141bfa350(puVar19 + 0x8c,unaff_R12);
          puVar19[0x3f] = uVar22;
          puVar19[0x6b] = 0x8000000000000000;
          puVar19[0x8a] = (ulonglong)in_R9;
          puVar19[0x5e] = (ulonglong)param_1;
          uVar22 = puVar19[0x96];
          puVar19[0x8b] = uVar22 + puVar19[0x8b] * 0x28;
          uVar49 = puVar19[0x95];
          uVar28 = puVar19[0x5d];
          while (uVar22 != puVar19[0x8b]) {
            puVar19[0x96] = uVar22 + 0x28;
            puVar4 = *(uint **)(uVar22 + 0x18);
            lVar20 = *(longlong *)(uVar22 + 0x20);
            puVar11 = puVar4;
            while (puVar52 = puVar11, puVar52 != puVar4 + lVar20 * 0x1c) {
              puVar11 = puVar52 + 0x1c;
              if (*(char *)((longlong)puVar52 + 0x6b) == '\x01') {
                puVar31 = (uint *)puVar19[0x95];
                while (puVar31 != (uint *)(uVar49 + uVar28 * 8)) {
                  puVar1 = puVar31 + 2;
                  uVar3 = *puVar31;
                  uVar34 = puVar31[1];
                  puVar31 = puVar1;
                  if ((uVar3 == *puVar52) || (uVar34 == *puVar52)) {
                    uVar15 = uVar34;
                    if (uVar3 >= uVar34 && uVar3 != uVar34) {
                      uVar15 = uVar3;
                    }
                    if (uVar3 < uVar34) {
                      uVar34 = uVar3;
                    }
                    *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf80d8;
                    pdb_1403afce0(puVar19 + 0x8c,uVar34,uVar15);
                  }
                }
                *(undefined1 *)((longlong)puVar52 + 0x6b) = 0;
              }
            }
            uVar22 = puVar19[0x96];
          }
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8114;
          lVar20 = pdb_141c0c220(&UNK_14339b660,6,puVar19 + 0x80);
          if (lVar20 == 0) {
            lVar20 = CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
          }
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8130;
          pdb_141bfa7e0(puVar19 + 0x98,lVar20);
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8144;
          pdb_1414ff410(puVar19 + 0x85,puVar19 + 0x98);
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8165;
          pdb_141707e40(puVar19 + 0x60,puVar19 + 0x85,&UNK_14339b7e9,0xe);
          puVar21 = (ulonglong *)puVar19[0x61];
          if (!SBORROW8(0,puVar19[0x60])) {
            puVar19[0x98] = (ulonglong)puVar21;
            puVar19[0x99] = (ulonglong)puVar21;
            puVar19[0x9a] = puVar19[0x60];
            puVar19[0x9b] = (ulonglong)(puVar21 + puVar19[0x62] * 3);
            puVar19[0x9c] = (ulonglong)(puVar19 + 0x35);
            *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf81cc;
            pdb_140af3980(puVar19 + 0x28,puVar19 + 0x98);
            puVar21 = (ulonglong *)puVar19[0x29];
            if (puVar19[0x28] != 0) {
              uVar46 = (uint)puVar19[0x2c];
              uVar56 = *(uint *)((longlong)puVar19 + 0x164);
              in_XMM1_Dc = (uint)puVar19[0x2d];
              in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x16c);
              *(uint *)(puVar19 + 0x9c) = uVar46;
              *(uint *)((longlong)puVar19 + 0x4e4) = uVar56;
              *(uint *)(puVar19 + 0x9d) = in_XMM1_Dc;
              *(uint *)((longlong)puVar19 + 0x4ec) = in_XMM1_Dd;
              puVar19[0x9a] = puVar19[0x2a];
              puVar19[0x9b] = puVar19[0x2b];
              puVar19[0x98] = puVar19[0x28];
              puVar19[0x99] = (ulonglong)puVar21;
              uVar22 = puVar19[0xb8];
              *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8224;
              pdb_140905860(puVar19 + 0xe,uVar22);
              puVar37 = puVar19 + 0x98;
              uVar49 = puVar19[0xf];
              puVar19[0x85] = uVar49;
              puVar19[0x86] = uVar49;
              puVar19[0x87] = puVar19[0xe];
              puVar19[0x88] = puVar19[0x10] * 0x10 + uVar49;
              puVar19[0x89] = (ulonglong)puVar37;
              *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8275;
              pdb_1415e37b0(puVar19 + 0xb,puVar19 + 0x85);
              if ((puVar19[0x9b] != 0) && (1 < *_DAT_143ca8e90)) {
                pauVar5 = (undefined1 (*) [16])puVar19[0x98];
                auVar2 = *pauVar5;
                puVar19[0x85] = (ulonglong)pauVar5;
                puVar19[0x86] = (ulonglong)(pauVar5 + 1);
                puVar19[0x87] = (ulonglong)(*pauVar5 + puVar19[0x99] + 1);
                *(ushort *)(puVar19 + 0x88) =
                     ~((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
                puVar19[0x89] = puVar19[0x9b];
                *(byte *)((longlong)puVar19 + 0x535) = 1;
                *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf82fc;
                pdb_1416075d0(puVar19 + 0x60,puVar19 + 0x85);
                puVar19[0x40] = (ulonglong)(puVar19 + 0x60);
                puVar19[0x41] = (ulonglong)pdb_1415e4fb0;
                puVar19[0x85] = (ulonglong)&UNK_14339b840;
                puVar19[0x86] = 0x25;
                puVar19[0x87] = (ulonglong)&UNK_14339b840;
                puVar19[0x88] = 0x25;
                puVar19[0x89] = (ulonglong)&UNK_14339b828;
                *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8372;
                pdb_1400c9be0(&UNK_14339b7f7,puVar19 + 0x40,2,puVar19 + 0x85);
                uVar49 = puVar19[0x60];
                if (uVar49 != 0) {
                  pbVar23 = (byte *)puVar19[0x61];
                  *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8395;
                  pub_1406abac0(pbVar23,uVar49 << 3,8);
                }
              }
              puVar19[0x46] = puVar19[0xb];
              puVar19[0x47] = puVar19[0xc];
              puVar19[0x48] = puVar19[0xd];
              uVar49 = puVar19[0x47];
              *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf83bc;
              puVar21 = (ulonglong *)pdb_140905b80(uVar22,uVar49);
              if (puVar21 == (ulonglong *)0x0) {
                uVar18 = *(undefined8 *)(puVar19[0x3b] + 0x10);
                *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf83e2;
                pdb_1415e4290(puVar19 + 0x49,0,uVar18);
                *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf83f6;
                pdb_142565b10(puVar19 + 0x60,puVar19 + 0x35);
                *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf840a;
                pdb_141bf9bf0(puVar19 + 0x40,puVar19 + 0x60);
                uVar22 = puVar19[0x40];
                if (uVar22 == 0) {
                  puVar21 = (ulonglong *)puVar19[0x41];
                }
                else {
                  uVar49 = puVar19[0x41];
                  *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8430;
                  pdb_140dbe940(puVar19 + 0x87,0);
                  puVar19[0x85] = uVar22;
                  puVar19[0x86] = uVar49;
                  uVar22 = puVar19[0x4a];
                  uVar49 = puVar19[0x4b];
                  *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8464;
                  uVar18 = pdb_140b8dd00(puVar19 + 0x85,uVar22,uVar49 * 4);
                  *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf847a;
                  puVar21 = (ulonglong *)pdb_141707f30(uVar18,&UNK_14339b865,0x1a);
                  if (puVar21 == (ulonglong *)0x0) {
                    puVar19[0x8b] = uVar22;
                    pbVar23 = (byte *)puVar19[0x87];
                    *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf87f2;
                    pub_1406abac0(pbVar23,0xab08,8);
                    puVar19[0x24] = puVar19[0x46];
                    puVar19[0x25] = puVar19[0x47];
                    puVar19[0x26] = puVar19[0x48];
                    puVar19[0x96] = puVar19[0x49];
                    *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8839;
                    pdb_140264880(puVar37,puVar19 + 0x9c,0x30,0x10);
                    puVar19[0x62] = puVar19[0x26];
                    puVar19[0x60] = puVar19[0x24];
                    puVar19[0x61] = puVar19[0x25];
                    *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf886b;
                    pdb_142565b10(puVar19 + 0x98,puVar19 + 0x35);
                    if ((byte)puVar19[0x98] == 0) goto code_r0x000141bf8a3e;
                    uVar22 = puVar19[0x99];
                    if (uVar22 == 0) {
                      uVar22 = puVar19[0x9a];
                      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8977;
                      puVar21 = (ulonglong *)pdb_142deaf00(uVar22);
                    }
                    else {
                      uVar28 = puVar19[0x9a];
                      puVar37 = (ulonglong *)puVar19[0x9b];
                      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf88a8;
                      puVar21 = (ulonglong *)pdb_142565bf0(&UNK_14339b713,6);
                      if (puVar37 != puVar21) {
code_r0x000141bf8a3e:
                        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8a56;
                        lVar20 = pdb_141c0c220(&UNK_14339b6b6,0x12,puVar19 + 0x80);
                        if (lVar20 == 0) {
                          lVar20 = CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
                        }
                        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8a72;
                        pdb_141bfa7e0(puVar19 + 0x98,lVar20);
                        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8a86;
                        pdb_1414fdc20(puVar19 + 0x85,puVar19 + 0x98);
                        if ((uint)puVar19[0x85] == 1) {
                          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8a9c;
                          pdb_1404b4b10(puVar19 + 0x86);
                          uVar61 = (undefined4)_UNK_14339b560;
                          uVar62 = (undefined4)((ulonglong)_UNK_14339b560 >> 0x20);
                        }
                        else {
                          uVar61 = (undefined4)*(undefined8 *)((longlong)puVar19 + 0x42c);
                          uVar62 = (undefined4)
                                   ((ulonglong)*(undefined8 *)((longlong)puVar19 + 0x42c) >> 0x20);
                        }
                        puVar19[0x14] = puVar19[0x4f];
                        puVar19[0x15] = puVar19[0x50];
                        puVar19[0x16] = puVar19[0x51];
                        puVar19[0x18] = puVar19[0x4c];
                        puVar19[0x19] = puVar19[0x4d];
                        puVar19[0x1a] = puVar19[0x4e];
                        puVar19[2] = puVar19[0x6c];
                        puVar19[3] = puVar19[0x6d];
                        puVar19[4] = puVar19[0x6e];
                        puVar19[5] = puVar19[0x6f];
                        puVar19[6] = puVar19[0x70];
                        puVar19[7] = puVar19[0x71];
                        *(uint *)(puVar19 + 8) = (uint)puVar19[0x72];
                        *(uint *)((longlong)puVar19 + 0x44) = *(uint *)((longlong)puVar19 + 0x394);
                        *(uint *)(puVar19 + 9) = (uint)puVar19[0x73];
                        *(uint *)((longlong)puVar19 + 0x4c) = *(uint *)((longlong)puVar19 + 0x39c);
                        puVar19[10] = puVar19[0x74];
                        puVar19[0x1e] = puVar19[0x62];
                        puVar19[0x1c] = puVar19[0x60];
                        puVar19[0x1d] = puVar19[0x61];
                        puVar19[0x22] = puVar19[0x45];
                        puVar19[0x20] = puVar19[0x43];
                        puVar19[0x21] = puVar19[0x44];
                        puVar19[-6] = puVar19[0x7e];
                        puVar19[-5] = puVar19[0x7f];
                        puVar19[-8] = puVar19[0x7c];
                        puVar19[-7] = puVar19[0x7d];
                        puVar19[-10] = puVar19[0x7a];
                        puVar19[-9] = puVar19[0x7b];
                        *(uint *)puVar19 = (uint)puVar19[0x90];
                        *(uint *)((longlong)puVar19 + 4) = *(uint *)((longlong)puVar19 + 0x484);
                        *(uint *)(puVar19 + 1) = (uint)puVar19[0x91];
                        *(uint *)((longlong)puVar19 + 0xc) = *(uint *)((longlong)puVar19 + 0x48c);
                        *(uint *)(puVar19 + -2) = (uint)puVar19[0x8e];
                        *(uint *)((longlong)puVar19 + -0xc) = *(uint *)((longlong)puVar19 + 0x474);
                        *(uint *)(puVar19 + -1) = (uint)puVar19[0x8f];
                        *(uint *)((longlong)puVar19 + -4) = *(uint *)((longlong)puVar19 + 0x47c);
                        puVar19[-4] = puVar19[0x8c];
                        puVar19[-3] = puVar19[0x8d];
                        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8ba6;
                        pdb_140a7a6f0(puVar19 + 0x80);
                        puVar21 = (ulonglong *)puVar19[0x5e];
                        uVar22 = puVar19[0x6b];
                        *(byte *)((longlong)puVar19 + 0x537) = 1;
                        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8bc8;
                        pdb_141ab4b30(puVar19 + 0x30);
                        puVar21[4] = puVar19[0x79];
                        puVar21[5] = puVar19[0x95];
                        puVar21[6] = puVar19[0x5d];
                        puVar21[9] = puVar19[0x16];
                        uVar28 = puVar19[0x15];
                        puVar21[7] = puVar19[0x14];
                        puVar21[8] = uVar28;
                        puVar21[10] = puVar19[0x65];
                        puVar21[0xb] = puVar19[0x5a];
                        puVar21[0xc] = puVar19[0x3c];
                        puVar21[0xf] = puVar19[0x1a];
                        uVar28 = puVar19[0x19];
                        puVar21[0xd] = puVar19[0x18];
                        puVar21[0xe] = uVar28;
                        puVar21[0x10] = puVar19[0x66];
                        puVar21[0x11] = puVar19[0x5b];
                        puVar21[0x12] = puVar19[0x3d];
                        puVar21[0x13] = puVar19[0x67];
                        puVar21[0x14] = puVar19[0x5c];
                        puVar21[0x15] = puVar19[0x3e];
                        puVar21[0x16] = puVar19[0x77];
                        puVar21[0x17] = puVar19[0x68];
                        puVar21[0x18] = puVar19[0x52];
                        puVar21[0x19] = puVar19[0x78];
                        puVar21[0x1a] = puVar19[0x69];
                        puVar21[0x1b] = puVar19[0x53];
                        puVar21[0x1c] = puVar19[0x76];
                        puVar21[0x1d] = puVar19[0x6a];
                        puVar21[0x1e] = puVar19[0x54];
                        puVar21[0x21] = puVar19[0x1e];
                        uVar28 = puVar19[0x1d];
                        puVar21[0x1f] = puVar19[0x1c];
                        puVar21[0x20] = uVar28;
                        puVar21[0x22] = puVar19[0x96];
                        puVar21[0x23] = puVar19[0x8b];
                        puVar21[0x24] = uVar49;
                        puVar21[0x27] = puVar19[0x22];
                        uVar49 = puVar19[0x21];
                        puVar21[0x25] = puVar19[0x20];
                        puVar21[0x26] = uVar49;
                        puVar21[0x28] = uVar22;
                        puVar21[0x29] = puVar19[0x5f];
                        puVar21[0x2a] = (ulonglong)puVar37;
                        puVar21[0x33] = puVar19[10];
                        uVar22 = puVar19[2];
                        uVar49 = puVar19[3];
                        uVar28 = puVar19[4];
                        uVar7 = puVar19[5];
                        uVar8 = puVar19[6];
                        uVar9 = puVar19[7];
                        uVar10 = puVar19[9];
                        puVar21[0x31] = puVar19[8];
                        puVar21[0x32] = uVar10;
                        puVar21[0x2f] = uVar8;
                        puVar21[0x30] = uVar9;
                        puVar21[0x2d] = uVar28;
                        puVar21[0x2e] = uVar7;
                        puVar21[0x2b] = uVar22;
                        puVar21[0x2c] = uVar49;
                        uVar22 = puVar19[-10];
                        uVar49 = puVar19[-9];
                        uVar28 = puVar19[-8];
                        uVar7 = puVar19[-7];
                        uVar8 = puVar19[-5];
                        puVar21[0x38] = puVar19[-6];
                        puVar21[0x39] = uVar8;
                        puVar21[0x36] = uVar28;
                        puVar21[0x37] = uVar7;
                        puVar21[0x34] = uVar22;
                        puVar21[0x35] = uVar49;
                        uVar22 = puVar19[-4];
                        uVar49 = puVar19[-3];
                        uVar28 = puVar19[-2];
                        uVar7 = puVar19[-1];
                        uVar8 = puVar19[1];
                        puVar21[0x3e] = *puVar19;
                        puVar21[0x3f] = uVar8;
                        puVar21[0x3c] = uVar28;
                        puVar21[0x3d] = uVar7;
                        puVar21[0x3a] = uVar22;
                        puVar21[0x3b] = uVar49;
                        *puVar21 = uVar51;
                        *(int *)(puVar21 + 1) = (int)puVar17;
                        puVar21[2] = puVar19[0x3f];
                        puVar21[3] = puVar19[0x8a];
                        puVar21[0x40] = CONCAT44(uVar62,uVar61);
                        uVar51 = puVar19[0x55];
                        if (uVar51 != 0) {
                          pbVar23 = (byte *)puVar19[0x56];
                          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8e3a;
                          pub_1406abac0(pbVar23,uVar51,1);
                        }
                        return (ulonglong *)puVar19[0x5e];
                      }
                      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf88c6;
                      pdb_1415e4550(puVar19 + 0x85,0,0x40000);
                      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf88d5;
                      pdb_140dbe940(puVar19 + 0x9a,0);
                      puVar19[0x98] = uVar22;
                      puVar19[0x99] = uVar28;
                      uVar22 = puVar19[0x86];
                      puVar37 = (ulonglong *)puVar19[0x87];
                      puVar19[0x5f] = uVar22;
                      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf890d;
                      uVar18 = pdb_140b8dd00(puVar19 + 0x98,uVar22,(longlong)puVar37 * 4);
                      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8923;
                      puVar21 = (ulonglong *)pdb_141707f30(uVar18,&UNK_14339b87f,0x22);
                      if (puVar21 == (ulonglong *)0x0) {
                        pbVar23 = (byte *)puVar19[0x9a];
                        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8a30;
                        pub_1406abac0(pbVar23,0xab08,8);
                        puVar19[0x6b] = puVar19[0x85];
                        goto code_r0x000141bf8a3e;
                      }
                      pbVar23 = (byte *)puVar19[0x9a];
                      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8947;
                      pub_1406abac0(pbVar23,0xab08,8);
                      uVar22 = puVar19[0x85];
                      if (uVar22 != 0) {
                        pbVar23 = (byte *)puVar19[0x5f];
                        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8969;
                        pub_1406abac0(pbVar23,uVar22 << 2,1);
                      }
                    }
                    if (puVar19[0x96] != 0) {
                      uVar22 = puVar19[0x96];
                      pbVar23 = (byte *)puVar19[0x8b];
                      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf89a2;
                      pub_1406abac0(pbVar23,uVar22 << 2,4);
                    }
                    *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf89af;
                    pdb_14096dd60(puVar19 + 0x60);
                    goto code_r0x000141bf84f9;
                  }
                  pbVar23 = (byte *)puVar19[0x87];
                  *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf849e;
                  pub_1406abac0(pbVar23,0xab08,8);
                }
                uVar22 = puVar19[0x49];
                if (uVar22 != 0) {
                  pbVar23 = (byte *)puVar19[0x4a];
                  *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf84c9;
                  pub_1406abac0(pbVar23,uVar22 << 2,4);
                }
              }
              *(byte *)((longlong)puVar19 + 0x535) = 0;
              *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf84dc;
              pdb_14096dd60(puVar19 + 0x46);
              *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf84f8;
              pdb_140264880(puVar37,puVar19 + 0x9c,0x30,0x10);
            }
          }
code_r0x000141bf84f9:
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8505;
          pdb_1400db1d0(puVar19 + 0x8c);
          param_1 = (ulonglong *)puVar19[0x5e];
          in_R9 = (ulonglong *)puVar19[0x8a];
          uVar22 = puVar19[0x79];
          if (uVar22 != 0) {
            pbVar23 = (byte *)puVar19[0x95];
            *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8540;
            pub_1406abac0(pbVar23,uVar22 << 3,4);
          }
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf854d;
          pdb_1400db1d0(puVar19 + 0x7a);
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf855a;
          pdb_1409775a0(puVar19 + 0x43);
        }
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8567;
        pdb_1400da950(puVar19 + 0x6c);
      }
      uVar22 = puVar19[0x76];
      if (uVar22 != 0) {
        pbVar23 = (byte *)puVar19[0x6a];
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf858a;
        pub_1406abac0(pbVar23,uVar22 << 4,8);
      }
      uVar22 = puVar19[0x78];
      if (uVar22 != 0) {
        pbVar23 = (byte *)puVar19[0x69];
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf85ac;
        pub_1406abac0(pbVar23,uVar22 << 4,8);
      }
      uVar22 = puVar19[0x77];
      if (uVar22 != 0) {
        pbVar23 = (byte *)puVar19[0x68];
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf85ce;
        pub_1406abac0(pbVar23,uVar22 << 4,8);
      }
      uVar22 = puVar19[0x67];
      if (uVar22 != 0) {
        pbVar23 = (byte *)puVar19[0x5c];
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf85f0;
        pub_1406abac0(pbVar23,uVar22 << 4,8);
      }
code_r0x000141bf85f0:
      uVar22 = puVar19[0x66];
      puVar19[0x8a] = (ulonglong)in_R9;
      if (uVar22 != 0) {
        pbVar23 = (byte *)puVar19[0x5b];
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8619;
        pub_1406abac0(pbVar23,uVar22 << 4,8);
      }
code_r0x000141bf8619:
      pbVar23 = (byte *)puVar19[0x4d];
      uVar22 = puVar19[0x4e];
      if (uVar22 != 0) {
        pbVar47 = pbVar23 + 0x18;
        do {
          lVar20 = *(longlong *)(pbVar47 + -8);
          if (lVar20 != 0) {
            arg0 = *(byte **)pbVar47;
            *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8664;
            pub_1406abac0(arg0,lVar20 * 0x70,8);
          }
          pbVar47 = pbVar47 + 0x28;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      uVar22 = puVar19[0x4c];
      if (uVar22 != 0) {
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8688;
        pub_1406abac0(pbVar23,uVar22 * 0x28,8);
      }
      in_R9 = (ulonglong *)puVar19[0x8a];
code_r0x000141bf868f:
      uVar22 = puVar19[0x65];
      puVar19[0x8a] = (ulonglong)in_R9;
      if (uVar22 != 0) {
        pbVar23 = (byte *)puVar19[0x5a];
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf86b8;
        pub_1406abac0(pbVar23,uVar22 * 0x58,8);
      }
      goto code_r0x000141bf86b8;
    case 0x1d:
      goto code_r0x000141bf77a5;
    case 0x1e:
      goto code_r0x000141bf7900;
    case 0x1f:
    case 0x20:
      *(byte *)((longlong)puVar21 + -0x39) = *(byte *)((longlong)puVar21 + -0x39) + bVar32;
      UNK_14339be08 = UNK_14339be08 + '\b';
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      *(byte *)((longlong)puVar21 + -0x77) = *(byte *)((longlong)puVar21 + -0x77) + bVar32;
      uVar22 = *puVar44;
      puVar44 = puVar44 + 1;
      bVar55 = (uVar22 & 0x400) != 0;
      pbVar23 = (byte *)((longlong)puVar21 * 2);
      *pbVar23 = *pbVar23 << 1 | (char)*pbVar23 < '\0';
      goto code_r0x000141bf78ce;
    case 0x21:
      *(uint *)puVar21 = (uint)*puVar21 + uVar15;
      goto code_r0x000141bf7900;
    case 0x22:
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bf78e6;
    case 0x23:
      goto code_r0x000141bf7927;
    case 0x24:
      *(uint *)(puVar19 + 0x77) = uVar27;
      goto code_r0x000141bf7a11;
    case 0x25:
    case 0x26:
      bVar53 = SBORROW4(0,uVar15);
      goto code_r0x000141bf79d7;
    case 0x27:
      puVar39 = puVar44 + -1;
      puVar44 = puVar44 + -1;
      *puVar39 = 0x48000004;
code_r0x000141bf7a19:
      *(uint *)(puVar19 + 0x68) = (uint)puVar21;
      goto code_r0x000141bf7a1f;
    case 0x28:
      uVar15 = uVar15 + (uint)*puVar21;
      puVar21 = (ulonglong *)(ulonglong)uVar15;
      *(byte *)((longlong)puVar21 + -0x39) = *(byte *)((longlong)puVar21 + -0x39) + bVar32;
      *(byte *)puVar21 = (byte)*puVar21 + (char)uVar15;
code_r0x000141bf79fc:
      *(byte *)((longlong)puVar21 + -0x39) = *(byte *)((longlong)puVar21 + -0x39) + (char)puVar29;
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
      puVar37 = (ulonglong *)CONCAT71(uVar38,cVar35 + (char)((ulonglong)puVar29 >> 8));
      in_R9 = (ulonglong *)(ulonglong)((int)puVar21 + 0x48000003);
      uVar22 = (ulonglong)(uint)puVar19[0x8d];
      goto code_r0x000141bf7a18;
    case 0x29:
      *(byte *)((longlong)puVar21 + -0x73) = *(byte *)((longlong)puVar21 + -0x73) + bVar32;
      goto code_r0x000141bf7a39;
    case 0x2a:
      *(uint *)(puVar19 + 0x78) = 0;
      goto code_r0x000141bf7b1f;
    case 0x2b:
    case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2d:
      *(byte *)((longlong)puVar21 + -0x39) = *(byte *)((longlong)puVar21 + -0x39) + bVar32;
code_r0x000141bf7b27:
      *(byte *)puVar21 = (byte)*puVar21 + (char)puVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2e:
      goto code_r0x000141bf7afb;
    case 0x2f:
      *(uint *)(puVar19 + 0x69) = uVar15;
      goto code_r0x000141bf7b41;
    case 0x30:
      goto code_r0x000141bf7c1c;
    case 0x31:
    case 0x32:
      *(byte *)((longlong)puVar21 + -0x73) = *(byte *)((longlong)puVar21 + -0x73) | bVar32;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x33:
      puVar50 = puVar17;
      if (puVar29 == (ulonglong *)0x0) {
        puVar41 = (undefined1 *)(CONCAT71(uVar25,bVar13 + cVar12) * 2);
        *puVar41 = *puVar41;
        puVar29 = (ulonglong *)0x0;
code_r0x000141bf7c04:
        pcVar24 = (char *)((longlong)puVar29 * 5 + -0x1e);
        *pcVar24 = *pcVar24 + (char)puVar29;
        goto code_r0x000141bf7c08;
      }
      goto code_r0x000141bf7c21;
    case 0x34:
      puVar29 = (ulonglong *)(ulonglong)(uVar34 + 0x460);
      arg1 = unaff_R12;
      goto code_r0x000141bf7c08;
    case 0x35:
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      *(byte *)((longlong)puVar21 + -0x39) = *(byte *)((longlong)puVar21 + -0x39) + bVar32;
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      puVar37 = (ulonglong *)CONCAT71(uVar38,cVar35 + cVar12);
      goto code_r0x000141bf7c52;
    default:
      *(uint *)in_R9 = uVar15;
      *(byte *)((longlong)puVar21 + -0x7d) = *(byte *)((longlong)puVar21 + -0x7d) - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x37:
      *(byte *)((longlong)puVar21 + -0x7b) =
           *(byte *)((longlong)puVar21 + -0x7b) + bVar32 +
           (0xfffffffebcc641f7U <
           (ulonglong)(longlong)*(int *)(&UNK_14339be08 + (ulonglong)(byte)*puVar21 * 4));
      *(byte *)((longlong)(in_R9 + 9) + (longlong)puVar37) =
           *(byte *)((longlong)(in_R9 + 9) + (longlong)puVar37) << (bVar32 & 0x1f);
code_r0x000141bf9cd7:
      pbVar23 = *(byte **)(puVar19[-2] + 8);
      puVar44[-1] = (ulonglong)&UNK_141bf9cea;
      pub_1406abac0(pbVar23,(ulonglong)arg1,1);
code_r0x000141bf9cf6:
      arg1 = (ulonglong *)0x28;
      puVar50 = (ulonglong *)0x8;
      puVar29 = (ulonglong *)puVar19[-2];
      puVar19 = (ulonglong *)puVar44[6];
      puVar44 = puVar44 + 7;
      goto code_r0x000141bf9d0a;
    case 0x3b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3d:
      return puVar21;
    case 0x3e:
      puVar40 = puVar44 + -1;
      puVar44 = puVar44 + -1;
      *puVar40 = 0x30;
      goto code_r0x000141bf9d13;
    case 0x41:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x47:
    case 0x4a:
    case 0x4b:
      puVar37 = (ulonglong *)(ulonglong)(uVar3 + 0x10);
      goto code_r0x000141bfa4fc;
    case 0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x46:
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bfa560;
    case 0x48:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x49:
      uVar51 = CONCAT71((int7)((ulonglong)puVar29 >> 8),bVar32 | (byte)*in_R9);
      LOCK();
      _UNK_14339be09 = 0x4339be08;
      UNLOCK();
      *(byte *)puVar21 = (byte)*puVar21 + bVar13;
      goto code_r0x000141bfa52a;
    case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4d:
    case 0x4e:
      goto code_r0x000141bfa6c8;
    case 0x4f:
      return puVar21;
    case 0x50:
      *(byte *)((longlong)puVar21 + -0x73) = *(byte *)((longlong)puVar21 + -0x73) - bVar32;
      puVar48 = (ulonglong *)((longlong)in_R9 + (ulonglong)bVar55 * -2 + 1);
      *(byte *)in_R9 = bVar13;
code_r0x000141bfa6e0:
      *(byte *)puVar21 = (byte)*puVar21;
      pbVar23 = (byte *)((longlong)puVar21 + 0x74007e7d);
      bVar53 = CARRY1(*pbVar23,(byte)puVar21);
      *pbVar23 = *pbVar23 + (byte)puVar21;
code_r0x000141bfa6e9:
      iVar16 = (int)puVar21 + -0x171676b8 + (uint)bVar53;
      sVar14 = (short)iVar16;
      return (ulonglong *)
             (ulonglong)
             CONCAT22((short)((uint)iVar16 >> 0x10),
                      CONCAT11((char)(sVar14 % (short)(char)puVar48),
                               (char)(sVar14 / (short)(char)puVar48)));
    case 0x51:
      puVar19 = (ulonglong *)&UNK_14339be88;
      bVar53 = UNK_14339bf07 == '\0';
      goto code_r0x000141bfa728;
    }
    puVar44[-1] = 0x141bf71ab;
    pdb_1414ff0d0(puVar19 + 0x6c,puVar19 + 0x98);
    uVar22 = puVar19[0x6d];
    if (!SBORROW8(0,puVar19[0x6c])) {
      puVar19[0x4f] = puVar19[0x6c];
      puVar19[0x50] = uVar22;
      puVar19[0x51] = puVar19[0x6e];
      puVar44[-1] = 0x141bf7283;
      pbVar23 = (byte *)pdb_141c0c220(&UNK_14339b651,5,puVar19 + 0x80);
code_r0x000141bf7284:
      if (pbVar23 == (byte *)0x0) {
        pbVar23 = (byte *)CONCAT44(uRam0000000143cad92c,_DAT_143cad928);
      }
code_r0x000141bf7297:
      uVar51 = (ulonglong)*pbVar23;
code_r0x000141bf729a:
                    /* WARNING: Could not recover jumptable at 0x000141bf72a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (ulonglong *)
                (*(code *)(&UNK_14339be20 + *(int *)(&UNK_14339be20 + uVar51 * 4)))
                          (&UNK_14339be20 + *(int *)(&UNK_14339be20 + uVar51 * 4));
      return puVar19;
    }
    puVar19[0x7a] = uVar22;
    *(byte *)((longlong)puVar19 + 0x532) = 1;
    puVar44[-1] = 0x141bf71e3;
    pdb_140f3f5b0(puVar19 + 0x98);
    uVar46 = (uint)puVar19[0x9a];
    uVar56 = *(uint *)((longlong)puVar19 + 0x4d4);
    in_XMM1_Dc = (uint)puVar19[0x9b];
    in_XMM1_Dd = *(uint *)((longlong)puVar19 + 0x4dc);
    uVar57 = (uint)puVar19[0x9c];
    uVar58 = *(uint *)((longlong)puVar19 + 0x4e4);
    in_XMM2_Dc = (uint)puVar19[0x9d];
    in_XMM2_Dd = *(uint *)((longlong)puVar19 + 0x4ec);
    *(uint *)(puVar19 + 0x90) = uVar57;
    *(uint *)((longlong)puVar19 + 0x484) = uVar58;
    *(uint *)(puVar19 + 0x91) = in_XMM2_Dc;
    *(uint *)((longlong)puVar19 + 0x48c) = in_XMM2_Dd;
    *(uint *)(puVar19 + 0x8e) = uVar46;
    *(uint *)((longlong)puVar19 + 0x474) = uVar56;
    *(uint *)(puVar19 + 0x8f) = in_XMM1_Dc;
    *(uint *)((longlong)puVar19 + 0x47c) = in_XMM1_Dd;
    puVar19[0x8c] = puVar19[0x98];
    puVar19[0x8d] = puVar19[0x99];
    puVar19[0x98] = (ulonglong)&UNK_14339b77d;
    puVar19[0x99] = 0xd;
    puVar19[0x9a] = uVar22;
    *(byte *)((longlong)puVar19 + 0x532) = 0;
    puVar44[-1] = 0x141bf7246;
    puVar21 = (ulonglong *)pdb_142de9590(puVar19 + 0x98,puVar19 + 0x8c);
code_r0x000141bf8740:
    in_R9 = (ulonglong *)puVar19[0x75];
    uVar3 = (uint)puVar19[0x97];
joined_r0x000141bf7106:
    if (2 < uVar3) {
      if (uVar3 == 3) {
        uVar22 = puVar19[0x81];
        if (uVar22 != 0) {
          pbVar23 = (byte *)puVar19[0x82];
          uVar49 = 1;
code_r0x000141bf87b8:
          *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf87bd;
          pub_1406abac0(pbVar23,uVar22,uVar49);
        }
      }
      else if (uVar3 == 4) {
        uVar22 = puVar19[0x82];
        uVar49 = puVar19[0x83];
        puVar19[0x97] = uVar22;
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf8777;
        pdb_14098ae50(uVar22,uVar49);
        if (puVar19[0x81] != 0) {
          uVar22 = puVar19[0x81] << 5;
          uVar49 = 8;
          pbVar23 = (byte *)puVar19[0x97];
          goto code_r0x000141bf87b8;
        }
      }
      else {
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf87ce;
        pdb_1409a45e0(puVar19 + 0x81);
      }
    }
code_r0x000141bf6e3b:
    *(byte *)((longlong)puVar19 + 0x537) = 1;
    *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6e4e;
    pdb_141ab4b30(puVar19 + 0x30);
LAB_141bf6a85:
    puVar19[0x28] = (ulonglong)puVar21;
    if (1 < *_DAT_143ca8e90) {
      uVar22 = puVar19[0x56];
      uVar49 = puVar19[0x57];
      *(byte *)((longlong)puVar19 + 0x536) = 1;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6ac7;
      pdb_141b1e240(puVar19 + 0x6c,uVar22,uVar49,4);
      puVar19[0x8c] = (ulonglong)(puVar19 + 0x6c);
      puVar19[0x8d] = (ulonglong)pdb_140f58250;
      puVar19[0x8e] = (ulonglong)(puVar19 + 0x28);
      puVar19[0x8f] = (ulonglong)pdb_140f36c20;
      puVar19[0x98] = 0;
      puVar19[0x99] = (ulonglong)&UNK_14339b840;
      puVar19[0x9a] = 0x25;
      puVar19[0x9b] = 0;
      puVar19[0x9c] = (ulonglong)&UNK_14339b5ff;
      puVar19[0x9d] = 0x30;
      puVar19[0x9e] = 2;
      puVar19[0x9f] = (ulonglong)&UNK_14339b840;
      puVar19[0xa0] = 0x25;
      puVar19[0xa1] = 0x16300000001;
      puVar19[0xa2] = (ulonglong)&UNK_14339b980;
      puVar19[0xa3] = (ulonglong)(puVar19 + 0x8c);
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6ba5;
      pdb_140f332f0((byte *)((longlong)puVar19 + 0x427),puVar19 + 0x98);
      uVar22 = puVar19[0x6c];
      if (uVar22 != 0) {
        pbVar23 = (byte *)puVar19[0x6d];
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6bc4;
        pub_1406abac0(pbVar23,uVar22,1);
      }
    }
    puVar19[0x98] = uVar51;
    *(byte *)((longlong)puVar19 + 0x536) = 1;
    uVar51 = puVar19[0x3a];
    *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6be5;
    pdb_1415e06e0(uVar51,puVar19 + 0x98);
    pbVar23 = (byte *)puVar19[0x56];
    uVar51 = puVar19[0x57];
    *(byte *)((longlong)puVar19 + 0x536) = 1;
    *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6c13;
    cVar12 = pdb_140f3e020(pbVar23,uVar51,&UNK_14339b9ab,6);
    if (cVar12 == '\0') {
      puVar19[0x97] = puVar19[0x55];
      puVar19[0x95] = (ulonglong)pbVar23;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6c70;
      uVar22 = pdb_140f4eda0(pbVar23,uVar51);
      uVar51 = puVar19[0x97];
      if (uVar51 != 0) {
        pbVar23 = (byte *)puVar19[0x95];
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6c92;
        pub_1406abac0(pbVar23,uVar51,1);
      }
      puVar19[0x98] = uVar22;
      if (uVar22 != 0) {
        *(byte *)((longlong)puVar19 + 0x536) = 0;
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6cb5;
        pdb_1404b38e0(puVar19 + 0x98);
      }
      *(byte *)((longlong)puVar19 + 0x537) = 0;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf68b3;
      pdb_140f36c40(puVar19 + 0x28);
    }
    else {
      *(byte *)((longlong)puVar19 + 0x537) = 1;
      *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6c2b;
      pdb_140f36c40(puVar19 + 0x28);
      uVar51 = puVar19[0x55];
      if (uVar51 != 0) {
        *(undefined8 *)((longlong)puVar44 + -8) = 0x141bf6c4a;
        pub_1406abac0(pbVar23,uVar51,1);
      }
    }
  } while( true );
}

