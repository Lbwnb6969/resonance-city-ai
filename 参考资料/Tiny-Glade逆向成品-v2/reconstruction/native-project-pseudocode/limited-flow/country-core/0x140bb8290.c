// VA 0x140bb8290, PDB extent 3290 bytes
// country_core::systems::audio::wall_audio_ui::wall_audio_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_ui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140bb8fdc) overlaps instruction at (ram,0x000140bb8fda)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::wall_audio_ui::wall_audio_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_ui.rs
   Extent: 3290 */

void pdb_140bb8290(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  byte bVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  undefined *puVar15;
  ulonglong uVar16;
  float *pfVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  ulonglong *unaff_RBX;
  longlong *plVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  uint uVar29;
  undefined8 in_R11;
  byte *pbVar30;
  byte *pbVar31;
  undefined8 uVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined4 *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  int unaff_XMM7_Da;
  float fVar40;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  longlong *in_stack_00000048;
  char *in_stack_00000050;
  longlong *in_stack_00000058;
  longlong *in_stack_00000060;
  uint in_stack_ffffffffb5643065;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined8 *puStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined1 uStack_b0;
  undefined4 uStack_af;
  undefined2 uStack_ab;
  byte bStack_a9;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  
  uStack_70 = 0xfffffffffffffffe;
  puVar3 = (ulonglong *)*param_2;
  lVar13 = param_2[1];
  uVar16 = *puVar3;
  puVar18 = (undefined8 *)0x0;
  puVar24 = (undefined8 *)(uVar16 - *(ulonglong *)(lVar13 + 0x18));
  if (uVar16 < *(ulonglong *)(lVar13 + 0x18)) {
    puVar24 = puVar18;
  }
  puVar23 = (undefined8 *)(uVar16 - *(ulonglong *)(lVar13 + 0x38));
  if (uVar16 < *(ulonglong *)(lVar13 + 0x38)) {
    puVar23 = puVar18;
  }
  pbVar30 = (byte *)((longlong)puVar24 * 0x20 + *(longlong *)(lVar13 + 8));
  puVar4 = *(undefined8 **)(lVar13 + 0x10);
  puVar27 = (undefined8 *)((longlong)puVar4 - (longlong)puVar24);
  if (puVar4 < puVar24) {
    puVar27 = puVar18;
  }
  pbVar25 = (byte *)0x8;
  if (puVar4 < puVar24) {
    pbVar30 = (byte *)0x8;
  }
  pbVar33 = (byte *)((longlong)puVar23 * 0x20 + *(longlong *)(lVar13 + 0x28));
  puVar24 = (undefined8 *)((longlong)*(undefined8 **)(lVar13 + 0x30) - (longlong)puVar23);
  if (*(undefined8 **)(lVar13 + 0x30) < puVar23) {
    pbVar33 = (byte *)0x8;
    puVar24 = puVar18;
  }
  *puVar3 = (*(longlong *)(lVar13 + 0x40) - (longlong)puVar24) - (longlong)puVar27;
  fVar37 = _DAT_142e36f28;
  plVar20 = (longlong *)*param_1;
  pbVar28 = pbVar30 + (longlong)puVar27 * 0x20;
  pbVar21 = pbVar30;
  pbVar34 = pbVar33;
  fStack_68 = unaff_XMM6_Da;
  uStack_64 = unaff_XMM6_Db;
  uStack_60 = unaff_XMM6_Dc;
  uStack_5c = unaff_XMM6_Dd;
  iStack_58 = unaff_XMM7_Da;
LAB_140bb837a:
  uVar29 = (uint)in_R11;
  if ((pbVar21 == (byte *)0x0) || (pbVar21 == pbVar30 + (longlong)puVar27 * 0x20)) {
    if ((pbVar34 == (byte *)0x0) || (pbVar34 == pbVar33 + (longlong)puVar24 * 0x20)) {
      return;
    }
    pbVar35 = pbVar34 + 0x20;
    pbVar31 = (byte *)0x0;
    pbVar21 = pbVar34;
  }
  else {
    pbVar31 = pbVar21 + 0x20;
    pbVar35 = pbVar34;
  }
  *puVar3 = *puVar3 + 1;
  puVar15 = &UNK_1430620cc;
  pcVar12 = &UNK_1430620cc + *(int *)(&UNK_1430620cc + (ulonglong)pbVar21[8] * 4);
  pbVar22 = pbVar21;
  pbVar26 = pbVar25;
  pbVar34 = pbVar35;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pbVar21[8]) {
  case 0:
    bVar2 = pbVar21[9];
    if (*plVar20 != 0) {
      pdb_140a8aa00(*plVar20 + 0x10,&UNK_1430619f0,0xd,*(undefined4 *)(pbVar21 + 0xc));
    }
    puVar23 = (undefined8 *)0x13;
    if (bVar2 != 0) {
      puVar23 = (undefined8 *)0x19;
    }
    puVar18 = (undefined8 *)&UNK_1430619fd;
    unaff_RBX = puVar3;
    if (bVar2 != 0) {
      puVar18 = (undefined8 *)&UNK_143061a10;
    }
    break;
  case 1:
    puVar23 = (undefined8 *)0x18;
    puVar18 = (undefined8 *)&UNK_143061a29;
    break;
  case 2:
    puVar23 = (undefined8 *)0x1c;
    puVar18 = (undefined8 *)&UNK_143061a41;
    break;
  case 3:
    puVar23 = (undefined8 *)0x14;
    puVar18 = (undefined8 *)&UNK_143061a5d;
    break;
  case 4:
    puVar23 = (undefined8 *)0x16;
    puVar18 = (undefined8 *)&UNK_143061a71;
    break;
  case 5:
    puVar23 = (undefined8 *)0x1e;
    puVar18 = (undefined8 *)&UNK_143061a87;
    break;
  case 6:
    bVar2 = pbVar21[9];
    if (*plVar20 == 0) {
      pdb_14007ee60();
      pbVar25 = pub_1406abab0(0x16,1);
      uVar9 = _UNK_143061ab1;
      uVar8 = _UNK_143061aad;
      uVar19 = _UNK_143061aa9;
      if (pbVar25 == (byte *)0x0) {
code_r0x000140bb8b46:
        pdb_142dc7e2a(1,0x16);
code_r0x000140bb8b55:
        pdb_142dc7e2a(1,0x19);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)pbVar25 = _UNK_143061aa5;
      *(undefined4 *)(pbVar25 + 4) = uVar19;
      *(undefined4 *)(pbVar25 + 8) = uVar8;
      *(undefined4 *)(pbVar25 + 0xc) = uVar9;
      pbVar25[0xe] = 0x6f;
      pbVar25[0xf] = 0x72;
      pbVar25[0x10] = 0x42;
      pbVar25[0x11] = 0x72;
      pbVar25[0x12] = 0x69;
      pbVar25[0x13] = 99;
      pbVar25[0x14] = 0x6b;
      pbVar25[0x15] = 0x73;
      auStack_a0 = (undefined1  [8])0x0;
      puStack_90 = (undefined8 *)0x16;
      pbStack_80 = (byte *)0x16;
      uStack_78 = (char *)CONCAT71(uStack_78._1_7_,2);
      uStack_88 = pbVar25;
    }
    else {
      pdb_140a8b180(auStack_a0,*plVar20 + 0x10,&UNK_143061aa5,0x16);
      if (auStack_a0._0_4_ == 2) {
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143061da0,0x2b,&uStack_d8,&UNK_143061d80);
      }
    }
    uStack_d0 = CONCAT44(uStack_94,uStack_98);
    pbStack_b8 = pbStack_80;
    uStack_b0 = (undefined1)uStack_78;
    uStack_af = uStack_78._1_4_;
    uStack_ab = uStack_78._5_2_;
    pbVar25 = (byte *)(ulonglong)uStack_78._7_1_;
    bStack_a9 = uStack_78._7_1_;
    puStack_c8 = puStack_90;
    pbStack_c0 = uStack_88;
    uStack_d8 = (ulonglong)auStack_a0;
    uStack_98 = *(undefined4 *)(pbVar21 + 0x18);
    auStack_a0 = *(undefined1 (*) [8])(pbVar21 + 0x10);
    pdb_140a8e190(&uStack_d8,auStack_a0);
    fVar40 = fVar37;
    if (bVar2 == 0) {
      fVar40 = 0.0;
    }
    puVar23 = (undefined8 *)0xe;
    pdb_140a8e730(&uStack_d8,&UNK_143061b10,0xe,fVar40);
    pdb_140a8a6f0(&uStack_d8);
    pdb_1409a5ed0(&uStack_d8);
    goto code_r0x000140bb8a1c;
  case 7:
    puVar23 = (undefined8 *)0x14;
    puVar18 = (undefined8 *)&UNK_143061b1e;
    break;
  case 8:
    puVar23 = (undefined8 *)0x14;
    puVar18 = (undefined8 *)&UNK_143061b32;
    break;
  case 9:
    puVar23 = (undefined8 *)(((ulonglong)pbVar21[9] ^ 1) * 3 + 0x1e);
    puVar18 = (undefined8 *)&UNK_143061b46;
    if ((ulonglong)pbVar21[9] != 0) {
      puVar18 = (undefined8 *)&UNK_143061b67;
    }
    break;
  case 10:
    puVar23 = (undefined8 *)0x16;
    puVar18 = (undefined8 *)&UNK_143061b85;
    break;
  case 0xb:
    puVar23 = (undefined8 *)0x14;
    puVar18 = (undefined8 *)&UNK_143061b9b;
    break;
  case 0xc:
    puVar23 = (undefined8 *)0x1a;
    puVar18 = (undefined8 *)&UNK_143061baf;
    break;
  case 0xd:
    uVar29 = *(uint *)(pbVar21 + 0xc);
    if (*plVar20 == 0) {
      pdb_14007ee60();
      pbVar25 = pub_1406abab0(0x17,1);
      uVar9 = _UNK_143061bd5;
      uVar8 = _UNK_143061bd1;
      uVar19 = _UNK_143061bcd;
      if (pbVar25 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x17);
code_r0x000140bb8b37:
        pdb_142dc7e2a(1,0x1a);
        goto code_r0x000140bb8b46;
      }
      *(undefined4 *)pbVar25 = _UNK_143061bc9;
      *(undefined4 *)(pbVar25 + 4) = uVar19;
      *(undefined4 *)(pbVar25 + 8) = uVar8;
      *(undefined4 *)(pbVar25 + 0xc) = uVar9;
      pbVar25[0xf] = 0x72;
      pbVar25[0x10] = 0x4c;
      pbVar25[0x11] = 0x61;
      pbVar25[0x12] = 0x6e;
      pbVar25[0x13] = 0x74;
      pbVar25[0x14] = 0x65;
      pbVar25[0x15] = 0x72;
      pbVar25[0x16] = 0x6e;
      auStack_a0 = (undefined1  [8])0x0;
      puStack_90 = (undefined8 *)0x17;
      pbStack_80 = (byte *)0x17;
      uStack_78 = (char *)CONCAT71(uStack_78._1_7_,2);
      uStack_88 = pbVar25;
    }
    else {
      pdb_140a8b180(auStack_a0,*plVar20 + 0x10,&UNK_143061bc9,0x17);
      if (auStack_a0._0_4_ == 2) {
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143061da0,0x2b,&uStack_d8,&UNK_143061d80);
      }
    }
    uStack_d0 = CONCAT44(uStack_94,uStack_98);
    pbStack_b8 = pbStack_80;
    uStack_b0 = (undefined1)uStack_78;
    uStack_af = uStack_78._1_4_;
    uStack_ab = uStack_78._5_2_;
    pbVar25 = (byte *)(ulonglong)uStack_78._7_1_;
    bStack_a9 = uStack_78._7_1_;
    puStack_c8 = puStack_90;
    pbStack_c0 = uStack_88;
    uStack_d8 = (ulonglong)auStack_a0;
    uStack_98 = *(undefined4 *)(pbVar21 + 0x18);
    auStack_a0 = *(undefined1 (*) [8])(pbVar21 + 0x10);
    pdb_140a8e190(&uStack_d8,auStack_a0);
    puVar23 = (undefined8 *)0xc;
    pdb_140a8e730(&uStack_d8,&UNK_143061bf8,0xc,(float)uVar29);
    pdb_140a8a6f0(&uStack_d8);
    pdb_1409a5ed0(&uStack_d8);
    goto code_r0x000140bb8a1c;
  case 0xe:
    unaff_XMM6_Da = *(float *)(pbVar21 + 0xc);
    unaff_XMM6_Db = 0;
    unaff_XMM6_Dc = 0;
    unaff_XMM6_Dd = 0;
    if (*plVar20 == 0) {
      pdb_14007ee60();
      pbVar25 = pub_1406abab0(0x19,1);
      uVar32 = _UNK_143061c15;
      if (pbVar25 == (byte *)0x0) goto code_r0x000140bb8b55;
      *(ulonglong *)(pbVar25 + 9) = CONCAT17(UNK_143061c14,CONCAT43(_UNK_143061c10,_UNK_143061c0d));
      *(undefined8 *)(pbVar25 + 0x11) = uVar32;
      uVar9 = _UNK_143061c10;
      uVar8 = _UNK_143061c0c;
      uVar19 = _UNK_143061c08;
      *(undefined4 *)pbVar25 = _UNK_143061c04;
      *(undefined4 *)(pbVar25 + 4) = uVar19;
      *(undefined4 *)(pbVar25 + 8) = uVar8;
      *(undefined4 *)(pbVar25 + 0xc) = uVar9;
      auStack_a0 = (undefined1  [8])0x0;
      puStack_90 = (undefined8 *)0x19;
      pbStack_80 = (byte *)0x19;
      uStack_78 = (char *)CONCAT71(uStack_78._1_7_,2);
      uStack_88 = pbVar25;
    }
    else {
      pdb_140a8b180(auStack_a0,*plVar20 + 0x10,&UNK_143061c04,0x19);
      if (auStack_a0._0_4_ == 2) {
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143061da0,0x2b,&uStack_d8,&UNK_143061d80);
      }
    }
    uStack_d0 = CONCAT44(uStack_94,uStack_98);
    pbStack_b8 = pbStack_80;
    uStack_b0 = (undefined1)uStack_78;
    uStack_af = uStack_78._1_4_;
    uStack_ab = uStack_78._5_2_;
    pbVar25 = (byte *)(ulonglong)uStack_78._7_1_;
    bStack_a9 = uStack_78._7_1_;
    puStack_c8 = puStack_90;
    pbStack_c0 = uStack_88;
    uStack_d8 = (ulonglong)auStack_a0;
    uStack_98 = *(undefined4 *)(pbVar21 + 0x18);
    auStack_a0 = *(undefined1 (*) [8])(pbVar21 + 0x10);
    pdb_140a8e190(&uStack_d8,auStack_a0);
    puVar23 = (undefined8 *)0xf;
    pdb_140a8e730(&uStack_d8,&UNK_143061c38,0xf,unaff_XMM6_Da);
    pdb_140a8a6f0(&uStack_d8);
    pdb_1409a5ed0(&uStack_d8);
    goto code_r0x000140bb8a1c;
  case 0xf:
    puVar23 = (undefined8 *)((ulonglong)pbVar21[9] ^ 0x21);
    puVar18 = (undefined8 *)&UNK_143061c47;
    if ((ulonglong)pbVar21[9] != 0) {
      puVar18 = (undefined8 *)&UNK_143061c68;
    }
    break;
  case 0x10:
    bVar2 = pbVar21[9];
    if (*plVar20 == 0) {
      pdb_14007ee60();
      pbVar25 = pub_1406abab0(0x1a,1);
      uVar32 = _UNK_143061c9a;
      if (pbVar25 == (byte *)0x0) goto code_r0x000140bb8b37;
      *(ulonglong *)(pbVar25 + 10) =
           CONCAT26(_UNK_143061c98,CONCAT42(_UNK_143061c94,_UNK_143061c92));
      *(undefined8 *)(pbVar25 + 0x12) = uVar32;
      uVar9 = _UNK_143061c94;
      uVar8 = _UNK_143061c8c;
      uVar19 = CONCAT22(_UNK_143061c92,_UNK_143061c90);
      *(undefined4 *)pbVar25 = _UNK_143061c88;
      *(undefined4 *)(pbVar25 + 4) = uVar8;
      *(undefined4 *)(pbVar25 + 8) = uVar19;
      *(undefined4 *)(pbVar25 + 0xc) = uVar9;
      auStack_a0 = (undefined1  [8])0x0;
      puStack_90 = (undefined8 *)0x1a;
      pbStack_80 = (byte *)0x1a;
      uStack_78 = (char *)CONCAT71(uStack_78._1_7_,2);
      uStack_88 = pbVar25;
    }
    else {
      pdb_140a8b180(auStack_a0,*plVar20 + 0x10,&UNK_143061c88,0x1a);
      if (auStack_a0._0_4_ == 2) {
        uStack_d8 = CONCAT44(uStack_94,uStack_98);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143061da0,0x2b,&uStack_d8,&UNK_143061d80);
      }
    }
    uStack_d0 = CONCAT44(uStack_94,uStack_98);
    pbStack_b8 = pbStack_80;
    uStack_b0 = (undefined1)uStack_78;
    uStack_af = uStack_78._1_4_;
    uStack_ab = uStack_78._5_2_;
    pbVar25 = (byte *)(ulonglong)uStack_78._7_1_;
    bStack_a9 = uStack_78._7_1_;
    puStack_c8 = puStack_90;
    pbStack_c0 = uStack_88;
    uStack_d8 = (ulonglong)auStack_a0;
    uStack_98 = *(undefined4 *)(pbVar21 + 0x18);
    auStack_a0 = *(undefined1 (*) [8])(pbVar21 + 0x10);
    pdb_140a8e190(&uStack_d8,auStack_a0);
    puVar23 = (undefined8 *)0xa;
    pdb_140a8e730(&uStack_d8,&UNK_143061cc0,10,
                  *(undefined4 *)(&UNK_143062048 + (ulonglong)bVar2 * 4));
    pdb_140a8a6f0(&uStack_d8);
    pdb_1409a5ed0(&uStack_d8);
