# UrbanWorld

Automated pipeline for generating textured 3D urban scenes from OpenStreetMap data.

Given a geographic bounding box, UrbanWorld downloads OSM building/terrain/road data, retrieves real-world street view imagery, uses VLMs to analyze and imagine building facades, generates 3D meshes with Hunyuan3D, and assembles everything into a final GLTF scene.

## Installation

### From source (recommended for development)

```bash
# Install uv (if not already installed)
curl -LsSf https://astral.sh/uv/install.sh | sh

# Clone and install
cd urbanworld
uv sync                      # Core dependencies only
uv sync --extra all          # All optional dependencies
uv sync --extra osm --extra vlm  # Specific extras

# Run commands via uv
uv run urbanworld --help
```

### Available extras

| Extra | Packages | Needed for |
|---|---|---|
| `osm` | geopandas, pyproj, lxml | `urbanworld osm update-data` |
| `streetview` | streetlevel, opencv, loguru | `urbanworld streetview *` |
| `vlm` | openai | `urbanworld vlm *`, `urbanworld imagine *` |
| `detection` | torch, transformers | `urbanworld streetview crop` |
| `mesh` | trimesh, torch, transformers | `urbanworld mesh *` |
| `catalog` | openpyxl | Building catalog export |
| `env-road` | mosstool, pycityproto, pyproj, shapely, protobuf | `urbanworld env osm-to-pb`, `urbanworld env roads` |
| `env-parcel` | geopandas, shapely, pyproj | `urbanworld env parcel-filter`, `urbanworld env parcel-mesh` |
| `env-tree` | rasterio, pyproj, opensimplex | `urbanworld env trees` |
| `env` | bundles `env-road` + `env-parcel` + `env-tree` | full environment layer |

### From PyPI (after publishing)

```bash
pip install urbanworld
pip install "urbanworld[all]"
```

### External Requirements

- **Blender 3.2+** — Required for OSM download and scene assembly stages. Install separately and set `BLENDER_PATH`.
- **blosm addon** — Blender addon for OSM import. Set `BLOSM_ADDON_PATH` to the zip file.
- **Hunyuan3D 2.1** — Required for mesh generation (optional). Set `HUNYUAN3D_PATH`.

## Configuration

Copy `.env.example` to `.env` and fill in your values:

```bash
cp .env.example .env
```

Key environment variables:

| Variable | Description |
|---|---|
| `OPENROUTER_API_KEY` | API key for VLM inference (OpenRouter) |
| `BAIDU_MAP_API_KEY` | API key for Baidu street view |
| `BLENDER_PATH` | Path to Blender executable |
| `BLOSM_ADDON_PATH` | Path to blosm.zip addon |
| `OWLVIT_MODEL_PATH` | Path to local OWL-ViT model |
| `HUNYUAN3D_PATH` | Path to Hunyuan3D installation |
| `HUNYUAN3D_MODEL_PATH` | Path to Hunyuan3D model weights |
| `PB_MAP_PATH` | Optional default for `urbanworld env roads --pb` |
| `EULUC_GPKG_PATH` | Optional default for `urbanworld env parcel-filter --input` |
| `ROAD_TEXTURE_PATH` | Optional albedo PNG for road material; falls back to procedural asphalt |
| `NDVI_DEFAULT_PATH` | Optional default for `urbanworld env trees --input` |

## Usage

### CLI

```bash
# Stage 0: Download OSM data
urbanworld osm download-buildings --bbox 39.996,116.309,40.012,116.334 --output ./output/ --osm-cache ./osm_cache/
urbanworld osm download-terrain   --bbox 39.996,116.309,40.012,116.334 --output ./output/ --osm-cache ./osm_cache/
urbanworld osm update-data        --obj-save-path ./output/ --gable-geojson ./GABLE/buildings.geojson
urbanworld osm preview            --obj-save-path ./output/

# Stage 1: Street view acquisition
urbanworld streetview download     --obj-save-path ./output/
urbanworld streetview crop         --obj-save-path ./output/ --batch-size 16

# Stage 2: VLM analysis
urbanworld vlm annotate            --obj-save-path ./output/
urbanworld vlm assess              --obj-save-path ./output/

# Stage 3: Building imagination
urbanworld imagine generate        --obj-save-path ./output/
urbanworld imagine reflect         --obj-save-path ./output/
urbanworld imagine regen           --obj-save-path ./output/

# Stage 4: 3D mesh generation (requires Hunyuan3D)
urbanworld mesh generate           --obj-save-path ./output/
urbanworld mesh generate           --obj-save-path ./output/ --partition 0 --total-partitions 8  # parallel

# Stage 5: Scene assembly
urbanworld assemble organize       --obj-save-path ./output/ --output ./scene/combined.gltf

# Optional: include the environment layer in the assembled scene
urbanworld assemble organize \
    --obj-save-path ./output/ \
    --output ./scene/combined.gltf \
    --road-blend ./env_out/road_network.blend \
    --parcel-blend ./env_out/parcels.blend \
    --tree-json ./env_out/trees.json \
    --tree-mesh /path/to/tree_proxy.glb
```

### Environment generation (roads / land parcels / trees)

The environment layer lives in the `urbanworld env` group. It is decoupled
from the building pipeline — you can run any subset.

