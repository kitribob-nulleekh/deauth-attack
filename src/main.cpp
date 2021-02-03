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
}
