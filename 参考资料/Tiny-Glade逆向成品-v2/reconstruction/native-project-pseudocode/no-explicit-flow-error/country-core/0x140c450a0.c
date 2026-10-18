// VA 0x140c450a0, PDB extent 913 bytes
// country_core::resources::walls::decorator_subtype::DecoratorMeshLibrary::insert_collision_and_interaction_as_same
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_subtype::DecoratorMeshLibrary::insert_collision_and_interaction_as_same
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
   Extent: 913 */

void pdb_140c450a0(longlong param_1,undefined4 param_2,undefined1 param_3,ulonglong *param_4,
                  ulonglong *param_5,ulonglong *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  longlong *plStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  byte *pbStack_90;
  byte *pbStack_88;
  longlong *aplStack_80 [5];
  ulonglong *puStack_58;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar6 = param_4[2];
  uVar8 = uVar6 * 0x24;
  puStack_58 = param_4;
  if (0x38e38e38e38e38e < uVar6) {
    uVar7 = 0;
LAB_140c450e9:
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_4b = 0;
    pdb_142dc7e2a(uVar7,uVar8);
LAB_140c4539a:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = param_4[1];
  uStack_4c = param_3;
  if (uVar8 == 0) {
    pbVar5 = (byte *)0x4;
    uVar4 = 0;
  }
  else {
    pdb_14007ee60();
    uVar7 = 4;
    pbVar5 = pub_1406abab0(uVar8,4);
    uVar4 = uVar6;
    if (pbVar5 == (byte *)0x0) goto LAB_140c450e9;
  }
  if (uVar6 != 0) {
    pub_142e32760(pbVar5,uVar2,uVar8);
  }
  plStack_c0 = (longlong *)puStack_58[3];
  LOCK();
  lVar1 = *plStack_c0;
  *plStack_c0 = *plStack_c0 + 1;
  UNLOCK();
  if (*plStack_c0 == 0 || SCARRY8(lVar1,1) != *plStack_c0 < 0) goto LAB_140c4539a;
  uStack_b8 = (undefined4)puStack_58[4];
  uStack_b4 = *(undefined4 *)((longlong)puStack_58 + 0x24);
  uStack_b0 = (undefined4)puStack_58[5];
  uStack_ac = *(undefined4 *)((longlong)puStack_58 + 0x2c);
  uStack_a8 = (undefined4)puStack_58[6];
  uStack_a4 = *(undefined4 *)((longlong)puStack_58 + 0x34);
  uStack_a0 = (undefined4)puStack_58[7];
  uStack_9c = *(undefined4 *)((longlong)puStack_58 + 0x3c);
  uStack_49 = 1;
  uStack_4a = 1;
  uStack_4b = 0;
  uVar8 = CONCAT71((int7)(uVar2 >> 8),uStack_4c);
  uStack_d8 = uVar4;
  pbStack_d0 = pbVar5;
  uStack_c8 = uVar6;
  pdb_1417bbed0(&iStack_98,param_1,param_2,uVar8 & 0xffffffff,&uStack_d8);
  lVar1 = CONCAT44(iStack_94,iStack_98);
  if (!SBORROW8(0,lVar1)) {
    if (lVar1 != 0) {
      pub_1406abac0(pbStack_90,lVar1 * 0x24,4);
    }
    LOCK();
    *aplStack_80[0] = *aplStack_80[0] + -1;
    UNLOCK();
    if (*aplStack_80[0] == 0) {
      uStack_49 = 1;
      uStack_4a = 1;
      uStack_4b = 0;
      pdb_140c7b7a0(aplStack_80);
    }
  }
  uStack_d8 = *puStack_58;
  pbStack_d0 = (byte *)puStack_58[1];
  uStack_c8 = puStack_58[2];
  plStack_c0 = (longlong *)puStack_58[3];
  uStack_b8 = (undefined4)puStack_58[4];
  uStack_b4 = *(undefined4 *)((longlong)puStack_58 + 0x24);
  uStack_b0 = (undefined4)puStack_58[5];
  uStack_ac = *(undefined4 *)((longlong)puStack_58 + 0x2c);
  uStack_a8 = (undefined4)puStack_58[6];
  uStack_a4 = *(undefined4 *)((longlong)puStack_58 + 0x34);
  uStack_a0 = (undefined4)puStack_58[7];
  uStack_9c = *(undefined4 *)((longlong)puStack_58 + 0x3c);
  uStack_49 = 0;
  uStack_4a = 1;
  uStack_4b = 0;
  pdb_1417bbed0(&iStack_98,param_1 + 0x30,param_2,uVar8 & 0xffffffff,&uStack_d8);
  lVar1 = CONCAT44(iStack_94,iStack_98);
  if (!SBORROW8(0,lVar1)) {
    if (lVar1 != 0) {
      pub_1406abac0(pbStack_90,lVar1 * 0x24,4);
    }
    LOCK();
    *aplStack_80[0] = *aplStack_80[0] + -1;
    UNLOCK();
    if (*aplStack_80[0] == 0) {
      uStack_49 = 0;
      uStack_4a = 1;
      uStack_4b = 0;
      pdb_140c7b7a0(aplStack_80);
    }
  }
  uStack_d8 = *param_5;
  pbStack_d0 = (byte *)param_5[1];
  uStack_c8 = param_5[2];
  plStack_c0 = (longlong *)param_5[3];
  uStack_49 = 0;
  uStack_4a = 0;
  uStack_4b = 0;
  pdb_1417b9770(&iStack_98,param_1 + 0x60,param_2,uVar8 & 0xffffffff,&uStack_d8);
  if (iStack_98 == 1) {
    if (pbStack_90 == (byte *)0x0) goto LAB_140c45329;
    pbVar5 = (byte *)((longlong)pbStack_90 * 0xc);
    uVar6 = 4;
  }
  else {
    if ((iStack_98 != 0) || (pbStack_90 == (byte *)0x0)) goto LAB_140c45329;
    uVar6 = 1;
    pbVar5 = pbStack_90;
  }
  pub_1406abac0(pbStack_88,(ulonglong)pbVar5,uVar6);
LAB_140c45329:
  uStack_c8 = param_6[2];
  uStack_d8 = *param_6;
  pbStack_d0 = (byte *)param_6[1];
  uStack_49 = 0;
  uStack_4a = 0;
  uStack_4b = 1;
  pdb_1417b2fb0(&iStack_98,param_1 + 0x90,param_2,uVar8 & 0xffffffff,&uStack_d8);
  if ((-1 < iStack_94) && (CONCAT44(iStack_94,iStack_98) != 0)) {
    pub_1406abac0(pbStack_90,CONCAT44(iStack_94,iStack_98) * 0xc,4);
  }
  return;
}

