/*Menu Driven program for check odd, even & prime.*/

#include<stdio.h>

void odd_even();
void prime();

void odd_even()
{
    int num;
    printf("Enter a Number :");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("Number %d is Even\n",num);
    }
    else 
    {
        printf("Number %d is Odd\n", num);
    }
}

void prime()
{
    int num;
    printf("Enter a Number :");
    scanf("%d", &num);
    int flag = 1;

    for(int i=2; i*i <= num; i++)
    {
        if(num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        printf("Number %d is Prime\n", num);
    }
    else{
        printf("Number %d is Not Prime\n", num);
    }
}
int main() 
{
    int choice = -1;
    printf("MENU:\n1. Check_Odd/Even\n2. Check_Prime\n3. Exit");
    
    int flag = 1;
    while(flag)
    {
        printf("\nEnter your choice :");
        scanf("%d", &choice);
        
        switch(choice)
        {
        case 1:
            odd_even();
            break;
        case 2:
            prime();
            break;
        case 3:
            printf("GooDByE...!!!\n");
            flag = 0;
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    }
    return 0;
}