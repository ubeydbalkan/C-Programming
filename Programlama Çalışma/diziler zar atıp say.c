#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int zarat(){
	return rand()%6+1;
}

void fonk(int d[]){
	int i;
	for(i=0;i<6;i++){
		switch(zarat()){
			case 1: d[0]++;break;
			case 2: d[1]++;break;
			case 3: d[2]++;break;
			case 4: d[3]++;break;
			case 5: d[4]++;break;
			case 6: d[5]++;break;
		}
	}
	
	for(i=0;i<6;i++){
		
		printf("\n %d sayisindan %d adet gelmistir",i+1,d[i]);
	}
}

int main(){
	srand(time(NULL));
	int frekans[6]={0};
	fonk(frekans);
	return 0;
}



