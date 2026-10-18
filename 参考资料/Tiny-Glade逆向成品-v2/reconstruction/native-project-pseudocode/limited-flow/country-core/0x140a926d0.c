// VA 0x140a926d0, PDB extent 1096 bytes
// country_core::resources::session::SessionMeta::try_load_from_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143045785) overlaps instruction at (ram,0x000143045781)
    */
/* WARNING: Removing unreachable block (ram,0x000140a94ebc) */
/* WARNING: Removing unreachable block (ram,0x000140a953a5) */
/* WARNING: Removing unreachable block (ram,0x000140a94ed1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::session::SessionMeta::try_load_from_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 1096 */

uint * pdb_140a926d0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 uVar16;
  byte bVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 uVar21;
  uint *puVar22;
  char *pcVar23;
  undefined *puVar24;
  uint *puVar25;
  longlong lVar26;
  uint *puVar27;
  ushort uVar29;
  ulonglong uVar30;
  uint *puVar31;
  byte *pbVar32;
  uint *puVar33;
  undefined2 uVar34;
  uint uVar35;
  uint *puVar36;
  undefined1 *puVar37;
  char cVar39;
  short sVar40;
  char *unaff_RBX;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  undefined1 *puVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  undefined1 *puVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  undefined1 *puVar54;
  undefined1 *puVar55;
  undefined1 *puVar56;
  undefined1 *puVar57;
  undefined1 *puVar58;
  undefined1 *puVar59;
  undefined1 *puVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  undefined1 *puVar63;
  undefined1 *puVar64;
  undefined1 *puVar65;
  undefined1 *puVar66;
  undefined1 *puVar67;
  undefined1 *puVar68;
  undefined1 *puVar69;
  undefined1 *puVar70;
  undefined1 *puVar71;
  undefined1 *puVar72;
  undefined1 *puVar73;
  undefined1 *puVar74;
  undefined1 *puVar75;
  undefined1 *puVar76;
  undefined1 *puVar77;
  undefined1 *puVar78;
  undefined1 *puVar79;
  undefined1 *puVar80;
  undefined1 *puVar81;
  undefined1 *puVar82;
  undefined1 *puVar83;
  undefined1 *puVar84;
  undefined1 *puVar85;
  undefined1 *puVar86;
  undefined1 *puVar87;
  undefined1 *puVar88;
  undefined1 *puVar89;
  undefined1 *puVar90;
  undefined8 *puVar91;
  undefined1 *puVar92;
  undefined1 *puVar93;
  ulonglong uVar94;
  undefined8 *puVar95;
  uint uVar96;
  uint *puVar97;
  uint *puVar98;
  uint *puVar100;
  byte *pbVar101;
  ulonglong arg2;
  uint *puVar102;
  ulonglong unaff_R12;
  uint *unaff_R13;
  uint *unaff_R15;
  bool bVar103;
  bool bVar104;
  bool bVar105;
  byte bVar106;
  bool bVar107;
  byte *unaff_XMM6_Qa;
  uint *unaff_XMM6_Qb;
  byte *unaff_XMM7_Qa;
  uint *unaff_XMM7_Qb;
  byte *unaff_XMM8_Qa;
  uint *unaff_XMM8_Qb;
  undefined1 auStack_178 [56];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint auStack_f8 [22];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_68;
  undefined4 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined8 uStack_38;
  byte bVar28;
  byte bVar38;
  uint *puVar99;
  
  bVar106 = 0;
  puVar41 = auStack_178;
  puVar37 = auStack_178;
  puVar25 = auStack_f8;
  uStack_38 = 0xfffffffffffffffe;
  puVar98 = (uint *)auStack_140;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  pdb_140f55d10(puVar98);
  pdb_141707640(&lStack_88,puVar98,&uStack_a0);
  if (SBORROW8(0,lStack_88)) {
    *(undefined8 *)(param_1 + 2) = uStack_80;
    param_1[0] = 0;
    param_1[1] = 0x80000000;
    return param_1;
  }
  lStack_48 = lStack_88;
  uStack_90 = uStack_80;
  pdb_14164f410(auStack_140,uStack_80,uStack_78);
  puVar27 = (uint *)(ulonglong)auStack_140[0];
  if (auStack_140[0] == 6) {
    uVar21 = pdb_142dead00(uStack_138);
    *(undefined8 *)(param_1 + 2) = uVar21;
    param_1[0] = 0;
    param_1[1] = 0x80000000;
    goto code_r0x000140a9277e;
  }
  uStack_67 = auStack_140._1_4_;
  uStack_58 = uStack_130;
  uStack_50 = uStack_128;
  bStack_68 = auStack_140[0];
  uStack_60 = uStack_138;
  puVar102 = (uint *)&bStack_68;
  puVar22 = (uint *)pdb_141c0c220(&UNK_1430450db,5);
  if (puVar22 == (uint *)0x0) {
    puVar22 = _DAT_143cad928;
  }
  puVar36 = (uint *)&UNK_143045780;
  uVar30 = (ulonglong)*(int *)(&UNK_143045780 + (ulonglong)(byte)*puVar22 * 4);
  bVar103 = 0xfffffffebcfba87f < uVar30;
  bVar107 = SCARRY8(uVar30,0x143045780);
  puVar31 = (uint *)(&UNK_143045780 + uVar30);
  bVar105 = (longlong)puVar31 < 0;
  bVar104 = puVar31 == (uint *)0x0;
  puVar97 = puVar22;
  pcVar23 = unaff_RBX;
  puVar50 = auStack_178;
  puVar91 = (undefined8 *)auStack_178;
  puVar68 = auStack_178;
  puVar89 = auStack_178;
  puVar85 = auStack_178;
  puVar86 = auStack_178;
  puVar84 = auStack_178;
  puVar90 = auStack_178;
  puVar92 = auStack_178;
  puVar93 = auStack_178;
  puVar80 = auStack_178;
  puVar81 = auStack_178;
  puVar79 = auStack_178;
  puVar82 = auStack_178;
  puVar83 = auStack_178;
  puVar87 = auStack_178;
  puVar88 = auStack_178;
  puVar6 = auStack_178;
  puVar74 = auStack_178;
  puVar75 = auStack_178;
  puVar76 = auStack_178;
  puVar7 = auStack_178;
  puVar8 = auStack_178;
  puVar78 = auStack_178;
  puVar9 = auStack_178;
  puVar10 = auStack_178;
  puVar77 = auStack_178;
  puVar67 = auStack_178;
  puVar65 = auStack_178;
  puVar11 = auStack_178;
  puVar66 = auStack_178;
  puVar72 = auStack_178;
  puVar71 = auStack_178;
  puVar64 = auStack_178;
  puVar70 = auStack_178;
  puVar63 = auStack_178;
  puVar55 = auStack_178;
  puVar53 = auStack_178;
  puVar52 = auStack_178;
  puVar54 = auStack_178;
  puVar57 = auStack_178;
  puVar58 = auStack_178;
  puVar62 = auStack_178;
  puVar56 = auStack_178;
  puVar59 = auStack_178;
  puVar61 = auStack_178;
  puVar60 = auStack_178;
  puVar51 = auStack_178;
  puVar69 = auStack_178;
  puVar73 = auStack_178;
  puVar49 = auStack_178;
  puVar48 = auStack_178;
  puVar42 = auStack_178;
  puVar46 = auStack_178;
  puVar47 = auStack_178;
  puVar43 = auStack_178;
  puVar45 = auStack_178;
  puVar44 = auStack_178;
  puVar41 = auStack_178;
  puVar12 = auStack_178;
  puVar13 = auStack_178;
  puVar14 = auStack_178;
  puVar15 = auStack_178;
  puVar100 = param_1;
  puVar99 = puVar98;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)*puVar22) {
  case 0:
code_r0x000140a9283e:
    puVar41 = puVar15;
    uVar35 = (uint)puVar27;
    *(byte *)(puVar25 + 0x1c) = 0;
    break;
  case 1:
  case 2:
code_r0x000140a92813:
    puVar41 = puVar14;
    uVar35 = (uint)puVar27;
    uVar21 = *(undefined8 *)puVar22;
    uVar3 = *(undefined8 *)(puVar22 + 2);
    uVar5 = *(undefined8 *)(puVar22 + 6);
    *(undefined8 *)(puVar25 + 0x20) = *(undefined8 *)(puVar22 + 4);
    *(undefined8 *)(puVar25 + 0x22) = uVar5;
    *(undefined8 *)(puVar25 + 0x1c) = uVar21;
    *(undefined8 *)(puVar25 + 0x1e) = uVar3;
    break;
  case 3:
code_r0x000140a92844:
    puVar41 = puVar13;
    uVar35 = (uint)puVar27;
    *(undefined8 *)(puVar41 + -8) = 0x140a92854;
    pdb_140f60be0(puVar25 + 0x1e,puVar22 + 2);
    *(byte *)(puVar25 + 0x1c) = 3;
    break;
  case 4:
code_r0x000140a92827:
    puVar41 = puVar12;
    uVar35 = (uint)puVar27;
    *(undefined8 *)(puVar41 + -8) = 0x140a92837;
    pdb_1415e5d30(puVar25 + 0x1e,puVar22 + 2);
    *(byte *)(puVar25 + 0x1c) = 4;
    break;
  case 5:
code_r0x000140a9285b:
    uVar35 = (uint)puVar27;
    if (*(longlong *)(puVar22 + 6) == 0) {
      puVar25[0x1e] = 0;
      puVar25[0x1f] = 0;
      puVar25[0x22] = 0;
      puVar25[0x23] = 0;
    }
    else {
      lVar26 = *(longlong *)(puVar22 + 2);
      if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar41 + -8) = 0x140a929e7;
        pdb_142dc8150(&UNK_143359d48);
      }
      uVar21 = *(undefined8 *)(puVar22 + 4);
      *(undefined8 *)(puVar41 + -8) = 0x140a9287c;
      pdb_14192d190(puVar25 + 0x1e,lVar26,uVar21);
    }
    *(byte *)(puVar25 + 0x1c) = 5;
    break;
  case 6:
