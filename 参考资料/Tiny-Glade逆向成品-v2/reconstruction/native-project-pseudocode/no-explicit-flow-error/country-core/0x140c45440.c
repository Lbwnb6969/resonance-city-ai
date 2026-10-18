// VA 0x140c45440, PDB extent 1013 bytes
// country_core::resources::walls::decorator_subtype::DecoratorMeshLibrary::insert
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_subtype::DecoratorMeshLibrary::insert
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
   Extent: 1013 */

void pdb_140c45440(longlong param_1,undefined4 param_2,undefined1 param_3,longlong *param_4,
                  ulonglong *param_5,ulonglong *param_6,ulonglong *param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong *plStack_58;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar8 = param_4[2];
  uVar10 = uVar8 * 0x24;
  plStack_58 = param_4;
  if (0x38e38e38e38e38e < uVar8) {
    uVar9 = 0;
LAB_140c45489:
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_4b = 0;
    pdb_142dc7e2a(uVar9,uVar10);
LAB_140c4577f:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = param_4[1];
  uStack_4c = param_3;
  if (uVar10 == 0) {
    pbVar7 = (byte *)0x4;
    uVar6 = 0;
  }
  else {
    pdb_14007ee60();
    uVar9 = 4;
    pbVar7 = pub_1406abab0(uVar10,4);
    uVar6 = uVar8;
    if (pbVar7 == (byte *)0x0) goto LAB_140c45489;
  }
  if (uVar8 != 0) {
    pub_142e32760(pbVar7,lVar3,uVar10);
  }
  uStack_98 = plStack_58[4];
  uStack_90 = (byte *)plStack_58[5];
  uStack_88 = (byte *)plStack_58[6];
  uStack_80 = (longlong *)plStack_58[7];
  plStack_c0 = (longlong *)plStack_58[3];
  LOCK();
  lVar2 = *plStack_c0;
  *plStack_c0 = *plStack_c0 + 1;
  UNLOCK();
  if (*plStack_c0 == 0 || SCARRY8(lVar2,1) != *plStack_c0 < 0) goto LAB_140c4577f;
  uStack_98._4_4_ = (undefined4)((ulonglong)uStack_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_88._4_4_ = (undefined4)((ulonglong)uStack_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_b8 = (int)uStack_98;
  uStack_b4 = uStack_98._4_4_;
  uStack_b0 = (undefined4)uStack_90;
  uStack_ac = uStack_90._4_4_;
  uStack_a8 = (undefined4)uStack_88;
  uStack_a4 = uStack_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  uStack_49 = 1;
  uStack_4a = 1;
  uStack_4b = 0;
  uVar10 = CONCAT71((int7)((ulonglong)lVar3 >> 8),uStack_4c);
  uStack_d8 = uVar6;
  pbStack_d0 = pbVar7;
  uStack_c8 = uVar8;
  pdb_1417bbed0(&uStack_98,param_1,param_2,uVar10 & 0xffffffff,&uStack_d8);
  if (!SBORROW8(0,uStack_98)) {
    if (uStack_98 != 0) {
      pub_1406abac0(uStack_90,uStack_98 * 0x24,4);
    }
    LOCK();
    *uStack_80 = *uStack_80 + -1;
    UNLOCK();
    if (*uStack_80 == 0) {
      uStack_49 = 1;
      uStack_4a = 1;
      uStack_4b = 0;
      pdb_140c7b7a0(&uStack_80);
    }
  }
  uStack_d8 = *param_5;
  pbStack_d0 = (byte *)param_5[1];
  uStack_c8 = param_5[2];
  plStack_c0 = (longlong *)param_5[3];
  uStack_b8 = (undefined4)param_5[4];
  uStack_b4 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_b0 = (undefined4)param_5[5];
  uStack_ac = *(undefined4 *)((longlong)param_5 + 0x2c);
  uStack_a8 = (undefined4)param_5[6];
  uStack_a4 = *(undefined4 *)((longlong)param_5 + 0x34);
  uStack_a0 = (undefined4)param_5[7];
  uStack_9c = *(undefined4 *)((longlong)param_5 + 0x3c);
  uStack_49 = 0;
  uStack_4a = 1;
  uStack_4b = 0;
  pdb_1417bbed0(&uStack_98,param_1 + 0x30,param_2,uVar10 & 0xffffffff,&uStack_d8);
  if (!SBORROW8(0,uStack_98)) {
    if (uStack_98 != 0) {
      pub_1406abac0(uStack_90,uStack_98 * 0x24,4);
    }
    LOCK();
    *uStack_80 = *uStack_80 + -1;
    UNLOCK();
    if (*uStack_80 == 0) {
      uStack_49 = 0;
      uStack_4a = 1;
      uStack_4b = 0;
      pdb_140c7b7a0(&uStack_80);
    }
  }
  uStack_d8 = *param_6;
  pbStack_d0 = (byte *)param_6[1];
  uStack_c8 = param_6[2];
  plStack_c0 = (longlong *)param_6[3];
  uStack_49 = 0;
  uStack_4a = 0;
  uStack_4b = 0;
  pdb_1417b9770(&uStack_98,param_1 + 0x60,param_2,uVar10 & 0xffffffff,&uStack_d8);
  if ((int)uStack_98 == 1) {
    if (uStack_90 == (byte *)0x0) goto LAB_140c456d6;
    pbVar7 = (byte *)((longlong)uStack_90 * 0xc);
    uVar8 = 4;
  }
  else {
    if (((int)uStack_98 != 0) || (uStack_90 == (byte *)0x0)) goto LAB_140c456d6;
    uVar8 = 1;
    pbVar7 = uStack_90;
  }
  pub_1406abac0(uStack_88,(ulonglong)pbVar7,uVar8);
LAB_140c456d6:
  uStack_c8 = param_7[2];
  uStack_d8 = *param_7;
  pbStack_d0 = (byte *)param_7[1];
  uStack_49 = 0;
  uStack_4a = 0;
  uStack_4b = 1;
  pdb_1417b2fb0(&uStack_98,param_1 + 0x90,param_2,uVar10 & 0xffffffff,&uStack_d8);
  if ((-1 < uStack_98) && (uStack_98 != 0)) {
    pub_1406abac0(uStack_90,uStack_98 * 0xc,4);
  }
  plVar1 = plStack_58 + 3;
  if (*plStack_58 != 0) {
    pub_1406abac0((byte *)plStack_58[1],*plStack_58 * 0x24,4);
  }
  plVar4 = (longlong *)*plVar1;
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    pdb_140c7b7a0(plVar1);
  }
  return;
}

