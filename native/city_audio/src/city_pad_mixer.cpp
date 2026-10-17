// Stereo accumulation adapted from GDSiON SiOPMStream::write_from_vector.
// Copyright (c) 2024 Yuri Sizov and contributors; Copyright (c) 2008-2016 keim.
// MIT: see ../LICENSE-GDSiON. Voice controls and wavetable sampling are specific
// to Resonance City; the packed state stays owned by its existing audio model.
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/math.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <cmath>
#include "city_mask_union.h"

using namespace godot;

class CityPadMixer : public RefCounted {
    GDCLASS(CityPadMixer, RefCounted)
protected:
    static void _bind_methods() {
        ClassDB::bind_method(D_METHOD("render_pads", "output", "tables", "controls"), &CityPadMixer::render_pads);
    }
public:
    // Eleven doubles per selected voice, in stable group order. Return the
    // exact post-block phase, envelope and float stereo state for DNA/preview.
    Array render_pads(PackedVector2Array output, const Array &tables, PackedFloat64Array controls) {
        ERR_FAIL_COND_V(controls.size() != tables.size() * 11, Array());
        Vector2 *mix = output.ptrw();
        double *state = controls.ptrw();
        const int count = output.size();
        for (int voice = 0; voice < tables.size(); ++voice) {
            const PackedFloat32Array table = tables[voice];
            const int size = table.size();
            ERR_FAIL_COND_V(size == 0, Array());
            const float *wave = table.ptr();
            double *s = state + voice * 11;
            double phase = s[0], level = s[1];
            const double target = s[2], phase_step = s[3], level_step = s[8];
            const double stereo_step = s[9], gain = s[10];
            Vector2 stereo(s[4], s[5]);
            const Vector2 target_stereo(s[6], s[7]);
            const bool stationary = level == target && stereo == stereo.lerp(target_stereo, stereo_step);
            const Vector2 amplitude = (level * gain) * stereo;
            for (int i = 0; i < count; ++i) {
                if (!stationary) {
                    level = std::abs(target - level) <= level_step ? target : level + (target > level ? level_step : -level_step);
                    stereo = stereo.lerp(target_stereo, stereo_step);
                }
                const double position = phase * size;
                const int index = int(position);
                const double sample = Math::lerp(double(wave[index]), double(wave[(index + 1) % size]), position - index);
                // Preserve Vector2 float rounding and addition order of the
                // script mixer, including its separate nonstationary products.
                mix[i] += stationary ? sample * amplitude : (sample * level * gain) * stereo;
                phase = Math::fposmod(phase + phase_step, 1.0);
            }
            s[0] = phase;
            s[1] = level;
            s[4] = stereo.x;
            s[5] = stereo.y;
        }
        Array result;
        result.push_back(output);
        result.push_back(controls);
        return result;
    }
};

static void initialize_city_audio(ModuleInitializationLevel level) {
    if (level == MODULE_INITIALIZATION_LEVEL_SCENE) {
        ClassDB::register_class<CityPadMixer>();
        ClassDB::register_class<CityMaskUnion>();
    }
}
static void terminate_city_audio(ModuleInitializationLevel) {}

extern "C" {
GDExtensionBool GDE_EXPORT city_audio_init(GDExtensionInterfaceGetProcAddress get_proc_address,
        GDExtensionClassLibraryPtr library, GDExtensionInitialization *initialization) {
    GDExtensionBinding::InitObject init(get_proc_address, library, initialization);
    init.register_initializer(initialize_city_audio);
    init.register_terminator(terminate_city_audio);
    init.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);
    return init.init();
}
}
