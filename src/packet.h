#ifndef SRC_PACKET_H_
#define SRC_PACKET_H_

#include <unistd.h>
#include "mac.h"

#define DEAUTH_TYPE 0xc0

struct DeauthAttackPacket
{
    uint8_t  rtab[8];
    uint8_t  type;
    uint8_t  flag;
    uint16_t  dur;
    uint8_t  rcv[6];
    uint8_t  trs[6];
    uint8_t  bssid[6];
    uint16_t  seq;
    uint16_t  man;
};

#endif //SRC_PACKET_H
