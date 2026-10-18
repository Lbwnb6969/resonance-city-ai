// VA 0x1408dc800, PDB extent 414 bytes
// system_decorator::cull_oob_decorators::auto_allow_decorator_culling
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::cull_oob_decorators::auto_allow_decorator_culling
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 414 */

void pdb_1408dc800(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  cVar7 = pdb_140ae3070(*param_1);
  if (cVar7 == '\0') {
    return;
  }
  puVar2 = (ulonglong *)*param_4;
  lVar3 = param_4[1];
  uVar4 = *puVar2;
  uVar10 = 0;
  uVar13 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar13 = uVar10;
  }
  uVar12 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar12 = uVar10;
  }
  lVar8 = uVar13 * 0x30 + *(longlong *)(lVar3 + 8);
  uVar4 = *(ulonglong *)(lVar3 + 0x10) - uVar13;
  if (*(ulonglong *)(lVar3 + 0x10) < uVar13) {
    lVar8 = 8;
    uVar4 = uVar10;
  }
  lVar14 = uVar12 * 0x30 + *(longlong *)(lVar3 + 0x28);
  uVar13 = *(ulonglong *)(lVar3 + 0x30) - uVar12;
  if (*(ulonglong *)(lVar3 + 0x30) < uVar12) {
    lVar14 = 8;
    uVar13 = uVar10;
  }
  *puVar2 = (*(longlong *)(lVar3 + 0x40) - uVar13) - uVar4;
  lVar11 = uVar13 * 0x30 + lVar14;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar3 = *param_3;
  puVar5 = (undefined4 *)param_3[2];
  uVar6 = *param_2;
  lVar9 = lVar8;
  do {
    if ((lVar9 == 0) || (lVar9 == uVar4 * 0x30 + lVar8)) {
      if ((lVar14 == 0) || (lVar14 == lVar11)) {
        *puVar5 = uVar1;
        pdb_140c42160(lVar3,uVar6);
        return;
      }
      lVar15 = 0;
      lVar9 = lVar14;
      lVar14 = lVar14 + 0x30;
    }
    else {
      lVar15 = lVar9 + 0x30;
    }
    *puVar2 = *puVar2 + 1;
    *puVar5 = uVar1;
    pdb_140c3ef00(&uStack_a0,uVar6,*(undefined8 *)(lVar9 + 0x18));
    uStack_b8 = uStack_50;
    uStack_b0 = uStack_48;
    uStack_c8 = uStack_60;
    uStack_c0 = uStack_58;
    uStack_d8 = uStack_70;
    uStack_d4 = uStack_6c;
    uStack_d0 = uStack_68;
    uStack_cc = uStack_64;
    uStack_e8 = uStack_80;
    uStack_e4 = uStack_7c;
    uStack_e0 = uStack_78;
    uStack_dc = uStack_74;
    uStack_f8 = uStack_90;
    uStack_f4 = uStack_8c;
    uStack_f0 = uStack_88;
    uStack_ec = uStack_84;
    uStack_108 = uStack_a0;
    uStack_104 = uStack_9c;
    uStack_100 = uStack_98;
    uStack_fc = uStack_94;
    pdb_1414afdd0(lVar3 + 0x30,&uStack_108);
    lVar9 = lVar15;
  } while( true );
}

