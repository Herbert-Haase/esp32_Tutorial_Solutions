# ESP32 Tutorial Solutions (ESP-IDF)

Solutions for the [SunFounder ESP32 Starter Kit Tutorial](https://docs.sunfounder.com/projects/esp32-starter-kit/en/latest/index.html) written in C using the [ESP-IDF](https://github.com/espressif/esp-idf) framework.

## Motivation

The original tutorial uses Arduino IDE, which produces pseudo-code-like syntax and results in a significant memory footprint. For example, a simple "blinking LED" example consumes:
- **268,611 bytes** of program storage space
- **20,792 bytes** of dynamic memory
- Uses busy-waiting instead of proper timing mechanisms

By using ESP-IDF instead, this repository demonstrates how to:
- Write proper C code with full hardware control
- Achieve significantly smaller memory footprint
- Utilize FreeRTOS features for efficient task scheduling
- Gain deeper understanding of ESP32 internals

> **Note:** This repository primarily serves as personal documentation and learning reference.

## Prerequisites

- ESP32 development board
- USB cable for flashing
- [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/linux-macos-setup.html) installed and configured

## Quick Start

### Installation

Follow the official ESP-IDF setup guide:
- [Linux/macOS Setup](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/linux-macos-setup.html)

### Creating a New Project

```bash
# Option 1: Create a new project from scratch
idf.py create-project <project_name>

# Option 2: Copy from an existing example
cp -r $IDF_PATH/examples/get-started/hello_world .
```

### Building and Flashing

```bash
# Set the target board
idf.py set-target esp32

# Build the project
idf.py build

# Flash and monitor output (adjust port as needed)
idf.py -p /dev/ttyUSB0 flash monitor
```

### Configuration

```bash
# Open the configuration menu
idf.py menuconfig
```

## Documentation & References

### ESP32 Technical Documentation
| Resource | Description |
|----------|-------------|
| [ESP32 Datasheet](https://documentation.espressif.com/esp32_datasheet_en.pdf) | Hardware specifications and pinout |
| [Technical Reference Manual](https://documentation.espressif.com/esp32_technical_reference_manual_en.pdf) | Detailed peripheral and register documentation |
| [All ESP32 Documents](https://www.espressif.com/en/support/documents/technical-documents?keys=&field_type_tid%5B%5D=492) | Complete document library |

### ESP-IDF Documentation
| Resource | Description |
|----------|-------------|
| [API Reference](https://docs.espressif.com/projects/esp-idf/en/v5.2.6/esp32/api-reference/index.html) | ESP-IDF API documentation |
| [Getting Started](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/index.html) | Setup and first steps |

### Tutorial
| Resource | Description |
|----------|-------------|
| [SunFounder ESP32 Starter Kit](https://docs.sunfounder.com/projects/esp32-starter-kit/en/latest/index.html) | Original tutorial being implemented |

## Project Structure

Each tutorial exercise is implemented as a separate ESP-IDF project. Projects follow the standard ESP-IDF structure:

```
project_name/
├── CMakeLists.txt
├── main/
│   ├── CMakeLists.txt
│   └── main.c
└── sdkconfig
```

## License

This project is licensed under the terms specified in the [LICENSE](LICENSE) file.