code_r0x000140a93d72:
    uVar16 = in((short)puVar36);
                    /* WARNING: Could not recover jumptable at 0x000140a93d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar98 = (uint *)(*(code *)(&UNK_143045798 +
                                *(int *)(&UNK_143045798 +
                                        CONCAT71((int7)((ulonglong)puVar22 >> 8),uVar16) * 4)))
                                ((byte *)((longlong)puVar31 + 1));
    return puVar98;
  case 7:
code_r0x000140a93ddf:
    puVar44 = puVar45;
  case 0xd:
code_r0x000140a93dd6:
    *(undefined **)(puVar44 + 0x20) = &UNK_143045358;
    pcVar23 = 
    "RSTSOIEOISOSDQTDNLDRIAPPCOMTweaker.NoTGSRTGSR2/home/h3/.cargo/git/checkouts/rapier-40bda2dbc2e76d6e/7b5ece7/crates/rapier3d/../../src/data/arena.rs"
    ;
code_r0x000140a93e2a:
    *(undefined **)(puVar44 + -8) = &UNK_140a93e40;
    puVar98 = (uint *)pdb_140f66090(puVar36,pcVar23,3,puVar44 + 0x30);
    return puVar98;
  case 8:
code_r0x000140a93db3:
    puVar24 = &UNK_143045384;
    goto code_r0x000140a93e4d;
  case 9:
code_r0x000140a93dbc:
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    *(byte *)((longlong)puVar22 + -0x73) = *(byte *)((longlong)puVar22 + -0x73) + (char)puVar31;
    puVar24 = (undefined *)(ulonglong)((int)puVar22 + 0x25b15cd);
    goto code_r0x000140a93e4d;
  case 10:
    goto code_r0x000140a93d9b;
  case 0xb:
code_r0x000140a93de8:
    puVar24 = &UNK_14304538d;
    goto code_r0x000140a93e4d;
  case 0xc:
code_r0x000140a93df1:
    puVar24 = &UNK_14304537b;
    goto code_r0x000140a93e4d;
  case 0xe:
code_r0x000140a93e2e:
    *(byte *)(puVar31 + -0x12) = (byte)puVar31[-0x12] ^ (byte)puVar22;
    uVar35 = (int)puVar22 + *puVar22;
    pcVar23 = (char *)(ulonglong)uVar35;
    *pcVar23 = *pcVar23 + (char)uVar35;
    puVar44 = puVar47;
    goto code_r0x000140a93e2a;
  case 0xf:
code_r0x000140a93da7:
    puVar24 = &UNK_143045399;
code_r0x000140a93e4d:
    uVar21 = 3;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar98 = (uint *)(**(code **)(*(longlong *)(puVar36 + 2) + 0x18))
                                (*(undefined8 *)puVar36,puVar24,uVar21,
                                 *(code **)(*(longlong *)(puVar36 + 2) + 0x18));
    return puVar98;
  case 0x10:
code_r0x000140a93dfa:
    if (bVar107 != bVar105) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined **)(puVar46 + 0x20) = &UNK_143045358;
    pcVar23 = 
    "APPCOMTweaker.NoTGSRTGSR2/home/h3/.cargo/git/checkouts/rapier-40bda2dbc2e76d6e/7b5ece7/crates/rapier3d/../../src/data/arena.rs"
    ;
    puVar44 = puVar46;
    goto code_r0x000140a93e2a;
  case 0x11:
code_r0x000140a93d8f:
    *(undefined **)(puVar42 + 0x20) = &UNK_143045358;
    puVar43 = puVar42;
code_r0x000140a93d9b:
    pcVar23 = 
    "SOFDHTDACRSTSOIEOISOSDQTDNLDRIAPPCOMTweaker.NoTGSRTGSR2/home/h3/.cargo/git/checkouts/rapier-40bda2dbc2e76d6e/7b5ece7/crates/rapier3d/../../src/data/arena.rs"
    ;
    puVar44 = puVar43;
    goto code_r0x000140a93e2a;
  case 0x12:
code_r0x000140a94533:
    bVar106 = (byte)puVar22;
    *(byte *)puVar98 = bVar106;
    *(byte *)puVar22 = (byte)*puVar22;
    *(byte *)((longlong)puVar22 + 0x1bfbd) = *(byte *)((longlong)puVar22 + 0x1bfbd) + bVar106;
    *(byte *)puVar22 = (byte)*puVar22 + bVar106;
    if ((byte)*puVar22 == 0) {
      return puVar22;
    }
    puVar25 = puVar25 + 0x14;
    goto code_r0x000140a94552;
  case 0x13:
code_r0x000140a9456b:
                    /* WARNING: Could not recover jumptable at 0x000140a94579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar98 = (uint *)(*(code *)(&UNK_1430457c8 + *(int *)(&UNK_1430457c8 + (longlong)puVar22 * 4)))
                                ();
    return puVar98;
  case 0x14:
code_r0x000140a9454f:
    puVar25 = (uint *)(ulonglong)((int)puVar25 + 0x50);
    puVar48 = puVar49;
code_r0x000140a94552:
    *(undefined **)(puVar48 + -8) = &UNK_140a94557;
    puVar22 = (uint *)pdb_1404c38c0(puVar25);
code_r0x000140a94541:
    return puVar22;
  case 0x15:
code_r0x000140a9455d:
    pcVar4 = (code *)swi(3);
    puVar98 = (uint *)(*pcVar4)();
    return puVar98;
  case 0x16:
    goto code_r0x000140a94541;
  case 0x17:
code_r0x000140a9468f:
    *(byte *)puVar98 = (byte)*puVar98 >> 1 | (byte)*puVar98 << 7;
    *(byte *)((longlong)puVar22 + -0x47) =
         *(byte *)((longlong)puVar22 + -0x47) + (char)puVar31 + ((char)(byte)*puVar98 < '\0');
    cVar39 = (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + cVar39;
    *(byte *)puVar22 = (byte)*puVar22 + cVar39;
    *(byte *)puVar22 = (byte)*puVar22 + cVar39;
    *unaff_RBX = *unaff_RBX + cVar39;
    *(uint **)((longlong)puVar22 + 0xbf) = puVar31;
    puVar22[8] = 8;
    puVar22[9] = 0;
    goto code_r0x000140a946ad;
  case 0x18:
code_r0x000140a946c7:
    puVar98 = (uint *)((longlong)puVar99 + 1);
    *(byte *)puVar99 = (byte)*param_1;
    cVar39 = (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + cVar39;
    *(byte *)puVar22 = (byte)*puVar22 + cVar39;
    *(byte *)puVar22 = (byte)*puVar22 + cVar39;
    cVar39 = (char)pcVar23 + cVar39;
    unaff_RBX = (char *)CONCAT71((int7)((ulonglong)pcVar23 >> 8),cVar39);
    *(byte **)(puVar50 + -8) = (byte *)((longlong)param_1 + 1);
    puVar68 = puVar50 + -0x28;
    puVar41 = puVar50 + -0x28;
    puVar65 = puVar50 + -0x28;
    puVar69 = puVar50 + -0x28;
    puVar73 = puVar50 + -0x28;
    puVar37 = puVar50 + -0x28;
    puVar63 = puVar50 + -0x28;
    uVar35 = *puVar31;
    puVar31 = (uint *)&UNK_1430457dc;
    uVar30 = (ulonglong)*(int *)(&UNK_1430457dc + (ulonglong)(byte)uVar35 * 4);
    bVar104 = 0xfffffffebcfba823 < uVar30;
    bVar105 = SCARRY8(uVar30,0x1430457dc);
    puVar22 = (uint *)(&UNK_1430457dc + uVar30);
    bVar103 = puVar22 == (uint *)0x0;
    bVar38 = (byte)((ulonglong)puVar36 >> 8);
    uVar34 = SUB82(puVar36,0);
    bVar17 = (byte)puVar22;
    iVar18 = (int)puVar22;
    uVar96 = (uint)puVar25;
    bVar28 = (byte)((ulonglong)puVar22 >> 8);
    puVar33 = puVar31;
    puVar89 = puVar50 + -0x28;
    puVar97 = puVar36;
    param_1 = puVar36;
    puVar100 = puVar98;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)uVar35) {
    case 0:
      puVar24 = &UNK_143045478;
      uVar21 = 0x13;
      break;
    case 1:
      puVar24 = &UNK_14304548b;
      uVar21 = 0x10;
      break;
    case 2:
      puVar24 = &UNK_14304549b;
      uVar21 = 0xf;
      break;
    case 3:
      puVar24 = &UNK_1430454aa;
      uVar21 = 0x14;
      break;
    case 4:
      puVar24 = &UNK_1430454be;
      uVar21 = 0xe;
      break;
    case 5:
      goto code_r0x000140a94d20;
    case 6:
      return (uint *)0xa;
    case 7:
      return (uint *)0x3;
    default:
      return (uint *)0xa;
    case 9:
      goto code_r0x000140a94d67;
    case 0x11:
      return puVar22;
    case 0x15:
      return (uint *)0x3;
    case 0x16:
      return (uint *)0x3;
    case 0x17:
      return (uint *)0x3;
    case 0x18:
      goto code_r0x000140a94d72;
    case 0x19:
      return puVar22;
    case 0x1a:
      puVar31 = (uint *)&UNK_1430457db;
      if (!bVar103) {
        UNK_1430457db = 0;
        return (uint *)0xa;
      }
    case 0x1f:
code_r0x000140a94d67:
      *puVar31 = *puVar31 + (int)puVar36;
code_r0x000140a94d72:
      return puVar22;
    case 0x1b:
      return (uint *)0xa;
    case 0x1c:
      return puVar22;
    case 0x1d:
      goto code_r0x000140a94d27;
    case 0x1e:
      return (uint *)0x0;
    case 0x20:
      return puVar22;
    case 0x21:
      return puVar22;
    case 0x22:
      goto code_r0x000140a94d21;
    case 0x25:
      return (uint *)0xb;
    case 0x26:
      return puVar22;
    case 0x27:
      goto code_r0x000140a94d27;
    case 0x33:
      return puVar22;
    case 0x43:
      puVar31 = (uint *)(ulonglong)((int)puVar36 + 0x430457dc);
      goto code_r0x000140a94d27;
    case 0x44:
      pbVar32 = (byte *)((longlong)puVar99 + 0x7141);
      pbVar32[0] = 0xdc;
      pbVar32[1] = 0x57;
      pbVar32[2] = 4;
      pbVar32[3] = 0x43;
      puVar65 = puVar50 + -0x28;
      goto code_r0x000140a94ffa;
    case 0x45:
      *(byte *)((longlong)puVar99 + 0x27) = *(byte *)((longlong)puVar99 + 0x27) | bVar38;
      puVar22 = *(uint **)((longlong)puVar99 + 0x7141);
      unaff_XMM8_Qa = &UNK_1430454cc;
      unaff_R12 = 1;
      bVar106 = 1;
      pbVar32 = unaff_XMM8_Qa;
      puVar97 = _UNK_142f8bbe8;
      if ((uint *)0xfffffffffffffffd < puVar22) goto code_r0x000140a94f17;
      unaff_R15 = *(uint **)((longlong)puVar99 + 0x7139);
      unaff_R13 = (uint *)((longlong)puVar22 + 2);
      if (*(uint **)(unaff_R15 + 4) < unaff_R13) goto code_r0x000140a94f17;
      uVar29 = *(ushort *)(*(longlong *)(unaff_R15 + 2) + (longlong)puVar22);
      *(uint **)((longlong)puVar99 + 0x7141) = unaff_R13;
      if (uVar29 != 0xd8ff) {
        puVar22 = (uint *)(ulonglong)(ushort)(uVar29 << 8 | uVar29 >> 8);
        unaff_XMM8_Qb = _UNK_142f8bbe8;
        goto code_r0x000140a94fb7;
      }
      puVar27 = unaff_R15 + 4;
      puVar22 = (uint *)0xd8ff;
      if (*(uint **)puVar27 <= unaff_R13) goto code_r0x000140a94f17;
      unaff_XMM6_Qa = &UNK_1430454cc;
      unaff_XMM8_Qa = &UNK_143045640;
      unaff_XMM7_Qa = &UNK_143045568;
      puVar25 = (uint *)0x0;
      unaff_XMM6_Qb = _UNK_142f8bbe8;
      unaff_XMM8_Qb = _UNK_142f8bbf8;
      unaff_XMM7_Qb = _UNK_142f8bc08;
      goto code_r0x000140a94faf;
    case 0x46:
    case 0x4c:
      *(byte *)puVar22 = (byte)*puVar22 + bVar17;
      puVar73 = puVar50 + -0x28;
      goto code_r0x000140a95298;
    case 0x47:
    case 0x48:
      goto code_r0x000140a95110;
    case 0x49:
      puVar36 = (uint *)((ulonglong)puVar98 & 0xffffffff);
      puVar73 = puVar50 + -0x28;
      goto code_r0x000140a95331;
    case 0x4a:
      UNK_1430457dc = (UNK_1430457dc - bVar17) - bVar104;
      goto code_r0x000140a94fcc;
    case 0x4b:
      goto code_r0x000140a951e1;
    case 0x4d:
      *(byte *)((longlong)puVar36 + 0xf) = *(byte *)((longlong)puVar36 + 0xf) | bVar17;
      uVar29 = CONCAT11(0x1c,cVar39);
      *(int *)(&UNK_143045765 + uVar30) = *(int *)(&UNK_143045765 + uVar30) + -0x430457dc;
      LOCK();
      iVar2 = *(int *)(&UNK_14304584d + uVar30);
      *(int *)(&UNK_14304584d + uVar30) = iVar18;
      puVar22 = (uint *)CONCAT44((int)((ulonglong)puVar22 >> 0x20),iVar2);
      UNLOCK();
      *(byte *)puVar22 = (byte)*puVar22 + (char)iVar2;
      puVar69 = puVar50 + -0x28;
      goto code_r0x000140a9517b;
    case 0x4e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4f:
      return (uint *)((ulonglong)unaff_RBX & 0xffffffff);
    case 0x50:
      *(ulonglong *)((longlong)unaff_R13 + 7) =
           *(ulonglong *)((longlong)unaff_R13 + 7) ^ (ulonglong)puVar36;
      goto code_r0x000140a951f1;
    case 0x51:
      puVar68 = puVar50 + -0x20;
      goto code_r0x000140a951d8;
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
      *(byte *)puVar22 = (byte)*puVar22 + bVar17;
      goto code_r0x000140a950df;
    case 0x5d:
      *(byte *)((longlong)puVar36 + -0x7d) = *(byte *)((longlong)puVar36 + -0x7d) + bVar28;
      *(byte *)puVar22 = (byte)*puVar22 + bVar17;
      *(byte *)puVar98 = *(byte *)puVar98 - 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5e:
      *(int *)((longlong)puVar25 + 0x1b) = *(int *)((longlong)puVar25 + 0x1b) << 1;
LAB_140a95650:
      *(byte *)puVar36 = 1;
      *(undefined **)(puVar36 + 2) = &UNK_1430454cc;
      puVar36[4] = 0xd;
      puVar36[5] = 0;
      return (uint *)&UNK_1430454cc;
    case 0x5f:
      unaff_RBX[0xf] = unaff_RBX[0xf] + bVar17;
      *(byte *)((longlong)puVar36 + -0x3f) = *(byte *)((longlong)puVar36 + -0x3f) + (bVar28 ^ 0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x60:
    case 0x66:
      LOCK();
      uVar19 = *(undefined4 *)(&UNK_14304584d + uVar30);
      *(undefined4 *)(&UNK_14304584d + uVar30) = 0x430457dc;
      pcVar23 = (char *)CONCAT44(1,uVar19);
      UNLOCK();
      *(byte *)puVar22 = (byte)*puVar22 + bVar17;
      puVar37 = puVar50 + -0x28;
code_r0x000140a9593e:
      sVar40 = *(short *)((longlong)unaff_R13 + (longlong)puVar27);
      *(uint **)(puVar98 + 0x1c52) = puVar22;
      param_1 = puVar36;
      if (sVar40 == 0x400) {
        if ((puVar22 < (uint *)0xfffffffffffffffe) && (puVar27 + 1 <= unaff_R15)) {
          uVar29 = *(ushort *)((longlong)unaff_R13 + (longlong)puVar22);
          *(uint **)(puVar98 + 0x1c52) = puVar27 + 1;
          puVar22 = (uint *)(ulonglong)(ushort)(uVar29 << 8 | uVar29 >> 8);
code_r0x000140a95981:
          *(uint **)(puVar98 + 0x1c68) = puVar22;
          *(uint **)(puVar98 + 0x1c6a) = puVar22;
          param_1 = puVar36;
code_r0x000140a959cc:
          unaff_R15 = *(uint **)(puVar98 + 0x1c50);
code_r0x000140a959d3:
          puVar27 = *(uint **)(puVar98 + 0x1c52);
          puVar25 = (uint *)0x0;
LAB_140a956b3:
          puVar25 = (uint *)(ulonglong)((int)puVar25 + 1);
          puVar36 = param_1;
          if (unaff_R15 <= puVar27) goto LAB_140a95650;
LAB_140a956ba:
          uVar30 = unaff_R12 & 0xffffffff;
          unaff_R13 = *(uint **)(puVar98 + 0x1c4e);
          puVar31 = (uint *)((longlong)puVar27 + 1);
          *(uint **)(puVar98 + 0x1c52) = puVar31;
          unaff_R12 = (ulonglong)*(byte *)((longlong)unaff_R13 + (longlong)puVar27);
          bVar17 = *(byte *)((longlong)unaff_R13 + (longlong)puVar27) + 1;
          param_1 = puVar36;
code_r0x000140a956da:
          puVar36 = (uint *)(ulonglong)(1 < bVar17);
          cVar39 = (char)uVar30;
          puVar41 = puVar37;
          puVar27 = puVar31;
          if (cVar39 != -1 || 1 < bVar17) goto LAB_140a956af;
LAB_140a956f0:
          puVar36 = param_1;
          if (unaff_R15 <= puVar31) goto LAB_140a95650;
          puVar22 = (uint *)(unaff_R12 & 0xffffffff);
          puVar27 = puVar31;
code_r0x000140a956fc:
          cVar39 = (char)puVar22;
          puVar31 = (uint *)((longlong)puVar27 + 1);
          *(uint **)(puVar98 + 0x1c52) = puVar31;
          unaff_R12 = (ulonglong)*(byte *)((longlong)unaff_R13 + (longlong)puVar27);
          uVar35 = *(byte *)((longlong)unaff_R13 + (longlong)puVar27) + 1;
          puVar36 = (uint *)(ulonglong)uVar35;
          puVar41 = puVar37;
          puVar27 = puVar31;
          if ((byte)uVar35 < 2) goto LAB_140a956f0;
LAB_140a956af:
          puVar37 = puVar41;
          if (cVar39 != -1) goto LAB_140a956b3;
          puVar31 = (uint *)(unaff_R12 & 0xffffffff);
          *(undefined8 *)(puVar41 + -8) = 0x140a95724;
          puVar22 = (uint *)pdb_140a94d10(puVar31);
          bVar17 = (byte)puVar22;
          if (bVar17 == 0xc) goto code_r0x000140a95728;
          if ((3 < (int)puVar25) &&
             ((*(byte *)((longlong)puVar98 + 0x711a) != 0 ||
               *(byte *)((longlong)puVar98 + 0x711b) != 0 ||
              (puVar31 = (uint *)0x0, *(byte *)((longlong)puVar98 + 0x7119) != 0)))) {
            *(byte *)param_1 = 1;
            *(undefined **)(param_1 + 2) = &UNK_143045640;
            param_1[4] = 0x2a;
            param_1[5] = 0;
            return (uint *)&UNK_143045640;
          }
          puVar41[0x56] = bVar17;
          puVar41[0x57] = (char)puVar36;
          if (10 < bVar17) {
LAB_140a958cc:
            pcVar23 = (char *)0x1;
            if (((uint *)0xfffffffffffffffd < puVar27) ||
               (puVar36 = (uint *)((longlong)puVar27 + 2), unaff_R15 < puVar36)) goto LAB_140a95c82;
            goto code_r0x000140a958e5;
          }
code_r0x000140a957ae:
          bVar17 = (byte)puVar36;
          pcVar23 = (char *)CONCAT71((int7)((ulonglong)puVar31 >> 8),1);
          param_4 = &UNK_143045954;
          puVar102 = (uint *)(&UNK_143045954 +
                             *(int *)(&UNK_143045954 + ((ulonglong)puVar22 & 0xff) * 4));
          bVar103 = (longlong)puVar102 < 0;
          puVar31 = param_1;
          puVar97 = puVar98;
          bVar104 = bVar103;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((ulonglong)puVar22 & 0xff) {
          case 0:
            goto code_r0x000140a957c5;
          case 1:
            puVar31 = (uint *)(puVar37 + 0x30);
            goto code_r0x000140a95996;
          case 2:
          case 8:
            *(undefined1 **)(puVar37 + 0x30) = puVar37 + 0x56;
            *(code **)(puVar37 + 0x38) = pdb_140a93d70;
            *(undefined8 *)(puVar37 + -8) = 0x140a95aed;
            pdb_140f60760(puVar37 + 0xa8,&UNK_14304557e,puVar37 + 0x30);
            unaff_RBX = *(char **)(puVar37 + 0xa8);
            pcVar23 = (char *)0x0;
            unaff_XMM7_Qb = *(uint **)(puVar37 + 0xb8);
            unaff_XMM7_Qa = *(byte **)(puVar37 + 0xb0);
            goto LAB_140a95c82;
          case 3:
          case 4:
            goto LAB_140a958cc;
          case 5:
            unaff_RBX = &UNK_143045568;
            unaff_XMM7_Qa = unaff_XMM6_Qa;
            unaff_XMM7_Qb = unaff_XMM6_Qb;
            goto LAB_140a95c82;
          case 6:
            *(undefined8 *)(puVar37 + -8) = 0x140a95b68;
            puVar22 = (uint *)pdb_141c23610(puVar37 + 0x30,puVar98);
            bVar17 = puVar37[0x30];
            if (bVar17 == 0xd) goto LAB_140a95b72;
            goto code_r0x000140a95b81;
          case 7:
            *(undefined8 *)(puVar37 + -8) = 0x140a959ad;
            pdb_141c22560(puVar37 + 0x30,puVar98);
            puVar36 = param_1;
            goto code_r0x000140a959be;
          case 9:
            if (((uint *)0xfffffffffffffffd < puVar27) ||
               (puVar22 = (uint *)((longlong)puVar27 + 2), puVar36 = param_1, unaff_R15 < puVar22))
            goto LAB_140a95c82;
            goto code_r0x000140a9593e;
          case 10:
            goto code_r0x000140a957e5;
          case 0xb:
            *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
            goto code_r0x000140a957d7;
          case 0xc:
            uVar35 = (uint)puVar22 | 0x1b5850f;
            *(char *)(ulonglong)uVar35 = *(char *)(ulonglong)uVar35 + (char)uVar35;
            goto code_r0x000140a959cc;
          case 0xd:
            pcVar23[-0x77] = pcVar23[-0x77] ^ 1;
            goto code_r0x000140a959b1;
          default:
            goto code_r0x000140a958a2;
          case 0x19:
            goto code_r0x000140a959d3;
          case 0x1a:
          case 0x1b:
          case 0x20:
          case 0x40:
            goto code_r0x000143045954;
          case 0x1c:
          case 0x3f:
          case 0x41:
          case 0x42:
            pbVar32 = (byte *)((longlong)puVar25 + (longlong)puVar98 * 8 + -0x25affc3);
            *pbVar32 = *pbVar32 + 1;
            bVar103 = (char)*pbVar32 < '\0';
            break;
          case 0x1d:
          case 0x1e:
            goto code_r0x000143045956;
          case 0x1f:
            goto code_r0x000143045957;
          case 0x21:
          case 0x26:
            goto code_r0x000143045958;
          case 0x22:
            pbVar32 = (byte *)((longlong)puVar25 + -0x5afe9503);
            *pbVar32 = *pbVar32 + (char)((ulonglong)puVar22 >> 8);
            bVar103 = (char)*pbVar32 < '\0';
            goto code_r0x00014304595f;
          case 0x23:
          case 0x24:
            puVar97 = puVar98 + 1;
            puVar31 = param_1 + 1;
            *puVar98 = *param_1;
          case 0x25:
            bVar106 = 1;
            break;
          case 0x27:
          case 0x2c:
            break;
          case 0x28:
            goto code_r0x00014304595d;
          case 0x29:
          case 0x2a:
            goto code_r0x00014304595e;
          case 0x2b:
            goto code_r0x00014304595f;
          case 0x2d:
          case 0x32:
            goto code_r0x000143045960;
          case 0x2e:
            goto code_r0x000143045961;
          case 0x2f:
          case 0x30:
            goto code_r0x000143045962;
          case 0x31:
            goto code_r0x000143045963;
          case 0x33:
          case 0x38:
            goto code_r0x000143045964;
          case 0x34:
            goto code_r0x000143045965;
          case 0x35:
          case 0x36:
            goto code_r0x000143045966;
          case 0x37:
            goto code_r0x000143045967;
          case 0x39:
          case 0x3e:
            goto code_r0x000143045968;
          case 0x3a:
            goto code_r0x000143045969;
          case 0x3b:
          case 0x3c:
            *puVar98 = *param_1;
          case 0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar95 = (undefined8 *)(puVar37 + -8);
          puVar37 = puVar37 + -8;
          *puVar95 = 1;
code_r0x00014304595e:
          puVar98 = puVar97 + (ulonglong)bVar106 * -2 + 1;
          param_1 = puVar31 + (ulonglong)bVar106 * -2 + 1;
          *puVar97 = *puVar31;
code_r0x00014304595f:
          bVar106 = 1;
code_r0x000143045960:
          puVar31 = param_1;
          puVar97 = puVar98;
          bVar104 = false;
          if (bVar103) {
code_r0x000143045961:
                    /* WARNING: Could not recover jumptable at 0x000143045961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar98 = (uint *)(**(code **)(puVar25 + (longlong)puVar98 * 2 + -0x96c022))();
            return puVar98;
          }
code_r0x000143045962:
          bVar103 = bVar104;
          puVar98 = (uint *)((longlong)puVar97 + (ulonglong)bVar106 * -2 + 1);
          param_1 = (uint *)((longlong)puVar31 + (ulonglong)bVar106 * -2 + 1);
          *(byte *)puVar97 = (byte)*puVar31;
          goto code_r0x000143045963;
        }
      }
      else {
        *(undefined8 *)(puVar37 + -8) = 0x140a95bf5;
        pdb_14007ee60();
        unaff_RBX = (char *)0x1c;
        *(undefined8 *)(puVar37 + -8) = 0x140a95c09;
        unaff_XMM7_Qa = pub_1406abab0(0x1c,1);
        uVar21 = _UNK_1430455d9;
        if (unaff_XMM7_Qa == (byte *)0x0) {
code_r0x000140a95ce2:
          *(undefined8 *)(puVar37 + -8) = 0x140a95cf1;
          pdb_142dc7e2a(1,0x1c);
          pcVar4 = (code *)swi(3);
          puVar98 = (uint *)(*pcVar4)();
          return puVar98;
        }
        *(ulonglong *)(unaff_XMM7_Qa + 0xc) = CONCAT44(_UNK_1430455d5,_UNK_1430455d1);
        *(undefined8 *)(unaff_XMM7_Qa + 0x14) = uVar21;
        uVar21 = CONCAT44(_UNK_1430455d1,_UNK_1430455cd);
        *(undefined8 *)unaff_XMM7_Qa = _UNK_1430455c5;
        *(undefined8 *)(unaff_XMM7_Qa + 8) = uVar21;
        pcVar23 = (char *)0x0;
        unaff_XMM7_Qb = _UNK_142f8bc28;
      }
LAB_140a95c82:
      *(byte *)param_1 = (byte)pcVar23;
      uVar35 = *(uint *)(puVar37 + 0x28);
      uVar96 = *(uint *)(puVar37 + 0x2b);
      *(uint *)((longlong)param_1 + 1) = uVar35;
      param_1[1] = uVar96;
      *(char **)(param_1 + 2) = unaff_RBX;
      *(byte **)(param_1 + 4) = unaff_XMM7_Qa;
      *(uint **)(param_1 + 6) = unaff_XMM7_Qb;
      return (uint *)(ulonglong)uVar35;
    case 0x61:
    case 0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 99:
      UNK_1430457dc = UNK_1430457dc + bVar38;
      in(uVar34);
      puVar37 = puVar50 + -0x28;
      goto code_r0x000140a959d3;
    case 100:
      *(undefined8 *)(puVar50 + -0x30) = 0x140a959ee;
      pdb_141c20350(&UNK_1430457dc,puVar98);
      puVar37 = puVar50 + -0x28;
      goto code_r0x000140a959be;
    case 0x65:
      uVar35 = uVar96 << 8 | uVar96 >> 0x18;
      puVar25 = (uint *)(ulonglong)uVar35;
      uVar29 = (ushort)uVar35;
      *(ushort *)(puVar50 + 0x36) = uVar29;
      puVar33 = puVar22;
      if (uVar29 < 2) {
        *(undefined1 **)(puVar50 + 8) = puVar50 + 0x36;
        *(code **)(puVar50 + 0x10) = pdb_140f71140;
        *(undefined8 *)(puVar50 + -0x30) = 0x140a95c68;
        pdb_140f60760(puVar50 + 0x68,&UNK_143045600,puVar50 + 8);
        unaff_RBX = *(char **)(puVar50 + 0x68);
        pcVar23 = (char *)0x0;
        unaff_XMM7_Qa = *(byte **)(puVar50 + 0x70);
        unaff_XMM7_Qb = *(uint **)(puVar50 + 0x78);
        goto LAB_140a95c82;
      }
    case 0x6b:
      puVar31 = (uint *)((longlong)puVar33 + 5);
      if ((uint *)0xfffffffffffffffa < puVar33) {
        puVar31 = (uint *)0xffffffffffffffff;
      }
code_r0x000140a9584c:
      uVar29 = (ushort)puVar25;
      puVar37 = puVar50 + -0x28;
      if (unaff_R15 < puVar31) goto code_r0x000140a958ae;
      puVar37 = puVar50 + -0x28;
      if (uVar29 < 6) goto code_r0x000140a958ae;
      puVar50[0x34] = 0;
      *(undefined4 *)(puVar50 + 0x30) = 0;
code_r0x000140a95864:
      puVar37 = puVar50 + 0x30;
      *(undefined8 *)(puVar50 + -0x30) = 0x140a9587b;
      lVar26 = pdb_14091b8c0((byte *)((longlong)puVar99 + 0x7139),puVar37,5);
      if (lVar26 == 0) {
        puVar37 = puVar50 + -0x28;
        if (*(int5 *)(puVar50 + 0x30) != 0x31495641) goto code_r0x000140a958a4;
        *(byte *)((longlong)puVar99 + 0x71c9) = 1;
        puVar37 = puVar50 + -0x28;
        goto code_r0x000140a958a4;
      }
      *(longlong *)(puVar50 + 8) = lVar26;
      *(undefined1 **)(puVar50 + 0x10) = puVar37;
      *(undefined **)(puVar50 + -8) = &UNK_1430455e8;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar50 + -0x30) = 0x140a95cd3;
      pdb_142dc8170(&UNK_143045328,0x2b,puVar50 + 8,&UNK_143045308);
    case 0x67:
      *(int *)((longlong)puVar99 + 0x143045793) = *(int *)((longlong)puVar99 + 0x143045793) + iVar18
      ;
      pbVar32 = (byte *)((longlong)puVar25 + 0x50c115f7d);
      *pbVar32 = *pbVar32 >> 1 | *pbVar32 << 7;
      *(int *)(unaff_RBX + 2) = *(int *)(unaff_RBX + 2) + (int)unaff_RBX;
      puVar37 = puVar50 + -0x28;
      goto code_r0x000140a957ae;
    case 0x68:
      goto code_r0x000140a9566d;
    case 0x69:
      (&UNK_1430457a3)[uVar30] = (&UNK_1430457a3)[uVar30] | 0xdc;
      cRam0000000129a95667 = cRam0000000129a95667 + (char)param_4;
      pcVar23 = (char *)((ulonglong)(iVar18 + *puVar22) - 0x75);
      *pcVar23 = *pcVar23 + -0x24;
code_r0x000140a9566d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x6a:
      goto code_r0x000140a9584c;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
      goto code_r0x000140a95728;
    case 0x77:
      unaff_RBX = (char *)CONCAT62((int6)((ulonglong)pcVar23 >> 0x10),
                                   CONCAT11((char)((ulonglong)pcVar23 >> 8) + bVar17,cVar39));
      pcVar23 = (char *)((ulonglong)puVar22 & 0xffffffffffffff58);
      *pcVar23 = *pcVar23 + (char)pcVar23;
      *pcVar23 = *pcVar23 + (char)pcVar23;
      goto code_r0x000140a95864;
    case 0x78:
    case 0x79:
    case 0x7e:
    case 0x9e:
      goto code_r0x0001430457e4;
    case 0x7a:
    case 0x9d:
    case 0x9f:
    case 0xa0:
      out(uVar34,iVar18);
    case 0x7b:
    case 0x7c:
      puVar100 = (uint *)((longlong)puVar99 + 2);
      puVar97 = (uint *)((longlong)puVar36 + 1);
      *(byte *)puVar98 = (byte)*puVar36;
code_r0x0001430457df:
      bVar106 = 1;
code_r0x0001430457e0:
      out(uVar34,iVar18);
    case 0x81:
    case 0x82:
code_r0x0001430457e2:
      puVar98 = (uint *)((longlong)puVar100 + (ulonglong)bVar106 * -2 + 1);
      puVar36 = (uint *)((longlong)puVar97 + (ulonglong)bVar106 * -2 + 1);
      *(byte *)puVar100 = (byte)*puVar97;
code_r0x0001430457e3:
      bVar106 = 1;
code_r0x0001430457e4:
      puVar25 = (uint *)(ulonglong)(uVar96 - (int)puVar98);
      puVar97 = puVar36;
      puVar100 = puVar98;
code_r0x0001430457e6:
      puVar98 = (uint *)((longlong)puVar100 + (ulonglong)bVar106 * -2 + 1);
      puVar36 = (uint *)((longlong)puVar97 + (ulonglong)bVar106 * -2 + 1);
      *(byte *)puVar100 = (byte)*puVar97;
code_r0x0001430457e7:
      bVar106 = 1;
code_r0x0001430457e8:
      bVar104 = (uint)puVar98 < (uint)puVar25;
      puVar97 = puVar36;
      puVar100 = puVar98;
code_r0x0001430457ea:
      puVar98 = (uint *)((longlong)puVar100 + (ulonglong)bVar106 * -2 + 1);
      puVar36 = (uint *)((longlong)puVar97 + (ulonglong)bVar106 * -2 + 1);
      *(byte *)puVar100 = (byte)*puVar97;
    case 0x8f:
      do {
        bVar106 = 1;
code_r0x0001430457ec:
        uVar35 = (uint)bVar104;
        uVar20 = (uint)puVar22;
        uVar96 = uVar20 + 0xbf025b11;
        bVar104 = uVar20 < 0x40fda4ef || uVar96 < uVar35;
        bVar105 = SBORROW4(uVar20,0x40fda4ef) != SBORROW4(uVar96,uVar35);
        puVar22 = (uint *)(ulonglong)(uVar96 - uVar35);
        bVar103 = uVar96 - uVar35 == 0;
        puVar97 = puVar36;
        puVar100 = puVar98;
code_r0x0001430457f1:
        bVar104 = !bVar104;
code_r0x0001430457f2:
        while( true ) {
          puVar98 = (uint *)((longlong)puVar100 + (ulonglong)bVar106 * -2 + 1);
          puVar36 = (uint *)((longlong)puVar97 + (ulonglong)bVar106 * -2 + 1);
          *(byte *)puVar100 = (byte)*puVar97;
code_r0x0001430457f3:
          if (bVar104 || bVar103) break;
          puVar100 = (uint *)((longlong)puVar98 + -1);
          puVar97 = (uint *)((longlong)puVar36 + -1);
          *(byte *)puVar98 = (byte)*puVar36;
          if (bVar105) {
            *(byte *)puVar100 = *(byte *)puVar97;
            *(byte *)((longlong)puVar98 + -2) = *(byte *)((longlong)puVar36 + -2);
            pbVar32 = (byte *)((ulonglong)puVar25 & 0xffffffff);
            *(byte *)((longlong)puVar98 + -3) = *pbVar32;
            *(byte *)(puVar98 + -1) = pbVar32[-1];
            *(byte *)((longlong)puVar98 + -5) = pbVar32[-2];
            *(byte *)((longlong)puVar98 + -6) = pbVar32[-3];
            *(byte *)((longlong)puVar98 + -7) = pbVar32[-4];
            *(byte *)(puVar98 + -2) = pbVar32[-5];
            *(byte *)((longlong)puVar98 + -9) = pbVar32[-6];
            *(byte *)((longlong)puVar98 + -10) = pbVar32[-7];
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x0001430457ef:
          bVar106 = 1;
code_r0x0001430457f0:
          bVar104 = bVar104 == false;
        }
      } while( true );
    case 0x7d:
      goto code_r0x0001430457df;
    case 0x7f:
    case 0x84:
      goto code_r0x0001430457e0;
    case 0x80:
      out(uVar34,iVar18);
      goto code_r0x0001430457e2;
    case 0x83:
      goto code_r0x0001430457e3;
    case 0x85:
    case 0x8a:
      goto code_r0x0001430457e4;
    case 0x86:
      out(uVar34,iVar18);
    case 0x87:
    case 0x88:
      goto code_r0x0001430457e6;
    case 0x89:
      goto code_r0x0001430457e7;
    case 0x8b:
    case 0x90:
      goto code_r0x0001430457e8;
    case 0x8c:
      out(uVar34,iVar18);
    case 0x8d:
    case 0x8e:
      goto code_r0x0001430457ea;
    case 0x91:
    case 0x96:
      goto code_r0x0001430457ec;
    case 0x92:
      out(uVar34,iVar18);
    case 0x93:
    case 0x94:
      puVar100 = (uint *)((longlong)puVar99 + 2);
      puVar97 = (uint *)((longlong)puVar36 + 1);
      *(byte *)puVar98 = (byte)*puVar36;
    case 0x95:
      goto code_r0x0001430457ef;
    case 0x97:
    case 0x9c:
      goto code_r0x0001430457f0;
    case 0x98:
      goto code_r0x0001430457f1;
    case 0x99:
    case 0x9a:
      goto code_r0x0001430457f2;
    case 0x9b:
      goto code_r0x0001430457f3;
    }
    *(undefined8 *)(puVar50 + -0x30) = 0x140a94734;
    puVar24 = (undefined *)pdb_140dc6290(puVar24,uVar21);
    goto pdb_140f679a0;
  case 0x19:
code_r0x000140a946ab:
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    goto code_r0x000140a946ad;
  case 0x1a:
code_r0x000140a946b9:
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    *(byte *)((longlong)param_1 + -0x39) =
         *(byte *)((longlong)param_1 + -0x39) + (char)((ulonglong)puVar22 >> 8);
    *(byte *)puVar22 = (byte)*puVar22;
    goto code_r0x000140a946ad;
  case 0x1b:
code_r0x000140a9469d:
    *(byte *)(puVar98 + 0x12000000) = (byte)((ulonglong)unaff_RBX >> 8);
    puVar22[8] = 8;
code_r0x000140a946ad:
    puVar22[10] = 0;
    puVar22[0xb] = 0;
    puVar22[0xc] = 0;
    *(undefined2 *)(puVar22 + 0x2a) = 0;
    puVar22[0x29] = 0;
    return puVar22;
  case 0x1c:
code_r0x000140a94cc0:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar51 + -8) = 0x140a94cc5;
    pdb_142dc7e11();
  case 0x1d:
code_r0x000140a94cf6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1e:
code_r0x000140a94cf1:
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    puVar60 = puVar61;
    goto code_r0x000140a94cec;
  default:
code_r0x000140a94cdc:
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    puVar55 = puVar56;
    goto DAT_140a94ce0;
  case 0x20:
code_r0x000140a94d0b:
    pcVar4 = (code *)swi(3);
    puVar98 = (uint *)(*pcVar4)();
    return puVar98;
  case 0x28:
code_r0x000140a94d0e:
    pcVar4 = (code *)swi(3);
    puVar98 = (uint *)(*pcVar4)();
    return puVar98;
  case 0x2c:
    goto code_r0x000140a94ce7;
  case 0x2d:
code_r0x000140a94cfb:
    pcVar4 = *(code **)(puVar22 + 0x83120d2);
    *(undefined8 *)(puVar62 + -8) = 0x140a94d01;
    puVar98 = (uint *)(*pcVar4)();
    return puVar98;
  case 0x2e:
code_r0x000140a94d00:
    *(byte *)((longlong)puVar98 + 0x5e) = *(byte *)((longlong)puVar98 + 0x5e) & (byte)unaff_RBX;
    return puVar22;
  case 0x2f:
code_r0x000140a94d16:
    puVar22 = (uint *)((longlong)puVar22 + -1);
    *puVar22 = *puVar22 << 0x1f | *puVar22 >> 1;
    *(int *)(unaff_RBX + 0x76773ef9) = *(int *)(unaff_RBX + 0x76773ef9) + 1;
    goto code_r0x000140a94d20;
  case 0x30:
code_r0x000140a94d11:
    puVar22 = (uint *)0xc;
    puVar31 = (uint *)(ulonglong)((int)puVar31 - 0xc0);
  case 0x38:
code_r0x000140a94d1b:
    bVar103 = (uint)puVar31 < 0x3e;
    bVar104 = (uint)puVar31 == 0x3e;
code_r0x000140a94d1e:
    if (!bVar103 && !bVar104) {
      return puVar22;
    }
code_r0x000140a94d20:
    puVar36 = (uint *)&UNK_1430457f0;
code_r0x000140a94d27:
                    /* WARNING: Could not recover jumptable at 0x000140a94d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar98 = (uint *)(*(code *)((longlong)(int)puVar36[(longlong)puVar31] + (longlong)puVar36))
                                ((code *)((longlong)(int)puVar36[(longlong)puVar31] +
                                         (longlong)puVar36));
    return puVar98;
  case 0x31:
    goto code_r0x000140a94cd3;
  case 0x32:
    goto code_r0x000140a94cec;
  case 0x33:
code_r0x000140a94cdd:
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    *(byte *)((longlong)puVar22 + -0x77) = *(byte *)((longlong)puVar22 + -0x77) + (char)puVar31;
    puVar58 = puVar57;
  case 0x3c:
code_r0x000140a94ce2:
    puVar55 = puVar58 + -8;
    *(undefined1 **)(puVar58 + -8) = puVar58;
    goto DAT_140a94ce0;
  case 0x34:
code_r0x000140a94ccd:
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x000140a94cd3:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  case 0x35:
code_r0x000140a94d05:
    pcVar4 = (code *)swi(3);
    puVar98 = (uint *)(*pcVar4)();
    return puVar98;
  case 0x36:
code_r0x000140a94d08:
    pcVar4 = (code *)swi(3);
    puVar98 = (uint *)(*pcVar4)();
    return puVar98;
  case 0x37:
    goto code_r0x000140a94d1e;
  case 0x39:
LAB_140a94cc6:
    puVar31 = (uint *)0x8;
    puVar36 = (uint *)0x28;
    puVar54 = puVar52;
  case 0x5a:
code_r0x000140a94cd0:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar54 + -8) = 0x140a94cd5;
    pdb_142dc7e11(puVar31,puVar36);
  case 0x3d:
code_r0x000140a94d21:
    puVar36 = (uint *)0x430457f0;
    goto code_r0x000140a94d27;
  case 0x3e:
code_r0x000140a94cc8:
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    *(byte *)(puVar36 + 10) = (byte)puVar36[10] + (char)((ulonglong)unaff_RBX >> 8);
    puVar54 = puVar53;
    goto code_r0x000140a94cd0;
  case 0x4a:
code_r0x000140a94cd8:
DAT_140a94ce0:
    *(uint **)(puVar55 + 0x10) = puVar36;
    *(uint **)(puVar55 + -8) = puVar25;
    puVar59 = puVar55 + -0x10;
    *(uint **)(puVar55 + -0x10) = param_1;
code_r0x000140a94ce7:
    *(uint **)(puVar59 + -8) = puVar98;
    puVar60 = puVar59 + -0x28;
code_r0x000140a94cec:
    *(undefined8 *)(puVar60 + -8) = 0x140a94cfc;
    puVar98 = (uint *)pdb_14007ee90(puVar36 + 8);
    return puVar98;
  case 0x5b:
code_r0x000140a94fa7:
    in(CONCAT11((char)((ulonglong)puVar36 >> 8) + (byte)*puVar31,(char)puVar36));
    puVar36 = param_1;
code_r0x000140a94faf:
    unaff_RBX = (char *)0x0;
    puVar65 = puVar63;
    param_1 = puVar36;
code_r0x000140a94ffa:
    iVar18 = (int)unaff_RBX;
    bVar106 = (byte)unaff_R12;
    lVar26 = *(longlong *)(unaff_R15 + 2);
    puVar31 = (uint *)((longlong)unaff_R13 + 1);
    *(uint **)(puVar98 + 0x1c50) = puVar31;
    puVar22 = (uint *)(ulonglong)*(byte *)(lVar26 + (longlong)unaff_R13);
    bVar104 = 1 < (byte)(*(byte *)(lVar26 + (longlong)unaff_R13) + 1);
    puVar36 = (uint *)(ulonglong)bVar104;
    cVar39 = (char)puVar25;
    puVar102 = (uint *)CONCAT71((int7)((ulonglong)puVar102 >> 8),cVar39 != -1 || bVar104);
    puVar25 = puVar22;
    unaff_R13 = puVar31;
    pbVar32 = unaff_XMM6_Qa;
    if (cVar39 == -1 && !bVar104) {
      do {
        puVar97 = unaff_XMM6_Qb;
        if (*(uint **)puVar27 <= puVar31) goto code_r0x000140a94f17;
        cVar39 = (char)puVar22;
        lVar26 = *(longlong *)(unaff_R15 + 2);
        unaff_R13 = (uint *)((longlong)puVar31 + 1);
        *(uint **)(puVar98 + 0x1c50) = unaff_R13;
        puVar22 = (uint *)(ulonglong)*(byte *)(lVar26 + (longlong)puVar31);
        uVar35 = *(byte *)(lVar26 + (longlong)puVar31) + 1;
        puVar36 = (uint *)(ulonglong)uVar35;
        puVar25 = puVar22;
        puVar31 = unaff_R13;
      } while ((byte)uVar35 < 2);
    }
    puVar22 = puVar25;
    if (cVar39 == -1) {
      *(undefined **)(puVar65 + -8) = &UNK_140a9506d;
      puVar22 = (uint *)pdb_140a94d10(puVar25);
      if ((char)puVar22 == '\f') {
        bVar106 = 1;
        puVar97 = unaff_XMM6_Qb;
        if ((unaff_R13 < (uint *)0xfffffffffffffffe) &&
           (puVar22 = (uint *)((longlong)unaff_R13 + 2), puVar97 = unaff_XMM6_Qb,
           puVar22 <= *(uint **)puVar27)) {
code_r0x000140a9508a:
          uVar29 = *(ushort *)(*(longlong *)(unaff_R15 + 2) + (longlong)unaff_R13);
          *(uint **)(puVar98 + 0x1c50) = puVar22;
          uVar29 = uVar29 << 8 | uVar29 >> 8;
          uVar35 = (uint)uVar29;
          *(ushort *)(puVar65 + 0x60) = uVar29;
          if (1 < uVar29) {
code_r0x000140a950ad:
            puVar22 = (uint *)((longlong)puVar22 + (ulonglong)(uVar35 - 2 & 0xffff));
            *(uint **)(puVar98 + 0x1c50) = puVar22;
            iVar18 = 0;
            unaff_R13 = puVar22;
            goto code_r0x000140a94fea;
          }
          *(undefined1 **)(puVar65 + 0x30) = puVar65 + 0x60;
          *(code **)(puVar65 + 0x38) = pdb_140f71140;
          puVar36 = (uint *)&UNK_14304566a;
          puVar102 = (uint *)(puVar65 + 0x30);
          *(undefined **)(puVar65 + -8) = &UNK_140a95388;
          puVar22 = (uint *)pdb_140f60760();
          bVar106 = 0;
          puVar98 = *(uint **)(puVar65 + 0x90);
          pbVar32 = *(byte **)(puVar65 + 0x80);
          puVar97 = *(uint **)(puVar65 + 0x88);
        }
        goto code_r0x000140a94f17;
      }
      if (3 < iVar18) {
        pbVar32 = unaff_XMM8_Qa;
        puVar97 = unaff_XMM8_Qb;
        if (*(byte *)((longlong)puVar98 + 0x711a) != 0 || *(byte *)((longlong)puVar98 + 0x711b) != 0
           ) goto code_r0x000140a94f17;
code_r0x000140a950df:
        bVar106 = (byte)unaff_R12;
        pbVar32 = unaff_XMM8_Qa;
        puVar97 = unaff_XMM8_Qb;
        if (*(byte *)((longlong)puVar98 + 0x7119) != 0) goto code_r0x000140a94f17;
      }
      puVar65[0x56] = (byte)puVar22;
      puVar65[0x57] = (char)puVar36;
      puVar73 = puVar65;
      if (10 < (byte)puVar22) {
code_r0x000140a95220:
        puVar97 = unaff_XMM6_Qb;
        if ((unaff_R13 < (uint *)0xfffffffffffffffe) &&
           (puVar36 = (uint *)((longlong)unaff_R13 + 2), puVar65 = puVar73,
           puVar36 <= *(uint **)puVar27)) {
code_r0x000140a95239:
          uVar29 = *(ushort *)(*(longlong *)(unaff_R15 + 2) + (longlong)unaff_R13);
          *(uint **)(puVar98 + 0x1c50) = puVar36;
          uVar29 = uVar29 << 8 | uVar29 >> 8;
          *(ushort *)(puVar65 + 0x58) = uVar29;
          if (1 < uVar29) {
            puVar36 = (uint *)((longlong)puVar36 + (ulonglong)(ushort)(uVar29 - 2));
            *(uint **)(puVar98 + 0x1c50) = puVar36;
            iVar18 = 0;
            unaff_R13 = puVar36;
            if ((char)puVar22 == '\x06') {
code_r0x000140a94e9b:
              *(byte *)((longlong)puVar98 + 0x71be) = 1;
              *(byte *)param_1 = 0xd;
              return param_1;
            }
            goto code_r0x000140a94fea;
          }
          *(undefined1 **)(puVar65 + 0x30) = puVar65 + 0x58;
          *(code **)(puVar65 + 0x38) = pdb_140f71140;
          puVar36 = (uint *)0x0;
          puVar102 = (uint *)(puVar65 + 0x30);
          *(undefined **)(puVar65 + -8) = &UNK_140a95429;
          puVar22 = (uint *)pdb_140f60760();
          puVar97 = *(uint **)(puVar65 + 0x68);
          bVar106 = 0;
          puVar98 = *(uint **)(puVar65 + 0x70);
          pbVar32 = *(byte **)(puVar65 + 0x60);
          goto code_r0x000140a94f17;
        }
code_r0x000140a953b1:
        bVar106 = 1;
        pbVar32 = unaff_XMM6_Qa;
        goto code_r0x000140a94f17;
      }
      puVar31 = (uint *)0x1;
      puVar102 = (uint *)(&UNK_1430458ec +
                         *(int *)(&UNK_1430458ec + ((ulonglong)puVar22 & 0xff) * 4));
      puVar89 = puVar65;
code_r0x000140a95110:
      puVar73 = puVar89;
      bVar106 = (byte)puVar31;
      puVar97 = unaff_XMM6_Qb;
      switch(puVar102) {
      case (uint *)0x140a94fbf:
        puVar31 = (uint *)(puVar73 + 0x30);
        puVar36 = puVar98;
code_r0x000140a94fc7:
        *(undefined **)(puVar73 + -8) = &UNK_140a94fcc;
        puVar22 = (uint *)pdb_141c20fa0(puVar31);
        break;
      case (uint *)0x140a95113:
        if (2 < (byte)puVar36) {
          *(undefined **)(puVar73 + -8) = &UNK_140a9548b;
          pdb_14007ee60();
          puVar98 = (uint *)0x18;
          puVar36 = (uint *)0x1;
          *(undefined **)(puVar73 + -8) = &UNK_140a9549f;
          puVar22 = (uint *)pub_1406abab0(0x18,1);
          uVar21 = _UNK_143045558;
          if (puVar22 == (uint *)0x0) {
            *(undefined **)(puVar73 + -8) = &UNK_140a955af;
            pdb_142dc7e2a(1,0x18);
code_r0x000140a955af:
            *(undefined **)(puVar73 + -8) = &UNK_140a955be;
            pdb_142dc7e2a(1,0x1c);
            pcVar4 = (code *)swi(3);
            puVar98 = (uint *)(*pcVar4)();
            return puVar98;
          }
          *(undefined8 *)puVar22 = _UNK_143045550;
          *(undefined8 *)(puVar22 + 2) = uVar21;
          puVar22[4] = 0x6f662065;
          puVar22[5] = 0x74616d72;
          pbVar32 = _UNK_142e69970;
code_r0x000140a95513:
          bVar106 = 0;
          puVar97 = puVar22;
          goto code_r0x000140a94f17;
        }
        if ((byte)puVar36 == 2) {
code_r0x000140a95125:
          *(byte *)((longlong)puVar98 + 0x71bd) = 1;
          puVar36 = (uint *)0x2;
        }
        else {
          puVar36 = (uint *)0x0;
        }
        *(undefined **)(puVar73 + -8) = &UNK_140a95312;
        puVar102 = puVar98;
        puVar22 = (uint *)pdb_141c215e0(puVar73 + 0x30);
        break;
      case (uint *)0x140a95133:
        uVar30 = (ulonglong)puVar36 & 0xff;
        puVar36 = (uint *)&UNK_143045918;
        switch(uVar30) {
        case 0:
          if ((uint *)0xfffffffffffffffd < unaff_R13) goto code_r0x000140a953b1;
          puVar22 = (uint *)((longlong)unaff_R13 + 2);
          puVar36 = *(uint **)puVar27;
          if (puVar22 <= puVar36) {
            uVar29 = *(ushort *)(*(longlong *)(unaff_R15 + 2) + (longlong)unaff_R13);
            *(uint **)(puVar98 + 0x1c50) = puVar22;
            puVar69 = puVar73;
code_r0x000140a9517b:
            unaff_RBX = (char *)(ulonglong)(ushort)(uVar29 << 8 | uVar29 >> 8);
code_r0x000140a9517f:
            uVar29 = (ushort)unaff_RBX;
            *(ushort *)(puVar69 + 0x5e) = uVar29;
            if (1 < uVar29) {
              if (5 < uVar29) {
                puVar31 = (uint *)((longlong)puVar22 + 5);
                puVar102 = (uint *)0xffffffffffffffff;
                puVar68 = puVar69;
                if ((uint *)0xfffffffffffffffa < puVar22) {
                  puVar31 = (uint *)0xffffffffffffffff;
                }
code_r0x000140a951a6:
                uVar29 = (ushort)unaff_RBX;
                puVar69 = puVar68;
                if (puVar31 <= puVar36) {
                  puVar68[0x5c] = 0;
                  *(undefined4 *)(puVar68 + 0x58) = 0;
                  puVar102 = (uint *)0x5;
                  puVar36 = (uint *)(puVar68 + 0x58);
                  *(undefined **)(puVar68 + -8) = &UNK_140a951cf;
                  lVar26 = pdb_14091b830(puVar98 + 0x1c4e);
                  if (lVar26 != 0) {
                    *(longlong *)(puVar68 + 0x30) = lVar26;
                    *(uint **)(puVar68 + 0x38) = puVar36;
                    *(undefined **)(puVar68 + 0x20) = &UNK_1430455e8;
                    /* WARNING: Subroutine does not return */
                    *(undefined **)(puVar68 + -8) = &UNK_140a955a0;
                    pdb_142dc8170(&UNK_143045328,0x2b,puVar68 + 0x30,&UNK_143045308);
                  }
