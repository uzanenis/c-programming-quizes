//Enis UZAN 200201009
#include <stdio.h>
#include <stdlib.h>

int pw(int sayi,int us){
    int s = 0;
    double r;

    if (us < 1){
        s = 1;
        us *= -1;
    }

    for (r = 1; us > 0; us--){
        r *= sayi;
    }

    if (s){
        r = 1/r;
    }
    return r;
}

void armstrong (int* ptr){
    int sayi = *ptr,originalSayi,kalan, n = 0;
    float sonuc = 0.0;



    originalSayi = sayi;

    for (originalSayi = sayi; originalSayi != 0 ; ++n){
        originalSayi /= 10;
    }

    for (originalSayi = sayi; originalSayi != 0 ; originalSayi /= 10){
        kalan = originalSayi % 10;

        sonuc += pw(kalan,n);
    }



    if((int)sonuc == sayi){
        printf("%d bir Armstrong sayisi",sayi);

    }
    else
        printf("%d bir Armstrong sayisi degil",sayi);

    return 0;

}



int main()
{
    int sayi;
    int *sayiptr;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    sayiptr = &sayi;

    armstrong(sayiptr);

    return 0;
}
