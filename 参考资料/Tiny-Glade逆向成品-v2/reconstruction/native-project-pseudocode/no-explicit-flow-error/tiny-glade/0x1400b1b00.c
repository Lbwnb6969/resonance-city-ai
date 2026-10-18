// VA 0x1400b1b00, PDB extent 1129 bytes
// tiny_glade::screenshot::finish_screenshot_capture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::screenshot::finish_screenshot_capture
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
   Extent: 1129 */

longlong * pdb_1400b1b00(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong lVar13;
  undefined *puVar14;
  undefined *puVar15;
  longlong lVar16;
  bool bVar17;
  longlong lStack_50;
  undefined8 uStack_48;
  
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') {
    lStack_50 = 0;
LAB_1400b1cae:
    LOCK();
    bVar17 = DAT_143ca3038 == 0;
    if (bVar17) {
      DAT_143ca3038 = 1;
    }
    UNLOCK();
    if (!bVar17) goto LAB_1400b1dca;
    while( true ) {
      pdb_140e9a150(&DAT_143ca3038);
      lVar13 = _DAT_143ca3050 * 0x78 + _DAT_143ca3048;
      lVar8 = _DAT_143ca3048;
      while (lVar16 = lVar8, lVar16 != lVar13) {
        lVar8 = lVar16 + 0x78;
        if (*(longlong *)(lVar16 + 0x48) != 0) {
          if (*(int *)(lVar16 + 0x70) == 0) {
            if (*(int *)(lVar16 + 0x74) == 0) {
              pdb_1400b08c0(lVar16);
              *(undefined4 *)(lVar16 + 0x70) = 2;
            }
            else {
              *(int *)(lVar16 + 0x74) = *(int *)(lVar16 + 0x74) + -1;
            }
          }
          else if (*(int *)(lVar16 + 0x70) == 1) {
            pdb_140e60ac0(param_1);
            pdb_1400b08c0(lVar16);
            *(undefined4 *)(lVar16 + 0x70) = 2;
          }
        }
      }
      pdb_140172ed0(&DAT_143ca3040);
      pdb_140e9a350();
      plVar10 = (longlong *)0x1;
      LOCK();
      bVar17 = DAT_143ca3038 == 1;
      if (bVar17) {
        DAT_143ca3038 = 0;
      }
      else {
        plVar10 = (longlong *)(ulonglong)DAT_143ca3038;
      }
      UNLOCK();
      if (!bVar17) {
        plVar10 = (longlong *)pdb_142dbcef0(&DAT_143ca3038,0);
      }
      if (lStack_50 == 0) {
        return plVar10;
      }
      plVar10 = (longlong *)pdb_140e97000();
      if (((char)plVar10[0xd] != '\x01') &&
         (plVar10 = (longlong *)pdb_142d7de90(plVar10), plVar10 == (longlong *)0x0)) break;
      if (*plVar10 == 0) {
        *plVar10 = -1;
        pdb_140e95370(plVar10 + 1,uStack_48);
        *plVar10 = *plVar10 + 1;
        return plVar10;
      }
LAB_1400b1dbd:
      pdb_142dc8090(&UNK_142f3dcc8);
LAB_1400b1dca:
      pdb_142dbd1a0(&DAT_143ca3038);
    }
LAB_1400b1e17:
    pdb_142dc7890(&UNK_142f3dc40);
LAB_1400b1e23:
    pdb_142dc8070(&UNK_142e3b30c,0x23);
  }
  else {
    puVar12 = &UNK_142e3b645;
    lVar13 = 0x31;
    uVar11 = 0x31;
    lVar8 = pdb_1400b65a0(&UNK_142e3b645);
    if (lVar8 != 1) {
LAB_1400b1b8b:
      puVar14 = &DAT_142e3b32f;
      puVar15 = &UNK_142e3b30c;
      do {
        bVar2 = puVar14[-1];
        uVar7 = (uint)(char)bVar2;
        if ((char)bVar2 < '\0') {
          bVar3 = puVar14[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar14[-3];
            if ((char)bVar4 < -0x40) {
              pbVar1 = puVar14 + -4;
              puVar14 = puVar14 + -4;
              uVar7 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar14 = puVar14 + -3;
              uVar7 = bVar4 & 0xf;
            }
            uVar7 = bVar3 & 0x3f | uVar7 << 6;
          }
          else {
            puVar14 = puVar14 + -2;
            uVar7 = bVar3 & 0x1f;
          }
          uVar7 = (uint)(bVar2 & 0x3f) | uVar7 << 6;
          if (uVar7 != 0x5c) goto LAB_1400b1c14;
LAB_1400b1c2d:
          if ((undefined *)0x23 < puVar14 + -0x142e3b30b) goto LAB_1400b1e23;
          lVar8 = 0x23 - (longlong)(puVar14 + -0x142e3b30b);
          puVar15 = puVar14 + 1;
          goto LAB_1400b1c50;
        }
        puVar14 = puVar14 + -1;
        if (uVar7 == 0x5c) goto LAB_1400b1c2d;
LAB_1400b1c14:
        if (uVar7 == 0x2f) goto LAB_1400b1c2d;
      } while (puVar14 != &UNK_142e3b30c);
      lVar8 = 0x23;
LAB_1400b1c50:
      plVar10 = (longlong *)pdb_140e97000();
      if (((char)plVar10[0xd] == '\x01') ||
         (plVar10 = (longlong *)pdb_142d7de90(plVar10,0), plVar10 != (longlong *)0x0)) {
        if (*plVar10 != 0) goto LAB_1400b1dbd;
        *plVar10 = -1;
        uStack_48 = pdb_140e94f10(plVar10 + 1,puVar12,lVar13,puVar15,lVar8,1,0);
        *plVar10 = *plVar10 + 1;
        lStack_50 = 1;
        goto LAB_1400b1cae;
      }
      goto LAB_1400b1e17;
    }
    if (uVar11 < 0x32) {
      puVar12 = &UNK_142e3b645;
      uVar9 = pdb_1400b65a0(&UNK_142e3b645);
      if ((uVar9 & 1) != 0) {
        if (0x31 < uVar11 + 2) goto LAB_1400b1e66;
        lVar13 = 0x2f - uVar11;
        puVar12 = &UNK_142e3b647 + uVar11;
      }
      goto LAB_1400b1b8b;
    }
  }
  pdb_142dc8070(&UNK_142e3b645,0x31,0);
LAB_1400b1e66:
  pdb_142dc8070(&UNK_142e3b645,0x31);
  pcVar5 = (code *)swi(3);
  plVar10 = (longlong *)(*pcVar5)();
  return plVar10;
}

