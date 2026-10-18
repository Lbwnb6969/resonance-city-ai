// VA 0x1425783c0, PDB extent 6484 bytes
// country_core::render::nani::systems::nani_maintain_instances
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_maintain_instances
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 6484 */

void pdb_1425783c0(uint *param_1,longlong *param_2,ulonglong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7)

{
  char *pcVar1;
  byte *pbVar2;
  byte ******ppppppbVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined5 *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  longlong *plVar28;
  longlong *plVar29;
  byte *******pppppppbVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  ushort uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong *plVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  byte *******pppppppbVar44;
  int iVar45;
  ulonglong uVar46;
  ulonglong *puVar47;
  bool bVar48;
  ulonglong uVar49;
  ulonglong *puVar50;
  char *pcVar51;
  longlong lVar52;
  ulonglong *puVar53;
  ulonglong *puVar54;
  uint *puVar55;
  ulonglong *puVar56;
  longlong lVar57;
  ulonglong *unaff_RDI;
  undefined *puVar58;
  undefined *puVar59;
  longlong lVar60;
  ulonglong uVar61;
  char *pcVar62;
  ulonglong uVar63;
  uint *puVar64;
  int iVar65;
  longlong lVar66;
  ulonglong *unaff_R14;
  ulonglong uVar67;
  byte ******ppppppbVar68;
  ulonglong *unaff_R15;
  ulonglong *puVar69;
  uint *puVar70;
  longlong lVar71;
  byte bVar72;
  float fVar73;
  float fVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  longlong lStack_208;
  byte ******ppppppbStack_200;
  byte ******ppppppbStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  byte *******pppppppbStack_1d8;
  byte *******pppppppbStack_1d0;
  ulonglong uStack_1c8;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  char cStack_1b4;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  undefined8 uStack_1b0;
  longlong *plStack_1a8;
  undefined4 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  byte *******pppppppbStack_140;
  ulonglong *puStack_138;
  char *pcStack_130;
  longlong lStack_128;
  longlong lStack_120;
  byte *******pppppppbStack_118;
  longlong lStack_110;
  undefined1 uStack_101;
  byte *******pppppppbStack_100;
  ulonglong *puStack_f8;
  longlong *plStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined2 uStack_e4;
  undefined1 uStack_e2;
  longlong *plStack_e0;
  uint *puStack_d8;
  ulonglong *puStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  ulonglong uStack_b8;
  ulonglong *puStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  byte *******pppppppbVar43;
  undefined8 uVar78;
  
  uStack_90 = 0xfffffffffffffffe;
  puStack_d8 = param_1;
  cVar31 = pdb_140e94b40();
  if (cVar31 == '\0') {
    lStack_1e8 = 0;
  }
  else {
    unaff_R14 = (ulonglong *)&UNK_14351c8d2;
    lVar52 = 0x3c;
    uVar49 = 0x3c;
    lVar38 = pdb_142585200(&UNK_14351c8d2);
    if (lVar38 == 1) {
      if (0x3c < uVar49) {
LAB_1425798fc:
        pdb_142dc8070(&UNK_14351c8d2,0x3c,0);
LAB_14257991c:
        pdb_142dc8070(&UNK_14351c8d2,0x3c);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      unaff_R14 = (ulonglong *)&UNK_14351c8d2;
      uVar39 = pdb_142585200(&UNK_14351c8d2);
      if ((uVar39 & 1) != 0) {
        if (0x3c < uVar49 + 2) goto LAB_14257991c;
        lVar52 = 0x3a - uVar49;
        unaff_R14 = (ulonglong *)(&UNK_14351c8d4 + uVar49);
      }
    }
    puVar58 = &UNK_14351bdcd;
    unaff_R15 = (ulonglong *)&UNK_14351bd9f;
    do {
      bVar72 = puVar58[-1];
      uVar35 = (uint)(char)bVar72;
      if ((char)bVar72 < '\0') {
        bVar4 = puVar58[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar58[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar58 + -4;
            puVar58 = puVar58 + -4;
            uVar35 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar58 = puVar58 + -3;
            uVar35 = bVar5 & 0xf;
          }
          uVar35 = bVar4 & 0x3f | uVar35 << 6;
        }
        else {
          puVar58 = puVar58 + -2;
          uVar35 = bVar4 & 0x1f;
        }
        uVar35 = (uint)(bVar72 & 0x3f) | uVar35 << 6;
        if (uVar35 != 0x5c) goto LAB_142578514;
LAB_14257852c:
        puVar59 = puVar58 + -0x14351bd9e;
        if (puVar59 < (undefined *)0x2f) {
          unaff_RDI = (ulonglong *)(0x2e - (longlong)puVar59);
          unaff_R15 = (ulonglong *)(puVar58 + 1);
          goto LAB_14257854e;
        }
        pdb_142dc8070(&UNK_14351bd9f,0x2e,puVar59,0x2e,&UNK_14351c9b8);
        goto LAB_1425798fc;
      }
      puVar58 = puVar58 + -1;
      if (uVar35 == 0x5c) goto LAB_14257852c;
LAB_142578514:
      if (uVar35 == 0x2f) goto LAB_14257852c;
    } while (puVar58 != &UNK_14351bd9f);
    unaff_RDI = (ulonglong *)0x2e;
LAB_14257854e:
    plVar40 = (longlong *)pdb_140e97000();
    if (((char)plVar40[0xd] != '\x01') &&
       (plVar40 = (longlong *)pdb_142d8ec20(plVar40,0), plVar40 == (longlong *)0x0)) {
LAB_142579818:
      pdb_142dc7890(&UNK_143326860);
LAB_142579825:
      pdb_142dc7fb4(0,&lStack_208,&UNK_14351bed8,0);
      goto LAB_1425798d7;
    }
    if (*plVar40 != 0) {
LAB_14257979e:
      pdb_142dc8090(&UNK_143326a50);
LAB_1425797aa:
      pppppppbStack_c8 = (byte *******)uStack_190;
      pppppppbStack_c0 = (byte *******)CONCAT71(pppppppbStack_c0._1_7_,(char)uStack_188);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14351bfe8,0x13,&pppppppbStack_c8,&UNK_14351c360,&UNK_14351bfd0);
    }
    *plVar40 = -1;
    plStack_e0 = plVar40;
    uStack_1e0 = pdb_140e94f10(plVar40 + 1,unaff_R14,lVar52,unaff_R15,unaff_RDI,1,0);
    *plStack_e0 = *plStack_e0 + 1;
    lStack_1e8 = 1;
  }
  puVar47 = (ulonglong *)param_3[2];
  if ((*(ulonglong *)*param_3 < puVar47[8]) &&
     (uVar49 = *(ulonglong *)(puVar47[7] + *(ulonglong *)*param_3 * 8), uVar49 != 0)) {
    uVar39 = puVar47[1];
    uVar49 = ~uVar49;
    puVar53 = (ulonglong *)param_3[1];
    uVar67 = *puVar53;
    uVar61 = 0;
    puVar47 = (ulonglong *)(uVar39 + 0x18 + uVar49 * 0x48);
    uVar46 = uVar67 - *puVar47;
    if (uVar67 < *puVar47) {
      uVar46 = uVar61;
    }
    puVar47 = (ulonglong *)(uVar39 + 0x38 + uVar49 * 0x48);
    uVar63 = uVar67 - *puVar47;
    if (uVar67 < *puVar47) {
      uVar63 = uVar61;
    }
    unaff_RDI = (ulonglong *)(uVar46 * 0x10 + *(longlong *)(uVar39 + 8 + uVar49 * 0x48));
    uVar67 = *(ulonglong *)(uVar39 + 0x10 + uVar49 * 0x48);
    uVar7 = *(ulonglong *)(uVar39 + 0x30 + uVar49 * 0x48);
    uVar26 = uVar67 - uVar46;
    if (uVar67 < uVar46) {
      unaff_RDI = (ulonglong *)0x8;
      uVar26 = uVar61;
    }
    puVar47 = (ulonglong *)(uVar63 * 0x10 + *(longlong *)(uVar39 + 0x28 + uVar49 * 0x48));
    uVar67 = uVar7 - uVar63;
    if (uVar7 < uVar63) {
      puVar47 = (ulonglong *)0x8;
      uVar67 = uVar61;
    }
    *puVar53 = (*(longlong *)(uVar39 + 0x40 + uVar49 * 0x48) - uVar67) - uVar26;
    param_3 = unaff_RDI + uVar26 * 2;
    unaff_R14 = puVar47 + uVar67 * 2;
  }
  else {
    puVar53 = (ulonglong *)0x0;
  }
  plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,*(undefined4 *)((longlong)param_5 + 0x1c));
  uStack_1b0 = *param_5;
  puStack_1a0 = (undefined4 *)param_5[2];
  bVar48 = unaff_RDI == param_3 || unaff_RDI == (ulonglong *)0x0;
  lStack_a0 = param_6 + 0x20;
  uStack_98 = CONCAT71(uStack_98._1_7_,
                       (puVar47 == unaff_R14 || puVar47 == (ulonglong *)0x0) && bVar48);
  puVar56 = (ulonglong *)0x0;
  puStack_d0 = unaff_RDI + 2;
  puStack_a8 = unaff_RDI;
  if (unaff_RDI == param_3 || unaff_RDI == (ulonglong *)0x0) {
    puStack_d0 = puVar56;
    puStack_a8 = puVar47;
  }
  plStack_1a8 = param_2;
  puStack_138 = unaff_R14;
  puStack_f8 = param_3;
  plStack_f0 = param_4;
  while (puVar56 != (ulonglong *)0x0) {
    puVar54 = puVar53;
    if ((unaff_R14 == (ulonglong *)0x0) || (unaff_R14 == puStack_f8)) {
      if ((unaff_R15 != (ulonglong *)0x0) && (unaff_R15 != puStack_138)) {
        puVar69 = unaff_R15 + 2;
        puVar50 = (ulonglong *)0x0;
        *puVar56 = *puVar56 + 1;
        pppppppbVar44 = (byte *******)*unaff_R15;
        if ((int)pppppppbVar44 != 0) goto LAB_1425787a8;
      }
      break;
    }
    puVar50 = unaff_R14 + 2;
    *puVar56 = *puVar56 + 1;
    pppppppbVar44 = (byte *******)*unaff_R14;
    puVar69 = unaff_R15;
    if ((int)pppppppbVar44 == 0) break;
LAB_1425787a8:
    pppppppbStack_c8 = pppppppbVar44;
    uVar41 = pdb_1400af0a0(lStack_a0,&pppppppbStack_c8);
    pdb_140ca9e20(&uStack_198,param_6,uVar41,&pppppppbStack_c8);
    if ((char)uStack_188 == '\x1d') {
      *puStack_1a0 = plStack_e0._0_4_;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14351c038);
    }
    uStack_e4 = uStack_188._1_2_;
    uStack_e2 = uStack_188._3_1_;
    *puStack_1a0 = plStack_e0._0_4_;
    uStack_198 = (byte *******)uStack_190;
    uStack_190 = (code *)CONCAT53(CONCAT41(uStack_190._4_4_,uStack_188._3_1_),(int3)uStack_188);
    pdb_1409d2b30(uStack_1b0);
    puVar53 = puVar54;
    unaff_R14 = puVar50;
    unaff_R15 = puVar69;
  }
  if (puVar53 != (ulonglong *)0x0 && (uStack_98 & 1) == 0) {
    *puVar53 = *puVar53 + 1;
    pppppppbVar44 = (byte *******)*puStack_a8;
    if ((int)pppppppbVar44 != 0) {
      puVar54 = (ulonglong *)0x0;
      puVar56 = puVar53;
      puVar50 = puStack_d0;
      puVar69 = puVar47 + (ulonglong)bVar48 * 2;
      goto LAB_1425787a8;
    }
  }
  auVar76 = _DAT_142e377e0;
  puStack_d0 = *(ulonglong **)puStack_d8;
  puVar70 = *(uint **)((longlong)puStack_d0 + 0xf8);
  puStack_f8 = *(ulonglong **)(param_7 + 8);
  if (puStack_f8 == (ulonglong *)0x0) {
    puStack_f8 = *(ulonglong **)(param_7 + 0x10);
  }
  pcStack_130 = *(char **)(puStack_d8 + 2);
  puStack_d8 = puVar70 + *(longlong *)((longlong)puStack_d0 + 0x100);
  puStack_138 = (ulonglong *)*plStack_f0;
  lStack_128 = 8;
  iVar45 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar65 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                  CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  lStack_120 = 8;
  uStack_98 = 0;
  puStack_a8 = (ulonglong *)0x0;
  lVar38 = 0;
  plStack_f0 = (longlong *)CONCAT71(plStack_f0._1_7_,*(char *)((longlong)puStack_d0 + 0x108));
  puVar55 = puStack_d8;
  puVar47 = puStack_138;
  uVar35 = 0;
  cVar31 = *(char *)((longlong)puStack_d0 + 0x108);
