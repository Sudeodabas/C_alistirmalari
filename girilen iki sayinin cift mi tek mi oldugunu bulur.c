#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b;
	printf("IKI SAYI GIRINIZ: ");
	scanf("%d %d",&a,&b);
	
	if(a%2==0){
		if(b%2==0){
			printf("sayilarin ikiside cifttir.");
		}
		else{
			printf("1. sayi cift 2.sayi tektir.");
		}
	}
	else{
		if(b%2==0){
			printf("1. sayi tek 2. sayi cift");
		}
		else{
			printf("ikiside tektir.");
		}
	}
	return 0;
}
