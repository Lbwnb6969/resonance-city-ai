// VA 0x14094c360, PDB extent 935 bytes
// country_core::geometry::instanced_wall::InstancedWall::upload_to_storage_buffer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::geometry::instanced_wall::InstancedWall::upload_to_storage_buffer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
   Extent: 935 */

ulonglong pdb_14094c360(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong lStack_70;
  longlong lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  byte *pbStack_48;
  longlong lStack_40;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lStack_40 = *(longlong *)(param_1 + 8);
  uVar5 = -lStack_40;
  if (!SBORROW8(0,lStack_40)) {
    pbStack_48 = *(byte **)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uStack_31 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143024a20);
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (lVar3 == 0) {
      uStack_31 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143382200);
    }
    LOCK();
    bVar9 = *(char *)(lVar3 + 0x18) == '\0';
    if (bVar9) {
      *(char *)(lVar3 + 0x18) = '\x01';
    }
    UNLOCK();
    if (!bVar9) {
      uStack_31 = 1;
      pdb_142dbd1a0(lVar3 + 0x18,CONCAT71((int7)((ulonglong)lStack_40 >> 8),1),1000000000);
    }
    uStack_31 = 1;
    pdb_140e9a150(lVar3 + 0x18);
    if ((*(longlong *)(lVar3 + 0x10) == 0) ||
       (piVar6 = (int *)(*(longlong *)(lVar3 + 8) + *(longlong *)(lVar3 + 0x10) * 4 + -4),
       piVar6 == (int *)0x0)) {
      lStack_a0 = *(longlong *)(param_2 + 0x10);
      if (lStack_a0 == 0) {
        uStack_31 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143382218);
      }
      iStack_50 = (int)lStack_a0 + -1;
    }
    else {
      iStack_50 = *piVar6;
      lStack_a0 = *(longlong *)(param_2 + 0x10);
    }
    uStack_a8 = *(undefined8 *)(param_2 + 8);
    uStack_98 = *(undefined4 *)(param_2 + 0x18);
    uStack_94 = *(undefined4 *)(param_2 + 0x1c);
    uStack_90 = *(undefined4 *)(param_2 + 0x20);
    uStack_8c = *(undefined4 *)(param_2 + 0x24);
    uStack_80 = *(undefined4 *)(param_2 + 0x28);
    uStack_7c = *(undefined4 *)(param_2 + 0x2c);
    uStack_78 = *(undefined4 *)(param_2 + 0x30);
    uStack_74 = *(undefined4 *)(param_2 + 0x34);
    lStack_70 = param_2 + 0x78;
    uStack_60 = *(undefined4 *)(param_2 + 0x38);
    uStack_5c = *(undefined4 *)(param_2 + 0x3c);
    uStack_58 = *(undefined4 *)(param_2 + 0x40);
    uStack_54 = *(undefined4 *)(param_2 + 0x44);
    lStack_68 = param_2 + 0x58;
    uStack_32 = 1;
    lStack_88 = lVar3;
    pdb_141a77f20(&uStack_a8);
    pbVar7 = pbStack_48 + lVar2 * 0x40;
    pbVar8 = pbStack_48;
    do {
      if (pbVar8 == pbVar7) goto LAB_14094c55c;
      uStack_148 = *(undefined4 *)pbVar8;
      uStack_144 = *(undefined4 *)(pbVar8 + 4);
      uStack_140 = *(undefined4 *)(pbVar8 + 8);
      uStack_13c = *(undefined4 *)(pbVar8 + 0xc);
      uStack_138 = *(undefined4 *)(pbVar8 + 0x10);
      uStack_134 = *(undefined4 *)(pbVar8 + 0x14);
      uStack_130 = *(undefined4 *)(pbVar8 + 0x18);
      uStack_12c = *(undefined4 *)(pbVar8 + 0x1c);
      uStack_128 = *(undefined4 *)(pbVar8 + 0x20);
      uStack_124 = *(undefined4 *)(pbVar8 + 0x24);
      uStack_120 = *(undefined4 *)(pbVar8 + 0x28);
      uStack_11c = *(undefined4 *)(pbVar8 + 0x2c);
      uStack_118 = *(undefined4 *)(pbVar8 + 0x30);
      uStack_114 = *(undefined4 *)(pbVar8 + 0x34);
      uStack_110 = *(undefined4 *)(pbVar8 + 0x38);
      uStack_10c = *(undefined4 *)(pbVar8 + 0x3c);
      cVar4 = pdb_141a77830(&uStack_a8,&uStack_148);
      pbVar8 = pbVar8 + 0x40;
    } while (cVar4 == '\0');
    if (1 < *_DAT_143ca8e90) {
      uStack_108 = 0;
      puStack_100 = &UNK_143024a46;
      uStack_f8 = 0x26;
      uStack_f0 = 0;
      puStack_e8 = &UNK_1430249e8;
      uStack_e0 = 0x32;
      uStack_d8 = 2;
      puStack_d0 = &UNK_143024a46;
      uStack_c8 = 0x26;
      uStack_c0 = 0x15a00000001;
      puStack_b8 = &UNK_143024a38;
      uStack_b0 = 0x1d;
      pdb_140f332f0(&uStack_33,&uStack_108);
    }
LAB_14094c55c:
    if (lStack_40 != 0) {
      pub_1406abac0(pbStack_48,lStack_40 << 6,4);
    }
    pbVar8 = (byte *)(lStack_88 + 0x18);
    uStack_31 = 0;
    pdb_140e9a350();
    uVar5 = 1;
    LOCK();
    bVar1 = *pbVar8;
    if (bVar1 == 1) {
      *pbVar8 = 0;
    }
    else {
      uVar5 = (ulonglong)bVar1;
    }
    UNLOCK();
    if (bVar1 != 1) {
      uStack_31 = 0;
      uVar5 = pdb_142dbcef0(pbVar8,0);
    }
  }
  return uVar5;
}

