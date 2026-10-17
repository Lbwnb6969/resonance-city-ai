// RVA 0x3e7720 | Placemaker.Ui.UiScaler$$GetScale
// PDB: UiScaler_GetScale_m37007E390C6AB42B25FD765FC112D15BE2D84DB9
// Body: [[103e7720, 103e777a]]
// Direct callees:
// 10667770 Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55
// 10a44170 Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14

float __cdecl UiScaler_GetScale_m37007E390C6AB42B25FD765FC112D15BE2D84DB9(MethodInfo *param_1)

{
  float fVar1;

  fVar1 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
  if (__real_42f00000 <= fVar1) {
    fVar1 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                      (3.0,(fVar1 / __real_42f00000) * __real_3f4ccccd + __real_3e4ccccd,
                       (MethodInfo *)0x0);
    return fVar1;
  }
  return 1.0;
}
