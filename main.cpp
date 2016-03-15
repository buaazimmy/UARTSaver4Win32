#include <stdio.h>
#include "rs232.h"
using namespace std;
unsigned char str;
#define portnum 2
void printf_binary(unsigned int n)
{
    int i;
    for(i = 7; i >= 0; i--)
    {
        printf("%d", ((n & ((1<<(i+1))-1)) >> i) ? 1:0);
        if(i%8 == 0)
            printf(" ");
    }
}

int main()
{
    RS232_OpenComport(portnum,115200);
    printf("send start!");
    
    for(int i=0;i<100;i++)
        RS232_SendByte(portnum,1);
        
    RS232_CloseComport(portnum);
       printf("send over");
    return 0;
}
