#include <stdio.h>
#include <stdlib.h>
int main() {
	char harf='a';
	char *h=&harf;
	
	printf("ADRES: %x\n",h);
	h++;
	printf("ADRES2: %x",h);
	
	return 0;
}
