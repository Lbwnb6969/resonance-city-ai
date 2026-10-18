// VA 0x140c15290, PDB extent 3224 bytes
// country_core::systems::save::save_file_identity::try_approx_parse_save_file_identity<std::fs::File>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_file_identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   country_core::systems::save::save_file_identity::try_approx_parse_save_file_identity<std::fs::File>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_file_identity.rs
   Extent: 3224 */

undefined8 pdb_140c15290(undefined8 param_1)

{
  byte *pbVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  byte *******pppppppbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  byte *******pppppppbVar8;
  int iVar9;
  uint uVar10;
  byte *******pppppppbVar11;
  uint uVar12;
  byte *******pppppppbVar13;
  longlong lVar14;
  byte *******pppppppbVar15;
  byte *pbVar16;
  byte *******pppppppbVar17;
  byte *******pppppppbVar18;
  bool bVar19;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  byte *******pppppppbStack_f0;
  longlong lStack_e0;
  byte *******pppppppbStack_d8;
  longlong lStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *******pppppppbStack_a8;
  byte *pbStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  byte *******pppppppbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pppppppbVar17 = (byte *******)0x800;
  pppppppbVar5 = (byte *******)pub_1406abab0(0x800,1);
  if (pppppppbVar5 == (byte *******)0x0) {
    pdb_142dc7e2a(1,0x800);
LAB_140c15e2b:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pppppppbStack_80 = (byte *******)0x800;
  pppppppbStack_70 = (byte *******)0x0;
  uStack_b0 = 0x800;
  pppppppbStack_a8 = (byte *******)0x800;
  pppppppbVar13 = (byte *******)0x2000;
  pppppppbVar15 = (byte *******)0x800;
  pppppppbStack_c0 = (byte *******)((ulonglong)pppppppbStack_c0 & 0xffffffff00000000);
  pppppppbVar11 = (byte *******)0x0;
  uStack_b8 = param_1;
  pppppppbStack_78 = pppppppbVar5;
  pppppppbStack_68 = pppppppbVar5;
LAB_140c1534a:
  if (pppppppbStack_70 != (byte *******)0x800) goto LAB_140c15410;
  pppppppbStack_118 = (byte *******)0x0;
  uStack_110 = (byte *******)0x0;
  pppppppbStack_128 = (byte *******)0x0;
  pppppppbStack_120 = (byte *******)0x0;
  if (pppppppbVar15 != (byte *******)0x0) {
    while( true ) {
      if ((byte *******)0x1f < pppppppbVar15) {
        pppppppbVar15 = (byte *******)0x20;
      }
      pppppppbVar5 = (byte *******)&pppppppbStack_128;
      uVar6 = pdb_140f5ace0(&uStack_b8,pppppppbVar5,pppppppbVar15);
      if ((uVar6 & 1) == 0) break;
      pbStack_a0 = (byte *)0x1;
      pppppppbStack_98 = pppppppbVar5;
      switch((uint)pppppppbVar5 & 3) {
      case 0:
        bVar4 = *(byte *)(pppppppbVar5 + 2);
        break;
      case 1:
        bVar4 = *(byte *)((longlong)pppppppbVar5 + 0xf);
        break;
      case 2:
        goto LAB_140c156f1;
      case 3:
        bVar4 = (byte)((ulonglong)pppppppbVar5 >> 0x20);
        if (0x29 < (uint)((ulonglong)pppppppbVar5 >> 0x20)) {
          bVar4 = 0x2a;
        }
      }
      if (bVar4 != 0x23) goto LAB_140c156f1;
      pdb_1404b38e0(&pppppppbStack_98);
      pppppppbVar15 = pppppppbStack_a8;
      if (pppppppbStack_a8 == (byte *******)0x0) goto LAB_140c15756;
    }
    pppppppbVar17 = (byte *******)((longlong)pppppppbStack_a8 - (longlong)pppppppbVar5);
    if (pppppppbStack_a8 < pppppppbVar5) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1430691ab,0x45,&UNK_1430691d0);
    }
    pppppppbStack_a8 = pppppppbVar17;
    if ((byte *******)0x20 < pppppppbVar5) {
      pdb_142dc8420(0,pppppppbVar5,0x20,&UNK_143069090);
      goto LAB_140c15e2b;
    }
    if (pppppppbVar5 == (byte *******)0x0) {
      pppppppbStack_68 = pppppppbStack_78;
      goto LAB_140c15756;
    }
    pdb_142d7f1b0(&pppppppbStack_80,0x800,pppppppbVar5,1,1);
    pppppppbVar17 = pppppppbStack_70;
    pppppppbStack_68 = pppppppbStack_78;
    pub_142e32760((byte *)((longlong)pppppppbStack_78 + (longlong)pppppppbStack_70),
                  &pppppppbStack_128,pppppppbVar5);
    pppppppbStack_70 = (byte *******)((longlong)pppppppbVar5 + (longlong)pppppppbVar17);
    pppppppbVar17 = pppppppbStack_80;
    pppppppbVar8 = pppppppbVar13;
    if (pppppppbStack_70 != pppppppbStack_80) goto LAB_140c1541f;
    while( true ) {
      pppppppbVar5 = (byte *******)((longlong)pppppppbVar17 * 2);
      if ((byte *******)((longlong)pppppppbVar17 * 2) < pppppppbVar17 + 4) {
        pppppppbVar5 = pppppppbVar17 + 4;
      }
      pdb_142d7f0f0(&pppppppbStack_128,pppppppbVar17,pppppppbStack_68,pppppppbVar5,1,1);
      if ((int)pppppppbStack_128 == 1) break;
      pppppppbStack_78 = pppppppbStack_120;
      pppppppbVar8 = pppppppbVar13;
      pppppppbVar17 = pppppppbVar5;
      pppppppbStack_80 = pppppppbVar5;
      pppppppbStack_68 = pppppppbStack_78;
LAB_140c1541f:
      do {
        pppppppbVar13 = pppppppbStack_70;
        pbStack_a0 = (byte *)((longlong)pppppppbStack_68 + (longlong)pppppppbStack_70);
        pppppppbVar18 = (byte *******)((longlong)pppppppbVar17 - (longlong)pppppppbStack_70);
        if (pppppppbVar8 < (byte *******)((longlong)pppppppbVar17 - (longlong)pppppppbStack_70)) {
          pppppppbVar18 = pppppppbVar8;
        }
        pppppppbStack_90 = (byte *******)0x0;
        pppppppbStack_98 = pppppppbVar18;
        pppppppbStack_88 = pppppppbVar11;
        if (pppppppbStack_a8 == (byte *******)0x0) goto LAB_140c15767;
        do {
          pppppppbVar11 = pppppppbStack_88;
          pppppppbVar15 = pppppppbStack_90;
          if (pppppppbStack_a8 <
              (byte *******)((longlong)pppppppbStack_98 - (longlong)pppppppbStack_90)) {
            uStack_110 = (byte *******)((longlong)pppppppbStack_88 - (longlong)pppppppbStack_90);
            if (pppppppbStack_a8 <=
                (byte *******)((longlong)pppppppbStack_88 - (longlong)pppppppbStack_90)) {
              uStack_110 = pppppppbStack_a8;
            }
            pppppppbStack_128 = (byte *******)(pbStack_a0 + (longlong)pppppppbStack_90);
            pppppppbStack_120 = pppppppbStack_a8;
            pppppppbStack_118 = (byte *******)0x0;
            pppppppbVar5 = (byte *******)pdb_140f5ad90(&uStack_b8,&pppppppbStack_128);
            pppppppbStack_90 = (byte *******)((longlong)pppppppbStack_118 + (longlong)pppppppbVar15)
            ;
            if (pppppppbVar11 < pppppppbStack_90) {
              pppppppbVar11 = pppppppbStack_90;
            }
            pppppppbStack_88 = (byte *******)((longlong)pppppppbVar15 + (longlong)uStack_110);
            if ((byte *******)((longlong)pppppppbVar15 + (longlong)uStack_110) <= pppppppbVar11) {
              pppppppbStack_88 = pppppppbVar11;
            }
            pppppppbVar15 = (byte *******)((longlong)pppppppbStack_a8 - (longlong)pppppppbStack_118)
            ;
          }
          else {
            pppppppbVar5 = (byte *******)pdb_140f5ad90(&uStack_b8,&pbStack_a0);
            pppppppbVar15 =
                 (byte *******)
                 ((longlong)pppppppbStack_a8 +
                 ((longlong)pppppppbVar15 - (longlong)pppppppbStack_90));
          }
          pppppppbStack_a8 = pppppppbVar15;
          if (pppppppbVar5 == (byte *******)0x0) goto LAB_140c1557d;
          switch((uint)pppppppbVar5 & 3) {
          case 0:
            bVar4 = *(byte *)(pppppppbVar5 + 2);
            break;
          case 1:
            bVar4 = *(byte *)((longlong)pppppppbVar5 + 0xf);
            break;
          case 2:
            goto code_r0x000140c156e7;
          case 3:
            bVar4 = (byte)((ulonglong)pppppppbVar5 >> 0x20);
            if (0x29 < (uint)((ulonglong)pppppppbVar5 >> 0x20)) {
              bVar4 = 0x2a;
            }
          }
          if (bVar4 != 0x23) {
code_r0x000140c156e7:
            pppppppbStack_70 = (byte *******)((longlong)pppppppbVar13 + (longlong)pppppppbStack_90);
            goto LAB_140c156f1;
          }
          pppppppbStack_128 = pppppppbVar5;
          pdb_1404b38e0(&pppppppbStack_128);
        } while (pppppppbStack_a8 != (byte *******)0x0);
        pppppppbVar15 = (byte *******)0x0;
LAB_140c1557d:
        pppppppbStack_70 = (byte *******)((longlong)pppppppbVar13 + (longlong)pppppppbStack_90);
        if (pppppppbStack_90 == (byte *******)0x0) goto LAB_140c15767;
        iVar9 = (int)pppppppbStack_c0 + 1;
        if (pppppppbVar18 <= pppppppbStack_90) {
          iVar9 = 0;
        }
        pppppppbStack_c0 = (byte *******)CONCAT44(pppppppbStack_c0._4_4_,iVar9);
        pppppppbVar13 = pppppppbVar8;
        if (1 < iVar9) {
          pppppppbVar13 = (byte *******)0xffffffffffffffff;
        }
        if (pppppppbStack_88 == pppppppbVar18) {
          pppppppbVar13 = pppppppbVar8;
        }
        if ((pppppppbStack_90 == pppppppbVar18) && (pppppppbVar13 <= pppppppbVar18)) {
          if ((longlong)pppppppbVar13 < 0) {
            pppppppbVar13 = (byte *******)0xffffffffffffffff;
          }
          else {
            pppppppbVar13 = (byte *******)((longlong)pppppppbVar13 * 2);
          }
        }
        pppppppbVar11 = (byte *******)((longlong)pppppppbStack_88 - (longlong)pppppppbStack_90);
        if (pppppppbVar17 == (byte *******)0x800) goto LAB_140c1534a;
LAB_140c15410:
        pppppppbVar8 = pppppppbVar13;
      } while (pppppppbStack_70 != pppppppbVar17);
    }
    pppppppbVar5 = (byte *******)0x2600000003;
LAB_140c156f1:
    pdb_142deaf00(pppppppbVar5);
    CloseHandle(uStack_b8);
    goto joined_r0x000140c15711;
  }
