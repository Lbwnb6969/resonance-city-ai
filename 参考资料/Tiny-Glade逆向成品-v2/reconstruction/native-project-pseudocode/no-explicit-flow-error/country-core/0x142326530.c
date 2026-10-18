// VA 0x142326530, PDB extent 2143 bytes
// country_core::systems::save::save_file_identity::try_approx_parse_save_file_identity<std::fs::File>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_file_identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000142326b22) */
/* WARNING: Removing unreachable block (ram,0x000142326a62) */
/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   country_core::systems::save::save_file_identity::try_approx_parse_save_file_identity<std::fs::File>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_file_identity.rs
   Extent: 2143 */

undefined8 pdb_142326530(undefined *param_1)

{
  code *pcVar1;
  code cVar2;
  char cVar3;
  code *pcVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  code *pcVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  code *pcVar17;
  uint uVar18;
  code *pcVar19;
  bool bVar20;
  undefined *puStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  byte bStack_c0;
  undefined1 uStack_bf;
  char cStack_be;
  undefined5 uStack_bd;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a0;
  longlong lStack_90;
  code *pcStack_88;
  longlong lStack_80;
  code *pcStack_78;
  ulonglong uStack_68;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pcVar4 = (code *)pub_1406abab0(0x800,1);
  if (pcVar4 == (code *)0x0) {
    pdb_142dc7e2a(1,0x800);
    goto LAB_142326cb7;
  }
  uStack_68 = 0x800;
  pcStack_58 = (code *)0x0;
  pcStack_d0 = (code *)0x800;
  pcStack_c8 = (code *)0x800;
  puVar14 = &uStack_68;
  puStack_d8 = param_1;
  pcStack_60 = pcVar4;
  lVar5 = pdb_1429972f0(&puStack_d8,puVar14);
  if (lVar5 == 1) {
    pdb_142dcf1b0(puVar14);
    CloseHandle(puStack_d8);
    goto joined_r0x000142326b58;
  }
  CloseHandle(puStack_d8);
  pdb_140f69110(&puStack_d8,pcStack_60,pcStack_58);
  pcVar4 = pcStack_c8;
  pcVar17 = pcStack_d0;
  if (((char)puStack_d8 != '\0') &&
     (pcVar4 = pcStack_d0, pcVar17 = pcStack_60, pcStack_58 < pcStack_d0)) {
    pdb_142dc8420(0,pcStack_d0,pcStack_58,&UNK_1434da038);
    goto LAB_142326cb7;
  }
  pdb_140f67bb0(&puStack_d8,pcVar17,pcVar4,&UNK_1434da050,10);
  if ((char)puStack_d8 == '\0') {
    if (cStack_be == '\0') {
      if (pcStack_d0 != (code *)0x0) {
        pcVar11 = pcStack_d0;
        if (pcStack_d0 < pcStack_88) {
          if (-0x41 < (char)pcStack_d0[lStack_90]) goto LAB_142326894;
        }
        else if (pcStack_d0 == pcStack_88) goto LAB_142326894;
        goto LAB_142326951;
      }
LAB_142326894:
      pcStack_b0 = pcStack_d0;
      if (pcStack_d0 == pcStack_88) {
        if ((bStack_c0 & 1) == 0) goto LAB_1423268a1;
      }
      else {
        cVar2 = pcStack_d0[lStack_90];
        uVar13 = (uint)(byte)cVar2;
        if ((char)cVar2 < '\0') {
          if ((byte)cVar2 < 0xe0) {
            uVar13 = (uVar13 & 0x1f) << 6 | (byte)pcStack_d0[lStack_90 + 1] & 0x3f;
          }
          else {
            uVar18 = (byte)pcStack_d0[lStack_90 + 2] & 0x3f |
                     ((byte)pcStack_d0[lStack_90 + 1] & 0x3f) << 6;
            if ((byte)cVar2 < 0xf0) {
              uVar13 = (uVar13 & 0x1f) << 0xc | uVar18;
            }
            else {
              uVar13 = (uVar13 & 7) << 0x12 | (byte)pcStack_d0[lStack_90 + 3] & 0x3f | uVar18 << 6;
            }
          }
        }
        if ((bStack_c0 & 1) == 0) {
          lVar5 = 1;
          if ((0x7f < uVar13) && (lVar5 = 2, 0x7ff < uVar13)) {
            lVar5 = 4 - (ulonglong)(uVar13 < 0x10000);
          }
          pcVar11 = pcStack_d0 + lVar5;
          if (pcVar11 != (code *)0x0) {
            if (pcVar11 < pcStack_88) {
              if ((char)pcVar11[lStack_90] < -0x40) {
LAB_142326951:
                pdb_142dc8070(lStack_90,pcStack_88,pcVar11,pcStack_88,&UNK_1434d9fe0);
                goto LAB_142326cb7;
              }
            }
            else if (pcVar11 != pcStack_88) goto LAB_142326951;
          }
          pcStack_b0 = pcStack_88;
          if (pcVar11 != pcStack_88) {
            pcStack_b0 = pcVar11;
          }
        }
      }
LAB_142326983:
      pcStack_b0 = pcStack_b0 + 10;
      if (pcStack_b0 != (code *)0x0) {
        if (pcStack_b0 < pcVar4) {
          if ((char)pcVar17[(longlong)pcStack_b0] < -0x40) {
LAB_142326995:
            pdb_142dc8070(pcVar17,pcVar4,pcStack_b0,pcVar4,&UNK_1434da060);
LAB_142326cb7:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
        }
        else if (pcVar4 != pcStack_b0) goto LAB_142326995;
      }
      pcVar4 = pcVar4 + -(longlong)pcStack_b0;
      pcVar17 = pcVar17 + (longlong)pcStack_b0;
      pcVar11 = (code *)0x0;
      do {
        while( true ) {
          pcVar6 = pcVar17 + (longlong)pcVar11;
          if (pcVar4 + -(longlong)pcVar11 < (code *)0x10) {
            pcVar12 = (code *)0x0;
            if (pcVar4 == pcVar11) goto LAB_142326b27;
            while (pcVar6[(longlong)pcVar12] != (code)0x3a) {
              pcVar12 = pcVar12 + 1;
              if (pcVar4 + -(longlong)pcVar11 == pcVar12) goto LAB_142326b27;
            }
          }
          else {
            lVar5 = pdb_140f69320(0x3a);
            pcVar12 = pcVar6;
            if (lVar5 != 1) goto LAB_142326b27;
          }
          pcVar6 = pcVar12 + (longlong)pcVar11 + 1;
          pcVar12 = pcVar12 + (longlong)pcVar11;
          pcVar11 = pcVar6;
          if (pcVar4 <= pcVar12) break;
          if ((pcVar4 < pcVar6) || (pcVar17[(longlong)pcVar12] == (code)0x3a)) {
            if (pcVar17[(longlong)pcVar12] == (code)0x3a) {
              pcVar12 = pcVar12 + 1;
              uVar7 = (longlong)pcVar4 - (longlong)pcVar12;
              if ((pcVar12 <= pcVar4 && uVar7 != 0) && ((char)pcVar17[(longlong)pcVar12] < -0x40)) {
                pdb_142dc8070(pcVar17,pcVar4,pcVar12,pcVar4,&UNK_1434da078);
                goto LAB_142326cb7;
              }
              lVar5 = pdb_140b95df0(pcVar17 + (longlong)pcVar12);
              uVar16 = 0;
              goto LAB_142326aa9;
            }
            goto LAB_142326b27;
          }
        }
      } while (pcVar6 <= pcVar4);
LAB_142326b27:
      puStack_d8 = &UNK_1434da098;
      pcStack_d0 = pdb_1402ed400;
      pdb_142e19120(&UNK_1434da0dd,&puStack_d8);
      goto joined_r0x000142326b58;
    }
  }
  else if (pcStack_a0 == (code *)0xffffffffffffffff) {
    pcVar11 = pcStack_b0 + (longlong)(pcStack_78 + -1);
    if (pcVar11 < pcStack_88) {
      pcStack_50 = pcStack_d0 + lStack_80 + -1;
LAB_1423267fd:
      pcVar6 = pcStack_78;
      if (((ulonglong)pcStack_b8 >> ((ulonglong)(byte)pcVar11[lStack_90] & 0x3f) & 1) == 0)
      goto LAB_1423267e6;
      lVar5 = 0;
      pcVar11 = pcStack_b0;
      do {
        if (pcStack_78 <= pcStack_d0 + lVar5) {
          pcVar11 = pcStack_d0 + -1;
          if (pcStack_78 <= pcVar11) {
            if (pcStack_d0 != (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pcVar11,pcStack_78,&UNK_1434da118);
            }
            goto LAB_142326983;
          }
          pcVar11 = pcVar11 + (longlong)pcStack_b0;
          pcVar12 = pcStack_50;
          pcVar19 = pcStack_d0;
          goto LAB_142326860;
        }
        if (pcStack_88 <= pcStack_d0 + (longlong)pcVar11) {
          pcVar4 = pcStack_b0 + (longlong)pcStack_d0;
          if (pcStack_b0 + (longlong)pcStack_d0 < pcStack_88) {
            pcVar4 = pcStack_88;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pcVar4,pcStack_88,&UNK_1434da148);
        }
        lVar8 = lVar5 + lStack_80;
        lVar5 = lVar5 + 1;
        pcVar12 = pcVar11 + (longlong)(pcStack_d0 + lStack_90);
        pcVar6 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
      } while (pcStack_d0[lVar8] == *pcVar12);
      goto LAB_1423267e9;
    }
  }
  else {
    pcVar11 = pcStack_78 + -1 + (longlong)pcStack_b0;
    if (pcVar11 < pcStack_88) {
      lVar5 = CONCAT53(uStack_bd,CONCAT12(cStack_be,CONCAT11(uStack_bf,bStack_c0)));
      pcStack_50 = pcStack_b8;
LAB_14232670c:
      if (((ulonglong)pcStack_b8 >> ((ulonglong)(byte)pcVar11[lStack_90] & 0x3f) & 1) == 0) {
        pcStack_b0 = pcStack_b0 + (longlong)pcStack_78;
        pcStack_a0 = (code *)0x0;
      }
      else {
        pcVar11 = pcStack_d0;
        if (pcStack_d0 < pcStack_a0) {
          pcVar11 = pcStack_a0;
        }
        pcVar6 = pcVar11;
        do {
          pcVar12 = pcStack_d0;
          if (pcStack_78 <= pcVar6) goto LAB_142326770;
          if (pcStack_88 <= pcStack_b0 + (longlong)pcVar6) {
            pcVar4 = pcVar11 + (longlong)pcStack_b0;
            if (pcVar11 + (longlong)pcStack_b0 < pcStack_88) {
              pcVar4 = pcStack_88;
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pcVar4,pcStack_88,&UNK_1434da148);
          }
          pcVar12 = pcVar6 + 1;
          pcVar19 = pcVar6 + lStack_80;
          pcVar1 = pcVar6 + (longlong)(pcStack_b0 + lStack_90);
          pcVar6 = pcVar12;
        } while (*pcVar19 == *pcVar1);
        pcStack_b0 = pcVar12 + ((longlong)pcStack_b0 - (longlong)pcStack_d0);
        pcStack_a0 = (code *)0x0;
      }
      goto LAB_1423266fc;
    }
  }
LAB_1423268a1:
  pdb_142e190c0();
joined_r0x000142326b58:
  if (uStack_68 != 0) {
    pub_1406abac0((byte *)pcStack_60,uStack_68,1);
  }
  return 1;
  while( true ) {
    if (pcStack_88 <= pcVar11) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pcVar11,pcStack_88,&UNK_1434da130);
    }
    cVar2 = *pcVar12;
    pcVar12 = pcVar12 + -1;
    pcVar1 = pcVar11 + lStack_90;
    pcVar11 = pcVar11 + -1;
    pcVar6 = (code *)CONCAT53(uStack_bd,CONCAT12(cStack_be,CONCAT11(uStack_bf,bStack_c0)));
    if (cVar2 != *pcVar1) break;
LAB_142326860:
    bVar20 = pcVar19 == (code *)0x0;
    pcVar19 = pcVar19 + -1;
    if (bVar20) goto LAB_142326983;
  }
