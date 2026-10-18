// VA 0x1417d7ad0, PDB extent 1882 bytes
// asset_pipe::texture_processing::process_dds_image
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001417dca9b) overlaps instruction at (ram,0x0001417dca9a)
    */
/* WARNING: Removing unreachable block (ram,0x0001417dc7e9) */
/* WARNING: Removing unreachable block (ram,0x0001417dca3f) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset_pipe::texture_processing::process_dds_image
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 1882 */

code *******
pdb_1417d7ad0(code *******param_1,code ******param_2,code ******param_3,code ******param_4,
             code *******param_5)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  undefined8 uVar7;
  code cVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  code cVar12;
  byte bVar13;
  char cVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  code *******pppppppcVar18;
  code ******ppppppcVar19;
  code ******ppppppcVar20;
  code *******extraout_RAX;
  uint uVar21;
  ulonglong uVar22;
  undefined *puVar23;
  code *******pppppppcVar24;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar25;
  code *******UNRECOVERED_JUMPTABLE;
  uint uVar26;
  undefined8 *puVar27;
  undefined8 **ppuVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  uint *puVar32;
  code ******ppppppcVar33;
  code ******ppppppcVar34;
  code *******pppppppcVar35;
  int iVar36;
  code ******ppppppcVar37;
  code *******pppppppcVar38;
  code ******ppppppcVar39;
  uint uVar40;
  char *pcVar41;
  longlong lVar42;
  code *******pppppppcVar43;
  int iVar44;
  ulonglong uVar45;
  uint in_R11D;
  longlong lVar46;
  code cVar47;
  undefined8 unaff_R12;
  undefined7 uVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar58 [15];
  char in_stack_50ccedd2d;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [3];
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  code ******ppppppcStack_288;
  code ******ppppppcStack_280;
  code *******pppppppcStack_278;
  byte *pbStack_270;
  code *******pppppppcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  code *******pppppppcStack_248;
  code *******pppppppcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  code ******ppppppcStack_228;
  undefined1 auStack_220 [16];
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 auStack_1f8 [4];
  undefined8 uStack_1d8;
  code *******pppppppcStack_1c8;
  code ******ppppppcStack_1c0;
  code ******ppppppcStack_1b8;
  code *******pppppppcStack_1b0;
  code *******pppppppcStack_1a8;
  code ******ppppppcStack_1a0;
  code *******pppppppcStack_198;
  code ******ppppppcStack_190;
  code ******ppppppcStack_188;
  code ******ppppppcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  code ******ppppppcStack_168;
  code ******ppppppcStack_160;
  code ******ppppppcStack_158;
  code ******ppppppcStack_150;
  code *******pppppppcStack_148;
  undefined8 auStack_140 [4];
  undefined8 uStack_120;
  code *******pppppppcStack_118;
  code ******ppppppcStack_110;
  code ******ppppppcStack_108;
  code ******ppppppcStack_100;
  code *******pppppppcStack_f8;
  code ******ppppppcStack_e8;
  code ******ppppppcStack_e0;
  code ******ppppppcStack_d8;
  code *******pppppppcStack_d0;
  code *******pppppppcStack_c8;
  code *******pppppppcStack_c0;
  code ******ppppppcStack_b8;
  code ******ppppppcStack_b0;
  code *******pppppppcStack_a8;
  code *pcStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  byte *pbStack_90;
  uint uStack_88;
  uint uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined1 auStack_58 [5];
  undefined1 auStack_53 [2];
  undefined1 uStack_51;
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined2 uVar57;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  
  ppuVar28 = (undefined8 **)auStack_2b8;
  puVar29 = auStack_2b8;
  puVar30 = auStack_2b8;
  puVar27 = auStack_2b8;
  puVar31 = &uStack_238;
  uStack_48 = 0xfffffffffffffffe;
  pppppppcStack_d0 = param_5;
  pppppppcStack_c8 = (code *******)0x0;
  puStack_2c0 = (undefined8 *)0x1417d7b3d;
  ppppppcStack_e8 = param_2;
  ppppppcStack_e0 = param_3;
  ppppppcStack_d8 = param_4;
  pdb_1425675f0(&ppppppcStack_288,&ppppppcStack_d8);
  puStack_2c0 = (undefined8 *)0x1417d7b53;
  pdb_142567e80(&ppppppcStack_1b8,&ppppppcStack_288,&ppppppcStack_e8);
  ppppppcStack_280 = (code ******)pppppppcStack_1b0;
  ppppppcVar19 = ppppppcStack_1b8;
  if (SBORROW8(0,(longlong)ppppppcStack_1b8)) {
    param_1[1] = (code ******)pppppppcStack_1b0;
    *param_1 = (code ******)0x8000000000000000;
    return param_1;
  }
  puStack_2c0 = (undefined8 *)0x1417d7b95;
  pub_142e32760(&pppppppcStack_278,&pppppppcStack_1a8);
  ppppppcStack_288 = ppppppcVar19;
  uStack_60 = ppppppcVar19;
  _auStack_58 = ppppppcStack_280;
  if (3 < *_DAT_143ca8e90) {
    uStack_68 = uStack_20c;
    uStack_6c = uStack_210;
    uStack_70 = 1;
    if ((char)uStack_260 != '\0') {
      uStack_70 = uStack_260._4_4_;
    }
    iVar36 = (int)pppppppcStack_1c8;
    ppppppcStack_1b8 = (code ******)&ppppppcStack_d8;
    if ((int)pppppppcStack_1c8 == 0x85) {
      if ((int)uStack_250 == 1) {
        if (uStack_250._4_4_ < 0x32495441) {
          if (uStack_250._4_4_ == 0x31495441) {
            iVar36 = 0x50;
          }
          else {
            iVar36 = 0x48;
            if (uStack_250._4_4_ != 0x31545844) goto LAB_1417d7c38;
          }
        }
        else if (uStack_250._4_4_ == 0x32495441) {
          iVar36 = 0x53;
        }
        else if (uStack_250._4_4_ == 0x35545844) {
          iVar36 = 0x4e;
        }
        else {
          if (uStack_250._4_4_ != 0x33545844) goto LAB_1417d7c38;
          iVar36 = 0x4b;
        }
        goto LAB_1417d7c8d;
      }
LAB_1417d7c38:
      puStack_2c0 = (undefined8 *)0x1417d7c41;
      uVar11 = pdb_141d64ff0(&ppppppcStack_288);
      ppppppcStack_d8 = (code ******)CONCAT71(ppppppcStack_d8._1_7_,uVar11);
      pppppppcStack_1b0 = (code *******)pdb_1417dc9f0;
      puStack_2c0 = (undefined8 *)0x1417d7c77;
      pdb_140f60760(&uStack_98,&UNK_143338d18);
    }
    else {
LAB_1417d7c8d:
      ppppppcStack_d8 = (code ******)CONCAT44(ppppppcStack_d8._4_4_,iVar36);
      pppppppcStack_1b0 = (code *******)pdb_1417dca50;
      puStack_2c0 = (undefined8 *)0x1417d7cc2;
      pdb_140f60760(&uStack_98,&UNK_143338d1f);
    }
    ppppppcStack_d8 = (code ******)&uStack_68;
    pppppppcStack_d0 = (code *******)pdb_140f71a50;
    pppppppcStack_c8 = (code *******)&uStack_6c;
    pppppppcStack_c0 = (code *******)pdb_140f71a50;
    ppppppcStack_b8 = (code ******)&uStack_70;
    ppppppcStack_b0 = (code ******)pdb_140f71a50;
    pppppppcStack_a8 = (code *******)&uStack_98;
    pcStack_a0 = pdb_140001020;
    ppppppcStack_1b8 = (code ******)0x0;
    pppppppcStack_1b0 = (code *******)&UNK_143338c11;
    pppppppcStack_1a8 = (code *******)0x1e;
    ppppppcStack_1a0 = (code ******)0x0;
    pppppppcStack_198 = (code *******)&UNK_143338be5;
    ppppppcStack_190 = (code ******)0x2b;
    ppppppcStack_188 = (code ******)0x4;
    ppppppcStack_180 = (code ******)&UNK_143338c11;
    uStack_178 = (code *******)0x1e;
    uStack_170 = 0x21400000001;
    ppppppcStack_168 = (code ******)&UNK_143338bc7;
    puStack_2c0 = (undefined8 *)0x1417d7dc3;
    ppppppcStack_160 = (code ******)&ppppppcStack_d8;
    pdb_140f332f0(&uStack_49,&ppppppcStack_1b8);
    if (CONCAT71(uStack_97,uStack_98) != 0) {
      puStack_2c0 = (undefined8 *)0x1417d7de2;
      pub_1406abac0(pbStack_90,CONCAT71(uStack_97,uStack_98),1);
    }
  }
  pppppppcVar18 = &ppppppcStack_288;
  ppppppcVar39 = (code ******)0x0;
  puStack_2c0 = (undefined8 *)0x1417d7df9;
  pdb_141d65530(&ppppppcStack_d8);
  pppppppcVar35 = pppppppcStack_c8;
  pppppppcVar43 = pppppppcStack_d0;
  pppppppcVar38 = pppppppcStack_268;
  if ((int)ppppppcStack_d8 != 8) {
    pppppppcStack_1a8 = pppppppcStack_c8;
    ppppppcStack_1a0 = (code ******)pppppppcStack_c0;
    ppppppcStack_1b8 = ppppppcStack_d8;
    pppppppcStack_1b0 = pppppppcStack_d0;
    puStack_298 = &UNK_143338c30;
                    /* WARNING: Subroutine does not return */
    puStack_2c0 = (undefined8 *)0x1417d80de;
    pdb_142dc8170(&UNK_143339370,0x2b,&ppppppcStack_1b8,&UNK_1433393a0);
  }
  uVar48 = (undefined7)((ulonglong)unaff_R12 >> 8);
  UNRECOVERED_JUMPTABLE = pppppppcVar18;
  if ((int)pppppppcStack_1c8 == 0x85) {
    if ((int)uStack_250 != 1) goto LAB_1417d7e82;
    if (uStack_250._4_4_ == 0x31545844) goto LAB_1417d7e72;
    if (uStack_250._4_4_ == 0x32495441) goto LAB_1417d7e62;
    if (uStack_250._4_4_ != 0x35545844) goto LAB_1417d7e82;
LAB_1417d7e6a:
    cVar47 = (code)0x8a;
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *******)&UNK_14333b790;
    switch((int)pppppppcStack_1c8) {
    case 0x43:
      cVar47 = (code)0x7b;
      break;
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
LAB_1417d7e82:
      puStack_2c0 = (undefined8 *)0x1417d7e8e;
      uVar15 = pdb_1417dd4d0(&ppppppcStack_288);
      ppppppcStack_d8 = (code ******)CONCAT44(ppppppcStack_d8._4_4_,uVar15);
      puStack_2c0 = (undefined8 *)0x1417d7e9c;
      uStack_98 = pdb_141d64ff0(&ppppppcStack_288);
      pppppppcStack_1b0 = (code *******)pdb_1417dc990;
      pppppppcStack_1a8 = (code *******)&uStack_98;
      ppppppcStack_1a0 = (code ******)pdb_1417dc9f0;
                    /* WARNING: Subroutine does not return */
      puStack_2c0 = (undefined8 *)0x1417d7eee;
      ppppppcStack_1b8 = (code ******)&ppppppcStack_d8;
      pdb_142dc83d0(&UNK_143338cb8,&ppppppcStack_1b8,&UNK_143338d00);
    case 0x48:
LAB_1417d7e72:
      cVar47 = (code)0x84;
      break;
    case 0x4d:
      cVar47 = (code)0x89;
      break;
    case 0x4e:
      goto LAB_1417d7e6a;
    case 0x53:
LAB_1417d7e62:
      cVar47 = (code)0x8d;
      break;
    case 0x54:
      cVar47 = (code)0x8e;
      break;
    default:
      cVar47 = (code)0x61;
      UNRECOVERED_JUMPTABLE = pppppppcVar18;
      if ((int)pppppppcStack_1c8 != 10) goto LAB_1417d7e82;
    }
  }
  uVar22 = 1;
  if ((char)uStack_260 != '\0') {
    uVar22 = uStack_260 >> 0x20;
  }
  uStack_80 = (code ******)CONCAT44(uStack_210,uStack_20c);
  uStack_78 = (uint)uVar22;
  if ((int)pppppppcStack_1c8 == 0x85) {
    if ((uint)uVar22 != 1) {
      puStack_290 = (undefined8 *)&UNK_143338ca0;
      puStack_2c0 = (undefined8 *)0x1417d8133;
      pdb_142e05ba5(0,&uStack_78,&UNK_143338c80,0);
      goto LAB_1417d8144;
    }
    uVar57 = 1;
    if ((char)uStack_258 != '\0') {
      uVar57 = uStack_258._4_2_;
    }
    puVar23 = (undefined *)CONCAT71((int7)(uVar22 >> 8),2);
    uVar25 = 1;
    goto LAB_1417d7fa5;
  }
  uVar22 = (ulonglong)ppppppcStack_1c0 >> 0x20 & 0xff;
  pppppppcVar24 = (code *******)&UNK_14333b7d8;
  uVar17 = (ulonglong)*(int *)(&UNK_14333b7d8 + uVar22 * 4);
  bVar49 = 0xfffffffebccc4827 < uVar17;
  pppppppcVar18 = (code *******)(&UNK_14333b7d8 + uVar17);
  bVar51 = (longlong)pppppppcVar18 < 0;
  bVar50 = pppppppcVar18 == (code *******)0x0;
  cVar12 = SUB81(pppppppcVar18,0);
  uVar25 = (uint)pppppppcVar18;
  uVar26 = (uint)auStack_2b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar22) {
  case 0:
    puStack_2c0 = (undefined8 *)0x1417d7f6f;
    ppppppcVar19 = (code ******)pdb_142dff660(&UNK_143338c48,0x1c);
    goto code_r0x0001417d8076;
  case 1:
    puStack_2c0 = (undefined8 *)0x1417d8075;
    ppppppcVar19 = (code ******)pdb_142dff660(&UNK_143338c64,0x1b);
code_r0x0001417d8076:
    param_1[1] = ppppppcVar19;
    *param_1 = (code ******)0x8000000000000000;
    if (uStack_60 == (code ******)0x0) {
      return param_1;
    }
    goto code_r0x0001417d8025;
  case 2:
    puVar23 = (undefined *)0x0;
    goto joined_r0x0001417d7f80;
  case 3:
    puVar23 = &UNK_14333b702;
    goto joined_r0x0001417d7f80;
  case 4:
    puVar23 = &UNK_14333b704;
joined_r0x0001417d7f80:
    uVar57 = 1;
    if ((char)uStack_258 != '\0') {
      uVar57 = uStack_258._4_2_;
    }
    uVar25 = (uint)ppppppcStack_1c0;
    if (0xffff < (uint)ppppppcStack_1c0) {
      puStack_298 = &UNK_143338c88;
                    /* WARNING: Subroutine does not return */
      puStack_2c0 = (undefined8 *)0x1417d810c;
      pdb_142dc8170(&UNK_143339370,0x2b,&uStack_49,&UNK_143339350);
    }
LAB_1417d7fa5:
    if (pppppppcStack_c8 == (code *******)0x0) {
      ppppppcVar19 = (code ******)0x1;
    }
    else {
      uStack_64 = (uint)puVar23;
      puStack_2c0 = (undefined8 *)0x1417d7fb5;
      pdb_14007ee60();
      puStack_2c0 = (undefined8 *)0x1417d7fc2;
      ppppppcVar19 = (code ******)pub_1406abab0((ulonglong)pppppppcVar35,1);
      if (ppppppcVar19 == (code ******)0x0) {
        puStack_2c0 = (undefined8 *)0x1417d8143;
        pdb_142dc7e2a(1,pppppppcVar35);
LAB_1417d8144:
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)invalidInstructionException();
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      puStack_2c0 = (undefined8 *)0x1417d7fdc;
      pub_142e32760(ppppppcVar19,pppppppcVar43,pppppppcVar35);
      puVar23 = (undefined *)(ulonglong)uStack_64;
    }
    *(uint *)(param_1 + 4) = uStack_78;
    param_1[3] = uStack_80;
    *param_1 = (code ******)pppppppcVar35;
    param_1[1] = ppppppcVar19;
    param_1[2] = (code ******)pppppppcVar35;
    *(undefined2 *)((longlong)param_1 + 0x24) = uVar57;
    *(short *)((longlong)param_1 + 0x26) = (short)uVar25;
    *(code *)(param_1 + 5) = SUB81(puVar23,0);
    *(code *)((longlong)param_1 + 0x29) = cVar47;
    if (uStack_60 != (code ******)0x0) {
code_r0x0001417d8025:
      puStack_2c0 = (undefined8 *)0x1417d8037;
      pub_1406abac0((byte *)_auStack_58,(ulonglong)uStack_60,1);
    }
    return param_1;
  case 5:
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(0x14333b7,uStack_238._1_1_);
    puVar32 = (uint *)(&UNK_14333b763 + uVar17);
    *puVar32 = *puVar32 >> 1 | (uint)((*puVar32 & 1) != 0) << 0x1f;
    auStack_2b8[0] = 0x1417d8570;
    func_0x0001827d8570();
                    /* WARNING: Could not recover jumptable at 0x0001417d8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    return pppppppcVar18;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x0001417d860c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppcVar18 =
         (code *******)
         (*(code *)(&UNK_14333b7ec +
                   *(int *)(&UNK_14333b7ec + ((ulonglong)pppppppcStack_c8 & 0xffffffff) * 4)))();
    return pppppppcVar18;
  case 7:
    _UNK_14333b7d7 = _UNK_14333b7d7 << 1 | (uint)((int)_UNK_14333b7d7 < 0);
    pppppppcVar24 = (code *******)&UNK_14333b7d7;
    if (!bVar50) {
      pppppppcVar18 = (code *******)CONCAT71((int7)((ulonglong)pppppppcVar18 >> 8),1);
      auStack_58 = (undefined1  [5])CONCAT14((char)ppppppcVar39,auStack_58._0_4_);
      if ((char)UNRECOVERED_JUMPTABLE != '\0') goto code_r0x0001417d862d;
    }
    iVar36 = 1;
    uVar22 = CONCAT71(uVar48,1);
    if (*(uint *)ppppppcVar19 == 1) {
code_r0x0001417d8662:
      uVar25 = *(uint *)((longlong)ppppppcVar19 + 4);
      pppppppcVar18 = (code *******)(ulonglong)uVar25;
      uVar40 = uVar25 & iVar36 - 1U;
      iVar44 = iVar36 - uVar40;
      if (uVar40 == 0) {
        iVar44 = 0;
      }
      uVar45 = (ulonglong)(iVar44 + uVar25);
      uVar25 = iVar36 - 1U & *(uint *)(ppppppcVar19 + 1);
      iVar36 = iVar36 - uVar25;
      if (uVar25 == 0) {
        iVar36 = 0;
      }
      uVar17 = (ulonglong)(iVar36 + *(uint *)(ppppppcVar19 + 1)) << 0x20;
      goto code_r0x0001417d869b;
    }
code_r0x0001417d8726:
    uStack_80 = (code ******)(ulonglong)uStack_20c;
    uStack_1d8._0_4_ = (uint)uStack_120;
    uVar25 = (uint)uStack_1d8;
    uStack_1d8 = uStack_120;
    uStack_64 = in_R11D;
    goto joined_r0x0001417d86cf;
  case 8:
code_r0x0001417d862d:
    if (*(char *)ppppppcVar19 != '\0') {
      iVar36 = 4;
      uVar22 = CONCAT71(uVar48,4);
      goto code_r0x0001417d8662;
    }
    uVar25 = (uint)pppppppcVar18 & 3;
    uVar40 = (uint)pppppppcVar24 & 3;
    uVar22 = CONCAT71(uVar48,4);
    if (((ulonglong)pppppppcVar18 & 3) == 0 && ((ulonglong)pppppppcVar24 & 3) == 0)
    goto code_r0x0001417d8726;
    uVar6 = 4 - uVar40;
    if (((ulonglong)pppppppcVar24 & 3) == 0) {
      uVar6 = uVar40;
    }
    uVar40 = 4 - uVar25;
    if (((ulonglong)pppppppcVar18 & 3) == 0) {
      uVar40 = uVar25;
    }
    uVar17 = (ulonglong)(uVar40 + (uint)pppppppcVar18);
    uVar45 = (ulonglong)(uVar6 + (uint)pppppppcVar24) << 0x20;
code_r0x0001417d869b:
    auStack_58._0_3_ = CONCAT12(1,auStack_58._0_2_);
    uStack_80 = (code ******)
                CONCAT44((int)CONCAT71((int7)((ulonglong)pppppppcVar18 >> 8),1),uStack_20c);
    puStack_298 = (undefined *)CONCAT71(puStack_298._1_7_,2);
    puStack_2c0 = (undefined8 *)0x1417d86c9;
    uStack_64 = in_R11D;
    pdb_140dac2d0(auStack_1f8,auStack_140,uVar17 | uVar45,(uVar17 | uVar45) >> 0x20);
    uVar25 = (uint)uStack_1d8;
joined_r0x0001417d86cf:
    if (uVar25 == 0) {
code_r0x0001417d9123:
                    /* WARNING: Subroutine does not return */
      puStack_2c0 = (undefined8 *)0x1417d913b;
      pdb_142dc83b0(&UNK_143338dc8,0x2c,&UNK_143338df8);
    }
    param_1 = (code *******)(ulonglong)uVar25;
    uStack_1d8._4_4_ = (uint)((ulonglong)uStack_1d8 >> 0x20);
    if (uStack_1d8._4_4_ == 0) goto code_r0x0001417d9123;
    uVar17 = (ulonglong)uStack_80 >> 0x20;
    uStack_80 = (code ******)CONCAT44((int)uVar17,uStack_1d8._4_4_);
    uVar40 = uVar25;
    if (uVar25 < uStack_1d8._4_4_) {
      uVar40 = uStack_1d8._4_4_;
    }
    if (*(uint *)((longlong)ppppppcVar19 + 0xc) == 0) {
      uStack_68 = 1;
    }
    else {
      iVar36 = 0x1f;
      if (uVar40 != 0) {
        for (; uVar40 >> iVar36 == 0; iVar36 = iVar36 + -1) {
        }
      }
      uStack_68 = iVar36 + 1;
      if ((*(uint *)((longlong)ppppppcVar19 + 0xc) == 2) &&
         (*(uint *)(ppppppcVar19 + 2) < uStack_68)) {
        uStack_68 = *(uint *)(ppppppcVar19 + 2);
      }
    }
    ppppppcStack_168 = (code ******)0x0;
    ppppppcStack_160 = (code ******)0x1;
    ppppppcStack_158 = (code ******)0x0;
    pppppppcStack_c8 = (code *******)(auStack_58 + 5);
    pppppppcStack_c0 = &ppppppcStack_168;
    ppppppcStack_b8 = (code ******)(auStack_58 + 4);
    ppppppcStack_b0 = ppppppcVar19;
    puStack_2c0 = (undefined8 *)0x1417d880f;
    pdb_142567ff0(ppppppcVar19,auStack_1f8,&pppppppcStack_c8);
    puStack_290 = auStack_1f8;
    puStack_298 = (undefined *)CONCAT71(puStack_298._1_7_,(char)uVar22);
    ppppppcStack_288 = (code ******)CONCAT44(ppppppcStack_288._4_4_,1);
    ppppppcVar39 = (code ******)((ulonglong)uStack_80 & 0xffffffff);
    puStack_2c0 = (undefined8 *)0x1417d883e;
    pppppppcVar38 = param_1;
    pdb_1417d9770(&pppppppcStack_198,param_1,ppppppcVar39,uVar22 & 0xffffffff);
    uVar10 = _UNK_142e3c64c;
    uVar9 = _UNK_142e3c648;
    uVar6 = _UNK_142e3c644;
    uVar40 = _DAT_142e3c640;
    uVar15 = _DAT_142e36f28;
    uStack_60 = (code ******)
                CONCAT17(*(char *)((longlong)ppppppcVar19 + 0x15),(undefined7)uStack_60);
    auStack_58._0_4_ = CONCAT13((char)uVar22,auStack_58._0_3_);
    uVar21 = 1;
    uStack_84 = uVar25;
    if (1 < uStack_68) {
      do {
        ppppppcVar39 = _auStack_58;
        uStack_88 = uVar21 + 1;
        bVar49 = (uStack_178._4_4_ < 2 && (uint)uStack_178 < 2) && uStack_88 != uStack_68;
        _auStack_58 = (code ******)CONCAT71(stack0xffffffffffffffa9,bVar49);
        ppppppcVar20 = _auStack_58;
        if (bVar49) {
                    /* WARNING: Subroutine does not return */
          puStack_2c0 = (undefined8 *)0x1417d90ce;
          pdb_142dc83b0(&UNK_143338eb8,0x4c,&UNK_143338f08);
        }
        pppppppcStack_f8 = uStack_178;
        ppppppcStack_108 = ppppppcStack_188;
        ppppppcStack_100 = ppppppcStack_180;
        pppppppcStack_118 = pppppppcStack_198;
        ppppppcStack_110 = ppppppcStack_190;
        if (uStack_60._7_1_ == '\0') {
          pppppppcStack_1a8 = uStack_178;
          ppppppcStack_1b8 = ppppppcStack_188;
          pppppppcStack_1b0 = (code *******)ppppppcStack_180;
          pppppppcStack_1c8 = pppppppcStack_198;
          ppppppcStack_1c0 = ppppppcStack_190;
        }
        else {
          uStack_51 = SUB81(ppppppcVar39,7);
          _auStack_58 = ppppppcVar20;
          if (uStack_51 == (code)0x0) {
            puStack_2c0 = (undefined8 *)0x1417d8a63;
            pdb_140dabc60(&ppppppcStack_e8,&pppppppcStack_118);
            ppppppcVar39 = ppppppcStack_e0;
            uVar17 = (ulonglong)pppppppcStack_d0 & 0xffffffff;
            uVar22 = (ulonglong)pppppppcStack_d0 >> 0x20;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar17 * 4;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar22;
            ppppppcVar20 = SUB168(auVar3 * auVar5,0);
            if (SUB168(auVar3 * auVar5,8) != 0) {
                    /* WARNING: Subroutine does not return */
              puStack_2c0 = (undefined8 *)0x1417d911d;
              pdb_142dc8150(&UNK_143516a50);
            }
            if (ppppppcStack_d8 < ppppppcVar20) {
              puStack_2c0 = (undefined8 *)0x1417d90e2;
              pdb_142dc8420(0,ppppppcVar20,ppppppcStack_d8,&UNK_143516a68);
              goto LAB_1417d91e7;
            }
            pppppppcVar18 = (code *******)((ulonglong)ppppppcVar20 & 0x7ffffffffffffffc);
            ppppppcStack_b8 = (code ******)((longlong)ppppppcStack_e0 + (longlong)pppppppcVar18);
            pppppppcStack_c8 = (code *******)ppppppcStack_e0;
            ppppppcStack_b0 = (code ******)0x0;
            pppppppcStack_a8 = (code *******)0x4;
            puStack_2c0 = (undefined8 *)0x1417d8aee;
            pppppppcStack_c0 = pppppppcVar18;
            pdb_142569970(&pppppppcStack_278,&pppppppcStack_c8);
            puStack_2c0 = (undefined8 *)0x1417d8b00;
            pdb_1417da250(&pppppppcStack_c8,uVar17,uVar22,&pppppppcStack_278);
            bVar13 = auStack_58[3];
            if (pppppppcVar18 != (code *******)0x0) {
              ppppppcVar20 = (code ******)((ulonglong)((longlong)pppppppcVar18 - 4U) >> 2);
              ppppppcVar37 = ppppppcVar20;
              if (ppppppcStack_b8 < ppppppcVar20) {
                ppppppcVar37 = ppppppcStack_b8;
              }
              ppppppcVar34 = ppppppcVar39;
              pppppppcVar38 = pppppppcStack_c0;
              if ((code *)0xf < ppppppcVar37) {
                if (ppppppcStack_b8 < ppppppcVar20) {
                  ppppppcVar20 = ppppppcStack_b8;
                }
                if (((code *)((longlong)ppppppcVar20 + (longlong)pppppppcStack_c0) + 1 <=
                     (code *)((longlong)ppppppcVar39 + 3)) ||
                   ((code *******)((longlong)ppppppcVar39 + (longlong)ppppppcVar20 * 4 + 4) <=
                    pppppppcStack_c0)) {
                  uStack_230 = (code *)ppppppcStack_b8;
                  uStack_238 = (code ******)pppppppcStack_c8;
                  UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)ppppppcVar37 + 1);
                  uVar22 = (ulonglong)((uint)UNRECOVERED_JUMPTABLE_00 & 0xf);
                  if (((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xf) == 0) {
                    uVar22 = 0x10;
                  }
                  lVar42 = (longlong)UNRECOVERED_JUMPTABLE_00 - uVar22;
                  ppppppcVar34 = (code ******)((longlong)ppppppcVar39 + lVar42 * 4);
                  pppppppcVar38 = (code *******)((longlong)pppppppcStack_c0 + lVar42);
                  pppppppcVar18 = (code *******)((longlong)pppppppcVar18 + lVar42 * -4);
                  uStack_250 = (code *******)((longlong)ppppppcVar37 + -uVar22);
                  pppppppcVar43 = (code *******)0xffffffffffffffff;
                  pppppppcStack_248 = pppppppcStack_c0;
                  do {
                    ppppppcVar19 = uStack_60;
                    UNRECOVERED_JUMPTABLE_00 =
                         (code *)((longlong)pppppppcStack_c0 + 1) + (longlong)pppppppcVar43;
                    cVar47 = UNRECOVERED_JUMPTABLE_00[1];
                    cVar12 = UNRECOVERED_JUMPTABLE_00[2];
                    cVar8 = UNRECOVERED_JUMPTABLE_00[3];
                    auVar58 = SUB1615((undefined1  [16])0x0,1);
                    cStack_74 = -(char)UNRECOVERED_JUMPTABLE_00[4];
                    cStack_73 = -(char)UNRECOVERED_JUMPTABLE_00[5];
                    cStack_72 = -(char)UNRECOVERED_JUMPTABLE_00[6];
                    cStack_71 = -(char)UNRECOVERED_JUMPTABLE_00[7];
                    cVar14 = -(char)UNRECOVERED_JUMPTABLE_00[8];
                    cVar59 = auVar58[8] - (char)UNRECOVERED_JUMPTABLE_00[9];
                    cVar60 = auVar58[9] - (char)UNRECOVERED_JUMPTABLE_00[10];
                    cVar61 = auVar58[10] - (char)UNRECOVERED_JUMPTABLE_00[0xb];
                    cVar62 = auVar58[0xb] - (char)UNRECOVERED_JUMPTABLE_00[0xc];
                    cVar63 = auVar58[0xc] - (char)UNRECOVERED_JUMPTABLE_00[0xd];
                    cVar64 = auVar58[0xd] - (char)UNRECOVERED_JUMPTABLE_00[0xe];
                    cVar65 = auVar58[0xe] - (char)UNRECOVERED_JUMPTABLE_00[0xf];
                    uStack_78 = CONCAT13(-(char)cVar8,
                                         CONCAT12(-(char)cVar12,
                                                  CONCAT11(-(char)cVar47,
                                                           -(char)*UNRECOVERED_JUMPTABLE_00)));
                    uStack_70 = CONCAT13(cVar61,CONCAT12(cVar60,CONCAT11(cVar59,cVar14)));
                    uStack_6c = CONCAT13(cVar65,CONCAT12(cVar64,CONCAT11(cVar63,cVar62)));
                    uStack_60._7_1_ = SUB81(ppppppcVar19,7);
                    uStack_60._0_7_ =
                         CONCAT16(cVar65,CONCAT15(cVar64,CONCAT14(cVar63,CONCAT13(cVar62,CONCAT12(
                                                  cVar61,CONCAT11(cVar14,(undefined1)uStack_60))))))
                    ;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 7) =
                         -(char)*UNRECOVERED_JUMPTABLE_00;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0xb) =
                         -(char)cVar47;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0xf) =
                         -(char)cVar12;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x13) =
                         -(char)cVar8;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x17) =
                         cStack_74;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x1b) =
                         cStack_73;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x1f) =
                         cStack_72;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x23) =
                         cStack_71;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x27) = cVar14;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x2b) = cVar59;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x2f) = cVar60;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x33) = cVar61;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x37) = cVar62;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x3b) = cVar63;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x3f) = cVar64;
                    *(char *)((longlong)ppppppcVar39 + (longlong)pppppppcVar43 * 4 + 0x43) = cVar65;
                    pppppppcVar43 = pppppppcVar43 + 2;
                    ppppppcVar19 = ppppppcStack_150;
                    pppppppcStack_240 = pppppppcVar18;
                    ppppppcStack_228 = ppppppcVar34;
                  } while (uStack_250 != pppppppcVar43);
                }
              }
              pppppppcVar43 = (code *******)0x0;
              do {
                if (pppppppcVar38 ==
                    (code *******)((longlong)ppppppcStack_b8 + (longlong)pppppppcStack_c0)) break;
                cVar47 = *(code *)pppppppcVar38;
                pppppppcVar38 = (code *******)((longlong)pppppppcVar38 + 1);
                ((char *)((longlong)ppppppcVar34 + 3))[(longlong)pppppppcVar43] = -(char)cVar47;
                pppppppcVar43 = (code *******)((longlong)pppppppcVar43 + 4);
              } while (pppppppcVar18 != pppppppcVar43);
            }
            if (pppppppcStack_c8 != (code *******)0x0) {
              puStack_2c0 = (undefined8 *)0x1417d8e73;
              pub_1406abac0((byte *)pppppppcStack_c0,(ulonglong)pppppppcStack_c8,1);
            }
            pppppppcStack_1c8 = (code *******)0x3;
          }
          else {
            puStack_2c0 = (undefined8 *)0x1417d890c;
            pdb_140dac260(&ppppppcStack_e8,&pppppppcStack_118);
            ppppppcVar39 = ppppppcStack_e0;
            uVar17 = (ulonglong)pppppppcStack_d0 & 0xffffffff;
            uVar22 = (ulonglong)pppppppcStack_d0 >> 0x20;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar17 * 4;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar22;
            ppppppcVar20 = SUB168(auVar2 * auVar4,0);
            if (SUB168(auVar2 * auVar4,8) != 0) {
                    /* WARNING: Subroutine does not return */
              puStack_2c0 = (undefined8 *)0x1417d910b;
              pdb_142dc8150(&UNK_143516a50);
            }
            if (ppppppcStack_d8 < ppppppcVar20) {
              puStack_2c0 = (undefined8 *)0x1417d90f9;
              pdb_142dc8420(0,ppppppcVar20,ppppppcStack_d8,&UNK_143516a68);
LAB_1417d91e7:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_00 = (code *)invalidInstructionException();
              (*UNRECOVERED_JUMPTABLE_00)();
            }
            ppppppcVar20 = (code ******)((ulonglong)ppppppcVar20 & 0x1ffffffffffffffc);
            ppppppcStack_b8 = (code ******)((longlong)ppppppcStack_e0 + (longlong)ppppppcVar20 * 4);
            pppppppcStack_c8 = (code *******)ppppppcStack_e0;
            ppppppcStack_b0 = (code ******)0x0;
            pppppppcStack_a8 = (code *******)0x4;
            puStack_2c0 = (undefined8 *)0x1417d8991;
            pppppppcStack_c0 = (code *******)ppppppcVar20;
            pdb_142569450(&pppppppcStack_278,&pppppppcStack_c8);
            puStack_2c0 = (undefined8 *)0x1417d89a3;
            pdb_1417da250(&pppppppcStack_c8,uVar17,uVar22,&pppppppcStack_278);
            if (ppppppcVar20 != (code ******)0x0) {
              ppppppcVar37 = (code ******)((ulonglong)((longlong)ppppppcVar20 - 4U) >> 2);
              ppppppcVar34 = ppppppcVar37;
              if (ppppppcStack_b8 < ppppppcVar37) {
                ppppppcVar34 = ppppppcStack_b8;
              }
              ppppppcVar33 = ppppppcVar39;
              pppppppcVar18 = pppppppcStack_c0;
              if ((uint *)0x7 < ppppppcVar34) {
                if (ppppppcStack_b8 < ppppppcVar37) {
                  ppppppcVar37 = ppppppcStack_b8;
                }
                if (((char *)((longlong)pppppppcStack_c0 + (longlong)ppppppcVar37) + 1 <=
                     (uint *)((longlong)ppppppcVar39 + 0xc)) ||
                   (ppppppcVar39 + (longlong)ppppppcVar37 * 2 + 2 <= pppppppcStack_c0)) {
                  pcVar41 = (char *)((longlong)ppppppcVar34 + 1);
                  uVar22 = (ulonglong)((uint)pcVar41 & 3);
                  if (((ulonglong)pcVar41 & 3) == 0) {
                    uVar22 = 4;
                  }
                  lVar42 = (longlong)pcVar41 - uVar22;
                  ppppppcVar33 = ppppppcVar39 + lVar42 * 2;
                  pppppppcVar18 = (code *******)((longlong)pppppppcStack_c0 + lVar42);
                  ppppppcVar20 = (code ******)((longlong)ppppppcVar20 + lVar42 * -4);
                  puVar32 = (uint *)((longlong)ppppppcVar39 + 0x3c);
                  lVar46 = 0;
                  do {
                    uVar52 = *(undefined4 *)((longlong)pppppppcStack_c0 + lVar46);
                    uVar11 = (undefined1)((uint)uVar52 >> 0x18);
                    uVar57 = CONCAT11(uVar11,uVar11);
                    uVar11 = (undefined1)((uint)uVar52 >> 0x10);
                    uVar16 = CONCAT35(CONCAT21(uVar57,uVar11),CONCAT14(uVar11,uVar52));
                    uVar11 = (undefined1)((uint)uVar52 >> 8);
                    uVar7 = CONCAT53(CONCAT41((int)((ulonglong)uVar16 >> 0x20),uVar11),
                                     CONCAT12(uVar11,(short)uVar52));
                    uVar22 = CONCAT62((int6)((ulonglong)uVar7 >> 0x10),(short)uVar52) &
                             0xffffffffffff00ff;
                    auVar56._8_4_ = 0;
                    auVar56._0_8_ = uVar22;
                    auVar56._12_2_ = uVar57;
                    auVar56._14_2_ = uVar57;
                    uVar57 = (undefined2)((ulonglong)uVar16 >> 0x20);
                    auVar55._12_4_ = auVar56._12_4_;
                    auVar55._8_2_ = 0;
                    auVar55._0_8_ = uVar22;
                    auVar55._10_2_ = uVar57;
                    auVar54._10_6_ = auVar55._10_6_;
                    auVar54._8_2_ = uVar57;
                    auVar54._0_8_ = uVar22;
                    uVar57 = (undefined2)((ulonglong)uVar7 >> 0x10);
                    auVar53._8_8_ = auVar54._8_8_;
                    auVar53._6_2_ = uVar57;
                    auVar53._0_4_ = (int)uVar22;
                    auVar53._4_2_ = uVar57;
                    puVar32[-0xc] = (auVar53._0_4_ << 0x1f) >> 0x1f & uVar40;
                    puVar32[-8] = (auVar53._4_4_ << 0x1f) >> 0x1f & uVar6;
                    puVar32[-4] = (auVar54._8_4_ << 0x1f) >> 0x1f & uVar9;
                    *puVar32 = (auVar55._12_4_ << 0x1f) >> 0x1f & uVar10;
                    lVar46 = lVar46 + 4;
                    puVar32 = puVar32 + 0x10;
                  } while (lVar42 != lVar46);
                }
              }
              ppppppcVar39 = (code ******)0x0;
              do {
                if (pppppppcVar18 ==
                    (code *******)((longlong)ppppppcStack_b8 + (longlong)pppppppcStack_c0)) break;
                uVar52 = uVar15;
                if (*(char *)pppppppcVar18 == '\0') {
                  uVar52 = 0;
                }
                pppppppcVar18 = (code *******)((longlong)pppppppcVar18 + 1);
                *(undefined4 *)((longlong)ppppppcVar33 + (longlong)ppppppcVar39 * 4 + 0xc) = uVar52;
                ppppppcVar39 = (code ******)((longlong)ppppppcVar39 + 4);
              } while (ppppppcVar20 != ppppppcVar39);
            }
            if (pppppppcStack_c8 != (code *******)0x0) {
              puStack_2c0 = (undefined8 *)0x1417d8c50;
              pub_1406abac0((byte *)pppppppcStack_c0,(ulonglong)pppppppcStack_c8,1);
            }
            pppppppcStack_1c8 = (code *******)0x9;
            bVar13 = auStack_58[3];
          }
          uVar22 = (ulonglong)bVar13;
          param_1 = (code *******)(ulonglong)uStack_84;
          ppppppcStack_1c0 = ppppppcStack_e8;
          ppppppcStack_1b8 = ppppppcStack_e0;
          pppppppcStack_1b0 = (code *******)ppppppcStack_d8;
          pppppppcStack_1a8 = pppppppcStack_d0;
        }
        pppppppcStack_c8 = (code *******)(auStack_58 + 5);
        pppppppcStack_c0 = &ppppppcStack_168;
        ppppppcStack_b8 = (code ******)(auStack_58 + 4);
        puStack_2c0 = (undefined8 *)0x1417d8eda;
        ppppppcStack_b0 = ppppppcVar19;
        pdb_142568760(ppppppcVar19,&pppppppcStack_1c8,&pppppppcStack_c8);
        ppppppcStack_288 = (code ******)CONCAT44(ppppppcStack_288._4_4_,uStack_88);
        puStack_290 = auStack_1f8;
        puStack_298 = (undefined *)CONCAT71(puStack_298._1_7_,(char)uVar22);
        ppppppcVar39 = (code ******)((ulonglong)uStack_80 & 0xffffffff);
        puStack_2c0 = (undefined8 *)0x1417d8f07;
        pppppppcVar38 = param_1;
        pdb_1417d9770(&pppppppcStack_c8,param_1,ppppppcVar39,uVar22 & 0xffffffff);
        uStack_178 = pppppppcStack_a8;
        ppppppcStack_188 = ppppppcStack_b8;
        ppppppcStack_180 = ppppppcStack_b0;
        pppppppcStack_198 = pppppppcStack_c8;
        ppppppcStack_190 = (code ******)pppppppcStack_c0;
        puStack_2c0 = (undefined8 *)0x1417d8f3f;
        pdb_1417dc660(&pppppppcStack_1c8);
        uVar21 = uStack_88;
      } while (uStack_88 < uStack_68);
    }
    pppppppcVar35 = (code *******)&pppppppcStack_c8;
    puStack_2c0 = (undefined8 *)0x1417d8f5f;
    pdb_1417dc660(&pppppppcStack_198);
    cVar47 = auStack_53[0];
