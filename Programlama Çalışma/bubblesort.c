#include <stdio.h>
#include<stdlib.h>
int size;
void bubblesort(int[],int);
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
	bubblesort(dizi,size);
	for(i=0;i<size;i++){
		printf("%d",dizi[i]);
	}
	return 0;
}



void bubblesort(int dizi[],int size){
	int i,j,temp,sirali;
	for(i=0;i<size;i++){
		sirali=1;
		for(j=0;j<size-1;j++){
			if(dizi[j]>dizi[j+1]){
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
			}
		}
		
}


}
