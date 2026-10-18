// VA 0x140b80fb0, PDB extent 864 bytes
// country_core::systems::save::save_game::add_history_edit_to_save_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::add_history_edit_to_save_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 864 */

undefined8 pdb_140b80fb0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte **ppbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  lVar7 = param_3[2];
  if (lVar7 == *param_3) {
    pdb_142db0920(param_3);
  }
  *(undefined8 *)(param_3[1] + lVar7 * 8) = uVar2;
  param_3[2] = lVar7 + 1;
  if (lVar7 != 0) {
    uVar3 = *(ulonglong *)(lVar1 + 0x38);
    uVar8 = uVar3 + 2;
    uVar5 = 0xffffffffffffffff;
    if (uVar3 < 0xfffffffffffffffe) {
      uVar5 = uVar8;
    }
    if (*(ulonglong *)(lVar1 + 0x20) < uVar5) {
      lVar7 = *(longlong *)(lVar1 + 0x30);
      if (uVar5 - lVar7 <= *(ulonglong *)(lVar1 + 0x20) - lVar7) goto LAB_140b81030;
      pdb_142d7f1b0(lVar1 + 0x20,lVar7,uVar5 - lVar7,1,1);
      uVar5 = *(ulonglong *)(lVar1 + 0x30);
      if (uVar3 <= uVar5) goto LAB_140b81083;
LAB_140b8103c:
      lVar7 = *(longlong *)(lVar1 + 0x28);
      pub_142e32780(uVar5 + lVar7,0);
      *(ulonglong *)(lVar1 + 0x30) = uVar3;
      *(undefined2 *)(lVar7 + uVar3) = 0xa2c;
      uVar5 = uVar3;
    }
    else {
LAB_140b81030:
      uVar5 = *(ulonglong *)(lVar1 + 0x30);
      if (uVar5 < uVar3) goto LAB_140b8103c;
LAB_140b81083:
      *(undefined2 *)(*(longlong *)(lVar1 + 0x28) + uVar3) = 0xa2c;
    }
    if (uVar5 < uVar8) {
      *(ulonglong *)(lVar1 + 0x30) = uVar8;
    }
    *(ulonglong *)(lVar1 + 0x38) = uVar8;
    pdb_140c6db50(lVar1,uVar3,uVar8);
  }
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x80,1);
  if (pbVar4 == (byte *)0x0) {
    pbStack_48 = (byte *)pdb_142dc7e2a(1,0x80);
  }
  else {
    pbStack_60 = (byte *)0x80;
    uStack_50 = 0;
    ppbStack_70 = &pbStack_60;
    pbStack_58 = pbVar4;
    pbStack_48 = (byte *)pdb_14198c720(param_2,&ppbStack_70);
    uVar3 = uStack_50;
    if (pbStack_48 == (byte *)0x0) {
      pbStack_48 = pbStack_58;
      pbStack_68 = pbStack_60;
      if (!SBORROW8(0,(longlong)pbStack_60)) {
        uVar5 = *(ulonglong *)(lVar1 + 0x38);
        uVar6 = uVar5 + uStack_50;
        uVar8 = 0xffffffffffffffff;
        if (!CARRY8(uVar5,uStack_50)) {
          uVar8 = uVar6;
        }
        if (*(ulonglong *)(lVar1 + 0x20) < uVar8) {
          lVar7 = *(longlong *)(lVar1 + 0x30);
          if (*(ulonglong *)(lVar1 + 0x20) - lVar7 < uVar8 - lVar7) {
            pdb_142d7f1b0(lVar1 + 0x20,lVar7,uVar8 - lVar7,1,1);
          }
        }
        uVar8 = *(ulonglong *)(lVar1 + 0x30);
        if (uVar8 < uVar5) {
          lVar7 = *(longlong *)(lVar1 + 0x28);
          pub_142e32780(uVar8 + lVar7,0);
          *(ulonglong *)(lVar1 + 0x30) = uVar5;
          uVar8 = uVar5;
        }
        else {
          lVar7 = *(longlong *)(lVar1 + 0x28);
        }
        pub_142e32760(lVar7 + uVar5,pbStack_48,uVar3);
        if (uVar8 < uVar6) {
          *(ulonglong *)(lVar1 + 0x30) = uVar6;
        }
        *(ulonglong *)(lVar1 + 0x38) = uVar6;
        pdb_140c6db50(lVar1,uVar5,uVar6);
        if (pbStack_68 != (byte *)0x0) {
          pub_1406abac0(pbStack_48,(ulonglong)pbStack_68,1);
        }
        return 0;
      }
      goto LAB_140b81213;
    }
  }
  if (pbStack_60 != (byte *)0x0) {
    pub_1406abac0(pbStack_58,(ulonglong)pbStack_60,1);
  }
LAB_140b81213:
  pbStack_60 = pbStack_48;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14305d3a8,0x2b,&pbStack_60,&UNK_14305d388,&UNK_14305cf30);
}

