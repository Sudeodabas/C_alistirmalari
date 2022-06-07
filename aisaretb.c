//a+b gibi islemler 
#include <stdio.h>
int main() {
	int s1,s2;
	char isaret;
	float sonuc;
	printf("ISLEM: ");
	scanf("%d%c%d",&s1,&isaret,&s2);
	if(isaret=='+'){
		sonuc=s1+s2;
	} 
	else if(isaret=='*'){
		sonuc=s1*s2;
	}
	else if(isaret=='/'){
		sonuc=s1/s2;
	}
	else{
		sonuc=s1-s2;
	}
	printf("SONUC: %f dir.",sonuc);
	return 0;
}
