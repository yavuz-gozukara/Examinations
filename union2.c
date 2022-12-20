#include "stdio.h"
#include "stdlib.h"
#include "string.h"




int main()
{
    typedef union
    {
        char ch;
        int flag;
        float ondalik;
    } data;
    
    data veri;
    veri.ch = 'A';
    printf("ch = %c\n", veri.ch);
    veri.flag = 1;
    printf("flag = %d\n", veri.flag);
    veri.ondalik = 1.5;
    printf("f = %f\n", veri.ondalik);
    return 0;
}
  
