"""Blender script: build land-parcel mesh from a filtered GeoPackage.

Run via::

    blender -b -P env_parcel_mesh.py -- \\
        --input filtered_parcels.gpkg \\
        --output land_parcels.blend \\
        --ref-lat 22.7672136 --ref-lon 113.5341154 \\
        [--parcel-height 0.1] [--texture-repeat 50.0] \\
        [--max-parcels-per-class 0]

Ported from VirtualCity/LandParcel/generate_land_parcels.py. Geometry
and material logic preserved verbatim — only the Config class is
replaced with argparse-driven module globals so the script can be
parametrized from the urbanworld CLI.
"""
# Standard sys.path shim so this Blender process can import urbanworld helpers.
import sys, os  # noqa: E401
_pkg_path = os.environ.get("URBANWORLD_PKG_PATH", "")
if _pkg_path and _pkg_path not in sys.path:
    sys.path.insert(0, _pkg_path)

# Allow user-site for Blender Python extras (geopandas / shapely).
import site
user_site = site.getusersitepackages()
if user_site not in sys.path:
    sys.path.insert(0, user_site)
home = os.path.expanduser("~")
for py_version in ["python3.11", "python3.10", "python3.12", "python3"]:
    user_lib_path = os.path.join(home, ".local", "lib", py_version, "site-packages")
    if os.path.exists(user_lib_path) and user_lib_path not in sys.path:
        sys.path.insert(0, user_lib_path)

import argparse
import math
import time
from typing import Any, List, Optional, Tuple

import bpy
import numpy as np

try:
    import geopandas as gpd
    GEOPANDAS_AVAILABLE = True
except ImportError as e:
    print(f"[deps] geopandas not available: {e}")
    GEOPANDAS_AVAILABLE = False

try:
    from shapely.geometry import Polygon
    from shapely.ops import triangulate as shapely_triangulate
    SHAPELY_AVAILABLE = True
except ImportError as e:
    print(f"[deps] shapely not available: {e}")
    SHAPELY_AVAILABLE = False


# Module-level args, populated in main() — replaces the original Config class.
ARGS = argparse.Namespace(
    input="",
    output="",
    ref_lat=0.0,
    ref_lon=0.0,
    parcel_height=0.1,
    texture_repeat=50.0,
    max_parcels_per_class=0,  # 0 = no limit
)


# ==================== Coordinate transform ====================

class CoordinateTransformer:
    """WGS84 lon/lat → local meter frame anchored at a reference point."""

    R = 6371000.0

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

    def transform_coords_batch(self, coords: List[Tuple[float, float]]) -> np.ndarray:
        if not coords:
            return np.array([])
        coords_array = np.array(coords)
        lons = coords_array[:, 0]
        lats = coords_array[:, 1]
        lat_rads = np.radians(lats)
        lon_rads = np.radians(lons)
        local_xs = self.R * (lon_rads - self.ref_lon_rad) * self.cos_ref_lat
        local_ys = self.R * (lat_rads - self.ref_lat_rad)
        return np.column_stack([local_xs, local_ys])


# ==================== Geometry ====================

