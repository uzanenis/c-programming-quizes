//Enis UZAN 200201009
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i,j,satir,gecici,rastgele;

    printf("Kare matris boyutunu giriniz: ");
    scanf("%d",&satir);

    srand(time(NULL));
    int matris[satir][satir];

    printf("Rastgele atanan matris: \n");

    for(i = 0;i < satir; i++){
        for(j = 0; j< satir ; j++){

            matris[i][j]= rand()%10;
        }

    }


   for(i = 0;i < satir; i++){
        for(j = 0; j< satir ; j++){
            printf("%d ",matris[i][j]);
        }
        printf("\n");
   }
   for(i = 0; i < satir ; i++){

           gecici = matris[i][i];
           matris[i][i] = matris[i][satir - 1 - i];
           matris[i][satir - 1 - i] = gecici;

       }
       printf("\n");

    printf("Guncel matris(kosegenler degisti): \n");
    for(int i=0; i<satir; i++){
        for(int j=0; j<satir; j++){
            printf("%d ",matris[i][j]);
        }
        printf("\n");
      }


    return 0;
}
