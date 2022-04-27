#include<stdio.h>

int main(void)
{
    int num, tmp;

    printf("[+] Enter the number : ");
    scanf("%d", &num);

    tmp = num;

    int factorial = 1;

    if(num==0)
    {
        printf("[+] Factorial of %d is : %d\n", num, factorial);
    }
    else
    {
        for(int i = 1; i<=num; i++)
        {
            factorial = factorial * i;
        }
        num = tmp;
        printf("[+] Factorial of %d is : %d\n", num, factorial);
    }

    return 0;
}
