// VA 0x141ace710, PDB extent 1159 bytes
// country_core::systems::audio::sheep_audio::sheep_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/sheep_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143388146) overlaps instruction at (ram,0x000143388145)
    */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Removing unreachable block (ram,0x00014338813a) */
/* WARNING: Removing unreachable block (ram,0x000143388136) */
/* WARNING: Removing unreachable block (ram,0x000143388146) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::sheep_audio::sheep_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/sheep_audio.rs
   Extent: 1159 */

void pdb_141ace710(undefined8 *param_1,ulonglong ******param_2,undefined8 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong ******ppppppuVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong *******pppppppuVar12;
  ulonglong *******pppppppuVar13;
  char cVar14;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong ******ppppppuVar18;
  undefined7 uVar21;
  int *piVar19;
  ulonglong *******pppppppuVar20;
  ulonglong ******ppppppuVar22;
  ulonglong ******ppppppuVar23;
  undefined *puVar24;
  byte bVar25;
  uint uVar26;
  ulonglong *******unaff_RBX;
  ulonglong *******pppppppuVar27;
  ulonglong *******pppppppuVar28;
  ulonglong *******pppppppuVar29;
  ulonglong *******pppppppuVar30;
  ulonglong *******pppppppuVar31;
  ulonglong uVar32;
  ulonglong *******pppppppuVar33;
  ulonglong *******pppppppuVar34;
  ulonglong *******pppppppuVar35;
  ulonglong *******pppppppuVar36;
  uint uVar37;
  ulonglong ******ppppppuVar38;
  ulonglong *******pppppppuVar39;
  longlong lVar40;
  ulonglong ******ppppppuVar41;
  ulonglong *******pppppppuVar42;
  ulonglong *******pppppppuVar43;
  ulonglong *******pppppppuVar44;
  ulonglong *******arg0;
  bool bVar45;
  bool bVar46;
  float10 in_ST0;
  undefined4 extraout_XMM0_Da;
  float fVar47;
  float fVar48;
  undefined8 in_XMM0_Qa;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 in_XMM1 [16];
  undefined1 auVar49 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM9_Da;
  float fVar50;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  undefined1 auStack_8cd8 [35656];
  undefined1 *puStack_190;
  undefined *puStack_178;
  undefined1 auStack_170 [40];
  ulonglong *******pppppppuStack_148;
  ulonglong *******pppppppuStack_140;
  ulonglong *******pppppppuStack_138;
  ulonglong *******pppppppuStack_130;
  ulonglong *******pppppppuStack_128;
  ulonglong *******pppppppuStack_120;
  ulonglong uStack_118;
  ulonglong *******pppppppuStack_110;
  ulonglong *******pppppppuStack_108;
  undefined1 auStack_100 [8];
  ulonglong ******ppppppuStack_f8;
  undefined *puStack_e8;
  ulonglong *******pppppppuStack_e0;
  ulonglong *******pppppppuStack_d8;
  ulonglong *******pppppppuStack_d0;
  undefined8 uStack_c8;
  ulonglong *******pppppppuStack_c0;
  ulonglong *******pppppppuStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined4 uStack_7f;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  ulonglong *******pppppppuStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  ulonglong *******pppppppuStack_68;
  undefined8 uStack_60;
  ulonglong *******pppppppuStack_58;
  undefined1 uStack_50;
  undefined4 uStack_4f;
  undefined2 uStack_4b;
  undefined4 uStack_49;
  undefined4 uStack_45;
  undefined4 uStack_41;
  undefined4 uStack_3d;
  undefined1 uStack_39;
  int iVar15;
  
  uStack_3d = (undefined4)((ulonglong)unaff_RBX >> 0x18);
  uStack_39 = (undefined1)((ulonglong)unaff_RBX >> 0x38);
  pppppppuVar30 = (ulonglong *******)&pppppppuStack_108;
  pppppppuVar31 = (ulonglong *******)&pppppppuStack_108;
  pppppppuVar28 = (ulonglong *******)&pppppppuStack_108;
  pppppppuVar29 = (ulonglong *******)&pppppppuStack_108;
  pppppppuVar27 = (ulonglong *******)&pppppppuStack_108;
  pppppppuVar20 = (ulonglong *******)&pppppppuStack_108;
  pppppppuVar33 = (ulonglong *******)&uStack_88;
  uStack_49 = CONCAT31(0xfffffe,(undefined1)uStack_49);
  uStack_45 = 0xffffffff;
  uStack_41 = CONCAT31((int3)unaff_RBX,0xff);
  uStack_b0 = (undefined1)param_3;
  uStack_af = (undefined7)((ulonglong)param_3 >> 8);
  pppppppuVar34 = (ulonglong *******)*param_1;
  lVar7 = param_1[1];
  ppppppuVar23 = *pppppppuVar34;
  ppppppuVar41 = (ulonglong ******)0x0;
  ppppppuVar18 = (ulonglong ******)((longlong)ppppppuVar23 - *(ulonglong *)(lVar7 + 0x18));
  if (ppppppuVar23 < *(ulonglong *******)(lVar7 + 0x18)) {
    ppppppuVar18 = ppppppuVar41;
  }
  ppppppuVar22 = (ulonglong ******)((longlong)ppppppuVar23 - *(ulonglong *)(lVar7 + 0x38));
  if (ppppppuVar23 < *(ulonglong *******)(lVar7 + 0x38)) {
    ppppppuVar22 = ppppppuVar41;
  }
  pppppppuVar35 = (ulonglong *******)((longlong)ppppppuVar18 * 0x20 + *(longlong *)(lVar7 + 8));
  ppppppuVar23 = *(ulonglong *******)(lVar7 + 0x10);
  ppppppuVar8 = *(ulonglong *******)(lVar7 + 0x30);
  ppppppuVar38 = (ulonglong ******)((longlong)ppppppuVar23 - (longlong)ppppppuVar18);
  if (ppppppuVar23 < ppppppuVar18) {
    ppppppuVar38 = ppppppuVar41;
  }
  lVar40 = 8;
  if (ppppppuVar23 < ppppppuVar18) {
    pppppppuVar35 = (ulonglong *******)0x8;
  }
  pppppppuVar42 = (ulonglong *******)((longlong)ppppppuVar22 * 0x20 + *(longlong *)(lVar7 + 0x28));
  if (ppppppuVar8 < ppppppuVar22) {
    pppppppuVar42 = (ulonglong *******)0x8;
  }
  pppppppuStack_b8 = (ulonglong *******)0x0;
  ppppppuVar23 = (ulonglong ******)((longlong)ppppppuVar8 - (longlong)ppppppuVar22);
  if (ppppppuVar8 < ppppppuVar22) {
    ppppppuVar23 = ppppppuVar41;
  }
  pppppppuStack_d8 = pppppppuVar34;
  *pppppppuVar34 =
       (ulonglong ******)
       ((*(longlong *)(lVar7 + 0x40) - (longlong)ppppppuVar23) - (longlong)ppppppuVar38);
  pppppppuVar39 = pppppppuVar35 + (longlong)ppppppuVar38 * 4;
  pppppppuStack_d0 = pppppppuVar39;
  pppppppuStack_c0 = pppppppuVar42 + (longlong)ppppppuVar23 * 4;
  pppppppuVar44 = (ulonglong *******)*param_2;
code_r0x000141ace7d0:
  if ((pppppppuVar35 == (ulonglong *******)0x0) || (pppppppuVar35 == pppppppuStack_d0)) {
    if ((pppppppuVar42 == (ulonglong *******)0x0) || (pppppppuVar42 == pppppppuStack_c0)) {
      if (((ulonglong)pppppppuStack_b8 & 1) == 0) {
        puVar11 = (undefined8 *)CONCAT71(uStack_af,uStack_b0);
        *(undefined4 *)puVar11[2] = *(undefined4 *)((longlong)puVar11 + 0x1c);
        pppppppuStack_110 = (ulonglong *******)0x141acea72;
        pdb_140a87f70(*puVar11);
      }
      else {
        puVar11 = (undefined8 *)CONCAT71(uStack_af,uStack_b0);
        *(undefined4 *)puVar11[2] = *(undefined4 *)((longlong)puVar11 + 0x1c);
        pppppppuStack_110 = (ulonglong *******)0x141acea5b;
        pdb_140a87e10(*puVar11);
      }
      return;
    }
    pppppppuVar43 = pppppppuVar42 + 4;
    pppppppuVar36 = (ulonglong *******)0x0;
  }
  else {
    pppppppuVar36 = pppppppuVar35 + 4;
    pppppppuVar43 = pppppppuVar42;
    pppppppuVar42 = pppppppuVar35;
  }
  *pppppppuStack_d8 = (ulonglong ******)((longlong)*pppppppuStack_d8 + 1);
  arg0 = (ulonglong *******)0x14;
  ppppppuVar23 = (ulonglong ******)&UNK_14338812c;
  uVar17 = (ulonglong)*(int *)(&UNK_14338812c + (ulonglong)*(byte *)(pppppppuVar42 + 3) * 4);
  bVar45 = 0xfffffffebcc77ed3 < uVar17;
  ppppppuVar18 = (ulonglong ******)(&UNK_14338812c + uVar17);
  bVar46 = ppppppuVar18 == (ulonglong ******)0x0;
  cVar14 = (char)ppppppuVar18;
  iVar15 = (int)ppppppuVar18;
  uVar21 = (undefined7)((ulonglong)ppppppuVar18 >> 8);
  uVar37 = (uint)pppppppuVar39;
  uVar26 = (uint)unaff_RBX;
  bVar25 = (byte)((ulonglong)param_2 >> 8);
  pppppppuVar12 = (ulonglong *******)&pppppppuStack_108;
  pppppppuVar13 = (ulonglong *******)&pppppppuStack_108;
  pppppppuVar35 = pppppppuVar36;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(pppppppuVar42 + 3)) {
  case 0:
    pppppppuVar39 = (ulonglong *******)&UNK_143387835;
    ppppppuVar23 = *pppppppuVar44;
    break;
  case 1:
    arg0 = (ulonglong *******)0x16;
    pppppppuVar39 = (ulonglong *******)&UNK_143387849;
    ppppppuVar23 = *pppppppuVar44;
    break;
  case 2:
    pppppppuVar39 = (ulonglong *******)&UNK_14338785f;
    ppppppuVar23 = *pppppppuVar44;
    break;
  case 3:
    arg0 = (ulonglong *******)0x16;
    pppppppuVar39 = (ulonglong *******)&UNK_143387873;
    ppppppuVar23 = *pppppppuVar44;
    break;
  case 4:
    goto code_r0x000141acea35;
  case 5:
    arg0 = (ulonglong *******)0x15;
    pppppppuVar39 = (ulonglong *******)&UNK_143387889;
    ppppppuVar23 = *pppppppuVar44;
    break;
  case 6:
    arg0 = (ulonglong *******)0x15;
    pppppppuVar39 = (ulonglong *******)&UNK_14338789e;
    ppppppuVar23 = *pppppppuVar44;
    break;
  case 7:
    arg0 = (ulonglong *******)0x19;
    pppppppuVar39 = (ulonglong *******)&UNK_1433878b3;
    ppppppuVar23 = *pppppppuVar44;
    break;
  case 8:
    goto code_r0x000141ad00f0;
  case 9:
    *(char *)ppppppuVar18 = *(char *)ppppppuVar18 + cVar14;
    pppppppuVar36 = (ulonglong *******)&UNK_143387bbe;
  case 0x17:
    arg0 = (ulonglong *******)0x21;
    param_2 = *pppppppuStack_c0;
    goto joined_r0x000141acfe0a;
  case 10:
    *(char *)ppppppuVar18 = *(char *)ppppppuVar18 + cVar14;
    arg0 = (ulonglong *******)0x1c;
    pppppppuVar36 = (ulonglong *******)&UNK_143387b01;
    goto code_r0x000141acfe5d;
  case 0xb:
    return;
  case 0xc:
    goto code_r0x000141acfed4;
  case 0xd:
    *(char *)ppppppuVar18 = *(char *)ppppppuVar18 + cVar14;
    (&UNK_1433880b7)[uVar17] = (&UNK_1433880b7)[uVar17] + ',';
    puStack_190 = (undefined1 *)&pppppppuStack_110;
    pppppppuVar34 = (ulonglong *******)&pppppppuStack_110;
    cVar14 = '\x0f';
    pppppppuVar30 = pppppppuVar33;
    do {
      pppppppuVar30 = pppppppuVar30 + -1;
      pppppppuVar34 = pppppppuVar34 + -1;
      *pppppppuVar34 = *pppppppuVar30;
      cVar14 = cVar14 + -1;
    } while ('\0' < cVar14);
    pppppppuVar20 = (ulonglong *******)auStack_8cd8;
    pppppppuStack_110 = pppppppuVar33;
    pppppppuVar33 = (ulonglong *******)&pppppppuStack_110;
joined_r0x000141acfdb6:
    if (param_2 == (ulonglong ******)0x0) {
code_r0x000141acff40:
      pppppppuVar20[-1] = (ulonglong ******)0x141acff45;
      pdb_14007ee60();
      pppppppuVar20[-1] = (ulonglong ******)0x141acff52;
      ppppppuVar23 = (ulonglong ******)pub_1406abab0((ulonglong)arg0,1);
      if (ppppppuVar23 == (ulonglong ******)0x0) {
        pppppppuVar20[-1] = (ulonglong ******)0x141ad05ac;
        pdb_142dc7e2a(1,arg0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pppppppuVar20[-1] = (ulonglong ******)0x141acff6c;
      pub_142e32760(ppppppuVar23,pppppppuVar36,arg0);
      pppppppuVar33[4] = (ulonglong ******)0x0;
      pppppppuVar33[6] = (ulonglong ******)arg0;
      pppppppuVar33[7] = ppppppuVar23;
      pppppppuVar33[8] = (ulonglong ******)arg0;
      *(char *)(pppppppuVar33 + 9) = '\x02';
    }
    else {
code_r0x000141acfe2e:
      pppppppuVar20[-1] = (ulonglong ******)0x141acfe41;
      pdb_140a8b180(pppppppuVar33 + 4,param_2 + 2,pppppppuVar36,arg0);
      if (*(uint *)(pppppppuVar33 + 4) == 2) {
        pppppppuVar33[3] = pppppppuVar33[5];
        pppppppuVar20[4] = (ulonglong ******)&UNK_143387d50;
                    /* WARNING: Subroutine does not return */
        pppppppuVar20[-1] = (ulonglong ******)0x141ad0590;
        pdb_142dc8170(&UNK_143388100,0x2b,pppppppuVar33 + 3,&UNK_1433880e0);
      }
    }
    ppppppuVar18 = pppppppuVar33[4];
    ppppppuVar23 = pppppppuVar33[5];
code_r0x000141acff8c:
    pppppppuVar33[0x10] = pppppppuVar33[8];
    *(char *)(pppppppuVar33 + 0x11) = *(char *)(pppppppuVar33 + 9);
    *(undefined4 *)((longlong)pppppppuVar33 + 0x89) =
         *(undefined4 *)((longlong)pppppppuVar33 + 0x49);
    *(undefined2 *)((longlong)pppppppuVar33 + 0x8d) =
         *(undefined2 *)((longlong)pppppppuVar33 + 0x4d);
    *(char *)((longlong)pppppppuVar33 + 0x8f) = *(char *)((longlong)pppppppuVar33 + 0x4f);
    pppppppuVar33[0xe] = pppppppuVar33[6];
    pppppppuVar33[0xf] = pppppppuVar33[7];
    pppppppuVar33[0xc] = ppppppuVar18;
    pppppppuVar33[0xd] = ppppppuVar23;
    *(uint *)(pppppppuVar33 + 5) = *(uint *)(pppppppuVar33 + 0xb);
    pppppppuVar33[4] = pppppppuVar33[10];
    *(undefined8 *)((longlong)pppppppuVar20 + -8) = 0x141acfffa;
    pdb_140a8e190(pppppppuVar33 + 0xc,pppppppuVar33 + 4);
    *(undefined8 *)((longlong)pppppppuVar20 + -8) = 0x141ad0015;
    pdb_140a8e730(pppppppuVar33 + 0xc,&UNK_143387d68,0xb);
    *(undefined8 *)((longlong)pppppppuVar20 + -8) = 0x141ad001f;
    pdb_140a8a6f0(pppppppuVar33 + 0xc);
    if (uVar26 == 0xf) {
code_r0x000141ad003d:
      unaff_XMM15_Da = _DAT_142e36f28;
      *(undefined8 *)((longlong)pppppppuVar20 + -8) = 0x141ad005b;
      fVar47 = (float)pdb_140de8220(_DAT_142e36f28);
      fVar50 = 0.0;
      if (0.0 <= fVar47) {
        fVar50 = fVar47;
      }
code_r0x000141ad0063:
      if (fVar50 <= unaff_XMM15_Da) {
        unaff_XMM15_Da = fVar50;
      }
code_r0x000141ad0068:
      *(undefined8 *)((longlong)pppppppuVar20 + -8) = 0x141ad0082;
      pdb_140a8e730(pppppppuVar33 + 0xc,&UNK_143387d73,4,unaff_XMM15_Da);
code_r0x000141ad0083:
      *(undefined8 *)((longlong)pppppppuVar20 + -8) = 0x141ad008c;
      pdb_1409a5ed0(pppppppuVar33 + 0xc);
      ppppppuVar23 = pppppppuVar33[0xe];
      pppppppuVar30 = pppppppuVar20;
      if (ppppppuVar23 != (ulonglong ******)0x0) {
        ppppppuVar18 = pppppppuVar33[0xf];
        *(undefined8 *)((longlong)pppppppuVar20 + -8) = 0x141ad00a5;
        pub_1406abac0((byte *)ppppppuVar18,(ulonglong)ppppppuVar23,1);
      }
code_r0x000141ad00a5:
      pppppppuVar34 = (ulonglong *******)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
      switch(uVar26) {
      case 7:
        pppppppuVar36 = (ulonglong *******)pppppppuVar33[-5];
        break;
      case 8:
        pppppppuVar36 = (ulonglong *******)pppppppuVar33[-4];
        break;
      case 9:
        pppppppuVar36 = (ulonglong *******)pppppppuVar33[-3];
        break;
      default:
        goto LAB_141acfcb0;
      case 0xe:
        pppppppuVar36 = (ulonglong *******)pppppppuVar33[-2];
        break;
      case 0x10:
        pppppppuVar36 = (ulonglong *******)pppppppuVar33[-1];
        break;
      case 0x11:
        pppppppuVar36 = (ulonglong *******)*pppppppuVar33;
      }
      *(uint *)pppppppuVar33[-8] = *(uint *)((longlong)pppppppuVar33 + 0x5c);
      *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad0121;
      pdb_140a87e10(pppppppuVar36);
      ppppppuVar23 = pppppppuVar36[5];
      if (pppppppuVar36[2] <= ppppppuVar23) {
code_r0x000141ad0593:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad059f;
        pdb_142dc81f2();
      }
      ppppppuVar18 = pppppppuVar36[1];
      *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad0154;
      pdb_140a8e730(ppppppuVar18 + (longlong)ppppppuVar23 * 6,&UNK_143387d68,0xb);
      ppppppuVar23 = pppppppuVar36[5];
      if (pppppppuVar36[2] <= ppppppuVar23) goto code_r0x000141ad0593;
      ppppppuVar18 = pppppppuVar36[1];
      *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad017a;
      pdb_140a8e190(ppppppuVar18 + (longlong)ppppppuVar23 * 6,pppppppuVar33 + 10);
      pppppppuVar34 = (ulonglong *******)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
      if (uVar26 < 0x12) {
        pppppppuVar43 = (ulonglong *******)((ulonglong)unaff_RBX & 0xff);
        if ((0x10306U >> (uVar26 & 0x1f) & 1) == 0) {
          if ((0x4081U >> (uVar26 & 0x1f) & 1) == 0) {
            pppppppuVar34 = (ulonglong *******)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
            if (uVar26 == 0x11) {
              ppppppuVar23 = pppppppuVar36[5];
              if (pppppppuVar36[2] <= ppppppuVar23) goto code_r0x000141ad0593;
              fVar50 = _DAT_142e36f28;
              if ((*(byte *)((longlong)pppppppuVar33 + 0x97) & 1) == 0) {
                fVar50 = 0.0;
              }
              ppppppuVar18 = pppppppuVar36[1];
              *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad03fa;
              pdb_140a8e730(ppppppuVar18 + (longlong)ppppppuVar23 * 6,&UNK_143387db1,8,fVar50);
              fVar50 = _DAT_142e36f28;
              ppppppuVar23 = pppppppuVar36[5];
              if (pppppppuVar36[2] <= ppppppuVar23) goto code_r0x000141ad0593;
              ppppppuVar18 = pppppppuVar36[1];
              *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad043f;
              fVar48 = (float)pdb_140de8220(_DAT_142e36f28);
              fVar47 = 0.0;
              if (0.0 <= fVar48) {
                fVar47 = fVar48;
              }
              fVar48 = fVar50;
              if (fVar47 <= fVar50) {
                fVar48 = fVar47;
              }
              *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad0463;
              pdb_140a8e730(ppppppuVar18 + (longlong)ppppppuVar23 * 6,&UNK_143387db9,0x11,fVar48);
              pppppppuVar34 = (ulonglong *******)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
              if (((byte)unaff_RBX != 7) && ((int)pppppppuVar43 != 0)) goto LAB_141acfcb0;
              ppppppuVar23 = pppppppuVar36[5];
              if (pppppppuVar36[2] <= ppppppuVar23) goto code_r0x000141ad0593;
              if ((*(byte *)((longlong)pppppppuVar33 + 0x97) & 1) == 0) {
                fVar50 = 0.0;
              }
              ppppppuVar18 = pppppppuVar36[1];
              *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad04b1;
              pdb_140a8e730(ppppppuVar18 + (longlong)ppppppuVar23 * 6,&UNK_143387dca,0xf,fVar50);
              ppppppuVar23 = pppppppuVar36[5];
              bVar45 = ppppppuVar23 < pppppppuVar36[2];
code_r0x000141ad04bc:
              if (!bVar45) goto code_r0x000141ad0593;
              ppppppuVar23 = (ulonglong ******)((longlong)ppppppuVar23 * 3);
code_r0x000141acfc96:
              ppppppuVar18 = pppppppuVar36[1];
              *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141acfcb0;
              pdb_140a8e730(ppppppuVar18 + (longlong)ppppppuVar23 * 2,&UNK_143387dd9,8);
              pppppppuVar34 = (ulonglong *******)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
            }
            goto LAB_141acfcb0;
          }
          ppppppuVar23 = pppppppuVar36[5];
          if (pppppppuVar36[2] <= ppppppuVar23) goto code_r0x000141ad0593;
          ppppppuVar18 = pppppppuVar36[1];
          *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad0223;
          fVar47 = (float)pdb_140de8220(0);
          unaff_XMM13_Da = _DAT_142e36f28;
          fVar50 = 0.0;
          if (0.0 <= fVar47) {
            fVar50 = fVar47;
          }
          fVar47 = _DAT_142e36f28;
          if (fVar50 <= _DAT_142e36f28) {
            fVar47 = fVar50;
          }
          *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad024f;
          pdb_140a8e730(ppppppuVar18 + (longlong)ppppppuVar23 * 6,&UNK_143387a60,0xd,fVar47);
          ppppppuVar23 = pppppppuVar36[5];
          if (pppppppuVar36[2] <= ppppppuVar23) goto code_r0x000141ad0593;
code_r0x000141ad02b3:
          ppppppuVar18 = pppppppuVar36[1];
          *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad02cf;
          fVar47 = (float)pdb_140de8220(0);
          fVar50 = 0.0;
          if (0.0 <= fVar47) {
            fVar50 = fVar47;
          }
          if (fVar50 <= unaff_XMM13_Da) {
            unaff_XMM13_Da = fVar50;
          }
          *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad02f2;
          pdb_140a8e730(ppppppuVar18 + (longlong)ppppppuVar23 * 6,&UNK_143387d77,0xd,unaff_XMM13_Da)
          ;
          if (pppppppuVar36[2] <= pppppppuVar36[5]) goto code_r0x000141ad0593;
          ppppppuVar23 = (ulonglong ******)((longlong)pppppppuVar36[5] * 3);
code_r0x000141ad0307:
          ppppppuVar18 = pppppppuVar36[1];
          *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad0325;
          pdb_140a8e730(ppppppuVar18 + (longlong)ppppppuVar23 * 2,&UNK_143387d84,8);
          if (pppppppuVar36[2] <= pppppppuVar36[5]) goto code_r0x000141ad0593;
          puVar24 = (undefined *)((longlong)pppppppuVar36[5] * 0x30);
          pppppppuVar28 = pppppppuVar30;
code_r0x000141ad033e:
          puVar24 = puVar24 + (longlong)pppppppuVar36[1];
          pppppppuVar29 = pppppppuVar28;
code_r0x000141ad0342:
          *(undefined8 *)((longlong)pppppppuVar29 + -8) = 0x141ad0358;
          pdb_140a8e730(puVar24,&UNK_143387d8c,0x25);
          pppppppuVar34 = (ulonglong *******)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
          pppppppuVar30 = pppppppuVar29;
        }
        else {
          ppppppuVar23 = pppppppuVar36[5];
          if (pppppppuVar36[2] <= ppppppuVar23) goto code_r0x000141ad0593;
          ppppppuVar18 = pppppppuVar36[1];
          *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad01c4;
          pdb_140a8e730(ppppppuVar18 + (longlong)ppppppuVar23 * 6,&UNK_143387a60,0xd);
          pppppppuVar34 = (ulonglong *******)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
        }
        if ((byte)unaff_RBX < 0x11) {
                    /* WARNING: Could not recover jumptable at 0x000141ad036f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_1433881f0 + *(int *)(&UNK_1433881f0 + (longlong)pppppppuVar43 * 4)))
                    (&UNK_1433881f0 + *(int *)(&UNK_1433881f0 + (longlong)pppppppuVar43 * 4));
          return;
        }
      }
    }
    else {
      if ((uVar26 != 0x13) && (uVar26 != 0x14)) goto code_r0x000141ad0083;
code_r0x000141ad002f:
      pppppppuVar27 = pppppppuVar20;
      if (_DAT_142e36f28 < unaff_XMM13_Da) goto code_r0x000141ad003d;
code_r0x000141ad00c7:
      *(undefined8 *)((longlong)pppppppuVar27 + -8) = 0x141ad00d0;
      pdb_1409a5ed0(pppppppuVar33 + 0xc);
      param_2 = pppppppuVar33[0xe];
      bVar46 = param_2 == (ulonglong ******)0x0;
      pppppppuVar12 = pppppppuVar27;
code_r0x000141ad00d8:
      pppppppuVar30 = pppppppuVar12;
      pppppppuVar13 = pppppppuVar30;
      pppppppuVar34 = (ulonglong *******)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
      if (!bVar46) {
code_r0x000141ad00de:
        pppppppuVar30 = pppppppuVar13;
        ppppppuVar23 = pppppppuVar33[0xf];
        *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141ad00ed;
        pub_1406abac0((byte *)ppppppuVar23,(ulonglong)param_2,1);
        pppppppuVar34 = (ulonglong *******)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
      }
    }
LAB_141acfcb0:
    do {
      if ((pppppppuVar44 == (ulonglong *******)0x0) ||
         (pppppppuVar44 == (ulonglong *******)pppppppuVar33[-9])) {
        if ((pppppppuVar39 == (ulonglong *******)0x0) ||
           (pppppppuVar39 == (ulonglong *******)pppppppuVar33[-6])) {
          return;
        }
        pppppppuVar28 = pppppppuVar39 + 7;
        pppppppuVar20 = (ulonglong *******)0x0;
      }
      else {
        pppppppuVar20 = pppppppuVar44 + 7;
        pppppppuVar28 = pppppppuVar39;
        pppppppuVar39 = pppppppuVar44;
      }
      *pppppppuVar33[-0xb] = (ulonglong *****)((longlong)*pppppppuVar33[-0xb] + 1);
      unaff_RBX = (ulonglong *******)(ulonglong)*(byte *)(pppppppuVar39 + 1);
      *(char *)((longlong)pppppppuVar33 + 0x97) = *(char *)((longlong)pppppppuVar39 + 9);
      *(char *)((longlong)pppppppuVar33 + 0x96) = *(char *)((longlong)pppppppuVar39 + 10);
      *(uint *)(pppppppuVar33 + 0xb) = *(uint *)((longlong)pppppppuVar39 + 0x24);
      pppppppuVar33[10] = *(ulonglong *******)((longlong)pppppppuVar39 + 0x1c);
      *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141acfd54;
      uStack_90 = pppppppuVar34;
      pdb_140de8220(unaff_XMM6_Da);
      *(undefined8 *)((longlong)pppppppuVar30 + -8) = 0x141acfd68;
      pdb_140de8220(0);
      pppppppuVar39 = pppppppuVar28;
      pppppppuVar44 = pppppppuVar20;
      pppppppuVar34 = uStack_90;
    } while ((ulonglong *******)0x1d < unaff_RBX);
code_r0x000141acfd76:
                    /* WARNING: Could not recover jumptable at 0x000141acfd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14338814c + *(int *)(&UNK_14338814c + (longlong)unaff_RBX * 4)))();
    return;
  case 0xe:
    *(char *)ppppppuVar18 = *(char *)ppppppuVar18 + cVar14;
    pppppppuVar36 = (ulonglong *******)&UNK_143387ca2;
    goto code_r0x000141acfdfa;
  case 0xf:
    pppppppuVar39 =
         (ulonglong *******)
         (ulonglong)((uVar37 - *(int *)((longlong)param_2 + 0x438dfebd)) - (uint)bVar45);
    pppppppuVar30 = (ulonglong *******)&pppppppuStack_108;
    goto code_r0x000141ad00a5;
  case 0x10:
    goto code_r0x000141ad00d8;
  case 0x11:
    goto code_r0x000141ad00de;
  case 0x12:
    (&UNK_1433880b9)[uVar17] = (&UNK_1433880b9)[uVar17] + ',';
    arg0 = (ulonglong *******)0x1f;
    goto code_r0x000141acfecd;
  case 0x13:
code_r0x000141acfdfa:
    arg0 = (ulonglong *******)0x23;
    param_2 = *pppppppuStack_c0;
    goto joined_r0x000141acfe0a;
  case 0x14:
    pppppppuVar36 = (ulonglong *******)0x43387b01;
code_r0x000141acfe5d:
    param_2 = *pppppppuStack_c0;
    goto joined_r0x000141acfe0a;
  case 0x15:
    goto code_r0x000141acfd76;
  case 0x16:
    *(uint *)ppppppuVar18 = *(uint *)ppppppuVar18 + iVar15;
    *(char *)ppppppuVar18 = *(char *)ppppppuVar18 + cVar14;
    pppppppuVar13 = (ulonglong *******)&pppppppuStack_108;
    goto code_r0x000141ad00de;
  case 0x18:
    goto code_r0x000141ad00c7;
  case 0x19:
    halt_baddata();
  case 0x1a:
    *(char *)ppppppuVar18 = *(char *)ppppppuVar18 + cVar14;
code_r0x000141acfecd:
    param_2 = *pppppppuStack_c0;
code_r0x000141acfed4:
    if (param_2 != (ulonglong ******)0x0) goto code_r0x000141acfe2e;
code_r0x000141acfedd:
    pppppppuVar20 = (ulonglong *******)&pppppppuStack_108;
    goto code_r0x000141acff40;
  case 0x1b:
    pppppppuVar36 = (ulonglong *******)&UNK_143387d30;
    arg0 = (ulonglong *******)0x20;
    param_2 = *pppppppuStack_c0;
    goto joined_r0x000141acfe0a;
  case 0x1c:
    arg0 = (ulonglong *******)0x1e;
    param_2 = *pppppppuStack_c0;
    goto joined_r0x000141acfe0a;
  case 0x1d:
  case 0x22:
  case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1e:
    *(char *)ppppppuVar18 = *(char *)ppppppuVar18 + cVar14;
    pppppppuVar36 = (ulonglong *******)&UNK_143387cc5;
    arg0 = (ulonglong *******)0x26;
    param_2 = *pppppppuStack_c0;
joined_r0x000141acfe0a:
    pppppppuVar20 = (ulonglong *******)&pppppppuStack_108;
    goto joined_r0x000141acfdb6;
  case 0x1f:
    pppppppuVar20 = (ulonglong *******)&pppppppuStack_108;
    goto code_r0x000141acff40;
  case 0x20:
    goto code_r0x000141ad04bc;
  case 0x21:
    pppppppuVar30 = (ulonglong *******)&pppppppuStack_110;
    *(int *)(&UNK_1433880b9 + uVar17) = (int)in_ST0;
    pppppppuStack_110 = pppppppuVar39;
    goto code_r0x000141acfc96;
  case 0x24:
    goto code_r0x000141acfd76;
  case 0x25:
    goto code_r0x000141acfedd;
  case 0x26:
    pppppppuVar20 = (ulonglong *******)&pppppppuStack_110;
    pppppppuStack_110 = (ulonglong *******)&pppppppuStack_108;
    goto code_r0x000141ad002f;
  case 0x27:
    goto code_r0x000141ad0060;
  case 0x28:
    pppppppuVar20 = (ulonglong *******)auStack_100;
    pppppppuVar33 = pppppppuStack_108;
    goto code_r0x000141ad0068;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2e:
    pppppppuVar30 = (ulonglong *******)&pppppppuStack_110;
    pppppppuStack_110 = (ulonglong *******)0x488b4c08;
    cVar14 = uStack_60._1_1_ + ',';
    uStack_60._0_2_ = CONCAT11(cVar14 + bVar45,(undefined1)uStack_60);
    puVar3 = (uint *)((longlong)pppppppuVar39 + 0x14338816e);
    *puVar3 = *puVar3 >> 9 | *puVar3 << 0x17;
    bVar45 = (int)*puVar3 < 0;
    goto code_r0x000141acfc25;
  case 0x2d:
    if ((longlong)uVar17 < -0x14338812c) {
      *(int *)(&UNK_1433880b9 + uVar17) = *(int *)(&UNK_1433880b9 + uVar17) + 0x4338812c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar2 = (char *)(uVar17 + 0x1a94e0e74);
    cVar14 = *pcVar2;
    *pcVar2 = *pcVar2 + '\x01';
    pppppppuVar20 = (ulonglong *******)&pppppppuStack_108;
    if (SCARRY1(cVar14,'\x01') != *pcVar2 < '\0') {
      *(int *)(&UNK_1433880b9 + uVar17) = *(int *)(&UNK_1433880b9 + uVar17) + 0x4338812c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000141acff8c;
  case 0x2f:
    pppppppuStack_110 = (ulonglong *******)0x141ad0060;
    in_XMM0_Qa = (**(code **)(uVar17 + 0x13701d83b))();
    in_XMM0_Dc = extraout_XMM0_Dc_01;
    in_XMM0_Dd = extraout_XMM0_Dd_01;
code_r0x000141ad0060:
    auVar49._8_4_ = in_XMM0_Dc;
    auVar49._0_8_ = in_XMM0_Qa;
    auVar49._12_4_ = in_XMM0_Dd;
    auVar49 = maxps(in_XMM1,auVar49);
    pppppppuVar20 = (ulonglong *******)&pppppppuStack_108;
    fVar50 = auVar49._0_4_;
    goto code_r0x000141ad0063;
  case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
  case 0x38:
    pppppppuVar30 = (ulonglong *******)&pppppppuStack_108;
    goto code_r0x000141ad02b3;
  case 0x32:
  case 0x39:
  case 0x41:
    puVar24 = &UNK_14338812b;
    if (bVar46) goto code_r0x000141ad0342;
    goto code_r0x000141ad033e;
  case 0x33:
  case 0x3a:
  case 0x3f:
    DAT_142e37884 = DAT_142e37884 + ',' + bVar45;
    pppppppuVar30 = (ulonglong *******)&pppppppuStack_108;
    goto code_r0x000141ad02b3;
  default:
    if (SCARRY1((char)lVar40,(char)pppppppuVar44) !=
        (char)((char)lVar40 + (char)pppppppuVar44) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pppppppuStack_78 = (ulonglong *******)CONCAT44(pppppppuStack_78._4_4_,0x4338812c);
    pppppppuStack_110 = (ulonglong *******)0x141acfb7c;
    pdb_140a87f70();
    *(uint *)unaff_RBX = uVar37;
    uStack_b0 = SUB81(pppppppuVar42 + 0x15,0);
    uStack_af = (undefined7)((ulonglong)(pppppppuVar42 + 0x15) >> 8);
    pppppppuStack_110 = (ulonglong *******)0x141acfb8e;
    pdb_140a87f70();
    *(uint *)unaff_RBX = uVar37;
    uStack_a8 = SUB81(pppppppuVar42 + 0x1c,0);
    uStack_a7 = (undefined7)((ulonglong)(pppppppuVar42 + 0x1c) >> 8);
    pppppppuStack_110 = (ulonglong *******)0x141acfba0;
    pdb_140a87f70();
    *(uint *)unaff_RBX = uVar37;
    uStack_a0 = SUB81(pppppppuVar42 + 0x23,0);
    uStack_9f = (undefined7)((ulonglong)(pppppppuVar42 + 0x23) >> 8);
    pppppppuStack_110 = (ulonglong *******)0x141acfbb2;
    pdb_140a87f70();
    *(uint *)unaff_RBX = uVar37;
    uStack_98 = SUB81(pppppppuVar42 + 0x2a,0);
    uStack_97 = (undefined7)((ulonglong)(pppppppuVar42 + 0x2a) >> 8);
    pppppppuStack_110 = (ulonglong *******)0x141acfbc4;
    pdb_140a87f70();
    *(uint *)unaff_RBX = uVar37;
    uStack_90 = pppppppuVar42 + 0x31;
    pppppppuStack_110 = (ulonglong *******)0x141acfbd6;
    pdb_140a87f70();
    *(uint *)unaff_RBX = uVar37;
    uStack_88 = pppppppuVar42 + 0x38;
    pppppppuStack_110 = (ulonglong *******)0x141acfbf3;
    pppppppuStack_d8 = pppppppuVar42;
    uStack_c8 = unaff_RBX;
    pdb_140a87f70();
    ppppppuVar18 = *pppppppuRam0000000000000014;
    ppppppuVar23 = (ulonglong ******)0x0;
    ppppppuVar41 = (ulonglong ******)
                   ((longlong)ppppppuVar18 - (longlong)ppppppuRam000000000000001c[3]);
    if (ppppppuVar18 < ppppppuRam000000000000001c[3]) {
      ppppppuVar41 = ppppppuVar23;
    }
    param_2 = (ulonglong ******)((longlong)ppppppuVar18 - (longlong)ppppppuRam000000000000001c[7]);
    if (ppppppuVar18 < ppppppuRam000000000000001c[7]) {
      param_2 = ppppppuVar23;
    }
    pppppppuVar44 = (ulonglong *******)(ppppppuRam000000000000001c[1] + (longlong)ppppppuVar41 * 7);
    bVar45 = ppppppuRam000000000000001c[2] < ppppppuVar41;
    ppppppuVar18 = ppppppuRam000000000000001c;
    pppppppuVar30 = (ulonglong *******)&pppppppuStack_108;
    ppppppuVar41 = (ulonglong ******)
                   ((longlong)ppppppuRam000000000000001c[2] - (longlong)ppppppuVar41);
    pppppppuVar34 = pppppppuRam0000000000000014;
    if (bVar45) {
      pppppppuVar30 = (ulonglong *******)&pppppppuStack_108;
      ppppppuVar41 = ppppppuVar23;
    }
code_r0x000141acfc25:
    if (bVar45) {
      pppppppuVar44 = (ulonglong *******)0x8;
    }
    pppppppuVar39 = (ulonglong *******)(ppppppuVar18[5] + (longlong)param_2 * 7);
    ppppppuVar22 = (ulonglong ******)((longlong)ppppppuVar18[6] - (longlong)param_2);
    if (ppppppuVar18[6] < param_2) {
      pppppppuVar39 = (ulonglong *******)0x8;
      ppppppuVar22 = ppppppuVar23;
    }
    pppppppuStack_e0 = pppppppuVar34;
    *pppppppuVar34 =
         (ulonglong ******)
         ((longlong)ppppppuVar18[8] + (-(longlong)ppppppuVar41 - (longlong)ppppppuVar22));
    pppppppuStack_d0 = pppppppuVar44 + (longlong)ppppppuVar41 * 7;
    pppppppuStack_b8 = pppppppuVar39 + (longlong)ppppppuVar22 * 7;
    pppppppuStack_c0 = (ulonglong *******)*pppppppuVar36;
    unaff_XMM6_Da = _DAT_14300a334;
    pppppppuVar34 = uStack_90;
    goto LAB_141acfcb0;
  case 0x42:
  case 0x49:
  case 0x50:
    goto code_r0x000141ad02fc;
  case 0x43:
  case 0x44:
  case 0x4a:
  case 0x4b:
    (&UNK_143388165)[uVar17] = (&UNK_143388165)[uVar17] - (byte)ppppppuVar41;
code_r0x000141ad02fc:
    bVar45 = ((ulonglong)*pppppppuVar39 & 1) != 0;
    *(uint *)pppppppuVar39 = *(uint *)pppppppuVar39 >> 1 | (uint)bVar45 << 0x1f;
    *(int *)(uVar17 + 0x18b38812e) = *(int *)(uVar17 + 0x18b38812e) + -0x73 + (uint)bVar45;
    pppppppuVar30 = (ulonglong *******)&pppppppuStack_108;
    goto code_r0x000141ad0307;
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
    (&UNK_1433880b5)[uVar17] = (&UNK_1433880b5)[uVar17] + ',';
    pppppppuStack_110 = (ulonglong *******)0x141acfbb1;
    piVar19 = (int *)func_0x00013d30ba99();
    *(byte *)((longlong)ppppppuVar23 + -0x7172b6c5) =
         *(byte *)((longlong)ppppppuVar23 + -0x7172b6c5) - 1;
    *piVar19 = *piVar19 + (int)piVar19;
    *(char *)((longlong)piVar19 + -0x77) = *(char *)((longlong)piVar19 + -0x77) + (char)ppppppuVar23
    ;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
  case 0x52:
  case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x54:
    ppppppuVar23 = (ulonglong ******)&UNK_14338812b;
    if (bVar46) {
      *(undefined4 *)(uVar17 + 0x28671025f) = unaff_XMM6_Da;
      *(undefined4 *)(uVar17 + 0x286710263) = unaff_XMM6_Db;
      *(undefined4 *)(uVar17 + 0x286710267) = unaff_XMM6_Dc;
      *(undefined4 *)(uVar17 + 0x28671026b) = unaff_XMM6_Dd;
    }
    goto code_r0x000141ad1bfd;
  case 0x55:
    *(int *)(ulonglong)*(uint *)(param_2 + 2) = iVar15;
    pppppppuVar42 = (ulonglong *******)*param_2;
    pppppppuVar43 = (ulonglong *******)pppppppuVar42[6];
    pppppppuVar44 = (ulonglong *******)pppppppuVar42[8];
    if (pppppppuVar43 == (ulonglong *******)pppppppuVar42[4]) {
      pppppppuStack_110 = (ulonglong *******)0x141ad1bf2;
      pdb_142d7e6e0(pppppppuVar42 + 4);
    }
    ppppppuVar18 = pppppppuVar42[5];
    ppppppuVar23 = (ulonglong ******)((longlong)pppppppuVar43 << 5);
code_r0x000141ad1bfd:
    *(ulonglong ********)((longlong)ppppppuVar18 + (longlong)ppppppuVar23) = pppppppuVar44;
    *(undefined4 *)((longlong)(ppppppuVar18 + 1) + (longlong)ppppppuVar23) = unaff_XMM6_Da;
    *(undefined4 *)((longlong)((longlong)ppppppuVar18 + 0xc) + (longlong)ppppppuVar23) =
         unaff_XMM8_Da;
    *(undefined4 *)((longlong)(ppppppuVar18 + 2) + (longlong)ppppppuVar23) = unaff_XMM7_Da;
code_r0x000141ad1c14:
    *(undefined4 *)((longlong)((longlong)ppppppuVar18 + 0x14) + (longlong)ppppppuVar23) =
         unaff_XMM9_Da;
    *(byte *)((longlong)(ppppppuVar18 + 3) + (longlong)ppppppuVar23) = 1;
    *(byte *)((longlong)((longlong)ppppppuVar18 + 0x1c) + (longlong)ppppppuVar23) =
         (byte)pppppppuVar33;
    pppppppuVar42[6] = (ulonglong ******)((longlong)pppppppuVar43 + 1);
    pppppppuVar42[8] = (ulonglong ******)((longlong)pppppppuVar42[8] + 1);
    pppppppuVar42 = pppppppuStack_78;
    if ((char)pppppppuVar39 == '\0') {
      return;
    }
LAB_141ad1c41:
    pppppppuVar39 = (ulonglong *******)pppppppuVar42[2];
    if (pppppppuVar39 < (ulonglong *******)0x15) goto LAB_141ad1e3d;
    ppppppuVar18 = pppppppuVar42[1];
    ppppppuVar23 = (ulonglong ******)((longlong)unaff_RBX + (longlong)(ppppppuVar18 + -6));
    pppppppuVar33 =
         (ulonglong *******)
         (ulonglong)*(byte *)((longlong)(ppppppuVar18 + -6) + (longlong)unaff_RBX);
    goto code_r0x000141ad1c63;
  case 0x56:
    UNK_14338812b = UNK_14338812b ^ 0x2c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x57:
    goto LAB_141ad1c41;
  case 0x58:
    goto code_r0x000141ad1c14;
  case 0x59:
    ppppppuVar18 = (ulonglong ******)CONCAT71(uVar21,(cVar14 - bVar25) - bVar45);
    goto code_r0x000141ad1c63;
  case 0x5a:
    out(*(char *)pppppppuVar36,(short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5b:
    pbVar1 = &UNK_1433880af + uVar17;
    bVar25 = *pbVar1;
    bVar4 = *pbVar1;
    *pbVar1 = (bVar4 - 0x2c) - bVar45;
    uVar17 = (ulonglong)(bVar25 < 0x2c || (byte)(bVar4 - 0x2c) < bVar45) << 0x20 |
             (ulonglong)ppppppuVar18 & 0xffffffff;
    ppppppuVar18 = (ulonglong ******)
                   CONCAT71((uint7)((((ulonglong)ppppppuVar18 & 0x1ffff) << 0xf) >> 8) |
                            (uint7)(uVar17 >> 0x1a),
                            ((char)(uVar17 >> 0x12) - (char)param_2) -
                            (((ulonglong)ppppppuVar18 & 0x20000) != 0));
code_r0x000141ad1c63:
    pcVar2 = (char *)(((longlong)ppppppuVar18 - 0x2fU) + (longlong)unaff_RBX);
    pppppppuStack_68 = *(ulonglong ********)pcVar2;
    uStack_60 = *(ulonglong *******)(pcVar2 + 8);
    pcVar2 = (char *)(((longlong)ppppppuVar18 - 0x1fU) + (longlong)unaff_RBX);
    pppppppuStack_58 = *(ulonglong ********)pcVar2;
    uVar16 = *(undefined8 *)(pcVar2 + 8);
    pcVar2 = (char *)((longlong)(ppppppuVar18 + -2) + (longlong)unaff_RBX);
    uStack_45 = *(undefined4 *)(pcVar2 + 4);
    uStack_41 = *(undefined4 *)(pcVar2 + 8);
    uStack_3d = *(undefined4 *)(pcVar2 + 0xc);
    uStack_50 = (undefined1)uVar16;
    uStack_4f = (undefined4)((ulonglong)uVar16 >> 8);
    uStack_4b = (undefined2)((ulonglong)uVar16 >> 0x28);
    uStack_49._1_3_ = (undefined3)((uint)*(undefined4 *)pcVar2 >> 8);
    uStack_49._0_1_ = (undefined1)((ulonglong)uVar16 >> 0x38);
    pppppppuStack_110 = (ulonglong *******)0x141ad1c9d;
    pub_142e32770(ppppppuVar23);
    pppppppuVar39 = (ulonglong *******)((longlong)pppppppuVar39 + -1);
    pppppppuVar42[2] = (ulonglong ******)pppppppuVar39;
    if ((int)pppppppuVar33 != 0xc) {
      uStack_b0 = SUB81(pppppppuVar33,0);
      uStack_97 = CONCAT25(uStack_4b,CONCAT41(uStack_4f,uStack_50));
      uStack_af = SUB87(pppppppuStack_68,0);
      uStack_a8 = (undefined1)((ulonglong)pppppppuStack_68 >> 0x38);
      uStack_a7 = SUB87(uStack_60,0);
      uStack_a0 = (undefined1)((ulonglong)uStack_60 >> 0x38);
      uStack_9f = SUB87(pppppppuStack_58,0);
      uStack_98 = (undefined1)((ulonglong)pppppppuStack_58 >> 0x38);
      uStack_90._0_4_ = uStack_49;
      uStack_90._4_4_ = uStack_45;
      uStack_88 = (ulonglong *******)CONCAT44(uStack_3d,uStack_41);
      switch((ulonglong)pppppppuVar33 & 0xffffffff) {
      case 0:
      case 1:
      case 2:
        plVar6 = (longlong *)CONCAT71(uStack_9f,uStack_a0);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          pppppppuStack_110 = (ulonglong *******)0x141ad1d12;
          pdb_140c7b830(&uStack_a0);
        }
        break;
      case 3:
        plVar6 = (longlong *)CONCAT71(uStack_a7,uStack_a8);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          pppppppuStack_110 = (ulonglong *******)0x141ad1d53;
          pdb_140c7a720();
        }
        break;
      case 4:
        pppppppuStack_110 = (ulonglong *******)0x141ad1d1c;
        pdb_14099a2e0();
        break;
      case 5:
        plVar6 = (longlong *)CONCAT71(uStack_9f,uStack_a0);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          pppppppuStack_110 = (ulonglong *******)0x141ad1d84;
          pdb_140c7a0f0(&uStack_a0);
        }
        break;
      case 6:
        plVar6 = (longlong *)CONCAT71(uStack_9f,uStack_a0);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          pppppppuStack_110 = (ulonglong *******)0x141ad1d9b;
          pdb_140c7a030(&uStack_a0);
        }
        break;
      case 7:
        plVar6 = (longlong *)CONCAT71(uStack_9f,uStack_a0);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          pppppppuStack_110 = (ulonglong *******)0x141ad1d6d;
          pdb_140c7a030(&uStack_a0);
        }
        break;
      case 8:
        plVar6 = (longlong *)CONCAT71(uStack_9f,uStack_a0);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          pppppppuStack_110 = (ulonglong *******)0x141ad1dc9;
          pdb_140c7b150(&uStack_a0);
        }
        break;
      case 9:
        plVar6 = (longlong *)CONCAT71(uStack_9f,uStack_a0);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          pppppppuStack_110 = (ulonglong *******)0x141ad1d3a;
          pdb_140315620(&uStack_a0);
        }
        break;
      case 10:
        plVar6 = (longlong *)CONCAT71(uStack_9f,uStack_a0);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          pppppppuStack_110 = (ulonglong *******)0x141ad1db2;
          pdb_140740180(&uStack_a0);
        }
        break;
      default:
        plVar6 = (longlong *)CONCAT71(uStack_a7,uStack_a8);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          pppppppuStack_110 = (ulonglong *******)0x141ad1ddb;
          pdb_140c7bc60(&uStack_a8);
        }
      }
      return;
    }
LAB_141ad1e3d:
    pppppppuStack_110 = (ulonglong *******)0x141ad1e4f;
    pdb_142dc7ef8(0x14,pppppppuVar39,&UNK_1433880a8);
                    /* WARNING: Subroutine does not return */
    pppppppuStack_110 = (ulonglong *******)0x141ad1e5f;
    pdb_142dc81f2(0,0,&UNK_143388090);
  case 0x5c:
    puVar3 = (uint *)(&UNK_1433880b9 + uVar17);
    *puVar3 = *puVar3 >> 1 | (uint)((*puVar3 & 1) != 0) << 0x1f;
    goto pdb_140f679a0;
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
    uStack_118 = 0x14;
    pppppppuVar31 = (ulonglong *******)auStack_170;
    pppppppuVar34 = (ulonglong *******)(param_2 + 0x10);
    if (param_2[0x11] == (ulonglong *****)0x0) {
      return;
    }
    ppppppuVar18 = (ulonglong ******)((longlong)param_2[0x11] << 3);
    pppppppuStack_148 = unaff_RBX;
    pppppppuStack_140 = pppppppuVar39;
    pppppppuStack_138 = pppppppuVar36;
    pppppppuStack_130 = pppppppuVar43;
    pppppppuStack_128 = pppppppuVar44;
    pppppppuStack_120 = pppppppuVar42;
    pppppppuStack_110 = pppppppuVar33;
    ppppppuStack_f8 = param_2;
    goto code_r0x000141ad85b9;
  case 99:
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  case 100:
    *(char *)(uVar17 + 0x16bfd0474) = *(char *)(uVar17 + 0x16bfd0474) + (char)param_2;
    return;
  case 0x65:
    ppppppuVar23 = param_2;
    goto pdb_140f679a0;
  case 0x66:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 0x67:
    *(uint *)ppppppuVar18 = *(uint *)ppppppuVar18 + iVar15;
    (&UNK_1433880af)[uVar17] = (&UNK_1433880af)[uVar17] + ',';
    *(uint *)ppppppuVar18 = *(uint *)ppppppuVar18 >> 8 | *(uint *)ppppppuVar18 << 0x18;
    uVar32 = (ulonglong)((int)&pppppppuStack_108 + 0x48);
    uVar16 = *(undefined8 *)(uVar32 + 0x18);
    *(undefined8 *)(uVar32 + 0x18) = *(undefined8 *)(uVar32 + 0x10);
    lVar7 = _UNK_14338812c;
    plVar6 = *(longlong **)(_UNK_14338812c + 0x18);
    LOCK();
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      *(undefined **)(uVar32 - 0x10) = &UNK_140c7b84b;
      pdb_140c79ee0(lVar7 + 0x18);
    }
    if (lVar7 != -1) {
      LOCK();
      plVar6 = (longlong *)(lVar7 + 8);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        uVar10 = *(undefined8 *)(uVar32 + 0x18);
        *(undefined8 *)(uVar32 + 0x18) = uVar16;
        *(undefined8 *)(uVar32 + 0x10) = uVar10;
        *(undefined **)(uVar32 - 0x20) = &UNK_140f3c37e;
        uVar16 = GetProcessHeap(lVar7,0x30);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar16,0,lVar7);
        return;
      }
    }
    return;
  case 0x68:
    uStack_118 = 0x14;
    puStack_178 = &UNK_141ad8605;
    pppppppuStack_148 = unaff_RBX;
    pppppppuStack_140 = pppppppuVar39;
    pppppppuStack_138 = pppppppuVar36;
    pppppppuStack_130 = pppppppuVar43;
    pppppppuStack_128 = pppppppuVar44;
    pppppppuStack_120 = pppppppuVar42;
    pppppppuStack_110 = pppppppuVar33;
    pdb_141ad86d0(param_2 + 0xb);
    return;
  case 0x69:
    ppppppuVar23 = (ulonglong ******)((ulonglong)param_2 & 0xffffffff);
    goto pdb_140f679a0;
  case 0x6a:
    *(char *)pppppppuVar39 = cVar14;
    *(char *)ppppppuVar18 = *(char *)ppppppuVar18;
    (&UNK_1433880b7)[uVar17] = (&UNK_1433880b7)[uVar17] + ',';
    *(byte *)(lVar40 + -0x7b) = *(byte *)(lVar40 + -0x7b) | (byte)ppppppuVar41;
    pcVar2 = &UNK_143388174 + uVar17 + (longlong)unaff_RBX;
    *pcVar2 = *pcVar2 << 1;
    pppppppuVar34 = pppppppuVar33;
    if (*pcVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x000141ad85b9:
    ppppppuVar23 = *pppppppuVar34;
    *(undefined **)((longlong)pppppppuVar31 + -8) = &UNK_141ad85cc;
    pub_1406abac0((byte *)ppppppuVar23,(longlong)ppppppuVar18 * 3,8);
    return;
  case 0x6b:
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)ppppppuVar23[1][3])(*ppppppuVar23);
    return;
  case 0x6c:
    cVar5 = *(char *)((longlong)pppppppuVar39 + 0x74);
    pcVar2 = (char *)((longlong)pppppppuVar36 + 0x67);
    *pcVar2 = *pcVar2 + '\x01';
    do {
    } while (*pcVar2 == '\0');
    _UNK_1433881a0 = _UNK_1433881a0 | (uint)pppppppuVar33;
    *(char *)pppppppuVar39 = *(char *)pppppppuVar39 + '\x01';
    do {
    } while (*(char *)pppppppuVar39 == '\0');
    uVar17 = CONCAT62((int6)((ulonglong)ppppppuVar18 >> 0x10),
                      CONCAT11((char)((ulonglong)ppppppuVar18 >> 8) + cVar5,cVar14)) & 0xffffffff;
    *(char *)((longlong)pppppppuVar39 + 0x74) = '\0';
    if (bVar25 < 0x80) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    UNK_1433881a9 = UNK_1433881a9 + -1;
    do {
    } while (UNK_1433881a9 == '\0');
    pcVar2 = (char *)((longlong)pppppppuVar39 * 2 + 0x7da8fe74);
    cVar14 = *pcVar2;
    *pcVar2 = *pcVar2 + '\x01';
    do {
    } while (*pcVar2 == '\0');
    if (SCARRY1(cVar14,'\x01') == *pcVar2 < '\0') {
      if (SCARRY1(cVar14,'\x01') != *pcVar2 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar3 = (uint *)((longlong)pppppppuVar36 + (longlong)pppppppuVar39 * 8 + 0x7c);
      *puVar3 = *puVar3 ^ 0x7cfe747a;
      if ((POPCOUNT(*puVar3 & 0xff) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar2 = (char *)(uVar17 + 0x74 + (longlong)pppppppuVar39 * 2);
      *pcVar2 = *pcVar2 + '\x01';
      pcVar2 = (char *)(uVar17 + 0x74 + (longlong)pppppppuVar39 * 2);
      *pcVar2 = *pcVar2 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (ppppppuVar23 == (ulonglong ******)0x0) {
    pppppppuStack_110 = (ulonglong *******)0x141ace92f;
    uStack_c8 = pppppppuVar43;
    pdb_14007ee60();
    pppppppuStack_110 = (ulonglong *******)0x141ace93c;
    ppppppuVar23 = (ulonglong ******)pub_1406abab0((ulonglong)arg0,1);
    if (ppppppuVar23 == (ulonglong ******)0x0) {
      pppppppuStack_110 = (ulonglong *******)0x141aceac7;
      pdb_142dc7e2a(1,arg0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pppppppuStack_110 = (ulonglong *******)0x141ace956;
    pub_142e32760(ppppppuVar23,pppppppuVar39,arg0);
    pppppppuStack_78 = (ulonglong *******)0x0;
    uStack_50 = 2;
    unaff_RBX = pppppppuVar39;
    pppppppuVar43 = uStack_c8;
    pppppppuStack_68 = arg0;
    uStack_60 = ppppppuVar23;
    pppppppuStack_58 = arg0;
  }
  else {
    pppppppuStack_110 = (ulonglong *******)0x141ace8ef;
    pdb_140a8b180(&pppppppuStack_78,(ulonglong ******)((longlong)ppppppuVar23 + 0x10),pppppppuVar39,
                  arg0);
    if ((int)pppppppuStack_78 == 2) {
      uStack_a8 = (undefined1)uStack_70;
      uStack_a7 = (undefined7)(CONCAT44(uStack_6c,uStack_70) >> 8);
      puStack_e8 = &UNK_1433878d0;
                    /* WARNING: Subroutine does not return */
      pppppppuStack_110 = (ulonglong *******)0x141aceab7;
      pdb_142dc8170(&UNK_143388100,0x2b,&uStack_a8,&UNK_1433880e0);
    }
  }
  pppppppuVar39 = (ulonglong *******)&pppppppuStack_78;
  uStack_88 = pppppppuStack_58;
  uStack_80 = uStack_50;
  uStack_7f = uStack_4f;
  uStack_7b = uStack_4b;
  uStack_79 = (undefined1)uStack_49;
  uStack_98 = SUB81(pppppppuStack_68,0);
  uStack_97 = (undefined7)((ulonglong)pppppppuStack_68 >> 8);
  uStack_90._0_4_ = SUB84(uStack_60,0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_a8 = SUB81(pppppppuStack_78,0);
  uStack_a7 = (undefined7)((ulonglong)pppppppuStack_78 >> 8);
  uStack_a0 = (undefined1)uStack_70;
  uStack_9f = (undefined7)(CONCAT44(uStack_6c,uStack_70) >> 8);
  uStack_70 = *(uint *)(pppppppuVar42 + 2);
  pppppppuStack_78 = (ulonglong *******)pppppppuVar42[1];
  pppppppuStack_110 = (ulonglong *******)0x141ace9e5;
  ppppppuVar41 = uStack_60;
  pdb_140a8e190(&uStack_a8,pppppppuVar39);
  lVar40 = 5;
  pppppppuStack_110 = (ulonglong *******)0x141acea01;
  pdb_140a8e730(&uStack_a8,&UNK_1433878e8,5,*(uint *)((longlong)pppppppuVar42 + 0x14));
  pppppppuStack_110 = (ulonglong *******)0x141acea0a;
  pdb_140a8a6f0(&uStack_a8);
  pppppppuStack_110 = (ulonglong *******)0x141acea13;
  in_XMM0_Qa = pdb_1409a5ed0(&uStack_a8);
  param_2 = (ulonglong ******)CONCAT71(uStack_97,uStack_98);
  pppppppuVar42 = pppppppuVar43;
  in_XMM0_Dc = extraout_XMM0_Dc;
  in_XMM0_Dd = extraout_XMM0_Dd;
  if (param_2 != (ulonglong ******)0x0) {
    lVar40 = 1;
    pppppppuStack_110 = (ulonglong *******)0x141acea30;
    pub_1406abac0((byte *)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90),(ulonglong)param_2,1);
    in_XMM0_Qa = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    in_XMM0_Dc = extraout_XMM0_Dc_00;
    in_XMM0_Dd = extraout_XMM0_Dd_00;
  }
  goto code_r0x000141ace7d0;
code_r0x000141acea35:
  pppppppuStack_b8 = (ulonglong *******)CONCAT71(uVar21,1);
  pppppppuVar42 = pppppppuVar43;
  goto code_r0x000141ace7d0;
code_r0x000141ad00f0:
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

