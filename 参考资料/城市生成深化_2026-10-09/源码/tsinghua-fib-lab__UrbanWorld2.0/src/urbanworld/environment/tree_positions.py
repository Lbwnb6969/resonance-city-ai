"""Tree position generation from NDVI GeoTIFF.

For each pixel where NDVI exceeds a threshold, emit one tree position
(local-meter coordinates) with random offset, NDVI/normal-distributed
scale, and a Perlin-noise-clustered tree type. Output is a JSON file
suitable for instancing in Blender / UE5 / Unity.

Ported from VirtualCity/tree/generate_tree_positions.py. Pure Python,
no Blender. Requires the ``env-tree`` extra::

    uv sync --extra env-tree
"""

from __future__ import annotations

import json
import math
import os
import random
from datetime import datetime
from typing import Dict, List, Tuple

import numpy as np

# ---------------------------------------------------------------------------
# Optional deps
# ---------------------------------------------------------------------------

try:
    import rasterio  # noqa: F401
    _RASTERIO_OK = True
except ImportError:
    _RASTERIO_OK = False

try:
    from opensimplex import OpenSimplex
    _SIMPLEX = OpenSimplex(seed=42)

    def _pnoise2(x, y, octaves=1, persistence=0.5, **_):
        total = 0.0
        amplitude = 1.0
        frequency = 1.0
        max_value = 0.0
        for _i in range(octaves):
            total += _SIMPLEX.noise2(x * frequency, y * frequency) * amplitude
            max_value += amplitude
            amplitude *= persistence
            frequency *= 2.0
        return total / max_value
    _NOISE_OK = True
except ImportError:
    try:
        from noise import pnoise2 as _pnoise2  # type: ignore
        _NOISE_OK = True
    except ImportError:
        _NOISE_OK = False


def _require_rasterio():
    if not _RASTERIO_OK:
        raise ImportError(
            "rasterio not installed. Install with: pip install 'urbanworld[env-tree]'"
        )


# ---------------------------------------------------------------------------
# Defaults (mirrored to CLI; tuned for urban scenes per upstream tuning)
# ---------------------------------------------------------------------------

DEFAULTS = {
    "threshold": 0.25,
    "ref_lon": 116.405285,
    "ref_lat": 39.904989,
    "z_offset": 0.0,
    "random_offset": 3.0,
    "scale_min": 0.8,
    "scale_max": 1.2,
    "scale_distribution": "normal",
    "scale_normal_std": 0.10,
    "scale_ndvi_influence": 0.2,
    "num_tree_types": 7,
    "noise_scale": 0.005,
    "noise_octaves": 2,
    "noise_persistence": 0.5,
    "ndvi_influence": 0.3,
    "progress_interval": 10000,
    "heatmap_grid": 100.0,
}


# ---------------------------------------------------------------------------
# Coordinate transformer (local meters around a reference point)
# ---------------------------------------------------------------------------

class CoordinateTransformer:
    """WGS84 lon/lat → local meter frame anchored at a reference point.

    Matches the convention used by `road_network` and `parcel_mesh` so a
    single reference point keeps the three layers aligned in world space.
    """

    R = 6371000.0  # earth radius in meters

    def __init__(self, ref_lat: float, ref_lon: float):
        self.ref_lat = ref_lat
        self.ref_lon = ref_lon
        self.ref_lat_rad = math.radians(ref_lat)
        self.ref_lon_rad = math.radians(ref_lon)
        self.cos_ref_lat = math.cos(self.ref_lat_rad)

    def transform_point(self, lon: float, lat: float) -> Tuple[float, float]:
        lat_rad = math.radians(lat)
        lon_rad = math.radians(lon)
        x = self.R * (lon_rad - self.ref_lon_rad) * self.cos_ref_lat
        y = self.R * (lat_rad - self.ref_lat_rad)
        return x, y

    def transform_points_batch(
        self, lons: np.ndarray, lats: np.ndarray
    ) -> Tuple[np.ndarray, np.ndarray]:
        lat_rads = np.radians(lats)
        lon_rads = np.radians(lons)
        xs = self.R * (lon_rads - self.ref_lon_rad) * self.cos_ref_lat
        ys = self.R * (lat_rads - self.ref_lat_rad)
        return xs, ys


