// VA 0x1410bd870, PDB extent 427 bytes
// system_color::wall_color_slots::write_color_slot<country_core::resources::color_id::HalftimberColorIdSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_color::wall_color_slots::write_color_slot<country_core::resources::color_id::HalftimberColorIdSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
   Extent: 427 */

void pdb_1410bd870(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)pdb_142163210(param_2,&UNK_1434649b0);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = (**(code **)(puVar2[1] + 0x18))(*puVar2);
    if (lVar3 != 0) {
      uVar4 = pdb_140a92040(param_1);
      uVar1 = pdb_1409012c0(param_3);
      uStack_34 = param_4;
      lVar5 = pdb_140e17350(lVar3);
      if ((ulonglong)*(uint *)(lVar5 + 0x10) < (ulonglong)uVar1 * 4 + 4) {
        lStack_88 = 0xb;
      }
      else {
        uStack_98 = 0;
        uStack_90 = 4;
        pdb_140e55470(&lStack_88,uVar4,lVar3,&uStack_34,4,&uStack_98,1,(ulonglong)uVar1 << 2);
        if (lStack_88 == 0xb) {
          return;
        }
        uStack_a8 = uStack_40;
        uStack_e8 = CONCAT44(uStack_7c,uStack_80);
        uStack_e0 = CONCAT44(uStack_74,uStack_78);
        uStack_d8 = CONCAT44(uStack_6c,uStack_70);
        uStack_d0 = CONCAT44(uStack_64,uStack_68);
        uStack_c8 = CONCAT44(uStack_5c,uStack_60);
        uStack_c0 = CONCAT44(uStack_54,uStack_58);
        uStack_b8 = CONCAT44(uStack_4c,uStack_50);
        uStack_b0 = CONCAT44(uStack_44,uStack_48);
      }
      uStack_80 = (undefined4)uStack_e8;
      uStack_7c = uStack_e8._4_4_;
      uStack_78 = (undefined4)uStack_e0;
      uStack_74 = uStack_e0._4_4_;
      uStack_70 = (undefined4)uStack_d8;
      uStack_6c = uStack_d8._4_4_;
      uStack_68 = (undefined4)uStack_d0;
      uStack_64 = uStack_d0._4_4_;
      uStack_60 = (undefined4)uStack_c8;
      uStack_5c = uStack_c8._4_4_;
      uStack_58 = (undefined4)uStack_c0;
      uStack_54 = uStack_c0._4_4_;
      uStack_50 = (undefined4)uStack_b8;
      uStack_4c = uStack_b8._4_4_;
      uStack_48 = (undefined4)uStack_b0;
      uStack_44 = uStack_b0._4_4_;
      uStack_40 = uStack_a8;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143287de0,0x2b,&lStack_88,&UNK_143287dc0,&UNK_143287d00);
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143287ce8);
}

