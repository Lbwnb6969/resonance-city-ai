// VA 0x140b35590, PDB extent 780 bytes
// async_channel::impl$30::poll_with_strategy<enum2$<core::result::Result<alloc::sync::Arc<asset::texture::blob::TextureAssetBlob,alloc::alloc::Global>,turbosloth::asset::AssetBuildError> >,event_listener_strategy::NonBlocking>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   async_channel::impl$30::poll_with_strategy<enum2$<core::result::Result<alloc::sync::Arc<asset::texture::blob::TextureAssetBlob,alloc::alloc::Global>,turbosloth::asset::AssetBuildError>
   >,event_listener_strategy::NonBlocking>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 780 */

undefined8 *
pdb_140b35590(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  char cStack_80;
  char cStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_58 = param_2 + 1;
  do {
    lVar2 = *(longlong *)*param_2;
    if (*(longlong *)(lVar2 + 0x80) == 0) {
      uVar4 = 2;
      uVar7 = 1;
      while( true ) {
        LOCK();
        uVar1 = *(ulonglong *)(lVar2 + 0xa8);
        bVar8 = uVar4 == uVar1;
        if (bVar8) {
          *(ulonglong *)(lVar2 + 0xa8) = uVar7;
          uVar1 = uVar4;
        }
        uVar4 = uVar1;
        UNLOCK();
        if (bVar8) {
          uStack_78 = *(undefined8 *)(lVar2 + 0x88);
          uStack_70 = *(undefined8 *)(lVar2 + 0x90);
          uStack_68 = *(undefined8 *)(lVar2 + 0x98);
          uStack_60 = *(undefined8 *)(lVar2 + 0xa0);
          LOCK();
          *(ulonglong *)(lVar2 + 0xa8) = *(ulonglong *)(lVar2 + 0xa8) & 0xfffffffffffffffe;
          UNLOCK();
          cStack_80 = '\0';
          goto LAB_140b3574a;
        }
        if ((uVar4 & 2) == 0) break;
        if ((uVar4 & 1) != 0) {
          pdb_140f502e0();
          uVar4 = uVar4 & 0xfffffffffffffffe;
        }
        uVar7 = (uVar4 & 0xfffffffffffffffc) + 1;
      }
      cStack_7f = (uVar4 & 4) != 0;
      cStack_80 = '\x01';
    }
    else {
      if ((int)*(longlong *)(lVar2 + 0x80) == 1) {
        pdb_140beaea0();
      }
      else {
        pdb_141af22c0(&cStack_80,lVar2 + 0x100);
      }
      if (cStack_80 != '\x01') {
LAB_140b3574a:
        uVar6 = pdb_1406d0830(1);
        pdb_142d90050(lVar2 + 0x280,uVar6);
        param_1[3] = uStack_68;
        param_1[4] = uStack_60;
        param_1[1] = uStack_78;
        param_1[2] = uStack_70;
        *param_1 = 0;
        return param_1;
      }
    }
    if (cStack_7f != '\0') {
      *param_1 = 1;
      return param_1;
    }
    if (param_2[1] == 0) {
      pbVar5 = (byte *)pdb_142deb570(*(longlong *)*param_2 + 0x288);
      if (param_2[1] != 0) {
        pbStack_50 = pbVar5;
        pdb_14097dfb0(param_2 + 1);
        pbVar5 = pbStack_50;
      }
    }
    else {
      cVar3 = pdb_1417efd00(param_2[1],param_4);
      if (cVar3 != '\0') {
        *param_1 = 2;
        return param_1;
      }
      pbStack_50 = (byte *)param_2[1];
      pdb_140974580();
      pub_1406abac0(pbStack_50,0x38,8);
      pbVar5 = (byte *)0x0;
    }
    param_2[1] = pbVar5;
  } while( true );
}

