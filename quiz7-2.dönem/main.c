//Enis UZAN 200201009
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DTarih {
    int gun,ay,yil;
};

struct sahis_bilgileri{
    char adSoyad[50];

    struct DTarih dogum_tarihi;
};

int kisisayisi = 0;

struct sahis_bilgileri Kisi[100];

int main()
{
    printf("Kisi sayisi giriniz: \n");
    scanf("%d", &kisisayisi);

    printf("Bilgileri giriniz: \n");

    for(int x = 0;x < kisisayisi;x++){
        printf("Adi: ");
        scanf("%s", &Kisi[x].adSoyad);

        printf("Dogdugu Gun: ");
        scanf("%d", &Kisi[x].dogum_tarihi.gun);

        printf("Dogdugu Ay: ");
        scanf("%d", &Kisi[x].dogum_tarihi.ay);

        printf("Dogdugu Yil: ");
        scanf("%d", &Kisi[x].dogum_tarihi.yil);
    }

    printf("\n\nKayitlar yazdiriliyor...\n\n");

    for(int x = 0;x < kisisayisi;x++){
        printf("Adi: %s\n", Kisi[x].adSoyad);
        printf("Dogum Tarihi: %d.%d.%d\n\n",Kisi[x].dogum_tarihi.gun,Kisi[x].dogum_tarihi.ay,Kisi[x].dogum_tarihi.yil);
    }

    int index;
    int yasSiralama[100];
    for(int x = 0;x < kisisayisi;x++){
        index = kisisayisi - 1;
        for(int y = 0;y < kisisayisi;y++){
            if(Kisi[x].dogum_tarihi.yil < Kisi[y].dogum_tarihi.yil){
                index--;
            }else if(Kisi[x].dogum_tarihi.yil == Kisi[y].dogum_tarihi.yil){
                if(Kisi[x].dogum_tarihi.ay < Kisi[y].dogum_tarihi.ay){
                    index--;
                }else if(Kisi[x].dogum_tarihi.ay == Kisi[y].dogum_tarihi.ay){
                    if(Kisi[x].dogum_tarihi.gun < Kisi[y].dogum_tarihi.gun){
                        index--;
                    }
                }
            }
        }
        for(int y = 0;y < x;y++){
            if(yasSiralama[y] == index){
                index++;
            }
        }
        yasSiralama[index] = x;
    }

    printf("Yasi en buyuk olan kisi: %s %d.%d.%d\n", Kisi[yasSiralama[0]].adSoyad,Kisi[yasSiralama[0]].dogum_tarihi.gun,Kisi[yasSiralama[0]].dogum_tarihi.ay,Kisi[yasSiralama[0]].dogum_tarihi.yil);

    return 0;
}