code_r0x000140bb8a1c:
    unaff_RBX = (ulonglong *)auStack_a0;
    puVar18 = puStack_c8;
    pbVar21 = pbVar31;
    if (puStack_c8 != (undefined8 *)0x0) {
      puVar23 = (undefined8 *)0x1;
      pub_1406abac0(pbStack_c0,(ulonglong)puStack_c8,1);
    }
    goto LAB_140bb837a;
  case 0x11:
  case 0x12:
    puVar23 = (undefined8 *)0x14;
    puVar18 = (undefined8 *)&UNK_143061cca;
    break;
  case 0x13:
  case 0x14:
    puVar23 = (undefined8 *)0x27;
    puVar18 = (undefined8 *)&UNK_143061cde;
    break;
  case 0x15:
  case 0x16:
    iStack_58 = iStack_58 - (int)pbVar21;
  case 0x22:
  case 0x23:
code_r0x000140bb8f94:
    fStack_68 = unaff_XMM6_Da;
    uStack_64 = unaff_XMM6_Db;
    uStack_60 = unaff_XMM6_Dc;
    uStack_5c = unaff_XMM6_Dd;
    uStack_70 = 0xfffffffffffffffe;
    pbVar26 = (byte *)*puVar18;
    pcVar12 = (char *)(ulonglong)*_UNK_1430620cc;
    plVar20 = in_stack_00000058;
    pbVar22 = pbVar25;
    pbVar28 = _UNK_1430620cc;
