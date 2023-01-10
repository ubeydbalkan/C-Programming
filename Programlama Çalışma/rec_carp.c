#include<stdio.h>
#include<stdlib.h>


int carp(int x,int y){
 if (y==0)
 return 0;
 if (y==1)
 return x;
 return x+carp(x,y-1);
}

int main(){
	int a;
	a=carp(6,7);
	printf("%d",a);
	return 0;
}


