#include <cstdio>
#include <pcap.h>
#include "packet.h"
#include "mac.h"


void Usage(char* arg) {
	printf("syntax: %s <interface> <ap mac> [<station mac>]\n", arg);
	printf("sample: %s mon0 00:11:22:33:44:55 66:77:88:99:AA:BB\n", arg);
}

int main(int argc, char** argv) {
	if (3 != argc && 4 != argc) {
		Usage(argv[0]);
		return -1;
	}

	char* dev = argv[1];
	char errBuf[PCAP_ERRBUF_SIZE];
	pcap_t* handle = pcap_open_live(dev, BUFSIZ, 1, 1000, errBuf);
	if (handle == nullptr) {
		printf("FATAL: Couldn't open device %s(%s)\n", dev, errBuf);
		return -1;
	}
}
