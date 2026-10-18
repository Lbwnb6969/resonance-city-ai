// VA 0x140a273d0, PDB extent 873 bytes
// country_core::systems::time_update::time_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/time_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::time_update::time_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/time_update.rs
   Extent: 873 */

void pdb_140a273d0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  float fVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  code *pcStack_20;
  
  if (*(int *)*param_2 == 0) {
    puVar2 = (ulonglong *)*param_3;
    uVar8 = *puVar2;
    lVar13 = 4;
    if (1 < uVar8) {
      lVar13 = uVar8 - 2;
    }
    if ((lVar13 == 0) || ((lVar13 == 9 && ((char)puVar2[1] != '\x01')))) {
      puVar10 = (ulonglong *)*param_5;
LAB_140a2742e:
      bVar12 = *(byte *)((longlong)puVar10 + 0x31) ^ 1;
    }
    else {
      if ((int)uVar8 != 7) goto LAB_140a273e7;
      puVar10 = (ulonglong *)*param_5;
      if ((char)puVar2[1] == '\x01') goto LAB_140a2742e;
      bVar12 = 0;
    }
  }
  else {
LAB_140a273e7:
    puVar10 = (ulonglong *)*param_5;
    bVar12 = 0;
  }
  lVar13 = *param_4;
  if (*(longlong *)(lVar13 + 0x40) == -0x7ffffffffffffffe) {
    if (*(ulonglong *)(lVar13 + 0x48) < *(ulonglong *)(lVar13 + 0x38)) {
      uVar11 = *(ulonglong *)(lVar13 + 0x48) + *(longlong *)(lVar13 + 0x30);
      uStack_29 = 0;
      uVar8 = 0;
      if (*(ulonglong *)(lVar13 + 0x20) <= uVar11) {
        uVar8 = *(ulonglong *)(lVar13 + 0x20);
      }
      fVar15 = *(float *)(*(longlong *)(lVar13 + 0x28) + 0xcc + (uVar11 - uVar8) * 0xd0);
      uVar1 = *(undefined4 *)((longlong)param_5 + 0x1c);
      puVar14 = (undefined4 *)param_5[2];
      *(float *)(puVar10 + 5) = fVar15;
      *puVar14 = uVar1;
      if (fVar15 < 0.0) goto LAB_140a27706;
      goto LAB_140a27518;
    }
LAB_140a276ec:
    pdb_142dc8110(&UNK_143041028,0x14,&UNK_143039260);
  }
  else {
    uVar8 = *(ulonglong *)(*param_1 + 0x10);
    if ((longlong)uVar8 < 0) {
      fVar15 = (float)uVar8;
      uVar6 = *(uint *)((longlong)puVar10 + 0x2c);
      if (bVar12 == 0) goto LAB_140a274f7;
LAB_140a274c1:
      fVar15 = (float)*(int *)(*param_1 + 0x18) / _DAT_142e46a44 + fVar15;
    }
    else {
      fVar15 = (float)(longlong)uVar8;
      uVar6 = *(uint *)((longlong)puVar10 + 0x2c);
      if (bVar12 != 0) goto LAB_140a274c1;
LAB_140a274f7:
      fVar15 = 0.0;
    }
    if ((uVar6 < 2) && (_DAT_143038a20 <= fVar15)) {
      fVar15 = _DAT_143038a20;
    }
    uVar1 = *(undefined4 *)((longlong)param_5 + 0x1c);
    puVar14 = (undefined4 *)param_5[2];
    *(float *)(puVar10 + 5) = fVar15;
    *puVar14 = uVar1;
LAB_140a27518:
    uVar6 = (uint)fVar15 >> 0x17 & 0xff;
    iVar9 = 0;
    if ((ushort)uVar6 < 0x60) {
      uVar8 = 0;
      iVar9 = 0;
LAB_140a275e7:
      uVar11 = uVar8 + *puVar10;
      if (!CARRY8(uVar8,*puVar10)) {
        uVar6 = iVar9 + (int)puVar10[1];
        if (uVar6 < 1000000000) {
LAB_140a2760f:
          *puVar10 = uVar11;
          *(uint *)(puVar10 + 1) = uVar6;
          *(byte *)(puVar10 + 6) = bVar12;
          *puVar14 = uVar1;
          *(int *)((longlong)puVar10 + 0x2c) = *(int *)((longlong)puVar10 + 0x2c) + 1;
          *puVar14 = uVar1;
          puVar10[2] = (ulonglong)((double)fVar15 + (double)puVar10[2]);
          *puVar14 = uVar1;
          fVar4 = _DAT_142f3e554;
          fVar16 = (fVar15 + *(float *)(puVar10 + 4)) * _DAT_142f3e554;
          uVar8 = 0;
          if (0.0 <= fVar16) {
            uVar8 = (longlong)(fVar16 - _DAT_142e36f2c) & (longlong)fVar16 >> 0x3f |
                    (longlong)fVar16;
          }
          uVar11 = 0xffffffffffffffff;
          if (fVar16 <= _DAT_142e36f30) {
            uVar11 = uVar8;
          }
          puVar10[3] = uVar11;
          fVar15 = (fVar15 + *(float *)(puVar10 + 4)) - (float)uVar11 / fVar4;
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          *(float *)(puVar10 + 4) = fVar15;
          return;
        }
        if (uVar11 != 0xffffffffffffffff) {
          uVar11 = uVar11 + 1;
          uVar6 = uVar6 + 0xc4653600;
          goto LAB_140a2760f;
        }
      }
      pdb_142dc8110(&UNK_143038aad,0x1e,&UNK_143038ad0);
      goto LAB_140a276ec;
    }
    uVar7 = (uint)fVar15 & 0x7fffff | 0x800000;
    cVar5 = (char)((uint)fVar15 >> 0x17);
    if ((ushort)uVar6 < 0x7f) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulonglong)uVar7 << (cVar5 + 0xaaU & 0x3f);
      auVar3 = auVar3 * ZEXT816(1000000000);
      uVar6 = 0;
      if ((longlong)auVar3._0_8_ < 0) {
        uVar6 = (byte)(auVar3._0_8_ >> 9 != 0x40000000000000 | auVar3[8]) & 1;
      }
      iVar9 = uVar6 + auVar3._8_4_;
      uVar8 = 0;
      goto LAB_140a275e7;
    }
    if (uVar6 < 0x96) {
      uVar8 = (ulonglong)(uVar7 >> (0x96U - cVar5 & 0x1f));
      uVar11 = (ulonglong)((int)fVar15 << (cVar5 + 0x81U & 0x1f) & 0x7fffff) * 1000000000;
      uVar6 = 0;
      if ((uVar11 & 0x400000) != 0) {
        uVar6 = (byte)(((uint)uVar11 & 0x7ffe00) != 0x400000 | (byte)(uVar11 >> 0x17)) & 1;
      }
      iVar9 = uVar6 + (int)(uVar11 >> 0x17);
      goto LAB_140a275e7;
    }
    if (uVar6 < 0xbf) {
      uVar8 = (ulonglong)uVar7 << (cVar5 + 0x6aU & 0x3f);
      goto LAB_140a275e7;
    }
  }
  uStack_29 = 1;
LAB_140a27706:
  puStack_28 = &uStack_29;
  pcStack_20 = pdb_140f729a0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143038a24,&puStack_28,&UNK_143038a90);
}

