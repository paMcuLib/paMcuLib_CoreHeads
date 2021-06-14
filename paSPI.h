#ifndef __PASPI_H__
#define __PASPI_H__
#include "paBase/_ForCore.h"

class paSPI
{
private:
    /* data */
public:
    // void write();
    paErr init(char spiId);
    paErr Atransmit(char spiId, unsigned char *data, unsigned int len);

    // void receive();
};

extern paSPI _G_paSPI;
#endif // __PASPI_H__