动感UI 做一个emoji库（主要上网找现成的通用的也行）  然后根据情况和文字选择相应的emoji作为UI或示例图
选择的图也可以根据实际情况和描述内容作生动简单的修改，像是反色等

为了实现**“更多层次、更好音色、留出AI自由发挥空间”**这三个目标，同时不破坏游戏后期“分轨（Stem Separation）”的工程底线，本轮对 v1
提示词进行了以下核心升级（升级为 v2）：

核心改进思路（为什么这样改）：

1.  释放 AI 音乐性（给自由空间）：
      - 去掉死板的曲式命令： v1 中大量使用 Form: A, B, C, D... 的机械指令，这会导致 Lyria 像填表一样生硬切段。v2
        改为**“有机生长（organic unfolding / natural ebb and
        flow）”**的呼吸感描述，把具体的和声走向、变奏方式交给模型自由发挥。
      - 缩减负面清单（Negative Prompts）： 过长的 No xxx, no xxx 会让模型畏手畏脚、动态变平。v2
        仅保留最关键的排他项（无人声、无鼓组、无廉价音效），把注意力还给正面的美学引导。
2.  提升音色质感（Audiophile 级录音室词汇）：
      - 引入了真实的声学与拾音词汇（如 ribbon-mic warmth 铝带麦温暖感、wood resonance 木腔共鸣、rosin
        texture 松香擦弦感、felt-damped hammers 毛毡槌触键、natural acoustic decay
        自然声学衰减）。模型对这类词汇极其敏感，能显著减少“塑料MIDI感”。
3.  增加纵深层次（靠声场与织体，而非乱加乐器）：
      - 如果靠增加八九种乐器来叠层次，后期分轨会变成一锅粥。v2 采用**“前景-中景-远景（Foreground / Midground / Deep
        Halo）”的三维声场写法，以及“复调呼吸（contrapuntal interplay / harmonic
        bloom）”**，在保持 3~4 个核心音色家族的前提下，让曲子听起来有泛音、有空气、有对位层次。

以下是可直接替换进文档的 v2 版全场景提示词库（直接复制代码块即可使用）：

1. 区域与空间染色附加句（v2 升级版）

用法同前：需要生成特定场所偏重版本时，在母曲末尾加上一条即可。改写后更注重声学空间与声部互动，而非限制死弹法。

| 情况                  | 可选附加句（v2 层次与音色增强）                                                                                                                                                      |
| :------------------ | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **庭院/窄巷 (warm)**    | `Shape an intimate courtyard acoustic with close, velvet inner voicings, rich lower-mid wood resonance, and unhurried breathing room between phrases.`                 |
| **水岸 (Flowing)**    | `Let the accompaniment ripple with a fluid, wave-like contour and shimmering harmonic overtones, leaving spacious silence between gentle arpeggiated figures.`         |
| **百工 (weave/Echo)** | `Introduce playful, interlocking wooden replies and delicate contrapuntal echoes in the gaps of the melody, evoking patient, handcrafted artistry.`                    |
| **礼乐 (Lyrical)**    | `Allow the main theme to blossom into one poised, deeply expressive melodic arch supported by a warm, blooming harmonic halo, intimate rather than pompous.`           |
| **市集/茶座 (market)**  | `Infuse a welcoming, sunlit warmth through lightly syncopated plucked interplay and conversational phrasing, keeping the acoustic space airy and uncluttered.`         |
| **花园/林荫 (sylvan)**  | `Weave soft woodwind sighs and dappled plucked harmonics in alternating layers, creating a sense of shaded canopy and open acoustic air.`                              |
| **高地/台地**           | `Open up the vertical register with resonant fourths and fifths, wide voicing spacing, and a natural sense of horizon without drowning the instruments in wet reverb.` |
| **跨岸/空间呼应**         | `Include a graceful two-voice canon where a subordinate answering voice gently shadows and enriches the main melody from across the stereo field.`                     |

2. 11 首核心母曲：直接复制区（v2 升级版）

01 · 河湾初光 · ly35_river_dawn

升级点：强化长笛的气息感、尼龙弦吉他的指腹触弦与大提琴的木质低频包裹；去掉机械分段，让晨光感自然流动。

Instrumental pastoral chamber music for a handcrafted riverside town at dawn. No vocals or humming. About 2 minutes 30 seconds, D major, around 80 BPM, steady 4/4. An intimate, audiophile acoustic recording with warm ribbon-mic character. Forefront: a wooden alto/concert flute with gentle breath texture sings an original, hopeful theme, leaving generous pauses between phrases. Midground: a fingerstyle nylon-string guitar weaves fluid, rippling broken chords with rich harmonic overtones. Deep foundation: a warmly bowed cello provides resonant low-end weight and occasional counter-melodic sighs. Let the arrangement breathe and evolve organically—from a sparse, dewy opening into a richly layered conversational middle, stripping back to delicate guitar and cello harmonics before a warm, unhurried resolution. Distinct instrumental separation, natural room air, supple human dynamics, no percussion or sound effects.

