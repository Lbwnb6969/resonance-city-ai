// RVA 0x3e76c0 | Placemaker.Ui.UiScaler$$GetDefaultAntiAliasing
// PDB: UiScaler_GetDefaultAntiAliasing_m76C5DE1458909EEF8A4FE54201B6E9D858B76755
// Body: [[103e76c0, 103e7710]]
// Direct callees:
// 10667770 Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55

int __cdecl
UiScaler_GetDefaultAntiAliasing_m76C5DE1458909EEF8A4FE54201B6E9D858B76755(MethodInfo *param_1)

{
  float fVar1;

  fVar1 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
  if (fVar1 <= __real_43b40000) {
    fVar1 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
    return (uint)(fVar1 <= __real_43340000) * 2 + 2;
  }
  return 1;
}
