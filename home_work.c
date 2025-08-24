#include <stdio.h>
#include <string.h>

int main() {
    char operation[10];
    int addition, subtraction, multiplication, division;
    int first_number, second_number;
    float zakat;
while(1){
     printf("Enter the operation (operation, zakat ,Mult,digital,switch): ");
      scanf(" %9s", operation);

if(strcmp(operation, "zakat") == 0) {
        float amount;
        printf("Enter the amount for zakat: ");
        scanf("%f", &amount);
        zakat = amount * 0.025;
        printf("Your zakat is: %.2f\n", zakat);}else


        if(strcmp(operation,"Mult")==0){
            int ruhulamin;
             printf("enter the number:");
              scanf("%d",&ruhulamin);
            for(int i=1; i<=10; i++){
                printf(" %2d * %2d = %2d \n",i,ruhulamin,i*ruhulamin);}}else

        if(strcmp(operation, "digital")==0){
           char ruhulamin[50];
           while(1){
            printf("enter the name:");
            scanf("%49s",ruhulamin);

            if(strcmp(ruhulamin, "exit")==0){
                printf("Program terminated.\n");
                break;
            }

            printf("Digital NexGen Cyber security Expert\n");
            if(strcmp(ruhulamin, "rokon")==0){
                printf("Rayhan islam (rokon)\n");
                printf("Digital NexGen Owner\n");
            }   else if (strcmp(ruhulamin, "ruhulamin")==0) {
            printf("MD RUHUL AMIN\n");
            printf("Digital NexGen Employee\n");}


              else if (strcmp(ruhulamin, "Doy")==0) {
            printf("Hri Doy\n");
            printf("Digital NexGen Employee\n");}

              else if (strcmp(ruhulamin, "mohona")==0) {
            printf("Mst Mohona\n");
            printf("Digital NexGen Employee\n");}
              else if (strcmp(ruhulamin, "Lord Stark")==0) {
            printf("Lord Stark\n");
            printf("Digital NexGen Employee\n");}

              else if (strcmp(ruhulamin, "Rahul Hassan")==0) {
            printf("Rahul Hassan\n");
            printf("Digital NexGen Employee\n");}

              else if (strcmp(ruhulamin, "Galuz Hack")==0) {
            printf("Galuz Hack\n");
            printf("Digital NexGen Employee\n");}
             else {
            printf("Name not found in database.\n");
        }
               } } else

     if(strcmp(operation, "switch")==0){

        int a ,b;
        char op ,choice ;
        do{
            printf("enter the fist,sceond number:");
            scanf("%d%d",&a,&b);
            printf("choose operation(+,-,*,/):");
            scanf("%c",&op);

            switch(op){
               case '+':
               printf("result:%d\n",a+b);
               break;
               case '-':
               printf("result:%d\n",a-b);
               break;
               case '*':
               printf("result:%d\n",a*b);
               break;
               case '/':
               if(b!=0)
                printf("result:%.2f",(float)a/b);
                  else
                    printf("Cannot divide by zero!\n");
                    break;
               default:
                printf("invatid");

            }
            printf("Do you want to perform another operation? (y/n):");
            scanf(" %c",&choice);


        }while(choice=='y' || choice =='Y');
        printf("terminate");
        return 0;
     }


  if(strcmp(operation ,"operation")==0) {
        printf("enter the operation:");
        scanf("%2s",operation);
    printf("Enter two numbers: ");
    scanf("%d %d", &first_number, &second_number);



    if (strcmp(operation, "+") == 0) {
        addition = first_number + second_number;
        printf("Your result: %d\n", addition);

    } else if (strcmp(operation, "-") == 0) {
        subtraction = first_number - second_number;
        printf("Your result: %d\n", subtraction);

    } else if (strcmp(operation, "*") == 0) {
        multiplication = first_number * second_number;
        printf("Your result: %d\n", multiplication);

    } else if (strcmp(operation, "/") == 0) {
        if (second_number == 0) {
            printf("Cannot divide by zero.\n");
        } else {
            division = first_number / second_number;
            printf("Your result: %d\n", division);
        }

    } else if (strcmp(operation, "zakat") == 0) {
        float amount;
        printf("Enter the amount for zakat: ");
        scanf("%f", &amount);
        zakat = amount * 0.025;
        printf("Your zakat is: %.2f\n", zakat);

    } else {
        printf("Invalid method\n");
    }
   }
}
   system("pause");
    return 0;
}
