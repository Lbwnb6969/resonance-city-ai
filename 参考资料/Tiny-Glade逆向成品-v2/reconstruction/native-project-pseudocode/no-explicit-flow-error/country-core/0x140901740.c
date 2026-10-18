// VA 0x140901740, PDB extent 264 bytes
// country_core::resources::walls::decorator::DeferredDecoratorOpEvents::send
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DeferredDecoratorOpEvents::send
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 264 */

void pdb_140901740(byte *****param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte ****ppppbVar3;
  byte *****pppppbVar4;
  longlong *plVar5;
  byte ******ppppppbVar6;
  longlong *plVar7;
  byte ******ppppppbVar8;
  byte ******ppppppbVar9;
  byte *******pppppppbVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  byte ******ppppppbVar17;
  ulonglong uVar18;
  byte ******ppppppbVar19;
  byte ******ppppppbVar20;
  ulonglong uVar21;
  byte *******pppppppbVar22;
  bool bVar23;
  byte ******ppppppbStack_288;
  ulonglong uStack_280;
  undefined1 auStack_278 [240];
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  byte ******ppppppbStack_170;
  ulonglong uStack_168;
  undefined1 auStack_160 [240];
  ulonglong uStack_70;
  ulonglong uStack_68;
  byte ****ppppbStack_60;
  ulonglong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  LOCK();
  ppppbVar3 = *param_1;
  if (ppppbVar3 == (byte ****)0x0) {
    *param_1 = (byte ****)0x8;
  }
  UNLOCK();
  if (ppppbVar3 != (byte ****)0x0) {
    ppppbStack_60 = (byte ****)0x1409017fd;
    pdb_142dbc1f0(param_1,param_2,1000000000);
  }
  ppppbStack_60 = (byte ****)0x140901777;
  pdb_140e9a150(param_1);
  ppppbStack_60 = (byte ****)0x140901786;
  pdb_140e9a150((ulonglong)param_1 | 1);
  ppppbVar3 = param_1[3];
  if (ppppbVar3 == param_1[1]) {
    ppppbStack_60 = (byte ****)0x1409017a1;
    pdb_142d91fd0(param_1 + 1);
  }
  ppppbStack_60 = (byte ****)0x1409017bf;
  pub_142e32760(param_1[2] + (longlong)ppppbVar3 * 0x15,param_2,0xa8);
  param_1[3] = (byte ****)((longlong)ppppbVar3 + 1);
  ppppbStack_60 = (byte ****)0x1409017ce;
  pdb_140e9a350(param_1);
  ppppbStack_60 = (byte ****)0x1409017d6;
  pdb_140e9a350();
  LOCK();
  ppppbVar3 = *param_1;
  if (ppppbVar3 == (byte ****)0x8) {
    *param_1 = (byte ****)0x0;
  }
  plVar5 = plRam0000000143caeae8;
  UNLOCK();
  if (ppppbVar3 == (byte ****)0x8) {
    return;
  }
  uStack_48 = 0xfffffffffffffffe;
  bStack_49 = 0;
  while( true ) {
    plVar7 = (longlong *)*plVar5;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)pdb_142e116d0();
    }
    uVar18 = (ulonglong)((longlong)param_1 * -0x61c8864680b583eb) >> (-(char)plVar7[3] & 0x3fU);
    if ((ulonglong)plVar7[1] <= uVar18) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar18,plVar7[1],&UNK_143220ec8);
    }
    puVar1 = (ulonglong *)(*plVar7 + uVar18 * 0x40);
    plVar2 = (longlong *)(*plVar7 + uVar18 * 0x40);
    LOCK();
    bVar23 = *plVar2 == 0;
    if (bVar23) {
      *plVar2 = 1;
    }
    UNLOCK();
    if (!bVar23) {
      pdb_142e11820(puVar1);
    }
    if ((longlong *)*plVar5 == plVar7) break;
    LOCK();
    uVar18 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (3 < uVar18 && (char)(((uint)uVar18 & 2) >> 1) == '\0') {
      pdb_142e11730();
    }
  }
  ppppppbVar17 = (byte ******)puVar1[1];
  uStack_70 = 0;
  uStack_58 = 0;
  ppppppbVar19 = (byte ******)0x0;
  uVar18 = 0;
  ppppppbVar8 = (byte ******)(puVar1 + 1);
  do {
    uVar15 = uStack_70;
    uVar18 = uVar18 & 0xffffffff;
    ppppppbVar20 = ppppppbVar19;
    do {
      uVar14 = (uint)uVar18;
      ppppppbVar6 = ppppppbVar20;
      do {
        ppppppbVar20 = ppppppbVar17;
        ppppppbVar19 = ppppppbVar6;
        ppppppbVar9 = ppppppbVar8;
        if (ppppppbVar20 == (byte ******)0x0) {
          uVar18 = uVar18 & 0xff;
          goto code_r0x000142dbcc35;
        }
        ppppppbVar8 = ppppppbVar20 + 10;
        ppppppbVar17 = (byte ******)ppppppbVar20[10];
        ppppppbVar6 = ppppppbVar20;
      } while (ppppppbVar20[9] != param_1);
      if ((uStack_58 & 8) != 0) {
        uVar18 = 1;
code_r0x000142dbcc35:
        uVar21 = uStack_70;
        if (8 < uStack_70) {
          uVar21 = uStack_168;
        }
        if (uVar21 != 0) {
          uVar11 = pdb_140f3c9d0();
          if (uVar11 == puVar1[3]) {
            if ((uint)puVar1[4] < uVar14) {
code_r0x000142dbcc6e:
              uVar16 = (uint)puVar1[5] << 0xd ^ (uint)puVar1[5];
              uVar16 = uVar16 >> 0x11 ^ uVar16;
              *(uint *)(puVar1 + 5) = uVar16 << 5 ^ uVar16;
              uVar11 = pdb_140f5a1d0(uVar11);
              puVar1[3] = uVar11;
              *(uint *)(puVar1 + 4) = uVar14;
              bVar13 = 1;
              goto code_r0x000142dbccbb;
            }
          }
          else if (puVar1[3] < uVar11) goto code_r0x000142dbcc6e;
        }
        bVar13 = 0;
code_r0x000142dbccbb:
        bVar13 = (bStack_49 | bVar13) & uVar21 != 0;
        uVar11 = 0;
        if (bVar13 != 0) {
          uVar11 = uStack_58;
        }
        *param_1 = (byte ****)(uVar11 | uVar18);
        pppppppbVar10 = &ppppppbStack_170;
        if (8 < uVar15) {
          pppppppbVar10 = (byte *******)ppppppbStack_170;
        }
        if (uVar21 != 0) {
          pppppppbVar22 = pppppppbVar10 + uVar21 * 4;
          do {
            (*pppppppbVar10)[0xb] = (byte *****)(ulonglong)bVar13;
            ppppppbVar8 = *pppppppbVar10;
            ppppppbVar17 = (byte ******)*ppppppbVar8;
            if (*ppppppbVar17 == (byte *****)0x0) {
              ppppppbVar17 = ppppppbVar17 + 1;
              ppppppbVar8[1] = (byte *****)0x0;
              ppppppbVar8 = ppppppbVar8 + 1;
              ppppppbVar19 = (byte ******)0x1;
            }
            else {
              LOCK();
              pppppbVar4 = ppppppbVar8[1];
              ppppppbVar8[1] = (byte *****)0x0;
              UNLOCK();
              ppppppbVar8 = ppppppbVar8 + 1;
              if (pppppbVar4 != (byte *****)0x1) {
                ppppppbVar8 = (byte ******)0x0;
              }
              ppppppbVar19 = (byte ******)0x0;
            }
            pppppppbVar10[1] = ppppppbVar19;
            pppppppbVar10[2] = ppppppbVar17;
            pppppppbVar10[3] = ppppppbVar8;
            pppppppbVar10 = pppppppbVar10 + 4;
          } while (pppppppbVar10 != pppppppbVar22);
        }
        LOCK();
        uVar18 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (3 < uVar18 && (char)(((uint)uVar18 & 2) >> 1) == '\0') {
          pdb_142e11730(puVar1);
        }
        pub_142e32760(auStack_278,auStack_160,0xf0);
        uVar15 = uStack_70;
        uStack_188 = 0;
        uStack_280 = uStack_168;
        uVar18 = uStack_70;
        if (8 < uStack_70) {
          uStack_188 = uStack_70;
          uStack_280 = 0;
          uVar18 = uStack_168;
        }
        ppppppbStack_288 = ppppppbStack_170;
        uStack_178 = uVar18;
        pppppppbVar10 = &ppppppbStack_288;
        if (8 < uStack_70) {
          pppppppbVar10 = (byte *******)ppppppbStack_170;
        }
        if (uVar18 != 0) {
          pppppppbVar10 = pppppppbVar10 + 3;
          uVar21 = 1;
          do {
            uStack_180 = uVar21;
            ppppppbVar8 = pppppppbVar10[-1];
            ppppppbVar17 = *pppppppbVar10;
            if (pppppppbVar10[-2] == (byte ******)0x1) {
              (*(code *)ppppppbVar8[1])(ppppppbVar17);
            }
            else if (ppppppbVar17 != (byte ******)0x0) {
              (*(code *)*ppppppbVar8)(ppppppbVar8[2],ppppppbVar17,0,0);
            }
            pppppppbVar10 = pppppppbVar10 + 4;
            bVar23 = uVar21 != uVar18;
            uVar21 = uVar21 + 1;
          } while (bVar23);
        }
        if (8 < uVar15) {
          pub_1406abac0((byte *)ppppppbStack_170,uVar15 << 5,8);
        }
        return;
      }
      uStack_68 = uVar18 & 0xffffffff;
    } while (((uStack_58 & 4) != 0) &&
            (uVar18 = CONCAT71((int7)(uStack_58 >> 8),1), ((ulonglong)ppppppbVar20[0xc] & 0xc) != 0)
            );
    ppppbStack_60 = (byte ****)ppppppbVar20[0xc];
    *ppppppbVar9 = (byte *****)ppppppbVar17;
    if ((byte ******)puVar1[2] == ppppppbVar20) {
      puVar1[2] = (ulonglong)ppppppbVar19;
    }
    puVar12 = &uStack_168;
    uVar18 = uStack_70;
    pppppppbVar10 = (byte *******)ppppppbStack_170;
    if (uStack_70 < 9) {
      puVar12 = &uStack_70;
      uVar18 = 8;
      pppppppbVar10 = &ppppppbStack_170;
    }
    uVar15 = *puVar12;
    if (*puVar12 == uVar18) {
      pdb_142e11bf0(&ppppppbStack_170);
      puVar12 = &uStack_168;
      pppppppbVar10 = (byte *******)ppppppbStack_170;
      uVar15 = uStack_168;
    }
    uStack_58 = uStack_58 + (longlong)ppppbStack_60;
    pppppppbVar10[uVar15 * 4] = ppppppbVar20;
    pppppppbVar10[uVar15 * 4 + 1] = (byte ******)0x2;
    *puVar12 = *puVar12 + 1;
    uVar18 = uStack_68;
    ppppppbVar8 = ppppppbVar9;
  } while( true );
}

