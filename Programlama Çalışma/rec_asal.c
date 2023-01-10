
#include<stdio.h>
#include<stdlib.h>



int asal(int x,int i){ 
 if (x<2)
 return 0;
 if (i==1)
 return 1;
 if (x%i==0)
 return 0;
 return asal(x,i-1);
}

int main(){
	int a;
	a=asal(23,3);
	printf("%d",a);
	return 0;
}


