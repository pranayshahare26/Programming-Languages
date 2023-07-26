#include<stdio.h>
int main() 
{
    int num, count, i, value;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("\nAll PRIME numbers from 1 to %d are\n\n", num);
    value = 2;
    while(value <= num) 
    {
        count = 0;
        for(i = 2; i <= value/2; i++) 
        {
            if(value % i == 0) 
            {
                count++;
                break;
            }
        }
        if(count == 0 && value != 1) 
        {
            printf("%d\t", value);
        }
        value++;
    }
    printf("\n");
    return 0;
}