# ---------------------------------------------------------------------------
# Scale calculation
# ---------------------------------------------------------------------------

def calculate_scale(
    ndvi: float,
    scale_min: float,
    scale_max: float,
    distribution: str = "uniform",
    normal_std: float = 0.15,
    ndvi_influence: float = 0.6,
    ndvi_min: float = 0.0,
    ndvi_max: float = 1.0,
) -> float:
    scale_range = scale_max - scale_min
    scale_center = (scale_min + scale_max) / 2

    if distribution == "uniform":
        return random.uniform(scale_min, scale_max)

    if distribution == "normal":
        std = scale_range * normal_std
        return max(scale_min, min(scale_max, random.gauss(scale_center, std)))

    # Both ndvi-based modes need a normalized NDVI
    if ndvi_max > ndvi_min:
        ndvi_normalized = (ndvi - ndvi_min) / (ndvi_max - ndvi_min)
    else:
        ndvi_normalized = 0.5
    ndvi_normalized = max(0.0, min(1.0, ndvi_normalized))

    if distribution == "ndvi":
        base_random = random.uniform(0, 1)
        combined = (
            ndvi_influence * ndvi_normalized + (1 - ndvi_influence) * base_random
        )
        return scale_min + combined * scale_range

    if distribution == "ndvi_normal":
        ndvi_center = scale_min + ndvi_normalized * scale_range
        std = scale_range * normal_std
        target_center = (
            ndvi_influence * ndvi_center + (1 - ndvi_influence) * scale_center
        )
        return max(scale_min, min(scale_max, random.gauss(target_center, std)))

    return random.uniform(scale_min, scale_max)


def calculate_scales_batch(
    ndvi_values: np.ndarray,
    scale_min: float,
    scale_max: float,
    distribution: str = "uniform",
    normal_std: float = 0.15,
    ndvi_influence: float = 0.6,
) -> np.ndarray:
    n = len(ndvi_values)
    ndvi_min = float(np.min(ndvi_values))
    ndvi_max = float(np.max(ndvi_values))
    scales = np.zeros(n)
    for i in range(n):
        scales[i] = calculate_scale(
            ndvi=float(ndvi_values[i]),
            scale_min=scale_min,
            scale_max=scale_max,
            distribution=distribution,
            normal_std=normal_std,
            ndvi_influence=ndvi_influence,
            ndvi_min=ndvi_min,
            ndvi_max=ndvi_max,
        )
    return scales


# ---------------------------------------------------------------------------
# NDVI I/O
# ---------------------------------------------------------------------------

def read_ndvi_file(filepath: str):
    """Return (ndvi_data, metadata, transform). Raises ImportError if rasterio missing."""
    _require_rasterio()
    import rasterio  # type: ignore

    with rasterio.open(filepath) as src:
        ndvi_data = src.read(1)
        metadata = {
            "width": src.width,
            "height": src.height,
            "crs": str(src.crs),
            "bounds": tuple(src.bounds),
            "resolution": (src.res[0], src.res[1]),
        }
        transform = src.transform
        print(f"[ndvi] {filepath}: {src.width}x{src.height}, crs={src.crs}")
        print(
            f"       range=[{np.nanmin(ndvi_data):.3f}, {np.nanmax(ndvi_data):.3f}]"
        )
        return ndvi_data, metadata, transform


def pixel_to_lonlat(row: int, col: int, transform) -> Tuple[float, float]:
    """Pixel (row, col) → (lon, lat) at pixel center."""
    lon = transform.c + (col + 0.5) * transform.a + (row + 0.5) * transform.b
    lat = transform.f + (col + 0.5) * transform.d + (row + 0.5) * transform.e
    return lon, lat


# ---------------------------------------------------------------------------
# Tree-type assignment via Perlin noise (with NDVI bias)
# ---------------------------------------------------------------------------