code_r0x0001417d8f66:
    pppppppcVar43 = pppppppcStack_148;
    if (cVar47 == (code)0x0) {
      cVar47 = uStack_51;
      if (auStack_58[1] == '\0') {
code_r0x0001417d8fd9:
        cVar59 = '+';
        cVar14 = '%';
      }
      else {
code_r0x0001417d8fc6:
        cVar59 = '\x0f';
        cVar14 = '\t';
      }
      if (cVar47 != (code)0x0) {
        cVar14 = cVar59;
      }
      goto code_r0x0001417d9002;
    }
    uVar22 = (ulonglong)_auStack_58 >> 0x20 & 0xff;
    UNRECOVERED_JUMPTABLE = (code *******)&UNK_14333b7fc;
    uVar17 = (ulonglong)*(int *)(&UNK_14333b7fc + uVar22 * 4);
    bVar49 = 0xfffffffebccc4803 < uVar17;
    pppppppcVar18 = (code *******)(&UNK_14333b7fc + uVar17);
    bVar51 = (longlong)pppppppcVar18 < 0;
    bVar13 = (byte)pppppppcVar18;
    uVar25 = (uint)pppppppcVar18;
    pppppppcVar24 = UNRECOVERED_JUMPTABLE;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar22) {
    case 0:
      cVar14 = -0x73;
      if (uStack_51 != (code)0x0) {
                    /* WARNING: Subroutine does not return */
        puStack_2c0 = (undefined8 *)0x1417d8fa9;
        pdb_142dc83d0(&UNK_143338e28,0x43,&UNK_143338e50);
      }
      goto code_r0x0001417d9002;
    case 1:
      cVar14 = -0x75;
      if (uStack_51 != (code)0x0) {
                    /* WARNING: Subroutine does not return */
        puStack_2c0 = (undefined8 *)0x1417d91e6;
        pdb_142dc83d0(&UNK_143338e68,0x67,&UNK_143338ea0);
      }
      goto code_r0x0001417d9002;
    case 2:
      cVar14 = (char)uStack_51 + 0x91;
code_r0x0001417d9002:
      pppppppcVar43[2] = ppppppcStack_158;
      *pppppppcVar43 = ppppppcStack_168;
      pppppppcVar43[1] = ppppppcStack_160;
      *(int *)(pppppppcVar43 + 3) = (int)param_1;
      *(undefined4 *)((longlong)pppppppcVar43 + 0x1c) = (undefined4)uStack_80;
      *(undefined4 *)(pppppppcVar43 + 4) = 1;
      *(short *)((longlong)pppppppcVar43 + 0x24) = (short)uStack_68;
      *(undefined2 *)((longlong)pppppppcVar43 + 0x26) = 1;
      *(undefined1 *)(pppppppcVar43 + 5) = 2;
      *(char *)((longlong)pppppppcVar43 + 0x29) = cVar14;
      puStack_2c0 = (undefined8 *)0x1417d9052;
      pdb_1417dc660(auStack_1f8);
      if (uStack_80._4_1_ != '\0') {
        puStack_2c0 = (undefined8 *)0x1417d9067;
        pdb_1417dc660(auStack_140);
      }
      if ((char)uStack_64 != '\0') {
        puStack_2c0 = (undefined8 *)0x1417d9079;
        pdb_1417dc660(auStack_220);
      }
      return pppppppcVar43;
    case 3:
                    /* WARNING: Subroutine does not return */
      puStack_2c0 = (undefined8 *)0x1417d919f;
      pdb_142dc8150(&UNK_143338e10);
    case 4:
code_r0x0001417dc488:
      ppppppcVar39 = (code ******)&UNK_14333b80c;
code_r0x0001417dc48f:
                    /* WARNING: Could not recover jumptable at 0x0001417dc496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppcVar18 =
           (code *******)
           (*(code *)((longlong)ppppppcVar39 +
                     (longlong)*(int *)((longlong)ppppppcVar39 + (longlong)pppppppcVar18 * 4)))();
      return pppppppcVar18;
    case 5:
      (&UNK_14333b781)[uVar17] = (&UNK_14333b781)[uVar17] | 0xfc;
      *(char *)((longlong)ppppppcVar19 + (longlong)puVar31 * 2 + 0x4c) = '\0';
      pppppppcVar18 = (code *******)(ulonglong)*(uint *)(&UNK_14333b80c + uVar17);
code_r0x0001417dc5aa:
      ppppppcVar39 = pppppppcVar18[2];
      UNRECOVERED_JUMPTABLE = uStack_250;
      goto code_r0x0001417dc606;
    case 6:
code_r0x0001417dc53d:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 5;
      ppppppcVar19 = *UNRECOVERED_JUMPTABLE;
joined_r0x0001417dc5fa:
      if (ppppppcVar19 == (code ******)0x0) {
        return pppppppcVar18;
      }
      ppppppcVar39 = (code ******)0x1;
      UNRECOVERED_JUMPTABLE = (code *******)UNRECOVERED_JUMPTABLE[1];
code_r0x0001417dc606:
      puVar27 = &uStack_250;
      puVar31 = uStack_258;
      param_1 = pppppppcStack_268;
code_r0x0001406abac0:
      *(undefined8 **)((longlong)puVar27 + -8) = puVar31;
      *(code ********)((longlong)puVar27 + -0x10) = param_1;
      if ((code ******)0x10 < ppppppcVar39) {
        UNRECOVERED_JUMPTABLE = (code *******)UNRECOVERED_JUMPTABLE[-1];
      }
      *(undefined **)((longlong)puVar27 + -0x40) = &UNK_140f3c37e;
      uVar16 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppcVar18 = (code *******)HeapFree(uVar16,0,UNRECOVERED_JUMPTABLE);
      return pppppppcVar18;
    case 7:
      (&UNK_14333b77f)[uVar17] = (&UNK_14333b77f)[uVar17] + -4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
      (&UNK_14333b77f)[uVar17] = (&UNK_14333b77f)[uVar17] | 0xfc;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      *(byte *)((longlong)ppppppcVar19 + 0x5f) =
           *(byte *)((longlong)ppppppcVar19 + 0x5f) & (byte)ppppppcVar19;
      return pppppppcVar18;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(1);
      pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
      return pppppppcVar18;
    case 0x11:
      *(uint *)pppppppcVar18 = *(uint *)pppppppcVar18 + uVar25;
      *(byte *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + bVar13;
code_r0x0001417dc682:
      UNRECOVERED_JUMPTABLE = (code *******)UNRECOVERED_JUMPTABLE[2];
      ppppppcVar39 = (code ******)0x1;
      puVar27 = auStack_2b8;
      goto code_r0x0001406abac0;
    case 0x12:
      goto code_r0x0001406abac0;
    case 0x13:
      pppppppcVar18 = (code *******)((ulonglong)pppppppcVar18 & 0xffffffffffffff30);
    case 0x19:
      puStack_298 = &UNK_143339430;
      puStack_2c0 = (undefined8 *)&UNK_1417dc783;
      pppppppcVar18 =
           (code *******)
           pdb_140f66090((ulonglong)pppppppcVar18 & 0xffffffffffffff30,&UNK_143339450,7,
                         &ppppppcStack_288);
code_r0x0001417dc784:
      return pppppppcVar18;
    case 0x14:
      puStack_2c0 = (undefined8 *)&UNK_1417dc719;
      pppppppcVar18 = (code *******)pdb_140f66090(3);
      return pppppppcVar18;
    case 0x15:
      pppppppcVar18 = (code *******)0xc;
      goto code_r0x0001417dc73b;
    case 0x16:
      UNRECOVERED_JUMPTABLE =
           (code *******)
           (&UNK_14333b844 + *(int *)(&UNK_14333b844 + CONCAT44(_UNK_14333b800,_UNK_14333b7fc) * 4))
      ;
code_r0x0001417dc6e8:
                    /* WARNING: Could not recover jumptable at 0x0001417dc6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppcVar18 = (code *******)(*(code *)UNRECOVERED_JUMPTABLE)();
      return pppppppcVar18;
    case 0x17:
      _UNK_14333b7b4 = _UNK_14333b7b4 + uVar25;
      pppppppcVar24 = (code *******)(ulonglong)(uVar25 | *(uint *)pppppppcVar18);
      *(char *)pppppppcVar24 =
           (char)*(code *)pppppppcVar24 + (char)(uVar25 | *(uint *)pppppppcVar18);
      break;
    case 0x18:
      puStack_298 = &UNK_143339408;
      puStack_2c0 = (undefined8 *)&UNK_1417dc7ea;
      pppppppcVar18 =
           (code *******)
           pdb_140f66090((ulonglong)pppppppcVar18 & 0xffffffffffffff30,&UNK_143339428,2,
                         &ppppppcStack_288);
      return pppppppcVar18;
    case 0x1a:
      piVar1 = (int *)(((ulonglong)pppppppcVar35 & 0xffffffff) - 0x73);
      *piVar1 = *piVar1 + -1;
      pppppppcVar24 = (code *******)(ulonglong)((int)pppppppcVar35 + 0x1b5cc6a + (uint)bVar49);
      break;
    case 0x1b:
      puVar29 = (undefined8 *)(ulonglong)(uVar26 + 0x38);
code_r0x0001417dc894:
      *(undefined8 *)((longlong)puVar29 + 0x20) = 0x43339540;
      *(undefined **)((longlong)puVar29 + -8) = &UNK_1417dc8b6;
      pppppppcVar18 =
           (code *******)
           pdb_140f66090(pppppppcVar24,&UNK_143339560,0xb,(undefined1 *)((longlong)puVar29 + 0x30));
      return pppppppcVar18;
    case 0x1c:
      uStack_230 = (code *)CONCAT17(uStack_230._7_1_ + -4,(undefined7)uStack_230);
      puVar32 = (uint *)((longlong)ppppppcVar39 + -0x77);
      *puVar32 = *puVar32 >> 0x11 | *puVar32 << 0xf;
code_r0x0001417dc85c:
      pppppppcVar18 = (code *******)&UNK_14333b864;
      ppppppcVar39 = (code ******)(longlong)*(int *)(&UNK_14333b864 + (longlong)ppppppcVar39 * 4);
      pppppppcVar24 = UNRECOVERED_JUMPTABLE;
code_r0x0001417dc867:
                    /* WARNING: Could not recover jumptable at 0x0001417dc86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppppcVar18 =
           (code *******)
           (*(code *)((longlong)pppppppcVar18 + (longlong)ppppppcVar39))(pppppppcVar24);
      return pppppppcVar18;
    case 0x1d:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
      return pppppppcVar18;
    case 0x1e:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
      return pppppppcVar18;
    case 0x1f:
      puVar30 = (undefined8 *)(ulonglong)(uVar26 + 0x38);
code_r0x0001417dc8c6:
      *(undefined8 *)((longlong)puVar30 + 0x20) = 0x433394e8;
      *(undefined **)((longlong)puVar30 + -8) = &UNK_1417dc8e8;
      pppppppcVar18 =
           (code *******)
           pdb_140f66090(pppppppcVar24,&UNK_143339508,9,(undefined1 *)((longlong)puVar30 + 0x30));
      return pppppppcVar18;
    case 0x20:
      goto code_r0x0001417dc9f8;
    case 0x21:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c887 + (uint)bVar49);
      }
      break;
    case 0x22:
code_r0x0001417dce5a:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x23:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c7ab + (uint)bVar49);
      }
      break;
    case 0x24:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cadb + (uint)bVar49);
      }
      break;
    case 0x25:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c737 + (uint)bVar49);
      }
      break;
    case 0x26:
code_r0x0001417dcff8:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x27:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c8ad + (uint)bVar49);
      }
      break;
    case 0x28:
code_r0x0001417dd037:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x29:
code_r0x0001417dce1b:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x2a:
code_r0x0001417dd022:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x2b:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c927 + (uint)bVar49);
      }
      break;
    case 0x2d:
code_r0x0001417dcfe3:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x2e:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cc65 + (uint)bVar49);
      }
      break;
    case 0x2f:
code_r0x0001417dce6f:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x30:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cceb + (uint)bVar49);
      }
      break;
    case 0x31:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c6ce + (uint)bVar49);
      }
      break;
    case 0x32:
code_r0x0001417dd00d:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x33:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c5ec + (uint)bVar49);
      }
      break;
    case 0x34:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cb6c + (uint)bVar49);
      }
      break;
    case 0x36:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c581 + (uint)bVar49);
      }
      break;
    case 0x37:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c681 + (uint)bVar49);
      }
      break;
    case 0x38:
code_r0x0001417dce45:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x39:
code_r0x0001417dce30:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x3a:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c70e + (uint)bVar49);
      }
      break;
    case 0x3b:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cbed + (uint)bVar49);
      }
      break;
    case 0x3c:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c531 + (uint)bVar49);
      }
      break;
    case 0x3d:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c727 + (uint)bVar49);
      }
      break;
    case 0x3e:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c6bb + (uint)bVar49);
      }
      break;
    case 0x3f:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5ca1e + (uint)bVar49);
      }
      break;
    case 0x40:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c62d + (uint)bVar49);
      }
      break;
    case 0x41:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5ca6a + (uint)bVar49);
      }
      break;
    case 0x42:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cc3d + (uint)bVar49);
      }
      break;
    case 0x43:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cbb3 + (uint)bVar49);
      }
      break;
    case 0x44:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cc5e + (uint)bVar49);
      }
      break;
    case 0x45:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cf5c + (uint)bVar49);
      }
      break;
    case 0x46:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c660 + (uint)bVar49);
      }
      break;
    case 0x47:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c8f6 + (uint)bVar49);
      }
      break;
    case 0x48:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cb28 + (uint)bVar49);
      }
      break;
    case 0x49:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c67d + (uint)bVar49);
      }
      break;
    case 0x4a:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c9d8 + (uint)bVar49);
      }
      break;
    case 0x4b:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cfd5 + (uint)bVar49);
      }
      break;
    case 0x4c:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cb15 + (uint)bVar49);
      }
      break;
    case 0x4d:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c5a3 + (uint)bVar49);
      }
      break;
    case 0x4e:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c4fd + (uint)bVar49);
      }
      break;
    case 0x4f:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cd23 + (uint)bVar49);
      }
      break;
    case 0x50:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c986 + (uint)bVar49);
      }
      break;
    case 0x51:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cda4 + (uint)bVar49);
      }
      break;
    case 0x52:
code_r0x0001417dcb03:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)((longlong)pppppppcVar18 + -0x73) = *(int *)((longlong)pppppppcVar18 + -0x73) + -1;
        pppppppcVar24 = (code *******)(ulonglong)((int)pppppppcVar18 + 0x1b5ced5 + (uint)bVar49);
      }
      break;
    case 0x53:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c5e6 + (uint)bVar49);
      }
      break;
    case 0x54:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c5b9 + (uint)bVar49);
      }
      break;
    case 0x55:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cf31 + (uint)bVar49);
      }
      break;
    case 0x56:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c93e + (uint)bVar49);
      }
      break;
    case 0x57:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c555 + (uint)bVar49);
      }
      break;
    case 0x58:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cdbb + (uint)bVar49);
      }
      break;
    case 0x59:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c8d8 + (uint)bVar49);
      }
      break;
    case 0x5a:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cbf0 + (uint)bVar49);
      }
      break;
    case 0x5b:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c9d9 + (uint)bVar49);
      }
      break;
    case 0x5c:
code_r0x0001417dcde2:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)((longlong)pppppppcVar18 + -0x73) = *(int *)((longlong)pppppppcVar18 + -0x73) + -1;
        pppppppcVar24 = (code *******)(ulonglong)((int)pppppppcVar18 + 0x1b5cc14 + (uint)bVar49);
      }
      break;
    case 0x5d:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c839 + (uint)bVar49);
      }
      break;
    case 0x5e:
code_r0x0001417dcfbf:
      if (bVar51) {
        *(int *)((longlong)pppppppcVar18 + -0x73) = *(int *)((longlong)pppppppcVar18 + -0x73) + -1;
        pppppppcVar18 = (code *******)(ulonglong)((int)pppppppcVar18 + 0x1b5c873 + (uint)bVar49);
      }
    case 0x35:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x5f:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c7f9 + (uint)bVar49);
      }
      break;
    case 0x60:
code_r0x0001417dcdf7:
      if (bVar51) {
        *(int *)((longlong)pppppppcVar18 + -0x73) = *(int *)((longlong)pppppppcVar18 + -0x73) + -1;
        pppppppcVar18 = (code *******)(ulonglong)((int)pppppppcVar18 + 0x1b5c874 + (uint)bVar49);
      }
    case 0x2c:
      pppppppcVar24 = pppppppcVar18;
      break;
    case 0x61:
code_r0x0001417dcfaa:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)((longlong)pppppppcVar18 + -0x73) = *(int *)((longlong)pppppppcVar18 + -0x73) + -1;
        pppppppcVar24 = (code *******)(ulonglong)((int)pppppppcVar18 + 0x1b5cb02 + (uint)bVar49);
      }
      break;
    case 0x62:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cea6 + (uint)bVar49);
      }
      break;
    case 99:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cb1e + (uint)bVar49);
      }
      break;
    case 100:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c673 + (uint)bVar49);
      }
      break;
    case 0x65:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5ce9a + (uint)bVar49);
      }
      break;
    case 0x66:
code_r0x0001417dcac4:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)((longlong)pppppppcVar18 + -0x73) = *(int *)((longlong)pppppppcVar18 + -0x73) + -1;
        pppppppcVar24 = (code *******)(ulonglong)((int)pppppppcVar18 + 0x1b5cf3e + (uint)bVar49);
      }
      break;
    case 0x67:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cf36 + (uint)bVar49);
      }
      break;
    case 0x68:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c55c + (uint)bVar49);
      }
      break;
    case 0x69:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c64f + (uint)bVar49);
      }
      break;
    case 0x6a:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c6d7 + (uint)bVar49);
      }
      break;
    case 0x6b:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cd3d + (uint)bVar49);
      }
      break;
    case 0x6c:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cb32 + (uint)bVar49);
      }
      break;
    case 0x6d:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cf9c + (uint)bVar49);
      }
      break;
    case 0x6e:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c691 + (uint)bVar49);
      }
      break;
    case 0x6f:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5d09e + (uint)bVar49);
      }
      break;
    case 0x70:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cc98 + (uint)bVar49);
      }
      break;
    case 0x71:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5ca46 + (uint)bVar49);
      }
      break;
    case 0x72:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cae7 + (uint)bVar49);
      }
      break;
    case 0x73:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
      return pppppppcVar18;
    case 0x74:
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 | 0x1b5cb7f);
      puStack_298 = &UNK_14333b7fc;
      goto code_r0x0001417dca38;
    case 0x75:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c5b9 + (uint)bVar49);
      }
      break;
    case 0x76:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c6e2 + (uint)bVar49);
      }
      break;
    case 0x77:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c88f + (uint)bVar49);
      }
      break;
    case 0x78:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cfaa + (uint)bVar49);
      }
      break;
    case 0x79:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c64b + (uint)bVar49);
      }
      break;
    case 0x7a:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c790 + (uint)bVar49);
      }
      break;
    case 0x7b:
      *(byte *)pppppppcVar35 = (char)*(code *)pppppppcVar35 - 4;
      LOCK();
      uRam000000018433b802 = SUB84(puVar31,0);
      UNLOCK();
      pppppppcVar38 = (code *******)&UNK_14333b87c;
      uVar22 = (ulonglong)iRam000000065002986c;
      goto code_r0x0001417dca73;
    case 0x7c:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c6fb + (uint)bVar49);
      }
      break;
    case 0x7d:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5d018 + (uint)bVar49);
      }
      break;
    case 0x7e:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c6fc + (uint)bVar49);
      }
      break;
    case 0x7f:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c7be + (uint)bVar49);
      }
      break;
    case 0x80:
code_r0x0001417dca9a:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)((longlong)pppppppcVar18 + -0x73) = *(int *)((longlong)pppppppcVar18 + -0x73) + -1;
        pppppppcVar24 = (code *******)(ulonglong)((int)pppppppcVar18 + 0x1b5cf71 + (uint)bVar49);
      }
      break;
    case 0x81:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c75e + (uint)bVar49);
      }
      break;
    case 0x82:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c7c4 + (uint)bVar49);
      }
      break;
    case 0x83:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c5a8 + (uint)bVar49);
      }
      break;
    case 0x84:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c55e + (uint)bVar49);
      }
      break;
    case 0x85:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c718 + (uint)bVar49);
      }
      break;
    case 0x86:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5ce2d + (uint)bVar49);
      }
      break;
    case 0x87:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c57e + (uint)bVar49);
      }
      break;
    case 0x88:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c619 + (uint)bVar49);
      }
      break;
    case 0x89:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5d070 + (uint)bVar49);
      }
      break;
    case 0x8a:
      uVar22 = (ulonglong)*(uint *)(pppppppcVar38 + 0xa199dbfe);
code_r0x0001417dca73:
      pppppppcVar24 = (code *******)((longlong)pppppppcVar38 + uVar22);
code_r0x0001417dca76:
      pppppppcVar18 = (code *******)(*(code *)pppppppcVar24)(pppppppcVar24);
      return pppppppcVar18;
    case 0x8b:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cf30 + (uint)bVar49);
      }
      break;
    case 0x8c:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cf2d + (uint)bVar49);
      }
      break;
    case 0x8d:
      _UNK_14333b7b4 = CONCAT31(_UNK_14333b7b5,UNK_14333b7b4 ^ bVar13);
      *(byte *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + bVar13;
code_r0x0001417dca38:
      puStack_2c0 = (undefined8 *)&UNK_1417dca40;
      pppppppcVar18 = (code *******)pdb_140f66090(pppppppcVar18);
      return pppppppcVar18;
    case 0x8e:
      *(byte *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + bVar13;
      goto code_r0x0001417dc9f8;
    case 0x8f:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c51c + (uint)bVar49);
      }
      break;
    case 0x90:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5ca46 + (uint)bVar49);
      }
      break;
    case 0x91:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cd29 + (uint)bVar49);
      }
      break;
    case 0x92:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5ce6a + (uint)bVar49);
      }
      break;
    case 0x93:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c6e8 + (uint)bVar49);
      }
      break;
    default:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c6fb + (uint)bVar49);
      }
      break;
    case 0xa2:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c9a4 + (uint)bVar49);
      }
      break;
    case 0xa3:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cabe + (uint)bVar49);
      }
      break;
    case 0xa4:
      pppppppcVar24 = pppppppcVar18;
      if (bVar51) {
        *(int *)(&UNK_14333b789 + uVar17) = *(int *)(&UNK_14333b789 + uVar17) + -1;
        pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c765 + (uint)bVar49);
      }
    }
    break;
  case 9:
    *(uint *)pppppppcVar18 = *(uint *)pppppppcVar18 + uVar25;
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)cVar12;
    pppppppcVar38 = UNRECOVERED_JUMPTABLE;
    pppppppcVar35 = pppppppcStack_c8;
    cVar47 = *(code *)pppppppcVar18;
    goto code_r0x0001417d8f66;
  case 10:
    *(uint *)(&UNK_143359f95 + uVar17) =
         *(int *)(&UNK_143359f95 + uVar17) + uVar25 + (uint)(0x48 < (byte)ppppppcVar19);
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)cVar12;
    cVar47 = *(code *)pppppppcVar18;
    goto code_r0x0001417d8fd9;
  case 0xb:
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)cVar12;
    cVar47 = *(code *)pppppppcVar18;
    goto code_r0x0001417d8fc6;
  case 0xc:
                    /* WARNING: Subroutine does not return */
    puStack_2c0 = (undefined8 *)0x1417d917e;
    pdb_142dc83d0(&UNK_1433301d8,&pppppppcStack_c8);
  case 0xd:
    pppppppcVar18 = (code *******)0x4;
    if ((code *******)0x8000000000000003 < UNRECOVERED_JUMPTABLE) {
      pppppppcVar18 = (code *******)((longlong)UNRECOVERED_JUMPTABLE + (longlong)param_1);
    }
    if ((code *******)0x4 < pppppppcVar18) {
      uStack_260 = 0xfffffffffffffffe;
      pppppppcVar18 = (code *******)CONCAT17(UNK_14333b7e7,_UNK_14333b7e0);
      if ((((uint)_UNK_14333b7e0 & 3) - 2 < 2) || ((_UNK_14333b7e0 & 3) == 0)) {
        return pppppppcVar18;
      }
      pppppppcStack_278 = (code *******)((longlong)pppppppcVar18 + -1);
      pbStack_270 = *(byte **)((longlong)pppppppcVar18 + -1);
      pppppppcStack_268 = *(code ********)((longlong)pppppppcVar18 + 7);
      if (*pppppppcStack_268 != (code ******)0x0) {
        uStack_2a0 = 0x1404b3933;
        (*(code *)*pppppppcStack_268)(pbStack_270);
      }
      if (pppppppcStack_268[1] != (code ******)0x0) {
        uStack_2a0 = 0x1404b394e;
        pub_1406abac0(pbStack_270,(ulonglong)pppppppcStack_268[1],(ulonglong)pppppppcStack_268[2]);
      }
      ppppppcVar39 = (code ******)0x8;
      puVar27 = &uStack_250;
      UNRECOVERED_JUMPTABLE = pppppppcStack_278;
      puVar31 = uStack_258;
      param_1 = pppppppcVar38;
      goto code_r0x0001406abac0;
    }
    goto code_r0x0001417dc488;
  case 0xe:
    if (bVar50) {
      return (code *******)0x0;
    }
    pppppppcStack_248 = (code *******)CONCAT44(_UNK_14333b804,_UNK_14333b800);
    if (*pppppppcStack_248 != (code ******)0x0) {
      puStack_2c0 = (undefined8 *)&UNK_1417dc59c;
      (*(code *)*pppppppcStack_248)(uStack_250);
    }
    pppppppcVar18 = pppppppcStack_248;
    if (pppppppcStack_248[1] == (code ******)0x0) {
      return pppppppcStack_248;
    }
    goto code_r0x0001417dc5aa;
  case 0xf:
    pppppppcVar18 = (code *******)0x2;
    if ((int)uVar25 < 0) {
      pppppppcVar18 = pppppppcStack_c8;
    }
    if (pppppppcVar18 != (code *******)0x2) {
      UNRECOVERED_JUMPTABLE = pppppppcVar24;
      if (pppppppcVar18 != (code *******)0x1) {
        return pppppppcVar18;
      }
      goto code_r0x0001417dc53d;
    }
    UNRECOVERED_JUMPTABLE = (code *******)&UNK_14333b7f8;
    ppppppcVar19 = (code ******)CONCAT44(_UNK_14333b7fc,_UNK_14333b7f8);
    goto joined_r0x0001417dc5fa;
  case 0x10:
    (&UNK_14333b75d)[uVar17] = (&UNK_14333b75d)[uVar17] | 0xd8;
    *(code *)pppppppcStack_c8 = *(code *)pppppppcStack_c8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
    do {
      *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)pppppppcVar18;
      UNK_14333b7e7 = UNK_14333b7e7 + -0x28;
      *(undefined *)((longlong)ppppppcVar39 + -0x7d) =
           *(undefined *)((longlong)ppppppcVar39 + -0x7d);
      pppppppcVar18 =
           (code *******)
           CONCAT71((int7)((ulonglong)pppppppcVar18 >> 8),(char)pppppppcVar18 + '\x0f');
      LOCK();
      uVar25 = *(uint *)pppppppcVar35;
      *(uint *)pppppppcVar35 = (uint)pppppppcVar35;
      pppppppcVar35 = (code *******)CONCAT44((int)((ulonglong)pppppppcVar35 >> 0x20),uVar25);
      UNLOCK();
      *(uint *)pppppppcVar18 = *(uint *)pppppppcVar18 + (int)pppppppcVar18;
      bVar49 = '\'' < in_stack_50ccedd2d;
      in_stack_50ccedd2d = in_stack_50ccedd2d + -0x28;
    } while (bVar49);
    goto code_r0x0001417dc48f;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    ppuVar28 = &puStack_2c0;
    puStack_2c0 = (undefined8 *)0x40;
    UNRECOVERED_JUMPTABLE = (code *******)pppppppcStack_248[1];
    if (UNRECOVERED_JUMPTABLE == (code *******)0x0) {
      return pppppppcStack_248;
    }
    ppppppcVar39 = pppppppcStack_248[2];
    goto code_r0x0001417dc64c;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    uStack_250 = (code *******)((ulonglong)uStack_250 & 0xffffffff);
