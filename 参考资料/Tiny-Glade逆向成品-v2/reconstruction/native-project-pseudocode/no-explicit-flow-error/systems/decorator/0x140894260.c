// VA 0x140894260, PDB extent 735 bytes
// system_decorator::decorator_visual::decorator_clutter::mark_clutter_decorators_modified_on_pack_change
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/decorator_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::decorator_clutter::mark_clutter_decorators_modified_on_pack_change
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/decorator_clutter.rs
   Extent: 735 */

void pdb_140894260(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 (*pauVar16) [16];
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 *puStack_e8;
  ushort uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte abStack_a8 [8];
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined1 (*pauStack_80) [16];
  ushort uStack_70;
  longlong lStack_68;
  undefined1 auStack_60 [8];
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = (ulonglong *)*param_1;
  lVar14 = param_1[1];
  uVar3 = *puVar2;
  uVar11 = 0;
  uVar12 = uVar3 - *(ulonglong *)(lVar14 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar14 + 0x18)) {
    uVar12 = uVar11;
  }
  uVar10 = uVar3 - *(ulonglong *)(lVar14 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar14 + 0x38)) {
    uVar10 = uVar11;
  }
  uVar3 = *(ulonglong *)(lVar14 + 0x30);
  uVar13 = uVar3 - uVar10;
  if (uVar3 < uVar10) {
    uVar13 = uVar11;
  }
  uVar4 = *(ulonglong *)(lVar14 + 0x10);
  uVar9 = uVar4 - uVar12;
  if (uVar4 < uVar12) {
    uVar9 = uVar11;
  }
  uVar11 = *(ulonglong *)(lVar14 + 0x40);
  *puVar2 = uVar11 - (uVar9 + uVar13);
  if ((uVar4 < uVar12 || uVar4 - uVar12 == 0) && (uVar3 < uVar10 || uVar3 - uVar10 == 0)) {
    return;
  }
  *puVar2 = uVar11;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  pdb_140c41300(abStack_a8,*param_2);
  uVar15 = (uint)uStack_70;
  lStack_110 = lStack_68;
  lStack_118 = lStack_98;
  lVar14 = lStack_88;
  pauVar16 = pauStack_80;
  do {
    lStack_120 = lStack_90;
    if (lStack_118 == 2) {
LAB_140894460:
      if ((lStack_a0 != 0 & abStack_a8[0]) != 1) {
        return;
      }
      lStack_118 = 2;
      lStack_108 = 0;
      lStack_d0 = lStack_a0;
    }
    else {
      lStack_108 = lStack_a0;
      if (lVar14 == 0) {
joined_r0x000140894458:
        if (lStack_118 == 1) {
          lVar14 = 0;
          lStack_120 = 0;
          if (lStack_90 != 0) {
            lStack_118 = 1;
            lStack_120 = 0;
            lVar14 = 0;
            lStack_d0 = lStack_90;
            goto LAB_14089448a;
          }
        }
        else {
          lVar14 = 0;
        }
        goto LAB_140894460;
      }
      if (lStack_110 == 0) {
        lStack_110 = 0;
        goto joined_r0x000140894458;
      }
      if ((short)uVar15 == 0) {
        do {
          auVar1 = *pauVar16;
          lVar14 = lVar14 + -0x980;
          pauVar16 = pauVar16 + 1;
          uVar15 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar15 == 0);
      }
      uVar5 = 0;
      for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar15 = uVar15 - 1 & uVar15;
      lStack_110 = lStack_110 + -1;
      lVar7 = pdb_140c44590(lVar14 + (ulonglong)uVar5 * -0x98 + -0x98);
      if (lVar7 == 3) goto joined_r0x000140894458;
      lStack_d0 = lVar14 + (ulonglong)uVar5 * -0x98 + -0x90;
    }
LAB_14089448a:
    pauStack_f8 = *(undefined1 (**) [16])(lStack_d0 + 0x30);
    puStack_e8 = *pauStack_f8 + *(longlong *)(lStack_d0 + 0x38) + 1;
    auVar1 = *pauStack_f8;
    uStack_e0 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    uStack_d8 = *(undefined8 *)(lStack_d0 + 0x48);
    lStack_d0 = lStack_d0 + 0x60;
    pauStack_f0 = pauStack_f8 + 1;
    while (pdb_140c441a0(auStack_60,&pauStack_f8), lStack_90 = lStack_120, lStack_a0 = lStack_108,
          lStack_58 != 0) {
      uStack_b8 = uStack_48;
      lStack_c8 = lStack_58;
      uStack_c0 = uStack_50;
      piVar8 = (int *)pdb_140315970(&lStack_c8);
      if (*piVar8 == 6) {
        pdb_140c413c0(&lStack_c8);
      }
    }
  } while( true );
}

