//Enis UZAN 200201009
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_DERS 3
int ders_id[MAX_DERS] = {123, 456, 789};
const char *ders_isimleri[MAX_DERS] = {"Matematik", "Fizik", "Kimya"};

struct ogrenci {
    int ogrenci_id;
    int vize_notlari[MAX_DERS];
    int final_notlari[MAX_DERS];
};

#define MAX_OGRENCI 100
struct ogrenci ogrenciler[MAX_OGRENCI];


void random_not(struct ogrenci *ogrenci) {
    unsigned i;
    for(i = 0; i < MAX_DERS; i++) {
        ogrenci->vize_notlari[i] = rand() % 101;
        ogrenci->final_notlari[i] = rand() % 101;
    }
}

void a_ortalama(struct ogrenci *ogrenci, unsigned int ogrenci_i) {
    unsigned i;
    double vize_ortalamasi = 0;
    double final_ortalamasi = 0;
    for(i = 0; i < MAX_DERS; i++) {
        vize_ortalamasi += ogrenci->vize_notlari[i];
        final_ortalamasi += ogrenci->final_notlari[i];
    }
    vize_ortalamasi /= MAX_DERS;
    final_ortalamasi /= MAX_DERS;

    printf("* %u. ogrenci *\n", ogrenci_i);
    for(i = 0; i < MAX_DERS; i++) {
        printf("%s ders id: %d - vize notu: %d - final notu: %d\n",
        ders_isimleri[i], ders_id[i], ogrenci->vize_notlari[i], ogrenci->final_notlari[i]);
    }

    printf("vize ortalamasi = %.2f\n", vize_ortalamasi);
    printf("final ortalamasi = %.2f\n", final_ortalamasi);

}


int main(int argc, char *argv[]) {

    srand(time(NULL));

    unsigned n;
    puts("Ogrenci sayisini giriniz:");
    scanf("%u", &n);
    if(n > MAX_OGRENCI) return 1;

    for(unsigned i = 0; i < n; i++) {
        random_not(&ogrenciler[i]);
        a_ortalama(&ogrenciler[i], i);
    }

    return 0;
}
