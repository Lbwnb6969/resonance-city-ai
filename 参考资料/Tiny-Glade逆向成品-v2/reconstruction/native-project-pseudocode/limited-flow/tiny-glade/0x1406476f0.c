// VA 0x1406476f0, PDB extent 4133 bytes
// tiny_glade::sdl_event_loop::handle_sdl_event
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140648bbd) overlaps instruction at (ram,0x000140648bb8)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Removing unreachable block (ram,0x0001406482ba) */
/* WARNING: Removing unreachable block (ram,0x0001406482bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::sdl_event_loop::handle_sdl_event
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
   Extent: 4133 */

uint * pdb_1406476f0(uint param_1,uint *param_2,int *param_3,uint *param_4,float *param_5,
                    char *param_6,uint *param_7,longlong *param_8,ulonglong *param_9,uint *param_10,
                    uint *param_11,uint *param_12,float *param_13)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong arg1;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int *piVar13;
  uint *extraout_RAX;
  uint *extraout_RAX_00;
  undefined7 uVar18;
  char *pcVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  char cVar19;
  byte bVar21;
  uint *in_RCX;
  undefined8 *puVar20;
  undefined4 uVar22;
  uint *puVar23;
  uint *unaff_RBX;
  undefined1 **ppuVar24;
  undefined1 **ppuVar25;
  undefined1 **ppuVar26;
  undefined1 **ppuVar27;
  uint **ppuVar28;
  undefined1 **ppuVar29;
  undefined1 **ppuVar30;
  undefined1 **ppuVar31;
  uint **ppuVar32;
  undefined1 **ppuVar33;
  uint **ppuVar34;
  uint **ppuVar35;
  undefined1 **ppuVar36;
  undefined1 **ppuVar37;
  uint **ppuVar38;
  undefined1 **ppuVar39;
  uint *unaff_RDI;
  undefined *puVar40;
  float fVar41;
  float fVar42;
  uint *unaff_R14;
  float *unaff_R15;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar43;
  byte in_AF;
  bool bVar44;
  undefined1 uVar45;
  byte in_TF;
  byte in_IF;
  bool bVar46;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  undefined8 unaff_XMM6_Qa;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  char acStack_282 [42];
  uint *puStack_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [24];
  uint uStack_228;
  undefined1 uStack_220;
  byte bStack_218;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  uint uStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  byte abStack_190 [40];
  int iStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined2 uStack_f6;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined6 uStack_b0;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined1 uStack_85;
  byte bStack_84;
  byte bStack_83;
  undefined1 uStack_82;
  byte bStack_81;
  undefined8 uStack_80;
  
  ppuVar31 = &puStack_248;
  ppuVar27 = &puStack_248;
  ppuVar33 = &puStack_248;
  ppuVar35 = (uint **)&puStack_248;
  ppuVar38 = (uint **)&puStack_248;
  ppuVar39 = &puStack_248;
  ppuVar34 = (uint **)&puStack_248;
  puVar16 = &uStack_1c8;
  uStack_80 = 0xfffffffffffffffe;
  bStack_84 = (byte)*param_10;
  puVar40 = &UNK_142f8c654;
  uVar11 = (ulonglong)*(int *)(&UNK_142f8c654 + (ulonglong)bStack_84 * 4);
  bVar43 = 0xfffffffebd0739ab < uVar11;
  bVar46 = SCARRY8(uVar11,0x142f8c654);
  puVar12 = (uint *)(&UNK_142f8c654 + uVar11);
  bVar44 = puVar12 == (uint *)0x0;
  puStack_90 = param_10;
  cVar19 = (char)puVar12;
  bVar5 = (byte)in_RCX;
  ppuVar32 = (uint **)&puStack_248;
  ppuVar30 = &puStack_248;
  ppuVar29 = &puStack_248;
  ppuVar28 = (uint **)&puStack_248;
  ppuVar26 = &puStack_248;
  ppuVar25 = &puStack_248;
  ppuVar24 = &puStack_248;
  switch(bStack_84) {
  case 0:
    uVar10 = param_10[1];
    if (4 < uVar10 - 0x1000) {
      return (uint *)(ulonglong)uVar10;
    }
    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar10);
    if ((uint *)*_DAT_143ca8e90 < (uint *)0x4) {
      return (uint *)*_DAT_143ca8e90;
    }
    uStack_150 = &uStack_1a8;
    uStack_148 = pdb_140f73bd0;
    uStack_f8 = 0;
    uStack_f7 = 0;
    uStack_f6 = 0;
    fStack_f4 = 0.0;
    uStack_f0._0_4_ = 124.38447;
    uStack_f0._4_4_ = 1;
    uStack_e8._0_4_ = 0x1a;
    uStack_e8._4_4_ = 0.0;
    uStack_e0 = 0;
    puStack_d8 = &UNK_142f8c4b1;
    uStack_d0 = 0x27;
    uStack_c8 = 4;
    puStack_c0 = &UNK_142f8c4d9;
    uStack_b8 = 0x1a;
    uStack_b0 = 0x16c00000001;
    uStack_aa = 0;
    uStack_a8 = 0x142f8c526;
    uStack_a2 = 0;
    puStack_a0 = &uStack_150;
    bStack_81 = 1;
    puStack_250 = (uint *)0x14064784a;
    puVar16 = (uint *)pdb_140f332f0(&uStack_85,&uStack_f8);
    return puVar16;
  case 1:
    uStack_f8 = 3;
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647c74;
    puVar16 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
    if ((char)uStack_150 == '\x10') {
      return puVar16;
    }
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647c8f;
    puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
    goto code_r0x000140648216;
  case 2:
    unaff_R14 = (uint *)(ulonglong)param_10[2];
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647a6d;
    puVar23 = param_2;
    puVar12 = (uint *)pdb_1406d18e0(param_2);
    unaff_RBX = param_2;
    unaff_RDI = in_RCX;
    unaff_R15 = param_5;
    goto code_r0x000140647a6e;
  case 3:
    uVar10 = param_10[2];
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647b26;
    puVar16 = (uint *)pdb_1406d18e0(param_2);
    if (uVar10 != (uint)puVar16) {
      return puVar16;
    }
    uStack_228 = puStack_90[4];
    bStack_218 = *(byte *)((longlong)puStack_90 + 1);
    bStack_81 = 1;
    uStack_220 = 0;
    puStack_250 = (uint *)0x140647b65;
    puVar16 = (uint *)pdb_140648720(&uStack_1a8,puStack_90[5],puStack_90[6],puStack_90[3]);
    if (iStack_168 == 0xc3) {
      return puVar16;
    }
    uVar11 = *param_9;
    if ((!SBORROW8(0,uVar11)) && (uVar11 != 0)) {
      puStack_250 = (uint *)0x140647b8f;
      pub_1406abac0((byte *)param_9[1],uVar11,1);
    }
    *param_9 = 0x8000000000000000;
    uStack_b0 = (undefined6)CONCAT44(uStack_164,iStack_168);
    uStack_aa = (undefined2)((uint)uStack_164 >> 0x10);
    uStack_a8 = (undefined6)uStack_160;
    uStack_a2 = (undefined2)((ulonglong)uStack_160 >> 0x30);
    uStack_f0._0_4_ = (float)uStack_1a8;
    uStack_f0._4_4_ = uStack_1a8._4_4_;
    uStack_e8._0_4_ = uStack_1a0;
    uStack_e8._4_4_ = fStack_19c;
    uStack_f8 = 7;
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647bf4;
    puVar12 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
    bVar44 = (char)uStack_150 == '\x10';
    param_12 = param_11;
    goto code_r0x000140647bf3;
  case 4:
    uStack_98 = param_11;
    uVar10 = param_10[2];
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647870;
    puVar16 = (uint *)pdb_1406d18e0(param_2);
    if (uVar10 != (uint)puVar16) {
      return puVar16;
    }
    uVar10 = puStack_90[3];
    uVar9 = puStack_90[4];
    uVar1 = puStack_90[5];
    uVar2 = puStack_90[6];
    bStack_218 = *(byte *)((longlong)puStack_90 + 1);
    if (((byte)uVar1 & uVar2 == 0x44) == 0) {
      if (((byte)uVar10 & uVar9 == 0xd) != 0) {
        bStack_81 = 1;
        puStack_250 = (uint *)0x1406478be;
        bStack_83 = bStack_218;
        uVar11 = pdb_1406d19d0(param_3);
        bStack_218 = bStack_83;
        if ((uVar11 & 0x300) != 0) goto code_r0x0001406478cd;
      }
code_r0x000140647918:
      bStack_81 = 1;
      uStack_220 = 1;
      puStack_250 = (uint *)0x14064793e;
      uStack_228 = uVar9;
      puVar16 = (uint *)pdb_140648720(&uStack_1a8,uVar1,uVar2,uVar10);
      if (iStack_168 == 0xc3) {
        return puVar16;
      }
      uStack_b0 = (undefined6)CONCAT44(uStack_164,iStack_168);
      uStack_aa = (undefined2)((uint)uStack_164 >> 0x10);
      uStack_a8 = (undefined6)uStack_160;
      uStack_a2 = (undefined2)((ulonglong)uStack_160 >> 0x30);
      uStack_f0._0_4_ = (float)uStack_1a8;
      uStack_f0._4_4_ = uStack_1a8._4_4_;
      uStack_e8._0_4_ = uStack_1a0;
      uStack_e8._4_4_ = fStack_19c;
      uStack_f8 = 7;
      bStack_81 = 1;
      puStack_250 = (uint *)0x1406479a8;
      puVar16 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
      if ((char)uStack_150 == '\x10') {
        return puVar16;
      }
      bStack_81 = 1;
      puStack_250 = (uint *)0x1406479c3;
      pdb_1404c7c30(&uStack_150);
      goto code_r0x0001406484aa;
    }