def triangulate_polygon_simple(
    exterior_coords: List[Tuple[float, float]],
    holes: List[List[Tuple[float, float]]] = None,
    height: float = 0.0,
) -> Tuple[List[Tuple[float, float, float]], List[List[int]]]:
    """Triangulate a polygon (Shapely Delaunay → fan fallback)."""
    if len(exterior_coords) < 3:
        return [], []
    if exterior_coords[0] == exterior_coords[-1]:
        exterior_coords = exterior_coords[:-1]
    if len(exterior_coords) < 3:
        return [], []

    try:
        polygon = Polygon(exterior_coords, holes) if holes else Polygon(exterior_coords)
        if not polygon.is_valid or polygon.is_empty:
            return [], []
    except Exception:
        return [], []

    try:
        triangles = shapely_triangulate(polygon)
        all_vertices: List[Tuple[float, float, float]] = []
        all_faces: List[List[int]] = []
        vertex_map: dict = {}
        for tri in triangles:
            if tri.geom_type != "Polygon":
                continue
            centroid = tri.centroid
            if not polygon.contains(centroid):
                intersection = polygon.intersection(tri)
                if intersection.is_empty or intersection.area < tri.area * 0.5:
                    continue
            tri_coords = list(tri.exterior.coords)[:-1]
            if len(tri_coords) != 3:
                continue
            face_indices = []
            for x, y in tri_coords:
                key = (round(x, 6), round(y, 6))
                if key not in vertex_map:
                    vertex_map[key] = len(all_vertices)
                    all_vertices.append((x, y, height))
                face_indices.append(vertex_map[key])
            p1, p2, p3 = [all_vertices[i][:2] for i in face_indices]
            cross = (p2[0] - p1[0]) * (p3[1] - p1[1]) - (p2[1] - p1[1]) * (p3[0] - p1[0])
            if cross < 0:
                face_indices = face_indices[::-1]
            all_faces.append(face_indices)
        if all_faces:
            return all_vertices, all_faces
    except Exception:
        pass

    return _triangulate_fan(exterior_coords, height)


def _triangulate_fan(coords, height):
    if len(coords) < 3:
        return [], []
    signed_area = 0.0
    n = len(coords)
    for i in range(n):
        j = (i + 1) % n
        signed_area += coords[i][0] * coords[j][1]
        signed_area -= coords[j][0] * coords[i][1]
    signed_area /= 2.0
    if signed_area < 0:
        coords = coords[::-1]
    vertices = [(x, y, height) for x, y in coords]
    faces = []
    for i in range(1, len(vertices) - 1):
        faces.append([0, i, i + 1])
    return vertices, faces


def process_multipolygon(multipolygon, transformer, height):
    all_vertices = []
    all_faces = []
    vertex_offset = 0
    if multipolygon.geom_type == "Polygon":
        polygons = [multipolygon]
    elif multipolygon.geom_type == "MultiPolygon":
        polygons = list(multipolygon.geoms)
    else:
        return [], []

    for polygon in polygons:
        if polygon.is_empty or not polygon.is_valid:
            continue
        exterior_coords = list(polygon.exterior.coords)
        local_coords = transformer.transform_coords_batch(exterior_coords)
        local_coords_list = [(c[0], c[1]) for c in local_coords]
        holes = []
        for interior in polygon.interiors:
            hole_coords = list(interior.coords)
            local_hole = transformer.transform_coords_batch(hole_coords)
            holes.append([(c[0], c[1]) for c in local_hole])
        vertices, faces = triangulate_polygon_simple(local_coords_list, holes, height)
        if not vertices or not faces:
            continue
        adjusted_faces = [[vi + vertex_offset for vi in face] for face in faces]
        all_vertices.extend(vertices)
        all_faces.extend(adjusted_faces)
        vertex_offset += len(vertices)
    return all_vertices, all_faces


# ==================== Mesh builder ====================

class ParcelMeshBuilder:
    def __init__(self, texture_repeat: float):
        self.texture_repeat = texture_repeat
        self.all_vertices: List[Tuple[float, float, float]] = []
        self.all_faces: List[List[int]] = []
        self.all_uvs: List[Tuple[float, float]] = []
        self.vertex_offset = 0
        self.parcel_count = 0

    def add_parcel(self, vertices, faces) -> bool:
        if not vertices or not faces:
            return False
        uvs = [(x / self.texture_repeat, y / self.texture_repeat) for x, y, _ in vertices]
        adjusted_faces = [[vi + self.vertex_offset for vi in face] for face in faces]
        self.all_vertices.extend(vertices)
        self.all_faces.extend(adjusted_faces)
        self.all_uvs.extend(uvs)
        self.vertex_offset += len(vertices)
        self.parcel_count += 1
        return True

    def build(self):
        return self.all_vertices, self.all_faces, self.all_uvs


