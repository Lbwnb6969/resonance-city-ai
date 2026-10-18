// VA 0x1405fa460, PDB extent 12327 bytes
// tiny_glade::main
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::main
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 12327 */

void pdb_1405fa460(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  byte ******ppppppbVar2;
  code *pcVar3;
  ulonglong *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  byte ******ppppppbVar8;
  byte ******ppppppbVar9;
  byte ******ppppppbVar10;
  undefined4 uVar11;
  char cVar12;
  undefined1 uVar13;
  longlong lVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  byte *******pppppppbVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  byte bVar24;
  byte bVar25;
  ulonglong uVar26;
  undefined4 uStack_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined8 uStack_a48;
  byte *******pppppppbStack_a38;
  byte *******pppppppbStack_a30;
  byte *******pppppppbStack_a28;
  byte *******pppppppbStack_a20;
  byte *******pppppppbStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  byte ******ppppppbStack_9f8;
  byte ******ppppppbStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  byte *******pppppppbStack_9d8;
  byte *******pppppppbStack_9d0;
  byte *******pppppppbStack_9c8;
  byte ******ppppppbStack_9c0;
  byte ******ppppppbStack_9b8;
  byte ******ppppppbStack_9b0;
  byte ******ppppppbStack_9a8;
  byte ******ppppppbStack_9a0;
  byte ******ppppppbStack_998;
  byte *******pppppppbStack_990;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  byte *******pppppppbStack_978;
  byte *******pppppppbStack_970;
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined1 uStack_960;
  undefined1 uStack_95f;
  undefined1 uStack_95e;
  undefined1 uStack_95d;
  undefined4 uStack_95c;
  uint uStack_958;
  undefined4 uStack_954;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  int iStack_910;
  char cStack_8fb;
  undefined1 uStack_8fa;
  undefined4 uStack_8f0;
  uint uStack_8e8;
  ulonglong uStack_8e4;
  undefined2 uStack_8cc;
  undefined2 uStack_8b3;
  ulonglong uStack_8b0;
  byte *pbStack_8a8;
  undefined8 uStack_8a0;
  char cStack_898;
  undefined1 uStack_897;
  undefined1 uStack_896;
  undefined1 uStack_892;
  char cStack_85c;
  char cStack_85a;
  byte *******apppppppbStack_728 [2];
  char cStack_718;
  undefined8 uStack_710;
  ulonglong uStack_6f8;
  byte *pbStack_6f0;
  ulonglong uStack_6e0;
  byte *pbStack_6d8;
  undefined8 uStack_6d0;
  ulonglong uStack_6c8;
  byte *pbStack_6c0;
  undefined8 uStack_6b8;
  ulonglong uStack_6a8;
  byte *pbStack_6a0;
  ulonglong uStack_688;
  byte *pbStack_680;
  ulonglong uStack_668;
  byte *pbStack_660;
  ulonglong uStack_648;
  byte *pbStack_640;
  ulonglong uStack_628;
  byte *pbStack_620;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined8 uStack_5f8;
  undefined1 uStack_5ee;
  char cStack_5ea;
  char cStack_5e8;
  char cStack_5e7;
  char cStack_5e6;
  byte *******pppppppbStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  byte *******pppppppbStack_5b8;
  byte ******ppppppbStack_5b0;
  byte ******ppppppbStack_5a8;
  byte ******ppppppbStack_5a0;
  byte ******ppppppbStack_598;
  byte ******ppppppbStack_590;
  byte ******ppppppbStack_588;
  byte *******pppppppbStack_580;
  byte *******pppppppbStack_388;
  byte *******pppppppbStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  byte ******ppppppbStack_360;
  byte ******ppppppbStack_358;
  byte ******ppppppbStack_350;
  byte ******ppppppbStack_348;
  byte ******ppppppbStack_340;
  byte ******ppppppbStack_338;
  byte *******pppppppbStack_330;
  undefined4 uStack_328;
  undefined1 uStack_308;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  byte *******pppppppbStack_c8;
  code *pcStack_c0;
  byte ******ppppppbStack_b8;
  byte *******pppppppbStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  byte bStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  byte bStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  byte bStack_4d;
  undefined1 uStack_4c;
  byte bStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar11 = param_2;
  _DAT_143cb2bd0 = pdb_140f3c9d0();
  _DAT_143ca31f0 = uVar11;
  pdb_140de9fe0();
  pdb_1402f1e00(apppppppbStack_728);
  uStack_60 = 1;
  uStack_61 = 1;
  uStack_62 = 1;
  pdb_140f4d120(&pppppppbStack_388);
  pppppppbStack_88 = pppppppbStack_380;
  pdb_140f3e9e0(&pppppppbStack_5d8,pppppppbStack_380,uStack_378,&UNK_142f5fc1a,7);
  pppppppbVar15 = pppppppbStack_5d8;
  pppppppbStack_b0 = (byte *******)uStack_5d0;
  uStack_988 = (undefined4)uStack_5c8;
  uStack_984 = uStack_5c8._4_4_;
  uStack_980 = (undefined4)uStack_5c0;
  uStack_97c = uStack_5c0._4_4_;
  if (pppppppbStack_388 != (byte *******)0x0) {
    pub_1406abac0((byte *)pppppppbStack_88,(ulonglong)pppppppbStack_388,1);
  }
  pppppppbStack_88 = pppppppbVar15;
  if (SBORROW8(0,uStack_6e0)) {
    if (cStack_5ea != '\0') {
      pppppppbStack_5d8 = (byte *******)&UNK_142f757b7;
      uStack_5d0 = (code *)0x26;
      pppppppbStack_388 = (byte *******)&UNK_142f757dd;
      pppppppbStack_380 = (byte *******)0x1;
      bStack_4b = 1;
      uStack_4c = 1;
      bStack_4d = 1;
      uStack_4e = 1;
      lVar14 = pdb_140f52780(&UNK_142f757b7,0x26,&UNK_142f757dd,1);
      if (lVar14 != 0) {
        bStack_4b = 1;
        uStack_4c = 1;
        bStack_4d = 1;
        uStack_4e = 1;
        pdb_142d87720(&pppppppbStack_5d8,&pppppppbStack_388,lVar14);
        goto LAB_1405fbe7c;
      }
    }
    bStack_4b = 1;
    uStack_4c = 1;
    bStack_4d = 1;
    uStack_4e = 1;
    pdb_140a3d920(&pppppppbStack_5d8);
    if ((int)pppppppbStack_5d8 != 3) {
      uStack_378 = uStack_5c8;
      uStack_370 = uStack_5c0;
      pppppppbStack_388 = pppppppbStack_5d8;
      pppppppbStack_380 = (byte *******)uStack_5d0;
      pppppppbStack_120 = (byte *******)pdb_1405ff7a0;
      pppppppbStack_128 = (byte *******)&pppppppbStack_388;
      pdb_140f60760(&pppppppbStack_978,&UNK_142f757de,&pppppppbStack_128);
      pppppppbStack_128 = pppppppbStack_978;
      pppppppbStack_120 = pppppppbStack_970;
      pppppppbStack_118 = (byte *******)CONCAT44(uStack_964,uStack_968);
      pppppppbVar15 = (byte *******)pdb_142d877e0(&pppppppbStack_128);
      if (pppppppbStack_380 != (byte *******)0x0) {
        pub_1406abac0((byte *)uStack_378,(ulonglong)pppppppbStack_380,1);
      }
LAB_1405fab15:
      if (pppppppbStack_88 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_b0,(ulonglong)pppppppbStack_88,1);
      }
      goto LAB_1405fb4f8;
    }
    uStack_a8 = (undefined4)uStack_5d0;
    uStack_a4 = uStack_5d0._4_4_;
    uStack_a0 = (undefined4)uStack_5c8;
    uStack_9c = uStack_5c8._4_4_;
    uVar17 = uStack_710;
    if (cStack_718 == '\0') {
      uStack_53 = 1;
      bStack_54 = 1;
      uStack_55 = 1;
      uVar17 = pdb_140a3da40(&uStack_a8);
    }
    pbVar23 = (byte *)0x0;
    if (!SBORROW8(0,uStack_6c8)) {
      pbVar23 = pbStack_6c0;
    }
    uStack_53 = 1;
    bStack_54 = 1;
    uStack_55 = 1;
    pppppppbVar15 = (byte *******)pdb_140dc67e0(uVar17,pbVar23,uStack_6b8);
    if (pppppppbVar15 != (byte *******)0x0) {
LAB_1405fa677:
      plVar1 = (longlong *)CONCAT44(uStack_a4,uStack_a8);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          pdb_140cb1c10(&uStack_a8);
        }
        plVar1 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          bStack_4b = 1;
          uStack_4c = 1;
          bStack_4d = 1;
          uStack_4e = 1;
          pdb_140cb1c10(&uStack_a0);
        }
      }
      goto LAB_1405fab15;
    }
    if (cStack_5e6 != '\0') {
      uStack_53 = 1;
      bStack_54 = 1;
      uStack_55 = 1;
      pppppppbVar15 = (byte *******)pdb_1405fd490(0);
      if (pppppppbVar15 == (byte *******)0x0) {
        uStack_53 = 1;
        bStack_54 = 1;
        uStack_55 = 1;
        pdb_1400017e0();
        pppppppbVar15 = (byte *******)0x0;
      }
      goto LAB_1405fa677;
    }
    uStack_53 = 1;
    bStack_54 = 1;
    uStack_55 = 1;
    pdb_1402f22b0(&pppppppbStack_388,apppppppbStack_728);
    pppppppbVar15 = pppppppbStack_380;
    pppppppbVar16 = pppppppbStack_388;
    if (SBORROW8(0,(longlong)pppppppbStack_388)) goto LAB_1405fa677;
    pub_142e32760(&uStack_968,&uStack_378,0x118);
    pppppppbStack_978 = pppppppbVar16;
    pppppppbStack_970 = pppppppbVar15;
    if (CONCAT44(uStack_a4,uStack_a8) != 0) {
      uStack_4f = 1;
      bStack_50 = 1;
      uStack_51 = 1;
      uStack_52 = 1;
      puVar18 = (undefined8 *)pdb_1406d0830(&uStack_a8);
      pppppppbVar19 = (byte *******)pub_142e31f10();
      pppppppbVar15 = (byte *******)*puVar18;
      LOCK();
      ppppppbVar2 = *pppppppbVar15;
      *pppppppbVar15 = (byte ******)((longlong)*pppppppbVar15 + 1);
      UNLOCK();
      if (*pppppppbVar15 == (byte ******)0x0 ||
          SCARRY8((longlong)ppppppbVar2,1) != (longlong)*pppppppbVar15 < 0) goto LAB_1405fbe7c;
      pppppppbStack_388 = pppppppbVar15;
      pppppppbStack_380 = pppppppbVar19;
      cVar12 = pub_142e31e90(pppppppbVar19);
      if (cVar12 == '\0') {
        LOCK();
        *pppppppbStack_388 = (byte ******)((longlong)*pppppppbStack_388 + -1);
        UNLOCK();
        if (*pppppppbStack_388 == (byte ******)0x0) {
          uStack_4f = 1;
          bStack_50 = 1;
          uStack_51 = 1;
          uStack_52 = 1;
          pdb_140cb1c10(&pppppppbStack_388);
        }
      }
      else {
        LOCK();
        *pppppppbStack_388 = (byte ******)((longlong)*pppppppbStack_388 + -1);
        UNLOCK();
        if (*pppppppbStack_388 == (byte ******)0x0) {
          uStack_4f = 1;
          bStack_50 = 1;
          uStack_51 = 1;
          uStack_52 = 1;
          pdb_140cb1c10(&pppppppbStack_388);
        }
        if (cStack_85c == '\x06') {
          cStack_85c = '\x03';
        }
        if (cStack_85a == '\x06') {
          cStack_85a = '\x03';
        }
        if (uStack_8e8 == 0) {
          uStack_8b3 = 0x301;
          uStack_8f0 = 0;
          uStack_8cc = 0x100;
          uStack_8e4 = (ulonglong)_DAT_142e37844;
        }
      }
    }
    if ((uStack_8e8 < 2) && ((char)uStack_8b3 == '\x01')) {
      uStack_8b3 = CONCAT11(uStack_8b3._1_1_,2);
    }
    if (((uStack_8e8 < 3) && (cStack_8fb != '\0')) && (iStack_910 != 0)) {
      uStack_8fa = 1;
    }
    uStack_8e8 = 3;
    *_DAT_143ca4500 = uStack_892;
    if (cStack_898 == '\0') {
      pppppppbStack_128 = (byte *******)0xb;
      uStack_70 = (byte *)CONCAT44(uStack_70._4_4_,1);
    }
    else {
      pppppppbStack_388 = pppppppbStack_88;
      pppppppbStack_380 = pppppppbStack_b0;
      uStack_378 = (byte *******)CONCAT44(uStack_984,uStack_988);
      uStack_370 = (byte *******)CONCAT44(uStack_97c,uStack_980);
      uStack_368 = (byte *******)0x1388;
      ppppppbStack_360 = (byte ******)0xbb8;
      uStack_4f = 1;
      bStack_50 = 0;
      uStack_51 = 1;
      uStack_52 = 1;
      pdb_140492da0(&pppppppbStack_5d8,&pppppppbStack_388,uStack_897);
      pppppppbStack_128 = pppppppbStack_5d8;
      pppppppbStack_120 = (byte *******)uStack_5d0;
      pppppppbStack_118 = uStack_5c8;
      pppppppbStack_110 = uStack_5c0;
      uStack_108 = pppppppbStack_5b8;
      uStack_70 = (byte *)((ulonglong)uStack_70._4_4_ << 0x20);
    }
    uStack_56 = 1;
    uStack_57 = 1;
    uStack_5f._7_1_ = 1;
    uStack_5f._6_1_ = 1;
    uStack_5f._5_1_ = 1;
    pppppppbVar15 = (byte *******)pdb_1405fd490(1);
    puVar4 = _DAT_143ca8e90;
    if (pppppppbVar15 != (byte *******)0x0) {
      bVar25 = (byte)uStack_70;
      if (pppppppbStack_128 == (byte *******)0xa) {
LAB_1405fbd0c:
        uStack_4f = 1;
        uStack_51 = 1;
        uStack_52 = 1;
        bStack_50 = bVar25;
        pdb_1404c4c80(&pppppppbStack_120);
      }
      else if (pppppppbStack_128 != (byte *******)0xb) {
LAB_1405fbbf1:
        uStack_4f = 1;
        uStack_51 = 1;
        uStack_52 = 1;
        bStack_50 = bVar25;
        pdb_1405fec60(&pppppppbStack_128);
      }
LAB_1405fc0d7:
      uStack_53 = 1;
      uStack_55 = 1;
      bStack_54 = bVar25;
      pdb_1404c0c80(&pppppppbStack_978);
      if (CONCAT44(uStack_a4,uStack_a8) != 0) {
        bStack_4b = 1;
        uStack_4c = 1;
        uStack_4e = 1;
        bStack_4d = bVar25;
        pdb_1404cead0(&uStack_a8);
      }
      if (bVar25 != 0) goto LAB_1405fab15;
      goto LAB_1405fb4f8;
    }
    if (3 < *_DAT_143ca8e90) {
      pppppppbStack_5d8 = (byte *******)&UNK_142f75f28;
      uStack_5d0 = pdb_1402ed400;
      pppppppbStack_388 = (byte *******)&UNK_142f75822;
      pppppppbStack_380 = (byte *******)0xa;
      uStack_378 = (byte *******)&UNK_142f75822;
      uStack_370 = (byte *******)0xa;
      uStack_368 = (byte *******)&UNK_142f75f48;
      uStack_56 = 1;
      uStack_57 = 1;
      uStack_5f._7_1_ = 1;
      uStack_5f._6_1_ = 1;
      uStack_5f._5_1_ = 1;
      pdb_1400c9be0(&UNK_142f75f38,&pppppppbStack_5d8,4,&pppppppbStack_388);
    }
    if (pppppppbStack_128 == (byte *******)0xa) {
      pppppppbStack_98 = pppppppbStack_120;
      pppppppbStack_90 = pppppppbStack_118;
      pppppppbStack_80 = (byte *******)0x1;
      uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
LAB_1405fbe70:
      LOCK();
      ppppppbVar2 = *pppppppbStack_98;
      *pppppppbStack_98 = (byte ******)((longlong)*pppppppbStack_98 + 1);
      UNLOCK();
      if (*pppppppbStack_98 == (byte ******)0x0 ||
          SCARRY8((longlong)ppppppbVar2,1) != (longlong)*pppppppbStack_98 < 0) {
LAB_1405fbe7c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      LOCK();
      ppppppbVar2 = *pppppppbStack_90;
      *pppppppbStack_90 = (byte ******)((longlong)*pppppppbStack_90 + 1);
      UNLOCK();
      pppppppbVar15 = pppppppbStack_98;
      if (*pppppppbStack_90 == (byte ******)0x0 ||
          SCARRY8((longlong)ppppppbVar2,1) != (longlong)*pppppppbStack_90 < 0) goto LAB_1405fbe7c;
    }
    else if (pppppppbStack_128 == (byte *******)0xb) {
      pppppppbStack_98 = (byte *******)0x0;
      uStack_78 = CONCAT44(uStack_78._4_4_,1);
      pppppppbStack_80 = (byte *******)0x1;
      pppppppbVar15 = (byte *******)0x0;
    }
    else {
      pppppppbStack_5b8 = uStack_108;
      uStack_5c8 = pppppppbStack_118;
      uStack_5c0 = pppppppbStack_110;
      pppppppbStack_5d8 = pppppppbStack_128;
      uStack_5d0 = (code *)pppppppbStack_120;
      if (*puVar4 != 0) {
        pcStack_c0 = pdb_140494bc0;
        pppppppbStack_388 = (byte *******)&UNK_142f75822;
        pppppppbStack_380 = (byte *******)0xa;
        uStack_378 = (byte *******)&UNK_142f75822;
        uStack_370 = (byte *******)0xa;
        uStack_368 = (byte *******)&UNK_142f75f90;
        pppppppbStack_c8 = (byte *******)&pppppppbStack_5d8;
        pdb_1400c9be0(&UNK_142f75f60,&pppppppbStack_c8,1,&pppppppbStack_388);
      }
      pppppppbStack_98 = (byte *******)0x0;
      uStack_56 = 0;
      uStack_57 = 1;
      uStack_5f._7_1_ = 1;
      uStack_5f._6_1_ = 1;
      uStack_5f._5_1_ = 1;
      uVar20 = pdb_1405fec60(&pppppppbStack_5d8);
      uStack_78 = CONCAT44(uStack_78._4_4_,(int)CONCAT71((int7)((ulonglong)uVar20 >> 8),1));
      pppppppbStack_80 = (byte *******)0x0;
      if (pppppppbStack_98 != (byte *******)0x0) goto LAB_1405fbe70;
      pppppppbVar15 = (byte *******)0x0;
    }
    uStack_5f._4_1_ = 1;
    uStack_5f._3_1_ = 1;
    uStack_5f._2_1_ = 1;
    pdb_1400ec920(pppppppbVar15);
    uStack_5f._4_1_ = 1;
    uStack_5f._3_1_ = 1;
    uStack_5f._2_1_ = 1;
    pdb_1402f2e40(&pppppppbStack_978);
    if (SBORROW8(0,uStack_668)) {
      uStack_5f._4_1_ = 1;
      uStack_5f._3_1_ = 1;
      uStack_5f._2_1_ = 1;
      pdb_140576f10();
    }
    puVar22 = &uStack_a8;
    if (CONCAT44(uStack_a4,uStack_a8) == 0) {
      puVar22 = (undefined4 *)0x0;
    }
    pbVar23 = (byte *)0x0;
    if (!SBORROW8(0,uStack_8b0)) {
      pbVar23 = pbStack_8a8;
    }
    uStack_5f._4_1_ = 1;
    uStack_5f._3_1_ = 1;
    uStack_5f._2_1_ = 1;
    pdb_140004bf0(puVar22,pbVar23,uStack_8a0);
    *_DAT_143ca42c8 = uStack_896;
    if (cStack_5e7 != '\0') {
      uStack_5f._4_1_ = 1;
      uStack_5f._3_1_ = 1;
      uStack_5f._2_1_ = 1;
      pppppppbVar15 = (byte *******)pdb_1402b0cc0();
      if (pppppppbStack_98 != (byte *******)0x0) {
        uStack_56 = SUB81(pppppppbStack_80,0);
        uStack_57 = (undefined1)uStack_78;
        uStack_5f._7_1_ = 1;
        uStack_5f._6_1_ = 1;
        uStack_5f._5_1_ = 1;
        pdb_1404c4c80(&pppppppbStack_98);
      }
      bVar25 = (byte)uStack_70;
      if (pppppppbStack_128 == (byte *******)0xa) {
        if ((char)uStack_78 != '\0') goto LAB_1405fbd0c;
      }
      else if ((pppppppbStack_128 != (byte *******)0xb) && ((char)pppppppbStack_80 != '\0'))
      goto LAB_1405fbbf1;
      goto LAB_1405fc0d7;
    }
    if (cStack_5e8 == '\0') {
      if (!SBORROW8(0,CONCAT44(uStack_604,uStack_608))) {
        uStack_a48 = uStack_5f8;
        uStack_a58 = uStack_608;
        uStack_a54 = uStack_604;
        uStack_a50 = uStack_600;
        uStack_a4c = uStack_5fc;
        uStack_5f._4_1_ = 0;
        uStack_5f._3_1_ = 1;
        uStack_5f._2_1_ = 1;
        pdb_1405f9f40(&uStack_a58);
        uVar13 = 1;
        uVar26 = 0;
        goto LAB_1405fc174;
      }
      pub_142e32760(&pppppppbStack_5d8,&pppppppbStack_978,0x128);
      pub_142e32760(&pppppppbStack_388,apppppppbStack_728,0x150);
      uStack_5f._4_1_ = 0;
      uStack_5f._3_1_ = 0;
      uStack_5f._2_1_ = 0;
      pdb_14065d180(&pppppppbStack_5d8,&pppppppbStack_388,uVar17,CONCAT44(uStack_a4,uStack_a8),
                    CONCAT44(uStack_9c,uStack_a0),pppppppbStack_98._0_4_,pppppppbStack_90._0_4_);
      bVar5 = true;
      bVar6 = false;
      bVar25 = 0;
LAB_1405fc278:
      bVar24 = (byte)uStack_70;
    }
    else {
      pub_142e32760(&pppppppbStack_388,&pppppppbStack_978,0x128);
      uStack_5f._4_1_ = 1;
      uStack_5f._3_1_ = 0;
      uStack_5f._2_1_ = 1;
      pdb_140003e30(&pppppppbStack_388);
      uVar26 = CONCAT71((int7)((ulonglong)pppppppbVar16 >> 8),1);
      uVar13 = 0;
LAB_1405fc174:
      if (pppppppbStack_98 != (byte *******)0x0) {
        uStack_56 = SUB81(pppppppbStack_80,0);
        uStack_57 = (undefined1)uStack_78;
        uStack_5f._7_1_ = (undefined1)uVar26;
        uStack_5f._5_1_ = 1;
        uStack_5f._6_1_ = uVar13;
        pdb_1404c4c80(&pppppppbStack_98);
      }
      if (cStack_5e8 == '\0') {
        if ((-0x7fffffffffffffff < (longlong)uStack_940) && (uStack_940 != (byte ******)0x0)) {
          pub_1406abac0((byte *)uStack_938,(ulonglong)uStack_940,1);
        }
        uStack_78 = CONCAT44(uStack_78._4_4_,(int)uVar26);
        pdb_14049a0e0(&pppppppbStack_978);
        pdb_1404c99a0(&uStack_960);
        uVar26 = uStack_78 & 0xffffffff;
        if ((!SBORROW8(0,uStack_8b0)) && (uStack_8b0 != 0)) {
          pub_1406abac0(pbStack_8a8,uStack_8b0,1);
        }
      }
      bVar25 = (byte)uVar26;
      bVar6 = true;
      if (CONCAT44(uStack_a4,uStack_a8) == 0) {
        bVar5 = false;
        bVar6 = true;
        goto LAB_1405fc278;
      }
      uStack_4c = 1;
      bVar24 = (byte)uStack_70;
      uStack_4e = 1;
      bStack_4d = bVar24;
      bStack_4b = bVar25;
      pdb_1404cead0(&uStack_a8);
      bVar5 = false;
    }
    if ((bVar24 & pppppppbStack_88 != (byte *******)0x0) != 0) {
      pub_1406abac0((byte *)pppppppbStack_b0,(ulonglong)pppppppbStack_88,1);
    }
    if (bVar5) {
      return;
    }
    if (uStack_6f8 != 0) {
      pub_1406abac0(pbStack_6f0,uStack_6f8,1);
    }
    if ((!SBORROW8(0,uStack_6c8)) && (uStack_6c8 != 0)) {
      pub_1406abac0(pbStack_6c0,uStack_6c8,1);
    }
    if ((!SBORROW8(0,uStack_6a8)) && (uStack_6a8 != 0)) {
      pub_1406abac0(pbStack_6a0,uStack_6a8,1);
    }
    if ((!SBORROW8(0,uStack_688)) && (uStack_688 != 0)) {
      pub_1406abac0(pbStack_680,uStack_688,1);
    }
    if ((!SBORROW8(0,uStack_668)) && (uStack_668 != 0)) {
      pub_1406abac0(pbStack_660,uStack_668,1);
    }
    if ((!SBORROW8(0,uStack_648)) && (uStack_648 != 0)) {
      pub_1406abac0(pbStack_640,uStack_648,1);
    }
    if ((!SBORROW8(0,uStack_628)) && (uStack_628 != 0)) {
      pub_1406abac0(pbStack_620,uStack_628,1);
    }
    if (!bVar6) {
      return;
    }
    uVar26 = CONCAT44(uStack_604,uStack_608);
    if ((!SBORROW8(0,uVar26) & bVar25) != 1) {
      return;
    }
    pppppppbVar15 = (byte *******)0x0;
  }
  else {
    uStack_78 = uStack_6e0;
    uStack_70 = pbStack_6d8;
    uStack_948 = (byte ******)0x0;
    uStack_940 = (byte ******)0x0;
    pppppppbStack_978 = (byte *******)0x3;
    pppppppbStack_970 = (byte *******)0x0;
    uStack_968 = 8;
    uStack_964 = 0;
    uStack_960 = 0;
    uStack_95f = 0;
    uStack_95e = 0;
    uStack_95d = 0;
    uStack_95c = 0;
    uStack_958 = 0;
    uStack_954 = 0;
    uStack_950 = (byte ******)0x8;
    uStack_938 = (byte ******)0x8;
    uStack_930 = (byte ******)0x0;
    uStack_928 = (byte ******)0x1;
    uStack_920 = (byte *******)&UNK_142f761e8;
    uStack_63 = 1;
    uStack_368 = (byte *******)pdb_140f4e870();
    pppppppbStack_388 = (byte *******)0x6;
    pppppppbStack_380 = (byte *******)0x8000000000000000;
    uStack_378 = (byte *******)&UNK_142f764d0;
    uStack_370 = (byte *******)0x1;
    uStack_5c0 = (byte *******)
                 CONCAT44(uStack_95c,
                          CONCAT13(uStack_95d,CONCAT12(uStack_95e,CONCAT11(uStack_95f,uStack_960))))
    ;
    if (uStack_5c0 == pppppppbStack_970) {
      pdb_142d7e9f0(&pppppppbStack_970);
    }
    ppppppbVar10 = uStack_928;
    ppppppbVar9 = uStack_940;
    ppppppbVar8 = uStack_948;
    ppppppbVar2 = uStack_950;
    uVar11 = uStack_954;
    uVar7 = uStack_958;
    pppppppbVar16 = pppppppbStack_970;
    pppppppbVar15 = pppppppbStack_978;
    lVar14 = CONCAT44(uStack_964,uStack_968);
    lVar21 = (longlong)uStack_5c0 * 0x60;
    puVar18 = (undefined8 *)(lVar14 + 0x50 + lVar21);
    *puVar18 = ppppppbStack_338;
    puVar18[1] = pppppppbStack_330;
    plVar1 = (longlong *)(lVar14 + 0x40 + lVar21);
    *plVar1 = (longlong)ppppppbStack_348;
    plVar1[1] = (longlong)ppppppbStack_340;
    plVar1 = (longlong *)(lVar14 + 0x30 + lVar21);
    *plVar1 = (longlong)ppppppbStack_358;
    plVar1[1] = (longlong)ppppppbStack_350;
    puVar18 = (undefined8 *)(lVar14 + 0x20 + lVar21);
    *puVar18 = uStack_368;
    puVar18[1] = ppppppbStack_360;
    puVar18 = (undefined8 *)(lVar14 + 0x10 + lVar21);
    *puVar18 = uStack_378;
    puVar18[1] = uStack_370;
    *(undefined8 *)(lVar14 + lVar21) = pppppppbStack_388;
    ((undefined8 *)(lVar14 + lVar21))[1] = pppppppbStack_380;
    uStack_5c0 = (byte *******)((longlong)uStack_5c0 + 1);
    ppppppbStack_588 = uStack_928;
    pppppppbStack_580 = uStack_920;
    pppppppbStack_5b8 = (byte *******)CONCAT44(uStack_954,uStack_958);
    ppppppbStack_598 = uStack_938;
    ppppppbStack_590 = uStack_930;
    ppppppbStack_5a8 = uStack_948;
    ppppppbStack_5a0 = uStack_940;
    ppppppbStack_5b0 = uStack_950;
    uStack_5c8 = (byte *******)CONCAT44(uStack_964,uStack_968);
    pppppppbStack_5d8 = pppppppbStack_978;
    uStack_5d0 = (code *)pppppppbStack_970;
    pppppppbStack_970 = (byte *******)0x0;
    uStack_968 = 8;
    uStack_964 = 0;
    uStack_960 = 0;
    uStack_95f = 0;
    uStack_95e = 0;
    uStack_95d = 0;
    uStack_95c = 0;
    uStack_958 = 0;
    uStack_954 = 0;
    pppppppbStack_978 = (byte *******)0x5;
    uStack_950 = (byte ******)0x8;
    uStack_948 = (byte ******)0x0;
    uStack_940 = (byte ******)0x0;
    uStack_938 = (byte ******)0x8;
    uStack_930 = (byte ******)0x0;
    uStack_928 = (byte ******)0x0;
    ppppppbStack_338 = ppppppbVar10;
    pppppppbStack_330 = uStack_920;
    ppppppbStack_358 = ppppppbVar8;
    ppppppbStack_350 = ppppppbVar9;
    uStack_368 = (byte *******)CONCAT44(uVar11,uVar7);
    ppppppbStack_360 = ppppppbVar2;
    pppppppbStack_388 = pppppppbVar15;
    pppppppbStack_380 = pppppppbVar16;
    uStack_378 = uStack_5c8;
    uStack_370 = uStack_5c0;
    ppppppbStack_348 = ppppppbStack_598;
    ppppppbStack_340 = ppppppbStack_590;
    pdb_142d7e9f0(&pppppppbStack_970);
    puVar4 = (ulonglong *)CONCAT44(uStack_964,uStack_968);
    puVar4[10] = (ulonglong)ppppppbStack_588;
    puVar4[0xb] = (ulonglong)pppppppbStack_580;
    puVar4[8] = (ulonglong)ppppppbStack_598;
    puVar4[9] = (ulonglong)ppppppbStack_590;
    puVar4[6] = (ulonglong)ppppppbStack_5a8;
    puVar4[7] = (ulonglong)ppppppbStack_5a0;
    puVar4[4] = (ulonglong)pppppppbStack_5b8;
    puVar4[5] = (ulonglong)ppppppbStack_5b0;
    puVar4[2] = (ulonglong)uStack_5c8;
    puVar4[3] = (ulonglong)uStack_5c0;
    *puVar4 = (ulonglong)pppppppbStack_5d8;
    puVar4[1] = (ulonglong)uStack_5d0;
    uStack_960 = 1;
    uStack_95f = 0;
    uStack_95e = 0;
    uStack_95d = 0;
    uStack_95c = 0;
    pppppppbStack_128 = pppppppbStack_978;
    pppppppbStack_120 = pppppppbStack_970;
    uStack_108 = (byte *******)CONCAT44(uStack_954,uStack_958);
    uStack_100 = (undefined4)uStack_950;
    uStack_fc = uStack_950._4_4_;
    uStack_f8 = (undefined4)uStack_948;
    uStack_f4 = uStack_948._4_4_;
    uStack_f0 = (undefined4)uStack_940;
    uStack_ec = uStack_940._4_4_;
    uStack_e8 = (undefined4)uStack_938;
    uStack_e4 = uStack_938._4_4_;
    uStack_e0 = (undefined4)uStack_930;
    uStack_dc = uStack_930._4_4_;
    uStack_d8 = (undefined4)uStack_928;
    uStack_d4 = uStack_928._4_4_;
    uStack_d0 = (undefined4)uStack_920;
    uStack_cc = uStack_920._4_4_;
    pppppppbStack_118 = (byte *******)CONCAT44(uStack_964,uStack_968);
    pppppppbStack_110 = (byte *******)0x1;
    uStack_49 = 1;
    uStack_4a = 1;
    pdb_140dc7240(&pppppppbStack_5d8);
    pppppppbVar15 = uStack_5c8;
    if (SBORROW8(0,(longlong)pppppppbStack_5d8)) {
      pppppppbStack_978 = (byte *******)&UNK_142f7582c;
      pppppppbStack_970 = (byte *******)0x13;
      uStack_968 = SUB84(uStack_5d0,0);
      uStack_964 = (undefined4)((ulonglong)uStack_5d0 >> 0x20);
      pppppppbStack_388 = (byte *******)0x3;
      uStack_49 = 1;
      uStack_4a = 1;
      pppppppbVar15 = (byte *******)pdb_142d88150(&pppppppbStack_978,&pppppppbStack_388);
LAB_1405faf72:
      pppppppbStack_380 = (byte *******)pdb_140f36c20;
      pppppppbStack_5d8 = pppppppbVar15;
      pppppppbStack_388 = (byte *******)&pppppppbStack_5d8;
      pdb_140f4e8b0(&UNK_142f75e28,&pppppppbStack_388);
      pppppppbStack_a38 = pppppppbStack_128;
      pppppppbStack_a30 = pppppppbStack_120;
      pppppppbStack_a28 = pppppppbStack_118;
      pppppppbStack_a20 = pppppppbStack_110;
      pppppppbStack_a18 = uStack_108;
      uStack_a10 = (byte ******)CONCAT44(uStack_fc,uStack_100);
      uStack_a08 = (byte ******)CONCAT44(uStack_f4,uStack_f8);
      uStack_a00 = (byte ******)CONCAT44(uStack_ec,uStack_f0);
      ppppppbStack_9f8 = (byte ******)CONCAT44(uStack_e4,uStack_e8);
      ppppppbStack_9f0 = (byte ******)CONCAT44(uStack_dc,uStack_e0);
      uStack_9e8 = (byte ******)CONCAT44(uStack_d4,uStack_d8);
      uStack_9e0 = (byte *******)CONCAT44(uStack_cc,uStack_d0);
      uStack_49 = 0;
      uStack_4a = 1;
      pdb_140f36c40(&pppppppbStack_5d8);
    }
    else {
      ppppppbStack_b8 = (byte ******)pppppppbStack_5d8;
      pppppppbStack_80 = (byte *******)uStack_5d0;
      cVar12 = pdb_140f3ea80(uStack_5d0,uStack_5c8);
      if (cVar12 == '\0') {
        pppppppbStack_388 = (byte *******)CONCAT71(pppppppbStack_388._1_7_,1);
        pppppppbVar16 =
             (byte *******)pdb_140f46c40(&pppppppbStack_388,pppppppbStack_80,pppppppbVar15);
        if (pppppppbVar16 == (byte *******)0x0) goto LAB_1405fac11;
        uStack_65 = 1;
        pppppppbStack_978 = pppppppbVar16;
        pdb_140f3f5b0(&pppppppbStack_388);
        pppppppbStack_5b8 = uStack_368;
        ppppppbStack_5b0 = ppppppbStack_360;
        uStack_5c8 = uStack_378;
        uStack_5c0 = uStack_370;
        pppppppbStack_5d8 = pppppppbStack_388;
        uStack_5d0 = (code *)pppppppbStack_380;
        pppppppbStack_388 = (byte *******)&UNK_142f7583f;
        pppppppbStack_380 = (byte *******)0x20;
        uStack_65 = 0;
        uStack_378 = pppppppbVar16;
        pppppppbVar15 = (byte *******)pdb_142d88850(&pppppppbStack_388,&pppppppbStack_5d8);
LAB_1405fad52:
        if (ppppppbStack_b8 != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_80,(ulonglong)ppppppbStack_b8,1);
        }
        goto LAB_1405faf72;
      }
LAB_1405fac11:
      pppppppbStack_978 = (byte *******)((ulonglong)pppppppbStack_978 & 0xffffffff00000000);
      pppppppbStack_970 = (byte *******)0x0;
      uStack_968 = 7;
      uStack_964 = 0;
      uStack_960 = 0;
      uStack_95e = 0;
      uStack_958 = uStack_958 & 0xffffff00;
      uStack_95f = 1;
      uStack_95c = 1;
      uStack_95d = 1;
      pdb_140f3e9e0(&pppppppbStack_388,pppppppbStack_80,pppppppbVar15,&UNK_142f7585f,0x16);
      pppppppbStack_130 = pppppppbStack_380;
      pppppppbVar15 = pppppppbStack_380;
      lVar14 = pdb_140f4a2a0(&pppppppbStack_978,pppppppbStack_380,uStack_378);
      if (pppppppbStack_388 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_130,(ulonglong)pppppppbStack_388,1);
      }
      if (lVar14 == 1) {
        uStack_66 = 1;
        pppppppbStack_c8 = pppppppbVar15;
        pdb_140f3f5b0(&pppppppbStack_388);
        pppppppbStack_5b8 = uStack_368;
        ppppppbStack_5b0 = ppppppbStack_360;
        uStack_5c8 = uStack_378;
        uStack_5c0 = uStack_370;
        pppppppbStack_5d8 = pppppppbStack_388;
        uStack_5d0 = (code *)pppppppbStack_380;
        pppppppbStack_388 = (byte *******)&UNK_142f75875;
        pppppppbStack_380 = (byte *******)0x12;
        uStack_66 = 0;
        uStack_378 = pppppppbVar15;
        pppppppbVar15 = (byte *******)pdb_142d88850(&pppppppbStack_388,&pppppppbStack_5d8);
        goto LAB_1405fad52;
      }
      ppppppbStack_5a8 = (byte ******)0x0;
      ppppppbStack_5a0 = (byte ******)0x0;
      pppppppbStack_5d8 = (byte *******)0x4;
      uStack_5d0 = (code *)0x0;
      uStack_5c8 = (byte *******)0x8;
      uStack_5c0 = (byte *******)0x0;
      pppppppbStack_5b8 = (byte *******)0x0;
      ppppppbStack_5b0 = (byte ******)0x8;
      ppppppbStack_598 = (byte ******)0x8;
      ppppppbStack_590 = (byte ******)0x0;
      ppppppbStack_588 = (byte ******)0x1;
      pppppppbStack_580 = (byte *******)&UNK_142f76188;
      pppppppbStack_388 = (byte *******)0x8;
      pppppppbStack_380 = (byte *******)0x8000000000000000;
      uStack_378 = (byte *******)&UNK_142f764d0;
      uStack_370 = (byte *******)0x1;
      uStack_368 = pppppppbVar15;
      pdb_142d7e9f0(&uStack_5d0);
      pppppppbVar15 = (byte *******)uStack_5d0;
      pppppppbVar16 = pppppppbStack_5d8;
      uStack_5c8[10] = ppppppbStack_338;
      uStack_5c8[0xb] = (byte ******)pppppppbStack_330;
      uStack_5c8[8] = ppppppbStack_348;
      uStack_5c8[9] = ppppppbStack_340;
      uStack_5c8[6] = ppppppbStack_358;
      uStack_5c8[7] = ppppppbStack_350;
      uStack_5c8[4] = (byte ******)uStack_368;
      uStack_5c8[5] = ppppppbStack_360;
      uStack_5c8[2] = (byte ******)uStack_378;
      uStack_5c8[3] = (byte ******)uStack_370;
      *uStack_5c8 = (byte ******)pppppppbStack_388;
      uStack_5c8[1] = (byte ******)pppppppbStack_380;
      uStack_5c0 = (byte *******)0x1;
      pppppppbStack_9d8 = uStack_5c8;
      pppppppbStack_9d0 = (byte *******)0x1;
      pppppppbStack_9c8 = pppppppbStack_5b8;
      ppppppbStack_9c0 = ppppppbStack_5b0;
      ppppppbStack_9b8 = ppppppbStack_5a8;
      ppppppbStack_9b0 = ppppppbStack_5a0;
      ppppppbStack_9a8 = ppppppbStack_598;
      ppppppbStack_9a0 = ppppppbStack_590;
      ppppppbStack_998 = ppppppbStack_588;
      pppppppbStack_990 = pppppppbStack_580;
      if (ppppppbStack_b8 != (byte ******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_80,(ulonglong)ppppppbStack_b8,1);
      }
      pppppppbVar19 = pppppppbStack_110;
      if (pppppppbVar16 == (byte *******)0x6) goto LAB_1405faf72;
      ppppppbStack_588 = (byte ******)CONCAT44(uStack_d4,uStack_d8);
      pppppppbStack_580 = (byte *******)CONCAT44(uStack_cc,uStack_d0);
      ppppppbStack_598 = (byte ******)CONCAT44(uStack_e4,uStack_e8);
      ppppppbStack_590 = (byte ******)CONCAT44(uStack_dc,uStack_e0);
      ppppppbStack_5b0 = (byte ******)CONCAT44(uStack_fc,uStack_100);
      ppppppbStack_5a8 = (byte ******)CONCAT44(uStack_f4,uStack_f8);
      ppppppbStack_5a0 = (byte ******)CONCAT44(uStack_ec,uStack_f0);
      pppppppbStack_5b8 = uStack_108;
      uStack_5c8 = pppppppbStack_118;
      uStack_5c0 = pppppppbStack_110;
      pppppppbStack_5d8 = pppppppbStack_128;
      uStack_5d0 = (code *)pppppppbStack_120;
      pppppppbStack_388 = pppppppbVar16;
      pppppppbStack_380 = pppppppbVar15;
      uStack_378 = pppppppbStack_9d8;
      uStack_370 = pppppppbStack_9d0;
      uStack_368 = pppppppbStack_9c8;
      ppppppbStack_360 = ppppppbStack_9c0;
      ppppppbStack_358 = ppppppbStack_9b8;
      ppppppbStack_350 = ppppppbStack_9b0;
      ppppppbStack_348 = ppppppbStack_9a8;
      ppppppbStack_340 = ppppppbStack_9a0;
      ppppppbStack_338 = ppppppbStack_998;
      pppppppbStack_330 = pppppppbStack_990;
      if (pppppppbStack_110 == pppppppbStack_120) {
        pdb_142d7e9f0(&uStack_5d0);
      }
      uStack_5c8[(longlong)pppppppbVar19 * 0xc] = (byte ******)pppppppbVar16;
      uStack_5c8[(longlong)pppppppbVar19 * 0xc + 1] = (byte ******)pppppppbVar15;
      uStack_5c8[(longlong)pppppppbVar19 * 0xc + 2] = (byte ******)pppppppbStack_9d8;
      (uStack_5c8 + (longlong)pppppppbVar19 * 0xc + 2)[1] = (byte ******)pppppppbStack_9d0;
      uStack_5c8[(longlong)pppppppbVar19 * 0xc + 4] = (byte ******)pppppppbStack_9c8;
      (uStack_5c8 + (longlong)pppppppbVar19 * 0xc + 4)[1] = ppppppbStack_9c0;
      uStack_5c8[(longlong)pppppppbVar19 * 0xc + 6] = ppppppbStack_9b8;
      (uStack_5c8 + (longlong)pppppppbVar19 * 0xc + 6)[1] = ppppppbStack_9b0;
      uStack_5c8[(longlong)pppppppbVar19 * 0xc + 8] = ppppppbStack_9a8;
      (uStack_5c8 + (longlong)pppppppbVar19 * 0xc + 8)[1] = ppppppbStack_9a0;
      uStack_5c8[(longlong)pppppppbVar19 * 0xc + 10] = ppppppbStack_998;
      (uStack_5c8 + (longlong)pppppppbVar19 * 0xc + 10)[1] = (byte ******)pppppppbStack_990;
      pppppppbStack_a20 = (byte *******)((longlong)pppppppbVar19 + 1);
      uStack_9e8 = ppppppbStack_588;
      uStack_9e0 = pppppppbStack_580;
      pppppppbStack_a18 = pppppppbStack_5b8;
      uStack_a10 = ppppppbStack_5b0;
      uStack_a08 = ppppppbStack_5a8;
      uStack_a00 = ppppppbStack_5a0;
      ppppppbStack_9f8 = ppppppbStack_598;
      ppppppbStack_9f0 = ppppppbStack_590;
      pppppppbStack_a38 = pppppppbStack_5d8;
      pppppppbStack_a30 = (byte *******)uStack_5d0;
      pppppppbStack_a28 = uStack_5c8;
      uStack_5c0 = pppppppbStack_a20;
    }
    uStack_49 = 0;
    uStack_4a = 1;
    cVar12 = pdb_14071fb70(&pppppppbStack_a38);
    if (cVar12 != '\0') {
      pppppppbStack_388 = (byte *******)&uStack_5f;
      pppppppbStack_380 = (byte *******)pdb_1405ff5d0;
      uStack_49 = 0;
      uStack_4a = 1;
      pdb_140f4e8b0(&UNK_142f75e61,&pppppppbStack_388);
    }
    puVar4 = _DAT_143ca8e90;
    if (2 < *_DAT_143ca8e90) {
      pppppppbStack_388 = (byte *******)0x0;
      pppppppbStack_380 = (byte *******)&UNK_142f75822;
      uStack_378 = (byte *******)0xa;
      uStack_370 = (byte *******)0x0;
      uStack_368 = (byte *******)&UNK_142f75766;
      ppppppbStack_360 = (byte ******)0x1d;
      ppppppbStack_358 = (byte ******)0x3;
      ppppppbStack_350 = (byte ******)&UNK_142f75822;
      ppppppbStack_348 = (byte ******)0xa;
      ppppppbStack_340 = (byte ******)0x9100000001;
      ppppppbStack_338 = (byte ******)&UNK_142f75e93;
      pppppppbStack_330 = (byte *******)0x45;
      uStack_49 = 0;
      uStack_4a = 1;
      pdb_140f332f0(&uStack_5f,&pppppppbStack_388);
    }
    uStack_49 = 0;
    uStack_4a = 1;
    pppppppbStack_98 = (byte *******)pdb_140618230();
    uStack_5c8 = (byte *******)CONCAT44(uStack_984,uStack_988);
    uStack_5c0 = (byte *******)CONCAT44(uStack_97c,uStack_980);
    pppppppbStack_5d8 = pppppppbStack_88;
    uStack_5d0 = (code *)pppppppbStack_b0;
    pdb_14036acc0(&pppppppbStack_388,uStack_70,uStack_6d0,&pppppppbStack_5d8,5000);
    if (uStack_78 != 0) {
      pub_1406abac0(uStack_70,uStack_78,1);
    }
    if (pppppppbStack_388 == (byte *******)0x8000000000000001) {
      uStack_958 = (uint)ppppppbStack_360;
      uStack_954 = (undefined4)((ulonglong)ppppppbStack_360 >> 0x20);
      uStack_968 = (undefined4)uStack_370;
      uStack_964 = uStack_370._4_4_;
      uStack_960 = SUB81(uStack_368,0);
      uStack_95f = (undefined1)((ulonglong)uStack_368 >> 8);
      uStack_95e = (undefined1)((ulonglong)uStack_368 >> 0x10);
      uStack_95d = (undefined1)((ulonglong)uStack_368 >> 0x18);
      uStack_95c = uStack_368._4_4_;
      pppppppbStack_978 = pppppppbStack_380;
      pppppppbStack_970 = uStack_378;
      if (*puVar4 != 0) {
        pppppppbStack_c8 = (byte *******)&pppppppbStack_978;
        pcStack_c0 = pdb_1405ff6b0;
        pppppppbStack_5d8 = (byte *******)0x0;
        uStack_5d0 = (code *)&UNK_142f75822;
        uStack_5c8 = (byte *******)0xa;
        uStack_5c0 = (byte *******)0x0;
        pppppppbStack_5b8 = (byte *******)&UNK_142f75766;
        ppppppbStack_5b0 = (byte ******)0x1d;
        ppppppbStack_5a8 = (byte ******)0x1;
        ppppppbStack_5a0 = (byte ******)&UNK_142f75822;
        ppppppbStack_598 = (byte ******)0xa;
        ppppppbStack_590 = (byte ******)0xa700000001;
        ppppppbStack_588 = (byte ******)&UNK_142f75ee8;
        pppppppbStack_580 = (byte *******)&pppppppbStack_c8;
        pdb_140f332f0(&uStack_5f,&pppppppbStack_5d8);
      }
      pdb_1405fec60(&pppppppbStack_978);
    }
    else if (SBORROW8(0,(longlong)pppppppbStack_388)) {
      if (2 < *puVar4) {
        pppppppbStack_5d8 = (byte *******)0x0;
        uStack_5d0 = (code *)&UNK_142f75822;
        uStack_5c8 = (byte *******)0xa;
        uStack_5c0 = (byte *******)0x0;
        pppppppbStack_5b8 = (byte *******)&UNK_142f75766;
        ppppppbStack_5b0 = (byte ******)0x1d;
        ppppppbStack_5a8 = (byte ******)0x3;
        ppppppbStack_5a0 = (byte ******)&UNK_142f75822;
        ppppppbStack_598 = (byte ******)0xa;
        ppppppbStack_590 = (byte ******)0xa300000001;
        ppppppbStack_588 = (byte ******)&UNK_142f75ecd;
        pppppppbStack_580 = (byte *******)0x37;
        pdb_140f332f0(&uStack_5f,&pppppppbStack_5d8);
      }
    }
    else {
      pppppppbStack_978 = pppppppbStack_388;
      pub_142e32760(&pppppppbStack_970,&pppppppbStack_380,0x240);
      if (2 < *puVar4) {
        pppppppbStack_5d8 = (byte *******)0x0;
        uStack_5d0 = (code *)&UNK_142f75822;
        uStack_5c8 = (byte *******)0xa;
        uStack_5c0 = (byte *******)0x0;
        pppppppbStack_5b8 = (byte *******)&UNK_142f75766;
        ppppppbStack_5b0 = (byte ******)0x1d;
        ppppppbStack_5a8 = (byte ******)0x3;
        ppppppbStack_5a0 = (byte ******)&UNK_142f75822;
        ppppppbStack_598 = (byte ******)0xa;
        ppppppbStack_590 = (byte ******)0x9800000001;
        ppppppbStack_588 = (byte ******)&UNK_142f75eb5;
        pppppppbStack_580 = (byte *******)0x31;
        uStack_64 = 1;
        pdb_140f332f0(&uStack_5f,&pppppppbStack_5d8);
      }
      pub_142e32760(&pppppppbStack_5d8,&pppppppbStack_978,0x248);
      uStack_64 = 0;
      pdb_140311710(&pppppppbStack_5d8,uStack_140,uStack_13f,uStack_5ee);
      uStack_64 = 0;
      pdb_1407113b0(pppppppbStack_98 + 2,0x1e,0);
    }
    pdb_140702980(&pppppppbStack_98);
    LOCK();
    *pppppppbStack_98 = (byte ******)((longlong)*pppppppbStack_98 + -1);
    UNLOCK();
    if (*pppppppbStack_98 == (byte ******)0x0) {
      uStack_49 = 0;
      uStack_4a = 0;
      pdb_1407150b0(&pppppppbStack_98);
    }
    pppppppbVar15 = (byte *******)0x0;