code_r0x000140a951d8:
                  puVar22 = (uint *)(ulonglong)*(uint *)(puVar68 + 0x58);
                  puVar31 = (uint *)(ulonglong)(byte)puVar68[0x5c];
code_r0x000140a951e1:
                  sVar40 = (short)unaff_RBX;
                  puVar69 = puVar68;
                  if (((longlong)puVar31 << 0x20 | (ulonglong)puVar22) == 0x31495641) {
code_r0x000140a951f1:
                    sVar40 = (short)unaff_RBX;
                    *(byte *)(puVar98 + 0x1c70) = 1;
                  }
                  uVar29 = sVar40 - 5;
                  puVar22 = *(uint **)(puVar98 + 0x1c50);
                }
              }
              uVar30 = (ulonglong)(ushort)(uVar29 - 2);
              if (uVar29 < 2) {
                uVar30 = 0;
              }
              *(byte **)(puVar98 + 0x1c50) = (byte *)(uVar30 + (longlong)puVar22);
              puVar73 = puVar69;
              goto code_r0x000140a94fda;
            }
            *(undefined1 **)(puVar69 + 0x30) = puVar69 + 0x5e;
            *(code **)(puVar69 + 0x38) = pdb_140f71140;
            puVar36 = (uint *)0x0;
            puVar102 = (uint *)(puVar69 + 0x30);
            *(undefined **)(puVar69 + -8) = &UNK_140a95555;
            puVar22 = (uint *)pdb_140f60760();
            puVar97 = *(uint **)(puVar69 + 0xa8);
            bVar106 = 0;
            puVar98 = *(uint **)(puVar69 + 0xb0);
            pbVar32 = *(byte **)(puVar69 + 0xa0);
            goto code_r0x000140a94f17;
          }
          goto code_r0x000140a953b1;
        case 1:
          puVar31 = (uint *)(puVar73 + 0x30);
          puVar36 = puVar98;
