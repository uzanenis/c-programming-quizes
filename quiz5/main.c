//Enis UZAN 200201009
#include <stdio.h>
#include <stdlib.h>

void xParseSeconds (int seconds){
    int d,h,m,s;

    d = (seconds/86400);
    h = (seconds - (86400*d))/3600;
    m = (seconds - (86400*d)-(3600*h))/60;
    s = (seconds - (86400*d)-(3600*h)- (60*m))/60;
    printf("%d gun %d saat %d dakika %d saniye",d,h,m,s);


}


int main()
{
    int saniye;
    printf("Saniye bilgisi giriniz: ");
    scanf("%d",&saniye);
    xParseSeconds(saniye);


}
