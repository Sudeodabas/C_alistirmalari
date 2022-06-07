//bellek adresleri
#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi=10;
	int sayi2=20;
	double sayi3=10.25;
	char kelime='a';
	
	printf("%d",sayi);
	printf("%d",sayi2);
	printf("%d",sayi3);
	printf("%d",kelime);
	
	printf("\n\n BELLEK ADRESLERÝ \n\n");
    
	printf("%x\n",&sayi);
	printf("%x\n",&sayi2);	
	printf("%x\n",&sayi3);
	printf("%x\n",&kelime);
	
	return 0;
}
