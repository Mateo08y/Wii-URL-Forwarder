TARGET = boot
BUILD = build
SOURCES = .
INCLUDES = .

CFLAGS = -O2 -Wall
LDFLAGS = -lm

include $(DEVKITPPC)/wii_rules
