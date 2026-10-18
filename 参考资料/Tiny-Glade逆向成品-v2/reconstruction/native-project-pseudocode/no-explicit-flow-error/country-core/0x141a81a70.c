// VA 0x141a81a70, PDB extent 944 bytes
// country_core::render::shadowed_buffer::ShadowedBuffer::grow<country_core::render::nani::instance_data::StairsFloorInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::shadowed_buffer::ShadowedBuffer::grow<country_core::render::nani::instance_data::StairsFloorInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
   Extent: 944 */

ulonglong *
pdb_141a81a70(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  ulonglong arg1;
  undefined8 uVar2;
  byte *arg0;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong *puStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = param_2[2];
  if (param_4 < uVar3 || param_4 - uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143382a98,0x2d,&UNK_143382ac8);
  }
  uVar2 = pdb_140e1d1f0(param_4 * 0x30,0x12,1);
  uVar2 = pdb_140e1d260(uVar2,8);
  pdb_1415d1d50(&uStack_c0,param_3,&UNK_143382c0e,0x17,uVar2,0);
  if (uStack_c0 == 0xb) {
    uStack_68 = (ulonglong)pbStack_b8;
    uStack_70 = (ulonglong)pbStack_b8;
    pbStack_b8 = (byte *)param_2[1];
    param_2[1] = 8;
    param_2[2] = 0;
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_c0 = uVar3;
    uStack_b0 = uVar3;
    puStack_58 = param_1;
    pdb_142d7f1b0(&uStack_c0,uVar3,param_4 - uVar3,8,0x30);
    uVar4 = uStack_b0;
    arg0 = pbStack_b8;
    pub_142e32780(pbStack_b8 + uStack_b0 * 0x30,0,param_4 * 0x30 + uVar3 * -0x30);
    uVar5 = (uVar4 + param_4) - uVar3;
    param_1 = puStack_58;
    if (uVar5 < uStack_c0) {
      pbStack_60 = arg0;
      arg1 = uStack_c0 * 0x30;
      if (uVar4 + param_4 == uVar3) {
        pub_1406abac0(arg0,arg1,8);
        param_1 = puStack_58;
        arg0 = (byte *)0x8;
      }
      else {
        arg0 = pub_1406abad0(arg0,arg1,8,uVar5 * 0x30);
        param_1 = puStack_58;
        if (arg0 == (byte *)0x0) {
          puStack_58 = (ulonglong *)arg1;
          pdb_142dc7e2a(8,uVar5 * 0x30);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
    }
    param_2[1] = (ulonglong)arg0;
    param_2[2] = uVar5;
    puStack_58 = param_2;
    pdb_140989660(param_2);
    *puStack_58 = uStack_68;
    LOCK();
    puStack_58[3] = 0;
    UNLOCK();
    param_4 = param_4 - 1;
    uVar3 = puStack_58[3];
    do {
      uVar4 = param_4;
      if (uVar3 <= param_4) {
        uVar4 = uVar3;
      }
      LOCK();
      uVar5 = puStack_58[3];
      bVar6 = uVar3 == uVar5;
      if (bVar6) {
        puStack_58[3] = uVar4;
        uVar5 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar5;
    } while (!bVar6);
    uVar3 = puStack_58[4];
    do {
      uVar4 = param_4;
      if (param_4 < uVar3) {
        uVar4 = uVar3;
      }
      LOCK();
      uVar5 = puStack_58[4];
      bVar6 = uVar3 == uVar5;
      if (bVar6) {
        puStack_58[4] = uVar4;
        uVar5 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar5;
    } while (!bVar6);
    *param_1 = 0xb;
  }
  else {
    param_1[8] = uStack_80;
    param_1[9] = uStack_78;
    param_1[6] = uStack_90;
    param_1[7] = uStack_88;
    param_1[4] = uStack_a0;
    param_1[5] = uStack_98;
    param_1[2] = uStack_b0;
    param_1[3] = uStack_a8;
    *param_1 = uStack_c0;
    param_1[1] = (ulonglong)pbStack_b8;
  }
  return param_1;
}

