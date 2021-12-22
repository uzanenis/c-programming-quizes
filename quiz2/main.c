// Enis UZAN 200201009
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;
    float disk;

    printf("ax^2 + bx +c = 0 seklinde verilmis olan 2. dereceden denklem icin a, b ve c degerlerini giriniz!\n");
    printf("\na degerini giriniz: ");
    scanf("%d",&a);
    printf("\nb degerini giriniz: ");
    scanf("%d",&b);
    printf("\nc degerini giriniz: ");
    scanf("%d",&c);

    disk = (b*b)-4*a*c;
    printf("%.2f\n",disk);

    if (disk > 0){
        printf("\nDenklemin iki farkli reel koku vardir!\n");
    }
    else if (disk == 0){
        printf("\nDenklemin bir tane reel koku vardir!\n");
    }
    else {
        printf("\nDenklemin reel koku bulunmamaktadir!\n");
    }






return 0;
}
