// Matched PDB: turbosloth::store::AssetContentId::from_bytes
// VA 0x141c2d770, PDB extent 5 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: turbosloth::store::AssetContentId::from_bytes
   Extent: 5 bytes. No whole-program auto-analysis. */

ulonglong pdb_141c2d770(ulonglong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  uint uVar51;
  short sVar52;
  undefined1 (*pauVar53) [16];
  undefined1 (*pauVar54) [32];
  ulonglong uVar55;
  uint uVar56;
  ulonglong *puVar57;
  ulonglong uVar58;
  longlong lVar59;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 auVar66 [64];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar71 [64];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  ulonglong uVar91;
  ulonglong uVar92;
  longlong lVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong *puStack_f8;
  undefined1 auStack_e8 [16];
  
  auStack_e8 = in_ZMM6._0_16_;
  uVar56 = (uint)param_2;
  if (param_2 < 0xf1) {
    if (param_2 < 0x81) {
      if (param_2 < 0x11) {
        if (param_2 < 9) {
          if (param_2 < 4) {
            if (param_2 == 0) {
              uVar55 = 0x6001c324468d497f;
            }
            else {
              uVar55 = (ulonglong)
                       (((uint)*(byte *)((longlong)param_1 + (param_2 >> 1)) << 0x18 |
                        (uint)(byte)*param_1 << 0x10 |
                        (uint)*(byte *)((longlong)param_1 + (param_2 - 1)) | uVar56 << 8) ^
                       0x87275a9b) * -0x3d4d51c2d82b14b1;
              uVar55 = (uVar55 >> 0x1d ^ uVar55) * 0x165667b19e3779f9;
              uVar55 = uVar55 >> 0x20 ^ uVar55;
            }
          }
          else {
            auVar95._8_8_ = 0;
            auVar95._0_8_ =
                 CONCAT44(*(undefined4 *)((longlong)param_1 + (param_2 - 4)),(int)*param_1) ^
                 0xc4f023344dc994ac;
            auVar87._8_8_ = 0;
            auVar87._0_8_ = param_2 * 4 + 0x9e3779b185ebca87;
            uVar55 = SUB168(auVar95 * auVar87,0);
            uVar55 = SUB168(auVar95 * auVar87,8) + uVar55 * 2 >> 3 ^ uVar55;
            uVar55 = (uVar55 >> 0x23 ^ uVar55) * -0x604de39ae16720db;
            uVar55 = uVar55 >> 0x1c ^ uVar55;
          }
        }
        else {
          uVar55 = *(ulonglong *)((longlong)param_1 + (param_2 - 8));
          uVar58 = uVar55 ^ 0xc202797692d63d58;
          auVar88._8_8_ = 0;
          auVar88._0_8_ = *param_1 ^ uVar55 ^ 0x59973f0033362349;
          uVar55 = (uVar58 & 0xffffffff00000000) + SUB168(auVar88 * ZEXT816(0x9e3779b185ebca87),8) +
                   (uVar58 & 0xffffffff) * 0x85ebca77;
          uVar55 = (SUB168(auVar88 * ZEXT816(0x9e3779b185ebca87),0) +
                    (param_2 << 0x36) + -0x40000000000000 ^
                   (uVar55 >> 0x38 | (uVar55 & 0xff000000000000) >> 0x28 |
                    (uVar55 & 0xff0000000000) >> 0x18 | (uVar55 & 0xff00000000) >> 8 |
                    (uVar55 & 0xff000000) << 8 | (uVar55 & 0xff0000) << 0x18 |
                    (uVar55 & 0xff00) << 0x28 | uVar55 << 0x38)) * -0x3d4d51c2d82b14b1;
          uVar55 = (uVar55 >> 0x25 ^ uVar55) * 0x165667919e3779f9;
          uVar55 = uVar55 >> 0x20 ^ uVar55;
        }
      }
      else {
        uStack_108 = param_2 * -0x61c8864e7a143579;
        uStack_100 = 0;
        uVar55 = param_2 >> 4;
        uVar56 = uVar56 & 0xf;
        if (param_2 < 0x21) {
          uVar58 = 0;
        }
        else {
          if (param_2 < 0x41) {
            uVar58 = 0;
          }
          else {
            if (param_2 < 0x61) {
              uStack_100 = 0;
            }
            else {
              pdb_141748890(&uStack_108,param_1 + 6,
                            (byte *)((longlong)param_1 + uVar55 * 0x10 + (ulonglong)uVar56 + -0x40),
                            &UNK_1435199bf);
            }
            uVar58 = *(ulonglong *)((longlong)param_1 + uVar55 * 0x10 + ((ulonglong)uVar56 - 0x30));
            auVar81._8_8_ = 0;
            auVar81._0_8_ = param_1[5] ^ 0xa32e531b8b65d088;
            auVar39._8_8_ = 0;
            auVar39._0_8_ = param_1[4] ^ 0xcb00c391bb52283c;
            uVar91 = *(ulonglong *)((longlong)param_1 + uVar55 * 0x10 + ((ulonglong)uVar56 - 0x28));
            auVar94._8_8_ = 0;
            auVar94._0_8_ = uVar91 ^ 0xd8acdea946ef1938;
            auVar40._8_8_ = 0;
            auVar40._0_8_ = uVar58 ^ 0x4ef90da297486471;
            uStack_108 = uVar91 + uVar58 ^
                         (SUB168(auVar81 * auVar39,8) ^ SUB168(auVar81 * auVar39,0)) + uStack_108;
            uVar58 = param_1[5] + param_1[4] ^
                     (SUB168(auVar94 * auVar40,8) ^ SUB168(auVar94 * auVar40,0)) + uStack_100;
          }
          uVar91 = *(ulonglong *)((longlong)param_1 + uVar55 * 0x10 + ((ulonglong)uVar56 - 0x20));
          auVar19._8_8_ = 0;
          auVar19._0_8_ = param_1[3] ^ 0x2172ffcc7dd05a82;
          auVar41._8_8_ = 0;
          auVar41._0_8_ = param_1[2] ^ 0x78e5c0cc4ee679cb;
          uVar92 = *(ulonglong *)((longlong)param_1 + uVar55 * 0x10 + ((ulonglong)uVar56 - 0x18));
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar92 ^ 0x4c263a81e69035e0;
          auVar42._8_8_ = 0;
          auVar42._0_8_ = uVar91 ^ 0x8e2443f7744608b8;
          uStack_108 = uVar92 + uVar91 ^
                       (SUB168(auVar19 * auVar41,8) ^ SUB168(auVar19 * auVar41,0)) + uStack_108;
          uVar58 = param_1[3] + param_1[2] ^
                   (SUB168(auVar20 * auVar42,8) ^ SUB168(auVar20 * auVar42,0)) + uVar58;
        }
        uVar91 = *(ulonglong *)((longlong)param_1 + uVar55 * 0x10 + ((ulonglong)uVar56 - 0x10));
        auVar21._8_8_ = 0;
        auVar21._0_8_ = param_1[1] ^ 0x1cad21f72c81017c;
        auVar43._8_8_ = 0;
        auVar43._0_8_ = *param_1 ^ 0xbe4ba423396cfeb8;
        uVar55 = *(ulonglong *)((longlong)param_1 + uVar55 * 0x10 + ((ulonglong)uVar56 - 8));
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar55 ^ 0x1f67b3b7a4a44072;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar91 ^ 0xdb979083e96dd4de;
        uVar55 = (param_1[1] + *param_1 ^
                 (SUB168(auVar22 * auVar44,8) ^ SUB168(auVar22 * auVar44,0)) + uVar58) +
                 (uVar55 + uVar91 ^
                 (SUB168(auVar21 * auVar43,8) ^ SUB168(auVar21 * auVar43,0)) + uStack_108);
        uVar55 = (uVar55 >> 0x25 ^ uVar55) * 0x165667919e3779f9;
        uVar55 = uVar55 >> 0x20 ^ uVar55;
      }
    }
    else {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_1[1] ^ 0x1cad21f72c81017c;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = *param_1 ^ 0xbe4ba423396cfeb8;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_1[3] ^ 0x1f67b3b7a4a44072;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = param_1[2] ^ 0xdb979083e96dd4de;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_1[5] ^ 0x2172ffcc7dd05a82;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = param_1[4] ^ 0x78e5c0cc4ee679cb;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_1[7] ^ 0x4c263a81e69035e0;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = param_1[6] ^ 0x8e2443f7744608b8;
      uStack_108 = param_1[7] + param_1[6] ^
                   (SUB168(auVar9 * auVar29,8) ^ SUB168(auVar9 * auVar29,0)) +
                   (param_1[3] + param_1[2] ^
                   (SUB168(auVar7 * auVar27,8) ^ SUB168(auVar7 * auVar27,0)) +
                   param_2 * -0x61c8864e7a143579);
      uStack_100 = param_1[5] + param_1[4] ^
                   (SUB168(auVar10 * auVar30,8) ^ SUB168(auVar10 * auVar30,0)) +
                   (param_1[1] + *param_1 ^ SUB168(auVar8 * auVar28,8) ^ SUB168(auVar8 * auVar28,0))
      ;
      pdb_141748890(&uStack_108,param_1 + 8,param_1 + 10,&UNK_14351999f);
      puStack_f8 = param_1;
      pdb_141748890(&uStack_108,param_1 + 0xc,param_1 + 0xe,&UNK_1435199bf);
      uVar58 = (uStack_108 >> 0x25 ^ uStack_108) * 0x165667919e3779f9;
      uVar58 = uVar58 >> 0x20 ^ uVar58;
      uVar55 = (uStack_100 >> 0x25 ^ uStack_100) * 0x165667919e3779f9;
      uVar55 = uVar55 >> 0x20 ^ uVar55;
      uVar91 = param_2 - 0x80 >> 5;
      if (uVar91 != 0) {
        lVar59 = 0;
        do {
          uVar92 = *(ulonglong *)((longlong)puStack_f8 + lVar59 + 0x80);
          uVar4 = *(ulonglong *)((longlong)puStack_f8 + lVar59 + 0x88);
          uVar5 = *(ulonglong *)((longlong)puStack_f8 + lVar59 + 0x90);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = *(ulonglong *)(&UNK_14351996a + lVar59) ^ uVar4;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = *(ulonglong *)(&UNK_143519962 + lVar59) ^ uVar92;
          uVar6 = *(ulonglong *)((longlong)puStack_f8 + lVar59 + 0x98);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = *(ulonglong *)(&UNK_14351997a + lVar59) ^ uVar6;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = *(ulonglong *)(&UNK_143519972 + lVar59) ^ uVar5;
          uVar58 = uVar6 + uVar5 ^
                   (SUB168(auVar11 * auVar31,8) ^ SUB168(auVar11 * auVar31,0)) + uVar58;
          uVar55 = uVar4 + uVar92 ^
                   (SUB168(auVar12 * auVar32,8) ^ SUB168(auVar12 * auVar32,0)) + uVar55;
          lVar59 = lVar59 + 0x20;
          uVar91 = uVar91 - 1;
        } while (uVar91 != 0);
      }
      lVar59 = (ulonglong)(((uint)(param_2 >> 4) & 1) << 4) + (ulonglong)(uVar56 & 0xf);
      param_2 = param_2 & 0xffffffffffffffe0;
      uVar91 = *(ulonglong *)((longlong)puStack_f8 + (param_2 - 0x10) + lVar59);
      uVar92 = *(ulonglong *)((longlong)puStack_f8 + (param_2 - 8) + lVar59);
      uVar4 = *(ulonglong *)((longlong)puStack_f8 + (param_2 - 0x20) + lVar59);
      uVar5 = *(ulonglong *)((longlong)puStack_f8 + (param_2 - 0x18) + lVar59);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar92 ^ 0x59b4cd4be0518a1d;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar91 ^ 0x4f0bc7c7bbdcf93f;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar5 ^ 0xebd33483acc5ea64;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar4 ^ 0x7378d9c97e9fc831;
      uVar55 = (uVar92 + uVar91 ^
               (SUB168(auVar18 * auVar38,8) ^ SUB168(auVar18 * auVar38,0)) + uVar55) +
               (uVar5 + uVar4 ^ (SUB168(auVar17 * auVar37,8) ^ SUB168(auVar17 * auVar37,0)) + uVar58
               );
      uVar55 = (uVar55 >> 0x25 ^ uVar55) * 0x165667919e3779f9;
      uVar55 = uVar55 >> 0x20 ^ uVar55;
    }
  }
  else {
    if (*_DAT_143cad8c0 == 0) {
      sVar52 = pdb_142dec140();
      in_ZMM0._8_56_ = extraout_var;
      in_ZMM0._0_8_ = extraout_XMM0_Qa;
    }
    else {
      sVar52 = (short)*_DAT_143cad8c0;
    }
    if (sVar52 < 0) {
      uVar55 = (param_2 & 0x7ffffffffffffc00) - 0x400;
      uVar51 = 0x400;
      if ((param_2 & 0x3ff) != 0) {
        uVar55 = param_2 & 0x7ffffffffffffc00;
        uVar51 = uVar56 & 0x3ff;
      }
      auVar71 = ZEXT3264(_UNK_14332eec0);
      auVar66 = ZEXT3264(_UNK_14332eee0);
      if (uVar55 != 0) {
        auVar76._8_8_ = _UNK_14332ef20;
        auVar76._0_8_ = _UNK_14332ef20;
        auVar76._16_8_ = _UNK_14332ef20;
        auVar76._24_8_ = _UNK_14332ef20;
        puVar57 = param_1;
        uVar58 = uVar55;
        do {
          lVar59 = 0;
          do {
            auVar84 = *(undefined1 (*) [32])(puVar57 + lVar59) ^
                      *(undefined1 (*) [32])(&UNK_14351995f + lVar59);
            auVar83 = vpshufd_avx2(*(undefined1 (*) [32])(puVar57 + lVar59),0x4e);
            auVar82 = vpsrlq_avx2(auVar84,0x20);
            auVar82 = vpmuludq_avx2(auVar84,auVar82);
            auVar49 = *(undefined1 (*) [32])(puVar57 + lVar59 + 4) ^
                      *(undefined1 (*) [32])(&UNK_14351997f + lVar59);
            auVar84._0_8_ = auVar71._0_8_ + auVar83._0_8_ + auVar82._0_8_;
            auVar84._8_8_ = auVar71._8_8_ + auVar83._8_8_ + auVar82._8_8_;
            auVar84._16_8_ = auVar71._16_8_ + auVar83._16_8_ + auVar82._16_8_;
            auVar84._24_8_ = auVar71._24_8_ + auVar83._24_8_ + auVar82._24_8_;
            auVar71 = ZEXT3264(auVar84);
            auVar65 = vpshufd_avx2(*(undefined1 (*) [32])(puVar57 + lVar59 + 4),0x4e);
            auVar82 = vpsrlq_avx2(auVar49,0x20);
            auVar83 = vpmuludq_avx2(auVar49,auVar82);
            auVar82._0_8_ = auVar66._0_8_ + auVar65._0_8_ + auVar83._0_8_;
            auVar82._8_8_ = auVar66._8_8_ + auVar65._8_8_ + auVar83._8_8_;
            auVar82._16_8_ = auVar66._16_8_ + auVar65._16_8_ + auVar83._16_8_;
            auVar82._24_8_ = auVar66._24_8_ + auVar65._24_8_ + auVar83._24_8_;
            auVar66 = ZEXT3264(auVar82);
            lVar59 = lVar59 + 8;
          } while (lVar59 != 0x80);
          auVar83 = vpsrlq_avx2(auVar84,0x2f);
          auVar83 = auVar83 ^ auVar84 ^ _UNK_14332ef00;
          auVar84 = vpmuludq_avx2(auVar83,auVar76);
          auVar83 = vpsrlq_avx2(auVar83,0x20);
          auVar83 = vpmuludq_avx2(auVar83,auVar76);
          auVar83 = vpsllq_avx2(auVar83,0x20);
          auVar71 = ZEXT3264(CONCAT824(auVar84._24_8_ + auVar83._24_8_,
                                       CONCAT816(auVar84._16_8_ + auVar83._16_8_,
                                                 CONCAT88(auVar84._8_8_ + auVar83._8_8_,
                                                          auVar84._0_8_ + auVar83._0_8_))));
          auVar84 = vpsrlq_avx2(auVar82,0x2f);
          auVar82 = auVar84 ^ auVar82 ^ _UNK_14332ef40;
          auVar84 = vpmuludq_avx2(auVar82,auVar76);
          auVar82 = vpsrlq_avx2(auVar82,0x20);
          auVar82 = vpmuludq_avx2(auVar82,auVar76);
          auVar82 = vpsllq_avx2(auVar82,0x20);
          auVar66 = ZEXT3264(CONCAT824(auVar84._24_8_ + auVar82._24_8_,
                                       CONCAT816(auVar84._16_8_ + auVar82._16_8_,
                                                 CONCAT88(auVar84._8_8_ + auVar82._8_8_,
                                                          auVar84._0_8_ + auVar82._0_8_))));
          puVar57 = puVar57 + 0x80;
          uVar58 = uVar58 - 0x400;
        } while (uVar58 != 0);
      }
      auVar65 = auVar66._0_32_;
      auVar83 = auVar71._0_32_;
      uVar56 = uVar51 >> 6;
      uVar58 = (ulonglong)((uVar51 & 0x3f) == 0);
      if ((uVar56 != 0) && (uVar56 != uVar58)) {
        pauVar54 = (undefined1 (*) [32])((longlong)param_1 + uVar55 + 0x20);
        lVar59 = 0;
        do {
          auVar76 = pauVar54[-1] ^ *(undefined1 (*) [32])(&UNK_14351995f + lVar59 * 8);
          auVar84 = vpshufd_avx2(pauVar54[-1],0x4e);
          auVar82 = vpsrlq_avx2(auVar76,0x20);
          auVar76 = vpmuludq_avx2(auVar76,auVar82);
          auVar82 = *pauVar54 ^ *(undefined1 (*) [32])(&UNK_14351997f + lVar59 * 8);
          lVar59 = lVar59 + 1;
          auVar83._0_8_ = auVar71._0_8_ + auVar84._0_8_ + auVar76._0_8_;
          auVar83._8_8_ = auVar71._8_8_ + auVar84._8_8_ + auVar76._8_8_;
          auVar83._16_8_ = auVar71._16_8_ + auVar84._16_8_ + auVar76._16_8_;
          auVar83._24_8_ = auVar71._24_8_ + auVar84._24_8_ + auVar76._24_8_;
          auVar71 = ZEXT3264(auVar83);
          auVar84 = vpshufd_avx2(*pauVar54,0x4e);
          auVar76 = vpsrlq_avx2(auVar82,0x20);
          auVar76 = vpmuludq_avx2(auVar82,auVar76);
          auVar65._0_8_ = auVar66._0_8_ + auVar84._0_8_ + auVar76._0_8_;
          auVar65._8_8_ = auVar66._8_8_ + auVar84._8_8_ + auVar76._8_8_;
          auVar65._16_8_ = auVar66._16_8_ + auVar84._16_8_ + auVar76._16_8_;
          auVar65._24_8_ = auVar66._24_8_ + auVar84._24_8_ + auVar76._24_8_;
          auVar66 = ZEXT3264(auVar65);
          pauVar54 = pauVar54 + 2;
        } while (uVar56 - uVar58 != lVar59);
      }
      auVar76 = *(undefined1 (*) [32])((longlong)param_1 + (param_2 - 0x40));
      auVar84 = *(undefined1 (*) [32])((longlong)param_1 + (param_2 - 0x20));
      auVar49 = auVar76 ^ _UNK_14332ef60;
      auVar82 = vpshufd_avx2(auVar76,0x4e);
      auVar76 = vpsrlq_avx2(auVar49,0x20);
      auVar76 = vpmuludq_avx2(auVar49,auVar76);
      auVar50 = auVar84 ^ _UNK_14332ef80;
      auVar49 = vpshufd_avx2(auVar84,0x4e);
      auVar84 = vpsrlq_avx2(auVar50,0x20);
      auVar84 = vpmuludq_avx2(auVar50,auVar84);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar83._8_8_ + auVar82._8_8_ + auVar76._8_8_ ^ 0xa44072db979083e9;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = auVar83._0_8_ + auVar82._0_8_ + auVar76._0_8_ ^ 0x6dd4de1cad21f72c;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = auVar83._24_8_ + auVar82._24_8_ + auVar76._24_8_ ^ 0xd05a8278e5c0cc4e;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = auVar83._16_8_ + auVar82._16_8_ + auVar76._16_8_ ^ 0xe679cb1f67b3b7a4;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = auVar65._8_8_ + auVar49._8_8_ + auVar84._8_8_ ^ 0x9035e08e2443f774;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = auVar65._0_8_ + auVar49._0_8_ + auVar84._0_8_ ^ 0x4608b82172ffcc7d;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = auVar65._24_8_ + auVar49._24_8_ + auVar84._24_8_ ^ 0x65d088cb00c391bb;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = auVar65._16_8_ + auVar49._16_8_ + auVar84._16_8_ ^ 0x52283c4c263a81e6;
      uVar55 = (SUB168(auVar26 * auVar48,0) ^ SUB168(auVar26 * auVar48,8)) +
               (SUB168(auVar25 * auVar47,0) ^ SUB168(auVar25 * auVar47,8)) +
               (SUB168(auVar24 * auVar46,0) ^ SUB168(auVar24 * auVar46,8)) +
               (SUB168(auVar23 * auVar45,0) ^ SUB168(auVar23 * auVar45,8)) +
               param_2 * -0x61c8864e7a143579;
      uVar55 = (uVar55 ^ uVar55 >> 0x25) * 0x165667919e3779f9;
      return uVar55 ^ uVar55 >> 0x20;
    }
    uVar55 = (param_2 & 0x7ffffffffffffc00) - 0x400;
    uVar51 = 0x400;
    if ((param_2 & 0x3ff) != 0) {
      uVar55 = param_2 & 0x7ffffffffffffc00;
      uVar51 = uVar56 & 0x3ff;
    }
    puVar57 = param_1;
    uVar58 = uVar55;
    auVar78 = _DAT_14332ee30;
    auVar69 = _DAT_14332ee10;
    auVar61 = _DAT_14332ee00;
    uVar91 = _DAT_14332ee20;
    uVar92 = _UNK_14332ee28;
    if (uVar55 == 0) {
      in_ZMM0._0_16_ = _DAT_14332ee00;
      in_ZMM1._0_16_ = _DAT_14332ee10;
      in_ZMM3._0_16_ = _DAT_14332ee30;
    }
    else {
      do {
        lVar59 = 0;
        do {
          auVar95 = *(undefined1 (*) [16])(puVar57 + lVar59);
          auVar87 = *(undefined1 (*) [16])(puVar57 + lVar59 + 2);
          in_ZMM3._0_16_ = auVar87;
          auVar88 = *(undefined1 (*) [16])(puVar57 + lVar59 + 4);
          auVar81 = *(undefined1 (*) [16])(puVar57 + lVar59 + 6);
          auVar94 = *(undefined1 (*) [16])(&UNK_14351995f + lVar59) ^ auVar95;
          auVar72._0_8_ = auVar95._8_8_;
          auVar72._8_4_ = auVar95._0_4_;
          auVar72._12_4_ = auVar95._4_4_;
          lVar93 = auVar61._8_8_;
          auVar61._0_8_ =
               (auVar94._0_8_ >> 0x20) * (ulonglong)auVar94._0_4_ + auVar72._0_8_ + auVar61._0_8_;
          auVar61._8_8_ =
               (auVar94._8_8_ >> 0x20) * (ulonglong)auVar94._8_4_ + auVar72._8_8_ + lVar93;
          auVar95 = *(undefined1 (*) [16])(&UNK_14351996f + lVar59) ^ auVar87;
          auVar73._0_8_ = auVar87._8_8_;
          auVar73._8_4_ = auVar87._0_4_;
          auVar73._12_4_ = auVar87._4_4_;
          lVar93 = auVar69._8_8_;
          auVar69._0_8_ =
               (auVar95._0_8_ >> 0x20) * (ulonglong)auVar95._0_4_ + auVar73._0_8_ + auVar69._0_8_;
          auVar69._8_8_ =
               (auVar95._8_8_ >> 0x20) * (ulonglong)auVar95._8_4_ + auVar73._8_8_ + lVar93;
          auVar95 = *(undefined1 (*) [16])(&UNK_14351997f + lVar59) ^ auVar88;
          auVar74._0_8_ = auVar88._8_8_;
          auVar74._8_4_ = auVar88._0_4_;
          auVar74._12_4_ = auVar88._4_4_;
          uVar91 = (auVar95._0_8_ >> 0x20) * (ulonglong)auVar95._0_4_ + auVar74._0_8_ + uVar91;
          uVar92 = (auVar95._8_8_ >> 0x20) * (ulonglong)auVar95._8_4_ + auVar74._8_8_ + uVar92;
          in_ZMM0._0_16_ = *(undefined1 (*) [16])(&UNK_14351998f + lVar59) ^ auVar81;
          auVar67._0_8_ = auVar81._8_8_;
          auVar67._8_4_ = auVar81._0_4_;
          auVar67._12_4_ = auVar81._4_4_;
          in_ZMM1._0_8_ = auVar67._0_8_ + auVar78._0_8_;
          in_ZMM1._8_8_ = auVar67._8_8_ + auVar78._8_8_;
          auVar78._0_8_ = (in_ZMM0._0_8_ >> 0x20) * (ulonglong)in_ZMM0._0_4_ + in_ZMM1._0_8_;
          auVar78._8_8_ = (in_ZMM0._8_8_ >> 0x20) * (ulonglong)in_ZMM0._8_4_ + in_ZMM1._8_8_;
          lVar59 = lVar59 + 8;
        } while (lVar59 != 0x80);
        auVar60._0_8_ = auVar61._0_8_ >> 0x2f;
        auVar60._8_8_ = auVar61._8_8_ >> 0x2f;
        auVar95 = auVar60 ^ auVar61 ^ _DAT_14332ee40;
        auVar61._0_8_ =
             ((auVar95._0_8_ >> 0x20) * (_DAT_14327a310 & 0xffffffff) << 0x20) +
             (ulonglong)auVar95._0_4_ * (_DAT_14327a310 & 0xffffffff);
        auVar61._8_8_ =
             ((auVar95._8_8_ >> 0x20) * (_UNK_14327a318 & 0xffffffff) << 0x20) +
             (ulonglong)auVar95._8_4_ * (_UNK_14327a318 & 0xffffffff);
        in_ZMM0._0_16_ = auVar61;
        auVar68._0_8_ = auVar69._0_8_ >> 0x2f;
        auVar68._8_8_ = auVar69._8_8_ >> 0x2f;
        auVar95 = auVar68 ^ auVar69 ^ _DAT_14332ee50;
        auVar69._0_8_ =
             ((auVar95._0_8_ >> 0x20) * (_DAT_14327a310 & 0xffffffff) << 0x20) +
             (ulonglong)auVar95._0_4_ * (_DAT_14327a310 & 0xffffffff);
        auVar69._8_8_ =
             ((auVar95._8_8_ >> 0x20) * (_UNK_14327a318 & 0xffffffff) << 0x20) +
             (ulonglong)auVar95._8_4_ * (_UNK_14327a318 & 0xffffffff);
        in_ZMM1._0_16_ = auVar69;
        uVar91 = uVar91 >> 0x2f ^ uVar91 ^ _DAT_14332ee60;
        uVar92 = uVar92 >> 0x2f ^ uVar92 ^ _UNK_14332ee68;
        uVar91 = ((uVar91 >> 0x20) * (_DAT_14327a310 & 0xffffffff) << 0x20) +
                 (uVar91 & 0xffffffff) * (_DAT_14327a310 & 0xffffffff);
        uVar92 = ((uVar92 >> 0x20) * (_UNK_14327a318 & 0xffffffff) << 0x20) +
                 (uVar92 & 0xffffffff) * (_UNK_14327a318 & 0xffffffff);
        auVar77._0_8_ = auVar78._0_8_ >> 0x2f;
        auVar77._8_8_ = auVar78._8_8_ >> 0x2f;
        auVar95 = auVar77 ^ auVar78 ^ _DAT_14332ee70;
        auVar78._0_8_ =
             ((auVar95._0_8_ >> 0x20) * (_DAT_14327a310 & 0xffffffff) << 0x20) +
             (ulonglong)auVar95._0_4_ * (_DAT_14327a310 & 0xffffffff);
        auVar78._8_8_ =
             ((auVar95._8_8_ >> 0x20) * (_UNK_14327a318 & 0xffffffff) << 0x20) +
             (ulonglong)auVar95._8_4_ * (_UNK_14327a318 & 0xffffffff);
        in_ZMM3._0_16_ = auVar78;
        uVar58 = uVar58 - 0x400;
        puVar57 = puVar57 + 0x80;
      } while (uVar58 != 0);
    }
    auVar70 = in_ZMM1._0_16_;
    auVar62 = in_ZMM0._0_16_;
    auVar79 = in_ZMM3._0_16_;
    uVar56 = uVar51 >> 6;
    uVar58 = (ulonglong)((uVar51 & 0x3f) == 0);
    if ((uVar56 != 0) && (uVar56 != uVar58)) {
      pauVar53 = (undefined1 (*) [16])((longlong)param_1 + uVar55 + 0x30);
      lVar59 = 0;
      do {
        lVar93 = lVar59 * 8;
        lVar1 = lVar59 * 8;
        lVar2 = lVar59 * 8;
        lVar3 = lVar59 * 8;
        lVar59 = lVar59 + 1;
        auVar95 = pauVar53[-3];
        auVar87 = pauVar53[-2];
        auVar88 = pauVar53[-1];
        auVar81 = *pauVar53;
        auVar94 = *(undefined1 (*) [16])(&UNK_14351995f + lVar93) ^ auVar95;
        auVar89._0_8_ = auVar95._8_8_;
        auVar89._8_4_ = auVar95._0_4_;
        auVar89._12_4_ = auVar95._4_4_;
        auVar62._0_8_ =
             (auVar94._0_8_ >> 0x20) * (ulonglong)auVar94._0_4_ + auVar89._0_8_ + in_ZMM0._0_8_;
        auVar62._8_8_ =
             (auVar94._8_8_ >> 0x20) * (ulonglong)auVar94._8_4_ + auVar89._8_8_ + in_ZMM0._8_8_;
        in_ZMM0._0_16_ = auVar62;
        auVar95 = *(undefined1 (*) [16])(&UNK_14351996f + lVar1) ^ auVar87;
        auVar85._0_8_ = auVar87._8_8_;
        auVar85._8_4_ = auVar87._0_4_;
        auVar85._12_4_ = auVar87._4_4_;
        auVar70._0_8_ =
             (auVar95._0_8_ >> 0x20) * (ulonglong)auVar95._0_4_ + auVar85._0_8_ + in_ZMM1._0_8_;
        auVar70._8_8_ =
             (auVar95._8_8_ >> 0x20) * (ulonglong)auVar95._8_4_ + auVar85._8_8_ + in_ZMM1._8_8_;
        in_ZMM1._0_16_ = auVar70;
        auVar95 = *(undefined1 (*) [16])(&UNK_14351997f + lVar2) ^ auVar88;
        auVar86._0_8_ = auVar88._8_8_;
        auVar86._8_4_ = auVar88._0_4_;
        auVar86._12_4_ = auVar88._4_4_;
        uVar91 = (auVar95._0_8_ >> 0x20) * (ulonglong)auVar95._0_4_ + auVar86._0_8_ + uVar91;
        uVar92 = (auVar95._8_8_ >> 0x20) * (ulonglong)auVar95._8_4_ + auVar86._8_8_ + uVar92;
        auVar95 = *(undefined1 (*) [16])(&UNK_14351998f + lVar3) ^ auVar81;
        auVar80._0_8_ = auVar81._8_8_;
        auVar80._8_4_ = auVar81._0_4_;
        auVar80._12_4_ = auVar81._4_4_;
        auVar79._0_8_ =
             (auVar95._0_8_ >> 0x20) * (ulonglong)auVar95._0_4_ + auVar80._0_8_ + in_ZMM3._0_8_;
        auVar79._8_8_ =
             (auVar95._8_8_ >> 0x20) * (ulonglong)auVar95._8_4_ + auVar80._8_8_ + in_ZMM3._8_8_;
        in_ZMM3._0_16_ = auVar79;
        pauVar53 = pauVar53 + 4;
      } while (uVar56 - uVar58 != lVar59);
    }
    auVar95 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x40));
    auVar87 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x30));
    auVar88 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x20));
    auVar81 = *(undefined1 (*) [16])((longlong)param_1 + (param_2 - 0x10));
    auVar90._0_8_ = auVar95._8_8_;
    auVar90._8_4_ = auVar95._0_4_;
    auVar90._12_4_ = auVar95._4_4_;
    auVar95 = auVar95 ^ _DAT_14332ee80;
    auVar63._0_8_ = auVar87._8_8_;
    auVar63._8_4_ = auVar87._0_4_;
    auVar63._12_4_ = auVar87._4_4_;
    auVar87 = auVar87 ^ _DAT_14332ee90;
    auVar64._0_8_ = auVar88._8_8_;
    auVar64._8_4_ = auVar88._0_4_;
    auVar64._12_4_ = auVar88._4_4_;
    auVar88 = auVar88 ^ _DAT_14332eea0;
    auVar75._0_8_ = auVar81._8_8_;
    auVar75._8_4_ = auVar81._0_4_;
    auVar75._12_4_ = auVar81._4_4_;
    auVar81 = auVar81 ^ _DAT_14332eeb0;
    auVar13._8_8_ = 0;
    auVar13._0_8_ =
         (auVar95._8_8_ >> 0x20) * (ulonglong)auVar95._8_4_ + auVar90._8_8_ + auVar62._8_8_ ^
         0xa44072db979083e9;
    auVar33._8_8_ = 0;
    auVar33._0_8_ =
         (auVar95._0_8_ >> 0x20) * (ulonglong)auVar95._0_4_ + auVar90._0_8_ + auVar62._0_8_ ^
         0x6dd4de1cad21f72c;
    auVar14._8_8_ = 0;
    auVar14._0_8_ =
         (auVar87._8_8_ >> 0x20) * (ulonglong)auVar87._8_4_ + auVar63._8_8_ + auVar70._8_8_ ^
         0xd05a8278e5c0cc4e;
    auVar34._8_8_ = 0;
    auVar34._0_8_ =
         (auVar87._0_8_ >> 0x20) * (ulonglong)auVar87._0_4_ + auVar63._0_8_ + auVar70._0_8_ ^
         0xe679cb1f67b3b7a4;
    auVar15._8_8_ = 0;
    auVar15._0_8_ =
         (auVar88._8_8_ >> 0x20) * (ulonglong)auVar88._8_4_ + auVar64._8_8_ + uVar92 ^
         0x9035e08e2443f774;
    auVar35._8_8_ = 0;
    auVar35._0_8_ =
         (auVar88._0_8_ >> 0x20) * (ulonglong)auVar88._0_4_ + auVar64._0_8_ + uVar91 ^
         0x4608b82172ffcc7d;
    auVar16._8_8_ = 0;
    auVar16._0_8_ =
         (auVar81._8_8_ >> 0x20) * (ulonglong)auVar81._8_4_ + auVar75._8_8_ + auVar79._8_8_ ^
         0x65d088cb00c391bb;
    auVar36._8_8_ = 0;
    auVar36._0_8_ =
         (auVar81._0_8_ >> 0x20) * (ulonglong)auVar81._0_4_ + auVar75._0_8_ + auVar79._0_8_ ^
         0x52283c4c263a81e6;
    uVar55 = (SUB168(auVar16 * auVar36,8) ^ SUB168(auVar16 * auVar36,0)) +
             (SUB168(auVar15 * auVar35,8) ^ SUB168(auVar15 * auVar35,0)) +
             (SUB168(auVar14 * auVar34,8) ^ SUB168(auVar14 * auVar34,0)) +
             (SUB168(auVar13 * auVar33,8) ^ SUB168(auVar13 * auVar33,0)) +
             param_2 * -0x61c8864e7a143579;
    uVar55 = (uVar55 >> 0x25 ^ uVar55) * 0x165667919e3779f9;
    uVar55 = uVar55 >> 0x20 ^ uVar55;
  }
  return uVar55;
}

