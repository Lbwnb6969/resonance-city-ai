// VA 0x142616010, PDB extent 735 bytes
// tg_mods::legacy_texture::parse_legacy_texture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/legacy_texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::legacy_texture::parse_legacy_texture
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/legacy_texture.rs
   Extent: 735 */

ulonglong * pdb_142616010(ulonglong *param_1,int *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined *puVar10;
  ulonglong uVar11;
  ulonglong *puStack_108;
  code *pcStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong auStack_d8 [3];
  ulonglong uStack_c0;
  longlong lStack_b8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_7c;
  int iStack_78;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (param_3 < 0x24) {
    puStack_108 = auStack_d8;
    pcStack_100 = pdb_140f72a40;
    auStack_d8[0] = param_3;
    pdb_142615f80(&ppuStack_b0,&puStack_108);
    uVar8 = pdb_142dfed60(&ppuStack_b0);
  }
  else {
    iStack_78 = *param_2;
    if (iStack_78 == 0x48502183) {
      iStack_7c = param_2[1];
      if (iStack_7c == 8) {
        lStack_b8 = (longlong)*(int *)((longlong)param_2 + (param_3 - 0x1c));
        uVar4 = *(uint *)((longlong)param_2 + (param_3 - 0x18));
        uVar8 = (ulonglong)uVar4;
        uVar11 = lStack_b8 + (param_3 - 0x1c);
        uStack_c0 = uVar8;
        if ((((longlong)uVar11 < 0) || (uVar11 < 8)) || (param_3 - 0x1c < uVar11 + uVar8)) {
          ppuStack_b0 = (undefined8 **)&lStack_b8;
          pcStack_a8 = pdb_140f72bc0;
          uStack_a0 = &uStack_c0;
          uStack_98 = pdb_140f72a40;
          pdb_140f60760(auStack_d8,&UNK_143633b68,&ppuStack_b0);
          uStack_71 = 1;
          pdb_140f3f5b0(&ppuStack_b0);
          uStack_e8 = uStack_90;
          uStack_e4 = uStack_8c;
          uStack_e0 = uStack_88;
          uStack_dc = uStack_84;
          uStack_f8 = (undefined4)uStack_a0;
          uStack_f4 = uStack_a0._4_4_;
          uStack_f0 = (undefined4)uStack_98;
          uStack_ec = uStack_98._4_4_;
          puStack_108 = (ulonglong *)ppuStack_b0;
          pcStack_100 = pcStack_a8;
          uStack_71 = 0;
          uVar8 = pdb_142dfefe0(auStack_d8,&puStack_108);
          goto LAB_142616172;
        }
        bVar3 = *(byte *)((longlong)param_2 + (param_3 - 3));
        if (bVar3 < 5) {
          uVar2 = *(ulonglong *)((longlong)param_2 + (param_3 - 0x14));
          uVar5 = *(undefined4 *)((longlong)param_2 + (param_3 - 0xc));
          uVar1 = *(undefined4 *)((longlong)param_2 + (param_3 - 8));
          uStack_72 = *(undefined1 *)((longlong)param_2 + (param_3 - 4));
          if (uVar4 == 0) {
            pbVar7 = (byte *)0x1;
          }
          else {
            pdb_14007ee60();
            pbVar7 = pub_1406abab0(uVar8,1);
            if (pbVar7 == (byte *)0x0) {
              pdb_142dc7e2a(1,uVar8);
              pcVar6 = (code *)swi(3);
              puVar9 = (ulonglong *)(*pcVar6)();
              return puVar9;
            }
            pub_142e32760(pbVar7,(longlong)param_2 + uVar11,uVar8);
          }
          *param_1 = uVar8;
          param_1[1] = (ulonglong)pbVar7;
          param_1[2] = uVar8;
          param_1[3] = uVar2;
          *(undefined4 *)(param_1 + 4) = uVar5;
          *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
          *(byte *)(param_1 + 5) = bVar3;
          *(undefined1 *)((longlong)param_1 + 0x29) = uStack_72;
          return param_1;
        }
        puStack_108 = (ulonglong *)CONCAT71(puStack_108._1_7_,bVar3);
        ppuStack_b0 = &puStack_108;
        pcStack_a8 = pdb_140f6e8f0;
        puVar10 = &UNK_14355605c;
      }
      else {
        ppuStack_b0 = (undefined8 **)&iStack_7c;
        pcStack_a8 = pdb_140f71a50;
        uStack_a0 = (ulonglong *)&UNK_143556074;
        uStack_98 = pdb_140f71a50;
        puVar10 = &UNK_143556078;
      }
    }
    else {
      ppuStack_b0 = (undefined8 **)&iStack_78;
      pcStack_a8 = pdb_140f73bd0;
      uStack_a0 = (ulonglong *)&UNK_1435560a4;
      uStack_98 = pdb_140f73bd0;
      puVar10 = &UNK_1435560a8;
    }
    uVar8 = pdb_142e1f7d0(puVar10,&ppuStack_b0);
  }
LAB_142616172:
  param_1[1] = uVar8;
  *param_1 = 0x8000000000000000;
  return param_1;
}

