// VA 0x141162f00, PDB extent 443 bytes
// country_core::resources::critters::BirdSpotManager::create_spots
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::critters::BirdSpotManager::create_spots
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
   Extent: 443 */

ulonglong * pdb_141162f00(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined *puStack_68;
  code *pcStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar1 = param_3[2];
  if (uVar1 < *param_3) {
    pbStack_58 = (byte *)param_3[1];
    pbStack_50 = (byte *)(*param_3 * 0x18);
    if (uVar1 == 0) {
      pbVar4 = (byte *)0x8;
      pub_1406abac0(pbStack_58,(ulonglong)pbStack_50,8);
    }
    else {
      pbVar4 = pub_1406abad0(pbStack_58,(ulonglong)pbStack_50,8,uVar1 * 0x18);
      if (pbVar4 == (byte *)0x0) {
        pdb_142dc7e2a(8,uVar1 * 0x18);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
  }
  else {
    pbVar4 = (byte *)param_3[1];
  }
  uVar2 = *param_2;
  do {
    lVar5 = *(longlong *)(uVar2 + 8);
    while (lVar5 != -1) {
      if (lVar5 < 0) {
        puStack_68 = &UNK_1430739f8;
        pcStack_60 = pdb_1402ed400;
        pbStack_58 = (byte *)uVar1;
        pbStack_50 = pbVar4;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143073a08,&puStack_68,&UNK_143073c60);
      }
      LOCK();
      lVar6 = *(longlong *)(uVar2 + 8);
      bVar7 = lVar5 == lVar6;
      if (bVar7) {
        *(longlong *)(uVar2 + 8) = lVar5 + 1;
        lVar6 = lVar5;
      }
      UNLOCK();
      lVar5 = lVar6;
      if (bVar7) {
        *param_1 = (ulonglong)pbVar4;
        param_1[1] = uVar1;
        param_1[2] = uVar2;
        return param_1;
      }
    }
  } while( true );
}

