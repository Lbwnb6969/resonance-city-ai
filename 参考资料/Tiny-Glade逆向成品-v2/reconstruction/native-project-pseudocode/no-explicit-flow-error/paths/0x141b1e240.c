// VA 0x141b1e240, PDB extent 720 bytes
// paths::impl$0::tail
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: paths::impl$0::tail
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
   Extent: 720 */

undefined8 *
pdb_141b1e240(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong lStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (param_4 != 0) {
    uVar2 = param_4 << 4;
    if (uVar2 < 0x7ffffffffffffff9 && param_4 >> 0x3c == 0) {
      puStack_78 = param_1;
      pdb_14007ee60();
      param_1 = (undefined8 *)0x8;
      uStack_68 = pub_1406abab0(uVar2,8);
      if (uStack_68 != (byte *)0x0) {
        lStack_60 = 0;
        uStack_58 = 0;
        uStack_49 = 1;
        uStack_70 = param_4;
        pdb_140f3ddd0(&uStack_b8,param_2,param_3);
        uStack_c8 = uStack_88;
        uStack_c0 = uStack_80;
        uStack_d8 = uStack_98;
        uStack_d0 = uStack_90;
        lStack_e8 = lStack_a8;
        uStack_e0 = uStack_a0;
        uStack_f8 = uStack_b8;
        uStack_f4 = uStack_b4;
        uStack_f0 = uStack_b0;
        uStack_ec = uStack_ac;
        do {
          uStack_49 = 1;
          pdb_140f5bb30(&uStack_b8,&uStack_f8);
          if ((ulonglong)(byte)uStack_b8 == 10) {
            lStack_e8 = lStack_60;
            uStack_e0 = uStack_58;
            uStack_f8 = (undefined4)uStack_70;
            uStack_f4 = uStack_70._4_4_;
            uStack_f0 = (undefined4)uStack_68;
            uStack_ec = uStack_68._4_4_;
            uStack_49 = 0;
            pdb_142616390(puStack_78,&uStack_f8);
            return puStack_78;
          }
          lVar4 = (ulonglong)(byte)uStack_b8 - 5;
          if ((byte)uStack_b8 < 6) {
            lVar4 = 0;
          }
          puVar3 = &UNK_14339123c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((byte)uStack_b8) {
          case 7:
            lVar4 = 1;
            puVar3 = &UNK_14339123d;
          case 6:
            break;
          case 8:
            puVar3 = &UNK_14339123e;
            lVar4 = 2;
            break;
          default:
            puVar3 = (undefined *)CONCAT44(uStack_ac,uStack_b0);
            lVar4 = lStack_a8;
          }
          if (uStack_58 == param_4) {
            uVar2 = 0;
            if (uStack_70 <= lStack_60 + 1U) {
              uVar2 = uStack_70;
            }
            lStack_60 = (lStack_60 - uVar2) + 1;
            uStack_58 = param_4 - 1;
          }
          if (uStack_58 == uStack_70) {
            uStack_49 = 1;
            pdb_1426162f0(&uStack_70);
          }
          uVar2 = 0;
          if (uStack_70 <= uStack_58 + lStack_60) {
            uVar2 = uStack_70;
          }
          lVar1 = ((uStack_58 + lStack_60) - uVar2) * 0x10;
          *(undefined **)(uStack_68 + lVar1) = puVar3;
          *(longlong *)(uStack_68 + lVar1 + 8) = lVar4;
          uStack_58 = uStack_58 + 1;
        } while( true );
      }
    }
    else {
      param_1 = (undefined8 *)0x0;
    }
    pdb_142dc7e2a(param_1,uVar2);
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}

