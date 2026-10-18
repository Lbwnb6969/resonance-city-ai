// VA 0x140b699e0, PDB extent 1496 bytes
// country_core::systems::history::history_process::history_process
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/history_process.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140b6b132) overlaps instruction at (ram,0x000140b6b131)
    */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::history::history_process::history_process
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/history_process.rs
   Extent: 1496 */

code *******
pdb_140b699e0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
             code ******param_9)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  code cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auVar8 [16];
  code ****ppppcVar9;
  code ****ppppcVar10;
  longlong *plVar11;
  code *****pppppcVar12;
  uint uVar13;
  ulonglong *puVar14;
  code *****pppppcVar15;
  code ******ppppppcVar16;
  ulonglong uVar17;
  code *******extraout_RAX;
  code *******pppppppcVar18;
  ulonglong uVar19;
  code *******UNRECOVERED_JUMPTABLE_00;
  code ******ppppppcVar20;
  code *******pppppppcVar21;
  code *******pppppppcVar22;
  code *******extraout_RAX_00;
  undefined *puVar23;
  undefined4 uVar24;
  uint uVar25;
  code *****pppppcVar26;
  undefined1 (*pauVar27) [16];
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar28;
  code *******pppppppcVar29;
  code *******unaff_RBP;
  char cVar30;
  code ****ppppcVar31;
  code *******pppppppcVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined8 uVar37;
  code *******pppppppcVar38;
  code *******pppppppcVar39;
  code *******pppppppcVar40;
  char cVar41;
  longlong lVar42;
  code ******ppppppcVar43;
  bool bVar44;
  code *****apppppcStack_220 [3];
  code ****ppppcStack_208;
  undefined4 *puStack_200;
  code *****pppppcStack_1f8;
  ulonglong uStack_1f0;
  code ******ppppppcStack_1e8;
  code ******ppppppcStack_1e0;
  code ******ppppppcStack_1d8;
  code ******ppppppcStack_1d0;
  code *******pppppppcStack_1c8;
  code ******ppppppcStack_1c0;
  code ******ppppppcStack_1b8;
  code ******ppppppcStack_1b0;
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined *puStack_178;
  ushort uStack_170;
  code *****pppppcStack_168;
  undefined1 uStack_160;
  undefined8 *puStack_158;
  code *******pppppppcStack_150;
  code *******pppppppcStack_148;
  code *******pppppppcStack_140;
  code *******pppppppcStack_138;
  undefined1 (*pauStack_130) [16];
  code *******pppppppcStack_128;
  code *******pppppppcStack_120;
  undefined8 uStack_118;
  code *******pppppppcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  code *******pppppppcStack_f8;
  longlong *plStack_f0;
  code *******pppppppcStack_e8;
  longlong *plStack_e0;
  code ******ppppppcStack_d8;
  code ******ppppppcStack_d0;
  code ******ppppppcStack_c8;
  code *******pppppppcStack_c0;
  undefined4 *puStack_b8;
  code *******pppppppcStack_b0;
  ulonglong *puStack_a8;
  undefined8 uStack_a0;
  code *****pppppcStack_98;
  ulonglong *puStack_90;
  code *****pppppcStack_88;
  code ******ppppppcStack_80;
  code ******ppppppcStack_78;
  code *****pppppcStack_70;
  code *******pppppppcStack_68;
  code *******pppppppcStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [4];
  char cStack_4c;
  undefined1 auStack_4b [2];
  char cStack_49;
  undefined8 uStack_48;
  
  ppppppcStack_d8 = param_9;
  plStack_e0 = param_7;
  puStack_a8 = (ulonglong *)*param_4;
  lVar28 = param_4[1];
  uVar19 = *puStack_a8;
  uVar36 = 0;
  uVar17 = uVar19 - *(ulonglong *)(lVar28 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar28 + 0x18)) {
    uVar17 = uVar36;
  }
  uVar35 = uVar19 - *(ulonglong *)(lVar28 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar28 + 0x38)) {
    uVar35 = uVar36;
  }
  pppppppcVar32 = (code *******)(uVar17 * 0x10 + *(longlong *)(lVar28 + 8));
  uVar19 = *(ulonglong *)(lVar28 + 0x10) - uVar17;
  if (*(ulonglong *)(lVar28 + 0x10) < uVar17) {
    pppppppcVar32 = (code *******)0x8;
    uVar19 = uVar36;
  }
  pppppppcVar18 = (code *******)(uVar35 * 0x10 + *(longlong *)(lVar28 + 0x28));
  uVar17 = *(ulonglong *)(lVar28 + 0x30) - uVar35;
  if (*(ulonglong *)(lVar28 + 0x30) < uVar35) {
    pppppppcVar18 = (code *******)0x8;
    uVar17 = uVar36;
  }
  uVar36 = (*(longlong *)(lVar28 + 0x40) - uVar17) - uVar19;
  *puStack_a8 = uVar36;
  pppppppcStack_b0 = pppppppcVar32 + uVar19 * 2;
  pppppppcStack_c0 = pppppppcVar18 + uVar17 * 2;
  pppppppcVar29 = (code *******)*param_2;
  pppppppcVar22 = (code *******)param_2[2];
  uStack_118 = (code ******)CONCAT44(uStack_118._4_4_,*(undefined4 *)((longlong)param_2 + 0x1c));
  pppppppcVar40 = (code *******)*param_8;
  puStack_b8 = (undefined4 *)param_8[2];
  uStack_100 = (code ******)
               CONCAT44(*(undefined4 *)((longlong)param_8 + 0x1c),
                        *(undefined4 *)((longlong)param_6 + 0x1c));
  pppppppcVar38 = (code *******)*param_6;
  ppppppcVar16 = (code ******)param_6[2];
  pppppppcStack_120 = (code *******)*param_1;
  uStack_108 = (code ******)
               CONCAT44(*(undefined4 *)((longlong)param_3 + 0x1c),(undefined4)uStack_108);
  pppppppcStack_e8 = (code *******)*param_3;
  ppppppcStack_d0 = (code ******)param_3[2];
  pppppppcStack_110 = pppppppcVar22;
  pppppppcStack_f8 = (code *******)param_3;
  plStack_f0 = param_1;
  ppppppcStack_c8 = ppppppcVar16;
