// VA 0x140a78ae0, PDB extent 1354 bytes
// country_core::resources::world_raster::impl$3::copy_to_staging<512>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::world_raster::impl$3::copy_to_staging<512>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 1354 */

longlong * pdb_140a78ae0(longlong param_1,uint param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong lStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar18 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0x299) != '\0') {
    pub_142e32780(param_3,0,param_4);
    *(undefined1 *)(param_1 + 0x299) = 0;
  }
  *(char *)(param_1 + 0x298) = (char)param_2;
  cVar7 = pdb_140e94b40();
  if (cVar7 == '\0') {
    lStack_68 = 0;
    pbStack_248 = param_4;
  }
  else {
    puVar16 = &UNK_1430423bf;
    pbVar13 = (byte *)0x82;
    uVar12 = 0x82;
    lVar9 = pdb_140a7a9e0(&UNK_1430423bf);
    if (lVar9 == 1) {
      if (0x82 < uVar12) {
LAB_140a78eb7:
        pdb_142dc8070(&UNK_1430423bf,0x82,0);
LAB_140a78ed7:
        pdb_142dc8070(&UNK_1430423bf,0x82);
        pcVar6 = (code *)swi(3);
        plVar11 = (longlong *)(*pcVar6)();
        return plVar11;
      }
      puVar16 = &UNK_1430423bf;
      uVar10 = pdb_140a7a9e0(&UNK_1430423bf);
      if ((uVar10 & 1) != 0) {
        if (0x82 < uVar12 + 2) goto LAB_140a78ed7;
        pbVar13 = (byte *)(0x80 - uVar12);
        puVar16 = &UNK_1430423c1 + uVar12;
      }
    }
    puVar14 = &UNK_1430420e1;
    puVar17 = &UNK_1430420b0;
    do {
      bVar3 = puVar14[-1];
      uVar8 = (uint)(char)bVar3;
      pbStack_50 = param_4;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar14[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar14[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar14 + -4;
            puVar14 = puVar14 + -4;
            uVar8 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar14 = puVar14 + -3;
            uVar8 = bVar5 & 0xf;
          }
          uVar8 = bVar4 & 0x3f | uVar8 << 6;
        }
        else {
          puVar14 = puVar14 + -2;
          uVar8 = bVar4 & 0x1f;
        }
        uVar8 = (uint)(bVar3 & 0x3f) | uVar8 << 6;
        if (uVar8 != 0x5c) goto LAB_140a78c34;
LAB_140a78c4d:
        puVar17 = puVar14 + -0x1430420af;
        if ((undefined *)0x31 < puVar17) {
          pdb_142dc8070(&UNK_1430420b0,0x31,puVar17,0x31,&UNK_1430425b0);
          goto LAB_140a78eb7;
        }
        lVar9 = 0x31 - (longlong)puVar17;
        puVar17 = puVar14 + 1;
        goto LAB_140a78c70;
      }
      puVar14 = puVar14 + -1;
      if (uVar8 == 0x5c) goto LAB_140a78c4d;
LAB_140a78c34:
      if (uVar8 == 0x2f) goto LAB_140a78c4d;
    } while (puVar14 != &UNK_1430420b0);
    lVar9 = 0x31;
LAB_140a78c70:
    plVar11 = (longlong *)pdb_140e97000();
    if (((char)plVar11[0xd] != '\x01') &&
       (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 == (longlong *)0x0))
    goto LAB_140a78e63;
    if (*plVar11 != 0) goto LAB_140a78e33;
    *plVar11 = -1;
    plStack_58 = plVar11;
    uStack_60 = pdb_140e94f10(plVar11 + 1,puVar16,pbVar13,puVar17,lVar9,1,0);
    *plStack_58 = *plStack_58 + 1;
    lStack_68 = 1;
    pbStack_248 = pbStack_50;
  }
  puVar2 = (undefined8 *)(param_1 + 0x20);
  puVar15 = (undefined8 *)(param_1 + 0x28);
  if ((char)param_2 == '\0') {
    puVar15 = (undefined8 *)(param_1 + 0x10);
    puVar2 = (undefined8 *)(param_1 + 8);
  }
  uStack_270 = *puVar15;
  uStack_278 = *puVar2;
  uStack_268 = *(undefined4 *)(param_1 + 0x50);
  uStack_264 = *(undefined4 *)(param_1 + 0x54);
  uStack_260 = *(undefined4 *)(param_1 + 0x58);
  uStack_25c = *(undefined4 *)(param_1 + 0x5c);
  uVar18 = param_1 + 0x98;
  lStack_258 = param_1 + 0x30;
  pbStack_250 = param_3;
  pdb_140a84210(uVar18,&uStack_278);
  if (-1 < *(longlong *)(param_1 + 0x60)) {
    pbVar13 = (byte *)(param_1 + 0x60);
    pub_142e32760(&uStack_278,uVar18,0x200);
    plVar11 = (longlong *)pdb_1409c5460(pbVar13,&uStack_278);
    do {
      param_3 = (byte *)&uStack_278;
      *(undefined1 *)(param_1 + 0x29a) = 1;
      if (lStack_68 == 0) {
        return plVar11;
      }
      plVar11 = (longlong *)pdb_140e97000();
      if ((char)plVar11[0xd] != '\x01') goto LAB_140a78e3f;
      do {
        if (*plVar11 == 0) {
          *plVar11 = -1;
          pbStack_50 = (byte *)plVar11;
          pdb_140e95370(plVar11 + 1,uStack_60);
          *(longlong *)pbStack_50 = *(longlong *)pbStack_50 + 1;
          return (longlong *)pbStack_50;
        }
LAB_140a78e33:
        plVar11 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a78e3f:
        plVar11 = (longlong *)pdb_142d8ec20(plVar11,0);
      } while (plVar11 != (longlong *)0x0);
LAB_140a78e63:
      pdb_142dc7890(&UNK_143326860);
LAB_140a78e70:
      pdb_142dbd1a0(param_3);
LAB_140a78d80:
      pdb_140e9a150(param_3);
      pbStack_50 = param_3;
      pub_142e32760(&uStack_278,uVar18,0x200);
      pdb_1409c5460(pbVar13 + 0x18);
      pbVar13 = pbStack_50;
      pdb_140e9a350();
      plVar11 = (longlong *)0x1;
      LOCK();
      bVar3 = *pbVar13;
      if (bVar3 == 1) {
        *pbVar13 = 0;
      }
      else {
        plVar11 = (longlong *)(ulonglong)bVar3;
      }
      UNLOCK();
      if (bVar3 != 1) {
        plVar11 = (longlong *)pdb_142dbcef0(pbVar13);
      }
    } while( true );
  }
  pbVar13 = *(byte **)(param_1 + 0x68);
  param_3 = pbVar13 + 0x10;
  LOCK();
  bVar19 = pbVar13[0x10] == 0;
  if (bVar19) {
    pbVar13[0x10] = 1;
  }
  UNLOCK();
  if (!bVar19) goto LAB_140a78e70;
  goto LAB_140a78d80;
}

