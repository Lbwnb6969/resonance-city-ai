// VA 0x140641840, PDB extent 827 bytes
// tiny_glade::crash_pickup::crash_payload::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142f8bc41) overlaps instruction at (ram,0x000142f8bc40)
    */
/* WARNING: Removing unreachable block (ram,0x000142f8bc6c) */
/* WARNING: Removing unreachable block (ram,0x000142f8bca9) */
/* WARNING: Removing unreachable block (ram,0x000142f8bc6f) */
/* WARNING: Removing unreachable block (ram,0x000142f8bc74) */
/* WARNING: Removing unreachable block (ram,0x000142f8bce6) */
/* WARNING: Removing unreachable block (ram,0x0001406422e3) */
/* WARNING: Removing unreachable block (ram,0x000140641902) */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Removing unreachable block (ram,0x000140641fdf) */
/* WARNING: Removing unreachable block (ram,0x000140641fe8) */
/* WARNING: Removing unreachable block (ram,0x00014064203e) */
/* WARNING: Removing unreachable block (ram,0x000140642044) */
/* WARNING: Removing unreachable block (ram,0x000140642049) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::crash_pickup::crash_payload::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
   Extent: 827 */

byte * pdb_140641840(byte *param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4)

{
  uint *puVar1;
  byte **ppbVar2;
  undefined3 uVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined6 uVar15;
  undefined7 uVar14;
  char *pcVar11;
  longlong lVar12;
  byte *extraout_RAX;
  byte *extraout_RAX_00;
  byte *extraout_RAX_01;
  byte *extraout_RAX_02;
  byte bVar16;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined2 uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  byte **ppbVar20;
  byte **ppbVar21;
  byte **ppbVar22;
  byte **ppbVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  byte **ppbVar26;
  byte **ppbVar27;
  byte **ppbVar28;
  byte **ppbVar29;
  byte **ppbVar30;
  undefined **ppuVar31;
  byte **ppbVar32;
  byte **ppbVar33;
  ulonglong uVar34;
  undefined8 *puVar35;
  uint uVar36;
  ulonglong arg2;
  undefined8 in_R11;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar37;
  char in_AF;
  bool bVar38;
  undefined8 uVar39;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar40 [16];
  undefined1 in_XMM1 [16];
  byte **ppbStack_2c8;
  ulonglong *puStack_2c0;
  byte *pbStack_2b8;
  undefined *apuStack_2b0 [3];
  undefined *puStack_298;
  undefined8 uStack_290;
  ulonglong uStack_280;
  ulonglong *puStack_278;
  byte *apbStack_240 [63];
  undefined8 auStack_48 [3];
  undefined8 uStack_30;
  int *piVar13;
  
  ppbVar28 = &pbStack_2b8;
  ppbVar29 = &pbStack_2b8;
  ppbVar30 = &pbStack_2b8;
  ppbVar20 = &pbStack_2b8;
  ppbVar21 = &pbStack_2b8;
  ppbVar26 = &pbStack_2b8;
  ppbVar27 = &pbStack_2b8;
  ppbVar32 = &pbStack_2b8;
  ppbVar22 = &pbStack_2b8;
  ppbVar23 = &pbStack_2b8;
  ppbVar2 = apbStack_240 + 1;
  uStack_30 = 0xfffffffffffffffe;
  uVar9 = param_2[5];
  if (param_2[4] <= uVar9) {
LAB_1406418ad:
    uStack_280 = 5;
LAB_1406418b5:
    puStack_2c0 = (ulonglong *)0x1406418c1;
    puStack_278 = (ulonglong *)pdb_142d84ef0(param_2,&uStack_280);
LAB_140641aef:
    *(ulonglong **)(param_1 + 8) = puStack_278;
    param_1[0] = 4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x80;
    return param_1;
  }
  uVar19 = 0x100002600;
LAB_140641887:
  uVar9 = uVar9 + 1;
  bVar6 = *(byte *)((param_2[3] - 1) + uVar9);
  arg2 = (ulonglong)bVar6;
  if (arg2 < 0x23) {
    if ((0x100002600U >> (arg2 & 0x3f) & 1) != 0) goto code_r0x000140641899;
    if (arg2 != 0x22) goto LAB_1406418ea;
    puStack_2c0 = (ulonglong *)0x1406418d8;
    puVar18 = param_2;
    auVar40._0_8_ = pdb_14040d1c0(&uStack_280);
    auVar40._8_8_ = extraout_XMM0_Qb;
    uVar8 = (uint)(byte)uStack_280;
    if ((byte)uStack_280 != 5) goto LAB_14064193c;
    goto LAB_140641aef;
  }
LAB_1406418ea:
  if (bVar6 != 0x7b) {
    uStack_280 = 10;
    goto LAB_1406418b5;
  }
  puVar18 = param_2 + 7;
  *(byte *)puVar18 = (byte)*puVar18 - 1;
  if ((byte)*puVar18 == 0) {
    uStack_280 = 0x18;
    goto LAB_1406418b5;
  }
  param_2[5] = uVar9;
  puStack_2c0 = (ulonglong *)0x14064190d;
  uVar39 = pdb_140408300(&uStack_280,param_2);
  UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_142f8bb0c;
  uVar9 = (ulonglong)*(int *)(&UNK_142f8bb0c + (uStack_280 & 0xff) * 4);
  bVar38 = SCARRY8(uVar9,0x142f8bb0c);
  pbVar10 = &UNK_142f8bb0c + uVar9;
  bVar37 = pbVar10 == (byte *)0x0;
  bVar6 = (byte)pbVar10;
  uVar17 = SUB82(puStack_278,0);
  puVar18 = puStack_278;
  ppbVar33 = &pbStack_2b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_280 & 0xff) {
  case 0:
    puStack_2c0 = (ulonglong *)0x14064193a;
    pdb_14040be20(param_1,puStack_278,&UNK_142f8b908,2);
    goto code_r0x0001406419a1;
  case 1:
    goto code_r0x000140641a4c;
  case 2:
    goto code_r0x000140641982;
  case 3:
    puStack_2c0 = (ulonglong *)0x1406419a1;
    pdb_14040a710(param_1,puStack_278,&UNK_142f8b948,2);
    ppbVar22 = &pbStack_2b8;
    goto code_r0x0001406419a1;
  case 4:
    goto code_r0x00014064196b;
  case 5:
    *(ulonglong **)(param_1 + 8) = puStack_278;
    param_1[0] = 4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x80;
    *(byte *)(param_2 + 7) = (byte)param_2[7] + 1;
    return param_1;
  case 6:
    uVar8 = (uint)*param_2 | 0x42f8bb0c;
    uVar19 = (ulonglong)uVar8;
    *pbVar10 = *pbVar10 + bVar6;
    (&UNK_142f8ba99)[uVar9] = (&UNK_142f8ba99)[uVar9] + (char)uVar8;
    UNRECOVERED_JUMPTABLE_00 = (code *)((longlong)*(int *)(uVar19 + arg2 * 4) + uVar19);
                    /* WARNING: Could not recover jumptable at 0x000140641fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)
                                (uVar19,(ulonglong)ppbVar2 & 0xffffffff,UNRECOVERED_JUMPTABLE_00);
    return pbVar10;
  case 7:
  case 9:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
    auVar40[0] = -((char)uVar39 == UNK_142f8b600);
    auVar40[1] = -((char)((ulonglong)uVar39 >> 8) == UNK_142f8b601);
    auVar40[2] = -((char)((ulonglong)uVar39 >> 0x10) == UNK_142f8b602);
    auVar40[3] = -((char)((ulonglong)uVar39 >> 0x18) == UNK_142f8b603);
    auVar40[4] = -((char)((ulonglong)uVar39 >> 0x20) == UNK_142f8b604);
    auVar40[5] = -((char)((ulonglong)uVar39 >> 0x28) == UNK_142f8b605);
    auVar40[6] = -((char)((ulonglong)uVar39 >> 0x30) == UNK_142f8b606);
    auVar40[7] = -((char)((ulonglong)uVar39 >> 0x38) == UNK_142f8b607);
    auVar40[8] = -((char)extraout_XMM0_Qb_00 == UNK_142f8b608);
    auVar40[9] = -((char)((ulonglong)extraout_XMM0_Qb_00 >> 8) == UNK_142f8b609);
    auVar40[10] = -((char)((ulonglong)extraout_XMM0_Qb_00 >> 0x10) == UNK_142f8b60a);
    auVar40[0xb] = -((char)((ulonglong)extraout_XMM0_Qb_00 >> 0x18) == UNK_142f8b60b);
    auVar40[0xc] = -((char)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) == UNK_142f8b60c);
    auVar40[0xd] = -((char)((ulonglong)extraout_XMM0_Qb_00 >> 0x28) == UNK_142f8b60d);
    auVar40[0xe] = -((char)((ulonglong)extraout_XMM0_Qb_00 >> 0x30) == UNK_142f8b60e);
    auVar40[0xf] = -((char)((ulonglong)extraout_XMM0_Qb_00 >> 0x38) == UNK_142f8b60f);
    goto code_r0x000140642076;
  case 8:
    if (((ulonglong)(uint)puStack_278[1] ^ 0x726f6c6f | 0x142f8bb0c) == 0) {
      (&UNK_142f8bb0d)[uVar9] = 0;
      *pbVar10 = 0;
      return pbVar10;
    }
    goto LAB_140642086;
  case 10:
    out(*param_1,uVar17);
    if (!bVar37) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    goto code_r0x000140642026;
  case 0x11:
    puVar35 = (undefined8 *)((ulonglong)pbVar10 & 0xffffffff);
    uVar9 = (ulonglong)&pbStack_2b8 & 0xffffffff;
    uVar24 = (ulonglong)ppbVar2 & 0xffffffff;
    uVar7 = CONCAT11((char)(uVar9 >> 8) + param_1[0xf],(char)uVar9);
    pbVar10 = (byte *)CONCAT71((int7)(CONCAT62((int6)(uVar9 >> 0x10),uVar7) >> 8),
                               *(undefined1 *)(((ulonglong)uVar7 & 0xff) + 0x100002600));
    puVar25 = (undefined8 *)(uVar24 - 8);
    *(undefined8 **)(uVar24 - 8) = puVar35;
    cVar4 = '\x1e';
    do {
      puVar35 = puVar35 + -1;
      puVar25 = puVar25 + -1;
      *puVar25 = *puVar35;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    *(ulonglong *)(uVar24 - 0x100) = uVar24 - 8;
    *(int *)pbVar10 = *(int *)pbVar10 + 1;
    *(char *)(uVar24 + 0x2a) = *(char *)(uVar24 + 0x2a) + (char)((ulonglong)puStack_278 >> 8);
    pbVar10[1] = 2;
    goto code_r0x000140642053;
  case 0x12:
    *pbVar10 = *pbVar10 + bVar6;
    goto LAB_140642086;
  case 0x13:
    if (!bVar37) goto code_r0x00014064212d;
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(0x142f8bb,(byte)*param_2 | 0xc);
    pbVar10 = (byte *)0x81;
    cRam0000000000000081 = cRam0000000000000081 + -0x7f;
    goto code_r0x0001406420f9;
  case 0x14:
  case 0x18:
  case 0x1b:
    goto code_r0x0001406421ba;
  case 0x15:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)();
    return pbVar10;
  case 0x16:
    pbVar10 = (byte *)0x72636461;
    if (bVar37) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    break;
  case 0x17:
    UNRECOVERED_JUMPTABLE_00 = (code *)(*puStack_278 ^ 0x665f74726f706572);
    goto code_r0x00014064218a;
  case 0x19:
    if (*(byte *)((longlong)puStack_278 + 2) == 0x67 && (short)*puStack_278 == 0x6f6c) {
      (&UNK_142f8bb0d)[uVar9] = 5;
      *pbVar10 = 0;
      return pbVar10;
    }
    goto LAB_140642202;
  case 0x1a:
    goto code_r0x00014064210d;
  case 0x1c:
    *pbVar10 = *pbVar10 + bVar6;
    return pbVar10;
  case 0x1d:
    pbVar10 = (byte *)(ulonglong)((uint)pbVar10 ^ *(uint *)((longlong)puStack_278 + 5));
    goto code_r0x00014064218a;
  case 0x1e:
    if (bVar37) goto code_r0x000140642244;
    break;
  case 0x1f:
    uVar9 = CONCAT71(0x142f8bb,UNK_142f8bb6f + '\f');
    goto code_r0x000140642236;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x26:
    goto code_r0x000140642283;
  case 0x23:
    goto code_r0x000140642246;
  case 0x25:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)();
    return pbVar10;
  case 0x27:
    pbVar10 = (byte *)0x5f687361;
    if (bVar37) goto code_r0x0001406421f8;
    cVar4 = cRam000000005f687361 + 'a';
    bVar37 = 0xf3 < bRam000000005f68731a;
    bRam000000005f68731a = bRam000000005f68731a + 0xc;
    bVar38 = bRam000000005f68731a == 0;
    if (bVar37) {
      UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT71(0x142f8bb,bRam000000005f68731a & 0xc);
      ppbVar27 = (byte **)&puStack_2c0;
      puStack_2c0 = (ulonglong *)0x100002600;
      if ((bRam000000005f68731a & 0xc) == 0) {
        uVar39 = CONCAT71(0x142f8bb,(undefined1)uRam000000005f6872ea);
        uRam000000005f6872ea = uRam000000005f6872ea >> 0x10 | uRam000000005f6872ea << 0x10;
        cRam000000005f687361 = cVar4;
        goto code_r0x00014064231f;
      }
      out(*(undefined4 *)param_1,uVar17);
      out(param_1[4],uVar17);
      bVar38 = false;
    }
    if (bVar38) {
      cRam000000005f687361 = cRam000000005f687361 + -0x3e;
      goto pdb_140f679a0;
    }
    cRam000000005f687361 = cVar4;
    if ((short)puStack_278[1] != 0x7478 || UNRECOVERED_JUMPTABLE_00 != (code *)*puStack_278)
    goto LAB_1406422fb;
    uRam000000005f687362 = 4;
    goto code_r0x0001406422f1;
  case 0x28:
    goto pdb_140f679a0;
  case 0x29:
    goto code_r0x000140642459;
  case 0x2a:
    goto code_r0x000140642420;
  case 0x2b:
    *(uint *)((longlong)puStack_278 + 0x17b84102) =
         *(int *)((longlong)puStack_278 + 0x17b84102) + (uint)(0xfffffffebd0744f3 < uVar9);
    *pbVar10 = *pbVar10 + bVar6;
    goto code_r0x00014064243a;
  case 0x2c:
    UNRECOVERED_JUMPTABLE_00 = (code *)((ulonglong)puStack_278 & 0xffffffff);
code_r0x000140642420:
    goto pdb_140f679a0;
  case 0x2d:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)();
    return pbVar10;
  case 0x2e:
    *(uint *)(&UNK_142f8ba95 + uVar9) = *(uint *)(&UNK_142f8ba95 + uVar9) | 0x42f8bb0c;
    puStack_2c0 = (ulonglong *)&UNK_1406424cc;
    pdb_1404c8780();
    goto code_r0x0001406424cd;
  case 0x2f:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)();
    return pbVar10;
  case 0x30:
    UNK_142f8bac4 = UNK_142f8bac4 + bVar6;
    *pbVar10 = *pbVar10 | bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    goto code_r0x00014064261f;
  case 0x31:
    *pbVar10 = *pbVar10 + bVar6;
    UNK_142f8bac4 = UNK_142f8bac4 + bVar6;
    *pbVar10 = *pbVar10 | bVar6;
    *pbVar10 = *pbVar10 + bVar6;
  case 0x32:
    uVar5 = in(uVar17);
    pcVar11 = (char *)(CONCAT71((int7)((ulonglong)pbVar10 >> 8),uVar5) + -0x73);
    *pcVar11 = *pcVar11 + -0xc;
    puStack_2c0 = (ulonglong *)0x30;
    pub_1406abac0(apbStack_240[0],0x48,8);
    return extraout_RAX_02;
  case 0x33:
    puStack_2c0 = (ulonglong *)ppbVar2;
    pub_1406abac0((byte *)puStack_278[5],0x48,8);
    return extraout_RAX_01;
  default:
    *(uint *)(param_1 + 0x6b) =
         (*(int *)(param_1 + 0x6b) + -0x2600) - (uint)(0xfffffffebd0744f3 < uVar9);
    goto code_r0x000142f8bb10;
  case 0x37:
    goto code_r0x000142f8bb19;
  case 0x3b:
    ppbVar33 = &pbStack_2b8;
  case 0x3f:
    goto code_r0x000142f8bb22;
  case 0x41:
  case 0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4b:
    ppbVar33 = &pbStack_2b8;
    goto code_r0x000142f8bb22;
  case 0x4f:
    goto code_r0x000142f8bb14;
  case 0x51:
    goto code_r0x000142f8bb10;
  }
  if (bVar37) {
    pbVar10[1] = 7;
    *pbVar10 = 0;
    return pbVar10;
  }
  goto LAB_140642202;
code_r0x000140641899:
  param_2[5] = uVar9;
  if (uVar9 == param_2[4]) goto LAB_1406418ad;
  goto LAB_140641887;
LAB_14064193c:
  UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_142f8baf8;
  uVar9 = (ulonglong)*(int *)(&UNK_142f8baf8 + (ulonglong)uVar8 * 4);
  bVar37 = 0xfffffffebd074507 < uVar9;
  pbVar10 = &UNK_142f8baf8 + uVar9;
  bVar38 = pbVar10 == (byte *)0x0;
  bVar6 = (byte)pbVar10;
  uVar8 = (uint)pbVar10;
  uVar15 = (undefined6)((ulonglong)pbVar10 >> 0x10);
  ppbVar33 = &pbStack_2b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(pbVar10) {
  case (byte *)0x14064194a:
    goto code_r0x00014064194a;
  case (byte *)0x140641961:
    ppbVar20 = (byte **)((ulonglong)pbVar10 & 0xffffffff);
    uVar14 = (undefined7)(((ulonglong)&pbStack_2b8 & 0xffffffff) >> 8);
    cVar4 = (char)((ulonglong)&pbStack_2b8 & 0xffffffff) + UNK_142f8bab1;
    cVar4 = cVar4 + *(char *)CONCAT71(uVar14,cVar4);
    pcVar11 = (char *)CONCAT71(uVar14,cVar4);
    *pcVar11 = *pcVar11 + cVar4;
code_r0x00014064196b:
    *(undefined8 *)((longlong)ppbVar20 + -8) = 0x140641973;
    pdb_140409850(param_1);
    ppbVar22 = ppbVar20;
    break;
  case (byte *)0x140641978:
    ppbVar21 = (byte **)(CONCAT62(uVar15,CONCAT11(((longlong)pbVar10 < 0) << 7 | bVar38 << 6 |
                                                  in_AF << 4 |
                                                  ((POPCOUNT((ulonglong)pbVar10 & 0xff) & 1U) == 0)
                                                  << 2 | 2U | bVar37,*param_1)) & 0xffffffff);
    uVar14 = (undefined7)(((ulonglong)&pbStack_2b8 & 0xffffffff) >> 8);
    cVar4 = (char)((ulonglong)&pbStack_2b8 & 0xffffffff) + UNK_142f8bab1;
    cVar4 = cVar4 + *(char *)CONCAT71(uVar14,cVar4);
    pcVar11 = (char *)CONCAT71(uVar14,cVar4);
    *pcVar11 = *pcVar11 + cVar4;
    param_1 = param_1 + 1;
code_r0x000140641982:
    *(undefined8 *)((longlong)ppbVar21 + -8) = 0x14064198a;
    pdb_14040b560(param_1);
    ppbVar22 = ppbVar21;
    break;
  case (byte *)0x140641a38:
    goto code_r0x000140641a38;
  case (byte *)0x140641a85:
    (&UNK_142f8bab0)[uVar9] = (&UNK_142f8bab0)[uVar9] | (byte)param_4;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *(char *)(uVar9 + 0x12bff4440) = *(char *)(uVar9 + 0x12bff4440) + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (byte *)0x140641f96:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (byte *)0x140641fc5:
    puStack_278 = puVar18;
    if (bVar37 || bVar38) {
code_r0x000140642026:
      pbVar10[-0x7f] = pbVar10[-0x7f] | (byte)UNRECOVERED_JUMPTABLE_00;
      while (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + -1;
        out(*(undefined4 *)param_1,(short)puStack_278);
        param_1 = param_1 + 4;
      }
      out(*param_1,(short)puStack_278);
      *pbVar10 = *pbVar10 + (char)pbVar10;
      bVar38 = puStack_278 == (ulonglong *)0x0;
    }
    else if (bVar37) {
code_r0x000140642053:
      *pbVar10 = 0;
      return pbVar10;
    }
    goto code_r0x000140642031;
  case (byte *)0x140641fea:
    (&UNK_142f8baf9)[uVar9] = 0xf8;
    *pbVar10 = 0;
    return pbVar10;
  case (byte *)0x140642010:
    *pbVar10 = *pbVar10 + bVar6;
    return pbVar10;
  case (byte *)0x140642031:
    goto code_r0x000140642031;
  case (byte *)0x14064205a:
    *pbVar10 = *pbVar10 + bVar6;
    return pbVar10;
  case (byte *)0x140642076:
    goto code_r0x000140642076;
  case (byte *)0x140642098:
    goto code_r0x000140642098;
  case (byte *)0x1406420ba:
    LOCK();
    puVar1 = (uint *)((ulonglong)((uint)*param_2 | 0x42f8baf8) + 1);
    uVar36 = *puVar1;
    *puVar1 = uVar8;
    pcVar11 = (char *)CONCAT44((int)((ulonglong)pbVar10 >> 0x20),uVar36);
    UNLOCK();
    *pcVar11 = *pcVar11 + (char)uVar36;
                    /* WARNING: Could not recover jumptable at 0x0001406420cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar10 = (byte *)(*(code *)(&UNK_142f8bb54 + *(int *)(&UNK_142f8bb54 + arg2 * 4)))();
    return pbVar10;
  case (byte *)0x1406420e4:
    return pbVar10;
  case (byte *)0x1406420f9:
    goto code_r0x0001406420f9;
  case (byte *)0x140642126:
    (&UNK_142f8ba79)[uVar9] = (&UNK_142f8ba79)[uVar9] | 0xf8;
    while (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + -1;
      out(*(undefined4 *)param_1,(short)puVar18);
      param_1 = param_1 + 4;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)0x0;
code_r0x00014064212d:
    pbVar10[9] = pbVar10[9] + (char)UNRECOVERED_JUMPTABLE_00;
    return pbVar10;
  case (byte *)0x14064214f:
    *pbVar10 = *pbVar10 + bVar6;
    return pbVar10;
  case (byte *)0x14064216e:
    uVar8 = _UNK_142f8bb01 + 0x42f8baf8;
    puVar25 = &puStack_2c0;
    cVar4 = '\b';
    do {
      ppbVar2 = ppbVar2 + -1;
      puVar25 = puVar25 + -1;
      *puVar25 = *ppbVar2;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    *pbVar10 = *pbVar10 + bVar6;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)((ulonglong)puVar18 >> 8);
    (&UNK_142f8baf9)[uVar9] = (char)uVar8;
    *pbVar10 = 0;
    return pbVar10;
  case (byte *)0x140642186:
    if (SCARRY8(uVar9,0x142f8baf8)) {
      uVar8 = in((short)puVar18);
      *(uint *)param_2 = uVar8;
      bVar38 = true;
      puStack_278 = puVar18;
code_r0x0001406421f8:
      if (bVar38) {
code_r0x000140642246:
        ppbVar27 = &pbStack_2b8;
        if (*(byte *)((longlong)puStack_278 + 4) == 99 && (uint)*puStack_278 == 0x696e6150) {
          pbVar10[1] = 0;
          goto code_r0x0001406422f1;
        }
        goto LAB_1406422fb;
      }
      uVar8 = (uint)pbVar10 ^ *(uint *)((longlong)puStack_278 + 6);
      bVar38 = arg2 == 0 && UNRECOVERED_JUMPTABLE_00 == (code *)0x0;
    }
    else {
      puStack_278 = puVar18;
      if (!bVar37) goto code_r0x00014064218a;
      uVar8 = uVar8 | 0x42f8baf8;
      bVar38 = uVar8 == 0;
    }
    pbVar10 = (byte *)(ulonglong)uVar8;
    if (bVar38) {
      pbVar10[1] = 8;
      *pbVar10 = 0;
      return pbVar10;
    }
    goto LAB_140642202;
  case (byte *)0x1406421a6:
    *pbVar10 = *pbVar10 + bVar6;
    goto code_r0x0001406421a2;
  case (byte *)0x1406421ba:
    goto code_r0x0001406421ba;
  case (byte *)0x1406421dc:
    *pbVar10 = *pbVar10 + bVar6;
    return pbVar10;
  case (byte *)0x140642202:
    goto LAB_140642202;
  case (byte *)0x140642225:
    pbVar10 = &UNK_142f8baf8;
    uVar9 = arg2 - 5;
    puStack_278 = puVar18;
    ppbVar27 = &pbStack_2b8;
    if (uVar9 < 10) goto code_r0x000140642236;
    goto LAB_1406422fb;
  case (byte *)0x140642243:
    goto code_r0x000140642244;
  case (byte *)0x14064226f:
    ppbVar26 = (byte **)&puStack_2c0;
    uVar8 = *(uint *)(&UNK_142f8bb2b + unaff_GS_OFFSET + uVar9);
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(ulonglong)
                 CONCAT31((int3)(uVar8 >> 8),(byte)uVar8 | *(byte *)((ulonglong)uVar8 - 0x47));
    param_4 = param_4 ^ *(ulonglong *)((longlong)puVar18 + in_FS_OFFSET + 6);
    puStack_2c0 = puVar18;
code_r0x000140642283:
    puStack_278 = puVar18;
    ppbVar27 = ppbVar26;
    if (param_4 == 0 && UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      pbVar10[1] = 1;
code_r0x0001406422f1:
      *pbVar10 = 0;
      return pbVar10;
    }
LAB_1406422fb:
    *(undefined8 *)((longlong)ppbVar27 + -8) = 0x140642319;
    uVar39 = pdb_142d86e40(puStack_278,arg2,&UNK_142f8b848,5);
    param_1 = pbVar10;
code_r0x00014064231f:
    *(undefined8 *)(param_1 + 8) = uVar39;
    *pbVar10 = 1;
    return pbVar10;
  case (byte *)0x1406423e6:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)();
    return pbVar10;
  case (byte *)0x1406423fd:
    *pbVar10 = *pbVar10 + bVar6;
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    puStack_2c0 = (ulonglong *)ppbVar2;
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)(&UNK_142f8bab2,(ulonglong)pbVar10 & 0xffffffff);
    return pbVar10;
  case (byte *)0x14064240c:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)();
    return pbVar10;
  case (byte *)0x140642423:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)(&UNK_142f8baf8,(ulonglong)pbVar10 & 0xffffffff);
    return pbVar10;
  case (byte *)0x14064243a:
    goto code_r0x00014064243a;
  case (byte *)0x140642445:
    UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
    pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)();
    return pbVar10;
  case (byte *)0x140642459:
    goto code_r0x000140642459;
  case (byte *)0x1406424ae:
    *pbVar10 = *pbVar10 + bVar6;
    (&UNK_142f8ba83)[uVar9] = (&UNK_142f8ba83)[uVar9] + -8;
    *(uint *)(&UNK_142f8ba81 + uVar9) = *(uint *)(&UNK_142f8ba81 + uVar9) | 0x42f8baf8;
    puStack_2c0 = (ulonglong *)&UNK_1406424bd;
    pdb_1404c8780();
code_r0x0001406424cd:
    apuStack_2b0[0] = &UNK_140f3c37e;
    uVar39 = GetProcessHeap(apbStack_240[0],0x48);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar10 = (byte *)HeapFree(uVar39,0,apbStack_240[0]);
    return pbVar10;
  case (byte *)0x14064261f:
    goto code_r0x00014064261f;
  case (byte *)0x14064263f:
    if ((longlong)uVar9 < -0x142f8baf8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puStack_2c0 = (ulonglong *)&UNK_1406425e3;
    pub_1406abac0(apbStack_240[0],(ulonglong)puVar18,arg2);
    return extraout_RAX;
  case (byte *)0x140642675:
    return pbVar10;
  case (byte *)0x14064267c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (byte *)0x142f8baf8:
    goto code_r0x000142f8baf8;
  case (byte *)0x142f8bafc:
code_r0x000142f8bb00:
    ppbVar28 = (byte **)&puStack_2c0;
code_r0x000142f8baf8:
    ppbVar28[0xffffffffffffffff] = param_1;
    ppbVar29 = ppbVar28 + 2;
code_r0x000142f8bb05:
    ppbVar30 = (byte **)((longlong)ppbVar29 + 0x18);
code_r0x000142f8bb0e:
    ppuVar31 = (undefined **)((longlong)ppbVar30 + 8);
    goto code_r0x000142f8bb12;
  case (byte *)0x142f8bb00:
    goto code_r0x000142f8bb00;
  case (byte *)0x142f8bb05:
    goto code_r0x000142f8bb05;
  case (byte *)0x142f8bb0e:
    goto code_r0x000142f8bb0e;
  case (byte *)0x142f8bb10:
    goto code_r0x000142f8bb10;
  case (byte *)0x142f8bb14:
    goto code_r0x000142f8bb14;
  case (byte *)0x142f8bb22:
    goto code_r0x000142f8bb22;
  }
code_r0x0001406419a1:
  lVar12 = *(longlong *)param_1;
  ppbVar23 = ppbVar22;
  goto code_r0x0001406419a4;
code_r0x00014064194a:
  uVar8 = uVar8 + 0x42f8baf8;
  goto LAB_14064193c;
code_r0x000142f8bb14:
  uVar19 = (ulonglong)(uint)(*(int *)(param_1 + 0x6b) * 0x6b5e80fd);
  ppbVar32 = (byte **)&puStack_2c0;
  goto code_r0x000142f8bb19;
code_r0x00014064243a:
  goto pdb_140f679a0;
code_r0x0001406420f9:
  if (*(short *)((longlong)puVar18 + 4) == 0x7374 &&
      (uint)UNRECOVERED_JUMPTABLE_00 == (uint)*puVar18) {
code_r0x00014064210d:
    pbVar10[1] = 4;
    *pbVar10 = 0;
    return pbVar10;
  }
  goto LAB_140642202;
code_r0x000140642031:
  if (bVar38) {
    pbVar10[1] = 5;
    *pbVar10 = 0;
    return pbVar10;
  }
  goto LAB_140642086;
code_r0x00014064261f:
  pbVar10[-0x77] = pbVar10[-0x77] + (char)UNRECOVERED_JUMPTABLE_00;
  puStack_2c0 = (ulonglong *)&pbStack_2b8;
  pub_1406abac0((byte *)puVar18[5],0xb8,8);
  return extraout_RAX_00;
code_r0x0001406421ba:
  puVar25 = &puStack_2c0;
  cVar4 = '\x10';
  do {
    ppbVar2 = ppbVar2 + -1;
    puVar25 = puVar25 + -1;
    *puVar25 = *ppbVar2;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x000140642236:
  UNRECOVERED_JUMPTABLE_00 = (code *)(&UNK_142f8bb84 + *(int *)(&UNK_142f8bb84 + uVar9 * 4));
code_r0x000140642244:
                    /* WARNING: Could not recover jumptable at 0x000140642244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar10 = (byte *)(*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
  return pbVar10;
code_r0x000140641a38:
  bVar38 = SCARRY1(UNK_142f8ba7b,bVar6);
  UNK_142f8ba7b = UNK_142f8ba7b + bVar6;
  if (bVar38 != UNK_142f8ba7b < '\0') {
    *pbVar10 = *pbVar10 + bVar6;
    (&UNK_142f8ba81)[uVar9] = (&UNK_142f8ba81)[uVar9] + -8;
    pcVar11 = (char *)CONCAT62(uVar15,(ushort)bVar6);
    *pcVar11 = *pcVar11 + bVar6;
  }
code_r0x000140641a4c:
  puStack_298 = &UNK_142f8b6b8;
  uStack_290 = 9;
  puStack_2c0 = (ulonglong *)0x140641a77;
  pdb_140416600(&uStack_280);
  if (SBORROW8(0,uStack_280)) {
    *(ulonglong **)(param_1 + 8) = puStack_278;
    lVar12 = -0x7ffffffffffffffc;
    param_1[0] = 4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x80;
    ppbVar23 = &pbStack_2b8;
  }
  else {
    puStack_2c0 = (ulonglong *)0x140641ac2;
    pub_142e32760(param_1 + 8,&uStack_280,0x208);
    lVar12 = -0x8000000000000000;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x80;
  }
code_r0x0001406419a4:
  *(byte *)(param_2 + 7) = (byte)param_2[7] + 1;
  if (lVar12 != -0x7ffffffffffffffc) {
    *(undefined8 *)((longlong)ppbVar23 + -8) = 0x1406419cc;
    pub_142e32760(&uStack_280,param_1,0x238);
    uVar9 = param_2[5];
    if (uVar9 < param_2[4]) {
      do {
        uVar9 = uVar9 + 1;
        bVar6 = *(byte *)((param_2[3] - 1) + uVar9);
        if ((0x20 < (ulonglong)bVar6) || ((0x100002600U >> ((ulonglong)bVar6 & 0x3f) & 1) == 0)) {
          if (bVar6 == 0x7d) {
            param_2[5] = uVar9;
            return param_1;
          }
          auStack_48[0] = 10;
          *(undefined8 *)((longlong)ppbVar23 + -8) = 0x140641b45;
          uVar39 = pdb_142d855a0(param_2,auStack_48);
          goto code_r0x000140641a24;
        }
        param_2[5] = uVar9;
      } while (uVar9 != param_2[4]);
    }
    auStack_48[0] = 3;
    *(undefined8 *)((longlong)ppbVar23 + -8) = 0x140641a23;
    uVar39 = pdb_142d855a0(param_2,auStack_48);
code_r0x000140641a24:
    *(undefined8 *)(param_1 + 8) = uVar39;
    param_1[0] = 4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x80;
    *(undefined8 *)((longlong)ppbVar23 + -8) = 0x140641a34;
    pdb_1406426b0(&uStack_280);
  }
  return param_1;
code_r0x000142f8bb10:
  ppuVar31 = apuStack_2b0;
code_r0x000142f8bb12:
  ppbVar32 = (byte **)((longlong)ppuVar31 + 8);
code_r0x000142f8bb19:
  param_1 = ppbVar32[1];
  ppbVar33 = ppbVar32 + 3;
code_r0x000142f8bb22:
  *(undefined8 *)((longlong)ppbVar33 + -8) = 0x694dfd6b;
  uVar36 = (int)ppbVar2 * 0x14;
  uVar8 = (int)pbVar10 + 0x61fd6b69;
  pbVar10 = (byte *)(ulonglong)uVar8;
  bVar16 = (byte)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8);
  bVar6 = (byte)uVar8;
  if ((char)(*(byte *)(uVar19 + 0x6b) & bVar16) < '\0') {
    uVar36 = *(int *)(uVar19 - 3) * 0x48cab7d1;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    UNK_142f8bbed = UNK_142f8bbed + (char)UNRECOVERED_JUMPTABLE_00;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *(byte *)puVar18 = (byte)*puVar18 + bVar16;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *param_1 = *param_1 + (char)puVar18;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *(char *)((longlong)pbVar10 * 2) = *(char *)((longlong)pbVar10 * 2) + (char)uVar19;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    bVar16 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    uVar3 = (undefined3)(uVar8 >> 8);
    bVar6 = bVar6 - CARRY1(bVar16,bVar6);
    pbVar10 = (byte *)(ulonglong)CONCAT31(uVar3,bVar6);
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    bVar16 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = (*pbVar10 - bVar6) - CARRY1(bVar16,bVar6);
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 | bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    pbVar10 = (byte *)(ulonglong)CONCAT31(uVar3,bVar6);
  }
  else {
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + (char)UNRECOVERED_JUMPTABLE_00;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *pbVar10 = *pbVar10 + bVar6;
    *(char *)((longlong)pbVar10 * 2) = *(char *)((longlong)pbVar10 * 2) + bVar6;
  }
  cVar4 = (char)pbVar10;
  *pbVar10 = *pbVar10 + cVar4;
  *pbVar10 = *pbVar10 + cVar4;
  *pbVar10 = *pbVar10 + cVar4;
  pcVar11 = (char *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),0x2d);
  *(int *)(pcVar11 + in_FS_OFFSET) = *(int *)(pcVar11 + in_FS_OFFSET) + (int)pcVar11;
  *pcVar11 = *pcVar11 + '-';
  uVar34 = (ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE_00 + 0x6c);
  uVar5 = in((short)puVar18);
  *(undefined1 *)(ulonglong)uVar36 = uVar5;
  pcVar11[in_FS_OFFSET + 0x52] = pcVar11[in_FS_OFFSET + 0x52] & (byte)((ulonglong)pbVar10 >> 8);
  *(undefined8 *)(uVar34 - 8) = in_R11;
  *(undefined8 *)(uVar34 - 0x10) = in_R11;
  *(code **)(uVar34 - 0x18) = UNRECOVERED_JUMPTABLE_00;
  *(ulonglong *)(uVar34 - 0x20) = uVar34 - 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x000140642459:
  cVar4 = (char)pbVar10 + (char)UNRECOVERED_JUMPTABLE_00[-0x48];
  piVar13 = (int *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),cVar4);
  *piVar13 = *piVar13 - (int)piVar13;
  *(char *)piVar13 = (char)*piVar13 + cVar4;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar10 = (byte *)(**(code **)(*(longlong *)(UNRECOVERED_JUMPTABLE_00 + 8) + 0x18))
                              (*(undefined8 *)UNRECOVERED_JUMPTABLE_00);
  return pbVar10;
code_r0x00014064218a:
  if (*(longlong *)((longlong)puStack_278 + 5) == 0x7265646c6f665f74 &&
      UNRECOVERED_JUMPTABLE_00 == (code *)*puStack_278) {
code_r0x0001406421a2:
    pbVar10[1] = 1;
    *pbVar10 = 0;
    return pbVar10;
  }
LAB_140642202:
  pbVar10[1] = 9;
  *pbVar10 = 0;
  return pbVar10;
code_r0x000140642076:
  auVar40 = auVar40 & in_XMM1;
  if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000140642098:
    pbVar10[1] = 1;
    *pbVar10 = 0;
    return pbVar10;
  }
LAB_140642086:
  pbVar10[1] = 6;
  *pbVar10 = 0;
  return pbVar10;
}

