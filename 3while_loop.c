#include<stdio.h>

int main(){

  int n,r=1;

  printf("enter the number:");
  scanf("%d",&n);
   while(r<=n){
   
  printf("%d * %d =%d\n",r,n,r*n);
  r++;


   }


    return 0;
}