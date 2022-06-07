#include <stdio.h>
int main() {
	int not;
	printf("NOT: ");
	scanf("%d",&not);
	if(not>100 || not<0){
		printf("GECERSIZ NOT!");
		
	}
	else if(not>=90){
		printf("AA");
	}
	else if(not>=80){
		printf("BB");
	}
	else if(not>=70){
		printf("CC");
	}
	else if(not>=60){
		printf("DD");
	}
	else {
		printf("FF");
	}
	return 0;
}
