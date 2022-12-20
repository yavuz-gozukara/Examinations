#include "stdio.h"
#include "stdlib.h"
#include "string.h"




int main()
{
    typedef union
    {
        char name[20];
        int flag;
        float ondalik;
    } data;

    data veri;
    strcpy(veri.name,"akif");
    veri.flag = 1;
    veri.ondalik = 1.5;
    printf("%s",veri.name);
    printf("%d",veri.flag);
    printf("%f",veri.ondalik);
    return 0;
}