02 · 拱廊日影 · ly35_arcade_light

升级点：突出古乐器的丝绒泛音与羊肠弦质感，鼓励模型在留白处自由发挥文艺复兴式的悬留音与微对位。

Instrumental Renaissance-inspired chamber music, intimate, sunlit, and deeply humane. No vocals or choir. About 2 minutes 30 seconds, D major, around 80 BPM, steady 4/4 with the graceful poise of a slow pavane. Pristine small-hall acoustics with rich wood and gut-string resonance. A mellow tenor recorder carries a lyrical, balanced melody, answered in its rests by the delicate plucked polyphony of a renaissance lute. Underneath, a viola da gamba bows warm, velvety bass lines and expressive harmonic suspensions. Allow the three voices to converse with natural contrapuntal freedom—trading fragments, thinning out to bare plucked textures, and blossoming into a tender, unified harmonic arch without ever crowding the foreground. Crisp yet rounded transients, clear spatial layering, no harpsichord harshness, drums, or grand orchestral brass.

03 · 铜齿与花房 · ly35_glasshouse_clock

升级点：强化玫瑰木马林巴的温润槌感与低音单簧管的木管深度，让“微极简主义”的织体自己生长出奇妙的咬合感。

Instrumental acoustic chamber minimalism set in a sunlit botanical glasshouse. No vocals or humming. About 2 minutes 30 seconds, D major, 80 BPM, steady 4/4. Warm, close-miked studio production with tactile wooden resonance. A rich rosewood marimba plays a gentle, evolving pattern with subtle 3+3+2 rhythmic lilt, using soft yarn mallets. In the spaces of the marimba, a velvety bass clarinet sings warm, woody melodic phrases, grounded by a patient pizzicato cello bassline. Let the interplay unfold with creative subtlety—shifting accents, opening up quiet pockets of silence, and weaving interlocking acoustic layers that feel lovingly handmade rather than mechanical. Clear frequency separation, lush low-mids, natural short decay, no clock sound effects, metallic glockenspiel, or drum kit.

04 · 玻璃叶脉 · ly35_green_underflow

升级点：强化新古典氛围（Olafur Arnalds / Nils Frahm 风格）的近景毛毡钢琴细节与立体声场的“窄到宽”呼吸层次。

Instrumental electroacoustic neoclassical chamber music for a serene ecological city of glass and water. No vocals or humming. About 2 minutes 30 seconds, D major coloured with lush major7 and add9 harmonies, 80 BPM, steady 4/4. Intimate, high-definition production: a close-miked felt piano with soft mechanical hammer warmth plays a reflective, original theme with plenty of space to decay. Beneath it, a small string ensemble breathes in slow, evolving harmonic waves, accompanied by a deep, velvet-filtered analog synth pulse that acts as a gentle undercurrent. Allow the music to organically expand from a narrow, private piano opening into a wide, luminous three-dimensional soundstage, then recede into quiet stillness before a tender final return. Distinct separation between keys, strings, and pulse; no beat drops, harsh shimmer, or water sound effects.

05 · 古巷深流 · ly35_alley_cantabile

升级点：把大提琴的松香质感、揉弦温度推到极致，钢琴与古典吉他化作高低错落的光影陪衬。

Instrumental chamber music with a soulful, comforting lower-register narrative. No vocals or humming. About 2 minutes 30 seconds, D major with poignant B-minor harmonic shading, 80 BPM, steady 4/4. Lush, intimate acoustic recording. A solo cello takes the lead in its warm middle-low register, singing a cantabile melody with expressive rosin texture and natural vibrato. When the cello rests, a soft acoustic piano answers with widely spaced, luminous upper-middle chords, while a sparse nylon-string guitar adds a delicate undercurrent of movement. Give the performance room to breathe and develop emotionally—moving through intimate reflection, a fragile piano-led interlude, and a deeply resonant, unhurried melodic crest. Rich wood body, clear register separation between low cello and higher accompaniment, no tragic melodrama or heavy percussion.

06 · 星窗夜话 · ly35_starlit_felt

升级点：打造深夜独处级的极致静谧音色，利用竖琴泛音（harmonics）与大提琴长音营造星夜纵深，给足留白。

