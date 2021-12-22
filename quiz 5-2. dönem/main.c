//Enis UZAN 200201009
#include <stdio.h>
#include <string.h>

void print_array(const char arr[5][100])
{
    for (int i = 0; i < 5; i++)
    {
        printf("'%s' uzunluk %d\n", arr[i], strlen(arr[i]));
    }
}

int main()
{
    char arr[5][100] =
    { "Bilgisayar Muhendisligi Bilgisayar Laboratuvari",
      "Birinci Sinif",
      "String cumlelerin uzunluk toplamini bulun.",
      "sureniz yetmis bes dakika",
      "soruyu dikkatli okuyun!"
    };

    printf("Ilk cumleler:\n");
    print_array(arr);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0, k = strlen(arr[i]) - 1; j < k; j++, k--)
        {
            char temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }

    printf("\nTers cumleler:\n");
    print_array(arr);

    return 0;
}
