//yazdýðýmýz þeylerýn bellekteki karþýlýðý
#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi=47;
	int sayi2=85;
	double sayi3=25.55;
	char kelime='a';
	printf("%d\n",sayi);
	printf("%d\n",sayi2);
	printf("%f\n",sayi3);
	printf("%c",kelime);
	printf("\n\n");
	printf("BELLEKTEKI KARSILIKLARI");
	printf("\n\n");
	printf("%x\n",&sayi);
	printf("%x\n",&sayi2);
	printf("%x\n",&sayi3);
	printf("%x\n",&kelime);
	return 0;
}
