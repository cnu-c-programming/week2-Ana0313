#include <stdio.h>

int main()
{
    int num;
    int isPrime = 1; 
  
    scanf("%d", &num);

    if (num <= 1) 
    {
        isPrime = 0; 
    }
    else 
    {
        for (int i = 2; i < num; i++) 
        {
            if (num % i == 0) 
            {
                isPrime = 0; 
                break;      
            }
        }
    }

    if (isPrime == 1) 
    {
        printf("true\n");
    } 
    else 
    {
        printf("false\n");
    }

    return 0;
}
