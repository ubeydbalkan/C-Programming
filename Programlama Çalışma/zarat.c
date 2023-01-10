#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int zarat(){
	srand(time(NULL));
	return rand()%6+1;
}
int main(){
	int a;
	a=zarat();
	printf("%d",a);
	return 0;
}
