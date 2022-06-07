//kare dikdörtgen cember alan
#include <stdio.h>
int main() {
	char sec;
	float a,b,alan;
	float pi=3.14;
	printf("SECIM: ");
	scanf("%f",sec);
	switch(sec){
		case 'kare':
			printf("KENAR UZUNLUGU: ");
			scanf("%f",&a);
			alan=a*a;
			printf("KARENIN ALANI: %f",alan);
			break;
	    case 'dikdortgen':
	    	printf("KENAR UZUNLUKLARI: ");
	    	scanf("f%f",&a,&b);
	    	alan=a*b;
	    	printf("DIKDORTGENIN ALANI: %f",alan);
	    case 'cember':
		    printf("YARICAP: ");
			scanf("%f",&a);
			alan=pi*a*a;
			printf("CEMBERIN ALANI: %f",alan);	
	}
	return 0;
	
	
}
