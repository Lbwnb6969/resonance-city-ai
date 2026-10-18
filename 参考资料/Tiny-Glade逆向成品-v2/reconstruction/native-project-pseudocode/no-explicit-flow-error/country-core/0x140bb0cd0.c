// VA 0x140bb0cd0, PDB extent 78 bytes
// country_core::systems::wall::eraser::bulldoze_params::_::impl$0::init_access
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::bulldoze_params::_::impl$0::init_access
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
   Extent: 78 */

void pdb_140bb0cd0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_1a0 [112];
  undefined *puStack_130;
  undefined1 uStack_f9;
  longlong lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  longlong lStack_e0;
  code *pcStack_d8;
  longlong alStack_a8 [2];
  ulonglong uStack_98;
  longlong alStack_90 [2];
  ulonglong uStack_80;
  undefined *puStack_50;
  undefined8 uStack_40;
  
  puStack_50 = (undefined *)0x140bb0cf1;
  pdb_1416bdf70();
  puStack_50 = (undefined *)0x140bb0d02;
  pdb_1416bdf70(param_1 + 8,param_2,param_3,param_4);
  if ((*(char *)(param_3 + 0x93) == '\0') &&
     ((uVar3 = *(ulonglong *)(param_1 + 0x130), *(ulonglong *)(param_3 + 0x70) <= uVar3 ||
      ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0
      )))) {
    puStack_130 = &UNK_1416c765b;
    uStack_40 = unaff_RBX;
    pdb_140edd3c0(param_3);
    if ((*(char *)(param_3 + 0x93) == '\0') &&
       ((uVar3 = *(ulonglong *)(param_1 + 0x138), *(ulonglong *)(param_3 + 0x70) <= uVar3 ||
        ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) ==
         0)))) {
      puStack_130 = &UNK_1416c7696;
      pdb_140edd3c0(param_3);
      if ((*(char *)(param_3 + 0x93) != '\0') ||
         ((uVar3 = *(ulonglong *)(param_1 + 0x140), uVar3 < *(ulonglong *)(param_3 + 0x70) &&
          ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1)
           != 0)))) {
        lStack_e0 = param_2 + 4;
        puStack_f0 = &uStack_f9;
        pcStack_e8 = pdb_140f33ec0;
        pcStack_d8 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
        puStack_130 = &UNK_1416c796d;
        pdb_142dc83d0(&UNK_1433260d8,&puStack_f0,&UNK_143326180);
      }
      if ((*(char *)(param_3 + 0x92) != '\0') ||
         ((uVar3 < *(ulonglong *)(param_3 + 0x58) &&
          ((*(ulonglong *)(*(longlong *)(param_3 + 0x48) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1)
           != 0)))) {
        lStack_e0 = param_2 + 4;
        puStack_f0 = &uStack_f9;
        pcStack_e8 = pdb_140f33ec0;
        pcStack_d8 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
        puStack_130 = &UNK_1416c79a9;
        pdb_142dc83d0(&UNK_143326018,&puStack_f0,&UNK_1433260c0);
      }
      puStack_130 = &UNK_1416c7719;
      pdb_140edd4a0(param_3);
      puStack_130 = &UNK_1416c7727;
      pdb_1416bdf70(param_1 + 0x148,param_2,param_3);
      lStack_f8 = param_2 + 4;
      puStack_130 = &UNK_1416c7742;
      pdb_140f08360(lStack_f8,param_3,param_1 + 0x50,param_4);
      puStack_130 = &UNK_1416c7752;
      pdb_140edba60(&puStack_f0,param_1 + 0x50);
      puStack_130 = &UNK_1416c775d;
      pdb_140edd5d0(param_3,&puStack_f0);
      puStack_130 = &UNK_1416c776b;
      pdb_140c72060(param_1 + 0x150,param_2,param_3);
      puStack_130 = &UNK_1416c7779;
      pdb_1416bdf70(param_1 + 0x160,param_2,param_3);
      puStack_130 = &UNK_1416c7787;
      pdb_1416bdf70(param_1 + 0x168,param_2,param_3);
      if ((*(char *)(param_3 + 0x93) == '\0') &&
         ((uVar3 = *(ulonglong *)(param_1 + 0x170), *(ulonglong *)(param_3 + 0x70) <= uVar3 ||
          ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1)
           == 0)))) {
        puStack_130 = &UNK_1416c77c2;
        pdb_140edd3c0(param_3);
        if ((*(char *)(param_3 + 0x93) == '\0') &&
           ((uVar3 = *(ulonglong *)(param_1 + 0x178), *(ulonglong *)(param_3 + 0x70) <= uVar3 ||
            ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1
             ) == 0)))) {
          puStack_130 = &UNK_1416c77fd;
          pdb_140edd3c0(param_3);
          if ((*(char *)(param_3 + 0x93) == '\0') &&
             ((uVar3 = *(ulonglong *)(param_1 + 0x180), *(ulonglong *)(param_3 + 0x70) <= uVar3 ||
              ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) &
               1) == 0)))) {
            puStack_130 = &UNK_1416c7838;
            pdb_140edd3c0(param_3);
            if ((*(char *)(param_3 + 0x93) == '\0') &&
               ((uVar3 = *(ulonglong *)(param_1 + 0x188), *(ulonglong *)(param_3 + 0x70) <= uVar3 ||
                ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f)
                 & 1) == 0)))) {
              puStack_130 = &UNK_1416c7884;
              pdb_140edd3c0(param_3);
              puStack_130 = &UNK_1416c7896;
              pdb_1416be050(*(undefined8 *)(param_1 + 400),param_2,param_3);
              puStack_130 = &UNK_1416c78a4;
              pdb_1416bdf70(param_1 + 0x198,param_2,param_3);
              puStack_130 = &UNK_1416c78b2;
              pdb_1416bdf70(param_1 + 0x1a0,param_2,param_3);
              if ((*(char *)(param_3 + 0x93) != '\0') ||
                 ((uVar3 = *(ulonglong *)(param_1 + 0x1a8), uVar3 < *(ulonglong *)(param_3 + 0x70)
                  && ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >>
                       (uVar3 & 0x3f) & 1) != 0)))) {
                    /* WARNING: Subroutine does not return */
                puStack_50 = &UNK_1416be00c;
                pdb_142dc83d0(&UNK_1433260d8,&stack0xffffffffffffffe0,&UNK_143326180);
              }
              if ((*(char *)(param_3 + 0x92) == '\0') &&
                 ((*(ulonglong *)(param_3 + 0x58) <= uVar3 ||
                  ((*(ulonglong *)(*(longlong *)(param_3 + 0x48) + (uVar3 >> 6) * 8) >>
                    (uVar3 & 0x3f) & 1) == 0)))) {
                pdb_140edc2d0(&puStack_f0);
                uVar1 = uVar3 + 1;
                if (uStack_98 < uVar1) {
                  uStack_40 = CONCAT17(1,(undefined7)uStack_40);
                  pdb_142dc5e40(alStack_a8,uVar1,&UNK_143235d70);
                }
                uVar4 = 1L << ((byte)uVar3 & 0x3f);
                puVar2 = (ulonglong *)(alStack_a8[0] + (uVar3 >> 6) * 8);
                *puVar2 = *puVar2 | uVar4;
                if (uStack_80 < uVar1) {
                  uStack_40 = CONCAT17(1,(undefined7)uStack_40);
                  pdb_142dc5e40(alStack_90,uVar1,&UNK_143235d70);
                }
                puVar2 = (ulonglong *)(alStack_90[0] + (uVar3 >> 6) * 8);
                *puVar2 = *puVar2 | uVar4;
                pub_142e32760(auStack_1a0,&puStack_f0,0xb0);
                uStack_40 = uStack_40 & 0xffffffffffffff;
                pdb_140edd5d0(param_3,auStack_1a0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              puStack_50 = &UNK_1416be048;
              pdb_142dc83d0(&UNK_143326018,&stack0xffffffffffffffe0,&UNK_1433260c0);
            }
          }
        }
      }
      lStack_e0 = lStack_f8;
      goto code_r0x0001416c7914;
    }
  }
  lStack_e0 = param_2 + 4;
code_r0x0001416c7914:
  puStack_f0 = &uStack_f9;
  pcStack_e8 = pdb_140f33ec0;
  pcStack_d8 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  puStack_130 = &UNK_1416c7931;
  pdb_142dc83d0(&UNK_143325780,&puStack_f0,&UNK_143325890);
}

