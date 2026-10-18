// VA 0x141184320, PDB extent 666 bytes
// toolbar::mei::config::impl$0::deserialize::impl$0::visit_seq<ron::de::CommaSeparated>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::config::impl$0::deserialize::impl$0::visit_seq<ron::de::CommaSeparated>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 666 */

undefined8 * pdb_141184320(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_142310c10(&iStack_c8);
  if (iStack_c8 == 1) {
    param_1[8] = CONCAT44(uStack_84,uStack_88);
    param_1[9] = CONCAT44(uStack_7c,uStack_80);
    param_1[6] = CONCAT44(uStack_94,uStack_98);
    param_1[7] = CONCAT44(uStack_8c,uStack_90);
    param_1[4] = uStack_a8;
    param_1[5] = uStack_a0;
    param_1[2] = CONCAT44(uStack_b4,uStack_b8);
    param_1[3] = lStack_b0;
    param_1[1] = CONCAT44(uStack_bc,uStack_c0);
  }
  else {
    if (!SBORROW8(0,CONCAT44(uStack_bc,uStack_c0))) {
      uStack_38 = CONCAT44(uStack_7c,uStack_80);
      uStack_78 = uStack_c0;
      uStack_74 = uStack_bc;
      uStack_70 = CONCAT44(uStack_b4,uStack_b8);
      lStack_68 = lStack_b0;
      uStack_60 = uStack_a8;
      uStack_58 = uStack_a0;
      uStack_50 = CONCAT44(uStack_94,uStack_98);
      uStack_48 = CONCAT44(uStack_8c,uStack_90);
      uStack_40 = CONCAT44(uStack_84,uStack_88);
      pdb_142310a20(&iStack_c8,param_2);
      if ((char)iStack_c8 == '2') {
        lVar2 = CONCAT44(uStack_bc,uStack_c0);
        if (SBORROW8(0,lVar2)) {
          lStack_b0 = 0;
        }
        uVar1 = CONCAT44(uStack_b4,uStack_b8);
        if (SBORROW8(0,lVar2)) {
          lVar2 = 0;
          uVar1 = 8;
        }
        param_1[8] = uStack_38;
        param_1[6] = uStack_48;
        param_1[7] = uStack_40;
        param_1[4] = uStack_58;
        param_1[5] = uStack_50;
        param_1[2] = lStack_68;
        param_1[3] = uStack_60;
        *param_1 = CONCAT44(uStack_74,uStack_78);
        param_1[1] = uStack_70;
        param_1[9] = lVar2;
        param_1[10] = uVar1;
        param_1[0xb] = lStack_b0;
        return param_1;
      }
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_c4;
      *(uint *)((longlong)param_1 + 9) = CONCAT13((undefined1)uStack_c4,iStack_c8._1_3_);
      param_1[5] = uStack_a8;
      param_1[6] = uStack_a0;
      *(undefined4 *)(param_1 + 7) = uStack_98;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_94;
      *(undefined4 *)(param_1 + 8) = uStack_90;
      *(undefined4 *)((longlong)param_1 + 0x44) = uStack_8c;
      param_1[9] = CONCAT44(uStack_84,uStack_88);
      *(char *)(param_1 + 1) = (char)iStack_c8;
      *(undefined4 *)(param_1 + 2) = uStack_c0;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_bc;
      *(undefined4 *)(param_1 + 3) = uStack_b8;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_b4;
      param_1[4] = lStack_b0;
      *param_1 = 0x8000000000000001;
      pdb_14117d570(&uStack_78);
      return param_1;
    }
    pdb_142d862b0(&uStack_70,&UNK_14329e69c,0x15);
    param_1[9] = uStack_30;
    param_1[7] = uStack_40;
    param_1[8] = uStack_38;
    param_1[5] = uStack_50;
    param_1[6] = uStack_48;
    param_1[3] = uStack_60;
    param_1[4] = uStack_58;
    param_1[1] = uStack_70;
    param_1[2] = lStack_68;
  }
  *param_1 = 0x8000000000000001;
  return param_1;
}