# ==================== Blender helpers ====================

def create_mesh_fast(name, vertices, faces, uvs) -> Optional[bpy.types.Mesh]:
    if not vertices or not faces:
        return None
    mesh = bpy.data.meshes.new(name)
    mesh.from_pydata(vertices, [], faces)
    if uvs and len(uvs) == len(vertices):
        uv_layer = mesh.uv_layers.new(name="UVMap")
        loop_uvs = []
        for face in mesh.polygons:
            for vi in face.vertices:
                if vi < len(uvs):
                    loop_uvs.extend(uvs[vi])
                else:
                    loop_uvs.extend([0.0, 0.0])
        if loop_uvs:
            uv_layer.data.foreach_set("uv", loop_uvs)
    mesh.update()
    mesh.validate(verbose=False)
    return mesh


def create_placeholder_material(class_id: int, texture_repeat: float) -> bpy.types.Material:
    mat_name = f"LandParcel_Class_{class_id}"
    if mat_name in bpy.data.materials:
        return bpy.data.materials[mat_name]
    mat = bpy.data.materials.new(name=mat_name)
    mat.use_nodes = True
    mat.use_backface_culling = False
    nodes = mat.node_tree.nodes
    links = mat.node_tree.links
    nodes.clear()

    output_node = nodes.new(type="ShaderNodeOutputMaterial")
    output_node.location = (400, 0)
    bsdf_node = nodes.new(type="ShaderNodeBsdfPrincipled")
    bsdf_node.location = (0, 0)
    tex_coord_node = nodes.new(type="ShaderNodeTexCoord")
    tex_coord_node.location = (-800, 0)
    tex_coord_node.label = "Use Object for world-space mapping"
    mapping_node = nodes.new(type="ShaderNodeMapping")
    mapping_node.location = (-600, 0)
    scale_factor = 1.0 / max(texture_repeat, 1e-6)
    mapping_node.inputs["Scale"].default_value = (scale_factor, scale_factor, scale_factor)
    links.new(tex_coord_node.outputs["Object"], mapping_node.inputs["Vector"])
    links.new(bsdf_node.outputs["BSDF"], output_node.inputs["Surface"])
    return mat


def clear_scene():
    for obj in list(bpy.data.objects):
        bpy.data.objects.remove(obj, do_unlink=True)
    for mesh in list(bpy.data.meshes):
        bpy.data.meshes.remove(mesh, do_unlink=True)
    for mat in list(bpy.data.materials):
        bpy.data.materials.remove(mat, do_unlink=True)
    print("[scene] cleared")


def save_blend_file(filepath: str):
    abs_path = os.path.abspath(filepath)
    out_dir = os.path.dirname(abs_path)
    if out_dir:
        os.makedirs(out_dir, exist_ok=True)
    bpy.ops.wm.save_as_mainfile(filepath=abs_path)
    print(f"[save] {abs_path}")


# ==================== I/O ====================

def read_gpkg_file(filepath: str) -> Optional[Any]:
    if not GEOPANDAS_AVAILABLE:
        print("[error] geopandas not installed (run: urbanworld env install-blender-deps)")
        return None
    if not os.path.exists(filepath):
        print(f"[error] missing input: {filepath}")
        return None
    print(f"[read] {filepath}")
    t0 = time.time()
    gdf = gpd.read_file(filepath)
    print(f"[read] {len(gdf)} records ({time.time() - t0:.2f}s)")
    return gdf


# ==================== Per-class processing ====================