LAB_140c15756:
  pppppppbStack_70 = (byte *******)0x800;
LAB_140c15767:
  pppppppbVar17 = pppppppbStack_70;
  CloseHandle(uStack_b8);
  pdb_140f69110(&pppppppbStack_128,pppppppbStack_68,pppppppbVar17);
  pppppppbVar5 = pppppppbStack_120;
  pppppppbVar13 = pppppppbStack_118;
  if (((char)pppppppbStack_128 != '\0') &&
     (pppppppbVar5 = pppppppbStack_68, pppppppbVar13 = pppppppbStack_120,
     pppppppbVar17 < pppppppbStack_120)) {
    pdb_142dc8420(0,pppppppbStack_120,pppppppbVar17,&UNK_143068c60);
    goto LAB_140c15e2b;
  }
  pdb_140f67bb0(&pppppppbStack_128,pppppppbVar5,pppppppbVar13,&UNK_143068c78,10);
  pppppppbStack_c0 = pppppppbVar5;
  if ((char)pppppppbStack_128 == '\0') {
    if (uStack_110._2_1_ != '\0') goto LAB_140c159e7;
    if (pppppppbStack_120 != (byte *******)0x0) {
      pppppppbVar17 = pppppppbStack_120;
      if (pppppppbStack_120 < pppppppbStack_d8) {
        if (-0x41 < (char)*(byte *)((longlong)pppppppbStack_120 + lStack_e0)) goto LAB_140c159da;
      }
      else if (pppppppbStack_120 == pppppppbStack_d8) goto LAB_140c159da;
      goto LAB_140c15b1c;
    }
LAB_140c159da:
    pppppppbVar15 = pppppppbStack_120;
    if (pppppppbStack_120 == pppppppbStack_d8) {
      if (((ulonglong)uStack_110 & 1) == 0) goto LAB_140c159e7;
    }
    else {
      bVar4 = *(byte *)((longlong)pppppppbStack_120 + lStack_e0);
      uVar10 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        uVar12 = *(byte *)((longlong)pppppppbStack_120 + lStack_e0 + 1) & 0x3f;
        if (bVar4 < 0xe0) {
          uVar10 = (uVar10 & 0x1f) << 6 | uVar12;
        }
        else {
          uVar12 = *(byte *)((longlong)pppppppbStack_120 + lStack_e0 + 2) & 0x3f | uVar12 << 6;
          if (bVar4 < 0xf0) {
            uVar10 = (uVar10 & 0x1f) << 0xc | uVar12;
          }
          else {
            uVar10 = (uVar10 & 7) << 0x12 |
                     *(byte *)((longlong)pppppppbStack_120 + lStack_e0 + 3) & 0x3f | uVar12 << 6;
          }
        }
      }
      if (((ulonglong)uStack_110 & 1) == 0) {
        lVar14 = 1;
        if ((0x7f < uVar10) && (lVar14 = 2, 0x7ff < uVar10)) {
          lVar14 = 4 - (ulonglong)(uVar10 < 0x10000);
        }
        pppppppbVar17 = (byte *******)((longlong)pppppppbStack_120 + lVar14);
        if (pppppppbVar17 != (byte *******)0x0) {
          if (pppppppbVar17 < pppppppbStack_d8) {
            if ((char)*(byte *)((longlong)pppppppbVar17 + lStack_e0) < -0x40) {
LAB_140c15b1c:
              pdb_142dc8070(lStack_e0,pppppppbStack_d8,pppppppbVar17,pppppppbStack_d8,&UNK_143068c08
                           );
              goto LAB_140c15e2b;
            }
          }
          else if (pppppppbVar17 != pppppppbStack_d8) goto LAB_140c15b1c;
        }
        pppppppbVar15 = pppppppbStack_d8;
        if (pppppppbVar17 != pppppppbStack_d8) {
          pppppppbVar15 = pppppppbVar17;
        }
      }
    }
