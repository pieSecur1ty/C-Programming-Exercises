#include<stdio.h>

int main(void)
{
    int num, tmp;

    printf("[+] Enter the number : ");
    scanf("%d", &num);

    tmp = num;

    int r, rev_num = 0;
    while(num > 0)
    {
        r = num % 10;
        rev_num = (rev_num * 10) + r;
        num = num / 10;
    }

    num = tmp;

    printf("[+] reverse number : %d\n", rev_num);

    if(rev_num == num)
    {
        printf("[+] %d is a Palindrome Number.", num);
    }
    else
    {
        printf("[+] %d is not a Palindrome Number.", num);
    }

    return 0;
}
