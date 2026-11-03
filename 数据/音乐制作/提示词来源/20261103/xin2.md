结合《共鸣之城》的最新源码（`scripts/audio/*.gd`、`scripts/world/*.gd`）以及产品规格文档（**54 总案、56 权益映射、58 作曲、63 柔和长听、64 暗线过渡、67 `blau`、68 四首新古典氛围**），你目前的 v2 版 13 首提示词已经非常漂亮地覆盖了**基础六曲框架**与**十调式（`Palette.NAMES` 0～9）**。

但如果你要把生成的音频**通过分轨（Stem Separation）真正放进游戏的动态变换与声部叠加（12长轨 / 4短槽 / 2自然声、80 BPM 共享拍钟、四角色 `foundation / pulse / answer / lead` 切换）**，对照现有代码和设计文档，目前还存在 **4 大内容缺口** 和 **3 个会影响后期分轨叠加的工程痛点**。

下面我先帮你盘点**游戏里还缺什么歌**、给出**让分轨和叠加效果翻倍的 v3 级进阶思路**，最后直接提供**可复制的全新提示词库**。

---

### 一、 对照源码与文档：游戏目前还缺什么音乐？

1. **文档 68 明确规划、但 v2 尚未覆盖的 3 首新古典氛围候选**：
   - 你在 v2 的 `04` 覆盖了 `blau`，`12` 覆盖了 `warm_6_8_v1`（三拍子温暖叙事）；
   - **还缺 `coastal_wind_v1`（海岸线与风之诗）**：中音区近场毛毡钢琴 + 慢起音温暖弦垫 + 水岸留白；
   - **还缺 `cello_elegy_v1`（暮色窄巷与室内大提琴）**：松香颗粒感独奏大提琴 + 室内弦乐长音（`chamber_long`）与轻断奏（`spiccato_cell`）的互斥对话（区别于 `05` 的吉他钢琴伴奏，这首是纯弦乐室内编制）；
   - **还缺 `fifth_space_v1`（五度空间与拨弦交响）**：低频持续音（`low_drone`）+ 稀疏拨弦与钢琴问答（`pizzicato_dialogue`）+ 2～4 dB 弦乐浪潮（对应镜头拉远 `zoom > 30` 的 `city / SYMPHONY` 远景俯瞰或传世地标）。
2. **源码 `city_creation_music.gd` / `theme_pcm.gd` 中存在、但 v2 漏掉的 3 个专属声部槽位**：
   - **市集长街 (`wood_market`)**：代码里专门定义了 `market: "市集长街"`，配器是 **`accordion`（温暖手风琴/簧片）+ `pluck`（清脆拨弦）**。目前 13 首里没有任何一首包含手风琴/温暖簧片音色，面包坊出炉与运河市集缺少灵魂音色。
   - **轨街漫游与八音阁 (`clockwork_waltz` / `tram_promenade`)**：`03` 用了马林巴+低音单簧管，但代码里的 `clockwork_waltz` 与手札 `brass_orchard`（黄铜果园/八音盒）大量使用了 **`oboe`（双簧管）+ `celesta / vibraphone`（钢片琴/电颤琴）+ `accordion`**，需要一首带“手作八音盒与叮当轨街感”的轻巧室内乐。
   - **复调音乐学院 (`music_academy` / `quartet`)**：代码 `_signature_at_phrase` 为地标“复调学院”专门写了四声部 **`strings`（室内弦乐四重奏）**，目前提示词中还没有纯正的温暖弦乐四重奏。
3. **源码四时微气候（`Microclimate`）与 18 张手札微景的专属氛围变奏**：
   - 代码 `city_creation_microclimate.gd` 和 `ambience.gd` 有 **`sun_shower`（晴雨微澜）** 和 **`autumn_gold`（秋林金叶）**；
   - 手札系统（文档 54 第 7 节、文档 56）有 **`twilight_tea_pavilion`（夕照茶亭）**、**`lantern_bridge_echo`（提灯桥影）**、**`courtyard_canon_spring`（围院清泉）**。
4. **【最关键缺口】专供“分轨叠加”使用的「无主奏纯功能织体轨（Isolated Role Stems）」**：
   - 这是把 AI 音乐接进动态游戏最核心的一步（详见下方进阶思路）。

---

