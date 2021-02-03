LDLIBS=-lpcap

all: deauth-attack

deauth-attack:
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
	rm *.o deauth-attack
