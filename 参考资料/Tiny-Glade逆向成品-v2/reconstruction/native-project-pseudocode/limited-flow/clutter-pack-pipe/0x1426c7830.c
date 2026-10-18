// VA 0x1426c7830, PDB extent 2193 bytes
// image::codecs::png::PngDecoder::with_limits<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001426c83e5) overlaps instruction at (ram,0x0001426c83e3)
    */
/* WARNING: Removing unreachable block (ram,0x0001426c84de) */
/* Matched PDB project procedure:
   image::codecs::png::PngDecoder::with_limits<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 2193 */

undefined8 * pdb_1426c7830(undefined8 *param_1,ulonglong param_2,undefined8 param_3,byte *param_4)

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
  undefined8 *puVar72;
  longlong *plVar73;
  ulonglong uVar74;
  byte bVar75;
  ulonglong uVar76;
  undefined *puVar77;
  uint7 uVar79;
  int *piVar78;
  undefined *puVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  undefined8 uVar83;
  undefined8 in_MM0;
  longlong lVar84;
  undefined *puVar85;
  undefined8 uVar88;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined8 uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined8 uStack_ad8;
  undefined *puStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  byte abStack_a80 [8];
  undefined1 auStack_a78 [448];
  longlong lStack_8b8;
  longlong lStack_8b0;
  undefined8 uStack_8a8;
  undefined *puStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  ulonglong uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined1 auStack_870 [160];
  byte bStack_7d0;
  undefined1 auStack_7c8 [8];
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  int aiStack_7a8 [2];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  ulonglong uStack_780;
  undefined *puStack_778;
  ushort uStack_770;
  undefined4 uStack_76e;
  undefined2 uStack_76a;
  undefined *puStack_768;
  undefined8 uStack_760;
  longlong lStack_758;
  undefined8 uStack_750;
  undefined4 uStack_740;
  undefined2 uStack_73c;
  undefined *puStack_73a;
  undefined2 uStack_732;
  undefined6 uStack_730;
  undefined2 uStack_72a;
  undefined6 uStack_728;
  undefined2 uStack_722;
  undefined6 uStack_720;
  byte *pbStack_718;
  undefined1 auStack_5e8 [464];
  byte *pbStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulonglong uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined1 uStack_3cc;
  longlong lStack_3c8;
  longlong lStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulonglong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [56];
  longlong lStack_348;
  longlong lStack_300;
  byte bStack_221;
  byte bStack_220;
  uint uStack_124;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte *pbStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar83 = 0xffffffffffffffff;
  if (*param_4 != 0) {
    uVar83 = *(undefined8 *)(param_4 + 8);
  }
  pdb_14007ee60();
  pbStack_50 = pub_1406abab0(0x8000,1);
  if (pbStack_50 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x8000);
    goto LAB_1426c7fe7;
  }
  pdb_140dba930(&lStack_8b8);
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  pub_142e32760(auStack_5e8,&lStack_8b8,0x1d0);
  pbStack_418 = pbStack_50;
  uStack_410 = 0x8000;
  uStack_3e0 = 0;
  uStack_3d0 = 0;
  uStack_3cc = 1;
  uStack_41 = 1;
  uStack_3f0 = param_2;
  uStack_3e8 = param_3;
  uStack_3d8 = uVar83;
  pdb_142ad6e80(&lStack_3c8,auStack_5e8);
  if ((int)lStack_3c8 != 4) {
    uStack_e8 = uStack_3b8;
    puStack_e0 = puStack_3b0;
    lStack_f8 = lStack_3c8;
    lStack_f0 = lStack_3c0;
    uStack_41 = 1;
    pdb_140d9e490(&lStack_8b8,&lStack_f8);
    param_1[3] = uStack_8a8;
    param_1[4] = puStack_8a0;
    param_1[5] = uStack_898;
    param_1[6] = uStack_890;
    param_1[7] = uStack_888;
    param_1[8] = uStack_880;
    param_1[1] = lStack_8b8;
    param_1[2] = lStack_8b0;
LAB_1426c79e5:
    *param_1 = 2;
    pdb_141d369c0(auStack_5e8);
    return param_1;
  }
  if (((*(int *)(param_4 + 0x10) == 1) &&
      (*(uint *)(param_4 + 0x14) < *(uint *)(lStack_3c0 + 0x11c))) ||
     ((*(int *)(param_4 + 0x18) == 1 && (*(uint *)(param_4 + 0x1c) < *(uint *)(lStack_3c0 + 0x120)))
     )) {
    param_1[1] = 0x8000000000000007;
    param_1[2] = 2;
    goto LAB_1426c79e5;
  }
  uStack_3d0 = 0x10;
  pub_142e32760(&uStack_ad8,auStack_5e8,0x220);
  uStack_41 = 0;
  pdb_142ad7000(&lStack_8b8,&uStack_ad8);
  if (SBORROW8(0,lStack_8b8)) {
    puStack_108 = puStack_8a0;
    uStack_100 = uStack_898;
    lStack_118 = lStack_8b0;
    uStack_110 = uStack_8a8;
    uStack_41 = 0;
    pdb_140d9e490(&uStack_ad8,&lStack_118);
    param_1[7] = uStack_aa8;
    param_1[8] = uStack_aa0;
    param_1[5] = uStack_ab8;
    param_1[6] = uStack_ab0;
    param_1[3] = uStack_ac8;
    param_1[4] = uStack_ac0;
    param_1[1] = uStack_ad8;
    param_1[2] = puStack_ad0;
    *param_1 = 2;
    return param_1;
  }
  uStack_68 = uStack_880;
  uStack_60 = uStack_878;
  uStack_78 = uStack_890;
  uStack_70 = uStack_888;
  puStack_88 = puStack_8a0;
  uStack_80 = uStack_898;
  lStack_98 = lStack_8b0;
  uStack_90 = uStack_8a8;
  bVar68 = 0x68;
  pub_142e32760(auStack_380,auStack_870);
  uStack_a8 = uStack_68;
  uStack_a0 = uStack_60;
  uStack_b8 = uStack_78;
  uStack_b0 = uStack_70;
  lStack_3c0 = lStack_98;
  uStack_3b8 = uStack_90;
  puStack_3b0 = puStack_88;
  uStack_3a8 = uStack_80;
  uStack_3a0 = uStack_78;
  uStack_398 = uStack_70;
  uStack_390 = uStack_68;
  uStack_388 = uStack_60;
  lStack_3c8 = lStack_8b8;
  if (SBORROW8(0,lStack_348)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143640d40);
  }
  if (uStack_124 != 0) {
    bVar68 = 8;
    if (((((byte)uStack_124 & bStack_220 == 0x10) == 0) &&
        (bVar68 = bStack_220, (uStack_124 & 0x10) != 0)) && (bVar68 = 8, 8 < bStack_220)) {
      bVar68 = bStack_220;
    }
    bStack_220 = bVar68;
    if ((uStack_124 & 0x10) == 0) {
      puVar77 = (undefined *)(ulonglong)bStack_221;
    }
    else {
      uVar79 = (uint7)(uint3)(uStack_124 >> 8);
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
          goto LAB_1426c7bb9;
        }
        puVar77 = (undefined *)CONCAT71(uVar79,6);
      }
      if (lStack_300 == -0x7fffffffffffffff) {
        puVar77 = (undefined *)(ulonglong)uVar71;
      }
    }
