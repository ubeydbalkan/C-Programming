#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int fak=1,sayi;
	printf("faktoriyeli bulunacak sayi:");
	scanf("%d",&sayi);
	while(sayi>1){
		fak=fak*sayi;
		sayi--;
	}
	printf("%d",fak);
	return 0;
}
