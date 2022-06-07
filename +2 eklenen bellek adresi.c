#include <stdio.h>
#include <stdlib.h>
int main() {
	int *ad1,*ad2,*ad;
	int n,p;
	n=10;
	p=20;
	ad1=&n;
	ad2=&p;
	
	printf("ATAMADAN ONCE AD1 DEGERI: %d\n",*ad1);
	printf("%x\n",ad1);
	*ad1=*ad2+2;
	printf("ATAMAYI YAPTIKTAN SONRA AD1 DEGERI: %d\n",*ad1);
	printf("%x\n",ad1);
	
	return 0;
	
}
