// VA 0x141b6d900, PDB extent 476 bytes
// country_core::systems::mode_manager::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141b6f9f3) overlaps instruction at (ram,0x000141b6f9f1)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000141b6e8ed) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::mode_manager::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 476 */

float * pdb_141b6d900(float *param_1,float *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  char cVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte bVar17;
  char cVar18;
  uint uVar19;
  float *pfVar20;
  undefined8 uVar21;
  longlong lVar22;
  float *pfVar23;
  float *extraout_RAX;
  float *extraout_RAX_00;
  undefined7 uVar25;
  uint uVar26;
  uint uVar27;
  float *pfVar28;
  ulonglong uVar29;
  undefined2 uVar30;
  longlong lVar31;
  float *unaff_RBX;
  longlong *plVar32;
  float *pfVar33;
  float *pfVar34;
  longlong *plVar35;
  undefined8 *puVar36;
  longlong *plVar37;
  longlong *plVar38;
  longlong *plVar39;
  undefined1 *puVar40;
  longlong *plVar41;
  longlong *plVar42;
  longlong *plVar43;
  longlong *plVar44;
  float *unaff_RBP;
  float *pfVar45;
  longlong lVar46;
  byte *pbVar47;
  float *pfVar48;
  ulonglong uVar49;
  uint uVar50;
  ulonglong in_R10;
  float *in_R11;
  longlong unaff_R12;
  byte unaff_R14B;
  undefined8 *unaff_R15;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  float fVar54;
  float fVar55;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar56;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  float in_XMM1_Da;
  float in_XMM4_Da;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  float unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [8];
  float *pfStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_58;
  undefined1 auStack_50 [8];
  float *pfStack_48;
  ulonglong uStack_38;
  float *pfStack_30;
  char *pcVar24;
  
  plVar38 = &stack0xffffffffffffffa8;
  plVar39 = &stack0xffffffffffffffa8;
  plVar42 = &stack0xffffffffffffffa8;
  plVar43 = &stack0xffffffffffffffa8;
  plVar35 = &stack0xffffffffffffffa8;
  plVar37 = &stack0xffffffffffffffa8;
  plVar44 = &stack0xffffffffffffffa8;
  pfVar33 = (float *)&stack0xffffffffffffffa8;
  plVar32 = &stack0xffffffffffffffa8;
  pfVar34 = (float *)&stack0xffffffffffffffa8;
  pfVar20 = *(float **)(param_2 + 10);
  if (*(float **)(param_2 + 8) <= pfVar20) {
LAB_141b6d952:
    uStack_38 = 5;
LAB_141b6d95b:
    uVar21 = pdb_142d84ef0(param_2,&uStack_38);
    *(undefined8 *)(param_1 + 2) = uVar21;
    *(byte *)param_1 = 1;
    return param_1;
  }
  pfVar48 = *(float **)(param_2 + 6);
  pbVar47 = (byte *)0x100002600;
LAB_141b6d92c:
  pfVar20 = (float *)((longlong)pfVar20 + 1);
  uVar49 = (ulonglong)(byte)((undefined *)((longlong)pfVar48 + -1))[(longlong)pfVar20];
  if (0x22 < uVar49) {
LAB_141b6d9a5:
    if (((undefined *)((longlong)pfVar48 + -1))[(longlong)pfVar20] == 0x7b) {
      pfVar45 = param_2 + 0x12;
      *(byte *)pfVar45 = *(byte *)pfVar45 - 1;
      unaff_RBX = param_2;
      if (*(byte *)pfVar45 != 0) goto code_r0x000141b6d9b8;
      uStack_38 = 0x18;
    }
    else {
      uStack_38 = 10;
    }
    goto LAB_141b6d95b;
  }
  if ((0x100002600U >> (uVar49 & 0x3f) & 1) != 0) goto code_r0x000141b6d93e;
  if (uVar49 != 0x22) goto LAB_141b6d9a5;
  uVar21 = pdb_141657790(&uStack_38);
  fVar54 = (float)uVar21;
  pfVar28 = (float *)&UNK_143398240;
  lVar22 = (longlong)*(int *)(&UNK_143398240 + (uStack_38 & 0xff) * 4);
  bVar53 = SCARRY8(lVar22,0x143398240);
  pfVar20 = (float *)(&UNK_143398240 + lVar22);
  bVar52 = (longlong)pfVar20 < 0;
  bVar51 = pfVar20 == (float *)0x0;
  uVar30 = SUB82(param_2,0);
  bVar17 = (byte)pfVar20;
  uVar26 = 0x43398240;
  plVar41 = &stack0xffffffffffffffa8;
  pfVar45 = unaff_RBP;
  fVar55 = in_XMM1_Da;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_38 & 0xff) {
  case 0:
    *(byte *)((longlong)param_1 + 1) = 0;
    goto code_r0x000141b6daa2;
  case 1:
    *(byte *)((longlong)param_1 + 1) = 1;
    goto code_r0x000141b6daa2;
  case 2:
    *(byte *)((longlong)param_1 + 1) = 2;
    goto code_r0x000141b6daa2;
  case 3:
    *(byte *)((longlong)param_1 + 1) = 3;
    goto code_r0x000141b6daa2;
  case 4:
    *(byte *)((longlong)param_1 + 1) = 4;
    goto code_r0x000141b6daa2;
  case 5:
    *(byte *)((longlong)param_1 + 1) = 5;
    goto code_r0x000141b6daa2;
  case 6:
    *(byte *)((longlong)param_1 + 1) = 6;
    goto code_r0x000141b6daa2;
  case 7:
    *(float **)(param_1 + 2) = pfStack_30;
    *(byte *)param_1 = 1;
    return param_1;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    pbVar47 = (byte *)0x100002601;
    iVar4 = CONCAT13(uRam0000000100002604,iRam0000000100002600._1_3_) + -1;
    iRam0000000100002600._1_3_ = (undefined3)iVar4;
    uRam0000000100002604 = (undefined1)((uint)iVar4 >> 0x18);
    unaff_RBX = (float *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x6c,(char)param_2));
    pfVar20 = (float *)((ulonglong)pfVar20 & 0xffffffffffffff20);
    break;
  case 0xf:
    unaff_RBX = param_2;
    break;
  case 0x10:
    iRam0000000100002600 = iRam0000000100002600 + 0x43398240;
    *(byte *)pfVar20 = 0;
    return pfVar20;
  case 0x11:
  case 0x12:
  case 0x14:
    goto code_r0x000141b6e8d2;
  case 0x13:
    goto code_r0x000141b6e8a2;
  case 0x15:
    *(byte *)pfVar20 = *(byte *)pfVar20 + bVar17;
    *(byte *)((longlong)unaff_RBP + 0x50ce6090d) =
         *(byte *)((longlong)unaff_RBP + 0x50ce6090d) + 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x16:
    goto code_r0x000141b6e87e;
  case 0x17:
    goto code_r0x000141b6e858;
  case 0x18:
    goto code_r0x000141b6e916;
  case 0x19:
    bRam000000018b420a41 = bRam000000018b420a41 | unaff_R14B;
    return pfVar20;
  case 0x1a:
    bVar51 = ((uint)uVar49 | 0x43398240) == 0;
    pfStack_30 = pfVar20;
    pfVar34 = (float *)&stack0xffffffffffffffa8;
    goto code_r0x000141b6e98c;
  case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1c:
    if (bVar51) {
      uVar5 = in(uVar30);
      iRam0000000100002600 = CONCAT31(iRam0000000100002600._1_3_,uVar5);
      out(*param_1,uVar30);
      plVar35 = &stack0xffffffffffffffa8;
    }
    else {
      uRam00000006501f8b02 =
           uRam00000006501f8b02 >> 1 | (uint)((uRam00000006501f8b02 & 1) != 0) << 0x1f;
      param_2 = pfVar28;
      plVar35 = &stack0xffffffffffffffa8;
    }
    goto code_r0x000141b6ea2b;
  case 0x1d:
    pfStack_30 = (float *)0x43398240;
    goto code_r0x000141b6e958;
  case 0x1e:
    pfStack_30 = pfVar20;
    goto code_r0x000141b6e9fc;
  default:
    *(byte *)pfVar20 = *(byte *)pfVar20 + bVar17;
  case 0x35:
code_r0x000141b6eb51:
    *(byte *)pfVar20 = 0;
    return pfVar20;
  case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x24:
    pfStack_30 = pfVar20;
    if (*(byte *)(param_2 + 1) == 0x68 && *param_2 == 4.508603e+21) {
      (&UNK_143398241)[lVar22] = 1;
      *(byte *)pfVar20 = 0;
      return pfVar20;
    }
    goto LAB_141b6ebc7;
  case 0x25:
    pfStack_30 = pfVar20;
    if (!bVar51) goto code_r0x000141b6eb02;
    (&UNK_1433981c3)[lVar22] = (&UNK_1433981c3)[lVar22] | 0x40;
    pfVar23 = (float *)0x0;
    if (((ulonglong)param_2 | 0x143398240) != 0) goto LAB_141b6ebc7;
    goto code_r0x000141b6eb6f;
  case 0x26:
    puVar1 = (uint *)(&UNK_1433981c9 + lVar22);
    *puVar1 = *puVar1 >> 0x10 | *puVar1 << 0x10;
    goto code_r0x000141b6ea3c;
  case 0x27:
    return pfVar20;
  case 0x29:
    *(byte *)pfVar20 = *(byte *)pfVar20 + bVar17;
    return pfVar20;
  case 0x30:
    if (bVar51) {
      pfVar20 = (float *)0xc6014888;
      goto code_r0x000141b6eb9b;
    }
    out(*param_1,uVar30);
    out(*(byte *)(param_1 + 1),uVar30);
    pfStack_30 = pfVar20;
    if (*(longlong *)((longlong)param_2 + 6) == 0x65686361635f6e6f &&
        *(longlong *)param_2 == 0x69736f70) {
      (&UNK_143398241)[lVar22] = 2;
      goto code_r0x000141b6eb51;
    }
    goto LAB_141b6ebc7;
  case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x32:
    goto code_r0x000141b6ebd2;
  case 0x33:
code_r0x000141b6eb9b:
    *(byte *)pfVar20 = *(byte *)pfVar20 + (char)pfVar20;
    return pfVar20;
  case 0x34:
    uVar56 = extraout_XMM0_Dc;
    uVar26 = extraout_XMM0_Dd;
    goto code_r0x000141b6ebbb;
  case 0x36:
    *(byte *)pfVar20 = *(byte *)pfVar20 + bVar17;
    pfVar28 = pfVar20;
    goto pdb_140f679a0;
  case 0x37:
    goto code_r0x000141b6ec51;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3e:
    pcVar8 = (code *)swi(3);
    pfVar20 = (float *)(*pcVar8)();
    return pfVar20;
  case 0x3b:
    puVar2 = (ulonglong *)(uVar49 - 0x48);
    uVar49 = *puVar2;
    *puVar2 = (ulonglong)(*puVar2 + (longlong)pfVar48);
    cVar18 = (char)((ulonglong)param_2 & 0xffffffff) + CARRY8(uVar49,(ulonglong)pfVar48);
    pcVar24 = (char *)CONCAT71((int7)(((ulonglong)param_2 & 0xffffffff) >> 8),cVar18);
    *pcVar24 = *pcVar24 + cVar18;
    goto pdb_140f679a0;
  case 0x3c:
    pcVar8 = (code *)swi(3);
    pfVar20 = (float *)(*pcVar8)();
    return pfVar20;
  case 0x3d:
    plVar37 = (longlong *)auStack_a0;
    lStack_68 = 0xfffffffffffffffe;
    pfVar48 = (float *)&UNK_143398240;
    lStack_70 = CONCAT71(_UNK_143398241,UNK_143398240);
    if (lStack_70 != -0x7fffffffffffffff) {
      pfStack_78 = (float *)&UNK_143398240;
      pdb_1409a45e0(&UNK_143398258);
      if (SBORROW8(0,lStack_70)) {
        return pfStack_78;
      }
      if (lStack_70 == 0) {
        return pfStack_78;
      }
      lVar22 = *(longlong *)(pfStack_78 + 2);
      uVar49 = 1;
      lVar31 = lStack_70;
      goto code_r0x0001406abac0;
    }
    if ((ulonglong)UNK_143398248 < 7) {
                    /* WARNING: Could not recover jumptable at 0x000141b6ef14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar20 = (float *)(*(code *)(&UNK_143398320 +
                                   *(int *)(&UNK_143398320 + (ulonglong)UNK_143398248 * 4)))();
      return pfVar20;
    }
    goto code_r0x0001409a45e0;
  case 0x3f:
    goto code_r0x000141b6ef92;
  case 0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x41:
  case 0x44:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
    pfStack_30 = pfVar20;
    if ((POPCOUNT((ulonglong)pfVar20 & 0xff) & 1U) != 0) {
      return pfVar20;
    }
    goto code_r0x000141b6f00e;
  case 0x42:
    uVar49 = (ulonglong)(uint)((int)param_2 << 5);
    goto code_r0x000141b6efef;
  case 0x43:
    in_R11 = (float *)0x0;
    param_1 = (float *)(ulonglong)((uint)uVar49 - 1);
    pbVar47 = &UNK_143398378;
    goto code_r0x000141b6f0bd;
  case 0x45:
    goto code_r0x000141b6f0b4;
  case 0x4d:
    goto code_r0x000141b6f015;
  case 0x4e:
  case 0x4f:
    uVar21 = *(undefined8 *)(pfVar48 + 6);
    uVar6 = *(undefined8 *)(pfVar48 + 8);
    *(undefined8 *)(unaff_RBP + -4) = uVar21;
    *(float **)(unaff_RBP + -6) = pfVar48;
    pdb_14098ae50(uVar21,uVar6);
    pfStack_30 = *(float **)(unaff_RBP + -6);
    param_2 = *(float **)(pfStack_30 + 4);
    goto code_r0x000141b6ef8d;
  case 0x50:
    goto code_r0x000141b6f02a;
  case 0x51:
  case 0x52:
  case 0x53:
    return pfVar20;
  case 0x54:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x55:
    *(byte *)pfVar20 = *(byte *)pfVar20 + bVar17;
    goto code_r0x000141b6f76f;
  case 0x56:
    goto code_r0x000141b6f747;
  case 0x57:
    goto code_r0x000141b6f75a;
  case 0x58:
    goto code_r0x000141b6f734;
  case 0x59:
    if (!bVar51 && -0x143398241 < lVar22) goto code_r0x000141b6f67a;
    *pfVar20 = (float)((int)*pfVar20 + (int)pfVar20);
    *(byte *)pfVar20 = *(byte *)pfVar20 + bVar17;
    goto code_r0x000141b6f78f;
  case 0x5a:
    plVar44 = &stack0xffffffffffffffa8;
    goto code_r0x000141b6f82f;
  case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5c:
    goto code_r0x000141b6f8f5;
  case 0x5d:
    goto code_r0x000141b6f92f;
  case 0x5e:
    goto code_r0x000141b6f89d;
  case 0x5f:
    goto code_r0x000141b6fa22;
  case 0x60:
    UNK_143398240 = UNK_143398240 & bVar17;
    pbVar47 = *(byte **)(param_1 + 4);
  case 99:
    pbVar47[*(longlong *)(param_1 + 2)] = 10;
    pbVar47 = pbVar47 + 1;
    *(byte **)(param_1 + 4) = pbVar47;
    if (unaff_R12 == 0) goto code_r0x000141b6f642;
    uVar49 = unaff_R15[2];
    if (uVar49 == 0) {
      *(byte **)(param_1 + 4) = pbVar47;
      if (*(byte **)param_1 == pbVar47) goto code_r0x000141b6f725;
    }
    else {
      uVar21 = unaff_R15[1];
      do {
        if ((ulonglong)(*(longlong *)param_1 - (longlong)pbVar47) < uVar49) {
          uStack_38 = 1;
          pdb_142d7f1b0(param_1,pbVar47,uVar49,1);
          pbVar47 = *(byte **)(param_1 + 4);
        }
        pub_142e32760(pbVar47 + *(longlong *)(param_1 + 2),uVar21,uVar49);
        pbVar47 = pbVar47 + uVar49;
        *(byte **)(param_1 + 4) = pbVar47;
        unaff_R12 = unaff_R12 + -1;
      } while (unaff_R12 != 0);
code_r0x000141b6f642:
      if (*(byte **)param_1 == pbVar47) {
code_r0x000141b6f725:
        uStack_38 = 1;
code_r0x000141b6f734:
        pdb_142d7f1b0(param_1,pbVar47);
        pbVar47 = *(byte **)(param_1 + 4);
      }
    }
    goto code_r0x000141b6f64b;
  case 0x61:
    *pfVar20 = (float)((int)*pfVar20 + (int)pfVar20);
    iRam0000000100002600 = CONCAT31(iRam0000000100002600._1_3_,(char)iRam0000000100002600 + '@');
    plVar44 = (longlong *)&stack0xffffffffffffffa0;
    pfVar20 = pfVar28;
    pfVar28 = param_1;
    fVar55 = unaff_XMM9_Da;
    goto code_r0x000141b6fb77;
  case 0x62:
    fVar54 = fVar54 * unaff_XMM7_Da;
    plVar41 = &stack0xffffffffffffffa8;
    fVar55 = unaff_XMM9_Da;
  case 100:
code_r0x000141b6f87d:
    fVar55 = fVar55 * unaff_XMM8_Da;
    plVar42 = plVar41;
code_r0x000141b6f8e9:
    fVar54 = (fVar54 - fVar55) * _DAT_142e37890;
    goto code_r0x000141b6f8f5;
  case 0x65:
    plVar44 = (longlong *)auStack_50;
    out(uVar30,(char)lStack_58);
    goto code_r0x000141b6f9ed;
  }
code_r0x000141b6d9b8:
  *(float **)(unaff_RBX + 10) = pfVar20;
  uVar21 = pdb_141653ab0(&uStack_38);
  fVar54 = (float)uVar21;
  uVar50 = (uint)uVar49;
  pfVar45 = (float *)(uStack_38 & 0xff);
  param_2 = (float *)&UNK_143398260;
  uVar29 = (ulonglong)*(int *)(&UNK_143398260 + (longlong)pfVar45 * 4);
  bVar52 = 0xfffffffebcc67d9f < uVar29;
  pfVar28 = (float *)(&UNK_143398260 + uVar29);
  bVar51 = pfVar28 == (float *)0x0;
  uVar27 = (uint)pfVar28;
  cVar18 = (char)pfStack_30;
  uVar19 = (uint)pfStack_30;
  pfVar20 = pfStack_30;
  pfVar23 = pfStack_30;
  plVar43 = &stack0xffffffffffffffa8;
  plVar39 = &stack0xffffffffffffffa8;
  plVar42 = &stack0xffffffffffffffa8;
  plVar41 = &stack0xffffffffffffffa8;
  uVar56 = extraout_XMM0_Dc_00;
  uVar26 = extraout_XMM0_Dd_00;
  fVar55 = unaff_XMM9_Da;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pfVar45) {
  case (float *)0x0:
  case (float *)0x1:
  case (float *)0x2:
  case (float *)0x3:
  case (float *)0x4:
  case (float *)0x5:
  case (float *)0x6:
    pfStack_30 = (float *)pdb_141654940(pfStack_30);
    if (pfStack_30 != (float *)0x0) goto code_r0x000141b6d9f4;
    *(byte *)(unaff_RBX + 0x12) = *(byte *)(unaff_RBX + 0x12) + 1;
    *(byte *)((longlong)param_1 + 1) = (byte)uStack_38;
    uVar49 = *(ulonglong *)(unaff_RBX + 10);
    if (*(ulonglong *)(unaff_RBX + 8) <= uVar49) goto code_r0x000141b6da4a;
    goto code_r0x000141b6da24;
  case (float *)0x7:
code_r0x000141b6d9f4:
    *(float **)(param_1 + 2) = pfStack_30;
    *(byte *)param_1 = 1;
    *(byte *)(unaff_RBX + 0x12) = *(byte *)(unaff_RBX + 0x12) + 1;
    return param_1;
  case (float *)0x8:
    pfVar20 = (float *)((ulonglong)pfVar28 & 0xffffffff);
    plVar44 = &stack0xffffffffffffffa8;
    switch(pfVar48) {
    case (float *)0x4:
      if (_UNK_143398260 == 0x656e6f4e) {
        *(byte *)((longlong)pfVar20 + 1) = 0;
        goto code_r0x000141b6e908;
      }
      bVar51 = _UNK_143398260 == 0x6c6c6157;
      goto code_r0x000141b6e858;
    case (float *)0x7:
      bVar51 = CONCAT31(_UNK_143398264,UNK_143398263) == 0x6e696172 && _UNK_143398260 == 0x72726554;
      goto code_r0x000141b6e8f6;
    case (float *)0x9:
      uVar49 = CONCAT44(_UNK_143398264,_UNK_143398260) ^ 0x756f72476c6c6157;
      goto code_r0x000141b6e880;
    case (float *)0xa:
      plVar44 = &stack0xffffffffffffffa8;
      if (_UNK_143398268 == 0x746e && CONCAT44(_UNK_143398264,_UNK_143398260) == 0x696f507269617453)
      {
        *(byte *)((longlong)pfVar20 + 1) = 5;
        goto code_r0x000141b6e908;
      }
      break;
    case (float *)0xb:
      pfVar28 = (float *)0x74756c436f636544;
      goto code_r0x000141b6e8a2;
    }
    break;
  case (float *)0x9:
  case (float *)0xa:
  case (float *)0xc:
    pfVar20 = (float *)(ulonglong)(uVar19 + *(int *)(&UNK_143398269 + uVar29));
    bVar51 = uVar19 + *(int *)(&UNK_143398269 + uVar29) == 0;
    pfVar33 = pfVar45 + 2;
code_r0x000141b6e8f6:
    plVar44 = (longlong *)pfVar33;
    if (bVar51) {
      *(byte *)((longlong)pfVar20 + 1) = 6;
      goto code_r0x000141b6e908;
    }
    break;
  case (float *)0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0xd:
    bVar51 = pbVar47[0x61] == 0x60;
    bVar17 = in(0x8260);
    *pbVar47 = bVar17;
    bVar17 = in(0x8260);
    pbVar47[1] = bVar17;
code_r0x000141b6e858:
    if (bVar51) {
      *(byte *)((longlong)pfVar20 + 1) = 1;
code_r0x000141b6e908:
      *(byte *)pfVar20 = 0;
      return pfVar20;
    }
    plVar44 = &stack0xffffffffffffffa8;
    if (*param_2 == 2.8267477e+23) {
      *(byte *)((longlong)pfVar20 + 1) = 2;
      goto code_r0x000141b6e908;
    }
    break;
  case (float *)0xe:
    bVar17 = in(0x8260);
    *pbVar47 = bVar17;
    pfVar28 = (float *)0x0;
    if (!bVar51) {
code_r0x000141b6e916:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x000141b6e8a2:
    plVar44 = &stack0xffffffffffffffa8;
    if (*(longlong *)((longlong)param_2 + 3) == 0x72657474756c436f && pfVar28 == *(float **)param_2)
    {
      *(byte *)((longlong)pfVar20 + 1) = 4;
      goto code_r0x000141b6e908;
    }
    break;
  case (float *)0xf:
    bVar17 = in(0x8260);
    *pbVar47 = bVar17;
    if (bVar52) {
      pcVar8 = (code *)swi(3);
      pfVar20 = (float *)(*pcVar8)();
      return pfVar20;
    }
    pfVar28 = (float *)0x0;
    if (!bVar51) {
      out(*param_1,0x8260);
      uVar26 = *(int *)((longlong)pfStack_30 + 0x33) * -0x48f0bbf6;
      pbVar47 = (byte *)((ulonglong)uVar26 - 0x7f);
      *pbVar47 = *pbVar47 | (byte)uVar26;
code_r0x000141b6e8d2:
      pcVar8 = (code *)swi(1);
      pfVar20 = (float *)(*pcVar8)();
      return pfVar20;
    }
code_r0x000141b6e87e:
    uVar49 = (ulonglong)((uint)pfVar28 ^ (uint)*param_2);
code_r0x000141b6e880:
    plVar44 = &stack0xffffffffffffffa8;
    if (*(byte *)(param_2 + 2) == 0x70 && uVar49 == 0) {
      *(byte *)((longlong)pfVar20 + 1) = 3;
      goto code_r0x000141b6e908;
    }
    break;
  case (float *)0x10:
    goto code_r0x000141b6e936;
  case (float *)0x11:
code_r0x000141b6e958:
    pfVar20 = pfStack_30;
    plVar35 = &stack0xffffffffffffffa8;
    switch(pfVar48) {
    case (float *)0x3:
      goto code_r0x000141b6e976;
    case (float *)0x4:
      if (*param_2 == 1.1430647e+27) {
        *(byte *)((longlong)pfStack_30 + 1) = 1;
        goto code_r0x000141b6ea0e;
      }
      if (*param_2 == 4.61621e+24) {
        *(byte *)((longlong)pfStack_30 + 1) = 2;
        goto code_r0x000141b6ea0e;
      }
      plVar35 = &stack0xffffffffffffffa8;
      if (*param_2 == 6.772068e+22) goto code_r0x000141b6e9b0;
      break;
    case (float *)0x5:
      uVar26 = *(byte *)(param_2 + 1) ^ 0x72 | (uint)*param_2 ^ 0x65746157;
code_r0x000141b6e9fc:
      pfVar20 = pfStack_30;
      plVar35 = &stack0xffffffffffffffa8;
      if (uVar26 == 0) {
        *(byte *)((longlong)pfStack_30 + 1) = 4;
        goto code_r0x000141b6ea0e;
      }
      break;
    case (float *)0x6:
      uVar27 = (uint)*param_2 ^ 0x64726147;
      uVar50 = *(ushort *)(param_2 + 1) ^ 0x6e65;
      goto code_r0x000141b6e9de;
    case (float *)0x8:
      plVar35 = &stack0xffffffffffffffa8;
      if (*(longlong *)param_2 == 0x657a6f646c6c7542) {
        *(byte *)((longlong)pfStack_30 + 1) = 3;
        goto code_r0x000141b6ea0e;
      }
    }
    goto LAB_141b6ea18;
  case (float *)0x12:
    plVar35 = &stack0xffffffffffffffa8;
    if ((&UNK_1433982c5)[(longlong)param_1 * 2] == '`') {
code_r0x000141b6e9b0:
      *(byte *)((longlong)pfStack_30 + 1) = 6;
      goto code_r0x000141b6ea0e;
    }
    goto LAB_141b6ea18;
  case (float *)0x13:
    pfVar34 = pfVar45 + 2;
    goto code_r0x000141b6e98c;
  case (float *)0x14:
    uVar27 = uVar27 ^ 0x6e65;
code_r0x000141b6e9de:
    pfVar20 = pfStack_30;
    plVar35 = &stack0xffffffffffffffa8;
    if (uVar50 == 0 && uVar27 == 0) {
      *(byte *)((longlong)pfStack_30 + 1) = 5;
      goto code_r0x000141b6ea0e;
    }
    goto LAB_141b6ea18;
  case (float *)0x15:
code_r0x000141b6e976:
    bVar51 = *(byte *)((longlong)param_2 + 2) == 0x6c && *(short *)param_2 == 0x6c41;
code_r0x000141b6e98c:
    pfVar20 = pfStack_30;
    plVar35 = (longlong *)pfVar34;
    if (bVar51) {
      *(byte *)((longlong)pfStack_30 + 1) = 0;
code_r0x000141b6ea0e:
      *(byte *)pfStack_30 = 0;
      return pfStack_30;
    }
LAB_141b6ea18:
code_r0x000141b6ea2b:
    *(undefined8 *)((longlong)plVar35 + -8) = 0x141b6ea36;
    pfVar28 = (float *)pdb_142d8f140(param_2);
    param_1 = pfVar20;
code_r0x000141b6ea3c:
    *(float **)(param_1 + 2) = pfVar28;
    *(byte *)pfVar20 = 1;
    return pfVar20;
  case (float *)0x16:
    pfVar20 = (float *)(ulonglong)(uVar19 + 0x1829301 + (uint)bVar52);
    goto code_r0x000141b6ea2b;
  default:
code_r0x000141b6eb6f:
    pfVar28 = (float *)0x0;
  case (float *)0x2d:
    *(byte *)((longlong)pfVar23 + 1) = (byte)pfVar28;
    *(byte *)pfVar23 = 0;
    return pfVar23;
  case (float *)0x18:
    if (bVar51) {
      *(byte *)((longlong)pfStack_30 + 1) = 0;
      *(byte *)pfStack_30 = 0;
      return pfStack_30;
    }
    goto LAB_141b6ebc7;
  case (float *)0x1b:
    goto code_r0x000141b6ea3c;
  case (float *)0x1c:
    pfVar28 = (float *)0x63746970;
code_r0x000141b6eb02:
    if (param_2[2] == 7.2715853e+31 && SUB84(pfVar28,0) == *param_2) goto code_r0x000141b6eb1c;
    goto LAB_141b6ebc7;
  case (float *)0x1d:
    *(byte *)pfStack_30 = *(byte *)pfStack_30 + cVar18;
code_r0x000141b6eb1c:
    *(byte *)((longlong)pfStack_30 + 1) = 4;
    *(byte *)pfStack_30 = 0;
    return pfStack_30;
  case (float *)0x1e:
    if (uVar19 < 0x13) {
                    /* WARNING: Could not recover jumptable at 0x000141b6ea6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar20 = (float *)(*(code *)(&UNK_1433982b8 +
                                   *(int *)(&UNK_1433982b8 + (longlong)pfVar48 * 4)))
                                   (&UNK_1433982b8,&UNK_143398260,
                                    &UNK_1433982b8 +
                                    *(int *)(&UNK_1433982b8 + (longlong)pfVar48 * 4));
      return pfVar20;
    }
    goto LAB_141b6ebc7;
  case (float *)0x1f:
    *pfStack_30 = (float)((int)*pfStack_30 + uVar19);
    *(char *)(uVar29 + 0x144820a62) = *(char *)(uVar29 + 0x144820a62) + -0x7e;
    *(byte *)pfStack_30 = 0;
    return pfStack_30;
  case (float *)0x21:
    puVar36 = (undefined8 *)&stack0xffffffffffffffa0;
    cVar7 = '\x12';
    do {
      pfVar45 = pfVar45 + -2;
      puVar36 = puVar36 + -1;
      *puVar36 = *(undefined8 *)pfVar45;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    *(byte *)pfStack_30 = *(byte *)pfStack_30 + cVar18;
    *(char *)(uVar29 + 0x144820a61) = *(char *)(uVar29 + 0x144820a61) + -0x7e;
    *(byte *)pfStack_30 = 0;
    return pfStack_30;
  case (float *)0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x2a:
    *(uint *)(&UNK_1433982c3 + uVar29) = *(int *)(&UNK_1433982c3 + uVar29) + uVar27;
                    /* WARNING: Could not recover jumptable at 0x000141b6ebfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar20 = (float *)(*(code *)(pfVar48 + 0x50ce6098))(pfVar28,pfVar48 + 0x50ce6098);
    return pfVar20;
  case (float *)0x2b:
code_r0x000141b6ebbb:
    auVar9._8_4_ = uVar56;
    auVar9._0_8_ = uVar21;
    auVar9._12_4_ = uVar26;
    auVar10._8_4_ = uVar56;
    auVar10._0_8_ = uVar21;
    auVar10._12_4_ = uVar26;
    auVar11._8_4_ = uVar56;
    auVar11._0_8_ = uVar21;
    auVar11._12_4_ = uVar26;
    auVar12._8_4_ = uVar56;
    auVar12._0_8_ = uVar21;
    auVar12._12_4_ = uVar26;
    auVar13._8_4_ = uVar56;
    auVar13._0_8_ = uVar21;
    auVar13._12_4_ = uVar26;
    auVar14._8_4_ = uVar56;
    auVar14._0_8_ = uVar21;
    auVar14._12_4_ = uVar26;
    auVar15._8_4_ = uVar56;
    auVar15._0_8_ = uVar21;
    auVar15._12_4_ = uVar26;
    auVar16._8_4_ = uVar56;
    auVar16._0_8_ = uVar21;
    auVar16._12_4_ = uVar26;
    pfStack_30 = pfVar20;
    if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)((byte)(CONCAT44(uVar26,uVar56) >> 7) & 1) << 8 |
                 (ushort)((byte)(CONCAT44(uVar26,uVar56) >> 0xf) & 1) << 9 |
                 (ushort)((byte)(CONCAT44(uVar26,uVar56) >> 0x17) & 1) << 10 |
                 (ushort)((byte)(CONCAT44(uVar26,uVar56) >> 0x1f) & 1) << 0xb |
                 (ushort)((byte)(uVar26 >> 7) & 1) << 0xc |
                 (ushort)((byte)(uVar26 >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(uVar26 >> 0x17) & 1) << 0xe | (ushort)(byte)(uVar26 >> 0x1f) << 0xf
                ) == 0xffff) {
      pfVar28 = (float *)0x3;
code_r0x000141b6ebd2:
      *(byte *)((longlong)pfVar20 + 1) = (byte)pfVar28;
      *(byte *)pfVar20 = 0;
      return pfVar20;
    }
LAB_141b6ebc7:
    *(byte *)((longlong)pfStack_30 + 1) = 6;
    *(byte *)pfStack_30 = 0;
    return pfStack_30;
  case (float *)0x2c:
    pcVar8 = (code *)swi(3);
    pfVar20 = (float *)(*pcVar8)();
    return pfVar20;
  case (float *)0x2e:
    pfVar20 = (float *)((ulonglong)pfStack_30 & 0xffffffffffffff30);
    pfStack_30 = (float *)&stack0xffffffffffffffe8;
    uStack_38 = 0xc;
code_r0x000141b6ec51:
    pfVar20 = (float *)pdb_140f66e50(pfVar20);
    return pfVar20;
  case (float *)0x2f:
    pfVar20 = (float *)pdb_140f66090((ulonglong)pfStack_30 & 0xffffffffffffff20,&UNK_143397c74,4,
                                     &stack0xffffffffffffffe8);
    return pfVar20;
  case (float *)0x30:
  case (float *)0x31:
  case (float *)0x32:
  case (float *)0x36:
    *pfStack_30 = (float)((int)*pfStack_30 + uVar19);
    *(byte *)pfStack_30 = *(byte *)pfStack_30 + cVar18;
    *(byte *)pfStack_30 = *(byte *)pfStack_30 + cVar18;
  case (float *)0x35:
    *(byte *)(pfStack_30 + 0x1d704e52) = *(byte *)(pfStack_30 + 0x1d704e52) + cVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x33:
    pbVar47[1] = *(byte *)((longlong)param_1 + 1);
    puVar2 = (ulonglong *)(&UNK_143398218 + uVar29);
    uVar49 = *puVar2;
    *puVar2 = (ulonglong)(*puVar2 + (longlong)pfVar48);
    cVar18 = cVar18 + *(byte *)pfStack_30 + CARRY8(uVar49,(ulonglong)pfVar48);
    pcVar24 = (char *)CONCAT71((int7)((ulonglong)pfStack_30 >> 8),cVar18);
    *pcVar24 = *pcVar24 + cVar18;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar20 = (float *)(**(code **)(*(longlong *)(pfVar28 + 2) + 0x18))(*(undefined8 *)pfVar28);
    return pfVar20;
  case (float *)0x34:
    pcVar8 = (code *)swi(3);
    pfVar20 = (float *)(*pcVar8)();
    return pfVar20;
  case (float *)0x37:
    *(byte *)pfStack_30 =
         *(byte *)pfStack_30 << 3 | (byte)(CONCAT11(bVar52,*(byte *)pfStack_30) >> 6);
code_r0x0001409a45e0:
    *(undefined8 *)((longlong)plVar37 + 0x40) = *(undefined8 *)((longlong)plVar37 + 0x40);
    *(float **)((longlong)plVar37 + 0x38) = param_1;
    *(byte **)((longlong)plVar37 + 0x30) = pbVar47;
    *(float **)((longlong)plVar37 + 0x28) = unaff_RBX;
    *(undefined8 *)((longlong)plVar37 + 0x20) = 0xfffffffffffffffe;
    lVar22 = *(longlong *)(pfVar48 + 4);
    if (lVar22 == 0) {
      uVar21 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(pfVar48 + 6);
      uVar21 = *(undefined8 *)(pfVar48 + 8);
      *(undefined8 *)((longlong)plVar37 + -0x48) = 0;
      *(longlong *)((longlong)plVar37 + -0x40) = lVar22;
      *(undefined8 *)((longlong)plVar37 + -0x38) = uVar6;
      *(undefined8 *)((longlong)plVar37 + -0x28) = 0;
      *(longlong *)((longlong)plVar37 + -0x20) = lVar22;
      *(undefined8 *)((longlong)plVar37 + -0x18) = uVar6;
    }
    uVar49 = (ulonglong)(lVar22 != 0);
    *(ulonglong *)((longlong)plVar37 + -0x50) = uVar49;
    *(ulonglong *)((longlong)plVar37 + -0x30) = uVar49;
    *(undefined8 *)((longlong)plVar37 + -0x10) = uVar21;
    puVar40 = (undefined1 *)((longlong)plVar37 + -0x50);
    *(undefined8 *)((longlong)plVar37 + -0x78) = 0x1409a4652;
    pdb_14192c4b0((undefined1 *)((longlong)plVar37 + -8),puVar40);
    lVar22 = *(longlong *)((longlong)plVar37 + -8);
    if (lVar22 != 0) {
      do {
        lVar31 = *(longlong *)((longlong)plVar37 + 8);
        *(undefined1 **)((longlong)plVar37 + 0x18) = puVar40;
        *(longlong *)((longlong)plVar37 + 0x10) = lVar31 * 0x20 + lVar22;
        uVar49 = *(ulonglong *)(lVar22 + 0x168 + lVar31 * 0x18);
        if (uVar49 != 0) {
          pbVar47 = *(byte **)(lVar22 + lVar31 * 0x18 + 0x170);
          *(undefined8 *)((longlong)plVar37 + -0x78) = 0x1409a46ad;
          pub_1406abac0(pbVar47,uVar49,1);
        }
        *(undefined8 *)((longlong)plVar37 + -0x78) = 0x1409a46b6;
        pdb_140966d70((longlong *)((longlong)plVar37 + 0x10));
        *(undefined8 *)((longlong)plVar37 + -0x78) = 0x1409a46c2;
        pdb_14192c4b0((undefined1 *)((longlong)plVar37 + -8),puVar40);
        lVar22 = *(longlong *)((longlong)plVar37 + -8);
      } while (lVar22 != 0);
    }
    return (float *)0x0;
  case (float *)0x38:
    goto code_r0x000141b6f072;
  case (float *)0x39:
  case (float *)0x3c:
  case (float *)0x3e:
  case (float *)0x3f:
  case (float *)0x40:
  case (float *)0x41:
  case (float *)0x42:
  case (float *)0x43:
  case (float *)0x44:
    in_R10 = (ulonglong)*(byte *)pfVar28;
    if (0xe < in_R10) {
      pfVar20 = (float *)0x0;
      do {
        if (*(byte *)(pfVar20 + 0x50ce6098) == *(byte *)pfVar28) {
          return (float *)0x1;
        }
        bVar51 = pfVar48 + -6 != pfVar20;
        pfVar20 = pfVar20 + 6;
      } while (bVar51);
      return (float *)0x0;
    }
code_r0x000141b6f072:
                    /* WARNING: Could not recover jumptable at 0x000141b6f08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar20 = (float *)(*(code *)(&UNK_14339833c + *(int *)(&UNK_14339833c + in_R10 * 4)))
                                 (*(undefined8 *)(&UNK_143398270 + uVar29));
    return pfVar20;
  case (float *)0x3a:
    *(byte *)pfStack_30 = *(byte *)pfStack_30 + cVar18;
code_r0x000141b6f00e:
    *(byte *)pfStack_30 = *(byte *)pfStack_30 + (char)pfStack_30;
    pfStack_48 = param_2;
code_r0x000141b6f015:
    plVar39 = (longlong *)auStack_80;
    unaff_RBP = param_2 + 0x10;
    pfVar20 = (float *)(*(longlong *)(param_2 + 0xc) * 2);
code_r0x000141b6f02a:
    if (pfVar20 == (float *)0x0) {
      return (float *)0x0;
    }
    pfStack_30 = *(float **)(unaff_RBP + -6);
    pfVar45 = unaff_RBP;
  case (float *)0x45:
    pbVar47 = *(byte **)(pfStack_30 + 2);
    uVar49 = *(ulonglong *)(pfVar45 + -4);
    *(undefined **)((longlong)plVar39 + -8) = &UNK_141b6f046;
    pub_1406abac0(pbVar47,uVar49,1);
    return extraout_RAX_00;
  case (float *)0x3b:
    *(byte *)pfStack_30 = *(byte *)pfStack_30 + cVar18;
    do {
      in_R11 = in_R11 + 6;
code_r0x000141b6f0b4:
      if (pfVar48 == in_R11) {
        return (float *)0x0;
      }
code_r0x000141b6f0bd:
    } while ((*(byte *)((longlong)param_2 + (longlong)in_R11) != 0) ||
            (*(int *)((longlong)(param_2 + 2) + (longlong)in_R11) != (int)uVar49));
  case (float *)0x3d:
    goto code_r0x000141b6f0cb;
  case (float *)0x46:
  case (float *)0x47:
code_r0x000141b6ef8d:
    if (param_2 == (float *)0x0) {
      return pfStack_30;
    }
code_r0x000141b6ef92:
    uVar49 = 8;
    lVar22 = *(longlong *)(pfVar45 + -4);
    plVar32 = (longlong *)&stack0xfffffffffffffff0;
    lVar31 = (longlong)param_2 << 5;
code_r0x0001406abac0:
    *(float **)((longlong)plVar32 + -8) = unaff_RBP;
    *(float **)((longlong)plVar32 + -0x10) = param_1;
    lVar46 = lVar22;
    if (0x10 < uVar49) {
      lVar46 = *(longlong *)(lVar22 + -8);
    }
    *(undefined **)((longlong)plVar32 + -0x40) = &UNK_140f3c37e;
    uVar21 = GetProcessHeap(lVar22,lVar31);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar20 = (float *)HeapFree(uVar21,0,lVar46);
    return pfVar20;
  case (float *)0x48:
    *(byte *)((longlong)pfVar45 + -0x3d) = *(byte *)((longlong)pfVar45 + -0x3d) & (byte)unaff_RBX;
    pcVar8 = (code *)swi(3);
    pfVar20 = (float *)(*pcVar8)();
    return pfVar20;
  case (float *)0x49:
  case (float *)0x4a:
  case (float *)0x4b:
    pfStack_48 = (float *)&UNK_143398260;
    plVar38 = (longlong *)auStack_80;
    unaff_RBP = (float *)&UNK_1433982a0;
    pfVar20 = _UNK_143398288;
    if (*(longlong *)(_UNK_143398288 + 4) != 0) {
      uVar49 = *(longlong *)(_UNK_143398288 + 4) << 5;
code_r0x000141b6efef:
      pbVar47 = *(byte **)(unaff_RBP + -4);
      *(undefined **)((longlong)plVar38 + -8) = &UNK_141b6effe;
      pub_1406abac0(pbVar47,uVar49,8);
      pfVar20 = extraout_RAX;
    }
    return pfVar20;
  case (float *)0x4c:
    pbVar47 = (byte *)0x67304c00;
    pbVar3 = (byte *)((longlong)pfStack_30 + -0x75);
    bVar53 = SCARRY4(*(int *)pbVar3,uVar27);
    *(uint *)pbVar3 = *(int *)pbVar3 + uVar27;
    bVar52 = *(int *)pbVar3 < 0;
    bVar51 = *(int *)pbVar3 == 0;
code_r0x000141b6f747:
    if (bVar51 || bVar53 != bVar52) {
      *(byte *)((longlong)param_2 + 0x28ba01) = (byte)pfVar20;
      *(byte *)pfVar20 = *(byte *)pfVar20 + (byte)pfVar20;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0();
    }
code_r0x000141b6f64b:
    pbVar47[*(longlong *)(param_1 + 2)] = 0x7d;
    *(byte **)(param_1 + 4) = pbVar47 + 1;
    *(undefined1 *)(unaff_R15 + 4) = 1;
    param_1 = (float *)*unaff_R15;
    unaff_R12 = unaff_R15[3] + -1;
    unaff_R15[3] = unaff_R12;
    pbVar47 = *(byte **)(param_1 + 4);
    if (*(byte **)param_1 == pbVar47) {
      uStack_38 = 1;
code_r0x000141b6f76f:
      pdb_142d7f1b0(param_1,pbVar47,1,1);
      pbVar47 = *(byte **)(param_1 + 4);
    }
code_r0x000141b6f67a:
    pbVar47[*(longlong *)(param_1 + 2)] = 10;
    pbVar47 = pbVar47 + 1;
    *(byte **)(param_1 + 4) = pbVar47;
    if (unaff_R12 != 0) {
      uVar49 = unaff_R15[2];
      if (uVar49 == 0) {
        *(byte **)(param_1 + 4) = pbVar47;
      }
      else {
        uVar21 = unaff_R15[1];
        do {
          if ((ulonglong)(*(longlong *)param_1 - (longlong)pbVar47) < uVar49) {
            uStack_38 = 1;
            pdb_142d7f1b0(param_1,pbVar47,uVar49,1);
            pbVar47 = *(byte **)(param_1 + 4);
          }
          pub_142e32760(pbVar47 + *(longlong *)(param_1 + 2),uVar21,uVar49);
          pbVar47 = pbVar47 + uVar49;
          *(byte **)(param_1 + 4) = pbVar47;
          unaff_R12 = unaff_R12 + -1;
        } while (unaff_R12 != 0);
      }
    }
    if (*(byte **)param_1 == pbVar47) {
code_r0x000141b6f78f:
      uStack_38 = 1;
      pdb_142d7f1b0(param_1,pbVar47,1,1);
      pbVar47 = *(byte **)(param_1 + 4);
    }
    pfVar20 = *(float **)(param_1 + 2);
    *(byte *)((longlong)pfVar20 + (longlong)pbVar47) = 0x7d;
    *(byte **)(param_1 + 4) = pbVar47 + 1;
    return pfVar20;
  case (float *)0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x4e:
    uStack_38 = CONCAT44(uStack_38._4_4_,1);
    goto code_r0x000141b6f76f;
  case (float *)0x4f:
    *(byte *)((longlong)pfStack_30 + -0x77) =
         *(byte *)((longlong)pfStack_30 + -0x77) + (char)pfVar28;
    pcVar8 = (code *)swi(1);
    pfVar20 = (float *)(*pcVar8)();
    return pfVar20;
  case (float *)0x50:
    pbVar47 = (byte *)((longlong)pfVar45 + (longlong)pfVar28 * 4 + 5);
    *(uint *)pbVar47 = *(int *)pbVar47 + uVar27;
code_r0x000141b6f75a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x51:
    goto code_r0x000141b6f78f;
  case (float *)0x52:
    unaff_XMM7_Da = pfStack_30[2];
    unaff_XMM7_Db = pfStack_30[3];
    unaff_XMM7_Dc = pfStack_30[4];
    unaff_XMM7_Dd = pfStack_30[5];
    plVar44 = &stack0xffffffffffffffa8;
    goto code_r0x000141b6f82f;
  case (float *)0x53:
    plVar44 = &stack0xffffffffffffffa8;
    goto code_r0x000141b6f9c6;
  case (float *)0x54:
    goto code_r0x000141b6f913;
  case (float *)0x55:
    pfVar20 = pfVar28;
    pfVar28 = param_1;
    goto code_r0x000141b6fb77;
  case (float *)0x56:
    goto code_r0x000141b6f8bd;
  case (float *)0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x58:
    in(0x8260);
    puVar40 = &stack0xffffffffffffffa0;
    goto code_r0x000141b6f823;
  case (float *)0x59:
    goto code_r0x000141b6fa13;
  case (float *)0x5a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x5b:
    (pbVar47 + 0x29)[(longlong)pfVar28] = (pbVar47 + 0x29)[(longlong)pfVar28] + cVar18;
    cVar18 = cRam24ac290f44000000;
    uVar25 = (undefined7)(CONCAT62((int6)((ulonglong)pfStack_30 >> 0x10),0x2400) >> 8);
    pcVar24 = (char *)CONCAT71(uVar25,cRam24ac290f44000000);
    *pcVar24 = *pcVar24 + cRam24ac290f44000000;
    (pbVar47 + 0x29)[(longlong)pfVar28] = (pbVar47 + 0x29)[(longlong)pfVar28] + cVar18;
    *pbVar47 = *(byte *)param_1;
    pcVar24 = (char *)(CONCAT71(uVar25,cVar18) & 0xffffffffffffff80);
    *pcVar24 = *pcVar24 + (char)pcVar24;
    (pbVar47 + 0x2a)[(longlong)pfVar28] = (pbVar47 + 0x2a)[(longlong)pfVar28] + (char)pcVar24;
    puVar40 = puRam000000000000b024;
code_r0x000141b6f823:
    *(float *)(puVar40 + 0x60) = unaff_XMM10_Da;
    *(undefined4 *)(puVar40 + 100) = unaff_XMM10_Db;
    *(undefined4 *)(puVar40 + 0x68) = unaff_XMM10_Dc;
    *(undefined4 *)(puVar40 + 0x6c) = unaff_XMM10_Dd;
    *(float *)(puVar40 + 0x50) = unaff_XMM9_Da;
    *(undefined4 *)(puVar40 + 0x54) = unaff_XMM9_Db;
    *(undefined4 *)(puVar40 + 0x58) = unaff_XMM9_Dc;
    *(undefined4 *)(puVar40 + 0x5c) = unaff_XMM9_Dd;
    plVar44 = (longlong *)puVar40;
code_r0x000141b6f82f:
    *(float *)((longlong)plVar44 + 0x40) = unaff_XMM8_Da;
    *(undefined4 *)((longlong)plVar44 + 0x44) = unaff_XMM8_Db;
    *(undefined4 *)((longlong)plVar44 + 0x48) = unaff_XMM8_Dc;
    *(undefined4 *)((longlong)plVar44 + 0x4c) = unaff_XMM8_Dd;
    *(float *)((longlong)plVar44 + 0x30) = unaff_XMM7_Da;
    *(float *)((longlong)plVar44 + 0x34) = unaff_XMM7_Db;
    *(float *)((longlong)plVar44 + 0x38) = unaff_XMM7_Dc;
    *(float *)((longlong)plVar44 + 0x3c) = unaff_XMM7_Dd;
    *(float *)((longlong)plVar44 + 0x20) = unaff_XMM6_Da;
    *(undefined4 *)((longlong)plVar44 + 0x24) = unaff_XMM6_Db;
    *(undefined4 *)((longlong)plVar44 + 0x28) = unaff_XMM6_Dc;
    *(undefined4 *)((longlong)plVar44 + 0x2c) = unaff_XMM6_Dd;
    unaff_XMM10_Da = *pfVar48;
    unaff_XMM8_Da = pfVar48[1];
    fVar55 = pfVar48[3];
    unaff_XMM7_Da = pfVar48[2];
    pbVar47 = (byte *)((ulonglong)param_2 & 0xff);
    pfVar20 = (float *)(&UNK_143398390 + *(int *)(&UNK_143398390 + (longlong)pbVar47 * 4));
    plVar41 = plVar44;
    param_1 = pfVar28;
    unaff_XMM9_Da = fVar55;
    unaff_XMM12_Da = unaff_XMM10_Da;
    plVar42 = plVar44;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(pbVar47) {
    case (byte *)0x0:
      fVar54 = unaff_XMM10_Da * unaff_XMM7_Da;
      goto code_r0x000141b6f87d;
    case (byte *)0x1:
code_r0x000141b6f8bd:
      fVar54 = unaff_XMM8_Da * unaff_XMM7_Da;
      fVar55 = fVar55 * unaff_XMM12_Da;
      plVar42 = plVar41;
      goto code_r0x000141b6f8ce;
    case (byte *)0x2:
      fVar54 = unaff_XMM8_Da * unaff_XMM7_Da;
      fVar55 = fVar55 * unaff_XMM10_Da;
      goto code_r0x000141b6f8e9;
    case (byte *)0x3:
      fVar54 = unaff_XMM10_Da * unaff_XMM8_Da;
      fVar55 = fVar55 * unaff_XMM7_Da;
      goto code_r0x000141b6f8ce;
    case (byte *)0x4:
      fVar54 = unaff_XMM10_Da * unaff_XMM7_Da;
      fVar55 = fVar55 * unaff_XMM8_Da;
code_r0x000141b6f8ce:
      fVar54 = fVar55 + fVar54 + fVar55 + fVar54;
code_r0x000141b6f8f5:
      fVar55 = _DAT_142e36f34;
      if (_DAT_142e36f34 <= fVar54) {
        fVar55 = fVar54;
      }
      fVar54 = _DAT_142e36f28;
      unaff_XMM11_Da = _DAT_142e36f28;
      if (fVar55 <= _DAT_142e36f28) {
        fVar54 = fVar55;
        unaff_XMM11_Da = fVar55;
      }
code_r0x000141b6f913:
      *(undefined **)((longlong)plVar42 + -8) = &UNK_141b6f918;
      pub_142e32960(fVar54);
      if ((float)(_DAT_142e377e0 & (uint)unaff_XMM11_Da) <= _DAT_143058d40) {
code_r0x000141b6f965:
                    /* WARNING: Could not recover jumptable at 0x000141b6f993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar20 = (float *)(*(code *)(&UNK_1433983a8 +
                                     *(int *)(&UNK_1433983a8 + (longlong)pbVar47 * 4)))
                                     (&UNK_1433983a8 +
                                      *(int *)(&UNK_1433983a8 + (longlong)pbVar47 * 4));
        return pfVar20;
      }
code_r0x000141b6f92f:
                    /* WARNING: Could not recover jumptable at 0x000141b6f952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar20 = (float *)(*(code *)(&UNK_1433983c0 +
                                   *(int *)(&UNK_1433983c0 + (longlong)pbVar47 * 4)))
                                   (&UNK_1433983c0 +
                                    *(int *)(&UNK_1433983c0 + (longlong)pbVar47 * 4));
      return pfVar20;
    case (byte *)0x5:
      fVar54 = unaff_XMM10_Da * unaff_XMM8_Da;
      fVar55 = fVar55 * unaff_XMM7_Da;
      goto code_r0x000141b6f8e9;
    case (byte *)0x6:
      goto code_r0x000141b6f965;
    case (byte *)0x7:
      unaff_XMM13_Da = unaff_XMM13_Da - unaff_XMM10_Da;
      goto code_r0x000141b6fafa;
    case (byte *)0x8:
code_r0x000141b6fa43:
      unaff_XMM7_Da = (unaff_XMM8_Da - unaff_XMM7_Da * fVar55) * _DAT_142e37890;
      unaff_XMM13_Da = ((unaff_XMM13_Da + unaff_XMM10_Da) - unaff_XMM15_Da) - unaff_XMM14_Da;
      break;
    case (byte *)0x9:
      fVar55 = unaff_XMM7_Da * fVar55 + unaff_XMM8_Da * unaff_XMM10_Da;
      unaff_XMM7_Da = fVar55 + fVar55;
code_r0x000141b6fafa:
      unaff_XMM13_Da = (unaff_XMM13_Da + unaff_XMM15_Da) - unaff_XMM14_Da;
      break;
    case (byte *)0xa:
      goto code_r0x000141b6f9ed;
    case (byte *)0xb:
      *(int *)(&UNK_14339839f + *(int *)(&UNK_143398390 + (longlong)pbVar47 * 4)) =
           *(int *)(&UNK_14339839f + *(int *)(&UNK_143398390 + (longlong)pbVar47 * 4)) + 0x43398390;
code_r0x000141b6fb77:
      *(undefined **)((longlong)plVar44 + -8) = &UNK_141b6fb80;
      fVar55 = (float)pub_142e32980(pfVar20,fVar55);
      unaff_XMM11_Da = unaff_XMM11_Da * fVar55;
      fVar55 = 0.0;
      goto code_r0x000141b6fbef;
    case (byte *)0xc:
      *(longlong **)((longlong)plVar44 + -8) = plVar44;
      return (float *)&UNK_143398390;
    case (byte *)0xd:
      unaff_XMM7_Da = (unaff_XMM7_Da * unaff_XMM10_Da - unaff_XMM8_Da * fVar55) * _DAT_142e37890;
      unaff_XMM13_Da = (unaff_XMM13_Da - unaff_XMM15_Da) + unaff_XMM14_Da;
      break;
    case (byte *)0xe:
code_r0x000141b6f9c6:
      fVar55 = unaff_XMM12_Da * unaff_XMM9_Da + unaff_XMM8_Da * unaff_XMM7_Da;
      unaff_XMM13_Da = ((unaff_XMM13_Da - unaff_XMM10_Da) - unaff_XMM15_Da) + unaff_XMM14_Da;
      unaff_XMM12_Da = fVar55 + fVar55;
      unaff_XMM11_Da = fVar54;
      goto code_r0x000141b6f9ed;
    case (byte *)0xf:
      *(int *)((longlong)pfVar28 + 0x36) = *(int *)((longlong)pfVar28 + 0x36) + (int)pfVar28;
      goto code_r0x000141b6f92f;
    case (byte *)0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000141b6fbe6;
  case (float *)0x5c:
code_r0x000141b6f89d:
    *(undefined4 *)(lStack_58 + 0xf) = 0x41f3c928;
    fVar55 = in_XMM1_Da * in_XMM4_Da;
    plVar42 = (longlong *)auStack_50;
    goto code_r0x000141b6f8e9;
  case (float *)0x5d:
    plVar43 = (longlong *)auStack_50;
    *(undefined4 *)(lStack_58 + 0xf) = 0x41f3c928;
    goto code_r0x000141b6fa13;
  }
  *(undefined8 *)((longlong)plVar44 + -8) = 0x141b6e930;
  pfVar28 = (float *)pdb_142d8f140(param_2,pfVar48,&UNK_143397cb0,7);
  param_1 = pfVar20;
code_r0x000141b6e936:
  *(float **)(param_1 + 2) = pfVar28;
  *(byte *)pfVar20 = 1;
  return pfVar20;
code_r0x000141b6d93e:
  *(float **)(param_2 + 10) = pfVar20;
  if (pfVar20 == *(float **)(param_2 + 8)) goto LAB_141b6d952;
  goto LAB_141b6d92c;
code_r0x000141b6fa13:
  fVar54 = (fVar54 - in_XMM1_Da * in_XMM4_Da) * _DAT_142e37890;
code_r0x000141b6fa22:
  *(undefined **)((longlong)plVar43 + -8) = &UNK_141b6fa3a;
  unaff_XMM11_Da =
       (float)pub_142e32980(fVar54,((unaff_XMM13_Da - unaff_XMM10_Da) - unaff_XMM15_Da) +
                                   unaff_XMM14_Da);
  unaff_XMM8_Da = unaff_XMM8_Da * unaff_XMM12_Da;
  plVar44 = plVar43;
  pfVar28 = param_1;
  fVar55 = unaff_XMM9_Da;
  goto code_r0x000141b6fa43;
code_r0x000141b6da24:
  uVar49 = uVar49 + 1;
  bVar17 = *(byte *)(*(longlong *)(unaff_RBX + 6) + -1 + uVar49);
  if ((0x20 < (ulonglong)bVar17) || (((ulonglong)pbVar47 >> ((ulonglong)bVar17 & 0x3f) & 1) == 0)) {
    if (bVar17 == 0x7d) {
      *(ulonglong *)(unaff_RBX + 10) = uVar49;
code_r0x000141b6daa2:
      bVar17 = 0;
      goto code_r0x000141b6daa4;
    }
    uStack_38 = 10;
    goto code_r0x000141b6da53;
  }
  *(ulonglong *)(unaff_RBX + 10) = uVar49;
  if (uVar49 == *(ulonglong *)(unaff_RBX + 8)) {
code_r0x000141b6da4a:
    uStack_38 = 3;
code_r0x000141b6da53:
    uVar21 = pdb_142d855a0(unaff_RBX,&uStack_38);
    *(undefined8 *)(param_1 + 2) = uVar21;
    bVar17 = 1;
code_r0x000141b6daa4:
    *(byte *)param_1 = bVar17;
    return param_1;
  }
  goto code_r0x000141b6da24;
code_r0x000141b6f0cb:
  if (5 < (uint)param_1) {
    return (float *)0x1;
  }
                    /* WARNING: Could not recover jumptable at 0x000141b6f0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pfVar20 = (float *)(*(code *)(pbVar47 + *(int *)(pbVar47 + (longlong)param_1 * 4)))();
  return pfVar20;
code_r0x000141b6f9ed:
  unaff_XMM7_Da = unaff_XMM12_Da;
  pfVar28 = param_1;
code_r0x000141b6fbe6:
  *(undefined **)((longlong)plVar44 + -8) = &UNK_141b6fbef;
  fVar55 = (float)pub_142e32980(unaff_XMM7_Da,unaff_XMM13_Da);
code_r0x000141b6fbef:
  *pfVar28 = unaff_XMM11_Da;
  pfVar28[1] = unaff_XMM6_Da;
  pfVar28[2] = fVar55;
  return pfVar28;
}