### 二、 进阶 IDEA：如何让 Lyria 3.5 生成的歌“更好拆轨、更能在游戏里自由叠加”？

你提到要用 Lyria 3.5 生成后**分音轨融入游戏的变换和叠加**。结合现有音频分轨模型（Demucs v4 `htdemucs_6s`、UVR5、lalal.ai、RipX）的物理特性和本项目代码，有 **3 个极其关键的改进点**：

#### 1. 避开“同族乐器频段粘连”（防止分轨软件拆不开）
- **痛点**：分轨模型是按**声学家族（Bass / Piano / Guitar / Strings / Winds）**拆轨的。比如你 v2 的 `09` 同时写了 *Clarinet + Flute*（同属木管），`05` 的大提琴既拉旋律又当低音（同属弦乐），分轨模型会把它们合在同一条轨里，游戏里想单独 Mute 掉主奏（P2/P5 减法段）或只替换伴奏就做不到。
- **解法（异族分频配器法）**：在提示词里强制把游戏的 4 个角色分配给**完全不同物理类别的乐器**，且锁死音区：
  - `Foundation (低音层)`：Pizzicato Double Bass（拨弦低音提琴）或 Warm Bowed Cello（仅限 C2–D3 低音区）
  - `Pulse (律动层)`：Nylon-String Guitar（尼龙弦吉他）或 Rosewood Marimba（玫瑰木马林巴）
  - `Answer (呼应层)`：Concert Harp（竖琴泛音）或 Celesta / Felt Piano（高音区点缀）
  - `Lead (主奏层)`：Alto Flute / Clarinet / Oboe（木管）——这样分轨软件能拆出 **100% 零串音** 的 4 条独立音轨！

#### 2. 锁死 `Strictly 80 BPM, 4/4`，连 6/8 拍和庆典曲也要用“80 BPM 内部律动”写
- **痛点**：代码里 `SECONDS := 24.0`（8小节 × 3秒 = 24秒，144秒 = 48小节），所有换流（`ScorePlayback`、`StreamTransition` 150ms 预混）都建立在 **80 BPM** 上。
  - 你 v2 的 `12 · 灯下归途` 写了 `54 BPM`，`13 · 一城相聚` 写了 `88 BPM`；而且前面用了 `"around 80 BPM"`。一旦 AI 自由变速（Rubato）或速度不一致，切出来的 24 秒音轨在循环接缝处必然错拍，也无法和其他音轨叠在一起！
- **解法**：提示词必须写 **`strictly 80 BPM, steady 4/4 meter with a consistent pulse`**。想要 6/8 摇篮曲感（如文档 54 第 7 节要求“保持 4/4 公共拍钟，不单轨另开 6/8”），在提示词里写 **`steady 80 BPM 4/4 pulse felt in gentle triplet subdivisions (12/8 sway)`**，这样既有 6/8 的温柔摇摆，又能严丝合缝卡进游戏 24 秒的网格里！

#### 3. 【王牌技巧】生成“无主奏纯织体伴奏包（Stem-Ready Overlay Beds）”
- **痛点**：如果你拿完整母曲加上“水岸附加句”再生成一首歌，AI 会生成一段**全新的旋律和不同的和弦落点**，你拆出来的竖琴轨是没法直接叠在原曲（比如 `01`）上面的，会和弦打架。
- **解法**：除了生成完整母曲，专门用一套**“无主旋律、固定和声循环（D -> Bm -> G -> A）、仅包含 2 个伴奏声部”**的提示词生成**纯叠加素材轨**！这样拆出来的 `Warm 弦乐圆号暖垫`、`Flowing 流水竖琴`、`Artisan 木琴对答` 可以像乐高积木一样，随时在游戏里以 `0~4 dB` 慢包络（`city_creation_affinity_envelope.gd`）无缝叠进任何一首 D 大调母曲！

---

### 三、 新增补全与升级提示词库（直接复制区）

#### 第一组：补全文档 68 与代码曲库缺口的 6 首核心母曲（14 ～ 19）

