// VA 0x1403bcd40, PDB extent 775 bytes
// serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<slice2$<country_core::resources::history::ResolvedHistoryChainSnapshot> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<slice2$<country_core::resources::history::ResolvedHistoryChainSnapshot>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 775 */

undefined1 * pdb_1403bcd40(undefined1 *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *pbStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140ddc8f0(&uStack_a8,1);
  if (SBORROW8(0,CONCAT44(uStack_a4,uStack_a8))) {
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_9c,uStack_a0);
    *param_1 = 6;
  }
  else {
    lStack_58 = CONCAT44(uStack_94,uStack_98);
    uStack_68 = uStack_a8;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    if (param_3 != 0) {
      param_3 = param_3 << 4;
      do {
        uStack_f8 = 0x8000000000000000;
        uStack_e0 = 0;
        uStack_d0 = 0;
        uStack_49 = 1;
        lVar3 = pdb_1403bd930(&uStack_f8,&UNK_142f504f9,0xb,param_2 + 8);
        if (lVar3 != 0) {
LAB_1403bcee0:
          pdb_1403dd920(&uStack_f8);
LAB_1403bcef0:
          *(longlong *)(param_1 + 8) = lVar3;
          *param_1 = 6;
          pbStack_70 = (byte *)CONCAT44(uStack_5c,uStack_60);
          pdb_1404be800(pbStack_70,lStack_58);
          if (CONCAT44(uStack_64,uStack_68) == 0) {
            return param_1;
          }
          pub_1406abac0(pbStack_70,CONCAT44(uStack_64,uStack_68) << 5,8);
          return param_1;
        }
        uStack_49 = 1;
        lVar3 = pdb_1403be890(&uStack_f8,&UNK_142f50504,0xb,param_2);
        if (lVar3 != 0) goto LAB_1403bcee0;
        uStack_88 = uStack_d8;
        uStack_84 = uStack_d4;
        uStack_80 = (undefined4)uStack_d0;
        uStack_7c = uStack_d0._4_4_;
        uStack_98 = uStack_e8;
        uStack_94 = uStack_e4;
        uStack_90 = (undefined4)uStack_e0;
        uStack_8c = uStack_e0._4_4_;
        uStack_a8 = (undefined4)uStack_f8;
        uStack_a4 = uStack_f8._4_4_;
        uStack_a0 = uStack_f0;
        uStack_9c = uStack_ec;
        uStack_49 = 0;
        pdb_140ddcdc0(&uStack_c8,&uStack_a8);
        lVar3 = lStack_58;
        if ((char)uStack_c8 == '\x06') {
          lVar3 = CONCAT44(uStack_bc,uStack_c0);
          goto LAB_1403bcef0;
        }
        if (lStack_58 == CONCAT44(uStack_64,uStack_68)) {
          pdb_142db0ce0(&uStack_68);
        }
        param_2 = param_2 + 0x10;
        lVar4 = lVar3 * 0x20;
        puVar2 = (undefined8 *)(CONCAT44(uStack_5c,uStack_60) + 0x10 + lVar4);
        *puVar2 = uStack_b8;
        puVar2[1] = uStack_b0;
        puVar1 = (undefined4 *)(CONCAT44(uStack_5c,uStack_60) + lVar4);
        *puVar1 = uStack_c8;
        puVar1[1] = uStack_c4;
        puVar1[2] = uStack_c0;
        puVar1[3] = uStack_bc;
        lStack_58 = lVar3 + 1;
        param_3 = param_3 + -0x10;
      } while (param_3 != 0);
    }
    uStack_a4._3_1_ = (undefined1)uStack_68;
    uStack_a0 = (undefined4)(CONCAT44(uStack_64,uStack_68) >> 8);
    uStack_9c._3_1_ = (undefined1)uStack_60;
    uStack_98 = (undefined4)(CONCAT44(uStack_5c,uStack_60) >> 8);
    uStack_94._0_3_ = (undefined3)((uint)uStack_5c >> 8);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_a4,uStack_a8);
    *(ulonglong *)(param_1 + 9) =
         CONCAT44(CONCAT13(uStack_9c._3_1_,(int3)((uint)uStack_64 >> 8)),uStack_a0);
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT35((undefined3)uStack_94,CONCAT41(uStack_98,uStack_9c._3_1_));
    *(longlong *)(param_1 + 0x18) = lStack_58;
  }
  return param_1;
}

