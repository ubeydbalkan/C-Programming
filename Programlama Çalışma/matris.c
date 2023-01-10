#include<stdio.h>
#include<stdlib.h>
int boyut1,boyut2;
int main(){
	scanf("%d%d",&boyut1,&boyut2);
	int matris[boyut1][boyut2];
	int i,j;
	for(i=0;i<boyut1;i++){
		for(j=0;j<boyut2;j++){
			matris[i][j]=rand()%10;
		}
	}
	for(i=0;i<boyut1;i++){
		for(j=0;j<boyut2;j++){
			printf("%4d",matris[i][j]);
	}printf("\n");
		}
	
	
	
	
	
	
	return 0;
}
