#include<stdio.h>


int main(){


    int ruhulamin,kali,root;

      printf("enter the numbeer:");
         scanf("%d",&ruhulamin);
         
           for(kali=1; kali<=10; kali++){
             printf("\n----------------");      
             printf("\n|%d| * |%2d|=|%2d|",ruhulamin,kali,ruhulamin*kali);
             if(kali==2){
              printf("|5| * |2|=|");
              scanf("%d",&root);
              if(root==10){

              printf("good");
             }else{
              printf("rong number");
             }
           }
          }
          printf("\n----------------");
  
            
    return 0;
}