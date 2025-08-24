#include<stdio.h>


int main(){

  int n,sum=0, i=1;

  printf("enter the number: ");
     scanf("%d",&n);

     while(i<=n){

      sum +=i;
       i++;

     }
      printf("the sum of 1 to %d =%d\n",n,sum);





    return 0;
}