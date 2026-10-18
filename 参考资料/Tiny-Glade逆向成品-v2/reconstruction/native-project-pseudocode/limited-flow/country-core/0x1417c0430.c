// VA 0x1417c0430, PDB extent 715 bytes
// country_core::resources::walls::decorator::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001433376b0) overlaps instruction at (ram,0x0001433376af)
    */
/* WARNING: Removing unreachable block (ram,0x0001417c1ff6) */
/* WARNING: Removing unreachable block (ram,0x0001417c1a11) */
/* WARNING: Removing unreachable block (ram,0x0001417c321d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 715 */

ulonglong *
pdb_1417c0430(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined5 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  undefined7 uVar15;
  ulonglong *extraout_RAX;
  ulonglong *extraout_RAX_00;
  ulonglong *extraout_RAX_01;
  ulonglong *puVar14;
  ulonglong *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  char *pcVar20;
  ulonglong *unaff_RBX;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulonglong *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  ulonglong *unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar34;
  ulonglong *unaff_RDI;
  ulonglong uVar35;
  ulonglong *puVar36;
  ulonglong *puVar37;
  ulonglong *in_R10;
  ulonglong *in_R11;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  undefined8 uVar41;
  int unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 uStackX_8;
  uint uStackX_c;
  int iStackX_18;
  undefined4 uStackX_1c;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000044;
  undefined1 auStack_8de9 [36105];
  undefined1 *puStack_e0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [16];
  ulonglong *puStack_68;
  undefined1 auStack_58 [4];
  ushort auStack_54 [2];
  undefined *puStack_50;
  ulonglong *puStack_48;
  ulonglong *puStack_38;
  undefined1 auStack_30 [7];
  undefined1 uStack_29;
  byte bStack_28;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined3 uStack_1f;
  undefined4 uStack_1c;
  
  puVar22 = auStack_58;
  puVar23 = auStack_58;
  puVar14 = (ulonglong *)auStack_58;
  puVar24 = (ulonglong *)auStack_58;
  puVar25 = auStack_58;
  puVar31 = auStack_58;
  puVar26 = auStack_58;
  puVar28 = auStack_58;
  puVar29 = auStack_58;
  puVar30 = auStack_58;
  puVar33 = auStack_58;
  puVar32 = auStack_58;
  puVar21 = auStack_58;
  puVar17 = auStack_58;
  puVar27 = auStack_58;
  if (param_2[5] < param_2[4]) {
    puVar36 = (ulonglong *)param_2[3];
    uVar35 = 0x100002600;
    uVar12 = param_2[5];
LAB_1417c045b:
    uVar11 = uVar12 + 1;
    puVar37 = (ulonglong *)(ulonglong)*(byte *)((longlong)puVar36 + uVar12);
    if ((ulonglong *)0x22 < puVar37) {
LAB_1417c04d0:
      if (*(byte *)((longlong)puVar36 + uVar12) != 0x7b) {
        auStack_30[0] = 10;
        stack0xffffffffffffffd5 = (uint)bStack_28 << 0x18;
        goto LAB_1417c048a;
      }
      puVar14 = param_2 + 9;
      *(byte *)puVar14 = (byte)*puVar14 - 1;
      if ((byte)*puVar14 == 0) {
        auStack_30[0] = 0x18;
        stack0xffffffffffffffd5 = (uint)bStack_28 << 0x18;
        goto LAB_1417c048a;
      }
code_r0x0001417c04e3:
      param_2[5] = uVar11;
      uVar41 = pdb_141654250(auStack_30);
      uVar5 = CONCAT41(uStack_27,bStack_28);
      puVar13 = (ulonglong *)CONCAT35((undefined3)uStack_23,uVar5);
      puVar19 = (ulonglong *)&UNK_1433376d4;
      uVar12 = (ulonglong)*(int *)(&UNK_1433376d4 + (ulonglong)auStack_30[0] * 4);
      puVar16 = (ulonglong *)(&UNK_1433376d4 + uVar12);
      bVar38 = puVar16 == (ulonglong *)0x0;
      iVar9 = (int)uVar5;
      bVar7 = (byte)puVar16;
      uVar10 = (uint)puVar16;
      puVar23 = auStack_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(auStack_30[0]) {
      case 0:
        puVar13 = (ulonglong *)pdb_141654940(puVar13);
        if (puVar13 != (ulonglong *)0x0) goto code_r0x0001417c062a;
        puVar13 = (ulonglong *)0x0;
        break;
      case 1:
        puVar13 = (ulonglong *)pdb_141654940(puVar13);
        if (puVar13 != (ulonglong *)0x0) goto code_r0x0001417c062a;
        puVar13 = (ulonglong *)0x1;
code_r0x0001417c05b0:
        break;
      case 2:
        puVar13 = (ulonglong *)pdb_141654940(puVar13);
        if (puVar13 != (ulonglong *)0x0) goto code_r0x0001417c062a;
        puVar13 = (ulonglong *)0x2;
        break;
      case 3:
code_r0x0001417c0583:
        puVar13 = (ulonglong *)pdb_141654940(puVar13);
        if (puVar13 != (ulonglong *)0x0) {
code_r0x0001417c062a:
          param_1[1] = (ulonglong)puVar13;
          *param_1 = 8;
          *(byte *)(param_2 + 9) = (byte)param_2[9] + 1;
          return param_1;
        }
        puVar13 = (ulonglong *)0x3;
        unaff_RBX = param_2;
code_r0x0001417c0591:
        param_2 = unaff_RBX;
        *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
        *(byte *)((longlong)puVar13 + 3) =
             *(byte *)((longlong)puVar13 + 3) + (char)((ulonglong)param_2 >> 8);
        break;
      case 4:
        puVar13 = (ulonglong *)pdb_141654940(puVar13);
        if (puVar13 != (ulonglong *)0x0) goto code_r0x0001417c062a;
        puVar13 = (ulonglong *)0x4;
        break;
      case 5:
        puVar16 = puVar13;
        unaff_RBX = param_2;
code_r0x0001417c0606:
        param_2 = (ulonglong *)
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                           (char)unaff_RBX + (char)((ulonglong)puVar16 >> 8));
        puVar13 = (ulonglong *)pdb_141654940(puVar13);
        if (puVar13 != (ulonglong *)0x0) goto code_r0x0001417c062a;
        puVar13 = (ulonglong *)0x5;
        break;
      case 6:
code_r0x0001417c05d6:
        pdb_141655c40(param_1,puVar13);
        puVar13 = (ulonglong *)*param_1;
        unaff_RBX = param_2;
code_r0x0001417c05e7:
        *(byte *)(unaff_RBX + 9) = (byte)unaff_RBX[9] + 1;
        if (puVar13 == (ulonglong *)0x8) {
          return param_1;
        }
        goto code_r0x0001417c0648;
      case 7:
        puVar13 = (ulonglong *)pdb_141654940(puVar13);
        if (puVar13 != (ulonglong *)0x0) goto code_r0x0001417c062a;
        puVar13 = (ulonglong *)0x7;
        break;
      case 8:
        goto code_r0x0001417c062a;
      case 9:
        pcVar4 = (code *)swi(3);
        puVar14 = (ulonglong *)(*pcVar4)();
        return puVar14;
      case 10:
        *(byte *)puVar13 = (byte)*puVar13 + bStack_28;
        puVar13 = (ulonglong *)pub_1406abab0(6,1);
        if (puVar13 != (ulonglong *)0x0) {
          *(undefined2 *)((longlong)puVar13 + 4) = 0x6e65;
          *(uint *)puVar13 = 0x646f6f57;
          goto code_r0x0001417c0d50;
        }
        goto code_r0x0001417c0d78;
      case 0xb:
        *(byte *)puVar13 = (byte)*puVar13 + bStack_28;
        puVar13 = (ulonglong *)pub_1406abab0(4,1);
        if (puVar13 != (ulonglong *)0x0) {
          *(uint *)puVar13 = 0x656e6f4e;
          goto code_r0x0001417c0d50;
        }
code_r0x0001417c0d69:
        pdb_142dc7e2a(1,4);
code_r0x0001417c0d78:
        pdb_142dc7e2a(1,6);
        pdb_142dc7e2a(1,3);
        pcVar4 = (code *)swi(3);
        puVar14 = (ulonglong *)(*pcVar4)();
        return puVar14;
      case 0xc:
code_r0x0001417c0d50:
        *(byte *)param_1 = 3;
        param_1[1] = uVar35;
        param_1[2] = (ulonglong)puVar13;
        param_1[3] = uVar35;
        return param_1;
      case 0xd:
        *(byte *)puVar13 = (byte)*puVar13 + bStack_28;
        *(byte *)((longlong)param_1 + -0x3d) = *(byte *)((longlong)param_1 + -0x3d) + (byte)param_2;
LAB_1417c1577:
        uStack000000000000003c = (undefined4)((ulonglong)unaff_RBX >> 0x20);
        uStack0000000000000044 = (undefined4)((ulonglong)unaff_RDI >> 0x20);
                    /* WARNING: Could not emulate address calculation at 0x0001417c159d */
                    /* WARNING: Treating indirect jump as call */
        puVar14 = (ulonglong *)
                  (*(code *)(&UNK_143337708 +
                            *(int *)(&UNK_143337708 + ((ulonglong)puVar19 & 0xffffffff) * 4)))
                            ((ulonglong)puVar13 & 0xff,
                             &UNK_143337708 +
                             *(int *)(&UNK_143337708 + ((ulonglong)puVar19 & 0xffffffff) * 4));
        return puVar14;
      case 0xe:
        *(byte *)((longlong)puVar13 + -0x39) = *(byte *)((longlong)puVar13 + -0x39) & bVar7;
        uVar10 = (int)(int *)((ulonglong)puVar13 & 0xffffffffffffff28) +
                 *(int *)((ulonglong)puVar13 & 0xffffffffffffff28);
        *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
code_r0x0001417c16a0:
        uStack_1c = (undefined4)((ulonglong)uVar41 >> 0x20);
        uStack_23._3_1_ = (undefined1)uVar41;
        uStack_1f = (undefined3)((ulonglong)uVar41 >> 8);
        puStack_38 = (ulonglong *)&UNK_143336c88;
        auStack_30[0] = 3;
        auStack_30._1_4_ = 0;
        stack0xffffffffffffffd5 = stack0xffffffffffffffd5 & 0xff000000;
        pdb_141502000(&iStackX_18,&bStack_28,&UNK_143336c60,0xf);
        if (iStackX_18 != 1) {
          *(uint *)(param_1 + 2) = param_5._4_4_;
          *param_1 = CONCAT44(uStackX_20,uStackX_1c);
          param_1[1] = CONCAT44((undefined4)param_5,uStackX_24);
          bVar7 = 4;
          goto code_r0x0001417c17b1;
        }
        uVar12 = CONCAT44(uStackX_24,uStackX_20);
        goto code_r0x0001417c175d;
      case 0xf:
        *(byte *)puVar13 = (byte)*puVar13 + bStack_28;
        pbVar2 = (byte *)((longlong)unaff_RBP + (longlong)puVar16 * 4 + 5);
        *pbVar2 = *pbVar2 + bVar7;
code_r0x0001417c15bf:
        puStack_38 = (ulonglong *)&UNK_143336c40;
        auStack_30[0] = 2;
        auStack_30._1_4_ = 0;
        stack0xffffffffffffffd5 = stack0xffffffffffffffd5 & 0xff000000;
        pdb_141501430(&bStack_28,&iStackX_18,&UNK_143336c01,0xe);
        if ((char)(unaff_RSI >> 0x10) != '\x02') {
          param_1[4] = unaff_RSI;
          param_1[2] = (ulonglong)unaff_RBX;
          param_1[3] = (ulonglong)unaff_RDI;
          *param_1 = CONCAT35((undefined3)uStack_23,CONCAT41(uStack_27,bStack_28));
          param_1[1] = CONCAT44(uStack_1c,CONCAT31(uStack_1f,uStack_23._3_1_));
          return param_1;
        }
        puVar13 = (ulonglong *)CONCAT35((undefined3)uStack_23,CONCAT41(uStack_27,bStack_28));
code_r0x0001417c1564:
        *param_1 = (ulonglong)puVar13;
        *(byte *)((longlong)param_1 + 0x22) = 5;
        return param_1;
      case 0x10:
        puVar13 = (ulonglong *)((ulonglong)puVar13 & 0xffffffffffffff58);
code_r0x0001417c1639:
        *(byte *)((longlong)puVar13 + -0x77) = *(byte *)((longlong)puVar13 + -0x77) + (char)puVar16;
        puStack_38 = (ulonglong *)&UNK_143336d68;
        auStack_30[0] = 2;
        auStack_30._1_4_ = 0;
        stack0xffffffffffffffd5 = stack0xffffffffffffffd5 & 0xff000000;
        pdb_1415023d0(&stack0x00000000,&bStack_28,&UNK_143336d50,0x11);
        if (unaff_retaddr != 1) {
          *(uint *)(param_1 + 1) = uStackX_c;
          *param_1 = CONCAT44(uStackX_8,unaff_retaddr_00);
          bVar7 = 3;
          goto code_r0x0001417c17b1;
        }
        uVar12 = CONCAT44(uStackX_c,uStackX_8);
code_r0x0001417c175d:
        *param_1 = uVar12;
        bVar7 = 5;
code_r0x0001417c17b1:
        *(byte *)((longlong)param_1 + 0x22) = bVar7;
        return param_1;
      case 0x11:
code_r0x0001417c185c:
        unaff_RBX = param_2;
        if ((char)puVar16 == '\a') goto code_r0x0001417c1861;
        goto LAB_1417c1875;
      case 0x12:
        goto code_r0x0001417c1906;
      case 0x13:
        *(uint *)((longlong)puVar13 + 1) = *(uint *)((longlong)puVar13 + 1) | 0x48e0ffc8;
        puVar17 = (undefined1 *)((ulonglong)auStack_30 & 0xffffffff);
        goto code_r0x0001417c18a5;
      case 0x14:
        goto code_r0x0001417c18bd;
      case 0x15:
        uStackX_8 = CONCAT31(uStackX_8._1_3_,(char)uStackX_8 + bVar7 + (0xfffffffebccc892b < uVar12)
                            );
        unaff_RBX = param_2;
LAB_1417c1875:
        uStack_1f = (undefined3)((uint)uStackX_8 >> 8);
        auStack_30._1_4_ = (int)(unaff_RSI >> 8);
        stack0xffffffffffffffd5 = CONCAT13((char)unaff_retaddr,(int3)(unaff_RSI >> 0x28));
        uStack_27 = CONCAT13((char)unaff_retaddr_00,(int3)((uint)unaff_retaddr >> 8));
        uStack_23 = CONCAT13((char)uStackX_8,(int3)((uint)unaff_retaddr_00 >> 8));
        auStack_30[0] = (byte)puVar16;
        uVar12 = (ulonglong)puVar13 & 0xff;
        puVar16 = (ulonglong *)&UNK_143337718;
        uVar35 = (ulonglong)*(int *)(&UNK_143337718 + uVar12 * 4);
        bVar38 = 0xfffffffebccc88e7 < uVar35;
        puVar13 = (ulonglong *)(&UNK_143337718 + uVar35);
        bVar40 = puVar13 == (ulonglong *)0x0;
        bVar39 = (POPCOUNT((ulonglong)puVar13 & 0xff) & 1U) == 0;
        cVar6 = (char)puVar13;
        param_2 = puVar19;
        puVar33 = auStack_58;
        puVar22 = auStack_58;
        puVar24 = unaff_RBP;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar12) {
        case 0:
          puVar17 = auStack_30;
code_r0x0001417c18a5:
          puVar13 = (ulonglong *)pdb_140de26b0(puVar17);
          if (puVar13 == (ulonglong *)0x0) {
            *param_1 = 0;
            puVar13 = param_1;
code_r0x0001417c18bd:
            return puVar13;
          }
          break;
        case 1:
          puVar16 = (ulonglong *)auStack_30;
code_r0x0001417c194c:
          puVar13 = (ulonglong *)pdb_140de26b0(puVar16);
          if (puVar13 == (ulonglong *)0x0) {
            *param_1 = 1;
            return param_1;
          }
          break;
        case 2:
          puVar16 = (ulonglong *)auStack_30;
code_r0x0001417c18e3:
          puVar13 = (ulonglong *)pdb_140de26b0(puVar16);
          if (puVar13 == (ulonglong *)0x0) {
            *param_1 = 2;
            return param_1;
          }
          break;
        case 3:
          puVar16 = (ulonglong *)auStack_30;
code_r0x0001417c1906:
          puVar13 = (ulonglong *)pdb_140de26b0(puVar16);
          if (puVar13 == (ulonglong *)0x0) {
            *param_1 = 3;
            return param_1;
          }
          break;
        case 4:
          puVar13 = (ulonglong *)pdb_140de26b0(auStack_30);
          if (puVar13 == (ulonglong *)0x0) {
            *param_1 = 4;
            return param_1;
          }
          break;
        case 5:
          puVar13 = (ulonglong *)pdb_140de26b0(auStack_30);
          if (puVar13 == (ulonglong *)0x0) {
            *param_1 = 5;
            return param_1;
          }
          break;
        case 6:
          pdb_141bebeb0(param_1,auStack_30,&UNK_143336d88,1);
          return param_1;
        case 7:
          puVar16 = (ulonglong *)auStack_30;
code_r0x0001417c1929:
          puVar13 = (ulonglong *)pdb_140de26b0(puVar16);
          if (puVar13 == (ulonglong *)0x0) {
            *param_1 = 7;
            return param_1;
          }
          break;
        case 8:
          puVar13 = (ulonglong *)0x43337718;
          goto code_r0x0001417c1a68;
        case 9:
        case 0xc:
        case 0xe:
        case 0xf:
          UNK_143337721 = UNK_143337721 + cVar6;
          bVar38 = UNK_143337721 == '\0';
          puVar24 = unaff_RBP + 1;
          goto code_r0x0001417c1b72;
        case 10:
code_r0x0001417c1b3c:
          if (bVar38 || bVar40) {
            uVar3 = in((short)puVar19);
            iRam0000000100002600 = CONCAT31(iRam0000000100002600._1_3_,uVar3);
            uVar10 = *(int *)((longlong)puVar13 + 0x33) * -0x49f0bbf6;
            pbVar2 = (byte *)((ulonglong)uVar10 - 0x7d);
            *pbVar2 = *pbVar2 | (byte)uVar10;
            pcVar4 = (code *)swi(1);
            puVar14 = (ulonglong *)(*pcVar4)();
            return puVar14;
          }
          goto LAB_1417c1b8e;
        case 0xb:
          goto code_r0x0001417c1aa8;
        case 0xd:
          puVar14 = (ulonglong *)((longlong)param_1 + 4);
          out((uint)*param_1,(short)puVar19);
code_r0x0001417c1b1a:
          out((uint)*puVar14,(short)puVar19);
          if (bVar40) goto code_r0x0001417c1b86;
          goto code_r0x0001417c1b1e;
        case 0x10:
code_r0x0001417c1af8:
          param_2 = puVar19;
          *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
          puVar23 = auStack_58;
          goto code_r0x0001417c1afc;
        case 0x11:
          unaff_RBX = (ulonglong *)
                      CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(1,(char)unaff_RBX));
          puVar14 = (ulonglong *)auStack_58;
          goto code_r0x0001417c1a76;
        case 0x12:
          goto code_r0x0001417c1ba4;
        case 0x13:
          if (bVar40) {
            if (((int)puVar19 != 0) && ((byte)*puVar19 != 0x12)) {
code_r0x0001417c1c24:
              uVar12 = pdb_142deedc0(puVar19,&uStack_29,&UNK_143396738);
              param_1[1] = uVar12;
              *(uint *)param_1 = 1;
              return param_1;
            }
            uVar12 = 0x200000000;
          }
          else {
            *(byte *)((longlong)(unaff_RBP + -0x10) + (longlong)puVar13) = 0;
            if ((byte)puVar19 != (byte)*puVar19) goto code_r0x0001417c1c24;
            uVar12 = 0x300000000;
          }
          *param_1 = uVar12;
          return param_1;
        case 0x14:
          return puVar13;
        case 0x15:
                    /* WARNING: Could not emulate address calculation at 0x0001417c1be3 */
                    /* WARNING: Treating indirect jump as call */
          puVar14 = (ulonglong *)
                    (*(code *)(&UNK_143337760 + *(int *)(&UNK_143337760 + (longlong)puVar13 * 4)))
                              (&UNK_143337760,uStackX_8);
          return puVar14;
        case 0x16:
          uVar12 = pdb_142deedc0(puVar19,(longlong)&uStack_23 + 2);
          param_1[1] = uVar12;
          *(uint *)param_1 = 2;
          return param_1;
        case 0x17:
          if (bVar40) {
code_r0x0001417c1e98:
            puVar27 = auStack_58;
            if (((*(byte *)((longlong)puVar19 + 4) == 0x61) &&
                (puVar27 = auStack_58, *(byte *)((longlong)puVar19 + 5) == 100)) &&
               (puVar27 = auStack_58, *(byte *)((longlong)puVar19 + 6) == 0x65)) {
code_r0x0001417c1eb6:
              puVar27 = auStack_58;
              if ((*(byte *)((longlong)puVar19 + 7) == 0x53) &&
                 (puVar27 = auStack_58, (byte)puVar19[1] == 0x68)) goto code_r0x0001417c1eca;
            }
          }
          goto LAB_1417c1f58;
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x21:
          return param_1;
        case 0x20:
          pcVar4 = (code *)swi(3);
          puVar14 = (ulonglong *)(*pcVar4)();
          return puVar14;
        case 0x22:
          if (bVar39) {
            *(char *)(uVar35 + 0x152867e92) = *(char *)(uVar35 + 0x152867e92) + cVar6;
            bVar38 = true;
            if ((POPCOUNT(*(uint *)(uVar35 + 0xc3337718) & (uint)unaff_RBX & 0xff) & 1U) == 0) {
code_r0x0001417c1ecb:
              if (!bVar38) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              bVar7 = (byte)((ulonglong)puVar19 >> 8) | *(byte *)((longlong)puVar13 + 0x75);
              pcVar20 = (char *)CONCAT62((int6)((ulonglong)puVar19 >> 0x10),
                                         CONCAT11(bVar7,(char)puVar19));
              if ((char)bVar7 < '\x01') {
                *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
                puVar27 = auStack_58;
                if (pcVar20[1] == 'o') {
                  *(undefined2 *)param_1 = 0;
                  return param_1;
                }
              }
              else if ((POPCOUNT(bVar7) & 1U) == 0) {
                *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
                puVar27 = auStack_58;
                if (((*pcVar20 == 'Y') && (puVar27 = auStack_58, pcVar20[1] == 'e')) &&
                   (puVar27 = auStack_58, pcVar20[2] == 's')) {
                  *(undefined2 *)param_1 = 0x100;
                  return param_1;
                }
              }
              else {
                puVar27 = auStack_58;
                if (bVar7 == 0) goto code_r0x0001417c1ee0;
              }
            }
            else {
              puVar17 = &stack0xffffffffffffffa0;
              *(byte *)puVar13 = (byte)*puVar13 + cVar6;
code_r0x0001417c1eca:
              puVar27 = puVar17;
              if ((*(byte *)((longlong)puVar19 + 9) == 0x61) &&
                 (*(byte *)((longlong)puVar19 + 10) == 0x70)) {
                bVar7 = *(byte *)((longlong)puVar19 + 0xb);
joined_r0x0001417c1f56:
                puVar27 = puVar17;
                if (bVar7 == 0x65) {
code_r0x0001417c1ee0:
                  *(undefined2 *)param_1 = 0x200;
                  return param_1;
                }
              }
            }
          }
          else {
            puVar27 = auStack_58;
            if (bVar40) goto code_r0x0001417c1eb6;
          }
          goto LAB_1417c1f58;
        case 0x23:
          goto code_r0x0001417c1f7a;
        case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2e:
          uVar41 = pdb_142d8f140(puVar19,puVar36,&UNK_1433368f0,4);
          *(undefined8 *)(&UNK_143337720 + uVar35) = uVar41;
          *(byte *)puVar13 = 1;
          return puVar13;
        case 0x2d:
          goto code_r0x0001417c1f87;
        case 0x2f:
code_r0x0001417c1fbf:
          uVar12 = unaff_RBP[-4];
          if (0 < (longlong)uVar12) {
            pbVar2 = (byte *)unaff_RBP[-1];
            *(undefined8 *)(puVar30 + -8) = 0x1417c1fd7;
            pub_1406abac0(pbVar2,uVar12,1);
            puVar13 = extraout_RAX;
          }
          return puVar13;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x36:
          *(uint *)puVar13 = (uint)*puVar13 + (int)puVar13;
          *(byte *)puVar13 = (byte)*puVar13 + cVar6;
          *(byte *)puVar13 = (byte)*puVar13 + cVar6;
        case 0x35:
          *(char *)(uVar35 + 0x1b8f4b060) = *(char *)(uVar35 + 0x1b8f4b060) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x33:
          puVar13 = puVar16;
          goto pdb_140f679a0;
        case 0x34:
          pcVar4 = (code *)swi(3);
          puVar14 = (ulonglong *)(*pcVar4)();
          return puVar14;
        default:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x43:
        case 0x45:
code_r0x0001417c2dad:
          return puVar13;
        case 0x48:
          puVar32 = auStack_80;
          unaff_RBP = puVar19 + 8;
          puVar13 = (ulonglong *)(puVar19[6] * 2);
          goto code_r0x0001417c2e2a;
        case 0x4a:
          *(byte *)puVar36 = (byte)*puVar36 + (char)puVar36;
          *(byte *)puVar13 = (byte)*puVar13 + cVar6;
code_r0x0001417c2e2a:
          puVar14 = (ulonglong *)0x0;
          if (puVar13 != (ulonglong *)0x0) {
            pbVar2 = *(byte **)(unaff_RBP[-3] + 8);
            uVar12 = unaff_RBP[-2];
            *(undefined **)(puVar32 + -8) = &UNK_1417c2e46;
            pub_1406abac0(pbVar2,uVar12,1);
            puVar14 = extraout_RAX_01;
          }
          return puVar14;
        case 0x4b:
          puStack_48 = puVar19;
code_r0x0001417c2dd5:
          puVar31 = auStack_80;
          unaff_RBP = puVar19 + 8;
          puVar19 = *(ulonglong **)(puVar19[5] + 0x10);
code_r0x0001417c2de1:
          *(undefined **)(puVar31 + -8) = &UNK_1417c2de6;
          puVar14 = (ulonglong *)func_0x000151ccb92e();
          if (puVar19 != (ulonglong *)0x0) {
            pbVar2 = (byte *)unaff_RBP[-2];
            *(undefined **)(puVar31 + -8) = &UNK_1417c2dfe;
            pub_1406abac0(pbVar2,(longlong)puVar19 << 5,8);
            puVar14 = extraout_RAX_00;
          }
          return puVar14;
        case 0x4c:
          puVar1 = (uint *)(&UNK_1433376eb + uVar35);
          *puVar1 = *puVar1 >> 6 | *puVar1 << 0x1a;
code_r0x0001417c31c2:
          param_2 = puVar19;
          in_R11 = (ulonglong *)((ulonglong)in_R11 | (ulonglong)param_1);
LAB_1417c31c5:
          in_R11 = (ulonglong *)((longlong)in_R11 << ((char)puVar36 * '\b' & 0x3fU) | param_2[7]);
          param_2[7] = (ulonglong)in_R11;
          puVar19 = param_2;
        case 0x4e:
          if (in_R10 < (ulonglong *)0x5) {
            puVar16 = (ulonglong *)puVar19[3];
code_r0x0001417c31f0:
            uVar11 = (ulonglong)puVar16 ^ (ulonglong)in_R11;
            uVar12 = puVar19[2];
            uVar35 = *puVar19 + uVar12;
            uVar34 = (uVar12 << 0xd | uVar12 >> 0x33) ^ uVar35;
            uVar18 = (uVar11 << 0x10 | uVar11 >> 0x30) ^ puVar19[1] + uVar11;
            uVar11 = puVar19[1] + uVar11 + uVar34;
            uVar12 = (uVar35 << 0x20 | uVar35 >> 0x20) + uVar18;
            puVar19[2] = (uVar34 << 0x11 | uVar34 >> 0x2f) ^ uVar11;
            puVar19[3] = (uVar18 << 0x15 | uVar18 >> 0x2b) ^ uVar12;
            puVar19[1] = uVar11 << 0x20 | uVar11 >> 0x20;
            *puVar19 = uVar12 ^ (ulonglong)in_R11;
            if (puVar36 == (ulonglong *)0x8) {
              puVar36 = (ulonglong *)0x4;
              in_R10 = (ulonglong *)0x0;
              puVar13 = (ulonglong *)0x4;
            }
            else {
              puVar36 = (ulonglong *)((longlong)puVar36 + -4);
              puVar13 = (ulonglong *)0x0;
              puVar37 = (ulonglong *)0x0;
code_r0x0001417c32af:
              param_2 = puVar19;
              if ((ulonglong *)((ulonglong)puVar13 | 1) < puVar36) {
LAB_1417c3260:
                puVar37 = (ulonglong *)
                          ((ulonglong)puVar37 |
                          (ulonglong)
                          *(ushort *)
                           ((longlong)puVar13 + (longlong)((longlong)auStack_54 + (longlong)in_R10))
                          << ((char)puVar13 * '\b' & 0x3fU));
                puVar13 = (ulonglong *)((ulonglong)puVar13 | 2);
                puVar19 = param_2;
              }
            }
LAB_1417c327e:
            param_2 = puVar19;
            if (puVar13 < puVar36) {
              in_R10 = (ulonglong *)((longlong)in_R10 + (longlong)puVar13);
code_r0x0001417c3286:
              param_2 = puVar19;
              uVar10 = (int)puVar13 << 3;
              puVar13 = (ulonglong *)(ulonglong)uVar10;
              in_R10 = (ulonglong *)
                       ((ulonglong)*(byte *)((longlong)auStack_54 + (longlong)in_R10) <<
                       ((byte)uVar10 & 0x3f));
code_r0x0001417c3294:
              puVar37 = (ulonglong *)((ulonglong)puVar37 | (ulonglong)in_R10);
            }
            param_2[7] = (ulonglong)puVar37;
            puVar19 = param_2;
          }
          else {
            puVar36 = (ulonglong *)((longlong)puVar36 + 4);
          }
          puVar19[8] = (ulonglong)puVar36;
code_r0x0001417c329f:
          return puVar13;
        case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x50:
          goto code_r0x0001417c32ca;
        case 0x51:
          goto code_r0x0001417c3347;
        case 0x52:
          puStack_38 = (ulonglong *)((ulonglong)puVar13 & 0xffffffffffffff20);
          goto code_r0x0001417c337c;
        case 0x53:
          puStack_38 = (ulonglong *)CONCAT44(puStack_38._4_4_,(int)puVar13);
code_r0x0001417c3319:
          puVar14 = (ulonglong *)pdb_140f66090(puVar16,&UNK_143336a64,7,&bStack_28);
          return puVar14;
        case 0x54:
          *(int *)((longlong)param_1 + 99) = *(int *)((longlong)param_1 + 99) + 0x43337718;
          goto code_r0x0001417c32da;
        case 0x55:
          puVar33 = (undefined1 *)(ulonglong)((int)auStack_58 + 0x38);
code_r0x0001417c3347:
          *(undefined8 *)(puVar33 + -8) = 0x1417c335e;
          puVar14 = (ulonglong *)pdb_140f66090(puVar16,&UNK_143336a6b,5,puVar33 + 0x30);
          return puVar14;
        case 0x56:
code_r0x0001417c337c:
          puVar14 = (ulonglong *)pdb_140f66090();
          return puVar14;
        case 0x57:
          if (bVar39) {
            puVar13 = (ulonglong *)(**(code **)(uVar35 + 0x17bf7fa60))();
          }
code_r0x0001417c3335:
          return puVar13;
        case 0x58:
code_r0x0001417c34cb:
          puVar13 = (ulonglong *)((ulonglong)puVar13 & 0xffffffffffffff30);
          auStack_30[0] = (byte)&stack0xffffffffffffffe8;
          auStack_30._1_4_ = (undefined4)((ulonglong)&stack0xffffffffffffffe8 >> 8);
          stack0xffffffffffffffd5 = (undefined3)((ulonglong)&stack0xffffffffffffffe8 >> 0x28);
          puStack_38 = (ulonglong *)0x2;
        case 0x5c:
code_r0x0001417c34ef:
          puVar14 = (ulonglong *)pdb_140f66e50(puVar13);
          return puVar14;
        case 0x59:
code_r0x0001417c3564:
code_r0x0001417c356a:
          puVar14 = (ulonglong *)pdb_140f66090(puVar13);
          return puVar14;
        case 0x5a:
          goto code_r0x0001417c3519;
        case 0x5b:
          puVar13 = (ulonglong *)((ulonglong)puVar13 & 0xffffffff);
          goto pdb_140f679a0;
        case 0x5d:
          pcVar4 = (code *)swi(3);
          puVar14 = (ulonglong *)(*pcVar4)();
          return puVar14;
        case 0x5e:
          pcVar4 = (code *)swi(3);
          puVar14 = (ulonglong *)(*pcVar4)();
          return puVar14;
        case 0x5f:
        case 0x60:
        case 0x61:
          uRam00000000e5637560 = (undefined1)((ulonglong)puVar13 >> 8);
          param_1 = (ulonglong *)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + '\x01');
          puVar13 = (ulonglong *)(ulonglong)uRama1a7fe48a1e9fe48;
          *(byte *)((longlong)puVar19 + -0x5e) = *(byte *)((longlong)puVar19 + -0x5e) + 1;
          *(byte *)((longlong)unaff_RBP + -0x5e) = *(byte *)((longlong)unaff_RBP + -0x5e) + 1;
          *(byte *)puVar19 = (byte)*puVar19 - 1;
        case 0x62:
        case 99:
        case 100:
        case 0x65:
          *(byte *)((longlong)puVar13 + 0x2ffe48a1) = *(byte *)((longlong)puVar13 + 0x2ffe48a1) - 1;
          uRama1e9fe48a1c6fe48 = SUB81(puVar13,0);
          cRam0000000152fe6ea1 = cRam0000000152fe6ea1 + '\x01';
          uRama20cfe48a275fe48 = uRama1e9fe48a1c6fe48;
          *(byte *)((longlong)param_1 + -0x5d) = *(byte *)((longlong)param_1 + -0x5d) - 1;
          *(byte *)((longlong)param_1 + -0x5c) = *(byte *)((longlong)param_1 + -0x5c) + 1;
          *(byte *)((longlong)puVar13 + 0x56fe48a3) = *(byte *)((longlong)puVar13 + 0x56fe48a3) + 1;
          iRam0000000100002600 = CONCAT31(iRam0000000100002600._1_3_,(byte)*param_1);
          *(byte *)unaff_RBX = (byte)*unaff_RBX + 1;
          iRam0000000100002600._0_2_ =
               CONCAT11(*(byte *)((longlong)param_1 + 1),(undefined1)iRam0000000100002600);
          *(byte *)((longlong)param_1 + -0x5a) = *(byte *)((longlong)param_1 + -0x5a) + 1;
          *(byte *)((longlong)param_1 + -0x5a) = *(byte *)((longlong)param_1 + -0x5a) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
code_r0x0001417c1861:
        param_1[1] = (ulonglong)puVar13;
        *param_1 = 8;
        return param_1;
      case 0x16:
        goto code_r0x0001417c1929;
      case 0x17:
        goto code_r0x0001417c194c;
      case 0x18:
        goto code_r0x0001417c18e3;
      case 0x19:
        *(byte *)((longlong)param_1 + -0x3d) = *(byte *)((longlong)param_1 + -0x3d) & (byte)param_2;
LAB_1417c1a25:
        uVar12 = pdb_142d8f140(puVar19,puVar36,&UNK_143336a70,4);
        puVar13[1] = uVar12;
        *(byte *)puVar13 = 1;
        return puVar13;
      case 0x1a:
      case 0x1d:
      case 0x1f:
      case 0x20:
        puVar16 = (ulonglong *)(ulonglong)(uVar10 ^ 0x776f646e);
        unaff_RBX = param_2;
        goto code_r0x0001417c1b1e;
      case 0x1b:
        goto code_r0x0001417c1af8;
      case 0x1c:
        *(byte *)((longlong)puVar13 + -0x77) = *(byte *)((longlong)puVar13 + -0x77) & bVar7;
        puStack_a0 = &stack0xffffffffffffffa0;
        puVar14 = (ulonglong *)&stack0xffffffffffffffa0;
        cVar6 = '\a';
        do {
          unaff_RBP = unaff_RBP + -1;
          puVar14 = puVar14 + -1;
          *puVar14 = *unaff_RBP;
          cVar6 = cVar6 + -1;
        } while ('\0' < cVar6);
        puVar21 = auStack_8de9;
        unaff_RBX = param_2;
code_r0x0001417c1a68:
        puVar16 = (ulonglong *)((longlong)puVar36 + -4);
        param_2 = puVar19;
        puVar25 = puVar21;
        puVar14 = (ulonglong *)puVar21;
        if ((ulonglong *)0x9 < puVar16) {
LAB_1417c1b8e:
          puVar16 = puVar19;
          puVar26 = puVar25;
code_r0x0001417c1ba4:
          puVar23 = puVar26;
          param_1 = puVar13;
code_r0x0001417c1ba7:
          *(undefined8 *)(puVar23 + -8) = 0x1417c1bac;
          uVar12 = pdb_142d8f140(puVar16);
          param_1[1] = uVar12;
          *(byte *)param_1 = 1;
          return param_1;
        }
code_r0x0001417c1a76:
        puVar19 = param_2;
        puVar25 = (undefined1 *)puVar14;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(puVar16) {
        case (ulonglong *)0x0:
          if ((uint)*param_2 != 0x67616c46) goto LAB_1417c1b8e;
code_r0x0001417c1a92:
          *(byte *)((longlong)puVar13 + 1) = 5;
          break;
        case (ulonglong *)0x1:
        case (ulonglong *)0x4:
        case (ulonglong *)0x6:
        case (ulonglong *)0x7:
          goto LAB_1417c1b8e;
        case (ulonglong *)0x2:
          puVar16 = (ulonglong *)(ulonglong)((uint)*param_2 ^ 0x69617453);
          puVar37 = (ulonglong *)(ulonglong)(*(ushort *)((longlong)param_2 + 4) ^ 0x7372);
          puVar24 = puVar14;
code_r0x0001417c1b6f:
          bVar38 = (int)puVar37 == 0 && (int)puVar16 == 0;
          puVar19 = param_2;
code_r0x0001417c1b72:
          puVar25 = (undefined1 *)puVar24;
          if (!bVar38) goto LAB_1417c1b8e;
code_r0x0001417c1b74:
          *(byte *)((longlong)puVar13 + 1) = 7;
          break;
        case (ulonglong *)0x3:
          puVar16 = (ulonglong *)(ulonglong)((uint)*param_2 ^ 0x6d696843);
          puVar37 = (ulonglong *)(ulonglong)(*(uint *)((longlong)param_2 + 3) ^ 0x79656e6d);
code_r0x0001417c1ad9:
          if ((int)puVar37 == 0 && (int)puVar16 == 0) {
            *(byte *)((longlong)puVar13 + 1) = 3;
          }
          else {
            puVar23 = (undefined1 *)puVar14;
            if (*(int *)((longlong)param_2 + 3) == 0x6e726574 && (uint)*param_2 == 0x746e614c) {
              *(byte *)((longlong)puVar13 + 1) = 4;
            }
            else {
code_r0x0001417c1afc:
              uVar10 = (uint)*param_2 ^ 0x74756c43;
              puVar37 = (ulonglong *)(ulonglong)(*(uint *)((longlong)param_2 + 3) ^ 0x72657474);
code_r0x0001417c1b0d:
              puVar19 = param_2;
              puVar25 = puVar23;
              if ((int)puVar37 != 0 || uVar10 != 0) goto LAB_1417c1b8e;
              *(byte *)((longlong)puVar13 + 1) = 6;
            }
          }
          break;
        case (ulonglong *)0x5:
          uVar12 = *param_2 ^ 0x696c53776f727241;
          puVar37 = (ulonglong *)((ulonglong)(byte)param_2[1] ^ 0x74);
code_r0x0001417c1b51:
          bVar38 = puVar37 == (ulonglong *)0x0 && uVar12 == 0;
code_r0x0001417c1b54:
          puVar19 = param_2;
          puVar25 = (undefined1 *)puVar14;
          if (!bVar38) goto LAB_1417c1b8e;
          *(byte *)((longlong)puVar13 + 1) = 2;
          break;
        case (ulonglong *)0x8:
          puVar16 = (ulonglong *)(*param_2 ^ 0x6957636968746f47);
code_r0x0001417c1b1e:
          puVar25 = (undefined1 *)
                    (ulonglong)(uint)(*(int *)((longlong)unaff_RBX + 0x57) * 0xa334869);
          if ((uint)puVar19[1] != 0x776f646e || puVar16 != (ulonglong *)0x0) goto LAB_1417c1b8e;
          *(byte *)((longlong)puVar13 + 1) = 1;
          break;
        default:
          puVar16 = (ulonglong *)(*param_2 ^ 0x5765676174746f43);
          puVar22 = (undefined1 *)puVar14;
code_r0x0001417c1aa8:
          puVar37 = (ulonglong *)(*(ulonglong *)((longlong)param_2 + 5) ^ 0x776f646e69576567);
code_r0x0001417c1ab6:
          puVar19 = param_2;
          puVar25 = puVar22;
          if (puVar37 != (ulonglong *)0x0 || puVar16 != (ulonglong *)0x0) goto LAB_1417c1b8e;
code_r0x0001417c1abf:
          *(byte *)((longlong)puVar13 + 1) = 0;
        }
        puVar16 = (ulonglong *)0x0;
code_r0x0001417c1b86:
        *(byte *)puVar13 = (byte)puVar16;
        return puVar13;
      case 0x1e:
        puVar13 = (ulonglong *)((longlong)puVar13 + *(longlong *)(&UNK_1433376dd + uVar12));
        puVar14 = unaff_RBP + 1;
        param_2 = puVar19;
        goto code_r0x0001417c1ad9;
      case 0x21:
        puVar13 = (ulonglong *)((longlong)puVar13 + 0xfc90949);
        *(byte *)puVar13 = *(byte *)puVar13 + (char)puVar13;
        *(uint *)puVar13 = *(uint *)puVar13 + (int)puVar13;
        goto code_r0x0001417c1abf;
      case 0x22:
        return puVar13;
      case 0x23:
        puVar13 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar13 >> 8),bStack_28 + 0x41);
        puVar16 = (ulonglong *)(ulonglong)(uVar10 ^ 0x7372);
        param_2 = puVar19;
        puVar24 = (ulonglong *)auStack_58;
        goto code_r0x0001417c1b6f;
      case 0x24:
        goto code_r0x0001417c1ba7;
      case 0x25:
        iRam0000000100002600 = iRam0000000100002600 + iVar9;
        goto code_r0x0001417c1b74;
      case 0x26:
        *(int *)(&UNK_14333768d + uVar12) = *(int *)(&UNK_14333768d + uVar12) + iVar9;
        *(byte *)puVar13 = (byte)*puVar13 | bStack_28;
        *(byte *)puVar13 = (byte)*puVar13 + bStack_28;
        puVar25 = auStack_58;
        goto LAB_1417c1b8e;
      case 0x27:
        return puVar13;
      case 0x28:
        *(uint *)((longlong)puVar13 + 1) = *(uint *)((longlong)puVar13 + 1) | 0x80e0ffc8;
        *(byte *)puVar13 = (byte)*puVar13 + bStack_28;
        *(byte *)((longlong)puVar13 + 0xf6f017a) =
             *(byte *)((longlong)puVar13 + 0xf6f017a) + bStack_28;
        *(byte *)puVar13 = (byte)*puVar13 + bStack_28;
        *(byte *)((longlong)param_1 + -0x39) =
             *(byte *)((longlong)param_1 + -0x39) + (char)uStack_27;
        halt_baddata();
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x32:
        puVar13 = (ulonglong *)(ulonglong)(uint)(int)(short)uVar5;
        *(byte *)puVar13 = (byte)*puVar13 + bStack_28;
        *(byte *)((longlong)puVar13 + 0xf68087a) =
             *(byte *)((longlong)puVar13 + 0xf68087a) + bStack_28;
        bVar38 = (POPCOUNT((uint)param_1[-0x10000000] & uVar10 & 0xff) & 1U) == 0;
        goto code_r0x0001417c1ecb;
      case 0x31:
        return puVar13;
      case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x34:
        pbVar2 = (byte *)((longlong)unaff_RBP + (longlong)param_1 * 2 + 0x1e);
        *pbVar2 = *pbVar2 | (byte)((ulonglong)puVar16 >> 8);
