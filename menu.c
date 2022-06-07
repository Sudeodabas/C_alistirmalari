#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("********************");
	printf("\n");
	printf("**      MENU      **");
	printf("\n");
	printf("********************");
	printf("\n\n");
	printf("1.TOPLAMA ISLEMI\n");
	printf("2.CARPMA ISLEMI\n");
	printf("3.KARE ALMA\n");
	printf("4.KUP ALMA\n");
	printf("5.DENKLEM (5x^2+4x+3)");
    
	int s1,s2,secim,sonuc;
	printf("\n\n");
	printf("SECIMINIZ: ");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			printf("IKI SAYI GIRINIZ: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1+s2;
			printf("SONUC: %d",sonuc);
			break;
			
			case 2:
				printf("IKI SAYI GIRINIZ: ");
				scanf("%d%d",&s1,&s2);
				sonuc=s1*s2;
				printf("SONUC: %d",sonuc);
				break;
				
				case 3:
					printf("BIR SAYI GIRINIZ: ");
					scanf("%d",&s1);
					sonuc=s1*s1;
					printf("SONUC: %d",sonuc);
					break;
					
					case 4:
						printf("BIR SAYI GIRINIZ: ");
						scanf("%d",&s1);
						sonuc=s1*s1*s1;
						printf("SONUC: %d",sonuc);
						break;
						
						case 5:
							printf("BIR SAYI GIRINIZ: ");
							scanf("%d",&s1);
							sonuc=s1*s1*5+4*s1+3;
							printf("SONUC: %d",sonuc);
							break;
							
	}	
	printf("\n\n\n\n");
	printf("IYI GUNLER DILERIZ.");
	return 0;
}
