// VA 0x1414d2710, PDB extent 1254 bytes
// tg_mods::overlay::read_dir_files::closure$0<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::read_dir_files::closure$0<ref$<str$> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 1254 */

void pdb_1414d2710(undefined8 param_1)

{
  code *pcVar1;
  ulonglong arg1;
  byte *arg0;
  undefined8 uVar2;
  byte *pbVar3;
  char cStack_a10;
  undefined7 uStack_a0f;
  byte *pbStack_a08;
  byte *pbStack_a00;
  int iStack_7b8;
  undefined4 uStack_7b4;
  byte *pbStack_7b0;
  longlong *aplStack_7a8 [76];
  longlong *plStack_548;
  uint auStack_540 [9];
  byte bStack_519;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  undefined8 auStack_2e0 [76];
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f4f710(&iStack_7b8);
  if (iStack_7b8 == 2) {
    pbStack_2e8 = pbStack_7b0;
    pbStack_2f0 = (byte *)0x2;
  }
  else {
    pub_142e32760(&pbStack_2f0,&iStack_7b8,0x270);
    if (pbStack_2f0 != (byte *)0x2) {
      pub_142e32760(&iStack_7b8,&pbStack_2f0,0x270);
      do {
        while( true ) {
          while( true ) {
            pdb_140f59fa0(&pbStack_2f0,&iStack_7b8);
            if ((int)pbStack_2f0 != 1) {
              if (CONCAT44(uStack_7b4,iStack_7b8) != 0) {
                pdb_140f590a0(&pbStack_7b0);
              }
              LOCK();
              *aplStack_7a8[0] = *aplStack_7a8[0] + -1;
              UNLOCK();
              if (*aplStack_7a8[0] != 0) {
                return;
              }
              pdb_140cd0de0(aplStack_7a8);
              return;
            }
            pub_142e32760(&cStack_a10,&pbStack_2e8,600);
            plStack_548 = (longlong *)CONCAT71(uStack_a0f,cStack_a10);
            if (plStack_548 != (longlong *)0x0) break;
            pdb_1404b38e0(&pbStack_a08);
          }
          pub_142e32760(auStack_540,auStack_2e0,0x250);
          if (((byte)auStack_540[0] >> 4 & 1) == 0 &&
              (byte)((byte)(auStack_540[0] >> 10) & (bStack_519 & 0x20) >> 5) == 0) break;
LAB_1414d2861:
          LOCK();
          *plStack_548 = *plStack_548 + -1;
          UNLOCK();
          if (*plStack_548 == 0) {
            pdb_140cd0de0(&plStack_548);
          }
        }
        pdb_140f46c20(&pbStack_2f0,&plStack_548);
        pbStack_60 = pbStack_2e8;
        pdb_140f69110(&cStack_a10,pbStack_2e8,auStack_2e0[0]);
        pbVar3 = pbStack_a00;
        if (cStack_a10 != '\0') {
          arg0 = pbStack_60;
          pbVar3 = pbStack_2f0;
          if (pbStack_2f0 != (byte *)0x0) {
LAB_1414d28d1:
            pub_1406abac0(arg0,(ulonglong)pbVar3,1);
          }
          goto LAB_1414d2861;
        }
        if ((longlong)pbStack_a00 < 0) {
          uVar2 = 0;
LAB_1414d2a40:
          pdb_142dc7e2a(uVar2,pbStack_58);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (pbStack_a00 == (byte *)0x0) {
          pbStack_58 = (byte *)0x1;
        }
        else {
          pbStack_68 = pbStack_a08;
          pdb_14007ee60();
          pbStack_58 = pub_1406abab0((ulonglong)pbVar3,1);
          if (pbStack_58 == (byte *)0x0) {
            uVar2 = 1;
            pbStack_58 = pbVar3;
            goto LAB_1414d2a40;
          }
          pub_142e32760(pbStack_58,pbStack_68,pbVar3);
        }
        if (pbStack_2f0 != (byte *)0x0) {
          pub_1406abac0(pbStack_60,(ulonglong)pbStack_2f0,1);
        }
        if ((pbVar3 != (byte *)0x0) && (arg0 = pbStack_58, *pbStack_58 == 0x2e)) goto LAB_1414d28d1;
        pbStack_80 = pbVar3;
        pbStack_70 = pbVar3;
        uStack_49 = 1;
        pbStack_78 = pbStack_58;
        pdb_140f46b10(&pbStack_2f0,&plStack_548);
        uStack_49 = 0;
        pdb_1414b4420(&cStack_a10,param_1,&pbStack_80,&pbStack_2f0);
        arg1 = CONCAT71(uStack_a0f,cStack_a10);
        if ((!SBORROW8(0,arg1)) && (arg1 != 0)) {
          pub_1406abac0(pbStack_a08,arg1,1);
        }
        LOCK();
        *plStack_548 = *plStack_548 + -1;
        UNLOCK();
        if (*plStack_548 == 0) {
          pdb_140cd0de0(&plStack_548);
        }
      } while( true );
    }
  }
  pdb_1404b38e0(&pbStack_2e8);
  return;
}