LAB_1423267e6:
  pcVar6 = pcStack_b0 + (longlong)pcVar6;
LAB_1423267e9:
  pcStack_b0 = pcVar6;
  pcVar11 = pcStack_b0 + (longlong)(pcStack_78 + -1);
  if (pcStack_88 <= pcVar11) goto LAB_1423268a1;
  goto LAB_1423267fd;
  while( true ) {
    pcVar12 = pcVar12 + -1;
    if (pcStack_78 <= pcVar12) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pcVar12,pcStack_78,&UNK_1434da118);
    }
    pcVar11 = pcVar12 + (longlong)pcStack_b0;
    if (pcStack_88 <= pcVar11) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pcVar11,pcStack_88,&UNK_1434da130);
    }
    if (pcVar12[lStack_80] != pcVar11[lStack_90]) break;
LAB_142326770:
    if (pcVar12 <= pcStack_a0) goto LAB_142326983;
  }
  pcStack_b0 = pcStack_b0 + lVar5;
  pcStack_a0 = pcStack_78 + -lVar5;
LAB_1423266fc:
  pcVar11 = pcStack_78 + -1 + (longlong)pcStack_b0;
  if (pcStack_88 <= pcVar11) goto LAB_1423268a1;
  goto LAB_14232670c;
LAB_142326aa9:
  uVar9 = lVar5 + uVar16;
  if (uVar7 - uVar16 < 0x10) {
    uVar15 = 0;
    if (uVar7 == uVar16) goto LAB_142326bb8;
    while (*(char *)(uVar9 + uVar15) != ',') {
      uVar15 = uVar15 + 1;
      if (uVar7 - uVar16 == uVar15) goto LAB_142326bb8;
    }
  }
  else {
    lVar8 = pdb_140f69320(0x2c);
    uVar15 = uVar9;
    if (lVar8 != 1) goto LAB_142326bb8;
  }
  uVar9 = uVar15 + uVar16 + 1;
  if (uVar7 <= uVar15 + uVar16) {
    uVar16 = uVar9;
    if (uVar7 < uVar9) goto LAB_142326bb8;
    goto LAB_142326aa9;
  }
  cVar3 = *(char *)(lVar5 + uVar15 + uVar16);
  if ((uVar7 < uVar9) || (uVar16 = uVar9, cVar3 == ',')) goto LAB_142326b63;
  goto LAB_142326aa9;
LAB_142326b63:
  if (cVar3 == ',') {
    uVar10 = pdb_140b95df0(lVar5);
    uVar10 = pdb_1429ba350(uVar10);
    uVar10 = pdb_1411d9920(uVar10);
    if (uStack_68 == 0) {
      return uVar10;
    }
    pub_1406abac0((byte *)pcStack_60,uStack_68,1);
    return uVar10;
  }
LAB_142326bb8:
  puStack_d8 = &UNK_1434da098;
  pcStack_d0 = pdb_1402ed400;
  pdb_142e19120(&UNK_1434da0f3,&puStack_d8);
  goto joined_r0x000142326b58;
}