def assign_tree_type(
    x: float,
    y: float,
    ndvi: float,
    num_types: int,
    noise_scale: float = 0.001,
    noise_octaves: int = 3,
    noise_persistence: float = 0.5,
    ndvi_influence: float = 0.3,
) -> int:
    if _NOISE_OK:
        noise_val = _pnoise2(
            x * noise_scale,
            y * noise_scale,
            octaves=noise_octaves,
            persistence=noise_persistence,
            repeatx=1000000,
            repeaty=1000000,
            base=42,
        )
        normalized = max(0.0, min(1.0, (noise_val + 0.7) / 1.4))
    else:
        # Hash fallback when neither opensimplex nor noise is installed
        grid_size = 200.0
        gx = int(x / grid_size)
        gy = int(y / grid_size)
        normalized = ((gx * 73856093) ^ (gy * 19349663)) % 1000000 / 1000000.0

    if ndvi_influence > 0:
        ndvi_factor = max(0.0, min(1.0, (ndvi - 0.3) / 0.5))
        normalized = (
            normalized * (1.0 - ndvi_influence) + ndvi_factor * ndvi_influence
        )

    return min(int(normalized * num_types), num_types - 1)


def assign_tree_types_batch(
    local_xs: np.ndarray,
    local_ys: np.ndarray,
    ndvi_values: np.ndarray,
    num_types: int,
    noise_scale: float = 0.001,
    noise_octaves: int = 3,
    noise_persistence: float = 0.5,
    ndvi_influence: float = 0.3,
) -> np.ndarray:
    n = len(local_xs)
    out = np.zeros(n, dtype=np.int32)
    for i in range(n):
        out[i] = assign_tree_type(
            x=float(local_xs[i]),
            y=float(local_ys[i]),
            ndvi=float(ndvi_values[i]),
            num_types=num_types,
            noise_scale=noise_scale,
            noise_octaves=noise_octaves,
            noise_persistence=noise_persistence,
            ndvi_influence=ndvi_influence,
        )
    return out


# ---------------------------------------------------------------------------
# Position extraction
# ---------------------------------------------------------------------------

def extract_tree_positions(
    ndvi_data: np.ndarray,
    transform,
    transformer: CoordinateTransformer,
    threshold: float,
    z_offset: float = 0.0,
    random_offset: float = 2.0,
    scale_min: float = 0.8,
    scale_max: float = 1.2,
    scale_distribution: str = "uniform",
    scale_normal_std: float = 0.15,
    scale_ndvi_influence: float = 0.6,
    progress_interval: int = 10000,
    num_tree_types: int = 12,
    noise_scale: float = 0.001,
    noise_octaves: int = 3,
    noise_persistence: float = 0.5,
    ndvi_influence: float = 0.3,
) -> List[Dict]:
    """Extract one tree per NDVI pixel above ``threshold``."""
    valid = (ndvi_data > threshold) & ~np.isnan(ndvi_data)
    rows, cols = np.where(valid)
    total = len(rows)
    print(f"[trees] {total:,} candidate pixels with NDVI > {threshold}")
    if total == 0:
        return []

    lons = np.zeros(total)
    lats = np.zeros(total)
    for i in range(total):
        lons[i], lats[i] = pixel_to_lonlat(int(rows[i]), int(cols[i]), transform)

    local_xs, local_ys = transformer.transform_points_batch(lons, lats)
    ndvi_values = np.array(
        [float(ndvi_data[rows[i], cols[i]]) for i in range(total)]
    )

    print(f"[trees] assigning {num_tree_types} types via Perlin clustering...")
    tree_types = assign_tree_types_batch(
        local_xs=local_xs,
        local_ys=local_ys,
        ndvi_values=ndvi_values,
        num_types=num_tree_types,
        noise_scale=noise_scale,
        noise_octaves=noise_octaves,
        noise_persistence=noise_persistence,
        ndvi_influence=ndvi_influence,
    )
    type_counts: Dict[int, int] = {}
    for t in tree_types:
        type_counts[int(t)] = type_counts.get(int(t), 0) + 1
    print(f"[trees] type distribution: {dict(sorted(type_counts.items()))}")

    print(f"[trees] computing scales (mode={scale_distribution})...")
    scales = calculate_scales_batch(
        ndvi_values=ndvi_values,
        scale_min=scale_min,
        scale_max=scale_max,
        distribution=scale_distribution,
        normal_std=scale_normal_std,
        ndvi_influence=scale_ndvi_influence,
    )

    trees: List[Dict] = []
    for i in range(total):
        if i > 0 and i % progress_interval == 0:
            print(f"  [{i:,}/{total:,}] {i / total * 100:.1f}%")
        ox = random.uniform(-random_offset, random_offset)
        oy = random.uniform(-random_offset, random_offset)
        trees.append({
            "id": i,
            "position": [
                round(float(local_xs[i]) + ox, 2),
                round(float(local_ys[i]) + oy, 2),
                round(z_offset, 2),
            ],
            "ndvi": round(float(ndvi_values[i]), 3),
            "scale": round(float(scales[i]), 3),
            "tree_type": int(tree_types[i]),
        })
    print(f"[trees] generated {len(trees):,} trees")
    return trees