##### 14 · 海岸风诗 · `ly35_coastal_wind`（对应文档 68 `coastal_wind_v1` · 水岸与开阔庭院）
> **分轨设计**：近景毛毡钢琴（Keys 轨）+ 大提琴与中提琴慢呼吸长垫（Strings 轨）+ 稀疏尼龙吉他泛音（Guitar 轨）。
```text
Instrumental neoclassical coastal chamber music for an open waterside promenade and breezy courtyards. No vocals or humming. About 2 minutes 30 seconds, C major with luminous add9 and major7 voicings, strictly 80 BPM, steady 4/4 with an unhurried, spacious feel. Audiophile close-mic studio recording. Forefront: an intimate felt piano with soft mechanical key-action warmth plays a sparse, poetic middle-register melody, leaving long, breathable pauses at the end of each phrase. Midground: a fingerstyle nylon-string guitar adds delicate, widely spaced harmonic chimes only during the piano's rests. Deep halo: a warm chamber string duo (cello and viola) swells in and out with slow, gentle bow attacks (around 1-second fade-in), creating a sense of open horizon and sea breeze without using any actual wind or wave sound effects. Crystal-clear separation between piano, plucked harmonics, and slow string swells; no percussion, synth wash, or dramatic drops.
```

##### 15 · 暮巷弦歌 · `ly35_cello_elegy`（对应文档 68 `cello_elegy_v1` · 窄巷、黄昏与纪念地标）
> **分轨设计**：独奏大提琴中音区叙事（Lead 轨）+ 室内弦乐断奏/拨弦轻律动（Pulse 轨）+ 低音提琴深沉托底（Foundation 轨）。刻意避开高频刺耳区（2.5–3.5 kHz 柔化）。
```text
Instrumental intimate chamber music for twilight stone alleys and quiet memorial courtyards. No vocals or humming. About 2 minutes 30 seconds, E major shading gently into C-sharp minor, strictly 80 BPM, steady 4/4. Warm ribbon-microphone recording that softens harsh upper-mid frequencies while preserving tactile wood resonance. A solo cello sings a deeply comforting, low-profile cantabile line in its middle register with gentle rosin texture, frequently resting to let the space breathe. Accompaniment: a small chamber string ensemble alternates between soft, brushed spiccato eighth-note figures and warm, sustained harmonic cushions, grounded by a deep pizzicato double bass on the downbeats. Let the transitions between sustained chords and delicate short-bowed pulse unfold gradually with natural acoustic decay—never abrupt, tragic, or percussive. Distinct register separation, no drums, brass, or harsh high violin tremolos.
```

##### 16 · 五度晴空 · `ly35_fifth_space`（对应文档 68 `fifth_space_v1` · 远景俯瞰 `zoom>30` 与观景台地标）
> **分轨设计**：双簧管/英国管开阔五度旋律（Winds 轨）+ 提琴拨弦与毛毡钢琴点状问答（Pluck/Keys 轨）+ 低音提琴与圆号温暖持续音（Drone Foundation 轨）。
```text
Instrumental panoramic neoclassical chamber music for high scenic overlooks and grand city vistas. No vocals or choir. About 2 minutes 30 seconds, C major built on open fifths and suspended harmonies, strictly 80 BPM, steady 4/4. Spacious, three-dimensional studio acoustics with natural depth. Deep foundation: a warm, controlled low cello and French horn drone provides a steady, reassuring pedal point without muddying the low end. Midground: sparse, interlocking pizzicato strings and a soft felt piano engage in a delicate question-and-answer dialogue. Forefront: a mellow English horn (cor anglais) enters unhurriedly with a noble, lyrical theme spanning open fourths and fifths, then steps back to let the plucked dialogue and gentle 3-dB string waves breathe. Clear separation between wind lead, plucked/key dialogue, and low drone; no orchestral bombast, timpani, or sound effects.
```

##### 17 · 麦香长街 · `ly35_market_promenade`（补齐源码 `wood_market` 槽位 · 面包坊、茶座与运河市集）
> **分轨设计**：温暖手风琴/口琴簧片旋律（Reed/Wind 轨）+ 尼龙吉他轻快指弹（Guitar 轨）+ 拨弦低音提琴（Bass 轨）。专为明线经营（烘焙出炉、邻里采购）打造。
```text
Instrumental European pastoral chamber folk for a sunlit canal market and cozy neighborhood bakery street. No vocals or crowd noise. About 2 minutes 30 seconds, D major, strictly 80 BPM, steady 4/4 with a cheerful, relaxed walking lilt. Warm, close-miked acoustic production. Forefront: a boutique acoustic accordion with a mellow, woody cassotto register plays a charming, unhurried melody full of warmth and gentle breath, leaving clear gaps between phrases. Midground: a nylon-string acoustic guitar weaves a nimble, lightly syncopated fingerstyle accompaniment. Foundation: an upright acoustic bass plays warm, rounded pizzicato notes on the main beats, occasionally joined by a soft celesta bell answer at phrase endings. Keep the arrangement airy, intimate, and handcrafted—never loud, frantic, or carnival-like. Pristine separation between reed melody, guitar plucks, and upright bass; no drums or percussion.
```

