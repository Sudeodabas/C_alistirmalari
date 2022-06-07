//kullanýcýdan aldýðý tam sayý kenar uzunluklarý ve yükseklik
//bilgisini kullanarak bir dikdörtgen prizmasýnýn sýrasýyla taban alaný
//yanal alanlarýnýn toplamý toplam alanýný ve hacmini ekrana bastýran 
#include <stdio.h>
#include <stdlib.h>
int tabanalan(int a,int b){
	int sonuc;
	sonuc=a*b;
	return sonuc;
}
int yanalalan(int a,int b,int h){
	int sonuc2;
	sonuc2=(2*a+2*b)*h;
	return sonuc2;
}
int toplamalan(int fonk,int fonk2){
	int sonuc3;
	sonuc3=fonk2+2*fonk;
	return sonuc3;
}
int hacim(int fonk,int h){
	int sonuc4;
	sonuc4=fonk*h;
	return sonuc4;
}
int main() {
	int a,b,h;
	int fonk;
	int fonk2;
	int fonk3;
	int fonk4;

	printf("DIKDORTGENLER PRIZMASININ KENAR UZUNLUKLARINI GIRINIZ: ");
	scanf("%d%d",&a,&b);
	printf("DIKDORTGENLER PRIZMASININ YUKSEKLIGINI GIRINIZ: ");
	scanf("%d",&h);
    
	fonk=tabanalan(a,b);
	fonk2=yanalalan(a,b,h);
	fonk3=toplamalan(fonk,fonk2);
	fonk4=hacim(fonk,h);
	
	printf("TABAN ALAN: %d\n",fonk);
	printf("YANAL ALAN: %d\n",fonk2);
	printf("TOPLAM ALAN: %d\n",fonk3);
	printf("HACIM: %d\n",fonk4);
	return 0;	
}
