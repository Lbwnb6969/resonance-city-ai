// VA 0x1417d8230, PDB extent 5440 bytes
// asset_pipe::texture_processing::process_regular_image
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001417dca70) overlaps instruction at (ram,0x0001417dca6f)
    */
/* WARNING: Removing unreachable block (ram,0x0001417dcf18) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset_pipe::texture_processing::process_regular_image
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 5440 */

code * pdb_1417d8230(code *param_1,undefined1 ****param_2,undefined8 *param_3,int *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 *puVar12;
  code cVar13;
  uint uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined1 ****ppppuVar17;
  int *piVar18;
  code *extraout_RAX;
  uint uVar19;
  code *pcVar20;
  code *pcVar21;
  char cVar22;
  ulonglong uVar23;
  bool ****ppppbVar24;
  code **ppcVar25;
  undefined8 *puVar26;
  undefined1 *****pppppuVar27;
  uint *puVar28;
  undefined1 ****ppppuVar29;
  undefined1 ****ppppuVar30;
  int iVar31;
  bool ****ppppbVar32;
  ulonglong uVar33;
  undefined1 ****ppppuVar34;
  undefined1 ****ppppuVar35;
  code *arg2;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  byte *pbVar39;
  longlong lVar40;
  int iVar41;
  undefined4 uVar42;
  undefined8 in_R11;
  longlong lVar43;
  byte bVar44;
  undefined8 unaff_R12;
  undefined7 uVar46;
  undefined1 ****ppppuVar45;
  undefined1 *****pppppuVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  undefined1 uVar58;
  undefined4 uVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar60 [15];
  undefined1 auStack_308 [24];
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2c8;
  byte *pbStack_2c0;
  undefined1 *****pppppuStack_2b8;
  undefined1 ****ppppuStack_2b0;
  undefined8 *puStack_2a8;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined1 ****ppppuStack_278;
  undefined1 ****ppppuStack_270;
  undefined8 *puStack_268;
  undefined1 ****ppppuStack_260;
  int *piStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 ****ppppuStack_240;
  undefined8 *puStack_238;
  undefined1 ****ppppuStack_230;
  undefined8 uStack_228;
  undefined1 ****ppppuStack_218;
  undefined8 *puStack_210;
  undefined1 ****ppppuStack_208;
  int *piStack_200;
  undefined8 uStack_1f8;
  undefined1 ****ppppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 ****ppppuStack_1d8;
  int *piStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  int *piStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined1 ****ppppuStack_188;
  undefined8 *puStack_180;
  undefined1 ****ppppuStack_178;
  undefined8 uStack_170;
  undefined1 ****ppppuStack_168;
  undefined8 *puStack_160;
  undefined1 ****ppppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_138;
  undefined1 ****ppppuStack_130;
  int *piStack_128;
  uint uStack_120;
  uint uStack_11c;
  bool ****ppppbStack_118;
  undefined1 ****ppppuStack_110;
  undefined1 ****ppppuStack_108;
  int *piStack_100;
  undefined8 uStack_f8;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  byte bStack_c8;
  byte bStack_c7;
  byte bStack_c6;
  byte bStack_c5;
  byte bStack_c4;
  byte bStack_c3;
  byte bStack_c2;
  byte bStack_c1;
  byte bStack_c0;
  byte bStack_bf;
  byte bStack_be;
  byte bStack_bd;
  byte bStack_bc;
  byte bStack_bb;
  byte bStack_ba;
  byte bStack_b9;
  uint uStack_b8;
  undefined4 uStack_b4;
  byte bStack_af;
  byte bStack_ae;
  byte bStack_ad;
  byte bStack_ac;
  byte bStack_ab;
  byte bStack_aa;
  char cStack_a9;
  undefined1 uStack_a8;
  char cStack_a7;
  undefined1 uStack_a6;
  byte bStack_a5;
  byte bStack_a4;
  bool bStack_a3;
  undefined1 uStack_a2;
  char cStack_a1;
  undefined8 uStack_a0;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined2 uVar59;
  
  ppcVar25 = (code **)auStack_308;
  uStack_a0 = 0xfffffffffffffffe;
  cStack_a7 = *(char *)((longlong)param_4 + 0x16);
  bVar44 = *(byte *)((longlong)param_4 + 0x17);
  puVar28 = (uint *)(ulonglong)bVar44;
  ppppuStack_2b0 = param_2;
  puStack_2a8 = param_3;
  if ((cStack_a7 != '\0') && (bVar44 != 3)) {
    ppppbStack_118 = (bool ****)&ppppuStack_2b0;
    ppppuStack_110 = (undefined1 ****)pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143338d27,&ppppbStack_118,&UNK_143338d98);
  }
  pppppuVar27 = &ppppbStack_118;
  ppppuStack_218 = param_2;
  puStack_210 = param_3;
  pdb_140dace30(pppppuVar27,param_5,param_6);
  ppppbVar32 = (bool ****)&ppppuStack_218;
  pdb_142567b70(&ppppuStack_168,pppppuVar27,ppppbVar32);
  if (ppppuStack_168 == (undefined1 ****)0xa) {
    *(undefined8 **)(param_1 + 8) = puStack_160;
    *(undefined8 *)param_1 = 0x8000000000000000;
    return param_1;
  }
  uStack_250 = uStack_148;
  ppppuStack_260 = ppppuStack_158;
  piStack_258 = uStack_150;
  ppppuStack_270 = ppppuStack_168;
  puStack_268 = puStack_160;
  cStack_a1 = (char)param_4[5];
  uVar46 = (undefined7)((ulonglong)unaff_R12 >> 8);
  puVar26 = &uStack_288;
  piStack_1a0 = param_4;
  pcStack_198 = param_1;
  if (cStack_a1 != '\x01') {
    uStack_a2 = 1;
    ppppbVar24 = (bool ****)&ppppuStack_270;
    pdb_140daccf0(&ppppbStack_118,ppppbVar24);
    ppppuStack_178 = ppppuStack_108;
    uStack_170 = piStack_100;
    piVar18 = uStack_170;
    ppppuStack_188 = ppppbStack_118;
    puStack_180 = ppppuStack_110;
    uStack_190 = 3;
    uVar42 = (undefined4)CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
    uStack_170._0_4_ = (uint)piStack_100;
    pcVar16 = (code *)((ulonglong)piStack_100 & 0xffffffff);
    uStack_170._4_4_ = (uint)((ulonglong)piStack_100 >> 0x20);
    pcVar21 = (code *)(ulonglong)uStack_170._4_4_;
    bStack_a3 = bVar44 != 3 && (3 < uStack_170._4_4_ && 3 < (uint)uStack_170);
    uVar23 = CONCAT71((int7)((ulonglong)ppppbVar24 >> 8),bStack_a3);
    arg2 = (code *)CONCAT71((int7)((ulonglong)ppppbVar32 >> 8),2);
    uVar38 = (ulonglong)*(int *)(&UNK_14333b7ec + (ulonglong)(uint)bVar44 * 4);
    bVar48 = 0xfffffffebccc4813 < uVar38;
    bVar51 = SCARRY8(uVar38,0x14333b7ec);
    bVar50 = (longlong)(&UNK_14333b7ec + uVar38) < 0;
    bVar49 = uVar38 == 0xfffffffebccc4814;
    pcVar20 = pcVar21;
    uVar36 = (uint)uStack_170;
    uVar14 = uStack_170._4_4_;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar44) {
    case 0:
      goto code_r0x0001417d8572;
    case 1:
      goto code_r0x0001417d860f;
    case 2:
      goto code_r0x0001417d861f;
    case 3:
      goto code_r0x0001417d8641;
    case 4:
      goto code_r0x0001417d8f76;
    case 5:
      goto code_r0x0001417d8fe3;
    case 6:
      goto code_r0x0001417d8fd8;
    case 7:
      goto code_r0x0001417d9183;
    case 8:
      goto code_r0x0001417dc478;
    case 9:
      goto code_r0x0001417dc594;
    case 10:
      goto code_r0x0001417dc532;
    case 0xb:
      goto code_r0x0001417dc5f5;
    case 0xc:
      goto code_r0x0001417dc48b;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      goto code_r0x0001417dc645;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      goto code_r0x0001417dc65d;
    case 0x15:
      goto code_r0x0001417dc678;
    case 0x16:
      goto code_r0x0001417dc692;
    case 0x17:
      goto code_r0x0001417dc763;
    case 0x18:
      goto code_r0x0001417dc6fc;
    case 0x19:
      goto code_r0x0001417dc731;
    case 0x1a:
      goto code_r0x0001417dc6c7;
    case 0x1b:
      goto code_r0x0001417dc798;
    case 0x1c:
      goto code_r0x0001417dc7b1;
    case 0x1d:
      goto code_r0x0001417dc74a;
    case 0x1e:
      goto code_r0x0001417dc7f5;
    case 0x1f:
      goto code_r0x0001417dc8a8;
    case 0x20:
      goto code_r0x0001417dc844;
    case 0x21:
      goto code_r0x0001417dc876;
    case 0x22:
      goto code_r0x0001417dc816;
    case 0x23:
      goto code_r0x0001417dc8da;
    case 0x24:
      goto code_r0x0001417dc9e8;
    case 0x25:
      goto code_r0x0001417dceb3;
    case 0x26:
      goto code_r0x0001417dce4a;
    case 0x27:
      goto code_r0x0001417dce89;
    case 0x28:
      goto code_r0x0001417dcda8;
    case 0x29:
      goto code_r0x0001417dcf85;
    case 0x2a:
      goto code_r0x0001417dcfe8;
    case 0x2b:
      goto code_r0x0001417dce9e;
    case 0x2c:
      goto code_r0x0001417dd027;
    case 0x2d:
      goto code_r0x0001417dce0b;
    case 0x2e:
      goto code_r0x0001417dd012;
    case 0x2f:
      goto code_r0x0001417dcd69;
    case 0x30:
      goto code_r0x0001417dcdf6;
    case 0x31:
      goto code_r0x0001417dcfd3;
    case 0x32:
      goto code_r0x0001417dcceb;
    case 0x33:
      goto code_r0x0001417dce5f;
    case 0x34:
      goto code_r0x0001417dccac;
    case 0x35:
      goto code_r0x0001417dcf07;
    case 0x36:
      goto code_r0x0001417dcffd;
    case 0x37:
      goto code_r0x0001417dd123;
    case 0x38:
      goto code_r0x0001417dcf5b;
    case 0x39:
      goto code_r0x0001417dcfbe;
    case 0x3a:
      goto code_r0x0001417dd0a5;
    case 0x3b:
      goto code_r0x0001417dd18c;
    case 0x3c:
      goto code_r0x0001417dce35;
    case 0x3d:
      goto code_r0x0001417dce20;
    case 0x3e:
      goto code_r0x0001417dd1e0;
    case 0x3f:
      goto code_r0x0001417dcc82;
    case 0x40:
      goto code_r0x0001417dd1a1;
    case 0x41:
      goto code_r0x0001417dd1b6;
    case 0x42:
      goto code_r0x0001417dd03c;
    case 0x43:
      goto code_r0x0001417dcef2;
    case 0x44:
      goto code_r0x0001417dd051;
    case 0x45:
      goto code_r0x0001417dcd00;
    case 0x46:
      goto code_r0x0001417dcc97;
    case 0x47:
      goto code_r0x0001417dcc43;
    case 0x48:
      goto code_r0x0001417dcc58;
    case 0x49:
      goto code_r0x0001417dcbc5;
    case 0x4a:
      goto code_r0x0001417dd1cb;
    case 0x4b:
      goto code_r0x0001417dd10e;
    case 0x4c:
      goto code_r0x0001417dcdbd;
    case 0x4d:
      goto code_r0x0001417dcf31;
    case 0x4e:
      goto code_r0x0001417dd14d;
    case 0x4f:
      goto code_r0x0001417dcb1d;
    case 0x50:
      goto code_r0x0001417dccd6;
    case 0x51:
      goto code_r0x0001417dd066;
    case 0x52:
      goto code_r0x0001417dd25e;
    case 0x53:
      goto code_r0x0001417dcc04;
    case 0x54:
      goto code_r0x0001417dcd2a;
    case 0x55:
      goto code_r0x0001417dcd93;
    case 0x56:
      goto code_r0x0001417dcaf3;
    case 0x57:
      goto code_r0x0001417dd2c7;
    case 0x58:
      goto code_r0x0001417dd249;
    case 0x59:
      goto code_r0x0001417dcbda;
    case 0x5a:
      goto code_r0x0001417dd1f5;
    case 0x5b:
      goto code_r0x0001417dd234;
    case 0x5c:
      goto code_r0x0001417dcc19;
    case 0x5d:
      goto code_r0x0001417dd138;
    case 0x5e:
      goto code_r0x0001417dcd3f;
    case 0x5f:
      goto code_r0x0001417dd162;
    case 0x60:
      goto code_r0x0001417dcdd2;
    case 0x61:
      goto code_r0x0001417dcf70;
    case 0x62:
      goto code_r0x0001417dcfaf;
    case 99:
      goto code_r0x0001417dce74;
    case 100:
      goto code_r0x0001417dcde7;
    case 0x65:
      goto code_r0x0001417dcf9a;
    case 0x66:
      goto code_r0x0001417dcb86;
    case 0x67:
      goto code_r0x0001417dcc8f;
    case 0x68:
      goto code_r0x0001417dd31b;
    case 0x69:
      goto code_r0x0001417dcc6d;
    case 0x6a:
      goto code_r0x0001417dcab4;
    case 0x6b:
      goto code_r0x0001417dcbb0;
    case 0x6c:
      goto code_r0x0001417dd21f;
    case 0x6d:
      goto code_r0x0001417dd273;
    case 0x6e:
      goto code_r0x0001417dd29d;
    case 0x6f:
      goto code_r0x0001417dcc2e;
    case 0x70:
      goto code_r0x0001417dcf46;
    case 0x71:
      goto code_r0x0001417dcac9;
    case 0x72:
      goto code_r0x0001417dd2f1;
    case 0x73:
      goto code_r0x0001417dca75;
    case 0x74:
      goto code_r0x0001417dcb9b;
    case 0x75:
      goto code_r0x0001417dcd7e;
    case 0x76:
      goto code_r0x0001417dcd54;
    case 0x77:
      goto code_r0x0001417dca36;
    case 0x78:
      goto code_r0x0001417dca0c;
    case 0x79:
      goto code_r0x0001417dd090;
    case 0x7a:
      goto code_r0x0001417dd0ba;
    case 0x7b:
      goto code_r0x0001417dd288;
    case 0x7c:
      goto code_r0x0001417dcb08;
    case 0x7d:
      goto code_r0x0001417dd370;
    case 0x7e:
      goto code_r0x0001417dd35a;
    case 0x7f:
      goto code_r0x0001417dca4b;
    case 0x80:
      goto code_r0x0001417dcec8;
    case 0x81:
      goto code_r0x0001417dcade;
    case 0x82:
      goto code_r0x0001417dcf1c;
    case 0x83:
      goto code_r0x0001417dd330;
    case 0x84:
      goto code_r0x0001417dca8a;
    case 0x85:
      goto code_r0x0001417dd384;
    case 0x86:
      goto code_r0x0001417dcedd;
    case 0x87:
      goto code_r0x0001417dd399;
    case 0x88:
      goto code_r0x0001417dd345;
    case 0x89:
      goto code_r0x0001417dd306;
    case 0x8a:
      goto code_r0x0001417dcb32;
    case 0x8b:
      goto code_r0x0001417dd2dc;
    case 0x8c:
      goto code_r0x0001417dd2b2;
    case 0x8d:
      goto code_r0x0001417dca9f;
    case 0x8e:
      goto code_r0x0001417dca60;
    case 0x8f:
      goto code_r0x0001417dcbef;
    case 0x90:
      goto code_r0x0001417dcb5c;
    case 0x91:
      goto code_r0x0001417dca21;
    case 0x92:
      goto code_r0x0001417dc9f7;
    case 0x93:
      goto code_r0x0001417dd20a;
    case 0x94:
      goto code_r0x0001417dd0f9;
    case 0x95:
      goto code_r0x0001417dcb71;
    case 0x96:
      goto code_r0x0001417dcb47;
    case 0x97:
      goto code_r0x0001417dd0cf;
    default:
      goto code_r0x0001417dd3ae;
    case 0xa6:
      goto code_r0x0001417dd177;
    case 0xa7:
      goto code_r0x0001417dcd15;
    case 0xa8:
      goto code_r0x0001417dd0e4;
    }
  }
  uStack_f8 = uStack_148;
  ppppuStack_108 = ppppuStack_158;
  piStack_100 = uStack_150;
  ppppbStack_118 = (bool ****)ppppuStack_168;
  ppppuStack_110 = (undefined1 ****)puStack_160;
  uStack_a2 = 0;
  pdb_140dac260(&ppppuStack_168,&ppppbStack_118);
  puVar12 = puStack_160;
  fVar11 = _DAT_1431fec88;
  fVar10 = _DAT_1431fec84;
  fVar9 = _DAT_1431fec54;
  fVar8 = _DAT_1431fec50;
  uVar42 = _DAT_14300ccb4;
  auVar5 = ZEXT416((uint)uStack_150) * (undefined1  [16])0x4 * ZEXT416(uStack_150._4_4_);
  ppppuVar17 = auVar5._0_8_;
  if (auVar5._8_8_ != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143516a80);
  }
  if (ppppuStack_158 < ppppuVar17) {
    pdb_142dc8420(0,ppppuVar17,ppppuStack_158,&UNK_143516a98);
LAB_1417d91e7:
                    /* WARNING: Does not return */
    pcVar16 = (code *)invalidInstructionException();
    (*pcVar16)();
  }
  pppppuVar27 = (undefined1 *****)((ulonglong)ppppuVar17 & 0x1ffffffffffffffc);
  uVar15 = 0;
  ppppuVar17 = ppppuStack_158;
  if (pppppuVar27 != (undefined1 *****)0x0) {
    pppppuVar47 = (undefined1 *****)0x0;
    do {
      while (fVar53 = *(float *)((longlong)puVar12 + (longlong)pppppuVar47 * 4), fVar53 <= fVar10) {
        *(float *)((longlong)puVar12 + (longlong)pppppuVar47 * 4) = fVar53 / fVar8;
        fVar53 = *(float *)((longlong)puVar12 + (longlong)pppppuVar47 * 4 + 4);
        if (fVar53 <= fVar10) goto LAB_1417d8477;
LAB_1417d84b7:
        uVar52 = pub_142e32ad0((fVar53 + fVar11) / fVar9,uVar42);
        *(undefined4 *)((longlong)puVar12 + (longlong)pppppuVar47 * 4 + 4) = uVar52;
        fVar53 = *(float *)((longlong)puVar12 + (longlong)pppppuVar47 * 4 + 8);
        if (fVar53 <= fVar10) goto LAB_1417d84e1;
LAB_1417d8420:
        uVar52 = pub_142e32ad0((fVar53 + fVar11) / fVar9,uVar42);
        *(undefined4 *)((longlong)puVar12 + (longlong)pppppuVar47 * 4 + 8) = uVar52;
        pppppuVar47 = (undefined1 *****)((longlong)pppppuVar47 + 4);
        if (pppppuVar27 == pppppuVar47) goto LAB_1417d84fa;
      }
      uVar52 = pub_142e32ad0((fVar53 + fVar11) / fVar9,uVar42);
      *(undefined4 *)((longlong)puVar12 + (longlong)pppppuVar47 * 4) = uVar52;
      fVar53 = *(float *)((longlong)puVar12 + (longlong)pppppuVar47 * 4 + 4);
      if (fVar10 < fVar53) goto LAB_1417d84b7;
LAB_1417d8477:
      *(float *)((longlong)puVar12 + (longlong)pppppuVar47 * 4 + 4) = fVar53 / fVar8;
      fVar53 = *(float *)((longlong)puVar12 + (longlong)pppppuVar47 * 4 + 8);
      if (fVar10 < fVar53) goto LAB_1417d8420;
LAB_1417d84e1:
      *(float *)((longlong)puVar12 + (longlong)pppppuVar47 * 4 + 8) = fVar53 / fVar8;
      pppppuVar47 = (undefined1 *****)((longlong)pppppuVar47 + 4);
    } while (pppppuVar27 != pppppuVar47);
  }