##### 18 · 黄铜八音阁 · `ly35_clockwork_atelier`（补齐源码 `clockwork_waltz` / `tram_promenade` · 钟表坊与叮当轨街）
> **分轨设计**：圆润双簧管主奏（Oboe 轨）+ 钢片琴/电颤琴八音盒式精致织体（Mallet/Keys 轨）+ 大提琴拨弦与长音交替（Cello 轨）。
```text
Instrumental chamber music evoking a sunlit watchmaker's atelier and a gentle brass tramway promenade. No vocals or humming. About 2 minutes 30 seconds, D major, strictly 80 BPM, steady 4/4 with a graceful, clockwork-inspired precision that still feels warm and human. Audiophile small-room recording. Forefront: a mellow, expressive oboe sings a poised, lyrical melody in its warm middle register, resting generously between sentences. Midground: a warm celesta and soft-mallet vibraphone weave delicate, music-box-like arpeggios and bell-like counter-notes in the spaces of the oboe. Foundation: a cello provides a steady, comforting pizzicato pulse that blooms into warm bowed notes during the lyrical crest. Crisp, rounded transients, clear frequency separation between woodwind, pitched percussion, and low strings; no mechanical ticking sound effects, harsh metal clanks, or drums.
```

##### 19 · 书院四重奏 · `ly35_academy_quartet`（补齐源码 `music_academy` / `polyphonic_academy` · 复调书院与礼乐前场）
> **分轨设计**：为方便后期分轨，采用**“木管长笛 + 古典吉他 + 中提琴 + 大提琴”的室内四重奏（Flute Quartet）**代替纯弦乐四重奏，既保留古典学院复调感，又能让分轨软件完美拆出 4 条声部！
```text
Instrumental classical-pastoral chamber quartet for a serene academy courtyard and colonnade. No vocals or choir. About 2 minutes 30 seconds, D major, strictly 80 BPM, steady 4/4. Pristine, warm wood-hall acoustics withribbon-mic intimacy. Written for a four-voice chamber ensemble designed for clear separation: a wooden concert flute (lead), a classical nylon-string guitar (harmonic pulse), a warm viola (contrapuntal answer), and a bowed cello (bass foundation). Let the four instruments engage in gentle, transparent polyphony—introducing a graceful theme on the flute, passing a soft imitative answer to the viola during the flute's rests, while the guitar maintains a poised broken-chord pulse and the cello anchors the harmony with smooth voice-leading and prepared 4-3 suspensions. Intimate, scholarly, and deeply soothing; no harpsichord harshness, brass, or heavy orchestral tuttis.
```

---

#### 第二组：四时微气候（`Microclimate`）与手札二阶微景的 4 首特色曲目（20 ～ 23）

##### 20 · 晴雨微澜 · `ly35_sun_shower_eaves`（对应源码 `microclimate == "sun_shower"` · 太阳雨屋檐与水岸）
> **特点**：用玫瑰木马林巴与竖琴模拟“屋檐水滴的音乐化映射”，绝不混入真实白噪音雨声（以免污染分轨），搭配温暖单簧管。
```text
Instrumental chamber music evoking a gentle sun-shower over tiled roofs and stone canals. No vocals or actual rain/water sound effects. About 2 minutes 30 seconds, D major with reflective B-minor and G-major7 colors, strictly 80 BPM, steady 4/4. Warm, close-miked studio acoustics. Midground pulse: a concert harp and a soft rosewood marimba play delicate, droplet-like staccato plucks and gentle interlocking ripples with plenty of air between notes. Forefront: a warm clarinet in its mellow lower-middle register enters with a comforting, unhurried melody, like sunlight breaking through light clouds. Foundation: a muted cello sustains long, grounding bass notes. Pure musical timbres only, crystal-clear separation between clarinet, plucked/mallet droplets, and cello bass; no white-noise rain, thunder, or drums.
```

