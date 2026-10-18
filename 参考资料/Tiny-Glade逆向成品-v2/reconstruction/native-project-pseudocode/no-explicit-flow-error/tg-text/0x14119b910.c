// VA 0x14119b910, PDB extent 807 bytes
// tg_text::TextRenderer::consume<toolbar::text::flush_text_render::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tg_text::TextRenderer::consume<toolbar::text::flush_text_render::closure_env$0>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 807 */

void pdb_14119b910(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_1 + 0x418);
  lVar6 = *(longlong *)(param_1 + 0x420);
  *(longlong *)(param_1 + 0x440) = lVar6;
  uVar2 = *(undefined8 *)(param_1 + 0x430);
  lVar3 = *(longlong *)(param_1 + 0x438);
  uVar7 = *param_3;
  puVar4 = (undefined8 *)param_3[1];
  uVar5 = pdb_140a92040(*puVar4);
  if (lVar6 != 0) {
    uVar8 = lVar6 * 0x30;
    lVar6 = pdb_140e17350(uVar7);
    if (*(uint *)(lVar6 + 0x10) < uVar8) {
      lStack_98 = 0xb;
LAB_14119bad2:
      uStack_90 = (undefined4)uStack_f8;
      uStack_8c = uStack_f8._4_4_;
      uStack_88 = (undefined4)uStack_f0;
      uStack_84 = uStack_f0._4_4_;
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
      uStack_50 = uStack_b8;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14329fb98,0x2b,&lStack_98,&UNK_14329fb78,&UNK_14329fc38);
    }
    uStack_a8 = 0;
    uStack_a0 = uVar8;
    pdb_140e55470(&lStack_98,uVar5,uVar7,uVar1,uVar8,&uStack_a8,1,0);
    if (lStack_98 != 0xb) {
      uStack_b8 = uStack_50;
      uStack_f8 = CONCAT44(uStack_8c,uStack_90);
      uStack_f0 = CONCAT44(uStack_84,uStack_88);
      uStack_e8 = CONCAT44(uStack_7c,uStack_80);
      uStack_e0 = CONCAT44(uStack_74,uStack_78);
      uStack_d8 = CONCAT44(uStack_6c,uStack_70);
      uStack_d0 = CONCAT44(uStack_64,uStack_68);
      uStack_c8 = CONCAT44(uStack_5c,uStack_60);
      uStack_c0 = CONCAT44(uStack_54,uStack_58);
      goto LAB_14119bad2;
    }
  }
  uVar1 = param_3[2];
  uVar7 = pdb_140a92040(*puVar4);
  if (lVar3 != 0) {
    uVar8 = lVar3 << 2;
    lVar6 = pdb_140e17350(uVar1);
    if (*(uint *)(lVar6 + 0x10) < uVar8) {
      lStack_98 = 0xb;
    }
    else {
      uStack_a8 = 0;
      uStack_a0 = uVar8;
      pdb_140e55470(&lStack_98,uVar7,uVar1,uVar2,uVar8,&uStack_a8,1,0);
      if (lStack_98 == 0xb) goto LAB_14119ba64;
      uStack_b8 = uStack_50;
      uStack_f8 = CONCAT44(uStack_8c,uStack_90);
      uStack_f0 = CONCAT44(uStack_84,uStack_88);
      uStack_e8 = CONCAT44(uStack_7c,uStack_80);
      uStack_e0 = CONCAT44(uStack_74,uStack_78);
      uStack_d8 = CONCAT44(uStack_6c,uStack_70);
      uStack_d0 = CONCAT44(uStack_64,uStack_68);
      uStack_c8 = CONCAT44(uStack_5c,uStack_60);
      uStack_c0 = CONCAT44(uStack_54,uStack_58);
    }
    uStack_90 = (undefined4)uStack_f8;
    uStack_8c = uStack_f8._4_4_;
    uStack_88 = (undefined4)uStack_f0;
    uStack_84 = uStack_f0._4_4_;
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
    uStack_50 = uStack_b8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14329fb98,0x2b,&lStack_98,&UNK_14329fb78,&UNK_14329fc50);
  }
LAB_14119ba64:
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  pdb_140cb6c60(param_1,param_2);
  *(int *)(param_1 + 0x4b4) = *(int *)(param_1 + 0x4b4) + 1;
  return;
}

