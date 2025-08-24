#include<stdio.h>

int main(){

int n ,count=1, r=1;

printf("Enter the number: ");
 scanf("%d",&n);
  while(count<=n){
   r*=count;
   count++;


  }
    printf(" the count of 1 to %d =%d\n",n,r);


    return 0;
}