LAB_1426c7bb9:
    if ((byte)(bStack_220 - 1) < (byte)(bStack_220 ^ bStack_220 - 1)) {
      uVar71 = 0;
      for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
        uVar71 = uVar71 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001426c7be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar72 = (undefined8 *)
                (*(code *)(&UNK_143580cd0 + *(int *)(&UNK_143580cd0 + (ulonglong)uVar71 * 4)))
                          (puVar77);
      return puVar72;
    }
LAB_1426c7fe7:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143640df8);
  }
  plVar73 = (longlong *)(ulonglong)bStack_220;
  puVar80 = &UNK_143580ce4;
  uVar76 = (ulonglong)*(int *)(&UNK_143580ce4 + (ulonglong)bStack_221 * 4);
  puVar77 = &UNK_143580ce4 + uVar76;
  uVar71 = (uint)bStack_220;
  bVar75 = (byte)puVar77;
  lVar84 = lStack_98;
  uVar83 = uStack_90;
  puVar85 = puStack_88;
  uVar88 = uStack_80;
  uVar89 = uStack_78;
  uVar74 = uStack_70;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_221) {
  case 0:
code_r0x0001426c7cae:
    uVar71 = 0;
    for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
      uVar71 = uVar71 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001426c7cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar72 = (undefined8 *)
              (*(code *)(&UNK_143580d3c + *(int *)(&UNK_143580d3c + (ulonglong)uVar71 * 4)))();
    return puVar72;
  default:
code_r0x0001426c7ff4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  case 2:
code_r0x0001426c7d2b:
    uVar71 = 0;
    for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
      uVar71 = uVar71 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001426c7d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar72 = (undefined8 *)
              (*(code *)(&UNK_143580d28 + *(int *)(&UNK_143580d28 + (ulonglong)uVar71 * 4)))();
    return puVar72;
  case 3:
    goto code_r0x0001426c7d68;
  case 4:
code_r0x0001426c7cee:
    uVar71 = 0;
    for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
      uVar71 = uVar71 + 1;
    }
    puVar77 = &UNK_143580d14;
    uVar74 = (ulonglong)*(int *)(&UNK_143580d14 + (ulonglong)uVar71 * 4);
