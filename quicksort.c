#include<stdio.h>
#include<stdlib.h>

void quicksort(int[],int,int);
int size;
int main(){
	int i;
	printf("dizinizin boyutu: ");
	scanf("%d",&size);
	int dizi[size];
	for(i=0;i<size;i++){
		scanf("%d",&dizi[i]);
	}
	printf("dizinin baslangic durumu:");
	for(i=0;i<size;i++){
		printf("%4d",dizi[i]);
	}
	printf("\n");
	quicksort(dizi,0,size-1);
	printf("dizinin son durumu:");
	for(i=0;i<size;i++){
		printf("%4d",dizi[i]);
	}
	
	return 0;
}
void quicksort(int array[],int first,int last){
	int i,j,pivot,temp;
	if(last>first){
		pivot=first; i=first; j=last;
		while(i<j){
			while(array[i]<=array[pivot] && i<last && i<j){  /*saðdan pivottan büyük bir eleman bulana kadar i yi arrtýran */
				i++;
			}
			while(array[j]>=array[pivot] && j>=first && j>=i){ /*sondan pivottan küçük bir eleman bulana kadar j yi azaltarak kontrol*/
				j--;
			}
			if(i<j){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
		temp=array[j];
		array[j]=array[pivot];
		array[pivot]=temp;
		
		quicksort(array,first,j-1);
		quicksort(array,j+1,last);
	}	
}
