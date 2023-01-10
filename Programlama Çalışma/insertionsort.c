#include <stdio.h>
#include<stdlib.h>
int size;
void insertionsort(int[],int);
int main(){
	scanf("%d",&size);
	int dizi[size];
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<size;i++){
		printf("%d",dizi[i]);
	}printf("\n");
	insertionsort(dizi,size);
	for(i=0;i<size;i++){
		printf("%d",dizi[i]);
	}
	return 0;
}
void insertionsort(int dizi[],int size){
	int i,j,eleman;
	for(i=1;i<4;i++){
		eleman=dizi[i];
		j=i-1;
		while(j>=0 && dizi[j]>eleman){
			dizi[j+1]=dizi[j];
			j--;
		}
		dizi[j+1]=eleman;
	}
}
