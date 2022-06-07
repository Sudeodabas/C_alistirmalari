//ikinci dereceden denklemin koklerýný bulmak 
#include <stdio.h>
int main() {
	int a,b,c;
	int k1,k2;
	int delta;
	printf("KATSAYILARI GIRINIZ: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
		printf("IKINCI DERECEDEN BIR DENKLEM DEGILDIR.");
	}
	else{
	
	delta=b*b-4*a*c;
	if(delta<0){
		printf("REEL KOK YOKTUR.");
	}
	else if(delta==0){
		printf("CAKISIK KOK VARDIR.\n");
		k1=(-b+sqrt(delta))/2*a;
		printf("KOK: %d ",k1);
	}
	else if(delta>0){
		printf("IKI FARKLI REEL KOK VARDIR.\n");
		k1=(-b+sqrt(delta))/2*a;
		k2=(-b-sqrt(delta))/2*a;
		printf("KOKLER: %d ve %d",k1,k2);
	}
}
	return 0;
}
