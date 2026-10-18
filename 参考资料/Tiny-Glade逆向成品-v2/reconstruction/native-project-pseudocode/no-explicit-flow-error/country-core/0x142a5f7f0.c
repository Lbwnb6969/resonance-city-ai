// VA 0x142a5f7f0, PDB extent 428 bytes
// speedy::readable_impl::impl$7::read_from<speedy::context::LittleEndian,speedy::readable::StreamReader<speedy::context::LittleEndian,std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   speedy::readable_impl::impl$7::read_from<speedy::context::LittleEndian,speedy::readable::StreamReader<speedy::context::LittleEndian,std::fs::File>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 428 */

void pdb_142a5f7f0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte *arg1;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined1 uVar6;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  int aiStack_68 [2];
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if ((ulonglong)param_2[3] < 4) {
    pdb_140e21010(&pbStack_80,param_2,&uStack_34,4);
    if (pbStack_80 == (byte *)0x10) goto LAB_142a5f896;
LAB_142a5f8b8:
    param_1[1] = pbStack_80;
    param_1[2] = pbStack_78;
    uVar3 = 1;
    lVar5 = 0x18;
    pbVar4 = pbStack_70;
  }
  else {
    uVar1 = param_2[2];
    arg1 = (byte *)(uVar1 + 4);
    if (arg1 < (byte *)param_2[1]) {
      uVar6 = uVar1 < 0xfffffffffffffffb;
      if (uVar1 < 0xfffffffffffffffc) {
        uStack_34 = *(undefined4 *)(*param_2 + uVar1);
        param_2[2] = (longlong)arg1;
        lVar5 = param_2[3] - 4;
        param_2[3] = lVar5;
        if (lVar5 == 0) {
          param_2[2] = 0;
        }
        goto LAB_142a5f896;
      }
      pdb_142dc8420();
    }
    else {
      pdb_141e74230(param_2,&uStack_34,4);
LAB_142a5f896:
      pdb_142a60020(aiStack_68,param_2,uStack_34);
      pbStack_80 = pbStack_60;
      pbStack_78 = pbStack_58;
      pbStack_70 = pbStack_50;
      if (aiStack_68[0] == 1) goto LAB_142a5f8b8;
      pbStack_48 = pbStack_60;
      pbStack_40 = pbStack_58;
      pdb_140f69110(aiStack_68,pbStack_58,pbStack_50);
      pbVar4 = pbStack_48;
      pbVar2 = pbStack_40;
      if (((char)aiStack_68[0] == '\0') ||
         (uVar6 = pbStack_48 != (byte *)0x0, pbVar4 = pbStack_40, pbVar2 = pbStack_50,
         arg1 = pbStack_48, pbStack_50 = pbStack_60, SBORROW8(0,(longlong)pbStack_48))) {
        param_1[1] = pbVar4;
        param_1[2] = pbVar2;
        lVar5 = 0x18;
        uVar3 = 0;
        pbVar4 = pbStack_50;
        goto LAB_142a5f919;
      }
    }
    uVar3 = 1;
    pbVar4 = (byte *)0x2;
    lVar5 = 8;
    if ((bool)uVar6) {
      pub_1406abac0(pbStack_40,(ulonglong)arg1,1);
    }
  }
LAB_142a5f919:
  *(byte **)((longlong)param_1 + lVar5) = pbVar4;
  *param_1 = uVar3;
  return;
}

