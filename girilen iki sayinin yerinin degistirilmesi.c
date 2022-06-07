#include <stdio.h>
int main() {
	float s1,s2;
	float gecici;
	printf("1. SAYI: \n");
	scanf("%f",&s1);
	printf("2. SAYI: \n");
	scanf("%f",&s2);
	gecici=s1;
	s1=s2;
	s2=gecici;
	printf("1. SAYI: %f\n",s1);
	printf("2. SAYI: %f\n",s2);
	return 0;
}
