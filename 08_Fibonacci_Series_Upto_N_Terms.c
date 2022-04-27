// 0 1 1 2 3 5 8 13 21 34 ..........
#include<stdio.h>

int main(void)
{
    int n;
    printf("[+] Enter the maximum number : ");
    scanf("%d", &n);

    printf("[+] Fibonacci Series Upto %d : \n", n);

    int a = 0, b = 1, c;

    if(n==1)
    {
       printf("%d", a);
    }

    else if(n==2)
    {
        printf("%d", a);
        printf(" %d", b);
    }
    else if(n>=3)
    {
        printf("%d", a);
        printf(" %d", b);
        for(int i=2; i<n; i++)
        {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