code_r0x0001417dc64c:
    *(undefined **)((longlong)ppuVar28 + -8) = &UNK_1417dc651;
    pub_1406abac0((byte *)uStack_250,(ulonglong)UNRECOVERED_JUMPTABLE,(ulonglong)ppppppcVar39);
    return extraout_RAX;
  case 0x1a:
    if (uVar25 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0001417dc670 */
                    /* WARNING: Treating indirect jump as call */
      pppppppcVar18 =
           (code *******)
           (*(code *)(&UNK_14333b820 + *(int *)(&UNK_14333b820 + (longlong)pppppppcVar18 * 4)))();
      return pppppppcVar18;
    }
    bVar50 = CONCAT17(UNK_14333b7e7,_UNK_14333b7e0) == 0;
  case 0x1f:
    if (bVar50) {
      return pppppppcVar18;
    }
    ppppppcVar39 = (code ******)0x4;
    UNRECOVERED_JUMPTABLE = _UNK_14333b7e8;
    puVar27 = auStack_2b8;
    goto code_r0x0001406abac0;
  case 0x1b:
    iVar36 = (int)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE = pppppppcVar24;
    if (iVar36 == 0) {
      return pppppppcVar18;
    }
    goto code_r0x0001417dc682;
  case 0x1c:
    goto code_r0x0001417dc74f;
  case 0x1d:
    goto code_r0x0001417dc6e8;
  case 0x1e:
    ppppppcStack_288 = (code ******)&UNK_14333b7e0;
    puStack_298 = &UNK_143339430;
    goto code_r0x0001417dc73b;
  case 0x20:
    goto code_r0x0001417dc784;
  case 0x21:
    break;
  case 0x22:
    pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5cd2a + (uint)bVar49);
