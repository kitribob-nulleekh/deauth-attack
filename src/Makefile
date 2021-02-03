LDLIBS=-lpcap

all: deauth-attack

deauth-attack: mac.o
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
	rm *.o deauth-attack
