#include <stdio.h>
int main() {
	double derece,sins,coss;
	printf("DERECE: ");
	scanf("%lf",&derece);
	sins=sin(derece);
	printf("SINUS: %lf ",sins);
	coss=cos(derece);
	printf("COSINUS: %lf",coss);
	return 0;
}