def calculate_tree_density(ndvi_value: float) -> int:
    if ndvi_value < 0.3:
        return 0
    if ndvi_value < 0.5:
        return 1
    if ndvi_value < 0.7:
        return 2
    return 4


def extract_trees_density_based(
    ndvi_data: np.ndarray,
    transform,
    transformer: CoordinateTransformer,
    min_threshold: float = 0.3,
    z_offset: float = 0.0,
    pixel_size: float = 10.0,
) -> List[Dict]:
    """Variable-density extraction: more trees per pixel as NDVI rises."""
    valid = (ndvi_data > min_threshold) & ~np.isnan(ndvi_data)
    rows, cols = np.where(valid)
    trees: List[Dict] = []
    half = pixel_size / 2

    for row, col in zip(rows, cols):
        ndvi_value = float(ndvi_data[row, col])
        density = calculate_tree_density(ndvi_value)
        if density == 0:
            continue
        center_lon, center_lat = pixel_to_lonlat(int(row), int(col), transform)
        cx, cy = transformer.transform_point(center_lon, center_lat)
        for _ in range(density):
            ox = random.uniform(-half, half)
            oy = random.uniform(-half, half)
            trees.append({
                "id": len(trees),
                "position": [
                    round(cx + ox, 2),
                    round(cy + oy, 2),
                    round(z_offset, 2),
                ],
                "ndvi": round(ndvi_value, 3),
                "scale": round(random.uniform(0.8, 1.2), 3),
            })
    print(f"[trees] generated {len(trees):,} trees (density mode)")
    return trees


# ---------------------------------------------------------------------------
# Output
# ---------------------------------------------------------------------------

def save_tree_positions(
    trees: List[Dict],
    output_path: str,
    *,
    ndvi_threshold: float,
    ref_lon: float,
    ref_lat: float,
    source_file: str,
    num_tree_types: int = 12,
    noise_scale: float = 0.001,
    ndvi_influence: float = 0.3,
    scale_distribution: str = "uniform",
    scale_min: float = 0.8,
    scale_max: float = 1.2,
) -> None:
    type_counts: Dict[int, int] = {}
    for tree in trees:
        t = tree.get("tree_type", 0)
        type_counts[t] = type_counts.get(t, 0) + 1
    scales = [tree.get("scale", 1.0) for tree in trees]
    scale_stats = {
        "min": round(min(scales), 3),
        "max": round(max(scales), 3),
        "mean": round(sum(scales) / max(1, len(scales)), 3),
    }

    data = {
        "metadata": {
            "source": "Sentinel-2 NDVI",
            "source_file": os.path.basename(source_file),
            "ndvi_threshold": ndvi_threshold,
            "total_trees": len(trees),
            "export_time": datetime.now().isoformat(),
            "coordinate_system": "local_meters",
            "reference_point": [ref_lon, ref_lat],
            "unit": "meters",
            "num_tree_types": num_tree_types,
            "noise_scale": noise_scale,
            "ndvi_influence": ndvi_influence,
            "type_counts": dict(sorted(type_counts.items())),
            "scale_config": {
                "distribution": scale_distribution,
                "range": [scale_min, scale_max],
            },
            "scale_stats": scale_stats,
        },
        "trees": trees,
    }

    out_dir = os.path.dirname(output_path)
    if out_dir:
        os.makedirs(out_dir, exist_ok=True)
    with open(output_path, "w", encoding="utf-8") as f:
        json.dump(data, f, ensure_ascii=False, indent=2)
    print(
        f"[trees] saved {len(trees):,} trees to {output_path} "
        f"({os.path.getsize(output_path) / 1024 / 1024:.2f} MB)"
    )


# ---------------------------------------------------------------------------
# Optional visualization (lazy matplotlib import)
# ---------------------------------------------------------------------------