##### 21 · 秋林金叶 · `ly35_autumn_promenade`（对应源码 `microclimate == "autumn_gold"` & 手札 `vignette_golden_promenade`）
> **特点**：圆号（French Horn）温暖中低音托底 + 木吉他指弹 + 长笛，充满秋日金叶林荫道的醇厚感。
```text
Instrumental pastoral chamber music for an autumn promenade beneath golden trees. No vocals or humming. About 2 minutes 30 seconds, A major with warm D-major subdominant glow, strictly 80 BPM, steady 4/4. Rich, golden ribbon-mic acoustic recording. Forefront: a wooden alto flute plays a nostalgic, singing melody with gentle breath warmth and long rests. Answer & Harmony: a mellow solo French horn plays quiet, velvety inner-voice counter-melodies and warm fifths in the background, never brassy or loud. Pulse & Foundation: a fingerstyle acoustic guitar weaves warm broken chords, supported by a soft pizzicato double bass. Let the interplay between woodwind, soft horn, and plucked strings evoke falling golden leaves and late-afternoon warmth. Distinct separation, no wind noise or percussion.
```

##### 22 · 夕照茶亭 · `ly35_twilight_tea_salon`（对应手札 `twilight_tea_pavilion` & `garden_salons` · 花下茶叙余韵）
> **特点**：软槌电颤琴（Vibraphone）+ 尼龙吉他 + 大提琴，营造黄昏茶座悠长余韵（Afterglow）。
```text
Instrumental twilight chamber music for an outdoor garden tea pavilion at sunset. No vocals or clinking cup sound effects. About 2 minutes 30 seconds, F major with warm major7 and major9 harmonies, strictly 80 BPM, steady 4/4. Intimate, velvet studio acoustics. Forefront: a vibraphone played with soft yarn mallets (motor off, gentle natural decay) traces a tender, glowing melody that hangs softly in the dusk air. Answer: a bowed cello responds in the pauses with warm, singing middle-register phrases. Pulse: a nylon-string guitar provides a relaxed, unhurried harmonic bed. Let the music feel like a lingering conversation among neighbors at dusk—spacious, unhurried, and deeply peaceful. Clean separation between mallet bell tones, guitar plucks, and bowed cello; no jazz drums or synth pads.
```

##### 23 · 提灯桥影 · `ly35_lantern_bridge_canon`（对应手札 `lantern_bridge_echo` & 跨岸卡农 `Canon`）
> **特点**：专为跨水石桥与夜晚水岸设计，长笛与单簧管在立体声场中形成温和的“一问一答/卡农呼应”，竖琴铺底。
```text
Instrumental nocturnal waterside chamber music for stone arch bridges lit by warm paper lanterns. No vocals or water sound effects. About 2 minutes 30 seconds, D major, strictly 80 BPM, steady 4/4. Pristine, spacious acoustic recording. Featuring a gentle two-voice contrapuntal dialogue: a soft concert flute introduces a calm, lyrical phrase, and a warm clarinet enters two beats or one bar later with a gentle imitative answer in a lower register, never crowding the flute. Underneath, a concert harp plays steady, rippling arpeggios, grounded by a deep, quiet bowed cello bass. Allow the call-and-response across the stereo field to feel like lantern reflections answering each other across a quiet river. Clean separation between woodwinds, harp, and cello; no percussion or synth wash.
```

---

#### 第三组：【强烈推荐】专为游戏内“动态叠加与变换”设计的 4 条「无主奏纯分轨（Stem-Ready Overlays）」提示词（S1 ～ S4）

> **为什么需要这 4 条？**
> 游戏里的暗线系统（文档 64 / `city_creation_affinity_envelope.gd`）需要根据玩家的建造（围合院落、引水成岸、修建百工、架桥连岸），在**不切断当前母曲**的前提下，把 `Warm（暖垫）`、`Flowing（流水）`、`Echo（呼应）`、`Canon（对位）` 缓慢推起。
> 下面这 4 条提示词**全部锁死在游戏母曲的权威 8 小节和声进行（`D - Bm - G - A - D - Bm - G - D`，80 BPM，4/4）**，并且**明确禁止生成主旋律（No lead melody）**！你生成后直接切出 24 秒（8 小节）循环，就能**零违和感地叠加在游戏里任何一首 D 大调母曲下方**！

