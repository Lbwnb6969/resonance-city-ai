// VA 0x140b25330, PDB extent 2232 bytes
// turbosloth::asset::impl$38::read_file::async_fn$0<ref$<std::path::PathBuf> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143059f2f) overlaps instruction at (ram,0x000143059f2e)
    */
/* WARNING: Removing unreachable block (ram,0x000143059e7b) */
/* WARNING: Removing unreachable block (ram,0x000143059e7d) */
/* WARNING: Removing unreachable block (ram,0x000143059eb4) */
/* WARNING: Removing unreachable block (ram,0x000143059eb7) */
/* WARNING: Removing unreachable block (ram,0x000143059ebc) */
/* WARNING: Removing unreachable block (ram,0x000143059f2e) */
/* WARNING: Removing unreachable block (ram,0x000143059e7c) */
/* WARNING: Removing unreachable block (ram,0x000143059e5e) */
/* WARNING: Removing unreachable block (ram,0x000143059e92) */
/* WARNING: Removing unreachable block (ram,0x000143059fbe) */
/* WARNING: Removing unreachable block (ram,0x000143059f4a) */
/* WARNING: Removing unreachable block (ram,0x000143059f4d) */
/* WARNING: Removing unreachable block (ram,0x000143059e74) */
/* WARNING: Removing unreachable block (ram,0x000143059e69) */
/* WARNING: Removing unreachable block (ram,0x000143059ee4) */
/* WARNING: Removing unreachable block (ram,0x000143059e72) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000143059ef6 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Matched PDB project procedure:
   turbosloth::asset::impl$38::read_file::async_fn$0<ref$<std::path::PathBuf> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 2232 */

