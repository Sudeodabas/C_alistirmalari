#include <stdio.h>
#include <stdlib.h>
int fonk(int a,int b,int c,int x){
	int sonuc;
	sonuc=a*x*x+b*x+c;
	return sonuc;
}
int main() {
	int x,a,b,c;
	int fonks;
	printf("IKINCI DERECEDEN DENKLEMIN KATSAYILARINI GIRINIZ: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("X: ");
	scanf("%d",&x);
	fonks=fonk(a,b,c,x);
	printf("SONUC: %d",fonks);
	return 0;
}
