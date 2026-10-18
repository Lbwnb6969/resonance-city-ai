// VA 0x14100bb30, PDB extent 527 bytes
// usdl_sys::backend::load_symbol<i32 (*)()>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl_sys::backend::load_symbol<i32 (*)()>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
   Extent: 527 */

longlong * pdb_14100bb30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int aiStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_14100b800(&lStack_88);
  if (lStack_88 == -0x7fffffffffffffef) {
    param_1[1] = lStack_80;
    *param_1 = -0x7fffffffffffffee;
  }
  else {
    pdb_140f64830(aiStack_50,param_3,param_4);
    if (aiStack_50[0] == 1) {
      uStack_68 = uStack_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143272cd8,0x28,&uStack_68,&UNK_143272cb8,&UNK_143272d20);
    }
    pdb_140f64a50(aiStack_50,CONCAT44(uStack_44,uStack_48),CONCAT44(uStack_3c,uStack_40));
    if (aiStack_50[0] == 1) {
      uStack_68 = uStack_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143272d38,0x2a,&uStack_68,&UNK_143272c98,&UNK_143272d68);
    }
    lVar5 = CONCAT44(uStack_44,uStack_48);
    lVar1 = CONCAT44(uStack_3c,uStack_40);
    do {
      while( true ) {
        lVar6 = lVar1;
        if (lVar6 == 0) goto LAB_14100bc75;
        lVar1 = lVar5 + lVar6;
        bVar2 = *(byte *)(lVar1 + -1);
        if (-1 < (char)bVar2) break;
        bVar3 = *(byte *)(lVar1 + -2);
        if ((char)bVar3 < -0x40) {
          bVar4 = *(byte *)(lVar1 + -3);
          if ((char)bVar4 < -0x40) {
            lVar7 = lVar1 + -4;
            uVar8 = bVar4 & 0x3f | (*(byte *)(lVar1 + -4) & 7) << 6;
          }
          else {
            lVar7 = lVar1 + -3;
            uVar8 = bVar4 & 0xf;
          }
          uVar8 = bVar3 & 0x3f | uVar8 << 6;
        }
        else {
          lVar7 = lVar1 + -2;
          uVar8 = bVar3 & 0x1f;
        }
        lVar1 = lVar7 - lVar5;
        if ((bVar2 & 0x3f) != 0 || uVar8 != 0) goto LAB_14100bc75;
      }
      lVar1 = (lVar1 + -1) - lVar5;
    } while (bVar2 == 0);
LAB_14100bc75:
    *param_1 = lStack_88;
    param_1[1] = lStack_80;
    param_1[2] = CONCAT44(uStack_74,uStack_78);
    param_1[3] = CONCAT44(uStack_6c,uStack_70);
    param_1[4] = lVar5;
    param_1[5] = lVar6;
  }
  return param_1;
}

