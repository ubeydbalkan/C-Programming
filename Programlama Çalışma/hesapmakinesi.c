#include <stdio.h>
#include <stdlib.h>
int asal(int ,int );
int carp(int,int);
int kuvvet(int,int);
int top(int,int);
int menu();
int main(int argc, char** argv) {
 menu();
 return (EXIT_SUCCESS);
}
int menu(){
 int x;
 do{
 printf("Asal sayý bulma islemi icin 1 i tuslayiniz\n");
 printf("Çarpma islemi icin 2 yi tuslayiniz\n");
 printf("Kuvvet alma islemi icin 3 u tuslayiniz\n");
 printf("Toplama islemi icin 4 u tuslayiniz\n");
 printf("cikis icin -1 i tusalyiniz\n");
 printf("Hangi iþlemi yapmak istediniz:\t");
 scanf("%d",&x);
 if(x==-1) 
 break;
 switch(x){
 case(1):{
 int a;
 int s;
 printf("Asalligi kontrol edilecek sayiyi giriniz\n");
 scanf("%d",&a);
 s=asal(a,a/2);
 if (s==1)
 printf("%d asal sayi\n,",a);
 else 
 printf("%d asal sayi degildir\n",a);
 break; 
 }
 case(2):{
 int s1,s2,carpim;
 s1=1+rand()%20;
 printf("1.sayi=%d\n",s1);
 s2=2+rand()%98;
 printf("2.sayi=%d\n",s2);
 carpim=carp(s1,s2);
 printf("Sayilarin carpimi= %d\n",carpim);
 break;
 }
 case(3):{
 int t,u,s;
 printf("Taban degerini giriniz\n");
 scanf("%d",&t);
 printf("Ust degerini giriniz\n");
 scanf("%d",&u);
 s=kuvvet(t,u);
 printf("%d üssü %d degeri %d dir.\n",t,u,s);
 break;
 }
 case(4):{
 int s1,s2,m;
 s1=1+rand()%100;
 printf("1.sayi=%d\n",s1);
 s2=101+rand()%100;
 printf("2.sayi=%d\n",s2);
 m=top(s1,s2);
 printf("Sayilarin toplami=%d\n",m);
 break ; 
 } 
 default :
 printf("Yanlis Secim !!!\n");
 }
 printf("\n\n");
 }while(x!=-1); 
}
int asal(int x,int i){ 
 if (x<2)
 return 0;
 if (i==1)
 return 1;
 if (x%i==0)
 return 0;
 return asal(x,i-1);
}
int carp(int x,int y){
 if (y==0)
 return 0;
 if (y==1)
 return x;
 return x+carp(x,y-1);
}
int kuvvet(int taban,int us){
 if (us==0)
 return 1 ;
 return taban*kuvvet(taban,us-1);
}
int top(int x,int y){
 if(y==0)
 	return x;
 else
 	return top(x,y-1)+1;
}
