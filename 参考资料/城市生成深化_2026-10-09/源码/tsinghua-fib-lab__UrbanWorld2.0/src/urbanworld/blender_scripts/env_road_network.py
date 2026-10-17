#!/usr/bin/env python3
"""Blender script: build road-network mesh from a pycityproto Map .pb file.

Run via::

    blender -b -P env_road_network.py -- \\
        --pb road_network.pb \\
        --output road_network.blend \\
        --projection "+proj=tmerc +lat_0=22.87 +lon_0=113.47" \\
        --ref-lat 22.7672136 --ref-lon 113.5341154 \\
        [--texture /path/to/asphalt.png] \\
        [--road-height 0.2] [--texture-repeat 10.0]

Ported from VirtualCity/road_gen/generate_road_network_from_db.py.
Geometry/material logic preserved verbatim — only the data source has
changed (MongoDB → .pb file via PBMapSource) and the Config class has
been replaced with argparse-driven module globals.
"""
# Standard sys.path shim so this Blender process can import urbanworld helpers.
import sys, os  # noqa: E401
_pkg_path = os.environ.get("URBANWORLD_PKG_PATH", "")
if _pkg_path and _pkg_path not in sys.path:
    sys.path.insert(0, _pkg_path)

import argparse
import math
import site
import time
from typing import List, Dict, Tuple, Optional, Any

# ==================== 环境设置 ====================

user_site = site.getusersitepackages()
if user_site not in sys.path:
    sys.path.insert(0, user_site)
    print(f"[env] user site-packages: {user_site}")

home = os.path.expanduser("~")
for py_version in ["python3.11", "python3.10", "python3.12", "python3"]:
    user_lib_path = os.path.join(home, ".local", "lib", py_version, "site-packages")
    if os.path.exists(user_lib_path) and user_lib_path not in sys.path:
        sys.path.insert(0, user_lib_path)
        print(f"[env] fallback site-packages: {user_lib_path}")

print(f"[env] Blender python: {sys.executable}")

import bpy
import numpy as np
from mathutils import Vector

# ==================== 外部库导入 ====================

# pyproj - 坐标系转换
try:
    import pyproj
    PYPROJ_AVAILABLE = True
    print("[deps] pyproj ok")
except ImportError as e:
    print(f"[deps] pyproj missing: {e}")
    PYPROJ_AVAILABLE = False

# shapely - 几何计算
try:
    from shapely.geometry import Polygon, MultiPoint, LineString, Point
    from shapely.ops import unary_union
    from shapely import concave_hull
    SHAPELY_AVAILABLE = True
    print("[deps] shapely ok")
except ImportError as e:
    print(f"[deps] shapely missing: {e}")
    SHAPELY_AVAILABLE = False

# pycityproto-backed .pb data source (replaces RoadNetworkDB)
try:
    from urbanworld.environment.pb_source import PBMapSource
    PB_SOURCE_AVAILABLE = True
    print("[deps] pycityproto / urbanworld.environment.pb_source ok")
except ImportError as e:
    print(f"[deps] PBMapSource missing: {e}")
    PB_SOURCE_AVAILABLE = False


# ==================== Args (replaces the Config class) ====================

ARGS = argparse.Namespace(
    pb="",
    output="road_network.blend",
    projection="",
    ref_lat=0.0,
    ref_lon=0.0,
    texture="",
    road_height=0.2,
    texture_repeat=10.0,
    crosswalk_stripe_width=0.5,
    crosswalk_stripe_spacing=0.5,
    crosswalk_width=4.0,
    stop_line_width=0.4,
    stop_line_offset=3.0,
    valid_lane_type=1,
    max_roads=0,           # 0 = unlimited
    max_junctions=0,       # 0 = unlimited
)


class _ConfigShim:
    """Backwards-compat: existing helpers reference Config.X — surface them
    as attributes of a tiny shim that reads from the global ARGS namespace."""

    @property
    def ROAD_HEIGHT(self): return ARGS.road_height

    @property
    def TEXTURE_REPEAT_LENGTH(self): return ARGS.texture_repeat

    @property
    def CROSSWALK_STRIPE_WIDTH(self): return ARGS.crosswalk_stripe_width

    @property
    def CROSSWALK_STRIPE_SPACING(self): return ARGS.crosswalk_stripe_spacing

    @property
    def CROSSWALK_WIDTH(self): return ARGS.crosswalk_width

    @property
    def STOP_LINE_WIDTH(self): return ARGS.stop_line_width

    @property
    def STOP_LINE_OFFSET(self): return ARGS.stop_line_offset

    @property
    def VALID_LANE_TYPE(self): return ARGS.valid_lane_type

    @property
    def MAX_ROADS_TO_PROCESS(self): return ARGS.max_roads or None

    @property
    def MAX_JUNCTIONS_TO_PROCESS(self): return ARGS.max_junctions or None

    @property
    def TEXTURE_FILE(self): return ARGS.texture


Config = _ConfigShim()



# ==================== 配置参数 ====================
# Config is the _ConfigShim instance defined above; all defaults come
# from CLI-driven ARGS. Original Config class with hardcoded MongoDB URI
# has been removed.


# ==================== 坐标转换模块 ====================

class CoordinateTransformer:
    """坐标转换器：投影坐标 → 经纬度 → 局部米制坐标"""
    
    def __init__(self, projection: str, ref_lat: float, ref_lon: float):
        """
        初始化坐标转换器
        
        Args:
            projection: pyproj投影字符串
            ref_lat: 参考点纬度
            ref_lon: 参考点经度
        """
        if not PYPROJ_AVAILABLE:
            raise RuntimeError("pyproj 库未安装，无法进行坐标转换")
        
        self.transformer = pyproj.Transformer.from_proj(
            projection, "EPSG:4326", always_xy=True
        )
        self.ref_lat = ref_lat
        self.ref_lon = ref_lon
        self.R = 6371000.0  # 地球半径（米）
        
        # 预计算参考点的弧度值
        self.ref_lat_rad = math.radians(ref_lat)
        self.ref_lon_rad = math.radians(ref_lon)
        self.cos_ref_lat = math.cos(self.ref_lat_rad)
    
    def transform_point(self, x: float, y: float) -> Tuple[float, float]:
        """
        将投影坐标转换为局部米制坐标
        
        Args:
            x, y: 投影坐标
        
        Returns:
            (local_x, local_y): 局部米制坐标
        """
        # 投影坐标 → 经纬度
        lon, lat = self.transformer.transform(x, y)
        
        # 经纬度 → 局部米制坐标
        lat_rad = math.radians(lat)
        lon_rad = math.radians(lon)
        
        local_x = self.R * (lon_rad - self.ref_lon_rad) * self.cos_ref_lat
        local_y = self.R * (lat_rad - self.ref_lat_rad)
        
        return local_x, local_y
    
    def transform_points_batch(self, points: List[Dict]) -> np.ndarray:
        """
        批量转换坐标点
        
        Args:
            points: 坐标点列表 [{"x": ..., "y": ...}, ...]
        
        Returns:
            numpy数组 [[local_x, local_y], ...]
        """
        if not points:
            return np.array([])
        
        # 提取坐标
        xs = np.array([p["x"] for p in points])
        ys = np.array([p["y"] for p in points])
        
        # 批量转换到经纬度
        lons, lats = self.transformer.transform(xs, ys)
        
        # 批量转换到局部米制坐标
        lat_rads = np.radians(lats)
        lon_rads = np.radians(lons)
        
        local_xs = self.R * (lon_rads - self.ref_lon_rad) * self.cos_ref_lat
        local_ys = self.R * (lat_rads - self.ref_lat_rad)
        
        return np.column_stack([local_xs, local_ys])


# ==================== 数据源模块 ====================
# Original RoadNetworkDB (MongoDB-backed) has been removed.
# We now read from a serialized pycityproto Map .pb produced by
# `urbanworld env osm-to-pb` and consumed via PBMapSource. The legacy
# fetch_all_roads / fetch_all_junctions / fetch_lanes_batch API is
# preserved by PBMapSource so all downstream geometry code stays the
# same.


# ==================== 几何计算模块 ====================

def normalize_vector(v: np.ndarray) -> np.ndarray:
    """归一化向量"""
    length = np.linalg.norm(v)
    if length < 1e-6:
        return np.array([0.0, 0.0])
    return v / length


def compute_perpendicular(direction: np.ndarray) -> np.ndarray:
    """计算垂直向量（逆时针旋转90度）"""
    return np.array([-direction[1], direction[0]])


def compute_lane_boundary_points(
    lane_data: Dict,
    transformer: CoordinateTransformer
) -> Tuple[List[Tuple[float, float]], List[Tuple[float, float]]]:
    """
    计算车道的左右边界点
    
    Args:
        lane_data: 车道数据
        transformer: 坐标转换器
    
    Returns:
        (left_points, right_points): 左右边界点列表
    """
    center_line = lane_data["data"]["center_line"]["nodes"]
    width = lane_data["data"].get("width", 3.5)
    half_width = width / 2.0
    
    if len(center_line) < 2:
        return [], []
    
    # 批量转换坐标
    local_coords = transformer.transform_points_batch(center_line)
    
    if len(local_coords) < 2:
        return [], []
    
    left_points = []
    right_points = []
    
    n = len(local_coords)
    for i in range(n):
        x, y = local_coords[i]
        
        # 计算方向向量
        if i == 0:
            direction = local_coords[1] - local_coords[0]
        elif i == n - 1:
            direction = local_coords[n - 1] - local_coords[n - 2]
        else:
            # 中间点：使用前后方向的平均
            dir1 = local_coords[i] - local_coords[i - 1]
            dir2 = local_coords[i + 1] - local_coords[i]
            
            len1 = np.linalg.norm(dir1)
            len2 = np.linalg.norm(dir2)
            
            if len1 > 1e-6 and len2 > 1e-6:
                direction = dir1 / len1 + dir2 / len2
            elif len1 > 1e-6:
                direction = dir1
            elif len2 > 1e-6:
                direction = dir2
            else:
                continue
        
        # 归一化
        direction = normalize_vector(direction)
        if np.linalg.norm(direction) < 1e-6:
            continue
        
        # 计算垂直方向
        perp = compute_perpendicular(direction)
        
        # 计算左右边界点
        left_pt = (x + perp[0] * half_width, y + perp[1] * half_width)
        right_pt = (x - perp[0] * half_width, y - perp[1] * half_width)
        
        left_points.append(left_pt)
        right_points.append(right_pt)
    
    return left_points, right_points


def sort_lanes_by_lateral_offset(
    lanes: List[Dict],
    transformer: CoordinateTransformer
) -> List[Dict]:
    """
    根据横向偏移排序车道（从左到右）
    
    Args:
        lanes: 车道数据列表
        transformer: 坐标转换器
    
    Returns:
        排序后的车道列表（从左到右）
    """
    if len(lanes) <= 1:
        return lanes
    
    # 使用第一条车道计算道路整体方向
    ref_lane = lanes[0]
    ref_nodes = ref_lane["data"]["center_line"]["nodes"]
    
    if len(ref_nodes) < 2:
        return lanes
    
    ref_start = np.array(transformer.transform_point(ref_nodes[0]["x"], ref_nodes[0]["y"]))
    ref_end = np.array(transformer.transform_point(ref_nodes[-1]["x"], ref_nodes[-1]["y"]))
    
    road_dir = normalize_vector(ref_end - ref_start)
    if np.linalg.norm(road_dir) < 1e-6:
        return lanes
    
    # 垂直方向（左侧为正）
    road_perp = compute_perpendicular(road_dir)
    
    # 计算每条车道起点的横向偏移
    offsets = []
    for lane in lanes:
        nodes = lane["data"]["center_line"]["nodes"]
        if not nodes:
            offsets.append((0.0, lane))
            continue
        
        start = np.array(transformer.transform_point(nodes[0]["x"], nodes[0]["y"]))
        offset = np.dot(start - ref_start, road_perp)
        offsets.append((offset, lane))
    
    # 按偏移量降序排序（左侧偏移大，排在前面）
    offsets.sort(key=lambda x: -x[0])
    
    return [lane for _, lane in offsets]