##### S1 · 纯空间叠加轨：围合院落暖垫层（`Foundation: Warm` · Bass + Horn + Strings）
```text
Instrumental accompaniment-only harmonic bed for a dynamic game soundtrack. No lead melody, no solo instrument, no vocals, no drums. Exactly 80 BPM, steady 4/4 meter, repeating an 8-bar chord progression in D major: Bar 1 D major, Bar 2 B minor, Bar 3 G major, Bar 4 A major, Bar 5 D major, Bar 6 B minor, Bar 7 G major, Bar 8 D major (each bar is 4 beats / 3 seconds, 24-second cycle). Warm, close-miked chamber recording: a deep acoustic bass plays gentle downbeat roots, while a soft French horn and a small cello/viola section sustain velvet, breathing low-mid chords with slow attacks and natural pauses at bar boundaries. Keep the upper register completely empty so a separate melody track can sit on top without frequency masking. Pure, steady, warm accompaniment bed.
```

##### S2 · 纯空间叠加轨：临水长廊流动层（`Pulse: Flowing` · Concert Harp + Nylon Guitar）
```text
Instrumental accompaniment-only arpeggiated pulse track for a dynamic game soundtrack. No lead melody, no vocals, no bass, no drums. Strictly 80 BPM, steady 4/4 meter, following a clean 8-bar harmonic cycle in D major (D - Bm - G - A - D - Bm - G - D). Audiophile acoustic recording: a concert harp and a fingerstyle nylon-string guitar weave fluid, wave-like eighth-note broken chords in the middle register (MIDI 52 to 66), leaving a gentle breathing gap on the fourth beat of every second bar. Consistent tempo, crystal-clear plucked transients, natural room air, and an open upper register reserved for an external lead voice.
```

##### S3 · 纯空间叠加轨：百工街坊木质呼应层（`Answer: Echo` · Rosewood Marimba + Celesta）
```text
Instrumental sparse counter-rhythm and echo layer for a dynamic game soundtrack. No continuous lead melody, no bassline, no vocals, no drums. Strictly 80 BPM, steady 4/4 meter in D major (compatible with a D - Bm - G - A progression). Warm, close-miked studio recording: a rosewood marimba played with soft yarn mallets and a delicate celesta play brief, playful 2-note and 3-note wooden/bell answers only on Beats 3 and 4 of every second bar, leaving Beats 1 and 2 in complete silence. Designed as an interlocking "Answer" stem that fills the rests of a main melody without ever competing for the foreground.
```

##### S4 · 纯空间叠加轨：内陆曲路摇曳层（`Pulse: Sway` · Solo Fingerstyle Acoustic Guitar）
```text
Instrumental solo acoustic guitar accompaniment stem for a dynamic game soundtrack. No lead melody, no other instruments, no vocals. Strictly 80 BPM, steady 4/4 meter in D major (following an 8-bar cycle: D - Bm - G - A - D - Bm - G - D). Intimate ribbon-mic recording: a single warm nylon-string guitar plays a gentle, swaying fingerstyle accompaniment pattern with a soft thumb bass on Beat 1 and warm middle-register chord plucks on Beats 2 and 3, letting Beat 4 ring out naturally. Steady, machine-accurate 80 BPM timing with warm human touch, ideal for seamless 24-second loop slicing.
```

---

#### 第四组：原 `12 / 13` 的 80 BPM 锁拍修正版 + D 大调短音/环境声模板（v3 升级版）

##### 12-v3 · 灯下归途（80 BPM 锁拍三连音版 · 解决原 54 BPM 无法与游戏主时钟同步的问题）
> **修正点**：保持游戏全局 `80 BPM, 4/4` 拍钟不变，用四拍子里的**三连音摇摆（Triplet / 12/8 Sway）**来实现 6/8 拍的温暖摇篮曲感，这样切出来的 24 秒片段可以直接放进游戏主池！
```text
Instrumental neoclassical chamber music with a comforting, gently rocking triplet sway, like walking home toward warm windows at dusk. No vocals or humming. About 2 minutes 30 seconds, D major, strictly 80 BPM in a steady 4/4 meter felt with a warm, relaxed triplet lilt (12/8 feel). Warm, intimate close-miked acoustics. A soft felt piano carries a tender, middle-register melody with generous pauses; a bowed cello weaves a rich, singing counter-line in the rests, while a nylon-string guitar lightly outlines the triplet sway with sparse, warm plucks. Let the arrangement unfold organically from a quiet opening into a comforting, layered middle before settling into a peaceful resolution. Distinct separation, steady 80 BPM grid, no pop drums or vocals.
```