code_r0x0001406478cd:
    bStack_81 = 1;
    puStack_250 = (uint *)0x1406478df;
    iVar6 = pdb_1406d17f0(param_2);
    uStack_f7 = iVar6 == 0;
    uStack_f8 = 4;
    bStack_81 = 1;
    puStack_250 = (uint *)0x14064790a;
    pdb_140558a30(&uStack_150,param_4,&uStack_f8);
    if ((char)uStack_150 == '\x10') goto code_r0x000140647918;
    goto code_r0x000140648023;
  case 5:
    uVar10 = param_10[2];
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647ca8;
    puVar12 = (uint *)pdb_1406d18e0(param_2);
    if (uVar10 != (uint)puVar12) {
      if (*(longlong *)(puStack_90 + 4) == 0) {
        return puVar12;
      }
      uVar3 = *(undefined8 *)(puStack_90 + 6);
      uVar17 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar16 = (uint *)HeapFree(uVar17,0,uVar3);
      return puVar16;
    }
    uStack_1b8 = *(undefined8 *)(puStack_90 + 8);
    uStack_1c8 = puStack_90[4];
    uStack_1c4 = puStack_90[5];
    uStack_1c0 = puStack_90[6];
    uStack_1bc = puStack_90[7];
    uStack_f0._0_4_ = (float)CONCAT31(uStack_f0._1_3_,0x1b);
    uStack_f8 = 1;
    uStack_f7 = 0;
    uStack_f6 = 0;
    puStack_250 = (uint *)0x140647ce8;
    pdb_1406404c0(&uStack_150,puVar16);
    uStack_e8._4_4_ = (float)uStack_f0._4_4_;
    uStack_1d8 = uStack_140;
    uStack_1e8 = (uint)uStack_150;
    uStack_1e4 = uStack_150._4_4_;
    uStack_1e0 = (undefined4)uStack_148;
    uStack_1dc = uStack_148._4_4_;
    uStack_208 = CONCAT22(uStack_f6,CONCAT11(uStack_f7,uStack_f8));
    uStack_204 = fStack_f4;
    uStack_200 = (float)uStack_f0;
    uStack_1fc = uStack_f0._4_4_;
    puStack_c0 = (undefined *)uStack_140;
    uStack_f0._4_4_ = (uint)fStack_f4;
    uStack_e8._0_4_ = (uint)(float)uStack_f0;
    uStack_b8 = 1;
    uStack_b0 = 0;
    uStack_aa = 0;
    uStack_a8 = 0;
    uStack_f8 = 7;
    bStack_81 = 0;
    puStack_250 = (uint *)0x140647d70;
    uStack_f0._0_4_ = (float)uStack_208;
    puVar16 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
    if ((char)uStack_150 == '\x10') {
      return puVar16;
    }
    bStack_81 = 0;
    puStack_250 = (uint *)0x140647d8b;
    puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
    goto code_r0x000140648216;
  case 6:
    uStack_98 = param_11;
    uVar10 = param_10[2];
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647dce;
    puVar16 = (uint *)pdb_1406d18e0(param_2);
    if (uVar10 != (uint)puVar16) {
      return puVar16;
    }
    if ((char)*param_12 == '\x01') goto code_r0x000140647de2;
    if (*param_6 != '\0') {
      fStack_f4 = (float)*(undefined8 *)param_13 * (float)(int)*(undefined8 *)(puStack_90 + 6);
      uStack_f0._0_4_ =
           (float)((ulonglong)*(undefined8 *)param_13 >> 0x20) *
           (float)(int)((ulonglong)*(undefined8 *)(puStack_90 + 6) >> 0x20);
      uStack_f8 = 9;
      bStack_81 = 1;
      puStack_250 = (uint *)0x140648002;
      puVar16 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
      if ((char)uStack_150 == '\x10') {
        return puVar16;
      }
      bStack_81 = 1;
      puStack_250 = (uint *)0x14064801d;
      pdb_1404c7c30(&uStack_150);
      goto code_r0x0001406484aa;
    }
    unaff_XMM6_Qa = *(undefined8 *)(puStack_90 + 4);
    if (*param_8 == 0) {
      unaff_XMM7_Da = *param_13;
    }
    else {
      bStack_81 = 1;
      puStack_250 = (uint *)0x1406480de;
      unaff_RBX = (uint *)pdb_1409583d0(param_8);
      unaff_XMM7_Da = *param_13;
      if (unaff_RBX != (uint *)0x0) {
        unaff_XMM8_Da = (float)(int)((ulonglong)unaff_XMM6_Qa >> 0x20) * param_13[1];
        uStack_f0._0_4_ = (float)param_7[2];
        uVar3 = *(undefined8 *)param_7;
        uStack_f8 = (undefined1)uVar3;
        uStack_f7 = (undefined1)((ulonglong)uVar3 >> 8);
        uStack_f6 = (undefined2)((ulonglong)uVar3 >> 0x10);
        fStack_f4 = (float)((ulonglong)uVar3 >> 0x20);
        bStack_81 = 1;
        in_RCX = (uint *)&uStack_f8;
        unaff_RDI = param_7;
        unaff_R15 = param_13;
        goto code_r0x000140648120;
      }
    }
    goto code_r0x000140648451;
  case 7:
    unaff_RDI = (uint *)(ulonglong)param_10[2];
code_r0x000140647c19:
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647c28;
    puVar12 = (uint *)pdb_1406d18e0(param_2);
    param_1 = extraout_XMM0_Da;
    if ((int)unaff_RDI != (int)puVar12) {
      return puVar12;
    }
    goto code_r0x000140647c31;
  case 8:
    unaff_RDI = (uint *)(ulonglong)param_10[2];
    bStack_81 = 1;
  case 0xc:
    puStack_250 = (uint *)0x140647f42;
    puVar12 = (uint *)pdb_1406d18e0(param_2);
    if ((int)unaff_RDI != (int)puVar12) {
      return puVar12;
    }
    break;
  case 9:
    uVar10 = param_10[2];
    bStack_81 = 1;
    puStack_250 = (uint *)0x1406479dc;
    puVar16 = (uint *)pdb_1406d18e0(param_2);
    if (uVar10 != (uint)puVar16) {
      return puVar16;
    }
    uStack_f0._0_4_ = 1.4013e-45;
    uStack_f0._4_4_ = 0;
    uStack_e8._0_4_ = (uint)*(undefined8 *)(puStack_90 + 6);
    uStack_e8._4_4_ = (float)((ulonglong)*(undefined8 *)(puStack_90 + 6) >> 0x20);
    uStack_e0 = uStack_e0 & 0xffffffffffffff00;
    uStack_f8 = 0xc;
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647a2c;
    puVar12 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
    bVar44 = (char)uStack_150 == '\x10';
    goto code_r0x000140647a2b;
  case 10:
    uStack_198 = *(undefined8 *)(param_10 + 8);
    uStack_1a8._0_4_ = (float)param_10[4];
    uStack_1a8._4_4_ = param_10[5];
    uStack_1a0 = param_10[6];
    fStack_19c = (float)param_10[7];
    if (3 < *_DAT_143ca8e90) {
      uStack_150 = &uStack_1a8;
      uStack_148 = pdb_140094770;
      uStack_f8 = 0;
      uStack_f7 = 0;
      uStack_f6 = 0;
      fStack_f4 = 0.0;
      uStack_f0._0_4_ = 124.38447;
      uStack_f0._4_4_ = 1;
      uStack_e8._0_4_ = 0x1a;
      uStack_e8._4_4_ = 0.0;
      uStack_e0 = 0;
      puStack_d8 = &UNK_142f8c4b1;
      uStack_d0 = 0x27;
      uStack_c8 = 4;
      puStack_c0 = &UNK_142f8c4d9;
      uStack_b8 = 0x1a;
      uStack_b0 = 0x16500000001;
      uStack_aa = 0;
      uStack_a8 = 0x142f8c556;
      uStack_a2 = 0;
      puStack_a0 = &uStack_150;
      uStack_82 = 1;
      puStack_250 = (uint *)0x140647ecf;
      pdb_140f332f0(&uStack_85,&uStack_f8);
    }
    uStack_e0 = uStack_198;
    uStack_f0._0_4_ = (float)uStack_1a8;
    uStack_f0._4_4_ = uStack_1a8._4_4_;
    uStack_e8._0_4_ = uStack_1a0;
    uStack_e8._4_4_ = fStack_19c;
    puStack_d8 = (undefined *)CONCAT71(puStack_d8._1_7_,1);
    uStack_f8 = 0xf;
    uStack_82 = 0;
    puStack_250 = (uint *)0x140647f0e;
    puVar16 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
    if ((char)uStack_150 == '\x10') {
      return puVar16;
    }
    uStack_82 = 0;
    puStack_250 = (uint *)0x140647f29;
    puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
    goto code_r0x000140648216;
  case 0xb:
    goto code_r0x0001406481ef;
  case 0xd:
    goto code_r0x000140648150;
  case 0xe:
    in_RCX = (uint *)(ulonglong)((int)puVar16 + 0x78);
    goto code_r0x0001406481a1;
  case 0xf:
    goto code_r0x000140648144;
  case 0x10:
    *(byte *)puVar12 = (byte)*puVar12 << 1 | (char)(byte)*puVar12 < '\0';
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    goto code_r0x0001406481a8;
  case 0x11:
    *(byte *)puVar12 = (byte)*puVar12 << (bVar5 & 7) | (byte)*puVar12 >> 8 - (bVar5 & 7);
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    goto code_r0x0001406481db;
  case 0x12:
    param_12 = unaff_R14;
    if (-1 < (longlong)puVar12) {
      *puVar12 = *puVar12 & (uint)puVar12;
      puStack_250 = (uint *)0x140647c12;
      piVar13 = (int *)func_0x00010e4e0d11();
      *piVar13 = *piVar13 + (int)piVar13;
      *(byte *)((longlong)in_RCX + -0x75) = *(byte *)((longlong)in_RCX + -0x75) + (char)piVar13;
      goto code_r0x000140647c19;
    }
code_r0x000140647bf3:
    puStack_250 = (uint *)0x140647bf9;
    puVar16 = (uint *)(**(code **)(puVar12 + 0x41e1f60))();
    if (bVar44) {
      return puVar16;
    }
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647c0f;
    puVar16 = (uint *)pdb_1404c7c30(&uStack_150);