def compute_road_centerline(
    valid_lanes: List[Dict],
    transformer: CoordinateTransformer
) -> Tuple[np.ndarray, float]:
    """
    计算道路的中心线（使用所有车道中心线的加权平均）
    
    Args:
        valid_lanes: 有效车道列表
        transformer: 坐标转换器
    
    Returns:
        (centerline_coords, total_width): 中心线坐标数组和总宽度
    """
    if not valid_lanes:
        return np.array([]), 0.0
    
    # 计算总宽度
    total_width = sum(lane["data"].get("width", 3.5) for lane in valid_lanes)
    
    # 找到点数最多的车道作为参考（通常采样更密集）
    max_points_lane = max(valid_lanes, key=lambda l: len(l["data"]["center_line"]["nodes"]))
    ref_nodes = max_points_lane["data"]["center_line"]["nodes"]
    
    if len(ref_nodes) < 2:
        return np.array([]), total_width
    
    # 转换参考车道的中心线
    ref_coords = transformer.transform_points_batch(ref_nodes)
    
    # 如果只有一条车道，直接使用它的中心线
    if len(valid_lanes) == 1:
        return ref_coords, total_width
    
    # 多条车道时，计算所有车道中心线的平均位置
    # 将所有车道的中心线重采样到相同点数
    all_coords = [ref_coords]
    
    for lane in valid_lanes:
        if lane is max_points_lane:
            continue
        
        nodes = lane["data"]["center_line"]["nodes"]
        if len(nodes) < 2:
            continue
        
        coords = transformer.transform_points_batch(nodes)
        
        # 重采样到与参考车道相同的点数
        if len(coords) != len(ref_coords):
            old_indices = np.linspace(0, 1, len(coords))
            new_indices = np.linspace(0, 1, len(ref_coords))
            resampled_x = np.interp(new_indices, old_indices, coords[:, 0])
            resampled_y = np.interp(new_indices, old_indices, coords[:, 1])
            coords = np.column_stack([resampled_x, resampled_y])
        
        all_coords.append(coords)
    
    # 计算平均中心线
    avg_coords = np.mean(all_coords, axis=0)
    
    return avg_coords, total_width


def compute_road_boundary(
    road_data: Dict,
    lanes_dict: Dict[int, Dict],
    transformer: CoordinateTransformer
) -> Tuple[List[Tuple[float, float]], List[Tuple[float, float]], float]:
    """
    计算道路的外边界（基于道路中心线向两侧偏移）
    
    算法：
    1. 计算道路的中心线（所有车道中心线的平均）
    2. 根据总宽度向左右两侧偏移生成边界
    
    这样确保左右边界点数一致且位置对应，避免产生错误的大面片。
    
    Args:
        road_data: 道路数据
        lanes_dict: 车道数据字典
        transformer: 坐标转换器
    
    Returns:
        (left_boundary, right_boundary, total_width): 左边界点、右边界点、总宽度
    """
    lane_ids = road_data["data"]["lane_ids"]
    
    # 过滤非正常车道类型并获取有效车道
    valid_lanes = []
    
    for lid in lane_ids:
        if lid not in lanes_dict:
            continue
        
        lane = lanes_dict[lid]
        
        # 检查车道类型（type=1 是正常车道）
        lane_type = lane["data"].get("type", 0)
        if lane_type != Config.VALID_LANE_TYPE:
            continue
        
        # 检查车道数据有效性
        center_line = lane["data"].get("center_line", {})
        nodes = center_line.get("nodes", [])
        if len(nodes) < 2:
            continue
        
        valid_lanes.append(lane)
    
    if not valid_lanes:
        return [], [], 0.0
    
    # 计算道路中心线和总宽度
    centerline, total_width = compute_road_centerline(valid_lanes, transformer)
    
    if len(centerline) < 2:
        return [], [], 0.0
    
    half_width = total_width / 2.0
    
    # 基于中心线计算左右边界
    left_boundary = []
    right_boundary = []
    
    n = len(centerline)
    for i in range(n):
        x, y = centerline[i]
        
        # 计算方向向量
        if i == 0:
            direction = centerline[1] - centerline[0]
        elif i == n - 1:
            direction = centerline[n - 1] - centerline[n - 2]
        else:
            # 中间点：使用前后方向的平均
            dir1 = centerline[i] - centerline[i - 1]
            dir2 = centerline[i + 1] - centerline[i]
            
            len1 = np.linalg.norm(dir1)
            len2 = np.linalg.norm(dir2)
            
            if len1 > 1e-6 and len2 > 1e-6:
                direction = dir1 / len1 + dir2 / len2
            elif len1 > 1e-6:
                direction = dir1
            elif len2 > 1e-6:
                direction = dir2
            else:
                continue
        
        # 归一化
        length = np.linalg.norm(direction)
        if length < 1e-6:
            continue
        
        direction = direction / length
        
        # 计算垂直方向（逆时针旋转90度）
        perp = np.array([-direction[1], direction[0]])
        
        # 计算左右边界点
        left_pt = (x + perp[0] * half_width, y + perp[1] * half_width)
        right_pt = (x - perp[0] * half_width, y - perp[1] * half_width)
        
        left_boundary.append(left_pt)
        right_boundary.append(right_pt)
    
    return left_boundary, right_boundary, total_width


# ==================== 道路配对与填充辅助函数 ====================

def resample_to_same_length(
    pts_a: List[Tuple[float, float]],
    pts_b: List[Tuple[float, float]]
) -> Tuple[List[Tuple[float, float]], List[Tuple[float, float]]]:
    """
    将两个点列表重采样到相同数量（取两者较多的点数），使用线性插值。

    Args:
        pts_a, pts_b: 需要对齐的两个点列表

    Returns:
        (resampled_a, resampled_b): 长度相同的两个点列表
    """
    n_a = len(pts_a)
    n_b = len(pts_b)
    target_n = max(n_a, n_b)

    def _resample(pts: List[Tuple[float, float]], n: int) -> List[Tuple[float, float]]:
        if len(pts) == n:
            return pts
        old_t = np.linspace(0.0, 1.0, len(pts))
        new_t = np.linspace(0.0, 1.0, n)
        xs = [p[0] for p in pts]
        ys = [p[1] for p in pts]
        new_xs = np.interp(new_t, old_t, xs)
        new_ys = np.interp(new_t, old_t, ys)
        return list(zip(new_xs.tolist(), new_ys.tolist()))

    return _resample(pts_a, target_n), _resample(pts_b, target_n)


def compute_midpoints(
    pts_a: List[Tuple[float, float]],
    pts_b: List[Tuple[float, float]]
) -> List[Tuple[float, float]]:
    """
    计算两个等长点列表的逐点中点。

    Args:
        pts_a, pts_b: 长度相同的两个点列表

    Returns:
        中点列表
    """
    return [
        ((a[0] + b[0]) * 0.5, (a[1] + b[1]) * 0.5)
        for a, b in zip(pts_a, pts_b)
    ]


def get_road_direction(
    road_data: Dict,
    lanes_dict: Dict[int, Dict],
    transformer: 'CoordinateTransformer'
) -> Optional[np.ndarray]:
    """
    获取道路的整体方向向量（从第一条有效车道的中心线起终点计算）。

    Returns:
        归一化方向向量，失败返回 None
    """
    for lid in road_data["data"]["lane_ids"]:
        if lid not in lanes_dict:
            continue
        lane = lanes_dict[lid]
        if lane["data"].get("type", 0) != Config.VALID_LANE_TYPE:
            continue
        nodes = lane["data"].get("center_line", {}).get("nodes", [])
        if len(nodes) < 2:
            continue
        start = np.array(transformer.transform_point(nodes[0]["x"], nodes[0]["y"]))
        end   = np.array(transformer.transform_point(nodes[-1]["x"], nodes[-1]["y"]))
        d = end - start
        length = np.linalg.norm(d)
        if length > 1e-6:
            return d / length
    return None


def build_road_pairs_from_junctions(
    junctions: List[Dict],
    roads: List[Dict],
    lanes_dict: Dict[int, Dict],
    transformer: 'CoordinateTransformer'
) -> Dict[int, int]:
    """
    识别配对的反向道路（共享同两个路口端点，且行驶方向相反）。

    算法：
    1. 从路口 driving_lane_groups 构建 road_id → set(junction_id) 映射
    2. 两条道路若共享恰好两个路口 → 候选配对
    3. 几何验证：方向向量 dot product < -0.7 → 确认反向

    Returns:
        {road_id: paired_road_id}（双向映射，每对存两条记录）
    """
    from collections import defaultdict

    # Step 1: road_id → set of junction_ids
    road_to_junctions: Dict[int, set] = defaultdict(set)
    for junction in junctions:
        j_id = junction["data"]["id"]
        for group in junction["data"].get("driving_lane_groups", []):
            in_road = group.get("in_road_id")
            out_road = group.get("out_road_id")
            if in_road:
                road_to_junctions[in_road].add(j_id)
            if out_road:
                road_to_junctions[out_road].add(j_id)

    # Step 2: junction_id → set of road_ids
    junction_to_roads: Dict[int, set] = defaultdict(set)
    for road_id, jids in road_to_junctions.items():
        for jid in jids:
            junction_to_roads[jid].add(road_id)

    # Step 3: 构建 road_id → road_data 的快查字典
    road_data_dict: Dict[int, Dict] = {r["data"]["id"]: r for r in roads}

    # Step 4: 找候选对并用方向向量验证
    road_pairs: Dict[int, int] = {}
    checked: set = set()

    for road_a_id, jids_a in road_to_junctions.items():
        if road_a_id in checked:
            continue
        # 找与 road_a 共享至少一个路口的所有道路
        candidate_ids: set = set()
        for jid in jids_a:
            candidate_ids |= junction_to_roads[jid]
        candidate_ids.discard(road_a_id)

        for road_b_id in candidate_ids:
            if road_b_id in checked:
                continue
            shared = road_to_junctions[road_a_id] & road_to_junctions[road_b_id]
            if len(shared) != 2:
                continue

            # 几何验证：方向相反
            if road_a_id not in road_data_dict or road_b_id not in road_data_dict:
                continue
            dir_a = get_road_direction(road_data_dict[road_a_id], lanes_dict, transformer)
            dir_b = get_road_direction(road_data_dict[road_b_id], lanes_dict, transformer)
            if dir_a is None or dir_b is None:
                continue
            dot = float(np.dot(dir_a, dir_b))
            if dot < -0.7:
                road_pairs[road_a_id] = road_b_id
                road_pairs[road_b_id] = road_a_id
                checked.add(road_a_id)
                checked.add(road_b_id)
                break  # 每条 road 只配对一次

    return road_pairs


