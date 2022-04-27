#include<stdio.h>

int main(void)
{
    int num, tmp;

    printf("[+] Enter the number : ");
    scanf("%d", &num);

    tmp = num;

    int r, sum = 0;

    while(num>0)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }

    num = tmp;

    if(num%sum == 0)
    {
        printf("[+] %d is a Harshad Number.\n", num);
    }
    else
    {
        printf("[+] %d is not a Harshad Number.\n", num);
    }

    return 0;
}
