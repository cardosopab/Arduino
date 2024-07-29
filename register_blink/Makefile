# Compiler options 
CC=avr-gcc
CFLAGS=-Os -DF_CPU=16000000UL -mmcu=atmega328p

# USB port for the Arduino
USBPORT=/dev/ttyACM0

# Compiling
all: blink.hex

%.out: %.c
	$(CC) $(CFLAGS) $< -o $@

%.hex: %.out
	avr-objcopy -O ihex -R .eeprom $< $@

# Upload to board
install: blink.hex
	avrdude -F -V -c arduino -p ATMEGA328P -P $(USBPORT) -b 115200 -U flash:w:$<

clean:
	rm -f *.hex *.out