code_r0x000140bb8fb4:
    cVar10 = (char)pcVar12;
    uVar29 = (uint)pcVar12 & 0xff;
    puVar15 = (undefined *)0x0;
    if (*pbVar26 == 1) {
      unaff_RBX = (ulonglong *)(ulonglong)(uVar29 - 2);
      if (uVar29 - 2 < 0xd) {
        pbVar35 = &UNK_143062120;
code_r0x000140bb8fdc:
        unaff_RBX = (ulonglong *)(longlong)*(int *)(pbVar35 + (longlong)unaff_RBX * 4);
code_r0x000140bb8fe0:
                    /* WARNING: Could not recover jumptable at 0x000140bb8fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((longlong)unaff_RBX + (longlong)pbVar35))(puVar15);
        return;
      }
      bVar2 = pbVar28[1];
    }
    else {
LAB_140bb8ffc:
      cVar10 = (char)pcVar12;
      bVar2 = pbVar28[1];
    }
    if (uVar29 - 2 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x000140bb9019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_143062154 + *(int *)(&UNK_143062154 + (ulonglong)(uVar29 - 2) * 4)))();
      return;
    }
    if ((cVar10 != '\x04') || ((bVar2 != 0 && (bVar2 != 5)))) goto LAB_140bb928e;
    if ((char)puVar15 == '\0') {
      fVar37 = (float)pdb_140de8220(_DAT_142e37988,_DAT_142e37830,*(undefined4 *)*in_stack_00000038)
      ;
      unaff_XMM6_Da = fVar37 * _DAT_142e37adc + (_DAT_142e36f28 - fVar37);
    }
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    pbStack_b8 = (byte *)((ulonglong)pbStack_b8 & 0xffffffff00000000);
    auStack_a0 = (undefined1  [8])((ulonglong)auStack_a0 & 0xffffffff00000000);
    puVar15 = &UNK_143061d05;
    lVar13 = pdb_1408ffe50(*puVar23,&UNK_143061d05,6,9);
    pfVar17 = (float *)&UNK_143044340;
    if (**(char **)pbVar22 != '\0') {
      pfVar17 = (float *)(*(char **)pbVar22 + 4);
    }
    if ((*(char *)(lVar13 + 0x18) == '\x02') && (*(undefined **)(lVar13 + 0x38) == puVar15)) {
      fVar37 = unaff_XMM6_Da * _DAT_142e36f50;
      if (*(byte *)(lVar13 + 0x19) < 2) {
        if ((byte)(*in_stack_00000050 - 1U) < 2) {
          *in_stack_00000050 = '\x03';
          uVar19 = *(undefined4 *)((longlong)in_stack_00000048 + 0x1c);
          puVar36 = (undefined4 *)in_stack_00000048[2];
          *puVar36 = uVar19;
          lVar13 = *in_stack_00000048;
          lVar14 = plVar20[1];
          in_stack_00000050 = (char *)plVar20[2];
          pdb_140a85b60(lVar13,lVar14,in_stack_00000050,fVar37);
          if ((*(longlong *)(lVar13 + 0x28) != *(longlong *)(lVar13 + 0x10)) ||
             (iVar11 = pub_142e32750(*(undefined8 *)(lVar13 + 0x20),*(undefined8 *)(lVar13 + 8),
                                     *(longlong *)(lVar13 + 0x28) << 2), iVar11 != 0)) {
            uVar16 = (longlong)in_stack_00000050 * 8;
            if (0x7ffffffffffffffc < uVar16 || (ulonglong)in_stack_00000050 >> 0x3d != 0) {
              uVar32 = 0;
LAB_140bb9280:
              pdb_142dc7e2a(uVar32,uVar16);
              goto LAB_140bb928b;
            }
            uStack_88 = (byte *)CONCAT44(uVar19,(undefined4)uStack_88);
            if (uVar16 == 0) {
              pbStack_80 = (byte *)0x4;
              uStack_78 = (char *)0x0;
              pcVar12 = uStack_78;
            }
            else {
              pdb_14007ee60();
              uVar32 = 4;
              pbStack_80 = pub_1406abab0(uVar16,4);
              pcVar12 = in_stack_00000050;
              if (pbStack_80 == (byte *)0x0) goto LAB_140bb9280;
            }
            uStack_78 = pcVar12;
            if (in_stack_00000050 != (char *)0x0) {
              pub_142e32760(pbStack_80,lVar14,uVar16);
            }
            *(undefined4 *)in_stack_00000060[2] =
                 *(undefined4 *)((longlong)in_stack_00000060 + 0x1c);
            lVar14 = *in_stack_00000060;
            lVar5 = *(longlong *)(lVar14 + 0x30);
            uVar32 = *(undefined8 *)(lVar14 + 0x40);
            if (lVar5 == *(longlong *)(lVar14 + 0x20)) {
              pdb_142d7ede0(lVar14 + 0x20);
            }
            lVar6 = *(longlong *)(lVar14 + 0x28);
            *(char **)(lVar6 + lVar5 * 0x28) = uStack_78;
            *(byte **)(lVar6 + 8 + lVar5 * 0x28) = pbStack_80;
            *(char **)(lVar6 + 0x10 + lVar5 * 0x28) = in_stack_00000050;
            *(float *)(lVar6 + 0x18 + lVar5 * 0x28) = fVar37;
            *(undefined2 *)(lVar6 + 0x1c + lVar5 * 0x28) = 1;
            *(undefined8 *)(lVar6 + 0x20 + lVar5 * 0x28) = uVar32;
            *(longlong *)(lVar14 + 0x30) = lVar5 + 1;
            *(longlong *)(lVar14 + 0x40) = *(longlong *)(lVar14 + 0x40) + 1;
            uVar19 = uStack_88._4_4_;
          }
          *puVar36 = uVar19;
          lVar14 = *(longlong *)(lVar13 + 0x10);
          if (lVar14 != *(longlong *)(lVar13 + 0x28)) {
            pdb_142dc85e0(lVar14,*(longlong *)(lVar13 + 0x28),&UNK_143043428);
LAB_140bb94ec:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143043538);
          }
          pub_142e32760(*(undefined8 *)(lVar13 + 8),*(undefined8 *)(lVar13 + 0x20),lVar14 << 2);
          *(undefined2 *)(lVar13 + 0x280) = 0;
          *puVar36 = uVar19;
          puVar18 = (undefined8 *)pdb_140bf45b0(*in_stack_00000040,&UNK_14331c998);
          if ((puVar18 == (undefined8 *)0x0) ||
             (lVar14 = (**(code **)(puVar18[1] + 0x18))(*puVar18), lVar14 == 0)) goto LAB_140bb94ec;
          pdb_140a85430(lVar13,0,*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10));
          goto LAB_140bb928e;
        }
      }
      else if (*(byte *)(lVar13 + 0x19) != 2) {
        fVar40 = *pfVar17;
        fVar1 = pfVar17[2];
        if ((byte)(*in_stack_00000050 - 1U) < 2) {
          *in_stack_00000050 = '\x02';
          lVar13 = plVar20[1];
          lVar14 = plVar20[2];
          if (((lVar14 == 0) ||
              (puVar18 = (undefined8 *)(lVar13 + lVar14 * 8 + -8), puVar18 == (undefined8 *)0x0)) ||
             (uVar32 = *puVar18, fVar38 = (float)uVar32 - fVar40,
             fVar39 = (float)((ulonglong)uVar32 >> 0x20) - fVar1,
             _DAT_143009d64 <= fVar39 * fVar39 + fVar38 * fVar38)) {
            if (lVar14 == *plVar20) {
              pdb_142db07d0(plVar20);
              lVar13 = plVar20[1];
            }
            *(float *)(lVar13 + lVar14 * 8) = fVar40;
            *(float *)(lVar13 + 4 + lVar14 * 8) = fVar1;
            plVar20[2] = lVar14 + 1;
          }
          uVar19 = *(undefined4 *)((longlong)in_stack_00000048 + 0x1c);
          puVar36 = (undefined4 *)in_stack_00000048[2];
          *puVar36 = uVar19;
          lVar13 = *in_stack_00000048;
        }
        else {
          *in_stack_00000050 = '\x01';
          plVar20[2] = 0;
          if (*plVar20 == 0) {
            pdb_142db07d0(plVar20);
          }
          pfVar17 = (float *)plVar20[1];
          *pfVar17 = fVar40;
          pfVar17[1] = fVar1;
          plVar20[2] = 1;
          fVar40 = _DAT_142e37870 + fVar40;
          if (*plVar20 == 1) {
            pdb_142db07d0(plVar20);
          }
          *(ulonglong *)(plVar20[1] + 8) = CONCAT44(fVar1 + 0.0,fVar40);
          plVar20[2] = 2;
          uVar19 = *(undefined4 *)((longlong)in_stack_00000048 + 0x1c);
          puVar36 = (undefined4 *)in_stack_00000048[2];
          *puVar36 = uVar19;
          lVar13 = *in_stack_00000048;
          pdb_140a85240(lVar13);
          *puVar36 = uVar19;
        }
        pdb_140a85b60(lVar13,plVar20[1],plVar20[2],fVar37);
        *puVar36 = uVar19;
        puVar18 = (undefined8 *)pdb_140bf45b0(*in_stack_00000040,&UNK_14331c998);
        if ((puVar18 != (undefined8 *)0x0) &&
           (lVar14 = (**(code **)(puVar18[1] + 0x18))(*puVar18), lVar14 != 0)) {
          pdb_140a85430(lVar13,1,*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10));
          return;
        }
        goto LAB_140bb94ec;
      }
    }
LAB_140bb928b:
    *in_stack_00000050 = '\0';
LAB_140bb928e:
    plVar20[2] = 0;
    return;
  default:
    *pcVar12 = *pcVar12 + (char)pcVar12;
    goto code_r0x000140bb8f94;
  case 0x1e:
    goto code_r0x000140bb8fdc;
  case 0x20:
    return;
  case 0x21:
    pbVar22 = pbVar21 + 4;
    uVar19 = in((short)puVar18);
    *(undefined4 *)pbVar21 = uVar19;
    goto LAB_140bb8ffc;
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    unaff_RBX = (ulonglong *)(ulonglong)(uint)((int)unaff_RBX + (int)plVar20);
    goto code_r0x000140bb8fe0;
  case 0x2b:
    goto code_r0x000140bb8fb4;
  case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2d:
  case 0x2e:
    uVar16 = (ulonglong)pcVar12 & 0xffffffff;
    puVar15 = (undefined *)CONCAT71((int7)(uVar16 >> 8),(char)uVar16 + *(char *)(uVar16 + 99));
    goto code_r0x000140bb8fe0;
  case 0x2f:
  case 0x30:
    *(int *)(auStack_a0 + (ulonglong)in_stack_ffffffffb5643065 * 4 + 5) =
         *(int *)(auStack_a0 + (ulonglong)in_stack_ffffffffb5643065 * 4 + 5) << 0x11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_98 = *(undefined4 *)(pbVar21 + 0x18);
  auStack_a0 = *(undefined1 (*) [8])(pbVar21 + 0x10);
  pbVar25 = auStack_a0;
  pdb_140abb950(plVar20);
  pbVar21 = pbVar31;
  goto LAB_140bb837a;
}