code_r0x000140647de2:
    *(char *)param_12 = '\0';
    return puVar16;
  case 0x13:
    goto code_r0x000140648126;
  case 0x14:
    goto code_r0x000140648126;
  case 0x15:
code_r0x000140648120:
    puStack_250 = (uint *)0x140648125;
    puVar12 = (uint *)pdb_1409582b0(in_RCX);
code_r0x000140648126:
    unaff_R14 = (uint *)((ulonglong)puVar12 & 0xff);
    bStack_81 = 1;
    puStack_250 = (uint *)0x140648138;
    param_1 = pdb_1409582a0(unaff_RDI);
    puVar12 = (uint *)(ulonglong)(uint)((float)(int)unaff_XMM6_Qa * unaff_XMM7_Da);
code_r0x000140648144:
    puVar12 = (uint *)((ulonglong)puVar12 | (ulonglong)(uint)unaff_XMM8_Da << 0x20);
    goto code_r0x000140648150;
  case 0x16:
    return puVar12;
  case 0x17:
  case 0x25:
    if (-1 < (longlong)puVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x000140647a2b:
    puStack_250 = (uint *)0x140647a31;
    puVar16 = (uint *)(**(code **)(puVar12 + 0x41e1f60))();
    if (bVar44) {
      return puVar16;
    }
    bStack_81 = 1;
    puStack_250 = (uint *)0x140647a47;
    puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
    goto code_r0x000140648216;
  case 0x18:
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x22:
  case 0x23:
  case 0x24:
    puVar20 = (undefined8 *)(ulonglong)((int)puVar16 + 0x78);
    goto code_r0x0001406481c2;
  case 0x1f:
    goto code_r0x000140648269;
  case 0x20:
    *(byte *)in_RCX = (byte)*in_RCX + cVar19;
    goto code_r0x0001406481eb;
  case 0x21:
    *puVar12 = *puVar12 + (uint)puVar12;
    *(byte *)((longlong)(unaff_RDI + 10) + (longlong)in_RCX) =
         *(byte *)((longlong)(unaff_RDI + 10) + (longlong)in_RCX) + cVar19;
    goto code_r0x00014064821b;
  case 0x26:
    goto code_r0x0001406486b7;
  case 0x27:
    goto code_r0x000140648909;
  case 0x28:
    goto code_r0x00014064892a;
  case 0x29:
    goto code_r0x0001406488f3;
  case 0x2a:
    goto code_r0x0001406488fe;
  case 0x2b:
    goto code_r0x0001406488b1;
  case 0x2c:
    goto code_r0x0001406488d2;
  case 0x2d:
    goto code_r0x000140648864;
  case 0x2e:
    goto code_r0x0001406488c7;
  case 0x2f:
    goto code_r0x00014064894b;
  case 0x30:
    goto code_r0x000140648935;
  case 0x31:
    goto code_r0x00014064887a;
  case 0x32:
    goto code_r0x0001406489b9;
  case 0x33:
    goto code_r0x0001406489c4;
  case 0x34:
    goto code_r0x000140648a27;
  case 0x35:
    goto code_r0x0001406489e5;
  case 0x36:
    goto code_r0x000140648843;
  case 0x37:
    goto code_r0x000140648940;
  case 0x38:
    goto code_r0x000140648a48;
  case 0x39:
    goto code_r0x00014064886f;
  case 0x3a:
    goto code_r0x00014064891f;
  case 0x3b:
    goto code_r0x0001406488a6;
  case 0x3c:
    goto code_r0x0001406489a3;
  case 0x3d:
    goto code_r0x000140648890;
  case 0x3e:
    goto code_r0x000140648801;
  case 0x3f:
    goto code_r0x0001406487e0;
  case 0x40:
    goto code_r0x00014064889b;
  case 0x41:
    goto code_r0x0001406488dd;
  case 0x42:
    goto code_r0x0001406489ae;
  case 0x43:
    goto code_r0x0001406488e8;
  case 0x44:
    goto code_r0x0001406487bf;
  case 0x45:
    goto code_r0x00014064884e;
  case 0x46:
    goto code_r0x0001406489cf;
  case 0x47:
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + cVar19;
    goto code_r0x000140648a69;
  case 0x48:
    goto code_r0x0001406487f6;
  case 0x49:
    goto code_r0x00014064898d;
  case 0x4a:
    goto code_r0x0001406487eb;
  case 0x4b:
    goto code_r0x0001406487ca;
  case 0x4c:
    goto code_r0x000140648885;
  case 0x4d:
    goto code_r0x000140648914;
  case 0x4e:
    goto code_r0x0001406489fb;
  case 0x4f:
    goto code_r0x00014064877d;
  case 0x50:
    goto code_r0x000140648817;
  case 0x51:
    goto code_r0x000140648956;
  case 0x52:
    goto code_r0x000140648982;
  case 0x53:
    goto code_r0x000140648a76;
  default:
    LOCK();
    uVar10 = unaff_RBX[0x13000000];
    unaff_RBX[0x13000000] = (uint)param_2;
    UNLOCK();
    goto code_r0x000140648bc4;
  case 0x55:
    goto code_r0x000140648961;
  case 0x56:
    goto code_r0x0001406487b4;
  case 0x57:
    goto code_r0x000140648788;
  case 0x58:
    goto code_r0x000140648a9e;
  case 0x59:
    goto code_r0x000140648a5e;
  case 0x5a:
    goto code_r0x0001406487a9;
  case 0x5b:
    goto code_r0x000140648998;
  case 0x5c:
    goto code_r0x0001406489f0;
  case 0x5d:
    goto code_r0x00014064879e;
  case 0x5e:
    goto code_r0x000140648a3d;
  case 0x5f:
    goto code_r0x000140648a1c;
  case 0x60:
    goto code_r0x000140648725;
  case 0x61:
    puVar12 = (uint *)0x23;
    ppuVar38 = (uint **)&puStack_248;
    goto code_r0x000140648b7c;
  case 0x62:
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + cVar19;
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    ppuVar38 = (uint **)&puStack_248;
    goto code_r0x000140648b7c;
  case 99:
    goto code_r0x000140648a06;
  case 100:
    goto code_r0x000140648a11;
  case 0x65:
    goto code_r0x000140648822;
  case 0x66:
    goto code_r0x000140648a53;
  case 0x67:
    goto code_r0x000140648730;
  case 0x68:
    goto code_r0x000140648a6e;
  case 0x69:
    goto code_r0x000140648a8e;
  case 0x6a:
    goto code_r0x0001406488bc;
  case 0x6b:
    goto code_r0x000140648aae;
  case 0x6c:
    goto code_r0x000140648a32;
  case 0x6d:
    goto code_r0x000140648746;
  case 0x6e:
    goto code_r0x00014064880c;
  case 0x6f:
    goto code_r0x00014064896c;
  case 0x70:
  case 0x89:
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    ppuVar38 = (uint **)&puStack_248;
    goto code_r0x000140648b7c;
  case 0x71:
    goto code_r0x000140648767;
  case 0x72:
    goto code_r0x000140648ac6;
  case 0x73:
    goto code_r0x00014064871a;
  case 0x74:
    goto code_r0x000140648838;
  case 0x76:
    goto code_r0x0001406486ee;
  case 0x77:
    goto code_r0x000140648704;
  case 0x78:
    goto code_r0x0001406487d5;
  case 0x79:
    goto code_r0x000140648977;
  case 0x7a:
    goto code_r0x00014064873b;
  case 0x7b:
    goto code_r0x000140648793;
  case 0x7c:
    goto code_r0x0001406486e3;
  case 0x7d:
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),bVar5 + (char)((ulonglong)in_RCX >> 8))
    ;
    goto code_r0x000140648a9a;
  case 0x7e:
    goto code_r0x00014064882d;
  case 0x7f:
    goto code_r0x000140648751;
  case 0x80:
    goto code_r0x0001406489da;
  case 0x81:
    goto code_r0x0001406486f9;
  case 0x82:
    puVar12 = (uint *)0xa2;
    ppuVar38 = (uint **)&puStack_248;
    goto code_r0x000140648b7c;
  case 0x83:
    (&UNK_142f8c5d9)[uVar11] = (&UNK_142f8c5d9)[uVar11] + bVar5 + bVar43;
    *(byte *)((longlong)(param_4 + 0x12) + (longlong)param_2) =
         *(byte *)((longlong)(param_4 + 0x12) + (longlong)param_2) << (bVar5 & 0x1f);
    goto code_r0x0001406486de;
  case 0x84:
    goto code_r0x00014064870f;
  case 0x85:
    goto code_r0x000140648772;
  case 0x86:
    goto code_r0x0001406486cd;
  }
  in_RCX = (uint *)&UNK_142f8c680;
  uVar11 = (ulonglong)*(int *)(&UNK_142f8c680 + (ulonglong)*(byte *)((longlong)puStack_90 + 2) * 4);
  bVar43 = 0xfffffffebd07397f < uVar11;
  bVar46 = SCARRY8(uVar11,0x142f8c680);
  puVar12 = (uint *)(&UNK_142f8c680 + uVar11);
  bVar44 = puVar12 == (uint *)0x0;
  cVar19 = (char)puVar12;
  uVar18 = (undefined7)((ulonglong)puVar12 >> 8);
  puVar15 = puVar12;
  puVar23 = param_2;
  ppuVar36 = &puStack_248;
  ppuVar37 = &puStack_248;
  ppuVar32 = (uint **)&puStack_248;
  ppuVar30 = &puStack_248;
  ppuVar29 = &puStack_248;
  ppuVar28 = (uint **)&puStack_248;
  ppuVar26 = &puStack_248;
  ppuVar25 = &puStack_248;
  ppuVar24 = &puStack_248;
  param_1 = extraout_XMM0_Da_00;
  switch(*(byte *)((longlong)puStack_90 + 2)) {
  case 0:
    goto code_r0x00014064821b;
  case 1:
    uStack_f6 = 0;
    goto code_r0x0001406481db;
  case 2:
    uStack_f6 = 2;
    goto code_r0x0001406481db;
  case 3:
    uStack_f6 = 1;
    goto code_r0x0001406481db;
  case 4:
    uStack_f6 = 3;
    goto code_r0x0001406481db;
  case 5:
    uStack_f6 = 4;
code_r0x0001406481db:
    uStack_f8 = 10;
    uStack_f7 = 1;
    bStack_81 = 1;
code_r0x0001406481eb:
    in_RCX = (uint *)&uStack_150;
code_r0x0001406481ef:
    puStack_250 = (uint *)0x1406481fe;
    puVar12 = (uint *)pdb_140558a30(in_RCX,param_4,&uStack_f8);
    bVar44 = (char)uStack_150 == '\x10';
code_r0x000140648203:
    if (!bVar44) {
      bStack_81 = 1;
      puStack_250 = (uint *)0x140648215;
      puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
code_r0x000140648216:
      *(char *)param_11 = '\0';
    }
code_r0x00014064821b:
    return puVar12;
  case 6:
    goto code_r0x000140648203;
  case 7:
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
code_r0x000140647c31:
    in_RCX = (uint *)&UNK_142f8c698;
    uVar11 = (ulonglong)
             *(int *)(&UNK_142f8c698 + (ulonglong)*(byte *)((longlong)puStack_90 + 2) * 4);
    puVar12 = (uint *)(&UNK_142f8c698 + uVar11);
    bVar44 = puVar12 == (uint *)0x0;
    cVar19 = (char)puVar12;
    puVar15 = puVar12;
    ppuVar35 = (uint **)&puStack_248;
    ppuVar36 = &puStack_248;
    ppuVar37 = &puStack_248;
    ppuVar34 = (uint **)&puStack_248;
    switch(*(byte *)((longlong)puStack_90 + 2)) {
    case 0:
      goto code_r0x00014064821b;
    case 1:
      uStack_f6 = 0;
      goto code_r0x000140648186;
    case 2:
      goto code_r0x00014064816a;
    case 3:
      uStack_f6 = 1;
      goto code_r0x000140648186;
    case 4:
      goto code_r0x000140648164;
    case 5:
      uStack_f6 = 4;
code_r0x000140648186:
      uStack_f8 = 10;
      uStack_f7 = 0;
      bStack_81 = 1;
      in_RCX = (uint *)&uStack_150;
code_r0x0001406481a1:
      param_3 = (int *)&uStack_f8;
code_r0x0001406481a8:
      puStack_250 = (uint *)0x1406481b0;
      puVar16 = (uint *)pdb_140558a30(in_RCX,param_4,param_3);
      if ((char)uStack_150 == '\x10') {
        return puVar16;
      }
      bStack_81 = 1;
      puVar20 = &uStack_150;
code_r0x0001406481c2:
      puStack_250 = (uint *)0x1406481c7;
      puVar12 = (uint *)pdb_1404c7c30(puVar20);
      goto code_r0x000140648216;
    case 6:
    case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
    case 8:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
code_r0x000140648023:
      bStack_81 = 1;
      puStack_250 = (uint *)0x140648033;
      pdb_1404c7c30(&uStack_150);
      goto code_r0x0001406484aa;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x11:
    case 0x12:
    case 0x13:
      goto code_r0x000140648203;
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
      if (SCARRY8(uVar11,0x142f8c698)) {
        (&UNK_142f8c619)[uVar11] = (&UNK_142f8c619)[uVar11] + -0x68;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x00014064821b:
      *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
      return puVar12;
    case 0x10:
      if (-0x142f8c699 < (longlong)uVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      acStack_282[(longlong)puVar16 * 4] =
           acStack_282[(longlong)puVar16 * 4] + (char)((ulonglong)param_2 >> 8) +
           (0xfffffffebd073967 < uVar11);
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      piVar13 = (int *)(&UNK_142f8c625 + uVar11);
      *piVar13 = *piVar13 + 0x42f8c698;
      if (*piVar13 < 0) goto code_r0x000140648263;
      out(0xff,(int)puVar12);
      goto code_r0x00014064826f;
    case 0x15:
      puStack_250 = unaff_RDI;
      if (-0x142f8c699 < (longlong)uVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    case 0x6b:
      if ((int)param_2 == 1) {
code_r0x000140648730:
        uVar10 = (int)param_3 - 4;
        puVar12 = (uint *)(ulonglong)uVar10;
        if (uVar10 < 0xe4) {
code_r0x00014064873f:
          param_2 = (uint *)&UNK_142f8c6ec;
code_r0x000140648746:
                    /* WARNING: Could not recover jumptable at 0x00014064874d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar16 = (uint *)(*(code *)((longlong)(int)param_2[(longlong)puVar12] + (longlong)param_2
                                      ))();
          return puVar16;
        }
      }
      goto LAB_140648c50;
    case 0x16:
      goto code_r0x00014064894d;
    case 0x17:
      goto code_r0x00014064896e;
    case 0x18:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x19:
      goto code_r0x000140648942;
    case 0x1a:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x1b:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x1c:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x1d:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x1e:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x1f:
      goto code_r0x000140648979;
    case 0x20:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x21:
      goto code_r0x0001406489fd;
    case 0x22:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x23:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x24:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x25:
      goto code_r0x000140648887;
    case 0x26:
      goto code_r0x000140648984;
    case 0x27:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
code_r0x000140648a8e:
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x28:
      goto code_r0x0001406488b3;
    case 0x29:
      goto code_r0x000140648963;
    case 0x2a:
      goto code_r0x0001406488ea;
    case 0x2b:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x2c:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x2d:
      goto code_r0x000140648845;
    case 0x2e:
      goto code_r0x000140648824;
    case 0x2f:
      goto code_r0x0001406488df;
    case 0x30:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x31:
      goto code_r0x0001406489f2;
    case 0x32:
      goto code_r0x00014064892c;
    case 0x33:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x34:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x35:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x36:
      goto code_r0x000140648aaa;
    case 0x37:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x38:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x39:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x3a:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x3b:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x3c:
      goto code_r0x000140648958;
    case 0x3d:
      goto code_r0x000140648a3f;
    case 0x3e:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x3f:
      goto code_r0x00014064885b;
    case 0x40:
      goto code_r0x00014064899a;
    case 0x41:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x42:
      goto code_r0x000140648aba;
    default:
      (&UNK_142f8c623)[uVar11] = (&UNK_142f8c623)[uVar11] + 'h';
      goto code_r0x000140648bcd;
    case 0x44:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x45:
      goto code_r0x0001406487f8;
    case 0x46:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x47:
      goto code_r0x000140648ae2;
    case 0x48:
      goto code_r0x000140648aa2;
    case 0x49:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x4a:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x4b:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x4c:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x4d:
      goto code_r0x000140648a81;
    case 0x4e:
      goto code_r0x000140648a60;
    case 0x4f:
      goto code_r0x000140648769;
    case 0x50:
      goto code_r0x000140648ac2;
    case 0x51:
      goto code_r0x000140648aea;
    case 0x52:
      goto code_r0x000140648a4a;
    case 0x53:
      goto code_r0x000140648a55;
    case 0x54:
      goto code_r0x000140648866;
    case 0x55:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x56:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x57:
      goto code_r0x000140648ab2;
    case 0x58:
      goto code_r0x000140648ad2;
    case 0x59:
      goto code_r0x000140648900;
    case 0x5a:
      goto code_r0x000140648af2;
    case 0x5b:
code_r0x000140648a76:
      *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
      goto code_r0x000140648a6e;
    case 0x5c:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x5d:
      goto code_r0x000140648850;
    case 0x5e:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x5f:
    case 0x78:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x60:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x61:
      goto code_r0x000140648b0a;
    case 0x62:
      goto code_r0x00014064875e;
    case 99:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x65:
code_r0x000140648732:
      goto code_r0x000140648730;
    case 0x66:
      puVar12 = (uint *)CONCAT71((int7)((ulonglong)puVar12 >> 8),cVar19 + -0x7e);
      goto code_r0x000140648746;
    case 0x67:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x68:
      goto code_r0x0001406489bb;
    case 0x69:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x6a:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x6c:
      goto code_r0x000140648ada;
    case 0x6d:
      goto code_r0x000140648871;
    case 0x6e:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x6f:
      goto code_r0x000140648a1e;
    case 0x70:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      goto code_r0x00014064873f;
    case 0x71:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x72:
      pcVar4 = (code *)swi(3);
      puVar16 = (uint *)(*pcVar4)();
      return puVar16;
    case 0x73:
      goto code_r0x000140648753;
    case 0x74:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0x75:
      goto code_r0x000140648711;
    case 0xf1:
      goto code_r0x000140648b02;
    case 0xf2:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0xf3:
      goto code_r0x000140648aca;
    case 0xf4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf5:
      goto code_r0x000140648b12;
    case 0xf6:
      goto code_r0x00014064889d;
    case 0xf7:
      goto code_r0x000140648afa;
    case 0xf8:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0xf9:
      puVar12 = (uint *)0x21;
      ppuVar38 = (uint **)&puStack_248;
      break;
    case 0xfa:
      goto code_r0x000140648a53;
    case 0xfb:
    case 0xfc:
    case 0xfd:
    case 0xff:
      UNK_142f8c650 = UNK_142f8c650 + cVar19;
      goto code_r0x00014064886f;
    case 0xfe:
      *(byte *)puVar12 = (byte)*puVar12 + cVar19;
      in_RCX = (uint *)&UNK_142f8c65e;
      uVar10 = (int)puVar12 - _UNK_142f8c65e;
      puVar12 = (uint *)(ulonglong)uVar10;
      *(byte *)puVar12 = (byte)*puVar12 + (char)uVar10;
      param_3 = (int *)0x20;
      ppuVar38 = (uint **)&puStack_248;
    }
    break;
  case 8:
    param_13 = unaff_R15;
    goto code_r0x000140648154;
  case 9:
    uVar8 = in((short)param_2);
    *(byte *)(param_4 + -0x12) = (byte)param_4[-0x12] + (char)((uint)uVar8 >> 8);
code_r0x000140648164:
    uStack_f6 = 3;
    goto code_r0x000140648186;
  case 10:
    (&UNK_142f8c689)[uVar11] = (&UNK_142f8c689)[uVar11] & 0x80;
    ppuVar38 = &puStack_250;
    puStack_250 = puVar16;
    cVar19 = '\x15';
    do {
      puVar16 = puVar16 + -2;
      ppuVar38 = ppuVar38 + -1;
      *ppuVar38 = (uint *)*(undefined8 *)puVar16;
      cVar19 = cVar19 + -1;
    } while ('\0' < cVar19);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
code_r0x00014064816a:
    uStack_f6 = 2;
    goto code_r0x000140648186;
  case 0xc:
  case 0x1a:
code_r0x000140647a6e:
    uVar8 = SUB84(puVar23,0);
    if ((int)unaff_R14 != (int)puVar12) {
      return puVar12;
    }
    puVar16 = (uint *)(ulonglong)(puStack_90[3] - 4);
    if (0xe < puStack_90[3] - 4) {
      return puVar16;
    }
    puVar12 = (uint *)(&UNK_142f8c6b0 + *(int *)(&UNK_142f8c6b0 + (longlong)puVar16 * 4));
    switch(puVar16) {
    case (uint *)0x0:
    case (uint *)0xe:
      bStack_81 = 1;
      puStack_250 = (uint *)0x140647ab3;
      pdb_1406d1630(&uStack_f8,unaff_RBX);
      uVar11 = CONCAT44(fStack_f4,CONCAT22(uStack_f6,CONCAT11(uStack_f7,uStack_f8)));
      puVar16 = (uint *)-uVar11;
      if (SBORROW8(0,uVar11)) {
        unaff_RBX = (uint *)(ulonglong)(uint)(float)uStack_f0;
        fVar41 = *unaff_R15;
        fVar42 = unaff_R15[1];
        if ((SUB41(fVar41,0) & (float)uStack_f0 == fVar42) != 0) {
          return (uint *)CONCAT71((int7)((ulonglong)puVar16 >> 8),(float)uStack_f0 == fVar42);
        }
        bStack_81 = 1;
        puStack_250 = (uint *)0x140647af9;
        pdb_1404880a0(&uStack_1a8,unaff_RDI,(float)uStack_f0);
        uStack_98 = (uint *)CONCAT44(uStack_98._4_4_,1);
      }
      else {
        if (uVar11 != 0) {
          puStack_250 = (uint *)0x14064831c;
          pub_1406abac0((byte *)CONCAT44(uStack_f0._4_4_,(float)uStack_f0),uVar11,1);
          puVar16 = extraout_RAX;
        }
        if (((uint)*unaff_R15 & 1) == 0) {
          return puVar16;
        }
        fVar42 = unaff_R15[1];
        uStack_1a8 = 0x8000000000000001;
        uStack_98 = (uint *)((ulonglong)uStack_98._4_4_ << 0x20);
        fVar41 = 1.4013e-45;
      }
      uStack_f0._0_4_ = (float)uStack_1a8;
      uStack_f0._4_4_ = (uint)((ulonglong)uStack_1a8 >> 0x20);
      uStack_f8 = 1;
      bStack_81 = 1;
      puStack_250 = (uint *)0x140648395;
      pdb_140558a30(&uStack_150,param_4,&uStack_f8);
      if ((char)uStack_150 == '\x10') {
        bStack_81 = 1;
        puStack_250 = (uint *)0x1406483b3;
        pdb_140648e50(&uStack_1a8,unaff_RDI);
        uStack_e0 = uStack_198;
        uStack_f0._0_4_ = (float)uStack_1a8;
        uStack_f0._4_4_ = uStack_1a8._4_4_;
        uStack_e8._0_4_ = uStack_1a0;
        uStack_e8._4_4_ = fStack_19c;
        uStack_f8 = 0xe;
        bStack_81 = 1;
        puStack_250 = (uint *)0x1406483eb;
        pdb_140558a30(&uStack_150,param_4,&uStack_f8);
        if ((char)uStack_150 == '\x10') {
          if (((uint)(float)uStack_98 & (uint)fVar41) == 0) {
code_r0x000140648566:
            *unaff_R15 = (float)uStack_98;
            unaff_R15[1] = SUB84(unaff_RBX,0);
            return (uint *)((ulonglong)uStack_98 & 0xffffffff);
          }
          bStack_81 = 1;
          puStack_250 = (uint *)0x14064841c;
          pdb_1406d1330(&uStack_f8,unaff_RDI,fVar42);
          uVar11 = CONCAT44(fStack_f4,CONCAT22(uStack_f6,CONCAT11(uStack_f7,uStack_f8)));
          fVar42 = uStack_e8._4_4_;
          if ((!SBORROW8(0,uVar11)) && (fVar42 = fVar41, uVar11 != 0)) {
            puStack_250 = (uint *)0x140648447;
            pub_1406abac0((byte *)CONCAT44(uStack_f0._4_4_,(float)uStack_f0),uVar11,1);
          }
          bStack_81 = 1;
          puStack_250 = (uint *)0x140648505;
          pdb_1406d1330(&uStack_f8,unaff_RDI,(ulonglong)unaff_RBX & 0xffffffff);
          arg1 = CONCAT44(fStack_f4,CONCAT22(uStack_f6,CONCAT11(uStack_f7,uStack_f8)));
          if (SBORROW8(0,arg1)) {
            if ((SBORROW8(0,uVar11)) && (fVar42 == uStack_e8._4_4_)) goto code_r0x000140648566;
          }
          else {
            if (arg1 != 0) {
              puStack_250 = (uint *)0x140648539;
              pub_1406abac0((byte *)CONCAT44(uStack_f0._4_4_,(float)uStack_f0),arg1,1);
            }
            if (!SBORROW8(0,uVar11)) goto code_r0x000140648566;
          }
          uStack_f8 = 2;
          bStack_81 = 1;
          puStack_250 = (uint *)0x14064855f;
          pdb_140558a30(&uStack_150,param_4,&uStack_f8);
          if ((char)uStack_150 == '\x10') goto code_r0x000140648566;
          bStack_81 = 1;
          puStack_250 = (uint *)0x140648588;
          puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
        }
        else {
          bStack_81 = 1;
          puStack_250 = (uint *)0x1406484df;
          puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
        }
      }
      else {
        bStack_81 = 1;
        puStack_250 = (uint *)0x1406484c9;
        puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
      }
      break;
    case (uint *)0x1:
    case (uint *)0x2:
      bStack_81 = 1;
      puStack_250 = (uint *)0x140648048;
      uVar7 = pdb_1406d1900(unaff_RBX);
      bStack_81 = 1;
      puStack_250 = (uint *)0x14064805d;
      uVar22 = uVar8;
      uStack_f0._4_4_ = pdb_1406d18a0(unaff_RBX);
      uStack_f8 = 0;
      bStack_81 = 1;
      puStack_250 = (uint *)0x140648098;
      fStack_f4 = (float)uVar7;
      uStack_f0._0_4_ = (float)uVar8;
      uStack_e8._0_4_ = uVar22;
      puVar16 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
      if ((char)uStack_150 == '\x10') {
        return puVar16;
      }
      bStack_81 = 1;
      puStack_250 = (uint *)0x1406480b3;
      puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
      break;
    default:
      goto code_r0x00014064821b;
    case (uint *)0x8:
      uStack_f8 = 6;
      uStack_f7 = 1;
      bStack_81 = 1;
      puStack_250 = (uint *)0x1406482e7;
      puVar16 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
      if ((char)uStack_150 == '\x10') {
        return puVar16;
      }
      bStack_81 = 1;
      puStack_250 = (uint *)0x140648302;
      puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
      break;
    case (uint *)0x9:
      uStack_f8 = 6;
      uStack_f7 = 0;
      bStack_81 = 1;
      in_RCX = (uint *)&uStack_150;
code_r0x000140648263:
      puStack_250 = (uint *)0x140648268;
      puVar12 = (uint *)pdb_140558a30(in_RCX);
code_r0x000140648269:
      if ((char)uStack_150 == '\x10') {
        return puVar12;
      }
code_r0x00014064826f:
      bStack_81 = 1;
      puStack_250 = (uint *)0x14064827f;
      puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
      break;
    case (uint *)0xa:
      uStack_f8 = 3;
      bStack_81 = 1;
      in_RCX = (uint *)&uStack_150;
      goto code_r0x000140648294;
    }
    goto code_r0x000140648216;
  case 0xd:
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x17:
  case 0x18:
  case 0x19:
    goto code_r0x0001406481eb;
  case 0x14:
code_r0x000140648294:
    puStack_250 = (uint *)0x1406482a3;
    puVar16 = (uint *)pdb_140558a30(in_RCX,param_4,&uStack_f8);
    uVar45 = (char)uStack_150 == '\x10';
    goto code_r0x0001406482a8;
  case 0x15:
    goto code_r0x000140648216;
  case 0x16:
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    piVar13 = (int *)(&UNK_142f8c60d + uVar11);
    *piVar13 = *piVar13 + 0x42f8c680;
    uVar45 = *piVar13 == 0;
    if (-1 < *piVar13) goto code_r0x000140648263;
    puStack_250 = (uint *)0x1406482a8;
    puVar16 = (uint *)(**(code **)(uVar11 + 0x153714400))();
code_r0x0001406482a8:
    if ((bool)uVar45) {
      return puVar16;
    }
    bStack_81 = 1;
    puStack_250 = (uint *)0x1406482be;
    puVar12 = (uint *)pdb_1404c7c30(&uStack_150);
    goto code_r0x000140648216;
  case 0x1b:
code_r0x0001406486e3:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x0001406486de:
    puStack_250 = (uint *)0x1406486f4;
    pub_1406abac0(*(byte **)(puStack_90 + 6),(ulonglong)param_2,1);
    puVar12 = extraout_RAX_00;
  case 0x7b:
code_r0x0001406486f9:
code_r0x000140648704:
code_r0x00014064870f:
code_r0x000140648711:
    return puVar12;
  case 0x1c:
code_r0x000140648935:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1d:
code_r0x000140648956:
code_r0x000140648958:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x1e:
code_r0x00014064891f:
    uVar10 = (uint)puVar12 ^ 0xe9000000;
    puStack_250 = (uint *)&puStack_248;
    cVar19 = (char)puVar12 + *(char *)(ulonglong)uVar10;
    puVar12 = (uint *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),cVar19);
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + cVar19;
    ppuVar32 = &puStack_250;
  case 0x1f:
code_r0x00014064892a:
    puVar12 = (uint *)(ulonglong)((int)puVar12 - *puVar12);
    ppuVar33 = (undefined1 **)ppuVar32;
code_r0x00014064892c:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)ppuVar33;
    break;
  case 0x20:
code_r0x0001406488dd:
    puVar12 = (uint *)((ulonglong)puVar12 & 0xffffffffffffff00);
code_r0x0001406488df:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x21:
    goto code_r0x0001406488fe;
  case 0x22:
code_r0x000140648890:
    uVar10 = LocalDescriptorTableRegister();
    *puVar12 = uVar10;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    if (in_RCX != (uint *)0x0) {
      *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    }
    param_3 = (int *)0x2c;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x23:
code_r0x0001406488f3:
    bVar5 = (byte)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar5;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    *(byte *)param_2 = (byte)*param_2;
    puVar16 = in_RCX + -0x12;
    bVar43 = CARRY1((byte)*puVar16,bVar5);
    *(byte *)puVar16 = (byte)*puVar16 + bVar5;
code_r0x0001406488fe:
    puVar12 = (uint *)(ulonglong)(((int)puVar12 - *puVar12) - (uint)bVar43);
code_r0x000140648900:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x24:
code_r0x000140648977:
    *(byte *)puVar12 = (byte)*puVar12 | (byte)puVar12;
code_r0x000140648979:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x25:
code_r0x000140648961:
    puVar12 = (uint *)CONCAT71((int7)((ulonglong)puVar12 >> 8),(char)puVar12 - bVar43);
code_r0x000140648963:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x26:
    goto code_r0x0001406488a6;
  case 0x27:
    goto code_r0x0001406489e5;
  case 0x28:
code_r0x0001406489f0:
    puVar12 = (uint *)(ulonglong)((int)puVar12 + *puVar12);
code_r0x0001406489f2:
    bVar43 = CARRY1((byte)*puVar12,(byte)puVar12);
    *(byte *)puVar12 = (byte)*puVar12 + (byte)puVar12;
    goto code_r0x0001406489e5;
  case 0x29:
code_r0x000140648a53:
    *(byte *)puVar12 = (byte)*puVar12 & (byte)puVar12;
code_r0x000140648a55:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x2a:
    goto code_r0x000140648a11;
  case 0x2b:
code_r0x00014064886f:
code_r0x000140648871:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x2c:
code_r0x00014064896c:
    puVar12 = (uint *)CONCAT71((int7)((ulonglong)puVar12 >> 8),
                               ((char)puVar12 - (byte)*puVar12) - bVar43);
code_r0x00014064896e:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x2d:
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    in_RCX = (uint *)&UNK_142f8c646;
    *puVar12 = *puVar12 + 1;
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    param_3 = (int *)0x23;
    ppuVar38 = (uint **)auStack_240;
    break;
  case 0x2e:
code_r0x00014064889b:
code_r0x00014064889d:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x2f:
code_r0x00014064894b:
    *puVar12 = (*puVar12 - (int)puVar12) - (uint)bVar43;
code_r0x00014064894d:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x30:
    goto code_r0x0001406488d2;
  case 0x31:
code_r0x0001406489cf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x32:
code_r0x0001406488bc:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    param_3 = (int *)0x59;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x33:
code_r0x00014064882d:
    puStack_250 = param_4;
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + (char)puVar12;
    ppuVar28 = &puStack_250;
  case 99:
code_r0x000140648838:
    puVar12 = (uint *)(ulonglong)uRam0000033be9000000;
    param_3 = (int *)0x32;
    ppuVar38 = ppuVar28;
    break;
  case 0x34:
code_r0x00014064880c:
    *(byte *)(in_FS_OFFSET + (longlong)puVar12) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar12) + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    uVar10 = (int)puVar12 + *(int *)(longlong)(int)puVar12;
    puVar12 = (uint *)(ulonglong)uVar10;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + (char)uVar10;
  case 0x3f:
code_r0x000140648817:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    uVar10 = (int)puVar12 + *puVar12;
    puVar12 = (uint *)(ulonglong)uVar10;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + (char)uVar10;
    ppuVar26 = (undefined1 **)puStack_248;
code_r0x000140648822:
    *puVar12 = *puVar12 + (int)puVar12;
    ppuVar27 = ppuVar26;
code_r0x000140648824:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)ppuVar27;
    break;
  case 0x35:
code_r0x0001406488c7:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)puStack_248 >> 8),
                              (char)puStack_248 + (char)((ulonglong)puStack_248 >> 8));
    uVar18 = (undefined7)((ulonglong)puVar12 >> 8);
    cVar19 = (byte)*param_4 + *(char *)CONCAT71(uVar18,(byte)*param_4);
    puVar12 = (uint *)CONCAT71(uVar18,cVar19);
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + cVar19;
    ppuVar29 = (undefined1 **)auStack_240;
    param_4 = (uint *)((longlong)param_4 + 1);
code_r0x0001406488d2:
    *(uint **)((longlong)ppuVar29 + -8) = unaff_RBX;
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8) * '\x02');
    pcVar14 = (char *)((ulonglong)param_4 & 0xffffffff);
    cVar19 = (char)pcVar14 + *pcVar14;
    puVar12 = (uint *)CONCAT71((int7)((ulonglong)pcVar14 >> 8),cVar19);
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + cVar19;
    ppuVar30 = (undefined1 **)((longlong)ppuVar29 + -8);
code_r0x0001406488e8:
    ppuVar31 = ppuVar30;
code_r0x0001406488ea:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)ppuVar31;
    break;
  case 0x36:
code_r0x000140648909:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x37:
code_r0x0001406489da:
    uVar10 = (uint)puVar12 & 0xe9000000;
    puVar12 = (uint *)(ulonglong)uVar10;
    *puVar12 = *puVar12 + uVar10;
    bVar43 = false;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12];
code_r0x0001406489e5:
    uVar10 = ((int)puVar12 + 0x17000000) - (uint)bVar43;
    puVar12 = (uint *)(ulonglong)uVar10;
    *(byte *)puVar12 = (byte)*puVar12 + (char)uVar10;
    param_3 = (int *)0x3;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x38:
code_r0x000140648914:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x39:
    goto code_r0x0001406487eb;
  case 0x3a:
code_r0x00014064887a:
    uVar10 = (int)puVar12 + 0x17000000;
    cVar19 = (char)uVar10 + *(char *)(ulonglong)uVar10;
    puVar12 = (uint *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),cVar19);
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + cVar19;
  case 0xfc:
code_r0x000140648885:
code_r0x000140648887:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x3b:
code_r0x0001406489fb:
    *puVar12 = *puVar12 ^ (uint)puVar12;
code_r0x0001406489fd:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x3c:
    UNK_142f8c638 = UNK_142f8c638 + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3d:
    goto code_r0x000140648822;
  case 0x3e:
code_r0x0001406489b9:
    *(byte *)puVar12 = (byte)*puVar12 - (char)puVar12;
code_r0x0001406489bb:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x40:
code_r0x0001406487f6:
code_r0x0001406487f8:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    goto code_r0x0001406487eb;
  case 0x41:
code_r0x0001406488b1:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12 + bVar43;
code_r0x0001406488b3:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x0001406488a6:
    *(char *)param_3 = (char)*param_3 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    pcVar4 = (code *)swi(2);
    puVar12 = (uint *)(*pcVar4)();
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    param_3 = (int *)0x10;
    ppuVar38 = (uint **)auStack_240;
    param_1 = extraout_XMM0_Da_01;
    break;
  case 0x42:
code_r0x000140648940:
    *puVar12 = *puVar12 - (int)puVar12;
code_r0x000140648942:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x43:
code_r0x000140648a27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x44:
code_r0x0001406487a9:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    return puVar12;
  case 0x45:
code_r0x000140648843:
    puVar12 = (uint *)CONCAT71((int7)((ulonglong)puVar12 >> 8),(byte)puVar12 ^ (byte)*puVar12);
code_r0x000140648845:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar28 = (uint **)&puStack_248;
    goto code_r0x000140648838;
  case 0x46:
code_r0x000140648982:
    puVar12 = (uint *)CONCAT71((int7)((ulonglong)puVar12 >> 8),(byte)puVar12 | (byte)*puVar12);
code_r0x000140648984:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x47:
code_r0x0001406489ae:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x48:
code_r0x000140648aa2:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    goto code_r0x000140648a9e;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4a:
code_r0x00014064898d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4b:
    goto code_r0x0001406487e0;
  case 0x4c:
code_r0x0001406487b4:
    puStack_250 = puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    puVar12 = (uint *)0xa4;
    ppuVar38 = &puStack_250;
    break;
  case 0x4d:
    goto code_r0x000140648aca;
  case 0x4e:
    puVar12 = (uint *)CONCAT71(uVar18,uRam000000e9e9000000);
    param_3 = (int *)0x3f;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x4f:
code_r0x0001406487d5:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    uVar10 = (int)puVar12 + *puVar12;
    puVar12 = (uint *)(ulonglong)uVar10;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + (char)uVar10;
code_r0x0001406487e0:
    *(char *)param_3 = (char)*param_3 + (char)param_3;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    puVar16 = (uint *)((ulonglong)puVar12 & 0xffffffff);
    uVar10 = (int)unaff_RBX + *(int *)((ulonglong)unaff_RBX & 0xffffffff);
    puVar12 = (uint *)(ulonglong)uVar10;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + (char)uVar10;
    unaff_RBX = puVar16;
code_r0x0001406487eb:
    bVar5 = (byte)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar5;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    *(byte *)unaff_RBX = bVar5;
    *(byte *)puVar12 = (byte)*puVar12 + bVar5;
    param_3 = (int *)0x3c;
    ppuVar38 = (uint **)auStack_240;
    break;
  case 0x50:
code_r0x0001406489c4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
code_r0x000140648a1c:
code_r0x000140648a1e:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x52:
code_r0x0001406487ca:
    *unaff_RDI = (uint)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    puVar12 = (uint *)0x66;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x53:
code_r0x000140648a69:
    puVar12 = (uint *)(ulonglong)((uint)puVar12 | 0xe9000000);
code_r0x000140648a6e:
    bVar5 = (byte)puVar12 | (byte)*in_RCX;
    puVar12 = (uint *)CONCAT71((int7)((ulonglong)puVar12 >> 8),bVar5);
    *(byte *)puVar12 = (byte)*puVar12 + bVar5;
    param_3 = (int *)0x5b;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x54:
    goto code_r0x000140648a48;
  case 0x55:
code_r0x000140648751:
    puVar12 = (uint *)CONCAT71((int7)((ulonglong)puVar12 >> 8),(char)puVar12 + bVar43);
code_r0x000140648753:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x56:
code_r0x000140648aaa:
    puVar12 = (uint *)0xa8;
    break;
  case 0x57:
code_r0x000140648ad2:
    cRam0000009ce9000000 = (char)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + cRam0000009ce9000000;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + cRam0000009ce9000000;
    param_3 = (int *)0x26;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x58:
code_r0x000140648a32:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    *param_3 = *param_3 + (int)puVar12;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + (char)puVar12;
  case 0x59:
code_r0x000140648a3d:
    puVar12 = (uint *)CONCAT71((int7)((ulonglong)puVar12 >> 8),(char)puVar12 - (byte)*puVar12);
code_r0x000140648a3f:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x5a:
code_r0x00014064884e:
    *(byte *)puVar12 = (byte)*puVar12 ^ (byte)puVar12;
code_r0x000140648850:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x5b:
    puVar12 = (uint *)(ulonglong)((uint)puVar12 & *puVar12);
code_r0x000140648a81:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x5c:
code_r0x00014064875e:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x5d:
code_r0x000140648a9a:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x000140648a9e:
    param_3 = (int *)0xa7;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x5e:
    goto code_r0x000140648aba;
  case 0x5f:
    goto code_r0x0001406488e8;
  case 0x60:
code_r0x000140648ada:
    bVar5 = (byte)in_RCX;
    bVar21 = (byte)((ulonglong)in_RCX >> 8);
    cVar19 = bVar5 + bVar21;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),cVar19);
    ppuVar35 = &puStack_250;
    puStack_250 = (uint *)((ulonglong)(in_NT & 1) * 0x4000 |
                           (ulonglong)SCARRY1(bVar5,bVar21) * 0x800 | (ulonglong)(in_IF & 1) * 0x200
                           | (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)(cVar19 < '\0') * 0x80 |
                           (ulonglong)(cVar19 == '\0') * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
                           (ulonglong)((POPCOUNT(cVar19) & 1U) == 0) * 4 |
                           (ulonglong)CARRY1(bVar5,bVar21) | (ulonglong)(in_ID & 1) * 0x200000 |
                           (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
                          (ulonglong)(in_AC & 1) * 0x40000);
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + (char)puVar12;
  case 0xfd:
code_r0x000140648ae2:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    puVar15 = (uint *)(CONCAT71((int7)((ulonglong)in_RCX >> 8),
                                (char)in_RCX + (char)((ulonglong)in_RCX >> 8)) & 0xffffffff);
    in_RCX = (uint *)((ulonglong)puVar12 & 0xffffffff);
    *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
    ppuVar36 = (undefined1 **)ppuVar35;
code_r0x000140648aea:
    bVar5 = (byte)puVar15;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + bVar5;
    *(byte *)unaff_RDI = bVar5;
    *(byte *)puVar15 = (byte)*puVar15 + bVar5;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    ppuVar37 = ppuVar36;
code_r0x000140648af2:
    LOCK();
    uVar10 = *puVar15;
    *(byte *)puVar15 = (byte)puVar15;
    puVar12 = (uint *)CONCAT71((int7)((ulonglong)puVar15 >> 8),(byte)uVar10);
    UNLOCK();
    *(byte *)puVar12 = (byte)*puVar12 + (byte)uVar10;
    param_3 = (int *)0x2f;
    ppuVar38 = (uint **)ppuVar37;
    break;
  case 0x61:
code_r0x000140648a5e:
    *puVar12 = *puVar12 & (uint)puVar12;
code_r0x000140648a60:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x62:
code_r0x000140648772:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    *(int *)((longlong)puVar12 * 2) = *(int *)((longlong)puVar12 * 2) + (int)puVar12;
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + (char)puVar12;
    ppuVar24 = (undefined1 **)auStack_240;
  case 0x74:
code_r0x00014064877d:
    *(uint **)((longlong)ppuVar24 + -8) = unaff_RDI;
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    *(byte *)(in_RCX + -0x12) = (byte)in_RCX[-0x12] + (char)puVar12;
    ppuVar25 = (undefined1 **)((longlong)ppuVar24 + -8);
code_r0x000140648788:
    *(byte *)(unaff_GS_OFFSET + (longlong)puVar12) =
         *(byte *)(unaff_GS_OFFSET + (longlong)puVar12) + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    puVar12 = (uint *)0x5c;
    ppuVar38 = (uint **)ppuVar25;
    break;
  case 100:
code_r0x000140648998:
    *(byte *)puVar12 = ((byte)*puVar12 - (char)puVar12) - bVar43;
code_r0x00014064899a:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x65:
  case 0x7e:
    puVar12 = (uint *)CONCAT71(uVar18,cVar19 + (byte)*puVar12);
code_r0x000140648b12:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x66:
code_r0x000140648793:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    cVar19 = (char)in_RCX + (char)((ulonglong)in_RCX >> 8);
    in_RCX = (uint *)(CONCAT71((int7)((ulonglong)in_RCX >> 8),cVar19) + -1);
    ppuVar38 = (uint **)puStack_248;
    if (in_RCX == (uint *)0x0 || cVar19 == '\0') {
      *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
      param_3 = (int *)0x6e;
    }
    else {
      puVar12 = (uint *)0x6e;
    }
    break;
  case 0x67:
    goto code_r0x000140648af2;
  case 0x68:
    goto code_r0x000140648746;
  case 0x69:
code_r0x000140648864:
code_r0x000140648866:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x6b:
code_r0x00014064871a:
    pcVar4 = (code *)swi(3);
    puVar16 = (uint *)(*pcVar4)();
    return puVar16;
  case 0x6c:
    goto code_r0x000140648730;
  case 0x6d:
code_r0x000140648801:
    puStack_250 = param_2;
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    bVar5 = (byte)in_RCX;
    bVar21 = (byte)((ulonglong)in_RCX >> 8);
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),bVar5 + bVar21);
    if (CARRY1(bVar5,bVar21)) {
      puVar12 = (uint *)0x64;
      ppuVar38 = &puStack_250;
    }
    else {
      *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
      param_3 = (int *)0x64;
      ppuVar38 = &puStack_250;
    }
    break;
  case 0x6e:
code_r0x0001406489a3:
    uVar10 = (int)puVar12 + -0x17000000 + (uint)bVar43;
    puVar12 = (uint *)(ulonglong)uVar10;
    *(byte *)in_RCX = (byte)*in_RCX << 1 | (char)(byte)*in_RCX < '\0';
    *(byte *)puVar12 = (byte)*puVar12 + (char)uVar10;
    param_3 = (int *)0x40;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x6f:
code_r0x000140648767:
    *puVar12 = *puVar12 + (int)puVar12 + (uint)bVar43;
code_r0x000140648769:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x70:
code_r0x0001406487bf:
    *(byte *)unaff_RDI = (byte)*param_4;
    cVar19 = (char)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    puVar12 = (uint *)CONCAT62((int6)((ulonglong)puVar12 >> 0x10),CONCAT11(3,cVar19));
    *(byte *)puVar12 = (byte)*puVar12 + cVar19;
    param_3 = (int *)0xab;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x71:
    goto code_r0x00014064870f;
  case 0x72:
code_r0x000140648ac2:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
code_r0x000140648ac6:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x000140648aca:
    param_3 = (int *)0x4c;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x73:
    puVar12 = (uint *)(ulonglong)((uint)puVar12 | *puVar12);
code_r0x00014064885b:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x75:
code_r0x000140648a06:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    uVar10 = in((short)param_2);
    *unaff_RDI = uVar10;
    *puVar12 = *puVar12 + (int)puVar12;
    pcVar14 = (char *)(CONCAT71((int7)((ulonglong)in_RCX >> 8),
                                (char)in_RCX + (char)((ulonglong)in_RCX >> 8)) + -0x48);
    *pcVar14 = *pcVar14 + (char)puVar12;
code_r0x000140648a11:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x76:
code_r0x000140648725:
    cVar19 = in((short)param_2);
    if (!bVar46) {
      *unaff_RDI = *unaff_RDI + (int)in_RCX;
      goto code_r0x000140648732;
    }
    ((byte *)((longlong)unaff_RDI + 0x29))[(longlong)in_RCX] =
         ((byte *)((longlong)unaff_RDI + 0x29))[(longlong)in_RCX] + cVar19;
    puVar12 = (uint *)(CONCAT71((int7)((ulonglong)puVar12 >> 8),cVar19) & 0xffffffffffffff30);
code_r0x0001406486b7:
    if ((bStack_84 == 5) && ((bStack_81 & 1) != 0)) {
code_r0x0001406486cd:
      param_2 = *(uint **)(puStack_90 + 4);
      puVar12 = puStack_90;
      if (param_2 != (uint *)0x0) goto code_r0x0001406486de;
    }
    goto code_r0x0001406486f9;
  case 0x77:
code_r0x000140648b02:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0x78:
    goto code_r0x000140648704;
  case 0x79:
code_r0x00014064873b:
    uVar9 = (uint)puVar12;
    bVar44 = CARRY4(uRam00000000cdac8741,uVar9);
    uVar10 = uRam00000000cdac8741 + uVar9;
    uRam00000000cdac8741 = uVar10 + bVar43;
    puVar12 = (uint *)(ulonglong)(uVar9 + 0x2943fa6 + (uint)(bVar44 || CARRY4(uVar10,(uint)bVar43)))
    ;
    goto code_r0x000140648746;
  case 0x7a:
code_r0x00014064879e:
    out((byte)*param_4,(short)param_2);
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf7:
    goto code_r0x000140648aea;
  case 0xf8:
code_r0x000140648b0a:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0xf9:
code_r0x000140648ab2:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
code_r0x000140648aae:
    in_RCX = (uint *)CONCAT71((int7)((ulonglong)in_RCX >> 8),
                              (char)in_RCX + (char)((ulonglong)in_RCX >> 8));
    puStack_250 = puVar16;
    param_3 = (int *)0xa3;
    ppuVar34 = &puStack_250;
code_r0x000140648aba:
    ppuVar38 = ppuVar34;
    break;
  case 0xfa:
code_r0x0001406486ee:
    pcVar4 = (code *)swi(3);
    puVar16 = (uint *)(*pcVar4)();
    return puVar16;
  case 0xfb:
code_r0x000140648afa:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
    break;
  case 0xfe:
    goto code_r0x000140648788;
  case 0xff:
    UNK_142f8c638 = UNK_142f8c638 + cVar19;
code_r0x000140648a48:
    *puVar12 = *puVar12 | (uint)puVar12;
code_r0x000140648a4a:
    *(byte *)puVar12 = (byte)*puVar12 + (char)puVar12;
    ppuVar38 = (uint **)&puStack_248;
  }
code_r0x000140648b7c:
  uVar9 = (uint)param_3;
  if ((int)puVar40 == 1) {
    uVar10 = *(uint *)((longlong)ppuVar38 + 0xb0);
    if (uVar10 + 0xbfffffc7 < 0xda) {
      puVar12 = (uint *)(&UNK_142f8cc5c +
                        *(int *)(&UNK_142f8cc5c + (ulonglong)(uVar10 + 0xbfffffc7) * 4));
      ppuVar39 = (undefined1 **)ppuVar38;
      switch(uVar10) {
      case 0x40000039:
        uVar10 = 5;
        break;
      case 0x4000003a:
        uVar10 = 0x112;
        break;
      case 0x4000003b:
        uVar10 = 0x113;
        break;
      case 0x4000003c:
        uVar10 = 0x114;
        break;
      case 0x4000003d:
        uVar10 = 0x115;
        break;
      case 0x4000003e:
        uVar10 = 0x116;
        break;
      case 0x4000003f:
        uVar10 = 0x117;
        break;
      case 0x40000040:
        uVar10 = 0x118;
        break;
      case 0x40000041:
        uVar10 = 0x119;
        break;
      case 0x40000042:
        uVar10 = 0x11a;
        break;
      case 0x40000043:
        uVar10 = 0x11b;
        break;
      case 0x40000044:
        uVar10 = 0x11c;
        break;
      case 0x40000045:
        uVar10 = 0x11d;
        break;
      case 0x40000046:
        uVar10 = 0x3d;
        break;
      case 0x40000047:
        uVar10 = 10;
        break;
      case 0x40000048:
        uVar10 = 0x31;
        break;
      case 0x40000049:
        uVar10 = 0x24;
        break;
      case 0x4000004a:
        uVar10 = 0x19;
        break;
      case 0x4000004b:
        uVar10 = 0x1b;
        break;
      default:
        goto LAB_140648c50;
      case 0x4000004d:
        uVar10 = 0x18;
        break;
      case 0x4000004e:
        uVar10 = 0x1a;
        break;
      case 0x4000004f:
        uVar10 = 0x16;
        break;
      case 0x40000050:
        uVar10 = 0x15;
        break;
      case 0x40000051:
        uVar10 = 0x14;
        break;
      case 0x40000052:
        uVar10 = 0x17;
        break;
      case 0x40000053:
        uVar10 = 9;
        break;
      case 0x40000054:
      case 0x40000055:
      case 0x40000056:
      case 0x40000057:
      case 0x40000059:
      case 0x4000005a:
      case 0x4000005b:
      case 0x4000005c:
      case 0x4000005d:
      case 0x4000005e:
      case 0x4000005f:
      case 0x40000060:
      case 0x40000061:
      case 0x40000062:
      case 0x40000063:
      case 0x40000067:
code_r0x000140648bcd:
        uVar9 = (uint)param_3;
        *(undefined8 *)((longlong)ppuVar39 + -8) = 0x140648be0;
        pdb_1406d19f0((undefined1 *)((longlong)ppuVar39 + 0x58));
        *(undefined8 *)((longlong)ppuVar39 + -8) = 0x140648bed;
        pdb_1406404c0((undefined1 *)((longlong)ppuVar39 + 0x40),
                      (undefined1 *)((longlong)ppuVar39 + 0x58));
        *(undefined8 *)((longlong)ppuVar39 + 0x28) = *(undefined8 *)((longlong)ppuVar39 + 0x40);
        *(undefined8 *)((longlong)ppuVar39 + 0x30) = *(undefined8 *)((longlong)ppuVar39 + 0x48);
        *(undefined8 *)((longlong)ppuVar39 + 0x38) = *(undefined8 *)((longlong)ppuVar39 + 0x50);
        uVar10 = 0;
        ppuVar38 = (uint **)ppuVar39;
        break;
      case 0x40000065:
        uVar10 = 0x2c;
        break;
      case 0x40000075:
        uVar10 = 0x30;
        break;
      case 0x40000080:
        uVar10 = 0x84;
        break;
      case 0x40000081:
        uVar10 = 0x83;
        break;
      case 0x400000e0:
      case 0x400000e4:
        uVar10 = 6;
        break;
      case 0x400000e1:
      case 0x400000e5:
        uVar10 = 0xb;
        break;
      case 0x400000e2:
      case 0x400000e6:
        uVar10 = 3;
        break;
      case 0x400000e3:
      case 0x400000e7:
        uVar10 = 0x10;
        break;
      case 0x40000102:
        uVar10 = 0x70;
        break;
      case 0x40000103:
        uVar10 = 0x71;
        break;
      case 0x40000104:
        uVar10 = 0x6f;
        break;
      case 0x40000105:
        uVar10 = 0x6b;
        break;
      case 0x40000106:
        uVar10 = 0x85;
        break;
      case 0x4000010c:
        uVar10 = 0x9e;
        break;
      case 0x4000010d:
        uVar10 = 0x9c;
        break;
      case 0x4000010e:
        uVar10 = 0x99;
        break;
      case 0x4000010f:
        uVar10 = 0x9b;
        break;
      case 0x40000110:
        uVar10 = 0x9f;
        break;
      case 0x40000111:
        uVar10 = 0x9d;
        break;
      case 0x40000112:
        uVar10 = 0x9a;
      }
      bVar5 = *(byte *)((longlong)ppuVar38 + 0xc0);
      bVar21 = *(byte *)((longlong)ppuVar38 + 0xb8);
      *in_RCX = uVar10;
      uVar17 = *(undefined8 *)((longlong)ppuVar38 + 0x2c);
      puVar16 = *(uint **)((longlong)ppuVar38 + 0x30);
      uVar3 = *(undefined8 *)((longlong)ppuVar38 + 0x38);
      *(undefined8 *)(in_RCX + 1) = *(undefined8 *)((longlong)ppuVar38 + 0x24);
      *(undefined8 *)(in_RCX + 3) = uVar17;
      *(uint **)(in_RCX + 4) = puVar16;
      *(undefined8 *)(in_RCX + 6) = uVar3;
      *(byte *)(in_RCX + 8) = 0x1b;
      in_RCX[0xe] = 1;
      in_RCX[0xf] = 0;
      in_RCX[0x10] = uVar9;
      *(byte *)(in_RCX + 0x13) = bVar21;
      *(byte *)((longlong)in_RCX + 0x4d) = bVar5;
      return puVar16;
    }
    puVar12 = (uint *)(ulonglong)(uVar10 - 8);
    if (uVar10 - 8 < 0x78) {
      puVar40 = &UNK_142f8ca7c;
code_r0x000140648bc4:
                    /* WARNING: Could not recover jumptable at 0x000140648bcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar16 = (uint *)(*(code *)(puVar40 + *(int *)(puVar40 + (longlong)puVar12 * 4)))
                                  (param_1,uVar10);
      return puVar16;
    }
  }
LAB_140648c50:
  in_RCX[0x10] = 0xc3;
  return puVar12;
code_r0x000140648150:
  in_RCX = (uint *)((ulonglong)unaff_R14 & 0xff);
  param_13 = unaff_R15;
code_r0x000140648154:
  *(uint **)unaff_RBX = puVar12;
  unaff_RBX[2] = (uint)in_RCX;
  unaff_RBX[3] = param_1;
code_r0x000140648451:
  uStack_f0 = (double)unaff_XMM7_Da * (double)(int)unaff_XMM6_Qa;
  uStack_e8 = (double)param_13[1] * (double)(int)((ulonglong)unaff_XMM6_Qa >> 0x20);
  uStack_f8 = 8;
  bStack_81 = 1;
  puStack_250 = (uint *)0x14064848e;
  puVar16 = (uint *)pdb_140558a30(&uStack_150,param_4,&uStack_f8);
  if ((char)uStack_150 == '\x10') {
    return puVar16;
  }
  bStack_81 = 1;
  puStack_250 = (uint *)0x1406484a9;
  pdb_1404c7c30(&uStack_150);
code_r0x0001406484aa:
  *(char *)uStack_98 = '\0';
  return uStack_98;
}

