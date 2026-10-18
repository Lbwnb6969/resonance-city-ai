// VA 0x140618b60, PDB extent 1635 bytes
// tiny_glade::panic_reporter::sentry_reporter::create_sentry_attachment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   tiny_glade::panic_reporter::sentry_reporter::create_sentry_attachment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
   Extent: 1635 */

undefined8 * pdb_140618b60(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  code *pcVar1;
  int *******pppppppiVar2;
  int *******arg0;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int aiStack_1a0 [2];
  int *******pppppppiStack_198;
  longlong lStack_168;
  int *******pppppppiStack_148;
  int *******pppppppiStack_140;
  int *******pppppppiStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int *******pppppppiStack_c8;
  int *******pppppppiStack_c0;
  int *******pppppppiStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  ulonglong uStack_50;
  int *******pppppppiStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_e8 = *param_2;
  if (SBORROW8(0,uStack_e8)) {
    pppppppiStack_b8 = (int *******)param_2[3];
    pppppppiStack_c8 = (int *******)param_2[1];
    pppppppiStack_c0 = (int *******)param_2[2];
    uVar4 = pdb_142d87540(&pppppppiStack_c8);
    param_1[1] = uVar4;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pbStack_e0 = (byte *)param_2[1];
  uStack_d8 = (undefined4)param_2[2];
  uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = param_2[2];
  uStack_d0 = (undefined4)param_2[3];
  uStack_cc = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar8 = uVar6;
  pbStack_58 = pbStack_e0;
  uStack_50 = uStack_e8;
  lVar3 = pdb_140f3ecf0(pbStack_e0,uVar6);
  if (lVar3 == 0) {
    pdb_140f3f5b0(&pppppppiStack_c8);
    uVar4 = pdb_142d884c0(&UNK_142f88878,0x17,&pppppppiStack_c8);
  }
  else {
    pdb_140f69110(&pppppppiStack_c8,lVar3,uVar8);
    arg0 = pppppppiStack_b8;
    pppppppiVar2 = pppppppiStack_c0;
    if ((int)pppppppiStack_c8 != 1) {
      if ((longlong)pppppppiStack_b8 < 0) {
        uVar4 = 0;
LAB_140618c76:
        pdb_142dc7e2a(uVar4,arg0);
        goto LAB_1406190d5;
      }
      pppppppiStack_48 = pppppppiStack_b8;
      if (pppppppiStack_b8 == (int *******)0x0) {
        pbStack_70 = (byte *)0x1;
      }
      else {
        pdb_14007ee60();
        uVar4 = 1;
        pbVar5 = pub_1406abab0((ulonglong)arg0,1);
        if (pbVar5 == (byte *)0x0) goto LAB_140618c76;
        pbStack_70 = pbVar5;
        pub_142e32760(pbVar5,pppppppiVar2,arg0);
      }
      uVar8 = uVar6;
      lVar3 = pdb_140f3ec80(pbStack_58,uVar6);
      if (lVar3 == 0) {
        pdb_140f3f5b0(&pppppppiStack_c8);
        uVar4 = pdb_142d884c0(&UNK_142f8888f,0x21,&pppppppiStack_c8);
LAB_140618e94:
        param_1[1] = uVar4;
        *param_1 = 0x8000000000000000;
        uVar6 = uStack_50;
        pppppppiVar2 = pppppppiStack_48;
      }
      else {
        pdb_140f69110(&pppppppiStack_c8,lVar3,uVar8);
        if ((int)pppppppiStack_c8 == 1) {
          uVar4 = pdb_142d877a0(&UNK_142f888e7,0x1c);
          goto LAB_140618e94;
        }
        pppppppiStack_148 = pppppppiStack_c0;
        pppppppiStack_140 = pppppppiStack_b8;
        if (pppppppiStack_b8 == (int *******)0x4) {
          if (*(int *)pppppppiStack_c0 != 0x6e6f736a) goto LAB_140618e68;
          uVar8 = 0x10;
          puVar7 = &UNK_142f8895e;
        }
        else {
          if (pppppppiStack_b8 != (int *******)0x3) {
LAB_140618e68:
            pppppppiStack_c0 = (int *******)pdb_1402ed420;
            pppppppiStack_c8 = (int *******)&pppppppiStack_148;
            uVar4 = pdb_142d7e3a0(&UNK_142f88903,&pppppppiStack_c8);
            goto LAB_140618e94;
          }
          uVar8 = 10;
          if (*(char *)((longlong)pppppppiStack_c0 + 2) == 'g' &&
              *(short *)pppppppiStack_c0 == 0x706a) {
            puVar7 = &UNK_142f8896e;
          }
          else {
            puVar7 = &UNK_142f88954;
            if (((*(char *)((longlong)pppppppiStack_c0 + 2) != 't' ||
                  *(short *)pppppppiStack_c0 != 0x7874) &&
                (*(char *)((longlong)pppppppiStack_c0 + 2) != 'n' ||
                 *(short *)pppppppiStack_c0 != 0x6f72)) &&
               (*(char *)((longlong)pppppppiStack_c0 + 2) != 'g' ||
                *(short *)pppppppiStack_c0 != 0x6f6c)) {
              if (*(char *)((longlong)pppppppiStack_c0 + 2) == 'p' &&
                  *(short *)pppppppiStack_c0 == 0x6d64) {
                uVar8 = 0x12;
                puVar7 = &UNK_142f88942;
              }
              else {
                if (*(char *)((longlong)pppppppiStack_c0 + 2) != 'p' ||
                    *(short *)pppppppiStack_c0 != 0x697a) goto LAB_140618e68;
                uVar8 = 0xf;
                puVar7 = &UNK_142f88933;
              }
            }
          }
        }
        pdb_14007ee60();
        pbStack_60 = pub_1406abab0(uVar8,1);
        if (pbStack_60 == (byte *)0x0) {
          pdb_142dc7e2a(1,uVar8);
LAB_1406190d5:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uStack_68 = uVar8;
        pub_142e32760(pbStack_60,puVar7,uVar8);
        pdb_140f4f620(&pppppppiStack_c8,pbStack_58,uVar6);
        if ((int)pppppppiStack_c8 == 2) {
          pppppppiStack_148 = (int *******)0x2;
        }
        else {
          uStack_f8 = uStack_78;
          uStack_108 = uStack_88;
          uStack_100 = uStack_80;
          uStack_118 = uStack_98;
          uStack_110 = uStack_90;
          uStack_128 = uStack_a8;
          uStack_120 = uStack_a0;
          pppppppiStack_138 = pppppppiStack_b8;
          uStack_130 = uStack_b0;
          pppppppiStack_148 = pppppppiStack_c8;
        }
        pppppppiStack_140 = pppppppiStack_c0;
        pdb_140165340(aiStack_1a0,&pppppppiStack_148,&uStack_e8);
        if (aiStack_1a0[0] != 2) {
          uVar8 = *param_3;
          if (lStack_168 + uVar8 < 0x1400001) {
            pdb_140f55fb0(&pppppppiStack_c8,pbStack_58,uVar6);
            pdb_140164b70(&pppppppiStack_148,&pppppppiStack_c8,&uStack_e8);
            pppppppiStack_198 = pppppppiStack_140;
            if (!SBORROW8(0,(longlong)pppppppiStack_148)) {
              *param_3 = lStack_168 + uVar8;
              param_1[6] = uStack_68;
              param_1[7] = pbStack_60;
              param_1[8] = uStack_68;
              param_1[3] = pppppppiStack_48;
              param_1[4] = pbStack_70;
              param_1[5] = pppppppiStack_48;
              *param_1 = pppppppiStack_148;
              param_1[1] = pppppppiStack_140;
              param_1[2] = pppppppiStack_138;
              *(undefined1 *)(param_1 + 9) = 5;
              uVar6 = uStack_50;
              goto LAB_140618c3b;
            }
          }
          else {
            pppppppiStack_198 = (int *******)pdb_142d877a0(&UNK_142f888b0,0x19);
          }
        }
        pppppppiVar2 = pppppppiStack_48;
        uVar6 = uStack_50;
        param_1[1] = pppppppiStack_198;
        *param_1 = 0x8000000000000000;
        pub_1406abac0(pbStack_60,uStack_68,1);
      }
      if (pppppppiVar2 != (int *******)0x0) {
        pub_1406abac0(pbStack_70,(ulonglong)pppppppiVar2,1);
      }
      goto LAB_140618c3b;
    }
    uVar4 = pdb_142d877a0(&UNK_142f888cb,0x1c);
  }
  param_1[1] = uVar4;
  *param_1 = 0x8000000000000000;
  uVar6 = uStack_50;
LAB_140618c3b:
  if (uVar6 != 0) {
    pub_1406abac0(pbStack_58,uVar6,1);
  }
  return param_1;
}