code_r0x000140a95331:
          *(undefined **)(puVar73 + -8) = &UNK_140a95336;
          puVar22 = (uint *)pdb_141c1fed0(puVar31);
          break;
        case 2:
          *(undefined **)(puVar73 + -8) = &UNK_140a95324;
          puVar36 = puVar98;
          puVar22 = (uint *)pdb_141c200c0(puVar73 + 0x30);
          break;
        default:
          goto code_r0x000140a95220;
        case 0xe:
          *(undefined **)(puVar73 + -8) = &UNK_140a95348;
          puVar36 = puVar98;
          puVar22 = (uint *)pdb_141c20790(puVar73 + 0x30);
        }
        break;
      case (uint *)0x140a95220:
        goto code_r0x000140a95220;
      case (uint *)0x140a9527e:
        pbVar32 = unaff_XMM6_Qa;
        if (unaff_R13 < (uint *)0xfffffffffffffffe) {
          puVar22 = (uint *)((longlong)unaff_R13 + 2);
          puVar36 = *(uint **)puVar27;
          if (puVar22 <= puVar36) {
code_r0x000140a95298:
            bVar106 = (byte)puVar31;
            puVar102 = *(uint **)(unaff_R15 + 2);
            sVar40 = *(short *)((longlong)puVar102 + (longlong)unaff_R13);
            *(uint **)(puVar98 + 0x1c50) = puVar22;
            if (sVar40 != 0x400) {
              *(undefined **)(puVar73 + -8) = &UNK_140a954d4;
              pdb_14007ee60();
              puVar98 = (uint *)0x1c;
              puVar36 = (uint *)0x1;
              *(undefined **)(puVar73 + -8) = &UNK_140a954e8;
              puVar22 = (uint *)pub_1406abab0(0x1c,1);
              uVar21 = _UNK_1430455d9;
              if (puVar22 == (uint *)0x0) goto code_r0x000140a955af;
              *(ulonglong *)(puVar22 + 3) = CONCAT44(_UNK_1430455d5,_UNK_1430455d1);
              *(undefined8 *)(puVar22 + 5) = uVar21;
              uVar21 = CONCAT44(_UNK_1430455d1,_UNK_1430455cd);
              *(undefined8 *)puVar22 = _UNK_1430455c5;
              *(undefined8 *)(puVar22 + 2) = uVar21;
              pbVar32 = _UNK_142f8bc10;
              goto code_r0x000140a95513;
            }
            pbVar32 = unaff_XMM6_Qa;
            puVar97 = unaff_XMM6_Qb;
            if ((puVar22 < (uint *)0xfffffffffffffffe) && (unaff_R13 + 1 <= puVar36)) {
              uVar29 = *(ushort *)((longlong)puVar102 + (longlong)puVar22);
              *(uint **)(puVar98 + 0x1c50) = unaff_R13 + 1;
              puVar22 = (uint *)(ulonglong)(ushort)(uVar29 << 8 | uVar29 >> 8);
code_r0x000140a952de:
              *(uint **)(puVar98 + 0x1c66) = puVar22;
              *(uint **)(puVar98 + 0x1c68) = puVar22;
              goto code_r0x000140a94fda;
            }
          }
        }
        goto code_r0x000140a94f17;
      case (uint *)0x140a952f1:
        *(undefined **)(puVar73 + -8) = &UNK_140a952fe;
        puVar36 = puVar98;
        puVar22 = (uint *)pdb_141c22db0(puVar73 + 0x30);
        break;
      case (uint *)0x140a953b6:
        *(undefined1 **)(puVar73 + 0x30) = puVar73 + 0x56;
        *(code **)(puVar73 + 0x38) = pdb_140a93d70;
        puVar36 = (uint *)&UNK_14304557e;
        puVar102 = (uint *)(puVar73 + 0x30);
        *(undefined **)(puVar73 + -8) = &UNK_140a953e5;
        puVar22 = (uint *)pdb_140f60760();
        bVar106 = 0;
        puVar98 = *(uint **)(puVar73 + 0xd0);
        pbVar32 = *(byte **)(puVar73 + 0xc0);
        puVar97 = *(uint **)(puVar73 + 200);
        goto code_r0x000140a94f17;
      case (uint *)0x140a9543f:
        pbVar32 = unaff_XMM7_Qa;
        puVar97 = unaff_XMM7_Qb;
        goto code_r0x000140a94f17;
      case (uint *)0x140a95444:
        *(undefined **)(puVar73 + -8) = &UNK_140a95451;
        pdb_141c23ec0(puVar73 + 0x30,puVar98);
        bVar106 = puVar73[0x30];
        if (bVar106 == 0xd) goto code_r0x000140a94e9b;
        goto code_r0x000140a95467;
      }