##### 13-v3 · 一城相聚（80 BPM 锁拍室内庆典版 · 解决原 88 BPM 无法对齐 24 秒演出时钟的问题）
> **修正点**：源码中街坊演出/传世乐章 `CONCERT_DURATION := 24.0` 严格绑定 80 BPM（8小节）。将速度从 88 BPM 锁定回 **80 BPM**，用十六分音符木琴灵动点缀来制造欢快感，而非靠加快 BPM。
```text
Instrumental chamber celebration for a small, joyful city gathering—graceful, spirited, and personal. No vocals or crowd sounds. About 2 minutes 30 seconds, D major, strictly 80 BPM, steady 4/4 meter locked to a clean 8-bar phrase structure. Vibrant, crystal-clear small-ensemble studio recording. Four distinct acoustic voices share the stage: a warm wooden flute (lead), a soft acoustic piano (harmonic answer), a nimble rosewood marimba (rhythmic pulse), and a bowed/pizzicato cello (bass foundation). Pass an uplifting, memorable theme between the flute and piano while the marimba adds joyful sixteenth-note wooden sparkle, keeping a single melodic lead at any moment. Clean separation, no brass fanfares, martial drums, or tempo drift.
```

##### 短音素材模板（v3 · 修正为游戏权威 D 大调五声 `D4, E4, F#4, A4, B4`）
> **修正点**：原 v2 模板写的是 `C4, E4, G4, A4`（C大调），而游戏源码 `ThemePCM.PITCH_CLASSES := [2, 4, 6, 9, 11]` 与 `PitchPluck` 默认全在 **D 大调五声（D, E, F#, A, B）**。改成下面这套，切出来的单音和双音（如石阶八度双音、闭环纯五度 `D5+A5`）可以直接替换进游戏短音池！
> *(可将 `[INSTRUMENT]` 替换为：`concert harp`, `felt piano`, `rosewood marimba`, `celesta`, `nylon-string guitar`, `wooden flute`, `pizzicato cello`, `warm bronze tower bell`)*
```text
High-definition acoustic instrument sampling session featuring only [INSTRUMENT]. No vocals, accompaniment, or background noise. Perform isolated, expressive single notes on D4, E4, F#4, A4, and B4 one at a time, leaving 3 seconds of complete silence between each note so the natural acoustic body and tail decay completely. Follow the single notes with two brief, graceful fifth dyads (D4 with A4, and E4 with B4). Capture the instrument close and dry with boutique ribbon-microphone warmth, rich natural overtones, and gentle, tactile articulation. Audiophile sound-design study for a handcrafted game, not a continuous melody. No wet reverb wash, delay, or percussion.
```

##### 自然底景模板（对应源码 `city_creation_ambience.gd` 的 2 条固定环境声池：`water` 与 `forest`）
> **用途**：源码严格限制 2 条自然环境流（12秒循环）。用这两条生成高保真纯自然底噪，不含任何乐器音高，避免和 12 条音乐轨产生调性冲突。
```text
Pure, high-definition natural field recording of a gentle, shallow pebble brook flowing through a quiet meadow. No musical instruments, no melodies, no vocals, no sudden splashes, no heavy waterfall roar. About 30 seconds of steady, seamless, soothing water murmur with soft mid-frequency babble and natural stereo air, ideal for a 12-second seamless loop in a cozy town-building game.
```
```text
Pure, high-definition natural field recording of a sunlit Mediterranean olive and cypress grove in a gentle breeze. No musical instruments, no melodies, no vocals. Soft, warm rustling of leaves in the wind with occasional, distant, gentle songbird calls that never pierce the high frequencies. Steady, peaceful, uncluttered acoustic atmosphere ideal for a seamless background loop.
```