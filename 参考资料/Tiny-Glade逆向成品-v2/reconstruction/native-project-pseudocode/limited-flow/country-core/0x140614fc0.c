// VA 0x140614fc0, PDB extent 461 bytes
// country_core::resources::session::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140615b0c) overlaps instruction at (ram,0x000140615b0a)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 461 */

code * pdb_140614fc0(code *param_1,ulonglong *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  byte *arg0;
  char unaff_00084f00;
  undefined8 *unaff_0008ae00;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [11];
  undefined1 auVar7 [12];
  undefined1 auVar8 [13];
  undefined1 auVar9 [14];
  code cVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined7 uVar15;
  code *pcVar14;
  ulonglong *puVar16;
  int *piVar17;
  longlong lVar18;
  undefined6 uVar22;
  ulonglong *puVar19;
  ulonglong *puVar20;
  uint *puVar21;
  ulonglong *unaff_RBX;
  undefined1 *puVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined8 *unaff_RBP;
  undefined8 *puVar29;
  undefined8 *puVar30;
  int *piVar31;
  ulonglong uVar32;
  uint uVar33;
  undefined8 in_R10;
  byte unaff_R14B;
  bool bVar34;
  char extraout_XMM0_Ba;
  char extraout_XMM0_Bb;
  char extraout_XMM0_Bc;
  char cVar35;
  char extraout_XMM0_Bd;
  char cVar36;
  char extraout_XMM0_Be;
  char cVar37;
  char extraout_XMM0_Bf;
  char cVar38;
  char extraout_XMM0_Bg;
  char cVar39;
  char extraout_XMM0_Bh;
  char cVar40;
  char extraout_XMM0_Bi;
  char cVar41;
  char extraout_XMM0_Bj;
  char cVar42;
  char extraout_XMM0_Bk;
  char cVar43;
  char extraout_XMM0_Bl;
  char cVar44;
  char extraout_XMM0_Bm;
  char cVar45;
  char extraout_XMM0_Bn;
  char cVar46;
  char extraout_XMM0_Bo;
  char cVar47;
  char extraout_XMM0_Bp;
  byte bVar48;
  undefined8 auStack_93b0 [4458];
  longlong alStack_860 [256];
  undefined1 auStack_58 [32];
  ulonglong uStack_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined1 *puVar26;
  
  puVar25 = auStack_58;
  puVar26 = auStack_58;
  puVar27 = auStack_58;
  puVar23 = auStack_58;
  uVar12 = param_2[5];
  if (param_2[4] <= uVar12) {
LAB_140615012:
    uStack_38 = 5;
LAB_14061501b:
    uVar13 = pdb_142d84ef0(param_2,&uStack_38);
    *(undefined8 *)(param_1 + 8) = uVar13;
    *param_1 = (code)0x1;
    return param_1;
  }
  uVar32 = param_2[3];
  piVar31 = (int *)0x100002600;
LAB_140614fec:
  uVar12 = uVar12 + 1;
  bVar48 = *(byte *)((uVar32 - 1) + uVar12);
  pcVar14 = (code *)(ulonglong)bVar48;
  if ((code *)0x22 < pcVar14) {
LAB_140615065:
    if (bVar48 == 0x7b) {
      puVar16 = param_2 + 7;
      *(char *)puVar16 = (char)*puVar16 + -1;
      if ((char)*puVar16 != '\0') goto code_r0x000140615078;
      uStack_38 = 0x18;
    }
    else {
      uStack_38 = 10;
    }
    goto LAB_14061501b;
  }
  if ((0x100002600U >> ((ulonglong)pcVar14 & 0x3f) & 1) != 0) goto code_r0x000140614ffe;
  if (pcVar14 != (code *)0x22) goto LAB_140615065;
  pdb_14040ce20(&uStack_38);
  puVar16 = (ulonglong *)&UNK_142f885b4;
  iVar2 = *(int *)(&UNK_142f885b4 + (uStack_38 & 0xff) * 4);
  UNRECOVERED_JUMPTABLE = (code *)(&UNK_142f885b4 + iVar2);
  cVar35 = (char)UNRECOVERED_JUMPTABLE;
  uVar15 = (undefined7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8);
  uVar22 = (undefined6)((ulonglong)param_2 >> 0x10);
  puVar19 = puVar16;
  puVar20 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_38 & 0xff) {
  case 0:
    param_1[1] = (code)0x0;
    goto code_r0x000140615147;
  case 1:
    param_1[1] = (code)0x1;
    goto code_r0x000140615147;
  case 2:
    param_1[1] = (code)0x2;
    goto code_r0x000140615147;
  case 3:
    param_1[1] = (code)0x3;
    goto code_r0x000140615147;
  case 4:
    param_1[1] = (code)0x4;
    goto code_r0x000140615147;
  case 5:
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_2c,uStack_30);
    *param_1 = (code)0x1;
    return param_1;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    uVar12 = (ulonglong)uStack_30;
    goto code_r0x000140615078;
  case 0xb:
    piVar31 = (int *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff);
    uVar12 = 0x268a;
