# Makefile

CFLAGS=-Wall

OUTPUTS=uptime monotonic

.PHONY: clean

all: $(OUTPUTS)

uptime: uptime.c
	$(CC) -o $@ $<

monotonic: monotonic.c
	$(CC) -o $@ $<

clean:
	rm -rf $(OUTPUTS)
