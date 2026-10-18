// VA 0x140a69e90, PDB extent 1155 bytes
// country_core::resources::walls::window_cuts::WindowCutStorage::finalize
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::window_cuts::WindowCutStorage::finalize
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
   Extent: 1155 */

ulonglong pdb_140a69e90(int *param_1,float param_2,char param_3,longlong param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  longlong lStack_110;
  ulonglong *puStack_108;
  int *piStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  undefined8 *puStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_93;
  char cStack_92;
  byte bStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  lStack_110 = param_4;
  cStack_92 = param_3;
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143040b38,0x8d,&UNK_143040b80);
  }
  puStack_108 = (ulonglong *)(param_1 + 2);
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  uStack_f8 = *(ulonglong *)(param_1 + 8);
  uStack_f0 = *(ulonglong *)(param_1 + 10);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uStack_c8 = *(ulonglong *)(param_1 + 0xe);
  uStack_c0 = *(ulonglong *)(param_1 + 0x10);
  uStack_b8 = *(ulonglong *)(param_1 + 0x12);
  uStack_b0 = *(ulonglong *)(param_1 + 0x14);
  uStack_d0 = *(ulonglong *)(param_1 + 6);
  uStack_e0 = *(ulonglong *)(param_1 + 2);
  puVar12 = *(undefined8 **)(param_1 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 4;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar7 = _DAT_142e37988;
  param_1[7] = 0;
  uVar8 = uStack_c8 ^ uStack_b8;
  bStack_91 = uStack_c0 != uStack_b0 || uVar8 != 0;
  uVar9 = CONCAT71((int7)(uVar8 >> 8),bStack_91);
  if (uStack_c0 == uStack_b0 && uVar8 == 0) {
    param_1[0] = 1;
    param_1[1] = 0;
    *(ulonglong *)(param_1 + 0x12) = uStack_b8;
    *(ulonglong *)(param_1 + 0x14) = uStack_b0;
    *(ulonglong *)(param_1 + 0xe) = uStack_c8;
    *(ulonglong *)(param_1 + 0x10) = uStack_c0;
    *(undefined8 **)(param_1 + 10) = puVar12;
    *(ulonglong *)(param_1 + 0xc) = uStack_d0;
    *(undefined8 *)(param_1 + 6) = uVar3;
    *(ulonglong *)(param_1 + 8) = uStack_e0;
    *puStack_108 = uStack_f8;
    *(ulonglong *)(param_1 + 4) = uStack_f0;
  }
  else {
    uStack_e8 = 0;
    piStack_100 = param_1;
    puStack_d8 = puVar12;
    if (uStack_d0 != 0) {
      puVar11 = puVar12 + uStack_d0 * 4;
      do {
        uVar3 = *puVar12;
        fVar13 = (float)((ulonglong)uVar3 >> 0x20);
        bVar2 = *(byte *)((longlong)puVar12 + 0x1c);
        uVar8 = (ulonglong)bVar2;
        uStack_168 = (undefined1 *)
                     CONCAT44(fVar13 + *(float *)(lStack_110 + 4 + uVar8 * 0x14),
                              (float)uVar3 +
                              *(float *)(lStack_110 + uVar8 * 0x14) *
                              *(float *)(&UNK_14303f180 + (ulonglong)(0xe < uVar8) * 4));
        _fStack_160 = CONCAT44(fVar13 + *(float *)(lStack_110 + 0xc + uVar8 * 0x14),
                               (float)uVar3 +
                               *(float *)(&UNK_14303f180 + (ulonglong)(0xe < uVar8) * 4) *
                               *(float *)(lStack_110 + 8 + uVar8 * 0x14));
        pdb_140deec90(&fStack_a4,&uStack_168,uVar7,uVar7);
        uVar8 = uStack_e8;
        if (uStack_e8 == uStack_f8) {
          pdb_142d8d630(&uStack_f8);
        }
        lVar10 = uVar8 * 0x30;
        *(undefined8 *)(uStack_f0 + lVar10) = CONCAT44(uStack_a0,fStack_a4);
        ((undefined8 *)(uStack_f0 + lVar10))[1] = CONCAT44(uStack_98,fStack_9c);
        *(undefined8 *)(uStack_f0 + 0x10 + lVar10) = uVar3;
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
        uVar5 = *(undefined4 *)(puVar12 + 2);
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x14);
        puVar1 = (undefined4 *)(uStack_f0 + 0x18 + lVar10);
        *puVar1 = *(undefined4 *)(puVar12 + 1);
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(undefined4 *)(uStack_f0 + 0x28 + lVar10) = *(undefined4 *)(puVar12 + 3);
        *(byte *)(uStack_f0 + 0x2c + lVar10) = bVar2;
        *(undefined2 *)(uStack_f0 + 0x2d + lVar10) = *(undefined2 *)((longlong)puVar12 + 0x1d);
        *(undefined1 *)(uStack_f0 + 0x2f + lVar10) = *(undefined1 *)((longlong)puVar12 + 0x1f);
        uVar9 = uVar8 + 1;
        uStack_e8 = uVar9;
        if (cStack_92 != '\0') {
          if (0.0 <= fStack_a4) {
            if (fStack_9c <= param_2) goto LAB_140a69ffc;
            fStack_a4 = fStack_a4 - param_2;
            fStack_9c = fStack_9c - param_2;
          }
          else {
            fStack_a4 = fStack_a4 + param_2;
            fStack_9c = fStack_9c + param_2;
          }
          if (uVar9 == uStack_f8) {
            pdb_142d8d630(&uStack_f8);
          }
          lVar10 = uVar9 * 0x30;
          *(undefined8 *)(uStack_f0 + lVar10) = CONCAT44(uStack_a0,fStack_a4);
          ((undefined8 *)(uStack_f0 + lVar10))[1] = CONCAT44(uStack_98,fStack_9c);
          *(undefined8 *)(uStack_f0 + 0x10 + lVar10) = uVar3;
          uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
          uVar5 = *(undefined4 *)(puVar12 + 2);
          uVar6 = *(undefined4 *)((longlong)puVar12 + 0x14);
          puVar1 = (undefined4 *)(uStack_f0 + 0x18 + lVar10);
          *puVar1 = *(undefined4 *)(puVar12 + 1);
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          *(undefined4 *)(uStack_f0 + 0x28 + lVar10) = *(undefined4 *)(puVar12 + 3);
          *(byte *)(uStack_f0 + 0x2c + lVar10) = bVar2;
          *(undefined2 *)(uStack_f0 + 0x2d + lVar10) = *(undefined2 *)((longlong)puVar12 + 0x1d);
          *(undefined1 *)(uStack_f0 + 0x2f + lVar10) = *(undefined1 *)((longlong)puVar12 + 0x1f);
          uStack_e8 = uVar8 + 2;
        }
LAB_140a69ffc:
        puVar12 = puVar12 + 4;
      } while (puVar12 != puVar11);
      uStack_168 = &uStack_93;
      if (1 < uStack_e8) {
        if (uStack_e8 < 0x15) {
          pdb_14151b6b0(uStack_f0,uStack_e8,1,&uStack_168);
        }
        else {
          pdb_140c75810(uStack_f0,uStack_e8,&uStack_168);
        }
      }
    }
    piStack_100[0] = 1;
    piStack_100[1] = 0;
    puStack_108[8] = uStack_b8;
    puStack_108[9] = uStack_b0;
    puStack_108[6] = uStack_c8;
    puStack_108[7] = uStack_c0;
    puStack_108[4] = (ulonglong)puStack_d8;
    puStack_108[5] = uStack_d0;
    puStack_108[2] = uStack_e8;
    puStack_108[3] = uStack_e0;
    *puStack_108 = uStack_f8;
    puStack_108[1] = uStack_f0;
    uVar9 = (ulonglong)bStack_91;
  }
  return uVar9;
}

