// Matched PDB: country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute
// VA 0x140b04130, PDB extent 1349 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   country_core::systems::render_loop::compute_passes::roof_tiles_gravity::roof_tiles_gravity_compute
   Extent: 1349 bytes. No whole-program auto-analysis. */

void pdb_140b04130(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong alStack_3b0 [31];
  longlong lStack_2b8;
  longlong lStack_2b0;
  undefined1 uStack_2a8;
  undefined1 auStack_27c [20];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_1c8;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 uStack_a8;
  undefined1 *puStack_a0;
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar10 = 0x1d6a82b468dfb8a2;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar7 + uVar10);
      auVar16[0] = -(auVar2[0] == DAT_142e34ec0);
      auVar16[1] = -(auVar2[1] == DAT_142e34ec0._1_1_);
      auVar16[2] = -(auVar2[2] == DAT_142e34ec0._2_1_);
      auVar16[3] = -(auVar2[3] == DAT_142e34ec0._3_1_);
      auVar16[4] = -(auVar2[4] == DAT_142e34ec0._4_1_);
      auVar16[5] = -(auVar2[5] == DAT_142e34ec0._5_1_);
      auVar16[6] = -(auVar2[6] == DAT_142e34ec0._6_1_);
      auVar16[7] = -(auVar2[7] == DAT_142e34ec0._7_1_);
      auVar16[8] = -(auVar2[8] == DAT_142e34ec0._8_1_);
      auVar16[9] = -(auVar2[9] == DAT_142e34ec0._9_1_);
      auVar16[10] = -(auVar2[10] == DAT_142e34ec0._10_1_);
      auVar16[0xb] = -(auVar2[0xb] == DAT_142e34ec0._11_1_);
      auVar16[0xc] = -(auVar2[0xc] == DAT_142e34ec0._12_1_);
      auVar16[0xd] = -(auVar2[0xd] == DAT_142e34ec0._13_1_);
      auVar16[0xe] = -(auVar2[0xe] == DAT_142e34ec0._14_1_);
      auVar16[0xf] = -(auVar2[0xf] == DAT_142e34ec0._15_1_);
      uVar13 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar14 = uVar5 + uVar10 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar7 + -0x18 + uVar14 * -0x18);
        auVar17[0] = -(*pcVar1 == DAT_142e60e60);
        auVar17[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar17[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar17[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar17[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar17[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar17[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar17[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar17[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar17[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar17[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar17[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar17[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar17[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar17[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar17[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar7 + uVar14 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar10) ||
             (uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar10 * 8), uVar10 == 0))
          goto LAB_140b044df;
          lVar7 = ~uVar10 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar7) == 0) goto LAB_140b044df;
          uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar7 + 0x10);
          puVar8 = (undefined8 *)pdb_140bf45b0(uVar3,&UNK_14331c898);
          if ((puVar8 == (undefined8 *)0x0) ||
             (lVar7 = (**(code **)(puVar8[1] + 0x18))(*puVar8), lVar7 == 0)) {
            pdb_142dc8150(&UNK_143053388);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pdb_141944300(alStack_3b0,param_2);
          pdb_1419337f0(alStack_3b0,param_2);
          if (alStack_3b0[0] == *(longlong *)(param_2 + 0x598)) {
            lStack_f8 = lStack_2b8 + lStack_2b0 * 4;
            auStack_b8 = (undefined1  [16])0x0;
            auStack_c8 = (undefined1  [16])0x0;
            auStack_d8 = (undefined1  [16])0x0;
            lStack_110 = param_2 + 0xf8;
            lStack_118 = param_2 + 0x198;
            lStack_100 = lStack_2b8;
            uStack_f0 = 8;
            uStack_e8 = 0;
            uStack_e0 = 8;
            uStack_a8 = uStack_2a8;
            uStack_268 = 0;
            uStack_1c8 = 0;
            lStack_128 = lVar7;
            lStack_120 = param_2;
            plStack_108 = alStack_3b0;
            pdb_1415fb830(&uStack_68,&uStack_268);
            uStack_3b = 1;
            pdb_140499e40(alStack_3b0);
            uStack_48 = uStack_68;
            uStack_50 = uStack_60;
            uStack_3a = 0;
            pdb_14152b910(auStack_27c,uVar3,param_1);
            uStack_80 = 0;
            uStack_78 = 8;
            uStack_70 = 0;
            uStack_39 = 0;
            uVar9 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333133d,0x24,&uStack_80);
            uStack_39 = 0;
            pdb_140e291c0(&uStack_268,&UNK_14333133d,0x24,uVar9,param_1);
            auStack_98 = (undefined1  [16])0x0;
            uStack_88 = 0;
            uStack_39 = 0;
            puStack_a0 = auStack_27c;
            pdb_141792d50(alStack_3b0,&uStack_268,&puStack_a0);
            uStack_268 = uStack_48;
            uStack_260 = uStack_50;
            uStack_258 = uStack_58;
            uStack_39 = 1;
            pdb_141782da0(alStack_3b0,&uStack_268);
            uStack_3a = 1;
            pdb_141537340(uVar3,param_1);
            return;
          }
          goto LAB_140b044ec;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_140b044df:
  pdb_142dc8150(&UNK_143053370);
LAB_140b044ec:
  pdb_142dbe080();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