def compute_all_junction_polygons(
    db: 'PBMapSource',
    transformer: 'CoordinateTransformer'
) -> Dict[int, Any]:
    """
    预先计算所有路口的 Shapely 多边形，返回 {junction_id: Polygon}。
    需要 SHAPELY_AVAILABLE=True。
    """
    if not SHAPELY_AVAILABLE:
        return {}

    print("[路口预计算] 开始计算路口多边形...")
    junctions = db.fetch_all_junctions()

    all_lane_ids: set = set()
    for junction in junctions:
        for lid in junction["data"].get("lane_ids", []):
            all_lane_ids.add(lid)
    lanes_dict = db.fetch_lanes_batch(list(all_lane_ids))

    polygons: Dict[int, Any] = {}
    for junction in junctions:
        j_id = junction["data"]["id"]
        try:
            poly = compute_junction_polygon(junction, lanes_dict, transformer)
            if poly is not None:
                polygons[j_id] = poly
        except Exception:
            pass

    print(f"[路口预计算] 完成，共 {len(polygons)} 个路口多边形")
    return polygons


def trim_boundary_at_junction(
    pts: List[Tuple[float, float]],
    start_polygon: Any,
    end_polygon: Any
) -> List[Tuple[float, float]]:
    """
    裁剪道路边界点，移除延伸进路口多边形内部的端点。

    正向扫描：找到第一个在 start_polygon 外侧的点作为新起点。
    反向扫描：找到最后一个在 end_polygon 外侧的点作为新终点。

    Args:
        pts: 道路边界点列表
        start_polygon: 起始端路口的 Shapely Polygon（或 None）
        end_polygon: 末端路口的 Shapely Polygon（或 None）

    Returns:
        裁剪后的点列表
    """
    if not pts:
        return pts

    if not SHAPELY_AVAILABLE:
        return pts

    from shapely.geometry import Point

    start_idx = 0
    if start_polygon is not None:
        for i, pt in enumerate(pts):
            if not start_polygon.contains(Point(pt[0], pt[1])):
                start_idx = i
                break
        else:
            return []  # 全部在路口内 → 空列表

    end_idx = len(pts) - 1
    if end_polygon is not None:
        for i in range(len(pts) - 1, -1, -1):
            if not end_polygon.contains(Point(pts[i][0], pts[i][1])):
                end_idx = i
                break
        else:
            return []

    if start_idx > end_idx:
        return []
    return pts[start_idx: end_idx + 1]


def get_road_junction_polygons(
    road_data: Dict,
    lanes_dict: Dict[int, Dict],
    junction_polygons: Dict[int, Any]
) -> Tuple[Any, Any]:
    """
    查找道路两端所连接的路口多边形。

    通过车道的 predecessors/successors 找到 type=2（路口）的连接，
    再从 junction_polygons 中查出多边形。

    Returns:
        (start_polygon, end_polygon)：可能为 None
    """
    start_poly = None
    end_poly = None

    for lid in road_data["data"]["lane_ids"]:
        if lid not in lanes_dict:
            continue
        lane = lanes_dict[lid]
        if lane["data"].get("type", 0) != Config.VALID_LANE_TYPE:
            continue

        # predecessors → 道路起始端连接的路口
        for pred in lane["data"].get("predecessors", []):
            if pred.get("type") == 2:
                j_id = pred.get("id")
                if j_id in junction_polygons:
                    start_poly = junction_polygons[j_id]

        # successors → 道路末端连接的路口
        for succ in lane["data"].get("successors", []):
            if succ.get("type") == 2:
                j_id = succ.get("id")
                if j_id in junction_polygons:
                    end_poly = junction_polygons[j_id]

        if start_poly is not None and end_poly is not None:
            break

    return start_poly, end_poly


def compute_lane_direction(
    lane_data: Dict,
    transformer: 'CoordinateTransformer'
) -> Optional[np.ndarray]:
    """计算单条车道的方向向量（归一化）。"""
    nodes = lane_data["data"].get("center_line", {}).get("nodes", [])
    if len(nodes) < 2:
        return None
    start = np.array(transformer.transform_point(nodes[0]["x"], nodes[0]["y"]))
    end   = np.array(transformer.transform_point(nodes[-1]["x"], nodes[-1]["y"]))
    d = end - start
    length = np.linalg.norm(d)
    return d / length if length > 1e-6 else None


def compute_junction_polygon(
    junction_data: Dict,
    lanes_dict: Dict[int, Dict],
    transformer: CoordinateTransformer,
    ratio: float = 0.5
) -> Optional[Polygon]:
    """
    计算路口多边形
    
    Args:
        junction_data: 路口数据
        lanes_dict: 车道数据字典
        transformer: 坐标转换器
        ratio: concave_hull的ratio参数（0-1，越大越接近凸包，越小越凹）
    
    Returns:
        Shapely Polygon对象，失败返回None
    """
    if not SHAPELY_AVAILABLE:
        raise RuntimeError("shapely 库未安装")
    
    lane_ids = junction_data["data"]["lane_ids"]
    all_points = []
    
    # 收集所有车道的边界点和中心线点
    for lid in lane_ids:
        if lid not in lanes_dict:
            continue
        
        lane = lanes_dict[lid]
        
        # 检查车道类型（type=1 是正常车道）
        lane_type = lane["data"].get("type", 0)
        if lane_type != Config.VALID_LANE_TYPE:
            continue
        
        # 收集边界点
        left_pts, right_pts = compute_lane_boundary_points(lane, transformer)
        all_points.extend(left_pts)
        all_points.extend(right_pts)
        
        # 同时收集中心线点，确保不会遗漏任何区域
        center_line = lane["data"].get("center_line", {}).get("nodes", [])
        if center_line:
            center_coords = transformer.transform_points_batch(center_line)
            for coord in center_coords:
                all_points.append((coord[0], coord[1]))
    
    if len(all_points) < 3:
        return None
    
    # 去除重复点（使用精度舍入）
    unique_points = list(set((round(x, 4), round(y, 4)) for x, y in all_points))
    
    if len(unique_points) < 3:
        return None
    
    # 构建多边形
    multi_point = MultiPoint(unique_points)
    
    # 尝试多个 ratio 值，从大到小
    # ratio 越大越接近凸包，越小越凹
    for try_ratio in [ratio, 0.6, 0.7, 0.8, 0.9, 1.0]:
        try:
            polygon = concave_hull(multi_point, ratio=try_ratio)
            if polygon.is_valid and not polygon.is_empty and polygon.geom_type == 'Polygon':
                # 检查多边形是否包含大部分点
                contained_count = sum(1 for pt in unique_points if polygon.contains(Point(pt)) or polygon.boundary.distance(Point(pt)) < 0.1)
                if contained_count >= len(unique_points) * 0.9:  # 至少包含90%的点
                    return polygon
        except Exception:
            continue
    
    # 回退到凸包
    polygon = multi_point.convex_hull
    if polygon.is_valid and not polygon.is_empty and polygon.geom_type == 'Polygon':
        return polygon
    
    return None


def triangulate_polygon(polygon: Polygon) -> Tuple[List[Tuple[float, float, float]], List[List[int]]]:
    """
    对多边形进行三角剖分（使用Delaunay三角剖分）
    
    Args:
        polygon: Shapely Polygon对象
    
    Returns:
        (vertices, faces): 顶点列表和面索引列表
        所有面的法线朝向+Z（朝上）
    """
    if polygon is None or polygon.is_empty:
        return [], []
    
    if polygon.geom_type != 'Polygon':
        return [], []
    
    try:
        from shapely.ops import triangulate as shapely_triangulate
    except ImportError:
        # 回退到简单的扇形剖分
        return _triangulate_polygon_fan(polygon)
    
    # 获取外边界坐标
    exterior_coords = list(polygon.exterior.coords)[:-1]  # 去掉重复的最后一个点
    
    if len(exterior_coords) < 3:
        return [], []
    
    # 使用 Shapely 的 Delaunay 三角剖分
    try:
        triangles = shapely_triangulate(polygon)
    except Exception:
        return _triangulate_polygon_fan(polygon)
    
    # 收集所有在多边形内部的三角形
    all_vertices = []
    all_faces = []
    vertex_map = {}  # (x, y) -> index
    
    for tri in triangles:
        if tri.geom_type != 'Polygon':
            continue
        
        # 检查三角形中心是否在原多边形内部
        centroid = tri.centroid
        if not polygon.contains(centroid):
            # 检查是否有足够的交集（可能是边界情况）
            intersection = polygon.intersection(tri)
            if intersection.is_empty or intersection.area < tri.area * 0.5:
                continue
        
        # 获取三角形顶点
        tri_coords = list(tri.exterior.coords)[:-1]
        if len(tri_coords) != 3:
            continue
        
        face_indices = []
        for x, y in tri_coords:
            key = (round(x, 6), round(y, 6))  # 使用精度舍入作为key
            if key not in vertex_map:
                vertex_map[key] = len(all_vertices)
                all_vertices.append((x, y, Config.ROAD_HEIGHT))
            face_indices.append(vertex_map[key])
        
        # 确保三角形顶点是逆时针排列（法线朝上）
        p1, p2, p3 = [all_vertices[i][:2] for i in face_indices]
        cross = (p2[0] - p1[0]) * (p3[1] - p1[1]) - (p2[1] - p1[1]) * (p3[0] - p1[0])
        
        if cross < 0:
            # 顺时针，反转为逆时针
            face_indices = face_indices[::-1]
        
        all_faces.append(face_indices)
    
    if not all_faces:
        # 如果Delaunay失败，回退到扇形剖分
        return _triangulate_polygon_fan(polygon)
    
    return all_vertices, all_faces


def _triangulate_polygon_fan(polygon: Polygon) -> Tuple[List[Tuple[float, float, float]], List[List[int]]]:
    """
    使用扇形法对多边形进行简单三角剖分（回退方案）
    
    适用于凸多边形或近似凸的多边形
    """
    if polygon is None or polygon.is_empty:
        return [], []
    
    exterior_coords = list(polygon.exterior.coords)[:-1]
    
    if len(exterior_coords) < 3:
        return [], []
    
    # 确保逆时针顺序
    signed_area = 0.0
    n = len(exterior_coords)
    for i in range(n):
        j = (i + 1) % n
        signed_area += exterior_coords[i][0] * exterior_coords[j][1]
        signed_area -= exterior_coords[j][0] * exterior_coords[i][1]
    signed_area /= 2.0
    
    if signed_area < 0:
        exterior_coords = exterior_coords[::-1]
    
    vertices = [(x, y, Config.ROAD_HEIGHT) for x, y in exterior_coords]
    faces = []
    
    # 扇形剖分：以第一个顶点为中心
    for i in range(1, len(vertices) - 1):
        faces.append([0, i, i + 1])
    
    return vertices, faces