code_r0x000140a94fcc:
      bVar106 = puVar73[0x30];
      if (bVar106 != 0xd) {
code_r0x000140a95467:
        puVar36 = (uint *)(ulonglong)(byte)puVar73[0x31];
        puVar22 = (uint *)(ulonglong)*(ushort *)(puVar73 + 0x32);
        puVar102 = (uint *)(ulonglong)*(uint *)(puVar73 + 0x34);
        puVar98 = *(uint **)(puVar73 + 0x48);
        pbVar32 = *(byte **)(puVar73 + 0x38);
        puVar97 = *(uint **)(puVar73 + 0x40);
        goto code_r0x000140a94f17;
      }
code_r0x000140a94fda:
      unaff_R15 = *(uint **)(puVar98 + 0x1c4e);
      iVar18 = 0;
      puVar65 = puVar73;
      unaff_R13 = *(uint **)(puVar98 + 0x1c50);
    }
code_r0x000140a94fea:
    bVar106 = (byte)unaff_R12;
    unaff_RBX = (char *)(ulonglong)(iVar18 + 1);
    puVar27 = unaff_R15 + 4;
    pbVar32 = unaff_XMM6_Qa;
    puVar97 = unaff_XMM6_Qb;
    if (*(uint **)(unaff_R15 + 4) <= unaff_R13) goto code_r0x000140a94f17;
    goto code_r0x000140a94ffa;
  case 0x5c:
code_r0x000140a94e53:
    pcVar4 = (code *)swi(3);
    puVar98 = (uint *)(*pcVar4)();
    return puVar98;
  case 0x5d:
  case 99:
code_r0x000140a9524a:
    puVar65 = puVar70;
    goto code_r0x000140a95239;
  case 0x5e:
  case 0x5f:
code_r0x000140a950b4:
    uVar35 = (uint)puVar31;
    puVar22 = (uint *)(ulonglong)((int)puVar22 + uVar35);
    puVar65 = puVar64;
    goto code_r0x000140a950ad;
  case 0x60:
code_r0x000140a952d3:
    pbVar32 = (byte *)((longlong)puVar31 * 5 + -0x51);
    *pbVar32 = *pbVar32 | (byte)puVar31;
    goto code_r0x000140a952da;
  case 0x61:
code_r0x000140a952d8:
    puVar71 = puVar72;
code_r0x000140a952da:
    *(byte *)puVar98 = (byte)*puVar98 + (char)puVar31;
    puVar73 = puVar71;
    goto code_r0x000140a952de;
  case 0x62:
code_r0x000140a95185:
    puVar69 = puVar66;
    goto code_r0x000140a9517f;
  case 100:
code_r0x000140a95112:
    puVar65 = puVar11;
    if (puVar31 == (uint *)0x1 || bVar104) {
      *(undefined4 *)((longlong)puVar36 + 3) = *(undefined4 *)((longlong)puVar36 + 3);
      *(byte *)((longlong)puVar22 + -0x7af0fd06) =
           *(byte *)((longlong)puVar22 + -0x7af0fd06) + (char)puVar22;
      *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
      puVar73 = puVar65;
      goto code_r0x000140a95125;
    }
    puVar98[0x1c50] = (uint)puVar22;
    goto code_r0x000140a9508a;
  case 0x65:
    goto code_r0x000140a94fc7;
  case 0x66:
code_r0x000140a94fb7:
    bVar106 = 2;
    pbVar32 = unaff_XMM8_Qa;
    puVar97 = unaff_XMM8_Qb;
code_r0x000140a94f17:
    *(byte *)param_1 = bVar106;
    *(byte *)((longlong)param_1 + 1) = (byte)puVar36;
    *(short *)((longlong)param_1 + 2) = (short)puVar22;
    param_1[1] = (uint)puVar102;
    *(byte **)(param_1 + 2) = pbVar32;
    *(uint **)(param_1 + 4) = puVar97;
    *(uint **)(param_1 + 6) = puVar98;
    return param_1;
  case 0x67:
code_r0x000140a95191:
    puVar98 = (uint *)((ulonglong)((int)puVar22 + 0x89486e76) - 0x7d);
    *puVar98 = *puVar98 >> 1 | *puVar98 << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x68:
    goto code_r0x000140a9517f;
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
code_r0x000140a95088:
    *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
    goto code_r0x000140a9508a;
  case 0x74:
code_r0x000140a951a3:
    puVar31 = (uint *)((ulonglong)puVar31 & 0xffffffff);
    puVar68 = puVar67;
    if (!bVar103) goto code_r0x000140a951a6;
    puVar31 = (uint *)((ulonglong)puVar22 & 0xffffffff);
    goto code_r0x000140a951a6;
  case 0x75:
code_r0x000140a955f1:
    *(byte *)param_1 = 0xd;
    return puVar22;
  case 0x76:
    goto code_r0x000140a957bd;
  case 0x77:
  case 0x7d:
    goto code_r0x000140a958ea;
  case 0x78:
  case 0x79:
    goto code_r0x000140a956f8;
  case 0x7a:
    goto code_r0x000140a9597b;
  case 0x7b:
    goto code_r0x000140a95987;
  case 0x7c:
    goto code_r0x000140a957cc;
  case 0x7e:
    goto code_r0x000140a95753;
  case 0x7f:
    goto code_r0x000140a95611;
  case 0x80:
    goto code_r0x000140a95601;
  case 0x81:
code_r0x000140a957f0:
    return puVar22;
  case 0x82:
code_r0x000140a957e1:
    pcVar4 = (code *)swi(3);
    puVar98 = (uint *)(*pcVar4)();
    return puVar98;
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
    goto code_r0x000140a956cc;
  case 0x8e:
    goto code_r0x000140a957ff;
  case 0x8f:
  case 0x90:
  case 0x95:
  case 0xb5:
code_r0x000143045780:
  case 0x97:
code_r0x000143045785:
    pbVar32 = (byte *)((longlong)puVar25 + (longlong)puVar98 * 8 + -0x25b2f6d);
    *pbVar32 = *pbVar32 << 1;
code_r0x00014304578c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x91:
  case 0xb4:
  case 0xb6:
  case 0xb7:
code_r0x000143045781:
    pbVar32 = (byte *)((longlong)puVar25 + (longlong)puVar98 * 8 + -0x25b2f6d);
    *pbVar32 = *pbVar32 << 1;
    puVar82 = puVar79;
  case 0x9c:
  case 0xa1:
code_r0x000143045788:
    puVar83 = puVar82;
code_r0x000143045789:
    *(byte *)(puVar25 + (longlong)puVar98 * 2 + -0x96cbcf) =
         (byte)puVar25[(longlong)puVar98 * 2 + -0x96cbcf] << 1;
    puVar87 = puVar83;
code_r0x000143045790:
    puVar98 = puVar98 + (ulonglong)bVar106 * -2 + 1;
    param_1 = param_1 + (ulonglong)bVar106 * -2 + 1;
    puVar88 = puVar87;
code_r0x000143045791:
    pbVar32 = (byte *)((longlong)puVar25 + (longlong)puVar98 * 8 + -0x25b2f25);
    *pbVar32 = *pbVar32 << 1;
    uVar19 = in(0xa4);
    bVar106 = (byte)uVar19;
    puVar91 = (undefined8 *)puVar88;
code_r0x00014304579c:
    pbVar32 = (byte *)*puVar91;
    out(0xa4,bVar106);
    *pbVar32 = (byte)*param_1;
    pbVar32[-1] = *(byte *)((longlong)param_1 + -1);
    uVar94 = (ulonglong)
             ((((uint)(puVar91 + 1) ^ (uint)param_1) - (int)(byte *)((longlong)param_1 + -2)) -
             (uint)(bVar106 < 0xe6));
    pbVar32[-2] = *(byte *)((longlong)param_1 + -2);
    *(undefined8 *)(uVar94 - 8) = 0x71fda4e6;
    out(0xa4,bVar106);
    *(byte **)(uVar94 - 0x10) = (byte *)((longlong)param_1 + -3);
    out(0xa4,bVar106);
    out(0xa4,bVar106);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x92:
  case 0x93:
code_r0x000143045782:
    puVar98 = (uint *)((longlong)puVar99 + 1);
    *(byte *)puVar99 = (byte)*param_1;
  case 0x94:
code_r0x000143045783:
code_r0x000143045784:
    goto code_r0x000143045785;
  case 0x96:
  case 0x9b:
    goto code_r0x000143045784;
  case 0x98:
  case 0x99:
code_r0x000143045786:
    puVar98 = (uint *)((longlong)puVar99 + 1);
    param_1 = (uint *)((longlong)puVar100 + 1);
    *(byte *)puVar99 = (byte)*puVar100;
    puVar81 = puVar80;
  case 0x9a:
code_r0x000143045787:
    bVar106 = 1;
    puVar82 = puVar81;
    goto code_r0x000143045788;
  case 0x9d:
    goto code_r0x000143045789;
  case 0x9e:
  case 0x9f:
code_r0x00014304578a:
    *(byte *)puVar98 = (byte)*param_1;
  case 0xa0:
code_r0x00014304578b:
    halt_baddata();
  case 0xa2:
  case 0xa7:
    goto code_r0x00014304578c;
  case 0xa3:
code_r0x00014304578d:
    pbVar32 = (byte *)((longlong)puVar25 + (longlong)puVar98 * 8 + -0x25b2f59);
    *pbVar32 = *pbVar32 << 1;
    puVar90 = puVar84;
  case 0xae:
  case 0xb3:
code_r0x000143045794:
    puVar92 = puVar90;
    puVar100 = param_1;
    puVar99 = puVar98;
code_r0x000143045796:
    puVar98 = (uint *)((longlong)puVar99 + (ulonglong)bVar106 * -2 + 1);
    param_1 = (uint *)((longlong)puVar100 + (ulonglong)bVar106 * -2 + 1);
    *(byte *)puVar99 = (byte)*puVar100;
    puVar93 = puVar92;
code_r0x000143045797:
    puVar88 = puVar93;
    goto code_r0x000143045791;
  case 0xa4:
  case 0xa5:
code_r0x00014304578e:
    puVar98 = (uint *)((longlong)puVar99 + 1);
    param_1 = (uint *)((longlong)puVar100 + 1);
    *(byte *)puVar99 = (byte)*puVar100;
    puVar86 = puVar85;
  case 0xa6:
code_r0x00014304578f:
    bVar106 = 1;
    puVar87 = puVar86;
  case 0xa8:
  case 0xad:
    goto code_r0x000143045790;
  case 0xa9:
    goto code_r0x000143045791;
  case 0xaa:
  case 0xab:
code_r0x000143045792:
    puVar98 = (uint *)((longlong)puVar99 + 1);
    param_1 = (uint *)((longlong)puVar100 + 1);
    *(byte *)puVar99 = (byte)*puVar100;
    puVar89 = puVar68;
  case 0xac:
code_r0x000143045793:
    bVar106 = 1;
    puVar90 = puVar89;
    goto code_r0x000143045794;
  case 0xaf:
code_r0x000143045795:
    bVar106 = (byte)puVar22;
    pbVar32 = (byte *)((longlong)puVar25 + (longlong)puVar98 * 8 + -0x25b1a0e);
    *pbVar32 = *pbVar32 << 1;
    goto code_r0x00014304579c;
  case 0xb0:
  case 0xb1:
    goto code_r0x000143045796;
  case 0xb2:
    goto code_r0x000143045797;
  }
  *(undefined **)(puVar41 + 0x20) = &UNK_143356350;
  *(undefined8 *)(puVar41 + 0x28) = 5;
  *(undefined8 *)(puVar41 + -8) = 0x140a928c5;
  pdb_141501240(puVar25 + -0x12,puVar25 + 0x1c,&UNK_143356310,0xb);
  lVar26 = *(longlong *)(puVar25 + -0x12);
  uVar21 = *(undefined8 *)(puVar25 + -0x10);
  if (SBORROW8(0,lVar26)) {
    *(undefined8 *)(puVar41 + -8) = 0x140a928e5;
    uVar21 = pdb_142dead00(uVar21);
    *(undefined8 *)(param_1 + 2) = uVar21;
    param_1[0] = 0;
    param_1[1] = 0x80000000;
    if (uVar35 < 3) goto code_r0x000140a9277e;
    if (uVar35 != 3) {
      if (uVar35 != 4) {
        *(undefined8 *)(puVar41 + -8) = 0x140a929d5;
        pdb_1409a45e0(puVar25 + 0x26);
        goto code_r0x000140a9277e;
      }
      uVar21 = *(undefined8 *)(puVar25 + 0x28);
      uVar3 = *(undefined8 *)(puVar25 + 0x2a);
      *(undefined8 *)(puVar25 + 0x2e) = uVar21;
      *(undefined8 *)(puVar41 + -8) = 0x140a9292b;
      pdb_14098ae50(uVar21,uVar3);
      goto code_r0x000140a92975;
    }
code_r0x000140a92998:
    uVar30 = *(ulonglong *)(puVar25 + 0x26);
    if (uVar30 == 0) goto code_r0x000140a9277e;
    pbVar32 = *(byte **)(puVar25 + 0x28);
    arg2 = 1;
  }
  else {
    *(undefined8 *)(puVar41 + -8) = 0x140a92941;
    pub_142e32760(param_1 + 4,puVar25 + -0xe,0x90);
    *(longlong *)param_1 = lVar26;
    *(undefined8 *)(param_1 + 2) = uVar21;
    if (uVar35 < 3) goto code_r0x000140a9277e;
    if (uVar35 == 3) goto code_r0x000140a92998;
    if (uVar35 != 4) {
      *(undefined8 *)(puVar41 + -8) = 0x140a929c7;
      pdb_1409a45e0(puVar25 + 0x26);
      goto code_r0x000140a9277e;
    }
    uVar21 = *(undefined8 *)(puVar25 + 0x28);
    uVar3 = *(undefined8 *)(puVar25 + 0x2a);
    *(undefined8 *)(puVar25 + 0x2e) = uVar21;
    *(undefined8 *)(puVar41 + -8) = 0x140a92974;
    pdb_14098ae50(uVar21,uVar3);
code_r0x000140a92975:
    if (*(longlong *)(puVar25 + 0x26) == 0) goto code_r0x000140a9277e;
    uVar30 = *(longlong *)(puVar25 + 0x26) << 5;
    arg2 = 8;
    pbVar32 = *(byte **)(puVar25 + 0x2e);
  }
  *(undefined8 *)(puVar41 + -8) = 0x140a929ba;
  pub_1406abac0(pbVar32,uVar30,arg2);
code_r0x000140a9277e:
  uVar30 = *(ulonglong *)(puVar25 + 0x2c);
  if (uVar30 != 0) {
    pbVar32 = *(byte **)(puVar25 + 0x1a);
    *(undefined8 *)(puVar41 + -8) = 0x140a92799;
    pub_1406abac0(pbVar32,uVar30,1);
  }
  return param_1;
code_r0x000140a95728:
  puVar36 = param_1;
  if (((uint *)0xfffffffffffffffd < puVar27) ||
     (puVar22 = (uint *)((longlong)puVar27 + 2), puVar37 = puVar41, unaff_R15 < puVar22))
  goto LAB_140a95650;
code_r0x000140a9573f:
  uVar29 = *(ushort *)((longlong)unaff_R13 + (longlong)puVar27);
  *(uint **)(puVar98 + 0x1c52) = puVar22;
  uVar29 = uVar29 << 8 | uVar29 >> 8;
  *(ushort *)(puVar37 + 0x60) = uVar29;
  if (uVar29 < 2) {
    *(undefined1 **)(puVar37 + 0x30) = puVar37 + 0x60;
    *(code **)(puVar37 + 0x38) = pdb_140f71140;
    *(undefined8 *)(puVar37 + -8) = 0x140a95a69;
    pdb_140f60760(puVar37 + 0x78,&UNK_14304566a,puVar37 + 0x30);
    *(undefined8 *)(puVar37 + 0x37) = *(undefined8 *)(puVar37 + 0x78);
    *(undefined8 *)(puVar37 + 0x3f) = *(undefined8 *)(puVar37 + 0x80);
    *(undefined8 *)(puVar37 + 0x47) = *(undefined8 *)(puVar37 + 0x88);
    *(byte *)param_1 = 0;
    uVar3 = *(undefined8 *)(puVar37 + 0x38);
    puVar98 = *(uint **)(puVar37 + 0x3f);
    uVar21 = *(undefined8 *)(puVar37 + 0x47);
    *(undefined8 *)((longlong)param_1 + 1) = *(undefined8 *)(puVar37 + 0x30);
    *(undefined8 *)((longlong)param_1 + 9) = uVar3;
    *(uint **)(param_1 + 4) = puVar98;
    *(undefined8 *)(param_1 + 6) = uVar21;
    return puVar98;
  }
  puVar27 = (uint *)((longlong)puVar22 + (ulonglong)(ushort)(uVar29 - 2));
  *(uint **)(puVar98 + 0x1c52) = puVar27;
  puVar25 = (uint *)0x0;
  goto LAB_140a956b3;
code_r0x000143045954:
  do {
  } while (!SCARRY8((longlong)*(int *)(&UNK_143045954 + ((ulonglong)puVar22 & 0xff) * 4),0x143045954
                   ));
code_r0x000143045956:
  puVar97 = (uint *)((longlong)puVar98 + 1);
  puVar31 = (uint *)((longlong)param_1 + 1);
  *(byte *)puVar98 = (byte)*param_1;
code_r0x000143045957:
code_r0x000143045958:
  param_1 = puVar31;
  puVar98 = puVar97;
code_r0x00014304595d:
  pbVar32 = (byte *)((longlong)puVar25 + -0x5b008703);
  *(int *)pbVar32 = *(int *)pbVar32 + (int)puVar37;
  bVar103 = *(int *)pbVar32 < 0;
code_r0x000143045963:
  bVar106 = 1;
