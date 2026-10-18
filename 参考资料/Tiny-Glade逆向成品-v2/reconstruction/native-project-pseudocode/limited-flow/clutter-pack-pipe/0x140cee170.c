// VA 0x140cee170, PDB extent 1264 bytes
// clutter_pack_pipe::GlbImport::finish
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure: clutter_pack_pipe::GlbImport::finish
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 1264 */

void pdb_140cee170(undefined8 *param_1,undefined8 *param_2)

{
  byte *arg0;
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puStack_248;
  code *pcStack_240;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  longlong lStack_168;
  byte *pbStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 *puStack_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 *puStack_78;
  longlong lStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_78 = param_1;
  puStack_50 = param_2;
  if (param_2[2] == 0) {
    uVar3 = pdb_142df6340(&UNK_1430875e9,0x1f);
    puStack_78[1] = uVar3;
    *puStack_78 = 0x8000000000000000;
  }
  else {
    lStack_70 = 0;
    pbStack_68 = (byte *)0x4;
    uStack_60 = 0;
    puStack_88 = param_2 + 0x15;
    lStack_90 = param_2[0x17] * 0x3c + param_2[0x16];
    pbStack_58 = (byte *)0x4;
    uVar8 = 0;
    lVar5 = 0;
    lVar11 = param_2[0x16];
LAB_140cee21e:
    puVar1 = puStack_50;
    if (lVar11 != lStack_90) {
      uVar7 = uVar8 & 0xffffffff;
      lVar10 = puStack_50[0x10];
      lVar12 = puStack_50[0x11] * 0x20 + lVar10;
      do {
        do {
          lVar2 = lVar10;
          uVar6 = (uint)uVar7;
          if (lVar2 == lVar12) {
            *(uint *)(lVar11 + 0x34) = uVar6;
            *(int *)(lVar11 + 0x38) = (int)uVar8;
            lVar5 = lVar5 + 1;
            lVar11 = lVar11 + 0x3c;
            goto LAB_140cee21e;
          }
          lVar10 = lVar2 + 0x20;
        } while (*(longlong *)(lVar2 + 0x18) != lVar5);
        uStack_98 = *(undefined8 *)(lVar2 + 8);
        uVar7 = *(ulonglong *)(lVar2 + 0x10);
        uStack_7c = uVar6;
        if (lStack_70 - uVar8 < uVar7) {
          pdb_142d7f1b0(&lStack_70,uVar8,uVar7,4,4);
          pbStack_58 = pbStack_68;
          uVar8 = uStack_60;
LAB_140cee29b:
          pub_142e32760(pbStack_58 + uVar8 * 4,uStack_98,uVar7 * 4);
        }
        else if (uVar7 != 0) goto LAB_140cee29b;
        uVar8 = uVar8 + uVar7;
        uVar7 = (ulonglong)uStack_7c;
        uStack_60 = uVar8;
      } while( true );
    }
    lVar5 = 0;
    do {
      if (uVar8 * 4 == lVar5) {
        uStack_158 = uStack_60;
        lStack_168 = lStack_70;
        pbStack_160 = pbStack_68;
        uStack_140 = puStack_50[2];
        uStack_150 = *puStack_50;
        uStack_148 = puStack_50[1];
        uStack_128 = puStack_50[5];
        uStack_138 = puStack_50[3];
        uStack_130 = puStack_50[4];
        uStack_110 = puStack_50[8];
        uStack_120 = puStack_50[6];
        uStack_118 = puStack_50[7];
        uStack_f8 = puStack_50[0xb];
        uStack_108 = puStack_50[9];
        uStack_100 = puStack_50[10];
        uStack_e0 = puStack_50[0xe];
        uStack_f0 = puStack_50[0xc];
        uStack_e8 = puStack_50[0xd];
        uStack_c8 = puStack_88[2];
        uStack_d8 = *puStack_88;
        uStack_d0 = puStack_88[1];
        uStack_c0 = puStack_50[0x23];
        uStack_b8 = puStack_50[0x24];
        uStack_b0 = *(undefined4 *)(puStack_50 + 0x25);
        uStack_ac = *(undefined4 *)((longlong)puStack_50 + 300);
        uStack_a8 = *(undefined4 *)(puStack_50 + 0x26);
        uStack_170 = puStack_50[0x1d];
        uStack_180 = *(undefined4 *)(puStack_50 + 0x1b);
        uStack_17c = *(undefined4 *)((longlong)puStack_50 + 0xdc);
        uStack_178 = *(undefined4 *)(puStack_50 + 0x1c);
        uStack_174 = *(undefined4 *)((longlong)puStack_50 + 0xe4);
        pub_142e32760(&puStack_248,&lStack_168,200);
        pub_142e32760(puStack_78,&puStack_248,0xe0);
        arg0 = (byte *)puVar1[0x10];
        lVar5 = puVar1[0x11];
        if (lVar5 != 0) {
          pbVar9 = arg0 + 8;
          do {
            if (*(longlong *)(pbVar9 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar9,*(longlong *)(pbVar9 + -8) << 2,4);
            }
            pbVar9 = pbVar9 + 0x20;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (puStack_50[0xf] != 0) {
          pub_1406abac0(arg0,puStack_50[0xf] << 5,8);
        }
        puVar1 = puStack_50;
        if (puStack_50[0x12] != 0) {
          pub_1406abac0((byte *)puStack_50[0x13],puStack_50[0x12] * 0x18,8);
        }
        lVar5 = puVar1[0x18];
        if (lVar5 == 0) {
          return;
        }
        uVar3 = puVar1[0x19];
        uVar4 = GetProcessHeap(uVar3,lVar5 << 3);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar4,0,uVar3);
        return;
      }
      uStack_80 = *(uint *)(pbStack_58 + lVar5);
      lVar5 = lVar5 + 4;
    } while ((ulonglong)uStack_80 < (ulonglong)puStack_50[2]);
    puStack_248 = &uStack_80;
    pcStack_240 = pdb_140f71a50;
    uVar3 = pdb_142db1360(&UNK_1430875be,&puStack_248);
    puStack_78[1] = uVar3;
    *puStack_78 = 0x8000000000000000;
    if (lStack_70 != 0) {
      pub_1406abac0(pbStack_58,lStack_70 << 2,4);
    }
  }
  pdb_141d37ec0(puStack_50);
  return;
}

