
//klavyeden alýnan kesirli sayýyý ust ve alt deðerine yuvarlama iþlemi
#include <stdio.h>
#include <stdlib.h>
int main() {
	float sayi;
	float ust,alt;
	printf("BIR SAYI GIRINIZ: ");
	scanf("%f",&sayi);
	ust=ceil(sayi);
	alt=floor(sayi);
	printf("UST DEGER: %f",ust);
	printf("\nALT DEGER: %f",alt);
	return 0;
}
