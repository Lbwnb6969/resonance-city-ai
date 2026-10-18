// VA 0x14016ae10, PDB extent 995 bytes
// tiny_glade::crash_pickup::client::start
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/client.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::crash_pickup::client::start
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/client.rs
   Extent: 995 */

undefined8 *
pdb_14016ae10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 auStack_90 [3];
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar9 = param_3;
  lVar3 = pdb_1400c9df0(param_2);
  if (lVar3 == 1) {
    uVar8 = 0xffffffffffffffce;
    do {
      uStack_70 = (byte *)0x1;
      uVar8 = uVar8 + 0x32;
      if (param_4 <= uVar8) {
        param_1[4] = uStack_50;
        param_1[2] = uStack_60;
        param_1[3] = uStack_58;
        *param_1 = 1;
        param_1[1] = uVar9;
        return param_1;
      }
      uStack_68 = (longlong *)uVar9;
      pdb_140f502d0(0,50000000);
      pdb_14016d140(&uStack_70);
      uVar9 = param_3;
      uVar4 = pdb_1400c9df0();
    } while ((uVar4 & 1) != 0);
  }
  uStack_70 = (byte *)0x1;
  uStack_68 = (longlong *)0x1;
  uStack_60 = uVar9;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x18,8);
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  *(undefined8 *)(pbVar5 + 0x10) = uStack_60;
  *(undefined4 *)pbVar5 = (undefined4)uStack_70;
  *(undefined4 *)(pbVar5 + 4) = uStack_70._4_4_;
  *(undefined4 *)(pbVar5 + 8) = (undefined4)uStack_68;
  *(undefined4 *)(pbVar5 + 0xc) = uStack_68._4_4_;
  LOCK();
  lVar3 = *(longlong *)pbVar5;
  *(longlong *)pbVar5 = *(longlong *)pbVar5 + 1;
  UNLOCK();
  pbStack_48 = pbVar5;
  if (*(longlong *)pbVar5 != 0 && SCARRY8(lVar3,1) == *(longlong *)pbVar5 < 0) {
    auStack_90[0] = 0x8000000000000000;
    uVar9 = 0;
    pdb_1402282f0(&uStack_70,auStack_90,0);
    plVar2 = (longlong *)uStack_70;
    if (uStack_70 == (byte *)0x0) {
      uStack_70 = (byte *)uStack_68;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f88ab0,0x16,&uStack_70,&UNK_142f88d08,&UNK_142f88b40,uVar9,pbVar5,
                    param_6);
    }
    CloseHandle();
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140f4a410(&uStack_70);
    }
    LOCK();
    *uStack_68 = *uStack_68 + -1;
    UNLOCK();
    if (*uStack_68 == 0) {
      pdb_140f4a2d0(&uStack_68);
    }
    pbVar5 = pbStack_48;
    LOCK();
    lVar3 = *(longlong *)pbStack_48;
    *(longlong *)pbStack_48 = *(longlong *)pbStack_48 + 1;
    UNLOCK();
    if (*(longlong *)pbStack_48 != 0 && SCARRY8(lVar3,1) == *(longlong *)pbStack_48 < 0) {
      uStack_70 = pbStack_48;
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(8,8);
      if (pbVar6 != (byte *)0x0) {
        *(byte **)pbVar6 = pbVar5;
        puVar7 = &UNK_142e4f018;
        lVar3 = pdb_1407eef60(pbVar6);
        if (lVar3 == 3) {
          param_1[1] = pbStack_48;
          *param_1 = 10;
        }
        else {
          param_1[1] = lVar3;
          param_1[2] = puVar7;
          *param_1 = 7;
          LOCK();
          *(longlong *)pbStack_48 = *(longlong *)pbStack_48 + -1;
          UNLOCK();
          if (*(longlong *)pbStack_48 == 0) {
            pdb_140315650(&pbStack_48);
          }
        }
        return param_1;
      }
      pbStack_78 = pbVar5;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