byte * pdb_140b25330(byte *param_1,byte *param_2,char *param_3,undefined *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined4 uVar5;
  byte bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  longlong lVar15;
  byte *pbVar16;
  byte *extraout_RAX;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  char *pcVar20;
  char *pcVar21;
  ulonglong uVar23;
  ulonglong *puVar24;
  undefined8 uVar25;
  undefined2 uVar26;
  int iVar27;
  undefined8 *puVar28;
  byte *unaff_RBX;
  longlong *plVar30;
  ulonglong **ppuVar31;
  byte **ppbVar32;
  byte **ppbVar33;
  char **ppcVar34;
  char **ppcVar35;
  ulonglong *puVar36;
  ulonglong *unaff_R13;
  ulonglong unaff_R14;
  longlong *plVar37;
  code *pcVar38;
  ulonglong *unaff_R15;
  undefined *puVar39;
  bool bVar40;
  int iStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  ulonglong in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined *in_stack_000000e8;
  undefined1 *in_stack_000000f0;
  code *in_stack_000002a8;
  code *in_stack_000002b0;
  code *in_stack_000002b8;
  ulonglong in_stack_00000348;
  byte *in_stack_00000350;
  undefined8 in_stack_000003a8;
  code *in_stack_000003b8;
  ulonglong *in_stack_000003c0;
  undefined1 auStack_1d0 [32];
  byte *pbStack_190;
  char *apcStack_188 [2];
  int iStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  ulonglong *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  ulonglong *puStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *in_stack_fffffffffffffee0;
  longlong in_stack_fffffffffffffef0;
  int aiStack_108 [4];
  byte *pbStack_f8;
  undefined8 *puStack_f0;
  longlong *plStack_e8;
  code *pcStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong *plStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  longlong *plStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined7 uVar22;
  char cVar29;
  
  pbVar16 = pbStack_138;
  ppcVar35 = apcStack_188;
  ppbVar33 = (byte **)apcStack_188;
  ppcVar34 = apcStack_188;
  uStack_48 = 0xfffffffffffffffe;
  bVar6 = param_2[0x50];
  puVar24 = (ulonglong *)&UNK_143057874;
  uVar13 = (ulonglong)*(int *)(&UNK_143057874 + (ulonglong)bVar6 * 4);
  pbVar14 = &UNK_143057874 + uVar13;
  pbStack_50 = param_2;
  cVar11 = (char)pbVar14;
  uVar12 = (uint)pbVar14;
  uVar22 = (undefined7)((ulonglong)pbVar14 >> 8);
  aiStack_108[0] = (int)apcStack_188;
  cVar29 = (char)((ulonglong)param_2 >> 8);
  iVar27 = (int)param_2;
  ppbVar32 = (byte **)apcStack_188;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar6) {
  case 0:
    goto code_r0x000140b25377;
  case 1:
code_r0x000140b25745:
                    /* WARNING: Subroutine does not return */
    pbStack_190 = (byte *)0x140b25751;
    pdb_142dc8570(&UNK_143056af0);
  case 2:
code_r0x000140b25739:
                    /* WARNING: Subroutine does not return */
    pbStack_190 = (byte *)0x140b25745;
    pdb_142dc8590(&UNK_143056af0);
  case 3:
code_r0x000140b2538c:
    pbVar14 = (byte *)(ulonglong)param_2[0x48];
  case 4:
code_r0x000140b25398:
    puVar39 = &UNK_143057884;
    lVar15 = (longlong)*(int *)(&UNK_143057884 + (longlong)pbVar14 * 4);
code_r0x000140b253a3:
                    /* WARNING: Could not recover jumptable at 0x000140b253a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar14 = (byte *)(*(code *)(puVar39 + lVar15))();
    return pbVar14;
  case 5:
code_r0x000140b25754:
    (&UNK_143057801)[uVar13] = (&UNK_143057801)[uVar13] | 0x74;
code_r0x000140b25757:
                    /* WARNING: Subroutine does not return */
    pbStack_190 = (byte *)0x140b25761;
    pdb_142dc8590();
  case 6:
code_r0x000140b25741:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
code_r0x000140b254d7:
    pbVar16 = (byte *)((ulonglong)param_2 & 0xffffffff);
    pcVar20 = param_3;
    goto code_r0x000140b254dd;
  case 8:
code_r0x000140b2539c:
    uVar13 = (ulonglong)pbVar14 & 0xffffffffffffff53;
    puVar39 = (undefined *)CONCAT71(0x1430578,*(char *)(uVar13 + 99) + 't');
    lVar15 = CONCAT71((int7)(uVar13 >> 8),(char)uVar13 + -0x7f);
    goto code_r0x000140b253a3;
  case 9:
code_r0x000140b25776:
                    /* WARNING: Subroutine does not return */
    pbStack_190 = (byte *)0x140b25793;
    pdb_142dc8590(&UNK_143056a60);
  case 10:
    goto code_r0x000140b25757;
  case 0xb:
code_r0x000140b254e3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
code_r0x000142d8fc54:
    pcVar20 = (char *)0x4;
    if ((byte *)0x8000000000000003 < param_2) {
      pcVar20 = &UNK_143057874;
    }
    if ((char *)0x4 < pcVar20) {
      pbStack_190 = (byte *)0x142d8fda4;
      pdb_1404b38e0(unaff_R15 + 1);
      return param_1;
    }
code_r0x000142d8fc74:
                    /* WARNING: Could not recover jumptable at 0x000142d8fc82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar14 = (byte *)(*(code *)(&UNK_1430578a4 + *(int *)(&UNK_1430578a4 + (longlong)pcVar20 * 4)))
                                ();
    return pbVar14;
  case 0xd:
code_r0x000142d8fd02:
    *pbVar14 = *pbVar14 + cVar11;
    (&UNK_143057883)[uVar13] = (&UNK_143057883)[uVar13] + 't';
    return pbVar14;
  case 0xe:
code_r0x000142d8fd13:
    if (pbVar14 != (byte *)((longlong)&uRam0000000000000000 + 1)) {
      return param_1;
    }
    goto code_r0x000142d8fd1d;
  case 0xf:
code_r0x000142d8fda7:
    if (unaff_R15[1] != 0) {
      pbStack_190 = (byte *)0x142d8fcd8;
      pub_1406abac0(*(byte **)((ulonglong)((int)param_3 + 8) + 8),unaff_R15[1],1);
    }
    uVar13 = unaff_R15[4];
    pcVar20 = (char *)((longlong)&uRam0000000000000000 + 1);
    if (unaff_R14 < uVar13) {
      pcVar20 = param_3 + uVar13;
    }
    if (pcVar20 == (char *)0x0) {
      return param_1;
    }
    if (pcVar20 == (char *)((longlong)&uRam0000000000000000 + 1)) {
      pbVar14 = (byte *)((longlong)&uRam0000000000000000 + 2);
      if ((longlong)uVar13 < 0) {
        pbVar14 = (byte *)((ulonglong)unaff_RBX ^ uVar13);
      }
      if (pbVar14 == (byte *)((longlong)&uRam0000000000000000 + 2)) {
        puVar24 = unaff_R15 + 4;
        uVar13 = *puVar24;
        goto joined_r0x000142d8fdc6;
      }
      goto code_r0x000142d8fd13;
    }
code_r0x000142d8fd1d:
    puVar24 = unaff_R15 + 5;
    uVar13 = *puVar24;
joined_r0x000142d8fdc6:
    if (uVar13 != 0) {
      pbStack_190 = (byte *)0x142d8fdd7;
      pub_1406abac0((byte *)puVar24[1],uVar13,1);
    }
    return param_1;
  case 0x10:
code_r0x000142d8fc65:
    (&UNK_143057883)[uVar13] = (&UNK_143057883)[uVar13] + 't';
    puVar4 = (uint *)(param_3 + -0x7d);
    *puVar4 = *puVar4 >> 0x18 | *puVar4 << 8;
    pcVar20 = (char *)CONCAT71(uVar22,cVar11 + '\x0f');
    LOCK();
    *(int *)(pcVar20 + 0x143057874) = aiStack_108[0];
    UNLOCK();
    *pcVar20 = *pcVar20 + cVar11 + '\x0f';
    goto code_r0x000142d8fc74;
  case 0x11:
code_r0x000140b2ee23:
    param_1[0x5d] = param_1[0x5d] - (char)unaff_RBX;
    return pbVar14;
  case 0x12:
  case 0x13:
code_r0x000140b2f1a0:
    break;
  case 0x14:
code_r0x000140b2eeef:
    puVar28 = *(undefined8 **)(&UNK_143057a24 + uVar13);
    if ((code *)*puVar28 != (code *)0x0) {
      pbStack_190 = (byte *)0x140b2ef08;
      (*(code *)*puVar28)(in_stack_fffffffffffffee0);
    }
    if (puVar28[1] != 0) {
      pbStack_190 = (byte *)0x140b2ef23;
      pub_1406abac0(in_stack_fffffffffffffee0,puVar28[1],puVar28[2]);
    }
    *(undefined1 *)(in_stack_fffffffffffffef0 + 0x1c8) = 0;
    uVar13 = *(ulonglong *)(in_stack_fffffffffffffef0 + 0x160);
    if ((!SBORROW8(0,uVar13)) && (uVar13 != 0)) {
      pbStack_190 = (byte *)0x140b2f051;
      pub_1406abac0(*(byte **)(in_stack_fffffffffffffef0 + 0x168),uVar13,1);
    }
    if (*(char *)(in_stack_fffffffffffffef0 + 0x181) != '\0') {
      if (*(longlong *)(in_stack_fffffffffffffef0 + 200) != 0) {
        pbStack_190 = (byte *)0x140b2f084;
        pub_1406abac0(*(byte **)(in_stack_fffffffffffffef0 + 0xd0),
                      *(longlong *)(in_stack_fffffffffffffef0 + 200) * 0xc,4);
        if (*(char *)(in_stack_fffffffffffffef0 + 0x181) == '\0') goto code_r0x000140b2f111;
      }
      if (*(longlong *)(in_stack_fffffffffffffef0 + 0xe0) != 0) {
        pbStack_190 = (byte *)0x140b2f0b7;
        pub_1406abac0(*(byte **)(in_stack_fffffffffffffef0 + 0xe8),
                      *(longlong *)(in_stack_fffffffffffffef0 + 0xe0) * 0xc,4);
        if (*(char *)(in_stack_fffffffffffffef0 + 0x181) == '\0') goto code_r0x000140b2f111;
      }
      if (*(longlong *)(in_stack_fffffffffffffef0 + 0xf8) != 0) {
        pbStack_190 = (byte *)0x140b2f0e6;
        pub_1406abac0(*(byte **)(in_stack_fffffffffffffef0 + 0x100),
                      *(longlong *)(in_stack_fffffffffffffef0 + 0xf8) * 0xc,4);
        if (*(char *)(in_stack_fffffffffffffef0 + 0x181) == '\0') goto code_r0x000140b2f111;
      }
      if (*(longlong *)(in_stack_fffffffffffffef0 + 0x110) != 0) {
        pbStack_190 = (byte *)0x140b2f111;
        pub_1406abac0(*(byte **)(in_stack_fffffffffffffef0 + 0x118),
                      *(longlong *)(in_stack_fffffffffffffef0 + 0x110) << 3,4);
      }
    }
code_r0x000140b2f111:
    if ((*(char *)(in_stack_fffffffffffffef0 + 0x182) != '\0') &&
       (*(longlong *)(in_stack_fffffffffffffef0 + 0x128) != 0)) {
      pbStack_190 = (byte *)0x140b2f13c;
      pub_1406abac0(*(byte **)(in_stack_fffffffffffffef0 + 0x130),
                    *(longlong *)(in_stack_fffffffffffffef0 + 0x128) << 2,4);
    }
    if ((*(char *)(in_stack_fffffffffffffef0 + 0x181) != '\0') &&
       (*(longlong *)(in_stack_fffffffffffffef0 + 0x140) != 0)) {
      pbStack_190 = (byte *)0x140b2f167;
      pub_1406abac0(*(byte **)(in_stack_fffffffffffffef0 + 0x148),
                    *(longlong *)(in_stack_fffffffffffffef0 + 0x140) << 2,4);
    }
    *(undefined2 *)(in_stack_fffffffffffffef0 + 0x181) = 0;
    plVar30 = *(longlong **)(in_stack_fffffffffffffef0 + 0xc0);
    LOCK();
    *plVar30 = *plVar30 + -1;
    UNLOCK();
    if (*plVar30 == 0) {
      pbStack_190 = (byte *)0x140b2f18d;
      pdb_141746810(in_stack_fffffffffffffef0 + 0xc0);
    }
    break;
  case 0x15:
code_r0x000140b2ee69:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x16:
code_r0x000140b2ef75:
    puVar28 = *(undefined8 **)(&UNK_143057a24 + uVar13);
    if ((code *)*puVar28 != (code *)0x0) {
      pbStack_190 = (byte *)0x140b2ef8e;
      (*(code *)*puVar28)(in_stack_fffffffffffffee0);
    }
    if (puVar28[1] != 0) {
      pbStack_190 = (byte *)0x140b2efa9;
      pub_1406abac0(in_stack_fffffffffffffee0,puVar28[1],puVar28[2]);
    }
    *(undefined1 *)(in_stack_fffffffffffffef0 + 0x1c8) = 0;
    break;
  case 0x17:
code_r0x000140b2f5ac:
    return pbVar14;
  case 0x18:
code_r0x000140b2f6c8:
    pcVar20 = &UNK_14305788e + uVar13;
    *pcVar20 = *pcVar20 >> 0x14;
    bVar40 = *pcVar20 == '\0';
code_r0x000140b2f6cb:
    if (!bVar40) {
      pbStack_190 = &UNK_140b2f6e2;
      pub_1406abac0((byte *)CONCAT44(_UNK_143057888,_UNK_143057884),(ulonglong)param_2,1);
    }
    goto code_r0x000140b2f6e5;
  case 0x19:
code_r0x000140b2f666:
    puVar24 = (ulonglong *)((ulonglong)param_1 & 0xffffffff);
code_r0x000140b2f668:
    pbVar14 = (byte *)puVar24[4];
    pbVar16 = (byte *)((longlong)&uRam0000000000000000 + 1);
    if (unaff_RBX < pbVar14) {
      pbVar16 = param_1 + (longlong)pbVar14;
    }
    if (pbVar16 == (byte *)0x0) {
      return pbVar14;
    }
    if (pbVar16 == (byte *)((longlong)&uRam0000000000000000 + 1)) {
      pbVar16 = (byte *)((ulonglong)param_3 ^ (ulonglong)pbVar14);
      bVar40 = (longlong)pbVar14 < 0;
      pbVar14 = (byte *)((longlong)&uRam0000000000000000 + 2);
      if (bVar40) {
        pbVar14 = pbVar16;
      }
      if (pbVar14 != (byte *)((longlong)&uRam0000000000000000 + 2)) {
        if (pbVar14 != (byte *)((longlong)&uRam0000000000000000 + 1)) {
          return pbVar14;
        }
        goto code_r0x000140b2f6ad;
      }
      puVar24 = puVar24 + 4;
      param_2 = (byte *)*puVar24;
    }
    else {
code_r0x000140b2f6ad:
      puVar24 = puVar24 + 5;
      param_2 = (byte *)*puVar24;
    }
    if (param_2 == (byte *)0x0) {
      return pbVar14;
    }
    puVar24 = (ulonglong *)puVar24[1];
    param_3 = (char *)((longlong)&uRam0000000000000000 + 1);
    goto code_r0x000140b2f776;
  case 0x1a:
code_r0x000140b2f729:
    ppuVar31 = (ulonglong **)(ulonglong)(aiStack_108[0] + 0x40);
code_r0x000140b2f72c:
    pbStack_128 = *(byte **)((longlong)ppuVar31 + 0x20);
    ppbVar33 = (byte **)((longlong)ppuVar31 + 0x28);
    pbVar14 = *(byte **)((longlong)ppuVar31 + 0x10);
pdb_1404b6770:
    *(byte **)((longlong)ppbVar33 + -8) = pbStack_128;
    *(byte **)((longlong)ppbVar33 + -0x10) = pbVar14;
    *(undefined8 *)((longlong)ppbVar33 + -0x18) = 0xfffffffffffffffe;
    uVar13 = *puVar24;
    uVar23 = 2;
    if ((longlong)uVar13 < 0) {
      uVar23 = uVar13 ^ 0x8000000000000000;
    }
    if (uVar23 == 1) {
      uVar13 = puVar24[1];
      puVar36 = puVar24 + 1;
joined_r0x0001404b681b:
      if (uVar13 != 0) {
        pbVar14 = (byte *)puVar36[1];
        *(undefined **)((longlong)ppbVar33 + -0x50) = &UNK_1404b67c5;
        pub_1406abac0(pbVar14,uVar13,1);
      }
    }
    else {
      puVar36 = puVar24;
      if (uVar23 == 2) goto joined_r0x0001404b681b;
    }
    uVar13 = puVar24[4];
    *(ulonglong *)((longlong)ppbVar33 + -0x28) = uVar13;
    if (uVar13 == 0) {
      return (byte *)0x0;
    }
    puVar28 = (undefined8 *)puVar24[5];
    *(undefined8 **)((longlong)ppbVar33 + -0x20) = puVar28;
    pcVar18 = (code *)*puVar28;
    if (pcVar18 != (code *)0x0) {
      *(undefined **)((longlong)ppbVar33 + -0x50) = &UNK_1404b67e8;
      (*pcVar18)(*(undefined8 *)((longlong)ppbVar33 + -0x28));
    }
    pbVar14 = *(byte **)((longlong)ppbVar33 + -0x20);
    param_2 = *(byte **)(pbVar14 + 8);
    if (param_2 == (byte *)0x0) {
      return pbVar14;
    }
    param_3 = *(char **)(pbVar14 + 0x10);
    puVar24 = *(ulonglong **)((longlong)ppbVar33 + -0x28);
    pbVar16 = *(byte **)((longlong)ppbVar33 + -0x10);
    pbStack_128 = *(byte **)((longlong)ppbVar33 + -8);
    goto code_r0x0001406abac0;
  case 0x1b:
code_r0x000140b2f5bf:
    param_1 = (byte *)0x7ffffffffffffffc;
    unaff_RBX = (byte *)0x8000000000000003;
    pbVar14 = (byte *)0x4;
    if ((byte *)0x8000000000000003 < _UNK_143057874) {
      pbVar14 = _UNK_143057874 + 0x7ffffffffffffffc;
    }
    if ((byte *)0x4 < pbVar14) {
      pbStack_130 = (byte *)0xfffffffffffffffe;
      if ((((uint)_UNK_14305787c & 3) - 2 < 2) || (((ulonglong)_UNK_14305787c & 3) == 0)) {
        return _UNK_14305787c;
      }
      puStack_148 = (ulonglong *)(_UNK_14305787c + -1);
      pbStack_140 = *(byte **)(_UNK_14305787c + -1);
      pbStack_138 = *(byte **)(_UNK_14305787c + 7);
      if (*(code **)pbStack_138 != (code *)0x0) {
        uStack_170 = 0x1404b3933;
        (**(code **)pbStack_138)(pbStack_140);
      }
      if (*(ulonglong *)(pbStack_138 + 8) != 0) {
        uStack_170 = 0x1404b394e;
        pub_1406abac0(pbStack_140,*(ulonglong *)(pbStack_138 + 8),*(ulonglong *)(pbStack_138 + 0x10)
                     );
      }
      param_2 = (byte *)0x18;
      param_3 = (char *)0x8;
      ppbVar33 = (byte **)&stack0xfffffffffffffee0;
      puVar24 = puStack_148;
      goto code_r0x0001406abac0;
    }
    pbVar16 = &UNK_1430578d0 + *(int *)(&UNK_1430578d0 + (longlong)pbVar14 * 4);
    switch(pbVar14) {
    case (byte *)0x0:
      puVar24 = (ulonglong *)&UNK_14305787c;
      ppbVar33 = (byte **)&stack0xfffffffffffffee0;
      pbVar14 = pbStack_138;
      goto pdb_1404b6770;
    case (byte *)0x1:
      puVar24 = (ulonglong *)&UNK_14305787c;
      ppuVar31 = &puStack_148;
      goto code_r0x000140b2f72c;
    case (byte *)0x3:
      goto code_r0x000140b2f785;
    case (byte *)0x4:
      param_3 = (char *)0x8000000000000000;
      uVar13 = 2;
      if ((longlong)_UNK_143057874 < 0) {
        uVar13 = (ulonglong)_UNK_143057874 ^ 0x8000000000000000;
      }
      if (uVar13 == 1) {
        puVar39 = &UNK_14305787c;
        pbVar14 = _UNK_14305787c;
joined_r0x000140b2f755:
        if (pbVar14 != (byte *)0x0) {
          pbStack_190 = &UNK_140b2f665;
          pub_1406abac0(*(byte **)(puVar39 + 8),(ulonglong)pbVar14,1);
          puVar24 = (ulonglong *)&UNK_143057874;
        }
      }
      else {
        puVar39 = &UNK_143057874;
        pbVar14 = _UNK_143057874;
        if (uVar13 == 2) goto joined_r0x000140b2f755;
      }
      goto code_r0x000140b2f668;
    }
    bVar40 = _UNK_14305787c == (byte *)0x0;
    param_2 = _UNK_14305787c;
    if (-1 < (longlong)_UNK_14305787c) goto code_r0x000140b2f6cb;
code_r0x000140b2f6e5:
    pbVar14 = _UNK_14305789c;
    puVar24 = _UNK_143057894;
    pbVar16 = (byte *)0x0;
    if (_UNK_143057894 == (ulonglong *)0x0) {
code_r0x000140b2f785:
      return pbVar16;
    }
    if (*(code **)_UNK_14305789c != (code *)0x0) {
      pbStack_190 = &UNK_140b2f70c;
      (**(code **)_UNK_14305789c)(_UNK_143057894);
    }
    param_2 = *(byte **)(pbVar14 + 8);
    if (param_2 == (byte *)0x0) {
      return pbVar14;
    }
    param_3 = *(char **)(pbVar14 + 0x10);
code_r0x000140b2f776:
    ppbVar32 = &pbStack_140;
code_r0x000140b2f779:
    pbVar16 = *(byte **)((longlong)ppbVar32 + 0x10);
    pbStack_128 = *(byte **)((longlong)ppbVar32 + 0x20);
    ppbVar33 = (byte **)((longlong)ppbVar32 + 0x28);
    goto code_r0x0001406abac0;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    goto code_r0x000140b2f779;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
code_r0x000140b2f791:
    iStack_178 = iVar27;
    ppcVar34 = (char **)auStack_1d0;
    pbVar16 = param_2 + 0x40;
    pbVar14 = *(byte **)(param_2 + 0x30);
    param_2 = *(byte **)(pbVar14 + 8);
    bVar40 = param_2 == (byte *)0x0;
    pbStack_190 = (byte *)aiStack_108;
code_r0x000140b2f7ae:
    if (!bVar40) {
      uVar13 = *(ulonglong *)(*(longlong *)(pbVar16 + -0x10) + 0x10);
      pbVar14 = *(byte **)(pbVar16 + -0x18);
      *(undefined **)((longlong)ppcVar34 + -8) = &UNK_140b2f7c1;
      pub_1406abac0(pbVar14,(ulonglong)param_2,uVar13);
      pbVar14 = extraout_RAX;
    }
    return pbVar14;
  case 0x24:
code_r0x000140b2f7ac:
    bVar40 = iVar27 == 0;
    pbVar16 = (byte *)aiStack_108;
    goto code_r0x000140b2f7ae;
  case 0x25:
code_r0x000140b2f804:
    (&UNK_1430577f9)[uVar13] = (&UNK_1430577f9)[uVar13] | 0x74;
    (param_1 + 0x48)[(longlong)aiStack_108] = 0;
    param_2 = (byte *)((longlong)param_2 * 2);
    param_3 = (char *)((longlong)&uRam0000000000000000 + 2);
    puVar24 = (ulonglong *)(ulonglong)_UNK_143057884;
    pbStack_128 = (byte *)aiStack_108;
    pbVar16 = param_1;
    goto code_r0x0001406abac0;
  default:
code_r0x000140b2f860:
    pcVar20 = &UNK_1430577f7 + uVar13;
    *pcVar20 = *pcVar20;
    *param_3 = *param_3 + 't' + (*pcVar20 < '\0');
    uVar5 = uRam000000018f057874;
    LOCK();
    uRam000000018f057874 = 0x43057874;
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000140b2f879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar14 = (byte *)(*(code *)(param_3 + *(int *)(param_3 + 0x10c15e420)))(CONCAT44(1,uVar5));
    return pbVar14;
  case 0x2e:
  case 0x2f:
  case 0x32:
  case 0x34:
  case 0x35:
code_r0x000140b2f7e7:
    ppbVar32 = (byte **)apcStack_188;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar6) {
    case 0:
      goto code_r0x000140b25377;
    case 1:
      goto code_r0x000140b25745;
    case 2:
      goto code_r0x000140b25739;
    case 3:
      goto code_r0x000140b2538c;
    case 4:
      goto code_r0x000140b25398;
    case 5:
      goto code_r0x000140b25754;
    case 6:
      goto code_r0x000140b25741;
    case 7:
      goto code_r0x000140b254d7;
    case 8:
      goto code_r0x000140b2539c;
    case 9:
      goto code_r0x000140b25776;
    case 10:
      goto code_r0x000140b25757;
    case 0xb:
      goto code_r0x000140b254e3;
    case 0xc:
      goto code_r0x000142d8fc54;
    case 0xd:
      goto code_r0x000142d8fd02;
    case 0xe:
      goto code_r0x000142d8fd13;
    case 0xf:
      goto code_r0x000142d8fda7;
    case 0x10:
      goto code_r0x000142d8fc65;
    case 0x11:
      goto code_r0x000140b2ee23;
    case 0x12:
    case 0x13:
      goto code_r0x000140b2f1a0;
    case 0x14:
      goto code_r0x000140b2eeef;
    case 0x15:
      goto code_r0x000140b2ee69;
    case 0x16:
      goto code_r0x000140b2ef75;
    case 0x17:
      goto code_r0x000140b2f5ac;
    case 0x18:
      goto code_r0x000140b2f6c8;
    case 0x19:
      goto code_r0x000140b2f666;
    case 0x1a:
      goto code_r0x000140b2f729;
    case 0x1b:
      goto code_r0x000140b2f5bf;
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
      goto code_r0x000140b2f779;
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      goto code_r0x000140b2f791;
    case 0x24:
      goto code_r0x000140b2f7ac;
    case 0x25:
      goto code_r0x000140b2f804;
    default:
      goto code_r0x000140b2f860;
    case 0x2e:
    case 0x2f:
    case 0x32:
    case 0x34:
    case 0x35:
      goto code_r0x000140b2f7e7;
    case 0x33:
      goto code_r0x000140b2f821;
    case 0x36:
      goto code_r0x000140b2fc15;
    case 0x37:
      goto code_r0x000140b30b64;
    case 0x38:
      goto code_r0x000140b30b58;
    case 0x39:
      goto code_r0x000140b2fcc4;
    case 0x3a:
      goto code_r0x000140b2fcd0;
    case 0x3b:
      goto code_r0x000140b30b77;
    case 0x3c:
      goto code_r0x000140b30b61;
    case 0x3d:
      goto code_r0x000140b2fd59;
    case 0x3e:
      goto code_r0x000140b3039c;
    case 0x3f:
      goto code_r0x000140b2fd8e;
    case 0x40:
      goto code_r0x000140b314da;
    case 0x41:
      goto code_r0x000140b31573;
    case 0x42:
      goto code_r0x000140b31528;
    case 0x43:
      goto code_r0x000140b31541;
    case 0x44:
      goto code_r0x000140b314f3;
    case 0x45:
      goto code_r0x000140b315a8;
    case 0x46:
      goto code_r0x000140b315dd;
    case 0x47:
      goto code_r0x000140b3155a;
    case 0x48:
      goto code_r0x000140b315f6;
    case 0x49:
    case 0x4a:
      goto code_r0x000143057874;
    case 0x4b:
    case 0x4d:
    case 0x4e:
      goto code_r0x000143057875;
    case 0x4c:
      goto code_r0x000143059df5;
    }
  case 0x33:
code_r0x000140b2f821:
    if (iVar27 == 0) {
      return pbVar14;
    }
    param_2 = (byte *)((longlong)param_2 << 2);
    param_3 = (char *)0x4;
    puVar24 = (ulonglong *)CONCAT44(_UNK_143057888,_UNK_143057884);
    ppbVar33 = (byte **)apcStack_188;
    pbStack_128 = (byte *)aiStack_108;
    pbVar16 = param_1;
    goto code_r0x0001406abac0;
  case 0x36:
code_r0x000140b2fc15:
    *pbVar14 = *pbVar14 + cVar11;
                    /* WARNING: Subroutine does not return */
    pbStack_190 = (byte *)0x140b2fc26;
    pdb_142dc7e11(8,0x248);
  case 0x37:
code_r0x000140b30b64:
    *(char *)(uVar13 + 0xd090c075) =
         *(char *)(uVar13 + 0xd090c075) + cVar29 + (0xfffffffebcfa878b < uVar13);
    goto code_r0x000140b30b6e;
  case 0x38:
code_r0x000140b30b58:
    uVar25 = 0;
code_r0x000140b30b5a:
    *(undefined8 *)param_1 = uVar25;
    *(byte **)(param_1 + 8) = pbVar14;
  case 0x3c:
code_r0x000140b30b61:
    *(byte **)(param_1 + 0x10) = param_2;
    pbVar14 = (byte *)((longlong)&uRam0000000000000000 + 1);
    puVar24 = in_stack_000003c0;
    goto code_r0x000140b30b6e;
  case 0x39:
code_r0x000140b2fcc4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3a:
code_r0x000140b2fcd0:
    lVar15 = CONCAT71(uVar22,cVar11 + *pbVar14);
    pcVar20 = (char *)(lVar15 + -0x73);
    *pcVar20 = *pcVar20 + 't';
                    /* WARNING: Could not emulate address calculation at 0x000140b2fcdd */
                    /* WARNING: Treating indirect jump as call */
    pbVar14 = (byte *)(*(code *)(&UNK_143057874 +
                                *(int *)(&UNK_143057874 + (ulonglong)((uint)lVar15 | 0x2527c6f) * 4)
                                ))();
    return pbVar14;
  case 0x3b:
    goto code_r0x000140b30b77;
  case 0x3d:
code_r0x000140b2fd59:
    UNK_14305782c = UNK_14305782c + cVar11;
    ppbVar33 = (byte **)aiStack_108;
    if (UNK_14305782c != '\0') {
      (&UNK_1430577fd)[uVar13] = (&UNK_1430577fd)[uVar13] + 's';
      *(int *)pbVar14 = *(int *)pbVar14 - (int)param_1;
      ppbVar33 = &pbStack_190;
      ppcVar35 = (char **)&stack0xfffffffffffffe6c;
      pbStack_190 = (byte *)aiStack_108;
    }
    *pbVar14 = *pbVar14 + cVar11;
    *(undefined8 *)((longlong)ppcVar35 + -8) = 0x140b2fd68;
    pub_142e32760();
    lVar15 = *(longlong *)((longlong)ppbVar33 + 0x4c8);
    *(undefined8 *)((longlong)ppcVar35 + -8) = 0x140b2fd84;
    pub_142e32760(lVar15 + 0x60);
    uVar13 = (ulonglong)*(byte *)(lVar15 + 0x1e0);
    puVar24 = (ulonglong *)&UNK_14305795c;
code_r0x000140b2fd93:
                    /* WARNING: Could not recover jumptable at 0x000140b2fd9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar14 = (byte *)(*(code *)((longlong)*(int *)((longlong)puVar24 + uVar13 * 4) +
                                (longlong)puVar24))();
    return pbVar14;
  case 0x3e:
code_r0x000140b3039c:
    *(uint *)unaff_RBX = *(int *)unaff_RBX + uVar12;
    if (SBORROW8(0,unaff_R15[0x38])) {
      pbStack_190 = (byte *)0x140b303cc;
      pdb_140cf7a90(&stack0x00000098,&UNK_143057808,0xc);
      in_stack_000002b0 = _uStack00000000000000b0;
      in_stack_000002a8 = _uStack00000000000000a8;
      pcVar17 = _uStack00000000000000a0;
      pcVar18 = _iStack0000000000000098;
      if (!SBORROW8(0,(longlong)_iStack0000000000000098)) {
        uVar13 = *unaff_R13;
        if ((!SBORROW8(0,uVar13)) && (uVar13 != 0)) {
          pbStack_190 = (byte *)0x140b3041f;
          pub_1406abac0((byte *)in_stack_000003c0[0x39],uVar13,1);
        }
        in_stack_000003c0[0x38] = (ulonglong)pcVar18;
        in_stack_000003c0[0x39] = (ulonglong)pcVar17;
        *(int *)(in_stack_000003c0 + 0x3a) = (int)in_stack_000002a8;
        *(int *)((longlong)in_stack_000003c0 + 0x1d4) = (int)((ulonglong)in_stack_000002a8 >> 0x20);
        *(int *)(in_stack_000003c0 + 0x3b) = (int)in_stack_000002b0;
        *(int *)((longlong)in_stack_000003c0 + 0x1dc) = (int)((ulonglong)in_stack_000002b0 >> 0x20);
        unaff_R15 = in_stack_000003c0;
        goto code_r0x000140b30460;
      }
      goto code_r0x000140b30917;
    }
code_r0x000140b30460:
    unaff_R15[0x3d] = (ulonglong)(unaff_R15 + 0x20);
    unaff_R15[0x3e] = (ulonglong)unaff_R13;
    *(char *)(unaff_R15 + 0x47) = '\0';
    in_stack_000003b8 = (code *)(unaff_R15 + 0x3d);
    pbStack_190 = (byte *)0x140b304a8;
    pdb_140b25330(&stack0x00000098,in_stack_000003b8,param_3);
    pcVar19 = _uStack00000000000000b8;
    pcVar38 = _uStack00000000000000b0;
    pcVar18 = _uStack00000000000000a8;
    pcVar17 = _uStack00000000000000a0;
    if (iStack0000000000000098 != 1) {
      if ((((char)in_stack_000003c0[0x47] == '\x03') && ((char)in_stack_000003c0[0x46] == '\x03'))
         && (*(char *)((longlong)in_stack_000003c0 + 0x229) == '\x03')) {
        pbStack_190 = (byte *)0x140b3051c;
        pdb_1400d68e0(in_stack_000003c0 + 0x41);
        *(char *)(in_stack_000003c0 + 0x45) = '\0';
      }
      if (pcVar17 == (code *)0x0) {
        *(code **)in_stack_000003b8 = pcVar18;
        if (2 < *_DAT_143ca8e90) {
          pbStack_190 = (byte *)0x140b305a3;
          pdb_141b1e240(&stack0x00000348,in_stack_000003c0[0x19],in_stack_000003c0[0x1a],3);
          if (SBORROW8(0,in_stack_000003c0[0x38])) {
            pbStack_190 = (byte *)0x140b305bb;
            pdb_14007ee60();
            pbStack_190 = (byte *)0x140b305ca;
            pcVar18 = (code *)pub_1406abab0(0x12,1);
            uVar9 = _UNK_143057869;
            uVar8 = _UNK_143057865;
            uVar5 = _UNK_143057861;
            if (pcVar18 == (code *)0x0) {
              pbStack_190 = (byte *)0x140b30c84;
              pdb_142dc7e2a(1,0x12);
                    /* WARNING: Does not return */
              pcVar18 = (code *)invalidInstructionException();
              (*pcVar18)();
            }
            *(undefined4 *)pcVar18 = _UNK_14305785d;
            *(undefined4 *)(pcVar18 + 4) = uVar5;
            *(undefined4 *)(pcVar18 + 8) = uVar8;
            *(undefined4 *)(pcVar18 + 0xc) = uVar9;
            *(undefined2 *)(pcVar18 + 0x10) = 0x796c;
            in_stack_000002a8 = (code *)0x12;
          }
          else {
            pbStack_190 = (byte *)0x140b30628;
            pdb_141b1e240(&stack0x00000098,in_stack_000003c0[0x39],in_stack_000003c0[0x3a],3);
            pbStack_190 = (byte *)0x140b30658;
            pdb_140f60760(&stack0x000002a8,&UNK_14305786f,&stack0x00000298);
            pcVar18 = in_stack_000002b0;
            if (_iStack0000000000000098 != (code *)0x0) {
              pbStack_190 = (byte *)0x140b30677;
              pub_1406abac0((byte *)_uStack00000000000000a0,(ulonglong)_iStack0000000000000098,1);
            }
          }
          in_stack_000002b0 = pdb_140f58250;
          in_stack_000002b8 = (code *)&stack0x00000368;
          _iStack0000000000000098 = (code *)0x0;
          _uStack00000000000000a0 = (code *)&UNK_143057841;
          _uStack00000000000000a8 = (code *)0x1c;
          _uStack00000000000000b0 = (code *)0x0;
          _uStack00000000000000b8 = (code *)&UNK_1430577c4;
          _uStack00000000000000c0 = 0x29;
          _uStack00000000000000c8 = 3;
          _uStack00000000000000d0 = &UNK_143057841;
          in_stack_000000d8 = 0x1c;
          in_stack_000000e0 = 0x5400000001;
          in_stack_000000e8 = &UNK_143057814;
          in_stack_000000f0 = &stack0x000002a8;
          pbStack_190 = (byte *)0x140b30769;
          pdb_140f332f0(&stack0x0000039f,&stack0x00000098);
          if (in_stack_000002a8 != (code *)0x0) {
            pbStack_190 = (byte *)0x140b30788;
            pub_1406abac0((byte *)pcVar18,(ulonglong)in_stack_000002a8,1);
          }
          if (in_stack_00000348 != 0) {
            pbStack_190 = (byte *)0x140b307ad;
            pub_1406abac0(in_stack_00000350,in_stack_00000348,1);
          }
        }
        pbStack_190 = (byte *)0x140b307b2;
        pdb_14007ee60();
        pcVar18 = (code *)0x8;
        pbStack_190 = (byte *)0x140b307c1;
        in_stack_000003b8 = (code *)pub_1406abab0(0x48,8);
        if (in_stack_000003b8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          pbStack_190 = (byte *)0x140b30c2d;
          pdb_142dc7e11(8,0x48);
        }
        pcVar38 = (code *)((longlong)&uRam0000000000000000 + 2);
        pcVar17 = in_stack_000002b0;
        if (in_stack_000003c0[0x3d] != 0) {
          pbStack_190 = (byte *)0x140b307ed;
          pcVar19 = (code *)pdb_141748780(in_stack_000003c0 + 0x3d);
          if (pcVar19 != (code *)0x0) {
            pcVar38 = (code *)((longlong)&uRam0000000000000000 + 1);
            pcVar17 = pcVar19;
            in_stack_000002b8 = pcVar18;
          }
        }
        pcVar18 = (code *)(in_stack_000003c0 + 0x25);
        pbStack_190 = (byte *)0x140b30832;
        pdb_140cf9a60(&stack0x00000098,pcVar18,&stack0x000002a8);
        *(ulonglong *)(in_stack_000003b8 + 0x40) = in_stack_000000d8;
        *(undefined4 *)(in_stack_000003b8 + 0x30) = uStack00000000000000c8;
        *(undefined4 *)(in_stack_000003b8 + 0x34) = uStack00000000000000cc;
        *(undefined4 *)(in_stack_000003b8 + 0x38) = uStack00000000000000d0;
        *(undefined4 *)(in_stack_000003b8 + 0x3c) = uStack00000000000000d4;
        *(undefined4 *)(in_stack_000003b8 + 0x20) = uStack00000000000000b8;
        *(undefined4 *)(in_stack_000003b8 + 0x24) = uStack00000000000000bc;
        *(undefined4 *)(in_stack_000003b8 + 0x28) = uStack00000000000000c0;
        *(undefined4 *)(in_stack_000003b8 + 0x2c) = uStack00000000000000c4;
        *(undefined4 *)(in_stack_000003b8 + 0x10) = uStack00000000000000a8;
        *(undefined4 *)(in_stack_000003b8 + 0x14) = uStack00000000000000ac;
        *(undefined4 *)(in_stack_000003b8 + 0x18) = uStack00000000000000b0;
        *(undefined4 *)(in_stack_000003b8 + 0x1c) = uStack00000000000000b4;
        *(int *)in_stack_000003b8 = iStack0000000000000098;
        *(undefined4 *)(in_stack_000003b8 + 4) = uStack000000000000009c;
        *(undefined4 *)(in_stack_000003b8 + 8) = uStack00000000000000a0;
        *(undefined4 *)(in_stack_000003b8 + 0xc) = uStack00000000000000a4;
        ((char *)((longlong)in_stack_000003c0 + 0x1e1))[0] = '\0';
        ((char *)((longlong)in_stack_000003c0 + 0x1e1))[1] = '\0';
        pbStack_190 = (byte *)0x140b308b5;
        pub_142e32760(&stack0x00000098,pcVar18,0x98);
        pbStack_190 = (byte *)0x140b308cf;
        pdb_140cf7870(&stack0x000002a8,&stack0x00000098,&stack0x00000280,0);
        if (SBORROW8(0,(longlong)pcVar38)) {
code_r0x000140b308ea:
          *(char *)((longlong)in_stack_000003c0 + 0x1e3) = '\0';
          plVar30 = (longlong *)in_stack_000003c0[0x3d];
          if (plVar30 != (longlong *)0x0) {
            LOCK();
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
              pbStack_190 = (byte *)0x140b30916;
              pdb_141746810(in_stack_000003c0 + 0x3d);
            }
          }
          goto code_r0x000140b30917;
        }
        *(char *)((longlong)in_stack_000003c0 + 0x1e3) = '\0';
        _uStack00000000000000b0 = (code *)((ulonglong)_uStack00000000000000b0 & 0xffffffffffffff00);
        puVar28 = (undefined8 *)&stack0x00000098;
        pbStack_190 = (byte *)0x140b30be4;
        _iStack0000000000000098 = pcVar38;
        _uStack00000000000000a0 = pcVar17;
        _uStack00000000000000a8 = in_stack_000002b8;
        uVar13 = pdb_14170d0a0(in_stack_000003c0 + 0x20);
        in_stack_000003c0[0x3e] = uVar13;
        in_stack_000003c0[0x3f] = (ulonglong)puVar28;
        pbStack_190 = (byte *)0x140b2fe99;
        (*(code *)puVar28[3])(&stack0x00000098,uVar13,param_3);
        pcVar10 = _uStack00000000000000b8;
        pcVar18 = _uStack00000000000000b0;
        pcVar17 = _uStack00000000000000a8;
        pcVar19 = _uStack00000000000000a0;
        pcVar38 = _iStack0000000000000098;
        if (_iStack0000000000000098 == (code *)((longlong)&uRam0000000000000000 + 2)) {
          cVar11 = '\x05';
          goto code_r0x000140b304b4;
        }
        in_stack_000003b8 = (code *)in_stack_000003c0[0x3e];
        puVar28 = (undefined8 *)in_stack_000003c0[0x3f];
        if ((code *)*puVar28 != (code *)0x0) {
          pbStack_190 = (byte *)0x140b2ffd6;
          (*(code *)*puVar28)(in_stack_000003b8);
        }
        if (puVar28[1] != 0) {
          pbStack_190 = (byte *)0x140b2fff7;
          pub_1406abac0((byte *)in_stack_000003b8,puVar28[1],puVar28[2]);
        }
        if ((int)pcVar38 == 1) {
          _iStack0000000000000098 = pcVar19;
          _uStack00000000000000a0 = pcVar17;
          _uStack00000000000000a8 = pcVar18;
          _uStack00000000000000b0 = pcVar10;
          pbStack_190 = (byte *)0x140b30045;
          pcVar17 = (code *)pdb_142deada0(&stack0x00000098);
          goto code_r0x000140b308ea;
        }
        LOCK();
        *(ulonglong *)pcVar10 = *(ulonglong *)pcVar10 - 1;
        UNLOCK();
        if (*(ulonglong *)pcVar10 == 0) {
          pbStack_190 = (byte *)0x140b3011a;
          pdb_140cd0de0(&stack0x000002b8);
        }
        *(char *)((longlong)in_stack_000003c0 + 0x1e3) = '\0';
        plVar30 = (longlong *)in_stack_000003c0[0x3d];
        if (plVar30 != (longlong *)0x0) {
          LOCK();
          *plVar30 = *plVar30 + -1;
          UNLOCK();
          if (*plVar30 == 0) {
            pbStack_190 = (byte *)0x140b3014e;
            pdb_141746810(in_stack_000003c0 + 0x3d);
          }
        }
        uVar13 = in_stack_000003c0[0x38];
        if ((!SBORROW8(0,uVar13)) && (uVar13 != 0)) {
          pbStack_190 = (byte *)0x140b30179;
          pub_1406abac0((byte *)in_stack_000003c0[0x39],uVar13,1);
        }
        ((char *)((longlong)in_stack_000003c0 + 0x1e1))[0] = '\0';
        ((char *)((longlong)in_stack_000003c0 + 0x1e1))[1] = '\0';
        plVar30 = (longlong *)in_stack_000003c0[0x24];
        LOCK();
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          pbStack_190 = (byte *)0x140b301a3;
          pdb_141746810(in_stack_000003c0 + 0x24);
        }
        pbStack_190 = (byte *)0x140b301be;
        pdb_14098a860(in_stack_000003c0 + 0x20);
        if (in_stack_000003c0[0x18] != 0) {
          pbStack_190 = (byte *)0x140b301e9;
          pub_1406abac0((byte *)in_stack_000003c0[0x19],in_stack_000003c0[0x18],1);
        }
        param_2 = (byte *)in_stack_000003c0[0x1c];
        bVar7 = false;
        bVar40 = false;
        pcVar38 = pcVar17;
        in_stack_000003b8 = pcVar18;
      }
      else {
        _uStack00000000000000a8 = pcVar38;
        _uStack00000000000000b0 = pcVar19;
        _iStack0000000000000098 = pcVar17;
        _uStack00000000000000a0 = pcVar18;
        pbStack_190 = (byte *)0x140b30559;
        pcVar17 = (code *)pdb_142deada0(&stack0x00000098);
code_r0x000140b30917:
        uVar13 = in_stack_000003c0[0x38];
        if ((!SBORROW8(0,uVar13)) && (uVar13 != 0)) {
          pbStack_190 = (byte *)0x140b30941;
          pub_1406abac0((byte *)in_stack_000003c0[0x39],uVar13,1);
        }
        if (*(char *)((longlong)in_stack_000003c0 + 0x1e1) != '\0') {
          if (in_stack_000003c0[0x25] != 0) {
            pbStack_190 = (byte *)0x140b30974;
            pub_1406abac0((byte *)in_stack_000003c0[0x26],in_stack_000003c0[0x25] * 0xc,4);
            if (*(char *)((longlong)in_stack_000003c0 + 0x1e1) == '\0') goto code_r0x000140b30a01;
          }
          if (in_stack_000003c0[0x28] != 0) {
            pbStack_190 = (byte *)0x140b309a7;
            pub_1406abac0((byte *)in_stack_000003c0[0x29],in_stack_000003c0[0x28] * 0xc,4);
            if (*(char *)((longlong)in_stack_000003c0 + 0x1e1) == '\0') goto code_r0x000140b30a01;
          }
          if (in_stack_000003c0[0x2b] != 0) {
            pbStack_190 = (byte *)0x140b309d6;
            pub_1406abac0((byte *)in_stack_000003c0[0x2c],in_stack_000003c0[0x2b] * 0xc,4);
            if (*(char *)((longlong)in_stack_000003c0 + 0x1e1) == '\0') goto code_r0x000140b30a01;
          }
          if (in_stack_000003c0[0x2e] != 0) {
            pbStack_190 = (byte *)0x140b30a01;
            pub_1406abac0((byte *)in_stack_000003c0[0x2f],in_stack_000003c0[0x2e] << 3,4);
          }
        }
code_r0x000140b30a01:
        if ((*(char *)((longlong)in_stack_000003c0 + 0x1e2) != '\0') &&
           (in_stack_000003c0[0x31] != 0)) {
          pbStack_190 = (byte *)0x140b30a2c;
          pub_1406abac0((byte *)in_stack_000003c0[0x32],in_stack_000003c0[0x31] << 2,4);
        }
        if ((*(char *)((longlong)in_stack_000003c0 + 0x1e1) != '\0') &&
           (in_stack_000003c0[0x34] != 0)) {
          pbStack_190 = (byte *)0x140b30a57;
          pub_1406abac0((byte *)in_stack_000003c0[0x35],in_stack_000003c0[0x34] << 2,4);
        }
        *(char *)((longlong)in_stack_000003c0 + 0x1e1) = '\0';
        ((char *)((longlong)in_stack_000003c0 + 0x1e1))[0] = '\0';
        ((char *)((longlong)in_stack_000003c0 + 0x1e1))[1] = '\0';
        plVar30 = (longlong *)in_stack_000003c0[0x24];
        LOCK();
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          pbStack_190 = (byte *)0x140b30a80;
          pdb_141746810(in_stack_000003c0 + 0x24);
        }
        pbStack_190 = (byte *)0x140b30a94;
        pdb_14098a860(in_stack_000003c0 + 0x20);
        if (in_stack_000003c0[0x18] != 0) {
          pbStack_190 = (byte *)0x140b30abf;
          pub_1406abac0((byte *)in_stack_000003c0[0x19],in_stack_000003c0[0x18],1);
        }
        param_2 = (byte *)in_stack_000003c0[0x1c];
        bVar7 = true;
        bVar40 = true;
        pcVar38 = pcVar18;
      }
      if (0 < (longlong)param_2) {
        pbStack_190 = (byte *)0x140b30aec;
        pub_1406abac0((byte *)in_stack_000003c0[0x1d],(ulonglong)param_2,1);
        bVar40 = bVar7;
      }
      *(char *)(in_stack_000003c0 + 0x3c) = '\x01';
      pbStack_190 = (byte *)0x140b30b00;
      pdb_140b2ee30(in_stack_000003a8);
      if (!bVar40) {
        pbStack_190 = (byte *)0x140b30b1b;
        pdb_14007ee60();
        pbStack_190 = (byte *)0x140b30b2a;
        pbVar14 = pub_1406abab0(0x20,0x10);
        if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pbStack_190 = (byte *)0x140b30c1b;
          pdb_142dc7e11(0x10,0x20);
        }
        pbVar14[0] = 1;
        pbVar14[1] = 0;
        pbVar14[2] = 0;
        pbVar14[3] = 0;
        pbVar14[4] = 0;
        pbVar14[5] = 0;
        pbVar14[6] = 0;
        pbVar14[7] = 0;
        pbVar14[8] = 1;
        pbVar14[9] = 0;
        pbVar14[10] = 0;
        pbVar14[0xb] = 0;
        pbVar14[0xc] = 0;
        pbVar14[0xd] = 0;
        pbVar14[0xe] = 0;
        pbVar14[0xf] = 0;
        *(code **)(pbVar14 + 0x10) = pcVar38;
        *(code **)(pbVar14 + 0x18) = in_stack_000003b8;
        param_2 = &UNK_1430575b0;
        goto code_r0x000140b30b58;
      }
      pbStack_190 = (byte *)0x140b30b0e;
      pbVar14 = (byte *)pdb_142dc6590(pcVar17);
      uVar25 = 1;
      goto code_r0x000140b30b5a;
    }
    cVar11 = '\x04';