LAB_140c15b51:
    pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 + 10);
    if (pppppppbVar15 != (byte *******)0x0) {
      if (pppppppbVar15 < pppppppbVar13) {
        if ((char)*(byte *)((longlong)pppppppbVar5 + (longlong)pppppppbVar15) < -0x40) {
LAB_140c15b67:
          pdb_142dc8070(pppppppbVar5,pppppppbVar13,pppppppbVar15,pppppppbVar13,&UNK_143068c88);
          goto LAB_140c15e2b;
        }
      }
      else if (pppppppbVar13 != pppppppbVar15) goto LAB_140c15b67;
    }
    pppppppbVar13 = (byte *******)((longlong)pppppppbVar13 - (longlong)pppppppbVar15);
    pppppppbVar5 = (byte *******)((longlong)pppppppbVar5 + (longlong)pppppppbVar15);
    pppppppbStack_118 = (byte *******)0x0;
    uStack_100 = 1;
    uStack_108 = 0x3a0000003a;
    pppppppbStack_128 = pppppppbVar5;
    pppppppbStack_120 = pppppppbVar13;
    uStack_110 = pppppppbVar13;
    pdb_140c14e20(&pbStack_a0,&pppppppbStack_128);
    if ((char)pbStack_a0 == '\0') {
      pppppppbStack_128 = (byte *******)&UNK_143068cd0;
      pppppppbStack_120 = (byte *******)pdb_1402ed400;
      pdb_142d8fe70(&UNK_143068ce0,&pppppppbStack_128);
      goto joined_r0x000140c15711;
    }
    pppppppbVar17 = (byte *******)((longlong)pppppppbStack_98 + 1);
    if (pppppppbVar17 != (byte *******)0x0) {
      if (pppppppbVar17 < pppppppbVar13) {
        if ((char)*(byte *)((longlong)pppppppbVar5 + (longlong)pppppppbVar17) < -0x40) {
LAB_140c15bde:
          pdb_142dc8070(pppppppbVar5,pppppppbVar13,pppppppbVar17,pppppppbVar13,&UNK_143068ca0);
          goto LAB_140c15e2b;
        }
      }
      else if (pppppppbVar13 != pppppppbVar17) goto LAB_140c15bde;
    }
    pppppppbVar13 = (byte *******)((longlong)pppppppbVar13 - (longlong)pppppppbVar17);
    pppppppbVar17 =
         (byte *******)pdb_140b95df0((byte *)((longlong)pppppppbVar5 + (longlong)pppppppbVar17));
    pppppppbStack_118 = (byte *******)0x0;
    uStack_100 = 1;
    uStack_108 = 0x2c0000002c;
    pppppppbStack_128 = pppppppbVar17;
    pppppppbStack_120 = pppppppbVar13;
    uStack_110 = pppppppbVar13;
    pdb_140c14e20(&pbStack_a0,&pppppppbStack_128);
    if ((char)pbStack_a0 != '\0') {
      if (pppppppbStack_98 == (byte *******)0x0) {
LAB_140c15cf3:
        uVar7 = pdb_140b95df0(pppppppbVar17);
        uVar7 = pdb_14164f2b0(uVar7);
        uVar7 = pdb_141707be0(uVar7);
        if (pppppppbStack_80 == (byte *******)0x0) {
          return uVar7;
        }
        pub_1406abac0((byte *)pppppppbStack_68,(ulonglong)pppppppbStack_80,1);
        return uVar7;
      }
      if (pppppppbStack_98 < pppppppbVar13) {
        if (-0x41 < (char)*(byte *)((longlong)pppppppbVar17 + (longlong)pppppppbStack_98))
        goto LAB_140c15cf3;
      }
      else if (pppppppbStack_98 == pppppppbVar13) goto LAB_140c15cf3;
      pdb_142dc8070(pppppppbVar17,pppppppbVar13,0,pppppppbStack_98,&UNK_143068cb8);
      goto LAB_140c15e2b;
    }
    pppppppbStack_128 = (byte *******)&UNK_143068cd0;
    pppppppbStack_120 = (byte *******)pdb_1402ed400;
    pdb_142d8fe70(&UNK_143068d35,&pppppppbStack_128);
    goto joined_r0x000140c15711;
  }
  if (pppppppbStack_f0 == (byte *******)0xffffffffffffffff) {
    pppppppbVar15 = (byte *******)CONCAT71(uStack_ff,uStack_100);
    pppppppbVar17 = (byte *******)((longlong)pppppppbVar15 + (longlong)pppppppbStack_c8 + -1);
    if (pppppppbStack_d8 <= pppppppbVar17) goto LAB_140c159e7;
    pppppppbVar11 = (byte *******)((longlong)pppppppbStack_120 + -1);
    if (pppppppbStack_c8 <= pppppppbVar11) {
      do {
        if ((uStack_108 >> ((ulonglong)*(byte *)((longlong)pppppppbVar17 + lStack_e0) & 0x3f) & 1)
            == 0) {
          pppppppbVar17 = (byte *******)((longlong)pppppppbVar15 + (longlong)pppppppbStack_c8);
        }
        else {
          lVar14 = 0;
          pppppppbVar8 = pppppppbVar15;
          do {
            if (pppppppbStack_c8 <= (byte *******)((longlong)pppppppbStack_120 + lVar14)) {
              if (pppppppbStack_120 != (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pppppppbVar11,pppppppbStack_c8,&UNK_1430690f8);
              }
              goto LAB_140c15b51;
            }
            if (pppppppbStack_d8 <=
                (byte *******)((longlong)pppppppbStack_120 + (longlong)pppppppbVar8))
            goto LAB_140c15dff;
            lVar3 = lVar14 + lStack_d0;
            lVar14 = lVar14 + 1;
            pbVar16 = (byte *)((longlong)pppppppbStack_120 + lStack_e0) + (longlong)pppppppbVar8;
            pppppppbVar17 = (byte *******)((longlong)pppppppbVar8 + 1);
            pppppppbVar8 = (byte *******)((longlong)pppppppbVar8 + 1);
          } while (*(byte *)((longlong)pppppppbStack_120 + lVar3) == *pbVar16);
        }
        pppppppbVar15 = pppppppbVar17;
        pppppppbVar17 =
             (byte *******)((longlong)pppppppbVar15 + (longlong)((longlong)pppppppbStack_c8 + -1));
      } while (pppppppbVar17 < pppppppbStack_d8);
      goto LAB_140c159e7;
    }
LAB_140c15950:
    if ((uStack_108 >> ((ulonglong)*(byte *)((longlong)pppppppbVar17 + lStack_e0) & 0x3f) & 1) == 0)
    {
      pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 + (longlong)pppppppbStack_c8);
    }
    else {
      lVar14 = -(longlong)pppppppbVar15;
      pppppppbVar17 = pppppppbStack_120;
      do {
        if (pppppppbStack_c8 == pppppppbVar17) {
          pppppppbVar17 = (byte *******)((longlong)pppppppbVar11 + (longlong)pppppppbVar15);
          pbVar16 = (byte *)((longlong)pppppppbVar11 + lStack_d0);
          pppppppbVar8 = pppppppbStack_120;
          goto LAB_140c159a7;
        }
        if (pppppppbStack_d8 <= (byte *******)((longlong)pppppppbVar15 + (longlong)pppppppbVar17)) {
LAB_140c15dff:
          pppppppbVar17 = (byte *******)((longlong)pppppppbVar15 + (longlong)pppppppbStack_120);
          if ((byte *******)((longlong)pppppppbVar15 + (longlong)pppppppbStack_120) <
              pppppppbStack_d8) {
            pppppppbVar17 = pppppppbStack_d8;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pppppppbVar17,pppppppbStack_d8,&UNK_143069128);
        }
        pbVar16 = (byte *)((longlong)pppppppbVar17 + lStack_d0);
        lVar14 = lVar14 + -1;
        pbVar1 = (byte *)((longlong)pppppppbVar15 + lStack_e0) + (longlong)pppppppbVar17;
        pppppppbVar17 = (byte *******)((longlong)pppppppbVar17 + 1);
      } while (*pbVar16 == *pbVar1);
      pppppppbVar15 = (byte *******)-lVar14;
    }
    goto LAB_140c1593f;
  }
  pppppppbVar15 = (byte *******)CONCAT71(uStack_ff,uStack_100);
  pppppppbVar17 =
       (byte *******)((byte *)((longlong)pppppppbStack_c8 + -1) + (longlong)pppppppbVar15);
  if (pppppppbStack_d8 <= pppppppbVar17) goto LAB_140c159e7;
