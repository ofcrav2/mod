# mod
OFCRA Essentials

## Bundled OMTK mission assets

OMTK mission files are bundled in the `ofcra_omtk` addon so missions can reference them directly from the mod:

- `\ofcra_omtk\omtk\...`
- `\ofcra_omtk\loadscreen.jpg`

Mission init usage:

```sqf
[] call OFCRA_OMTK_fnc_init;
```
