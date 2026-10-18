// VA 0x1428cac30, PDB extent 2056 bytes
// system_color::set_wall_color_id::init_color_ids_buffer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_wall_color_id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::set_wall_color_id::init_color_ids_buffer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_wall_color_id.rs
   Extent: 2056 */

void pdb_1428cac30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong lStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar1 = *param_2;
  uVar4 = *param_1;
  uVar2 = pdb_140a92040(uVar4);
  pdb_1410bd2e0(&lStack_78,0x1000);
  pbStack_38 = pbStack_70;
  uVar2 = pdb_1428d7ef0(uVar2,pbStack_70,lStack_68 << 2);
  uStack_40 = uVar2;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(8,8);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(undefined8 *)pbVar3 = uVar2;
  pdb_142161110(uVar1,pbVar3,&UNK_1434648b8);
  if (lStack_78 != 0) {
    pub_1406abac0(pbStack_38,lStack_78 << 2,4);
  }
  uVar2 = pdb_140a92040(uVar4);
  pdb_1410bd2e0(&lStack_78,0x1000);
  pbStack_38 = pbStack_70;
  uVar2 = pdb_1428d7b50(uVar2,pbStack_70,lStack_68 << 2);
  uStack_40 = uVar2;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(8,8);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(undefined8 *)pbVar3 = uVar2;
  pdb_1421612b0(uVar1,pbVar3,&UNK_143464928);
  if (lStack_78 != 0) {
    pub_1406abac0(pbStack_38,lStack_78 << 2,4);
  }
  pdb_1409cf760(&lStack_78);
  pdb_1428d50c0(param_3,&lStack_78,&UNK_1435af308);
  uVar2 = pdb_140a92040(uVar4);
  pdb_1410bd2e0(&lStack_78,0x1000);
  pbStack_38 = pbStack_70;
  uVar2 = pdb_1428d7410(uVar2,pbStack_70,lStack_68 << 2);
  uStack_40 = uVar2;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(8,8);
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(undefined8 *)pbVar3 = uVar2;
  pdb_1421608f0(uVar1,pbVar3,&UNK_1434648f0);
  if (lStack_78 != 0) {
    pub_1406abac0(pbStack_38,lStack_78 << 2,4);
  }
  pdb_1409cf760(&lStack_78);
  pdb_1428d4f50(param_3,&lStack_78,&UNK_1435af320);
  uVar2 = pdb_140a92040(uVar4);
  pdb_1410bd2e0(&lStack_78,0x1000);
  pbStack_38 = pbStack_70;
  uVar2 = pdb_1428d77b0(uVar2,pbStack_70,lStack_68 << 2);
  uStack_40 = uVar2;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(8,8);
  if (pbVar3 != (byte *)0x0) {
    *(undefined8 *)pbVar3 = uVar2;
    pdb_142160a90(uVar1,pbVar3,&UNK_143464880);
    if (lStack_78 != 0) {
      pub_1406abac0(pbStack_38,lStack_78 << 2,4);
    }
    pdb_1409cf760(&lStack_78);
    pdb_1428d4c70(param_3,&lStack_78,&UNK_1435af338);
    uVar2 = pdb_140a92040(uVar4);
    pdb_1410bd2e0(&lStack_78,0x1000);
    pbStack_38 = pbStack_70;
    uVar2 = pdb_1428d7d20(uVar2,pbStack_70,lStack_68 << 2);
    uStack_40 = uVar2;
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(8,8);
    if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    *(undefined8 *)pbVar3 = uVar2;
    pdb_142160c30(uVar1,pbVar3,&UNK_143464848);
    if (lStack_78 != 0) {
      pub_1406abac0(pbStack_38,lStack_78 << 2,4);
    }
    pdb_1409cf760(&lStack_78);
    pdb_1428d4de0(param_3,&lStack_78,&UNK_1435af350);
    uVar2 = pdb_140a92040(uVar4);
    pdb_1410bd570(&lStack_78,0x1000);
    pbStack_38 = pbStack_70;
    uVar2 = pdb_1428d7980(uVar2,pbStack_70,lStack_68 << 2);
    uStack_40 = uVar2;
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(8,8);
    if (pbVar3 != (byte *)0x0) {
      *(undefined8 *)pbVar3 = uVar2;
      pdb_142160f70(uVar1,pbVar3,&UNK_143464960);
      if (lStack_78 != 0) {
        pub_1406abac0(pbStack_38,lStack_78 << 2,4);
      }
      pdb_1409cf930(&lStack_78);
      pdb_1428d4b00(param_3,&lStack_78,&UNK_1435af368);
      uVar4 = pdb_140a92040(uVar4);
      pdb_1410bd430(&lStack_78,0x1000);
      pbStack_38 = pbStack_70;
      uVar4 = pdb_1428d75e0(uVar4,pbStack_70,lStack_68 << 2);
      uStack_40 = uVar4;
      pdb_14007ee60();
      pbVar3 = pub_1406abab0(8,8);
      if (pbVar3 != (byte *)0x0) {
        *(undefined8 *)pbVar3 = uVar4;
        pdb_142160dd0(uVar1,pbVar3,&UNK_143464810);
        if (lStack_78 != 0) {
          pub_1406abac0(pbStack_38,lStack_78 << 2,4);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

