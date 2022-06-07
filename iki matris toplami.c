//çok boyutlu sayý dizisi
//nxp eleman içeren 2matrisin elemanlarýný toplayan 
//3.bir matris yazýn
#include <stdio.h>
#include <stdlib.h>
int main() {
	int d1[3][4]={{1,2,5,7},{5,4,8,6},{7,1,6,5}};
	int d2[3][4]={{1,8,5,7},{1,2,4,6},{3,7,3,1}};
	int toplam[3][4];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			toplam[i][j]=d1[i][j]+d2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%4d",toplam[i][j]);
		}
		printf("\n");
	}
	return 0;
}