code_r0x0001426c7d00:
                    /* WARNING: Could not recover jumptable at 0x0001426c7d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar72 = (undefined8 *)(*(code *)(puVar77 + uVar74))();
    return puVar72;
  case 6:
code_r0x0001426c7daf:
    uVar71 = 0;
    for (uVar70 = (uint)bStack_220; (uVar70 & 1) == 0; uVar70 = uVar70 >> 1 | 0x80000000) {
      uVar71 = uVar71 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001426c7dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar72 = (undefined8 *)
              (*(code *)(&UNK_143580d00 + *(int *)(&UNK_143580d00 + (ulonglong)uVar71 * 4)))
                        (&UNK_143580d00 + *(int *)(&UNK_143580d00 + (ulonglong)uVar71 * 4));
    return puVar72;
  case 7:
    goto code_r0x0001426c7daa;
  case 8:
code_r0x0001426c7f5a:
    *(byte *)plVar73 = (char)*plVar73 + bVar68;
    param_1[5] = 0x8000000000000004;
    *(undefined1 *)(param_1 + 6) = 5;
    break;
  case 9:
code_r0x0001426c7f83:
    *(byte *)plVar73 = (char)*plVar73 + bVar68;
    param_1[5] = 0x8000000000000004;
    *(undefined1 *)(param_1 + 6) = 8;
    break;
  case 10:
code_r0x0001426c7ee3:
    *(byte *)plVar73 = (char)*plVar73 + bVar68 + (0xfffffffebca7f31b < uVar76);
    param_1[5] = 0x8000000000000004;
    *(undefined1 *)(param_1 + 6) = 7;
    break;
  case 0xb:
code_r0x0001426c7eb4:
    *(byte *)(plVar73 + -9) = (char)plVar73[-9] + bVar75;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)(plVar73 + 0x508d129) = (char)plVar73[0x508d129] + bStack_220;
    goto code_r0x0001426c7ec3;
  case 0xc:
code_r0x0001426c7cd5:
    *(byte *)plVar73 = (char)*plVar73 + bStack_220 + (0xfffffffebca7f31b < uVar76);
    param_1[5] = 0x8000000000000004;
    *(undefined1 *)(param_1 + 6) = 1;
    break;
  case 0xd:
code_r0x0001426c7eff:
    pub_142e32760(&uStack_898,&lStack_3c8,0x2b0);
    lStack_8b8 = *(longlong *)param_4;
    lStack_8b0 = *(longlong *)(param_4 + 8);
    uStack_8a8 = *(undefined8 *)(param_4 + 0x10);
    puStack_8a0 = *(undefined **)(param_4 + 0x18);
    pub_142e32760(param_1,&lStack_8b8,0x2d0);
    *(undefined1 *)(param_1 + 0x5a) = 1;
    return param_1;
  case 0xe:
    goto code_r0x0001426c7dea;
  case 0xf:
    goto code_r0x0001426c7e1a;
  case 0x10:
code_r0x0001426c7ddc:
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)(plVar73 + 0x508d129) = (char)plVar73[0x508d129] + bStack_220;
    goto code_r0x0001426c7de6;
  case 0x11:
code_r0x0001426c7cfe:
    uVar74 = (ulonglong)(byte)(bStack_220 + 0x81);
    goto code_r0x0001426c7d00;
  case 0x12:
code_r0x0001426c7e90:
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)(plVar73 + 0x508d129) = (char)plVar73[0x508d129] + bStack_220;
    goto code_r0x0001426c7e9a;
  case 0x13:
code_r0x0001426c7e0d:
    uVar71 = uVar71 + 0xece9;
    *(char *)(lStack_8b8 + 0xe5e906) = *(char *)(lStack_8b8 + 0xe5e906) + '\f';
    *(char *)(ulonglong)uVar71 = *(char *)(ulonglong)uVar71 + (char)uVar71;
code_r0x0001426c7e1a:
    param_1[1] = 0x8000000000000000;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = 0x8000000000000004;
    *(undefined1 *)(param_1 + 6) = 10;
    break;
  case 0x14:
code_r0x0001426c7e88:
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = 0x8000000000000004;
code_r0x0001426c7e9a:
    *(undefined1 *)(param_1 + 6) = 6;
    break;
  case 0x15:
code_r0x0001426c7dcf:
    *(byte *)((longlong)plVar73 + -0x77) = *(byte *)((longlong)plVar73 + -0x77) | 0x46;
    *(byte *)plVar73 = (char)*plVar73 + bVar68;
    param_1[5] = 0x8000000000000004;
code_r0x0001426c7de6:
    *(undefined1 *)(param_1 + 6) = 4;
code_r0x0001426c7dea:
    break;
  case 0x16:
code_r0x0001426c7c6d:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bStack_221) {
    case 0:
      goto code_r0x0001426c7cae;
    default:
      goto code_r0x0001426c7ff4;
    case 2:
      goto code_r0x0001426c7d2b;
    case 3:
      goto code_r0x0001426c7d68;
    case 4:
      goto code_r0x0001426c7cee;
    case 6:
      goto code_r0x0001426c7daf;
    case 7:
      goto code_r0x0001426c7daa;
    case 8:
      goto code_r0x0001426c7f5a;
    case 9:
      goto code_r0x0001426c7f83;
    case 10:
      goto code_r0x0001426c7ee3;
    case 0xb:
      goto code_r0x0001426c7eb4;
    case 0xc:
      goto code_r0x0001426c7cd5;
    case 0xd:
      goto code_r0x0001426c7eff;
    case 0xe:
      goto code_r0x0001426c7dea;
    case 0xf:
      goto code_r0x0001426c7e1a;
    case 0x10:
      goto code_r0x0001426c7ddc;
    case 0x11:
      goto code_r0x0001426c7cfe;
    case 0x12:
      goto code_r0x0001426c7e90;
    case 0x13:
      goto code_r0x0001426c7e0d;
    case 0x14:
      goto code_r0x0001426c7e88;
    case 0x15:
      goto code_r0x0001426c7dcf;
    case 0x16:
      goto code_r0x0001426c7c6d;
    case 0x17:
      goto code_r0x0001426c7ef5;
    case 0x18:
      goto code_r0x0001426c7e4b;
    case 0x19:
      goto code_r0x0001426c7ea5;
    case 0x1a:
      goto code_r0x0001426c7deb;
    case 0x1b:
      goto code_r0x0001426c83f9;
    case 0x1c:
    case 0x1f:
      goto code_r0x0001426c82d6;
    case 0x1d:
      goto code_r0x0001426c840b;
    case 0x1e:
    case 0x20:
      goto code_r0x0001426c83bf;
    case 0x21:
      goto code_r0x0001426c8409;
    case 0x22:
      goto code_r0x0001426c83e7;
    case 0x23:
      goto code_r0x0001426c8465;
    case 0x24:
    case 0x26:
      goto code_r0x0001426c83e3;
    case 0x25:
    case 0x29:
      goto code_r0x0001426c83ab;
    case 0x27:
      goto code_r0x0001426c83c1;
    case 0x28:
      goto code_r0x0001426c83e5;
    }
  case 0x17:
code_r0x0001426c7ef5:
    *param_4 = *param_4 ^ bVar68;
    break;
  case 0x18:
code_r0x0001426c7e4b:
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)(plVar73 + -9) = (char)plVar73[-9] + bVar75 + (char)auStack_a78;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)(plVar73 + 0x108d129) = (char)plVar73[0x108d129] + bStack_220;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = 0x8000000000000004;
    *(undefined1 *)(param_1 + 6) = 0xb;
    break;
  case 0x19:
code_r0x0001426c7ea5:
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)(plVar73 + 0x108d129) = (char)plVar73[0x108d129] + bStack_220;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[5] = 0x8000000000000004;
code_r0x0001426c7ec3:
    *(undefined1 *)(param_1 + 6) = 9;
    break;
  case 0x1a:
code_r0x0001426c7deb:
    uRamb94904b102eb06b1 = uVar71;
    *(uint *)plVar73 = (int)*plVar73 + uVar71;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    *(char *)((longlong)plVar73 + 0xfc8394d) = *(char *)((longlong)plVar73 + 0xfc8394d) + bStack_220
    ;
    goto LAB_1426c7bb9;
  case 0x1b:
    goto code_r0x0001426c83f9;
  case 0x1c:
  case 0x1f:
code_r0x0001426c82d6:
    pbVar1 = (byte *)((longlong)plVar73 + -0x73);
    bVar68 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar75;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = *(ulonglong *)(&UNK_143580ce4 + (longlong)puVar77 * 8);
    auVar87 = ZEXT416(uVar71 + 0xeb89a2 + (uint)CARRY1(bVar68,bVar75)) * auVar87;
    uStack_780 = auVar87._0_8_;
    if (auVar87._8_8_ != 0) {
      uStack_780 = 0xffffffffffffffff;
code_r0x0001426c863e:
      uStack_788 = 0;
      puStack_ad0 = &UNK_143580c18;
      pdb_142db71cc(0,&uStack_740,&uStack_788,0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uStack_788 = 0;
    if (param_2 != uStack_780) goto code_r0x0001426c863e;
    param_4 = abStack_a80;
    piVar78 = aiStack_7a8;
    pdb_142ad5590(piVar78,param_4,lStack_8b8,param_2);
    if (aiStack_7a8[0] != 4) {
      uStack_7b8 = uStack_798;
      uStack_7b0 = uStack_790;
      uStack_7c0 = uStack_7a0;
      pdb_140d9e490(&uStack_788,auStack_7c8);
      plVar73 = (longlong *)(ulonglong)uStack_770;
      uStack_740 = uStack_76e;
      uStack_73c = uStack_76a;
      goto code_r0x0001426c83ab;
    }
    puVar80 = (undefined *)(ulonglong)bStack_7d0;
    puVar77 = (undefined *)CONCAT71((int7)((ulonglong)piVar78 >> 8),1);
    plVar73 = (longlong *)&UNK_143580d03;
    uVar69 = 0xd03;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bStack_7d0) {
    case 0:
      goto code_r0x0001426c8465;
    default:
                    /* WARNING: Could not emulate address calculation at 0x0001426c834d */
                    /* WARNING: Treating indirect jump as call */
      puVar72 = (undefined8 *)
                (*(code *)(&UNK_143580d78 +
                          *(int *)(&UNK_143580d78 + (ulonglong)(bStack_7d0 - 1) * 4)))
                          (puVar77,&UNK_143580d78 +
                                   *(int *)(&UNK_143580d78 + (ulonglong)(bStack_7d0 - 1) * 4));
      return puVar72;
    case 3:
    case 5:
    case 0xc:
                    /* WARNING: Could not emulate address calculation at 0x0001426c8436 */
                    /* WARNING: Treating indirect jump as call */
      puVar72 = (undefined8 *)
                (*(code *)(&UNK_143580d78 +
                          *(int *)(&UNK_143580d78 + (ulonglong)(bStack_7d0 - 1) * 4)))
                          (puVar77,&UNK_143580d78 +
                                   *(int *)(&UNK_143580d78 + (ulonglong)(bStack_7d0 - 1) * 4));
      return puVar72;
    case 6:
      uVar69 = 6;
    case 2:
      bVar68 = (byte)((uVar69 & 0xff) / 3);
      goto joined_r0x0001426c8480;
    case 7:
      bVar68 = 8;
      break;
    case 8:
      bVar68 = 4;
      goto code_r0x0001426c8486;
    case 9:
    case 0xb:
      plVar73 = (longlong *)0x10;
    case 0xd:
      bVar68 = (byte)plVar73;
      break;
    case 10:
    case 0xe:
      *(uint *)(param_1 + 5) = (uint)bStack_7d0;
      goto code_r0x0001426c840b;
    }
    bVar68 = bVar68 / 4;
    goto joined_r0x0001426c8480;
  case 0x1d:
    goto code_r0x0001426c840b;
  case 0x1e:
  case 0x20:
