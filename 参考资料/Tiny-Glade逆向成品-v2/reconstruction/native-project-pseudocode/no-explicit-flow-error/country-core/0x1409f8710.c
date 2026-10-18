// VA 0x1409f8710, PDB extent 763 bytes
// country_core::systems::collision::world::dispose_collider_mesh_instance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::dispose_collider_mesh_instance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 763 */

undefined4 * pdb_1409f8710(undefined4 *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_144;
  undefined1 auStack_118 [16];
  longlong *aplStack_108 [2];
  uint uStack_f8;
  byte *pbStack_f0;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined3 uStack_48;
  undefined4 uStack_45;
  undefined4 uStack_41;
  undefined4 uStack_3d;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar1 = param_2 + (ulonglong)*(byte *)(param_3 + 4) * 0x390;
  pdb_140cd4c00(&uStack_1c8,lVar1 + 0x20,param_3[2],param_3[3],param_2 + 0x3ce8,param_2 + 0x3d80,0);
  if (iStack_144 == 2) {
    pdb_142dc8110(&UNK_143033730,0x45,&UNK_143033778);
  }
  else {
    pub_142e32760(auStack_118,&uStack_1c8,0xb0);
    uVar4 = param_3[1];
    uVar10 = (ulonglong)uVar4;
    if (((uVar10 < *(ulonglong *)(param_2 + 0x10)) &&
        (lVar6 = *(longlong *)(param_2 + 8), lVar6 != 0)) &&
       (iVar5 = *param_3, *(int *)(lVar6 + 0x20 + uVar10 * 0x28) == iVar5)) {
      pcVar2 = (char *)(lVar6 + uVar10 * 0x28);
      cVar3 = *pcVar2;
      uStack_48 = (undefined3)((ulonglong)*(undefined8 *)(pcVar2 + 0x10) >> 8);
      uStack_45 = (undefined4)((ulonglong)*(undefined8 *)(pcVar2 + 0x10) >> 0x20);
      uStack_41 = (undefined4)*(undefined8 *)(pcVar2 + 0x18);
      uStack_3d = (undefined4)((ulonglong)*(undefined8 *)(pcVar2 + 0x18) >> 0x20);
      uStack_58 = *(undefined4 *)(pcVar2 + 1);
      uStack_1c8 = *(undefined4 *)pcVar2;
      uStack_54 = *(undefined4 *)(pcVar2 + 5);
      uVar8 = *(undefined8 *)(pcVar2 + 1);
      uStack_50 = *(undefined4 *)(pcVar2 + 9);
      uVar7 = *(undefined4 *)(pcVar2 + 0xd);
      uVar9 = *(undefined8 *)(pcVar2 + 9);
      *(undefined4 *)pcVar2 = *(undefined4 *)(param_2 + 0x18);
      *(uint *)(param_2 + 0x18) = uVar4;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      *(int *)(pcVar2 + 0x20) = iVar5 + 1;
      uStack_4c = uVar7;
      if (cVar3 != '\x11') {
        uStack_1c4 = (undefined4)((ulonglong)uVar8 >> 0x18);
        uStack_1c0._1_3_ = (undefined3)uStack_50;
        uStack_1c0 = CONCAT31(uStack_1c0._1_3_,(char)((uint)uStack_54 >> 0x18));
        uStack_1bc = (undefined4)((ulonglong)uVar9 >> 0x18);
        uStack_4c._3_1_ = (undefined1)((uint)uVar7 >> 0x18);
        uStack_1b8 = CONCAT31(uStack_48,uStack_4c._3_1_);
        uStack_1b4 = uStack_45;
        uStack_1b0 = uStack_41;
        uStack_1ac = uStack_3d;
        *(undefined1 *)(lVar1 + 0x3a8) = 1;
        pdb_140cd4b60(&uStack_58,auStack_118);
        uStack_5c = (undefined4)
                    (CONCAT17((undefined1)uStack_41,CONCAT43(uStack_45,uStack_48)) >> 0x20);
        uStack_68 = uStack_58;
        uStack_64 = uStack_50;
        uStack_60 = uStack_4c;
        pdb_140a83790(lVar1 + 0x1a8,&uStack_68);
        uStack_4c = param_3[4];
        uStack_54 = (undefined4)*(undefined8 *)(param_3 + 2);
        uStack_50 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
        uStack_58 = 1;
        pdb_1409c4dd0(param_2 + 0x3cb0,&uStack_58);
        *(undefined8 *)(param_1 + 4) = uStack_d4;
        param_1[6] = uStack_cc;
        param_1[8] = uStack_1c8;
        param_1[9] = uStack_1c4;
        param_1[10] = uStack_1c0;
        param_1[0xb] = uStack_1bc;
        param_1[0xc] = uStack_1b8;
        param_1[0xd] = uStack_1b4;
        param_1[0xe] = uStack_1b0;
        param_1[0xf] = uStack_1ac;
        *param_1 = uStack_e4;
        param_1[1] = uStack_e0;
        param_1[2] = uStack_dc;
        param_1[3] = uStack_d8;
        LOCK();
        *aplStack_108[0] = *aplStack_108[0] + -1;
        UNLOCK();
        if (*aplStack_108[0] == 0) {
          pdb_1406efe00(aplStack_108);
        }
        if (1 < uStack_f8) {
          pub_1406abac0(pbStack_f0,0x2c,4);
        }
        return param_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143033790);
}