code_r0x0001417c1f3a:
        puVar27 = auStack_58;
        if (((*(byte *)((longlong)puVar19 + 9) != 0x6f) ||
            (puVar27 = auStack_58, *(byte *)((longlong)puVar19 + 10) != 0x73)) ||
           ((puVar27 = auStack_58, *(byte *)((longlong)puVar19 + 0xb) != 0x75 ||
            (puVar27 = auStack_58, *(byte *)((longlong)puVar19 + 0xc) != 0x72))))
        goto LAB_1417c1f58;
        bVar7 = *(byte *)((longlong)puVar19 + 0xd);
        puVar17 = auStack_58;
        goto joined_r0x0001417c1f56;
      case 0x35:
        goto code_r0x0001417c1f5d;
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3f:
        puStack_48 = (ulonglong *)&UNK_1433376d4;
        puVar30 = auStack_90;
        unaff_RBP = (ulonglong *)&UNK_143337714;
        puStack_68 = param_1;
        goto code_r0x0001417c1fbf;
      case 0x3e:
        bVar38 = true;
        if (0xfffffffebccc892b >= uVar12) {
          *(byte *)((longlong)puVar13 + -0x73) = *(byte *)((longlong)puVar13 + -0x73) - bVar7;
          puVar30 = &stack0xffffffffffffffa0;
          goto code_r0x0001417c1fbf;
        }
