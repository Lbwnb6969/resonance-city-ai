// VA 0x140bd8520, PDB extent 552 bytes
// country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::status
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::status
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
   Extent: 552 */

undefined8 * pdb_140bd8520(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong alStack_40 [2];
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar7 = *(longlong *)(param_2 + 0x30);
  pcVar1 = (char *)(lVar7 + 0x10);
  LOCK();
  bVar14 = *(char *)(lVar7 + 0x10) == '\0';
  if (bVar14) {
    *(char *)(lVar7 + 0x10) = '\x01';
  }
  UNLOCK();
  alStack_40[0] = param_3;
  if (bVar14) {
    pdb_140e9a150(pcVar1);
    lVar12 = *(longlong *)(lVar7 + 0x30);
  }
  else {
    pdb_142dbd1a0(pcVar1,param_2,1000000000);
    pdb_140e9a150(pcVar1);
    lVar12 = *(longlong *)(lVar7 + 0x30);
  }
  if (lVar12 != 0) {
    uVar6 = pdb_1400af0a0(lVar7 + 0x38,alStack_40);
    bVar15 = (byte)(uVar6 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar12 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar7 + 0x20);
      auVar3 = *(undefined1 (*) [16])(*(longlong *)(lVar7 + 0x18) + uVar6);
      auVar18[0] = -(auVar3[0] == auVar16[0]);
      auVar18[1] = -(auVar3[1] == auVar16[1]);
      auVar18[2] = -(auVar3[2] == auVar16[2]);
      auVar18[3] = -(auVar3[3] == auVar16[3]);
      auVar18[4] = -(auVar3[4] == auVar16[4]);
      auVar18[5] = -(auVar3[5] == auVar16[5]);
      auVar18[6] = -(auVar3[6] == auVar16[6]);
      auVar18[7] = -(auVar3[7] == auVar16[7]);
      auVar18[8] = -(auVar3[8] == auVar16[0]);
      auVar18[9] = -(auVar3[9] == auVar16[1]);
      auVar18[10] = -(auVar3[10] == auVar16[2]);
      auVar18[0xb] = -(auVar3[0xb] == auVar16[3]);
      auVar18[0xc] = -(auVar3[0xc] == auVar16[4]);
      auVar18[0xd] = -(auVar3[0xd] == auVar16[5]);
      auVar18[0xe] = -(auVar3[0xe] == auVar16[6]);
      auVar18[0xf] = -(auVar3[0xf] == auVar16[7]);
      uVar10 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar11 = *(longlong *)(lVar7 + 0x18) +
                 (uVar4 + uVar6 & *(ulonglong *)(lVar7 + 0x20)) * -0x20;
        if (param_3 == *(longlong *)(lVar11 + -0x20)) {
          uVar6 = *(ulonglong *)(lVar11 + -0x18);
          lVar7 = 2;
          if (0x8000000000000002 < uVar6) {
            lVar7 = uVar6 + 0x7ffffffffffffffd;
          }
          if (lVar7 == 0) {
            uVar8 = 0x8000000000000003;
          }
          else {
            if (lVar7 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000140bd867a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar9 = (undefined8 *)
                       (*(code *)(&UNK_1430651d8 +
                                 *(int *)(&UNK_1430651d8 +
                                         ((longlong)uVar6 >> 0x3f & uVar6 + 0x8000000000000001) * 4)
                                 ))(0x8000000000000002,lVar11,
                                    &UNK_1430651d8 +
                                    *(int *)(&UNK_1430651d8 +
                                            ((longlong)uVar6 >> 0x3f & uVar6 + 0x8000000000000001) *
                                            4));
              return puVar9;
            }
            uVar8 = 0x8000000000000004;
          }
          *param_1 = uVar8;
          param_1[1] = uStack_58;
          param_1[2] = uStack_50;
          goto LAB_140bd86ed;
        }
        uVar10 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar10);
      }
      auVar17[0] = -(auVar3[0] == -1);
      auVar17[1] = -(auVar3[1] == -1);
      auVar17[2] = -(auVar3[2] == -1);
      auVar17[3] = -(auVar3[3] == -1);
      auVar17[4] = -(auVar3[4] == -1);
      auVar17[5] = -(auVar3[5] == -1);
      auVar17[6] = -(auVar3[6] == -1);
      auVar17[7] = -(auVar3[7] == -1);
      auVar17[8] = -(auVar3[8] == -1);
      auVar17[9] = -(auVar3[9] == -1);
      auVar17[10] = -(auVar3[10] == -1);
      auVar17[0xb] = -(auVar3[0xb] == -1);
      auVar17[0xc] = -(auVar3[0xc] == -1);
      auVar17[0xd] = -(auVar3[0xd] == -1);
      auVar17[0xe] = -(auVar3[0xe] == -1);
      auVar17[0xf] = -(auVar3[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar6 = uVar6 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  *param_1 = 0x8000000000000005;
LAB_140bd86ed:
  pdb_140e9a350();
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    pdb_142dbcef0(pcVar1,0);
  }
  return param_1;
}

