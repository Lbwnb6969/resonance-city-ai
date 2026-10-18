// VA 0x141184c50, PDB extent 415 bytes
// toolbar::mei::config::_::impl$0::deserialize::impl$2::visit_enum<ron::de::Enum>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141197233) overlaps instruction at (ram,0x00014119722d)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::config::_::impl$0::deserialize::impl$2::visit_enum<ron::de::Enum>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 415 */

uint * pdb_141184c50(uint *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  uint **ppuVar8;
  uint **ppuVar9;
  undefined1 uVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined7 uVar23;
  uint *extraout_RAX;
  uint *extraout_RAX_00;
  undefined *puVar18;
  longlong lVar19;
  byte *pbVar20;
  longlong lVar21;
  undefined8 uVar22;
  uint *extraout_RAX_01;
  uint *puVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  undefined8 *puVar30;
  longlong unaff_RBX;
  undefined8 *puVar31;
  uint **ppuVar32;
  uint **ppuVar33;
  uint **ppuVar34;
  uint **ppuVar35;
  uint **ppuVar36;
  uint **ppuVar37;
  undefined8 *unaff_RBP;
  undefined8 *puVar38;
  byte *unaff_RDI;
  undefined8 uVar39;
  longlong lVar40;
  longlong lVar41;
  uint in_R10D;
  ushort uVar42;
  longlong in_R11;
  ulonglong uVar43;
  longlong lVar44;
  byte *unaff_R12;
  uint *unaff_R13;
  undefined2 in_FS;
  bool bVar45;
  unkbyte10 in_ST0;
  byte bVar46;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte in_XMM1_Ba;
  byte in_XMM1_Bb;
  byte in_XMM1_Bc;
  byte in_XMM1_Bd;
  byte in_XMM1_Be;
  byte in_XMM1_Bf;
  byte in_XMM1_Bg;
  byte in_XMM1_Bh;
  byte in_XMM1_Bi;
  byte in_XMM1_Bj;
  byte in_XMM1_Bk;
  byte in_XMM1_Bl;
  byte in_XMM1_Bm;
  byte in_XMM1_Bn;
  byte in_XMM1_Bo;
  byte in_XMM1_Bp;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  byte bVar58;
  byte bVar59;
  undefined4 unaff_XMM7_Da;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  undefined4 unaff_XMM7_Db;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined4 unaff_XMM7_Dc;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined4 unaff_XMM7_Dd;
  byte bVar72;
  uint unaff_XMM8_Da;
  uint unaff_XMM8_Db;
  uint unaff_XMM8_Dc;
  uint unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined *apuStackX_8 [4];
  undefined1 auStack_a0 [32];
  uint *puStack_78;
  undefined1 auStack_70 [24];
  undefined *puStack_58;
  char cStack_50;
  char cStack_4f;
  undefined2 uStack_4e;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint *puStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  undefined **ppuStack_10;
  
  ppuVar32 = &puStack_78;
  ppuVar33 = &puStack_78;
  ppuVar35 = &puStack_78;
  ppuVar37 = &puStack_78;
  ppuVar36 = &puStack_78;
  auVar48._0_8_ = pdb_14230c8f0(&cStack_50);
  auVar48._8_8_ = extraout_XMM0_Qb;
  if (cStack_50 != '2') {
    param_1[1] = uStack_4c;
    *(uint *)((longlong)param_1 + 1) = CONCAT13((undefined1)uStack_4c,CONCAT21(uStack_4e,cStack_4f))
    ;
    param_1[3] = uStack_44;
    *(uint *)((longlong)param_1 + 9) = CONCAT13((undefined1)uStack_44,uStack_48._1_3_);
    *(uint **)(param_1 + 10) = puStack_28;
    *(undefined **)(param_1 + 0xc) = puStack_20;
    *(undefined8 *)(param_1 + 0xe) = uStack_18;
    *(undefined ***)(param_1 + 0x10) = ppuStack_10;
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_34,uStack_38);
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
    *(char *)param_1 = cStack_50;
    *(byte *)(param_1 + 2) = (byte)uStack_48;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_3c,uStack_40);
    return param_1;
  }
  puVar29 = (uint *)CONCAT44(uStack_3c,uStack_40);
  puVar24 = (uint *)&UNK_14329f990;
  uVar16 = (ulonglong)*(int *)(&UNK_14329f990 + (ulonglong)(byte)uStack_48 * 4);
  bVar45 = 0xfffffffebcd6066f < uVar16;
  puVar17 = (uint *)(&UNK_14329f990 + uVar16);
  cVar12 = (char)puVar17;
  uVar13 = (uint)puVar17;
  uVar23 = (undefined7)((ulonglong)puVar17 >> 8);
  bVar11 = (byte)unaff_XMM7_Da;
  bVar58 = (byte)((uint)unaff_XMM7_Da >> 8);
  bVar59 = (byte)((uint)unaff_XMM7_Da >> 0x10);
  bVar60 = (byte)((uint)unaff_XMM7_Da >> 0x18);
  bVar61 = (byte)unaff_XMM7_Db;
  bVar62 = (byte)((uint)unaff_XMM7_Db >> 8);
  bVar63 = (byte)((uint)unaff_XMM7_Db >> 0x10);
  bVar64 = (byte)((uint)unaff_XMM7_Db >> 0x18);
  bVar65 = (byte)unaff_XMM7_Dc;
  bVar66 = (byte)((uint)unaff_XMM7_Dc >> 8);
  bVar67 = (byte)((uint)unaff_XMM7_Dc >> 0x10);
  bVar68 = (byte)((uint)unaff_XMM7_Dc >> 0x18);
  bVar69 = (byte)unaff_XMM7_Dd;
  bVar70 = (byte)((uint)unaff_XMM7_Dd >> 8);
  bVar71 = (byte)((uint)unaff_XMM7_Dd >> 0x10);
  bVar72 = (byte)((uint)unaff_XMM7_Dd >> 0x18);
  puVar28 = puVar29;
  ppuVar8 = &puStack_78;
  ppuVar9 = &puStack_78;
  ppuVar34 = &puStack_78;
  puVar38 = unaff_RBP;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)uStack_48) {
  case 0:
    param_1[1] = 2;
    goto code_r0x000141184dae;
  case 1:
    param_1[1] = 3;
    goto code_r0x000141184dae;
  case 2:
    param_1[1] = 4;
    goto code_r0x000141184dae;
  case 3:
    pdb_14230e550(&cStack_50);
    if (cStack_50 != '2') {
code_r0x000141184dba:
      *(undefined ***)(param_1 + 0x10) = ppuStack_10;
      *(undefined **)(param_1 + 0xc) = puStack_20;
      *(undefined8 *)(param_1 + 0xe) = uStack_18;
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
      *(uint **)(param_1 + 10) = puStack_28;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_3c,uStack_40);
      *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_34,uStack_38);
      *(ulonglong *)param_1 = CONCAT44(uStack_4c,CONCAT22(uStack_4e,CONCAT11(cStack_4f,cStack_50)));
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_44,uStack_48);
      return param_1;
    }
    param_1[1] = 5;
    *(char *)(param_1 + 2) = cStack_4f;
    goto code_r0x000141184dae;
  case 4:
    pdb_14230ecf0(&cStack_50);
    if (cStack_50 != '2') goto code_r0x000141184dba;
    param_1[1] = 6;
    *(char *)(param_1 + 2) = cStack_4f;
    goto code_r0x000141184dae;
  case 5:
    pdb_14230ce10(param_1,puVar29,2);
    return param_1;
  case 6:
    pdb_14230e7a0(&cStack_50);
    if (cStack_50 != '2') goto code_r0x000141184dba;
    param_1[1] = 8;
    param_1[2] = uStack_4c;
    param_1[3] = uStack_48;
    goto code_r0x000141184dae;
  case 7:
    pdb_14230ea60(&cStack_50);
    if (cStack_50 != '2') goto code_r0x000141184dba;
    *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_38,uStack_3c);
    *(ulonglong *)(param_1 + 7) = CONCAT44((undefined4)uStack_30,uStack_34);
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_48,uStack_4c);
    *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_40,uStack_44);
code_r0x000141184dae:
    *(char *)param_1 = '2';
    return param_1;
  case 8:
    uVar10 = in((short)uStack_40);
    UNK_14329f91d = UNK_14329f91d ^ 0x90;
    ppuVar37 = &puStack_78;
    switch(CONCAT71(uVar23,uVar10)) {
    case 0:
      puVar17 = (uint *)(ulonglong)((ushort)*puVar29 ^ 0x6147);
      param_4 = (ulonglong)*(byte *)((longlong)puVar29 + 2);
      goto code_r0x000141184e20;
    case 1:
      ppuVar37 = &puStack_78;
      if (*puVar29 == 0x657a6953) {
        _UNK_14329f990 = 0x532;
        return (uint *)&UNK_14329f990;
      }
      break;
    case 2:
      uVar13 = *puVar29 ^ 0x67696c41;
      param_4 = (ulonglong)((byte)puVar29[1] ^ 0x6e);
      goto code_r0x000141184ef5;
    case 3:
      if ((ushort)puVar29[1] == 0x646e && *puVar29 == 0x61707845) {
        _UNK_14329f990 = 0x232;
        return (uint *)&UNK_14329f990;
      }
      uVar13 = *puVar29 ^ 0x696c4158;
      param_4 = (ulonglong)((ushort)puVar29[1] ^ 0x6e67);
      goto code_r0x000141184ebc;
    case 4:
      uVar13 = *(uint *)((longlong)puVar29 + 3) ^ 0x676e6964 | *puVar29 ^ 0x64646150;
      goto code_r0x000141184f1c;
    case 5:
      puVar17 = (uint *)(*(longlong *)puVar29 + -0x6c61636974726556);
      goto code_r0x000141184e3d;
    case 7:
      ppuVar37 = &puStack_78;
      if ((ushort)puVar29[2] == 0x6c61 && *(longlong *)puVar29 == 0x746e6f7a69726f48) {
        _UNK_14329f990 = 0x32;
        return (uint *)&UNK_14329f990;
      }
    }
    goto LAB_141184f3a;
  case 9:
    uVar13 = (uint)CONCAT71(uVar23,cVar12 + unaff_RDI[0x14329f947] + 'A');
    puVar24 = (uint *)0x432997f7;
code_r0x000141184ebc:
    ppuVar37 = &puStack_78;
    if ((int)param_4 == 0 && uVar13 == 0) {
      *(ushort *)puVar24 = 0x432;
      return puVar24;
    }
    goto LAB_141184f3a;
  case 10:
    return (uint *)0x4329f990;
  case 0xb:
    UNK_14329f911 = UNK_14329f911 | 0x90;
    pcVar6 = (code *)swi(1);
    puVar17 = (uint *)(*pcVar6)();
    return puVar17;
  case 0xc:
    ppuVar32 = (uint **)(ulonglong)(uint)(*(int *)(unaff_RDI + 0x33) * -0x49f0bbfe);
    uVar13 = (uint)CONCAT71(uVar23,cVar12 + 'A');
    puVar24 = (uint *)0x4329f9fe;
code_r0x000141184ef5:
    ppuVar37 = ppuVar32;
    if ((int)param_4 == 0 && uVar13 == 0) {
      *(ushort *)puVar24 = 0x332;
      return puVar24;
    }
    goto LAB_141184f3a;
  case 0xd:
    puVar24 = (uint *)(ulonglong)*(byte *)((longlong)puVar29 + 2);
code_r0x000141184e20:
    ppuVar37 = &puStack_78;
    if ((short)param_4 == 0x70 && (short)puVar17 == 0) {
      *(ushort *)puVar24 = 0x632;
      return puVar24;
    }
LAB_141184f3a:
    *(undefined8 *)((longlong)ppuVar37 + 0x20) = 8;
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141184f52;
    pdb_142db7e70();
    return puVar24;
  case 0xe:
    uVar13 = uVar13 | 0x4329f990;
    puVar24 = (uint *)(ulonglong)uVar13;
code_r0x000141184f1c:
    ppuVar37 = &puStack_78;
    if (uVar13 == 0) {
      *(ushort *)puVar24 = 0x732;
      return puVar24;
    }
    goto LAB_141184f3a;
  case 0xf:
code_r0x000141184e3d:
    ppuVar37 = (uint **)(ulonglong)(uint)(*(int *)(unaff_RBX + 0x61) * 0x239486c);
    if (puVar17 == (uint *)0x0) {
      _UNK_14329f990 = 0x132;
      return (uint *)&UNK_14329f990;
    }
    goto LAB_141184f3a;
  default:
                    /* WARNING: Could not recover jumptable at 0x000140f36c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar17 = (uint *)(**(code **)*puRam000000004329f998)();
    return puVar17;
  case 0x11:
  case 0x12:
  case 0x30:
  case 0x3d:
  case 0x3e:
    goto code_r0x000141184ffc;
  case 0x24:
    if ((char)((char)((ulonglong)unaff_RBX >> 8) >> 1) == '\0') {
      return puVar17;
    }
    puVar17 = (uint *)((longlong)param_1 + 0x14329f98f);
    puVar29 = *(uint **)((longlong)param_1 + 0x14329f98f);
    goto code_r0x000141185041;
  case 0x37:
    if (puVar29 != (uint *)0x0) {
      pub_1406abac0(_UNK_14329f9c8,(ulonglong)puVar29,1);
    }
    puVar29 = _UNK_14329f9a8;
    if (SBORROW8(0,(longlong)_UNK_14329f9a8)) {
      return (uint *)-(longlong)_UNK_14329f9a8;
    }
code_r0x000141184ffc:
    puVar17 = (uint *)&UNK_14329f9a8;
code_r0x000141185041:
    if (puVar29 == (uint *)0x0) {
code_r0x000141184fcc:
      return puVar17;
    }
    uVar39 = *(undefined8 *)(puVar17 + 2);
    param_1 = (uint *)CONCAT44(uStack_44,uStack_48);
    puVar31 = (undefined8 *)&uStack_40;
code_r0x0001406abac0:
    *(undefined8 **)((longlong)puVar31 + -8) = unaff_RBP;
    *(uint **)((longlong)puVar31 + -0x10) = param_1;
    *(undefined **)((longlong)puVar31 + -0x40) = &UNK_140f3c37e;
    uVar15 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar17 = (uint *)HeapFree(uVar15,0,uVar39);
    return puVar17;
  case 0x38:
    goto code_r0x000141184fcc;
  case 0x39:
  case 0x3a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3b:
  case 0x3c:
    *unaff_RDI = *unaff_RDI ^ 0x90;
    LOCK();
    lVar19 = CONCAT44((int)((ulonglong)puVar17 >> 0x20),uRam000000018b29f990);
    UNLOCK();
    uRam000000018b29f990 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x000141184fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar17 = (uint *)(*(code *)((longlong)*(int *)(lVar19 * 4 + 0x4329f9d0) + 0x4329f9d0))();
    return puVar17;
  case 0x41:
    pub_1406abac0((byte *)unaff_RBP[-3],(ulonglong)puVar29,8);
    puVar24 = (uint *)unaff_RBP[-2];
  case 0x6c:
    if (*(longlong *)(puVar24 + 2) == 0) {
      return (uint *)0x10;
    }
    uVar39 = *(undefined8 *)(puVar24 + 4);
    unaff_RBP = (undefined8 *)CONCAT44(uStack_34,uStack_38);
    puVar31 = &uStack_30;
    goto code_r0x0001406abac0;
  case 0x42:
    goto code_r0x000141185405;
  case 0x43:
    *(byte *)puVar17 = (byte)*puVar17 + cVar12;
    (&UNK_14329f919)[uVar16] = (&UNK_14329f919)[uVar16] + -0x70;
    puVar29 = (uint *)(&UNK_14329f919 + uVar16);
    *puVar29 = *puVar29 >> 1 | (uint)((*puVar29 & 1) != 0) << 0x1f;
    return puVar17;
  case 0x44:
    bVar11 = cVar12 + (byte)*puVar17 + bVar45;
    puVar17 = (uint *)CONCAT71(uVar23,bVar11);
    bVar45 = CARRY1((byte)*puVar17,bVar11);
    *(byte *)puVar17 = (byte)*puVar17 + bVar11;
  case 0x50:
    *puVar29 = *puVar29 + (int)puVar17 + (uint)bVar45;
    uVar39 = 0x12;
    goto code_r0x0001411859f4;
  case 0x45:
    puVar28 = (uint *)0x4329ebba;
    puVar24 = puVar29;
  case 0x68:
    puVar29 = puVar28;
    break;
  case 0x46:
    break;
  case 0x47:
    *puVar29 = *puVar29 + uVar13 + (uint)bVar45;
    ppuVar34 = &puStack_78;
  case 0x56:
code_r0x0001411855c8:
    *(uint **)((longlong)ppuVar34 + 0x80) = puVar24 + 6;
    *(undefined **)((longlong)ppuVar34 + 0x70) = &UNK_14329eec0;
    *(undefined1 **)((longlong)ppuVar34 + 0x68) = (undefined1 *)((longlong)ppuVar34 + 0x80);
    *(undefined **)((longlong)ppuVar34 + 0x58) = &UNK_14329eef1;
    *(undefined **)((longlong)ppuVar34 + 0x50) = &UNK_14329ee30;
    *(uint **)((longlong)ppuVar34 + 0x48) = puVar24 + 0xc;
    *(undefined **)((longlong)ppuVar34 + 0x38) = &UNK_14329ec3b;
    *(undefined **)((longlong)ppuVar34 + 0x30) = &UNK_14329eea0;
    *(uint **)((longlong)ppuVar34 + 0x28) = puVar17;
    *(undefined8 *)((longlong)ppuVar34 + 0x60) = 5;
    *(undefined8 *)((longlong)ppuVar34 + 0x40) = 5;
    *(undefined8 *)((longlong)ppuVar34 + 0x20) = 8;
    puVar18 = &UNK_14329eee0;
code_r0x000141185927:
    *(undefined **)((longlong)ppuVar34 + -8) = &UNK_14118593f;
    puVar17 = (uint *)pdb_140f66ff0(puVar29,puVar18,0x11,&UNK_14329ec33);
    return puVar17;
  case 0x48:
    *(undefined2 *)((longlong)puVar17 * 5) = in_FS;
    *(byte *)puVar17 = (byte)*puVar17 + cVar12;
    (&UNK_14329f91d)[uVar16] = (&UNK_14329f91d)[uVar16] + -0x70;
    puVar17 = (uint *)(ulonglong)(uVar13 | 0x2119a75);
    puStack_28 = (uint *)&UNK_14329f990;
    uStack_30 = apuStackX_8;
    goto code_r0x000141185405;
  case 0x49:
    *(byte *)puVar17 = (byte)*puVar17 + cVar12;
    (&UNK_14329f957)[uVar16] = (&UNK_14329f957)[uVar16] + -0x70;
    puVar17 = (uint *)((ulonglong)puVar17 & 0xffffffffffffff20);
    *(byte *)puVar17 = (byte)*puVar17 | (byte)puVar17;
    *(byte *)puVar17 = (byte)*puVar17 + (byte)puVar17;
    ppuVar34 = &puStack_78;
    goto code_r0x0001411855c8;
  case 0x4a:
    *(byte *)puVar17 = (byte)*puVar17 + cVar12;
    puVar24 = puVar29;
    puVar29 = (uint *)&UNK_14329ed83;
    break;
  case 0x4b:
    puVar24 = (uint *)0x4329eea0;
    ppuVar34 = &puStack_78;
    goto code_r0x0001411855c8;
  case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4d:
    puVar24 = puVar29;
    puVar29 = (uint *)0x4329eb9d;
    break;
  case 0x4e:
    *(byte *)puVar17 = (byte)*puVar17;
    (&UNK_14329f91d)[uVar16] = (&UNK_14329f91d)[uVar16] + -0x70;
    puVar17 = (uint *)(ulonglong)(uVar13 | 0x21198e1);
    ppuVar34 = &puStack_78;
    goto code_r0x0001411855c8;
  case 0x4f:
    puStack_58 = (undefined *)0x4329edf0;
    puVar17 = (uint *)&UNK_14329ee10;
    goto code_r0x00014118525e;
  case 0x51:
    uVar13 = 0x4329f998;
    apuStackX_8[0] = &UNK_14329f9a8;
    puVar24 = (uint *)&UNK_14329eec0;
    goto code_r0x0001411851dd;
  case 0x52:
    puStack_58 = (undefined *)CONCAT44(puStack_58._4_4_,uVar13);
    puVar17 = (uint *)&UNK_14329eafa;
    uVar39 = 7;
    goto code_r0x0001411859f4;
  case 0x53:
    puVar17 = puStack_78;
    ppuVar34 = (uint **)auStack_70;
    goto code_r0x0001411855c8;
  case 0x54:
    puVar17 = (uint *)&UNK_14329ed74;
    uVar39 = 0xf;
    goto code_r0x0001411859f4;
  case 0x55:
    uVar16 = (ulonglong)unaff_RDI & 0xffffffff;
    *puVar29 = *puVar29 + (int)unaff_RDI + (uint)bVar45;
    puStack_28 = (uint *)&UNK_14329f990;
    uStack_30 = apuStackX_8;
    uStack_40 = 0x4329ed70;
    uStack_3c = 1;
    uStack_48 = 0x4329ed18;
    uStack_44 = 1;
    cStack_50 = (char)uVar16;
    cStack_4f = (char)(uVar16 >> 8);
    uStack_4e = (undefined2)(uVar16 >> 0x10);
    uStack_4c = 0;
    uStack_38 = 4;
    uStack_34 = 0;
    puStack_58 = (undefined *)0x5;
    puVar17 = (uint *)&UNK_14329ed58;
    goto code_r0x00014118586b;
  case 0x57:
    puVar24 = puVar29;
    puVar29 = (uint *)(ulonglong)(uVar13 + 0x211956d);
    break;
  case 0x58:
    (&UNK_14329f957)[uVar16] = (&UNK_14329f957)[uVar16] + 'p';
    puStack_58 = (undefined *)CONCAT44(puStack_58._4_4_,8);
    puVar17 = (uint *)&UNK_14329ee50;
    ppuVar36 = &puStack_78;
    goto code_r0x00014118586b;
  case 0x59:
    puVar24 = puVar29;
    puVar29 = (uint *)&UNK_14329eb6e;
    break;
  case 0x5a:
    puVar29 = (uint *)((ulonglong)puVar17 & 0xffffffff);
    break;
  case 0x5b:
    *(byte *)(param_3 + -0x7d) = *(byte *)(param_3 + -0x7d) ^ 0x90;
    goto code_r0x0001411858a8;
  case 0x5c:
    *puVar29 = *puVar29 + uVar13 + (uint)bVar45;
                    /* WARNING: Could not recover jumptable at 0x0001411851b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar17 = (uint *)(*(code *)(*(int *)(param_3 + (longlong)puVar17 * 4) + param_3))();
    return puVar17;
  case 0x5d:
    *puVar29 = *puVar29 + uVar13 + (uint)bVar45;
    ppuVar36 = &puStack_78;
    goto code_r0x00014118586b;
  case 0x5e:
    ppuVar36 = &puStack_78;
    goto code_r0x00014118586b;
  case 0x5f:
    (&UNK_14329f919)[uVar16] = ((&UNK_14329f919)[uVar16] + 'p') - bVar45;
    *(undefined2 *)((longlong)puVar17 * 5) = in_FS;
    *(byte *)puVar17 = (byte)*puVar17 + cVar12;
    (&UNK_14329f91d)[uVar16] = (&UNK_14329f91d)[uVar16] + -0x70;
    uVar16 = (ulonglong)(uVar13 | 0x211946f);
    goto code_r0x000141185669;
  case 0x60:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x61:
    out(*param_1,(short)uStack_40);
    uVar16 = (ulonglong)&puStack_78 & 0xffffffff;
    ppuVar35 = (uint **)((ulonglong)puVar17 & 0xffffffff);
    *puVar29 = *puVar29 + (int)&puStack_78 + (uint)bVar45;
code_r0x000141185669:
    *(undefined **)((longlong)ppuVar35 + 0x50) = &UNK_14329f990;
    *(undefined1 **)((longlong)ppuVar35 + 0x48) = (undefined1 *)((longlong)ppuVar35 + 0x80);
    *(undefined **)((longlong)ppuVar35 + 0x38) = &UNK_14329ec3b;
    *(undefined **)((longlong)ppuVar35 + 0x30) = &UNK_14329ebf8;
    *(ulonglong *)((longlong)ppuVar35 + 0x28) = uVar16;
    *(undefined8 *)((longlong)ppuVar35 + 0x40) = 5;
    *(undefined8 *)((longlong)ppuVar35 + 0x20) = 8;
code_r0x0001411856aa:
    puVar17 = (uint *)&UNK_14329ec18;
    ppuVar36 = ppuVar35;
    goto code_r0x00014118586b;
  case 0x62:
    puVar17 = (uint *)0x4329ee10;
    goto code_r0x00014118525e;
  case 99:
    puVar24 = puVar29;
    puVar29 = (uint *)0x4329ead3;
    break;
  case 100:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x65:
    uVar43 = (ulonglong)(*(int *)(&UNK_14329f91b + uVar16) + 0x4329f990 + (uint)bVar45);
    *(int *)(uVar16 + 0x18429f990) = (int)unaff_RBP;
    goto code_r0x00014118517e;
  case 0x66:
    uVar16 = *(ulonglong *)((ulonglong)*(uint *)(unaff_RBP + -2) + 8);
    if (uVar16 != 0) {
      pub_1406abac0(*(byte **)((ulonglong)*(uint *)(unaff_RBP + -2) + 0x10),uVar16,1);
      puVar17 = extraout_RAX;
    }
    return puVar17;
  case 0x67:
    *(int *)(&UNK_14329f91d + uVar16) = *(int *)(&UNK_14329f91d + uVar16) + -1;
    *(byte *)((longlong)unaff_R13 + 0x50ca7e681) =
         *(byte *)((longlong)unaff_R13 + 0x50ca7e681) | 0x90;
    (&UNK_14329f913)[uVar16] = (&UNK_14329f913)[uVar16] ^ 0x90;
code_r0x0001411858a8:
    *puVar17 = *puVar17 >> 8 | *puVar17 << 0x19;
    apuStackX_8[0] = (undefined *)CONCAT44(apuStackX_8[0]._4_4_,0x4329f990);
    ppuStack_10 = apuStackX_8;
code_r0x0001411858cb:
    puStack_20 = &UNK_14329eef1;
    puStack_28 = (uint *)&UNK_14329ee30;
    uStack_30._0_4_ = (undefined4)param_3;
    uStack_30._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
    uStack_40 = 0x4329ec3b;
    uStack_3c = 1;
    uStack_48 = 0x4329eea0;
    uStack_44 = 1;
    cStack_50 = (char)puVar17;
    cStack_4f = (char)((ulonglong)puVar17 >> 8);
    uStack_4e = (undefined2)((ulonglong)puVar17 >> 0x10);
    uStack_4c = (uint)((ulonglong)puVar17 >> 0x20);
    uStack_18 = 5;
    uStack_38 = 5;
    uStack_34 = 0;
    puStack_58 = (undefined *)0x8;
    puVar18 = &UNK_14329eef6;
    ppuVar34 = &puStack_78;
    goto code_r0x000141185927;
  case 0x69:
    apuStackX_8[0] = &UNK_14329f9a8;
    puStack_28 = (uint *)&UNK_14329eec0;
    uStack_30 = apuStackX_8;
    uStack_40 = 0x4329eef1;
    uStack_3c = 1;
    uStack_48 = 0x4329ebf8;
    uStack_44 = 1;
    cStack_50 = -0x68;
    cStack_4f = -7;
    uStack_4e = 0x4329;
    uStack_4c = 0;
    uStack_38 = 5;
    uStack_34 = 0;
    puStack_58 = (undefined *)0x5;
    puVar17 = (uint *)&UNK_14329ef1e;
    ppuVar36 = &puStack_78;
    goto code_r0x00014118586b;
  case 0x6a:
    puVar24 = puVar29;
    puVar29 = (uint *)0x4329ebac;
    break;
  case 0x6b:
    (&UNK_14329f913)[uVar16] = (&UNK_14329f913)[uVar16] + -0x70;
    *puVar17 = *puVar17 >> 8 | *puVar17 << 0x18;
    apuStackX_8[0] = (undefined *)CONCAT44(apuStackX_8[0]._4_4_,0x4329f990);
    puStack_58 = &UNK_14329ead8;
    puVar17 = (uint *)&UNK_14329ef32;
    uVar39 = 0x11;
    goto code_r0x0001411859f4;
  case 0x6d:
    *(byte *)puVar17 = (byte)*puVar17 + cVar12;
    (&UNK_14329f91d)[uVar16] = (&UNK_14329f91d)[uVar16] + -0x70;
    uVar13 = uVar13 | 0x2119ce3;
code_r0x0001411851dd:
    uStack_30 = apuStackX_8;
    uStack_40 = 0x4329eef1;
    uStack_3c = 1;
    uStack_48 = 0x4329ebf8;
    uStack_44 = 1;
    cStack_50 = (char)uVar13;
    cStack_4f = (char)(uVar13 >> 8);
    uStack_4e = (undefined2)(uVar13 >> 0x10);
    uStack_4c = 0;
    uStack_38 = 5;
    uStack_34 = 0;
    puStack_58 = (undefined *)0x5;
    puVar17 = (uint *)&UNK_14329ef07;
    ppuVar36 = &puStack_78;
    puStack_28 = puVar24;
code_r0x00014118586b:
    *(undefined **)((longlong)ppuVar36 + -8) = &UNK_141185876;
    puVar17 = (uint *)pdb_140f66f00(puVar29,puVar17);
    return puVar17;
  case 0x6e:
    (&UNK_14329f957)[uVar16] = (&UNK_14329f957)[uVar16] + 'p';
    puStack_58 = (undefined *)CONCAT44(puStack_58._4_4_,8);
    ppuVar35 = &puStack_78;
    goto code_r0x0001411856aa;
  case 0x6f:
    *(byte *)puVar17 = (byte)*puVar17 + cVar12;
    (&UNK_14329f919)[uVar16] = (&UNK_14329f919)[uVar16] + -0x70;
    puVar17 = (uint *)((ulonglong)puVar17 & 0xffffffffffffff68);
    goto code_r0x0001411858cb;
  case 0x70:
    ppuVar33 = (uint **)auStack_a0;
    uVar43 = *(ulonglong *)(puVar29 + 0xc);
    puVar29 = *(uint **)(uVar43 + 0xa0);
    if ((longlong)puVar29 < 1) {
      return puVar17;
    }
code_r0x00014118517e:
    pbVar20 = *(byte **)(uVar43 + 0xa8);
    *(undefined **)((longlong)ppuVar33 + -8) = &UNK_141185190;
    pub_1406abac0(pbVar20,(ulonglong)puVar29,1);
    return extraout_RAX_00;
  case 0x71:
    *(byte *)puVar17 = (byte)*puVar17 + cVar12;
code_r0x00014118525e:
    uVar39 = 9;
    goto code_r0x0001411859f4;
  case 0x72:
    puVar17 = (uint *)0x4329ede0;
    uVar39 = 0xe;
code_r0x0001411859f4:
    puVar17 = (uint *)pdb_140f66090(puVar29,puVar17,uVar39);
    return puVar17;
  case 0x73:
    *(byte *)puVar17 = (byte)*puVar17 << 6 | (byte)*puVar17 >> 2;
    pshufw((longlong)in_ST0,(longlong)in_ST0,0x44);
code_r0x00014119715e:
    param_3 = puVar38[0x1d];
    param_4 = 0;
    while( true ) {
      puVar17 = (uint *)((ulonglong)puVar17 & (ulonglong)puVar29);
      pbVar20 = (byte *)((longlong)puVar24 + (longlong)puVar17);
      in_XMM1_Ba = *pbVar20;
      in_XMM1_Bb = pbVar20[1];
      in_XMM1_Bc = pbVar20[2];
      in_XMM1_Bd = pbVar20[3];
      in_XMM1_Be = pbVar20[4];
      in_XMM1_Bf = pbVar20[5];
      in_XMM1_Bg = pbVar20[6];
      in_XMM1_Bh = pbVar20[7];
      in_XMM1_Bi = pbVar20[8];
      in_XMM1_Bj = pbVar20[9];
      in_XMM1_Bk = pbVar20[10];
      in_XMM1_Bl = pbVar20[0xb];
      in_XMM1_Bm = pbVar20[0xc];
      in_XMM1_Bn = pbVar20[0xd];
      in_XMM1_Bo = pbVar20[0xe];
      in_XMM1_Bp = pbVar20[0xf];
      auVar47[0] = -(in_XMM1_Ba == auVar48[0]);
      auVar47[1] = -(in_XMM1_Bb == auVar48[1]);
      auVar47[2] = -(in_XMM1_Bc == auVar48[2]);
      auVar47[3] = -(in_XMM1_Bd == auVar48[3]);
      auVar47[4] = -(in_XMM1_Be == auVar48[4]);
      auVar47[5] = -(in_XMM1_Bf == auVar48[5]);
      auVar47[6] = -(in_XMM1_Bg == auVar48[6]);
      auVar47[7] = -(in_XMM1_Bh == auVar48[7]);
      auVar47[8] = -(in_XMM1_Bi == auVar48[8]);
      auVar47[9] = -(in_XMM1_Bj == auVar48[9]);
      auVar47[10] = -(in_XMM1_Bk == auVar48[10]);
      auVar47[0xb] = -(in_XMM1_Bl == auVar48[0xb]);
      auVar47[0xc] = -(in_XMM1_Bm == auVar48[0xc]);
      auVar47[0xd] = -(in_XMM1_Bn == auVar48[0xd]);
      auVar47[0xe] = -(in_XMM1_Bo == auVar48[0xe]);
      auVar47[0xf] = -(in_XMM1_Bp == auVar48[0xf]);
      uVar42 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
      in_R10D = (uint)uVar42;
      if (uVar42 != 0) break;
LAB_1411971b0:
      auVar49[0] = -(in_XMM1_Ba == bVar11);
      auVar49[1] = -(in_XMM1_Bb == bVar58);
      auVar49[2] = -(in_XMM1_Bc == bVar59);
      auVar49[3] = -(in_XMM1_Bd == bVar60);
      auVar49[4] = -(in_XMM1_Be == bVar61);
      auVar49[5] = -(in_XMM1_Bf == bVar62);
      auVar49[6] = -(in_XMM1_Bg == bVar63);
      auVar49[7] = -(in_XMM1_Bh == bVar64);
      auVar49[8] = -(in_XMM1_Bi == bVar65);
      auVar49[9] = -(in_XMM1_Bj == bVar66);
      auVar49[10] = -(in_XMM1_Bk == bVar67);
      auVar49[0xb] = -(in_XMM1_Bl == bVar68);
      auVar49[0xc] = -(in_XMM1_Bm == bVar69);
      auVar49[0xd] = -(in_XMM1_Bn == bVar70);
      auVar49[0xe] = -(in_XMM1_Bo == bVar71);
      auVar49[0xf] = -(in_XMM1_Bp == bVar72);
      if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar49 >> 0x17,0) & 1) != 0) || (SUB161(auVar49 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar49 >> 0x27,0) & 1) != 0) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar49 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar49 >> 0x3f,0) & 1) != 0) || (SUB161(auVar49 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar49 >> 0x4f,0) & 1) != 0) || (SUB161(auVar49 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar49 >> 0x5f,0) & 1) != 0) || (SUB161(auVar49 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar49 >> 0x6f,0) & 1) != 0) || (SUB161(auVar49 >> 0x77,0) & 1) != 0) ||
          auVar49[0xf] < '\0') {
LAB_141198c23:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198c2f;
        pdb_142dc8150(&UNK_142fa6b30);
      }
      puVar17 = (uint *)((longlong)puVar17 + param_4);
      ppuVar8 = ppuVar37;
code_r0x0001411971c5:
      ppuVar37 = ppuVar8;
      puVar17 = puVar17 + 4;
      param_4 = param_4 + 0x10;
    }
    while( true ) {
      uVar13 = 0;
      for (uVar27 = in_R10D; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
        uVar13 = uVar13 + 1;
      }
      in_R11 = -((ulonglong)((ulonglong)uVar13 + (longlong)puVar17) & (ulonglong)puVar29);
code_r0x000141197190:
      if (param_3 == *(longlong *)(puVar24 + in_R11 * 0x36 + -0x36)) break;
      uVar42 = (ushort)(in_R10D - 1) & (ushort)in_R10D;
      in_R10D = CONCAT22((short)(in_R10D - 1 >> 0x10),uVar42);
      if (uVar42 == 0) goto LAB_1411971b0;
    }
    puVar24 = puVar24 + in_R11 * 0x36;
    puVar24[-0x2a] = unaff_XMM8_Da;
    puVar24[-0x29] = unaff_XMM8_Db;
    puVar24[-0x28] = unaff_XMM8_Dc;
    puVar24[-0x27] = unaff_XMM8_Dd;
    puVar24[-0x2e] = unaff_XMM8_Da;
    puVar24[-0x2d] = unaff_XMM8_Db;
    puVar24[-0x2c] = unaff_XMM8_Dc;
    puVar24[-0x2b] = unaff_XMM8_Dd;
    puVar24[-0x26] = 0;
    puVar24[-0x25] = 0x41200000;
    puVar24[-0x24] = unaff_XMM8_Da;
    puVar24[-0x23] = unaff_XMM8_Db;
    puVar24[-0x22] = unaff_XMM8_Dc;
    puVar24[-0x21] = unaff_XMM8_Dd;
    ppuVar9 = ppuVar37;
code_r0x0001411971fc:
    ppuVar37 = ppuVar9;
    *(uint *)((longlong)puVar24 + -0x81) = unaff_XMM8_Da;
    *(uint *)((longlong)puVar24 + -0x7d) = unaff_XMM8_Db;
    *(uint *)((longlong)puVar24 + -0x79) = unaff_XMM8_Dc;
    *(uint *)((longlong)puVar24 + -0x75) = unaff_XMM8_Dd;
    *(undefined1 *)((longlong)puVar24 + -0x71) = 4;
    puVar38[0x44] = puVar38[0x1e];
    puVar38[0x42] = puVar38[0x1c];
    puVar38[0x43] = puVar38[0x1d];
    lVar19 = puVar38[0x42];
    if (*(longlong *)(lVar19 + 0x1c8) == 0) goto LAB_141198c35;
    puVar38[0xf] = puVar38[0x43];
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197259;
    puVar17 = (uint *)pdb_1400af0a0(lVar19 + 0x1d0,puVar38 + 0x43);
    puVar24 = *(uint **)(lVar19 + 0x1b0);
    puVar29 = *(uint **)(lVar19 + 0x1b8);
    bVar46 = (byte)((ulonglong)puVar17 >> 0x39);
    auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
    auVar47 = pshuflw(auVar48,auVar48,0);
    auVar48._0_8_ = auVar47._0_8_;
    auVar48._8_4_ = auVar47._0_4_;
    auVar48._12_4_ = auVar47._4_4_;
    param_3 = puVar38[0x43];
    param_4 = 0;
LAB_14119728c:
    while( true ) {
      uVar16 = (ulonglong)puVar17 & (ulonglong)puVar29;
      auVar47 = *(undefined1 (*) [16])((longlong)puVar24 + uVar16);
      auVar54[0] = -(auVar47[0] == auVar48[0]);
      auVar54[1] = -(auVar47[1] == auVar48[1]);
      auVar54[2] = -(auVar47[2] == auVar48[2]);
      auVar54[3] = -(auVar47[3] == auVar48[3]);
      auVar54[4] = -(auVar47[4] == auVar48[4]);
      auVar54[5] = -(auVar47[5] == auVar48[5]);
      auVar54[6] = -(auVar47[6] == auVar48[6]);
      auVar54[7] = -(auVar47[7] == auVar48[7]);
      auVar54[8] = -(auVar47[8] == auVar48[8]);
      auVar54[9] = -(auVar47[9] == auVar48[9]);
      auVar54[10] = -(auVar47[10] == auVar48[10]);
      auVar54[0xb] = -(auVar47[0xb] == auVar48[0xb]);
      auVar54[0xc] = -(auVar47[0xc] == auVar48[0xc]);
      auVar54[0xd] = -(auVar47[0xd] == auVar48[0xd]);
      auVar54[0xe] = -(auVar47[0xe] == auVar48[0xe]);
      auVar54[0xf] = -(auVar47[0xf] == auVar48[0xf]);
      uVar42 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar42;
      if (uVar42 != 0) break;
LAB_1411972d2:
      auVar50[0] = -(auVar47[0] == bVar11);
      auVar50[1] = -(auVar47[1] == bVar58);
      auVar50[2] = -(auVar47[2] == bVar59);
      auVar50[3] = -(auVar47[3] == bVar60);
      auVar50[4] = -(auVar47[4] == bVar61);
      auVar50[5] = -(auVar47[5] == bVar62);
      auVar50[6] = -(auVar47[6] == bVar63);
      auVar50[7] = -(auVar47[7] == bVar64);
      auVar50[8] = -(auVar47[8] == bVar65);
      auVar50[9] = -(auVar47[9] == bVar66);
      auVar50[10] = -(auVar47[10] == bVar67);
      auVar50[0xb] = -(auVar47[0xb] == bVar68);
      auVar50[0xc] = -(auVar47[0xc] == bVar69);
      auVar50[0xd] = -(auVar47[0xd] == bVar70);
      auVar50[0xe] = -(auVar47[0xe] == bVar71);
      auVar50[0xf] = -(auVar47[0xf] == bVar72);
      if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar50 >> 0x17,0) & 1) != 0) || (SUB161(auVar50 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar50 >> 0x27,0) & 1) != 0) || (SUB161(auVar50 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar50 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar50 >> 0x3f,0) & 1) != 0) || (SUB161(auVar50 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar50 >> 0x4f,0) & 1) != 0) || (SUB161(auVar50 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar50 >> 0x5f,0) & 1) != 0) || (SUB161(auVar50 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar50 >> 0x6f,0) & 1) != 0) || (SUB161(auVar50 >> 0x77,0) & 1) != 0) ||
          auVar50[0xf] < '\0') {
LAB_141198c35:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198c41;
        pdb_142dc8150(&UNK_142fa6b00);
      }
      puVar17 = (uint *)(uVar16 + param_4 + 0x10);
      param_4 = param_4 + 0x10;
    }
    while( true ) {
      uVar27 = 0;
      for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar27 = uVar27 + 1;
      }
      uVar43 = uVar27 + uVar16 & (ulonglong)puVar29;
      if (param_3 == *(longlong *)(puVar24 + uVar43 * -0x36 + -0x36)) break;
      uVar42 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar42);
      if (uVar42 == 0) goto LAB_1411972d2;
    }
    *(undefined *)((longlong)puVar38 + 0x3e6) =
         *(undefined *)((longlong)puVar24 + uVar43 * -0xd8 + -6);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(unaff_R12[0x28]) {
    case 0:
      uVar15 = 0x13;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197334;
      uVar39 = pdb_140dc6290(&UNK_14329f638);
      puVar38[0x78] = uVar39;
      puVar38[0x73] = uVar15;
      puVar38[0x76] = 6;
      puVar18 = &UNK_14329f64b;
      break;
    case 1:
      puVar38[0x77] = 1;
      puVar38[0x78] = 0;
      puVar38[0x76] = 0;
      goto code_r0x000141197497;
    case 2:
      uVar15 = 0x1d;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411973a2;
      uVar39 = pdb_140dc6290(&UNK_14329f651);
      puVar38[0x78] = uVar39;
      puVar38[0x73] = uVar15;
      puVar38[0x76] = 4;
      puVar18 = &UNK_14329f66e;
      break;
    case 3:
      uVar15 = 0x15;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411973d9;
      uVar39 = pdb_140dc6290(&UNK_14329f672);
      puVar38[0x78] = uVar39;
      puVar38[0x73] = uVar15;
      puVar38[0x76] = 4;
      puVar18 = &UNK_14329f687;
      break;
    case 4:
      uVar15 = 0x18;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119736b;
      uVar39 = pdb_140dc6290(&UNK_14329f68b);
      puVar38[0x78] = uVar39;
      puVar38[0x73] = uVar15;
      puVar38[0x76] = 4;
      puVar18 = &UNK_14329f6a3;
      break;
    case 5:
      uVar15 = 0x22;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197434;
      uVar39 = pdb_140dc6290(&UNK_14329f6a7);
      puVar38[0x78] = uVar39;
      puVar38[0x73] = uVar15;
      puVar38[0x76] = 4;
      puVar18 = &UNK_14329f6c9;
      break;
    case 6:
      uVar15 = 0x1c;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197468;
      uVar39 = pdb_140dc6290(&UNK_14329f6cd);
      puVar38[0x78] = uVar39;
      puVar38[0x73] = uVar15;
      puVar38[0x76] = 4;
      puVar18 = &UNK_14329f6e9;
    }
    puVar38[0x77] = puVar18;
code_r0x000141197497:
    uVar39 = puVar38[0x46];
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411974b4;
    pdb_1407339e0(puVar38 + 0x52,puVar38 + 0x42,uVar39);
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411974c1;
    lVar19 = pdb_14116dd60(puVar38 + 0x52);
    *(undefined4 *)(lVar19 + 600) = 0x7b5a51a0;
    puVar38[0x1c] = puVar38[0x52];
    puVar38[0x1d] = puVar38[0x53];
    puVar38[0x1e] = puVar38[0x54];
    lVar19 = puVar38[0x1c];
    if (*(longlong *)(lVar19 + 0x1c8) == 0) {
code_r0x000141198c47:
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198c5f;
      pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
code_r0x000141198d6a:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197512;
    uVar16 = pdb_1400af0a0(lVar19 + 0x1d0,puVar38 + 0x1d);
    lVar40 = *(longlong *)(lVar19 + 0x1b0);
    bVar46 = (byte)(uVar16 >> 0x39);
    auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
    auVar48 = pshuflw(auVar48,auVar48,0);
    lVar41 = 0;
    do {
      uVar16 = uVar16 & *(ulonglong *)(lVar19 + 0x1b8);
      auVar47 = *(undefined1 (*) [16])(lVar40 + uVar16);
      auVar55[0] = -(auVar47[0] == auVar48[0]);
      auVar55[1] = -(auVar47[1] == auVar48[1]);
      auVar55[2] = -(auVar47[2] == auVar48[2]);
      auVar55[3] = -(auVar47[3] == auVar48[3]);
      auVar55[4] = -(auVar47[4] == auVar48[4]);
      auVar55[5] = -(auVar47[5] == auVar48[5]);
      auVar55[6] = -(auVar47[6] == auVar48[6]);
      auVar55[7] = -(auVar47[7] == auVar48[7]);
      auVar55[8] = -(auVar47[8] == auVar48[0]);
      auVar55[9] = -(auVar47[9] == auVar48[1]);
      auVar55[10] = -(auVar47[10] == auVar48[2]);
      auVar55[0xb] = -(auVar47[0xb] == auVar48[3]);
      auVar55[0xc] = -(auVar47[0xc] == auVar48[4]);
      auVar55[0xd] = -(auVar47[0xd] == auVar48[5]);
      auVar55[0xe] = -(auVar47[0xe] == auVar48[6]);
      auVar55[0xf] = -(auVar47[0xf] == auVar48[7]);
      uVar42 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar42;
      while (uVar42 != 0) {
        uVar27 = 0;
        for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar27 = uVar27 + 1;
        }
        lVar44 = (uVar27 + uVar16 & *(ulonglong *)(lVar19 + 0x1b8)) * -0xd8;
        if (puVar38[0x1d] == *(longlong *)(lVar40 + -0xd8 + lVar44)) {
          if ((*(byte *)(lVar40 + lVar44 + -6) & 0x30) == 0) goto code_r0x0001411985ce;
          uVar39 = ((undefined8 *)puVar38[0x49])[1];
          puVar38[0x52] = *(undefined8 *)puVar38[0x49];
          puVar38[0x53] = uVar39;
          uVar39 = *(undefined8 *)puVar38[0x41];
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411975e0;
          cVar12 = pdb_140b7e530(puVar38 + 0x52,uVar39);
          if (cVar12 == '\0') {
            plVar3 = (longlong *)puVar38[8];
            *(undefined4 *)plVar3[2] = *(undefined4 *)((longlong)plVar3 + 0x1c);
            lVar19 = *plVar3;
            lVar40 = *(longlong *)(lVar19 + 0x30);
            uVar39 = *(undefined8 *)(lVar19 + 0x40);
            if (lVar40 == *(longlong *)(lVar19 + 0x20)) {
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411976c6;
              pdb_142d7e980(lVar19 + 0x20);
            }
            lVar41 = *(longlong *)(lVar19 + 0x28);
            *(undefined8 *)(lVar41 + lVar40 * 0x10) = uVar39;
            *(undefined1 *)(lVar41 + 8 + lVar40 * 0x10) = 0xe;
            *(longlong *)(lVar19 + 0x30) = lVar40 + 1;
            *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
            goto code_r0x0001411985ce;
          }
          uVar39 = puVar38[0x49];
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411975fc;
          pdb_140a937d0(puVar38 + 0x52,uVar39);
          uVar39 = puVar38[0x53];
          uVar15 = puVar38[0x54];
          *(undefined8 *)((longlong)ppuVar37 + 0x20) = 0xc;
          puVar38[0x7d] = uVar39;
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119762b;
          pdb_140f3e9e0(puVar38 + 3,uVar39,uVar15,&UNK_14329f6ed);
          uVar16 = puVar38[0x52];
          if (uVar16 != 0) {
            pbVar20 = (byte *)puVar38[0x7d];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119764a;
            pub_1406abac0(pbVar20,uVar16,1);
          }
          puVar30 = (undefined8 *)puVar38[0x49];
          uVar39 = puVar30[1];
          *puVar38 = *puVar30;
          puVar38[1] = uVar39;
          uVar39 = puVar30[1];
          puVar38[0x1c] = *puVar30;
          puVar38[0x1d] = uVar39;
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197677;
          pdb_142322590(puVar38 + 0x52,puVar38 + 0x1c);
          if (SBORROW8(0,puVar38[0x52])) {
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119768f;
            pdb_140a93e70(puVar38 + 0x1c);
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119769c;
            pdb_140f36c40(puVar38 + 0x53);
          }
          else {
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197704;
            pub_142e32760(puVar38 + 0x1c,puVar38 + 0x52,0xa0);
          }
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119771b;
          pdb_140a923d0(puVar38 + 0x52,puVar38 + 0x1c);
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197728;
          pdb_140c5d220(puVar38 + -0xb,puVar38 + 0x52);
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197735;
          pdb_1404cc180(puVar38 + 0x1c);
          uVar39 = *(undefined8 *)(unaff_R12 + 8);
          uVar15 = *(undefined8 *)(unaff_R12 + 0x10);
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197750;
          pdb_141920a00(puVar38 + 0x10,uVar39,uVar15,puVar38 + -0xb);
          if (!SBORROW8(0,puVar38[0x10])) {
            puVar38[0x4e] = puVar38[0x14];
            puVar38[0x4f] = puVar38[0x15];
            puVar38[0x4c] = puVar38[0x12];
            puVar38[0x4d] = puVar38[0x13];
            puVar38[0x4a] = puVar38[0x10];
            puVar38[0x4b] = puVar38[0x11];
            *(undefined1 *)((longlong)puVar38 + 0x3f3) = 1;
            uVar39 = puVar38[0x49];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411978ee;
            pdb_140a939a0(puVar38 + 0x52,uVar39);
            puVar38[0x7d] = puVar38[0x53];
            uVar39 = puVar38[0x54];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197913;
            pdb_140dee3a0(puVar38 + 0x1c);
            puVar38[0x3c] = puVar38 + 0x1c;
            puVar38[0x3d] = pdb_140001020;
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197943;
            pdb_140f60760(puVar38 + 0x6f,&UNK_14329f6f9,puVar38 + 0x3c);
            uVar16 = puVar38[0x1c];
            if (uVar16 != 0) {
              pbVar20 = (byte *)puVar38[0x1d];
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197962;
              pub_1406abac0(pbVar20,uVar16,1);
            }
            puVar38[0x7a] = puVar38[0x6f];
            uVar15 = puVar38[0x70];
            *(undefined8 *)((longlong)ppuVar37 + 0x20) = puVar38[0x71];
            uVar22 = puVar38[0x7d];
            puVar38[0x7b] = uVar15;
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411979a0;
            pdb_140f3e9e0(puVar38 + 0x18,uVar22,uVar39);
            uVar16 = puVar38[0x7a];
            if (uVar16 != 0) {
              pbVar20 = (byte *)puVar38[0x7b];
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411979bf;
              pub_1406abac0(pbVar20,uVar16,1);
            }
            uVar16 = puVar38[0x52];
            if (uVar16 != 0) {
              pbVar20 = (byte *)puVar38[0x7d];
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411979dd;
              pub_1406abac0(pbVar20,uVar16,1);
            }
            lVar40 = *(longlong *)puVar38[9];
            lVar41 = ((longlong *)puVar38[9])[1];
            puVar38[0x7d] = *(undefined8 *)puVar38[10];
            lVar19 = lVar40;
            goto code_r0x000141197a1e;
          }
          puVar38[0x6f] = puVar38[0x11];
          if (*_DAT_143ca8e90 != 0) {
            puVar38[0x1c] = puVar38 + 0x6f;
            puVar38[0x1d] = pdb_140f36c20;
            puVar38[0x52] = 0;
            puVar38[0x53] = &UNK_14329f733;
            puVar38[0x54] = 0x13;
            puVar38[0x55] = 0;
            puVar38[0x56] = &UNK_14329f50e;
            puVar38[0x57] = 0x27;
            puVar38[0x58] = 1;
            puVar38[0x59] = &UNK_14329f733;
            puVar38[0x5a] = 0x13;
            puVar38[0x5b] = 0x24200000001;
            puVar38[0x5c] = &UNK_14329f788;
            puVar38[0x5d] = puVar38 + 0x1c;
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197842;
            pdb_140f332f0((longlong)puVar38 + 0x3f4,puVar38 + 0x52);
          }
          lVar19 = *(longlong *)(unaff_R12 + 0x10);
          puVar38[0x7d] = lVar19;
          if (lVar19 < 0) {
            uVar39 = 0;
            uVar16 = puVar38[0x7d];
code_r0x000141198ca9:
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198cb4;
            pdb_142dc7e2a(uVar39,uVar16);
            goto code_r0x000141198d6a;
          }
          if (lVar19 == 0) {
            pbVar20 = (byte *)0x1;
            uVar16 = puVar38[0x7d];
          }
          else {
            uVar15 = *(undefined8 *)(unaff_R12 + 8);
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197868;
            pdb_14007ee60();
            uVar39 = 1;
            uVar16 = puVar38[0x7d];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197882;
            pbVar20 = pub_1406abab0(uVar16,1);
            if (pbVar20 == (byte *)0x0) goto code_r0x000141198ca9;
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119789c;
            pub_142e32760(pbVar20,uVar15,uVar16);
          }
          *(byte *)((longlong)puVar38 + 999) = unaff_R12[0x18];
          *(undefined1 *)((longlong)puVar38 + 0x3f5) = 1;
          puVar38[0x7a] = pbVar20;
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411981c1;
          lVar19 = pdb_140f3ecf0(pbVar20,uVar16);
          if (lVar19 == 0) {
            *(undefined1 *)((longlong)puVar38 + 0x3f5) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198d3d;
            pdb_142dc8150(&UNK_14329f7a8);
          }
          *(undefined1 *)((longlong)puVar38 + 0x3f5) = 1;
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411981e4;
          pdb_140f69110(puVar38 + 0x52,lVar19,uVar16);
          if (*(int *)(puVar38 + 0x52) == 1) {
            *(undefined1 *)((longlong)puVar38 + 0x3f5) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198d53;
            pdb_142dc8150(&UNK_14329f7c0);
          }
          plVar3 = (longlong *)puVar38[0x53];
          puVar38[-2] = plVar3;
          puVar38[-1] = puVar38[0x54];
          if (((ulonglong)puVar38[0x54] < 10) ||
             (uVar16 = 0x6574707572726f63,
             (short)plVar3[1] != 0x2d64 || *plVar3 != 0x6574707572726f63)) {
            *(undefined1 *)((longlong)puVar38 + 0x3f5) = 1;
            uVar39 = puVar38[0x7a];
            uVar15 = puVar38[0x7d];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119824b;
            lVar19 = pdb_140f3eaf0(uVar39,uVar15);
            if (lVar19 == 0) {
              *(undefined1 *)((longlong)puVar38 + 0x3f5) = 1;
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198d69;
              pdb_142dc8150(&UNK_14329f7d8);
            }
            puVar38[0x4a] = puVar38 + -2;
            puVar38[0x4b] = pdb_1402ed400;
            *(undefined1 *)((longlong)puVar38 + 0x3f5) = 1;
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198295;
            pdb_140f60760(puVar38 + 0x1c,&UNK_14329f7f0,puVar38 + 0x4a);
            puVar38[0x7b] = puVar38[0x1c];
            uVar39 = puVar38[0x1d];
            *(undefined8 *)((longlong)ppuVar37 + 0x20) = puVar38[0x1e];
            puVar38[0x75] = uVar39;
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411982d0;
            pdb_140f3e9e0(puVar38 + 0x52,lVar19,uVar15);
            uVar16 = puVar38[0x7b];
            if (uVar16 != 0) {
              pbVar20 = (byte *)puVar38[0x75];
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411982ef;
              pub_1406abac0(pbVar20,uVar16,1);
            }
            uVar39 = puVar38[0x7a];
            uVar26 = (undefined4)puVar38[0x7d];
            puVar38[0x7b] = puVar38[0x53];
            puVar38[0x75] = puVar38[0x54];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119831e;
            lVar19 = pdb_140f4f450(uVar39);
            puVar38[0x1c] = lVar19;
            if (lVar19 != 0) {
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198337;
              pdb_1404b38e0(puVar38 + 0x1c);
              uVar16 = puVar38[0x52];
              if (uVar16 != 0) {
                pbVar20 = (byte *)puVar38[0x7b];
                *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198356;
                pub_1406abac0(pbVar20,uVar16,1);
              }
              goto code_r0x000141198356;
            }
            puVar38[0x74] = puVar38[0x52];
            *(undefined1 *)((longlong)puVar38 + 999) = *(undefined1 *)(puVar38 + 0x55);
            *(undefined4 *)(puVar38 + 0x48) = *(undefined4 *)((longlong)puVar38 + 0x2a9);
            *(undefined4 *)((longlong)puVar38 + 0x243) = *(undefined4 *)((longlong)puVar38 + 0x2ac);
            *(int *)((longlong)puVar38 + 0x3cc) =
                 (int)CONCAT71((uint7)(uint3)((uint)*(undefined4 *)((longlong)puVar38 + 0x2a9) >> 8)
                               ,1);
          }
          else {
code_r0x000141198356:
            uVar26 = (undefined4)uVar16;
            *(undefined4 *)((longlong)puVar38 + 0x3cc) = 0;
            puVar38[0x74] = puVar38[0x7d];
            puVar38[0x7b] = puVar38[0x7a];
            puVar38[0x75] = puVar38[0x7d];
          }
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411983c9;
          uVar39 = pdb_140f3c9d0();
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411983db;
          uVar43 = pdb_140f5a1d0(uVar39);
          puVar38[0x1c] = puVar38 + 0x6f;
          puVar38[0x1d] = pdb_140f36c20;
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198418;
          pdb_140f60760(puVar38 + 0x52,&UNK_14329f7fd,puVar38 + 0x1c);
          puVar38[0x1c] = puVar38[0x52];
          puVar38[0x1d] = puVar38[0x53];
          puVar38[0x1e] = puVar38[0x54];
          puVar4 = *(ulonglong **)puVar38[0x47];
          uVar16 = *puVar4;
          if (!SBORROW8(0,uVar16)) {
            if (uVar16 != 0) {
              pbVar20 = (byte *)puVar4[1];
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119845c;
              pub_1406abac0(pbVar20,uVar16,1);
            }
            uVar16 = puVar4[4];
            if (uVar16 != 0) {
              pbVar20 = (byte *)puVar4[5];
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198474;
              pub_1406abac0(pbVar20,uVar16,1);
            }
          }
          *puVar4 = puVar38[0x74];
          puVar4[1] = puVar38[0x7b];
          puVar4[2] = puVar38[0x75];
          *(undefined1 *)(puVar4 + 3) = *(undefined1 *)((longlong)puVar38 + 999);
          uVar2 = *(undefined4 *)((longlong)puVar38 + 0x243);
          *(undefined4 *)((longlong)puVar4 + 0x19) = *(undefined4 *)(puVar38 + 0x48);
          *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar2;
          uVar16 = puVar38[0x1d];
          puVar4[4] = puVar38[0x1c];
          puVar4[5] = uVar16;
          puVar4[6] = puVar38[0x1e];
          puVar4[7] = uVar43;
          *(undefined4 *)(puVar4 + 8) = uVar26;
          uVar16 = puVar38[0x7d];
          if ((*(byte *)((longlong)puVar38 + 0x3cc) & uVar16 != 0) != 0) {
            pbVar20 = (byte *)puVar38[0x7a];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411984fc;
            pub_1406abac0(pbVar20,uVar16,1);
          }
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198509;
          pdb_140f36c40(puVar38 + 0x6f);
          goto code_r0x0001411985b6;
        }
        uVar42 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar42);
      }
      auVar51[0] = -(auVar47[0] == bVar11);
      auVar51[1] = -(auVar47[1] == bVar58);
      auVar51[2] = -(auVar47[2] == bVar59);
      auVar51[3] = -(auVar47[3] == bVar60);
      auVar51[4] = -(auVar47[4] == bVar61);
      auVar51[5] = -(auVar47[5] == bVar62);
      auVar51[6] = -(auVar47[6] == bVar63);
      auVar51[7] = -(auVar47[7] == bVar64);
      auVar51[8] = -(auVar47[8] == bVar65);
      auVar51[9] = -(auVar47[9] == bVar66);
      auVar51[10] = -(auVar47[10] == bVar67);
      auVar51[0xb] = -(auVar47[0xb] == bVar68);
      auVar51[0xc] = -(auVar47[0xc] == bVar69);
      auVar51[0xd] = -(auVar47[0xd] == bVar70);
      auVar51[0xe] = -(auVar47[0xe] == bVar71);
      auVar51[0xf] = -(auVar47[0xf] == bVar72);
      if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar51 >> 0x17,0) & 1) != 0) || (SUB161(auVar51 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar51 >> 0x27,0) & 1) != 0) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar51 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar51 >> 0x3f,0) & 1) != 0) || (SUB161(auVar51 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar51 >> 0x4f,0) & 1) != 0) || (SUB161(auVar51 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || (SUB161(auVar51 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar51 >> 0x6f,0) & 1) != 0) || (SUB161(auVar51 >> 0x77,0) & 1) != 0) ||
          auVar51[0xf] < '\0') goto code_r0x000141198c47;
      uVar16 = uVar16 + lVar41 + 0x10;
      lVar41 = lVar41 + 0x10;
    } while( true );
  case 0x74:
    *(byte *)puVar17 = (byte)*puVar17 + cVar12;
    ppuVar9 = &puStack_78;
    goto code_r0x0001411971fc;
  case 0x75:
    goto code_r0x0001411971c5;
  case 0x76:
    goto code_r0x0001411971fc;
  case 0x77:
    ppuVar37 = &puStack_78;
    goto code_r0x000141197190;
  case 0x78:
    pcVar6 = (code *)swi(1);
    puVar17 = (uint *)(*pcVar6)();
    return puVar17;
  case 0x79:
    puVar38 = (undefined8 *)*unaff_RBP;
    ppuVar37 = (uint **)(unaff_RBP + 1);
    goto LAB_14119728c;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar17 = (uint *)(**(code **)(*(longlong *)(puVar24 + 2) + 0x18))(*(undefined8 *)puVar24,puVar29)
  ;
  return puVar17;
  while( true ) {
    *(undefined1 *)((longlong)puVar38 + 0x3f7) = 1;
    *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197ad6;
    uVar16 = pdb_142326530(lVar21);
    if ((uVar16 & 1) != 0) {
      puVar38[0x6f] = lVar21;
      if (3 < *_DAT_143ca8e90) {
        puVar38[0x1c] = lVar44;
        puVar38[0x1d] = pdb_140f58250;
        puVar38[0x1e] = puVar38 + 0x6f;
        puVar38[0x1f] = pdb_140f36c20;
        puVar38[0x52] = 0;
        puVar38[0x53] = &UNK_14329f733;
        puVar38[0x54] = 0x13;
        puVar38[0x55] = 0;
        puVar38[0x56] = &UNK_14329f50e;
        puVar38[0x57] = 0x27;
        puVar38[0x58] = 4;
        puVar38[0x59] = &UNK_14329f733;
        puVar38[0x5a] = 0x13;
        puVar38[0x5b] = 0x20700000001;
        puVar38[0x5c] = &UNK_14329f83a;
        puVar38[0x5d] = puVar38 + 0x1c;
        *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197bd3;
        pdb_140f332f0((longlong)puVar38 + 0x3f4,puVar38 + 0x52);
      }
      uVar39 = *(undefined8 *)(lVar44 + 8);
      uVar15 = *(undefined8 *)(lVar44 + 0x10);
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197be1;
      lVar21 = pdb_1418c0450(uVar39,uVar15);
      *(undefined1 *)((longlong)puVar38 + 0x3f7) = 1;
      *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197bff;
      pdb_140f36c40(puVar38 + 0x6f);
    }
    if (lVar21 == *(longlong *)(puVar38[0x7d] + 0x60)) break;
code_r0x000141197a1e:
    do {
      lVar44 = lVar19;
      if (lVar44 == lVar41 * 0x30 + lVar40) {
        if (2 < *_DAT_143ca8e90) {
          uVar39 = puVar38[4];
          uVar15 = puVar38[5];
          *(undefined1 *)((longlong)puVar38 + 0x3f7) = 1;
          *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197d68;
          pdb_141b1e240(puVar38 + 0x3c,uVar39,uVar15,3);
          uVar39 = puVar38[0x19];
          uVar15 = puVar38[0x1a];
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197d8c;
          pdb_141b1e240(puVar38 + 0x6f,uVar39,uVar15,3);
          puVar38[0x1c] = puVar38 + 0x3c;
          puVar38[0x1d] = pdb_140f58250;
          puVar38[0x1e] = puVar38 + 0x6f;
          puVar38[0x1f] = pdb_140f58250;
          puVar38[0x52] = 0;
          puVar38[0x53] = &UNK_14329f733;
          puVar38[0x54] = 0x13;
          puVar38[0x55] = 0;
          puVar38[0x56] = &UNK_14329f50e;
          puVar38[0x57] = 0x27;
          puVar38[0x58] = 3;
          puVar38[0x59] = &UNK_14329f733;
          puVar38[0x5a] = 0x13;
          puVar38[0x5b] = 0x22500000001;
          puVar38[0x5c] = &UNK_14329f711;
          puVar38[0x5d] = puVar38 + 0x1c;
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197e5c;
          pdb_140f332f0((longlong)puVar38 + 0x3f4,puVar38 + 0x52);
          uVar16 = puVar38[0x6f];
          if (uVar16 != 0) {
            pbVar20 = (byte *)puVar38[0x70];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197e7b;
            pub_1406abac0(pbVar20,uVar16,1);
          }
          uVar16 = puVar38[0x3c];
          if (uVar16 != 0) {
            pbVar20 = (byte *)puVar38[0x3d];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197e99;
            pub_1406abac0(pbVar20,uVar16,1);
          }
        }
        uVar39 = *(undefined8 *)puVar38[0x41];
        puVar38[0x54] = puVar38[0x1a];
        puVar38[0x55] = puVar38[0x1b];
        puVar38[0x52] = puVar38[0x18];
        puVar38[0x53] = puVar38[0x19];
        *(undefined1 *)((longlong)puVar38 + 0x3f7) = 0;
        *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
        *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197ee0;
        lVar19 = pdb_142326db0(uVar39,puVar38,puVar38 + 0x52);
        if (lVar19 != 0) {
          puVar38[0x6f] = lVar19;
          if (*_DAT_143ca8e90 != 0) {
            puVar38[0x1c] = puVar38 + 0x6f;
            puVar38[0x1d] = pdb_140f36c20;
            puVar38[0x52] = 0;
            puVar38[0x53] = &UNK_14329f733;
            puVar38[0x54] = 0x13;
            puVar38[0x55] = 0;
            puVar38[0x56] = &UNK_14329f50e;
            puVar38[0x57] = 0x27;
            puVar38[0x58] = 1;
            puVar38[0x59] = &UNK_14329f733;
            puVar38[0x5a] = 0x13;
            puVar38[0x5b] = 0x22e00000001;
            puVar38[0x5c] = &UNK_14329f746;
            puVar38[0x5d] = puVar38 + 0x1c;
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197fc5;
            pdb_140f332f0((longlong)puVar38 + 0x3f4,puVar38 + 0x52);
          }
          *(undefined1 *)((longlong)puVar38 + 0x3f7) = 0;
          *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197fe0;
          pdb_140f36c40(puVar38 + 0x6f);
          puVar38[0x7d] = puVar38[0x4e];
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197ff4;
          pdb_141180fc0();
          pbVar20 = (byte *)puVar38[0x7d];
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119800c;
          pub_1406abac0(pbVar20,0x140,8);
          uVar16 = puVar38[0x4a];
          unaff_R13 = param_1 + 2;
          if (uVar16 != 0) {
            pbVar20 = (byte *)puVar38[0x4b];
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198032;
            pub_1406abac0(pbVar20,uVar16,1);
          }
          goto code_r0x0001411985b6;
        }
        *(undefined4 *)(puVar38 + 0x7d) = 0;
        goto code_r0x000141198041;
      }
      *(undefined1 *)((longlong)puVar38 + 0x3f7) = 1;
      *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197a41;
      cVar12 = pdb_140a3d910(lVar44 + 0x28);
      lVar19 = lVar44 + 0x30;
    } while (cVar12 != '\0');
    *(undefined4 *)(puVar38 + 0x52) = 0;
    puVar38[0x53] = 0;
    *(undefined4 *)(puVar38 + 0x54) = 7;
    *(undefined8 *)((longlong)puVar38 + 0x2a9) = 0;
    *(undefined8 *)((longlong)puVar38 + 0x2a4) = 0;
    *(undefined1 *)(puVar38 + 0x55) = 1;
    lVar21 = *(longlong *)(lVar44 + 8);
    uVar39 = *(undefined8 *)(lVar44 + 0x10);
    *(undefined1 *)((longlong)puVar38 + 0x3f7) = 1;
    *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197aa9;
    uVar16 = pdb_140f4a2a0(puVar38 + 0x52,lVar21,uVar39);
    puVar38[0x3c] = uVar16;
    puVar38[0x3d] = lVar21;
    if ((uVar16 & 1) != 0) {
      *(undefined1 *)((longlong)puVar38 + 0x3f7) = 1;
      *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197a1d;
      pdb_1404b38e0(puVar38 + 0x3d);
      goto code_r0x000141197a1e;
    }
  }
  uVar16 = *_DAT_143ca8e90;
  if (2 < uVar16) {
    uVar39 = *(undefined8 *)(lVar44 + 8);
    uVar15 = *(undefined8 *)(lVar44 + 0x10);
    *(undefined1 *)((longlong)puVar38 + 0x3f7) = 1;
    *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197c40;
    uVar39 = pdb_140f3ecf0(uVar39);
    puVar38[0x6f] = uVar39;
    puVar38[0x70] = uVar15;
    puVar38[0x1c] = puVar38 + 0x6f;
    puVar38[0x1d] = pdb_141186230;
    puVar38[0x52] = 0;
    puVar38[0x53] = &UNK_14329f733;
    puVar38[0x54] = 0x13;
    puVar38[0x55] = 0;
    puVar38[0x56] = &UNK_14329f50e;
    puVar38[0x57] = 0x27;
    puVar38[0x58] = 3;
    puVar38[0x59] = &UNK_14329f733;
    puVar38[0x5a] = 0x13;
    puVar38[0x5b] = 0x21700000001;
    puVar38[0x5c] = &UNK_14329f861;
    puVar38[0x5d] = puVar38 + 0x1c;
    *(undefined1 *)((longlong)puVar38 + 0x3f7) = 1;
    *(undefined1 *)((longlong)puVar38 + 0x3f6) = 1;
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197d1e;
    uVar16 = pdb_140f332f0((longlong)puVar38 + 0x3f4,puVar38 + 0x52);
  }
  *(int *)(puVar38 + 0x7d) = (int)CONCAT71((int7)(uVar16 >> 8),1);
code_r0x000141198041:
  *(undefined1 *)puVar38[0xb] = 1;
  puVar38[0x24] = puVar38[0x4e];
  puVar38[0x25] = puVar38[0x4f];
  puVar38[0x22] = puVar38[0x4c];
  puVar38[0x23] = puVar38[0x4d];
  puVar38[0x20] = puVar38[0x4a];
  puVar38[0x21] = puVar38[0x4b];
  puVar38[0x26] = *puVar38;
  puVar38[0x27] = puVar38[1];
  puVar38[0x55] = 0x8000000000000000;
  puVar38[0x52] = 0;
  puVar38[0x53] = 8;
  puVar38[0x54] = 0;
  *(undefined1 *)(puVar38 + 0x6e) = 0;
  puVar38[0x6d] = 0;
  puVar38[0x1f] = 0x8000000000000003;
  puVar38[0x1c] = puVar38[0x52];
  puVar38[0x1d] = puVar38[0x53];
  puVar38[0x1e] = 0;
  *(undefined1 *)(puVar38 + 0x38) = 0;
  puVar38[0x37] = 0;
  uVar39 = puVar38[0xc];
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198122;
  pdb_1411b0760(uVar39,puVar38 + 0x1c,&UNK_14329f770);
  uVar16 = puVar38[0x55] ^ 0x8000000000000000;
  if (-1 < (longlong)puVar38[0x55]) {
    uVar16 = 4;
  }
  if (2 < uVar16) {
    if (uVar16 == 3) {
      puVar38[0x7a] = puVar38[0x5a];
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119815f;
      pdb_141180fc0();
      pbVar20 = (byte *)puVar38[0x7a];
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198177;
      pub_1406abac0(pbVar20,0x140,8);
      uVar16 = puVar38[0x56];
      if (uVar16 != 0) {
        pbVar20 = (byte *)puVar38[0x57];
code_r0x000141198537:
        *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198542;
        pub_1406abac0(pbVar20,uVar16,1);
      }
    }
    else {
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119851e;
      pdb_1404cc180(puVar38 + 0x55);
      uVar16 = puVar38[0x69];
      if ((!SBORROW8(0,uVar16)) && (uVar16 != 0)) {
        pbVar20 = (byte *)puVar38[0x6a];
        goto code_r0x000141198537;
      }
    }
  }
  puVar30 = (undefined8 *)puVar38[0xd];
  *(undefined4 *)puVar30[2] = *(undefined4 *)((longlong)puVar30 + 0x1c);
  *(undefined1 *)*puVar30 = 2;
  puVar30 = (undefined8 *)puVar38[0xe];
  *(undefined4 *)puVar30[2] = *(undefined4 *)((longlong)puVar30 + 0x1c);
  uVar39 = *puVar30;
  puVar38[0x52] = 2;
  uVar26 = *(undefined4 *)(puVar38 + 0x7d);
  *(char *)((longlong)puVar38 + 0x3f7) = (char)uVar26;
  *(undefined1 *)((longlong)puVar38 + 0x3f6) = 0;
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119858f;
  pdb_140a003a0(uVar39,puVar38 + 0x52);
  if (((char)uVar26 != '\0') && (uVar16 = puVar38[0x18], uVar16 != 0)) {
    pbVar20 = (byte *)puVar38[0x19];
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411985b2;
    pub_1406abac0(pbVar20,uVar16,1);
  }
  unaff_R13 = param_1 + 2;
code_r0x0001411985b6:
  uVar16 = puVar38[3];
  if (uVar16 != 0) {
    pbVar20 = (byte *)puVar38[4];
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411985ce;
    pub_1406abac0(pbVar20,uVar16,1);
  }
code_r0x0001411985ce:
  plVar3 = *(longlong **)puVar38[0x47];
  if (!SBORROW8(0,*plVar3)) {
    lVar19 = plVar3[1];
    lVar40 = plVar3[2];
    uVar39 = *(undefined8 *)(unaff_R12 + 8);
    uVar15 = *(undefined8 *)(unaff_R12 + 0x10);
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198601;
    pdb_140f3ddd0(puVar38 + 0x10,lVar19,lVar40);
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198614;
    pdb_140f3ddd0(puVar38 + 0x4a,uVar39,uVar15);
    if ((((puVar38[0x11] == puVar38[0x4b]) &&
         (*(char *)(puVar38 + 0x17) == *(char *)(puVar38 + 0x51))) &&
        (*(char *)((longlong)puVar38 + 0xb9) == '\x02')) &&
       ((*(char *)((longlong)puVar38 + 0x289) == '\x02' &&
        (*(byte *)(puVar38 + 0x4c) < 3 == *(byte *)(puVar38 + 0x12) < 3)))) {
      uVar39 = puVar38[0x10];
      uVar13 = (uint)puVar38[0x4a];
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198671;
      iVar14 = pub_142e32750(uVar39);
      if (iVar14 != 0) goto code_r0x000141198679;
    }
    else {
code_r0x000141198679:
      puVar38[0x22] = puVar38[0x16];
      puVar38[0x23] = puVar38[0x17];
      puVar38[0x20] = puVar38[0x14];
      puVar38[0x21] = puVar38[0x15];
      puVar38[0x1e] = puVar38[0x12];
      puVar38[0x1f] = puVar38[0x13];
      puVar38[0x1c] = puVar38[0x10];
      puVar38[0x1d] = puVar38[0x11];
      puVar38[0x58] = puVar38[0x50];
      puVar38[0x59] = puVar38[0x51];
      puVar38[0x56] = puVar38[0x4e];
      puVar38[0x57] = puVar38[0x4f];
      puVar38[0x54] = puVar38[0x4c];
      puVar38[0x55] = puVar38[0x4d];
      puVar38[0x52] = puVar38[0x4a];
      puVar38[0x53] = puVar38[0x4b];
      uVar13 = (int)puVar38 + 0x290;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198704;
      cVar12 = pdb_1411a4c10(puVar38 + 0x1c);
      if (cVar12 == '\0') goto code_r0x000141198ab0;
    }
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198712;
    uVar16 = pdb_140f3c9d0();
    bVar45 = uVar16 < (ulonglong)plVar3[7];
    if (plVar3[7] == uVar16) {
      bVar45 = uVar13 < *(uint *)(plVar3 + 8);
    }
    if (bVar45) {
      plVar5 = (longlong *)puVar38[0x42];
      puVar38[0x52] = &UNK_14329f7ff;
      puVar38[0x53] = 0xf;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119875d;
      uVar43 = pdb_140bbbcb0(puVar38 + 0x52);
      uVar43 = uVar43 ^ 0xb1695320004fb443;
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198779;
      uVar16 = uVar43;
      lVar19 = pdb_14072c2d0(plVar5);
      *(undefined1 *)(lVar19 + 0x5e) = 0;
      *(undefined1 *)(lVar19 + 0xcb) = 1;
      if ((uVar16 & 1) == 0) {
        lVar19 = plVar5[2];
        if (lVar19 == *plVar5) {
          *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119879b;
          pdb_142d7f080(plVar5);
        }
        lVar40 = plVar5[1];
        lVar41 = lVar19 * 0x38;
        *(undefined8 *)(lVar40 + lVar41) = 3;
        *(undefined8 *)(lVar40 + 0x10 + lVar41) = puVar38[0xf];
        puVar1 = (undefined4 *)(lVar40 + 0x18 + lVar41);
        *puVar1 = unaff_XMM9_Da;
        puVar1[1] = unaff_XMM9_Db;
        puVar1[2] = unaff_XMM9_Dc;
        puVar1[3] = unaff_XMM9_Dd;
        *(ulonglong *)(lVar40 + 0x28 + lVar41) = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
        *(ulonglong *)(lVar40 + 0x30 + lVar41) = uVar43;
        plVar5[2] = lVar19 + 1;
      }
      puVar38[0x4a] = plVar5;
      puVar38[0x4b] = uVar43;
      puVar38[0x4c] = 0;
      if (plVar5[0x39] == 0) {
code_r0x000141198cba:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198cc6;
        pdb_142dc8150(&UNK_142fa6b48);
      }
      *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198808;
      uVar16 = pdb_1400af0a0(plVar5 + 0x3a,puVar38 + 0x4b);
      lVar19 = plVar5[0x36];
      puVar30 = (undefined8 *)plVar5[0x37];
      bVar46 = (byte)(uVar16 >> 0x39);
      auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
      auVar48 = pshuflw(auVar48,auVar48,0);
      lVar40 = 0;
      do {
        uVar16 = uVar16 & (ulonglong)puVar30;
        auVar47 = *(undefined1 (*) [16])(lVar19 + uVar16);
        auVar56[0] = -(auVar47[0] == auVar48[0]);
        auVar56[1] = -(auVar47[1] == auVar48[1]);
        auVar56[2] = -(auVar47[2] == auVar48[2]);
        auVar56[3] = -(auVar47[3] == auVar48[3]);
        auVar56[4] = -(auVar47[4] == auVar48[4]);
        auVar56[5] = -(auVar47[5] == auVar48[5]);
        auVar56[6] = -(auVar47[6] == auVar48[6]);
        auVar56[7] = -(auVar47[7] == auVar48[7]);
        auVar56[8] = -(auVar47[8] == auVar48[0]);
        auVar56[9] = -(auVar47[9] == auVar48[1]);
        auVar56[10] = -(auVar47[10] == auVar48[2]);
        auVar56[0xb] = -(auVar47[0xb] == auVar48[3]);
        auVar56[0xc] = -(auVar47[0xc] == auVar48[4]);
        auVar56[0xd] = -(auVar47[0xd] == auVar48[5]);
        auVar56[0xe] = -(auVar47[0xe] == auVar48[6]);
        auVar56[0xf] = -(auVar47[0xf] == auVar48[7]);
        uVar42 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(auVar56[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar42;
        while (uVar42 != 0) {
          uVar27 = 0;
          for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          lVar41 = (uVar27 + uVar16 & (ulonglong)puVar30) * -0xd8;
          if (uVar43 == *(ulonglong *)(lVar19 + -0xd8 + lVar41)) {
            puVar25 = (undefined8 *)(lVar19 + lVar41);
            *(undefined4 *)((longlong)puVar25 + -0x14) = 0x42c80000;
            if ((*(byte *)((longlong)puVar38 + 0x3e6) & 1) != 0) goto code_r0x0001411989d9;
            lVar19 = puVar38[0x4a];
            if (*(longlong *)(lVar19 + 0x1c8) == 0) {
code_r0x000141198ccc:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198cd8;
              pdb_142dc8150(&UNK_142fa6b00);
            }
            *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198928;
            uVar16 = pdb_1400af0a0(lVar19 + 0x1d0,puVar38 + 0x4b);
            lVar40 = *(longlong *)(lVar19 + 0x1b0);
            bVar46 = (byte)(uVar16 >> 0x39);
            auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
            auVar48 = pshuflw(auVar48,auVar48,0);
            lVar41 = 0;
            goto code_r0x00014119895b;
          }
          uVar42 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar42);
        }
        auVar52[0] = -(auVar47[0] == bVar11);
        auVar52[1] = -(auVar47[1] == bVar58);
        auVar52[2] = -(auVar47[2] == bVar59);
        auVar52[3] = -(auVar47[3] == bVar60);
        auVar52[4] = -(auVar47[4] == bVar61);
        auVar52[5] = -(auVar47[5] == bVar62);
        auVar52[6] = -(auVar47[6] == bVar63);
        auVar52[7] = -(auVar47[7] == bVar64);
        auVar52[8] = -(auVar47[8] == bVar65);
        auVar52[9] = -(auVar47[9] == bVar66);
        auVar52[10] = -(auVar47[10] == bVar67);
        auVar52[0xb] = -(auVar47[0xb] == bVar68);
        auVar52[0xc] = -(auVar47[0xc] == bVar69);
        auVar52[0xd] = -(auVar47[0xd] == bVar70);
        auVar52[0xe] = -(auVar47[0xe] == bVar71);
        auVar52[0xf] = -(auVar47[0xf] == bVar72);
        if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar52 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar52 >> 0x1f,0) & 1) != 0) || (SUB161(auVar52 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar52 >> 0x37,0) & 1) != 0) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') goto code_r0x000141198cba;
        uVar16 = uVar16 + lVar40 + 0x10;
        lVar40 = lVar40 + 0x10;
      } while( true );
    }
    puVar4 = *(ulonglong **)puVar38[0x47];
    uVar16 = *puVar4;
    if (!SBORROW8(0,uVar16)) {
      if (uVar16 != 0) {
        pbVar20 = (byte *)puVar4[1];
        *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411988c9;
        pub_1406abac0(pbVar20,uVar16,1);
      }
      uVar16 = puVar4[4];
      if (uVar16 != 0) {
        pbVar20 = (byte *)puVar4[5];
        *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411988e1;
        pub_1406abac0(pbVar20,uVar16,1);
      }
    }
    *puVar4 = 0x8000000000000000;
  }
code_r0x000141198ab0:
  puVar38[0x4a] = puVar38[0x77];
  puVar38[0x4b] = puVar38[0x76];
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198ad8;
  uVar39 = pdb_140bbbcb0(puVar38 + 0x4a);
  puVar38[0x52] = uVar39;
  uVar39 = _UNK_14329c268;
  puVar38[0x53] = _DAT_14329c260;
  puVar38[0x54] = uVar39;
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198aff;
  uVar39 = pdb_1400affa0(puVar38 + 0x52);
  puVar38[0x52] = puVar38[0x43];
  puVar38[0x53] = uVar39;
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198b21;
  uVar39 = pdb_1400b0130(puVar38 + 0x52);
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198b38;
  pdb_14072caa0(puVar38 + 0x52,puVar38 + 0x42,uVar39);
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198b47;
  uVar22 = pdb_14116ee90(puVar38 + 0x52,0);
  uVar39 = puVar38[0x77];
  uVar15 = puVar38[0x76];
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198b5e;
  pdb_14119b6b0(uVar22,uVar39,uVar15);
  puVar38[0x1e] = puVar38[0x54];
  puVar38[0x1c] = puVar38[0x52];
  puVar38[0x1d] = puVar38[0x53];
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198b89;
  uVar39 = pdb_14116e180(puVar38 + 0x1c);
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198b96;
  pdb_14119b2b0(uVar39);
  puVar17 = (uint *)puVar38[0x1e];
  puVar38[-4] = puVar17;
  puVar38[-6] = puVar38[0x1c];
  puVar38[-5] = puVar38[0x1d];
  if (puVar38[0x78] != 0) {
    uVar39 = puVar38[0x78];
    uVar15 = puVar38[0x73];
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198bd0;
    puVar17 = (uint *)pdb_140726690(puVar38 + -6,uVar39,uVar15);
  }
  unaff_R12 = (byte *)puVar38[7];
  uVar16 = puVar38[0x40];
  if (uVar16 != 0) {
    pbVar20 = (byte *)puVar38[0x46];
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198c0b;
    pub_1406abac0(pbVar20,uVar16,1);
    puVar17 = extraout_RAX_01;
  }
  if (unaff_R12 == unaff_RDI) {
    return puVar17;
  }
  uVar26 = *(undefined4 *)(unaff_R12 + 0x20);
  uVar2 = *(undefined4 *)(unaff_R12 + 0x24);
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197027;
  pdb_140dea010(puVar38 + 0x3a,uVar26,uVar2);
  uVar26 = *(undefined4 *)(puVar38 + 0x3a);
  *(uint *)((longlong)ppuVar37 + 0x20) =
       (uint)*(ushort *)((longlong)puVar38 + 0x1dc) * 0x100 +
       (uint)*(byte *)((longlong)puVar38 + 0x1de) * 0x1000000 + 1;
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197060;
  pdb_142321560(puVar38 + 0x52,&UNK_14329f2d8,uVar26);
  if (*(int *)(puVar38 + 0x52) == 1) {
    puVar38[0x1e] = puVar38[0x55];
    puVar38[0x1c] = puVar38[0x53];
    puVar38[0x1d] = puVar38[0x54];
    *(undefined **)((longlong)ppuVar37 + 0x20) = &UNK_14329f620;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198d27;
    pdb_142dc8170(&UNK_14329eaa8,0x2b,puVar38 + 0x1c,&UNK_14329ea88);
  }
  puVar38[0x40] = puVar38[0x53];
  uVar39 = *(undefined8 *)unaff_R13;
  puVar38[0x46] = puVar38[0x54];
  puVar38[0x4a] = puVar38[0x54];
  puVar38[0x4b] = puVar38[0x55];
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411970ae;
  uVar15 = pdb_140bbbcb0(puVar38 + 0x4a);
  puVar38[0x52] = uVar15;
  uVar15 = _UNK_14329c338;
  puVar38[0x53] = _DAT_14329c330;
  puVar38[0x54] = uVar15;
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411970d5;
  uVar15 = pdb_1400affa0(puVar38 + 0x52);
  puVar38[0x52] = uVar39;
  puVar38[0x53] = uVar15;
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411970f0;
  uVar39 = pdb_1400b0130(puVar38 + 0x52);
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141197103;
  pdb_14072caa0(puVar38 + 0x1c,param_1,uVar39);
  lVar19 = puVar38[0x1c];
  if (*(longlong *)(lVar19 + 0x1c8) == 0) goto LAB_141198c23;
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x14119712c;
  puVar17 = (uint *)pdb_1400af0a0(lVar19 + 0x1d0,puVar38 + 0x1d);
  puVar38[7] = unaff_R12 + 0x30;
  puVar24 = *(uint **)(lVar19 + 0x1b0);
  puVar29 = *(uint **)(lVar19 + 0x1b8);
  bVar46 = (byte)((ulonglong)puVar17 >> 0x39);
  auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
  auVar47 = pshuflw(auVar48,auVar48,0);
  auVar48._0_8_ = auVar47._0_8_;
  auVar48._8_4_ = auVar47._0_4_;
  auVar48._12_4_ = auVar47._4_4_;
  goto code_r0x00014119715e;
code_r0x00014119895b:
  uVar16 = uVar16 & *(ulonglong *)(lVar19 + 0x1b8);
  auVar47 = *(undefined1 (*) [16])(lVar40 + uVar16);
  auVar57[0] = -(auVar47[0] == auVar48[0]);
  auVar57[1] = -(auVar47[1] == auVar48[1]);
  auVar57[2] = -(auVar47[2] == auVar48[2]);
  auVar57[3] = -(auVar47[3] == auVar48[3]);
  auVar57[4] = -(auVar47[4] == auVar48[4]);
  auVar57[5] = -(auVar47[5] == auVar48[5]);
  auVar57[6] = -(auVar47[6] == auVar48[6]);
  auVar57[7] = -(auVar47[7] == auVar48[7]);
  auVar57[8] = -(auVar47[8] == auVar48[0]);
  auVar57[9] = -(auVar47[9] == auVar48[1]);
  auVar57[10] = -(auVar47[10] == auVar48[2]);
  auVar57[0xb] = -(auVar47[0xb] == auVar48[3]);
  auVar57[0xc] = -(auVar47[0xc] == auVar48[4]);
  auVar57[0xd] = -(auVar47[0xd] == auVar48[5]);
  auVar57[0xe] = -(auVar47[0xe] == auVar48[6]);
  auVar57[0xf] = -(auVar47[0xf] == auVar48[7]);
  uVar42 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar42;
  puVar25 = puVar38 + 0x52;
  puVar30 = puVar38 + 0x1c;
  while (uVar42 != 0) {
    uVar27 = 0;
    for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar27 = uVar27 + 1;
    }
    lVar44 = (uVar27 + uVar16 & *(ulonglong *)(lVar19 + 0x1b8)) * -0xd8;
    if (puVar38[0x4b] == *(longlong *)(lVar40 + -0xd8 + lVar44)) {
      if ((*(byte *)(lVar40 + lVar44 + -6) & 1) != 0) goto code_r0x0001411989d9;
      goto code_r0x000141198a2f;
    }
    uVar42 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar42);
  }
  auVar53[0] = -(auVar47[0] == bVar11);
  auVar53[1] = -(auVar47[1] == bVar58);
  auVar53[2] = -(auVar47[2] == bVar59);
  auVar53[3] = -(auVar47[3] == bVar60);
  auVar53[4] = -(auVar47[4] == bVar61);
  auVar53[5] = -(auVar47[5] == bVar62);
  auVar53[6] = -(auVar47[6] == bVar63);
  auVar53[7] = -(auVar47[7] == bVar64);
  auVar53[8] = -(auVar47[8] == bVar65);
  auVar53[9] = -(auVar47[9] == bVar66);
  auVar53[10] = -(auVar47[10] == bVar67);
  auVar53[0xb] = -(auVar47[0xb] == bVar68);
  auVar53[0xc] = -(auVar47[0xc] == bVar69);
  auVar53[0xd] = -(auVar47[0xd] == bVar70);
  auVar53[0xe] = -(auVar47[0xe] == bVar71);
  auVar53[0xf] = -(auVar47[0xf] == bVar72);
  if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar53 >> 0x17,0) & 1) != 0) || (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar53 >> 0x27,0) & 1) != 0) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') goto code_r0x000141198ccc;
  uVar16 = uVar16 + lVar41 + 0x10;
  lVar41 = lVar41 + 0x10;
  goto code_r0x00014119895b;
code_r0x0001411989d9:
  uVar27 = (uint)puVar30;
  uVar16 = plVar3[7];
  uVar13 = *(uint *)(plVar3 + 8);
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411989e6;
  uVar39 = pdb_140f3c9d0(puVar25);
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x1411989f8;
  uVar43 = pdb_140f5a1d0(uVar39);
  bVar45 = uVar27 < uVar13;
  if (uVar43 != uVar16) {
    bVar45 = uVar43 < uVar16;
  }
  if (bVar45) {
    uVar43 = uVar16;
    uVar27 = uVar13;
  }
  plVar3[7] = uVar43;
  *(uint *)(plVar3 + 8) = uVar27;
code_r0x000141198a2f:
  puVar38[0x1e] = puVar38[0x4c];
  puVar38[0x1c] = puVar38[0x4a];
  puVar38[0x1d] = puVar38[0x4b];
  lVar19 = plVar3[6];
  puVar38[0x10] = plVar3[5];
  puVar38[0x11] = lVar19;
  *(undefined8 *)((longlong)ppuVar37 + 0x20) = 0;
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198a74;
  pdb_141174160(puVar38 + 0x52,puVar38 + 0x1c,&UNK_1434d9d1b,0x16);
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198a8e;
  pdb_14118f670(puVar38 + 0x52,&UNK_1434d9d31,6);
  *(undefined8 *)((longlong)ppuVar37 + -8) = 0x141198aaf;
  pdb_14118e580(puVar38 + 0x52,&UNK_1434d9d37,5,puVar38 + 0x10);
  goto code_r0x000141198ab0;
code_r0x000141185405:
  uStack_40 = 0x4329ec3b;
  uStack_3c = 1;
  uStack_48 = 0x4329ee30;
  uStack_44 = 1;
  cStack_50 = (char)puVar17;
  cStack_4f = (char)((ulonglong)puVar17 >> 8);
  uStack_4e = (undefined2)((ulonglong)puVar17 >> 0x10);
  uStack_4c = (uint)((ulonglong)puVar17 >> 0x20);
  uStack_38 = 5;
  uStack_34 = 0;
  puStack_58 = (undefined *)0x8;
  puVar17 = (uint *)&UNK_14329ee88;
  ppuVar36 = &puStack_78;
  goto code_r0x00014118586b;
}

