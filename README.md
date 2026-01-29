# BeyondCode_Otto_Library

## 📌 Overview 

This Arduino library was created to **simplify robot setup and reduce complexity during teaching** in BeyondCode Otto EP1 courses.

Instead of installing and managing multiple libraries separately, this repository **bundles all required components** (Otto core functions, sensors, and examples) into a single, ready-to-use library.  
This allows teachers and students to **focus on learning concepts**, not troubleshooting installation issues.

The library is designed for:
- Fast and reliable setup in classroom environments
- Step-by-step robotics education
- Clear mapping between hardware, code, and learning activities

---

## Installation (Arduino IDE)

### Recommended Method (ZIP Installation)

1. Download this repository as a ZIP file 
2. Open **Arduino IDE**
3. Go to: Sketch → Include Library → Add .ZIP Library…
4. Select the downloaded ZIP file
5. The library will be installed automatically

---

## How to Use

After installation:

1. Open **Arduino IDE**
2. Go to: File → Examples → BeyondCode_Otto_EP1
3. Select an example based on your learning session
4. Connect the robot hardware as instructed in the example
5. Upload the sketch to the board

---

## 📁 Library Structure

```text
BeyondCode_Otto_EP1/
├── src/                # Core library source files (.h, .cpp)
├── examples/           # Learning activities and teaching examples
├── library.properties  # Arduino library metadata for Manager integration
├── keywords.txt        # Syntax highlighting for Arduino IDE
├── README.md           # Library documentation (this file)
└── LICENSE             # License information
```

- **src/**  
  Contains the main library source code (`.h` / `.cpp`) used by all examples.

- **examples/**  
  Contains example sketches organized by learning sessions (SS7–SS10).  
  These examples appear directly in Arduino IDE under *File → Examples*.

- **library.properties**  
  Metadata file used by Arduino IDE to recognize this folder as a library.

- **keywords.txt**  
  Enables syntax highlighting for classes and functions in Arduino IDE.

---

## Credits

This library is packaged and structured for educational use by:

**Thamakorn Thongyod**  
Beyond Code Academy  
Course design, example implementation

Based on open-source projects:
- Otto DIY – Camilo Parra Palacio  
- UltrasonicSensor – Giuseppe Martini

---
