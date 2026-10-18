// VA 0x1402aa9b0, PDB extent 1460 bytes
// tiny_glade::fps_limiter::FpsLimiter::frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/fps_limiter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::fps_limiter::FpsLimiter::frame
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/fps_limiter.rs
   Extent: 1460 */

void pdb_1402aa9b0(undefined8 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  char cVar6;
  undefined8 uVar7;
  undefined *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong *unaff_R12;
  undefined *puVar13;
  ulonglong unaff_R15;
  float fVar14;
  float in_XMM1_Da;
  float fVar15;
  float fVar16;
  float unaff_XMM7_Da;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined *puStack_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar7 = pdb_140f3c9d0();
  if (0.0 < in_XMM1_Da) {
    uStack_a0 = uVar7;
    uStack_98 = param_2;
    cVar6 = pdb_140e94b40();
    if (cVar6 == '\0') {
      puVar13 = (undefined *)0x0;
      puStack_80 = (undefined *)0x0;
      iVar12 = *(int *)(param_1 + 1);
    }
    else {
      puVar8 = &UNK_142e66614;
      puVar13 = &UNK_142e665f0;
      do {
        pbVar1 = puVar8 + -1;
        uVar11 = (uint)(char)*pbVar1;
        if ((int)uVar11 < 0) {
          bVar3 = puVar8[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar8[-3];
            if ((char)bVar4 < -0x40) {
              pbVar2 = puVar8 + -4;
              puVar8 = puVar8 + -4;
              uVar11 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
            }
            else {
              puVar8 = puVar8 + -3;
              uVar11 = bVar4 & 0xf;
            }
            uVar11 = bVar3 & 0x3f | uVar11 << 6;
          }
          else {
            puVar8 = puVar8 + -2;
            uVar11 = bVar3 & 0x1f;
          }
          uVar11 = (uint)(*pbVar1 & 0x3f) | uVar11 << 6;
          if (uVar11 != 0x5c) goto LAB_1402aaa99;
LAB_1402aaacc:
          if (puVar8 + -0x142e665ef < (undefined *)0x25) {
            unaff_R15 = 0x23 - (longlong)(puVar8 + -0x142e665f0);
            puVar13 = puVar8 + 1;
            goto LAB_1402aaaf0;
          }
          pdb_142dc8070(&UNK_142e665f0,0x24,puVar8 + -0x142e665ef,0x24,&UNK_142e668a8);
          goto LAB_1402aae2e;
        }
        puVar8 = puVar8 + -1;
        if (uVar11 == 0x5c) goto LAB_1402aaacc;
LAB_1402aaa99:
        if (uVar11 == 0x2f) goto LAB_1402aaacc;
      } while (puVar8 != &UNK_142e665f0);
      unaff_R15 = 0x24;
LAB_1402aaaf0:
      plVar9 = (longlong *)pdb_140e97000();
      if (((char)plVar9[0xd] != '\x01') &&
         (plVar9 = (longlong *)pdb_142d7de90(plVar9,0), plVar9 == (longlong *)0x0))
      goto LAB_1402aadd4;
      if (*plVar9 != 0) goto LAB_1402aada0;
      *plVar9 = -1;
      plStack_70 = plVar9;
      uStack_78 = pdb_140e94f10(plVar9 + 1,&UNK_142e66614,0xb,puVar13,unaff_R15,1,0);
      *plStack_70 = *plStack_70 + 1;
      puVar13 = (undefined *)0x1;
      puStack_80 = (undefined *)0x1;
      iVar12 = *(int *)(param_1 + 1);
    }
    if (iVar12 != 1000000000) {
      iVar12 = (int)*param_1;
      uVar10 = pdb_140f3c790(&uStack_a0);
      unaff_XMM7_Da = _DAT_142e36f28 / in_XMM1_Da;
      fVar15 = (float)iVar12 / _DAT_142e46a44 + (float)uVar10;
      fVar16 = unaff_XMM7_Da + unaff_XMM7_Da;
      fVar14 = fVar16;
      if (fVar15 <= fVar16) {
        fVar14 = fVar15;
      }
      fVar15 = (*(float *)(param_1 + 2) + unaff_XMM7_Da) -
               (float)(~-(uint)NAN(fVar15) & (uint)fVar14 | -(uint)NAN(fVar15) & (uint)fVar16);
      fVar14 = (float)(_DAT_142e37820 ^ (uint)unaff_XMM7_Da);
      if ((float)(_DAT_142e37820 ^ (uint)unaff_XMM7_Da) <= fVar15) {
        fVar14 = fVar15;
      }
      if (fVar14 <= unaff_XMM7_Da) {
        unaff_XMM7_Da = fVar14;
      }
      if (0.0 < unaff_XMM7_Da) {
        unaff_R15 = 0;
        if ((uint)unaff_XMM7_Da < 0x30000000) {
          puVar13 = (undefined *)0x0;
          unaff_R15 = 0;
        }
        else {
          uVar11 = (uint)unaff_XMM7_Da & 0x7fffff | 0x800000;
          cVar6 = (char)((uint)unaff_XMM7_Da >> 0x17);
          if ((uint)unaff_XMM7_Da < 0x3f800000) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulonglong)uVar11 << (cVar6 + 0xaaU & 0x3f);
            auVar5 = auVar5 * ZEXT816(1000000000);
            uVar11 = 0;
            if ((longlong)auVar5._0_8_ < 0) {
              uVar11 = (byte)(auVar5._0_8_ >> 9 != 0x40000000000000 | auVar5[8]) & 1;
            }
            unaff_R15 = (ulonglong)(uVar11 + auVar5._8_4_);
            puVar13 = (undefined *)0x0;
          }
          else if ((uint)unaff_XMM7_Da < 0x4b000000) {
            puVar13 = (undefined *)(ulonglong)(uVar11 >> (0x96U - cVar6 & 0x1f));
            uVar10 = (ulonglong)((int)unaff_XMM7_Da << (cVar6 + 0x81U & 0x1f) & 0x7fffff) *
                     1000000000;
            uVar11 = 0;
            if ((uVar10 & 0x400000) != 0) {
              uVar11 = (byte)(((uint)uVar10 & 0x7ffe00) != 0x400000 | (byte)(uVar10 >> 0x17)) & 1;
            }
            unaff_R15 = (ulonglong)(uVar11 + (int)(uVar10 >> 0x17));
          }
          else {
            if (0x5f7fffff < (uint)unaff_XMM7_Da) {
LAB_1402aae2e:
              uStack_61 = 1;
              puStack_b0 = &uStack_61;
              pcStack_a8 = pdb_140f729a0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_142e664e0,&puStack_b0,&UNK_142e66550);
            }
            puVar13 = (undefined *)((ulonglong)uVar11 << (cVar6 + 0x6aU & 0x3f));
          }
        }
        unaff_R12 = _DAT_143ca8ca8;
        if (*_DAT_143ca8ca8 != 2) goto LAB_1402aade1;
        goto LAB_1402aad5e;
      }
      *(float *)(param_1 + 2) = unaff_XMM7_Da;
    }
    while (puVar13 != (undefined *)0x0) {
      plVar9 = (longlong *)pdb_140e97000();
      if ((char)plVar9[0xd] != '\x01') goto LAB_1402aadac;
      do {
        if (*plVar9 == 0) {
          *plVar9 = -1;
          plStack_70 = plVar9;
          pdb_140e95370(plVar9 + 1,uStack_78);
          *plStack_70 = *plStack_70 + 1;
          goto LAB_1402aac57;
        }
LAB_1402aada0:
        plVar9 = (longlong *)pdb_142dc8090(&UNK_142f3dcc8);
LAB_1402aadac:
        plVar9 = (longlong *)pdb_142d7de90(plVar9,0);
      } while (plVar9 != (longlong *)0x0);
LAB_1402aadd4:
      pdb_142dc7890(&UNK_142f3dc40);
LAB_1402aade1:
      pdb_142d84c80(_DAT_143ca8ca8,_DAT_143ca8ca8);
LAB_1402aad5e:
      pub_142e31f20(*(undefined4 *)((longlong)unaff_R12 + 0xc));
      pdb_140f502d0(puVar13,unaff_R15 & 0xffffffff);
      if (*unaff_R12 != 2) {
        pdb_142d84c80(_DAT_143ca8ca8,_DAT_143ca8ca8);
      }
      pub_142e31f30(*(undefined4 *)((longlong)unaff_R12 + 0xc));
      *(float *)(param_1 + 2) = unaff_XMM7_Da;
      puVar13 = puStack_80;
    }
  }
LAB_1402aac57:
  *param_1 = uVar7;
  *(undefined4 *)(param_1 + 1) = param_2;
  return;
}

