// VA 0x142571fc0, PDB extent 1143 bytes
// turbosloth::util::SourceFileSnapshot::read
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::util::SourceFileSnapshot::read
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
   Extent: 1143 */

ulonglong * pdb_142571fc0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  byte *pbVar3;
  char cVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong unaff_R13;
  ulonglong uStack_110;
  byte *pbStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong uStack_88;
  ulonglong uStack_80;
  byte *apbStack_78 [2];
  byte *pbStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f55fb0(&uStack_110);
  if (SBORROW8(0,uStack_110)) {
    cVar4 = pdb_142570dc0(pbStack_108);
    if (cVar4 == '\0') {
      uStack_58 = uStack_110;
      apbStack_78[0] = pbStack_108;
      pdb_140f60120(&uStack_98,param_2,param_3);
      uStack_d0 = 0;
      uStack_d8 = 2;
      param_1[10] = uStack_88;
      param_1[0xb] = uStack_80;
      *(undefined4 *)(param_1 + 8) = uStack_98;
      *(undefined4 *)((longlong)param_1 + 0x44) = uStack_94;
      *(undefined4 *)(param_1 + 9) = uStack_90;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_8c;
      *(undefined4 *)(param_1 + 6) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_a8._4_4_;
      *(undefined4 *)(param_1 + 7) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_a0._4_4_;
      *(undefined4 *)(param_1 + 4) = uStack_b8;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_b4;
      *(undefined4 *)(param_1 + 5) = uStack_b0;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_ac;
      *(uint *)(param_1 + 2) = uStack_c8;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_c4;
      *(undefined4 *)(param_1 + 3) = uStack_c0;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_bc;
      *param_1 = 2;
      param_1[1] = 0;
      param_1[0xc] = 0;
      pdb_1404b38e0(apbStack_78);
    }
    else {
      param_1[2] = (ulonglong)pbStack_108;
      param_1[1] = 0;
      *param_1 = 3;
    }
  }
  else {
    uStack_58 = uStack_110;
    uStack_49 = 1;
    pbStack_60 = pbStack_108;
    uVar7 = uStack_100;
    uVar5 = pdb_142570fc0(pbStack_108);
    uStack_49 = 1;
    uStack_f8 = uVar7;
    pdb_140f4f620(&uStack_d8,param_2,param_3);
    if ((int)uStack_d8 == 2) {
      param_1[2] = uStack_d0;
      param_1[1] = 0;
      *param_1 = 3;
      if (uStack_58 != 0) {
        pub_1406abac0(pbStack_60,uStack_58,1);
      }
    }
    else {
      uStack_e8 = uStack_a0;
      apbStack_78[0] = uStack_a8;
      uStack_49 = 1;
      pdb_140f3fcf0(&uStack_d8,apbStack_78,0xd53e8000,0x19db1de);
      pbVar3 = pbStack_108;
      if ((char)uStack_d8 == '\0') {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uStack_d0;
        auVar1 = auVar1 * ZEXT816(1000000000) + ZEXT416(uStack_c8);
        unaff_R13 = auVar1._8_8_;
        pbVar3 = auVar1._0_8_;
      }
      uStack_e0 = (ulonglong)((char)uStack_d8 == '\0');
      pbVar6 = pbStack_60;
      uStack_f0 = uVar5;
      if (uStack_100 < uStack_58) {
        if (uStack_100 == 0) {
          pub_1406abac0(pbStack_60,uStack_58,1);
          pbVar6 = (byte *)0x1;
        }
        else {
          pbVar6 = pub_1406abad0(pbStack_60,uStack_58,1,uStack_100);
          if (pbVar6 == (byte *)0x0) {
            pdb_142dc7e2a(1,uStack_100);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
      }
      uStack_49 = 0;
      uVar5 = uStack_100;
      apbStack_78[0] = (byte *)pdb_140dd7490(pbVar6);
      uVar7 = uStack_f0;
      pbStack_68 = apbStack_78[0];
      pdb_140f60120(&uStack_98,param_2,param_3);
      *param_1 = uStack_e0;
      param_1[1] = 0;
      param_1[4] = uStack_e8;
      param_1[5] = CONCAT44(uStack_ac,uStack_b0);
      param_1[8] = CONCAT44(uStack_94,uStack_98);
      param_1[9] = CONCAT44(uStack_8c,uStack_90);
      param_1[10] = uStack_88;
      param_1[0xb] = uStack_80;
      param_1[2] = (ulonglong)pbVar3;
      param_1[3] = unaff_R13;
      param_1[6] = uVar7;
      param_1[7] = uStack_f8;
      param_1[0xc] = (ulonglong)pbStack_68;
      param_1[0xd] = uVar5;
    }
  }
  return param_1;
}

