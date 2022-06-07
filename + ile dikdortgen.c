//dörtgen void ile
#include <stdio.h>
#include <stdlib.h>
    void dortgen(int uzun,int kisa){
    	int i,j;
    	for(i=0;i<uzun;i++){
    		for(j=0;j<kisa;j++){
    			printf("+");
			}
			printf("\n");
		}
	}
	int main(){
		dortgen(4,5);
		return 0;
	}