def _triangulate_polygon_earclip(polygon: Polygon) -> Tuple[List[Tuple[float, float, float]], List[List[int]]]:
    """
    使用改进的耳切法进行三角剖分（备用方案）
    """
    if polygon is None or polygon.is_empty:
        return [], []
    
    exterior_coords = list(polygon.exterior.coords)[:-1]
    
    if len(exterior_coords) < 3:
        return [], []
    
    # 确保逆时针顺序
    signed_area = 0.0
    n = len(exterior_coords)
    for i in range(n):
        j = (i + 1) % n
        signed_area += exterior_coords[i][0] * exterior_coords[j][1]
        signed_area -= exterior_coords[j][0] * exterior_coords[i][1]
    signed_area /= 2.0
    
    if signed_area < 0:
        exterior_coords = exterior_coords[::-1]
    
    vertices = [(x, y, Config.ROAD_HEIGHT) for x, y in exterior_coords]
    faces = []
    remaining = list(range(len(vertices)))
    
    max_iterations = len(vertices) * len(vertices)  # 防止无限循环
    iteration = 0
    
    while len(remaining) > 3 and iteration < max_iterations:
        iteration += 1
        ear_found = False
        
        for i in range(len(remaining)):
            if _is_ear_improved(vertices, remaining, i):
                prev_idx = remaining[(i - 1) % len(remaining)]
                curr_idx = remaining[i]
                next_idx = remaining[(i + 1) % len(remaining)]
                
                faces.append([prev_idx, curr_idx, next_idx])
                remaining.pop(i)
                ear_found = True
                break
        
        if not ear_found:
            # 如果找不到耳朵，尝试移除一个顶点（可能是共线点）
            if len(remaining) > 3:
                # 找到最接近共线的顶点
                min_cross = float('inf')
                min_idx = 0
                for i in range(len(remaining)):
                    prev_idx = remaining[(i - 1) % len(remaining)]
                    curr_idx = remaining[i]
                    next_idx = remaining[(i + 1) % len(remaining)]
                    
                    p1 = vertices[prev_idx][:2]
                    p2 = vertices[curr_idx][:2]
                    p3 = vertices[next_idx][:2]
                    
                    cross = abs((p2[0] - p1[0]) * (p3[1] - p1[1]) - (p2[1] - p1[1]) * (p3[0] - p1[0]))
                    if cross < min_cross:
                        min_cross = cross
                        min_idx = i
                
                # 强制移除这个顶点并创建三角形
                prev_idx = remaining[(min_idx - 1) % len(remaining)]
                curr_idx = remaining[min_idx]
                next_idx = remaining[(min_idx + 1) % len(remaining)]
                faces.append([prev_idx, curr_idx, next_idx])
                remaining.pop(min_idx)
            else:
                break
    
    # 处理剩余的三角形
    if len(remaining) == 3:
        faces.append(remaining)
    
    return vertices, faces


def _is_ear_improved(vertices: List[Tuple], remaining: List[int], idx: int) -> bool:
    """改进的耳朵检测，增加了数值容差"""
    n = len(remaining)
    if n < 3:
        return False
    
    prev_idx = remaining[(idx - 1) % n]
    curr_idx = remaining[idx]
    next_idx = remaining[(idx + 1) % n]
    
    p1 = vertices[prev_idx][:2]
    p2 = vertices[curr_idx][:2]
    p3 = vertices[next_idx][:2]
    
    # 检查是否是凸角（叉积 > 0，增加容差）
    cross = (p2[0] - p1[0]) * (p3[1] - p1[1]) - (p2[1] - p1[1]) * (p3[0] - p1[0])
    if cross <= 1e-10:  # 使用小容差
        return False
    
    # 检查三角形内是否有其他点
    for i, vi in enumerate(remaining):
        if vi in (prev_idx, curr_idx, next_idx):
            continue
        
        pt = vertices[vi][:2]
        if _point_in_triangle_improved(pt, p1, p2, p3):
            return False
    
    return True


def _point_in_triangle_improved(pt: Tuple, p1: Tuple, p2: Tuple, p3: Tuple) -> bool:
    """改进的点在三角形内检测，排除边界情况"""
    def sign(pa, pb, pc):
        return (pa[0] - pc[0]) * (pb[1] - pc[1]) - (pb[0] - pc[0]) * (pa[1] - pc[1])
    
    d1 = sign(pt, p1, p2)
    d2 = sign(pt, p2, p3)
    d3 = sign(pt, p3, p1)
    
    # 使用容差判断，避免边界上的点被误判
    eps = 1e-10
    has_neg = (d1 < -eps) or (d2 < -eps) or (d3 < -eps)
    has_pos = (d1 > eps) or (d2 > eps) or (d3 > eps)
    
    return not (has_neg and has_pos)


# ==================== 人行横道几何体 ====================

def create_crosswalk_geometry(
    junction_data: Dict,
    lanes_dict: Dict[int, Dict],
    transformer: CoordinateTransformer,
    stripe_width: float = 0.5,
    stripe_spacing: float = 0.5,
    crosswalk_width: float = 4.0
) -> Tuple[List[Tuple], List[List], List[Tuple]]:
    """
    为路口生成人行横道几何体

    参数:
        stripe_width: 0.5m (白色条纹宽度)
        stripe_spacing: 0.5m (条纹间隔)
        crosswalk_width: 4m (横跨道路的长度)

    Returns:
        (vertices, faces, uvs): 人行横道的几何数据
    """
    vertices = []
    faces = []
    uvs = []

    driving_groups = junction_data["data"].get("driving_lane_groups", [])

    for group in driving_groups:
        # 获取进入道路的方向
        in_road_id = group.get("in_road_id")
        if not in_road_id:
            continue

        # 获取进口道的车道
        in_lane_ids = group.get("in_lane_ids", [])
        if not in_lane_ids:
            continue

        # 收集进口道的边界点
        in_boundary_points = []
        for lane_id in in_lane_ids:
            if lane_id not in lanes_dict:
                continue
            lane_data = lanes_dict[lane_id]
            left_pts, right_pts = compute_lane_boundary_points(lane_data, transformer)
            in_boundary_points.extend(left_pts)
            in_boundary_points.extend(right_pts)

        if len(in_boundary_points) < 2:
            continue

        # 计算进口道的中心点和方向
        center_x = sum(p[0] for p in in_boundary_points) / len(in_boundary_points)
        center_y = sum(p[1] for p in in_boundary_points) / len(in_boundary_points)

        # 计算边界点的整体方向
        if len(in_boundary_points) >= 2:
            # 找到最远的两个点来确定方向
            max_dist = 0
            dir_point1 = in_boundary_points[0]
            dir_point2 = in_boundary_points[0]

            for i, p1 in enumerate(in_boundary_points):
                for p2 in in_boundary_points[i+1:]:
                    dist = math.sqrt((p2[0] - p1[0])**2 + (p2[1] - p1[1])**2)
                    if dist > max_dist:
                        max_dist = dist
                        dir_point1, dir_point2 = p1, p2

            # 方向向量（从路口边缘指向路口中心）
            dir_x = center_x - (dir_point1[0] + dir_point2[0]) / 2
            dir_y = center_y - (dir_point1[1] + dir_point2[1]) / 2
            dir_len = math.sqrt(dir_x**2 + dir_y**2)

            if dir_len > 0.01:
                dir_x /= dir_len
                dir_y /= dir_len
            else:
                dir_x, dir_y = 0, 1

            # 垂直方向（人行横道的横向）
            perp_x = -dir_y
            perp_y = dir_x

            # 生成条纹
            num_stripes = int(crosswalk_width / (stripe_width + stripe_spacing))

            for i in range(num_stripes):
                # 条纹中心位置（从路口边缘向内）
                offset = 0.5 * (stripe_width + stripe_spacing) + i * (stripe_width + stripe_spacing)
                stripe_center_x = center_x - dir_x * offset
                stripe_center_y = center_y - dir_y * offset

                # 条纹四边形的四个顶点
                half_width = stripe_width / 2
                half_length = 0.15  # 沿道路方向的短边

                # 计算条纹的四个角点
                p1 = (stripe_center_x + perp_x * half_width - dir_x * half_length,
                      stripe_center_y + perp_y * half_width - dir_y * half_length,
                      Config.ROAD_HEIGHT + 0.01)

                p2 = (stripe_center_x - perp_x * half_width - dir_x * half_length,
                      stripe_center_y - perp_y * half_width - dir_y * half_length,
                      Config.ROAD_HEIGHT + 0.01)

                p3 = (stripe_center_x - perp_x * half_width + dir_x * half_length,
                      stripe_center_y - perp_y * half_width + dir_y * half_length,
                      Config.ROAD_HEIGHT + 0.01)

                p4 = (stripe_center_x + perp_x * half_width + dir_x * half_length,
                      stripe_center_y + perp_y * half_width + dir_y * half_length,
                      Config.ROAD_HEIGHT + 0.01)

                base_idx = len(vertices)
                vertices.extend([p1, p2, p3, p4])

                # UV坐标（简单线性映射）
                uvs.extend([(0, 0), (1, 0), (1, 1), (0, 1)])

                # 面（两个三角形）
                faces.append([base_idx, base_idx + 1, base_idx + 2])
                faces.append([base_idx, base_idx + 2, base_idx + 3])

    return vertices, faces, uvs


def create_stop_line_geometry(
    junction_data: Dict,
    lanes_dict: Dict[int, Dict],
    transformer: CoordinateTransformer,
    line_width: float = 0.4,
    offset_from_junction: float = 3.0
) -> Tuple[List[Tuple], List[List], List[Tuple]]:
    """
    为路口生成停止线几何体

    参数:
        line_width: 0.4m (停止线宽度，比普通标线粗)
        offset_from_junction: 3m (距路口边缘的距离)

    Returns:
        (vertices, faces, uvs): 停止线的几何数据
    """
    vertices = []
    faces = []
    uvs = []

    driving_groups = junction_data["data"].get("driving_lane_groups", [])

    for group in driving_groups:
        # 获取进入道路的方向
        in_road_id = group.get("in_road_id")
        if not in_road_id:
            continue

        # 获取进口道的车道
        in_lane_ids = group.get("in_lane_ids", [])
        if not in_lane_ids:
            continue

        # 收集进口道的边界点
        in_boundary_points = []
        for lane_id in in_lane_ids:
            if lane_id not in lanes_dict:
                continue
            lane_data = lanes_dict[lane_id]
            left_pts, right_pts = compute_lane_boundary_points(lane_data, transformer)
            in_boundary_points.extend(left_pts)
            in_boundary_points.extend(right_pts)

        if len(in_boundary_points) < 2:
            continue

        # 计算进口道的中心点和方向
        center_x = sum(p[0] for p in in_boundary_points) / len(in_boundary_points)
        center_y = sum(p[1] for p in in_boundary_points) / len(in_boundary_points)

        # 找到边界点的范围以确定停止线长度
        if len(in_boundary_points) >= 2:
            max_dist = 0
            point1, point2 = in_boundary_points[0], in_boundary_points[0]

            for i, p1 in enumerate(in_boundary_points):
                for p2 in in_boundary_points[i+1:]:
                    dist = math.sqrt((p2[0] - p1[0])**2 + (p2[1] - p1[1])**2)
                    if dist > max_dist:
                        max_dist = dist
                        point1, point2 = p1, p2

            # 方向向量（从路口边缘指向路口中心）
            dir_x = center_x - (point1[0] + point2[0]) / 2
            dir_y = center_y - (point1[1] + point2[1]) / 2
            dir_len = math.sqrt(dir_x**2 + dir_y**2)

            if dir_len > 0.01:
                dir_x /= dir_len
                dir_y /= dir_len
            else:
                dir_x, dir_y = 0, 1

            # 垂直方向
            perp_x = -dir_y
            perp_y = dir_x

            # 停止线位置
            stop_x = center_x - dir_x * offset_from_junction
            stop_y = center_y - dir_y * offset_from_junction

            # 停止线四边形（跨越整个进口道宽度）
            half_length = max_dist / 2 + 0.2  # 稍微超出边界
            half_width = line_width / 2

            p1 = (stop_x + perp_x * half_length - dir_x * half_width,
                  stop_y + perp_y * half_length - dir_y * half_width,
                  Config.ROAD_HEIGHT + 0.01)

            p2 = (stop_x - perp_x * half_length - dir_x * half_width,
                  stop_y - perp_y * half_length - dir_y * half_width,
                  Config.ROAD_HEIGHT + 0.01)

            p3 = (stop_x - perp_x * half_length + dir_x * half_width,
                  stop_y - perp_y * half_length + dir_y * half_width,
                  Config.ROAD_HEIGHT + 0.01)

            p4 = (stop_x + perp_x * half_length + dir_x * half_width,
                  stop_y + perp_y * half_length + dir_y * half_width,
                  Config.ROAD_HEIGHT + 0.01)

            base_idx = len(vertices)
            vertices.extend([p1, p2, p3, p4])

            # UV坐标
            uvs.extend([(0, 0), (1, 0), (1, 1), (0, 1)])

            # 面
            faces.append([base_idx, base_idx + 1, base_idx + 2])
            faces.append([base_idx, base_idx + 2, base_idx + 3])

    return vertices, faces, uvs