code_r0x0001417dc73b:
    puStack_2c0 = (undefined8 *)&UNK_1417dc74e;
    pppppppcVar18 = (code *******)pdb_140f66090(pppppppcVar18);
code_r0x0001417dc74f:
    return pppppppcVar18;
  case 0x23:
    (&UNK_14333b761)[uVar17] = (&UNK_14333b761)[uVar17] + -0x28;
    return (code *******)(ulonglong)(uint)(int)(short)(uVar25 >> 6);
  case 0x24:
    goto code_r0x0001417dc894;
  case 0x25:
    ppppppcVar39 = (code ******)0x4;
    if (0x8000000000000003 < CONCAT53(_UNK_14333b7db,_UNK_14333b7d8)) {
      ppppppcVar39 = (code ******)(CONCAT53(_UNK_14333b7db,_UNK_14333b7d8) + 0x7ffffffffffffffc);
    }
    goto code_r0x0001417dc85c;
  case 0x26:
    *(int *)((longlong)param_1 + 99) = *(int *)((longlong)param_1 + 99) + 0x4333b7d8;
    pppppppcVar18 = UNRECOVERED_JUMPTABLE;
    goto code_r0x0001417dc867;
  case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x28:
    goto code_r0x0001417dc8c6;
  case 0x29:
    UNK_14333b790 = UNK_14333b790 ^ (byte)cVar12;
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)cVar12;
    puStack_2c0 = (undefined8 *)&UNK_1417dc9e3;
    pppppppcVar18 = (code *******)pdb_140f66090(pppppppcVar18);
    return pppppppcVar18;
  case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5c7c0 + (uint)bVar49);
    }
    goto code_r0x0001417dce45;
  case 0x2c:
    pppppppcVar24 = pppppppcVar18;
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5cab3 + (uint)bVar49);
    }
    break;
  case 0x2d:
    return pppppppcVar18;
  case 0x2e:
    return pppppppcVar18;
  case 0x2f:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5c9e1 + (uint)bVar49);
    }
    goto code_r0x0001417dcfe3;
  case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5c5f4 + (uint)bVar49);
    }
    goto code_r0x0001417dd022;
  case 0x32:
    goto code_r0x0001417dcdf7;
  case 0x33:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5c913 + (uint)bVar49);
    }
    goto code_r0x0001417dd00d;
  case 0x34:
    return pppppppcVar18;
  case 0x35:
    goto code_r0x0001417dcde2;
  case 0x36:
    goto code_r0x0001417dcfbf;
  case 0x37:
    return pppppppcVar18;
  case 0x38:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5c9de + (uint)bVar49);
    }
    goto code_r0x0001417dce5a;
  case 0x39:
    return pppppppcVar18;
  case 0x3a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3b:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5c70a + (uint)bVar49);
    }
    goto code_r0x0001417dcff8;
  case 0x3c:
    return pppppppcVar18;
  case 0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3e:
    goto code_r0x0001417dcfaa;
  case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x40:
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x41:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5ca7f + (uint)bVar49);
    }
    goto code_r0x0001417dce30;
  case 0x42:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5cbe1 + (uint)bVar49);
    }
    goto code_r0x0001417dce1b;
  case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x44:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    return pppppppcVar18;
  case 0x45:
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x47:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5c907 + (uint)bVar49);
    }
    goto code_r0x0001417dd037;
  case 0x48:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x49:
    pppppppcVar24 = pppppppcVar18;
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar24 = (code *******)(ulonglong)(uVar25 + 0x1b5c8dc + (uint)bVar49);
    }
    break;
  case 0x4a:
    return pppppppcVar18;
  case 0x4b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4c:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(0xb5);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    *(uint *)(pppppppcVar24 + -9) = *(uint *)(pppppppcVar24 + -9) + (uint)pppppppcVar18;
    *(uint *)pppppppcVar18 = *(uint *)pppppppcVar18 | (uint)pppppppcVar18;
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)pppppppcVar18;
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x4d:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(0xb5);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    *(uint *)(pppppppcVar24 + -9) = *(uint *)(pppppppcVar24 + -9) + (uint)pppppppcVar18;
    *(uint *)pppppppcVar18 = *(uint *)pppppppcVar18 | (uint)pppppppcVar18;
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)pppppppcVar18;
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x4e:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    return pppppppcVar18;
  case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x50:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(0xb5);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    *(uint *)(pppppppcVar24 + -9) = *(uint *)(pppppppcVar24 + -9) + (int)pppppppcVar18;
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)pppppppcVar18;
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x54:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x55:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    return pppppppcVar18;
  case 0x56:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x58:
    return pppppppcVar18;
  case 0x59:
    return pppppppcVar18;
  case 0x5a:
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x5b:
    return pppppppcVar18;
  case 0x5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5e:
    return pppppppcVar18;
  case 0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x60:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x61:
    return pppppppcVar18;
  case 0x62:
    pppppppcVar24 = (code *******)0xc;
    puStack_2c0 = puVar31;
    break;
  case 99:
    return pppppppcVar18;
  case 100:
    pppppppcVar24 = (code *******)0xe;
    puStack_2c0 = puVar31;
    break;
  case 0x65:
    return pppppppcVar18;
  case 0x66:
    return pppppppcVar18;
  case 0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x68:
    if (bVar51) {
      *(int *)(&UNK_14333b765 + uVar17) = *(int *)(&UNK_14333b765 + uVar17) + -1;
      pppppppcVar18 = (code *******)(ulonglong)(uVar25 + 0x1b5caa6 + (uint)bVar49);
    }
    goto code_r0x0001417dce6f;
  case 0x69:
    return pppppppcVar18;
  case 0x6a:
    pppppppcVar24 = (code *******)0xe;
    puStack_2c0 = puVar31;
    break;
  case 0x6b:
    return pppppppcVar18;
  case 0x6c:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    return pppppppcVar18;
  case 0x6d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6e:
    return pppppppcVar18;
  case 0x6f:
    return pppppppcVar18;
  case 0x70:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x71:
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x74:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(0xb5);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    *(uint *)(pppppppcVar24 + -9) = *(uint *)(pppppppcVar24 + -9) + (int)pppppppcVar18;
    *(byte *)pppppppcVar18 = (byte)*(code *)pppppppcVar18 | (byte)pppppppcVar18;
    *(byte *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (byte)pppppppcVar18;
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x75:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x76:
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)cVar12;
    (&UNK_14333b761)[uVar17] = (&UNK_14333b761)[uVar17] + -0x28;
    bVar49 = (byte)cVar12 < (byte)*(code *)pppppppcStack_c8;
    bVar51 = (char)((char)cVar12 - (char)*(code *)pppppppcStack_c8) < '\0';
    goto code_r0x0001417dcac4;
  case 0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x78:
    UNK_14333b790 = UNK_14333b790 + (char)cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x79:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(0xb5);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    *(uint *)(pppppppcVar24 + -9) = *(uint *)(pppppppcVar24 + -9) + (uint)pppppppcVar18;
    *(uint *)pppppppcVar18 = *(uint *)pppppppcVar18 | (uint)pppppppcVar18;
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)pppppppcVar18;
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x7a:
    return pppppppcVar18;
  case 0x7b:
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0x7c:
    puStack_298 = (undefined *)CONCAT44(puStack_298._4_4_,0x4333b7d8);
    goto code_r0x0001417dca38;
  case 0x7d:
    goto code_r0x0001417dc9f8;
  case 0x7e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x80:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x81:
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)cVar12;
    (&UNK_14333b761)[uVar17] = (&UNK_14333b761)[uVar17] + -0x28;
    bVar49 = (byte)cVar12 < (byte)*(code *)pppppppcStack_c8;
    bVar51 = (char)((char)cVar12 - (char)*(code *)pppppppcStack_c8) < '\0';
    goto code_r0x0001417dcb03;
  case 0x82:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x84:
    (&UNK_14333b761)[uVar17] = (&UNK_14333b761)[uVar17] + -0x28;
    return (code *******)((ulonglong)param_1 & 0xffffffff);
  case 0x85:
    pppppppcVar24 = (code *******)0x10;
    puStack_2c0 = puVar31;
    break;
  case 0x86:
    return pppppppcVar18;
  case 0x87:
    return pppppppcVar18;
  case 0x88:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x89:
    goto code_r0x0001417dca76;
  case 0x8a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8b:
    pppppppcVar24 = (code *******)0x11;
    puStack_2c0 = puVar31;
    break;
  case 0x8c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8f:
    return pppppppcVar18;
  case 0x90:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x91:
    pppppppcVar24 = (code *******)0x4;
    puStack_2c0 = puVar31;
    break;
  case 0x92:
    *(char *)pppppppcVar18 = (char)*(code *)pppppppcVar18 + (char)cVar12;
    (&UNK_14333b761)[uVar17] = (&UNK_14333b761)[uVar17] + -0x28;
    bVar49 = uVar25 < *(uint *)pppppppcStack_c8;
    bVar51 = (int)(uVar25 - *(uint *)pppppppcStack_c8) < 0;
    goto code_r0x0001417dca9a;
  case 0x93:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    return pppppppcVar18;
  case 0x94:
    return pppppppcVar18;
  case 0x95:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x96:
    break;
  case 0x97:
    return pppppppcVar18;
  case 0x98:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9b:
    return pppppppcVar18;
  case 0x9c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xab:
    pppppppcVar24 = pppppppcVar18;
    break;
  case 0xac:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pppppppcVar18 = (code *******)(*UNRECOVERED_JUMPTABLE_00)();
    return pppppppcVar18;
  case 0xad:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pppppppcVar18 = (code *******)(*(code *)pppppppcVar24[1][3])(*pppppppcVar24);
  return pppppppcVar18;
code_r0x0001417dc9f8:
  pppppppcVar24 =
       (code *******)
       (ulonglong)((int)pppppppcVar18 + 0x1b5cb6f + (uint)(uRam00000000cec5e373 < uVar26));
  goto pdb_140f679a0;
}