LAB_140b69b48:
  if ((pppppppcVar32 == (code *******)0x0) || (pppppppcVar32 == pppppppcStack_b0)) {
    if ((pppppppcVar18 == (code *******)0x0) || (pppppppcVar18 == pppppppcStack_c0)) {
      if (pppppppcStack_e8[3] != (code ******)0x0) {
        return pppppppcStack_e8;
      }
      if ((code ******)(*ppppppcStack_d8)[2] != (code ******)0x0) {
        return (code *******)*ppppppcStack_d8;
      }
      *(undefined4 *)pppppppcStack_110 = (undefined4)uStack_118;
      if ((code *******)pppppppcVar29[3] == (code *******)0x0) {
        return (code *******)0x0;
      }
      ppppppcVar16 = pppppppcVar29[2];
      ppppppcVar20 = (code ******)0x0;
      if (*pppppppcVar29 <= (code ******)((longlong)ppppppcVar16 + 1U)) {
        ppppppcVar20 = *pppppppcVar29;
      }
      pppppppcVar29[2] = (code ******)((longlong)ppppppcVar16 + (1 - (longlong)ppppppcVar20));
      pppppppcVar32 = (code *******)((longlong)pppppppcVar29[3] + -1);
      pppppppcVar29[3] = (code ******)pppppppcVar32;
      uVar25 = *(uint *)((longlong)pppppppcVar29[1] + (longlong)ppppppcVar16 * 4);
      if ((char)uVar25 == '\x02') {
        return pppppppcVar32;
      }
      cVar30 = (char)(uVar25 >> 8);
      if (cVar30 == '\x04') {
        return pppppppcVar32;
      }
      *(undefined4 *)plStack_e0[2] = *(undefined4 *)((longlong)plStack_e0 + 0x1c);
      lVar28 = *plStack_e0;
      lVar42 = *(longlong *)(lVar28 + 0x30);
      uVar37 = *(undefined8 *)(lVar28 + 0x40);
      if (lVar42 == *(longlong *)(lVar28 + 0x20)) {
        pppppppcStack_150 = (code *******)0x140b69e94;
        pdb_142d7e8a0(lVar28 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar28 + 0x28) + lVar42 * 8) = uVar37;
      *(longlong *)(lVar28 + 0x30) = lVar42 + 1;
      *(longlong *)(lVar28 + 0x40) = *(longlong *)(lVar28 + 0x40) + 1;
      if (cVar30 == '\0') {
        *(undefined4 *)plStack_f0[2] = *(undefined4 *)((longlong)plStack_f0 + 0x1c);
        iVar6 = *(int *)(pppppppcStack_120 + 0xd);
        pppppppcVar32 = (code *******)(longlong)iVar6;
        if ((longlong)pppppppcVar32 < 0) {
          return pppppppcVar32;
        }
        if (iVar6 <= *(int *)((longlong)pppppppcStack_120 + 0x6c)) {
          return pppppppcVar32;
        }
        if (pppppppcStack_120[2] <= pppppppcVar32) {
          return pppppppcVar32;
        }
        pppppcVar15 = (code *****)(pppppppcStack_120[1] + (longlong)pppppppcVar32 * 5);
        *(int *)(pppppppcStack_120 + 0xd) = iVar6 + -1;
        uVar24 = (undefined4)CONCAT71((int7)((ulonglong)pppppppcStack_120 >> 8),1);
      }
      else {
        if ((uVar25 >> 8 & 0xff) != 1) {
                    /* WARNING: Subroutine does not return */
          pppppppcStack_150 = (code *******)0x140b69f9f;
          pdb_142dc83b0(&UNK_14305ab43,0x28,&UNK_14305ab70);
        }
        *(undefined4 *)plStack_f0[2] = *(undefined4 *)((longlong)plStack_f0 + 0x1c);
        if (*(int *)(pppppppcStack_120 + 0xd) < -1) {
                    /* WARNING: Subroutine does not return */
          pppppppcStack_150 = (code *******)0x140b69fb7;
          pdb_142dc83b0(&UNK_143062a69,0x1e,&UNK_143062a88);
        }
        uVar13 = *(int *)(pppppppcStack_120 + 0xd) + 1;
        if ((int)uVar13 < 0) {
          return (code *******)(ulonglong)uVar13;
        }
        if (pppppppcStack_120[2] <= (code *****)(ulonglong)uVar13) {
          return (code *******)(ulonglong)uVar13;
        }
        pppppcVar15 = (code *****)(pppppppcStack_120[1] + (longlong)(ulonglong)uVar13 * 5);
        *(uint *)(pppppppcStack_120 + 0xd) = uVar13;
        uVar24 = 0;
      }
      uStack_48 = 0xfffffffffffffffe;
      puStack_200 = (undefined4 *)0x0;
      pppppcStack_1f8 = (code *****)0x8;
      uStack_1f0 = 0;
      ppppcVar31 = pppppcVar15[1];
      pppppppcStack_140 = (code *******)(ppppcVar31 + (longlong)pppppcVar15[2] * 3);
      for (; ppppcStack_208 = ppppcVar31, (code *******)ppppcVar31 != pppppppcStack_140;
          ppppcVar31 = ppppcVar31 + 3) {
        pdb_1417ecda0(ppppcVar31,uVar24,uVar25 >> 0x10 & 0xffffff01,&puStack_200);
      }
      puStack_a8 = (ulonglong *)uStack_1f0;
      puStack_b8 = puStack_200;
      pppppppcStack_b0 = (code *******)pppppcStack_1f8;
      ppppppcVar16 = (code ******)pppppcVar15[3];
      LOCK();
      pppppcVar26 = *ppppppcVar16;
      *ppppppcVar16 = (code *****)((longlong)*ppppppcVar16 + 1);
      UNLOCK();
      if (*ppppppcVar16 == (code *****)0x0 ||
          SCARRY8((longlong)pppppcVar26,1) != (longlong)*ppppppcVar16 < 0) goto LAB_140b6930d;
      ppppppcVar20 = (code ******)pppppcVar15[4];
      LOCK();
      pppppcVar15 = *ppppppcVar20;
      *ppppppcVar20 = (code *****)((longlong)*ppppppcVar20 + 1);
      UNLOCK();
      if (*ppppppcVar20 == (code *****)0x0 ||
          SCARRY8((longlong)pppppcVar15,1) != (longlong)*ppppppcVar20 < 0) goto LAB_140b6930d;
      auStack_50 = (undefined1  [4])CONCAT13((char)uVar24,auStack_50._0_3_);
      if (((char)uVar24 != '\0') && (uVar19 = uStack_1f0 >> 1, uVar19 != 0)) {
        pppppcVar26 = pppppcStack_1f8 + uStack_1f0 * 6 + -2;
        pppppcVar15 = pppppcStack_1f8 + 4;
        do {
          ppppcVar31 = pppppcVar15[-4];
          ppppcVar9 = pppppcVar15[-3];
          ppppcVar10 = pppppcVar26[-3];
          pppppcVar15[-4] = pppppcVar26[-4];
          pppppcVar15[-3] = ppppcVar10;
          pppppcVar26[-4] = ppppcVar31;
          pppppcVar26[-3] = ppppcVar9;
          ppppcVar31 = pppppcVar15[-2];
          ppppcVar9 = pppppcVar15[-1];
          ppppcVar10 = pppppcVar26[-1];
          pppppcVar15[-2] = pppppcVar26[-2];
          pppppcVar15[-1] = ppppcVar10;
          pppppcVar26[-2] = ppppcVar31;
          pppppcVar26[-1] = ppppcVar9;
          ppppcVar31 = *pppppcVar15;
          ppppcVar9 = pppppcVar15[1];
          ppppcVar10 = pppppcVar26[1];
          *pppppcVar15 = *pppppcVar26;
          pppppcVar15[1] = ppppcVar10;
          *pppppcVar26 = ppppcVar31;
          pppppcVar26[1] = ppppcVar9;
          pppppcVar15 = pppppcVar15 + 6;
          pppppcVar26 = pppppcVar26 + -6;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      ppppppcStack_d8 = (code ******)0x0;
      ppppppcStack_d0 = (code ******)0x8;
      ppppppcStack_c8 = (code ******)0x0;
      ppppppcStack_80 = ppppppcVar16;
      ppppppcStack_78 = ppppppcVar20;
      pdb_14007ee60();
      puVar14 = (ulonglong *)pub_1406abab0(0x40,8);
      if (puVar14 == (ulonglong *)0x0) {
        uStack_58 = CONCAT17(1,CONCAT16(1,(undefined6)uStack_58));
        pdb_142dc7e2a(8,0x40);
        goto LAB_140b6930d;
      }
      pppppcStack_98 = (code *****)0x8;
      pppppcStack_88 = (code *****)0x0;
      uVar19 = 0;
      ppppppcStack_1d0 = (code ******)puStack_a8;
      puStack_90 = puVar14;
      if (puStack_a8 != (ulonglong *)0x0) {
        do {
          pppppcStack_88 = (code *****)0x0;
          if (pppppcStack_98 == (code *****)0x0) {
            _auStack_50 = CONCAT16(1,_auStack_50);
            _auStack_50 = (undefined *)CONCAT17(1,_auStack_50);
            pdb_142d896b0(&pppppcStack_98);
          }
          *puStack_90 = uVar19;
          pppppcStack_88 = (code *****)0x1;
          pppppcVar26 = (code *****)(pppppppcStack_b0 + (longlong)puStack_a8 * 6);
          uVar19 = uVar19 + 1;
          lVar28 = 8;
          pppppcVar15 = (code *****)0x0;
          lVar42 = 8;
          pppppppcVar32 = pppppppcStack_b0;
          while (pppppcVar12 = pppppcStack_88, puVar14 = puStack_90, bVar44 = lVar42 != 0,
                lVar42 = lVar42 + -1, bVar44) {
            if (uVar19 == 0) {
              if (pppppppcVar32 == (code *******)pppppcVar26) break;
            }
            else {
              if (((ulonglong)((longlong)pppppcVar26 - (longlong)pppppppcVar32) >> 4) *
                  -0x5555555555555555 <= uVar19) break;
              pppppppcVar32 = pppppppcVar32 + uVar19 * 6;
              pppppcVar15 = (code *****)((longlong)pppppcVar15 + uVar19);
            }
            pppppppcStack_60 = (code *******)pppppcVar15;
            if (pppppcStack_88 != (code *****)0x0) {
              lVar33 = 0;
              do {
                uVar19 = *(ulonglong *)((longlong)puStack_90 + lVar33);
                if (puStack_a8 <= uVar19) {
                  _auStack_50 = CONCAT16(1,_auStack_50);
                  _auStack_50 = (undefined *)CONCAT17(1,_auStack_50);
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar19,puStack_a8,&UNK_14305abf8);
                }
                if (10 < *(byte *)(pppppppcStack_b0 + uVar19 * 6)) goto LAB_140b68aa0;
                pppppcVar15 = (code *****)(pppppppcStack_b0 + uVar19 * 6);
                switch(*(byte *)(pppppppcStack_b0 + uVar19 * 6)) {
                case 0:
                  bVar4 = *(byte *)pppppppcVar32;
                  if (bVar4 == 0) {
                    if ((*(byte *)((longlong)pppppcVar15 + 1) ==
                         *(byte *)((longlong)pppppppcVar32 + 1)) &&
                       ((*(byte *)((longlong)pppppcVar15 + 1) == 0 ||
                        (*(byte *)((longlong)pppppcVar15 + 2) ==
                         *(byte *)((longlong)pppppppcVar32 + 2))))) goto LAB_140b68aa0;
                  }
                  else if ((bVar4 != 4) && (bVar4 != 8)) goto LAB_140b68aa0;
                  break;
                default:
                  goto LAB_140b68aa0;
                case 4:
                  if (*(byte *)pppppppcVar32 != 0) {
                    if (*(byte *)pppppppcVar32 == 5) goto code_r0x000140b6896c;
                    goto LAB_140b68aa0;
                  }
                  break;
                case 5:
                  pppppcVar15 = (code *****)pppppppcVar32;
                  if (*(byte *)pppppppcVar32 != 4) goto LAB_140b68aa0;
code_r0x000140b6896c:
                  if (pppppcVar15[4] != (code ****)0x1) goto LAB_140b68aa0;
                  ppppcVar31 = (code ****)0x0;
                  if (pppppcVar15[1] <= pppppcVar15[3]) {
                    ppppcVar31 = pppppcVar15[1];
                  }
                  lVar34 = (longlong)pppppcVar15[3] - (longlong)ppppcVar31;
                  if ((pppppcVar15[2][lVar34 * 3 + 2] != (code ***)0x1) ||
                     (pppppcVar15[2][lVar34 * 3 + 1][1][2] != (code *)0x8000000000000002))
                  goto LAB_140b68aa0;
                  break;
                case 6:
                  if (*(byte *)pppppppcVar32 != 6) goto LAB_140b68aa0;
                  break;
                case 7:
                  if ((*(byte *)pppppppcVar32 != 7) && (*(byte *)pppppppcVar32 != 10))
                  goto LAB_140b68aa0;
                  break;
                case 8:
                  if (((ulonglong)*pppppppcVar32 & 7) != 0) goto LAB_140b68aa0;
                  break;
                case 10:
                  if (*(byte *)pppppppcVar32 != 7) goto LAB_140b68aa0;
                }
                lVar33 = lVar33 + 8;
              } while (lVar28 != lVar33);
            }
            if (pppppcStack_88 == pppppcStack_98) {
              _auStack_50 = CONCAT16(1,_auStack_50);
              _auStack_50 = (undefined *)CONCAT17(1,_auStack_50);
              pdb_142d896b0(&pppppcStack_98);
            }
            pppppppcVar32 = pppppppcVar32 + 6;
            puStack_90[(longlong)pppppcVar12] = (ulonglong)pppppppcStack_60;
            pppppcVar15 = (code *****)((longlong)pppppppcStack_60 + 1);
            pppppcStack_88 = (code *****)((longlong)pppppcVar12 + 1);
            lVar28 = lVar28 + 8;
            uVar19 = 0;
          }
LAB_140b68aa0:
          uVar19 = (longlong)pppppcStack_88 * 8;
          if (0x7ffffffffffffff8 < uVar19 || (ulonglong)pppppcStack_88 >> 0x3d != 0) {
            uVar37 = 0;
LAB_140b68baf:
            _auStack_50 = CONCAT16(1,_auStack_50);
            _auStack_50 = (undefined *)CONCAT17(1,_auStack_50);
            pdb_142dc7e2a(uVar37,uVar19);
LAB_140b6930d:
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
            (*UNRECOVERED_JUMPTABLE)();
          }
          if (uVar19 == 0) {
            pppppcVar15 = (code *****)0x8;
            pppppppcStack_60 = (code *******)0x0;
            pppppppcVar32 = pppppppcStack_60;
          }
          else {
            pdb_14007ee60();
            uVar37 = 8;
            pppppcVar15 = (code *****)pub_1406abab0(uVar19,8);
            pppppppcVar32 = (code *******)pppppcVar12;
            if (pppppcVar15 == (code *****)0x0) goto LAB_140b68baf;
          }
          pppppppcStack_60 = pppppppcVar32;
          if (pppppcVar12 != (code *****)0x0) {
            pub_142e32760(pppppcVar15,puVar14);
          }
          ppppppcVar16 = ppppppcStack_c8;
          pppppppcStack_68 = (code *******)pppppcVar15;
          if (ppppppcStack_c8 == ppppppcStack_d8) {
            pdb_142db08b0(&ppppppcStack_d8);
          }
          ppppppcStack_d0[(longlong)ppppppcVar16 * 3] = (code *****)pppppppcStack_60;
          ppppppcStack_d0[(longlong)ppppppcVar16 * 3 + 1] = (code *****)pppppppcStack_68;
          ppppppcStack_d0[(longlong)ppppppcVar16 * 3 + 2] = pppppcVar12;
          ppppppcStack_c8 = (code ******)((longlong)ppppppcVar16 + 1);
          uVar19 = puStack_90[(longlong)pppppcStack_88 + -1] + 1;
          ppppppcStack_1d0 = (code ******)puStack_a8;
        } while (uVar19 < puStack_a8);
      }
      puStack_a8 = (ulonglong *)0x0;
      ppppppcStack_1e0 = (code ******)(pppppppcStack_b0 + (longlong)ppppppcStack_1d0 * 6);
      ppppppcStack_1e8 = (code ******)pppppppcStack_b0;
      ppppppcStack_1d8 = (code ******)&puStack_b8;
      pppppppcStack_1c8 = (code *******)0x0;
      _auStack_50 = CONCAT16(1,_auStack_50);
      _auStack_50 = (undefined *)CONCAT17(1,_auStack_50);
      pdb_1415fc0a0(apppppcStack_220,&ppppppcStack_1e8);
      uVar37 = _auStack_50;
      pauStack_188 = (undefined1 (*) [16])ppppppcStack_80[2];
      puStack_178 = *pauStack_188 + (longlong)ppppppcStack_80[3] + 1;
      auVar3 = *pauStack_188;
      uStack_170 = ~((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      pppppcStack_168 = ppppppcStack_80[5];
      pauVar27 = pauStack_188 + 1;
      ppppppcStack_1e8 = (code ******)0x0;
      ppppppcStack_1b8 = (code ******)0x0;
      uStack_160 = auStack_50[3];
      _auStack_50 = (undefined *)CONCAT53(stack0xffffffffffffffb3,0x10000);
      auStack_50[0] = (undefined1)uVar37;
      auStack_50._0_2_ = CONCAT11(1,auStack_50[0]);
      pauStack_180 = pauVar27;
      pppppppcStack_138 = (code *******)pdb_1417d0ba0(&ppppppcStack_1e8);
      uVar37 = uStack_58;
      ppppppcStack_1e0 = ppppppcStack_d0 + (longlong)ppppppcStack_c8 * 3;
      ppppppcStack_1e8 = ppppppcStack_d0;
      ppppppcStack_1d0 = (code ******)(auStack_50 + 3);
      pppppppcStack_1c8 = (code *******)&pppppppcStack_138;
      uStack_58 = CONCAT26(uStack_58._6_2_,0x10000000000);
      uStack_58._0_4_ = (undefined4)uVar37;
      uStack_58._0_5_ = CONCAT14(1,(undefined4)uStack_58);
      ppppppcStack_1d8 = apppppcStack_220;
      pauStack_130 = pauVar27;
      pdb_1415ecd80(&plStack_f0,&ppppppcStack_1e8);
      if (ppppppcStack_80[5] == (code *****)0x0) {
        pppppcVar15 = ppppppcStack_78[8];
        if ((pppppcVar15 != (code *****)0x0) || (ppppppcStack_78[0xb] != (code *****)0x0)) {
          if ((plStack_e0 == (longlong *)0x0) ||
             (pppppppcStack_e8 + (longlong)plStack_e0 * 8 == (code *******)0x40)) {
            pppppppcStack_128 = (code *******)0x0;
            pppppppcStack_120 = (code *******)0x8;
            uStack_118 = (code ******)0x0;
            pppppppcStack_150 = (code *******)0x0;
            uStack_108 = ppppppcStack_80;
            LOCK();
            *ppppppcStack_80 = (code *****)((longlong)*ppppppcStack_80 + -1);
            UNLOCK();
            if (*ppppppcStack_80 == (code *****)0x0) {
              uStack_58._0_4_ = CONCAT13(1,(undefined3)uStack_58);
              pdb_140c7bbc0(&uStack_108);
            }
            uStack_100 = (code ******)0x0;
            goto LAB_140b68e7e;
          }
          pppppppcVar32 = pppppppcStack_e8 + (longlong)plStack_e0 * 8;
          cVar30 = '\x01';
          goto LAB_140b68dc1;
        }
        cVar41 = '\x01';
        cVar30 = '\x01';
      }
      else if ((plStack_e0 == (longlong *)0x0) ||
              (pppppppcStack_e8 + (longlong)plStack_e0 * 8 == (code *******)0x40)) {
        pppppppcStack_128 = (code *******)0x0;
        pppppppcStack_120 = (code *******)0x8;
        uStack_118 = (code ******)0x0;
        pppppppcStack_150 = (code *******)0x0;
        uStack_100 = ppppppcStack_80;
LAB_140b68e7e:
        ppppppcVar16 = ppppppcStack_78;
        if ((ppppppcStack_78[8] == (code *****)0x0) &&
           (uStack_108 = ppppppcStack_78, ppppppcStack_78[0xb] == (code *****)0x0)) {
          LOCK();
          *ppppppcStack_78 = (code *****)((longlong)*ppppppcStack_78 + -1);
          UNLOCK();
          if (*ppppppcStack_78 == (code *****)0x0) {
            pdb_140c7a400(&uStack_108);
          }
          ppppppcVar16 = (code ******)0x0;
        }
        plVar2 = plStack_e0;
        ppppppcStack_1e8 = (code ******)pppppppcStack_128;
        ppppppcStack_1e0 = (code ******)pppppppcStack_120;
        ppppppcStack_1d8 = uStack_118;
        ppppppcStack_1b0 = (code ******)CONCAT71(ppppppcStack_1b0._1_7_,auStack_50[3]);
        ppppppcStack_1d0 = (code ******)pppppppcStack_150;
        pppppppcStack_1c8 = pppppppcStack_148;
        ppppppcStack_1c0 = uStack_100;
        ppppppcStack_1b8 = ppppppcVar16;
        if (plStack_e0 == plStack_f0) {
          pdb_142d7ee50(&plStack_f0);
        }
        pppppppcStack_e8[(longlong)plVar2 * 8 + 6] = ppppppcStack_1b8;
        (pppppppcStack_e8 + (longlong)plVar2 * 8 + 6)[1] = ppppppcStack_1b0;
        pppppppcStack_e8[(longlong)plVar2 * 8 + 4] = (code ******)pppppppcStack_1c8;
        (pppppppcStack_e8 + (longlong)plVar2 * 8 + 4)[1] = ppppppcStack_1c0;
        pppppppcStack_e8[(longlong)plVar2 * 8 + 2] = ppppppcStack_1d8;
        (pppppppcStack_e8 + (longlong)plVar2 * 8 + 2)[1] = ppppppcStack_1d0;
        pppppppcStack_e8[(longlong)plVar2 * 8] = ppppppcStack_1e8;
        (pppppppcStack_e8 + (longlong)plVar2 * 8)[1] = ppppppcStack_1e0;
        plStack_e0 = (longlong *)((longlong)plVar2 + 1);
        cVar41 = '\0';
        cVar30 = '\0';
      }
      else {
        pppppppcVar32 = pppppppcStack_e8 + (longlong)plStack_e0 * 8;
        ppppppcStack_1e8 = pppppppcVar32[-3];
        pppppppcVar32[-3] = ppppppcStack_80;
        if (ppppppcStack_1e8 != (code ******)0x0) {
          LOCK();
          *ppppppcStack_1e8 = (code *****)((longlong)*ppppppcStack_1e8 + -1);
          UNLOCK();
          if (*ppppppcStack_1e8 == (code *****)0x0) {
            _auStack_50 = CONCAT15(1,_auStack_50);
            _auStack_50 = (undefined *)(CONCAT35(_auStack_4b,_auStack_50) & 0xffffff00ffffffff);
            pdb_140c7bbc0(&ppppppcStack_1e8);
          }
        }
        pppppcVar15 = ppppppcStack_78[8];
        cVar30 = '\0';
LAB_140b68dc1:
        if ((pppppcVar15 == (code *****)0x0) && (ppppppcStack_78[0xb] == (code *****)0x0)) {
          cVar41 = '\x01';
        }
        else {
          ppppppcStack_1e8 = pppppppcVar32[-2];
          pppppppcVar32[-2] = ppppppcStack_78;
          if (ppppppcStack_1e8 != (code ******)0x0) {
            LOCK();
            *ppppppcStack_1e8 = (code *****)((longlong)*ppppppcStack_1e8 + -1);
            UNLOCK();
            if (*ppppppcStack_1e8 == (code *****)0x0) {
              uVar19 = (ulonglong)_auStack_50 >> 0x28;
              _auStack_50 = CONCAT14(cVar30,auStack_50);
              _auStack_50 = (undefined *)(CONCAT35((int3)uVar19,_auStack_50) & 0xffff00ffffffffff);
              pdb_140c7a400(&ppppppcStack_1e8);
            }
          }
          cVar41 = '\0';
        }
      }
      plVar11 = plStack_e0;
      plVar2 = plStack_f0;
      pppppppcStack_c0 = pppppppcStack_e8;
      LOCK();
      *pppppppcStack_138 = (code ******)((longlong)*pppppppcStack_138 + -1);
      UNLOCK();
      if (*pppppppcStack_138 == (code ******)0x0) {
        auStack_50._0_2_ = CONCAT11(cVar30,auStack_50[0]);
        _auStack_50 = (undefined *)
                      CONCAT62(CONCAT51(stack0xffffffffffffffb3,cVar41),auStack_50._0_2_);
        pdb_140c7b0f0(&pppppppcStack_138);
      }
      _auStack_50 = CONCAT16(cVar30,_auStack_50);
      _auStack_50 = (undefined *)CONCAT17(cVar41,_auStack_50);
      pdb_140974cc0(apppppcStack_220);
      if (pppppcStack_98 != (code *****)0x0) {
        pub_1406abac0((byte *)puStack_90,(longlong)pppppcStack_98 << 3,8);
      }
      ppppppcVar16 = ppppppcStack_d0;
      if (ppppppcStack_c8 != (code ******)0x0) {
        ppppppcVar20 = ppppppcStack_d0 + 1;
        ppppppcVar43 = ppppppcStack_c8;
        do {
          if (ppppppcVar20[-1] != (code *****)0x0) {
            pub_1406abac0((byte *)*ppppppcVar20,(longlong)ppppppcVar20[-1] << 3,8);
          }
          ppppppcVar20 = ppppppcVar20 + 3;
          ppppppcVar43 = (code ******)((longlong)ppppppcVar43 + -1);
        } while (ppppppcVar43 != (code ******)0x0);
      }
      if (ppppppcStack_d8 != (code ******)0x0) {
        pub_1406abac0((byte *)ppppppcVar16,(longlong)ppppppcStack_d8 * 0x18,8);
      }
      if (cVar41 != '\0') {
        LOCK();
        *ppppppcStack_78 = (code *****)((longlong)*ppppppcStack_78 + -1);
        UNLOCK();
        if (*ppppppcStack_78 == (code *****)0x0) {
          _auStack_50 = (undefined *)CONCAT71(stack0xffffffffffffffb1,cVar30);
          pdb_140c7a400(&ppppppcStack_78);
        }
      }
      if (cVar30 != '\0') {
        LOCK();
        *ppppppcStack_80 = (code *****)((longlong)*ppppppcStack_80 + -1);
        UNLOCK();
        if (*ppppppcStack_80 == (code *****)0x0) {
          pdb_140c7bbc0(&ppppppcStack_80);
        }
      }
      pppppppcStack_68 = (code *******)puStack_a8;
      pppppppcStack_60 = (code *******)0x0;
      pppppcStack_70 = (code *****)pppppppcStack_b0;
      pppppppcVar32 = pppppppcStack_b0;
      while (pppppppcStack_68 != pppppppcStack_60) {
        pppppppcStack_60 = (code *******)((longlong)pppppppcStack_60 + 1);
        pdb_14099c550(pppppppcVar32);
        pppppppcVar32 = pppppppcVar32 + 6;
      }
      if (puStack_b8 != (undefined4 *)0x0) {
        pub_1406abac0((byte *)pppppcStack_70,(longlong)puStack_b8 * 0x30,8);
      }
      lVar28 = (longlong)plVar11 * 0x40;
      pppppppcStack_110 = pppppppcStack_c0 + (longlong)plVar11 * 8;
      pppppppcStack_128 = pppppppcStack_c0;
      pppppppcStack_120 = pppppppcStack_c0;
      pppppcStack_70 = (code *****)plVar2;
      uStack_118 = (code ******)plVar2;
      pppppppcVar32 = pppppppcStack_c0;
      pppppppcStack_68 = pppppppcStack_110;
      if (plVar11 != (longlong *)0x0) {
        uVar24 = *(undefined4 *)((longlong)pppppppcStack_f8 + 0x1c);
        puVar14 = (ulonglong *)*pppppppcStack_f8;
        puVar7 = (undefined4 *)pppppppcStack_f8[2];
        pppppppcVar18 = pppppppcStack_c0;
        do {
          pppppppcVar32 = pppppppcVar18 + 8;
          ppppppcVar16 = *pppppppcVar18;
          pppppppcStack_120 = pppppppcVar32;
          if (SBORROW8(0,(longlong)ppppppcVar16)) break;
          ppppppcStack_1b0 = pppppppcVar18[7];
          ppppppcStack_1e0 = pppppppcVar18[1];
          ppppppcStack_1d8 = pppppppcVar18[2];
          ppppppcStack_1d0 = pppppppcVar18[3];
          pppppppcStack_1c8 = (code *******)pppppppcVar18[4];
          ppppppcStack_1c0 = pppppppcVar18[5];
          ppppppcStack_1b8 = pppppppcVar18[6];
          *puVar7 = uVar24;
          puVar14[4] = puVar14[4] + 1;
          uVar19 = *puVar14;
          uVar17 = puVar14[3];
          ppppppcStack_1e8 = ppppppcVar16;
          if (uVar17 == uVar19) {
            pdb_140929340(puVar14);
            uVar19 = *puVar14;
            uVar17 = puVar14[3];
          }
          puVar14[3] = uVar17 + 1;
          if (uVar17 + puVar14[2] < uVar19) {
            uVar19 = 0;
          }
          uVar36 = puVar14[1];
          lVar42 = ((uVar17 + puVar14[2]) - uVar19) * 0x40;
          puVar1 = (undefined8 *)(uVar36 + 0x30 + lVar42);
          *puVar1 = ppppppcStack_1b8;
          puVar1[1] = ppppppcStack_1b0;
          puVar1 = (undefined8 *)(uVar36 + 0x20 + lVar42);
          *puVar1 = pppppppcStack_1c8;
          puVar1[1] = ppppppcStack_1c0;
          plVar2 = (longlong *)(uVar36 + 0x10 + lVar42);
          *plVar2 = (longlong)ppppppcStack_1d8;
          plVar2[1] = (longlong)ppppppcStack_1d0;
          *(undefined8 *)(uVar36 + lVar42) = ppppppcStack_1e8;
          ((undefined8 *)(uVar36 + lVar42))[1] = ppppppcStack_1e0;
          lVar28 = lVar28 + -0x40;
          pppppppcVar18 = pppppppcVar32;
        } while (lVar28 != 0);
      }
      pppppppcStack_68 =
           (code *******)((ulonglong)((longlong)pppppppcStack_68 - (longlong)pppppppcVar32) >> 6);
      pppppppcStack_60 = (code *******)0x0;
      pppppppcStack_f8 = pppppppcVar32;
      while (pppppppcStack_68 != pppppppcStack_60) {
        pppppppcStack_60 = (code *******)((longlong)pppppppcStack_60 + 1);
        pdb_14099e540(pppppppcVar32);
        pppppppcVar32 = pppppppcVar32 + 8;
      }
      if (pppppcStack_70 != (code *****)0x0) {
        pub_1406abac0((byte *)pppppppcStack_c0,(longlong)pppppcStack_70 << 6,8);
        pppppppcStack_60 = extraout_RAX;
      }
      return pppppppcStack_60;
    }
    pppppppcVar32 = (code *******)0x0;
    pppppppcVar21 = pppppppcVar18;
    pppppppcVar18 = pppppppcVar18 + 2;
  }
  else {
    pppppppcVar21 = pppppppcVar32;
    pppppppcVar32 = pppppppcVar32 + 2;
  }
  *puStack_a8 = *puStack_a8 + 1;
  ppppppcVar20 = ppppppcRam000000004305ae3c;
  if (!SBORROW8(0,(longlong)pppppppcStack_120[6])) {
    pppppppcVar32 = (code *******)*_DAT_143ca8e90;
    if ((code *******)0x1 < pppppppcVar32) {
      uStack_a0 = 0;
      pppppcStack_98 = (code *****)&UNK_14305abc3;
      puStack_90 = (ulonglong *)0x2f;
      pppppcStack_88 = (code *****)0x0;
      ppppppcStack_80 = (code ******)&UNK_14305ab08;
      ppppppcStack_78 = (code ******)0x3a;
      pppppcStack_70 = (code *****)0x2;
      pppppppcStack_68 = (code *******)&UNK_14305abc3;
      pppppppcStack_60 = (code *******)0x2f;
      uStack_58 = 0xa600000001;
      _auStack_50 = &UNK_14305ab88;
      uStack_48 = 0x77;
      pppppppcStack_150 = (code *******)0x140b69de6;
      pppppppcVar32 = (code *******)pdb_140f332f0((longlong)&uStack_118 + 7,&uStack_a0);
    }
    return pppppppcVar32;
  }
  puVar23 = &UNK_14305ae2c;
  uVar19 = (ulonglong)
           *(int *)(&UNK_14305ae2c + (ulonglong)(byte)*(code *)((longlong)pppppppcVar21 + 9) * 4);
  UNRECOVERED_JUMPTABLE_00 = (code *******)(&UNK_14305ae2c + uVar19);
  bVar44 = UNRECOVERED_JUMPTABLE_00 == (code *******)0x0;
  cVar30 = (char)UNRECOVERED_JUMPTABLE_00;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(code *)((longlong)pppppppcVar21 + 9)) {
  case (code)0x0:
    if (pppppppcVar29[3] != (code ******)0x0) {
      ppppppcVar20 = (code ******)((longlong)pppppppcVar29[3] + (longlong)pppppppcVar29[2] + -1);
      ppppppcVar16 = (code ******)0x0;
      if (*pppppppcVar29 <= ppppppcVar20) {
        ppppppcVar16 = *pppppppcVar29;
      }
      if (*(char *)((longlong)pppppppcVar29[1] +
                   ((longlong)ppppppcVar20 - (longlong)ppppppcVar16) * 4 + 1) == '\x01')
      goto code_r0x000140b69c85;
    }
    break;
  case (code)0x1:
    if (pppppppcVar29[3] != (code ******)0x0) {
      ppppppcVar20 = (code ******)((longlong)pppppppcVar29[3] + (longlong)pppppppcVar29[2] + -1);
      ppppppcVar16 = (code ******)0x0;
      if (*pppppppcVar29 <= ppppppcVar20) {
        ppppppcVar16 = *pppppppcVar29;
      }
      if (*(char *)((longlong)pppppppcVar29[1] +
                   ((longlong)ppppppcVar20 - (longlong)ppppppcVar16) * 4 + 1) == '\0')
      goto code_r0x000140b69c85;
    }
    break;
  case (code)0x2:
    goto code_r0x000140b69c85;
  case (code)0x3:
    *(undefined4 *)ppppppcStack_d0 = uStack_108._4_4_;
    pppppppcStack_150 = (code *******)0x140b69c85;
    pdb_140b6ae40(pppppppcStack_e8);
    goto code_r0x000140b69c85;
  case (code)0x4:
    puVar23 = &UNK_14305ae3c;
    goto code_r0x000140b6adce;
  case (code)0x5:
    goto code_r0x000140b6add5;
  case (code)0x6:
    goto code_r0x000140b6adce;
  case (code)0x7:
    return (code *******)0x0;
  case (code)0x8:
  case (code)0x9:
  case (code)0xa:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code)0xb:
  case (code)0x13:
    *(char *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + cVar30;
    goto code_r0x000140b6af47;
  case (code)0xc:
    goto code_r0x000140b6af4e;
  default:
    *(char *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + cVar30;
    *(char *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + cVar30;
    *(undefined4 *)((longlong)pppppppcVar29 + 0x1c) = 0;
code_r0x000140b6af47:
    pppppppcVar29 = pppppppcVar29 + 6;
    bVar44 = pppppppcVar29 == pppppppcVar32;
code_r0x000140b6af4e:
    if (bVar44) {
      do {
        pppppppcVar32 = pppppppcStack_148;
        pppppppcVar18 = pppppppcStack_140;
        if ((pppppppcStack_138 == pppppppcStack_140) &&
           (bVar44 = pppppppcStack_148 == pppppppcVar21, pppppppcStack_148 = pppppppcStack_140,
           UNRECOVERED_JUMPTABLE_00 = pppppppcVar21, pppppppcVar18 = pppppppcVar21,
           pppppppcVar21 = pppppppcStack_140, pppppppcStack_138 = pppppppcVar32, bVar44)) {
code_r0x000140b6b0c8:
          return UNRECOVERED_JUMPTABLE_00;
        }
        pppppppcVar29 = (code *******)pppppppcStack_138[1];
        pppppppcVar32 = pppppppcStack_138 + 2;
        pppppppcStack_138 = pppppppcStack_138 + 8;
        pppppppcStack_140 = pppppppcVar18;
      } while (*pppppppcVar32 == (code ******)0x0);
    }
                    /* WARNING: Could not recover jumptable at 0x000140b6af5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppcVar32 =
         (code *******)
         (*(code *)((longlong)*(int *)(uVar36 + (ulonglong)(byte)*(code *)pppppppcVar29 * 4) +
                   uVar36))();
    return pppppppcVar32;
  case (code)0x14:
  case (code)0x15:
  case (code)0x16:
    *(char *)UNRECOVERED_JUMPTABLE_00 = (char)*(code *)UNRECOVERED_JUMPTABLE_00 + cVar30;
    do {
      pppppppcVar39 = pppppppcVar38;
      if (UNRECOVERED_JUMPTABLE_00 == pppppppcVar22) {
        do {
          do {
            pppppppcVar22 = pppppppcVar40;
            pppppppcVar40 = unaff_RBP;
            pppppppcVar39 = pppppppcVar38;
            if ((pppppppcVar22 == pppppppcVar38) &&
               (bVar44 = pppppppcVar18 == unaff_RBP, pppppppcVar22 = pppppppcVar18,
               pppppppcVar40 = pppppppcVar38, pppppppcVar39 = unaff_RBP,
               pppppppcVar18 = pppppppcVar38, bVar44)) goto code_r0x000140b6af47;
            unaff_RBP = pppppppcVar40;
            pppppppcVar40 = pppppppcVar22 + 3;
            ppppppcVar16 = pppppppcVar22[2];
            pppppppcVar38 = pppppppcVar39;
          } while (ppppppcVar16 == (code ******)0x0);
          pppppppcVar22 = (code *******)pppppppcVar22[1];
          uVar19 = (longlong)ppppppcVar16 * 0x18 - 0x18;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar19;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = param_6;
          uVar25 = (uint)(SUB168(auVar3 * auVar8,8) >> 4);
          UNRECOVERED_JUMPTABLE_00 = pppppppcVar22;
          if ((~uVar25 & 7) != 0) {
            lVar28 = -(ulonglong)(uVar25 + 1 & 7);
            do {
              *(undefined4 *)UNRECOVERED_JUMPTABLE_00 = 0;
              UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + 3;
              lVar28 = lVar28 + 1;
            } while (lVar28 != 0);
          }
        } while (uVar19 < 0xa8);
        pppppppcVar22 = pppppppcVar22 + (longlong)ppppppcVar16 * 3;
      }
      *(undefined4 *)UNRECOVERED_JUMPTABLE_00 = 0;
      *(undefined4 *)(UNRECOVERED_JUMPTABLE_00 + 3) = 0;
      *(undefined4 *)(UNRECOVERED_JUMPTABLE_00 + 6) = 0;
      *(undefined4 *)(UNRECOVERED_JUMPTABLE_00 + 9) = 0;
      *(undefined4 *)(UNRECOVERED_JUMPTABLE_00 + 0xc) = 0;
      *(undefined4 *)(UNRECOVERED_JUMPTABLE_00 + 0xf) = 0;
      *(undefined4 *)(UNRECOVERED_JUMPTABLE_00 + 0x12) = 0;
      *(undefined4 *)(UNRECOVERED_JUMPTABLE_00 + 0x15) = 0;
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + 0x18;
      pppppppcVar38 = pppppppcVar39;
    } while( true );
  case (code)0x17:
    if ((code ******)0xa < ppppppcVar16) {
      ppppppcVar16 = *UNRECOVERED_JUMPTABLE_00;
      LOCK();
      *ppppppcVar16 = (code *****)((longlong)*ppppppcVar16 + -1);
      UNLOCK();
      if (*ppppppcVar16 != (code *****)0x0) {
        return UNRECOVERED_JUMPTABLE_00;
      }
      ppppppcVar20 = *UNRECOVERED_JUMPTABLE_00;
      pppppppcStack_150 = (code *******)param_6;
      if (ppppppcVar20[2] != (code *****)0x0) {
        puStack_178 = &UNK_140c7bc84;
        pub_1406abac0((byte *)ppppppcVar20[3],(longlong)ppppppcVar20[2] << 3,4);
        UNRECOVERED_JUMPTABLE_00 = extraout_RAX_00;
      }
      if (ppppppcVar20 != (code ******)0xffffffffffffffff) {
        LOCK();
        ppppppcVar16 = ppppppcVar20 + 1;
        *ppppppcVar16 = (code *****)((longlong)*ppppppcVar16 + -1);
        UNLOCK();
        if (*ppppppcVar16 == (code *****)0x0) {
          uVar37 = 0x30;
          goto code_r0x0001406abac0;
        }
      }
      return UNRECOVERED_JUMPTABLE_00;
    }
    param_3 = (longlong *)&UNK_14305ae7c;
  case (code)0x1b:
    UNRECOVERED_JUMPTABLE =
         (code *)((longlong)*(int *)((longlong)param_3 + (longlong)ppppppcVar16 * 4) +
                 (longlong)param_3);
                    /* WARNING: Could not recover jumptable at 0x000140b6b0ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppcVar32 = (code *******)(*UNRECOVERED_JUMPTABLE)(&UNK_14305ae2c,UNRECOVERED_JUMPTABLE);
    return pppppppcVar32;
  case (code)0x18:
    goto code_r0x000140b6b0c8;
  case (code)0x19:
    pppppppcVar32 = (code *******)ppppppcRam000000004305ae3c[3];
    LOCK();
    *pppppppcVar32 = (code ******)((longlong)*pppppppcVar32 + -1);
    UNLOCK();
    pppppppcStack_150 = (code *******)param_6;
    if (*pppppppcVar32 == (code ******)0x0) {
      puStack_178 = &UNK_140c7b84b;
      pppppppcVar32 = (code *******)pdb_140c79ee0(ppppppcVar20 + 3);
    }
    if (ppppppcVar20 != (code ******)0xffffffffffffffff) {
      LOCK();
      ppppppcVar16 = ppppppcVar20 + 1;
      *ppppppcVar16 = (code *****)((longlong)*ppppppcVar16 + -1);
      UNLOCK();
      if (*ppppppcVar16 == (code *****)0x0) {
        uVar37 = 0x30;
code_r0x0001406abac0:
        pauStack_188 = (undefined1 (*) [16])&UNK_140f3c37e;
        puStack_158 = pppppppcStack_150;
        pppppppcStack_150 = unaff_RBP;
        uVar37 = GetProcessHeap(ppppppcVar20,uVar37);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pppppppcVar32 = (code *******)HeapFree(uVar37,0,ppppppcVar20);
        return pppppppcVar32;
      }
    }
    return pppppppcVar32;
  case (code)0x1a:
    *(int *)(&UNK_14305adb7 + uVar19) = *(int *)(&UNK_14305adb7 + uVar19) + -1;
    *UNRECOVERED_JUMPTABLE_00 = (code ******)((longlong)*UNRECOVERED_JUMPTABLE_00 - 1);
    pppppppcVar32 = (code *******)CONCAT71(_UNK_14305ae3c,UNK_14305ae3b);
    LOCK();
    *pppppppcVar32 = (code ******)((longlong)*pppppppcVar32 - 1);
    UNLOCK();
    if (*pppppppcVar32 != (code ******)0x0) {
      return pppppppcVar32;
    }
    ppppppcVar20 = (code ******)CONCAT71(_UNK_14305ae3c,UNK_14305ae3b);
    if (ppppppcVar20 != (code ******)0xffffffffffffffff) {
      LOCK();
      ppppppcVar16 = ppppppcVar20 + 1;
      *ppppppcVar16 = (code *****)((longlong)*ppppppcVar16 + -1);
      UNLOCK();
      if (*ppppppcVar16 == (code *****)0x0) {
        uVar37 = 0x18;
        pppppppcStack_150 = (code *******)param_6;
        goto code_r0x0001406abac0;
      }
    }
    return pppppppcVar32;
  case (code)0x1c:
    *(char *)UNRECOVERED_JUMPTABLE_00 =
         (char)*(code *)UNRECOVERED_JUMPTABLE_00 + cVar30 + (0xfffffffebcfa51d3 < uVar19);
    pppppppcVar32 = (code *******)CONCAT17(UNK_14305ae43,_UNK_14305ae3c);
    LOCK();
    *pppppppcVar32 = (code ******)((longlong)*pppppppcVar32 - 1);
    UNLOCK();
    if (*pppppppcVar32 != (code ******)0x0) {
      return pppppppcVar32;
    }
    ppppppcVar20 = (code ******)CONCAT17(UNK_14305ae43,_UNK_14305ae3c);
    if (ppppppcVar20 != (code ******)0xffffffffffffffff) {
      LOCK();
      ppppppcVar16 = ppppppcVar20 + 1;
      *ppppppcVar16 = (code *****)((longlong)*ppppppcVar16 + -1);
      UNLOCK();
      if (*ppppppcVar16 == (code *****)0x0) {
        uVar37 = 0x30;
        pppppppcStack_150 = (code *******)param_6;
        goto code_r0x0001406abac0;
      }
    }
    return pppppppcVar32;
  case (code)0x1d:
    return UNRECOVERED_JUMPTABLE_00;
  case (code)0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)pppppppcStack_110 = (undefined4)uStack_118;
  uVar24 = *(undefined4 *)(pppppppcVar21 + 1);
  ppppppcVar20 = *pppppppcVar29;
  ppppppcVar43 = pppppppcVar29[3];
  if (ppppppcVar43 == ppppppcVar20) {
    pppppppcStack_150 = (code *******)0x140b69c42;
    pdb_140929780(pppppppcVar29);
    ppppppcVar20 = *pppppppcVar29;
    ppppppcVar43 = pppppppcVar29[3];
  }
  pppppppcVar29[3] = (code ******)((longlong)ppppppcVar43 + 1);
  ppppppcVar16 = (code ******)0x0;
  if (ppppppcVar20 <= (code ******)((longlong)ppppppcVar43 + (longlong)pppppppcVar29[2])) {
    ppppppcVar16 = ppppppcVar20;
  }
  *(undefined4 *)
   ((longlong)pppppppcVar29[1] +
   (((longlong)ppppppcVar43 + (longlong)pppppppcVar29[2]) - (longlong)ppppppcVar16) * 4) = uVar24;
code_r0x000140b69cdf:
  cVar5 = *(code *)((longlong)pppppppcVar21 + 0xb);
  param_6 = (undefined8 *)(ulonglong)(byte)cVar5;
  if (cVar5 != (code)0x3) {
    *(undefined4 *)ppppppcStack_c8 = (undefined4)uStack_100;
    ppppppcVar20 = pppppppcVar38[6];
    unaff_RBP = (code *******)pppppppcVar38[8];
    if (ppppppcVar20 == pppppppcVar38[4]) {
      pppppppcStack_150 = (code *******)0x140b69d20;
      pdb_142d7e980(pppppppcVar38 + 4);
    }
    ppppppcVar43 = pppppppcVar38[5];
    ppppppcVar43[(longlong)ppppppcVar20 * 2] = (code *****)unaff_RBP;
    *(code *)(ppppppcVar43 + (longlong)ppppppcVar20 * 2 + 1) = cVar5;
    pppppppcVar38[6] = (code ******)((longlong)ppppppcVar20 + 1);
    pppppppcVar38[8] = (code ******)((longlong)pppppppcVar38[8] + 1);
  }
  goto LAB_140b69b48;
code_r0x000140b6adce:
  UNRECOVERED_JUMPTABLE_00 =
       (code *******)(puVar23 + *(int *)(puVar23 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4));
  goto code_r0x000140b6add5;
code_r0x000140b69c85:
  *puStack_b8 = uStack_100._4_4_;
  ppppppcVar20 = pppppppcVar40[6];
  unaff_RBP = (code *******)pppppppcVar40[8];
  if (ppppppcVar20 == pppppppcVar40[4]) {
    pppppppcStack_150 = (code *******)0x140b69caa;
    pdb_142d7e8a0(pppppppcVar40 + 4);
  }
  pppppppcVar40[5][(longlong)ppppppcVar20] = (code *****)unaff_RBP;
  pppppppcVar40[6] = (code ******)((longlong)ppppppcVar20 + 1);
  pppppppcVar40[8] = (code ******)((longlong)pppppppcVar40[8] + 1);
  *(undefined4 *)pppppppcStack_110 = (undefined4)uStack_118;
  if (pppppppcVar29[3] != (code ******)0x0) {
    pppppppcVar29[3] = (code ******)0x0;
  }
  pppppppcVar29[2] = (code ******)0x0;
  goto code_r0x000140b69cdf;
code_r0x000140b6add5:
                    /* WARNING: Could not recover jumptable at 0x000140b6add5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pppppppcVar32 = (code *******)(*(code *)UNRECOVERED_JUMPTABLE_00)();
  return pppppppcVar32;
}

