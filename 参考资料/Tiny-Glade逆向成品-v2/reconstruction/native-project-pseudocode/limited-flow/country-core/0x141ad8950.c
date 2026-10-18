// VA 0x141ad8950, PDB extent 455 bytes
// country_core::resources::clutter_meshes::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141adbfa8) overlaps instruction at (ram,0x000141adbfa5)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000141adb7b3) */
/* WARNING: Removing unreachable block (ram,0x000141adb786) */
/* WARNING: Removing unreachable block (ram,0x000141adb8cc) */
/* WARNING: Removing unreachable block (ram,0x000141adaa59) */
/* WARNING: Removing unreachable block (ram,0x000141adb1a7) */
/* WARNING: Removing unreachable block (ram,0x000141adb1d2) */
/* WARNING: Removing unreachable block (ram,0x000141adb76b) */
/* WARNING: Removing unreachable block (ram,0x000141adb13b) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00014338932c : 0x000141adb15e */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Matched PDB project procedure:
   country_core::resources::clutter_meshes::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 455 */

byte * pdb_141ad8950(byte *param_1,char *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  char *pcVar3;
  undefined1 uVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined7 uVar14;
  byte *extraout_RAX;
  char cVar15;
  ushort uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined2 uVar19;
  ulonglong *puVar21;
  int *piVar22;
  int iVar23;
  ulonglong *unaff_RBX;
  int iVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  int iVar39;
  undefined8 *unaff_RBP;
  int iVar40;
  char *pcVar41;
  ulonglong *puVar42;
  byte *in_R10;
  int in_R11D;
  int unaff_R13D;
  undefined4 unaff_000000ac;
  int unaff_R14D;
  undefined2 in_ES;
  longlong in_FS_OFFSET;
  bool bVar43;
  bool bVar44;
  ulonglong in_MM1;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  byte *pbStack_78;
  undefined8 uStack_70;
  byte *pbStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  byte *pbStack_30;
  undefined *puStack_28;
  uint uVar20;
  
  puVar36 = (undefined1 *)&pbStack_58;
  puVar26 = (undefined1 *)&pbStack_58;
  puVar27 = (undefined1 *)&pbStack_58;
  puVar31 = (undefined1 *)&pbStack_58;
  puVar32 = &pbStack_58;
  puVar35 = (undefined1 *)&pbStack_58;
  puVar38 = (undefined1 *)&pbStack_58;
  puVar33 = &pbStack_58;
  puVar34 = &pbStack_58;
  puVar37 = (undefined1 *)&pbStack_58;
  if (*(ulonglong *)((longlong)param_2 + 0x20) <= *(ulonglong *)((longlong)param_2 + 0x28)) {
LAB_141ad89a2:
    uStack_38 = 5;
LAB_141ad89ab:
    uVar11 = pdb_142d84ef0(param_2,&uStack_38);
    *(undefined8 *)(param_1 + 8) = uVar11;
    *param_1 = 1;
    return param_1;
  }
  pcVar41 = *(char **)((longlong)param_2 + 0x18);
  uVar12 = *(ulonglong *)((longlong)param_2 + 0x28);
LAB_141ad897c:
  uVar10 = uVar12 + 1;
  puVar42 = (ulonglong *)(ulonglong)(byte)pcVar41[uVar12];
  iVar40 = (int)param_1;
  iVar24 = (int)&pbStack_58;
  if ((ulonglong *)0x22 < puVar42) {
LAB_141ad89f5:
    if (pcVar41[uVar12] == 0x7b) {
      puVar21 = (ulonglong *)((longlong)param_2 + 0x38);
      *(char *)puVar21 = (char)*puVar21 + -1;
      if ((char)*puVar21 != '\0') {
        *(ulonglong *)((longlong)param_2 + 0x28) = uVar10;
        auVar52._0_8_ = pdb_1416543c0(&uStack_38);
        auVar52._8_8_ = extraout_XMM0_Qb_00;
        unaff_RBP = (undefined8 *)(uStack_38 & 0xff);
        pbVar13 = pbStack_30;
        unaff_RBX = (ulonglong *)param_2;
        goto code_r0x000141ad8a23;
      }
      uStack_38 = 0x18;
    }
    else {
      uStack_38 = 10;
    }
    goto LAB_141ad89ab;
  }
  if ((0x100002600U >> ((ulonglong)puVar42 & 0x3f) & 1) != 0) goto code_r0x000141ad898e;
  if (puVar42 != (ulonglong *)0x22) goto LAB_141ad89f5;
  auVar52._0_8_ = pdb_1416572e0(&uStack_38);
  auVar52._8_8_ = extraout_XMM0_Qb;
  pbVar18 = &UNK_143389318;
  uVar12 = (ulonglong)*(int *)(&UNK_143389318 + (uStack_38 & 0xff) * 4);
  bVar43 = 0xfffffffebcc76ce7 < uVar12;
  pbVar13 = &UNK_143389318 + uVar12;
  bVar44 = pbVar13 == (byte *)0x0;
  bVar8 = (byte)pbVar13;
  uVar17 = (uint)pbVar13;
  uVar14 = (undefined7)((ulonglong)pbVar13 >> 8);
  uVar20 = (uint)param_2;
  uVar19 = SUB82(param_2,0);
  puVar21 = (ulonglong *)param_2;
  puVar29 = (undefined1 *)&pbStack_58;
  puVar30 = (undefined1 *)&pbStack_58;
  puVar28 = (undefined1 *)&pbStack_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_38 & 0xff) {
  case 0:
    param_1[1] = 0;
    goto code_r0x000141ad8ae0;
  case 1:
    param_1[1] = 1;
    goto code_r0x000141ad8ae0;
  case 2:
    param_1[1] = 2;
    goto code_r0x000141ad8ae0;
  case 3:
    param_1[1] = 3;
    goto code_r0x000141ad8ae0;
  case 4:
    *(byte **)(param_1 + 8) = pbStack_30;
    *param_1 = 1;
    return param_1;
  case 5:
  case 6:
  case 7:
  case 8:
    break;
  case 9:
    pbVar13 = (byte *)((ulonglong)pbVar13 | 0x8a);
    break;
  case 10:
    goto code_r0x000141adaa76;
  case 0xb:
    pcVar5 = (code *)swi(3);
    pbVar13 = (byte *)(*pcVar5)();
    return pbVar13;
  case 0xc:
    goto code_r0x000141adaa91;
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    pbVar13 = (byte *)(ulonglong)((uint)CONCAT71(uVar14,bVar8 + 0x41) ^ 0x6e);
code_r0x000141ada987:
    puVar27 = (undefined1 *)&pbStack_58;
    if (in_R10[4] != 0x6e || *(int *)in_R10 != 0x69616c50) {
code_r0x000141adaa3d:
      unaff_RBP[-5] = puVar42;
      unaff_RBP[-6] = in_R10;
      unaff_RBP[-3] = in_R10;
      unaff_RBP[-2] = pbVar13;
      *(undefined1 *)(unaff_RBP + -4) = 5;
      pbVar1 = &UNK_143389318;
      goto code_r0x000141adaa54;
    }
    goto code_r0x000141ada9a1;
  case 0xf:
    if ((int)pcVar41 != 0 || uVar20 != 0) goto code_r0x000141ada987;
code_r0x000141ada9a1:
    _UNK_143389318 = (ushort)UNK_143389318;
    goto code_r0x000141ada9a5;
  case 0x10:
    goto code_r0x000141ada931;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x18:
  case 0x19:
    pbVar13 = (byte *)(ulonglong)(uVar17 ^ 0x7374);
    puVar27 = (undefined1 *)&pbStack_58;
    if (pcVar41 != (char *)0x0 || (ulonglong *)param_2 != (ulonglong *)0x0)
    goto code_r0x000141adaa3d;
code_r0x000141adaa08:
    _UNK_143389318 = CONCAT11(1,UNK_143389318);
    puVar27 = puVar26;
    goto code_r0x000141adaa2f;
  case 0x15:
    uStack_48 = *(ulonglong *)((longlong)param_2 + 8);
    uStack_40 = *(ulonglong *)((longlong)param_2 + 0x10);
    uStack_38 = *(ulonglong *)((longlong)param_2 + 0x18);
    if (uStack_48 == 0) {
      uStack_38 = 0;
    }
    pbStack_78 = (byte *)(ulonglong)(uStack_48 != 0);
    uStack_70 = 0;
    uStack_50 = 0;
    pbStack_30 = (byte *)CONCAT71(pbStack_30._1_7_,6);
    auStack_90[0] = 0xb;
    pbStack_58 = pbStack_78;
    _UNK_143389320 = pdb_142db90e0(auStack_90,&stack0xfffffffffffffff7,&UNK_1433885b0);
    _UNK_143389318 = CONCAT31(_UNK_143389319,1);
    pdb_1409880a0(&pbStack_78);
    pdb_1409946a0(&pbStack_30);
    return &UNK_143389318;
  case 0x17:
    puVar27 = &stack0xffffffffffffff98;
    puVar26 = &stack0xffffffffffffff98;
    pbVar1 = (byte *)(ulonglong)(uint)(iRam00000003c9a9b97b * 0x74b84912);
    if (!bVar44) {
      puVar27 = &stack0xffffffffffffff98;
      if (pcVar41 == *(char **)(in_R10 + 7) && (ulonglong *)param_2 == (ulonglong *)0x0)
      goto code_r0x000141adaa08;
      goto code_r0x000141adaa3d;
    }
code_r0x000141adaa54:
    pbVar18 = pbVar1;
    *(undefined8 *)(puVar27 + -8) = 0x141adaa68;
    uVar11 = pdb_142db9150(unaff_RBP + -4,(longlong)unaff_RBP + -1,&UNK_1433885b0);
    *(undefined8 *)(pbVar18 + 8) = uVar11;
    pbVar13 = (byte *)0x1;
    puVar42 = (ulonglong *)unaff_RBP[-5];
code_r0x000141adaa76:
    pbVar1 = (byte *)unaff_RBP[-6];
    *pbVar18 = (byte)pbVar13;
    puVar21 = puVar42;
    pbVar18 = pbVar1;
    if (puVar42 == (ulonglong *)0x0) {
      return pbVar13;
    }
    goto code_r0x000141adaa85;
  case 0x1a:
    uVar4 = in(uVar19);
    iRam0000000100002600 = CONCAT31(iRam0000000100002600._1_3_,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
    if ((uVar20 | 0x43389318) != 0) {
      (&UNK_143389319)[uVar12] = 4;
      goto code_r0x000141adad3b;
    }
    goto LAB_141adad48;
  case 0x1c:
    goto code_r0x000141adae25;
  case 0x1d:
    param_1[1] = 0x2c;
    goto code_r0x000141adaf52;
  case 0x1e:
    goto code_r0x000141adae13;
  case 0x1f:
    goto code_r0x000141adadcb;
  case 0x20:
    goto code_r0x000141adae52;
  case 0x21:
    *pbVar13 = *pbVar13 + bVar8;
    piVar22 = (int *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                              CONCAT11((char)((ulonglong)param_2 >> 8) + bVar8,(char)param_2));
    *piVar22 = *piVar22 + (int)pcVar41;
    goto code_r0x000141adae71;
  case 0x22:
    goto code_r0x000141adae1c;
  case 0x23:
    *pbVar13 = *pbVar13 + bVar8;
    goto code_r0x000141adae7e;
  case 0x24:
    param_1[1] = 0x1b;
    goto code_r0x000141adaf52;
  case 0x25:
    goto code_r0x000141adae76;
  case 0x26:
    param_1[1] = 0x25;
    goto code_r0x000141adaf52;
  case 0x27:
    param_1[1] = 0x24;
    goto code_r0x000141adaf52;
  case 0x28:
    goto code_r0x000141adae64;
  case 0x29:
    goto code_r0x000141adad9e;
  case 0x2a:
    goto code_r0x000141adae0a;
  case 0x2b:
    pbStack_58 = (byte *)((ulonglong)pbVar13 & 0xffffffffffffff21);
    goto code_r0x000141adad8e;
  case 0x2c:
    param_1[1] = 4;
    goto code_r0x000141adaf52;
  case 0x2d:
    *pbVar13 = *pbVar13 + bVar8;
    goto code_r0x000141adae76;
  case 0x2e:
    *pbVar13 = *pbVar13 + bVar8;
    goto code_r0x000141adaea2;
  case 0x2f:
    param_1[1] = 0xc;
    goto code_r0x000141adaf52;
  case 0x30:
    param_1[1] = 0x19;
    goto code_r0x000141adaf52;
  case 0x31:
    goto code_r0x000141adae96;
  case 0x32:
    param_1[1] = 0x29;
    goto code_r0x000141adaf52;
  case 0x33:
    goto code_r0x000141adadf8;
  case 0x34:
    goto code_r0x000141adadef;
  case 0x35:
    *pbVar13 = *pbVar13 + bVar8;
    pbStack_58 = pbVar13;
    goto code_r0x000141adaec6;
  case 0x36:
    puVar31 = (undefined1 *)&pbStack_58;
    goto code_r0x000141adad79;
  case 0x37:
    *pbVar13 = *pbVar13 + bVar8;
    goto code_r0x000141adaeb4;
  case 0x38:
    goto code_r0x000141adaeba;
  case 0x39:
    return pbVar13;
  case 0x3a:
    goto code_r0x000141adae2e;
  case 0x3b:
    param_1[1] = 7;
    goto code_r0x000141adaf52;
  case 0x3c:
    goto code_r0x000141adada7;
  case 0x3d:
    return pbVar13;
  case 0x3e:
    goto code_r0x000141adad68;
  case 0x3f:
    goto code_r0x000141adad71;
  case 0x40:
    goto code_r0x000141adad4d;
  case 0x41:
    param_1[1] = 5;
    goto code_r0x000141adaf52;
  case 0x42:
    param_1[1] = 0x1f;
    goto code_r0x000141adae9e;
  case 0x43:
    goto code_r0x000141adadd4;
  case 0x44:
    goto code_r0x000141adae40;
  case 0x45:
    pbVar18 = (byte *)(ulonglong)((int)unaff_RBP + 0x43389318 + (uint)bVar43);
    goto code_r0x000141adaea8;
  case 0x46:
    *pbVar13 = 0;
    return pbVar13;
  case 0x47:
    goto code_r0x000141adad95;
  case 0x48:
    *pbVar13 = *pbVar13 + bVar8;
    goto code_r0x000141adae90;
  case 0x49:
    goto code_r0x000141adaedc;
  case 0x4a:
    pcVar5 = (code *)swi(3);
    pbVar13 = (byte *)(*pcVar5)();
    return pbVar13;
  case 0x4b:
    goto code_r0x000141adadb0;
  case 0x4c:
    param_1[1] = 0x35;
    goto code_r0x000141adaf52;
  case 0x4d:
code_r0x000141adad3b:
    *pbVar13 = 0;
    return pbVar13;
  case 0x4e:
    goto code_r0x000141adaee2;
  case 0x4f:
    param_1[1] = 6;
    goto code_r0x000141adaf52;
  case 0x50:
    pcVar5 = (code *)swi(3);
    pbVar13 = (byte *)(*pcVar5)();
    return pbVar13;
  case 0x51:
    pbStack_58 = (byte *)(ulonglong)(uVar17 + 0x82e9 + (uint)bVar43);
    goto code_r0x000141adaecf;
  case 0x52:
    param_1[1] = 0xd;
    goto code_r0x000141adaf52;
  case 0x53:
    goto code_r0x000141adae3c;
  case 0x54:
    puVar34 = unaff_RBP + 1;
    goto code_r0x000141adb505;
  case 0x55:
    pcVar5 = (code *)swi(1);
    pbVar13 = (byte *)(*pcVar5)();
    return pbVar13;
  case 0x56:
    out(*param_1,uVar19);
    out(*(undefined4 *)(param_1 + 1),uVar19);
    if (bVar43 || bVar44) {
      if (bVar43) {
        uVar12 = (ulonglong)((uint)*(ulonglong *)param_2 ^ 0x43389318);
        pbStack_58 = pbVar13;
        goto code_r0x000141adb4ee;
      }
      pbVar18 = (byte *)(ulonglong)((uint)*(ulonglong *)param_2 ^ 0x43389318);
      pbStack_58 = pbVar13;
      goto code_r0x000141adb536;
    }
    if (-1 < (longlong)pbVar13) {
      *pbVar13 = *pbVar13 + bVar8;
    }
    goto code_r0x000141adb54d;
  case 0x57:
    goto code_r0x000141adb490;
  case 0x58:
    if (bVar43) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*(int *)param_1,uVar19);
    if (bVar44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar32 = &uStack_50;
    pbVar18 = (byte *)(ulonglong)((uint)*(ulonglong *)param_2 ^ 0x43389318);
    pbStack_58 = pbVar13;
    goto code_r0x000141adb182;
  case 0x59:
    pbStack_58 = pbVar13;
    if (!bVar43) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000141adb2ba;
  case 0x5a:
    *(int *)param_1 = *(int *)param_1 + (int)unaff_RBX;
    pbVar13 = (byte *)(ulonglong)(uVar17 & 0xc6000008);
    goto code_r0x000141adb891;
  case 0x5b:
    pbStack_58 = (byte *)CONCAT71(uVar14,(bVar8 | bRam000000024338b8cf) + 0x41);
    goto code_r0x000141adb420;
  case 0x5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5d:
    uVar16 = (ushort)(byte)((byte)(in_MM1 >> 7) & 1 | ((byte)(in_MM1 >> 0xf) & 1) << 1 |
                            ((byte)(in_MM1 >> 0x17) & 1) << 2 | ((byte)(in_MM1 >> 0x1f) & 1) << 3 |
                            ((byte)(in_MM1 >> 0x27) & 1) << 4 | ((byte)(in_MM1 >> 0x2f) & 1) << 5 |
                            ((byte)(in_MM1 >> 0x37) & 1) << 6 | (byte)(in_MM1 >> 0x38) & 0x80);
    pbStack_58 = pbVar13;
    goto code_r0x000141adb350;
  case 0x5e:
    goto code_r0x000141adae5d;
  case 0x5f:
    goto code_r0x000141adae8a;
  case 0x60:
    pbStack_58 = pbVar13;
    puVar32 = &pbStack_58;
    if (!bVar43) goto code_r0x000141adb182;
    pbStack_58 = (byte *)&iRam0000000100002600;
    puVar37 = (undefined1 *)&pbStack_58;
    if (iVar40 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      iRam0000000100002600._1_1_ = 0x36;
      pbVar13 = pbStack_58;
      goto code_r0x000141adb891;
    }
    goto LAB_141adb7c5;
  case 0x61:
  case 0x62:
  case 100:
  case 0x65:
  case 0x67:
    pbStack_58 = (byte *)CONCAT71(uVar14,bVar8 + 0x41);
    goto code_r0x000141adb687;
  case 99:
    puVar36 = (undefined1 *)(ulonglong)_UNK_143389386;
    pbStack_58 = pbVar13;
    if (in_R10 == (byte *)0x0 && puVar42 == (ulonglong *)0x0) {
      (&UNK_143389319)[uVar12] = 6;
      goto code_r0x000141adb891;
    }
    goto code_r0x000141adb59b;
  case 0x66:
    bVar43 = *(longlong *)((longlong)param_2 + 5) == 0x646f6f665f775f74 &&
             *(byte **)param_2 == &UNK_143389318;
    goto code_r0x000141adb06d;
  case 0x68:
    pcVar5 = (code *)swi(1);
    pbVar13 = (byte *)(*pcVar5)();
    return pbVar13;
  case 0x69:
    *pbVar13 = *pbVar13 + bVar8;
    param_1 = pbVar13;
    puVar37 = (undefined1 *)&pbStack_58;
    goto code_r0x000141adb7d2;
  case 0x6a:
    pbVar13 = (byte *)CONCAT71(uVar14,bVar8 + 0x41);
    goto LAB_141adb91d;
  case 0x6b:
    *(uint *)param_2 = (uint)*(ulonglong *)param_2 + 0x43389318;
    goto code_r0x000141adb891;
  case 0x6c:
    if (bVar44) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbStack_58 = (byte *)CONCAT71(uVar14,UNK_143389318);
    in_XMM1 = in_XMM1 & auVar52;
    bVar43 = (ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) |
                      (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf) == 0xffff;
    goto code_r0x000141adb9d4;
  case 0x6d:
    *pbVar13 = *pbVar13 + bVar8;
    pbStack_58 = pbVar13;
    goto code_r0x000141adbbf0;
  case 0x6e:
    *(int *)pbVar13 = *(int *)pbVar13 + 0x43389318;
    goto code_r0x000141adb891;
  case 0x6f:
    goto code_r0x000141adb8e0;
  case 0x70:
    pbStack_58 = pbVar13;
    if (uVar17 < 0x13) goto code_r0x000141adb961;
    goto LAB_141adbbe7;
  case 0x71:
  case 0x72:
  case 0x75:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    *(int *)(param_1 + 0xf) = *(int *)(param_1 + 0xf) + (int)&uStack_50;
    goto code_r0x000141adba49;
  case 0x73:
    return pbVar13;
  case 0x74:
    goto code_r0x000141adb9fb;
  case 0x76:
    goto code_r0x000141adb806;
  case 0x7b:
    *(uint *)unaff_RBX = (uint)*unaff_RBX + iVar24;
    goto code_r0x000141adb891;
  case 0x7c:
    pbStack_58 = pbVar13;
    if (*(short *)((longlong)param_2 + 4) == 0x7468 && *(int *)(longlong)(int)uVar20 == 0x43389318)
    {
      (&UNK_143389319)[uVar12] = 1;
      goto code_r0x000141adba80;
    }
    goto LAB_141adbbe7;
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x85:
    goto code_r0x000141adbaef;
  case 0x83:
    (&UNK_1433892d1)[uVar12] = (&UNK_1433892d1)[uVar12] + '\x18';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x84:
    uVar17 = _UNK_143389321 + 0x43389318;
    goto code_r0x000141adbac5;
  case 0x86:
    *pbVar13 = *pbVar13 + bVar8;
    return pbVar13;
  case 0x87:
    UNK_143389299 = UNK_143389299 | 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    *pbVar13 = *pbVar13 + bVar8;
    return pbVar13;
  case 0x89:
    pbStack_58 = pbVar13;
    if (((ulonglong)(byte)*(ulonglong *)((longlong)param_2 + 8) ^ 0x6e | 0x143389318) == 0) {
      (&UNK_143389319)[uVar12] = 3;
      *pbVar13 = 0;
      return pbVar13;
    }
    goto LAB_141adbbe7;
  case 0x8b:
    goto code_r0x000141adbb3b;
  case 0x8c:
    uVar12 = func_0x00015113bd34();
    pbStack_58 = (byte *)CONCAT71((int7)(uVar12 >> 8),
                                  *(undefined *)((longlong)unaff_RBX + (uVar12 & 0xff)));
    puVar32 = (undefined8 *)&stack0xffffffffffffff98;
    cVar9 = '\x1e';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar32 = puVar32 + -1;
      *puVar32 = *unaff_RBP;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    *(int *)pbStack_58 = *(int *)pbStack_58 + 1;
code_r0x000141adbbb7:
    pbStack_58[1] = 0xd;
    *pbStack_58 = 0;
    return pbStack_58;
  case 0x91:
    goto code_r0x000141adbbca;
  case 0x99:
    *(undefined2 *)pbVar13 = in_ES;
    *pbVar13 = *pbVar13 + bVar8;
    goto code_r0x000141adbb5b;
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0xa0:
    pcVar41 = (char *)0x4338932c;
    goto code_r0x000141adbfa9;
  case 0x9d:
    *pbVar13 = *pbVar13 + bVar8;
    pbStack_30 = &stack0xfffffffffffffff0;
    puStack_28 = (undefined *)0x6;
    uStack_38 = 6;
    pbVar13 = (byte *)pdb_140f673b0(pbVar13,&UNK_143388560,0x14,&UNK_143388500);
    return pbVar13;
  case 0x9e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9f:
    bRam00000006501adf04 = bRam00000006501adf04 | 0x18;
    pcVar41 = (char *)((ulonglong)pbVar13 & 0xffffffffffffffa0);
    *pcVar41 = *pcVar41 + (char)pcVar41;
    *(char *)((longlong)unaff_RBP + 0x50ce24c6d) =
         *(char *)((longlong)unaff_RBP + 0x50ce24c6d) + '\x18';
    puVar2 = (uint *)((longlong)param_2 + -0x7376b3ff);
    *puVar2 = *puVar2 >> 0x18 | *puVar2 << 8;
    pbStack_58 = (byte *)((ulonglong)pbVar13 & 0xffffffffffffff80);
    goto code_r0x000141adbfbd;
  }
code_r0x000141ad8a23:
  puVar21 = puVar42;
  pbStack_58 = pbVar13;
  param_2 = &UNK_14338932c;
  uVar12 = (ulonglong)*(int *)(&UNK_14338932c + ((ulonglong)unaff_RBP & 0xff) * 4);
  bVar44 = 0xfffffffebcc76cd3 < uVar12;
  pbVar18 = (byte *)(&UNK_14338932c + uVar12);
  bVar43 = pbVar18 == (byte *)0x0;
  iVar39 = (int)unaff_RBP;
  bVar8 = (byte)pbStack_58;
  cVar9 = (char)((ulonglong)pbStack_58 >> 8);
  uVar20 = (uint)pbStack_58;
  uVar14 = (undefined7)((ulonglong)pbStack_58 >> 8);
  cVar15 = (char)pbVar18;
  uVar17 = (uint)pbVar18;
  iVar23 = (int)unaff_RBX;
  pbVar13 = pbStack_58;
  puVar35 = (undefined1 *)&pbStack_58;
  puVar42 = puVar21;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((ulonglong)unaff_RBP & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
    pbStack_58 = (byte *)pdb_141654820(pbStack_58);
    if (pbStack_58 != (byte *)0x0) goto code_r0x000141ad8a44;
    *(char *)(unaff_RBX + 7) = (char)unaff_RBX[7] + '\x01';
    param_1[1] = (byte)unaff_RBP;
    uVar12 = unaff_RBX[5];
    if (unaff_RBX[4] <= uVar12) goto code_r0x000141ad8a9a;
    goto code_r0x000141ad8a74;
  case 4:
code_r0x000141ad8a44:
    *(byte **)(param_1 + 8) = pbStack_58;
    *param_1 = 1;
    *(char *)(unaff_RBX + 7) = (char)unaff_RBX[7] + '\x01';
    return param_1;
  case 5:
    (&UNK_1433892fd)[(longlong)pbVar18 * 4 + uVar12] =
         (&UNK_1433892fd)[(longlong)pbVar18 * 4 + uVar12] + cVar15;
    puVar28 = (undefined1 *)&pbStack_58;
    goto code_r0x000141adaa91;
  case 6:
    iRam0000000100002600 = iRam0000000100002600 + -1;
    pcVar41 = &UNK_143389340;
    pbVar13 = (byte *)(longlong)*(int *)(&UNK_143389340 + (longlong)pbStack_58 * 4);
code_r0x000141ada931:
                    /* WARNING: Could not recover jumptable at 0x000141ada934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar13 = (byte *)(*(code *)(pbVar13 + (longlong)pcVar41))();
    return pbVar13;
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    pbVar13 = (byte *)(ulonglong)UNK_14338932d;
    (&UNK_14338932d)[uVar12] = UNK_14338932d;
    *pbVar18 = 0;
    return pbVar13;
  case 9:
    goto code_r0x000141ada9a5;
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    goto code_r0x000141ada945;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x13:
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    puVar25 = (undefined8 *)(ulonglong)(iVar24 + 0x58);
    puVar25[1] = puVar25[1];
    *puVar25 = *puVar25;
    puVar25[-1] = &iRam0000000100002600;
    puVar25[-2] = unaff_RBX;
    puVar25[-3] = 0xfffffffffffffffe;
    lVar7 = CONCAT17(UNK_143389343,
                     CONCAT16(UNK_143389342,
                              CONCAT15(UNK_143389341,
                                       CONCAT14(UNK_143389340,
                                                CONCAT13(UNK_14338933f,
                                                         CONCAT12(UNK_14338933e,
                                                                  CONCAT11(UNK_14338933d,
                                                                           UNK_14338933c)))))));
    uVar11 = CONCAT17(UNK_143389333,
                      CONCAT16(UNK_143389332,
                               CONCAT15(UNK_143389331,
                                        CONCAT14(UNK_143389330,
                                                 CONCAT13(UNK_14338932f,
                                                          CONCAT12(UNK_14338932e,
                                                                   CONCAT11(UNK_14338932d,
                                                                            UNK_14338932c)))))));
    lVar6 = CONCAT17(UNK_14338933b,
                     CONCAT16(UNK_14338933a,
                              CONCAT15(UNK_143389339,
                                       CONCAT14(UNK_143389338,
                                                CONCAT13(UNK_143389337,
                                                         CONCAT12(UNK_143389336,
                                                                  CONCAT11(UNK_143389335,
                                                                           UNK_143389334)))))));
    puVar25[-10] = lVar6;
    puVar25[-9] = lVar6;
    puVar25[-5] = uVar11;
    puVar25[-8] = uVar11;
    puVar25[-7] = lVar7 * 0x20 + lVar6;
    *(undefined1 *)(puVar25 + -0xd) = 10;
    puVar25[-0x12] = &UNK_142def059;
    uVar11 = pdb_142db90e0(puVar25 + -0xd,(longlong)puVar25 + -0x19,&UNK_1433885b0);
    *(undefined8 *)(&UNK_143389334 + uVar12) = uVar11;
    *pbVar18 = 1;
    puVar25[-6] = lVar6;
    puVar25[-0x12] = &UNK_142def070;
    pdb_14098ae50(lVar6,lVar7);
    if (puVar25[-5] != 0) {
      puVar25[-0x12] = &UNK_142def08d;
      pub_1406abac0((byte *)puVar25[-6],puVar25[-5] << 5,8);
    }
    return pbVar18;
  case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    *(uint *)pbStack_58 = *(int *)pbStack_58 + uVar20;
code_r0x000141ada9a5:
    puVar27 = (undefined1 *)&pbStack_58;
code_r0x000141adaa2f:
    pbStack_58 = (byte *)0x0;
    *pbVar18 = 0;
    puVar21 = puVar42;
    pbVar18 = in_R10;
    if (puVar42 == (ulonglong *)0x0) {
code_r0x000141ada945:
      return pbStack_58;
    }
code_r0x000141adaa85:
    pcVar41 = (char *)0x1;
    puVar28 = puVar27;
code_r0x000141adaa91:
    *(undefined8 *)(puVar28 + -8) = 0x141adaa96;
    pub_1406abac0(pbVar18,(ulonglong)puVar21,(ulonglong)pcVar41);
    return extraout_RAX;
  case 0x16:
LAB_141adad48:
    pbVar13[1] = 1;
code_r0x000141adad4d:
    *pbVar13 = 0;
    return pbVar13;
  case 0x17:
    puVar2 = (uint *)(pbVar18 + (longlong)unaff_RBP * 8);
    bVar43 = CARRY4(*puVar2,uVar20);
    *puVar2 = *puVar2 + uVar20;
code_r0x000141adae3c:
    cVar9 = (char)pbVar13 + *pbVar18 + bVar43;
    pcVar41 = (char *)CONCAT71((int7)((ulonglong)pbVar13 >> 8),cVar9);
    *pcVar41 = *pcVar41 + cVar9;
    goto code_r0x000141adae40;
  case 0x18:
    *(int *)pbVar18 = *(int *)pbVar18 + iVar24;
code_r0x000141adae13:
    param_1[1] = 0x21;
    break;
  case 0x19:
    *(uint *)unaff_RBX = (uint)*unaff_RBX + uVar17;
code_r0x000141adae25:
    param_1[1] = 0xb;
    break;
  case 0x1a:
    *(int *)(pbVar18 + (longlong)unaff_RBP * 8) =
         *(int *)(pbVar18 + (longlong)unaff_RBP * 8) + iVar24;
    uVar4 = in(0x932c);
    iRam0000000100002600 = CONCAT31(iRam0000000100002600._1_3_,uVar4);
    *(uint *)pbStack_58 = *(int *)pbStack_58 + uVar20;
    *(uint *)unaff_RBX = (uint)*unaff_RBX + in_R11D;
    break;
  case 0x1b:
    *(int *)pbStack_58 = *(int *)pbStack_58 + iVar23;
code_r0x000141adae64:
    param_1[1] = 0x18;
    break;
  case 0x1c:
code_r0x000141adae7e:
    *(uint *)unaff_RBX = (uint)*unaff_RBX + (int)pcVar41;
    break;
  case 0x1d:
    *(int *)pbVar18 = *(int *)pbVar18 + iVar40;
code_r0x000141adae2e:
    param_1[1] = 0x31;
    break;
  case 0x1e:
code_r0x000141adae90:
    *(int *)pbVar18 = *(int *)pbVar18 + (int)pcVar41;
    break;
  case 0x1f:
    *(int *)pbStack_58 = *(int *)pbStack_58 + 0x4338932c;
code_r0x000141adadf8:
    param_1[1] = 0x10;
    break;
  case 0x20:
code_r0x000141adae8a:
    iRam0000000100002600 = iRam0000000100002600 + (int)pbVar13;
    break;
  case 0x21:
    iRam0000000100002600 = iRam0000000100002600 + iVar39;
    goto code_r0x000141adadcb;
  case 0x22:
    iVar24 = CONCAT13(UNK_14338932f,CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c))) +
             iVar24;
    UNK_14338932c = (char)iVar24;
    UNK_14338932d = (byte)((uint)iVar24 >> 8);
    UNK_14338932e = (char)((uint)iVar24 >> 0x10);
    UNK_14338932f = (char)((uint)iVar24 >> 0x18);
code_r0x000141adadef:
    param_1[1] = 0x22;
    break;
  case 0x23:
    iRam0000000100002600 = iRam0000000100002600 + uVar17;
    goto code_r0x000141adae76;
  case 0x24:
    *(uint *)unaff_RBX = (uint)*unaff_RBX + iVar39;
code_r0x000141adadb0:
    param_1[1] = 0x2b;
    break;
  case 0x25:
    *(int *)pbStack_58 = *(int *)pbStack_58 + iVar40;
code_r0x000141adae1c:
    param_1[1] = 0x30;
    break;
  case 0x26:
    *(uint *)pbStack_58 = *(int *)pbStack_58 + uVar20;
code_r0x000141adad9e:
    param_1[1] = 0;
    break;
  case 0x27:
    *(uint *)(pbVar18 + (longlong)unaff_RBP * 8) =
         *(int *)(pbVar18 + (longlong)unaff_RBP * 8) + uVar17;
    *pbVar18 = *pbVar18 + bVar8;
  case 0x4e:
    *pbStack_58 = *pbStack_58 + bVar8;
code_r0x000141adae52:
    param_1[1] = 9;
    break;
  case 0x28:
    return pbStack_58;
  case 0x29:
code_r0x000141adaeb4:
    *(int *)(pbVar18 + CONCAT44(unaff_000000ac,unaff_R13D) * 8) =
         *(int *)(pbVar18 + CONCAT44(unaff_000000ac,unaff_R13D) * 8) + (int)in_R10;
  case 0x40:
code_r0x000141adaeba:
    pbStack_58 = (byte *)((ulonglong)&pbStack_58 & 0xffffffff);
    *pbStack_58 = *pbStack_58 + (char)pbStack_58;
    _UNK_141ae3aaf = _UNK_141ae3aaf + (int)pcVar41;
code_r0x000141adaec6:
    _UNK_141ae31b8 = _UNK_141ae31b8 + (int)in_R10;
code_r0x000141adaecf:
    iRam0000000188742bc3 = iRam0000000188742bc3 + (int)puVar42;
code_r0x000141adaed8:
    *(int *)param_1 = *(int *)param_1 + (int)pbStack_58;
    break;
  case 0x2a:
code_r0x000141adae5d:
    *(int *)pbVar18 = *(int *)pbVar18 + (int)unaff_RBX;
    break;
  case 0x2b:
    iVar40 = CONCAT13(UNK_14338932f,CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c))) +
             uVar20;
    UNK_14338932c = (char)iVar40;
    UNK_14338932d = (byte)((uint)iVar40 >> 8);
    UNK_14338932e = (char)((uint)iVar40 >> 0x10);
    UNK_14338932f = (char)((uint)iVar40 >> 0x18);
  case 0x59:
code_r0x000141adae71:
    break;
  case 0x2c:
code_r0x000141adaea8:
    param_1 = param_1 + 1;
    *pbVar13 = *pbVar13 + (char)pbVar13;
    *(int *)pbVar18 = *(int *)pbVar18 + unaff_R13D;
    break;
  case 0x2d:
    _UNK_141ae3aaf = _UNK_141ae3aaf + uVar20;
    goto code_r0x000141adaec6;
  case 0x2e:
    *(uint *)param_1 = *(int *)param_1 + uVar17;
    goto code_r0x000141adae0a;
  case 0x2f:
    *(int *)(pbVar18 + (longlong)unaff_RBP * 8) =
         *(int *)(pbVar18 + (longlong)unaff_RBP * 8) + iVar39;
    *(byte **)pbStack_58 = pbStack_58 + *(longlong *)pbStack_58;
    *(int *)param_1 = *(int *)param_1 + (int)puVar21;
code_r0x000141adae0a:
    param_1[1] = 0xe;
    break;
  case 0x30:
    goto code_r0x000141adaed8;
  case 0x31:
    goto code_r0x000141adad8e;
  case 0x32:
    goto code_r0x000141adaec6;
  case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x34:
code_r0x000141adae96:
    iRam0000000100002600 = iRam0000000100002600 + in_R11D;
  case 0x5a:
code_r0x000141adae9e:
    break;
  case 0x35:
    *(int *)pbStack_58 = *(int *)pbStack_58 + iVar39;
code_r0x000141adae40:
    param_1[1] = 0x28;
    break;
  case 0x36:
    iRam0000000100002600 = iRam0000000100002600 + iVar23;
    goto code_r0x000141adae9e;
  case 0x37:
    _UNK_141af3eaa = _UNK_141af3eaa + iVar24;
    goto code_r0x000141adadca;
  case 0x38:
    pbStack_58 = (byte *)CONCAT71(uVar14,bVar8 + 0x81);
    goto code_r0x000141adad99;
  case 0x39:
    goto code_r0x000141adad79;
  case 0x3a:
    return pbStack_58;
  case 0x3b:
    puVar29 = auStack_88;
    param_1 = pbVar18;
    goto code_r0x000141adad68;
  case 0x3c:
    iRam0000000188742bc3 = iRam0000000188742bc3 + uVar17;
    goto code_r0x000141adaed8;
  case 0x3d:
    *(int *)pbVar18 = *(int *)pbVar18 + iVar39;
    break;
  case 0x3e:
    *(uint *)unaff_RBX = (uint)*unaff_RBX + iVar23;
    break;
  case 0x3f:
    *(uint *)pbVar18 = *(int *)pbVar18 + uVar17;
    goto code_r0x000141adae52;
  case 0x41:
    pcVar5 = (code *)swi(3);
    pbVar13 = (byte *)(*pcVar5)();
    return pbVar13;
  case 0x42:
    iVar40 = CONCAT13(UNK_14338932f,CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c))) +
             iVar40;
    UNK_14338932c = (char)iVar40;
    UNK_14338932d = (byte)((uint)iVar40 >> 8);
    UNK_14338932e = (char)((uint)iVar40 >> 0x10);
    UNK_14338932f = (char)((uint)iVar40 >> 0x18);
code_r0x000141adada7:
    param_1[1] = 0x32;
    break;
  case 0x43:
code_r0x000141adaea2:
    *(int *)pbVar18 = *(int *)pbVar18 + (int)in_R10;
    break;
  case 0x44:
    *(int *)param_1 = *(int *)param_1 + iVar23;
    break;
  case 0x45:
    if ((longlong)uVar12 < -0x14338932c) goto code_r0x000141adad99;
    *pbVar18 = *pbVar18 & bVar8;
    puVar30 = (undefined1 *)&pbStack_58;
    goto code_r0x000141adad71;
  case 0x46:
    unaff_R14D = iVar40;
code_r0x000141adadca:
    _UNK_141af35b3 = _UNK_141af35b3 + unaff_R14D;
    iRam0000000100002600 = iRam0000000100002600 + unaff_R13D;
code_r0x000141adadcb:
    param_1[1] = 0x2f;
    break;
  case 0x47:
    *(uint *)unaff_RBX = (uint)*unaff_RBX + iVar24;
code_r0x000141adadd4:
    param_1[1] = 0x23;
    break;
  case 0x48:
    pcVar5 = (code *)swi(3);
    pbVar13 = (byte *)(*pcVar5)();
    return pbVar13;
  case 0x49:
    *(int *)pbStack_58 = *(int *)pbStack_58 + iVar24;
    break;
  case 0x4a:
    *(uint *)pbStack_58 = *(int *)pbStack_58 + uVar17;
    break;
  case 0x4b:
    puVar29 = (undefined1 *)&pbStack_58;
code_r0x000141adad68:
    *(undefined8 *)(puVar29 + -8) = 0x141adad72;
    pbVar13 = (byte *)pdb_141adaf60(puVar29 + 0x20);
    puVar30 = puVar29;
code_r0x000141adad71:
    pbVar18 = pbVar13 + 0x120247c;
    *pbVar18 = *pbVar18 + (char)pbVar13;
    puVar31 = puVar30;
    if (*pbVar18 != 0) {
      pbStack_58 = (byte *)(ulonglong)(byte)puVar30[0x21];
code_r0x000141adad8e:
      pbVar18 = &UNK_143389384;
      pbVar13 = pbStack_58;
code_r0x000141adad95:
      pbStack_58 = (byte *)(longlong)*(int *)(pbVar18 + (longlong)pbVar13 * 4);
code_r0x000141adad99:
                    /* WARNING: Could not recover jumptable at 0x000141adad9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar13 = (byte *)(*(code *)(pbStack_58 + (longlong)pbVar18))();
      return pbVar13;
    }
code_r0x000141adad79:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar31 + 0x28);
    bVar8 = 1;
    goto LAB_141adaf54;
  case 0x4c:
    iVar40 = CONCAT13(UNK_14338932f,CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c))) +
             0x4338932c;
    UNK_14338932c = (char)iVar40;
    UNK_14338932d = (byte)((uint)iVar40 >> 8);
    UNK_14338932e = (char)((uint)iVar40 >> 0x10);
    UNK_14338932f = (char)((uint)iVar40 >> 0x18);
code_r0x000141adaedc:
    param_1[1] = 0x12;
    break;
  case 0x4d:
    iVar40 = CONCAT13(UNK_14338932f,CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c))) +
             uVar17;
    UNK_14338932c = (char)iVar40;
    UNK_14338932d = (byte)((uint)iVar40 >> 8);
    UNK_14338932e = (char)((uint)iVar40 >> 0x10);
    UNK_14338932f = (char)((uint)iVar40 >> 0x18);
code_r0x000141adaee2:
    param_1[1] = 10;
    break;
  case 0x4f:
code_r0x000141adb536:
    pbVar13 = pbStack_58;
    puVar37 = puVar35;
    if (*(longlong *)((longlong)param_2 + 6) != 0x656361665f775f6e || pbVar18 != (byte *)0x0) {
LAB_141adb7c5:
      in_R10 = &UNK_1433888a0;
      param_1 = pbStack_58;
code_r0x000141adb7d2:
      *(undefined8 *)(puVar37 + -8) = 0x141adb7e3;
      pbVar18 = (byte *)pdb_142d8f140(param_2,pcVar41,in_R10);
      pbStack_58 = param_1;
      goto code_r0x000141adb7e9;
    }
code_r0x000141adb54d:
    pbVar13[1] = 0x27;
    goto code_r0x000141adb891;
  case 0x50:
    auVar47[0] = -(UNK_14338932c == UNK_143388360);
    auVar47[1] = -(UNK_14338932d == UNK_143388361);
    auVar47[2] = -(UNK_14338932e == UNK_143388362);
    auVar47[3] = -(UNK_14338932f == UNK_143388363);
    auVar47[4] = -(UNK_143389330 == UNK_143388364);
    auVar47[5] = -(UNK_143389331 == UNK_143388365);
    auVar47[6] = -(UNK_143389332 == UNK_143388366);
    auVar47[7] = -(UNK_143389333 == UNK_143388367);
    auVar47[8] = -(UNK_143389334 == UNK_143388368);
    auVar47[9] = -(UNK_143389335 == UNK_143388369);
    auVar47[10] = -(UNK_143389336 == UNK_14338836a);
    auVar47[0xb] = -(UNK_143389337 == UNK_14338836b);
    auVar47[0xc] = -(UNK_143389338 == UNK_14338836c);
    auVar47[0xd] = -(UNK_143389339 == UNK_14338836d);
    auVar47[0xe] = -(UNK_14338933a == UNK_14338836e);
    auVar47[0xf] = -(UNK_14338933b == UNK_14338836f);
    auVar54[0] = -(UNK_14338933c == UNK_142e49990);
    auVar54[1] = -(UNK_142e49991 == '\0');
    auVar54[2] = -(UNK_142e49992 == '\0');
    auVar54[3] = -(UNK_142e49993 == '\0');
    auVar54[4] = -(UNK_142e49994 == '\0');
    auVar54[5] = -(UNK_142e49995 == '\0');
    auVar54[6] = -(UNK_142e49996 == '\0');
    auVar54[7] = -(UNK_142e49997 == '\0');
    auVar54[8] = -(UNK_142e49998 == '\0');
    auVar54[9] = -(UNK_142e49999 == '\0');
    auVar54[10] = -(UNK_142e4999a == '\0');
    auVar54[0xb] = -(UNK_142e4999b == '\0');
    auVar54[0xc] = -(UNK_142e4999c == '\0');
    auVar54[0xd] = -(UNK_142e4999d == '\0');
    auVar54[0xe] = -(UNK_142e4999e == '\0');
    auVar54[0xf] = -(UNK_142e4999f == '\0');
    auVar54 = auVar54 & auVar47;
    if ((ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar54[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000141adb747:
      pbStack_58[1] = 0xd;
      pbVar13 = pbStack_58;
    }
    else {
      auVar48[0] = -(UNK_14338932c == UNK_143388370);
      auVar48[1] = -(UNK_14338932d == UNK_143388371);
      auVar48[2] = -(UNK_14338932e == UNK_143388372);
      auVar48[3] = -(UNK_14338932f == UNK_143388373);
      auVar48[4] = -(UNK_143389330 == UNK_143388374);
      auVar48[5] = -(UNK_143389331 == UNK_143388375);
      auVar48[6] = -(UNK_143389332 == UNK_143388376);
      auVar48[7] = -(UNK_143389333 == UNK_143388377);
      auVar48[8] = -(UNK_143389334 == UNK_143388378);
      auVar48[9] = -(UNK_143389335 == UNK_143388379);
      auVar48[10] = -(UNK_143389336 == UNK_14338837a);
      auVar48[0xb] = -(UNK_143389337 == UNK_14338837b);
      auVar48[0xc] = -(UNK_143389338 == UNK_14338837c);
      auVar48[0xd] = -(UNK_143389339 == UNK_14338837d);
      auVar48[0xe] = -(UNK_14338933a == UNK_14338837e);
      auVar48[0xf] = -(UNK_14338933b == UNK_14338837f);
      auVar55[0] = -(UNK_14338933c == UNK_143388380);
      auVar55[1] = -(UNK_143388381 == '\0');
      auVar55[2] = -(UNK_143388382 == '\0');
      auVar55[3] = -(UNK_143388383 == '\0');
      auVar55[4] = -(UNK_143388384 == '\0');
      auVar55[5] = -(UNK_143388385 == '\0');
      auVar55[6] = -(UNK_143388386 == '\0');
      auVar55[7] = -(UNK_143388387 == '\0');
      auVar55[8] = -(UNK_143388388 == '\0');
      auVar55[9] = -(UNK_143388389 == '\0');
      auVar55[10] = -(UNK_14338838a == '\0');
      auVar55[0xb] = -(UNK_14338838b == '\0');
      auVar55[0xc] = -(UNK_14338838c == '\0');
      auVar55[0xd] = -(UNK_14338838d == '\0');
      auVar55[0xe] = -(UNK_14338838e == '\0');
      auVar55[0xf] = -(UNK_14338838f == '\0');
      auVar55 = auVar55 & auVar48;
      if ((ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar55[0xf] >> 7) << 0xf) == 0xffff) {
        pbStack_58[1] = 0x1d;
      }
      else {
        auVar49[0] = -(UNK_14338932c == UNK_1433882e0);
        auVar49[1] = -(UNK_14338932d == UNK_1433882e1);
        auVar49[2] = -(UNK_14338932e == UNK_1433882e2);
        auVar49[3] = -(UNK_14338932f == UNK_1433882e3);
        auVar49[4] = -(UNK_143389330 == UNK_1433882e4);
        auVar49[5] = -(UNK_143389331 == UNK_1433882e5);
        auVar49[6] = -(UNK_143389332 == UNK_1433882e6);
        auVar49[7] = -(UNK_143389333 == UNK_1433882e7);
        auVar49[8] = -(UNK_143389334 == UNK_1433882e8);
        auVar49[9] = -(UNK_143389335 == UNK_1433882e9);
        auVar49[10] = -(UNK_143389336 == UNK_1433882ea);
        auVar49[0xb] = -(UNK_143389337 == UNK_1433882eb);
        auVar49[0xc] = -(UNK_143389338 == UNK_1433882ec);
        auVar49[0xd] = -(UNK_143389339 == UNK_1433882ed);
        auVar49[0xe] = -(UNK_14338933a == UNK_1433882ee);
        auVar49[0xf] = -(UNK_14338933b == UNK_1433882ef);
        auVar56[0] = -(UNK_14338933c == UNK_143388380);
        auVar56[1] = -(UNK_143388381 == '\0');
        auVar56[2] = -(UNK_143388382 == '\0');
        auVar56[3] = -(UNK_143388383 == '\0');
        auVar56[4] = -(UNK_143388384 == '\0');
        auVar56[5] = -(UNK_143388385 == '\0');
        auVar56[6] = -(UNK_143388386 == '\0');
        auVar56[7] = -(UNK_143388387 == '\0');
        auVar56[8] = -(UNK_143388388 == '\0');
        auVar56[9] = -(UNK_143388389 == '\0');
        auVar56[10] = -(UNK_14338838a == '\0');
        auVar56[0xb] = -(UNK_14338838b == '\0');
        auVar56[0xc] = -(UNK_14338838c == '\0');
        auVar56[0xd] = -(UNK_14338838d == '\0');
        auVar56[0xe] = -(UNK_14338838e == '\0');
        auVar56[0xf] = -(UNK_14338838f == '\0');
        auVar56 = auVar56 & auVar49;
        uVar16 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar56[0xf] >> 7) << 0xf;
code_r0x000141adb350:
        if (uVar16 != 0xffff) goto code_r0x000141adb35c;
        pbStack_58[1] = 0x29;
        pbVar13 = pbStack_58;
      }
    }
    goto code_r0x000141adb891;
  case 0x51:
    uVar12 = (ulonglong)
             (uVar17 ^ CONCAT13(UNK_143389335,
                                CONCAT12(UNK_143389334,CONCAT11(UNK_143389333,UNK_143389332))));
code_r0x000141adb4ee:
    pbVar13 = pbStack_58;
    if (*(longlong *)((longlong)param_2 + 6) == 0x726574747568735f && uVar12 == 0) {
      pbStack_58[1] = 0x1c;
    }
    else {
code_r0x000141adb505:
      if (*(longlong *)((longlong)param_2 + 6) != 0x676f6c5f65657274 ||
          *(ulonglong *)param_2 != 0x72745f6e65646c6f) {
        pbVar18 = (byte *)(*(ulonglong *)param_2 ^ 0x5f6e696b706d7570);
        pbStack_58 = pbVar13;
        puVar35 = (undefined1 *)puVar34;
        goto code_r0x000141adb536;
      }
      pbVar13[1] = 0x23;
    }
    goto code_r0x000141adb891;
  case 0x52:
    if (CONCAT17(UNK_143389339,
                 CONCAT16(UNK_143389338,
                          CONCAT15(UNK_143389337,
                                   CONCAT14(UNK_143389336,
                                            CONCAT13(UNK_143389335,
                                                     CONCAT12(UNK_143389334,
                                                              CONCAT11(UNK_143389333,UNK_143389332))
                                                    ))))) == 0x74656b7361625f77 &&
        uVar17 == CONCAT13(UNK_14338932f,
                           CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c)))) {
      pbStack_58[1] = 0xb;
    }
    else {
      if (CONCAT17(UNK_143389339,
                   CONCAT16(UNK_143389338,
                            CONCAT15(UNK_143389337,
                                     CONCAT14(UNK_143389336,
                                              CONCAT13(UNK_143389335,
                                                       CONCAT12(UNK_143389334,
                                                                CONCAT11(UNK_143389333,UNK_143389332
                                                                        ))))))) !=
          0x736c6f6f745f775f ||
          CONCAT17(UNK_143389333,
                   CONCAT16(UNK_143389332,
                            CONCAT15(UNK_143389331,
                                     CONCAT14(UNK_143389330,
                                              CONCAT13(UNK_14338932f,
                                                       CONCAT12(UNK_14338932e,
                                                                CONCAT11(UNK_14338932d,UNK_14338932c
                                                                        ))))))) !=
          0x775f736574617263) {
        uVar12 = CONCAT17(UNK_143389333,
                          CONCAT16(UNK_143389332,
                                   CONCAT15(UNK_143389331,
                                            CONCAT14(UNK_143389330,
                                                     CONCAT13(UNK_14338932f,
                                                              CONCAT12(UNK_14338932e,
                                                                       CONCAT11(UNK_14338932d,
                                                                                UNK_14338932c)))))))
                 ^ 0x735f776f646e6977;
        goto code_r0x000141adb4ee;
      }
      pbStack_58[1] = 0x19;
    }
    goto code_r0x000141adb891;
  case 0x53:
    if (bVar44) {
code_r0x000141adb0bb:
      puVar37 = (undefined1 *)&pbStack_58;
      if (*(longlong *)((longlong)param_2 + 5) != 0x736569676765765f ||
          *(ulonglong *)param_2 != 0x65765f6c6c617473) goto LAB_141adb7c5;
      pbStack_58[1] = 0x2f;
      pbVar13 = pbStack_58;
    }
    else {
      puVar32 = (undefined8 *)&stack0xffffffffffffffa0;
      if (puVar21 == (ulonglong *)0x0 &&
          uVar17 == CONCAT13(UNK_143389332,
                             CONCAT12(UNK_143389331,CONCAT11(UNK_143389330,UNK_14338932f)))) {
code_r0x000141adb806:
        pbVar13[1] = 0xc;
      }
      else {
        param_2 = &UNK_14338932c;
        if (CONCAT17(UNK_143389336,
                     CONCAT16(UNK_143389335,
                              CONCAT15(UNK_143389334,
                                       CONCAT14(UNK_143389333,
                                                CONCAT13(UNK_143389332,
                                                         CONCAT12(UNK_143389331,
                                                                  CONCAT11(UNK_143389330,
                                                                           UNK_14338932f))))))) ==
            0x6b6361735f6f7461 &&
            CONCAT17(UNK_143389333,
                     CONCAT16(UNK_143389332,
                              CONCAT15(UNK_143389331,
                                       CONCAT14(UNK_143389330,
                                                CONCAT13(UNK_14338932f,
                                                         CONCAT12(UNK_14338932e,
                                                                  CONCAT11(UNK_14338932d,
                                                                           UNK_14338932c))))))) ==
            0x735f6f7461746f70) {
          pbStack_58[1] = 0x14;
          goto code_r0x000141adb84f;
        }
        if (CONCAT17(UNK_143389336,
                     CONCAT16(UNK_143389335,
                              CONCAT15(UNK_143389334,
                                       CONCAT14(UNK_143389333,
                                                CONCAT13(UNK_143389332,
                                                         CONCAT12(UNK_143389331,
                                                                  CONCAT11(UNK_143389330,
                                                                           UNK_14338932f))))))) !=
            0x64616572625f6c6c ||
            CONCAT17(UNK_143389333,
                     CONCAT16(UNK_143389332,
                              CONCAT15(UNK_143389331,
                                       CONCAT14(UNK_143389330,
                                                CONCAT13(UNK_14338932f,
                                                         CONCAT12(UNK_14338932e,
                                                                  CONCAT11(UNK_14338932d,
                                                                           UNK_14338932c))))))) !=
            0x72625f6c6c617473) {
          pbVar18 = (byte *)0x6f72625f6b636172;
          goto code_r0x000141adb182;
        }
        pbStack_58[1] = 0x2e;
      }
    }
    goto code_r0x000141adb891;
  case 0x54:
    if (puVar21 == (ulonglong *)0x0 && pbVar18 == (byte *)0x0) {
      pbStack_58[1] = 0x15;
    }
    else if (UNK_143389334 == 0x72 &&
             CONCAT17(UNK_143389333,
                      CONCAT16(UNK_143389332,
                               CONCAT15(UNK_143389331,
                                        CONCAT14(UNK_143389330,
                                                 CONCAT13(UNK_14338932f,
                                                          CONCAT12(UNK_14338932e,
                                                                   CONCAT11(UNK_14338932d,
                                                                            UNK_14338932c))))))) ==
             0x65776f6c666e7573) {
      pbStack_58[1] = 0x16;
    }
    else if (UNK_143389334 == 0x78 &&
             CONCAT17(UNK_143389333,
                      CONCAT16(UNK_143389332,
                               CONCAT15(UNK_143389331,
                                        CONCAT14(UNK_143389330,
                                                 CONCAT13(UNK_14338932f,
                                                          CONCAT12(UNK_14338932e,
                                                                   CONCAT11(UNK_14338932d,
                                                                            UNK_14338932c))))))) ==
             0x6f627265776f6c66) {
      pbStack_58[1] = 0x32;
    }
    else {
      pbVar18 = (byte *)(CONCAT17(UNK_143389333,
                                  CONCAT16(UNK_143389332,
                                           CONCAT15(UNK_143389331,
                                                    CONCAT14(UNK_143389330,
                                                             CONCAT13(UNK_14338932f,
                                                                      CONCAT12(UNK_14338932e,
                                                                               CONCAT11(
                                                  UNK_14338932d,UNK_14338932c))))))) ^
                        0x6c65625f726f6f64);
      puVar42 = (ulonglong *)((ulonglong)UNK_143389334 ^ 0x6c);
code_r0x000141adb2ba:
      puVar37 = (undefined1 *)&pbStack_58;
      if (puVar42 != (ulonglong *)0x0 || pbVar18 != (byte *)0x0) goto LAB_141adb7c5;
      pbStack_58[1] = 0x33;
      pbVar13 = pbStack_58;
    }
    goto code_r0x000141adb891;
  case 0x55:
    if (bVar44 || bVar43) {
      if (SCARRY8(uVar12,0x14338932c)) {
        pbStack_58 = (byte *)CONCAT71(uVar14,*pbVar18);
        if ((ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) != 0xffff) goto code_r0x000141adb00e;
        pbStack_58[1] = 0x1b;
        pbVar13 = pbStack_58;
      }
      else {
        puVar37 = (undefined1 *)&pbStack_58;
        if (CONCAT17(UNK_14338933a,
                     CONCAT16(UNK_143389339,
                              CONCAT15(UNK_143389338,
                                       CONCAT14(UNK_143389337,
                                                CONCAT13(UNK_143389336,
                                                         CONCAT12(UNK_143389335,
                                                                  CONCAT11(UNK_143389334,
                                                                           UNK_143389333))))))) !=
            0x736e696b706d7570 ||
            uVar17 != CONCAT13(UNK_14338932f,
                               CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c))))
        goto LAB_141adb7c5;
        pbStack_58[1] = 0x28;
      }
    }
    else {
      cVar9 = cVar9 + param_1[0xf];
      pbStack_58 = (byte *)CONCAT62((int6)((ulonglong)pbStack_58 >> 0x10),CONCAT11(cVar9,bVar8));
      if (cVar9 != '\0') {
        out(0xd2,bVar8);
        pbStack_58 = (byte *)CONCAT71((int7)((ulonglong)pbStack_58 >> 8),*pbVar18);
      }
code_r0x000141adb00e:
      auVar45[0] = -(UNK_14338932c == UNK_143388300);
      auVar45[1] = -(UNK_14338932d == UNK_143388301);
      auVar45[2] = -(UNK_14338932e == UNK_143388302);
      auVar45[3] = -(UNK_14338932f == UNK_143388303);
      auVar45[4] = -(UNK_143389330 == UNK_143388304);
      auVar45[5] = -(UNK_143389331 == UNK_143388305);
      auVar45[6] = -(UNK_143389332 == UNK_143388306);
      auVar45[7] = -(UNK_143389333 == UNK_143388307);
      auVar45[8] = -(UNK_143389334 == UNK_143388308);
      auVar45[9] = -(UNK_143389335 == UNK_143388309);
      auVar45[10] = -(UNK_143389336 == UNK_14338830a);
      auVar45[0xb] = -(UNK_143389337 == UNK_14338830b);
      auVar45[0xc] = -(UNK_143389338 == UNK_14338830c);
      auVar45[0xd] = -(UNK_143389339 == UNK_14338830d);
      auVar45[0xe] = -(UNK_14338933a == UNK_14338830e);
      auVar45[0xf] = -(UNK_14338933b == UNK_14338830f);
      pbVar13 = pbStack_58;
      if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar45[0xf] >> 7) << 0xf) == 0xffff) {
        pbStack_58[1] = 0x24;
      }
      else {
        auVar46[0] = -(UNK_14338932c == UNK_143388330);
        auVar46[1] = -(UNK_14338932d == UNK_143388331);
        auVar46[2] = -(UNK_14338932e == UNK_143388332);
        auVar46[3] = -(UNK_14338932f == UNK_143388333);
        auVar46[4] = -(UNK_143389330 == UNK_143388334);
        auVar46[5] = -(UNK_143389331 == UNK_143388335);
        auVar46[6] = -(UNK_143389332 == UNK_143388336);
        auVar46[7] = -(UNK_143389333 == UNK_143388337);
        auVar46[8] = -(UNK_143389334 == UNK_143388338);
        auVar46[9] = -(UNK_143389335 == UNK_143388339);
        auVar46[10] = -(UNK_143389336 == UNK_14338833a);
        auVar46[0xb] = -(UNK_143389337 == UNK_14338833b);
        auVar46[0xc] = -(UNK_143389338 == UNK_14338833c);
        auVar46[0xd] = -(UNK_143389339 == UNK_14338833d);
        auVar46[0xe] = -(UNK_14338933a == UNK_14338833e);
        auVar46[0xf] = -(UNK_14338933b == UNK_14338833f);
        if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar46[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
        pbStack_58[1] = 0x2b;
      }
    }
    goto code_r0x000141adb891;
  case 0x56:
    *pbStack_58 = *pbStack_58 + bVar8;
code_r0x000141adb420:
    pbVar13 = pbStack_58;
    if (*(short *)((longlong)param_2 + 4) == 0x6c65 && (uint)*(ulonglong *)param_2 == 0x766f6873) {
      pbStack_58[1] = 4;
    }
    else if (*(short *)((longlong)param_2 + 4) == 0x7465 &&
             (uint)*(ulonglong *)param_2 == 0x6b637562) {
      pbStack_58[1] = 8;
    }
    else {
      if (*(short *)((longlong)param_2 + 4) == 0x6c65 && (uint)*(ulonglong *)param_2 == 0x72726162)
      goto code_r0x000141adb747;
      puVar37 = (undefined1 *)&pbStack_58;
      if (*(short *)((longlong)param_2 + 4) != 0x7465 || (uint)*(ulonglong *)param_2 != 0x6b736162)
      goto LAB_141adb7c5;
code_r0x000141adb490:
      pbVar13[1] = 0x11;
    }
    goto code_r0x000141adb891;
  case 0x57:
    iRam0000000100002600 = iRam0000000100002600 + (int)in_R10;
    break;
  case 0x58:
    param_2 = &UNK_143384a2c;
    param_1[0xf] = param_1[0xf] + cVar9 + bVar44;
    out(*param_1,0x4a2c);
    puVar33 = unaff_RBP + 1;
code_r0x000141adb35c:
    auVar50[0] = -((char)*(ulonglong *)param_2 == UNK_143388390);
    auVar50[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388391);
    auVar50[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388392);
    auVar50[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388393);
    auVar50[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388394);
    auVar50[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388395);
    auVar50[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388396);
    auVar50[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388397);
    auVar50[8] = -((char)*(ulonglong *)((longlong)param_2 + 8) == UNK_143388398);
    auVar50[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388399);
    auVar50[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338839a);
    auVar50[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338839b);
    auVar50[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338839c);
    auVar50[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338839d);
    auVar50[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338839e);
    auVar50[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338839f);
    auVar57[0] = -((char)*(ulonglong *)((longlong)param_2 + 0x10) == UNK_142e478c0);
    auVar57[1] = -(UNK_142e478c1 == '\0');
    auVar57[2] = -(UNK_142e478c2 == '\0');
    auVar57[3] = -(UNK_142e478c3 == '\0');
    auVar57[4] = -(UNK_142e478c4 == '\0');
    auVar57[5] = -(UNK_142e478c5 == '\0');
    auVar57[6] = -(UNK_142e478c6 == '\0');
    auVar57[7] = -(UNK_142e478c7 == '\0');
    auVar57[8] = -(UNK_142e478c8 == '\0');
    auVar57[9] = -(UNK_142e478c9 == '\0');
    auVar57[10] = -(UNK_142e478ca == '\0');
    auVar57[0xb] = -(UNK_142e478cb == '\0');
    auVar57[0xc] = -(UNK_142e478cc == '\0');
    auVar57[0xd] = -(UNK_142e478cd == '\0');
    auVar57[0xe] = -(UNK_142e478ce == '\0');
    auVar57[0xf] = -(UNK_142e478cf == '\0');
    auVar57 = auVar57 & auVar50;
    puVar37 = (undefined1 *)puVar33;
    if ((ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
    pbStack_58[1] = 0x35;
    pbVar13 = pbStack_58;
    goto code_r0x000141adb891;
  case 0x5b:
    pbVar18 = (byte *)((ulonglong)pbVar18 & 0xffffffff);
code_r0x000141adb182:
    puVar37 = (undefined1 *)puVar32;
    if (*(longlong *)((longlong)param_2 + 3) != 0x736d6f6f72625f6b || pbVar18 != *(byte **)param_2)
    goto LAB_141adb7c5;
    pbStack_58[1] = 0x31;
    pbVar13 = pbStack_58;
    goto code_r0x000141adb891;
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x62:
    pbStack_58 = (byte *)CONCAT71(uVar14,(bVar8 | *(byte *)(uVar12 + 0x24338b8e2)) + 0x41);
code_r0x000141adb687:
    pbVar13 = pbStack_58;
    if (*(char *)((longlong)param_2 + 4) == 'h' && (uint)*(ulonglong *)param_2 == 0x636e6562) {
      pbStack_58[1] = 10;
    }
    else if (*(char *)((longlong)param_2 + 4) == '2' && (uint)*(ulonglong *)param_2 == 0x74726163) {
      pbStack_58[1] = 0x18;
    }
    else {
      puVar37 = (undefined1 *)&pbStack_58;
      if (*(char *)((longlong)param_2 + 4) != 'l' || (uint)*(ulonglong *)param_2 != 0x69766e61)
      goto LAB_141adb7c5;
      pbStack_58[1] = 0x2c;
    }
    goto code_r0x000141adb891;
  case 0x5e:
    pbVar18 = (byte *)(ulonglong)(uVar17 ^ 0x32765f74);
code_r0x000141adb59b:
    pbVar13 = pbStack_58;
    if ((uint)*(ulonglong *)((longlong)param_2 + 8) == 0x32765f74 && pbVar18 == *(byte **)param_2) {
      pbStack_58[1] = 0xf;
    }
    else {
      puVar37 = puVar36;
      if ((uint)*(ulonglong *)((longlong)param_2 + 8) != 0x736c6c6f ||
          *(ulonglong *)param_2 != 0x725f636972626166) goto LAB_141adb7c5;
      pbStack_58[1] = 0x2d;
    }
    goto code_r0x000141adb891;
  case 0x61:
code_r0x000141adb06d:
    if (bVar43) {
      pbVar13[1] = 0x12;
    }
    else if (*(longlong *)((longlong)param_2 + 5) == 0x73657661656c5f6e &&
             *(ulonglong *)param_2 == 0x6c5f6e656c6c6166) {
      pbVar13[1] = 0x20;
    }
    else {
      pbStack_58 = pbVar13;
      if (*(longlong *)((longlong)param_2 + 5) != 0x736c617465705f6e ||
          *(ulonglong *)param_2 != 0x705f6e656c6c6166) goto code_r0x000141adb0bb;
      pbVar13[1] = 0x21;
    }
    goto code_r0x000141adb891;
  case 99:
    pbStack_58 = (byte *)CONCAT71(uVar14,bVar8 + *pbStack_58);
    pbStack_58[-0x47] = pbStack_58[-0x47] + cVar15;
    out(*(undefined4 *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),_UNK_143389391 * 0x6f77),0x932c);
    pbVar13 = pbStack_58;
    if (*(byte **)(&UNK_14338932c + in_FS_OFFSET) == pbVar18) {
      pbStack_58[1] = 7;
    }
    else if (CONCAT17(UNK_143389333,
                      CONCAT16(UNK_143389332,
                               CONCAT15(UNK_143389331,
                                        CONCAT14(UNK_143389330,
                                                 CONCAT13(UNK_14338932f,
                                                          CONCAT12(UNK_14338932e,
                                                                   CONCAT11(UNK_14338932d,
                                                                            UNK_14338932c))))))) ==
             0x7473656e64726962) {
      pbStack_58[1] = 9;
    }
    else if (CONCAT17(UNK_143389333,
                      CONCAT16(UNK_143389332,
                               CONCAT15(UNK_143389331,
                                        CONCAT14(UNK_143389330,
                                                 CONCAT13(UNK_14338932f,
                                                          CONCAT12(UNK_14338932e,
                                                                   CONCAT11(UNK_14338932d,
                                                                            UNK_14338932c))))))) ==
             0x6b63617473796168) {
      pbStack_58[1] = 0xe;
    }
    else {
      puVar37 = (undefined1 *)&pbStack_58;
      if (CONCAT17(UNK_143389333,
                   CONCAT16(UNK_143389332,
                            CONCAT15(UNK_143389331,
                                     CONCAT14(UNK_143389330,
                                              CONCAT13(UNK_14338932f,
                                                       CONCAT12(UNK_14338932e,
                                                                CONCAT11(UNK_14338932d,UNK_14338932c
                                                                        ))))))) !=
          0x326e696b706d7570) goto LAB_141adb7c5;
      pbStack_58[1] = 0x26;
    }
    goto code_r0x000141adb891;
  case 100:
code_r0x000141adb7e2:
    *(uint *)(pbStack_58 + -0x77) = *(int *)(pbStack_58 + -0x77) + uVar17;
    puVar2 = (uint *)(pbStack_58 + -0x77);
    *puVar2 = *puVar2 >> 0x10 | *puVar2 << 0x10;
code_r0x000141adb7e9:
    *(byte **)(param_1 + 8) = pbVar18;
    bVar8 = 1;
    goto LAB_141adb893;
  case 0x65:
    if (CONCAT13(UNK_14338932f,CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c))) ==
        0x646f6f46) {
      pbStack_58[1] = 0;
    }
    else {
      bVar44 = CONCAT13(UNK_14338932f,CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c)))
               == 0x6c6f6f54;
code_r0x000141adb8e0:
      pbStack_58 = pbVar13;
      pbVar13 = pbStack_58;
      if (!bVar44) goto LAB_141adb91d;
      pbStack_58[1] = 1;
    }
    goto LAB_141adb913;
  case 0x66:
code_r0x000141adb84f:
    goto code_r0x000141adb891;
  case 0x67:
code_r0x000141adb9d4:
    if (bVar43) goto code_r0x000141adbbf0;
    goto LAB_141adbbe7;
  case 0x68:
    if ((int)pcVar41 ==
        CONCAT13(UNK_143389332,CONCAT12(UNK_143389331,CONCAT11(UNK_143389330,UNK_14338932f))) &&
        uVar17 == 0) {
      pbVar18 = (byte *)0x5;
code_r0x000141adb9fb:
      pbVar13[1] = (byte)pbVar18;
      *pbVar13 = 0;
      return pbVar13;
    }
    goto LAB_141adbbe7;
  case 0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6a:
    if (puVar21 != (ulonglong *)0x65 || UNK_143389334 != 0) {
LAB_141adb91d:
      uVar11 = pdb_142d8f140(param_2,pcVar41,&UNK_143388c48,4);
      *(undefined8 *)(pbVar13 + 8) = uVar11;
      *pbVar13 = 1;
      return pbVar13;
    }
    pbStack_58[1] = 3;
LAB_141adb913:
    *pbStack_58 = 0;
    return pbStack_58;
  case 0x6b:
code_r0x000141adb961:
                    /* WARNING: Could not recover jumptable at 0x000141adb96f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar13 = (byte *)(*(code *)(&UNK_1433894bc + *(int *)(&UNK_1433894bc + (longlong)pcVar41 * 4)))
                                ();
    return pbVar13;
  case 0x6c:
  case 0x6d:
  case 0x70:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
    *pbStack_58 = *pbStack_58 + bVar8;
    goto code_r0x000141adba59;
  case 0x6e:
    auVar58[0] = -(UNK_143389333 == UNK_1433883a0);
    auVar58[1] = -(UNK_143389334 == UNK_1433883a1);
    auVar58[2] = -(UNK_143389335 == UNK_1433883a2);
    auVar58[3] = -(UNK_143389336 == UNK_1433883a3);
    auVar58[4] = -(UNK_143389337 == UNK_1433883a4);
    auVar58[5] = -(UNK_143389338 == UNK_1433883a5);
    auVar58[6] = -(UNK_143389339 == UNK_1433883a6);
    auVar58[7] = -(UNK_14338933a == UNK_1433883a7);
    auVar58[8] = -(UNK_14338933b == UNK_1433883a8);
    auVar58[9] = -(UNK_14338933c == UNK_1433883a9);
    auVar58[10] = -(UNK_14338933d == UNK_1433883aa);
    auVar58[0xb] = -(UNK_14338933e == UNK_1433883ab);
    auVar58[0xc] = -(UNK_14338933f == UNK_1433883ac);
    auVar58[0xd] = -(UNK_143389340 == UNK_1433883ad);
    auVar58[0xe] = -(UNK_143389341 == UNK_1433883ae);
    auVar58[0xf] = -(UNK_143389342 == UNK_1433883af);
    auVar51[0] = -(auVar52[0] == UNK_143062230);
    auVar51[1] = -(auVar52[1] == UNK_143062231);
    auVar51[2] = -(auVar52[2] == UNK_143062232);
    auVar51[3] = -(auVar52[3] == UNK_143062233);
    auVar51[4] = -(auVar52[4] == UNK_143062234);
    auVar51[5] = -(auVar52[5] == UNK_143062235);
    auVar51[6] = -(auVar52[6] == UNK_143062236);
    auVar51[7] = -(auVar52[7] == UNK_143062237);
    auVar51[8] = -(auVar52[8] == UNK_143062238);
    auVar51[9] = -(auVar52[9] == UNK_143062239);
    auVar51[10] = -(auVar52[10] == UNK_14306223a);
    auVar51[0xb] = -(auVar52[0xb] == UNK_14306223b);
    auVar51[0xc] = -(auVar52[0xc] == UNK_14306223c);
    auVar51[0xd] = -(auVar52[0xd] == UNK_14306223d);
    auVar51[0xe] = -(auVar52[0xe] == UNK_14306223e);
    auVar51[0xf] = -(auVar52[0xf] == UNK_14306223f);
    auVar52 = auVar51 & auVar58;
code_r0x000141adba49:
    if ((ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000141adba59:
      pbStack_58[1] = 0xe;
      *pbStack_58 = 0;
      return pbStack_58;
    }
    goto LAB_141adbbe7;
  case 0x6f:
    if (CONCAT11(UNK_143389335,UNK_143389334) == 0x7374 && pbVar18 == (byte *)0x0) {
      pbStack_58[1] = 6;
      *pbStack_58 = 0;
      return pbStack_58;
    }
    goto LAB_141adbbe7;
  case 0x71:
    if (bVar44 || bVar43) goto code_r0x000141adb7e2;
    *(int *)pbStack_58 = *(int *)pbStack_58 + iVar40;
code_r0x000141adb891:
    bVar8 = 0;
    pbStack_58 = pbVar13;
LAB_141adb893:
    *pbStack_58 = bVar8;
code_r0x000141adb89c:
    return pbStack_58;
  case 0x76:
    goto code_r0x000141adb89c;
  case 0x77:
    *(char *)(uVar12 + 0x144811b2d) = *(char *)(uVar12 + 0x144811b2d) + -0x6d;
code_r0x000141adba80:
    *pbStack_58 = 0;
    return pbStack_58;
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x80:
    if (CONCAT13(UNK_143389337,CONCAT12(UNK_143389336,CONCAT11(UNK_143389335,UNK_143389334))) ==
        0x79745f65 &&
        pbVar18 ==
        (byte *)CONCAT17(UNK_143389333,
                         CONCAT16(UNK_143389332,
                                  CONCAT15(UNK_143389331,
                                           CONCAT14(UNK_143389330,
                                                    CONCAT13(UNK_14338932f,
                                                             CONCAT12(UNK_14338932e,
                                                                      CONCAT11(UNK_14338932d,
                                                                               UNK_14338932c))))))))
    {
      pbStack_58[1] = 8;
      *pbStack_58 = 0;
      return pbStack_58;
    }
    uVar12 = CONCAT17(UNK_143389333,
                      CONCAT16(UNK_143389332,
                               CONCAT15(UNK_143389331,
                                        CONCAT14(UNK_143389330,
                                                 CONCAT13(UNK_14338932f,
                                                          CONCAT12(UNK_14338932e,
                                                                   CONCAT11(UNK_14338932d,
                                                                            UNK_14338932c))))))) ^
             0x5f72657473616c70;
    goto code_r0x000141adbb27;
  case 0x7e:
    puVar38 = (undefined1 *)(ulonglong)(uint)(iRam0000000100002668 * 0x42334c74);
    uVar17 = uVar17 + *(int *)(&UNK_143389335 + uVar12);
code_r0x000141adbac5:
    pbVar18 = (byte *)(ulonglong)uVar17;
    puVar32 = (undefined8 *)(puVar38 + -8);
    *(undefined8 **)(puVar38 + -8) = unaff_RBP;
    cVar9 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar32 = puVar32 + -1;
      *puVar32 = *unaff_RBP;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    *(undefined1 **)(puVar38 + -0x48) = puVar38 + -8;
    *(int *)pbVar13 = *(int *)pbVar13 + (int)pbVar13;
    pbVar1 = pbVar13 + -0x47;
    bVar8 = *pbVar1;
    *pbVar1 = *pbVar1 + (byte)uVar17;
    if (CARRY1(bVar8,(byte)uVar17)) {
      *pbVar13 = *pbVar13 + (char)pbVar13;
code_r0x000141adbb3a:
      pbVar13[-0x47] = pbVar13[-0x47] + (char)pbVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined8 *)(puVar38 + -0x845f) = 0x48646e61;
    uVar12 = (ulonglong)(uVar17 ^ (uint)*(ulonglong *)param_2);
code_r0x000141adbad9:
    pbStack_58 = pbVar13;
    if (*(longlong *)((longlong)param_2 + 3) == 0x79745f646e616865 && uVar12 == 0) {
      pbVar18 = (byte *)CONCAT71((int7)(uVar12 >> 8),10);
      pbVar13[1] = 10;
code_r0x000141adbaef:
      pbVar18[0x148880a] = pbVar18[0x148880a] + (char)((ulonglong)param_2 >> 8);
      *pbVar13 = 0;
      return pbVar13;
    }
LAB_141adbbe7:
    pbStack_58[1] = 0xf;
    *pbStack_58 = 0;
    return pbStack_58;
  case 0x7f:
    uVar12 = (ulonglong)pbVar18 ^ *(ulonglong *)(&UNK_14338932c + in_FS_OFFSET);
    goto code_r0x000141adbad9;
  case 0x81:
    if (pcVar41 == *(char **)(&UNK_14338932f + in_FS_OFFSET) && pbVar18 == (byte *)0x0) {
code_r0x000141adbbf0:
      pbStack_58[1] = 2;
      *pbStack_58 = 0;
      return pbStack_58;
    }
    if (CONCAT17(UNK_143389336,
                 CONCAT16(UNK_143389335,
                          CONCAT15(UNK_143389334,
                                   CONCAT14(UNK_143389333,
                                            CONCAT13(UNK_143389332,
                                                     CONCAT12(UNK_143389331,
                                                              CONCAT11(UNK_143389330,UNK_14338932f))
                                                    ))))) == 0x7468676965685f68 &&
        CONCAT17(UNK_143389333,
                 CONCAT16(UNK_143389332,
                          CONCAT15(UNK_143389331,
                                   CONCAT14(UNK_143389330,
                                            CONCAT13(UNK_14338932f,
                                                     CONCAT12(UNK_14338932e,
                                                              CONCAT11(UNK_14338932d,UNK_14338932c))
                                                    ))))) == 0x6965685f68637261) {
      pbStack_58[1] = 4;
      *pbStack_58 = 0;
      return pbStack_58;
    }
    uVar12 = CONCAT17(UNK_143389333,
                      CONCAT16(UNK_143389332,
                               CONCAT15(UNK_143389331,
                                        CONCAT14(UNK_143389330,
                                                 CONCAT13(UNK_14338932f,
                                                          CONCAT12(UNK_14338932e,
                                                                   CONCAT11(UNK_14338932d,
                                                                            UNK_14338932c))))))) ^
             0x646e616865657266;
    goto code_r0x000141adbad9;
  case 0x82:
    goto code_r0x000141adbb3a;
  default:
    *pbStack_58 = 0;
    return pbStack_58;
  case 0x84:
    auVar53[0] = -(UNK_14338932c == UNK_14335a400);
    auVar53[1] = -(UNK_14338932d == UNK_14335a401);
    auVar53[2] = -(UNK_14338932e == UNK_14335a402);
    auVar53[3] = -(UNK_14338932f == UNK_14335a403);
    auVar53[4] = -(UNK_143389330 == UNK_14335a404);
    auVar53[5] = -(UNK_143389331 == UNK_14335a405);
    auVar53[6] = -(UNK_143389332 == UNK_14335a406);
    auVar53[7] = -(UNK_143389333 == UNK_14335a407);
    auVar53[8] = -(UNK_143389334 == UNK_14335a408);
    auVar53[9] = -(UNK_143389335 == UNK_14335a409);
    auVar53[10] = -(UNK_143389336 == UNK_14335a40a);
    auVar53[0xb] = -(UNK_143389337 == UNK_14335a40b);
    auVar53[0xc] = -(UNK_143389338 == UNK_14335a40c);
    auVar53[0xd] = -(UNK_143389339 == UNK_14335a40d);
    auVar53[0xe] = -(UNK_14338933a == UNK_14335a40e);
    auVar53[0xf] = -(UNK_14338933b == UNK_14335a40f);
    if ((ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf
                ) != 0xffff) goto LAB_141adbbe7;
    goto code_r0x000141adbbb7;
  case 0x86:
    out(*(int *)param_1,0x932c);
    uVar12 = 0;
    if (!bVar43) {
      if (bVar43) {
        pcVar5 = (code *)swi(3);
        pbVar13 = (byte *)(*pcVar5)();
        return pbVar13;
      }
      if (bVar44) {
        pcVar5 = (code *)swi(3);
        pbVar13 = (byte *)(*pcVar5)();
        return pbVar13;
      }
code_r0x000141adbbca:
      pbVar18 = (byte *)((ulonglong)(pbVar18 + 0x113fff3) ^ *(ulonglong *)param_2);
      pcVar41 = (char *)0x6e6f69737265765f;
      goto code_r0x000141adbbde;
    }
    goto code_r0x000141adbb52;
  case 0x87:
    *pbStack_58 = *pbStack_58 + bVar8;
    goto code_r0x000141adbbb7;
  case 0x8c:
code_r0x000141adbbde:
    pbStack_58 = pbVar13;
    if (pcVar41 == *(char **)((longlong)param_2 + 7) && pbVar18 == (byte *)0x0) {
      pbVar13[1] = 9;
      *pbVar13 = 0;
      return pbVar13;
    }
    goto LAB_141adbbe7;
  case 0x94:
    if (!bVar43) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar12 = (ulonglong)
             CONCAT13(UNK_14338932f,CONCAT12(UNK_14338932e,CONCAT11(UNK_14338932d,UNK_14338932c)));
code_r0x000141adbb27:
    if (CONCAT13(UNK_143389337,CONCAT12(UNK_143389336,CONCAT11(UNK_143389335,UNK_143389334))) ==
        0x6c656570 && uVar12 == 0) {
      pbStack_58[1] = 0xb;
      *pbStack_58 = 0;
      return pbStack_58;
    }
code_r0x000141adbb3b:
    uVar12 = *(ulonglong *)param_2 ^ 0x616c5f6472616f62;
    param_2 = (char *)((ulonglong)(uint)*(ulonglong *)((longlong)param_2 + 8) ^ 0x74756f79);
code_r0x000141adbb52:
    pbStack_58 = pbVar13;
    if (param_2 == (char *)0x0 && uVar12 == 0) {
code_r0x000141adbb5b:
      pbVar13[1] = 0xc;
      *pbVar13 = 0;
      return pbVar13;
    }
    goto LAB_141adbbe7;
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x9b:
    pcVar41 = (char *)CONCAT71(uVar14,*pbVar18);
    goto code_r0x000141adbfa9;
  case 0x98:
    pbStack_58[-0x39] = pbStack_58[-0x39] + cVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x99:
                    /* WARNING: Could not emulate address calculation at 0x000140f679a7 */
                    /* WARNING: Treating indirect jump as call */
    pbVar13 = (byte *)(**(code **)(*(longlong *)(&UNK_143389334 + uVar12) + 0x18))
                                (*(undefined8 *)pbVar18,pbStack_58,5,
                                 *(code **)(*(longlong *)(&UNK_143389334 + uVar12) + 0x18));
    return pbVar13;
  case 0x9a:
code_r0x000141adbfbd:
    *pbStack_58 = *pbStack_58 + (char)pbStack_58;
    pcVar41 = (char *)((longlong)unaff_RBP + (longlong)pbVar18 * 4 + -0x74);
    cVar15 = (char)pbVar18;
    *pcVar41 = *pcVar41 + cVar15;
    pcVar41 = (char *)((ulonglong)pbStack_58 & 0xffffffffffffffa0);
    *pcVar41 = *pcVar41 + (char)pcVar41;
    pcVar41 = (char *)((longlong)pbVar18 * 5 + -0x74);
    *pcVar41 = *pcVar41 + cVar15;
    pcVar41 = (char *)((ulonglong)pbStack_58 & 0xffffffffffffff80);
    *pcVar41 = *pcVar41 + (char)pcVar41;
    pcVar3 = (char *)((longlong)unaff_RBP + (longlong)pbVar18 * 4 + 0xd);
    cVar9 = *pcVar3;
    *pcVar3 = *pcVar3 + cVar15;
    if (SCARRY1(cVar9,cVar15) == *pcVar3 < '\0') {
      pcVar41 = (char *)(ulonglong)*pbVar18;
    }
    else {
      pbVar18 = (byte *)(ulonglong)((int)pbVar18 + 8);
    }
code_r0x000141adbfa9:
    puStack_28 = &UNK_1433892d8;
    uStack_38 = 0xb;
    pbStack_30 = pbVar18;
    pbVar13 = (byte *)pdb_140f67100(pcVar41,&UNK_143389232,0xb,&UNK_14338913d);
    return pbVar13;
  }
code_r0x000141adaf52:
  bVar8 = 0;
LAB_141adaf54:
  *param_1 = bVar8;
  return param_1;
code_r0x000141ad898e:
  *(ulonglong *)((longlong)param_2 + 0x28) = uVar10;
  uVar12 = uVar10;
  if (uVar10 == *(ulonglong *)((longlong)param_2 + 0x20)) goto LAB_141ad89a2;
  goto LAB_141ad897c;
code_r0x000141adae76:
  param_1[1] = 0xf;
  goto code_r0x000141adaf52;
code_r0x000141ad8a74:
  uVar12 = uVar12 + 1;
  bVar8 = *(byte *)((unaff_RBX[3] - 1) + uVar12);
  if ((0x20 < (ulonglong)bVar8) || ((0x100002600U >> ((ulonglong)bVar8 & 0x3f) & 1) == 0)) {
    if (bVar8 == 0x7d) {
      unaff_RBX[5] = uVar12;
code_r0x000141ad8ae0:
      bVar8 = 0;
      goto code_r0x000141ad8ae2;
    }
    uStack_38 = 10;
    goto code_r0x000141ad8aa3;
  }
  unaff_RBX[5] = uVar12;
  if (uVar12 == unaff_RBX[4]) {
code_r0x000141ad8a9a:
    uStack_38 = 3;
code_r0x000141ad8aa3:
    uVar11 = pdb_142d855a0(unaff_RBX,&uStack_38);
    *(undefined8 *)(param_1 + 8) = uVar11;
    bVar8 = 1;
code_r0x000141ad8ae2:
    *param_1 = bVar8;
    return param_1;
  }
  goto code_r0x000141ad8a74;
}