Instrumental nocturnal chamber music, private, spacious, and deeply reassuring. No vocals or humming. About 2 minutes 30 seconds, F-sharp minor with warm glimpses of A major, 80 BPM in steady 4/4 with a floating half-time feel. Audiophile close-mic recording: a muted felt piano plays a tender, unhurried melody where every note hangs in the quiet air. A warm solo cello provides long, comforting harmonic cushions in the low register, while a concert harp places delicate, bell-like harmonics and sparse plucked notes only in the pauses of the piano. Let silence be an active instrument; allow the theme to wander gently, strip down to bare whispered notes, and bloom softly once more before fading into an open ending. Velvety warmth, crystal-clear separation, no synth pad wash, rain effects, or drums.

07 · 千阶微光 · ly35_terraced_sky

升级点：利用 G Lydian 的升四度色彩与音区跨度（低音长笛+竖琴+大提琴泛音）拉开山阶与天空的垂直空间层次。

Instrumental spacious chamber music evoking sunlit terraced hills opening to a vast sky. No vocals or choir. About 2 minutes 30 seconds, G Lydian mode featuring its luminous C-sharp color, 80 BPM, steady 4/4. Open, pristine acoustic soundstage achieved through wide register spacing rather than heavy reverb. A warm alto flute shapes an expressive motif built on open fourths and fifths, followed by long, airy pauses. A concert harp traces measured, ascending broken figures, grounded by a deep, noble bowed cello foundation. Let the composition unfold like a slow ascent—evolving the harmonic colors, thinning to an intimate harp-and-cello vista, and returning with a radiant, open-hearted melodic statement. Pure acoustic timbres, distinct layering, no wind effects, brass fanfare, or orchestral walls.

08 · 烟水群岛 · ly35_island_dorian

升级点：强化单簧管的圆润木香（chalumeau 音区到中音区）与吉他的水波泛音，赋予 B Dorian 一种神秘而温润的叙事感。

Instrumental chamber music for misty river islands and quiet footbridges. No vocals or humming. About 2 minutes 30 seconds, B Dorian mode with its characteristic warm G-sharp color, 80 BPM, steady 4/4. Natural, richly detailed small-room acoustics. A mellow clarinet leads with a gently circling, inquisitive melody full of warm woody resonance and soft offbeat pickups. A nylon-string guitar weaves fluid, rising and falling arpeggios with occasional chime-like harmonics, while a bowed cello anchors the bass with simple, spacious warmth. Let the phrases converse in a relaxed question-and-answer flow, drifting into a quiet, misty middle section before returning with a brighter harmonic glow. Intimate separation, supple phrasing, no exotic percussion, wave recordings, or dramatic swells.

09 · 林间牧歌 · ly35_woodland_dialogue

升级点：让单簧管与长笛形成林间光影般的“你来我往”，给AI留出木管即兴对话的灵动感，吉他负责托底。

Instrumental woodland chamber folk, dappled with light, conversational, and deeply unhurried. No vocals or choir. About 2 minutes 30 seconds, A major, 80 BPM, steady 4/4. Warm, organic acoustic recording with lifelike breath and wood textures. A mellow clarinet and a soft concert flute share the spotlight in alternating phrases—never competing, but answering each other like friendly voices beneath a forest canopy. Underneath, an acoustic guitar provides a complete, gently swaying fingerstyle harmonic bed with warm bass notes. Allow the interplay to feel spontaneous and alive, varying phrase lengths, opening up sunny acoustic clearings of solo guitar, and reuniting in a tender, unhurried return. Crisp instrumental separation, natural room air, no bird sound effects, celesta glitter, or heavy rhythms.

10 · 宫商河韵 · ly35_pentatonic_courtyard

升级点：深挖洞箫的气韵、古筝按滑音的余韵与大提琴无品低音的融合，用“气口与留白”打造当代新中式室内乐的高级感。

Instrumental contemporary Chinese-inspired chamber music for a tranquil waterside courtyard. No vocals or humming. About 2 minutes 30 seconds, centered on the C gong pentatonic collection (C D E G A), 80 BPM, steady 4/4. Audiophile acoustic recording with deep spatial clarity and natural wooden decay. A warm, mid-register bamboo xiao breathes a spacious, poetic melody with subtle pitch inflections and generous rests. In the silence between flute phrases, a guzheng offers sparse, resonant plucked notes and delicate lingering overtones, supported by a bowed cello playing warm, grounding open fifths. Let the music flow like ink on water—unhurried, contemplative, and organically evolving through timbre and space rather than dense chords. Pure, separated instruments, no tourist clichés, gongs, fast glissandi, or erhu melodrama.

11 · 印象水光 · ly35_water_reflections

