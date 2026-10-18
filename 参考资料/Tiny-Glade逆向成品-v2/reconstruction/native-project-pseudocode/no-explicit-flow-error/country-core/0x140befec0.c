// VA 0x140befec0, PDB extent 483 bytes
// country_core::systems::ui::ui_update::get_ui_volume
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/ui_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui::ui_update::get_ui_volume
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/ui_update.rs
   Extent: 483 */

longlong * pdb_140befec0(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lStack_48;
  ulonglong *puStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puVar1 = (ulonglong *)(param_1 + 0x90);
  uVar12 = *(ulonglong *)(param_1 + 0x90);
  lStack_48 = param_2;
  if (uVar12 < 0xfffffffffffffff0 && (char)(((uint)uVar12 & 8) >> 3) == '\0') {
    LOCK();
    uVar7 = *puVar1;
    if (uVar12 == uVar7) {
      *puVar1 = uVar12 + 0x10;
    }
    UNLOCK();
    if (uVar12 == uVar7) goto LAB_140beff1f;
  }
  pdb_142dbb5f0(puVar1,0,param_3,1000000000);
LAB_140beff1f:
  pdb_140e9a150(puVar1);
  uVar12 = (ulonglong)puVar1 | 1;
  pdb_140e9a150(uVar12);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar7 = pdb_1400af0a0(param_1 + 0xb8,&lStack_48);
    bVar13 = (byte)(uVar7 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar8 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(param_1 + 0xa0);
      auVar2 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x98) + uVar7);
      auVar16[0] = -(auVar2[0] == auVar14[0]);
      auVar16[1] = -(auVar2[1] == auVar14[1]);
      auVar16[2] = -(auVar2[2] == auVar14[2]);
      auVar16[3] = -(auVar2[3] == auVar14[3]);
      auVar16[4] = -(auVar2[4] == auVar14[4]);
      auVar16[5] = -(auVar2[5] == auVar14[5]);
      auVar16[6] = -(auVar2[6] == auVar14[6]);
      auVar16[7] = -(auVar2[7] == auVar14[7]);
      auVar16[8] = -(auVar2[8] == auVar14[0]);
      auVar16[9] = -(auVar2[9] == auVar14[1]);
      auVar16[10] = -(auVar2[10] == auVar14[2]);
      auVar16[0xb] = -(auVar2[0xb] == auVar14[3]);
      auVar16[0xc] = -(auVar2[0xc] == auVar14[4]);
      auVar16[0xd] = -(auVar2[0xd] == auVar14[5]);
      auVar16[0xe] = -(auVar2[0xe] == auVar14[6]);
      auVar16[0xf] = -(auVar2[0xf] == auVar14[7]);
      uVar10 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar11 = *(longlong *)(param_1 + 0x98) +
                 (uVar5 + uVar7 & *(ulonglong *)(param_1 + 0xa0)) * -0x10;
        if (param_2 == *(longlong *)(lVar11 + -0x10)) {
          plVar3 = *(longlong **)(lVar11 + -8);
          LOCK();
          lVar8 = *plVar3;
          *plVar3 = *plVar3 + 1;
          UNLOCK();
          if (*plVar3 != 0 && SCARRY8(lVar8,1) == *plVar3 < 0) {
            pdb_140e9a350(puVar1);
            pdb_140e9a350(uVar12);
            LOCK();
            uVar12 = *puVar1;
            *puVar1 = *puVar1 - 0x10;
            UNLOCK();
            if ((uVar12 & 0xfffffffffffffff2) == 0x12) {
              pdb_142dbbf50(puVar1);
            }
            return plVar3;
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar15[0] = -(auVar2[0] == -1);
      auVar15[1] = -(auVar2[1] == -1);
      auVar15[2] = -(auVar2[2] == -1);
      auVar15[3] = -(auVar2[3] == -1);
      auVar15[4] = -(auVar2[4] == -1);
      auVar15[5] = -(auVar2[5] == -1);
      auVar15[6] = -(auVar2[6] == -1);
      auVar15[7] = -(auVar2[7] == -1);
      auVar15[8] = -(auVar2[8] == -1);
      auVar15[9] = -(auVar2[9] == -1);
      auVar15[10] = -(auVar2[10] == -1);
      auVar15[0xb] = -(auVar2[0xb] == -1);
      auVar15[0xc] = -(auVar2[0xc] == -1);
      auVar15[0xd] = -(auVar2[0xd] == -1);
      auVar15[0xe] = -(auVar2[0xe] == -1);
      auVar15[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar7 = uVar7 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
  puStack_40 = puVar1;
  uStack_38 = uVar12;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143065fb8);
}

