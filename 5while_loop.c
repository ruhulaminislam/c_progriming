#include<stdio.h>

int main(){

   int n, i;

   printf("enter the number:");
   scanf("%d",&n);


   while(i * i<=n){
    if(i*i==n){
  printf("Yes, %d is a perfect square.",n);
    i++;
    } else{ 

 printf("not");

    }
 
   }

   

    return 0;
}