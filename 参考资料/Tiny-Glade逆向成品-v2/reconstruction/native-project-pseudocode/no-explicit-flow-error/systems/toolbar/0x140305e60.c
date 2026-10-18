// VA 0x140305e60, PDB extent 535 bytes
// toolbar::mei::core::NodeContext::with<tiny_glade::gui::language_menu::do_gui_language_menu::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::with<tiny_glade::gui::language_menu::do_gui_language_menu::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 535 */

void pdb_140305e60(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong arg0;
  ulonglong arg1;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_98 [24];
  longlong alStack_80 [3];
  undefined1 *puStack_68;
  byte *pbStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar1 = ((longlong *)*param_3)[1];
  puStack_58 = param_1;
  puStack_50 = param_2;
  if (lVar1 != 0) {
    puVar9 = *(undefined8 **)*param_3;
    puVar8 = puVar9 + lVar1 * 4;
    puStack_68 = (undefined1 *)param_3[1];
    puVar2 = (ulonglong *)param_3[2];
    do {
      uVar3 = puVar9[2];
      arg0 = puVar9[3];
      pdb_1407339e0(alStack_80,puStack_50,*puVar9,puVar9[1]);
      pdb_140726140(auStack_98,alStack_80,700);
      pdb_140725f10(alStack_80,auStack_98,0xffffffa0);
      uVar6 = pdb_140725900(alStack_80);
      cVar5 = pdb_140732b50(uVar6);
      if (cVar5 != '\0') {
        alStack_80[0] = pdb_140dc5440(uVar3,arg0);
        if (alStack_80[0] != 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_142f3b520,0x2b,alStack_80,&UNK_142f3b500,&UNK_142f3b418);
        }
        *puStack_68 = 1;
        if ((longlong)arg0 < 0) {
          pdb_142dc7e2a(0,pbStack_60);
          break;
        }
        if (arg0 == 0) {
          pbVar7 = (byte *)0x1;
          arg1 = *puVar2;
        }
        else {
          pdb_14007ee60();
          pbVar7 = pub_1406abab0(arg0,1);
          if (pbVar7 == (byte *)0x0) {
            pdb_142dc7e2a(1,arg0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pub_142e32760(pbVar7,uVar3,arg0);
          arg1 = *puVar2;
        }
        if ((!SBORROW8(0,arg1)) && (arg1 != 0)) {
          pub_1406abac0((byte *)puVar2[1],arg1,1);
        }
        *puVar2 = arg0;
        puVar2[1] = (ulonglong)pbVar7;
        puVar2[2] = arg0;
        pbStack_60 = pbVar7;
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar8);
  }
  puStack_58[2] = puStack_50[2];
  uVar3 = puStack_50[1];
  *puStack_58 = *puStack_50;
  puStack_58[1] = uVar3;
  return;
}

