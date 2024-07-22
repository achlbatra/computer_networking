// wap to extract each byte of a 4-byte hexadecimal number
#include<stdio.h>
typedef unsigned char BYTE;
int main()
{
    unsigned int value = 0x11223344;
    BYTE a, b, c, d;
    a = value & (0xFF);
    b = (value>>8) & (0xFF);
    c = (value>>16) & (0xFF);
    d = (value>>24) & (0xFF);
    printf(" a = 0x%x\n b = 0x%x\n c = 0x%x\n d = 0x%x", a,b,c,d);
    return 0;
}