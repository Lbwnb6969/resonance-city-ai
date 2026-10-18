// VA 0x140182ff0, PDB extent 2052 bytes
// image::codecs::png::PngDecoder::with_limits<std::io::buffered::bufreader::BufReader<std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140183e55) overlaps instruction at (ram,0x000140183e53)
    */
/* WARNING: Removing unreachable block (ram,0x000140183f4e) */
/* WARNING: Removing unreachable block (ram,0x000142e50657) */
/* WARNING: Removing unreachable block (ram,0x000142e5060b) */
/* WARNING: Removing unreachable block (ram,0x000142e50672) */
/* WARNING: Removing unreachable block (ram,0x000142e50810) */
/* WARNING: Removing unreachable block (ram,0x000142e50814) */
/* WARNING: Removing unreachable block (ram,0x000142e5088c) */
/* WARNING: Removing unreachable block (ram,0x000142e50819) */
/* WARNING: Removing unreachable block (ram,0x000142e50778) */
/* WARNING: Removing unreachable block (ram,0x000142e5077d) */
/* WARNING: Removing unreachable block (ram,0x000142e507e2) */
/* WARNING: Removing unreachable block (ram,0x000142e505c7) */
/* WARNING: Removing unreachable block (ram,0x000142e505ca) */
/* WARNING: Removing unreachable block (ram,0x000142e505cd) */
/* WARNING: Removing unreachable block (ram,0x000142e5061f) */
/* WARNING: Removing unreachable block (ram,0x000142e50611) */
/* WARNING: Removing unreachable block (ram,0x000142e5060d) */
/* WARNING: Removing unreachable block (ram,0x000142e50780) */
/* WARNING: Removing unreachable block (ram,0x000142e5076d) */
/* WARNING: Removing unreachable block (ram,0x000142e5065b) */
/* WARNING: Removing unreachable block (ram,0x000142e5065d) */
/* WARNING: Removing unreachable block (ram,0x000142e507ef) */
/* WARNING: Removing unreachable block (ram,0x000142e507c7) */
/* WARNING: Removing unreachable block (ram,0x000142e507be) */
/* WARNING: Removing unreachable block (ram,0x000142e507b1) */
/* WARNING: Removing unreachable block (ram,0x000142e507ab) */
/* WARNING: Removing unreachable block (ram,0x000142e5081b) */
/* WARNING: Removing unreachable block (ram,0x000142e5081d) */
/* WARNING: Removing unreachable block (ram,0x000142e507b2) */
/* WARNING: Removing unreachable block (ram,0x000142e507b5) */
/* WARNING: Removing unreachable block (ram,0x000142e507b8) */
/* WARNING: Removing unreachable block (ram,0x000142e50827) */
/* WARNING: Removing unreachable block (ram,0x000142e5088e) */
/* WARNING: Removing unreachable block (ram,0x000142e50829) */
/* WARNING: Removing unreachable block (ram,0x000142e50894) */
/* WARNING: Removing unreachable block (ram,0x000142e5082b) */
/* WARNING: Removing unreachable block (ram,0x000142e50891) */
/* WARNING: Removing unreachable block (ram,0x000142e5079d) */
/* WARNING: Removing unreachable block (ram,0x000142e50728) */
/* WARNING: Removing unreachable block (ram,0x000142e5080a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   image::codecs::png::PngDecoder::with_limits<std::io::buffered::bufreader::BufReader<std::fs::File>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 2052 */

