//Enis UZAN 200201009
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
void  AracBilgiAl(char string[50][100],char string2[50][100],int tane)
{
    char *ptr;
    int i=0;
    int k=0;
    char *isim;
    char *yil;
    int yil2;
    char *yakit;
    double yakit2;


    for(i=0; i<tane;i++)
    {
        ptr=strtok(string[i]," ");
        isim=ptr;
        ptr=strtok(NULL," ");
        if(ptr[0]>=48&&ptr[0]<=57)
        {
            yil=ptr;
            yil2=atoi(yil);

            ptr=strtok(NULL," ");
             if(ptr[0]>=48&&ptr[0]<=57)
             {
                 yakit=ptr;
                 yakit2=atof(yakit);
                 printf("%20s %-10d %.1lf\n",isim,yil2,yakit2);


             }
        }


    }







}




int main()
{
   char string[50][100];
   char string2[50][100];
   int i = 0;
   while(1)
   {
       gets(string[i]);
       if(string[i][0]=='E')
        break;
       i++;
   }

   int adet=i;
   AracBilgiAl(string,string2,adet);






    return 0;
}
