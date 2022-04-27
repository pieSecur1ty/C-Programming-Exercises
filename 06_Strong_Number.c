// Test case : i/p = 145 ; o/p = Strong number
#include<stdio.h>

int main(void)
{
    int num, tmp;

    printf("[+] Enter the number : ");
    scanf("%d", &num);

    tmp = num;

    int r, factorial = 1, sum = 0;

    while(num>0)
    {
        r = num % 10;
        factorial = 1;
        for(int i=1; i<=r; i++)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        num = num / 10;
    }

    num = tmp;

    if(sum == num)
    {
        printf("[+] %d is a strong number.\n", num);
    }

    else
    {
        printf("[+] %d is not a strong number.\n", num);
    }

    return 0;
}