LAB_1417d84fa:
  ppppuStack_178 = ppppuStack_158;
  uStack_170 = uStack_150;
  piVar18 = uStack_170;
  ppppuStack_188 = ppppuStack_168;
  puStack_180 = puStack_160;
  uStack_190 = 9;
  uVar42 = 0;
  uStack_170._0_4_ = (uint)uStack_150;
  pcVar16 = (code *)((ulonglong)uStack_150 & 0xffffffff);
  uStack_170._4_4_ = (uint)((ulonglong)uStack_150 >> 0x20);
  pcVar21 = (code *)(ulonglong)uStack_170._4_4_;
  bStack_a3 = bVar44 != 3 && (3 < uStack_170._4_4_ && 3 < (uint)uStack_170);
  uVar23 = CONCAT71((int7)((ulonglong)uVar15 >> 8),bStack_a3);
  arg2 = (code *)CONCAT71((int7)((ulonglong)ppppuVar17 >> 8),2);
  uVar38 = (ulonglong)*(int *)(&UNK_14333b7ec + (ulonglong)(uint)bVar44 * 4);
  bVar48 = 0xfffffffebccc4813 < uVar38;
  bVar51 = SCARRY8(uVar38,0x14333b7ec);
  bVar50 = (longlong)(&UNK_14333b7ec + uVar38) < 0;
  bVar49 = uVar38 == 0xfffffffebccc4814;
  pcVar20 = pcVar21;
  param_4 = piStack_1a0;
  uVar36 = (uint)uStack_170;
  uVar14 = uStack_170._4_4_;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar44) {
  case 0:
code_r0x0001417d8572:
    uStack_170 = piVar18;
    bStack_a4 = (byte)arg2;
    if ((char)uVar23 == '\0') goto code_r0x0001417d8650;
    goto code_r0x0001417d862d;
  case 1:
code_r0x0001417d860f:
    uStack_170 = piVar18;
    bStack_a4 = 1;
    cVar22 = (char)uVar23;
    break;
  case 2:
code_r0x0001417d861f:
    uStack_170 = piVar18;
    bStack_a4 = 0;
    cVar22 = (char)uVar23;
    break;
  case 3:
code_r0x0001417d8641:
    uStack_170 = piVar18;
    bStack_a4 = 3;
    if ((char)uVar23 != '\0') {
      uStack_a6 = 1;
      uStack_b4 = uVar42;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143338db0);
    }
    goto code_r0x0001417d8650;
  case 4:
    goto code_r0x0001417d8f76;
  case 5:
    goto code_r0x0001417d8fe3;
  case 6:
    goto code_r0x0001417d8fd8;
  case 7:
code_r0x0001417d9183:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
code_r0x0001417dc478:
    uStack_170 = piVar18;
    pppppuVar27 = pppppuStack_2b8;
    cVar13 = *pcVar16;
    *pcVar16 = (code)((char)*pcVar16 + (byte)pcVar16);
    if (!CARRY1((byte)cVar13,(byte)pcVar16) && *pcVar16 != (code)0x0) {
      pcVar16 = arg2;
    }
    if (pcVar16 < (code *)0x5) {
      arg2 = (code *)&UNK_14333b80c;
code_r0x0001417dc48f:
                    /* WARNING: Could not recover jumptable at 0x0001417dc496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar16 = (code *)(*(arg2 + *(int *)(arg2 + (longlong)pcVar16 * 4)))();
      return pcVar16;
    }
    ppppuStack_2b0 = (undefined1 ****)0xfffffffffffffffe;
    pcVar16 = *(code **)(pcVar21 + 8);
    if ((((uint)pcVar16 & 3) - 2 < 2) || (((ulonglong)pcVar16 & 3) == 0)) {
      return pcVar16;
    }
    pcStack_2c8 = pcVar16 + -1;
    pbStack_2c0 = *(byte **)(pcVar16 + -1);
    pppppuStack_2b8 = *(undefined1 ******)(pcVar16 + 7);
    if (*pppppuStack_2b8 != (undefined1 ****)0x0) {
      uStack_2f0 = 0x1404b3933;
      (*(code *)*pppppuStack_2b8)(pbStack_2c0);
    }
    if (pppppuStack_2b8[1] != (undefined1 ****)0x0) {
      uStack_2f0 = 0x1404b394e;
      pub_1406abac0(pbStack_2c0,(ulonglong)pppppuStack_2b8[1],(ulonglong)pppppuStack_2b8[2]);
    }
    uVar23 = 0x18;
    uVar38 = 8;
    ppcVar25 = &pcStack_2a0;
    pcStack_2a0 = pcStack_2c8;
    puVar26 = puStack_2a8;
    goto code_r0x0001406abac0;
  case 9:
code_r0x0001417dc594:
    uStack_170 = piVar18;
    if (!bVar49) {
      (*pcVar16)(pcStack_2a0);
    }
    uVar23 = *(ulonglong *)(pcStack_298 + 8);
    if (uVar23 == 0) {
      return pcStack_298;
    }
    uVar38 = *(ulonglong *)(pcStack_298 + 0x10);
    goto code_r0x0001417dc606;
  case 10:
code_r0x0001417dc532:
    uStack_170 = piVar18;
    pcVar16[-0x7d] = (code)((char)pcVar16[-0x7d] + (char)pcVar21);
    *puVar28 = *puVar28 + (int)pcVar21;
    *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
    pcVar16[-0x7d] = (code)((char)pcVar16[-0x7d] + (char)pcVar21);
    *(uint *)pcVar16 = *(uint *)pcVar16 >> 8;
    uVar14 = *(uint *)pcVar21;
    goto joined_r0x0001417dc5fa;
  case 0xb:
code_r0x0001417dc5f5:
    uStack_170 = piVar18;
    uVar14 = *(uint *)pcVar21;
joined_r0x0001417dc5fa:
    uVar23 = (ulonglong)uVar14;
    if (uVar23 == 0) {
      return pcVar16;
    }
    pcStack_2a0 = *(code **)(pcVar21 + 8);
    uVar38 = 1;
code_r0x0001417dc606:
    ppcVar25 = &pcStack_2a0;
    puVar26 = puStack_2a8;
    pppppuVar27 = pppppuStack_2b8;
code_r0x0001406abac0:
    *(undefined8 **)((longlong)ppcVar25 + -8) = puVar26;
    *(undefined1 ******)((longlong)ppcVar25 + -0x10) = pppppuVar27;
    pcVar16 = pcStack_2a0;
    if (0x10 < uVar38) {
      pcVar16 = *(code **)(pcStack_2a0 + -8);
    }
    *(undefined **)((longlong)ppcVar25 + -0x40) = &UNK_140f3c37e;
    uVar15 = GetProcessHeap(pcStack_2a0,uVar23);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)HeapFree(uVar15,0,pcVar16);
    return pcVar16;
  case 0xc:
code_r0x0001417dc48b:
    while (uStack_170 = piVar18, bVar51 == bVar50) {
      pcVar16 = (code *)CONCAT71((int7)((ulonglong)pcVar16 >> 8),(char)pcVar16 + '\x0f');
      LOCK();
      uVar14 = *puVar28;
      *puVar28 = (uint)puVar28;
      puVar28 = (uint *)(ulonglong)uVar14;
      UNLOCK();
      *(uint *)pcVar16 = *(uint *)pcVar16 + (int)pcVar16;
      pcVar1 = (char *)((longlong)&uStack_288 + (longlong)pcVar21 * 4 + 5);
      cVar22 = *pcVar1;
      *pcVar1 = *pcVar1 + (char)pcVar21;
      bVar50 = *pcVar1 < '\0';
      piVar18 = uStack_170;
      bVar51 = SCARRY1(cVar22,(char)pcVar21);
    }
    goto code_r0x0001417dc48f;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
code_r0x0001417dc645:
    uStack_170 = piVar18;
    pub_1406abac0((byte *)pcStack_2a0,uVar23,(ulonglong)arg2);
    return extraout_RAX;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
code_r0x0001417dc65d:
    uStack_170 = piVar18;
    pcVar16 = (code *)swi(3);
    pcVar16 = (code *)(*pcVar16)();
    return pcVar16;
  case 0x15:
code_r0x0001417dc678:
    uStack_170 = piVar18;
    pcVar20 = pcVar21 + -1;
    if (pcVar20 != (code *)0x0 && !bVar49) {
      pcVar21 = (code *)CONCAT71((int7)((ulonglong)pcVar20 >> 8),
                                 (char)pcVar20 + (char)((ulonglong)pcVar20 >> 8));
      in((short)uVar23);
      piVar18 = uStack_170;
code_r0x0001417dc6c7:
      uStack_170 = piVar18;
      pcVar16 = (code *)swi(3);
      pcVar16 = (code *)(*pcVar16)(pcVar21);
      return pcVar16;
    }
    uVar23 = (ulonglong)*(uint *)(pcVar21 + 7);
    if (uVar23 == 0) {
      return pcVar16;
    }
    uVar38 = 1;
    pcStack_2a0 = *(code **)(pcVar21 + 0xf);
    goto code_r0x0001406abac0;
  case 0x16:
code_r0x0001417dc692:
    uStack_170 = piVar18;
    if ((ulonglong)*(uint *)(pcVar21 + 8) == 0) {
      return pcVar16;
    }
    uVar23 = (ulonglong)*(uint *)(pcVar21 + 8) * 2;
    uVar38 = 2;
    pcStack_2a0 = *(code **)(pcVar21 + 0x10);
    ppcVar25 = (code **)auStack_308;
    goto code_r0x0001406abac0;
  case 0x17:
code_r0x0001417dc763:
    uStack_170 = piVar18;
    *(uint *)(pcVar16 + -0x77) = *(int *)(pcVar16 + -0x77) + uVar14;
    pcVar16 = (code *)pdb_140f66090((ulonglong)pcVar16 & 0xffffffffffffff20,&UNK_143339450,7,
                                    &uStack_2d8);
    return pcVar16;
  case 0x18:
code_r0x0001417dc6fc:
    uStack_170 = piVar18;
    pcVar16 = (code *)pdb_140f66090((ulonglong)pcVar16 & 0xffffffffffffff20,&UNK_143339400,3,
                                    &uStack_2d8);
    return pcVar16;
  case 0x19:
code_r0x0001417dc731:
    uStack_170 = piVar18;
    pcVar16 = (code *)pdb_140f66090((ulonglong)pcVar16 & 0xffffffffffffff20,&UNK_143339465,0xc,
                                    &uStack_2d8);
    return pcVar16;
  case 0x1a:
    goto code_r0x0001417dc6c7;
  case 0x1b:
code_r0x0001417dc798:
    uStack_170 = piVar18;
    pcVar20 = pcVar16 + -0x7d;
    *(uint *)pcVar20 = *(uint *)pcVar20 >> 4 | *(uint *)pcVar20 << 0x1c;
    pcVar21[-0x72b70088] = (code)((char)pcVar21[-0x72b70088] + 1);
    pcVar16 = (code *)(ulonglong)
                      ((int)pcVar16 + 0x1b5cce2 +
                      (uint)((byte)pcVar21 < (byte)((ulonglong)pcVar21 >> 8)));
    goto pdb_140f679a0;
  case 0x1c:
code_r0x0001417dc7b1:
    uStack_170 = piVar18;
    pcVar16 = pcVar16 + -0x7d;
    *(uint *)pcVar16 = *(uint *)pcVar16 >> 4 | *(uint *)pcVar16 << 0x1c;
    uVar14 = in(0xb1);
    puVar28 = (uint *)(ulonglong)uVar14;
    if ((char)((char)pcVar21 - (char)((ulonglong)pcVar21 >> 8)) < '\0') {
      *(int *)((longlong)puVar28 + -0x7d) = *(int *)((longlong)puVar28 + -0x7d) + -1;
      *puVar28 = *puVar28 >> 8 | *puVar28 << 0x18;
    }
    uStack_2d8 = pcVar21 + 8;
    pcStack_2e8 = (code *)&UNK_143339408;
    pcVar16 = (code *)pdb_140f66090(puVar28,&UNK_143339428,2,&uStack_2d8);
    return pcVar16;
  case 0x1d:
code_r0x0001417dc74a:
    uStack_170 = piVar18;
    if (!bVar50) {
      return pcVar16;
    }
    pcVar16 = (code *)(**(code **)(pcVar16 + 0x38c48348))(pcVar21,(int)pcVar16 >> 0x1f);
    return pcVar16;
  case 0x1e:
code_r0x0001417dc7f5:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x1f:
code_r0x0001417dc8a8:
    uStack_170 = piVar18;
    pcVar16 = (code *)pdb_140f66090(pcVar21,uVar23,0xb);
    return pcVar16;
  case 0x20:
code_r0x0001417dc844:
    uStack_170 = piVar18;
    pcVar16 = (code *)0x4;
    if (arg2 + 7 < pcVar21) {
      pcVar16 = pcVar21 + (longlong)arg2;
    }
                    /* WARNING: Could not recover jumptable at 0x0001417dc86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(*(code *)(&UNK_14333b864 + *(int *)(&UNK_14333b864 + (longlong)pcVar16 * 4)))
                                (uVar23,&UNK_14333b864,
                                 &UNK_14333b864 + *(int *)(&UNK_14333b864 + (longlong)pcVar16 * 4));
    return pcVar16;
  case 0x21:
code_r0x0001417dc876:
    uStack_170 = piVar18;
    pcStack_2e8 = (code *)&UNK_143339498;
    pcVar16 = (code *)pdb_140f66090(pcVar21,&UNK_1433394b8,8,&uStack_2d8);
    return pcVar16;
  case 0x22:
code_r0x0001417dc816:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x23:
code_r0x0001417dc8da:
    uStack_170 = piVar18;
    pcVar16 = (code *)pdb_140f66090(pcVar21,uVar23,9);
    return pcVar16;
  case 0x24:
code_r0x0001417dc9e8:
    return pcVar16;
  case 0x25:
code_r0x0001417dceb3:
    uStack_170 = piVar18;
    pcVar16 = (code *)0x10;
    goto pdb_140f679a0;
  case 0x26:
code_r0x0001417dce4a:
    uStack_170 = piVar18;
    *puVar28 = (uint)pcVar16;
    if (bVar50) {
      *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
      pcVar16 = (code *)(ulonglong)((uint)pcVar16 + 0x1b5c9de + (uint)bVar48);
    }
    goto pdb_140f679a0;
  case 0x27:
code_r0x0001417dce89:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x28:
code_r0x0001417dcda8:
    uStack_170 = piVar18;
    *(byte *)puVar28 = *(byte *)pppppuVar27;
    pcVar16 = (code *)swi(0xb5);
    pcVar16 = (code *)(*pcVar16)();
    *(uint *)(pcVar21 + -0x48) = *(uint *)(pcVar21 + -0x48) + (int)pcVar16;
    *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
    goto pdb_140f679a0;
  case 0x29:
code_r0x0001417dcf85:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x2a:
code_r0x0001417dcfe8:
    uStack_170 = piVar18;
    pcVar16 = (code *)(ulonglong)(uVar36 + 0x1b5c70a);
    goto pdb_140f679a0;
  case 0x2b:
code_r0x0001417dce9e:
    *puVar28 = (uint)uStack_170;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2c:
code_r0x0001417dd027:
    uStack_170 = piVar18;
    pcVar16 = (code *)(ulonglong)(uVar36 + 0x1b5c907);
    goto pdb_140f679a0;
  case 0x2d:
code_r0x0001417dce0b:
    uStack_170 = piVar18;
    *puVar28 = (uint)pcVar16;
    if (bVar50) {
      *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
      pcVar16 = (code *)(ulonglong)((uint)pcVar16 + 0x1b5cbe1 + (uint)bVar48);
    }
    goto pdb_140f679a0;
  case 0x2e:
code_r0x0001417dd012:
    uStack_170 = piVar18;
    pcVar16 = (code *)(ulonglong)(uVar36 + 0x1b5c5f4);
    goto pdb_140f679a0;
  case 0x2f:
code_r0x0001417dcd69:
    uStack_170 = piVar18;
    out(0xca,(int)pcVar16);
    goto pdb_140f679a0;
  case 0x30:
code_r0x0001417dcdf6:
    uStack_170 = piVar18;
    *puVar28 = (uint)pcVar16;
    if (bVar50) {
      *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
      pcVar16 = (code *)(ulonglong)((uint)pcVar16 + 0x1b5c874 + (uint)bVar48);
    }
    goto pdb_140f679a0;
  case 0x31:
code_r0x0001417dcfd3:
    uStack_170 = piVar18;
    pcVar16 = (code *)(ulonglong)(uVar36 + 0x1b5c9e1);
    goto pdb_140f679a0;
  case 0x32:
code_r0x0001417dcceb:
    uStack_170 = piVar18;
    pcVar16 = (code *)0xb;
    goto pdb_140f679a0;
  case 0x33:
code_r0x0001417dce5f:
    uStack_170 = piVar18;
    *puVar28 = (uint)pcVar16;
    if (bVar50) {
      *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
      pcVar16 = (code *)(ulonglong)((uint)pcVar16 + 0x1b5caa6 + (uint)bVar48);
    }
    goto pdb_140f679a0;
  case 0x34:
code_r0x0001417dccac:
    uStack_170 = piVar18;
    pcVar16 = (code *)0x9;
    goto pdb_140f679a0;
  case 0x35:
code_r0x0001417dcf07:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x36:
code_r0x0001417dcffd:
    uStack_170 = piVar18;
    pcVar16 = (code *)(ulonglong)(uVar36 + 0x1b5c913);
    goto pdb_140f679a0;
  case 0x37:
code_r0x0001417dd123:
    uStack_170 = piVar18;
    *(uint *)(pcVar21 + -0x48) = *(uint *)(pcVar21 + -0x48) + (int)pcVar16;
    *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
    goto pdb_140f679a0;
  case 0x38:
code_r0x0001417dcf5b:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x39:
code_r0x0001417dcfbe:
    uStack_170 = piVar18;
    pcVar16 = (code *)(ulonglong)(uVar36 + 0x1b5c873);
    goto pdb_140f679a0;
  case 0x3a:
code_r0x0001417dd0a5:
    uStack_170 = piVar18;
    pcVar21 = (code *)0x4101b5c5;
    pcVar16 = (code *)0x12;
    goto code_r0x0001417dd097;
  case 0x3b:
code_r0x0001417dd18c:
    uStack_170 = piVar18;
    *(byte *)puVar28 = *(byte *)pppppuVar27;
    goto pdb_140f679a0;
  case 0x3c:
code_r0x0001417dce35:
    uStack_170 = piVar18;
    *puVar28 = (uint)pcVar16;
    if (bVar50) {
      *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
      pcVar16 = (code *)(ulonglong)((uint)pcVar16 + 0x1b5c7c0 + (uint)bVar48);
    }
    goto pdb_140f679a0;
  case 0x3d:
code_r0x0001417dce20:
    uStack_170 = piVar18;
    *puVar28 = (uint)pcVar16;
    if (bVar50) {
      *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
      pcVar16 = (code *)(ulonglong)((uint)pcVar16 + 0x1b5ca7f + (uint)bVar48);
    }
    goto pdb_140f679a0;
  case 0x3e:
code_r0x0001417dd1e0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3f:
code_r0x0001417dcc82:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x40:
code_r0x0001417dd1a1:
    uStack_170 = piVar18;
    *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
    goto pdb_140f679a0;
  case 0x41:
code_r0x0001417dd1b6:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x42:
code_r0x0001417dd03c:
    uStack_170 = piVar18;
    pcVar16 = (code *)(ulonglong)(uVar36 + 0x1b5c8dc);
    goto pdb_140f679a0;
  case 0x43:
code_r0x0001417dcef2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x44:
code_r0x0001417dd051:
    uStack_170 = piVar18;
    pcVar16 = (code *)0x18;
    goto pdb_140f679a0;
  case 0x45:
code_r0x0001417dcd00:
    uStack_170 = piVar18;
    pcVar16 = (code *)swi(3);
    pcVar16 = (code *)(*pcVar16)();
    return pcVar16;
  case 0x46:
code_r0x0001417dcc97:
    uVar14 = in((short)uVar23);
    return (code *)(ulonglong)uVar14;
  case 0x47:
code_r0x0001417dcc43:
    uStack_170 = piVar18;
    pcVar16 = (code *)0x9;
    goto pdb_140f679a0;
  case 0x48:
code_r0x0001417dcc58:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x49:
code_r0x0001417dcbc5:
    return pcVar16;
  case 0x4a:
code_r0x0001417dd1cb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4b:
code_r0x0001417dd10e:
    return pcVar16;
  case 0x4c:
code_r0x0001417dcdbd:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x4d:
code_r0x0001417dcf31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4e:
code_r0x0001417dd14d:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x4f:
code_r0x0001417dcb1d:
    *(char *)puVar28 = (char)pcVar16;
    return pcVar16;
  case 0x50:
code_r0x0001417dccd6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
code_r0x0001417dd066:
    uStack_170 = piVar18;
    pcVar16 = (code *)0x12;
    goto pdb_140f679a0;
  case 0x52:
code_r0x0001417dd25e:
    uStack_170 = piVar18;
    pcVar16 = (code *)0xb;
    goto pdb_140f679a0;
  case 0x53:
code_r0x0001417dcc04:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x54:
code_r0x0001417dcd2a:
    uStack_170 = piVar18;
    pcVar16 = (code *)0xc;
    goto pdb_140f679a0;
  case 0x55:
code_r0x0001417dcd93:
    return pcVar16;
  case 0x56:
code_r0x0001417dcaf3:
    uStack_170 = piVar18;
    pcVar16 = (code *)CONCAT71((int7)((ulonglong)pcVar16 >> 8),
                               ((char)pcVar16 - (char)uVar23) - bVar48);
    goto pdb_140f679a0;
  case 0x57:
code_r0x0001417dd2c7:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x58:
code_r0x0001417dd249:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
code_r0x0001417dcbda:
    return pcVar16;
  case 0x5a:
code_r0x0001417dd1f5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5b:
code_r0x0001417dd234:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5c:
code_r0x0001417dcc19:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x5d:
code_r0x0001417dd138:
    in((short)uVar23);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5e:
code_r0x0001417dcd3f:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x5f:
code_r0x0001417dd162:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x60:
code_r0x0001417dcdd2:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x61:
code_r0x0001417dcf70:
    uVar58 = in((short)uVar23);
    *(undefined1 *)puVar28 = uVar58;
    return pcVar16;
  case 0x62:
code_r0x0001417dcfaf:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 99:
code_r0x0001417dce74:
    uStack_170 = piVar18;
    *puVar28 = (uint)pcVar16;
    if (bVar50) {
      *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
      pcVar16 = (code *)(ulonglong)((uint)pcVar16 + 0x1b5cab3 + (uint)bVar48);
    }
    goto pdb_140f679a0;
  case 100:
code_r0x0001417dcde7:
    uStack_170 = piVar18;
    pcVar16 = (code *)CONCAT71((int7)((ulonglong)pcVar16 >> 8),(char)pcVar16 + -0x34 + bVar48);
    goto pdb_140f679a0;
  case 0x65:
code_r0x0001417dcf9a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x66:
code_r0x0001417dcb86:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x67:
code_r0x0001417dcc8f:
    uStack_170 = piVar18;
    pcVar16 = pcVar21;
    goto pdb_140f679a0;
  case 0x68:
code_r0x0001417dd31b:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x69:
code_r0x0001417dcc6d:
    uStack_170 = piVar18;
    pcVar16 = (code *)swi(3);
    pcVar16 = (code *)(*pcVar16)();
    return pcVar16;
  case 0x6a:
code_r0x0001417dcab4:
    uStack_170 = piVar18;
    pcVar20 = pcVar16;
    if (bVar51) {
      *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
      pcVar16 = (code *)(ulonglong)((int)pcVar16 + 0x1b5d09e + (uint)bVar48);
      goto pdb_140f679a0;
    }
    goto code_r0x0001417dcac1;
  case 0x6b:
code_r0x0001417dcbb0:
    uStack_170 = piVar18;
    pcVar16 = (code *)swi(3);
    pcVar16 = (code *)(*pcVar16)();
    return pcVar16;
  case 0x6c:
code_r0x0001417dd21f:
    uStack_170 = piVar18;
    pcVar16 = (code *)CONCAT71((int7)((ulonglong)pcVar16 >> 8),((char)pcVar16 + ';') - bVar48);
    goto pdb_140f679a0;
  case 0x6d:
code_r0x0001417dd273:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6e:
code_r0x0001417dd29d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6f:
code_r0x0001417dcc2e:
    uStack_170 = piVar18;
    pcVar16 = (code *)0x9;
    goto pdb_140f679a0;
  case 0x70:
code_r0x0001417dcf46:
    uStack_170 = piVar18;
    if (bVar51 == bVar50) {
      *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
      pcVar16[-0x77] = (code)((char)pcVar16[-0x77] + (char)uVar14);
      *(char *)puVar28 = (char)pcVar16;
    }
    goto pdb_140f679a0;
  case 0x71:
code_r0x0001417dcac9:
    return pcVar16;
  case 0x72:
code_r0x0001417dd2f1:
    uStack_170 = piVar18;
    if (bVar49 || bVar51 != bVar50) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto pdb_140f679a0;
  case 0x73:
code_r0x0001417dca75:
    uStack_170 = piVar18;
    pcVar20 = pcVar21 + -1;
    if (pcVar21 + -1 == (code *)0x0 || (int)(uint)bVar44 >> 1 != 0) goto pdb_140f679a0;
code_r0x0001417dcac1:
    pcVar16 = pcVar20;
    goto pdb_140f679a0;
  case 0x74:
code_r0x0001417dcb9b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
code_r0x0001417dcd7e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x76:
code_r0x0001417dcd54:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x77:
code_r0x0001417dca36:
    uStack_170 = piVar18;
    *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
    pcVar20 = pcVar21;
    piVar18 = uStack_170;
code_r0x0001417dca21:
    uStack_170 = piVar18;
    pcStack_2e8 = pcVar20;
    pcVar16 = (code *)pdb_140f66090(pcVar16,&UNK_143339598,4,&uStack_2d8);
    return pcVar16;
  case 0x78:
    goto code_r0x0001417dca0c;
  case 0x79:
code_r0x0001417dd090:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7a:
code_r0x0001417dd0ba:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7b:
code_r0x0001417dd288:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7c:
code_r0x0001417dcb08:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7d:
code_r0x0001417dd370:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7e:
code_r0x0001417dd35a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7f:
code_r0x0001417dca4b:
    uStack_170 = piVar18;
    pcVar16 = (code *)swi(3);
    pcVar16 = (code *)(*pcVar16)();
    return pcVar16;
  case 0x80:
code_r0x0001417dcec8:
    uStack_170 = piVar18;
    pcVar16 = pcVar21;
    goto pdb_140f679a0;
  case 0x81:
code_r0x0001417dcade:
    return pcVar16;
  case 0x82:
code_r0x0001417dcf1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x83:
code_r0x0001417dd330:
    uStack_170 = piVar18;
    if (!bVar48) {
      *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
      pcVar16[-0x77] = (code)((char)pcVar16[-0x77] + (char)pcVar21);
      uVar14 = *puVar28;
      bVar44 = *(byte *)pppppuVar27;
      if ((char)(bVar44 - (byte)uVar14) < '\0') {
        *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
        pcVar16 = (code *)(ulonglong)((int)pcVar16 + 0x1b5c691 + (uint)(bVar44 < (byte)uVar14));
      }
    }
    goto pdb_140f679a0;
  case 0x84:
code_r0x0001417dca8a:
    uStack_170 = piVar18;
    *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
    pcVar16[-0x77] = (code)((char)pcVar16[-0x77] + (char)pcVar21);
    uVar14 = *puVar28;
    uVar36 = (uint)pcVar16;
    if ((int)(uVar36 - *puVar28) < 0) {
      *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
      pcVar16 = (code *)(ulonglong)(uVar36 + 0x1b5cf71 + (uint)(uVar36 < uVar14));
    }
    goto pdb_140f679a0;
  case 0x85:
code_r0x0001417dd384:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x86:
code_r0x0001417dcedd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x87:
code_r0x0001417dd399:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x88:
code_r0x0001417dd345:
    uStack_170 = piVar18;
    pcVar16 = (code *)0x4;
    goto pdb_140f679a0;
  case 0x89:
code_r0x0001417dd306:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8a:
code_r0x0001417dcb32:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8b:
code_r0x0001417dd2dc:
    uStack_170 = piVar18;
    out(0xc5,(char)pcVar16);
    goto pdb_140f679a0;
  case 0x8c:
code_r0x0001417dd2b2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8d:
code_r0x0001417dca9f:
    uStack_170 = piVar18;
    if (!bVar51) {
      pcVar21 = (code *)(ulonglong)*(uint *)(uVar23 + (longlong)pcVar21 * 4);
      piVar18 = uStack_170;
code_r0x0001417dca60:
      uStack_170 = piVar18;
      *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
                    /* WARNING: Could not recover jumptable at 0x0001417dca76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar16 = (code *)(*(code *)(&UNK_14333b87c + *(int *)(&UNK_14333b87c + (longlong)pcVar21 * 4)
                                  ))(&UNK_14333b87c +
                                     *(int *)(&UNK_14333b87c + (longlong)pcVar21 * 4),&UNK_14333b87c
                                     ,7);
      return pcVar16;
    }
    goto pdb_140f679a0;
  case 0x8e:
    goto code_r0x0001417dca60;
  case 0x8f:
code_r0x0001417dcbef:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x90:
code_r0x0001417dcb5c:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x91:
    goto code_r0x0001417dca21;
  case 0x92:
code_r0x0001417dc9f7:
    uStack_170 = piVar18;
    pcVar20 = pcVar16;
    piVar18 = uStack_170;
    if (*pcVar21 != (code)0x25) {
      pcVar20 = (code *)&UNK_1433395a0;
      uStack_2d8 = pcVar21;
      goto code_r0x0001417dca21;
    }
    goto code_r0x0001417dca0c;
  case 0x93:
code_r0x0001417dd20a:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0x94:
code_r0x0001417dd0f9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x95:
code_r0x0001417dcb71:
    uStack_170 = piVar18;
    pcVar16 = (code *)0x13;
    goto pdb_140f679a0;
  case 0x96:
code_r0x0001417dcb47:
    uStack_170 = piVar18;
    pcVar16 = (code *)0xc;
    goto pdb_140f679a0;
  case 0x97:
code_r0x0001417dd0cf:
    uStack_170 = piVar18;
    pcVar21 = pcVar21 + -1;
    if (pcVar21 == (code *)0x0) goto pdb_140f679a0;
code_r0x0001417dd097:
    *pcVar16 = (code)((char)*pcVar16 + (char)pcVar16);
    pcVar16[-0x77] = (code)((char)pcVar16[-0x77] + (char)pcVar21);
    *(int *)(pcVar16 + -0x73) = *(int *)(pcVar16 + -0x73) + -1;
    pcVar16 = (code *)(ulonglong)((int)pcVar16 + 0x1b5c5b9);
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar16 = (code *)(**(code **)(*(longlong *)(pcVar16 + 8) + 0x18))(*(undefined8 *)pcVar16);
    return pcVar16;
  default:
code_r0x0001417dd3ae:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0xa6:
code_r0x0001417dd177:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0xa7:
code_r0x0001417dcd15:
    uStack_170 = piVar18;
    goto pdb_140f679a0;
  case 0xa8:
code_r0x0001417dd0e4:
    uStack_170 = piVar18;
    func_0x0001827f86af();
    pcVar16 = (code *)0xd;
    goto pdb_140f679a0;
  }
  if (cVar22 == '\0') {
code_r0x0001417d8650:
    iVar31 = 1;
    uVar23 = CONCAT71(uVar46,1);
    if (*param_4 == 1) goto code_r0x0001417d8662;
code_r0x0001417d8726:
    uStack_cc = 0;
    uStack_228._0_4_ = (uint)uStack_170;
    uStack_b4 = uVar42;
    piVar18 = uStack_170;
    puStack_238 = puStack_180;
    ppppuStack_230 = ppppuStack_178;
    uStack_248 = uStack_190;
    ppppuStack_240 = ppppuStack_188;
    uStack_d4 = (uint)uStack_228;
  }
  else {
code_r0x0001417d862d:
    if ((char)*param_4 == '\0') {
      uVar36 = (uint)pcVar16 & 3;
      uVar37 = uVar14 & 3;
      uVar23 = CONCAT71(uVar46,4);
      if (((ulonglong)pcVar16 & 3) == 0 && uVar37 == 0) goto code_r0x0001417d8726;
      iVar31 = 4 - uVar37;
      if (uVar37 == 0) {
        iVar31 = 0;
      }
      uVar37 = 4 - uVar36;
      if (((ulonglong)pcVar16 & 3) == 0) {
        uVar37 = uVar36;
      }
      uVar33 = (ulonglong)(uVar37 + (uint)pcVar16);
      uVar38 = (ulonglong)(iVar31 + uVar14) << 0x20;
      uStack_b4 = uVar42;
    }
    else {
      iVar31 = 4;
      uVar23 = CONCAT71(uVar46,4);
code_r0x0001417d8662:
      uVar14 = param_4[1];
      pcVar16 = (code *)(ulonglong)uVar14;
      uVar36 = uVar14 & iVar31 - 1U;
      iVar41 = iVar31 - uVar36;
      if (uVar36 == 0) {
        iVar41 = 0;
      }
      uVar38 = (ulonglong)(iVar41 + uVar14);
      uVar14 = iVar31 - 1U & param_4[2];
      iVar31 = iVar31 - uVar14;
      if (uVar14 == 0) {
        iVar31 = 0;
      }
      uVar33 = (ulonglong)(uint)(iVar31 + param_4[2]) << 0x20;
      uStack_b4 = uVar42;
    }
    uStack_a6 = 1;
    uStack_cc = (undefined4)CONCAT71((int7)((ulonglong)pcVar16 >> 8),1);
    pcStack_2e8 = (code *)CONCAT71(pcStack_2e8._1_7_,2);
    pdb_140dac2d0(&uStack_248,&uStack_190,uVar33 | uVar38,(uVar33 | uVar38) >> 0x20);
    piVar18 = uStack_228;
    uStack_d4 = (uint)uStack_228;
  }
  uStack_228 = piVar18;
  if (uStack_d4 != 0) {
    pppppuVar27 = (undefined1 *****)(ulonglong)uStack_d4;
    uStack_228._4_4_ = (uint)((ulonglong)piVar18 >> 0x20);
    if (uStack_228._4_4_ != 0) {
      uStack_d0 = uStack_228._4_4_;
      uVar14 = uStack_d4;
      if (uStack_d4 < uStack_228._4_4_) {
        uVar14 = uStack_228._4_4_;
      }
      if (param_4[3] == 0) {
        uStack_b8 = 1;
      }
      else {
        iVar31 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar31 == 0; iVar31 = iVar31 + -1) {
          }
        }
        uStack_b8 = iVar31 + 1;
        if ((param_4[3] == 2) && ((uint)param_4[4] < uStack_b8)) {
          uStack_b8 = param_4[4];
        }
      }
      uStack_1b8 = 0;
      uStack_1b0 = 1;
      uStack_1a8 = 0;
      ppppbStack_118 = (bool ****)&bStack_a3;
      ppppuStack_110 = (undefined1 ****)&uStack_1b8;
      ppppuStack_108 = (undefined1 ****)&bStack_a4;
      piStack_100 = param_4;
      pdb_142567ff0(param_4,&uStack_248,&ppppbStack_118);
      puStack_2e0 = &uStack_248;
      bVar44 = (byte)uVar23;
      pcStack_2e8 = (code *)CONCAT71(pcStack_2e8._1_7_,bVar44);
      uStack_2d8 = (code *)CONCAT44(uStack_2d8._4_4_,1);
      pdb_1417d9770(&ppppuStack_1e8,pppppuVar27,uStack_d0,uVar23 & 0xffffffff);
      uVar7 = _UNK_142e3c64c;
      uVar37 = _UNK_142e3c648;
      uVar36 = _UNK_142e3c644;
      uVar14 = _DAT_142e3c640;
      uVar42 = _DAT_142e36f28;
      cStack_a9 = *(char *)((longlong)param_4 + 0x15);
      uVar19 = 1;
      bStack_a5 = bVar44;
      if (1 < uStack_b8) {
        do {
          uStack_d8 = uVar19 + 1;
          uStack_a8 = (uStack_1c8._4_4_ < 2 && (uint)uStack_1c8 < 2) && uStack_d8 != uStack_b8;
          if ((bool)uStack_a8) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143338eb8,0x4c,&UNK_143338f08);
          }
          uStack_148 = uStack_1c8;
          ppppuStack_158 = ppppuStack_1d8;
          uStack_150 = piStack_1d0;
          ppppuStack_168 = ppppuStack_1e8;
          puStack_160 = puStack_1e0;
          if (cStack_a9 == '\0') {
            uStack_1f8 = uStack_1c8;
            ppppuStack_208 = ppppuStack_1d8;
            piStack_200 = piStack_1d0;
            ppppuStack_218 = ppppuStack_1e8;
            puStack_210 = puStack_1e0;
          }
          else {
            if (cStack_a1 == '\0') {
              pdb_140dabc60(&puStack_138,&ppppuStack_168);
              ppppuVar17 = ppppuStack_130;
              uVar23 = (ulonglong)uStack_120;
              uVar38 = CONCAT44(0,uStack_11c);
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar23 * 4;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar38;
              piVar18 = SUB168(auVar5 * auVar4,0);
              if (SUB168(auVar5 * auVar4,8) != 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143516a50);
              }
              if (piStack_128 < piVar18) {
                pdb_142dc8420(0,piVar18,piStack_128,&UNK_143516a68);
                goto LAB_1417d91e7;
              }
              pcVar16 = (code *)((ulonglong)piVar18 & 0x7ffffffffffffffc);
              ppppuStack_108 = (undefined1 ****)((longlong)ppppuStack_130 + (longlong)pcVar16);
              ppppbStack_118 = (bool ****)ppppuStack_130;
              piStack_100 = (int *)0x0;
              uStack_f8 = 4;
              ppppuStack_110 = (undefined1 ****)pcVar16;
              pdb_142569970(&pcStack_2c8,&ppppbStack_118);
              pdb_1417da250(&ppppbStack_118,uVar23,uVar38,&pcStack_2c8);
              bVar44 = bStack_a5;
              if (pcVar16 != (code *)0x0) {
                ppppuVar45 = (undefined1 ****)((ulonglong)(pcVar16 + -4) >> 2);
                ppppuVar34 = ppppuVar45;
                if (ppppuStack_108 < ppppuVar45) {
                  ppppuVar34 = ppppuStack_108;
                }
                ppppuVar30 = ppppuVar17;
                ppppuVar35 = ppppuStack_110;
                if ((code *)0xf < ppppuVar34) {
                  if (ppppuStack_108 < ppppuVar45) {
                    ppppuVar45 = ppppuStack_108;
                  }
                  if (((code *)((longlong)ppppuVar45 + (longlong)ppppuStack_110) + 1 <=
                       (code *)((longlong)ppppuVar17 + 3U)) ||
                     ((code *)((longlong)ppppuVar17 + (longlong)ppppuVar45 * 4 + 4) <=
                      ppppuStack_110)) {
                    pcStack_280 = (code *)ppppuStack_108;
                    uStack_288 = ppppbStack_118;
                    pcVar21 = (code *)((longlong)ppppuVar34 + 1);
                    uVar23 = (ulonglong)((uint)pcVar21 & 0xf);
                    if (((ulonglong)pcVar21 & 0xf) == 0) {
                      uVar23 = 0x10;
                    }
                    lVar40 = (longlong)pcVar21 - uVar23;
                    ppppuVar30 = (undefined1 ****)((longlong)ppppuVar17 + lVar40 * 4);
                    ppppuVar35 = (undefined1 ****)((longlong)ppppuStack_110 + lVar40);
                    pcVar16 = pcVar16 + lVar40 * -4;
                    pcStack_2a0 = (code *)((longlong)ppppuVar34 + -uVar23);
                    pcVar21 = (code *)0xffffffffffffffff;
                    pcStack_298 = (code *)ppppuStack_110;
                    do {
                      pcVar20 = (code *)((longlong)ppppuStack_110 + 1) + (longlong)pcVar21;
                      auVar60 = SUB1615((undefined1  [16])0x0,1);
                      bStack_c8 = -(char)*pcVar20;
                      bStack_c7 = -(char)pcVar20[1];
                      bStack_c6 = -(char)pcVar20[2];
                      bStack_c5 = -(char)pcVar20[3];
                      bStack_c4 = -(char)pcVar20[4];
                      bStack_c3 = -(char)pcVar20[5];
                      bStack_c2 = -(char)pcVar20[6];
                      bStack_c1 = -(char)pcVar20[7];
                      bStack_c0 = -(char)pcVar20[8];
                      bStack_bf = auVar60[8] - (char)pcVar20[9];
                      bStack_be = auVar60[9] - (char)pcVar20[10];
                      bStack_bd = auVar60[10] - (char)pcVar20[0xb];
                      bStack_bc = auVar60[0xb] - (char)pcVar20[0xc];
                      bStack_bb = auVar60[0xc] - (char)pcVar20[0xd];
                      bStack_ba = auVar60[0xd] - (char)pcVar20[0xe];
                      bStack_b9 = auVar60[0xe] - (char)pcVar20[0xf];
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 7) = bStack_c8;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0xb) = bStack_c7;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0xf) = bStack_c6;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x13) = bStack_c5;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x17) = bStack_c4;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x1b) = bStack_c3;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x1f) = bStack_c2;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x23) = bStack_c1;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x27) = bStack_c0;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x2b) = bStack_bf;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x2f) = bStack_be;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x33) = bStack_bd;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x37) = bStack_bc;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x3b) = bStack_bb;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x3f) = bStack_ba;
                      *(byte *)((longlong)ppppuVar17 + (longlong)pcVar21 * 4 + 0x43) = bStack_b9;
                      pcVar21 = pcVar21 + 0x10;
                      param_4 = piStack_1a0;
                      pcStack_290 = pcVar16;
                      ppppuStack_278 = ppppuVar30;
                      bStack_af = bStack_c0;
                      bStack_ae = bStack_bd;
                      bStack_ad = bStack_bc;
                      bStack_ac = bStack_bb;
                      bStack_ab = bStack_ba;
                      bStack_aa = bStack_b9;
                    } while (pcStack_2a0 != pcVar21);
                  }
                }
                pcVar21 = (code *)0x0;
                do {
                  if (ppppuVar35 ==
                      (undefined1 ****)((longlong)ppppuStack_108 + (longlong)ppppuStack_110)) break;
                  cVar13 = *(code *)ppppuVar35;
                  ppppuVar35 = (undefined1 ****)((longlong)ppppuVar35 + 1);
                  ((byte *)((longlong)ppppuVar30 + 3))[(longlong)pcVar21] = -(char)cVar13;
                  pcVar21 = pcVar21 + 4;
                } while (pcVar16 != pcVar21);
              }
              if (ppppbStack_118 != (bool ****)0x0) {
                pub_1406abac0((byte *)ppppuStack_110,(ulonglong)ppppbStack_118,1);
              }
              uStack_1f8 = CONCAT44(uStack_11c,uStack_120);
              ppppuStack_218 = (undefined1 ****)0x3;
            }
            else {
              pdb_140dac260(&puStack_138,&ppppuStack_168);
              ppppuVar17 = ppppuStack_130;
              uVar23 = (ulonglong)uStack_120;
              uVar38 = CONCAT44(0,uStack_11c);
              auVar2._8_8_ = 0;
              auVar2._0_8_ = uVar23 * 4;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar38;
              piVar18 = SUB168(auVar2 * auVar3,0);
              if (SUB168(auVar2 * auVar3,8) != 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143516a50);
              }
              if (piStack_128 < piVar18) {
                pdb_142dc8420(0,piVar18,piStack_128,&UNK_143516a68);
                goto LAB_1417d91e7;
              }
              ppppuVar45 = (undefined1 ****)((ulonglong)piVar18 & 0x1ffffffffffffffc);
              ppppuStack_108 =
                   (undefined1 ****)((longlong)ppppuStack_130 + (longlong)ppppuVar45 * 4);
              ppppbStack_118 = (bool ****)ppppuStack_130;
              piStack_100 = (int *)0x0;
              uStack_f8 = 4;
              ppppuStack_110 = ppppuVar45;
              pdb_142569450(&pcStack_2c8,&ppppbStack_118);
              pdb_1417da250(&ppppbStack_118,uVar23,uVar38,&pcStack_2c8);
              if (ppppuVar45 != (undefined1 ****)0x0) {
                ppppuVar34 = (undefined1 ****)((ulonglong)((longlong)ppppuVar45 - 4U) >> 2);
                ppppuVar30 = ppppuVar34;
                if (ppppuStack_108 < ppppuVar34) {
                  ppppuVar30 = ppppuStack_108;
                }
                ppppuVar29 = ppppuVar17;
                ppppuVar35 = ppppuStack_110;
                if ((byte *)0x7 < ppppuVar30) {
                  if (ppppuStack_108 < ppppuVar34) {
                    ppppuVar34 = ppppuStack_108;
                  }
                  if (((byte *)((longlong)ppppuStack_110 + (longlong)ppppuVar34) + 1 <=
                       (byte *)((longlong)ppppuVar17 + 0xcU)) ||
                     (ppppuVar17 + (longlong)ppppuVar34 * 2 + 2 <= ppppuStack_110)) {
                    pbVar39 = (byte *)((longlong)ppppuVar30 + 1);
                    uVar23 = (ulonglong)((uint)pbVar39 & 3);
                    if (((ulonglong)pbVar39 & 3) == 0) {
                      uVar23 = 4;
                    }
                    lVar40 = (longlong)pbVar39 - uVar23;
                    ppppuVar29 = ppppuVar17 + lVar40 * 2;
                    ppppuVar35 = (undefined1 ****)((longlong)ppppuStack_110 + lVar40);
                    ppppuVar45 = (undefined1 ****)((longlong)ppppuVar45 + lVar40 * -4);
                    puVar28 = (uint *)((longlong)ppppuVar17 + 0x3c);
                    lVar43 = 0;
                    do {
                      uVar52 = *(undefined4 *)((longlong)ppppuStack_110 + lVar43);
                      uVar58 = (undefined1)((uint)uVar52 >> 0x18);
                      uVar59 = CONCAT11(uVar58,uVar58);
                      uVar58 = (undefined1)((uint)uVar52 >> 0x10);
                      uVar15 = CONCAT35(CONCAT21(uVar59,uVar58),CONCAT14(uVar58,uVar52));
                      uVar58 = (undefined1)((uint)uVar52 >> 8);
                      uVar6 = CONCAT53(CONCAT41((int)((ulonglong)uVar15 >> 0x20),uVar58),
                                       CONCAT12(uVar58,(short)uVar52));
                      uVar23 = CONCAT62((int6)((ulonglong)uVar6 >> 0x10),(short)uVar52) &
                               0xffffffffffff00ff;
                      auVar57._8_4_ = 0;
                      auVar57._0_8_ = uVar23;
                      auVar57._12_2_ = uVar59;
                      auVar57._14_2_ = uVar59;
                      uVar59 = (undefined2)((ulonglong)uVar15 >> 0x20);
                      auVar56._12_4_ = auVar57._12_4_;
                      auVar56._8_2_ = 0;
                      auVar56._0_8_ = uVar23;
                      auVar56._10_2_ = uVar59;
                      auVar55._10_6_ = auVar56._10_6_;
                      auVar55._8_2_ = uVar59;
                      auVar55._0_8_ = uVar23;
                      uVar59 = (undefined2)((ulonglong)uVar6 >> 0x10);
                      auVar54._8_8_ = auVar55._8_8_;
                      auVar54._6_2_ = uVar59;
                      auVar54._0_4_ = (int)uVar23;
                      auVar54._4_2_ = uVar59;
                      puVar28[-0xc] = (auVar54._0_4_ << 0x1f) >> 0x1f & uVar14;
                      puVar28[-8] = (auVar54._4_4_ << 0x1f) >> 0x1f & uVar36;
                      puVar28[-4] = (auVar55._8_4_ << 0x1f) >> 0x1f & uVar37;
                      *puVar28 = (auVar56._12_4_ << 0x1f) >> 0x1f & uVar7;
                      lVar43 = lVar43 + 4;
                      puVar28 = puVar28 + 0x10;
                    } while (lVar40 != lVar43);
                  }
                }
                ppppuVar17 = (undefined1 ****)0x0;
                do {
                  if (ppppuVar35 ==
                      (undefined1 ****)((longlong)ppppuStack_108 + (longlong)ppppuStack_110)) break;
                  uVar52 = uVar42;
                  if (*(byte *)ppppuVar35 == 0) {
                    uVar52 = 0;
                  }
                  ppppuVar35 = (undefined1 ****)((longlong)ppppuVar35 + 1);
                  *(undefined4 *)((longlong)ppppuVar29 + (longlong)ppppuVar17 * 4 + 0xc) = uVar52;
                  ppppuVar17 = (undefined1 ****)((longlong)ppppuVar17 + 4);
                } while (ppppuVar45 != ppppuVar17);
              }
              if (ppppbStack_118 != (bool ****)0x0) {
                pub_1406abac0((byte *)ppppuStack_110,(ulonglong)ppppbStack_118,1);
              }
              uStack_1f8 = CONCAT44(uStack_11c,uStack_120);
              ppppuStack_218 = (undefined1 ****)0x9;
              bVar44 = bStack_a5;
            }
            uVar23 = (ulonglong)bVar44;
            pppppuVar27 = (undefined1 *****)(ulonglong)uStack_d4;
            puStack_210 = puStack_138;
            ppppuStack_208 = ppppuStack_130;
            piStack_200 = piStack_128;
          }
          ppppbStack_118 = (bool ****)&bStack_a3;
          ppppuStack_110 = (undefined1 ****)&uStack_1b8;
          ppppuStack_108 = (undefined1 ****)&bStack_a4;
          piStack_100 = param_4;
          pdb_142568760(param_4,&ppppuStack_218,&ppppbStack_118);
          uStack_2d8 = (code *)CONCAT44(uStack_2d8._4_4_,uStack_d8);
          puStack_2e0 = &uStack_248;
          pcStack_2e8 = (code *)CONCAT71(pcStack_2e8._1_7_,(char)uVar23);
          pdb_1417d9770(&ppppbStack_118,pppppuVar27,uStack_d0,uVar23 & 0xffffffff);
          uStack_1c8 = uStack_f8;
          ppppuStack_1d8 = ppppuStack_108;
          piStack_1d0 = piStack_100;
          ppppuStack_1e8 = ppppbStack_118;
          puStack_1e0 = ppppuStack_110;
          pdb_1417dc660(&ppppuStack_218);
          uVar19 = uStack_d8;
        } while (uStack_d8 < uStack_b8);
      }
      pdb_1417dc660(&ppppuStack_1e8);
      piVar18 = uStack_170;
      if (bStack_a3 != false) {
        pcVar16 = (code *)(ulonglong)bStack_a4;
        pcVar21 = (code *)&UNK_14333b7fc;
code_r0x0001417d8f76:
        uStack_170 = piVar18;
                    /* WARNING: Could not recover jumptable at 0x0001417d8f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar16 = (code *)(*(pcVar21 + *(int *)(pcVar21 + (longlong)pcVar16 * 4)))();
        return pcVar16;
      }
      param_1 = pcStack_198;
      if (cStack_a7 == '\0') {
        pcVar21 = (code *)0x2b;
code_r0x0001417d8fd8:
        uStack_170 = piVar18;
        pcVar16 = pcVar21 + 0x2b;
        *pcVar16 = (code)((char)*pcVar16 + (char)((ulonglong)param_4 >> 8));
        bVar49 = *pcVar16 == (code)0x0;
        pcVar16 = (code *)0x25;
        piVar18 = uStack_170;
      }
      else {
        bVar49 = cStack_a1 == '\0';
        pcVar21 = (code *)0xf;
        pcVar16 = (code *)0x9;
      }
code_r0x0001417d8fe3:
      uStack_170 = piVar18;
      cVar13 = SUB81(pcVar16,0);
      if (!bVar49) {
        cVar13 = SUB81(pcVar21,0);
      }
      *(undefined8 *)(param_1 + 0x10) = uStack_1a8;
      *(undefined8 *)param_1 = uStack_1b8;
      *(undefined8 *)(param_1 + 8) = uStack_1b0;
      *(int *)(param_1 + 0x18) = (int)pppppuVar27;
      *(uint *)(param_1 + 0x1c) = uStack_d0;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(short *)(param_1 + 0x24) = (short)uStack_b8;
      *(undefined2 *)(param_1 + 0x26) = 1;
      param_1[0x28] = (code)0x2;
      param_1[0x29] = cVar13;
      pdb_1417dc660(&uStack_248);
      if ((char)uStack_cc != '\0') {
        pdb_1417dc660(&uStack_190);
      }
      if ((char)uStack_b4 != '\0') {
        pdb_1417dc660(&ppppuStack_270);
      }
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143338dc8,0x2c,&UNK_143338df8);
code_r0x0001417dca0c:
  uStack_170 = piVar18;
  pcVar16 = pcVar20;
  goto pdb_140f679a0;
}

