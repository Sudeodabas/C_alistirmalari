//switch case yapýsý
#include <stdio.h>
#include <stdlib.h>
int main() {
	int day=6;
	switch(day){
		case 1:printf("PAZARTESI");
		break;
		case 2:printf("SALI");
		break;
		case 3:printf("CARSAMBA");
		break;
		case 4:printf("PERSEMBE");
		break;
		case 5:printf("CUMA");
		break;
		case 6:printf("CUMARTESI");
		break;
		case 7:printf("PAZAR");
		break;
		default:printf("GECERSIZ GUN");
		break;
	}
	return 0;
}
