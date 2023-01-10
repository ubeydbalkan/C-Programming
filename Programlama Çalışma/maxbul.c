void max(int d[],int n){
	int i;
	int maksimum;
	maksimum=d[0];
	for(i=1;i<n;i++)
	{
		if (d[i]>maksimum)
		{
		    maksimum=d[i];
		}
			
	}
	printf("%d\n",maksimum);
}




int main(int argc, char *argv[]){
	int i;
	int n;
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	printf("dizi elemanlari\n ");
	for(i=0;i<n;i++)
	{
		dizi[i]=rand()%100;
		printf("%4d",dizi[i]);

	}
	printf("\n");
	max(dizi,n);
	
	
	return 0;
}
