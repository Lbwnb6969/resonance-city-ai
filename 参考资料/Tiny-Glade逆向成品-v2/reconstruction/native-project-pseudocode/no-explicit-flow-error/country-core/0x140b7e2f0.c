// VA 0x140b7e2f0, PDB extent 571 bytes
// country_core::startup::mod_hot_reload::classify
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure: country_core::startup::mod_hot_reload::classify
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
   Extent: 571 */

char pdb_140b7e2f0(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar7 = 0;
  uVar11 = 0;
  do {
    bVar2 = true;
    uVar3 = uVar7;
    do {
      uVar6 = uVar11;
      uVar7 = uVar3;
      uVar10 = param_2;
      if (param_2 < uVar3) goto joined_r0x000140b7e403;
      uVar9 = (longlong)param_1 + uVar3;
      uVar7 = param_2;
      if (param_2 - uVar3 < 0x10) {
        uVar8 = 0;
        if (param_2 == uVar3) goto joined_r0x000140b7e403;
        while (*(char *)(uVar9 + uVar8) != '/') {
          uVar8 = uVar8 + 1;
          if (param_2 - uVar3 == uVar8) goto joined_r0x000140b7e403;
        }
      }
      else {
        lVar5 = pdb_140f69320(0x2f);
        uVar8 = uVar9;
        if (lVar5 != 1) goto joined_r0x000140b7e403;
      }
      uVar6 = uVar8 + uVar3 + 1;
      uVar10 = uVar8 + uVar3;
      uVar3 = uVar6;
    } while ((param_2 <= uVar10) || (*(char *)((longlong)param_1 + uVar10) != '/'));
    bVar2 = false;
    uVar7 = uVar6;
joined_r0x000140b7e403:
    if ((uVar10 != uVar11) && (*(char *)((longlong)param_1 + uVar11) == '.')) {
      return '\x03';
    }
    uVar11 = uVar6;
    if (bVar2) {
      if (param_2 < 7) {
        return '\x03';
      }
      if (*(int *)((longlong)param_1 + 3) == 0x2f737465 && (int)*param_1 == 0x65737361) {
        return '\x01';
      }
      if (param_2 == 7) {
        return '\x03';
      }
      if (param_2 == 0x14) {
        iVar1 = (int)param_1[2];
        auVar14[0] = -((char)iVar1 == DAT_14305c4e0);
        auVar14[1] = -((char)((uint)iVar1 >> 8) == UNK_14305c4e1);
        auVar14[2] = -((char)((uint)iVar1 >> 0x10) == UNK_14305c4e2);
        auVar14[3] = -((char)((uint)iVar1 >> 0x18) == UNK_14305c4e3);
        auVar14[4] = -(UNK_14305c4e4 == '\0');
        auVar14[5] = -(UNK_14305c4e5 == '\0');
        auVar14[6] = -(UNK_14305c4e6 == '\0');
        auVar14[7] = -(UNK_14305c4e7 == '\0');
        auVar14[8] = -(UNK_14305c4e8 == '\0');
        auVar14[9] = -(UNK_14305c4e9 == '\0');
        auVar14[10] = -(UNK_14305c4ea == '\0');
        auVar14[0xb] = -(UNK_14305c4eb == '\0');
        auVar14[0xc] = -(UNK_14305c4ec == '\0');
        auVar14[0xd] = -(UNK_14305c4ed == '\0');
        auVar14[0xe] = -(UNK_14305c4ee == '\0');
        auVar14[0xf] = -(UNK_14305c4ef == '\0');
        auVar12[0] = -((char)*param_1 == DAT_14305c4f0);
        auVar12[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14305c4f1);
        auVar12[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14305c4f2);
        auVar12[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14305c4f3);
        auVar12[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14305c4f4);
        auVar12[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14305c4f5);
        auVar12[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14305c4f6);
        auVar12[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14305c4f7);
        auVar12[8] = -((char)param_1[1] == UNK_14305c4f8);
        auVar12[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14305c4f9);
        auVar12[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14305c4fa);
        auVar12[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14305c4fb);
        auVar12[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14305c4fc);
        auVar12[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14305c4fd);
        auVar12[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14305c4fe);
        auVar12[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14305c4ff);
        auVar12 = auVar12 & auVar14;
        if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) {
          return '\x02';
        }
      }
      if ((*param_1 == 0x2f72657474756c63) &&
         (*(int *)((longlong)param_1 + (param_2 - 4)) == 0x626c672e)) {
        return '\x02';
      }
      if (param_2 < 9) {
        return '\x03';
      }
      if (((char)param_1[1] == '/' && *param_1 == 0x7365727574786574) &&
         (cVar4 = pdb_140d926c0(param_1,param_2), cVar4 != '\0')) {
        return '\0';
      }
      if (param_2 < 0x19) {
        return '\x03';
      }
      auVar15[0] = -(*(char *)((longlong)param_1 + 9) == DAT_14305c500);
      auVar15[1] = -(*(char *)((longlong)param_1 + 10) == UNK_14305c501);
      auVar15[2] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14305c502);
      auVar15[3] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14305c503);
      auVar15[4] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14305c504);
      auVar15[5] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14305c505);
      auVar15[6] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14305c506);
      auVar15[7] = -((char)param_1[2] == UNK_14305c507);
      auVar15[8] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14305c508);
      auVar15[9] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14305c509);
      auVar15[10] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14305c50a);
      auVar15[0xb] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14305c50b);
      auVar15[0xc] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14305c50c);
      auVar15[0xd] = -(*(char *)((longlong)param_1 + 0x16) == UNK_14305c50d);
      auVar15[0xe] = -(*(char *)((longlong)param_1 + 0x17) == UNK_14305c50e);
      auVar15[0xf] = -((char)param_1[3] == UNK_14305c50f);
      auVar13[0] = -((char)*param_1 == DAT_14305c510);
      auVar13[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14305c511);
      auVar13[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14305c512);
      auVar13[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14305c513);
      auVar13[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14305c514);
      auVar13[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14305c515);
      auVar13[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14305c516);
      auVar13[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14305c517);
      auVar13[8] = -((char)param_1[1] == UNK_14305c518);
      auVar13[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14305c519);
      auVar13[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14305c51a);
      auVar13[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14305c51b);
      auVar13[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14305c51c);
      auVar13[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14305c51d);
      auVar13[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14305c51e);
      auVar13[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14305c51f);
      auVar13 = auVar13 & auVar15;
      if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
        uVar7 = *(ulonglong *)((longlong)param_1 + (param_2 - 8));
        uVar7 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                uVar7 << 0x38;
        return (uVar7 < 0x2e74657874757265 != 0x2e74657874757265 < uVar7) * '\x03';
      }
      return '\x03';
    }
  } while( true );
}

