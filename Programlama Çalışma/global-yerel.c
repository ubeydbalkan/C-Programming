#include<stdio.h>
#include<stdlib.h>

a=3;
int main(){
	printf("%d\n",a);
	a=33;
	printf("%d\n",a);
	a=5;
	printf("%d\n",a);
	fonk();
	printf("%d\n",a);
	return 0;
}
void fonk(){
	printf("%d\n",a);
	a=45;
}
