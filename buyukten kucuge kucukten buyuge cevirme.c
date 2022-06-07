//buyugu kucuge kucugu buyuge
#include <stdio.h>
int main() {
	char x;
	printf("BUYUK VEYA KUCUK BIR HARF GIRINIZ: ");
	scanf("%c",&x);
	if(x>='A' && x<='Z'){
		printf("%c nin kucugu %c dir.",x,x+'a'-'A');
	}
	else if(x>='a' && x<='z'){
		printf("%c nin buyugu %c dir.",x,x+'A'-'a');
	}
	else{
		printf("GIRDIGINIZ KARAKTER HARF DEGILDIR.");
	}
	return 0;
}