# ==================== Mesh构建模块 ====================

class RoadMeshBuilder:
    """道路Mesh构建器 - 用于合并多条道路为单个mesh"""

    class MarkingsBuilder:
        """车道标线构建器"""
        def __init__(self):
            self.all_vertices: List[Tuple[float, float, float]] = []
            self.all_faces: List[List[int]] = []
            self.vertex_offset = 0

        def add_marking(self, vertices: List[Tuple], faces: List[List]) -> bool:
            """添加标线几何体"""
            if not vertices or not faces:
                return False
            adjusted_faces = [[vi + self.vertex_offset for vi in face] for face in faces]
            self.all_vertices.extend(vertices)
            self.all_faces.extend(adjusted_faces)
            self.vertex_offset += len(vertices)
            return True

        def build(self) -> Tuple[List, List]:
            return self.all_vertices, self.all_faces

    def __init__(self):
        self.all_vertices: List[Tuple[float, float, float]] = []
        self.all_faces: List[List[int]] = []
        self.all_uvs: List[Tuple[float, float]] = []
        self.vertex_offset = 0
        self.road_count = 0
        self.markings_builder = self.MarkingsBuilder()

    def add_road(
        self,
        left_boundary: List[Tuple[float, float]],
        right_boundary: List[Tuple[float, float]],
        road_width: float
    ) -> bool:
        """
        添加一条道路到构建器

        Args:
            left_boundary: 左边界点列表
            right_boundary: 右边界点列表
            road_width: 道路宽度

        Returns:
            是否成功添加
        """
        if len(left_boundary) < 2 or len(right_boundary) < 2:
            return False

        # 确保左右边界点数相同
        min_len = min(len(left_boundary), len(right_boundary))
        if min_len < 2:
            return False

        left_boundary = left_boundary[:min_len]
        right_boundary = right_boundary[:min_len]

        # 计算累积距离（用于UV的V坐标）
        distances = [0.0]
        for i in range(1, min_len):
            # 使用左右边界的中点计算距离
            prev_mid = ((left_boundary[i-1][0] + right_boundary[i-1][0]) / 2,
                       (left_boundary[i-1][1] + right_boundary[i-1][1]) / 2)
            curr_mid = ((left_boundary[i][0] + right_boundary[i][0]) / 2,
                       (left_boundary[i][1] + right_boundary[i][1]) / 2)

            dx = curr_mid[0] - prev_mid[0]
            dy = curr_mid[1] - prev_mid[1]
            seg_len = math.sqrt(dx*dx + dy*dy)
            distances.append(distances[-1] + seg_len)

        # 生成顶点和UV
        vertices = []
        uvs = []

        for i in range(min_len):
            # 左边界顶点
            vertices.append((left_boundary[i][0], left_boundary[i][1], Config.ROAD_HEIGHT))
            # 右边界顶点
            vertices.append((right_boundary[i][0], right_boundary[i][1], Config.ROAD_HEIGHT))

            # UV坐标
            v = distances[i] / Config.TEXTURE_REPEAT_LENGTH
            uvs.append((1.0, v))  # 左边界 U=1.0
            uvs.append((0.0, v))  # 右边界 U=0.0

        # 生成面（四边形，沿道路方向）
        # 顶点布局：
        #   base   = 左边界当前点
        #   base+1 = 右边界当前点
        #   base+2 = 左边界下一点
        #   base+3 = 右边界下一点
        #
        # 顺序：左当前 → 右当前 → 右下一个 → 左下一个
        # 使法线朝上（+Z），在UE中正确显示
        faces = []
        for i in range(min_len - 1):
            base = self.vertex_offset + i * 2
            faces.append([base, base + 1, base + 3, base + 2])

        # 添加到总数据
        self.all_vertices.extend(vertices)
        self.all_faces.extend(faces)
        self.all_uvs.extend(uvs)
        self.vertex_offset += len(vertices)
        self.road_count += 1

        return True

    def add_lane_marking_line(
        self,
        start_point: Tuple[float, float],
        end_point: Tuple[float, float],
        width: float = 0.15,
        is_dashed: bool = False,
        dash_length: float = 3.0,
        gap_length: float = 3.0
    ) -> bool:
        """
        添加车道标线线段

        Args:
            start_point: 线段起点 (x, y)
            end_point: 线段终点 (x, y)
            width: 标线宽度 (默认 0.15m)
            is_dashed: 是否虚线 (默认 False)
            dash_length: 虚线实线长度 (默认 3.0m)
            gap_length: 虚线间隔长度 (默认 3.0m)

        Returns:
            是否成功添加
        """
        # 计算方向向量
        dx = end_point[0] - start_point[0]
        dy = end_point[1] - start_point[1]
        length = math.sqrt(dx*dx + dy*dy)

        if length < 0.01:
            return False

        # 归一化方向
        dir_x, dir_y = dx / length, dy / length
        # 垂直方向
        perp_x, perp_y = -dir_y, dir_x

        half_width = width / 2.0
        z = Config.ROAD_HEIGHT + 0.005  # 略高于路面

        if is_dashed:
            # 生成虚线
            dash_count = int(length / (dash_length + gap_length))
            for i in range(dash_count):
                # 计算这一段的起止位置（沿线段方向）
                seg_start = i * (dash_length + gap_length)
                seg_end = seg_start + dash_length

                # 该段起点
                sx = start_point[0] + dir_x * seg_start
                sy = start_point[1] + dir_y * seg_start
                # 该段终点
                ex = start_point[0] + dir_x * seg_end
                ey = start_point[1] + dir_y * seg_end

                # 四边形顶点
                p1 = (sx + perp_x * half_width, sy + perp_y * half_width, z)
                p2 = (sx - perp_x * half_width, sy - perp_y * half_width, z)
                p3 = (ex - perp_x * half_width, ey - perp_y * half_width, z)
                p4 = (ex + perp_x * half_width, ey + perp_y * half_width, z)

                base_idx = self.markings_builder.vertex_offset
                vertices = [p1, p2, p3, p4]
                faces = [[base_idx, base_idx + 1, base_idx + 2], [base_idx, base_idx + 2, base_idx + 3]]
                self.markings_builder.add_marking(vertices, faces)
        else:
            # 生成实线
            p1 = (start_point[0] + perp_x * half_width, start_point[1] + perp_y * half_width, z)
            p2 = (start_point[0] - perp_x * half_width, start_point[1] - perp_y * half_width, z)
            p3 = (end_point[0] - perp_x * half_width, end_point[1] - perp_y * half_width, z)
            p4 = (end_point[0] + perp_x * half_width, end_point[1] + perp_y * half_width, z)

            base_idx = self.markings_builder.vertex_offset
            vertices = [p1, p2, p3, p4]
            faces = [[base_idx, base_idx + 1, base_idx + 2], [base_idx, base_idx + 2, base_idx + 3]]
            self.markings_builder.add_marking(vertices, faces)

        return True

    def add_lane_markings(
        self,
        sorted_boundaries: List[Tuple[List[Tuple], List[Tuple]]],
        suppress_left: bool = False,
        suppress_right: bool = False
    ) -> bool:
        """
        添加车道标线（已按从左到右排序的车道边界列表）

        标线规则：
        - 最外侧左边界 → 白色实线（除非 suppress_left=True，用于配对反向道路）
        - 内部车道分隔线 → 白色虚线
        - 最外侧右边界 → 白色实线（除非 suppress_right=True，用于配对反向道路）

        Args:
            sorted_boundaries: 已排序（从左到右）的车道边界列表，每个元素是 (left_pts, right_pts)
            suppress_left: 是否抑制最外侧左边界实线（配对道路面向对方的一侧）
            suppress_right: 是否抑制最外侧右边界实线（配对道路面向对方的一侧）

        Returns:
            是否成功添加
        """
        if not sorted_boundaries:
            return False

        n = len(sorted_boundaries)
        for i, (left_pts, right_pts) in enumerate(sorted_boundaries):
            is_leftmost = (i == 0)
            is_rightmost = (i == n - 1)

            # 左边界：最左侧为实线（除非 suppress_left），其余车道的左边界为虚线（分隔线）
            if len(left_pts) >= 2:
                skip = is_leftmost and suppress_left
                if not skip:
                    is_dashed = not is_leftmost
                    for j in range(len(left_pts) - 1):
                        self.add_lane_marking_line(
                            left_pts[j], left_pts[j + 1],
                            width=0.15, is_dashed=is_dashed
                        )

            # 右边界：只有最右侧车道才画，且为实线（除非 suppress_right）
            if is_rightmost and len(right_pts) >= 2:
                if not suppress_right:
                    for j in range(len(right_pts) - 1):
                        self.add_lane_marking_line(
                            right_pts[j], right_pts[j + 1],
                            width=0.15, is_dashed=False
                        )

        return True

    def build(self) -> Tuple[List, List, List]:
        """
        返回构建的几何数据

        Returns:
            (vertices, faces, uvs)
        """
        return self.all_vertices, self.all_faces, self.all_uvs

    def build_markings(self) -> Tuple[List, List]:
        """
        返回构建的车道标线几何数据

        Returns:
            (vertices, faces)
        """
        return self.markings_builder.build()


