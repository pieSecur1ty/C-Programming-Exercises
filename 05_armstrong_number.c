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
        sum = sum + (r*r*r);
        num = num / 10;
    }

    num = tmp;

    if(num == sum)
    {
        printf("[+] %d is Armstrong Number.\n", num);
    }
    else
    {
        printf("[+] %d is not Armstrong Number.\n", num);
    }

    return 0;
}
