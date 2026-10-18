// VA 0x1402c1630, PDB extent 380 bytes
// ron::de::impl$8::variant_seed<core::marker::PhantomData<country_core::render::render_config::_::impl$0::deserialize::__Field> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$8::variant_seed<core::marker::PhantomData<country_core::render::render_config::_::impl$0::deserialize::__Field>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 380 */

char * pdb_1402c1630(char *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_60;
  char cStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined6 uStack_2e;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined6 uStack_1e;
  
  pdb_140dd4ac0(&uStack_a8,param_2 + 4);
  if ((char)uStack_a8 == '2') {
    if (*param_2 == 1) {
      if (*(longlong *)(param_2 + 2) == 0) {
        *param_1 = '0';
        return param_1;
      }
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
    }
    pdb_140dcce90(&uStack_a8,param_2 + 4);
    if ((char)uStack_a8 == '2') {
      *(undefined8 *)(param_2 + 0x16) = uStack_a0;
      *(undefined8 *)(param_2 + 0x18) = uStack_98;
      pdb_140143360(&cStack_60);
      if (cStack_60 == '2') {
        if (*param_2 == 1) {
          lVar1 = -1;
          if (*(longlong *)(param_2 + 2) + 1 != 0) {
            lVar1 = *(longlong *)(param_2 + 2) + 1;
          }
          *(longlong *)(param_2 + 2) = lVar1;
        }
        param_1[8] = cStack_5f;
        *(int **)(param_1 + 0x10) = param_2;
        *param_1 = '2';
        return param_1;
      }
    }
    else {
      cStack_5f = (char)((uint)uStack_a8 >> 8);
      uStack_5e = (undefined2)((uint)uStack_a8 >> 0x10);
      uStack_5c = uStack_a4;
      uStack_48 = (undefined2)uStack_90;
      uStack_46 = (undefined6)((ulonglong)uStack_90 >> 0x10);
      uStack_40 = (undefined2)uStack_88;
      uStack_3e = (undefined6)((ulonglong)uStack_88 >> 0x10);
      uStack_38 = (undefined2)uStack_80;
      uStack_36 = (undefined6)((ulonglong)uStack_80 >> 0x10);
      uStack_30 = (undefined2)uStack_78;
      uStack_2e = (undefined6)((ulonglong)uStack_78 >> 0x10);
      uStack_28 = (undefined2)uStack_70;
      uStack_26 = (undefined6)((ulonglong)uStack_70 >> 0x10);
      uStack_20 = (undefined2)uStack_68;
      uStack_1e = (undefined6)((ulonglong)uStack_68 >> 0x10);
      uStack_58 = (undefined2)uStack_a0;
      uStack_56 = (undefined6)((ulonglong)uStack_a0 >> 0x10);
      uStack_50 = (undefined2)uStack_98;
      uStack_4e = (undefined6)((ulonglong)uStack_98 >> 0x10);
      cStack_60 = (char)uStack_a8;
    }
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_1e,uStack_20);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_28,uStack_2e);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_20,uStack_26);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_38,uStack_3e);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_30,uStack_36);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_48,uStack_4e);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_40,uStack_46);
    *(ulonglong *)(param_1 + 2) = CONCAT26(uStack_58,CONCAT42(uStack_5c,uStack_5e));
    *(ulonglong *)(param_1 + 10) = CONCAT26(uStack_50,uStack_56);
    *param_1 = cStack_60;
    param_1[1] = cStack_5f;
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = uStack_68;
    *(undefined8 *)(param_1 + 0x30) = uStack_78;
    *(undefined8 *)(param_1 + 0x38) = uStack_70;
    *(undefined8 *)(param_1 + 0x20) = uStack_88;
    *(undefined8 *)(param_1 + 0x28) = uStack_80;
    *(undefined8 *)(param_1 + 0x10) = uStack_98;
    *(undefined8 *)(param_1 + 0x18) = uStack_90;
    *(ulonglong *)param_1 = CONCAT44(uStack_a4,uStack_a8);
    *(undefined8 *)(param_1 + 8) = uStack_a0;
  }
  return param_1;
}

