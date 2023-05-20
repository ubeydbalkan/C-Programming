#include <stdio.h>
#include<stdlib.h>
int size;
void selectionsort(int[],int);
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
	selectionsort(dizi,size);
	for(i=0;i<size;i++){
		printf("%d",dizi[i]);
	}
	return 0;
}

void selectionsort(int dizi[],int size){
	int i,j,temp,min;
	for(i=0;i<size;i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(dizi[j]<dizi[min]){
				min=j;
			}
			temp=dizi[i];
			dizi[i]=dizi[min];
			dizi[min]=temp;
		}
	}}


