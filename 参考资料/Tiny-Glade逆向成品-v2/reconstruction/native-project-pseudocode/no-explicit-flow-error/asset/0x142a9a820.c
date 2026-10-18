// VA 0x142a9a820, PDB extent 752 bytes
// ron::de::impl$2::deserialize_byte_buf<serde::private::de::content::ContentVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_byte_buf<serde::private::de::content::ContentVisitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 752 */

void pdb_142a9a820(char *param_1,byte *param_2)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong unaff_R15;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_a8;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  char cStack_98;
  undefined4 uStack_97;
  undefined3 uStack_93;
  ulonglong uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined4 uStack_40;
  undefined3 uStack_3c;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pbVar3 = param_2 + 0x10;
  cVar1 = pdb_140dccd90(pbVar3,0x5b);
  if (cVar1 == '\0') {
    pdb_140dcd5f0(&cStack_98,pbVar3);
    if (cStack_98 != '2') {
      *(uint *)(param_1 + 4) = CONCAT31(uStack_93,uStack_97._3_1_);
      *(undefined4 *)(param_1 + 1) = uStack_97;
      *(undefined8 *)(param_1 + 0x20) = uStack_78;
      *(undefined8 *)(param_1 + 0x28) = uStack_70;
      *(undefined8 *)(param_1 + 0x30) = uStack_68;
      *(undefined8 *)(param_1 + 0x38) = uStack_60;
      *(undefined8 *)(param_1 + 0x40) = uStack_58;
      *param_1 = cStack_98;
      *(ulonglong *)(param_1 + 8) = uStack_90;
      *(byte **)(param_1 + 0x10) = pbStack_88;
      *(byte **)(param_1 + 0x18) = pbStack_80;
      return;
    }
    if (SBORROW8(0,uStack_90)) {
      cVar1 = '\x0f';
      lVar4 = 0x18;
      lVar5 = 0x10;
    }
    else {
      *(ulonglong *)(param_1 + 0x10) = uStack_90;
      cVar1 = '\x0e';
      lVar4 = 0x20;
      lVar5 = 0x18;
    }
    *(byte **)(param_1 + lVar5) = pbStack_88;
    *(byte **)(param_1 + lVar4) = pbStack_80;
    param_1[8] = cVar1;
LAB_142a9a9d0:
    *param_1 = '2';
  }
  else {
    param_2[0x68] = 0;
    cVar1 = pdb_140dce020(pbVar3,0x5b);
    pbVar2 = param_2;
    if (cVar1 == '\0') {
      cStack_98 = '\x04';
      uStack_90 = unaff_R15;
    }
    else {
      if (*(int *)param_2 == 1) {
        if (*(longlong *)(param_2 + 8) == 0) {
          cStack_98 = '0';
          uStack_90 = unaff_R15;
          goto LAB_142a9aa52;
        }
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -1;
      }
      uStack_a0 = 0x104;
      uStack_9e = 0;
      pbStack_a8 = param_2;
      pdb_142af1d50(&cStack_98,&pbStack_a8);
      pbVar2 = pbStack_80;
      if (cStack_98 == '2') {
        if (*(int *)param_2 == 1) {
          lVar4 = -1;
          if (*(longlong *)(param_2 + 8) + 1 != 0) {
            lVar4 = *(longlong *)(param_2 + 8) + 1;
          }
          *(longlong *)(param_2 + 8) = lVar4;
        }
        uStack_48 = uStack_90;
        pbStack_50 = pbStack_88;
        pdb_140dd4ac0(&cStack_98,pbVar3);
        if (cStack_98 == '2') {
          cVar1 = pdb_140dce020(pbVar3,0x5d);
          if (cVar1 != '\0') {
            param_1[8] = '\x0e';
            *(ulonglong *)(param_1 + 0x10) = uStack_48;
            *(byte **)(param_1 + 0x18) = pbStack_50;
            *(byte **)(param_1 + 0x20) = pbVar2;
            goto LAB_142a9a9d0;
          }
          uStack_90 = unaff_R15;
          cStack_98 = '\x05';
          if (uStack_48 != 0) {
            pub_1406abac0(pbStack_50,uStack_48,1);
            cStack_98 = '\x05';
          }
        }
        else {
          uStack_3c = uStack_93;
          uStack_40 = uStack_97;
          uStack_d8 = uStack_78;
          uStack_d0 = uStack_70;
          uStack_c8 = uStack_68;
          uStack_c0 = uStack_60;
          uStack_b8 = uStack_58;
          pbVar2 = pbStack_88;
          pbVar3 = pbStack_80;
          if (uStack_48 != 0) {
            pub_1406abac0(pbStack_50,uStack_48,1);
          }
        }
      }
      else {
        uStack_3c = uStack_93;
        uStack_40 = uStack_97;
        uStack_d8 = uStack_78;
        uStack_d0 = uStack_70;
        uStack_c8 = uStack_68;
        uStack_c0 = uStack_60;
        uStack_b8 = uStack_58;
        pbVar2 = pbStack_88;
        pbVar3 = pbStack_80;
      }
    }
LAB_142a9aa52:
    *(uint *)(param_1 + 4) = CONCAT31(uStack_3c,uStack_40._3_1_);
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *(ulonglong *)(param_1 + 8) = uStack_90;
    *(byte **)(param_1 + 0x10) = pbVar2;
    *(byte **)(param_1 + 0x18) = pbVar3;
    *param_1 = cStack_98;
    *(undefined8 *)(param_1 + 0x20) = uStack_d8;
    *(undefined8 *)(param_1 + 0x28) = uStack_d0;
    *(undefined8 *)(param_1 + 0x30) = uStack_c8;
    *(undefined8 *)(param_1 + 0x38) = uStack_c0;
    *(undefined8 *)(param_1 + 0x40) = uStack_b8;
  }
  return;
}