LAB_1425788fc:
  if (cVar31 == '\0') {
    if (uVar35 == (uint)lVar38) {
      do {
        if (puVar70 == puVar55) goto LAB_1425791ae;
        uVar35 = *puVar70;
        puVar70 = puVar70 + 1;
        lVar38 = *(longlong *)(*(longlong *)(pcStack_130 + 0x100) + 0x58 + (ulonglong)uVar35 * 0xa0)
        ;
      } while (lVar38 == 0);
      lVar57 = *(longlong *)(pcStack_130 + 0x100) + (ulonglong)uVar35 * 0xa0;
      uVar49 = (ulonglong)*(uint *)(lVar57 + 0x94);
      lVar52 = *(longlong *)(pcStack_130 + 0x1a0) + uVar49 * 0x48;
      uVar49 = *(ulonglong *)(*(longlong *)(pcStack_130 + 0x1a0) + 0x40 + uVar49 * 0x48);
      if ((*(ulonglong *)((longlong)puStack_d0 + 0x110) < uVar49) &&
         (uVar39 = *(ulonglong *)
                    (*(longlong *)(lVar52 + 0x38) + *(ulonglong *)((longlong)puStack_d0 + 0x110) * 8
                    ), uVar39 != 0)) {
        uStack_98 = *(longlong *)(*(longlong *)(lVar52 + 0x18) + 0x10 + ~uVar39 * 0x30);
        uVar39 = *(ulonglong *)((longlong)puStack_d0 + 0x118);
        if (uVar49 <= uVar39) goto LAB_142578b0a;
LAB_142578ab3:
        uVar49 = *(ulonglong *)(*(longlong *)(lVar52 + 0x38) + uVar39 * 8);
        if (uVar49 == 0) goto LAB_142578b0a;
        puStack_a8 = *(ulonglong **)(*(longlong *)(lVar52 + 0x18) + 0x10 + ~uVar49 * 0x30);
      }
      else {
        uStack_98 = 0;
        uVar39 = *(ulonglong *)((longlong)puStack_d0 + 0x118);
        if (uVar39 < uVar49) goto LAB_142578ab3;
LAB_142578b0a:
        puStack_a8 = (ulonglong *)0x0;
      }
      lStack_120 = *(longlong *)(lVar57 + 0x50);
      uVar35 = 0;
    }
    puVar42 = (undefined8 *)(lStack_120 + (ulonglong)uVar35 * 0x10);
    uVar49 = (ulonglong)~*(uint *)(lStack_120 + 8 + (ulonglong)uVar35 * 0x10);
  }
  else {
    if (uVar35 == (uint)lVar38) {
      do {
        if (puVar70 == puVar55) goto LAB_1425791ae;
        uVar35 = *puVar70;
        puVar70 = puVar70 + 1;
        lVar38 = *(longlong *)(*(longlong *)(pcStack_130 + 0x1a0) + 0x10 + (ulonglong)uVar35 * 0x48)
        ;
      } while (lVar38 == 0);
      lVar52 = *(longlong *)(pcStack_130 + 0x1a0) + (ulonglong)uVar35 * 0x48;
      uVar49 = *(ulonglong *)(lVar52 + 0x40);
      if ((*(ulonglong *)((longlong)puStack_d0 + 0x110) < uVar49) &&
         (uVar39 = *(ulonglong *)
                    (*(longlong *)(lVar52 + 0x38) + *(ulonglong *)((longlong)puStack_d0 + 0x110) * 8
                    ), uVar39 != 0)) {
        uStack_98 = *(longlong *)(*(longlong *)(lVar52 + 0x18) + 0x10 + ~uVar39 * 0x30);
        uVar39 = *(ulonglong *)((longlong)puStack_d0 + 0x118);
        if (uVar49 <= uVar39) goto LAB_142578add;
LAB_142578a6b:
        uVar49 = *(ulonglong *)(*(longlong *)(lVar52 + 0x38) + uVar39 * 8);
        if (uVar49 == 0) goto LAB_142578add;
        puStack_a8 = *(ulonglong **)(*(longlong *)(lVar52 + 0x18) + 0x10 + ~uVar49 * 0x30);
      }
      else {
        uStack_98 = 0;
        uVar39 = *(ulonglong *)((longlong)puStack_d0 + 0x118);
        if (uVar39 < uVar49) goto LAB_142578a6b;
LAB_142578add:
        puStack_a8 = (ulonglong *)0x0;
      }
      lStack_128 = *(longlong *)(lVar52 + 8);
      uVar35 = 0;
    }
    uVar49 = (ulonglong)uVar35;
    puVar42 = (undefined8 *)(lStack_128 + uVar49 * 8);
  }
  ppppppbVar3 = (byte ******)(uStack_98 + uVar49 * 0x18);
  lVar52 = uVar49 * 0x30 + (longlong)puStack_a8;
  uVar41 = *puVar42;
  if ((int)uVar41 == 0) {
LAB_1425791ae:
    lVar38 = *plStack_1a8;
    lVar52 = plStack_1a8[1];
    iVar45 = *(int *)((longlong)plStack_1a8 + 0x14);
    puVar55 = *(uint **)(lVar38 + 0xf8);
    puVar70 = puVar55 + *(longlong *)(lVar38 + 0x100);
    puStack_f8 = (ulonglong *)CONCAT71(puStack_f8._1_7_,*(undefined1 *)(lVar38 + 0x108));
    uVar37 = iVar45 - (int)plStack_1a8[2];
    uVar35 = 0xc233b000;
    if (uVar37 < 0xc233b000) {
      uVar35 = uVar37;
    }
    puStack_d8 = (uint *)0x8;
    lStack_a0 = 0;
    uStack_98 = 0;
    lVar57 = 0;
    uVar49 = 0;
    puStack_a8 = (ulonglong *)CONCAT44(puStack_a8._4_4_,iVar45);
    puStack_d0 = (ulonglong *)CONCAT44(puStack_d0._4_4_,uVar35);
    plVar40 = (longlong *)0;
    while( true ) {
      if ((char)puStack_f8 != '\0') break;
      puVar64 = puStack_d8;
      if ((int)uVar49 == (int)lVar57) goto LAB_142579380;
      while( true ) {
        iVar65 = (int)uVar49;
        uVar49 = (ulonglong)~puVar64[uVar49 * 4 + 2];
        if ((uint)(iVar45 - *(int *)((longlong)plVar40 + uVar49 * 4)) < uVar35) break;
        uVar49 = (ulonglong)(iVar65 + 1U);
        if (iVar65 + 1U == (uint)lVar57) {
LAB_142579380:
          do {
            if (puVar55 == puVar70) goto LAB_1425796c0;
            uVar35 = *puVar55;
            puVar55 = puVar55 + 1;
            lVar57 = *(longlong *)(*(longlong *)(lVar52 + 0x100) + 0x58 + (ulonglong)uVar35 * 0xa0);
          } while (lVar57 == 0);
          lVar66 = *(longlong *)(lVar52 + 0x100) + (ulonglong)uVar35 * 0xa0;
          uVar49 = (ulonglong)*(uint *)(lVar66 + 0x94);
          lVar60 = *(longlong *)(lVar52 + 0x1a0) + uVar49 * 0x48;
          uVar49 = *(ulonglong *)(*(longlong *)(lVar52 + 0x1a0) + 0x40 + uVar49 * 0x48);
          if ((*(ulonglong *)(lVar38 + 0x110) < uVar49) &&
             (uVar39 = *(ulonglong *)
                        (*(longlong *)(lVar60 + 0x38) + *(ulonglong *)(lVar38 + 0x110) * 8),
             uVar39 != 0)) {
            lStack_a0 = *(longlong *)(*(longlong *)(lVar60 + 0x18) + 0x10 + ~uVar39 * 0x30);
            uVar39 = *(ulonglong *)(lVar38 + 0x118);
            if (uVar49 <= uVar39) goto LAB_142579460;
LAB_142579427:
            uVar49 = *(ulonglong *)(*(longlong *)(lVar60 + 0x38) + uVar39 * 8);
            if (uVar49 == 0) goto LAB_142579460;
            uStack_98 = *(longlong *)(*(longlong *)(lVar60 + 0x18) + 0x10 + ~uVar49 * 0x30);
          }
          else {
            lStack_a0 = 0;
            uVar39 = *(ulonglong *)(lVar38 + 0x118);
            if (uVar39 < uVar49) goto LAB_142579427;
LAB_142579460:
            uStack_98 = 0;
          }
          plVar40 = (longlong *)pdb_140effb40(lVar60,*(undefined8 *)(lVar38 + 0x120));
          uVar49 = 0;
          puVar64 = *(uint **)(lVar66 + 0x50);
          iVar45 = (int)puStack_a8;
          uVar35 = (uint)puStack_d0;
        }
      }
      pcVar51 = (char *)(lStack_a0 + uVar49 * 0x18);
      lVar60 = uStack_98 + uVar49 * 0xc;
      cVar31 = *pcVar51;
joined_r0x0001425794df:
      if (cVar31 == '\0') {
        pppppppbVar44 = *(byte ********)(pcVar51 + 8);
        plVar28 = plStack_1a8;
        pppppppbStack_c8 = pppppppbVar44;
        if (*(longlong *)((longlong)puStack_138 + 0x48) != 0) {
          lVar66 = *(longlong *)((longlong)puStack_138 + 0x30);
          pppppppbVar43 = *(byte ********)((longlong)puStack_138 + 0x38);
          bVar72 = (byte)((ulonglong)pppppppbVar44 >> 0x39);
          auVar76 = ZEXT216(CONCAT11(bVar72,bVar72));
          auVar76 = pshuflw(auVar76,auVar76,0);
          lStack_120 = 0;
          while( true ) {
            pcVar62 = (char *)(lVar66 + (longlong)
                                        ((ulonglong)pppppppbVar44 & (ulonglong)pppppppbVar43));
            cVar31 = *pcVar62;
            cVar33 = pcVar62[1];
            cVar12 = pcVar62[2];
            cVar13 = pcVar62[3];
            cVar14 = pcVar62[4];
            cVar15 = pcVar62[5];
            cVar16 = pcVar62[6];
            cVar17 = pcVar62[7];
            cVar18 = pcVar62[8];
            cVar19 = pcVar62[9];
            cVar20 = pcVar62[10];
            cVar21 = pcVar62[0xb];
            cVar22 = pcVar62[0xc];
            cVar23 = pcVar62[0xd];
            cVar24 = pcVar62[0xe];
            cVar25 = pcVar62[0xf];
            auVar79[0] = -(cVar31 == auVar76[0]);
            auVar79[1] = -(cVar33 == auVar76[1]);
            auVar79[2] = -(cVar12 == auVar76[2]);
            auVar79[3] = -(cVar13 == auVar76[3]);
            auVar79[4] = -(cVar14 == auVar76[4]);
            auVar79[5] = -(cVar15 == auVar76[5]);
            auVar79[6] = -(cVar16 == auVar76[6]);
            auVar79[7] = -(cVar17 == auVar76[7]);
            auVar79[8] = -(cVar18 == auVar76[0]);
            auVar79[9] = -(cVar19 == auVar76[1]);
            auVar79[10] = -(cVar20 == auVar76[2]);
            auVar79[0xb] = -(cVar21 == auVar76[3]);
            auVar79[0xc] = -(cVar22 == auVar76[4]);
            auVar79[0xd] = -(cVar23 == auVar76[5]);
            auVar79[0xe] = -(cVar24 == auVar76[6]);
            auVar79[0xf] = -(cVar25 == auVar76[7]);
            uVar34 = (ushort)(SUB161(auVar79 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar79[0xf] >> 7) << 0xf;
            plVar29 = (longlong *)((ulonglong)pppppppbVar44 & (ulonglong)pppppppbVar43);
            pppppppbVar30 = (byte *******)(ulonglong)uVar34;
            plVar28 = plStack_1a8;
            pppppppbVar44 = pppppppbStack_100;
            while (pppppppbStack_100 = pppppppbVar30, plStack_1a8 = plVar29, uVar34 != 0) {
              uVar35 = 0;
              for (uVar37 = (uint)pppppppbStack_100; (uVar37 & 1) == 0;
                  uVar37 = uVar37 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              lVar71 = lVar66 + ((ulonglong)uVar35 + (longlong)plStack_1a8 &
                                (ulonglong)pppppppbVar43) * -0x20;
              pcStack_130 = pcVar51;
              lStack_128 = lVar60;
              pppppppbStack_118 = pppppppbVar43;
              lStack_110 = lVar66;
              plStack_f0 = plVar40;
              puStack_d8 = puVar64;
              cVar32 = pdb_140df4430(&pppppppbStack_c8,lVar71 + -0x20);
              lVar60 = lStack_128;
              if (cVar32 != '\0') {
                puVar8 = *(undefined5 **)(lVar71 + -0x10);
                lStack_208 = *(longlong *)(lVar71 + -8);
                if (lStack_208 != 1) goto LAB_142579825;
                uVar6 = *(undefined4 *)puVar8;
                uStack_198 = (byte *******)CONCAT35(uStack_198._5_3_,*puVar8);
                if (*(char *)((longlong)puVar8 + 4) == pcStack_130[0x10]) goto LAB_14257968d;
                pdb_142deb4ac(0,(longlong)&uStack_198 + 4,pcStack_130 + 0x10,0);
                goto LAB_1425798d7;
              }
              iVar45 = (int)pppppppbStack_100 + -1;
              uVar34 = (ushort)iVar45 & (ushort)pppppppbStack_100;
              plVar29 = plStack_1a8;
              plVar40 = plStack_f0;
              pppppppbVar30 =
                   (byte *******)(ulonglong)CONCAT22((short)((uint)iVar45 >> 0x10),uVar34);
              pcVar51 = pcStack_130;
              pppppppbVar43 = pppppppbStack_118;
              puVar64 = puStack_d8;
              lVar66 = lStack_110;
              plVar28 = plStack_1a8;
              pppppppbVar44 = pppppppbStack_100;
            }
            auVar81[0] = -(cVar31 == -1);
            auVar81[1] = -(cVar33 == -1);
            auVar81[2] = -(cVar12 == -1);
            auVar81[3] = -(cVar13 == -1);
            auVar81[4] = -(cVar14 == -1);
            auVar81[5] = -(cVar15 == -1);
            auVar81[6] = -(cVar16 == -1);
            auVar81[7] = -(cVar17 == -1);
            auVar81[8] = -(cVar18 == -1);
            auVar81[9] = -(cVar19 == -1);
            auVar81[10] = -(cVar20 == -1);
            auVar81[0xb] = -(cVar21 == -1);
            auVar81[0xc] = -(cVar22 == -1);
            auVar81[0xd] = -(cVar23 == -1);
            auVar81[0xe] = -(cVar24 == -1);
            auVar81[0xf] = -(cVar25 == -1);
            pppppppbStack_100 = pppppppbVar44;
            if ((((((((((((((((SUB161(auVar81 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar81 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar81 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar81 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar81 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar81 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar81 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar81 >> 0x3f,0) & 1) != 0) || (SUB161(auVar81 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar81 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar81 >> 0x57,0) & 1) != 0) || (SUB161(auVar81 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar81 >> 0x67,0) & 1) != 0) || (SUB161(auVar81 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar81 >> 0x77,0) & 1) != 0) || auVar81[0xf] < '\0') break;
            pppppppbVar44 = (byte *******)((longlong)plStack_1a8 + lStack_120 + 0x10);
            lStack_120 = lStack_120 + 0x10;
            plStack_1a8 = plVar28;
          }
        }
        plStack_1a8 = plVar28;
        uStack_198 = (byte *******)&pppppppbStack_c8;
        uStack_190 = pdb_140a4f660;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14303dc87,&uStack_198,&UNK_14303dca8);
      }
      uVar6 = *(undefined4 *)(pcVar51 + 4);
      plStack_f0 = plVar40;
      puStack_d8 = puVar64;
LAB_14257968d:
      uVar49 = (ulonglong)(iVar65 + 1);
      *puStack_1a0 = plStack_e0._0_4_;
      pdb_1409d35c0(uStack_1b0,lVar60,uVar6);
      plVar40 = plStack_f0;
      iVar45 = (int)puStack_a8;
      uVar35 = (uint)puStack_d0;
    }
    if ((int)uVar49 != (int)lVar57) goto LAB_142579339;
    while (puVar55 != puVar70) {
      uVar35 = *puVar55;
      puVar55 = puVar55 + 1;
      lVar57 = *(longlong *)(*(longlong *)(lVar52 + 0x1a0) + 0x10 + (ulonglong)uVar35 * 0x48);
      if (lVar57 != 0) {
        lVar60 = *(longlong *)(lVar52 + 0x1a0) + (ulonglong)uVar35 * 0x48;
        uVar49 = *(ulonglong *)(lVar60 + 0x40);
        if ((*(ulonglong *)(lVar38 + 0x110) < uVar49) &&
           (uVar39 = *(ulonglong *)
                      (*(longlong *)(lVar60 + 0x38) + *(ulonglong *)(lVar38 + 0x110) * 8),
           uVar39 != 0)) {
          lStack_a0 = *(longlong *)(*(longlong *)(lVar60 + 0x18) + 0x10 + ~uVar39 * 0x30);
          uVar39 = *(ulonglong *)(lVar38 + 0x118);
          if (uVar49 <= uVar39) goto LAB_142579310;
LAB_1425792d7:
          uVar49 = *(ulonglong *)(*(longlong *)(lVar60 + 0x38) + uVar39 * 8);
          if (uVar49 == 0) goto LAB_142579310;
          uStack_98 = *(longlong *)(*(longlong *)(lVar60 + 0x18) + 0x10 + ~uVar49 * 0x30);
        }
        else {
          lStack_a0 = 0;
          uVar39 = *(ulonglong *)(lVar38 + 0x118);
          if (uVar39 < uVar49) goto LAB_1425792d7;
LAB_142579310:
          uStack_98 = 0;
        }
        plVar40 = (longlong *)pdb_140effb40(lVar60,*(undefined8 *)(lVar38 + 0x120));
        uVar49 = 0;
        iVar45 = (int)puStack_a8;
        uVar35 = (uint)puStack_d0;
LAB_142579339:
        do {
          iVar65 = (int)uVar49;
          if ((uint)(iVar45 - *(int *)((longlong)plVar40 + uVar49 * 4)) < uVar35) {
            pcVar51 = (char *)(lStack_a0 + uVar49 * 0x18);
            lVar60 = uStack_98 + uVar49 * 0xc;
            cVar31 = *pcVar51;
            puVar64 = puStack_d8;
            goto joined_r0x0001425794df;
          }
          uVar49 = (ulonglong)(iVar65 + 1U);
        } while (iVar65 + 1U != (uint)lVar57);
      }
    }
LAB_1425796c0:
    if (lStack_1e8 == 0) {
      return;
    }
    plVar40 = (longlong *)pdb_140e97000();
    if (((char)plVar40[0xd] != '\x01') &&
       (plVar40 = (longlong *)pdb_142d8ec20(plVar40,0), plVar40 == (longlong *)0x0))
    goto LAB_142579818;
    if (*plVar40 == 0) {
      *plVar40 = -1;
      plStack_e0 = plVar40;
      pdb_140e95370(plVar40 + 1,uStack_1e0);
      *plStack_e0 = *plStack_e0 + 1;
      return;
    }
    goto LAB_14257979e;
  }
  ppppppbStack_1f8 = ppppppbVar3;
  lStack_a0._0_4_ = uVar35;
  if (*(char *)ppppppbVar3 == '\0') {
    ppppppbVar68 = (byte ******)ppppppbVar3[1];
    ppppppbStack_200 = ppppppbVar68;
    pppppppbStack_c8 = (byte *******)ppppppbVar68;
    if (*(longlong *)((longlong)puVar47 + 0x48) != 0) {
      lVar57 = *(longlong *)((longlong)puVar47 + 0x30);
      pppppppbVar44 = *(byte ********)((longlong)puVar47 + 0x38);
      bVar72 = (byte)((ulonglong)ppppppbVar68 >> 0x39);
      auVar79 = ZEXT216(CONCAT11(bVar72,bVar72));
      auVar79 = pshuflw(auVar79,auVar79,0);
      lVar60 = 0;
      do {
        uVar49 = (ulonglong)ppppppbVar68 & (ulonglong)pppppppbVar44;
        pcVar51 = (char *)(lVar57 + uVar49);
        cVar31 = *pcVar51;
        cVar33 = pcVar51[1];
        cVar12 = pcVar51[2];
        cVar13 = pcVar51[3];
        cVar14 = pcVar51[4];
        cVar15 = pcVar51[5];
        cVar16 = pcVar51[6];
        cVar17 = pcVar51[7];
        cVar18 = pcVar51[8];
        cVar19 = pcVar51[9];
        cVar20 = pcVar51[10];
        cVar21 = pcVar51[0xb];
        cVar22 = pcVar51[0xc];
        cVar23 = pcVar51[0xd];
        cVar24 = pcVar51[0xe];
        cVar25 = pcVar51[0xf];
        auVar74[0] = -(cVar31 == auVar79[0]);
        auVar74[1] = -(cVar33 == auVar79[1]);
        auVar74[2] = -(cVar12 == auVar79[2]);
        auVar74[3] = -(cVar13 == auVar79[3]);
        auVar74[4] = -(cVar14 == auVar79[4]);
        auVar74[5] = -(cVar15 == auVar79[5]);
        auVar74[6] = -(cVar16 == auVar79[6]);
        auVar74[7] = -(cVar17 == auVar79[7]);
        auVar74[8] = -(cVar18 == auVar79[0]);
        auVar74[9] = -(cVar19 == auVar79[1]);
        auVar74[10] = -(cVar20 == auVar79[2]);
        auVar74[0xb] = -(cVar21 == auVar79[3]);
        auVar74[0xc] = -(cVar22 == auVar79[4]);
        auVar74[0xd] = -(cVar23 == auVar79[5]);
        auVar74[0xe] = -(cVar24 == auVar79[6]);
        auVar74[0xf] = -(cVar25 == auVar79[7]);
        uVar34 = (ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf
        ;
        pppppppbVar43 = (byte *******)(ulonglong)uVar34;
        if (uVar34 != 0) {
LAB_142578bec:
          lStack_110 = lVar57;
          pppppppbStack_118 = pppppppbVar44;
          lStack_1f0 = lVar60;
          uVar35 = 0;
          for (uVar37 = (uint)pppppppbVar43; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x80000000) {
            uVar35 = uVar35 + 1;
          }
          lVar57 = lStack_110 + (uVar35 + uVar49 & (ulonglong)pppppppbStack_118) * -0x20;
          pppppppbStack_100 = pppppppbVar43;
          cVar32 = pdb_140df4430(&pppppppbStack_c8,lVar57 + -0x20);
          if (cVar32 == '\0') goto code_r0x000142578c1c;
          lVar60 = *(longlong *)(lVar57 + -8) << 3;
          pcVar51 = (char *)(*(longlong *)(lVar57 + -0x10) + -8);
          do {
            if (lVar60 == 0) {
              uStack_198 = &ppppppbStack_200;
              uStack_190 = pdb_142585620;
              pcStack_180 = pdb_142585690;
              uStack_188 = ppppppbVar3 + 2;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14351bf10,&uStack_198,&UNK_14351bf88);
            }
            pcVar62 = pcVar51 + 8;
            lVar60 = lVar60 + -8;
            pcVar1 = pcVar51 + 0xc;
            pcVar51 = pcVar62;
          } while (*pcVar1 != *(char *)(ppppppbVar3 + 2));
          goto LAB_142578caa;
        }
LAB_142578c40:
        auVar82[0] = -(cVar31 == (char)iVar45);
        auVar82[1] = -(cVar33 == (char)((uint)iVar45 >> 8));
        auVar82[2] = -(cVar12 == (char)((uint)iVar45 >> 0x10));
        auVar82[3] = -(cVar13 == (char)((uint)iVar45 >> 0x18));
        auVar82[4] = -(cVar14 == (char)iVar65);
        auVar82[5] = -(cVar15 == (char)((uint)iVar65 >> 8));
        auVar82[6] = -(cVar16 == (char)((uint)iVar65 >> 0x10));
        auVar82[7] = -(cVar17 == (char)((uint)iVar65 >> 0x18));
        auVar82[8] = -(cVar18 == (char)iVar10);
        auVar82[9] = -(cVar19 == (char)((uint)iVar10 >> 8));
        auVar82[10] = -(cVar20 == (char)((uint)iVar10 >> 0x10));
        auVar82[0xb] = -(cVar21 == (char)((uint)iVar10 >> 0x18));
        auVar82[0xc] = -(cVar22 == (char)iVar11);
        auVar82[0xd] = -(cVar23 == (char)((uint)iVar11 >> 8));
        auVar82[0xe] = -(cVar24 == (char)((uint)iVar11 >> 0x10));
        auVar82[0xf] = -(cVar25 == (char)((uint)iVar11 >> 0x18));
        if ((((((((((((((((SUB161(auVar82 >> 7,0) & 1) != 0 || (SUB161(auVar82 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar82 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar82 >> 0x1f,0) & 1) != 0) || (SUB161(auVar82 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar82 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar82 >> 0x37,0) & 1) != 0) || (SUB161(auVar82 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar82 >> 0x47,0) & 1) != 0) || (SUB161(auVar82 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar82 >> 0x57,0) & 1) != 0) || (SUB161(auVar82 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar82 >> 0x67,0) & 1) != 0) || (SUB161(auVar82 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar82 >> 0x77,0) & 1) != 0) || auVar82[0xf] < '\0') break;
        ppppppbVar68 = (byte ******)(uVar49 + lVar60 + 0x10);
        lVar60 = lVar60 + 0x10;
      } while( true );
    }
    uStack_198 = (byte *******)&pppppppbStack_c8;
    uStack_190 = pdb_140a4f660;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14303dc87,&uStack_198,&UNK_14303dca8);
  }
  pcVar62 = (char *)((longlong)ppppppbVar3 + 4);
LAB_142578caa:
  uVar6 = *(undefined4 *)pcVar62;
  cStack_1b4 = '\x1d';
  *puStack_1a0 = plStack_e0._0_4_;
  cVar31 = *(char *)(ppppppbVar3 + 2);
  pppppppbStack_c8 = *(byte ********)(lVar52 + 0x10);
  pppppppbStack_c0 = (byte *******)CONCAT44(pppppppbStack_c0._4_4_,*(undefined4 *)(lVar52 + 0x18));
  auVar79 = ZEXT416(*(uint *)(lVar52 + 0x1c)) & auVar76;
  uVar78 = auVar79._0_8_;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = *(ulonglong *)(lVar52 + 0x20);
  auVar75 = auVar75 & auVar76;
  fVar73 = auVar75._0_4_;
  fVar77 = auVar75._4_4_;
  if (fVar73 <= fVar77) {
    fVar73 = fVar77;
  }
  if (auVar79._0_4_ <= fVar73) {
    auVar80._4_12_ = auVar79._4_12_;
    auVar80._0_4_ = fVar73;
    uVar78 = auVar80._0_8_;
  }
  pdb_140947fa0(&uStack_198,&pppppppbStack_c8,uVar78,uVar6);
  pppppppbStack_c8 = uStack_198;
  pppppppbStack_c0 = (byte *******)uStack_190;
  pdb_140957f00(uStack_1b0,CONCAT71((int7)((ulonglong)ppppppbVar3 >> 8),cVar31) & 0xffffffff,
                &pppppppbStack_c8,1,&uStack_1bc);
  cVar31 = cStack_1b4;
  uVar27 = uStack_1b8;
  uVar6 = uStack_1bc;
  lStack_a0 = CONCAT44(lStack_a0._4_4_,(uint)lStack_a0 + 1);
  if (cStack_1b4 != '\x1d') {
    uStack_e8 = uStack_1b3;
    uStack_e6 = uStack_1b1;
    uStack_190 = (code *)CONCAT71(uStack_190._1_7_,cStack_1b4);
    uStack_198 = (byte *******)CONCAT44(uStack_1b8,uStack_1bc);
    pdb_1417b6070(&pppppppbStack_c8,param_6,uVar41,&uStack_198);
    lVar52 = puStack_f8[2];
    if (*puStack_f8 - lVar52 < 0x20) {
      pdb_142d7f1b0(puStack_f8,lVar52,0x20,1,1);
    }
    lVar57 = puStack_f8[1];
    *(code **)(lVar57 + lVar52) = pdb_14160ae40;
    *(undefined8 *)(lVar57 + 8 + lVar52) = uVar41;
    *(undefined4 *)(lVar57 + 0x10 + lVar52) = uVar6;
    *(undefined4 *)(lVar57 + 0x14 + lVar52) = uVar27;
    *(char *)(lVar57 + 0x18 + lVar52) = cVar31;
    *(undefined2 *)(lVar57 + 0x19 + lVar52) = uStack_e8;
    *(undefined1 *)(lVar57 + 0x1b + lVar52) = uStack_e6;
    *(undefined1 *)(lVar57 + 0x1c + lVar52) = 0;
    puStack_f8[2] = lVar52 + 0x20;
    puVar55 = puStack_d8;
    puVar47 = puStack_138;
    uVar35 = (uint)lStack_a0;
    cVar31 = (char)plStack_f0;
    goto LAB_1425788fc;
  }
  pppppppbStack_c8 = &ppppppbStack_1f8;
  pppppppbStack_c0 = (byte *******)pdb_141992e60;
  pdb_140f60760(&uStack_198,&UNK_14351bfa0,&pppppppbStack_c8);
  puVar55 = puStack_d8;
  puVar47 = puStack_138;
  pppppppbStack_1d8 = uStack_198;
  pppppppbStack_1d0 = (byte *******)uStack_190;
  uStack_1c8 = (ulonglong)uStack_188;
  cVar31 = (char)plStack_f0;
  if (_DAT_143cafd08 != 0) {
    pppppppbStack_c8 = (byte *******)CONCAT71(pppppppbStack_c8._1_7_,1);
    uStack_198 = (byte *******)&pppppppbStack_c8;
    pdb_142dc7060(&DAT_143cafd08,0,&uStack_198,&UNK_14351c230,&UNK_14351bfd0);
  }
  pdb_1400f0d40(&uStack_198,_DAT_143cb31e8);
  if ((int)uStack_198 == 1) goto LAB_1425797aa;
  pppppppbStack_100 = (byte *******)uStack_190;
  lStack_110 = CONCAT71(lStack_110._1_7_,(char)uStack_188);
  pdb_14007ee60();
  pppppppbVar44 = (byte *******)pub_1406abab0(0xf,1);
  if (pppppppbVar44 != (byte *******)0x0) {
    pbVar2 = (byte *)((longlong)pppppppbVar44 + 7);
    pbVar2[0] = 0x70;
    pbVar2[1] = 0x61;
    pbVar2[2] = 0x74;
    pbVar2[3] = 0x68;
    pbVar2[4] = 0x21;
    pbVar2[5] = 0x20;
    pbVar2[6] = 0x28;
    pbVar2[7] = 0x29;
    *pppppppbVar44 = (byte ******)0x705f656c75646f6d;
    uStack_198 = (byte *******)0xf;
    uStack_188 = (byte ******)0xf;
    uStack_190 = (code *)pppppppbVar44;
    pdb_142d7f1b0(&uStack_198,0xf,0x17,1,1);
    uVar49 = uStack_1c8;
    uVar41 = _UNK_14351c003;
    *(undefined8 *)((longlong)uStack_190 + (longlong)uStack_188) = _DAT_14351bffb;
    *(undefined8 *)((byte *)((longlong)uStack_190 + (longlong)uStack_188) + 8) = uVar41;
    pbVar2 = (byte *)((longlong)uStack_190 + (longlong)uStack_188 + 0xf);
    pbVar2[0] = 0x20;
    pbVar2[1] = 0x3a;
    pbVar2[2] = 0x3a;
    pbVar2[3] = 0x20;
    pbVar2[4] = 0x57;
    pbVar2[5] = 0x61;
    pbVar2[6] = 0x72;
    pbVar2[7] = 0x6e;
    uVar39 = (longlong)uStack_188 + 0x17;
    pppppppbStack_c8 = uStack_198;
    pppppppbStack_c0 = (byte *******)uStack_190;
    pppppppbStack_118 = pppppppbStack_1d0;
    uStack_b8 = uVar39;
    if ((longlong)uStack_198 - uVar39 < uStack_1c8) {
      pdb_142d7f1b0(&pppppppbStack_c8,uVar39,uStack_1c8,1,1);
LAB_142578eb1:
      uVar39 = uStack_b8;
      pub_142e32760((byte *)((longlong)pppppppbStack_c0 + uStack_b8),pppppppbStack_118);
    }
    else if (uStack_1c8 != 0) goto LAB_142578eb1;
    uStack_188 = (byte ******)(uVar39 + uVar49);
    uStack_198 = pppppppbStack_c8;
    uStack_190 = (code *)pppppppbStack_c0;
    uStack_b8 = (ulonglong)uStack_188;
    cVar33 = pdb_14192b470(pppppppbStack_100 + 1,&uStack_198);
    uVar35 = (uint)lStack_a0;
    if ((cVar33 == '\0') && (1 < *_DAT_143ca8e90)) {
      pppppppbStack_c0 = (byte *******)pdb_140001020;
      uStack_198 = (byte *******)0x0;
      uStack_190 = (code *)&UNK_14351c014;
      uStack_188 = (byte ******)0x23;
      pcStack_180 = (code *)0x0;
      puStack_178 = &UNK_14351bd70;
      uStack_170 = 0x2e;
      uStack_168 = 2;
      puStack_160 = &UNK_14351c014;
      uStack_158 = 0x23;
      uStack_150 = 0x6800000001;
      puStack_148 = &UNK_14351c012;
      pppppppbStack_140 = (byte *******)&pppppppbStack_c8;
      pppppppbStack_c8 = (byte *******)&pppppppbStack_1d8;
      pdb_140f332f0(&uStack_101,&uStack_198);
    }
    pppppppbVar44 = pppppppbStack_100;
    if ((((char)lStack_110 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
       (cVar33 = pdb_142dc79e0(), cVar33 == '\0')) {
      *(byte *)((longlong)pppppppbVar44 + 1) = 1;
    }
    LOCK();
    bVar72 = *(byte *)pppppppbVar44;
    *(byte *)pppppppbVar44 = 0;
    UNLOCK();
    if (bVar72 == 2) {
      pdb_142dc6ca0(pppppppbVar44);
    }
    if (pppppppbStack_1d8 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_1d0,(ulonglong)pppppppbStack_1d8,1);
    }
    goto LAB_1425788fc;
  }
  pdb_142dc7e2a(1,0xf);
LAB_1425798d7:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
code_r0x000142578c1c:
  iVar36 = (int)pppppppbStack_100 + -1;
  uVar34 = (ushort)iVar36 & (ushort)pppppppbStack_100;
  pppppppbVar43 = (byte *******)(ulonglong)CONCAT22((short)((uint)iVar36 >> 0x10),uVar34);
  lVar57 = lStack_110;
  pppppppbVar44 = pppppppbStack_118;
  lVar60 = lStack_1f0;
  if (uVar34 == 0) goto LAB_142578c40;
  goto LAB_142578bec;
}