LAB_1405fb4f8:
    if (uStack_6f8 != 0) {
      pub_1406abac0(pbStack_6f0,uStack_6f8,1);
    }
    if ((!SBORROW8(0,uStack_6c8)) && (uStack_6c8 != 0)) {
      pub_1406abac0(pbStack_6c0,uStack_6c8,1);
    }
    if ((!SBORROW8(0,uStack_6a8)) && (uStack_6a8 != 0)) {
      pub_1406abac0(pbStack_6a0,uStack_6a8,1);
    }
    if ((!SBORROW8(0,uStack_688)) && (uStack_688 != 0)) {
      pub_1406abac0(pbStack_680,uStack_688,1);
    }
    if ((!SBORROW8(0,uStack_668)) && (uStack_668 != 0)) {
      pub_1406abac0(pbStack_660,uStack_668,1);
    }
    if ((!SBORROW8(0,uStack_648)) && (uStack_648 != 0)) {
      pub_1406abac0(pbStack_640,uStack_648,1);
    }
    if ((!SBORROW8(0,uStack_628)) && (uStack_628 != 0)) {
      pub_1406abac0(pbStack_620,uStack_628,1);
    }
    uVar26 = CONCAT44(uStack_604,uStack_608);
    if (SBORROW8(0,uVar26)) goto LAB_1405fb60e;
  }
  if (uVar26 != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_5fc,uStack_600),uVar26,1);
  }
