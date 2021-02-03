#include <cstdio>
#include <pcap.h>
#include "packet.h"
#include "mac.h"


void Usage(char* arg) {
	printf("syntax: %s <interface> <ap mac> [<station mac>]\n", arg);
	printf("sample: %s mon0 00:11:22:33:44:55 66:77:88:99:AA:BB\n", arg);
}

void SendBroadcastDeauth(pcap_t* handle, Mac apMac) {
	// make packet	
	while (true) {
		// send packet
	}
}

void SendUnicastDeauth(pcap_t* handle, Mac apMac, Mac stationMac) {
        // make packet
        while (true) {
                // send packet
        }
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


	if (3 == argc) {
		Mac arg2(argv[2]);
		SendBroadcastDeauth(handle, arg2);
	} else {
		Mac arg2(argv[2]), arg3(argv[3]);
		SendUnicastDeauth(handle, arg2, arg3);
	}

	pcap_close(handle);
}
