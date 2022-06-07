//deðer 1 i typedef ile int türünden tanýmladýktan sonra int main altýna deðer 2 ve deðer 3 ü atýyorum daha sonra deðer 2 ve 3 ü klavyeden istiyorum aldýðým deðerin toplamýný deðer 1e eþitliyorum sonra yazdýrýyorum 
#include <stdio.h>
#include <stdlib.h>
    typedef int d1;
    int main() {
    	int toplam;
    	d1 d2;
    	d1 d3;
    	
    	printf("BIRINCI DEGERI YAZINIZ: ");
    	scanf("%d",&d2);
    	printf("IKINCI DEGERI GIRINIZ: ");
    	scanf("%d",&d3);
    	toplam=d2+d3;
    	printf("DEGERLER VE DEGERLERIN TOPLAMI: %d + %d : %d",d2,d3,toplam);
    	return 0;
	}
