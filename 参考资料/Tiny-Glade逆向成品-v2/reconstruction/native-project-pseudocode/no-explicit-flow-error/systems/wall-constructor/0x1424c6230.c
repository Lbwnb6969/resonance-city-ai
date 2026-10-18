// VA 0x1424c6230, PDB extent 784 bytes
// system_wall_constructor::construct_elevation_supports::util_pillar_construction::construct_brick_columns
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/util_pillar_construction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::util_pillar_construction::construct_brick_columns
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/util_pillar_construction.rs
   Extent: 784 */

void pdb_1424c6230(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  byte *pbVar6;
  byte *arg0;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_88 = param_4;
  lStack_78 = param_2;
  plStack_70 = param_3;
  puVar3 = (undefined8 *)pdb_1413e4400(param_1,&UNK_1433056c0);
  if ((puVar3 != (undefined8 *)0x0) &&
     (lVar4 = (**(code **)(puVar3[1] + 0x18))(*puVar3), lVar4 != 0)) {
    uStack_61 = 0;
    lVar2 = *(longlong *)(lStack_78 + 0x150);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b70);
    }
    LOCK();
    bVar9 = *(char *)(lVar2 + 0x18) == '\0';
    if (bVar9) {
      *(char *)(lVar2 + 0x18) = '\x01';
    }
    UNLOCK();
    if (!bVar9) {
      pdb_142dbd1a0(lVar2 + 0x18,1,1000000000);
    }
    pdb_140e9a150(lVar2 + 0x18);
    if ((*(longlong *)(lVar2 + 0x10) == 0) ||
       (piVar5 = (int *)(*(longlong *)(lVar2 + 8) + *(longlong *)(lVar2 + 0x10) * 4 + -4),
       piVar5 == (int *)0x0)) {
      lStack_f0 = *(longlong *)(lVar4 + 0x10);
      if (lStack_f0 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b88);
      }
      iStack_a0 = (int)lStack_f0 + -1;
    }
    else {
      iStack_a0 = *piVar5;
      lStack_f0 = *(longlong *)(lVar4 + 0x10);
    }
    uStack_f8 = *(undefined8 *)(lVar4 + 8);
    uStack_e8 = *(undefined4 *)(lVar4 + 0x18);
    uStack_e4 = *(undefined4 *)(lVar4 + 0x1c);
    uStack_e0 = *(undefined4 *)(lVar4 + 0x20);
    uStack_dc = *(undefined4 *)(lVar4 + 0x24);
    uStack_d0 = *(undefined8 *)(lVar4 + 0x28);
    uStack_c8 = *(undefined8 *)(lVar4 + 0x30);
    lStack_c0 = lVar4 + 0x78;
    lStack_b8 = lVar4 + 0x58;
    uStack_b0 = *(undefined8 *)(lVar4 + 0x38);
    uStack_a8 = *(undefined8 *)(lVar4 + 0x40);
    puStack_98 = &uStack_f8;
    puStack_90 = &uStack_61;
    pbVar6 = (byte *)plStack_70[1];
    arg0 = pbVar6;
    lStack_d8 = lVar2;
    if (plStack_70[2] != 0) {
      pbVar8 = pbVar6 + plStack_70[2] * 0x40;
      lVar4 = *param_6;
      pbStack_80 = pbVar6;
      do {
        lVar4 = lVar4 + 1;
        pdb_142a44f10(*(undefined4 *)(pbVar6 + 0x30),*(undefined4 *)pbVar6,
                      *(undefined4 *)(pbVar6 + 4),*(undefined4 *)(pbVar6 + 0x2c),
                      *(undefined4 *)(pbVar6 + 0x28),&uStack_88,*(undefined4 *)(pbVar6 + 0x10),
                      *(undefined4 *)(pbVar6 + 0x14),&puStack_98,param_5,
                      *(undefined4 *)(lStack_78 + 0x274),0);
        pbVar6 = pbVar6 + 0x40;
        *param_6 = lVar4;
        arg0 = pbStack_80;
      } while (pbVar6 != pbVar8);
    }
    pcVar7 = (char *)(lStack_d8 + 0x18);
    pdb_140e9a350();
    LOCK();
    cVar1 = *pcVar7;
    if (cVar1 == '\x01') {
      *pcVar7 = '\0';
    }
    UNLOCK();
    if (cVar1 != '\x01') {
      pdb_142dbcef0(pcVar7,0);
    }
    if (*plStack_70 != 0) {
      pub_1406abac0(arg0,*plStack_70 << 6,8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143510e40);
}

