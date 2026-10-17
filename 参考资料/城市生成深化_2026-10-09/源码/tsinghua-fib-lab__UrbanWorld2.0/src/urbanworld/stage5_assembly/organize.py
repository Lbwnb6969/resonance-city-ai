"""Stage 5: Organize all scene elements into a combined GLTF file via Blender."""

from __future__ import annotations

from urbanworld.common.blender_runner import run_blender_script
from urbanworld.config import get_config


def run(
    obj_save_path: str,
    output_path: str,
    *,
    road_blend: str | None = None,
    parcel_blend: str | None = None,
    tree_json: str | None = None,
    tree_mesh: str | None = None,
    **config_overrides,
) -> None:
    """Assemble buildings, terrain, roads, vegetation into a combined scene.

    Args:
        obj_save_path: Root directory with building/terrain/road subdirectories.
        output_path: Output GLTF file path.
        road_blend: optional .blend from ``urbanworld env roads``;
            its ``Roads`` and ``Junctions`` collections are appended.
        parcel_blend: optional .blend from ``urbanworld env parcel-mesh``;
            its ``LandParcels`` collection is appended.
        tree_json: optional JSON from ``urbanworld env trees``.
        tree_mesh: optional base mesh (.glb / .fbx / .obj) used for
            linked-mesh tree instancing; without it, trees become Empty
            placeholders carrying scale/type custom properties.
    """
    cfg = get_config(**config_overrides)
    args = ["--obj_save_path", obj_save_path, "--output_path", output_path]
    if road_blend:
        args += ["--road_blend", road_blend]
    if parcel_blend:
        args += ["--parcel_blend", parcel_blend]
    if tree_json:
        args += ["--tree_json", tree_json]
    if tree_mesh:
        args += ["--tree_mesh", tree_mesh]
    run_blender_script(cfg.blender_path, "organize_scene.py", args)