LAB_140c15824:
  if ((uStack_108 >> ((ulonglong)*(byte *)((longlong)pppppppbVar17 + lStack_e0) & 0x3f) & 1) == 0) {
    pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 + (longlong)pppppppbStack_c8);
  }
  else {
    pppppppbVar17 = pppppppbStack_120;
    if (pppppppbStack_120 < pppppppbStack_f0) {
      pppppppbVar17 = pppppppbStack_f0;
    }
    pppppppbVar11 = pppppppbVar17;
    do {
      pppppppbVar8 = pppppppbStack_120;
      if (pppppppbStack_c8 <= pppppppbVar11) goto LAB_140c15890;
      if (pppppppbStack_d8 <= (byte *******)((longlong)pppppppbVar15 + (longlong)pppppppbVar11)) {
        pppppppbVar5 = (byte *******)((longlong)pppppppbVar17 + (longlong)pppppppbVar15);
        if ((byte *******)((longlong)pppppppbVar17 + (longlong)pppppppbVar15) < pppppppbStack_d8) {
          pppppppbVar5 = pppppppbStack_d8;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppbVar5,pppppppbStack_d8,&UNK_143069128);
      }
      pppppppbVar8 = (byte *******)((longlong)pppppppbVar11 + 1);
      pbVar16 = (byte *)((longlong)pppppppbVar11 + lStack_d0);
      pbVar1 = (byte *)((longlong)pppppppbVar15 + lStack_e0) + (longlong)pppppppbVar11;
      pppppppbVar11 = pppppppbVar8;
    } while (*pbVar16 == *pbVar1);
    pppppppbVar15 =
         (byte *******)
         ((longlong)pppppppbVar8 + ((longlong)pppppppbVar15 - (longlong)pppppppbStack_120));
  }
  pppppppbStack_f0 = (byte *******)0x0;
  goto LAB_140c15872;
  while( true ) {
    if (pppppppbStack_d8 <= pppppppbVar17) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pppppppbVar17,pppppppbStack_d8,&UNK_143069110);
    }
    bVar4 = *pbVar16;
    pbVar16 = pbVar16 + -1;
    pbVar1 = (byte *)((longlong)pppppppbVar17 + lStack_e0);
    pppppppbVar17 = (byte *******)((longlong)pppppppbVar17 + -1);
    if (bVar4 != *pbVar1) break;
