#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		
		for(j=1;j<=i;j++)
		{
			printf("%2d",j);
		}
		printf("\n");
		
	}
	return 0;
	
	
}
