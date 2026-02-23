exercise: https://docs.sunfounder.com/projects/esp32-starter-kit/en/latest/arduino/basic_projects/ar_blinking_led.html

```bash
idf.py size
```

                             Memory Type Usage Summary                              
┏━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━┓
┃ Memory Type/Section   ┃ Used [bytes] ┃ Used [%] ┃ Remain [bytes] ┃ Total [bytes] ┃
┡━━━━━━━━━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━╇━━━━━━━━━━╇━━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━━┩
│ Flash Code            │        70626 │          │                │               │
│    .text              │        70626 │          │                │               │
│ IRAM                  │        54931 │    41.91 │          76141 │        131072 │
│    .text              │        53903 │    41.12 │                │               │
│    .vectors           │         1028 │     0.78 │                │               │
│ Flash Data            │        40280 │          │                │               │
│    .rodata            │        40024 │          │                │               │
│    .appdesc           │          256 │          │                │               │
│ DRAM                  │        12652 │      7.0 │         168084 │        180736 │
│    .data              │        10356 │     5.73 │                │               │
│    .bss               │         2296 │     1.27 │                │               │
│ RTC SLOW              │           56 │     0.68 │           8136 │          8192 │
│    .force_slow        │           32 │     0.39 │                │               │
│    .rtc_slow_reserved │           24 │     0.29 │                │               │
└───────────────────────┴──────────────┴──────────┴────────────────┴───────────────┘
Total image size: 176225 bytes (.bin may be padded larger)