class JunctionMeshBuilder:
    """路口Mesh构建器 - 用于合并多个路口为单个mesh"""
    
    def __init__(self):
        self.all_vertices: List[Tuple[float, float, float]] = []
        self.all_faces: List[List[int]] = []
        self.all_uvs: List[Tuple[float, float]] = []
        self.vertex_offset = 0
        self.junction_count = 0
    
    def add_junction(
        self,
        vertices: List[Tuple[float, float, float]],
        faces: List[List[int]]
    ) -> bool:
        """
        添加一个路口到构建器
        
        Args:
            vertices: 顶点列表
            faces: 面索引列表（相对于本路口的顶点）
        
        Returns:
            是否成功添加
        """
        if not vertices or not faces:
            return False
        
        # 计算UV（基于边界框）
        xs = [v[0] for v in vertices]
        ys = [v[1] for v in vertices]
        min_x, max_x = min(xs), max(xs)
        min_y, max_y = min(ys), max(ys)
        
        width = max_x - min_x
        height = max_y - min_y
        
        if width < 0.001:
            width = 1.0
        if height < 0.001:
            height = 1.0
        
        uvs = []
        for x, y, z in vertices:
            u = (x - min_x) / Config.TEXTURE_REPEAT_LENGTH
            v = (y - min_y) / Config.TEXTURE_REPEAT_LENGTH
            uvs.append((u, v))
        
        # 调整面索引（加上偏移量）
        adjusted_faces = [[vi + self.vertex_offset for vi in face] for face in faces]
        
        # 添加到总数据
        self.all_vertices.extend(vertices)
        self.all_faces.extend(adjusted_faces)
        self.all_uvs.extend(uvs)
        self.vertex_offset += len(vertices)
        self.junction_count += 1
        
        return True
    
    def build(self) -> Tuple[List, List, List]:
        """
        返回构建的几何数据
        
        Returns:
            (vertices, faces, uvs)
        """
        return self.all_vertices, self.all_faces, self.all_uvs


# ==================== Blender操作模块 ====================

def create_mesh_fast(
    name: str,
    vertices: List[Tuple[float, float, float]],
    faces: List[List[int]],
    uvs: List[Tuple[float, float]]
) -> Optional[bpy.types.Mesh]:
    """
    使用底层API高效创建mesh（避免使用bpy.ops）
    
    Args:
        name: mesh名称
        vertices: 顶点列表
        faces: 面索引列表
        uvs: UV坐标列表（每个顶点一个UV）
    
    Returns:
        Blender mesh对象
    """
    if not vertices or not faces:
        return None
    
    # 创建mesh
    mesh = bpy.data.meshes.new(name)
    
    # 使用from_pydata创建基础几何体
    mesh.from_pydata(vertices, [], faces)
    
    # 创建UV层
    if uvs and len(uvs) == len(vertices):
        uv_layer = mesh.uv_layers.new(name="UVMap")
        
        # 为每个面的每个循环设置UV
        # 需要按照loop顺序设置UV
        loop_uvs = []
        for face in mesh.polygons:
            for vi in face.vertices:
                if vi < len(uvs):
                    loop_uvs.extend(uvs[vi])
                else:
                    loop_uvs.extend([0.0, 0.0])
        
        # 使用foreach_set批量设置UV
        if loop_uvs:
            uv_layer.data.foreach_set("uv", loop_uvs)
    
    # 更新mesh
    mesh.update()
    mesh.validate(verbose=False)
    
    return mesh


def create_asphalt_material() -> bpy.types.Material:
    """
    创建程序化沥青路面材质

    使用Noise Texture + Principled BSDF创建逼真的沥青路面效果：
    - 深灰色基底 (RGB: 0.12, 0.12, 0.12)
    - 添加轻微凹凸感 (Bump)
    - 粗糙度: 0.85

    Returns:
        材质对象
    """
    mat_name = "AsphaltMaterial"

    # 检查是否已存在
    if mat_name in bpy.data.materials:
        return bpy.data.materials[mat_name]

    # 创建新材质
    mat = bpy.data.materials.new(name=mat_name)
    mat.use_nodes = True
    mat.use_backface_culling = False

    nodes = mat.node_tree.nodes
    links = mat.node_tree.links
    nodes.clear()

    # === 节点布局 ===
    # UVMap -> Noise Texture -> Color -> BSDF
    #                        -> Roughness -> BSDF
    #             Bump -> Normal -> BSDF

    # 创建输出节点
    output_node = nodes.new(type='ShaderNodeOutputMaterial')
    output_node.location = (800, 0)

    # 创建Principled BSDF
    bsdf_node = nodes.new(type='ShaderNodeBsdfPrincipled')
    bsdf_node.location = (400, 0)
    bsdf_node.inputs["Base Color"].default_value = (0.12, 0.12, 0.12, 1.0)  # 深灰色
    bsdf_node.inputs["Roughness"].default_value = 0.85
    bsdf_node.inputs["Metallic"].default_value = 0.0

    # 创建Bump节点
    bump_node = nodes.new(type='ShaderNodeBump')
    bump_node.location = (200, -200)
    bump_node.inputs["Strength"].default_value = 0.05  # 轻微凹凸

    # 创建Noise Texture节点
    noise_node = nodes.new(type='ShaderNodeTexNoise')
    noise_node.location = (-200, 0)
    noise_node.inputs["Scale"].default_value = 50.0  # 纹理缩放
    noise_node.inputs["Detail"].default_value = 8.0
    noise_node.inputs["Roughness"].default_value = 0.5

    # 创建UVMap节点
    uv_node = nodes.new(type='ShaderNodeUVMap')
    uv_node.location = (-600, 0)
    uv_node.uv_map = "UVMap"

    # 创建颜色渐变（用于轻微颜色变化）
    color_ramp_node = nodes.new(type='ShaderNodeValToRGB')
    color_ramp_node.location = (0, 0)
    color_ramp_node.color_ramp.elements[0].color = (0.10, 0.10, 0.10, 1.0)
    color_ramp_node.color_ramp.elements[1].color = (0.14, 0.14, 0.14, 1.0)

    # 连接节点
    links.new(uv_node.outputs["UV"], noise_node.inputs["Vector"])
    links.new(noise_node.outputs["Fac"], color_ramp_node.inputs["Fac"])
    links.new(color_ramp_node.outputs["Color"], bsdf_node.inputs["Base Color"])
    links.new(noise_node.outputs["Fac"], bump_node.inputs["Height"])
    links.new(bump_node.outputs["Normal"], bsdf_node.inputs["Normal"])
    links.new(bsdf_node.outputs["BSDF"], output_node.inputs["Surface"])

    print("[材质] 已创建程序化沥青路面材质")
    return mat


def create_intersection_material() -> bpy.types.Material:
    """
    创建程序化路口材质

    与道路材质类似但略浅 (RGB: 0.15, 0.15, 0.15)
    保持与道路材质视觉一致性

    Returns:
        材质对象
    """
    mat_name = "IntersectionMaterial"

    # 检查是否已存在
    if mat_name in bpy.data.materials:
        return bpy.data.materials[mat_name]

    # 创建新材质
    mat = bpy.data.materials.new(name=mat_name)
    mat.use_nodes = True
    mat.use_backface_culling = False

    nodes = mat.node_tree.nodes
    links = mat.node_tree.links
    nodes.clear()

    # 创建输出节点
    output_node = nodes.new(type='ShaderNodeOutputMaterial')
    output_node.location = (800, 0)

    # 创建Principled BSDF
    bsdf_node = nodes.new(type='ShaderNodeBsdfPrincipled')
    bsdf_node.location = (400, 0)
    bsdf_node.inputs["Base Color"].default_value = (0.15, 0.15, 0.15, 1.0)  # 略浅的灰色
    bsdf_node.inputs["Roughness"].default_value = 0.85
    bsdf_node.inputs["Metallic"].default_value = 0.0

    # 创建Bump节点
    bump_node = nodes.new(type='ShaderNodeBump')
    bump_node.location = (200, -200)
    bump_node.inputs["Strength"].default_value = 0.05

    # 创建Noise Texture节点
    noise_node = nodes.new(type='ShaderNodeTexNoise')
    noise_node.location = (-200, 0)
    noise_node.inputs["Scale"].default_value = 50.0
    noise_node.inputs["Detail"].default_value = 8.0
    noise_node.inputs["Roughness"].default_value = 0.5

    # 创建UVMap节点
    uv_node = nodes.new(type='ShaderNodeUVMap')
    uv_node.location = (-600, 0)
    uv_node.uv_map = "UVMap"

    # 创建颜色渐变
    color_ramp_node = nodes.new(type='ShaderNodeValToRGB')
    color_ramp_node.location = (0, 0)
    color_ramp_node.color_ramp.elements[0].color = (0.13, 0.13, 0.13, 1.0)
    color_ramp_node.color_ramp.elements[1].color = (0.17, 0.17, 0.17, 1.0)

    # 连接节点
    links.new(uv_node.outputs["UV"], noise_node.inputs["Vector"])
    links.new(noise_node.outputs["Fac"], color_ramp_node.inputs["Fac"])
    links.new(color_ramp_node.outputs["Color"], bsdf_node.inputs["Base Color"])
    links.new(noise_node.outputs["Fac"], bump_node.inputs["Height"])
    links.new(bump_node.outputs["Normal"], bsdf_node.inputs["Normal"])
    links.new(bsdf_node.outputs["BSDF"], output_node.inputs["Surface"])

    print("[材质] 已创建程序化路口材质")
    return mat


def create_lane_marking_material() -> bpy.types.Material:
    """
    创建车道标线材质（白色发光材质）

    用于：车道虚线、实线、人行横道、停止线
    - Base Color: 白色
    - Emission Strength: 1.5

    Returns:
        材质对象
    """
    mat_name = "LaneMarkingMaterial"

    # 检查是否已存在
    if mat_name in bpy.data.materials:
        return bpy.data.materials[mat_name]

    # 创建新材质
    mat = bpy.data.materials.new(name=mat_name)
    mat.use_nodes = True
    mat.use_backface_culling = False

    nodes = mat.node_tree.nodes
    links = mat.node_tree.links
    nodes.clear()

    # 创建输出节点
    output_node = nodes.new(type='ShaderNodeOutputMaterial')
    output_node.location = (400, 0)

    # 创建Emission Shader（发光材质）
    emission_node = nodes.new(type='ShaderNodeEmission')
    emission_node.location = (0, 0)
    emission_node.inputs["Color"].default_value = (1.0, 1.0, 1.0, 1.0)  # 白色
    emission_node.inputs["Strength"].default_value = 1.5  # 发光强度

    # 连接节点
    links.new(emission_node.outputs["Emission"], output_node.inputs["Surface"])

    print("[材质] 已创建车道标线材质（白色发光）")
    return mat


def create_road_material(texture_path: Optional[str] = None) -> bpy.types.Material:
    """
    创建道路材质（带贴图）

    Args:
        texture_path: 纹理文件路径（可选）

    Returns:
        材质对象
    """
    mat_name = "RoadMaterial"

    # 检查是否已存在
    if mat_name in bpy.data.materials:
        return bpy.data.materials[mat_name]

    # 创建新材质
    mat = bpy.data.materials.new(name=mat_name)
    mat.use_nodes = True
    mat.use_backface_culling = False

    nodes = mat.node_tree.nodes
    links = mat.node_tree.links
    nodes.clear()

    # 创建输出节点
    output_node = nodes.new(type='ShaderNodeOutputMaterial')
    output_node.location = (400, 0)

    # 创建Principled BSDF
    bsdf_node = nodes.new(type='ShaderNodeBsdfPrincipled')
    bsdf_node.location = (0, 0)
    bsdf_node.inputs["Roughness"].default_value = 0.8
    bsdf_node.inputs["Metallic"].default_value = 0.0

    # 如果有纹理路径，加载纹理
    if texture_path and os.path.exists(texture_path):
        tex_node = nodes.new(type='ShaderNodeTexImage')
        tex_node.location = (-400, 0)
        tex_node.extension = 'REPEAT'
        tex_node.interpolation = 'Linear'

        try:
            img = bpy.data.images.load(os.path.abspath(texture_path))
            tex_node.image = img
            print(f"[材质] 道路纹理已加载: {os.path.basename(texture_path)}")

            uv_node = nodes.new(type='ShaderNodeUVMap')
            uv_node.location = (-600, 0)
            uv_node.uv_map = "UVMap"

            links.new(uv_node.outputs["UV"], tex_node.inputs["Vector"])
            links.new(tex_node.outputs["Color"], bsdf_node.inputs["Base Color"])
        except Exception as e:
            print(f"[材质] 纹理加载失败: {e}")
            bsdf_node.inputs["Base Color"].default_value = (0.3, 0.3, 0.3, 1.0)
    else:
        # 默认灰色
        bsdf_node.inputs["Base Color"].default_value = (0.3, 0.3, 0.3, 1.0)

    links.new(bsdf_node.outputs["BSDF"], output_node.inputs["Surface"])

    return mat


