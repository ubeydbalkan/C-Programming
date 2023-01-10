#include<stdio.h>
#include<stdlib.h>



int main(){
	int i,j,boyut;
	scanf("%d",&boyut);
	int matris[boyut][boyut];
	int temp[boyut][boyut];
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			matris[i][j]=rand()%10;
	}
	}
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			printf("%4d",matris[i][j]);
		}printf("\n");
	}
	
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			temp[i][j]=matris[j][i];
}}
	
	int toplam=0;
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			toplam=toplam+matris[i][j];
	}
	printf("%d. satir toplamlari: %d\n",i+1,toplam);
	toplam=0;
}	
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			toplam=toplam+temp[i][j];
	}
	printf("%d. sutun toplamlari: %d\n",i+1,toplam);
	toplam=0;
}	
	
	return 0;
}
