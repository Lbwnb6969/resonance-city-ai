// VA 0x140915620, PDB extent 16036 bytes
// country_core::startup::startup_session::load_game_session
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_session::load_game_session
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_session.rs
   Extent: 16036 */

void pdb_140915620(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong arg1;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong lVar23;
  char cVar24;
  undefined4 uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined7 uVar33;
  ulonglong uVar29;
  longlong *plVar30;
  byte *pbVar31;
  undefined8 extraout_RAX;
  undefined8 uVar32;
  longlong lVar34;
  undefined1 *puVar35;
  ulonglong *puVar36;
  ulonglong uVar37;
  undefined *puVar38;
  byte *pbVar39;
  longlong lVar40;
  undefined8 uStack_48;
  
  uStack_48 = 0x140915636;
  lVar26 = pdb_142d7c6d0();
  lVar26 = -lVar26;
  *(undefined8 *)(&stack0x00001040 + lVar26) = 0xfffffffffffffffe;
  *(undefined8 *)(&stack0x00000c18 + lVar26) = param_2;
  plVar30 = *(longlong **)(*(longlong *)(&stack0x000010f0 + lVar26) + 8);
  if (plVar30 == (longlong *)0x0) {
    plVar30 = *(longlong **)(*(longlong *)(&stack0x000010f0 + lVar26) + 0x10);
  }
  puVar4 = *(undefined8 **)(&stack0x000010b0 + lVar26);
  lVar27 = plVar30[2];
  if ((ulonglong)(*plVar30 - lVar27) < 8) {
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917e02;
    pdb_142d7f1b0(plVar30,lVar27,8,1);
  }
  *(code **)(plVar30[1] + lVar27) = pdb_14160cbb0;
  plVar30[2] = lVar27 + 8;
  *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
  puVar4 = (undefined8 *)*puVar4;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409156ca;
  pub_142e32760(&stack0x00000818 + lVar26,puVar4,0xe8);
  *puVar4 = 0;
  puVar4[1] = 8;
  puVar4[2] = 0;
  puVar4[3] = 0x8000000000000000;
  puVar4[0x1b] = 0;
  *(undefined1 *)(puVar4 + 0x1c) = 0;
  uVar2 = (&stack0x000008f8)[lVar26];
  uVar32 = *(undefined8 *)(&stack0x000008f0 + lVar26);
  *(undefined8 *)(&stack0x00000f50 + lVar26) = 0;
  *(undefined8 *)(&stack0x00000f60 + lVar26) = 0;
  *(undefined8 *)(&stack0x00000f68 + lVar26) = 0;
  *(undefined8 *)(&stack0x00000f58 + lVar26) = 8;
  uVar5 = *param_1;
  uVar6 = *param_4;
  (&stack0x00001027)[lVar26] = 1;
  (&stack0x00001026)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915753;
  pdb_1409195f0(&stack0x00000b08 + lVar26,&stack0x00000818 + lVar26,uVar5,uVar6);
  *(undefined8 *)(&stack0x00000c80 + lVar26) = uVar32;
  (&stack0x00001017)[lVar26] = uVar2;
  if ((&stack0x00000b08)[lVar26] == '\x01') {
LAB_140915be1:
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915bfd;
    pub_142e32760(&stack0x00000ca0 + lVar26,&stack0x00000b20 + lVar26,0xa0);
    uVar28 = 0;
    if ((&stack0x00000b09)[lVar26] == '\0') {
      *(undefined4 *)(&stack0x00000a60 + lVar26) = *(undefined4 *)(&stack0x00000b0a + lVar26);
      *(undefined4 *)(&stack0x00000a64 + lVar26) = *(undefined4 *)(&stack0x00000b0e + lVar26);
      *(undefined4 *)(&stack0x00000a68 + lVar26) = *(undefined4 *)(&stack0x00000b12 + lVar26);
      *(undefined4 *)(&stack0x00000a6c + lVar26) = *(undefined4 *)(&stack0x00000b16 + lVar26);
      if (2 < *_DAT_143ca8e90) {
        *(undefined1 **)(&stack0x00000310 + lVar26) = &stack0x00000a60 + lVar26;
        *(code **)(&stack0x00000318 + lVar26) = pdb_14091b780;
        *(undefined8 *)(&stack0x000005a0 + lVar26) = 0;
        *(undefined **)(&stack0x000005a8 + lVar26) = &UNK_14301fa71;
        *(undefined8 *)(&stack0x000005b0 + lVar26) = 0x26;
        *(undefined8 *)(&stack0x000005b8 + lVar26) = 0;
        *(undefined **)(&stack0x000005c0 + lVar26) = &UNK_14301fa08;
        *(undefined8 *)(&stack0x000005c8 + lVar26) = 0x32;
        *(undefined8 *)(&stack0x000005d0 + lVar26) = 3;
        *(undefined **)(&stack0x000005d8 + lVar26) = &UNK_14301fa71;
        *(undefined8 *)(&stack0x000005e0 + lVar26) = 0x26;
        *(undefined8 *)(&stack0x000005e8 + lVar26) = 0x14f00000001;
        *(undefined **)(&stack0x000005f0 + lVar26) = &UNK_14301fadf;
        *(undefined1 **)(&stack0x000005f8 + lVar26) = &stack0x00000310 + lVar26;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915ddb;
        pdb_140f332f0(&stack0x0000103c + lVar26,&stack0x000005a0 + lVar26);
      }
      plVar30 = *(longlong **)(&stack0x000010e8 + lVar26);
      *(undefined4 *)plVar30[2] = *(undefined4 *)((longlong)plVar30 + 0x1c);
      lVar27 = *plVar30;
      lVar40 = *(longlong *)(lVar27 + 0x30);
      uVar32 = *(undefined8 *)(lVar27 + 0x40);
      if (lVar40 == *(longlong *)(lVar27 + 0x20)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915e06;
        pdb_142d7e8a0(lVar27 + 0x20);
      }
      uVar28 = *(ulonglong *)(lVar27 + 0x28);
      *(undefined8 *)(uVar28 + lVar40 * 8) = uVar32;
      *(longlong *)(lVar27 + 0x30) = lVar40 + 1;
      *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
    }
    else if ((&stack0x00000b09)[lVar26] != '\x02') {
      *(undefined4 *)(&stack0x00000a60 + lVar26) = *(undefined4 *)(&stack0x00000b0a + lVar26);
      *(undefined4 *)(&stack0x00000a64 + lVar26) = *(undefined4 *)(&stack0x00000b0e + lVar26);
      *(undefined4 *)(&stack0x00000a68 + lVar26) = *(undefined4 *)(&stack0x00000b12 + lVar26);
      *(undefined4 *)(&stack0x00000a6c + lVar26) = *(undefined4 *)(&stack0x00000b16 + lVar26);
      uVar28 = *_DAT_143ca8e90;
      if (2 < uVar28) {
        *(undefined1 **)(&stack0x00000310 + lVar26) = &stack0x00000a60 + lVar26;
        *(code **)(&stack0x00000318 + lVar26) = pdb_14091b780;
        *(undefined8 *)(&stack0x000005a0 + lVar26) = 0;
        *(undefined **)(&stack0x000005a8 + lVar26) = &UNK_14301fa71;
        *(undefined8 *)(&stack0x000005b0 + lVar26) = 0x26;
        *(undefined8 *)(&stack0x000005b8 + lVar26) = 0;
        *(undefined **)(&stack0x000005c0 + lVar26) = &UNK_14301fa08;
        *(undefined8 *)(&stack0x000005c8 + lVar26) = 0x32;
        *(undefined8 *)(&stack0x000005d0 + lVar26) = 3;
        *(undefined **)(&stack0x000005d8 + lVar26) = &UNK_14301fa71;
        *(undefined8 *)(&stack0x000005e0 + lVar26) = 0x26;
        *(undefined8 *)(&stack0x000005e8 + lVar26) = 0x15500000001;
        *(undefined **)(&stack0x000005f0 + lVar26) = &UNK_14301fb3e;
        *(undefined1 **)(&stack0x000005f8 + lVar26) = &stack0x00000310 + lVar26;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915cf5;
        uVar28 = pdb_140f332f0(&stack0x0000103c + lVar26,&stack0x000005a0 + lVar26);
      }
    }
    lVar27 = -0x8000000000000000;
    uVar33 = (undefined7)(uVar28 >> 8);
    *(int *)(&stack0x00000ff4 + lVar26) = (int)CONCAT71(uVar33,1);
    uVar25 = (undefined4)CONCAT71(uVar33,1);
    *(undefined8 *)(&stack0x00001018 + lVar26) = 0x8000000000000000;
    if (-1 < *(longlong *)(&stack0x00000830 + lVar26)) {
      *(undefined8 *)(&stack0x00001018 + lVar26) = *(undefined8 *)(&stack0x000008d0 + lVar26);
      *(undefined4 *)(&stack0x00000920 + lVar26) = *(undefined4 *)(&stack0x000008d8 + lVar26);
      *(undefined4 *)(&stack0x00000924 + lVar26) = *(undefined4 *)(&stack0x000008dc + lVar26);
      *(undefined4 *)(&stack0x00000928 + lVar26) = *(undefined4 *)(&stack0x000008e0 + lVar26);
      *(undefined4 *)(&stack0x0000092c + lVar26) = *(undefined4 *)(&stack0x000008e4 + lVar26);
      *(undefined8 *)(&stack0x00000930 + lVar26) = *(undefined8 *)(&stack0x000008e8 + lVar26);
      uVar25 = 0;
    }
    *(undefined4 *)(&stack0x00001004 + lVar26) = uVar25;
    lVar40 = *(longlong *)(&stack0x00000d38 + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915e8e;
    pub_142e32760(&stack0x000000a0 + lVar26,&stack0x00000ca0 + lVar26,0x98);
    *(undefined4 *)(&stack0x00000f10 + lVar26) = *(undefined4 *)(&stack0x00000920 + lVar26);
    *(undefined4 *)(&stack0x00000f14 + lVar26) = *(undefined4 *)(&stack0x00000924 + lVar26);
    *(undefined4 *)(&stack0x00000f18 + lVar26) = *(undefined4 *)(&stack0x00000928 + lVar26);
    *(undefined4 *)(&stack0x00000f1c + lVar26) = *(undefined4 *)(&stack0x0000092c + lVar26);
    *(undefined8 *)(&stack0x00000f20 + lVar26) = *(undefined8 *)(&stack0x00000930 + lVar26);
    uVar25 = (undefined4)
             CONCAT71((int7)((ulonglong)*(undefined8 *)(&stack0x00000930 + lVar26) >> 8),1);
  }
  else {
    *(undefined4 *)(&stack0x00000bf0 + lVar26) = *(undefined4 *)(&stack0x00000b0a + lVar26);
    *(undefined4 *)(&stack0x00000bf4 + lVar26) = *(undefined4 *)(&stack0x00000b0e + lVar26);
    *(undefined4 *)(&stack0x00000bf8 + lVar26) = *(undefined4 *)(&stack0x00000b12 + lVar26);
    *(undefined4 *)(&stack0x00000bfc + lVar26) = *(undefined4 *)(&stack0x00000b16 + lVar26);
    *(undefined4 *)(&stack0x00000ca0 + lVar26) = *(undefined4 *)(&stack0x00000b0a + lVar26);
    *(undefined4 *)(&stack0x00000ca4 + lVar26) = *(undefined4 *)(&stack0x00000b0e + lVar26);
    *(undefined4 *)(&stack0x00000ca8 + lVar26) = *(undefined4 *)(&stack0x00000b12 + lVar26);
    *(undefined4 *)(&stack0x00000cac + lVar26) = *(undefined4 *)(&stack0x00000b16 + lVar26);
    (&stack0x00001037)[lVar26] = 1;
    (&stack0x00001036)[lVar26] = 1;
    (&stack0x00001035)[lVar26] = 1;
    (&stack0x00001034)[lVar26] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409157ac;
    cVar24 = pdb_140a3b620(&stack0x00000ca0 + lVar26);
    if (cVar24 == '\0') {
      if ((&stack0x00000b08)[lVar26] == '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915b71;
        pdb_1404cc180(&stack0x00000b20 + lVar26);
      }
      *(undefined2 *)(&stack0x00000b08 + lVar26) = 0x101;
      *(undefined8 *)(&stack0x00000b0a + lVar26) = *(undefined8 *)(&stack0x00000bf0 + lVar26);
      *(undefined8 *)(&stack0x00000b12 + lVar26) = *(undefined8 *)(&stack0x00000bf8 + lVar26);
      *(undefined8 *)(&stack0x00000b20 + lVar26) = 0;
      *(undefined8 *)(&stack0x00000b28 + lVar26) = 1;
      *(undefined8 *)(&stack0x00000b30 + lVar26) = 0;
      *(undefined8 *)(&stack0x00000b38 + lVar26) = 0;
      *(undefined8 *)(&stack0x00000b40 + lVar26) = 8;
      *(undefined8 *)(&stack0x00000b48 + lVar26) = 0;
      *(undefined8 *)(&stack0x00000b50 + lVar26) = 0x8000000000000000;
      *(undefined8 *)(&stack0x00000b90 + lVar26) = 0x8000000000000000;
      (&stack0x00000bb8)[lVar26] = 0;
      goto LAB_140915be1;
    }
    if ((&stack0x00000b08)[lVar26] != '\0') goto LAB_140915be1;
    *(undefined4 *)(&stack0x00000c60 + lVar26) = *(undefined4 *)(&stack0x00000b0a + lVar26);
    *(undefined4 *)(&stack0x00000c64 + lVar26) = *(undefined4 *)(&stack0x00000b0e + lVar26);
    *(undefined4 *)(&stack0x00000c68 + lVar26) = *(undefined4 *)(&stack0x00000b12 + lVar26);
    *(undefined4 *)(&stack0x00000c6c + lVar26) = *(undefined4 *)(&stack0x00000b16 + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409157ee;
    pub_142e32760(&stack0x000005a0 + lVar26,&stack0x00000b20 + lVar26,0xa0);
    if ((&stack0x00000b09)[lVar26] != '\0') {
      *(undefined4 *)(&stack0x00000a60 + lVar26) = *(undefined4 *)(&stack0x00000b0a + lVar26);
      *(undefined4 *)(&stack0x00000a64 + lVar26) = *(undefined4 *)(&stack0x00000b0e + lVar26);
      *(undefined4 *)(&stack0x00000a68 + lVar26) = *(undefined4 *)(&stack0x00000b12 + lVar26);
      *(undefined4 *)(&stack0x00000a6c + lVar26) = *(undefined4 *)(&stack0x00000b16 + lVar26);
      (&stack0x0000103d)[lVar26] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915822;
      pdb_140a937d0(&stack0x00000ca0 + lVar26,&stack0x00000a60 + lVar26);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = 9;
      *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915854;
      pdb_140f3e9e0(&stack0x00000310 + lVar26,*(undefined8 *)(&stack0x00000ca8 + lVar26),
                    *(undefined8 *)(&stack0x00000cb0 + lVar26),&UNK_1430450d2);
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091586b;
      lVar27 = pdb_14191dfa0(&stack0x00000310 + lVar26,&stack0x000005a0 + lVar26);
      if (*(ulonglong *)(&stack0x00000ca0 + lVar26) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091588d;
        pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),
                      *(ulonglong *)(&stack0x00000ca0 + lVar26),1);
      }
      if (lVar27 != 0) {
        *(longlong *)(&stack0x00000a60 + lVar26) = lVar27;
        if (*_DAT_143ca8e90 != 0) {
          *(undefined1 **)(&stack0x00000310 + lVar26) = &stack0x00000a60 + lVar26;
          *(code **)(&stack0x00000318 + lVar26) = pdb_140f36c30;
          *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0;
          *(undefined **)(&stack0x00000ca8 + lVar26) = &UNK_14301fa71;
          *(undefined8 *)(&stack0x00000cb0 + lVar26) = 0x26;
          *(undefined8 *)(&stack0x00000cb8 + lVar26) = 0;
          *(undefined **)(&stack0x00000cc0 + lVar26) = &UNK_14301fa08;
          *(undefined8 *)(&stack0x00000cc8 + lVar26) = 0x32;
          *(undefined8 *)(&stack0x00000cd0 + lVar26) = 1;
          *(undefined **)(&stack0x00000cd8 + lVar26) = &UNK_14301fa71;
          *(undefined8 *)(&stack0x00000ce0 + lVar26) = 0x26;
          *(undefined8 *)(&stack0x00000ce8 + lVar26) = 0x12500000001;
          *(undefined **)(&stack0x00000cf0 + lVar26) = &UNK_14301fa3b;
          *(undefined1 **)(&stack0x00000cf8 + lVar26) = &stack0x00000310 + lVar26;
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915963;
          pdb_140f332f0(&stack0x0000103c + lVar26,&stack0x00000ca0 + lVar26);
        }
        (&stack0x0000103d)[lVar26] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915977;
        pdb_140f36c40(&stack0x00000a60 + lVar26);
      }
    }
    if (*(longlong *)(&stack0x00000830 + lVar26) == -0x7ffffffffffffffd) {
      *(undefined4 *)(&stack0x00000330 + lVar26) = *(undefined4 *)(&stack0x00000858 + lVar26);
      *(undefined4 *)(&stack0x00000334 + lVar26) = *(undefined4 *)(&stack0x0000085c + lVar26);
      *(undefined4 *)(&stack0x00000338 + lVar26) = *(undefined4 *)(&stack0x00000860 + lVar26);
      *(undefined4 *)(&stack0x0000033c + lVar26) = *(undefined4 *)(&stack0x00000864 + lVar26);
      *(undefined4 *)(&stack0x00000320 + lVar26) = *(undefined4 *)(&stack0x00000848 + lVar26);
      *(undefined4 *)(&stack0x00000324 + lVar26) = *(undefined4 *)(&stack0x0000084c + lVar26);
      *(undefined4 *)(&stack0x00000328 + lVar26) = *(undefined4 *)(&stack0x00000850 + lVar26);
      *(undefined4 *)(&stack0x0000032c + lVar26) = *(undefined4 *)(&stack0x00000854 + lVar26);
      *(undefined4 *)(&stack0x00000310 + lVar26) = *(undefined4 *)(&stack0x00000838 + lVar26);
      *(undefined4 *)(&stack0x00000314 + lVar26) = *(undefined4 *)(&stack0x0000083c + lVar26);
      *(undefined4 *)(&stack0x00000318 + lVar26) = *(undefined4 *)(&stack0x00000840 + lVar26);
      *(undefined4 *)(&stack0x0000031c + lVar26) = *(undefined4 *)(&stack0x00000844 + lVar26);
      if (2 < *_DAT_143ca8e90) {
        *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0;
        *(undefined **)(&stack0x00000ca8 + lVar26) = &UNK_14301fa71;
        *(undefined8 *)(&stack0x00000cb0 + lVar26) = 0x26;
        *(undefined8 *)(&stack0x00000cb8 + lVar26) = 0;
        *(undefined **)(&stack0x00000cc0 + lVar26) = &UNK_14301fa08;
        *(undefined8 *)(&stack0x00000cc8 + lVar26) = 0x32;
        *(undefined8 *)(&stack0x00000cd0 + lVar26) = 3;
        *(undefined **)(&stack0x00000cd8 + lVar26) = &UNK_14301fa71;
        *(undefined8 *)(&stack0x00000ce0 + lVar26) = 0x26;
        *(undefined8 *)(&stack0x00000ce8 + lVar26) = 0x12a00000001;
        *(undefined **)(&stack0x00000cf0 + lVar26) = &UNK_14301fa97;
        *(undefined8 *)(&stack0x00000cf8 + lVar26) = 0x43;
        (&stack0x00001013)[lVar26] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915a76;
        pdb_140f332f0(&stack0x0000103c + lVar26,&stack0x00000ca0 + lVar26);
      }
      *(undefined4 *)(&stack0x00000cc0 + lVar26) = *(undefined4 *)(&stack0x00000330 + lVar26);
      *(undefined4 *)(&stack0x00000cc4 + lVar26) = *(undefined4 *)(&stack0x00000334 + lVar26);
      *(undefined4 *)(&stack0x00000cc8 + lVar26) = *(undefined4 *)(&stack0x00000338 + lVar26);
      *(undefined4 *)(&stack0x00000ccc + lVar26) = *(undefined4 *)(&stack0x0000033c + lVar26);
      *(undefined4 *)(&stack0x00000cb0 + lVar26) = *(undefined4 *)(&stack0x00000320 + lVar26);
      *(undefined4 *)(&stack0x00000cb4 + lVar26) = *(undefined4 *)(&stack0x00000324 + lVar26);
      *(undefined4 *)(&stack0x00000cb8 + lVar26) = *(undefined4 *)(&stack0x00000328 + lVar26);
      *(undefined4 *)(&stack0x00000cbc + lVar26) = *(undefined4 *)(&stack0x0000032c + lVar26);
      *(undefined4 *)(&stack0x00000ca0 + lVar26) = *(undefined4 *)(&stack0x00000310 + lVar26);
      *(undefined4 *)(&stack0x00000ca4 + lVar26) = *(undefined4 *)(&stack0x00000314 + lVar26);
      *(undefined4 *)(&stack0x00000ca8 + lVar26) = *(undefined4 *)(&stack0x00000318 + lVar26);
      *(undefined4 *)(&stack0x00000cac + lVar26) = *(undefined4 *)(&stack0x0000031c + lVar26);
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915ab4;
      pdb_140a937d0(&stack0x00000a60 + lVar26,&stack0x00000c60 + lVar26);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = 9;
      *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000a68 + lVar26);
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915ae6;
      pdb_140f3e9e0(&stack0x00000fc0 + lVar26,*(undefined8 *)(&stack0x00000a68 + lVar26),
                    *(undefined8 *)(&stack0x00000a70 + lVar26),&UNK_143045194);
      if (*(ulonglong *)(&stack0x00000a60 + lVar26) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915b05;
        pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),
                      *(ulonglong *)(&stack0x00000a60 + lVar26),1);
      }
      lVar40 = *(longlong *)(&stack0x00000ca0 + lVar26);
      *(undefined8 *)(&stack0x00001018 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
      *(undefined8 *)(&stack0x00000bd0 + lVar26) = *(undefined8 *)(&stack0x00000320 + lVar26);
      *(undefined8 *)(&stack0x00000bd8 + lVar26) = *(undefined8 *)(&stack0x00000328 + lVar26);
      *(undefined8 *)(&stack0x00000be0 + lVar26) = *(undefined8 *)(&stack0x00000330 + lVar26);
      *(undefined8 *)(&stack0x00000be8 + lVar26) = *(undefined8 *)(&stack0x00000338 + lVar26);
      *(undefined4 *)(&stack0x00000580 + lVar26) = *(undefined4 *)(&stack0x00000fc0 + lVar26);
      *(undefined4 *)(&stack0x00000584 + lVar26) = *(undefined4 *)(&stack0x00000fc4 + lVar26);
      *(undefined4 *)(&stack0x00000588 + lVar26) = *(undefined4 *)(&stack0x00000fc8 + lVar26);
      *(undefined4 *)(&stack0x0000058c + lVar26) = *(undefined4 *)(&stack0x00000fcc + lVar26);
      *(undefined8 *)(&stack0x00000590 + lVar26) = *(undefined8 *)(&stack0x00000fd0 + lVar26);
      *(undefined8 *)(&stack0x00000598 + lVar26) = *(undefined8 *)(&stack0x00000fd8 + lVar26);
      *(undefined4 *)(&stack0x00000ff4 + lVar26) = 0;
    }
    else {
      if (2 < *_DAT_143ca8e90) {
        *(undefined1 **)(&stack0x00000310 + lVar26) = &stack0x00000c60 + lVar26;
        *(code **)(&stack0x00000318 + lVar26) = pdb_14091b780;
        *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0;
        *(undefined **)(&stack0x00000ca8 + lVar26) = &UNK_14301fa71;
        *(undefined8 *)(&stack0x00000cb0 + lVar26) = 0x26;
        *(undefined8 *)(&stack0x00000cb8 + lVar26) = 0;
        *(undefined **)(&stack0x00000cc0 + lVar26) = &UNK_14301fa08;
        *(undefined8 *)(&stack0x00000cc8 + lVar26) = 0x32;
        *(undefined8 *)(&stack0x00000cd0 + lVar26) = 3;
        *(undefined **)(&stack0x00000cd8 + lVar26) = &UNK_14301fa71;
        *(undefined8 *)(&stack0x00000ce0 + lVar26) = 0x26;
        *(undefined8 *)(&stack0x00000ce8 + lVar26) = 0x13200000001;
        *(undefined **)(&stack0x00000cf0 + lVar26) = &UNK_14301fab8;
        *(undefined1 **)(&stack0x00000cf8 + lVar26) = &stack0x00000310 + lVar26;
        (&stack0x0000103d)[lVar26] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917af2;
        pdb_140f332f0(&stack0x0000103c + lVar26,&stack0x00000ca0 + lVar26);
      }
      plVar30 = *(longlong **)(&stack0x000010e0 + lVar26);
      *(undefined4 *)plVar30[2] = *(undefined4 *)((longlong)plVar30 + 0x1c);
      lVar27 = *plVar30;
      lVar40 = *(longlong *)(lVar27 + 0x30);
      uVar32 = *(undefined8 *)(lVar27 + 0x40);
      if (lVar40 == *(longlong *)(lVar27 + 0x20)) {
        (&stack0x0000103d)[lVar26] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917b24;
        pdb_142d7e8a0(lVar27 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar27 + 0x28) + lVar40 * 8) = uVar32;
      *(longlong *)(lVar27 + 0x30) = lVar40 + 1;
      *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
      *(undefined8 *)(&stack0x00000ca8 + lVar26) = 0;
      *(undefined8 *)(&stack0x00000cb0 + lVar26) = 1;
      *(undefined8 *)(&stack0x00000cb8 + lVar26) = 0;
      *(undefined8 *)(&stack0x00000cc0 + lVar26) = 0;
      *(undefined8 *)(&stack0x00000cc8 + lVar26) = 8;
      *(undefined8 *)(&stack0x00000cd0 + lVar26) = 0;
      *(undefined8 *)(&stack0x00000cd8 + lVar26) = 0x8000000000000000;
      *(undefined8 *)(&stack0x00000d18 + lVar26) = 0x8000000000000000;
      (&stack0x00000d40)[lVar26] = 0;
      *(undefined8 *)(&stack0x00000d48 + lVar26) = 0x8000000000000000;
      *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0x8000000000000000;
      uVar28 = *(ulonglong *)(&stack0x00000f50 + lVar26);
      uVar29 = *(ulonglong *)(&stack0x00000f68 + lVar26);
      if (uVar29 == uVar28) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917bba;
        pdb_140929470(&stack0x00000f50 + lVar26);
        uVar28 = *(ulonglong *)(&stack0x00000f50 + lVar26);
        uVar29 = *(ulonglong *)(&stack0x00000f68 + lVar26);
      }
      *(ulonglong *)(&stack0x00000f68 + lVar26) = uVar29 + 1;
      uVar37 = 0;
      if (uVar28 <= uVar29 + *(longlong *)(&stack0x00000f60 + lVar26)) {
        uVar37 = uVar28;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917c07;
      pub_142e32760(((uVar29 + *(longlong *)(&stack0x00000f60 + lVar26)) - uVar37) * 0x128 +
                    *(longlong *)(&stack0x00000f58 + lVar26),&stack0x00000ca0 + lVar26,0x128);
      (&stack0x0000103d)[lVar26] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917c21;
      pdb_140a937d0(&stack0x00000ca0 + lVar26,&stack0x00000c60 + lVar26);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = 0xc;
      *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917c53;
      uVar32 = pdb_140f3e9e0(&stack0x00000310 + lVar26,*(undefined8 *)(&stack0x00000ca8 + lVar26),
                             *(undefined8 *)(&stack0x00000cb0 + lVar26),&UNK_14301fad3);
      *(undefined8 *)(&stack0x00000be0 + lVar26) = *(undefined8 *)(&stack0x00000320 + lVar26);
      *(undefined8 *)(&stack0x00000be8 + lVar26) = *(undefined8 *)(&stack0x00000328 + lVar26);
      *(undefined4 *)(&stack0x00000bd0 + lVar26) = *(undefined4 *)(&stack0x00000310 + lVar26);
      *(undefined4 *)(&stack0x00000bd4 + lVar26) = *(undefined4 *)(&stack0x00000314 + lVar26);
      *(undefined4 *)(&stack0x00000bd8 + lVar26) = *(undefined4 *)(&stack0x00000318 + lVar26);
      *(undefined4 *)(&stack0x00000bdc + lVar26) = *(undefined4 *)(&stack0x0000031c + lVar26);
      if (*(ulonglong *)(&stack0x00000ca0 + lVar26) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917c8e;
        pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),
                      *(ulonglong *)(&stack0x00000ca0 + lVar26),1);
        uVar32 = extraout_RAX;
      }
      *(int *)(&stack0x00000ff4 + lVar26) = (int)CONCAT71((int7)((ulonglong)uVar32 >> 8),1);
      *(undefined8 *)(&stack0x00001018 + lVar26) = 0;
      lVar40 = -0x8000000000000000;
    }
    lVar27 = *(longlong *)(&stack0x000005a0 + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917cc8;
    uVar32 = pub_142e32760(&stack0x000000a0 + lVar26,&stack0x000005a8 + lVar26,0x98);
    *(undefined8 *)(&stack0x00000f10 + lVar26) = *(undefined8 *)(&stack0x00000bd0 + lVar26);
    *(undefined8 *)(&stack0x00000f18 + lVar26) = *(undefined8 *)(&stack0x00000bd8 + lVar26);
    *(undefined8 *)(&stack0x00000f20 + lVar26) = *(undefined8 *)(&stack0x00000be0 + lVar26);
    *(undefined8 *)(&stack0x00000f28 + lVar26) = *(undefined8 *)(&stack0x00000be8 + lVar26);
    *(undefined8 *)(&stack0x00000f90 + lVar26) = *(undefined8 *)(&stack0x00000580 + lVar26);
    *(undefined8 *)(&stack0x00000f98 + lVar26) = *(undefined8 *)(&stack0x00000588 + lVar26);
    *(undefined8 *)(&stack0x00000fa0 + lVar26) = *(undefined8 *)(&stack0x00000590 + lVar26);
    *(undefined8 *)(&stack0x00000fa8 + lVar26) = *(undefined8 *)(&stack0x00000598 + lVar26);
    *(undefined4 *)(&stack0x00000c20 + lVar26) = *(undefined4 *)(&stack0x00000c60 + lVar26);
    *(undefined4 *)(&stack0x00000c24 + lVar26) = *(undefined4 *)(&stack0x00000c64 + lVar26);
    *(undefined4 *)(&stack0x00000c28 + lVar26) = *(undefined4 *)(&stack0x00000c68 + lVar26);
    *(undefined4 *)(&stack0x00000c2c + lVar26) = *(undefined4 *)(&stack0x00000c6c + lVar26);
    *(int *)(&stack0x00001004 + lVar26) = (int)CONCAT71((int7)((ulonglong)uVar32 >> 8),1);
    uVar25 = 0;
  }
  plVar30 = *(longlong **)(&stack0x000010d8 + lVar26);
  *(undefined4 *)(&stack0x00000fbc + lVar26) = uVar25;
  (&stack0x00001016)[lVar26] = (byte)uVar25 ^ 1;
  *(longlong *)(&stack0x00000938 + lVar26) = lVar27;
  puVar11 = &stack0x000000a0 + lVar26;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140915ee1;
  pub_142e32760(&stack0x00000940 + lVar26,puVar11,0x98);
  *(longlong *)(&stack0x000009d8 + lVar26) = lVar40;
  *(undefined8 *)(&stack0x000009e0 + lVar26) = *(undefined8 *)(&stack0x00001018 + lVar26);
  *(undefined1 **)(&stack0x00000c88 + lVar26) = &stack0x000009e8 + lVar26;
  *(undefined8 *)(&stack0x000009e8 + lVar26) = *(undefined8 *)(&stack0x00000f10 + lVar26);
  *(undefined8 *)(&stack0x000009f0 + lVar26) = *(undefined8 *)(&stack0x00000f18 + lVar26);
  *(undefined8 *)(&stack0x000009f8 + lVar26) = *(undefined8 *)(&stack0x00000f20 + lVar26);
  *(undefined8 *)(&stack0x00000a00 + lVar26) = *(undefined8 *)(&stack0x00000f28 + lVar26);
  *(undefined8 *)(&stack0x00000a08 + lVar26) = *(undefined8 *)(&stack0x00000f90 + lVar26);
  *(undefined8 *)(&stack0x00000a10 + lVar26) = *(undefined8 *)(&stack0x00000f98 + lVar26);
  *(undefined8 *)(&stack0x00000a18 + lVar26) = *(undefined8 *)(&stack0x00000fa0 + lVar26);
  *(undefined8 *)(&stack0x00000a20 + lVar26) = *(undefined8 *)(&stack0x00000fa8 + lVar26);
  *(undefined8 *)(&stack0x00000a28 + lVar26) = 0x8000000000000000;
  *(undefined8 *)(&stack0x00000a48 + lVar26) = *(undefined8 *)(&stack0x00000c20 + lVar26);
  *(undefined8 *)(&stack0x00000a50 + lVar26) = *(undefined8 *)(&stack0x00000c28 + lVar26);
  *(undefined2 *)(&stack0x00000a58 + lVar26) = 0;
  *(undefined8 *)(&stack0x00000f80 + lVar26) = *(undefined8 *)(&stack0x00000828 + lVar26);
  *(undefined4 *)(&stack0x00000f70 + lVar26) = *(undefined4 *)(&stack0x00000818 + lVar26);
  *(undefined4 *)(&stack0x00000f74 + lVar26) = *(undefined4 *)(&stack0x0000081c + lVar26);
  *(undefined4 *)(&stack0x00000f78 + lVar26) = *(undefined4 *)(&stack0x00000820 + lVar26);
  *(undefined4 *)(&stack0x00000f7c + lVar26) = *(undefined4 *)(&stack0x00000824 + lVar26);
  *(undefined8 *)(&stack0x00000818 + lVar26) = 0;
  *(undefined8 *)(&stack0x00000820 + lVar26) = 8;
  *(undefined8 *)(&stack0x00000828 + lVar26) = 0;
  *(undefined8 *)(&stack0x00000c78 + lVar26) = *param_3;
  *(undefined4 *)(&stack0x00000f34 + lVar26) = *(undefined4 *)((longlong)plVar30 + 0x1c);
  lVar34 = *plVar30;
  *(longlong *)(&stack0x00000c08 + lVar26) = plVar30[2];
  *(longlong *)(&stack0x00000c70 + lVar26) = lVar34;
  *(longlong *)(&stack0x00000c10 + lVar26) = lVar34 + 0x20;
  uVar29 = 0;
  uVar28 = 0;
