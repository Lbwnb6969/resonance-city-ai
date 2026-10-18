// VA 0x140d91ba0, PDB extent 1349 bytes
// tg_mods::overlay::texture_names_for
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::texture_names_for
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 1349 */

longlong * pdb_140d91ba0(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong arg0;
  uint uVar13;
  undefined8 uVar14;
  int aiStack_88 [2];
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  ulonglong *puStack_60;
  longlong lStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (param_3 < 0x19) {
    if (param_3 < 9) goto LAB_140d91c43;
  }
  else {
    iVar2 = pub_142e32750(&UNK_1431e5460,param_2,0x19);
    if ((iVar2 == 0) && (uVar5 = param_3 - 0x21, 0x20 < param_3)) {
      uVar4 = *(ulonglong *)((longlong)param_2 + 0x19 + uVar5);
      uVar4 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
              | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18
              | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
      if (uVar4 < 0x2e74657874757265 == 0x2e74657874757265 < uVar4) {
        pdb_14007ee60();
        puStack_50 = (ulonglong *)pub_1406abab0(0x18,8);
        if (puStack_50 != (ulonglong *)0x0) {
          if ((longlong)uVar5 < 0) {
            uVar14 = 0;
          }
          else {
            if (uVar5 == 0) {
              pbVar8 = (byte *)0x1;
LAB_140d91f25:
              *puStack_50 = uVar5;
              puStack_50[1] = (ulonglong)pbVar8;
              puStack_50[2] = uVar5;
              *param_1 = 1;
              param_1[1] = (longlong)puStack_50;
              param_1[2] = 1;
              return param_1;
            }
            pdb_14007ee60();
            uVar14 = 1;
            pbVar8 = pub_1406abab0(uVar5,1);
            if (pbVar8 != (byte *)0x0) {
              pub_142e32760(pbVar8,(longlong)param_2 + 0x19,uVar5);
              goto LAB_140d91f25;
            }
          }
          pdb_142dc7e2a(uVar14,uVar5);
          goto LAB_140d91fd8;
        }
        goto LAB_140d91fa2;
      }
    }
  }
  uVar5 = *param_2;
  uVar5 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
          (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
          (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  if (uVar5 == 0x7465787475726573) {
    if ((char)param_2[1] != '/') {
LAB_140d91c43:
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
  }
  else if ((char)((uVar5 < 0x7465787475726574) * '\x02') != '\x01') goto LAB_140d91c43;
  param_3 = param_3 - 9;
  uVar5 = (longlong)param_2 + 9;
  uVar4 = param_3;
  while (uVar12 = uVar5, lVar6 = pdb_140f69410(0x2e,uVar5,uVar4), arg0 = param_3, lVar6 == 1) {
    if (((uVar12 < param_3) && (arg0 = uVar12, *(char *)(uVar5 + uVar12) == '.')) ||
       (arg0 = param_3, uVar4 = uVar12, param_3 < uVar12)) break;
  }
  pdb_14007ee60();
  puVar7 = (ulonglong *)pub_1406abab0(0x18,8);
  if (puVar7 == (ulonglong *)0x0) {
LAB_140d91fa2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  if (-1 < (longlong)arg0) {
    if (arg0 == 0) {
      pbVar8 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar14 = 1;
      pbVar8 = pub_1406abab0(arg0,1);
      if (pbVar8 == (byte *)0x0) goto LAB_140d91cdf;
      pub_142e32760(pbVar8,uVar5,arg0);
    }
    *puVar7 = arg0;
    puVar7[1] = (ulonglong)pbVar8;
    puVar7[2] = arg0;
    lStack_68 = 1;
    lStack_58 = 1;
    uVar4 = arg0;
    puStack_60 = puVar7;
    while (uVar12 = uVar5, lVar6 = pdb_140f69410(0x2f,uVar5,uVar4), lVar6 == 1) {
      if ((uVar12 < arg0) && (*(char *)(uVar5 + uVar12) == '/')) {
        uVar4 = uVar12 + 1;
        if ((uVar4 < arg0) && (*(char *)(uVar5 + uVar4) < -0x40)) {
          pdb_142dc8070(uVar5,arg0,uVar4,arg0,&UNK_1431e5480);
          goto LAB_140d91fd8;
        }
        uVar9 = arg0 - uVar4;
        if (uVar9 == 0) break;
        if (uVar9 == 1) {
          cVar11 = *(char *)(uVar5 + uVar4);
          if ((cVar11 == '+') || (cVar11 == '-')) break;
        }
        else {
          cVar11 = *(char *)(uVar5 + uVar4);
        }
        uVar4 = (ulonglong)(cVar11 == '+');
        if (8 < uVar9 - uVar4) {
          uVar10 = 0;
          uVar9 = uVar12;
          goto LAB_140d91f64;
        }
        if (uVar9 == uVar4) goto LAB_140d91e9a;
        uVar9 = uVar12;
        goto LAB_140d91e7f;
      }
      uVar4 = uVar12;
      if (arg0 < uVar12) break;
    }
LAB_140d91f8e:
    param_1[2] = lStack_58;
    *param_1 = lStack_68;
    param_1[1] = (longlong)puStack_60;
    return param_1;
  }
  uVar14 = 0;
LAB_140d91cdf:
  puStack_50 = puVar7;
  pdb_142dc7e2a(uVar14,arg0);
LAB_140d91fd8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
LAB_140d91f64:
  if ((-uVar4 + arg0) - 1 == uVar9) goto LAB_140d91e9a;
  uVar3 = (uint)(uVar10 * 10);
  if ((int)(uVar10 * 10 >> 0x20) != 0) goto LAB_140d91f8e;
  uVar13 = *(byte *)((longlong)param_2 + uVar9 + uVar4 + 10) - 0x30;
  uVar10 = (ulonglong)(uVar3 + uVar13);
  if ((9 < uVar13) || (uVar9 = uVar9 + 1, CARRY4(uVar3,uVar13))) goto LAB_140d91f8e;
  goto LAB_140d91f64;
  while (uVar9 = uVar9 + 1, (-uVar4 + arg0) - 1 != uVar9) {
LAB_140d91e7f:
    if (9 < (byte)(*(char *)((longlong)param_2 + uVar9 + uVar4 + 10) - 0x30U)) goto LAB_140d91f8e;
  }
LAB_140d91e9a:
  pdb_140225b90(aiStack_88,uVar12,0,1,1);
  if (aiStack_88[0] == 1) {
    pdb_142dc7e2a(uStack_80,uStack_78);
    goto LAB_140d91fd8;
  }
  puStack_50 = (ulonglong *)uStack_80;
  if (uVar12 != 0) {
    pub_142e32760(uStack_78,uVar5,uVar12);
  }
  lVar6 = lStack_58;
  uStack_70 = uStack_78;
  if (lStack_58 == lStack_68) {
    pdb_142d7e830(&lStack_68);
  }
  puStack_60[lVar6 * 3] = (ulonglong)puStack_50;
  puStack_60[lVar6 * 3 + 1] = uStack_70;
  puStack_60[lVar6 * 3 + 2] = uVar12;
  lStack_58 = lVar6 + 1;
  goto LAB_140d91f8e;
}