code_r0x0001426c83bf:
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
  case 0x27:
code_r0x0001426c83c1:
    uStack_732 = (undefined2)uVar88;
    uStack_730 = (undefined6)((ulonglong)uVar88 >> 0x10);
    uStack_72a = (undefined2)lVar84;
    uStack_728 = (undefined6)((ulonglong)lVar84 >> 0x10);
    uStack_722 = (undefined2)uVar83;
    uStack_720 = (undefined6)((ulonglong)uVar83 >> 0x10);
    param_1[7] = uVar83;
    uVar89 = uStack_788;
    uVar74 = uStack_780;
    puStack_73a = puVar85;
    goto code_r0x0001426c83e3;
  case 0x21:
code_r0x0001426c8409:
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    goto code_r0x0001426c840b;
  case 0x22:
code_r0x0001426c83e7:
    plVar73 = (longlong *)((longlong)plVar73 + *plVar73);
    *(undefined8 *)((longlong)param_1 + 0x2a) = in_MM0;
    goto code_r0x0001426c83e3;
  case 0x23:
code_r0x0001426c8465:
    bVar68 = (byte)(1 / (byte)puVar77);
joined_r0x0001426c8480:
    if (bVar68 != 1) {
code_r0x0001426c8486:
      if (bVar68 != 2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143580c30,0x28,&UNK_143580c58);
      }
      if (1 < param_2) {
        uVar74 = param_2 & 0x7ffffffffffffffe;
        param_2 = param_2 - 2;
        if (5 < param_2) {
          uVar76 = (param_2 >> 1) + 1;
          if (param_2 < 0x1e) {
            uVar81 = 0;
          }
          else {
            uVar81 = uVar76 & 0xfffffffffffffff0;
            uVar82 = 0;
            do {
              auVar87 = *(undefined1 (*) [16])(lStack_8b8 + uVar82 * 2);
              auVar90 = *(undefined1 (*) [16])(lStack_8b8 + 0x10 + uVar82 * 2);
              auVar92[1] = 0;
              auVar92[0] = auVar87[8];
              auVar92[2] = auVar87[9];
              auVar92[3] = 0;
              auVar92[4] = auVar87[10];
              auVar92[5] = 0;
              auVar92[6] = auVar87[0xb];
              auVar92[7] = 0;
              auVar92[8] = auVar87[0xc];
              auVar92[9] = 0;
              auVar92[10] = auVar87[0xd];
              auVar92[0xb] = 0;
              auVar92[0xc] = auVar87[0xe];
              auVar92[0xd] = 0;
              auVar92[0xe] = auVar87[0xf];
              auVar92[0xf] = 0;
              auVar91 = pshuflw(auVar92,auVar92,0xb1);
              auVar92 = pshufhw(auVar91,auVar91,0xb1);
              auVar38[0xd] = 0;
              auVar38._0_13_ = auVar87._0_13_;
              auVar38[0xe] = auVar87[7];
              auVar41[0xc] = auVar87[6];
              auVar41._0_12_ = auVar87._0_12_;
              auVar41._13_2_ = auVar38._13_2_;
              auVar44[0xb] = 0;
              auVar44._0_11_ = auVar87._0_11_;
              auVar44._12_3_ = auVar41._12_3_;
              auVar47[10] = auVar87[5];
              auVar47._0_10_ = auVar87._0_10_;
              auVar47._11_4_ = auVar44._11_4_;
              auVar50[9] = 0;
              auVar50._0_9_ = auVar87._0_9_;
              auVar50._10_5_ = auVar47._10_5_;
              auVar53[8] = auVar87[4];
              auVar53._0_8_ = auVar87._0_8_;
              auVar53._9_6_ = auVar50._9_6_;
              auVar59._7_8_ = 0;
              auVar59._0_7_ = auVar53._8_7_;
              auVar62._1_8_ = SUB158(auVar59 << 0x40,7);
              auVar62[0] = auVar87[3];
              auVar62._9_6_ = 0;
              auVar63._1_10_ = SUB1510(auVar62 << 0x30,5);
              auVar63[0] = auVar87[2];
              auVar63._11_4_ = 0;
              auVar56[2] = auVar87[1];
              auVar56._0_2_ = auVar87._0_2_;
              auVar56._3_12_ = SUB1512(auVar63 << 0x20,3);
              auVar91._0_2_ = auVar87._0_2_ & 0xff;
              auVar91._2_13_ = auVar56._2_13_;
              auVar91[0xf] = 0;
              auVar87 = pshuflw(auVar91,auVar91,0xb1);
              auVar87 = pshufhw(auVar87,auVar87,0xb1);
              sVar7 = auVar87._0_2_;
              sVar8 = auVar87._2_2_;
              sVar10 = auVar87._4_2_;
              sVar12 = auVar87._6_2_;
              sVar14 = auVar87._8_2_;
              sVar16 = auVar87._10_2_;
              sVar18 = auVar87._12_2_;
              sVar20 = auVar87._14_2_;
              sVar22 = auVar92._0_2_;
              sVar24 = auVar92._2_2_;
              sVar26 = auVar92._4_2_;
              sVar28 = auVar92._6_2_;
              sVar30 = auVar92._8_2_;
              sVar32 = auVar92._10_2_;
              sVar34 = auVar92._12_2_;
              sVar36 = auVar92._14_2_;
              auVar93[1] = 0;
              auVar93[0] = auVar90[8];
              auVar93[2] = auVar90[9];
              auVar93[3] = 0;
              auVar93[4] = auVar90[10];
              auVar93[5] = 0;
              auVar93[6] = auVar90[0xb];
              auVar93[7] = 0;
              auVar93[8] = auVar90[0xc];
              auVar93[9] = 0;
              auVar93[10] = auVar90[0xd];
              auVar93[0xb] = 0;
              auVar93[0xc] = auVar90[0xe];
              auVar93[0xd] = 0;
              auVar93[0xe] = auVar90[0xf];
              auVar93[0xf] = 0;
              auVar91 = pshuflw(auVar93,auVar93,0xb1);
              auVar91 = pshufhw(auVar91,auVar91,0xb1);
              auVar39[0xd] = 0;
              auVar39._0_13_ = auVar90._0_13_;
              auVar39[0xe] = auVar90[7];
              auVar42[0xc] = auVar90[6];
              auVar42._0_12_ = auVar90._0_12_;
              auVar42._13_2_ = auVar39._13_2_;
              auVar45[0xb] = 0;
              auVar45._0_11_ = auVar90._0_11_;
              auVar45._12_3_ = auVar42._12_3_;
              auVar48[10] = auVar90[5];
              auVar48._0_10_ = auVar90._0_10_;
              auVar48._11_4_ = auVar45._11_4_;
              auVar51[9] = 0;
              auVar51._0_9_ = auVar90._0_9_;
              auVar51._10_5_ = auVar48._10_5_;
              auVar54[8] = auVar90[4];
              auVar54._0_8_ = auVar90._0_8_;
              auVar54._9_6_ = auVar51._9_6_;
              auVar60._7_8_ = 0;
              auVar60._0_7_ = auVar54._8_7_;
              auVar64._1_8_ = SUB158(auVar60 << 0x40,7);
              auVar64[0] = auVar90[3];
              auVar64._9_6_ = 0;
              auVar65._1_10_ = SUB1510(auVar64 << 0x30,5);
              auVar65[0] = auVar90[2];
              auVar65._11_4_ = 0;
              auVar57[2] = auVar90[1];
              auVar57._0_2_ = auVar90._0_2_;
              auVar57._3_12_ = SUB1512(auVar65 << 0x20,3);
              auVar90._0_2_ = auVar90._0_2_ & 0xff;
              auVar90._2_13_ = auVar57._2_13_;
              auVar90[0xf] = 0;
              auVar90 = pshuflw(auVar90,auVar90,0xb1);
              auVar90 = pshufhw(auVar90,auVar90,0xb1);
              sVar6 = auVar90._0_2_;
              sVar9 = auVar90._2_2_;
              sVar11 = auVar90._4_2_;
              sVar13 = auVar90._6_2_;
              sVar15 = auVar90._8_2_;
              sVar17 = auVar90._10_2_;
              sVar19 = auVar90._12_2_;
              sVar21 = auVar90._14_2_;
              sVar23 = auVar91._0_2_;
              sVar25 = auVar91._2_2_;
              sVar27 = auVar91._4_2_;
              sVar29 = auVar91._6_2_;
              sVar31 = auVar91._8_2_;
              sVar33 = auVar91._10_2_;
              sVar35 = auVar91._12_2_;
              sVar37 = auVar91._14_2_;
              pcVar2 = (char *)(lStack_8b8 + uVar82 * 2);
              *pcVar2 = (0 < sVar7) * (sVar7 < 0x100) * auVar87[0] - (0xff < sVar7);
              pcVar2[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar87[2] - (0xff < sVar8);
              pcVar2[2] = (0 < sVar10) * (sVar10 < 0x100) * auVar87[4] - (0xff < sVar10);
              pcVar2[3] = (0 < sVar12) * (sVar12 < 0x100) * auVar87[6] - (0xff < sVar12);
              pcVar2[4] = (0 < sVar14) * (sVar14 < 0x100) * auVar87[8] - (0xff < sVar14);
              pcVar2[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar87[10] - (0xff < sVar16);
              pcVar2[6] = (0 < sVar18) * (sVar18 < 0x100) * auVar87[0xc] - (0xff < sVar18);
              pcVar2[7] = (0 < sVar20) * (sVar20 < 0x100) * auVar87[0xe] - (0xff < sVar20);
              pcVar2[8] = (0 < sVar22) * (sVar22 < 0x100) * auVar92[0] - (0xff < sVar22);
              pcVar2[9] = (0 < sVar24) * (sVar24 < 0x100) * auVar92[2] - (0xff < sVar24);
              pcVar2[10] = (0 < sVar26) * (sVar26 < 0x100) * auVar92[4] - (0xff < sVar26);
              pcVar2[0xb] = (0 < sVar28) * (sVar28 < 0x100) * auVar92[6] - (0xff < sVar28);
              pcVar2[0xc] = (0 < sVar30) * (sVar30 < 0x100) * auVar92[8] - (0xff < sVar30);
              pcVar2[0xd] = (0 < sVar32) * (sVar32 < 0x100) * auVar92[10] - (0xff < sVar32);
              pcVar2[0xe] = (0 < sVar34) * (sVar34 < 0x100) * auVar92[0xc] - (0xff < sVar34);
              pcVar2[0xf] = (0 < sVar36) * (sVar36 < 0x100) * auVar92[0xe] - (0xff < sVar36);
              pcVar2 = (char *)(lStack_8b8 + 0x10 + uVar82 * 2);
              *pcVar2 = (0 < sVar6) * (sVar6 < 0x100) * auVar90[0] - (0xff < sVar6);
              pcVar2[1] = (0 < sVar9) * (sVar9 < 0x100) * auVar90[2] - (0xff < sVar9);
              pcVar2[2] = (0 < sVar11) * (sVar11 < 0x100) * auVar90[4] - (0xff < sVar11);
              pcVar2[3] = (0 < sVar13) * (sVar13 < 0x100) * auVar90[6] - (0xff < sVar13);
              pcVar2[4] = (0 < sVar15) * (sVar15 < 0x100) * auVar90[8] - (0xff < sVar15);
              pcVar2[5] = (0 < sVar17) * (sVar17 < 0x100) * auVar90[10] - (0xff < sVar17);
              pcVar2[6] = (0 < sVar19) * (sVar19 < 0x100) * auVar90[0xc] - (0xff < sVar19);
              pcVar2[7] = (0 < sVar21) * (sVar21 < 0x100) * auVar90[0xe] - (0xff < sVar21);
              pcVar2[8] = (0 < sVar23) * (sVar23 < 0x100) * auVar91[0] - (0xff < sVar23);
              pcVar2[9] = (0 < sVar25) * (sVar25 < 0x100) * auVar91[2] - (0xff < sVar25);
              pcVar2[10] = (0 < sVar27) * (sVar27 < 0x100) * auVar91[4] - (0xff < sVar27);
              pcVar2[0xb] = (0 < sVar29) * (sVar29 < 0x100) * auVar91[6] - (0xff < sVar29);
              pcVar2[0xc] = (0 < sVar31) * (sVar31 < 0x100) * auVar91[8] - (0xff < sVar31);
              pcVar2[0xd] = (0 < sVar33) * (sVar33 < 0x100) * auVar91[10] - (0xff < sVar33);
              pcVar2[0xe] = (0 < sVar35) * (sVar35 < 0x100) * auVar91[0xc] - (0xff < sVar35);
              pcVar2[0xf] = (0 < sVar37) * (sVar37 < 0x100) * auVar91[0xe] - (0xff < sVar37);
              uVar82 = uVar82 + 0x10;
            } while (uVar81 != uVar82);
            if (uVar76 == uVar81) goto code_r0x0001426c85cf;
            if ((uVar76 & 0xc) == 0) {
              lStack_8b8 = lStack_8b8 + uVar81 * 2;
              uVar74 = uVar74 + uVar81 * -2;
              goto code_r0x0001426c85ba;
            }
          }
          uVar82 = uVar76 & 0xfffffffffffffffc;
          uVar74 = uVar74 + uVar82 * -2;
          do {
            uVar4 = *(ulonglong *)(lStack_8b8 + uVar81 * 2);
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
            auVar86._0_2_ = (ushort)uVar4 & 0xff;
            auVar86._2_13_ = auVar58._2_13_;
            auVar86[0xf] = 0;
            auVar87 = pshuflw(auVar86,auVar86,0xb1);
            auVar87 = pshufhw(auVar87,auVar87,0xb1);
            sVar7 = auVar87._0_2_;
            sVar6 = auVar87._2_2_;
            sVar8 = auVar87._4_2_;
            sVar9 = auVar87._6_2_;
            sVar10 = auVar87._8_2_;
            sVar11 = auVar87._10_2_;
            sVar12 = auVar87._12_2_;
            sVar13 = auVar87._14_2_;
            *(ulonglong *)(lStack_8b8 + uVar81 * 2) =
                 CONCAT17((0 < sVar13) * (sVar13 < 0x100) * auVar87[0xe] - (0xff < sVar13),
                          CONCAT16((0 < sVar12) * (sVar12 < 0x100) * auVar87[0xc] - (0xff < sVar12),
                                   CONCAT15((0 < sVar11) * (sVar11 < 0x100) * auVar87[10] -
                                            (0xff < sVar11),
                                            CONCAT14((0 < sVar10) * (sVar10 < 0x100) * auVar87[8] -
                                                     (0xff < sVar10),
                                                     CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                              auVar87[6] - (0xff < sVar9),
                                                              CONCAT12((0 < sVar8) * (sVar8 < 0x100)
                                                                       * auVar87[4] - (0xff < sVar8)
                                                                       ,CONCAT11((0 < sVar6) *
                                                                                 (sVar6 < 0x100) *
                                                                                 auVar87[2] -
                                                                                 (0xff < sVar6),
                                                                                 (0 < sVar7) *
                                                                                 (sVar7 < 0x100) *
                                                                                 auVar87[0] -
                                                                                 (0xff < sVar7))))))
                                  ));
            uVar81 = uVar81 + 4;
          } while (uVar82 != uVar81);
          lStack_8b8 = lStack_8b8 + uVar82 * 2;
          if (uVar76 == uVar82) goto code_r0x0001426c85cf;
        }
code_r0x0001426c85ba:
        uVar76 = 0;
        do {
          puVar3 = (ushort *)(lStack_8b8 + uVar76);
          *puVar3 = *puVar3 << 8 | *puVar3 >> 8;
          uVar76 = uVar76 + 2;
        } while (uVar74 != uVar76);
      }
    }
