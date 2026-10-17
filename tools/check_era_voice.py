"""Use the existing A6 meter only for the new era II drone profiles."""
from pathlib import Path
import json
from analyze_acoustics import measure, CONFIG, ROOT

folder = ROOT/'验证记录/Demo/时代Demo_第61轮/声学'
measured = {name: measure(folder/(name+'.f32')) for name in ['minor_second','tritone','perfect_fifth']}
p = CONFIG['acoustic_measurement']
a,b,c = [measured[k] for k in ['minor_second','tritone','perfect_fifth']]
checks = {'minor_peak': abs(a['target_peak_hz']-p['target_hz']) <= p['target_tolerance_hz'] and a['target_prominence_db'] >= p['minor_peak_db'],
          'tritone_no_slow_peak': b['maximum_slow_prominence_db'] < p['no_peak_db'],
          'concordance_variation': c['maximum_slow_prominence_db'] < p['no_peak_db'] and c['envelope_variation_db'] < p['consonant_variation_db']}
report = {'protocol':'spec.audio A6, new era II only','assist':'OFF','checks':checks,'measurements':measured,'human':'PENDING'}
(folder/'measurement.json').write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print('ERA_VOICE', checks, 'minor', a['target_prominence_db'], 'tritone', b['maximum_slow_prominence_db'], 'fifth', c['envelope_variation_db'])
raise SystemExit(0 if all(checks.values()) else 1)