def process_class(class_id, parcels, transformer) -> Tuple[int, int]:
    print(f"\n[class {class_id}] start, {len(parcels)} parcels")
    t0 = time.time()
    if ARGS.max_parcels_per_class and len(parcels) > ARGS.max_parcels_per_class:
        parcels = parcels.iloc[: ARGS.max_parcels_per_class]
        print(f"[class {class_id}] capped to first {ARGS.max_parcels_per_class}")

    builder = ParcelMeshBuilder(ARGS.texture_repeat)
    success = 0
    fail = 0

    for idx, (_, row) in enumerate(parcels.iterrows()):
        if idx % 1000 == 0 and idx > 0:
            print(f"[class {class_id}] {idx}/{len(parcels)} ({idx/len(parcels)*100:.1f}%)")
        geometry = row.geometry
        if geometry is None or geometry.is_empty:
            fail += 1
            continue
        vertices, faces = process_multipolygon(geometry, transformer, ARGS.parcel_height)
        if not vertices or not faces:
            fail += 1
            continue
        if builder.add_parcel(vertices, faces):
            success += 1
        else:
            fail += 1

    vertices, faces, uvs = builder.build()
    if vertices and faces:
        mesh_name = f"LandParcel_Class_{class_id}"
        mesh = create_mesh_fast(mesh_name, vertices, faces, uvs)
        if mesh:
            material = create_placeholder_material(class_id, ARGS.texture_repeat)
            mesh.materials.append(material)
            obj = bpy.data.objects.new(mesh_name, mesh)
            if "LandParcels" not in bpy.data.collections:
                col = bpy.data.collections.new("LandParcels")
                bpy.context.scene.collection.children.link(col)
            else:
                col = bpy.data.collections["LandParcels"]
            col.objects.link(obj)
            print(
                f"[class {class_id}] mesh built: "
                f"{len(vertices):,} verts, {len(faces):,} faces"
            )
    print(f"[class {class_id}] done in {time.time() - t0:.2f}s ({success} ok, {fail} fail)")
    return success, fail


# ==================== Main ====================

def _parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument("--input", required=True)
    parser.add_argument("--output", required=True)
    parser.add_argument("--ref-lat", dest="ref_lat", type=float, required=True)
    parser.add_argument("--ref-lon", dest="ref_lon", type=float, required=True)
    parser.add_argument("--parcel-height", dest="parcel_height", type=float, default=0.1)
    parser.add_argument("--texture-repeat", dest="texture_repeat", type=float, default=50.0)
    parser.add_argument("--max-parcels-per-class", dest="max_parcels_per_class", type=int, default=0)
    if "--" in sys.argv:
        argv = sys.argv[sys.argv.index("--") + 1:]
    else:
        argv = []
    return parser.parse_args(argv)


def main():
    global ARGS
    ARGS = _parse_args()
    print("=" * 60)
    print("env_parcel_mesh: VirtualCity LandParcel → Blender mesh")
    print(f"  input:  {ARGS.input}")
    print(f"  output: {ARGS.output}")
    print(f"  ref:    ({ARGS.ref_lon}, {ARGS.ref_lat})")
    print(f"  height: {ARGS.parcel_height} m, uv-repeat: {ARGS.texture_repeat} m")
    print("=" * 60)

    if not GEOPANDAS_AVAILABLE or not SHAPELY_AVAILABLE:
        print("[abort] geopandas/shapely missing in Blender Python")
        return

    clear_scene()
    gdf = read_gpkg_file(ARGS.input)
    if gdf is None:
        return

    transformer = CoordinateTransformer(ARGS.ref_lat, ARGS.ref_lon)

    if "Class" in gdf.columns:
        unique_classes = sorted(gdf["Class"].unique())
        print(f"[scan] {len(unique_classes)} classes: {unique_classes}")
    else:
        print("[scan] no 'Class' column; treating all parcels as class 0")
        gdf["Class"] = 0
        unique_classes = [0]

    total_ok = 0
    total_fail = 0
    for class_id in unique_classes:
        sub = gdf[gdf["Class"] == class_id]
        ok, fail = process_class(class_id, sub, transformer)
        total_ok += ok
        total_fail += fail

    save_blend_file(ARGS.output)
    print(f"[done] {total_ok:,} ok, {total_fail:,} fail")


if __name__ == "__main__":
    main()
