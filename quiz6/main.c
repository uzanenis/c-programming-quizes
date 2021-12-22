//Enis UZAN 200201009
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){

    int i,gecici,tut;
    int rastgele[10];
    srand(time(NULL));

    printf("Rastgele sayilar: \n");
    for (i = 0; i < 10; i++){
        rastgele[i]= rand() %101;
        printf("%d ",rastgele[i]);
    }
    printf("\n");

    for ( gecici = 0 ; gecici < 10 ; gecici++){
        for ( i = 0 ; i <10-1; i++)
            if (rastgele[i]>rastgele[i+1]){
                tut = rastgele[i];
                rastgele[i] = rastgele[i+1];
                rastgele[i+1] = tut;
            }
    }
    printf("Sirali dizi:\n");
    for(i = 0;i < 10; i++){
        printf("%d ",rastgele[i]);
    }
    printf("\n");

    printf("Once tek sayilar sonra cift sayilar: \n");
    for (i = 0; i < 10 ; i++){
        if (rastgele[i] % 2 != 0)
            printf("%d ",rastgele[i]);
    }

    for (i = 0; i < 10 ; i++){
        if (rastgele[i] % 2 == 0)
            printf("%d ",rastgele[i]);
    }




    return 0;
}
