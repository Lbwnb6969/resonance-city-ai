// VA 0x1421248e0, PDB extent 492 bytes
// system_color::style_changes::StyleScene::window_ids
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_target.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_changes::StyleScene::window_ids
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_target.rs
   Extent: 492 */

longlong * pdb_1421248e0(longlong *param_1,longlong param_2,int *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 (*pauStack_80) [16];
  undefined1 (*pauStack_78) [16];
  undefined1 *puStack_70;
  ushort uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  uint *puStack_50;
  ulonglong uStack_48;
  uint *puStack_40;
  longlong lStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (*param_3 == 3) {
    lVar4 = pdb_140c3e440(*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_3 + 2));
    if (lVar4 != 0) {
      pauStack_80 = *(undefined1 (**) [16])(lVar4 + 0x30);
      puStack_70 = *pauStack_80 + *(longlong *)(lVar4 + 0x38) + 1;
      auVar1 = *pauStack_80;
      uStack_68 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
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
      pauStack_78 = pauStack_80 + 1;
      uStack_60 = *(undefined8 *)(lVar4 + 0x48);
      pdb_1420f3690(&lStack_58,&pauStack_80);
      if (!SBORROW8(0,lStack_58)) {
        if (1 < uStack_48) {
          if (uStack_48 < 0x15) {
            puVar3 = puStack_50 + 1;
            lVar4 = 4;
            do {
              uVar7 = puVar3[-1];
              uVar2 = *puVar3;
              lVar6 = lVar4;
              if (uVar2 < uVar7) {
                do {
                  *(uint *)((longlong)puStack_50 + lVar6) = uVar7;
                  puVar5 = puStack_50;
                  if (lVar6 == 4) goto LAB_142124a1e;
                  uVar7 = *(uint *)((longlong)puStack_50 + lVar6 + -8);
                  lVar6 = lVar6 + -4;
                } while (uVar2 < uVar7);
                puVar5 = (uint *)(lVar6 + (longlong)puStack_50);
LAB_142124a1e:
                *puVar5 = uVar2;
              }
              puVar3 = puVar3 + 1;
              lVar4 = lVar4 + 4;
            } while (puVar3 != puStack_50 + uStack_48);
          }
          else {
            lStack_38 = lStack_58;
            puStack_40 = puStack_50;
            pdb_1428b08f0(puStack_50,uStack_48,&uStack_29);
            puStack_50 = puStack_40;
            lStack_58 = lStack_38;
          }
        }
        goto LAB_1421249de;
      }
    }
  }
  else if (*param_3 == 2) {
    uVar2 = param_3[1];
    puVar3 = (uint *)pdb_140c40010(*(undefined8 *)(param_2 + 0xc0),uVar2);
    if (((puVar3 != (uint *)0x0) && (*puVar3 < 3)) && ((char)puVar3[0x16] == '\0')) {
      pdb_14007ee60();
      puStack_50 = (uint *)pub_1406abab0(4,4);
      if (puStack_50 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,4);
      }
      *puStack_50 = uVar2;
      uStack_48 = 1;
      lStack_58 = 1;
      goto LAB_1421249de;
    }
  }
  uStack_48 = 0;
  lStack_58 = 0;
  puStack_50 = (uint *)0x4;
LAB_1421249de:
  *param_1 = lStack_58;
  param_1[1] = (longlong)puStack_50;
  param_1[2] = uStack_48;
  return param_1;
}