code_r0x0001426c85cf:
    *param_1 = 0x800000000000000a;
    goto code_r0x0001426c85dc;
  case 0x24:
  case 0x26:
    goto code_r0x0001426c83e3;
  case 0x25:
  case 0x29:
code_r0x0001426c83ab:
    puVar77 = puStack_778;
    lVar84 = lStack_758;
    uVar83 = uStack_750;
    puVar85 = puStack_768;
    uVar88 = uStack_760;
    goto code_r0x0001426c83c1;
  case 0x28:
code_r0x0001426c83e5:
    out(*(undefined4 *)param_1,0xce4);
    *(byte *)plVar73 = (char)*plVar73 + bStack_220;
    param_1 = (undefined8 *)((longlong)param_1 + 4);
code_r0x0001426c83e3:
    *(ulonglong *)((longlong)param_1 + 0x2a) = CONCAT26(uStack_72a,uStack_730);
    *(ulonglong *)((longlong)param_1 + 0x32) = CONCAT26(uStack_722,uStack_728);
    *(undefined4 *)((longlong)param_1 + 0x1a) = uStack_740;
code_r0x0001426c83f9:
    *(undefined2 *)((longlong)param_1 + 0x1e) = uStack_73c;
    puVar80 = puStack_73a;
code_r0x0001426c840b:
    param_1[4] = puVar80;
    *(undefined2 *)(param_1 + 5) = uStack_732;
    *param_1 = uVar89;
    param_1[1] = uVar74;
    param_1[2] = puVar77;
    *(short *)(param_1 + 3) = (short)plVar73;
code_r0x0001426c85dc:
    pdb_141d368c0(param_4);
    pub_1406abac0(pbStack_718,0x2d8,8);
    return param_1;
  }
code_r0x0001426c7d8f:
  *param_1 = 2;
  uStack_41 = 0;
  pdb_141d368c0(&lStack_3c8);
code_r0x0001426c7daa:
  return param_1;
code_r0x0001426c7d68:
  param_1[1] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[5] = 0x8000000000000004;
  *(undefined1 *)(param_1 + 6) = 0x1a;
  *(byte *)((longlong)param_1 + 0x31) = bStack_220;
  goto code_r0x0001426c7d8f;
}

