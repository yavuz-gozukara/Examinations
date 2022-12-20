// This is about a union

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

union bilgi{
    int yas;
    char isim[20];
    char soyisim[20];
};

int main(){
    union bilgi veri;
    veri.yas = 36;
    strcpy(veri.isim,"akif");
    strcpy(veri.soyisim,"cifci");  
    printf("%d",veri.yas);
    printf("%s",veri.isim);
    printf("%s",veri.soyisim);
    return 0;
}

