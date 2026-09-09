CFLAGS = -g

all: sslsniff clean

sslsniff: sslsniff.o argumentParse.o sniffer.o pcapanal.o
	gcc $(CFLAGS) -o $@ $^ -lpcap -lm

clean:
	rm -f *.o