longlong * pdb_140182ff0(longlong *param_1,longlong *param_2,byte *param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  code *pcVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  char cVar69;
  byte bVar70;
  char cVar71;
  uint uVar72;
  uint uVar73;
  longlong *plVar74;
  ulonglong uVar75;
  uint *puVar76;
  char *pcVar77;
  byte bVar78;
  ulonglong uVar79;
  undefined *puVar80;
  uint7 uVar83;
  int *piVar81;
  ulonglong uVar82;
  ushort uVar84;
  char *pcVar88;
  undefined4 **ppuVar89;
  undefined4 **ppuVar90;
  undefined4 **ppuVar91;
  undefined4 **ppuVar92;
  undefined8 *puVar93;
  undefined8 *puVar94;
  undefined8 *puVar95;
  undefined8 *puVar96;
  undefined4 *puVar97;
  undefined4 *puVar98;
  undefined4 *puVar99;
  undefined4 *puVar100;
  undefined4 *puVar101;
  undefined1 *puVar102;
  undefined8 uVar103;
  longlong lVar104;
  ulonglong uVar105;
  ulonglong unaff_R14;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar106;
  bool bVar107;
  bool bVar108;
  undefined1 uVar109;
  unkbyte10 in_ST0;
  longlong lVar110;
  longlong lVar111;
  longlong lVar114;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  longlong lVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined *puStack_b60;
  undefined4 *puStack_b58;
  undefined1 auStack_b50 [24];
  longlong lStack_b38;
  undefined *puStack_b30;
  longlong lStack_b28;
  longlong lStack_b20;
  longlong lStack_b18;
  longlong lStack_b10;
  longlong lStack_b08;
  longlong lStack_b00;
  undefined1 uStack_ae4;
  undefined4 auStack_ae0 [2];
  undefined1 auStack_ad8 [480];
  undefined1 auStack_8f8 [232];
  byte bStack_810;
  undefined1 auStack_808 [8];
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  int aiStack_7e8 [2];
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  longlong lStack_7c8;
  ulonglong uStack_7c0;
  undefined *puStack_7b8;
  ushort uStack_7b0;
  undefined4 uStack_7ae;
  undefined2 uStack_7aa;
  char *pcStack_7a8;
  longlong lStack_7a0;
  longlong lStack_798;
  longlong lStack_790;
  undefined4 uStack_780;
  undefined2 uStack_77c;
  char *pcStack_77a;
  undefined2 uStack_772;
  undefined6 uStack_770;
  undefined2 uStack_76a;
  undefined6 uStack_768;
  undefined2 uStack_762;
  undefined6 uStack_760;
  byte *pbStack_758;
  byte *pbStack_728;
  ulonglong uStack_720;
  byte *pbStack_700;
  ulonglong uStack_6f8;
  undefined8 uStack_6d8;
  undefined4 uStack_6c0;
  undefined1 uStack_6bc;
  longlong lStack_6b8;
  longlong lStack_6b0;
  longlong lStack_6a8;
  char *pcStack_6a0;
  longlong lStack_698;
  longlong lStack_690;
  ulonglong uStack_688;
  longlong lStack_680;
  undefined8 uStack_678;
  undefined1 auStack_670 [680];
  longlong lStack_3c8;
  longlong lStack_3c0;
  longlong lStack_3b8;
  char *pcStack_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  ulonglong uStack_398;
  longlong lStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [56];
  longlong lStack_348;
  longlong lStack_300;
  byte bStack_221;
  byte bStack_220;
  uint uStack_104;
  longlong lStack_f8;
  longlong lStack_f0;
  char *pcStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  char *pcStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_29;
  undefined8 uStack_28;
  ushort uVar85;
  ushort uVar86;
  ushort uVar87;
  
  ppuVar92 = &puStack_b58;
  uStack_28 = 0xfffffffffffffffe;
  uVar103 = 0xffffffffffffffff;
  if (*param_3 != 0) {
    uVar103 = *(undefined8 *)(param_3 + 8);
  }
  lStack_6b8 = *param_2;
  lStack_6b0 = param_2[1];
  lStack_6a8 = param_2[2];
  pcStack_6a0 = (char *)param_2[3];
  lStack_698 = param_2[4];
  lStack_690 = param_2[5];
  puStack_b60 = (undefined *)0x14018305b;
  pdb_140496530(auStack_8f8,&lStack_6b8,uVar103);
  uStack_6bc = 1;
  uStack_29 = 1;
  puStack_b60 = (undefined *)0x140183078;
  pdb_140496720(&lStack_3c8,auStack_8f8);
  if ((int)lStack_3c8 != 4) {
    uStack_c8 = lStack_3b8;
    uStack_c0 = pcStack_3b0;
    lStack_d8 = lStack_3c8;
    lStack_d0 = lStack_3c0;
    uStack_29 = 1;
    puStack_b60 = (undefined *)0x140183117;
    pdb_140d9e490(&lStack_6b8,&lStack_d8);
    param_1[3] = lStack_6a8;
    param_1[4] = (longlong)pcStack_6a0;
    param_1[5] = lStack_698;
    param_1[6] = lStack_690;
    param_1[7] = uStack_688;
    param_1[8] = lStack_680;
    param_1[1] = lStack_6b8;
    param_1[2] = lStack_6b0;
    *param_1 = 2;
joined_r0x000140183155:
    if (uStack_720 != 0) {
      puStack_b60 = (undefined *)0x140183169;
      pub_1406abac0(pbStack_728,uStack_720,1);
    }
    if (uStack_6f8 != 0) {
      puStack_b60 = (undefined *)0x140183187;
      pub_1406abac0(pbStack_700,uStack_6f8,1);
    }
    puStack_b60 = (undefined *)0x140183194;
    CloseHandle(uStack_6d8);
    puStack_b60 = (undefined *)0x1401831a0;
    pdb_1404c3830(auStack_8f8);
    return param_1;
  }
  if (((*(int *)(param_3 + 0x10) == 1) &&
      (*(uint *)(param_3 + 0x14) < *(uint *)(lStack_3c0 + 0x11c))) ||
     ((*(int *)(param_3 + 0x18) == 1 && (*(uint *)(param_3 + 0x1c) < *(uint *)(lStack_3c0 + 0x120)))
     )) {
    param_1[1] = -0x7ffffffffffffff9;
    param_1[2] = 2;
    *param_1 = 2;
    goto joined_r0x000140183155;
  }
  uStack_6c0 = 0x10;
  puStack_b60 = (undefined *)0x1401831d2;
  pub_142e32760(&lStack_b38,auStack_8f8,0x240);
  uStack_29 = 0;
  puStack_b60 = (undefined *)0x1401831e8;
  pdb_1404968a0(&lStack_6b8,&lStack_b38);
  lVar104 = lStack_6b8;
  if (SBORROW8(0,lStack_6b8)) {
    pcStack_e8 = pcStack_6a0;
    lStack_e0 = lStack_698;
    lStack_f8 = lStack_6b0;
    lStack_f0 = lStack_6a8;
    uStack_29 = 0;
    puStack_b60 = (undefined *)0x14018322b;
    pdb_140d9e490(&lStack_b38,&lStack_f8);
    param_1[7] = lStack_b08;
    param_1[8] = lStack_b00;
    param_1[5] = lStack_b18;
    param_1[6] = lStack_b10;
    param_1[3] = lStack_b28;
    param_1[4] = lStack_b20;
    param_1[1] = lStack_b38;
    param_1[2] = (longlong)puStack_b30;
    *param_1 = 2;
    return param_1;
  }
  lStack_48 = lStack_680;
  uStack_40 = uStack_678;
  lStack_58 = lStack_690;
  uStack_50 = uStack_688;
  pcStack_68 = pcStack_6a0;
  lStack_60 = lStack_698;
  lStack_78 = lStack_6b0;
  lStack_70 = lStack_6a8;
  bVar70 = 0x88;
  puStack_b60 = (undefined *)0x1401832bf;
  pub_142e32760(auStack_380,auStack_670);
  lStack_88 = lStack_48;
  uStack_80 = uStack_40;
  lStack_98 = lStack_58;
  uStack_90 = uStack_50;
  lStack_3c0 = lStack_78;
  lStack_3b8 = lStack_70;
  pcStack_3b0 = pcStack_68;
  lStack_3a8 = lStack_60;
  lStack_3a0 = lStack_58;
  uStack_398 = uStack_50;
  lStack_390 = lStack_48;
  uStack_388 = uStack_40;
  lStack_3c8 = lVar104;
  if (SBORROW8(0,lStack_348)) {
                    /* WARNING: Subroutine does not return */
    puStack_b60 = (undefined *)0x140183776;
    pdb_142dc8150(&UNK_142f5fdd8);
  }
  if (uStack_104 != 0) {
    bVar70 = 8;
    if (((((byte)uStack_104 & bStack_220 == 0x10) == 0) &&
        (bVar70 = bStack_220, (uStack_104 & 0x10) != 0)) && (bVar70 = 8, 8 < bStack_220)) {
      bVar70 = bStack_220;
    }
    bStack_220 = bVar70;
    if ((uStack_104 & 0x10) == 0) {
      puVar80 = (undefined *)(ulonglong)bStack_221;
    }
    else {
      uVar83 = (uint7)(uint3)(uStack_104 >> 8);
      uVar73 = (uint)bStack_221;
      if (bStack_221 == 0) {
        puVar80 = (undefined *)CONCAT71(uVar83,4);
      }
      else {
        if (uVar73 != 2) {
          puVar80 = (undefined *)(ulonglong)uVar73;
          if (uVar73 == 3) {
            puVar80 = (undefined *)
                      (CONCAT71(0x80000000000000,(lStack_300 != -0x7fffffffffffffff) << 2) | 2);
          }
          goto LAB_14018335b;
        }
        puVar80 = (undefined *)CONCAT71(uVar83,6);
      }
      if (lStack_300 == -0x7fffffffffffffff) {
        puVar80 = (undefined *)(ulonglong)uVar73;
      }
    }
    goto LAB_14018335b;
  }
  plVar74 = (longlong *)(ulonglong)bStack_220;
  pcVar88 = &UNK_142e504f0;
  uVar79 = (ulonglong)*(int *)(&UNK_142e504f0 + (ulonglong)bStack_221 * 4);
  puVar80 = &UNK_142e504f0 + uVar79;
  uVar73 = (uint)bStack_220;
  bVar78 = (byte)puVar80;
  ppuVar91 = &puStack_b58;
  ppuVar89 = &puStack_b58;
  ppuVar90 = &puStack_b58;
  lVar110 = lStack_78;
  lVar111 = lStack_70;
  pcVar77 = pcStack_68;
  lVar114 = lStack_60;
  lVar115 = lStack_58;
  uVar75 = uStack_50;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_221) {
  case 0:
code_r0x000140183450:
    uVar73 = 0;
    for (uVar72 = (uint)bStack_220; (uVar72 & 1) == 0; uVar72 = uVar72 >> 1 | 0x80000000) {
      uVar73 = uVar73 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000140183465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar74 = (longlong *)
              (*(code *)(&UNK_142e50548 + *(int *)(&UNK_142e50548 + (ulonglong)uVar73 * 4)))();
    return plVar74;
  default:
code_r0x000140183786:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  case 2:
code_r0x0001401834cd:
    uVar73 = 0;
    for (uVar72 = (uint)bStack_220; (uVar72 & 1) == 0; uVar72 = uVar72 >> 1 | 0x80000000) {
      uVar73 = uVar73 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001401834e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar74 = (longlong *)
              (*(code *)(&UNK_142e50534 + *(int *)(&UNK_142e50534 + (ulonglong)uVar73 * 4)))();
    return plVar74;
  case 3:
    goto code_r0x00014018350a;
  case 4:
code_r0x000140183490:
    uVar73 = 0;
    for (uVar72 = (uint)bStack_220; (uVar72 & 1) == 0; uVar72 = uVar72 >> 1 | 0x80000000) {
      uVar73 = uVar73 + 1;
    }
    puVar80 = &UNK_142e50520;
    uVar75 = (ulonglong)*(int *)(&UNK_142e50520 + (ulonglong)uVar73 * 4);
code_r0x0001401834a2:
                    /* WARNING: Could not recover jumptable at 0x0001401834a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar74 = (longlong *)(*(code *)(puVar80 + uVar75))();
    return plVar74;
  case 6:
code_r0x000140183551:
    uVar73 = 0;
    for (uVar72 = (uint)bStack_220; (uVar72 & 1) == 0; uVar72 = uVar72 >> 1 | 0x80000000) {
      uVar73 = uVar73 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000140183566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar74 = (longlong *)
              (*(code *)(&UNK_142e5050c + *(int *)(&UNK_142e5050c + (ulonglong)uVar73 * 4)))
                        (&UNK_142e5050c + *(int *)(&UNK_142e5050c + (ulonglong)uVar73 * 4));
    return plVar74;
  case 7:
    goto code_r0x00014018354c;
  case 8:
code_r0x0001401836fc:
    *(byte *)plVar74 = (char)*plVar74 + bVar70;
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 5;
    break;
  case 9:
code_r0x000140183725:
    *(byte *)plVar74 = (char)*plVar74 + bVar70;
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 8;
    break;
  case 10:
code_r0x000140183685:
    *(byte *)plVar74 = (char)*plVar74 + bVar70 + (0xfffffffebd1afb0f < uVar79);
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 7;
    break;
  case 0xb:
code_r0x000140183656:
    *(byte *)(plVar74 + -9) = (char)plVar74[-9] + bVar78;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)(plVar74 + 0x508d129) = (char)plVar74[0x508d129] + bStack_220;
    goto code_r0x000140183665;
  case 0xc:
code_r0x000140183477:
    *(byte *)plVar74 = (char)*plVar74 + bStack_220 + (0xfffffffebd1afb0f < uVar79);
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 1;
    break;
  case 0xd:
code_r0x0001401836a1:
    puStack_b60 = (undefined *)0x1401836ba;
    pub_142e32760(&lStack_698,&lStack_3c8,0x2d0);
    lStack_6b8 = *(longlong *)param_3;
    lStack_6b0 = *(longlong *)(param_3 + 8);
    lStack_6a8 = *(longlong *)(param_3 + 0x10);
    pcStack_6a0 = *(char **)(param_3 + 0x18);
    puStack_b60 = (undefined *)0x1401836e4;
    pub_142e32760(param_1,&lStack_6b8,0x2f0);
    *(undefined1 *)(param_1 + 0x5e) = 1;
    return param_1;
  case 0xe:
    goto code_r0x00014018358c;
  case 0xf:
    goto code_r0x0001401835bc;
  case 0x10:
code_r0x00014018357e:
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)(plVar74 + 0x508d129) = (char)plVar74[0x508d129] + bStack_220;
    goto code_r0x000140183588;
  case 0x11:
code_r0x0001401834a0:
    uVar75 = (ulonglong)(byte)(bStack_220 + 0x81);
    goto code_r0x0001401834a2;
  case 0x12:
code_r0x000140183632:
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)(plVar74 + 0x508d129) = (char)plVar74[0x508d129] + bStack_220;
    goto code_r0x00014018363c;
  case 0x13:
code_r0x0001401835af:
    uVar73 = uVar73 + 0xece9;
    *(char *)(lVar104 + 0xe5e906) = *(char *)(lVar104 + 0xe5e906) + '\x04';
    *(char *)(ulonglong)uVar73 = *(char *)(ulonglong)uVar73 + (char)uVar73;
code_r0x0001401835bc:
    param_1[1] = -0x8000000000000000;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 10;
    break;
  case 0x14:
code_r0x00014018362a:
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = -0x7ffffffffffffffc;
code_r0x00014018363c:
    *(undefined1 *)(param_1 + 6) = 6;
    break;
  case 0x15:
code_r0x000140183571:
    *(byte *)((longlong)plVar74 + -0x77) = *(byte *)((longlong)plVar74 + -0x77) | 0x46;
    *(byte *)plVar74 = (char)*plVar74 + bVar70;
    param_1[5] = -0x7ffffffffffffffc;
code_r0x000140183588:
    *(undefined1 *)(param_1 + 6) = 4;
code_r0x00014018358c:
    break;
  case 0x16:
code_r0x00014018340f:
    ppuVar91 = &puStack_b58;
    ppuVar89 = &puStack_b58;
    ppuVar90 = &puStack_b58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bStack_221) {
    case 0:
      goto code_r0x000140183450;
    default:
      goto code_r0x000140183786;
    case 2:
      goto code_r0x0001401834cd;
    case 3:
      goto code_r0x00014018350a;
    case 4:
      goto code_r0x000140183490;
    case 6:
      goto code_r0x000140183551;
    case 7:
      goto code_r0x00014018354c;
    case 8:
      goto code_r0x0001401836fc;
    case 9:
      goto code_r0x000140183725;
    case 10:
      goto code_r0x000140183685;
    case 0xb:
      goto code_r0x000140183656;
    case 0xc:
      goto code_r0x000140183477;
    case 0xd:
      goto code_r0x0001401836a1;
    case 0xe:
      goto code_r0x00014018358c;
    case 0xf:
      goto code_r0x0001401835bc;
    case 0x10:
      goto code_r0x00014018357e;
    case 0x11:
      goto code_r0x0001401834a0;
    case 0x12:
      goto code_r0x000140183632;
    case 0x13:
      goto code_r0x0001401835af;
    case 0x14:
      goto code_r0x00014018362a;
    case 0x15:
      goto code_r0x000140183571;
    case 0x16:
      goto code_r0x00014018340f;
    case 0x17:
      goto code_r0x000140183697;
    case 0x18:
      goto code_r0x0001401835ed;
    case 0x19:
      goto code_r0x000140183647;
    case 0x1a:
      goto code_r0x00014018358d;
    case 0x1b:
      goto code_r0x000140183e69;
    case 0x1c:
    case 0x1f:
      goto code_r0x000140183d46;
    case 0x1d:
      goto code_r0x000140183e7b;
    case 0x1e:
    case 0x20:
      goto code_r0x000140183e2f;
    case 0x21:
      goto code_r0x000140183e79;
    case 0x22:
      goto code_r0x000140183e57;
    case 0x23:
      goto code_r0x000140183ed5;
    case 0x24:
    case 0x26:
      goto code_r0x000140183e53;
    case 0x25:
    case 0x29:
      goto code_r0x000140183e1b;
    case 0x27:
      goto code_r0x000140183e31;
    case 0x28:
      goto code_r0x000140183e55;
    case 0x2a:
    case 0x2b:
      goto code_r0x000142e504f0;
    }
  case 0x17:
code_r0x000140183697:
    *param_3 = *param_3 ^ bVar70;
    break;
  case 0x18:
code_r0x0001401835ed:
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)(plVar74 + -9) = (char)plVar74[-9] + bVar78 + (char)auStack_ad8;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)(plVar74 + 0x108d129) = (char)plVar74[0x108d129] + bStack_220;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 0xb;
    break;
  case 0x19:
code_r0x000140183647:
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)(plVar74 + 0x108d129) = (char)plVar74[0x108d129] + bStack_220;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = -0x7ffffffffffffffc;
code_r0x000140183665:
    *(undefined1 *)(param_1 + 6) = 9;
    break;
  case 0x1a:
code_r0x00014018358d:
    uRamb94904b102eb06b1 = uVar73;
    *(uint *)plVar74 = (int)*plVar74 + uVar73;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    *(char *)((longlong)plVar74 + 0xfc8394d) = *(char *)((longlong)plVar74 + 0xfc8394d) + bStack_220
    ;
LAB_14018335b:
    if ((byte)(bStack_220 ^ bStack_220 - 1) <= (byte)(bStack_220 - 1)) {
                    /* WARNING: Subroutine does not return */
      puStack_b60 = (undefined *)0x140183785;
      pdb_142dc8150(&UNK_142f5fe90);
    }
    uVar73 = 0;
    for (uVar72 = (uint)bStack_220; (uVar72 & 1) == 0; uVar72 = uVar72 >> 1 | 0x80000000) {
      uVar73 = uVar73 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000140183382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar74 = (longlong *)
              (*(code *)(&UNK_142e504dc + *(int *)(&UNK_142e504dc + (ulonglong)uVar73 * 4)))
                        (puVar80);
    return plVar74;
  case 0x1b:
    goto code_r0x000140183e69;
  case 0x1c:
  case 0x1f:
code_r0x000140183d46:
    pbVar1 = (byte *)((longlong)plVar74 + -0x73);
    bVar70 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar78;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = *(ulonglong *)(&UNK_142e504f0 + (longlong)puVar80 * 8);
    auVar113 = ZEXT416(uVar73 + 0x2ccc72a + (uint)CARRY1(bVar70,bVar78)) * auVar113;
    uStack_7c0 = auVar113._0_8_;
    if (auVar113._8_8_ != 0) {
      uStack_7c0 = 0xffffffffffffffff;
code_r0x0001401840ae:
      lStack_7c8 = 0;
      puStack_b30 = &UNK_142e503b8;
      puStack_b60 = &UNK_1401840d2;
      pdb_142db71cc(0,&uStack_780,&lStack_7c8,0);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lStack_7c8 = 0;
    if (unaff_R14 != uStack_7c0) goto code_r0x0001401840ae;
    param_3 = (byte *)auStack_ae0;
    piVar81 = aiStack_7e8;
    puStack_b60 = &UNK_140183d8c;
    pdb_140494c50(piVar81,param_3,lVar104);
    if (aiStack_7e8[0] != 4) {
      uStack_7f8 = uStack_7d8;
      uStack_7f0 = uStack_7d0;
      uStack_800 = uStack_7e0;
      puStack_b60 = &UNK_140183df9;
      pdb_140d9e490(&lStack_7c8,auStack_808);
      plVar74 = (longlong *)(ulonglong)uStack_7b0;
      uStack_780 = uStack_7ae;
      uStack_77c = uStack_7aa;
      goto code_r0x000140183e1b;
    }
    pcVar88 = (char *)(ulonglong)bStack_810;
    puVar80 = (undefined *)CONCAT71((int7)((ulonglong)piVar81 >> 8),1);
    plVar74 = (longlong *)&UNK_142e50503;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bStack_810) {
    case 0:
      goto code_r0x000140183ed5;
    default:
                    /* WARNING: Could not emulate address calculation at 0x000140183dbd */
                    /* WARNING: Treating indirect jump as call */
      plVar74 = (longlong *)
                (*(code *)(&UNK_142e50584 +
                          *(int *)(&UNK_142e50584 + (ulonglong)(bStack_810 - 1) * 4)))
                          (puVar80,&UNK_142e50584 +
                                   *(int *)(&UNK_142e50584 + (ulonglong)(bStack_810 - 1) * 4));
      return plVar74;
    case 3:
    case 5:
    case 0xc:
                    /* WARNING: Could not emulate address calculation at 0x000140183ea6 */
                    /* WARNING: Treating indirect jump as call */
      plVar74 = (longlong *)
                (*(code *)(&UNK_142e50584 +
                          *(int *)(&UNK_142e50584 + (ulonglong)(bStack_810 - 1) * 4)))
                          (puVar80,&UNK_142e50584 +
                                   *(int *)(&UNK_142e50584 + (ulonglong)(bStack_810 - 1) * 4));
      return plVar74;
    case 6:
      plVar74 = (longlong *)0x6;
    case 2:
      bVar70 = (byte)(((ushort)plVar74 & 0xff) / 3);
      break;
    case 7:
      bVar70 = 8;
      goto code_r0x000140183ec5;
    case 8:
      bVar70 = 4;
      goto code_r0x000140183ef6;
    case 9:
    case 0xb:
      plVar74 = (longlong *)0x10;
    case 0xd:
      bVar70 = (byte)plVar74;
code_r0x000140183ec5:
      bVar70 = bVar70 / 4;
      break;
    case 10:
    case 0xe:
      *(uint *)(param_1 + 5) = (uint)bStack_810;
      ppuVar91 = &puStack_b58;
      goto code_r0x000140183e7b;
    case 0xf:
    case 0x10:
      if ((longlong)(&UNK_142e5055c + *(int *)(&UNK_142e5055c + (longlong)pcVar88 * 4)) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar69 = UNK_142e50503;
      bVar70 = UNK_142e50503 + 9;
      cVar71 = UNK_142e50503 + '\f';
      _UNK_142e50503 = CONCAT31(_UNK_142e50504,cVar71);
      uVar84 = (ushort)bStack_810;
      uVar85 = (ushort)bStack_810;
      uVar86 = (ushort)bStack_810;
      uVar87 = (ushort)bStack_810;
      if (bVar70 < 0xfd) {
        auStack_ae0[0] = in(uVar87);
        out((char)*param_1,uVar87);
        if (cVar71 == '\0') {
          _UNK_142e50503 = CONCAT31(_UNK_142e50504,cVar69 + '\x12');
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uStack_ae4 = in(uVar87);
        uVar73 = *(uint *)(puVar80 + 0x6d);
        if (cVar71 < '\0') {
          puVar97 = (undefined4 *)((longlong)param_1 + -5);
          out(*(undefined4 *)((longlong)param_1 + -1),uVar87);
          bVar108 = false;
code_r0x000142e50622:
          uVar75 = (longlong)*(int *)(lVar104 + 0x6b) * 0x6f6f745f;
          uVar109 = in(uVar86);
          *(undefined1 *)puStack_b58 = uVar109;
          puVar102 = *(undefined1 **)(uVar75 & 0xffffffff);
          puVar93 = (undefined8 *)(uVar75 & 0xffffffff) + 1;
          if ((longlong)(int)uVar75 != uVar75) {
            halt_baddata();
          }
          puVar100 = (undefined4 *)(puVar102 + -1);
          uVar109 = in(uVar86);
          *puVar102 = uVar109;
          if (bVar108) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          (&UNK_142e50503)[unaff_GS_OFFSET] = (&UNK_142e50503)[unaff_GS_OFFSET] + '\x03';
        }
        else {
          uVar5 = in(uVar87);
          *puStack_b58 = uVar5;
          puVar97 = (undefined4 *)((longlong)param_1 + -2);
          out(*(undefined1 *)((longlong)param_1 + -1),uVar87);
          uVar109 = in(uVar87);
          *(undefined1 *)(puStack_b58 + -1) = uVar109;
          puVar100 = *(undefined4 **)(ulonglong)uVar73;
          puVar93 = (undefined8 *)((ulonglong)*(uint *)(puVar80 + 0x6d) - 8);
          *(undefined8 *)((ulonglong)*(uint *)(puVar80 + 0x6d) - 8) = 0x5f656469;
          _UNK_142e50503 = CONCAT31(_UNK_142e50504,UNK_142e50503 + '\x03');
        }
        bVar70 = UNK_142e50503 + 0xf;
        cVar71 = UNK_142e50503 + '\x12';
        _UNK_142e50503 = CONCAT31(_UNK_142e50504,cVar71);
        bVar108 = cVar71 == '\0';
        puVar98 = (undefined4 *)((longlong)puVar97 + -1);
        out(*(undefined1 *)puVar97,uVar86);
        if (SCARRY1(bVar70,'\x03')) {
          bVar106 = false;
          if (0xfc < bVar70) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x000142e50700:
          if (!bVar106 && !bVar108) {
            puVar101 = (undefined4 *)*puVar93;
            goto code_r0x000142e5076e;
          }
          puVar95 = puVar93;
          puVar97 = puVar98;
          bVar107 = false;
          if (bVar106) {
            halt_baddata();
          }
code_r0x000142e50704:
          if (!bVar108) {
            uVar109 = in(uVar87);
            *(undefined1 *)*puVar95 = uVar109;
            out(*puVar97,uVar87);
            puVar101 = (undefined4 *)puVar95[1];
            if (!bVar107) {
              puVar95[1] = 0x6f6f7a74;
              uVar5 = in(uVar86);
              *puVar101 = uVar5;
              lVar104 = (longlong)*(int *)((longlong)puVar97 + 0x76) * 0x5f6d6f6f;
              out(puVar97[-1],uVar86);
              out(*(undefined1 *)(puVar97 + -2),uVar84);
              if ((int)lVar104 == lVar104) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              out(*(undefined4 *)((longlong)puVar97 + -9),uVar84);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            out(*(undefined2 *)(puVar97 + -1),uVar84);
            uVar75 = (longlong)*(int *)((longlong)puVar95 + in_FS_OFFSET + 0x81) * 0x6c626173;
            if ((longlong)(int)uVar75 != uVar75) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            out(*(undefined4 *)(uVar75 & 0xffffffff),uVar84);
            bVar106 = false;
            bVar108 = false;
code_r0x000142e50802:
            if (!bVar108) {
              halt_baddata();
            }
            if (!bVar106) {
              iVar3 = _UNK_142e50503 + 0x42e50503;
              UNK_142e50503 = (char)iVar3;
              bVar70 = UNK_142e50503 + 3;
              _UNK_142e50504 = (undefined3)((uint)iVar3 >> 8);
              _UNK_142e50503 = CONCAT31(_UNK_142e50504,bVar70);
              bVar70 = bVar70 | 3;
              pcVar88 = (char *)CONCAT71(0x142e505,bVar70);
              *pcVar88 = *pcVar88 + bVar70;
              *pcVar88 = *pcVar88 + bVar70;
              *pcVar88 = *pcVar88 + bVar70;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            halt_baddata();
          }
          out(*puVar97,uVar86);
          puVar101 = puVar100 + -1;
          uVar5 = in(uVar86);
          *puVar100 = uVar5;
          bVar108 = true;
          puVar98 = puVar97 + -1;
        }
        else {
          if (!bVar108) {
            lVar104 = (longlong)*(int *)((longlong)puVar97 + 99) * 0x4b676e69;
            bVar106 = (int)lVar104 != lVar104;
            if (-1 < cVar71) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            out(*puVar98,uVar87);
            out(*(undefined4 *)((longlong)puVar97 + -5),uVar87);
            uVar5 = in(uVar87);
            *puVar100 = uVar5;
            out(*(undefined4 *)((longlong)puVar97 + -9),uVar87);
            if (!bVar106) {
              puVar102 = (undefined1 *)*puVar93;
              out(*(undefined2 *)((longlong)puVar97 + -0xd),uVar87);
              if (!bVar106) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
code_r0x000142e507c5:
              uVar109 = in(uVar85);
              *puVar102 = uVar109;
              if (bVar106) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              return plVar74;
            }
            puVar93[-1] = 0x6f636564;
            if (!bVar106) {
              uVar5 = in(uVar87);
              puVar100[-1] = uVar5;
              uVar75 = (longlong)*(int *)(pcVar88 + 0x65) * 0x73617265;
              puVar102 = (undefined1 *)(uVar75 & 0xffffffff);
              bVar106 = (longlong)(int)uVar75 != uVar75;
              if (!bVar106) {
                if (!bVar106) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                uVar109 = in(uVar87);
                *puVar102 = uVar109;
                puVar102 = puVar102 + -1;
              }
              goto code_r0x000142e507c5;
            }
            bVar106 = true;
            goto code_r0x000142e50802;
          }
          pbVar1 = (byte *)((longlong)puVar97 + 0x6e);
          *pbVar1 = *pbVar1 & (byte)((ulonglong)piVar81 >> 8);
          if (*pbVar1 != 0) {
            uVar5 = in(uVar87);
            *puVar100 = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          pbVar1 = (byte *)(lVar104 + 0x65);
          bVar106 = false;
          *pbVar1 = *pbVar1 & 1;
          bVar108 = *pbVar1 == 0;
          if ((char)*pbVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar97 = (undefined4 *)*puVar93;
          puVar95 = puVar93 + 1;
          puVar101 = puVar97;
          if (bVar108) {
            puVar101 = puVar97 + -1;
            uVar5 = in(uVar86);
            *puVar97 = uVar5;
            puVar95 = puVar93 + 1;
            puVar97 = puVar98;
            goto code_r0x000142e506fa;
          }
        }
code_r0x000142e50769:
        puVar99 = puVar98 + -1;
        out(*puVar98,uVar84);
        uVar109 = true;
        puVar98 = puVar99;
        if (!bVar108) {
code_r0x000142e5076e:
          uVar5 = in(uVar86);
          *puVar101 = uVar5;
          out(*puVar98,uVar86);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        puVar95 = (undefined8 *)auStack_b50;
        puVar101 = puStack_b58 + -1;
        uVar5 = in(uVar85);
        *puStack_b58 = uVar5;
        puVar97 = (undefined4 *)((longlong)param_1 + -4);
        out((int)*param_1,uVar85);
        (&UNK_142e50503)[unaff_GS_OFFSET] = (&UNK_142e50503)[unaff_GS_OFFSET] + '\x03';
        bVar70 = UNK_142e50503 + 0xf;
        bVar106 = 0xfc < bVar70;
        cVar71 = UNK_142e50503 + '\x12';
        _UNK_142e50503 = CONCAT31(_UNK_142e50504,cVar71);
        bVar108 = cVar71 == '\0';
        puStack_b58 = puVar101;
        if (SCARRY1(bVar70,'\x03')) goto code_r0x000142e50622;
        if (!bVar106 && !bVar108) {
          puVar95 = (undefined8 *)auStack_b50;
          puVar100 = puVar101;
          bVar107 = bVar106;
          if (!bVar106) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto code_r0x000142e50704;
        }
code_r0x000142e506fa:
        puVar99 = puVar97 + -1;
        out(*puVar97,uVar86);
        if (!bVar106 && !bVar108) {
          puVar100 = (undefined4 *)*puVar95;
          puVar93 = puVar95 + 1;
          puVar98 = puVar97 + -2;
          out(*puVar99,uVar86);
          goto code_r0x000142e50700;
        }
        if (!bVar106) {
          puVar94 = puVar95 + -1;
          puVar95 = puVar95 + -1;
          *puVar94 = 0x6d6f746f;
          puVar98 = puVar99;
          goto code_r0x000142e50769;
        }
        uVar109 = 0;
        if (bVar108) {
          iVar3 = _UNK_142e50503 + 0x42e50503;
          UNK_142e50503 = (char)iVar3;
          _UNK_142e50504 = (undefined3)((uint)iVar3 >> 8);
          _UNK_142e50503 = CONCAT31(_UNK_142e50504,UNK_142e50503 + '\x03');
          puVar96 = puVar95;
          goto code_r0x000142e50850;
        }
      }
      lVar104 = (longlong)*(int *)((longlong)puVar101 + 0x72) * 0x74686769;
      if (!(bool)uVar109) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      out(*puVar99,uVar85);
      if ((int)lVar104 == lVar104 && !(bool)uVar109) {
        _UNK_142e50503 = CONCAT31(_UNK_142e50504,UNK_142e50503 + '\x06');
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar96 = (undefined8 *)((longlong)puVar95 + 8);
      if ((bool)uVar109) {
        puVar96 = (undefined8 *)((longlong)puVar95 + 0x18);
      }
code_r0x000142e50850:
      _UNK_142e50503 = _UNK_142e50503 | 0x42e50503;
      _UNK_142e50504 = (undefined3)(_UNK_142e50503 >> 8);
      _UNK_142e50503 = CONCAT31(_UNK_142e50504,UNK_142e50503 + '\t');
      uVar73 = in(0x42);
      puVar76 = (uint *)(ulonglong)uVar73;
      *puVar76 = *puVar76 + uVar73;
      cVar71 = (char)uVar73;
      *(char *)puVar76 = (char)*puVar76 + cVar71;
      *puVar76 = *puVar76 | uVar73;
      *(char *)puVar76 = (char)*puVar76 + cVar71;
      *(char *)puVar76 = (char)*puVar76 + cVar71;
      *(char *)puVar76 = (char)*puVar76 + cVar71;
      *(undefined **)((longlong)puVar96 + -8) = &UNK_142e5086d;
      pcVar77 = (char *)func_0x00014427ed73();
      cVar71 = (char)pcVar77;
      *pcVar77 = *pcVar77 + cVar71;
      *pcVar88 = *pcVar88 + (char)puVar80;
      *pcVar77 = *pcVar77 + cVar71;
      *pcVar77 = *pcVar77 + cVar71;
      *pcVar77 = *pcVar77 + cVar71;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
joined_r0x000140183ef0:
    if (bVar70 != 1) {
code_r0x000140183ef6:
      if (bVar70 != 2) {
                    /* WARNING: Subroutine does not return */
        puStack_b60 = &UNK_1401840ed;
        pdb_142dc83b0(&UNK_142e503d0,0x28,&UNK_142e503f8);
      }
      if (1 < unaff_R14) {
        uVar75 = unaff_R14 & 0x7ffffffffffffffe;
        uVar79 = unaff_R14 - 2;
        if (5 < uVar79) {
          uVar82 = (uVar79 >> 1) + 1;
          if (uVar79 < 0x1e) {
            uVar79 = 0;
          }
          else {
            uVar79 = uVar82 & 0xfffffffffffffff0;
            uVar105 = 0;
            do {
              auVar113 = *(undefined1 (*) [16])(lVar104 + uVar105 * 2);
              auVar116 = *(undefined1 (*) [16])(lVar104 + 0x10 + uVar105 * 2);
              auVar118[1] = 0;
              auVar118[0] = auVar113[8];
              auVar118[2] = auVar113[9];
              auVar118[3] = 0;
              auVar118[4] = auVar113[10];
              auVar118[5] = 0;
              auVar118[6] = auVar113[0xb];
              auVar118[7] = 0;
              auVar118[8] = auVar113[0xc];
              auVar118[9] = 0;
              auVar118[10] = auVar113[0xd];
              auVar118[0xb] = 0;
              auVar118[0xc] = auVar113[0xe];
              auVar118[0xd] = 0;
              auVar118[0xe] = auVar113[0xf];
              auVar118[0xf] = 0;
              auVar117 = pshuflw(auVar118,auVar118,0xb1);
              auVar118 = pshufhw(auVar117,auVar117,0xb1);
              auVar39[0xd] = 0;
              auVar39._0_13_ = auVar113._0_13_;
              auVar39[0xe] = auVar113[7];
              auVar42[0xc] = auVar113[6];
              auVar42._0_12_ = auVar113._0_12_;
              auVar42._13_2_ = auVar39._13_2_;
              auVar45[0xb] = 0;
              auVar45._0_11_ = auVar113._0_11_;
              auVar45._12_3_ = auVar42._12_3_;
              auVar48[10] = auVar113[5];
              auVar48._0_10_ = auVar113._0_10_;
              auVar48._11_4_ = auVar45._11_4_;
              auVar51[9] = 0;
              auVar51._0_9_ = auVar113._0_9_;
              auVar51._10_5_ = auVar48._10_5_;
              auVar54[8] = auVar113[4];
              auVar54._0_8_ = auVar113._0_8_;
              auVar54._9_6_ = auVar51._9_6_;
              auVar60._7_8_ = 0;
              auVar60._0_7_ = auVar54._8_7_;
              auVar63._1_8_ = SUB158(auVar60 << 0x40,7);
              auVar63[0] = auVar113[3];
              auVar63._9_6_ = 0;
              auVar64._1_10_ = SUB1510(auVar63 << 0x30,5);
              auVar64[0] = auVar113[2];
              auVar64._11_4_ = 0;
              auVar57[2] = auVar113[1];
              auVar57._0_2_ = auVar113._0_2_;
              auVar57._3_12_ = SUB1512(auVar64 << 0x20,3);
              auVar117._0_2_ = auVar113._0_2_ & 0xff;
              auVar117._2_13_ = auVar57._2_13_;
              auVar117[0xf] = 0;
              auVar113 = pshuflw(auVar117,auVar117,0xb1);
              auVar113 = pshufhw(auVar113,auVar113,0xb1);
              sVar8 = auVar113._0_2_;
              sVar9 = auVar113._2_2_;
              sVar11 = auVar113._4_2_;
              sVar13 = auVar113._6_2_;
              sVar15 = auVar113._8_2_;
              sVar17 = auVar113._10_2_;
              sVar19 = auVar113._12_2_;
              sVar21 = auVar113._14_2_;
              sVar23 = auVar118._0_2_;
              sVar25 = auVar118._2_2_;
              sVar27 = auVar118._4_2_;
              sVar29 = auVar118._6_2_;
              sVar31 = auVar118._8_2_;
              sVar33 = auVar118._10_2_;
              sVar35 = auVar118._12_2_;
              sVar37 = auVar118._14_2_;
              auVar119[1] = 0;
              auVar119[0] = auVar116[8];
              auVar119[2] = auVar116[9];
              auVar119[3] = 0;
              auVar119[4] = auVar116[10];
              auVar119[5] = 0;
              auVar119[6] = auVar116[0xb];
              auVar119[7] = 0;
              auVar119[8] = auVar116[0xc];
              auVar119[9] = 0;
              auVar119[10] = auVar116[0xd];
              auVar119[0xb] = 0;
              auVar119[0xc] = auVar116[0xe];
              auVar119[0xd] = 0;
              auVar119[0xe] = auVar116[0xf];
              auVar119[0xf] = 0;
              auVar117 = pshuflw(auVar119,auVar119,0xb1);
              auVar117 = pshufhw(auVar117,auVar117,0xb1);
              auVar40[0xd] = 0;
              auVar40._0_13_ = auVar116._0_13_;
              auVar40[0xe] = auVar116[7];
              auVar43[0xc] = auVar116[6];
              auVar43._0_12_ = auVar116._0_12_;
              auVar43._13_2_ = auVar40._13_2_;
              auVar46[0xb] = 0;
              auVar46._0_11_ = auVar116._0_11_;
              auVar46._12_3_ = auVar43._12_3_;
              auVar49[10] = auVar116[5];
              auVar49._0_10_ = auVar116._0_10_;
              auVar49._11_4_ = auVar46._11_4_;
              auVar52[9] = 0;
              auVar52._0_9_ = auVar116._0_9_;
              auVar52._10_5_ = auVar49._10_5_;
              auVar55[8] = auVar116[4];
              auVar55._0_8_ = auVar116._0_8_;
              auVar55._9_6_ = auVar52._9_6_;
              auVar61._7_8_ = 0;
              auVar61._0_7_ = auVar55._8_7_;
              auVar65._1_8_ = SUB158(auVar61 << 0x40,7);
              auVar65[0] = auVar116[3];
              auVar65._9_6_ = 0;
              auVar66._1_10_ = SUB1510(auVar65 << 0x30,5);
              auVar66[0] = auVar116[2];
              auVar66._11_4_ = 0;
              auVar58[2] = auVar116[1];
              auVar58._0_2_ = auVar116._0_2_;
              auVar58._3_12_ = SUB1512(auVar66 << 0x20,3);
              auVar116._0_2_ = auVar116._0_2_ & 0xff;
              auVar116._2_13_ = auVar58._2_13_;
              auVar116[0xf] = 0;
              auVar116 = pshuflw(auVar116,auVar116,0xb1);
              auVar116 = pshufhw(auVar116,auVar116,0xb1);
              sVar7 = auVar116._0_2_;
              sVar10 = auVar116._2_2_;
              sVar12 = auVar116._4_2_;
              sVar14 = auVar116._6_2_;
              sVar16 = auVar116._8_2_;
              sVar18 = auVar116._10_2_;
              sVar20 = auVar116._12_2_;
              sVar22 = auVar116._14_2_;
              sVar24 = auVar117._0_2_;
              sVar26 = auVar117._2_2_;
              sVar28 = auVar117._4_2_;
              sVar30 = auVar117._6_2_;
              sVar32 = auVar117._8_2_;
              sVar34 = auVar117._10_2_;
              sVar36 = auVar117._12_2_;
              sVar38 = auVar117._14_2_;
              pcVar88 = (char *)(lVar104 + uVar105 * 2);
              *pcVar88 = (0 < sVar8) * (sVar8 < 0x100) * auVar113[0] - (0xff < sVar8);
              pcVar88[1] = (0 < sVar9) * (sVar9 < 0x100) * auVar113[2] - (0xff < sVar9);
              pcVar88[2] = (0 < sVar11) * (sVar11 < 0x100) * auVar113[4] - (0xff < sVar11);
              pcVar88[3] = (0 < sVar13) * (sVar13 < 0x100) * auVar113[6] - (0xff < sVar13);
              pcVar88[4] = (0 < sVar15) * (sVar15 < 0x100) * auVar113[8] - (0xff < sVar15);
              pcVar88[5] = (0 < sVar17) * (sVar17 < 0x100) * auVar113[10] - (0xff < sVar17);
              pcVar88[6] = (0 < sVar19) * (sVar19 < 0x100) * auVar113[0xc] - (0xff < sVar19);
              pcVar88[7] = (0 < sVar21) * (sVar21 < 0x100) * auVar113[0xe] - (0xff < sVar21);
              pcVar88[8] = (0 < sVar23) * (sVar23 < 0x100) * auVar118[0] - (0xff < sVar23);
              pcVar88[9] = (0 < sVar25) * (sVar25 < 0x100) * auVar118[2] - (0xff < sVar25);
              pcVar88[10] = (0 < sVar27) * (sVar27 < 0x100) * auVar118[4] - (0xff < sVar27);
              pcVar88[0xb] = (0 < sVar29) * (sVar29 < 0x100) * auVar118[6] - (0xff < sVar29);
              pcVar88[0xc] = (0 < sVar31) * (sVar31 < 0x100) * auVar118[8] - (0xff < sVar31);
              pcVar88[0xd] = (0 < sVar33) * (sVar33 < 0x100) * auVar118[10] - (0xff < sVar33);
              pcVar88[0xe] = (0 < sVar35) * (sVar35 < 0x100) * auVar118[0xc] - (0xff < sVar35);
              pcVar88[0xf] = (0 < sVar37) * (sVar37 < 0x100) * auVar118[0xe] - (0xff < sVar37);
              pcVar88 = (char *)(lVar104 + 0x10 + uVar105 * 2);
              *pcVar88 = (0 < sVar7) * (sVar7 < 0x100) * auVar116[0] - (0xff < sVar7);
              pcVar88[1] = (0 < sVar10) * (sVar10 < 0x100) * auVar116[2] - (0xff < sVar10);
              pcVar88[2] = (0 < sVar12) * (sVar12 < 0x100) * auVar116[4] - (0xff < sVar12);
              pcVar88[3] = (0 < sVar14) * (sVar14 < 0x100) * auVar116[6] - (0xff < sVar14);
              pcVar88[4] = (0 < sVar16) * (sVar16 < 0x100) * auVar116[8] - (0xff < sVar16);
              pcVar88[5] = (0 < sVar18) * (sVar18 < 0x100) * auVar116[10] - (0xff < sVar18);
              pcVar88[6] = (0 < sVar20) * (sVar20 < 0x100) * auVar116[0xc] - (0xff < sVar20);
              pcVar88[7] = (0 < sVar22) * (sVar22 < 0x100) * auVar116[0xe] - (0xff < sVar22);
              pcVar88[8] = (0 < sVar24) * (sVar24 < 0x100) * auVar117[0] - (0xff < sVar24);
              pcVar88[9] = (0 < sVar26) * (sVar26 < 0x100) * auVar117[2] - (0xff < sVar26);
              pcVar88[10] = (0 < sVar28) * (sVar28 < 0x100) * auVar117[4] - (0xff < sVar28);
              pcVar88[0xb] = (0 < sVar30) * (sVar30 < 0x100) * auVar117[6] - (0xff < sVar30);
              pcVar88[0xc] = (0 < sVar32) * (sVar32 < 0x100) * auVar117[8] - (0xff < sVar32);
              pcVar88[0xd] = (0 < sVar34) * (sVar34 < 0x100) * auVar117[10] - (0xff < sVar34);
              pcVar88[0xe] = (0 < sVar36) * (sVar36 < 0x100) * auVar117[0xc] - (0xff < sVar36);
              pcVar88[0xf] = (0 < sVar38) * (sVar38 < 0x100) * auVar117[0xe] - (0xff < sVar38);
              uVar105 = uVar105 + 0x10;
            } while (uVar79 != uVar105);
            if (uVar82 == uVar79) goto code_r0x00014018403f;
            if ((uVar82 & 0xc) == 0) {
              lVar104 = lVar104 + uVar79 * 2;
              uVar75 = uVar75 + uVar79 * -2;
              goto code_r0x00014018402a;
            }
          }
          uVar105 = uVar82 & 0xfffffffffffffffc;
          uVar75 = uVar75 + uVar105 * -2;
          do {
            uVar4 = *(ulonglong *)(lVar104 + uVar79 * 2);
            auVar41._8_6_ = 0;
            auVar41._0_8_ = uVar4;
            auVar41[0xe] = (char)(uVar4 >> 0x38);
            auVar44._8_4_ = 0;
            auVar44._0_8_ = uVar4;
            auVar44[0xc] = (char)(uVar4 >> 0x30);
            auVar44._13_2_ = auVar41._13_2_;
            auVar47._8_4_ = 0;
            auVar47._0_8_ = uVar4;
            auVar47._12_3_ = auVar44._12_3_;
            auVar50._8_2_ = 0;
            auVar50._0_8_ = uVar4;
            auVar50[10] = (char)(uVar4 >> 0x28);
            auVar50._11_4_ = auVar47._11_4_;
            auVar53._8_2_ = 0;
            auVar53._0_8_ = uVar4;
            auVar53._10_5_ = auVar50._10_5_;
            auVar56[8] = (char)(uVar4 >> 0x20);
            auVar56._0_8_ = uVar4;
            auVar56._9_6_ = auVar53._9_6_;
            auVar62._7_8_ = 0;
            auVar62._0_7_ = auVar56._8_7_;
            auVar67._1_8_ = SUB158(auVar62 << 0x40,7);
            auVar67[0] = (char)(uVar4 >> 0x18);
            auVar67._9_6_ = 0;
            auVar68._1_10_ = SUB1510(auVar67 << 0x30,5);
            auVar68[0] = (char)(uVar4 >> 0x10);
            auVar68._11_4_ = 0;
            auVar59[2] = (char)(uVar4 >> 8);
            auVar59._0_2_ = (ushort)uVar4;
            auVar59._3_12_ = SUB1512(auVar68 << 0x20,3);
            auVar112._0_2_ = (ushort)uVar4 & 0xff;
            auVar112._2_13_ = auVar59._2_13_;
            auVar112[0xf] = 0;
            auVar113 = pshuflw(auVar112,auVar112,0xb1);
            auVar113 = pshufhw(auVar113,auVar113,0xb1);
            sVar8 = auVar113._0_2_;
            sVar7 = auVar113._2_2_;
            sVar9 = auVar113._4_2_;
            sVar10 = auVar113._6_2_;
            sVar11 = auVar113._8_2_;
            sVar12 = auVar113._10_2_;
            sVar13 = auVar113._12_2_;
            sVar14 = auVar113._14_2_;
            *(ulonglong *)(lVar104 + uVar79 * 2) =
                 CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar113[0xe] - (0xff < sVar14),
                          CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar113[0xc] - (0xff < sVar13)
                                   ,CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar113[10] -
                                             (0xff < sVar12),
                                             CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar113[8]
                                                      - (0xff < sVar11),
                                                      CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                               auVar113[6] - (0xff < sVar10),
                                                               CONCAT12((0 < sVar9) *
                                                                        (sVar9 < 0x100) *
                                                                        auVar113[4] - (0xff < sVar9)
                                                                        ,CONCAT11((0 < sVar7) *
                                                                                  (sVar7 < 0x100) *
                                                                                  auVar113[2] -
                                                                                  (0xff < sVar7),
                                                                                  (0 < sVar8) *
                                                                                  (sVar8 < 0x100) *
                                                                                  auVar113[0] -
                                                                                  (0xff < sVar8)))))
                                            )));
            uVar79 = uVar79 + 4;
          } while (uVar105 != uVar79);
          lVar104 = lVar104 + uVar105 * 2;
          if (uVar82 == uVar105) goto code_r0x00014018403f;
        }
code_r0x00014018402a:
        uVar79 = 0;
        do {
          puVar2 = (ushort *)(lVar104 + uVar79);
          *puVar2 = *puVar2 << 8 | *puVar2 >> 8;
          uVar79 = uVar79 + 2;
        } while (uVar75 != uVar79);
      }
    }
code_r0x00014018403f:
    *param_1 = -0x7ffffffffffffff6;
    goto code_r0x00014018404c;
  case 0x1d:
    goto code_r0x000140183e7b;
  case 0x1e:
  case 0x20:
code_r0x000140183e2f:
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
  case 0x27:
code_r0x000140183e31:
    uStack_772 = (undefined2)lVar114;
    uStack_770 = (undefined6)((ulonglong)lVar114 >> 0x10);
    uStack_76a = (undefined2)lVar110;
    uStack_768 = (undefined6)((ulonglong)lVar110 >> 0x10);
    uStack_762 = (undefined2)lVar111;
    uStack_760 = (undefined6)((ulonglong)lVar111 >> 0x10);
    param_1[7] = lVar111;
    ppuVar89 = &puStack_b58;
    lVar115 = lStack_7c8;
    uVar75 = uStack_7c0;
    pcStack_77a = pcVar77;
    goto code_r0x000140183e53;
  case 0x21:
code_r0x000140183e79:
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    ppuVar91 = &puStack_b58;
    goto code_r0x000140183e7b;
  case 0x22:
code_r0x000140183e57:
    puStack_b60 = (undefined *)0xfffffffff3000003;
    *(longlong *)((longlong)param_1 + 0x2a) = (longlong)in_ST0;
    ppuVar89 = (undefined4 **)&puStack_b60;
    goto code_r0x000140183e53;
  case 0x23:
code_r0x000140183ed5:
    bVar70 = (byte)(1 / (byte)puVar80);
    goto joined_r0x000140183ef0;
  case 0x24:
  case 0x26:
    goto code_r0x000140183e53;
  case 0x25:
  case 0x29:
code_r0x000140183e1b:
    puVar80 = puStack_7b8;
    lVar110 = lStack_798;
    lVar111 = lStack_790;
    pcVar77 = pcStack_7a8;
    lVar114 = lStack_7a0;
    goto code_r0x000140183e31;
  case 0x28:
code_r0x000140183e55:
    out((int)*param_1,0x4f0);
    *(byte *)plVar74 = (char)*plVar74 + bStack_220;
    ppuVar89 = &puStack_b58;
    param_1 = (longlong *)((longlong)param_1 + 4);
code_r0x000140183e53:
    *(ulonglong *)((longlong)param_1 + 0x2a) = CONCAT26(uStack_76a,uStack_770);
    *(ulonglong *)((longlong)param_1 + 0x32) = CONCAT26(uStack_762,uStack_768);
    *(undefined4 *)((longlong)param_1 + 0x1a) = uStack_780;
    ppuVar90 = ppuVar89;
code_r0x000140183e69:
    *(undefined2 *)((longlong)param_1 + 0x1e) = uStack_77c;
    pcVar88 = pcStack_77a;
    ppuVar91 = ppuVar90;
code_r0x000140183e7b:
    param_1[4] = (longlong)pcVar88;
    *(undefined2 *)(param_1 + 5) = uStack_772;
    *param_1 = lVar115;
    param_1[1] = uVar75;
    param_1[2] = (longlong)puVar80;
    *(short *)(param_1 + 3) = (short)plVar74;
    ppuVar92 = ppuVar91;
code_r0x00014018404c:
    *(undefined **)((longlong)ppuVar92 + -8) = &UNK_140184054;
    pdb_14049ccf0(param_3);
    *(undefined **)((longlong)ppuVar92 + -8) = &UNK_14018406c;
    pub_1406abac0(pbStack_758,0x2f8,8);
    return param_1;
  case 0x2a:
  case 0x2b:
code_r0x000142e504f0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x000140183531:
  *param_1 = 2;
  uStack_29 = 0;
  puStack_b60 = (undefined *)0x14018354b;
  pdb_14049ccf0(&lStack_3c8);
code_r0x00014018354c:
  return param_1;
code_r0x00014018350a:
  param_1[1] = -0x8000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[5] = -0x7ffffffffffffffc;
  *(undefined1 *)(param_1 + 6) = 0x1a;
  *(byte *)((longlong)param_1 + 0x31) = bStack_220;
  goto code_r0x000140183531;
}

