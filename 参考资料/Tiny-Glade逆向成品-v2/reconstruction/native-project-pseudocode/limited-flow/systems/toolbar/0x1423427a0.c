// VA 0x1423427a0, PDB extent 1956 bytes
// image::codecs::png::PngDecoder::with_limits<std::io::buffered::bufreader::BufReader<std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000142343265) overlaps instruction at (ram,0x000142343263)
    */
/* WARNING: Removing unreachable block (ram,0x00014234335e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   image::codecs::png::PngDecoder::with_limits<std::io::buffered::bufreader::BufReader<std::fs::File>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 1956 */

ulonglong *
pdb_1423427a0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  byte *pbVar1;
  char *pcVar2;
  ushort *puVar3;
  code cVar4;
  char unaff_00084f00;
  undefined8 **unaff_0008ae00;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
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
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  longlong lVar47;
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
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  byte bVar78;
  undefined1 uVar79;
  char cVar80;
  uint uVar81;
  uint uVar82;
  ulonglong *puVar83;
  ulonglong uVar84;
  ulonglong *extraout_RAX;
  code *pcVar85;
  ulonglong uVar86;
  uint7 uVar90;
  int *piVar87;
  ulonglong uVar88;
  code **ppcVar89;
  code *pcVar91;
  undefined *puVar92;
  undefined4 uVar93;
  undefined8 **ppuVar94;
  undefined1 *puVar95;
  undefined1 *puVar96;
  undefined1 *puVar97;
  undefined1 *puVar98;
  undefined1 *puVar99;
  undefined1 *puVar100;
  undefined1 *puVar102;
  undefined8 **ppuVar103;
  undefined1 *puVar104;
  undefined8 **ppuVar105;
  byte bVar106;
  ulonglong uVar107;
  undefined *puVar108;
  ulonglong uVar109;
  ulonglong unaff_R14;
  ulonglong uVar110;
  bool bVar111;
  undefined8 in_MM0;
  code *pcVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  ulonglong uVar118;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auStack_96d4 [33652];
  undefined1 *apuStack_1360 [252];
  ulonglong uStack_b80;
  ulonglong *puStack_b78;
  ulonglong *puStack_b70;
  undefined8 *puStack_b60;
  undefined1 auStack_b58 [16];
  undefined *puStack_b48;
  ulonglong uStack_b38;
  code *pcStack_b30;
  undefined *puStack_b28;
  code *pcStack_b20;
  ulonglong uStack_b18;
  ulonglong *puStack_b10;
  undefined *puStack_b08;
  ulonglong uStack_b00;
  ulonglong uStack_af8;
  ulonglong uStack_af0;
  ulonglong uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 auStack_ad8 [60];
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
  ulonglong uStack_7c8;
  ulonglong uStack_7c0;
  ulonglong *puStack_7b8;
  ushort uStack_7b0;
  undefined4 uStack_7ae;
  undefined2 uStack_7aa;
  code *pcStack_7a8;
  ulonglong uStack_7a0;
  ulonglong uStack_798;
  ulonglong uStack_790;
  undefined4 uStack_780;
  undefined2 uStack_77c;
  code *pcStack_77a;
  undefined2 uStack_772;
  undefined6 uStack_770;
  undefined2 uStack_76a;
  undefined6 uStack_768;
  undefined2 uStack_762;
  undefined6 uStack_760;
  byte *pbStack_758;
  undefined4 uStack_6c0;
  undefined1 uStack_6bc;
  ulonglong uStack_6b8;
  ulonglong uStack_6b0;
  ulonglong uStack_6a8;
  code *pcStack_6a0;
  ulonglong uStack_698;
  ulonglong uStack_690;
  ulonglong uStack_688;
  ulonglong uStack_680;
  undefined8 uStack_678;
  undefined1 auStack_670 [680];
  ulonglong uStack_3c8;
  ulonglong uStack_3c0;
  ulonglong uStack_3b8;
  code *pcStack_3b0;
  ulonglong uStack_3a8;
  ulonglong uStack_3a0;
  ulonglong uStack_398;
  ulonglong uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [56];
  longlong lStack_348;
  longlong lStack_300;
  byte bStack_221;
  byte bStack_220;
  uint uStack_104;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  code *pcStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  code *pcStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_29;
  undefined8 uStack_28;
  undefined8 **ppuVar101;
  
  puVar97 = auStack_b58;
  puVar99 = auStack_b58;
  puVar102 = auStack_b58;
  puVar104 = auStack_b58;
  puVar100 = auStack_b58;
  puVar98 = auStack_b58;
  ppuVar101 = (undefined8 **)auStack_b58;
  ppuVar103 = (undefined8 **)auStack_b58;
  ppuVar105 = (undefined8 **)auStack_b58;
  uStack_28 = 0xfffffffffffffffe;
  uVar107 = 0xffffffffffffffff;
  if ((byte)*param_3 != 0) {
    uVar107 = param_3[1];
  }
  uStack_6b8 = *param_2;
  uStack_6b0 = param_2[1];
  uStack_6a8 = param_2[2];
  pcStack_6a0 = (code *)param_2[3];
  uStack_698 = param_2[4];
  uStack_690 = param_2[5];
  puStack_b60 = (undefined8 *)0x14234280b;
  pdb_140496530(auStack_8f8,&uStack_6b8,uVar107);
  uStack_6bc = 1;
  uStack_29 = 1;
  puStack_b60 = (undefined8 *)0x142342828;
  pdb_140496720(&uStack_3c8,auStack_8f8);
  if ((int)uStack_3c8 != 4) {
    uStack_c8 = uStack_3b8;
    uStack_c0 = pcStack_3b0;
    uStack_d8 = uStack_3c8;
    lStack_d0 = uStack_3c0;
    uStack_29 = 1;
    puStack_b60 = (undefined8 *)0x1423428b1;
    pdb_140d9e490(&uStack_6b8,&uStack_d8);
    param_1[3] = uStack_6a8;
    param_1[4] = (ulonglong)pcStack_6a0;
    param_1[5] = uStack_698;
    param_1[6] = uStack_690;
    param_1[7] = uStack_688;
    param_1[8] = uStack_680;
    param_1[1] = uStack_6b8;
    param_1[2] = uStack_6b0;
LAB_1423428de:
    *param_1 = 2;
    puStack_b60 = (undefined8 *)0x1423428f1;
    pdb_141177c90(auStack_8f8);
    return param_1;
  }
  if ((((int)param_3[2] == 1) &&
      (*(uint *)((longlong)param_3 + 0x14) < *(uint *)(uStack_3c0 + 0x11c))) ||
     (((int)param_3[3] == 1 && (*(uint *)((longlong)param_3 + 0x1c) < *(uint *)(uStack_3c0 + 0x120))
      ))) {
    param_1[1] = 0x8000000000000007;
    param_1[2] = 2;
    goto LAB_1423428de;
  }
  uStack_6c0 = 0x10;
  puStack_b60 = (undefined8 *)0x142342923;
  pub_142e32760(&uStack_b38,auStack_8f8,0x240);
  uStack_29 = 0;
  puStack_b60 = (undefined8 *)0x142342939;
  pdb_1429bd520(&uStack_6b8,&uStack_b38);
  uVar107 = uStack_6b8;
  if (SBORROW8(0,uStack_6b8)) {
    pcStack_e8 = pcStack_6a0;
    uStack_e0 = uStack_698;
    uStack_f8 = uStack_6b0;
    uStack_f0 = uStack_6a8;
    uStack_29 = 0;
    puStack_b60 = (undefined8 *)0x14234297c;
    pdb_140d9e490(&uStack_b38,&uStack_f8);
    param_1[7] = (ulonglong)puStack_b08;
    param_1[8] = uStack_b00;
    param_1[5] = uStack_b18;
    param_1[6] = (ulonglong)puStack_b10;
    param_1[3] = (ulonglong)puStack_b28;
    param_1[4] = (ulonglong)pcStack_b20;
    param_1[1] = uStack_b38;
    param_1[2] = (ulonglong)pcStack_b30;
    *param_1 = 2;
    return param_1;
  }
  uStack_48 = uStack_680;
  uStack_40 = uStack_678;
  uStack_58 = uStack_690;
  uStack_50 = uStack_688;
  pcStack_68 = pcStack_6a0;
  uStack_60 = uStack_698;
  uStack_78 = uStack_6b0;
  uStack_70 = uStack_6a8;
  puVar108 = (undefined *)0x288;
  puStack_b60 = (undefined8 *)0x142342a10;
  pub_142e32760(auStack_380,auStack_670);
  uStack_88 = uStack_48;
  uStack_80 = uStack_40;
  uStack_98 = uStack_58;
  uStack_90 = uStack_50;
  uStack_3c0 = uStack_78;
  uStack_3b8 = uStack_70;
  pcStack_3b0 = pcStack_68;
  uStack_3a8 = uStack_60;
  uStack_3a0 = uStack_58;
  uStack_398 = uStack_50;
  uStack_390 = uStack_48;
  uStack_388 = uStack_40;
  uStack_3c8 = uVar107;
  if (SBORROW8(0,lStack_348)) {
                    /* WARNING: Subroutine does not return */
    puStack_b60 = (undefined8 *)0x142342ec7;
    pdb_142dc8150(&UNK_14360d670);
  }
  if (uStack_104 != 0) {
    bVar78 = 8;
    if (((((byte)uStack_104 & bStack_220 == 0x10) == 0) &&
        (bVar78 = bStack_220, (uStack_104 & 0x10) != 0)) && (bVar78 = 8, 8 < bStack_220)) {
      bVar78 = bStack_220;
    }
    bStack_220 = bVar78;
    if ((uStack_104 & 0x10) == 0) {
      puVar83 = (ulonglong *)(ulonglong)bStack_221;
    }
    else {
      uVar90 = (uint7)(uint3)(uStack_104 >> 8);
      uVar82 = (uint)bStack_221;
      if (bStack_221 == 0) {
        puVar83 = (ulonglong *)CONCAT71(uVar90,4);
      }
      else {
        if (uVar82 != 2) {
          puVar83 = (ulonglong *)(ulonglong)uVar82;
          if (uVar82 == 3) {
            puVar83 = (ulonglong *)
                      (CONCAT71(0x80000000000000,(lStack_300 != -0x7fffffffffffffff) << 2) | 2);
          }
          goto LAB_142342aac;
        }
        puVar83 = (ulonglong *)CONCAT71(uVar90,6);
      }
      if (lStack_300 == -0x7fffffffffffffff) {
        puVar83 = (ulonglong *)(ulonglong)uVar82;
      }
    }
    goto LAB_142342aac;
  }
  pcVar85 = (code *)(ulonglong)bStack_220;
  pcVar91 = (code *)&UNK_1434db1a4;
  uVar86 = (ulonglong)*(int *)(&UNK_1434db1a4 + (ulonglong)bStack_221 * 4);
  puVar83 = (ulonglong *)(&UNK_1434db1a4 + uVar86);
  uVar82 = (uint)bStack_220;
  bVar106 = (byte)puVar108;
  bVar78 = (byte)puVar83;
  puVar96 = auStack_b58;
  ppuVar94 = (undefined8 **)auStack_b58;
  puVar95 = auStack_b58;
  uVar84 = uStack_78;
  uVar110 = uStack_70;
  pcVar112 = pcStack_68;
  uVar88 = uStack_60;
  uVar109 = uStack_58;
  uVar118 = uStack_50;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_221) {
  case 0:
code_r0x000142342ba1:
    uVar82 = 0;
    for (uVar81 = (uint)bStack_220; (uVar81 & 1) == 0; uVar81 = uVar81 >> 1 | 0x80000000) {
      uVar82 = uVar82 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000142342bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar83 = (ulonglong *)
              (*(code *)(&UNK_1434db1fc + *(int *)(&UNK_1434db1fc + (ulonglong)uVar82 * 4)))();
    return puVar83;
  default:
code_r0x000142342ed7:
                    /* WARNING: Does not return */
    pcVar85 = (code *)invalidInstructionException();
    (*pcVar85)();
  case 2:
code_r0x000142342c1e:
    uVar82 = 0;
    for (uVar81 = (uint)bStack_220; (uVar81 & 1) == 0; uVar81 = uVar81 >> 1 | 0x80000000) {
      uVar82 = uVar82 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000142342c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar83 = (ulonglong *)
              (*(code *)(&UNK_1434db1e8 + *(int *)(&UNK_1434db1e8 + (ulonglong)uVar82 * 4)))();
    return puVar83;
  case 3:
    goto code_r0x000142342c5b;
  case 4:
code_r0x000142342be1:
    uVar82 = 0;
    for (uVar81 = (uint)bStack_220; (uVar81 & 1) == 0; uVar81 = uVar81 >> 1 | 0x80000000) {
      uVar82 = uVar82 + 1;
    }
    puVar83 = (ulonglong *)&UNK_1434db1d4;
    uVar107 = (ulonglong)*(int *)(&UNK_1434db1d4 + (ulonglong)uVar82 * 4);
code_r0x000142342bf3:
                    /* WARNING: Could not recover jumptable at 0x000142342bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar83 = (ulonglong *)(*(code *)(uVar107 + (longlong)puVar83))();
    return puVar83;
  case 6:
code_r0x000142342ca2:
    uVar82 = 0;
    for (uVar81 = (uint)bStack_220; (uVar81 & 1) == 0; uVar81 = uVar81 >> 1 | 0x80000000) {
      uVar82 = uVar82 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000142342cb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar83 = (ulonglong *)
              (*(code *)(&UNK_1434db1c0 + *(int *)(&UNK_1434db1c0 + (ulonglong)uVar82 * 4)))
                        (&UNK_1434db1c0 + *(int *)(&UNK_1434db1c0 + (ulonglong)uVar82 * 4));
    return puVar83;
  case 7:
    goto code_r0x000142342c9d;
  case 8:
code_r0x000142342e4d:
    *pcVar85 = (code)((char)*pcVar85 + bVar106);
    param_1[5] = 0x8000000000000004;
    *(byte *)(param_1 + 6) = 5;
    break;
  case 9:
code_r0x000142342e76:
    *pcVar85 = (code)((char)*pcVar85 + bVar106);
    param_1[5] = 0x8000000000000004;
    *(byte *)(param_1 + 6) = 8;
    break;
  case 10:
code_r0x000142342dd6:
    *pcVar85 = (code)((char)*pcVar85 + bVar106 + (0xfffffffebcb24e5b < uVar86));
    param_1[5] = 0x8000000000000004;
    *(byte *)(param_1 + 6) = 7;
    break;
  case 0xb:
code_r0x000142342da7:
    pcVar85[-0x48] = (code)((char)pcVar85[-0x48] + bVar78);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    pcVar85[0x28468948] = (code)((char)pcVar85[0x28468948] + bStack_220);
    goto code_r0x000142342db6;
  case 0xc:
code_r0x000142342bc8:
    *pcVar85 = (code)((char)*pcVar85 + bStack_220 + (0xfffffffebcb24e5b < uVar86));
    param_1[5] = 0x8000000000000004;
    *(byte *)(param_1 + 6) = 1;
    break;
  case 0xd:
code_r0x000142342df2:
    puStack_b60 = (undefined8 *)0x142342e0b;
    pub_142e32760(&uStack_698,&uStack_3c8,0x2d0);
    uStack_6b8 = *param_3;
    uStack_6b0 = param_3[1];
    uStack_6a8 = param_3[2];
    pcStack_6a0 = (code *)param_3[3];
    puStack_b60 = (undefined8 *)0x142342e35;
    pub_142e32760(param_1,&uStack_6b8,0x2f0);
    *(byte *)(param_1 + 0x5e) = 1;
    return param_1;
  case 0xe:
    goto code_r0x000142342cdd;
  case 0xf:
    goto code_r0x000142342d0d;
  case 0x10:
code_r0x000142342ccf:
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    pcVar85[0x28468948] = (code)((char)pcVar85[0x28468948] + bStack_220);
    goto code_r0x000142342cd9;
  case 0x11:
code_r0x000142342bf1:
    uVar107 = (ulonglong)(byte)(bStack_220 + 0x81);
    goto code_r0x000142342bf3;
  case 0x12:
code_r0x000142342d83:
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    pcVar85[0x28468948] = (code)((char)pcVar85[0x28468948] + bStack_220);
    goto code_r0x000142342d8d;
  case 0x13:
code_r0x000142342d00:
    uVar82 = uVar82 + 0xece9;
    *(char *)(uVar107 + 0xe5e906) = *(char *)(uVar107 + 0xe5e906) + -0x4f;
    *(char *)(ulonglong)uVar82 = *(char *)(ulonglong)uVar82 + (char)uVar82;
code_r0x000142342d0d:
    param_1[1] = 0x8000000000000000;
    *(byte *)(param_1 + 2) = 0;
    param_1[5] = 0x8000000000000004;
    *(byte *)(param_1 + 6) = 10;
    break;
  case 0x14:
code_r0x000142342d7b:
    *(byte *)(param_1 + 2) = 0;
    param_1[5] = 0x8000000000000004;
code_r0x000142342d8d:
    *(byte *)(param_1 + 6) = 6;
    break;
  case 0x15:
code_r0x000142342cc2:
    pcVar85[-0x77] = (code)((byte)pcVar85[-0x77] | 0x46);
    *pcVar85 = (code)((char)*pcVar85 + bVar106);
    param_1[5] = 0x8000000000000004;
code_r0x000142342cd9:
    *(byte *)(param_1 + 6) = 4;
code_r0x000142342cdd:
    break;
  case 0x16:
code_r0x000142342b60:
    puVar96 = auStack_b58;
    ppuVar94 = (undefined8 **)auStack_b58;
    puVar95 = auStack_b58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bStack_221) {
    case 0:
      goto code_r0x000142342ba1;
    default:
      goto code_r0x000142342ed7;
    case 2:
      goto code_r0x000142342c1e;
    case 3:
      goto code_r0x000142342c5b;
    case 4:
      goto code_r0x000142342be1;
    case 6:
      goto code_r0x000142342ca2;
    case 7:
      goto code_r0x000142342c9d;
    case 8:
      goto code_r0x000142342e4d;
    case 9:
      goto code_r0x000142342e76;
    case 10:
      goto code_r0x000142342dd6;
    case 0xb:
      goto code_r0x000142342da7;
    case 0xc:
      goto code_r0x000142342bc8;
    case 0xd:
      goto code_r0x000142342df2;
    case 0xe:
      goto code_r0x000142342cdd;
    case 0xf:
      goto code_r0x000142342d0d;
    case 0x10:
      goto code_r0x000142342ccf;
    case 0x11:
      goto code_r0x000142342bf1;
    case 0x12:
      goto code_r0x000142342d83;
    case 0x13:
      goto code_r0x000142342d00;
    case 0x14:
      goto code_r0x000142342d7b;
    case 0x15:
      goto code_r0x000142342cc2;
    case 0x16:
      goto code_r0x000142342b60;
    case 0x17:
      goto code_r0x000142342de8;
    case 0x18:
      goto code_r0x000142342d3e;
    case 0x19:
      goto code_r0x000142342d98;
    case 0x1a:
      goto code_r0x000142342cde;
    case 0x1b:
      goto code_r0x000142343279;
    case 0x1c:
    case 0x1f:
      goto code_r0x000142343156;
    case 0x1d:
      goto code_r0x00014234328b;
    case 0x1e:
    case 0x20:
      goto code_r0x00014234323f;
    case 0x21:
      goto code_r0x000142343289;
    case 0x22:
      goto code_r0x000142343267;
    case 0x23:
      goto code_r0x0001423432e5;
    case 0x24:
    case 0x26:
      goto code_r0x000142343263;
    case 0x25:
    case 0x29:
      goto code_r0x00014234322b;
    case 0x27:
      goto code_r0x000142343241;
    case 0x28:
      goto code_r0x000142343265;
    case 0x2a:
      goto code_r0x00014234352e;
    case 0x2b:
      goto code_r0x00014234376f;
    case 0x2c:
      goto code_r0x000142343640;
    case 0x2d:
      goto code_r0x0001423436a5;
    case 0x2e:
      goto code_r0x000142343583;
    case 0x2f:
      goto code_r0x0001423437d1;
    case 0x30:
      goto code_r0x000142343831;
    case 0x31:
      goto code_r0x00014234370a;
    case 0x32:
      goto code_r0x000142343894;
    case 0x33:
      goto code_r0x0001423435db;
    }
  case 0x17:
code_r0x000142342de8:
    *(byte *)param_3 = (byte)*param_3 ^ bVar106;
    break;
  case 0x18:
code_r0x000142342d3e:
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    pcVar85[-0x48] = (code)((char)pcVar85[-0x48] + bVar78 + (char)auStack_ad8);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    pcVar85[0x8468948] = (code)((char)pcVar85[0x8468948] + bStack_220);
    *(byte *)(param_1 + 2) = 0;
    param_1[5] = 0x8000000000000004;
    *(byte *)(param_1 + 6) = 0xb;
    break;
  case 0x19:
code_r0x000142342d98:
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    pcVar85[0x8468948] = (code)((char)pcVar85[0x8468948] + bStack_220);
    *(byte *)(param_1 + 2) = 0;
    param_1[5] = 0x8000000000000004;
code_r0x000142342db6:
    *(byte *)(param_1 + 6) = 9;
    break;
  case 0x1a:
code_r0x000142342cde:
    uRamb94904b102eb06b1 = uVar82;
    *(uint *)pcVar85 = *(int *)pcVar85 + uVar82;
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    pcVar85[0xfc8394d] = (code)((char)pcVar85[0xfc8394d] + bStack_220);
LAB_142342aac:
    if ((byte)(bStack_220 ^ bStack_220 - 1) <= (byte)(bStack_220 - 1)) {
                    /* WARNING: Subroutine does not return */
      puStack_b60 = (undefined8 *)0x142342ed6;
      pdb_142dc8150(&UNK_14360d728);
    }
    uVar82 = 0;
    for (uVar81 = (uint)bStack_220; (uVar81 & 1) == 0; uVar81 = uVar81 >> 1 | 0x80000000) {
      uVar82 = uVar82 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000142342ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar83 = (ulonglong *)
              (*(code *)(&UNK_1434db190 + *(int *)(&UNK_1434db190 + (ulonglong)uVar82 * 4)))
                        (puVar83);
    return puVar83;
  case 0x1b:
    goto code_r0x000142343279;
  case 0x1c:
  case 0x1f:
code_r0x000142343156:
    pcVar85 = pcVar85 + -0x73;
    cVar4 = *pcVar85;
    *pcVar85 = (code)((char)*pcVar85 + bVar78);
    auVar115._8_8_ = 0;
    auVar115._0_8_ = *(ulonglong *)(&UNK_1434db1a4 + (longlong)puVar83 * 8);
    auVar115 = ZEXT416(uVar82 + 0x1197fe2 + (uint)CARRY1((byte)cVar4,bVar78)) * auVar115;
    uStack_7c0 = auVar115._0_8_;
    if (auVar115._8_8_ != 0) {
      uStack_7c0 = 0xffffffffffffffff;
code_r0x0001423434be:
      uStack_7c8 = 0;
      pcStack_b30 = (code *)&UNK_1434db0d8;
      puStack_b60 = (undefined8 *)&UNK_1423434e2;
      pdb_142db71cc(0,&uStack_780,&uStack_7c8,0);
                    /* WARNING: Does not return */
      pcVar85 = (code *)invalidInstructionException();
      (*pcVar85)();
    }
    uStack_7c8 = 0;
    if (unaff_R14 != uStack_7c0) goto code_r0x0001423434be;
    param_3 = &uStack_ae0;
    piVar87 = aiStack_7e8;
    puStack_b60 = (undefined8 *)&UNK_14234319c;
    param_4 = unaff_R14;
    pdb_1429bbc40(piVar87,param_3,uVar107);
    if (aiStack_7e8[0] != 4) {
      uStack_7f8 = uStack_7d8;
      uStack_7f0 = uStack_7d0;
      uStack_800 = uStack_7e0;
      puStack_b60 = (undefined8 *)&UNK_142343209;
      pdb_140d9e490(&uStack_7c8,auStack_808);
      pcVar85 = (code *)(ulonglong)uStack_7b0;
      uStack_780 = uStack_7ae;
      uStack_77c = uStack_7aa;
      goto code_r0x00014234322b;
    }
    pcVar91 = (code *)(ulonglong)bStack_810;
    puVar83 = (ulonglong *)CONCAT71((int7)((ulonglong)piVar87 >> 8),1);
    puVar108 = &UNK_1434db210 + *(int *)(&UNK_1434db210 + (longlong)pcVar91 * 4);
    pcVar85 = (code *)&UNK_1434db203;
    uVar82 = (uint)bStack_810;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bStack_810) {
    case 0:
      goto code_r0x0001423432e5;
    default:
                    /* WARNING: Could not emulate address calculation at 0x0001423431cd */
                    /* WARNING: Treating indirect jump as call */
      puVar83 = (ulonglong *)
                (*(code *)(&UNK_1434db238 +
                          *(int *)(&UNK_1434db238 + (ulonglong)(bStack_810 - 1) * 4)))
                          (puVar83,&UNK_1434db238 +
                                   *(int *)(&UNK_1434db238 + (ulonglong)(bStack_810 - 1) * 4));
      return puVar83;
    case 3:
    case 5:
    case 0xc:
                    /* WARNING: Could not emulate address calculation at 0x0001423432b6 */
                    /* WARNING: Treating indirect jump as call */
      puVar83 = (ulonglong *)
                (*(code *)(&UNK_1434db238 +
                          *(int *)(&UNK_1434db238 + (ulonglong)(bStack_810 - 1) * 4)))
                          (puVar83,&UNK_1434db238 +
                                   *(int *)(&UNK_1434db238 + (ulonglong)(bStack_810 - 1) * 4));
      return puVar83;
    case 6:
      pcVar85 = (code *)0x6;
    case 2:
      bVar78 = (byte)(((ushort)pcVar85 & 0xff) / 3);
      break;
    case 7:
      bVar78 = 8;
      goto code_r0x0001423432d5;
    case 8:
      bVar78 = 4;
      goto code_r0x000142343306;
    case 9:
    case 0xb:
      pcVar85 = (code *)0x10;
    case 0xd:
      bVar78 = (byte)pcVar85;
code_r0x0001423432d5:
      bVar78 = bVar78 / 4;
      break;
    case 10:
    case 0xe:
      *(uint *)(param_1 + 5) = (uint)bStack_810;
      puVar96 = auStack_b58;
      goto code_r0x00014234328b;
    case 0xf:
      goto code_r0x00014234359a;
    case 0x10:
      bVar111 = uVar82 == 0x434db203;
      goto code_r0x0001423437dd;
    case 0x11:
      bVar111 = uVar82 == 0x434db203;
      goto code_r0x0001423436ae;
    case 0x12:
      bVar111 = uVar82 == 0x434db203;
      goto code_r0x000142343713;
    case 0x13:
      UNK_1434db203 = UNK_1434db203 + '\t';
      UNK_1434db18e = UNK_1434db18e | 0x4d;
      apuStack_1360[0xfb] = (undefined1 *)&puStack_b60;
      ppuVar94 = &puStack_b60;
      cVar80 = '\x04';
      puVar5 = auStack_ad8;
      do {
        puVar5 = puVar5 + -1;
        ppuVar94 = ppuVar94 + -1;
        *ppuVar94 = (undefined8 *)*puVar5;
        cVar80 = cVar80 + -1;
      } while ('\0' < cVar80);
      puVar98 = auStack_96d4;
      UNK_1434db23c = UNK_1434db23c >> 1 | UNK_1434db23c << 7;
      uStack_ae0._0_1_ = (byte)uStack_ae0 >> 1 | (byte)uStack_ae0 << 7;
      puStack_b60 = auStack_ad8;
      goto code_r0x000142343607;
    case 0x14:
      pbVar1 = &UNK_1434db249 + *(int *)(&UNK_1434db210 + (longlong)pcVar91 * 4);
      *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
      uStack_ae0._0_1_ = (byte)uStack_ae0 >> 1 | (byte)uStack_ae0 << 7;
      UNK_1434db203 = UNK_1434db203 + '\x03';
      goto code_r0x000142343848;
    case 0x15:
      goto code_r0x00014234389d;
    case 0x16:
      bVar111 = uVar82 == 0x434db203;
      goto code_r0x000142343778;
    case 0x17:
      UNK_1434db23c = UNK_1434db23c >> 1 | UNK_1434db23c << 7;
      uStack_ae0._0_1_ = (byte)uStack_ae0 >> 1 | (byte)uStack_ae0 << 7;
      goto code_r0x00014234390a;
    case 0x18:
      UNK_1434db203 = UNK_1434db203 + '\x03';
      cRam000000010b9b3d4b = cRam000000010b9b3d4b + '\x03';
      goto code_r0x00014234364f;
    }
joined_r0x000142343300:
    if (bVar78 != 1) {
code_r0x000142343306:
      if (bVar78 != 2) {
                    /* WARNING: Subroutine does not return */
        puStack_b60 = (undefined8 *)&UNK_1423434fd;
        pdb_142dc83b0(&UNK_1434db0f0,0x28,&UNK_1434db118);
      }
      if (1 < unaff_R14) {
        uVar84 = unaff_R14 & 0x7ffffffffffffffe;
        uVar110 = unaff_R14 - 2;
        if (5 < uVar110) {
          uVar88 = (uVar110 >> 1) + 1;
          if (uVar110 < 0x1e) {
            uVar110 = 0;
          }
          else {
            uVar110 = uVar88 & 0xfffffffffffffff0;
            uVar109 = 0;
            do {
              auVar115 = *(undefined1 (*) [16])(uVar107 + uVar109 * 2);
              auVar117 = *(undefined1 (*) [16])(uVar107 + 0x10 + uVar109 * 2);
              auVar119[1] = 0;
              auVar119[0] = auVar115[8];
              auVar119[2] = auVar115[9];
              auVar119[3] = 0;
              auVar119[4] = auVar115[10];
              auVar119[5] = 0;
              auVar119[6] = auVar115[0xb];
              auVar119[7] = 0;
              auVar119[8] = auVar115[0xc];
              auVar119[9] = 0;
              auVar119[10] = auVar115[0xd];
              auVar119[0xb] = 0;
              auVar119[0xc] = auVar115[0xe];
              auVar119[0xd] = 0;
              auVar119[0xe] = auVar115[0xf];
              auVar119[0xf] = 0;
              auVar120 = pshuflw(auVar119,auVar119,0xb1);
              auVar120 = pshufhw(auVar120,auVar120,0xb1);
              auVar48[0xd] = 0;
              auVar48._0_13_ = auVar115._0_13_;
              auVar48[0xe] = auVar115[7];
              auVar51[0xc] = auVar115[6];
              auVar51._0_12_ = auVar115._0_12_;
              auVar51._13_2_ = auVar48._13_2_;
              auVar54[0xb] = 0;
              auVar54._0_11_ = auVar115._0_11_;
              auVar54._12_3_ = auVar51._12_3_;
              auVar57[10] = auVar115[5];
              auVar57._0_10_ = auVar115._0_10_;
              auVar57._11_4_ = auVar54._11_4_;
              auVar60[9] = 0;
              auVar60._0_9_ = auVar115._0_9_;
              auVar60._10_5_ = auVar57._10_5_;
              auVar63[8] = auVar115[4];
              auVar63._0_8_ = auVar115._0_8_;
              auVar63._9_6_ = auVar60._9_6_;
              auVar69._7_8_ = 0;
              auVar69._0_7_ = auVar63._8_7_;
              auVar72._1_8_ = SUB158(auVar69 << 0x40,7);
              auVar72[0] = auVar115[3];
              auVar72._9_6_ = 0;
              auVar73._1_10_ = SUB1510(auVar72 << 0x30,5);
              auVar73[0] = auVar115[2];
              auVar73._11_4_ = 0;
              auVar66[2] = auVar115[1];
              auVar66._0_2_ = auVar115._0_2_;
              auVar66._3_12_ = SUB1512(auVar73 << 0x20,3);
              auVar113._0_2_ = auVar115._0_2_ & 0xff;
              auVar113._2_13_ = auVar66._2_13_;
              auVar113[0xf] = 0;
              auVar115 = pshuflw(auVar113,auVar113,0xb1);
              auVar115 = pshufhw(auVar115,auVar115,0xb1);
              sVar16 = auVar115._0_2_;
              sVar17 = auVar115._2_2_;
              sVar19 = auVar115._4_2_;
              sVar21 = auVar115._6_2_;
              sVar23 = auVar115._8_2_;
              sVar25 = auVar115._10_2_;
              sVar27 = auVar115._12_2_;
              sVar29 = auVar115._14_2_;
              sVar31 = auVar120._0_2_;
              sVar33 = auVar120._2_2_;
              sVar35 = auVar120._4_2_;
              sVar37 = auVar120._6_2_;
              sVar39 = auVar120._8_2_;
              sVar41 = auVar120._10_2_;
              sVar43 = auVar120._12_2_;
              sVar45 = auVar120._14_2_;
              auVar121[1] = 0;
              auVar121[0] = auVar117[8];
              auVar121[2] = auVar117[9];
              auVar121[3] = 0;
              auVar121[4] = auVar117[10];
              auVar121[5] = 0;
              auVar121[6] = auVar117[0xb];
              auVar121[7] = 0;
              auVar121[8] = auVar117[0xc];
              auVar121[9] = 0;
              auVar121[10] = auVar117[0xd];
              auVar121[0xb] = 0;
              auVar121[0xc] = auVar117[0xe];
              auVar121[0xd] = 0;
              auVar121[0xe] = auVar117[0xf];
              auVar121[0xf] = 0;
              auVar122 = pshuflw(auVar121,auVar121,0xb1);
              auVar122 = pshufhw(auVar122,auVar122,0xb1);
              auVar49[0xd] = 0;
              auVar49._0_13_ = auVar117._0_13_;
              auVar49[0xe] = auVar117[7];
              auVar52[0xc] = auVar117[6];
              auVar52._0_12_ = auVar117._0_12_;
              auVar52._13_2_ = auVar49._13_2_;
              auVar55[0xb] = 0;
              auVar55._0_11_ = auVar117._0_11_;
              auVar55._12_3_ = auVar52._12_3_;
              auVar58[10] = auVar117[5];
              auVar58._0_10_ = auVar117._0_10_;
              auVar58._11_4_ = auVar55._11_4_;
              auVar61[9] = 0;
              auVar61._0_9_ = auVar117._0_9_;
              auVar61._10_5_ = auVar58._10_5_;
              auVar64[8] = auVar117[4];
              auVar64._0_8_ = auVar117._0_8_;
              auVar64._9_6_ = auVar61._9_6_;
              auVar70._7_8_ = 0;
              auVar70._0_7_ = auVar64._8_7_;
              auVar74._1_8_ = SUB158(auVar70 << 0x40,7);
              auVar74[0] = auVar117[3];
              auVar74._9_6_ = 0;
              auVar75._1_10_ = SUB1510(auVar74 << 0x30,5);
              auVar75[0] = auVar117[2];
              auVar75._11_4_ = 0;
              auVar67[2] = auVar117[1];
              auVar67._0_2_ = auVar117._0_2_;
              auVar67._3_12_ = SUB1512(auVar75 << 0x20,3);
              auVar116._0_2_ = auVar117._0_2_ & 0xff;
              auVar116._2_13_ = auVar67._2_13_;
              auVar116[0xf] = 0;
              auVar117 = pshuflw(auVar116,auVar116,0xb1);
              auVar117 = pshufhw(auVar117,auVar117,0xb1);
              sVar15 = auVar117._0_2_;
              sVar18 = auVar117._2_2_;
              sVar20 = auVar117._4_2_;
              sVar22 = auVar117._6_2_;
              sVar24 = auVar117._8_2_;
              sVar26 = auVar117._10_2_;
              sVar28 = auVar117._12_2_;
              sVar30 = auVar117._14_2_;
              sVar32 = auVar122._0_2_;
              sVar34 = auVar122._2_2_;
              sVar36 = auVar122._4_2_;
              sVar38 = auVar122._6_2_;
              sVar40 = auVar122._8_2_;
              sVar42 = auVar122._10_2_;
              sVar44 = auVar122._12_2_;
              sVar46 = auVar122._14_2_;
              pcVar2 = (char *)(uVar107 + uVar109 * 2);
              *pcVar2 = (0 < sVar16) * (sVar16 < 0x100) * auVar115[0] - (0xff < sVar16);
              pcVar2[1] = (0 < sVar17) * (sVar17 < 0x100) * auVar115[2] - (0xff < sVar17);
              pcVar2[2] = (0 < sVar19) * (sVar19 < 0x100) * auVar115[4] - (0xff < sVar19);
              pcVar2[3] = (0 < sVar21) * (sVar21 < 0x100) * auVar115[6] - (0xff < sVar21);
              pcVar2[4] = (0 < sVar23) * (sVar23 < 0x100) * auVar115[8] - (0xff < sVar23);
              pcVar2[5] = (0 < sVar25) * (sVar25 < 0x100) * auVar115[10] - (0xff < sVar25);
              pcVar2[6] = (0 < sVar27) * (sVar27 < 0x100) * auVar115[0xc] - (0xff < sVar27);
              pcVar2[7] = (0 < sVar29) * (sVar29 < 0x100) * auVar115[0xe] - (0xff < sVar29);
              pcVar2[8] = (0 < sVar31) * (sVar31 < 0x100) * auVar120[0] - (0xff < sVar31);
              pcVar2[9] = (0 < sVar33) * (sVar33 < 0x100) * auVar120[2] - (0xff < sVar33);
              pcVar2[10] = (0 < sVar35) * (sVar35 < 0x100) * auVar120[4] - (0xff < sVar35);
              pcVar2[0xb] = (0 < sVar37) * (sVar37 < 0x100) * auVar120[6] - (0xff < sVar37);
              pcVar2[0xc] = (0 < sVar39) * (sVar39 < 0x100) * auVar120[8] - (0xff < sVar39);
              pcVar2[0xd] = (0 < sVar41) * (sVar41 < 0x100) * auVar120[10] - (0xff < sVar41);
              pcVar2[0xe] = (0 < sVar43) * (sVar43 < 0x100) * auVar120[0xc] - (0xff < sVar43);
              pcVar2[0xf] = (0 < sVar45) * (sVar45 < 0x100) * auVar120[0xe] - (0xff < sVar45);
              pcVar2 = (char *)(uVar107 + 0x10 + uVar109 * 2);
              *pcVar2 = (0 < sVar15) * (sVar15 < 0x100) * auVar117[0] - (0xff < sVar15);
              pcVar2[1] = (0 < sVar18) * (sVar18 < 0x100) * auVar117[2] - (0xff < sVar18);
              pcVar2[2] = (0 < sVar20) * (sVar20 < 0x100) * auVar117[4] - (0xff < sVar20);
              pcVar2[3] = (0 < sVar22) * (sVar22 < 0x100) * auVar117[6] - (0xff < sVar22);
              pcVar2[4] = (0 < sVar24) * (sVar24 < 0x100) * auVar117[8] - (0xff < sVar24);
              pcVar2[5] = (0 < sVar26) * (sVar26 < 0x100) * auVar117[10] - (0xff < sVar26);
              pcVar2[6] = (0 < sVar28) * (sVar28 < 0x100) * auVar117[0xc] - (0xff < sVar28);
              pcVar2[7] = (0 < sVar30) * (sVar30 < 0x100) * auVar117[0xe] - (0xff < sVar30);
              pcVar2[8] = (0 < sVar32) * (sVar32 < 0x100) * auVar122[0] - (0xff < sVar32);
              pcVar2[9] = (0 < sVar34) * (sVar34 < 0x100) * auVar122[2] - (0xff < sVar34);
              pcVar2[10] = (0 < sVar36) * (sVar36 < 0x100) * auVar122[4] - (0xff < sVar36);
              pcVar2[0xb] = (0 < sVar38) * (sVar38 < 0x100) * auVar122[6] - (0xff < sVar38);
              pcVar2[0xc] = (0 < sVar40) * (sVar40 < 0x100) * auVar122[8] - (0xff < sVar40);
              pcVar2[0xd] = (0 < sVar42) * (sVar42 < 0x100) * auVar122[10] - (0xff < sVar42);
              pcVar2[0xe] = (0 < sVar44) * (sVar44 < 0x100) * auVar122[0xc] - (0xff < sVar44);
              pcVar2[0xf] = (0 < sVar46) * (sVar46 < 0x100) * auVar122[0xe] - (0xff < sVar46);
              uVar109 = uVar109 + 0x10;
            } while (uVar110 != uVar109);
            if (uVar88 == uVar110) goto code_r0x00014234344f;
            if ((uVar88 & 0xc) == 0) {
              uVar107 = uVar107 + uVar110 * 2;
              uVar84 = uVar84 + uVar110 * -2;
              goto code_r0x00014234343a;
            }
          }
          uVar109 = uVar88 & 0xfffffffffffffffc;
          uVar84 = uVar84 + uVar109 * -2;
          do {
            uVar118 = *(ulonglong *)(uVar107 + uVar110 * 2);
            auVar50._8_6_ = 0;
            auVar50._0_8_ = uVar118;
            auVar50[0xe] = (char)(uVar118 >> 0x38);
            auVar53._8_4_ = 0;
            auVar53._0_8_ = uVar118;
            auVar53[0xc] = (char)(uVar118 >> 0x30);
            auVar53._13_2_ = auVar50._13_2_;
            auVar56._8_4_ = 0;
            auVar56._0_8_ = uVar118;
            auVar56._12_3_ = auVar53._12_3_;
            auVar59._8_2_ = 0;
            auVar59._0_8_ = uVar118;
            auVar59[10] = (char)(uVar118 >> 0x28);
            auVar59._11_4_ = auVar56._11_4_;
            auVar62._8_2_ = 0;
            auVar62._0_8_ = uVar118;
            auVar62._10_5_ = auVar59._10_5_;
            auVar65[8] = (char)(uVar118 >> 0x20);
            auVar65._0_8_ = uVar118;
            auVar65._9_6_ = auVar62._9_6_;
            auVar71._7_8_ = 0;
            auVar71._0_7_ = auVar65._8_7_;
            auVar76._1_8_ = SUB158(auVar71 << 0x40,7);
            auVar76[0] = (char)(uVar118 >> 0x18);
            auVar76._9_6_ = 0;
            auVar77._1_10_ = SUB1510(auVar76 << 0x30,5);
            auVar77[0] = (char)(uVar118 >> 0x10);
            auVar77._11_4_ = 0;
            auVar68[2] = (char)(uVar118 >> 8);
            auVar68._0_2_ = (ushort)uVar118;
            auVar68._3_12_ = SUB1512(auVar77 << 0x20,3);
            auVar114._0_2_ = (ushort)uVar118 & 0xff;
            auVar114._2_13_ = auVar68._2_13_;
            auVar114[0xf] = 0;
            auVar115 = pshuflw(auVar114,auVar114,0xb1);
            auVar115 = pshufhw(auVar115,auVar115,0xb1);
            sVar16 = auVar115._0_2_;
            sVar15 = auVar115._2_2_;
            sVar17 = auVar115._4_2_;
            sVar18 = auVar115._6_2_;
            sVar19 = auVar115._8_2_;
            sVar20 = auVar115._10_2_;
            sVar21 = auVar115._12_2_;
            sVar22 = auVar115._14_2_;
            *(ulonglong *)(uVar107 + uVar110 * 2) =
                 CONCAT17((0 < sVar22) * (sVar22 < 0x100) * auVar115[0xe] - (0xff < sVar22),
                          CONCAT16((0 < sVar21) * (sVar21 < 0x100) * auVar115[0xc] - (0xff < sVar21)
                                   ,CONCAT15((0 < sVar20) * (sVar20 < 0x100) * auVar115[10] -
                                             (0xff < sVar20),
                                             CONCAT14((0 < sVar19) * (sVar19 < 0x100) * auVar115[8]
                                                      - (0xff < sVar19),
                                                      CONCAT13((0 < sVar18) * (sVar18 < 0x100) *
                                                               auVar115[6] - (0xff < sVar18),
                                                               CONCAT12((0 < sVar17) *
                                                                        (sVar17 < 0x100) *
                                                                        auVar115[4] -
                                                                        (0xff < sVar17),
                                                                        CONCAT11((0 < sVar15) *
                                                                                 (sVar15 < 0x100) *
                                                                                 auVar115[2] -
                                                                                 (0xff < sVar15),
                                                                                 (0 < sVar16) *
                                                                                 (sVar16 < 0x100) *
                                                                                 auVar115[0] -
                                                                                 (0xff < sVar16)))))
                                            )));
            uVar110 = uVar110 + 4;
          } while (uVar109 != uVar110);
          uVar107 = uVar107 + uVar109 * 2;
          if (uVar88 == uVar109) goto code_r0x00014234344f;
        }
code_r0x00014234343a:
        uVar110 = 0;
        do {
          puVar3 = (ushort *)(uVar107 + uVar110);
          *puVar3 = *puVar3 << 8 | *puVar3 >> 8;
          uVar110 = uVar110 + 2;
        } while (uVar84 != uVar110);
      }
    }
code_r0x00014234344f:
    *param_1 = 0x800000000000000a;
    goto code_r0x00014234345c;
  case 0x1d:
    goto code_r0x00014234328b;
  case 0x1e:
  case 0x20:
code_r0x00014234323f:
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
  case 0x27:
code_r0x000142343241:
    uStack_772 = (undefined2)uVar88;
    uStack_770 = (undefined6)(uVar88 >> 0x10);
    uStack_76a = (undefined2)uVar84;
    uStack_768 = (undefined6)(uVar84 >> 0x10);
    uStack_762 = (undefined2)uVar110;
    uStack_760 = (undefined6)(uVar110 >> 0x10);
    param_1[7] = uVar110;
    ppuVar94 = (undefined8 **)auStack_b58;
    uVar109 = uStack_7c8;
    uVar118 = uStack_7c0;
    pcStack_77a = pcVar112;
    goto code_r0x000142343263;
  case 0x21:
code_r0x000142343289:
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    puVar96 = auStack_b58;
    goto code_r0x00014234328b;
  case 0x22:
code_r0x000142343267:
    puStack_b60 = (undefined8 *)0xfffffffff3000003;
    *(undefined8 *)((longlong)param_1 + 0x2a) = in_MM0;
    ppuVar94 = &puStack_b60;
    goto code_r0x000142343263;
  case 0x23:
code_r0x0001423432e5:
    bVar78 = (byte)(1 / (byte)puVar83);
    goto joined_r0x000142343300;
  case 0x24:
  case 0x26:
    goto code_r0x000142343263;
  case 0x25:
  case 0x29:
code_r0x00014234322b:
    puVar83 = puStack_7b8;
    uVar84 = uStack_798;
    uVar110 = uStack_790;
    pcVar112 = pcStack_7a8;
    uVar88 = uStack_7a0;
    goto code_r0x000142343241;
  case 0x28:
code_r0x000142343265:
    out((int)*param_1,0xb1a4);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    ppuVar94 = (undefined8 **)auStack_b58;
    param_1 = (ulonglong *)((longlong)param_1 + 4);
code_r0x000142343263:
    *(ulonglong *)((longlong)param_1 + 0x2a) = CONCAT26(uStack_76a,uStack_770);
    *(ulonglong *)((longlong)param_1 + 0x32) = CONCAT26(uStack_762,uStack_768);
    *(undefined4 *)((longlong)param_1 + 0x1a) = uStack_780;
    puVar95 = (undefined1 *)ppuVar94;
code_r0x000142343279:
    *(undefined2 *)((longlong)param_1 + 0x1e) = uStack_77c;
    pcVar91 = pcStack_77a;
    puVar96 = puVar95;
code_r0x00014234328b:
    param_1[4] = (ulonglong)pcVar91;
    *(undefined2 *)(param_1 + 5) = uStack_772;
    *param_1 = uVar109;
    param_1[1] = uVar118;
    param_1[2] = (ulonglong)puVar83;
    *(short *)(param_1 + 3) = (short)pcVar85;
    puVar97 = puVar96;
code_r0x00014234345c:
    *(undefined **)(puVar97 + -8) = &UNK_142343464;
    pdb_141177b70(param_3);
    *(undefined **)(puVar97 + -8) = &UNK_14234347c;
    pub_1406abac0(pbStack_758,0x2f8,8);
    return param_1;
  case 0x2a:
code_r0x00014234352e:
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    puStack_b48 = &UNK_1434db1a4;
    uStack_b80 = uVar107;
    apuStack_1360[0xf5] = &UNK_14234355d;
    puStack_b78 = param_3;
    puStack_b70 = param_1;
    puStack_b60 = auStack_ad8;
    pub_1406abac0(_UNK_1434db5a4,0x2f8,8);
    return extraout_RAX;
  case 0x2b:
code_r0x00014234376f:
    unaff_00084f00 = '\x05';
    ppuVar103 = &puStack_b60;
    unaff_0008ae00 = &puStack_b60;
    ppuVar94 = &puStack_b60;
    cVar80 = '\x04';
    puVar5 = auStack_ad8;
    do {
      puVar5 = puVar5 + -1;
      ppuVar94 = ppuVar94 + -1;
      *ppuVar94 = (undefined8 *)*puVar5;
      cVar80 = cVar80 + -1;
      puStack_b60 = auStack_ad8;
    } while ('\0' < cVar80);
code_r0x00014234376f:
    uVar93 = (undefined4)uVar107;
    lVar47 = (ulonglong)(byte)(unaff_00084f00 - 1) * -8;
    *(undefined8 ***)((longlong)ppuVar103 + lVar47 + -8) = unaff_0008ae00;
    puVar100 = (undefined1 *)((longlong)ppuVar103 + lVar47 + -0x8b54);
    pcVar91 = pcVar85 + 0x39;
    *pcVar91 = (code)((byte)*pcVar91 >> 1 | (char)*pcVar91 << 7);
    *(byte *)param_3 = (byte)*param_3 >> 1 | (byte)*param_3 << 7;
    cVar4 = *pcVar85;
    cVar80 = (char)puVar83;
    *(byte *)(puVar83 + -0x3e7d6e1) = (byte)puVar83[-0x3e7d6e1] + cVar80;
    puStack_b10 = (ulonglong *)
                  CONCAT71((int7)((ulonglong)puVar83 >> 8),
                           cVar80 + *(byte *)((longlong)puVar83 + -0x1d08b726));
    if ((bool)(~SCARRY1(cVar80,*(byte *)((longlong)puVar83 + -0x1d08b726)) &
              (undefined *)CONCAT71((int7)((ulonglong)pcVar85 >> 8),(char)pcVar85 + (char)cVar4) <=
              puVar108)) {
      uVar107 = 3;
      puVar83 = puStack_b10;
      goto joined_r0x0001423437a7;
    }
    goto code_r0x000142343865;
  case 0x2c:
code_r0x000142343640:
    pcVar91 = pcVar85 + -0x46;
    *pcVar91 = (code)((byte)*pcVar91 >> 2 | (char)*pcVar91 << 6);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    pcVar85[-0x75] = (code)((byte)pcVar85[-0x75] | 0x4d);
    apuStack_1360[0xfb] = (undefined1 *)&puStack_b60;
    ppuVar94 = &puStack_b60;
    cVar80 = '\x04';
    puVar5 = auStack_ad8;
    do {
      puVar5 = puVar5 + -1;
      ppuVar94 = ppuVar94 + -1;
      *ppuVar94 = (undefined8 *)*puVar5;
      cVar80 = cVar80 + -1;
    } while ('\0' < cVar80);
    puVar99 = auStack_96d4;
    pcVar85 = pcVar85 + 0x39;
    *pcVar85 = (code)((byte)*pcVar85 >> 1 | (char)*pcVar85 << 7);
    *(byte *)param_3 = (byte)*param_3 >> 1 | (byte)*param_3 << 7;
    *(char *)(uVar86 + 0x18c283b9c) = *(char *)(uVar86 + 0x18c283b9c) + bVar78;
    puVar92 = (undefined *)(ulonglong)(uVar82 * 0x434db1a4);
    puStack_b08 = puVar108;
    puStack_b60 = auStack_ad8;
code_r0x000142343664:
    uVar93 = (undefined4)uVar107;
    puStack_b10 = puVar83;
    puVar100 = puVar99;
    if (puVar92 <= puStack_b08) {
      uVar107 = 4;
joined_r0x0001423438ce:
      uVar82 = (uint)param_3;
      puVar108 = puStack_b08;
      goto joined_r0x0001423436dd;
    }
    goto code_r0x000142343928;
  case 0x2d:
code_r0x0001423436a5:
    unaff_00084f00 = '\x05';
    ppuVar101 = &puStack_b60;
    unaff_0008ae00 = &puStack_b60;
    ppuVar94 = &puStack_b60;
    cVar80 = '\x04';
    puVar5 = auStack_ad8;
    do {
      puVar5 = puVar5 + -1;
      ppuVar94 = ppuVar94 + -1;
      *ppuVar94 = (undefined8 *)*puVar5;
      cVar80 = cVar80 + -1;
      uStack_b18 = param_4;
      puStack_b60 = auStack_ad8;
    } while ('\0' < cVar80);
code_r0x0001423436a5:
    uVar93 = (undefined4)uVar107;
    lVar47 = (ulonglong)(byte)(unaff_00084f00 - 1) * -8;
    *(undefined8 ***)((longlong)ppuVar101 + lVar47 + -8) = unaff_0008ae00;
    puVar100 = (undefined1 *)((longlong)ppuVar101 + lVar47 + -0x8b54);
    pcVar91 = pcVar85 + 0x39;
    *pcVar91 = (code)((byte)*pcVar91 >> 1 | (char)*pcVar91 << 7);
    *(byte *)param_3 = (byte)*param_3 >> 1 | (byte)*param_3 << 7;
    cVar4 = *pcVar85;
    cVar80 = (char)puVar83;
    *(byte *)(puVar83 + -0x3e7d6e1) = (byte)puVar83[-0x3e7d6e1] + cVar80;
    puStack_b10 = (ulonglong *)
                  CONCAT71((int7)((ulonglong)puVar83 >> 8),
                           cVar80 + *(byte *)((longlong)puVar83 + -0x1d08b726));
    if ((bool)(~SCARRY1(cVar80,*(byte *)((longlong)puVar83 + -0x1d08b726)) &
              (undefined *)CONCAT71((int7)((ulonglong)pcVar85 >> 8),(char)pcVar85 + (char)cVar4) <=
              puVar108)) {
      uVar107 = 9;
      puVar83 = puStack_b10;
joined_r0x0001423436dd:
      uVar82 = (uint)param_3;
      param_4 = uStack_b18;
      goto joined_r0x0001423436dd;
    }
code_r0x000142343987:
    if (uStack_b18 == 0) goto code_r0x0001423439dd;
    param_4 = uStack_b18 << 2;
    uVar107 = 4;
    goto code_r0x000142343996;
  case 0x2e:
code_r0x000142343583:
    auStack_ad8[0] = 0xfffffffffffffffe;
    pcVar85 = *(code **)(puVar108 + 0x18);
    uStack_ae0._7_1_ = 1;
    param_1 = puVar83;
    puStack_b28 = puVar108;
code_r0x00014234359a:
    puStack_b60 = (undefined8 *)&UNK_1423435a3;
    pcStack_b30 = pcVar91;
    uVar82 = (*pcVar85)(pcVar91);
    param_3 = (ulonglong *)(ulonglong)uVar82;
    uVar107 = (ulonglong)pcVar91 & 0xffffffff;
    uVar93 = SUB84(pcVar91,0);
    uStack_ae0._7_1_ = 1;
    puStack_b60 = (undefined8 *)&UNK_1423435ba;
    uVar79 = (**(code **)(puStack_b28 + 0x20))(pcStack_b30);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar79) {
    case 0:
      uStack_ae0._7_1_ = 0;
      ppcVar89 = &pcStack_b20;
      goto code_r0x0001423435de;
    case 1:
      uStack_ae0._7_1_ = 0;
      puStack_b60 = (undefined8 *)&UNK_142343824;
      pdb_140562df0(&pcStack_b20);
      pcVar91 = (code *)0x800000000000000a;
      pcVar85 = pcStack_b20;
      puVar83 = puStack_b10;
      param_4 = uStack_b18;
      goto code_r0x000142343831;
    case 2:
      uStack_ae0._7_1_ = 0;
      puStack_b60 = (undefined8 *)&UNK_1423436f5;
      pdb_140562df0(&pcStack_b20);
      bVar111 = pcStack_b20 == (code *)0x800000000000000a;
      pcVar85 = pcStack_b20;
      puVar83 = puStack_b10;
      puVar108 = puStack_b08;
      param_4 = uStack_b18;
code_r0x000142343713:
      if (bVar111) {
        pcVar85 = (code *)((ulonglong)param_3 & 0xffffffff);
        goto code_r0x00014234371b;
      }
      break;
    case 3:
      uStack_ae0._7_1_ = 0;
      puStack_b60 = (undefined8 *)&UNK_14234375a;
      pdb_140562df0(&pcStack_b20);
      bVar111 = pcStack_b20 == (code *)0x800000000000000a;
      pcVar85 = pcStack_b20;
      puVar83 = puStack_b10;
      puVar108 = puStack_b08;
      param_4 = uStack_b18;
code_r0x000142343778:
      if (bVar111) {
        pcVar85 = (code *)(((ulonglong)param_3 & 0xffffffff) * 4 * (uVar107 & 0xffffffff));
        goto code_r0x00014234376f;
      }
      break;
    case 4:
      uStack_ae0._7_1_ = 0;
      puStack_b60 = (undefined8 *)&UNK_142343638;
      pdb_140563210(&pcStack_b20);
      pcVar91 = (code *)0x800000000000000a;
      pcVar85 = pcStack_b20;
      puVar83 = puStack_b10;
      param_4 = uStack_b18;
code_r0x00014234364f:
      puVar108 = puStack_b08;
      if (pcVar85 == pcVar91) {
        puVar92 = (undefined *)((uVar107 & 0xffffffff) * ((ulonglong)param_3 & 0xffffffff));
        goto code_r0x000142343664;
      }
      break;
    case 5:
      uStack_ae0._7_1_ = 0;
      puStack_b60 = (undefined8 *)&UNK_142343886;
      pdb_140563210(&pcStack_b20);
      pcVar91 = (code *)0x800000000000000a;
      pcVar85 = pcStack_b20;
      puVar83 = puStack_b10;
      param_4 = uStack_b18;
code_r0x00014234389d:
      puVar108 = puStack_b08;
      if (pcVar85 == pcVar91) {
        pcVar85 = (code *)(((ulonglong)param_3 & 0xffffffff) * 2);
        goto code_r0x00014234389c;
      }
      break;
    case 6:
      uStack_ae0._7_1_ = 0;
      puStack_b60 = (undefined8 *)&UNK_1423438e6;
      pdb_140563210(&pcStack_b20);
      pcVar85 = pcStack_b20;
      puVar83 = puStack_b10;
      puVar108 = puStack_b08;
      param_4 = uStack_b18;
      if (pcStack_b20 == (code *)0x800000000000000a) {
code_r0x00014234390a:
        uVar93 = (undefined4)uVar107;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = ((ulonglong)param_3 & 0xffffffff) * 3;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar107 & 0xffffffff;
        puStack_b10 = puVar83;
        puVar100 = auStack_b58;
        if ((bool)(~(SUB168(auVar9 * auVar14,8) != 0) & SUB168(auVar9 * auVar14,0) <= puVar108)) {
          uVar107 = 6;
          uStack_b18 = param_4;
          goto joined_r0x0001423436dd;
        }
        goto code_r0x000142343928;
      }
      break;
    case 7:
      uStack_ae0._7_1_ = 0;
      puStack_b60 = (undefined8 *)&UNK_1423437bf;
      pdb_140563210(&pcStack_b20);
      bVar111 = pcStack_b20 == (code *)0x800000000000000a;
      pcVar85 = pcStack_b20;
      puVar83 = puStack_b10;
      puVar108 = puStack_b08;
      param_4 = uStack_b18;
code_r0x0001423437dd:
      if (bVar111) {
        pcVar85 = (code *)((ulonglong)param_3 & 0xffffffff);
        goto code_r0x0001423437e5;
      }
      break;
    case 8:
      uStack_ae0._7_1_ = 0;
      puStack_b60 = (undefined8 *)&UNK_142343949;
      pdb_140562fe0(&pcStack_b20,pcStack_b30,puStack_b28);
      pcVar85 = pcStack_b20;
      puVar83 = puStack_b10;
      puVar108 = puStack_b08;
      param_4 = uStack_b18;
      if (pcStack_b20 == (code *)0x800000000000000a) {
        auVar117._8_8_ = 0;
        auVar117._0_8_ = (longlong)param_3 * 3;
        auVar120._8_8_ = 0;
        auVar120._0_8_ = uVar107;
        if (!(bool)(~(SUB168(auVar117 * auVar120,8) != 0) &
                   SUB168(auVar117 * auVar120,0) <= puStack_b08)) goto code_r0x000142343987;
        uVar107 = 8;
        goto joined_r0x0001423436dd;
      }
      break;
    case 9:
      uStack_ae0._7_1_ = 0;
      puStack_b60 = (undefined8 *)&UNK_142343690;
      pdb_140562fe0(&pcStack_b20,pcStack_b30,puStack_b28);
      bVar111 = pcStack_b20 == (code *)0x800000000000000a;
      pcVar85 = pcStack_b20;
      puVar83 = puStack_b10;
      puVar108 = puStack_b08;
      param_4 = uStack_b18;
code_r0x0001423436ae:
      if (bVar111) {
        pcVar85 = (code *)(((ulonglong)param_3 & 0xffffffff) * 4 * (uVar107 & 0xffffffff));
        uStack_b18 = param_4;
        goto code_r0x0001423436a5;
      }
    }
code_r0x0001423439a0:
    param_1[6] = uStack_af0;
    param_1[7] = uStack_ae8;
    param_1[4] = uStack_b00;
    param_1[5] = uStack_af8;
    param_1[1] = param_4;
    param_1[2] = (ulonglong)puVar83;
    param_1[3] = (ulonglong)puVar108;
code_r0x0001423439bc:
    *param_1 = (ulonglong)pcVar85;
    return param_1;
  case 0x2f:
code_r0x0001423437d1:
    pcVar85[-0x75] = (code)((byte)pcVar85[-0x75] | 0x4d);
    apuStack_1360[0xfb] = (undefined1 *)&puStack_b60;
    ppuVar94 = &puStack_b60;
    cVar80 = '\x04';
    puVar5 = auStack_ad8;
    do {
      puVar5 = puVar5 + -1;
      ppuVar94 = ppuVar94 + -1;
      *ppuVar94 = (undefined8 *)*puVar5;
      cVar80 = cVar80 + -1;
    } while ('\0' < cVar80);
    puVar104 = auStack_96d4;
    pcVar91 = pcVar85 + 0x39;
    *pcVar91 = (code)((byte)*pcVar91 >> 1 | (char)*pcVar91 << 7);
    *(byte *)param_3 = (byte)*param_3 >> 1 | (byte)*param_3 << 7;
    puStack_b60 = auStack_ad8;
code_r0x0001423437e5:
    uVar82 = (uint)param_3;
    uVar93 = (undefined4)uVar107;
    auVar122._8_8_ = 0;
    auVar122._0_8_ = (longlong)pcVar85 << 2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar107 & 0xffffffff;
    puStack_b10 = puVar83;
    puVar100 = puVar104;
    if ((bool)(~(SUB168(auVar122 * auVar11,8) != 0) & SUB168(auVar122 * auVar11,0) <= puVar108)) {
      uVar107 = 7;
      goto joined_r0x0001423436dd;
    }
    goto code_r0x000142343928;
  case 0x30:
code_r0x000142343831:
    cVar80 = (char)pcVar85;
    *pcVar85 = (code)((char)*pcVar85 + cVar80);
    *pcVar85 = (code)((char)*pcVar85 + cVar80);
    pcVar85[-0x37b274b8] = (code)((char)pcVar85[-0x37b274b8] + cVar80);
    puVar108 = puStack_b08;
    if (pcVar85 != pcVar91) goto code_r0x0001423439a0;
code_r0x000142343848:
    uVar82 = (uint)param_3;
    uVar93 = (undefined4)uVar107;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = ((ulonglong)param_3 & 0xffffffff) * 2;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar107 & 0xffffffff;
    puStack_b10 = puVar83;
    puVar100 = auStack_b58;
    if ((bool)(~(SUB168(auVar7 * auVar12,8) != 0) & SUB168(auVar7 * auVar12,0) <= puVar108)) {
      uVar107 = 1;
      goto joined_r0x0001423436dd;
    }
    goto code_r0x000142343865;
  case 0x31:
code_r0x00014234370a:
    apuStack_1360[0xfb] = (undefined1 *)&puStack_b60;
    ppuVar94 = &puStack_b60;
    cVar80 = '\x04';
    puVar5 = auStack_ad8;
    do {
      puVar5 = puVar5 + -1;
      ppuVar94 = ppuVar94 + -1;
      *ppuVar94 = (undefined8 *)*puVar5;
      cVar80 = cVar80 + -1;
    } while ('\0' < cVar80);
    puVar102 = auStack_96d4;
    pcVar91 = pcVar85 + 0x39;
    *pcVar91 = (code)((byte)*pcVar91 >> 1 | (char)*pcVar91 << 7);
    *(byte *)param_3 = (byte)*param_3 >> 1 | (byte)*param_3 << 7;
    puStack_b60 = auStack_ad8;
code_r0x00014234371b:
    uVar93 = (undefined4)uVar107;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (longlong)pcVar85 * 3;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar107 & 0xffffffff;
    puStack_b10 = puVar83;
    puVar100 = puVar102;
    if ((bool)(~(SUB168(auVar6 * auVar10,8) != 0) & SUB168(auVar6 * auVar10,0) <= puVar108)) {
      uVar107 = 2;
joined_r0x0001423437a7:
      uVar82 = (uint)param_3;
joined_r0x0001423436dd:
      if (SBORROW8(0,param_4)) goto code_r0x0001423439dd;
code_r0x000142343a1c:
      param_1[1] = uVar107;
      param_1[2] = param_4;
      param_1[3] = (ulonglong)puVar83;
      param_1[4] = (ulonglong)puVar108;
      *(uint *)(param_1 + 5) = uVar82;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar93;
      pcVar85 = (code *)0x800000000000000a;
      goto code_r0x0001423439bc;
    }
    goto code_r0x000142343865;
  case 0x32:
code_r0x000142343894:
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    *pcVar85 = (code)((char)*pcVar85 + bStack_220);
    pcVar85[-0x75] = (code)((byte)pcVar85[-0x75] | 0x4d);
    unaff_00084f00 = '\x05';
    ppuVar105 = &puStack_b60;
    unaff_0008ae00 = &puStack_b60;
    ppuVar94 = &puStack_b60;
    cVar80 = '\x04';
    puVar5 = auStack_ad8;
    do {
      puVar5 = puVar5 + -1;
      ppuVar94 = ppuVar94 + -1;
      *ppuVar94 = (undefined8 *)*puVar5;
      cVar80 = cVar80 + -1;
      puStack_b08 = puVar108;
      puStack_b60 = auStack_ad8;
    } while ('\0' < cVar80);
code_r0x00014234389c:
    lVar47 = (ulonglong)(byte)(unaff_00084f00 - 1) * -8;
    *(undefined8 ***)((longlong)ppuVar105 + lVar47 + -8) = unaff_0008ae00;
    pcVar91 = pcVar85 + 0x39;
    *pcVar91 = (code)((byte)*pcVar91 >> 1 | (char)*pcVar91 << 7);
    *(byte *)param_3 = (byte)*param_3 >> 1 | (byte)*param_3 << 7;
    *pcVar85 = (code)((char)*pcVar85 + (char)pcVar85);
    *(byte *)(puVar83 + -0x7ffd6e1) = (byte)puVar83[-0x7ffd6e1] + (char)puVar83;
    uVar93 = (undefined4)uVar107;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = pcVar85;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar107 & 0xffffffff;
    puStack_b10 = puVar83;
    puVar100 = (undefined1 *)((longlong)ppuVar105 + lVar47 + -0x8b54);
    if ((bool)(~(SUB168(auVar8 * auVar13,8) != 0) & SUB168(auVar8 * auVar13,0) <= puStack_b08)) {
      uVar107 = 5;
      goto joined_r0x0001423438ce;
    }
code_r0x000142343928:
    if (param_4 == 0) goto code_r0x0001423439dd;
    param_4 = param_4 * 2;
    uVar107 = 2;
    goto code_r0x000142343996;
  case 0x33:
code_r0x0001423435db:
    ppcVar89 = (code **)(ulonglong)((int)auStack_ad8 - 0x48);
code_r0x0001423435de:
    puStack_b60 = (undefined8 *)&UNK_1423435e3;
    pdb_140562df0(ppcVar89);
    pcVar85 = pcStack_b20;
    puVar83 = puStack_b10;
    puVar108 = puStack_b08;
    param_4 = uStack_b18;
    if (pcStack_b20 != (code *)0x800000000000000a) goto code_r0x0001423439a0;
code_r0x000142343607:
    uVar82 = (uint)param_3;
    uVar93 = (undefined4)uVar107;
    puVar92 = (undefined *)((uVar107 & 0xffffffff) * ((ulonglong)param_3 & 0xffffffff));
    puStack_b10 = puVar83;
    puVar100 = puVar98;
    if (puVar92 < puVar108 || (longlong)puVar92 - (longlong)puVar108 == 0) {
      if (SBORROW8(0,param_4)) goto code_r0x0001423439dd;
      uVar107 = 0;
      goto code_r0x000142343a1c;
    }
code_r0x000142343865:
    if (param_4 != 0) {
      uVar107 = 1;
code_r0x000142343996:
      *(undefined **)(puVar100 + -8) = &UNK_14234399e;
      pub_1406abac0((byte *)puStack_b10,param_4,uVar107);
    }
code_r0x0001423439dd:
    *param_1 = 0x8000000000000006;
    param_1[1] = 0x8000000000000000;
    param_1[4] = 0;
    return param_1;
  }
code_r0x000142342c82:
  *param_1 = 2;
  uStack_29 = 0;
  puStack_b60 = (undefined8 *)0x142342c9c;
  pdb_141177b70(&uStack_3c8);
code_r0x000142342c9d:
  return param_1;
code_r0x000142342c5b:
  param_1[1] = 0x8000000000000000;
  *(byte *)(param_1 + 2) = 0;
  param_1[5] = 0x8000000000000004;
  *(byte *)(param_1 + 6) = 0x1a;
  *(byte *)((longlong)param_1 + 0x31) = bStack_220;
  goto code_r0x000142342c82;
}

