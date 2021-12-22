// Enis UZAN 200201009
#include <stdio.h>
#include <stdlib.h>

int main(){
	int ilk,son,bolen,i,kontrol;

	printf("Ilk deger: ");
	scanf("%d",&ilk);
	printf("Son deger: ");
	scanf("%d",&son);

	printf("Asal sayilar %d ile %d arasindaki: \n",ilk,son);

	for ( i = ilk; i <= son; i++){
		if (i == 2)
		printf("2, ");
		for (bolen = 2; bolen < i; bolen++){
			if (i % bolen == 0) {
				kontrol = 0;
				break;
			}
			else kontrol = 1;
		}
		if (kontrol == 1) printf("%d, ",i);
	}
return 0;
}
