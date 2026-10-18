// VA 0x140aa5020, PDB extent 2052 bytes
// image::codecs::png::PngDecoder::with_limits<std::io::buffered::bufreader::BufReader<std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140aa6225) overlaps instruction at (ram,0x000140aa6223)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140aa631e) */
/* Matched PDB project procedure:
   image::codecs::png::PngDecoder::with_limits<std::io::buffered::bufreader::BufReader<std::fs::File>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2052 */

longlong * pdb_140aa5020(longlong *param_1,longlong *param_2,byte *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  ushort *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  short sVar6;
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
  undefined1 auVar38 [15];
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
  byte bVar68;
  ushort uVar69;
  uint uVar70;
  uint uVar71;
  longlong *plVar72;
  ulonglong uVar74;
  byte bVar75;
  ulonglong uVar76;
  undefined *puVar77;
  uint7 uVar79;
  ulonglong uVar78;
  undefined *puVar80;
  undefined **ppuVar81;
  undefined1 *puVar82;
  undefined1 *puVar83;
  undefined1 *puVar84;
  undefined1 *puVar85;
  undefined8 uVar86;
  longlong lVar87;
  ulonglong uVar88;
  ulonglong unaff_R14;
  undefined8 in_MM0;
  longlong lVar89;
  longlong lVar90;
  undefined *puVar91;
  longlong lVar94;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  longlong lVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined *puStack_b60;
  undefined1 auStack_b58 [32];
  longlong lStack_b38;
  undefined *puStack_b30;
  longlong lStack_b28;
  longlong lStack_b20;
  longlong lStack_b18;
  longlong lStack_b10;
  longlong lStack_b08;
  longlong lStack_b00;
  byte abStack_ae0 [8];
  undefined1 auStack_ad8 [8];
  undefined1 auStack_ad0 [472];
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
  undefined *puStack_7a8;
  longlong lStack_7a0;
  longlong lStack_798;
  longlong lStack_790;
  undefined4 uStack_780;
  undefined2 uStack_77c;
  undefined *puStack_77a;
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
  undefined *puStack_6a0;
  longlong lStack_698;
  longlong lStack_690;
  ulonglong uStack_688;
  longlong lStack_680;
  undefined8 uStack_678;
  undefined1 auStack_670 [680];
  longlong lStack_3c8;
  longlong lStack_3c0;
  longlong lStack_3b8;
  undefined *puStack_3b0;
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
  undefined *puStack_e8;
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
  undefined *puStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_29;
  undefined8 uStack_28;
  int *piVar73;
  
  puVar84 = auStack_b58;
  puVar85 = auStack_b58;
  uStack_28 = 0xfffffffffffffffe;
  uVar86 = 0xffffffffffffffff;
  if (*param_3 != 0) {
    uVar86 = *(undefined8 *)(param_3 + 8);
  }
  lStack_6b8 = *param_2;
  lStack_6b0 = param_2[1];
  lStack_6a8 = param_2[2];
  puStack_6a0 = (undefined *)param_2[3];
  lStack_698 = param_2[4];
  lStack_690 = param_2[5];
  puStack_b60 = (undefined *)0x140aa508b;
  pdb_140496530(auStack_8f8,&lStack_6b8,uVar86);
  uStack_6bc = 1;
  uStack_29 = 1;
  puStack_b60 = (undefined *)0x140aa50a8;
  pdb_140496720(&lStack_3c8,auStack_8f8);
  if ((int)lStack_3c8 != 4) {
    uStack_c8 = lStack_3b8;
    uStack_c0 = puStack_3b0;
    lStack_d8 = lStack_3c8;
    lStack_d0 = lStack_3c0;
    uStack_29 = 1;
    puStack_b60 = (undefined *)0x140aa5147;
    pdb_140d9e490(&lStack_6b8,&lStack_d8);
    param_1[3] = lStack_6a8;
    param_1[4] = (longlong)puStack_6a0;
    param_1[5] = lStack_698;
    param_1[6] = lStack_690;
    param_1[7] = uStack_688;
    param_1[8] = lStack_680;
    param_1[1] = lStack_6b8;
    param_1[2] = lStack_6b0;
    *param_1 = 2;
joined_r0x000140aa5185:
    if (uStack_720 != 0) {
      puStack_b60 = (undefined *)0x140aa5199;
      pub_1406abac0(pbStack_728,uStack_720,1);
    }
    if (uStack_6f8 != 0) {
      puStack_b60 = (undefined *)0x140aa51b7;
      pub_1406abac0(pbStack_700,uStack_6f8,1);
    }
    puStack_b60 = (undefined *)0x140aa51c4;
    CloseHandle(uStack_6d8);
    puStack_b60 = (undefined *)0x140aa51d0;
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
    goto joined_r0x000140aa5185;
  }
  uStack_6c0 = 0x10;
  puStack_b60 = (undefined *)0x140aa5202;
  pub_142e32760(&lStack_b38,auStack_8f8,0x240);
  uStack_29 = 0;
  puStack_b60 = (undefined *)0x140aa5218;
  pdb_140c74ab0(&lStack_6b8,&lStack_b38);
  lVar87 = lStack_6b8;
  if (SBORROW8(0,lStack_6b8)) {
    puStack_e8 = puStack_6a0;
    lStack_e0 = lStack_698;
    lStack_f8 = lStack_6b0;
    lStack_f0 = lStack_6a8;
    uStack_29 = 0;
    puStack_b60 = (undefined *)0x140aa525b;
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
  puStack_68 = puStack_6a0;
  lStack_60 = lStack_698;
  lStack_78 = lStack_6b0;
  lStack_70 = lStack_6a8;
  bVar68 = 0x88;
  puStack_b60 = (undefined *)0x140aa52ef;
  pub_142e32760(auStack_380,auStack_670);
  lStack_88 = lStack_48;
  uStack_80 = uStack_40;
  lStack_98 = lStack_58;
  uStack_90 = uStack_50;
  lStack_3c0 = lStack_78;
  lStack_3b8 = lStack_70;
  puStack_3b0 = puStack_68;
  lStack_3a8 = lStack_60;
  lStack_3a0 = lStack_58;
  uStack_398 = uStack_50;
  lStack_390 = lStack_48;
  uStack_388 = uStack_40;
  lStack_3c8 = lVar87;
  if (SBORROW8(0,lStack_348)) {
                    /* WARNING: Subroutine does not return */
    puStack_b60 = (undefined *)0x140aa57a6;
    pdb_142dc8150(&UNK_143073090);
  }
  if (uStack_104 != 0) {
    bVar68 = 8;
    if (((((byte)uStack_104 & bStack_220 == 0x10) == 0) &&
        (bVar68 = bStack_220, (uStack_104 & 0x10) != 0)) && (bVar68 = 8, 8 < bStack_220)) {
      bVar68 = bStack_220;
    }
    bStack_220 = bVar68;
    if ((uStack_104 & 0x10) == 0) {
      puVar77 = (undefined *)(ulonglong)bStack_221;
    }
    else {
      uVar79 = (uint7)(uint3)(uStack_104 >> 8);
      uVar71 = (uint)bStack_221;
      if (bStack_221 == 0) {
        puVar77 = (undefined *)CONCAT71(uVar79,4);
      }
      else {
        if (uVar71 != 2) {
          puVar77 = (undefined *)(ulonglong)uVar71;
          if (uVar71 == 3) {
            puVar77 = (undefined *)
                      (CONCAT71(0x80000000000000,(lStack_300 != -0x7fffffffffffffff) << 2) | 2);
          }
          goto LAB_140aa538b;
        }
        puVar77 = (undefined *)CONCAT71(uVar79,6);
      }
      if (lStack_300 == -0x7fffffffffffffff) {
        puVar77 = (undefined *)(ulonglong)uVar71;
      }
    }
    goto LAB_140aa538b;
  }
  piVar73 = (int *)(ulonglong)bStack_220;
  puVar80 = &UNK_143048b64;
  uVar76 = (ulonglong)*(int *)(&UNK_143048b64 + (ulonglong)bStack_221 * 4);
  puVar77 = &UNK_143048b64 + uVar76;
  uVar71 = (uint)bStack_220;
  bVar75 = (byte)puVar77;
  puVar83 = auStack_b58;
  ppuVar81 = (undefined **)auStack_b58;
  puVar82 = auStack_b58;
  lVar89 = lStack_78;
  lVar90 = lStack_70;
  puVar91 = puStack_68;
  lVar94 = lStack_60;
  lVar95 = lStack_58;
  uVar74 = uStack_50;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_221) {
  case 0:
code_r0x000140aa5480:
    uVar71 = 0;
    for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
      uVar71 = uVar71 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000140aa5495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar72 = (longlong *)
              (*(code *)(&UNK_143048bbc + *(int *)(&UNK_143048bbc + (ulonglong)uVar71 * 4)))();
    return plVar72;
  default:
code_r0x000140aa57b6:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  case 2:
code_r0x000140aa54fd:
    uVar71 = 0;
    for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
      uVar71 = uVar71 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000140aa5512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar72 = (longlong *)
              (*(code *)(&UNK_143048ba8 + *(int *)(&UNK_143048ba8 + (ulonglong)uVar71 * 4)))();
    return plVar72;
  case 3:
    goto code_r0x000140aa553a;
  case 4:
code_r0x000140aa54c0:
    uVar71 = 0;
    for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
      uVar71 = uVar71 + 1;
    }
    puVar77 = &UNK_143048b94;
    uVar74 = (ulonglong)*(int *)(&UNK_143048b94 + (ulonglong)uVar71 * 4);
code_r0x000140aa54d2:
                    /* WARNING: Could not recover jumptable at 0x000140aa54d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar72 = (longlong *)(*(code *)(puVar77 + uVar74))();
    return plVar72;
  case 6:
code_r0x000140aa5581:
    uVar71 = 0;
    for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
      uVar71 = uVar71 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000140aa5596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar72 = (longlong *)
              (*(code *)(&UNK_143048b80 + *(int *)(&UNK_143048b80 + (ulonglong)uVar71 * 4)))
                        (&UNK_143048b80 + *(int *)(&UNK_143048b80 + (ulonglong)uVar71 * 4));
    return plVar72;
  case 7:
    goto code_r0x000140aa557c;
  case 8:
code_r0x000140aa572c:
    *(byte *)piVar73 = (char)*piVar73 + bVar68;
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 5;
    break;
  case 9:
code_r0x000140aa5755:
    *(byte *)piVar73 = (char)*piVar73 + bVar68;
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 8;
    break;
  case 10:
code_r0x000140aa56b5:
    *(byte *)piVar73 = (char)*piVar73 + bVar68 + (0xfffffffebcfb749b < uVar76);
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 7;
    break;
  case 0xb:
code_r0x000140aa5686:
    *(byte *)(piVar73 + -0x12) = (char)piVar73[-0x12] + bVar75;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)(piVar73 + 0xa11a252) = (char)piVar73[0xa11a252] + bStack_220;
    goto code_r0x000140aa5695;
  case 0xc:
code_r0x000140aa54a7:
    *(byte *)piVar73 = (char)*piVar73 + bStack_220 + (0xfffffffebcfb749b < uVar76);
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 1;
    break;
  case 0xd:
code_r0x000140aa56d1:
    puStack_b60 = (undefined *)0x140aa56ea;
    pub_142e32760(&lStack_698,&lStack_3c8,0x2d0);
    lStack_6b8 = *(longlong *)param_3;
    lStack_6b0 = *(longlong *)(param_3 + 8);
    lStack_6a8 = *(longlong *)(param_3 + 0x10);
    puStack_6a0 = *(undefined **)(param_3 + 0x18);
    puStack_b60 = (undefined *)0x140aa5714;
    pub_142e32760(param_1,&lStack_6b8,0x2f0);
    *(undefined1 *)(param_1 + 0x5e) = 1;
    return param_1;
  case 0xe:
    goto code_r0x000140aa55bc;
  case 0xf:
    goto code_r0x000140aa55ec;
  case 0x10:
code_r0x000140aa55ae:
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)(piVar73 + 0xa11a252) = (char)piVar73[0xa11a252] + bStack_220;
    goto code_r0x000140aa55b8;
  case 0x11:
code_r0x000140aa54d0:
    uVar74 = (ulonglong)(byte)(bStack_220 + 0x81);
    goto code_r0x000140aa54d2;
  case 0x12:
code_r0x000140aa5662:
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)(piVar73 + 0xa11a252) = (char)piVar73[0xa11a252] + bStack_220;
    goto code_r0x000140aa566c;
  case 0x13:
code_r0x000140aa55df:
    uVar71 = uVar71 + 0xece9;
    *(char *)(lVar87 + 0xe5e906) = *(char *)(lVar87 + 0xe5e906) + -0x75;
    *(char *)(ulonglong)uVar71 = *(char *)(ulonglong)uVar71 + (char)uVar71;
code_r0x000140aa55ec:
    param_1[1] = -0x8000000000000000;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 10;
    break;
  case 0x14:
code_r0x000140aa565a:
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = -0x7ffffffffffffffc;
code_r0x000140aa566c:
    *(undefined1 *)(param_1 + 6) = 6;
    break;
  case 0x15:
code_r0x000140aa55a1:
    *(byte *)((longlong)piVar73 + -0x77) = *(byte *)((longlong)piVar73 + -0x77) | 0x46;
    *(byte *)piVar73 = (char)*piVar73 + bVar68;
    param_1[5] = -0x7ffffffffffffffc;
code_r0x000140aa55b8:
    *(undefined1 *)(param_1 + 6) = 4;
code_r0x000140aa55bc:
    break;
  case 0x16:
code_r0x000140aa543f:
    puVar83 = auStack_b58;
    ppuVar81 = (undefined **)auStack_b58;
    puVar82 = auStack_b58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bStack_221) {
    case 0:
      goto code_r0x000140aa5480;
    default:
      goto code_r0x000140aa57b6;
    case 2:
      goto code_r0x000140aa54fd;
    case 3:
      goto code_r0x000140aa553a;
    case 4:
      goto code_r0x000140aa54c0;
    case 6:
      goto code_r0x000140aa5581;
    case 7:
      goto code_r0x000140aa557c;
    case 8:
      goto code_r0x000140aa572c;
    case 9:
      goto code_r0x000140aa5755;
    case 10:
      goto code_r0x000140aa56b5;
    case 0xb:
      goto code_r0x000140aa5686;
    case 0xc:
      goto code_r0x000140aa54a7;
    case 0xd:
      goto code_r0x000140aa56d1;
    case 0xe:
      goto code_r0x000140aa55bc;
    case 0xf:
      goto code_r0x000140aa55ec;
    case 0x10:
      goto code_r0x000140aa55ae;
    case 0x11:
      goto code_r0x000140aa54d0;
    case 0x12:
      goto code_r0x000140aa5662;
    case 0x13:
      goto code_r0x000140aa55df;
    case 0x14:
      goto code_r0x000140aa565a;
    case 0x15:
      goto code_r0x000140aa55a1;
    case 0x16:
      goto code_r0x000140aa543f;
    case 0x17:
      goto code_r0x000140aa56c7;
    case 0x18:
      goto code_r0x000140aa561d;
    case 0x19:
      goto code_r0x000140aa5677;
    case 0x1a:
      goto code_r0x000140aa55bd;
    case 0x1b:
      goto code_r0x000140aa6239;
    case 0x1c:
    case 0x1f:
      goto code_r0x000140aa6116;
    case 0x1d:
      goto code_r0x000140aa624b;
    case 0x1e:
    case 0x20:
      goto code_r0x000140aa61ff;
    case 0x21:
      goto code_r0x000140aa6249;
    case 0x22:
      goto code_r0x000140aa6227;
    case 0x23:
      goto code_r0x000140aa62a5;
    case 0x24:
    case 0x26:
      goto code_r0x000140aa6223;
    case 0x25:
    case 0x29:
      goto code_r0x000140aa61eb;
    case 0x27:
      goto code_r0x000140aa6201;
    case 0x28:
      goto code_r0x000140aa6225;
    case 0x2a:
      goto code_r0x000143048b64;
    case 0x2b:
      goto code_r0x000143048b65;
    }
  case 0x17:
code_r0x000140aa56c7:
    *param_3 = *param_3 ^ bVar68;
    break;
  case 0x18:
code_r0x000140aa561d:
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)(piVar73 + -0x12) = (char)piVar73[-0x12] + bVar75 + (char)auStack_ad8;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)(piVar73 + 0x211a252) = (char)piVar73[0x211a252] + bStack_220;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = -0x7ffffffffffffffc;
    *(undefined1 *)(param_1 + 6) = 0xb;
    break;
  case 0x19:
code_r0x000140aa5677:
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)(piVar73 + 0x211a252) = (char)piVar73[0x211a252] + bStack_220;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = -0x7ffffffffffffffc;
code_r0x000140aa5695:
    *(undefined1 *)(param_1 + 6) = 9;
    break;
  case 0x1a:
code_r0x000140aa55bd:
    uRamb94904b102eb06b1 = uVar71;
    *piVar73 = *piVar73 + uVar71;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    *(char *)((longlong)piVar73 + 0xfc8394d) = *(char *)((longlong)piVar73 + 0xfc8394d) + bStack_220
    ;
LAB_140aa538b:
    if ((byte)(bStack_220 - 1) < (byte)(bStack_220 ^ bStack_220 - 1)) {
      uVar71 = 0;
      for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
        uVar71 = uVar71 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x000140aa53b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar72 = (longlong *)
                (*(code *)(&UNK_143048b50 + *(int *)(&UNK_143048b50 + (ulonglong)uVar71 * 4)))
                          (puVar77);
      return plVar72;
    }
                    /* WARNING: Subroutine does not return */
    puStack_b60 = (undefined *)0x140aa57b5;
    pdb_142dc8150(&UNK_143073148);
  case 0x1b:
    goto code_r0x000140aa6239;
  case 0x1c:
  case 0x1f:
code_r0x000140aa6116:
    pbVar1 = (byte *)((longlong)piVar73 + -0x73);
    bVar68 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar75;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = *(ulonglong *)(&UNK_143048b64 + (longlong)puVar77 * 8);
    auVar93 = ZEXT416(uVar71 + 0x25a27ba + (uint)CARRY1(bVar68,bVar75)) * auVar93;
    uStack_7c0 = auVar93._0_8_;
    if (auVar93._8_8_ != 0) {
      uStack_7c0 = 0xffffffffffffffff;
code_r0x000140aa647e:
      lStack_7c8 = 0;
      puStack_b30 = &UNK_1430477a0;
      puStack_b60 = &UNK_140aa64a2;
      pdb_142db71cc(0,&uStack_780,&lStack_7c8,0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lStack_7c8 = 0;
    if (unaff_R14 != uStack_7c0) goto code_r0x000140aa647e;
    param_3 = abStack_ae0;
    piVar73 = aiStack_7e8;
    puStack_b60 = &UNK_140aa615c;
    pdb_140c731d0(piVar73,param_3,lVar87);
    if (aiStack_7e8[0] != 4) {
      uStack_7f8 = uStack_7d8;
      uStack_7f0 = uStack_7d0;
      uStack_800 = uStack_7e0;
      puStack_b60 = &UNK_140aa61c9;
      pdb_140d9e490(&lStack_7c8,auStack_808);
      piVar73 = (int *)(ulonglong)uStack_7b0;
      uStack_780 = uStack_7ae;
      uStack_77c = uStack_7aa;
      goto code_r0x000140aa61eb;
    }
    puVar80 = (undefined *)(ulonglong)bStack_810;
    puVar77 = (undefined *)CONCAT71((int7)((ulonglong)piVar73 >> 8),1);
    piVar73 = (int *)&UNK_143048b03;
    uVar69 = 0x8b03;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bStack_810) {
    case 0:
      goto code_r0x000140aa62a5;
    default:
                    /* WARNING: Could not emulate address calculation at 0x000140aa618d */
                    /* WARNING: Treating indirect jump as call */
      plVar72 = (longlong *)
                (*(code *)(&UNK_143048bf8 +
                          *(int *)(&UNK_143048bf8 + (ulonglong)(bStack_810 - 1) * 4)))
                          (puVar77,&UNK_143048bf8 +
                                   *(int *)(&UNK_143048bf8 + (ulonglong)(bStack_810 - 1) * 4));
      return plVar72;
    case 3:
    case 5:
    case 0xc:
                    /* WARNING: Could not emulate address calculation at 0x000140aa6276 */
                    /* WARNING: Treating indirect jump as call */
      plVar72 = (longlong *)
                (*(code *)(&UNK_143048bf8 +
                          *(int *)(&UNK_143048bf8 + (ulonglong)(bStack_810 - 1) * 4)))
                          (puVar77,&UNK_143048bf8 +
                                   *(int *)(&UNK_143048bf8 + (ulonglong)(bStack_810 - 1) * 4));
      return plVar72;
    case 6:
      uVar69 = 6;
    case 2:
      bVar68 = (byte)((uVar69 & 0xff) / 3);
      goto joined_r0x000140aa62c0;
    case 7:
      bVar68 = 8;
      break;
    case 8:
      bVar68 = 4;
      goto code_r0x000140aa62c6;
    case 9:
    case 0xb:
      piVar73 = (int *)0x10;
    case 0xd:
      bVar68 = (byte)piVar73;
      break;
    case 10:
    case 0xe:
      *(uint *)(param_1 + 5) = (uint)bStack_810;
      puVar83 = auStack_b58;
      goto code_r0x000140aa624b;
    case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar68 = bVar68 / 4;
    goto joined_r0x000140aa62c0;
  case 0x1d:
    goto code_r0x000140aa624b;
  case 0x1e:
  case 0x20:
code_r0x000140aa61ff:
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
  case 0x27:
code_r0x000140aa6201:
    uStack_772 = (undefined2)lVar94;
    uStack_770 = (undefined6)((ulonglong)lVar94 >> 0x10);
    uStack_76a = (undefined2)lVar89;
    uStack_768 = (undefined6)((ulonglong)lVar89 >> 0x10);
    uStack_762 = (undefined2)lVar90;
    uStack_760 = (undefined6)((ulonglong)lVar90 >> 0x10);
    param_1[7] = lVar90;
    ppuVar81 = (undefined **)auStack_b58;
    lVar95 = lStack_7c8;
    uVar74 = uStack_7c0;
    puStack_77a = puVar91;
    goto code_r0x000140aa6223;
  case 0x21:
code_r0x000140aa6249:
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    puVar83 = auStack_b58;
    goto code_r0x000140aa624b;
  case 0x22:
code_r0x000140aa6227:
    puStack_b60 = (undefined *)0xfffffffff3000003;
    *(undefined8 *)((longlong)param_1 + 0x2a) = in_MM0;
    ppuVar81 = &puStack_b60;
    goto code_r0x000140aa6223;
  case 0x23:
code_r0x000140aa62a5:
    bVar68 = (byte)(1 / (byte)puVar77);
joined_r0x000140aa62c0:
    if (bVar68 != 1) {
code_r0x000140aa62c6:
      if (bVar68 != 2) {
                    /* WARNING: Subroutine does not return */
        puStack_b60 = &UNK_140aa64bd;
        pdb_142dc83b0(&UNK_1430477b8,0x28,&UNK_1430477e0);
      }
      if (1 < unaff_R14) {
        uVar74 = unaff_R14 & 0x7ffffffffffffffe;
        uVar76 = unaff_R14 - 2;
        if (5 < uVar76) {
          uVar78 = (uVar76 >> 1) + 1;
          if (uVar76 < 0x1e) {
            uVar76 = 0;
          }
          else {
            uVar76 = uVar78 & 0xfffffffffffffff0;
            uVar88 = 0;
            do {
              auVar93 = *(undefined1 (*) [16])(lVar87 + uVar88 * 2);
              auVar96 = *(undefined1 (*) [16])(lVar87 + 0x10 + uVar88 * 2);
              auVar98[1] = 0;
              auVar98[0] = auVar93[8];
              auVar98[2] = auVar93[9];
              auVar98[3] = 0;
              auVar98[4] = auVar93[10];
              auVar98[5] = 0;
              auVar98[6] = auVar93[0xb];
              auVar98[7] = 0;
              auVar98[8] = auVar93[0xc];
              auVar98[9] = 0;
              auVar98[10] = auVar93[0xd];
              auVar98[0xb] = 0;
              auVar98[0xc] = auVar93[0xe];
              auVar98[0xd] = 0;
              auVar98[0xe] = auVar93[0xf];
              auVar98[0xf] = 0;
              auVar97 = pshuflw(auVar98,auVar98,0xb1);
              auVar98 = pshufhw(auVar97,auVar97,0xb1);
              auVar38[0xd] = 0;
              auVar38._0_13_ = auVar93._0_13_;
              auVar38[0xe] = auVar93[7];
              auVar41[0xc] = auVar93[6];
              auVar41._0_12_ = auVar93._0_12_;
              auVar41._13_2_ = auVar38._13_2_;
              auVar44[0xb] = 0;
              auVar44._0_11_ = auVar93._0_11_;
              auVar44._12_3_ = auVar41._12_3_;
              auVar47[10] = auVar93[5];
              auVar47._0_10_ = auVar93._0_10_;
              auVar47._11_4_ = auVar44._11_4_;
              auVar50[9] = 0;
              auVar50._0_9_ = auVar93._0_9_;
              auVar50._10_5_ = auVar47._10_5_;
              auVar53[8] = auVar93[4];
              auVar53._0_8_ = auVar93._0_8_;
              auVar53._9_6_ = auVar50._9_6_;
              auVar59._7_8_ = 0;
              auVar59._0_7_ = auVar53._8_7_;
              auVar62._1_8_ = SUB158(auVar59 << 0x40,7);
              auVar62[0] = auVar93[3];
              auVar62._9_6_ = 0;
              auVar63._1_10_ = SUB1510(auVar62 << 0x30,5);
              auVar63[0] = auVar93[2];
              auVar63._11_4_ = 0;
              auVar56[2] = auVar93[1];
              auVar56._0_2_ = auVar93._0_2_;
              auVar56._3_12_ = SUB1512(auVar63 << 0x20,3);
              auVar97._0_2_ = auVar93._0_2_ & 0xff;
              auVar97._2_13_ = auVar56._2_13_;
              auVar97[0xf] = 0;
              auVar93 = pshuflw(auVar97,auVar97,0xb1);
              auVar93 = pshufhw(auVar93,auVar93,0xb1);
              sVar7 = auVar93._0_2_;
              sVar8 = auVar93._2_2_;
              sVar10 = auVar93._4_2_;
              sVar12 = auVar93._6_2_;
              sVar14 = auVar93._8_2_;
              sVar16 = auVar93._10_2_;
              sVar18 = auVar93._12_2_;
              sVar20 = auVar93._14_2_;
              sVar22 = auVar98._0_2_;
              sVar24 = auVar98._2_2_;
              sVar26 = auVar98._4_2_;
              sVar28 = auVar98._6_2_;
              sVar30 = auVar98._8_2_;
              sVar32 = auVar98._10_2_;
              sVar34 = auVar98._12_2_;
              sVar36 = auVar98._14_2_;
              auVar99[1] = 0;
              auVar99[0] = auVar96[8];
              auVar99[2] = auVar96[9];
              auVar99[3] = 0;
              auVar99[4] = auVar96[10];
              auVar99[5] = 0;
              auVar99[6] = auVar96[0xb];
              auVar99[7] = 0;
              auVar99[8] = auVar96[0xc];
              auVar99[9] = 0;
              auVar99[10] = auVar96[0xd];
              auVar99[0xb] = 0;
              auVar99[0xc] = auVar96[0xe];
              auVar99[0xd] = 0;
              auVar99[0xe] = auVar96[0xf];
              auVar99[0xf] = 0;
              auVar97 = pshuflw(auVar99,auVar99,0xb1);
              auVar97 = pshufhw(auVar97,auVar97,0xb1);
              auVar39[0xd] = 0;
              auVar39._0_13_ = auVar96._0_13_;
              auVar39[0xe] = auVar96[7];
              auVar42[0xc] = auVar96[6];
              auVar42._0_12_ = auVar96._0_12_;
              auVar42._13_2_ = auVar39._13_2_;
              auVar45[0xb] = 0;
              auVar45._0_11_ = auVar96._0_11_;
              auVar45._12_3_ = auVar42._12_3_;
              auVar48[10] = auVar96[5];
              auVar48._0_10_ = auVar96._0_10_;
              auVar48._11_4_ = auVar45._11_4_;
              auVar51[9] = 0;
              auVar51._0_9_ = auVar96._0_9_;
              auVar51._10_5_ = auVar48._10_5_;
              auVar54[8] = auVar96[4];
              auVar54._0_8_ = auVar96._0_8_;
              auVar54._9_6_ = auVar51._9_6_;
              auVar60._7_8_ = 0;
              auVar60._0_7_ = auVar54._8_7_;
              auVar64._1_8_ = SUB158(auVar60 << 0x40,7);
              auVar64[0] = auVar96[3];
              auVar64._9_6_ = 0;
              auVar65._1_10_ = SUB1510(auVar64 << 0x30,5);
              auVar65[0] = auVar96[2];
              auVar65._11_4_ = 0;
              auVar57[2] = auVar96[1];
              auVar57._0_2_ = auVar96._0_2_;
              auVar57._3_12_ = SUB1512(auVar65 << 0x20,3);
              auVar96._0_2_ = auVar96._0_2_ & 0xff;
              auVar96._2_13_ = auVar57._2_13_;
              auVar96[0xf] = 0;
              auVar96 = pshuflw(auVar96,auVar96,0xb1);
              auVar96 = pshufhw(auVar96,auVar96,0xb1);
              sVar6 = auVar96._0_2_;
              sVar9 = auVar96._2_2_;
              sVar11 = auVar96._4_2_;
              sVar13 = auVar96._6_2_;
              sVar15 = auVar96._8_2_;
              sVar17 = auVar96._10_2_;
              sVar19 = auVar96._12_2_;
              sVar21 = auVar96._14_2_;
              sVar23 = auVar97._0_2_;
              sVar25 = auVar97._2_2_;
              sVar27 = auVar97._4_2_;
              sVar29 = auVar97._6_2_;
              sVar31 = auVar97._8_2_;
              sVar33 = auVar97._10_2_;
              sVar35 = auVar97._12_2_;
              sVar37 = auVar97._14_2_;
              pcVar2 = (char *)(lVar87 + uVar88 * 2);
              *pcVar2 = (0 < sVar7) * (sVar7 < 0x100) * auVar93[0] - (0xff < sVar7);
              pcVar2[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar93[2] - (0xff < sVar8);
              pcVar2[2] = (0 < sVar10) * (sVar10 < 0x100) * auVar93[4] - (0xff < sVar10);
              pcVar2[3] = (0 < sVar12) * (sVar12 < 0x100) * auVar93[6] - (0xff < sVar12);
              pcVar2[4] = (0 < sVar14) * (sVar14 < 0x100) * auVar93[8] - (0xff < sVar14);
              pcVar2[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar93[10] - (0xff < sVar16);
              pcVar2[6] = (0 < sVar18) * (sVar18 < 0x100) * auVar93[0xc] - (0xff < sVar18);
              pcVar2[7] = (0 < sVar20) * (sVar20 < 0x100) * auVar93[0xe] - (0xff < sVar20);
              pcVar2[8] = (0 < sVar22) * (sVar22 < 0x100) * auVar98[0] - (0xff < sVar22);
              pcVar2[9] = (0 < sVar24) * (sVar24 < 0x100) * auVar98[2] - (0xff < sVar24);
              pcVar2[10] = (0 < sVar26) * (sVar26 < 0x100) * auVar98[4] - (0xff < sVar26);
              pcVar2[0xb] = (0 < sVar28) * (sVar28 < 0x100) * auVar98[6] - (0xff < sVar28);
              pcVar2[0xc] = (0 < sVar30) * (sVar30 < 0x100) * auVar98[8] - (0xff < sVar30);
              pcVar2[0xd] = (0 < sVar32) * (sVar32 < 0x100) * auVar98[10] - (0xff < sVar32);
              pcVar2[0xe] = (0 < sVar34) * (sVar34 < 0x100) * auVar98[0xc] - (0xff < sVar34);
              pcVar2[0xf] = (0 < sVar36) * (sVar36 < 0x100) * auVar98[0xe] - (0xff < sVar36);
              pcVar2 = (char *)(lVar87 + 0x10 + uVar88 * 2);
              *pcVar2 = (0 < sVar6) * (sVar6 < 0x100) * auVar96[0] - (0xff < sVar6);
              pcVar2[1] = (0 < sVar9) * (sVar9 < 0x100) * auVar96[2] - (0xff < sVar9);
              pcVar2[2] = (0 < sVar11) * (sVar11 < 0x100) * auVar96[4] - (0xff < sVar11);
              pcVar2[3] = (0 < sVar13) * (sVar13 < 0x100) * auVar96[6] - (0xff < sVar13);
              pcVar2[4] = (0 < sVar15) * (sVar15 < 0x100) * auVar96[8] - (0xff < sVar15);
              pcVar2[5] = (0 < sVar17) * (sVar17 < 0x100) * auVar96[10] - (0xff < sVar17);
              pcVar2[6] = (0 < sVar19) * (sVar19 < 0x100) * auVar96[0xc] - (0xff < sVar19);
              pcVar2[7] = (0 < sVar21) * (sVar21 < 0x100) * auVar96[0xe] - (0xff < sVar21);
              pcVar2[8] = (0 < sVar23) * (sVar23 < 0x100) * auVar97[0] - (0xff < sVar23);
              pcVar2[9] = (0 < sVar25) * (sVar25 < 0x100) * auVar97[2] - (0xff < sVar25);
              pcVar2[10] = (0 < sVar27) * (sVar27 < 0x100) * auVar97[4] - (0xff < sVar27);
              pcVar2[0xb] = (0 < sVar29) * (sVar29 < 0x100) * auVar97[6] - (0xff < sVar29);
              pcVar2[0xc] = (0 < sVar31) * (sVar31 < 0x100) * auVar97[8] - (0xff < sVar31);
              pcVar2[0xd] = (0 < sVar33) * (sVar33 < 0x100) * auVar97[10] - (0xff < sVar33);
              pcVar2[0xe] = (0 < sVar35) * (sVar35 < 0x100) * auVar97[0xc] - (0xff < sVar35);
              pcVar2[0xf] = (0 < sVar37) * (sVar37 < 0x100) * auVar97[0xe] - (0xff < sVar37);
              uVar88 = uVar88 + 0x10;
            } while (uVar76 != uVar88);
            if (uVar78 == uVar76) goto code_r0x000140aa640f;
            if ((uVar78 & 0xc) == 0) {
              lVar87 = lVar87 + uVar76 * 2;
              uVar74 = uVar74 + uVar76 * -2;
              goto code_r0x000140aa63fa;
            }
          }
          uVar88 = uVar78 & 0xfffffffffffffffc;
          uVar74 = uVar74 + uVar88 * -2;
          do {
            uVar4 = *(ulonglong *)(lVar87 + uVar76 * 2);
            auVar40._8_6_ = 0;
            auVar40._0_8_ = uVar4;
            auVar40[0xe] = (char)(uVar4 >> 0x38);
            auVar43._8_4_ = 0;
            auVar43._0_8_ = uVar4;
            auVar43[0xc] = (char)(uVar4 >> 0x30);
            auVar43._13_2_ = auVar40._13_2_;
            auVar46._8_4_ = 0;
            auVar46._0_8_ = uVar4;
            auVar46._12_3_ = auVar43._12_3_;
            auVar49._8_2_ = 0;
            auVar49._0_8_ = uVar4;
            auVar49[10] = (char)(uVar4 >> 0x28);
            auVar49._11_4_ = auVar46._11_4_;
            auVar52._8_2_ = 0;
            auVar52._0_8_ = uVar4;
            auVar52._10_5_ = auVar49._10_5_;
            auVar55[8] = (char)(uVar4 >> 0x20);
            auVar55._0_8_ = uVar4;
            auVar55._9_6_ = auVar52._9_6_;
            auVar61._7_8_ = 0;
            auVar61._0_7_ = auVar55._8_7_;
            auVar66._1_8_ = SUB158(auVar61 << 0x40,7);
            auVar66[0] = (char)(uVar4 >> 0x18);
            auVar66._9_6_ = 0;
            auVar67._1_10_ = SUB1510(auVar66 << 0x30,5);
            auVar67[0] = (char)(uVar4 >> 0x10);
            auVar67._11_4_ = 0;
            auVar58[2] = (char)(uVar4 >> 8);
            auVar58._0_2_ = (ushort)uVar4;
            auVar58._3_12_ = SUB1512(auVar67 << 0x20,3);
            auVar92._0_2_ = (ushort)uVar4 & 0xff;
            auVar92._2_13_ = auVar58._2_13_;
            auVar92[0xf] = 0;
            auVar93 = pshuflw(auVar92,auVar92,0xb1);
            auVar93 = pshufhw(auVar93,auVar93,0xb1);
            sVar7 = auVar93._0_2_;
            sVar6 = auVar93._2_2_;
            sVar8 = auVar93._4_2_;
            sVar9 = auVar93._6_2_;
            sVar10 = auVar93._8_2_;
            sVar11 = auVar93._10_2_;
            sVar12 = auVar93._12_2_;
            sVar13 = auVar93._14_2_;
            *(ulonglong *)(lVar87 + uVar76 * 2) =
                 CONCAT17((0 < sVar13) * (sVar13 < 0x100) * auVar93[0xe] - (0xff < sVar13),
                          CONCAT16((0 < sVar12) * (sVar12 < 0x100) * auVar93[0xc] - (0xff < sVar12),
                                   CONCAT15((0 < sVar11) * (sVar11 < 0x100) * auVar93[10] -
                                            (0xff < sVar11),
                                            CONCAT14((0 < sVar10) * (sVar10 < 0x100) * auVar93[8] -
                                                     (0xff < sVar10),
                                                     CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                              auVar93[6] - (0xff < sVar9),
                                                              CONCAT12((0 < sVar8) * (sVar8 < 0x100)
                                                                       * auVar93[4] - (0xff < sVar8)
                                                                       ,CONCAT11((0 < sVar6) *
                                                                                 (sVar6 < 0x100) *
                                                                                 auVar93[2] -
                                                                                 (0xff < sVar6),
                                                                                 (0 < sVar7) *
                                                                                 (sVar7 < 0x100) *
                                                                                 auVar93[0] -
                                                                                 (0xff < sVar7))))))
                                  ));
            uVar76 = uVar76 + 4;
          } while (uVar88 != uVar76);
          lVar87 = lVar87 + uVar88 * 2;
          if (uVar78 == uVar88) goto code_r0x000140aa640f;
        }
code_r0x000140aa63fa:
        uVar76 = 0;
        do {
          puVar3 = (ushort *)(lVar87 + uVar76);
          *puVar3 = *puVar3 << 8 | *puVar3 >> 8;
          uVar76 = uVar76 + 2;
        } while (uVar74 != uVar76);
      }
    }
code_r0x000140aa640f:
    *param_1 = -0x7ffffffffffffff6;
    goto code_r0x000140aa641c;
  case 0x24:
  case 0x26:
    goto code_r0x000140aa6223;
  case 0x25:
  case 0x29:
code_r0x000140aa61eb:
    puVar77 = puStack_7b8;
    lVar89 = lStack_798;
    lVar90 = lStack_790;
    puVar91 = puStack_7a8;
    lVar94 = lStack_7a0;
    goto code_r0x000140aa6201;
  case 0x28:
code_r0x000140aa6225:
    out((int)*param_1,0x8b64);
    *(byte *)piVar73 = (char)*piVar73 + bStack_220;
    ppuVar81 = (undefined **)auStack_b58;
    param_1 = (longlong *)((longlong)param_1 + 4);
code_r0x000140aa6223:
    *(ulonglong *)((longlong)param_1 + 0x2a) = CONCAT26(uStack_76a,uStack_770);
    *(ulonglong *)((longlong)param_1 + 0x32) = CONCAT26(uStack_762,uStack_768);
    *(undefined4 *)((longlong)param_1 + 0x1a) = uStack_780;
    puVar82 = (undefined1 *)ppuVar81;
code_r0x000140aa6239:
    *(undefined2 *)((longlong)param_1 + 0x1e) = uStack_77c;
    puVar80 = puStack_77a;
    puVar83 = puVar82;
code_r0x000140aa624b:
    param_1[4] = (longlong)puVar80;
    *(undefined2 *)(param_1 + 5) = uStack_772;
    *param_1 = lVar95;
    param_1[1] = uVar74;
    param_1[2] = (longlong)puVar77;
    *(short *)(param_1 + 3) = (short)piVar73;
    puVar84 = puVar83;
code_r0x000140aa641c:
    *(undefined **)(puVar84 + -8) = &UNK_140aa6424;
    pdb_14049ccf0(param_3);
    *(undefined **)(puVar84 + -8) = &UNK_140aa643c;
    pub_1406abac0(pbStack_758,0x2f8,8);
    return param_1;
  case 0x2a:
code_r0x000143048b64:
code_r0x000143048b66:
    *(int *)param_3 = (int)*param_1;
    *(undefined **)(puVar85 + -8) = &UNK_143048b64;
    pcVar5 = (code *)swi(3);
    plVar72 = (longlong *)(*pcVar5)();
    return plVar72;
  case 0x2b:
code_r0x000143048b65:
    puVar85 = auStack_ad0;
    goto code_r0x000143048b66;
  }
code_r0x000140aa5561:
  *param_1 = 2;
  uStack_29 = 0;
  puStack_b60 = (undefined *)0x140aa557b;
  pdb_14049ccf0(&lStack_3c8);
code_r0x000140aa557c:
  return param_1;
code_r0x000140aa553a:
  param_1[1] = -0x8000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[5] = -0x7ffffffffffffffc;
  *(undefined1 *)(param_1 + 6) = 0x1a;
  *(byte *)((longlong)param_1 + 0x31) = bStack_220;
  goto code_r0x000140aa5561;
}

