// VA 0x1414c40f0, PDB extent 1491 bytes
// system_decorator::apply_decorator_op::apply_decorator_op
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/apply_decorator_op.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::apply_decorator_op::apply_decorator_op
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/apply_decorator_op.rs
   Extent: 1491 */

void pdb_1414c40f0(ulonglong *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uStack_248;
  ulonglong uStack_240;
  ulonglong uStack_238;
  ulonglong uStack_230;
  ulonglong uStack_228;
  ulonglong uStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  ulonglong uStack_208;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  byte bStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulonglong uStack_188;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  undefined4 uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte bStack_48;
  
  bVar3 = (byte)param_2;
  if ((bVar3 & param_5 == 0) != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143312af0,0x2f,&UNK_143312b58);
  }
  lVar2 = 0;
  if (1 < *param_1) {
    lVar2 = *param_1 - 2;
  }
  if (lVar2 == 0) {
    pub_142e32760(&uStack_178,param_1,0x90);
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143312b70);
    }
    pdb_1414d0170(param_5,uStack_178,uStack_170,param_4,param_7,&UNK_143312b88,0x10);
    if (uStack_168 != 3) {
      pdb_1414d0170(param_5,uStack_168,uStack_160,param_4,param_7,&UNK_143312b98,0x10);
    }
    uStack_1d0 = uStack_f0;
    if (param_6 != (longlong *)0x0) {
      lVar2 = param_6[2];
      if (lVar2 == *param_6) {
        pdb_142d7e6e0(param_6);
      }
      *(undefined8 *)(param_6[1] + lVar2 * 0x20) = 3;
      param_6[2] = lVar2 + 1;
      uVar4 = uStack_178;
      uVar6 = uStack_170;
      if (uStack_168 != 3) {
        uVar4 = uStack_168;
        uVar6 = uStack_160;
      }
      pdb_140901390(&uStack_248,uVar4,uVar6,uStack_f0);
      pdb_1414b5bd0(param_6 + 3,&uStack_248);
      uStack_1d0 = uStack_f0;
    }
    pdb_140c402b0(param_4,&uStack_178,param_2);
    uStack_1d8 = param_1[0xe];
    uStack_1e8 = param_1[0xc];
    uStack_1e0 = param_1[0xd];
    uStack_1f8 = param_1[10];
    uStack_1f0 = param_1[0xb];
    uStack_238 = param_1[2];
    uStack_230 = param_1[3];
    uStack_228 = param_1[4];
    uStack_220 = param_1[5];
    uStack_218 = param_1[6];
    uStack_210 = param_1[7];
    uStack_208 = param_1[8];
    uStack_200 = param_1[9];
    uStack_1c8 = uStack_100;
    uStack_1c0 = uStack_f8;
    uStack_248 = uStack_178;
    uStack_240 = uStack_170;
    uStack_1b8 = *param_3;
    uStack_1b4 = param_3[1];
    uStack_1b0 = param_3[2];
    uStack_1ac = param_3[3];
    puVar5 = &uStack_248;
    bStack_1a8 = bVar3;
  }
  else if (lVar2 == 1) {
    uStack_1e8 = param_1[0xd];
    uStack_1e0 = param_1[0xe];
    uStack_1f8 = param_1[0xb];
    uStack_1f0 = param_1[0xc];
    uStack_208 = param_1[9];
    uStack_200 = param_1[10];
    uVar4 = param_1[1];
    uVar6 = param_1[2];
    uStack_238 = param_1[3];
    uStack_230 = param_1[4];
    uStack_228 = param_1[5];
    uStack_220 = param_1[6];
    uStack_218 = param_1[7];
    uStack_210 = param_1[8];
    uStack_248 = uVar4;
    uStack_240 = uVar6;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143312ba8);
    }
    pdb_1414d0170(param_5,uVar4,uVar6,param_4,param_7,&UNK_143312bc0,0xd);
    if (param_6 == (longlong *)0x0) {
      uStack_a8 = (undefined4)uStack_1e8;
    }
    else {
      lVar2 = param_6[2];
      if (lVar2 == *param_6) {
        pdb_142d7e6e0(param_6);
      }
      *(undefined8 *)(param_6[1] + lVar2 * 0x20) = 4;
      param_6[2] = lVar2 + 1;
      uVar1 = (undefined4)uStack_1e8;
      pdb_140901390(&uStack_178,uVar4,uVar6,uStack_1e8 & 0xffffffff);
      pdb_1414b5bd0(param_6 + 3,&uStack_178);
      uStack_a8 = uVar1;
    }
    pdb_140c3f110(param_4,&uStack_248,param_2);
    uStack_b0 = param_1[9];
    uStack_d0 = param_1[5];
    uStack_c8 = param_1[6];
    uStack_c0 = param_1[7];
    uStack_b8 = param_1[8];
    uStack_68 = uStack_238;
    uStack_60 = uStack_230;
    uStack_e8 = 3;
    uStack_a4 = (undefined2)uStack_1e0;
    uStack_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    puVar5 = &uStack_e8;
    uStack_e0 = uVar4;
    uStack_d8 = uVar6;
    bStack_48 = bVar3;
  }
  else {
    uStack_188 = param_1[3];
    uStack_198 = (undefined4)param_1[1];
    uStack_194 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar4 = param_1[1];
    uStack_190 = (undefined4)param_1[2];
    uStack_18c = *(undefined4 *)((longlong)param_1 + 0x14);
    uVar6 = param_1[2];
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143312bd0);
    }
    pdb_1414d0170(param_5,uVar4,uVar6,param_4,param_7,&UNK_143312be8,0xe);
    if (param_6 != (longlong *)0x0) {
      lVar2 = param_6[2];
      if (lVar2 == *param_6) {
        pdb_142d7e6e0(param_6);
      }
      *(undefined8 *)(param_6[1] + lVar2 * 0x20) = 5;
      param_6[2] = lVar2 + 1;
    }
    pdb_140c40700(&uStack_178,param_4,&uStack_198,param_2);
    uStack_220 = uStack_168;
    uStack_218 = uStack_160;
    uStack_210 = uStack_158;
    uStack_208 = uStack_150;
    uStack_200 = uStack_148;
    uStack_1f8 = uStack_140;
    uStack_1f0 = uStack_138;
    uStack_1e8 = uStack_130;
    uStack_1c8 = uStack_178;
    uStack_1c0 = uStack_170;
    uStack_248 = 4;
    uStack_230 = uStack_178;
    uStack_228 = uStack_170;
    uStack_1e0 = uStack_128;
    uStack_1d8._0_3_ = CONCAT12(uStack_11e,uStack_120);
    uStack_1d0 = (undefined4)uStack_188;
    uStack_1b8 = *param_3;
    uStack_1b4 = param_3[1];
    uStack_1b0 = param_3[2];
    uStack_1ac = param_3[3];
    puVar5 = &uStack_248;
    uStack_240 = uVar4;
    uStack_238 = uVar6;
    bStack_1a8 = bVar3;
  }
  pdb_140901740(param_8,puVar5);
  return;
}