code_r0x000140615078:
    uVar33 = (uint)pcVar14;
    param_2[5] = uVar12;
    pdb_140408470(&uStack_38);
    puVar29 = (undefined8 *)(uStack_38 & 0xff);
    UNRECOVERED_JUMPTABLE = (code *)CONCAT44(uStack_2c,uStack_30);
    puVar19 = (ulonglong *)&UNK_142f885cc;
    uVar12 = (ulonglong)*(int *)(&UNK_142f885cc + (longlong)puVar29 * 4);
    puVar16 = (ulonglong *)(&UNK_142f885cc + uVar12);
    bVar34 = puVar16 == (ulonglong *)0x0;
    puVar20 = puVar19;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(puVar29) {
    case (undefined8 *)0x0:
    case (undefined8 *)0x1:
    case (undefined8 *)0x2:
    case (undefined8 *)0x3:
    case (undefined8 *)0x4:
      UNRECOVERED_JUMPTABLE = (code *)pdb_140409730(UNRECOVERED_JUMPTABLE);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto code_r0x0001406150b4;
      *(char *)(param_2 + 7) = (char)param_2[7] + '\x01';
      param_1[1] = uStack_38._0_1_;
      uVar12 = param_2[5];
      if (param_2[4] <= uVar12) goto code_r0x00014061510a;
      goto code_r0x0001406150e4;
    case (undefined8 *)0x5:
code_r0x0001406150b4:
      *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE;
      *param_1 = (code)0x1;
      *(char *)(param_2 + 7) = (char)param_2[7] + '\x01';
      return param_1;
    case (undefined8 *)0x6:
      if ((POPCOUNT((ulonglong)puVar16 & 0xff) & 1U) != 0) {
        *piVar31 = *piVar31 + -1;
                    /* WARNING: Could not recover jumptable at 0x0001406154ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar14 = (code *)(*(code *)(&UNK_142f885e4 +
                                    *(int *)(&UNK_142f885e4 +
                                            ((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff20)
                                            * 4)))();
        return pcVar14;
      }
      return UNRECOVERED_JUMPTABLE;
    case (undefined8 *)0x7:
      param_1 = (code *)(ulonglong)
                        (((int)param_1 - uStack_30) -
                        (uint)((byte)param_2 < (byte)((ulonglong)puVar16 >> 8)));
      iVar2 = CONCAT13(UNK_142f885cf,CONCAT12(UNK_142f885ce,_UNK_142f885cc)) + (int)uVar32;
      _UNK_142f885cc = (undefined2)iVar2;
      UNK_142f885ce = (char)((uint)iVar2 >> 0x10);
      UNK_142f885cf = (undefined1)((uint)iVar2 >> 0x18);
      goto code_r0x0001406155da;
    case (undefined8 *)0x8:
      puVar23 = &stack0xffffffffffffffa0;
      goto code_r0x0001406155a3;
    case (undefined8 *)0x9:
      UNRECOVERED_JUMPTABLE[0x4127eb01] =
           (code)((byte)UNRECOVERED_JUMPTABLE[0x4127eb01] | unaff_R14B);
      goto code_r0x0001406155b5;
    case (undefined8 *)0xa:
    case (undefined8 *)0xb:
    case (undefined8 *)0xc:
      goto code_r0x000140615511;
    case (undefined8 *)0xd:
      goto code_r0x000140615511;
    case (undefined8 *)0xe:
      *(uint *)(UNRECOVERED_JUMPTABLE + -0x3b7cb7f8) =
           *(int *)(UNRECOVERED_JUMPTABLE + -0x3b7cb7f8) + (uint)puVar16;
      param_1[-0x3d] = (code)((byte)param_1[-0x3d] & (byte)param_2);
      pcVar14 = (code *)swi(3);
      pcVar14 = (code *)(*pcVar14)();
      return pcVar14;
    case (undefined8 *)0xf:
    case (undefined8 *)0x10:
    case (undefined8 *)0x12:
    case (undefined8 *)0x13:
    case (undefined8 *)0x14:
    case (undefined8 *)0x15:
    case (undefined8 *)0x17:
    case (undefined8 *)0x18:
      cVar35 = (char)uStack_30 + -0x78;
      UNRECOVERED_JUMPTABLE = (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),cVar35)
      ;
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar35);
      goto code_r0x000140615937;
    case (undefined8 *)0x11:
      goto code_r0x000140615903;
    case (undefined8 *)0x16:
      goto code_r0x0001406158d1;
    case (undefined8 *)0x19:
code_r0x00014061591b:
      out(*(undefined4 *)param_1,(short)puVar20);
      if (*(longlong *)((longlong)puVar20 + 5) == 0x6e696769726f5f74 &&
          puVar16 == (ulonglong *)*puVar20) {
code_r0x000140615932:
        UNRECOVERED_JUMPTABLE[1] = (code)0x4;
        goto code_r0x000140615937;
      }
      goto LAB_14061596b;
    case (undefined8 *)0x1a:
      goto code_r0x00014061594a;
    default:
      bVar34 = UNK_142f885d4 == 'e' &&
               puVar16 ==
               (ulonglong *)
               CONCAT26(_UNK_142f885d2,
                        CONCAT24(_UNK_142f885d0,
                                 CONCAT13(UNK_142f885cf,CONCAT12(UNK_142f885ce,_UNK_142f885cc))));
      goto code_r0x000140615aad;
    case (undefined8 *)0x1c:
      if (UNK_142f885ce == 'w' && (short)puVar16 == 0x6179) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x0;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case (undefined8 *)0x1f:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uStack_30 + 0xc6014888);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)(uStack_30 + 0xc6014888))
      ;
      goto code_r0x000140615970;
    case (undefined8 *)0x20:
code_r0x000140615a2d:
      if (bVar34) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x1;
code_r0x000140615a38:
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case (undefined8 *)0x21:
      if (uVar12 < 0xfffffffebd077a34) {
        return UNRECOVERED_JUMPTABLE;
      }
      if (bVar34) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (((uint)puVar16 | 0x42f885cc) == 0) {
        puVar16 = (ulonglong *)0x4;
code_r0x000140615a5e:
        UNRECOVERED_JUMPTABLE[1] = SUB81(puVar16,0);
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case (undefined8 *)0x22:
      pcVar14 = (code *)swi(3);
      pcVar14 = (code *)(*pcVar14)();
      return pcVar14;
    case (undefined8 *)0x23:
      goto code_r0x0001406159d4;
    case (undefined8 *)0x25:
      if (CONCAT26(_UNK_142f885d5,
                   CONCAT15(UNK_142f885d4,
                            CONCAT23(_UNK_142f885d2,CONCAT21(_UNK_142f885d0,UNK_142f885cf)))) ==
          0x65686361635f6863 && puVar16 == (ulonglong *)0x0) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x1;
        goto code_r0x000140615a19;
      }
      break;
    case (undefined8 *)0x2c:
      *(undefined8 *)((ulonglong)*(uint *)(&UNK_142f8862f + uVar12) - 8) = 0xffffffffc8814965;
      UNRECOVERED_JUMPTABLE = (code *)((ulonglong)UNRECOVERED_JUMPTABLE | 6);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
      uVar32 = uVar32 ^ CONCAT35(_UNK_142f885d7,
                                 CONCAT23(_UNK_142f885d5,CONCAT12(UNK_142f885d4,_UNK_142f885d2)));
code_r0x000140615a87:
      if (uVar32 == 0 && puVar16 == (ulonglong *)0x0) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x2;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case (undefined8 *)0x2d:
    case (undefined8 *)0x2e:
    case (undefined8 *)0x2f:
    case (undefined8 *)0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined8 *)0x30:
      puVar30 = (undefined8 *)&stack0xffffffffffffffa0;
      cVar35 = '\x04';
      do {
        puVar29 = puVar29 + -1;
        puVar30 = puVar30 + -1;
        *puVar30 = *puVar29;
        cVar35 = cVar35 + -1;
      } while ('\0' < cVar35);
      *(char *)puVar16 = (char)*puVar16 + '\x01';
      piVar17 = (int *)CONCAT71((int7)((ulonglong)puVar16 >> 8),
                                (byte)puVar16 + *(byte *)(ulonglong)uStack_30);
      *piVar17 = *piVar17 + (int)piVar31 + (uint)CARRY1((byte)puVar16,*(byte *)(ulonglong)uStack_30)
      ;
      return (code *)((ulonglong)piVar31 & 0xffffffff);
    case (undefined8 *)0x31:
      pcVar14 = (code *)swi(3);
      pcVar14 = (code *)(*pcVar14)();
      return pcVar14;
    case (undefined8 *)0x32:
      goto code_r0x000140615bbc;
    }
    goto LAB_140615b07;
  case 0xc:
    *(int *)(param_1 + 8) = (int)UNRECOVERED_JUMPTABLE;
    *param_1 = (code)0x1;
    return param_1;
  case 0xd:
    goto code_r0x0001406155a3;
  case 0xe:
    goto code_r0x000140615591;
  case 0xf:
    *(int *)((longlong)unaff_RBP + -0x26) = *(int *)((longlong)unaff_RBP + -0x26) + (int)param_1;
    goto code_r0x00014061559a;
  case 0x10:
  case 0x11:
  case 0x12:
    if ((POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE & 0xff) & 1U) == 0) {
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar35);
      param_2 = (ulonglong *)
                CONCAT62(uVar22,CONCAT11((char)((ulonglong)param_2 >> 8) +
                                         (char)((ulonglong)unaff_RBX >> 8),(char)param_2));
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar35);
      goto code_r0x000140615504;
    }
    *(int *)(param_2 + 5) = (int)UNRECOVERED_JUMPTABLE;
    puVar16 = &uStack_38;
    puVar19 = param_2;
    goto code_r0x000140615511;
  case 0x13:
code_r0x000140615504:
    LOCK();
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar35);
    UNLOCK();
    (&UNK_142f8853d)[iVar2] = (&UNK_142f8853d)[iVar2] + -0x4c;
    (&UNK_142f88541)[iVar2] = (&UNK_142f88541)[iVar2] + 'L';
    puVar19 = param_2;
code_r0x000140615511:
    pdb_140408790(puVar16);
    UNRECOVERED_JUMPTABLE = (code *)CONCAT44(uStack_2c,uStack_30);
    puVar20 = (ulonglong *)&UNK_142f885f4;
    uVar12 = (ulonglong)*(int *)(&UNK_142f885f4 + (ulonglong)(byte)uStack_38._0_1_ * 4);
    puVar16 = (ulonglong *)(&UNK_142f885f4 + uVar12);
    bVar48 = (byte)puVar16;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uStack_38._0_1_) {
    case (code)0x0:
    case (code)0x1:
    case (code)0x2:
      UNRECOVERED_JUMPTABLE = (code *)pdb_140409730(UNRECOVERED_JUMPTABLE);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto code_r0x000140615544;
      *(char *)(puVar19 + 7) = (char)puVar19[7] + '\x01';
      param_1[1] = uStack_38._0_1_;
      UNRECOVERED_JUMPTABLE = (code *)puVar19[5];
      if ((code *)puVar19[4] <= UNRECOVERED_JUMPTABLE) goto code_r0x00014061559a;
      uVar32 = puVar19[3];
      param_2 = (ulonglong *)-(longlong)puVar19[4];
      goto code_r0x000140615574;
    case (code)0x3:
code_r0x000140615544:
      *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE;
      *param_1 = (code)0x1;
      *(char *)(puVar19 + 7) = (char)puVar19[7] + '\x01';
      return param_1;
    case (code)0x4:
code_r0x0001406158d1:
                    /* WARNING: Could not recover jumptable at 0x0001406158df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar14 = (code *)(*(code *)(&UNK_142f88604 + *(int *)(&UNK_142f88604 + uVar32 * 4)))();
      return pcVar14;
    case (code)0x5:
    case (code)0x6:
    case (code)0x8:
    case (code)0x9:
    case (code)0xa:
    case (code)0xb:
    case (code)0xd:
    case (code)0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uStack_30 + 0x75c80949);
code_r0x000140615937:
      *UNRECOVERED_JUMPTABLE = (code)0x0;
      return UNRECOVERED_JUMPTABLE;
    case (code)0xc:
code_r0x000140615902:
      puVar20 = (ulonglong *)(ulonglong)((uint)puVar20 ^ 0x65 | (uint)puVar16);
code_r0x000140615903:
      if ((int)puVar20 == 0 && (int)puVar16 == 0) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x2;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      goto LAB_14061596b;
    case (code)0xf:
      if (0xfffffffebd077a0b < uVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (_UNK_142f885f4 == puVar16) {
code_r0x00014061594a:
        UNRECOVERED_JUMPTABLE[1] = (code)0x1;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      goto LAB_14061596b;
    case (code)0x10:
code_r0x000140615974:
      UNRECOVERED_JUMPTABLE[1] = (code)0x0;
      *UNRECOVERED_JUMPTABLE = (code)0x0;
      return UNRECOVERED_JUMPTABLE;
    default:
      UNRECOVERED_JUMPTABLE[-0x7f] = (code)((byte)UNRECOVERED_JUMPTABLE[-0x7f] | bVar48);
      UNRECOVERED_JUMPTABLE[9] = (code)((char)UNRECOVERED_JUMPTABLE[9] + bVar48);
      return UNRECOVERED_JUMPTABLE;
    case (code)0x12:
      out(*param_1,0x85f4);
code_r0x0001406159d4:
      if (*puVar20 == 0x6e6f697469736f70) {
code_r0x0001406159e7:
        UNRECOVERED_JUMPTABLE[1] = (code)0x2;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case (code)0x15:
      UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uStack_30 - 3);
      if (uVar32 < 0x13) {
        puVar16 = (ulonglong *)&UNK_142f88634;
code_r0x0001406159a8:
                    /* WARNING: Could not recover jumptable at 0x0001406159af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar14 = (code *)(*(code *)((longlong)*(int *)((longlong)puVar16 + uVar32 * 4) +
                                    (longlong)puVar16))();
        return pcVar14;
      }
      break;
    case (code)0x16:
      return UNRECOVERED_JUMPTABLE;
    case (code)0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x18:
                    /* WARNING: Could not recover jumptable at 0x0001406159b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar14 = (code *)(*UNRECOVERED_JUMPTABLE)();
      return pcVar14;
    case (code)0x19:
      lVar11 = CONCAT71((int7)((ulonglong)puVar16 >> 8),bVar48 | (&UNK_142f885ac)[uVar12]);
      puVar30 = (undefined8 *)(ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE + 0x5f);
      uVar24 = (ulonglong)*(uint *)(lVar11 + 99);
      *(undefined8 *)(uVar24 - 8) = 0x42334c65;
      iVar2 = *(int *)(lVar11 + 9);
      puVar29 = (undefined8 *)(uVar24 - 0x10);
      *(undefined8 **)(uVar24 - 0x10) = puVar30;
      cVar35 = '\x12';
      do {
        puVar30 = puVar30 + -1;
        puVar29 = puVar29 + -1;
        *puVar29 = *puVar30;
        cVar35 = cVar35 + -1;
      } while ('\0' < cVar35);
      *(ulonglong *)(uVar24 - 0xa8) = uVar24 - 0x10;
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)uStack_30);
      pcVar1 = (char *)((ulonglong)(uint)((int)lVar11 + iVar2) + 0x1488801);
      *pcVar1 = *pcVar1 + -0x7b;
code_r0x000140615a19:
      *UNRECOVERED_JUMPTABLE = (code)0x0;
      return UNRECOVERED_JUMPTABLE;
    case (code)0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x22:
      UNRECOVERED_JUMPTABLE[-0x7d] = (code)((byte)UNRECOVERED_JUMPTABLE[-0x7d] | bVar48);
      bVar34 = false;
code_r0x000140615aad:
      if (bVar34) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x0;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case (code)0x23:
    case (code)0x24:
    case (code)0x25:
    case (code)0x29:
    case (code)0x28:
      goto code_r0x000140615be3;
    case (code)0x26:
      pcVar14 = (code *)swi(3);
      pcVar14 = (code *)(*pcVar14)();
      return pcVar14;
    case (code)0x27:
      puVar16 = (ulonglong *)*puVar16;
      goto code_r0x000140615ba4;
    }
LAB_140615b07:
    UNRECOVERED_JUMPTABLE[1] = (code)0x6;
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x14:
    uVar13 = pdb_142d86e40(&UNK_142f885b4,(ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff,in_R10);
    *(undefined8 *)(&UNK_142f885bc + iVar2) = uVar13;
    *UNRECOVERED_JUMPTABLE = (code)0x1;
    return UNRECOVERED_JUMPTABLE;
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x1e:
    goto code_r0x00014061591b;
  case 0x17:
    puVar21 = (uint *)CONCAT62(uVar22,CONCAT11(0x42,(char)param_2));
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)((uint)CONCAT71(uVar15,cVar35 + 'A') ^ 0x65);
    if (((uint)uVar32 | 0x42f885b4) == 0) goto code_r0x000140615974;
    puVar16 = (ulonglong *)(ulonglong)(*puVar21 ^ 0x67616d69);
    puVar20 = (ulonglong *)(ulonglong)(byte)puVar21[1];
    goto code_r0x000140615902;
  case 0x1c:
    if (uVar32 < 0xc) goto code_r0x0001406158d1;
    break;
  case 0x1f:
    goto code_r0x000140615903;
  case 0x20:
    goto code_r0x000140615932;
  default:
    goto code_r0x000140615a87;
  case 0x22:
    *(short *)UNRECOVERED_JUMPTABLE = *(short *)UNRECOVERED_JUMPTABLE + (short)UNRECOVERED_JUMPTABLE
    ;
    (&UNK_142f88541)[iVar2] = (&UNK_142f88541)[iVar2] + -0x4c;
    goto code_r0x0001406159a8;
  case 0x25:
    cVar35 = -(extraout_XMM0_Bc == UNK_142f87e02);
    cVar36 = -(extraout_XMM0_Bd == UNK_142f87e03);
    cVar37 = -(extraout_XMM0_Be == UNK_142f87e04);
    cVar38 = -(extraout_XMM0_Bf == UNK_142f87e05);
    cVar39 = -(extraout_XMM0_Bg == UNK_142f87e06);
    cVar40 = -(extraout_XMM0_Bh == UNK_142f87e07);
    cVar41 = -(extraout_XMM0_Bi == UNK_142f87e08);
    cVar42 = -(extraout_XMM0_Bj == UNK_142f87e09);
    cVar43 = -(extraout_XMM0_Bk == UNK_142f87e0a);
    cVar44 = -(extraout_XMM0_Bl == UNK_142f87e0b);
    cVar45 = -(extraout_XMM0_Bm == UNK_142f87e0c);
    cVar46 = -(extraout_XMM0_Bn == UNK_142f87e0d);
    cVar47 = -(extraout_XMM0_Bo == UNK_142f87e0e);
    bVar48 = -(extraout_XMM0_Bp == UNK_142f87e0f);
    auVar4[1] = -(extraout_XMM0_Bb == UNK_142f87e01);
    auVar4[0] = -(extraout_XMM0_Ba == UNK_142f87e00);
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
    auVar5[1] = -(extraout_XMM0_Bb == UNK_142f87e01);
    auVar5[0] = -(extraout_XMM0_Ba == UNK_142f87e00);
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
      (&UNK_142f885b5)[iVar2] = 3;
      *UNRECOVERED_JUMPTABLE = (code)0x0;
      return UNRECOVERED_JUMPTABLE;
    }
    break;
  case 0x26:
    *(int *)(&UNK_143be86fc + iVar2) = *(int *)(&UNK_143be86fc + iVar2) + 0x42f885b4;
    bVar34 = *(char *)((longlong)param_2 + 4) == 'h' && (int)*param_2 == 0x63746970;
    goto code_r0x000140615a2d;
  case 0x27:
    goto code_r0x000140615a38;
  case 0x28:
    goto code_r0x000140615970;
  case 0x29:
    return (code *)CONCAT71(uVar15,cVar35 + *(char *)((longlong)unaff_RBX + 0x96677f2));
  case 0x2b:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar35);
    goto code_r0x0001406159e7;
  case 0x32:
    goto code_r0x000140615a5e;
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x36:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar35);
    return UNRECOVERED_JUMPTABLE;
  case 0x37:
    pcVar14 = (code *)swi(3);
    pcVar14 = (code *)(*pcVar14)();
    return pcVar14;
  case 0x38:
    unaff_00084f00 = '\t';
    puVar26 = &stack0xffffffffffffffa0;
    unaff_0008ae00 = (undefined8 *)&stack0xffffffffffffffa0;
    puVar29 = (undefined8 *)&stack0xffffffffffffffa0;
    cVar35 = '\b';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar29 = puVar29 + -1;
      *puVar29 = *unaff_RBP;
      cVar35 = cVar35 + -1;
      puVar19 = unaff_RBX;
    } while ('\0' < cVar35);
code_r0x000140615ba4:
    lVar11 = (ulonglong)(byte)(unaff_00084f00 - 1) * -8;
    *(undefined8 **)(puVar26 + lVar11 + -8) = unaff_0008ae00;
    puVar25 = puVar26 + lVar11 + -0x8b50;
    if (puVar16 != (ulonglong *)0x8000000000000001) {
      unaff_0008ae00[-2] = puVar16;
      unaff_0008ae00[-3] = uVar32;
      *(undefined **)(puVar26 + lVar11 + -0x8b58) = &UNK_140615c08;
      pdb_1404dfd20(uVar32 + 0x18);
      puVar20 = (ulonglong *)unaff_0008ae00[-2];
      pcVar14 = (code *)unaff_0008ae00[-3];
      if (SBORROW8(0,(longlong)puVar20)) {
        return pcVar14;
      }
      if (puVar20 == (ulonglong *)0x0) {
        return pcVar14;
      }
      lVar18 = *(longlong *)(pcVar14 + 8);
      uVar12 = 1;
      uVar13 = *(undefined8 *)(puVar26 + lVar11 + -0x8b10);
      puVar28 = puVar26 + lVar11 + -0x8b08;
      goto code_r0x0001406abac0;
    }
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)*(byte *)(uVar32 + 8);
    param_2 = puVar19;
    puVar29 = unaff_0008ae00;
code_r0x000140615bbc:
    if ((code *)0x6 < UNRECOVERED_JUMPTABLE) {
code_r0x000140615c70:
      *(undefined8 *)(puVar25 + 0x40) = *(undefined8 *)(puVar25 + 0x40);
      *(code **)(puVar25 + 0x38) = param_1;
      *(int **)(puVar25 + 0x30) = piVar31;
      *(ulonglong **)(puVar25 + 0x28) = param_2;
      *(undefined8 *)(puVar25 + 0x20) = 0xfffffffffffffffe;
      lVar11 = *(longlong *)(uVar32 + 0x10);
      if (lVar11 == 0) {
        uVar13 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(uVar32 + 0x18);
        uVar13 = *(undefined8 *)(uVar32 + 0x20);
        *(undefined8 *)(puVar25 + -0x48) = 0;
        *(longlong *)(puVar25 + -0x40) = lVar11;
        *(undefined8 *)(puVar25 + -0x38) = uVar3;
        *(undefined8 *)(puVar25 + -0x28) = 0;
        *(longlong *)(puVar25 + -0x20) = lVar11;
        *(undefined8 *)(puVar25 + -0x18) = uVar3;
      }
      uVar12 = (ulonglong)(lVar11 != 0);
      *(ulonglong *)(puVar25 + -0x50) = uVar12;
      *(ulonglong *)(puVar25 + -0x30) = uVar12;
      *(undefined8 *)(puVar25 + -0x10) = uVar13;
      puVar23 = puVar25 + -0x50;
      *(undefined **)(puVar25 + -0x78) = &UNK_1404dfd92;
      pdb_14057f6c0(puVar25 + -8,puVar23);
      lVar11 = *(longlong *)(puVar25 + -8);
      if (lVar11 != 0) {
        do {
          lVar18 = *(longlong *)(puVar25 + 8);
          *(undefined1 **)(puVar25 + 0x18) = puVar23;
          *(longlong *)(puVar25 + 0x10) = lVar18 * 0x20 + lVar11;
          uVar12 = *(ulonglong *)(lVar11 + 0x168 + lVar18 * 0x18);
          if (uVar12 != 0) {
            arg0 = *(byte **)(lVar11 + lVar18 * 0x18 + 0x170);
            *(undefined **)(puVar25 + -0x78) = &UNK_1404dfded;
            pub_1406abac0(arg0,uVar12,1);
          }
          *(undefined **)(puVar25 + -0x78) = &UNK_1404dfdf6;
          pdb_140498160(puVar25 + 0x10);
          *(undefined **)(puVar25 + -0x78) = &UNK_1404dfe02;
          pdb_14057f6c0(puVar25 + -8,puVar23);
          lVar11 = *(longlong *)(puVar25 + -8);
        } while (lVar11 != 0);
      }
      return (code *)0x0;
    }
    pcVar14 = (code *)(&UNK_142f88680 +
                      *(int *)(&UNK_142f88680 + (longlong)UNRECOVERED_JUMPTABLE * 4));
    switch(UNRECOVERED_JUMPTABLE) {
    case (code *)0x3:
      puVar20 = *(ulonglong **)(uVar32 + 0x10);
      puVar27 = puVar25;
      if (puVar20 != (ulonglong *)0x0) {
code_r0x000140615be3:
        lVar18 = *(longlong *)(uVar32 + 0x18);
        uVar12 = 1;
        uVar13 = *(undefined8 *)(puVar27 + 0x40);
        puVar28 = puVar27 + 0x48;
code_r0x0001406abac0:
        *(undefined8 *)(puVar28 + -8) = uVar13;
        *(code **)(puVar28 + -0x10) = param_1;
        lVar11 = lVar18;
        if (0x10 < uVar12) {
          lVar11 = *(longlong *)(lVar18 + -8);
        }
        *(undefined **)(puVar28 + -0x40) = &UNK_140f3c37e;
        uVar13 = GetProcessHeap(lVar18,puVar20);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar14 = (code *)HeapFree(uVar13,0,lVar11);
        return pcVar14;
      }
      break;
    case (code *)0x4:
      uVar13 = *(undefined8 *)(uVar32 + 0x18);
      uVar3 = *(undefined8 *)(uVar32 + 0x20);
      puVar29[-2] = uVar13;
      puVar29[-3] = uVar32;
      *(undefined **)(puVar25 + -8) = &UNK_140615c44;
      pdb_1404be800(uVar13,uVar3);
      pcVar14 = (code *)puVar29[-3];
      if (*(longlong *)(pcVar14 + 0x10) != 0) {
        puVar20 = (ulonglong *)(*(longlong *)(pcVar14 + 0x10) << 5);
        uVar12 = 8;
        lVar18 = puVar29[-2];
        uVar13 = *(undefined8 *)(puVar25 + 0x40);
        puVar28 = puVar25 + 0x48;
        goto code_r0x0001406abac0;
      }
      break;
    case (code *)0x5:
      goto code_r0x000140615c70;
    }
    return pcVar14;
  }
LAB_14061596b:
  UNRECOVERED_JUMPTABLE[1] = (code)0x5;
code_r0x000140615970:
  *UNRECOVERED_JUMPTABLE = (code)0x0;
  return UNRECOVERED_JUMPTABLE;
code_r0x000140614ffe:
  param_2[5] = uVar12;
  if (uVar12 == param_2[4]) goto LAB_140615012;
  goto LAB_140614fec;
code_r0x0001406155b5:
  if (uVar33 == 0x7d) {
    puVar16[5] = (ulonglong)UNRECOVERED_JUMPTABLE;
code_r0x0001406155da:
    cVar10 = (code)0x0;
    goto code_r0x0001406155dc;
  }
  uStack_38 = 10;
  puVar23 = auStack_58;
  goto code_r0x0001406155a3;
code_r0x0001406150e4:
  uVar12 = uVar12 + 1;
  bVar48 = *(byte *)((param_2[3] - 1) + uVar12);
  if ((0x20 < (ulonglong)bVar48) || (((ulonglong)piVar31 >> ((ulonglong)bVar48 & 0x3f) & 1) == 0)) {
    if (bVar48 == 0x7d) {
      param_2[5] = uVar12;
code_r0x000140615147:
      cVar10 = (code)0x0;
      goto code_r0x000140615149;
    }
    uStack_38 = 10;
    goto code_r0x000140615113;
  }
  param_2[5] = uVar12;
  if (uVar12 == param_2[4]) {
code_r0x00014061510a:
    uStack_38 = 3;
code_r0x000140615113:
    uVar13 = pdb_142d855a0(param_2,&uStack_38);
    *(undefined8 *)(param_1 + 8) = uVar13;
    cVar10 = (code)0x1;
code_r0x000140615149:
    *param_1 = cVar10;
    return param_1;
  }
  goto code_r0x0001406150e4;
  while( true ) {
    puVar19[5] = (ulonglong)UNRECOVERED_JUMPTABLE;
    pcVar14 = (code *)((longlong)param_2 + (longlong)UNRECOVERED_JUMPTABLE) + 1;
code_r0x000140615591:
    if (pcVar14 == (code *)0x1) break;
code_r0x000140615574:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 1;
    cVar10 = UNRECOVERED_JUMPTABLE[uVar32 - 1];
    uVar33 = (uint)(byte)cVar10;
    puVar16 = puVar19;
    if ((0x20 < (ulonglong)(byte)cVar10) ||
       (((ulonglong)piVar31 >> ((ulonglong)(byte)cVar10 & 0x3f) & 1) == 0))
    goto code_r0x0001406155b5;
  }
code_r0x00014061559a:
  uStack_38 = 3;
  puVar16 = puVar19;
  puVar23 = auStack_58;
code_r0x0001406155a3:
  *(undefined8 *)(puVar23 + -8) = 0x1406155ad;
  uVar13 = pdb_142d855a0(puVar16,puVar23 + 0x20);
  *(undefined8 *)(param_1 + 8) = uVar13;
  cVar10 = (code)0x1;
code_r0x0001406155dc:
  *param_1 = cVar10;
  return param_1;
}

