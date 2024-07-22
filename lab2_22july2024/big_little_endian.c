// wap to check if the storage of bits is big endian or little endian
// big endian stores MSB first
// little endian stores LSB first
#include<stdio.h>
int main()
{
    unsigned int val = 0x11223344;
    char* c = (char*) &(val);
    if(c[0]==0x11) printf("Big");
    else printf("Little");
    return 0;
}