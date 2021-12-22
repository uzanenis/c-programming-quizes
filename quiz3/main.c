//200201009 Enis UZAN
#include <stdio.h>
#include <stdlib.h>
int main (){
    float sayi = 0.0;
    float toplam;


    while ((int)sayi % 2 == 0){
        toplam +=sayi ;
        printf("Bir sayi girin: ");
        scanf("%f",&sayi);
        
        while (sayi -(int)sayi != 0.0){
            printf("Bir tam sayi girin: ");
            scanf("%f",&sayi);
        }
    }
    printf("Dongu sona erdi.");
    printf("Toplam = %.0f",toplam);


return 0;

}

