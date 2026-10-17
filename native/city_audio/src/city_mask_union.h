// Resonance City: exact R8 maximum coverage, batched to copy the output once.
#pragma once
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <algorithm>
#include <cmath>

namespace godot {
class CityMaskUnion : public RefCounted {
    GDCLASS(CityMaskUnion, RefCounted)
protected:
    static void _bind_methods() {
        ClassDB::bind_method(D_METHOD("merge_masks", "output", "width", "low", "items", "steps"), &CityMaskUnion::merge_masks);
    }
public:
    PackedByteArray merge_masks(PackedByteArray output, int width, Vector2i low, const Array &items, int steps) {
        ERR_FAIL_COND_V(width <= 0 || steps <= 0 || output.size() % width != 0, output);
        const int height = output.size() / width;
        // Check the entire batch before publishing any coverage changes.
        for (int i = 0; i < items.size(); ++i) {
            const Dictionary item = items[i], patch = item["patch"];
            const Vector2i size = patch["size"], offset = Vector2i(patch["begin"]) - low;
            const PackedByteArray data = patch["alpha"];
            const int progress = item["progress"];
            ERR_FAIL_COND_V(size.x < 0 || size.y < 0 || data.size() != int64_t(size.x) * size.y ||
                    offset.x < 0 || offset.y < 0 || int64_t(offset.x) + size.x > width ||
                    int64_t(offset.y) + size.y > height || progress < 0 || progress > steps, output);
        }
        uint8_t *target = output.ptrw();
        for (int i = 0; i < items.size(); ++i) {
            const Dictionary item = items[i], patch = item["patch"];
            const Vector2i size = patch["size"], offset = Vector2i(patch["begin"]) - low;
            const PackedByteArray data = patch["alpha"];
            const uint8_t *source = data.ptr();
            const int progress = item["progress"];
            for (int y = 0; y < size.y; ++y) {
                const uint8_t *row = source + int64_t(y) * size.x;
                uint8_t *dst = target + int64_t(offset.y + y) * width + offset.x;
                for (int x = 0; x < size.x; ++x) {
                    const uint8_t value = progress == steps ? row[x] : uint8_t(std::round(double(row[x]) * progress / steps));
                    dst[x] = std::max(dst[x], value);
                }
            }
        }
        return output;
    }
};
}
