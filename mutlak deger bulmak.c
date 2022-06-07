//mutlak deðer bulmak
//mutlak deðer bulmak için fabs kullanýlýr!!!
#include <stdio.h>
int main() {
	double x,y;
	printf("MUTLAK DEGERI ALINACAK SAYI: ");
	scanf("%lf",&x);
	y=fabs(x);
	printf("SONUC: %f",y);
	return 0;
}
