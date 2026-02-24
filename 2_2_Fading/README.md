exercise: https://docs.sunfounder.com/projects/esp32-starter-kit/en/latest/arduino/basic_projects/ar_fading.html

                             Memory Type Usage Summary                              
┏━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━┓
┃ Memory Type/Section   ┃ Used [bytes] ┃ Used [%] ┃ Remain [bytes] ┃ Total [bytes] ┃
┡━━━━━━━━━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━╇━━━━━━━━━━╇━━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━━┩
│ Flash Code            │        68966 │          │                │               │
│    .text              │        68966 │          │                │               │
│ IRAM                  │        54135 │     41.3 │          76937 │        131072 │
│    .text              │        53107 │    40.52 │                │               │
│    .vectors           │         1028 │     0.78 │                │               │
│ Flash Data            │        40392 │          │                │               │
│    .rodata            │        40136 │          │                │               │
│    .appdesc           │          256 │          │                │               │
│ DRAM                  │        12724 │     7.04 │         168012 │        180736 │
│    .data              │        10380 │     5.74 │                │               │
│    .bss               │         2344 │      1.3 │                │               │
│ RTC SLOW              │           56 │     0.68 │           8136 │          8192 │
│    .force_slow        │           32 │     0.39 │                │               │
│    .rtc_slow_reserved │           24 │     0.29 │                │               │
└───────────────────────┴──────────────┴──────────┴────────────────┴───────────────┘
Total image size: 173905 bytes (.bin may be padded larger)
