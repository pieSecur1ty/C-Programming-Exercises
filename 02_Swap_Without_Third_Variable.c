#include<stdio.h>

int main(void)
{
    int num1, num2;

    printf("[+] Enter the first number : ");
    scanf("%d", &num1);
    printf("[+] Enter the second number : ");
    scanf("%d", &num2);

    printf("[+] The numbers before swapping : %d %d \n", num1, num2);

    //Swapping Two numbers without using third variable.
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("[+] The numbers after swapping : %d %d \n", num1, num2);

    return 0;
}
