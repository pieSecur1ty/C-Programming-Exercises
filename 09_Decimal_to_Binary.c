#include<stdio.h>

int main(void)
{
    int num, tmp;
    printf("[+] Enter the number : ");
    scanf("%d", &num);

    int binarray[16], r, i = 0, j;
    while(num>0)
    {
        r = num % 2;
        binarray[i] = r;
        i++;
        num = num / 2;
    }
    num = tmp;
    printf("[+] The Binary number of %d : ", num);
    for(j=i-1; j>=0; j--)
    {
        printf("%d", binarray[j]);
    }

    return 0;
}
