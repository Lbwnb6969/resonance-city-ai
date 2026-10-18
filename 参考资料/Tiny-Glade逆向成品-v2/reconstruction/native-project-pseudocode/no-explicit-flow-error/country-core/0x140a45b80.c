// VA 0x140a45b80, PDB extent 596 bytes
// country_core::asset_libraries::meshwatch::MeshWatch::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/meshwatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::asset_libraries::meshwatch::MeshWatch::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/meshwatch.rs
   Extent: 596 */

undefined8 * pdb_140a45b80(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined4 uStack_ee;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined4 uStack_e6;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined6 uStack_36;
  longlong lStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  lStack_a0 = 3;
  if ((char)param_2 != '\0') {
    param_2 = 0;
    pdb_140c28b70(&lStack_68,0,100000000);
    if (lStack_68 == 3) {
      uStack_a8 = (undefined2)uStack_60;
      uStack_a6 = (undefined2)((ulonglong)uStack_60 >> 0x10);
      uStack_a4 = uStack_60._4_4_;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303c760,0x1d,&uStack_a8,&UNK_14303d020,&UNK_14303c868);
    }
    uStack_b8 = CONCAT26(uStack_3a,CONCAT42(uStack_3e,uStack_40));
    uStack_d0 = CONCAT44(uStack_54,CONCAT22(uStack_56,uStack_58));
    uStack_c8 = CONCAT62(uStack_4e,uStack_50);
    uStack_c0 = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
    uStack_d8 = uStack_60;
    lStack_a0 = lStack_68;
  }
  uStack_a8 = 0;
  uStack_98 = uStack_d8;
  uStack_90 = (undefined4)uStack_d0;
  uStack_8c = uStack_d0._4_4_;
  uStack_88 = (undefined4)uStack_c8;
  uStack_84 = uStack_c8._4_4_;
  uStack_80 = (undefined4)uStack_c0;
  uStack_7c = uStack_c0._4_4_;
  uStack_78 = uStack_b8;
  plVar1 = (longlong *)pdb_140f3bda0();
  if ((char)plVar1[2] == '\x01') {
    lStack_30 = *plVar1;
    param_2 = plVar1[1];
  }
  else {
    lStack_30 = pdb_140f4fd10();
    *plVar1 = lStack_30;
    plVar1[1] = param_2;
    *(undefined1 *)(plVar1 + 2) = 1;
  }
  *plVar1 = lStack_30 + 1;
  uStack_e8 = (undefined2)_DAT_14303cef0;
  uStack_e6 = (undefined4)((ulonglong)_DAT_14303cef0 >> 0x10);
  uStack_e2 = (undefined2)((ulonglong)_DAT_14303cef0 >> 0x30);
  uStack_e0 = (undefined2)_UNK_14303cef8;
  uStack_f8 = (undefined2)_DAT_14303cee0;
  uStack_f6 = (undefined6)((ulonglong)_DAT_14303cee0 >> 0x10);
  uStack_f0 = (undefined2)_UNK_14303cee8;
  uStack_ee = (undefined4)((ulonglong)_UNK_14303cee8 >> 0x10);
  uStack_ea = (undefined2)((ulonglong)_UNK_14303cee8 >> 0x30);
  lStack_68 = 1;
  uStack_60 = 1;
  uStack_58 = 0;
  uStack_56 = (undefined2)uStack_fe;
  uStack_54 = (undefined4)((uint6)uStack_fe >> 0x10);
  uStack_50 = uStack_f8;
  uStack_4e = uStack_f6;
  uStack_48 = uStack_f0;
  uStack_46 = uStack_ee;
  uStack_42 = uStack_ea;
  uStack_40 = uStack_e8;
  uStack_3e = uStack_e6;
  uStack_3a = uStack_e2;
  uStack_36 = (undefined6)((ulonglong)_UNK_14303cef8 >> 0x10);
  uStack_38 = uStack_e0;
  lStack_28 = param_2;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x48,8);
  if (pbVar2 != (byte *)0x0) {
    *(longlong *)(pbVar2 + 0x40) = lStack_28;
    *(ulonglong *)(pbVar2 + 0x30) = CONCAT62(uStack_36,uStack_38);
    *(longlong *)(pbVar2 + 0x38) = lStack_30;
    *(ulonglong *)(pbVar2 + 0x20) = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
    *(ulonglong *)(pbVar2 + 0x28) = CONCAT26(uStack_3a,CONCAT42(uStack_3e,uStack_40));
    *(ulonglong *)(pbVar2 + 0x10) = CONCAT44(uStack_54,CONCAT22(uStack_56,uStack_58));
    *(ulonglong *)(pbVar2 + 0x18) = CONCAT62(uStack_4e,uStack_50);
    *(longlong *)pbVar2 = lStack_68;
    *(undefined8 *)(pbVar2 + 8) = uStack_60;
    param_1[7] = uStack_78;
    param_1[5] = CONCAT44(uStack_84,uStack_88);
    param_1[6] = CONCAT44(uStack_7c,uStack_80);
    param_1[3] = uStack_98;
    param_1[4] = CONCAT44(uStack_8c,uStack_90);
    param_1[1] = CONCAT44(uStack_a4,CONCAT22(uStack_a6,uStack_a8));
    param_1[2] = lStack_a0;
    *param_1 = pbVar2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