LAB_1405fb60e:
  if (pppppppbVar15 != (byte *******)0x0) {
    pppppppbStack_380 = (byte *******)pdb_140f36c20;
    apppppppbStack_728[0] = pppppppbVar15;
    pppppppbStack_388 = (byte *******)apppppppbStack_728;
    pdb_140f4e8b0(&UNK_142f75892,&pppppppbStack_388);
    uStack_378 = (byte *******)0x0;
    uStack_370 = (byte *******)0x0;
    pppppppbStack_388 = (byte *******)0x0;
    pppppppbStack_380 = (byte *******)0x1;
    uStack_368 = (byte *******)0x1;
    ppppppbStack_360 = (byte ******)0x0;
    ppppppbStack_358 = (byte ******)0x8000000000000000;
    uStack_328 = 0xd;
    uStack_308 = 2;
    pdb_140cae6e0(&pppppppbStack_5d8,&pppppppbStack_388,&UNK_142f75896,0x10);
    pppppppbStack_970 = (byte *******)pdb_140f36c20;
    pppppppbStack_978 = (byte *******)apppppppbStack_728;
    pdb_140f60760(&pppppppbStack_388,&UNK_142f758a6,&pppppppbStack_978);
    pppppppbStack_88 = pppppppbStack_388;
    pppppppbStack_b0 = pppppppbStack_380;
    pdb_140cae550(&pppppppbStack_388,&pppppppbStack_5d8,pppppppbStack_380,uStack_378);
    pdb_140cae650(&pppppppbStack_388);
    if (pppppppbStack_88 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_b0,(ulonglong)pppppppbStack_88,1);
    }
    pdb_140f36c40(apppppppbStack_728);
  }
  return;
}