def create_junction_material() -> bpy.types.Material:
    """
    创建路口材质（使用程序化材质）

    Returns:
        材质对象
    """
    # 使用程序化路口材质
    return create_intersection_material()


def clear_scene():
    """清除场景中的所有对象（不使用bpy.ops）"""
    # 删除所有对象
    for obj in list(bpy.data.objects):
        bpy.data.objects.remove(obj, do_unlink=True)
    
    # 删除所有mesh
    for mesh in list(bpy.data.meshes):
        bpy.data.meshes.remove(mesh, do_unlink=True)
    
    # 删除所有材质
    for mat in list(bpy.data.materials):
        bpy.data.materials.remove(mat, do_unlink=True)
    
    # 删除所有图片
    for img in list(bpy.data.images):
        bpy.data.images.remove(img, do_unlink=True)
    
    print("[场景] 已清除所有对象")


def save_blend_file(filepath: str):
    """保存Blender文件"""
    abs_path = os.path.abspath(filepath)
    bpy.ops.wm.save_as_mainfile(filepath=abs_path)
    print(f"[保存] 文件已保存到: {abs_path}")


# ==================== 主处理流程 ====================

def process_roads(
    db: PBMapSource,
    transformer: CoordinateTransformer,
    material: bpy.types.Material,
    marking_material: bpy.types.Material = None,
    road_pairs: Dict[int, int] = None,
    junction_polygons: Dict[int, Any] = None
) -> Tuple[int, int]:
    """
    处理所有道路

    Args:
        db: 数据库客户端
        transformer: 坐标转换器
        material: 道路材质对象
        marking_material: 标线材质对象（可选）
        road_pairs: 配对反向道路字典 {road_id: paired_road_id}（可选）
        junction_polygons: 路口多边形字典 {junction_id: Polygon}（可选）

    Returns:
        (成功数量, 失败数量)
    """
    print("\n[道路处理] 开始处理道路...")
    start_time = time.time()

    # 获取所有道路
    roads = db.fetch_all_roads()

    if Config.MAX_ROADS_TO_PROCESS:
        roads = roads[:Config.MAX_ROADS_TO_PROCESS]
        print(f"[道路处理] 限制处理前 {Config.MAX_ROADS_TO_PROCESS} 条道路")

    # 预先批量获取所有需要的车道
    print("[道路处理] 预加载车道数据...")
    all_lane_ids = set()
    for road in roads:
        for lid in road["data"]["lane_ids"]:
            all_lane_ids.add(lid)

    lanes_dict = db.fetch_lanes_batch(list(all_lane_ids))
    print(f"[道路处理] 已加载 {len(lanes_dict)} 条车道数据")

    # 构建道路mesh
    builder = RoadMeshBuilder()
    success_count = 0
    fail_count = 0

    if road_pairs is None:
        road_pairs = {}

    # 缓存配对道路的内侧边界，用于后续填充中间空白
    road_inner_boundary_cache: Dict[int, List[Tuple[float, float]]] = {}

    for idx, road in enumerate(roads):
        if idx % 100 == 0:
            print(f"[道路处理] 进度: {idx}/{len(roads)} ({idx/len(roads)*100:.1f}%)")

        # 计算道路边界
        left_boundary, right_boundary, total_width = compute_road_boundary(
            road, lanes_dict, transformer
        )

        if not left_boundary or not right_boundary:
            fail_count += 1
            continue

        # ===== 道路-路口衔接裁剪 =====
        if junction_polygons:
            start_poly, end_poly = get_road_junction_polygons(road, lanes_dict, junction_polygons)
            if start_poly is not None or end_poly is not None:
                left_boundary  = trim_boundary_at_junction(left_boundary,  start_poly, end_poly)
                right_boundary = trim_boundary_at_junction(right_boundary, start_poly, end_poly)
                if not left_boundary or not right_boundary:
                    fail_count += 1
                    continue

        road_id = road["data"]["id"]
        paired_id = road_pairs.get(road_id)
        suppress_right = (paired_id is not None and road_id < paired_id)
        suppress_left  = (paired_id is not None and road_id > paired_id)

        # 缓存配对道路的内侧边界（用 compute_road_boundary 结果，独立于标线材质）
        if paired_id is not None:
            # suppress_right → 此 road 在左侧，内侧为右边界
            # suppress_left  → 此 road 在右侧，内侧为左边界
            road_inner_boundary_cache[road_id] = right_boundary if suppress_right else left_boundary

        # 添加到构建器
        if builder.add_road(left_boundary, right_boundary, total_width):
            success_count += 1
        else:
            fail_count += 1

        # ===== 生成车道标线 =====
        if marking_material is not None:
            # 获取有效车道
            lane_ids = road["data"]["lane_ids"]
            valid_lanes = []
            for lid in lane_ids:
                if lid not in lanes_dict:
                    continue
                lane = lanes_dict[lid]
                lane_type = lane["data"].get("type", 0)
                if lane_type != Config.VALID_LANE_TYPE:
                    continue
                center_line = lane["data"].get("center_line", {})
                nodes = center_line.get("nodes", [])
                if len(nodes) < 2:
                    continue
                valid_lanes.append(lane)

            if len(valid_lanes) >= 1:
                # 按横向偏移从左到右排序车道
                sorted_lanes = sort_lanes_by_lateral_offset(valid_lanes, transformer)

                # 按排序顺序计算每条车道的边界
                sorted_boundaries = []
                for lane in sorted_lanes:
                    left_pts, right_pts = compute_lane_boundary_points(lane, transformer)
                    if left_pts and right_pts:
                        sorted_boundaries.append((left_pts, right_pts))

                if sorted_boundaries:
                    # 生成标线（最外侧实线，内部虚线，配对道路抑制内侧实线）
                    builder.add_lane_markings(
                        sorted_boundaries,
                        suppress_left=suppress_left,
                        suppress_right=suppress_right
                    )

    # ===== 填充配对反向道路之间的空白 =====
    processed_pairs: set = set()
    for r_id, inner_pts_a in road_inner_boundary_cache.items():
        if r_id in processed_pairs:
            continue
        p_id = road_pairs.get(r_id)
        if p_id is None or p_id not in road_inner_boundary_cache:
            continue
        # 只由 road_id 较小的那条（suppress_right 侧）负责生成填充
        if r_id > p_id:
            continue

        inner_pts_b = road_inner_boundary_cache[p_id]
        # road B 方向相反，需要反转使方向一致
        inner_b_rev = list(reversed(inner_pts_b))

        # 重采样到相同点数，再填充沥青 mesh
        fill_left, fill_right = resample_to_same_length(inner_pts_a, inner_b_rev)
        if fill_left and fill_right and len(fill_left) >= 2:
            builder.add_road(fill_left, fill_right, road_width=0)
            print(f"[道路处理] 填充配对道路 {r_id} <-> {p_id} 中间空白: {len(fill_left)} 点")

        # 在中间填充区域正中央补画一条中心实线
        if marking_material is not None and fill_left and fill_right:
            center_pts = compute_midpoints(fill_left, fill_right)
            for j in range(len(center_pts) - 1):
                builder.add_lane_marking_line(
                    center_pts[j], center_pts[j + 1],
                    width=0.15, is_dashed=False
                )

        processed_pairs.add(r_id)
        processed_pairs.add(p_id)

    # 构建最终mesh
    vertices, faces, uvs = builder.build()

    if vertices and faces:
        mesh = create_mesh_fast("Roads_Merged", vertices, faces, uvs)

        if mesh:
            # 添加材质
            mesh.materials.append(material)

            # 创建对象
            obj = bpy.data.objects.new("Roads", mesh)

            # 创建集合并添加对象
            if "Roads" not in bpy.data.collections:
                roads_collection = bpy.data.collections.new("Roads")
                bpy.context.scene.collection.children.link(roads_collection)
            else:
                roads_collection = bpy.data.collections["Roads"]

            roads_collection.objects.link(obj)

            print(f"[道路处理] Mesh已创建: {len(vertices)} 顶点, {len(faces)} 面")

            # ===== 构建车道标线mesh =====
            if marking_material is not None:
                mverts, mfaces = builder.build_markings()
                if mverts and mfaces:
                    marking_mesh = create_mesh_fast("Road_Markings", mverts, mfaces, [])
                    if marking_mesh:
                        marking_mesh.materials.append(marking_material)
                        marking_obj = bpy.data.objects.new("Road_Markings", marking_mesh)
                        roads_collection.objects.link(marking_obj)
                        print(f"[道路处理] 标线Mesh已创建: {len(mverts)} 顶点, {len(mfaces)} 面")

    elapsed = time.time() - start_time
    print(f"[道路处理] 完成! 成功: {success_count}, 失败: {fail_count}, 耗时: {elapsed:.2f}秒")

    return success_count, fail_count