code_r0x0001417c1f45:
        do {
          bVar7 = (char)puVar13 + *(byte *)((longlong)puVar13 + 0x75750b7a) + bVar38;
          bVar38 = false;
          bVar8 = bVar7 | 0x80;
          puVar13 = (ulonglong *)(CONCAT71((int7)((ulonglong)puVar13 >> 8),bVar7) | 0x80);
          if ((POPCOUNT(bVar8) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar16 = (ulonglong *)((longlong)puVar16 + -1);
        } while (puVar16 != (ulonglong *)0x0 && bVar8 != 0);
        goto code_r0x0001417c1f5d;
      case 0x40:
        *(uint *)(puVar13 + 0x108d129) = (uint)puVar13[0x108d129] + 0x433376d4;
        puVar29 = auStack_58;
        goto code_r0x0001417c1f84;
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x47:
        pcVar4 = (code *)swi(3);
        puVar14 = (ulonglong *)(*pcVar4)();
        return puVar14;
      case 0x44:
        puVar1 = (uint *)((longlong)puVar13 + -0x73);
        *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
        puVar13 = puVar16;
        goto pdb_140f679a0;
      case 0x45:
        pcVar4 = (code *)swi(3);
        puVar14 = (ulonglong *)(*pcVar4)();
        return puVar14;
      case 0x46:
        pcVar4 = (code *)swi(3);
        puVar14 = (ulonglong *)(*pcVar4)();
        return puVar14;
      default:
        (&UNK_14333768c)[uVar12] = (&UNK_14333768c)[uVar12] | bStack_28;
        *(uint *)puVar13 = (uint)*puVar13 + iVar9;
        *(byte *)puVar13 = (byte)*puVar13 + bStack_28;
        goto code_r0x0001417c2d5b;
      case 0x54:
      case 0x56:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x59:
        puStack_48 = (ulonglong *)CONCAT44(puStack_48._4_4_,0x433376d4);
        goto code_r0x0001417c2dd5;
      case 0x5b:
        goto code_r0x0001417c2de1;
      case 0x5c:
        pdb_14098ae50();
        if (((ulonglong *)unaff_RBP[-3])[2] == 0) {
          return (ulonglong *)unaff_RBP[-3];
        }
        uVar35 = 8;
        uVar12 = unaff_RBP[-2];
        goto code_r0x0001406abac0;
      case 0x5d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x5e:
        goto code_r0x0001417c31f0;
      case 0x5f:
        goto code_r0x0001417c3191;
      case 0x60:
        goto code_r0x0001417c31c2;
      case 0x61:
        goto code_r0x0001417c3286;
      case 0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 99:
        _UNK_143337679 = _UNK_143337679 << 0xb;
        pcVar4 = (code *)swi(3);
        puVar14 = (ulonglong *)(*pcVar4)();
        return puVar14;
      case 100:
        goto code_r0x0001417c32d1;
      case 0x65:
        goto code_r0x0001417c329f;
      case 0x66:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x67:
        goto code_r0x0001417c3335;
      case 0x68:
        pbVar2 = &UNK_1433376d3 + uVar12;
        *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
        puVar16 = (ulonglong *)(&UNK_1433376d3 + uVar12);
        if (puVar16 == (ulonglong *)0x0 || bVar38) {
          puStack_38 = (ulonglong *)&UNK_143336f88;
          goto code_r0x0001417c337c;
        }
        puStack_38 = (ulonglong *)&UNK_143336fe8;
        goto code_r0x0001417c3347;
      case 0x69:
        goto pdb_140f679a0;
      case 0x6a:
        *(uint *)((longlong)puVar13 + -0x73) = *(int *)((longlong)puVar13 + -0x73) + uVar10;
        param_2 = puVar19;
        goto code_r0x0001417c3519;
      case 0x6b:
        puVar13 = (ulonglong *)((ulonglong)puVar13 & 0xffffffffffffff28);
        goto code_r0x0001417c34cb;
      case 0x6c:
        goto code_r0x0001417c34ef;
      case 0x6d:
        goto pdb_140f679a0;
      case 0x6e:
        pcVar4 = (code *)swi(3);
        puVar14 = (ulonglong *)(*pcVar4)();
        return puVar14;
      case 0x6f:
        goto code_r0x0001417c356a;
      case 0x70:
      case 0x71:
      case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
        UNK_1433376d4 = UNK_1433376d4 + '\x01';
        return puVar13;
      }
      *param_1 = (ulonglong)puVar13;
      *(byte *)(param_2 + 9) = (byte)param_2[9] + 1;
code_r0x0001417c0648:
      uVar12 = param_2[5];
      if (param_2[4] <= uVar12) goto code_r0x0001417c0685;
      goto code_r0x0001417c065f;
    }
    if ((0x100002600U >> ((ulonglong)puVar37 & 0x3f) & 1) != 0) goto code_r0x0001417c046d;
    if (puVar37 != (ulonglong *)0x22) goto LAB_1417c04d0;
    uVar41 = pdb_1416578a0(auStack_30);
    puVar16 = (ulonglong *)&UNK_1433376b0;
    uVar12 = (ulonglong)*(int *)(&UNK_1433376b0 + (ulonglong)auStack_30[0] * 4);
    bVar38 = 0xfffffffebccc894f < uVar12;
    puVar13 = (ulonglong *)(&UNK_1433376b0 + uVar12);
    bVar40 = puVar13 == (ulonglong *)0x0;
    bVar7 = (byte)puVar13;
    uVar10 = (uint)puVar13;
    uVar15 = (undefined7)((ulonglong)puVar13 >> 8);
    puVar19 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(auStack_30[0]) {
    case 0:
      *param_1 = 0;
      return param_1;
    case 1:
      *param_1 = 1;
      return param_1;
    case 2:
      *param_1 = 2;
      return param_1;
    case 3:
    case 0xc:
      *param_1 = 3;
      return param_1;
    case 4:
      *param_1 = 4;
      return param_1;
    case 5:
      *param_1 = 5;
      return param_1;
    case 6:
      auStack_30[0] = 0xd;
      uVar12 = pdb_142db90e0(auStack_30,&UNK_143323610,&UNK_143322608);
      goto LAB_1417c052b;
    case 7:
      *param_1 = 7;
      return param_1;
    case 8:
      uVar12 = CONCAT35((undefined3)uStack_23,CONCAT41(uStack_27,bStack_28));
      goto LAB_1417c052b;
    case 9:
      uVar11 = (ulonglong)puVar13 & 0xffffffffffffff28;
      goto code_r0x0001417c04e3;
    case 10:
      puVar13 = (ulonglong *)((ulonglong)(uVar10 + 0xe9000000) & 0xffffffffffffff01);
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
      param_2 = unaff_RBX;
      goto code_r0x0001417c0583;
    case 0xb:
      goto code_r0x0001417c0591;
    case 0xd:
      param_2 = unaff_RBX;
      goto code_r0x0001417c05d6;
    case 0xe:
      param_2 = (ulonglong *)((ulonglong)unaff_RBX & 0xffffffff);
      goto code_r0x0001417c05e7;
    case 0xf:
      *(int *)(&UNK_143337635 + uVar12) = *(int *)(&UNK_143337635 + uVar12) + -1;
      *(byte *)((longlong)unaff_RBP + 0x7f) = 0;
      *(uint *)puVar13 = (uint)*puVar13 + uVar10;
      *(byte *)puVar13 = (byte)*puVar13 + bVar7;
      param_2 = unaff_RBX;
      goto code_r0x0001417c05b0;
    case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
      goto code_r0x0001417c0606;
    case 0x12:
      if (-0x1433376b1 < (longlong)uVar12) {
        (&UNK_143337633)[uVar12] = (&UNK_143337633)[uVar12] & 0xb0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)((longlong)unaff_RBP + 0xd) =
           *(byte *)((longlong)unaff_RBP + 0xd) + (char)((ulonglong)param_2 >> 8);
      return puVar13;
    case 0x13:
      uVar35 = 4;
      puVar13 = (ulonglong *)pub_1406abab0(4,1);
      if (puVar13 != (ulonglong *)0x0) {
        *(uint *)puVar13 = 0x68676948;
        goto code_r0x0001417c0d50;
      }
      goto code_r0x0001417c0d69;
    case 0x14:
      pcVar4 = (code *)swi(3);
      puVar14 = (ulonglong *)(*pcVar4)();
      return puVar14;
    case 0x15:
      puVar14 = (ulonglong *)(*(code *)&UNK_1433376b0)();
      return puVar14;
    case 0x16:
      pdb_141be78f0();
      puVar19 = (ulonglong *)(ulonglong)bStack_28;
      puVar13 = (ulonglong *)CONCAT44(uStack_1c,CONCAT31(uStack_1f,uStack_23._3_1_));
      if (bStack_28 == 4) goto code_r0x0001417c1564;
      goto LAB_1417c1577;
    case 0x17:
      goto code_r0x0001417c16a0;
    case 0x18:
      goto code_r0x0001417c15bf;
    case 0x19:
      goto code_r0x0001417c1639;
    case 0x1a:
      puVar13 = (ulonglong *)((ulonglong)puVar13 & 0xffffffffffffff30);
      goto code_r0x0001417c1564;
    case 0x1b:
      puVar16 = (ulonglong *)((ulonglong)auStack_30 & 0xffffffff);
      goto code_r0x0001417c18e3;
    case 0x1c:
      unaff_RSI = (ulonglong)
                  CONCAT61((int6)(unaff_RSI >> 0x10),(char)(unaff_RSI >> 8) + bVar7 + bVar38) << 8;
      goto LAB_1417c1875;
    case 0x1d:
      puVar13 = (ulonglong *)(ulonglong)(byte)(bVar7 + 0x81);
      goto LAB_1417c1875;
    case 0x1e:
      puVar13 = unaff_RDI;
      param_2 = unaff_RBX;
      goto code_r0x0001417c185c;
    case 0x1f:
      puVar16 = (ulonglong *)((ulonglong)auStack_30 & 0xffffffff);
      goto code_r0x0001417c1906;
    case 0x20:
      puVar16 = (ulonglong *)((ulonglong)auStack_30 & 0xffffffff);
      goto code_r0x0001417c1929;
    case 0x21:
      if (!SCARRY8(uVar12,0x1433376b0)) {
        return puVar13;
      }
      return (ulonglong *)((ulonglong)param_1 & 0xffffffff);
    case 0x22:
      if (!bVar40) {
        puVar13 = (ulonglong *)CONCAT71(uVar15,bVar7 + 0x41);
        goto LAB_1417c1a25;
      }
      puVar21 = auStack_78;
      puVar13 = (ulonglong *)&UNK_1433376b0;
      goto code_r0x0001417c1a68;
    case 0x23:
    case 0x26:
    case 0x28:
    case 0x29:
      if (bVar40) goto code_r0x0001417c1b6f;
      if (bVar38) {
        uVar12 = 0x433376c4;
        goto code_r0x0001417c1b51;
      }
      uVar10 = *(uint *)((longlong)param_2 + 3) ^ 0x433376b0;
      goto code_r0x0001417c1b0d;
    case 0x24:
      puVar14 = param_1;
      if (-1 < (longlong)puVar13) goto code_r0x0001417c1b1a;
      puVar16 = (ulonglong *)(ulonglong)(*(uint *)((longlong)param_2 + 3) ^ 0x433376b0);
      puVar14 = (ulonglong *)auStack_58;
      goto code_r0x0001417c1ad9;
    case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x27:
      puVar16 = (ulonglong *)(ulonglong)(*(uint *)((longlong)param_2 + 5) ^ 0x433376b0);
      goto code_r0x0001417c1ab6;
    case 0x2a:
      *(byte *)puVar13 = (byte)*puVar13 + bVar7;
      goto code_r0x0001417c1a92;
    case 0x2b:
      *(uint *)unaff_RBX = (uint)*unaff_RBX + uVar10;
      *(byte *)puVar13 = 0;
      return puVar13;
    case 0x2c:
      goto code_r0x0001417c1b3c;
    case 0x2d:
      puVar13 = (ulonglong *)CONCAT71(uVar15,bVar7 + 0x31);
      goto code_r0x0001417c1b86;
    case 0x2e:
      bVar38 = false;
      puVar14 = (ulonglong *)auStack_58;
      goto code_r0x0001417c1b54;
    case 0x2f:
      bVar38 = false;
      puVar24 = (ulonglong *)auStack_58;
      goto code_r0x0001417c1b72;
    case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3b:
      goto code_r0x0001417c1e98;
    case 0x3a:
      return (ulonglong *)((ulonglong)param_1 & 0xffffffff);
    case 0x3c:
                    /* WARNING: Could not emulate address calculation at 0x0001417c1e4b */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (ulonglong *)
                (*(code *)((longlong)*(int *)((longlong)puVar13 * 4 + 0x43337770) + 0x43337770))();
      return puVar14;
    case 0x3d:
      puVar27 = auStack_58;
      if ((*(byte *)((longlong)param_2 + 3) == 0x69) &&
         (puVar27 = auStack_58, *(byte *)((longlong)param_2 + 4) == 100)) {
code_r0x0001417c1f22:
        puVar27 = auStack_58;
        if ((*(byte *)((longlong)param_2 + 5) == 0x45) &&
           (((puVar27 = auStack_58, *(byte *)((longlong)param_2 + 6) == 0x6e &&
             (puVar27 = auStack_58, *(byte *)((longlong)param_2 + 7) == 99)) &&
            (puVar27 = auStack_58, (byte)param_2[1] == 0x6c)))) goto code_r0x0001417c1f3a;
      }
      break;
    case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x48:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x47:
      puVar27 = auStack_58;
      if (bVar40) goto code_r0x0001417c1f22;
      break;
    case 0x49:
      (&UNK_14333763d)[uVar12] = 0xb0;
      puVar16 = (ulonglong *)&UNK_1433376af;
      if (!bVar40) goto code_r0x0001417c1f45;
      goto code_r0x0001417c1f5d;
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x50:
      if ((POPCOUNT((ulonglong)puVar13 & 0xff) & 1U) == 0) {
        pcVar4 = (code *)swi(3);
        puVar14 = (ulonglong *)(*pcVar4)();
        return puVar14;
      }
      pcVar4 = (code *)swi(3);
      puVar14 = (ulonglong *)(*pcVar4)();
      return puVar14;
    case 0x4d:
      pcVar4 = (code *)swi(3);
      puVar14 = (ulonglong *)(*pcVar4)();
      return puVar14;
    case 0x4e:
      pcVar4 = (code *)swi(3);
      puVar14 = (ulonglong *)(*pcVar4)();
      return puVar14;
    case 0x4f:
      pcVar4 = (code *)swi(3);
      puVar14 = (ulonglong *)(*pcVar4)();
      return puVar14;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5d:
    case 0x5f:
      pdb_1409a45e0();
      puVar13 = (ulonglong *)unaff_RBP[-3];
      if (SBORROW8(0,unaff_RBP[-2])) {
        return puVar13;
      }
      if (unaff_RBP[-2] == 0) {
        return puVar13;
      }
    case 0x65:
code_r0x0001417c2d5b:
      uVar12 = puVar13[1];
      uVar35 = 1;
code_r0x0001406abac0:
      uStack_23 = CONCAT13((char)param_1,(undefined3)uStack_23);
      uStack_1f = (undefined3)((ulonglong)param_1 >> 8);
      uStack_1c = (undefined4)((ulonglong)param_1 >> 0x20);
      if (0x10 < uVar35) {
        uVar12 = *(ulonglong *)(uVar12 - 8);
      }
      puStack_50 = &UNK_140f3c37e;
      uVar41 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (ulonglong *)HeapFree(uVar41,0,uVar12);
      return puVar14;
    case 0x62:
      goto code_r0x0001417c2dad;
    case 100:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x66:
      *(byte *)puVar13 = (byte)*puVar13 + bVar7;
      UNK_14333766a = UNK_14333766a + bVar7;
      *(byte *)puVar13 = (byte)*puVar13 | bVar7;
      *(byte *)puVar13 = (byte)*puVar13 + bVar7;
      in_R10 = (ulonglong *)((longlong)in_R10 - (longlong)puVar36);
      in_R11 = (ulonglong *)0x0;
      uVar35 = 0;
      bVar38 = in_R10 < (ulonglong *)0x4;
      param_1 = (ulonglong *)0x4;
    case 0x68:
      if (bVar38) {
        param_1 = in_R10;
      }
      puVar37 = (ulonglong *)0x433376b0;
      if (!bVar38) {
        in_R11 = puVar37;
      }
      iVar9 = (int)CONCAT71((int7)(uVar35 >> 8),!bVar38);
      puVar13 = (ulonglong *)(ulonglong)(uint)(iVar9 * 4);
      if (iVar9 * 4 + 1U < (uint)param_1) {
code_r0x0001417c3191:
        uVar35 = (ulonglong)auStack_54[(ulonglong)((ulonglong *)0x3 < in_R10) * 2];
        puVar16 = (ulonglong *)(ulonglong)(uint)((int)puVar13 * 8);
code_r0x0001417c31a6:
        in_R11 = (ulonglong *)((ulonglong)in_R11 | uVar35 << ((byte)puVar16 & 0x3f));
        puVar13 = (ulonglong *)((ulonglong)puVar13 | 2);
        param_2 = puVar19;
      }
      if (puVar13 < param_1) {
        pbVar2 = (byte *)((longlong)auStack_54 + (longlong)puVar13);
        uVar10 = (int)puVar13 << 3;
        puVar13 = (ulonglong *)(ulonglong)uVar10;
        param_1 = (ulonglong *)((ulonglong)*pbVar2 << ((byte)uVar10 & 0x3f));
        puVar19 = param_2;
        goto code_r0x0001417c31c2;
      }
      goto LAB_1417c31c5;
    case 0x67:
      UNK_143337683 = UNK_143337683 + -0x50;
      goto LAB_1417c31c5;
    case 0x69:
      puVar13 = (ulonglong *)(CONCAT71(uVar15,bVar7 + 0x8d) | 0xc5);
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
      *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
      goto code_r0x0001417c31a6;
    case 0x6a:
      puVar13 = (ulonglong *)((ulonglong)puVar13 | 0x14);
      goto LAB_1417c3260;
    case 0x6b:
      goto code_r0x0001417c32da;
    case 0x6c:
      goto code_r0x0001417c3294;
    case 0x6d:
      goto code_r0x0001417c32af;
    case 0x6e:
      puVar13 = (ulonglong *)(ulonglong)(uVar10 | 2);
      goto LAB_1417c327e;
    case 0x6f:
      puStack_38 = puVar13;
      goto code_r0x0001417c337c;
    case 0x70:
      *(int *)(&UNK_143337639 + uVar12) = *(int *)(&UNK_143337639 + uVar12) + 0x433376b0;
      goto code_r0x0001417c3319;
    case 0x71:
      puStack_a8 = &stack0xffffffffffffffa0;
      puVar14 = (ulonglong *)&stack0xffffffffffffffa0;
      puVar24 = (ulonglong *)&stack0xffffffffffffffa0;
      cVar6 = '\b';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar14 = puVar14 + -1;
        *puVar14 = *unaff_RBP;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
code_r0x0001417c32ca:
      puVar16 = (ulonglong *)
                CONCAT71((int7)((ulonglong)puVar16 >> 8),
                         (byte)puVar16 & *(byte *)((longlong)puVar24 + (longlong)puVar16 * 4 + 0x41)
                        );
      *(int *)((longlong)puVar24 + 0x31) = *(int *)((longlong)puVar24 + 0x31) + 1;
      puVar19 = param_2;
code_r0x0001417c32d1:
      if ((ulonglong *)0x1 < puVar16) {
        puVar37 = puVar36;
      }
code_r0x0001417c32da:
                    /* WARNING: Could not recover jumptable at 0x0001417c32eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (ulonglong *)
                (*(code *)(&UNK_143337848 + *(int *)(&UNK_143337848 + (longlong)puVar37 * 4)))
                          (puVar19,&UNK_143337848,
                           &UNK_143337848 + *(int *)(&UNK_143337848 + (longlong)puVar37 * 4));
      return puVar14;
    case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x73:
      puVar14 = (ulonglong *)(**(code **)(uVar12 + 0x18bf7f9f8))();
      return puVar14;
    case 0x74:
      puVar13 = puVar16;
      goto pdb_140f679a0;
    case 0x75:
      goto code_r0x0001417c34cb;
    case 0x76:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x77:
      puStack_e0 = &stack0xffffffffffffffa0;
      puVar14 = (ulonglong *)&stack0xffffffffffffffa0;
      cVar6 = '\x0f';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar14 = puVar14 + -1;
        *puVar14 = *unaff_RBP;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
code_r0x0001417c3519:
      puVar13 = param_2;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (ulonglong *)(**(code **)(puVar13[1] + 0x18))(*puVar13);
      return puVar14;
    case 0x78:
      pbVar2 = &UNK_143337639 + uVar12;
      *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
      puVar13 = (ulonglong *)((ulonglong)puVar13 & 0xffffffffffffff30);
      puStack_38 = (ulonglong *)&UNK_1433371d0;
      goto code_r0x0001417c3564;
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
      *(byte *)(param_1 + 0xa199bb58) = (byte)param_1[0xa199bb58] + 1;
      *(byte *)((longlong)unaff_RBX + -0x5c01b772) =
           *(byte *)((longlong)unaff_RBX + -0x5c01b772) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_1417c1f58:
    *(undefined8 *)(puVar27 + -8) = 0x1417c1f61;
    pdb_140f35800(unaff_RBP + -4);
    puVar28 = puVar27;
    goto code_r0x0001417c1f61;
  }
LAB_1417c0481:
  auStack_30[0] = 5;
  stack0xffffffffffffffd5 = (uint)bStack_28 << 0x18;
LAB_1417c048a:
  auStack_30._1_4_ = 0;
  uVar12 = pdb_142d84ef0(param_2,auStack_30);
  goto LAB_1417c052b;
code_r0x0001417c046d:
  param_2[5] = uVar11;
  uVar12 = uVar11;
  if (uVar11 == param_2[4]) goto LAB_1417c0481;
  goto LAB_1417c045b;
code_r0x0001417c1f5d:
  puVar28 = auStack_58;
code_r0x0001417c1f61:
  unaff_RBP[-1] = unaff_RBP[-3];
code_r0x0001417c1f7a:
  *(undefined8 *)(puVar28 + -8) = 0x1417c1f7f;
  uVar12 = pdb_142d8f140();
  param_1[1] = uVar12;
  puVar29 = puVar28;
code_r0x0001417c1f84:
  *(byte *)param_1 = 1;
code_r0x0001417c1f87:
  uVar12 = unaff_RBP[-4];
  if (0 < (longlong)uVar12) {
    pbVar2 = (byte *)unaff_RBP[-1];
    *(undefined8 *)(puVar29 + -8) = 0x1417c1f9f;
    pub_1406abac0(pbVar2,uVar12,1);
  }
  return param_1;
  while (param_2[5] = uVar12, uVar12 != param_2[4]) {
code_r0x0001417c065f:
    uVar12 = uVar12 + 1;
    bVar7 = *(byte *)((param_2[3] - 1) + uVar12);
    if ((0x20 < (ulonglong)bVar7) || ((0x100002600U >> ((ulonglong)bVar7 & 0x3f) & 1) == 0)) {
      if (bVar7 == 0x7d) {
        param_2[5] = uVar12;
        return param_1;
      }
      auStack_30[0] = 10;
      goto code_r0x0001417c068e;
    }
  }
code_r0x0001417c0685:
  auStack_30[0] = 3;
code_r0x0001417c068e:
  auStack_30._1_4_ = 0;
  stack0xffffffffffffffd5 = (uint)bStack_28 << 0x18;
  uVar12 = pdb_142d855a0(param_2,auStack_30);
LAB_1417c052b:
  param_1[1] = uVar12;
  *param_1 = 8;
  return param_1;
}