code_r0x000140b304b4:
    *(char *)(in_stack_000003c0 + 0x3c) = cVar11;
    param_1[0] = 2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    pbVar14 = (byte *)((longlong)&uRam0000000000000000 + 3);
    puVar24 = in_stack_000003c0;
code_r0x000140b30b6e:
    *(char *)(puVar24 + 0x48) = (char)pbVar14;
    pbVar14 = param_1;
code_r0x000140b30b77:
    return pbVar14;
  case 0x3f:
code_r0x000140b2fd8e:
    uVar13 = (ulonglong)(uVar12 | 0x2527bc9);
    goto code_r0x000140b2fd93;
  case 0x40:
code_r0x000140b314da:
    puStack_160 = (ulonglong *)CONCAT71(0x1430578,cRam000000064f1b5a88 + 't');
    uVar13 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)pbVar14 >> 0x10),
                                      CONCAT11((byte)((ulonglong)pbVar14 >> 8) ^ UNK_1430578c6,
                                               cVar11)) >> 8),cVar11) & 0xffffffffffffff70;
    pbStack_130 = &UNK_143057643;
    pbStack_138 = &UNK_1430575f0;
    puStack_150 = &UNK_14305763f;
    puStack_158 = &UNK_1430575d0;
    pbStack_140 = param_2;
    goto code_r0x000140b3152a;
  case 0x41:
code_r0x000140b31573:
    *pbVar14 = *pbVar14 + cVar11;
    (&UNK_143057801)[uVar13] = (&UNK_143057801)[uVar13] + 't';
    puStack_158 = &UNK_143057874;
    puStack_160 = (ulonglong *)aiStack_108;
    puStack_168 = (undefined *)0x4;
    pbStack_190 = &UNK_140b315b4;
    pbVar14 = (byte *)pdb_140f66e50(uVar12 | 0x2526123,&UNK_1430576c0,0xe,&UNK_1430576ce);
    return pbVar14;
  case 0x42:
code_r0x000140b31528:
    uVar13 = (ulonglong)pbVar14 & 0xffffffffffffff28;
code_r0x000140b3152a:
    pbStack_128 = (byte *)0xc;
    puStack_148 = (ulonglong *)0x4;
    puStack_168 = (undefined *)0x5;
    param_2 = &UNK_143057630;
code_r0x000140b3154c:
    param_4 = &UNK_14305763a;
    param_3 = (char *)0xa;
code_r0x000140b3155c:
    pbStack_190 = &UNK_140b31561;
    pbVar14 = (byte *)pdb_140f66ff0(uVar13,param_2,param_3,param_4);
    return pbVar14;
  case 0x43:
code_r0x000140b31541:
    uVar13 = (ulonglong)(uVar12 + 0x48000000);
    param_2 = (byte *)0x43057630;
    goto code_r0x000140b3154c;
  case 0x44:
code_r0x000140b314f3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x45:
code_r0x000140b315a8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x46:
code_r0x000140b315dd:
    pcVar18 = (code *)swi(1);
    pbVar14 = (byte *)(*pcVar18)();
    return pbVar14;
  case 0x47:
code_r0x000140b3155a:
    uVar13 = (ulonglong)pbVar14 & 0xffffffff;
    goto code_r0x000140b3155c;
  case 0x48:
code_r0x000140b315f6:
    (&UNK_1430577fd)[uVar13] = (&UNK_1430577fd)[uVar13] | 0x74;
    puStack_168 = &UNK_1430576a0;
    pbStack_190 = &UNK_140b31622;
    pbVar14 = (byte *)pdb_140f66090((ulonglong)pbVar14 & 0xffffffffffffff30,&UNK_14305771e,0x1a,
                                    &puStack_158);
    return pbVar14;
  case 0x49:
  case 0x4a:
code_r0x000143057874:
code_r0x000143057875:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4b:
  case 0x4d:
  case 0x4e:
    goto code_r0x000143057875;
  case 0x4c:
code_r0x000143059df5:
    uVar26 = SUB82(param_2,0);
    if (pbVar14 != (byte *)0x0) {
      pcVar20 = (char *)(ulonglong)*(uint *)(param_2 + 0x61);
      if (0xfffffffebcfa878b < uVar13) {
        out(*pcVar20,uVar26);
        pcVar20 = pcVar20 + 1;
        if ((longlong)pbVar14 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        *pbVar14 = *pbVar14 + cVar11;
      }
      pcVar21 = (char *)(ulonglong)(uVar12 + 0x143);
      *apcStack_188[0] = *apcStack_188[0] + cVar29;
      cVar11 = (char)(uVar12 + 0x143);
      *pcVar21 = *pcVar21 + cVar11;
      *pcVar21 = *pcVar21 + cVar11;
      *pcVar21 = *pcVar21 + cVar11;
      *pcVar20 = *pcVar20 + (char)param_2;
      *pcVar21 = *pcVar21 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*param_1,uVar26);
    param_1[0x62] = 0;
    if ((longlong)(int)((longlong)iStack_a4 * 0x2e77203a) == (longlong)iStack_a4 * 0x2e77203a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = in(uVar26);
    *(undefined4 *)param_3 = uVar5;
    bVar6 = bRam510000000140ad97;
    if ((char)((char)uRam0000000000000000 + -0x18) == '\0') {
      pbVar14 = (byte *)(ulonglong)bRam510000000140ad97;
      out(*(undefined4 *)(param_1 + 1),uVar26);
      *pbVar14 = *pbVar14 | bRam510000000140ad97;
      *pbVar14 = *pbVar14 + bVar6;
      *pbVar14 = *pbVar14 + bVar6;
      *pbVar14 = *pbVar14 + bVar6;
      *pbVar14 = *pbVar14 | bVar6;
      *pbVar14 = *pbVar14 + bVar6;
      *pbVar14 = *pbVar14 + bVar6;
      *pbVar14 = *pbVar14 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uRam0000000000000000 = CONCAT31(uRam0000000000000000._1_3_,(char)uRam0000000000000000 + -0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbStack_190 = (byte *)0x140b2f19e;
  pdb_14098a860(in_stack_fffffffffffffef0 + 0xa0);
  if (*(ulonglong *)(in_stack_fffffffffffffef0 + 0x60) != 0) {
    pbStack_190 = (byte *)0x140b2f1bb;
    pub_1406abac0(*(byte **)(in_stack_fffffffffffffef0 + 0x68),
                  *(ulonglong *)(in_stack_fffffffffffffef0 + 0x60),1);
  }
  param_2 = *(byte **)(in_stack_fffffffffffffef0 + 0x80);
  if ((SBORROW8(0,(longlong)param_2)) || (param_2 == (byte *)0x0)) {
    return (byte *)-(longlong)param_2;
  }
  puVar24 = *(ulonglong **)(in_stack_fffffffffffffef0 + 0x88);
  param_3 = (char *)((longlong)&uRam0000000000000000 + 1);
  ppbVar33 = &pbStack_130;
  pbStack_128 = pbStack_138;
  pbVar16 = pbStack_140;
code_r0x0001406abac0:
  *(byte **)((longlong)ppbVar33 + -8) = pbStack_128;
  *(byte **)((longlong)ppbVar33 + -0x10) = pbVar16;
  puVar36 = puVar24;
  if ((char *)0x10 < param_3) {
    puVar36 = (ulonglong *)puVar24[-1];
  }
  *(undefined **)((longlong)ppbVar33 + -0x40) = &UNK_140f3c37e;
  uVar25 = GetProcessHeap(puVar24,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar14 = (byte *)HeapFree(uVar25,0,puVar36);
  return pbVar14;
code_r0x000140b25377:
  pbVar16 = param_2 + 0x10;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)param_2;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 8);
  pbVar1 = param_2 + 0x48;
  param_2[0x48] = 0;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x14);
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x18);
  *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x1c);
  pbVar2 = param_2 + 0x41;
  param_2[0x41] = 0;
  pbVar3 = param_2 + 0x20;
  param_2[0x40] = 0;
  uVar25 = *(undefined8 *)(param_2 + 0x30);
  pbStack_190 = (byte *)0x140b253ea;
  pbStack_90 = pbVar1;
  pbStack_88 = pbVar16;
  pbStack_80 = pbVar3;
  pbStack_78 = pbVar2;
  pdb_140b78570(&uStack_c8,*(undefined8 *)(param_2 + 0x38));
  if (SBORROW8(0,(longlong)uStack_c8)) {
    plStack_e8 = (longlong *)0x1;
    pcStack_e0 = (code *)0x1;
    plStack_d8 = (longlong *)uStack_c0;
    pbStack_190 = (byte *)0x140b25414;
    pdb_14007ee60();
    pbStack_190 = (byte *)0x140b25423;
    pbVar14 = pub_1406abab0(0x18,8);
    if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pbStack_190 = (byte *)0x140b25721;
      pbStack_70 = pbVar16;
      pbStack_68 = pbVar3;
      pbStack_60 = pbVar2;
      pbStack_58 = pbVar1;
      pdb_142dc7e11(8,0x18);
    }
    *(longlong **)(pbVar14 + 0x10) = plStack_d8;
    *(longlong **)pbVar14 = plStack_e8;
    *(code **)(pbVar14 + 8) = pcStack_e0;
    pbStack_50[0x40] = 0;
    pbStack_50[0x41] = 1;
    pbStack_50[0x48] = 1;
    puVar39 = &UNK_143057468;
    plVar37 = (longlong *)0x22;
    plVar30 = (longlong *)&UNK_143056a98;
    goto code_r0x000140b256c6;
  }
  pbStack_50[0x40] = 0;
  puStack_160 = uStack_c8;
  puStack_148 = uStack_c8;
  puStack_158 = uStack_c0;
  puStack_150 = uStack_c0;
  pbVar14 = (byte *)&uStack_c8;
  pbStack_190 = (byte *)0x140b254b3;
  pbStack_140 = pbVar1;
  pbStack_138 = pbVar16;
  pbStack_130 = pbVar3;
  pbStack_128 = pbVar2;
  pcVar20 = (char *)pdb_141710e30(uVar25);
  pbStack_68 = pbVar3;
  pbStack_60 = pbVar2;
  pbStack_70 = pbVar16;
  pbStack_58 = pbVar1;
  pbVar16 = pbStack_50;
  param_2 = pbVar14;
