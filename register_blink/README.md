# Register Blink Project
This is a "Hello World" program for the ATmega328P microcontroller, utilizing avr-gcc to compile the code and avrdude to flash the microcontroller. The program toggles an LED on the board, at register (PB5) on and off every second.

## Project Overview
The Register Blink Project demonstrates basic LED control using direct register manipulation on the ATmega328P. It provides a foundation for understanding how to control hardware at a low level with C programming.

## Prerequisites
- avr-gcc (AVR C compiler)
- avr-libc (AVR C library)
- avrdude (AVR downloader/uploader)
- Uno R3 Controller board

### Build
Inside the terminal, within the project directory run:
```bash
make
```

### Install
Make sure the controller board is plugged in, then run: 
```bash
make install
```