升级点：注入拉威尔/德彪西式的印象派室内乐色彩，靠和弦转位、竖琴水滴般的点缀与大提琴丝绸般的铺底构建光影层次。

Instrumental impressionistic chamber music, luminous, fluid, and serene, evoking sunlight on still water. No vocals or humming. About 2 minutes 30 seconds, F major enriched with floating major7, major9, and gentle modal colors, 80 BPM, steady 4/4. Pristine, glowing studio acoustics. A soft concert piano with exquisite touch leads with an unhurried, singing melody and smooth voice-leading. A harp adds widely spaced, crystalline harmonic responses in the pauses, while a muted cello sustains a silky, warm foundation below. Let the harmonic colors shift and shimmer organically like light on water—passing through a sparse, delicate middle before swelling into one restrained, radiant harmonic bloom and an open ending. Clear separation between piano hammers and harp plucks, no surf recordings, synth pads, or drums.

3. 两首独立扩展曲（v2 升级版）

12 · 灯下归途 · ly35_homeward_six_eight

升级点：强化 6/8 拍的摇篮曲式律动（但保持室内乐高级感），突出钢琴、大提琴与吉他的温暖包裹感。

Instrumental neoclassical chamber music with a comforting six-eight sway, like walking home toward warm windows at dusk. No vocals or humming. About 2 minutes 30 seconds, D major, 6/8 meter with a broad, relaxed dotted-quarter pulse around 54 BPM. Warm, intimate close-miked acoustics. A soft acoustic piano carries a tender, memorable melody; a bowed cello weaves a rich, singing counter-line in the pauses, while a nylon-string guitar lightly outlines the compound meter with sparse, warm plucks. Let the arrangement unfold with natural emotional warmth—moving from a quiet, intimate opening into a gently rocking, layered middle where cello and piano converse, before settling into a peaceful, glowing resolution. Distinct separation, rich lower-mids, no pop drums, lush orchestra swells, or vocals.

13 · 一城相聚 · ly35_city_gathering

升级点：四种音色（长笛、钢琴、马林巴、大提琴）像室内乐重奏团一样默契传递主题，欢快但绝不吵闹，充满手作城市的生机。

Instrumental chamber celebration for a small, joyful city gathering—graceful, spirited, and personal. No vocals or crowd sounds. About 2 minutes 30 seconds, D major, 88 BPM, steady 4/4. Vibrant, crystal-clear small-ensemble studio recording. Four distinct acoustic voices share the stage: a warm flute, a soft piano, a resonant low marimba, and a bowed cello. Introduce an uplifting, memorable theme and pass it playfully between the flute and piano, while the marimba adds nimble wooden rhythmic sparkle and the cello anchors the harmony with warm pizzicato and bowed lines. Let the ensemble interact like skilled chamber musicians—building from an intimate opening to a joyful, contrapuntal crest, pausing for a tender reflective moment, and uniting for a warm, satisfying finish. Clean separation, single melodic lead at any moment, no brass fanfares, martial drums, or stadium bombast.

4. 短音素材模板（v2 音色升级版）

在保持干声、留白和固定音高以便裁切的前提下，大幅提升了单音的声学采样品质（泛音、触键与自然衰减），避免生成干瘪的电子测试音。

High-definition acoustic instrument sampling session featuring only [INSTRUMENT]. No vocals, accompaniment, or background noise. Perform isolated, expressive single notes on C4, E4, G4, and A4 one at a time, leaving several seconds of complete silence between each note so the natural acoustic body and tail decay completely. Follow the single notes with two brief, graceful two-note intervals from the same pitches. Capture the instrument close and dry with boutique microphone warmth, rich natural overtones, and gentle, tactile articulation. This is an audiophile sound-design study for a handcrafted game, not a continuous melody. No wet reverb wash, delay, chords, or percussion.

给后期分轨（Stem Separation）的实操建议：

改用 v2 提示词后，生成的音频会有更丰富的房间空气感（Room Air）和乐器泛音（Overtones）。在进入第 10 节分轨流程时：

  - 不要过度降噪： 分轨软件分离出的 bed 轨里如果带有少量木质箱体共鸣或踏板呼吸声，请保留，这正是让游戏背景音乐“有生命力、不塑料”的关键。
  - 优先保保真度： 因为我们在提示词里强调了 wide register spacing（拉开音区跨度，比如低音大提琴+中音吉他+中高音长笛），分轨模型会比
    v1 更容易切出干净的 lead（主奏）和 bed（伴奏基底）。如果遇到钢琴与竖琴泛音交织极美但强拆会出金属声的段落，遵循文档第 3
    节原则，直接合并为高保真 bed 使用即可。