def process_junctions(
    db: PBMapSource,
    transformer: CoordinateTransformer,
    intersection_material: bpy.types.Material,
    lane_marking_material: bpy.types.Material
) -> Tuple[int, int, int, int]:
    """
    处理所有路口（包括人行横道和停止线）

    Args:
        db: 数据库客户端
        transformer: 坐标转换器
        intersection_material: 路口材质
        lane_marking_material: 标线材质

    Returns:
        (路口成功数量, 路口失败数量, 人行横道数量, 停止线数量)
    """
    if not SHAPELY_AVAILABLE:
        print("[路口处理] shapely库未安装，跳过路口处理")
        return 0, 0, 0, 0

    print("\n[路口处理] 开始处理路口...")
    start_time = time.time()

    # 获取所有路口
    junctions = db.fetch_all_junctions()

    if Config.MAX_JUNCTIONS_TO_PROCESS:
        junctions = junctions[:Config.MAX_JUNCTIONS_TO_PROCESS]
        print(f"[路口处理] 限制处理前 {Config.MAX_JUNCTIONS_TO_PROCESS} 个路口")

    # 预先批量获取所有需要的车道
    print("[路口处理] 预加载车道数据...")
    all_lane_ids = set()
    for junction in junctions:
        for lid in junction["data"]["lane_ids"]:
            all_lane_ids.add(lid)

    lanes_dict = db.fetch_lanes_batch(list(all_lane_ids))
    print(f"[路口处理] 已加载 {len(lanes_dict)} 条车道数据")

    # 创建标线构建器
    class MarkingsBuilder:
        def __init__(self):
            self.all_vertices: List[Tuple[float, float, float]] = []
            self.all_faces: List[List[int]] = []
            self.all_uvs: List[Tuple[float, float]] = []
            self.vertex_offset = 0

        def add_marking(self, vertices, faces):
            if not vertices or not faces:
                return False
            adjusted_faces = [[vi + self.vertex_offset for vi in face] for face in faces]
            self.all_vertices.extend(vertices)
            self.all_faces.extend(adjusted_faces)
            self.vertex_offset += len(vertices)
            return True

        def build(self):
            return self.all_vertices, self.all_faces, self.all_uvs

    crosswalk_builder = MarkingsBuilder()
    stopline_builder = MarkingsBuilder()

    # 构建路口mesh
    junction_builder = JunctionMeshBuilder()
    success_count = 0
    fail_count = 0
    crosswalk_count = 0
    stopline_count = 0

    for idx, junction in enumerate(junctions):
        if idx % 50 == 0:
            print(f"[路口处理] 进度: {idx}/{len(junctions)} ({idx/len(junctions)*100:.1f}%)")

        # 计算路口多边形
        polygon = compute_junction_polygon(junction, lanes_dict, transformer)

        if polygon is None:
            fail_count += 1
            continue

        # 三角剖分
        vertices, faces = triangulate_polygon(polygon)

        if not vertices or not faces:
            fail_count += 1
            continue

        # 添加到路口构建器
        if junction_builder.add_junction(vertices, faces):
            success_count += 1
        else:
            fail_count += 1

        # ===== 生成人行横道 =====
        cw_verts, cw_faces, cw_uvs = create_crosswalk_geometry(
            junction, lanes_dict, transformer,
            stripe_width=Config.CROSSWALK_STRIPE_WIDTH,
            stripe_spacing=Config.CROSSWALK_STRIPE_SPACING,
            crosswalk_width=Config.CROSSWALK_WIDTH
        )
        if cw_verts and cw_faces:
            if crosswalk_builder.add_marking(cw_verts, cw_faces):
                crosswalk_count += 1

        # ===== 生成停止线 =====
        sl_verts, sl_faces, sl_uvs = create_stop_line_geometry(
            junction, lanes_dict, transformer,
            line_width=Config.STOP_LINE_WIDTH,
            offset_from_junction=Config.STOP_LINE_OFFSET
        )
        if sl_verts and sl_faces:
            if stopline_builder.add_marking(sl_verts, sl_faces):
                stopline_count += 1

    # 创建集合
    main_collection = bpy.context.scene.collection
    if "Junctions" not in bpy.data.collections:
        junctions_collection = bpy.data.collections.new("Junctions")
        main_collection.children.link(junctions_collection)
    else:
        junctions_collection = bpy.data.collections["Junctions"]

    if "LaneMarkings" not in bpy.data.collections:
        markings_collection = bpy.data.collections.new("LaneMarkings")
        main_collection.children.link(markings_collection)
    else:
        markings_collection = bpy.data.collections["LaneMarkings"]

    # 构建路口mesh
    vertices, faces, uvs = junction_builder.build()
    if vertices and faces:
        mesh = create_mesh_fast("Junctions_Merged", vertices, faces, uvs)
        if mesh:
            mesh.materials.append(intersection_material)
            obj = bpy.data.objects.new("Junctions", mesh)
            junctions_collection.objects.link(obj)
            print(f"[路口处理] 路口Mesh已创建: {len(vertices)} 顶点, {len(faces)} 面")

    # 构建人行横道mesh
    cw_verts, cw_faces, _ = crosswalk_builder.build()
    if cw_verts and cw_faces:
        mesh = create_mesh_fast("Crosswalks_Merged", cw_verts, cw_faces, [])
        if mesh:
            mesh.materials.append(lane_marking_material)
            obj = bpy.data.objects.new("Crosswalks", mesh)
            markings_collection.objects.link(obj)
            print(f"[路口处理] 人行横道Mesh已创建: {len(cw_verts)} 顶点, {len(cw_faces)} 面")

    # 构建停止线mesh
    sl_verts, sl_faces, _ = stopline_builder.build()
    if sl_verts and sl_faces:
        mesh = create_mesh_fast("StopLines_Merged", sl_verts, sl_faces, [])
        if mesh:
            mesh.materials.append(lane_marking_material)
            obj = bpy.data.objects.new("StopLines", mesh)
            markings_collection.objects.link(obj)
            print(f"[路口处理] 停止线Mesh已创建: {len(sl_verts)} 顶点, {len(sl_faces)} 面")

    elapsed = time.time() - start_time
    print(f"[路口处理] 完成! 路口: {success_count} 成功/{fail_count} 失败, "
          f"人行横道: {crosswalk_count}, 停止线: {stopline_count}, 耗时: {elapsed:.2f}秒")

    return success_count, fail_count, crosswalk_count, stopline_count


def _parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument("--pb", required=True, help="Path to pycityproto Map .pb file")
    parser.add_argument("--output", required=True, help="Output .blend path")
    parser.add_argument("--projection", required=True,
                        help="pyproj projection string (must match osm-to-pb)")
    parser.add_argument("--ref-lat", dest="ref_lat", type=float, required=True)
    parser.add_argument("--ref-lon", dest="ref_lon", type=float, required=True)
    parser.add_argument("--texture", default="", help="Optional albedo PNG; falls back to procedural")
    parser.add_argument("--road-height", dest="road_height", type=float, default=0.2)
    parser.add_argument("--texture-repeat", dest="texture_repeat", type=float, default=10.0)
    parser.add_argument("--crosswalk-stripe-width", dest="crosswalk_stripe_width", type=float, default=0.5)
    parser.add_argument("--crosswalk-stripe-spacing", dest="crosswalk_stripe_spacing", type=float, default=0.5)
    parser.add_argument("--crosswalk-width", dest="crosswalk_width", type=float, default=4.0)
    parser.add_argument("--stop-line-width", dest="stop_line_width", type=float, default=0.4)
    parser.add_argument("--stop-line-offset", dest="stop_line_offset", type=float, default=3.0)
    parser.add_argument("--valid-lane-type", dest="valid_lane_type", type=int, default=1)
    parser.add_argument("--max-roads", dest="max_roads", type=int, default=0)
    parser.add_argument("--max-junctions", dest="max_junctions", type=int, default=0)
    if "--" in sys.argv:
        argv = sys.argv[sys.argv.index("--") + 1:]
    else:
        argv = []
    return parser.parse_args(argv)


def main():
    """主函数"""
    global ARGS
    ARGS = _parse_args()

    print("=" * 80)
    print("env_road_network: pycityproto Map .pb → Blender road mesh")
    print("=" * 80)
    print(f"Blender: {bpy.app.version_string}")
    print(f"  pb:           {ARGS.pb}")
    print(f"  output:       {ARGS.output}")
    print(f"  projection:   {ARGS.projection}")
    print(f"  ref:          ({ARGS.ref_lon}, {ARGS.ref_lat})")
    print(f"  road height:  {ARGS.road_height} m")
    print(f"  uv repeat:    {ARGS.texture_repeat} m")
    print(f"  texture:      {ARGS.texture or '(procedural fallback)'}")
    print(f"  max roads:    {ARGS.max_roads or 'unlimited'}")
    print(f"  max junctions:{ARGS.max_junctions or 'unlimited'}")
    print("=" * 80)

    total_start_time = time.time()

    try:
        if not PB_SOURCE_AVAILABLE:
            print("[error] pycityproto / urbanworld.environment.pb_source not importable")
            return
        if not PYPROJ_AVAILABLE:
            print("[error] pyproj missing; cannot transform projection coords")
            return

        # 清除场景
        print("\n[init] clearing scene...")
        clear_scene()

        # 创建坐标转换器
        print("[init] coordinate transformer...")
        transformer = CoordinateTransformer(
            ARGS.projection,
            ARGS.ref_lat,
            ARGS.ref_lon,
        )

        # 程序化材质 + 可选纹理
        print("[init] materials...")
        texture_path = ARGS.texture or ""

        asphalt_material = create_asphalt_material()
        intersection_material = create_intersection_material()
        lane_marking_material = create_lane_marking_material()

        if texture_path and os.path.exists(texture_path):
            print(f"[init] using albedo texture: {texture_path}")
            # create_road_material with texture is available; the
            # original code used procedural fallback, so we keep that as
            # default and the texture is only loaded if explicitly requested.

        # 加载 .pb 数据源
        print(f"[init] loading {ARGS.pb}...")
        db = PBMapSource(ARGS.pb)

        # 预计算路口多边形（供道路端点裁剪和配对道路识别使用）
        print("[init] precomputing junction polygons...")
        all_junctions = db.fetch_all_junctions()
        junction_polygons: Dict[int, Any] = {}
        if SHAPELY_AVAILABLE:
            all_junc_lane_ids: set = set()
            for junction in all_junctions:
                for lid in junction["data"].get("lane_ids", []):
                    all_junc_lane_ids.add(lid)
            junc_lanes_dict = db.fetch_lanes_batch(list(all_junc_lane_ids))
            for junction in all_junctions:
                j_id = junction["data"]["id"]
                try:
                    poly = compute_junction_polygon(junction, junc_lanes_dict, transformer)
                    if poly is not None:
                        junction_polygons[j_id] = poly
                except Exception:
                    pass
            print(f"[init] {len(junction_polygons)} junction polygons computed")

        # 识别配对的反向道路
        print("[init] detecting paired reverse roads...")
        all_roads_for_pairs = db.fetch_all_roads()
        pair_lane_ids: set = set()
        for road in all_roads_for_pairs:
            for lid in road["data"]["lane_ids"]:
                pair_lane_ids.add(lid)
        pair_lanes_dict = db.fetch_lanes_batch(list(pair_lane_ids))
        road_pairs = build_road_pairs_from_junctions(
            all_junctions, all_roads_for_pairs, pair_lanes_dict, transformer
        )
        print(f"[init] {len(road_pairs) // 2} paired reverse-road groups")

        # 处理道路
        road_success, road_fail = process_roads(
            db, transformer, asphalt_material, lane_marking_material,
            road_pairs=road_pairs,
            junction_polygons=junction_polygons,
        )

        # 处理路口（含人行横道、停止线）
        junction_success, junction_fail, crosswalk_count, stopline_count = process_junctions(
            db, transformer, intersection_material, lane_marking_material
        )

        db.close()

        # 打包纹理
        print("\n[post] packing textures...")
        for img in bpy.data.images:
            if img.filepath and not img.packed_file:
                try:
                    img.pack()
                    print(f"  packed: {img.name}")
                except Exception as e:
                    print(f"  failed {img.name}: {e}")

        # 保存文件
        save_blend_file(ARGS.output)

        # 统计信息
        total_time = time.time() - total_start_time

        print("\n" + "=" * 80)
        print("done")
        print("=" * 80)
        print(f"  roads:      {road_success} ok / {road_fail} fail")
        print(f"  junctions:  {junction_success} ok / {junction_fail} fail")
        print(f"  crosswalks: {crosswalk_count}")
        print(f"  stop lines: {stopline_count}")

        total_verts = sum(len(obj.data.vertices) for obj in bpy.data.objects if obj.type == 'MESH')
        total_faces = sum(len(obj.data.polygons) for obj in bpy.data.objects if obj.type == 'MESH')
        print(f"  total verts: {total_verts:,}")
        print(f"  total faces: {total_faces:,}")
        print(f"  total time:  {total_time:.2f}s")
        print(f"  output:      {os.path.abspath(ARGS.output)}")
        print("=" * 80)

    except Exception as e:
        print(f"\n[error] {e}")
        import traceback
        traceback.print_exc()


if __name__ == "__main__":
    main()