def visualize_tree_positions(
    trees: List[Dict],
    ndvi_data=None,
    transform=None,
    title: str = "Tree positions",
    color_by_ndvi: bool = True,
    point_size: float = 1.0,
    show_ndvi_background: bool = True,
    save_path: str | None = None,
    dpi: int = 150,
) -> None:
    try:
        import matplotlib
        if os.environ.get("DISPLAY") is None and os.name != "nt":
            matplotlib.use("Agg")
        import matplotlib.pyplot as plt
    except ImportError:
        print("[viz] matplotlib not installed; skip")
        return
    if not trees:
        return

    xs = np.array([t["position"][0] for t in trees])
    ys = np.array([t["position"][1] for t in trees])
    ndvi_values = np.array([t["ndvi"] for t in trees])

    has_bg = show_ndvi_background and ndvi_data is not None
    fig, axes = plt.subplots(1, 2 if has_bg else 1, figsize=(16 if has_bg else 10, 8))
    if has_bg:
        ax1, ax2 = axes
    else:
        ax1 = axes if not isinstance(axes, np.ndarray) else axes[0]
        ax2 = None

    if color_by_ndvi:
        sc = ax1.scatter(
            xs, ys, c=ndvi_values, cmap="YlGn", s=point_size, alpha=0.7,
            vmin=0.3, vmax=0.8,
        )
        plt.colorbar(sc, ax=ax1, label="NDVI")
    else:
        ax1.scatter(xs, ys, c="green", s=point_size, alpha=0.5)
    ax1.set_xlabel("X (m)")
    ax1.set_ylabel("Y (m)")
    ax1.set_title(f"{title}\nTotal: {len(trees):,} trees")
    ax1.set_aspect("equal")
    ax1.grid(True, alpha=0.3)

    if ax2 is not None and ndvi_data is not None:
        extent = [
            transform.c,
            transform.c + transform.a * ndvi_data.shape[1],
            transform.f + transform.e * ndvi_data.shape[0],
            transform.f,
        ]
        im = ax2.imshow(
            ndvi_data, cmap="RdYlGn", extent=extent, vmin=-0.2, vmax=0.8, origin="upper"
        )
        plt.colorbar(im, ax=ax2, label="NDVI")
        ax2.set_xlabel("Longitude")
        ax2.set_ylabel("Latitude")
        ax2.set_title("NDVI raw data")
        ax2.set_aspect("equal")

    plt.tight_layout()
    if save_path:
        plt.savefig(save_path, dpi=dpi, bbox_inches="tight")
        print(f"[viz] saved {save_path}")
    if os.environ.get("DISPLAY") is not None or os.name == "nt":
        plt.show()
    else:
        plt.close(fig)


def visualize_tree_density_heatmap(
    trees: List[Dict],
    grid_size: float = 100.0,
    title: str = "Tree density",
    save_path: str | None = None,
    dpi: int = 150,
) -> None:
    try:
        import matplotlib
        if os.environ.get("DISPLAY") is None and os.name != "nt":
            matplotlib.use("Agg")
        import matplotlib.pyplot as plt
    except ImportError:
        print("[viz] matplotlib not installed; skip")
        return
    if not trees:
        return

    xs = np.array([t["position"][0] for t in trees])
    ys = np.array([t["position"][1] for t in trees])
    x_min, x_max = xs.min(), xs.max()
    y_min, y_max = ys.min(), ys.max()
    x_bins = int((x_max - x_min) / grid_size) + 1
    y_bins = int((y_max - y_min) / grid_size) + 1
    heatmap, _, _ = np.histogram2d(
        xs, ys, bins=[x_bins, y_bins],
        range=[[x_min, x_max], [y_min, y_max]],
    )

    fig, ax = plt.subplots(figsize=(12, 10))
    im = ax.imshow(
        heatmap.T, origin="lower",
        extent=[x_min, x_max, y_min, y_max], cmap="hot", aspect="equal",
    )
    plt.colorbar(im, ax=ax, label=f"trees / {grid_size}m²")
    ax.set_xlabel("X (m)")
    ax.set_ylabel("Y (m)")
    ax.set_title(f"{title}\nTotal: {len(trees):,} trees, grid={grid_size}m")
    plt.tight_layout()
    if save_path:
        plt.savefig(save_path, dpi=dpi, bbox_inches="tight")
        print(f"[viz] saved {save_path}")
    if os.environ.get("DISPLAY") is not None or os.name == "nt":
        plt.show()
    else:
        plt.close(fig)


# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def run(
    input_path: str,
    output_path: str,
    *,
    threshold: float = DEFAULTS["threshold"],
    ref_lat: float = DEFAULTS["ref_lat"],
    ref_lon: float = DEFAULTS["ref_lon"],
    z_offset: float = DEFAULTS["z_offset"],
    random_offset: float = DEFAULTS["random_offset"],
    scale_min: float = DEFAULTS["scale_min"],
    scale_max: float = DEFAULTS["scale_max"],
    scale_distribution: str = DEFAULTS["scale_distribution"],
    scale_normal_std: float = DEFAULTS["scale_normal_std"],
    scale_ndvi_influence: float = DEFAULTS["scale_ndvi_influence"],
    num_tree_types: int = DEFAULTS["num_tree_types"],
    noise_scale: float = DEFAULTS["noise_scale"],
    noise_octaves: int = DEFAULTS["noise_octaves"],
    noise_persistence: float = DEFAULTS["noise_persistence"],
    ndvi_influence: float = DEFAULTS["ndvi_influence"],
    progress_interval: int = DEFAULTS["progress_interval"],
    density_mode: bool = False,
    visualize: bool = False,
    visualize_heatmap: bool = False,
    save_plot: str | None = None,
    heatmap_grid: float = DEFAULTS["heatmap_grid"],
) -> List[Dict]:
    """Generate tree positions JSON from an NDVI GeoTIFF.

    Returns the list of tree dicts (also written to ``output_path``).
    """
    _require_rasterio()
    if not os.path.exists(input_path):
        raise FileNotFoundError(f"NDVI file not found: {input_path}")

    ndvi_data, _, transform = read_ndvi_file(input_path)
    transformer = CoordinateTransformer(ref_lat=ref_lat, ref_lon=ref_lon)

    if density_mode:
        trees = extract_trees_density_based(
            ndvi_data=ndvi_data,
            transform=transform,
            transformer=transformer,
            min_threshold=threshold,
            z_offset=z_offset,
        )
    else:
        trees = extract_tree_positions(
            ndvi_data=ndvi_data,
            transform=transform,
            transformer=transformer,
            threshold=threshold,
            z_offset=z_offset,
            random_offset=random_offset,
            scale_min=scale_min,
            scale_max=scale_max,
            scale_distribution=scale_distribution,
            scale_normal_std=scale_normal_std,
            scale_ndvi_influence=scale_ndvi_influence,
            progress_interval=progress_interval,
            num_tree_types=num_tree_types,
            noise_scale=noise_scale,
            noise_octaves=noise_octaves,
            noise_persistence=noise_persistence,
            ndvi_influence=ndvi_influence,
        )

    if not trees:
        print("[trees] no trees produced; nothing to write")
        return []

    save_tree_positions(
        trees=trees,
        output_path=output_path,
        ndvi_threshold=threshold,
        ref_lon=ref_lon,
        ref_lat=ref_lat,
        source_file=input_path,
        num_tree_types=num_tree_types,
        noise_scale=noise_scale,
        ndvi_influence=ndvi_influence,
        scale_distribution=scale_distribution,
        scale_min=scale_min,
        scale_max=scale_max,
    )

    if visualize:
        plot_path = save_plot
        if save_plot and visualize_heatmap:
            base, ext = os.path.splitext(save_plot)
            plot_path = f"{base}_points{ext}"
        visualize_tree_positions(
            trees=trees,
            ndvi_data=ndvi_data,
            transform=transform,
            title=f"Tree positions (NDVI > {threshold})",
            save_path=plot_path,
        )
    if visualize_heatmap:
        plot_path = save_plot
        if save_plot and visualize:
            base, ext = os.path.splitext(save_plot)
            plot_path = f"{base}_heatmap{ext}"
        visualize_tree_density_heatmap(
            trees=trees,
            grid_size=heatmap_grid,
            title=f"Tree density (NDVI > {threshold})",
            save_path=plot_path,
        )

    return trees
