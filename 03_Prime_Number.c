// 2, 3 , 5 , 7, 11 ............
#include<stdio.h>

int main(void)
{
    int num, tmp;

    printf("[+] Enter the number : ");
    scanf("%d", &num);
    tmp = num;
    int counter = 0;

    for(int i = 1; i<=num; i++)
    {
        if((num%i) == 0)
        {
            counter += 1;
        }
    }

    num = tmp;
    if(counter > 2)
    {
        printf("[+] %d is not a Prime Number.\n", num);
    }
    else
    {
        printf("[+] %d is a Prime Number.\n", num);
    }

    return 0;
}