code_r0x000143045964:
  puVar31 = param_1;
  puVar97 = puVar98;
  if (bVar103) {
code_r0x000143045965:
                    /* WARNING: Could not recover jumptable at 0x000143045965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar98 = (uint *)(**(code **)((longlong)puVar25 + (longlong)puVar98 * 8 + -0x25afe05))();
    return puVar98;
  }
code_r0x000143045966:
  puVar98 = (uint *)((longlong)puVar97 + (ulonglong)bVar106 * -2 + 1);
  param_1 = (uint *)((longlong)puVar31 + (ulonglong)bVar106 * -2 + 1);
  *(byte *)puVar97 = (byte)*puVar31;
code_r0x000143045967:
code_r0x000143045968:
  goto code_r0x000143045969;
code_r0x000140a958a2:
  *pcVar23 = *pcVar23 + (char)puVar22;
  puVar36 = param_1;
code_r0x000140a958a4:
  uVar29 = (short)puVar25 - 5;
  puVar22 = *(uint **)(puVar98 + 0x1c52);
code_r0x000140a958ae:
  uVar30 = (ulonglong)(ushort)(uVar29 - 2);
  if (uVar29 < 2) {
    uVar30 = 0;
  }
  *(byte **)(puVar98 + 0x1c52) = (byte *)(uVar30 + (longlong)puVar22);
  param_1 = puVar36;
  goto code_r0x000140a959cc;
code_r0x000140a957e5:
  if (0xe < bVar17) goto LAB_140a958cc;
  uVar30 = (ulonglong)puVar36 & 0xff;
  puVar36 = (uint *)&UNK_143045980;
  uVar30 = (ulonglong)*(int *)(&UNK_143045980 + uVar30 * 4);
  bVar103 = 0xfffffffebcfba67f < uVar30;
  bVar107 = SCARRY8(uVar30,0x143045980);
  puVar31 = (uint *)(&UNK_143045980 + uVar30);
  bVar105 = (longlong)puVar31 < 0;
  bVar104 = puVar31 == (uint *)0x0;
code_r0x000140a957ff:
  puVar97 = puVar22;
  pcVar23 = unaff_RBX;
  puVar50 = puVar37;
  puVar91 = (undefined8 *)puVar37;
  puVar68 = puVar37;
  puVar89 = puVar37;
  puVar85 = puVar37;
  puVar86 = puVar37;
  puVar84 = puVar37;
  puVar90 = puVar37;
  puVar92 = puVar37;
  puVar93 = puVar37;
  puVar80 = puVar37;
  puVar81 = puVar37;
  puVar79 = puVar37;
  puVar82 = puVar37;
  puVar83 = puVar37;
  puVar87 = puVar37;
  puVar88 = puVar37;
  puVar6 = puVar37;
  puVar74 = puVar37;
  puVar75 = puVar37;
  puVar76 = puVar37;
  puVar7 = puVar37;
  puVar8 = puVar37;
  puVar78 = puVar37;
  puVar9 = puVar37;
  puVar10 = puVar37;
  puVar77 = puVar37;
  puVar67 = puVar37;
  puVar65 = puVar37;
  puVar11 = puVar37;
  puVar66 = puVar37;
  puVar72 = puVar37;
  puVar71 = puVar37;
  puVar64 = puVar37;
  puVar70 = puVar37;
  puVar63 = puVar37;
  puVar55 = puVar37;
  puVar53 = puVar37;
  puVar52 = puVar37;
  puVar54 = puVar37;
  puVar57 = puVar37;
  puVar58 = puVar37;
  puVar62 = puVar37;
  puVar56 = puVar37;
  puVar59 = puVar37;
  puVar61 = puVar37;
  puVar60 = puVar37;
  puVar51 = puVar37;
  puVar69 = puVar37;
  puVar73 = puVar37;
  puVar49 = puVar37;
  puVar48 = puVar37;
  puVar42 = puVar37;
  puVar46 = puVar37;
  puVar47 = puVar37;
  puVar43 = puVar37;
  puVar45 = puVar37;
  puVar44 = puVar37;
  puVar41 = puVar37;
  puVar12 = puVar37;
  puVar13 = puVar37;
  puVar14 = puVar37;
  puVar15 = puVar37;
  puVar100 = param_1;
  puVar99 = puVar98;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(puVar31) {
  case (uint *)0x140a92813:
    goto code_r0x000140a92813;
  case (uint *)0x140a92827:
    goto code_r0x000140a92827;
  case (uint *)0x140a9283e:
    goto code_r0x000140a9283e;
  case (uint *)0x140a92844:
    goto code_r0x000140a92844;
  case (uint *)0x140a9285b:
    goto code_r0x000140a9285b;
  case (uint *)0x140a93d72:
    goto code_r0x000140a93d72;
  case (uint *)0x140a93d8f:
    goto code_r0x000140a93d8f;
  case (uint *)0x140a93d9b:
    goto code_r0x000140a93d9b;
  case (uint *)0x140a93da7:
    goto code_r0x000140a93da7;
  case (uint *)0x140a93db3:
    goto code_r0x000140a93db3;
  case (uint *)0x140a93dbc:
    goto code_r0x000140a93dbc;
  case (uint *)0x140a93dd6:
    goto code_r0x000140a93dd6;
  case (uint *)0x140a93ddf:
    goto code_r0x000140a93ddf;
  case (uint *)0x140a93de8:
    goto code_r0x000140a93de8;
  case (uint *)0x140a93df1:
    goto code_r0x000140a93df1;
  case (uint *)0x140a93dfa:
    goto code_r0x000140a93dfa;
  case (uint *)0x140a93e2e:
    goto code_r0x000140a93e2e;
  case (uint *)0x140a94533:
    goto code_r0x000140a94533;
  case (uint *)0x140a94541:
    goto code_r0x000140a94541;
  case (uint *)0x140a9454f:
    goto code_r0x000140a9454f;
  case (uint *)0x140a9455d:
    goto code_r0x000140a9455d;
  case (uint *)0x140a9456b:
    goto code_r0x000140a9456b;
  case (uint *)0x140a9468f:
    goto code_r0x000140a9468f;
  case (uint *)0x140a9469d:
    goto code_r0x000140a9469d;
  case (uint *)0x140a946ab:
    goto code_r0x000140a946ab;
  case (uint *)0x140a946b9:
    goto code_r0x000140a946b9;
  case (uint *)0x140a946c7:
    goto code_r0x000140a946c7;
  case (uint *)0x140a94cc0:
    goto code_r0x000140a94cc0;
  case (uint *)0x140a94cc6:
    goto LAB_140a94cc6;
  case (uint *)0x140a94cc8:
    goto code_r0x000140a94cc8;
  case (uint *)0x140a94ccd:
    goto code_r0x000140a94ccd;
  case (uint *)0x140a94cd0:
    goto code_r0x000140a94cd0;
  case (uint *)0x140a94cd3:
    goto code_r0x000140a94cd3;
  case (uint *)0x140a94cd8:
    goto code_r0x000140a94cd8;
  case (uint *)0x140a94cdc:
    goto code_r0x000140a94cdc;
  case (uint *)0x140a94cdd:
    goto code_r0x000140a94cdd;
  case (uint *)0x140a94ce2:
    goto code_r0x000140a94ce2;
  case (uint *)0x140a94ce7:
    goto code_r0x000140a94ce7;
  case (uint *)0x140a94cec:
    goto code_r0x000140a94cec;
  case (uint *)0x140a94cf1:
    goto code_r0x000140a94cf1;
  case (uint *)0x140a94cf6:
    goto code_r0x000140a94cf6;
  case (uint *)0x140a94cfb:
    goto code_r0x000140a94cfb;
  case (uint *)0x140a94d00:
    goto code_r0x000140a94d00;
  case (uint *)0x140a94d05:
    goto code_r0x000140a94d05;
  case (uint *)0x140a94d08:
    goto code_r0x000140a94d08;
  case (uint *)0x140a94d0b:
    goto code_r0x000140a94d0b;
  case (uint *)0x140a94d0e:
    goto code_r0x000140a94d0e;
  case (uint *)0x140a94d11:
    goto code_r0x000140a94d11;
  case (uint *)0x140a94d16:
    goto code_r0x000140a94d16;
  case (uint *)0x140a94d1b:
    goto code_r0x000140a94d1b;
  case (uint *)0x140a94d1e:
    goto code_r0x000140a94d1e;
  case (uint *)0x140a94d21:
    goto code_r0x000140a94d21;
  case (uint *)0x140a94e53:
    goto code_r0x000140a94e53;
  case (uint *)0x140a94fa7:
    goto code_r0x000140a94fa7;
  case (uint *)0x140a94fb7:
    goto code_r0x000140a94fb7;
  case (uint *)0x140a94fc7:
    goto code_r0x000140a94fc7;
  case (uint *)0x140a95088:
    goto code_r0x000140a95088;
  case (uint *)0x140a950b4:
    goto code_r0x000140a950b4;
  case (uint *)0x140a95112:
    goto code_r0x000140a95112;
  case (uint *)0x140a9517f:
    goto code_r0x000140a9517f;
  case (uint *)0x140a95185:
    goto code_r0x000140a95185;
  case (uint *)0x140a95191:
    goto code_r0x000140a95191;
  case (uint *)0x140a951a3:
    goto code_r0x000140a951a3;
  case (uint *)0x140a9524a:
    goto code_r0x000140a9524a;
  case (uint *)0x140a952d3:
    goto code_r0x000140a952d3;
  case (uint *)0x140a952d8:
    goto code_r0x000140a952d8;
  case (uint *)0x140a955f1:
    goto code_r0x000140a955f1;
  case (uint *)0x140a95601:
    goto code_r0x000140a95601;
  case (uint *)0x140a95611:
    goto code_r0x000140a95611;
  case (uint *)0x140a956cc:
    goto code_r0x000140a956cc;
  case (uint *)0x140a956f8:
code_r0x000140a956f8:
    puVar37 = puVar9;
    piVar1 = (int *)((longlong)puVar31 * 5 + -0x20);
    *piVar1 = *piVar1 + 1;
    break;
  case (uint *)0x140a95753:
    goto code_r0x000140a95753;
  case (uint *)0x140a957bd:
    goto code_r0x000140a957bd;
  case (uint *)0x140a957cc:
    goto code_r0x000140a957cc;
  case (uint *)0x140a957e1:
    goto code_r0x000140a957e1;
  case (uint *)0x140a957f0:
    goto code_r0x000140a957f0;
  case (uint *)0x140a957ff:
    goto code_r0x000140a957ff;
  case (uint *)0x140a958ea:
    goto code_r0x000140a958ea;
  case (uint *)0x140a9597b:
    goto code_r0x000140a9597b;
  case (uint *)0x140a95987:
    goto code_r0x000140a95987;
  case (uint *)0x143045780:
    goto code_r0x000143045780;
  case (uint *)0x143045781:
    goto code_r0x000143045781;
  case (uint *)0x143045782:
    goto code_r0x000143045782;
  case (uint *)0x143045783:
    goto code_r0x000143045783;
  case (uint *)0x143045784:
    goto code_r0x000143045784;
  case (uint *)0x143045785:
    goto code_r0x000143045785;
  case (uint *)0x143045786:
    goto code_r0x000143045786;
  case (uint *)0x143045787:
    goto code_r0x000143045787;
  case (uint *)0x143045788:
    goto code_r0x000143045788;
  case (uint *)0x143045789:
    goto code_r0x000143045789;
  case (uint *)0x14304578a:
    goto code_r0x00014304578a;
  case (uint *)0x14304578b:
    goto code_r0x00014304578b;
  case (uint *)0x14304578c:
    goto code_r0x00014304578c;
  case (uint *)0x14304578d:
    goto code_r0x00014304578d;
  case (uint *)0x14304578e:
    goto code_r0x00014304578e;
  case (uint *)0x14304578f:
    goto code_r0x00014304578f;
  case (uint *)0x143045790:
    goto code_r0x000143045790;
  case (uint *)0x143045791:
    goto code_r0x000143045791;
  case (uint *)0x143045792:
    goto code_r0x000143045792;
  case (uint *)0x143045793:
    goto code_r0x000143045793;
  case (uint *)0x143045794:
    goto code_r0x000143045794;
  case (uint *)0x143045795:
    goto code_r0x000143045795;
  case (uint *)0x143045796:
    goto code_r0x000143045796;
  case (uint *)0x143045797:
    goto code_r0x000143045797;
  }
  goto code_r0x000140a956fc;
code_r0x000140a956cc:
  puVar37 = puVar6;
  *(byte *)((longlong)puVar98 + 0xf) = *(byte *)((longlong)puVar98 + 0xf) + (byte)puVar22;
  bVar17 = (byte)puVar36;
  uVar30 = (ulonglong)((byte)puVar22 & 1);
  goto code_r0x000140a956da;
code_r0x000140a95601:
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
  puVar37 = puVar74;
  puVar36 = param_1;
  if ((8 < (uint)puVar31) || (puVar75 = puVar74, (0x183U >> ((uint)puVar31 & 0x1f) & 1) == 0))
  goto LAB_140a9562e;
code_r0x000140a95612:
  *(undefined8 *)(puVar75 + -8) = 0x140a9561e;
  lVar26 = pdb_140dbff40(puVar31,puVar98 + 0x1c3e);
  if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar75 + -8) = 0x140a95b11;
    pdb_142dc8150(&UNK_143045628);
  }
  *(longlong *)(puVar98 + 0x1c4c) = lVar26;
  puVar37 = puVar75;
  puVar36 = param_1;
LAB_140a9562e:
  unaff_R15 = *(uint **)(puVar98 + 0x1c50);
  uVar30 = *(ulonglong *)(puVar98 + 0x1c52);
  puVar27 = (uint *)(uVar30 + 2);
  if (0xfffffffffffffffd < uVar30 || unaff_R15 < puVar27) goto LAB_140a95650;
  uVar29 = *(ushort *)(*(longlong *)(puVar98 + 0x1c4e) + uVar30);
  *(uint **)(puVar98 + 0x1c52) = puVar27;
  if (uVar29 != 0xd8ff) {
    uVar29 = uVar29 << 8 | uVar29 >> 8;
    *(byte *)puVar36 = 2;
    *(ushort *)((longlong)puVar36 + 2) = uVar29;
    return (uint *)(ulonglong)uVar29;
  }
  if (unaff_R15 <= puVar27) goto LAB_140a95650;
  unaff_XMM6_Qa = (byte *)0x16;
  unaff_XMM6_Qb = (uint *)0x0;
  unaff_XMM7_Qa = (byte *)0xd;
  unaff_XMM7_Qb = (uint *)0x0;
  unaff_RBX = 
  "No more bytes/home/h3/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/zune-jpeg-0.4.11/src/decoder.rs"
  ;
  unaff_R12 = 0;
  puVar25 = (uint *)0x0;
  goto LAB_140a956ba;
code_r0x000140a95611:
  goto code_r0x000140a95612;
code_r0x000140a95753:
  puVar22 = (uint *)((ulonglong)puVar22 & 0xffffffffffffff60);
  puVar37 = puVar76;
  goto code_r0x000140a9573f;
code_r0x000140a957cc:
  puVar37 = puVar7;
  bVar17 = (byte)puVar36;
  *(byte *)puVar22 = (byte)*puVar22 + (char)puVar22;
code_r0x000140a957ce:
  if (bVar17 == 2) {
code_r0x000140a957d7:
    *(byte *)((longlong)puVar98 + 0x71c5) = 1;
  }
code_r0x000140a959b1:
  *(undefined8 *)(puVar37 + -8) = 0x140a959be;
  pdb_141c21da0(puVar37 + 0x30);
  puVar36 = param_1;
code_r0x000140a959be:
  bVar17 = puVar37[0x30];
  param_1 = puVar36;
  if (bVar17 != 0xd) {
code_r0x000140a95b81:
    pcVar23 = (char *)(ulonglong)bVar17;
    *(undefined4 *)(puVar37 + 0x2b) = *(undefined4 *)(puVar37 + 0x34);
    *(undefined4 *)(puVar37 + 0x28) = *(undefined4 *)(puVar37 + 0x31);
    unaff_RBX = *(char **)(puVar37 + 0x38);
    unaff_XMM7_Qa = *(byte **)(puVar37 + 0x40);
    unaff_XMM7_Qb = *(uint **)(puVar37 + 0x48);
    goto LAB_140a95c82;
  }
  goto code_r0x000140a959cc;
code_r0x000140a95987:
  puVar37 = puVar8;
  *(byte *)((longlong)puVar22 + -0x77) = *(byte *)((longlong)puVar22 + -0x77) + (char)puVar31;
  LOCK();
  *(int *)((longlong)puVar22 + -0x14ffff8f) = (int)puVar25;
  UNLOCK();
code_r0x000140a95996:
  *(undefined8 *)(puVar37 + -8) = 0x140a9599e;
  pdb_141c20950(puVar31,puVar98);
  puVar36 = param_1;
  goto code_r0x000140a959be;
code_r0x000140a9597b:
  *(byte *)puVar98 = (byte)*puVar98 + (char)puVar31;
  unaff_RBX = (char *)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(0xc0,(char)unaff_RBX));
  puVar37 = puVar78;
  puVar36 = param_1;
  goto code_r0x000140a95981;
code_r0x000140a958ea:
  puVar37 = puVar10;
  *(byte *)((longlong)puVar97 + -0x77) = *(byte *)((longlong)puVar97 + -0x77) + (char)puVar31;
  puVar22 = (uint *)((ulonglong)puVar98 & 0xffffffff);
  puVar98 = (uint *)((ulonglong)puVar97 & 0xffffffff);
  *(byte *)((longlong)param_1 + -0x3f) =
       *(byte *)((longlong)param_1 + -0x3f) + (char)((ulonglong)puVar22 >> 8);
  *puVar22 = *puVar22 >> 6 | *puVar22 << 0x1a;
  *(int *)(puVar37 + 0x58) = (int)puVar31;
code_r0x000140a958e5:
  uVar29 = *(ushort *)((longlong)unaff_R13 + (longlong)puVar27);
  *(uint **)(puVar98 + 0x1c52) = puVar36;
  uVar29 = uVar29 << 8 | uVar29 >> 8;
  *(ushort *)(puVar37 + 0x58) = uVar29;
  if (uVar29 < 2) {
    *(undefined1 **)(puVar37 + 0x30) = puVar37 + 0x58;
    *(code **)(puVar37 + 0x38) = pdb_140f71140;
    *(undefined8 *)(puVar37 + -8) = 0x140a95b3d;
    pdb_140f60760(puVar37 + 0x60,&UNK_143045600,puVar37 + 0x30);
    unaff_RBX = *(char **)(puVar37 + 0x60);
    pcVar23 = (char *)0x0;
    unaff_XMM7_Qa = *(byte **)(puVar37 + 0x68);
    unaff_XMM7_Qb = *(uint **)(puVar37 + 0x70);
    goto LAB_140a95c82;
  }
  puVar27 = (uint *)((longlong)puVar36 + (ulonglong)(ushort)(uVar29 - 2));
  *(uint **)(puVar98 + 0x1c52) = puVar27;
  puVar25 = (uint *)0x0;
  if ((char)puVar22 == '\x06') {
LAB_140a95b72:
    *(byte *)((longlong)puVar98 + 0x71c6) = 1;
    *(byte *)param_1 = 0xd;
    return puVar22;
  }
  goto LAB_140a956b3;
code_r0x000140a957bd:
  puVar22 = (uint *)CONCAT71((int7)((ulonglong)puVar22 >> 8),(char)puVar22 + -0x7f);
  puVar37 = puVar77;
  goto code_r0x000140a957ae;
code_r0x000140a957c5:
  if (bVar17 < 3) goto code_r0x000140a957ce;
  *(undefined8 *)(puVar37 + -8) = 0x140a95ba6;
  pdb_14007ee60();
  unaff_RBX = (char *)0x18;
  *(undefined8 *)(puVar37 + -8) = 0x140a95bba;
  unaff_XMM7_Qa = pub_1406abab0(0x18,1);
  uVar21 = _UNK_143045558;
  if (unaff_XMM7_Qa != (byte *)0x0) {
    *(undefined8 *)unaff_XMM7_Qa = _UNK_143045550;
    *(undefined8 *)(unaff_XMM7_Qa + 8) = uVar21;
    unaff_XMM7_Qa[0x10] = 0x65;
    unaff_XMM7_Qa[0x11] = 0x20;
    unaff_XMM7_Qa[0x12] = 0x66;
    unaff_XMM7_Qa[0x13] = 0x6f;
    unaff_XMM7_Qa[0x14] = 0x72;
    unaff_XMM7_Qa[0x15] = 0x6d;
    unaff_XMM7_Qa[0x16] = 0x61;
    unaff_XMM7_Qa[0x17] = 0x74;
    pcVar23 = (char *)0x0;
    unaff_XMM7_Qb = _UNK_142f8bc38;
    goto LAB_140a95c82;
  }
  *(undefined8 *)(puVar37 + -8) = 0x140a95ce2;
  pdb_142dc7e2a(1,0x18);
  goto code_r0x000140a95ce2;
code_r0x000143045969:
  *(int *)((longlong)puVar25 + -0x5afdf803) =
       *(int *)((longlong)puVar25 + -0x5afdf803) + (int)puVar37;
  *(byte *)((longlong)puVar25 + -0x5afe9503) =
       *(byte *)((longlong)puVar25 + -0x5afe9503) + (char)unaff_R12;
  pbVar32 = (byte *)(ulonglong)(uint)((int)puVar98 >> 1);
  pbVar101 = pbVar32 + -1;
  *pbVar32 = (byte)*param_1;
  pbVar32 = (byte *)((longlong)puVar25 + (longlong)pbVar101 * 8 + -0x25b017f);
  *pbVar32 = *pbVar32 + 1;
  *(undefined4 *)pbVar101 = *(undefined4 *)((longlong)param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

