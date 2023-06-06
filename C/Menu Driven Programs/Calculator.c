// Menu Driven Program for a calculator in C
#include <stdio.h>

int main() 
{
    int choice = -1;
    int a, b;

        printf("MENU:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
    
    while(1){
        printf("\nChoose your Operation :");
        scanf("%d", &choice);
        
        if(choice == 1){
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number :");
            scanf("%d", &b);
            printf("Result : %d + %d = %d\n", a, b, (a+b));
        }
        else if (choice == 2){
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number :");
            scanf("%d", &b);
            printf("Result : %d - %d = %d\n", a, b, (a-b));
        }
        else if (choice == 3){
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number :");
            scanf("%d", &b);
            printf("Result : %d * %d = %d\n", a, b, (a*b));
        }
        else if (choice == 4){
            printf("Enter First number :");
            scanf("%d", &a);
            printf("Enter Second number :");
            scanf("%d", &b);
            printf("Result : %d / %d = %d\n", a, b, (a/b));
        }
        else if (choice == 5){
            printf("GooDByE...!!!\n");            
            break;
        }
        else{
            printf("Invalid Input\n");
        }
    }
    return 0;
}