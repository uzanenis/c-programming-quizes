//Enis UZAN 200201009
#include <stdio.h>
#include <stdlib.h>

int harfSayma(char *s){
     char sesliharf[]="aeiouAEIOU";
     int i=0,a,karaktersayac=0;

       while(s[i] != '\0'){
           for(a=0 ; a<10; a++)
               if(s[i] == sesliharf[a]){
                   karaktersayac++;
                   break;
               }
          i++;
       }
       return karaktersayac;

}

int karakterSayisi(const char *s) {
    int i,j=0;
    for(i=0;s[i]!= '\0';i++)
    {
        if(s[i]!=' ')
            j++;
    }

    return j-1;
}



int main()
{
    char str[100];
    printf("String giriniz:");
    fgets(str,100,stdin);
    char *pnt;
    pnt=str;
    int kSayisi=karakterSayisi(pnt);
    int sesli=harfSayma(pnt);
    int sessiz=kSayisi-sesli;
    printf("Uzunlugu= %d\n",kSayisi);
    printf("Sesli Harf Sayisi= %d\n",sesli);
    printf("Sessiz Harf Sayisi= %d\n",sessiz);



    return 0;
}
