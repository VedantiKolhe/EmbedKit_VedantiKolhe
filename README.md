# EmbedKit_VedantiKolhe

## Embedded Ring Buffer Utility Library

This project is an Embedded C implementation of a Ring Buffer (Circular Buffer) for uint8_t data.  
It demonstrates FIFO (First-In-First-Out) data handling commonly used in UART communication and embedded firmware systems.

---

## Features

- Fixed-size circular buffer
- FIFO data management
- Buffer full and empty detection
- Safe read/write operations
- Wrap-around indexing
- Optimized embedded-style implementation
- GCC compatible with zero warnings/errors

---

## Technologies Used

- C Programming (C99)
- GCC Compiler
- Embedded Firmware Concepts

---

## Files Included

- `main.c` → Demonstration and testing
- `ringbuf.c` → Ring buffer implementation
- `ringbuf.h` → Header file and declarations

---

## Build Instructions

Compile using GCC:

```bash
gcc -Wall -std=c99 main.c ringbuf.c -o ringbuf
