// VA 0x140bf3a80, PDB extent 862 bytes
// country_core::resources::ivy::ivy_storage::IvyStorage::spawn_ivy
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::ivy::ivy_storage::IvyStorage::spawn_ivy
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ivy/ivy_storage.rs
   Extent: 862 */

void pdb_140bf3a80(longlong param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
                  float param_5,ulonglong param_6,ulonglong param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  byte *pbStack_1a0;
  ulonglong uStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_94;
  float fStack_90;
  undefined1 uStack_8c;
  ulonglong uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_78 = 0;
  uStack_68 = 0;
  pbStack_60 = (byte *)0x0;
  lStack_70 = 8;
  uStack_51 = 1;
  pdb_140929640(&uStack_78);
  pbStack_1a0 = (byte *)((longlong)pbStack_60 + 1);
  uVar3 = 0;
  if (uStack_78 <= (ulonglong)((longlong)pbStack_60 + uStack_68)) {
    uVar3 = uStack_78;
  }
  lVar5 = ((longlong)pbStack_60 + uStack_68) - uVar3;
  *(undefined8 *)(lStack_70 + lVar5 * 0x28) = 0;
  *(undefined8 *)(lStack_70 + 8 + lVar5 * 0x28) = *param_2;
  *(undefined4 *)(lStack_70 + 0x10 + lVar5 * 0x28) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lStack_70 + 0x14 + lVar5 * 0x28) = *param_3;
  *(undefined4 *)(lStack_70 + 0x1c + lVar5 * 0x28) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(lStack_70 + 0x20 + lVar5 * 0x28) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = uStack_78;
  lStack_80 = lStack_70;
  uStack_1a8 = (undefined4)uStack_68;
  uStack_1a4 = uStack_68._4_4_;
  pbStack_60 = pbStack_1a0;
  if (param_6 <= param_7) {
    lStack_c8 = pdb_141b1e510(param_1 + 0x30,param_7 - param_6);
    lStack_c8 = lStack_c8 + param_6;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)(param_1 + 0x30);
    uVar3 = SUB168(auVar2 * ZEXT816(0x4385df649fccf645),0);
    uVar6 = *(longlong *)(param_1 + 0x38) * 0x4385df649fccf645 +
            SUB168(auVar2 * ZEXT816(0x4385df649fccf645),8) +
            *(ulonglong *)(param_1 + 0x30) * 0x2360ed051fc65da4;
    *(ulonglong *)(param_1 + 0x38) = uVar6;
    uVar7 = uVar6 ^ uVar3;
    bVar4 = (byte)(uVar6 >> 0x3a);
    fVar8 = (float)(((uint)(uVar7 >> bVar4) | (uint)(uVar7 << 0x40 - bVar4)) >> 9 | 0x3f800000) +
            _DAT_142e36f34;
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    fStack_90 = (param_5 - param_4) * fVar8 + param_4;
    uStack_f0 = 0;
    uStack_e8 = *param_2;
    uStack_e0 = *(undefined4 *)(param_2 + 1);
    uStack_dc = *param_3;
    uStack_d4 = *(undefined4 *)(param_3 + 1);
    uStack_d0 = 0;
    uStack_118 = uStack_88;
    lStack_110 = lStack_80;
    uStack_108 = CONCAT44(uStack_1a4,uStack_1a8);
    pbStack_100 = pbStack_1a0;
    uStack_b0 = 0;
    uStack_94 = 0;
    uStack_c0 = 1;
    uStack_b8 = param_8;
    uStack_8c = 0;
    uStack_51 = 0;
    uStack_f8 = uVar1;
    pdb_1417b6dc0(&uStack_1a8,param_1,*(undefined8 *)(param_1 + 0x40),&uStack_118);
    lVar5 = CONCAT44(uStack_1a4,uStack_1a8);
    if ((!SBORROW8(0,lVar5)) && (lVar5 != 0)) {
      pub_1406abac0(pbStack_1a0,lVar5 * 0x28,8);
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1430309e3,0x1e,&UNK_143030a60);
}

