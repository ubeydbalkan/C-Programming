#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int top(int x,int y){
 if(y==0)
 	return x;
 
 	return top(x,y-1)+1;
}

int main(){
	int a;
	a=top(6,7);
	printf("%d",a);
	return 0;
}



