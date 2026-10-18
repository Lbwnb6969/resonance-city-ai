// VA 0x141eeaf10, PDB extent 705 bytes
// std::io::default_read_to_end<zip::read::ZipFile>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: std::io::default_read_to_end<zip::read::ZipFile>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
   Extent: 705 */

undefined8 pdb_141eeaf10(undefined8 param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong uVar16;
  ulonglong uStack_70;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  uVar1 = *param_2;
  uVar16 = param_2[2];
  uVar13 = 0x2000;
  uVar10 = uVar16;
  uVar11 = uVar1;
  if (param_3 == 1) {
    if (param_4 < 0xfffffffffffffc00) {
      uVar12 = param_4 + 0x400;
      uVar14 = (ulonglong)((uint)uVar12 & 0x1fff);
      uVar7 = (param_4 - uVar14) + 0x2400;
      if (uVar12 <= uVar7) {
        uVar13 = uVar7;
      }
      if (uVar14 == 0) {
        uVar13 = uVar12;
      }
      if (param_4 == 0) goto LAB_141eeaf83;
    }
    uStack_70 = 0;
  }
  else {
LAB_141eeaf83:
    uStack_70 = param_3 ^ 1;
    if (uVar1 - uVar16 < 0x20) {
      puVar8 = param_2;
      uVar10 = pdb_141eeadc0();
      if ((uVar10 & 1) == 0) {
        if (puVar8 != (ulonglong *)0x0) {
          uVar10 = param_2[2];
          uVar11 = *param_2;
          goto LAB_141eeafcc;
        }
        uVar6 = 0;
      }
      else {
LAB_141eeb17b:
        uVar6 = 1;
      }
      return uVar6;
    }
  }
LAB_141eeafcc:
  lVar4 = 0;
  do {
    if ((uVar10 == uVar11) && (uVar11 == uVar1)) {
      puVar8 = param_2;
      lVar3 = pdb_141eeadc0(param_1);
      if (lVar3 == 1) goto LAB_141eeb17b;
      uVar10 = param_2[2];
      if (puVar8 == (ulonglong *)0x0) {
        return 0;
      }
      uVar11 = *param_2;
    }
    uVar12 = uVar11;
    if (uVar10 == uVar11) {
      uVar12 = uVar11 * 2;
      if (uVar11 * 2 < uVar11 + 0x20) {
        uVar12 = uVar11 + 0x20;
      }
      pdb_142d7f0f0(&uStack_58,uVar11,param_2[1],uVar12,1,1,uVar16);
      if ((int)uStack_58 == 1) {
        return 1;
      }
      param_2[1] = uStack_50;
      *param_2 = uVar12;
    }
    uVar11 = param_2[1] + uVar10;
    uVar14 = uVar12 - uVar10;
    uVar7 = uVar14;
    if (uVar13 < uVar14) {
      uVar7 = uVar13;
    }
    pub_142e32780(lVar4 + uVar11,0,uVar7 - lVar4);
    uVar9 = uVar11;
    lVar4 = pdb_141ed7080(param_1,uVar11,uVar7);
    if (lVar4 == 1) {
      do {
        if (uVar9 == 0) {
          param_2[2] = uVar10;
          return 0;
        }
        switch((uint)uVar9 & 3) {
        case 0:
          cVar2 = *(char *)(uVar9 + 0x10);
          break;
        case 1:
          cVar2 = *(char *)(uVar9 + 0xf);
          break;
        case 2:
          goto code_r0x000141eeb177;
        case 3:
          cVar2 = (char)(uVar9 >> 0x20);
          if (0x29 < (uint)(uVar9 >> 0x20)) {
            cVar2 = '*';
          }
        }
        if (cVar2 != '#') {
code_r0x000141eeb177:
          param_2[2] = uVar10;
          goto LAB_141eeb17b;
        }
        uStack_58 = uVar9;
        pdb_1404b38e0(&uStack_58);
        uVar9 = uVar11;
        uVar5 = pdb_141ed7080(param_1,uVar11,uVar7);
      } while ((uVar5 & 1) != 0);
    }
    lVar4 = uVar7 - uVar9;
    if (uVar7 < uVar9) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143426537,0x36,&UNK_1434265e0);
    }
    uVar10 = uVar10 + uVar9;
    param_2[2] = uVar10;
    if (uVar9 == 0) {
      return 0;
    }
    uVar11 = uVar12;
    if (((((uStack_70 & 1) != 0) && (uVar13 <= uVar14)) && (uVar7 == uVar9)) &&
       (bVar15 = (longlong)uVar13 < 0, uVar13 = uVar13 * 2, bVar15)) {
      uVar13 = 0xffffffffffffffff;
    }
  } while( true );
}