```bash
# 0. Install the env extras and Blender-side deps (one-time per machine)
uv sync --extra env
uv run urbanworld env install-blender-deps

# 1. OSM bbox → pycityproto Map .pb (mosstool)
urbanworld env osm-to-pb \
    --bbox 22.7672,113.5341,22.7872,113.5541 \
    --output ./env_out/road_network.pb \
    --ref-lat 22.7672136 --ref-lon 113.5341154
# A sibling `road_network.pb.proj.txt` is written with the projection
# string used; pipe it into the next step to keep them aligned.

# 2. .pb → road-network mesh (.blend)
urbanworld env roads \
    --pb ./env_out/road_network.pb \
    --output ./env_out/road_network.blend \
    --projection "$(cat ./env_out/road_network.pb.proj.txt)" \
    --ref-lat 22.7672136 --ref-lon 113.5341154

# 3. Filter the country-wide land-use gpkg to your bbox (geopandas convention!)
urbanworld env parcel-filter \
    --input /data/EULUC_China_20.gpkg \
    --output ./env_out/parcels.gpkg \
    --bounds 113.5341,22.7672,113.5541,22.7872

# 4. Filtered gpkg → land-parcel mesh (.blend)
urbanworld env parcel-mesh \
    --input ./env_out/parcels.gpkg \
    --output ./env_out/parcels.blend \
    --ref-lat 22.7672136 --ref-lon 113.5341154

# 5. NDVI GeoTIFF → tree positions JSON (per-pixel, Perlin-clustered)
urbanworld env trees \
    --input ./ndvi_cropped.tif \
    --output ./env_out/trees.json \
    --threshold 0.3 \
    --ref-lat 22.7672136 --ref-lon 113.5341154
```

Once the four `env_out/*` outputs exist, plug them into
`urbanworld assemble organize` (above) to merge them into the same GLTF
as the building layer. Always reuse the **same `--ref-lat`/`--ref-lon`**
across roads / parcels / trees so the layers stay aligned in the
local-meter scene frame.

#### Notes

- **`.pb` data source** — `urbanworld env osm-to-pb` builds the file
  via mosstool's `RoadNet` + `Builder`. It does *not* use MongoDB.
- **`EULUC_China_20.gpkg`** is ~3 GB; download it from the EULUC
  publication and store it locally — the package does not ship it.
- **NDVI tif** is user-supplied (export from Google Earth Engine — see
  the upstream tutorial). The package does not ship it.
- **Road texture** — without `--texture` / `ROAD_TEXTURE_PATH`, the road
  mesh uses a built-in procedural asphalt material.
- **bbox order** — `osm-to-pb` uses `min_lat,min_lon,max_lat,max_lon`
  (matches `stage0_osm`); `parcel-filter` uses
  `min_lon,min_lat,max_lon,max_lat` (matches geopandas / shapely). The
  CLI help text reminds you which is which.

### Python API

```python
from urbanworld.stage2_vlm.structure_annotation import run as annotate
from urbanworld.common.vlm import VLMClient
from urbanworld.common.geo import wgs84_to_bd09ll, haversine_distance

# Run a pipeline stage
annotate("./output/", max_workers=16)

# Use utilities directly
client = VLMClient(model="openai/gpt-5-mini")
result = client.infer("Describe this building.", images=["building.png"])
```

## Pipeline Architecture

```
Stage 0: OSM Download          (Blender + blosm)
    ↓
Stage 1: Street View           (Baidu API + OWL-ViT)
    ↓
Stage 2: VLM Analysis          (OpenRouter API)
    ↓
Stage 3: Imagination            (VLM generation + reflection)
    ↓
Stage 4: Mesh Generation        (Hunyuan3D, optional)
    ↓
Stage 5: Scene Assembly         (Blender; optional env-layer integration)

Environment layer (parallel, opt-in via `urbanworld env`):
    OSM bbox  →  mosstool  →  .pb       →  road network .blend
    EULUC gpkg → parcel-filter → .gpkg   →  land parcel .blend
    NDVI tif                              →  tree positions JSON
                                         ↘
                              (folded into Stage 5 via --road-blend / --parcel-blend
                               / --tree-json / --tree-mesh)
```

## License

MIT

## Citation

This project builds upon two research papers:

**Current version (v0.2) — UrbanWorld2.0(RAISECity):**
```bibtex
@article{wang2025raisecity,
  title={UrbanWorld2.0: A Multimodal Agent Framework for Reality-Aligned 3D World Generation at City-Scale},
  author={Wang, Shengyuan and Zheng, Zhiheng and Shang, Yu and He, Lixuan and Yu, Yangcheng and Hangyu, Fan and Feng, Jie and Liao, Qingmin and Li, Yong},
  journal={arXiv preprint arXiv:2511.18005},
  year={2025}
}
```

**Original version (v0.1) — UrbanWorld:**
```bibtex
@article{shang2024urbanworld,
  title={Urbanworld: An urban world model for 3d city generation},
  author={Shang, Yu and Lin, Yuming and Zheng, Yu and Fan, Hangyu and Ding, Jingtao and Feng, Jie and Chen, Jiansheng and Tian, Li and Li, Yong},
  journal={arXiv preprint arXiv:2407.11965},
  year={2024}
}
```

The v0.1 codebase is available in the `v0.1` branch and tagged as `v0.1`. The current `main` branch contains the v0.2 implementation with the environment layer (roads / land parcels / trees) and refactored pipeline architecture.

## Evaluation

`urbanworld eval` evaluates scene layout, street-level appearance and video
consistency, building image/texture quality, and Uni3D shape coherence. It also
supports VLM judging, blinded human annotation and paired experiment analysis.
Provide your own images, videos, meshes and references through JSON manifests;
evaluation datasets and model weights are not included.

```bash
uv run urbanworld eval --help
uv run urbanworld eval building image --help
```

See [Evaluation guide](docs/evaluation.md) for optional dependencies, commands,
input templates, metric definitions and validation limitations.
