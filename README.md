# Learning ESP32 Development

This repository is dedicated to learning ESP32 development through the official ESP-IDF documentation and the book "Programming the ESP32 in C using the Espressif IDF."

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

### Memory size

```bash
idf.py size
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

### Specs

This is esp32 chip with 2 CPU core(s), WiFi/BTBLE, silicon revision v3.1, 2MB external flash
Minimum free heap size: 304988 bytes

