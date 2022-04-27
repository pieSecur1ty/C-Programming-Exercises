#include<stdio.h>

int main(void)
{
    int num1, num2;
    printf("[+] Enter the first number : ");
    scanf("%d", &num1);
    printf("[+] Enter the second number : ");
    scanf("%d", &num2);

    // Finding HCF
    int hcf = 1, lcm = 1;
    for(int i=1; i<=num1 && i<= num2; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }

    printf("[+] HCF or GCD = %d\n", hcf);

    // Finding LCM
    lcm = (num1 * num2)/hcf;

    printf("[+] LCM = %d\n", lcm);

    return 0;
}
