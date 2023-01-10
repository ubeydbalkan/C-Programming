#include<stdio.h>
#include<stdlib.h>
void topla(int d[],int size){
	
	int toplam=0,i;
	for(i=0;i<size;i++){
		toplam=toplam+d[i];
	}
	printf("%d",toplam);
}






int main(){
	int i,boyut;
	scanf("%d",&boyut);
	int dizi[boyut];
	for(i=0;i<boyut;i++){
		dizi[i]=rand()%10;
	}
	for(i=0;i<boyut;i++){
		printf("%4d",dizi[i]);
	}
	printf("\n");
	topla(dizi,boyut);
	return 0;
}
