#include <stdio.h>
#include <stdlib.h>
void degistir(int *a,int *b){
int gecici;

gecici=*a;
*a=*b;
*b=gecici;
return 0;
}
int main() {
	//fonksiyonlarla adres deðiþtirmek
	int a=1,b=2;
	printf("ADRES DEGISTIRMEDEN ONCEKI DEGER: %d %d\n",a,b);
	degistir(&a,&b);
	printf("%d %d",a,b);
return 0;
}
