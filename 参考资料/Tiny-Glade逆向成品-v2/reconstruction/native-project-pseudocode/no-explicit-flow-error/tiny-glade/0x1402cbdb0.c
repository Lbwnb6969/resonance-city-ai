// VA 0x1402cbdb0, PDB extent 571 bytes
// ron::de::impl$2::deserialize_seq<serde_core::de::impls::impl$19::deserialize::VecVisitor<enum2$<rhapsody::raw::init::GraphicsLayerAllowlistItem> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_seq<serde_core::de::impls::impl$19::deserialize::VecVisitor<enum2$<rhapsody::raw::init::GraphicsLayerAllowlistItem>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 571 */

char * pdb_1402cbdb0(char *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  byte *arg0;
  byte *pbVar4;
  char cStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int *piStack_78;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  *(char *)(param_2 + 0x1a) = '\0';
  piVar1 = param_2 + 4;
  cVar2 = pdb_140dce020(piVar1,0x5b);
  if (cVar2 == '\0') {
    *param_1 = '\x04';
  }
  else {
    if ((char)*param_2 != '\0') {
      if (*(longlong *)(param_2 + 2) == 0) {
        *param_1 = '0';
        return param_1;
      }
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
    }
    uStack_70 = 0x104;
    uStack_6e = 0;
    piStack_78 = param_2;
    pdb_1403caee0(&cStack_c0,&piStack_78);
    if (cStack_c0 == '2') {
      lStack_58 = lStack_a8;
      if (*param_2 == 1) {
        lVar3 = -1;
        if (*(longlong *)(param_2 + 2) + 1 != 0) {
          lVar3 = *(longlong *)(param_2 + 2) + 1;
        }
        *(longlong *)(param_2 + 2) = lVar3;
      }
      lStack_38 = lStack_a8;
      uStack_68._0_4_ = (undefined4)CONCAT71(uStack_b7,uStack_b8);
      uStack_68._4_4_ = (undefined4)((uint7)uStack_b7 >> 0x18);
      uStack_60._0_4_ = (undefined4)CONCAT71(uStack_af,uStack_b0);
      uStack_60._4_4_ = (undefined4)((uint7)uStack_af >> 0x18);
      uStack_48 = (undefined4)uStack_68;
      uStack_44 = uStack_68._4_4_;
      uStack_40 = (undefined4)uStack_60;
      uStack_3c = uStack_60._4_4_;
      uStack_68 = CONCAT71(uStack_b7,uStack_b8);
      uStack_60 = CONCAT71(uStack_af,uStack_b0);
      pdb_140dd4ac0(&cStack_c0,piVar1);
      if (cStack_c0 == '2') {
        cVar2 = pdb_140dce020(piVar1,0x5d);
        if (cVar2 != '\0') {
          *(longlong *)(param_1 + 0x18) = lStack_58;
          *(undefined8 *)(param_1 + 8) = uStack_68;
          *(undefined8 *)(param_1 + 0x10) = uStack_60;
          *param_1 = '2';
          return param_1;
        }
        *param_1 = '\x05';
        arg0 = (byte *)CONCAT44(uStack_3c,uStack_40);
        if (lStack_38 != 0) {
          pbVar4 = arg0 + 0x10;
          lVar3 = lStack_38;
          do {
            if (*(ulonglong *)(pbVar4 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar4,*(ulonglong *)(pbVar4 + -8),1);
            }
            pbVar4 = pbVar4 + 0x20;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x40) = uStack_80;
        *(undefined8 *)(param_1 + 0x30) = uStack_90;
        *(undefined8 *)(param_1 + 0x38) = uStack_88;
        *(undefined8 *)(param_1 + 0x20) = uStack_a0;
        *(undefined8 *)(param_1 + 0x28) = uStack_98;
        *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_af,uStack_b0);
        *(longlong *)(param_1 + 0x18) = lStack_a8;
        *(ulonglong *)param_1 = CONCAT71(uStack_bf,cStack_c0);
        *(ulonglong *)(param_1 + 8) = CONCAT71(uStack_b7,uStack_b8);
        arg0 = (byte *)CONCAT44(uStack_3c,uStack_40);
        if (lStack_38 != 0) {
          pbVar4 = arg0 + 0x10;
          lVar3 = lStack_38;
          do {
            if (*(ulonglong *)(pbVar4 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar4,*(ulonglong *)(pbVar4 + -8),1);
            }
            pbVar4 = pbVar4 + 0x20;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
      }
      if (CONCAT44(uStack_44,uStack_48) != 0) {
        pub_1406abac0(arg0,CONCAT44(uStack_44,uStack_48) << 5,8);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = uStack_80;
      *(undefined8 *)(param_1 + 0x30) = uStack_90;
      *(undefined8 *)(param_1 + 0x38) = uStack_88;
      *(undefined8 *)(param_1 + 0x20) = uStack_a0;
      *(undefined8 *)(param_1 + 0x28) = uStack_98;
      *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_af,uStack_b0);
      *(longlong *)(param_1 + 0x18) = lStack_a8;
      *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_b8,uStack_bf);
      *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_b0,uStack_b7);
      *param_1 = cStack_c0;
    }
  }
  return param_1;
}

