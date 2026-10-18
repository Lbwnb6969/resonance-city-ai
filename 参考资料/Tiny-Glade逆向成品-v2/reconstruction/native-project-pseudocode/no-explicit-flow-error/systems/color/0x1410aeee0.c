// VA 0x1410aeee0, PDB extent 418 bytes
// bevy_ecs::system::system_param::impl$110::validate_param<system_color::style_changes::StyleScene,bevy_ecs::change_detection::Res<country_core::resources::walls::cached_decorator_transforms::CachedDecoratorTransforms>,country_core::resources::walls::decorator_subtype::DerivedDecoratorInfoResources,bevy_ecs::change_detection::Res<country_core::systems::ui::signifiers::signifier_create::UiSignifierStream> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   bevy_ecs::system::system_param::impl$110::validate_param<system_color::style_changes::StyleScene,bevy_ecs::change_detection::Res<country_core::resources::walls::cached_decorator_transforms::CachedDecoratorTransforms>,country_core::resources::walls::decorator_subtype::DerivedDecoratorInfoResources,bevy_ecs::change_detection::Res<country_core::systems::ui::signifiers::signifier_create::UiSignifierStream>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/lib.rs
   Extent: 418 */

void pdb_1410aeee0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  pdb_1410ad170(&lStack_50);
  if (lStack_50 != -0x7fffffffffffffff) {
    param_1[6] = lStack_20;
    param_1[4] = lStack_30;
    param_1[5] = lStack_28;
    param_1[2] = lStack_40;
    param_1[3] = lStack_38;
    *param_1 = lStack_50;
    param_1[1] = lStack_48;
    return;
  }
  uVar1 = *(ulonglong *)(param_3 + 0x210);
  if (*(ulonglong *)(param_2 + 0x1c0) < uVar1) {
    lVar2 = *(longlong *)(param_3 + 0x208);
    uVar3 = *(ulonglong *)(lVar2 + *(ulonglong *)(param_2 + 0x1c0) * 8);
    if ((uVar3 != 0) &&
       (lVar4 = *(longlong *)(param_3 + 0x1d8), *(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
      puVar5 = &UNK_1432836d8;
      if ((*(ulonglong *)(param_2 + 0x1c8) < uVar1) &&
         ((uVar3 = *(ulonglong *)(lVar2 + *(ulonglong *)(param_2 + 0x1c8) * 8), uVar3 != 0 &&
          (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))) {
        puVar5 = &UNK_1432836e2;
        if ((*(ulonglong *)(param_2 + 0x1d0) < uVar1) &&
           ((uVar3 = *(ulonglong *)(lVar2 + *(ulonglong *)(param_2 + 0x1d0) * 8), uVar3 != 0 &&
            (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))) {
          if ((*(ulonglong *)(param_2 + 0x1d8) < uVar1) &&
             ((uVar1 = *(ulonglong *)(lVar2 + *(ulonglong *)(param_2 + 0x1d8) * 8), uVar1 != 0 &&
              (*(longlong *)(lVar4 + 0x20 + ~uVar1 * 0x40) != 0)))) {
            *param_1 = -0x7fffffffffffffff;
            return;
          }
          goto LAB_1410af010;
        }
      }
      *param_1 = -0x8000000000000000;
      param_1[1] = (longlong)&UNK_1432833d4;
      param_1[2] = 0x17;
      param_1[3] = -0x8000000000000000;
      param_1[4] = (longlong)puVar5;
      param_1[5] = 10;
      goto LAB_1410af044;
    }
  }
LAB_1410af010:
  *param_1 = -0x8000000000000000;
  param_1[1] = (longlong)&UNK_1432833d4;
  param_1[2] = 0x17;
  param_1[3] = -0x8000000000000000;
  param_1[4] = 1;
  param_1[5] = 0;
LAB_1410af044:
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