code_r0x000140b254dd:
  *(char **)(pbVar16 + 0x20) = pcVar20;
  *(byte **)(pbVar16 + 0x28) = param_2;
  pbStack_190 = (byte *)0x140b25534;
  (**(code **)(pbVar14 + 0x18))(&uStack_c8,pcVar20,param_3);
  plVar37 = plStack_b8;
  if (uStack_c8 == (ulonglong *)((longlong)&uRam0000000000000000 + 2)) {
    *pbStack_60 = 3;
    *pbStack_58 = 3;
    param_1[0] = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    pbVar14 = (byte *)((longlong)&uRam0000000000000000 + 3);
    goto code_r0x000140b256df;
  }
  pbVar14 = (byte *)CONCAT44(uStack_ac,uStack_b0);
  plVar30 = (longlong *)CONCAT44(iStack_a4,uStack_a8);
  pbStack_f8 = *(byte **)(pbStack_50 + 0x20);
  puStack_f0 = *(undefined8 **)(pbStack_50 + 0x28);
  if ((code *)*puStack_f0 != (code *)0x0) {
    pbStack_190 = (byte *)0x140b2559d;
    (*(code *)*puStack_f0)(pbStack_f8);
  }
  if (puStack_f0[1] != 0) {
    pbStack_190 = (byte *)0x140b255b8;
    pub_1406abac0(pbStack_f8,puStack_f0[1],puStack_f0[2]);
  }
  pbStack_50[0x40] = 0;
  pbStack_50[0x41] = 1;
  if (((ulonglong)uStack_c8 & 1) == 0) {
    *pbStack_58 = 1;
    plVar37 = plVar30;
    plStack_98 = plVar30;
    if (plVar30[5] != 0) goto code_r0x000140b255f0;
code_r0x000140b25617:
    plVar30 = (longlong *)&UNK_143056a98;
    plStack_e8 = plStack_98 + 2;
    pcStack_e0 = pdb_140001020;
    pbStack_190 = (byte *)0x140b2563e;
    pdb_140f60760(&uStack_c8,&UNK_143056b08,&plStack_e8);
    plStack_d8 = plStack_b8;
    pbStack_190 = (byte *)0x140b2565a;
    plStack_b8 = (longlong *)pdb_140dbd3e0(0,&plStack_e8);
    uStack_c8 = (ulonglong *)0x1;
    uStack_c0 = (undefined *)0x1;
    pbStack_190 = (byte *)0x140b25674;
    pdb_14007ee60();
    pbStack_190 = (byte *)0x140b25683;
    pbVar14 = pub_1406abab0(0x18,8);
    if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pbStack_190 = (byte *)0x140b25736;
      pdb_142dc7e11(8,0x18);
    }
    *(longlong **)(pbVar14 + 0x10) = plStack_b8;
    *(undefined4 *)pbVar14 = (undefined4)uStack_c8;
    *(undefined4 *)(pbVar14 + 4) = uStack_c8._4_4_;
    *(undefined4 *)(pbVar14 + 8) = (undefined4)uStack_c0;
    *(undefined4 *)(pbVar14 + 0xc) = uStack_c0._4_4_;
    LOCK();
    *plStack_98 = *plStack_98 + -1;
    UNLOCK();
    plVar37 = (longlong *)0x22;
    puVar39 = &UNK_143057468;
    if (*plStack_98 == 0) {
      pbStack_190 = (byte *)0x140b256be;
      pdb_141746810(&plStack_98);
    }
  }
  else {
    *pbStack_58 = 1;
    puVar39 = uStack_c0;
    if (uStack_c0 == (undefined *)0x0) {
      plStack_98 = plVar37;
      if (plVar37[5] == 0) goto code_r0x000140b25617;
code_r0x000140b255f0:
      plVar30 = (longlong *)&UNK_143056a98;
      puVar39 = (undefined *)0x0;
    }
  }
code_r0x000140b256c6:
  *(undefined **)(param_1 + 8) = puVar39;
  *(longlong **)(param_1 + 0x10) = plVar37;
  *(byte **)(param_1 + 0x18) = pbVar14;
  *(longlong **)(param_1 + 0x20) = plVar30;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pbVar14 = (byte *)((longlong)&uRam0000000000000000 + 1);
code_r0x000140b256df:
  pbStack_50[0x50] = (byte)pbVar14;
  return pbVar14;
}

