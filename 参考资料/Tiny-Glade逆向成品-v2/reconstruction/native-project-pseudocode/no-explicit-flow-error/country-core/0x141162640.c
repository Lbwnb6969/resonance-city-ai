// VA 0x141162640, PDB extent 2212 bytes
// country_core::startup::startup_session::copy_dir_all<std::path::PathBuf,std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::startup_session::copy_dir_all<std::path::PathBuf,std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_session.rs
   Extent: 2212 */

ulonglong pdb_141162640(ulonglong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *arg0;
  ulonglong uVar4;
  int aiStack_800 [2];
  longlong *plStack_7f8;
  ulonglong uStack_7f0;
  undefined1 auStack_7e8 [584];
  longlong *plStack_5a0;
  ulonglong uStack_598;
  undefined1 auStack_590 [31];
  byte bStack_571;
  longlong lStack_348;
  ulonglong uStack_340;
  longlong *aplStack_338 [76];
  ulonglong uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  ulonglong *puStack_78;
  ulonglong *puStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_348 = CONCAT71(lStack_348._1_7_,1);
  pbStack_60 = (byte *)param_2[1];
  uVar4 = param_2[2];
  uStack_49 = 1;
  puStack_78 = param_1;
  puStack_70 = param_2;
  uVar2 = pdb_140f46c40(&lStack_348,pbStack_60,uVar4);
  if (uVar2 == 0) {
    pbStack_58 = (byte *)*puStack_78;
    pbStack_68 = (byte *)puStack_78[1];
    pdb_140f4f710(&lStack_348,pbStack_68,puStack_78[2]);
    lVar3 = lStack_348;
    if (lStack_348 != 2) {
      pub_142e32760(aiStack_800,aplStack_338,0x260);
    }
    if (pbStack_58 != (byte *)0x0) {
      pub_1406abac0(pbStack_68,(ulonglong)pbStack_58,1);
    }
    uVar2 = uStack_340;
    if ((int)lVar3 != 2) {
      pub_142e32760(aplStack_338,aiStack_800,0x260);
      lStack_348 = lVar3;
      while( true ) {
        pdb_140f59fa0(aiStack_800,&lStack_348);
        uVar2 = uStack_7f0;
        plVar1 = plStack_7f8;
        if (aiStack_800[0] != 1) {
          if (lStack_348 != 0) {
            pdb_140f590a0(&uStack_340);
          }
          LOCK();
          *aplStack_338[0] = *aplStack_338[0] + -1;
          UNLOCK();
          if (*aplStack_338[0] == 0) {
            uStack_49 = 0;
            pdb_140cd0de0(aplStack_338);
          }
          if (*puStack_70 != 0) {
            pub_1406abac0(pbStack_60,*puStack_70,1);
          }
          return 0;
        }
        if (plStack_7f8 == (longlong *)0x0) break;
        pub_142e32760(auStack_590,auStack_7e8,0x248);
        plStack_5a0 = plVar1;
        uStack_598 = uVar2;
        if (((uVar2 & 0x10) == 0) || ((uVar2 & 0x400) != 0 && (bStack_571 & 0x20) != 0)) {
          pdb_140f46b10(&uStack_b8,&plStack_5a0);
          uStack_4a = 1;
          pdb_140f46c20(&uStack_98,&plStack_5a0);
          pbStack_58 = pbStack_90;
          pdb_140f3e9e0(&uStack_d8,pbStack_60,uVar4,pbStack_90,uStack_88);
          if (uStack_98 != 0) {
            pub_1406abac0(pbStack_58,uStack_98,1);
          }
          pbStack_58 = pbStack_b0;
          pbStack_68 = pbStack_d0;
          uVar2 = uStack_a8;
          lVar3 = pdb_140f4f180(pbStack_b0,uStack_a8,pbStack_d0,uStack_c8);
          if (uStack_d8 != 0) {
            pub_1406abac0(pbStack_68,uStack_d8,1);
          }
          if (uStack_b8 != 0) {
            pub_1406abac0(pbStack_58,uStack_b8,1);
          }
          if (lVar3 == 1) goto LAB_141162a22;
        }
        else {
          pdb_140f46b10(&uStack_b8,&plStack_5a0);
          uStack_4b = 1;
          pdb_140f46c20(&uStack_98,&plStack_5a0);
          pbStack_58 = pbStack_90;
          pdb_140f3e9e0(&uStack_d8,pbStack_60,uVar4,pbStack_90,uStack_88);
          if (uStack_98 != 0) {
            pub_1406abac0(pbStack_58,uStack_98,1);
          }
          uStack_4b = 0;
          uVar2 = pdb_141162640(&uStack_b8,&uStack_d8);
          if (uVar2 != 0) {
LAB_141162a22:
            LOCK();
            *plStack_5a0 = *plStack_5a0 + -1;
            UNLOCK();
            if (*plStack_5a0 == 0) {
              pdb_140cd0de0(&plStack_5a0);
            }
            break;
          }
        }
        LOCK();
        *plStack_5a0 = *plStack_5a0 + -1;
        UNLOCK();
        if (*plStack_5a0 == 0) {
          pdb_140cd0de0(&plStack_5a0);
        }
      }
      if (lStack_348 != 0) {
        pdb_140f590a0(&uStack_340);
      }
      LOCK();
      *aplStack_338[0] = *aplStack_338[0] + -1;
      UNLOCK();
      if (*aplStack_338[0] == 0) {
        uStack_49 = 0;
        pdb_140cd0de0(aplStack_338);
      }
    }
    uVar4 = *puStack_70;
    arg0 = pbStack_60;
    if (uVar4 == 0) {
      return uVar2;
    }
  }
  else {
    if (*puStack_70 != 0) {
      pub_1406abac0(pbStack_60,*puStack_70,1);
    }
    uVar4 = *puStack_78;
    if (uVar4 == 0) {
      return uVar2;
    }
    arg0 = (byte *)puStack_78[1];
  }
  pub_1406abac0(arg0,uVar4,1);
  return uVar2;
}