LAB_140916011:
  *(undefined8 *)(&stack0x00000938 + lVar26) = 0x8000000000000001;
  if (!SBORROW8(0,lVar27)) {
    *(ulonglong *)(&stack0x00000fe8 + lVar26) = uVar29;
    if (lVar27 == -0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917eb5;
      pdb_142dc83d0(&UNK_14301fe38,99,&UNK_14301fe70);
    }
    *(longlong *)(&stack0x000005a0 + lVar26) = lVar27;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091605a;
    pub_142e32760(&stack0x000005a8 + lVar26,&stack0x00000940 + lVar26,0x98);
    *(undefined8 *)(&stack0x00000c50 + lVar26) = *(undefined8 *)(&stack0x00000a48 + lVar26);
    *(undefined8 *)(&stack0x00000c58 + lVar26) = *(undefined8 *)(&stack0x00000a50 + lVar26);
    *(undefined8 *)(&stack0x00000ff8 + lVar26) = *(undefined8 *)(&stack0x00000a28 + lVar26);
    *(undefined8 *)(&stack0x00000fe0 + lVar26) = *(undefined8 *)(&stack0x00000a30 + lVar26);
    *(undefined8 *)(&stack0x00000f10 + lVar26) = *(undefined8 *)(&stack0x00000a38 + lVar26);
    *(undefined8 *)(&stack0x00000f18 + lVar26) = *(undefined8 *)(&stack0x00000a40 + lVar26);
    if (SBORROW8(0,lVar40)) {
      *(undefined4 *)(&stack0x00000910 + lVar26) = *(undefined4 *)(&stack0x000009f8 + lVar26);
      *(undefined4 *)(&stack0x00000914 + lVar26) = *(undefined4 *)(&stack0x000009fc + lVar26);
      *(undefined4 *)(&stack0x00000918 + lVar26) = *(undefined4 *)(&stack0x00000a00 + lVar26);
      *(undefined4 *)(&stack0x0000091c + lVar26) = *(undefined4 *)(&stack0x00000a04 + lVar26);
      *(undefined4 *)(&stack0x00000900 + lVar26) = *(undefined4 *)(&stack0x000009e8 + lVar26);
      *(undefined4 *)(&stack0x00000904 + lVar26) = *(undefined4 *)(&stack0x000009ec + lVar26);
      *(undefined4 *)(&stack0x00000908 + lVar26) = *(undefined4 *)(&stack0x000009f0 + lVar26);
      *(undefined4 *)(&stack0x0000090c + lVar26) = *(undefined4 *)(&stack0x000009f4 + lVar26);
      if (((&stack0x00001018)[lVar26] & 1) == 0) {
        *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x000009e8 + lVar26);
        puVar35 = &stack0x00000ca0 + lVar26;
        *(undefined8 *)(&stack0x00001018 + lVar26) = *(undefined8 *)(&stack0x000009f0 + lVar26);
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409160f9;
        pdb_140f4f620(puVar35,*(undefined8 *)(&stack0x000009f0 + lVar26),
                      *(undefined8 *)(&stack0x000009f8 + lVar26));
        if (*(int *)(&stack0x00000ca0 + lVar26) == 2) {
          *(undefined8 *)(&stack0x000000a8 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
          *(undefined8 *)(&stack0x000000a0 + lVar26) = 2;
        }
        else {
          *(undefined8 *)(&stack0x000000a0 + lVar26) = *(undefined8 *)(&stack0x00000ca0 + lVar26);
          *(undefined8 *)(&stack0x000000a8 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
          *(undefined8 *)(&stack0x000000f0 + lVar26) = *(undefined8 *)(&stack0x00000cf0 + lVar26);
          *(undefined4 *)(&stack0x000000e0 + lVar26) = *(undefined4 *)(&stack0x00000ce0 + lVar26);
          *(undefined4 *)(&stack0x000000e4 + lVar26) = *(undefined4 *)(&stack0x00000ce4 + lVar26);
          *(undefined4 *)(&stack0x000000e8 + lVar26) = *(undefined4 *)(&stack0x00000ce8 + lVar26);
          *(undefined4 *)(&stack0x000000ec + lVar26) = *(undefined4 *)(&stack0x00000cec + lVar26);
          *(undefined8 *)(&stack0x000000d0 + lVar26) = *(undefined8 *)(&stack0x00000cd0 + lVar26);
          *(undefined8 *)(&stack0x000000d8 + lVar26) = *(undefined8 *)(&stack0x00000cd8 + lVar26);
          *(undefined8 *)(&stack0x000000c0 + lVar26) = *(undefined8 *)(&stack0x00000cc0 + lVar26);
          *(undefined8 *)(&stack0x000000c8 + lVar26) = *(undefined8 *)(&stack0x00000cc8 + lVar26);
          *(undefined8 *)(&stack0x000000b0 + lVar26) = *(undefined8 *)(&stack0x00000cb0 + lVar26);
          *(undefined8 *)(&stack0x000000b8 + lVar26) = *(undefined8 *)(&stack0x00000cb8 + lVar26);
          if (*(longlong *)(&stack0x000000a0 + lVar26) != 2) {
            *(undefined1 **)(&stack0x00000c88 + lVar26) = &stack0x00000900 + lVar26;
            goto LAB_14091718f;
          }
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916562;
        pdb_1404b38e0(&stack0x000000a8 + lVar26);
        *(undefined4 *)(&stack0x00000a60 + lVar26) = *(undefined4 *)(&stack0x00000900 + lVar26);
        *(undefined4 *)(&stack0x00000a64 + lVar26) = *(undefined4 *)(&stack0x00000904 + lVar26);
        *(undefined4 *)(&stack0x00000a68 + lVar26) = *(undefined4 *)(&stack0x00000908 + lVar26);
        *(undefined4 *)(&stack0x00000a6c + lVar26) = *(undefined4 *)(&stack0x0000090c + lVar26);
        *(undefined4 *)(&stack0x00000a70 + lVar26) = *(undefined4 *)(&stack0x00000910 + lVar26);
        *(undefined4 *)(&stack0x00000a74 + lVar26) = *(undefined4 *)(&stack0x00000914 + lVar26);
        *(undefined4 *)(&stack0x00000a78 + lVar26) = *(undefined4 *)(&stack0x00000918 + lVar26);
        *(undefined4 *)(&stack0x00000a7c + lVar26) = *(undefined4 *)(&stack0x0000091c + lVar26);
        *(undefined4 *)(&stack0x000000b0 + lVar26) = *(undefined4 *)(&stack0x00000910 + lVar26);
        *(undefined4 *)(&stack0x000000b4 + lVar26) = *(undefined4 *)(&stack0x00000914 + lVar26);
        *(undefined4 *)(&stack0x000000b8 + lVar26) = *(undefined4 *)(&stack0x00000918 + lVar26);
        *(undefined4 *)(&stack0x000000bc + lVar26) = *(undefined4 *)(&stack0x0000091c + lVar26);
        *(undefined4 *)(&stack0x000000a0 + lVar26) = *(undefined4 *)(&stack0x00000900 + lVar26);
        *(undefined4 *)(&stack0x000000a4 + lVar26) = *(undefined4 *)(&stack0x00000904 + lVar26);
        *(undefined4 *)(&stack0x000000a8 + lVar26) = *(undefined4 *)(&stack0x00000908 + lVar26);
        *(undefined4 *)(&stack0x000000ac + lVar26) = *(undefined4 *)(&stack0x0000090c + lVar26);
        if (*_DAT_143ca8e90 != 0) {
          *(undefined1 **)(&stack0x00000fc0 + lVar26) = puVar11;
          *(code **)(&stack0x00000fc8 + lVar26) = pdb_140f58250;
          *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0;
          *(undefined **)(&stack0x00000ca8 + lVar26) = &UNK_14301fa71;
          *(undefined8 *)(&stack0x00000cb0 + lVar26) = 0x26;
          *(undefined8 *)(&stack0x00000cb8 + lVar26) = 0;
          *(undefined **)(&stack0x00000cc0 + lVar26) = &UNK_14301fa08;
          *(undefined8 *)(&stack0x00000cc8 + lVar26) = 0x32;
          *(undefined8 *)(&stack0x00000cd0 + lVar26) = 1;
          *(undefined **)(&stack0x00000cd8 + lVar26) = &UNK_14301fa71;
          *(undefined8 *)(&stack0x00000ce0 + lVar26) = 0x26;
          *(undefined8 *)(&stack0x00000ce8 + lVar26) = 0x17a00000001;
          *(undefined **)(&stack0x00000cf0 + lVar26) = &UNK_14301fb93;
          *(undefined1 **)(&stack0x00000cf8 + lVar26) = &stack0x00000fc0 + lVar26;
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916642;
          pdb_140f332f0(&stack0x0000103c + lVar26,puVar35);
        }
        *(undefined4 *)(&stack0x00000ca0 + lVar26) = *(undefined4 *)(&stack0x00000c50 + lVar26);
        *(undefined4 *)(&stack0x00000ca4 + lVar26) = *(undefined4 *)(&stack0x00000c54 + lVar26);
        *(undefined4 *)(&stack0x00000ca8 + lVar26) = *(undefined4 *)(&stack0x00000c58 + lVar26);
        *(undefined4 *)(&stack0x00000cac + lVar26) = *(undefined4 *)(&stack0x00000c5c + lVar26);
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916659;
        pdb_140b7f050(puVar35);
        uVar32 = 0x8000000000000001;
        if (*(longlong *)(&stack0x00000f68 + lVar26) != 0) {
          lVar27 = *(longlong *)(&stack0x00000f60 + lVar26);
          uVar28 = 0;
          if (*(ulonglong *)(&stack0x00000f50 + lVar26) <= lVar27 + 1U) {
            uVar28 = *(ulonglong *)(&stack0x00000f50 + lVar26);
          }
          *(ulonglong *)(&stack0x00000f60 + lVar26) = (lVar27 - uVar28) + 1;
          *(longlong *)(&stack0x00000f68 + lVar26) = *(longlong *)(&stack0x00000f68 + lVar26) + -1;
          uVar32 = *(undefined8 *)(*(longlong *)(&stack0x00000f58 + lVar26) + lVar27 * 0x128);
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409166d0;
          pub_142e32760(puVar35,*(longlong *)(&stack0x00000f58 + lVar26) + lVar27 * 0x128 + 8,0x120)
          ;
        }
        *(undefined8 *)(&stack0x00001028 + lVar26) = uVar32;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409166e4;
        pdb_14091af10(&stack0x00000938 + lVar26);
        *(undefined8 *)(&stack0x00000938 + lVar26) = *(undefined8 *)(&stack0x00001028 + lVar26);
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916708;
        pub_142e32760(&stack0x00000940 + lVar26,puVar35,0x120);
        if (*(ulonglong *)(&stack0x000000a0 + lVar26) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916720;
          pub_1406abac0(*(byte **)(&stack0x000000a8 + lVar26),
                        *(ulonglong *)(&stack0x000000a0 + lVar26),1);
        }
        if ((*(ulonglong *)(&stack0x00000ff8 + lVar26) & 0x7fffffffffffffff) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916746;
          pub_1406abac0(*(byte **)(&stack0x00000fe0 + lVar26),
                        *(ulonglong *)(&stack0x00000ff8 + lVar26),1);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091674f;
        pdb_1404cc180(&stack0x000005a0 + lVar26);
        lVar40 = *(longlong *)(&stack0x000009d8 + lVar26);
        *(undefined8 *)(&stack0x00001018 + lVar26) = *(undefined8 *)(&stack0x000009e0 + lVar26);
        uVar28 = (ulonglong)(byte)(&stack0x00000a58)[lVar26];
        uVar29 = (ulonglong)(byte)(&stack0x00000a59)[lVar26];
        goto LAB_140916000;
      }
LAB_14091718f:
      puVar8 = *(undefined4 **)(&stack0x00000c88 + lVar26);
      uVar25 = puVar8[1];
      uVar12 = puVar8[2];
      uVar13 = puVar8[3];
      uVar14 = puVar8[4];
      uVar15 = puVar8[5];
      uVar16 = puVar8[6];
      uVar17 = puVar8[7];
      *(undefined4 *)(&stack0x00000318 + lVar26) = *puVar8;
      *(undefined4 *)(&stack0x0000031c + lVar26) = uVar25;
      *(undefined4 *)(&stack0x00000320 + lVar26) = uVar12;
      *(undefined4 *)(&stack0x00000324 + lVar26) = uVar13;
      *(undefined4 *)(&stack0x00000328 + lVar26) = uVar14;
      *(undefined4 *)(&stack0x0000032c + lVar26) = uVar15;
      *(undefined4 *)(&stack0x00000330 + lVar26) = uVar16;
      *(undefined4 *)(&stack0x00000334 + lVar26) = uVar17;
      *(undefined8 *)(&stack0x00000310 + lVar26) = 0x8000000000000001;
    }
    else {
      *(undefined8 *)(&stack0x00000330 + lVar26) = *(undefined8 *)(&stack0x000009f8 + lVar26);
      *(undefined8 *)(&stack0x00000338 + lVar26) = *(undefined8 *)(&stack0x00000a00 + lVar26);
      *(undefined8 *)(&stack0x00000320 + lVar26) = *(undefined8 *)(&stack0x000009e8 + lVar26);
      *(undefined8 *)(&stack0x00000328 + lVar26) = *(undefined8 *)(&stack0x000009f0 + lVar26);
      *(undefined4 *)(&stack0x00000340 + lVar26) = *(undefined4 *)(&stack0x00000a08 + lVar26);
      *(undefined4 *)(&stack0x00000344 + lVar26) = *(undefined4 *)(&stack0x00000a0c + lVar26);
      *(undefined4 *)(&stack0x00000348 + lVar26) = *(undefined4 *)(&stack0x00000a10 + lVar26);
      *(undefined4 *)(&stack0x0000034c + lVar26) = *(undefined4 *)(&stack0x00000a14 + lVar26);
      *(undefined4 *)(&stack0x00000350 + lVar26) = *(undefined4 *)(&stack0x00000a18 + lVar26);
      *(undefined4 *)(&stack0x00000354 + lVar26) = *(undefined4 *)(&stack0x00000a1c + lVar26);
      *(undefined4 *)(&stack0x00000358 + lVar26) = *(undefined4 *)(&stack0x00000a20 + lVar26);
      *(undefined4 *)(&stack0x0000035c + lVar26) = *(undefined4 *)(&stack0x00000a24 + lVar26);
      *(longlong *)(&stack0x00000310 + lVar26) = lVar40;
      *(undefined8 *)(&stack0x00000318 + lVar26) = *(undefined8 *)(&stack0x00001018 + lVar26);
    }
    puVar4 = *(undefined8 **)(&stack0x000010c0 + lVar26);
    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
    *(undefined1 *)*puVar4 = 10;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409171d7;
    pdb_14007ee60();
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409171e6;
    pbVar31 = pub_1406abab0(0x20,8);
    if (pbVar31 == (byte *)0x0) {
      (&stack0x00001023)[lVar26] = 1;
      (&stack0x00001022)[lVar26] = 1;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917e49;
      pdb_142dc7e11(8,0x20);
    }
    pbVar31[8] = 0;
    pbVar31[0x10] = 0;
    pbVar31[0x11] = 0;
    pbVar31[0x12] = 0;
    pbVar31[0x13] = 0;
    pbVar31[0] = 0;
    pbVar31[1] = 0;
    pbVar31[2] = 0;
    pbVar31[3] = 0;
    pbVar31[4] = 0;
    pbVar31[5] = 0;
    pbVar31[6] = 0;
    pbVar31[7] = 0x80;
    *(undefined8 *)(&stack0x00000fc0 + lVar26) = 1;
    *(byte **)(&stack0x00000fc8 + lVar26) = pbVar31;
    *(undefined8 *)(&stack0x00000fd0 + lVar26) = 1;
    lVar27 = *(longlong *)(&stack0x00000f70 + lVar26);
    plVar30 = *(longlong **)(&stack0x00000f78 + lVar26);
    *(undefined8 *)(&stack0x00000f70 + lVar26) = 0x8000000000000000;
    if (SBORROW8(0,lVar27)) {
      (&stack0x00001039)[lVar26] = 1;
      (&stack0x00001038)[lVar26] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917e75;
      pdb_142dc8110(&UNK_14301fbca,0x25,&UNK_14301fbf0,-lVar27);
      goto LAB_140917efd;
    }
    *(longlong **)(&stack0x000000a0 + lVar26) = plVar30;
    *(longlong **)(&stack0x000000a8 + lVar26) = plVar30;
    *(longlong *)(&stack0x000000b0 + lVar26) = lVar27;
    *(longlong **)(&stack0x000000b8 + lVar26) =
         plVar30 + *(longlong *)(&stack0x00000f80 + lVar26) * 4;
    if (*(longlong *)(&stack0x00000f80 + lVar26) == 0) goto LAB_140917369;
    lVar27 = 2;
    lVar40 = 0x20;
    goto LAB_1409172df;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091614c;
  pub_142e32760(&stack0x00000a60 + lVar26,&stack0x00000940 + lVar26,0x98);
  *(longlong *)(&stack0x00000af8 + lVar26) = lVar40;
  *(undefined8 *)(&stack0x00000fe0 + lVar26) = *(undefined8 *)(&stack0x000009e8 + lVar26);
  *(undefined4 *)(&stack0x00000570 + lVar26) = *(undefined4 *)(&stack0x000009f0 + lVar26);
  *(undefined4 *)(&stack0x00000574 + lVar26) = *(undefined4 *)(&stack0x000009f4 + lVar26);
  *(undefined4 *)(&stack0x00000578 + lVar26) = *(undefined4 *)(&stack0x000009f8 + lVar26);
  *(undefined4 *)(&stack0x0000057c + lVar26) = *(undefined4 *)(&stack0x000009fc + lVar26);
  uVar32 = *(undefined8 *)(&stack0x00001018 + lVar26);
  if (2 < *_DAT_143ca8e90) {
    *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0;
    *(undefined **)(&stack0x00000ca8 + lVar26) = &UNK_14301fa71;
    *(undefined8 *)(&stack0x00000cb0 + lVar26) = 0x26;
    *(undefined8 *)(&stack0x00000cb8 + lVar26) = 0;
    *(undefined **)(&stack0x00000cc0 + lVar26) = &UNK_14301fa08;
    *(undefined8 *)(&stack0x00000cc8 + lVar26) = 0x32;
    *(undefined8 *)(&stack0x00000cd0 + lVar26) = 3;
    *(undefined **)(&stack0x00000cd8 + lVar26) = &UNK_14301fa71;
    *(undefined8 *)(&stack0x00000ce0 + lVar26) = 0x26;
    *(undefined8 *)(&stack0x00000ce8 + lVar26) = 0x1c000000001;
    *(undefined **)(&stack0x00000cf0 + lVar26) = &UNK_14301fc2d;
    *(undefined8 *)(&stack0x00000cf8 + lVar26) = 0x37;
    *(undefined8 *)(&stack0x00001008 + lVar26) = uVar32;
    (&stack0x0000103f)[lVar26] = 1;
    (&stack0x0000103e)[lVar26] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916233;
    pdb_140f332f0(&stack0x0000103c + lVar26,&stack0x00000ca0 + lVar26);
  }
  *(undefined8 *)(&stack0x00001008 + lVar26) = uVar32;
  (&stack0x0000103f)[lVar26] = 1;
  (&stack0x0000103e)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916255;
  pdb_140eacc10(&stack0x00000ca0 + lVar26);
  *(undefined4 *)(&stack0x00000c90 + lVar26) = *(undefined4 *)(&stack0x00000ca0 + lVar26);
  *(undefined4 *)(&stack0x00000c94 + lVar26) = *(undefined4 *)(&stack0x00000ca4 + lVar26);
  *(undefined4 *)(&stack0x00000c98 + lVar26) = *(undefined4 *)(&stack0x00000ca8 + lVar26);
  *(undefined4 *)(&stack0x00000c9c + lVar26) = *(undefined4 *)(&stack0x00000cac + lVar26);
  *(undefined4 *)(&stack0x00000ca0 + lVar26) = *(undefined4 *)(&stack0x00000ca0 + lVar26);
  *(undefined4 *)(&stack0x00000ca4 + lVar26) = *(undefined4 *)(&stack0x00000ca4 + lVar26);
  *(undefined4 *)(&stack0x00000ca8 + lVar26) = *(undefined4 *)(&stack0x00000ca8 + lVar26);
  *(undefined4 *)(&stack0x00000cac + lVar26) = *(undefined4 *)(&stack0x00000cac + lVar26);
  *(undefined8 *)(&stack0x00001008 + lVar26) = uVar32;
  (&stack0x0000103f)[lVar26] = 1;
  (&stack0x0000103e)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091628c;
  pdb_140a3b620(&stack0x00000ca0 + lVar26);
  *(undefined8 *)(&stack0x00001008 + lVar26) = uVar32;
  (&stack0x0000103f)[lVar26] = 1;
  (&stack0x0000103e)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409162b5;
  pdb_140a937d0(&stack0x00000ca0 + lVar26,&stack0x00000c90 + lVar26);
  (&stack0x000005a0)[lVar26] = 1;
  *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409162de;
  lVar27 = pdb_140f46c40(&stack0x000005a0 + lVar26,*(undefined8 *)(&stack0x00000ca8 + lVar26),
                         *(undefined8 *)(&stack0x00000cb0 + lVar26));
  if (*(ulonglong *)(&stack0x00000ca0 + lVar26) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916300;
    pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),*(ulonglong *)(&stack0x00000ca0 + lVar26),1)
    ;
  }
  if (lVar27 != 0) {
    *(longlong *)(&stack0x00000ca0 + lVar26) = lVar27;
    *(undefined **)(&stack0xffffffffffffffe0 + lVar26) = &UNK_14301fc68;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917d68;
    pdb_142dc8170(&UNK_14301fc48,0x20,&stack0x00000ca0 + lVar26,&UNK_1430200b8);
  }
  *(undefined4 *)(&stack0x000000a0 + lVar26) = *(undefined4 *)(&stack0x00000c90 + lVar26);
  *(undefined4 *)(&stack0x000000a4 + lVar26) = *(undefined4 *)(&stack0x00000c94 + lVar26);
  *(undefined4 *)(&stack0x000000a8 + lVar26) = *(undefined4 *)(&stack0x00000c98 + lVar26);
  *(undefined4 *)(&stack0x000000ac + lVar26) = *(undefined4 *)(&stack0x00000c9c + lVar26);
  *(undefined8 *)(&stack0x00001008 + lVar26) = *(undefined8 *)(&stack0x00001018 + lVar26);
  (&stack0x0000103f)[lVar26] = 1;
  (&stack0x0000103e)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091633f;
  pdb_140a937d0(&stack0x00000ca0 + lVar26,puVar11);
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = 9;
  *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916374;
  pdb_140f3e9e0(&stack0x000005a0 + lVar26,*(undefined8 *)(&stack0x00000ca8 + lVar26),
                *(undefined8 *)(&stack0x00000cb0 + lVar26),&UNK_1430450d2);
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916384;
  lVar27 = pdb_14191dfa0(&stack0x000005a0 + lVar26,&stack0x00000a60 + lVar26);
  if (*(ulonglong *)(&stack0x00000ca0 + lVar26) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409163a6;
    pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),*(ulonglong *)(&stack0x00000ca0 + lVar26),1)
    ;
  }
  lVar40 = *(longlong *)(&stack0x00001018 + lVar26);
  if (lVar27 != 0) {
    *(longlong *)(&stack0x00000ca0 + lVar26) = lVar27;
    *(undefined **)(&stack0xffffffffffffffe0 + lVar26) = &UNK_14301fca0;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917da0;
    pdb_142dc8170(&UNK_14301fc80,0x1d,&stack0x00000ca0 + lVar26,&UNK_1430200d8);
  }
  **(undefined4 **)(&stack0x00000c08 + lVar26) = *(undefined4 *)(&stack0x00000f34 + lVar26);
  lVar27 = *(longlong *)(&stack0x00000c70 + lVar26);
  lVar34 = *(longlong *)(lVar27 + 0x30);
  uVar32 = *(undefined8 *)(lVar27 + 0x40);
  if (lVar34 == *(longlong *)(lVar27 + 0x20)) {
    *(longlong *)(&stack0x00001008 + lVar26) = lVar40;
    (&stack0x0000103f)[lVar26] = 1;
    (&stack0x0000103e)[lVar26] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409163fb;
    pdb_142d7e8a0(*(undefined8 *)(&stack0x00000c10 + lVar26));
  }
  lVar27 = *(longlong *)(&stack0x00000c70 + lVar26);
  *(undefined8 *)(*(longlong *)(lVar27 + 0x28) + lVar34 * 8) = uVar32;
  *(longlong *)(lVar27 + 0x30) = lVar34 + 1;
  *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
  (&stack0x00000fe8)[lVar26] = SBORROW8(0,lVar40);
  if (SBORROW8(0,lVar40)) {
    puVar38 = &UNK_14301fcb8;
    if (DAT_143cb2d0c != '\0') {
      puVar38 = &UNK_14301fcd3;
    }
    *(undefined **)(&stack0x00000bc0 + lVar26) = puVar38;
    *(undefined8 *)(&stack0x00000bc8 + lVar26) = 0x1b;
    if (*(longlong *)(*(longlong *)(&stack0x00000c78 + lVar26) + 1000) == 0) {
      *(undefined8 *)(&stack0x00001008 + lVar26) = 0x8000000000000000;
      (&stack0x0000103f)[lVar26] = 1;
      (&stack0x0000103e)[lVar26] = 1;
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = 5;
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409167ba;
      pdb_140f3e9e0(&stack0x00000f10 + lVar26,puVar38,0x1b,&UNK_14301fcee);
    }
    else {
      *(undefined8 *)(&stack0x00001008 + lVar26) = 0x8000000000000000;
      (&stack0x0000103f)[lVar26] = 1;
      (&stack0x0000103e)[lVar26] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091649c;
      pdb_140f4f710(&stack0x00000ca0 + lVar26,puVar38,0x1b);
      if (*(int *)(&stack0x00000ca0 + lVar26) == 2) {
        *(undefined8 *)(&stack0x000005a8 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
        *(undefined8 *)(&stack0x000005a0 + lVar26) = 2;
        puVar35 = &stack0x000005a0 + lVar26;
      }
      else {
        puVar35 = &stack0x000005a0 + lVar26;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409167dc;
        pub_142e32760(puVar35,&stack0x00000ca0 + lVar26,0x270);
      }
      *(undefined8 *)(&stack0x00001008 + lVar26) = 0x8000000000000000;
      (&stack0x0000103f)[lVar26] = 1;
      (&stack0x0000103e)[lVar26] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091680d;
      pdb_141706d90(puVar11,puVar35,&stack0x00000bc0 + lVar26);
      if (*(int *)(&stack0x000000a0 + lVar26) == 2) {
        *(undefined8 *)(&stack0x00000ca0 + lVar26) = *(undefined8 *)(&stack0x000000a8 + lVar26);
        *(undefined **)(&stack0xffffffffffffffe0 + lVar26) = &UNK_14301fcf8;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917ddc;
        pdb_142dc8170(&UNK_1430200f8,0x2b,&stack0x00000ca0 + lVar26,&UNK_1430200d8);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916830;
      pub_142e32760(&stack0x00000ca0 + lVar26,puVar11,0x270);
      *(undefined8 *)(&stack0x00000f38 + lVar26) = 0;
      *(undefined8 *)(&stack0x00000f40 + lVar26) = 8;
      *(undefined8 *)(&stack0x00000f48 + lVar26) = 0;
LAB_140916879:
      while( true ) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916884;
        pdb_140f59fa0(&stack0x000005a0 + lVar26,&stack0x00000ca0 + lVar26);
        if (*(int *)(&stack0x000005a0 + lVar26) != 1) break;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409168a3;
        pub_142e32760(&stack0x00000310 + lVar26,&stack0x000005a8 + lVar26,600);
        if (*(longlong *)(&stack0x00000310 + lVar26) == 0) goto LAB_140916870;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409168be;
        pub_142e32760(puVar11,&stack0x000005a8 + lVar26,600);
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409168ce;
        pdb_140f46b10(&stack0x00000fc0 + lVar26,puVar11);
        uVar32 = *(undefined8 *)(&stack0x00000fd0 + lVar26);
        (&stack0x00001025)[lVar26] = 1;
        *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000fc8 + lVar26);
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409168f3;
        cVar24 = pdb_140f3ea80(*(undefined8 *)(&stack0x00000fc8 + lVar26),uVar32);
        if (cVar24 == '\0') goto LAB_140916a00;
        (&stack0x00001025)[lVar26] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916912;
        lVar27 = pdb_140f3ecf0(*(undefined8 *)(&stack0x00001028 + lVar26),uVar32);
        if (lVar27 == 0) {
          (&stack0x00001025)[lVar26] = 1;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917d30;
          pdb_142dc8150(&UNK_14301fd78);
        }
        (&stack0x00001025)[lVar26] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916935;
        pdb_140f69110(&stack0x00000c20 + lVar26,lVar27,uVar32);
        if ((((&stack0x00000c20)[lVar26] == '\0') && (*(longlong *)(&stack0x00000c30 + lVar26) == 5)
            ) && ((char)(*(int **)(&stack0x00000c28 + lVar26))[1] == 'o' &&
                  **(int **)(&stack0x00000c28 + lVar26) == 0x72746e69)) {
          if (*(ulonglong *)(&stack0x00000fc0 + lVar26) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916a62;
            pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),
                          *(ulonglong *)(&stack0x00000fc0 + lVar26),1);
          }
        }
        else {
          *(undefined8 *)(&stack0x00000ff8 + lVar26) = *(undefined8 *)(&stack0x00000fc0 + lVar26);
          lVar27 = *(longlong *)(&stack0x00000f48 + lVar26);
          if (lVar27 == *(longlong *)(&stack0x00000f38 + lVar26)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916992;
            pdb_142d8a600(&stack0x00000f38 + lVar26);
          }
          lVar40 = *(longlong *)(&stack0x00000f40 + lVar26);
          lVar34 = lVar27 * 0x20;
          *(undefined8 *)(lVar40 + lVar34) = *(undefined8 *)(&stack0x00000ff8 + lVar26);
          *(undefined8 *)(lVar40 + 8 + lVar34) = *(undefined8 *)(&stack0x00001028 + lVar26);
          uVar32 = *(undefined8 *)(&stack0x00000fd8 + lVar26);
          puVar4 = (undefined8 *)(lVar40 + 0x10 + lVar34);
          *puVar4 = *(undefined8 *)(&stack0x00000fd0 + lVar26);
          puVar4[1] = uVar32;
          *(longlong *)(&stack0x00000f48 + lVar26) = lVar27 + 1;
        }
        plVar30 = *(longlong **)(&stack0x000000a0 + lVar26);
        LOCK();
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409169e3;
          pdb_140cd0de0(puVar11);
        }
        if (*(longlong *)(&stack0x00000310 + lVar26) == 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409169fa;
          pdb_1404b38e0(&stack0x00000318 + lVar26);
        }
      }
      if (*(longlong *)(&stack0x00000ca0 + lVar26) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916a7d;
        pdb_140f590a0(&stack0x00000ca8 + lVar26);
      }
      plVar30 = *(longlong **)(&stack0x00000cb0 + lVar26);
      LOCK();
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
        (&stack0x0000103b)[lVar26] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916a9e;
        pdb_140cd0de0(&stack0x00000cb0 + lVar26);
      }
      uVar28 = *(ulonglong *)(&stack0x00000f48 + lVar26);
      if (uVar28 == 0) {
        (&stack0x0000103b)[lVar26] = 1;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917eed;
        pdb_142dc83d0(&UNK_14301fd40,0x3d,&UNK_14301fd60);
      }
      if (uVar28 != 1) {
        if (uVar28 < 0x15) {
          (&stack0x0000103b)[lVar26] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916f66;
          pdb_14151a470(*(undefined8 *)(&stack0x00000f40 + lVar26),uVar28,1,
                        &stack0x0000103c + lVar26);
        }
        else {
          (&stack0x0000103b)[lVar26] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916f7f;
          pdb_1419203e0(*(undefined8 *)(&stack0x00000f40 + lVar26),uVar28,&stack0x0000103c + lVar26)
          ;
        }
      }
      uVar28 = *(ulonglong *)(&stack0x00000f48 + lVar26);
      if (uVar28 == 0) {
        (&stack0x0000103b)[lVar26] = 1;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917ecb;
        pdb_142dc8510(&UNK_14301fd10);
      }
      uVar29 = *(longlong *)(*(longlong *)(&stack0x00000c78 + lVar26) + 1000) - 1;
      pbVar31 = *(byte **)(&stack0x00000f40 + lVar26);
      *(byte **)(&stack0x00000ca0 + lVar26) = pbVar31;
      *(undefined8 *)(&stack0x00000cb0 + lVar26) = *(undefined8 *)(&stack0x00000f38 + lVar26);
      *(byte **)(&stack0x00000cb8 + lVar26) = pbVar31 + uVar28 * 0x20;
      *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000f38 + lVar26);
      if ((uVar29 | uVar28) >> 0x20 == 0) {
        uVar29 = (uVar29 & 0xffffffff) % (uVar28 & 0xffffffff);
      }
      else {
        uVar29 = uVar29 % uVar28;
      }
      if (uVar29 != 0) {
        pbVar39 = pbVar31 + 8;
        uVar37 = uVar29;
        do {
          arg1 = *(ulonglong *)(pbVar39 + -8);
          if (arg1 != 0) {
            pbVar1 = *(byte **)pbVar39;
            *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916b70;
            pub_1406abac0(pbVar1,arg1,1);
          }
          pbVar39 = pbVar39 + 0x20;
          uVar37 = uVar37 - 1;
        } while (uVar37 != 0);
      }
      pbVar1 = pbVar31 + uVar29 * 0x20;
      pbVar39 = pbVar1 + 0x20;
      *(byte **)(&stack0x00000ca8 + lVar26) = pbVar39;
      lVar27 = *(longlong *)pbVar1;
      if (SBORROW8(0,lVar27)) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917efc;
        pdb_142dc8150(&UNK_14301fd28,lVar27,-lVar27);
      }
      *(longlong *)(&stack0x00000f10 + lVar26) = lVar27;
      *(undefined8 *)(&stack0x00000f28 + lVar26) = *(undefined8 *)(pbVar1 + 0x18);
      uVar32 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)(&stack0x00000f18 + lVar26) = *(undefined8 *)(pbVar1 + 8);
      *(undefined8 *)(&stack0x00000f20 + lVar26) = uVar32;
      if (uVar28 * 0x20 != uVar29 * 0x20 + 0x20) {
        lVar27 = uVar28 + ~uVar29;
        lVar40 = 0;
        do {
          uVar28 = *(ulonglong *)(pbVar39 + lVar40 * 0x20);
          if (uVar28 != 0) {
            pbVar1 = *(byte **)(pbVar39 + lVar40 * 0x20 + 8);
            *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916f3e;
            pub_1406abac0(pbVar1,uVar28,1);
          }
          lVar40 = lVar40 + 1;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      if (*(longlong *)(&stack0x00001028 + lVar26) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916be3;
        pub_1406abac0(pbVar31,*(longlong *)(&stack0x00001028 + lVar26) << 5,8);
      }
    }
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = 0xc;
    *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000f18 + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916c22;
    pdb_140f3e9e0(&stack0x00000f90 + lVar26,*(undefined8 *)(&stack0x00000f18 + lVar26),
                  *(undefined8 *)(&stack0x00000f20 + lVar26),&UNK_14301fad3);
    if (*(ulonglong *)(&stack0x00000f10 + lVar26) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916c41;
      pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),*(ulonglong *)(&stack0x00000f10 + lVar26),
                    1);
    }
  }
  else {
    *(longlong *)(&stack0x00000f90 + lVar26) = lVar40;
    *(undefined8 *)(&stack0x00000f98 + lVar26) = *(undefined8 *)(&stack0x00000fe0 + lVar26);
    *(undefined8 *)(&stack0x00000fa0 + lVar26) = *(undefined8 *)(&stack0x00000570 + lVar26);
    *(undefined8 *)(&stack0x00000fa8 + lVar26) = *(undefined8 *)(&stack0x00000578 + lVar26);
  }
  puVar35 = &stack0x00000ca0 + lVar26;
  if (2 < *_DAT_143ca8e90) {
    *(undefined1 **)(&stack0x000005a0 + lVar26) = &stack0x00000f90 + lVar26;
    *(code **)(&stack0x000005a8 + lVar26) = pdb_140f58250;
    *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0;
    *(undefined **)(&stack0x00000ca8 + lVar26) = &UNK_14301fa71;
    *(undefined8 *)(&stack0x00000cb0 + lVar26) = 0x26;
    *(undefined8 *)(&stack0x00000cb8 + lVar26) = 0;
    *(undefined **)(&stack0x00000cc0 + lVar26) = &UNK_14301fa08;
    *(undefined8 *)(&stack0x00000cc8 + lVar26) = 0x32;
    *(undefined8 *)(&stack0x00000cd0 + lVar26) = 3;
    *(undefined **)(&stack0x00000cd8 + lVar26) = &UNK_14301fa71;
    *(undefined8 *)(&stack0x00000ce0 + lVar26) = 0x26;
    *(undefined8 *)(&stack0x00000ce8 + lVar26) = 0x21500000001;
    *(undefined **)(&stack0x00000cf0 + lVar26) = &UNK_14301fd90;
    *(undefined1 **)(&stack0x00000cf8 + lVar26) = &stack0x000005a0 + lVar26;
    (&stack0x0000103a)[lVar26] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916d12;
    pdb_140f332f0(&stack0x0000103c + lVar26,puVar35);
  }
  (&stack0x0000103a)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916d30;
  pdb_140f4f620(puVar35,*(undefined8 *)(&stack0x00000f98 + lVar26),
                *(undefined8 *)(&stack0x00000fa0 + lVar26));
  if (*(int *)(&stack0x00000ca0 + lVar26) != 2) {
    *(undefined8 *)(&stack0x000005a0 + lVar26) = *(undefined8 *)(&stack0x00000ca0 + lVar26);
    *(undefined8 *)(&stack0x000005a8 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
    *(undefined8 *)(&stack0x000005f0 + lVar26) = *(undefined8 *)(&stack0x00000cf0 + lVar26);
    *(undefined4 *)(&stack0x000005e0 + lVar26) = *(undefined4 *)(&stack0x00000ce0 + lVar26);
    *(undefined4 *)(&stack0x000005e4 + lVar26) = *(undefined4 *)(&stack0x00000ce4 + lVar26);
    *(undefined4 *)(&stack0x000005e8 + lVar26) = *(undefined4 *)(&stack0x00000ce8 + lVar26);
    *(undefined4 *)(&stack0x000005ec + lVar26) = *(undefined4 *)(&stack0x00000cec + lVar26);
    *(undefined4 *)(&stack0x000005d0 + lVar26) = *(undefined4 *)(&stack0x00000cd0 + lVar26);
    *(undefined4 *)(&stack0x000005d4 + lVar26) = *(undefined4 *)(&stack0x00000cd4 + lVar26);
    *(undefined4 *)(&stack0x000005d8 + lVar26) = *(undefined4 *)(&stack0x00000cd8 + lVar26);
    *(undefined4 *)(&stack0x000005dc + lVar26) = *(undefined4 *)(&stack0x00000cdc + lVar26);
    *(undefined4 *)(&stack0x000005c0 + lVar26) = *(undefined4 *)(&stack0x00000cc0 + lVar26);
    *(undefined4 *)(&stack0x000005c4 + lVar26) = *(undefined4 *)(&stack0x00000cc4 + lVar26);
    *(undefined4 *)(&stack0x000005c8 + lVar26) = *(undefined4 *)(&stack0x00000cc8 + lVar26);
    *(undefined4 *)(&stack0x000005cc + lVar26) = *(undefined4 *)(&stack0x00000ccc + lVar26);
    *(undefined4 *)(&stack0x000005b0 + lVar26) = *(undefined4 *)(&stack0x00000cb0 + lVar26);
    *(undefined4 *)(&stack0x000005b4 + lVar26) = *(undefined4 *)(&stack0x00000cb4 + lVar26);
    *(undefined4 *)(&stack0x000005b8 + lVar26) = *(undefined4 *)(&stack0x00000cb8 + lVar26);
    *(undefined4 *)(&stack0x000005bc + lVar26) = *(undefined4 *)(&stack0x00000cbc + lVar26);
    if (*(longlong *)(&stack0x000005a0 + lVar26) == 2) goto LAB_140916ff7;
    uVar32 = *(undefined8 *)(&stack0x00000fa0 + lVar26);
    (&stack0x0000103a)[lVar26] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916dba;
    lVar27 = pdb_140f3eaf0(*(undefined8 *)(&stack0x00000f98 + lVar26),uVar32);
    if (lVar27 == 0) {
      *(undefined8 *)(&stack0x000005a0 + lVar26) = 0x8000000000000000;
    }
    else {
      (&stack0x0000103a)[lVar26] = 1;
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = 9;
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916de5;
      pdb_140f3e9e0(&stack0x000005a0 + lVar26,lVar27,uVar32,&UNK_14301fc24);
    }
    *(ulonglong *)(&stack0x00001028 + lVar26) =
         CONCAT71((int7)((ulonglong)-*(longlong *)(&stack0x00001018 + lVar26) >> 8),
                  SBORROW8(0,*(longlong *)(&stack0x00001018 + lVar26)));
    *(undefined4 *)(&stack0x000000b0 + lVar26) = *(undefined4 *)(&stack0x00000fa0 + lVar26);
    *(undefined4 *)(&stack0x000000b4 + lVar26) = *(undefined4 *)(&stack0x00000fa4 + lVar26);
    *(undefined4 *)(&stack0x000000b8 + lVar26) = *(undefined4 *)(&stack0x00000fa8 + lVar26);
    *(undefined4 *)(&stack0x000000bc + lVar26) = *(undefined4 *)(&stack0x00000fac + lVar26);
    *(undefined4 *)(&stack0x000000a0 + lVar26) = *(undefined4 *)(&stack0x00000f90 + lVar26);
    *(undefined4 *)(&stack0x000000a4 + lVar26) = *(undefined4 *)(&stack0x00000f94 + lVar26);
    *(undefined4 *)(&stack0x000000a8 + lVar26) = *(undefined4 *)(&stack0x00000f98 + lVar26);
    *(undefined4 *)(&stack0x000000ac + lVar26) = *(undefined4 *)(&stack0x00000f9c + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916e38;
    pub_142e32760(puVar35,&stack0x00000a60 + lVar26,0xa0);
    *(undefined4 *)(&stack0x00000310 + lVar26) = *(undefined4 *)(&stack0x000005a0 + lVar26);
    *(undefined4 *)(&stack0x00000314 + lVar26) = *(undefined4 *)(&stack0x000005a4 + lVar26);
    *(undefined4 *)(&stack0x00000318 + lVar26) = *(undefined4 *)(&stack0x000005a8 + lVar26);
    *(undefined4 *)(&stack0x0000031c + lVar26) = *(undefined4 *)(&stack0x000005ac + lVar26);
    *(undefined4 *)(&stack0x00000320 + lVar26) = *(undefined4 *)(&stack0x000005b0 + lVar26);
    *(undefined4 *)(&stack0x00000324 + lVar26) = *(undefined4 *)(&stack0x000005b4 + lVar26);
    *(undefined4 *)(&stack0x00000328 + lVar26) = *(undefined4 *)(&stack0x000005b8 + lVar26);
    *(undefined4 *)(&stack0x0000032c + lVar26) = *(undefined4 *)(&stack0x000005bc + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916e63;
    pdb_14091af10(&stack0x00000938 + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916e75;
    pub_142e32760(&stack0x00000938 + lVar26,puVar35,0xa0);
    lVar40 = -0x8000000000000000;
    *(undefined8 *)(&stack0x000009d8 + lVar26) = 0x8000000000000000;
    *(undefined8 *)(&stack0x000009e0 + lVar26) = 1;
    *(undefined8 *)(&stack0x000009f8 + lVar26) = *(undefined8 *)(&stack0x000000b0 + lVar26);
    *(undefined8 *)(&stack0x00000a00 + lVar26) = *(undefined8 *)(&stack0x000000b8 + lVar26);
    *(undefined8 *)(&stack0x000009e8 + lVar26) = *(undefined8 *)(&stack0x000000a0 + lVar26);
    *(undefined8 *)(&stack0x000009f0 + lVar26) = *(undefined8 *)(&stack0x000000a8 + lVar26);
    *(undefined8 *)(&stack0x00000a38 + lVar26) = *(undefined8 *)(&stack0x00000320 + lVar26);
    *(undefined8 *)(&stack0x00000a40 + lVar26) = *(undefined8 *)(&stack0x00000328 + lVar26);
    *(undefined8 *)(&stack0x00000a28 + lVar26) = *(undefined8 *)(&stack0x00000310 + lVar26);
    *(undefined8 *)(&stack0x00000a30 + lVar26) = *(undefined8 *)(&stack0x00000318 + lVar26);
    *(undefined4 *)(&stack0x00000a48 + lVar26) = *(undefined4 *)(&stack0x00000c90 + lVar26);
    *(undefined4 *)(&stack0x00000a4c + lVar26) = *(undefined4 *)(&stack0x00000c94 + lVar26);
    *(undefined4 *)(&stack0x00000a50 + lVar26) = *(undefined4 *)(&stack0x00000c98 + lVar26);
    *(undefined4 *)(&stack0x00000a54 + lVar26) = *(undefined4 *)(&stack0x00000c9c + lVar26);
    uVar28 = *(ulonglong *)(&stack0x00001028 + lVar26);
    (&stack0x00000a58)[lVar26] = (char)uVar28;
    (&stack0x00000a59)[lVar26] = 1;
    *(undefined8 *)(&stack0x00001018 + lVar26) = 1;
    uVar29 = CONCAT71((int7)((ulonglong)puVar35 >> 8),1);
LAB_140916000:
    lVar27 = *(longlong *)(&stack0x00000938 + lVar26);
    goto LAB_140916011;
  }
  *(undefined8 *)(&stack0x000005a8 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
  *(undefined8 *)(&stack0x000005a0 + lVar26) = 2;
LAB_140916ff7:
  (&stack0x0000103a)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091700a;
  pdb_1404b38e0(&stack0x000005a8 + lVar26);
  lVar27 = *(longlong *)(&stack0x00000f70 + lVar26);
  plVar30 = *(longlong **)(&stack0x00000f78 + lVar26);
  *(undefined8 *)(&stack0x00000f70 + lVar26) = 0x8000000000000000;
  if (SBORROW8(0,lVar27)) {
    (&stack0x0000103a)[lVar26] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917e9a;
    pdb_142dc8110(&UNK_14301fbca,0x25,&UNK_14301fda8);
LAB_140917efd:
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  *(longlong **)(&stack0x000005a0 + lVar26) = plVar30;
  *(longlong **)(&stack0x000005a8 + lVar26) = plVar30;
  *(longlong *)(&stack0x000005b0 + lVar26) = lVar27;
  *(longlong **)(&stack0x000005b8 + lVar26) = plVar30 + *(longlong *)(&stack0x00000f80 + lVar26) * 4
  ;
  if (*(longlong *)(&stack0x00000f80 + lVar26) != 0) {
    puVar4 = *(undefined8 **)(&stack0x000010d0 + lVar26);
    uVar25 = *(undefined4 *)((longlong)puVar4 + 0x1c);
    uVar32 = *puVar4;
    puVar8 = (undefined4 *)puVar4[2];
    do {
      *(longlong **)(&stack0x000005a8 + lVar26) = plVar30 + 4;
      lVar27 = *plVar30;
      plVar7 = (longlong *)plVar30[1];
      if (SBORROW8(0,lVar27)) {
        *(longlong **)(&stack0x00000ca0 + lVar26) = plVar7;
        LOCK();
        *(undefined1 *)(plVar7 + 2) = 0;
        UNLOCK();
        LOCK();
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091710a;
          pdb_140315620(&stack0x00000ca0 + lVar26,lVar27,-lVar27);
        }
      }
      else {
        if (lVar27 == -0x7fffffffffffffff) break;
        uVar12 = *(undefined4 *)((longlong)plVar30 + 0x14);
        lVar40 = plVar30[3];
        uVar13 = *(undefined4 *)((longlong)plVar30 + 0x1c);
        *(int *)(&stack0x00000cb0 + lVar26) = (int)plVar30[2];
        *(undefined4 *)(&stack0x00000cb4 + lVar26) = uVar12;
        *(int *)(&stack0x00000cb8 + lVar26) = (int)lVar40;
        *(undefined4 *)(&stack0x00000cbc + lVar26) = uVar13;
        *puVar8 = uVar25;
        *(longlong *)(&stack0x00000ca0 + lVar26) = lVar27;
        *(longlong **)(&stack0x00000ca8 + lVar26) = plVar7;
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409170e9;
        pdb_140928690(uVar32,&stack0x00000ca0 + lVar26);
      }
      plVar30 = *(longlong **)(&stack0x000005a8 + lVar26);
    } while (plVar30 != *(longlong **)(&stack0x000005b8 + lVar26));
  }
  (&stack0x0000103a)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917120;
  pdb_14096bcf0(&stack0x000005a0 + lVar26);
  puVar36 = _DAT_143ca8e90;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091714c;
  pub_142e32760(&stack0xfffffffffffffff0 + lVar26,&stack0x00000a60 + lVar26,0xa0);
  *(undefined8 *)(&stack0x00000c40 + lVar26) = *(undefined8 *)(&stack0x00000c90 + lVar26);
  *(undefined8 *)(&stack0x00000c48 + lVar26) = *(undefined8 *)(&stack0x00000c98 + lVar26);
  if (*(ulonglong *)(&stack0x00000f90 + lVar26) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091717c;
    pub_1406abac0(*(byte **)(&stack0x00000f98 + lVar26),*(ulonglong *)(&stack0x00000f90 + lVar26),1)
    ;
  }
  goto LAB_14091765a;
LAB_140916a00:
  if (*(ulonglong *)(&stack0x00000fc0 + lVar26) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916a1e;
    pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),*(ulonglong *)(&stack0x00000fc0 + lVar26),1)
    ;
  }
  plVar30 = *(longlong **)(&stack0x000000a0 + lVar26);
  LOCK();
  *plVar30 = *plVar30 + -1;
  UNLOCK();
  if (*plVar30 == 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916a30;
    pdb_140cd0de0(puVar11);
  }
  if (*(longlong *)(&stack0x00000310 + lVar26) == 0) {
LAB_140916870:
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140916878;
    pdb_1404b38e0(&stack0x00000318 + lVar26);
  }
  goto LAB_140916879;
LAB_1409172df:
  do {
    *(longlong **)(&stack0x000000a8 + lVar26) = plVar30 + 4;
    lVar34 = *plVar30;
    lVar9 = plVar30[1];
    if (SBORROW8(0,lVar34)) {
      *(longlong *)(&stack0x00000ca8 + lVar26) = lVar9;
      *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0x8000000000000002;
      if (lVar27 + -1 == *(longlong *)(&stack0x00000fc0 + lVar26)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917363;
        pdb_142d7e6e0(&stack0x00000fc0 + lVar26);
        goto LAB_1409172a0;
      }
    }
    else {
      if (lVar34 == -0x7fffffffffffffff) break;
      lVar22 = plVar30[2];
      uVar25 = *(undefined4 *)((longlong)plVar30 + 0x14);
      lVar23 = plVar30[3];
      uVar12 = *(undefined4 *)((longlong)plVar30 + 0x1c);
      *(int *)(&stack0x00000090 + lVar26) = (int)lVar22;
      *(undefined4 *)(&stack0x00000094 + lVar26) = uVar25;
      *(int *)(&stack0x00000098 + lVar26) = (int)lVar23;
      *(undefined4 *)(&stack0x0000009c + lVar26) = uVar12;
      *(longlong *)(&stack0x00000ca0 + lVar26) = lVar34;
      *(longlong *)(&stack0x00000ca8 + lVar26) = lVar9;
      *(int *)(&stack0x00000cb0 + lVar26) = (int)lVar22;
      *(undefined4 *)(&stack0x00000cb4 + lVar26) = uVar25;
      *(int *)(&stack0x00000cb8 + lVar26) = (int)lVar23;
      *(undefined4 *)(&stack0x00000cbc + lVar26) = uVar12;
      if (lVar27 + -1 == *(longlong *)(&stack0x00000fc0 + lVar26)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917334;
        pdb_142d7e6e0(&stack0x00000fc0 + lVar26);
LAB_1409172a0:
        pbVar31 = *(byte **)(&stack0x00000fc8 + lVar26);
      }
    }
    uVar32 = *(undefined8 *)(&stack0x00000ca0 + lVar26);
    uVar5 = *(undefined8 *)(&stack0x00000ca8 + lVar26);
    uVar6 = *(undefined8 *)(&stack0x00000cb8 + lVar26);
    *(undefined8 *)(pbVar31 + lVar40 + 0x10) = *(undefined8 *)(&stack0x00000cb0 + lVar26);
    *(undefined8 *)(pbVar31 + lVar40 + 0x10 + 8) = uVar6;
    *(undefined8 *)(pbVar31 + lVar40) = uVar32;
    *(undefined8 *)(pbVar31 + lVar40 + 8) = uVar5;
    *(longlong *)(&stack0x00000fd0 + lVar26) = lVar27;
    plVar30 = *(longlong **)(&stack0x000000a8 + lVar26);
    lVar27 = lVar27 + 1;
    lVar40 = lVar40 + 0x20;
  } while (plVar30 != *(longlong **)(&stack0x000000b8 + lVar26));
LAB_140917369:
  (&stack0x00001039)[lVar26] = 1;
  (&stack0x00001038)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917380;
  pdb_14096bcf0(&stack0x000000a0 + lVar26);
  puVar36 = _DAT_143ca8e90;
  if (3 < *_DAT_143ca8e90) {
    *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0;
    *(undefined **)(&stack0x00000ca8 + lVar26) = &UNK_14301fa71;
    *(undefined8 *)(&stack0x00000cb0 + lVar26) = 0x26;
    *(undefined8 *)(&stack0x00000cb8 + lVar26) = 0;
    *(undefined **)(&stack0x00000cc0 + lVar26) = &UNK_14301fa08;
    *(undefined8 *)(&stack0x00000cc8 + lVar26) = 0x32;
    *(undefined8 *)(&stack0x00000cd0 + lVar26) = 4;
    *(undefined **)(&stack0x00000cd8 + lVar26) = &UNK_14301fa71;
    *(undefined8 *)(&stack0x00000ce0 + lVar26) = 0x26;
    *(undefined8 *)(&stack0x00000ce8 + lVar26) = 0x1a700000001;
    *(undefined **)(&stack0x00000cf0 + lVar26) = &UNK_14301fc08;
    *(undefined8 *)(&stack0x00000cf8 + lVar26) = 0x39;
    (&stack0x00001039)[lVar26] = 1;
    (&stack0x00001038)[lVar26] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917449;
    pdb_140f332f0(&stack0x0000103c + lVar26,&stack0x00000ca0 + lVar26);
  }
  *(undefined8 *)(&stack0x00000cf8 + lVar26) = *(undefined8 *)(&stack0x00000350 + lVar26);
  *(undefined8 *)(&stack0x00000d00 + lVar26) = *(undefined8 *)(&stack0x00000358 + lVar26);
  *(undefined4 *)(&stack0x00000ce8 + lVar26) = *(undefined4 *)(&stack0x00000340 + lVar26);
  *(undefined4 *)(&stack0x00000cec + lVar26) = *(undefined4 *)(&stack0x00000344 + lVar26);
  *(undefined4 *)(&stack0x00000cf0 + lVar26) = *(undefined4 *)(&stack0x00000348 + lVar26);
  *(undefined4 *)(&stack0x00000cf4 + lVar26) = *(undefined4 *)(&stack0x0000034c + lVar26);
  *(undefined4 *)(&stack0x00000cd8 + lVar26) = *(undefined4 *)(&stack0x00000330 + lVar26);
  *(undefined4 *)(&stack0x00000cdc + lVar26) = *(undefined4 *)(&stack0x00000334 + lVar26);
  *(undefined4 *)(&stack0x00000ce0 + lVar26) = *(undefined4 *)(&stack0x00000338 + lVar26);
  *(undefined4 *)(&stack0x00000ce4 + lVar26) = *(undefined4 *)(&stack0x0000033c + lVar26);
  *(undefined4 *)(&stack0x00000cc8 + lVar26) = *(undefined4 *)(&stack0x00000320 + lVar26);
  *(undefined4 *)(&stack0x00000ccc + lVar26) = *(undefined4 *)(&stack0x00000324 + lVar26);
  *(undefined4 *)(&stack0x00000cd0 + lVar26) = *(undefined4 *)(&stack0x00000328 + lVar26);
  *(undefined4 *)(&stack0x00000cd4 + lVar26) = *(undefined4 *)(&stack0x0000032c + lVar26);
  *(undefined8 *)(&stack0x00000cb8 + lVar26) = *(undefined8 *)(&stack0x00000310 + lVar26);
  *(undefined8 *)(&stack0x00000cc0 + lVar26) = *(undefined8 *)(&stack0x00000318 + lVar26);
  *(ulonglong *)(&stack0x00001028 + lVar26) = uVar28 & 0xffffffffffffff01;
  *(ulonglong *)(&stack0x00000fe8 + lVar26) =
       *(ulonglong *)(&stack0x00000fe8 + lVar26) & 0xffffffffffffff01;
  *(undefined4 *)(&stack0x00000ca0 + lVar26) = *(undefined4 *)(&stack0x00000fc0 + lVar26);
  *(undefined4 *)(&stack0x00000ca4 + lVar26) = *(undefined4 *)(&stack0x00000fc4 + lVar26);
  *(undefined4 *)(&stack0x00000ca8 + lVar26) = *(undefined4 *)(&stack0x00000fc8 + lVar26);
  *(undefined4 *)(&stack0x00000cac + lVar26) = *(undefined4 *)(&stack0x00000fcc + lVar26);
  *(undefined8 *)(&stack0x00000cb0 + lVar26) = *(undefined8 *)(&stack0x00000fd0 + lVar26);
  puVar4 = *(undefined8 **)(&stack0x000010b8 + lVar26);
  *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
  *(undefined8 *)(&stack0x00001018 + lVar26) = *puVar4;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409174e6;
  pdb_140998230();
  puVar4 = *(undefined8 **)(&stack0x00001018 + lVar26);
  puVar4[0xc] = *(undefined8 *)(&stack0x00000d00 + lVar26);
  uVar32 = *(undefined8 *)(&stack0x00000cf8 + lVar26);
  puVar4[10] = *(undefined8 *)(&stack0x00000cf0 + lVar26);
  puVar4[0xb] = uVar32;
  uVar32 = *(undefined8 *)(&stack0x00000ce8 + lVar26);
  puVar4[8] = *(undefined8 *)(&stack0x00000ce0 + lVar26);
  puVar4[9] = uVar32;
  uVar32 = *(undefined8 *)(&stack0x00000ca0 + lVar26);
  uVar5 = *(undefined8 *)(&stack0x00000ca8 + lVar26);
  uVar25 = *(undefined4 *)(&stack0x00000cb0 + lVar26);
  uVar12 = *(undefined4 *)(&stack0x00000cb4 + lVar26);
  uVar13 = *(undefined4 *)(&stack0x00000cb8 + lVar26);
  uVar14 = *(undefined4 *)(&stack0x00000cbc + lVar26);
  uVar15 = *(undefined4 *)(&stack0x00000cc0 + lVar26);
  uVar16 = *(undefined4 *)(&stack0x00000cc4 + lVar26);
  uVar17 = *(undefined4 *)(&stack0x00000cc8 + lVar26);
  uVar18 = *(undefined4 *)(&stack0x00000ccc + lVar26);
  uVar19 = *(undefined4 *)(&stack0x00000cd4 + lVar26);
  uVar20 = *(undefined4 *)(&stack0x00000cd8 + lVar26);
  uVar21 = *(undefined4 *)(&stack0x00000cdc + lVar26);
  *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(&stack0x00000cd0 + lVar26);
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar19;
  *(undefined4 *)(puVar4 + 7) = uVar20;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar21;
  *(undefined4 *)(puVar4 + 4) = uVar15;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar16;
  *(undefined4 *)(puVar4 + 5) = uVar17;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar18;
  *(undefined4 *)(puVar4 + 2) = uVar25;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar12;
  *(undefined4 *)(puVar4 + 3) = uVar13;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar14;
  *puVar4 = uVar32;
  puVar4[1] = uVar5;
  *(undefined1 *)(puVar4 + 0xd) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x69) = (&stack0x00001017)[lVar26];
  *(char *)((longlong)puVar4 + 0x6a) = (char)*(undefined8 *)(&stack0x00001028 + lVar26);
  *(char *)((longlong)puVar4 + 0x6b) = (char)*(undefined8 *)(&stack0x00000fe8 + lVar26);
  puVar4[0xe] = *(undefined8 *)(&stack0x00000c80 + lVar26);
  if (!SBORROW8(0,*(longlong *)(&stack0x00000ff8 + lVar26))) {
    *(longlong *)(&stack0x00000a60 + lVar26) = *(longlong *)(&stack0x00000ff8 + lVar26);
    *(undefined8 *)(&stack0x00000a68 + lVar26) = *(undefined8 *)(&stack0x00000fe0 + lVar26);
    *(undefined4 *)(&stack0x00000a70 + lVar26) = *(undefined4 *)(&stack0x00000f10 + lVar26);
    *(undefined4 *)(&stack0x00000a74 + lVar26) = *(undefined4 *)(&stack0x00000f14 + lVar26);
    *(undefined4 *)(&stack0x00000a78 + lVar26) = *(undefined4 *)(&stack0x00000f18 + lVar26);
    *(undefined4 *)(&stack0x00000a7c + lVar26) = *(undefined4 *)(&stack0x00000f1c + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409175b0;
    pdb_140a937d0(&stack0x00000ca0 + lVar26,&stack0x00000c50 + lVar26);
    (&stack0x00001012)[lVar26] = 1;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = 9;
    *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000ca8 + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409175e6;
    pdb_140f3e9e0(&stack0x000000a0 + lVar26,*(undefined8 *)(&stack0x00000ca8 + lVar26),
                  *(undefined8 *)(&stack0x00000cb0 + lVar26),&UNK_14301fc24);
    (&stack0x00001012)[lVar26] = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409175fe;
    lVar27 = pdb_141162640(&stack0x00000a60 + lVar26,&stack0x000000a0 + lVar26);
    *(longlong *)(&stack0x00000f90 + lVar26) = lVar27;
    if (lVar27 != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917617;
      pdb_1404b38e0(&stack0x00000f90 + lVar26);
    }
    if (*(ulonglong *)(&stack0x00000ca0 + lVar26) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917636;
      pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),*(ulonglong *)(&stack0x00000ca0 + lVar26),
                    1);
    }
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091764c;
  pub_142e32760(&stack0xfffffffffffffff0 + lVar26,&stack0x000005a0 + lVar26,0xa0);
  *(undefined8 *)(&stack0x00000c40 + lVar26) = *(undefined8 *)(&stack0x00000c50 + lVar26);
  *(undefined8 *)(&stack0x00000c48 + lVar26) = *(undefined8 *)(&stack0x00000c58 + lVar26);
LAB_14091765a:
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917670;
  pub_142e32760(&stack0x000005a0 + lVar26,&stack0xfffffffffffffff0 + lVar26,0xa0);
  if (!SBORROW8(0,*(longlong *)(&stack0x00000f70 + lVar26))) {
    (&stack0x00001033)[lVar26] = 1;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917e26;
    pdb_142dc83b0(&UNK_14301fdc0,0x28,&UNK_14301fde8);
  }
  bVar3 = (&stack0x00000638)[lVar26];
  if (DAT_143cb2d0c == '\0') {
    uVar32 = *(undefined8 *)(&UNK_1430204e8 + (ulonglong)bVar3 * 8);
    puVar38 = *(undefined **)(&UNK_1430203d8 + (ulonglong)bVar3 * 8);
  }
  else {
    if ((bVar3 != 0) && (2 < *puVar36)) {
      *(undefined1 **)(&stack0x000000a0 + lVar26) = &stack0x00000638 + lVar26;
      *(code **)(&stack0x000000a8 + lVar26) = pdb_14091b750;
      *(undefined **)(&stack0x000000b0 + lVar26) = &UNK_14301fe00;
      *(code **)(&stack0x000000b8 + lVar26) = pdb_14091b750;
      *(undefined8 *)(&stack0x00000ca0 + lVar26) = 0;
      *(undefined **)(&stack0x00000ca8 + lVar26) = &UNK_14301fa71;
      *(undefined8 *)(&stack0x00000cb0 + lVar26) = 0x26;
      *(undefined8 *)(&stack0x00000cb8 + lVar26) = 0;
      *(undefined **)(&stack0x00000cc0 + lVar26) = &UNK_14301fa08;
      *(undefined8 *)(&stack0x00000cc8 + lVar26) = 0x32;
      *(undefined8 *)(&stack0x00000cd0 + lVar26) = 3;
      *(undefined **)(&stack0x00000cd8 + lVar26) = &UNK_14301fa71;
      *(undefined8 *)(&stack0x00000ce0 + lVar26) = 0x26;
      *(undefined8 *)(&stack0x00000ce8 + lVar26) = 0x24500000001;
      *(undefined **)(&stack0x00000cf0 + lVar26) = &UNK_14301fe01;
      *(undefined1 **)(&stack0x00000cf8 + lVar26) = &stack0x000000a0 + lVar26;
      (&stack0x00001033)[lVar26] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917764;
      pdb_140f332f0(&stack0x0000103c + lVar26,&stack0x00000ca0 + lVar26);
    }
    (&stack0x00000638)[lVar26] = 0;
    puVar38 = &UNK_14304516a;
    uVar32 = 6;
  }
  (&stack0x00001033)[lVar26] = 1;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar26) = uVar32;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409177b5;
  pdb_140f3e9e0(&stack0x000000a0 + lVar26,&UNK_1430450c6,0xc,puVar38);
  (&stack0x00001033)[lVar26] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409177cd;
  pdb_140c5d220(&stack0x00000ca0 + lVar26,&stack0x000000a0 + lVar26);
  puVar4 = *(undefined8 **)(&stack0x000010c8 + lVar26);
  uVar25 = *(undefined4 *)((longlong)puVar4 + 0x1c);
  puVar8 = (undefined4 *)puVar4[2];
  *puVar8 = uVar25;
  puVar4 = (undefined8 *)*puVar4;
  puVar4[4] = *(undefined8 *)(&stack0x00000cc0 + lVar26);
  uVar12 = *(undefined4 *)(&stack0x00000ca0 + lVar26);
  uVar13 = *(undefined4 *)(&stack0x00000ca4 + lVar26);
  uVar14 = *(undefined4 *)(&stack0x00000ca8 + lVar26);
  uVar15 = *(undefined4 *)(&stack0x00000cac + lVar26);
  uVar16 = *(undefined4 *)(&stack0x00000cb4 + lVar26);
  uVar17 = *(undefined4 *)(&stack0x00000cb8 + lVar26);
  uVar18 = *(undefined4 *)(&stack0x00000cbc + lVar26);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(&stack0x00000cb0 + lVar26);
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar16;
  *(undefined4 *)(puVar4 + 3) = uVar17;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar18;
  *(undefined4 *)puVar4 = uVar12;
  *(undefined4 *)((longlong)puVar4 + 4) = uVar13;
  *(undefined4 *)(puVar4 + 1) = uVar14;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar15;
  if (DAT_143cb2d0c != '\0') {
    *(undefined8 *)((longlong)puVar4 + 0x14) = 8;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined2 *)((longlong)puVar4 + 0x21) = 0;
    *puVar8 = uVar25;
    *puVar4 = 0;
  }
  plVar30 = *(longlong **)(&stack0x00000c18 + lVar26);
  lVar27 = *plVar30;
  if (lVar27 == 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409178ae;
    pub_142e32760(&stack0x00000ca0 + lVar26,&stack0x000005a0 + lVar26,0xa0);
    *(undefined4 *)(&stack0x00000d40 + lVar26) = *(undefined4 *)(&stack0x00000c40 + lVar26);
    *(undefined4 *)(&stack0x00000d44 + lVar26) = *(undefined4 *)(&stack0x00000c44 + lVar26);
    *(undefined4 *)(&stack0x00000d48 + lVar26) = *(undefined4 *)(&stack0x00000c48 + lVar26);
    *(undefined4 *)(&stack0x00000d4c + lVar26) = *(undefined4 *)(&stack0x00000c4c + lVar26);
    (&stack0x00001033)[lVar26] = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409178d9;
    pdb_14161a320(*(undefined8 *)(&stack0x000010f0 + lVar26),&stack0x00000ca0 + lVar26,
                  &UNK_14301fe20);
  }
  else {
    puVar8 = (undefined4 *)plVar30[2];
    uVar25 = *(undefined4 *)((longlong)plVar30 + 0x1c);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917857;
    pub_142e32760(&stack0x00000ca0 + lVar26,&stack0x000005a0 + lVar26,0xa0);
    *(undefined4 *)(&stack0x00000d40 + lVar26) = *(undefined4 *)(&stack0x00000c40 + lVar26);
    *(undefined4 *)(&stack0x00000d44 + lVar26) = *(undefined4 *)(&stack0x00000c44 + lVar26);
    *(undefined4 *)(&stack0x00000d48 + lVar26) = *(undefined4 *)(&stack0x00000c48 + lVar26);
    *(undefined4 *)(&stack0x00000d4c + lVar26) = *(undefined4 *)(&stack0x00000c4c + lVar26);
    *puVar8 = uVar25;
    *(longlong *)(&stack0x00001028 + lVar26) = lVar27;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917876;
    pdb_1404cc180(lVar27);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917890;
    pub_142e32760(*(undefined8 *)(&stack0x00001028 + lVar26),&stack0x00000ca0 + lVar26,0xb0);
  }
  if (!SBORROW8(0,*(longlong *)(&stack0x00000f70 + lVar26))) {
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409178f1;
    pdb_1409a2530(&stack0x00000f70 + lVar26);
  }
  uVar25 = *(undefined4 *)(&stack0x00001004 + lVar26);
  (&stack0x00001037)[lVar26] = (char)uVar25;
  cVar24 = (char)*(undefined4 *)(&stack0x00000ff4 + lVar26);
  (&stack0x00001036)[lVar26] = cVar24;
  (&stack0x00001035)[lVar26] = (char)*(undefined4 *)(&stack0x00000fbc + lVar26);
  (&stack0x00001034)[lVar26] = (&stack0x00001016)[lVar26];
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917931;
  pdb_14091af10(&stack0x00000938 + lVar26);
  (&stack0x00001015)[lVar26] = (char)uVar25;
  (&stack0x00001014)[lVar26] = cVar24;
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x14091794c;
  pdb_140972e30(&stack0x00000f50 + lVar26);
  uVar28 = 4;
  if ((longlong)*(ulonglong *)(&stack0x00000830 + lVar26) < 0) {
    uVar28 = *(ulonglong *)(&stack0x00000830 + lVar26) ^ 0x8000000000000000;
  }
  if (uVar28 == 3) {
    puVar11 = &stack0x00000840;
    if (cVar24 == '\0') goto LAB_1409179f5;
    *(undefined8 *)(&stack0x00001028 + lVar26) = *(undefined8 *)(&stack0x00000858 + lVar26);
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409179c3;
    pdb_140994f20();
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409179db;
    pub_1406abac0(*(byte **)(&stack0x00001028 + lVar26),0x140,8);
    uVar28 = *(ulonglong *)(&stack0x00000838 + lVar26);
    if (uVar28 == 0) goto LAB_1409179f5;
  }
  else {
    if (uVar28 != 4) goto LAB_1409179f5;
    *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917985;
    pdb_1404cc180(&stack0x00000830 + lVar26);
    uVar28 = *(ulonglong *)(&stack0x000008d0 + lVar26);
    puVar11 = &stack0x000008d8;
    if (((&stack0x00001004)[lVar26] & 0 < (longlong)uVar28) == 0) goto LAB_1409179f5;
  }
  pbVar31 = *(byte **)(puVar11 + lVar26);
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x1409179f5;
  pub_1406abac0(pbVar31,uVar28,1);
LAB_1409179f5:
  *(undefined8 *)((longlong)&uStack_48 + lVar26) = 0x140917a01;
  pdb_1409a2530(&stack0x00000818 + lVar26);
  return;
}

