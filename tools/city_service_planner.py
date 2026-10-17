"""Road-graph coverage and facility selection reference for the city planner.

This offline prototype uses caller-provided costs, not production game defaults.
Run: python tools/city_service_planner.py --probe
Input: nodes, directed edges (from/to/cost/modes), demand, candidates, budget,
max_cost. Duplicate opposite edges explicitly for a bidirectional street.
Node/demand/candidate/edge IDs are unique; edge costs and demand weights are
nonnegative. The caller supplies only geometrically valid graph connections.
"""
from __future__ import annotations

import argparse
import heapq
import json
from pathlib import Path


def adjacency(plan: dict, mode: str = "walk") -> dict:
    graph = {node: [] for node in plan["nodes"]}
    for edge in plan["edges"]:
        if mode in edge["modes"]:
            graph[edge["from"]].append((edge["to"], edge["cost"], edge["id"]))
    for neighbours in graph.values():
        neighbours.sort()
    return graph


def distances(graph: dict, origin: str) -> tuple[dict, dict]:
    costs = {origin: 0.0}
    parents = {}
    queue = [(0.0, origin)]
    while queue:
        cost, node = heapq.heappop(queue)
        if cost != costs[node]:
            continue
        for other, weight, edge_id in graph[node]:
            new_cost = cost + weight
            if new_cost < costs.get(other, float("inf")):
                costs[other] = new_cost
                parents[other] = (node, edge_id)
                heapq.heappush(queue, (new_cost, other))
    return costs, parents


def shortest_route(graph: dict, stops: list[str]) -> dict:
    """A line is an ordered stop sequence backed by actual directed edges."""
    path = []
    total = 0.0
    for start, end in zip(stops, stops[1:]):
        costs, parents = distances(graph, start)
        if end not in costs:
            return {"feasible": False, "failed_leg": [start, end]}
        total += costs[end]
        leg = []
        node = end
        while node != start:
            previous, edge_id = parents[node]
            leg.append(edge_id)
            node = previous
        path.extend(reversed(leg))
    return {"feasible": True, "stops": stops, "edge_ids": path, "cost": total}


def select_facilities(plan: dict) -> dict:
    """Greedy weighted maximum coverage; spatial/capacity validation is upstream.

    Travel from each home to the entrance, rather than from facility to home:
    the distinction matters for directed streets and future modal restrictions.
    This is a bounded heuristic, not a proof of globally optimal urban design.
    """
    graph = adjacency(plan)
    travel = {d["id"]: distances(graph, d["node"])[0] for d in plan["demand"]}
    candidates = sorted(plan["candidates"], key=lambda c: c["id"])
    reachable = {
        c["id"]: {d["id"] for d in plan["demand"]
                  if travel[d["id"]].get(c["node"], float("inf")) <= plan["max_cost"]}
        for c in candidates
    }
    weights = {d["id"]: d["weight"] for d in plan["demand"]}
    covered = set()
    selected = []
    while candidates and len(selected) < plan["budget"]:
        chosen = min(candidates, key=lambda c: (
            -sum(weights[d] for d in sorted(reachable[c["id"]] - covered)), c["id"]))
        newly_covered = reachable[chosen["id"]] - covered
        if not newly_covered:
            break
        selected.append(chosen["id"])
        covered.update(newly_covered)
        candidates.remove(chosen)
    return {"selected": selected, "covered": sorted(covered),
            "uncovered": sorted(weights.keys() - covered),
            "covered_weight": sum(weights[d] for d in sorted(covered)),
            "total_weight": sum(weights[d] for d in sorted(weights)),
            "coverage_by_candidate": {k: sorted(v) for k, v in reachable.items()}}


def fixture(bridge: bool) -> dict:
    nodes = {f"{bank}{i}": [x, i * 3] for bank, x in [("w", 0), ("e", 4)]
             for i in range(3)}
    edges = []
    def link(a: str, b: str, cost: float):
        edges.extend([{"id": a + ">" + b, "from": a, "to": b,
                       "cost": cost, "modes": ["walk", "transit"]},
                      {"id": b + ">" + a, "from": b, "to": a,
                       "cost": cost, "modes": ["walk", "transit"]}])
    for bank in ["w", "e"]:
        link(bank + "0", bank + "1", 3)
        link(bank + "1", bank + "2", 3)
    if bridge:
        link("w1", "e1", 4)
    return {"nodes": nodes, "edges": edges,
            "demand": [{"id": "west", "node": "w1", "weight": 1},
                       {"id": "east", "node": "e1", "weight": 10}],
            "candidates": [{"id": "west-service", "node": "w1"},
                           {"id": "east-service", "node": "e1"}],
            "budget": 1, "max_cost": 5}


def probe() -> dict:
    before, after = fixture(False), fixture(True)
    a, b = select_facilities(before), select_facilities(after)
    assert a["selected"] == ["east-service"] and a["uncovered"] == ["west"]
    assert b["covered_weight"] == 11 and b["uncovered"] == []
    before["budget"] = 2
    assert select_facilities(before)["covered_weight"] == 11
    no_bridge = shortest_route(adjacency(before, "transit"), ["w0", "e0"])
    detour = shortest_route(adjacency(after, "transit"), ["w0", "e0"])
    assert not no_bridge["feasible"] and detour["cost"] == 10
    one_way = fixture(False)
    one_way["edges"] = [e for e in one_way["edges"] if e["id"] != "w0>w1"]
    assert not shortest_route(adjacency(one_way), ["w0", "w1"])["feasible"]
    after["edges"].reverse()
    assert select_facilities(after) == b
    return {"scope": "synthetic graph probe; not integrated into Godot",
            "checks": 6, "failures": 0, "without_bridge": a, "with_bridge": b,
            "transit_without_bridge": no_bridge, "transit_detour": detour,
            "fixture_units": "synthetic cost units; not metres/minutes/game values"}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--probe", action="store_true")
    parser.add_argument("--input", type=Path)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    result = probe() if args.probe else select_facilities(
        json.loads(args.input.read_text(encoding="utf-8")))
    serialized = json.dumps(result, ensure_ascii=False, indent=2)
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(serialized + "\n", encoding="utf-8")
    print(serialized)


if __name__ == "__main__":
    main()