LAB_140c159a7:
    bVar19 = pppppppbVar8 == (byte *******)0x0;
    pppppppbVar8 = (byte *******)((longlong)pppppppbVar8 + -1);
    if (bVar19) goto LAB_140c15b51;
  }
  pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 + (longlong)uStack_110);
LAB_140c1593f:
  pppppppbVar17 =
       (byte *******)((longlong)pppppppbVar15 + (longlong)((longlong)pppppppbStack_c8 + -1));
  if (pppppppbStack_d8 <= pppppppbVar17) goto LAB_140c159e7;
  goto LAB_140c15950;
  while( true ) {
    pppppppbVar8 = (byte *******)((longlong)pppppppbVar8 + -1);
    if (pppppppbStack_c8 <= pppppppbVar8) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pppppppbVar8,pppppppbStack_c8,&UNK_1430690f8);
    }
    pppppppbVar17 = (byte *******)((longlong)pppppppbVar8 + (longlong)pppppppbVar15);
    if (pppppppbStack_d8 <= pppppppbVar17) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pppppppbVar17,pppppppbStack_d8,&UNK_143069110);
    }
    if (*(byte *)((longlong)pppppppbVar8 + lStack_d0) !=
        *(byte *)((longlong)pppppppbVar17 + lStack_e0)) break;
LAB_140c15890:
    if (pppppppbVar8 <= pppppppbStack_f0) goto LAB_140c15b51;
  }
  pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 + (longlong)uStack_110);
  pppppppbStack_f0 = (byte *******)((longlong)pppppppbStack_c8 - (longlong)uStack_110);
LAB_140c15872:
  pppppppbVar17 =
       (byte *******)((byte *)((longlong)pppppppbStack_c8 + -1) + (longlong)pppppppbVar15);
  if (pppppppbStack_d8 <= pppppppbVar17) {
LAB_140c159e7:
    pdb_142d90790();
joined_r0x000140c15711:
    if (pppppppbStack_80 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_78,(ulonglong)pppppppbStack_80,1);
    }
    return 1;
  }
  goto LAB_140c15824;
}

