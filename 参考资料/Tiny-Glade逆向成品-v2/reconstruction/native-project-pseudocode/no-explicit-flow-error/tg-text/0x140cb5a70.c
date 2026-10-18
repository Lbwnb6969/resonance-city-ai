// VA 0x140cb5a70, PDB extent 500 bytes
// tg_text::TextFragment::set_family
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::set_family
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 500 */

void pdb_140cb5a70(longlong param_1,char param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  if (param_2 == *(char *)(param_1 + 0x255)) {
    return;
  }
  plVar5 = *(longlong **)(param_1 + 0x230);
  LOCK();
  lVar3 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  if (*plVar5 != 0 && SCARRY8(lVar3,1) == *plVar5 < 0) {
    uStack_70 = CONCAT71(uStack_70._1_7_,param_2);
    plStack_58 = plVar5;
    if (plVar5[5] != 0) {
      uVar9 = pdb_1400aef40(plVar5 + 6,&uStack_70);
      lVar3 = plVar5[2];
      bVar14 = (byte)(uVar9 >> 0x39);
      auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
      auVar15 = pshuflw(auVar15,auVar15,0);
      lVar10 = 0;
      while( true ) {
        uVar9 = uVar9 & plVar5[3];
        auVar4 = *(undefined1 (*) [16])(lVar3 + uVar9);
        auVar17[0] = -(auVar4[0] == auVar15[0]);
        auVar17[1] = -(auVar4[1] == auVar15[1]);
        auVar17[2] = -(auVar4[2] == auVar15[2]);
        auVar17[3] = -(auVar4[3] == auVar15[3]);
        auVar17[4] = -(auVar4[4] == auVar15[4]);
        auVar17[5] = -(auVar4[5] == auVar15[5]);
        auVar17[6] = -(auVar4[6] == auVar15[6]);
        auVar17[7] = -(auVar4[7] == auVar15[7]);
        auVar17[8] = -(auVar4[8] == auVar15[0]);
        auVar17[9] = -(auVar4[9] == auVar15[1]);
        auVar17[10] = -(auVar4[10] == auVar15[2]);
        auVar17[0xb] = -(auVar4[0xb] == auVar15[3]);
        auVar17[0xc] = -(auVar4[0xc] == auVar15[4]);
        auVar17[0xd] = -(auVar4[0xd] == auVar15[5]);
        auVar17[0xe] = -(auVar4[0xe] == auVar15[6]);
        auVar17[0xf] = -(auVar4[0xf] == auVar15[7]);
        uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf
        ;
        uVar11 = (uint)uVar12;
        while (uVar12 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar13 = uVar7 + uVar9 & plVar5[3];
          if (param_2 == *(char *)(lVar3 + -0x28 + uVar13 * -0x28)) {
            lVar3 = lVar3 + uVar13 * -0x28;
            uStack_68 = *(undefined8 *)(lVar3 + -0x18);
            uStack_60 = *(undefined8 *)(lVar3 + -0x10);
            fVar1 = *(float *)(lVar3 + -8);
            fVar2 = *(float *)(param_1 + 0x240);
            uStack_70 = 0;
            pdb_140cb9750(&uStack_88,&uStack_70);
            uVar9 = *(ulonglong *)(param_1 + 0x200);
            if ((-1 < (longlong)uVar9) && (uVar9 != 0)) {
              pub_1406abac0(*(byte **)(param_1 + 0x208),uVar9,1);
            }
            *(undefined8 *)(param_1 + 0x210) = uStack_78;
            *(undefined8 *)(param_1 + 0x200) = uStack_88;
            *(undefined8 *)(param_1 + 0x208) = uStack_80;
            pdb_141cbe400(param_1,(undefined8 *)(param_1 + 0x200));
            pdb_140cb5ec0(param_1,fVar2 * fVar1);
            LOCK();
            *plStack_58 = *plStack_58 + -1;
            UNLOCK();
            if (*plStack_58 != 0) {
              return;
            }
            pdb_140cb5640(&plStack_58);
            return;
          }
          uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
        }
        auVar16[0] = -(auVar4[0] == -1);
        auVar16[1] = -(auVar4[1] == -1);
        auVar16[2] = -(auVar4[2] == -1);
        auVar16[3] = -(auVar4[3] == -1);
        auVar16[4] = -(auVar4[4] == -1);
        auVar16[5] = -(auVar4[5] == -1);
        auVar16[6] = -(auVar4[6] == -1);
        auVar16[7] = -(auVar4[7] == -1);
        auVar16[8] = -(auVar4[8] == -1);
        auVar16[9] = -(auVar4[9] == -1);
        auVar16[10] = -(auVar4[10] == -1);
        auVar16[0xb] = -(auVar4[0xb] == -1);
        auVar16[0xc] = -(auVar4[0xc] == -1);
        auVar16[0xd] = -(auVar4[0xd] == -1);
        auVar16[0xe] = -(auVar4[0xe] == -1);
        auVar16[0xf] = -(auVar4[0xf] == -1);
        if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar16 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar16 >> 0x1f,0) & 1) != 0) || (SUB161(auVar16 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') break;
        uVar9 = uVar9 + lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14307a8c8);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

