//de�er 1 i typedef ile int t�r�nden tan�mlad�ktan sonra int main alt�na de�er 2 ve de�er 3 � at�yorum daha sonra de�er 2 ve 3 � klavyeden istiyorum ald���m de�erin toplam�n� de�er 1e e�itliyorum sonra yazd�r�yorum 
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
