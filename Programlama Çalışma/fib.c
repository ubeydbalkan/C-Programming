#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main(int argc, char *argv[]) {
	int a;
	a=fib(11);
	printf("%d",a);
	return 0;
}

int fib(int sayi){
	if(sayi==1 || sayi==0)
		return sayi;
	else
		return fib(sayi-1)+fib(sayi-2);
}
