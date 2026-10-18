// VA 0x140c25fa0, PDB extent 569 bytes
// country_core::resources::clutter_registry::ClutterRegistry::register_external
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_registry::ClutterRegistry::register_external
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 569 */

undefined8
pdb_140c25fa0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,undefined1 param_5,
             undefined8 param_6,undefined8 param_7,undefined1 param_8,undefined8 *param_9,
             undefined8 *param_10)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  longlong *plStack_a0;
  code *pcStack_98;
  
  lStack_120 = param_2;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    uVar5 = pdb_1417c5550(param_1 + 0xa0,&lStack_120);
    bVar10 = (byte)(uVar5 >> 0x39);
    auVar11 = ZEXT216(CONCAT11(bVar10,bVar10));
    auVar11 = pshuflw(auVar11,auVar11,0);
    lVar7 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(param_1 + 0x88);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x80) + uVar5);
      auVar13[0] = -(auVar1[0] == auVar11[0]);
      auVar13[1] = -(auVar1[1] == auVar11[1]);
      auVar13[2] = -(auVar1[2] == auVar11[2]);
      auVar13[3] = -(auVar1[3] == auVar11[3]);
      auVar13[4] = -(auVar1[4] == auVar11[4]);
      auVar13[5] = -(auVar1[5] == auVar11[5]);
      auVar13[6] = -(auVar1[6] == auVar11[6]);
      auVar13[7] = -(auVar1[7] == auVar11[7]);
      auVar13[8] = -(auVar1[8] == auVar11[0]);
      auVar13[9] = -(auVar1[9] == auVar11[1]);
      auVar13[10] = -(auVar1[10] == auVar11[2]);
      auVar13[0xb] = -(auVar1[0xb] == auVar11[3]);
      auVar13[0xc] = -(auVar1[0xc] == auVar11[4]);
      auVar13[0xd] = -(auVar1[0xd] == auVar11[5]);
      auVar13[0xe] = -(auVar1[0xe] == auVar11[6]);
      auVar13[0xf] = -(auVar1[0xf] == auVar11[7]);
      uVar8 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (param_2 ==
            *(longlong *)
             (*(longlong *)(param_1 + 0x80) + -0x70 +
             (uVar2 + uVar5 & *(ulonglong *)(param_1 + 0x88)) * -0x70)) {
          uStack_110 = *(undefined8 *)(param_2 + -8);
          plStack_a0 = &lStack_118;
          pcStack_98 = pdb_1402ed420;
          lStack_118 = param_2;
          pdb_140905540(&uStack_108,&UNK_14306ae88,&plStack_a0);
          uVar6 = pdb_142de92b0(&uStack_108);
          return uVar6;
        }
        uVar8 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar8);
      }
      auVar12[0] = -(auVar1[0] == -1);
      auVar12[1] = -(auVar1[1] == -1);
      auVar12[2] = -(auVar1[2] == -1);
      auVar12[3] = -(auVar1[3] == -1);
      auVar12[4] = -(auVar1[4] == -1);
      auVar12[5] = -(auVar1[5] == -1);
      auVar12[6] = -(auVar1[6] == -1);
      auVar12[7] = -(auVar1[7] == -1);
      auVar12[8] = -(auVar1[8] == -1);
      auVar12[9] = -(auVar1[9] == -1);
      auVar12[10] = -(auVar1[10] == -1);
      auVar12[0xb] = -(auVar1[0xb] == -1);
      auVar12[0xc] = -(auVar1[0xc] == -1);
      auVar12[0xd] = -(auVar1[0xd] == -1);
      auVar12[0xe] = -(auVar1[0xe] == -1);
      auVar12[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar5 = uVar5 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
  uVar9 = (param_4 & 0xff) << 3;
  uStack_c8 = *(undefined8 *)(&UNK_14306b638 + uVar9);
  uStack_d0 = *(undefined8 *)(&UNK_14306b720 + uVar9);
  uStack_a4 = param_5;
  uStack_e0 = param_6;
  uStack_d8 = param_7;
  uStack_a3 = param_8;
  uStack_108 = *param_9;
  uStack_100 = param_9[1];
  uStack_f8 = param_9[2];
  uStack_f0 = param_9[3];
  uStack_c0 = *param_10;
  uStack_ac = *(undefined8 *)((longlong)param_10 + 0x14);
  uStack_b8 = (undefined4)param_10[1];
  uStack_b4 = (undefined4)*(undefined8 *)((longlong)param_10 + 0xc);
  uStack_b0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_10 + 0xc) >> 0x20);
  uStack_e8 = param_3;
  pdb_1417b27b0(&plStack_a0,param_1 + 0x80,param_2,&uStack_108);
  cVar4 = pdb_1417bba20(param_1 + 0xb0,param_2);
  if (cVar4 == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x78);
    if (lVar7 == *(longlong *)(param_1 + 0x68)) {
      pdb_142d7e8a0(param_1 + 0x68);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x70) + lVar7 * 8) = param_2;
    *(longlong *)(param_1 + 0x78) = lVar7 + 1;
  }
  return 0;
}

