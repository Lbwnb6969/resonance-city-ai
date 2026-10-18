// VA 0x140492da0, PDB extent 2451 bytes
// tiny_glade::crash_pickup::CrashReporter::spawn_server
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure: tiny_glade::crash_pickup::CrashReporter::spawn_server
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/mod.rs
   Extent: 2451 */

int * pdb_140492da0(int *param_1,ulonglong *param_2,byte param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *******pppppppbVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  byte *******pppppppbVar8;
  ulonglong *puVar9;
  undefined *puVar10;
  byte *arg0;
  bool bVar11;
  longlong lVar12;
  undefined4 uVar13;
  ulonglong uStack_290;
  byte *pbStack_288;
  byte *******pppppppbStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  undefined8 uStack_1b8;
  byte *******pppppppbStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  byte *******pppppppbStack_b8;
  byte *pbStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  byte *pbStack_78;
  undefined1 uStack_69;
  ulonglong *puStack_68;
  byte *******pppppppbStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_68 = param_2;
  pdb_140f4d120(&uStack_290);
  pppppppbVar4 = pppppppbStack_280;
  pbStack_58 = pbStack_288;
  pdb_140eacc10(&uStack_f8);
  pppppppbStack_b8 = (byte *******)0x0;
  pbStack_b0 = (byte *)0x1;
  lStack_a8 = 0;
  uStack_1a0 = 0x60000020;
  pppppppbStack_1b0 = (byte *******)&pppppppbStack_b8;
  uStack_1a8 = &UNK_142f5fa00;
  cVar6 = pdb_140eaccb0(&uStack_f8,&pppppppbStack_1b0);
  if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f5fa30,0x37,&uStack_69,&UNK_142f5fb00,&UNK_142f5fad8);
  }
  pppppppbStack_60 = pppppppbStack_b8;
  pbStack_78 = pbStack_b0;
  lVar12 = lStack_a8;
  pdb_140f3e9e0(&uStack_d8,pbStack_58,pppppppbVar4,pbStack_b0,lStack_a8);
  uVar13 = (undefined4)((ulonglong)lVar12 >> 0x20);
  if (pppppppbStack_60 != (byte *******)0x0) {
    pub_1406abac0(pbStack_78,(ulonglong)pppppppbStack_60,1);
  }
  if (uStack_290 != 0) {
    pub_1406abac0(pbStack_58,uStack_290,1);
  }
  pdb_140f69110(&uStack_290,pbStack_d0,uStack_c8);
  pppppppbVar4 = pppppppbStack_280;
  pbVar3 = pbStack_288;
  bVar11 = (char)uStack_290 == '\0';
  pbStack_288 = &UNK_142f5f8c8;
  pppppppbStack_280 = (byte *******)0x21;
  uStack_290 = 9;
  if (bVar11) {
    pdb_140493f00(&uStack_290);
    pdb_140f4c420(&uStack_f8);
    if (!SBORROW8(0,uStack_f8)) {
      pbStack_58 = (byte *)uStack_f8;
      pppppppbStack_60 = (byte *******)pbStack_f0;
      pdb_140f46810(&uStack_290,pbStack_f0,uStack_e8);
      pub_142e32760(&pppppppbStack_1b0,&uStack_290,0xb8);
      if (pbStack_58 != (byte *)0x0) {
        pub_1406abac0((byte *)pppppppbStack_60,(ulonglong)pbStack_58,1);
      }
      pdb_140f46740(&pppppppbStack_1b0,&UNK_142f5f8e9,0x17);
      pdb_140f46740(&pppppppbStack_1b0,pbVar3,pppppppbVar4);
      pdb_140f46740(&pppppppbStack_1b0,&UNK_142f5f900,0x1f);
      arg0 = (byte *)((ulonglong)param_3 ^ 5);
      pdb_14007ee60();
      pppppppbVar8 = (byte *******)pub_1406abab0((ulonglong)arg0,1);
      if (pppppppbVar8 == (byte *******)0x0) {
        pdb_142dc7e2a(1,arg0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puVar10 = &UNK_142f5f874;
      if (param_3 != 0) {
        puVar10 = &UNK_142f5f879;
      }
      pub_142e32760(pppppppbVar8,puVar10,arg0);
      pppppppbStack_60 = pppppppbVar8;
      pbStack_58 = arg0;
      pdb_140f46740(&pppppppbStack_1b0,pppppppbVar8,arg0);
      pub_1406abac0((byte *)pppppppbStack_60,(ulonglong)pbStack_58,1);
      pdb_140f4a100(&pppppppbStack_b8,&pppppppbStack_1b0);
      pdb_1404b39c0(&pppppppbStack_1b0);
      puVar9 = puStack_68;
      pbStack_f0 = pbStack_b0;
      if (pppppppbStack_b8 != (byte *******)0x2) {
        uStack_178 = uStack_80;
        uStack_188 = uStack_90;
        uStack_184 = uStack_8c;
        uStack_180 = uStack_88;
        uStack_17c = uStack_84;
        uStack_198 = uStack_a0;
        uStack_194 = uStack_9c;
        uStack_190 = uStack_98;
        uStack_18c = uStack_94;
        pppppppbStack_1b0 = pppppppbStack_b8;
        uStack_1a8 = pbStack_b0;
        uStack_1a0 = lStack_a8;
        uVar1 = puStack_68[5];
        uStack_49 = 1;
        uVar7 = pdb_140f47380(&pppppppbStack_1b0);
        uStack_49 = 1;
        pdb_14016ae10(&iStack_1d8,pbVar3,pppppppbVar4,uVar1,CONCAT44(uVar13,uVar7),puVar9[4] >> 1);
        if (iStack_1d8 == 10) {
          uStack_250 = uStack_180;
          uStack_24c = uStack_17c;
          uStack_248 = (undefined4)uStack_178;
          uStack_244 = uStack_178._4_4_;
          uStack_260 = uStack_190;
          uStack_25c = uStack_18c;
          uStack_258 = uStack_188;
          uStack_254 = uStack_184;
          uStack_270 = (undefined4)uStack_1a0;
          uStack_26c = uStack_1a0._4_4_;
          uStack_268 = uStack_198;
          uStack_264 = uStack_194;
          pppppppbStack_280 = pppppppbStack_1b0;
          uStack_278 = (undefined4)uStack_1a8;
          uStack_274 = uStack_1a8._4_4_;
          uStack_290 = 1;
          pbStack_288 = (byte *)0x1;
          pppppppbStack_b8 = (byte *******)CONCAT44(iStack_1cc,iStack_1d0);
          pdb_14007ee60();
          puVar9 = (ulonglong *)pub_1406abab0(0x50,8);
          if (puVar9 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x50);
          }
          puVar9[8] = CONCAT44(uStack_24c,uStack_250);
          puVar9[9] = CONCAT44(uStack_244,uStack_248);
          puVar9[6] = CONCAT44(uStack_25c,uStack_260);
          puVar9[7] = CONCAT44(uStack_254,uStack_258);
          puVar9[4] = CONCAT44(uStack_26c,uStack_270);
          puVar9[5] = CONCAT44(uStack_264,uStack_268);
          puVar9[2] = (ulonglong)pppppppbStack_280;
          puVar9[3] = CONCAT44(uStack_274,uStack_278);
          *puVar9 = uStack_290;
          puVar9[1] = (ulonglong)pbStack_288;
          *(byte ********)(param_1 + 2) = (byte *******)CONCAT44(iStack_1cc,iStack_1d0);
          *(ulonglong **)(param_1 + 4) = puVar9;
          param_1[0] = 10;
          param_1[1] = 0;
          puVar9 = puStack_68;
        }
        else {
          uStack_290 = pdb_140f47390(&pppppppbStack_1b0);
          if (uStack_290 != 0) {
            pdb_1404b38e0(&uStack_290);
          }
          pdb_140f47430(&uStack_290,&pppppppbStack_1b0);
          if ((int)uStack_290 != 0) {
            pdb_1404b38e0(&pbStack_288);
          }
          uVar5 = uStack_178;
          *(undefined8 *)(param_1 + 8) = uStack_1b8;
          param_1[4] = iStack_1c8;
          param_1[5] = iStack_1c4;
          param_1[6] = iStack_1c0;
          param_1[7] = iStack_1bc;
          *param_1 = iStack_1d8;
          param_1[1] = iStack_1d4;
          param_1[2] = iStack_1d0;
          param_1[3] = iStack_1cc;
          CloseHandle(CONCAT44(uStack_17c,uStack_180));
          CloseHandle(uVar5);
          if (pppppppbStack_1b0 != (byte *******)0x0) {
            CloseHandle(uStack_1a8);
          }
          puVar9 = puStack_68;
          if (uStack_1a0 != 0) {
            CloseHandle(CONCAT44(uStack_194,uStack_198));
          }
          if (CONCAT44(uStack_18c,uStack_190) != 0) {
            CloseHandle(CONCAT44(uStack_184,uStack_188));
          }
        }
        goto joined_r0x000140493119;
      }
    }
    param_1[0] = 6;
    param_1[1] = 0;
    *(byte **)(param_1 + 2) = pbStack_f0;
    puVar9 = puStack_68;
  }
  else {
    param_1[0] = 9;
    param_1[1] = 0;
    *(undefined **)(param_1 + 2) = &UNK_142f5f8c8;
    param_1[4] = 0x21;
    param_1[5] = 0;
    puVar9 = puStack_68;
  }
joined_r0x000140493119:
  if (uStack_d8 != 0) {
    pub_1406abac0(pbStack_d0,uStack_d8,1);
  }
  if (*puVar9 != 0) {
    pub_1406abac0((byte *)puVar9[1],*puVar9,1);
  }
  return param_1;
}

