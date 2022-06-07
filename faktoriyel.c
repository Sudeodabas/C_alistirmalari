#include <stdio.h>
int main() {
	int i,f;
	f=1;
	printf("FAKTORIYELI ALINACAK SAYI: ");
	scanf("%d",&i);
	while(i>=1){
		f=f*i;  
		i--;
		  
	}
	printf("SONUC: %d",f);
	return 0;
}
