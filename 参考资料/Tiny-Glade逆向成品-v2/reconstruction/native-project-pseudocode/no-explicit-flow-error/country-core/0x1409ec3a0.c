// VA 0x1409ec3a0, PDB extent 677 bytes
// country_core::resources::walls::curved_halftimber::CurvedHalfTimberDrawables::remove_wall_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/curved_halftimber.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::curved_halftimber::CurvedHalfTimberDrawables::remove_wall_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/curved_halftimber.rs
   Extent: 677 */

void pdb_1409ec3a0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  longlong lStack_90;
  byte *pbStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 *puStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar6 = pdb_1400af0a0(param_1 + 0x20);
  pdb_140269750(auStack_98,param_1,uVar6,param_2);
  if (!SBORROW8(0,lStack_90)) {
    lStack_78 = lStack_90;
    pbStack_68 = pbStack_88;
    puStack_70 = param_3;
    if (lStack_80 != 0) {
      lVar7 = lStack_80 << 3;
      uVar6 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar1 = param_3[3];
      lVar8 = 0;
      do {
        uVar2 = *(undefined8 *)(pbStack_68 + lVar8);
        if ((int)uVar2 == 0) break;
        cVar5 = pdb_140ed63a0(uVar6,uVar2);
        if (cVar5 != '\0') {
          uStack_c0 = uVar2;
          uStack_b8 = uVar6;
          uStack_b0 = uVar3;
          uStack_a8 = uVar4;
          uStack_a0 = uVar1;
          pdb_140f04aa0(&uStack_c0,&UNK_143032990);
        }
        lVar8 = lVar8 + 8;
      } while (lVar7 != lVar8);
    }
    param_3 = puStack_70;
    if (lStack_78 != 0) {
      pub_1406abac0(pbStack_68,lStack_78 << 3,8);
    }
  }
  uVar6 = pdb_1400af0a0(param_1 + 0x50,param_2);
  pdb_140269750(auStack_98,param_1 + 0x30,uVar6,param_2);
  if (!SBORROW8(0,lStack_90)) {
    puStack_70 = (undefined8 *)lStack_90;
    pbStack_68 = pbStack_88;
    if (lStack_80 != 0) {
      uVar6 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar1 = param_3[3];
      lVar7 = 0;
      do {
        uVar2 = *(undefined8 *)(pbStack_68 + lVar7);
        if ((int)uVar2 == 0) break;
        cVar5 = pdb_140ed63a0(uVar6,uVar2);
        if (cVar5 != '\0') {
          uStack_c0 = uVar2;
          uStack_b8 = uVar6;
          uStack_b0 = uVar3;
          uStack_a8 = uVar4;
          uStack_a0 = uVar1;
          pdb_140f04aa0(&uStack_c0,&UNK_1430329a8);
        }
        lVar7 = lVar7 + 8;
      } while (lStack_80 << 3 != lVar7);
    }
    if (puStack_70 != (undefined8 *)0x0) {
      pub_1406abac0(pbStack_68,(longlong)puStack_70 << 3,8);
    }
  }
  return;
}

