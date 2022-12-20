// This is about a union
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

union bilgi{
    int cikistarihi;
    char filmismi[30];
    char senaristismi[20];
};

int main(void){
    union bilgi veri;
    printf("cikis tarihi:\n");
    veri.cikistarihi = 2022;
     printf("cikistarihi ismi:\n");
    strcpy(veri.filmismi,"avatar");
    printf("senarist ismi:\n");
    strcpy(veri.senaristismi,"james");  
   
    printf("%d",veri.cikistarihi);
    printf("%s",veri.filmismi);
    printf("%s",veri.senaristismi);
  
    
    return 0;
}
