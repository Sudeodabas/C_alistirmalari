//mutlak de�er bulmak
//mutlak de�er bulmak i�in fabs kullan�l�r!!!
#include <stdio.h>
int main() {
	double x,y;
	printf("MUTLAK DEGERI ALINACAK SAYI: ");
	scanf("%lf",&x);
	y=fabs(x);
	printf("SONUC: %f",y);
	return 0;
}
