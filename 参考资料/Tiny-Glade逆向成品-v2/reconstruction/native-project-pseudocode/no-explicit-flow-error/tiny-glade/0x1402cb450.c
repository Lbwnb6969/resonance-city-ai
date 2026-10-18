// VA 0x1402cb450, PDB extent 823 bytes
// ron::de::impl$2::deserialize_seq<serde_core::de::impls::impl$19::deserialize::VecVisitor<tiny_glade::app_config::VulkanLayerAllowlistDefaults> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_seq<serde_core::de::impls::impl$19::deserialize::VecVisitor<tiny_glade::app_config::VulkanLayerAllowlistDefaults>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 823 */

char * pdb_1402cb450(char *param_1,int *param_2)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *arg0;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int *piStack_98;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  *(char *)(param_2 + 0x1a) = '\0';
  piVar1 = param_2 + 4;
  cVar3 = pdb_140dce020(piVar1,0x5b);
  if (cVar3 == '\0') {
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
    uStack_90 = 0x104;
    uStack_8e = 0;
    piStack_98 = param_2;
    pdb_1403cb0e0(&cStack_e0,&piStack_98);
    if (cStack_e0 == '2') {
      lStack_78 = lStack_c8;
      if (*param_2 == 1) {
        lVar4 = -1;
        if (*(longlong *)(param_2 + 2) + 1 != 0) {
          lVar4 = *(longlong *)(param_2 + 2) + 1;
        }
        *(longlong *)(param_2 + 2) = lVar4;
      }
      lStack_58 = lStack_c8;
      uStack_88._0_4_ = (undefined4)CONCAT71(uStack_d7,uStack_d8);
      uStack_88._4_4_ = (undefined4)((uint7)uStack_d7 >> 0x18);
      uStack_80._0_4_ = (undefined4)CONCAT71(uStack_cf,uStack_d0);
      uStack_80._4_4_ = (undefined4)((uint7)uStack_cf >> 0x18);
      uStack_68 = (undefined4)uStack_88;
      uStack_64 = uStack_88._4_4_;
      uStack_60 = (undefined4)uStack_80;
      uStack_5c = uStack_80._4_4_;
      uStack_88 = CONCAT71(uStack_d7,uStack_d8);
      uStack_80 = CONCAT71(uStack_cf,uStack_d0);
      pdb_140dd4ac0(&cStack_e0,piVar1);
      lVar4 = lStack_58;
      pcStack_50 = param_1;
      if (cStack_e0 == '2') {
        cVar3 = pdb_140dce020(piVar1,0x5d);
        lVar4 = lStack_58;
        if (cVar3 != '\0') {
          *(longlong *)(param_1 + 0x18) = lStack_78;
          *(undefined8 *)(param_1 + 8) = uStack_88;
          *(undefined8 *)(param_1 + 0x10) = uStack_80;
          *param_1 = '2';
          return param_1;
        }
        *param_1 = '\x05';
        arg0 = (byte *)CONCAT44(uStack_5c,uStack_60);
        if (lStack_58 != 0) {
          lVar8 = 0;
          do {
            lVar6 = lVar8 * 0x20;
            pbVar2 = *(byte **)(arg0 + lVar6 + 8);
            lVar7 = *(longlong *)(arg0 + lVar6 + 0x10);
            if (lVar7 != 0) {
              pbVar5 = pbVar2 + 0x10;
              do {
                if (*(ulonglong *)(pbVar5 + -8) != 0) {
                  pub_1406abac0(*(byte **)pbVar5,*(ulonglong *)(pbVar5 + -8),1);
                }
                pbVar5 = pbVar5 + 0x20;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            if (*(longlong *)(arg0 + lVar6) != 0) {
              pub_1406abac0(pbVar2,*(longlong *)(arg0 + lVar6) << 5,8);
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != lVar4);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x40) = uStack_a0;
        *(undefined8 *)(param_1 + 0x30) = uStack_b0;
        *(undefined8 *)(param_1 + 0x38) = uStack_a8;
        *(undefined8 *)(param_1 + 0x20) = uStack_c0;
        *(undefined8 *)(param_1 + 0x28) = uStack_b8;
        *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_cf,uStack_d0);
        *(longlong *)(param_1 + 0x18) = lStack_c8;
        *(ulonglong *)param_1 = CONCAT71(uStack_df,cStack_e0);
        *(ulonglong *)(param_1 + 8) = CONCAT71(uStack_d7,uStack_d8);
        arg0 = (byte *)CONCAT44(uStack_5c,uStack_60);
        if (lStack_58 != 0) {
          lVar8 = 0;
          do {
            lVar6 = lVar8 * 0x20;
            pbVar2 = *(byte **)(arg0 + lVar6 + 8);
            lVar7 = *(longlong *)(arg0 + lVar6 + 0x10);
            if (lVar7 != 0) {
              pbVar5 = pbVar2 + 0x10;
              do {
                if (*(ulonglong *)(pbVar5 + -8) != 0) {
                  pub_1406abac0(*(byte **)pbVar5,*(ulonglong *)(pbVar5 + -8),1);
                }
                pbVar5 = pbVar5 + 0x20;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            if (*(longlong *)(arg0 + lVar6) != 0) {
              pub_1406abac0(pbVar2,*(longlong *)(arg0 + lVar6) << 5,8);
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != lVar4);
        }
      }
      param_1 = pcStack_50;
      if (CONCAT44(uStack_64,uStack_68) != 0) {
        pub_1406abac0(arg0,CONCAT44(uStack_64,uStack_68) << 5,8);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = uStack_a0;
      *(undefined8 *)(param_1 + 0x30) = uStack_b0;
      *(undefined8 *)(param_1 + 0x38) = uStack_a8;
      *(undefined8 *)(param_1 + 0x20) = uStack_c0;
      *(undefined8 *)(param_1 + 0x28) = uStack_b8;
      *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_cf,uStack_d0);
      *(longlong *)(param_1 + 0x18) = lStack_c8;
      *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_d8,uStack_df);
      *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_d0,uStack_d7);
      *param_1 = cStack_e0;
    }
  }
  return param_1;
}

