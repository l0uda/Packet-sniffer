CFLAGS = -g

all: sslsniff clean

sslsniff: src/sslsniff.o src/argumentParse.o src/sniffer.o src/pcapanal.o
	gcc $(CFLAGS) -o $@ $^ -lpcap -lm

clean:
	rm -f src/*.o
