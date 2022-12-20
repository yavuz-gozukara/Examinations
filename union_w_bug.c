#include "stdio.h"
#include "stdlib.h"
#include "string.h"
typedef union
    {
        char name[10];
        int flag;
        float ondalik;
    } data;
int main()
{
    
    
    data veri;
    
    strcpy(veri.name, "Akif");
    printf("Name = %s\n", veri.name);
    veri.flag = 1;
    printf("flag = %d\n", veri.flag);
    veri.ondalik = 1.5;
    printf("f = %f\n", veri.ondalik);
    return 0;
}
