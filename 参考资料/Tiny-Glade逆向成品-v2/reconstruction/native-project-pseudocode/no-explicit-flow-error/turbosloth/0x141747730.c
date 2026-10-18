// VA 0x141747730, PDB extent 3969 bytes
// turbosloth::asset::asset_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::asset::asset_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 3969 */

ulonglong pdb_141747730(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulonglong uVar38;
  ulonglong uVar39;
  undefined1 (*pauVar40) [16];
  ulonglong uVar41;
  uint uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  ulonglong *puVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  ulonglong uVar61;
  ulonglong uVar64;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  ulonglong uVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  ulonglong uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong *puStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_108 = 0;
  puStack_100 = (ulonglong *)0x1;
  uStack_f8 = 0;
  if (param_2 == 0) {
    uVar44 = 0;
  }
  else {
    pdb_142d7f1b0(&uStack_108,0,param_2,1,1);
    uVar44 = uStack_f8;
    puVar47 = puStack_100;
    pub_142e32760((longlong)puStack_100 + uStack_f8,param_1);
    uVar44 = uVar44 + param_2;
    if (uVar44 != uStack_108) goto LAB_1417477db;
  }
  uStack_f8 = uVar44;
  pdb_142dc7d20(&uStack_108);
  puVar47 = puStack_100;
LAB_1417477db:
  *(undefined1 *)((longlong)puVar47 + uVar44) = 0;
  uStack_f8 = uVar44 + 1;
  if (uStack_108 - uStack_f8 < 8) {
    pdb_142d7f1b0(&uStack_108,uStack_f8,8,1,1);
  }
  *(undefined8 *)((longlong)puStack_100 + uStack_f8) = param_3;
  uStack_f8 = uStack_f8 + 8;
  uVar44 = uStack_f8;
  if (uStack_108 - uStack_f8 < 0x10) {
    pdb_142d7f1b0(&uStack_108,uStack_f8,0x10,1,1);
    uVar44 = uStack_f8;
  }
  puVar47 = puStack_100;
  *(undefined8 *)((longlong)puStack_100 + uVar44) = param_4;
  *(undefined8 *)((longlong)puStack_100 + uVar44 + 8) = param_5;
  uVar41 = uVar44 + 0x10;
  uStack_f8 = uVar41;
  if (uVar44 < 0xe1) {
    if (uVar44 < 0x71) {
      if (uVar44 == 0) {
        uVar44 = puStack_100[1] ^ 0xc202797692d63d58;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *puStack_100 ^ puStack_100[1] ^ 0x59973f0033362349;
        uVar44 = (uVar44 & 0xffffffff00000000) + SUB168(auVar10 * ZEXT816(0x9e3779b185ebca87),8) +
                 (uVar44 & 0xffffffff) * 0x85ebca77;
        uVar44 = (SUB168(auVar10 * ZEXT816(0x9e3779b185ebca87),0) + 0x3c0000000000000U ^
                 (uVar44 >> 0x38 | (uVar44 & 0xff000000000000) >> 0x28 |
                  (uVar44 & 0xff0000000000) >> 0x18 | (uVar44 & 0xff00000000) >> 8 |
                  (uVar44 & 0xff000000) << 8 | (uVar44 & 0xff0000) << 0x18 |
                  (uVar44 & 0xff00) << 0x28 | uVar44 << 0x38)) * -0x3d4d51c2d82b14b1;
        uVar44 = (uVar44 >> 0x25 ^ uVar44) * 0x165667919e3779f9;
        uVar44 = uVar44 >> 0x20 ^ uVar44;
      }
      else {
        uVar39 = uVar41 * -0x61c8864e7a143579;
        uStack_110 = 0;
        uVar41 = uVar41 >> 4;
        uVar46 = (uint)uVar44 & 0xf;
        uStack_118 = uVar39;
        if (uVar44 < 0x11) {
          uVar44 = 0;
        }
        else {
          if (uVar44 < 0x31) {
            uVar44 = 0;
          }
          else {
            if (0x50 < uVar44) {
              pdb_141748890(&uStack_118,puStack_100 + 6,
                            (longlong)puStack_100 + uVar41 * 0x10 + (ulonglong)uVar46 + -0x40,
                            &UNK_14332f64e);
            }
            uVar44 = *(ulonglong *)((longlong)puVar47 + uVar41 * 0x10 + ((ulonglong)uVar46 - 0x30));
            auVar15._8_8_ = 0;
            auVar15._0_8_ = puVar47[5] ^ 0xa32e531b8b65d088;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = puVar47[4] ^ 0xcb00c391bb52283c;
            uVar39 = *(ulonglong *)((longlong)puVar47 + uVar41 * 0x10 + ((ulonglong)uVar46 - 0x28));
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar39 ^ 0xd8acdea946ef1938;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar44 ^ 0x4ef90da297486471;
            uVar39 = uVar39 + uVar44 ^
                     (SUB168(auVar15 * auVar32,8) ^ SUB168(auVar15 * auVar32,0)) + uStack_118;
            uVar44 = puVar47[5] + puVar47[4] ^
                     (SUB168(auVar16 * auVar33,8) ^ SUB168(auVar16 * auVar33,0)) + uStack_110;
          }
          uVar69 = *(ulonglong *)((longlong)puVar47 + uVar41 * 0x10 + ((ulonglong)uVar46 - 0x20));
          auVar17._8_8_ = 0;
          auVar17._0_8_ = puVar47[3] ^ 0x2172ffcc7dd05a82;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = puVar47[2] ^ 0x78e5c0cc4ee679cb;
          uVar70 = *(ulonglong *)((longlong)puVar47 + uVar41 * 0x10 + ((ulonglong)uVar46 - 0x18));
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar70 ^ 0x4c263a81e69035e0;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = uVar69 ^ 0x8e2443f7744608b8;
          uVar39 = uVar70 + uVar69 ^
                   (SUB168(auVar17 * auVar34,8) ^ SUB168(auVar17 * auVar34,0)) + uVar39;
          uVar44 = puVar47[3] + puVar47[2] ^
                   (SUB168(auVar18 * auVar35,8) ^ SUB168(auVar18 * auVar35,0)) + uVar44;
        }
        uVar69 = *(ulonglong *)((longlong)puVar47 + uVar41 * 0x10 + ((ulonglong)uVar46 - 0x10));
        auVar19._8_8_ = 0;
        auVar19._0_8_ = puVar47[1] ^ 0x1cad21f72c81017c;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = *puVar47 ^ 0xbe4ba423396cfeb8;
        uVar41 = *(ulonglong *)((longlong)puVar47 + uVar41 * 0x10 + ((ulonglong)uVar46 - 8));
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar41 ^ 0x1f67b3b7a4a44072;
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar69 ^ 0xdb979083e96dd4de;
        uVar44 = (puVar47[1] + *puVar47 ^
                 (SUB168(auVar20 * auVar37,8) ^ SUB168(auVar20 * auVar37,0)) + uVar44) +
                 (uVar41 + uVar69 ^
                 (SUB168(auVar19 * auVar36,8) ^ SUB168(auVar19 * auVar36,0)) + uVar39);
        uVar44 = (uVar44 >> 0x25 ^ uVar44) * 0x165667919e3779f9;
        uVar44 = uVar44 >> 0x20 ^ uVar44;
      }
    }
    else {
      auVar72._8_8_ = 0;
      auVar72._0_8_ = puStack_100[1] ^ 0x1cad21f72c81017c;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = *puStack_100 ^ 0xbe4ba423396cfeb8;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = puStack_100[3] ^ 0x1f67b3b7a4a44072;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = puStack_100[2] ^ 0xdb979083e96dd4de;
      auVar60._8_8_ = 0;
      auVar60._0_8_ = puStack_100[5] ^ 0x2172ffcc7dd05a82;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = puStack_100[4] ^ 0x78e5c0cc4ee679cb;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = puStack_100[7] ^ 0x4c263a81e69035e0;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = puStack_100[6] ^ 0x8e2443f7744608b8;
      uStack_118 = puStack_100[7] + puStack_100[6] ^
                   (SUB168(auVar60 * auVar22,8) ^ SUB168(auVar60 * auVar22,0)) +
                   (puStack_100[3] + puStack_100[2] ^
                   (SUB168(auVar72 * auVar71,8) ^ SUB168(auVar72 * auVar71,0)) +
                   uVar41 * -0x61c8864e7a143579);
      uStack_110 = puStack_100[5] + puStack_100[4] ^
                   (SUB168(auVar56 * auVar23,8) ^ SUB168(auVar56 * auVar23,0)) +
                   (puStack_100[1] + *puStack_100 ^ SUB168(auVar59 * auVar21,8) ^
                   SUB168(auVar59 * auVar21,0));
      puVar1 = puStack_100 + 0xc;
      pdb_141748890(&uStack_118,puStack_100 + 8,puStack_100 + 10,&UNK_14332f62e);
      pdb_141748890(&uStack_118,puVar1,puVar47 + 0xe,&UNK_14332f64e);
      uVar69 = (uStack_118 >> 0x25 ^ uStack_118) * 0x165667919e3779f9;
      uVar69 = uVar69 >> 0x20 ^ uVar69;
      uVar39 = (uStack_110 >> 0x25 ^ uStack_110) * 0x165667919e3779f9;
      uVar39 = uVar39 >> 0x20 ^ uVar39;
      uVar70 = uVar44 - 0x70 >> 5;
      if (uVar70 != 0) {
        lVar45 = 0;
        do {
          uVar67 = *(ulonglong *)((longlong)puVar47 + lVar45 + 0x80);
          uVar68 = *(ulonglong *)((longlong)puVar47 + lVar45 + 0x88);
          uVar65 = *(ulonglong *)((longlong)puVar47 + lVar45 + 0x90);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *(ulonglong *)(&UNK_14332f5f9 + lVar45) ^ uVar68;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = *(ulonglong *)(&UNK_14332f5f1 + lVar45) ^ uVar67;
          uVar66 = *(ulonglong *)((longlong)puVar47 + lVar45 + 0x98);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulonglong *)(&UNK_14332f609 + lVar45) ^ uVar66;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = *(ulonglong *)(&UNK_14332f601 + lVar45) ^ uVar65;
          uVar69 = uVar66 + uVar65 ^
                   (SUB168(auVar6 * auVar24,8) ^ SUB168(auVar6 * auVar24,0)) + uVar69;
          uVar39 = uVar68 + uVar67 ^
                   (SUB168(auVar7 * auVar25,8) ^ SUB168(auVar7 * auVar25,0)) + uVar39;
          lVar45 = lVar45 + 0x20;
          uVar70 = uVar70 - 1;
        } while (uVar70 != 0);
      }
      lVar45 = (ulonglong)(((uint)(uVar41 >> 4) & 1) << 4) + (ulonglong)((uint)uVar44 & 0xf);
      uVar41 = uVar41 & 0xffffffffffffffe0;
      uVar44 = *(ulonglong *)((longlong)puVar47 + (uVar41 - 0x10) + lVar45);
      uVar70 = *(ulonglong *)((longlong)puVar47 + (uVar41 - 8) + lVar45);
      uVar67 = *(ulonglong *)((longlong)puVar47 + (uVar41 - 0x20) + lVar45);
      uVar41 = *(ulonglong *)((longlong)puVar47 + (uVar41 - 0x18) + lVar45);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar70 ^ 0x59b4cd4be0518a1d;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar44 ^ 0x4f0bc7c7bbdcf93f;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar41 ^ 0xebd33483acc5ea64;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar67 ^ 0x7378d9c97e9fc831;
      uVar44 = (uVar70 + uVar44 ^ (SUB168(auVar9 * auVar27,8) ^ SUB168(auVar9 * auVar27,0)) + uVar39
               ) + (uVar41 + uVar67 ^
                   (SUB168(auVar8 * auVar26,8) ^ SUB168(auVar8 * auVar26,0)) + uVar69);
      uVar44 = (uVar44 >> 0x25 ^ uVar44) * 0x165667919e3779f9;
      uVar44 = uVar44 >> 0x20 ^ uVar44;
    }
  }
  else {
    lVar45 = *_DAT_143cad8c0;
    if (lVar45 == 0) {
      lVar45 = pdb_142dec140();
    }
    if ((short)lVar45 < 0) {
      uVar44 = pdb_141748940(puVar47,uVar41);
    }
    else {
      uVar43 = uVar41 & 0x7ffffffffffffc00;
      uVar39 = uVar43 - 0x400;
      uVar69 = _DAT_14332ee00;
      uVar70 = _UNK_14332ee08;
      uVar67 = _DAT_14332ee10;
      uVar68 = _UNK_14332ee18;
      uVar65 = _DAT_14332ee20;
      uVar66 = _UNK_14332ee28;
      uVar61 = _DAT_14332ee30;
      uVar64 = _UNK_14332ee38;
      puVar1 = puVar47;
      uVar46 = 0x400;
      uVar38 = uVar43 - 0x400;
      if ((uVar41 & 0x3ff) != 0) {
        uVar39 = uVar43;
        uVar46 = (uint)uVar41 & 0x3ff;
        uVar38 = uVar43;
      }
      for (; uVar39 != 0; uVar39 = uVar39 - 0x400) {
        lVar45 = 0;
        do {
          auVar72 = *(undefined1 (*) [16])(puVar1 + lVar45);
          auVar59 = *(undefined1 (*) [16])(puVar1 + lVar45 + 2);
          auVar60 = *(undefined1 (*) [16])(puVar1 + lVar45 + 4);
          auVar56 = *(undefined1 (*) [16])(puVar1 + lVar45 + 6);
          auVar71 = *(undefined1 (*) [16])(&UNK_14332f5ee + lVar45) ^ auVar72;
          auVar51._0_8_ = auVar72._8_8_;
          auVar51._8_4_ = auVar72._0_4_;
          auVar51._12_4_ = auVar72._4_4_;
          uVar69 = (auVar71._0_8_ >> 0x20) * (ulonglong)auVar71._0_4_ + auVar51._0_8_ + uVar69;
          uVar70 = (auVar71._8_8_ >> 0x20) * (ulonglong)auVar71._8_4_ + auVar51._8_8_ + uVar70;
          auVar72 = *(undefined1 (*) [16])(&UNK_14332f5fe + lVar45) ^ auVar59;
          auVar52._0_8_ = auVar59._8_8_;
          auVar52._8_4_ = auVar59._0_4_;
          auVar52._12_4_ = auVar59._4_4_;
          uVar67 = (auVar72._0_8_ >> 0x20) * (ulonglong)auVar72._0_4_ + auVar52._0_8_ + uVar67;
          uVar68 = (auVar72._8_8_ >> 0x20) * (ulonglong)auVar72._8_4_ + auVar52._8_8_ + uVar68;
          auVar72 = *(undefined1 (*) [16])(&UNK_14332f60e + lVar45) ^ auVar60;
          auVar53._0_8_ = auVar60._8_8_;
          auVar53._8_4_ = auVar60._0_4_;
          auVar53._12_4_ = auVar60._4_4_;
          uVar65 = (auVar72._0_8_ >> 0x20) * (ulonglong)auVar72._0_4_ + auVar53._0_8_ + uVar65;
          uVar66 = (auVar72._8_8_ >> 0x20) * (ulonglong)auVar72._8_4_ + auVar53._8_8_ + uVar66;
          auVar72 = *(undefined1 (*) [16])(&UNK_14332f61e + lVar45) ^ auVar56;
          auVar50._0_8_ = auVar56._8_8_;
          auVar50._8_4_ = auVar56._0_4_;
          auVar50._12_4_ = auVar56._4_4_;
          uVar61 = (auVar72._0_8_ >> 0x20) * (ulonglong)auVar72._0_4_ + auVar50._0_8_ + uVar61;
          uVar64 = (auVar72._8_8_ >> 0x20) * (ulonglong)auVar72._8_4_ + auVar50._8_8_ + uVar64;
          lVar45 = lVar45 + 8;
        } while (lVar45 != 0x80);
        uVar69 = uVar69 >> 0x2f ^ uVar69 ^ _DAT_14332ee40;
        uVar70 = uVar70 >> 0x2f ^ uVar70 ^ _UNK_14332ee48;
        uVar67 = uVar67 >> 0x2f ^ uVar67 ^ _DAT_14332ee50;
        uVar68 = uVar68 >> 0x2f ^ uVar68 ^ _UNK_14332ee58;
        uVar65 = uVar65 >> 0x2f ^ uVar65 ^ _DAT_14332ee60;
        uVar66 = uVar66 >> 0x2f ^ uVar66 ^ _UNK_14332ee68;
        uVar61 = uVar61 >> 0x2f ^ uVar61 ^ _DAT_14332ee70;
        uVar64 = uVar64 >> 0x2f ^ uVar64 ^ _UNK_14332ee78;
        uVar69 = ((uVar69 >> 0x20) * (ulonglong)_DAT_14327a310 << 0x20) +
                 (uVar69 & 0xffffffff) * (ulonglong)_DAT_14327a310;
        uVar70 = ((uVar70 >> 0x20) * (ulonglong)_UNK_14327a318 << 0x20) +
                 (uVar70 & 0xffffffff) * (ulonglong)_UNK_14327a318;
        uVar67 = ((uVar67 >> 0x20) * (ulonglong)_DAT_14327a310 << 0x20) +
                 (uVar67 & 0xffffffff) * (ulonglong)_DAT_14327a310;
        uVar68 = ((uVar68 >> 0x20) * (ulonglong)_UNK_14327a318 << 0x20) +
                 (uVar68 & 0xffffffff) * (ulonglong)_UNK_14327a318;
        uVar65 = ((uVar65 >> 0x20) * (ulonglong)_DAT_14327a310 << 0x20) +
                 (uVar65 & 0xffffffff) * (ulonglong)_DAT_14327a310;
        uVar66 = ((uVar66 >> 0x20) * (ulonglong)_UNK_14327a318 << 0x20) +
                 (uVar66 & 0xffffffff) * (ulonglong)_UNK_14327a318;
        uVar61 = ((uVar61 >> 0x20) * (ulonglong)_DAT_14327a310 << 0x20) +
                 (uVar61 & 0xffffffff) * (ulonglong)_DAT_14327a310;
        uVar64 = ((uVar64 >> 0x20) * (ulonglong)_UNK_14327a318 << 0x20) +
                 (uVar64 & 0xffffffff) * (ulonglong)_UNK_14327a318;
        puVar1 = puVar1 + 0x80;
      }
      uVar42 = uVar46 >> 6;
      uVar39 = (ulonglong)((uVar46 & 0x3f) == 0);
      if ((uVar42 != 0) && (uVar42 != uVar39)) {
        pauVar40 = (undefined1 (*) [16])((longlong)puVar47 + uVar38 + 0x30);
        lVar45 = 0;
        do {
          lVar2 = lVar45 * 8;
          lVar3 = lVar45 * 8;
          lVar4 = lVar45 * 8;
          lVar5 = lVar45 * 8;
          lVar45 = lVar45 + 1;
          auVar72 = pauVar40[-3];
          auVar59 = pauVar40[-2];
          auVar60 = pauVar40[-1];
          auVar56 = *pauVar40;
          auVar71 = *(undefined1 (*) [16])(&UNK_14332f5ee + lVar2) ^ auVar72;
          auVar62._0_8_ = auVar72._8_8_;
          auVar62._8_4_ = auVar72._0_4_;
          auVar62._12_4_ = auVar72._4_4_;
          uVar69 = (auVar71._0_8_ >> 0x20) * (ulonglong)auVar71._0_4_ + auVar62._0_8_ + uVar69;
          uVar70 = (auVar71._8_8_ >> 0x20) * (ulonglong)auVar71._8_4_ + auVar62._8_8_ + uVar70;
          auVar72 = *(undefined1 (*) [16])(&UNK_14332f5fe + lVar3) ^ auVar59;
          auVar57._0_8_ = auVar59._8_8_;
          auVar57._8_4_ = auVar59._0_4_;
          auVar57._12_4_ = auVar59._4_4_;
          uVar67 = (auVar72._0_8_ >> 0x20) * (ulonglong)auVar72._0_4_ + auVar57._0_8_ + uVar67;
          uVar68 = (auVar72._8_8_ >> 0x20) * (ulonglong)auVar72._8_4_ + auVar57._8_8_ + uVar68;
          auVar72 = *(undefined1 (*) [16])(&UNK_14332f60e + lVar4) ^ auVar60;
          auVar58._0_8_ = auVar60._8_8_;
          auVar58._8_4_ = auVar60._0_4_;
          auVar58._12_4_ = auVar60._4_4_;
          uVar65 = (auVar72._0_8_ >> 0x20) * (ulonglong)auVar72._0_4_ + auVar58._0_8_ + uVar65;
          uVar66 = (auVar72._8_8_ >> 0x20) * (ulonglong)auVar72._8_4_ + auVar58._8_8_ + uVar66;
          auVar72 = *(undefined1 (*) [16])(&UNK_14332f61e + lVar5) ^ auVar56;
          auVar55._0_8_ = auVar56._8_8_;
          auVar55._8_4_ = auVar56._0_4_;
          auVar55._12_4_ = auVar56._4_4_;
          uVar61 = (auVar72._0_8_ >> 0x20) * (ulonglong)auVar72._0_4_ + auVar55._0_8_ + uVar61;
          uVar64 = (auVar72._8_8_ >> 0x20) * (ulonglong)auVar72._8_4_ + auVar55._8_8_ + uVar64;
          pauVar40 = pauVar40 + 4;
        } while (uVar42 - uVar39 != lVar45);
      }
      auVar72 = *(undefined1 (*) [16])((longlong)puVar47 + (uVar44 - 0x30));
      auVar59 = *(undefined1 (*) [16])((longlong)puVar47 + (uVar44 - 0x20));
      auVar60 = *(undefined1 (*) [16])((longlong)puVar47 + (uVar44 - 0x10));
      auVar56 = *(undefined1 (*) [16])((longlong)puVar47 + uVar44);
      auVar63._0_8_ = auVar72._8_8_;
      auVar63._8_4_ = auVar72._0_4_;
      auVar63._12_4_ = auVar72._4_4_;
      auVar72 = auVar72 ^ _DAT_14332ee80;
      auVar48._0_8_ = auVar59._8_8_;
      auVar48._8_4_ = auVar59._0_4_;
      auVar48._12_4_ = auVar59._4_4_;
      auVar59 = auVar59 ^ _DAT_14332ee90;
      auVar49._0_8_ = auVar60._8_8_;
      auVar49._8_4_ = auVar60._0_4_;
      auVar49._12_4_ = auVar60._4_4_;
      auVar60 = auVar60 ^ _DAT_14332eea0;
      auVar54._0_8_ = auVar56._8_8_;
      auVar54._8_4_ = auVar56._0_4_;
      auVar54._12_4_ = auVar56._4_4_;
      auVar56 = auVar56 ^ _DAT_14332eeb0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ =
           (auVar72._8_8_ >> 0x20) * (ulonglong)auVar72._8_4_ + auVar63._8_8_ + uVar70 ^
           0xa44072db979083e9;
      auVar28._8_8_ = 0;
      auVar28._0_8_ =
           (auVar72._0_8_ >> 0x20) * (ulonglong)auVar72._0_4_ + auVar63._0_8_ + uVar69 ^
           0x6dd4de1cad21f72c;
      auVar12._8_8_ = 0;
      auVar12._0_8_ =
           (auVar59._8_8_ >> 0x20) * (ulonglong)auVar59._8_4_ + auVar48._8_8_ + uVar68 ^
           0xd05a8278e5c0cc4e;
      auVar29._8_8_ = 0;
      auVar29._0_8_ =
           (auVar59._0_8_ >> 0x20) * (ulonglong)auVar59._0_4_ + auVar48._0_8_ + uVar67 ^
           0xe679cb1f67b3b7a4;
      auVar13._8_8_ = 0;
      auVar13._0_8_ =
           (auVar60._8_8_ >> 0x20) * (ulonglong)auVar60._8_4_ + auVar49._8_8_ + uVar66 ^
           0x9035e08e2443f774;
      auVar30._8_8_ = 0;
      auVar30._0_8_ =
           (auVar60._0_8_ >> 0x20) * (ulonglong)auVar60._0_4_ + auVar49._0_8_ + uVar65 ^
           0x4608b82172ffcc7d;
      auVar14._8_8_ = 0;
      auVar14._0_8_ =
           (auVar56._8_8_ >> 0x20) * (ulonglong)auVar56._8_4_ + auVar54._8_8_ + uVar64 ^
           0x65d088cb00c391bb;
      auVar31._8_8_ = 0;
      auVar31._0_8_ =
           (auVar56._0_8_ >> 0x20) * (ulonglong)auVar56._0_4_ + auVar54._0_8_ + uVar61 ^
           0x52283c4c263a81e6;
      uVar44 = (SUB168(auVar14 * auVar31,8) ^ SUB168(auVar14 * auVar31,0)) +
               (SUB168(auVar13 * auVar30,8) ^ SUB168(auVar13 * auVar30,0)) +
               (SUB168(auVar12 * auVar29,8) ^ SUB168(auVar12 * auVar29,0)) +
               (SUB168(auVar11 * auVar28,8) ^ SUB168(auVar11 * auVar28,0)) +
               uVar41 * -0x61c8864e7a143579;
      uVar44 = (uVar44 >> 0x25 ^ uVar44) * 0x165667919e3779f9;
      uVar44 = uVar44 >> 0x20 ^ uVar44;
    }
  }
  if (uStack_108 != 0) {
    pub_1406abac0((byte *)puStack_100,uStack_108,1);
  }
  return uVar44;
}

