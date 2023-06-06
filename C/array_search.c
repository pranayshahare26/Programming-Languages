#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[10];
    int i;
    int search_val = 9;
    int flag;
    
    for(i=0;i<10;i++)
    {
        A[i] = rand()%100;
    }
    
    for(i=0;i<10;i++)
    {
        printf("\nA[%d] = %d ",i,A[i]);
    }
    
    flag = 0;
    for(i=0;i<10;i++)
    {
        if(search_val == A[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n Search value (%d) found in the array.\n",search_val);
    }
    else
    {
        printf("\n Search value (%d) not found.\n",search_val);
    }
    printf("\n");
    printf("\n");
}
